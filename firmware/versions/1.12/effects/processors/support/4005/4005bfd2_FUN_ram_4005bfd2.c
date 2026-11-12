/* NanoCore 1.12: FUN_ram_4005bfd2 at 0x4005bfd2.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_97b385125cdeebbfa8cbd71f3ac501863aaacc93d7b1391eefb56620c26dc675
 * Source: analysis/rea-1.12-effects/results/03456-export-0x4005bfd2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_4005bfd2(ulonglong param_1,ulonglong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  float in_register_00000100;
  float fVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar12 = DAT_ram_4009f030;
  fVar11 = DAT_ram_4009f02c;
  fVar14 = DAT_ram_4009f028;
  fVar13 = DAT_ram_4009f024;
  fVar23 = DAT_ram_4009672c;
  if (param_2 != (ulonglong *)0x0) {
    fVar15 = (float)param_1;
    fVar21 = fVar23;
    if (fVar15 <= 0.0) {
      uVar10 = (ulonglong)DAT_ram_4009f018;
      uVar17 = (ulonglong)DAT_ram_4009f01c;
      uVar20 = (ulonglong)DAT_ram_4009f020;
      *param_2 = (ulonglong)DAT_ram_4009678c;
      *(undefined4 *)(param_2 + 0xb) = 0;
      *(undefined4 *)((int)param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((int)param_2 + 0x1c) = 0;
      *(undefined4 *)((int)param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      *(undefined4 *)(param_2 + 10) = 0;
      *(undefined4 *)((int)param_2 + 0x54) = 0;
      uVar18 = uVar17;
      uVar19 = uVar10;
      fVar15 = fVar12;
      fVar22 = fVar11;
    }
    else {
      *param_2 = param_1;
      *(undefined4 *)(param_2 + 0xb) = 0;
      *(undefined4 *)((int)param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((int)param_2 + 0x1c) = 0;
      *(undefined4 *)((int)param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      *(undefined4 *)(param_2 + 10) = 0;
      *(undefined4 *)((int)param_2 + 0x54) = 0;
      if (fVar23 <= fVar15) {
        fVar12 = DAT_ram_4009f04c / fVar15;
        fVar11 = (float)FUN_ram_400009d2(fVar12);
        fVar12 = (float)FUN_ram_40000712(fVar12);
        puVar8 = PTR_entry_ram_40096740;
        fVar11 = fVar11 / DAT_ram_4009f050;
        fVar14 = fVar12 * 0.0 + (float)PTR_entry_ram_40096740;
        fVar4 = -(fVar12 * 0.0) + (float)PTR_entry_ram_40096740;
        fVar5 = -(fVar12 * (float)PTR_entry_ram_40096740) + 0.0;
        fVar15 = DAT_ram_4009f054 / fVar15;
        fVar2 = fVar11 * (float)PTR_entry_ram_40096740;
        fVar3 = fVar11 * (float)PTR_entry_ram_40096740;
        fVar22 = fVar23 / (fVar11 * (float)PTR_entry_ram_40096740 + fVar14);
        fVar12 = (fVar12 * (float)PTR_entry_ram_40096740 + 0.0) * DAT_ram_40096744 * fVar22;
        fVar11 = (-(fVar11 * (float)PTR_entry_ram_40096740) + fVar14) * fVar22;
        fVar9 = in_register_00000100;
        fVar13 = (float)FUN_ram_400009d2(fVar15);
        fVar14 = (float)FUN_ram_40000712(fVar15);
        fVar21 = fVar13 / DAT_ram_4009f058 + fVar23;
        fVar1 = fVar23 / fVar21;
        fVar14 = fVar14 * in_register_00000100 * fVar1;
        fVar13 = (fVar23 - fVar13 / DAT_ram_4009f058) * fVar1;
        fVar15 = (float)FUN_ram_400009d2(fVar9);
        fVar16 = (float)FUN_ram_40000712(fVar9);
        fVar6 = -(fVar16 * 0.0) + (float)puVar8;
        fVar9 = fVar16 * 0.0 + (float)puVar8;
        fVar15 = fVar15 / in_register_00000100;
        fVar7 = -(fVar16 * (float)puVar8) + 0.0;
        fVar23 = fVar23 / (fVar15 * (float)puVar8 + fVar6);
        uVar20 = (ulonglong)(uint)((fVar15 * (float)puVar8 + fVar9) * fVar23);
        uVar17 = (ulonglong)(uint)((fVar7 + fVar7) * fVar23);
        uVar10 = (ulonglong)(uint)((-(fVar15 * (float)puVar8) + fVar6) * fVar23);
        uVar18 = (ulonglong)(uint)((fVar16 * (float)puVar8 + 0.0) * in_register_00000100 * fVar23);
        uVar19 = (ulonglong)(uint)((-(fVar15 * (float)puVar8) + fVar9) * fVar23);
        fVar23 = (fVar2 + fVar4) * fVar22;
        fVar15 = (fVar5 + fVar5) * fVar22;
        fVar22 = (-fVar3 + fVar4) * fVar22;
        fVar21 = fVar21 * fVar1;
      }
      else {
        uVar20 = (ulonglong)(uint)fVar23;
        uVar17 = (ulonglong)DAT_ram_4009f038;
        uVar10 = (ulonglong)DAT_ram_4009f034;
        uVar18 = uVar17;
        uVar19 = uVar10;
        fVar11 = DAT_ram_4009f044;
        fVar12 = DAT_ram_4009f048;
        fVar13 = DAT_ram_4009f03c;
        fVar14 = DAT_ram_4009f040;
        fVar15 = DAT_ram_4009f048;
        fVar22 = DAT_ram_4009f044;
      }
    }
    *(float *)((int)param_2 + 4) = fVar23;
    *(float *)(param_2 + 1) = fVar15;
    *(float *)((int)param_2 + 0xc) = fVar22;
    *(float *)(param_2 + 2) = fVar12;
    *(float *)((int)param_2 + 0x14) = fVar11;
    *(float *)(param_2 + 4) = fVar21;
    *(float *)((int)param_2 + 0x24) = fVar14;
    *(float *)(param_2 + 5) = fVar13;
    *(float *)((int)param_2 + 0x2c) = fVar14;
    *(float *)(param_2 + 6) = fVar13;
    *(ulonglong *)((int)param_2 + 0x4c) = uVar10;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar20;
    param_2[8] = uVar18;
    *(ulonglong *)((int)param_2 + 0x44) = uVar19;
    param_2[9] = uVar17;
    return;
  }
  return;
}

