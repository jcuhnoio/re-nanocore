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
size was reduced. At this offline checkpoint, device.cpp/UI still used the failed three-control
experiment. The following integration pass replaces that interface.

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

Full control integration and guarded hardware probe
--------------------------------------------------

``controls.h`` defines eleven normalized parameters; ``metadata.cpp`` supplies
bounded names/value formatting. ``device.cpp`` now uses the scheduled core.
Controls, in order: DRY, -2 OCT, -1 OCT, +1 OCT, +2 OCT, ATTACK, LOWPASS, DETUNE,
DRY FX, RESON, LEVEL. Attack spans 0–2000 ms, low-pass 150–18000 Hz, detune
0–30 cents; level 50% is unity after the prototype's fixed -9 dB output gain.
The complete mapping/defaults are in ``evidence/octave-full-controls-integration.json``.

The native parameter banks and UI paths allow twelve values, but the FX2
writer at 0x4000bea8 separately rejected indices above four. The first guarded
image revealed this when attack readback stayed zero. A gate at 0x4000bee6
allows indices 0–10 only for subtype8, retaining locking, bank copy, defaults,
publication and the original limits for every other subtype. Native-machine
emulation executes 156 setter cases, including rejection and bank-swap checks.
The label/format entry trampolines leave non-target paths intact; the internal
enum hook preserves UniVibe's separate entry hook. All 11 values read back from
the device; MIDI CC73 now updates ATTACK (tested value .323 = 646 ms).

Each adapter instance is 61,824 bytes within a 65,536-byte ring allocation.
The linked payload reserves 35,968 bytes before heap initialization; about
1.38 MB of heap remained free in the hardware probe. Core processing allocates
no memory. The old smaller ring allocation must never be used with this core.

The experimental guard reserves 40% of the callback's nominal time for octave
work and checks elapsed time after each 32 samples. It also watches the native
full-chain overrun counter. A violation latches bypass globally until reboot;
reset/preset changes do not rearm it. LEVEL's formatter shows CPU LIMIT when
latched. Telemetry schema2 returns 144 bytes, including fault, budget and control
count. It remains an exact-magic bounded read, preserving normal AMP reads.
A single scheduled job cannot be interrupted; this limits repeated starvation,
not the first late callback. The guard's reservation is stricter than the whole
chain deadline and must not be confused with a hardware worst-case proof.

The physical probe tripped fault1 after two calls (128 attempted samples).
Maximum attempted octave time was 1048.75 us against a reserved 580.25 us.
Native chain maximum was 1811.25 us against 1451 us, with one overrun. Subsequent
snapshots showed audio callbacks continuing, no further overruns, no additional
octave calls, and successful runtime/preset responses. USB DFU entry worked
without a power cycle. The exact prior UniVibe OS was restored with complete
readback and a successful ready/preset check. No listening claim is made.

``evidence/octave-guarded-device-1.12.json`` records the probe and recovery.
The overload latch works in this test, but real-time performance still fails.
No public installer change was made. More average-cost reduction and finer
spectral job scheduling are required. Physical page navigation and preset
save/recall remain unverified; the test did not save a modified preset.

Paired FFT stages after the guarded timing failure
-------------------------------------------------

Adjacent radix-2 stages now keep intermediate results in registers, retaining
floating-point operation order. The four-job schedule and 61,760-byte core are
unchanged. Against the previous scheduled build, mean executed instructions fall
14.6% for two-tone and 13.3% for noise; maximum 64-frame instructions fall 11.4%
and 10.1%. All 4,096 RV32 output samples per fixture match the previous build
bit-for-bit. These instruction counts are not hardware timing measurements.

The host reference comparison retains 1,048,576 bitwise samples, and the
sanitized scheduling test retains 1,572,864 delayed bitwise samples. Reset tests
now cover every sample offset in a complete hop (128 cases), alongside the 128
control-transition events. All four voices and always-smoothed dry attack remain.

Two experimental 30-job schedules were tested and rejected: despite matching
audio, they raised maximum callback instruction counts. The retained candidate
uses the simpler four-job schedule. See
``evidence/octave-paired-fft-optimization.json`` for accepted and rejected results.
No firmware was flashed in this pass. The previous hardware failure is still
unresolved; the pedal remains on the restored working UniVibe 1.12 image.

Guarded physical test of paired FFT
----------------------------------

The paired build was subsequently flashed with exact full-partition readback.
All eleven controls were returned, with attack set to about 646 ms before enabling.
Two attempted callbacks produced a maximum of 851.25 us against the 580.25 us
reserved octave budget. The complete chain reached 1496.25 us against 1451 us;
one missed deadline occurred. The latch then bypassed the core, and 1,390 more
audio callbacks between telemetry snapshots produced no additional misses.
Runtime ready/preset requests and USB updater entry remained responsive.

This is still a failed timing test. The earlier maximum was 1048.75 us, but these
short, uncontrolled-input probes cannot establish a sustained or worst-case
speedup. Further work should reduce or split the first analysis job without
removing voices or the user's requested attack/dry processing. See
``evidence/octave-paired-device-1.12.json`` for telemetry and restoration evidence.

