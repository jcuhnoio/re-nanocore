/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40086000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400860c4.
 * REA evidence: ev_9fc08e7548205baeee5e61f8c212a28cc0c5661a687556622ddc8489512f68f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400860c4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    uVar3 = param_1[1];
    if (uVar3 != 0) {
      iVar4 = 0;
      uVar5 = 0;
      do {
        puVar1 = (undefined4 *)(iVar2 + iVar4);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)(iVar2 + iVar4);
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            *puVar1 = 0;
          }
          iVar2 = puVar1[2];
          puVar1[1] = 0;
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[2] = 0;
          }
          iVar2 = puVar1[5];
          puVar1[3] = 0;
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[5] = 0;
          }
          iVar2 = puVar1[6];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[6] = 0;
          }
          iVar2 = puVar1[7];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[7] = 0;
          }
          iVar2 = puVar1[8];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[8] = 0;
          }
          iVar2 = puVar1[0xc];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[0xc] = 0;
          }
          iVar2 = puVar1[0xd];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[0xd] = 0;
          }
          iVar2 = puVar1[0xe];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[0xe] = 0;
          }
          iVar2 = puVar1[0xf];
          puVar1[4] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[0xf] = 0;
          }
          uVar3 = param_1[1];
          iVar2 = *param_1;
          puVar1[0x16] = 0;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x5c;
      } while (uVar5 < uVar3);
      if (iVar2 == 0) goto LAB_ram_400861f4;
    }
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    *param_1 = 0;
  }
LAB_ram_400861f4:
  iVar2 = param_1[4];
  param_1[1] = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
  }
  iVar2 = param_1[6];
  param_1[4] = 0;
  param_1[5] = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
  }
  iVar2 = param_1[8];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[8] = 0;
  }
  iVar2 = param_1[10];
  param_1[9] = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[10] = 0;
  }
  iVar2 = param_1[0xb];
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[0xb] = 0;
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}


