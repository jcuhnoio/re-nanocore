/* NanoCore 1.12: nc_reverb_spring_copy_samples at 0x400a1540.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_16872cf1ced48ca4370c5a268b9ccf33703fd3107ef3517f76f3c9361868ee07
 * Source: analysis/rea-1.12-effects/results/03710-export-0x400a1540.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_copy_samples(undefined4 *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = param_3;
  puVar5 = param_2;
  puVar2 = param_1;
  if (7 < param_3) {
    do {
      uVar1 = *(undefined4 *)((int)puVar5 + 4);
      uVar7 = puVar5[1];
      uVar8 = *(undefined8 *)((int)puVar5 + 0xc);
      uVar9 = puVar5[2];
      uVar10 = *(undefined8 *)((int)puVar5 + 0x14);
      uVar11 = puVar5[3];
      uVar12 = *(undefined8 *)((int)puVar5 + 0x1c);
      uVar4 = uVar4 - 8;
      *puVar2 = *(undefined4 *)puVar5;
      puVar2[1] = uVar1;
      *(undefined8 *)(puVar2 + 2) = uVar7;
      *(undefined8 *)(puVar2 + 3) = uVar8;
      *(undefined8 *)(puVar2 + 4) = uVar9;
      *(undefined8 *)(puVar2 + 5) = uVar10;
      *(undefined8 *)(puVar2 + 6) = uVar11;
      *(undefined8 *)(puVar2 + 7) = uVar12;
      puVar5 = puVar5 + 4;
      puVar2 = puVar2 + 8;
    } while (7 < uVar4);
    iVar6 = (param_3 - 8 >> 3) + 1;
    param_1 = param_1 + iVar6 * 8;
    param_2 = param_2 + iVar6 * 4;
    param_3 = param_3 & 7;
  }
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      uVar7 = *param_2;
      puVar3 = puVar2 + 1;
      param_2 = (undefined8 *)((int)param_2 + 4);
      *puVar2 = (int)uVar7;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + param_3);
  }
  return;
}

