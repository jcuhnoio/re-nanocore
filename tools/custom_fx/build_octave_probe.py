#!/usr/bin/env python3
"""Build offline RV32 Shared2048/1024 probes. Outputs are NOT flashable patches."""
import argparse,hashlib,json,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
FLAGS=['-march=rv32imafdcpzpsfoperand_xtheade','-mabi=ilp32d','-Os','-std=c++14','-ffreestanding','-fno-builtin','-fno-exceptions','-fno-rtti','-ffunction-sections','-fdata-sections','-msmall-data-limit=0','-mno-relax','-ffp-contract=off','-fstack-usage']
def build(destination, experiment="exact", window="2048"):
 if window not in ("2048","1024"):raise ValueError("invalid FFT window")
 out=Path(destination).resolve();out.mkdir(parents=True,exist_ok=False)
 docker=['docker','run','--rm','--platform','linux/amd64','--network','none','-v',f'{ROOT}:/work:ro','-v',f'{out}:/out','debian:bookworm-slim']
 tc='/work/analysis/vendor-isa/toolchain/bin/riscv64-unknown-elf-'
 def run(tool,args):return subprocess.check_output(docker+[tc+tool]+args,text=True)
 # Hypothetical review address only: linked size exceeds the stock pitch cluster.
 (out/'probe.ld').write_text('ENTRY(core_process)\nSECTIONS { . = 0x40077364; .text : { *(.text*) *(.rodata*) *(.srodata*) } .data : { *(.data*) *(.sdata*) } .bss : { *(.bss*) *(.sbss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.note*) *(.eh_frame*) } }\n')
 report={'purpose':'offline code-size and emulation probe; no device operations','flashable':False,'fft_experiment':experiment,'fft_window':window,'compiler':run('g++',['--version']).splitlines()[0],'flags':FLAGS,'variants':{}}
 report['source_sha256']={str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest() for p in [ROOT/'firmware/custom-fx/octave/shared_core.h',ROOT/'tools/custom_fx/octave_probe.cpp']}
 for name in ['baseline','optimized','scheduled']:
  flags=[('-O2' if name!='baseline' and flag=='-Os' else flag) for flag in FLAGS]+(['-DNC_OCTAVE_BASELINE'] if name=='baseline' else ['-fno-math-errno'])
  if name!='baseline':
   if window=='1024': flags+=['-DNC_OCTAVE_SMALL_FFT']
   if experiment in ('fma','combined'): flags+=['-DNC_OCTAVE_FFT_FMA']
   if experiment in ('specialized','combined'): flags+=['-DNC_OCTAVE_FFT_SPECIALIZED']
  if name=='scheduled': flags+=['-DNC_OCTAVE_SCHEDULED']
  run('g++',flags+['-c','/work/tools/custom_fx/octave_probe.cpp','-o',f'/out/{name}.o'])
  run('g++',FLAGS[:2]+['-nostdlib',f'-Wl,-T,/out/probe.ld,-Map,/out/{name}.map,--no-relax',f'/out/{name}.o','-lm','-lc','-lgcc','-o',f'/out/{name}.elf'])
  (out/f'{name}.asm').write_text(run('objdump',['-d',f'/out/{name}.elf']))
  size=run('size',[f'/out/{name}.o',f'/out/{name}.elf'])
  report['variants'][name]={'compile_flags':flags,'size_output':size,'undefined_object_symbols':run('nm',['-u',f'/out/{name}.o']).splitlines(),'elf_sha256':hashlib.sha256((out/f'{name}.elf').read_bytes()).hexdigest()}
 (out/'build.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',required=True);p.add_argument('--fft-experiment',choices=['exact','fma','specialized','combined'],default='exact');p.add_argument('--fft-window',choices=['2048','1024'],default='2048');a=p.parse_args();build(a.output,a.fft_experiment,a.fft_window)
