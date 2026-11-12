/* NanoCore 1.12: FUN_ram_40002050 at 0x40002050.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_1bb3349f9bec0f38e6c992cee450ebec2ee5fc2f251e94921ea52a9522dc6371
 * Source: analysis/rea-1.12-effects/results/01054-export-0x40002050.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint FUN_ram_40002050(undefined8 *param_1,ulonglong *param_2,int param_3,int param_4,int param_5,
                     int param_6)

{
  bool bVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  ulonglong *puVar14;
  int iVar15;
  undefined8 *puVar16;
  uint *puVar17;
  ulonglong *puVar18;
  float *pfVar19;
  uint uVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint auStack_1c8 [21];
  undefined1 auStack_174 [4];
  ulonglong local_170 [9];
  float afStack_124 [2];
  undefined8 local_11c;
  undefined1 auStack_d4 [92];
  
  fVar6 = DAT_ram_400a449c;
  fVar5 = DAT_ram_400a09b8;
  fVar4 = DAT_ram_4009f95c;
  fVar3 = DAT_ram_40096764;
  fVar31 = (float)DAT_ram_4009675c;
  fVar29 = DAT_ram_4009672c;
  auStack_1c8[1] = param_3;
  iVar25 = *(int *)(&DAT_ram_40095da4 + param_5 * 4);
  iVar26 = param_4 + -1;
  if (param_3 < -4) {
    auStack_1c8[0] = 8;
    iVar23 = 0;
  }
  else {
    iVar23 = (int)((param_3 + -3 >> 0x1f & 7U) + param_3 + -3) >> 3;
    auStack_1c8[0] = (iVar23 + 1) * 8;
  }
  iVar15 = iVar23 - iVar26;
  param_3 = param_3 - auStack_1c8[0];
  iVar8 = iVar25 + iVar26 + 1 + iVar15;
  puVar10 = local_170;
  if (-1 < iVar25 + iVar26) {
    do {
      uVar33 = 0;
      if (-1 < iVar15) {
        uVar33 = (ulonglong)(uint)(float)*(int *)(param_6 + iVar15 * 4);
      }
      iVar15 = iVar15 + 1;
      *puVar10 = uVar33;
      puVar10 = (ulonglong *)((int)puVar10 + 4);
    } while (iVar15 != iVar8);
  }
  if (-1 < iVar25) {
    pfVar21 = (float *)(auStack_d4 + 4);
    puVar7 = (undefined8 *)((int)local_170 + iVar26 * 4);
    iVar8 = iVar26;
    do {
      fVar27 = 0.0;
      puVar11 = puVar7;
      puVar16 = param_1;
      if (-1 < iVar26) {
        do {
          uVar30 = *puVar16;
          uVar32 = *puVar11;
          puVar16 = (undefined8 *)((int)puVar16 + 4);
          puVar11 = (undefined8 *)((int)puVar11 + -4);
          fVar27 = (float)uVar30 * (float)uVar32 + fVar27;
        } while (puVar16 != (undefined8 *)(iVar26 * 4 + 4 + (int)param_1));
      }
      *pfVar21 = fVar27;
      iVar8 = iVar8 + 1;
      pfVar21 = pfVar21 + 1;
      puVar7 = (undefined8 *)((int)puVar7 + 4);
    } while (iVar8 != iVar25 + param_4);
  }
  puVar10 = (ulonglong *)(auStack_d4 + 4);
  iVar8 = iVar25;
  do {
    uVar33 = *(ulonglong *)((int)puVar10 + iVar8 * 4);
    if (0 < iVar8) {
      puVar17 = auStack_1c8 + 2;
      puVar9 = (ulonglong *)(auStack_d4 + iVar8 * 4);
      do {
        fVar28 = (float)uVar33;
        fVar27 = (float)(int)(fVar28 * fVar5);
        uVar33 = (ulonglong)(uint)(fVar27 + (float)*puVar9);
        *puVar17 = (int)(-(fVar27 * fVar6) + fVar28);
        bVar1 = puVar10 != puVar9;
        puVar17 = puVar17 + 1;
        puVar9 = (ulonglong *)((int)puVar9 + -4);
      } while (bVar1);
    }
    fVar27 = (float)FUN_ram_40002d78(param_3);
    fVar28 = (float)FUN_ram_4000078c(fVar27 * fVar4);
    fVar27 = -(fVar28 * fVar3) + fVar27;
    uVar24 = (uint)fVar27;
    fVar27 = fVar27 - (float)(int)uVar24;
    if (param_3 < 1) {
      if (param_3 == 0) {
        iVar15 = (int)auStack_1c8[iVar8 + 1] >> 8;
        goto joined_r0x400022ea;
      }
      iVar12 = 0;
      if (fVar31 <= fVar27) {
        uVar24 = uVar24 + 1;
        iVar15 = 2;
        iVar12 = 2;
        if (iVar8 < 1) {
          fVar27 = fVar29 - fVar27;
          goto joined_r0x4000239c;
        }
        goto LAB_ram_400022f4;
      }
    }
    else {
      iVar12 = (int)auStack_1c8[iVar8 + 1] >> (8U - param_3 & 0x1f);
      uVar20 = auStack_1c8[iVar8 + 1] - (iVar12 << (8U - param_3 & 0x1f));
      auStack_1c8[iVar8 + 1] = uVar20;
      iVar15 = (int)uVar20 >> (7U - param_3 & 0x1f);
      uVar24 = uVar24 + iVar12;
joined_r0x400022ea:
      iVar12 = iVar15;
      if (0 < iVar15) {
        uVar24 = uVar24 + 1;
        if (iVar8 < 1) {
          bVar1 = false;
        }
        else {
LAB_ram_400022f4:
          if (auStack_1c8[2] == 0) {
            bVar1 = false;
            if (iVar8 == 1) goto LAB_ram_40002354;
            iVar13 = 1;
            iVar12 = 2;
            uVar20 = auStack_1c8[3];
            while (uVar20 == 0) {
              bVar1 = false;
              if (iVar8 == iVar12) goto LAB_ram_40002354;
              uVar20 = auStack_1c8[iVar12 + 2];
              iVar13 = iVar12;
              iVar12 = iVar12 + 1;
            }
          }
          else {
            iVar12 = 1;
            iVar13 = 0;
            uVar20 = auStack_1c8[2];
          }
          auStack_1c8[iVar13 + 2] = 0x100 - uVar20;
          if (iVar12 < iVar8) {
            uVar20 = auStack_1c8[iVar12 + 2];
            puVar17 = auStack_1c8 + iVar12 + 2;
            while( true ) {
              puVar2 = puVar17 + 1;
              *puVar17 = 0xff - uVar20;
              if (puVar2 == auStack_1c8 + iVar8 + 2) break;
              uVar20 = *puVar2;
              puVar17 = puVar2;
            }
          }
          bVar1 = true;
        }
LAB_ram_40002354:
        if (0 < param_3) {
          if (param_3 == 1) {
            auStack_1c8[iVar8 + 1] = auStack_1c8[iVar8 + 1] & 0x7f;
          }
          else if (param_3 == 2) {
            auStack_1c8[iVar8 + 1] = auStack_1c8[iVar8 + 1] & 0x3f;
          }
        }
        iVar12 = iVar15;
        if ((iVar15 == 2) && (fVar27 = fVar29 - fVar27, bVar1)) {
          fVar28 = (float)FUN_ram_40002d78(fVar29,param_3);
          fVar27 = fVar27 - fVar28;
        }
      }
    }
joined_r0x4000239c:
    if (fVar27 != 0.0) {
      fVar29 = (float)FUN_ram_40002d78(fVar27,auStack_1c8[0] - auStack_1c8[1]);
      if (fVar29 < DAT_ram_400a449c) {
        auStack_1c8[iVar8 + 2] = (int)fVar29;
      }
      else {
        param_3 = param_3 + 8;
        auStack_1c8[iVar8 + 2] =
             (int)(-((float)(int)(fVar29 * DAT_ram_400a09b8) * DAT_ram_400a449c) + fVar29);
        auStack_1c8[iVar8 + 3] = (int)(float)(int)(fVar29 * DAT_ram_400a09b8);
        iVar8 = iVar8 + 1;
      }
      goto LAB_ram_400023f0;
    }
    if (iVar25 <= iVar8 + -1) {
      uVar20 = 0;
      puVar17 = auStack_1c8 + iVar8 + 1;
      do {
        puVar2 = puVar17 + -1;
        uVar20 = uVar20 | *puVar17;
        puVar17 = puVar2;
      } while (puVar2 != auStack_1c8 + iVar25 + 1);
      if (uVar20 != 0) break;
    }
    if (auStack_1c8[iVar25 + 1] == 0) {
      iVar15 = 1;
      puVar17 = auStack_1c8 + iVar25;
      do {
        uVar24 = *puVar17;
        iVar15 = iVar15 + 1;
        puVar17 = puVar17 + -1;
      } while (uVar24 == 0);
      iVar15 = iVar8 + iVar15;
    }
    else {
      iVar15 = iVar8 + 1;
    }
    iVar12 = iVar8 + 1;
    puVar9 = (ulonglong *)((int)puVar10 + iVar12 * 4);
    puVar14 = (ulonglong *)(auStack_174 + (iVar26 + iVar12) * 4);
    do {
      uVar34 = 0;
      uVar33 = (ulonglong)(uint)(float)*(int *)(param_6 + iVar23 * 4 + iVar12 * 4);
      *(ulonglong *)((int)puVar14 + 4) = uVar33;
      puVar18 = puVar14;
      puVar7 = param_1;
      if (-1 < iVar26) {
        while( true ) {
          uVar34 = (ulonglong)(uint)((float)*puVar7 * (float)uVar33 + (float)uVar34);
          if ((undefined8 *)((int)puVar7 + 4) == (undefined8 *)((int)param_1 + param_4 * 4)) break;
          uVar33 = *puVar18;
          puVar18 = (ulonglong *)((int)puVar18 + -4);
          puVar7 = (undefined8 *)((int)puVar7 + 4);
        }
      }
      *puVar9 = uVar34;
      iVar12 = iVar12 + 1;
      puVar9 = (ulonglong *)((int)puVar9 + 4);
      puVar14 = (ulonglong *)((int)puVar14 + 4);
      iVar8 = iVar15;
    } while (iVar12 <= iVar15);
  } while( true );
  uVar20 = auStack_1c8[iVar8 + 1];
  iVar8 = iVar8 + -1;
  while (param_3 = param_3 + -8, uVar20 == 0) {
    uVar20 = auStack_1c8[iVar8 + 1];
    iVar8 = iVar8 + -1;
  }
LAB_ram_400023f0:
  fVar29 = (float)FUN_ram_40002d78(DAT_ram_4009672c,param_3);
  if (iVar8 < 0) {
    if (param_5 < 3) {
      uVar33 = 0;
      fVar29 = 0.0;
      if (param_5 < 1) {
        if (param_5 != 0) goto LAB_ram_400024d0;
joined_r0x400024c4:
        if (iVar12 != 0) {
          uVar33 = (ulonglong)(uint)-fVar29;
        }
        *param_2 = uVar33;
        goto LAB_ram_400024d0;
      }
LAB_ram_4000256a:
      fVar29 = (float)uVar33;
      if (iVar12 == 0) {
        *param_2 = uVar33;
        uVar33 = (ulonglong)(uint)(afStack_124[1] - fVar29);
        if (0 < iVar8) {
LAB_ram_4000257c:
          puVar7 = &local_11c;
          iVar25 = 1;
          do {
            uVar30 = *puVar7;
            iVar25 = iVar25 + 1;
            puVar7 = (undefined8 *)((int)puVar7 + 4);
            fVar29 = (float)uVar33 + (float)uVar30;
            uVar33 = (ulonglong)(uint)fVar29;
          } while (iVar25 <= iVar8);
          if (iVar12 != 0) {
            uVar33 = (ulonglong)(uint)-fVar29;
          }
        }
      }
      else {
        *param_2 = (ulonglong)(uint)-fVar29;
        uVar33 = (ulonglong)(uint)(afStack_124[1] - fVar29);
        if (0 < iVar8) goto LAB_ram_4000257c;
        uVar33 = (ulonglong)(uint)-(afStack_124[1] - fVar29);
      }
      *(ulonglong *)((int)param_2 + 4) = uVar33;
      goto LAB_ram_400024d0;
    }
    uVar33 = 0;
    if (param_5 != 3) goto LAB_ram_400024d0;
  }
  else {
    puVar9 = (ulonglong *)((int)puVar10 + iVar8 * 4);
    puVar14 = puVar9;
    puVar17 = auStack_1c8 + iVar8 + 2;
    do {
      fVar31 = (float)(int)*puVar17 * fVar29;
      fVar29 = fVar29 * DAT_ram_400a09b8;
      *puVar14 = (ulonglong)(uint)fVar31;
      bVar1 = puVar10 != puVar14;
      puVar14 = (ulonglong *)((int)puVar14 + -4);
      puVar17 = puVar17 + -1;
    } while (bVar1);
    pfVar22 = afStack_124 + 1;
    iVar26 = 0;
    pfVar21 = pfVar22;
    while( true ) {
      if (iVar25 < 0) {
        *pfVar21 = 0.0;
      }
      else {
        uVar33 = (ulonglong)DAT_ram_400a44bc;
        fVar29 = 0.0;
        puVar14 = &DAT_ram_40095db4;
        iVar23 = 0;
        puVar10 = puVar9;
        while( true ) {
          uVar34 = *puVar10;
          iVar23 = iVar23 + 1;
          puVar10 = (ulonglong *)((int)puVar10 + 4);
          fVar29 = (float)uVar34 * (float)uVar33 + fVar29;
          if ((iVar25 < iVar23) || (iVar26 < iVar23)) break;
          uVar33 = *puVar14;
          puVar14 = (ulonglong *)((int)puVar14 + 4);
        }
        *pfVar21 = fVar29;
      }
      if (iVar8 == iVar26) break;
      pfVar21 = pfVar21 + 1;
      puVar9 = (ulonglong *)((int)puVar9 + -4);
      iVar26 = iVar26 + 1;
    }
    if (param_5 < 3) {
      uVar33 = 0;
      pfVar21 = pfVar22 + iVar8;
      if (param_5 < 1) {
        if (param_5 != 0) goto LAB_ram_400024d0;
        do {
          fVar29 = (float)uVar33 + (float)*(undefined8 *)pfVar21;
          uVar33 = (ulonglong)(uint)fVar29;
          bVar1 = pfVar22 != pfVar21;
          pfVar21 = pfVar21 + -1;
        } while (bVar1);
        goto joined_r0x400024c4;
      }
      do {
        uVar33 = (ulonglong)(uint)((float)uVar33 + (float)*(undefined8 *)pfVar21);
        bVar1 = pfVar22 != pfVar21;
        pfVar21 = pfVar21 + -1;
      } while (bVar1);
      goto LAB_ram_4000256a;
    }
    if (param_5 != 3) goto LAB_ram_400024d0;
    if (iVar8 != 0) {
      uVar33 = *(ulonglong *)(pfVar22 + iVar8);
      pfVar21 = afStack_124 + iVar8;
      do {
        uVar30 = *(undefined8 *)pfVar21;
        fVar31 = (float)uVar33;
        fVar29 = fVar31 + (float)uVar30;
        uVar33 = (ulonglong)(uint)fVar29;
        *(ulonglong *)pfVar21 = uVar33;
        *(ulonglong *)(pfVar21 + 1) = (ulonglong)(uint)(((float)uVar30 - fVar29) + fVar31);
        bVar1 = pfVar22 != pfVar21;
        pfVar21 = pfVar21 + -1;
      } while (bVar1);
    }
    uVar33 = 0;
    if (1 < iVar8) {
      uVar33 = (ulonglong)(uint)pfVar22[iVar8];
      pfVar21 = pfVar22 + iVar8 + -1;
      do {
        pfVar19 = pfVar21;
        uVar30 = *(undefined8 *)pfVar19;
        fVar31 = (float)uVar33;
        fVar29 = fVar31 + (float)uVar30;
        uVar33 = (ulonglong)(uint)fVar29;
        *(ulonglong *)pfVar19 = uVar33;
        *(ulonglong *)(pfVar19 + 1) = (ulonglong)(uint)(((float)uVar30 - fVar29) + fVar31);
        pfVar21 = pfVar19 + -1;
      } while (pfVar22 != pfVar19 + -1);
      uVar33 = 0;
      pfVar22 = pfVar22 + iVar8;
      do {
        uVar30 = *(undefined8 *)pfVar22;
        pfVar22 = pfVar22 + -1;
        uVar33 = (ulonglong)(uint)((float)uVar33 + (float)uVar30);
      } while (pfVar19 != pfVar22);
    }
  }
  if (iVar12 == 0) {
    *param_2 = CONCAT44((float)local_11c,afStack_124[1]);
    *(ulonglong *)((int)param_2 + 4) = CONCAT44(local_11c._4_4_,(float)local_11c);
    param_2[1] = uVar33;
  }
  else {
    *param_2 = (ulonglong)(uint)-afStack_124[1];
    *(ulonglong *)((int)param_2 + 4) = (ulonglong)(uint)-(float)local_11c;
    param_2[1] = (ulonglong)(uint)-(float)uVar33;
  }
LAB_ram_400024d0:
  return uVar24 & 7;
}

