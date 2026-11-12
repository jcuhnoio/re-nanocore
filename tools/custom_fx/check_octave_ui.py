#!/usr/bin/env python3
"""Offline native1.12 octave UI/telemetry checks; no device operations.

Usage: unicorn-python tools/custom_fx/check_octave_ui.py BUILD_DIRECTORY [REPORT]
Requires retained validated1.12 firmware.bin and check_vibe_ui_target.py harness.
Runs the linked machine code; memset/strcmp/printf/MMIO timer boundaries are
emulated. Timing and physical display/audio behavior are not established here.
"""
import sys,json,struct,textwrap,os,hashlib
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
os.chdir(ROOT)
sys.path.insert(0,str(ROOT/'tools/custom_fx'))
build=Path(sys.argv[1]) if len(sys.argv)>1 else Path('analysis/octave-runtime/build')
output=Path(sys.argv[2]) if len(sys.argv)>2 else build/'ui-tests.json'
elf_path=build/'device.elf'
from check_octave_target import elf
from octave_ui import patches
from octave_hooks import patches as dsp_patches
from unicorn import Uc,UC_ARCH_RISCV,UC_MODE_RISCV32,UC_HOOK_CODE
from unicorn import riscv_const as r
raw=Path(os.environ.get('OCTAVE_UI_SOURCE','analysis/decoder-capture/validated-releases/nanocore-1.12/firmware.bin')).read_bytes()
elfblob,segs,symbols=elf(elf_path)
original=raw[0xd000:];new=bytearray(original)+bytearray(0x100000-len(original))
# Match the packager: allocated sections only, with explicit zeroed BSS.
shoff=struct.unpack_from('<I',elfblob,32)[0];shent,shnum=struct.unpack_from('<HH',elfblob,46)
for i in range(shnum):
 section=struct.unpack_from('<10I',elfblob,shoff+i*shent)
 if section[2]&2:
  data=bytes(section[5]) if section[1]==8 else elfblob[section[4]:section[4]+section[5]]
  off=section[3]-0x40000000;new[off:off+len(data)]=data
for p in patches(raw,symbols)+dsp_patches(raw,symbols):
 off=p['offset']-0xd000;b=bytes.fromhex(p['replacement_hex']);new[off:off+len(b)]=b
c={'memset':0x40004f92,'strcmp':0x40005162,'native_snprintf':0x40005520}
def mapped(k,old):return c.get(k,old)
s=Path('tools/custom_fx/check_vibe_ui_target.py').read_text();s=s[s.index(' def run('):s.index(' counts=0')]
s=s.replace('if pc==mapped("memset",0x4000505c):','''if pc in (0x400086ec,0x40007bb6):
    uc.reg_write(r.UC_RISCV_REG_A0,0);uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if pc==0x4000303c:
    dst=uc.reg_read(r.UC_RISCV_REG_A0);src=uc.reg_read(r.UC_RISCV_REG_A1);n=uc.reg_read(r.UC_RISCV_REG_A2)
    uc.mem_write(dst,bytes(uc.mem_read(src,n)));uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if pc==0x40002fdc:
    a=uc.reg_read(r.UC_RISCV_REG_A0);b=uc.reg_read(r.UC_RISCV_REG_A1);n=uc.reg_read(r.UC_RISCV_REG_A2)
    uc.reg_write(r.UC_RISCV_REG_A0,int(bytes(uc.mem_read(a,n))!=bytes(uc.mem_read(b,n))))
    uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if pc==mapped("memset",0x4000505c):''')
