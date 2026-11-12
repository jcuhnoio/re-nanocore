/* NanoCore 1.12: expression_state_reset at 0x40068c92.
 * Role: Clears filter history and resets smoothed controls.
 * REA: ev_7fc7d1df9c4045787e0efa4c00a36d6169b6d76eff618554faa00a293ceddf0f
 * Source: analysis/rea-1.12/results/03507-export-0x40068c92.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void expression_state_reset(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    memset(param_1 + 0x2c,0,0x30);
    uVar2 = (ulonglong)DAT_ram_4009672c;
    uVar1 = (ulonglong)DAT_ram_4009675c;
    *(ulonglong *)(param_1 + 0xc) = uVar2;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    *(ulonglong *)(param_1 + 0x14) = uVar2;
    *(ulonglong *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}

