"""Recover the 1.12 effect selector catalog, keeping dormant labels distinct."""
import argparse,json,struct
from pathlib import Path

class Image:
    def __init__(self,root):
        self.manifest=json.loads((root/'manifest.json').read_text())
        self.segments=[(s['load_address'],(root/(s['name']+'.bin')).read_bytes()) for s in self.manifest['segments']]
    def read(self,address,n):
        for base,data in self.segments:
            if base<=address and address+n<=base+len(data):return data[address-base:address-base+n]
        raise ValueError('Unmapped read '+hex(address))
    def u32(self,address):return struct.unpack('<I',self.read(address,4))[0]
    def string(self,address):
        out=bytearray()
        while len(out)<256:
            b=self.read(address+len(out),1)
            if b==b'\0':return out.decode('ascii')
            out+=b
        raise ValueError('Unterminated string')
    def pointers(self,address,n):return [self.string(self.u32(address+i*4)) for i in range(n)]

def catalog(image):
    blocks=image.pointers(0x4009b384,11);counts=list(image.read(0x4009b1a8,11))
    mod_ids=list(image.read(0x4009b34c,9))
    label_tables={4:[image.string(0x4009a730)]+image.pointers(0x4009b1b4,7),5:[image.string(0x4009a724)]+image.pointers(0x4009b1d0,18),6:image.pointers(0x4009b218,8),9:[image.string(0x4009a74c)]+image.pointers(0x4009b240,11)}
    labels={0:[image.string(a) for a in [0x4009a6c0,0x4009a6b4,0x4009a6d8,0x4009a6ac]],1:['Drive model slot '+str(s) for s in range(30,38)]+[image.string(a) for a in [0x4009a6c8,0x4009a6d0,0x4009a6d4,0x4009a264]],2:['AMP model'],3:['CAB / IR'],7:[image.string(a) for a in [0x4009a740,0x4009a72c,0x4009a744]]}
    labels.update(label_tables);labels[8]=labels[0][:2]
    callbacks={0:'0x40069738',1:'0x4006ca50',2:'0x400741b8',3:'0x4005f2c4',4:'0x40066cee',5:'0x40071cfe',6:'0x30043fd4',7:'0x40066fb4',8:'0x40069738',9:'0x40068d96'}
    rows=[]
    for block in range(10):
        ids=mod_ids if block==5 else list(range(counts[block]))
        seen=set()
        for slot,subtype in enumerate(ids):
            normalized=2 if block==6 and subtype==4 else subtype
            alias=normalized in seen;seen.add(normalized)
            rows.append(dict(block=block,family=blocks[block],selector_slot=slot,subtype=subtype,normalized_subtype=normalized,name=labels[block][normalized],processor=callbacks[block],status='selector-alias' if alias else 'selector-entry',basis='Counts40025c82, picker40025d1e/40025d2c, normalization40025ca4 and names40025d92; runtime availability not physically exercised.'))
    dormant=[]
    for block,names in label_tables.items():
        used={r['normalized_subtype'] for r in rows if r['block']==block}
        for subtype,name in enumerate(names):
            if subtype not in used:dormant.append(dict(block=block,family=blocks[block],subtype=subtype,name=name,status='label-present-not-exposed-by-reviewed-selector'))
    synth=[dict(voice=i,name=image.string(image.u32(0x4009ff38+i*44)),status='metadata-only; selector count zero and no chain callback established') for i in range(60)]
    return dict(firmware='1.12',package_sha256=image.manifest['package_sha256'],raw_counts=counts,mod_picker_ids=mod_ids,effects=rows,dormant_labels=dormant,synth_metadata=synth,limitations=['Selector entries include aliases and shared algorithms; not a count of independent DSP implementations.','AMP, IR and drive data are external assets; their complete sounds cannot be recovered from firmware code alone.','Additional MOD labels can have code but are not all exposed by this selector.','SYN names alone do not prove executable synth effects in1.12.'])

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--decoded',type=Path,default=Path('analysis/decoder-capture/validated-releases/nanocore-1.12'));p.add_argument('--output',required=True,type=Path);a=p.parse_args()
    report=catalog(Image(a.decoded));a.output.write_text(json.dumps(report,indent=2)+'\n')
    print('Selector entries:',len(report['effects']),'non-alias:',sum(e['status']!='selector-alias' for e in report['effects']),'dormant labels:',len(report['dormant_labels']))
