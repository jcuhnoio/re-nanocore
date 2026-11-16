"""Firmware1.2 UI hooks. Actual native entry ABIs, not a 1.12 address delta."""
from patch_image import extract_fit
from octave_hooks import jal
# Every guard is extracted from the retained signed1.2 payload and recorded here.
HOOKS = [
 (0x4006adba, '130745ff', 'nc_octave_native_count_gate', 'Native bank setter count11 for subtype8'),
 (0x4002a55e, 'ef127ee7', 'nc_octave_name_gate', 'FX2 subtype8 name'),
 (0x4002a8bc, 'ef12feaf', 'nc_octave_label_gate', 'Eleven labels with native shared-save fallback'),
 (0x4002b93a, 'ef02bea9', 'nc_octave_count_gate', 'Eleven controls; preserve every other family'),
 (0x4002bc20, 'ef024ef8', 'nc_octave_format_gate', 'Private percent/ms/Hz/cents/enum formatter'),
 (0x4006ae0c, '49c9ef126adc', 'nc_octave_defaults_gate', 'Bounded defaults, preserve null pointer behavior'),
 (0x4002166c, '85f485471cc0', 'nc_octave_enum_gate', 'Dry FX and resonance enums; preserve UniVibe entry hook'),
]
def patches(image, symbols):
 from firmware_identity import identify_firmware
 # Layout routing handles the stale FIT label; the packager also verifies hashes.
 version=identify_firmware(image)
 if version!='1.2':raise ValueError('Octave1.2 UI requires exact firmware1.2')
 segment=next(s for s in extract_fit(image)['segments'] if s['load_address']==0x40000000)
 out=[]
 for address,guard,name,description in HOOKS:
  offset=segment['offset']+address-0x40000000
  expected=bytes.fromhex(guard)
  if image[offset:offset+len(expected)]!=expected:raise ValueError(f'Unexpected1.2 UI bytes at {address:#x}')
  target=symbols[name];target=int(target,0) if isinstance(target,str) else target
  replacement=jal(address,target)+b'\x01\x00'*((len(expected)-4)//2)
  out.append(dict(address=hex(address),offset=offset,expected_hex=guard,replacement_hex=replacement.hex(),description=description))
 return out
