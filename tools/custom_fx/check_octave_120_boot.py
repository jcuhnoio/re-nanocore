#!/usr/bin/env python3
"""Execute the packaged 1.2 reset shim and check exact ELF payload residency.

Models FIT segment loading and native startup's BSS clear. Does not model SPL,
cache hardware, peripherals, real-time deadlines, or prove physical bootability.
"""
import argparse
import hashlib
import json
from pathlib import Path
from unicorn import Uc, UC_ARCH_RISCV, UC_MODE_RISCV32
from unicorn import riscv_const as r
from package_octave import elf_payload
from package_octave_120 import CODE_BASE, HEAP_ADDRESS, HEAP_ORIGINAL
from patch_image import extract_fit, require


def check(image, elf):
    fit = extract_fit(image)
    require(len(fit['segments']) == 4, 'Expected four-segment image')
    payload, sections = elf_payload(elf, CODE_BASE)
    u = Uc(UC_ARCH_RISCV, UC_MODE_RISCV32)
    u.mem_map(0x30040000, 0x100000)
    u.mem_map(0x40000000, 0x400000)
    for seg in fit['segments']:
        u.mem_write(seg['load_address'],seg['data'])
    # Poison destination: success requires copying every byte, including zero BSS.
    u.mem_write(CODE_BASE,b'\xa5'*len(payload))
    preserved = [1,2,3,4,8,9,*range(10,28),29,30,31]
    expected = {i:0x11000000+i*256 for i in preserved}
    expected[11] = 0
    for i,v in expected.items(): u.reg_write(getattr(r,'UC_RISCV_REG_X'+str(i)),v)
    u.emu_start(0x40000000,0x40006428,count=len(payload)*2+100)
    require(u.reg_read(r.UC_RISCV_REG_PC)==0x40006428,'Reset shim did not reach native entry')
    require(bytes(u.mem_read(CODE_BASE,len(payload)))==payload,'Relocated payload differs')
    require(all(u.reg_read(getattr(r,'UC_RISCV_REG_X'+str(i)))==v for i,v in expected.items()),'Startup register changed')
    heap_start = int.from_bytes(u.mem_read(HEAP_ADDRESS,4),'little')
    require(heap_start==CODE_BASE+len(payload),'Heap overlaps runtime payload')
    model_heap = bytes(u.mem_read(0x400a1e08,16))
    require(model_heap.hex()=='02000000e0cf08406018063000000830','Model heap descriptor changed')
    u.emu_start(0x40006428,0x40000004,count=100)
    require(u.reg_read(r.UC_RISCV_REG_PC)==0x40000004,'Native entry did not return to startup')
    # Independently observed native memset40025ec4 range; model its effect here.
    u.mem_write(0x400a1f80,bytes(HEAP_ORIGINAL-0x400a1f80))
    require(bytes(u.mem_read(CODE_BASE,len(payload)))==payload,'Native BSS clear overlaps payload')
    return {'image_sha256':hashlib.sha256(image).hexdigest(), 'elf_sha256':hashlib.sha256(elf).hexdigest(),
        'payload_sha256':hashlib.sha256(payload).hexdigest(), 'payload_bytes':len(payload),
        'reset_jump_and_relocation_executed':True,'native_entry_executed':True,
        'startup_registers_preserved':True,'modeled_native_bss_clear_preserves_payload':True,
        'heap3_start':hex(heap_start),'model_heap2_unchanged':True,'elf_sections':sections,
        'device_tested':False,'limitations':['SPL loading modeled from parsed FIT, not executed',
            'BSS memset modeled from statically observed bounds',
            'No hardware cache/peripheral or real-time validation']}

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--image',type=Path,required=True);p.add_argument('--elf',type=Path,required=True)
    p.add_argument('--report',type=Path,required=True);a=p.parse_args()
    result=check(a.image.read_bytes(),a.elf.read_bytes())
    a.report.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(result,indent=2))
