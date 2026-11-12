"""Exact-build NanoCore 1.12 PITCH/FX2 subtype8 UI hooks; no device I/O.

Three controls DRY, SWELL, LEVEL, all shown as percentages. SWELL100 means
2000ms in the experimental DSP adapter. Native labels for other effects stay
unchanged. Defaults gate is supplied by the linked device adapter:
  a2!=a6: continue4006c94e; otherwise fill s1[0:s0] with .65/0/.5/zeros,
  then jump4006c998 (native defaults epilogue). a6 is8 at the hook.
Retained vendor disassembly: analysis/octave-runtime/ui-*.asm.
"""
import struct
from patch_image import extract_fit
from octave_hooks import jal

LOAD = 0x40000000


def address_pair(pc, target, rd=10):
    """PC-relative AUIPC/ADDI, matching the native name-load register."""
    delta = target - pc
    hi = (delta + 0x800) >> 12
    lo = delta - (hi << 12)
    return struct.pack('<II', ((hi & 0xfffff) << 12) | (rd << 7) | 0x17,
                       ((lo & 0xfff) << 20) | (rd << 15) | (rd << 7) | 0x13)


def patches(image, symbols):
    fit = extract_fit(image)
    if fit['image_version'] != '1.12':
        raise ValueError('Octave UI requires firmware1.12')
    segment = next(s for s in fit['segments'] if s['load_address'] == LOAD)
    result = []

    def sym(name):
        value = symbols[name]
        return int(value, 0) if isinstance(value, str) else value

    def add(address, expected_hex, replacement, description):
        expected = bytes.fromhex(expected_hex)
        offset = segment['offset'] + address - LOAD
        if image[offset:offset + len(expected)] != expected:
            raise ValueError(f'Unexpected native UI bytes at {address:#x}')
        if len(replacement) != len(expected):
            raise ValueError('UI patch changes native size')
        result.append(dict(address=hex(address), offset=offset,
                           expected_hex=expected.hex(),
                           replacement_hex=replacement.hex(), description=description))

    for address, expected in [(0x40025e24, '175507001305458a'),
                              (0x40025f7a, '174507001305a577')]:
        add(address, expected, address_pair(address, sym('nc_octave_name')),
            'FX2 subtype8 display name OCTAVE')
    labels = struct.pack('<3I', *(sym('nc_octave_' + x + '_label')
                                  for x in ('dry', 'swell', 'level')))
    for address, expected in [(0x4009bc90, 'c8a60940d0ab0940d8ab0940'),
                              (0x4009b6bc, 'b4ac0940c8af0940f4ab0940')]:
        add(address, expected, labels, 'Private subtype8 DRY/SWELL/LEVEL labels')
    add(0x40026ef2, '6318d700', jal(0x40026ef2, sym('nc_octave_count_gate')),
        'Subtype8 count3; preserve delay callers of shared count3/4 path')
    add(0x400276f4, '0dec53058420', jal(0x400276f4, 0x4002777e) + b'\x01\x00',
        'Subtype8 uses existing native percentage formatter for all controls')
    add(0x4001b420, '85471cc0', jal(0x4001b420, 0x4001b3da),
        'Subtype8 DRY continuous control; remove native semitone enum for parameter0')
    add(0x4006c94a, '6306060b', jal(0x4006c94a, sym('nc_octave_defaults_gate')),
        'Subtype8 defaults .65/0/.5; preserve shared drive defaults')
    return result
