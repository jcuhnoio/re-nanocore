/* NanoCore 1.12: FUN_ram_40094dda at 0x40094dda.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_3d631ce25d87006ed5fad6a45c288120a7c1b1096ffea7a8a17a18a491f581e4
 * Source: analysis/rea-1.12-effects/results/03699-export-0x40094dda.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40094dda(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 in_register_00000100;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = *param_1;
  uVar6 = in_register_00000100;
  uVar5 = FUN_ram_40000882(DAT_ram_4009f9d8,(float)uVar4 * DAT_ram_4009b18c);
  uVar3 = uVar6;
  FUN_ram_40000882(DAT_ram_4009b1a0,uVar5);
  uVar6 = FUN_ram_40000882(uVar6,in_register_00000100);
  fVar7 = (float)FUN_ram_40000844(uVar3,uVar6);
  fVar1 = DAT_ram_4009fa04;
  if (fVar7 != *(float *)(param_1 + 0x2dee)) {
    *(float *)(param_1 + 0x2dee) = fVar7;
    fVar9 = DAT_ram_400a1454;
    if (fVar7 != fVar1) {
      fVar9 = fVar7 * DAT_ram_4009f090;
    }
    fVar9 = fVar9 / (float)uVar4;
    fVar8 = (float)FUN_ram_400009d2(fVar9);
    fVar8 = fVar8 / DAT_ram_400a1458;
    fVar9 = (float)FUN_ram_40000712(fVar9);
    fVar2 = fVar9 * DAT_ram_40096744;
    fVar1 = fVar8 + DAT_ram_4009672c;
    fVar8 = DAT_ram_4009672c - fVar8;
    fVar7 = ((fVar9 + DAT_ram_4009672c) * (float)DAT_ram_4009675c) / fVar1;
    fVar9 = -(fVar9 + DAT_ram_4009672c) / fVar1;
    *(float *)(param_1 + 0x26d8) = fVar7;
    *(float *)(param_1 + 0x26d9) = fVar7;
    fVar2 = fVar2 / fVar1;
    *(float *)((int)param_1 + 0x136c4) = fVar9;
    fVar8 = fVar8 / fVar1;
    *(float *)((int)param_1 + 0x136cc) = fVar2;
    *(float *)(param_1 + 0x26da) = fVar8;
    *(float *)((int)param_1 + 0x136dc) = fVar7;
    *(float *)(param_1 + 0x26dc) = fVar9;
    *(float *)((int)param_1 + 0x136e4) = fVar7;
    *(float *)(param_1 + 0x26dd) = fVar2;
    *(float *)((int)param_1 + 0x136ec) = fVar8;
  }
  return;
}

