/* NanoCore 1.12: nc_velvet_vibrato_init at 0x40074d8c.
 * Role: Initializes VelvetVibrato substate
 * REA: ev_d55568346574035f7968c021deb3a15ca3ad676719433ff36b79e7199f82f5fc
 * Source: analysis/rea-1.12-effects/results/03567-export-0x40074d8c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_velvet_vibrato_init(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    iVar1 = param_1 + 0xc;
    do {
      iVar1 = memset(iVar1,0,0x80);
      fence();
      iVar1 = iVar1 + 0x80;
    } while (iVar1 != param_1 + 0x2f8c);
    memset(param_1 + 0x2f8c,0,0x80);
    fence();
    return;
  }
  return;
}

