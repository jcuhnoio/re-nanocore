import hashlib
import struct
import unittest
import zlib

from cryptography.hazmat.primitives.asymmetric.ed25519 import Ed25519PrivateKey
from cryptography.hazmat.primitives.serialization import Encoding, PublicFormat
import decode


class DecoderTests(unittest.TestCase):
    def setUp(self):
        self.signer = Ed25519PrivateKey.from_private_bytes(bytes(range(32)))
        self.public = self.signer.public_key().public_bytes(Encoding.Raw, PublicFormat.Raw)

    def package(self, plaintext=b'test firmware payload', crc=None, footer=True):
        nonce = bytes(range(16))
        header = b'LUM0\x02\x83'+struct.pack('<HIII', 0x1301, 0, len(plaintext), 0x11000)+nonce+b'\x041.10'
        body = header+decode.transform(plaintext, nonce)+struct.pack('<I', zlib.crc32(plaintext) if crc is None else crc)
        core = body+self.signer.sign(body)
        if not footer:
            return core
        target = b'NanoCore'
        contract = b'FMUC\x01\x01'+struct.pack('<HIHHHHIB', 121+len(target), 1, 0x33c3, 0x1301, 0x33c3, 0x6678, len(core), len(target))+target+hashlib.sha256(core).digest()
        return core+contract+self.signer.sign(b'LIVTRA-FMU-CONTRACT-V1\0'+contract)

    def test_known_physical_fit_vector(self):
        cipher = bytes.fromhex('d2a4898b4d95df9939fc3d45564fbcd2ae5d40b1f55ff324debda14e700e515146800e16b813315dc95b8f831744e8d4d55f1edc50e2b0a57e032cad9b53f6eb')
        plain = bytes.fromhex('d00dfeed00000800000000380000036c000000280000001100000010000000000000007c00000334000000000000000000000000000000000000000100000000')
        self.assertEqual(decode.transform(cipher, bytes.fromhex('c8686958260e8689dc589b2f59c72e56')), plain)

    def test_unaligned_stream(self):
        nonce = bytes(range(16)); data = bytes(range(256))*10
        whole = decode.transform(data, nonce)
        for start, end in [(1, 31), (31, 97), (127, 1125), (2047, 2560)]:
            self.assertEqual(decode.transform(data[start:end], nonce, start), whole[start:end])
        self.assertEqual(decode.transform(whole, nonce), data)

    def test_signed_package_and_legacy_without_footer(self):
        for footer in (True, False):
            plain, report = decode.decode_package(self.package(footer=footer), self.public)
            self.assertEqual(plain, b'test firmware payload')
            self.assertEqual(report['footer_signature_verified'], footer)

    def test_corruption_rejected(self):
        package = self.package()
        for offset in (0, 5, 6, 8, 12, 36, 42, len(package)-1):
            changed = bytearray(package); changed[offset] ^= 1
            with self.subTest(offset=offset), self.assertRaises(ValueError):
                decode.decode_package(bytes(changed), self.public)

    def test_signed_wrong_crc_rejected(self):
        with self.assertRaisesRegex(ValueError, 'CRC32'):
            decode.decode_package(self.package(crc=0), self.public)

    def test_wrong_publisher_rejected(self):
        with self.assertRaisesRegex(ValueError, 'signature'):
            decode.decode_package(self.package())

    def test_truncation_and_trailing_bytes_rejected(self):
        p = self.package()
        for malformed in (p[:40], p[:-1], p+b'x'):
            with self.assertRaises(ValueError):
                decode.decode_package(malformed, self.public)

    def test_fit_bounds_rejected(self):
        with self.assertRaisesRegex(ValueError, 'Truncated'):
            decode.fit_nodes(b'')
        blob = struct.pack('>10I', 0xd00dfeed, 40, 40, 40, 40, 17, 16, 0, 0, 4)
        with self.assertRaisesRegex(ValueError, 'bounds'):
            decode.fit_nodes(blob)

    def fit_fixture(self):
        data = b'RISC-V test code'
        names = bytearray(); body = bytearray()
        def word(n): return struct.pack('>I', n)
        def begin(name):
            body.extend(word(1)+name.encode()+b'\0')
            body.extend(bytes(-len(body) % 4))
        def prop(name, value):
            off = len(names); names.extend(name.encode()+b'\0')
            body.extend(word(3)+word(len(value))+word(off)+value)
            body.extend(bytes(-len(body) % 4))
        def end(): body.extend(word(2))
        begin(''); prop('description', b'test\0'); begin('images'); prop('version', b'1.10\0')
        begin('seg0')
        for k, v in [('arch', b'riscv\0'), ('type', b'firmware\0'), ('data-size', word(len(data))),
                     ('data-offset', word(0)), ('load', word(0x40000000)), ('entry', word(0x40000000))]:
            prop(k, v)
        begin('hash-1'); prop('algo', b'sha256\0'); prop('value', hashlib.sha256(data).digest()); end()
        end(); end(); begin('configurations'); prop('default', b'conf\0')
        begin('conf'); prop('firmware', b'seg0\0'); end(); end(); end(); body.extend(word(9))
        total = 56+len(body)+len(names)
        return struct.pack('>10I', 0xd00dfeed, total, 56, 56+len(body), 40, 17, 16, 0, len(names), len(body))+bytes(16)+body+names+data

    def test_fit_extraction_and_hash_verification(self):
        blob = self.fit_fixture(); fit = decode.extract_fit(blob)
        self.assertEqual(fit['segments'][0]['data'], b'RISC-V test code')
        self.assertEqual(fit['entry_address'], 0x40000000)
        broken = bytearray(blob); broken[-1] ^= 1
        with self.assertRaisesRegex(ValueError, 'sha256 mismatch'):
            decode.extract_fit(broken)
        with self.assertRaisesRegex(ValueError, 'out of bounds'):
            decode.extract_fit(blob[:-1])

    def test_elf_maps_segments_exactly(self):
        segments = [{'name': 'seg0', 'data': b'abcd', 'size': 4, 'load_address': 0x30040000},
                    {'name': 'seg1', 'data': b'abcdefgh', 'size': 8, 'load_address': 0x40000000}]
        elf = decode.mapped_elf(segments, 0x40000000)
        self.assertEqual(elf[:7], b'\x7fELF\x01\x01\x01')
        self.assertEqual(struct.unpack_from('<H', elf, 18)[0], 243)
        self.assertEqual(struct.unpack_from('<I', elf, 24)[0], 0x40000000)
        for i, s in enumerate(segments):
            kind, off, va, pa, size, memsize, flags, align = struct.unpack_from('<8I', elf, 52+i*32)
            self.assertEqual((kind, va, pa, size, memsize, off % align), (1, s['load_address'], s['load_address'], s['size'], s['size'], 0))
            self.assertEqual(elf[off:off+size], s['data'])


if __name__ == '__main__':
    unittest.main()
