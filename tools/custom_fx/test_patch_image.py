import copy
import hashlib
import struct
import subprocess
import sys
import tempfile
import json
from pathlib import Path
import unittest
import zlib

from patch_image import patch_image, verify_manifest, extract_fit, OS_SIZE


def fixture():
    names, body = bytearray(), bytearray()
    word = lambda n: struct.pack('>I', n)
    def begin(name):
        body.extend(word(1)+name.encode()+b'\0'); body.extend(bytes(-len(body)%4))
    def prop(name, value):
        off = len(names); names.extend(name.encode()+b'\0')
        body.extend(word(3)+word(len(value))+word(off)+value); body.extend(bytes(-len(body)%4))
    def end(): body.extend(word(2))
    data = b'abcdefghABCDEFGH'
    begin(''); prop('description', b'fixture\0'); begin('images'); prop('version', b'1.12\0')
    begin('seg1')
    for key, val in [('arch', b'riscv\0'), ('type', b'firmware\0'), ('data-size', word(len(data))),
                     ('data-offset', word(16)), ('load', word(0x40000000)), ('entry', word(0x40000000))]:
        prop(key, val)
    for algo, digest in [('md5', hashlib.md5(data).digest()), ('crc32', word(zlib.crc32(data)))]:
        begin('hash-'+algo); prop('algo', algo.encode()+b'\0'); prop('value', digest); end()
    end(); end(); begin('configurations'); prop('default', b'conf\0'); begin('conf')
    prop('firmware', b'seg1\0'); end(); end(); end(); body.extend(word(9))
    total = 56+len(body)+len(names)
    blob = struct.pack('>10I', 0xd00dfeed, total, 56, 56+len(body), 40, 17, 16, 0, len(names), len(body))
    return blob+bytes(16)+body+names+b'P'*16+data+b'TAIL'*20, total+16


class PatchTests(unittest.TestCase):
    def setUp(self):
        self.blob, self.offset = fixture()
        self.plan = {'image_kind': 'raw-os-fit', 'firmware_version': '1.12',
                     'input_sha256': hashlib.sha256(self.blob).hexdigest(),
                     'patches': [{'offset': self.offset, 'expected_hex': b'abcd'.hex(), 'replacement_hex': b'WXYZ'.hex()}]}

    def test_hashes_and_tail_and_audit(self):
        output, manifest = patch_image(self.blob, self.plan)
        self.assertEqual(output[self.offset:self.offset+4], b'WXYZ')
        self.assertEqual(output[self.offset+4:], self.blob[self.offset+4:])
        self.assertEqual(output[self.offset-16:self.offset], b'P'*16)
        self.assertEqual(len(output), len(self.blob))
        checks = extract_fit(output)['segments'][0]['hashes_verified']
        self.assertEqual(set(checks), {'md5', 'crc32'})
        self.assertTrue(verify_manifest(self.blob, output, manifest))
        self.assertFalse(manifest['publisher_signed'])

    def test_invalid_plans(self):
        for mutation in ('digest', 'version', 'resize', 'expected', 'header', 'tail', 'overlap', 'empty', 'kind'):
            p = copy.deepcopy(self.plan)
            if mutation == 'digest': p['input_sha256'] = '0'*64
            if mutation == 'version': p['firmware_version'] = '1.10'
            if mutation == 'resize': p['patches'][0]['replacement_hex'] = '00'
            if mutation == 'expected': p['patches'][0]['expected_hex'] = '00000000'
            if mutation == 'header': p['patches'][0]['offset'] = 0
            if mutation == 'tail': p['patches'][0]['offset'] = self.offset+16
            if mutation == 'overlap': p['patches'] *= 2
            if mutation == 'empty': p['patches'] = []
            if mutation == 'kind': p['image_kind'] = 'spl'
            with self.subTest(mutation=mutation), self.assertRaises(ValueError): patch_image(self.blob, p)

    def test_corrupt_input_hashes(self):
        blob = bytearray(self.blob); blob[self.offset+8] ^= 1; blob = bytes(blob)
        self.plan['input_sha256'] = hashlib.sha256(blob).hexdigest()
        with self.assertRaisesRegex(ValueError, 'mismatch'): patch_image(blob, self.plan)

    def test_partition_size_limit(self):
        with self.assertRaisesRegex(ValueError, 'bounds'): patch_image(bytes(OS_SIZE+1), self.plan)

    def test_full_partition_tail_preserved(self):
        blob = self.blob + b'\xa5'*(OS_SIZE-len(self.blob))
        self.plan['input_sha256'] = hashlib.sha256(blob).hexdigest()
        output, manifest = patch_image(blob, self.plan)
        self.assertEqual(output[self.offset+4:], blob[self.offset+4:])
        self.assertEqual(manifest['size'], OS_SIZE)

    def test_cli_exclusive_output_and_manifest(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            original, plan, output, manifest = [root/name for name in ('input.bin', 'plan.json', 'output.bin', 'manifest.json')]
            original.write_bytes(self.blob); plan.write_text(json.dumps(self.plan))
            command = [sys.executable, str(Path(__file__).with_name('patch_image.py')),
                       '--input', str(original), '--plan', str(plan), '--output', str(output), '--manifest', str(manifest)]
            self.assertEqual(subprocess.run(command, capture_output=True).returncode, 0)
            saved = output.read_bytes()
            self.assertNotEqual(subprocess.run(command, capture_output=True).returncode, 0)
            self.assertEqual(output.read_bytes(), saved)
            self.assertEqual(original.read_bytes(), self.blob)
            self.assertTrue(verify_manifest(self.blob, saved, json.loads(manifest.read_text())))

    def test_manifest_and_output_tampering(self):
        output, manifest = patch_image(self.blob, self.plan)
        with self.assertRaises(ValueError): verify_manifest(self.blob, output[:-1]+b'!', manifest)
        manifest['publisher_signed'] = True
        with self.assertRaises(ValueError): verify_manifest(self.blob, output, manifest)


if __name__ == '__main__': unittest.main()