/* NanoCore 1.12, address 0x4008628c.
 * REA evidence: ev_f69f621272a5369ef49a047d4913ece40e338d44ff7d949e9329d50ca1a40495
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4008628c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  ushort *puVar14;
  float *pfVar15;
  uint uVar16;
  code *pcVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar19 = (undefined4 *)*param_1;
  uVar8 = param_1[2];
  *param_2 = puVar19;
  if (uVar8 < 2) {
    *(undefined1 *)(param_1 + 3) = 1;
    return 0xfffffffe;
  }
  puVar14 = (ushort *)param_1[1];
  uVar2 = *puVar14;
  param_1[1] = puVar14 + 1;
  param_1[2] = uVar8 - 2;
  uVar18 = (uint)uVar2;
  if (*(char *)(param_1 + 3) != '\0') {
    return 0xfffffffe;
  }
  if (0x3c < (uVar18 - 4 & 0xffff)) {
    return 0xfffffffe;
  }
  uVar16 = (uVar18 + 5 & 0xffff) * 4;
  if (uVar8 - 2 < uVar16) {
    return 0xfffffffe;
  }
  uVar20 = *(undefined4 *)(puVar14 + 1);
  uVar8 = uVar8 - 6;
  param_1[1] = puVar14 + 3;
  param_1[2] = uVar8;
  param_2[2] = uVar20;
  iVar11 = uVar16 - 4;
  if (puVar19 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)FUN_ram_40002f1a(iVar11);
    if (puVar10 == (undefined4 *)0x0) goto LAB_ram_400865b2;
    *puVar10 = FUN_ram_4008561e;
    uVar20 = 0;
  }
  else {
    if ((code *)puVar19[1] == (code *)0x0) {
      puVar10 = (undefined4 *)FUN_ram_40002f1a(iVar11);
      if (puVar10 == (undefined4 *)0x0) goto LAB_ram_400865b2;
LAB_ram_400865ba:
      pcVar17 = FUN_ram_4008561e;
    }
    else {
      puVar10 = (undefined4 *)(*(code *)puVar19[1])(*puVar19);
      if (puVar10 == (undefined4 *)0x0) {
LAB_ram_400865b2:
        param_2[3] = 0;
        return 0xfffffffd;
      }
      uVar8 = param_1[2];
      if (puVar19[1] == 0) goto LAB_ram_400865ba;
      pcVar17 = (code *)puVar19[2];
    }
    uVar20 = *puVar19;
    *puVar10 = pcVar17;
  }
  fVar7 = DAT_ram_4009a60c;
  puVar10[1] = uVar20;
  pfVar15 = (float *)(puVar10 + 4);
  param_2[3] = pfVar15;
  *(ushort *)(param_2 + 1) = uVar2;
  uVar16 = 0;
  pfVar12 = pfVar15;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 - 4;
    if (uVar9 < 4) {
      *(undefined1 *)(param_1 + 3) = 1;
      uVar8 = uVar16 + 1 & 0xffff;
      *pfVar12 = 0.0;
      pfVar15 = pfVar15 + uVar8;
      if (uVar8 != uVar18) {
        do {
          *pfVar15 = 0.0;
          uVar8 = uVar8 + 1 & 0xffff;
          pfVar15 = pfVar15 + 1;
        } while (uVar8 < uVar18);
      }
      goto LAB_ram_400863a4;
    }
    pfVar13 = (float *)param_1[1];
    uVar16 = uVar16 + 1 & 0xffff;
    fVar3 = *pfVar13;
    param_1[1] = pfVar13 + 1;
    param_1[2] = uVar8;
    *pfVar12 = fVar3;
    if (fVar7 < ABS(fVar3)) {
      return 0xfffffffe;
    }
    pfVar12 = pfVar12 + 1;
  } while (uVar16 != uVar18);
  if (uVar8 < 4) {
LAB_ram_400863a4:
    param_2[4] = 0;
LAB_ram_400863a8:
    param_2[5] = 0;
  }
  else {
    fVar3 = pfVar13[1];
    param_1[1] = pfVar13 + 2;
    param_1[2] = uVar9 - 8;
    param_2[4] = fVar3;
    if (uVar9 - 8 < 4) goto LAB_ram_400863a8;
    fVar4 = pfVar13[2];
    param_1[1] = pfVar13 + 3;
    param_1[2] = uVar9 - 0xc;
    param_2[5] = fVar4;
    if (3 < uVar9 - 0xc) {
      fVar5 = pfVar13[3];
      param_1[1] = pfVar13 + 4;
      param_1[2] = uVar9 - 0x10;
      param_2[6] = fVar5;
      if (3 < uVar9 - 0x10) {
        fVar6 = pfVar13[4];
        cVar1 = *(char *)(param_1 + 3);
        param_1[1] = pfVar13 + 5;
        param_1[2] = uVar9 - 0x14;
        param_2[7] = fVar6;
        if (cVar1 != '\0') {
          return 0xfffffffe;
        }
        if (fVar7 < ABS((float)param_2[2])) {
          return 0xfffffffe;
        }
        if ((float)param_2[2] <= 0.0) {
          return 0xfffffffe;
        }
        if (fVar7 < ABS(fVar3)) {
          return 0xfffffffe;
        }
        if (fVar7 < ABS(fVar4)) {
          return 0xfffffffe;
        }
        if (fVar7 < ABS(fVar6)) {
          return 0xfffffffe;
        }
        if (fVar5 < 0.0) {
          return 0xfffffffe;
        }
        if (DAT_ram_4009672c <= fVar5) {
          return 0xfffffffe;
        }
        return 0;
      }
      goto LAB_ram_400863b0;
    }
  }
  param_2[6] = 0;
LAB_ram_400863b0:
  *(undefined1 *)(param_1 + 3) = 1;
  param_2[7] = 0;
  return 0xfffffffe;
}


/* NanoCore 1.12, address 0x400865d8.
 * REA evidence: ev_35ff9c0301e6c2ea3af489d931c6d69abbe9b5b1004f8c789e0191a36209f601
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_400865d8(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  code *pcVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  
  puVar21 = (undefined4 *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    puVar21 = (undefined4 *)*param_2;
  }
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar11 = *param_1;
  if (iVar11 != 0) {
    (**(code **)(iVar11 + -0x10))(*(undefined4 *)(iVar11 + -0xc),iVar11 + -0x10);
    *param_1 = 0;
  }
  param_1[7] = 0;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar19 = (uint)*(ushort *)(param_2 + 1);
  if (uVar19 < 4) {
    return 0;
  }
  pfVar20 = (float *)param_2[3];
  if (pfVar20 == (float *)0x0) {
    return 0;
  }
  iVar11 = uVar19 - 1;
  iVar18 = iVar11 * 0x10;
  if (puVar21 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)FUN_ram_40002f1a(iVar18);
    if (puVar10 == (undefined4 *)0x0) goto LAB_ram_400867da;
    pcVar17 = FUN_ram_4008561e;
    *puVar10 = FUN_ram_4008561e;
    uVar22 = 0;
    goto LAB_ram_40086662;
  }
  if ((code *)puVar21[1] == (code *)0x0) {
    puVar10 = (undefined4 *)FUN_ram_40002f1a(iVar18);
    if (puVar10 == (undefined4 *)0x0) goto LAB_ram_400867da;
LAB_ram_400867e2:
    pcVar17 = FUN_ram_4008561e;
  }
  else {
    puVar10 = (undefined4 *)(*(code *)puVar21[1])(*puVar21,iVar18);
    if (puVar10 == (undefined4 *)0x0) {
LAB_ram_400867da:
      *param_1 = 0;
      return 0xfffffffd;
    }
    pfVar20 = (float *)param_2[3];
    if (puVar21[1] == 0) goto LAB_ram_400867e2;
    pcVar17 = (code *)puVar21[2];
  }
  uVar22 = *puVar21;
  *puVar10 = pcVar17;
LAB_ram_40086662:
  fVar9 = DAT_ram_4009f66c;
  fVar7 = DAT_ram_40099f30;
  fVar26 = DAT_ram_4009675c;
  puVar6 = PTR_entry_ram_40096740;
  fVar2 = DAT_ram_4009673c;
  pfVar12 = (float *)(puVar10 + 4);
  puVar10[1] = uVar22;
  *param_1 = (int)pfVar12;
  pfVar13 = pfVar20 + (uVar19 - 3);
  pfVar14 = pfVar12;
  pfVar15 = pfVar20;
  do {
    pfVar16 = pfVar15 + 1;
    *pfVar14 = ((float)*(undefined8 *)(pfVar15 + 1) * fVar7 + (float)*(undefined8 *)pfVar15 +
               (float)*(undefined8 *)(pfVar15 + 2)) * fVar9;
    pfVar14[1] = ((float)*(undefined8 *)(pfVar15 + 2) - *pfVar15) * fVar26;
    pfVar14[2] = (-((float)*(undefined8 *)pfVar16 * (float)puVar6) + *pfVar15 +
                 (float)*(undefined8 *)(pfVar15 + 2)) * fVar26;
    pfVar14[3] = (-((float)*(undefined8 *)(pfVar15 + 2) * fVar2) +
                  ((float)*(undefined8 *)pfVar16 * fVar2 - *pfVar15) +
                 (float)*(undefined8 *)(pfVar15 + 3)) * fVar9;
    pfVar14 = pfVar14 + 4;
    pfVar15 = pfVar16;
  } while (pfVar13 != pfVar16);
  pfVar20 = pfVar20 + (uVar19 - 3);
  fVar26 = pfVar20[1];
  fVar3 = *pfVar20;
  fVar4 = pfVar20[2];
  pfVar12 = pfVar12 + iVar11 * 4 + -8;
  pfVar12[1] = 0.0;
  pfVar12[2] = 0.0;
  pfVar12[3] = 0.0;
  fVar8 = DAT_ram_4009a60c;
  fVar2 = (float)(int)(uVar19 - 3);
  *(ulonglong *)pfVar12 = (ulonglong)(uint)((fVar26 * fVar7 + fVar3 + fVar4) * fVar9);
  uVar24 = *(undefined8 *)(param_2 + 4);
  iVar18 = param_2[5];
  fVar26 = (float)*(undefined8 *)(param_2 + 2);
  uVar23 = *(undefined8 *)(param_2 + 6);
  uVar25 = *(undefined8 *)(param_2 + 7);
  *(ulonglong *)(param_1 + 3) = (ulonglong)(uint)fVar2;
  fVar2 = fVar2 / (fVar26 + fVar26);
  param_1[4] = iVar18;
  *(undefined8 *)(param_1 + 5) = uVar23;
  *(undefined8 *)(param_1 + 6) = uVar25;
  param_1[7] = 0;
  fVar26 = (fVar26 + (float)uVar24) * fVar2;
  *(ulonglong *)(param_1 + 1) = (ulonglong)(uint)fVar2;
  *(ulonglong *)(param_1 + 2) = (ulonglong)(uint)fVar26;
  if (((int)pfVar12 < 0x100 && ABS(fVar2) <= fVar8) && (ABS(fVar26) <= fVar8)) {
    puVar21 = puVar10;
    while( true ) {
      puVar5 = (undefined8 *)(puVar21 + 4);
      puVar21 = puVar21 + 1;
      bVar1 = (int)pfVar13 < 0x100;
      pfVar13 = (float *)0x0;
      if (bVar1) {
        pfVar13 = (float *)(uint)(ABS((float)*puVar5) <= fVar8);
      }
      if (pfVar13 == (float *)0x0) break;
      if (puVar21 == puVar10 + iVar11 * 4 + -4) {
        return 0;
      }
    }
  }
  (*pcVar17)(uVar22,puVar10);
  *param_1 = 0;
  param_1[7] = 0;
  return 0xfffffffe;
}


/* NanoCore 1.12, address 0x4008681a.
 * REA evidence: ev_d42d2a0208729a5fb431b3e9e47dc52f359fea87cfaef55cd7a5df0945cd3d70
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008681a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
  }
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  iVar1 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 200) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xe4);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return;
}


/* NanoCore 1.12, address 0x40086a70.
 * REA evidence: ev_a2063aacf7149934f12d4020f618aed41822e7d12d1959dc1efa7dee78f90844
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40086a70(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar6 = param_2[2];
  iVar2 = param_1[2];
  puVar8 = (undefined4 *)*param_2;
  *param_1 = param_2[1];
  param_1[1] = uVar6;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[2] = 0;
  }
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[4] = 0;
  }
  iVar2 = param_2[2];
  param_1[3] = 0;
  param_1[5] = 0;
  if (iVar2 == 0) {
    return 0;
  }
  piVar7 = (int *)param_2[1];
  piVar3 = piVar7 + iVar2 * 7;
  do {
    if (*piVar7 == 0) {
      uVar4 = (uint)*(ushort *)((int)piVar7 + 10);
      if ((uint)*(ushort *)((int)piVar7 + 10) < (uint)*(ushort *)(piVar7 + 2)) {
        uVar4 = (uint)*(ushort *)(piVar7 + 2);
      }
      if (param_3 < uVar4) {
        param_3 = uVar4;
      }
    }
    piVar7 = piVar7 + 7;
  } while (piVar3 != piVar7);
  iVar2 = param_3 * 4;
  iVar9 = iVar2 + 0x10;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)FUN_ram_40002f1a(iVar9);
    if (puVar8 == (undefined4 *)0x0) {
      param_1[2] = 0;
    }
    else {
      *puVar8 = FUN_ram_4008561e;
      puVar8[1] = 0;
      uVar6 = memset(puVar8 + 4,0,iVar2);
      param_1[2] = uVar6;
    }
    puVar1 = (undefined4 *)FUN_ram_40002f1a(iVar9);
    if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40086bec;
    *puVar1 = FUN_ram_4008561e;
    uVar6 = 0;
  }
  else {
    if ((code *)puVar8[1] == (code *)0x0) {
      puVar1 = (undefined4 *)FUN_ram_40002f1a(iVar9);
      if (puVar1 != (undefined4 *)0x0) {
        pcVar5 = FUN_ram_4008561e;
        goto LAB_ram_40086b2a;
      }
LAB_ram_40086c0a:
      param_1[2] = 0;
    }
    else {
      puVar1 = (undefined4 *)(*(code *)puVar8[1])(*puVar8,iVar9);
      if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40086c0a;
      pcVar5 = FUN_ram_4008561e;
      if (puVar8[1] != 0) {
        pcVar5 = (code *)puVar8[2];
      }
LAB_ram_40086b2a:
      uVar6 = *puVar8;
      *puVar1 = pcVar5;
      puVar1[1] = uVar6;
      uVar6 = memset(puVar1 + 4,0,iVar2);
      param_1[2] = uVar6;
    }
    if ((code *)puVar8[1] == (code *)0x0) {
      puVar1 = (undefined4 *)FUN_ram_40002f1a(iVar9);
      if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40086bec;
LAB_ram_40086c00:
      pcVar5 = FUN_ram_4008561e;
    }
    else {
      puVar1 = (undefined4 *)(*(code *)puVar8[1])(*puVar8,iVar9);
      if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40086bec;
      if (puVar8[1] == 0) goto LAB_ram_40086c00;
      pcVar5 = (code *)puVar8[2];
    }
    uVar6 = *puVar8;
    *puVar1 = pcVar5;
  }
  puVar1[1] = uVar6;
  uVar6 = memset(puVar1 + 4,0,iVar2);
  param_1[4] = uVar6;
  if (param_1[2] != 0) {
    param_1[3] = param_3;
    param_1[5] = param_3;
    return 0;
  }
LAB_ram_40086bec:
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  return 0xfffffffd;
}


/* NanoCore 1.12, address 0x40086c10.
 * REA evidence: ev_9481b4964464d008b59750d3db4c43691915ac837587e5b3204f39be09822f7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40086c10(int param_1)

{
  int iVar1;
  
  FUN_ram_400860c4(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FUN_ram_4009582a(param_1 + 0xbc,1,param_1 + 200,param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  FUN_ram_4009582a(param_1 + 0x110,1,param_1 + 0x11c,param_1 + 0x130);
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(undefined1 *)(param_1 + 0x13c) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
  }
  iVar1 = *(int *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1c8);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1d0);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1e4);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1e8);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x20c);
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x214);
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x224);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x228);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x22c);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x23c);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x240);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x244);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x264) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x268) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x688);
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined1 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x688) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x68c);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x68c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x690);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x690) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x694);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x694) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6a4);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x6a4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6a8);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x6a8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6ac);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x6ac) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x684) = 0;
  *(undefined4 *)(param_1 + 0x698) = 0;
  *(undefined4 *)(param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    *(undefined4 *)(param_1 + 0x6b0) = 0;
  }
  *(undefined4 *)(param_1 + 0x6cc) = 0;
  return;
}


/* NanoCore 1.12, address 0x40086fe8.
 * REA evidence: ev_d5c0540d55ae51b7a45f862b9b006a69b87ddcb21794438db0a0e687c5193077
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400870ce) */
/* WARNING: Removing unreachable block (ram,0x4008719a) */

