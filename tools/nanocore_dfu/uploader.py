#!/usr/bin/env python3
"""Independent NanoCore protocol-1 uploader. Hardware behavior is unvalidated.

inspect and simulate never open USB. upload is an explicit physical write.
Structural checks are enforced; publisher signatures are NOT verified/bypassed
on the device. This tool cannot decrypt firmware or establish device acceptance.
"""
from __future__ import annotations
import argparse
from dataclasses import dataclass
import hashlib
import json
from pathlib import Path
import struct
import sys
import time

VID, PID = 0x33C3, 0x6678
CHUNK, ERASE, MAX_CORE = 4096, 65536, 0xD0000

class ProtocolError(Exception):
    pass

class TransferError(ProtocolError):
    pass

@dataclass(frozen=True)
class Package:
    core: bytes
    version: str
    footer_bytes: int
    footer_digest_matches: bool | None
    file_sha256: str

    @classmethod
    def parse(cls, blob: bytes) -> 'Package':
        if len(blob) < 105 or blob[:5] != b'LUM0\x02':
            raise ProtocolError('Expected a complete LUM0 v2 package')
        flags, product = blob[5], int.from_bytes(blob[6:8], 'little')
        if product != 0x1301 or flags & 0x81 != 0x81 or (flags >> 1) & 63 != 1:
            raise ProtocolError('Only NanoCore product 0x1301 / host route 1 is supported')
        if int.from_bytes(blob[8:12], 'little') != 0:
            raise ProtocolError('Unsupported nonzero header field at offset 8')
        n, payload_size = blob[36], int.from_bytes(blob[12:16], 'little')
        end = 37 + n + payload_size + 68
        if n > 32 or payload_size == 0 or end > len(blob) or end > MAX_CORE:
            raise ProtocolError('Invalid header, payload length or core size')
        try:
            version = blob[37:37+n].decode('utf-8')
        except UnicodeDecodeError as e:
            raise ProtocolError('Invalid version text') from e
        tail = blob[end:]
        digest_matches = None
        if tail:
            if len(tail) < 121 or tail[:6] != b'FMUC\x01\x01':
                raise ProtocolError('Trailing data is not a protocol-1 FMUC contract')
            name_len = tail[24]
            if not 1 <= name_len <= 63 or len(tail) != 121 + name_len:
                raise ProtocolError('Invalid contract length')
            if struct.unpack_from('<H', tail, 6)[0] != len(tail):
                raise ProtocolError('Contract length field mismatch')
            if struct.unpack_from('<I', tail, 20)[0] != end:
                raise ProtocolError('Contract core length mismatch')
            if struct.unpack_from('<I4H', tail, 8) != (1, VID, 0x1301, VID, PID):
                raise ProtocolError('Contract device identity differs from NanoCore')
            digest_matches = tail[25+name_len:57+name_len] == hashlib.sha256(blob[:end]).digest()
        return cls(blob[:end], version, len(tail), digest_matches, hashlib.sha256(blob).hexdigest())

    def info(self):
        return {'version': self.version, 'file_sha256': self.file_sha256,
                'core_sha256': hashlib.sha256(self.core).hexdigest(), 'core_bytes': len(self.core),
                'footer_bytes_excluded': self.footer_bytes, 'footer_digest_matches': self.footer_digest_matches,
                'publisher_signatures': 'not verified; signatures remain in transmitted core',
                'firmware_blocks': (len(self.core)+CHUNK-1)//CHUNK,
                'erase_offsets': list(range(0, len(self.core), ERASE)),
                'device_acceptance': 'unknown; no real device tested'}

