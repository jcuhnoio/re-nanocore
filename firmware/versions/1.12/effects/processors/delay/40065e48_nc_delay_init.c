/* NanoCore 1.12: nc_delay_init at 0x40065e48.
 * Role: Initializes sample rate, external buffers and state
 * REA: ev_845f4e5542f4a00b69fe3664c3fe6e4bd47170a5aeff0cfec20a3af627a95f25
 * Source: analysis/rea-1.12-effects/results/03491-export-0x40065e48.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_delay_init(float param_1,ulonglong *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                     code *param_9)

{
  bool bVar1;
  float fVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float in_register_00000100;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  ulonglong uVar30;
  float fVar31;
  float local_a0;
  float local_9c [3];
  
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  pfVar12 = &local_a0;
  (*param_9)(param_2,0x24c);
  fVar4 = DAT_ram_40099f28;
  fVar29 = DAT_ram_4009672c;
  fVar31 = DAT_ram_4009f338;
  fVar20 = DAT_ram_4009f334;
  fVar21 = DAT_ram_4009678c;
  if (DAT_ram_40099f28 < param_1) {
    fVar20 = (float)FUN_ram_40000844(DAT_ram_4009672c,param_1 * DAT_ram_4009a370);
    fVar21 = (float)FUN_ram_40000844(fVar29,param_1 * DAT_ram_4009f36c);
    fVar31 = fVar29 / fVar20;
    fVar20 = fVar29 / fVar21;
    fVar21 = param_1;
  }
  fVar2 = DAT_ram_40096728;
  uVar30 = (ulonglong)(uint)DAT_ram_40096728;
  uVar27 = (ulonglong)DAT_ram_40099f6c;
  uVar7 = 0xffff;
  if (param_8 < 0x10000) {
    uVar7 = param_8;
  }
  *param_2 = (ulonglong)(uint)fVar21;
  *(float *)(param_2 + 6) = fVar31;
  *(ulonglong *)((int)param_2 + 0x34) = (ulonglong)(uint)fVar20;
  *(undefined4 *)((int)param_2 + 4) = param_3;
  *(undefined4 *)(param_2 + 1) = param_4;
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 2) = param_5;
  *(undefined4 *)((int)param_2 + 0x14) = param_6;
  *(undefined4 *)(param_2 + 3) = 0;
  *(ulonglong *)((int)param_2 + 0x1c) = uVar27;
  *(undefined4 *)(param_2 + 0x45) = param_7;
  *(short *)((int)param_2 + 0x22c) = (short)uVar7;
  *(undefined1 *)(param_2 + 4) = 0;
  *(ulonglong *)((int)param_2 + 0x3c) = uVar30;
  param_2[8] = uVar30;
  *(ulonglong *)((int)param_2 + 0x44) = uVar30;
  param_2[9] = uVar30;
  *(ulonglong *)((int)param_2 + 0x4c) = uVar30;
  param_2[10] = uVar30;
  *(ulonglong *)((int)param_2 + 0x54) = uVar30;
  param_2[0xb] = uVar30;
  *(ulonglong *)((int)param_2 + 0x5c) = uVar30;
  uVar14 = DAT_ram_4009a564;
  puVar3 = PTR_entry_ram_40096740;
  fVar20 = DAT_ram_4009f33c;
  fVar31 = DAT_ram_4009678c;
  if (fVar29 <= fVar21) {
    fVar20 = fVar2 / (fVar21 * DAT_ram_4009f370);
    fVar31 = fVar21;
  }
  *(float *)((int)param_2 + 0xdc) = fVar31;
  *(undefined **)(param_2 + 0x1c) = puVar3;
  *(undefined4 *)((int)param_2 + 0xe4) = uVar14;
  uVar14 = FUN_ram_40000bd8(fVar20);
  fVar24 = DAT_ram_40096728;
  uVar15 = FUN_ram_40000bd8(DAT_ram_40096728 / (fVar31 * DAT_ram_4009f374));
  fVar31 = DAT_ram_4009f28c;
  fVar21 = DAT_ram_4009f090;
  fVar2 = DAT_ram_4009a374;
  fVar13 = (float)*param_2;
  fVar20 = DAT_ram_4009a374 / fVar13;
  *(undefined4 *)((int)param_2 + 0xec) = uVar15;
  *(undefined4 *)(param_2 + 0x1d) = uVar14;
  *(undefined4 *)(param_2 + 0x1e) = 0;
  *(float *)((int)param_2 + 0x114) = fVar13 * fVar31;
  fVar20 = fVar20 * fVar21;
  uVar14 = FUN_ram_400009d2(fVar20);
  *(undefined4 *)(param_2 + 0x21) = uVar14;
  uVar14 = FUN_ram_40000712(fVar20);
  fVar5 = DAT_ram_4009f22c;
  fVar17 = DAT_ram_4009a338;
  *(undefined4 *)((int)param_2 + 0x10c) = uVar14;
  fVar22 = DAT_ram_4009f218;
  fVar16 = DAT_ram_4009f214;
  uVar14 = DAT_ram_4009f20c;
  fVar19 = DAT_ram_40099f50;
  fVar20 = fVar13 * fVar5;
  fVar31 = fVar20;
  if (fVar17 <= fVar20) {
    fVar31 = fVar17;
  }
  fVar17 = fVar20;
  fVar18 = fVar13;
  if (fVar20 < DAT_ram_40099f50) {
    fVar23 = fVar20;
    if (fVar29 <= fVar13) {
      fVar16 = fVar29;
      if (fVar29 <= fVar20) goto LAB_ram_4006601e;
LAB_ram_40066028:
      fVar17 = (fVar16 / fVar18) * fVar21;
      fVar16 = (float)FUN_ram_40000712(fVar17);
      fVar17 = (float)FUN_ram_400009d2(fVar17);
      fVar26 = (fVar16 + fVar29) * (float)DAT_ram_4009675c;
      fVar22 = fVar16 * DAT_ram_40096744;
      fVar25 = -(fVar16 + fVar29);
      fVar16 = fVar17 / DAT_ram_4009f050 + fVar29;
      fVar28 = fVar29 - fVar17 / DAT_ram_4009f050;
      if (fVar16 != 0.0) goto LAB_ram_40066998;
      goto LAB_ram_40066084;
    }
    fVar17 = DAT_ram_4009f1fc._4_4_;
    fVar18 = DAT_ram_4009678c;
    if (fVar29 <= fVar20) {
LAB_ram_4006601e:
      fVar16 = fVar23;
      if (fVar17 < fVar23) {
        fVar16 = fVar17;
      }
      goto LAB_ram_40066028;
    }
    *(undefined4 *)((int)param_2 + 0xa4) = DAT_ram_4009f20c;
    *(float *)(param_2 + 0x15) = fVar22;
    *(undefined4 *)((int)param_2 + 0xac) = uVar14;
    *(float *)(param_2 + 0x16) = fVar22;
    *(float *)((int)param_2 + 0xb4) = fVar16;
LAB_ram_4006694c:
    if (fVar31 < fVar29) {
      fVar16 = 0.0;
      fVar22 = DAT_ram_4009f218;
      fVar17 = DAT_ram_4009f214;
      fVar20 = 0.0;
    }
    else {
      fVar18 = fVar31;
      fVar16 = DAT_ram_4009f228;
      fVar22 = DAT_ram_4009f220;
      fVar17 = DAT_ram_4009f21c;
      fVar23 = DAT_ram_4009678c;
      fVar20 = DAT_ram_4009f224;
      if (fVar31 <= DAT_ram_4009f1fc._4_4_) goto LAB_ram_400660b4;
    }
  }
  else {
    fVar22 = DAT_ram_4009f344;
    fVar16 = DAT_ram_4009f348;
    fVar28 = DAT_ram_4009f340;
    fVar26 = DAT_ram_4009f350;
    fVar25 = DAT_ram_4009f34c;
    fVar23 = DAT_ram_40099f50;
    if (fVar29 <= fVar13) goto LAB_ram_4006601e;
LAB_ram_40066998:
    fVar16 = fVar29 / fVar16;
    fVar26 = fVar26 * fVar16;
    fVar25 = fVar25 * fVar16;
    fVar22 = fVar22 * fVar16;
    fVar28 = fVar28 * fVar16;
LAB_ram_40066084:
    *(float *)((int)param_2 + 0xa4) = fVar26;
    *(float *)(param_2 + 0x15) = fVar25;
    *(float *)((int)param_2 + 0xac) = fVar26;
    *(float *)(param_2 + 0x16) = fVar22;
    *(float *)((int)param_2 + 0xb4) = fVar28;
    if (fVar13 < fVar29) goto LAB_ram_4006694c;
    fVar18 = fVar29;
    fVar23 = fVar13;
    if ((fVar29 <= fVar31) && (fVar18 = fVar31, fVar20 < fVar31)) {
      fVar18 = fVar20;
    }
LAB_ram_400660b4:
    fVar20 = (fVar18 / fVar23) * fVar21;
    fVar18 = (float)FUN_ram_40000712(fVar20);
    fVar17 = (float)FUN_ram_400009d2(fVar20);
    fVar20 = fVar29 - fVar18;
    fVar31 = fVar17 / DAT_ram_4009f050 + fVar29;
    fVar17 = fVar29 - fVar17 / DAT_ram_4009f050;
    fVar16 = fVar20 * (float)DAT_ram_4009675c;
    fVar22 = fVar18 * DAT_ram_40096744;
    if (fVar31 != 0.0) {
      fVar31 = fVar29 / fVar31;
      fVar16 = fVar20 * (float)DAT_ram_4009675c * fVar31;
      fVar22 = fVar18 * DAT_ram_40096744 * fVar31;
      fVar17 = fVar17 * fVar31;
      fVar20 = fVar20 * fVar31;
    }
  }
  fVar31 = DAT_ram_4009672c;
  bVar1 = DAT_ram_4009672c <= fVar13;
  *(float *)(param_2 + 0x18) = fVar16;
  *(float *)((int)param_2 + 0xc4) = fVar20;
  *(float *)(param_2 + 0x19) = fVar16;
  *(float *)((int)param_2 + 0xcc) = fVar22;
  *(float *)(param_2 + 0x1a) = fVar17;
  *(float *)(param_2 + 0x24) = fVar31;
  *(int *)((int)param_2 + 0x124) = (int)param_2[0x22];
  *(int *)(param_2 + 0x25) = (int)param_2[0x23];
  *(undefined4 *)((int)param_2 + 300) = *(undefined4 *)((int)param_2 + 0x11c);
  *(float *)(param_2 + 0x26) = fVar31;
  *(undefined1 *)((int)param_2 + 0x134) = 1;
  uVar14 = DAT_ram_4009a380;
  puVar3 = PTR_entry_ram_40096740;
  fVar20 = DAT_ram_4009f33c;
  fVar31 = DAT_ram_4009678c;
  if (bVar1) {
    fVar20 = fVar24 / (fVar13 * DAT_ram_4009f370);
    fVar31 = fVar13;
  }
  *(float *)(param_2 + 0x2e) = fVar31;
  *(undefined **)((int)param_2 + 0x174) = puVar3;
  *(undefined4 *)(param_2 + 0x2f) = uVar14;
  uVar14 = FUN_ram_40000bd8(fVar20);
  uVar15 = FUN_ram_40000bd8(fVar24 / (fVar31 * DAT_ram_4009f378));
  *(undefined4 *)((int)param_2 + 0x17c) = uVar14;
  *(undefined4 *)(param_2 + 0x30) = uVar15;
  fVar18 = (float)*param_2;
  *(undefined4 *)((int)param_2 + 0x184) = 0;
  fVar17 = DAT_ram_4009f218;
  fVar31 = DAT_ram_4009f214;
  uVar14 = DAT_ram_4009f20c;
  fVar20 = DAT_ram_4009f234;
  fVar16 = DAT_ram_4009678c;
  fVar22 = DAT_ram_4009678c;
  fVar13 = fVar19;
  if (fVar18 < fVar4) {
LAB_ram_4006671c:
    fVar31 = (fVar13 / fVar22) * fVar21;
    fVar22 = (float)FUN_ram_40000712(fVar31);
    fVar23 = (float)FUN_ram_400009d2(fVar31);
    fVar13 = (fVar22 + fVar29) * (float)DAT_ram_4009675c;
    fVar17 = fVar22 * DAT_ram_40096744;
    fVar25 = -(fVar22 + fVar29);
    fVar31 = fVar23 / DAT_ram_4009f050 + fVar29;
    fVar28 = fVar29 - fVar23 / DAT_ram_4009f050;
    if (fVar31 != 0.0) {
LAB_ram_40066b68:
      fVar31 = fVar29 / fVar31;
      fVar13 = fVar13 * fVar31;
      fVar25 = fVar25 * fVar31;
      fVar17 = fVar17 * fVar31;
      fVar28 = fVar28 * fVar31;
    }
    *(float *)(param_2 + 0x27) = fVar13;
    *(float *)((int)param_2 + 0x13c) = fVar25;
    *(float *)(param_2 + 0x28) = fVar13;
    *(float *)((int)param_2 + 0x144) = fVar17;
    *(float *)(param_2 + 0x29) = fVar28;
    if (fVar16 < fVar29) goto LAB_ram_40066226;
    fVar31 = fVar29;
    if ((fVar29 <= fVar20) && (fVar31 = fVar20, fVar16 * fVar5 < fVar20)) {
      fVar31 = fVar16 * fVar5;
    }
LAB_ram_40066246:
    fVar20 = (fVar31 / fVar16) * fVar21;
    fVar16 = (float)FUN_ram_40000712(fVar20);
    fVar17 = (float)FUN_ram_400009d2(fVar20);
    fVar31 = fVar29 - fVar16;
    fVar20 = fVar17 / DAT_ram_4009f050 + fVar29;
    fVar17 = fVar29 - fVar17 / DAT_ram_4009f050;
    fVar22 = fVar16 * DAT_ram_40096744;
    fVar13 = fVar31;
    fVar23 = fVar31 * (float)DAT_ram_4009675c;
    if (fVar20 != 0.0) {
      fVar20 = fVar29 / fVar20;
      fVar22 = fVar16 * DAT_ram_40096744 * fVar20;
      fVar17 = fVar17 * fVar20;
      fVar13 = fVar31 * fVar20;
      fVar23 = fVar31 * (float)DAT_ram_4009675c * fVar20;
    }
  }
  else {
    fVar23 = fVar18 * fVar5;
    fVar20 = fVar23;
    if (DAT_ram_4009f234 <= fVar23) {
      fVar20 = DAT_ram_4009f234;
    }
    fVar16 = fVar18;
    fVar22 = fVar18;
    fVar26 = fVar23;
    if (fVar19 <= fVar23) {
      fVar17 = DAT_ram_4009f344;
      fVar31 = DAT_ram_4009f348;
      fVar13 = DAT_ram_4009f350;
      fVar25 = DAT_ram_4009f34c;
      fVar28 = DAT_ram_4009f340;
      fVar23 = fVar19;
      if (fVar29 <= fVar18) goto LAB_ram_40066bda;
      goto LAB_ram_40066b68;
    }
    if (fVar29 <= fVar18) {
      fVar13 = fVar29;
      if (fVar23 < fVar29) goto LAB_ram_4006671c;
LAB_ram_40066bda:
      fVar13 = fVar26;
      if (fVar23 <= fVar26) {
        fVar13 = fVar23;
      }
      goto LAB_ram_4006671c;
    }
    fVar22 = DAT_ram_4009678c;
    fVar26 = DAT_ram_4009f1fc._4_4_;
    if (fVar29 <= fVar23) goto LAB_ram_40066bda;
    *(undefined4 *)(param_2 + 0x27) = DAT_ram_4009f20c;
    *(float *)((int)param_2 + 0x13c) = fVar17;
    *(undefined4 *)(param_2 + 0x28) = uVar14;
    *(float *)((int)param_2 + 0x144) = fVar17;
    *(float *)(param_2 + 0x29) = fVar31;
LAB_ram_40066226:
    if (fVar20 < fVar29) {
      fVar22 = DAT_ram_4009f218;
      fVar17 = DAT_ram_4009f214;
      fVar13 = 0.0;
      fVar23 = 0.0;
    }
    else {
      fVar31 = fVar20;
      fVar16 = DAT_ram_4009678c;
      fVar22 = DAT_ram_4009f220;
      fVar17 = DAT_ram_4009f21c;
      fVar13 = DAT_ram_4009f224;
      fVar23 = DAT_ram_4009f228;
      if (fVar20 <= DAT_ram_4009f1fc._4_4_) goto LAB_ram_40066246;
    }
  }
  *(float *)((int)param_2 + 0x154) = fVar23;
  *(float *)(param_2 + 0x2b) = fVar13;
  *(float *)((int)param_2 + 0x15c) = fVar23;
  *(float *)(param_2 + 0x2c) = fVar22;
  *(float *)((int)param_2 + 0x164) = fVar17;
  fVar20 = DAT_ram_4009f354;
  fVar16 = DAT_ram_4009f0ac;
  fVar17 = DAT_ram_4009678c;
  fVar31 = DAT_ram_4009672c;
  if (fVar18 < fVar4) {
    *(undefined4 *)((int)param_2 + 0x1cc) = DAT_ram_4009f39c;
    *(float *)(param_2 + 0x3a) = fVar31;
  }
  else {
    fVar20 = fVar18 * fVar5;
    if ((float)DAT_ram_4009675c <= fVar18 * fVar5) {
      fVar20 = (float)DAT_ram_4009675c;
    }
    fVar20 = (fVar20 / fVar18) * fVar21;
    uVar14 = FUN_ram_400009d2(fVar20);
    *(undefined4 *)((int)param_2 + 0x1cc) = uVar14;
    uVar14 = FUN_ram_40000712(fVar20);
    fVar20 = DAT_ram_40099f7c;
    *(undefined4 *)(param_2 + 0x3a) = uVar14;
    fVar20 = fVar24 / (fVar18 * fVar20 * DAT_ram_4009f0ac);
    fVar16 = DAT_ram_4009f0ac;
    fVar17 = fVar18;
  }
  uVar14 = FUN_ram_40000bd8(fVar20);
  uVar15 = FUN_ram_40000bd8(fVar24 / (fVar17 * DAT_ram_4009a33c * fVar16));
  fVar31 = DAT_ram_4009f37c;
  fVar20 = DAT_ram_4009672c;
  *(undefined4 *)(param_2 + 0x3c) = uVar14;
  *(undefined4 *)((int)param_2 + 0x1e4) = uVar15;
  *(float *)((int)param_2 + 0x1d4) = fVar20;
  uVar14 = FUN_ram_40000bd8(fVar31 / (float)*param_2);
  *(undefined4 *)(param_2 + 0x41) = uVar14;
  if ((int)param_2[0x45] == 0) {
    fVar20 = (float)*param_2;
LAB_ram_400667b0:
    *(undefined4 *)(param_2 + 0x44) = DAT_ram_4009f290;
LAB_ram_400667be:
    fVar31 = 0.0;
    uVar14 = 0;
    fVar24 = fVar29;
LAB_ram_400667ca:
    *(float *)((int)param_2 + 0x214) = fVar31;
    *(undefined4 *)(param_2 + 0x43) = uVar14;
    *(float *)((int)param_2 + 0x21c) = fVar24;
    if ((int)param_2[2] == 0) goto LAB_ram_4006644c;
LAB_ram_400667dc:
    if (*(uint *)((int)param_2 + 0x14) < 0x10) goto LAB_ram_4006644c;
    if (fVar20 < fVar4) {
      fVar20 = DAT_ram_4009678c;
    }
    local_a0 = DAT_ram_4009f380;
    local_9c[0] = (float)DAT_ram_4009f384;
    local_9c[1] = (float)DAT_ram_4009f388;
    local_9c[2] = (float)DAT_ram_4009f38c;
    puVar6 = (undefined2 *)((int)param_2 + 0x242);
    uVar7 = 0;
    do {
      iVar8 = FUN_ram_40000902(*pfVar12 * fVar16 * fVar20);
      if (0 < iVar8) goto LAB_ram_4006683c;
      while( true ) {
        iVar8 = 1;
LAB_ram_4006683c:
        uVar11 = *(uint *)((int)param_2 + 0x14);
        *puVar6 = 0;
        uVar9 = iVar8 + uVar7;
        if (uVar11 < iVar8 + uVar7) break;
        while( true ) {
          uVar7 = uVar9;
          puVar6[-4] = (short)iVar8;
          puVar6 = puVar6 + 1;
          pfVar12 = pfVar12 + 1;
          if ((undefined2 *)((int)param_2 + 0x24a) == puVar6) goto LAB_ram_40066888;
          iVar8 = FUN_ram_40000902(*pfVar12 * fVar16 * fVar20);
          if (iVar8 < 1) break;
          uVar11 = *(uint *)((int)param_2 + 0x14);
          *puVar6 = 0;
          uVar9 = iVar8 + uVar7;
          if (uVar11 < iVar8 + uVar7) goto LAB_ram_4006687a;
        }
      }
LAB_ram_4006687a:
      puVar6[-4] = 0;
      puVar6 = puVar6 + 1;
      pfVar12 = pfVar12 + 1;
    } while ((undefined2 *)((int)param_2 + 0x24a) != puVar6);
LAB_ram_40066888:
    if (uVar7 != 0) {
      (*param_9)((int)param_2[2],uVar7 << 2);
    }
    fVar20 = (float)*param_2;
    if (fVar29 <= fVar20) goto LAB_ram_40066454;
LAB_ram_4006689a:
    uVar14 = FUN_ram_40000bd8(DAT_ram_4009f35c);
    *(undefined4 *)(param_2 + 0x14) = uVar14;
    fVar20 = (float)*param_2;
    if (fVar4 < fVar20) goto LAB_ram_40066482;
LAB_ram_400668b4:
    uVar14 = DAT_ram_40099f90;
    uVar27 = (ulonglong)(uint)DAT_ram_4009672c;
    uVar30 = (ulonglong)DAT_ram_40099f6c;
    bVar1 = (float)*(undefined8 *)((int)param_2 + 0x3c) == DAT_ram_4009f308;
    *(float *)((int)param_2 + 0x94) = DAT_ram_4009672c;
    *(undefined4 *)(param_2 + 0x13) = uVar14;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar30;
    fVar20 = DAT_ram_4009678c;
    if (bVar1) goto LAB_ram_400664e8;
    uVar7 = (uint)param_2[1];
    if (1 < uVar7) {
      uVar27 = (ulonglong)DAT_ram_4009f360;
      goto LAB_ram_400664cc;
    }
LAB_ram_400664dc:
    uVar30 = (ulonglong)(uint)DAT_ram_4009f308;
    param_2[0xe] = uVar27;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar30;
  }
  else {
    fVar20 = (float)*param_2;
    if (*(ushort *)((int)param_2 + 0x22c) < 0x44) goto LAB_ram_400667b0;
    fVar31 = DAT_ram_4009f358;
    if (fVar4 <= fVar20) {
      fVar31 = fVar20 * in_register_00000100;
    }
    uVar7 = FUN_ram_40000902(fVar31);
    uVar9 = (uint)*(ushort *)((int)param_2 + 0x22c);
    if ((int)uVar7 < 0x40) {
      uVar7 = 0x40;
    }
    if ((int)uVar7 < (int)(uVar9 - 3)) {
      uVar11 = uVar7 + 4;
      if ((int)uVar9 < (int)(uVar7 + 4)) {
        uVar11 = uVar9;
      }
      uVar11 = uVar11 & 0xffff;
    }
    else {
      uVar7 = uVar9 - 4;
      uVar11 = uVar9;
    }
    uVar10 = uVar7 & 0xffff;
    if ((uVar10 != (ushort)param_2[0x44]) || (*(ushort *)((int)param_2 + 0x222) != uVar11)) {
      *(uint *)(param_2 + 0x44) = uVar11 << 0x10 | uVar7 & 0xffff;
      if (((int)param_2[0x45] != 0) && (uVar9 != 0)) {
        (*param_9)((int)param_2[0x45],uVar9 << 2);
        uVar10 = (uint)(ushort)param_2[0x44];
      }
      *(undefined2 *)((int)param_2 + 0x224) = 0;
      *(undefined4 *)(param_2 + 0x42) = 0;
      *(undefined4 *)((int)param_2 + 0x20c) = 0;
    }
    fVar24 = DAT_ram_4009f278;
    fVar31 = DAT_ram_4009f270;
    fVar20 = (float)*param_2;
    if (uVar10 == 0) goto LAB_ram_400667be;
    fVar17 = 0.0 / (float)uVar10;
    if (DAT_ram_4009f278 <= fVar17) {
      fVar31 = fVar5;
      uVar14 = DAT_ram_4009f27c;
      fVar24 = DAT_ram_4009f270;
      if (fVar17 <= fVar5) {
        uVar14 = FUN_ram_400009d2(fVar17 * fVar21);
        fVar24 = (float)FUN_ram_40000712(fVar17 * fVar21);
        fVar31 = fVar17;
      }
      goto LAB_ram_400667ca;
    }
    *(undefined4 *)(param_2 + 0x43) = DAT_ram_4009f274;
    *(float *)((int)param_2 + 0x214) = fVar24;
    *(float *)((int)param_2 + 0x21c) = fVar31;
    if ((int)param_2[2] != 0) goto LAB_ram_400667dc;
LAB_ram_4006644c:
    if (fVar20 < fVar29) goto LAB_ram_4006689a;
LAB_ram_40066454:
    fVar31 = DAT_ram_4009f390;
    if (fVar20 * fVar5 < fVar19) {
      fVar31 = fVar20 * fVar5 * DAT_ram_4009f0b4;
    }
    uVar14 = FUN_ram_40000bd8(fVar31 / fVar20);
    *(undefined4 *)(param_2 + 0x14) = uVar14;
    fVar20 = (float)*param_2;
    if (fVar20 <= fVar4) goto LAB_ram_400668b4;
LAB_ram_40066482:
    uVar14 = DAT_ram_40099f90;
    fVar31 = DAT_ram_4009672c;
    uVar27 = (ulonglong)DAT_ram_40099f6c;
    bVar1 = (float)*(undefined8 *)((int)param_2 + 0x3c) != DAT_ram_4009f308;
    *(float *)((int)param_2 + 0x94) = DAT_ram_4009672c;
    *(undefined4 *)(param_2 + 0x13) = uVar14;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar27;
    if (bVar1) {
      uVar7 = (uint)param_2[1];
      uVar27 = (ulonglong)(uint)(fVar20 * DAT_ram_4009f394);
      if (fVar31 <= fVar20 * DAT_ram_4009f394) {
        if (1 < uVar7) goto LAB_ram_400664cc;
      }
      else {
        uVar27 = (ulonglong)(uint)fVar31;
        if (uVar7 < 2) goto LAB_ram_400664dc;
LAB_ram_400664cc:
        fVar31 = (float)(uVar7 - 2);
      }
      if (fVar31 < (float)uVar27) {
        uVar27 = (ulonglong)(uint)fVar31;
      }
      goto LAB_ram_400664dc;
    }
  }
LAB_ram_400664e8:
  if ((float)param_2[8] != DAT_ram_4009f304) {
    uVar27 = (ulonglong)DAT_ram_4009f398;
    param_2[8] = (ulonglong)(uint)DAT_ram_4009f304;
    *(ulonglong *)((int)param_2 + 0x74) = uVar27;
  }
  if ((float)*(undefined8 *)((int)param_2 + 0x44) == DAT_ram_4009b144) goto LAB_ram_4006655a;
  fVar31 = fVar20 * fVar5;
  if (fVar31 < DAT_ram_4009f364) {
    if (fVar20 < fVar29) {
      fVar24 = DAT_ram_4009f1fc._4_4_;
      fVar20 = DAT_ram_4009678c;
      if (fVar29 <= fVar31) goto LAB_ram_40066530;
    }
    else if (fVar29 <= fVar31) goto LAB_ram_40066c40;
    fVar19 = DAT_ram_4009f0b4 / fVar20;
  }
  else {
    fVar24 = fVar31;
    fVar31 = DAT_ram_4009f364;
    fVar19 = DAT_ram_4009f368;
    if (fVar29 <= fVar20) {
LAB_ram_40066530:
      if (fVar31 <= fVar24) {
LAB_ram_40066c40:
        fVar19 = (fVar31 * DAT_ram_4009f0b4) / fVar20;
      }
      else {
        fVar19 = (fVar24 * DAT_ram_4009f0b4) / fVar20;
      }
    }
  }
  uVar14 = FUN_ram_40000bd8(fVar19);
  uVar27 = (ulonglong)(uint)DAT_ram_4009b144;
  *(undefined4 *)((int)param_2 + 0x9c) = uVar14;
  *(ulonglong *)((int)param_2 + 0x44) = uVar27;
LAB_ram_4006655a:
  fVar20 = DAT_ram_4009f2dc;
  uVar27 = (ulonglong)(uint)DAT_ram_4009f2dc;
  if ((float)param_2[9] == DAT_ram_4009f2dc) {
    fVar20 = (float)param_2[0xf];
  }
  else {
    param_2[0xf] = uVar27;
    param_2[9] = uVar27;
  }
  if ((float)*(undefined8 *)((int)param_2 + 0x4c) == fVar29) {
    fVar29 = (float)*(undefined8 *)((int)param_2 + 0x7c);
  }
  else {
    *(ulonglong *)((int)param_2 + 0x7c) = (ulonglong)(uint)fVar29;
    *(ulonglong *)((int)param_2 + 0x4c) = (ulonglong)(uint)fVar29;
  }
  *(int *)(param_2 + 0x10) = (int)param_2[0xe];
  *(int *)((int)param_2 + 0x84) = (int)*(undefined8 *)((int)param_2 + 0x74);
  *(float *)(param_2 + 0x11) = fVar20;
  *(float *)((int)param_2 + 0x8c) = fVar29;
  *(undefined1 *)(param_2 + 0x12) = 1;
  if ((*(int *)((int)param_2 + 4) != 0) && ((int)param_2[1] != 0)) {
    (*param_9)(*(int *)((int)param_2 + 4),(int)param_2[1] << 2);
  }
  uVar27 = (ulonglong)(uint)DAT_ram_4009672c;
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(ulonglong *)((int)param_2 + 0x2c) = uVar27;
  *(undefined2 *)(param_2 + 7) = 0;
  *(undefined1 *)((int)param_2 + 0x3a) = 1;
  if (((int)param_2[2] != 0) && (*(int *)((int)param_2 + 0x14) != 0)) {
    (*param_9)((int)param_2[2],*(int *)((int)param_2 + 0x14) << 2);
  }
  fVar20 = DAT_ram_4009672c;
  *(undefined4 *)((int)param_2 + 0xfc) = 0x12345678;
  *(undefined4 *)(param_2 + 0x32) = 0x87654321;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)((int)param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  *(undefined4 *)((int)param_2 + 0x6c) = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  *(undefined4 *)((int)param_2 + 0xbc) = 0;
  *(undefined4 *)((int)param_2 + 0xd4) = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  *(undefined4 *)(param_2 + 0x1e) = 0;
  *(undefined4 *)((int)param_2 + 0xf4) = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(float *)((int)param_2 + 0x104) = fVar20;
  *(undefined1 *)((int)param_2 + 0x134) = 0;
  *(float *)(param_2 + 0x24) = fVar20;
  *(undefined4 *)((int)param_2 + 0x14c) = 0;
  *(undefined4 *)(param_2 + 0x2a) = 0;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  *(undefined4 *)((int)param_2 + 0x16c) = 0;
  *(undefined4 *)((int)param_2 + 0x184) = 0;
  *(undefined4 *)(param_2 + 0x31) = 0;
  *(undefined4 *)((int)param_2 + 0x18c) = 0;
  *(float *)((int)param_2 + 0x194) = fVar20;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined4 *)((int)param_2 + 0x19c) = 0;
  *(float *)(param_2 + 0x34) = fVar20;
  *(undefined4 *)((int)param_2 + 0x1a4) = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  *(float *)((int)param_2 + 0x1ac) = fVar20;
  *(undefined4 *)(param_2 + 0x36) = 0;
  fVar29 = (float)*param_2;
  *(undefined4 *)((int)param_2 + 0x1b4) = 0;
  *(float *)(param_2 + 0x37) = fVar20;
  *(undefined4 *)((int)param_2 + 0x1bc) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)((int)param_2 + 0x1c4) = 0;
  *(float *)(param_2 + 0x39) = fVar20;
  uVar14 = DAT_ram_4009f294;
  if (fVar4 <= fVar29) {
    if (fVar29 * fVar5 < fVar2) {
      fVar2 = fVar29 * fVar5;
    }
    fVar21 = (fVar2 / fVar29) * fVar21;
    uVar14 = FUN_ram_400009d2(fVar21);
    fVar20 = (float)FUN_ram_40000712(fVar21);
  }
  fVar21 = DAT_ram_4009672c;
  *(undefined4 *)((int)param_2 + 0x1cc) = uVar14;
  *(float *)(param_2 + 0x3a) = fVar20;
  *(float *)((int)param_2 + 0x1d4) = fVar21;
  *(undefined4 *)(param_2 + 0x3d) = 0;
  *(undefined4 *)((int)param_2 + 0x1ec) = 0;
  *(undefined4 *)(param_2 + 0x46) = 0;
  *(undefined4 *)((int)param_2 + 0x234) = 0;
  *(undefined2 *)(param_2 + 0x47) = 0;
  if (*(short *)((int)param_2 + 0x222) == 0) {
    *(undefined2 *)((int)param_2 + 0x222) = 0x44;
  }
  if ((short)param_2[0x44] == 0) {
    *(undefined2 *)(param_2 + 0x44) = 0x40;
  }
  if (((int)param_2[0x45] != 0) && (*(ushort *)((int)param_2 + 0x22c) != 0)) {
    (*param_9)((int)param_2[0x45],(uint)*(ushort *)((int)param_2 + 0x22c) << 2);
  }
  uVar27 = (ulonglong)(uint)DAT_ram_40096728;
  *(undefined1 *)((int)param_2 + 0x24a) = 0;
  *(undefined2 *)((int)param_2 + 0x224) = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((int)param_2 + 0x20c) = 0;
  *(ulonglong *)((int)param_2 + 0x3c) = uVar27;
  param_2[8] = uVar27;
  *(ulonglong *)((int)param_2 + 0x44) = uVar27;
  param_2[9] = uVar27;
  *(ulonglong *)((int)param_2 + 0x4c) = uVar27;
  param_2[10] = uVar27;
  *(ulonglong *)((int)param_2 + 0x54) = uVar27;
  param_2[0xb] = uVar27;
  *(ulonglong *)((int)param_2 + 0x5c) = uVar27;
  *(undefined2 *)((int)param_2 + 0x242) = 0;
  *(undefined4 *)((int)param_2 + 0x244) = 0;
  *(undefined2 *)(param_2 + 0x49) = 0;
  return;
}

