#!/usr/bin/env python3
"""Build the experimental1.12 PITCH adapter and its bounded telemetry; no USB."""
import argparse,hashlib,json,subprocess
from pathlib import Path
from build_octave_probe import ROOT,FLAGS

def build(destination, experiment="exact", window="2048", profile_jobs=False, budget_percent=40, fast_phase=False, sub_dc=False, multirate_sub=False):
 if budget_percent not in (40,50,60,65):raise ValueError("unsupported experimental budget")
 if multirate_sub and (window!="1024" or profile_jobs):raise ValueError("multirate requires small FFT and unprofiled build")
 if profile_jobs and window!="1024":raise ValueError("job profile requires small FFT schedule")
 if window not in ("2048","1024"):raise ValueError("invalid FFT window")
 out=Path(destination).resolve();out.mkdir(parents=True,exist_ok=False)
 docker=['docker','run','--rm','--platform','linux/amd64','--network','none','-v',f'{ROOT}:/work:ro','-v',f'{out}:/out','debian:bookworm-slim'];tc='/work/analysis/vendor-isa/toolchain/bin/riscv64-unknown-elf-'
 def run(tool,args):return subprocess.check_output(docker+[tc+tool]+args,text=True)
 flags=[('-O2' if x=='-Os' else x) for x in FLAGS]+['-fno-math-errno']
 flags += [f'-DNC_OCTAVE_BUDGET_PERCENT={budget_percent}']
 if profile_jobs:flags+=['-DNC_OCTAVE_PROFILE_JOBS']
 if fast_phase:flags+=['-DNC_OCTAVE_FAST_PHASE']
 if sub_dc or multirate_sub:flags+=['-DNC_OCTAVE_SUB_DC']
 if multirate_sub:flags+=['-DNC_OCTAVE_MULTIRATE_SUB']
 if window=='1024':flags+=['-DNC_OCTAVE_SMALL_FFT']
 if experiment in ('fma','combined'):flags+=['-DNC_OCTAVE_FFT_FMA']
 if experiment in ('specialized','combined'):flags+=['-DNC_OCTAVE_FFT_SPECIALIZED']
 script='ENTRY(nc_octave_dispatch)\nSECTIONS { . = 0x400a4540; .text : { *(.text*) *(.rodata*) *(.srodata*) } .data : { *(.data*) *(.sdata*) } .bss : { *(.bss*) *(.sbss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.note*) *(.eh_frame*) } }\n'
 (out/'device.ld').write_text(script)
 sources=['device.cpp','telemetry.cpp','metadata.cpp','device_ui.S'];objects=[]
 for source in sources:
  obj=f'/out/{source}.o';objects.append(obj)
  run('g++',flags+['-c','/work/firmware/custom-fx/octave/'+source,'-o',obj])
 run('g++',FLAGS[:2]+['-nostdlib',f'-Wl,-T,/out/device.ld,-Map,/out/device.map,--no-relax']+objects+['-lm','-lc','-lgcc','-o','/out/device.elf'])
 undefined=run('nm',['-u','/out/device.elf']).strip();assert not undefined,undefined
 (out/'device.asm').write_text(run('objdump',['-d','/out/device.elf']))
 symbols={}
 for line in run('nm',['-n','/out/device.elf']).splitlines():
  parts=line.split()
  if len(parts)==3:symbols[parts[2]]=int(parts[0],16)
 receipt={'firmware_version':'1.12','fft_experiment':experiment,'fft_window':window,'profile_jobs':profile_jobs,'fast_phase':fast_phase,'sub_dc':sub_dc or multirate_sub,'multirate_sub':multirate_sub,'budget_percent':budget_percent,'compiler':run('g++',['--version']).splitlines()[0],'flags':flags,'elf_sha256':hashlib.sha256((out/'device.elf').read_bytes()).hexdigest(),'symbols':symbols,'size':run('size',['/out/device.elf']),'source_sha256':{p:hashlib.sha256((ROOT/'firmware/custom-fx/octave'/p).read_bytes()).hexdigest() for p in sources+['shared_core.h','controls.h','phase_math.h','overload_guard.h','multirate_core.h']}}
 (out/'build.json').write_text(json.dumps(receipt,indent=2)+'\n');print(receipt['size'])
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',required=True);p.add_argument('--fft-experiment',choices=['exact','fma','specialized','combined'],default='exact');p.add_argument('--fft-window',choices=['2048','1024'],default='2048');p.add_argument('--profile-jobs',action='store_true');p.add_argument('--budget-percent',type=int,choices=[40,50,60,65],default=40);p.add_argument('--fast-phase',action='store_true');p.add_argument('--sub-dc',action='store_true');p.add_argument('--multirate-sub',action='store_true');a=p.parse_args();build(a.output,a.fft_experiment,a.fft_window,a.profile_jobs,a.budget_percent,a.fast_phase,a.sub_dc,a.multirate_sub)
