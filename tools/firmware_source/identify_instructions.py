"""Compare bounded LLVM unknown instruction sites with vendor objdump -D output."""
import argparse,collections,hashlib,json,re
from pathlib import Path

def identify(llvm,vendor,start,end):
    decoded={}
    for line in vendor.splitlines():
        m=re.match(r'^\s*([0-9a-f]+):\s+([0-9a-f]+)\s+(\S+)\s*(.*)$',line)
        if m:decoded[int(m[1],16)]=(int(m[2],16),m[3],m[4])
    rows=[]
    for line in llvm.splitlines():
        m=re.match(r'^([0-9a-f]+):\s+([0-9a-f]+)\s+<unknown>',line)
        if not m:continue
        address,word=int(m[1],16),int(m[2],16)
        if not start<=address<end:continue
        match=decoded.get(address)
        if match and match[0]!=word:raise ValueError(f'Different input bytes at {address:#x}')
        rows.append({'address':hex(address),'word':f'{word:08x}','vendor_mnemonic':match[1] if match else None,'operands':match[2] if match else None})
    return rows

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('llvm',type=Path);p.add_argument('vendor',type=Path);p.add_argument('output',type=Path)
    p.add_argument('--start',type=lambda v:int(v,0),required=True);p.add_argument('--end',type=lambda v:int(v,0),required=True);a=p.parse_args()
    rows=identify(a.llvm.read_text(),a.vendor.read_text(),a.start,a.end)
    report={'range_start':hex(a.start),'range_end_exclusive':hex(a.end),'note':'Linear disassembly sites; not proof of runtime execution or complete executable coverage.',
      'inputs':{str(x):hashlib.sha256(x.read_bytes()).hexdigest() for x in [a.llvm,a.vendor]},'sites':len(rows),'mnemonic_counts':dict(collections.Counter(x['vendor_mnemonic'] or 'UNRESOLVED' for x in rows)),'instructions':rows}
    a.output.write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report['mnemonic_counts'],indent=2))

if __name__=='__main__':main()