The exact working UniVibe 1.12 OS was restored with full readback verification.
Normal runtime ready/preset reads passed, and the active preset matched the
pre-test snapshot. No manual power cycle was required.

Selective RISC-V fused FFT experiment
------------------------------------

Both build tools accept ``--fft-experiment exact|fma|specialized|combined``.
The default remains ``exact``. ``combined`` uses explicit ``fmadd.s`` and
``fmsub.s`` in paired FFT complex products and a dedicated first-stage pair for
unity/quarter-turn rotations. Global fast-math remains disabled. The four-job
schedule, all controls, state size and overload guard are unchanged.

Compared with the previous paired FFT, the combined experiment reduces mean
executed instructions 4.59% on two-tone and 4.10% on noise; maximum 64-frame work
falls 2.88% and 2.55%. These are emulator instruction counts, not hardware timing.
The million-sample host corpus gives maximum absolute error 3.09e-5 and RMS
error about 98 dB below the reference signal. The short target fixtures give
relative errors about -122/-111 dB. These are numerical measurements, not an
inaudibility claim or universal error bound. The specialized-only host corpus
remains bit-identical; FMA changes intermediate rounding.

Reproduce the combined numerical comparison and target build::

  c++ -std=c++14 -O2 -ffp-contract=off -fno-math-errno -DNC_OCTAVE_FFT_FMA -DNC_OCTAVE_FFT_SPECIALIZED tools/custom_fx/measure_octave_fft_error.cpp -o /tmp/octave-fft-error
  /tmp/octave-fft-error
  python3 tools/custom_fx/build_octave_probe.py --output analysis/NEW-FUSED-PROBE --fft-experiment combined

The existing exact-reference adapter test rejects this candidate at its original
1e-6 tolerance (observed 2.43e-6). That assertion was not weakened. Numerical
comparison against the original is kept separate from adapter verification
against a host library compiled with the same experimental arithmetic. The
96-case scheduled test likewise compares direct and scheduled experimental
cores; its bitwise result does not mean agreement with the original arithmetic.

No firmware was flashed. This modest reduction does not establish that the
previous physical timing failure is solved. Evidence and build hashes are in
``evidence/octave-fused-fft-experiment.json``.

The DSP implementation is C++14 with C-compatible firmware entry points. Native
C-style firmware hooks and small assembly routines share the target ABI. The
core needs no exceptions, RTTI or audio-time allocation; rewriting its control
and scheduling code in C would not itself reduce the executed instruction cost.

1024/512 with an explicit 128-sample hop
---------------------------------------

``--fft-window 1024`` selects ``Core<1024,512,false,true,128>`` in the device
and scheduled probe. The default remains 2048/1024. Hop is now an explicit
optional template argument, with the previous Synthesis/8 default retained.
Window overlap normalization derives from that hop: the smaller candidate uses
four overlaps, not eight. The 128-sample scheduling delay is unchanged; nominal
dry delay becomes 640 samples (14.51 ms at 44.1 kHz), excluding hardware latency.

This experiment uses exact arithmetic, without the optional fused FFT changes.
All eleven controls, four voices and always-smoothed dry attack remain. Core
state is 37,184 bytes (37,248 with device metadata); the existing 65,536-byte ring
reservations remain in place. Changing the transform affects sound, especially
low notes/chords; numerical correctness is not an audition verdict.

The scheduled sanitizer suite passes 96 cases, 1,572,864 delayed bitwise samples,
128 reset offsets and 128 control transitions. An independent comparison to the
retained original algorithm, configured for 1024/512 and with only its hop
changed to 128, passes 1,048,576 samples bit-for-bit. Native adapter, UI and guard
checks pass. The default full-size host reference comparison still passes.
Mean and peak emulated instruction workloads are approximately halved relative
to the previous exact paired-FFT 2048/1024 build.

Reproduction::

  python3 tools/custom_fx/build_octave_probe.py --output analysis/NEW-SMALL-PROBE --fft-window 1024
  python3 tools/custom_fx/build_octave_device.py --output analysis/NEW-SMALL-DEVICE --fft-window 1024
  c++ -std=c++14 -O2 -ffp-contract=off -fno-math-errno -DNC_OCTAVE_SMALL_FFT -fsanitize=address,undefined tools/custom_fx/check_octave_scheduled.cpp -o /tmp/octave-small
  /tmp/octave-small

Physical testing still trips the unchanged octave budget: four calls/256 frames
were attempted before fault1 latched, with octave maximum 673 us versus 580.25 us
reserved. Native full-chain maximum was 1423.5 us against 1451 us, with zero
recorded overruns. These few calls are not a sustained timing pass. Runtime and
updater remained responsive. Work must be distributed more evenly before audition;
this experiment does not justify relaxing the guard. See
``evidence/octave-small-window-1.12.json`` for offline and physical evidence.

The exact known-working UniVibe 1.12 image was restored and verified over the
full OS partition. Normal runtime ready and preset reads passed after reboot;
no manual power cycle was needed.
