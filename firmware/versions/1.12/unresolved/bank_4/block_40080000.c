/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40080000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4008076c.
 * REA evidence: ev_45298f910c935f95985b8e5f7fe7b6aefb63152656495bff9119386334048c07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008076c(float *param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float in_register_00000100;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  char cVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  
  if (param_1 == (float *)0x0) {
    return;
  }
  fVar31 = *param_1;
  if (fVar31 <= DAT_ram_40099f28) {
    uVar29 = *(undefined8 *)(param_1 + 2);
    fVar20 = param_1[3];
    uVar25 = *(undefined8 *)(param_1 + 0xc);
    fVar21 = param_1[0xd];
    fVar31 = DAT_ram_4009f078;
    if (*(char *)((int)param_1 + 0x56) == '\0') goto LAB_ram_40080930;
LAB_ram_400807c4:
    fVar28 = param_1[0x16];
    fVar19 = param_1[0x18];
    fVar16 = param_1[0x17];
    fVar22 = param_1[0x19];
  }
  else {
    uVar29 = *(undefined8 *)(param_1 + 2);
    fVar20 = param_1[3];
    uVar25 = *(undefined8 *)(param_1 + 0xc);
    fVar21 = param_1[0xd];
    if (*(char *)((int)param_1 + 0x56) != '\0') goto LAB_ram_400807c4;
LAB_ram_40080930:
    fVar19 = (float)uVar25;
    fVar28 = (float)uVar29;
    *(undefined1 *)((int)param_1 + 0x56) = 1;
    fVar16 = fVar20;
    fVar22 = fVar21;
  }
  fVar23 = DAT_ram_40099f88;
  fVar7 = DAT_ram_4009675c;
  fVar6 = DAT_ram_4009672c;
  fVar24 = (float)param_2 / fVar31;
  if (fVar24 <= 0.0) {
    fVar24 = DAT_ram_4009672c / fVar31;
  }
  fVar27 = (float)uVar29;
  fVar3 = fVar24 + DAT_ram_4009675c;
  fVar17 = (float)uVar25;
  fVar30 = fVar21 - fVar22;
  fVar4 = fVar24 / (fVar24 + DAT_ram_4009a4f8);
  fVar28 = fVar4 * (fVar27 - fVar28) + fVar28;
  fVar16 = fVar4 * (fVar20 - fVar16) + fVar16;
  fVar19 = fVar4 * (fVar17 - fVar19) + fVar19;
  *(ulonglong *)(param_1 + 0x16) = (ulonglong)(uint)fVar28;
  *(ulonglong *)(param_1 + 0x17) = (ulonglong)(uint)fVar16;
  *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uint)fVar19;
  fVar24 = (fVar24 / fVar3) * fVar30 + fVar22;
  *(ulonglong *)(param_1 + 0x19) = (ulonglong)(uint)fVar24;
  if (ABS(fVar27 - fVar28) < fVar23) {
    *(undefined8 *)(param_1 + 0x16) = uVar29;
    fVar28 = fVar27;
  }
  fVar3 = DAT_ram_40099f38;
  if (ABS(fVar20 - fVar16) < DAT_ram_40099f38) {
    param_1[0x17] = fVar20;
    fVar16 = fVar20;
  }
  fVar20 = DAT_ram_40099f34;
  if (ABS(fVar17 - fVar19) < DAT_ram_40099f34) {
    *(undefined8 *)(param_1 + 0x18) = uVar25;
    fVar19 = fVar17;
  }
  if (ABS(fVar21 - fVar24) < fVar6) {
    param_1[0x19] = fVar21;
  }
  else {
    fVar30 = fVar24 - fVar22;
  }
  uVar8 = DAT_ram_40099f6c;
  fVar21 = param_1[0x4bbe];
  bVar5 = true;
  if (ABS(param_1[0x4bc7] - fVar19) < fVar20) {
    bVar5 = fVar20 <= ABS(param_1[0x4bc6] - (float)*(undefined8 *)(param_1 + 0xb));
  }
  if (fVar23 <= ABS(param_1[0x4bbd] - fVar28)) {
    param_1[0x4bbd] = fVar28;
    fVar19 = (float)FUN_ram_40000844(uVar8);
    fVar20 = (float)FUN_ram_40000844(fVar23,param_1[0x4bc3]);
    fVar22 = (float)FUN_ram_40000844(uVar8,fVar19 * fVar20);
    fVar28 = DAT_ram_4009f0b0;
    fVar20 = DAT_ram_4009f068;
    pfVar9 = param_1 + 0x4bd4;
    do {
      pfVar10 = pfVar9 + 1;
      fVar24 = ((float)*(undefined8 *)pfVar9 / param_1[0x4bbb]) * fVar28;
      fVar23 = (float)FUN_ram_40000d44(fVar3,fVar24 / fVar19);
      fVar24 = (float)FUN_ram_40000d44(fVar3,fVar24 / fVar22);
      pfVar9[0x2b] = fVar23 * fVar20;
      pfVar9[0x33] = (fVar24 - fVar23) * fVar20;
      pfVar9 = pfVar10;
    } while (param_1 + 0x4bdc != pfVar10);
  }
  uVar8 = DAT_ram_4009a4f4;
  if (fVar3 <= ABS(fVar21 - fVar16)) {
    param_1[0x4bbe] = (float)*(undefined8 *)(param_1 + 0x17);
    fVar21 = (float)FUN_ram_40000844(uVar8);
    fVar20 = DAT_ram_4009f0b4;
    uVar26 = FUN_ram_40000bd8((fVar21 * DAT_ram_4009f0b4) / param_1[0x4bbb]);
    uVar8 = DAT_ram_40099f50;
    *(ulonglong *)(param_1 + 0x4c0f) = uVar26 & 0xffffffff;
    fVar21 = (float)FUN_ram_40000844(uVar8,param_1[0x4bc2]);
    uVar25 = FUN_ram_40000bd8((fVar21 * fVar20) / param_1[0x4bbb]);
    *(undefined8 *)(param_1 + 0x4c10) = uVar25;
  }
  if (bVar5) {
    fVar21 = (float)*(undefined8 *)(param_1 + 0x18);
    param_1[0x4bc7] = fVar21;
    param_1[0x4bc6] = (float)*(undefined8 *)(param_1 + 0xb);
    cVar1 = *(char *)(param_1 + 0x4bfe);
    fVar20 = 0.0;
    if ((0.0 <= fVar21) && (fVar20 = DAT_ram_400a1000, fVar21 <= DAT_ram_40099f30)) {
      fVar20 = fVar21 * DAT_ram_4009f0ac;
    }
    fVar21 = param_1[0x4bbb];
    param_1[0x4bfd] = fVar21 * fVar20;
    fVar18 = (float)FUN_ram_40000844(0);
    fVar27 = DAT_ram_400a0b94;
    fVar17 = DAT_ram_400a0b90;
    fVar4 = DAT_ram_400a0b8c;
    fVar3 = DAT_ram_400a0b88;
    fVar23 = DAT_ram_400a0b84;
    fVar24 = DAT_ram_400a0b80;
    fVar22 = DAT_ram_400a0b7c;
    fVar16 = DAT_ram_4009f920;
    fVar19 = DAT_ram_4009f918;
    fVar28 = DAT_ram_4009672c;
    fVar20 = DAT_ram_40096728;
    if (fVar18 <= 0.0) {
      if (cVar1 != '\0') {
        memset(param_1 + 0x4bdd,0,0x20);
        fVar20 = DAT_ram_4009672c;
        param_1[0x4be5] = DAT_ram_4009672c;
        param_1[0x4be6] = fVar20;
        param_1[0x4be7] = fVar20;
        param_1[0x4be8] = fVar20;
        param_1[0x4be9] = fVar20;
        param_1[0x4bea] = fVar20;
        param_1[0x4beb] = fVar20;
        param_1[0x4bec] = fVar20;
        memset(param_1 + 0x4bed,0,0x20);
        param_1[0x4bf5] = fVar20;
        param_1[0x4bf6] = fVar20;
        param_1[0x4bf7] = fVar20;
        param_1[0x4bf8] = fVar20;
        param_1[0x4bf9] = fVar20;
        param_1[0x4bfa] = fVar20;
        param_1[0x4bfb] = fVar20;
        param_1[0x4bfc] = fVar20;
      }
      *(undefined1 *)(param_1 + 0x4bfe) = 0;
      cVar12 = '\0';
    }
    else {
      fVar21 = (fVar18 * DAT_ram_4009f090) / fVar21;
      if (cVar1 == '\0') {
        param_1[0x4bdd] = 0.0;
        param_1[0x4be5] = fVar28;
        param_1[0x4bde] = fVar19;
        param_1[0x4be6] = fVar19;
        param_1[0x4bdf] = fVar28;
        param_1[0x4be7] = fVar16;
        param_1[0x4be0] = fVar19;
        param_1[0x4be8] = fVar22;
        param_1[0x4be1] = fVar24;
        param_1[0x4be9] = fVar20;
        param_1[0x4be2] = fVar23;
        param_1[0x4bea] = fVar3;
        param_1[0x4be3] = fVar20;
        param_1[0x4beb] = fVar4;
        param_1[0x4be4] = fVar17;
        param_1[0x4bec] = fVar27;
      }
      fVar28 = DAT_ram_40099f58;
      fVar20 = fVar21 * DAT_ram_40099f58;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bed] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_400a0b98;
      param_1[0x4bf5] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bee] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_400a0b9c;
      param_1[0x4bf6] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bef] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_400a0ba0;
      param_1[0x4bf7] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bf0] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_4009f4fc;
      param_1[0x4bf8] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bf1] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_40096734;
      param_1[0x4bf9] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bf2] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_400a0ba4;
      param_1[0x4bfa] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bf3] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_400a0ba8;
      param_1[0x4bfb] = fVar19;
      fVar28 = fVar21 * fVar20 * fVar28;
      fVar20 = (float)FUN_ram_400009d2(fVar28);
      param_1[0x4bf4] = fVar20;
      fVar20 = (float)FUN_ram_40000712(fVar28);
      cVar12 = '\x01';
      *(undefined1 *)(param_1 + 0x4bfe) = 1;
      param_1[0x4bfc] = fVar20;
    }
    if (cVar1 != cVar12) {
      *(undefined2 *)((int)param_1 + 0x12ffa) = 0;
    }
    fVar20 = (float)*(undefined8 *)(param_1 + 4);
    if (fVar20 < 0.0) {
      fVar20 = 0.0;
    }
    else if (fVar6 < fVar20) {
      fVar20 = fVar6;
    }
    param_1[0x4c25] = fVar20;
  }
  if (ABS(fVar30) < fVar6) {
    return;
  }
  if (fVar31 <= in_register_00000100) {
    fVar31 = DAT_ram_4009f078;
  }
  fVar21 = (float)FUN_ram_40000844(0,*(undefined8 *)(param_1 + 0x19));
  fVar21 = fVar21 * DAT_ram_4009f0ac;
  fVar20 = fVar21 * fVar31;
  if (0.0 <= fVar20) {
    fVar20 = fVar20 + fVar7;
  }
  else {
    fVar20 = fVar20 - fVar7;
  }
  uVar11 = (uint)fVar20;
  uVar14 = (int)~uVar11 >> 0x1f & uVar11;
  if (0x2580 < (int)uVar11) {
    uVar14 = 0x2580;
  }
  if ((uint)*(ushort *)((int)param_1 + 0x329e) != (uVar14 & 0xffff)) {
    *(ushort *)(param_1 + 0xca8) = *(ushort *)((int)param_1 + 0x329e);
    *(short *)((int)param_1 + 0x329e) = (short)uVar14;
    if (in_register_00000100 < fVar31) {
      fVar31 = fVar31 * DAT_ram_4009f08c;
      if (0.0 <= fVar31) {
        fVar31 = fVar31 + fVar7;
      }
      else {
        fVar31 = fVar31 - fVar7;
      }
      iVar15 = (int)fVar31;
      if (iVar15 < 0x10000) {
        if (iVar15 < 1) {
          uVar13 = 1;
        }
        else {
          uVar13 = (undefined2)iVar15;
        }
      }
      else {
        uVar13 = 0xffff;
      }
    }
    else {
      uVar13 = 0x2d0;
    }
    *(undefined2 *)(param_1 + 0xca9) = uVar13;
    *(undefined2 *)((int)param_1 + 0x32a2) = uVar13;
  }
  fVar31 = param_1[0x4bbb];
  fVar21 = fVar31 * fVar21;
  if (0.0 <= fVar21) {
    fVar21 = fVar21 + fVar7;
  }
  else {
    fVar21 = fVar21 - fVar7;
  }
  uVar11 = (uint)fVar21;
  uVar2 = *(ushort *)((int)param_1 + 0x13086);
  uVar14 = (int)~uVar11 >> 0x1f & uVar11;
  if (0x2580 < (int)uVar11) {
    uVar14 = 0x2580;
  }
  if ((uint)uVar2 == (uVar14 & 0xffff)) {
    return;
  }
  *(short *)((int)param_1 + 0x13086) = (short)uVar14;
  *(ushort *)(param_1 + 0x4c22) = uVar2;
  uVar13 = 0x2d0;
  if (fVar31 <= in_register_00000100) goto LAB_ram_40080d72;
  fVar31 = fVar31 * DAT_ram_4009f08c;
  if (0.0 <= fVar31) {
    iVar15 = (int)(fVar31 + fVar7);
    if (0xffff < iVar15) goto LAB_ram_40080ec0;
LAB_ram_40080d6a:
    if (iVar15 < 1) {
      iVar15 = 1;
    }
  }
  else {
    iVar15 = (int)(fVar31 - fVar7);
    if (iVar15 < 0x10000) goto LAB_ram_40080d6a;
LAB_ram_40080ec0:
    iVar15 = 0xffff;
  }
  uVar13 = (undefined2)iVar15;
