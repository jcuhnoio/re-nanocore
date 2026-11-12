#!/usr/bin/env python3
"""Build freestanding NanoCore FX with the retained Xuantie toolchain in Docker.

No device operations. Gain or UniVibe replaces the dedicated Velvet routine; Chorus is
built separately for review and is not injected by this script.
"""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[2]
FLAGS = ['-march=rv32imafdcpzpsfoperand_xtheade', '-mabi=ilp32d',
         '-Os', '-std=c11', '-ffreestanding', '-fno-builtin',
         '-ffunction-sections', '-fdata-sections', '-msmall-data-limit=0',
         '-mno-relax', '-ffp-contract=off', '-Wall', '-Wextra', '-Werror']
SITES = {'1.10': 0x400720ae, '1.11': 0x400747ee, '1.12': 0x40074e5e}


def build(out, version):
    out = Path(out).resolve()
    out.mkdir(parents=True, exist_ok=False)
    tool = '/work/analysis/vendor-isa/toolchain/bin/riscv64-unknown-elf-'
    docker = ['docker', 'run', '--rm', '--platform', 'linux/amd64',
              '--network', 'none', '-v', f'{ROOT}:/work:ro',
              '-v', f'{out}:/out', 'debian:bookworm-slim']
    def run(name, args):
        return subprocess.check_output(docker + [tool + name] + args, text=True)
    receipt = {'firmware_version': version, 'flags': FLAGS,
               'compiler': run('gcc', ['--version']).splitlines()[0],
               'docker_image': subprocess.check_output(
                   ['docker','image','inspect','debian:bookworm-slim','--format','{{.Id}}'],text=True).strip(),
               'header_sha256': hashlib.sha256((ROOT/'firmware/custom-fx/include/nc_fx.h').read_bytes()).hexdigest(),
               'artifacts': {}}
    for effect, address, entry, limit in [
        ('gain', SITES[version], 'nc_fx_velvet_gain', 1392),
        ('univibe', SITES[version], 'nc_fx_univibe', 1298),
        ('chorus', 0x40080000, 'nc_fx_chorus', 0x10000)]:
        # Chorus address is a REVIEW address only, not a proven injection site.
        script = f'''ENTRY({entry})
SECTIONS {{
 . = 0x{address:x};
 .payload 0x{address:x} : SUBALIGN(2) {{ *(.text.{entry}) *(.text*) . = ALIGN(4); *(.rodata*) *(.srodata*) }}
 .forbidden : {{ *(.data*) *(.sdata*) *(.bss*) *(.sbss*) *(COMMON) }}
 /DISCARD/ : {{ *(.comment) *(.note*) *(.eh_frame*) }}
 ASSERT(ADDR(.payload) == 0x{address:x}, "entry address moved")
 ASSERT({entry} == 0x{address:x}, "entry is not first")
 ASSERT(SIZEOF(.payload) <= {limit}, "replacement exceeds native routine")
 ASSERT(SIZEOF(.forbidden) == 0, "persistent globals prohibited")
}}
'''
        (out / f'{effect}.ld').write_text(script)
        src = f'/work/firmware/custom-fx/src/{effect}.c'
        run('gcc', FLAGS + ['-I/work/firmware/custom-fx/include', '-c', src,
                           '-o',f'/out/{effect}.o'])
        run('gcc', FLAGS + ['-nostdlib', '-nostartfiles',
            f'-Wl,-T,/out/{effect}.ld,-Map,/out/{effect}.map,--no-relax',
            f'/out/{effect}.o', '-o', f'/out/{effect}.elf'])
        undefined = run('nm', ['-u',f'/out/{effect}.elf']).strip()
        if undefined:
            raise ValueError('Unresolved symbols: ' + undefined)
        run('objcopy', ['-O','binary','--only-section=.payload',
                        f'/out/{effect}.elf', f'/out/{effect}.bin'])
        dis = run('objdump', ['-d', f'/out/{effect}.elf'])
        (out / f'{effect}.asm').write_text(dis)
        (out / f'{effect}.attributes.txt').write_text(run('readelf',
                    ['-h','-A','-r',f'/out/{effect}.elf']))
        data = (out / f'{effect}.bin').read_bytes()
        receipt['artifacts'][effect] = {'address':hex(address), 'size':len(data),
            'sha256':hashlib.sha256(data).hexdigest(),
            'source_sha256':hashlib.sha256((ROOT/'firmware/custom-fx/src'/f'{effect}.c').read_bytes()).hexdigest(),
            'entry':entry, 'unresolved_symbols':[],
            'injection_candidate':effect in ('gain','univibe'), 'capacity':limit}
        if effect == 'univibe':
            receipt['artifacts'][effect]['parameter_layout'] = ['SPEED','DEPTH','LEVEL','MODE']
    (out/'build.json').write_text(json.dumps(receipt,indent=2)+'\n')
    print(json.dumps(receipt,indent=2))

if __name__ == '__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--output', required=True)
    p.add_argument('--version',choices=sorted(SITES),default='1.12')
    a=p.parse_args()
    build(a.output,a.version)
