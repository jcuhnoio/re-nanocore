"""Usage: python check_octave_device.py DEVICE.elf REFERENCE.dylib DECODED_1.12.bin REPORT.json"""
import sys,struct,json,math,ctypes,hashlib
from pathlib import Path
sys.path.insert(0,str(Path('tools/custom_fx').resolve()))
from check_octave_target import elf
from octave_hooks import patches
from patch_image import extract_fit
from unicorn import Uc,UC_ARCH_RISCV,UC_MODE_RISCV32,UC_HOOK_CODE
from unicorn import riscv_const as r
elfpath=Path(sys.argv[1]);blob,_,symbols=elf(elfpath)
image=Path(sys.argv[3]).read_bytes()
fit=extract_fit(image);plan=patches(image,symbols)
u=Uc(UC_ARCH_RISCV,UC_MODE_RISCV32);u.mem_map(0x40000000,0x200000);u.mem_map(0x30000000,0x200000)
regions=[]
for seg in fit['segments']:
 u.mem_write(seg['load_address'],seg['data']);regions.append((seg['load_address'],seg['data']))
for p in plan:u.mem_write(int(p['address'],16),bytes.fromhex(p['replacement_hex']))
# ELF headers can share the preceding load page: load only actual allocatedsections.
shoff=struct.unpack_from('<I',blob,32)[0];shent,shnum=struct.unpack_from('<HH',blob,46)
for i in range(shnum):
 s=struct.unpack_from('<10I',blob,shoff+i*shent)
 if s[2]&2:
  data=blob[s[4]:s[4]+s[5]] if s[1]!=8 else bytes(s[5]);u.mem_write(s[3],data);regions.append((s[3],data))
custom={}
for va,data in regions:
 for i in range(0,len(data)-3,2):
  w=int.from_bytes(data[i:i+4],'little')
  if w&0x7f in (0x0b,0x77):custom[va+i]=w
custom_count={}
def special(uc,pc,size,_):
 w=custom[pc]
 kind=w&0xf800707f
 rd,rs1,rs2,shift=(w>>7)&31,(w>>15)&31,(w>>20)&31,(w>>25)&3
 reg=lambda n:r.UC_RISCV_REG_X0+n
 if w&0xfe00707f in (0xc0001077,0xc2001077):
  a=uc.reg_read(reg(rs1))|(uc.reg_read(reg(rs1+1))<<32);b=uc.reg_read(reg(rs2))|(uc.reg_read(reg(rs2+1))<<32)
  val=(a-b if w&0x02000000 else a+b)&0xffffffffffffffff
  uc.reg_write(reg(rd),val&0xffffffff);uc.reg_write(reg(rd+1),val>>32);name='sub64' if w&0x02000000 else 'add64'
 elif kind==0x100b:
  if rd:uc.reg_write(reg(rd),(uc.reg_read(reg(rs1))+(uc.reg_read(reg(rs2))<<shift))&0xffffffff)
  name='addsl'
 elif kind in (0x5800400b,0x5800500b,0x1800400b,0x1800500b):
  width=4 if kind&0x40000000 else 1;load=(kind&0x7000)==0x4000
  address=uc.reg_read(reg(rs1));increment=(rs2-32 if rs2&16 else rs2)<<shift
  if load:
   value=int.from_bytes(uc.mem_read(address,width),'little',signed=True)&0xffffffff
   if rd:uc.reg_write(reg(rd),value)
  else:uc.mem_write(address,(uc.reg_read(reg(rd))&((1<<(width*8))-1)).to_bytes(width,'little'))
  if rs1:uc.reg_write(reg(rs1),(address+increment)&0xffffffff)
  name=('l' if load else 's')+('w' if width==4 else 'b')+'ia'
 elif kind==0x500b:
  address=(uc.reg_read(reg(rs1))+(uc.reg_read(reg(rs2))<<shift))&0xffffffff
  uc.mem_write(address,bytes([uc.reg_read(reg(rd))&255]));name='srb'
 elif kind in (0x4000400b,0x4000500b):
  address=(uc.reg_read(reg(rs1))+(uc.reg_read(reg(rs2))<<shift))&0xffffffff
  if kind==0x4000400b:
   if rd:uc.reg_write(reg(rd),int.from_bytes(uc.mem_read(address,4),'little'))
   name='lrw'
  else:
   uc.mem_write(address,uc.reg_read(reg(rd)).to_bytes(4,'little'));name='srw'
 elif kind==0xa000400b:
  address=(uc.reg_read(reg(rs1))+(uc.reg_read(reg(rs2))<<shift))&0xffffffff
  if rd:uc.reg_write(reg(rd),int.from_bytes(uc.mem_read(address,2),'little'))
  name='lrhu'
 elif w&0x707f==0x300b:
  high=(w>>26)&31;low=(w>>20)&31
  if rd:uc.reg_write(reg(rd),(uc.reg_read(reg(rs1))>>low)&((1<<(high-low+1))-1))
  name='extu'
 elif w&0xfe00707f in (0x4000100b,0x4200100b):
  nonzero=bool(w&0x02000000);condition=uc.reg_read(reg(rs2))!=0
  if condition==nonzero and rd:uc.reg_write(reg(rd),uc.reg_read(reg(rs1)))
  name='mvnez' if nonzero else 'mveqz'
 else:raise RuntimeError(f'Unsupported vendor instruction {w:08x} at {pc:08x}')
 uc.reg_write(r.UC_RISCV_REG_PC,pc+4);custom_count[name]=custom_count.get(name,0)+1
