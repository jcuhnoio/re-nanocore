/* NanoCore 1.12: nc_reverb_spring_exchange_samples at 0x400a15ac.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_5d5b34b0dd1a03af68c48cb77f3ab2c042cbca13eaf33fc15dd2bf675e7880d7
 * Source: analysis/rea-1.12-effects/results/03711-export-0x400a15ac.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_exchange_samples(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = param_2;
  puVar3 = param_1;
  puVar5 = param_3;
  uVar6 = param_4;
  if (3 < param_4) {
    do {
      uVar1 = *(undefined4 *)((int)puVar2 + 4);
      uVar7 = puVar2[1];
      uVar8 = *(undefined8 *)((int)puVar2 + 0xc);
      uVar9 = *puVar3;
      uVar10 = *(undefined8 *)((int)puVar3 + 4);
      uVar11 = puVar3[1];
      uVar12 = *(undefined8 *)((int)puVar3 + 0xc);
      *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
      *(undefined4 *)((int)puVar3 + 4) = uVar1;
      puVar3[1] = uVar7;
      *(undefined8 *)((int)puVar3 + 0xc) = uVar8;
      *puVar5 = (int)uVar9;
      puVar5[1] = (int)uVar10;
      puVar5[2] = (int)uVar11;
      puVar5[3] = (int)uVar12;
      uVar6 = uVar6 - 4;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 4;
    } while (3 < uVar6);
    iVar4 = (param_4 - 4 >> 2) + 1;
    param_1 = param_1 + iVar4 * 2;
    param_2 = param_2 + iVar4 * 2;
    param_3 = param_3 + iVar4 * 4;
    param_4 = param_4 & 3;
  }
  if (param_4 != 0) {
    puVar2 = param_1;
    do {
      uVar7 = *puVar2;
      puVar3 = (undefined8 *)((int)puVar2 + 4);
      *(int *)puVar2 = (int)*param_2;
      *param_3 = (int)uVar7;
      param_2 = (undefined8 *)((int)param_2 + 4);
      puVar2 = puVar3;
      param_3 = param_3 + 1;
    } while (puVar3 != (undefined8 *)((int)param_1 + param_4 * 4));
  }
  return;
}

