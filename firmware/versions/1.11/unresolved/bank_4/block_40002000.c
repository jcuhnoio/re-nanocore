/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40002000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40002050.
 * REA evidence: ev_788b13c5ee82516cb66fd6ec63a0ce279d2e963aa469c287eaae4cf5d2187663
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
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
  
  fVar6 = DAT_ram_4009bea8;
  fVar5 = DAT_ram_4009a958;
  fVar4 = DAT_ram_4009a830;
  fVar3 = DAT_ram_4009463c;
  fVar31 = DAT_ram_40094634;
  fVar29 = DAT_ram_40094604;
  auStack_1c8[1] = param_3;
  iVar25 = *(int *)(&DAT_ram_40093c7c + param_5 * 4);
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
      if (fVar29 < DAT_ram_4009bea8) {
        auStack_1c8[iVar8 + 2] = (int)fVar29;
      }
      else {
        param_3 = param_3 + 8;
        auStack_1c8[iVar8 + 2] =
             (int)(-((float)(int)(fVar29 * DAT_ram_4009a958) * DAT_ram_4009bea8) + fVar29);
        auStack_1c8[iVar8 + 3] = (int)(float)(int)(fVar29 * DAT_ram_4009a958);
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
  fVar29 = (float)FUN_ram_40002d78(DAT_ram_40094604,param_3);
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
      fVar29 = fVar29 * DAT_ram_4009a958;
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
        uVar33 = (ulonglong)DAT_ram_4009bec8;
        fVar29 = 0.0;
        puVar14 = &DAT_ram_40093c8c;
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


/* NanoCore 1.11, address 0x400026b6.
 * REA evidence: ev_a967bc67884ca8a265a48ac8c6a3f2e97e19309de01777d87d59ae02f616cbcd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_400026b6(ulonglong param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_register_00000100;
  
  if ((0x31ffffff < (uint)ABS(in_register_00000100)) || ((int)(float)param_1 != 0)) {
    fVar2 = in_register_00000100 * in_register_00000100;
    fVar3 = in_register_00000100 * fVar2;
    fVar1 = (((fVar2 * DAT_ram_4009becc + DAT_ram_4009bed0) * fVar2 + DAT_ram_4009bed4) * fVar2 +
            DAT_ram_4009a4cc._4_4_) * fVar2 + DAT_ram_4009a4d4;
    if (param_3 == 0) {
      return (ulonglong)(uint)((fVar2 * fVar1 + DAT_ram_4009a4d8) * fVar3 + in_register_00000100);
    }
    param_1 = (ulonglong)
              (uint)(in_register_00000100 -
                    (fVar3 * DAT_ram_4009a540 +
                    ((param_2 * DAT_ram_40094634 - fVar3 * fVar1) * fVar2 - param_2)));
  }
  return param_1;
}


/* NanoCore 1.11, address 0x4000275c.
 * REA evidence: ev_dfbdc7ac6506c9102fba3f28a706dfa483593c5b22ae9ca0c1e49d579866cdfd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4000275c(float param_1,int param_2)

{
  float in_register_00000100;
  float fVar1;
  
  fVar1 = ABS(in_register_00000100);
  if (((uint)fVar1 < 0x31800000) && ((int)param_1 == 0)) {
    if (fVar1 == 0.0 && param_2 == -1) {
      fVar1 = (float)FUN_ram_40002c60();
      return DAT_ram_40094604 / fVar1;
    }
    if (param_2 != 1) {
      return in_register_00000100;
    }
  }
  else if (0x3f2ca13f < (uint)fVar1) {
    return in_register_00000100;
  }
  return in_register_00000100;
}


/* NanoCore 1.11, address 0x40002954.
 * REA evidence: ev_2b1fbcad09e9bedffb194879789989697105df6ac4e90e748f26596d5d58ed28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40002954(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_ram_40002c60();
  return DAT_ram_40094604 / fVar1;
}


/* NanoCore 1.11, address 0x40002970.
 * REA evidence: ev_7269ace9c12ecafed73150ab8dce7865c5486d2d0c11c6868d807978cc8d1787
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1  [16] FUN_ram_40002970(float param_1,ulonglong param_2)

{
  uint in_register_00000100;
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = in_register_00000100 & 0x7fffffff;
  if (uVar1 < 0x4195b844) {
    if (uVar1 < 0x3eb17219) {
      if (uVar1 < 0x33000000) {
        auVar6._4_4_ = 0;
        auVar6._0_4_ = in_register_00000100;
        auVar6._8_8_ = param_2;
        return auVar6;
      }
      iVar2 = 0;
    }
    else {
      if (0x3f851591 < uVar1) {
        fVar3 = DAT_ram_40094634;
        if ((int)in_register_00000100 < 0) {
          fVar3 = (float)DAT_ram_4009a4bc;
        }
        goto LAB_ram_400029ba;
      }
      if ((int)in_register_00000100 < 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = 1;
      }
    }
  }
  else {
    if (0x7f800000 < uVar1) goto LAB_ram_40002ae6;
    if (uVar1 == 0x7f800000) {
      if (-1 < (int)in_register_00000100) goto LAB_ram_40002ae6;
LAB_ram_40002bf2:
      in_register_00000100 = DAT_ram_40094600;
      goto LAB_ram_40002ae6;
    }
    if ((int)in_register_00000100 < 0) {
      fVar3 = (float)DAT_ram_4009a4bc;
      if (param_1 + DAT_ram_4009be80 < 0.0) goto LAB_ram_40002bf2;
    }
    else {
      fVar3 = DAT_ram_40094634;
      if (0x42b17217 < uVar1) {
        auVar6 = thunk_FUN_ram_40002ea2(0);
        return auVar6;
      }
    }
LAB_ram_400029ba:
    iVar2 = (int)(fVar3 + param_1 * DAT_ram_4009a52c);
  }
  param_2 = (ulonglong)DAT_ram_40094604;
  if (iVar2 == 0) {
    auVar5._4_4_ = 0;
    auVar5._0_4_ = in_register_00000100;
    auVar5._8_4_ = DAT_ram_40094604;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  if (((iVar2 != -1) && (iVar2 != 1)) && (iVar2 + 1U < 0x3a)) {
    if (iVar2 < 0x17) {
      in_register_00000100 = in_register_00000100 + iVar2 * 0x800000;
    }
    else {
      in_register_00000100 = in_register_00000100 + iVar2 * 0x800000;
    }
  }
LAB_ram_40002ae6:
  auVar4._4_4_ = 0;
  auVar4._0_4_ = in_register_00000100;
  auVar4._8_8_ = param_2;
  return auVar4;
}


/* NanoCore 1.11, address 0x40002c60.
 * REA evidence: ev_980ed37d00af92e909e4c3f1fd9828c7f62b880c8787caa138b1dad605726097
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40002c60(void)

{
  uint in_register_00000100;
  
  return in_register_00000100 & 0x7fffffff;
}


/* NanoCore 1.11, address 0x40002c74.
 * REA evidence: ev_c4ce98b22bcfe8cc13ae2de1b93f769736f770de644c01cc4efba54096fbc7c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40002c74(void)

{
  uint in_register_00000100;
  
  return (in_register_00000100 & 0x7fffffff) < 0x7f800000;
}


/* NanoCore 1.11, address 0x40002c8c.
 * REA evidence: ev_ba91ce0c9f308ba6b8977f04d82d2058501549cdaabf77f09f3c0cb03e57ee31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40002c8c(void)

{
  return DAT_ram_4009bf28;
}


/* NanoCore 1.11, address 0x40002c96.
 * REA evidence: ev_f883dde2fabc69a063e4483f9befd8fe8097e34d1da9a2e584d7430ed5d3f5fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40002c96(void)

{
  uint in_register_00000100;
  
  if (((int)(((in_register_00000100 & 0x7fffffff) >> 0x17) - 0x7f) < 0x17) &&
     ((in_register_00000100 & 0x7fffffff) != 0)) {
    return in_register_00000100;
  }
  return in_register_00000100;
}


/* NanoCore 1.11, address 0x40002d78.
 * REA evidence: ev_72238bbca057c476eeb874a9b476afd10eb1b4779e115df25df4044a122c88a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40002d78(int param_1)

{
  int iVar1;
  uint in_register_00000100;
  uint uVar2;
  
  uVar2 = in_register_00000100 & 0x7fffffff;
  if (uVar2 == 0) {
    return in_register_00000100;
  }
  if (0x7f7fffff < uVar2) {
    return in_register_00000100;
  }
  if ((in_register_00000100 & 0x7f800000) == 0) {
    if (param_1 < -50000) {
      return in_register_00000100;
    }
    uVar2 = ((in_register_00000100 & 0x7fffffff) >> 0x17) - 0x19;
  }
  else {
    uVar2 = uVar2 >> 0x17;
  }
  iVar1 = uVar2 + param_1;
  if (iVar1 < 0xff) {
    if (0 < iVar1) {
      return iVar1 * 0x800000 | in_register_00000100 & 0x807fffff;
    }
    if (-0x17 < iVar1) {
      return in_register_00000100;
    }
    if (param_1 < 0xc351) {
      return in_register_00000100;
    }
  }
  return in_register_00000100;
}


/* NanoCore 1.11, address 0x40002e80.
 * REA evidence: ev_62c3d4b74fa201321c3b8306f216498bfe2a16384de990745e1016afbb2f87a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40002e80(undefined4 param_1)

{
  undefined4 in_register_00000100;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_ram_4000502a();
  *puVar1 = param_1;
  return in_register_00000100;
}


/* NanoCore 1.11, address 0x40002ea2.
 * REA evidence: ev_106ed3ec0ce8779a7c1a94b9df4dd7fabb20399210cb0f56cdc1c4605d35273a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40002ea2(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40002e80(DAT_ram_4009bf34 * DAT_ram_4009bf30,0x22);
    return;
  }
  FUN_ram_40002e80(DAT_ram_4009bf30 * DAT_ram_4009bf30,0x22);
  return;
}


/* NanoCore 1.11, address 0x40002ed4.
 * REA evidence: ev_a5807cd084a09f5b468fbbe3238efd0f6bd12b49d52b50d2cb9f4746db0832aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40002ea2(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40002e80(DAT_ram_4009bf34 * DAT_ram_4009bf30,0x22);
    return;
  }
  FUN_ram_40002e80(DAT_ram_4009bf30 * DAT_ram_4009bf30,0x22);
  return;
}


/* NanoCore 1.11, address 0x40002f1a.
 * REA evidence: ev_ceaeb0a20c41e4454d32f9e8bfb4a0ae7cdfd7900bdf4d53b821fe1ca1d6de48
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40002f1a(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_40006c12(PTR_DAT_ram_30049530_ram_30049528,param_1,param_2);
  return;
}


/* NanoCore 1.11, address 0x40002f2c.
 * REA evidence: ev_bbc4c065bbbaba9be70635d002418ff2f1e9061f714b1351fbce2912f60787bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40002f2c(undefined4 param_1)

{
  FUN_ram_40006bf6(PTR_DAT_ram_30049530_ram_30049528,param_1);
  return;
}


/* NanoCore 1.11, address 0x40002f3a.
 * REA evidence: ev_a667a1e50652bb5182a0583ec31902f58a8e7525c77d39c4c69f6ef860017d98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40002f3a(undefined4 param_1)

{
  FUN_ram_40006c30(PTR_DAT_ram_30049530_ram_30049528,param_1);
  return;
}


/* NanoCore 1.11, address 0x40002f48.
 * REA evidence: ev_b067ccd4fbcf9320efedf7d1fe4e897d8e157daf534c2e1d7cb879cf5769e518
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint * FUN_ram_40002f48(uint *param_1,char param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  
  if (((uint)param_1 & 3) != 0) {
    if (param_3 == 0) {
      return (uint *)0x0;
    }
    cVar1 = (char)*param_1;
    param_3 = param_3 - 1;
    while( true ) {
      if (cVar1 == param_2) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if (((uint)param_1 & 3) == 0) break;
      param_3 = param_3 - 1;
      if (param_3 == 0xffffffff) {
        return (uint *)0x0;
      }
      cVar1 = *(char *)param_1;
    }
  }
  if (3 < param_3) {
    do {
      uVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2)) ^ *param_1;
      if ((~uVar2 & uVar2 + 0xfefefeff & 0x80808080) != 0) goto LAB_ram_40002f82;
      param_3 = param_3 - 4;
      param_1 = param_1 + 1;
    } while (3 < param_3);
  }
  if (param_3 != 0) {
LAB_ram_40002f82:
    if ((char)*param_1 == param_2) {
      return param_1;
    }
    puVar3 = (uint *)(param_3 + (int)param_1);
    while (param_1 = (uint *)((int)param_1 + 1), puVar3 != param_1) {
      if (*(char *)param_1 == param_2) {
        return param_1;
      }
    }
  }
  return (uint *)0x0;
}


/* NanoCore 1.11, address 0x40002fec.
 * REA evidence: ev_5dfec1742bbfcc0edef6c9b3dad9d69686035261c75dc1434cff1e914c1979cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40002fec(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (3 < param_3) {
    if ((((uint)param_1 | (uint)param_2) & 3) != 0) goto LAB_ram_40003014;
    do {
      if (*(int *)param_1 != *(int *)param_2) goto LAB_ram_40003014;
      param_3 = param_3 - 4;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    } while (3 < param_3);
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_ram_40003014:
  uVar1 = (uint)*param_2;
  uVar2 = (uint)*param_1;
  uVar3 = 1;
  if (uVar2 == uVar1) {
    do {
      if (uVar3 == param_3) {
        return 0;
      }
      uVar2 = (uint)param_1[uVar3];
      uVar1 = (uint)param_2[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar2 == uVar1);
  }
  return uVar2 - uVar1;
}


