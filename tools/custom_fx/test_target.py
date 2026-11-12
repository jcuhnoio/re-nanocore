#!/usr/bin/env python3
"""Execute the actual gain binary under Unicorn RV32, checking its native ABI.
Usage: installed-unicorn-python test_target.py BUILD_DIRECTORY
"""
import json
from pathlib import Path
import struct
import sys


def check(build):
    from unicorn import Uc, UC_ARCH_RISCV, UC_MODE_RISCV32
    from unicorn import riscv_const as r
    build = Path(build)
    receipt = json.loads((build/'build.json').read_text())
    address = int(receipt['artifacts']['gain']['address'],16)
    code = (build/'gain.bin').read_bytes()
    cases=[]
    for stereo in (0,1):
        for inplace in (False,True):
            for frames in (0,1,64):
                for gain in (0.0,0.25,1.0,-1.0,2.0):
                    u=Uc(UC_ARCH_RISCV,UC_MODE_RISCV32)
                    u.mem_map(0x40000000,0x100000)
                    u.mem_map(0x30000000,0x100000)
                    u.mem_write(address,code)
                    stack=0x300f0000; stop=0x400ffff0
                    left=0x30001000; right=0x30002000
                    ol=left if inplace else 0x30003000
                    ora=right if inplace else 0x30004000
                    params=0x30005000; result=0x30006000
                    values=[(i-32)/64 for i in range(64)]
                    u.mem_write(left,struct.pack('<64f',*values))
                    u.mem_write(right,struct.pack('<64f',*[-x for x in values]))
                    before=bytes(u.mem_read(ora,256))
                    u.mem_write(params,struct.pack('<f',gain))
                    u.mem_write(result,b'\xff')
                    u.mem_write(stack,struct.pack('<I',result))
                    for i,val in enumerate([0,left,right,ol,ora,frames,params,stereo]):
                        u.reg_write(getattr(r,f'UC_RISCV_REG_A{i}'),val)
                    u.reg_write(r.UC_RISCV_REG_SP,stack)
                    u.reg_write(r.UC_RISCV_REG_RA,stop)
                    # Enable floating point state and round-to-nearest.
                    u.reg_write(r.UC_RISCV_REG_MSTATUS,0x6000)
                    saved={}
                    for name in ['GP','TP']+[f'S{i}' for i in range(12)]:
                        reg=getattr(r,'UC_RISCV_REG_'+name)
                        saved[reg]=0x12340000+reg
                        u.reg_write(reg,saved[reg])
                    u.emu_start(address,stop,count=20000)
                    assert u.reg_read(r.UC_RISCV_REG_PC)==stop
                    assert u.reg_read(r.UC_RISCV_REG_SP)==stack
                    assert all(u.reg_read(reg)==val for reg,val in saved.items())
                    assert bytes(u.mem_read(result,1))==bytes([stereo])
                    expected=[v*max(0,min(1,gain)) for v in values[:frames]]
                    actual=struct.unpack('<'+str(frames)+'f',u.mem_read(ol,frames*4)) if frames else ()
                    assert list(actual)==expected
                    if stereo and frames:
                        assert list(struct.unpack('<'+str(frames)+'f',u.mem_read(ora,frames*4)))==[-x for x in expected]
                    elif not stereo:
                        assert bytes(u.mem_read(ora,256))==before
                    cases.append({'stereo':stereo,'inplace':inplace,'frames':frames,'gain':gain,'passed':True})
    report={'emulator':'Unicorn RV32','binary_sha256':receipt['artifacts']['gain']['sha256'],
            'device_tested':False,'cases':cases}
    (build/'target-tests.json').write_text(json.dumps(report,indent=2)+'\n')
    print('PASS',len(cases),'target machine-code gain/ABI cases')

if __name__=='__main__': check(sys.argv[1])