undefined4 FUN_ram_40086fe8(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar6 = (undefined4 *)*param_1;
  uVar4 = param_1[2];
  *param_2 = puVar6;
  uVar10 = 0;
  if (uVar4 < 2) {
LAB_ram_40087190:
    *(undefined1 *)(param_1 + 3) = 1;
    uVar11 = 0;
LAB_ram_40087198:
    param_2[3] = 0;
    uVar4 = param_1[2];
    param_2[2] = 0;
    *(ushort *)(param_2 + 1) = uVar11;
    *(short *)((int)param_2 + 6) = (short)(uVar10 / 3);
joined_r0x400871b2:
    if (uVar4 < 2) {
LAB_ram_400870ec:
      *(undefined1 *)(param_1 + 3) = 1;
LAB_ram_400870f2:
      param_2[4] = 0;
      param_2[5] = 0;
    }
    else {
      puVar3 = (ushort *)param_1[1];
      uVar1 = *puVar3;
      param_1[1] = (int)(puVar3 + 1);
      param_1[2] = uVar4 - 2;
      if (uVar4 - 2 < 2) goto LAB_ram_400870ec;
      uVar11 = puVar3[1];
      uVar4 = uVar4 - 4;
      param_1[1] = (int)(puVar3 + 2);
      iVar8 = (uint)uVar1 * (uint)uVar11;
      param_1[2] = uVar4;
      if (iVar8 == 0) goto LAB_ram_400870f2;
      uVar10 = iVar8 * 4;
      if (0xffffffee < uVar10 - 1) {
        return 0xfffffffd;
      }
      if (puVar6 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
        *puVar2 = FUN_ram_4008561e;
        uVar7 = 0;
      }
      else {
        if ((code *)puVar6[1] == (code *)0x0) {
          puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
LAB_ram_400873da:
          pcVar5 = FUN_ram_4008561e;
        }
        else {
          puVar2 = (undefined4 *)(*(code *)puVar6[1])(*puVar6);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
          uVar4 = param_1[2];
          if (puVar6[1] == 0) goto LAB_ram_400873da;
          pcVar5 = (code *)puVar6[2];
        }
        uVar7 = *puVar6;
        *puVar2 = pcVar5;
      }
      puVar2[1] = uVar7;
      if (uVar4 < uVar10) {
        *(undefined1 *)(param_1 + 3) = 1;
        memset(puVar2 + 4,0,uVar10);
        pcVar5 = (code *)*puVar2;
        param_1[2] = 0;
        (*pcVar5)(uVar7,puVar2);
        return 0xfffffffe;
      }
      uVar7 = FUN_ram_4000303c(puVar2 + 4,param_1[1],uVar10);
      puVar6 = (undefined4 *)*param_1;
      param_1[1] = param_1[1] + uVar10;
      param_1[2] = param_1[2] + iVar8 * -4;
      param_2[4] = uVar7;
      param_2[5] = iVar8;
    }
    if ((uint)param_1[2] < 2) {
      *(undefined1 *)(param_1 + 3) = 1;
LAB_ram_400872a0:
      param_2[6] = 0;
      param_2[7] = 0;
    }
    else {
      uVar4 = param_1[2] - 2;
      uVar9 = (uint)*(ushort *)param_1[1];
      param_1[1] = (int)((ushort *)param_1[1] + 1);
      param_1[2] = uVar4;
      if (uVar9 == 0) goto LAB_ram_400872a0;
      uVar10 = uVar9 * 4;
      if (puVar6 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
        *puVar2 = FUN_ram_4008561e;
        uVar7 = 0;
      }
      else {
        if ((code *)puVar6[1] == (code *)0x0) {
          puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
LAB_ram_4008740a:
          pcVar5 = FUN_ram_4008561e;
        }
        else {
          puVar2 = (undefined4 *)(*(code *)puVar6[1])(*puVar6);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
          uVar4 = param_1[2];
          if (puVar6[1] == 0) goto LAB_ram_4008740a;
          pcVar5 = (code *)puVar6[2];
        }
        uVar7 = *puVar6;
        *puVar2 = pcVar5;
      }
      puVar2[1] = uVar7;
      puVar6 = puVar2 + 4;
      if (uVar4 < uVar10) goto LAB_ram_40087346;
      uVar7 = FUN_ram_4000303c(puVar6,param_1[1],uVar10);
      puVar6 = (undefined4 *)*param_1;
      param_1[1] = param_1[1] + uVar10;
      param_1[2] = param_1[2] + uVar9 * -4;
      param_2[6] = uVar7;
      param_2[7] = uVar9;
    }
    if ((uint)param_1[2] < 2) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
    else {
      uVar4 = param_1[2] - 2;
      uVar9 = (uint)*(ushort *)param_1[1];
      param_1[1] = (int)((ushort *)param_1[1] + 1);
      param_1[2] = uVar4;
      if (uVar9 != 0) {
        uVar10 = uVar9 * 4;
        if (puVar6 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
          *puVar2 = FUN_ram_4008561e;
          uVar7 = 0;
        }
        else {
          if ((code *)puVar6[1] == (code *)0x0) {
            puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
            if (puVar2 == (undefined4 *)0x0) {
              return 0xfffffffd;
            }
LAB_ram_4008743a:
            pcVar5 = FUN_ram_4008561e;
          }
          else {
            puVar2 = (undefined4 *)(*(code *)puVar6[1])(*puVar6);
            if (puVar2 == (undefined4 *)0x0) {
              return 0xfffffffd;
            }
            uVar4 = param_1[2];
            if (puVar6[1] == 0) goto LAB_ram_4008743a;
            pcVar5 = (code *)puVar6[2];
          }
          uVar7 = *puVar6;
          *puVar2 = pcVar5;
        }
        puVar2[1] = uVar7;
        puVar6 = puVar2 + 4;
        if (uVar10 <= uVar4) {
          uVar7 = FUN_ram_4000303c(puVar6,param_1[1],uVar10);
          param_1[1] = param_1[1] + uVar10;
          param_1[2] = param_1[2] + uVar9 * -4;
          param_2[8] = uVar7;
          param_2[9] = uVar9;
          return 0;
        }
        goto LAB_ram_40087346;
      }
    }
    param_2[8] = 0;
    param_2[9] = 0;
    uVar7 = 0;
  }
  else {
    puVar3 = (ushort *)param_1[1];
    uVar1 = *puVar3;
    param_1[1] = (int)(puVar3 + 1);
    param_1[2] = uVar4 - 2;
    uVar10 = (uint)uVar1;
    if (uVar4 - 2 < 2) goto LAB_ram_40087190;
    uVar11 = puVar3[1];
    uVar4 = uVar4 - 4;
    param_1[1] = (int)(puVar3 + 2);
    iVar8 = uVar10 * uVar11;
    param_1[2] = uVar4;
    if (iVar8 == 0) goto LAB_ram_40087198;
    uVar10 = iVar8 * 4;
    if (0xffffffee < uVar10 - 1) {
      return 0xfffffffd;
    }
    if (puVar6 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
      if (puVar2 == (undefined4 *)0x0) {
        return 0xfffffffd;
      }
      *puVar2 = FUN_ram_4008561e;
      uVar7 = 0;
    }
    else {
      if ((code *)puVar6[1] == (code *)0x0) {
        puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
LAB_ram_4008733c:
        pcVar5 = FUN_ram_4008561e;
      }
      else {
        puVar2 = (undefined4 *)(*(code *)puVar6[1])(*puVar6);
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
        uVar4 = param_1[2];
        if (puVar6[1] == 0) goto LAB_ram_4008733c;
        pcVar5 = (code *)puVar6[2];
      }
      uVar7 = *puVar6;
      *puVar2 = pcVar5;
    }
    puVar2[1] = uVar7;
    puVar6 = puVar2 + 4;
    if (uVar10 <= uVar4) {
      uVar7 = FUN_ram_4000303c(puVar6,param_1[1],uVar10);
      puVar6 = (undefined4 *)*param_1;
      param_1[2] = param_1[2] + iVar8 * -4;
      param_1[1] = param_1[1] + uVar10;
      param_2[3] = iVar8;
      uVar4 = param_1[2];
      param_2[2] = uVar7;
      *(ushort *)(param_2 + 1) = uVar11;
      *(ushort *)((int)param_2 + 6) = uVar1 / 3;
      goto joined_r0x400871b2;
    }
LAB_ram_40087346:
    *(undefined1 *)(param_1 + 3) = 1;
    memset(puVar6,0,uVar10);
    pcVar5 = (code *)*puVar2;
    param_1[2] = 0;
    (*pcVar5)(uVar7,puVar2);
    uVar7 = 0xfffffffe;
  }
  return uVar7;
}


