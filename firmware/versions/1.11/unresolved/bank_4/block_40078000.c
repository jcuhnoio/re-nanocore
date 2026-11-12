/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40078000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40078134.
 * REA evidence: ev_9120147d28437a81517e055672ccdc5d817807ef02f45d4f57d39bc8a516e6dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40078f12) */
/* WARNING: Removing unreachable block (ram,0x40078f22) */
/* WARNING: Removing unreachable block (ram,0x400791b0) */
/* WARNING: Removing unreachable block (ram,0x400791be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40078134(int *param_1,float *param_2,float *param_3,int param_4,ulonglong *param_5)

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
  bool bVar10;
  undefined4 uVar11;
  float fVar12;
  float in_register_00000100;
  ulonglong *puVar13;
  float *pfVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  ulonglong *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  int iVar27;
  float *pfVar28;
  float *pfVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  undefined *puVar42;
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
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  ulonglong uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float local_1a0 [64];
  
  fVar12 = DAT_ram_4009a9b8;
  if ((((param_1 == (int *)0x0) || (param_1[0x1ee] == 0)) || (param_2 == (float *)0x0)) ||
     ((param_3 == (float *)0x0 || (param_4 == 0)))) {
    switchD_ram:40023ae4::switchdataD_ram_40095560 = 0xfff8e586;
    return;
  }
  uVar31 = param_1[0x1d4];
  iVar32 = param_1[0x1db];
  pfVar28 = param_2 + param_4;
  puVar13 = param_5;
  puVar20 = param_5;
  fVar48 = DAT_ram_4009a988;
  do {
    fVar67 = *param_2;
    if (0xff < (int)((uint)puVar20 | 0x4009555c) || DAT_ram_4009555c < ABS(fVar67)) {
      fVar67 = 0.0;
    }
    iVar26 = *param_1;
    iVar19 = param_1[0x1d6];
    iVar22 = param_1[0x1d8];
    *(float *)(iVar26 + uVar31 * 4) = fVar67;
    fVar47 = (float)param_1[0x1ca];
    param_1[0x1d6] = iVar19 + 1;
    puVar20 = (ulonglong *)0xf;
    param_1[0x1ca] = (int)(fVar67 + fVar47);
    fVar70 = DAT_ram_4009a9b0;
    fVar68 = DAT_ram_4009a8bc;
    if (iVar22 + 1U < 0x10) {
      param_1[0x1d8] = iVar22 + 1U;
LAB_ram_400782b6:
      fVar45 = DAT_ram_40094604;
      if (iVar32 != 0) goto LAB_ram_400782c2;
LAB_ram_400785ec:
      iVar19 = 1;
    }
    else {
      fVar47 = (fVar67 + fVar47) * DAT_ram_4009a8bc;
      param_1[0x1d8] = 0;
      param_1[0x1ca] = 0;
      fVar47 = (float)param_1[0x1c7] * (fVar47 - (float)param_1[0x1c8]) + (float)param_1[0x1c8];
      param_1[0x1c8] = (int)fVar47;
      fVar50 = (float)param_1[0x1c7] * (fVar47 - (float)param_1[0x1c9]) + (float)param_1[0x1c9];
      uVar64 = (ulonglong)(uint)fVar50;
      param_1[0x1c9] = (int)fVar50;
      if (ABS(fVar47) < fVar70) {
        param_1[0x1c8] = 0;
      }
      if (ABS(fVar50) < fVar70) {
        uVar64 = 0;
        param_1[0x1c9] = 0;
      }
      iVar19 = param_1[0x1d5];
      param_1[iVar19 + 0x81] = (int)uVar64;
      *(ulonglong *)(param_1 + iVar19 + 1) = uVar64;
      iVar22 = param_1[0x1e4];
      param_1[0x1d5] = iVar19 + 1U & 0x7f;
      fVar47 = DAT_ram_4009a9c4;
      puVar42 = PTR_entry_ram_40094618;
      if (iVar22 == 0) goto LAB_ram_400782a6;
      iVar19 = 1;
      if (iVar22 == 1) {
        iVar22 = param_1[0x1e3];
        iVar26 = param_1[0x1e7];
        piVar17 = param_1 + (0x165 - iVar22);
        iVar19 = iVar22 + 4;
        piVar25 = param_1 + iVar22;
        do {
          if (iVar26 < iVar22) goto LAB_ram_40079472;
          fVar47 = (float)piVar17[0x3c];
          fVar50 = (float)piVar17[0x38];
          fVar45 = (float)param_1[0x1a1];
          fVar57 = (float)piVar17[0x34];
          fVar66 = (float)param_1[0x19d];
          fVar46 = (float)piVar17[0x30];
          fVar63 = (float)param_1[0x199];
          fVar44 = (float)param_1[0x195];
          fVar43 = (float)piVar17[0x2c];
          fVar65 = (float)piVar17[0x28];
          fVar56 = (float)param_1[0x191];
          fVar49 = (float)piVar17[0x24];
          fVar69 = (float)param_1[0x18d];
          fVar37 = (float)piVar17[0x20];
          fVar51 = (float)param_1[0x189];
          fVar1 = (float)param_1[0x185];
          fVar58 = (float)*(undefined8 *)(piVar17 + 0x1c);
          fVar2 = (float)param_1[0x181];
          fVar52 = (float)*(undefined8 *)(piVar17 + 0x18);
          fVar3 = (float)param_1[0x17d];
          fVar59 = (float)*(undefined8 *)(piVar17 + 0x14);
          fVar9 = (float)param_1[0x179];
          fVar54 = (float)*(undefined8 *)(piVar17 + 0x10);
          fVar4 = (float)param_1[0x175];
          fVar60 = (float)*(undefined8 *)(piVar17 + 0xc);
          fVar5 = (float)param_1[0x171];
          fVar53 = (float)*(undefined8 *)(piVar17 + 8);
          fVar6 = (float)param_1[0x16d];
          fVar55 = (float)*(undefined8 *)(piVar17 + 4);
          fVar7 = (float)param_1[0x169];
          fVar61 = (float)*(undefined8 *)piVar17;
          fVar8 = (float)param_1[0x165];
          iVar22 = iVar22 + 1;
          piVar17 = piVar17 + -1;
          piVar25[0x101] =
               (int)(((fVar8 - fVar61) * (fVar8 - fVar61) +
                     (fVar7 - fVar55) * (fVar7 - fVar55) +
                     (fVar6 - fVar53) * (fVar6 - fVar53) +
                     (fVar5 - fVar60) * (fVar5 - fVar60) +
                     (fVar4 - fVar54) * (fVar4 - fVar54) +
                     (fVar9 - fVar59) * (fVar9 - fVar59) +
                     (fVar3 - fVar52) * (fVar3 - fVar52) +
                     (fVar2 - fVar58) * (fVar2 - fVar58) +
                     (fVar1 - fVar37) * (fVar1 - fVar37) +
                     (fVar51 - fVar49) * (fVar51 - fVar49) +
                     (fVar69 - fVar65) * (fVar69 - fVar65) +
                     (fVar56 - fVar43) * (fVar56 - fVar43) +
                     (fVar44 - fVar46) * (fVar44 - fVar46) +
                     (fVar63 - fVar57) * (fVar63 - fVar57) +
                     (fVar66 - fVar50) * (fVar66 - fVar50) +
                     (fVar45 - fVar47) * (fVar45 - fVar47) + 0.0) /
                    (fVar45 * fVar45 + fVar47 * fVar47 + fVar70 + fVar66 * fVar66 + fVar50 * fVar50
                     + fVar63 * fVar63 + fVar57 * fVar57 + fVar44 * fVar44 + fVar46 * fVar46 +
                     fVar56 * fVar56 + fVar43 * fVar43 + fVar69 * fVar69 + fVar65 * fVar65 +
                     fVar51 * fVar51 + fVar49 * fVar49 + fVar1 * fVar1 + fVar37 * fVar37 +
                     fVar2 * fVar2 + fVar58 * fVar58 + fVar3 * fVar3 + fVar52 * fVar52 +
                     fVar9 * fVar9 + fVar59 * fVar59 + fVar4 * fVar4 + fVar54 * fVar54 +
                     fVar5 * fVar5 + fVar60 * fVar60 + fVar6 * fVar6 + fVar53 * fVar53 +
                     fVar7 * fVar7 + fVar55 * fVar55 + fVar8 * fVar8 + fVar61 * fVar61));
          param_1[0x1e3] = iVar22;
          *(longlong *)(param_1 + 0x1f2) = *(longlong *)(param_1 + 0x1f2) + 0x10;
          piVar25 = piVar25 + 1;
        } while (iVar22 != iVar19);
        if (iVar26 < iVar22) {
LAB_ram_40079472:
          fVar47 = DAT_ram_4009a9a8;
          puVar42 = PTR_entry_ram_40094618;
          iVar19 = param_1[0x1e1];
          if (param_1[0x1e1] < param_1[0x1e6] + 1) {
            iVar19 = param_1[0x1e6] + 1;
          }
          if (iVar19 < iVar26) {
            piVar17 = param_1 + iVar19;
            iVar23 = 0;
            iVar22 = iVar19;
            piVar25 = piVar17;
            fVar70 = DAT_ram_40094604;
            do {
              fVar50 = (float)piVar25[0x101];
              iVar21 = iVar22 + 1;
              if (((fVar50 < (float)piVar25[0x100]) && (fVar50 <= (float)piVar25[0x102])) &&
                 (fVar50 < fVar70)) {
                iVar23 = iVar22;
                fVar70 = fVar50;
              }
              piVar25 = piVar25 + 1;
              iVar22 = iVar21;
            } while (iVar26 != iVar21);
            if ((iVar23 != 0) && (fVar70 <= DAT_ram_40094ee8)) {
              iVar22 = iVar23;
              if (iVar19 < iVar23) {
                do {
                  iVar22 = iVar19;
                  fVar50 = (float)piVar17[0x101];
                  iVar19 = iVar22 + 1;
                  if ((((fVar50 < (float)piVar17[0x100]) && (fVar50 <= (float)piVar17[0x102])) &&
                      (fVar50 < fVar70 + DAT_ram_4009a9c0)) && (fVar50 < DAT_ram_4009a3b8)) break;
                  piVar17 = piVar17 + 1;
                  iVar22 = iVar19;
                } while (iVar23 != iVar19);
              }
              fVar70 = (float)param_1[0x1c4] / DAT_ram_40095298;
              iVar22 = iVar22 * 0x10;
              param_1[0x1e9] = iVar22;
              param_1[0x1e4] = 2;
              param_1[0x1ec] = (int)puVar42;
              iVar19 = (int)fVar70;
              if (iVar19 < iVar22 + -0x12) {
                iVar19 = iVar22 + -0x12;
              }
              param_1[0x1e3] = iVar19;
              iVar19 = (int)((float)param_1[0x1c4] / fVar47);
              if (iVar22 + 0x12 < iVar19) {
                iVar19 = iVar22 + 0x12;
              }
              param_1[0x1ea] = iVar19;
              goto LAB_ram_400782a6;
            }
          }
          if (param_1[0x1e8] == 0) {
            param_1[0x1e8] = 1;
            param_1[0x1e6] = 1;
            param_1[0x1e7] = param_1[0x1e2];
            param_1[0x1e3] = 1;
          }
          else {
LAB_ram_400795d8:
            param_1[0x1cd] = 0;
            param_1[0x1ed] = 0;
            if (param_1[0x1f0] < 6) {
              param_1[0x1f0] = param_1[0x1f0] + 1;
              param_1[0x1e4] = 0;
            }
            else {
LAB_ram_400791fc:
              param_1[0x1e4] = 0;
            }
          }
        }
      }
      else if (iVar22 - 2U < 2) {
        if (iVar22 == 2) {
          iVar19 = 4;
        }
        iVar21 = 4;
        iVar23 = param_1[0x1e3];
        do {
          while( true ) {
            iVar16 = iVar23;
            if (param_1[0x1ea] < iVar16) goto LAB_ram_400796a0;
            if (iVar32 == 0) {
              uVar18 = 0x10;
              iVar27 = 0x10;
              iVar23 = 0x25;
            }
            else {
              uVar18 = 0x20;
              iVar27 = 0x20;
              iVar23 = 0x11;
            }
            fVar50 = 0.0;
            uVar15 = param_1[0x1eb] - 4;
            iVar33 = 0;
            fVar47 = fVar70;
            do {
              fVar57 = (float)*(undefined8 *)(iVar26 + ((uVar15 & 0x7ff) - iVar16 & 0x7ff) * 4);
              iVar33 = iVar33 + 1;
              fVar45 = (float)*(undefined8 *)(iVar26 + (uVar15 & 0x7ff) * 4);
              uVar15 = uVar15 - iVar23;
              fVar50 = (fVar45 - fVar57) * (fVar45 - fVar57) + fVar50;
              fVar47 = fVar47 + fVar45 * fVar45 + fVar57 * fVar57;
            } while (iVar33 != iVar27);
            *(ulonglong *)(param_1 + 0x1f2) = *(longlong *)(param_1 + 0x1f2) + (ulonglong)uVar18;
            if ((float)param_1[0x1ec] <= fVar50 / fVar47) break;
            param_1[0x1e9] = iVar16;
            param_1[0x1ec] = (int)(fVar50 / fVar47);
            param_1[0x1e3] = iVar16 + iVar19;
            iVar21 = iVar21 + -1;
            iVar23 = iVar16 + iVar19;
            if (iVar21 == 0) goto LAB_ram_40079698;
          }
          param_1[0x1e3] = iVar16 + iVar19;
          iVar21 = iVar21 + -1;
          iVar23 = iVar16 + iVar19;
        } while (iVar21 != 0);
LAB_ram_40079698:
        if (param_1[0x1ea] < iVar16 + iVar19) {
LAB_ram_400796a0:
          fVar47 = DAT_ram_4009a9a8;
          if (iVar22 == 2) {
            fVar70 = (float)param_1[0x1c4] / DAT_ram_40095298;
            iVar22 = param_1[0x1e9] + -3;
            param_1[0x1e4] = 3;
            iVar26 = param_1[0x1e9] + 3;
            iVar19 = (int)fVar70;
            if (iVar19 < iVar22) {
              iVar19 = iVar22;
            }
            param_1[0x1e3] = iVar19;
            iVar19 = (int)((float)param_1[0x1c4] / fVar47);
            if (iVar26 < iVar19) {
              iVar19 = iVar26;
            }
            param_1[0x1ea] = iVar19;
          }
          else {
            param_1[0x1e4] = 4;
          }
        }
      }
      else if (iVar22 == 4) {
        iVar19 = param_1[0x1e9];
        if (iVar32 == 0) {
          uVar18 = 0x20;
          uVar15 = 0x10;
          iVar22 = 0x10;
          iVar23 = 0x25;
        }
        else {
          uVar18 = 0x40;
          uVar15 = 0x20;
          iVar22 = 0x20;
          iVar23 = 0x11;
        }
        fVar45 = 0.0;
        uVar35 = param_1[0x1eb] - 4;
        iVar21 = 0;
        uVar40 = uVar35;
        fVar50 = fVar70;
        do {
          fVar66 = (float)*(undefined8 *)(iVar26 + ((uVar40 & 0x7ff) - (iVar19 + -1) & 0x7ff) * 4);
          iVar21 = iVar21 + 1;
          fVar57 = (float)*(undefined8 *)(iVar26 + (uVar40 & 0x7ff) * 4);
          uVar40 = uVar40 - iVar23;
          fVar45 = (fVar57 - fVar66) * (fVar57 - fVar66) + fVar45;
          fVar50 = fVar50 + fVar57 * fVar57 + fVar66 * fVar66;
        } while (iVar21 != iVar22);
        fVar66 = 0.0;
        iVar21 = 0;
        uVar40 = uVar35;
        fVar57 = fVar70;
        do {
          fVar46 = *(float *)(iVar26 + ((uVar40 & 0x7ff) - (iVar19 + 1) & 0x7ff) * 4);
          fVar63 = *(float *)(iVar26 + (uVar40 & 0x7ff) * 4);
          iVar21 = iVar21 + 1;
          uVar40 = uVar40 - iVar23;
          fVar66 = (fVar63 - fVar46) * (fVar63 - fVar46) + fVar66;
          fVar57 = fVar57 + fVar63 * fVar63 + fVar46 * fVar46;
        } while (iVar21 != iVar22);
        fVar46 = (float)param_1[0x1ec] * (float)PTR_entry_ram_40094618;
        *(ulonglong *)(param_1 + 0x1f2) = *(longlong *)(param_1 + 0x1f2) + (ulonglong)uVar18;
        fVar46 = -fVar46 + fVar45 / fVar50 + fVar66 / fVar57;
        if (fVar47 < ABS(fVar46)) {
          fVar46 = ((fVar45 / fVar50 - fVar66 / fVar57) * DAT_ram_40094634) / fVar46;
          fVar47 = DAT_ram_4009a9b4;
          if ((DAT_ram_4009a9b4 <= fVar46) && (fVar47 = fVar46, DAT_ram_40099f88 < fVar46)) {
            fVar47 = DAT_ram_40099f88;
          }
        }
        else {
          fVar47 = 0.0;
        }
        fVar50 = DAT_ram_40094604 - (float)param_1[0x1ec];
        if ((fVar50 < 0.0) ||
           ((fVar45 = DAT_ram_40094604, fVar50 <= DAT_ram_40094604 &&
            (fVar45 = fVar50, fVar50 < DAT_ram_4009a1c8)))) goto LAB_ram_400795d8;
        fVar50 = (float)param_1[0x1c4];
        fVar47 = (float)iVar19 + fVar47;
        fVar48 = fVar50 / DAT_ram_40095298;
        param_1[0x1cd] = (int)fVar45;
        param_1[0x1ed] = param_1[0x1ed] + 1;
        param_1[0x1f0] = 0;
        iVar32 = 8;
        do {
          uVar62 = _DAT_ram_400952c0;
          fVar45 = fVar47 / (float)iVar32;
          if (fVar48 <= fVar45) {
            fVar66 = 0.0;
            iVar19 = 0;
            uVar31 = uVar35;
            fVar57 = fVar70;
            do {
              uVar18 = uVar31 & 0x7ff;
              uVar40 = uVar18 - (int)fVar45;
              fVar46 = (float)*(undefined8 *)(iVar26 + (uVar40 & 0x7ff) * 4);
              iVar19 = iVar19 + 1;
              uVar31 = uVar31 - iVar23;
              fVar46 = (fVar45 - (float)(int)fVar45) *
                       ((float)*(undefined8 *)(iVar26 + (uVar40 - 1 & 0x7ff) * 4) - fVar46) + fVar46
              ;
              fVar63 = (float)*(undefined8 *)(iVar26 + uVar18 * 4);
              fVar66 = (fVar63 - fVar46) * (fVar63 - fVar46) + fVar66;
              fVar57 = fVar57 + fVar63 * fVar63 + fVar46 * fVar46;
            } while (iVar19 != iVar22);
            *(ulonglong *)(param_1 + 0x1f2) = *(longlong *)(param_1 + 0x1f2) + (ulonglong)uVar15;
            if (fVar66 / fVar57 < (float)uVar62) {
              fVar50 = fVar50 * (float)iVar32;
              break;
            }
          }
          iVar32 = iVar32 + -1;
        } while (iVar32 != 1);
        fVar48 = DAT_ram_40096b18;
        param_1[0x1cb] = (int)fVar47;
        param_1[0x1cc] = (int)(fVar50 / fVar47);
        fVar48 = (float)FUN_ram_40000d2c((fVar50 / fVar47) / fVar48);
        fVar70 = DAT_ram_40095280;
        fVar47 = fVar48 * DAT_ram_40095280 + DAT_ram_4009a9c8;
        fVar48 = fVar47 + DAT_ram_40094634;
        param_1[0x1ce] = (int)fVar47;
        fVar50 = (float)FUN_ram_4000078c(fVar48);
        fVar48 = DAT_ram_4009a988;
        iVar19 = (int)fVar50;
        if (param_1[0x1de] < 0) {
          iVar32 = param_1[0x1db];
          param_1[0x1de] = iVar19;
          param_1[0x1e0] = 0;
LAB_ram_40078ec6:
          if (iVar32 != 0) {
LAB_ram_40078eca:
            if (param_1[0x1ef] == 0) {
              piVar25 = param_1 + 0x1a3;
              do {
                fVar47 = 0.0;
                if ((((uint)param_1[0x1dc] < 0xc) && (uVar31 = param_1[0x1dd], uVar31 < 9)) &&
                   (piVar25[0xe] + 7U < 0xf)) {
                  iVar32 = param_1[0x1de] - param_1[0x1dc];
                  iVar19 = iVar32 % 0xc;
                  if (iVar19 < 0) {
                    iVar19 = iVar19 + 0xc;
                  }
                  iVar16 = (iVar32 - iVar19) / 0xc;
                  iVar26 = *(int *)((int)&DAT_ram_4009a9d8 + uVar31 * 0x1c + 4);
                  iVar19 = uVar31 * 0x1c;
                  iVar41 = *(int *)(&DAT_ram_4009a9e0 + iVar19);
                  iVar39 = *(int *)(&DAT_ram_4009a9e4 + iVar19);
                  iVar38 = *(int *)(&DAT_ram_4009a9e8 + iVar19);
                  iVar36 = *(int *)(&DAT_ram_4009a9ec + iVar19);
                  iVar23 = *(int *)(&DAT_ram_4009a9f0 + iVar19);
                  iVar33 = *(int *)(&DAT_ram_4009a9f4 + iVar19);
                  iVar27 = iVar16 + -1;
                  iVar21 = iVar27 * 0xc;
                  iVar22 = iVar26 + iVar21;
                  iVar19 = iVar22 - iVar32;
                  if (iVar19 < 0) {
                    iVar19 = iVar32 - iVar22;
                  }
                  if (iVar19 < 100) {
                    iVar24 = iVar27 * 7;
                  }
                  else {
                    iVar22 = 0;
                    iVar24 = 0;
                    iVar19 = 100;
                  }
                  iVar34 = iVar41 + iVar21;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar27 * 7 + 1;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar21 + iVar39;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar27 * 7 + 2;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar21 + iVar38;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar27 * 7 + 3;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar21 + iVar36;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar27 * 7 + 4;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar21 + iVar23;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar27 * 7 + 5;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar21 + iVar33;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar27 * 7 + 6;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar27 = iVar21 + 0xc;
                  iVar34 = iVar26 + iVar27;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar16 * 7;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar41 + iVar27;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar16 * 7 + 1;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar39 + iVar27;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar16 * 7 + 2;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar38 + iVar27;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar16 * 7 + 3;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar36 + iVar27;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar16 * 7 + 4;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar34 = iVar23 + iVar27;
                  iVar30 = iVar34 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar34;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar16 * 7 + 5;
                    iVar22 = iVar34;
                    iVar19 = iVar30;
                  }
                  iVar27 = iVar27 + iVar33;
                  iVar30 = iVar27 - iVar32;
                  if (iVar30 < 0) {
                    iVar30 = iVar32 - iVar27;
                  }
                  if (iVar30 < iVar19) {
                    iVar24 = iVar16 * 7 + 6;
                    iVar22 = iVar27;
                    iVar19 = iVar30;
                  }
                  iVar21 = iVar21 + 0x18;
                  iVar26 = iVar26 + iVar21;
                  iVar27 = iVar26 - iVar32;
                  iVar16 = iVar16 + 1;
                  if (iVar27 < 0) {
                    iVar27 = iVar32 - iVar26;
                  }
                  if (iVar27 < iVar19) {
                    iVar24 = iVar16 * 7;
                    iVar22 = iVar26;
                    iVar19 = iVar27;
                  }
                  iVar41 = iVar41 + iVar21;
                  iVar26 = iVar41 - iVar32;
                  if (iVar26 < 0) {
                    iVar26 = iVar32 - iVar41;
                  }
                  if (iVar26 < iVar19) {
                    iVar24 = iVar16 * 7 + 1;
                    iVar22 = iVar41;
                    iVar19 = iVar26;
                  }
                  iVar39 = iVar39 + iVar21;
                  iVar26 = iVar39 - iVar32;
                  if (iVar26 < 0) {
                    iVar26 = iVar32 - iVar39;
                  }
                  if (iVar26 < iVar19) {
                    iVar24 = iVar16 * 7 + 2;
                    iVar22 = iVar39;
                    iVar19 = iVar26;
                  }
                  iVar38 = iVar38 + iVar21;
                  iVar26 = iVar38 - iVar32;
                  if (iVar26 < 0) {
                    iVar26 = iVar32 - iVar38;
                  }
                  if (iVar26 < iVar19) {
                    iVar24 = iVar16 * 7 + 3;
                    iVar22 = iVar38;
                    iVar19 = iVar26;
                  }
                  iVar36 = iVar36 + iVar21;
                  iVar26 = iVar36 - iVar32;
                  if (iVar26 < 0) {
                    iVar26 = iVar32 - iVar36;
                  }
                  if (iVar26 < iVar19) {
                    iVar24 = iVar16 * 7 + 4;
                    iVar22 = iVar36;
                    iVar19 = iVar26;
                  }
                  iVar23 = iVar23 + iVar21;
                  iVar26 = iVar23 - iVar32;
                  if (iVar26 < 0) {
                    iVar26 = iVar32 - iVar23;
                  }
                  if (iVar26 < iVar19) {
                    iVar24 = iVar16 * 7 + 5;
                    iVar22 = iVar23;
                    iVar19 = iVar26;
                  }
                  iVar21 = iVar21 + iVar33;
                  iVar26 = iVar21 - iVar32;
                  if (iVar26 < 0) {
                    iVar26 = iVar32 - iVar21;
                  }
                  if (iVar26 < iVar19) {
                    iVar24 = iVar16 * 7 + 6;
                    iVar22 = iVar21;
                  }
                  iVar24 = iVar24 + piVar25[0xe];
                  iVar32 = iVar24 % 7;
                  if (iVar32 < 0) {
                    iVar32 = iVar32 + 7;
                  }
                  fVar47 = (float)((*(int *)((int)&DAT_ram_4009a9d8 + (uVar31 * 7 + iVar32) * 4 + 4)
                                   + ((iVar24 - iVar32) / 7) * 0xc) - iVar22);
                }
                if ((float)piVar25[0xb] != fVar47) {
                  piVar25[0xb] = (int)fVar47;
                  iVar32 = FUN_ram_40000c50(fVar47 / fVar70);
                  fVar48 = DAT_ram_4009a988;
                  *piVar25 = iVar32;
                }
                piVar25 = piVar25 + 0x11;
              } while (param_1 + 0x1c5 != piVar25);
              uVar31 = param_1[0x1d4];
              iVar32 = param_1[0x1db];
              goto LAB_ram_400791fc;
            }
          }
        }
        else {
          iVar32 = param_1[0x1db];
          fVar47 = ABS(fVar47 - (float)param_1[0x1de]);
          if (fVar47 <= DAT_ram_4009a118) {
            param_1[0x1e0] = 0;
            goto LAB_ram_40078ec6;
          }
          if (iVar19 == param_1[0x1df]) {
            iVar22 = param_1[0x1e0];
            param_1[0x1e0] = iVar22 + 1;
            if (iVar22 + 1 < 2) goto LAB_ram_40078eb2;
LAB_ram_40078ebe:
            param_1[0x1de] = iVar19;
            param_1[0x1e0] = 0;
            goto LAB_ram_40078ec6;
          }
          param_1[0x1df] = iVar19;
          param_1[0x1e0] = 1;
LAB_ram_40078eb2:
          if (iVar32 != 0) goto LAB_ram_40078eca;
          if ((float)puVar42 < fVar47) goto LAB_ram_40078ebe;
        }
        uVar31 = param_1[0x1d4];
        param_1[0x1e4] = 0;
      }
LAB_ram_400782a6:
      fVar47 = DAT_ram_40095298;
      puVar20 = (ulonglong *)0x1f;
      if (param_1[0x1d7] + 1U < 0x20) {
        param_1[0x1d7] = param_1[0x1d7] + 1U;
        goto LAB_ram_400782b6;
      }
      fVar48 = (float)param_1[0x1c4];
      param_1[0x1d7] = 0;
      fVar70 = (float)param_1[0x1cd];
      fVar50 = (float)param_1[0x1cb];
      fVar45 = fVar50;
      if ((iVar32 == 0) || (param_1[0x1f0] < 6)) {
        if (fVar70 < DAT_ram_40099f88) {
          fVar45 = fVar48 * DAT_ram_4009a6c0;
        }
        bVar10 = false;
        fVar57 = fVar48 / DAT_ram_4009a9a8;
      }
      else {
        if (fVar70 < DAT_ram_40099f88) {
          fVar45 = fVar48 * DAT_ram_40094e8c;
        }
        bVar10 = true;
        fVar57 = fVar48 * DAT_ram_40094e98;
      }
      fVar66 = fVar48 / fVar47;
      if ((fVar48 / fVar47 <= fVar45) && (fVar66 = fVar57, fVar45 <= fVar57)) {
        fVar66 = fVar45;
      }
      if (fVar66 < fVar48 * DAT_ram_4009a404) {
        fVar48 = (float)FUN_ram_40000658((fVar48 * DAT_ram_4009a404) / fVar66);
        fVar66 = fVar66 * (float)(int)fVar48;
      }
      fVar48 = DAT_ram_4009a988;
      fVar47 = DAT_ram_4009a98c;
      if (!bVar10) {
        fVar48 = DAT_ram_4009a990;
        fVar47 = DAT_ram_4009a994;
      }
      if (iVar32 == 0) {
        fVar45 = (float)FUN_ram_40000844(param_1[0x1a2],param_1[0x1a3]);
        fVar47 = (float)FUN_ram_40000844(DAT_ram_400952d4,
                                         fVar47 * (fVar45 - DAT_ram_40094604) + DAT_ram_40094eb0);
        param_1[0x1a9] = (int)fVar66;
        puVar20 = (ulonglong *)param_1[0x1d6];
        param_1[0x1aa] = (int)fVar47;
        param_1[0x1ac] = (int)fVar48;
        param_1[0x1ab] = (int)(fVar66 + fVar47);
        fVar48 = DAT_ram_4009a988;
        if ((ulonglong *)0x1ff < puVar20) goto LAB_ram_40078736;
        goto LAB_ram_400785ec;
      }
      fVar46 = (float)FUN_ram_40000844(param_1[0x1a2],param_1[0x1a3]);
      uVar11 = DAT_ram_400952d4;
      fVar57 = DAT_ram_40094eb0;
      fVar45 = DAT_ram_40094604;
      fVar46 = (float)FUN_ram_40000844(DAT_ram_400952d4,
                                       fVar47 * (fVar46 - DAT_ram_40094604) + DAT_ram_40094eb0);
      param_1[0x1a9] = (int)fVar66;
      param_1[0x1aa] = (int)fVar46;
      param_1[0x1ac] = (int)fVar48;
      param_1[0x1ab] = (int)(fVar66 + fVar46);
      fVar46 = (float)FUN_ram_40000844(param_1[0x1b3],param_1[0x1b4]);
      fVar47 = (float)FUN_ram_40000844(uVar11,(fVar46 - fVar45) * fVar47 + fVar57);
      param_1[0x1ba] = (int)fVar66;
      puVar20 = (ulonglong *)param_1[0x1d6];
      param_1[0x1bb] = (int)fVar47;
      param_1[0x1bd] = (int)fVar48;
      param_1[0x1bc] = (int)(fVar47 + fVar66);
      fVar48 = DAT_ram_4009a988;
      if ((ulonglong *)0x1ff < puVar20) {
LAB_ram_40078736:
        fVar48 = DAT_ram_4009a988;
        if (param_1[0x1e4] == 0) {
          FUN_ram_4000304c(param_1 + 0x132,param_1 + param_1[0x1d5] + 0x11,0x1c0);
          fVar48 = DAT_ram_4009a988;
          fVar47 = _DAT_ram_40094638;
          puVar20 = (ulonglong *)&DAT_ram_4009a988;
          if ((float)param_1[0x165] * (float)param_1[0x165] +
              (float)param_1[0x169] * (float)param_1[0x169] +
              (float)param_1[0x16d] * (float)param_1[0x16d] +
              (float)param_1[0x171] * (float)param_1[0x171] +
              (float)param_1[0x175] * (float)param_1[0x175] +
              (float)param_1[0x179] * (float)param_1[0x179] +
              (float)param_1[0x17d] * (float)param_1[0x17d] +
              (float)param_1[0x181] * (float)param_1[0x181] +
              (float)param_1[0x185] * (float)param_1[0x185] +
              (float)param_1[0x189] * (float)param_1[0x189] +
              (float)param_1[0x18d] * (float)param_1[0x18d] +
              (float)param_1[0x191] * (float)param_1[0x191] +
              (float)param_1[0x195] * (float)param_1[0x195] +
              (float)param_1[0x199] * (float)param_1[0x199] +
              (float)param_1[0x19d] * (float)param_1[0x19d] +
              (float)param_1[0x1a1] * (float)param_1[0x1a1] + 0.0 < DAT_ram_4009a9c4) {
            param_1[0x1f0] = 0;
            param_1[0x1cd] = 0;
            param_1[0x1ed] = 0;
          }
          else {
            iVar22 = param_1[0x1e5];
            param_1[0x1eb] = uVar31;
            param_1[0x1e5] = iVar22 + 1U;
            fVar45 = DAT_ram_40094634;
            iVar19 = param_1[0x1e2];
            if ((fVar70 < fVar47) || ((iVar22 + 1U & 7) == 0)) {
              iVar22 = 1;
              param_1[0x1e8] = 1;
              param_1[0x1e6] = 1;
              param_1[0x1e7] = iVar19;
            }
            else {
              param_1[0x1e8] = 0;
              iVar26 = (int)(fVar50 * fVar68 + fVar45);
              iVar22 = iVar26 + -4;
              iVar26 = iVar26 + 4;
              param_1[0x1e6] = iVar22;
              param_1[0x1e7] = iVar26;
              if (iVar22 < 1) {
                iVar22 = 1;
                param_1[0x1e6] = 1;
              }
              if (iVar19 < iVar26) {
                param_1[0x1e7] = iVar19;
              }
            }
            fVar47 = DAT_ram_40094604;
            puVar20 = (ulonglong *)(s_Request_buffer_too_small_ram_40094820 + 4);
            param_1[0x1e3] = iVar22;
            param_1[0x101] = (int)fVar47;
            param_1[0x1e4] = 1;
          }
        }
        goto LAB_ram_400782b6;
      }
LAB_ram_400782c2:
      iVar19 = 2;
      if ((float)param_1[0x1cf] < fVar45) {
        fVar47 = (float)param_1[0x1cf] + DAT_ram_4009a988;
        if (fVar47 < 0.0) {
          iVar19 = 2;
          param_1[0x1cf] = 0;
        }
        else {
          if (fVar45 < fVar47) {
            fVar47 = fVar45;
          }
          param_1[0x1cf] = (int)fVar47;
          iVar19 = 2;
        }
      }
    }
    fVar45 = DAT_ram_4009a9d4;
    fVar50 = DAT_ram_40094604;
    fVar47 = 0.0;
    fVar70 = 0.0;
    fVar68 = 0.0;
    iVar22 = 0;
    pfVar29 = (float *)(param_1 + 0x1a2);
    fVar57 = DAT_ram_4009a9cc;
    puVar42 = PTR_entry_ram_40094618;
    fVar66 = DAT_ram_40094614;
    fVar46 = DAT_ram_40094e88;
    do {
      fVar44 = pfVar29[0xe] - pfVar29[0xd];
      fVar63 = fVar12;
      if ((fVar12 <= fVar44) && (fVar63 = fVar44, fVar48 < fVar44)) {
        fVar63 = fVar48;
      }
      fVar63 = pfVar29[0xd] + fVar63;
      pfVar29[0xd] = fVar63;
      if ((fVar63 != 0.0) || (pfVar29[0xe] != 0.0)) {
        if (ABS(pfVar29[0xb]) < fVar57) {
          pfVar29[0xb] = 0.0;
        }
        fVar43 = pfVar29[1];
        fVar44 = *pfVar29;
        if (fVar43 != fVar44) {
          if (ABS(fVar43 - fVar44) <= DAT_ram_4009a9d0) {
            *pfVar29 = fVar43;
            fVar44 = fVar43;
          }
          else {
            fVar44 = (fVar43 - fVar44) * (float)param_1[0x1c5] + fVar44;
            *pfVar29 = fVar44;
          }
        }
        fVar43 = pfVar29[6];
        puVar20 = (ulonglong *)(uint)(fVar43 == (float)(int)pfVar29[0x10]);
        if (puVar20 == (ulonglong *)0x0) {
          fVar65 = fVar12;
          if (pfVar29[0x10] != 0.0) {
            fVar65 = DAT_ram_4009a988;
          }
          fVar43 = fVar43 + fVar65;
          pfVar29[6] = fVar43;
        }
        fVar56 = 0.0;
        fVar65 = fVar67;
        if (fVar43 < fVar50) {
          fVar49 = pfVar29[4];
          fVar44 = fVar50 - fVar44;
          iVar26 = *param_1;
          fVar56 = (float)uVar31;
          fVar65 = DAT_ram_4009a9d4;
          if (fVar50 <= fVar49) {
            fVar69 = pfVar29[2];
            if ((0.0 <= fVar44) || (pfVar29[8] < fVar69)) {
              if ((fVar44 <= 0.0) || (fVar69 < pfVar29[9])) goto LAB_ram_400784f8;
              if (fVar44 < 0.0) goto LAB_ram_4007924e;
              fVar49 = pfVar29[7];
              fVar65 = fVar69 - fVar49;
            }
            else {
LAB_ram_4007924e:
              fVar49 = pfVar29[7];
              fVar65 = fVar69 + fVar49;
            }
            if (fVar65 < fVar46) {
              fVar65 = fVar49 * DAT_ram_40094634 + pfVar29[8];
            }
            if ((iVar32 != 0) && (5 < param_1[0x1f0])) {
              iVar23 = 0;
              pfVar14 = local_1a0;
              do {
                fVar48 = (float)iVar23;
                iVar23 = iVar23 + 4;
                fVar48 = (fVar56 - (fVar48 + fVar69)) + fVar45;
                uVar18 = (uint)fVar48;
                fVar57 = (float)*(undefined8 *)(iVar26 + (uVar18 & 0x7ff) * 4);
                *pfVar14 = (fVar48 - (float)(int)uVar18) *
                           ((float)*(undefined8 *)(iVar26 + (uVar18 + 1 & 0x7ff) * 4) - fVar57) +
                           fVar57;
                pfVar14 = pfVar14 + 1;
              } while (iVar23 != 0x100);
              fVar48 = (float)FUN_ram_40000844();
              fVar49 = (float)FUN_ram_40000844(DAT_ram_40094e88,
                                               (fVar48 - fVar50) * DAT_ram_4009a98c +
                                               DAT_ram_4009463c);
              iVar23 = -0xc0;
              fVar48 = DAT_ram_4009555c;
              do {
                fVar57 = (float)iVar23 + fVar65;
                if (((fVar49 <= fVar57) && (fVar57 <= (float)DAT_ram_4009a9d8)) &&
                   ((float)param_1[0x1c4] * DAT_ram_4009a404 <= ABS(fVar57 - fVar69))) {
                  fVar46 = 0.0;
                  pfVar14 = local_1a0;
                  iVar21 = 0;
                  fVar66 = DAT_ram_4009a9b0;
                  do {
                    fVar37 = (float)iVar21;
                    uVar62 = *(undefined8 *)pfVar14;
                    iVar21 = iVar21 + 0x10;
                    pfVar14 = pfVar14 + 4;
                    fVar37 = (fVar56 - (fVar37 + fVar57)) + fVar45;
                    uVar18 = (uint)fVar37;
                    fVar51 = (float)*(undefined8 *)(iVar26 + (uVar18 & 0x7ff) * 4);
                    fVar51 = (fVar37 - (float)(int)uVar18) *
                             ((float)*(undefined8 *)(iVar26 + (uVar18 + 1 & 0x7ff) * 4) - fVar51) +
                             fVar51;
                    fVar37 = (float)uVar62;
                    fVar46 = (fVar37 - fVar51) * (fVar37 - fVar51) + fVar46;
                    fVar66 = fVar66 + fVar37 * fVar37 + fVar51 * fVar51;
                  } while (iVar21 != 0x100);
                  if (fVar46 / fVar66 < fVar48) {
                    fVar48 = in_register_00000100;
                  }
                }
                iVar23 = iVar23 + 0x10;
              } while (iVar23 != 0xd0);
              iVar23 = -0xf;
              fVar37 = DAT_ram_4009555c;
              fVar65 = in_register_00000100;
              do {
                fVar48 = (float)iVar23 + in_register_00000100;
                if (((fVar49 <= fVar48) && (fVar48 <= (float)DAT_ram_4009a9d8)) &&
                   ((float)param_1[0x1c4] * DAT_ram_4009a404 <= ABS(fVar48 - fVar69))) {
                  fVar66 = 0.0;
                  pfVar14 = local_1a0;
                  iVar21 = 0;
                  fVar57 = DAT_ram_4009a9b0;
                  do {
                    fVar46 = (float)iVar21;
                    uVar62 = *(undefined8 *)pfVar14;
                    iVar21 = iVar21 + 4;
                    pfVar14 = pfVar14 + 1;
                    fVar46 = (fVar56 - (fVar46 + fVar48)) + fVar45;
                    uVar18 = (uint)fVar46;
                    fVar51 = (float)*(undefined8 *)(iVar26 + (uVar18 & 0x7ff) * 4);
                    fVar51 = (fVar46 - (float)(int)uVar18) *
                             ((float)*(undefined8 *)(iVar26 + (uVar18 + 1 & 0x7ff) * 4) - fVar51) +
                             fVar51;
                    fVar46 = (float)uVar62;
                    fVar66 = (fVar46 - fVar51) * (fVar46 - fVar51) + fVar66;
                    fVar57 = fVar57 + fVar46 * fVar46 + fVar51 * fVar51;
                  } while (iVar21 != 0x100);
                  if (fVar66 / fVar57 < fVar37) {
                    fVar37 = in_register_00000100;
                    fVar65 = fVar48;
                  }
                }
                iVar23 = iVar23 + 2;
                fVar48 = DAT_ram_4009a988;
                fVar57 = DAT_ram_4009a9cc;
                puVar42 = PTR_entry_ram_40094618;
                fVar66 = DAT_ram_40094614;
                fVar46 = DAT_ram_40094e88;
              } while (iVar23 != 0x11);
            }
            iVar23 = param_1[0x1d9];
            pfVar29[4] = 0.0;
            pfVar29[3] = fVar65;
            pfVar29[5] = pfVar29[10];
            fVar49 = 0.0;
            param_1[0x1d9] = iVar23 + 1;
            fVar65 = fVar45;
          }
          else {
            fVar69 = pfVar29[2];
          }
LAB_ram_400784f8:
          fVar37 = (fVar56 - fVar69) + fVar65;
          uVar18 = (uint)fVar37;
          fVar51 = (float)*(undefined8 *)(iVar26 + (uVar18 & 0x7ff) * 4);
          fVar51 = (fVar37 - (float)(int)uVar18) *
                   ((float)*(undefined8 *)(iVar26 + (uVar18 + 1 & 0x7ff) * 4) - fVar51) + fVar51;
          if (fVar49 < fVar50) {
            fVar37 = pfVar29[3];
            fVar1 = pfVar29[5];
            iVar23 = param_1[0x1da];
            fVar9 = fVar49 * fVar49 * (-(fVar49 * (float)puVar42) + fVar66);
            fVar65 = (fVar56 - fVar37) + fVar65;
            puVar20 = (ulonglong *)(int)fVar65;
            fVar2 = *(float *)(iVar26 + ((uint)puVar20 & 0x7ff) * 4);
            fVar3 = *(float *)(iVar26 + ((uint)((int)puVar20 + 1) & 0x7ff) * 4);
            pfVar29[4] = fVar49 + fVar1;
            pfVar29[3] = fVar44 + fVar37;
            param_1[0x1da] = iVar23 + 1;
            fVar56 = fVar9 * (fVar37 - fVar69) + fVar69;
            fVar51 = fVar9 * (((fVar65 - (float)(int)puVar20) * (fVar3 - fVar2) + fVar2) - fVar51) +
                     fVar51;
            if (fVar50 <= fVar49 + fVar1) {
              fVar69 = (fVar44 + fVar37) - fVar44;
              pfVar29[4] = fVar50;
              pfVar29[2] = fVar69;
            }
          }
          else {
            puVar20 = (ulonglong *)0x0;
            fVar56 = fVar69;
          }
          fVar44 = fVar44 + fVar69;
          fVar65 = fVar66;
          if ((fVar66 <= fVar44) && (fVar65 = fVar44, DAT_ram_4009a9bc < fVar44)) {
            fVar65 = DAT_ram_4009a9bc;
          }
          pfVar29[2] = fVar65;
          fVar65 = (fVar50 - (float)param_1[0x1c6]) * fVar51 + (float)param_1[0x1c6] * pfVar29[0xb];
          pfVar29[0xb] = fVar65;
        }
        if ((0.0 < fVar43) && (fVar43 < fVar50)) {
          fVar65 = (fVar67 - fVar65) * fVar43 + fVar65;
          fVar56 = fVar56 * (fVar50 - fVar43);
        }
        fVar70 = fVar63 * fVar65 + fVar70;
        if (param_5 != (ulonglong *)0x0) {
          fVar68 = fVar63 * fVar56 + fVar68;
          fVar47 = fVar47 + fVar63;
        }
      }
      iVar22 = iVar22 + 1;
      pfVar29 = pfVar29 + 0x11;
    } while (iVar19 != iVar22);
    fVar50 = DAT_ram_40094604;
    if (iVar32 != 0) {
      fVar50 = (float)param_1[0x1cf];
    }
    *param_3 = (float)param_1[0x1d1] * fVar67 + fVar50 * (float)param_1[0x1d0] * fVar70;
    if (param_5 != (ulonglong *)0x0) {
      if (fVar47 <= 0.0) {
        fVar68 = 0.0;
      }
      else {
        fVar68 = fVar68 / fVar47;
      }
      if (fVar68 < (float)param_1[0x1d2]) {
        param_1[0x1d2] = (int)fVar68;
      }
      if ((float)param_1[0x1d3] < fVar68) {
        param_1[0x1d3] = (int)fVar68;
      }
      *puVar13 = (ulonglong)(uint)param_1[0x1cc];
      *(ulonglong *)((int)puVar13 + 4) = (ulonglong)(uint)param_1[0x1cd];
      puVar13[1] = (ulonglong)(uint)param_1[0x1ce];
      uVar18 = param_1[0x1ae];
      *(float *)(puVar13 + 2) = fVar68;
      *(ulonglong *)((int)puVar13 + 0x14) = (ulonglong)(uint)fVar50;
      *(ulonglong *)((int)puVar13 + 0xc) = (ulonglong)uVar18;
    }
    uVar31 = uVar31 + 1 & 0x7ff;
    param_1[0x1d4] = uVar31;
    param_2 = param_2 + 1;
    puVar13 = puVar13 + 3;
    param_3 = param_3 + 1;
    if (pfVar28 == param_2) {
      return;
    }
  } while( true );
}


