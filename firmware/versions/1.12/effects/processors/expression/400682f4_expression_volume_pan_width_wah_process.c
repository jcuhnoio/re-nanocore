/* NanoCore 1.12: expression_volume_pan_width_wah_process at 0x400682f4.
 * Role: Runtime dispatch accepts only subtypes0..3, copies inputs then gain/balance/mid-side/Wah processing.
 * REA: ev_d8510ba486923e2c8f2657e6d2592a640885adaa3435f68a4a790bbbb1013910
 * Source: analysis/rea-1.12/results/03505-export-0x400682f4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void expression_volume_pan_width_wah_process(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
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

