/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40068000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400682b8.
 * REA evidence: ev_b30c5ab83ca95c11e534f1b3bfa3b549aa34fce6036920e2489bbbf191b69d43
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400682b8(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     uint param_6,float *param_7,uint param_8,char param_9,char *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_register_00000100;
  float fVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  char cVar17;
  uint uVar18;
  char cVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulonglong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  if (param_10 != (char *)0x0) {
    *param_10 = param_9;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if ((param_2 != (float *)0x0) && (param_4 != param_2)) {
    FUN_ram_4000304c(param_4,param_2,param_6 << 2);
  }
  if ((((param_9 != '\0') && (param_5 != (float *)0x0)) && (param_3 != (float *)0x0)) &&
     (param_5 != param_3)) {
    FUN_ram_4000304c(param_5,param_3,param_6 << 2);
  }
  if (param_1 == (float *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  if (param_7 == (float *)0x0) {
    return;
  }
  uVar18 = (uint)*(byte *)((int)param_1 + 5);
  if (param_8 < 4) {
    if (param_8 != uVar18) goto LAB_ram_4006835c;
  }
  else {
    if (uVar18 == 0) {
      fVar29 = *param_1;
      fVar30 = *param_7;
      goto LAB_ram_400687a0;
    }
    param_8 = 0;
LAB_ram_4006835c:
    memset(param_1 + 0xb,0,0x30);
    fVar29 = DAT_ram_40094634;
    fVar30 = DAT_ram_40094604;
    *(char *)((int)param_1 + 5) = (char)param_8;
    param_1[3] = fVar30;
    param_1[2] = fVar29;
    param_1[4] = fVar30;
    param_1[5] = fVar30;
    param_1[6] = fVar30;
    uVar18 = param_8;
  }
  fVar25 = DAT_ram_40094604;
  fVar30 = *param_7;
  fVar29 = *param_1;
  if (uVar18 == 2) {
    if (fVar30 < 0.0) {
      fVar30 = 0.0;
    }
    else if (DAT_ram_40094604 < fVar30) {
      fVar30 = DAT_ram_40094604;
    }
    fVar32 = param_7[1];
    if (fVar32 < 0.0) {
      fVar32 = 0.0;
    }
    else if (DAT_ram_40094604 < fVar32) {
      fVar32 = DAT_ram_40094604;
    }
    if (0.0 < fVar29) {
      fVar29 = (float)FUN_ram_40000bd8(DAT_ram_4009a398 / (fVar29 * DAT_ram_4009463c));
      fVar25 = fVar25 - fVar29;
    }
    fVar34 = DAT_ram_40094634;
    fVar29 = param_1[3];
    if ((param_9 != '\0') && (param_5 != (float *)0x0)) {
      fVar26 = param_1[6];
      pfVar14 = param_4;
      do {
        fVar27 = (float)*(undefined8 *)pfVar14 + *param_5;
        pfVar15 = pfVar14 + 1;
        fVar26 = fVar25 * (fVar30 - fVar26) + fVar26;
        fVar29 = fVar25 * (fVar32 - fVar29) + fVar29;
        fVar33 = ((float)*(undefined8 *)pfVar14 - *param_5) * fVar34 * fVar26;
        *pfVar14 = fVar29 * (fVar27 * fVar34 + fVar33);
        *param_5 = fVar29 * (fVar27 * fVar34 - fVar33);
        pfVar14 = pfVar15;
        param_5 = param_5 + 1;
      } while (param_4 + param_6 != pfVar15);
      param_1[3] = fVar29;
      param_1[6] = fVar26;
      return;
    }
    pfVar14 = param_4;
    do {
      pfVar15 = pfVar14 + 1;
      fVar29 = (fVar32 - fVar29) * fVar25 + fVar29;
      *pfVar14 = (float)*(undefined8 *)pfVar14 * fVar29;
      pfVar14 = pfVar15;
    } while (param_4 + param_6 != pfVar15);
    param_1[3] = fVar29;
    return;
  }
  if (uVar18 != 3) {
    if (uVar18 == 1) {
      if (fVar30 < 0.0) {
        fVar30 = 0.0;
      }
      else if (DAT_ram_40094604 < fVar30) {
        fVar30 = DAT_ram_40094604;
      }
      fVar32 = param_7[1];
      if (fVar32 < 0.0) {
        fVar32 = 0.0;
      }
      else if (DAT_ram_40094604 < fVar32) {
        fVar32 = DAT_ram_40094604;
      }
      if (0.0 < fVar29) {
        fVar29 = (float)FUN_ram_40000bd8(DAT_ram_4009a398 / (fVar29 * DAT_ram_4009463c));
        fVar25 = fVar25 - fVar29;
      }
      if ((param_9 != '\0') && (param_5 != (float *)0x0)) {
        fVar29 = fVar32;
        if (fVar30 <= DAT_ram_40094634) {
          if (fVar30 < DAT_ram_40094634) {
            fVar29 = (float)FUN_ram_40000712((DAT_ram_40094634 - fVar30) * DAT_ram_4009a39c);
            fVar29 = fVar32 * fVar29;
          }
        }
        else {
          fVar30 = (float)FUN_ram_40000712((fVar30 - DAT_ram_40094634) * DAT_ram_4009a39c);
          fVar32 = fVar32 * fVar30;
        }
        fVar30 = param_1[4];
        fVar34 = param_1[5];
        pfVar14 = param_4;
        do {
          pfVar15 = pfVar14 + 1;
          fVar30 = fVar25 * (fVar32 - fVar30) + fVar30;
          fVar34 = fVar25 * (fVar29 - fVar34) + fVar34;
          *pfVar14 = (float)*(undefined8 *)pfVar14 * fVar30;
          *param_5 = *param_5 * fVar34;
          pfVar14 = pfVar15;
          param_5 = param_5 + 1;
        } while (param_4 + param_6 != pfVar15);
        param_1[4] = fVar30;
        param_1[5] = fVar34;
        return;
      }
      fVar30 = param_1[3];
      pfVar14 = param_4;
      do {
        pfVar15 = pfVar14 + 1;
        fVar30 = (fVar32 - fVar30) * fVar25 + fVar30;
        *pfVar14 = (float)*(undefined8 *)pfVar14 * fVar30;
        pfVar14 = pfVar15;
      } while (param_4 + param_6 != pfVar15);
      param_1[3] = fVar30;
      return;
    }
LAB_ram_400687a0:
    fVar25 = DAT_ram_40094604;
    if (fVar30 < 0.0) {
      fVar30 = 0.0;
    }
    else if (DAT_ram_40094604 < fVar30) {
      fVar30 = DAT_ram_40094604;
    }
    fVar32 = param_7[1];
    if (fVar32 < 0.0) {
      fVar32 = 0.0;
    }
    else if (DAT_ram_40094604 < fVar32) {
      fVar32 = DAT_ram_40094604;
    }
    fVar34 = param_7[2];
    if (fVar34 < 0.0) {
      fVar34 = 0.0;
    }
    else if (DAT_ram_40094604 < fVar34) {
      fVar34 = DAT_ram_40094604;
    }
    fVar26 = param_7[3];
    if (fVar26 < 0.0) {
      fVar26 = 0.0;
    }
    else if (DAT_ram_40094604 < fVar26) {
      fVar26 = DAT_ram_40094604;
    }
    fVar26 = ((fVar34 - fVar32) * fVar30 + fVar32) * fVar26;
    if (0.0 < fVar29) {
      fVar30 = (float)FUN_ram_40000bd8(DAT_ram_4009a398 / (fVar29 * DAT_ram_4009463c));
      fVar25 = fVar25 - fVar30;
    }
    fVar30 = param_1[3];
    pfVar14 = param_4 + param_6;
    if (param_9 == '\0') {
      do {
        pfVar15 = param_4 + 1;
        fVar30 = fVar25 * (fVar26 - fVar30) + fVar30;
        *param_4 = (float)*(undefined8 *)param_4 * fVar30;
        param_4 = pfVar15;
      } while (pfVar15 != pfVar14);
    }
    else {
      if (param_5 != (float *)0x0) {
        do {
          pfVar15 = param_4 + 1;
          fVar30 = (fVar26 - fVar30) * fVar25 + fVar30;
          *param_4 = (float)*(undefined8 *)param_4 * fVar30;
          *param_5 = *param_5 * fVar30;
          param_4 = pfVar15;
          param_5 = param_5 + 1;
        } while (pfVar15 != pfVar14);
        param_1[3] = fVar30;
        return;
      }
      do {
        pfVar15 = param_4 + 1;
        fVar30 = fVar25 * (fVar26 - fVar30) + fVar30;
        *param_4 = (float)*(undefined8 *)param_4 * fVar30;
        param_4 = pfVar15;
      } while (pfVar14 != pfVar15);
    }
    param_1[3] = fVar30;
    return;
  }
  if (fVar30 < 0.0) {
    fVar30 = 0.0;
  }
  else if (DAT_ram_40094604 < fVar30) {
    fVar30 = DAT_ram_40094604;
  }
  fVar32 = param_7[1];
  if (fVar32 < 0.0) {
    fVar32 = 0.0;
  }
  else if (DAT_ram_40094604 < fVar32) {
    fVar32 = DAT_ram_40094604;
  }
  fVar34 = param_7[2];
  if (fVar34 < 0.0) {
    fVar34 = 0.0;
  }
  else if (DAT_ram_40094604 < fVar34) {
    fVar34 = DAT_ram_40094604;
  }
  fVar26 = 0.0;
  if (0.0 < fVar29) {
    fVar26 = (float)FUN_ram_40000bd8(DAT_ram_4009a398 / (fVar29 * DAT_ram_40095280));
    fVar26 = fVar25 - (fVar25 - fVar26);
  }
  fVar26 = (float)FUN_ram_40000d44(fVar26,(float)param_6);
  fVar30 = (fVar25 - fVar26) * (fVar30 - param_1[2]) + param_1[2];
  param_1[2] = fVar30;
  if (fVar30 < 0.0) {
    fVar26 = 0.0;
LAB_ram_40068b0a:
    fVar30 = fVar26;
    fVar26 = (float)FUN_ram_40000d44(fVar30,DAT_ram_4009a3a0);
    fVar27 = (float)FUN_ram_40000bd8(fVar26 * DAT_ram_4009a3a4);
    fVar27 = fVar27 * DAT_ram_4009a3a8;
    fVar26 = fVar30 * DAT_ram_4009a3ac + DAT_ram_4009a3b0;
    if (0.0 <= fVar32) {
LAB_ram_400684a6:
      fVar33 = (float)DAT_ram_40099f5c;
      if (fVar32 <= fVar25) {
        fVar33 = fVar32 + DAT_ram_40094634;
      }
      goto LAB_ram_400684ba;
    }
    fVar26 = fVar26 * DAT_ram_40094634;
  }
  else {
    fVar26 = fVar25;
    if (fVar25 < fVar30) goto LAB_ram_40068b0a;
    fVar26 = (float)FUN_ram_40000d44(fVar30,DAT_ram_4009a3a0);
    fVar27 = (float)FUN_ram_40000bd8(fVar26 * DAT_ram_4009a3a4);
    fVar27 = fVar27 * DAT_ram_4009a3a8;
    fVar26 = fVar30 * DAT_ram_4009a3ac + DAT_ram_4009a3b0;
    fVar33 = DAT_ram_40094634;
    if (0.0 <= fVar32) goto LAB_ram_400684a6;
LAB_ram_400684ba:
    fVar26 = fVar26 * fVar33;
    fVar32 = DAT_ram_4009a390;
    if (fVar27 < (float)DAT_ram_40096074) goto LAB_ram_400684ee;
  }
  if (fVar29 * DAT_ram_4009a130 < fVar27) {
    fVar32 = fVar29 * DAT_ram_4009a130 * DAT_ram_4009a39c;
  }
  else {
    fVar32 = fVar27 * DAT_ram_4009a39c;
  }
LAB_ram_400684ee:
  fVar27 = DAT_ram_4009a394;
  if (DAT_ram_4009a110 <= fVar26) {
    fVar27 = fVar25 / fVar26;
  }
  fVar28 = (float)FUN_ram_40000a4e(fVar32 / fVar29);
  fVar32 = (fVar25 - fVar30) * DAT_ram_4009460c + DAT_ram_4009a3b4;
  fVar26 = fVar30 * DAT_ram_4009a3b8 + DAT_ram_4009a3bc;
  fVar30 = fVar25 / (fVar28 * (fVar28 + fVar27) + fVar25);
  FUN_ram_40000bd8(DAT_ram_4009a3c0 / fVar29);
  fVar33 = fVar28 * fVar30;
  fVar13 = in_register_00000100;
  FUN_ram_40000bd8(DAT_ram_4009a3c4 / fVar29);
  fVar12 = DAT_ram_4009a3dc;
  fVar11 = DAT_ram_4009a3d8;
  fVar10 = DAT_ram_4009a3d4;
  fVar9 = DAT_ram_4009a3d0;
  fVar8 = DAT_ram_4009a204._4_4_;
  fVar7 = DAT_ram_40099fa8;
  fVar6 = DAT_ram_40094ee0;
  puVar5 = PTR_entry_ram_40094618;
  fVar4 = DAT_ram_40094614;
  fVar29 = DAT_ram_40094600;
  cVar19 = '\x01';
  if (param_9 != '\0') {
    cVar19 = (param_5 != (float *)0x0) + '\x01';
  }
  pfVar14 = param_1 + 0xb;
  cVar17 = '\0';
  do {
    fVar22 = *pfVar14;
    fVar21 = pfVar14[1];
    fVar20 = pfVar14[3];
    uVar31 = *(ulonglong *)(pfVar14 + 5);
    pfVar15 = param_4;
    fVar23 = pfVar14[2];
    fVar24 = pfVar14[4];
    do {
      fVar1 = *pfVar15;
      fVar20 = ((fVar1 + fVar20) - fVar23) * in_register_00000100;
      fVar2 = (fVar20 * fVar13 + fVar13) * fVar13;
      fVar23 = fVar25;
      if ((fVar2 < fVar4) && (fVar23 = fVar29, fVar7 < fVar2)) {
        fVar23 = ((fVar2 * fVar2 + fVar8) * fVar2) / (fVar2 * fVar2 * fVar13 + fVar8);
      }
      fVar3 = (fVar23 - param_1[7]) * param_1[8];
      fVar23 = fVar28 * fVar33 * (fVar3 - fVar21) + fVar33 * fVar22 + fVar21;
      fVar2 = fVar30 * fVar22 + fVar33 * (fVar3 - fVar21);
      fVar21 = fVar23 * (float)puVar5 - fVar21;
      fVar22 = fVar2 * (float)puVar5 - fVar22;
      fVar2 = ((fVar26 * (((-(fVar2 * fVar27) + fVar3) - fVar23) * fVar10 +
                         fVar23 * fVar9 + fVar32 * fVar2) + fVar3 * fVar6) * fVar11 + fVar10) *
              fVar12;
      fVar23 = fVar25;
      if ((fVar2 < fVar4) && (fVar23 = fVar29, fVar7 < fVar2)) {
        fVar23 = ((fVar2 * fVar2 + fVar8) * fVar2) / (fVar2 * fVar2 * fVar13 + fVar8);
      }
      pfVar16 = pfVar15 + 1;
      fVar2 = (fVar23 - param_1[9]) * param_1[10];
      fVar23 = ((fVar2 + (float)uVar31) - fVar24) * fVar13;
      uVar31 = (ulonglong)(uint)fVar23;
      *pfVar15 = fVar23 * fVar34;
      pfVar15 = pfVar16;
      fVar23 = fVar1;
      fVar24 = fVar2;
    } while (param_4 + param_6 != pfVar16);
    cVar17 = cVar17 + '\x01';
    *pfVar14 = fVar22;
    pfVar14[1] = fVar21;
    pfVar14[2] = fVar1;
    pfVar14[3] = fVar20;
    *(ulonglong *)(pfVar14 + 4) = (ulonglong)(uint)fVar2;
    *(ulonglong *)(pfVar14 + 5) = uVar31;
    pfVar14 = pfVar14 + 6;
    param_4 = param_5;
  } while (cVar17 != cVar19);
  return;
}


/* NanoCore 1.11, address 0x40068bd0.
 * REA evidence: ev_28ba36b23c4221dea52bfc2cd7cfbcfe380290afc2aa5ce340f70b404b4e0a65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068bd0(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 != (ulonglong *)0x0) {
    memset((int)param_2 + 4,0,0x58);
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_40094664;
    }
    uVar6 = (ulonglong)DAT_ram_40094604;
    uVar1 = (ulonglong)DAT_ram_4009a3e0;
    uVar2 = (ulonglong)DAT_ram_4009a3e4;
    uVar3 = (ulonglong)DAT_ram_4009a3e8;
    uVar4 = (ulonglong)DAT_ram_4009a3ec;
    uVar5 = (ulonglong)DAT_ram_40094634;
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)((int)param_2 + 4) = 1;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar1;
    *(ulonglong *)((int)param_2 + 0x24) = uVar2;
    param_2[4] = uVar3;
    param_2[5] = uVar4;
    param_2[1] = uVar5;
    *(ulonglong *)((int)param_2 + 0xc) = uVar6;
    param_2[2] = uVar6;
    *(ulonglong *)((int)param_2 + 0x14) = uVar6;
    param_2[3] = uVar6;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40068c56.
 * REA evidence: ev_c00db0296030684cfecccab230c99ea6ff56677e11fb722414309db1596a6932
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068c56(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    memset(param_1 + 0x2c,0,0x30);
    uVar2 = (ulonglong)DAT_ram_40094604;
    uVar1 = (ulonglong)DAT_ram_40094634;
    *(ulonglong *)(param_1 + 0xc) = uVar2;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    *(ulonglong *)(param_1 + 0x14) = uVar2;
    *(ulonglong *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40068c92.
 * REA evidence: ev_adb042e24e2b8b5fe602d771a929fcd08d105e1e6367a5da7c37b203e762e868
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40068c92(uint param_1)

{
  return param_1 & -(uint)(param_1 < 4);
}


/* NanoCore 1.11, address 0x40068c9e.
 * REA evidence: ev_19f622490e84bde0df17298759f84f01a7bff20b9be096ed1cfd873d52ec6eba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068c9e(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  if (param_3 < 4) {
    if (param_3 == 2) {
      *param_1 = CONCAT44(DAT_ram_40094608,DAT_ram_40094604);
    }
    else {
      if (param_3 == 3) {
        uVar1 = (ulonglong)DAT_ram_40094634;
        *param_1 = uVar1;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 == 2) {
          return;
        }
        param_1[1] = (ulonglong)DAT_ram_40094604;
        return;
      }
      if (param_3 != 1) goto LAB_ram_40068cd4;
      *param_1 = (ulonglong)DAT_ram_40094634;
    }
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = CONCAT44(DAT_ram_40094608,DAT_ram_40094604);
    }
  }
  else {
LAB_ram_40068cd4:
    uVar1 = CONCAT44(DAT_ram_40094608,DAT_ram_40094604);
    *param_1 = uVar1;
    if (param_2 != 1) {
      *(undefined4 *)((int)param_1 + 4) = 0;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(DAT_ram_40094608,DAT_ram_40094604);
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40068ca4.
 * REA evidence: ev_3b6fa09cddff1e1dc61d777d71ec521aa0490184a8b14f5885c2a244f3f614c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068ca4(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  memset(param_1,0,param_2 << 2);
  if (param_3 < 4) {
    if (param_3 == 2) {
      *param_1 = CONCAT44(DAT_ram_40094608,DAT_ram_40094604);
    }
    else {
      if (param_3 == 3) {
        uVar1 = (ulonglong)DAT_ram_40094634;
        *param_1 = uVar1;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 == 2) {
          return;
        }
        param_1[1] = (ulonglong)DAT_ram_40094604;
        return;
      }
      if (param_3 != 1) goto LAB_ram_40068cd4;
      *param_1 = (ulonglong)DAT_ram_40094634;
    }
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = CONCAT44(DAT_ram_40094608,DAT_ram_40094604);
    }
  }
  else {
LAB_ram_40068cd4:
    uVar1 = CONCAT44(DAT_ram_40094608,DAT_ram_40094604);
    *param_1 = uVar1;
    if (param_2 != 1) {
      *(undefined4 *)((int)param_1 + 4) = 0;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(DAT_ram_40094608,DAT_ram_40094604);
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40068d64.
 * REA evidence: ev_1b851d7f8374037ae60dbd082715a7b124acc78135d6d9f72f97d03d85895b03
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068d64(undefined8 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  float fVar14;
  
  if (param_1 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0x41a) == 0) {
      fVar10 = (float)*param_1;
      if (fVar10 <= DAT_ram_40094604) {
        uVar5 = 0x2c;
        fVar14 = DAT_ram_4009a3f8;
        fVar9 = DAT_ram_4009a3f4;
        fVar1 = DAT_ram_4009a3f0;
        fVar10 = DAT_ram_40094664;
      }
      else {
        fVar14 = fVar10 / DAT_ram_40094e80 + DAT_ram_40094634;
        uVar7 = (uint)(-1 < (int)fVar14) * (int)fVar14;
        uVar4 = 1;
        if (uVar7 != 0) {
          uVar4 = uVar7;
        }
        uVar6 = 0xffff;
        if (uVar7 < 0x10000) {
          uVar6 = uVar4;
        }
        uVar5 = (undefined2)uVar6;
        fVar14 = (float)(uVar6 & 0xffff) / fVar10;
        fVar9 = -fVar14;
        fVar1 = fVar9 / DAT_ram_4009a0b0;
      }
      *(undefined2 *)(param_1 + 0x41a) = uVar5;
      uVar11 = FUN_ram_40000bd8(fVar1);
      fVar1 = DAT_ram_4009a3fc;
      *(undefined4 *)(param_1 + 0x41c) = uVar11;
      uVar11 = FUN_ram_40000bd8(fVar9 / fVar1);
      fVar1 = DAT_ram_40099fa4;
      *(undefined4 *)((int)param_1 + 0x20e4) = uVar11;
      uVar11 = FUN_ram_40000bd8(fVar9 / fVar1);
      fVar1 = DAT_ram_4009a148;
      *(undefined4 *)(param_1 + 0x41d) = uVar11;
      uVar11 = FUN_ram_40000bd8(fVar9 / fVar1);
      fVar1 = DAT_ram_4009a258;
      *(undefined4 *)((int)param_1 + 0x20ec) = uVar11;
      uVar11 = FUN_ram_40000bd8(fVar9 / fVar1);
      fVar1 = DAT_ram_4009a138;
      *(undefined4 *)(param_1 + 0x41e) = uVar11;
      uVar11 = FUN_ram_40000bd8(fVar9 / fVar1);
      *(undefined4 *)((int)param_1 + 0x20f4) = uVar11;
      uVar11 = FUN_ram_40000bd8(fVar9);
      fVar1 = DAT_ram_4009a400;
      *(undefined4 *)(param_1 + 0x41f) = uVar11;
      uVar11 = FUN_ram_40000bd8(fVar9 / fVar1);
      fVar1 = DAT_ram_4009a404;
      *(undefined4 *)((int)param_1 + 0x20fc) = uVar11;
      uVar11 = FUN_ram_40000bd8(fVar9 / fVar1);
      fVar9 = DAT_ram_4009a3cc;
      *(undefined4 *)(param_1 + 0x420) = uVar11;
      uVar11 = DAT_ram_4009a408;
      uVar5 = 0;
      if (0.0 <= fVar9 / fVar14) {
        fVar9 = fVar9 / fVar14 + DAT_ram_40094634;
        uVar7 = (uint)(-1 < (int)fVar9) * (int)fVar9;
        if (0xffff < uVar7) {
          uVar7 = 0xffff;
        }
        uVar5 = (undefined2)uVar7;
      }
      uVar8 = 0;
      if (0.0 <= DAT_ram_40094ee8 / fVar14) {
        fVar14 = DAT_ram_40094ee8 / fVar14 + DAT_ram_40094634;
        uVar7 = (uint)(-1 < (int)fVar14) * (int)fVar14;
        if (0xffff < uVar7) {
          uVar7 = 0xffff;
        }
        uVar8 = (undefined2)uVar7;
      }
      fVar14 = DAT_ram_4009a40c / fVar10;
      *(undefined2 *)((int)param_1 + 0x20d2) = uVar5;
      *(undefined4 *)((int)param_1 + 0x2104) = uVar11;
      *(undefined2 *)((int)param_1 + 0x20d4) = uVar8;
      *(undefined4 *)(param_1 + 0x421) = 0;
      uVar11 = FUN_ram_40000bd8(fVar14);
      fVar14 = DAT_ram_4009a410;
      *(undefined4 *)(param_1 + 0x41b) = uVar11;
      uVar11 = FUN_ram_40000bd8(fVar14 / fVar10);
      *(undefined4 *)((int)param_1 + 0x20dc) = uVar11;
    }
    uVar2 = DAT_ram_4009a414;
    uVar11 = DAT_ram_40094e90;
    uVar13 = (ulonglong)DAT_ram_40099f9c;
    *(ulonglong *)((int)param_1 + 0x4c) = uVar13;
    uVar3 = DAT_ram_4009a170;
    param_1[10] = uVar13;
    *(undefined4 *)(param_1 + 0xe) = uVar3;
    *(undefined1 *)((int)param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    *(undefined2 *)((int)param_1 + 0x74) = 0;
    uVar12 = FUN_ram_40000d44(uVar11,uVar2);
    uVar13 = (ulonglong)DAT_ram_4009a418;
    uVar11 = *(undefined4 *)((int)param_1 + 0x2104);
    *(ulonglong *)((int)param_1 + 0x54) = uVar13;
    *(undefined8 *)((int)param_1 + 0x5c) = uVar12;
    param_1[0xb] = uVar13;
    param_1[0xc] = uVar12;
    *(undefined1 *)(param_1 + 0x427) = 0;
    uVar2 = DAT_ram_40095280;
    *(undefined4 *)((int)param_1 + 0x212c) = uVar3;
    *(undefined4 *)((int)param_1 + 0x210c) = 0;
    *(undefined4 *)(param_1 + 0x422) = 0;
    *(undefined4 *)((int)param_1 + 0x2114) = 0;
    *(undefined4 *)(param_1 + 0x423) = 0;
    *(undefined4 *)((int)param_1 + 0x211c) = 0;
    *(undefined4 *)(param_1 + 0x424) = uVar2;
    *(undefined4 *)((int)param_1 + 0x2124) = 0;
    *(undefined4 *)(param_1 + 0x425) = 0;
    *(undefined4 *)((int)param_1 + 0x2134) = 0;
    *(undefined4 *)((int)param_1 + 0x213c) = uVar11;
    *(undefined4 *)(param_1 + 0x428) = uVar11;
    *(undefined4 *)((int)param_1 + 0x2144) = uVar11;
    *(undefined2 *)(param_1 + 0x426) = 0;
    FUN_ram_4006015c(param_1 + 0x40f);
    return;
  }
  return;
}


