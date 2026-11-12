import hashlib,json,tempfile,unittest
from pathlib import Path
from organize_source import build,verify,call_edges

class OrganizationTests(unittest.TestCase):
    def fixture(self,root):
        source=root/'input';source.mkdir();rows=[]
        for addr,name,code in [
            ('0x40000000','entry','void entry(void) { helper(); /* helper(); */ puts("helper()"); }\n'),
            ('0x40001000','helper','void helper(void) { }\n'),
            ('0x40001020','unknown','int unknown(void) { return 3; }\n')]:
            path=addr+'.c';(source/path).write_text(code)
            rows.append(dict(address=addr,name=name,status='decompiled',file=path,sha256=hashlib.sha256(code.encode()).hexdigest(),warnings=[],opaque_custom_operations=False,bad_instruction=False,evidence_id='synthetic'))
        (source/'index.json').write_text(json.dumps(dict(target={'synthetic':True},functions=rows)))
        layout=root/'layout.json';layout.write_text(json.dumps({'functions':{'0x40000000':{'file':'boot/startup.c','basis':'fixture'}}}))
        return source,layout

    def test_complete_lossless_split_and_determinism(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);source,layout=self.fixture(root)
            result=build(source,layout,root/'out');build(source,layout,root/'again')
            self.assertEqual(result['count'],3);self.assertEqual(verify(root/'out'),3)
            for p in (root/'out').rglob('*'):
                if p.is_file():self.assertEqual(p.read_bytes(),(root/'again'/p.relative_to(root/'out')).read_bytes())
            graph=json.loads((root/'out/callgraph.json').read_text())
            self.assertEqual(graph['edges'],[dict(caller='0x40000000',callee='0x40001000',symbol='helper')])
            with self.assertRaises(ValueError):build(source,layout,root/'out')

    def test_input_and_output_corruption_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);source,layout=self.fixture(root);build(source,layout,root/'out')
            p=root/'out/boot/startup.c';p.write_text(p.read_text().replace('helper();','changed();',1))
            with self.assertRaises(ValueError):verify(root/'out')
            (source/'0x40000000.c').write_text('changed')
            with self.assertRaises(ValueError):build(source,layout,root/'new')

    def test_supplemental_corruption_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);source,layout=self.fixture(root);build(source,layout,root/'out')
            extra=root/'out/supplemental-dsp';extra.mkdir()
            body=b'void recovered(void) {}';(extra/'recovered.c').write_bytes(body)
            (extra/'index.json').write_text(json.dumps({'functions':[dict(address='0x40002000',file='recovered.c',sha256=hashlib.sha256(body).hexdigest())]}))
            self.assertEqual(verify(root/'out'),3)
            (extra/'recovered.c').write_text('changed')
            with self.assertRaisesRegex(ValueError,'Supplemental'):verify(root/'out')

    def test_reject_cross_version_layout(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);source,layout=self.fixture(root)
            p=source/'index.json';index=json.loads(p.read_text())
            index['firmware_version']='1.12';p.write_text(json.dumps(index))
            with self.assertRaisesRegex(ValueError,'version'):
                build(source,layout,root/'out')

    def test_duplicate_names_remain_ambiguous(self):
        f=[dict(address='0x1',name='root'),dict(address='0x2',name='copy'),dict(address='0x3',name='copy')]
        edges,ambiguous=call_edges(f,{'0x1':'void root() { copy(); }','0x2':'void copy() {}','0x3':'void copy() {}'})
        self.assertEqual(edges,[]);self.assertEqual(ambiguous,[dict(caller='0x1',symbol='copy',candidates=['0x2','0x3'])])

if __name__=='__main__':unittest.main()
