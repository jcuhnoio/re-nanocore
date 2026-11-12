/* NanoCore 1.12: cab_ir_process_with_cut_filters at 0x4005f2c4.
 * Role: Mono downmix, IR processing, low/high cut first-order filters, output level and fade.
 * REA: ev_f9f68dd4fabcd30fdf8fb920d37a7e4642f95d4a50f22b0537dcbbdfaf49fc9f
 * Source: analysis/rea-1.12/results/03474-export-0x4005f2c4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void cab_ir_process_with_cut_filters(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     int param_6,float *param_7,undefined4 param_8,char param_9,int param_10)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar13;
  
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
  fVar19 = DAT_ram_4009675c;
  if ((param_1 == (int *)0x0) || (iVar4 = *param_1, iVar4 == 0)) {
    if (param_2 != param_4) {
      FUN_ram_4000303c(param_4,param_2,param_6 << 2);
    }
    if (param_9 == '\0') {
      return;
    }
    if (param_3 == (float *)0x0) {
      return;
    }
    if (param_5 == (float *)0x0) {
      return;
    }
    if (param_3 == param_5) {
      return;
    }
    FUN_ram_4000303c(param_5,param_3,param_6 << 2);
    return;
  }
  iVar6 = param_1[0xd];
  uVar10 = *(ulonglong *)(param_1 + 0xb);
  bVar1 = (float)uVar10 < DAT_ram_4009f124;
  bVar2 = iVar6 != 0 || bVar1;
  iVar9 = param_1[0xd];
  fVar20 = (float)param_1[0xc];
  if (param_7 == (float *)0x0) {
    fVar11 = DAT_ram_40096760;
    if (param_9 == '\0') {
LAB_ram_4005f5f4:
      if (param_2 != param_4) {
        FUN_ram_4000303c(param_4,param_2,param_6 * 4);
        iVar4 = *param_1;
      }
      cab_convolver_process(iVar4,param_4,param_6);
      if (bVar2) {
        if (param_9 == '\0') {
          pfVar8 = param_4;
          do {
            if (iVar9 != 0) {
              iVar9 = iVar9 + -1;
              if (iVar9 == 0) {
                bVar1 = 0.0 <= fVar20;
                fVar20 = 0.0;
                uVar10 = 0;
                if (bVar1) {
                  uVar10 = (ulonglong)(uint)DAT_ram_4009672c;
                }
              }
              else {
                uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
              }
            }
            pfVar5 = pfVar8 + 1;
            *pfVar8 = fVar11 * (float)*(undefined8 *)pfVar8 * (float)uVar10;
            pfVar8 = pfVar5;
          } while (param_4 + param_6 != pfVar5);
        }
        else {
LAB_ram_4005f890:
          pfVar8 = param_4;
          if (param_5 == (float *)0x0) {
            do {
              if (iVar9 != 0) {
                iVar9 = iVar9 + -1;
                if (iVar9 == 0) {
                  bVar1 = 0.0 <= fVar20;
                  fVar20 = 0.0;
                  uVar10 = 0;
                  if (bVar1) {
                    uVar10 = (ulonglong)(uint)DAT_ram_4009672c;
                  }
                }
                else {
                  uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
                }
              }
              pfVar5 = pfVar8 + 1;
              *pfVar8 = fVar11 * (float)*(undefined8 *)pfVar8 * (float)uVar10;
              pfVar8 = pfVar5;
            } while (param_4 + param_6 != pfVar5);
          }
          else {
            do {
              if (iVar9 != 0) {
                iVar9 = iVar9 + -1;
                if (iVar9 == 0) {
                  bVar1 = 0.0 <= fVar20;
                  fVar20 = 0.0;
                  uVar10 = 0;
                  if (bVar1) {
                    uVar10 = (ulonglong)(uint)DAT_ram_4009672c;
                  }
                }
                else {
                  uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
                }
              }
              pfVar5 = pfVar8 + 1;
              fVar19 = fVar11 * (float)*(undefined8 *)pfVar8 * (float)uVar10;
              *pfVar8 = fVar19;
              *param_5 = fVar19;
              pfVar8 = pfVar5;
              param_5 = param_5 + 1;
            } while (param_4 + param_6 != pfVar5);
          }
        }
        goto LAB_ram_4005f38e;
      }
      if (param_9 == '\0') {
        pfVar8 = param_4;
        do {
          pfVar5 = pfVar8 + 1;
          *pfVar8 = (float)*(undefined8 *)pfVar8 * fVar11;
          pfVar8 = pfVar5;
        } while (param_4 + param_6 != pfVar5);
        return;
      }
    }
    else {
LAB_ram_4005f7d2:
      if (param_3 == (float *)0x0) goto LAB_ram_4005f5f4;
      pfVar5 = param_2 + param_6;
      pfVar8 = param_4;
      do {
        uVar17 = *(undefined8 *)param_2;
        uVar15 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *pfVar8 = ((float)uVar17 + (float)uVar15) * fVar19;
        pfVar8 = pfVar8 + 1;
      } while (pfVar5 != param_2);
      cab_convolver_process(iVar4,param_4,param_6);
      if (bVar2) goto LAB_ram_4005f890;
    }
    pfVar8 = param_4 + param_6;
    if (param_5 == (float *)0x0) {
      do {
        pfVar5 = param_4 + 1;
        *param_4 = (float)*(undefined8 *)param_4 * fVar11;
        param_4 = pfVar5;
      } while (pfVar8 != pfVar5);
    }
    else {
      do {
        pfVar5 = param_4 + 1;
        fVar19 = fVar11 * (float)*(undefined8 *)param_4;
        *param_4 = fVar19;
        *param_5 = fVar19;
        param_4 = pfVar5;
        param_5 = param_5 + 1;
      } while (pfVar8 != pfVar5);
    }
  }
  else {
    fVar12 = *param_7;
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar12) {
      fVar12 = DAT_ram_4009672c;
    }
    fVar14 = param_7[1];
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar14) {
      fVar14 = DAT_ram_4009672c;
    }
    fVar11 = param_7[2];
    if (fVar11 < 0.0) {
      fVar11 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar11) {
      fVar11 = DAT_ram_4009672c;
    }
    if ((fVar12 <= DAT_ram_40096750) && (DAT_ram_4009f128 <= fVar14)) {
      if (param_9 != '\0') goto LAB_ram_4005f7d2;
      goto LAB_ram_4005f5f4;
    }
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
      if (param_2 == param_4) {
        iVar7 = param_6 << 2;
      }
      else {
        iVar7 = param_6 << 2;
        FUN_ram_4000303c(param_4,param_2,iVar7);
        iVar4 = *param_1;
        fVar19 = DAT_ram_4009675c;
      }
    }
    else {
      iVar7 = param_6 * 4;
      pfVar5 = param_2 + param_6;
      pfVar8 = param_4;
      do {
        uVar17 = *(undefined8 *)param_2;
        uVar15 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *pfVar8 = ((float)uVar17 + (float)uVar15) * fVar19;
        pfVar8 = pfVar8 + 1;
      } while (param_2 != pfVar5);
    }
    cab_convolver_process(iVar4,param_4,param_6);
    fVar3 = DAT_ram_4009672c;
    fVar21 = (float)param_1[1];
    if ((float)param_1[1] <= DAT_ram_4009672c) {
      fVar21 = DAT_ram_4009f078;
    }
    fVar13 = DAT_ram_4009f114;
    if ((0.0 <= fVar12) && (fVar13 = DAT_ram_4009f118, fVar12 <= DAT_ram_4009672c)) {
      fVar13 = fVar12 * DAT_ram_4009f12c + DAT_ram_4009f114;
    }
    fVar12 = (float)FUN_ram_40000bd8(fVar13);
    fVar13 = DAT_ram_4009f11c;
    if ((0.0 <= fVar14) && (fVar13 = DAT_ram_4009f120, fVar14 <= fVar3)) {
      fVar13 = fVar14 * DAT_ram_4009f130 + DAT_ram_4009f11c;
    }
    fVar14 = (float)FUN_ram_40000bd8(fVar13);
    fVar19 = fVar21 * fVar19 * DAT_ram_4009b174;
    if (fVar19 < fVar12) {
      fVar12 = fVar19;
    }
    if (fVar19 < fVar14) {
      fVar14 = fVar19;
    }
    if ((float)*(undefined8 *)(param_1 + 2) != fVar12) {
      uVar15 = FUN_ram_40000bd8((fVar12 * DAT_ram_4009f0b4) / fVar21);
      *(undefined8 *)(param_1 + 4) = uVar15;
      param_1[2] = (int)fVar12;
    }
    if ((float)*(undefined8 *)(param_1 + 3) == fVar14) {
      uVar15 = *(undefined8 *)(param_1 + 7);
    }
    else {
      uVar15 = FUN_ram_40000bd8((fVar14 * DAT_ram_4009f0b4) / fVar21);
      *(undefined8 *)(param_1 + 7) = uVar15;
      param_1[3] = (int)fVar14;
    }
    fVar12 = (float)uVar15;
    fVar19 = fVar3 - fVar12;
    uVar15 = *(undefined8 *)(param_1 + 5);
    uVar18 = *(ulonglong *)(param_1 + 6);
    uVar16 = *(ulonglong *)(param_1 + 8);
    fVar14 = (float)*(undefined8 *)(param_1 + 4);
    if (iVar6 == 0 && !bVar1) {
      pfVar8 = (float *)(iVar7 + (int)param_4);
      if (param_9 == '\0') {
        do {
          fVar20 = (float)uVar15;
          uVar15 = *(undefined8 *)param_4;
          pfVar5 = param_4 + 1;
          fVar20 = (((float)uVar15 + (float)uVar18) - fVar20) * fVar14;
          uVar18 = (ulonglong)(uint)fVar20;
          fVar20 = fVar19 * fVar20 + (float)uVar16 * fVar12;
          uVar16 = (ulonglong)(uint)fVar20;
          *param_4 = fVar11 * fVar20;
          param_4 = pfVar5;
        } while (pfVar5 != pfVar8);
      }
      else if (param_5 == (float *)0x0) {
        do {
          fVar20 = (float)uVar15;
          uVar15 = *(undefined8 *)param_4;
          pfVar5 = param_4 + 1;
          fVar20 = (((float)uVar15 + (float)uVar18) - fVar20) * fVar14;
          uVar18 = (ulonglong)(uint)fVar20;
          fVar20 = fVar20 * fVar19 + (float)uVar16 * fVar12;
          uVar16 = (ulonglong)(uint)fVar20;
          *param_4 = fVar11 * fVar20;
          param_4 = pfVar5;
        } while (pfVar5 != pfVar8);
      }
      else {
        do {
          fVar20 = (float)uVar15;
          uVar15 = *(undefined8 *)param_4;
          pfVar5 = param_4 + 1;
          fVar20 = (((float)uVar15 + (float)uVar18) - fVar20) * fVar14;
          uVar18 = (ulonglong)(uint)fVar20;
          fVar20 = fVar19 * fVar20 + fVar12 * (float)uVar16;
          uVar16 = (ulonglong)(uint)fVar20;
          fVar20 = fVar11 * fVar20;
          *param_4 = fVar20;
          *param_5 = fVar20;
          param_4 = pfVar5;
          param_5 = param_5 + 1;
        } while (pfVar5 != pfVar8);
      }
      *(undefined8 *)(param_1 + 5) = uVar15;
      *(ulonglong *)(param_1 + 6) = uVar18;
      *(ulonglong *)(param_1 + 8) = uVar16;
      return;
    }
    pfVar8 = (float *)(iVar7 + (int)param_4);
    if (param_9 == '\0') {
      do {
        fVar21 = (float)uVar15;
        uVar15 = *(undefined8 *)param_4;
        fVar21 = (((float)uVar15 + (float)uVar18) - fVar21) * fVar14;
        uVar18 = (ulonglong)(uint)fVar21;
        fVar21 = fVar19 * fVar21 + fVar12 * (float)uVar16;
        uVar16 = (ulonglong)(uint)fVar21;
        if (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) {
            bVar1 = fVar20 < 0.0;
            uVar10 = (ulonglong)(uint)fVar3;
            fVar20 = 0.0;
            if (bVar1) {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
          }
        }
        pfVar5 = param_4 + 1;
        *param_4 = fVar21 * fVar11 * (float)uVar10;
        param_4 = pfVar5;
      } while (pfVar5 != pfVar8);
    }
    else if (param_5 == (float *)0x0) {
      do {
        fVar21 = (float)uVar15;
        uVar15 = *(undefined8 *)param_4;
        fVar21 = (((float)uVar18 + (float)uVar15) - fVar21) * fVar14;
        uVar18 = (ulonglong)(uint)fVar21;
        fVar21 = fVar19 * fVar21 + fVar12 * (float)uVar16;
        uVar16 = (ulonglong)(uint)fVar21;
        if (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) {
            bVar1 = fVar20 < 0.0;
            uVar10 = (ulonglong)(uint)fVar3;
            fVar20 = 0.0;
            if (bVar1) {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
          }
        }
        pfVar5 = param_4 + 1;
        *param_4 = fVar11 * fVar21 * (float)uVar10;
        param_4 = pfVar5;
      } while (pfVar5 != pfVar8);
    }
    else {
      do {
        fVar21 = (float)uVar15;
        uVar15 = *(undefined8 *)param_4;
        fVar21 = (((float)uVar15 + (float)uVar18) - fVar21) * fVar14;
        uVar18 = (ulonglong)(uint)fVar21;
        fVar21 = fVar19 * fVar21 + fVar12 * (float)uVar16;
        uVar16 = (ulonglong)(uint)fVar21;
        if (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) {
            bVar1 = fVar20 < 0.0;
            uVar10 = (ulonglong)(uint)fVar3;
            fVar20 = 0.0;
            if (bVar1) {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
          }
        }
        pfVar5 = param_4 + 1;
        fVar21 = fVar11 * fVar21 * (float)uVar10;
        *param_4 = fVar21;
        *param_5 = fVar21;
        param_4 = pfVar5;
        param_5 = param_5 + 1;
      } while (pfVar5 != pfVar8);
    }
    *(undefined8 *)(param_1 + 5) = uVar15;
    *(ulonglong *)(param_1 + 6) = uVar18;
    *(ulonglong *)(param_1 + 8) = uVar16;
LAB_ram_4005f38e:
    *(ulonglong *)(param_1 + 0xb) = uVar10;
    param_1[0xc] = (int)fVar20;
    param_1[0xd] = iVar9;
  }
  return;
}

