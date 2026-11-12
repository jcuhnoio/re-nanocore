/* NanoCore 1.12: nc_dsp_inactive_bank at 0x4005fa8e.
 * Role: Returns bank at (active_selector XOR1)*0x308.
 * REA: ev_8f6e7d9932d9a471dd244c43a5a82e1d808955e481045ba2d03e3c92a342dc34
 * Source: analysis/rea-1.12-effects/results/03471-export-0x4005fa8e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

int nc_dsp_inactive_bank(int param_1)

{
  if (param_1 != 0) {
    return param_1 + (*(byte *)(param_1 + 0x860) ^ 1) * 0x308;
  }
  return 0;
}

