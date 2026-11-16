"""Exact native 1.2 FX2 ABI. Static evidence: firmware.asm addresses in profile.

The accepted mono multirate algorithm is unchanged; rate is supplied by the
48-kHz native initializer. Stereo inputs are folded to mono as in 1.12.
"""
import re
from octave_versions import profile

def port_source(source,strict=False):
    p=profile('1.2')
    source=source.replace('(bytes+4)','(bytes+8)').replace('stateFor(bytes+8)','stateFor(bytes+16)')
    source=source.replace('bytes[0xe40]','bytes[0xe48]')
    # Native entry begins with __riscv_save_12. Replay its return address,
    # not a JAL whose return would point into this trampoline.
    source=source.replace('"1: addi sp,sp,-688\\n"\n        "sw s1,676(sp)\\n"\n        "li t0,0x4006b1cc\\n"\n        "jr t0\\n"',
      '"1: li t0,0x40069824\\n"\n        "li t1,0x4000c3a4\\n"\n        "jr t1\\n"')
    for address in ('0x3004c224','0x3004c228','0x3004c22c'):
        source=source.replace('word('+address+')','0 /* native heap statistics not mapped in 1.2 */')
    source=source.replace('1: addi sp,sp,-48\\n sw ra,44(sp)\\n li t0,0x4008f8b0\\n jr t0\\n',
        '1: li a0,0\\n beqz a4,2f\\n li t0,0x4007fb56\\n jr t0\\n 2: ret\\n')
    if strict:
        native={int(x,16) for x in re.findall(r'0x[0-9a-fA-F]+',source) if 0x30040000<=int(x,16)<0x30200000 or 0x40000000<=int(x,16)<0x40100000}
        allowed={int(k,16) for k in p['address_map']}|{0x40069824,0x4000c3a4,0x4007fb56}
        missing=native-allowed
        if missing:raise ValueError('Unreviewed 1.2 addresses: '+','.join(map(hex,sorted(missing))))
    return re.sub(r'0x[0-9a-fA-F]+',lambda m:p['address_map'].get(hex(int(m[0],16)),m[0]),source)

def patches(image,symbols):
    from patch_image import extract_fit
    from octave_hooks import jal,clui
    from firmware_identity import identify_firmware
    if identify_firmware(image)!='1.2':raise ValueError('Native1.2 hooks require firmware1.2')
    p=profile('1.2');fit=extract_fit(image);seg=next(s for s in fit['segments'] if s['load_address']==0x40000000)
    result=[]
    hooks={'nc_octave_dispatch':0x4006b1c4,'nc_octave_pitch_init':0x4007876a,'nc_octave_pitch_reset':0x40079596,'nc_octave_pitch_set_shift':0x40078aba}
    def add(old,after,description):
        address=int(p['address_map'][hex(old)],16);before=bytes.fromhex(p['guard_bytes'][hex(old)]);offset=seg['offset']+address-0x40000000
        if image[offset:offset+len(before)]!=before:raise ValueError(f'Unexpected 1.2 hook bytes at {address:#x}')
        if len(before)!=len(after):raise ValueError('Hook changes size')
        result.append(dict(address=hex(address),offset=offset,expected_hex=before.hex(),replacement_hex=after.hex(),description=description))
    for name,old in hooks.items():
        target=symbols[name];target=int(target,0) if isinstance(target,str) else target
        add(old,jal(int(p['address_map'][hex(old)],16),target),name)
    for old in (0x4000ea52,0x4000ea6a):add(old,clui(10,16),'Expand general-heap pitch ring 8192 -> 65536; NAM model heap untouched')
    return result


def port_test_source(source):
    import sys
    # Keep the common numerical and ABI assertions; scratch memory must not
    # overwrite new ITCM executable code at 0x30040000.
    for old,new in [('0x30040000','0x30140000'),('0x30041000','0x30141000'),('0x30042000','0x30142000'),('0x30043000','0x30143000'),('0x30044000','0x30144000'),('0x30045000','0x30145000'),('0x30045004','0x30145004')]:source=source.replace(old,new)
    source=source.replace('44100.','48000.').replace('family+8','family+16').replace('0xe48','0xe50')
    source=source.replace('0x4006b1cc','0x40069824').replace('count=10','count=30').replace('stack-688','stack-64')
    source=source.replace('3917','3600').replace('5804','5333').replace('5805','5334')
    source=source.replace("'elf_sha256':hashlib", "'firmware_version':'1.2','sample_rate':48000,'elf_sha256':hashlib")
    if '--block-32' in sys.argv:
        start=source.index('for stereo,inplace in');end=source.index('stats=struct.unpack',start)
        section=source[start:end].replace('64','32').replace('256','128')
        source=source[:start]+section+source[end:]
        source=source.replace('stats[1]==4096','stats[1]==2048').replace("'compared_samples':4096", "'compared_samples':2048")
    return port_source(source)
