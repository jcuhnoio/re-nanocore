/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40068000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400682f4.
 * REA evidence: ev_d8510ba486923e2c8f2657e6d2592a640885adaa3435f68a4a790bbbb1013910
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400682f4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
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
    FUN_ram_4000303c(param_4,param_2,param_6 << 2);
  }
  if ((((param_9 != '\0') && (param_5 != (float *)0x0)) && (param_3 != (float *)0x0)) &&
     (param_5 != param_3)) {
    FUN_ram_4000303c(param_5,param_3,param_6 << 2);
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
    if (param_8 != uVar18) goto LAB_ram_40068398;
  }
  else {
    if (uVar18 == 0) {
      fVar29 = *param_1;
      fVar30 = *param_7;
      goto LAB_ram_400687dc;
    }
    param_8 = 0;
LAB_ram_40068398:
    memset(param_1 + 0xb,0,0x30);
    fVar29 = DAT_ram_4009675c;
    fVar30 = DAT_ram_4009672c;
    *(char *)((int)param_1 + 5) = (char)param_8;
    param_1[3] = fVar30;
    param_1[2] = fVar29;
    param_1[4] = fVar30;
    param_1[5] = fVar30;
    param_1[6] = fVar30;
    uVar18 = param_8;
  }
  fVar25 = DAT_ram_4009672c;
  fVar30 = *param_7;
  fVar29 = *param_1;
  if (uVar18 == 2) {
    if (fVar30 < 0.0) {
      fVar30 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar30) {
      fVar30 = DAT_ram_4009672c;
    }
    fVar32 = param_7[1];
    if (fVar32 < 0.0) {
      fVar32 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar32) {
      fVar32 = DAT_ram_4009672c;
    }
    if (0.0 < fVar29) {
      fVar29 = (float)FUN_ram_40000bd8(DAT_ram_4009f4b8 / (fVar29 * DAT_ram_40096764));
      fVar25 = fVar25 - fVar29;
    }
    fVar34 = DAT_ram_4009675c;
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
      else if (DAT_ram_4009672c < fVar30) {
        fVar30 = DAT_ram_4009672c;
      }
      fVar32 = param_7[1];
      if (fVar32 < 0.0) {
        fVar32 = 0.0;
      }
      else if (DAT_ram_4009672c < fVar32) {
        fVar32 = DAT_ram_4009672c;
      }
      if (0.0 < fVar29) {
        fVar29 = (float)FUN_ram_40000bd8(DAT_ram_4009f4b8 / (fVar29 * DAT_ram_40096764));
        fVar25 = fVar25 - fVar29;
      }
      if ((param_9 != '\0') && (param_5 != (float *)0x0)) {
        fVar29 = fVar32;
        if (fVar30 <= DAT_ram_4009675c) {
          if (fVar30 < DAT_ram_4009675c) {
            fVar29 = (float)FUN_ram_40000712((DAT_ram_4009675c - fVar30) * DAT_ram_4009f4bc);
            fVar29 = fVar32 * fVar29;
          }
        }
        else {
          fVar30 = (float)FUN_ram_40000712((fVar30 - DAT_ram_4009675c) * DAT_ram_4009f4bc);
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
LAB_ram_400687dc:
    fVar25 = DAT_ram_4009672c;
    if (fVar30 < 0.0) {
      fVar30 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar30) {
      fVar30 = DAT_ram_4009672c;
    }
    fVar32 = param_7[1];
    if (fVar32 < 0.0) {
      fVar32 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar32) {
      fVar32 = DAT_ram_4009672c;
    }
    fVar34 = param_7[2];
    if (fVar34 < 0.0) {
      fVar34 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar34) {
      fVar34 = DAT_ram_4009672c;
    }
    fVar26 = param_7[3];
    if (fVar26 < 0.0) {
      fVar26 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar26) {
      fVar26 = DAT_ram_4009672c;
    }
    fVar26 = ((fVar34 - fVar32) * fVar30 + fVar32) * fVar26;
    if (0.0 < fVar29) {
      fVar30 = (float)FUN_ram_40000bd8(DAT_ram_4009f4b8 / (fVar29 * DAT_ram_40096764));
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
  else if (DAT_ram_4009672c < fVar30) {
    fVar30 = DAT_ram_4009672c;
  }
  fVar32 = param_7[1];
  if (fVar32 < 0.0) {
    fVar32 = 0.0;
  }
  else if (DAT_ram_4009672c < fVar32) {
    fVar32 = DAT_ram_4009672c;
  }
  fVar34 = param_7[2];
  if (fVar34 < 0.0) {
    fVar34 = 0.0;
  }
  else if (DAT_ram_4009672c < fVar34) {
    fVar34 = DAT_ram_4009672c;
  }
  fVar26 = 0.0;
  if (0.0 < fVar29) {
    fVar26 = (float)FUN_ram_40000bd8(DAT_ram_4009f4b8 / (fVar29 * DAT_ram_4009a330));
    fVar26 = fVar25 - (fVar25 - fVar26);
  }
  fVar26 = (float)FUN_ram_40000d44(fVar26,(float)param_6);
  fVar30 = (fVar25 - fVar26) * (fVar30 - param_1[2]) + param_1[2];
  param_1[2] = fVar30;
  if (fVar30 < 0.0) {
    fVar26 = 0.0;
LAB_ram_40068b46:
    fVar30 = fVar26;
    fVar26 = (float)FUN_ram_40000d44(fVar30,DAT_ram_4009f4c0);
    fVar27 = (float)FUN_ram_40000bd8(fVar26 * DAT_ram_4009f4c4);
    fVar27 = fVar27 * DAT_ram_4009f4c8;
    fVar26 = fVar30 * DAT_ram_4009f4cc + DAT_ram_4009f4d0;
    if (0.0 <= fVar32) {
LAB_ram_400684e2:
      fVar33 = DAT_ram_4009f060;
      if (fVar32 <= fVar25) {
        fVar33 = fVar32 + DAT_ram_4009675c;
      }
      goto LAB_ram_400684f6;
    }
    fVar26 = fVar26 * DAT_ram_4009675c;
  }
  else {
    fVar26 = fVar25;
    if (fVar25 < fVar30) goto LAB_ram_40068b46;
    fVar26 = (float)FUN_ram_40000d44(fVar30,DAT_ram_4009f4c0);
    fVar27 = (float)FUN_ram_40000bd8(fVar26 * DAT_ram_4009f4c4);
    fVar27 = fVar27 * DAT_ram_4009f4c8;
    fVar26 = fVar30 * DAT_ram_4009f4cc + DAT_ram_4009f4d0;
    fVar33 = DAT_ram_4009675c;
    if (0.0 <= fVar32) goto LAB_ram_400684e2;
LAB_ram_400684f6:
    fVar26 = fVar26 * fVar33;
    fVar32 = DAT_ram_4009f4b0;
    if (fVar27 < DAT_ram_4009b1a4) goto LAB_ram_4006852a;
  }
  if (fVar29 * DAT_ram_4009f24c < fVar27) {
    fVar32 = fVar29 * DAT_ram_4009f24c * DAT_ram_4009f4bc;
  }
  else {
    fVar32 = fVar27 * DAT_ram_4009f4bc;
  }
LAB_ram_4006852a:
  fVar27 = DAT_ram_4009f4b4;
  if (DAT_ram_4009f230 <= fVar26) {
    fVar27 = fVar25 / fVar26;
  }
  fVar28 = (float)FUN_ram_40000a4e(fVar32 / fVar29);
  fVar32 = (fVar25 - fVar30) * DAT_ram_40096734 + DAT_ram_4009f4d4;
  fVar26 = fVar30 * DAT_ram_4009f4d8 + DAT_ram_4009f4dc;
  fVar30 = fVar25 / (fVar28 * (fVar28 + fVar27) + fVar25);
  FUN_ram_40000bd8(DAT_ram_4009f4e0 / fVar29);
  fVar33 = fVar28 * fVar30;
  fVar13 = in_register_00000100;
  FUN_ram_40000bd8(DAT_ram_4009f4e4 / fVar29);
  fVar12 = DAT_ram_4009f4fc;
  fVar11 = DAT_ram_4009f4f8;
  fVar10 = DAT_ram_4009f4f4;
  fVar9 = DAT_ram_4009f4f0;
  fVar8 = DAT_ram_4009f324._4_4_;
  fVar7 = DAT_ram_4009f0b0;
  fVar6 = DAT_ram_40099f88;
  puVar5 = PTR_entry_ram_40096740;
  fVar4 = DAT_ram_4009673c;
  fVar29 = DAT_ram_40096728;
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


/* NanoCore 1.12, address 0x40068c0c.
 * REA evidence: ev_9fde6a334572144f35cf54a9faf3f36019764d367de24685df61b49a3d27aae9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068c0c(float param_1,ulonglong *param_2)

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
      param_1 = DAT_ram_4009678c;
    }
    uVar6 = (ulonglong)DAT_ram_4009672c;
    uVar1 = (ulonglong)DAT_ram_4009f500;
    uVar2 = (ulonglong)DAT_ram_4009f504;
    uVar3 = (ulonglong)DAT_ram_4009f508;
    uVar4 = (ulonglong)DAT_ram_4009f50c;
    uVar5 = (ulonglong)DAT_ram_4009675c;
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


/* NanoCore 1.12, address 0x40068c92.
 * REA evidence: ev_7fc7d1df9c4045787e0efa4c00a36d6169b6d76eff618554faa00a293ceddf0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068c92(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    memset(param_1 + 0x2c,0,0x30);
    uVar2 = (ulonglong)DAT_ram_4009672c;
    uVar1 = (ulonglong)DAT_ram_4009675c;
    *(ulonglong *)(param_1 + 0xc) = uVar2;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    *(ulonglong *)(param_1 + 0x14) = uVar2;
    *(ulonglong *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40068cce.
 * REA evidence: ev_25387a1bc99cadf55734b97b8dbc5367c4395fcb209350f547219fc7378a664e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40068cce(uint param_1)

{
  return param_1 & -(uint)(param_1 < 4);
}


/* NanoCore 1.12, address 0x40068cda.
 * REA evidence: ev_4191fe90e0cfc89e375ede76ca5b499388d9eb50eeb8807d9a6bbbd321fda9ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068cda(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  if (param_3 < 4) {
    if (param_3 == 2) {
      *param_1 = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    }
    else {
      if (param_3 == 3) {
        uVar1 = (ulonglong)DAT_ram_4009675c;
        *param_1 = uVar1;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 == 2) {
          return;
        }
        param_1[1] = (ulonglong)DAT_ram_4009672c;
        return;
      }
      if (param_3 != 1) goto LAB_ram_40068d10;
      *param_1 = (ulonglong)DAT_ram_4009675c;
    }
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    }
  }
  else {
LAB_ram_40068d10:
    uVar1 = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    *param_1 = uVar1;
    if (param_2 != 1) {
      *(undefined4 *)((int)param_1 + 4) = 0;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40068ce0.
 * REA evidence: ev_bfe57fe5d01418d25df688fe87f87cc4726a8aadd5362d3a60c36f6cd86dae28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068ce0(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  memset(param_1,0,param_2 << 2);
  if (param_3 < 4) {
    if (param_3 == 2) {
      *param_1 = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    }
    else {
      if (param_3 == 3) {
        uVar1 = (ulonglong)DAT_ram_4009675c;
        *param_1 = uVar1;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 == 2) {
          return;
        }
        param_1[1] = (ulonglong)DAT_ram_4009672c;
        return;
      }
      if (param_3 != 1) goto LAB_ram_40068d10;
      *param_1 = (ulonglong)DAT_ram_4009675c;
    }
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    }
  }
  else {
LAB_ram_40068d10:
    uVar1 = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    *param_1 = uVar1;
    if (param_2 != 1) {
      *(undefined4 *)((int)param_1 + 4) = 0;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40068da0.
 * REA evidence: ev_7747559710c0284ff26f94abb6f228a3fd97858aef769a90ce8fd01fb23ace83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068da0(undefined8 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  float fVar15;
  
  if (param_1 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0x41a) == 0) {
      fVar11 = (float)*param_1;
      if (fVar11 <= DAT_ram_4009672c) {
        uVar6 = 0x2c;
        fVar15 = DAT_ram_4009f518;
        fVar10 = DAT_ram_4009f514;
        fVar1 = DAT_ram_4009f510;
        fVar11 = DAT_ram_4009678c;
      }
      else {
        fVar15 = fVar11 / DAT_ram_40099f28 + DAT_ram_4009675c;
        uVar8 = (uint)(-1 < (int)fVar15) * (int)fVar15;
        uVar5 = 1;
        if (uVar8 != 0) {
          uVar5 = uVar8;
        }
        uVar7 = 0xffff;
        if (uVar8 < 0x10000) {
          uVar7 = uVar5;
        }
        uVar6 = (undefined2)uVar7;
        fVar15 = (float)(uVar7 & 0xffff) / fVar11;
        fVar10 = -fVar15;
        fVar1 = fVar10 / DAT_ram_4009f1d0;
      }
      *(undefined2 *)(param_1 + 0x41a) = uVar6;
      uVar12 = FUN_ram_40000bd8(fVar1);
      fVar3 = DAT_ram_4009f268;
      *(undefined4 *)(param_1 + 0x41c) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar3);
      fVar1 = DAT_ram_4009f0ac;
      *(undefined4 *)((int)param_1 + 0x20e4) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      *(undefined4 *)(param_1 + 0x41d) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar3);
      fVar1 = DAT_ram_4009f378;
      *(undefined4 *)((int)param_1 + 0x20ec) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      fVar1 = DAT_ram_4009f258;
      *(undefined4 *)(param_1 + 0x41e) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      *(undefined4 *)((int)param_1 + 0x20f4) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10);
      fVar1 = DAT_ram_4009f51c;
      *(undefined4 *)(param_1 + 0x41f) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      fVar1 = DAT_ram_4009f520;
      *(undefined4 *)((int)param_1 + 0x20fc) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      fVar10 = DAT_ram_4009f4ec;
      *(undefined4 *)(param_1 + 0x420) = uVar12;
      uVar12 = DAT_ram_4009f524;
      uVar6 = 0;
      if (0.0 <= fVar10 / fVar15) {
        fVar10 = fVar10 / fVar15 + DAT_ram_4009675c;
        uVar8 = (uint)(-1 < (int)fVar10) * (int)fVar10;
        if (0xffff < uVar8) {
          uVar8 = 0xffff;
        }
        uVar6 = (undefined2)uVar8;
      }
      uVar9 = 0;
      if (0.0 <= DAT_ram_40099f90 / fVar15) {
        fVar15 = DAT_ram_40099f90 / fVar15 + DAT_ram_4009675c;
        uVar8 = (uint)(-1 < (int)fVar15) * (int)fVar15;
        if (0xffff < uVar8) {
          uVar8 = 0xffff;
        }
        uVar9 = (undefined2)uVar8;
      }
      fVar15 = DAT_ram_4009f528 / fVar11;
      *(undefined2 *)((int)param_1 + 0x20d2) = uVar6;
      *(undefined4 *)((int)param_1 + 0x2104) = uVar12;
      *(undefined2 *)((int)param_1 + 0x20d4) = uVar9;
      *(undefined4 *)(param_1 + 0x421) = 0;
      uVar12 = FUN_ram_40000bd8(fVar15);
      fVar15 = DAT_ram_4009f52c;
      *(undefined4 *)(param_1 + 0x41b) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar15 / fVar11);
      *(undefined4 *)((int)param_1 + 0x20dc) = uVar12;
    }
    uVar2 = DAT_ram_4009f530;
    uVar12 = DAT_ram_40099f38;
    uVar14 = (ulonglong)DAT_ram_4009f098;
    *(ulonglong *)((int)param_1 + 0x4c) = uVar14;
    uVar4 = DAT_ram_4009f290;
    param_1[10] = uVar14;
    *(undefined4 *)(param_1 + 0xe) = uVar4;
    *(undefined1 *)((int)param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    *(undefined2 *)((int)param_1 + 0x74) = 0;
    uVar13 = FUN_ram_40000d44(uVar12,uVar2);
    uVar14 = (ulonglong)DAT_ram_4009f534;
    uVar12 = *(undefined4 *)((int)param_1 + 0x2104);
    *(ulonglong *)((int)param_1 + 0x54) = uVar14;
    *(undefined8 *)((int)param_1 + 0x5c) = uVar13;
    param_1[0xb] = uVar14;
    param_1[0xc] = uVar13;
    *(undefined1 *)(param_1 + 0x427) = 0;
    uVar2 = DAT_ram_4009a330;
    *(undefined4 *)((int)param_1 + 0x212c) = uVar4;
    *(undefined4 *)((int)param_1 + 0x210c) = 0;
    *(undefined4 *)(param_1 + 0x422) = 0;
    *(undefined4 *)((int)param_1 + 0x2114) = 0;
    *(undefined4 *)(param_1 + 0x423) = 0;
    *(undefined4 *)((int)param_1 + 0x211c) = 0;
    *(undefined4 *)(param_1 + 0x424) = uVar2;
    *(undefined4 *)((int)param_1 + 0x2124) = 0;
    *(undefined4 *)(param_1 + 0x425) = 0;
    *(undefined4 *)((int)param_1 + 0x2134) = 0;
    *(undefined4 *)((int)param_1 + 0x213c) = uVar12;
    *(undefined4 *)(param_1 + 0x428) = uVar12;
    *(undefined4 *)((int)param_1 + 0x2144) = uVar12;
    *(undefined2 *)(param_1 + 0x426) = 0;
    FUN_ram_4005ff48(param_1 + 0x40f);
    return;
  }
  return;
}


