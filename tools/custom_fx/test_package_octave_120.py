"""Exact-image guards plus executable RV32 reset relocation regression tests."""
import copy
import hashlib
from pathlib import Path
import struct
import unittest
from package_octave import package, elf_payload
from package_octave_120 import CODE_BASE, STAGING_BASE, STUB_SIZE, relocation_stub, HEAP_ADDRESS
from patch_image import OS_SIZE, extract_fit
from test_package_octave import synthetic_elf

ROOT = Path(__file__).resolve().parents[2]
SOURCE = ROOT/'analysis/decoder-capture/validated-releases/nanocore-1.2/firmware.bin'

class Package120Tests(unittest.TestCase):
    def inputs(self):
        if not SOURCE.exists(): self.skipTest('Vendor image intentionally remains local')
        source = SOURCE.read_bytes()
        original = source + b'\xa5'*(OS_SIZE-len(source))
        elf = synthetic_elf(CODE_BASE, 128)
        offset = 0x17800 + 0x200
        hooks = {'schema_version':1, 'firmware_version':'1.2', 'elf_sha256':hashlib.sha256(elf).hexdigest(),
                 'patches':[{'offset':offset, 'expected_hex':original[offset:offset+4].hex(), 'replacement_hex':'13000000'}]}
        return original, elf, hooks

    def test_exact_identity_and_tail(self):
        original, elf, hooks = self.inputs()
        target, report = package(original, elf, hooks)
        self.assertEqual(len(target), OS_SIZE)
        self.assertEqual(report['firmware_version'], '1.2')
        self.assertEqual(extract_fit(target)['image_version'], '1.12')
        self.assertEqual(target[report['appended_file_range'][1]:], original[report['appended_file_range'][1]:])
        self.assertEqual(target[0xd0000:], original[0xd0000:])
        heap_offset = 0x17800+HEAP_ADDRESS-0x40000000
        self.assertEqual(struct.unpack_from('<I', target, heap_offset)[0], CODE_BASE+len(elf_payload(elf,CODE_BASE)[0]))
        for field, value in [('firmware_version','1.12'), ('elf_sha256','0'*64)]:
            bad = copy.deepcopy(hooks); bad[field] = value
            with self.assertRaises(ValueError): package(original,elf,bad)
        wrong = synthetic_elf(CODE_BASE+4)
        bad = copy.deepcopy(hooks); bad['elf_sha256'] = hashlib.sha256(wrong).hexdigest()
        with self.assertRaises(ValueError): package(original,wrong,bad)
        bad = copy.deepcopy(hooks); bad['patches'][0]['offset'] = 0xd0000
        with self.assertRaises(ValueError): package(original,elf,bad)
        bad = bytearray(original); bad[1000] ^= 1
        with self.assertRaises(ValueError): package(bytes(bad),elf,hooks)
        with self.assertRaises(ValueError): relocation_stub(0x30000)

    def test_actual_boot_jump_relocates_and_preserves_entry_registers(self):
        try:
            from unicorn import Uc, UC_ARCH_RISCV, UC_MODE_RISCV32
            from unicorn import riscv_const as r
        except ImportError:
            self.skipTest('Unicorn unavailable')
        original, elf, hooks = self.inputs()
        target, report = package(original,elf,hooks)
        payload = elf_payload(elf,CODE_BASE)[0]
        emu = Uc(UC_ARCH_RISCV,UC_MODE_RISCV32)
        emu.mem_map(0x40000000,0x400000)
        emu.mem_map(0x30040000,0x100000)
        for s in extract_fit(target)['segments']:
            emu.mem_write(s['load_address'],s['data'])
        # Includes args, saved regs, stack and return address. Shim uses only t0-t3.
        preserved = [1,2,3,4,8,9,*range(10,28),29,30,31]
        expected = {i:0x11000000+i*0x100 for i in preserved}
        expected[11] = 0  # native entry's optional argument pointer is null
        for i,v in expected.items(): emu.reg_write(getattr(r,'UC_RISCV_REG_X'+str(i)),v)
        emu.emu_start(0x40000000,0x40006428,count=10000)
        self.assertEqual(emu.reg_read(r.UC_RISCV_REG_PC),0x40006428)
        self.assertEqual(bytes(emu.mem_read(CODE_BASE,len(payload))),payload)
        for i,v in expected.items(): self.assertEqual(emu.reg_read(getattr(r,'UC_RISCV_REG_X'+str(i))),v)
        # Execute original entry register save (through jump back to40000004).
        emu.emu_start(0x40006428,0x40000004,count=100)
        self.assertEqual(emu.reg_read(r.UC_RISCV_REG_PC),0x40000004)
        self.assertEqual(struct.unpack('<8I',emu.mem_read(0x3008a1d0,32)),tuple(expected[i] for i in range(10,18)))
        # Native BSS clear range cannot overwrite destination; staging is disposable.
        emu.mem_write(0x400a1f80,bytes(0x400cb868-0x400a1f80))
        self.assertEqual(bytes(emu.mem_read(CODE_BASE,len(payload))),payload)

if __name__ == '__main__': unittest.main()
