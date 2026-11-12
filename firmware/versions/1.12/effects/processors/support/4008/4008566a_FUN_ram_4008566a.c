/* NanoCore 1.12: FUN_ram_4008566a at 0x4008566a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_8bc7c47096756c16092db2f34abb01b5f42a629b63cbbf52e87c8dba1919b78f
 * Source: analysis/rea-1.12-effects/results/03620-export-0x4008566a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_4008566a(int *param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_a5;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fStack_58;
  float fStack_54;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  fVar8 = (float)param_1[5];
  if (fVar8 <= 0.0) {
    return;
  }
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 1),DAT_ram_40099f50);
  fVar12 = (float)DAT_ram_4009675c;
  fVar5 = (float)FUN_ram_40000882(uVar13,fVar8 * (float)DAT_ram_4009675c + DAT_ram_4009a334);
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 2),DAT_ram_40099f88);
  uVar3 = DAT_ram_40099f38;
  fVar6 = (float)FUN_ram_40000882(uVar13,DAT_ram_40099f38);
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 3),DAT_ram_4009a324);
  fVar7 = (float)FUN_ram_40000882(uVar13,DAT_ram_4009a328);
  fVar8 = (fVar5 * DAT_ram_4009f090) / fVar8;
  fVar5 = (float)FUN_ram_40000712(fVar8);
  fVar8 = (float)FUN_ram_400009d2(fVar8);
  iVar4 = *param_1;
  if (iVar4 == 2) {
    fVar9 = (float)FUN_ram_40000d44(uVar3,fVar7 / DAT_ram_40099f70);
    fVar7 = fVar5 * DAT_ram_40096744;
    fVar8 = fVar8 / (fVar6 + fVar6);
    fStack_58 = fVar9 * fVar8 + DAT_ram_4009672c;
    fVar6 = -(fVar9 * fVar8) + DAT_ram_4009672c;
    fVar12 = fVar8 / fVar9 + DAT_ram_4009672c;
    fVar8 = DAT_ram_4009672c - fVar8 / fVar9;
    fStack_54 = fVar7;
    goto LAB_ram_40085774;
  }
  if (iVar4 - 3U < 2) {
    fVar8 = fVar8 / (fVar6 + fVar6);
    if (iVar4 == 3) {
      fStack_54 = DAT_ram_4009672c - fVar5;
      fStack_58 = fStack_54;
    }
    else {
      fStack_54 = -(fVar5 + DAT_ram_4009672c);
      fStack_58 = fVar5 + DAT_ram_4009672c;
    }
    fStack_58 = fStack_58 * fVar12;
    fVar12 = fVar8 + DAT_ram_4009672c;
    fVar8 = DAT_ram_4009672c - fVar8;
    fVar7 = fVar5 * DAT_ram_40096744;
    fVar6 = fStack_58;
    goto LAB_ram_40085774;
  }
  fVar10 = (float)FUN_ram_40000d44(uVar3,fVar7 / DAT_ram_40099f70);
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 4),DAT_ram_40099f94);
  puVar2 = PTR_entry_ram_40096740;
  fVar6 = (float)FUN_ram_40000882(uVar13,PTR_entry_ram_40096740);
  fVar9 = DAT_ram_4009672c;
  fVar11 = (float)FUN_ram_40000844((DAT_ram_4009672c / fVar10 + fVar10) *
                                   (DAT_ram_4009672c / fVar6 - DAT_ram_4009672c) + (float)puVar2,
                                   DAT_ram_4009f95c);
  if (extraout_a5 < 0x100 && fVar11 < 0.0) {
    fVar11 = (float)FUN_ram_40000e74();
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  fVar1 = fVar10 - fVar9;
  fVar9 = fVar10 + fVar9;
  fVar11 = fVar8 * fVar12 * fVar11;
  fVar8 = fVar5 * fVar1;
  if (*param_1 == 0) {
    fVar6 = fVar9 - fVar8;
    if (fVar10 < 0.0) {
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fStack_58 = fVar11 * (fVar12 + fVar12) + fVar6;
      fStack_54 = (fVar10 + fVar10) * (-(fVar5 * fVar9) + fVar1);
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar8 = fVar8 + fVar9;
      fVar6 = -(fVar11 * (fVar12 + fVar12)) + fVar6;
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar12 = fVar12 + fVar12;
      fVar7 = (fVar5 * fVar9 + fVar1) * DAT_ram_40096744;
LAB_ram_400859ae:
      fStack_58 = fVar10 * fStack_58;
      fVar6 = fVar10 * fVar6;
      fVar5 = (float)FUN_ram_40000e74(fVar10);
      fVar12 = fVar11 * fVar12 + fVar8;
      fVar8 = -((fVar5 + fVar5) * fVar11) + fVar8;
      goto LAB_ram_40085774;
    }
    fVar8 = fVar8 + fVar9;
    fStack_54 = (fVar10 + fVar10) * (-(fVar5 * fVar9) + fVar1);
    fVar7 = (fVar5 * fVar9 + fVar1) * DAT_ram_40096744;
  }
  else {
    fVar6 = fVar8 + fVar9;
    if (*param_1 < 0x100 && fVar10 < 0.0) {
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fStack_58 = fVar11 * (fVar12 + fVar12) + fVar6;
      fStack_54 = fVar10 * DAT_ram_40096744 * (fVar5 * fVar9 + fVar1);
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar8 = fVar9 - fVar8;
      fVar6 = -(fVar11 * (fVar12 + fVar12)) + fVar6;
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar1 = -(fVar5 * fVar9) + fVar1;
      fVar12 = fVar12 + fVar12;
      fVar7 = fVar1 + fVar1;
      goto LAB_ram_400859ae;
    }
    fVar7 = -(fVar5 * fVar9) + fVar1;
    fVar8 = fVar9 - fVar8;
    fVar7 = fVar7 + fVar7;
    fStack_54 = fVar10 * DAT_ram_40096744 * (fVar5 * fVar9 + fVar1);
  }
  fVar5 = SQRT(fVar10) + SQRT(fVar10);
  fVar12 = fVar11 * fVar5 + fVar8;
  fVar8 = -(fVar5 * fVar11) + fVar8;
  fStack_58 = fVar10 * (fVar11 * fVar5 + fVar6);
  fVar6 = fVar10 * (-(fVar11 * fVar5) + fVar6);
LAB_ram_40085774:
  param_1[9] = (int)(fVar7 / fVar12);
  *(ulonglong *)(param_1 + 0x11) = (ulonglong)(uint)-(fVar7 / fVar12);
  *(ulonglong *)(param_1 + 10) = (ulonglong)(uint)(fVar8 / fVar12);
  *(ulonglong *)(param_1 + 0x12) = (ulonglong)(uint)-(fVar8 / fVar12);
  *(ulonglong *)(param_1 + 6) = (ulonglong)(uint)(fStack_58 / fVar12);
  *(ulonglong *)(param_1 + 0xe) = (ulonglong)(uint)(fStack_58 / fVar12);
  *(ulonglong *)(param_1 + 7) = (ulonglong)(uint)(fStack_54 / fVar12);
  *(ulonglong *)(param_1 + 0xf) = (ulonglong)(uint)(fStack_54 / fVar12);
  param_1[8] = (int)(fVar6 / fVar12);
  param_1[0x10] = (int)(fVar6 / fVar12);
  return;
}

