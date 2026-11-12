NanoCore 1.10 → 1.11 → 1.12
===========================

Status: 2026-11-12. Both requested packages are decoded, authenticated and
fully exported through REA/Ghidra using the same tested RISC-V/legacy-P/T-Head
instruction model as 1.10. This is complete export of discovered functions,
not complete semantic recovery or original, rebuildable vendor source.

* `1.11 source tree <../firmware/versions/1.11/README.rst>`_
* `1.12 source tree <../firmware/versions/1.12/README.rst>`_
* `Machine-readable comparison <../evidence/firmware-version-comparison.json>`_
* `Parameter tables/constants <../evidence/firmware-parameter-tables.json>`_
* `Official release-note snapshot <../evidence/firmware-release-notes.json>`_

Packages and coverage
---------------------

========== ============= ============== ========== ============
Release    Payload bytes Loaded bytes   Functions  Named
========== ============= ============== ========== ============
1.10       667648        663340         2645       36
1.11       688128        685580         2687       19
1.12       727040        723780         2720       22
========== ============= ============== ========== ============

All three packages pass publisher signatures, plaintext CRC and FIT segment
hash checks. Version 1.11's outer label is 1.11, while its internal FIT version
is 1.11b; preserve this distinction when reproducing a comparison. Segments
contain both code and data; their growth is not executable-code growth alone.

Both new exports have zero bad-instruction truncations, 22 functions with opaque
custom operations, and 892 functions with warnings. Arguments, types and some
function boundaries are still approximate. The existing 1.10 tree is retained.
Only four/five existing names transferred to 1.11/1.12 by unique exact native
body matching; other new names were reviewed along the call paths below.

Function comparisons
--------------------

============== ============= =================== ======================
Pair           Exact bodies  Pseudocode candidates Unmatched left/right
============== ============= =================== ======================
1.10 → 1.11    894           977                 774 / 816
1.11 → 1.12    754           1306                627 / 660
1.10 → 1.12    702           1070                873 / 948
============== ============= =================== ======================

Exact matching hashes Ghidra's observed native function ranges and preserves
range shape. Duplicate matches are retained as ambiguous, not assigned by
address order. Identical instruction bytes can still reference changed data
or callees. Pseudocode candidates mask address-bearing references while keeping
scalar constants; they do not establish function identity or behavior. Unmatched
functions are not automatically new/deleted: relocation, compiler changes,
analysis boundaries and duplicate small routines all affect matching.

Patch-note assessment
---------------------

The vendor's `NanoCore download page
<https://www.livtramusic.com/downloads?device=NANOCORE>`_ was fetched on the
status date. Its history contains the requested notes, although its current
release is now 1.2. No 1.2 functionality is attributed to the requested versions.

1.11: MIDI CC 43 and 44
~~~~~~~~~~~~~~~~~~~~~~

**Verified implementation change; physical switching not exercised here.**
1.10's handler at 4002d05e routes this region through generic effect selection.
1.11's ``nc_midi_control_change`` at 4002de68 adds a dedicated branch for
0x2b/0x2c, selects command 6/7, checks the value is at most 29 and submits the
two-byte command through 4002da2e. In 1.12 this remains at 4002ed2c/4002e8f2.
The parser feeds this path for MIDI status 0xb0 after channel/7-bit processing.

See `1.11 CC handler <../firmware/versions/1.11/protocol/control_change.c>`_
and `1.12 CC handler <../firmware/versions/1.12/protocol/control_change.c>`_.

1.11: Bluetooth advertising while powered off and plugged in
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

**Strong static support; over-the-air behavior unverified.** The power-off wait
routine changes from 4003e8d2 in 1.10 to 4003f7fe in 1.11. Three loop locations
now call 4002cacc. That helper ensures UART initialization, checks readiness,
and submits a disable operation on a 500-ms RTOS deadline. The chain is:

::

    poweroff_wait_loop (4003f7fe)
      radio_retry_disable_during_shutdown (4002cacc)
        radio_set_enabled(0) (4002ca46)
          radio_send_enable_command(0) (4002b100): payload [02, 00]
            radio_send_control_if_ready (4002ab6c)
              radio_send_control_frame (40029e36): frame type 3
                radio_uart_write (40029d8e)

The initializer at 4002a45c creates ``uart5_rx`` and ``u5_*`` synchronization
objects. The equivalent 1.12 power-off routine at 4003f8c0 retains retry helper
4002d990 and the same command path. Radio-enable semantics are inferred from
this call chain and the vendor claim; the frame is not identified as standard
HCI, and the peripheral firmware/advertising state has not been dumped.

See `shutdown <../firmware/versions/1.11/power/shutdown.c>`_,
`radio control <../firmware/versions/1.11/bluetooth/control.c>`_ and
`UART transport <../firmware/versions/1.11/bluetooth/uart_transport.c>`_.
This is not a GPIO-only explanation: the relevant delta is repeated UART
commands. GPIO PD.16 already appears in 1.10; its name alone does not identify
a Bluetooth power pin.

1.11: pitch latency and FX2 Drive switching clicks
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

**Not verified.** Audio initialization and block-switch worker code changed,
but those changes have not been isolated to a measured pitch delay or a
specific discontinuity fix. The 1.11 ``blksw`` worker at 4000b890 is a useful
continuation point: it coordinates synchronization, peripheral/DMA state and
block changes. Do not equate a new worker or different allocation sizes with
proof that clicks are gone. Neither an audio impulse latency measurement nor
an output capture across FX2 changes was performed.

