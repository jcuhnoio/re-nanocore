/* NanoCore 1.12: nc_pitch_estimate_period at 0x40077b1c.
 * Role: Incremental correlation over decimated pitch history
 * REA: ev_bc02c2295cc573e3ec17558f9ffb5057152a52b3b33c8d0f0ed1d0eaf89df678
 * Source: analysis/rea-1.12-effects/results/03580-export-0x40077b1c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x40078316) */
/* WARNING: Removing unreachable block (ram,0x400785ae) */
/* WARNING: Removing unreachable block (ram,0x40078324) */
/* WARNING: Removing unreachable block (ram,0x400785ba) */

void nc_pitch_estimate_period(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *puVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  
  fVar42 = DAT_ram_400a0a0c;
  fVar38 = DAT_ram_400a09e8;
  puVar16 = PTR_entry_ram_40096740;
  iVar33 = param_1[0x354];
  if (iVar33 == 1) {
    iVar21 = param_1[0x353];
    iVar33 = param_1[0x357];
    piVar23 = param_1 + (0x2d5 - iVar21);
    iVar29 = iVar21 + 4;
    do {
      if (iVar33 < iVar21) goto LAB_ram_40077e5e;
      fVar42 = (float)piVar23[0x3c];
      fVar51 = (float)piVar23[0x38];
      fVar52 = (float)param_1[0x311];
      fVar53 = (float)piVar23[0x34];
      fVar55 = (float)param_1[0x30d];
      fVar41 = (float)piVar23[0x30];
      fVar45 = (float)param_1[0x309];
      fVar50 = (float)param_1[0x305];
      fVar54 = (float)piVar23[0x2c];
      fVar1 = (float)piVar23[0x28];
      fVar2 = (float)param_1[0x301];
      fVar3 = (float)piVar23[0x24];
      fVar4 = (float)param_1[0x2fd];
      fVar5 = (float)piVar23[0x20];
      fVar6 = (float)param_1[0x2f9];
      fVar7 = (float)param_1[0x2f5];
      fVar46 = (float)*(undefined8 *)(piVar23 + 0x1c);
      fVar8 = (float)param_1[0x2f1];
      fVar39 = (float)*(undefined8 *)(piVar23 + 0x18);
      fVar9 = (float)param_1[0x2ed];
      fVar47 = (float)*(undefined8 *)(piVar23 + 0x14);
      fVar10 = (float)param_1[0x2e9];
      fVar43 = (float)*(undefined8 *)(piVar23 + 0x10);
      fVar11 = (float)param_1[0x2e5];
      fVar48 = (float)*(undefined8 *)(piVar23 + 0xc);
      fVar12 = (float)param_1[0x2e1];
      fVar40 = (float)*(undefined8 *)(piVar23 + 8);
      fVar13 = (float)param_1[0x2dd];
      fVar44 = (float)*(undefined8 *)(piVar23 + 4);
      fVar14 = (float)param_1[0x2d9];
      fVar49 = (float)*(undefined8 *)piVar23;
      fVar15 = (float)param_1[0x2d5];
      iVar31 = iVar21 + 0x201;
      iVar21 = iVar21 + 1;
      piVar23 = piVar23 + -1;
      *(ulonglong *)(param_1 + iVar31) =
           (ulonglong)
           (uint)(((fVar15 - fVar49) * (fVar15 - fVar49) +
                  (fVar14 - fVar44) * (fVar14 - fVar44) +
                  (fVar13 - fVar40) * (fVar13 - fVar40) +
                  (fVar12 - fVar48) * (fVar12 - fVar48) +
                  (fVar11 - fVar43) * (fVar11 - fVar43) +
                  (fVar10 - fVar47) * (fVar10 - fVar47) +
                  (fVar9 - fVar39) * (fVar9 - fVar39) +
                  (fVar8 - fVar46) * (fVar8 - fVar46) +
                  (fVar7 - fVar5) * (fVar7 - fVar5) +
                  (fVar6 - fVar3) * (fVar6 - fVar3) +
                  (fVar4 - fVar1) * (fVar4 - fVar1) +
                  (fVar2 - fVar54) * (fVar2 - fVar54) +
                  (fVar50 - fVar41) * (fVar50 - fVar41) +
                  (fVar45 - fVar53) * (fVar45 - fVar53) +
                  (fVar55 - fVar51) * (fVar55 - fVar51) +
                  (fVar52 - fVar42) * (fVar52 - fVar42) + 0.0) /
                 (fVar52 * fVar52 + fVar42 * fVar42 + fVar38 + fVar55 * fVar55 + fVar51 * fVar51 +
                  fVar45 * fVar45 + fVar53 * fVar53 + fVar50 * fVar50 + fVar41 * fVar41 +
                  fVar2 * fVar2 + fVar54 * fVar54 + fVar4 * fVar4 + fVar1 * fVar1 +
                  fVar6 * fVar6 + fVar3 * fVar3 + fVar7 * fVar7 + fVar5 * fVar5 +
                  fVar8 * fVar8 + fVar46 * fVar46 + fVar9 * fVar9 + fVar39 * fVar39 +
                  fVar10 * fVar10 + fVar47 * fVar47 + fVar11 * fVar11 + fVar43 * fVar43 +
                  fVar12 * fVar12 + fVar48 * fVar48 + fVar13 * fVar13 + fVar40 * fVar40 +
                  fVar14 * fVar14 + fVar44 * fVar44 + fVar15 * fVar15 + fVar49 * fVar49));
      param_1[0x353] = iVar21;
      *(longlong *)(param_1 + 0x364) = *(longlong *)(param_1 + 0x364) + 0x10;
    } while (iVar21 != iVar29);
    if (iVar21 <= iVar33) {
      return;
    }
LAB_ram_40077e5e:
    fVar38 = DAT_ram_400a0a08;
    iVar21 = param_1[0x351];
    if (param_1[0x351] < param_1[0x356] + 1) {
      iVar21 = param_1[0x356] + 1;
    }
    if (iVar21 < iVar33) {
      piVar19 = param_1 + iVar21 + 0x200;
      iVar31 = 0;
      iVar29 = iVar21;
      piVar23 = piVar19;
      fVar42 = DAT_ram_4009672c;
      do {
        iVar36 = iVar29 + 1;
        fVar51 = (float)*(undefined8 *)(piVar23 + 1);
        if (((fVar51 < (float)*(undefined8 *)piVar23) &&
            (fVar51 <= (float)*(undefined8 *)(piVar23 + 2))) && (fVar51 < fVar42)) {
          iVar31 = iVar29;
          fVar42 = fVar51;
        }
        piVar23 = piVar23 + 1;
        iVar29 = iVar36;
      } while (iVar33 != iVar36);
      if ((iVar31 != 0) && (fVar42 <= DAT_ram_40099f90)) {
        iVar33 = iVar31;
        if (iVar21 < iVar31) {
          do {
            iVar33 = iVar21;
            iVar21 = iVar33 + 1;
            fVar51 = (float)*(undefined8 *)(piVar19 + 1);
            if (((fVar51 < (float)*(undefined8 *)piVar19) &&
                (fVar51 <= (float)*(undefined8 *)(piVar19 + 2))) &&
               ((fVar51 < fVar42 + DAT_ram_400a0a04 && (fVar51 < DAT_ram_4009f4d8)))) break;
            piVar19 = piVar19 + 1;
            iVar33 = iVar21;
          } while (iVar31 != iVar21);
        }
        fVar42 = (float)param_1[0x334];
        iVar33 = iVar33 * 0x10;
        iVar21 = (int)(fVar42 / DAT_ram_4009a348);
        if ((int)(fVar42 / DAT_ram_4009a348) < iVar33 + -0x12) {
          iVar21 = iVar33 + -0x12;
        }
        iVar29 = (int)(fVar42 / DAT_ram_4009b1a4);
        if (iVar33 + 0x12 < (int)(fVar42 / DAT_ram_4009b1a4)) {
          iVar29 = iVar33 + 0x12;
        }
        if (param_1[0x34b] == 0) {
          iVar36 = 0xf;
          iVar31 = 0x10;
          iVar18 = 0x25;
        }
        else {
          iVar36 = 0x1f;
          iVar31 = 0x20;
          iVar18 = 0x11;
        }
        param_1[0x35c] = iVar31;
        param_1[0x35d] = iVar18;
        if ((int)(fVar42 / fVar38) < iVar29) {
          if (iVar36 == 0) {
            iVar36 = -1;
          }
          else {
            iVar36 = (0x760 - iVar29) / iVar36;
          }
          if (iVar36 < iVar18) {
            param_1[0x35d] = iVar36;
          }
          param_1[0x35b] = param_1[0x344];
        }
        puVar16 = PTR_entry_ram_40096740;
        param_1[0x35a] = iVar29;
        param_1[0x353] = iVar21;
        param_1[0x359] = iVar33;
        param_1[0x35e] = (int)puVar16;
        param_1[0x354] = 2;
        return;
      }
    }
    iVar21 = param_1[0x352];
    if (param_1[0x358] == 0) {
      param_1[0x358] = 1;
      param_1[0x356] = 1;
      param_1[0x357] = iVar21;
      param_1[0x353] = 1;
      return;
    }
    if (iVar33 < iVar21) {
      param_1[0x353] = iVar33 + 1;
      param_1[0x357] = iVar21;
      return;
    }
  }
  else {
    if (iVar33 - 2U < 2) {
      iVar21 = param_1[0x35a];
      iVar29 = param_1[0x353];
      iVar31 = 4;
      if (iVar33 != 2) {
        iVar31 = 1;
      }
      iVar36 = 4;
      do {
        while( true ) {
          if (iVar21 < iVar29) goto LAB_ram_40077c2a;
          iVar18 = param_1[0x35c];
          if (iVar18 < 1) {
            fVar38 = 0.0;
          }
          else {
            fVar38 = 0.0;
            uVar17 = param_1[0x35b] - 4;
            iVar20 = 0;
            fVar42 = DAT_ram_400a09e8;
            do {
              fVar52 = (float)*(undefined8 *)(*param_1 + ((uVar17 & 0x7ff) - iVar29 & 0x7ff) * 4);
              iVar20 = iVar20 + 1;
              fVar51 = (float)*(undefined8 *)(*param_1 + (uVar17 & 0x7ff) * 4);
              uVar17 = uVar17 - param_1[0x35d];
              fVar38 = (fVar51 - fVar52) * (fVar51 - fVar52) + fVar38;
              fVar42 = fVar42 + fVar51 * fVar51 + fVar52 * fVar52;
            } while (iVar18 != iVar20);
            fVar38 = fVar38 / fVar42;
          }
          *(longlong *)(param_1 + 0x364) = *(longlong *)(param_1 + 0x364) + (longlong)iVar18;
          if ((float)param_1[0x35e] <= fVar38) break;
          param_1[0x359] = iVar29;
          iVar29 = iVar29 + iVar31;
          param_1[0x35e] = (int)fVar38;
          param_1[0x353] = iVar29;
          iVar36 = iVar36 + -1;
          if (iVar36 == 0) {
            if (iVar29 <= iVar21) {
              return;
            }
            goto LAB_ram_40077c2a;
          }
        }
        iVar29 = iVar29 + iVar31;
        param_1[0x353] = iVar29;
        iVar36 = iVar36 + -1;
      } while (iVar36 != 0);
      if (iVar29 <= iVar21) {
        return;
      }
LAB_ram_40077c2a:
      fVar38 = DAT_ram_4009b1a4;
      if (iVar33 != 2) {
        param_1[0x354] = 4;
        return;
      }
      fVar42 = (float)param_1[0x334] / DAT_ram_4009a348;
      iVar21 = param_1[0x359] + -3;
      param_1[0x354] = 3;
      iVar29 = param_1[0x359] + 3;
      iVar33 = (int)fVar42;
      if (iVar33 < iVar21) {
        iVar33 = iVar21;
      }
      param_1[0x353] = iVar33;
      iVar33 = (int)((float)param_1[0x334] / fVar38);
      if (iVar29 < iVar33) {
        iVar33 = iVar29;
      }
      param_1[0x35a] = iVar33;
      return;
    }
    if (iVar33 != 4) {
      return;
    }
    iVar21 = param_1[0x35c];
    iVar33 = param_1[0x359];
    iVar29 = param_1[0x35d];
    if (iVar21 < 1) {
      fVar38 = 0.0;
      fVar51 = fVar38;
    }
    else {
      iVar31 = *param_1;
      fVar38 = 0.0;
      uVar34 = param_1[0x35b] - 4;
      iVar36 = 0;
      uVar17 = uVar34;
      fVar51 = DAT_ram_400a09e8;
      do {
        fVar53 = (float)*(undefined8 *)(iVar31 + ((uVar17 & 0x7ff) - (iVar33 + -1) & 0x7ff) * 4);
        iVar36 = iVar36 + 1;
        fVar52 = (float)*(undefined8 *)(iVar31 + (uVar17 & 0x7ff) * 4);
        uVar17 = uVar17 - iVar29;
        fVar38 = (fVar52 - fVar53) * (fVar52 - fVar53) + fVar38;
        fVar51 = fVar51 + fVar52 * fVar52 + fVar53 * fVar53;
      } while (iVar21 != iVar36);
      fVar38 = fVar38 / fVar51;
      fVar52 = 0.0;
      iVar36 = 0;
      fVar51 = DAT_ram_400a09e8;
      do {
        fVar55 = (float)*(undefined8 *)(iVar31 + ((uVar34 & 0x7ff) - (iVar33 + 1) & 0x7ff) * 4);
        iVar36 = iVar36 + 1;
        fVar53 = (float)*(undefined8 *)(iVar31 + (uVar34 & 0x7ff) * 4);
        uVar34 = uVar34 - iVar29;
        fVar52 = (fVar53 - fVar55) * (fVar53 - fVar55) + fVar52;
        fVar51 = fVar51 + fVar53 * fVar53 + fVar55 * fVar55;
      } while (iVar36 != iVar21);
      fVar51 = fVar52 / fVar51;
    }
    fVar52 = -((float)param_1[0x35e] * (float)PTR_entry_ram_40096740) + fVar38 + fVar51;
    *(ulonglong *)(param_1 + 0x364) =
         (((ulonglong)(longlong)iVar21 >> 0x1f) << 0x20 | (ulonglong)(uint)(iVar21 << 1)) +
         *(longlong *)(param_1 + 0x364);
    fVar53 = DAT_ram_4009a370;
    if (ABS(fVar52) <= fVar42) {
      fVar38 = 0.0;
    }
    else {
      fVar52 = ((fVar38 - fVar51) * (float)DAT_ram_4009675c) / fVar52;
      fVar38 = DAT_ram_400a0a00;
      if ((DAT_ram_400a0a00 <= fVar52) && (fVar38 = fVar52, DAT_ram_4009f080 < fVar52)) {
        fVar38 = DAT_ram_4009f080;
      }
    }
    fVar42 = DAT_ram_4009672c - (float)param_1[0x35e];
    if ((0.0 <= fVar42) &&
       ((fVar51 = DAT_ram_4009672c, DAT_ram_4009672c < fVar42 ||
        (fVar51 = fVar42, DAT_ram_4009f2ec <= fVar42)))) {
      fVar52 = (float)param_1[0x334];
      fVar42 = fVar52 / DAT_ram_4009a348;
      fVar38 = (float)iVar33 + fVar38;
      param_1[0x33d] = (int)fVar51;
      param_1[0x35f] = param_1[0x35f] + 1;
      param_1[0x362] = 0;
      iVar33 = 8;
      do {
        fVar51 = (float)iVar33;
        fVar55 = fVar38 / fVar51;
        if (fVar42 <= fVar55) {
          if (iVar21 < 1) {
            fVar52 = fVar52 * fVar51;
            *(longlong *)(param_1 + 0x364) = *(longlong *)(param_1 + 0x364) + (longlong)iVar21;
            break;
          }
          iVar36 = *param_1;
          fVar45 = 0.0;
          uVar17 = param_1[0x35b] - 4;
          iVar31 = 0;
          fVar41 = DAT_ram_400a09e8;
          do {
            uVar34 = uVar17 & 0x7ff;
            uVar24 = uVar34 - (int)fVar55;
            fVar50 = (float)*(undefined8 *)(iVar36 + (uVar24 & 0x7ff) * 4);
            iVar31 = iVar31 + 1;
            uVar17 = uVar17 - iVar29;
            fVar50 = (fVar55 - (float)(int)fVar55) *
                     ((float)*(undefined8 *)(iVar36 + (uVar24 - 1 & 0x7ff) * 4) - fVar50) + fVar50;
            fVar54 = (float)*(undefined8 *)(iVar36 + uVar34 * 4);
            fVar45 = (fVar54 - fVar50) * (fVar54 - fVar50) + fVar45;
            fVar41 = fVar41 + fVar54 * fVar54 + fVar50 * fVar50;
          } while (iVar21 != iVar31);
          *(longlong *)(param_1 + 0x364) = *(longlong *)(param_1 + 0x364) + (longlong)iVar21;
          if (fVar45 / fVar41 < fVar53) {
            fVar52 = fVar52 * fVar51;
            break;
          }
        }
        iVar33 = iVar33 + -1;
      } while (iVar33 != 1);
      fVar42 = DAT_ram_4009bdc0;
      param_1[0x33b] = (int)fVar38;
      param_1[0x33c] = (int)(fVar52 / fVar38);
      fVar38 = (float)FUN_ram_40000d2c((fVar52 / fVar38) / fVar42);
      fVar51 = DAT_ram_4009a330;
      fVar42 = fVar38 * DAT_ram_4009a330 + DAT_ram_400a0a10;
      fVar38 = fVar42 + (float)DAT_ram_4009675c;
      param_1[0x33e] = (int)fVar42;
      fVar38 = (float)FUN_ram_4000078c(fVar38);
      iVar33 = (int)fVar38;
      if (param_1[0x34e] < 0) {
        iVar21 = param_1[0x34b];
        param_1[0x34e] = iVar33;
        param_1[0x350] = 0;
LAB_ram_400782c4:
        if (iVar21 == 0) goto LAB_ram_40077ff2;
      }
      else {
        iVar21 = param_1[0x34b];
        fVar38 = ABS(fVar42 - (float)param_1[0x34e]);
        if (fVar38 <= DAT_ram_4009f238) {
          param_1[0x350] = 0;
          goto LAB_ram_400782c4;
        }
        if (iVar33 == param_1[0x34f]) {
          iVar29 = param_1[0x350];
          param_1[0x350] = iVar29 + 1;
          if (iVar29 + 1 < 2) goto LAB_ram_400782b2;
LAB_ram_400782bc:
          param_1[0x34e] = iVar33;
          param_1[0x350] = 0;
          goto LAB_ram_400782c4;
        }
        param_1[0x34f] = iVar33;
        param_1[0x350] = 1;
LAB_ram_400782b2:
        if (iVar21 == 0) {
          if (fVar38 <= (float)puVar16) goto LAB_ram_40077ff2;
          goto LAB_ram_400782bc;
        }
      }
      if (param_1[0x361] == 0) {
        piVar23 = param_1 + 0x313;
        do {
          fVar38 = 0.0;
          if ((((uint)param_1[0x34c] < 0xc) && (uVar17 = param_1[0x34d], uVar17 < 9)) &&
             (piVar23[0xe] + 7U < 0xf)) {
            iVar33 = param_1[0x34e] - param_1[0x34c];
            iVar21 = iVar33 % 0xc;
            if (iVar21 < 0) {
              iVar21 = iVar21 + 0xc;
            }
            iVar22 = (iVar33 - iVar21) / 0xc;
            iVar18 = *(int *)(&DAT_ram_400a0a44 + uVar17 * 0x1c);
            iVar21 = uVar17 * 0x1c;
            iVar31 = *(int *)(&DAT_ram_400a0a48 + iVar21);
            iVar37 = *(int *)(&DAT_ram_400a0a4c + iVar21);
            iVar35 = *(int *)(&DAT_ram_400a0a50 + iVar21);
            iVar32 = *(int *)(&DAT_ram_400a0a54 + iVar21);
            iVar30 = *(int *)(&DAT_ram_400a0a58 + iVar21);
            iVar36 = *(int *)(&DAT_ram_400a0a5c + iVar21);
            iVar26 = iVar22 + -1;
            iVar20 = iVar26 * 0xc;
            iVar29 = iVar18 + iVar20;
            iVar21 = iVar29 - iVar33;
            if (iVar21 < 0) {
              iVar21 = iVar33 - iVar29;
            }
            if (iVar21 < 100) {
              iVar25 = iVar26 * 7;
            }
            else {
              iVar29 = 0;
              iVar25 = 0;
              iVar21 = 100;
            }
            iVar28 = iVar31 + iVar20;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar26 * 7 + 1;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar37 + iVar20;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar26 * 7 + 2;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar35 + iVar20;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar26 * 7 + 3;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar32 + iVar20;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar26 * 7 + 4;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar30 + iVar20;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar26 * 7 + 5;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar36 + iVar20;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar26 * 7 + 6;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar26 = iVar20 + 0xc;
            iVar28 = iVar18 + iVar26;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar22 * 7;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar31 + iVar26;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar22 * 7 + 1;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar37 + iVar26;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar22 * 7 + 2;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar35 + iVar26;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar22 * 7 + 3;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar32 + iVar26;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar22 * 7 + 4;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar28 = iVar30 + iVar26;
            iVar27 = iVar28 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar28;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar22 * 7 + 5;
              iVar29 = iVar28;
              iVar21 = iVar27;
            }
            iVar26 = iVar26 + iVar36;
            iVar27 = iVar26 - iVar33;
            if (iVar27 < 0) {
              iVar27 = iVar33 - iVar26;
            }
            if (iVar27 < iVar21) {
              iVar25 = iVar22 * 7 + 6;
              iVar29 = iVar26;
              iVar21 = iVar27;
            }
            iVar20 = iVar20 + 0x18;
            iVar18 = iVar18 + iVar20;
            iVar26 = iVar18 - iVar33;
            iVar22 = iVar22 + 1;
            if (iVar26 < 0) {
              iVar26 = iVar33 - iVar18;
            }
            if (iVar26 < iVar21) {
              iVar25 = iVar22 * 7;
              iVar29 = iVar18;
              iVar21 = iVar26;
            }
            iVar31 = iVar31 + iVar20;
            iVar18 = iVar31 - iVar33;
            if (iVar18 < 0) {
              iVar18 = iVar33 - iVar31;
            }
            if (iVar18 < iVar21) {
              iVar25 = iVar22 * 7 + 1;
              iVar29 = iVar31;
              iVar21 = iVar18;
            }
            iVar37 = iVar37 + iVar20;
            iVar31 = iVar37 - iVar33;
            if (iVar31 < 0) {
              iVar31 = iVar33 - iVar37;
            }
            if (iVar31 < iVar21) {
              iVar25 = iVar22 * 7 + 2;
              iVar29 = iVar37;
              iVar21 = iVar31;
            }
            iVar35 = iVar35 + iVar20;
            iVar31 = iVar35 - iVar33;
            if (iVar31 < 0) {
              iVar31 = iVar33 - iVar35;
            }
            if (iVar31 < iVar21) {
              iVar25 = iVar22 * 7 + 3;
              iVar29 = iVar35;
              iVar21 = iVar31;
            }
            iVar32 = iVar32 + iVar20;
            iVar31 = iVar32 - iVar33;
            if (iVar31 < 0) {
              iVar31 = iVar33 - iVar32;
            }
            if (iVar31 < iVar21) {
              iVar25 = iVar22 * 7 + 4;
              iVar29 = iVar32;
              iVar21 = iVar31;
            }
            iVar30 = iVar30 + iVar20;
            iVar31 = iVar30 - iVar33;
            if (iVar31 < 0) {
              iVar31 = iVar33 - iVar30;
            }
            if (iVar31 < iVar21) {
              iVar25 = iVar22 * 7 + 5;
              iVar29 = iVar30;
              iVar21 = iVar31;
            }
            iVar20 = iVar20 + iVar36;
            iVar31 = iVar20 - iVar33;
            if (iVar31 < 0) {
              iVar31 = iVar33 - iVar20;
            }
            if (iVar31 < iVar21) {
              iVar25 = iVar22 * 7 + 6;
              iVar29 = iVar20;
            }
            iVar25 = iVar25 + piVar23[0xe];
            iVar33 = iVar25 % 7;
            if (iVar33 < 0) {
              iVar33 = iVar33 + 7;
            }
            fVar38 = (float)((*(int *)(&DAT_ram_400a0a44 + (uVar17 * 7 + iVar33) * 4) +
                             ((iVar25 - iVar33) / 7) * 0xc) - iVar29);
          }
          if ((float)piVar23[0xb] != fVar38) {
            piVar23[0xb] = (int)fVar38;
            iVar33 = FUN_ram_40000c50(fVar38 / fVar51);
            *piVar23 = iVar33;
          }
          piVar23 = piVar23 + 0x11;
        } while (param_1 + 0x335 != piVar23);
        param_1[0x354] = 0;
        return;
      }
      goto LAB_ram_40077ff2;
    }
  }
  param_1[0x33d] = 0;
  param_1[0x35f] = 0;
  if (param_1[0x362] < 6) {
    param_1[0x362] = param_1[0x362] + 1;
  }
LAB_ram_40077ff2:
  param_1[0x354] = 0;
  return;
}

