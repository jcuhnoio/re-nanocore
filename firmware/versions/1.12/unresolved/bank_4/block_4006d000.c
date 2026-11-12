/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4006d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4006d0b4.
 * REA evidence: ev_82fae5f8c290b4516364b6108989933e66d09b8b25b0a6a26e5d0623ee99e2d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006d0b4(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5,
                     uint param_6,float *param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float in_register_00000100;
  byte bVar18;
  ulonglong *puVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  float *pfVar23;
  undefined8 *puVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  float fVar38;
  float fVar39;
  undefined *puVar40;
  undefined *puVar41;
  float fVar42;
  float fVar43;
  undefined8 unaff_fs11;
  float fVar44;
  float fVar45;
  float *pfStack_15c;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  fVar4 = DAT_ram_4009f090;
  fVar39 = (float)*param_1;
  uStack_a0 = (undefined4)unaff_fs11;
  uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
  fVar13 = DAT_ram_4009f688._4_4_;
  fVar14 = DAT_ram_4009f690;
  fVar8 = DAT_ram_4009f078;
  if (DAT_ram_40099f28 < fVar39) {
    fVar13 = fVar39 * DAT_ram_4009b18c;
    fVar14 = DAT_ram_4009f4bc / fVar39;
    fVar8 = fVar39;
  }
  fVar26 = in_register_00000100;
  fVar28 = in_register_00000100;
  puVar32 = DAT_ram_4009672c;
  puVar41 = DAT_ram_4009672c;
  fVar39 = DAT_ram_4009673c;
  if (param_7 != (float *)0x0) {
    fVar26 = *param_7;
    if (fVar26 < 0.0) {
      puVar32 = (undefined *)param_7[3];
      fVar39 = DAT_ram_40099f88;
      if ((float)puVar32 < 0.0) goto LAB_ram_4006daf4;
LAB_ram_4006d17a:
      if ((float)DAT_ram_4009672c < (float)puVar32) {
        puVar32 = DAT_ram_4009672c;
      }
    }
    else {
      fVar39 = DAT_ram_40099f44;
      if (fVar26 <= (float)DAT_ram_4009672c) {
        fVar39 = fVar26 * DAT_ram_4009b188 + DAT_ram_40099f88;
      }
      puVar32 = (undefined *)param_7[3];
      if (0.0 <= (float)puVar32) goto LAB_ram_4006d17a;
LAB_ram_4006daf4:
      puVar32 = (undefined *)0x0;
    }
    fVar26 = param_7[1];
    puVar41 = (undefined *)0x0;
    if ((0.0 <= fVar26) && (puVar41 = PTR_entry_ram_40096740, fVar26 <= (float)DAT_ram_4009672c)) {
      puVar41 = (undefined *)(fVar26 * (float)PTR_entry_ram_40096740 + 0.0);
    }
    fVar26 = param_7[2];
    if (fVar26 < 0.0) {
      fVar26 = 0.0;
    }
    else if ((float)DAT_ram_4009672c < fVar26) {
      fVar26 = in_register_00000100;
    }
    fVar28 = param_7[4];
    if (0.0 <= fVar28) {
      if ((float)DAT_ram_4009672c < fVar28) {
        fVar28 = in_register_00000100;
      }
    }
    else {
      fVar28 = 0.0;
    }
  }
  bVar18 = 1;
  bVar1 = param_8 != 0;
  if (bVar1) {
    bVar18 = (param_5 != 0) + 1;
  }
  puVar22 = param_1 + 0x2849;
  puVar24 = param_1 + 0x284b;
  fVar31 = *(float *)((int)param_1 + 0x141dc);
  fVar27 = in_register_00000100;
  if (*(char *)((int)param_1 + 0x142aa) == '\0') {
    *(float *)((int)param_1 + 0x1429c) = fVar39;
    *(float *)(param_1 + 0x2853) = (fVar39 * fVar4) / fVar8;
  }
  else {
    if (*(float *)((int)param_1 + 0x1429c) == fVar39) {
      fVar27 = *(float *)(param_1 + 0x2853);
    }
    else {
      *(float *)((int)param_1 + 0x1429c) = fVar39;
      *(float *)(param_1 + 0x2853) = (fVar39 * fVar4) / fVar8;
    }
    if ((*(float *)(param_1 + 0x2854) == (float)puVar32) &&
       (*(float *)((int)param_1 + 0x142a4) == (float)puVar41)) goto LAB_ram_4006d5f8;
  }
  puVar40 = DAT_ram_4009672c;
  fVar8 = (float)puVar32 * DAT_ram_4009f694;
  fVar10 = (float)puVar41 - (float)DAT_ram_4009672c;
  *(undefined4 *)((int)param_1 + 0x14294) = DAT_ram_4009f698;
  *(float *)(param_1 + 0x2852) = fVar8;
  FUN_ram_4000303c(puVar22,&DAT_ram_4009f8a4,0x10);
  fVar17 = DAT_ram_4009f6e0;
  fVar16 = DAT_ram_4009f6dc;
  fVar15 = DAT_ram_4009f6d8;
  fVar9 = DAT_ram_4009f6d4;
  fVar44 = DAT_ram_4009f6d0;
  fVar7 = DAT_ram_4009f6cc;
  fVar38 = DAT_ram_4009f6c8;
  fVar30 = DAT_ram_4009f6c4;
  fVar6 = DAT_ram_4009f6c0;
  puVar36 = DAT_ram_4009a4f8;
  fVar43 = fVar10 * DAT_ram_4009f6a4;
  fVar42 = fVar10 * DAT_ram_4009f6ac;
  fVar45 = fVar10 * DAT_ram_4009f6b4;
  puVar37 = (undefined *)(fVar10 * DAT_ram_4009f080 + (float)puVar40);
  fVar8 = (float)puVar32 * DAT_ram_4009f6a8;
  fVar4 = (float)puVar32 * DAT_ram_4009f6b0;
  fVar39 = (float)puVar32 * DAT_ram_4009f6b8;
  fVar5 = (float)puVar32 * DAT_ram_4009f6bc + DAT_ram_4009f6c0;
  bVar2 = (float)DAT_ram_4009a4f8 <= (float)puVar37;
  *(float *)(param_1 + 0x284b) = (float)puVar32 * DAT_ram_4009f6a0 + fVar10 * DAT_ram_4009f69c;
  *(float *)((int)param_1 + 0x1425c) = fVar8 + fVar43;
  *(float *)(param_1 + 0x284c) = fVar4 + fVar42;
  *(float *)((int)param_1 + 0x14264) = fVar39 + fVar45;
  *(float *)(param_1 + 0x284d) = fVar5;
  puVar33 = puVar36;
  if ((bVar2) && (puVar33 = PTR_entry_ram_40096740, (float)puVar37 <= (float)PTR_entry_ram_40096740)
     ) {
    puVar33 = puVar37;
  }
  fVar8 = (float)puVar33 * ((float)puVar32 * fVar30 + fVar38);
  puVar33 = (undefined *)(fVar10 * DAT_ram_4009f4d8 + (float)puVar40);
  *(float *)((int)param_1 + 0x1426c) = fVar8;
  puVar34 = puVar36;
  if (((float)puVar36 <= (float)puVar33) &&
     (puVar34 = PTR_entry_ram_40096740, (float)puVar33 <= (float)PTR_entry_ram_40096740)) {
    puVar34 = puVar33;
  }
  fVar4 = (float)puVar34 * ((float)puVar32 * fVar7 + fVar44);
  puVar34 = (undefined *)(fVar10 * DAT_ram_4009f6e4 + (float)puVar40);
  *(float *)(param_1 + 0x284e) = fVar4;
  puVar35 = puVar36;
  if (((float)puVar36 <= (float)puVar34) &&
     (puVar35 = PTR_entry_ram_40096740, (float)puVar34 <= (float)PTR_entry_ram_40096740)) {
    puVar35 = puVar34;
  }
  fVar39 = (float)puVar35 * ((float)puVar32 * fVar9 + fVar15);
  puVar40 = (undefined *)(fVar10 * DAT_ram_4009f6e8 + (float)puVar40);
  *(float *)((int)param_1 + 0x14274) = fVar39;
  puVar35 = puVar36;
  if (((float)puVar36 <= (float)puVar40) &&
     (puVar35 = PTR_entry_ram_40096740, (float)puVar40 <= (float)PTR_entry_ram_40096740)) {
    puVar35 = puVar40;
  }
  fVar43 = ((float)puVar32 * fVar16 + fVar17) * (float)puVar35;
  *(float *)(param_1 + 0x284f) = fVar43;
  if ((fVar5 == 0.0) &&
     (fVar5 = ABS(fVar43) + ABS(fVar39) + ABS(fVar4) + ABS(fVar8) + 0.0, DAT_ram_4009f54c < fVar5))
  {
    fVar5 = DAT_ram_4009f700 / fVar5;
    *(float *)((int)param_1 + 0x1426c) = fVar5 * fVar8;
    *(float *)(param_1 + 0x284e) = fVar5 * fVar4;
    *(float *)((int)param_1 + 0x14274) = fVar5 * fVar39;
    *(float *)(param_1 + 0x284f) = fVar5 * fVar43;
  }
  fVar5 = DAT_ram_4009f6fc;
  fVar39 = DAT_ram_4009f6f8;
  fVar4 = DAT_ram_4009f6f4;
  fVar8 = DAT_ram_4009f6f0;
  fVar6 = (float)puVar32 * DAT_ram_4009f6ec + fVar6;
  *(float *)((int)param_1 + 0x1427c) = fVar6;
  fVar38 = (float)puVar32 * fVar8 + fVar38;
  fVar44 = (float)puVar32 * fVar4 + fVar44;
  if ((float)puVar37 < (float)puVar36) {
    fVar38 = (float)puVar36 * fVar38;
    *(float *)(param_1 + 0x2850) = fVar38;
    if ((float)puVar33 < (float)puVar36) goto LAB_ram_4006dba4;
LAB_ram_4006d518:
    if ((float)PTR_entry_ram_40096740 < (float)puVar33) {
      puVar33 = PTR_entry_ram_40096740;
    }
    fVar44 = (float)puVar33 * fVar44;
    *(float *)((int)param_1 + 0x14284) = fVar44;
  }
  else {
    if ((float)PTR_entry_ram_40096740 < (float)puVar37) {
      puVar37 = PTR_entry_ram_40096740;
    }
    fVar38 = (float)puVar37 * fVar38;
    *(float *)(param_1 + 0x2850) = fVar38;
    if ((float)puVar36 <= (float)puVar33) goto LAB_ram_4006d518;
LAB_ram_4006dba4:
    fVar44 = (float)puVar36 * fVar44;
    *(float *)((int)param_1 + 0x14284) = fVar44;
  }
  puVar37 = puVar36;
  if (((float)puVar36 <= (float)puVar34) &&
     (puVar37 = puVar34, (float)PTR_entry_ram_40096740 < (float)puVar34)) {
    puVar37 = PTR_entry_ram_40096740;
  }
  fVar8 = ((float)puVar32 * fVar39 + fVar15) * (float)puVar37;
  *(float *)(param_1 + 0x2851) = fVar8;
  if (((float)puVar40 < (float)puVar36) ||
     (puVar36 = PTR_entry_ram_40096740, (float)PTR_entry_ram_40096740 < (float)puVar40)) {
    puVar40 = puVar36;
  }
  fVar4 = ((float)puVar32 * fVar5 + fVar17) * (float)puVar40;
  *(float *)((int)param_1 + 0x1428c) = fVar4;
  if ((fVar6 == 0.0) &&
     (fVar39 = ABS(fVar4) + ABS(fVar8) + ABS(fVar44) + ABS(fVar38) + 0.0, DAT_ram_4009f54c < fVar39)
     ) {
    fVar39 = DAT_ram_4009f704 / fVar39;
    *(float *)(param_1 + 0x2850) = fVar38 * fVar39;
    *(float *)((int)param_1 + 0x14284) = fVar39 * fVar44;
    *(float *)(param_1 + 0x2851) = fVar39 * fVar8;
    *(float *)((int)param_1 + 0x1428c) = fVar39 * fVar4;
  }
  *(undefined **)(param_1 + 0x2854) = puVar32;
  *(undefined **)((int)param_1 + 0x142a4) = puVar41;
LAB_ram_4006d5f8:
  uVar3 = *(undefined4 *)((int)param_1 + 0x14294);
  uVar12 = param_1[0x2852];
  uVar11 = param_1[0x2852];
  *(undefined1 *)((int)param_1 + 0x142aa) = 1;
  FUN_ram_4000303c(&fStack_100,param_1 + 0x283c,0x20);
  FUN_ram_4000303c(&fStack_e0,param_1 + 0x2840,0x20);
  uStack_150 = *(undefined1 *)(param_1 + 0x2844);
  uStack_14f = *(undefined1 *)((int)param_1 + 0x14221);
  uStack_14e = *(undefined1 *)((int)param_1 + 0x14222);
  uStack_14d = *(undefined1 *)((int)param_1 + 0x14223);
  uStack_14c = *(undefined1 *)((int)param_1 + 0x14224);
  uStack_14b = *(undefined1 *)((int)param_1 + 0x14225);
  uStack_14a = *(undefined1 *)((int)param_1 + 0x14226);
  uStack_149 = *(undefined1 *)((int)param_1 + 0x14227);
  if ((*(char *)((int)param_1 + 0x142a9) == '\0') || (*(byte *)(param_1 + 0x2855) < bVar18)) {
    FUN_ram_4006cb08(fVar31,CONCAT44(fVar13,fVar14),CONCAT44(puVar22,fVar13),uVar11,
                     CONCAT44(puVar24,uVar3),puVar22,puVar24,bVar18,&fStack_140);
  }
  else {
    FUN_ram_4000303c(&fStack_140,param_1 + 0x2845,0x20);
  }
  fVar4 = DAT_ram_4009f090;
  fVar8 = DAT_ram_4009675c;
  puVar32 = DAT_ram_4009672c;
  pfStack_15c = &fStack_140;
  if (param_6 != 0) {
    uVar25 = 0;
    do {
      uVar29 = param_6 - uVar25;
      if (0x10 < param_6 - uVar25) {
        uVar29 = 0x10;
      }
      if (param_6 != uVar25) {
        uVar20 = 0;
        do {
          for (fVar31 = fVar31 + fVar27; fVar4 <= fVar31; fVar31 = fVar31 - fVar4) {
          }
          for (; fVar31 < 0.0; fVar31 = fVar31 + fVar4) {
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar29);
      }
      FUN_ram_4006cb08(fVar31,CONCAT44(fVar13,fVar14),CONCAT44(puVar22,fVar13),uVar12,
                       CONCAT44(puVar24,uVar3),puVar22,puVar24,bVar18,&fStack_120);
      fVar6 = DAT_ram_4009f708;
      fVar39 = (float)puVar32 / (float)(int)uVar29;
      fVar5 = fStack_114 - fStack_134;
      if (bVar18 == 2) {
        fStack_b0 = (fStack_110 - fStack_130) * fVar39;
        fStack_ac = (fStack_10c - fStack_12c) * fVar39;
        fStack_a8 = (fStack_108 - fStack_128) * fVar39;
        fStack_a4 = (fStack_104 - fStack_124) * fVar39;
      }
      if (param_6 != uVar25) {
        iVar21 = uVar25 << 2;
        uVar20 = 0;
        fVar38 = (float)CONCAT13(uStack_14d,CONCAT12(uStack_14e,CONCAT11(uStack_14f,uStack_150)));
        fVar44 = fStack_100;
        fVar43 = fStack_fc;
        fVar42 = fStack_f8;
        fVar45 = fStack_f4;
        do {
          while( true ) {
            fVar10 = *(float *)(param_2 + iVar21);
            fVar30 = fVar10;
            if ((bVar1 && param_5 != 0) && (param_3 != 0)) {
              fVar30 = *(float *)(param_3 + iVar21);
            }
            fVar9 = (fVar10 + fVar30) * fVar8;
            fStack_144 = 0.0;
            fStack_100 = -(fVar38 * fVar6) + fVar9;
            fStack_fc = (fStack_e0 - fStack_100) * fStack_140 + fVar44;
            fStack_140 = in_register_00000100 + fStack_140;
            fStack_f8 = (fStack_dc - fStack_fc) * fStack_13c + fVar43;
            fStack_13c = in_register_00000100 + fStack_13c;
            fStack_f4 = fStack_138 * (fStack_d8 - fStack_f8) + fVar42;
            fStack_138 = fStack_138 + in_register_00000100;
            fStack_d4 = (fStack_d4 - fStack_f4) * fStack_134 + fVar45;
            fStack_134 = fVar5 * fVar39 + fStack_134;
            uStack_150 = SUB41(fStack_d4,0);
            uStack_14f = (undefined1)((uint)fStack_d4 >> 8);
            uStack_14e = (undefined1)((uint)fStack_d4 >> 0x10);
            uStack_14d = (undefined1)((uint)fStack_d4 >> 0x18);
            fVar7 = *(float *)(param_1 + 0x284f) * fStack_d4 +
                    fStack_f4 * *(float *)((int)param_1 + 0x14274) +
                    *(float *)(param_1 + 0x284e) * fStack_f8 +
                    fVar9 * *(float *)(param_1 + 0x284d) +
                    fStack_fc * *(float *)((int)param_1 + 0x1426c);
            if (bVar18 == 2) {
              fVar38 = -((float)CONCAT13(uStack_149,
                                         CONCAT12(uStack_14a,CONCAT11(uStack_14b,uStack_14c))) *
                        fVar6) + fVar9;
              fStack_d0 = fStack_130 * (fStack_d0 - fVar38) + fStack_f0;
              fStack_cc = fStack_12c * (fStack_cc - fStack_d0) + fStack_ec;
              fStack_12c = fStack_ac + fStack_12c;
              fStack_130 = fStack_b0 + fStack_130;
              fStack_c8 = fStack_128 * (fStack_c8 - fStack_cc) + fStack_e8;
              fStack_c4 = fStack_124 * (fStack_c4 - fStack_c8) + fStack_e4;
              uStack_14c = SUB41(fStack_c4,0);
              uStack_14b = (undefined1)((uint)fStack_c4 >> 8);
              uStack_14a = (undefined1)((uint)fStack_c4 >> 0x10);
              uStack_149 = (undefined1)((uint)fStack_c4 >> 0x18);
              fStack_144 = fStack_c4 * *(float *)((int)param_1 + 0x1428c) +
                           fStack_c8 * *(float *)(param_1 + 0x2851) +
                           fStack_cc * *(float *)((int)param_1 + 0x14284) +
                           fVar9 * *(float *)((int)param_1 + 0x1427c) +
                           fStack_d0 * *(float *)(param_1 + 0x2850);
              fStack_128 = fStack_a8 + fStack_128;
              fStack_124 = fStack_a4 + fStack_124;
              fStack_f0 = fVar38;
              fStack_ec = fStack_d0;
              fStack_e8 = fStack_cc;
              fStack_e4 = fStack_c8;
            }
            fStack_e0 = fStack_fc;
            fStack_dc = fStack_f8;
            fStack_d8 = fStack_f4;
            fVar38 = fStack_d4;
            fVar44 = fStack_100;
            fVar43 = fStack_fc;
            fVar42 = fStack_f8;
            fVar45 = fStack_f4;
            if (!bVar1 || param_5 == 0) break;
            pfVar23 = (float *)(param_5 + iVar21);
            puVar19 = (ulonglong *)(param_4 + iVar21);
            uVar20 = uVar20 + 1;
            iVar21 = iVar21 + 4;
            fVar9 = (fVar7 - fStack_144) * fVar26;
            *pfVar23 = (((fStack_144 + fVar7) * fVar8 - fVar9) - fVar30) * fVar28 + fVar30;
            *puVar19 = (ulonglong)
                       (uint)(fVar28 * (((fStack_144 + fVar7) * fVar8 + fVar9) - fVar10) + fVar10);
            if (uVar29 <= uVar20) goto LAB_ram_4006d9a4;
          }
          puVar19 = (ulonglong *)(param_4 + iVar21);
          uVar20 = uVar20 + 1;
          iVar21 = iVar21 + 4;
          *puVar19 = (ulonglong)(uint)(fVar28 * (fVar7 - fVar10) + fVar10);
        } while (uVar20 < uVar29);
      }
LAB_ram_4006d9a4:
      fStack_140 = fStack_120;
      uVar25 = uVar25 + uVar29;
      fStack_13c = fStack_11c;
      fStack_138 = fStack_118;
      fStack_134 = fStack_114;
      fStack_130 = fStack_110;
      fStack_12c = fStack_10c;
      fStack_128 = fStack_108;
      fStack_124 = fStack_104;
    } while (uVar25 < param_6);
  }
  FUN_ram_4000303c(param_1 + 0x283c,&fStack_100,0x20);
  FUN_ram_4000303c(param_1 + 0x2840,&fStack_e0,0x20);
  *(undefined1 *)(param_1 + 0x2844) = uStack_150;
  *(undefined1 *)((int)param_1 + 0x14222) = uStack_14e;
  *(undefined1 *)((int)param_1 + 0x14223) = uStack_14d;
  *(undefined1 *)((int)param_1 + 0x14224) = uStack_14c;
  *(undefined1 *)((int)param_1 + 0x14226) = uStack_14a;
  *(undefined1 *)((int)param_1 + 0x14227) = uStack_149;
  *(undefined1 *)((int)param_1 + 0x14221) = uStack_14f;
  *(undefined1 *)((int)param_1 + 0x14225) = uStack_14b;
  FUN_ram_4000303c(param_1 + 0x2845,pfStack_15c,0x20);
  *(byte *)(param_1 + 0x2855) = bVar18;
  *(undefined1 *)((int)param_1 + 0x142a9) = 1;
  *(float *)((int)param_1 + 0x141dc) = fVar31;
  return;
}


