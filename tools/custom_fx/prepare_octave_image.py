#!/usr/bin/env python3
"""Combine audited version-specific octave hooks with an exact OS backup. Offline only."""
import argparse,hashlib,json
from pathlib import Path
import octave_hooks,octave_ui
from package_octave import package
from patch_image import extract_fit

def prepare(backup,build,output):
 image=Path(backup).read_bytes();build=Path(build);elf=(build/'device.elf').read_bytes();receipt=json.loads((build/'build.json').read_text());symbols=receipt['symbols']
 digest=hashlib.sha256(elf).hexdigest()
 if digest!=receipt['elf_sha256']:raise ValueError('Device ELF differs from build receipt')
 patches=octave_hooks.patches(image,symbols)+octave_ui.patches(image,symbols)
 patches+=octave_hooks.diagnostic_patches(image,symbols)
 version=extract_fit(image)['image_version'].replace('1.11b','1.11')
 if receipt['firmware_version']!=version:raise ValueError('Build version differs from input firmware')
 hooks={'schema_version':1,'firmware_version':version,'elf_sha256':digest,'patches':patches}
 target,manifest=package(image,elf,hooks)
 out=Path(output);out.mkdir(parents=True,exist_ok=False)
 (out/'os-partition.bin').write_bytes(target)
 (out/'hooks.json').write_text(json.dumps(hooks,indent=2)+'\n');(out/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
 print(json.dumps({k:manifest[k] for k in ['input_sha256','output_sha256','old_heap_start','new_heap_start','new_seg1_size']},indent=2))
if __name__=='__main__':
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('--backup',required=True);p.add_argument('--build',required=True);p.add_argument('--output',required=True);a=p.parse_args();prepare(a.backup,a.build,a.output)
