import json
from pathlib import Path
import tempfile
import unittest

from package import package, label_patch

class PackageTests(unittest.TestCase):
    def test_label_preserves_slot(self):
        patch=label_patch(b'prefixVELVET VIBRATO\0tail','TEST001')
        self.assertEqual(patch['offset'],6)
        self.assertEqual(bytes.fromhex(patch['replacement_hex']),b'TEST001'+bytes(8))
        for name in ['', 'x'*14, 'bad\0name']:
            with self.assertRaises(ValueError): label_patch(b'VELVET VIBRATO\0',name)
        with self.assertRaises(ValueError): label_patch(b'missing','TEST001')

    def test_rejects_unmatched_release_before_output(self):
        with tempfile.TemporaryDirectory() as td:
            d=Path(td)
            (d/'image.bin').write_bytes(b'not a release')
            (d/'gain.bin').write_bytes(b'\x82\x80')
            (d/'build.json').write_text(json.dumps({'firmware_version':'1.12'}))
            with self.assertRaisesRegex(ValueError,'exact validated release'):
                package(d/'image.bin',d,d/'out')
            self.assertFalse((d/'out').exists())

if __name__=='__main__': unittest.main()
