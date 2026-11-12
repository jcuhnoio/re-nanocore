NanoCore firmware decoding and custom effects
=============================================

Reverse-engineering the Livtra NanoCore: package decoding, executable analysis,
DSP reconstruction, and custom effects running in modified application firmware.
This README records the investigation through 2026-11-12 and links each milestone
to its tools, detailed findings and evidence.

Browser installer
-----------------

`Open the UniVibe installer <https://jcuhnoio.github.io/re-nanocore/>`_ in desktop
Chrome or Edge. It replaces **Velvet Vibrato (MOD 10)** with **UNIVIBE**, on the
exact supported **1.10, 1.11 and 1.12** builds. The version is detected from
authenticated firmware bytes; this does not upgrade or downgrade the pedal.
There is no effect selector. The controls
are SPEED, DEPTH, LEVEL and CHORUS/VIBRATO MODE.

Connect USB and click **Upload UniVibe**. Allow MIDI SysEx access, then click
**Connect bootloader** and choose Livtra Lupgrader when prompted. The page reads
and identifies the complete OS partition, saves a backup in this browser,
patches locally, writes changed sectors, verifies every byte and requests reboot.
Download the backup somewhere safe: clearing browser data removes the local copy.
Presets using Velvet Vibrato now use UniVibe; adjust their values to taste.
**Restore original** uses the saved stock backup or an imported complete OS
``.bin`` backup. It checks that the backup matches the current device contents.

Firmware never goes to a server. GitHub Pages serves HTML, CSS, JavaScript and
small patch deltas, not a complete vendor firmware. IndexedDB stores the original
backup and pending transaction, with read-after-write verification before erase.
Interrupted-upload recovery restores the prior snapshot only when untouched
sectors still match the saved transaction. A failed verification never requests
reboot. Keep the device in Lupgrader mode and use **Recover interrupted upload**
in the same browser/origin. If an unsupported image was rejected before writing,
a full power cycle can exit the bootloader.

Validation status: 26 Node tests cover image identity, byte-preserving patches,
restore, protocol ordering, disconnects, readback corruption and recovery bounds.
Chrome browser tests exercise install, IndexedDB backup, exact restore and
interrupted-upload recovery for all three versions with a simulated device;
desktop and 360px layouts were checked. Backups are retained separately by
firmware version, and cross-version restores are rejected. The 1.10 image and
Python DFU route have been physically tested. **UniVibe on 1.12 is confirmed
working on a physical NanoCore**: the user completed the browser upload and
verification, then confirmed working audio in a listening test. **1.11 remains
checked offline only.** Browser/OS driver compatibility beyond the reported
tests remains unverified.

The first user browser run reached complete readback but stopped before reboot
with ``a.every is not a function``. The receipt's numeric ``bytes`` count collided
with the storage check for snapshot byte arrays; recovery reached the same error.
The fix distinguishes counts from byte arrays and adds regression coverage with
the actual receipt shape. Reload the installer in the same browser without
clearing site data, then retry recovery; the saved transaction remains available.
That initial report established browser communication reaching readback. A later
1.12 browser upload completed successfully, followed by the user confirming
working audio (see below).

