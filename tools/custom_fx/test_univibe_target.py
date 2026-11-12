#!/usr/bin/env python3
"""Execute linked UniVibe RV32 code, compare with host C and check ABI/canaries.
CLI: python test_univibe_target.py BUILD HOST_SHARED_LIBRARY
Unicorn dependency is lazy so normal offline test discovery needs no emulator.
"""
import ctypes as c
import hashlib
import json
import math
from pathlib import Path
import struct
import sys

def check(build, shared):
    from unicorn import Uc, UC_ARCH_RISCV, UC_MODE_RISCV32, UC_HOOK_CODE
    from unicorn import riscv_const as r
    build=Path(build); receipt=json.loads((build/'build.json').read_text())
    code=(build/'univibe.bin').read_bytes();entry=int(receipt['artifacts']['univibe']['address'],16)
    lib=c.CDLL(str(Path(shared).resolve()));fn=lib.nc_fx_univibe
    fn.argtypes=[c.c_void_p]*5+[c.c_uint32,c.c_void_p,c.c_uint32,c.c_void_p]
    cases=[]
    for stereo,inplace,fs in [(0,False,44100),(1,False,44100),(1,True,44100),(1,False,8000),(1,False,96000)]:
        u=Uc(UC_ARCH_RISCV,UC_MODE_RISCV32);u.mem_map(0x40000000,0x100000);u.mem_map(0x30000000,0x100000);u.mem_write(entry,code)
        state=0x30010000;left=0x30020000;right=0x30021000;ol=left if inplace else 0x30022000;orr=right if inplace else 0x30023000
        param=0x30024000;mode=0x30025000;stack=0x300f0000;stop=0x400ffff0
        initial=struct.pack('<f',fs)+bytes(112)+bytes([0xa5])*128
        u.mem_write(state,initial);host=c.create_string_buffer(initial,len(initial))
        u.mem_write(stack,struct.pack('<I',mode));u.reg_write(r.UC_RISCV_REG_SP,stack);u.reg_write(r.UC_RISCV_REG_MSTATUS,0x6000)
        saved={}
        for name in ['GP','TP']+[f'S{i}' for i in range(12)]+[f'FS{i}' for i in range(12)]:
            reg=getattr(r,'UC_RISCV_REG_'+name);saved[reg]=0x3ff0000012340000+reg if name.startswith('FS') else 0x12340000+reg;u.reg_write(reg,saved[reg])
        count=0
        def hook(uc,pc,size,_):
            nonlocal count
            count+=1
            if size!=4:return
            w=int.from_bytes(uc.mem_read(pc,4),'little')
            if w&0x7f!=0xb:return
            assert w&0xf800707f==0x100b,hex(w)
            rd,rs1,rs2,shift=(w>>7)&31,(w>>15)&31,(w>>20)&31,(w>>25)&3
            if rd:uc.reg_write(r.UC_RISCV_REG_X0+rd,(uc.reg_read(r.UC_RISCV_REG_X0+rs1)+(uc.reg_read(r.UC_RISCV_REG_X0+rs2)<<shift))&0xffffffff)
            uc.reg_write(r.UC_RISCV_REG_PC,pc+4)
        u.hook_add(UC_HOOK_CODE,hook)
        error=0;max_instructions=0
        for block in range(64):
            inputs=[[.2*math.sin((block*64+i)*.04),.1*math.cos((block*64+i)*.07)] for i in range(64)]
            l=(c.c_float*64)(*[v[0] for v in inputs]);rr=(c.c_float*64)(*[v[1] for v in inputs]);out=(c.c_float*64)();outr=(c.c_float*64)();outmode=c.c_uint8(255)
            p=(c.c_float*4)(.4 if block<32 else 1,.8,.5,0 if block<32 else 1)
            u.mem_write(left,bytes(l));u.mem_write(right,bytes(rr));u.mem_write(param,bytes(p));u.mem_write(mode,b'\xff')
            args=[state,left,right,ol,orr,64,param,stereo]
            for i,v in enumerate(args):u.reg_write(getattr(r,f'UC_RISCV_REG_A{i}'),v)
            u.reg_write(r.UC_RISCV_REG_RA,stop);before=count;u.emu_start(entry,stop,count=100000)
            max_instructions=max(max_instructions,count-before)
            assert u.reg_read(r.UC_RISCV_REG_PC)==stop and u.reg_read(r.UC_RISCV_REG_SP)==stack
            assert all(u.reg_read(k)==v for k,v in saved.items())
            assert bytes(u.mem_read(state+116,128))==bytes([0xa5])*128
            assert bytes(u.mem_read(mode,1))==bytes([stereo])
            fn(host,l,rr,out,outr,64,p,stereo,c.byref(outmode))
            for address,expected in [(ol,out)]+([(orr,outr)] if stereo else []):
                actual=struct.unpack('<64f',u.mem_read(address,256))
                error=max(error,max(abs(a-b) for a,b in zip(actual,expected)))
            # Native initializer resets +4; simulate effect re-selection.
            if block==47:
                u.mem_write(state+4,bytes(4));c.memset(c.addressof(host)+4,0,4)
        assert error<1e-5,error
        cases.append({'stereo':stereo,'inplace':inplace,'sample_rate':fs,'frames':4096,'max_error':error,'max_instructions_per_64_frames':max_instructions,'abi_and_state_bounds_passed':True})
    report={'sha256':hashlib.sha256(code).hexdigest(),'cases':cases,'device_audio_tested':False,'vendor_hook':'addsl exact integer semantics','includes':['first-call init','control changes','native reset marker','integer and floating callee-save checks']}
    (build/'univibe-target-tests.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':check(sys.argv[1],sys.argv[2])
