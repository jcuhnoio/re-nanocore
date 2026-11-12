"""Count linked Shared2048/1024 RV32 execution and preserve sample output.

Usage: python check_octave_target.py LINKED_ELF REPORT_JSON [BLOCKS=32] [two-tone|noise]
Requires Unicorn. ELF must expose the core_size/core_init/core_parameters/
core_reset/core_process C probe ABI and use the retained 0x40000000 load region.
A 48kHz two-tone input, all four octave voices and 650ms swell are exercised.
Set VERIFY_INSN_COUNT=1 to cross-check basic-block counts with per-instruction
hooks (slower). Full linked libm/libc execute; no native math calls are stubbed.
The 64-frame synthetic call size does not establish a hardware callback size.
Counts are executed instructions, not CPU cycles, utilization or deadlines.
"""
import sys,struct,json,math,hashlib,time,os
from pathlib import Path
from unicorn import Uc,UC_ARCH_RISCV,UC_MODE_RISCV32,UC_HOOK_BLOCK,UC_HOOK_CODE
from unicorn import riscv_const as r

def elf(path):
 b=Path(path).read_bytes();assert b[:6]==b'\x7fELF\x01\x01'
 phoff,shoff=struct.unpack_from('<II',b,28);phent,phnum,shent,shnum=struct.unpack_from('<HHHH',b,42)
 segments=[]
 for i in range(phnum):
  typ,off,va,pa,fs,ms,flags,align=struct.unpack_from('<8I',b,phoff+i*phent)
  if typ==1:segments.append((va,b[off:off+fs],ms,flags))
 sections=[struct.unpack_from('<10I',b,shoff+i*shent) for i in range(shnum)]
 symbols={}
 for s in sections:
  if s[1]!=2:continue
  st=sections[s[6]];strings=b[st[4]:st[4]+st[5]]
  for off in range(s[4],s[4]+s[5],s[9]):
   name,value,size,info,other,index=struct.unpack_from('<IIIBBH',b,off)
   if name:symbols[strings[name:strings.index(0,name)].decode()]=value
 return b,segments,symbols

