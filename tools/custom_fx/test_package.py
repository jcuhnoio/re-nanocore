import contextlib
import io
import json
from pathlib import Path
import tempfile
import unittest

from package import package, label_patch, ROOT
from patch_image import extract_fit

class PackageTests(unittest.TestCase):
    def test_label_preserves_slot(self):
        patch=label_patch(b'prefixVELVET VIBRATO\0tail','TEST001')
        self.assertEqual(patch['offset'],6)
        self.assertEqual(bytes.fromhex(patch['replacement_hex']),b'TEST001'+bytes(8))
        for name in ['', 'x'*14, 'bad\0name']:
            with self.assertRaises(ValueError): label_patch(b'VELVET VIBRATO\0',name)
        with self.assertRaises(ValueError): label_patch(b'missing','TEST001')

    @unittest.skipUnless((ROOT/'analysis/custom-fx/univibe-mxr-build-1.11/build.json').exists(), 'local built payloads and decoded vendor images required')
    def test_multiversion_packages_keep_native_fit_version(self):
        for version, image_version in [('1.11','1.11b'),('1.12','1.12')]:
            with self.subTest(version=version), tempfile.TemporaryDirectory() as td:
                output=Path(td)/'out'
                image=ROOT/f'analysis/decoder-capture/validated-releases/nanocore-{version}/firmware.bin'
                build=ROOT/f'analysis/custom-fx/univibe-mxr-build-{version}'
                with contextlib.redirect_stdout(io.StringIO()):
                    package(image,build,output,'UNIVIBE','univibe')
                patched=(output/'firmware.bin').read_bytes()
                self.assertEqual(extract_fit(patched)['image_version'],image_version)
                self.assertEqual(len(patched),image.stat().st_size)
                self.assertEqual(json.loads((output/'plan.json').read_text())['firmware_version'],image_version)
                self.assertIn(b'UNIVIBE\0',patched)

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