def dispatch(uc,pc,size,data):
 if pc in custom:special(uc,pc,size,data)
u.hook_add(UC_HOOK_CODE,dispatch)
stack=0x301f0000;stop=0x401ff000;family=0x30010000;ring=0x30020000;left=0x30040000;right=0x30041000;ol=0x30042000;orr=0x30043000;params=0x30044000;mode=0x30045000;enable=0x30045004
u.reg_write(r.UC_RISCV_REG_GP,0x3004c604);u.reg_write(r.UC_RISCV_REG_SP,stack);u.reg_write(r.UC_RISCV_REG_MSTATUS,0x6000)
timer_calls=0;timer_value=0;timer_step=100
def timer(uc,pc,size,_):
 global timer_calls,timer_value
 timer_calls+=1;timer_value+=timer_step;uc.reg_write(r.UC_RISCV_REG_A0,timer_value);uc.reg_write(r.UC_RISCV_REG_A1,0);uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA))
u.hook_add(UC_HOOK_CODE,timer,begin=0x40040028,end=0x40040028)
regs=[r.UC_RISCV_REG_GP,r.UC_RISCV_REG_TP]+[getattr(r,f'UC_RISCV_REG_S{i}') for i in range(12)]+[getattr(r,f'UC_RISCV_REG_FS{i}') for i in range(12)]
def call(address,args=(),rate=None):
 for i,v in enumerate(args[:8]):u.reg_write(getattr(r,f'UC_RISCV_REG_A{i}'),v)
 if len(args)>8:u.mem_write(stack,struct.pack('<%dI'%(len(args)-8),*args[8:]))
 if rate is not None:u.reg_write(r.UC_RISCV_REG_FA0,0xffffffff00000000|int.from_bytes(struct.pack('<f',rate),'little'))
 u.reg_write(r.UC_RISCV_REG_RA,stop);saved={reg:u.reg_read(reg) for reg in regs}

 try:u.emu_start(address,stop,count=20000000)
 except Exception:
  pc=u.reg_read(r.UC_RISCV_REG_PC);print('CRASH',hex(pc),bytes(u.mem_read(pc,8)).hex());raise
 assert u.reg_read(r.UC_RISCV_REG_PC)==stop,('limit',hex(u.reg_read(r.UC_RISCV_REG_PC)))
 assert u.reg_read(r.UC_RISCV_REG_SP)==stack
 assert all(u.reg_read(k)==v for k,v in saved.items()),'callee save failure'
 return u.reg_read(r.UC_RISCV_REG_A0)
