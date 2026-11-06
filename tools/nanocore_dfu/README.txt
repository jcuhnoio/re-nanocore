Independent NanoCore DFU uploader
================================

Implements the protocol-1 host transfer observed in ToneCommand 1.3.3.
Status: simulator-tested and matched against a saved native-library capture;
never tested with a physical pedal. This is a research tool, not a confirmed
way to boot modified firmware.

Offline use (Python standard library only; run from repository root)

  python3 tools/nanocore_dfu/uploader.py inspect nanocore-1.12.fmu
  python3 tools/nanocore_dfu/uploader.py simulate nanocore-1.12.fmu --output analysis/my-dfu-simulation
  python3 -m unittest discover -s tools/nanocore_dfu -p test_uploader.py -v

Simulation requires a new output directory. It writes events.jsonl,
dfu-blocks.bin and result.json. inspect and simulate never import a USB backend
or open a physical device. Optional --fault values are write-timeout,
write-short, status-error, status-short, progress-stall and busy.

The parser supports LUM0 v2 NanoCore product 0x1301, host route 1, and the
optional protocol-1 FMUC contract for runtime 33c3:1301 / DFU 33c3:6678.
It validates structure and reports the footer hash match, but deliberately
does not enforce publisher signatures or that hash. A modified payload can
therefore pass this host. That says nothing about device-side acceptance.
The original signed LUM0 core is transmitted unchanged; the 129-byte FMUC
footer on firmware 1.12 is excluded. No decryption is performed.

Physical backend (implemented, unvalidated)

Requires PyUSB and a working libusb backend installed separately. Its explicit
write command is:

  python3 tools/nanocore_dfu/uploader.py upload FILE.fmu --bus BUS --address ADDRESS

This command erases/writes the selected device. BUS and ADDRESS must identify
the intended pedal already in DFU mode; no automatic runtime detach/reconnect
is implemented. Only VID:PID 33c3:6678 is accepted. The active configuration
must expose exactly one FE/01/02 interface in alternate setting 0. Driver
ownership and alternate-setting behavior still require hardware validation.
Legacy product-0 firmware, PID6679, other Livtra products and NDF1 are not
supported. Transfer completion does not verify reboot or audio operation.

Validation and evidence

The original local validation passed 22 tests, including comparison of all579
supported control transfers and every outgoing byte against the saved native
trace. The curated repository retains a payload-free trace with SHA256 hashes
in evidence/vendor-dfu-trace.json. Its portable suite runs22 tests on synthetic
data; a23rd optional test verifies the real1.12 image against all packet hashes:

  NANOCORE_FIRMWARE=/path/to/nanocore-1.12.fmu python3 -m unittest discover -s tools/nanocore_dfu -p test_uploader.py -v

The optional test is skipped when no local firmware is provided. Tests cover
all579 request fields/order, control payload hashes, block boundaries,
initial-state recovery, bounded polling, transfer faults, malformed packages,
and mocked USB selection/cleanup. Synthetic tests do not emulate device
authentication or flash hardware.

See docs/protocol.txt for capture methodology and limits. Raw captures remain
in the original local workspace and are not required by the portable suite.
