NanoCore 1.12 effect implementations in C
========================================

This directory contains the recovered C-like implementations for all effect
families exposed by the reviewed 1.12 selectors, plus their helper-function
closure. Start with `the effect index <INDEX.rst>`_. It links every selector
entry to a native callback and lists every function with its firmware address.

There are 343 C function files, including 150 reviewed/named routines, across
52 selector entries. These are not 52 independent algorithms: the entries
include drive-model slots, repeated gate placements and one Hall alias.
The MOD picker exposes nine variants; other labels/code are retained as dormant
findings in manifest.json. Synth metadata has a selector count of zero and is
not represented as a working synth implementation.

Code status
-----------

The processor files are annotated REA/Ghidra decompilation, NOT original vendor
source or a standalone buildable C library. They preserve full function bodies,
control flow, warnings, native addresses and evidence IDs. No placeholder DSP,
textbook substitute effect, fabricated missing branch or dummy implementation
has been inserted to make the package look complete.

There are 95 functions with decompiler warnings and no bad-instruction
truncations reported in this set. Known floating-register artifacts sometimes
make four-byte sample accesses look like undefined8/ulonglong. Some prototypes
omit arguments retained in registers. These must be corrected against native
instructions before compiling a faithful port. Fixed-address globals, target
intrinsics, memory management and indirect calls also require target bindings.

The two files catalog.c/catalog.h ARE compilable C, but contain recovered
selector metadata only. Compiling them does not validate the DSP code.

Families
--------

* Dynamics: Gate, Auto Gate, NG+Compressor, Compressor, and the post-chain gates.
* FX2: eight stored drive-model slots, Pitch, Envelope Wah, Auto Wah and Motion Wah.
* AMP: shared model engine, recurrent/nonlinear stages and tone/EQ processing.
* CAB: direct/partitioned IR convolution, cuts and output level.
* Delay: BBD, Digital, Duck, Ice, Reverse, Lofi, Smear and Mod.
* MOD: Chorus, Chorus II, Phaser, Phaser II, Flanger, Jet Flanger, Vibrato,
  Velvet Vibrato and Tremolo. Nonselectable processor branches remain in code.
* Reverb: Room, Plate, Hall, Concert, Shimmer, Cloud and Spring.
* EQ: three-, six- and eight-band processing.
* EXP: Volume, Pan, Width and Wah.

Each implementation can be shared by several selectors. The index links the
callback; manifest.json additionally records branch-specific processors,
parameters, native subtypes and family evidence. Generic support routines retain
address names until their role is established.

Spring is significant: the firmware copies a kernel from flash into RAM, then
calls it indirectly. Its recovered source begins at original image address
400a29c8 and includes its discovered helper closure. This package contains that
kernel rather than leaving Spring as only an indirect function pointer.

AMP, drive and CAB sounds also depend on model/IR assets. The firmware contains
loaders and processors; it does not contain every user's stored model or IR.
Reconstructing those sounds requires the corresponding coefficient payloads.
No audio-equivalence or timing test against the pedal has been performed.

Detailed dissections
--------------------

* `DSP chain and provisional ABI <../../../../docs/dsp-architecture.txt>`_
* `Classic Chorus equations and state <../../../../docs/dsp-chorus.txt>`_
* `Drive/model engine <../../../../docs/dsp-drive.txt>`_
* `All delay and reverb branches <../../../../docs/dsp-delay-reverb.txt>`_
* `MOD, Pitch and Wah variants <../../../../docs/dsp-mod-pitch-wah.txt>`_
* `Dynamics, CAB, EQ and expression processing <../../../../docs/dsp-dynamics-cab-eq.txt>`_

Verification and provenance
---------------------------

manifest.json records each function's retained REA evidence ID, analysis target,
source-export path, original pseudocode hash and emitted-file hash. Closure is
based on unambiguous textual function references, with explicitly reviewed
indirect roots. Zero missing direct references is not proof that every computed
or data-driven target in the firmware has been recovered.

Different seeded analyses can alter overlapping function boundaries. This
package chooses one evidenced body for each address. Its function count must
not be added to the parent firmware tree's count as though these were disjoint.
The parent baseline remains available for cross-checking.

From the repository root::

    python3 tools/firmware_source/build_effects.py --output firmware/versions/1.12/effects --verify
    clang -std=c11 -Wall -Wextra -Werror -fsyntax-only firmware/versions/1.12/effects/catalog.c

Rebuild from retained local exports into a fresh directory::

    python3 tools/firmware_source/effect_catalog.py --output evidence/effect-catalog-1.12.json
    python3 tools/firmware_source/build_effects.py --output /path/to/new-effects-tree

The reconstruction still needs floating-point ABI/type repair, data/state
bindings, model/IR payloads where applicable, and numerical comparison before
it can become a replacement firmware or a portable audio library.
