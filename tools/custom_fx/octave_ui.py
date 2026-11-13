"""Exact-build NanoCore 1.12 eleven-control octave metadata hooks.
No device I/O. Internal enum hook preserves the separate UniVibe entry hook.
"""
import struct
from patch_image import extract_fit
from octave_hooks import jal
from octave_versions import profile,map_address

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
    version='1.11' if fit['image_version']=='1.11b' else fit['image_version'];p=profile(version)
    mapped=lambda address:map_address(address,version)
    segment = next(s for s in fit['segments'] if s['load_address'] == LOAD)
    result = []

    def sym(name):
        value = symbols[name]
        return int(value, 0) if isinstance(value, str) else value

    def add(address, expected_hex, replacement, description):
        expected = bytes.fromhex(p['guard_bytes'][hex(address)])
        address=mapped(address)
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
        add(address, expected, address_pair(mapped(address), sym('nc_octave_name')),
            'FX2 subtype8 display name OCTAVE')
    add(0x4002607e, '011122cc', jal(mapped(0x4002607e), sym('nc_octave_label_gate')),
        'Private bounds-checked eleven-control labels; native fallback retained')
    add(0x40026ef2, '6318d700', jal(mapped(0x40026ef2), sym('nc_octave_count_gate')),
        'Subtype8 count11; preserve delay callers of shared count3/4 path')
    add(0x40027192, '5d71a2c4', jal(mapped(0x40027192), sym('nc_octave_format_gate')),
        'Bounds-checked percent/ms/Hz/cents and dry/resonance mode formatting')
    add(0x4001b41e, 'd5fc85471cc0', jal(mapped(0x4001b41e), sym('nc_octave_enum_gate')) + b'\x01\x00',
        'FX2 subtype8 parameters8/9 four-state native enums; other controls continuous')
    add(0x4006c94a, '6306060b', jal(mapped(0x4006c94a), sym('nc_octave_defaults_gate')),
        'Subtype8 eleven-control defaults; preserve shared drive defaults')
    return result