def run(path,blocks=32,fixture="two-tone"):
 if fixture not in ("two-tone", "noise"):raise ValueError("Unknown fixture")
 b,segments,s=elf(path);u=Uc(UC_ARCH_RISCV,UC_MODE_RISCV32)
 u.mem_map(0x40000000,0x200000);u.mem_map(0x30000000,0x200000)
 custom={}
 for va,data,size,flags in segments:
  u.mem_write(va,data)
  if flags&1:
   for i in range(0,len(data)-3,2):
    w=int.from_bytes(data[i:i+4],'little')
    if w&0x7f==0x0b:custom[va+i]=w
 total=0;code_total=0;cache={};custom_count={};min_sp=0x301f0000
 verify_counts=bool(os.environ.get('VERIFY_INSN_COUNT'))
 def single(uc,pc,size,_):
  nonlocal code_total
  code_total+=1
 if verify_counts:u.hook_add(UC_HOOK_CODE,single)
 def block(uc,pc,size,_):
  nonlocal total,min_sp
  key=(pc,size)
  if key not in cache:
   data=bytes(uc.mem_read(pc,size));i=0;n=0
   while i<len(data):i+=4 if data[i]&3==3 else 2;n+=1
   assert i==len(data),(hex(pc),size)
   cache[key]=n
  total+=cache[key];min_sp=min(min_sp,uc.reg_read(r.UC_RISCV_REG_SP))
 def special(uc,pc,size,_):
  w=custom[pc]
  kind=w&0xf800707f
  rd,rs1,rs2,shift=(w>>7)&31,(w>>15)&31,(w>>20)&31,(w>>25)&3
  reg=lambda n:r.UC_RISCV_REG_X0+n
  if kind==0x100b:
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
 u.hook_add(UC_HOOK_BLOCK,block)
 for addr in custom:u.hook_add(UC_HOOK_CODE,special,begin=addr,end=addr)
 stack=0x301f0000;state=0x30010000;inp=0x30030000;out=0x30031000;params=0x30032000;stop=0x401ff000
 u.reg_write(r.UC_RISCV_REG_SP,stack);u.reg_write(r.UC_RISCV_REG_MSTATUS,0x6000)
 if '__global_pointer$' in s:u.reg_write(r.UC_RISCV_REG_GP,s['__global_pointer$'])
 def call(name,args=(),rate=None):
  nonlocal min_sp
  for i,v in enumerate(args):u.reg_write(getattr(r,f'UC_RISCV_REG_A{i}'),v)
  if rate is not None:u.reg_write(r.UC_RISCV_REG_FA0,0xffffffff00000000|int.from_bytes(struct.pack('<f',rate),'little'))
  u.reg_write(r.UC_RISCV_REG_RA,stop);start=total;code_start=code_total;min_sp=stack
  try:u.emu_start(s[name],stop,count=20000000)
  except Exception as e:raise RuntimeError(f'{name}: pc={u.reg_read(r.UC_RISCV_REG_PC):x} {e}') from e
  assert u.reg_read(r.UC_RISCV_REG_PC)==stop,(name,'instruction limit',hex(u.reg_read(r.UC_RISCV_REG_PC)))
  assert u.reg_read(r.UC_RISCV_REG_SP)==stack
  if verify_counts:assert total-start==code_total-code_start,(name,total-start,code_total-code_start)
  return total-start,stack-min_sp
 sizecount=call('core_size');instance_size=u.reg_read(r.UC_RISCV_REG_A0)
 init=call('core_init',[state],48000.)
 window_symbol=next((v for k,v in s.items() if 'synthesisTable' in k),None)
 window=bytes(u.mem_read(window_symbol if window_symbol else state,4096))
 window_sha=hashlib.sha256(window).hexdigest()
 # Standard full4voice shared-swell configuration from baseline benchmark.
 values=[.4,.5,.5,.5,.5,650.,6500.,0.,-9.]
 u.mem_write(params,struct.pack('<9f2i4f',*values,0,0,70.,-60.,80.,95.))
 controls=call('core_parameters',[state,params]);reset=call('core_reset',[state])
 counts=[];samples=[];noise_seed=9273
 for n in range(blocks):
  x=[.2*math.sin((n*64+i)*.04)+.1*math.sin((n*64+i)*.071) for i in range(64)]
  if fixture=='noise':
   for i in range(64):
    noise_seed=(noise_seed*1664525+1013904223)&0xffffffff
    x[i]=.2*((noise_seed>>8)-8388608)/8388608
  u.mem_write(inp,struct.pack('<64f',*x));count,stackuse=call('core_process',[state,inp,out,64]);counts.append({'block':n,'instructions':count,'stack_observed':stackuse})
  samples.extend(struct.unpack('<64f',u.mem_read(out,256)))
  assert all(math.isfinite(x) for x in samples)
 report={'elf':str(path),'elf_sha256':hashlib.sha256(b).hexdigest(),'units':'executed instructions, NOT cycles','synthesis_window_sha256':window_sha,'fixture':fixture,'instance_bytes':instance_size,'sample_rate':48000,'block_frames':64,'init_instructions':init[0],'control_instructions':controls[0],'reset_instructions':reset[0],'mean_instructions_per_block':sum(x['instructions'] for x in counts)/max(blocks,1),'max_instructions_per_block':max((x['instructions'] for x in counts),default=0),'max_observed_stack_bytes':max((x['stack_observed'] for x in counts),default=0),'counts':counts,'instruction_count_crosschecked':verify_counts,'max_abs_output':max(map(abs,samples),default=0),'vendor_emulation':custom_count,'limits':['Unicorn instruction counts are not CPU cycles or physical timing','64-frame calls are synthetic harness blocks, not an established device DMA or ISR deadline','Basic-block count with exact integer/load-store semantics for executed T-Head custom operations','Full linked vendor libm/libc executes; no math function stubs','Finite deterministic fixture does not establish a worst-case deadline bound']}
 return report,samples
if __name__=='__main__':
 report,samples=run(sys.argv[1],int(sys.argv[3]) if len(sys.argv)>3 else 32,sys.argv[4] if len(sys.argv)>4 else 'two-tone')
 Path(sys.argv[2]).write_text(json.dumps(report,indent=2)+'\n');Path(sys.argv[2]+'.samples').write_bytes(struct.pack('<%df'%len(samples),*samples));print(json.dumps({k:v for k,v in report.items() if k!='counts'},indent=2))