LAB_ram_40080d72:
  *(undefined2 *)(param_1 + 0x4c23) = uVar13;
  *(undefined2 *)((int)param_1 + 0x1308a) = uVar13;
  return;
}


/* NanoCore 1.12, address 0x40080f38.
 * REA evidence: ev_c674855ae37ec89c5c4b1b28c08013167b9c90b0d8e4142ec0adffced632df10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40080f38(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ushort *puVar23;
  ushort *puVar24;
  uint uVar25;
  ushort uVar26;
  undefined2 uVar27;
  ushort *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  int iVar31;
  float *pfVar32;
  ushort *puVar33;
  undefined8 *puVar34;
  int iVar35;
  undefined8 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  float *pfVar39;
  undefined4 *puVar40;
  float *pfVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  ulonglong uVar48;
  float fVar49;
  int iStack_e8;
  int iStack_e4;
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  
  fVar49 = DAT_ram_40099f28;
  fVar43 = DAT_ram_4009678c;
  fVar46 = (float)*param_1;
  if ((float)*param_1 <= DAT_ram_40099f28) {
    fVar46 = DAT_ram_4009f078;
  }
  if (*(char *)((int)param_1 + 0x55) == '\0') {
    if (*(char *)((int)param_1 + 0x56) == '\0') {
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 6);
      *(undefined4 *)((int)param_1 + 100) = *(undefined4 *)((int)param_1 + 0x34);
      *(undefined1 *)((int)param_1 + 0x56) = 1;
    }
LAB_ram_40080fb8:
    *(undefined1 *)((int)param_1 + 0x54) = 0;
    return;
  }
  fVar42 = (float)FUN_ram_40000844(0,*(undefined4 *)((int)param_1 + 0x34));
  fVar6 = DAT_ram_4009f0ac;
  fVar5 = DAT_ram_4009675c;
  fVar1 = fVar46 / fVar43;
  fVar42 = fVar42 * DAT_ram_4009f0ac * fVar46;
  if (fVar42 < 0.0) {
    fVar42 = fVar42 - DAT_ram_4009675c;
  }
  else {
    fVar42 = fVar42 + DAT_ram_4009675c;
  }
  uVar25 = (uint)fVar42;
  uVar15 = (int)~uVar25 >> 0x1f & uVar25;
  if (0x2580 < (int)uVar25) {
    uVar15 = 0x2580;
  }
  if ((uint)*(ushort *)((int)param_1 + 0x329e) != (uVar15 & 0xffff)) {
    *(ushort *)(param_1 + 0x654) = *(ushort *)((int)param_1 + 0x329e);
    *(short *)((int)param_1 + 0x329e) = (short)uVar15;
    if (fVar46 <= fVar49) {
      uVar27 = 0x2d0;
    }
    else {
      fVar42 = fVar46 * DAT_ram_4009f08c;
      if (0.0 <= fVar42) {
        fVar42 = fVar42 + fVar5;
      }
      else {
        fVar42 = fVar42 - fVar5;
      }
      iVar35 = (int)fVar42;
      if (iVar35 < 0x10000) {
        if (iVar35 < 1) {
          uVar27 = 1;
        }
        else {
          uVar27 = (undefined2)iVar35;
        }
      }
      else {
        uVar27 = 0xffff;
      }
    }
    *(undefined2 *)((int)param_1 + 0x32a4) = uVar27;
    *(undefined2 *)((int)param_1 + 0x32a2) = uVar27;
  }
  fVar42 = fVar1 * DAT_ram_400a1010;
  if (fVar42 < 0.0) {
    fVar42 = fVar42 - fVar5;
  }
  else {
    fVar42 = fVar42 + fVar5;
  }
  aiStack_c0[0] = (int)fVar42;
  fVar42 = fVar1 * DAT_ram_400a1014;
  if (fVar42 < 0.0) {
    fVar42 = fVar42 - fVar5;
  }
  else {
    fVar42 = fVar42 + fVar5;
  }
  aiStack_b0[0] = (int)fVar42;
  fVar42 = fVar1 * DAT_ram_400a1018;
  if (fVar42 < 0.0) {
    fVar42 = fVar42 - fVar5;
  }
  else {
    fVar42 = fVar42 + fVar5;
  }
  aiStack_c0[1] = (int)fVar42;
  fVar42 = fVar1 * DAT_ram_400a0f68;
  if (fVar42 < 0.0) {
    fVar42 = fVar42 - fVar5;
  }
  else {
    fVar42 = fVar42 + fVar5;
  }
  aiStack_b0[1] = (int)fVar42;
  fVar42 = fVar1 * DAT_ram_400a101c;
  if (fVar42 < 0.0) {
    fVar42 = fVar42 - fVar5;
  }
  else {
    fVar42 = fVar42 + fVar5;
  }
  aiStack_c0[2] = (int)fVar42;
  fVar42 = fVar1 * DAT_ram_400a1020;
  if (fVar42 < 0.0) {
    fVar42 = fVar42 - fVar5;
  }
  else {
    fVar42 = fVar42 + fVar5;
  }
  aiStack_b0[2] = (int)fVar42;
  fVar42 = fVar1 * DAT_ram_400a1024;
  if (fVar42 < 0.0) {
    fVar42 = fVar42 - fVar5;
  }
  else {
    fVar42 = fVar42 + fVar5;
  }
  aiStack_c0[3] = (int)fVar42;
  fVar1 = fVar1 * DAT_ram_400a1028;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 - fVar5;
  }
  else {
    fVar1 = fVar1 + fVar5;
  }
  aiStack_b0[3] = (int)fVar1;
  puVar23 = (ushort *)((int)param_1 + 0xcaac);
  memset(puVar23,0,0x20);
  iStack_e8 = (int)param_1 + 0xcacc;
  puVar40 = &DAT_ram_400a106c;
  puVar37 = (undefined4 *)((int)param_1 + 0xcabc);
  iVar31 = 1;
  iVar35 = iStack_e8;
  puVar38 = puVar40;
  do {
    iVar14 = aiStack_c0[iVar31 + -1];
    if (iVar14 < 0x321) {
      if (iVar14 < 1) {
        iVar14 = 1;
      }
    }
    else {
      iVar14 = 800;
    }
    uVar20 = *puVar38;
    *(short *)((int)param_1 + iVar31 * 2 + 0xcaaa) = (short)iVar14;
    *(undefined2 *)((int)param_1 + iVar31 * 2 + 0xcab2) = 0;
    *puVar37 = uVar20;
    uVar15 = iVar14 * 4;
    iVar14 = iVar35;
    if (0x80 < uVar15) {
      uVar25 = uVar15 - 0x81 >> 7;
      iVar14 = (uVar25 + 1) * 0x80 + iVar35;
      iVar17 = iVar35;
      do {
        iVar17 = memset(iVar17,0,0x80);
        fence();
        iVar17 = iVar17 + 0x80;
      } while (iVar17 != iVar14);
      uVar15 = (uVar15 - 0x80) + uVar25 * -0x80;
    }
    memset(iVar14,0,uVar15);
    fence();
    iVar31 = iVar31 + 1;
    puVar38 = puVar38 + 1;
    iVar35 = iVar35 + 0xc80;
    puVar37 = puVar37 + 1;
  } while (iVar31 != 5);
  puVar28 = (ushort *)((int)param_1 + 0xfccc);
  memset(puVar28,0,0x20);
  iStack_e4 = (int)param_1 + 0xfcec;
  puVar38 = (undefined4 *)((int)param_1 + 0xfcdc);
  iVar31 = 1;
  iVar35 = iStack_e4;
  do {
    iVar14 = aiStack_c0[iVar31 + 3];
    if (iVar14 < 0x321) {
      if (iVar14 < 1) {
        iVar14 = 1;
      }
    }
    else {
      iVar14 = 800;
    }
    uVar20 = *puVar40;
    *(short *)((int)param_1 + iVar31 * 2 + 0xfcca) = (short)iVar14;
    *(undefined2 *)((int)param_1 + iVar31 * 2 + 0xfcd2) = 0;
    *puVar38 = uVar20;
    uVar15 = iVar14 * 4;
    iVar14 = iVar35;
    if (0x80 < uVar15) {
      uVar25 = uVar15 - 0x81 >> 7;
      iVar14 = (uVar25 + 1) * 0x80 + iVar35;
      iVar17 = iVar35;
      do {
        iVar17 = memset(iVar17,0,0x80);
        fence();
        iVar17 = iVar17 + 0x80;
      } while (iVar17 != iVar14);
      uVar15 = (uVar15 - 0x80) + uVar25 * -0x80;
    }
    memset(iVar14,0,uVar15);
    fence();
    iVar31 = iVar31 + 1;
    puVar40 = puVar40 + 1;
    iVar35 = iVar35 + 0xc80;
    puVar38 = puVar38 + 1;
  } while (iVar31 != 5);
  puVar36 = param_1 + 0x655;
  puVar29 = puVar36;
  do {
    iVar35 = memset(puVar29,0,0x80);
    fence();
    puVar29 = (undefined8 *)(iVar35 + 0x80);
  } while (puVar29 != param_1 + 0x685);
  memset(param_1 + 0x685,0,0x80);
  fVar44 = DAT_ram_4009f22c;
  fVar1 = DAT_ram_4009f0b4;
  fVar42 = DAT_ram_4009f078;
  fence();
  if (fVar46 <= fVar49) {
    *(undefined4 *)(param_1 + 0xd) = DAT_ram_400a1040;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    fVar45 = fVar42;
LAB_ram_4008200e:
    fVar47 = DAT_ram_400a1004;
    if (fVar45 * fVar44 < DAT_ram_4009f0a0) {
      fVar47 = fVar45 * fVar44 * fVar1;
    }
    uVar20 = FUN_ram_40000bd8(fVar47 / fVar45);
    *(undefined4 *)((int)param_1 + 0x74) = uVar20;
LAB_ram_40082036:
    *(undefined4 *)(param_1 + 0xf) = 0;
    fVar45 = DAT_ram_400a1008;
    fVar44 = DAT_ram_400a100c;
    if (fVar49 < fVar46) goto LAB_ram_400813ac;
  }
  else {
    if (0.0 < fVar46) {
      fVar42 = DAT_ram_400a102c;
      if (fVar46 * DAT_ram_4009f22c < DAT_ram_400a0f74) {
        fVar42 = fVar46 * DAT_ram_4009f22c * DAT_ram_4009f0b4;
      }
      uVar20 = FUN_ram_40000bd8(fVar42 / fVar46);
      *(undefined4 *)((int)param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0xd) = uVar20;
      *(undefined4 *)(param_1 + 0xe) = 0;
      fVar42 = DAT_ram_4009f078;
      fVar45 = fVar46;
      if (0.0 < fVar46) goto LAB_ram_4008200e;
      goto LAB_ram_40082036;
    }
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
LAB_ram_400813ac:
    fVar45 = (fVar46 / fVar43) * DAT_ram_40099f84;
    fVar44 = fVar45 * DAT_ram_4009a4fc;
    if (fVar44 < 0.0) {
      fVar44 = fVar44 - fVar5;
      fVar43 = fVar45 * DAT_ram_400a1030;
      fVar47 = DAT_ram_4009a4fc;
      fVar2 = DAT_ram_400a1030;
      fVar3 = DAT_ram_400a1034;
      fVar4 = DAT_ram_400a1038;
      goto joined_r0x4008207a;
    }
  }
  fVar44 = fVar44 + fVar5;
  fVar43 = fVar45 * DAT_ram_400a1030;
  fVar47 = DAT_ram_4009a4fc;
  fVar2 = DAT_ram_400a1030;
  fVar3 = DAT_ram_400a1034;
  fVar4 = DAT_ram_400a1038;
joined_r0x4008207a:
  aiStack_b0[0] = (int)fVar44;
  if (0.0 <= fVar43) {
    fVar43 = fVar43 + fVar5;
  }
  else {
    fVar43 = fVar43 - fVar5;
  }
  fVar44 = fVar45 * fVar3;
  aiStack_b0[1] = (int)fVar43;
  if (fVar44 < 0.0) {
    fVar44 = fVar44 - fVar5;
  }
  else {
    fVar44 = fVar44 + fVar5;
  }
  fVar45 = fVar45 * fVar4;
  aiStack_b0[2] = (int)fVar44;
  if (0.0 <= fVar45) {
    fVar45 = fVar45 + fVar5;
  }
  else {
    fVar45 = fVar45 - fVar5;
  }
  aiStack_b0[3] = (int)fVar45;
  puVar24 = (ushort *)((int)param_1 + 0x7c);
  DAT_ram_4009a4fc = fVar47;
  DAT_ram_400a1030 = fVar2;
  DAT_ram_400a1034 = fVar3;
  DAT_ram_400a1038 = fVar4;
  memset(puVar24,0,0x20);
  iVar14 = (int)param_1 + 0x9c;
  puVar37 = &DAT_ram_400a107c;
  puVar38 = (undefined4 *)((int)param_1 + 0x8c);
  iVar31 = 1;
  iVar35 = iVar14;
  do {
    iVar17 = aiStack_c0[iVar31 + 3];
    if (iVar17 < 0x321) {
      if (iVar17 < 1) {
        iVar17 = 1;
      }
    }
    else {
      iVar17 = 800;
    }
    uVar20 = *puVar37;
    *(short *)((int)param_1 + iVar31 * 2 + 0x7a) = (short)iVar17;
    *(undefined2 *)((int)param_1 + iVar31 * 2 + 0x82) = 0;
    *puVar38 = uVar20;
    uVar15 = iVar17 * 4;
    iVar17 = iVar35;
    if (0x80 < uVar15) {
      uVar25 = uVar15 - 0x81 >> 7;
      iVar17 = (uVar25 + 1) * 0x80 + iVar35;
      iVar18 = iVar35;
      do {
        iVar18 = memset(iVar18,0,0x80);
        fence();
        iVar18 = iVar18 + 0x80;
      } while (iVar18 != iVar17);
      uVar15 = (uVar15 - 0x80) + uVar25 * -0x80;
    }
    memset(iVar17,0,uVar15);
    fence();
    iVar35 = iVar35 + 0xc80;
    iVar31 = iVar31 + 1;
    puVar37 = puVar37 + 1;
    puVar38 = puVar38 + 1;
  } while (iVar31 != 5);
  if (fVar46 <= fVar49) {
    iVar35 = 0x133d;
  }
  else {
    FUN_ram_40000844(0,fVar46 * DAT_ram_400a1000);
    fVar43 = (float)FUN_ram_40000658();
    iVar35 = 0x13fe - (int)fVar43;
    if (iVar35 < 1) {
      iVar35 = 1;
    }
  }
  *(float *)((int)param_1 + 0x12eec) = fVar46;
  puVar38 = (undefined4 *)((int)param_1 + 4);
  puVar29 = param_1 + 0x25de;
  do {
    uVar20 = puVar38[1];
    uVar21 = puVar38[2];
    uVar22 = puVar38[3];
    *(undefined4 *)puVar29 = *puVar38;
    *(undefined4 *)((int)puVar29 + 4) = uVar20;
    *(undefined4 *)(puVar29 + 1) = uVar21;
    *(undefined4 *)((int)puVar29 + 0xc) = uVar22;
    uVar20 = DAT_ram_40099f88;
    puVar38 = puVar38 + 4;
    puVar29 = puVar29 + 2;
  } while (puVar38 != (undefined4 *)((int)param_1 + 0x54));
  pfVar41 = (float *)((int)&DAT_ram_400a1048 + 4);
  fVar44 = (float)FUN_ram_40000844(DAT_ram_40099f88,*(undefined4 *)(param_1 + 0x25e0));
  fVar49 = fVar44 * DAT_ram_400a103c + DAT_ram_4009b140;
  fVar43 = fVar49 * DAT_ram_400a1048._4_4_ * (fVar46 / fVar42);
  puVar16 = param_1 + 0x3003;
  pfVar32 = (float *)(param_1 + 0x25ea);
  puVar34 = param_1 + 0x25e8;
  puVar29 = puVar16;
  pfVar39 = pfVar32;
  if (0.0 <= fVar43) goto LAB_ram_4008165a;
  do {
    fVar43 = fVar43 - fVar5;
    while( true ) {
      iVar31 = (int)fVar43;
      if (iVar31 < 1) {
        iVar31 = 1;
      }
      if (iVar35 < iVar31) {
        iVar31 = iVar35;
      }
      *(short *)puVar34 = (short)iVar31;
      *pfVar39 = (float)iVar31;
      puVar30 = puVar29 + -0x9f0;
      do {
        iVar31 = memset(puVar30,0,0x80);
        fence();
        puVar30 = (undefined8 *)(iVar31 + 0x80);
      } while (puVar30 != puVar29);
      memset(puVar29,0,0x80);
      fence();
      puVar29 = puVar29 + 0xa00;
      pfVar41 = pfVar41 + 1;
      puVar34 = (undefined8 *)((int)puVar34 + 2);
      pfVar39 = pfVar39 + 1;
      if (puVar29 == param_1 + 0x8003) {
        fVar43 = *(float *)((int)param_1 + 0x12f1c);
        *(undefined1 *)(param_1 + 0x25ff) = 0;
        *(undefined2 *)((int)param_1 + 0x12ffa) = 0;
        fVar49 = 0.0;
        if ((0.0 <= fVar43) && (fVar49 = DAT_ram_400a1000, fVar43 <= DAT_ram_40099f30)) {
          fVar49 = fVar43 * fVar6;
        }
        fVar43 = *(float *)((int)param_1 + 0x12eec);
        *(float *)((int)param_1 + 0x12ff4) = fVar43 * fVar49;
        fVar45 = (float)FUN_ram_40000844(0,*(undefined4 *)(param_1 + 0x25e3));
        uVar13 = DAT_ram_400a0b94;
        uVar12 = DAT_ram_400a0b90;
        uVar11 = DAT_ram_400a0b88;
        uVar10 = DAT_ram_400a0b84;
        uVar9 = DAT_ram_400a0b80;
        uVar8 = DAT_ram_400a0b7c;
        uVar7 = DAT_ram_4009f920;
        uVar22 = DAT_ram_4009f918;
        fVar49 = DAT_ram_40099f58;
        fVar46 = DAT_ram_4009672c;
        uVar21 = DAT_ram_40096728;
        if (0.0 < fVar45) {
          fVar45 = (fVar45 * DAT_ram_4009f090) / fVar43;
          *(undefined4 *)((int)param_1 + 0x12fac) = DAT_ram_400a0b8c;
          *(float *)((int)param_1 + 0x12f94) = fVar46;
          *(float *)((int)param_1 + 0x12f7c) = fVar46;
          *(undefined4 *)((int)param_1 + 0x12f9c) = uVar7;
          *(undefined4 *)(param_1 + 0x25f4) = uVar8;
          *(undefined4 *)((int)param_1 + 0x12f84) = uVar9;
          *(undefined4 *)((int)param_1 + 0x12fa4) = uVar21;
          *(undefined4 *)(param_1 + 0x25f1) = uVar10;
          *(undefined4 *)(param_1 + 0x25f5) = uVar11;
          *(undefined4 *)((int)param_1 + 0x12f8c) = uVar21;
          *(undefined4 *)(param_1 + 0x25f2) = uVar12;
          *(undefined4 *)(param_1 + 0x25f6) = uVar13;
          *(undefined4 *)(param_1 + 0x25ef) = uVar22;
          *(undefined4 *)(param_1 + 0x25f3) = uVar22;
          *(undefined4 *)(param_1 + 0x25f0) = uVar22;
          *(undefined4 *)((int)param_1 + 0x12f74) = 0;
          uVar21 = FUN_ram_400009d2(fVar45 * fVar49);
          *(undefined4 *)((int)param_1 + 0x12fb4) = uVar21;
          uVar21 = FUN_ram_40000712(fVar45 * fVar49);
          fVar46 = DAT_ram_400a0b98;
          *(undefined4 *)((int)param_1 + 0x12fd4) = uVar21;
          fVar46 = fVar45 * fVar46 * fVar49;
          uVar21 = FUN_ram_400009d2(fVar46);
          *(undefined4 *)(param_1 + 0x25f7) = uVar21;
          uVar21 = FUN_ram_40000712(fVar46);
          fVar46 = DAT_ram_400a0b9c;
          *(undefined4 *)(param_1 + 0x25fb) = uVar21;
          fVar46 = fVar45 * fVar46 * fVar49;
          uVar21 = FUN_ram_400009d2(fVar46);
          *(undefined4 *)((int)param_1 + 0x12fbc) = uVar21;
          uVar21 = FUN_ram_40000712(fVar46);
          fVar46 = DAT_ram_400a0ba0;
          *(undefined4 *)((int)param_1 + 0x12fdc) = uVar21;
          fVar46 = fVar45 * fVar46 * fVar49;
          uVar21 = FUN_ram_400009d2(fVar46);
          *(undefined4 *)(param_1 + 0x25f8) = uVar21;
          uVar21 = FUN_ram_40000712(fVar46);
          fVar46 = DAT_ram_4009f4fc;
          *(undefined4 *)(param_1 + 0x25fc) = uVar21;
          fVar46 = fVar45 * fVar46 * fVar49;
          uVar21 = FUN_ram_400009d2(fVar46);
          *(undefined4 *)((int)param_1 + 0x12fc4) = uVar21;
          uVar21 = FUN_ram_40000712(fVar46);
          fVar46 = DAT_ram_40096734;
          *(undefined4 *)((int)param_1 + 0x12fe4) = uVar21;
          fVar46 = fVar45 * fVar46 * fVar49;
          uVar21 = FUN_ram_400009d2(fVar46);
          *(undefined4 *)(param_1 + 0x25f9) = uVar21;
          uVar21 = FUN_ram_40000712(fVar46);
          fVar46 = DAT_ram_400a0ba4;
          *(undefined4 *)(param_1 + 0x25fd) = uVar21;
          fVar46 = fVar45 * fVar46 * fVar49;
          uVar21 = FUN_ram_400009d2(fVar46);
          *(undefined4 *)((int)param_1 + 0x12fcc) = uVar21;
          uVar21 = FUN_ram_40000712(fVar46);
          fVar46 = DAT_ram_400a0ba8;
          *(undefined4 *)((int)param_1 + 0x12fec) = uVar21;
          fVar49 = fVar45 * fVar46 * fVar49;
          uVar21 = FUN_ram_400009d2(fVar49);
          *(undefined4 *)(param_1 + 0x25fa) = uVar21;
          uVar21 = FUN_ram_40000712(fVar49);
          *(undefined1 *)(param_1 + 0x25ff) = 1;
          *(undefined4 *)(param_1 + 0x25fe) = uVar21;
        }
        fVar43 = fVar43 / fVar42;
        fVar46 = fVar44 * DAT_ram_4009f060 + fVar5;
        *(undefined2 *)(param_1 + 0x25ee) = 0;
        uVar21 = DAT_ram_4009f290;
        fVar42 = DAT_ram_4009672c;
        fVar49 = fVar46 * fVar47 * fVar43;
        if (0.0 <= fVar49) {
          fVar49 = fVar49 + fVar5;
        }
        else {
          fVar49 = fVar49 - fVar5;
        }
        aiStack_b0[0] = (int)fVar49;
        if (aiStack_b0[0] < 1) {
          aiStack_b0[0] = 1;
        }
        fVar49 = fVar46 * fVar2 * fVar43;
        if (0.0 <= fVar49) {
          fVar49 = fVar49 + fVar5;
        }
        else {
          fVar49 = fVar49 - fVar5;
        }
        aiStack_b0[1] = (int)fVar49;
        if (aiStack_b0[1] < 1) {
          aiStack_b0[1] = 1;
        }
        fVar49 = fVar46 * fVar3 * fVar43;
        if (0.0 <= fVar49) {
          fVar49 = fVar49 + fVar5;
        }
        else {
          fVar49 = fVar49 - fVar5;
        }
        aiStack_b0[2] = (int)fVar49;
        if (aiStack_b0[2] < 1) {
          aiStack_b0[2] = 1;
        }
        fVar43 = fVar46 * fVar4 * fVar43;
        if (0.0 <= fVar43) {
          fVar43 = fVar43 + fVar5;
        }
        else {
          fVar43 = fVar43 - fVar5;
        }
        aiStack_b0[3] = (int)fVar43;
        if (aiStack_b0[3] < 1) {
          aiStack_b0[3] = 1;
        }
        fVar43 = *(float *)((int)param_1 + 0x12f04);
        if (fVar43 < 0.0) {
          fVar49 = 0.0;
        }
        else {
          fVar49 = DAT_ram_4009a644;
          if (fVar43 <= DAT_ram_4009672c) {
            fVar49 = fVar43 * DAT_ram_4009a644;
          }
        }
        *(float *)(param_1 + 0x7615) = fVar49;
        *(undefined4 *)(param_1 + 0x7613) = uVar21;
        *(undefined4 *)((int)param_1 + 0x3b09c) = uVar21;
        *(undefined4 *)(param_1 + 0x7614) = uVar21;
        *(undefined4 *)((int)param_1 + 0x3b0a4) = uVar21;
        puVar33 = (ushort *)(param_1 + 0x7613);
        iVar17 = (int)param_1 + 0x3b0ac;
        iVar31 = 1;
        iVar35 = iVar17;
        do {
          iVar18 = aiStack_c0[iVar31 + 3];
          if (iVar18 < 0x321) {
            if (iVar18 < 1) {
              iVar18 = 1;
            }
          }
          else {
            iVar18 = 800;
          }
          *(short *)((int)param_1 + iVar31 * 2 + 0x3b096) = (short)iVar18;
          uVar15 = iVar18 * 4;
          *(undefined2 *)((int)param_1 + iVar31 * 2 + 0x3b09e) = 0;
          iVar18 = iVar35;
          if (0x80 < uVar15) {
            uVar25 = uVar15 - 0x81 >> 7;
            iVar18 = (uVar25 + 1) * 0x80 + iVar35;
            iVar19 = iVar35;
            do {
              iVar19 = memset(iVar19,0,0x80);
              fence();
              iVar19 = iVar19 + 0x80;
            } while (iVar19 != iVar18);
            uVar15 = (uVar15 - 0x80) + uVar25 * -0x80;
          }
          memset(iVar18,0,uVar15);
          uVar21 = DAT_ram_40099f6c;
          fence();
          iVar31 = iVar31 + 1;
          iVar35 = iVar35 + 0xc80;
        } while (iVar31 != 5);
        fVar46 = (float)FUN_ram_40000844(DAT_ram_40099f6c,*(undefined4 *)((int)param_1 + 0x12ef4));
        fVar43 = (float)FUN_ram_40000844(uVar20,*(undefined4 *)((int)param_1 + 0x12f0c));
        fVar44 = (float)FUN_ram_40000844(uVar21,fVar46 * fVar43);
        fVar49 = DAT_ram_4009f0b0;
        fVar43 = DAT_ram_4009f068;
        uVar20 = DAT_ram_40099f38;
        do {
          pfVar39 = pfVar32 + 1;
          fVar45 = (*pfVar32 / *(float *)((int)param_1 + 0x12eec)) * fVar49;
          fVar47 = (float)FUN_ram_40000d44(uVar20,fVar45 / fVar46);
          fVar45 = (float)FUN_ram_40000d44(uVar20,fVar45 / fVar44);
          pfVar32[0x2b] = fVar47 * fVar43;
          pfVar32[0x33] = (fVar45 - fVar47) * fVar43;
          pfVar32 = pfVar39;
        } while (pfVar39 != (float *)(param_1 + 0x25ee));
        fVar43 = (float)FUN_ram_40000844(DAT_ram_4009a4f4,*(undefined4 *)(param_1 + 0x25df));
        uVar48 = FUN_ram_40000bd8((fVar43 * fVar1) / *(float *)((int)param_1 + 0x12eec));
        uVar20 = DAT_ram_40099f50;
        *(ulonglong *)((int)param_1 + 0x1303c) = uVar48 & 0xffffffff;
        fVar43 = (float)FUN_ram_40000844(uVar20,*(undefined4 *)(param_1 + 0x25e1));
        uVar48 = FUN_ram_40000bd8((fVar43 * fVar1) / *(float *)((int)param_1 + 0x12eec));
        param_1[0x2608] = uVar48 & 0xffffffff;
        fVar43 = (float)FUN_ram_40000844(0,*(undefined4 *)(param_1 + 0x25de));
        fVar43 = fVar43 * fVar6 * *(float *)((int)param_1 + 0x12eec);
        if (0.0 <= fVar43) {
          fVar43 = fVar43 + fVar5;
        }
        else {
          fVar43 = fVar43 - fVar5;
        }
        iVar35 = (int)fVar43;
        fVar43 = *(float *)((int)param_1 + 0x12efc);
        uVar26 = (short)~(ushort)((uint)iVar35 >> 0x10) >> 0xf & (ushort)iVar35;
        if (0x2580 < iVar35) {
          uVar26 = 0x2580;
        }
        *(ushort *)((int)param_1 + 0x13086) = uVar26;
        *(ushort *)(param_1 + 0x2611) = uVar26;
        *(undefined2 *)((int)param_1 + 0x1308a) = 0;
        *(undefined2 *)((int)param_1 + 0x1308c) = 0;
        if (fVar43 < 0.0) {
          fVar43 = 0.0;
        }
        else if (fVar42 < fVar43) {
          fVar43 = fVar42;
        }
        *(float *)((int)param_1 + 0x13094) = fVar43;
        fVar43 = *(float *)(param_1 + 0x25e2) * fVar6 * *(float *)((int)param_1 + 0x12eec);
        if (0.0 <= fVar43) {
          fVar43 = fVar43 + fVar5;
        }
        else {
          fVar43 = fVar43 - fVar5;
        }
        fVar43 = (float)FUN_ram_40000844(fVar42,(float)(int)fVar43);
        *(undefined2 *)(param_1 + 0x2612) = 0;
        *(ushort *)((int)param_1 + 0x1308e) = (ushort)(-1 < (int)fVar43) * (short)(int)fVar43;
        *(undefined1 *)((int)param_1 + 0x55) = 0;
        *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_1 + 0xc);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)((int)param_1 + 100) = *(undefined4 *)((int)param_1 + 0x34);
        *(undefined1 *)((int)param_1 + 0x56) = 1;
        puVar29 = param_1 + 0x695;
        do {
          iVar35 = memset(puVar29,0,0x80);
          fence();
          puVar29 = (undefined8 *)(iVar35 + 0x80);
        } while (puVar29 != param_1 + 0x1955);
        *(undefined1 *)(param_1 + 0x1955) = 0;
        *(undefined1 *)((int)param_1 + 0xcaa9) = 0;
        *(undefined1 *)((int)param_1 + 0xcaaa) = 0;
        *(undefined1 *)((int)param_1 + 0xcaab) = 0;
        fence();
        *(undefined2 *)((int)param_1 + 0x329c) = 0;
        *(undefined2 *)(param_1 + 0x654) = *(undefined2 *)((int)param_1 + 0x329e);
        *(undefined2 *)((int)param_1 + 0x32a2) = 0;
        *(undefined2 *)((int)param_1 + 0x32a4) = 0;
        do {
          if (*puVar23 != 0) {
            uVar15 = (uint)*puVar23 * 4;
            iVar35 = iStack_e8;
            if (0x80 < uVar15) {
              uVar25 = uVar15 - 0x81 >> 7;
              iVar35 = (uVar25 + 1) * 0x80 + iStack_e8;
              iVar31 = iStack_e8;
              do {
                iVar31 = memset(iVar31,0,0x80);
                fence();
                iVar31 = iVar31 + 0x80;
              } while (iVar31 != iVar35);
              uVar15 = (uVar15 - 0x80) + uVar25 * -0x80;
            }
            memset(iVar35,0,uVar15);
            fence();
          }
          puVar23[4] = 0;
          puVar23 = puVar23 + 1;
          iStack_e8 = iStack_e8 + 0xc80;
        } while (iStack_e8 != (int)param_1 + 0xfccc);
        do {
          if (*puVar28 != 0) {
            uVar15 = (uint)*puVar28 * 4;
            iVar35 = iStack_e4;
            if (0x80 < uVar15) {
              uVar25 = uVar15 - 0x81 >> 7;
              iVar35 = (uVar25 + 1) * 0x80 + iStack_e4;
              iVar31 = iStack_e4;
              do {
                iVar31 = memset(iVar31,0,0x80);
                fence();
                iVar31 = iVar31 + 0x80;
              } while (iVar31 != iVar35);
              uVar15 = (uVar15 - 0x80) + uVar25 * -0x80;
            }
            memset(iVar35,0,uVar15);
            fence();
          }
          puVar28[4] = 0;
          puVar28 = puVar28 + 1;
          iStack_e4 = iStack_e4 + 0xc80;
        } while (iStack_e4 != (int)param_1 + 0x12eec);
        do {
          memset(puVar36,0,0x80);
          fence();
          puVar36 = puVar36 + 0x10;
        } while (puVar36 != param_1 + 0x685);
        memset(param_1 + 0x685,0,0x80);
        fence();
        do {
          if (*puVar24 != 0) {
            uVar15 = (uint)*puVar24 * 4;
            iVar35 = iVar14;
            if (0x80 < uVar15) {
              uVar25 = uVar15 - 0x81 >> 7;
              iVar35 = (uVar25 + 1) * 0x80 + iVar14;
              iVar31 = iVar14;
              do {
                iVar31 = memset(iVar31,0,0x80);
                fence();
                iVar31 = iVar31 + 0x80;
              } while (iVar31 != iVar35);
              uVar15 = (uVar15 - 0x80) + uVar25 * -0x80;
            }
            memset(iVar35,0,uVar15);
            fence();
          }
          puVar24[4] = 0;
          iVar14 = iVar14 + 0xc80;
          puVar24 = puVar24 + 1;
        } while ((int)param_1 + 0x329c != iVar14);
        *(undefined4 *)((int)param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0xe) = 0;
        *(undefined4 *)(param_1 + 0xf) = 0;
        puVar38 = (undefined4 *)((int)param_1 + 0x13044);
        do {
          puVar29 = puVar16 + -0x9f0;
          do {
            iVar35 = memset(puVar29,0,0x80);
            fence();
            puVar29 = (undefined8 *)(iVar35 + 0x80);
          } while (puVar29 != puVar16);
          iVar35 = memset(puVar29,0,0x80);
          fence();
          *puVar38 = 0;
          puVar38[8] = 0;
          puVar16 = (undefined8 *)(iVar35 + 0x5000);
          puVar38 = puVar38 + 1;
        } while (puVar16 != param_1 + 0x8003);
        *(undefined2 *)(param_1 + 0x25ee) = 0;
        do {
          if (*puVar33 != 0) {
            uVar15 = (uint)*puVar33 * 4;
            iVar35 = iVar17;
            if (0x80 < uVar15) {
              uVar25 = uVar15 - 0x81 >> 7;
              iVar35 = (uVar25 + 1) * 0x80 + iVar17;
              iVar31 = iVar17;
              do {
                iVar31 = memset(iVar31,0,0x80);
                fence();
                iVar31 = iVar31 + 0x80;
              } while (iVar35 != iVar31);
              uVar15 = (uVar15 - 0x80) + uVar25 * -0x80;
            }
            memset(iVar35,0,uVar15);
            fence();
          }
          puVar33[4] = 0;
          iVar17 = iVar17 + 0xc80;
          puVar33 = puVar33 + 1;
        } while (iVar17 != (int)param_1 + 0x3e2ac);
        iVar35 = (int)param_1 + 0x3e2ac;
        do {
          iVar35 = memset(iVar35,0,0x80);
          fence();
          iVar35 = iVar35 + 0x80;
        } while (iVar35 != (int)param_1 + 0x478ac);
        *(undefined1 *)((int)param_1 + 0x478ac) = 0;
        *(undefined1 *)((int)param_1 + 0x478ad) = 0;
        *(undefined1 *)((int)param_1 + 0x478ae) = 0;
        *(undefined1 *)((int)param_1 + 0x478af) = 0;
        fence();
        *(undefined2 *)((int)param_1 + 0x13084) = 0;
        *(undefined2 *)((int)param_1 + 0x1308a) = 0;
        *(undefined2 *)(param_1 + 0x2611) = *(undefined2 *)((int)param_1 + 0x13086);
        *(undefined2 *)((int)param_1 + 0x1308c) = 0;
        *(undefined2 *)(param_1 + 0x2612) = 0;
        goto LAB_ram_40080fb8;
      }
      fVar43 = fVar49 * *pfVar41 * (*(float *)((int)param_1 + 0x12eec) / fVar42);
      if (fVar43 < 0.0) break;
LAB_ram_4008165a:
      fVar43 = fVar43 + fVar5;
    }
  } while( true );
}


