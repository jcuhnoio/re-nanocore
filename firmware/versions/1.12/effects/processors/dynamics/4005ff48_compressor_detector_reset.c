/* NanoCore 1.12: compressor_detector_reset at 0x4005ff48.
 * Role: Resets compressor envelope, flags, gain and history fields.
 * REA: ev_54ffe19363a3d3414005e35b9b993924eb597da46f65c265b29d7d8656813482
 * Source: analysis/rea-1.12/results/03483-export-0x4005ff48.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void compressor_detector_reset(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

