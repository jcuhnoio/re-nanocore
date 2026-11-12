/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40060000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400600f2.
 * REA evidence: ev_9a9fbeb946c5fdac59ab11697c882f551cb1d8175a75cd9d7a671c7fef6111c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400600f2(float param_1,ulonglong *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

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
  float *pfVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  float fVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  ulonglong uVar33;
  float local_a0;
  float local_9c [3];
  
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  memset(param_2,0,0x6240);
  fVar4 = DAT_ram_40093094;
  fVar22 = DAT_ram_40092878;
  fVar21 = DAT_ram_4009281c;
  if (DAT_ram_40093094 < param_1) {
    fVar22 = (float)FUN_ram_400008b8(DAT_ram_4009281c,param_1 * DAT_ram_400934d4);
    fVar23 = (float)FUN_ram_400008b8(fVar21,param_1 * DAT_ram_40098330);
    uVar27 = (ulonglong)(uint)DAT_ram_40092818;
    uVar25 = (ulonglong)DAT_ram_400930d8;
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined4 *)((int)param_2 + 4) = param_3;
    *(undefined4 *)(param_2 + 1) = param_4;
    *(undefined4 *)(param_2 + 2) = param_5;
    *(undefined4 *)((int)param_2 + 0x14) = param_6;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar25;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar27;
    param_2[8] = uVar27;
    *(ulonglong *)((int)param_2 + 0x44) = uVar27;
    param_2[9] = uVar27;
    *(ulonglong *)((int)param_2 + 0x4c) = uVar27;
    param_2[10] = uVar27;
    *(float *)(param_2 + 6) = fVar21 / fVar22;
    *(ulonglong *)((int)param_2 + 0x34) = (ulonglong)(uint)(fVar21 / fVar23);
    fVar22 = DAT_ram_400982f0;
    fVar23 = DAT_ram_40092878;
    if (fVar21 <= param_1) goto LAB_ram_400601ac;
  }
  else {
    uVar33 = (ulonglong)(uint)DAT_ram_40092818;
    uVar25 = (ulonglong)DAT_ram_4009836c;
    uVar27 = (ulonglong)DAT_ram_40098370;
    uVar30 = (ulonglong)DAT_ram_400930d8;
    *param_2 = (ulonglong)(uint)DAT_ram_40092878;
    param_2[6] = uVar25;
    *(ulonglong *)((int)param_2 + 0x34) = uVar27;
    *(undefined4 *)((int)param_2 + 4) = param_3;
    *(undefined4 *)(param_2 + 1) = param_4;
    *(undefined4 *)(param_2 + 2) = param_5;
    *(undefined4 *)((int)param_2 + 0x14) = param_6;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar30;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar33;
    param_2[8] = uVar33;
    *(ulonglong *)((int)param_2 + 0x44) = uVar33;
    param_2[9] = uVar33;
    *(ulonglong *)((int)param_2 + 0x4c) = uVar33;
    param_2[10] = uVar33;
    param_1 = fVar22;
LAB_ram_400601ac:
    fVar22 = DAT_ram_40092818 / (param_1 * DAT_ram_40098334);
    fVar23 = param_1;
  }
  uVar12 = DAT_ram_400936e0;
  puVar3 = PTR_firmware_entry_ram_40092830;
  fVar28 = DAT_ram_40092818;
  *(float *)(param_2 + 0x1a) = fVar23;
  *(undefined **)((int)param_2 + 0xd4) = puVar3;
  *(undefined4 *)(param_2 + 0x1b) = uVar12;
  uVar12 = FUN_ram_40000c0e(fVar22);
  uVar13 = FUN_ram_40000c0e(fVar28 / (fVar23 * DAT_ram_40098338));
  fVar23 = DAT_ram_4009833c;
  fVar2 = DAT_ram_400980f4;
  fVar5 = DAT_ram_400934d8;
  fVar18 = (float)*param_2;
  fVar22 = DAT_ram_400934d8 / fVar18;
  *(undefined4 *)(param_2 + 0x1c) = uVar13;
  *(undefined4 *)((int)param_2 + 0xdc) = uVar12;
  *(undefined4 *)((int)param_2 + 0xe4) = 0;
  *(float *)(param_2 + 0x21) = fVar18 * fVar23;
  fVar22 = fVar22 * fVar2;
  uVar12 = FUN_ram_40000a08(fVar22);
  *(undefined4 *)((int)param_2 + 0xfc) = uVar12;
  uVar12 = FUN_ram_40000786(fVar22);
  fVar23 = DAT_ram_4009824c;
  fVar17 = DAT_ram_4009349c;
  *(undefined4 *)(param_2 + 0x20) = uVar12;
  fVar14 = DAT_ram_40098274;
  fVar26 = DAT_ram_40098270;
  uVar12 = DAT_ram_40098268;
  fVar20 = DAT_ram_400930bc;
  fVar22 = fVar18 * fVar23;
  fVar19 = fVar22;
  if (fVar17 <= fVar22) {
    fVar19 = fVar17;
  }
  if (fVar22 < DAT_ram_400930bc) {
    if (fVar21 <= fVar18) {
      fVar17 = fVar21;
      fVar26 = fVar18;
      if (fVar21 <= fVar22) {
        fVar17 = fVar22;
      }
      goto LAB_ram_400602a0;
    }
    fVar16 = DAT_ram_40098244;
    fVar17 = fVar22;
    fVar15 = DAT_ram_40092878;
    if (fVar21 <= fVar22) goto LAB_ram_40060296;
    *(undefined4 *)(param_2 + 0x13) = DAT_ram_40098268;
    *(float *)((int)param_2 + 0x9c) = fVar14;
    *(undefined4 *)(param_2 + 0x14) = uVar12;
    *(float *)((int)param_2 + 0xa4) = fVar14;
    *(float *)(param_2 + 0x15) = fVar26;
LAB_ram_40060bf0:
    if (fVar19 < fVar21) {
      fVar26 = 0.0;
      fVar14 = DAT_ram_40098274;
      fVar17 = DAT_ram_40098270;
      fVar22 = 0.0;
    }
    else {
      fVar24 = DAT_ram_40092864;
      fVar16 = fVar19;
      fVar26 = DAT_ram_40098284;
      fVar14 = DAT_ram_4009827c;
      fVar17 = DAT_ram_40098278;
      fVar15 = DAT_ram_40092878;
      fVar22 = DAT_ram_40098280;
      if (fVar19 <= DAT_ram_40098244) goto LAB_ram_40060346;
    }
  }
  else {
    fVar16 = fVar22;
    fVar17 = DAT_ram_400930bc;
    fVar26 = DAT_ram_40092878;
    fVar15 = fVar18;
    if (fVar21 <= fVar18) {
LAB_ram_40060296:
      fVar26 = fVar15;
      if (fVar16 < fVar17) {
        fVar17 = fVar16;
      }
    }
LAB_ram_400602a0:
    fVar17 = (fVar17 / fVar26) * fVar2;
    fVar14 = (float)FUN_ram_40000786(fVar17);
    fVar15 = (float)FUN_ram_40000a08(fVar17);
    fVar24 = DAT_ram_40092864;
    fVar26 = (fVar14 + fVar21) * DAT_ram_40092864;
    fVar16 = -(fVar14 + fVar21);
    fVar14 = fVar14 * DAT_ram_40092834;
    fVar17 = fVar15 / DAT_ram_400980ac + fVar21;
    fVar15 = fVar21 - fVar15 / DAT_ram_400980ac;
    if (fVar17 != 0.0) {
      fVar17 = fVar21 / fVar17;
      fVar26 = fVar26 * fVar17;
      fVar16 = fVar16 * fVar17;
      fVar14 = fVar14 * fVar17;
      fVar15 = fVar15 * fVar17;
    }
    *(float *)(param_2 + 0x13) = fVar26;
    *(float *)((int)param_2 + 0x9c) = fVar16;
    *(float *)(param_2 + 0x14) = fVar26;
    *(float *)((int)param_2 + 0xa4) = fVar14;
    *(float *)(param_2 + 0x15) = fVar15;
    if (fVar18 < fVar21) goto LAB_ram_40060bf0;
    fVar16 = fVar21;
    fVar15 = fVar18;
    if ((fVar21 <= fVar19) && (fVar16 = fVar19, fVar22 < fVar19)) {
      fVar16 = fVar22;
    }
LAB_ram_40060346:
    fVar22 = (fVar16 / fVar15) * fVar2;
    fVar16 = (float)FUN_ram_40000786(fVar22);
    fVar17 = (float)FUN_ram_40000a08(fVar22);
    fVar22 = fVar21 - fVar16;
    fVar19 = fVar17 / in_register_00000100 + fVar21;
    fVar17 = fVar21 - fVar17 / in_register_00000100;
    fVar26 = fVar22 * fVar24;
    fVar14 = fVar16 * in_register_00000100;
    if (fVar19 != 0.0) {
      fVar19 = fVar21 / fVar19;
      fVar26 = fVar22 * fVar24 * fVar19;
      fVar14 = fVar16 * in_register_00000100 * fVar19;
      fVar17 = fVar17 * fVar19;
      fVar22 = fVar22 * fVar19;
    }
  }
  fVar19 = DAT_ram_4009281c;
  bVar1 = DAT_ram_4009281c <= fVar18;
  *(float *)((int)param_2 + 0xb4) = fVar26;
  *(float *)(param_2 + 0x17) = fVar22;
  *(float *)((int)param_2 + 0xbc) = fVar26;
  *(float *)(param_2 + 0x18) = fVar14;
  *(float *)((int)param_2 + 0xc4) = fVar17;
  *(float *)((int)param_2 + 0x114) = fVar19;
  *(undefined4 *)(param_2 + 0x23) = *(undefined4 *)((int)param_2 + 0x104);
  *(undefined4 *)((int)param_2 + 0x11c) = *(undefined4 *)((int)param_2 + 0x10c);
  *(int *)(param_2 + 0x24) = (int)param_2[0x22];
  *(float *)((int)param_2 + 0x124) = fVar19;
  *(undefined1 *)(param_2 + 0x25) = 1;
  uVar12 = DAT_ram_400934e8;
  puVar3 = PTR_firmware_entry_ram_40092830;
  fVar22 = DAT_ram_400982f0;
  fVar19 = DAT_ram_40092878;
  if (bVar1) {
    fVar22 = fVar28 / (fVar18 * DAT_ram_40098334);
    fVar19 = fVar18;
  }
  *(float *)((int)param_2 + 0x164) = fVar19;
  *(undefined4 *)((int)param_2 + 0x16c) = uVar12;
  *(undefined **)(param_2 + 0x2d) = puVar3;
  uVar12 = FUN_ram_40000c0e(fVar22);
  fVar17 = DAT_ram_40098340;
  uVar13 = FUN_ram_40000c0e(fVar28 / (fVar19 * DAT_ram_40098340));
  *(undefined4 *)(param_2 + 0x2e) = uVar12;
  *(undefined4 *)((int)param_2 + 0x174) = uVar13;
  fVar15 = (float)*param_2;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  fVar19 = DAT_ram_40098274;
  fVar22 = DAT_ram_40098270;
  uVar12 = DAT_ram_40098268;
  fVar26 = DAT_ram_4009828c;
  fVar14 = DAT_ram_40092878;
  fVar18 = DAT_ram_40092878;
  fVar16 = fVar20;
  if (fVar15 < fVar4) {
LAB_ram_40060b14:
    fVar22 = (fVar16 / fVar14) * fVar2;
    fVar14 = (float)FUN_ram_40000786(fVar22);
    fVar24 = (float)FUN_ram_40000a08(fVar22);
    fVar16 = (fVar14 + fVar21) * DAT_ram_40092864;
    fVar19 = fVar14 * DAT_ram_40092834;
    fVar29 = -(fVar14 + fVar21);
    fVar22 = fVar24 / DAT_ram_400980ac + fVar21;
    fVar31 = fVar21 - fVar24 / DAT_ram_400980ac;
    if (fVar22 != 0.0) {
LAB_ram_40060c7a:
      fVar22 = fVar21 / fVar22;
      fVar16 = fVar16 * fVar22;
      fVar29 = fVar29 * fVar22;
      fVar19 = fVar19 * fVar22;
      fVar31 = fVar31 * fVar22;
    }
    *(float *)((int)param_2 + 300) = fVar16;
    *(float *)(param_2 + 0x26) = fVar29;
    *(float *)((int)param_2 + 0x134) = fVar16;
    *(float *)(param_2 + 0x27) = fVar19;
    *(float *)((int)param_2 + 0x13c) = fVar31;
    if (fVar18 < fVar21) goto LAB_ram_400604a2;
    fVar22 = fVar21;
    if ((fVar21 <= fVar26) && (fVar22 = fVar26, fVar18 * fVar23 < fVar26)) {
      fVar22 = fVar18 * fVar23;
    }
LAB_ram_400604c2:
    fVar22 = (fVar22 / fVar18) * fVar2;
    fVar18 = (float)FUN_ram_40000786(fVar22);
    fVar19 = (float)FUN_ram_40000a08(fVar22);
    fVar26 = fVar21 - fVar18;
    fVar22 = fVar19 / DAT_ram_400980ac + fVar21;
    fVar19 = fVar21 - fVar19 / DAT_ram_400980ac;
    fVar14 = fVar18 * DAT_ram_40092834;
    fVar16 = fVar26;
    fVar24 = fVar26 * DAT_ram_40092864;
    if (fVar22 != 0.0) {
      fVar22 = fVar21 / fVar22;
      fVar14 = fVar18 * DAT_ram_40092834 * fVar22;
      fVar19 = fVar19 * fVar22;
      fVar16 = fVar26 * fVar22;
      fVar24 = fVar26 * DAT_ram_40092864 * fVar22;
    }
  }
  else {
    fVar24 = fVar15 * fVar23;
    fVar14 = fVar15;
    fVar18 = fVar15;
    fVar32 = fVar24;
    if (DAT_ram_4009828c <= fVar24) {
      if (fVar24 < fVar20) goto LAB_ram_40060466;
LAB_ram_40060c3e:
      fVar19 = DAT_ram_400982f8;
      fVar22 = DAT_ram_400982fc;
      fVar16 = DAT_ram_40098304;
      fVar29 = DAT_ram_40098300;
      fVar31 = DAT_ram_400982f4;
      fVar24 = fVar20;
      if (fVar21 <= fVar15) goto LAB_ram_40060df6;
      goto LAB_ram_40060c7a;
    }
    fVar26 = fVar24;
    if (fVar20 <= fVar24) goto LAB_ram_40060c3e;
LAB_ram_40060466:
    if (fVar21 <= fVar15) {
      fVar16 = fVar21;
      if (fVar24 < fVar21) goto LAB_ram_40060b14;
LAB_ram_40060df6:
      fVar16 = fVar32;
      if (fVar24 <= fVar32) {
        fVar16 = fVar24;
      }
      goto LAB_ram_40060b14;
    }
    fVar14 = DAT_ram_40092878;
    fVar32 = DAT_ram_40098244;
    if (fVar21 <= fVar24) goto LAB_ram_40060df6;
    *(undefined4 *)((int)param_2 + 300) = DAT_ram_40098268;
    *(float *)(param_2 + 0x26) = fVar19;
    *(undefined4 *)((int)param_2 + 0x134) = uVar12;
    *(float *)(param_2 + 0x27) = fVar19;
    *(float *)((int)param_2 + 0x13c) = fVar22;
LAB_ram_400604a2:
    if (fVar26 < fVar21) {
      fVar14 = DAT_ram_40098274;
      fVar19 = DAT_ram_40098270;
      fVar16 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar22 = fVar26;
      fVar14 = DAT_ram_4009827c;
      fVar19 = DAT_ram_40098278;
      fVar18 = DAT_ram_40092878;
      fVar16 = DAT_ram_40098280;
      fVar24 = DAT_ram_40098284;
      if (fVar26 <= DAT_ram_40098244) goto LAB_ram_400604c2;
    }
  }
  *(float *)(param_2 + 0x29) = fVar24;
  *(float *)((int)param_2 + 0x14c) = fVar16;
  *(float *)(param_2 + 0x2a) = fVar24;
  *(float *)((int)param_2 + 0x154) = fVar14;
  *(float *)(param_2 + 0x2b) = fVar19;
  fVar22 = DAT_ram_40098308;
  fVar26 = DAT_ram_40092878;
  fVar19 = DAT_ram_4009281c;
  if (fVar15 < fVar4) {
    *(undefined4 *)(param_2 + 0x38) = DAT_ram_40098368;
    *(float *)((int)param_2 + 0x1c4) = fVar19;
  }
  else {
    fVar22 = fVar15 * fVar23;
    if (DAT_ram_40092864 <= fVar15 * fVar23) {
      fVar22 = DAT_ram_40092864;
    }
    fVar22 = (fVar22 / fVar15) * fVar2;
    uVar12 = FUN_ram_40000a08(fVar22);
    *(undefined4 *)(param_2 + 0x38) = uVar12;
    uVar12 = FUN_ram_40000786(fVar22);
    fVar22 = DAT_ram_40098344;
    *(undefined4 *)((int)param_2 + 0x1c4) = uVar12;
    fVar22 = fVar28 / (fVar15 * fVar22);
    fVar26 = fVar15;
  }
  uVar12 = FUN_ram_40000c0e(fVar22);
  uVar13 = FUN_ram_40000c0e(fVar28 / (fVar26 * DAT_ram_40093668));
  fVar19 = DAT_ram_40098348;
  fVar22 = DAT_ram_4009281c;
  *(undefined4 *)((int)param_2 + 0x1cc) = uVar12;
  *(float *)(param_2 + 0x39) = fVar22;
  *(undefined4 *)(param_2 + 0x3a) = uVar13;
  uVar12 = FUN_ram_40000c0e(fVar19 / (float)*param_2);
  *(undefined4 *)((int)param_2 + 500) = uVar12;
  fVar22 = DAT_ram_4009830c;
  if (fVar4 <= (float)*param_2) {
    fVar22 = (float)*param_2 * fVar17;
  }
  uVar7 = FUN_ram_40000938(fVar22);
  if (0x1800 < (int)uVar7) {
    uVar7 = 0x1800;
  }
  uVar9 = 0x40;
  if (0x3f < (int)uVar7) {
    uVar9 = uVar7;
  }
  if (((uVar9 & 0xffff) != (uint)*(ushort *)((int)param_2 + 0x20c)) ||
     ((uint)*(ushort *)((int)param_2 + 0x20e) != (uVar9 + 4 & 0xffff))) {
    *(uint *)((int)param_2 + 0x20c) = (uVar9 + 4) * 0x10000 | uVar9 & 0xffff;
    memset((void *)((int)param_2 + 0x214),0,0x6010);
    *(undefined2 *)(param_2 + 0x42) = 0;
    *(undefined4 *)((int)param_2 + 0x1fc) = 0;
    *(undefined4 *)(param_2 + 0x3f) = 0;
  }
  fVar22 = 0.0 / (float)(uVar9 & 0xffff);
  fVar19 = DAT_ram_4009831c;
  uVar12 = DAT_ram_40098318;
  uVar13 = DAT_ram_40098310;
  if ((DAT_ram_4009831c <= fVar22) && (fVar19 = fVar23, uVar12 = DAT_ram_40098314, fVar22 <= fVar23)
     ) {
    uVar12 = FUN_ram_40000a08(fVar22 * fVar2);
    uVar13 = FUN_ram_40000786(fVar22 * fVar2);
    fVar19 = fVar22;
  }
  *(float *)(param_2 + 0x40) = fVar19;
  *(undefined4 *)((int)param_2 + 0x204) = uVar12;
  *(undefined4 *)(param_2 + 0x41) = uVar13;
  fVar22 = DAT_ram_40098104;
  fVar19 = (float)*param_2;
  if (((int)param_2[2] != 0) && (0xf < *(uint *)((int)param_2 + 0x14))) {
    if (fVar19 < fVar4) {
      fVar19 = DAT_ram_40092878;
    }
    local_a0 = DAT_ram_4009834c;
    local_9c[0] = (float)DAT_ram_40098350;
    local_9c[1] = (float)DAT_ram_40098354;
    local_9c[2] = (float)DAT_ram_40098358;
    pfVar11 = &local_a0;
    puVar6 = (undefined2 *)((int)param_2 + 0x6236);
    uVar7 = 0;
    do {
      iVar8 = FUN_ram_40000938(*pfVar11 * fVar22 * fVar19);
      if (0 < iVar8) goto LAB_ram_400606fa;
      while( true ) {
        iVar8 = 1;
LAB_ram_400606fa:
        uVar10 = *(uint *)((int)param_2 + 0x14);
        *puVar6 = 0;
        uVar9 = iVar8 + uVar7;
        if (uVar10 < iVar8 + uVar7) break;
        while( true ) {
          uVar7 = uVar9;
          puVar6[-4] = (short)iVar8;
          puVar6 = puVar6 + 1;
          pfVar11 = pfVar11 + 1;
          if ((undefined2 *)((int)param_2 + 0x623e) == puVar6) goto LAB_ram_40060746;
          iVar8 = FUN_ram_40000938(*pfVar11 * fVar22 * fVar19);
          if (iVar8 < 1) break;
          uVar10 = *(uint *)((int)param_2 + 0x14);
          *puVar6 = 0;
          uVar9 = iVar8 + uVar7;
          if (uVar10 < iVar8 + uVar7) goto LAB_ram_40060738;
        }
      }
LAB_ram_40060738:
      puVar6[-4] = 0;
      puVar6 = puVar6 + 1;
      pfVar11 = pfVar11 + 1;
    } while (puVar6 != (undefined2 *)((int)param_2 + 0x623e));
LAB_ram_40060746:
    if (uVar7 == 0) {
      fVar19 = (float)*param_2;
    }
    else {
      memset(*(void **)(param_2 + 2),0,uVar7 << 2);
      fVar19 = (float)*param_2;
    }
  }
  fVar22 = DAT_ram_40098320;
  if (fVar21 <= fVar19) {
    if (fVar20 <= fVar19 * fVar23) {
      fVar22 = DAT_ram_4009835c / fVar19;
    }
    else {
      fVar22 = (fVar19 * fVar23 * DAT_ram_4009810c) / fVar19;
    }
  }
  uVar12 = FUN_ram_40000c0e(fVar22);
  *(undefined4 *)((int)param_2 + 0x94) = uVar12;
  uVar12 = DAT_ram_400930fc;
  fVar22 = DAT_ram_4009281c;
  fVar19 = (float)*param_2;
  if (fVar19 <= fVar4) {
    uVar25 = (ulonglong)(uint)DAT_ram_4009281c;
    uVar27 = (ulonglong)DAT_ram_400930d8;
    bVar1 = (float)*(undefined8 *)((int)param_2 + 0x3c) == DAT_ram_40098240;
    *(float *)(param_2 + 0x11) = DAT_ram_4009281c;
    *(undefined4 *)((int)param_2 + 0x8c) = uVar12;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar27;
    fVar19 = DAT_ram_40092878;
    if (bVar1) goto LAB_ram_400607e8;
    uVar7 = (uint)param_2[1];
    if (1 < uVar7) {
      uVar25 = (ulonglong)DAT_ram_40098324;
      goto LAB_ram_400607cc;
    }
LAB_ram_400607dc:
    uVar27 = (ulonglong)(uint)DAT_ram_40098240;
    *(ulonglong *)((int)param_2 + 100) = uVar25;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar27;
  }
  else {
    uVar25 = (ulonglong)DAT_ram_400930d8;
    bVar1 = (float)*(undefined8 *)((int)param_2 + 0x3c) != DAT_ram_40098240;
    *(float *)(param_2 + 0x11) = DAT_ram_4009281c;
    *(undefined4 *)((int)param_2 + 0x8c) = uVar12;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar25;
    if (bVar1) {
      uVar7 = (uint)param_2[1];
      uVar25 = (ulonglong)(uint)(fVar19 * DAT_ram_40098360);
      if (fVar22 <= fVar19 * DAT_ram_40098360) {
        if (1 < uVar7) goto LAB_ram_400607cc;
      }
      else {
        uVar25 = (ulonglong)(uint)fVar22;
        if (uVar7 < 2) goto LAB_ram_400607dc;
LAB_ram_400607cc:
        fVar22 = (float)(uVar7 - 2);
      }
      if (fVar22 < (float)uVar25) {
        uVar25 = (ulonglong)(uint)fVar22;
      }
      goto LAB_ram_400607dc;
    }
  }