1.12: Spring controls
~~~~~~~~~~~~~~~~~~~~

**Verified metadata change; acoustic behavior unverified.** Reverb block 6,
subtype 7 receives a dedicated branch in ``nc_effect_parameter_name`` at
4002607e. The reviewed five-entry table changes from
``DECAY, PREDLY, XOVER, MOD, MIX`` in 1.11 to
``DECAY, PREDLY, XOVER, TONE, MIX`` in 1.12. The tables are at 40096768 and
4009b324 respectively. Decay/pre-delay/crossover were already represented;
the evidence supports a changed control, not five entirely new controls.

1.12: Duck Delay controls
~~~~~~~~~~~~~~~~~~~~~~~~

**Verified parameter schema expansion; audible response unverified.** Delay
block 4, subtype 2 grows from four labels to eight:
``TIME, FBK, FILTER, MIX`` becomes
``TIME, FBK, SENS, DEPTH, ATK, REL, FILTER, MIX``.
1.12's count helper 40025824 returns eight for subtype 2 and is called from
both name and parameter-count queries. The tables are 4009691c (1.11) and
4009bbe4 (1.12). Existing FILTER/MIX indices move; editors must use a
version-specific schema rather than append four controls to the old order.

1.12: Pitch range and low-note tracking
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

**Verified displayed coarse range; tracking improvement unverified.** FX block
1, subtype 8, parameter 0 uses ``24*x - 12`` in the 1.11 formatter 400268fa,
and ``48*x - 24`` in the 1.12 formatter 40027192, for clamped normalized x.
The underlying float32 constants were read from the binary, not guessed from
labels. Fine uses ``2*x - 1`` in both versions, with a display scaling of 100.
Thus the UI represents ±24 coarse semitones and retains ±1 fine semitone.
This does not measure the DSP pitch ratio, tracking quality or latency.

1.12: CAB/IR output level
~~~~~~~~~~~~~~~~~~~~~~~~

**Verified parameter exposure; gain application and persistence unverified.**
Block 3 grows from two labels ``LOCUT, HICUT`` to three
``LOCUT, HICUT, LEVEL``. Tables 40096940 and 4009bc14 and the parameter-index
bounds in the name functions establish the added control. A save/reboot/readback
round trip and audio-level measurement are still required for the rest of the
vendor claim.

See `1.11 effect metadata <../firmware/versions/1.11/audio/effect_metadata.c>`_
and `1.12 effect metadata <../firmware/versions/1.12/audio/effect_metadata.c>`_.

Other findings and Bluetooth scope
----------------------------------

1.11 contains additional Ring Mod/Bias/Rectify/Spread strings and a new flash
part name. 1.12 includes many synth/instrument names, and its effect-name,
parameter-name and parameter-count routines dispatch block 10 to additional
helpers. This is more than an isolated text string, but it does not establish
that synth mode is exposed or usable in 1.12. These may be staged/shared code;
current 1.2 release notes must not be used as proof of 1.12 features.

Bluetooth work must cover the application-to-radio command link, BLE editing
and control, Bluetooth audio routing/mixing, device naming/pairing, and shutdown
states separately. The current analysis identifies an application UART path
and radio-control candidates. It does not identify the radio chip, prove which
Bluetooth profiles its firmware implements, or recover a full radio stack.
USB MIDI/audio and Bluetooth audio/control must not be treated as one transport.

Next discriminating checks
--------------------------

* Keep USB power attached, enter soft-off and scan BLE advertisements to verify
  the shutdown claim; capture UART only if further board access is needed.
* Exercise CC43/44 values 0, 29 and 30 with slot readback on each release.
* Capture an impulse through Pitch and compare latency/tracking across releases.
* Capture repeated FX2 Drive changes and compare output discontinuities.
* Save a changed CAB level, reboot, read it back and measure output gain.
* Trace block-10 registration/reachability before calling it an available feature.

No firmware was installed and no physical device commands were issued during
this comparison. These runtime checks are outstanding, not reported as passed.

Reproduction
------------

The REA public stdio export driver now accepts ``--function-info`` and records
native body ranges alongside every pseudocode export. Use fresh output folders.
Apply the existing tested instruction-language patch before analysis; the stock
Ghidra language is insufficient. Analysis ELF copies use ILP32D flags while
preserving all loaded segment bytes. Empty initial naming ledgers prevent
cross-version address contamination.

::

    python3 tools/firmware_source/compare_versions.py --output analysis/version-comparison/functions.json
    python3 tools/firmware_source/release_data.py --output evidence/firmware-parameter-tables.json
    python3 tools/firmware_source/organize_source.py --output firmware/versions/1.11 --verify
    python3 tools/firmware_source/organize_source.py --output firmware/versions/1.12 --verify

The source export CLI requires ``--version 1.11`` or ``--version 1.12`` for
these versions; 1.10 local-variable annotations are disabled for them. Use
``modules-1.11.json`` or ``modules-1.12.json`` when organizing. The organizer
rejects a source/layout version mismatch. See tools/firmware_source/README.txt
for the complete REA invocation and source export syntax.

Subsequent DSP dissection
------------------------

The coverage/naming table above records the initial comparison snapshot.
The later `DSP pass <dsp-architecture.txt>`_ adds names and supplemental entry
points to the 1.12 tree without changing the baseline inventory count.
See evidence/dsp-dissection.json for current source-manifest provenance.
