import copy,hashlib,json,struct,unittest
from pathlib import Path
from package_octave import package,elf_payload,CODE_BASE,HEAP_START_ADDRESS,PROTECTED_SECTOR
from patch_image import extract_fit,OS_SIZE
ROOT=Path(__file__).resolve().parents[2]

def synthetic_elf(address=CODE_BASE,size=4):
    names=b'\0.text\0.bss\0.shstrtab\0';blob=bytearray(0x100)
    blob[:16]=b'\x7fELF\x01\x01\x01'+bytes(9)
    code=b'\x02\x90'*(size//2);codeoff=len(blob);blob.extend(code);no=len(blob);blob.extend(names)
    blob.extend(bytes(-len(blob)%4));shoff=len(blob)
    rows=[(0,0,0,0,0,0,0,0,0,0),(1,1,6,address,codeoff,size,0,0,2,0),(7,8,3,address+size,0,16,0,0,4,0),(12,3,0,0,no,len(names),0,0,1,0)]
    for row in rows:blob.extend(struct.pack('<10I',*row))
    struct.pack_into('<HHIIIIIHHHHHH',blob,16,2,243,1,address,0,shoff,0,52,0,0,40,len(rows),3)
    return bytes(blob)

class OctavePackageTests(unittest.TestCase):
    def test_version_layout_and_heap_ownership(self):
        profiles=json.loads((ROOT/'tools/custom_fx/octave_package_versions.json').read_text())
        for version,profile in profiles.items():
            path=ROOT/f'analysis/decoder-capture/validated-releases/nanocore-{version}/firmware.bin'
            if not path.exists():continue
            with self.subTest(version=version):
                source=path.read_bytes();original=source+bytes([0xa5])*(OS_SIZE-len(source))
                base=int(profile['code_base'],0);elf=synthetic_elf(base)
                offset=profile['segments'][1]['offset']+0x200
                hooks={'schema_version':1,'firmware_version':version,'elf_sha256':hashlib.sha256(elf).hexdigest(),
                       'patches':[{'offset':offset,'expected_hex':original[offset:offset+4].hex(),'replacement_hex':'82808280'}]}
                target,report=package(original,elf,hooks)
                self.assertEqual(report['code_base'],hex(base));self.assertEqual(report['firmware_version'],version)
                self.assertEqual(target[PROTECTED_SECTOR:],original[PROTECTED_SECTOR:])
                self.assertTrue(report['all_fit_hashes_verified'])
                wrong=synthetic_elf(base+4);bad=copy.deepcopy(hooks);bad['elf_sha256']=hashlib.sha256(wrong).hexdigest()
                with self.assertRaisesRegex(ValueError,'link address'):package(original,wrong,bad)
                bad=copy.deepcopy(hooks);bad['firmware_version']='1.10' if version!='1.10' else '1.12'
                with self.assertRaisesRegex(ValueError,'same-version'):package(original,elf,bad)
    def test_elf_padding_bss_and_ownership(self):
        data,sections=elf_payload(synthetic_elf())
        self.assertEqual(len(data),64);self.assertEqual(data[:4],b'\x02\x90'*2);self.assertEqual(data[4:],bytes(60))
        with self.assertRaisesRegex(ValueError,'link address'):elf_payload(synthetic_elf(CODE_BASE+4))
    def test_real_stock_and_univibe_packaging_guards(self):
        files=[ROOT/'analysis/decoder-capture/validated-releases/nanocore-1.12/firmware.bin',ROOT/'analysis/custom-fx/univibe-mxr-1.12/firmware.bin']
        if not all(p.exists() for p in files):self.skipTest('Vendor images intentionally remain local')
        for path in files:
            source=path.read_bytes();original=source+bytes([0xa5])*(OS_SIZE-len(source));elf=synthetic_elf()
            hook_offset=0xd000+0x79bdc
            hooks={'schema_version':1,'firmware_version':'1.12','elf_sha256':hashlib.sha256(elf).hexdigest(),'patches':[{'offset':hook_offset,'expected_hex':original[hook_offset:hook_offset+4].hex(),'replacement_hex':'82808280'}]}
            target,report=package(original,elf,hooks)
            self.assertEqual(len(target),OS_SIZE);self.assertEqual(extract_fit(target)['segments'][1]['size'],0xa4580)
            self.assertEqual(struct.unpack_from('<I',target,0x800+HEAP_START_ADDRESS-0x30040000)[0],CODE_BASE+64)
            self.assertEqual(target[report['appended_file_range'][1]:],original[report['appended_file_range'][1]:])
            self.assertEqual(target[PROTECTED_SECTOR:],original[PROTECTED_SECTOR:])
            self.assertTrue(report['all_fit_hashes_verified'])
            self.assertEqual(report['source_kind'],'univibe' if 'univibe' in str(path) else 'stock')
            bad=copy.deepcopy(hooks);bad['elf_sha256']='0'*64
            with self.assertRaisesRegex(ValueError,'ELF SHA'):package(original,elf,bad)
            bad=copy.deepcopy(hooks);bad['patches'][0]['expected_hex']='00000000'
            with self.assertRaisesRegex(ValueError,'Expected original'):package(original,elf,bad)
            bad=copy.deepcopy(hooks);bad['patches'][0]['offset']=PROTECTED_SECTOR
            with self.assertRaisesRegex(ValueError,'leaves original'):package(original,elf,bad)
            huge=synthetic_elf(size=0x20000);bad=copy.deepcopy(hooks);bad['elf_sha256']=hashlib.sha256(huge).hexdigest()
            with self.assertRaisesRegex(ValueError,'protected final'):package(original,huge,bad)
            corrupted=bytearray(original);corrupted[1000]^=1
            with self.assertRaises(ValueError):package(bytes(corrupted),elf,hooks)

if __name__=='__main__':unittest.main()
