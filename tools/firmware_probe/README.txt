Historical bounded SPL-reader diagnostic (NanoCore1.10)
======================================================
These are the actual assembly/link/emulation sources retained from the device
experiment that exposed the updater and made offline LUM0 decoding possible.
They are reference artifacts, not a general reader for arbitrary firmware.
No script here accesses a USB device or installs firmware.

spl_reader.S: temporary252byte replacement at0x4008a640, normal protocol opcode
0x39. Request isLE32 SPL offset + U8 length; length1..200 and end<=0x26000.
It calls nativeFAL functions at0x40006efa and0x40006f5e, using existing scratch
RAM0x3008a56c. Those addresses are specific to the inspected1.10 binary.
The original AMP-read operation is unavailable while that diagnostic is installed.

link_reader.py: links local RV32 branch/JAL relocations from spl_reader.o into
spl_reader.bin. It does not load or execute firmware. check_reader.py executes
the linked bytes in Unicorn and stubs the two FAL calls; checks seven request
boundaries plus basic stack/register preservation. These are historical tests,
not exhaustive validation of every failure path.

To reproduce without writing into the source directory, copy the three files
into a NEW scratch directory. Assemble spl_reader.S with a RISC-V ELF assembler
or compiler supporting RV32IM/ilp32; compressed instructions are disabled in the
source. Example, with the retained Xuantie compiler available in your Linux
container:

  riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -c spl_reader.S -o spl_reader.o
  python3 link_reader.py
  python3 check_reader.py

The last command requires Unicorn2.1.4. The resulting code should be252bytes.
Compare its identity against evidence/firmware-decoding.json and the historical
receipt in docs/firmware-decoding.txt before considering any integration.

Do not replay the old one-off flash script from exploratory logs: it had hardcoded
sector/length assumptions. Current rawOS patching/upload logic is under
../custom_fx, with exact-base validation, full backup, tail preservation and
full partition readback. The deployed diagnostic was later restored; it is NOT
part of the current UniVibe firmware.
