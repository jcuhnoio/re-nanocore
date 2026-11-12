NanoCore 1.10 source reconstruction tools

The output is annotated C-like decompilation, not original vendor source or a
rebuildable firmware project. Unknown functions retain address-based names.
Full local output: analysis/source-firmware-1.10-legacy-p/firmware.c and functions/.
Index: analysis/source-firmware-1.10-legacy-p/index.json.
Naming ledger: evidence/firmware-source-names.json.

Requirements used in this investigation
- REA 6.7.0 (public rea --mcp launcher; no client registration required).
- Ghidra 12.1.4 and a native mac_arm_64 decompiler built from its shipped source.
- Temurin JDK 21.0.13+9. Toolchain lives under analysis/rea-1.10/toolchain.
- Python 3.10+ standard library for orchestration/export.

Ghidra's unmodified generic RISC-V language loses the semantics of many T-Head
operations. install_thead.py adds 45 RV32 instruction constructors to the local
language and preserves its original .slaspec and register-token specification. These cover indexed/update memory
operations, extraction, conditional moves, add-shift and multiply-accumulate.
The custom language is NOT stock Ghidra. REA's profile digest does not capture
this local SLEIGH change: retain the explicit language hashes in our evidence.
Unsupported operations remain warnings/opaque intrinsics, not silently modeled.
The observed legacy P arithmetic/data operations are now modeled; hardware
operations remain partially opaque. This is not a complete ISA implementation.

Preparation (substitute absolute local paths)
  python3 tools/firmware_source/install_thead.py /path/to/ghidra
  JAVA_HOME=/path/to/jdk/Contents/Home /path/to/ghidra/support/sleigh /path/to/ghidra/Ghidra/Processors/RISCV/data/languages/riscv.ilp32d.slaspec
  python3 tools/firmware_source/seed_elf.py analysis/decoded-firmware-1.10/firmware.elf evidence/firmware-source-names.json /path/to/new-named.elf --ilp32d

--ilp32d declares RVC + double-float ABI in the synthetic analysis ELF. This is
an inference supported by double arguments in fa0, fsd/fld callee preservation,
and the SDK's e907fdp configuration; it is not recovered original ELF metadata.
Load segment bytes are preserved exactly. Function symbols seed indirect
handlers missed by default auto-analysis. Original input files stay unchanged.

Export through REA
  python3 tools/firmware_source/rea_export.py --rea /path/to/rea --ghidra /path/to/ghidra --java-home /path/to/jdk/Contents/Home --elf /path/to/new-named.elf --output /path/to/new-rea-results
  python3 tools/firmware_source/export_source.py /path/to/new-rea-results/results /path/to/new-rea-results/results/00002-list.json evidence/firmware-source-names.json /path/to/new-source

The exporter retains complete per-function Evidence, exports the session bundle,
and closes the ephemeral REA/Ghidra session. It writes no device data and does
not install or modify Codex configuration. Names persist in the ledger and the
seeded ELF; source exports can be regenerated. Future naming edits should cite
addresses, evidence IDs or exact registration/call sites and distinguish guesses.
Local-variable replacements in export_source.py are reviewed for this exact
1.10 export; re-review them before applying to another binary or engine version.

Validation
  python3 -m unittest discover -s tools/firmware_source -p test_source.py -v
  python3 tools/firmware_source/make_thead_cases.py /path/to/cases.json
  JAVA_HOME=/path/to/jdk/Contents/Home /path/to/ghidra/support/analyzeHeadless /path/to/project-dir test -import /path/to/new-named.elf -processor RISCV:LE:32:default -cspec gcc -noanalysis -scriptPath tools/firmware_source -postScript ValidateThead.java /path/to/cases.json /path/to/test-result.json -deleteProject

3,780 deterministic emulation cases passed: register results, memory writes,
negative/positive updates, extraction boundaries and conditional-move cases.
This checks the implemented subset; it does not validate every instruction or
establish complete firmware behavior. Semantic sources:
https://github.com/llvm/llvm-project/blob/llvmorg-19.1.7/llvm/lib/Target/RISCV/RISCVInstrInfoXTHead.td
https://github.com/T-head-Semi/thead-extension-spec/blob/master/xtheadmemidx/lwia.adoc

Legacy P identification and improved export
See ../../docs/vendor-instruction-set.txt and ../../evidence/vendor-isa.json.
The SDK Xuantie 2.6.1 assembler independently reproduced all 245 previously
unknown instruction words. The regenerated export has zero bad-instruction
truncations; other warnings and opaque hardware operations remain.

  python3 tools/firmware_source/identify_instructions.py llvm.txt vendor-objdump-D.txt identification.json --start 0x40000000 --end 0x40091980

