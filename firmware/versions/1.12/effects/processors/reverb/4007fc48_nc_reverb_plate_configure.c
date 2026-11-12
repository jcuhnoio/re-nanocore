/* NanoCore 1.12: nc_reverb_plate_configure at 0x4007fc48.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_d1a6a0dfc0accd2e01eeb698b74f7a8b118f9d53b450a9b9831bf96c0346cb3f
 * Source: analysis/rea-1.12-effects/results/03598-export-0x4007fc48.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_plate_configure(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar7 = *param_2;
    uVar1 = param_2[1];
    uVar6 = param_2[2];
    uVar5 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    *(undefined4 *)(param_1 + 0x20) = param_2[7];
    *(undefined4 *)(param_1 + 4) = uVar7;
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = uVar6;
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}