Implementation: ``web/``; deployment: ``.github/workflows/pages.yml``. Run
``node --test web/tests/*.test.js``. To preview, run
``python3 -m http.server 8765 --directory web``. The optional browser smoke test
``node tools/custom_fx/test_web_browser.cjs`` requires Playwright Core (or an
absolute ``PLAYWRIGHT_MODULE``), Chrome (``CHROME_PATH``), the three locally
decoded release images, and that server. Its screenshots remain under ``analysis/``.
The patch exporter is ``tools/custom_fx/export_web_patch.py``; it independently
checks FIT CRC/MD5 before emitting exact-build SHA256 guards and deltas.

UniVibe on newer firmware
~~~~~~~~~~~~~~~~~~~~~~~~~

The published ``web/patch.json`` (1.10), ``web/patch-1.11.json`` and
``web/patch-1.12.json`` contain only replacement ranges, expected original bytes
and integrity hashes. GitHub Pages hosts these deltas alongside the installer.
The browser reads the complete OS from the connected pedal and produces the
modified firmware in memory. Full stock images, patched images and device
backups remain local, outside the public repository. The release called 1.11
has internal FIT version ``1.11b``; the exporter preserves this distinction.

Porting required independently locating the processor, initializer, parameter
count, formatter, label tables and enum hook. In particular, 1.11 has a smaller
formatter region and 1.12 uses different count/formatter registers. The native
1.11 and 1.12 Velvet processors match instruction-for-instruction except
relocated constant references and one relocated call; all referenced constant
bytes match. The rebuilt UniVibe DSP fits in each 1392-byte processor body,
reserving a separate tail for the UI helper.

`Static processor comparison <evidence/univibe-version-site-comparison.json>`_
and `DSP target checks <evidence/univibe-version-dsp-tests.json>`_ record the
new-version evidence. The latter compares executed RISC-V DSP with host C in
mono, stereo, in-place and multiple sample-rate cases, including parameter
changes, reset, ABI preservation and state bounds. These checks do not establish
hardware audio quality or real-time deadlines. Native UI emulation also passed
760 parameter-count cases, 912 enum cases, 12 labels, 13 default-buffer lengths
and 20 formatted-value cases per newer version, including preservation of
unrelated effects. See the `1.11 UI report <evidence/custom-fx-ui-1.11-emulation.json>`_
and `1.12 UI report <evidence/custom-fx-ui-1.12-emulation.json>`_. Native library
boundaries are emulated; this is not an observation of the physical display.

Build each version using ``tools/custom_fx/build.py --version VERSION --output NEW_DIR``;
``package.py --input DECODED_FIT --build NEW_DIR --output NEW_PACKAGE --effect univibe --label UNIVIBE``
uses the corresponding retained UI code. UI assembly can be regenerated using
``build_vibe_ui.py --version VERSION --output NEW_UI_DIR``. Finally,
``export_web_patch.py --stock DECODED_FIT --installed NEW_PACKAGE/firmware.bin --manifest NEW_PACKAGE/manifest.json --output web/patch-VERSION.json``
produces the browser delta (1.10 keeps its existing ``patch.json`` filename).
These tools are under ``tools/custom_fx/`` and reuse the retained vendor toolchain;
they never flash the device themselves.

Physical stock 1.12 upgrade
~~~~~~~~~~~~~~~~~~~~~~~~~~

On 2026-11-12 the archived ``firmware-archive/nanocore-1.12.fmu`` was verified
against its publisher signatures, decrypted and checked for CRC/FIT integrity.
A fresh complete OS backup matched the known UniVibe 1.10 image. The decoded
stock 1.12 payload was written using the established OS-relative DFU route,
preserving the bytes beyond the release payload. Full 868352-byte readback
matched exactly; reboot returned normal MIDI enumeration and ``ready: true``.

The active preset's MOD block changed from enabled variant10 to disabled
variant0 on the first stock 1.12 runtime read; all preset contents and audio
behavior have not been verified. The browser patch engine recognized this
physical readback as stock1.12, generated the exact offline UniVibe payload and
reversed it exactly in memory. The pedal was initially left on **stock1.12** for the browser
installer test. The user subsequently completed that test: the installer showed
“Firmware 1.12 · verified” and “UniVibe is ready,” and the user confirmed the
effect sounds good. This establishes a successful physical 1.12 browser install
and user listening test, not calibrated audio measurements or reference-pedal
equivalence. See the `user confirmation <evidence/univibe-1.12-user-confirmation.json>`_.

`Upgrade receipt <evidence/physical-stock-1.12-upgrade.json>`_ records the hashes,
written sectors, runtime checks and local backup paths. Complete images remain
local under ``analysis/custom-fx/stock-1.12-session/``.

Octave Studio port candidate
~~~~~~~~~~~~~~~~~~~~~~~~~~~

The auditioned **Shared 2048/1024** core now has a buildable optimized candidate
under ``firmware/custom-fx/octave/``. Its source keeps the original window sizes,
four octave voices and spectral swell. Per-instance state falls from 61,728 to
53,444 bytes; the speed-focused RISC-V build uses about 48.6% fewer executed
instructions in the retained short fixture. Host regression compares over one
million samples bit-for-bit; target emulation also matches the original output
and window coefficients exactly. Instruction counts are not physical CPU timing.

An experimental **1.12 device build has now been flashed and fully read back**.
It boots, initializes both octave instances, and exposes **OCTAVE in FX2** in
place of PITCH (subtype 8), with DRY/SWELL/LEVEL controls. UniVibe remains; no
second effect was removed. The implementation extends the loaded segment and
reserves its memory before heap initialization, with larger dedicated pitch
allocations. About 1.4 MB of heap remains free on the tested preset.

**The first physical build fails the real-time budget.** With OCTAVE enabled,
the measured chain averages 1.99 ms against a 1.45 ms budget; the octave alone
averages 1.32 ms and peaks at 2.96 ms. These are physical timer measurements,
not instruction estimates. The user reports that enabling OCTAVE effectively freezes the pedal.
Treat this build as a failed experiment; do not install it. Recovery to the
retained known-working UniVibe image is in progress.
This experiment is not offered by the public UniVibe installer. The exact
preflash backup is retained locally for direct-DFU rollback.

`Device test and reproduction <docs/octave-device-test.txt>`_,
`physical measurements <evidence/octave-device-1.12.json>`_,
`feasibility findings <docs/octave-nanocore-feasibility.txt>`_, and
`buildable candidate <firmware/custom-fx/octave/README.rst>`_ document the work.
Next work is reducing average DSP cost and spreading spectral work across audio
blocks, then measuring again under controlled input and varied full chains.
The accepted Octave Studio checkout remains unchanged.

Current result
--------------

* All seven archived releases (1.04, 1.05, 1.06, 1.07, 1.10, 1.11 and 1.12)
  decode and pass signature, plaintext CRC and FIT segment hash validation.
  Both executable segments of decoded 1.10 match the physical pedal's readback.
* Organized C-like research trees exist for 1.10, 1.11 and 1.12. A separate
  1.12 effect index covers 343 routines across the exposed DSP families.
  **Decoded executable bytes and decompiler output are not a complete,
  understood, rebuildable firmware source tree.**
* A buildable C library contains reconstructed classic Chorus, a custom gain
  probe and custom UniVibe DSP. The RISC-V build/patch pipeline produces
  bounded replacements inside the existing Velvet Vibrato slot.
* Modified 1.10 firmware has been physically flashed, read back in full and
  rebooted successfully. The latest deployed revision exposes UNIVIBE with
  **SPEED, DEPTH, LEVEL and a two-state CHORUS/VIBRATO MODE**.
* UniVibe 1.12 has also been installed through the browser, verified and
  confirmed working by the user in a physical listening test.
* Measured audio quality, real-time deadlines and equivalence to a real MXR M68
  remain unmeasured. The custom UniVibe is circuit-informed approximate DSP;
  its control layout is MXR-style, not evidence of a calibrated hardware clone.

Start here: `buildable effects <firmware/custom-fx/README.rst>`_,
`latest UniVibe design <docs/custom-fx-univibe-controls.txt>`_,
`UI patches <docs/custom-fx-univibe-ui.txt>`_,
`latest physical receipt <evidence/custom-fx-univibe-controls-flash.json>`_.

How the decoding progressed
---------------------------

1. Host application and resource recovery — before physical access
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

We inspected ToneCommand/Livtra application artifacts, traced its native MIDI
and firmware-update APIs, and decoded its AHPK ``host.dat`` resource archive.
All 472 entries in the inspected archive were recovered and checked. These
included preset/model/IR/theme resources; they were not NanoCore DSP source.

Executing the real native updater against simulated USB/MIDI showed that the
host passed the signed LUM0 core through rather than decoding the executable.
The independent protocol-1 uploader reproduced the observed request sequence.
This established the host transfer protocol, not device acceptance of modified
code. Early GUI captures used synthetic API responses and are labeled as such.

* `Resource format and decoder derivation <docs/resources.txt>`_
* `Normal MIDI and updater protocol <docs/protocol.txt>`_
* `Host resource decoder <tools/host_pack/decode_host_pack.py>`_
* `Signed-package uploader/simulator <tools/nanocore_dfu/README.txt>`_
* `App screenshots and native simulation evidence <docs/evidence-gallery.rst>`_

2. Physical USB/MIDI and plaintext readback — 2026-11-11
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The physical 1.10 pedal enumerated as USB ``33c3:1301``. Normal reads captured
settings, effect state, models, IRs and presets. It reported 64 preset slots
(0–63), with 40 populated presets; 38 model-storage slots and 30 IR slots.
Later DSP analysis identified model slots 30–37 as the eight FX2 drive assets.
USB audio descriptors advertised stereo 16-bit / 44.1 kHz; this is the USB
stream format, not proof of the codec's internal resolution.

A MIDI DFU-entry command exposed Lupgrader ``33c3:6678``. Its raw OS interface
allowed address-selected upload/readback. We recovered a plaintext ArtInChip
FIT application, verified its segment hashes and mapped its executable regions.
A reset initially left the unit in DFU; power cycling recovered it. Later,
zero-length DNLOAD plus GETSTATUS established a working manifestation/reboot
sequence. No opening of this pedal's enclosure was required.

* `Physical investigation <docs/physical-investigation.txt>`_
* `Firmware readback and mapping <docs/firmware-readback.txt>`_
* `Runtime evidence summary <evidence/physical-runtime-summary.json>`_
* `Physical firmware identity <evidence/physical-firmware-readback.json>`_

3. Temporary diagnostic firmware exposed the decoder — 2026-11-12
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

After a complete OS backup, a 252-byte RISC-V diagnostic replaced the 1.10
AMP-read handler at ``0x4008a640``. It reused native flash-read functions to
return bounded SPL reads of at most 200 bytes. Emulation checked request
boundaries and basic ABI behavior before deployment. The modified application
booted and returned the updater contained in SPL. The original OS was then
restored with an exact 868,352-byte readback; normal runtime and the 40 populated
presets were checked against the pre-diagnostic baseline.

Updater analysis revealed the LUM0 transformation: XOR each payload block with
``SHA256(key || nonce || LE64(block_index))``. The recovered key, offsets,
algorithm, signature distinction and derivation are documented below. The
publisher's private Ed25519 signing key was not recovered or needed for this
raw-image experiment.

* `Decoder derivation and physical restoration <docs/firmware-decoding.txt>`_
* `Historical diagnostic assembly/link/emulation sources <tools/firmware_probe/README.txt>`_
* `Offline decoder and synthetic ELF export <tools/firmware_decode/README.txt>`_
* `Validation receipts for all seven releases <evidence/firmware-decoding.json>`_

The decrypted 1.10 release and physical FIT differ in two timestamp bytes, but
both loaded executable segments match exactly. This cross-check was essential:
a plausible header or readable strings alone would not validate the decoder.

4. Instruction-set identification and decompilation
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Generic RISC-V decoding initially left invalid instructions and truncated
functions. The matching ArtInChip SDK/Xuantie toolchain identified legacy
packed-DSP P and T-Head instructions. All 245 examined unknown instruction
sites round-tripped through its assembler, reproducing 980 original bytes.
The result supports RV32IMAFDC plus legacy P/T-Head extensions and ILP32D.
It does not identify the exact chip SKU.

A tested Ghidra SLEIGH extension, corrected synthetic-ELF ABI flags and seeded
indirect entry points improved REA exports. The instruction implementation
passed 3,780 deterministic emulation cases. The updated exports have zero
bad-instruction truncations, but type errors, opaque hardware operations,
uncertain function boundaries and indirect calls remain. Reviewed names live
in versioned ledgers with addresses and supporting evidence.

* `ISA identification and exact toolchain <docs/vendor-instruction-set.txt>`_
* `REA/Ghidra reconstruction workflow <docs/firmware-source.txt>`_
* `Reproduction tools and prerequisites <tools/firmware_source/README.txt>`_
* `1.10 tree: 2,645 functions <firmware/README.rst>`_
* `1.11 tree: 2,687 functions <firmware/versions/1.11/README.rst>`_
* `1.12 tree: 2,720 baseline functions plus focused supplements <firmware/versions/1.12/README.rst>`_

5. Version comparison and patch-note checking
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

We decoded 1.11 and 1.12 independently, compared native function bodies and
pseudocode candidates, and traced release-note changes including MIDI behavior,
radio shutdown paths and effect parameters. Exact matches, heuristic candidates
and unverified behavior are kept distinct. The 1.11 package contains internal
FIT version ``1.11b``; the tools preserve this discrepancy.

Radio command paths are evidence of application behavior, not identification
of the Bluetooth chip, complete protocol recovery or over-the-air testing.

* `Version comparison and patch-note assessment <docs/firmware-version-comparison.rst>`_
* `Comparison evidence <evidence/firmware-version-comparison.json>`_
* `Retained release-note snapshot <evidence/firmware-release-notes.json>`_

6. DSP dissection and the effect repository
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Tracing the audio worker, chain dispatcher, effect metadata and callback tables
established float32 audio, shared state layouts and the main ten-argument effect
ABI. Native instructions were used to correct misleading decompiler types.
The dedicated Velvet processor uses a different nine-argument ABI; this
mattered directly when building replacement code.

All exposed 1.12 effect families now have indexed C-like exports: 343 routines,
150 reviewed names, selector/alias distinctions and static direct dependencies.
These exports overlap the larger firmware tree; their counts are not additive.
External amp-model weights and IR assets remain separate from executable code.

* `Audio engine, state and callback ABI <docs/dsp-architecture.txt>`_
* `Classic Chorus <docs/dsp-chorus.txt>`_
* `Drive and shared model engine <docs/dsp-drive.txt>`_
* `Delay and reverb <docs/dsp-delay-reverb.txt>`_
* `Modulation, pitch and wah <docs/dsp-mod-pitch-wah.txt>`_
* `Dynamics, cabinet convolution, EQ and expression <docs/dsp-dynamics-cab-eq.txt>`_
* `All-effect C export and limitations <firmware/versions/1.12/effects/README.rst>`_

7. From research C to executable custom effects
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Classic Chorus was rewritten as buildable C with the recovered state layout.
Under emulation, the rebuilt and original 1.12 loops matched every output
sample and state byte in six cached-state cases totaling 12,288 frames,
including successive 64-frame callbacks. Initialization and parameter-change
math were excluded from that equivalence test. Instruction counts were higher
than native code; they are not physical CPU timing measurements.

A stateless gain probe established a smaller integration target. It compiled
to 154 bytes within Velvet's 1,392-byte native body and passed 60 machine-code
ABI/audio cases for each linked version. The patch builder validates the exact
base image and original bytes, preserves image size, and recomputes FIT hashes.
The raw DFU backend backs up the full OS, rewrites complete affected sectors,
checks the full readback and only then requests reboot.

* `Build and comparison report <docs/custom-fx-pipeline.txt>`_
* `Replacement-site proof and ABI <docs/custom-fx-patch-site.txt>`_
* `Buildable C and host tests <firmware/custom-fx/README.rst>`_
* `Raw OS backup/deploy/restore procedure <tools/custom_fx/RAW_DFU.txt>`_

8. TEST001 and UniVibe deployed on physical 1.10
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

TEST001 replaced Velvet with the gain probe and changed its on-device name.
The full OS readback matched, the pedal rebooted and reported ready, and the
user confirmed the TEST001 firmware was uploaded.

A first five-control UniVibe followed. The current revision simplifies it to
SPEED/DEPTH/LEVEL/MODE, fixes internal voicing and waveform, and uses a real
native two-state CHORUS/VIBRATO parameter. It also replaces ideal allpasses with
circuit-informed non-ideal phase stages. The 1,106-byte DSP leaves room for a
68-byte enum helper in the same bounded processor site. Other UI patches are
restricted to the affected subtype or explicitly preserve original behavior.

Host numerical/sanitizer tests, compiled-code comparisons and native UI branch
checks passed. Each deployment retained a fresh backup, matched the full OS
readback and returned to normal MIDI/runtime readiness. Those observations do
not independently prove physical sound quality or a visually correct UI.
Existing saved presets are not migrated to the new parameter meanings.

* `TEST001 flash receipt <evidence/custom-fx-test001-flash.json>`_
* `First UniVibe design <docs/custom-fx-univibe.txt>`_ and `flash receipt <evidence/custom-fx-univibe-flash.json>`_
* `Current four-control DSP <docs/custom-fx-univibe-controls.txt>`_
* `Native UI patch sites, enum and tests <docs/custom-fx-univibe-ui.txt>`_
* `Current physical deployment receipt <evidence/custom-fx-univibe-controls-flash.json>`_

Reproduce the offline checks
----------------------------

Python 3.10+, a C compiler and make are sufficient for the normal test suite
once the decoder dependency is installed. These commands do not access USB::

    python3 -m venv .venv
    .venv/bin/pip install -r tools/firmware_decode/requirements.txt
    .venv/bin/python -m unittest discover -s tools/nanocore_dfu -p 'test_*.py'
    .venv/bin/python -m unittest discover -s tools/firmware_decode -p 'test_*.py'
    .venv/bin/python -m unittest discover -s tools/firmware_source -p 'test_*.py'
    .venv/bin/python -m unittest discover -s tools/custom_fx -p 'test_*.py'
    make -C firmware/custom-fx test

CI also verifies the hashes/manifests of the committed research trees and
compiles the effect catalog. See `.github/workflows/tests.yml <.github/workflows/tests.yml>`_.
Target emulation requires Unicorn; target builds require the retained Xuantie
compiler and Docker. REA/Ghidra export additionally needs the analysis tools
listed in the source-reconstruction guide. Those tools are not bundled here.

Decode a matching vendor package into a new directory::

    .venv/bin/python tools/firmware_decode/decode.py /path/to/nanocore-1.10.fmu --output analysis/decoder-capture/validated-releases/nanocore-1.10

Source URLs and identities are in `firmware sources <evidence/firmware-sources.json>`_.
The decoder creates the FIT payload, segments, manifest and address-mapped ELF.
The ELF is an analysis container, not the original vendor ELF or an upload file.

With the toolchain installed at the documented local path, build and package
the current four-control 1.10 effect without accessing the pedal::

    python3 tools/custom_fx/build.py --version 1.10 --output analysis/custom-fx/my-build
    python3 tools/custom_fx/package.py --input analysis/decoder-capture/validated-releases/nanocore-1.10/firmware.bin --build analysis/custom-fx/my-build --output analysis/custom-fx/my-image --effect univibe --label UNIVIBE

The four-control UI patches currently support **1.10 only**. These outputs are
raw FIT images for the demonstrated OS DFU route, not publisher-signed FMUs for
ToneCommand. The separate ``tools/nanocore_dfu`` signed-package transport has
different coverage; do not confuse it with the physically exercised raw backend.
Use the raw uploader's dedicated guide for backup, matching-base checks and
restoration. No test or build command automatically flashes a device.

Artifact and evidence policy
----------------------------

This repository includes tools, original custom DSP/assembly, organized
firmware-derived C-like exports, naming ledgers, compact evidence, manifests
and the explicitly labeled app screenshots. Historical diagnostic source is
included so the decoder derivation remains reviewable.

Vendor firmware packages, full decoded images, stock/device partition backups,
SPL dumps, factory model/IR assets, installers, toolchains, virtual environments,
large analysis databases and exploratory logs remain local. Hashes and source
URLs identify them; the root .gitignore allowlist prevents bulk uploads.
Paths beginning ``analysis/`` in evidence refer to that local workspace and are
not promised to exist in a fresh clone. Some historical receipts include exact
small patch bytes, but no complete firmware image or device backup is included.

Evidence categories must remain distinct: static decompilation, mocked native
execution, instruction emulation, physical readback/boot, and physical audio/UI
observation establish different things. Naming a function is not proof of a
complete algorithm. Booting a patched image is not a listening test.

What remains
------------

* Physical audio measurements, CPU deadline checks and reference-pedal matching.
* More effects converted from research pseudocode into tested, buildable C.
* A general placement/relocation/registration mechanism beyond replacing a slot.
* Full model/asset interpretation and independently verified NAM compatibility.
* Exact processor/codec/radio identities and codec register configuration.
  G730 is consistent with our ISA evidence, but chip SKU and NAU88L21 identity
  have not been independently established on this board.
* Reducing Octave Studio CPU cost and peaks after the first physical 1.12 test exceeded the audio budget.

`Research status <docs/research-status.txt>`_ preserves the dated earlier findings;
statements of old limitations there are historical when superseded above.
