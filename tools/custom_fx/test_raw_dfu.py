import unittest
from raw_dfu import RawOS, LibUSB, OS_SIZE, SECTOR, BLOCK, program, prepare_target, sha256
from test_patch_image import fixture
from patch_image import patch_image


class FakeUSB:
    def __init__(self, data):
        self.flash = bytearray(data)
        self.cursor = 0
        self.state = 2
        self.erases, self.writes, self.finalized = [], [], False
        self.short = False

    def transfer(self, typ, request, value, payload, index=0):
        assert index == 0
        if (typ, request) == (0xa1, 5): return bytes([self.state])
        if (typ, request) in ((0x21, 4), (0x21, 6)):
            self.state = 2
            return b''
        if (typ, request) == (0xa1, 3):
            if self.state == 3: self.state = 5
            return bytes([0, 0, 0, 0, self.state, 0])
        if (typ, request) == (0x21, 1):
            if payload == b'':
                self.finalized = True; self.state = 8
            elif value == 0:
                offset = int.from_bytes(payload[1:], 'little')
                assert 0 <= offset < OS_SIZE
                if payload[0] == 0x21: self.cursor = offset
                elif payload[0] == 0x41:
                    assert offset % SECTOR == 0 and offset+SECTOR <= OS_SIZE
                    self.erases.append(offset)
                    self.flash[offset:offset+SECTOR] = b'\xff'*SECTOR
                else: raise AssertionError('unknown command')
                self.state = 3
            else:
                offset = self.cursor + (value-2)*BLOCK
                assert len(payload) == BLOCK and offset+BLOCK <= OS_SIZE
                self.writes.append(offset)
                self.flash[offset:offset+BLOCK] = payload
                self.state = 3
            return b''
        if (typ, request) == (0xa1, 2):
            assert self.state == 2 and value == 2 and payload == BLOCK
            self.state = 9
            return bytes(self.flash[self.cursor:self.cursor+payload-(1 if self.short else 0)])
        raise AssertionError((typ, request, value, payload))


class DFUTests(unittest.TestCase):
    def setUp(self):
        self.current = b'\x55'*OS_SIZE
        self.usb = FakeUSB(self.current)
        self.device = RawOS(self.usb, sleep=lambda n: None)

    def test_complete_backup_never_erases_or_manifests(self):
        self.assertEqual(self.device.read_partition(), self.current)
        self.assertEqual(self.usb.erases, [])
        self.assertFalse(self.usb.finalized)

    def test_dynamic_sectors_full_readback_then_manifest(self):
        target = bytearray(self.current)
        target[100] = 0
        target[0x80000+100] = 0
        saved = []
        report = program(self.device, bytes(target), sha256(self.current), saved.append)
        self.assertEqual(self.usb.erases, [0, 0x80000])
        self.assertEqual(len(self.usb.writes), 32)
        self.assertEqual(saved, [bytes(target)])
        self.assertEqual(bytes(self.usb.flash), bytes(target))
        self.assertTrue(self.usb.finalized)
        self.assertTrue(report['exact_match'])

    def test_wrong_preflight_hash_never_writes(self):
        with self.assertRaisesRegex(ValueError, 'Live OS'):
            program(self.device, self.current, '0'*64, lambda data: None)
        self.assertEqual(self.usb.erases, [])
        self.assertFalse(self.usb.finalized)

    def test_partial_last_sector_rejected_before_erase(self):
        target = bytearray(self.current); target[0] = 0; target[-1] = 0
        with self.assertRaisesRegex(ValueError, 'partial'):
            self.device.write_changed(self.current, bytes(target))
        self.assertEqual(self.usb.erases, [])

    def test_readback_mismatch_does_not_manifest(self):
        target = bytearray(self.current); target[0] = 0
        real_write = self.device.write_changed
        def corrupt(current, image):
            sectors = real_write(current, image)
            self.usb.flash[42] ^= 1
            return sectors
        self.device.write_changed = corrupt
        saved = []
        with self.assertRaisesRegex(ValueError, 'readback mismatch'):
            program(self.device, bytes(target), sha256(self.current), saved.append)
        self.assertEqual(len(saved), 1)
        self.assertFalse(self.usb.finalized)

    def test_short_reads_fail(self):
        self.usb.short = True
        with self.assertRaisesRegex(ValueError, 'Incomplete'):
            self.device.read_partition()

    def test_restore_requires_exact_full_backup_and_valid_fit(self):
        image, _ = fixture()
        backup = image + b'\xaa'*(OS_SIZE-len(image))
        self.assertEqual(prepare_target(backup, sha256(backup)), backup)
        with self.assertRaises(ValueError): prepare_target(backup, '0'*64)
        with self.assertRaises(ValueError): prepare_target(image, sha256(image))
        with self.assertRaises(ValueError): prepare_target(self.current, sha256(self.current))

    def test_deploy_requires_matching_base_firmware(self):
        source, offset = fixture()
        backup = source + b'\xaa'*(OS_SIZE-len(source))
        def patch(data, version='1.12', expected=b'abcd', replacement=b'WXYZ'):
            return patch_image(data, {'image_kind': 'raw-os-fit', 'firmware_version': version,
                'input_sha256': sha256(data), 'patches': [{'offset': offset,
                'expected_hex': expected.hex(), 'replacement_hex': replacement.hex()}]})
        image, manifest = patch(source)
        self.assertEqual(prepare_target(backup, sha256(backup), image, source, manifest),
                         image + backup[len(image):])
        other_version = source.replace(b'1.12\0', b'1.11\0')
        other_image, other_manifest = patch(other_version, '1.11')
        with self.assertRaisesRegex(ValueError, 'version differs'):
            prepare_target(backup, sha256(backup), other_image, other_version, other_manifest)
        modified_source, _ = patch(source)
        other_image, other_manifest = patch(modified_source, expected=b'WXYZ', replacement=b'1234')
        with self.assertRaisesRegex(ValueError, 'segments differ'):
            prepare_target(backup, sha256(backup), other_image, modified_source, other_manifest)

    def test_usb_descriptor_partition_identity(self):
        class Descriptors:
            interface = bytes.fromhex('0904000000fe010201')
            functional = bytes.fromhex('09210bff0000101a01')
            name = 'os'
            def transfer(self, typ, request, value, length, index=0):
                self.assertions = (typ == 0x80 and request == 6)
                if value == 0x200:
                    config = bytes.fromhex('09021b000101008032') + self.interface + self.functional
                    return config[:length]
                value = self.name.encode('utf-16le')
                return (bytes([len(value)+2, 3])+value)[:length]
        descriptor = Descriptors()
        LibUSB.check_interface(descriptor)
        descriptor.name = 'spl'
        with self.assertRaisesRegex(ValueError, 'not os'): LibUSB.check_interface(descriptor)
        descriptor.name = 'os'
        descriptor.interface = bytes.fromhex('0904010000fe010201')
        with self.assertRaisesRegex(ValueError, 'interface'): LibUSB.check_interface(descriptor)


if __name__ == '__main__': unittest.main()