LAB_ram_400607e8:
  if ((float)param_2[8] != DAT_ram_4009823c) {
    uVar25 = (ulonglong)DAT_ram_40098364;
    param_2[8] = (ulonglong)(uint)DAT_ram_4009823c;
    param_2[0xd] = uVar25;
  }
  if ((float)*(undefined8 *)((int)param_2 + 0x44) == DAT_ram_400941f0) goto LAB_ram_4006085a;
  fVar22 = fVar19 * fVar23;
  if (fVar22 < DAT_ram_40098328) {
    if (fVar19 < fVar21) {
      fVar28 = DAT_ram_40098244;
      fVar19 = DAT_ram_40092878;
      if (fVar21 <= fVar22) goto LAB_ram_40060830;
    }
    else if (fVar21 <= fVar22) goto LAB_ram_40060e8e;
    fVar20 = DAT_ram_4009810c / fVar19;
  }
  else {
    fVar28 = fVar22;
    fVar22 = DAT_ram_40098328;
    fVar20 = DAT_ram_4009832c;
    if (fVar21 <= fVar19) {
LAB_ram_40060830:
      if (fVar22 <= fVar28) {
LAB_ram_40060e8e:
        fVar20 = (fVar22 * DAT_ram_4009810c) / fVar19;
      }
      else {
        fVar20 = (fVar28 * DAT_ram_4009810c) / fVar19;
      }
    }
  }
  uVar12 = FUN_ram_40000c0e(fVar20);
  uVar25 = (ulonglong)(uint)DAT_ram_400941f0;
  *(undefined4 *)(param_2 + 0x12) = uVar12;
  *(ulonglong *)((int)param_2 + 0x44) = uVar25;
LAB_ram_4006085a:
  if ((float)param_2[9] == DAT_ram_40098238) {
    uVar25 = *(ulonglong *)((int)param_2 + 0x6c);
  }
  else {
    uVar25 = (ulonglong)(uint)DAT_ram_40098238;
    *(ulonglong *)((int)param_2 + 0x6c) = (ulonglong)(uint)DAT_ram_40098238;
  }
  if ((float)*(undefined8 *)((int)param_2 + 0x4c) == fVar21) {
    fVar21 = (float)param_2[0xe];
  }
  else {
    param_2[0xe] = (ulonglong)(uint)fVar21;
  }
  *(undefined8 *)((int)param_2 + 0x74) = *(undefined8 *)((int)param_2 + 100);
  param_2[0xf] = param_2[0xd];
  *(ulonglong *)((int)param_2 + 0x7c) = uVar25;
  *(float *)(param_2 + 0x10) = fVar21;
  if ((*(void **)((int)param_2 + 4) != (void *)0x0) && ((int)param_2[1] != 0)) {
    memset(*(void **)((int)param_2 + 4),0,(int)param_2[1] << 2);
  }
  uVar25 = (ulonglong)(uint)DAT_ram_4009281c;
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(ulonglong *)((int)param_2 + 0x2c) = uVar25;
  *(undefined2 *)(param_2 + 7) = 0;
  *(undefined1 *)((int)param_2 + 0x3a) = 1;
  if ((*(void **)(param_2 + 2) != (void *)0x0) && (*(int *)((int)param_2 + 0x14) != 0)) {
    memset(*(void **)(param_2 + 2),0,*(int *)((int)param_2 + 0x14) << 2);
  }
  fVar21 = DAT_ram_4009281c;
  *(undefined4 *)(param_2 + 0x1e) = 0x12345678;
  *(undefined4 *)((int)param_2 + 0x184) = 0x87654321;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((int)param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((int)param_2 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 *)((int)param_2 + 0x84) = 0;
  *(undefined4 *)((int)param_2 + 0xac) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined4 *)((int)param_2 + 0xcc) = 0;
  *(undefined4 *)((int)param_2 + 0xe4) = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0;
  *(undefined4 *)((int)param_2 + 0xec) = 0;
  *(undefined4 *)((int)param_2 + 0xf4) = 0;
  *(float *)(param_2 + 0x1f) = fVar21;
  *(undefined1 *)(param_2 + 0x25) = 0;
  *(float *)((int)param_2 + 0x114) = fVar21;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)((int)param_2 + 0x144) = 0;
  *(undefined4 *)((int)param_2 + 0x15c) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  *(undefined4 *)((int)param_2 + 0x17c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(float *)(param_2 + 0x31) = fVar21;
  *(undefined4 *)((int)param_2 + 0x18c) = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  *(float *)((int)param_2 + 0x194) = fVar21;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined4 *)((int)param_2 + 0x19c) = 0;
  *(float *)(param_2 + 0x34) = fVar21;
  *(undefined4 *)((int)param_2 + 0x1a4) = 0;
  fVar22 = (float)*param_2;
  *(undefined4 *)(param_2 + 0x35) = 0;
  *(float *)((int)param_2 + 0x1ac) = fVar21;
  *(undefined4 *)(param_2 + 0x36) = 0;
  *(undefined4 *)((int)param_2 + 0x1b4) = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  *(float *)((int)param_2 + 0x1bc) = fVar21;
  uVar12 = DAT_ram_400982ec;
  if (fVar4 <= fVar22) {
    fVar23 = fVar22 * fVar23;
    if (fVar5 <= fVar23) {
      fVar23 = fVar5;
    }
    fVar2 = (fVar23 / fVar22) * fVar2;
    uVar12 = FUN_ram_40000a08(fVar2);
    fVar21 = (float)FUN_ram_40000786(fVar2);
  }
  fVar22 = DAT_ram_4009281c;
  *(undefined4 *)(param_2 + 0x38) = uVar12;
  *(float *)((int)param_2 + 0x1c4) = fVar21;
  *(float *)(param_2 + 0x39) = fVar22;
  *(undefined4 *)((int)param_2 + 0x1d4) = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0;
  *(undefined1 *)((int)param_2 + 0x622c) = 0;
  *(undefined4 *)((int)param_2 + 0x6224) = 0;
  *(undefined4 *)(param_2 + 0xc45) = 0;
  if (*(short *)((int)param_2 + 0x20e) == 0) {
    *(undefined2 *)((int)param_2 + 0x20e) = 0x44;
  }
  if (*(short *)((int)param_2 + 0x20c) == 0) {
    *(undefined2 *)((int)param_2 + 0x20c) = 0x40;
  }
  memset((void *)((int)param_2 + 0x214),0,0x6010);
  uVar25 = (ulonglong)(uint)DAT_ram_40092818;
  *(undefined2 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((int)param_2 + 0x1fc) = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(ulonglong *)((int)param_2 + 0x3c) = uVar25;
  param_2[8] = uVar25;
  *(ulonglong *)((int)param_2 + 0x44) = uVar25;
  param_2[9] = uVar25;
  *(ulonglong *)((int)param_2 + 0x4c) = uVar25;
  param_2[10] = uVar25;
  *(undefined1 *)((int)param_2 + 0x623e) = 0;
  *(undefined2 *)((int)param_2 + 0x6236) = 0;
  *(undefined4 *)(param_2 + 0xc47) = 0;
  *(undefined2 *)((int)param_2 + 0x623c) = 0;
  return;
}


