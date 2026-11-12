import hashlib
import json
from pathlib import Path
import struct
import unittest
from vibe_ui import jal,ui_patches,ui_processor_tail,version_config,code_path

class VibeUITests(unittest.TestCase):
    def test_jal(self):
        for pc,d in [(0x400263d6,0x40072062-0x400263d6),(0x40000000,-4096)]:
            w=struct.unpack('<I',jal(pc,pc+d))[0]
            value=((w>>31)&1)<<20|((w>>21)&1023)<<1|((w>>20)&1)<<11|((w>>12)&255)<<12
            if value&(1<<20):value-=1<<21
            self.assertEqual(value,d);self.assertEqual(w&0xfff,0x6f)
        with self.assertRaises(ValueError):jal(0,3)
    def test_source_guard(self):
        with self.assertRaises(ValueError):ui_patches(bytes(1024))
    def test_code_layout(self):
        code=json.loads(Path(__file__).with_name('vibe_ui_code.json').read_text())
        self.assertEqual(int(code['symbols']['defaults'],16)%4,0)
        for filename,key in [('vibe_ui.S','source_sha256'),('vibe_ui.ld','linker_sha256')]:
            self.assertEqual(hashlib.sha256(Path(__file__).with_name(filename).read_bytes()).hexdigest(),code['provenance'][key])
        for name,limit in [('.vibe_defaults',120),('.vibe_format',76),('.vibe_enum',94)]:
            data=bytes.fromhex(code['sections'][name]['hex'])
            self.assertLessEqual(len(data),limit)
        self.assertEqual(code['provenance']['source_sha256'],hashlib.sha256(Path(__file__).with_name('vibe_ui.S').read_bytes()).hexdigest())
        self.assertEqual(code['provenance']['linker_sha256'],hashlib.sha256(Path(__file__).with_name('vibe_ui.ld').read_bytes()).hexdigest())
        address=int(code['symbols']['defaults'],16)-int(code['sections']['.vibe_defaults']['address'],16)
        defaults=struct.unpack_from('<4f',bytes.fromhex(code['sections']['.vibe_defaults']['hex']),address)
        for a,b in zip(defaults,[.35,.8,.5,0]):self.assertAlmostEqual(a,b)

    def test_new_version_layout_and_provenance(self):
        for version in ['1.11','1.12']:
            config=version_config(version)
            code=json.loads(code_path(version).read_text())
            self.assertEqual(code['provenance']['firmware_version'],version)
            self.assertEqual(code['provenance']['source_sha256'],hashlib.sha256(Path(__file__).with_name('vibe_ui_multi.S').read_bytes()).hexdigest())
            self.assertEqual(int(code['symbols']['defaults'],16)%4,0)
            for name,limit in [('.vibe_defaults',120),('.vibe_format',config['format_capacity']),('.vibe_enum',94)]:
                self.assertLessEqual(len(bytes.fromhex(code['sections'][name]['hex'])),limit)
            self.assertEqual(ui_processor_tail(version)[0],int(config['enum_tail'],16))
            raw=Path(__file__).resolve().parents[2]/f'analysis/decoder-capture/validated-releases/nanocore-{version}/firmware.bin'
            if raw.exists():
                image=raw.read_bytes();patches=ui_patches(image,version)
                self.assertEqual(len(patches),6)
                for patch in patches:
                    offset=patch['offset'];expected=bytes.fromhex(patch['expected_hex'])
                    self.assertEqual(image[offset:offset+len(expected)],expected)
                    self.assertEqual(len(expected),len(bytes.fromhex(patch['replacement_hex'])))
                with self.assertRaises(ValueError):ui_patches(image,'1.12' if version=='1.11' else '1.11')