class Uploader:
    def __init__(self, transport, interface=0, clock=time.monotonic, sleep=time.sleep, poll_timeout=30):
        self.io, self.interface, self.clock, self.sleep = transport, interface, clock, sleep
        self.poll_timeout = poll_timeout

    def read(self, request, length, timeout=5000):
        data = self.io.control(0xA1, request, 0, self.interface, length, timeout)
        if not isinstance(data, (bytes, bytearray)) or len(data) != length:
            raise ProtocolError(f'Short/invalid response to request {request:#x}')
        return bytes(data)

    def write(self, request, value, data, timeout=5000):
        count = self.io.control(0x21, request, value, self.interface, data, timeout)
        if count != len(data):
            raise ProtocolError(f'Short write: {count} / {len(data)} bytes')

    def progress(self):
        # Optional vendor endpoint is advisory; authoritative result is GETSTATUS.
        try:
            return self.read(0xF1, 18)
        except TransferError:
            return None
        except ProtocolError:
            return None

    def prepare(self):
        deadline = self.clock() + self.poll_timeout
        def remaining_timeout():
            remaining = deadline - self.clock()
            if remaining <= 0:
                raise ProtocolError('Device did not become DFU idle before deadline')
            return min(5000, max(1, int(remaining * 1000)))
        for _ in range(16):
            state = self.read(5, 1, remaining_timeout())[0]
            if state == 2:
                return
            if state == 10:
                self.write(4, 0, b'', remaining_timeout())
            elif state in range(3, 9):
                self.write(6, 0, b'', remaining_timeout())
            else:
                raise ProtocolError(f'Unexpected initial DFU state {state}')
            if self.clock() >= deadline:
                break
        raise ProtocolError('Device did not become DFU idle')

    def poll(self, final=False):
        deadline = self.clock() + (120 if final else self.poll_timeout)
        for _ in range(10000):
            remaining = deadline-self.clock()
            if remaining <= 0:
                raise ProtocolError('DFU polling deadline exceeded')
            status = self.read(3, 6, min(120000 if final else 5000, max(1, int(remaining*1000))))
            error, state = status[0], status[4]
            if error or state == 10:
                raise ProtocolError(f'Device rejected operation: status={error}, state={state}')
            if state in ((2, 8) if final else (5,)):
                return
            if state not in ((4, 6, 7) if final else (3, 4)):
                raise ProtocolError(f'Unexpected DFU state {state}')
            delay = int.from_bytes(status[1:4], 'little') / 1000
            if delay > deadline-self.clock():
                raise ProtocolError('Device poll delay exceeds deadline')
            self.sleep(max(0.001, delay))
        raise ProtocolError('DFU poll count exceeded')

    def download(self, value, data, final=False):
        self.write(1, value, data)
        self.poll(final)
        self.progress()

    def upload(self, package):
        self.prepare()
        self.write(0xF0, 0, struct.pack('<I', len(package.core)))
        self.progress()
        for offset in range(0, len(package.core), ERASE):
            self.download(0, b'\x41'+struct.pack('<I', offset))
        self.download(0, b'\x21'+bytes(4))
        for offset in range(0, len(package.core), CHUNK):
            self.download(offset//CHUNK+2, package.core[offset:offset+CHUNK])
        self.download(len(package.core)//CHUNK+2, b'', final=True)
        return {'host_transfer_completed': True, 'bytes_sent': len(package.core),
                'device_boot_verified': False}

class Simulator:
    """Independent transport model; enforces erase/address/write ordering.

    It deliberately does not represent NanoCore cryptography or boot policy.
    Faults are test inputs, not observed physical device behaviors.
    """
    def __init__(self, fault=None, initial_state=2):
        self.state, self.fault, self.trace = initial_state, fault, []
        self.declared = None
        self.flash = bytearray(b'\xff'*MAX_CORE)
        self.erased = set()
        self.address_set = False
        self.firmware = bytearray()
        self.pending_busy = False
        self.finished = False

    def control(self, type_, request, value, index, payload, timeout):
        length = payload if isinstance(payload, int) else len(payload)
        row = {'type': type_, 'request': request, 'value': value, 'index': index,
               'length': length, 'timeout': timeout}
        if isinstance(payload, bytes):
            row.update(sha256=hashlib.sha256(payload).hexdigest(), prefix_hex=payload[:32].hex())
        self.trace.append(row)
        if index != 0:
            raise TransferError('Simulator only exposes interface 0')
        if type_ == 0xA1:
            if request == 5 and length == 1:
                return bytes([self.state])
            if request == 0xF1 and length == 18:
                if self.fault == 'progress-stall':
                    raise TransferError('Optional progress request stalled')
                return bytes(18)
            if request == 3 and length == 6:
                if self.fault == 'status-short':
                    return bytes(5)
                if self.fault == 'status-error':
                    return bytes([3, 0, 0, 0, 10, 0])
                if self.fault == 'busy' and not self.pending_busy:
                    self.pending_busy = True
                    return bytes([0, 1, 0, 0, 7 if self.state == 8 else 4, 0])
                self.pending_busy = False
                return bytes([0, 0, 0, 0, self.state, 0])
        if type_ != 0x21 or isinstance(payload, int):
            raise TransferError('Unsupported control request')
        if request in (4, 6) and not payload:
            self.state = 2
            return 0
        if request == 0xF0 and len(payload) == 4:
            self.declared = int.from_bytes(payload, 'little')
            if not 0 < self.declared <= MAX_CORE:
                raise ProtocolError('Invalid declared size')
            return 4
        if request != 1 or self.declared is None:
            raise ProtocolError('Download before metadata')
        if not payload:
            if len(self.firmware) != self.declared or value != self.declared//CHUNK+2:
                raise ProtocolError('Premature or incorrectly numbered finalization')
            self.state, self.finished = 8, True
            return 0
        if value == 0:
            if len(payload) != 5:
                raise ProtocolError('Malformed block-zero command')
            address = int.from_bytes(payload[1:], 'little')
            if payload[0] == 0x41 and address % ERASE == 0 and address < MAX_CORE:
                self.flash[address:address+ERASE] = b'\xff'*ERASE
                self.erased.add(address)
            elif payload[0] == 0x21 and address == 0:
                self.address_set = True
            else:
                raise ProtocolError('Unsupported address/erase command')
        else:
            if self.fault == 'write-timeout':
                raise TransferError('Injected write timeout')
            if self.fault == 'write-short':
                return len(payload)-1
            offset = len(self.firmware)
            if not self.address_set or value != offset//CHUNK+2 or len(payload) != min(CHUNK, self.declared-offset):
                raise ProtocolError('Out-of-order firmware block')
            if any(i not in self.erased for i in range(offset//ERASE*ERASE, offset+len(payload), ERASE)):
                raise ProtocolError('Write to unerased sector')
            self.flash[offset:offset+len(payload)] = payload
            self.firmware.extend(payload)
        self.state = 5
        return len(payload)

class UsbTransport:
    """Optional PyUSB backend, never loaded by inspect/simulate."""
    def __init__(self, bus, address):
        try:
            import usb.core
            import usb.util
        except ImportError as e:
            raise ProtocolError('Physical USB requires PyUSB and libusb; see README.txt') from e
        self.usb, self.util = usb.core, usb.util
        candidates = [d for d in usb.core.find(find_all=True, idVendor=VID, idProduct=PID)
                      if d.bus == bus and d.address == address]
        if len(candidates) != 1:
            raise ProtocolError(f'Expected one NanoCore DFU device at {bus}:{address}; found {len(candidates)}')
        self.device, self.claimed = candidates[0], False
        try:
            cfg = self.device.get_active_configuration()
            interfaces = [i for i in cfg if (i.bInterfaceClass, i.bInterfaceSubClass, i.bInterfaceProtocol) == (0xFE, 1, 2)
                          and i.bAlternateSetting == 0]
            if len(interfaces) != 1:
                raise ProtocolError('Expected exactly one DFU interface in alternate setting 0')
            self.interface = interfaces[0].bInterfaceNumber
            self.util.claim_interface(self.device, self.interface)
            self.claimed = True
        except Exception:
            self.close()
            raise

    def control(self, type_, request, value, index, payload, timeout):
        try:
            result = self.device.ctrl_transfer(type_, request, value, index, payload, timeout=timeout)
            return bytes(result) if type_ & 0x80 else result
        except self.usb.USBError as e:
            raise TransferError(str(e)) from e

    def close(self):
        try:
            if self.claimed:
                self.util.release_interface(self.device, self.interface)
        finally:
            self.util.dispose_resources(self.device)
            self.claimed = False

def main():
    p = argparse.ArgumentParser(description=__doc__)
    sub = p.add_subparsers(dest='command', required=True)
    for name in ['inspect', 'simulate', 'upload']:
        cmd = sub.add_parser(name)
        cmd.add_argument('firmware', type=Path)
        if name == 'simulate':
            cmd.add_argument('--output', type=Path, required=True, help='New directory for trace and captured core')
            cmd.add_argument('--fault', choices=['write-timeout','write-short','status-error','status-short','progress-stall','busy'])
        if name == 'upload':
            cmd.add_argument('--bus', type=int, required=True)
            cmd.add_argument('--address', type=int, required=True)
    args = p.parse_args()
    try:
        package = Package.parse(args.firmware.read_bytes())
        result = {'package': package.info(), 'mode': args.command}
        if args.command == 'inspect':
            print(json.dumps(result, indent=2));return 0
        if args.command == 'simulate':
            args.output.mkdir(parents=True, exist_ok=False)
            transport = Simulator(args.fault)
        else:
            transport = UsbTransport(args.bus, args.address)
        try:
            result['transfer'] = Uploader(transport, getattr(transport,'interface',0)).upload(package)
            result['success'] = True
        except ProtocolError as e:
            result.update(success=False, error=str(e))
        finally:
            if args.command == 'upload':
                transport.close()
            else:
                result['emulated_device'], result['fault'] = True, args.fault
                result['captured_bytes'] = len(transport.firmware)
                result['captured_equals_core'] = bytes(transport.firmware) == package.core
                (args.output/'events.jsonl').write_text(''.join(json.dumps(row)+'\n' for row in transport.trace))
                (args.output/'dfu-blocks.bin').write_bytes(transport.firmware)
                (args.output/'result.json').write_text(json.dumps(result, indent=2)+'\n')
        print(json.dumps(result, indent=2))
        return 0 if result['success'] else 1
    except (ProtocolError, OSError) as e:
        print(json.dumps({'success': False, 'error': str(e)}), file=sys.stderr);return 1

if __name__ == '__main__':
    raise SystemExit(main())
