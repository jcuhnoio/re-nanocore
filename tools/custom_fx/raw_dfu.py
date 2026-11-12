#!/usr/bin/env python3
"""NanoCore raw OS DFU transport. New backend: protocol tested, not hardware exercised.

Requires the pedal already in Lupgrader mode. Does not touch SPL or detach MIDI.
Deploy/restore require an exact full OS backup and matching live preflight hash.
"""
import argparse
import ctypes as c
import ctypes.util
import json
import os
from pathlib import Path
import struct
import time

from patch_image import OS_SIZE, extract_fit, require, sha256, verify_manifest

BLOCK = 4096
SECTOR = 65536


class LibUSB:
    def __init__(self, library=None):
        name = library or ctypes.util.find_library('usb-1.0')
        require(bool(name), 'libusb-1.0 not found; use --libusb')
        self.usb = u = c.CDLL(name)
        u.libusb_init.argtypes = [c.POINTER(c.c_void_p)]
        u.libusb_open_device_with_vid_pid.argtypes = [c.c_void_p, c.c_uint16, c.c_uint16]
        u.libusb_open_device_with_vid_pid.restype = c.c_void_p
        u.libusb_control_transfer.argtypes = [c.c_void_p, c.c_uint8, c.c_uint8, c.c_uint16, c.c_uint16, c.c_void_p, c.c_uint16, c.c_uint]
        u.libusb_claim_interface.argtypes = [c.c_void_p, c.c_int]
        u.libusb_release_interface.argtypes = [c.c_void_p, c.c_int]
        u.libusb_close.argtypes = [c.c_void_p]
        u.libusb_exit.argtypes = [c.c_void_p]
        self.ctx, self.handle, self.claimed = c.c_void_p(), None, False
        require(u.libusb_init(c.byref(self.ctx)) == 0, 'libusb init failed')
        try:
            self.handle = u.libusb_open_device_with_vid_pid(self.ctx, 0x33c3, 0x6678)
            require(bool(self.handle), 'NanoCore Lupgrader 33c3:6678 not found')
            self.check_interface()
            require(u.libusb_claim_interface(self.handle, 0) == 0, 'Could not claim interface 0')
            self.claimed = True
        except BaseException:
            self.close()
            raise

    def transfer(self, typ, request, value, payload, index=0):
        length = payload if isinstance(payload, int) else len(payload)
        buffer = c.create_string_buffer(max(length, 1)) if isinstance(payload, int) else c.create_string_buffer(payload)
        n = self.usb.libusb_control_transfer(self.handle, typ, request, value, index, buffer, length, 5000)
        require(n == length, f'USB transfer failed/short: request={request} result={n} expected={length}')
        return buffer.raw[:n] if typ & 128 else b''

    def check_interface(self):
        head = self.transfer(0x80, 6, 0x200, 9)
        length = int.from_bytes(head[2:4], 'little')
        require(9 <= length <= 4096, 'Unexpected configuration size')
        config = self.transfer(0x80, 6, 0x200, length)
        pos, interfaces, functional = 0, [], []
        while pos < len(config):
            size = config[pos]
            require(size >= 2 and pos+size <= len(config), 'Malformed USB descriptor')
            descriptor = config[pos:pos+size]
            if descriptor[1] == 4: interfaces.append(descriptor)
            if descriptor[1] == 0x21: functional.append(descriptor)
            pos += size
        require(len(interfaces) == 1 and len(functional) == 1, 'Unexpected USB interfaces')
        interface, dfu = interfaces[0], functional[0]
        require(len(interface) == 9 and interface[2:4] == b'\x00\x00' and interface[5:8] == b'\xfe\x01\x02', 'Not expected DFU interface')
        require(len(dfu) == 9 and int.from_bytes(dfu[5:7], 'little') == BLOCK and dfu[2] & 3 == 3, 'Unexpected DFU capabilities')
        require(interface[8] != 0, 'Missing OS interface string')
        prefix = self.transfer(0x80, 6, 0x300 | interface[8], 2, 0x409)
        name = self.transfer(0x80, 6, 0x300 | interface[8], prefix[0], 0x409)
        require(name[1] == 3 and name[2:].decode('utf-16le') == 'os', 'DFU interface is not os')

    def close(self):
        if self.handle:
            if self.claimed: self.usb.libusb_release_interface(self.handle, 0)
            self.usb.libusb_close(self.handle)
            self.handle = None
        if self.ctx:
            self.usb.libusb_exit(self.ctx)
            self.ctx = None


