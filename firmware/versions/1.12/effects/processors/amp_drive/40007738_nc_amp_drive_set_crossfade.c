/* NanoCore 1.12: nc_amp_drive_set_crossfade at 0x40007738.
 * Role: Sets the interpolation value immediately and clears the ramp.
 * REA: ev_c9491e27d72d62f4263bc64785538d99d25b9ab01c712ec09541627a0bd7c234
 * Source: analysis/rea-1.12/results/01257-export-0x40007738.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_amp_drive_set_crossfade(float param_1,int param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009672c < param_1) {
    param_1 = DAT_ram_4009672c;
  }
  FUN_ram_400002f4();
  *(undefined4 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  *(float *)(param_2 + 0x84) = param_1;
  FUN_ram_400002fa();
  return;
}

