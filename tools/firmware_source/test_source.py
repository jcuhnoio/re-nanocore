import unittest
from export_source import rename_identifiers
from seed_elf import seed
from identify_instructions import identify
import sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'firmware_decode'))
from decode import mapped_elf
import struct

class SourceTests(unittest.TestCase):
    def test_rename_preserves_literals_and_comments(self):
        text='int param_1; /* param_1 */ puts("param_1"); // param_1\nreturn param_1;'
        self.assertEqual(rename_identifiers(text,{'param_1':'length'}),'int length; /* param_1 */ puts("param_1"); // param_1\nreturn length;')

    def test_vendor_mapping_checks_bytes_and_line_boundaries(self):
        old='40010792: 02a7800b <unknown>\n40010796: 02a7800b <unknown>\n'
        vendor='40010790: 0000 .short\n40010792:\t02a7800b dcache.ipa a5\n'
        rows=identify(old,vendor,0x40010000,0x40010800)
        self.assertEqual(rows[0]['vendor_mnemonic'],'dcache.ipa')
        self.assertIsNone(rows[1]['vendor_mnemonic'])
        with self.assertRaises(ValueError):identify(old,vendor.replace('02a7800b','02b7800b'),0x40010000,0x40010800)

    def test_explicit_ram_function_seed(self):
        original=mapped_elf([dict(name='seg0',size=4,data=b'\x13\x00\x00\x00',load_address=0x30040000)],0x30040000)
        result=seed(original,[dict(address='0x30040000',name='ram_processor',kind='function')])
        shoff=struct.unpack_from('<I',result,32)[0]
        symtab=struct.unpack_from('<10I',result,shoff+4*40)
        _,addr,_,info,_,_=struct.unpack_from('<IIIBBH',result,symtab[4]+16)
        self.assertEqual((addr,info),(0x30040000,0x12))

    def test_symbol_seed_preserves_segment_mapping(self):
        data=b'\x13\x05\x00\x00\x82\x80'
        original=mapped_elf([dict(name='seg1',size=len(data),data=data,load_address=0x40000000)],0x40000000)
        result=seed(original,[dict(address='0x40000000',name='entry')])
        self.assertEqual(result[4096:4096+len(data)],data)
        self.assertEqual(result[52:84],original[52:84])
        shoff=struct.unpack_from('<I',result,32)[0]
        symtab=struct.unpack_from('<10I',result,shoff+4*40)
        name,addr,size,info,other,section=struct.unpack_from('<IIIBBH',result,symtab[4]+16)
        self.assertEqual((addr,info,section),(0x40000000,0x12,1))

if __name__=='__main__': unittest.main()