s=s.replace('if pc==mapped("memset",0x4000505c):','if pc in (0x40004f92,0x400031bc):')
s=s.replace('if op==0x100b:value=address',"""if w&0xfe00707f in (0x4000100b,0x4200100b):
    condition=uc.reg_read(r.UC_RISCV_REG_X0+rs2)!=0
    if condition==bool(w&0x02000000) and rd:uc.reg_write(r.UC_RISCV_REG_X0+rd,uc.reg_read(r.UC_RISCV_REG_X0+rs1))
    uc.reg_write(r.UC_RISCV_REG_PC,pc+4);return
   if w&0x707f==0x300b:
    high=(w>>26)&31;low=(w>>20)&31
    if rd:uc.reg_write(r.UC_RISCV_REG_X0+rd,(uc.reg_read(r.UC_RISCV_REG_X0+rs1)>>low)&((1<<(high-low+1))-1))
    uc.reg_write(r.UC_RISCV_REG_PC,pc+4);return
   if op in (0x1800400b,0x1800500b,0x5800400b,0x5800500b,0x9800400b):
    width=4 if op&0x40000000 else 1
    base=uc.reg_read(r.UC_RISCV_REG_X0+rs1)
    if op&0x7000==0x4000:
     value=int.from_bytes(uc.mem_read(base,width),'little',signed=not bool(op&0x80000000))&0xffffffff
     if rd:uc.reg_write(r.UC_RISCV_REG_X0+rd,value)
    else:uc.mem_write(base,(uc.reg_read(r.UC_RISCV_REG_X0+rd)&((1<<(width*8))-1)).to_bytes(width,'little'))
    increment=(rs2-32 if rs2&16 else rs2)<<shift
    uc.reg_write(r.UC_RISCV_REG_X0+rs1,(base+increment)&0xffffffff)
    uc.reg_write(r.UC_RISCV_REG_PC,pc+4);return
   if op==0x500b:
    uc.mem_write(address,bytes([uc.reg_read(r.UC_RISCV_REG_X0+rd)&255]));uc.reg_write(r.UC_RISCV_REG_PC,pc+4);return
   if op==0x2000100b:value=(uc.reg_read(r.UC_RISCV_REG_X0+rd)+uc.reg_read(r.UC_RISCV_REG_X0+rs1)*uc.reg_read(r.UC_RISCV_REG_X0+rs2))&0xffffffff
   elif op==0x100b:value=address""")

exec(textwrap.dedent(s))
n=0
for block in range(10):
 for subtype in range(19):
  for mode in range(4):
   a,_,_=run(original,0x40026e8a,[block,subtype,mode]);b,_,_=run(new,0x40026e8a,[block,subtype,mode])
   expected=11 if block==1 and subtype==8 else a.reg_read(r.UC_RISCV_REG_A0)
   assert b.reg_read(r.UC_RISCV_REG_A0)==expected,(block,subtype,mode);n+=1
for style in range(3):
 for index,want in enumerate(['DRY','-2 OCT','-1 OCT','+1 OCT','+2 OCT','ATTACK','LOWPASS','DETUNE','DRY FX','RESON','LEVEL']):
  u,_,st=run(new,0x4002607e,[1,8,index,style]);assert st(u.reg_read(r.UC_RISCV_REG_A0))==want
for subtype in range(12):
 for size in range(13):
  mem={0x30010000:bytes([0xa5])*64}
  u,_,_=run(new,0x4006c932,[0x30010000,size,subtype],memory=mem)
  assert bytes(u.mem_read(0x30010000+size*4,64-size*4))==bytes([0xa5])*(64-size*4)
  if subtype==8:
   got=struct.unpack('<'+str(size)+'f',u.mem_read(0x30010000,size*4)) if size else ()
   assert all(abs(x-([.65,.05,.3,.65,.35,0,6350/17850,0,0,0,.5][i] if i<11 else 0))<1e-6 for i,x in enumerate(got))
  else:
   old,_,_=run(original,0x4006c932,[0x30010000,size,subtype],memory=mem)
   assert u.mem_read(0x30010000,64)==old.mem_read(0x30010000,64),subtype
for idx in range(11):
 for val in [0,.35,.5,1]:
  u,rendered,st=run(new,0x40027192,[1,8,idx,0x30020000,64,0],val)
  want=f'{int(val*100+.5)}%'
  if idx==5:want=f'{int(val*2000+.5)}ms'
  if idx==6:want=f'{int(150+val*17850+.5)}Hz'
  if idx==7:want=f'{int(val*30+.5)}ct'
  if idx==8:want=['SMOOTH','SMOOTH','FILTER','DETUNE'][int(val*3+.5)]
  if idx==9:want=['LOW','MEDIUM','HIGH','PEAK'][int(val*3+.5)]
  assert st(0x30020000)==want,(idx,val,st(0x30020000),want)
