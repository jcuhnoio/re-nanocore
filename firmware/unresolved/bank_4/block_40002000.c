/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40002000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40002060.
 * REA evidence: ev_ddadceddc95015618ccbe7dec99e32a31c14350248da0e298dd8b959b72ec2f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40002060(undefined8 *param_1,ulonglong *param_2,int param_3,int param_4,int param_5,
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
  
  fVar6 = DAT_ram_40099e88;
  fVar5 = DAT_ram_40098a8c;
  fVar4 = DAT_ram_40098938;
  fVar3 = DAT_ram_40092864;
  fVar31 = DAT_ram_4009284c;
  fVar29 = DAT_ram_4009281c;
  auStack_1c8[1] = param_3;
  iVar25 = *(int *)(&DAT_ram_40091ebc + param_5 * 4);
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
    fVar27 = (float)FUN_ram_40002d88(param_3);
    fVar28 = (float)FUN_ram_40000800(fVar27 * fVar4);
    fVar27 = -(fVar28 * fVar31) + fVar27;
    uVar24 = (uint)fVar27;
    fVar27 = fVar27 - (float)(int)uVar24;
    if (param_3 < 1) {
      if (param_3 == 0) {
        iVar15 = (int)auStack_1c8[iVar8 + 1] >> 8;
        goto joined_r0x400022fa;
      }
      iVar12 = 0;
      if (fVar3 <= fVar27) {
        uVar24 = uVar24 + 1;
        iVar15 = 2;
        iVar12 = 2;
        if (iVar8 < 1) {
          fVar27 = fVar29 - fVar27;
          goto joined_r0x400023ac;
        }
        goto LAB_ram_40002304;
      }
    }
    else {
      iVar12 = (int)auStack_1c8[iVar8 + 1] >> (8U - param_3 & 0x1f);
      uVar20 = auStack_1c8[iVar8 + 1] - (iVar12 << (8U - param_3 & 0x1f));
      auStack_1c8[iVar8 + 1] = uVar20;
      iVar15 = (int)uVar20 >> (7U - param_3 & 0x1f);
      uVar24 = uVar24 + iVar12;
joined_r0x400022fa:
      iVar12 = iVar15;
      if (0 < iVar15) {
        uVar24 = uVar24 + 1;
        if (iVar8 < 1) {
          bVar1 = false;
        }
        else {
LAB_ram_40002304:
          if (auStack_1c8[2] == 0) {
            bVar1 = false;
            if (iVar8 == 1) goto LAB_ram_40002364;
            iVar13 = 1;
            iVar12 = 2;
            uVar20 = auStack_1c8[3];
            while (uVar20 == 0) {
              bVar1 = false;
              if (iVar8 == iVar12) goto LAB_ram_40002364;
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
LAB_ram_40002364:
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
          fVar28 = (float)FUN_ram_40002d88(fVar29,param_3);
          fVar27 = fVar27 - fVar28;
        }
      }
    }
joined_r0x400023ac:
    if (fVar27 != 0.0) {
      fVar29 = (float)FUN_ram_40002d88(fVar27,auStack_1c8[0] - auStack_1c8[1]);
      if (fVar29 < DAT_ram_40099e88) {
        auStack_1c8[iVar8 + 2] = (int)fVar29;
      }
      else {
        param_3 = param_3 + 8;
        auStack_1c8[iVar8 + 2] =
             (int)(-((float)(int)(fVar29 * DAT_ram_40098a8c) * DAT_ram_40099e88) + fVar29);
        auStack_1c8[iVar8 + 3] = (int)(float)(int)(fVar29 * DAT_ram_40098a8c);
        iVar8 = iVar8 + 1;
      }
      goto LAB_ram_40002400;
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
LAB_ram_40002400:
  fVar29 = (float)FUN_ram_40002d88(DAT_ram_4009281c,param_3);
  if (iVar8 < 0) {
    if (param_5 < 3) {
      uVar33 = 0;
      fVar29 = 0.0;
      if (param_5 < 1) {
        if (param_5 != 0) goto LAB_ram_400024e0;
joined_r0x400024d4:
        if (iVar12 != 0) {
          uVar33 = (ulonglong)(uint)-fVar29;
        }
        *param_2 = uVar33;
        goto LAB_ram_400024e0;
      }
LAB_ram_4000257a:
      fVar29 = (float)uVar33;
      if (iVar12 == 0) {
        *param_2 = uVar33;
        uVar33 = (ulonglong)(uint)(afStack_124[1] - fVar29);
        if (0 < iVar8) {
LAB_ram_4000258c:
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
        if (0 < iVar8) goto LAB_ram_4000258c;
        uVar33 = (ulonglong)(uint)-(afStack_124[1] - fVar29);
      }
      *(ulonglong *)((int)param_2 + 4) = uVar33;
      goto LAB_ram_400024e0;
    }
    uVar33 = 0;
    if (param_5 != 3) goto LAB_ram_400024e0;
  }
  else {
    puVar9 = (ulonglong *)((int)puVar10 + iVar8 * 4);
    puVar14 = puVar9;
    puVar17 = auStack_1c8 + iVar8 + 2;
    do {
      fVar31 = (float)(int)*puVar17 * fVar29;
      fVar29 = fVar29 * DAT_ram_40098a8c;
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
        uVar33 = (ulonglong)DAT_ram_40099ea8;
        fVar29 = 0.0;
        puVar14 = &DAT_ram_40091ecc;
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
        if (param_5 != 0) goto LAB_ram_400024e0;
        do {
          fVar29 = (float)uVar33 + (float)*(undefined8 *)pfVar21;
          uVar33 = (ulonglong)(uint)fVar29;
          bVar1 = pfVar22 != pfVar21;
          pfVar21 = pfVar21 + -1;
        } while (bVar1);
        goto joined_r0x400024d4;
      }
      do {
        uVar33 = (ulonglong)(uint)((float)uVar33 + (float)*(undefined8 *)pfVar21);
        bVar1 = pfVar22 != pfVar21;
        pfVar21 = pfVar21 + -1;
      } while (bVar1);
      goto LAB_ram_4000257a;
    }
    if (param_5 != 3) goto LAB_ram_400024e0;
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
LAB_ram_400024e0:
  return uVar24 & 7;
}


/* NanoCore 1.10, address 0x400026c6.
 * REA evidence: ev_370e84ec82f27744167c278cca104ab449dfaf4252efdc91807f817e8926dd80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_400026c6(ulonglong param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_register_00000100;
  
  if ((0x31ffffff < (uint)ABS(in_register_00000100)) || ((int)(float)param_1 != 0)) {
    fVar2 = in_register_00000100 * in_register_00000100;
    fVar3 = in_register_00000100 * fVar2;
    fVar1 = (((fVar2 * DAT_ram_40099eac + DAT_ram_40099eb0) * fVar2 + DAT_ram_40099eb4) * fVar2 +
            DAT_ram_40098604._4_4_) * fVar2 + DAT_ram_4009860c;
    if (param_3 == 0) {
      return (ulonglong)(uint)((fVar2 * fVar1 + DAT_ram_40098610) * fVar3 + in_register_00000100);
    }
    param_1 = (ulonglong)
              (uint)(in_register_00000100 -
                    (fVar3 * DAT_ram_40098678 +
                    ((param_2 * DAT_ram_40092864 - fVar3 * fVar1) * fVar2 - param_2)));
  }
  return param_1;
}


/* NanoCore 1.10, address 0x4000276c.
 * REA evidence: ev_53161574bdf3be53777fa2b6c6eabea2deac1bf5302fb3fbd86d8b212a146c0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4000276c(float param_1,int param_2)

{
  float in_register_00000100;
  float fVar1;
  
  fVar1 = ABS(in_register_00000100);
  if (((uint)fVar1 < 0x31800000) && ((int)param_1 == 0)) {
    if (fVar1 == 0.0 && param_2 == -1) {
      fVar1 = (float)FUN_ram_40002c70();
      return DAT_ram_4009281c / fVar1;
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


/* NanoCore 1.10, address 0x40002964.
 * REA evidence: ev_a2822238daeaf6221c50f3c1a1d2ae61d4fedfb45912390a67d4b49267a83410
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40002964(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_ram_40002c70();
  return DAT_ram_4009281c / fVar1;
}


/* NanoCore 1.10, address 0x40002980.
 * REA evidence: ev_3e7e6b48432939d1d7cb2c4369ed655f891657a412c1ae7b362440bf58dcc121
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1  [16] FUN_ram_40002980(float param_1,ulonglong param_2)

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
        fVar3 = DAT_ram_40092864;
        if ((int)in_register_00000100 < 0) {
          fVar3 = (float)DAT_ram_400985f4;
        }
        goto LAB_ram_400029ca;
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
    if (0x7f800000 < uVar1) goto LAB_ram_40002af6;
    if (uVar1 == 0x7f800000) {
      if (-1 < (int)in_register_00000100) goto LAB_ram_40002af6;
LAB_ram_40002c02:
      in_register_00000100 = DAT_ram_40092818;
      goto LAB_ram_40002af6;
    }
    if ((int)in_register_00000100 < 0) {
      fVar3 = (float)DAT_ram_400985f4;
      if (param_1 + DAT_ram_40099e60 < 0.0) goto LAB_ram_40002c02;
    }
    else {
      fVar3 = DAT_ram_40092864;
      if (0x42b17217 < uVar1) {
        auVar6 = FUN_ram_40002ee4(0);
        return auVar6;
      }
    }
LAB_ram_400029ca:
    iVar2 = (int)(fVar3 + param_1 * DAT_ram_40098664);
  }
  param_2 = (ulonglong)DAT_ram_4009281c;
  if (iVar2 == 0) {
    auVar5._4_4_ = 0;
    auVar5._0_4_ = in_register_00000100;
    auVar5._8_4_ = DAT_ram_4009281c;
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
LAB_ram_40002af6:
  auVar4._4_4_ = 0;
  auVar4._0_4_ = in_register_00000100;
  auVar4._8_8_ = param_2;
  return auVar4;
}


/* NanoCore 1.10, address 0x40002c70.
 * REA evidence: ev_0501f6ba72123e44e622d4a454649c4a7744b4a58b92e72bbaaa0a6c48f77f8d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40002c70(void)

{
  uint in_register_00000100;
  
  return in_register_00000100 & 0x7fffffff;
}


/* NanoCore 1.10, address 0x40002c84.
 * REA evidence: ev_213dbc32d91abd55aacdef5867041fddbd48d5840fd7d9bd104f2a159cc8bc8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40002c84(void)

{
  uint in_register_00000100;
  
  return (in_register_00000100 & 0x7fffffff) < 0x7f800000;
}


/* NanoCore 1.10, address 0x40002c9c.
 * REA evidence: ev_a8bdb06bc52e136384a764fa65ffef29bc76327b0c465dc9ed3fb748fd93de99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40002c9c(void)

{
  return DAT_ram_40099f08;
}


/* NanoCore 1.10, address 0x40002ca6.
 * REA evidence: ev_5727d8f3428e8cf94fb912b19034fa280a74190a39891e9c1ff2b9b1988f9160
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40002ca6(void)

{
  uint in_register_00000100;
  
  if (((int)(((in_register_00000100 & 0x7fffffff) >> 0x17) - 0x7f) < 0x17) &&
     ((in_register_00000100 & 0x7fffffff) != 0)) {
    return in_register_00000100;
  }
  return in_register_00000100;
}


/* NanoCore 1.10, address 0x40002d88.
 * REA evidence: ev_48c86e1019e7ddab708c261a473d87613325c5a95c3acba830710b21466e8f90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40002d88(int param_1)

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


/* NanoCore 1.10, address 0x40002ee4.
 * REA evidence: ev_914a075edc8773a4ea26ca65a44da167c045dc98cf9dae9dbe93038be7452d7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40002ee4(int param_1)

{
  float fVar1;
  undefined4 in_register_00000100;
  undefined4 *puVar2;
  
  fVar1 = DAT_ram_40099f10;
  if (param_1 != 0) {
    fVar1 = DAT_ram_40099f14;
  }
  puVar2 = (undefined4 *)thunk_FUN_ram_4000503a(fVar1 * DAT_ram_40099f10);
  *puVar2 = 0x22;
  return in_register_00000100;
}


/* NanoCore 1.10, address 0x40002f2a.
 * REA evidence: ev_ca4e3108845bae0221ad9a121f2df5fea8ce10dd72cfd4580fab1b25e1e85855
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40002f2a(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_40006c20(PTR_DAT_ram_30045e70_ram_30045e68,param_1,param_2);
  return;
}


/* NanoCore 1.10, address 0x40002f3c.
 * REA evidence: ev_68dd2d576ed47904407f3a509fd334ae9e8794ba7c442a31e3afa2ef9eca5f33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40002f3c(undefined4 param_1)

{
  FUN_ram_40006c04(PTR_DAT_ram_30045e70_ram_30045e68,param_1);
  return;
}


/* NanoCore 1.10, address 0x40002f4a.
 * REA evidence: ev_acd30712375d4f6cea9b96f5b55f50612d32177dc02796b8dda37a17067ca0f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40002f4a(undefined4 param_1)

{
  FUN_ram_40006c3e(PTR_DAT_ram_30045e70_ram_30045e68,param_1);
  return;
}


/* NanoCore 1.10, address 0x40002f58.
 * REA evidence: ev_351a2b08b91d183204db63201fcec6e16972bbda5f8e90703785b0b60cc9e582
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint * FUN_ram_40002f58(uint *param_1,char param_2,uint param_3)

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
      if ((~uVar2 & uVar2 + 0xfefefeff & 0x80808080) != 0) goto LAB_ram_40002f92;
      param_3 = param_3 - 4;
      param_1 = param_1 + 1;
    } while (3 < param_3);
  }
  if (param_3 != 0) {
LAB_ram_40002f92:
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


/* NanoCore 1.10, address 0x40002ffc.
 * REA evidence: ev_358bc38f904a5df83dcc304820d783aa9f504be113768f2bc268862a26e05cec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40002ffc(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (3 < param_3) {
    if ((((uint)param_1 | (uint)param_2) & 3) != 0) goto LAB_ram_40003024;
    do {
      if (*(int *)param_1 != *(int *)param_2) goto LAB_ram_40003024;
      param_3 = param_3 - 4;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    } while (3 < param_3);
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_ram_40003024:
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


