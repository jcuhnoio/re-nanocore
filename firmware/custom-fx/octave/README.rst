Shared 2048/1024 NanoCore candidate
=================================

This is an optimized, buildable DSP core with an experimental NanoCore 1.12 adapter.
It preserves the Octave Studio Shared 2048/1024 algorithm and its four octave
voices, spectral swell, detune and dry paths. The accepted nested Octave Studio
checkout is unchanged. The first physical build boots and processes audio, but exceeds the real-time
budget. It is not ready for the public installer; see
``docs/octave-device-test.txt`` and ``evidence/octave-device-1.12.json``.

``shared_core.h`` is allocation-free C++14 with caller-owned state. The original
MIT reference and its Swell dependency are retained under ``reference/`` for
reproducible comparisons. Origin: Octave Studio commit
``69f703f19459f6928a60e071f95c117a921f11a1``;
original SharedSwellCore.h SHA256
``07d53e96fbf3bab3af32984370a699333eb97f6895bb1f788538cf57ff411325``.

Changes
-------

* Remove the unused global onset-envelope object and coefficient calculations;
  integrated spectral swell remains intact.
* Calculate FFT twiddles once per stage column instead of once per butterfly.
* Use a 1024-sample wet overlap buffer: synthesis only schedules that interval.
* Move the fixed synthesis window into shared read-only storage. This reduces
  per-instance state; it does not prove that the table consumes no device RAM.
* Use explicit square-root builtins and ``-fno-math-errno`` for hardware square
  root on RV32. No fast-math, approximate phase estimation, reduced peak budget,
  changed windows or reduced voices are used.

State falls from 61,728 to 53,444 bytes. The optimized core itself has no writable
globals. The standalone linked probe includes newlib math and brings 1,072 bytes
of initialized library data plus 4 bytes of BSS; firmware integration must account
for their initialization or use separately verified firmware math entry points.
The speed-focused optimized linked probe uses 25,060 bytes of text/constants.
It exceeds the 12,622-byte stock PITCH cluster and is NOT safe to paste there.

Validation and reproduction
---------------------------

From the parent repository root::

  c++ -std=c++14 -O2 -ffp-contract=off -fno-exceptions -fno-rtti -fno-math-errno tools/custom_fx/check_octave_host.cpp -o /tmp/check-octave
  /tmp/check-octave
  python3 tools/custom_fx/build_octave_probe.py --output analysis/NEW-OCTAVE-PROBE

The host comparison checks 1,048,576 samples bit-for-bit across four sample rates,
in-place and separate buffers, random block sizes, resets, and swell/control
transitions. The benchmark reports host time, not hardware timing.

The cross-build needs the retained vendor Xuantie toolchain under
``analysis/vendor-isa/toolchain`` and Docker. Its linker address is a review
address only. Neither the build tool nor these files access USB. See
``docs/octave-nanocore-feasibility.txt`` and ``evidence/octave-target-execution.json``
for the target instruction-emulation evidence and remaining integration work.

Device integration
------------------

``device.cpp`` adapts native FX2/PITCH initialization, reset and processing.
``device_ui.S`` supplies three controls without changing shared delay paths.
``telemetry.cpp`` exposes a bounded read-only diagnostic. The device build tool
uses actual placement at 0x400a4540; the package tool reserves appended code/data
before heap initialization instead of overwriting the smaller PITCH cluster.

Build the retained original host reference for the integration comparison::

  clang++ -std=c++14 -O2 -ffp-contract=off -fno-exceptions -fno-rtti -DNC_OCTAVE_BASELINE -dynamiclib tools/custom_fx/octave_probe.cpp -o analysis/octave-reference.dylib
  python3 tools/custom_fx/check_octave_device.py DEVICE.elf analysis/octave-reference.dylib DECODED-1.12.bin analysis/device-check.json

The native wrapper test covers 4,096 samples, initialization/reset, canaries,
register preservation, bypass and the non-PITCH trampoline. Its timer is stubbed;
only the separately retained physical telemetry measures real processing time.

Offline scheduling pass after the failed audition
------------------------------------------------

The core now uses shared full-wave cosine and bit-reversal tables, specialized
FFT stages and explicitly expanded two-bin accumulation. Floating arithmetic
order is retained. ``Core<2048,1024>`` is the direct version;
``Core<2048,1024,false,true>`` enables scheduling. Four jobs run at offsets
0/32/64/96 of each 128-sample hop: analysis, dry inverse, voice mapping, wet
inverse. One additional hop of output buffering prevents consuming unfinished
frames. This is cooperative work inside the existing process call, not a thread
or preemptible callback.

All four octave levels remain independent in Parameters. Attack, dry processing,
cutoff, resonance, detune and output gain remain implemented. Per the user's
choice, attack smooths the dry signal regardless of Dry FX mode, matching the
prototype. Modes 0/1 retain the prototype's behavior; mode 2 also filters dry,
and mode 3 adds its detune/chorus path. No voice count, peak limit or transform
size was reduced. The old device.cpp/UI adapter is the failed three-control
experiment; it still needs replacement with a validated full control interface.

Direct state is now 53,568 bytes; scheduled state is 61,760 bytes. Shared linked
scheduled text/constants total 33,336 bytes, plus 1,072 bytes initialized data
and 4 bytes BSS for the offline probe. The scheduled core does NOT fit the old
57,344-byte device ring allocations and must not be wired into that image as-is.

Host verification covers 1,048,576 samples bit-for-bit against the original,
including live voice-level/dry-mode transitions. Another 96 scheduled cases
compare 1,572,864 delayed samples bit-for-bit across isolated voices, combined
voices, dry modes, attack on/off and 44.1/48 kHz. Reset during each pending job
and 128 parameter events across different call sizes also pass, including
AddressSanitizer/UndefinedBehaviorSanitizer. Constant-parameter delayed parity
does not claim identical timing of live parameter changes: spectral controls
are captured at each frame boundary; output filters remain audio-rate.

Reproduce scheduling tests and target probes from the repository root::

  c++ -std=c++14 -O2 -ffp-contract=off -fno-exceptions -fno-rtti -fno-math-errno -fsanitize=address,undefined tools/custom_fx/check_octave_scheduled.cpp -o /tmp/check-octave-scheduled
  /tmp/check-octave-scheduled
  python3 tools/custom_fx/build_octave_probe.py --output analysis/NEW-SCHEDULED-PROBE
  python3 tools/custom_fx/check_octave_target.py analysis/NEW-SCHEDULED-PROBE/scheduled.elf analysis/NEW-SCHEDULED-TONE.json 64
  python3 tools/custom_fx/check_octave_target.py analysis/NEW-SCHEDULED-PROBE/scheduled.elf analysis/NEW-SCHEDULED-NOISE.json 64 noise

Compared with the previous optimized core, steady instruction workload falls
16.1% on the tone fixture and 14.5% on noise; measured maximum 64-frame workload
falls 57.3%/56.5%. Both RV32 fixtures retain 3,968 bit-identical delayed output
samples. Counts include real linked math routines but are not CPU cycles. See
``evidence/octave-scheduled-optimization.json`` for hashes, sizes and limits.
No firmware was flashed during this pass. More average-cost reduction, full
control integration, larger state reservations and controlled physical timing
are required before another audition. The public installer is unchanged.
