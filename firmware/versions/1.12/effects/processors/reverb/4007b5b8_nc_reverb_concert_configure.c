/* NanoCore 1.12: nc_reverb_concert_configure at 0x4007b5b8.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_737d92ff9b1b5a846ab706195ce5436b0295f03be9e59645f5da4663f9beaff5
 * Source: analysis/rea-1.12-effects/results/03588-export-0x4007b5b8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_concert_configure(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = *param_2;
    uVar6 = param_2[1];
    uVar5 = param_2[2];
    uVar2 = param_2[3];
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    *(undefined4 *)(param_1 + 0x1c) = param_2[6];
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

