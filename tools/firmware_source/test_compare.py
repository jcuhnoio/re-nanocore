import unittest
from compare_versions import compare,fingerprint

class ComparisonTests(unittest.TestCase):
    def row(self,addr,native='a',pseudo='p',shape=None):
        return dict(address=addr,native_sha256=native,pseudo_sha256=pseudo,range_shape=shape or [(0,12)],bytes=12)

    def test_duplicate_bodies_are_not_arbitrarily_paired(self):
        result=compare([self.row('a'),self.row('b')],[self.row('c')])
        self.assertEqual(result['exact_native'],[])
        self.assertEqual(result['pseudo_candidates'],[])
        self.assertEqual(result['ambiguous_native_groups'],[dict(left=['a','b'],right=['c'])])

    def test_native_range_shape_and_pseudocode_are_distinct(self):
        result=compare([self.row('a')],[self.row('b',shape=[(0,6),(20,6)])])
        self.assertEqual(result['exact_native'],[])
        self.assertEqual(len(result['pseudo_candidates']),1)

    def test_constants_and_string_literals_survive_normalization(self):
        a='int FUN_ram_40000000() { return 24; /* annotation */ }'
        b='int FUN_ram_40001000() { return 24; }'
        self.assertEqual(fingerprint(a),fingerprint(b))
        self.assertNotEqual(fingerprint(a),fingerprint(b.replace('24','48')))
        self.assertIn('"http://example.com/a"',fingerprint('puts("http://example.com/a"); // comment'))
        self.assertIn('"FUN_ram_40000000"',fingerprint('puts("FUN_ram_40000000");'))
