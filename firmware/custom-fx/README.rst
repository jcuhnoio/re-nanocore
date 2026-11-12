Buildable custom effects
========================

This is the executable C layer, separate from the preserved decompiler exports
in ../versions/1.12/effects. It currently contains a reconstructed classic Chorus
a new attenuation effect used to validate replacement integration, and a custom
UniVibe with four on-device controls. The other
exported DSP routines have NOT all been converted into compilable, verified C.
The patched application retains their original machine code.

Host build and numerical tests::

    make -C firmware/custom-fx test

This produces analysis/custom-fx/host/libnanocore_fx.a. The Chorus test checks an
independent fixed-delay impulse oracle, block partitioning, in-place buffers,
stereo/mono behavior, state layout, and supported sample rates.

Target build, from repository root::

    python3 tools/custom_fx/build.py --version 1.12 --output analysis/custom-fx/my-build
    python3 tools/custom_fx/package.py \
        --input analysis/decoder-capture/validated-releases/nanocore-1.12/firmware.bin \
        --build analysis/custom-fx/my-build --output analysis/custom-fx/my-image

Requires the retained Xuantie GCC toolchain under analysis/vendor-isa/toolchain,
Docker, and the existing debian:bookworm-slim image. The build uses no network.
Use version 1.10 and its corresponding input to build for 1.10. Output directories
must be new. Target flags match the recovered SDK RV32 ilp32d configuration.

The gain binary replaces only the dedicated Velvet Vibrato processor; selecting
Velvet makes its RATE control act as gain 0..1. This sacrifices that effect slot,
not an extensible plugin mechanism or a new UI effect registration. Its ABI has
nine arguments; the top-level Chorus callback has ten. Do not interchange them.

The target linker enforces the native 1392-byte replacement capacity, entry
address, and absence of persistent globals. No small-data/gp dependency, unresolved
symbols, or runtime relocations are permitted. Files include ELF, binary,
disassembly, linker map, compiler flags and hash receipts. FIT patching validates
original bytes and the exact release hash, updates MD5/CRC, and preserves length,
other segments, padding, and partition tail. These are raw FIT images, not signed
FMU updates for ToneCommand.

Chorus is linked at a review-only address and is NOT included in the patch.
Its 1.12 prefix layout and steady-state loop have evidence of equivalence; its
polynomial trigonometry, initialization and control changes are not yet proven
identical. Its extra instructions also need hardware timing assessment. The
same reconstructed source is built in the 1.10 build directory for inspection;
this does not establish compatibility with the different 1.10 MOD layout.

Optional target execution checks (requires Unicorn 2.1.4)::

    python3 tools/custom_fx/test_target.py analysis/custom-fx/my-build
    python3 tools/custom_fx/compare_chorus.py analysis/custom-fx/my-build \
        --output analysis/custom-fx/my-build/chorus-comparison.json

The comparison requires retained original 1.12 bytes. It executes both machine
code implementations and emulates the unsupported Xuantie addsl instruction with
its integer semantics. It establishes neither CPU timing nor physical audio.

See ../../docs/custom-fx-pipeline.txt for results and the deployment boundary.

UNIVIBE implementation
----------------------

``src/univibe.c`` adds an original four-stage Uni-Vibe-inspired effect. Build it
with the same target command, then package with ``--effect univibe --label UNIVIBE``.
The current four controls are SPEED/DEPTH/LEVEL/MODE; MODE is CHORUS/VIBRATO.
Four-control UI patching currently supports firmware1.10 only. See
`design and tests <../../docs/custom-fx-univibe-controls.txt>`_ for mappings and limitations.
``make test`` now also runs its host tests. Optional machine-code comparison::

    cc -shared -O2 -ffp-contract=off firmware/custom-fx/src/univibe.c -o /tmp/univibe.so
    python3 tools/custom_fx/test_univibe_target.py BUILD_DIRECTORY /tmp/univibe.so
