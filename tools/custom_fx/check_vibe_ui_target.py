#!/usr/bin/env python3
"""Offline native1.10 UI branch checks under Unicorn. No physical operations."""
import json,struct,sys
from pathlib import Path
from vibe_ui import ui_patches,ui_processor_tail
ROOT=Path(__file__).resolve().parents[2]

def check(output):
 from unicorn import Uc,UC_ARCH_RISCV,UC_MODE_RISCV32,UC_HOOK_CODE
 from unicorn import riscv_const as r
 raw=(ROOT/'analysis/decoder-capture/validated-releases/nanocore-1.10/firmware.bin').read_bytes()
 original=raw[0x9000:0x9000+0x99f28];new=bytearray(original)
 for p in ui_patches(raw):
  off=p['offset']-0x9000;new[off:off+len(bytes.fromhex(p['replacement_hex']))]=bytes.fromhex(p['replacement_hex'])
 address,tail=ui_processor_tail();new[address-0x40000000:address-0x40000000+len(tail)]=tail
 def run(image,entry,args,number=None,memory=None):
  u=Uc(UC_ARCH_RISCV,UC_MODE_RISCV32);u.mem_map(0x40000000,0x100000);u.mem_map(0x30000000,0x100000);u.mem_write(0x40000000,bytes(image))
  stack=0x300f0000;stop=0x400ffff0;u.reg_write(r.UC_RISCV_REG_SP,stack);u.reg_write(r.UC_RISCV_REG_RA,stop);u.reg_write(r.UC_RISCV_REG_MSTATUS,0x6000)
  for i,v in enumerate(args):u.reg_write(getattr(r,f'UC_RISCV_REG_A{i}'),v)
  if number is not None:u.reg_write(r.UC_RISCV_REG_FA0,0xffffffff00000000|struct.unpack('<I',struct.pack('<f',number))[0])
  saved={}
  for name in ['GP','TP']+[f'S{i}' for i in range(12)]+[f'FS{i}' for i in range(12)]:
   reg=getattr(r,'UC_RISCV_REG_'+name);saved[reg]=0x3ff0000012340000+reg if name.startswith('FS') else 0x12340000+reg;u.reg_write(reg,saved[reg])
  for address,data in (memory or {}).items():u.mem_write(address,data)
  rendered=[]
  def string(a):
   b=bytes(u.mem_read(a,100));return b[:b.index(0)].decode()
  def hook(uc,pc,size,_):
   if pc==0x4000505c:
    address=uc.reg_read(r.UC_RISCV_REG_A0);value=uc.reg_read(r.UC_RISCV_REG_A1)&255;n=uc.reg_read(r.UC_RISCV_REG_A2)
    uc.mem_write(address,bytes([value])*n);uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if pc==0x4000522c:
    a=string(uc.reg_read(r.UC_RISCV_REG_A0));b=string(uc.reg_read(r.UC_RISCV_REG_A1));uc.reg_write(r.UC_RISCV_REG_A0,0 if a==b else 1);uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if pc==0x400055ea:
    fmt=string(uc.reg_read(r.UC_RISCV_REG_A2));v=uc.reg_read(r.UC_RISCV_REG_A3)
    rendered.append(string(v) if fmt=='%s' else (fmt,v));uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if size!=4:return
   w=int.from_bytes(uc.mem_read(pc,4),'little')
   if w&0x7f!=0x0b:return
   rd,rs1,rs2,shift=(w>>7)&31,(w>>15)&31,(w>>20)&31,(w>>25)&3
   address=(uc.reg_read(r.UC_RISCV_REG_X0+rs1)+(uc.reg_read(r.UC_RISCV_REG_X0+rs2)<<shift))&0xffffffff
   op=w&0xf800707f
   if op==0x100b:value=address
   elif op==0x4000400b:value=int.from_bytes(uc.mem_read(address,4),'little')
   elif op==0x8000400b:value=int.from_bytes(uc.mem_read(address,1),'little')
   else:raise RuntimeError(f'Unsupported vendor {w:08x} at {pc:08x}')
   if rd:uc.reg_write(r.UC_RISCV_REG_X0+rd,value)
   uc.reg_write(r.UC_RISCV_REG_PC,pc+4)
  u.hook_add(UC_HOOK_CODE,hook);u.emu_start(entry,stop,count=50000)
  assert u.reg_read(r.UC_RISCV_REG_PC)==stop
  assert u.reg_read(r.UC_RISCV_REG_SP)==stack
  assert all(u.reg_read(k)==v for k,v in saved.items())
  return u,rendered,string
 counts=0
 for block in range(10):
  for subtype in range(19):
   for mode in [0,1,2,3]:
    a,_,_=run(original,0x400262d0,[block,subtype,mode]);b,_,_=run(new,0x400262d0,[block,subtype,mode])
    expected=4 if block==5 and subtype==10 else a.reg_read(r.UC_RISCV_REG_A0)
    assert b.reg_read(r.UC_RISCV_REG_A0)==expected,(block,subtype,mode)
    counts+=1
 labels=[]
 for style in [0,1,2]:
  for idx,expected in enumerate(['SPEED','DEPTH','LEVEL','MODE']):
   u,_,string=run(new,0x40025306,[5,10,idx,style]);got=string(u.reg_read(r.UC_RISCV_REG_A0));assert got==expected,(idx,style,got);labels.append(got)
 for n in range(13):
  u,_,_=run(new,0x40072036,[0x30010000,n],memory={0x30010000:bytes([0xa5])*64});values=struct.unpack('<12f',u.mem_read(0x30010000,48))
  assert bytes(u.mem_read(0x30010000+n*4,64-n*4))==bytes([0xa5])*(64-n*4)
  for i in range(n):assert abs(values[i]-([.35,.8,.5,0][i] if i<4 else 0))<1e-6
 format_cases=[]
 for idx in range(4):
  for val in [0,.35,.499,.5,1]:
   u,rendered,_=run(new,0x400265a0,[5,10,idx,0x30020000,64,0],val)
   expected=('CHORUS' if val<.5 else 'VIBRATO') if idx==3 else ('%ld',int(val*100+.5))
   assert rendered==[expected],(idx,val,rendered,expected)
   format_cases.append({'index':idx,'value':val,'rendered':rendered})
 enum_cases=0
 for block in range(8):
  for subtype in range(19):
   for index in range(6):
    memory={0x30069b94+block:bytes([subtype])}
    a,_,_=run(original,0x4001a956,[block,index,0x30010000],memory=memory)
    b,_,_=run(new,0x4001a956,[block,index,0x30010000],memory=memory)
    if (block,subtype,index)==(5,10,3):
     assert b.reg_read(r.UC_RISCV_REG_A0)==1
     assert bytes(b.mem_read(0x30010000,20))==struct.pack('<IffII',1,0,1,0,0)
    else:
     assert a.reg_read(r.UC_RISCV_REG_A0)==b.reg_read(r.UC_RISCV_REG_A0),(block,subtype,index)
     assert a.mem_read(0x30010000,20)==b.mem_read(0x30010000,20),(block,subtype,index)
    enum_cases+=1
 descriptor={0x30010000:struct.pack('<IffII',1,0,1,0,0)}
 u,_,_=run(new,0x40019eb0,[0x30010000],memory=descriptor);assert u.reg_read(r.UC_RISCV_REG_A0)==2
 for index,value in [(0,0),(1,1000)]:
  u,_,_=run(new,0x40019fb0,[0x30010000,index],memory=descriptor);assert u.reg_read(r.UC_RISCV_REG_A0)==value
 for value,index in [(0,0),(499,0),(500,1),(1000,1)]:
  u,_,_=run(new,0x40019eee,[0x30010000,value],memory=descriptor);assert u.reg_read(r.UC_RISCV_REG_A0)==index
 report={'enum_cases':enum_cases,'enum_states':2,'enum_output_values':[0,1000],'count_cases':counts,'label_cases':len(labels),'default_lengths_tested':13,'format_cases':format_cases,'scope':'Native patched code, enum conversions and branches execute; memset/strcmp/printf boundaries emulated; no display device observed','physical_ui_verified':False}
 Path(output).write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':check(sys.argv[1])
