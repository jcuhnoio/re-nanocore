/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40065000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40065caa.
 * REA evidence: ev_0097627088d42120e9a94b930cc57cfa9c24ba1cd98210cdc2ad32a124a2bf29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40065caa(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 != (ulonglong *)0x0) {
    memset((void *)((int)param_2 + 4),0,0x58);
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_40092878;
    }
    uVar6 = (ulonglong)DAT_ram_4009281c;
    uVar1 = (ulonglong)DAT_ram_400984c0;
    uVar2 = (ulonglong)DAT_ram_400984c4;
    uVar3 = (ulonglong)DAT_ram_400984c8;
    uVar4 = (ulonglong)DAT_ram_400984cc;
    uVar5 = (ulonglong)DAT_ram_40092864;
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


/* NanoCore 1.10, address 0x40065d30.
 * REA evidence: ev_2965bfc3cedba1c3ccd67d71ef69b6da04b6e24036ac7dfa5656b6ec53cf19aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40065d30(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    memset((void *)(param_1 + 0x2c),0,0x30);
    uVar2 = (ulonglong)DAT_ram_4009281c;
    uVar1 = (ulonglong)DAT_ram_40092864;
    *(ulonglong *)(param_1 + 0xc) = uVar2;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    *(ulonglong *)(param_1 + 0x14) = uVar2;
    *(ulonglong *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40065d6c.
 * REA evidence: ev_79e99f1492c650dee02fbb1b79d3dc851e17ccebf5d84f3cff851345487b9e1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40065d6c(uint param_1)

{
  return param_1 & -(uint)(param_1 < 4);
}


/* NanoCore 1.10, address 0x40065d78.
 * REA evidence: ev_67248884473f901a23b4bd867ebaffb2566ac4eccd5e8ca1a64c3820e3ccd437
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40065d78(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  if (param_3 < 4) {
    if (param_3 == 2) {
      *param_1 = CONCAT44(DAT_ram_40092820,DAT_ram_4009281c);
    }
    else {
      if (param_3 == 3) {
        uVar1 = (ulonglong)DAT_ram_40092864;
        *param_1 = uVar1;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 == 2) {
          return;
        }
        param_1[1] = (ulonglong)DAT_ram_4009281c;
        return;
      }
      if (param_3 != 1) goto LAB_ram_40065dae;
      *param_1 = (ulonglong)DAT_ram_40092864;
    }
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = CONCAT44(DAT_ram_40092820,DAT_ram_4009281c);
    }
  }
  else {
LAB_ram_40065dae:
    uVar1 = CONCAT44(DAT_ram_40092820,DAT_ram_4009281c);
    *param_1 = uVar1;
    if (param_2 != 1) {
      *(undefined4 *)((int)param_1 + 4) = 0;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(DAT_ram_40092820,DAT_ram_4009281c);
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40065d7e.
 * REA evidence: ev_4c468d9b019754d4fab2caeb63aa86df52a1b60ce7c5f8c992b26a06a9c8e251
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40065d7e(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  memset(param_1,0,param_2 << 2);
  if (param_3 < 4) {
    if (param_3 == 2) {
      *param_1 = CONCAT44(DAT_ram_40092820,DAT_ram_4009281c);
    }
    else {
      if (param_3 == 3) {
        uVar1 = (ulonglong)DAT_ram_40092864;
        *param_1 = uVar1;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 == 2) {
          return;
        }
        param_1[1] = (ulonglong)DAT_ram_4009281c;
        return;
      }
      if (param_3 != 1) goto LAB_ram_40065dae;
      *param_1 = (ulonglong)DAT_ram_40092864;
    }
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = CONCAT44(DAT_ram_40092820,DAT_ram_4009281c);
    }
  }
  else {
LAB_ram_40065dae:
    uVar1 = CONCAT44(DAT_ram_40092820,DAT_ram_4009281c);
    *param_1 = uVar1;
    if (param_2 != 1) {
      *(undefined4 *)((int)param_1 + 4) = 0;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(DAT_ram_40092820,DAT_ram_4009281c);
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40065e34.
 * REA evidence: ev_90b88fc91be3258fab48520a84b3880daf328d95e718c6bed424ed077e7d11e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40065e34(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
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
    FUN_ram_4000305c(param_4,param_2,param_6 << 2);
  }
  if ((((param_9 != '\0') && (param_5 != (float *)0x0)) && (param_3 != (float *)0x0)) &&
     (param_5 != param_3)) {
    FUN_ram_4000305c(param_5,param_3,param_6 << 2);
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
    if (param_8 != uVar18) goto LAB_ram_40065ed8;
  }
  else {
    if (uVar18 == 0) {
      fVar29 = *param_1;
      fVar30 = *param_7;
      goto LAB_ram_4006631c;
    }
    param_8 = 0;
LAB_ram_40065ed8:
    memset(param_1 + 0xb,0,0x30);
    fVar29 = DAT_ram_40092864;
    fVar30 = DAT_ram_4009281c;
    *(char *)((int)param_1 + 5) = (char)param_8;
    param_1[3] = fVar30;
    param_1[2] = fVar29;
    param_1[4] = fVar30;
    param_1[5] = fVar30;
    param_1[6] = fVar30;
    uVar18 = param_8;
  }
  fVar25 = DAT_ram_4009281c;
  fVar30 = *param_7;
  fVar29 = *param_1;
  if (uVar18 == 2) {
    if (fVar30 < 0.0) {
      fVar30 = 0.0;
    }
    else if (DAT_ram_4009281c < fVar30) {
      fVar30 = DAT_ram_4009281c;
    }
    fVar32 = param_7[1];
    if (fVar32 < 0.0) {
      fVar32 = 0.0;
    }
    else if (DAT_ram_4009281c < fVar32) {
      fVar32 = DAT_ram_4009281c;
    }
    if (0.0 < fVar29) {
      fVar29 = (float)FUN_ram_40000c0e(DAT_ram_400984d8 / (fVar29 * DAT_ram_4009284c));
      fVar25 = fVar25 - fVar29;
    }
    fVar34 = DAT_ram_40092864;
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
      else if (DAT_ram_4009281c < fVar30) {
        fVar30 = DAT_ram_4009281c;
      }
      fVar32 = param_7[1];
      if (fVar32 < 0.0) {
        fVar32 = 0.0;
      }
      else if (DAT_ram_4009281c < fVar32) {
        fVar32 = DAT_ram_4009281c;
      }
      if (0.0 < fVar29) {
        fVar29 = (float)FUN_ram_40000c0e(DAT_ram_400984d8 / (fVar29 * DAT_ram_4009284c));
        fVar25 = fVar25 - fVar29;
      }
      if ((param_9 != '\0') && (param_5 != (float *)0x0)) {
        fVar29 = fVar32;
        if (fVar30 <= DAT_ram_40092864) {
          if (fVar30 < DAT_ram_40092864) {
            fVar29 = (float)FUN_ram_40000786((DAT_ram_40092864 - fVar30) * DAT_ram_400984dc);
            fVar29 = fVar32 * fVar29;
          }
        }
        else {
          fVar30 = (float)FUN_ram_40000786((fVar30 - DAT_ram_40092864) * DAT_ram_400984dc);
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
LAB_ram_4006631c:
    fVar25 = DAT_ram_4009281c;
    if (fVar30 < 0.0) {
      fVar30 = 0.0;
    }
    else if (DAT_ram_4009281c < fVar30) {
      fVar30 = DAT_ram_4009281c;
    }
    fVar32 = param_7[1];
    if (fVar32 < 0.0) {
      fVar32 = 0.0;
    }
    else if (DAT_ram_4009281c < fVar32) {
      fVar32 = DAT_ram_4009281c;
    }
    fVar34 = param_7[2];
    if (fVar34 < 0.0) {
      fVar34 = 0.0;
    }
    else if (DAT_ram_4009281c < fVar34) {
      fVar34 = DAT_ram_4009281c;
    }
    fVar26 = param_7[3];
    if (fVar26 < 0.0) {
      fVar26 = 0.0;
    }
    else if (DAT_ram_4009281c < fVar26) {
      fVar26 = DAT_ram_4009281c;
    }
    fVar26 = ((fVar34 - fVar32) * fVar30 + fVar32) * fVar26;
    if (0.0 < fVar29) {
      fVar30 = (float)FUN_ram_40000c0e(DAT_ram_400984d8 / (fVar29 * DAT_ram_4009284c));
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
  else if (DAT_ram_4009281c < fVar30) {
    fVar30 = DAT_ram_4009281c;
  }
  fVar32 = param_7[1];
  if (fVar32 < 0.0) {
    fVar32 = 0.0;
  }
  else if (DAT_ram_4009281c < fVar32) {
    fVar32 = DAT_ram_4009281c;
  }
  fVar34 = param_7[2];
  if (fVar34 < 0.0) {
    fVar34 = 0.0;
  }
  else if (DAT_ram_4009281c < fVar34) {
    fVar34 = DAT_ram_4009281c;
  }
  fVar26 = 0.0;
  if (0.0 < fVar29) {
    fVar26 = (float)FUN_ram_40000c0e(DAT_ram_400984d8 / (fVar29 * DAT_ram_40093494));
    fVar26 = fVar25 - (fVar25 - fVar26);
  }
  fVar26 = (float)FUN_ram_40000d54(fVar26,(float)param_6);
  fVar30 = (fVar25 - fVar26) * (fVar30 - param_1[2]) + param_1[2];
  param_1[2] = fVar30;
  if (fVar30 < 0.0) {
    fVar26 = 0.0;
LAB_ram_40066686:
    fVar30 = fVar26;
    fVar26 = (float)FUN_ram_40000d54(fVar30,_DAT_ram_400984e0);
    fVar27 = (float)FUN_ram_40000c0e(fVar26 * DAT_ram_400984e4);
    fVar27 = fVar27 * DAT_ram_400984e8;
    fVar26 = fVar30 * DAT_ram_400984ec + DAT_ram_400984f0;
    if (0.0 <= fVar32) {
LAB_ram_40066022:
      fVar33 = DAT_ram_400980bc;
      if (fVar32 <= fVar25) {
        fVar33 = fVar32 + DAT_ram_40092864;
      }
      goto LAB_ram_40066036;
    }
    fVar26 = fVar26 * DAT_ram_40092864;
  }
  else {
    fVar26 = fVar25;
    if (fVar25 < fVar30) goto LAB_ram_40066686;
    fVar26 = (float)FUN_ram_40000d54(fVar30,_DAT_ram_400984e0);
    fVar27 = (float)FUN_ram_40000c0e(fVar26 * DAT_ram_400984e4);
    fVar27 = fVar27 * DAT_ram_400984e8;
    fVar26 = fVar30 * DAT_ram_400984ec + DAT_ram_400984f0;
    fVar33 = DAT_ram_40092864;
    if (0.0 <= fVar32) goto LAB_ram_40066022;
LAB_ram_40066036:
    fVar26 = fVar26 * fVar33;
    fVar32 = DAT_ram_400984d0;
    if (fVar27 < DAT_ram_4009424c) goto LAB_ram_4006606a;
  }
  if (fVar29 * DAT_ram_400982bc < fVar27) {
    fVar32 = fVar29 * DAT_ram_400982bc * DAT_ram_400984dc;
  }
  else {
    fVar32 = fVar27 * DAT_ram_400984dc;
  }
LAB_ram_4006606a:
  fVar27 = DAT_ram_400984d4;
  if (DAT_ram_40098288 <= fVar26) {
    fVar27 = fVar25 / fVar26;
  }
  fVar28 = (float)FUN_ram_40000a84(fVar32 / fVar29);
  fVar32 = (fVar25 - fVar30) * DAT_ram_40092824 + DAT_ram_400984f4;
  fVar26 = fVar30 * DAT_ram_400984f8 + DAT_ram_400984fc;
  fVar30 = fVar25 / (fVar28 * (fVar28 + fVar27) + fVar25);
  FUN_ram_40000c0e(DAT_ram_40098500 / fVar29);
  fVar33 = fVar28 * fVar30;
  fVar13 = in_register_00000100;
  FUN_ram_40000c0e(DAT_ram_40098504 / fVar29);
  fVar12 = DAT_ram_4009851c;
  fVar11 = DAT_ram_40098518;
  fVar10 = DAT_ram_40098514;
  fVar9 = DAT_ram_40098510;
  fVar8 = DAT_ram_400983a4._4_4_;
  fVar7 = DAT_ram_40098108;
  fVar6 = DAT_ram_400930f4;
  puVar5 = PTR_firmware_entry_ram_40092830;
  fVar4 = DAT_ram_4009282c;
  fVar29 = DAT_ram_40092818;
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


