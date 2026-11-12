#!/usr/bin/env python3
"""Combine audited octave DSP/UI/telemetry hooks with an exact1.12 OS backup. Offline only."""
import argparse,hashlib,json
from pathlib import Path
import octave_hooks,octave_ui
from package_octave import package

def prepare(backup,build,output):
 image=Path(backup).read_bytes();build=Path(build);elf=(build/'device.elf').read_bytes();receipt=json.loads((build/'build.json').read_text());symbols=receipt['symbols']
 digest=hashlib.sha256(elf).hexdigest()
 if digest!=receipt['elf_sha256']:raise ValueError('Device ELF differs from build receipt')
 patches=octave_hooks.patches(image,symbols)+octave_ui.patches(image,symbols)
 address=0x4008f8ac;offset=0xd000+address-0x40000000;old=bytes.fromhex('797106d6')
 if image[offset:offset+4]!=old:raise ValueError('Unexpected native AMP-read prologue')
 patches.append({'address':hex(address),'offset':offset,'expected_hex':old.hex(),'replacement_hex':octave_hooks.jal(address,symbols['nc_octave_diagnostic']).hex(),'description':'Bounded OCT? telemetry; native AMP-read fallback preserved'})
 hooks={'schema_version':1,'firmware_version':'1.12','elf_sha256':digest,'patches':patches}
 target,manifest=package(image,elf,hooks)
 out=Path(output);out.mkdir(parents=True,exist_ok=False)
 (out/'os-partition.bin').write_bytes(target)
 (out/'hooks.json').write_text(json.dumps(hooks,indent=2)+'\n');(out/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
 print(json.dumps({k:manifest[k] for k in ['input_sha256','output_sha256','old_heap_start','new_heap_start','new_seg1_size']},indent=2))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--backup',required=True);p.add_argument('--build',required=True);p.add_argument('--output',required=True);a=p.parse_args();prepare(a.backup,a.build,a.output)