# All capacities, including empty, stay inside the caller's output buffer.
for size in range(9):
 u,_,_=run(new,0x40027192,[1,8,6,0x30020000,size,0],1.,memory={0x30020000:b'X'*32})
 assert bytes(u.mem_read(0x30020000+size,32-size))==b'X'*(32-size)
 if size:assert bytes(u.mem_read(0x30020000,size))[-1:]==b'\0' or b'\0' in bytes(u.mem_read(0x30020000,size))
for block in range(8):
 for subtype in range(19):
  for idx in range(12):
   mem={0x3006aebc+block:bytes([subtype])}
   u,_,_=run(new,0x4001b3b2,[block,idx,0x30010000],memory=mem)
   if block==1 and subtype==8:
    if idx in (8,9):
     assert bytes(u.mem_read(0x30010000,20))==struct.pack('<IffII',1,0,3,0,0)
     assert u.reg_read(r.UC_RISCV_REG_A0)==1
    else:assert u.reg_read(r.UC_RISCV_REG_A0)==0
   else:
    old,_,_=run(original,0x4001b3b2,[block,idx,0x30010000],memory=mem)
    assert u.mem_read(0x30010000,20)==old.mem_read(0x30010000,20),(block,subtype,idx)
u,_,st=run(new,0x40027192,[1,8,10,0x30020000,64,0],.5,memory={symbols['nc_octave_fault']:struct.pack('<I',1)})
assert st(0x30020000)=='CPU LIMIT'
descriptor={0x30010000:struct.pack('<IffII',1,0,3,0,0)}
u,_,_=run(new,0x4001aa50,[0x30010000],memory=descriptor)
assert u.reg_read(r.UC_RISCV_REG_A0)==4
for index,value in enumerate([0,333,667,1000]):
 u,_,_=run(new,0x4001ab50,[0x30010000,index],memory=descriptor)
 assert u.reg_read(r.UC_RISCV_REG_A0)==value
 u,_,_=run(new,0x4001aa8e,[0x30010000,value],memory=descriptor)
 assert u.reg_read(r.UC_RISCV_REG_A0)==index
# Execute the real native FX2 setter and bank publication. Only lock/copy/compare
# boundaries are stubbed; index rejection, value write and bank swap execute.
setter_cases=0
for subtype in range(12):
 for idx in range(13):
  bank=bytearray(0x864+4)
  struct.pack_into('<I',bank,0x13c,8);bank[0x140]=subtype
  bank[0x864:]=b'GUAR'
  mem={0x3004ee20:bytes(bank),0x3004f730:bytes([subtype]),0x3004f72c:struct.pack('<I',0x30010000)}
  u,_,_=run(new,0x4000bea8,[idx],.375,memory=mem)
  accepted=idx<(11 if subtype==8 else 5)
  assert u.reg_read(r.UC_RISCV_REG_A0)==(0 if accepted else 0xffffffff),(subtype,idx)
  assert bytes(u.mem_read(0x3004ee20+0x860,1))==bytes([int(accepted)])
  assert bytes(u.mem_read(0x3004ee20+0x864,4))==b'GUAR'
  if accepted:
   assert bytes(u.mem_read(0x3004ee20+0x308+0x144+idx*4,4))==struct.pack('<f',.375)
  setter_cases+=1
# Every non-target label path must retain its existing bounds and style behavior.
label_fallbacks=0
for block in range(8):
 for subtype in range(19):
  if block==1 and subtype==8:continue
  for idx in range(12):
   for style in range(3):
    a,_,sa=run(original,0x4002607e,[block,subtype,idx,style])
    b,_,sb=run(new,0x4002607e,[block,subtype,idx,style])
    assert sa(a.reg_read(r.UC_RISCV_REG_A0))==sb(b.reg_read(r.UC_RISCV_REG_A0))
    label_fallbacks+=1
# Exercise native formatting fallbacks, including MOD/UniVibe's stock branch.
format_fallbacks=0
for block in range(8):
 for subtype in range(19):
  if block==1 and subtype==8:continue
  for idx in range(3):
   a,ra,_=run(original,0x40027192,[block,subtype,idx,0x30020000,64,0],.5)
   b,rb,_=run(new,0x40027192,[block,subtype,idx,0x30020000,64,0],.5)
   assert ra==rb and a.reg_read(r.UC_RISCV_REG_A0)==b.reg_read(r.UC_RISCV_REG_A0)
   format_fallbacks+=1
