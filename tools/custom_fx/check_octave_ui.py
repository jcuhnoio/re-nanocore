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
from unicorn import Uc,UC_ARCH_RISCV,UC_MODE_RISCV32,UC_HOOK_CODE
from unicorn import riscv_const as r
raw=Path('analysis/decoder-capture/validated-releases/nanocore-1.12/firmware.bin').read_bytes()
_,segs,symbols=elf(elf_path)
original=raw[0xd000:];new=bytearray(original)+bytearray(0x100000-len(original))
for va,data,ms,flags in segs:new[va-0x40000000:va-0x40000000+len(data)]=data
for p in patches(raw,symbols):
 off=p['offset']-0xd000;b=bytes.fromhex(p['replacement_hex']);new[off:off+len(b)]=b
c={'memset':0x40004f92,'strcmp':0x40005162,'native_snprintf':0x40005520}
def mapped(k,old):return c.get(k,old)
s=Path('tools/custom_fx/check_vibe_ui_target.py').read_text();s=s[s.index(' def run('):s.index(' counts=0')]
s=s.replace('if pc==mapped("memset",0x4000505c):','if pc in (0x40004f92,0x400031bc):')
exec(textwrap.dedent(s))
n=0
for block in range(10):
 for subtype in range(19):
  for mode in range(4):
   a,_,_=run(original,0x40026e8a,[block,subtype,mode]);b,_,_=run(new,0x40026e8a,[block,subtype,mode])
   expected=3 if block==1 and subtype==8 else a.reg_read(r.UC_RISCV_REG_A0)
   assert b.reg_read(r.UC_RISCV_REG_A0)==expected,(block,subtype,mode);n+=1
for style in range(3):
 for index,want in enumerate(['DRY','SWELL','LEVEL']):
  u,_,st=run(new,0x4002607e,[1,8,index,style]);assert st(u.reg_read(r.UC_RISCV_REG_A0))==want
for subtype in range(12):
 for size in range(13):
  mem={0x30010000:bytes([0xa5])*64}
  u,_,_=run(new,0x4006c932,[0x30010000,size,subtype],memory=mem)
  assert bytes(u.mem_read(0x30010000+size*4,64-size*4))==bytes([0xa5])*(64-size*4)
  if subtype==8:
   got=struct.unpack('<'+str(size)+'f',u.mem_read(0x30010000,size*4)) if size else ()
   assert all(abs(x-([.65,0,.5][i] if i<3 else 0))<1e-6 for i,x in enumerate(got))
  else:
   old,_,_=run(original,0x4006c932,[0x30010000,size,subtype],memory=mem)
   assert u.mem_read(0x30010000,64)==old.mem_read(0x30010000,64),subtype
for idx in range(3):
 for val in [0,.35,.5,1]:
  u,rendered,_=run(new,0x40027192,[1,8,idx,0x30020000,64,0],val)
  assert rendered==[('%ld',int(val*100+.5))],(idx,val,rendered)
for block in range(8):
 for subtype in range(19):
  for idx in range(6):
   mem={0x3006aebc+block:bytes([subtype])}
   u,_,_=run(new,0x4001b3b2,[block,idx,0x30010000],memory=mem)
   if block==1 and subtype==8 and idx==0:assert u.reg_read(r.UC_RISCV_REG_A0)==0
   else:
    old,_,_=run(original,0x4001b3b2,[block,idx,0x30010000],memory=mem)
    assert u.mem_read(0x30010000,20)==old.mem_read(0x30010000,20),(block,subtype,idx)
print('PASS count cases',n,'labels9 defaults156 formatter12 enum912; callee-saved registers and stack retained')
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
 u,_,_=run(new,symbols['nc_octave_diagnostic'],[0x39,0x30010000,length,0x30011000,0x30012000],memory=mem)
 if payload==b'OCT?' and length==4:
  ptr,size=struct.unpack('<II',u.mem_read(0x30011000,8));data=struct.unpack('<32I',u.mem_read(ptr,size))
  assert size==128 and data[0]==0x4f435431 and data[2]==4000000 and data[16]==123456
  assert data[25:27]==(0x12345678,9) and bytes(u.mem_read(0x30012000,1))==b'\0'
 else:assert bytes(u.mem_read(0x30012000,1))==b'\xa5'
print('PASS telemetry exact magic128-byte response;4nonmatching requests preserveargs+nativeprologue; stack/callee-saved preserved')
for mode in range(3):
 u,_,st=run(new,0x40025d92,[1,8,mode]);assert st(u.reg_read(r.UC_RISCV_REG_A0))=='OCTAVE'
print('PASS OCTAVE displayname all3styles')
output.write_text(json.dumps({'elf_sha256':hashlib.sha256(elf_path.read_bytes()).hexdigest(),'ui_source_sha256':hashlib.sha256(Path('firmware/custom-fx/octave/device_ui.S').read_bytes()).hexdigest(),'source_maps':{'effect_name':'0x40025d92','parameter_labels':'0x4002607e','parameter_count':'0x40026e8a','format':'0x40027192','enum':'0x4001b3b2','defaults':'0x4006c932','amp_read':'0x4008f8ac','timer_hz':'0x4003fe7c','timer_ticks':'0x40040028','heap_free':'0x3004c228'},'count_cases':760,'labels':9,'defaults':156,'format':12,'enum':912,'effect_name':3,'telemetry':5,'native_non_target_unchanged':True,'stack_and_callee_saved_preserved':True,'physical_operations':False,'limits':'memset/strcmp/printf and MMIO timer boundaries emulated; no hardware timing established'},indent=2)+'\n')
