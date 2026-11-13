"""Reviewed exact-build native address/ABI profiles for octave ports.

Addresses originate in retained REA exports and vendor objdump comparisons;
matching instruction windows alone is not runtime validation. See evidence.
"""
import json,re
from pathlib import Path
PATH=Path(__file__).with_name('octave_versions.json')
def profile(version):
    version='1.11' if version=='1.11b' else version
    return json.loads(PATH.read_text())[version]
def map_address(address,version):
    return int(profile(version)['address_map'].get(hex(address),hex(address)),16)
def port_source(source,version,strict=False):
    p=profile(version)
    if version=='1.12':return source
    if version=='1.10':
        from octave_110 import port_source as port110
        source=port110(source)
    if strict:
        # Only actual target code/data address ranges; DSP arithmetic constants
        # (e.g. float bit masks) are outside these ranges.
        native={int(m[0],16) for m in re.finditer(r'0x[0-9a-fA-F]+',source)
                if 0x30040000<=int(m[0],16)<0x30080000 or 0x40000000<=int(m[0],16)<0x400c0000}
        explicit={int(k,16) for k in p['address_map']}
        # 1.10's different native allocation model injects two already-local
        # addresses before common mapping; neither is a canonical 1.12 target.
        if version=='1.10':explicit|={0x40068b2a,0x40068f00}
        missing=native-explicit
        if missing:raise ValueError('Unreviewed native addresses: '+','.join(map(hex,sorted(missing))))
    # Replay each version's actual overwritten instruction pair.
    source=source.replace('bne a4,a3,1f','bne a5,a4,1f')
    source=source.replace('sw s0,24(sp)','sw a0,12(sp)')
    if version=='1.11':
        source=source.replace('sw s1,676(sp)','sw s2,672(sp)')
        source=source.replace('0xd98','0x7d0').replace('0xe40','0x878').replace('0xe48','0x880')
    return re.sub(r'0x[0-9a-fA-F]+',lambda m:p['address_map'].get(hex(int(m[0],16)),m[0]),source)
