NanoCore offline firmware decoder

Python 3.10+ and cryptography are required:
  python3 -m venv .venv
  .venv/bin/pip install -r tools/firmware_decode/requirements.txt
  .venv/bin/python tools/firmware_decode/decode.py nanocore-1.10.fmu --output decoded-1.10
  .venv/bin/python -m unittest discover -s tools/firmware_decode -p test_decode.py -v

The output directory must not exist. Nothing accesses USB or writes firmware.
The tool verifies the publisher Ed25519 signature, optional FMUC contract and
its signature, plaintext CRC32, FIT bounds, and each selected segment's hashes.
It writes firmware.bin (entire decoded payload), header.dtb, seg0.bin, seg1.bin,
firmware.elf and manifest.json. --compare-readback PATH compares a physical FIT
image including segment bytes and reports differing payload byte offsets.

firmware.elf is a synthetic ELF32 RISC-V analysis container with the real FIT
load addresses and entry point. Its RWX permissions are analysis conveniences,
not recovered MPU permissions. It does not supply source, symbols, original
section boundaries or a ready-to-flash ELF. Use RISC-V compressed and T-Head
instruction support when disassembling the code.

Validated locally against all seven archived releases: 1.04, 1.05, 1.06, 1.07,
1.10, 1.11 and 1.12. The 1.11 package's internal FIT version is 1.11b; this
metadata discrepancy is reported, not treated as cryptographic failure.
1.04 lacks the newer FMUC footer and has legacy product ID zero.

See ../../docs/firmware-decoding.txt for derivation and physical verification.
