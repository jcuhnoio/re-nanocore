#!/usr/bin/env python3
"""Check exact stock1.11/1.12 Velvet machine-code equivalence outside relocations.

Uses archived decoded release images; no device operations. This comparison does
not establish runtime timing or exclude arbitrary computed incoming references.
"""
import hashlib
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[2]

def check():
    sites=json.loads((ROOT/'evidence/custom-fx-patch-site.json').read_text())['sites']
    images={v:(ROOT/f'analysis/decoder-capture/validated-releases/nanocore-{v}/seg1.bin').read_bytes() for v in ['1.11','1.12']}
    bodies={v:bytes.fromhex(sites[v]['original_body_hex']) for v in images}
    entries={v:int(sites[v]['entry_address'],16) for v in images}
    for v,b in bodies.items():
        offset=entries[v]-0x40000000
        assert images[v][offset:offset+len(b)]==b
    a,b=bodies['1.11'],bodies['1.12'];assert len(a)==len(b)==1392
    constants=[];calls=[];offset=0;instructions=0
    def word(data,i):return int.from_bytes(data[i:i+4],'little')
    def signed(value,bits):return value-(1<<bits) if value&(1<<(bits-1)) else value
    def call_target(w,pc):
        immediate=((w>>31)&1)<<20|((w>>21)&1023)<<1|((w>>20)&1)<<11|((w>>12)&255)<<12
        return pc+signed(immediate,21)
    while offset<len(a):
        size=4 if a[offset]&3==3 else 2
        assert size==(4 if b[offset]&3==3 else 2)
        wa,wb=word(a,offset),word(b,offset)
        if a[offset:offset+size]!=b[offset:offset+size]:
            assert size==4
            if wa&0x7f==0x17: # AUIPC+FLW pair: resolve and compare exact constant bytes.
                la,lb=word(a,offset+4),word(b,offset+4)
                assert wa&0xfff==wb&0xfff and la&0xfffff==lb&0xfffff
                assert la&0x707f==0x2007 and (wa>>7)&31==(la>>15)&31
                targets={}
                values=[]
                for v,w,l in [('1.11',wa,la),('1.12',wb,lb)]:
                    target=entries[v]+offset+signed(w&0xfffff000,32)+signed(l>>20,12)
                    targets[v]=hex(target);values.append(images[v][target-0x40000000:target-0x40000000+4])
                assert len(values[0])==4 and values[0]==values[1]
                constants.append({'offset':hex(offset),'targets':targets,'value_hex':values[0].hex()})
                offset+=4;instructions+=1
            elif wa&0x7f==0x6f:
                assert wa&0xfff==wb&0xfff
                calls.append({'offset':hex(offset),'1.11':hex(call_target(wa,entries['1.11']+offset)),'1.12':hex(call_target(wb,entries['1.12']+offset))})
            else:raise AssertionError(f'Unexpected changed instruction at {offset:x}')
        offset+=size;instructions+=1
    assert len(constants)==41 and len(calls)==1
    report={'kind':'static instruction/constant comparison','versions':['1.11','1.12'],
        'instructions':instructions,'body_bytes':len(a),'body_sha256':{v:hashlib.sha256(b).hexdigest() for v,b in bodies.items()},
        'all_nonrelocation_instructions_identical':True,'relocated_identical_constants':constants,'relocated_calls':calls,
        'limitations':['No physical execution or timing validation','Relocated external call semantics not independently re-proven here; custom DSP has no external calls','Computed incoming pointers remain outside static scan coverage']}
    return report

if __name__=='__main__':print(json.dumps(check(),indent=2))
