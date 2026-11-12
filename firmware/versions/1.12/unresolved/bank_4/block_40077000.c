/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40077000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40077364.
 * REA evidence: ev_6ea6a0982b1475c6f50708e0ac2f4062259a88207f4f886fd7ea127aad5825d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */

float FUN_ram_40077364(float param_1,int *param_2,undefined8 *param_3)

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


/* NanoCore 1.12, address 0x40077b1c.
 * REA evidence: ev_1b4fdb205b14d1ea39fddee5aea3b0c9bf5f06ebdced5c2de82f4d21582ddb24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40078316) */
/* WARNING: Removing unreachable block (ram,0x400785ae) */
/* WARNING: Removing unreachable block (ram,0x40078324) */
/* WARNING: Removing unreachable block (ram,0x400785ba) */

void FUN_ram_40077b1c(int *param_1)

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
      fVar52 = ((fVar38 - fVar51) * DAT_ram_4009675c) / fVar52;
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
      fVar38 = fVar42 + DAT_ram_4009675c;
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