print('PASS count cases',n,'labels33 defaults156 formatter44 enum1824; callee-saved registers and stack retained')
# Telemetry integration: execute exact linked code, stub only the MMIO timer.
s=s.replace('if pc in (0x40004f92,0x400031bc):','''if pc==0x40040028:
    uc.reg_write(r.UC_RISCV_REG_A0,0x12345678);uc.reg_write(r.UC_RISCV_REG_A1,9);uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if pc==0x4008f8b0:
    assert uc.reg_read(r.UC_RISCV_REG_SP)==stack-48
    assert int.from_bytes(uc.mem_read(stack-4,4),'little')==stop
    assert [uc.reg_read(getattr(r,f'UC_RISCV_REG_A{i}')) for i in range(len(args))]==args
    uc.reg_write(r.UC_RISCV_REG_SP,stack);uc.reg_write(r.UC_RISCV_REG_PC,stop);return
   if pc in (0x40004f92,0x400031bc):''')
exec(textwrap.dedent(s))
for payload,length in [(b'OCT?',4),(b'OCT!',4),(b'OCT?',3),(b'OCT?x',5),(b'ABCD',4)]:
 mem={0x30010000:payload,0x30011000:bytes(8),0x30012000:b'\xa5',0x3004c228:struct.pack('<I',123456)}
 if 'nc_octave_job_max' in symbols:
  mem[symbols['nc_octave_job_max']]=struct.pack('<9I',*range(11,20));mem[symbols['nc_octave_job_calls']]=struct.pack('<9I',*range(21,30))
 u,_,_=run(new,symbols['nc_octave_diagnostic'],[0x39,0x30010000,length,0x30011000,0x30012000],memory=mem)
 if payload==b'OCT?' and length==4:
  ptr,size=struct.unpack('<II',u.mem_read(0x30011000,8));data=struct.unpack('<%dI'%(size//4),u.mem_read(ptr,size))
  assert (size,data[1])==((216,3) if 'nc_octave_job_max' in symbols else (144,2)) and data[35]==11 and data[0]==0x4f435431 and data[2]==4000000 and data[16]==123456
  if size==216:assert data[36:45]==tuple(range(11,20)) and data[45:54]==tuple(range(21,30))
  assert data[25:27]==(0x12345678,9) and bytes(u.mem_read(0x30012000,1))==b'\0'
 else:assert bytes(u.mem_read(0x30012000,1))==b'\xa5'
print('PASS telemetry exact bounded schema2/3 response;4nonmatching requests preserveargs+nativeprologue; stack/callee-saved preserved')
for mode in range(3):
 u,_,st=run(new,0x40025d92,[1,8,mode]);assert st(u.reg_read(r.UC_RISCV_REG_A0))=='OCTAVE'
print('PASS OCTAVE displayname all3styles')
output.write_text(json.dumps({'source_sha256':hashlib.sha256(raw).hexdigest(),'elf_sha256':hashlib.sha256(elf_path.read_bytes()).hexdigest(),'ui_source_sha256':hashlib.sha256(Path('firmware/custom-fx/octave/device_ui.S').read_bytes()).hexdigest(),'source_maps':{'effect_name':'0x40025d92','parameter_labels':'0x4002607e','parameter_count':'0x40026e8a','format':'0x40027192','enum':'0x4001b3b2','defaults':'0x4006c932','amp_read':'0x4008f8ac','timer_hz':'0x4003fe7c','timer_ticks':'0x40040028','heap_free':'0x3004c228'},'count_cases':760,'labels':33,'defaults':156,'format':44,'enum':1824,'effect_name':3,'telemetry':5,'native_non_target_unchanged':True,'stack_and_callee_saved_preserved':True,'setter_cases':setter_cases,'label_fallbacks':label_fallbacks,'format_fallbacks':format_fallbacks,'physical_operations':False,'limits':'memset/strcmp/printf and MMIO timer boundaries emulated; no hardware timing established'},indent=2)+'\n')
