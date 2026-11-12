"""Exact NanoCore 1.12 hooks for the experimental Shared 2048/1024 adapter.
No device operations. Input may already carry the independent UniVibe patch;
all changed native instructions are still guarded byte-for-byte.
"""
import struct
from patch_image import extract_fit

LOAD=0x40000000
HOOKS={
    'nc_octave_dispatch': (0x4006b1c4, '130101d52322912a'),
    'nc_octave_pitch_init': (0x4007876a, '397106de'),
    'nc_octave_pitch_reset': (0x40079596, '6307055e'),
    'nc_octave_pitch_set_shift': (0x40078aba, '397106de'),
}
ALLOCATIONS=(0x4000ea52,0x4000ea6a)

def jal(pc,target):
    delta=target-pc
    if delta&1 or not -(1<<20)<=delta<(1<<20):raise ValueError('Hook outside JAL range')
    word=0x6f|((delta>>20)&1)<<31|((delta>>1)&1023)<<21|((delta>>11)&1)<<20|((delta>>12)&255)<<12
    return struct.pack('<I',word)

def clui(rd,imm):
    if not 1<=rd<=31 or rd==2 or not -32<=imm<=31 or imm==0:raise ValueError('Unsupported C.LUI')
    return struct.pack('<H',(3<<13)|(((imm>>5)&1)<<12)|(rd<<7)|((imm&31)<<2)|1)

def patches(image,symbols):
    fit=extract_fit(image)
    if fit['image_version']!='1.12':raise ValueError('Octave device hooks require 1.12')
    seg=next(s for s in fit['segments'] if s['load_address']==LOAD)
    result=[]
    def add(address,before,after,description):
        offset=seg['offset']+address-LOAD
        if image[offset:offset+len(before)]!=before:raise ValueError(f'Unexpected native hook bytes at {address:#x}')
        if len(before)!=len(after):raise ValueError('Hook changes size')
        result.append({'address':hex(address),'offset':offset,'expected_hex':before.hex(),'replacement_hex':after.hex(),'description':description})
    for name,(address,expected) in HOOKS.items():
        target=symbols[name]
        if isinstance(target,str):target=int(target,0)
        old=bytes.fromhex(expected)
        add(address,old,jal(address,target)+b'\x01\x00'*((len(old)-4)//2),name)
    for address in ALLOCATIONS:
        add(address,clui(10,2),clui(10,14),'Expand dedicated pitch ring allocation 8192 -> 57344 bytes; native failure checks retained')
    return result
