/* NanoCore 1.12: nc_dsp_active_bank at 0x4005faaa.
 * Role: Returns bank at active_selector*0x308.
 * REA: ev_3fa94d14725ca53b5a80737600fbee27e6e74c46ae2427e270b75bf09a684b4a
 * Source: analysis/rea-1.12-effects/results/03472-export-0x4005faaa.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

int nc_dsp_active_bank(int param_1)

{
  if (param_1 != 0) {
    return param_1 + (uint)*(byte *)(param_1 + 0x860) * 0x308;
  }
  return 0;
}

