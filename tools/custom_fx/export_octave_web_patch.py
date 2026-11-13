#!/usr/bin/env python3
"""Export exact stock -> UniVibe + OCTAVE deltas, including appended payload.
No complete vendor firmware is published. Timestamp and unclaimed OS tail stay
local. Bytes claimed by the enlarged FIT are restored only from a saved backup.
"""
import argparse,hashlib,json,sys
from pathlib import Path
from patch_image import extract_fit,property_offsets,OS_SIZE,changed_ranges
PROTECTED=0xd0000
sha=lambda b:hashlib.sha256(b).hexdigest()
def export(stock,target):
    before,after=extract_fit(stock),extract_fit(target)
    assert len(target)==OS_SIZE and before['image_version']==after['image_version']
    version={'1.10':'1.10','1.11b':'1.11','1.12':'1.12'}[before['image_version']]
    if version!='1.12':raise ValueError('Only firmware 1.12 is supported for the Octaver web release')
    start,n=property_offsets(stock)[('','timestamp')];assert n==4
    old_size=len(stock);new_size=max(s['offset']+s['size'] for s in after['segments'])
    assert old_size<new_size<=PROTECTED
    def normalized(b):
        b=bytearray(b);b[start:start+4]=bytes(4);return sha(b)
    # Timestamp is device-owned, not an edit. The complete normalized FIT hash
    # authenticates code, native hashes, size fields, padding and linked BSS.
    old=bytearray(stock);new=bytearray(target[:old_size]);new[start:start+4]=old[start:start+4]
    edits=[{'offset':r['offset'],'beforeHex':old[r['offset']:r['offset']+r['size']].hex(),
            'afterHex':new[r['offset']:r['offset']+r['size']].hex()} for r in changed_ranges(old,new)]
    return {'schemaVersion':2,'firmwareVersion':version,'imageVersion':before['image_version'],
        'effect':'UNIVIBE_OCTAVE','replaces':['VELVET VIBRATO','OCTAVER'],
        'workInProgress':True,'hardwareTested':version=='1.12',
        'osSize':OS_SIZE,'stockFitSize':old_size,'installedFitSize':new_size,
        'protectedOffset':PROTECTED,'timestamp':{'offset':start,'size':4},
        'stockNormalizedSha256':normalized(stock),
        'installedNormalizedSha256':normalized(target[:new_size]),
        'patches':edits,'append':{'offset':old_size,'afterHex':target[old_size:new_size].hex()}}
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--stock',required=True,type=Path);p.add_argument('--target',required=True,type=Path);p.add_argument('--output',required=True,type=Path);a=p.parse_args()
    r=export(a.stock.read_bytes(),a.target.read_bytes());a.output.write_text(json.dumps(r,indent=2)+'\n');print(a.output)
