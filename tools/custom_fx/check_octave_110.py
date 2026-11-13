#!/usr/bin/env python3
"""Run shared native DSP/guard tests with the independently audited1.10 ABI.
Same arguments as check_octave_device.py. No USB operations or timing claims.
"""
import re,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
from octave_versions import profile
s=Path(__file__).with_name('check_octave_device.py').read_text()
s=s.replace('ring=0x30020000','ring=family+0x6100')
s=s.replace("u.mem_write(family-4,b'\\xa5'*(0xe48+8));u.mem_write(ring-4,b'\\xa5'*(0x10000+8));", "u.mem_write(family-4,b'\\xa5'*(0x16100+8));")
s=s.replace('call(0x4006c4de,[family,0,enable,ring,2048],44100.)',"call(symbols['nc_octave_family_init'],[family,0,enable],44100.)")
s=s.replace("assert int.from_bytes(u.mem_read(family+8,4),'little')==ring", "assert struct.unpack('<f',u.mem_read(family+8,4))[0]==44100.")
s=s.replace('family+0xe48','family+0x16100')
s=s.replace('stack-688','stack-176')
s=s.replace("assert call(symbols['nc_octave_pitch_init'],[family+8,ring,1],44100.)==0xffffffff", "call(symbols['nc_octave_pitch_reset'],[0])")
s=s.replace("call(symbols['nc_octave_pitch_init'],[family+8,ring,2048],44100.)", "call(symbols['nc_octave_family_init'],[family,0,enable],44100.)")
# The preserved native pitch-reset entry resets inline state, then the appended core.
s=s.replace('# Native FX2 initializer executes patched pitch_init; full mappedstockcode runs.','''# Verify actual patched allocation instructions and JAL-ra init callsites.
for pc in (0x4000dfa6,0x4000e05c):
 u.emu_start(pc,pc+6,count=4)
 assert u.reg_read(r.UC_RISCV_REG_A0)==0x16100
for pc in (0x4000e1e2,0x4000e1f8):
 u.reg_write(r.UC_RISCV_REG_A0,family);u.reg_write(r.UC_RISCV_REG_A1,0);u.reg_write(r.UC_RISCV_REG_A2,enable)
 u.reg_write(r.UC_RISCV_REG_FA0,0xffffffff00000000|int.from_bytes(struct.pack('<f',44100.),'little'))
 saved={reg:u.reg_read(reg) for reg in regs}
 u.emu_start(pc,pc+4,count=20000000)
 assert u.reg_read(r.UC_RISCV_REG_PC)==pc+4
 assert u.reg_read(r.UC_RISCV_REG_SP)==stack
 assert all(u.reg_read(k)==v for k,v in saved.items())
 assert u.mem_read(ring,4)==b'1TCO'
u.mem_write(symbols['nc_octave_stats'],bytes(28))
# Native FX2 initializer and appended custom state.
''')
s=s.replace("'ring_allocation_bytes':0x10000", "'appended_state_capacity':0x10000,'native_family_bytes':0x60f4,'family_allocation_bytes':0x16100,'state_offset':0x6100,'allocation_instructions_executed':True,'both_native_init_callsite_returns_verified':True")
m=profile('1.10')['address_map']
s=re.sub(r'0x[0-9a-fA-F]+',lambda x:m.get(hex(int(x[0],16)),x[0]),s)
_OCTAVE_PORTED=True
exec(compile(s,str(Path(__file__).with_name('check_octave_device.py')),'exec'))
