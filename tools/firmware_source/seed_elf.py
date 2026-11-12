"""Add analyst names/function seeds to an ELF analysis copy; preserves load bytes."""
import argparse,json,struct
from pathlib import Path

def seed(blob,symbols):
    out=bytearray(blob); shoff=struct.unpack_from('<I',blob,32)[0]
    shentsize,shnum,shstr=struct.unpack_from('<HHH',blob,46)
    assert shentsize==40
    sections=[list(struct.unpack_from('<10I',blob,shoff+i*40)) for i in range(shnum)]
    oldnames=sections[shstr];strings=bytearray(blob[oldnames[4]:oldnames[4]+oldnames[5]])
    str_name=len(strings);strings+=b'.strtab\0';sym_name=len(strings);strings+=b'.symtab\0'
    names=bytearray(b'\0');syms=bytearray(16)
    for item in symbols:
        addr=int(item['address'],16);name=item['name'];idx=0xfff1
        for i,section in enumerate(sections):
            if section[3]<=addr<section[3]+section[5]:idx=i;break
        nameoff=len(names);names+=name.encode()+b'\0'
        isfunc=item.get('kind', 'function' if addr>=0x40000000 else 'object')=='function'
        syms+=struct.pack('<IIIBBH',nameoff,addr,0,0x12 if isfunc else 0x11,0,idx)
    sections[shstr][4]=len(out);sections[shstr][5]=len(strings);out+=strings
    sections.append([str_name,3,0,0,len(out),len(names),0,0,1,0]);out+=names
    out+=bytes(-len(out)%4);sections.append([sym_name,2,0,0,len(out),len(syms),shnum,1,4,16]);out+=syms
    out+=bytes(-len(out)%4);struct.pack_into('<I',out,32,len(out));struct.pack_into('<H',out,48,len(sections))
    for section in sections:out+=struct.pack('<10I',*section)
    # All original PT_LOAD bytes must remain exactly identical.
    phoff=struct.unpack_from('<I',blob,28)[0];phnum=struct.unpack_from('<H',blob,44)[0]
    for i in range(phnum):
        typ,off,va,pa,size,mem,flags,align=struct.unpack_from('<8I',blob,phoff+i*32)
        if typ==1:assert out[off:off+size]==blob[off:off+size]
    return bytes(out)

if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('elf',type=Path);p.add_argument('names',type=Path);p.add_argument('output',type=Path);p.add_argument('--ilp32d',action='store_true',help='Declare inferred RV32 compressed/double-float ABI in this analysis copy');a=p.parse_args()
    if a.output.exists():p.error('Output already exists')
    blob=bytearray(a.elf.read_bytes())
    if a.ilp32d:struct.pack_into('<I',blob,36,5)
    a.output.write_bytes(seed(bytes(blob),json.loads(a.names.read_text())['symbols']))
