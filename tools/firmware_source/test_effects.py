import hashlib,json,tempfile,unittest
from pathlib import Path
from build_effects import verify
from effect_catalog import Image

class EffectPackageTests(unittest.TestCase):
    def fixture(self,root):
        body=b'int process(void) { return 0; }\n';(root/'processor.c').write_bytes(body)
        data={'count':1,'functions':[{'address':'0x40000000','file':'processor.c','sha256':hashlib.sha256(body).hexdigest(),'callees':[]}],'effects':[{'processor':'0x40000000','callback_file':'processor.c'}]}
        (root/'manifest.json').write_text(json.dumps(data));return data
    def test_source_corruption_is_rejected(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d);self.fixture(root);self.assertEqual(verify(root),1)
            (root/'processor.c').write_text('changed')
            with self.assertRaisesRegex(ValueError,'Changed source'):verify(root)
    def test_missing_callback_and_dependency_are_rejected(self):
        with tempfile.TemporaryDirectory() as d:
            root=Path(d);m=self.fixture(root);m['effects'][0]['processor']='0x40000004';(root/'manifest.json').write_text(json.dumps(m))
            with self.assertRaisesRegex(ValueError,'callback'):verify(root)
            m=self.fixture(root);m['functions'][0]['callees']=['0x40000004'];(root/'manifest.json').write_text(json.dumps(m))
            with self.assertRaisesRegex(ValueError,'dependency'):verify(root)
    def test_image_reads_require_mapped_range(self):
        image=Image.__new__(Image);image.segments=[(0x30040000,b'Gate\0')]
        self.assertEqual(image.string(0x30040000),'Gate')
        with self.assertRaises(ValueError):image.read(0x3003ffff,1)
        with self.assertRaises(ValueError):image.read(0x30040004,2)
