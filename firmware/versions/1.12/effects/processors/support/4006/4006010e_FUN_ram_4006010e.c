/* NanoCore 1.12: FUN_ram_4006010e at 0x4006010e.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_4ceb88678ad578663997481e22fda60282c95efccbbd9e7cccac2ba1eb0d7637
 * Source: analysis/rea-1.12-effects/results/03479-export-0x4006010e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_4006010e(float param_1,ulonglong *param_2,uint param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  ulonglong uVar13;
  
  fVar3 = DAT_ram_4009672c;
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  fVar2 = param_1;
  if (param_1 < DAT_ram_4009672c) {
    fVar2 = DAT_ram_4009678c;
  }
  memset((int)param_2 + 4,0,0x54);
  *param_2 = (ulonglong)(uint)fVar2;
  if (param_3 == 0) {
    *(undefined1 *)((int)param_2 + 4) = 1;
  }
  else if (param_3 < 3) {
    *(char *)((int)param_2 + 4) = (char)param_3;
  }
  else {
    *(undefined1 *)((int)param_2 + 4) = 2;
  }
  uVar5 = DAT_ram_40099f5c;
  fVar4 = DAT_ram_4009672c;
  uVar13 = (ulonglong)(uint)DAT_ram_4009672c;
  uVar11 = (ulonglong)(uint)DAT_ram_4009675c;
  uVar6 = (ulonglong)DAT_ram_40099f30;
  uVar8 = (ulonglong)DAT_ram_40099f38;
  uVar9 = (ulonglong)DAT_ram_40096780;
  uVar10 = (ulonglong)DAT_ram_40099f88;
  bVar1 = fVar2 <= DAT_ram_4009672c;
  param_2[6] = uVar11;
  *(ulonglong *)((int)param_2 + 0x34) = uVar11;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(ulonglong *)((int)param_2 + 0xc) = uVar6;
  *(ulonglong *)((int)param_2 + 0x14) = uVar8;
  param_2[3] = uVar9;
  param_2[4] = uVar13;
  *(ulonglong *)((int)param_2 + 0x24) = uVar10;
  if (bVar1) {
    uVar6 = FUN_ram_40000bd8(DAT_ram_4009f1cc);
    param_2[5] = uVar6;
    fVar12 = (float)param_2[3];
    fVar2 = fVar4;
  }
  else {
    uVar6 = FUN_ram_40000bd8(DAT_ram_40096728 / (fVar2 * DAT_ram_4009f1d0));
    param_2[5] = uVar6;
    fVar12 = (float)param_2[3];
  }
  if (0.0 < fVar12) {
    uVar7 = FUN_ram_40000bd8(DAT_ram_40096728 / (fVar12 * DAT_ram_4009f0ac * fVar2));
    *(undefined8 *)((int)param_2 + 0x2c) = uVar7;
  }
  else {
    *(undefined4 *)((int)param_2 + 0x2c) = 0;
  }
  fVar2 = DAT_ram_4009f1c8;
  if (fVar3 < (float)*param_2) {
    fVar2 = DAT_ram_4009f1c8 / (float)*param_2;
  }
  uVar7 = FUN_ram_40000bd8(fVar2);
  *(undefined1 *)(param_2 + 7) = 1;
  *(undefined8 *)((int)param_2 + 0x44) = uVar7;
  param_2[8] = 0;
  *(bool *)((int)param_2 + 5) = 0.0 < param_1;
  *(undefined4 *)((int)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined8 *)((int)param_2 + 0x4c) = 0;
  param_2[10] = 0;
  *(undefined8 *)((int)param_2 + 0x54) = 0;
  return;
}

