#!/usr/bin/env python3
"""Produce a fixed-size raw FIT with a built custom effect in the Velvet effect slot."""
import argparse
import hashlib
import json
from pathlib import Path
from patch_image import patch_image, verify_manifest

ROOT=Path(__file__).resolve().parents[2]

def label_patch(image, label):
    encoded = label.encode('ascii')
    original = b'VELVET VIBRATO\0'
    if not encoded or len(encoded) > 13 or any(c < 32 or c > 126 for c in encoded):
        raise ValueError('Label must be 1..13 printable ASCII characters')
    if image.count(original) != 1:
        raise ValueError('Expected one exact native Velvet label')
    return {'offset': image.index(original), 'expected_hex': original.hex(),
            'replacement_hex': encoded.ljust(len(original), b'\0').hex(),
            'description': 'Rename Velvet replacement to ' + label}


def package(image_path, build_path, output, label=None, effect="gain"):
    image=Path(image_path).read_bytes()
    build=Path(build_path)
    receipt=json.loads((build/'build.json').read_text())
    version=receipt['firmware_version']
    site=json.loads((ROOT/'evidence/custom-fx-patch-site.json').read_text())['sites'][version]
    if effect not in ('gain','univibe'): raise ValueError('Unsupported effect')
    code=(build/(effect+'.bin')).read_bytes()
    sha=lambda b:hashlib.sha256(b).hexdigest()
    if sha(image)!=site['payload_sha256']:
        raise ValueError('Expected the exact validated release FIT; physical backups require a separately reviewed plan')
    if sha(code)!=receipt['artifacts'][effect]['sha256']:
        raise ValueError('Build binary differs from receipt')
    if int(receipt['artifacts'][effect]['address'],16)!=int(site['entry_address'],16):
        raise ValueError('Wrong link address')
    original=bytes.fromhex(site['original_body_hex'])
    if len(code)>len(original) or len(code)%2:
        raise ValueError('Code does not fit site')
    # Unreachable remainder filled with compressed EBREAK, so bad fall-through
    # fails visibly instead of executing fragments of the old algorithm.
    replacement=code+b'\x02\x90'*((len(original)-len(code))//2)
    if effect == 'univibe':
        if version != '1.10' or receipt['artifacts'][effect].get('parameter_layout') != ['SPEED','DEPTH','LEVEL','MODE']:
            raise ValueError('Four-control UniVibe requires current 1.10 build metadata')
        from vibe_ui import ui_processor_tail
        tail_address, tail = ui_processor_tail()
        tail_offset = tail_address - int(site['entry_address'],16)
        if tail_offset < len(code) or tail_offset+len(tail)>len(replacement):
            raise ValueError('UI helper overlaps DSP or exceeds replacement site')
        replacement = replacement[:tail_offset]+tail+replacement[tail_offset+len(tail):]
    plan={'image_kind':'raw-os-fit','firmware_version':version,
          'input_sha256':sha(image),'patches':[{
          'offset':site['fit_file_offset'],'expected_hex':original.hex(),
          'replacement_hex':replacement.hex(),
          'description':'Replace MOD10 Velvet Vibrato with custom '+effect}]}
    if label is not None:
        plan['patches'].append(label_patch(image, label))
    if effect == 'univibe':
        if version != '1.10' or receipt['artifacts'][effect].get('parameter_layout') != ['SPEED','DEPTH','LEVEL','MODE']:
            raise ValueError('Four-control UniVibe requires current 1.10 build metadata')
        from vibe_ui import ui_patches
        plan['patches'].extend(ui_patches(image))
    result,manifest=patch_image(image,plan)
    verify_manifest(image,result,manifest)
    out=Path(output)
    out.mkdir(parents=True,exist_ok=False)
    (out/'firmware.bin').write_bytes(result)
    (out/'plan.json').write_text(json.dumps(plan,indent=2)+'\n')
    (out/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
    print(json.dumps({'output':str(out),'sha256':sha(result),'size':len(result),
                      'device_tested':False},indent=2))

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--input',required=True)
    p.add_argument('--build',required=True)
    p.add_argument('--output',required=True)
    p.add_argument('--label', help='Optional replacement name, up to 13 ASCII characters')
    p.add_argument('--effect', choices=['gain','univibe'],default='gain')
    a=p.parse_args()
    package(a.input,a.build,a.output,a.label,a.effect)
