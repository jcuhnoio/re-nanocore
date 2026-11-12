/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40087000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40087444.
 * REA evidence: ev_182c1daff3c3944bff24290f4a8f3738d8095fe28658939b7d90ece594a141ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
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


/* NanoCore 1.12, address 0x40087bc0.
 * REA evidence: ev_3ce0908a5b632b3e85538ffe4f0830f569e72c5f24466140fb75dfbed4ea2340
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40087bc0(int *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  code *pcVar13;
  uint *puVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  
  puVar3 = (undefined4 *)*param_1;
  uVar12 = param_1[2];
  *param_2 = (int)puVar3;
  if (uVar12 < 2) {
    *(undefined1 *)(param_1 + 3) = 1;
LAB_ram_40087ca4:
    param_2[1] = 0;
    param_2[2] = 0;
    return 0;
  }
  uVar18 = (uint)*(ushort *)param_1[1];
  param_1[1] = (int)((ushort *)param_1[1] + 1);
  param_1[2] = uVar12 - 2;
  if (uVar18 == 0) goto LAB_ram_40087ca4;
  iVar8 = uVar18 * 0x1c + 0x10;
  if (puVar3 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_ram_40002f1a(iVar8);
    if (puVar5 == (undefined4 *)0x0) {
      return 0xfffffffd;
    }
    *puVar5 = FUN_ram_4008561e;
    uVar4 = 0;
    goto LAB_ram_40087c3a;
  }
  if ((code *)puVar3[1] == (code *)0x0) {
    puVar5 = (undefined4 *)FUN_ram_40002f1a(iVar8);
    if (puVar5 == (undefined4 *)0x0) {
      return 0xfffffffd;
    }
LAB_ram_40087cda:
    pcVar13 = FUN_ram_4008561e;
  }
  else {
    puVar5 = (undefined4 *)(*(code *)puVar3[1])(*puVar3);
    if (puVar5 == (undefined4 *)0x0) {
      return 0xfffffffd;
    }
    if (puVar3[1] == 0) goto LAB_ram_40087cda;
    pcVar13 = (code *)puVar3[2];
  }
  uVar4 = *puVar3;
  *puVar5 = pcVar13;
LAB_ram_40087c3a:
  puVar16 = puVar5 + 4;
  puVar5[1] = uVar4;
  memset(puVar16,0,uVar18 * 0x1c);
  uVar12 = 0;
  puVar14 = puVar16;
  do {
    iVar8 = param_1[2];
    if (iVar8 == 0) {
      puVar3 = (undefined4 *)*param_1;
      *puVar14 = 0;
      *(undefined2 *)(puVar14 + 2) = 0;
      goto LAB_ram_40087cf0;
    }
    pbVar11 = (byte *)param_1[1];
    uVar9 = iVar8 - 1;
    uVar10 = (uint)*pbVar11;
    param_1[2] = uVar9;
    param_1[1] = (int)(pbVar11 + 1);
    *puVar14 = uVar10;
    if (uVar10 == 0) {
      puVar3 = (undefined4 *)*param_1;
      if (1 < uVar9) {
        uVar1 = *(ushort *)(pbVar11 + 1);
        param_1[1] = (int)(pbVar11 + 3);
        param_1[2] = iVar8 - 3U;
        *(ushort *)(puVar14 + 2) = uVar1;
        if (iVar8 - 3U < 2) goto LAB_ram_40087cf0;
        uVar9 = iVar8 - 5;
        uVar2 = *(ushort *)param_1[1];
        param_1[1] = (int)((ushort *)param_1[1] + 1);
        param_1[2] = uVar9;
        uVar10 = (uint)uVar1 * (uint)uVar2;
        *(ushort *)((int)puVar14 + 10) = uVar2;
        if (uVar10 == 0) goto LAB_ram_40087cf8;
        uVar17 = uVar10 * 4;
        if (uVar17 - 1 < 0xffffffef) {
          if (puVar3 != (undefined4 *)0x0) {
            if ((code *)puVar3[1] == (code *)0x0) {
              puVar6 = (undefined4 *)FUN_ram_40002f1a(uVar17 + 0x10);
              if (puVar6 != (undefined4 *)0x0) {
                pcVar13 = FUN_ram_4008561e;
                goto LAB_ram_40087e12;
              }
            }
            else {
              puVar6 = (undefined4 *)(*(code *)puVar3[1])(*puVar3);
              if (puVar6 != (undefined4 *)0x0) {
                uVar9 = param_1[2];
                if (puVar3[1] == 0) {
                  pcVar13 = FUN_ram_4008561e;
                }
                else {
                  pcVar13 = (code *)puVar3[2];
                }
LAB_ram_40087e12:
                uVar4 = *puVar3;
                *puVar6 = pcVar13;
                goto LAB_ram_40087e18;
              }
            }
            goto LAB_ram_40087f74;
          }
          puVar6 = (undefined4 *)FUN_ram_40002f1a(uVar17 + 0x10);
          if (puVar6 == (undefined4 *)0x0) goto LAB_ram_40087f74;
          *puVar6 = FUN_ram_4008561e;
          uVar4 = 0;
LAB_ram_40087e18:
          puVar6[1] = uVar4;
          if (uVar9 < uVar17) {
            *(undefined1 *)(param_1 + 3) = 1;
            memset(puVar6 + 4,0,uVar17);
            uVar15 = 0xfffffffe;
            pcVar13 = (code *)*puVar6;
            param_1[2] = 0;
            (*pcVar13)(uVar4,puVar6);
            goto LAB_ram_40087ea2;
          }
          uVar7 = FUN_ram_4000303c(puVar6 + 4,param_1[1],uVar17);
          param_1[2] = param_1[2] + uVar10 * -4;
          param_1[1] = param_1[1] + uVar17;
          puVar14[4] = uVar10;
          uVar9 = param_1[2];
          puVar14[3] = uVar7;
          goto joined_r0x40087e46;
        }
LAB_ram_40087f74:
        uVar15 = 0xfffffffd;
LAB_ram_40087ea2:
        uVar9 = DAT_ram_4009f290;
        uVar18 = 0;
        do {
          if (puVar16[uVar18 * 7] == 0) {
            uVar10 = puVar16[uVar18 * 7 + 3];
            if (uVar10 != 0) {
              (**(code **)(uVar10 - 0x10))(*(undefined4 *)(uVar10 - 0xc),uVar10 - 0x10);
              puVar16[uVar18 * 7 + 3] = 0;
            }
            uVar10 = puVar16[uVar18 * 7 + 5];
            puVar16[uVar18 * 7 + 4] = 0;
            if (uVar10 != 0) {
              (**(code **)(uVar10 - 0x10))(*(undefined4 *)(uVar10 - 0xc),uVar10 - 0x10);
              puVar16[uVar18 * 7 + 5] = 0;
            }
            puVar16[uVar18 * 7 + 6] = 0;
            puVar16[uVar18 * 7 + 2] = uVar9;
          }
          uVar18 = uVar18 + 1 & 0xffff;
        } while (uVar18 <= uVar12);
        (*(code *)*puVar5)(puVar5[1],puVar5);
        return uVar15;
      }
      *(undefined2 *)(puVar14 + 2) = 0;
LAB_ram_40087cf0:
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined2 *)((int)puVar14 + 10) = 0;
LAB_ram_40087cf8:
      puVar14[4] = 0;
      uVar9 = param_1[2];
      puVar14[3] = 0;
joined_r0x40087e46:
      if (uVar9 < 2) {
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        uVar9 = uVar9 - 2;
        uVar10 = (uint)*(ushort *)param_1[1];
        param_1[1] = (int)((ushort *)param_1[1] + 1);
        param_1[2] = uVar9;
        if (uVar10 != 0) {
          uVar17 = uVar10 * 4;
          if (puVar3 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_ram_40002f1a(uVar17 + 0x10);
            if (puVar6 == (undefined4 *)0x0) goto LAB_ram_40087f2a;
            *puVar6 = FUN_ram_4008561e;
            uVar4 = 0;
          }
          else {
            if ((code *)puVar3[1] == (code *)0x0) {
              puVar6 = (undefined4 *)FUN_ram_40002f1a(uVar17 + 0x10);
              if (puVar6 == (undefined4 *)0x0) goto LAB_ram_40087f2a;
              pcVar13 = FUN_ram_4008561e;
            }
            else {
              puVar6 = (undefined4 *)(*(code *)puVar3[1])(*puVar3);
              if (puVar6 == (undefined4 *)0x0) {
LAB_ram_40087f2a:
                uVar18 = puVar14[3];
                puVar14[5] = 0;
                if (uVar18 == 0) {
                  puVar14[4] = 0;
                }
                else {
                  (**(code **)(uVar18 - 0x10))(*(undefined4 *)(uVar18 - 0xc),uVar18 - 0x10);
                  uVar18 = puVar14[5];
                  puVar14[3] = 0;
                  puVar14[4] = 0;
                  if (uVar18 != 0) {
                    (**(code **)(uVar18 - 0x10))(*(undefined4 *)(uVar18 - 0xc),uVar18 - 0x10);
                    puVar14[5] = 0;
                  }
                }
                uVar18 = DAT_ram_4009f290;
                puVar14[6] = 0;
                puVar14[2] = uVar18;
                goto LAB_ram_40087f74;
              }
              uVar9 = param_1[2];
              if (puVar3[1] == 0) {
                pcVar13 = FUN_ram_4008561e;
              }
              else {
                pcVar13 = (code *)puVar3[2];
              }
            }
            uVar4 = *puVar3;
            *puVar6 = pcVar13;
          }
          puVar6[1] = uVar4;
          puVar6 = puVar6 + 4;
          puVar14[5] = (uint)puVar6;
          puVar14[6] = uVar10;
          if (uVar9 < uVar17) {
            *(undefined1 *)(param_1 + 3) = 1;
            memset(puVar6,0,uVar17);
            uVar18 = puVar14[3];
            param_1[2] = 0;
            if (uVar18 != 0) {
              (**(code **)(uVar18 - 0x10))(*(undefined4 *)(uVar18 - 0xc),uVar18 - 0x10);
              puVar14[3] = 0;
            }
            uVar18 = puVar14[5];
            puVar14[4] = 0;
            if (uVar18 != 0) {
              (**(code **)(uVar18 - 0x10))(*(undefined4 *)(uVar18 - 0xc),uVar18 - 0x10);
              puVar14[5] = 0;
            }
            uVar18 = DAT_ram_4009f290;
            puVar14[6] = 0;
            puVar14[2] = uVar18;
            uVar15 = 0xfffffffe;
            goto LAB_ram_40087ea2;
          }
          FUN_ram_4000303c(puVar6,param_1[1],uVar17);
          param_1[1] = param_1[1] + uVar17;
          param_1[2] = param_1[2] + uVar10 * -4;
        }
      }
    }
    else if (uVar10 == 1) {
      if (uVar9 < 4) {
        uVar9 = 0;
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        uVar9 = *(uint *)(pbVar11 + 1);
        param_1[1] = (int)(pbVar11 + 5);
        param_1[2] = iVar8 + -5;
      }
      puVar14[1] = uVar9;
    }
    uVar12 = uVar12 + 1 & 0xffff;
    puVar14 = puVar14 + 7;
    if (uVar12 == uVar18) {
      param_2[1] = (int)puVar16;
      param_2[2] = uVar12;
      return 0;
    }
  } while( true );
}


