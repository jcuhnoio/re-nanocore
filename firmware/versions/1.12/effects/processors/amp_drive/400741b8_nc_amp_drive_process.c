/* NanoCore 1.12: nc_amp_drive_process at 0x400741b8.
 * Role: Shared AMP/drive callback with three-control mode, model processing, optional external EQ and crossfade.
 * REA: ev_ad56b9d10bc26ebeeb0312839033d6aceb1a72336054063587a600fd544fd8cc
 * Source: analysis/rea-1.12/results/03560-export-0x400741b8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_amp_drive_process(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     uint param_6,float *param_7,int param_8,char param_9,int param_10)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0';
  }
  if (param_1 == (int *)0x0) {
LAB_ram_400745ba:
    if (param_2 != param_4) {
      FUN_ram_4000303c(param_4,param_2,param_6 << 2);
    }
    if ((((param_9 != '\0') && (param_3 != (float *)0x0)) && (param_5 != (float *)0x0)) &&
       (param_3 != param_5)) {
      FUN_ram_4000303c(param_5,param_3,param_6 << 2);
      return;
    }
    return;
  }
  pfVar2 = param_3;
  if ((0x80 < param_6) || ((param_1[0x23] == 0 && (DAT_ram_4009f124 <= (float)param_1[0x21])))) {
    bVar1 = false;
    pfVar7 = param_2;
  }
  else {
    pfVar7 = (float *)(param_1 + 0x24);
    FUN_ram_4000303c(pfVar7,param_2,param_6 << 2);
    if (param_9 == '\0') {
      bVar1 = true;
    }
    else if (param_3 == (float *)0x0) {
      bVar1 = true;
      pfVar2 = (float *)0x0;
    }
    else {
      FUN_ram_4000303c(param_1 + 0xa4,param_3,param_6 << 2);
      bVar1 = true;
      pfVar2 = (float *)(param_1 + 0xa4);
    }
  }
  if (*param_1 == 0) goto LAB_ram_400745ba;
  if ((((char *)param_1[1] == (char *)0x0) || (*(char *)param_1[1] == '\0')) ||
     (iVar3 = nc_model_is_ready(), fVar10 = DAT_ram_4009675c, iVar3 == 0)) {
    if (param_2 != param_4) {
      FUN_ram_4000303c(param_4,param_2,param_6 << 2);
    }
    if (param_9 == '\0') {
      iVar3 = param_1[0x23];
      fVar10 = (float)param_1[0x21];
      if ((iVar3 == 0) && (ABS(fVar10 - DAT_ram_4009672c) <= DAT_ram_40096748)) {
        return;
      }
      fVar11 = (float)param_1[0x22];
      pfVar2 = param_4;
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar11;
            fVar11 = 0.0;
            fVar10 = fVar11;
            if (bVar1) {
              fVar10 = DAT_ram_4009672c;
            }
          }
          else {
            fVar10 = fVar10 + fVar11;
          }
        }
        fVar18 = *pfVar7;
        pfVar4 = pfVar2 + 1;
        pfVar7 = pfVar7 + 1;
        *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar18) * fVar10 + fVar18;
        pfVar2 = pfVar4;
      } while (param_4 + param_6 != pfVar4);
    }
    else {
      if (((param_3 != (float *)0x0) && (param_5 != (float *)0x0)) && (param_3 != param_5)) {
        FUN_ram_4000303c(param_5,param_3,param_6 << 2);
      }
      iVar3 = param_1[0x23];
      fVar10 = (float)param_1[0x21];
      if ((iVar3 == 0) && (ABS(fVar10 - DAT_ram_4009672c) <= DAT_ram_40096748)) {
        return;
      }
      fVar11 = (float)param_1[0x22];
      if (pfVar2 == (float *)0x0) {
        pfVar2 = param_4;
        do {
          if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              bVar1 = 0.0 <= fVar11;
              fVar11 = 0.0;
              fVar10 = fVar11;
              if (bVar1) {
                fVar10 = DAT_ram_4009672c;
              }
            }
            else {
              fVar10 = fVar10 + fVar11;
            }
          }
          fVar18 = *pfVar7;
          pfVar4 = pfVar2 + 1;
          pfVar7 = pfVar7 + 1;
          *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar18) * fVar10 + fVar18;
          pfVar2 = pfVar4;
        } while (param_4 + param_6 != pfVar4);
      }
      else if (param_5 == (float *)0x0) {
        pfVar2 = param_4;
        do {
          if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              bVar1 = 0.0 <= fVar11;
              fVar11 = 0.0;
              fVar10 = fVar11;
              if (bVar1) {
                fVar10 = DAT_ram_4009672c;
              }
            }
            else {
              fVar10 = fVar10 + fVar11;
            }
          }
          fVar18 = *pfVar7;
          pfVar4 = pfVar2 + 1;
          pfVar7 = pfVar7 + 1;
          *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar18) * fVar10 + fVar18;
          pfVar2 = pfVar4;
        } while (param_4 + param_6 != pfVar4);
      }
      else {
        pfVar4 = pfVar7 + param_6;
        do {
          if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              bVar1 = 0.0 <= fVar11;
              fVar11 = 0.0;
              fVar10 = fVar11;
              if (bVar1) {
                fVar10 = DAT_ram_4009672c;
              }
            }
            else {
              fVar10 = fVar10 + fVar11;
            }
          }
          fVar18 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          *param_4 = ((float)*(undefined8 *)param_4 - fVar18) * fVar10 + fVar18;
          *param_5 = fVar10 * (*param_5 - *pfVar2) + *pfVar2;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          pfVar2 = pfVar2 + 1;
        } while (pfVar4 != pfVar7);
      }
    }
    param_1[0x21] = (int)fVar10;
    param_1[0x22] = (int)fVar11;
    param_1[0x23] = iVar3;
    return;
  }
  if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
    if (param_2 != param_4) {
      FUN_ram_4000303c(param_4,param_2,param_6 << 2);
    }
  }
  else {
    pfVar5 = param_2 + param_6;
    pfVar4 = param_4;
    do {
      uVar15 = *(undefined8 *)param_2;
      uVar12 = *(undefined8 *)param_3;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      *pfVar4 = ((float)uVar15 + (float)uVar12) * fVar10;
      pfVar4 = pfVar4 + 1;
    } while (param_2 != pfVar5);
  }
  fVar11 = DAT_ram_40096748;
  fVar10 = DAT_ram_4009672c;
  if (param_8 == 1) {
    if (param_7 == (float *)0x0) {
      uVar13 = 0;
      uVar9 = (ulonglong)(uint)DAT_ram_4009675c;
LAB_ram_40074756:
      if (DAT_ram_4009672c < fVar10) {
        fVar10 = DAT_ram_4009672c;
      }
    }
    else {
      fVar18 = *param_7;
      fVar16 = param_7[1];
      uVar9 = (ulonglong)(uint)fVar16;
      fVar10 = param_7[2];
      if (0.0 <= fVar18) {
        uVar13 = (ulonglong)(uint)DAT_ram_4009672c;
        if (fVar18 <= DAT_ram_4009672c) {
          uVar13 = (ulonglong)(uint)(fVar18 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728);
        }
      }
      else {
        uVar13 = (ulonglong)(uint)DAT_ram_40096728;
      }
      if (fVar16 < 0.0) {
        uVar9 = 0;
      }
      else if (DAT_ram_4009672c < fVar16) {
        uVar9 = (ulonglong)(uint)DAT_ram_4009672c;
      }
      if (0.0 <= fVar10) goto LAB_ram_40074756;
      fVar10 = 0.0;
    }
    iVar3 = *param_1;
    if (DAT_ram_40096748 < ABS((float)uVar13 - (float)*(undefined8 *)(param_1 + 0x1b))) {
      *(ulonglong *)(iVar3 + 0x14) = uVar13;
      *(ulonglong *)(param_1 + 0x1b) = uVar13;
    }
    if (fVar11 < ABS((float)uVar9 - (float)*(undefined8 *)(param_1 + 0x1f))) {
      *(ulonglong *)(iVar3 + 0x2c) = uVar9;
      *(ulonglong *)(param_1 + 0x1f) = uVar9;
    }
    fVar18 = (float)param_1[0x20];
    if (fVar11 < ABS(fVar10 - (float)param_1[0x20])) {
      param_1[0x20] = (int)fVar10;
      fVar18 = fVar10;
    }
    nc_model_process_block(fVar18,iVar3,param_4,param_6);
    goto LAB_ram_40074486;
  }
  if (param_7 == (float *)0x0) {
    uVar13 = 0;
    fVar18 = DAT_ram_4009675c;
    fVar16 = DAT_ram_4009675c;
    fVar19 = DAT_ram_4009672c;
    fVar14 = DAT_ram_4009675c;
LAB_ram_4007468c:
    fVar17 = fVar18 * DAT_ram_40099f50 + DAT_ram_4009a354;
  }
  else {
    fVar17 = *param_7;
    fVar18 = param_7[1];
    fVar16 = param_7[2];
    fVar19 = param_7[4];
    fVar14 = param_7[3];
    if (0.0 <= fVar17) {
      uVar13 = (ulonglong)(uint)DAT_ram_4009672c;
      if (fVar17 <= DAT_ram_4009672c) {
        uVar13 = (ulonglong)(uint)(fVar17 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728);
      }
    }
    else {
      uVar13 = (ulonglong)(uint)DAT_ram_40096728;
    }
    fVar17 = DAT_ram_4009a354;
    if ((0.0 <= fVar18) && (fVar17 = DAT_ram_40099f38, fVar18 <= DAT_ram_4009672c))
    goto LAB_ram_4007468c;
  }
  fVar18 = DAT_ram_4009a354;
  if ((0.0 <= fVar16) && (fVar18 = DAT_ram_40099f38, fVar16 <= DAT_ram_4009672c)) {
    fVar18 = fVar16 * DAT_ram_40099f50 + DAT_ram_4009a354;
  }
  if (fVar14 < 0.0) {
    uVar9 = (ulonglong)(uint)DAT_ram_4009a354;
  }
  else if (fVar14 <= DAT_ram_4009672c) {
    uVar9 = (ulonglong)(uint)(fVar14 * DAT_ram_40099f50 + DAT_ram_4009a354);
  }
  else {
    uVar9 = (ulonglong)(uint)DAT_ram_40099f38;
  }
  if (fVar19 < 0.0) {
    fVar19 = 0.0;
  }
  else if (DAT_ram_4009672c < fVar19) {
    fVar19 = DAT_ram_4009672c;
  }
  if (DAT_ram_40096748 < ABS((float)uVar13 - (float)*(undefined8 *)(param_1 + 0x1b))) {
    *(ulonglong *)(*param_1 + 0x14) = uVar13;
    *(ulonglong *)(param_1 + 0x1b) = uVar13;
  }
  fVar16 = DAT_ram_40096750;
  piVar8 = param_1 + 2;
  if (DAT_ram_40096750 < ABS(fVar17 - (float)*(undefined8 *)(param_1 + 0x1c))) {
    FUN_ram_4005c2aa(fVar17,piVar8);
    param_1[0x1c] = (int)fVar17;
  }
  if (fVar16 < ABS(fVar18 - (float)*(undefined8 *)(param_1 + 0x1d))) {
    FUN_ram_4005c3cc(fVar18,piVar8);
    param_1[0x1d] = (int)fVar18;
  }
  if (fVar16 < ABS((float)uVar9 - (float)*(undefined8 *)(param_1 + 0x1e))) {
    FUN_ram_4005c4ae(uVar9,piVar8);
    *(ulonglong *)(param_1 + 0x1e) = uVar9;
  }
  if (fVar11 < ABS(fVar19 - (float)param_1[0x20])) {
    param_1[0x20] = (int)fVar19;
  }
  nc_model_process_block(fVar10,*param_1,param_4,param_6);
  uVar6 = 0;
  pfVar4 = param_4;
  do {
    fVar10 = (float)nc_three_band_eq_process_sample(*pfVar4,piVar8);
    uVar6 = uVar6 + 1;
    *pfVar4 = (float)param_1[0x20] * fVar10;
    pfVar4 = pfVar4 + 1;
  } while (param_6 != uVar6);
LAB_ram_40074486:
  if ((param_9 != '\0') && (param_5 != (float *)0x0)) {
    pfVar4 = param_5;
    pfVar5 = param_4;
    do {
      uVar12 = *(undefined8 *)pfVar5;
      pfVar5 = pfVar5 + 1;
      *pfVar4 = (float)uVar12;
      pfVar4 = pfVar4 + 1;
    } while (pfVar5 != param_4 + param_6);
  }
  if (!bVar1) {
    return;
  }
  iVar3 = param_1[0x23];
  fVar10 = (float)param_1[0x21];
  fVar18 = (float)param_1[0x22];
  if ((iVar3 == 0) && (ABS(fVar10 - DAT_ram_4009672c) <= fVar11)) {
    return;
  }
  if (param_9 == '\0') {
    pfVar2 = param_4;
    do {
      if (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          bVar1 = 0.0 <= fVar18;
          fVar18 = 0.0;
          fVar10 = fVar18;
          if (bVar1) {
            fVar10 = DAT_ram_4009672c;
          }
        }
        else {
          fVar10 = fVar10 + fVar18;
        }
      }
      fVar11 = *pfVar7;
      pfVar4 = pfVar2 + 1;
      pfVar7 = pfVar7 + 1;
      *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar11) * fVar10 + fVar11;
      pfVar2 = pfVar4;
    } while (pfVar4 != param_4 + param_6);
  }
  else {
    uVar6 = 0;
    if (pfVar2 == (float *)0x0) {
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar18;
            fVar18 = 0.0;
            fVar10 = fVar18;
            if (bVar1) {
              fVar10 = DAT_ram_4009672c;
            }
          }
          else {
            fVar10 = fVar10 + fVar18;
          }
        }
        fVar11 = *pfVar7;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 1;
        *param_4 = fVar10 * ((float)*(undefined8 *)param_4 - fVar11) + fVar11;
        param_4 = param_4 + 1;
      } while (uVar6 < param_6);
    }
    else if (param_5 == (float *)0x0) {
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar18;
            fVar18 = 0.0;
            fVar10 = fVar18;
            if (bVar1) {
              fVar10 = DAT_ram_4009672c;
            }
          }
          else {
            fVar10 = fVar10 + fVar18;
          }
        }
        fVar11 = *pfVar7;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 1;
        *param_4 = ((float)*(undefined8 *)param_4 - fVar11) * fVar10 + fVar11;
        param_4 = param_4 + 1;
      } while (uVar6 < param_6);
    }
    else {
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar18;
            fVar18 = 0.0;
            fVar10 = fVar18;
            if (bVar1) {
              fVar10 = DAT_ram_4009672c;
            }
          }
          else {
            fVar10 = fVar10 + fVar18;
          }
        }
        fVar11 = *pfVar7;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 1;
        *param_4 = ((float)*(undefined8 *)param_4 - fVar11) * fVar10 + fVar11;
        *param_5 = fVar10 * (*param_5 - *pfVar2) + *pfVar2;
        param_4 = param_4 + 1;
        param_5 = param_5 + 1;
        pfVar2 = pfVar2 + 1;
      } while (uVar6 < param_6);
    }
  }
  param_1[0x21] = (int)fVar10;
  param_1[0x22] = (int)fVar18;
  param_1[0x23] = iVar3;
  return;
}

