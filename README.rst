NanoCore firmware decoding and custom effects
=============================================

Reverse-engineering the Livtra NanoCore: decoding firmware packages, tracing
native DSP, reconstructing effects and running custom code on the pedal.
The versioned C-like exports are research reconstructions, **not the original
source or a complete rebuildable firmware**.

Install custom effects
----------------------

`Open the GitHub Pages installer <https://jcuhnoio.github.io/re-nanocore/>`_
in desktop Chrome or Edge. Choose:

* **UniVibe** — replaces Velvet Vibrato (MOD 10) with level, speed, depth and
  a chorus/vibrato switch.
* **UniVibe + experimental Octaver (1.12 only)** — also replaces the stock Octaver/PITCH
  slot with OCTAVE: dry, −2/−1/+1/+2 voices, attack and dry processing,
  lowpass, detune, resonance and level.

The installer detects exact supported **1.10, 1.11 and 1.12** builds and patches
that version. UniVibe supports all three; **Octaver requires 1.12**. It does
**not upgrade or downgrade** firmware. Unknown builds
are rejected. Existing presets using a replaced slot use the new effect.

**Work in progress.** These effects are not calibrated hardware clones.
Keep **ToneCommand closed** when using OCTAVE: app-open timing spikes remain
unresolved. Begin with OCTAVE, amp and cab only. Its half-rate upper/dry path
reduces bandwidth; cutoff requests above about 9.9 kHz are capped at 44.1 kHz.

1. Physically **unplug headphones and audio output cables**, close ToneCommand
   and connect USB. Update-mode transitions have produced a loud transient.
2. Choose effects, confirm audio is disconnected and allow MIDI SysEx/USB
   access. Select Livtra Lupgrader when prompted. Keep power and USB connected.
3. Download the original backup. Wait for verified upload and normal startup
   before reconnecting audio at low volume.

Firmware is read and patched locally in your browser. Pages hosts patch deltas,
not full vendor images; firmware and backups are not uploaded to a server.
Switching effects or restoring stock requires the matching original OS backup.
If interrupted, keep the pedal in Lupgrader mode and use **Recover interrupted
upload** in the same browser. Clearing browser data removes saved backups.

Validation
----------

.. list-table::
   :header-rows: 1
   :widths: 15 40 45

   * - Firmware
     - UniVibe
     - Octaver bundle
   * - 1.10
     - Physical flash/readback
     - Not supported
   * - 1.11
     - Offline native-code and patch checks
     - Not supported
   * - 1.12
     - Browser upload, verification and audition
     - Physical flash/readback and audition

Older Octaver ports were withdrawn after screen corruption during the 1.11
hardware test. Restoring 1.12 returned the screen to normal.
`Failure and recovery evidence <evidence/octave-pages-1.11-failure.json>`_.

The latest 1.12 app-closed OCTAVE/amp/cab test ran three minutes plus control
sweeps with zero deadline misses or guard faults and **16.6% measured timing
margin**. This is one tested configuration, not a worst-case guarantee.
The user reported that it sounds “pretty good.”
`Timing and listening evidence <evidence/octave-half-rate-headroom-1.12.json>`_ ·
`Installer release checks <evidence/octave-pages-release.json>`_.

Explore and build
-----------------

* `Decoding tools and usage <tools/firmware_decode/README.txt>`_ ·
  `decoder derivation <docs/firmware-decoding.txt>`_
* Firmware research trees: `1.10 <firmware/README.rst>`_,
  `1.11 <firmware/versions/1.11/README.rst>`_,
  `1.12 <firmware/versions/1.12/README.rst>`_
* `Buildable custom effects <firmware/custom-fx/README.rst>`_ ·
  `octaver build/test notes <docs/octave-multirate-bass.txt>`_
* `Firmware comparison and patch notes <docs/firmware-version-comparison.rst>`_ ·
  `DSP architecture <docs/dsp-architecture.txt>`_
* `Complete investigation history and reproduction steps <docs/investigation-history.rst>`_ ·
  `evidence <evidence/>`_ · `research status <docs/research-status.txt>`_

Browser checks: ``node --test web/tests/*.test.js``. Local preview:
``python3 -m http.server 8765 --directory web``. Builds and offline tests do not
flash hardware; see the `raw DFU guide <tools/custom_fx/RAW_DFU.txt>`_ for that.

Vendor packages, full firmware images, device backups, model assets and
proprietary toolchains remain local. Published evidence distinguishes static
analysis, emulation, hardware readback and listening. Remaining work includes
app-open stability, broader audio/CPU testing and further DSP reconstruction.
