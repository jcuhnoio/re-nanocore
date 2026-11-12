#!/usr/bin/env python3
"""Rebuild retained version-specific UI helper bytes using existing Xuantie Docker toolchain."""
import argparse,hashlib,json,struct,subprocess
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]

def build(output, version="1.10"):
 out=Path(output).resolve();out.mkdir(parents=True,exist_ok=False)
 tool='/work/analysis/vendor-isa/toolchain/bin/riscv64-unknown-elf-'
 docker=['docker','run','--rm','--platform','linux/amd64','--network','none','-v',f'{ROOT}:/work:ro','-v',f'{out}:/out','debian:bookworm-slim']
 def run(name,args):return subprocess.check_output(docker+[tool+name]+args,text=True)
 source='vibe_ui.S'; linker='/work/tools/custom_fx/vibe_ui.ld'; defines=[]
 if version != '1.10':
  config=json.loads((ROOT/'tools/custom_fx/vibe_ui_versions.json').read_text())[version]
  source='vibe_ui_multi.S'; linker='/out/vibe_ui.ld'
  symbols=['count_continue','count_return','format_return','native_snprintf','native_percentage','enum_continue']
  layout='\n'.join(f'{name} = {config[name]};' for name in symbols)+'\nSECTIONS {\n'
  for section,address,capacity in [('defaults','defaults',120),('format','format',config['format_capacity']),('enum','enum_tail',94)]:
   layout+=f' .vibe_{section} {config[address]} : SUBALIGN(2) {{ *(.vibe_{section}) }}\n ASSERT(SIZEOF(.vibe_{section}) <= {capacity}, "{section} overflow")\n'
  layout+=' /DISCARD/ : { *(.comment) *(.note*) }\n}\n'
  (out/'vibe_ui.ld').write_text(layout)
  defines=[f'-DV112={int(version=="1.12")}',f'-DCHORUS_LABEL={config["chorus"]}',f'-DVIBRATO_LABEL={config["vibrato"]}',f'-DFORMAT_STRING={config["format_string"]}',f'-DMOD_SUBTYPE={int(config["subtypes"],16)+5}']
 flags=['-march=rv32imafdcpzpsfoperand_xtheade','-mabi=ilp32d','-nostdlib',f'-Wl,-T,{linker},--no-relax']
 run('gcc',flags+defines+[f'/work/tools/custom_fx/{source}','-o','/out/ui.elf'])
 (out/'ui.asm').write_text(run('objdump',['-d','/out/ui.elf']))
 b=(out/'ui.elf').read_bytes();shoff=struct.unpack_from('<I',b,32)[0];entsize,count,ns=struct.unpack_from('<HHH',b,46)
 sections=[struct.unpack_from('<10I',b,shoff+i*entsize) for i in range(count)]
 def data(s):return b[s[4]:s[4]+s[5]]
 names=data(sections[ns]);name=lambda s:names[s[0]:names.index(0,s[0])].decode()
 result={'sections':{},'symbols':{},'provenance':{'compiler':run('gcc',['--version']).splitlines()[0],'flags':flags+defines,'firmware_version':version,'source_file':source,'source_sha256':hashlib.sha256((ROOT/'tools/custom_fx'/source).read_bytes()).hexdigest(),'linker_sha256':hashlib.sha256(((ROOT/'tools/custom_fx/vibe_ui.ld') if version=='1.10' else (out/'vibe_ui.ld')).read_bytes()).hexdigest(),'rebuild':f'python3 tools/custom_fx/build_vibe_ui.py --version {version} --output NEW_DIRECTORY'}}
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
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',required=True);p.add_argument('--version',choices=['1.10','1.11','1.12'],default='1.10');a=p.parse_args();build(a.output,a.version)
