"""Extract the 1.12 DSP dispatch table identified in nc_dsp_process_chain.

This table is not an effect-name table: internal kind and user-facing subtype
are separate. Processor addresses can refer to RAM or flash-mapped segments.
"""
import argparse,hashlib,json,struct
from pathlib import Path

TABLE_ADDRESS=0x4009f168

def read_table(blob,base,address=TABLE_ADDRESS,count=12):
    offset=address-base
    if offset<0 or offset+count*8>len(blob):raise ValueError('Dispatch table outside segment')
    return [dict(kind=i,processor=hex(fn),flags=flags) for i,(fn,flags) in enumerate(struct.iter_unpack('<II',blob[offset:offset+count*8]))]

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--decoded',type=Path,default=Path('analysis/decoder-capture/validated-releases/nanocore-1.12'));p.add_argument('--output',required=True,type=Path);a=p.parse_args()
    m=json.loads((a.decoded/'manifest.json').read_text());s=next(s for s in m['segments'] if s['name']=='seg1');b=(a.decoded/'seg1.bin').read_bytes()
    report={'firmware':'1.12','package_sha256':m['package_sha256'],'seg1_sha256':hashlib.sha256(b).hexdigest(),'table_address':hex(TABLE_ADDRESS),'entry_bytes':8,'dispatcher':'0x4005e044','evidence_id':'ev_f37a576475c22c9fd635a3889eb353dd8d38f9a12f980a6270ba9fb3d3ee3b9b','entries':read_table(b,s['load_address']),'flags_basis':'Dispatcher bit0 chooses input buffer reuse; bit1 permits mono-to-stereo expansion when chain option +0x861 is set. These are inferred routing semantics, not vendor flag names.'}
    a.output.write_text(json.dumps(report,indent=2)+'\n')
