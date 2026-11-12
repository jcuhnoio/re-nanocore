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
