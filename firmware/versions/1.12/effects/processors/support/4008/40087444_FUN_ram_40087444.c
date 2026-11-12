/* NanoCore 1.12: FUN_ram_40087444 at 0x40087444.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_efe035bde737791a27511cc8c7c3c485451dd65adce09345cd9f73288f0b22ca
 * Source: analysis/rea-1.12-effects/results/03631-export-0x40087444.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_40087444(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  code *pcVar15;
  byte *pbVar16;
  ushort *puVar17;
  float *pfVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uStack_30;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar20 = (undefined4 *)*param_1;
  if ((uint)param_1[2] < 2) {
    *(undefined1 *)(param_1 + 3) = 1;
LAB_ram_4008762e:
    param_2[1] = 0;
    uVar23 = param_1[2];
    *param_2 = 0;
    if (uVar23 < 2) goto LAB_ram_400875fa;
LAB_ram_4008763e:
    uVar24 = (uint)*(ushort *)param_1[1];
    param_1[1] = (ushort *)param_1[1] + 1;
    param_1[2] = uVar23 - 2;
    if (uVar24 == 0) goto LAB_ram_400875fe;
    iVar12 = uVar24 * 0x18 + 0x10;
    if (puVar20 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)FUN_ram_40002f1a(iVar12);
      if (puVar9 == (undefined4 *)0x0) {
        return 0xfffffffd;
      }
      *puVar9 = FUN_ram_4008561e;
      uVar21 = 0;
    }
    else {
      if ((code *)puVar20[1] == (code *)0x0) {
        puVar9 = (undefined4 *)FUN_ram_40002f1a(iVar12);
        if (puVar9 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
LAB_ram_40087a08:
        pcVar15 = FUN_ram_4008561e;
      }
      else {
        puVar9 = (undefined4 *)(*(code *)puVar20[1])(*puVar20);
        if (puVar9 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
        if (puVar20[1] == 0) goto LAB_ram_40087a08;
        pcVar15 = (code *)puVar20[2];
      }
      uVar21 = *puVar20;
      *puVar9 = pcVar15;
    }
    puVar9[1] = uVar21;
    puVar10 = (undefined4 *)memset(puVar9 + 4,0,uVar24 * 0x18);
    puVar20 = (undefined4 *)*param_1;
    uVar23 = param_1[2];
    puVar14 = puVar10;
LAB_ram_400876cc:
    do {
      *puVar14 = puVar20;
      if (uVar23 == 0) {
        puVar14[1] = 0;
        puVar14[2] = 0;
        uVar19 = uVar23;
LAB_ram_40087810:
        puVar14[3] = 0;
LAB_ram_40087814:
        puVar14[4] = 0;
      }
      else {
        pbVar16 = (byte *)param_1[1];
        uVar19 = uVar23 - 1;
        bVar2 = *pbVar16;
        param_1[2] = uVar19;
        param_1[1] = pbVar16 + 1;
        puVar14[1] = (uint)bVar2;
        if (uVar19 < 4) {
          puVar14[2] = 0;
          goto LAB_ram_40087810;
        }
        uVar21 = *(undefined4 *)(pbVar16 + 1);
        uVar19 = uVar23 - 5;
        param_1[1] = pbVar16 + 5;
        param_1[2] = uVar19;
        *(ulonglong *)(puVar14 + 2) = CONCAT44(uStack_30,uVar21);
        if (uVar19 < 4) {
          puVar14[3] = 0;
          goto LAB_ram_40087814;
        }
        uVar21 = *(undefined4 *)(pbVar16 + 5);
        uVar19 = uVar23 - 9;
        param_1[1] = pbVar16 + 9;
        param_1[2] = uVar19;
        *(ulonglong *)(puVar14 + 3) = CONCAT44(uStack_30,uVar21);
        if (uVar19 < 4) goto LAB_ram_40087814;
        uVar21 = *(undefined4 *)(pbVar16 + 9);
        uVar19 = uVar23 - 0xd;
        param_1[1] = pbVar16 + 0xd;
        param_1[2] = uVar19;
        *(ulonglong *)(puVar14 + 4) = CONCAT44(uStack_30,uVar21);
        if (3 < uVar19) {
          uVar21 = *(undefined4 *)(pbVar16 + 0xd);
          param_1[1] = pbVar16 + 0x11;
          param_1[2] = uVar23 - 0x11;
          *(ulonglong *)(puVar14 + 5) = CONCAT44(uStack_30,uVar21);
          puVar14 = puVar14 + 6;
          uVar23 = uVar23 - 0x11;
          if (puVar14 == puVar9 + (uVar24 - 1 & 0xffff) * 6 + 10) break;
          goto LAB_ram_400876cc;
        }
      }
      *(undefined1 *)(param_1 + 3) = 1;
      puVar14[5] = 0;
      puVar14 = puVar14 + 6;
      uVar23 = uVar19;
    } while (puVar9 + (uVar24 - 1 & 0xffff) * 6 + 10 != puVar14);
    param_2[2] = puVar10;
    param_2[3] = uVar24;
  }
  else {
    uVar23 = (uint)*(ushort *)param_1[1];
    param_1[1] = (ushort *)param_1[1] + 1;
    param_1[2] = param_1[2] - 2;
    if (uVar23 == 0) goto LAB_ram_4008762e;
    iVar12 = uVar23 * 0x18 + 0x10;
    if (puVar20 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)FUN_ram_40002f1a(iVar12);
      if (puVar9 == (undefined4 *)0x0) {
        return 0xfffffffd;
      }
      *puVar9 = FUN_ram_4008561e;
      uVar21 = 0;
    }
    else {
      if ((code *)puVar20[1] == (code *)0x0) {
        puVar9 = (undefined4 *)FUN_ram_40002f1a(iVar12);
        if (puVar9 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
LAB_ram_400877ce:
        pcVar15 = FUN_ram_4008561e;
      }
      else {
        puVar9 = (undefined4 *)(*(code *)puVar20[1])(*puVar20);
        if (puVar9 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
        if (puVar20[1] == 0) goto LAB_ram_400877ce;
        pcVar15 = (code *)puVar20[2];
      }
      uVar21 = *puVar20;
      *puVar9 = pcVar15;
    }
    puVar9[1] = uVar21;
    puVar10 = (undefined4 *)memset(puVar9 + 4,0,uVar23 * 0x18);
    puVar20 = (undefined4 *)*param_1;
    uVar24 = param_1[2];
    puVar14 = puVar10;
LAB_ram_400874fc:
    do {
      *puVar14 = puVar20;
      if (uVar24 == 0) {
        puVar14[1] = 0;
        puVar14[2] = 0;
        uVar19 = uVar24;
LAB_ram_400877e0:
        puVar14[3] = 0;
LAB_ram_400877e4:
        puVar14[4] = 0;
      }
      else {
        pbVar16 = (byte *)param_1[1];
        uVar19 = uVar24 - 1;
        bVar2 = *pbVar16;
        param_1[2] = uVar19;
        param_1[1] = pbVar16 + 1;
        puVar14[1] = (uint)bVar2;
        if (uVar19 < 4) {
          puVar14[2] = 0;
          goto LAB_ram_400877e0;
        }
        uVar21 = *(undefined4 *)(pbVar16 + 1);
        uVar19 = uVar24 - 5;
        param_1[1] = pbVar16 + 5;
        param_1[2] = uVar19;
        *(ulonglong *)(puVar14 + 2) = CONCAT44(uStack_30,uVar21);
        if (uVar19 < 4) {
          puVar14[3] = 0;
          goto LAB_ram_400877e4;
        }
        uVar21 = *(undefined4 *)(pbVar16 + 5);
        uVar19 = uVar24 - 9;
        param_1[1] = pbVar16 + 9;
        param_1[2] = uVar19;
        *(ulonglong *)(puVar14 + 3) = CONCAT44(uStack_30,uVar21);
        if (uVar19 < 4) goto LAB_ram_400877e4;
        uVar21 = *(undefined4 *)(pbVar16 + 9);
        uVar19 = uVar24 - 0xd;
        param_1[1] = pbVar16 + 0xd;
        param_1[2] = uVar19;
        *(ulonglong *)(puVar14 + 4) = CONCAT44(uStack_30,uVar21);
        if (3 < uVar19) {
          uVar21 = *(undefined4 *)(pbVar16 + 0xd);
          param_1[1] = pbVar16 + 0x11;
          param_1[2] = uVar24 - 0x11;
          *(ulonglong *)(puVar14 + 5) = CONCAT44(uStack_30,uVar21);
          puVar14 = puVar14 + 6;
          uVar24 = uVar24 - 0x11;
          if (puVar9 + (uVar23 - 1 & 0xffff) * 6 + 10 == puVar14) {
            *param_2 = puVar10;
            param_2[1] = uVar23;
            goto LAB_ram_400875f2;
          }
          goto LAB_ram_400874fc;
        }
      }
      *(undefined1 *)(param_1 + 3) = 1;
      puVar14[5] = 0;
      puVar14 = puVar14 + 6;
      uVar24 = uVar19;
    } while (puVar14 != puVar9 + (uVar23 - 1 & 0xffff) * 6 + 10);
    *param_2 = puVar10;
    param_2[1] = uVar23;
LAB_ram_400875f2:
    uVar23 = param_1[2];
    if (1 < uVar23) goto LAB_ram_4008763e;
LAB_ram_400875fa:
    *(undefined1 *)(param_1 + 3) = 1;
LAB_ram_400875fe:
    param_2[2] = 0;
    param_2[3] = 0;
  }
  if (param_3 < 5) {
    uVar21 = FUN_ram_40086fe8(param_1,param_2 + 4);
    return uVar21;
  }
  uVar23 = param_1[2];
  param_2[0xe] = puVar20;
  if (uVar23 < 2) {
    *(undefined1 *)(param_1 + 3) = 1;
    return 0xfffffffe;
  }
  puVar17 = (ushort *)param_1[1];
  uVar3 = *puVar17;
  param_1[1] = puVar17 + 1;
  param_1[2] = uVar23 - 2;
  uVar24 = (uint)uVar3;
  if (*(char *)(param_1 + 3) != '\0') {
    return 0xfffffffe;
  }
  if (0x3c < (uVar24 - 4 & 0xffff)) {
    return 0xfffffffe;
  }
  uVar19 = (uVar24 + 5 & 0xffff) * 4;
  if (uVar23 - 2 < uVar19) {
    return 0xfffffffe;
  }
  uVar21 = *(undefined4 *)(puVar17 + 1);
  uVar23 = uVar23 - 6;
  param_1[1] = puVar17 + 3;
  param_1[2] = uVar23;
  param_2[0x10] = uVar21;
  iVar12 = uVar19 - 4;
  if (puVar20 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)FUN_ram_40002f1a(iVar12);
    if (puVar9 == (undefined4 *)0x0) goto LAB_ram_400879aa;
    *puVar9 = FUN_ram_4008561e;
    uVar21 = 0;
  }
  else {
    if ((code *)puVar20[1] == (code *)0x0) {
      puVar9 = (undefined4 *)FUN_ram_40002f1a(iVar12);
      if (puVar9 == (undefined4 *)0x0) goto LAB_ram_400879aa;
LAB_ram_40087b7c:
      pcVar15 = FUN_ram_4008561e;
    }
    else {
      puVar9 = (undefined4 *)(*(code *)puVar20[1])(*puVar20);
      if (puVar9 == (undefined4 *)0x0) {
LAB_ram_400879aa:
        param_2[0x11] = 0;
        return 0xfffffffd;
      }
      uVar23 = param_1[2];
      if (puVar20[1] == 0) goto LAB_ram_40087b7c;
      pcVar15 = (code *)puVar20[2];
    }
    uVar21 = *puVar20;
    *puVar9 = pcVar15;
  }
  fVar8 = DAT_ram_4009a60c;
  puVar9[1] = uVar21;
  pfVar11 = (float *)(puVar9 + 4);
  param_2[0x11] = pfVar11;
  *(ushort *)(param_2 + 0xf) = uVar3;
  uVar19 = 0;
  pfVar13 = pfVar11;
  do {
    uVar22 = uVar23;
    uVar23 = uVar22 - 4;
    if (uVar22 < 4) {
      *(undefined1 *)(param_1 + 3) = 1;
      *pfVar13 = 0.0;
      uVar23 = uVar19 + 1 & 0xffff;
      pfVar11 = pfVar11 + uVar23;
      if (uVar24 != uVar23) {
        do {
          *pfVar11 = 0.0;
          uVar23 = uVar23 + 1 & 0xffff;
          pfVar11 = pfVar11 + 1;
        } while (uVar23 < uVar24);
      }
      goto LAB_ram_40087952;
    }
    pfVar18 = (float *)param_1[1];
    uVar19 = uVar19 + 1 & 0xffff;
    fVar4 = *pfVar18;
    param_1[1] = pfVar18 + 1;
    param_1[2] = uVar23;
    *pfVar13 = fVar4;
    if (fVar8 < ABS(fVar4)) {
      return 0xfffffffe;
    }
    pfVar13 = pfVar13 + 1;
  } while (uVar24 != uVar19);
  if (uVar23 < 4) {
LAB_ram_40087952:
    param_2[0x12] = 0;
LAB_ram_40087956:
    param_2[0x13] = 0;
  }
  else {
    fVar4 = pfVar18[1];
    param_1[1] = pfVar18 + 2;
    param_1[2] = uVar22 - 8;
    param_2[0x12] = fVar4;
    if (uVar22 - 8 < 4) goto LAB_ram_40087956;
    fVar5 = pfVar18[2];
    param_1[1] = pfVar18 + 3;
    param_1[2] = uVar22 - 0xc;
    param_2[0x13] = fVar5;
    if (3 < uVar22 - 0xc) {
      fVar6 = pfVar18[3];
      param_1[1] = pfVar18 + 4;
      param_1[2] = uVar22 - 0x10;
      param_2[0x14] = fVar6;
      if (3 < uVar22 - 0x10) {
        fVar7 = pfVar18[4];
        cVar1 = *(char *)(param_1 + 3);
        param_1[1] = pfVar18 + 5;
        param_1[2] = uVar22 - 0x14;
        param_2[0x15] = fVar7;
        if (cVar1 != '\0') {
          return 0xfffffffe;
        }
        if (0xff < (int)(pfVar18 + 5) || fVar8 < ABS((float)param_2[0x10])) {
          return 0xfffffffe;
        }
        if ((float)param_2[0x10] <= 0.0) {
          return 0xfffffffe;
        }
        if (fVar8 < ABS(fVar4)) {
          return 0xfffffffe;
        }
        if (fVar8 < ABS(fVar5)) {
          return 0xfffffffe;
        }
        if (fVar8 < ABS(fVar7)) {
          return 0xfffffffe;
        }
        if (fVar6 < 0.0) {
          return 0xfffffffe;
        }
        if (DAT_ram_4009672c <= fVar6) {
          return 0xfffffffe;
        }
        return 0;
      }
      goto LAB_ram_4008795e;
    }
  }
  param_2[0x14] = 0;
LAB_ram_4008795e:
  *(undefined1 *)(param_1 + 3) = 1;
  param_2[0x15] = 0;
  return 0xfffffffe;
}

