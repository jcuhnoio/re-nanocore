"""Exact1.10 MOD10 four-control UI patch fragments; no device operations.

Order SPEED, DEPTH, LEVEL, MODE. Values0..2 display percentages. MODE renders
CHORUS below0.5 and VIBRATO at/above0.5. Native enum descriptor makes the
MOD10 MODE encoder use exactly two states (normalized0 and1). Only MOD10 tables/paths change.
Assembly source: vibe_ui.S and fixed layout vibe_ui.ld; code JSON is retained
Xuantie GCC10.2 assembler output, no runtime assembly dependency.
"""
import hashlib
import json
from pathlib import Path
import struct

SOURCE_SHA='ed84c017176e6f41e07089af43031a3ca7a9a695a6c0e0ca30f9c1d743e7b82c'

def jal(pc,target):
    d=target-pc
    if d%2 or not -(1<<20)<=d<(1<<20):raise ValueError('JAL range')
    return struct.pack('<I',0x6f|((d>>20)&1)<<31|((d>>1)&1023)<<21|((d>>11)&1)<<20|((d>>12)&255)<<12)

def ui_processor_tail():
    code=json.loads(Path(__file__).with_name('vibe_ui_code.json').read_text())
    section=code['sections']['.vibe_enum']
    return int(section['address'],16),bytes.fromhex(section['hex'])


def ui_patches(image):
    if hashlib.sha256(image).hexdigest()!=SOURCE_SHA:
        raise ValueError('UI patch requires exact validated1.10 FIT')
    code=json.loads(Path(__file__).with_name('vibe_ui_code.json').read_text())
    result=[]
    def patch(address,replacement,description):
        offset=address-0x40000000+0x9000
        expected=image[offset:offset+len(replacement)]
        result.append({'offset':offset,'expected_hex':expected.hex(),
                       'replacement_hex':replacement.hex(),'description':description})
    for name,capacity in [('.vibe_defaults',120),('.vibe_format',76)]:
        s=code['sections'][name];data=bytes.fromhex(s['hex'])
        assert len(data)<=capacity and len(data)%2==0
        patch(int(s['address'],16),data+b'\x02\x90'*((capacity-len(data))//2),
              'MOD10-only '+name+'; no shared string mutations')
    patch(0x400263d6,jal(0x400263d6,int(code['symbols']['vibe_count'],16)),
          'MOD10 count4; preserve subtype8 count5 and all other branches')
    patch(0x4001a956,jal(0x4001a956,int(code['symbols']['vibe_enum'],16)),
          'MOD10 parameter3 native two-state enum; replay original prologue otherwise')
    labels=[int(code['symbols']['vibe_speed_label'],16),0x40093f9c,0x40093f38,
            int(code['symbols']['vibe_mode_label'],16)]
    for table in [0x40094914,0x40094640]:
        patch(table,struct.pack('<4I',*labels),'Private MOD10 labels SPEED/DEPTH/LEVEL/MODE')
    return result