/* NanoCore 1.10, address 0x40060f3c.
 * REA evidence: ev_62e7b7632d64c52a18ac84ddba8a3ae41e6c5bcba77964e5f7e4f40d4a6ed541
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40060f3c(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     uint param_6,float *param_7,uint param_8,char param_9,int param_10)

{
  ushort uVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  float fVar10;
  undefined4 uVar11;
  float in_register_00000100;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  byte bVar23;
  float *pfVar24;
  float fVar25;
  undefined8 *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  uint uVar35;
  float *pfVar36;
  float fVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ulonglong uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined *puVar64;
  float fVar65;
  float fVar66;
  ulonglong uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  undefined8 uVar75;
  undefined *puVar76;
  float fVar77;
  float fVar78;
  ulonglong uVar79;
  float fStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_ac;
  
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0' && (param_3 != (float *)0x0 && param_5 != (float *)0x0);
  }
  fVar52 = DAT_ram_40092864;
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == (float *)0x0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (((void *)param_1[1] == (void *)0x0) || ((uint)param_1[2] < 4)) {
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
LAB_ram_40061588:
      if (param_2 != param_4) {
        FUN_ram_4000305c(param_4,param_2,param_6 << 2);
      }
      param_3 = param_4;
      if (param_5 == (float *)0x0) {
        return;
      }
      goto joined_r0x4006159c;
    }
    if (param_5 == (float *)0x0) {
      pfVar15 = param_2 + param_6;
      do {
        uVar71 = *(undefined8 *)param_2;
        uVar75 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *param_4 = ((float)uVar71 + (float)uVar75) * fVar52;
        param_4 = param_4 + 1;
      } while (param_2 != pfVar15);
      return;
    }
  }
  else {
    uVar38 = (uint)*(byte *)(param_1 + 8);
    if (param_8 < 8) {
      if (param_8 != uVar38) goto LAB_ram_40061d8c;
LAB_ram_40060fcc:
      fVar60 = DAT_ram_40093094;
      puVar76 = PTR_firmware_entry_ram_40092830;
      fVar52 = DAT_ram_4009281c;
      if (uVar38 != 1) {
        if (uVar38 != 2) {
          if (uVar38 != 3) {
            if (uVar38 == 4) {
              fVar61 = DAT_ram_40092864;
              fVar60 = DAT_ram_400982c0;
              fVar55 = DAT_ram_400982c4;
              if (param_7 != (float *)0x0) {
                fVar61 = param_7[2];
                fVar60 = *param_7;
                fVar55 = param_7[1];
                if (0.0 <= fVar61) {
                  if (DAT_ram_4009281c < fVar61) {
                    fVar61 = DAT_ram_4009281c;
                  }
                }
                else {
                  fVar61 = 0.0;
                }
              }
              uVar72 = (ulonglong)(uint)DAT_ram_4009281c;
              FUN_ram_4005f4d2(fVar60,fVar55,param_1);
              if ((float)*(undefined8 *)(param_1 + 0x11) == fVar61) {
                fVar61 = param_1[100];
              }
              else {
                param_1[100] = fVar61;
                param_1[0x11] = fVar61;
              }
              if ((float)*(undefined8 *)(param_1 + 0x12) == fVar52) {
                fVar60 = param_1[0x65];
              }
              else {
                param_1[0x65] = fVar52;
                *(ulonglong *)(param_1 + 0x12) = uVar72;
                fVar60 = fVar52;
              }
              fVar16 = DAT_ram_40093094;
              fVar55 = param_1[99];
              if (0.0 <= fVar55) {
                if (DAT_ram_40092820 < fVar55) {
                  fVar55 = DAT_ram_40092820;
                }
              }
              else {
                fVar55 = 0.0;
              }
              if (0.0 <= fVar61) {
                if (fVar52 < fVar61) {
                  fVar61 = fVar52;
                }
              }
              else {
                fVar61 = 0.0;
              }
              if (0.0 <= fVar60) {
                if (fVar52 < fVar60) {
                  fVar60 = fVar52;
                }
              }
              else {
                fVar60 = 0.0;
              }
              fVar32 = *param_1;
              fVar29 = param_1[0x62];
              fVar54 = fVar52 / (float)param_6;
              fVar62 = param_1[2];
              if (DAT_ram_40093094 <= fVar32) {
                if (7 < (uint)fVar62) {
                  fVar32 = fVar32 * DAT_ram_4009833c;
                  goto LAB_ram_400619f4;
                }
                FUN_ram_40000938(fVar32 * DAT_ram_40098344);
              }
              else {
                fVar32 = DAT_ram_40098378;
                if (7 < (uint)fVar62) {
LAB_ram_400619f4:
                  fVar41 = (float)((uint)fVar62 >> 1);
                  fVar12 = (float)(int)fVar41;
                  fVar63 = fVar41;
                  fVar50 = fVar12;
                  if (0x3f < (uint)fVar62) {
                    fVar63 = 4.48416e-44;
                    fVar50 = DAT_ram_40094210;
                  }
                  if ((fVar50 <= fVar29) && (fVar50 = fVar12, fVar29 <= fVar12)) {
                    fVar50 = fVar29;
                  }
                  fVar62 = (float)FUN_ram_40000938(fVar50);
                  if ((uint)fVar63 < (uint)fVar62) {
                    fVar63 = fVar62;
                  }
                  iVar17 = 0xdd;
                  if ((uint)fVar63 <= (uint)fVar41) {
                    fVar41 = fVar63;
                  }
                  if (fVar16 <= (float)*(undefined8 *)param_1) {
                    iVar17 = FUN_ram_40000938((float)*(undefined8 *)param_1 * DAT_ram_40098344);
                  }
                  if (*(char *)((int)param_1 + 0x623e) == '\0') {
                    param_1[0x69] = fVar55;
                    param_1[0x6a] = fVar61;
                    param_1[0x68] = fVar29;
                    param_1[0x6b] = fVar60;
                    *(undefined1 *)((int)param_1 + 0x623e) = 1;
                  }
                  fVar16 = param_1[0x1889];
                  if (((fVar16 == 0.0) || ((uint)param_1[2] >> 1 < (uint)fVar16)) ||
                     ((fVar16 != fVar41 &&
                      ((param_1[0x188a] == 0.0 ||
                       (((uint)fVar41 < (uint)fVar16 && ((uint)fVar41 <= (uint)param_1[0x188a]))))))
                     )) {
                    if ((void *)param_1[1] == (void *)0x0) {
                      pfVar15 = (float *)0x0;
                      fVar16 = fVar41;
                    }
                    else {
                      memset((void *)param_1[1],0,(int)fVar41 << 3);
                      *(undefined1 *)(param_1 + 0x188b) = 0;
                      pfVar15 = (float *)param_1[1];
                      param_1[0x1889] = fVar41;
                      param_1[0x188a] = 0.0;
                      fVar16 = fVar41;
                    }
                  }
                  else {
                    pfVar15 = (float *)param_1[1];
                  }
                  fVar62 = param_1[0x69];
                  fVar12 = param_1[0x6a];
                  fVar63 = param_1[0x6b];
                  fVar55 = fVar55 - fVar62;
                  fVar61 = fVar61 - fVar12;
                  fVar60 = fVar60 - fVar63;
                  fVar53 = param_1[0x6e];
                  fVar77 = param_1[0x6f];
                  fVar78 = param_1[0x70];
                  fVar27 = param_1[0x71];
                  fVar50 = 0.0;
                  if (1 < iVar17) {
                    fVar50 = fVar52 / (float)(iVar17 + -1);
                  }
                  bVar23 = *(byte *)(param_1 + 0x188b);
                  iVar34 = 0;
                  fVar28 = DAT_ram_400937b0;
                  fVar43 = DAT_ram_4009309c;
                  fVar30 = DAT_ram_40092864;
                  do {
                    fVar37 = (float)*(undefined8 *)param_2;
                    if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
                      fVar37 = (fVar37 + (float)*(undefined8 *)((int)param_3 + iVar34)) * fVar30;
                    }
                    fVar47 = param_1[0x188a];
                    fVar44 = (float)((int)fVar16 - 1);
                    fVar46 = fVar32 * fVar53 + (float)(uint)fVar47;
                    if (fVar46 < 0.0) {
                      fVar46 = 0.0;
                    }
                    else if (fVar44 < fVar46) {
                      fVar46 = fVar44;
                    }
                    iVar19 = (int)fVar16 * 4;
                    pfVar14 = pfVar15;
                    if (bVar23 != 0) {
                      iVar19 = 0;
                      pfVar14 = pfVar15 + (int)fVar16;
                    }
                    fVar48 = 0.0;
                    if ((pfVar14 != (float *)0x0) && (fVar16 != 0.0)) {
                      if (0.0 < fVar46) {
                        if (fVar46 < fVar44) {
                          uVar38 = (uint)(-1 < (int)fVar46) * (int)fVar46;
                          iVar20 = (int)fVar16 - uVar38;
                          fVar46 = fVar46 - (float)uVar38;
                          iVar21 = iVar20 + -1;
                          pfVar13 = pfVar14 + iVar20 + -2;
                          if (iVar21 == 0) {
                            pfVar13 = pfVar14;
                          }
                          fVar48 = (fVar52 - fVar46) * pfVar14[iVar21] + fVar46 * *pfVar13;
                        }
                        else {
                          fVar48 = *pfVar14;
                        }
                      }
                      else {
                        fVar48 = pfVar14[(int)fVar16 + -1];
                      }
                    }
                    fVar44 = fVar48;
                    if (1 < iVar17) {
                      if ((int)fVar47 < iVar17) {
                        fVar44 = (float)(uint)fVar47 * fVar50 * fVar48;
                      }
                      else if ((uint)((int)fVar16 - iVar17) <= (uint)fVar47) {
                        fVar44 = (float)(int)(~(uint)fVar47 + (int)fVar16) * fVar50;
                        if (0.0 <= fVar44) {
                          fVar44 = fVar44 * fVar48;
                        }
                        else {
                          fVar44 = fVar48 * 0.0;
                        }
                      }
                    }
                    *(ulonglong *)(iVar19 + (int)fVar47 * 4 + (int)pfVar15) =
                         (ulonglong)(uint)(fVar48 * fVar62 + fVar37);
                    if (fVar12 < 0.0) {
                      fVar44 = fVar44 * 0.0;
                      fVar37 = fVar52;
                    }
                    else {
                      fVar37 = 0.0;
                      if (fVar12 <= fVar52) {
                        fVar44 = fVar44 * fVar12;
                        if (fVar12 <= fVar28) {
LAB_ram_4006235a:
                          fVar37 = fVar52;
                        }
                        else {
                          fVar37 = -((fVar12 - fVar28) * fVar43) + fVar52;
                          if (0.0 <= fVar37) {
                            if (fVar52 < fVar37) goto LAB_ram_4006235a;
                          }
                          else {
                            fVar37 = 0.0;
                          }
                        }
                      }
                    }
                    fVar46 = (float)*(undefined8 *)param_2;
                    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
                      fVar37 = fVar63 * (fVar46 * fVar37 + fVar44);
                      *param_4 = fVar37;
                      if (param_5 != (float *)0x0) {
                        *(ulonglong *)((int)param_5 + iVar34) = (ulonglong)(uint)fVar37;
                      }
                    }
                    else {
                      fVar48 = (float)*(undefined8 *)((int)param_3 + iVar34);
                      fVar44 = fVar63 * (fVar37 * (fVar46 + fVar48) * fVar30 + fVar44);
                      if (param_5 == (float *)0x0) {
                        *param_4 = fVar44;
                      }
                      else {
                        fVar46 = fVar46 - fVar48;
                        fVar37 = fVar37 * fVar63 * fVar30;
                        *param_4 = fVar37 * fVar46 + fVar44;
                        *(ulonglong *)((int)param_5 + iVar34) =
                             (ulonglong)(uint)(-(fVar37 * fVar46) + fVar44);
                      }
                    }
                    param_1[0x188a] = (float)((int)fVar47 + 1);
                    if ((uint)fVar16 <= (uint)((int)fVar47 + 1)) {
                      if (fVar41 == fVar16) {
                        bVar23 = bVar23 ^ 1;
                        param_1[0x188a] = 0.0;
                      }
                      else if (pfVar15 == (float *)0x0) {
                        bVar23 = *(byte *)(param_1 + 0x188b);
                        fVar16 = fVar41;
                      }
                      else {
                        memset(pfVar15,0,(int)fVar41 << 3);
                        fVar28 = DAT_ram_400937b0;
                        fVar43 = DAT_ram_4009309c;
                        fVar30 = DAT_ram_40092864;
                        param_1[0x1889] = fVar41;
                        param_1[0x188a] = 0.0;
                        *(undefined1 *)(param_1 + 0x188b) = 0;
                        bVar23 = 0;
                        fVar16 = fVar41;
                      }
                    }
                    fVar37 = fVar78 * fVar53;
                    iVar34 = iVar34 + 4;
                    fVar62 = fVar62 + fVar55 * fVar54;
                    fVar12 = fVar12 + fVar61 * fVar54;
                    fVar53 = fVar27 * fVar53 + fVar78 * fVar77;
                    fVar77 = fVar27 * fVar77 - fVar37;
                    fVar63 = fVar63 + fVar60 * fVar54;
                    param_2 = param_2 + 1;
                    param_4 = param_4 + 1;
                    if (param_6 << 2 == iVar34) {
                      param_1[0x69] = fVar62;
                      param_1[0x68] = fVar29;
                      param_1[0x6a] = fVar12;
                      param_1[0x6b] = fVar63;
                      param_1[0x6e] = fVar53;
                      param_1[0x6f] = fVar77;
                      *(byte *)(param_1 + 0x188b) = bVar23;
                      param_1[0x6d] = 0.0;
                      return;
                    }
                    pfVar15 = (float *)param_1[1];
                  } while( true );
                }
              }
              FUN_ram_4005f434(param_2,param_3,param_4,param_5,param_6,param_9);
              param_1[0x68] = fVar29;
              return;
            }
            if (uVar38 != 5) {
              if (uVar38 == 6) {
                if (param_7 == (float *)0x0) {
                  uVar72 = (ulonglong)(uint)DAT_ram_400982bc;
                  fVar60 = DAT_ram_400982dc;
                  fVar16 = DAT_ram_400982bc;
                  fVar55 = DAT_ram_400982d4;
                  fVar61 = DAT_ram_400982d8;
                }
                else {
                  fVar60 = param_7[2];
                  fVar55 = *param_7;
                  fVar61 = param_7[1];
                  fVar16 = param_7[3];
                  fVar54 = param_7[4];
                  if (0.0 <= fVar60) {
                    if (DAT_ram_4009281c < fVar60) {
                      fVar60 = DAT_ram_4009281c;
                    }
                  }
                  else {
                    fVar60 = 0.0;
                  }
                  if (0.0 <= fVar16) {
                    if (DAT_ram_4009281c < fVar16) {
                      fVar16 = DAT_ram_4009281c;
                    }
                  }
                  else {
                    fVar16 = 0.0;
                  }
                  if (0.0 <= fVar54) {
                    uVar72 = (ulonglong)(uint)fVar54;
                    if (DAT_ram_4009281c < fVar54) {
                      uVar72 = (ulonglong)(uint)DAT_ram_4009281c;
                    }
                  }
                  else {
                    uVar72 = 0;
                  }
                }
                uVar67 = (ulonglong)(uint)DAT_ram_4009281c;
                FUN_ram_4005f4d2(fVar55,fVar61,param_1);
                if ((float)*(undefined8 *)(param_1 + 0x11) != fVar60) {
                  param_1[0x66] = fVar60;
                  param_1[0x11] = fVar60;
                }
                if ((float)*(undefined8 *)(param_1 + 0x12) != fVar16) {
                  FUN_ram_4005f690(fVar16,param_1);
                  param_1[0x67] = fVar16;
                  param_1[0x12] = fVar16;
                }
                if ((float)*(undefined8 *)(param_1 + 0x13) == (float)uVar72) {
                  uVar72 = (ulonglong)(uint)param_1[100];
                }
                else {
                  param_1[100] = (float)uVar72;
                  *(ulonglong *)(param_1 + 0x13) = uVar72;
                }
                fVar60 = (float)uVar72;
                if ((float)*(undefined8 *)(param_1 + 0x14) == fVar52) {
                  fVar55 = param_1[0x65];
                }
                else {
                  param_1[0x65] = fVar52;
                  *(ulonglong *)(param_1 + 0x14) = uVar67;
                  fVar55 = fVar52;
                }
                uVar11 = DAT_ram_4009287c;
                fVar61 = param_1[99];
                if (0.0 <= fVar61) {
                  if (DAT_ram_40092820 < fVar61) {
                    fVar61 = DAT_ram_40092820;
                  }
                }
                else {
                  fVar61 = 0.0;
                }
                if (0.0 <= fVar60) {
                  if (fVar52 < fVar60) {
                    fVar60 = fVar52;
                  }
                }
                else {
                  fVar60 = 0.0;
                }
                if (0.0 <= fVar55) {
                  if (fVar52 < fVar55) {
                    fVar55 = fVar52;
                  }
                }
                else {
                  fVar55 = 0.0;
                }
                fVar54 = param_1[0x66];
                fVar32 = param_1[0x62];
                fVar16 = fVar52 / (float)param_6;
                fVar29 = 0.0;
                if ((0.0 <= fVar54) &&
                   ((fVar62 = fVar52, fVar52 < fVar54 ||
                    (fVar29 = 0.0, fVar62 = fVar54, DAT_ram_40092838 < fVar54)))) {
                  if (param_1[0x7b] != fVar62) {
                    param_1[0x7b] = fVar62;
                    fVar54 = (float)FUN_ram_40000d54(fVar62,uVar11);
                    param_1[0x7c] = fVar54 * DAT_ram_400937b0;
                  }
                  fVar29 = param_1[0x7c];
                }
                if (*(char *)((int)param_1 + 0x623e) == '\0') {
                  param_1[0x68] = fVar32;
                  param_1[0x69] = fVar61;
                  param_1[0x6a] = fVar60;
                  param_1[0x6b] = fVar55;
                  *(undefined1 *)((int)param_1 + 0x623e) = 1;
                  fVar63 = fVar55;
                  fVar54 = fVar32;
                  fVar12 = fVar60;
                  fVar62 = fVar61;
                }
                else {
                  fVar54 = param_1[0x68];
                  fVar62 = param_1[0x69];
                  fVar12 = param_1[0x6a];
                  fVar63 = param_1[0x6b];
                }
                fVar78 = DAT_ram_400937b0;
                fVar77 = DAT_ram_4009309c;
                fVar53 = DAT_ram_40092864;
                fVar50 = DAT_ram_40092838;
                puVar9 = DAT_ram_40092834;
                puVar76 = PTR_firmware_entry_ram_40092830;
                fVar43 = param_1[2];
                fVar32 = fVar32 - fVar54;
                fVar61 = fVar61 - fVar62;
                fVar60 = fVar60 - fVar12;
                fVar55 = fVar55 - fVar63;
                pfVar13 = (float *)param_1[1];
                fVar41 = (float)(uint)fVar43 - (float)PTR_firmware_entry_ram_40092830;
                fVar30 = param_1[4];
                fVar27 = param_1[3];
                uVar38 = 0;
                pfVar15 = param_5;
                pfVar14 = param_3;
                do {
                  fVar28 = (float)*(undefined8 *)param_2;
                  if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
                    fVar28 = (fVar28 + *pfVar14) * fVar53;
                  }
                  fVar37 = fVar52;
                  if ((fVar52 <= fVar54) && (fVar37 = fVar41, fVar54 <= fVar41)) {
                    fVar37 = fVar54;
                  }
                  fVar37 = (float)(uint)fVar27 - fVar37;
                  if (fVar37 < 0.0) {
                    fVar37 = fVar37 + (float)(uint)fVar43;
                  }
                  uVar40 = (uint)(-1 < (int)fVar37) * (int)fVar37;
                  pfVar24 = pfVar13 + uVar40 + 1;
                  if ((uint)fVar43 <= uVar40 + 1) {
                    pfVar24 = pfVar13;
                  }
                  fVar37 = (float)*(undefined8 *)(pfVar13 + uVar40) *
                           (fVar52 - (fVar37 - (float)uVar40)) + (fVar37 - (float)uVar40) * *pfVar24
                  ;
                  fVar44 = fVar37;
                  if ((fVar30 != 0.0) && (fVar50 < fVar29)) {
                    fVar46 = 0.0;
                    if ((0.0 <= fVar29) && (fVar46 = fVar78, fVar29 <= fVar78)) {
                      fVar46 = fVar29;
                    }
                    fVar47 = (float)(uint)*(ushort *)((int)param_1 + 0x622e);
                    if (fVar47 == 0.0) {
                      fVar47 = 0.0;
                    }
                    else {
                      fVar48 = param_1[5];
                      pfVar24 = (float *)((int)fVar30 + (uint)*(ushort *)((int)param_1 + 0x6236) * 4
                                         );
                      uVar40 = *(ushort *)((int)param_1 + 0x6236) + 1;
                      fVar44 = -(fVar46 * fVar37) + *pfVar24;
                      *pfVar24 = fVar46 * fVar44 + fVar37;
                      *(ushort *)((int)param_1 + 0x6236) =
                           (ushort)(uVar40 * 0x10000 >> 0x10) &
                           -(ushort)((uVar40 & 0xffff) < (uint)fVar47);
                      fVar37 = fVar44;
                      if ((uint)fVar48 <= (uint)fVar47) goto LAB_ram_400613dc;
                    }
                    uVar40 = (uint)*(ushort *)(param_1 + 0x188c);
                    if (uVar40 != 0) {
                      fVar48 = param_1[5];
                      pfVar24 = (float *)((int)fVar30 +
                                         ((uint)*(ushort *)(param_1 + 0x188e) + (int)fVar47) * 4);
                      uVar35 = *(ushort *)(param_1 + 0x188e) + 1;
                      fVar44 = -(fVar46 * fVar37) + *pfVar24;
                      fVar47 = (float)((int)fVar47 + uVar40);
                      *pfVar24 = fVar44 * fVar46 + fVar37;
                      *(ushort *)(param_1 + 0x188e) =
                           (ushort)(uVar35 * 0x10000 >> 0x10) &
                           -(ushort)((uVar35 & 0xffff) < uVar40);
                      fVar37 = fVar44;
                      if ((uint)fVar48 <= (uint)fVar47) goto LAB_ram_400613dc;
                    }
                    uVar40 = (uint)*(ushort *)((int)param_1 + 0x6232);
                    if (uVar40 != 0) {
                      fVar48 = param_1[5];
                      pfVar24 = (float *)((int)fVar30 +
                                         ((uint)*(ushort *)((int)param_1 + 0x623a) + (int)fVar47) *
                                         4);
                      uVar35 = *(ushort *)((int)param_1 + 0x623a) + 1;
                      fVar44 = -(fVar46 * fVar37) + *pfVar24;
                      fVar47 = (float)((int)fVar47 + uVar40);
                      *pfVar24 = fVar46 * fVar44 + fVar37;
                      *(ushort *)((int)param_1 + 0x623a) =
                           (ushort)(uVar35 * 0x10000 >> 0x10) &
                           -(ushort)((uVar35 & 0xffff) < uVar40);
                      fVar37 = fVar44;
                      if ((uint)fVar48 <= (uint)fVar47) goto LAB_ram_400613dc;
                    }
                    uVar1 = *(ushort *)(param_1 + 0x188d);
                    fVar44 = fVar37;
                    if (uVar1 != 0) {
                      pfVar24 = (float *)((int)fVar30 +
                                         ((int)fVar47 + (uint)*(ushort *)(param_1 + 0x188f)) * 4);
                      uVar40 = *(ushort *)(param_1 + 0x188f) + 1;
                      fVar44 = -(fVar46 * fVar37) + *pfVar24;
                      *(ulonglong *)pfVar24 = (ulonglong)(uint)(fVar46 * fVar44 + fVar37);
                      *(ushort *)(param_1 + 0x188f) =
                           (ushort)(uVar40 * 0x10000 >> 0x10) &
                           -(ushort)((uVar40 & 0xffff) < (uint)uVar1);
                    }
                  }
LAB_ram_400613dc:
                  fVar37 = param_1[0x4b] * fVar44 + param_1[0x50];
                  fVar46 = fVar37 * param_1[0x52] + param_1[0x57];
                  puVar6 = (undefined *)(fVar46 * fVar62 + fVar28);
                  param_1[0x50] = param_1[0x51] + (param_1[0x4c] * fVar44 - fVar37 * param_1[0x4e]);
                  param_1[0x51] = param_1[0x4d] * fVar44 - fVar37 * param_1[0x4f];
                  param_1[0x57] = param_1[0x58] + (fVar37 * param_1[0x53] - fVar46 * param_1[0x55]);
                  param_1[0x58] = fVar37 * param_1[0x54] - fVar46 * param_1[0x56];
                  puVar64 = puVar9;
                  if (((float)puVar9 <= (float)puVar6) &&
                     (puVar64 = puVar6, (float)puVar76 < (float)puVar6)) {
                    puVar64 = puVar76;
                  }
                  pfVar13[(int)fVar27] = (float)puVar64;
                  fVar27 = (float)((int)fVar27 + 1 & -(uint)((uint)((int)fVar27 + 1) < (uint)fVar43)
                                  );
                  if (fVar12 < 0.0) {
                    fVar46 = fVar46 * 0.0;
                    fVar28 = fVar52;
                  }
                  else {
                    fVar28 = 0.0;
                    if (fVar12 <= fVar52) {
                      fVar46 = fVar46 * fVar12;
                      if (fVar12 <= fVar78) {
LAB_ram_40062368:
                        fVar28 = fVar52;
                      }
                      else {
                        fVar28 = -((fVar12 - fVar78) * fVar77) + fVar52;
                        if (0.0 <= fVar28) {
                          if (fVar52 < fVar28) goto LAB_ram_40062368;
                        }
                        else {
                          fVar28 = 0.0;
                        }
                      }
                    }
                  }
                  fVar37 = (float)*(undefined8 *)param_2;
                  if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
                    fVar28 = fVar63 * (fVar37 * fVar28 + fVar46);
                    uVar72 = (ulonglong)(uint)fVar28;
                    if (param_5 == (float *)0x0) goto LAB_ram_40062302;
                    *(ulonglong *)param_4 = uVar72;
                    *pfVar15 = fVar28;
                  }
                  else {
                    fVar44 = fVar63 * (fVar28 * (fVar37 + *pfVar14) * fVar53 + fVar46);
                    uVar72 = (ulonglong)(uint)fVar44;
                    if (param_5 == (float *)0x0) {
LAB_ram_40062302:
                      *(ulonglong *)param_4 = uVar72;
                    }
                    else {
                      fVar37 = fVar37 - *pfVar14;
                      fVar28 = fVar28 * fVar63 * fVar53;
                      *(ulonglong *)param_4 = (ulonglong)(uint)(fVar28 * fVar37 + fVar44);
                      *pfVar15 = -(fVar28 * fVar37) + fVar44;
                    }
                  }
                  uVar38 = uVar38 + 1;
                  fVar54 = fVar54 + fVar32 * fVar16;
                  fVar62 = fVar62 + fVar61 * fVar16;
                  fVar12 = fVar12 + fVar60 * fVar16;
                  fVar63 = fVar63 + fVar55 * fVar16;
                  param_2 = param_2 + 1;
                  param_4 = param_4 + 1;
                  pfVar15 = pfVar15 + 1;
                  pfVar14 = pfVar14 + 1;
                  if (param_6 <= uVar38) {
                    param_1[3] = fVar27;
                    param_1[0x68] = fVar54;
                    param_1[0x69] = fVar62;
                    param_1[0x6a] = fVar12;
                    param_1[0x6b] = fVar63;
                    param_1[0x6c] = 0.0;
                    return;
                  }
                } while( true );
              }
              if (uVar38 != 7) goto LAB_ram_4006151e;
              fVar60 = DAT_ram_400982e4;
              fVar16 = DAT_ram_400982e8;
              fVar54 = DAT_ram_40098238;
              fVar55 = DAT_ram_400982e0;
              fVar61 = DAT_ram_40098118;
              if (param_7 != (float *)0x0) {
                fVar60 = param_7[2];
                fVar55 = *param_7;
                fVar61 = param_7[1];
                fVar16 = param_7[3];
                fVar54 = param_7[4];
                if (0.0 <= fVar60) {
                  if (DAT_ram_4009281c < fVar60) {
                    fVar60 = DAT_ram_4009281c;
                  }
                }
                else {
                  fVar60 = 0.0;
                }
                if (0.0 <= fVar16) {
                  if (DAT_ram_4009281c < fVar16) {
                    fVar16 = DAT_ram_4009281c;
                  }
                }
                else {
                  fVar16 = 0.0;
                }
                if (0.0 <= fVar54) {
                  if (DAT_ram_4009281c < fVar54) {
                    fVar54 = DAT_ram_4009281c;
                  }
                }
                else {
                  fVar54 = 0.0;
                }
              }
              uVar72 = (ulonglong)(uint)DAT_ram_4009281c;
              FUN_ram_4005f4d2(fVar55,fVar61,param_1);
              fVar32 = DAT_ram_40098104;
              fVar61 = DAT_ram_400930bc;
              fVar55 = DAT_ram_40093094;
              if ((float)*(undefined8 *)(param_1 + 0x11) == fVar60) {
                fVar29 = param_1[0x66];
                fVar62 = *param_1;
              }
              else {
                fVar62 = *param_1;
                fVar29 = fVar62;
                if (fVar62 < DAT_ram_40093094) {
                  fVar29 = DAT_ram_40092878;
                }
                fVar12 = 0.0;
                if ((0.0 <= fVar60) && (fVar12 = fVar52, fVar60 <= fVar52)) {
                  fVar12 = fVar60;
                }
                param_1[0x11] = fVar60;
                fVar29 = (fVar12 * fVar61 + 0.0) * fVar32 * fVar29;
                param_1[0x66] = fVar29;
              }
              if ((float)*(undefined8 *)(param_1 + 0x12) == fVar16) {
                fVar60 = param_1[0x70];
                fVar61 = param_1[0x71];
                goto LAB_ram_40062054;
              }
              if (fVar16 < 0.0) {
                fVar60 = 0.0;
LAB_ram_40064612:
                fVar60 = fVar60 * DAT_ram_40094204 + DAT_ram_400930d8;
                param_1[0x67] = fVar60;
                fVar61 = DAT_ram_40092878;
                if (fVar55 <= fVar62) {
                  fVar32 = fVar62 * DAT_ram_4009824c;
                  fVar61 = fVar62;
LAB_ram_40064640:
                  if (fVar32 < fVar60) {
                    fVar60 = fVar32;
                  }
                }
              }
              else {
                fVar60 = fVar52;
                if (fVar52 < fVar16) goto LAB_ram_40064612;
                fVar60 = fVar16 * DAT_ram_40094204 + DAT_ram_400930d8;
                param_1[0x67] = fVar60;
                fVar61 = fVar62;
                if (fVar62 < fVar55) {
                  fVar61 = DAT_ram_40092878;
                }
                if (0.0 <= fVar60) {
                  fVar32 = fVar61 * DAT_ram_4009824c;
                  goto LAB_ram_40064640;
                }
                fVar60 = 0.0;
              }
              fVar61 = (fVar60 / fVar61) * DAT_ram_400980f4;
              fVar60 = (float)FUN_ram_40000a08(fVar61);
              param_1[0x70] = fVar60;
              fVar61 = (float)FUN_ram_40000786(fVar61);
              param_1[0x71] = fVar61;
              param_1[0x12] = fVar16;
LAB_ram_40062054:
              if ((float)*(undefined8 *)(param_1 + 0x13) == fVar54) {
                fVar54 = param_1[100];
              }
              else {
                param_1[100] = fVar54;
                param_1[0x13] = fVar54;
              }
              if ((float)*(undefined8 *)(param_1 + 0x14) == fVar52) {
                fVar16 = param_1[0x65];
              }
              else {
                param_1[0x65] = fVar52;
                *(ulonglong *)(param_1 + 0x14) = uVar72;
                fVar16 = fVar52;
              }
              fVar32 = param_1[99];
              if (0.0 <= fVar32) {
                if (DAT_ram_40092820 < fVar32) {
                  fVar32 = DAT_ram_40092820;
                }
              }
              else {
                fVar32 = 0.0;
              }
              if (0.0 <= fVar54) {
                if (fVar52 < fVar54) {
                  fVar54 = fVar52;
                }
              }
              else {
                fVar54 = 0.0;
              }
              if (0.0 <= fVar16) {
                if (fVar52 < fVar16) {
                  fVar16 = fVar52;
                }
              }
              else {
                fVar16 = 0.0;
              }
              fVar12 = param_1[0x62];
              fVar63 = DAT_ram_40094ca0;
              if (fVar55 <= fVar62) {
                fVar63 = fVar62 * DAT_ram_400934d8;
              }
              if (0.0 <= fVar29) {
                if (fVar63 < fVar29) {
                  fVar29 = fVar63;
                }
              }
              else {
                fVar29 = 0.0;
              }
              fVar55 = fVar52 / (float)param_6;
              if (*(char *)((int)param_1 + 0x623e) == '\0') {
                param_1[0x68] = fVar12;
                param_1[0x69] = fVar32;
                param_1[0x6a] = fVar54;
                param_1[0x6b] = fVar16;
                *(undefined1 *)((int)param_1 + 0x623e) = 1;
                fVar50 = fVar16;
                fVar63 = fVar32;
                fVar62 = fVar12;
                fVar41 = fVar54;
              }
              else {
                fVar62 = param_1[0x68];
                fVar63 = param_1[0x69];
                fVar41 = param_1[0x6a];
                fVar50 = param_1[0x6b];
              }
              fVar43 = DAT_ram_400937b0;
              fVar30 = DAT_ram_4009309c;
              fVar27 = DAT_ram_40092864;
              puVar9 = DAT_ram_40092834;
              puVar76 = PTR_firmware_entry_ram_40092830;
              fVar37 = param_1[2];
              fVar54 = fVar54 - fVar41;
              fVar12 = fVar12 - fVar62;
              fVar32 = fVar32 - fVar63;
              fVar16 = fVar16 - fVar50;
              fVar78 = (float)(uint)fVar37 - (float)PTR_firmware_entry_ram_40092830;
              fVar53 = param_1[0x6e];
              fVar77 = param_1[0x6f];
              fVar28 = param_1[3];
              pfVar13 = (float *)param_1[1];
              uVar38 = 0;
              pfVar15 = param_5;
              pfVar14 = param_3;
              do {
                fVar44 = (float)*(undefined8 *)param_2;
                if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
                  fVar44 = (fVar44 + *pfVar14) * fVar27;
                }
                fVar46 = fVar29 * fVar53 + fVar62;
                if (fVar46 < fVar52) {
                  fVar46 = fVar52;
                }
                if (fVar78 < fVar46) {
                  fVar46 = fVar78;
                }
                fVar46 = (float)(uint)fVar28 - fVar46;
                if (fVar46 < 0.0) {
                  fVar46 = fVar46 + (float)(uint)fVar37;
                }
                uVar40 = (uint)(-1 < (int)fVar46) * (int)fVar46;
                pfVar24 = pfVar13 + uVar40 + 1;
                if ((uint)fVar37 <= uVar40 + 1) {
                  pfVar24 = pfVar13;
                }
                fVar46 = (float)*(undefined8 *)(pfVar13 + uVar40) *
                         (fVar52 - (fVar46 - (float)uVar40)) + (fVar46 - (float)uVar40) * *pfVar24;
                puVar6 = (undefined *)(fVar46 * fVar63 + fVar44);
                puVar64 = puVar9;
                if (((float)puVar9 <= (float)puVar6) &&
                   (puVar64 = puVar6, (float)puVar76 < (float)puVar6)) {
                  puVar64 = puVar76;
                }
                pfVar13[(int)fVar28] = (float)puVar64;
                fVar28 = (float)((int)fVar28 + 1 & -(uint)((uint)((int)fVar28 + 1) < (uint)fVar37));
                if (fVar41 < 0.0) {
                  fVar46 = fVar46 * 0.0;
                  fVar44 = fVar52;
                }
                else {
                  fVar44 = 0.0;
                  if (fVar41 <= fVar52) {
                    fVar46 = fVar46 * fVar41;
                    if (fVar41 <= fVar43) {
LAB_ram_40062380:
                      fVar44 = fVar52;
                    }
                    else {
                      fVar44 = -((fVar41 - fVar43) * fVar30) + fVar52;
                      if (0.0 <= fVar44) {
                        if (fVar52 < fVar44) goto LAB_ram_40062380;
                      }
                      else {
                        fVar44 = 0.0;
                      }
                    }
                  }
                }
                fVar47 = (float)*(undefined8 *)param_2;
                if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
                  fVar44 = fVar50 * (fVar47 * fVar44 + fVar46);
                  *(ulonglong *)param_4 = (ulonglong)(uint)fVar44;
                  if (param_5 != (float *)0x0) {
                    *pfVar15 = fVar44;
                  }
                }
                else {
                  fVar46 = fVar50 * (fVar44 * (fVar47 + *pfVar14) * fVar27 + fVar46);
                  if (param_5 == (float *)0x0) {
                    *param_4 = fVar46;
                  }
                  else {
                    fVar47 = fVar47 - *pfVar14;
                    fVar44 = fVar44 * fVar50 * fVar27;
                    *(ulonglong *)param_4 = (ulonglong)(uint)(fVar44 * fVar47 + fVar46);
                    *pfVar15 = -(fVar44 * fVar47) + fVar46;
                  }
                }
                fVar44 = fVar53 * fVar60;
                uVar38 = uVar38 + 1;
                fVar62 = fVar62 + fVar12 * fVar55;
                fVar63 = fVar63 + fVar32 * fVar55;
                fVar53 = fVar53 * fVar61 + fVar77 * fVar60;
                fVar77 = fVar77 * fVar61 - fVar44;
                fVar41 = fVar41 + fVar54 * fVar55;
                fVar50 = fVar50 + fVar16 * fVar55;
                param_2 = param_2 + 1;
                param_4 = param_4 + 1;
                pfVar15 = pfVar15 + 1;
                pfVar14 = pfVar14 + 1;
                if (param_6 <= uVar38) {
                  param_1[3] = fVar28;
                  param_1[0x68] = fVar62;
                  param_1[0x69] = fVar63;
                  param_1[0x6a] = fVar41;
                  param_1[0x6b] = fVar50;
                  param_1[0x6e] = fVar53;
                  param_1[0x6f] = fVar77;
                  return;
                }
              } while( true );
            }
            if (param_7 == (float *)0x0) {
              uVar73 = (ulonglong)DAT_ram_4009837c;
              uVar72 = (ulonglong)DAT_ram_400982d0;
              uVar67 = (ulonglong)DAT_ram_400982cc;
              fVar55 = DAT_ram_40098238;
              fVar61 = DAT_ram_400941ec;
LAB_ram_40063b62:
              uVar51 = (ulonglong)(uint)fVar61;
              if (DAT_ram_4009281c < fVar61) {
                uVar51 = (ulonglong)(uint)DAT_ram_4009281c;
              }
            }
            else {
              fVar61 = *param_7;
              uVar73 = (ulonglong)(uint)fVar61;
              fVar16 = param_7[1];
              fVar54 = param_7[2];
              fVar55 = param_7[4];
              if (fVar61 < 0.0) {
                uVar73 = 0;
              }
              else if (DAT_ram_4009281c < fVar61) {
                uVar73 = (ulonglong)(uint)DAT_ram_4009281c;
              }
              if (fVar16 < 0.0) {
                uVar67 = 0;
              }
              else {
                uVar67 = (ulonglong)(uint)fVar16;
                if (DAT_ram_4009281c < fVar16) {
                  uVar67 = (ulonglong)(uint)DAT_ram_4009281c;
                }
              }
              if (fVar54 < 0.0) {
                uVar72 = 0;
              }
              else {
                uVar72 = (ulonglong)(uint)fVar54;
                if (DAT_ram_4009281c < fVar54) {
                  uVar72 = (ulonglong)(uint)DAT_ram_4009281c;
                }
              }
              fVar61 = param_7[3];
              if (0.0 <= param_7[3]) goto LAB_ram_40063b62;
              uVar51 = 0;
            }
            uVar79 = (ulonglong)(uint)DAT_ram_4009281c;
            if (fVar55 < 0.0) {
              fVar55 = 0.0;
            }
            else if (DAT_ram_4009281c < fVar55) {
              fVar55 = DAT_ram_4009281c;
            }
            fVar61 = *param_1;
            fVar16 = (float)uVar73;
            if ((float)*(undefined8 *)(param_1 + 0xf) == fVar16) {
              fVar54 = param_1[0x62];
            }
            else {
              fVar32 = param_1[2];
              fVar54 = DAT_ram_4009281c;
              if (DAT_ram_40093094 <= fVar61) {
                fVar29 = fVar61;
                if (0.0 <= fVar16) {
                  uVar74 = uVar79;
                  if (fVar16 <= DAT_ram_4009281c) {
                    uVar74 = uVar73;
                  }
                }
                else {
                  uVar74 = 0;
                }
LAB_ram_40063434:
                fVar62 = ((float)uVar74 * DAT_ram_40094200 + (float)PTR_firmware_entry_ram_40092830)
                         * DAT_ram_40098104 * fVar29;
                if (DAT_ram_4009281c <= fVar62) {
                  fVar16 = DAT_ram_4009281c;
                  if (1 < (uint)fVar32) goto LAB_ram_4006346c;
                }
                else {
                  fVar62 = DAT_ram_4009281c;
                  if ((uint)fVar32 < 2) goto LAB_ram_4006347c;
LAB_ram_4006346c:
                  fVar16 = (float)((int)fVar32 - 2);
                }
                fVar54 = fVar62;
                if (fVar16 < fVar62) {
                  fVar54 = fVar16;
                }
              }
              else {
                fVar62 = DAT_ram_40098380;
                if ((0.0 <= fVar16) &&
                   (uVar74 = uVar73, fVar29 = DAT_ram_40092878, fVar62 = DAT_ram_4009825c,
                   fVar16 <= DAT_ram_4009281c)) goto LAB_ram_40063434;
                if (1 < (uint)fVar32) goto LAB_ram_4006346c;
              }
LAB_ram_4006347c:
              param_1[0x62] = fVar54;
              *(ulonglong *)(param_1 + 0xf) = uVar73;
            }
            fVar16 = (float)uVar67;
            if ((float)*(undefined8 *)(param_1 + 0x10) == fVar16) {
              fVar16 = param_1[99];
              goto LAB_ram_40063490;
            }
            if (fVar16 < 0.0) {
              fVar32 = 0.0;
LAB_ram_4006457c:
              fVar16 = fVar32 * DAT_ram_40092820 + 0.0;
            }
            else {
              fVar32 = fVar52;
              if (fVar52 < fVar16) goto LAB_ram_4006457c;
              fVar16 = fVar16 * DAT_ram_40092820 + 0.0;
              if (0.0 <= fVar16) {
                if (DAT_ram_40092820 < fVar16) {
                  fVar16 = DAT_ram_40092820;
                }
              }
              else {
                fVar16 = 0.0;
              }
            }
            param_1[99] = fVar16;
            *(ulonglong *)(param_1 + 0x10) = uVar67;
LAB_ram_40063490:
            fVar32 = DAT_ram_4009309c;
            fVar29 = (float)uVar72;
            if ((float)*(undefined8 *)(param_1 + 0x11) == fVar29) {
              fVar29 = param_1[0x66];
            }
            else {
              uVar67 = 0;
              if ((0.0 <= fVar29) && (uVar67 = uVar79, fVar29 <= fVar52)) {
                uVar67 = uVar72;
              }
              puVar26 = &DAT_ram_4009842c;
              fVar29 = (float)uVar67 * DAT_ram_40093494 + DAT_ram_4009309c;
              iVar17 = 0;
              iVar34 = 1;
              fVar62 = ABS(fVar29 - DAT_ram_4009309c);
              do {
                uVar75 = *puVar26;
                puVar26 = (undefined8 *)((int)puVar26 + 4);
                fVar12 = ABS(fVar29 - (float)uVar75);
                if (fVar12 < fVar62) {
                  iVar17 = iVar34;
                  fVar62 = fVar12;
                }
                iVar34 = iVar34 + 1;
              } while (iVar34 != 0x15);
              fVar29 = *(float *)(iVar17 * 4 + 0x40098428);
              *(ulonglong *)(param_1 + 0x11) = uVar72;
              param_1[0x66] = fVar29;
            }
            fVar62 = (float)uVar51;
            if ((float)*(undefined8 *)(param_1 + 0x12) == fVar62) {
              uVar51 = (ulonglong)(uint)param_1[0x67];
            }
            else {
              param_1[0x67] = fVar62;
              param_1[0x12] = fVar62;
            }
            if ((float)*(undefined8 *)(param_1 + 0x13) == fVar55) {
              fVar55 = param_1[100];
            }
            else {
              param_1[100] = fVar55;
              param_1[0x13] = fVar55;
            }
            if ((float)*(undefined8 *)(param_1 + 0x14) == fVar52) {
              fVar62 = param_1[0x65];
            }
            else {
              param_1[0x65] = fVar52;
              *(ulonglong *)(param_1 + 0x14) = uVar79;
              fVar62 = fVar52;
            }
            if (fVar16 < 0.0) {
              fVar16 = 0.0;
            }
            else if (DAT_ram_40092820 < fVar16) {
              fVar16 = DAT_ram_40092820;
            }
            if (fVar55 < 0.0) {
              fVar55 = 0.0;
            }
            else if (fVar52 < fVar55) {
              fVar55 = fVar52;
            }
            if (fVar62 < 0.0) {
              fVar62 = 0.0;
            }
            else if (fVar52 < fVar62) {
              fVar62 = fVar52;
            }
            fVar12 = fVar32;
            if ((fVar29 < fVar32) || (fVar12 = DAT_ram_400930c4, DAT_ram_400930c4 < fVar29)) {
              fVar29 = fVar12;
            }
            if ((float)uVar51 < 0.0) {
              uVar51 = 0;
            }
            else if (fVar52 < (float)uVar51) {
              uVar51 = uVar79;
            }
            if (fVar61 < fVar60) {
              uVar79 = (ulonglong)DAT_ram_40098384;
              bVar3 = true;
              fVar61 = DAT_ram_40098378;
            }
            else {
              fVar60 = DAT_ram_4009839c / fVar61;
              fVar61 = fVar61 * DAT_ram_4009833c;
              if (fVar60 < 0.0) {
                uVar79 = 0;
                bVar3 = true;
              }
              else if (fVar52 < fVar60) {
                bVar3 = false;
              }
              else {
                bVar3 = fVar60 < DAT_ram_40092854;
                uVar79 = (ulonglong)(uint)fVar60;
              }
            }
            fVar60 = fVar52 / (float)param_6;
            if (DAT_ram_400983a0 <= fVar29) {
              fVar12 = 0.0;
              fStack_ac = 0.0;
              iVar17 = 0;
              fVar29 = fVar12;
            }
            else {
              if (fVar29 != param_1[0x77]) {
                fVar63 = (float)FUN_ram_40000d54(puVar76,-(fVar29 - fVar52));
                fVar12 = DAT_ram_40093668;
                uVar79 = CONCAT44((int)uVar51,(int)uVar79);
                uVar51 = CONCAT44(fVar61,(int)uVar51);
                if (fVar63 < DAT_ram_40092838) {
                  fVar63 = DAT_ram_40092838;
                }
                param_1[0x78] = fVar63;
                param_1[0x77] = fVar29;
                param_1[0x7a] = fVar63 * fVar12;
                param_1[0x79] = fVar52 / fVar63;
              }
              fStack_ac = param_1[0x7a];
              fVar12 = param_1[0x78];
              iVar17 = 1;
              fVar29 = param_1[0x79];
            }
            if (*(char *)((int)param_1 + 0x623e) == '\0') {
              param_1[0x68] = fVar54;
              param_1[0x69] = fVar16;
              param_1[0x6a] = fVar55;
              param_1[0x6b] = fVar62;
              *(undefined1 *)((int)param_1 + 0x623e) = 1;
              fVar50 = fVar55;
              fVar53 = fVar62;
              fVar41 = fVar16;
              fVar63 = fVar54;
            }
            else {
              fVar50 = param_1[0x6a];
              fVar53 = param_1[0x6b];
              fVar41 = param_1[0x69];
              fVar63 = param_1[0x68];
            }
            puVar9 = DAT_ram_40092834;
            fVar56 = param_1[2];
            fVar54 = fVar54 - fVar63;
            fVar16 = fVar16 - fVar41;
            fVar62 = fVar62 - fVar53;
            fVar55 = fVar55 - fVar50;
            fVar45 = (float)uVar51;
            fVar37 = -fVar45;
            fVar77 = param_1[0x75];
            fVar78 = param_1[0x76];
            fVar27 = param_1[0x6e];
            fVar30 = param_1[0x6f];
            fVar43 = param_1[0x70];
            fVar28 = param_1[0x71];
            fVar48 = param_1[3];
            puVar26 = (undefined8 *)param_1[1];
            iVar34 = 0;
            fVar44 = in_register_00000100;
            fVar46 = DAT_ram_400937b0;
            fVar47 = DAT_ram_40092864;
            do {
              fVar59 = (float)DAT_ram_400983a4;
              fVar65 = *param_2;
              if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
                fVar65 = (fVar65 + (float)*(undefined8 *)((int)param_3 + iVar34)) * fVar47;
              }
              fVar25 = fVar27 * fVar61 + fVar63;
              if (fVar25 < fVar52) {
                fVar25 = fVar52;
              }
              if ((float)(uint)fVar56 - (float)puVar76 < fVar25) {
                fVar25 = (float)(uint)fVar56 - (float)puVar76;
              }
              fVar25 = (float)(uint)fVar48 - fVar25;
              if (fVar25 < 0.0) {
                fVar25 = fVar25 + in_register_00000100;
              }
              uVar38 = (uint)(-1 < (int)fVar25) * (int)fVar25;
              puVar22 = (undefined8 *)((int)puVar26 + (uVar38 + 1) * 4);
              if ((uint)fVar56 <= uVar38 + 1) {
                puVar22 = puVar26;
              }
              fVar25 = (float)*(undefined8 *)((int)puVar26 + uVar38 * 4) *
                       (fVar52 - (fVar25 - (float)uVar38)) +
                       (fVar25 - (float)uVar38) * (float)*puVar22;
              fVar58 = (float)uVar51;
              if (bVar3) {
                fVar77 = fVar77 + (float)uVar79;
                if (fVar52 <= fVar77) {
                  fVar77 = fVar77 - fVar52;
                  fVar78 = fVar25;
                }
                if (iVar17 == 0) goto LAB_ram_40063702;
LAB_ram_40063800:
                fVar70 = fVar37;
                if ((fVar12 <= 0.0) || (fVar29 <= 0.0)) {
                  if ((fVar44 <= fVar78) && (fVar70 = fVar58, fVar78 <= fVar52))
                  goto LAB_ram_40063702;
                }
                else {
                  uVar38 = (int)param_1[0x61] * 0x19660d + 0x3c6ef35f;
                  fVar33 = (float)(uVar38 * 0x19660d + 0x3c6ef35f);
                  fVar46 = (float)uVar38 * (float)DAT_ram_400983a4;
                  param_1[0x61] = fVar33;
                  fVar59 = (float)FUN_ram_400009a6(fVar29 * (fStack_ac *
                                                             ((float)(uint)fVar33 * fVar59 *
                                                              (float)puVar76 + fVar44 +
                                                             fVar46 * (float)puVar76 + fVar44) *
                                                             fVar47 + fVar78));
                  fVar59 = fVar12 * fVar59;
                  uVar79 = CONCAT44(fVar12,(float)uVar79);
                  uVar51 = CONCAT44(iVar17,fVar58);
                  fVar44 = DAT_ram_40092818;
                  fVar46 = DAT_ram_400937b0;
                  fVar47 = DAT_ram_40092864;
                  if ((DAT_ram_40092818 <= fVar59) && (fVar70 = fVar58, fVar59 <= fVar52)) {
                    fVar70 = fVar58 * fVar59;
                  }
                }
              }
              else {
                fVar78 = fVar25;
                if (iVar17 != 0) goto LAB_ram_40063800;
LAB_ram_40063702:
                fVar70 = fVar78 * fVar58;
              }
              fVar70 = fVar25 * (fVar52 - fVar45) + fVar70;
              puVar6 = (undefined *)(fVar70 * fVar41 + fVar65);
              puVar64 = puVar9;
              if (((float)puVar9 <= (float)puVar6) &&
                 (puVar64 = puVar6, (float)puVar76 < (float)puVar6)) {
                puVar64 = puVar76;
              }
              *(undefined **)((int)puVar26 + (int)fVar48 * 4) = puVar64;
              fVar48 = (float)((int)fVar48 + 1 & -(uint)((uint)((int)fVar48 + 1) < (uint)fVar56));
              if (fVar50 < 0.0) {
                fVar70 = fVar70 * 0.0;
                fVar65 = fVar52;
              }
              else {
                fVar65 = 0.0;
                if (fVar50 <= fVar52) {
                  fVar70 = fVar70 * fVar50;
                  if (fVar50 <= fVar46) {
LAB_ram_4006394c:
                    fVar65 = fVar52;
                  }
                  else {
                    fVar65 = -((fVar50 - fVar46) * fVar32) + fVar52;
                    if (0.0 <= fVar65) {
                      if (fVar52 < fVar65) goto LAB_ram_4006394c;
                    }
                    else {
                      fVar65 = 0.0;
                    }
                  }
                }
              }
              fVar59 = (float)*(undefined8 *)param_2;
              if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
                fVar65 = fVar53 * (fVar59 * fVar65 + fVar70);
                *param_4 = fVar65;
                if (param_5 != (float *)0x0) {
                  *(ulonglong *)((int)param_5 + iVar34) = (ulonglong)(uint)fVar65;
                }
              }
              else {
                fVar58 = (float)*(undefined8 *)((int)param_3 + iVar34);
                fVar25 = fVar53 * (fVar65 * (fVar59 + fVar58) * fVar47 + fVar70);
                if (param_5 == (float *)0x0) {
                  *param_4 = fVar25;
                }
                else {
                  fVar59 = fVar59 - fVar58;
                  fVar65 = fVar65 * fVar53 * fVar47;
                  *param_4 = fVar65 * fVar59 + fVar25;
                  *(ulonglong *)((int)param_5 + iVar34) =
                       (ulonglong)(uint)(-(fVar65 * fVar59) + fVar25);
                }
              }
              fVar65 = fVar43 * fVar27;
              iVar34 = iVar34 + 4;
              fVar63 = fVar63 + fVar54 * fVar60;
              fVar41 = fVar41 + fVar16 * fVar60;
              fVar27 = fVar28 * fVar27 + fVar43 * fVar30;
              fVar30 = fVar28 * fVar30 - fVar65;
              fVar50 = fVar50 + fVar55 * fVar60;
              fVar53 = fVar53 + fVar62 * fVar60;
              param_2 = param_2 + 1;
              param_4 = param_4 + 1;
              if (param_6 << 2 == iVar34) {
                param_1[3] = fVar48;
                param_1[0x68] = fVar63;
                param_1[0x69] = fVar41;
                param_1[0x6a] = fVar50;
                param_1[0x6b] = fVar53;
                param_1[0x75] = fVar77;
                param_1[0x76] = fVar78;
                param_1[0x6e] = fVar27;
                param_1[0x6f] = fVar30;
                return;
              }
            } while( true );
          }
          fVar55 = DAT_ram_400982b4;
          fVar16 = DAT_ram_4009281c;
          fVar60 = DAT_ram_400982bc;
          fVar61 = DAT_ram_400982b8;
          if (param_7 != (float *)0x0) {
            fVar55 = *param_7;
            fVar61 = param_7[1];
            fVar16 = param_7[2];
            fVar60 = param_7[3];
            if (0.0 <= fVar55) {
              if (DAT_ram_4009281c < fVar55) {
                fVar55 = DAT_ram_4009281c;
              }
            }
            else {
              fVar55 = 0.0;
            }
            if (0.0 <= fVar16) {
              if (DAT_ram_4009281c < fVar16) {
                fVar16 = DAT_ram_4009281c;
              }
            }
            else {
              fVar16 = 0.0;
            }
            if (0.0 <= fVar60) {
              if (DAT_ram_4009281c < fVar60) {
                fVar60 = DAT_ram_4009281c;
              }
            }
            else {
              fVar60 = 0.0;
            }
          }
          uVar72 = (ulonglong)(uint)DAT_ram_4009281c;
          pfVar15 = param_1 + 0x85;
          if ((float)*(undefined8 *)(param_1 + 0x11) == fVar16) {
            uVar75 = *(undefined8 *)(param_1 + 0xf);
            FUN_ram_4005f4d2(fVar55,fVar61,param_1);
            if ((float)uVar75 == fVar55) {
              fStack_f0 = param_1[0x67];
              uVar38 = (uint)*(ushort *)((int)param_1 + 0x20e);
              fStack_dc = param_1[0x80];
              uVar40 = (uint)*(ushort *)(param_1 + 0x84);
              fVar55 = param_1[0x7f];
              fStack_d0 = param_1[0x81];
              fVar61 = param_1[0x7e];
              fStack_cc = param_1[0x82];
              fStack_c8 = (float)*(ushort *)(param_1 + 0x83);
              fVar54 = DAT_ram_40093094;
              puVar76 = PTR_firmware_entry_ram_40092830;
              goto LAB_ram_40062d5e;
            }
            bVar3 = false;
          }
          else {
            bVar3 = true;
            FUN_ram_4005f4d2(fVar55,fVar61,param_1);
          }
          puVar76 = PTR_firmware_entry_ram_40092830;
          fVar61 = 0.0;
          if ((0.0 <= fVar16) && (fVar61 = fVar52, fVar16 <= fVar52)) {
            fVar61 = fVar16;
          }
          puVar26 = &DAT_ram_400983b4;
          fVar61 = fVar61 * DAT_ram_400934e0 + DAT_ram_40093490;
          iVar17 = 0;
          iVar34 = 1;
          fVar54 = ABS(fVar61 + DAT_ram_40093494);
          do {
            uVar75 = *puVar26;
            puVar26 = (undefined8 *)((int)puVar26 + 4);
            fVar32 = ABS(fVar61 - (float)uVar75);
            if (fVar32 < fVar54) {
              iVar17 = iVar34;
              fVar54 = fVar32;
            }
            iVar34 = iVar34 + 1;
          } while (iVar34 != 0x1e);
          fVar62 = (float)FUN_ram_40000d54(PTR_firmware_entry_ram_40092830,
                                           (float)*(undefined8 *)
                                                   ((int)&DAT_ram_400983ac + iVar17 * 4 + 4) /
                                           DAT_ram_40093494);
          fVar32 = DAT_ram_40098104;
          fVar61 = DAT_ram_400930bc;
          fVar54 = DAT_ram_40093094;
          fVar29 = DAT_ram_400930d8;
          if ((fVar62 < DAT_ram_400930d8) || (fVar29 = DAT_ram_4009284c, DAT_ram_4009284c < fVar62))
          {
            fVar62 = fVar29;
          }
          fVar12 = (float)*(undefined8 *)param_1;
          fVar29 = DAT_ram_400930bc;
          if (fVar55 < 0.0) {
            if (fVar12 < DAT_ram_40093094) {
              fVar12 = DAT_ram_40092878;
            }
          }
          else if (fVar52 < fVar55) {
            fVar29 = DAT_ram_40098260;
            if (fVar12 < DAT_ram_40093094) {
              fVar12 = DAT_ram_40092878;
            }
          }
          else {
            if (fVar12 < DAT_ram_40093094) {
              fVar12 = DAT_ram_40092878;
            }
            fVar55 = (fVar55 * DAT_ram_400941f8 + DAT_ram_400930f4) * DAT_ram_40098398;
            if ((DAT_ram_400930bc <= fVar55) && (fVar29 = fVar55, DAT_ram_40098260 < fVar55)) {
              fVar29 = DAT_ram_40098260;
            }
          }
          iVar17 = FUN_ram_40000938(fVar29 * DAT_ram_40098104 * fVar12);
          if (iVar17 < 0x20) {
            iVar17 = 0x20;
          }
          fVar55 = (float)*(undefined8 *)param_1;
          if ((float)*(undefined8 *)param_1 < fVar54) {
            fVar55 = DAT_ram_40092878;
          }
          fVar55 = ((float)iVar17 * fVar54) / fVar55;
          FUN_ram_4005f690(0,param_1);
          fVar29 = (float)*(undefined8 *)param_1;
          if ((float)*(undefined8 *)param_1 < fVar54) {
            fVar29 = DAT_ram_40092878;
          }
          if ((fVar61 <= fVar55) && (fVar61 = fVar55, DAT_ram_400934dc < fVar55)) {
            fVar61 = DAT_ram_400934dc;
          }
          uVar38 = FUN_ram_40000938(fVar61 * fVar32 * fVar29);
          if (0x1800 < (int)uVar38) {
            uVar38 = 0x1800;
          }
          uVar40 = 0x40;
          if (0x3f < (int)uVar38) {
            uVar40 = uVar38;
          }
          uVar42 = uVar40 & 0xffff;
          uVar35 = uVar40 + 4;
          if ((uVar42 == *(ushort *)(param_1 + 0x83)) &&
             (uVar38 = (uint)*(ushort *)((int)param_1 + 0x20e), (uVar35 & 0xffff) == uVar38)) {
            uVar40 = (uint)*(ushort *)(param_1 + 0x84);
            fVar55 = param_1[0x7f];
            fVar61 = param_1[0x7e];
            fVar32 = fVar52;
            if (fVar62 <= 0.0) goto LAB_ram_40064282;
            fStack_dc = 0.0;
            fStack_c8 = 0.0;
            fVar32 = fVar62;
            if (uVar42 != 0) goto LAB_ram_40064282;
          }
          else {
            uVar38 = uVar35 & 0xffff;
            *(short *)((int)param_1 + 0x20e) = (short)uVar35;
            *(short *)(param_1 + 0x83) = (short)uVar40;
            memset(pfVar15,0,0x6010);
            *(undefined2 *)(param_1 + 0x84) = 0;
            param_1[0x7f] = 0.0;
            param_1[0x7e] = 0.0;
            fVar55 = 0.0;
            uVar40 = 0;
            fVar61 = fVar55;
            fVar32 = fVar62;
            if (fVar62 <= 0.0) {
              fVar55 = 0.0;
              uVar40 = 0;
              fVar61 = fVar55;
              fVar32 = fVar52;
            }
LAB_ram_40064282:
            fStack_c8 = (float)uVar42;
            fStack_dc = (fVar32 - fVar52) / fStack_c8;
            if (DAT_ram_4009831c <= fStack_dc) {
              if (DAT_ram_4009824c < fStack_dc) {
                fStack_dc = DAT_ram_4009824c;
              }
            }
            else {
              fStack_dc = DAT_ram_4009831c;
            }
          }
          fVar32 = DAT_ram_400980f4;
          param_1[0x80] = fStack_dc;
          fStack_d0 = (float)FUN_ram_40000a08(fStack_dc * fVar32);
          param_1[0x81] = fStack_d0;
          fStack_cc = (float)FUN_ram_40000786(fStack_dc * fVar32);
          fStack_f0 = DAT_ram_4009281c;
          param_1[0x66] = fVar62;
          param_1[0x82] = fStack_cc;
          param_1[0x67] = fStack_f0;
          if (bVar3) {
            param_1[0x11] = fVar16;
          }
LAB_ram_40062d5e:
          if ((float)*(undefined8 *)(param_1 + 0x12) == fVar60) {
            fVar60 = param_1[100];
          }
          else {
            param_1[100] = fVar60;
            param_1[0x12] = fVar60;
          }
          if ((float)*(undefined8 *)(param_1 + 0x13) == fVar52) {
            fVar16 = param_1[0x65];
          }
          else {
            param_1[0x65] = fVar52;
            *(ulonglong *)(param_1 + 0x13) = uVar72;
            fVar16 = fVar52;
          }
          fVar32 = param_1[99];
          if (fVar32 < 0.0) {
            fVar32 = 0.0;
          }
          else if (DAT_ram_40092820 < fVar32) {
            fVar32 = DAT_ram_40092820;
          }
          if (fVar60 < 0.0) {
            fVar60 = 0.0;
          }
          else if (fVar52 < fVar60) {
            fVar60 = fVar52;
          }
          if (fVar16 < 0.0) {
            fVar16 = 0.0;
          }
          else if (fVar52 < fVar16) {
            fVar16 = fVar52;
          }
          fVar29 = param_1[0x62];
          if (fStack_f0 < 0.0) {
            fStack_f0 = 0.0;
            fStack_e4 = fVar52;
          }
          else if (fStack_f0 <= fVar52) {
            fStack_e4 = fVar52 - fStack_f0;
          }
          else {
            fStack_e4 = 0.0;
            fStack_f0 = fVar52;
          }
          if ((float)*(undefined8 *)param_1 < fVar54) {
            fStack_e0 = DAT_ram_40098378;
          }
          else {
            fStack_e0 = (float)*(undefined8 *)param_1 * DAT_ram_4009833c;
          }
          fVar63 = param_1[0x7d];
          fVar41 = param_1[0x4b];
          fVar12 = fVar52 / (float)param_6;
          puVar26 = (undefined8 *)param_1[1];
          fVar50 = param_1[0x4c];
          fVar28 = param_1[2];
          fVar37 = param_1[3];
          fVar53 = param_1[0x4d];
          fVar77 = param_1[0x4e];
          fVar43 = param_1[0x4f];
          fVar54 = param_1[0x50];
          fVar78 = param_1[0x51];
          fVar30 = param_1[0x52];
          fVar48 = param_1[0x53];
          fVar47 = param_1[0x54];
          fVar46 = param_1[0x55];
          fVar44 = param_1[0x56];
          fVar62 = param_1[0x57];
          fVar27 = param_1[0x58];
          if (uVar38 < 2) {
            fVar56 = 0.0;
          }
          else {
            fVar45 = fVar55 * DAT_ram_400980f4;
            fVar56 = (float)FUN_ram_40000a08(fVar45);
            uVar72 = FUN_ram_40000786(fVar45);
          }
          if (*(char *)((int)param_1 + 0x623e) == '\0') {
            param_1[0x68] = fVar29;
            param_1[0x69] = fVar32;
            param_1[0x6a] = fVar60;
            param_1[0x6b] = fVar16;
            *(undefined1 *)((int)param_1 + 0x623e) = 1;
            fVar59 = fVar16;
            fVar65 = fVar32;
            fVar45 = fVar29;
          }
          else {
            fVar60 = param_1[0x6a];
            fVar59 = param_1[0x6b];
            fVar65 = param_1[0x69];
            fVar45 = param_1[0x68];
          }
          fVar10 = DAT_ram_40092864;
          puVar9 = DAT_ram_40092834;
          fVar29 = fVar29 - fVar45;
          fVar32 = fVar32 - fVar65;
          fVar16 = fVar16 - fVar59;
          fVar25 = param_1[0x6f];
          fVar58 = param_1[0x70];
          fVar70 = param_1[0x71];
          pfVar24 = param_2 + param_6;
          fVar8 = (float)(uint)fVar28 - (float)puVar76;
          fVar33 = param_1[0x6e];
          pfVar14 = param_5;
          pfVar13 = param_3;
          do {
            fVar66 = (float)*(undefined8 *)param_2;
            if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
              fVar66 = (fVar66 + *pfVar13) * fVar10;
            }
            fVar68 = fVar33 * fStack_e0 + fVar45;
            if (fVar68 < fVar52) {
              fVar68 = fVar52;
            }
            if (fVar8 < fVar68) {
              fVar68 = fVar8;
            }
            fVar68 = (float)(uint)fVar37 - fVar68;
            if (fVar68 < 0.0) {
              fVar68 = fVar68 + (float)(uint)fVar28;
            }
            uVar35 = (uint)(-1 < (int)fVar68) * (int)fVar68;
            puVar22 = (undefined8 *)((int)puVar26 + (uVar35 + 1) * 4);
            if ((uint)fVar28 <= uVar35 + 1) {
              puVar22 = puVar26;
            }
            fVar68 = (float)*(undefined8 *)((int)puVar26 + uVar35 * 4) *
                     (fVar52 - (fVar68 - (float)uVar35)) +
                     (fVar68 - (float)uVar35) * (float)*puVar22;
            fVar49 = fVar68;
            if (1 < uVar38) {
              fVar49 = fVar55 + fVar10;
              if (fVar52 <= fVar49) {
                fVar49 = fVar49 - fVar52;
              }
              fVar2 = (float)uVar38;
              fVar69 = -(fStack_c8 * (fVar52 - fVar55)) + (float)uVar40;
              if (fVar69 < 0.0) {
                fVar69 = fVar69 + fVar2;
              }
              else if (fVar2 <= fVar69) {
                fVar69 = fVar69 - fVar2;
              }
              uVar35 = (uint)(-1 < (int)fVar69) * (int)fVar69;
              pfVar36 = pfVar15 + uVar35 + 1;
              if (uVar38 <= uVar35 + 1) {
                pfVar36 = pfVar15;
              }
              fVar49 = (float)uVar40 - (fVar52 - fVar49) * fStack_c8;
              fVar4 = *pfVar36;
              fVar5 = pfVar15[uVar35];
              if (fVar49 < 0.0) {
                fVar49 = fVar49 + fVar2;
              }
              else if (fVar2 <= fVar49) {
                fVar49 = fVar49 - fVar2;
              }
              uVar42 = (uint)(-1 < (int)fVar49) * (int)fVar49;
              pfVar36 = pfVar15 + uVar42 + 1;
              if (uVar38 <= uVar42 + 1) {
                pfVar36 = pfVar15;
              }
              fVar2 = *pfVar36;
              fVar31 = pfVar15[uVar42];
              fVar57 = (float)uVar72;
              fVar7 = -(fVar57 * fVar10) + fVar10;
              fVar55 = fVar55 + fStack_dc;
              uVar39 = uVar40 + 1 & 0xffff;
              *(ulonglong *)(pfVar15 + uVar40) = (ulonglong)(uint)fVar68;
              uVar40 = uVar39 & -(uint)(uVar39 < uVar38);
              fVar61 = (fVar7 * ((fVar52 - (fVar69 - (float)uVar35)) * fVar5 +
                                (fVar69 - (float)uVar35) * fVar4) +
                       (fVar52 - fVar7) *
                       ((fVar52 - (fVar49 - (float)uVar42)) * fVar31 +
                       (fVar49 - (float)uVar42) * fVar2)) * (fVar52 - fVar63) + fVar63 * fVar61;
              if (fVar55 < fVar52) {
                if (fVar55 < 0.0) {
                  fVar55 = fVar55 + fVar52;
                }
              }
              else {
                fVar55 = fVar55 - fVar52;
              }
              fVar49 = fVar56 * fStack_d0;
              fVar56 = fVar56 * fStack_cc + fVar57 * fStack_d0;
              uVar72 = (ulonglong)(uint)(fVar57 * fStack_cc - fVar49);
              fVar49 = fVar61;
            }
            fVar68 = fVar68 * fStack_e4 + fStack_f0 * fVar49;
            fVar49 = fVar41 * fVar68 + fVar54;
            fVar69 = fVar30 * fVar49 + fVar62;
            fVar66 = fVar69 * fVar65 + fVar66;
            uVar67 = (ulonglong)(uint)fVar66;
            fVar54 = (fVar50 * fVar68 - fVar77 * fVar49) + fVar78;
            fVar78 = fVar53 * fVar68 - fVar43 * fVar49;
            fVar62 = (fVar48 * fVar49 - fVar46 * fVar69) + fVar27;
            fVar27 = fVar47 * fVar49 - fVar44 * fVar69;
            if (fVar66 < (float)puVar9) {
              uVar67 = ZEXT48(puVar9);
            }
            else if ((float)puVar76 < fVar66) {
              uVar67 = ZEXT48(puVar76);
            }
            *(ulonglong *)((int)puVar26 + (int)fVar37 * 4) = uVar67;
            fVar37 = (float)((int)fVar37 + 1 & -(uint)((uint)((int)fVar37 + 1) < (uint)fVar28));
            if (fVar60 < 0.0) {
              fVar68 = fVar68 * 0.0;
              fVar66 = fVar52;
            }
            else {
              fVar66 = 0.0;
              if (fVar60 <= fVar52) {
                fVar68 = fVar68 * fVar60;
                if (fVar60 <= DAT_ram_400937b0) {
LAB_ram_4006328a:
                  fVar66 = fVar52;
                }
                else {
                  fVar66 = -((fVar60 - DAT_ram_400937b0) * DAT_ram_4009309c) + fVar52;
                  if (0.0 <= fVar66) {
                    if (fVar52 < fVar66) goto LAB_ram_4006328a;
                  }
                  else {
                    fVar66 = 0.0;
                  }
                }
              }
            }
            fVar49 = (float)*(undefined8 *)param_2;
            if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
              uVar67 = (ulonglong)(uint)(fVar59 * (fVar49 * fVar66 + fVar68));
              *(ulonglong *)param_4 = uVar67;
              if (param_5 != (float *)0x0) {
                *(ulonglong *)pfVar14 = uVar67;
              }
            }
            else {
              fVar68 = fVar59 * (fVar66 * (fVar49 + *pfVar13) * fVar10 + fVar68);
              if (param_5 == (float *)0x0) {
                *(ulonglong *)param_4 = (ulonglong)(uint)fVar68;
              }
              else {
                fVar49 = fVar49 - *pfVar13;
                fVar66 = fVar66 * fVar59 * fVar10;
                *(ulonglong *)param_4 = (ulonglong)(uint)(fVar66 * fVar49 + fVar68);
                *(ulonglong *)pfVar14 = (ulonglong)(uint)(-(fVar66 * fVar49) + fVar68);
              }
            }
            fVar66 = fVar58 * fVar25;
            param_2 = param_2 + 1;
            fVar45 = fVar45 + fVar29 * fVar12;
            fVar25 = fVar70 * fVar25 - fVar58 * fVar33;
            fVar65 = fVar65 + fVar32 * fVar12;
            fVar33 = fVar70 * fVar33 + fVar66;
            fVar60 = fVar60 + in_register_00000100;
            param_4 = param_4 + 1;
            pfVar14 = pfVar14 + 1;
            fVar59 = fVar59 + fVar16 * fVar12;
            pfVar13 = pfVar13 + 1;
            if (pfVar24 == param_2) {
              param_1[0x68] = fVar45;
              param_1[0x69] = fVar65;
              param_1[0x4b] = fVar41;
              param_1[0x6a] = fVar60;
              param_1[0x6b] = fVar59;
              param_1[0x6e] = fVar33;
              param_1[0x6f] = fVar25;
              param_1[3] = fVar37;
              param_1[0x4c] = fVar50;
              param_1[0x4d] = fVar53;
              param_1[0x4e] = fVar77;
              param_1[0x4f] = fVar43;
              param_1[0x50] = fVar54;
              param_1[0x51] = fVar78;
              param_1[0x52] = fVar30;
              param_1[0x53] = fVar48;
              param_1[0x54] = fVar47;
              param_1[0x55] = fVar46;
              param_1[0x56] = fVar44;
              param_1[0x57] = fVar62;
              param_1[0x58] = fVar27;
              *(short *)(param_1 + 0x84) = (short)uVar40;
              param_1[0x7f] = fVar55;
              param_1[0x7e] = fVar61;
              return;
            }
          } while( true );
        }
        if (param_7 == (float *)0x0) {
          uVar72 = (ulonglong)DAT_ram_400982ac;
          fVar55 = DAT_ram_40098288;
          fVar16 = DAT_ram_40098118;
          fVar54 = DAT_ram_400982b0;
LAB_ram_40063a84:
          uVar67 = (ulonglong)(uint)DAT_ram_4009281c;
          if (fVar54 <= DAT_ram_4009281c) {
            uVar67 = (ulonglong)(uint)fVar54;
          }
        }
        else {
          fVar55 = param_7[2];
          fVar61 = *param_7;
          fVar54 = param_7[1];
          fVar16 = param_7[3];
          if (0.0 <= fVar55) {
            if (DAT_ram_4009281c < fVar55) {
              fVar55 = DAT_ram_4009281c;
            }
          }
          else {
            fVar55 = 0.0;
          }
          if (0.0 <= fVar16) {
            if (DAT_ram_4009281c < fVar16) {
              fVar16 = DAT_ram_4009281c;
            }
          }
          else {
            fVar16 = 0.0;
          }
          if (0.0 <= fVar61) {
            uVar72 = (ulonglong)(uint)fVar61;
            if (DAT_ram_4009281c < fVar61) {
              uVar72 = (ulonglong)(uint)DAT_ram_4009281c;
            }
          }
          else {
            uVar72 = 0;
          }
          if (0.0 <= fVar54) goto LAB_ram_40063a84;
          uVar67 = 0;
        }
        uVar73 = (ulonglong)(uint)DAT_ram_4009281c;
        fVar61 = (float)uVar72;
        if ((float)*(undefined8 *)(param_1 + 0xf) != fVar61) {
          fVar29 = param_1[2];
          fVar54 = (float)*(undefined8 *)param_1;
          fVar32 = DAT_ram_4009281c;
          if (DAT_ram_40093094 <= fVar54) {
            uVar51 = 0;
            if ((0.0 <= fVar61) && (uVar51 = uVar73, fVar61 <= DAT_ram_4009281c)) {
              uVar51 = uVar72;
            }
LAB_ram_400627ee:
            fVar62 = ((float)uVar51 * DAT_ram_400941f8 + DAT_ram_400930f4) * DAT_ram_40098104 *
                     fVar54;
            if (DAT_ram_4009281c <= fVar62) {
              fVar61 = DAT_ram_4009281c;
              if (1 < (uint)fVar29) goto LAB_ram_40062826;
            }
            else {
              fVar62 = DAT_ram_4009281c;
              if ((uint)fVar29 < 2) goto LAB_ram_40062836;
LAB_ram_40062826:
              fVar61 = (float)((int)fVar29 - 2);
            }
            fVar32 = fVar62;
            if (fVar61 < fVar62) {
              fVar32 = fVar61;
            }
          }
          else {
            fVar62 = DAT_ram_40098258;
            if ((0.0 <= fVar61) &&
               (uVar51 = uVar72, fVar54 = DAT_ram_40092878, fVar62 = DAT_ram_4009825c,
               fVar61 <= DAT_ram_4009281c)) goto LAB_ram_400627ee;
            if (1 < (uint)fVar29) goto LAB_ram_40062826;
          }
LAB_ram_40062836:
          param_1[0x62] = fVar32;
          *(ulonglong *)(param_1 + 0xf) = uVar72;
        }
        fVar61 = (float)uVar67;
        if ((float)*(undefined8 *)(param_1 + 0x10) == fVar61) goto LAB_ram_4006287c;
        if (0.0 <= fVar61) {
          fVar54 = fVar52;
          if (fVar52 < fVar61) goto LAB_ram_4006451a;
          fVar61 = fVar61 * DAT_ram_40092820 + 0.0;
          if (fVar61 < 0.0) {
            fVar54 = 0.0;
          }
          else {
            fVar54 = DAT_ram_40092820;
            if (fVar61 <= DAT_ram_40092820) {
              fVar54 = fVar61;
            }
          }
        }
        else {
          fVar54 = 0.0;
LAB_ram_4006451a:
          fVar54 = fVar54 * DAT_ram_40092820 + 0.0;
        }
        param_1[99] = fVar54;
        *(ulonglong *)(param_1 + 0x10) = uVar67;
LAB_ram_4006287c:
        if ((float)*(undefined8 *)(param_1 + 0x11) != fVar55) {
          FUN_ram_4005f690(fVar55,param_1);
          param_1[0x66] = fVar55;
          param_1[0x11] = fVar55;
        }
        if ((float)*(undefined8 *)(param_1 + 0x12) == fVar16) {
          fVar16 = param_1[100];
        }
        else {
          param_1[100] = fVar16;
          param_1[0x12] = fVar16;
        }
        if ((float)*(undefined8 *)(param_1 + 0x13) == fVar52) {
          fVar55 = param_1[0x65];
        }
        else {
          param_1[0x65] = fVar52;
          *(ulonglong *)(param_1 + 0x13) = uVar73;
          fVar55 = fVar52;
        }
        fVar61 = param_1[99];
        if (0.0 <= fVar61) {
          if (DAT_ram_40092820 < fVar61) {
            fVar61 = DAT_ram_40092820;
          }
        }
        else {
          fVar61 = 0.0;
        }
        if (0.0 <= fVar16) {
          if (fVar52 < fVar16) {
            fVar16 = fVar52;
          }
        }
        else {
          fVar16 = 0.0;
        }
        if (0.0 <= fVar55) {
          if (fVar52 < fVar55) {
            fVar55 = fVar52;
          }
        }
        else {
          fVar55 = 0.0;
        }
        fVar32 = param_1[0x62];
        fVar54 = fVar52 / (float)param_6;
        if (*(char *)((int)param_1 + 0x623e) == '\0') {
          param_1[0x68] = fVar32;
          param_1[0x69] = fVar61;
          param_1[0x6a] = fVar16;
          param_1[0x6b] = fVar55;
          *(undefined1 *)((int)param_1 + 0x623e) = 1;
          fVar12 = fVar16;
          fVar63 = fVar55;
          fVar62 = fVar61;
          fVar29 = fVar32;
        }
        else {
          fVar29 = param_1[0x68];
          fVar62 = param_1[0x69];
          fVar12 = param_1[0x6a];
          fVar63 = param_1[0x6b];
        }
        fVar78 = DAT_ram_40092864;
        puVar9 = DAT_ram_40092834;
        puVar76 = PTR_firmware_entry_ram_40092830;
        fVar41 = param_1[0x6e];
        fVar50 = param_1[0x6f];
        fVar53 = param_1[0x70];
        fVar77 = param_1[0x71];
        fVar27 = DAT_ram_40098378;
        if (fVar60 <= *param_1) {
          fVar27 = *param_1 * DAT_ram_4009833c;
        }
        fVar61 = fVar61 - fVar62;
        fVar43 = param_1[2];
        fVar16 = fVar16 - fVar12;
        fVar32 = fVar32 - fVar29;
        fVar55 = fVar55 - fVar63;
        fVar60 = (float)(uint)fVar43 - (float)PTR_firmware_entry_ram_40092830;
        fVar30 = param_1[3];
        pfVar13 = (float *)param_1[1];
        pfVar24 = param_2 + param_6;
        pfVar15 = param_3;
        pfVar14 = param_5;
        do {
          fVar28 = (float)*(undefined8 *)param_2;
          if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
            fVar28 = (fVar28 + *pfVar15) * fVar78;
          }
          fVar44 = ABS(fVar28);
          fVar37 = param_1[0x5e];
          if (fVar37 < fVar44) {
            fVar37 = fVar37 * param_1[0x5c] + (fVar52 - param_1[0x5c]) * fVar44;
          }
          else {
            fVar37 = fVar37 * param_1[0x5d] + (fVar52 - param_1[0x5d]) * fVar44;
          }
          param_1[0x5e] = fVar37;
          fVar44 = fVar52;
          if ((0.0 <= fVar37) && (fVar44 = in_register_00000100, fVar37 <= fVar52)) {
            fVar44 = fVar52 / (fVar37 * in_register_00000100 + fVar52);
            if (0.0 <= fVar44) {
              if (fVar52 < fVar44) {
                fVar44 = fVar52;
              }
            }
            else {
              fVar44 = 0.0;
            }
          }
          if (param_1[0x72] <= fVar44) {
            fVar37 = param_1[0x74];
          }
          else {
            fVar37 = param_1[0x73];
          }
          fVar46 = fVar41 * fVar27 + fVar29;
          fVar37 = param_1[0x72] * fVar37 + (fVar52 - fVar37) * fVar44;
          param_1[0x72] = fVar37;
          if (fVar46 < fVar52) {
            fVar46 = fVar52;
          }
          if (fVar60 < fVar46) {
            fVar46 = fVar60;
          }
          fVar46 = (float)(uint)fVar30 - fVar46;
          if (fVar46 < 0.0) {
            fVar46 = fVar46 + in_register_00000100;
          }
          uVar38 = (uint)(-1 < (int)fVar46) * (int)fVar46;
          pfVar36 = pfVar13 + uVar38 + 1;
          if ((uint)fVar43 <= uVar38 + 1) {
            pfVar36 = pfVar13;
          }
          fVar46 = pfVar13[uVar38] * (fVar52 - (fVar46 - (float)uVar38)) +
                   (fVar46 - (float)uVar38) * *pfVar36;
          fVar47 = param_1[0x4b] * fVar46 + param_1[0x50];
          fVar48 = fVar47 * param_1[0x52] + param_1[0x57];
          fVar44 = param_1[0x58];
          puVar6 = (undefined *)(fVar48 * fVar62 + fVar28);
          param_1[0x50] = param_1[0x51] + (param_1[0x4c] * fVar46 - fVar47 * param_1[0x4e]);
          param_1[0x58] = fVar47 * param_1[0x54] - fVar48 * param_1[0x56];
          param_1[0x51] = param_1[0x4d] * fVar46 - fVar47 * param_1[0x4f];
          param_1[0x57] = fVar44 + (fVar47 * param_1[0x53] - fVar48 * param_1[0x55]);
          puVar64 = puVar9;
          if (((float)puVar9 <= (float)puVar6) && (puVar64 = puVar6, (float)puVar76 < (float)puVar6)
             ) {
            puVar64 = puVar76;
          }
          pfVar13[(int)fVar30] = (float)puVar64;
          fVar37 = fVar37 * fVar48;
          fVar30 = (float)((int)fVar30 + 1 & -(uint)((uint)((int)fVar30 + 1) < (uint)fVar43));
          if (fVar12 < 0.0) {
            fVar37 = fVar37 * 0.0;
            fVar28 = fVar52;
          }
          else {
            fVar28 = 0.0;
            if (fVar12 <= fVar52) {
              fVar37 = fVar37 * fVar12;
              if (fVar12 <= in_register_00000100) {
LAB_ram_40062c72:
                fVar28 = fVar52;
              }
              else {
                fVar28 = -((fVar12 - in_register_00000100) * in_register_00000100) + fVar52;
                if (0.0 <= fVar28) {
                  if (fVar52 < fVar28) goto LAB_ram_40062c72;
                }
                else {
                  fVar28 = 0.0;
                }
              }
            }
          }
          fVar44 = (float)*(undefined8 *)param_2;
          if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
            fVar28 = fVar63 * (fVar44 * fVar28 + fVar37);
            uVar72 = (ulonglong)(uint)fVar28;
            if (param_5 == (float *)0x0) goto LAB_ram_40062c58;
            *(ulonglong *)param_4 = uVar72;
            *pfVar14 = fVar28;
          }
          else {
            fVar37 = fVar63 * (fVar28 * (fVar44 + *pfVar15) * fVar78 + fVar37);
            uVar72 = (ulonglong)(uint)fVar37;
            if (param_5 == (float *)0x0) {
LAB_ram_40062c58:
              *(ulonglong *)param_4 = uVar72;
            }
            else {
              fVar44 = fVar44 - *pfVar15;
              fVar28 = fVar28 * fVar63 * fVar78;
              *(ulonglong *)param_4 = (ulonglong)(uint)(fVar28 * fVar44 + fVar37);
              *pfVar14 = -(fVar28 * fVar44) + fVar37;
            }
          }
          fVar28 = fVar53 * fVar41;
          param_2 = param_2 + 1;
          fVar29 = fVar29 + fVar32 * fVar54;
          fVar62 = fVar62 + fVar61 * fVar54;
          fVar41 = fVar77 * fVar41 + fVar53 * fVar50;
          fVar50 = fVar77 * fVar50 - fVar28;
          fVar12 = fVar12 + fVar16 * fVar54;
          fVar63 = fVar63 + fVar55 * fVar54;
          param_4 = param_4 + 1;
          pfVar14 = pfVar14 + 1;
          pfVar15 = pfVar15 + 1;
          if (pfVar24 == param_2) {
            param_1[3] = fVar30;
            param_1[0x68] = fVar29;
            param_1[0x69] = fVar62;
            param_1[0x6a] = fVar12;
            param_1[0x6b] = fVar63;
            param_1[0x6e] = fVar41;
            param_1[0x6f] = fVar50;
            return;
          }
        } while( true );
      }
      if (param_7 == (float *)0x0) {
        uVar72 = (ulonglong)DAT_ram_400982a0;
        uVar67 = (ulonglong)DAT_ram_400982a4;
        uVar73 = (ulonglong)DAT_ram_400982a8;
      }
      else {
        fVar60 = *param_7;
        uVar72 = (ulonglong)(uint)fVar60;
        fVar55 = param_7[1];
        fVar61 = param_7[2];
        if (0.0 <= fVar60) {
          if (DAT_ram_4009281c < fVar60) {
            uVar72 = (ulonglong)(uint)DAT_ram_4009281c;
          }
        }
        else {
          uVar72 = 0;
        }
        if (0.0 <= fVar55) {
          uVar67 = (ulonglong)(uint)fVar55;
          if (DAT_ram_4009281c < fVar55) {
            uVar67 = (ulonglong)(uint)DAT_ram_4009281c;
          }
        }
        else {
          uVar67 = 0;
        }
        if (0.0 <= fVar61) {
          uVar73 = (ulonglong)(uint)fVar61;
          if (DAT_ram_4009281c < fVar61) {
            uVar73 = (ulonglong)(uint)DAT_ram_4009281c;
          }
        }
        else {
          uVar73 = 0;
        }
      }
      uVar51 = (ulonglong)(uint)DAT_ram_4009281c;
      fVar60 = (float)*(undefined8 *)param_1;
      if ((float)*(undefined8 *)param_1 <= DAT_ram_40093094) {
        fVar60 = DAT_ram_40092878;
      }
      fVar55 = param_1[2];
      fVar61 = (float)uVar72;
      if ((float)*(undefined8 *)(param_1 + 0xf) == fVar61) {
        fVar61 = param_1[0x41];
      }
      else {
        uVar79 = 0;
        if ((0.0 <= fVar61) && (uVar79 = uVar51, fVar61 <= DAT_ram_4009281c)) {
          uVar79 = uVar72;
        }
        fVar60 = ((float)uVar79 * DAT_ram_400941f8 + DAT_ram_400930f4) * DAT_ram_40098104 * fVar60;
        fVar61 = DAT_ram_4009281c;
        if (fVar60 < DAT_ram_4009281c) {
          fVar60 = DAT_ram_4009281c;
          if (1 < (uint)fVar55) goto LAB_ram_40063a40;
        }
        else {
          if (1 < (uint)fVar55) {
LAB_ram_40063a40:
            fVar61 = (float)((int)fVar55 - 2);
          }
          if (fVar60 <= fVar61) {
            fVar61 = fVar60;
          }
        }
        param_1[0x41] = fVar61;
        *(ulonglong *)(param_1 + 0xf) = uVar72;
      }
      fVar60 = (float)uVar67;
      if ((float)*(undefined8 *)(param_1 + 0x10) == fVar60) {
        fVar60 = param_1[0x43];
        goto LAB_ram_40062426;
      }
      if (fVar60 < 0.0) {
        fVar16 = 0.0;
LAB_ram_400643f0:
        fVar60 = fVar16 * DAT_ram_40092820 + 0.0;
      }
      else {
        fVar16 = fVar52;
        if (fVar52 < fVar60) goto LAB_ram_400643f0;
        fVar60 = fVar60 * DAT_ram_40092820 + 0.0;
        if (0.0 <= fVar60) {
          if (DAT_ram_40092820 < fVar60) {
            fVar60 = DAT_ram_40092820;
          }
        }
        else {
          fVar60 = 0.0;
        }
      }
      param_1[0x43] = fVar60;
      *(ulonglong *)(param_1 + 0x10) = uVar67;
LAB_ram_40062426:
      if ((float)*(undefined8 *)(param_1 + 0x11) == (float)uVar73) {
        uVar73 = (ulonglong)(uint)param_1[0x44];
      }
      else {
        param_1[0x44] = (float)uVar73;
        *(ulonglong *)(param_1 + 0x11) = uVar73;
      }
      fVar16 = (float)uVar73;
      if ((float)*(undefined8 *)(param_1 + 0x12) == fVar52) {
        fVar54 = param_1[0x45];
      }
      else {
        param_1[0x45] = fVar52;
        *(ulonglong *)(param_1 + 0x12) = uVar51;
        fVar54 = fVar52;
      }
      if (0.0 <= fVar60) {
        if (DAT_ram_40092820 < fVar60) {
          fVar60 = DAT_ram_40092820;
        }
      }
      else {
        fVar60 = 0.0;
      }
      if (0.0 <= fVar16) {
        if (fVar52 < fVar16) {
          fVar16 = fVar52;
        }
      }
      else {
        fVar16 = 0.0;
      }
      if (0.0 <= fVar54) {
        if (fVar52 < fVar54) {
          fVar54 = fVar52;
        }
      }
      else {
        fVar54 = 0.0;
      }
      fVar29 = param_1[0x42];
      fVar32 = fVar52 / (float)param_6;
      if (*(char *)(param_1 + 0x4a) == '\0') {
        param_1[0x46] = fVar61;
        param_1[0x47] = fVar60;
        param_1[0x48] = fVar16;
        param_1[0x49] = fVar54;
        *(undefined1 *)(param_1 + 0x4a) = 1;
        fVar41 = fVar54;
        fVar63 = fVar16;
        fVar12 = fVar60;
        fVar62 = fVar61;
      }
      else {
        fVar41 = param_1[0x49];
        fVar63 = param_1[0x48];
        fVar12 = param_1[0x47];
        fVar62 = param_1[0x46];
      }
      fVar43 = DAT_ram_400937b0;
      fVar30 = DAT_ram_40092864;
      fVar16 = fVar16 - fVar63;
      fVar61 = fVar61 - fVar62;
      fVar60 = fVar60 - fVar12;
      fVar54 = fVar54 - fVar41;
      fVar27 = (float)(uint)fVar55 - (float)PTR_firmware_entry_ram_40092830;
      fVar50 = param_1[0x3d];
      fVar53 = param_1[0x3e];
      fVar77 = param_1[0x3f];
      fVar78 = param_1[0x40];
      fVar28 = param_1[3];
      pfVar13 = (float *)param_1[1];
      pfVar24 = param_2 + param_6;
      pfVar15 = param_3;
      pfVar14 = param_5;
      do {
        fVar37 = *param_2;
        if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
          fVar37 = (fVar37 + *pfVar15) * fVar30;
        }
        fVar44 = fVar29 * fVar50 + fVar62;
        if (fVar44 < fVar52) {
          fVar44 = fVar52;
        }
        if (fVar27 < fVar44) {
          fVar44 = fVar27;
        }
        fVar44 = (float)(uint)fVar28 - fVar44;
        if (fVar44 < 0.0) {
          fVar44 = fVar44 + (float)(uint)fVar55;
        }
        uVar38 = (uint)(-1 < (int)fVar44) * (int)fVar44;
        pfVar36 = pfVar13 + uVar38 + 1;
        if ((uint)fVar55 <= uVar38 + 1) {
          pfVar36 = pfVar13;
        }
        fVar44 = (float)*(undefined8 *)(pfVar13 + uVar38) * (fVar52 - (fVar44 - (float)uVar38)) +
                 (fVar44 - (float)uVar38) * *pfVar36;
        fVar46 = param_1[0x26] * fVar44 + param_1[0x2b];
        fVar47 = fVar46 * param_1[0x2d] + param_1[0x32];
        param_1[0x2b] = param_1[0x2c] + (param_1[0x27] * fVar44 - fVar46 * param_1[0x29]);
        param_1[0x2c] = param_1[0x28] * fVar44 - fVar46 * param_1[0x2a];
        param_1[0x32] = param_1[0x33] + (fVar46 * param_1[0x2e] - fVar47 * param_1[0x30]);
        param_1[0x33] = fVar46 * param_1[0x2f] - fVar47 * param_1[0x31];
        pfVar13[(int)fVar28] = fVar47 * fVar12 + fVar37;
        fVar28 = (float)((int)fVar28 + 1 & -(uint)((uint)((int)fVar28 + 1) < (uint)fVar55));
        if (fVar63 < 0.0) {
          fVar47 = fVar47 * 0.0;
          fVar37 = fVar52;
        }
        else {
          fVar37 = 0.0;
          if (fVar63 <= fVar52) {
            fVar47 = fVar47 * fVar63;
            if (fVar63 <= fVar43) {
LAB_ram_40062710:
              fVar37 = fVar52;
            }
            else {
              fVar37 = -((fVar63 - fVar43) * in_register_00000100) + fVar52;
              if (0.0 <= fVar37) {
                if (fVar52 < fVar37) goto LAB_ram_40062710;
              }
              else {
                fVar37 = 0.0;
              }
            }
          }
        }
        fVar44 = (float)*(undefined8 *)param_2;
        if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
          fVar37 = fVar41 * (fVar44 * fVar37 + fVar47);
          uVar72 = (ulonglong)(uint)fVar37;
          if (param_5 == (float *)0x0) goto LAB_ram_400626fc;
          *(ulonglong *)param_4 = uVar72;
          *pfVar14 = fVar37;
        }
        else {
          fVar46 = fVar41 * (fVar37 * (fVar44 + *pfVar15) * fVar30 + fVar47);
          uVar72 = (ulonglong)(uint)fVar46;
          if (param_5 == (float *)0x0) {
LAB_ram_400626fc:
            *(ulonglong *)param_4 = uVar72;
          }
          else {
            fVar44 = fVar44 - *pfVar15;
            fVar37 = fVar37 * fVar41 * fVar30;
            *(ulonglong *)param_4 = (ulonglong)(uint)(fVar37 * fVar44 + fVar46);
            *pfVar14 = -(fVar37 * fVar44) + fVar46;
          }
        }
        fVar37 = fVar77 * fVar50;
        param_2 = param_2 + 1;
        fVar62 = fVar62 + fVar61 * fVar32;
        fVar12 = fVar12 + fVar60 * fVar32;
        fVar50 = fVar78 * fVar50 + fVar77 * fVar53;
        fVar53 = fVar78 * fVar53 - fVar37;
        fVar63 = fVar63 + fVar16 * fVar32;
        fVar41 = fVar41 + fVar54 * fVar32;
        param_4 = param_4 + 1;
        pfVar14 = pfVar14 + 1;
        pfVar15 = pfVar15 + 1;
        if (param_2 == pfVar24) {
          param_1[3] = fVar28;
          param_1[0x3d] = fVar50;
          param_1[0x3e] = fVar53;
          param_1[0x46] = fVar62;
          param_1[0x47] = fVar12;
          param_1[0x48] = fVar63;
          param_1[0x49] = fVar41;
          return;
        }
      } while( true );
    }
    if (uVar38 != 0) {
      param_8 = 0;
LAB_ram_40061d8c:
      memset((void *)param_1[1],0,(int)param_1[2] << 2);
      uVar72 = (ulonglong)(uint)DAT_ram_4009281c;
      param_1[3] = 0.0;
      param_1[9] = 0.0;
      param_1[10] = 0.0;
      *(ulonglong *)(param_1 + 0xb) = uVar72;
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined1 *)((int)param_1 + 0x3a) = 1;
      if (((void *)param_1[4] != (void *)0x0) && (param_1[5] != 0.0)) {
        memset((void *)param_1[4],0,(int)param_1[5] << 2);
      }
      fVar52 = DAT_ram_4009281c;
      param_1[0x3c] = 5.6904566e-28;
      param_1[0x61] = -1.7247773e-34;
      param_1[6] = 0.0;
      param_1[0x15] = 0.0;
      param_1[0x16] = 0.0;
      param_1[0x17] = 0.0;
      param_1[0x18] = 0.0;
      *(undefined1 *)(param_1 + 0x21) = 0;
      param_1[0x2b] = 0.0;
      param_1[0x2c] = 0.0;
      param_1[0x32] = 0.0;
      param_1[0x33] = 0.0;
      param_1[0x39] = 0.0;
      param_1[0x3a] = 0.0;
      param_1[0x3b] = 0.0;
      param_1[0x3d] = 0.0;
      param_1[0x3e] = fVar52;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      param_1[0x45] = fVar52;
      param_1[0x50] = 0.0;
      param_1[0x51] = 0.0;
      param_1[0x57] = 0.0;
      param_1[0x58] = 0.0;
      param_1[0x5e] = 0.0;
      param_1[0x5f] = 0.0;
      param_1[0x60] = 0.0;
      param_1[0x62] = fVar52;
      param_1[99] = 0.0;
      param_1[100] = 0.0;
      param_1[0x65] = fVar52;
      param_1[0x66] = 0.0;
      param_1[0x67] = 0.0;
      fVar60 = DAT_ram_40093094;
      param_1[0x68] = fVar52;
      param_1[0x69] = 0.0;
      fVar61 = (float)*(undefined8 *)param_1;
      param_1[0x6a] = 0.0;
      param_1[0x6b] = fVar52;
      param_1[0x6c] = 0.0;
      param_1[0x6d] = 0.0;
      param_1[0x6e] = 0.0;
      param_1[0x6f] = fVar52;
      fVar55 = DAT_ram_400982ec;
      if (fVar60 <= fVar61) {
        fVar52 = fVar61 * DAT_ram_4009824c;
        if (DAT_ram_400934d8 <= fVar52) {
          fVar52 = DAT_ram_400934d8;
        }
        fVar52 = (fVar52 / fVar61) * DAT_ram_400980f4;
        fVar55 = (float)FUN_ram_40000a08(fVar52);
        fVar52 = (float)FUN_ram_40000786(fVar52);
      }
      fVar60 = DAT_ram_4009281c;
      param_1[0x70] = fVar55;
      param_1[0x71] = fVar52;
      param_1[0x72] = fVar60;
      param_1[0x75] = 0.0;
      param_1[0x76] = 0.0;
      *(undefined1 *)(param_1 + 0x188b) = 0;
      param_1[0x1889] = 0.0;
      param_1[0x188a] = 0.0;
      if (*(short *)((int)param_1 + 0x20e) == 0) {
        *(undefined2 *)((int)param_1 + 0x20e) = 0x44;
      }
      if (*(short *)(param_1 + 0x83) == 0) {
        *(undefined2 *)(param_1 + 0x83) = 0x40;
      }
      memset(param_1 + 0x85,0,0x6010);
      uVar72 = (ulonglong)(uint)DAT_ram_40092818;
      *(undefined2 *)(param_1 + 0x84) = 0;
      param_1[0x7f] = 0.0;
      param_1[0x7e] = 0.0;
      *(ulonglong *)(param_1 + 0xf) = uVar72;
      *(ulonglong *)(param_1 + 0x10) = uVar72;
      *(ulonglong *)(param_1 + 0x11) = uVar72;
      *(ulonglong *)(param_1 + 0x12) = uVar72;
      *(ulonglong *)(param_1 + 0x13) = uVar72;
      *(ulonglong *)(param_1 + 0x14) = uVar72;
      *(undefined2 *)((int)param_1 + 0x6236) = 0;
      param_1[0x188e] = 0.0;
      *(undefined2 *)(param_1 + 0x188f) = 0;
      *(undefined1 *)((int)param_1 + 0x623e) = 0;
      *(char *)(param_1 + 8) = (char)param_8;
      uVar38 = param_8;
      goto LAB_ram_40060fcc;
    }
LAB_ram_4006151e:
    fVar52 = DAT_ram_40092864;
    if ((param_1[4] != 0.0) && (param_1[5] != 0.0)) {
      FUN_ram_4005f144(param_1,param_7);
      fVar60 = DAT_ram_4009281c;
      fVar52 = param_1[0x24];
      if (0.0 <= fVar52) {
        if (fVar52 <= DAT_ram_4009281c) {
          fVar55 = DAT_ram_4009281c - fVar52;
        }
        else {
          fVar55 = 0.0;
          fVar52 = DAT_ram_4009281c;
        }
      }
      else {
        fVar52 = 0.0;
        fVar55 = DAT_ram_4009281c;
      }
      fVar61 = param_1[0x25];
      if (0.0 <= fVar61) {
        if (DAT_ram_4009281c < fVar61) {
          fVar61 = DAT_ram_4009281c;
        }
      }
      else {
        fVar61 = 0.0;
      }
      uVar72 = *(ulonglong *)(param_1 + 0x1a);
      if (0.0 <= (float)uVar72) {
        if (DAT_ram_40092820 < (float)uVar72) {
          uVar72 = (ulonglong)(uint)DAT_ram_40092820;
        }
      }
      else {
        uVar72 = 0;
      }
      uVar67 = *(ulonglong *)(param_1 + 0x1b);
      if (0.0 <= (float)uVar67) {
        if (DAT_ram_4009281c < (float)uVar67) {
          uVar67 = (ulonglong)(uint)DAT_ram_4009281c;
        }
      }
      else {
        uVar67 = 0;
      }
      fVar16 = (float)*(undefined8 *)(param_1 + 0x1c);
      if (0.0 <= fVar16) {
        if (DAT_ram_4009281c < fVar16) {
          fVar16 = DAT_ram_4009281c;
        }
      }
      else {
        fVar16 = 0.0;
      }
      fVar54 = param_1[0x23];
      if (0.0 <= fVar54) {
        if (DAT_ram_4009281c < fVar54) {
          fVar54 = DAT_ram_4009281c;
        }
      }
      else {
        fVar54 = 0.0;
      }
      fVar32 = param_1[0x22];
      if (param_1[0x22] <= 0.0) {
        fVar32 = DAT_ram_4009281c;
      }
      fVar29 = DAT_ram_4009281c / (float)param_6;
      fVar62 = (float)*(undefined8 *)(param_1 + 0x19);
      if (*(char *)(param_1 + 0x21) == '\0') {
        *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_1 + 0x19);
        *(ulonglong *)(param_1 + 0x1e) = uVar72;
        *(ulonglong *)(param_1 + 0x1f) = uVar67;
        param_1[0x20] = fVar16;
        *(undefined1 *)(param_1 + 0x21) = 1;
        fVar41 = (float)uVar67;
        fVar12 = fVar62;
        fVar50 = fVar16;
        fVar63 = (float)uVar72;
      }
      else {
        fVar12 = param_1[0x1d];
        fVar63 = param_1[0x1e];
        fVar41 = param_1[0x1f];
        fVar50 = param_1[0x20];
      }
      fVar46 = (float)DAT_ram_400983ac;
      fVar44 = DAT_ram_400983a4._4_4_;
      fVar37 = DAT_ram_40098108;
      fVar28 = DAT_ram_400937b0;
      fVar43 = DAT_ram_4009309c;
      fVar30 = DAT_ram_40092864;
      fVar27 = DAT_ram_4009282c;
      fVar56 = param_1[2];
      fVar53 = (float)uVar72 - fVar63;
      fVar77 = (float)uVar67 - fVar41;
      fVar62 = fVar62 - fVar12;
      fVar16 = fVar16 - fVar50;
      fVar78 = (float)(uint)fVar56 - (float)PTR_firmware_entry_ram_40092830;
      uVar72 = *(ulonglong *)(param_1 + 0x15);
      uVar67 = *(ulonglong *)(param_1 + 0x16);
      uVar73 = *(ulonglong *)(param_1 + 0x17);
      pfVar13 = (float *)param_1[1];
      fVar48 = param_1[3];
      fVar45 = param_1[4];
      pfVar24 = param_2 + param_6;
      pfVar15 = param_3;
      pfVar14 = param_5;
      fVar47 = param_1[0x18];
      do {
        fVar65 = (float)*(undefined8 *)param_2;
        if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
          fVar65 = (fVar65 + *pfVar15) * fVar30;
        }
        fVar59 = fVar60;
        if ((fVar60 <= fVar12) && (fVar59 = fVar78, fVar12 <= fVar78)) {
          fVar59 = fVar12;
        }
        fVar59 = (float)(uint)fVar48 - fVar59;
        if (fVar59 < 0.0) {
          fVar59 = fVar59 + (float)(uint)fVar56;
        }
        uVar38 = (uint)(-1 < (int)fVar59) * (int)fVar59;
        pfVar36 = pfVar13 + uVar38 + 1;
        if ((uint)fVar56 <= uVar38 + 1) {
          pfVar36 = pfVar13;
        }
        pfVar18 = pfVar13 + (int)fVar48;
        fVar48 = (float)((int)fVar48 + 1 & -(uint)((uint)((int)fVar48 + 1) < (uint)fVar56));
        fVar59 = ((float)*(undefined8 *)(pfVar13 + uVar38) * (fVar60 - (fVar59 - (float)uVar38)) +
                 (fVar59 - (float)uVar38) * *pfVar36) * fVar55 + fVar52 * (float)uVar72;
        uVar72 = (ulonglong)(uint)fVar59;
        fVar59 = fVar59 * fVar55 + fVar52 * (float)uVar67;
        uVar67 = (ulonglong)(uint)fVar59;
        fVar47 = ((fVar59 + (float)uVar73) - fVar47) * fVar61;
        uVar73 = (ulonglong)(uint)fVar47;
        *(ulonglong *)pfVar18 = (ulonglong)(uint)(fVar47 * fVar63 + fVar65);
        fVar65 = fVar47;
        if ((fVar45 != 0.0) && (param_1[5] != 0.0)) {
          pfVar36 = (float *)((int)fVar45 + (int)param_1[6] * 4);
          fVar25 = (float)((int)param_1[6] + 1);
          fVar65 = -((float)*(undefined8 *)(param_1 + 7) * fVar47) + *pfVar36;
          if ((uint)param_1[5] <= (uint)fVar25) {
            fVar25 = 0.0;
          }
          *pfVar36 = (float)*(undefined8 *)(param_1 + 7) * fVar65 + fVar47;
          param_1[6] = fVar25;
        }
        fVar47 = (fVar54 * fVar65 + fVar47) * fVar32;
        fVar65 = DAT_ram_40098388;
        if ((fVar47 <= fVar27) && (fVar65 = DAT_ram_4009838c, fVar37 <= fVar47)) {
          fVar65 = ((fVar47 * fVar47 + fVar44) * fVar47) / (fVar47 * fVar47 * fVar46 + fVar44);
        }
        if (fVar41 < 0.0) {
          fVar65 = fVar65 * 0.0;
          fVar47 = fVar60;
        }
        else {
          fVar47 = 0.0;
          if (fVar41 <= fVar60) {
            fVar65 = fVar65 * fVar41;
            if (fVar41 <= fVar28) {
LAB_ram_40061d62:
              fVar47 = fVar60;
            }
            else {
              fVar47 = -((fVar41 - fVar28) * fVar43) + fVar60;
              if (0.0 <= fVar47) {
                if (fVar60 < fVar47) goto LAB_ram_40061d62;
              }
              else {
                fVar47 = 0.0;
              }
            }
          }
        }
        fVar25 = (float)*(undefined8 *)param_2;
        if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
          fVar47 = fVar50 * (fVar25 * fVar47 + fVar65);
          *(ulonglong *)param_4 = (ulonglong)(uint)fVar47;
          if (param_5 != (float *)0x0) {
            *pfVar14 = fVar47;
          }
        }
        else {
          fVar65 = fVar50 * (fVar47 * (fVar25 + *pfVar15) * fVar30 + fVar65);
          if (param_5 == (float *)0x0) {
            *(ulonglong *)param_4 = (ulonglong)(uint)fVar65;
          }
          else {
            fVar25 = fVar25 - *pfVar15;
            fVar47 = fVar47 * fVar50 * fVar30;
            *param_4 = fVar47 * fVar25 + fVar65;
            *pfVar14 = -(fVar47 * fVar25) + fVar65;
          }
        }
        param_2 = param_2 + 1;
        fVar12 = fVar12 + fVar62 * fVar29;
        fVar63 = fVar63 + fVar53 * fVar29;
        fVar41 = fVar41 + fVar77 * fVar29;
        fVar50 = fVar50 + fVar16 * fVar29;
        param_4 = param_4 + 1;
        pfVar14 = pfVar14 + 1;
        pfVar15 = pfVar15 + 1;
        fVar47 = fVar59;
        if (pfVar24 == param_2) {
          param_1[3] = fVar48;
          *(ulonglong *)(param_1 + 0x15) = uVar72;
          *(ulonglong *)(param_1 + 0x16) = uVar67;
          *(ulonglong *)(param_1 + 0x17) = uVar73;
          *(ulonglong *)(param_1 + 0x18) = uVar67;
          param_1[0x1d] = fVar12;
          param_1[0x1e] = fVar63;
          param_1[0x1f] = fVar41;
          param_1[0x20] = fVar50;
          return;
        }
      } while( true );
    }
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) goto LAB_ram_40061588;
    if (param_5 == (float *)0x0) {
      pfVar15 = param_2 + param_6;
      do {
        uVar71 = *(undefined8 *)param_2;
        uVar75 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *param_4 = ((float)uVar71 + (float)uVar75) * fVar52;
        param_4 = param_4 + 1;
      } while (pfVar15 != param_2);
      return;
    }
  }
  if (param_2 != param_4) {
    FUN_ram_4000305c(param_4,param_2,param_6 << 2);
  }
joined_r0x4006159c:
  if (param_5 == param_3) {
    return;
  }
  FUN_ram_4000305c(param_5,param_3,param_6 << 2);
  return;
}


