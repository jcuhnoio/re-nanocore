from unicorn import Uc,UC_ARCH_RISCV,UC_MODE_RISCV32,UC_HOOK_CODE
from unicorn.riscv_const import *
from pathlib import Path
import struct,json
code=Path(__file__).with_name('spl_reader.bin').read_bytes();results=[]
for offset,length,plen in [(0,200,5),(0x25f38,200,5),(0x25f39,200,5),(0xffffffff,200,5),(0,201,5),(0,0,5),(0,200,4)]:
 u=Uc(UC_ARCH_RISCV,UC_MODE_RISCV32);u.mem_map(0x40000000,0x100000);u.mem_map(0x30000000,0x100000);u.mem_write(0x4008a640,code);u.mem_write(0x40006efa,bytes.fromhex('67800000'));u.mem_write(0x40006f5e,bytes.fromhex('67800000'))
 payload=0x30001000;result=0x30002000;status=0x30002010;stack=0x30010000;stop=0x400ffff0
 u.mem_write(payload,struct.pack('<IB',offset,length));u.mem_write(status,b'\xff')
 for reg,val in [(UC_RISCV_REG_A0,0x39),(UC_RISCV_REG_A1,payload),(UC_RISCV_REG_A2,plen),(UC_RISCV_REG_A3,result),(UC_RISCV_REG_A4,status),(UC_RISCV_REG_SP,stack),(UC_RISCV_REG_RA,stop),(UC_RISCV_REG_S0,0x12345678)]:u.reg_write(reg,val)
 reads=[]
 def hook(u,addr,size,ctx):
  if addr==0x40006efa:
   assert u.reg_read(UC_RISCV_REG_A0)==0x40092e78
   u.reg_write(UC_RISCV_REG_A0,0x30005000);u.reg_write(UC_RISCV_REG_PC,u.reg_read(UC_RISCV_REG_RA))
  elif addr==0x40006f5e:
   off=u.reg_read(UC_RISCV_REG_A1);dest=u.reg_read(UC_RISCV_REG_A2);n=u.reg_read(UC_RISCV_REG_A3);assert off+n<=0x26000
   reads.append((off,n));u.mem_write(dest,bytes((off+i)%256 for i in range(n)));u.reg_write(UC_RISCV_REG_A0,n);u.reg_write(UC_RISCV_REG_PC,u.reg_read(UC_RISCV_REG_RA))
 u.hook_add(UC_HOOK_CODE,hook);u.emu_start(0x4008a640,stop,count=500)
 valid=plen==5 and 1<=length<=200 and offset+length<=0x26000
 assert u.reg_read(UC_RISCV_REG_PC)==stop and u.reg_read(UC_RISCV_REG_SP)==stack and u.reg_read(UC_RISCV_REG_S0)==0x12345678
 assert u.reg_read(UC_RISCV_REG_A0)==1
 assert u.mem_read(status,1)==bytes([0 if valid else 1])
 if valid:
  p,n=struct.unpack('<II',u.mem_read(result,8));assert n==length and bytes(u.mem_read(p,n))==bytes((offset+i)%256 for i in range(n))
 else:assert not reads
 results.append({'offset':offset,'length':length,'request_length':plen,'valid':valid,'passed':True})
Path(__file__).with_name('reader-tests.json').write_text(json.dumps(results,indent=2));print('PASS',len(results),'emulated handler boundary/ABI tests')
