/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4007a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4007af78.
 * REA evidence: ev_169f2c519a3d63bdf15cc45b0ad4bf4c94719a733f4b5d8859d220529bbce151
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007af78(float *param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  char cVar13;
  undefined2 uVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  
  fVar8 = DAT_ram_40093094;
  if (param_1 == (float *)0x0) {
    return;
  }
  fVar32 = *param_1;
  if (fVar32 <= DAT_ram_40093094) {
    uVar30 = *(undefined8 *)(param_1 + 2);
    fVar25 = param_1[3];
    uVar28 = *(undefined8 *)(param_1 + 0xc);
    fVar27 = param_1[0xd];
    fVar32 = DAT_ram_400980e0;
    if (*(char *)((int)param_1 + 0x5a) == '\0') goto LAB_ram_4007b158;
LAB_ram_4007afce:
    fVar26 = param_1[0x18];
    fVar20 = param_1[0x1a];
    fVar17 = param_1[0x19];
    fVar21 = param_1[0x1b];
  }
  else {
    uVar30 = *(undefined8 *)(param_1 + 2);
    fVar25 = param_1[3];
    uVar28 = *(undefined8 *)(param_1 + 0xc);
    fVar27 = param_1[0xd];
    if (*(char *)((int)param_1 + 0x5a) != '\0') goto LAB_ram_4007afce;
LAB_ram_4007b158:
    fVar20 = (float)uVar28;
    fVar26 = (float)uVar30;
    *(undefined1 *)((int)param_1 + 0x5a) = 1;
    fVar17 = fVar25;
    fVar21 = fVar27;
  }
  fVar22 = DAT_ram_400930f4;
  fVar7 = DAT_ram_40092864;
  fVar6 = DAT_ram_4009281c;
  fVar23 = (float)param_2 / fVar32;
  if (fVar23 <= 0.0) {
    fVar23 = DAT_ram_4009281c / fVar32;
  }
  fVar29 = (float)uVar30;
  fVar3 = fVar23 + DAT_ram_40092864;
  fVar19 = (float)uVar28;
  fVar31 = fVar27 - fVar21;
  fVar4 = fVar23 / (fVar23 + DAT_ram_40093668);
  fVar26 = fVar4 * (fVar29 - fVar26) + fVar26;
  fVar17 = fVar4 * (fVar25 - fVar17) + fVar17;
  fVar20 = fVar4 * (fVar19 - fVar20) + fVar20;
  *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uint)fVar26;
  *(ulonglong *)(param_1 + 0x19) = (ulonglong)(uint)fVar17;
  *(ulonglong *)(param_1 + 0x1a) = (ulonglong)(uint)fVar20;
  fVar23 = (fVar23 / fVar3) * fVar31 + fVar21;
  *(ulonglong *)(param_1 + 0x1b) = (ulonglong)(uint)fVar23;
  if (ABS(fVar29 - fVar26) < fVar22) {
    *(undefined8 *)(param_1 + 0x18) = uVar30;
    fVar26 = fVar29;
  }
  fVar3 = DAT_ram_400930a4;
  if (ABS(fVar25 - fVar17) < DAT_ram_400930a4) {
    param_1[0x19] = fVar25;
    fVar17 = fVar25;
  }
  fVar25 = DAT_ram_400930a0;
  if (ABS(fVar19 - fVar20) < DAT_ram_400930a0) {
    *(undefined8 *)(param_1 + 0x1a) = uVar28;
    fVar20 = fVar19;
  }
  if (ABS(fVar27 - fVar23) < fVar6) {
    param_1[0x1b] = fVar27;
  }
  else {
    fVar31 = fVar23 - fVar21;
  }
  fVar27 = param_1[0x4bc1];
  cVar1 = *(char *)(param_1 + 0x15);
  cVar13 = *(char *)(param_1 + 0x4bd3);
  bVar5 = true;
  if (ABS(param_1[0x4bca] - fVar20) < fVar25) {
    bVar5 = fVar25 <= ABS(param_1[0x4bc9] - (float)*(undefined8 *)(param_1 + 0xb));
  }
  *(char *)(param_1 + 0x4bd3) = cVar1;
  if ((cVar13 != cVar1) || (fVar22 <= ABS(param_1[0x4bc0] - fVar26))) {
    param_1[0x4bc0] = fVar26;
    fVar25 = DAT_ram_400980c8;
    uVar9 = DAT_ram_400930d8;
    if (cVar1 == '\0') {
      fVar20 = (float)FUN_ram_400008b8(DAT_ram_400930d8);
      fVar25 = (float)FUN_ram_400008b8(fVar22,param_1[0x4bc6]);
      fVar21 = (float)FUN_ram_400008b8(uVar9,fVar20 * fVar25);
      fVar26 = DAT_ram_40098108;
      fVar25 = DAT_ram_400980c8;
      pfVar10 = param_1 + 0x4bd8;
      do {
        pfVar11 = pfVar10 + 1;
        fVar23 = ((float)*(undefined8 *)pfVar10 / param_1[0x4bbe]) * fVar26;
        fVar22 = (float)FUN_ram_40000d54(fVar3,fVar23 / fVar20);
        fVar23 = (float)FUN_ram_40000d54(fVar3,fVar23 / fVar21);
        pfVar10[0x2b] = fVar22 * fVar25;
        pfVar10[0x33] = (fVar23 - fVar22) * fVar25;
        pfVar10 = pfVar11;
      } while (pfVar11 != param_1 + 0x4be0);
    }
    else {
      param_1[0x4c03] = DAT_ram_400980c8;
      param_1[0x4c04] = fVar25;
      param_1[0x4c05] = fVar25;
      param_1[0x4c06] = fVar25;
      param_1[0x4c07] = fVar25;
      param_1[0x4c08] = fVar25;
      param_1[0x4c09] = fVar25;
      param_1[0x4c0a] = fVar25;
      memset(param_1 + 0x4c0b,0,0x20);
    }
    if (cVar13 == cVar1) goto LAB_ram_4007b11c;
LAB_ram_4007b234:
    param_1[0x4bc1] = (float)*(undefined8 *)(param_1 + 0x19);
    if (*(char *)(param_1 + 0x4bd3) == '\0') {
      fVar27 = (float)FUN_ram_400008b8(DAT_ram_40093664);
      fVar25 = DAT_ram_4009810c;
      uVar18 = FUN_ram_40000c0e((fVar27 * DAT_ram_4009810c) / param_1[0x4bbe]);
      uVar9 = DAT_ram_400930bc;
      *(ulonglong *)(param_1 + 0x4c13) = uVar18 & 0xffffffff;
      fVar27 = (float)FUN_ram_400008b8(uVar9,param_1[0x4bc5]);
      uVar28 = FUN_ram_40000c0e((fVar27 * fVar25) / param_1[0x4bbe]);
      *(undefined8 *)(param_1 + 0x4c14) = uVar28;
    }
    else {
      param_1[0x4c13] = 0.0;
      param_1[0x4c14] = 0.0;
    }
  }
  else {
LAB_ram_4007b11c:
    if (fVar3 <= ABS(fVar27 - fVar17)) goto LAB_ram_4007b234;
  }
  if (bVar5) {
    fVar27 = (float)*(undefined8 *)(param_1 + 0x1a);
    param_1[0x4bca] = fVar27;
    param_1[0x4bc9] = (float)*(undefined8 *)(param_1 + 0xb);
    cVar1 = *(char *)(param_1 + 0x4c02);
    fVar25 = 0.0;
    if ((0.0 <= fVar27) && (fVar25 = DAT_ram_40098f88, fVar27 <= DAT_ram_4009309c)) {
      fVar25 = fVar27 * DAT_ram_40098104;
    }
    fVar27 = param_1[0x4bbe];
    *(ulonglong *)(param_1 + 0x4c01) = (ulonglong)(uint)(fVar27 * fVar25);
    fVar24 = (float)FUN_ram_400008b8(0);
    fVar29 = DAT_ram_40098b0c;
    fVar19 = DAT_ram_40098b08;
    fVar4 = DAT_ram_40098b04;
    fVar3 = DAT_ram_40098b00;
    fVar22 = DAT_ram_40098afc;
    fVar23 = DAT_ram_40098af8;
    fVar21 = DAT_ram_40098af4;
    fVar17 = DAT_ram_400988f8;
    fVar20 = DAT_ram_400988f0;
    fVar26 = DAT_ram_4009281c;
    fVar25 = DAT_ram_40092818;
    if (fVar24 <= 0.0) {
      if (cVar1 != '\0') {
        memset(param_1 + 0x4be1,0,0x20);
        fVar25 = DAT_ram_4009281c;
        uVar18 = (ulonglong)(uint)DAT_ram_4009281c;
        param_1[0x4be9] = DAT_ram_4009281c;
        param_1[0x4bea] = fVar25;
        param_1[0x4beb] = fVar25;
        param_1[0x4bec] = fVar25;
        param_1[0x4bed] = fVar25;
        param_1[0x4bee] = fVar25;
        param_1[0x4bef] = fVar25;
        param_1[0x4bf0] = fVar25;
        memset(param_1 + 0x4bf1,0,0x20);
        param_1[0x4bf9] = fVar25;
        param_1[0x4bfa] = fVar25;
        param_1[0x4bfb] = fVar25;
        param_1[0x4bfc] = fVar25;
        param_1[0x4bfd] = fVar25;
        param_1[0x4bfe] = fVar25;
        param_1[0x4bff] = fVar25;
        *(ulonglong *)(param_1 + 0x4c00) = uVar18;
      }
      *(undefined1 *)(param_1 + 0x4c02) = 0;
      cVar13 = '\0';
    }
    else {
      fVar27 = (fVar24 * DAT_ram_400980f4) / fVar27;
      if (cVar1 == '\0') {
        param_1[0x4be1] = 0.0;
        param_1[0x4be9] = fVar26;
        param_1[0x4be2] = fVar20;
        param_1[0x4bea] = fVar20;
        param_1[0x4be3] = fVar26;
        param_1[0x4beb] = fVar17;
        param_1[0x4be4] = fVar20;
        param_1[0x4bec] = fVar21;
        param_1[0x4be5] = fVar23;
        param_1[0x4bed] = fVar25;
        param_1[0x4be6] = fVar22;
        param_1[0x4bee] = fVar3;
        param_1[0x4be7] = fVar25;
        param_1[0x4bef] = fVar4;
        param_1[0x4be8] = fVar19;
        param_1[0x4bf0] = fVar29;
      }
      fVar25 = (float)FUN_ram_40000a08(fVar27);
      param_1[0x4bf1] = fVar25;
      fVar26 = (float)FUN_ram_40000786(fVar27);
      fVar25 = DAT_ram_40098b10;
      param_1[0x4bf9] = fVar26;
      fVar26 = (float)FUN_ram_40000a08(fVar27 * fVar25);
      param_1[0x4bf2] = fVar26;
      fVar26 = (float)FUN_ram_40000786(fVar27 * fVar25);
      fVar25 = DAT_ram_40098b14;
      param_1[0x4bfa] = fVar26;
      fVar26 = (float)FUN_ram_40000a08(fVar27 * fVar25);
      param_1[0x4bf3] = fVar26;
      fVar26 = (float)FUN_ram_40000786(fVar27 * fVar25);
      fVar25 = DAT_ram_40098b18;
      param_1[0x4bfb] = fVar26;
      fVar26 = (float)FUN_ram_40000a08(fVar27 * fVar25);
      param_1[0x4bf4] = fVar26;
      fVar26 = (float)FUN_ram_40000786(fVar27 * fVar25);
      fVar25 = DAT_ram_4009851c;
      param_1[0x4bfc] = fVar26;
      fVar26 = (float)FUN_ram_40000a08(fVar27 * fVar25);
      param_1[0x4bf5] = fVar26;
      fVar26 = (float)FUN_ram_40000786(fVar27 * fVar25);
      fVar25 = DAT_ram_40092824;
      param_1[0x4bfd] = fVar26;
      fVar26 = (float)FUN_ram_40000a08(fVar27 * fVar25);
      param_1[0x4bf6] = fVar26;
      fVar26 = (float)FUN_ram_40000786(fVar27 * fVar25);
      fVar25 = DAT_ram_40098b1c;
      param_1[0x4bfe] = fVar26;
      fVar26 = (float)FUN_ram_40000a08(fVar27 * fVar25);
      param_1[0x4bf7] = fVar26;
      fVar26 = (float)FUN_ram_40000786(fVar27 * fVar25);
      fVar25 = DAT_ram_40098b20;
      param_1[0x4bff] = fVar26;
      fVar26 = (float)FUN_ram_40000a08(fVar27 * fVar25);
      param_1[0x4bf8] = fVar26;
      uVar28 = FUN_ram_40000786(fVar27 * fVar25);
      cVar13 = '\x01';
      *(undefined1 *)(param_1 + 0x4c02) = 1;
      *(undefined8 *)(param_1 + 0x4c00) = uVar28;
    }
    if (cVar1 != cVar13) {
      *(undefined2 *)((int)param_1 + 0x1300a) = 0;
    }
    fVar25 = (float)*(undefined8 *)(param_1 + 4);
    if (fVar25 < 0.0) {
      fVar25 = 0.0;
    }
    else if (fVar6 < fVar25) {
      fVar25 = fVar6;
    }
    param_1[0x4c29] = fVar25;
  }
  if (ABS(fVar31) < fVar6) {
    return;
  }
  if (fVar32 <= fVar8) {
    fVar32 = DAT_ram_400980e0;
  }
  fVar27 = (float)FUN_ram_400008b8(0,*(undefined8 *)(param_1 + 0x1b));
  fVar27 = fVar27 * DAT_ram_40098104;
  fVar25 = fVar27 * fVar32;
  if (0.0 <= fVar25) {
    fVar25 = fVar25 + fVar7;
  }
  else {
    fVar25 = fVar25 - fVar7;
  }
  uVar12 = (uint)fVar25;
  uVar15 = (int)~uVar12 >> 0x1f & uVar12;
  if (0x2580 < (int)uVar12) {
    uVar15 = 0x2580;
  }
  if ((uint)*(ushort *)((int)param_1 + 0x32aa) != (uVar15 & 0xffff)) {
    *(ushort *)(param_1 + 0xcab) = *(ushort *)((int)param_1 + 0x32aa);
    *(short *)((int)param_1 + 0x32aa) = (short)uVar15;
    if (fVar8 < fVar32) {
      fVar32 = fVar32 * DAT_ram_400980d4;
      if (0.0 <= fVar32) {
        fVar32 = fVar32 + fVar7;
      }
      else {
        fVar32 = fVar32 - fVar7;
      }
      iVar16 = (int)fVar32;
      if (iVar16 < 0x10000) {
        if (iVar16 < 1) {
          uVar14 = 1;
        }
        else {
          uVar14 = (undefined2)iVar16;
        }
      }
      else {
        uVar14 = 0xffff;
      }
    }
    else {
      uVar14 = 0x2d0;
    }
    *(undefined2 *)(param_1 + 0xcac) = uVar14;
    *(undefined2 *)((int)param_1 + 0x32ae) = uVar14;
  }
  fVar32 = param_1[0x4bbe];
  fVar27 = fVar32 * fVar27;
  if (0.0 <= fVar27) {
    fVar27 = fVar27 + fVar7;
  }
  else {
    fVar27 = fVar27 - fVar7;
  }
  uVar12 = (uint)fVar27;
  uVar2 = *(ushort *)((int)param_1 + 0x13096);
  uVar15 = (int)~uVar12 >> 0x1f & uVar12;
  if (0x2580 < (int)uVar12) {
    uVar15 = 0x2580;
  }
  if ((uint)uVar2 == (uVar15 & 0xffff)) {
    return;
  }
  *(short *)((int)param_1 + 0x13096) = (short)uVar15;
  *(ushort *)(param_1 + 0x4c26) = uVar2;
  uVar14 = 0x2d0;
  if (fVar32 <= fVar8) goto LAB_ram_4007b5ce;
  fVar32 = fVar32 * DAT_ram_400980d4;
  if (0.0 <= fVar32) {
    iVar16 = (int)(fVar32 + fVar7);
    if (0xffff < iVar16) goto LAB_ram_4007b708;
LAB_ram_4007b5c6:
    if (iVar16 < 1) {
      iVar16 = 1;
    }
  }
  else {
    iVar16 = (int)(fVar32 - fVar7);
    if (iVar16 < 0x10000) goto LAB_ram_4007b5c6;
LAB_ram_4007b708:
    iVar16 = 0xffff;
  }
  uVar14 = (undefined2)iVar16;
LAB_ram_4007b5ce:
  *(undefined2 *)(param_1 + 0x4c27) = uVar14;
  *(undefined2 *)((int)param_1 + 0x1309a) = uVar14;
  return;
}


