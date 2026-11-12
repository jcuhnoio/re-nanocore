#!/usr/bin/env python3
"""Compare native 1.12 and reconstructed Chorus machine code under Unicorn.

This isolates the steady-state sample loop: both receive identical explicitly
seeded prefix state with cached controls, so native initialization and parameter
math are NOT exercised. The only instruction emulated by Python is Xuantie
addsl (rd = rs1 + (rs2 << imm2)); all FP operations execute inside Unicorn.
No hardware timing or device/audio-interface behavior is established.
"""
import argparse
import hashlib
import json
import math
from pathlib import Path
import struct
from unicorn import Uc, UC_ARCH_RISCV, UC_MODE_RISCV32, UC_HOOK_CODE
from unicorn import riscv_const as r

ROOT = Path(__file__).resolve().parents[2]
STATE = 0x30010000
LEFT, RIGHT, OUTL, OUTR = 0x30040000, 0x30048000, 0x30050000, 0x30058000
PARAM, MODE, STACK, STOP = 0x30060000, 0x30061000, 0x300f0000, 0x400ffff0


def f32(x):
    return struct.unpack('<f', struct.pack('<f', x))[0]


def state_bytes(rate, depth):
    fs = 44100.0
    dt = f32(1.0 / fs)
    hz = f32(f32(f32(3.64) * rate) + f32(0.1))
    step = f32(f32(f32(2 * math.pi) * hz) / fs)
    state = bytearray(0x192ec)
    struct.pack_into('<fI15f', state, 0, fs, 0,
                     0.0, 0.0, -0.9238795042037964, 0.3826834261417389,
                     f32(math.sin(step)), f32(math.cos(step)), rate, depth, f32(0.8),
                     f32(f32(fs * f32(5.1)) / 1000), f32(f32(fs * depth) / 1000),
                     f32(dt / f32(dt + f32(6.36619733995758e-05))),
                     f32(0.8), 0.9726893305778503, 0.6353678107261658)
    return bytes(state)


def run(native, clean, entry, seeded, inputs, stereo, inplace, missing_right, block_frames):
    u = Uc(UC_ARCH_RISCV, UC_MODE_RISCV32)
    u.mem_map(0x40000000, 0x100000)
    u.mem_map(0x30000000, 0x100000)
    u.mem_write(0x40000000, native)
    if clean is not None:
        u.mem_write(entry, clean)
    u.mem_write(STATE, seeded)
    n = len(inputs[0])
    for address, samples in ((LEFT, inputs[0]), (RIGHT, inputs[1])):
        u.mem_write(address, struct.pack('<%df' % n, *samples))
    rate, depth = struct.unpack_from('<2f', seeded, 0x20)
    u.mem_write(PARAM, struct.pack('<2f', rate, depth))
    ol, ora = (LEFT, RIGHT) if inplace else (OUTL, OUTR)
    u.mem_write(STACK, struct.pack('<2I', stereo, MODE))
    u.mem_write(MODE, b'\xff')
    u.reg_write(r.UC_RISCV_REG_SP, STACK)
    u.reg_write(r.UC_RISCV_REG_MSTATUS, 0x6000)
    saved = {}
    for name in ['GP', 'TP'] + ['S%d' % i for i in range(12)]:
        reg = getattr(r, 'UC_RISCV_REG_' + name)
        saved[reg] = 0x12340000 + reg
        u.reg_write(reg, saved[reg])
    for i in range(12):
        reg = getattr(r, 'UC_RISCV_REG_FS%d' % i)
        saved[reg] = 0x3ff0000012340000 + i
        u.reg_write(reg, saved[reg])
    vendor = {}
    count = 0

    def instruction(uc, pc, size, _):
        nonlocal count
        count += 1
        if size != 4:
            return
        word = int.from_bytes(uc.mem_read(pc, 4), 'little')
        if word & 0x7f != 0x0b:
            return
        if word & 0xf800707f != 0x100b:
            raise RuntimeError('Unsupported vendor instruction %08x at %08x' % (word, pc))
        rd, rs1, rs2, shift = (word >> 7) & 31, (word >> 15) & 31, (word >> 20) & 31, (word >> 25) & 3
        val = uc.reg_read(r.UC_RISCV_REG_X0 + rs1) + (uc.reg_read(r.UC_RISCV_REG_X0 + rs2) << shift)
        if rd:
            uc.reg_write(r.UC_RISCV_REG_X0 + rd, val & 0xffffffff)
        uc.reg_write(r.UC_RISCV_REG_PC, pc + 4)
        vendor[hex(pc)] = vendor.get(hex(pc), 0) + 1

    u.hook_add(UC_HOOK_CODE, instruction)
    for offset in range(0, n, block_frames):
        frames = min(block_frames, n - offset)
        args = [STATE, LEFT + offset*4, 0 if missing_right else RIGHT + offset*4,
                ol + offset*4, ora + offset*4, frames, PARAM, 0]
        for i, value in enumerate(args):
            u.reg_write(getattr(r, 'UC_RISCV_REG_A%d' % i), value)
        u.reg_write(r.UC_RISCV_REG_RA, STOP)
        u.emu_start(entry, STOP, count=2000000)
        assert u.reg_read(r.UC_RISCV_REG_PC) == STOP, hex(u.reg_read(r.UC_RISCV_REG_PC))
        assert u.reg_read(r.UC_RISCV_REG_SP) == STACK
        assert all(u.reg_read(reg) == value for reg, value in saved.items())
        assert bytes(u.mem_read(MODE, 1)) == bytes([stereo])
    return {'audio': [bytes(u.mem_read(ol, n*4)), bytes(u.mem_read(ora, n*4))],
            'state': bytes(u.mem_read(STATE, len(seeded))), 'vendor_hooks': vendor,
            'instructions': count}


