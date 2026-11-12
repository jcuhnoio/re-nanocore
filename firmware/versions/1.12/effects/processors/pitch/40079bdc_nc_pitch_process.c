/* NanoCore 1.12: nc_pitch_process at 0x40079bdc.
 * Role: 2048-sample fractional delay ring, period tracking and read-head crossfade
 * REA: ev_6e45d65406de81516fa0bb45831d708f1c79b2b8d4fe7e8c9a19a21d3fc8fbfc
 * Source: analysis/rea-1.12-effects/results/03585-export-0x40079bdc.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_pitch_process(int *param_1,float *param_2,float *param_3,uint param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_00000100;
  ulonglong *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint extraout_a3;
  uint extraout_a3_00;
  uint extraout_a3_01;
  uint extraout_a3_02;
  int iVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  fVar10 = DAT_ram_400a0a38._4_4_;
  fVar9 = DAT_ram_400a0a34;
  fVar8 = DAT_ram_400a0a14;
  fVar6 = DAT_ram_4009672c;
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((((param_1[0x360] != 0) && (param_2 != (float *)0x0)) && (param_3 != (float *)0x0)) &&
     (param_4 != 0)) {
    uVar16 = param_1[0x344];
    uVar21 = 0;
    uVar14 = param_4;
    piVar20 = param_5;
    do {
      fVar31 = *param_2;
      if (0xff < (int)(uVar14 | 0x4009a60c) || (float)_DAT_ram_4009a60c < ABS(fVar31)) {
        fVar31 = 0.0;
      }
      iVar13 = param_1[0x346];
      iVar12 = param_1[0x348];
      *(float *)(*param_1 + uVar16 * 4) = fVar31;
      fVar22 = (float)param_1[0x33a];
      uVar14 = iVar13 + 1;
      param_1[0x346] = uVar14;
      param_1[0x348] = iVar12 + 1U;
      param_1[0x33a] = (int)(fVar31 + fVar22);
      fVar34 = DAT_ram_400a09e8;
      fVar32 = DAT_ram_4009f9c8;
      if (iVar12 + 1U < 0x10) {
        iVar12 = param_1[0x34b];
LAB_ram_40079fe4:
        fVar24 = DAT_ram_4009672c;
        fVar22 = in_register_00000100;
        if (iVar12 != 0) goto LAB_ram_40079ff0;
LAB_ram_4007a2dc:
        iVar13 = 1;
        in_register_00000100 = fVar22;
      }
      else {
        fVar22 = (fVar31 + fVar22) * DAT_ram_4009f9c8;
        param_1[0x348] = 0;
        param_1[0x33a] = 0;
        fVar22 = (float)param_1[0x337] * (fVar22 - (float)param_1[0x338]) + (float)param_1[0x338];
        param_1[0x338] = (int)fVar22;
        fVar28 = (float)param_1[0x337] * (fVar22 - (float)param_1[0x339]) + (float)param_1[0x339];
        uVar30 = (ulonglong)(uint)fVar28;
        param_1[0x339] = (int)fVar28;
        if (ABS(fVar22) < fVar34) {
          param_1[0x338] = 0;
        }
        if (ABS(fVar28) < fVar34) {
          uVar30 = 0;
          param_1[0x339] = 0;
        }
        iVar12 = param_1[0x345];
        param_1[iVar12 + 0x101] = (int)uVar30;
        *(ulonglong *)(param_1 + iVar12 + 1) = uVar30;
        param_1[0x345] = iVar12 + 1U & 0xff;
        if (param_1[0x354] != 0) {
          nc_pitch_estimate_period(param_1);
          uVar14 = extraout_a3_02;
        }
        iVar13 = param_1[0x347];
        iVar12 = param_1[0x34b];
        param_1[0x347] = iVar13 + 1U;
        fVar22 = DAT_ram_4009a348;
        if (iVar13 + 1U < 0x20) goto LAB_ram_40079fe4;
        fVar34 = (float)param_1[0x334];
        param_1[0x347] = 0;
        fVar18 = (float)param_1[0x33b];
        fVar28 = (float)param_1[0x33d];
        fVar33 = fVar18;
        if ((iVar12 == 0) || (param_1[0x362] < 6)) {
          if (fVar28 < DAT_ram_4009f080) {
            fVar33 = fVar34 * DAT_ram_4009f7ec;
          }
          bVar5 = false;
          fVar25 = fVar34 / DAT_ram_4009b1a4;
        }
        else {
          if (fVar28 < DAT_ram_4009f080) {
            fVar33 = fVar34 * DAT_ram_40099f34;
          }
          bVar5 = true;
          fVar25 = fVar34 * DAT_ram_40099f40;
        }
        fVar29 = fVar34 / fVar22;
        if ((fVar34 / fVar22 <= fVar33) && (fVar29 = fVar25, fVar33 <= fVar25)) {
          fVar29 = fVar33;
        }
        fVar22 = in_register_00000100;
        if (fVar29 < fVar34 * DAT_ram_400a09fc) {
          fVar22 = (float)FUN_ram_40000658((fVar34 * DAT_ram_400a09fc) / fVar29);
          fVar29 = fVar29 * (float)(int)fVar22;
          fVar22 = in_register_00000100;
        }
        fVar33 = DAT_ram_400a0a14;
        fVar25 = DAT_ram_400a09f4;
        if (!bVar5) {
          fVar33 = DAT_ram_400a0a18;
          fVar25 = DAT_ram_400a0a1c;
        }
        if (iVar12 == 0) {
          fVar24 = (float)FUN_ram_40000844(param_1[0x312],param_1[0x313]);
          fVar25 = (float)FUN_ram_40000844(DAT_ram_4009a380,
                                           fVar25 * (fVar24 - DAT_ram_4009672c) + DAT_ram_40099f58);
          param_1[0x319] = (int)fVar29;
          param_1[0x31a] = (int)fVar25;
          param_1[0x31c] = (int)fVar33;
          param_1[0x31b] = (int)(fVar29 + fVar25);
          uVar14 = extraout_a3_01;
          in_register_00000100 = fVar22;
          if (0x1ff < (uint)param_1[0x346]) goto LAB_ram_40079e8a;
          goto LAB_ram_4007a2dc;
        }
        fVar23 = (float)FUN_ram_40000844(param_1[0x312],param_1[0x313]);
        fVar24 = DAT_ram_4009672c;
        in_register_00000100 = fVar22;
        fVar23 = (float)FUN_ram_40000844(DAT_ram_4009a380,
                                         fVar25 * (fVar23 - DAT_ram_4009672c) + fVar22);
        param_1[0x319] = (int)fVar29;
        param_1[0x31a] = (int)fVar23;
        param_1[0x31c] = (int)fVar33;
        param_1[0x31b] = (int)(fVar29 + fVar23);
        fVar23 = (float)FUN_ram_40000844(param_1[0x323],param_1[0x324]);
        fVar22 = (float)FUN_ram_40000844(fVar22,(fVar23 - fVar24) * fVar25 + fVar22);
        param_1[0x32a] = (int)fVar29;
        param_1[0x32b] = (int)fVar22;
        param_1[0x32d] = (int)fVar33;
        param_1[0x32c] = (int)(fVar22 + fVar29);
        uVar14 = extraout_a3;
        if (0x1ff < (uint)param_1[0x346]) {
LAB_ram_40079e8a:
          if (param_1[0x354] == 0) {
            FUN_ram_4000303c(param_1 + 0x26a,param_1 + param_1[0x345] + 0x59,0x2a0);
            if ((float)param_1[0x2d5] * (float)param_1[0x2d5] +
                (float)param_1[0x2d9] * (float)param_1[0x2d9] +
                (float)param_1[0x2dd] * (float)param_1[0x2dd] +
                (float)param_1[0x2e1] * (float)param_1[0x2e1] +
                (float)param_1[0x2e5] * (float)param_1[0x2e5] +
                (float)param_1[0x2e9] * (float)param_1[0x2e9] +
                (float)param_1[0x2ed] * (float)param_1[0x2ed] +
                (float)param_1[0x2f1] * (float)param_1[0x2f1] +
                (float)param_1[0x2f5] * (float)param_1[0x2f5] +
                (float)param_1[0x2f9] * (float)param_1[0x2f9] +
                (float)param_1[0x2fd] * (float)param_1[0x2fd] +
                (float)param_1[0x301] * (float)param_1[0x301] +
                (float)param_1[0x305] * (float)param_1[0x305] +
                (float)param_1[0x309] * (float)param_1[0x309] +
                (float)param_1[0x30d] * (float)param_1[0x30d] +
                (float)param_1[0x311] * (float)param_1[0x311] + 0.0 < DAT_ram_400a0a0c) {
              param_1[0x362] = 0;
              param_1[0x33d] = 0;
              param_1[0x35f] = 0;
              uVar14 = extraout_a3_00;
            }
            else {
              uVar14 = 1;
              uVar16 = (uint)((param_1[0x355] + 1U & 7) == 0);
              if (fVar28 < DAT_ram_4009675c._4_4_) {
                uVar16 = 1;
              }
              param_1[0x35b] = param_1[0x344];
              param_1[0x355] = param_1[0x355] + 1U;
              param_1[0x358] = uVar16;
              param_1[0x356] = 1;
              if (param_1[0x362] == 0) {
                iVar13 = (int)(fVar34 / DAT_ram_400a0a30);
              }
              else {
                iVar13 = param_1[0x352];
              }
              param_1[0x357] = iVar13;
              if (uVar16 == 0) {
                iVar13 = (int)(fVar18 * fVar32 + (float)DAT_ram_4009675c);
                uVar16 = iVar13 - 4;
                iVar13 = iVar13 + 4;
                param_1[0x356] = uVar16;
                param_1[0x357] = iVar13;
                if ((int)uVar16 < 1) {
                  uVar16 = 1;
                  param_1[0x356] = 1;
                }
                uVar14 = param_1[0x352];
                if ((int)uVar14 < iVar13) {
                  param_1[0x357] = uVar14;
                }
              }
              fVar22 = DAT_ram_4009672c;
              param_1[0x353] = uVar16;
              param_1[0x201] = (int)fVar22;
              param_1[0x354] = 1;
            }
          }
          goto LAB_ram_40079fe4;
        }
LAB_ram_40079ff0:
        iVar13 = 2;
        if ((float)param_1[0x33f] < fVar24) {
          fVar22 = (float)param_1[0x33f] + DAT_ram_400a0a14;
          if (fVar22 < 0.0) {
            iVar13 = 2;
            param_1[0x33f] = 0;
          }
          else {
            if (fVar24 < fVar22) {
              fVar22 = fVar24;
            }
            param_1[0x33f] = (int)fVar22;
            iVar13 = 2;
          }
        }
      }
      puVar7 = PTR_entry_ram_40096740;
      fVar28 = DAT_ram_4009673c;
      fVar22 = 0.0;
      fVar34 = 0.0;
      fVar32 = 0.0;
      puVar11 = (ulonglong *)(param_1 + 0x312);
      iVar19 = 0;
      fVar33 = DAT_ram_40099f30;
      do {
        fVar18 = (float)*(undefined8 *)((int)puVar11 + 0x34);
        fVar25 = (float)puVar11[7] - fVar18;
        fVar29 = fVar9;
        if ((fVar9 <= fVar25) && (fVar29 = fVar25, fVar8 < fVar25)) {
          fVar29 = fVar8;
        }
        fVar18 = fVar18 + fVar29;
        *(ulonglong *)((int)puVar11 + 0x34) = (ulonglong)(uint)fVar18;
        if ((fVar18 != 0.0) || ((float)puVar11[7] != 0.0)) {
          if (ABS((float)*(undefined8 *)((int)puVar11 + 0x2c)) < fVar10) {
            *(int *)((int)puVar11 + 0x2c) = 0;
          }
          fVar25 = (float)*puVar11;
          fVar29 = (float)*(ulonglong *)((int)puVar11 + 4);
          if (fVar29 != fVar25) {
            if (ABS(fVar29 - fVar25) <= DAT_ram_400a0a40) {
              *puVar11 = *(ulonglong *)((int)puVar11 + 4);
              fVar25 = fVar29;
            }
            else {
              fVar25 = (fVar29 - fVar25) * (float)param_1[0x335] + fVar25;
              *puVar11 = (ulonglong)(uint)fVar25;
            }
          }
          fVar29 = (float)puVar11[3];
          if (fVar29 != (float)(int)puVar11[8]) {
            fVar24 = fVar9;
            if ((int)puVar11[8] != 0) {
              fVar24 = DAT_ram_400a0a14;
            }
            fVar29 = fVar29 + fVar24;
            puVar11[3] = (ulonglong)(uint)fVar29;
          }
          fVar23 = 0.0;
          fVar24 = fVar31;
          if (fVar29 < fVar6) {
            fVar29 = *(float *)(puVar11 + 2);
            fVar25 = fVar6 - fVar25;
            if (fVar6 <= fVar29) {
              fVar24 = (float)puVar11[1];
              if ((0.0 <= fVar25) || ((float)puVar11[4] < fVar24)) {
                if ((fVar25 <= 0.0) || (fVar24 < (float)*(undefined8 *)((int)puVar11 + 0x24)))
                goto LAB_ram_4007a1e6;
                if (fVar25 < 0.0) goto LAB_ram_4007a47a;
                fVar23 = (float)*(undefined8 *)((int)puVar11 + 0x1c);
                fVar29 = fVar24 - fVar23;
              }
              else {
LAB_ram_4007a47a:
                fVar23 = (float)*(undefined8 *)((int)puVar11 + 0x1c);
                fVar29 = fVar24 + fVar23;
              }
              if (fVar29 < fVar33) {
                fVar29 = fVar23 * (float)DAT_ram_4009675c + (float)puVar11[4];
              }
              uVar30 = (ulonglong)(uint)fVar29;
              if ((iVar12 != 0) && (5 < param_1[0x362])) {
                uVar30 = nc_pitch_find_splice(param_1,puVar11);
                iVar12 = param_1[0x34b];
                fVar24 = (float)puVar11[1];
                fVar33 = DAT_ram_40099f30;
              }
              iVar15 = param_1[0x349];
              *(int *)(puVar11 + 2) = 0;
              *(ulonglong *)((int)puVar11 + 0xc) = uVar30;
              *(ulonglong *)((int)puVar11 + 0x14) = puVar11[5];
              fVar29 = 0.0;
              param_1[0x349] = iVar15 + 1;
            }
            else {
              fVar24 = (float)puVar11[1];
            }
LAB_ram_4007a1e6:
            iVar15 = *param_1;
            fVar23 = ((float)(uint)param_1[0x344] - fVar24) + DAT_ram_400a09ec;
            uVar14 = (uint)fVar23;
            fVar27 = (float)*(undefined8 *)(iVar15 + (uVar14 & 0x7ff) * 4);
            fVar27 = (fVar23 - (float)(int)uVar14) *
                     ((float)*(undefined8 *)(iVar15 + (uVar14 + 1 & 0x7ff) * 4) - fVar27) + fVar27;
            if (fVar29 < fVar6) {
              fVar26 = (float)*(undefined8 *)((int)puVar11 + 0xc);
              fVar1 = fVar29 + *(float *)((int)puVar11 + 0x14);
              iVar17 = param_1[0x34a];
              fVar2 = ((float)(uint)param_1[0x344] - fVar26) + DAT_ram_400a09ec;
              fVar4 = fVar29 * fVar29 * (-(fVar29 * (float)puVar7) + fVar28);
              uVar14 = (uint)fVar2;
              fVar29 = *(float *)(iVar15 + (uVar14 & 0x7ff) * 4);
              fVar3 = *(float *)(iVar15 + (uVar14 + 1 & 0x7ff) * 4);
              *(float *)((int)puVar11 + 0xc) = fVar25 + fVar26;
              *(float *)(puVar11 + 2) = fVar1;
              param_1[0x34a] = iVar17 + 1;
              fVar23 = fVar4 * (fVar26 - fVar24) + fVar24;
              fVar27 = fVar4 * (((fVar2 - (float)(int)uVar14) * (fVar3 - fVar29) + fVar29) - fVar27)
                       + fVar27;
              fVar29 = fVar28;
              if (fVar6 <= fVar1) {
                fVar24 = (fVar25 + fVar26) - fVar25;
                *(float *)(puVar11 + 2) = fVar6;
              }
            }
            else {
              uVar14 = 0;
              fVar29 = DAT_ram_4009673c;
              fVar23 = fVar24;
            }
            fVar25 = fVar25 + fVar24;
            if ((fVar25 < fVar29) ||
               (fVar29 = (float)DAT_ram_400a0a38, (float)DAT_ram_400a0a38 < fVar25)) {
              fVar25 = fVar29;
            }
            puVar11[1] = (ulonglong)(uint)fVar25;
            fVar29 = (float)puVar11[3];
            fVar24 = (fVar6 - (float)param_1[0x336]) * fVar27 +
                     (float)param_1[0x336] * (float)*(undefined8 *)((int)puVar11 + 0x2c);
            *(ulonglong *)((int)puVar11 + 0x2c) = (ulonglong)(uint)fVar24;
          }
          if ((0.0 < fVar29) && (fVar29 < fVar6)) {
            fVar24 = (fVar31 - fVar24) * fVar29 + fVar24;
            fVar23 = fVar23 * (fVar6 - fVar29);
          }
          fVar34 = fVar18 * fVar24 + fVar34;
          if (param_5 != (int *)0x0) {
            fVar18 = (float)*(undefined8 *)((int)puVar11 + 0x34);
            fVar32 = fVar18 * fVar23 + fVar32;
            fVar22 = fVar22 + fVar18;
          }
        }
        iVar19 = iVar19 + 1;
        puVar11 = (ulonglong *)((int)puVar11 + 0x44);
      } while (iVar13 != iVar19);
      fVar28 = DAT_ram_4009672c;
      if (iVar12 != 0) {
        fVar28 = (float)param_1[0x33f];
      }
      *param_3 = (float)param_1[0x341] * fVar31 + fVar28 * (float)param_1[0x340] * fVar34;
      if (param_5 != (int *)0x0) {
        if (fVar22 <= 0.0) {
          fVar32 = 0.0;
        }
        else {
          fVar32 = fVar32 / fVar22;
        }
        if (fVar32 < (float)param_1[0x342]) {
          param_1[0x342] = (int)fVar32;
        }
        if ((float)param_1[0x343] < fVar32) {
          param_1[0x343] = (int)fVar32;
        }
        *piVar20 = param_1[0x33c];
        piVar20[1] = param_1[0x33d];
        piVar20[2] = param_1[0x33e];
        iVar12 = param_1[0x31e];
        piVar20[4] = (int)fVar32;
        piVar20[5] = (int)fVar28;
        piVar20[3] = iVar12;
      }
      uVar21 = uVar21 + 1;
      param_2 = param_2 + 1;
      uVar16 = param_1[0x344] + 1U & 0x7ff;
      param_1[0x344] = uVar16;
      piVar20 = piVar20 + 6;
      param_3 = param_3 + 1;
    } while (param_4 != uVar21);
  }
  return;
}

