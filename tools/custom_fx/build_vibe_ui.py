#!/usr/bin/env python3
"""Rebuild retained1.10 UI helper bytes using existing Xuantie Docker toolchain."""
import argparse,hashlib,json,struct,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]

def build(output):
 out=Path(output).resolve();out.mkdir(parents=True,exist_ok=False)
 tool='/work/analysis/vendor-isa/toolchain/bin/riscv64-unknown-elf-'
 docker=['docker','run','--rm','--platform','linux/amd64','--network','none','-v',f'{ROOT}:/work:ro','-v',f'{out}:/out','debian:bookworm-slim']
 def run(name,args):return subprocess.check_output(docker+[tool+name]+args,text=True)
 flags=['-march=rv32imafdcpzpsfoperand_xtheade','-mabi=ilp32d','-nostdlib','-Wl,-T,/work/tools/custom_fx/vibe_ui.ld,--no-relax']
 run('gcc',flags+['/work/tools/custom_fx/vibe_ui.S','-o','/out/ui.elf'])
 (out/'ui.asm').write_text(run('objdump',['-d','/out/ui.elf']))
 b=(out/'ui.elf').read_bytes();shoff=struct.unpack_from('<I',b,32)[0];entsize,count,ns=struct.unpack_from('<HHH',b,46)
 sections=[struct.unpack_from('<10I',b,shoff+i*entsize) for i in range(count)]
 def data(s):return b[s[4]:s[4]+s[5]]
 names=data(sections[ns]);name=lambda s:names[s[0]:names.index(0,s[0])].decode()
 result={'sections':{},'symbols':{},'provenance':{'compiler':run('gcc',['--version']).splitlines()[0],'flags':flags,'source_sha256':hashlib.sha256((ROOT/'tools/custom_fx/vibe_ui.S').read_bytes()).hexdigest(),'linker_sha256':hashlib.sha256((ROOT/'tools/custom_fx/vibe_ui.ld').read_bytes()).hexdigest(),'rebuild':'python3 tools/custom_fx/build_vibe_ui.py --output NEW_DIRECTORY'}}
 for s in sections:
  if name(s).startswith('.vibe_'):result['sections'][name(s)]={'address':hex(s[3]),'hex':data(s).hex(),'size':s[5]}
  if s[1]==2:
   strs=data(sections[s[6]])
   for i in range(0,s[5],16):
    n,v,z,inf,oth,idx=struct.unpack_from('<IIIBBH',data(s),i)
    if n:
     nm=strs[n:strs.index(0,n)].decode()
     if nm.startswith('vibe_') or nm=='defaults':result['symbols'][nm]=hex(v)
 (out/'vibe_ui_code.json').write_text(json.dumps(result,indent=2)+'\n');print(json.dumps({k:v['size'] for k,v in result['sections'].items()}))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',required=True);a=p.parse_args();build(a.output)