def compare(build, output):
    build = Path(build)
    receipt = json.loads((build / 'build.json').read_text())
    native_path = ROOT / 'analysis/decoder-capture/validated-releases/nanocore-1.12/seg1.bin'
    native = native_path.read_bytes()
    clean = (build / 'chorus.bin').read_bytes()
    entry = int(receipt['artifacts']['chorus']['address'], 16)
    cases = []
    for name, rate, depth, stereo, inplace, missing_right, block_frames in [
        ('impulse_mono_fixed', 0.0, 0.0, 0, False, False, 2048),
        ('stereo_modulated', 0.6043956279754639, 1.0, 1, False, False, 2048),
        ('stereo_inplace_fast', 1.0, 1.0, 1, True, False, 2048),
        ('stereo_missing_right', 0.25, 0.6, 1, False, True, 2048),
        ('stereo_engine_blocks', 0.6043956279754639, 1.0, 1, False, False, 64),
        ('mono_engine_blocks', 0.2, 0.75, 0, True, False, 64),
    ]:
        n = 2048
        if name.startswith('impulse'):
            inputs = ([1.0] + [0.0]*(n-1), [0.0]*n)
        else:
            inputs = ([f32(0.4*math.sin(i*0.137)) for i in range(n)],
                      [f32(0.25*math.cos(i*0.071)) for i in range(n)])
        state = state_bytes(f32(rate), f32(depth))
        orig = run(native, None, 0x4006dc08, state, inputs, stereo, inplace, missing_right, block_frames)
        rebuilt = run(native, clean, entry, state, inputs, stereo, inplace, missing_right, block_frames)
        differences = []
        max_error = 0.0
        for channel in range(2):
            av = struct.unpack('<%df' % n, orig['audio'][channel])
            bv = struct.unpack('<%df' % n, rebuilt['audio'][channel])
            differences.append(sum(a != b for a, b in zip(av, bv)))
            max_error = max(max_error, max(abs(a-b) for a, b in zip(av, bv)))
        case = {'case': name, 'frames': n, 'frames_per_callback': block_frames,
                'callback_calls': (n + block_frames - 1) // block_frames,
                'rate': rate, 'depth': depth,
                'different_samples_per_channel': differences, 'max_abs_error': max_error,
                'state_byte_differences': sum(a != b for a, b in zip(orig['state'], rebuilt['state'])),
                'native_vendor_instruction_hooks': orig['vendor_hooks'],
                'rebuilt_vendor_instruction_hooks': rebuilt['vendor_hooks'],
                'native_instruction_count': orig['instructions'],
                'rebuilt_instruction_count': rebuilt['instructions']}
        cases.append(case)
        print(name, 'audio differences', differences, 'state bytes', case['state_byte_differences'])
    report = {'emulator': 'Unicorn RV32 2.1.4', 'native_sha256': hashlib.sha256(native).hexdigest(),
              'rebuilt_sha256': hashlib.sha256(clean).hexdigest(),
              'scope': 'Steady-state subtype-0 loop with identical preinitialized state and cached controls',
              'excluded': ['native initialization', 'native trig and parameter changes', 'subtype switch',
                           'hardware timing', 'physical audio path'],
              'instruction_hooks': 'Xuantie addsl only; exact integer semantics, no skipped arithmetic',
              'abi_checks': ['SP restored', 'GP and TP preserved', 's0-s11 preserved',
                             '64-bit fs0-fs11 preserved', 'output channel mode'],
              'device_tested': False, 'cases': cases}
    Path(output).write_text(json.dumps(report, indent=2) + '\n')
    assert all(c['different_samples_per_channel'] == [0, 0] and c['state_byte_differences'] == 0 for c in cases)


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('build')
    p.add_argument('--output', required=True)
    args = p.parse_args()
    compare(args.build, args.output)
