#!/usr/bin/env python3
"""Offline 1.2 native Velvet init/reset/caller integration; never opens a device."""
import argparse
import ctypes as c
import hashlib
import json
import math
from pathlib import Path
import struct


def check(firmware, shared, output):
    from unicorn import Uc, UC_ARCH_RISCV, UC_MODE_RISCV32, UC_HOOK_CODE
    from unicorn import riscv_const as r
    raw = Path(firmware).read_bytes()
    lib = c.CDLL(str(Path(shared).resolve()))
    fn = lib.nc_fx_univibe
    fn.argtypes = [c.c_void_p]*5 + [c.c_uint32, c.c_void_p, c.c_uint32, c.c_void_p]
    reports = []
    for stereo in (0, 1):
        u = Uc(UC_ARCH_RISCV, UC_MODE_RISCV32)
        u.mem_map(0x40000000, 0x100000)
        u.mem_map(0x30000000, 0x200000)
        u.mem_write(0x40000000, raw[0x17800:])
        u.mem_write(0x30040000, raw[0x800:0x800+34160])
        base=0x30010000; state=base+0x142c8; stack=0x300f0000; stop=0x400ffff0
        left=0x30050000; right=0x30051000; ol=0x30052000; oor=0x30053000
        param=0x30054000; mode=0x30055000
        u.reg_write(r.UC_RISCV_REG_MSTATUS, 0x6000)
        u.reg_write(r.UC_RISCV_REG_SP, stack)
        def hook(uc, pc, size, _):
            if pc == 0x300469b4:  # Native ITCM memset boundary, preserving return A0.
                a=uc.reg_read(r.UC_RISCV_REG_A0); n=uc.reg_read(r.UC_RISCV_REG_A2)
                uc.mem_write(a, bytes([uc.reg_read(r.UC_RISCV_REG_A1)&255])*n)
                uc.reg_write(r.UC_RISCV_REG_PC, uc.reg_read(r.UC_RISCV_REG_RA)); return
            if size != 4: return
            w=int.from_bytes(uc.mem_read(pc,4),'little')
            if w&0x7f != 0xb: return
            assert w&0xf800707f == 0x100b, hex(w)
            rd,rs1,rs2,shift=(w>>7)&31,(w>>15)&31,(w>>20)&31,(w>>25)&3
            value=(uc.reg_read(r.UC_RISCV_REG_X0+rs1)+(uc.reg_read(r.UC_RISCV_REG_X0+rs2)<<shift))&0xffffffff
            if rd: uc.reg_write(r.UC_RISCV_REG_X0+rd,value)
            uc.reg_write(r.UC_RISCV_REG_PC,pc+4)
        u.hook_add(UC_HOOK_CODE,hook)
        def execute(entry, end=stop):
            u.reg_write(r.UC_RISCV_REG_RA,stop)
            try: u.emu_start(entry,end,count=200000)
            except Exception as e: raise RuntimeError(hex(u.reg_read(r.UC_RISCV_REG_PC))) from e
            assert u.reg_read(r.UC_RISCV_REG_PC)==end
            assert u.reg_read(r.UC_RISCV_REG_SP)==stack
        u.mem_write(state-16,bytes([0xa5])*(0x300c+32))
        u.reg_write(r.UC_RISCV_REG_A0,state)
        u.reg_write(r.UC_RISCV_REG_FA0,0xffffffff00000000|struct.unpack('<I',struct.pack('<f',48000))[0])
        execute(0x4007377c)
        assert bytes(u.mem_read(state,0x300c))==struct.pack('<f',48000)+bytes(0x3008)
        host=c.create_string_buffer(struct.pack('<f',48000)+bytes(112),116)
        maxerror=0; channel_difference=0
        for block in range(16):
            if block==8:
                u.reg_write(r.UC_RISCV_REG_A0,state);execute(0x40073810)
                assert bytes(u.mem_read(state+4,6))==bytes(6)
                assert bytes(u.mem_read(state+12,0x3000))==bytes(0x3000)
                c.memset(c.addressof(host)+4,0,112)
            l=(c.c_float*64)(*[.2*math.sin((block*64+i)*.04) for i in range(64)])
            rr=(c.c_float*64)(*[.1*math.cos((block*64+i)*.07) for i in range(64)])
            out=(c.c_float*64)(); outr=(c.c_float*64)(); om=c.c_uint8(255)
            p=(c.c_float*4)(.35,.8,.5,0 if block<8 else 1)
            u.mem_write(left,bytes(l));u.mem_write(right,bytes(rr));u.mem_write(param,bytes(p))
            u.mem_write(mode,b'\xff');u.mem_write(oor,bytes([0xa5])*256)
            # Execute the retained native call preparation, not a synthetic A0..A7 call.
            regs={'S0':base,'S1':64,'S2':ol,'S4':left,'S5':stereo,'S6':mode,
                  'S7':oor if stereo else 0,'S8':right,'S10':param}
            for name,value in regs.items(): u.reg_write(getattr(r,'UC_RISCV_REG_'+name),value)
            execute(0x4006b568,0x4006b584)
            assert all(u.reg_read(getattr(r,'UC_RISCV_REG_'+k))==v for k,v in regs.items())
            assert bytes(u.mem_read(mode,1))==bytes([stereo])
            assert bytes(u.mem_read(state-16,16))==bytes([0xa5])*16
            assert bytes(u.mem_read(state+0x300c,16))==bytes([0xa5])*16
            assert bytes(u.mem_read(state+116,0x300c-116))==bytes(0x300c-116)
            fn(host,l,rr,out,outr,64,p,stereo,c.byref(om))
            actual=struct.unpack('<64f',u.mem_read(ol,256))
            maxerror=max(maxerror,max(abs(a-b) for a,b in zip(actual,out)))
            if stereo:
                actualr=struct.unpack('<64f',u.mem_read(oor,256))
                maxerror=max(maxerror,max(abs(a-b) for a,b in zip(actualr,outr)))
                channel_difference=max(channel_difference,max(abs(a-b) for a,b in zip(actual,actualr)))
            else: assert bytes(u.mem_read(oor,256))==bytes([0xa5])*256
        assert maxerror<1e-5
        if stereo: assert channel_difference>.01
        reports.append({'stereo':bool(stereo),'frames':1024,'sample_rate':48000,'max_host_error':maxerror,'stereo_channel_difference':channel_difference,'native_init_reset_and_call_passed':True})
    report={'firmware_sha256':hashlib.sha256(raw).hexdigest(),'cases':reports,'device_tested':False,'emulated_boundary':'ITCM memset at0x300469b4; native initializer/reset/call code executed','native_state_bytes':0x300c,'custom_state_bytes':116}
    Path(output).write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report,indent=2))

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--firmware',required=True);p.add_argument('--shared',required=True);p.add_argument('--output',required=True)
    a=p.parse_args();check(a.firmware,a.shared,a.output)
