import struct,unittest
from dsp_dispatch import read_table

class DspTableTests(unittest.TestCase):
    def test_ram_callbacks_and_flags_preserved(self):
        blob=b'padding!'+struct.pack('<IIII',0x30043fd4,3,0x40071cfe,3)
        self.assertEqual(read_table(blob,0x1000,0x1008,2),[
            dict(kind=0,processor='0x30043fd4',flags=3),
            dict(kind=1,processor='0x40071cfe',flags=3)])
    def test_unmapped_table_rejected(self):
        with self.assertRaises(ValueError):read_table(b'1234',0x1000,0x1000,1)
        with self.assertRaises(ValueError):read_table(bytes(32),0x1000,0xfff,1)
