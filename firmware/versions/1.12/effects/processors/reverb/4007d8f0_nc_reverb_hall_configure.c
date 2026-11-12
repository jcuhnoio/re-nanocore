/* NanoCore 1.12: nc_reverb_hall_configure at 0x4007d8f0.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_96fe449023d6c93af1eaa699bfce34e7b388d3dfff16627731039cf941ab0d5a
 * Source: analysis/rea-1.12-effects/results/03593-export-0x4007d8f0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_hall_configure(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar10 = *param_2;
    uVar9 = param_2[1];
    uVar8 = param_2[2];
    uVar7 = param_2[3];
    uVar1 = param_2[4];
    uVar6 = param_2[5];
    uVar5 = param_2[6];
    uVar2 = param_2[7];
    uVar3 = param_2[8];
    uVar4 = param_2[9];
    *(undefined4 *)(param_1 + 0x2c) = param_2[10];
    *(undefined4 *)(param_1 + 4) = uVar10;
    *(undefined4 *)(param_1 + 8) = uVar9;
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar6;
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}

