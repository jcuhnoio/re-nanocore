/* NanoCore 1.12: nc_pitch_find_splice at 0x40077364.
 * Role: Fractional interpolation correlation search over ring history
 * REA: ev_9f499d25a2f3a74e73d552fae2b7dc8bdf337dae5419847a9a9854d92af97ac4
 * Source: analysis/rea-1.12-effects/results/03579-export-0x40077364.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Type propagation algorithm not settling */

float nc_pitch_find_splice(float param_1,int *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
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
  float fVar16;
  float fVar17;
  float in_register_00000100;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  uint uVar21;
  float *pfVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float local_600 [4];
  undefined8 uStack_5f0;
  undefined8 uStack_5e0;
  undefined8 uStack_5d0;
  undefined8 uStack_5c0;
  undefined8 uStack_5b0;
  undefined8 uStack_5a0;
  undefined8 uStack_590;
  undefined8 uStack_580;
  undefined8 uStack_570;
  undefined8 uStack_560;
  ulonglong uStack_550;
  float fStack_540;
  float fStack_530;
  float fStack_520;
  float fStack_510;
  float fStack_500;
  undefined8 local_4fc;
  float local_4f4 [37];
  float afStack_460 [102];
  float local_2c8 [142];
  
  fVar17 = DAT_ram_400a09ec;
  fVar2 = (float)(uint)param_2[0x344];
  fVar4 = *(float *)(param_3 + 1);
  iVar18 = *param_2;
  iVar24 = 0;
  pfVar19 = local_600;
  do {
    fVar29 = (float)iVar24;
    iVar24 = iVar24 + 4;
    fVar29 = (fVar2 - (fVar29 + fVar4)) + DAT_ram_400a09ec;
    uVar21 = (uint)fVar29;
    fVar32 = (float)*(undefined8 *)(iVar18 + (uVar21 & 0x7ff) * 4);
    *pfVar19 = (fVar29 - (float)(int)uVar21) *
               ((float)*(undefined8 *)(iVar18 + (uVar21 + 1 & 0x7ff) * 4) - fVar32) + fVar32;
    pfVar19 = pfVar19 + 1;
  } while (iVar24 != 0x100);
  if ((param_1 < 0.0) || (DAT_ram_400a09f0 < param_1)) {
    bVar3 = false;
  }
  else {
    bVar3 = (float)(int)(param_1 * DAT_ram_4009f798) == param_1 * DAT_ram_4009f798;
  }
  iVar24 = -0xc0;
  fVar29 = (float)FUN_ram_40000844(*param_3,*(undefined8 *)((int)param_3 + 4));
  fVar30 = (float)FUN_ram_40000844(DAT_ram_40099f30,
                                   (fVar29 - DAT_ram_4009672c) * DAT_ram_400a09f4 + DAT_ram_40096764
                                  );
  bVar23 = false;
  fVar29 = in_register_00000100;
  fVar32 = param_1;
  fVar44 = DAT_ram_4009a60c;
  do {
    fVar1 = (float)iVar24 + param_1;
    if (((fVar30 <= fVar1) && (fVar1 <= in_register_00000100)) &&
       ((float)param_2[0x334] * in_register_00000100 <= ABS(fVar1 - fVar4))) {
      fVar47 = (float)uStack_5f0;
      fVar46 = (float)uStack_5e0;
      fVar45 = (float)uStack_5d0;
      fVar43 = (float)uStack_5c0;
      fVar42 = (float)uStack_5b0;
      fVar41 = (float)uStack_5a0;
      fVar38 = (float)uStack_590;
      fVar36 = (float)uStack_580;
      fVar33 = (float)uStack_570;
      fVar31 = (float)uStack_560;
      fVar28 = (float)uStack_550;
      if (bVar23) {
        iVar26 = iVar24 + 0xc0 >> 4;
        pfVar19 = local_2c8;
        if (bVar3) goto LAB_ram_4007783a;
LAB_ram_40077548:
        fVar31 = 0.0;
        pfVar22 = local_600;
        iVar27 = 0;
        pfVar20 = &fStack_500 + iVar26;
        fVar28 = DAT_ram_400a09e8;
        do {
          while( true ) {
            iVar25 = iVar27 << 2;
            fVar33 = (float)*(undefined8 *)pfVar22;
            if (*(float *)((int)pfVar19 + iVar27 + iVar26 * 4) == fVar29) break;
            *(float *)((int)pfVar19 + iVar27 + iVar26 * 4) = fVar29;
            iVar27 = iVar27 + 4;
            pfVar22 = pfVar22 + 4;
            fVar36 = (fVar2 - ((float)iVar25 + fVar1)) + fVar17;
            uVar21 = (uint)fVar36;
            fVar38 = *(float *)(iVar18 + (uVar21 & 0x7ff) * 4);
            fVar38 = (fVar36 - (float)(int)uVar21) *
                     ((float)*(undefined8 *)(iVar18 + (uVar21 + 1 & 0x7ff) * 4) - fVar38) + fVar38;
            *pfVar20 = fVar38;
            fVar31 = (fVar33 - fVar38) * (fVar33 - fVar38) + fVar31;
            fVar28 = fVar28 + fVar33 * fVar33 + fVar38 * fVar38;
            pfVar20 = pfVar20 + 1;
            if (iVar27 == 0x40) goto LAB_ram_400775da;
          }
          iVar27 = iVar27 + 4;
          pfVar22 = pfVar22 + 4;
          fVar36 = (float)*(undefined8 *)pfVar20;
          pfVar20 = pfVar20 + 1;
          fVar31 = (fVar33 - fVar36) * (fVar33 - fVar36) + fVar31;
          fVar28 = fVar28 + fVar33 * fVar33 + fVar36 * fVar36;
        } while (iVar27 != 0x40);
LAB_ram_400775da:
        fVar31 = fVar31 / fVar28;
      }
      else {
        if (!bVar3) {
          pfVar19 = (float *)memset(local_2c8,0xff,0xa0);
          uStack_5f0 = CONCAT44(fVar46,fVar47);
          uStack_5e0 = CONCAT44(fVar45,fVar46);
          uStack_5d0 = CONCAT44(fVar43,fVar45);
          uStack_5c0 = CONCAT44(fVar42,fVar43);
          uStack_5b0 = CONCAT44(fVar41,fVar42);
          uStack_5a0 = CONCAT44(fVar38,fVar41);
          uStack_590 = CONCAT44(fVar36,fVar38);
          uStack_580 = CONCAT44(fVar33,fVar36);
          uStack_570 = CONCAT44(fVar31,fVar33);
          uStack_560 = CONCAT44(fVar28,fVar31);
          uStack_550 = uStack_550 & 0xffffffff;
          iVar26 = iVar24 + 0xc0 >> 4;
          goto LAB_ram_40077548;
        }
        iVar26 = -0xc0;
        pfVar19 = &fStack_500;
        do {
          fVar5 = (float)iVar26;
          pfVar20 = pfVar19 + 1;
          iVar26 = iVar26 + 0x10;
          fVar5 = (fVar2 - (fVar5 + param_1)) + fVar17;
          uVar21 = (uint)fVar5;
          fVar34 = (float)*(undefined8 *)(iVar18 + (uVar21 & 0x7ff) * 4);
          *pfVar19 = (fVar5 - (float)(int)uVar21) *
                     ((float)*(undefined8 *)(iVar18 + (uVar21 + 1 & 0x7ff) * 4) - fVar34) + fVar34;
          pfVar19 = pfVar20;
        } while (afStack_460 != pfVar20);
        iVar26 = iVar24 + 0xc0 >> 4;
LAB_ram_4007783a:
        fVar40 = (float)*(undefined8 *)(&fStack_500 + iVar26);
        fVar35 = (float)*(undefined8 *)((int)&local_4fc + iVar26 * 4);
        fVar37 = (float)*(undefined8 *)(local_4f4 + iVar26 + -1);
        fVar5 = local_4f4[iVar26];
        fVar34 = local_4f4[iVar26 + 1];
        fVar6 = local_4f4[iVar26 + 2];
        fVar7 = local_4f4[iVar26 + 3];
        fVar8 = local_4f4[iVar26 + 4];
        fVar9 = local_4f4[iVar26 + 5];
        fVar10 = local_4f4[iVar26 + 6];
        fVar11 = local_4f4[iVar26 + 7];
        fVar12 = local_4f4[iVar26 + 8];
        fVar13 = local_4f4[iVar26 + 9];
        fVar14 = local_4f4[iVar26 + 10];
        fVar15 = local_4f4[iVar26 + 0xb];
        fVar16 = local_4f4[iVar26 + 0xc];
        fVar31 = ((fStack_510 - fVar16) * (fStack_510 - fVar16) +
                 (fStack_520 - fVar15) * (fStack_520 - fVar15) +
                 (fStack_530 - fVar14) * (fStack_530 - fVar14) +
                 (fStack_540 - fVar13) * (fStack_540 - fVar13) +
                 (fVar28 - fVar12) * (fVar28 - fVar12) +
                 (fVar31 - fVar11) * (fVar31 - fVar11) +
                 (fVar33 - fVar10) * (fVar33 - fVar10) +
                 (fVar36 - fVar9) * (fVar36 - fVar9) +
                 (fVar38 - fVar8) * (fVar38 - fVar8) +
                 (fVar41 - fVar7) * (fVar41 - fVar7) +
                 (fVar42 - fVar6) * (fVar42 - fVar6) +
                 (fVar43 - fVar34) * (fVar43 - fVar34) +
                 (fVar45 - fVar5) * (fVar45 - fVar5) +
                 (fVar46 - fVar37) * (fVar46 - fVar37) +
                 (fVar47 - fVar35) * (fVar47 - fVar35) +
                 (local_600[0] - fVar40) * (local_600[0] - fVar40) + 0.0) /
                 (fVar40 * fVar40 + local_600[0] * local_600[0] + in_register_00000100 +
                  fVar47 * fVar47 + fVar35 * fVar35 + fVar46 * fVar46 + fVar37 * fVar37 +
                  fVar45 * fVar45 + fVar5 * fVar5 + fVar43 * fVar43 + fVar34 * fVar34 +
                  fVar42 * fVar42 + fVar6 * fVar6 + fVar41 * fVar41 + fVar7 * fVar7 +
                  fVar38 * fVar38 + fVar8 * fVar8 + fVar36 * fVar36 + fVar9 * fVar9 +
                  fVar33 * fVar33 + fVar10 * fVar10 + fVar31 * fVar31 + fVar11 * fVar11 +
                  fVar28 * fVar28 + fVar12 * fVar12 + fStack_540 * fStack_540 + fVar13 * fVar13 +
                  fStack_530 * fStack_530 + fVar14 * fVar14 +
                  fStack_520 * fStack_520 + fVar15 * fVar15 +
                 fStack_510 * fStack_510 + fVar16 * fVar16);
      }
      bVar23 = true;
      if (fVar31 < fVar44) {
        bVar23 = true;
        fVar32 = fVar1;
        fVar44 = fVar31;
      }
    }
    fVar28 = DAT_ram_400a09fc;
    fVar1 = DAT_ram_400a09f8;
    iVar24 = iVar24 + 0x10;
  } while (iVar24 != 0xd0);
  if ((fVar32 < 0.0) || (DAT_ram_400a09f0 < fVar32)) {
    bVar3 = false;
  }
  else {
    bVar3 = (float)(int)(fVar32 * DAT_ram_4009f798) == fVar32 * DAT_ram_4009f798;
  }
  iVar24 = -0xf;
  bVar23 = false;
  fVar44 = fVar32;
  do {
    fVar31 = (float)iVar24 + fVar32;
    if (((fVar30 <= fVar31) && (fVar31 <= fVar1)) &&
       ((float)param_2[0x334] * fVar28 <= ABS(fVar31 - fVar4))) {
      if (bVar23) {
        iVar26 = iVar24 + 0xf >> 1;
        if (bVar3) goto LAB_ram_40077a76;
LAB_ram_4007768c:
        fVar36 = 0.0;
        iVar27 = iVar26 * 4 + -0x2c8;
        pfVar20 = local_600;
        iVar25 = 0;
        pfVar19 = &fStack_500 + iVar26;
        fVar33 = DAT_ram_400a09e8;
        do {
          while( true ) {
            fVar38 = (float)iVar25;
            fVar41 = (float)*(undefined8 *)pfVar20;
            if (*(float *)((int)local_2c8 + iVar25 * 2 + iVar27 + 0x2c8) == fVar29) break;
            *(float *)((int)local_2c8 + iVar25 * 2 + iVar27 + 0x2c8) = fVar29;
            iVar25 = iVar25 + 4;
            pfVar20 = pfVar20 + 1;
            fVar38 = (fVar2 - (fVar38 + fVar31)) + fVar17;
            uVar21 = (uint)fVar38;
            fVar42 = *(float *)(iVar18 + (uVar21 & 0x7ff) * 4);
            fVar42 = (fVar38 - (float)(int)uVar21) *
                     ((float)*(undefined8 *)(iVar18 + (uVar21 + 1 & 0x7ff) * 4) - fVar42) + fVar42;
            *pfVar19 = fVar42;
            fVar36 = (fVar41 - fVar42) * (fVar41 - fVar42) + fVar36;
            fVar33 = fVar33 + fVar41 * fVar41 + fVar42 * fVar42;
            pfVar19 = pfVar19 + 2;
            if (iVar25 == 0x100) goto LAB_ram_4007771e;
          }
          iVar25 = iVar25 + 4;
          pfVar20 = pfVar20 + 1;
          fVar38 = (float)*(undefined8 *)pfVar19;
          pfVar19 = pfVar19 + 2;
          fVar36 = (fVar41 - fVar38) * (fVar41 - fVar38) + fVar36;
          fVar33 = fVar33 + fVar41 * fVar41 + fVar38 * fVar38;
        } while (iVar25 != 0x100);
LAB_ram_4007771e:
        fVar36 = fVar36 / fVar33;
      }
      else {
        if (!bVar3) {
          memset(local_2c8,0xff,0x238);
          iVar26 = iVar24 + 0xf >> 1;
          goto LAB_ram_4007768c;
        }
        iVar26 = -0xf;
        pfVar19 = &fStack_500;
        do {
          fVar33 = (float)iVar26;
          iVar26 = iVar26 + 2;
          fVar33 = (fVar2 - (fVar33 + fVar32)) + fVar17;
          uVar21 = (uint)fVar33;
          fVar36 = (float)*(undefined8 *)(iVar18 + (uVar21 & 0x7ff) * 4);
          *pfVar19 = (fVar33 - (float)(int)uVar21) *
                     ((float)*(undefined8 *)(iVar18 + (uVar21 + 1 & 0x7ff) * 4) - fVar36) + fVar36;
          pfVar19 = pfVar19 + 1;
        } while (iVar26 != 0x10d);
        iVar26 = iVar24 + 0xf >> 1;
LAB_ram_40077a76:
        fVar36 = 0.0;
        pfVar20 = &fStack_500 + iVar26;
        pfVar19 = local_600;
        fVar33 = DAT_ram_400a09e8;
        do {
          uVar39 = *(undefined8 *)pfVar19;
          pfVar19 = pfVar19 + 1;
          fVar41 = (float)*(undefined8 *)pfVar20;
          fVar38 = (float)uVar39;
          pfVar20 = pfVar20 + 2;
          fVar36 = (fVar38 - fVar41) * (fVar38 - fVar41) + fVar36;
          fVar33 = fVar33 + fVar38 * fVar38 + fVar41 * fVar41;
        } while (&fStack_500 != pfVar19);
        fVar36 = fVar36 / fVar33;
      }
      bVar23 = true;
      if (fVar36 < in_register_00000100) {
        bVar23 = true;
        in_register_00000100 = fVar36;
        fVar44 = fVar31;
      }
    }
    iVar24 = iVar24 + 2;
    if (iVar24 == 0x11) {
      return fVar44;
    }
  } while( true );
}

