import unittest
from pathlib import Path
from check_version_sites import check,ROOT

class VersionSiteTests(unittest.TestCase):
    @unittest.skipUnless((ROOT/'analysis/decoder-capture/validated-releases/nanocore-1.11/seg1.bin').exists(), 'local decoded vendor images required')
    def test_stock_processor_equivalence(self):
        report=check()
        self.assertEqual(report['instructions'],403)
        self.assertEqual(len(report['relocated_identical_constants']),41)
        self.assertTrue(report['all_nonrelocation_instructions_identical'])
