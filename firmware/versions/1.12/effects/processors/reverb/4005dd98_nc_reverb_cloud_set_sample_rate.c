/* NanoCore 1.12: nc_reverb_cloud_set_sample_rate at 0x4005dd98.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_83fb4a15a5a0bf71ba77ce7bffa3e7d9ebf89520bc4b4c36f4aef6c479ec8a09
 * Source: analysis/rea-1.12-effects/results/03463-export-0x4005dd98.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_cloud_set_sample_rate(undefined8 param_1,undefined8 *param_2)

{
  if (((param_2 != (undefined8 *)0x0) && (0.0 < (float)param_1)) &&
     ((float)*param_2 != (float)param_1)) {
    *param_2 = param_1;
    *(undefined **)((int)param_2 + 0x14) = &sedeleg;
    *(undefined1 *)((int)param_2 + 0x16) = 0;
  }
  return;
}