call(symbols['nc_octave_state_bytes']);statebytes=u.reg_read(r.UC_RISCV_REG_A0)
assert statebytes<=0x10000
# Native FX2 initializer executes patched pitch_init; full mappedstockcode runs.
u.mem_write(family-4,b'\xa5'*(0xe48+8));u.mem_write(ring-4,b'\xa5'*(0x10000+8));u.mem_write(enable,b'\x01')
call(0x4006c4de,[family,0,enable,ring,2048],44100.)
assert int.from_bytes(u.mem_read(family+8,4),'little')==ring
assert u.mem_read(ring,4)==b'1TCO'
assert u.mem_read(family-4,4)==b'\xa5'*4 and u.mem_read(family+0xe48,4)==b'\xa5'*4
assert u.mem_read(ring+statebytes,0x10000-statebytes+4)==b'\xa5'*(0x10000-statebytes+4)
# Non-PITCH nakedshim exactly replays original8bytes and restoresnativecontinuation.
u.reg_write(r.UC_RISCV_REG_A7,9);u.reg_write(r.UC_RISCV_REG_S1,0x12345678)
u.emu_start(0x4006b1c4,0x4006b1cc,count=10)
assert u.reg_read(r.UC_RISCV_REG_SP)==stack-688
assert u.mem_read(stack-12,4)==struct.pack('<I',0x12345678)
u.reg_write(r.UC_RISCV_REG_SP,stack)
# Badinit refuses beforewrites; enabledbypass preservesbothchannelsandmode.
assert call(symbols['nc_octave_pitch_init'],[family+8,ring,1],44100.)==0xffffffff
u.mem_write(enable,b'\x00');u.mem_write(left,struct.pack('<4f',1,2,3,4));u.mem_write(right,struct.pack('<4f',5,6,7,8))
call(0x4006b1c4,[family,left,right,ol,orr,4,0,8,1,mode])
assert u.mem_read(ol,16)==u.mem_read(left,16) and u.mem_read(orr,16)==u.mem_read(right,16)
assert u.mem_read(mode,1)==b'\x01';u.mem_write(enable,b'\x01')
# Original reference core via retained CABI hostlibrary; adaptersettingsmatchprototype.
lib=ctypes.CDLL(str(Path(sys.argv[2]).resolve()));lib.core_init.argtypes=[ctypes.c_void_p,ctypes.c_float];lib.core_parameters.argtypes=[ctypes.c_void_p,ctypes.c_void_p];lib.core_process.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32];lib.core_reset.argtypes=[ctypes.c_void_p]
host=ctypes.create_string_buffer(61728);lib.core_init(host,ctypes.c_float(44100.))
P=struct.pack('<9f2i4f',.65,.05,.3,.65,.35,0,6500,0,-9,0,0,50,-60,120,75)
pbuf=ctypes.create_string_buffer(P);lib.core_parameters(host,pbuf);lib.core_reset(host)
u.mem_write(params,struct.pack('<11f',.65,.05,.3,.65,.35,0,6350/17850,0,0,0,.5));errors=[]
f32=lambda x:ctypes.c_float(x).value
for stereo,inplace in [(0,False),(1,True)]:
 call(0x4006c7ca,[family]);lib.core_reset(host);reference_delay=[0.]*128
 for block in range(32):
  l=[f32(.2*math.sin((block*64+i)*.04)) for i in range(64)]
  rr=[f32(.1*math.cos((block*64+i)*.071)) for i in range(64)]
  mono=[f32(f32(a+b)*.5) if stereo else a for a,b in zip(l,rr)]
  u.mem_write(left,struct.pack('<64f',*l));u.mem_write(right,struct.pack('<64f',*rr))
  outleft=left if inplace else ol;outright=right if inplace else orr
  call(0x4006b1c4,[family,left,right,outleft,outright,64,params,8,stereo,mode])
  ibuf=(ctypes.c_float*64)(*mono);obuf=(ctypes.c_float*64)();lib.core_process(host,ibuf,obuf,64)
  reference_delay.extend(obuf);expected=reference_delay[:64];del reference_delay[:64]
  actual=struct.unpack('<64f',u.mem_read(outleft,256));error=max(abs(a-b) for a,b in zip(actual,expected));assert error<1e-6,error
  if stereo:assert u.mem_read(outright,256)==u.mem_read(outleft,256)
  assert u.mem_read(mode,1)==bytes([stereo]);errors.append(error)
  if block%8==7:print('verified',stereo,block+1,'blocks',flush=True)
 assert u.mem_read(ring+statebytes,0x10000-statebytes+4)==b'\xa5'*(0x10000-statebytes+4)
 assert u.mem_read(family+0xe48,4)==b'\xa5'*4
stats=struct.unpack('<7I',u.mem_read(symbols['nc_octave_stats'],28));assert stats[0]==64 and stats[1]==4096 and stats[2]==300 and stats[3]==19200 and stats[6]==1,stats
# A single overrun must latch bypass, including after reset/reinitialization.
fault=symbols['nc_octave_fault'];timer_step=10000
u.mem_write(left,struct.pack('<64f',*([.125]*64)));u.mem_write(right,struct.pack('<64f',*([-.25]*64)))
call(0x4006b1c4,[family,left,right,left,right,64,params,8,1,mode])
assert int.from_bytes(u.mem_read(fault,4),'little')==1
assert u.mem_read(left,256)==struct.pack('<64f',*([.125]*64))
assert u.mem_read(right,256)==struct.pack('<64f',*([-.25]*64))
calls=timer_calls
for _ in range(4):call(0x4006b1c4,[family,left,right,ol,orr,64,params,8,1,mode])
assert timer_calls==calls
call(0x4006c7ca,[family]);assert int.from_bytes(u.mem_read(fault,4),'little')==1
call(symbols['nc_octave_pitch_init'],[family+8,ring,2048],44100.)
assert int.from_bytes(u.mem_read(fault,4),'little')==1
# Also stop when the native chain reports an overrun, even if core timing passed.
u.mem_write(fault,bytes(4));timer_step=100
u.mem_write(0x3004ab40,struct.pack('<I',1))
call(0x4006b1c4,[family,left,right,ol,orr,64,params,8,1,mode])
assert int.from_bytes(u.mem_read(fault,4),'little')==2 and timer_calls==calls
print('PASS core overrun latch, full-chain overrun latch, stereo bypass and reset persistence')
report={'elf_sha256':hashlib.sha256(blob).hexdigest(),'state_bytes':statebytes,'ring_allocation_bytes':0x10000,'native_fx2_initializer_and_reset':True,'native_other_subtype_trampoline':True,'disabled_stereo_bypass':True,'inplace_stereo_and_mono':True,'callee_saved_registers_and_canaries':True,'compared_samples':4096,'reference_delay_samples':128,'overload_latch_checks':True,'max_host_reference_error':max(errors),'timer_stub_stats':list(stats),'limits':['Timer boundary stubbed; no physical cycles measured','Vendor integer instructions emulated; full DSP/math and native FX2 initializer execute','No hardware operations']}
Path(sys.argv[4]).write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