Legacy P semantics (use this version, not today's incompatible P draft):
https://github.com/riscv/riscv-p-spec/blob/c3409c8edb7df262cb3db0ff323077120e5f7f04/P-ext-proposal.adoc

Organized research repository
The tracked firmware/ directory decomposes the latest export into named modules
and address-grouped unresolved files. Start at firmware/README.rst. This includes
firmware-derived C-like output at the user's request; binary packages and large
analysis-engine artifacts remain ignored.

  python3 tools/firmware_source/browse_source.py nc_dispatch_request --calls
  python3 tools/firmware_source/organize_source.py --output firmware --verify
  python3 tools/firmware_source/organize_source.py --source analysis/source-firmware-1.10-legacy-p --output /path/to/new-organized-tree
  python3 -m unittest discover -s tools/firmware_source -p 'test_*.py' -v

modules.json is the reviewed placement map. The organizer preserves function
text exactly and writes source modules, per-directory file lists, INDEX.rst,
REVIEW.rst, symbols.tsv, manifest.json and callgraph.json. It never invents
semantic placements for unlisted functions. Their 4 KiB entry-address windows
are browsing groups only. The call graph is explicitly pseudocode-derived,
with duplicate-name ambiguity retained and no indirect-call recovery claimed.

firmware/README.rst and ARCHITECTURE.rst are maintained research documentation,
not generated outputs. Keep naming and placement changes in their ledgers,
regenerate into a fresh directory and review changes before replacing the tree.
CI verifies all 2,645 function ranges against their source hashes.


Version comparisons (1.11 and 1.12)
----------------------------------
Use rea_export.py --function-info to preserve native function ranges as well as
pseudocode. Existing toolchain paths, for example:

  python3 tools/firmware_source/rea_export.py --rea /Users/juno/.npm/_npx/a1722018f28f9df2/node_modules/.bin/rea --ghidra analysis/rea-1.10/toolchain/ghidra_12.1.4_PUBLIC --java-home analysis/rea-1.10/toolchain/jdk-21.0.13+9/Contents/Home --elf analysis/version-comparison/1.11.elf --output /path/to/fresh-rea-export --function-info
  python3 tools/firmware_source/export_source.py analysis/rea-1.11/results analysis/rea-1.11/results/00002-list.json evidence/firmware-source-names-1.11.json /path/to/fresh-source-export --version 1.11
  python3 tools/firmware_source/organize_source.py --source /path/to/fresh-source-export --layout tools/firmware_source/modules-1.11.json --output /path/to/fresh-organized-tree

Substitute 1.12 for that release. The initial ABI-adjusted ELFs were made with
seed_elf.py --ilp32d and an empty symbols list; loaded bytes are preserved.
Version-specific names are subsequently applied to source exports, not silently
copied into the new image at 1.10 addresses. The organizer checks layout version.

compare_versions.py reads the three local REA exports and verified decoded
segments. It compares observed native bodies/range shapes and separately emits
pseudocode candidates; neither is a claim of equivalent runtime behavior.
release_data.py extracts the reviewed parameter tables and float constants.
See docs/firmware-version-comparison.rst for findings and outstanding checks.


Focused DSP recovery
--------------------
rea_export.py --procedures ADDRESS... exports only selected entries (with
--function-info for body ranges), while retaining the full discovery inventory.
seed_elf.py accepts an explicit symbol kind="function" to seed RAM callbacks;
address range alone must not classify all RAM symbols as data.

The DSP table is recovered by dsp_dispatch.py. Focused seeded sessions may
change overlapping function boundaries; export_supplement.py keeps those bodies
and their target/evidence records separate from the baseline inventory.
The organizer's verifier also checks supplemental-*/index.json body hashes.

The 1.12 names and layouts now include DSP chain, chorus, FX2/model processing
and model-switch routines. Reproduction of supplemental source:

  python3 tools/firmware_source/export_supplement.py --results analysis/rea-1.12-dsp/results analysis/rea-1.12-dsp-table/results --names evidence/firmware-source-names-1.12.json --procedures 0x40071cfe 0x4006dc08 0x40066cee 0x40068d96 --version 1.12 --output /path/to/new-supplemental-dsp

See docs/dsp-architecture.txt, dsp-chorus.txt and dsp-drive.txt for the observed
algorithm details and limitations. The layout header is an analyst annotation,
not an installable plugin interface or a recovered vendor SDK.