class RawOS:
    def __init__(self, transport, sleep=time.sleep):
        self.transport, self.sleep = transport, sleep

    def idle(self):
        state = self.transport.transfer(0xa1, 5, 0, 1)[0]
        if state == 10: self.transport.transfer(0x21, 4, 0, b'')
        elif state != 2: self.transport.transfer(0x21, 6, 0, b'')
        require(self.transport.transfer(0xa1, 5, 0, 1) == b'\x02', 'Not DFU idle')

    def download(self, block, payload):
        self.transport.transfer(0x21, 1, block, payload)
        for _ in range(100):
            status = self.transport.transfer(0xa1, 3, 0, 6)
            require(status[0] == 0 and status[4] in (3, 4, 5), 'DFU download error')
            if status[4] == 5: return
            delay = int.from_bytes(status[1:4], 'little') / 1000
            require(delay <= 5, 'Unexpected DFU polling delay')
            self.sleep(max(.001, delay))
        raise ValueError('DFU poll limit exceeded')

    def read_partition(self):
        result = bytearray()
        self.idle()
        for offset in range(0, OS_SIZE, BLOCK):
            self.download(0, b'\x21'+struct.pack('<I', offset))
            self.idle()
            result.extend(self.transport.transfer(0xa1, 2, 2, BLOCK))
            self.idle()
        require(len(result) == OS_SIZE, 'Incomplete OS read')
        return bytes(result)

    def write_changed(self, current, target):
        require(len(current) == len(target) == OS_SIZE, 'Full OS partitions required')
        sectors = [off for off in range(0, OS_SIZE, SECTOR) if current[off:off+SECTOR] != target[off:off+SECTOR]]
        # The last OS region is only 16KiB: a 64KiB erase could overlap presets.
        require(all(off+SECTOR <= OS_SIZE for off in sectors), 'Changed final partial erase sector; refusing possible preset damage')
        self.idle()
        for offset in sectors:
            self.download(0, b'\x41'+struct.pack('<I', offset))
            self.download(0, b'\x21'+struct.pack('<I', offset))
            for relative in range(0, SECTOR, BLOCK):
                self.download(relative//BLOCK+2, target[offset+relative:offset+relative+BLOCK])
            self.idle()
        return sectors

    def manifest(self):
        self.idle()
        self.transport.transfer(0x21, 1, 2, b'')
        status = self.transport.transfer(0xa1, 3, 0, 6)
        require(status[0] == 0 and status[4] == 8, 'Unexpected manifestation status; inspect device state')
        return status.hex()


def prepare_target(backup, backup_sha, image=None, source=None, manifest=None):
    require(len(backup) == OS_SIZE and sha256(backup) == backup_sha, 'Exact full OS backup SHA256 required')
    backup_fit = extract_fit(backup)
    if image is None: return backup
    require(source is not None and manifest is not None, 'Deploy needs source image and patch manifest')
    verify_manifest(source, image, manifest)
    source_fit = extract_fit(source)
    require(source_fit['image_version'] == backup_fit['image_version'],
            'Source firmware version differs from backup; upgrades are not supported')
    # Physical FIT timestamps can differ from release packages. Match executable
    # segments and mapping instead of treating header timestamps as identity.
    identity = lambda fit: [{k: s[k] for k in ('name', 'offset', 'size', 'load_address', 'entry_address', 'data')}
                            for s in fit['segments']]
    require(identity(source_fit) == identity(backup_fit),
            'Source firmware segments differ from backup; effect replacement requires matching base firmware')
    require(len(image) <= OS_SIZE, 'Image exceeds OS partition')
    target = image + backup[len(image):]
    extract_fit(target)
    return target


def program(device, target, expected_current_sha, save_verified, save_before=None):
    current = device.read_partition()
    require(sha256(current) == expected_current_sha, 'Live OS differs from expected current SHA256; no writes performed')
    if save_before is not None: save_before(current)
    sectors = device.write_changed(current, target)
    actual = device.read_partition()
    save_verified(actual)
    require(actual == target, 'Full readback mismatch; DO NOT reboot; restore required')
    return {'input_sha256': sha256(current), 'output_sha256': sha256(actual), 'bytes': len(actual),
            'erased_os_relative_sectors': sectors, 'exact_match': True, 'manifestation_status': device.manifest()}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=('backup', 'deploy', 'restore'))
    parser.add_argument('--output', required=True, type=Path, help='New directory for backup/readback and receipt')
    parser.add_argument('--libusb')
    parser.add_argument('--backup', type=Path)
    parser.add_argument('--backup-sha256')
    parser.add_argument('--expected-current-sha256')
    parser.add_argument('--image', type=Path)
    parser.add_argument('--source', type=Path)
    parser.add_argument('--manifest', type=Path)
    args = parser.parse_args()
    target = None
    if args.action != 'backup':
        require(args.backup is not None and args.backup_sha256 is not None, 'Backup and its exact SHA256 required')
        require(args.expected_current_sha256 is not None, 'Expected current full OS SHA256 required')
        if args.action == 'deploy':
            require(all((args.image, args.source, args.manifest)), 'Deploy requires image, source, manifest')
            target = prepare_target(args.backup.read_bytes(), args.backup_sha256, args.image.read_bytes(),
                                    args.source.read_bytes(), json.loads(args.manifest.read_text()))
        else:
            target = prepare_target(args.backup.read_bytes(), args.backup_sha256)
    args.output.mkdir(parents=True, exist_ok=False)
    def save(name, data):
        with (args.output/name).open('xb') as stream:
            stream.write(data); stream.flush(); os.fsync(stream.fileno())
    transport = None
    try:
        transport = LibUSB(args.libusb)
        device = RawOS(transport)
        if args.action == 'backup':
            data = device.read_partition()
            save('os-partition.bin', data)
            extract_fit(data)
            report = {'bytes': len(data), 'sha256': sha256(data), 'fit_verified': True, 'device_left_in_dfu': True}
        else:
            report = program(device, target, args.expected_current_sha256,
                             lambda data: save('readback.bin', data),
                             lambda data: save('preflight-os.bin', data))
        report['action'] = args.action
        save('receipt.json', (json.dumps(report, indent=2)+'\n').encode())
        print(json.dumps(report))
    except BaseException as exc:
        save('failure.txt', (str(exc)+'\n').encode())
        raise
    finally:
        if transport: transport.close()


if __name__ == '__main__': main()
