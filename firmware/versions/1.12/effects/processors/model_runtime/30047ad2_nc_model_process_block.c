/* NanoCore 1.12: nc_model_process_block at 0x30047ad2.
 * Role: In-place model processing in chunks of at most 128 samples, including recurrent and nonlinear paths.
 * REA: ev_e48bad05d19a1bf3b05894ea6309b7b510398a578a2411745a34a7410306c076
 * Source: analysis/rea-1.12/results/01019-export-0x30047ad2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_model_process_block(float param_1,int param_2,int param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_register_00000100;
  float fVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  float *pfVar16;
  ulonglong *puVar17;
  undefined1 *puVar18;
  float *pfVar19;
  float *pfVar20;
  uint uVar21;
  ulonglong *puVar22;
  float *pfVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  float *pfVar35;
  int *piVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  float *pfVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  ulonglong uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  ulonglong uVar66;
  float fVar67;
  float *pfStack_dc;
  float *pfStack_d4;
  uint uStack_d0;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  
  fVar6 = DAT_ram_40099f7c;
  fVar5 = DAT_ram_40096764;
  if (param_2 == 0) {
    return;
  }
  iVar34 = *(int *)(param_2 + 0x10);
  if ((((iVar34 == 0) || (*(char *)(param_2 + 0x50) == '\0')) || (param_3 == 0)) || (param_4 == 0))
  {
    return;
  }
  uVar9 = 0;
  do {
    fVar59 = DAT_ram_40096748;
    uVar8 = param_4 - uVar9;
    if (0x80 < uVar8) {
      uVar8 = 0x80;
    }
    if (iVar34 != 0) {
      uVar47 = *(undefined8 *)(param_2 + 0x14);
      fVar45 = (float)uVar47;
      uStack_b0 = (undefined1)uVar47;
      uStack_af = (undefined1)((ulonglong)uVar47 >> 8);
      uStack_ae = (undefined1)((ulonglong)uVar47 >> 0x10);
      uStack_ad = (undefined1)((ulonglong)uVar47 >> 0x18);
      pfVar40 = (float *)(param_3 + uVar9 * 4);
      fVar67 = DAT_ram_4009f9e4;
      if (*(int *)(iVar34 + 4) != 0) {
        uVar30 = *(uint *)(iVar34 + 8);
        uVar25 = uVar30;
        if ((*(char *)(iVar34 + 0x44) == '\0') ||
           (DAT_ram_40096748 < ABS(fVar45 - *(float *)(iVar34 + 0x4c)))) {
          uVar26 = *(uint *)(iVar34 + 0x28);
          uVar39 = uVar30 << 1;
          if (uVar26 < uVar39) goto LAB_ram_30047be0;
          if (*(int *)(iVar34 + 0x10) == 0) {
LAB_ram_30048d2a:
            uVar28 = 0;
          }
          else {
            puVar18 = *(undefined1 **)(iVar34 + 0x14);
            if ((puVar18 == (undefined1 *)0x0) || (*(int *)(iVar34 + 0x1c) == 0)) {
              uVar28 = 0;
            }
            else {
              if (*(int *)(iVar34 + 0x18) == 0) goto LAB_ram_30048d2a;
              iVar10 = *(int *)(iVar34 + 0x24);
              puVar18[1] = uStack_af;
              *puVar18 = uStack_b0;
              puVar18[2] = uStack_ae;
              puVar18[3] = uStack_ad;
              fVar52 = DAT_ram_400a1388._4_4_;
              fVar63 = (float)DAT_ram_400a1388;
              fVar67 = DAT_ram_4009f9e4;
              fVar58 = DAT_ram_40099f7c;
              fVar53 = DAT_ram_40096768;
              fVar62 = DAT_ram_40096764;
              pfStack_dc = *(float **)(iVar34 + 0x18);
              uVar25 = *(uint *)(iVar34 + 0x10);
              pfStack_d4 = *(float **)(iVar34 + 0x1c);
              pfVar35 = *(float **)(iVar34 + 0x14);
              if (uVar25 == 0) {
                uVar28 = 1;
              }
              else {
                uVar28 = 1;
                uVar37 = 0;
                pfVar23 = pfVar35;
                uVar32 = *(uint *)(iVar34 + 0x20);
                do {
                  uVar29 = *(uint *)(*(int *)(iVar34 + 0xc) + uVar37 * 0x1c);
                  iVar14 = *(int *)(iVar34 + 0xc) + uVar37 * 0x1c;
                  pfVar35 = pfVar23;
                  pfVar19 = (float *)uVar32;
                  pfVar31 = pfStack_d4;
                  if (uVar29 == 2) {
                    if (uVar28 != 0) {
                      pfVar16 = pfVar23;
                      do {
                        fVar56 = (float)*(undefined8 *)pfVar16;
                        fVar60 = _DAT_ram_300847dc;
                        if ((fVar53 < fVar56) && (fVar60 = _DAT_ram_30084fd8, fVar56 < fVar62)) {
                          fVar60 = (fVar56 + fVar62) * fVar63;
                          uVar32 = (uint)(-1 < (int)fVar60) * (int)fVar60;
                          fVar60 = (fVar60 - (float)uVar32) *
                                   ((float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar32 + 0x201) * 4)
                                   - *(float *)(&DAT_ram_30083fdc + (uVar32 + 0x200) * 4)) +
                                   *(float *)(&DAT_ram_30083fdc + (uVar32 + 0x200) * 4);
                        }
                        pfVar20 = pfVar16 + 1;
                        *pfVar16 = fVar60;
                        pfVar16 = pfVar20;
                      } while (pfVar20 != pfVar23 + uVar28);
                    }
                  }
                  else if (uVar29 < 3) {
                    if (uVar29 == 0) {
                      uVar29 = (uint)*(ushort *)(iVar14 + 8);
                      if (((uVar29 != 0) && (uVar21 = (uint)*(ushort *)(iVar14 + 10), uVar21 != 0))
                         && (iVar38 = *(int *)(iVar14 + 0xc), iVar38 != 0)) {
                        if ((uVar32 < uVar29) || (pfStack_dc < uVar28)) {
                          uVar28 = 0;
                          uVar25 = *(uint *)(iVar34 + 8);
                          goto LAB_ram_300483d0;
                        }
                        if (uVar21 <= uVar28) {
                          uVar28 = uVar21;
                        }
                        pfVar35 = pfStack_d4;
                        pfVar19 = pfStack_dc;
                        pfStack_dc = (float *)uVar32;
                        pfVar31 = pfVar23;
                        if (uVar28 == 0) {
                          uVar21 = *(uint *)(iVar14 + 0x18);
                          uVar32 = 0;
                          do {
                            while (iVar38 = uVar32 * 4, uVar32 < uVar21) {
                              uVar32 = uVar32 + 1;
                              *pfStack_d4 = (float)*(undefined8 *)(*(int *)(iVar14 + 0x14) + iVar38)
                              ;
                              pfStack_d4 = pfStack_d4 + 1;
                              uVar28 = uVar29;
                              if (uVar29 <= (uVar32 & 0xffff)) goto LAB_ram_300483bc;
                            }
                            uVar32 = uVar32 + 1;
                            *pfStack_d4 = 0.0;
                            pfStack_d4 = pfStack_d4 + 1;
                            uVar28 = uVar29;
                          } while ((uVar32 & 0xffff) < uVar29);
                        }
                        else {
                          uVar32 = *(uint *)(iVar14 + 0x18);
                          if (pfVar23 == (float *)0x0) {
                            uVar21 = 0;
                            do {
                              while (iVar38 = uVar21 * 4, uVar21 < uVar32) {
                                uVar21 = uVar21 + 1;
                                *pfStack_d4 = (float)*(undefined8 *)
                                                      (*(int *)(iVar14 + 0x14) + iVar38) + 0.0;
                                pfStack_d4 = pfStack_d4 + 1;
                                uVar28 = uVar29;
                                if (uVar29 <= (uVar21 & 0xffff)) goto LAB_ram_300483bc;
                              }
                              uVar21 = uVar21 + 1;
                              *pfStack_d4 = 0.0;
                              pfStack_d4 = pfStack_d4 + 1;
                              uVar28 = uVar29;
                            } while ((uVar21 & 0xffff) < uVar29);
                          }
                          else {
                            iVar24 = 0;
                            uVar25 = 0;
                            do {
                              while( true ) {
                                fVar60 = 0.0;
                                if (uVar25 < uVar32) {
                                  fVar60 = *(float *)(*(int *)(iVar14 + 0x14) + uVar25 * 4);
                                }
                                if (iVar38 + iVar24 == 0) break;
                                uStack_ac = 0;
                                uStack_ab = 0;
                                uStack_aa = 0;
                                uStack_a9 = 0;
                                FUN_ram_4009557c(iVar38 + iVar24,pfVar23,uVar28,&uStack_ac);
                                uVar25 = uVar25 + 1;
                                *pfStack_d4 = (float)CONCAT13(uStack_a9,
                                                              CONCAT12(uStack_aa,
                                                                       CONCAT11(uStack_ab,uStack_ac)
                                                                      )) + fVar60;
                                iVar24 = iVar24 + uVar21 * 4;
                                if (uVar29 <= (uVar25 & 0xffff)) goto LAB_ram_30049a5c;
                                iVar38 = *(int *)(iVar14 + 0xc);
                                uVar32 = *(uint *)(iVar14 + 0x18);
                                pfStack_d4 = pfStack_d4 + 1;
                              }
                              uVar25 = uVar25 + 1;
                              *pfStack_d4 = fVar60 + 0.0;
                              iVar24 = iVar24 + uVar21 * 4;
                              pfStack_d4 = pfStack_d4 + 1;
                            } while ((uVar25 & 0xffff) < uVar29);
LAB_ram_30049a5c:
                            uVar25 = *(uint *)(iVar34 + 0x10);
                            uVar28 = uVar29;
                          }
                        }
                      }
                    }
                    else {
                      fVar60 = *(float *)(iVar14 + 4);
                      if (uVar28 != 0) {
                        pfVar16 = pfVar23;
                        do {
                          while ((float)*(undefined8 *)pfVar16 < 0.0) {
                            pfVar20 = pfVar16 + 1;
                            *pfVar16 = fVar60 * (float)*(undefined8 *)pfVar16;
                            pfVar16 = pfVar20;
                            if (pfVar20 == pfVar23 + uVar28) goto LAB_ram_300483bc;
                          }
                          pfVar16 = pfVar16 + 1;
                        } while (pfVar16 != pfVar23 + uVar28);
                      }
                    }
                  }
                  else if ((uVar29 == 3) && (pfVar16 = pfVar23, uVar28 != 0)) {
                    do {
                      fVar56 = (float)*(undefined8 *)pfVar16;
                      fVar60 = _DAT_ram_30083fd8;
                      if ((fVar67 < fVar56) && (fVar60 = _DAT_ram_300847d4, fVar56 < fVar58)) {
                        fVar60 = (fVar56 + fVar58) * fVar52;
                        uVar32 = (uint)(-1 < (int)fVar60) * (int)fVar60;
                        iVar14 = uVar32 * 4;
                        fVar60 = (fVar60 - (float)uVar32) *
                                 (*(float *)(&DAT_ram_30083fdc + iVar14) -
                                 *(float *)(&DAT_ram_30083fd8 + iVar14)) +
                                 *(float *)(&DAT_ram_30083fd8 + iVar14);
                      }
                      pfVar20 = pfVar16 + 1;
                      *pfVar16 = fVar60;
                      pfVar16 = pfVar20;
                    } while (pfVar23 + uVar28 != pfVar20);
                  }
LAB_ram_300483bc:
                  pfStack_d4 = pfVar31;
                  uVar37 = uVar37 + 1;
                  pfVar23 = pfVar35;
                  uVar32 = (uint)pfVar19;
                } while (uVar37 < uVar25);
              }
              if ((iVar10 == 0) || (uVar26 == 0)) {
                uVar25 = *(uint *)(iVar34 + 8);
              }
              else {
                if (uVar26 < uVar28) {
                  uVar28 = uVar26;
                }
                FUN_ram_4000303c(iVar10,pfVar35,uVar28 << 2);
                uVar25 = *(uint *)(iVar34 + 8);
              }
            }
          }
LAB_ram_300483d0:
          if (uVar28 < uVar25) {
            iVar10 = *(int *)(iVar34 + 0x24);
            uVar66 = (ulonglong)(uint)DAT_ram_4009675c;
            puVar17 = (ulonglong *)(iVar10 + uVar28 * 4);
            do {
              *puVar17 = uVar66;
              puVar17 = (ulonglong *)((int)puVar17 + 4);
            } while (puVar17 != (ulonglong *)(iVar10 + uVar25 * 4));
          }
          if (uVar28 < uVar39) {
            uVar26 = *(uint *)(iVar34 + 0x28);
            do {
              if (uVar28 < uVar26) {
                *(ulonglong *)(*(int *)(iVar34 + 0x24) + uVar28 * 4) =
                     CONCAT44(DAT_ram_40096760,DAT_ram_4009675c);
              }
              uVar28 = uVar28 + 1;
            } while (uVar39 != uVar28);
          }
          fVar62 = DAT_ram_4009675c;
          if (uVar25 == 0) {
            if (*(char *)(iVar34 + 0x45) != '\0') goto LAB_ram_30048d48;
          }
          else {
            uVar39 = *(uint *)(iVar34 + 0x28);
            pfVar35 = *(float **)(iVar34 + 0x24);
            uVar26 = 0;
            if (uVar39 == 0) {
LAB_ram_30048486:
              fVar62 = DAT_ram_4009675c;
              uVar28 = uVar30 + uVar26;
              pfVar23 = pfVar35 + uVar28;
              do {
                uVar26 = uVar26 + 1;
                fVar53 = fVar62;
                if (uVar28 < uVar39) {
                  fVar53 = (float)*(undefined8 *)pfVar23;
                }
                uVar28 = uVar30 + uVar26;
                pfVar23[-uVar30] =
                     (*(float *)(iVar34 + 0x38) - *(float *)(iVar34 + 0x34)) * fVar62 +
                     *(float *)(iVar34 + 0x34);
                *pfVar23 = (*(float *)(iVar34 + 0x40) - *(float *)(iVar34 + 0x3c)) * fVar53 +
                           *(float *)(iVar34 + 0x3c);
                pfVar23 = pfVar23 + 1;
              } while (uVar26 < uVar25);
            }
            else {
              uVar28 = uVar25;
              if (uVar39 <= uVar25) {
                uVar28 = uVar39;
              }
              pfVar23 = pfVar35 + uVar30;
              pfVar31 = pfVar35;
              do {
                uVar32 = uVar30 + uVar26;
                uVar26 = uVar26 + 1;
                fVar53 = fVar62;
                if (uVar32 < uVar39) {
                  fVar53 = (float)*(undefined8 *)pfVar23;
                }
                *pfVar31 = (*(float *)(iVar34 + 0x38) - *(float *)(iVar34 + 0x34)) *
                           (float)*(undefined8 *)pfVar31 + *(float *)(iVar34 + 0x34);
                *pfVar23 = (*(float *)(iVar34 + 0x40) - *(float *)(iVar34 + 0x3c)) * fVar53 +
                           *(float *)(iVar34 + 0x3c);
                pfVar23 = pfVar23 + 1;
                pfVar31 = pfVar31 + 1;
              } while (uVar26 < uVar28);
              if (uVar26 < uVar25) goto LAB_ram_30048486;
            }
            if (*(char *)(iVar34 + 0x45) != '\0') {
LAB_ram_30048d48:
              *(undefined4 *)(iVar34 + 0x48) = 0x1000;
              *(float *)(iVar34 + 0x4c) = fVar45;
              *(undefined1 *)(iVar34 + 0x44) = 1;
              uStack_d0 = 0x1000;
              goto LAB_ram_30048d5c;
            }
            puVar15 = *(undefined8 **)(iVar34 + 0x2c);
            pfVar23 = pfVar35 + uVar25;
            puVar13 = *(undefined4 **)(iVar34 + 0x30);
            do {
              pfVar31 = pfVar35 + uVar30;
              *puVar15 = *(undefined8 *)pfVar35;
              pfVar35 = pfVar35 + 1;
              puVar15 = (undefined8 *)((int)puVar15 + 4);
              *puVar13 = (int)*(undefined8 *)pfVar31;
              puVar13 = puVar13 + 1;
            } while (pfVar23 != pfVar35);
          }
          *(undefined4 *)(iVar34 + 0x48) = 0;
          *(float *)(iVar34 + 0x4c) = fVar45;
          *(undefined **)(iVar34 + 0x44) = &sedeleg;
          uVar30 = uVar25;
        }
        else {
          uStack_d0 = *(uint *)(iVar34 + 0x48);
          if (uStack_d0 != 0) {
LAB_ram_30048d5c:
            uVar26 = uStack_d0;
            if (uVar8 <= uStack_d0) {
              uVar26 = uVar8;
            }
            if (uVar25 != 0) {
              uVar25 = uVar26;
              if (uVar8 <= uVar26) {
                uVar25 = uVar8;
              }
              iVar10 = *(int *)(iVar34 + 0x2c);
              iVar14 = *(int *)(iVar34 + 0x30);
              pfStack_dc = (float *)(uVar30 << 2);
              uVar30 = 0;
LAB_ram_30048da0:
              do {
                iVar24 = uVar30 * 0x5c;
                iVar38 = uVar30 * 4;
                puVar17 = (ulonglong *)(iVar10 + iVar38);
                puVar22 = (ulonglong *)(iVar14 + iVar38);
                fVar45 = *(float *)(*(int *)(iVar34 + 0x24) + iVar38);
                piVar36 = (int *)(*(int *)(iVar34 + 4) + iVar24);
                fVar62 = *(float *)(*(int *)(iVar34 + 0x24) + (int)pfStack_dc);
                uVar66 = *puVar17;
                uVar54 = *puVar22;
                if ((piVar36 == (int *)0x0) ||
                   (iVar10 = *(int *)(*(int *)(iVar34 + 4) + iVar24), iVar10 == 0)) {
LAB_ram_3004900a:
                  uVar55 = uVar54 & 0xffffffff;
                  uVar48 = uVar66 & 0xffffffff;
                }
                else {
                  iVar14 = piVar36[1];
                  if (iVar14 == 2) {
                    fVar53 = *(float *)(iVar10 + 0x38);
                    fVar58 = *(float *)(iVar10 + 0x3c);
                    fVar63 = *(float *)(iVar10 + 0x40);
                    fVar52 = *(float *)(iVar10 + 0x44);
                    fVar60 = *(float *)(iVar10 + 0x48);
                    fVar56 = *(float *)(iVar10 + 0x8c);
                    fVar46 = *(float *)(iVar10 + 0x90);
                    fVar64 = *(float *)(iVar10 + 0x94);
                    fVar43 = *(float *)(iVar10 + 0x98);
                    fVar61 = *(float *)(iVar10 + 0x9c);
                    uVar48 = *(ulonglong *)(iVar10 + 0x4c);
                    uVar55 = *(ulonglong *)(iVar10 + 0x50);
                    fVar65 = *(float *)(iVar10 + 0xa0);
                    fVar51 = *(float *)(iVar10 + 0xa4);
                    if (param_4 != uVar9) {
                      uVar39 = 0;
                      pfVar35 = pfVar40;
                      do {
                        uVar39 = uVar39 + 1;
                        fVar49 = (float)*(undefined8 *)pfVar35;
                        fVar50 = fVar53 * fVar49 + (float)uVar48;
                        fVar57 = fVar56 * fVar50 + fVar65;
                        uVar48 = (ulonglong)
                                 (uint)(fVar52 * fVar50 + fVar58 * fVar49 + (float)uVar55);
                        *pfVar35 = fVar57;
                        uVar55 = (ulonglong)(uint)(fVar63 * fVar49 + fVar60 * fVar50);
                        fVar65 = fVar43 * fVar57 + fVar46 * fVar50 + fVar51;
                        fVar51 = fVar64 * fVar50 + fVar61 * fVar57;
                        pfVar35 = pfVar35 + 1;
                      } while (uVar39 < uVar8);
                    }
                    *(ulonglong *)(iVar10 + 0x4c) = uVar48;
                    *(ulonglong *)(iVar10 + 0x50) = uVar55;
                    *(float *)(iVar10 + 0xa0) = fVar65;
                    *(float *)(iVar10 + 0xa4) = fVar51;
                    uVar48 = *puVar17;
                    uVar55 = *puVar22;
                  }
                  else if (iVar14 == 3) {
                    fVar53 = *(float *)(iVar10 + 0x38);
                    fVar58 = *(float *)(iVar10 + 0x3c);
                    fVar63 = *(float *)(iVar10 + 0x40);
                    fVar52 = *(float *)(iVar10 + 0x44);
                    fVar60 = *(float *)(iVar10 + 0x48);
                    fVar56 = *(float *)(iVar10 + 0x8c);
                    fVar46 = *(float *)(iVar10 + 0x90);
                    fVar64 = *(float *)(iVar10 + 0x94);
                    fVar43 = *(float *)(iVar10 + 0x98);
                    fVar61 = *(float *)(iVar10 + 0x9c);
                    fVar41 = *(float *)(iVar10 + 0xe0);
                    fVar12 = *(float *)(iVar10 + 0xe4);
                    fVar11 = *(float *)(iVar10 + 0xe8);
                    fVar27 = *(float *)(iVar10 + 0xec);
                    fVar7 = *(float *)(iVar10 + 0xf0);
                    fVar65 = *(float *)(iVar10 + 0x4c);
                    uVar48 = *(ulonglong *)(iVar10 + 0x50);
                    fVar51 = *(float *)(iVar10 + 0xa0);
                    fVar50 = *(float *)(iVar10 + 0xa4);
                    fVar57 = *(float *)(iVar10 + 0xf4);
                    fVar49 = *(float *)(iVar10 + 0xf8);
                    if (param_4 != uVar9) {
                      uVar39 = 0;
                      pfVar35 = pfVar40;
                      do {
                        fVar42 = *pfVar35;
                        uVar39 = uVar39 + 1;
                        fVar44 = fVar53 * fVar42 + fVar65;
                        fVar1 = fVar56 * fVar44 + fVar51;
                        fVar65 = fVar52 * fVar44 + fVar58 * fVar42 + (float)uVar48;
                        fVar2 = fVar41 * fVar1 + fVar57;
                        uVar48 = (ulonglong)(uint)(fVar63 * fVar42 + fVar60 * fVar44);
                        fVar51 = fVar43 * fVar1 + fVar46 * fVar44 + fVar50;
                        *pfVar35 = fVar2;
                        fVar50 = fVar64 * fVar44 + fVar61 * fVar1;
                        fVar57 = fVar27 * fVar2 + fVar12 * fVar1 + fVar49;
                        fVar49 = fVar11 * fVar1 + fVar7 * fVar2;
                        pfVar35 = pfVar35 + 1;
                      } while (uVar39 < uVar8);
                    }
                    *(float *)(iVar10 + 0x4c) = fVar65;
                    *(ulonglong *)(iVar10 + 0x50) = uVar48;
                    *(float *)(iVar10 + 0xa0) = fVar51;
                    *(float *)(iVar10 + 0xa4) = fVar50;
                    *(float *)(iVar10 + 0xf4) = fVar57;
                    *(float *)(iVar10 + 0xf8) = fVar49;
                    uVar48 = *puVar17;
                    uVar55 = *puVar22;
                  }
                  else {
                    iVar33 = 0;
                    uVar39 = 0;
                    if (iVar14 == 0) goto LAB_ram_3004900a;
                    while( true ) {
                      FUN_ram_400955dc(iVar10 + iVar33 + 0x2c,pfVar40,pfVar40,uVar8);
                      uVar39 = uVar39 + 1;
                      iVar33 = iVar33 + 0x54;
                      if ((uint)piVar36[1] <= uVar39) break;
                      iVar10 = *piVar36;
                    }
                    uVar48 = *(ulonglong *)(*(int *)(iVar34 + 0x2c) + iVar38);
                    uVar55 = *(ulonglong *)(*(int *)(iVar34 + 0x30) + iVar38);
                    piVar36 = (int *)(*(int *)(iVar34 + 4) + iVar24);
                  }
                }
                iVar10 = piVar36[0xf];
                fVar53 = (fVar45 - (float)uVar66) / (float)uStack_d0;
                fVar58 = (fVar62 - (float)uVar54) / (float)uStack_d0;
                if (iVar10 == 0) {
                  FUN_ram_30046fc6(uVar48,uVar55,fVar53,fVar58,piVar36 + 4,pfVar40,uVar8,uVar26);
                  piVar36 = (int *)(*(int *)(iVar34 + 4) + iVar24);
                }
                else {
                  fVar63 = (float)piVar36[0x10];
                  fVar52 = (float)piVar36[0x11];
                  fVar60 = (float)piVar36[0x12];
                  fVar56 = (float)piVar36[0x13];
                  fVar46 = (float)piVar36[0x14];
                  fVar64 = (float)piVar36[0x15];
                  fVar43 = (float)piVar36[0x16];
                  pfVar35 = pfVar40;
                  if (uVar25 == 0) {
                    uVar39 = 0;
                  }
                  else {
                    do {
                      fVar65 = (float)uVar48 * (float)*(undefined8 *)pfVar35;
                      uVar48 = (ulonglong)(uint)((float)uVar48 + fVar53);
                      fVar61 = fVar63 * (fVar56 * fVar43 + fVar65) + fVar52;
                      fVar43 = fVar46 * (ABS(fVar65) - fVar43) + fVar43;
                      if (fVar61 <= 0.0) {
                        fVar61 = 0.0;
                      }
                      if (fVar60 <= fVar61) {
                        fVar61 = fVar60;
                      }
                      uVar39 = (uint)(-1 < (int)fVar61) * (int)fVar61;
                      pfVar31 = (float *)(uVar39 * 0x10 + iVar10);
                      fVar61 = fVar61 - (float)uVar39;
                      pfVar23 = pfVar35 + 1;
                      fVar51 = (float)uVar55;
                      uVar55 = (ulonglong)(uint)(fVar51 + fVar58);
                      *pfVar35 = ((((float)*(undefined8 *)(pfVar31 + 3) * fVar61 + pfVar31[2]) *
                                   fVar61 + pfVar31[1]) * fVar61 + fVar64 * fVar65 + *pfVar31) *
                                 fVar51;
                      uVar39 = uVar25;
                      pfVar35 = pfVar23;
                    } while (pfVar23 != pfVar40 + uVar25);
                  }
                  if (uVar39 < uVar8) {
                    pfVar35 = pfVar40 + uVar39;
                    do {
                      fVar65 = (float)uVar48 * (float)*(undefined8 *)pfVar35;
                      fVar61 = fVar63 * (fVar56 * fVar43 + fVar65) + fVar52;
                      fVar43 = fVar46 * (ABS(fVar65) - fVar43) + fVar43;
                      if (fVar61 <= 0.0) {
                        fVar61 = 0.0;
                      }
                      if (fVar60 <= fVar61) {
                        fVar61 = fVar60;
                      }
                      uVar39 = (uint)(-1 < (int)fVar61) * (int)fVar61;
                      pfVar31 = (float *)(uVar39 * 0x10 + iVar10);
                      fVar61 = fVar61 - (float)uVar39;
                      pfVar23 = pfVar35 + 1;
                      *pfVar35 = (float)uVar55 *
                                 ((((float)*(undefined8 *)(pfVar31 + 3) * fVar61 + pfVar31[2]) *
                                   fVar61 + pfVar31[1]) * fVar61 + fVar64 * fVar65 + *pfVar31);
                      pfVar35 = pfVar23;
                    } while (pfVar23 != pfVar40 + uVar8);
                  }
                  piVar36[0x16] = (int)fVar43;
                }
                iVar10 = piVar36[2];
                if (iVar10 != 0) {
                  iVar14 = piVar36[3];
                  if (iVar14 == 2) {
                    fVar63 = *(float *)(iVar10 + 0x38);
                    fVar52 = *(float *)(iVar10 + 0x3c);
                    fVar60 = *(float *)(iVar10 + 0x40);
                    fVar56 = *(float *)(iVar10 + 0x44);
                    fVar46 = *(float *)(iVar10 + 0x48);
                    fVar64 = *(float *)(iVar10 + 0x8c);
                    fVar43 = *(float *)(iVar10 + 0x90);
                    fVar61 = *(float *)(iVar10 + 0x94);
                    fVar65 = *(float *)(iVar10 + 0x98);
                    fVar51 = *(float *)(iVar10 + 0x9c);
                    uVar66 = *(ulonglong *)(iVar10 + 0x4c);
                    uVar54 = *(ulonglong *)(iVar10 + 0x50);
                    fVar50 = *(float *)(iVar10 + 0xa0);
                    fVar57 = *(float *)(iVar10 + 0xa4);
                    if (param_4 != uVar9) {
                      uVar39 = 0;
                      pfVar35 = pfVar40;
                      do {
                        uVar39 = uVar39 + 1;
                        fVar41 = (float)*(undefined8 *)pfVar35;
                        fVar49 = fVar63 * fVar41 + (float)uVar66;
                        fVar7 = fVar64 * fVar49 + fVar50;
                        uVar66 = (ulonglong)
                                 (uint)(fVar56 * fVar49 + fVar52 * fVar41 + (float)uVar54);
                        *pfVar35 = fVar7;
                        uVar54 = (ulonglong)(uint)(fVar60 * fVar41 + fVar46 * fVar49);
                        fVar50 = fVar65 * fVar7 + fVar43 * fVar49 + fVar57;
                        fVar57 = fVar61 * fVar49 + fVar51 * fVar7;
                        pfVar35 = pfVar35 + 1;
                      } while (uVar39 < uVar8);
                    }
                    *(ulonglong *)(iVar10 + 0x4c) = uVar66;
                    *(ulonglong *)(iVar10 + 0x50) = uVar54;
                    *(float *)(iVar10 + 0xa0) = fVar50;
                    *(float *)(iVar10 + 0xa4) = fVar57;
                  }
                  else if (iVar14 == 3) {
                    fVar63 = *(float *)(iVar10 + 0x38);
                    fVar52 = *(float *)(iVar10 + 0x3c);
                    fVar60 = *(float *)(iVar10 + 0x40);
                    fVar56 = *(float *)(iVar10 + 0x44);
                    fVar46 = *(float *)(iVar10 + 0x48);
                    fVar64 = *(float *)(iVar10 + 0x8c);
                    fVar43 = *(float *)(iVar10 + 0x90);
                    fVar61 = *(float *)(iVar10 + 0x94);
                    fVar65 = *(float *)(iVar10 + 0x98);
                    fVar51 = *(float *)(iVar10 + 0x9c);
                    fVar11 = *(float *)(iVar10 + 0xe0);
                    fVar27 = *(float *)(iVar10 + 0xe4);
                    fVar12 = *(float *)(iVar10 + 0xe8);
                    fVar42 = *(float *)(iVar10 + 0xec);
                    fVar44 = *(float *)(iVar10 + 0xf0);
                    fVar50 = *(float *)(iVar10 + 0x4c);
                    uVar66 = *(ulonglong *)(iVar10 + 0x50);
                    fVar57 = *(float *)(iVar10 + 0xa0);
                    fVar49 = *(float *)(iVar10 + 0xa4);
                    fVar7 = *(float *)(iVar10 + 0xf4);
                    fVar41 = *(float *)(iVar10 + 0xf8);
                    if (param_4 != uVar9) {
                      uVar39 = 0;
                      pfVar35 = pfVar40;
                      do {
                        fVar1 = *pfVar35;
                        uVar39 = uVar39 + 1;
                        fVar2 = fVar63 * fVar1 + fVar50;
                        fVar3 = fVar64 * fVar2 + fVar57;
                        fVar50 = fVar56 * fVar2 + fVar52 * fVar1 + (float)uVar66;
                        fVar4 = fVar11 * fVar3 + fVar7;
                        uVar66 = (ulonglong)(uint)(fVar60 * fVar1 + fVar46 * fVar2);
                        fVar57 = fVar65 * fVar3 + fVar43 * fVar2 + fVar49;
                        *pfVar35 = fVar4;
                        fVar49 = fVar61 * fVar2 + fVar51 * fVar3;
                        fVar7 = fVar42 * fVar4 + fVar27 * fVar3 + fVar41;
                        fVar41 = fVar12 * fVar3 + fVar44 * fVar4;
                        pfVar35 = pfVar35 + 1;
                      } while (uVar39 < uVar8);
                    }
                    *(float *)(iVar10 + 0x4c) = fVar50;
                    *(ulonglong *)(iVar10 + 0x50) = uVar66;
                    *(float *)(iVar10 + 0xa0) = fVar57;
                    *(float *)(iVar10 + 0xa4) = fVar49;
                    *(float *)(iVar10 + 0xf4) = fVar7;
                    *(float *)(iVar10 + 0xf8) = fVar41;
                  }
                  else {
                    iVar24 = 0;
                    uVar39 = 0;
                    if (iVar14 != 0) {
                      while( true ) {
                        FUN_ram_400955dc(iVar10 + iVar24 + 0x2c,pfVar40,pfVar40,uVar8);
                        uVar39 = uVar39 + 1;
                        iVar24 = iVar24 + 0x54;
                        if ((uint)piVar36[3] <= uVar39) break;
                        iVar10 = piVar36[2];
                      }
                    }
                  }
                }
                iVar10 = *(int *)(iVar34 + 0x2c);
                iVar14 = *(int *)(iVar34 + 0x30);
                pfVar35 = (float *)(iVar10 + iVar38);
                pfVar23 = (float *)(iVar38 + iVar14);
                *(ulonglong *)pfVar35 =
                     (ulonglong)(uint)(fVar53 * (float)(int)uVar26 + (float)*(undefined8 *)pfVar35);
                *pfVar23 = fVar58 * (float)(int)uVar26 + *pfVar23;
                if (uStack_d0 <= uVar8) {
                  uVar39 = *(uint *)(iVar34 + 8);
                  *pfVar35 = fVar45;
                  pfStack_dc = (float *)((int)pfStack_dc + 4);
                  *pfVar23 = fVar62;
                  uVar30 = uVar30 + 1;
                  if (uVar39 <= uVar30) break;
                  goto LAB_ram_30048da0;
                }
                uVar30 = uVar30 + 1;
                pfStack_dc = (float *)((int)pfStack_dc + 4);
              } while (uVar30 < *(uint *)(iVar34 + 8));
              uStack_d0 = *(uint *)(iVar34 + 0x48);
            }
            *(uint *)(iVar34 + 0x48) = uStack_d0 - uVar26;
            goto LAB_ram_30047be0;
          }
        }
        iVar10 = 0;
        uVar25 = 0;
        if (uVar30 != 0) {
          do {
            piVar36 = (int *)(*(int *)(iVar34 + 4) + iVar10);
            if (piVar36 != (int *)0x0) {
              iVar14 = *(int *)(*(int *)(iVar34 + 4) + iVar10);
              uVar66 = *(ulonglong *)(*(int *)(iVar34 + 0x2c) + uVar25 * 4);
              uVar54 = *(ulonglong *)(uVar25 * 4 + *(int *)(iVar34 + 0x30));
              if (iVar14 != 0) {
                iVar38 = piVar36[1];
                if (iVar38 == 2) {
                  fVar45 = *(float *)(iVar14 + 0x38);
                  fVar62 = *(float *)(iVar14 + 0x3c);
                  fVar53 = *(float *)(iVar14 + 0x40);
                  fVar58 = *(float *)(iVar14 + 0x44);
                  fVar63 = *(float *)(iVar14 + 0x48);
                  fVar52 = *(float *)(iVar14 + 0x8c);
                  fVar60 = *(float *)(iVar14 + 0x90);
                  fVar56 = *(float *)(iVar14 + 0x94);
                  fVar46 = *(float *)(iVar14 + 0x98);
                  fVar64 = *(float *)(iVar14 + 0x9c);
                  uVar48 = *(ulonglong *)(iVar14 + 0x4c);
                  uVar55 = *(ulonglong *)(iVar14 + 0x50);
                  fVar43 = *(float *)(iVar14 + 0xa0);
                  fVar61 = *(float *)(iVar14 + 0xa4);
                  if (param_4 != uVar9) {
                    uVar30 = 0;
                    pfVar35 = pfVar40;
                    do {
                      uVar30 = uVar30 + 1;
                      fVar50 = (float)*(undefined8 *)pfVar35;
                      fVar65 = fVar45 * fVar50 + (float)uVar48;
                      fVar51 = fVar52 * fVar65 + fVar43;
                      uVar48 = (ulonglong)(uint)(fVar58 * fVar65 + fVar62 * fVar50 + (float)uVar55);
                      *pfVar35 = fVar51;
                      uVar55 = (ulonglong)(uint)(fVar53 * fVar50 + fVar63 * fVar65);
                      fVar43 = fVar46 * fVar51 + fVar60 * fVar65 + fVar61;
                      fVar61 = fVar56 * fVar65 + fVar64 * fVar51;
                      pfVar35 = pfVar35 + 1;
                    } while (uVar30 < uVar8);
                  }
                  *(ulonglong *)(iVar14 + 0x4c) = uVar48;
                  *(ulonglong *)(iVar14 + 0x50) = uVar55;
                  *(float *)(iVar14 + 0xa0) = fVar43;
                  *(float *)(iVar14 + 0xa4) = fVar61;
                }
                else if (iVar38 == 3) {
                  fVar45 = *(float *)(iVar14 + 0x38);
                  fVar62 = *(float *)(iVar14 + 0x3c);
                  fVar53 = *(float *)(iVar14 + 0x40);
                  fVar58 = *(float *)(iVar14 + 0x44);
                  fVar63 = *(float *)(iVar14 + 0x48);
                  fVar52 = *(float *)(iVar14 + 0x8c);
                  fVar60 = *(float *)(iVar14 + 0x90);
                  fVar56 = *(float *)(iVar14 + 0x94);
                  fVar46 = *(float *)(iVar14 + 0x98);
                  fVar64 = *(float *)(iVar14 + 0x9c);
                  fVar43 = *(float *)(iVar14 + 0xe0);
                  fVar61 = *(float *)(iVar14 + 0xe4);
                  fVar65 = *(float *)(iVar14 + 0xe8);
                  fVar51 = *(float *)(iVar14 + 0xec);
                  fVar12 = *(float *)(iVar14 + 0xf0);
                  fVar50 = *(float *)(iVar14 + 0x4c);
                  uVar48 = *(ulonglong *)(iVar14 + 0x50);
                  fVar57 = *(float *)(iVar14 + 0xa0);
                  fVar49 = *(float *)(iVar14 + 0xa4);
                  fVar7 = *(float *)(iVar14 + 0xf4);
                  fVar41 = *(float *)(iVar14 + 0xf8);
                  if (param_4 != uVar9) {
                    uVar30 = 0;
                    pfVar35 = pfVar40;
                    do {
                      fVar11 = *pfVar35;
                      uVar30 = uVar30 + 1;
                      fVar27 = fVar45 * fVar11 + fVar50;
                      fVar42 = fVar52 * fVar27 + fVar57;
                      fVar50 = fVar58 * fVar27 + fVar62 * fVar11 + (float)uVar48;
                      fVar44 = fVar43 * fVar42 + fVar7;
                      uVar48 = (ulonglong)(uint)(fVar53 * fVar11 + fVar63 * fVar27);
                      fVar57 = fVar46 * fVar42 + fVar60 * fVar27 + fVar49;
                      *pfVar35 = fVar44;
                      fVar7 = fVar51 * fVar44 + fVar61 * fVar42 + fVar41;
                      fVar49 = fVar56 * fVar27 + fVar64 * fVar42;
                      fVar41 = fVar65 * fVar42 + fVar12 * fVar44;
                      pfVar35 = pfVar35 + 1;
                    } while (uVar30 < uVar8);
                  }
                  *(float *)(iVar14 + 0x4c) = fVar50;
                  *(ulonglong *)(iVar14 + 0x50) = uVar48;
                  *(float *)(iVar14 + 0xa0) = fVar57;
                  *(float *)(iVar14 + 0xa4) = fVar49;
                  *(float *)(iVar14 + 0xf4) = fVar7;
                  *(float *)(iVar14 + 0xf8) = fVar41;
                }
                else {
                  iVar24 = 0;
                  uVar30 = 0;
                  if (iVar38 != 0) {
                    while( true ) {
                      FUN_ram_400955dc(iVar14 + iVar24 + 0x2c,pfVar40,pfVar40,uVar8);
                      uVar30 = uVar30 + 1;
                      iVar24 = iVar24 + 0x54;
                      if ((uint)piVar36[1] <= uVar30) break;
                      iVar14 = *piVar36;
                    }
                  }
                }
              }
              iVar14 = piVar36[0xf];
              if (iVar14 == 0) {
                FUN_ram_30046fc6(uVar66 & 0xffffffff,uVar54 & 0xffffffff,0,piVar36 + 4,pfVar40,uVar8
                                 ,0);
              }
              else {
                fVar45 = (float)piVar36[0x10];
                fVar62 = (float)piVar36[0x11];
                fVar53 = (float)piVar36[0x12];
                fVar58 = (float)piVar36[0x13];
                fVar63 = (float)piVar36[0x14];
                fVar52 = (float)piVar36[0x15];
                fVar60 = (float)piVar36[0x16];
                uVar30 = 0;
                pfVar35 = pfVar40;
                if (param_4 != uVar9) {
                  do {
                    uVar30 = uVar30 + 1;
                    fVar46 = (float)uVar66 * (float)*(undefined8 *)pfVar35;
                    fVar56 = fVar45 * (fVar58 * fVar60 + fVar46) + fVar62;
                    fVar60 = fVar63 * (ABS(fVar46) - fVar60) + fVar60;
                    if (fVar56 <= 0.0) {
                      fVar56 = 0.0;
                    }
                    if (fVar53 <= fVar56) {
                      fVar56 = fVar53;
                    }
                    uVar26 = (uint)(-1 < (int)fVar56) * (int)fVar56;
                    pfVar23 = (float *)(uVar26 * 0x10 + iVar14);
                    fVar56 = fVar56 - (float)uVar26;
                    *pfVar35 = (float)uVar54 *
                               ((((float)*(undefined8 *)(pfVar23 + 3) * fVar56 + pfVar23[2]) *
                                 fVar56 + pfVar23[1]) * fVar56 + fVar52 * fVar46 + *pfVar23);
                    pfVar35 = pfVar35 + 1;
                  } while (uVar30 < uVar8);
                }
                piVar36[0x16] = (int)fVar60;
              }
              iVar14 = piVar36[2];
              if (iVar14 == 0) {
LAB_ram_30048292:
                uVar30 = *(uint *)(iVar34 + 8);
              }
              else {
                iVar38 = piVar36[3];
                if (iVar38 == 2) {
                  fVar45 = *(float *)(iVar14 + 0x38);
                  fVar62 = *(float *)(iVar14 + 0x3c);
                  fVar53 = *(float *)(iVar14 + 0x40);
                  fVar58 = *(float *)(iVar14 + 0x44);
                  fVar63 = *(float *)(iVar14 + 0x48);
                  fVar52 = *(float *)(iVar14 + 0x8c);
                  fVar60 = *(float *)(iVar14 + 0x90);
                  fVar56 = *(float *)(iVar14 + 0x94);
                  fVar46 = *(float *)(iVar14 + 0x98);
                  fVar64 = *(float *)(iVar14 + 0x9c);
                  uVar66 = *(ulonglong *)(iVar14 + 0x4c);
                  uVar54 = *(ulonglong *)(iVar14 + 0x50);
                  fVar43 = *(float *)(iVar14 + 0xa0);
                  fVar61 = *(float *)(iVar14 + 0xa4);
                  if (param_4 != uVar9) {
                    uVar30 = 0;
                    pfVar35 = pfVar40;
                    do {
                      uVar30 = uVar30 + 1;
                      fVar50 = (float)*(undefined8 *)pfVar35;
                      fVar65 = fVar45 * fVar50 + (float)uVar66;
                      fVar51 = fVar52 * fVar65 + fVar43;
                      uVar66 = (ulonglong)(uint)(fVar58 * fVar65 + fVar62 * fVar50 + (float)uVar54);
                      *pfVar35 = fVar51;
                      uVar54 = (ulonglong)(uint)(fVar53 * fVar50 + fVar63 * fVar65);
                      fVar43 = fVar46 * fVar51 + fVar60 * fVar65 + fVar61;
                      fVar61 = fVar56 * fVar65 + fVar64 * fVar51;
                      pfVar35 = pfVar35 + 1;
                    } while (uVar30 < uVar8);
                  }
                  uVar30 = *(uint *)(iVar34 + 8);
                  *(ulonglong *)(iVar14 + 0x4c) = uVar66;
                  *(ulonglong *)(iVar14 + 0x50) = uVar54;
                  *(float *)(iVar14 + 0xa0) = fVar43;
                  *(float *)(iVar14 + 0xa4) = fVar61;
                }
                else {
                  if (iVar38 != 3) {
                    iVar24 = 0;
                    uVar30 = 0;
                    if (iVar38 != 0) {
                      while( true ) {
                        FUN_ram_400955dc(iVar14 + iVar24 + 0x2c,pfVar40,pfVar40,uVar8);
                        uVar30 = uVar30 + 1;
                        iVar24 = iVar24 + 0x54;
                        if ((uint)piVar36[3] <= uVar30) break;
                        iVar14 = piVar36[2];
                      }
                    }
                    goto LAB_ram_30048292;
                  }
                  fVar45 = *(float *)(iVar14 + 0x38);
                  fVar62 = *(float *)(iVar14 + 0x3c);
                  fVar53 = *(float *)(iVar14 + 0x40);
                  fVar58 = *(float *)(iVar14 + 0x44);
                  fVar63 = *(float *)(iVar14 + 0x48);
                  fVar52 = *(float *)(iVar14 + 0x8c);
                  fVar60 = *(float *)(iVar14 + 0x90);
                  fVar56 = *(float *)(iVar14 + 0x94);
                  fVar46 = *(float *)(iVar14 + 0x98);
                  fVar64 = *(float *)(iVar14 + 0x9c);
                  fVar43 = *(float *)(iVar14 + 0xe0);
                  fVar61 = *(float *)(iVar14 + 0xe4);
                  fVar65 = *(float *)(iVar14 + 0xe8);
                  fVar51 = *(float *)(iVar14 + 0xec);
                  fVar50 = *(float *)(iVar14 + 0xf0);
                  fVar57 = *(float *)(iVar14 + 0x4c);
                  uVar66 = *(ulonglong *)(iVar14 + 0x50);
                  fVar49 = *(float *)(iVar14 + 0xa0);
                  fVar7 = *(float *)(iVar14 + 0xa4);
                  fVar41 = *(float *)(iVar14 + 0xf4);
                  fVar12 = *(float *)(iVar14 + 0xf8);
                  if (param_4 != uVar9) {
                    uVar30 = 0;
                    pfVar35 = pfVar40;
                    do {
                      fVar11 = *pfVar35;
                      uVar30 = uVar30 + 1;
                      fVar27 = fVar45 * fVar11 + fVar57;
                      fVar42 = fVar52 * fVar27 + fVar49;
                      fVar57 = fVar58 * fVar27 + fVar62 * fVar11 + (float)uVar66;
                      fVar44 = fVar43 * fVar42 + fVar41;
                      uVar66 = (ulonglong)(uint)(fVar53 * fVar11 + fVar63 * fVar27);
                      fVar49 = fVar46 * fVar42 + fVar60 * fVar27 + fVar7;
                      *pfVar35 = fVar44;
                      fVar41 = fVar51 * fVar44 + fVar61 * fVar42 + fVar12;
                      fVar7 = fVar56 * fVar27 + fVar64 * fVar42;
                      fVar12 = fVar65 * fVar42 + fVar50 * fVar44;
                      pfVar35 = pfVar35 + 1;
                    } while (uVar30 < uVar8);
                  }
                  uVar30 = *(uint *)(iVar34 + 8);
                  *(float *)(iVar14 + 0x4c) = fVar57;
                  *(ulonglong *)(iVar14 + 0x50) = uVar66;
                  *(float *)(iVar14 + 0xa0) = fVar49;
                  *(float *)(iVar14 + 0xa4) = fVar7;
                  *(float *)(iVar14 + 0xf4) = fVar41;
                  *(float *)(iVar14 + 0xf8) = fVar12;
                }
              }
            }
            uVar25 = uVar25 + 1;
            iVar10 = iVar10 + 0x5c;
          } while (uVar25 < uVar30);
        }
      }
LAB_ram_30047be0:
      uVar30 = *(uint *)(iVar34 + 0x54);
      if (uVar30 != 0) {
        fVar45 = *(float *)(param_2 + 0x18);
        fVar62 = *(float *)(param_2 + 0x1c);
        fVar53 = *(float *)(param_2 + 0x20);
        uStack_ac = SUB41(fVar45,0);
        uStack_ab = (undefined1)((uint)fVar45 >> 8);
        uStack_aa = (undefined1)((uint)fVar45 >> 0x10);
        uStack_a9 = (undefined1)((uint)fVar45 >> 0x18);
        uStack_a8 = SUB41(fVar62,0);
        uStack_a7 = (undefined1)((uint)fVar62 >> 8);
        uStack_a6 = (undefined1)((uint)fVar62 >> 0x10);
        uStack_a5 = (undefined1)((uint)fVar62 >> 0x18);
        uStack_a4 = fVar53;
        if ((((*(char *)(iVar34 + 0x80) == '\0') ||
             (fVar59 < ABS(fVar45 - *(float *)(iVar34 + 0x84)))) ||
            (fVar59 < ABS(fVar62 - *(float *)(iVar34 + 0x88)))) ||
           (fVar59 < ABS(fVar53 - *(float *)(iVar34 + 0x8c)))) {
          uVar25 = *(uint *)(iVar34 + 0x74);
          if (uVar25 < uVar30) goto LAB_ram_30047c0a;
          iVar10 = *(int *)(iVar34 + 0x70);
          uVar26 = 0;
          if (*(int *)(iVar34 + 0x5c) == 0) {
LAB_ram_300493e2:
            fVar58 = DAT_ram_4009675c;
            pfVar35 = (float *)(iVar10 + uVar26 * 4);
            do {
              *pfVar35 = fVar58;
              uVar26 = uVar26 + 1;
              pfVar35 = pfVar35 + 1;
            } while (uVar26 < uVar30);
          }
          else {
            puVar18 = *(undefined1 **)(iVar34 + 0x60);
            if ((puVar18 == (undefined1 *)0x0) || (*(int *)(iVar34 + 0x68) == 0)) {
              uVar26 = 0;
              goto LAB_ram_300493e2;
            }
            uVar26 = 0;
            if (*(uint *)(iVar34 + 100) < 3) goto LAB_ram_300493e2;
            uStack_a4._3_1_ = (undefined1)((uint)fVar53 >> 0x18);
            uStack_a4._0_1_ = SUB41(fVar53,0);
            uStack_a4._1_1_ = (undefined1)((uint)fVar53 >> 8);
            uStack_a4._2_1_ = (undefined1)((uint)fVar53 >> 0x10);
            puVar18[1] = uStack_ab;
            puVar18[2] = uStack_aa;
            *puVar18 = uStack_ac;
            puVar18[3] = uStack_a9;
            puVar18[4] = uStack_a8;
            puVar18[5] = uStack_a7;
            puVar18[6] = uStack_a6;
            puVar18[7] = uStack_a5;
            puVar18[8] = (undefined1)uStack_a4;
            puVar18[9] = uStack_a4._1_1_;
            puVar18[10] = uStack_a4._2_1_;
            puVar18[0xb] = uStack_a4._3_1_;
            fVar60 = DAT_ram_400a1388._4_4_;
            fVar52 = DAT_ram_40099f7c;
            fVar63 = DAT_ram_40096768;
            fVar58 = DAT_ram_40096764;
            pfStack_dc = *(float **)(iVar34 + 0x68);
            uVar30 = *(uint *)(iVar34 + 0x5c);
            pfVar35 = *(float **)(iVar34 + 0x60);
            if (uVar30 == 0) {
              uVar26 = 3;
            }
            else {
              uVar26 = 3;
              uVar32 = 0;
              uVar39 = *(uint *)(iVar34 + 100);
              uVar28 = *(uint *)(iVar34 + 0x6c);
              pfVar23 = pfVar35;
              fVar56 = (float)DAT_ram_400a1388;
              do {
                uVar29 = *(uint *)(*(int *)(iVar34 + 0x58) + uVar32 * 0x1c);
                iVar14 = *(int *)(iVar34 + 0x58) + uVar32 * 0x1c;
                uVar37 = uVar39;
                pfVar35 = pfVar23;
                pfVar31 = pfStack_dc;
                if (uVar29 == 2) {
                  if (uVar26 != 0) {
                    pfVar19 = pfVar23;
                    do {
                      fVar64 = (float)*(undefined8 *)pfVar19;
                      fVar46 = _DAT_ram_300847dc;
                      if ((fVar63 < fVar64) && (fVar46 = _DAT_ram_30084fd8, fVar64 < fVar58)) {
                        fVar46 = (fVar64 + fVar58) * fVar56;
                        uVar39 = (uint)(-1 < (int)fVar46) * (int)fVar46;
                        fVar46 = (fVar46 - (float)uVar39) *
                                 ((float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar39 + 0x201) * 4) -
                                 *(float *)(&DAT_ram_30083fdc + (uVar39 + 0x200) * 4)) +
                                 *(float *)(&DAT_ram_30083fdc + (uVar39 + 0x200) * 4);
                      }
                      pfVar16 = pfVar19 + 1;
                      *pfVar19 = fVar46;
                      pfVar19 = pfVar16;
                    } while (pfVar16 != pfVar23 + uVar26);
                  }
                }
                else if (uVar29 < 3) {
                  if (uVar29 == 0) {
                    uVar29 = (uint)*(ushort *)(iVar14 + 8);
                    if (((uVar29 != 0) && (uVar21 = (uint)*(ushort *)(iVar14 + 10), uVar21 != 0)) &&
                       (iVar38 = *(int *)(iVar14 + 0xc), iVar38 != 0)) {
                      if ((uVar28 < uVar29) || (uVar39 < uVar26)) {
                        uVar26 = 0;
                        goto LAB_ram_300487ea;
                      }
                      if (uVar21 <= uVar26) {
                        uVar26 = uVar21;
                      }
                      uVar37 = uVar28;
                      uVar28 = uVar39;
                      pfVar35 = pfStack_dc;
                      pfVar31 = pfVar23;
                      if (uVar26 == 0) {
                        uVar21 = *(uint *)(iVar14 + 0x18);
                        uVar39 = 0;
                        do {
                          while (iVar38 = uVar39 * 4, uVar39 < uVar21) {
                            uVar39 = uVar39 + 1;
                            *pfStack_dc = (float)*(undefined8 *)(*(int *)(iVar14 + 0x14) + iVar38);
                            pfStack_dc = pfStack_dc + 1;
                            uVar26 = uVar29;
                            if (uVar29 <= (uVar39 & 0xffff)) goto LAB_ram_300487c8;
                          }
                          uVar39 = uVar39 + 1;
                          *pfStack_dc = 0.0;
                          pfStack_dc = pfStack_dc + 1;
                          uVar26 = uVar29;
                        } while ((uVar39 & 0xffff) < uVar29);
                      }
                      else {
                        uVar39 = *(uint *)(iVar14 + 0x18);
                        if (pfVar23 == (float *)0x0) {
                          uVar21 = 0;
                          do {
                            while (iVar38 = uVar21 * 4, uVar21 < uVar39) {
                              uVar21 = uVar21 + 1;
                              *pfStack_dc = (float)*(undefined8 *)(*(int *)(iVar14 + 0x14) + iVar38)
                                            + 0.0;
                              pfStack_dc = pfStack_dc + 1;
                              uVar26 = uVar29;
                              if (uVar29 <= (uVar21 & 0xffff)) goto LAB_ram_300487c8;
                            }
                            uVar21 = uVar21 + 1;
                            *pfStack_dc = 0.0;
                            pfStack_dc = pfStack_dc + 1;
                            uVar26 = uVar29;
                          } while ((uVar21 & 0xffff) < uVar29);
                        }
                        else {
                          iVar24 = 0;
                          uVar30 = 0;
                          do {
                            while( true ) {
                              fVar46 = 0.0;
                              if (uVar30 < uVar39) {
                                fVar46 = *(float *)(*(int *)(iVar14 + 0x14) + uVar30 * 4);
                              }
                              if (iVar38 + iVar24 == 0) break;
                              uStack_b0 = 0;
                              uStack_af = 0;
                              uStack_ae = 0;
                              uStack_ad = 0;
                              FUN_ram_4009557c(iVar38 + iVar24,pfVar23,uVar26,&uStack_b0);
                              uVar30 = uVar30 + 1;
                              *pfStack_dc = (float)CONCAT13(uStack_ad,
                                                            CONCAT12(uStack_ae,
                                                                     CONCAT11(uStack_af,uStack_b0)))
                                            + fVar46;
                              iVar24 = iVar24 + uVar21 * 4;
                              fVar56 = (float)DAT_ram_400a1388;
                              if (uVar29 <= (uVar30 & 0xffff)) goto LAB_ram_30049b16;
                              iVar38 = *(int *)(iVar14 + 0xc);
                              uVar39 = *(uint *)(iVar14 + 0x18);
                              pfStack_dc = pfStack_dc + 1;
                            }
                            uVar30 = uVar30 + 1;
                            *pfStack_dc = fVar46 + 0.0;
                            iVar24 = iVar24 + uVar21 * 4;
                            pfStack_dc = pfStack_dc + 1;
                          } while ((uVar30 & 0xffff) < uVar29);
LAB_ram_30049b16:
                          uVar30 = *(uint *)(iVar34 + 0x5c);
                          uVar26 = uVar29;
                        }
                      }
                    }
                  }
                  else {
                    fVar46 = *(float *)(iVar14 + 4);
                    if (uVar26 != 0) {
                      pfVar19 = pfVar23;
                      do {
                        while (0.0 <= (float)*(undefined8 *)pfVar19) {
                          pfVar19 = pfVar19 + 1;
                          if (pfVar19 == pfVar23 + uVar26) goto LAB_ram_300487c8;
                        }
                        pfVar16 = pfVar19 + 1;
                        *pfVar19 = fVar46 * (float)*(undefined8 *)pfVar19;
                        pfVar19 = pfVar16;
                      } while (pfVar23 + uVar26 != pfVar16);
                    }
                  }
                }
                else if ((uVar29 == 3) && (pfVar19 = pfVar23, uVar26 != 0)) {
                  do {
                    fVar64 = (float)*(undefined8 *)pfVar19;
                    fVar46 = _DAT_ram_30083fd8;
                    if ((fVar67 < fVar64) && (fVar46 = _DAT_ram_300847d4, fVar64 < fVar52)) {
                      fVar46 = (fVar64 + fVar52) * fVar60;
                      uVar39 = (uint)(-1 < (int)fVar46) * (int)fVar46;
                      iVar14 = uVar39 * 4;
                      fVar46 = (fVar46 - (float)uVar39) *
                               (*(float *)(&DAT_ram_30083fdc + iVar14) -
                               *(float *)(&DAT_ram_30083fd8 + iVar14)) +
                               *(float *)(&DAT_ram_30083fd8 + iVar14);
                    }
                    pfVar16 = pfVar19 + 1;
                    *pfVar19 = fVar46;
                    pfVar19 = pfVar16;
                  } while (pfVar16 != pfVar23 + uVar26);
                }
LAB_ram_300487c8:
                pfStack_dc = pfVar31;
                uVar32 = uVar32 + 1;
                uVar39 = uVar37;
                pfVar23 = pfVar35;
              } while (uVar32 < uVar30);
            }
            if (iVar10 != 0) {
              if (uVar25 < uVar26) {
                uVar26 = uVar25;
              }
              FUN_ram_4000303c(iVar10,pfVar35,uVar26 << 2);
            }
LAB_ram_300487ea:
            uVar30 = *(uint *)(iVar34 + 0x54);
            if (uVar26 < uVar30) {
              iVar10 = *(int *)(iVar34 + 0x70);
              goto LAB_ram_300493e2;
            }
          }
          fVar58 = DAT_ram_4009675c;
          iVar10 = *(int *)(iVar34 + 0x50);
          iVar14 = 0;
          uVar25 = 0;
          if (uVar30 != 0) {
            do {
              iVar38 = iVar10 + iVar14;
              fVar63 = fVar58;
              if (uVar25 < *(uint *)(iVar34 + 0x74)) {
                fVar63 = *(float *)(*(int *)(iVar34 + 0x70) + uVar25 * 4);
              }
              uVar25 = uVar25 + 1;
              iVar14 = iVar14 + 0x54;
              fVar63 = (*(float *)(iVar34 + 0x7c) - *(float *)(iVar34 + 0x78)) * fVar63 +
                       *(float *)(iVar34 + 0x78);
              if ((iVar38 != 0) && (fVar59 < ABS((float)*(undefined8 *)(iVar38 + 0xc) - fVar63))) {
                *(ulonglong *)(iVar38 + 0xc) = (ulonglong)(uint)fVar63;
                FUN_ram_4008566a(iVar38);
                uVar30 = *(uint *)(iVar34 + 0x54);
                iVar10 = *(int *)(iVar34 + 0x50);
              }
            } while (uVar25 < uVar30);
          }
          *(float *)(iVar34 + 0x84) = fVar45;
          *(float *)(iVar34 + 0x88) = fVar62;
          *(float *)(iVar34 + 0x8c) = fVar53;
          *(undefined1 *)(iVar34 + 0x80) = 1;
        }
        else {
          iVar10 = *(int *)(iVar34 + 0x50);
        }
        if (iVar10 != 0) {
          iVar14 = *(int *)(iVar34 + 0x54);
          if (iVar14 == 2) {
            fVar45 = *(float *)(iVar10 + 0x38);
            fVar62 = *(float *)(iVar10 + 0x3c);
            fVar53 = *(float *)(iVar10 + 0x40);
            fVar58 = *(float *)(iVar10 + 0x44);
            fVar63 = *(float *)(iVar10 + 0x48);
            fVar52 = *(float *)(iVar10 + 0x8c);
            fVar60 = *(float *)(iVar10 + 0x90);
            fVar56 = *(float *)(iVar10 + 0x94);
            fVar46 = *(float *)(iVar10 + 0x98);
            fVar64 = *(float *)(iVar10 + 0x9c);
            uVar66 = *(ulonglong *)(iVar10 + 0x4c);
            uVar54 = *(ulonglong *)(iVar10 + 0x50);
            fVar43 = *(float *)(iVar10 + 0xa0);
            fVar61 = *(float *)(iVar10 + 0xa4);
            if (param_4 != uVar9) {
              uVar30 = 0;
              pfVar35 = pfVar40;
              do {
                uVar30 = uVar30 + 1;
                fVar50 = (float)*(undefined8 *)pfVar35;
                fVar65 = fVar45 * fVar50 + (float)uVar66;
                fVar51 = fVar52 * fVar65 + fVar43;
                uVar66 = (ulonglong)(uint)(fVar58 * fVar65 + fVar62 * fVar50 + (float)uVar54);
                *pfVar35 = fVar51;
                uVar54 = (ulonglong)(uint)(fVar53 * fVar50 + fVar63 * fVar65);
                fVar43 = fVar46 * fVar51 + fVar60 * fVar65 + fVar61;
                fVar61 = fVar56 * fVar65 + fVar64 * fVar51;
                pfVar35 = pfVar35 + 1;
              } while (uVar30 < uVar8);
            }
            *(ulonglong *)(iVar10 + 0x4c) = uVar66;
            *(ulonglong *)(iVar10 + 0x50) = uVar54;
            *(float *)(iVar10 + 0xa0) = fVar43;
            *(float *)(iVar10 + 0xa4) = fVar61;
          }
          else if (iVar14 == 3) {
            fVar45 = *(float *)(iVar10 + 0x38);
            fVar62 = *(float *)(iVar10 + 0x3c);
            fVar53 = *(float *)(iVar10 + 0x40);
            fVar58 = *(float *)(iVar10 + 0x44);
            fVar63 = *(float *)(iVar10 + 0x48);
            fVar52 = *(float *)(iVar10 + 0x8c);
            fVar60 = *(float *)(iVar10 + 0x90);
            fVar56 = *(float *)(iVar10 + 0x94);
            fVar46 = *(float *)(iVar10 + 0x98);
            fVar64 = *(float *)(iVar10 + 0x9c);
            fVar43 = *(float *)(iVar10 + 0xe0);
            fVar61 = *(float *)(iVar10 + 0xe4);
            fVar65 = *(float *)(iVar10 + 0xe8);
            fVar51 = *(float *)(iVar10 + 0xec);
            fVar50 = *(float *)(iVar10 + 0xf0);
            fVar57 = *(float *)(iVar10 + 0x4c);
            uVar66 = *(ulonglong *)(iVar10 + 0x50);
            fVar49 = *(float *)(iVar10 + 0xa0);
            fVar7 = *(float *)(iVar10 + 0xa4);
            fVar41 = *(float *)(iVar10 + 0xf4);
            fVar12 = *(float *)(iVar10 + 0xf8);
            if (param_4 != uVar9) {
              uVar30 = 0;
              pfVar35 = pfVar40;
              do {
                fVar11 = *pfVar35;
                uVar30 = uVar30 + 1;
                fVar27 = fVar45 * fVar11 + fVar57;
                fVar42 = fVar52 * fVar27 + fVar49;
                fVar57 = fVar58 * fVar27 + fVar62 * fVar11 + (float)uVar66;
                fVar44 = fVar43 * fVar42 + fVar41;
                uVar66 = (ulonglong)(uint)(fVar53 * fVar11 + fVar63 * fVar27);
                fVar49 = fVar46 * fVar42 + fVar60 * fVar27 + fVar7;
                *pfVar35 = fVar44;
                fVar41 = fVar51 * fVar44 + fVar61 * fVar42 + fVar12;
                fVar7 = fVar56 * fVar27 + fVar64 * fVar42;
                fVar12 = fVar65 * fVar42 + fVar50 * fVar44;
                pfVar35 = pfVar35 + 1;
              } while (uVar30 < uVar8);
            }
            *(float *)(iVar10 + 0x4c) = fVar57;
            *(ulonglong *)(iVar10 + 0x50) = uVar66;
            *(float *)(iVar10 + 0xa0) = fVar49;
            *(float *)(iVar10 + 0xa4) = fVar7;
            *(float *)(iVar10 + 0xf4) = fVar41;
            *(float *)(iVar10 + 0xf8) = fVar12;
          }
          else {
            iVar38 = 0;
            uVar30 = 0;
            if (iVar14 != 0) {
              while( true ) {
                FUN_ram_400955dc(iVar10 + iVar38 + 0x2c,pfVar40,pfVar40,uVar8);
                uVar30 = uVar30 + 1;
                iVar38 = iVar38 + 0x54;
                if (*(uint *)(iVar34 + 0x54) <= uVar30) break;
                iVar10 = *(int *)(iVar34 + 0x50);
              }
            }
          }
        }
      }
LAB_ram_30047c0a:
      fVar45 = (float)*(undefined8 *)(param_2 + 0x2c);
      if ((*(char *)(iVar34 + 0x13c) == '\0') || (fVar59 < ABS(fVar45 - *(float *)(iVar34 + 0x140)))
         ) {
        fVar62 = fVar45 * *(float *)(iVar34 + 0x138);
        if (fVar59 < ABS(fVar62 + *(float *)(iVar34 + 0x9c))) {
          *(float *)(iVar34 + 0x9c) = -fVar62;
          FUN_ram_4008566a(iVar34 + 0x90);
        }
        if (fVar59 < ABS(*(float *)(iVar34 + 0xf0) - fVar62)) {
          *(float *)(iVar34 + 0xf0) = fVar62;
          FUN_ram_4008566a(iVar34 + 0xe4);
        }
        *(float *)(iVar34 + 0x140) = fVar45;
        *(undefined1 *)(iVar34 + 0x13c) = 1;
      }
      FUN_ram_400955dc(iVar34 + 0xbc,pfVar40,pfVar40,uVar8);
      FUN_ram_400955dc(iVar34 + 0x110,pfVar40,pfVar40,uVar8);
      fVar45 = *(float *)(param_2 + 0x28);
      uVar47 = *(undefined8 *)(param_2 + 0x24);
      uStack_b0 = SUB41(fVar45,0);
      uStack_af = (undefined1)((uint)fVar45 >> 8);
      uStack_ae = (undefined1)((uint)fVar45 >> 0x10);
      uStack_ad = (undefined1)((uint)fVar45 >> 0x18);
      if ((*(char *)(iVar34 + 0x27c) == '\0') || (fVar59 < ABS(fVar45 - *(float *)(iVar34 + 0x280)))
         ) {
        fVar62 = DAT_ram_4009675c;
        if ((*(int *)(iVar34 + 0x19c) != 0) &&
           (((puVar18 = *(undefined1 **)(iVar34 + 0x1a0), puVar18 != (undefined1 *)0x0 &&
             (*(int *)(iVar34 + 0x1a8) != 0)) && (*(int *)(iVar34 + 0x1a4) != 0)))) {
          iVar10 = *(int *)(iVar34 + 0x268);
          uVar25 = *(uint *)(iVar34 + 0x26c);
          *puVar18 = uStack_b0;
          puVar18[1] = uStack_af;
          puVar18[2] = uStack_ae;
          puVar18[3] = uStack_ad;
          fVar58 = DAT_ram_400a1388._4_4_;
          fVar53 = DAT_ram_40096768;
          uVar30 = *(uint *)(iVar34 + 0x19c);
          pfVar35 = *(float **)(iVar34 + 0x1a0);
          if (uVar30 == 0) {
            if ((iVar10 != 0) && (uVar25 != 0)) {
              uVar26 = 1;
              goto LAB_ram_30048888;
            }
          }
          else {
            uVar26 = 1;
            uVar32 = 0;
            uVar39 = *(uint *)(iVar34 + 0x1a4);
            uVar28 = *(uint *)(iVar34 + 0x1ac);
            pfVar23 = *(float **)(iVar34 + 0x1a8);
            pfVar31 = pfVar35;
            do {
              uVar29 = *(uint *)(*(int *)(iVar34 + 0x198) + uVar32 * 0x1c);
              iVar14 = *(int *)(iVar34 + 0x198) + uVar32 * 0x1c;
              uVar37 = uVar39;
              pfVar19 = pfVar23;
              pfVar35 = pfVar31;
              if (uVar29 == 2) {
                if (uVar26 != 0) {
                  pfVar23 = pfVar31;
                  do {
                    fVar63 = (float)*(undefined8 *)pfVar23;
                    fVar62 = _DAT_ram_300847dc;
                    if ((fVar53 < fVar63) && (fVar62 = _DAT_ram_30084fd8, fVar63 < fVar5)) {
                      fVar62 = (fVar63 + fVar5) * (float)DAT_ram_400a1388;
                      uVar39 = (uint)(-1 < (int)fVar62) * (int)fVar62;
                      fVar62 = (fVar62 - (float)uVar39) *
                               ((float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar39 + 0x201) * 4) -
                               *(float *)(&DAT_ram_30083fdc + (uVar39 + 0x200) * 4)) +
                               *(float *)(&DAT_ram_30083fdc + (uVar39 + 0x200) * 4);
                    }
                    pfVar16 = pfVar23 + 1;
                    *pfVar23 = fVar62;
                    pfVar23 = pfVar16;
                  } while (pfVar16 != pfVar31 + uVar26);
                }
              }
              else if (uVar29 < 3) {
                if (uVar29 == 0) {
                  uVar29 = (uint)*(ushort *)(iVar14 + 8);
                  if (((uVar29 != 0) && (uVar21 = (uint)*(ushort *)(iVar14 + 10), uVar21 != 0)) &&
                     (iVar38 = *(int *)(iVar14 + 0xc), iVar38 != 0)) {
                    fVar62 = DAT_ram_4009675c;
                    if ((uVar28 < uVar29) || (uVar39 < uVar26)) goto LAB_ram_30047cba;
                    if (uVar21 <= uVar26) {
                      uVar26 = uVar21;
                    }
                    uVar37 = uVar28;
                    uVar28 = uVar39;
                    pfVar19 = pfVar31;
                    pfVar35 = pfVar23;
                    if (uVar26 == 0) {
                      uVar21 = *(uint *)(iVar14 + 0x18);
                      uVar39 = 0;
                      do {
                        while (iVar38 = uVar39 * 4, uVar39 < uVar21) {
                          uVar39 = uVar39 + 1;
                          *pfVar23 = (float)*(undefined8 *)(*(int *)(iVar14 + 0x14) + iVar38);
                          pfVar23 = pfVar23 + 1;
                          uVar26 = uVar29;
                          if (uVar29 <= (uVar39 & 0xffff)) goto LAB_ram_300485e0;
                        }
                        uVar39 = uVar39 + 1;
                        *pfVar23 = 0.0;
                        pfVar23 = pfVar23 + 1;
                        uVar26 = uVar29;
                      } while ((uVar39 & 0xffff) < uVar29);
                    }
                    else {
                      uVar39 = *(uint *)(iVar14 + 0x18);
                      if (pfVar31 == (float *)0x0) {
                        uVar21 = 0;
                        do {
                          while (iVar38 = uVar21 * 4, uVar21 < uVar39) {
                            uVar21 = uVar21 + 1;
                            *pfVar23 = (float)*(undefined8 *)(*(int *)(iVar14 + 0x14) + iVar38) +
                                       0.0;
                            pfVar23 = pfVar23 + 1;
                            uVar26 = uVar29;
                            if (uVar29 <= (uVar21 & 0xffff)) goto LAB_ram_300485e0;
                          }
                          uVar21 = uVar21 + 1;
                          *pfVar23 = 0.0;
                          pfVar23 = pfVar23 + 1;
                          uVar26 = uVar29;
                        } while ((uVar21 & 0xffff) < uVar29);
                      }
                      else {
                        iVar24 = 0;
                        uVar30 = 0;
                        do {
                          while( true ) {
                            fVar62 = 0.0;
                            if (uVar30 < uVar39) {
                              fVar62 = *(float *)(*(int *)(iVar14 + 0x14) + uVar30 * 4);
                            }
                            if (iVar38 + iVar24 == 0) break;
                            uStack_ac = 0;
                            uStack_ab = 0;
                            uStack_aa = 0;
                            uStack_a9 = 0;
                            FUN_ram_4009557c(iVar38 + iVar24,pfVar31,uVar26,&uStack_ac);
                            uVar30 = uVar30 + 1;
                            *pfVar23 = (float)CONCAT13(uStack_a9,
                                                       CONCAT12(uStack_aa,
                                                                CONCAT11(uStack_ab,uStack_ac))) +
                                       fVar62;
                            iVar24 = iVar24 + uVar21 * 4;
                            if (uVar29 <= (uVar30 & 0xffff)) goto LAB_ram_30049704;
                            iVar38 = *(int *)(iVar14 + 0xc);
                            uVar39 = *(uint *)(iVar14 + 0x18);
                            pfVar23 = pfVar23 + 1;
                          }
                          uVar30 = uVar30 + 1;
                          iVar24 = iVar24 + uVar21 * 4;
                          *pfVar23 = fVar62 + 0.0;
                          pfVar23 = pfVar23 + 1;
                        } while ((uVar30 & 0xffff) < uVar29);
LAB_ram_30049704:
                        uVar30 = *(uint *)(iVar34 + 0x19c);
                        uVar26 = uVar29;
                      }
                    }
                  }
                }
                else {
                  fVar62 = *(float *)(iVar14 + 4);
                  if (uVar26 != 0) {
                    pfVar23 = pfVar31;
                    do {
                      while ((float)*(undefined8 *)pfVar23 < 0.0) {
                        pfVar16 = pfVar23 + 1;
                        *pfVar23 = fVar62 * (float)*(undefined8 *)pfVar23;
                        pfVar23 = pfVar16;
                        if (pfVar31 + uVar26 == pfVar16) goto LAB_ram_300485e0;
                      }
                      pfVar23 = pfVar23 + 1;
                    } while (pfVar23 != pfVar31 + uVar26);
                  }
                }
              }
              else if ((uVar29 == 3) && (pfVar23 = pfVar31, uVar26 != 0)) {
                do {
                  fVar63 = (float)*(undefined8 *)pfVar23;
                  fVar62 = _DAT_ram_30083fd8;
                  if ((fVar67 < fVar63) && (fVar62 = _DAT_ram_300847d4, fVar63 < fVar6)) {
                    fVar62 = (fVar63 + fVar6) * fVar58;
                    uVar39 = (uint)(-1 < (int)fVar62) * (int)fVar62;
                    iVar14 = uVar39 * 4;
                    fVar62 = (fVar62 - (float)uVar39) *
                             (*(float *)(&DAT_ram_30083fdc + iVar14) -
                             *(float *)(&DAT_ram_30083fd8 + iVar14)) +
                             *(float *)(&DAT_ram_30083fd8 + iVar14);
                  }
                  pfVar16 = pfVar23 + 1;
                  *pfVar23 = fVar62;
                  pfVar23 = pfVar16;
                } while (pfVar16 != pfVar31 + uVar26);
              }
LAB_ram_300485e0:
              uVar32 = uVar32 + 1;
              uVar39 = uVar37;
              pfVar23 = pfVar19;
              pfVar31 = pfVar35;
            } while (uVar32 < uVar30);
            if ((iVar10 != 0) && (uVar25 != 0)) {
LAB_ram_30048888:
              if (uVar25 < uVar26) {
                uVar26 = uVar25;
              }
              FUN_ram_4000303c(iVar10,pfVar35,uVar26 << 2);
            }
            fVar62 = DAT_ram_4009675c;
            if (uVar26 == 0) goto LAB_ram_30047cba;
          }
          fVar62 = DAT_ram_4009675c;
          if (*(undefined8 **)(iVar34 + 0x268) != (undefined8 *)0x0) {
            fVar62 = (float)**(undefined8 **)(iVar34 + 0x268);
          }
        }
LAB_ram_30047cba:
        fVar62 = (*(float *)(iVar34 + 0x274) - *(float *)(iVar34 + 0x270)) * fVar62 +
                 *(float *)(iVar34 + 0x270);
        if (fVar59 < ABS(*(float *)(iVar34 + 0x150) - fVar62)) {
          *(float *)(iVar34 + 0x150) = fVar62;
          FUN_ram_4008566a(iVar34 + 0x144);
        }
        *(float *)(iVar34 + 0x280) = fVar45;
        *(undefined1 *)(iVar34 + 0x27c) = 1;
      }
      fVar64 = DAT_ram_400a1388._4_4_;
      fVar46 = DAT_ram_40099f7c;
      fVar56 = _DAT_ram_30083fd8;
      fVar59 = *(float *)(iVar34 + 400);
      fVar45 = *(float *)(iVar34 + 0x194);
      fVar62 = *(float *)(iVar34 + 0x17c);
      fVar53 = *(float *)(iVar34 + 0x180);
      fVar58 = *(float *)(iVar34 + 0x188);
      fVar63 = *(float *)(iVar34 + 0x184);
      fVar52 = *(float *)(iVar34 + 0x18c);
      fVar60 = *(float *)(iVar34 + 0x278);
      uVar66 = (ulonglong)(uint)_DAT_ram_300847d4;
      pfVar31 = (float *)(iVar34 + 0x284);
      uVar30 = 0;
      pfVar35 = pfVar40;
      pfVar23 = pfVar31;
      do {
        uVar30 = uVar30 + 1;
        fVar61 = (float)uVar47 * (float)*(undefined8 *)pfVar35;
        pfVar35 = pfVar35 + 1;
        fVar43 = fVar61 * fVar62 + fVar59;
        fVar65 = fVar43 * fVar60;
        fVar59 = fVar43 * fVar58 + fVar61 * fVar53 + fVar45;
        fVar45 = fVar61 * fVar63 + fVar43 * fVar52;
        uVar54 = (ulonglong)(uint)fVar56;
        if ((fVar67 < fVar65) && (uVar54 = uVar66, fVar65 < fVar46)) {
          fVar43 = (fVar65 + fVar46) * fVar64;
          uVar25 = (uint)(-1 < (int)fVar43) * (int)fVar43;
          iVar10 = uVar25 * 4;
          uVar54 = (ulonglong)
                   (uint)((fVar43 - (float)uVar25) *
                          (*(float *)(&DAT_ram_30083fdc + iVar10) -
                          *(float *)(&DAT_ram_30083fd8 + iVar10)) +
                         *(float *)(&DAT_ram_30083fd8 + iVar10));
        }
        *(ulonglong *)pfVar23 = uVar54;
        pfVar23[0x80] = -(float)uVar54;
        pfVar23 = pfVar23 + 1;
      } while (uVar30 < uVar8);
      *(float *)(iVar34 + 400) = fVar59;
      *(float *)(iVar34 + 0x194) = fVar45;
      FUN_ram_30047928(iVar34 + 0x1b0,pfVar31,uVar8);
      iVar10 = *(int *)(iVar34 + 0x1ec);
      if (iVar10 == 0) {
        FUN_ram_30046fc6(DAT_ram_4009672c,DAT_ram_4009672c,0,iVar34 + 0x1c0,pfVar31,uVar8,0);
      }
      else {
        fVar59 = *(float *)(iVar34 + 0x1f0);
        fVar45 = *(float *)(iVar34 + 500);
        fVar62 = *(float *)(iVar34 + 0x1f8);
        fVar53 = *(float *)(iVar34 + 0x1fc);
        fVar58 = *(float *)(iVar34 + 0x200);
        fVar63 = *(float *)(iVar34 + 0x204);
        fVar52 = *(float *)(iVar34 + 0x208);
        if (param_4 != uVar9) {
          uVar30 = 0;
          pfVar35 = pfVar31;
          do {
            uVar30 = uVar30 + 1;
            fVar56 = (float)*(undefined8 *)pfVar35;
            fVar60 = fVar59 * (fVar53 * fVar52 + fVar56) + fVar45;
            fVar52 = fVar58 * (ABS(fVar56) - fVar52) + fVar52;
            if (fVar60 <= 0.0) {
              fVar60 = 0.0;
            }
            if (fVar62 <= fVar60) {
              fVar60 = fVar62;
            }
            uVar25 = (uint)(-1 < (int)fVar60) * (int)fVar60;
            puVar15 = (undefined8 *)(uVar25 * 0x10 + iVar10);
            fVar60 = fVar60 - (float)uVar25;
            *pfVar35 = (((float)*(undefined8 *)((int)puVar15 + 0xc) * fVar60 +
                        *(float *)(puVar15 + 1)) * fVar60 + (float)*(undefined8 *)((int)puVar15 + 4)
                       ) * fVar60 + fVar63 * fVar56 + (float)*puVar15;
            pfVar35 = pfVar35 + 1;
          } while (uVar30 < uVar8);
        }
        *(float *)(iVar34 + 0x208) = fVar52;
      }
      iVar10 = *(int *)(iVar34 + 0x1b8);
      if (iVar10 != 0) {
        iVar14 = *(int *)(iVar34 + 0x1bc);
        if (iVar14 == 2) {
          fVar59 = *(float *)(iVar10 + 0x38);
          fVar45 = *(float *)(iVar10 + 0x3c);
          fVar62 = *(float *)(iVar10 + 0x40);
          fVar53 = *(float *)(iVar10 + 0x44);
          fVar58 = *(float *)(iVar10 + 0x48);
          fVar63 = *(float *)(iVar10 + 0x8c);
          fVar52 = *(float *)(iVar10 + 0x90);
          fVar60 = *(float *)(iVar10 + 0x94);
          fVar56 = *(float *)(iVar10 + 0x98);
          fVar46 = *(float *)(iVar10 + 0x9c);
          uVar66 = *(ulonglong *)(iVar10 + 0x4c);
          uVar54 = *(ulonglong *)(iVar10 + 0x50);
          fVar64 = *(float *)(iVar10 + 0xa0);
          fVar43 = *(float *)(iVar10 + 0xa4);
          if (param_4 != uVar9) {
            uVar30 = 0;
            pfVar35 = pfVar31;
            do {
              fVar61 = *pfVar35;
              uVar30 = uVar30 + 1;
              fVar65 = fVar59 * fVar61 + (float)uVar66;
              fVar51 = fVar63 * fVar65 + fVar64;
              uVar66 = (ulonglong)(uint)(fVar53 * fVar65 + fVar45 * fVar61 + (float)uVar54);
              *pfVar35 = fVar51;
              uVar54 = (ulonglong)(uint)(fVar62 * fVar61 + fVar58 * fVar65);
              fVar64 = fVar56 * fVar51 + fVar52 * fVar65 + fVar43;
              fVar43 = fVar60 * fVar65 + fVar46 * fVar51;
              pfVar35 = pfVar35 + 1;
            } while (uVar30 < uVar8);
          }
          *(ulonglong *)(iVar10 + 0x4c) = uVar66;
          *(ulonglong *)(iVar10 + 0x50) = uVar54;
          *(float *)(iVar10 + 0xa0) = fVar64;
          *(float *)(iVar10 + 0xa4) = fVar43;
        }
        else if (iVar14 == 3) {
          fVar59 = *(float *)(iVar10 + 0x38);
          fVar45 = *(float *)(iVar10 + 0x3c);
          fVar62 = *(float *)(iVar10 + 0x40);
          fVar53 = *(float *)(iVar10 + 0x44);
          fVar58 = *(float *)(iVar10 + 0x48);
          fVar63 = *(float *)(iVar10 + 0x8c);
          fVar52 = *(float *)(iVar10 + 0x90);
          fVar60 = *(float *)(iVar10 + 0x94);
          fVar56 = *(float *)(iVar10 + 0x98);
          fVar46 = *(float *)(iVar10 + 0x9c);
          fVar64 = *(float *)(iVar10 + 0xe0);
          fVar43 = *(float *)(iVar10 + 0xe4);
          fVar61 = *(float *)(iVar10 + 0xe8);
          fVar65 = *(float *)(iVar10 + 0xec);
          fVar51 = *(float *)(iVar10 + 0xf0);
          fVar50 = *(float *)(iVar10 + 0x4c);
          uVar66 = *(ulonglong *)(iVar10 + 0x50);
          fVar57 = *(float *)(iVar10 + 0xa0);
          fVar49 = *(float *)(iVar10 + 0xa4);
          fVar7 = *(float *)(iVar10 + 0xf4);
          fVar41 = *(float *)(iVar10 + 0xf8);
          if (param_4 != uVar9) {
            uVar30 = 0;
            pfVar35 = pfVar31;
            do {
              fVar12 = *pfVar35;
              uVar30 = uVar30 + 1;
              fVar11 = fVar59 * fVar12 + fVar50;
              fVar27 = fVar63 * fVar11 + fVar57;
              fVar50 = fVar53 * fVar11 + fVar45 * fVar12 + (float)uVar66;
              fVar42 = fVar64 * fVar27 + fVar7;
              uVar66 = (ulonglong)(uint)(fVar62 * fVar12 + fVar58 * fVar11);
              fVar57 = fVar56 * fVar27 + fVar52 * fVar11 + fVar49;
              *pfVar35 = fVar42;
              fVar7 = fVar65 * fVar42 + fVar43 * fVar27 + fVar41;
              fVar49 = fVar60 * fVar11 + fVar46 * fVar27;
              fVar41 = fVar61 * fVar27 + fVar51 * fVar42;
              pfVar35 = pfVar35 + 1;
            } while (uVar30 < uVar8);
          }
          *(float *)(iVar10 + 0x4c) = fVar50;
          *(ulonglong *)(iVar10 + 0x50) = uVar66;
          *(float *)(iVar10 + 0xa0) = fVar57;
          *(float *)(iVar10 + 0xa4) = fVar49;
          *(float *)(iVar10 + 0xf4) = fVar7;
          *(float *)(iVar10 + 0xf8) = fVar41;
        }
        else {
          iVar38 = 0;
          uVar30 = 0;
          if (iVar14 != 0) {
            while( true ) {
              FUN_ram_400955dc(iVar10 + iVar38 + 0x2c,pfVar31,pfVar31,uVar8);
              uVar30 = uVar30 + 1;
              iVar38 = iVar38 + 0x54;
              if (*(uint *)(iVar34 + 0x1bc) <= uVar30) break;
              iVar10 = *(int *)(iVar34 + 0x1b8);
            }
          }
        }
      }
      iVar10 = *(int *)(iVar34 + 0x20c);
      pfVar35 = (float *)(iVar34 + 0x484);
      if (iVar10 != 0) {
        iVar14 = *(int *)(iVar34 + 0x210);
        if (iVar14 == 2) {
          fVar59 = *(float *)(iVar10 + 0x38);
          fVar45 = *(float *)(iVar10 + 0x3c);
          fVar62 = *(float *)(iVar10 + 0x40);
          fVar53 = *(float *)(iVar10 + 0x44);
          fVar58 = *(float *)(iVar10 + 0x48);
          fVar63 = *(float *)(iVar10 + 0x8c);
          fVar52 = *(float *)(iVar10 + 0x90);
          fVar60 = *(float *)(iVar10 + 0x94);
          fVar56 = *(float *)(iVar10 + 0x98);
          fVar46 = *(float *)(iVar10 + 0x9c);
          uVar66 = *(ulonglong *)(iVar10 + 0x4c);
          uVar54 = *(ulonglong *)(iVar10 + 0x50);
          fVar64 = *(float *)(iVar10 + 0xa0);
          fVar43 = *(float *)(iVar10 + 0xa4);
          if (param_4 != uVar9) {
            uVar30 = 0;
            pfVar23 = pfVar35;
            do {
              uVar30 = uVar30 + 1;
              fVar51 = (float)*(undefined8 *)pfVar23;
              fVar61 = fVar59 * fVar51 + (float)uVar66;
              fVar65 = fVar63 * fVar61 + fVar64;
              uVar66 = (ulonglong)(uint)(fVar53 * fVar61 + fVar45 * fVar51 + (float)uVar54);
              *pfVar23 = fVar65;
              uVar54 = (ulonglong)(uint)(fVar62 * fVar51 + fVar58 * fVar61);
              fVar64 = fVar56 * fVar65 + fVar52 * fVar61 + fVar43;
              fVar43 = fVar60 * fVar61 + fVar46 * fVar65;
              pfVar23 = pfVar23 + 1;
            } while (uVar30 < uVar8);
          }
          *(ulonglong *)(iVar10 + 0x4c) = uVar66;
          *(ulonglong *)(iVar10 + 0x50) = uVar54;
          *(float *)(iVar10 + 0xa0) = fVar64;
          *(float *)(iVar10 + 0xa4) = fVar43;
        }
        else if (iVar14 == 3) {
          fVar59 = *(float *)(iVar10 + 0x38);
          fVar45 = *(float *)(iVar10 + 0x3c);
          fVar62 = *(float *)(iVar10 + 0x40);
          fVar53 = *(float *)(iVar10 + 0x44);
          fVar58 = *(float *)(iVar10 + 0x48);
          fVar63 = *(float *)(iVar10 + 0x8c);
          fVar52 = *(float *)(iVar10 + 0x90);
          fVar60 = *(float *)(iVar10 + 0x94);
          fVar56 = *(float *)(iVar10 + 0x98);
          fVar46 = *(float *)(iVar10 + 0x9c);
          fVar64 = *(float *)(iVar10 + 0xe0);
          fVar43 = *(float *)(iVar10 + 0xe4);
          fVar61 = *(float *)(iVar10 + 0xe8);
          fVar65 = *(float *)(iVar10 + 0xec);
          fVar51 = *(float *)(iVar10 + 0xf0);
          fVar50 = *(float *)(iVar10 + 0x4c);
          uVar66 = *(ulonglong *)(iVar10 + 0x50);
          fVar57 = *(float *)(iVar10 + 0xa0);
          fVar49 = *(float *)(iVar10 + 0xa4);
          fVar7 = *(float *)(iVar10 + 0xf4);
          fVar41 = *(float *)(iVar10 + 0xf8);
          if (param_4 != uVar9) {
            uVar30 = 0;
            pfVar23 = pfVar35;
            do {
              fVar12 = *pfVar23;
              uVar30 = uVar30 + 1;
              fVar11 = fVar59 * fVar12 + fVar50;
              fVar27 = fVar63 * fVar11 + fVar57;
              fVar50 = fVar53 * fVar11 + fVar45 * fVar12 + (float)uVar66;
              fVar42 = fVar64 * fVar27 + fVar7;
              uVar66 = (ulonglong)(uint)(fVar62 * fVar12 + fVar58 * fVar11);
              fVar57 = fVar56 * fVar27 + fVar52 * fVar11 + fVar49;
              *pfVar23 = fVar42;
              fVar7 = fVar65 * fVar42 + fVar43 * fVar27 + fVar41;
              fVar49 = fVar60 * fVar11 + fVar46 * fVar27;
              fVar41 = fVar61 * fVar27 + fVar51 * fVar42;
              pfVar23 = pfVar23 + 1;
            } while (uVar30 < uVar8);
          }
          *(float *)(iVar10 + 0x4c) = fVar50;
          *(ulonglong *)(iVar10 + 0x50) = uVar66;
          *(float *)(iVar10 + 0xa0) = fVar57;
          *(float *)(iVar10 + 0xa4) = fVar49;
          *(float *)(iVar10 + 0xf4) = fVar7;
          *(float *)(iVar10 + 0xf8) = fVar41;
        }
        else {
          iVar38 = 0;
          uVar30 = 0;
          if (iVar14 != 0) {
            while( true ) {
              FUN_ram_400955dc(iVar10 + iVar38 + 0x2c,pfVar35,pfVar35,uVar8);
              uVar30 = uVar30 + 1;
              iVar38 = iVar38 + 0x54;
              if (*(uint *)(iVar34 + 0x210) <= uVar30) break;
              iVar10 = *(int *)(iVar34 + 0x20c);
            }
          }
        }
      }
      iVar10 = *(int *)(iVar34 + 0x248);
      if (iVar10 == 0) {
        FUN_ram_30046fc6(DAT_ram_4009672c,DAT_ram_4009672c,0,iVar34 + 0x21c,pfVar35,uVar8,0);
      }
      else {
        fVar59 = *(float *)(iVar34 + 0x24c);
        fVar45 = *(float *)(iVar34 + 0x250);
        fVar62 = *(float *)(iVar34 + 0x254);
        fVar53 = *(float *)(iVar34 + 600);
        fVar58 = *(float *)(iVar34 + 0x25c);
        fVar63 = *(float *)(iVar34 + 0x260);
        fVar52 = *(float *)(iVar34 + 0x264);
        uVar30 = 0;
        pfVar23 = pfVar35;
        if (param_4 != uVar9) {
          do {
            uVar30 = uVar30 + 1;
            fVar56 = (float)*(undefined8 *)pfVar23;
            fVar60 = fVar59 * (fVar53 * fVar52 + fVar56) + fVar45;
            fVar52 = fVar58 * (ABS(fVar56) - fVar52) + fVar52;
            if (fVar60 <= 0.0) {
              fVar60 = 0.0;
            }
            if (fVar62 <= fVar60) {
              fVar60 = fVar62;
            }
            uVar25 = (uint)(-1 < (int)fVar60) * (int)fVar60;
            puVar15 = (undefined8 *)(uVar25 * 0x10 + iVar10);
            fVar60 = fVar60 - (float)uVar25;
            *pfVar23 = (((float)*(undefined8 *)((int)puVar15 + 0xc) * fVar60 +
                        *(float *)(puVar15 + 1)) * fVar60 + (float)*(undefined8 *)((int)puVar15 + 4)
                       ) * fVar60 + fVar63 * fVar56 + (float)*puVar15;
            pfVar23 = pfVar23 + 1;
          } while (uVar30 < uVar8);
        }
        *(float *)(iVar34 + 0x264) = fVar52;
      }
      iVar10 = *(int *)(iVar34 + 0x214);
      if (iVar10 != 0) {
        iVar14 = *(int *)(iVar34 + 0x218);
        if (iVar14 == 2) {
          fVar59 = *(float *)(iVar10 + 0x38);
          fVar45 = *(float *)(iVar10 + 0x3c);
          fVar62 = *(float *)(iVar10 + 0x40);
          fVar53 = *(float *)(iVar10 + 0x44);
          fVar58 = *(float *)(iVar10 + 0x48);
          fVar63 = *(float *)(iVar10 + 0x8c);
          fVar52 = *(float *)(iVar10 + 0x90);
          fVar60 = *(float *)(iVar10 + 0x94);
          fVar56 = *(float *)(iVar10 + 0x98);
          fVar46 = *(float *)(iVar10 + 0x9c);
          uVar66 = *(ulonglong *)(iVar10 + 0x4c);
          uVar54 = *(ulonglong *)(iVar10 + 0x50);
          fVar64 = *(float *)(iVar10 + 0xa0);
          fVar43 = *(float *)(iVar10 + 0xa4);
          if (param_4 != uVar9) {
            uVar30 = 0;
            pfVar23 = pfVar35;
            do {
              uVar30 = uVar30 + 1;
              fVar51 = (float)*(undefined8 *)pfVar23;
              fVar61 = fVar59 * fVar51 + (float)uVar66;
              fVar65 = fVar63 * fVar61 + fVar64;
              uVar66 = (ulonglong)(uint)(fVar53 * fVar61 + fVar45 * fVar51 + (float)uVar54);
              *pfVar23 = fVar65;
              uVar54 = (ulonglong)(uint)(fVar62 * fVar51 + fVar58 * fVar61);
              fVar64 = fVar56 * fVar65 + fVar52 * fVar61 + fVar43;
              fVar43 = fVar60 * fVar61 + fVar46 * fVar65;
              pfVar23 = pfVar23 + 1;
            } while (uVar30 < uVar8);
          }
          *(ulonglong *)(iVar10 + 0x4c) = uVar66;
          *(ulonglong *)(iVar10 + 0x50) = uVar54;
          *(float *)(iVar10 + 0xa0) = fVar64;
          *(float *)(iVar10 + 0xa4) = fVar43;
        }
        else if (iVar14 == 3) {
          fVar59 = *(float *)(iVar10 + 0x38);
          fVar45 = *(float *)(iVar10 + 0x3c);
          fVar62 = *(float *)(iVar10 + 0x40);
          fVar53 = *(float *)(iVar10 + 0x44);
          fVar58 = *(float *)(iVar10 + 0x48);
          fVar63 = *(float *)(iVar10 + 0x8c);
          fVar52 = *(float *)(iVar10 + 0x90);
          fVar60 = *(float *)(iVar10 + 0x94);
          fVar56 = *(float *)(iVar10 + 0x98);
          fVar46 = *(float *)(iVar10 + 0x9c);
          fVar64 = *(float *)(iVar10 + 0xe0);
          fVar43 = *(float *)(iVar10 + 0xe4);
          fVar61 = *(float *)(iVar10 + 0xe8);
          fVar65 = *(float *)(iVar10 + 0xec);
          fVar51 = *(float *)(iVar10 + 0xf0);
          fVar50 = *(float *)(iVar10 + 0x4c);
          uVar66 = *(ulonglong *)(iVar10 + 0x50);
          fVar57 = *(float *)(iVar10 + 0xa0);
          fVar49 = *(float *)(iVar10 + 0xa4);
          fVar7 = *(float *)(iVar10 + 0xf4);
          fVar41 = *(float *)(iVar10 + 0xf8);
          if (param_4 != uVar9) {
            uVar30 = 0;
            pfVar23 = pfVar35;
            do {
              fVar12 = *pfVar23;
              uVar30 = uVar30 + 1;
              fVar11 = fVar59 * fVar12 + fVar50;
              fVar27 = fVar63 * fVar11 + fVar57;
              fVar50 = fVar53 * fVar11 + fVar45 * fVar12 + (float)uVar66;
              fVar42 = fVar64 * fVar27 + fVar7;
              uVar66 = (ulonglong)(uint)(fVar62 * fVar12 + fVar58 * fVar11);
              fVar57 = fVar56 * fVar27 + fVar52 * fVar11 + fVar49;
              *pfVar23 = fVar42;
              fVar7 = fVar65 * fVar42 + fVar43 * fVar27 + fVar41;
              fVar49 = fVar60 * fVar11 + fVar46 * fVar27;
              fVar41 = fVar61 * fVar27 + fVar51 * fVar42;
              pfVar23 = pfVar23 + 1;
            } while (uVar30 < uVar8);
          }
          *(float *)(iVar10 + 0x4c) = fVar50;
          *(ulonglong *)(iVar10 + 0x50) = uVar66;
          *(float *)(iVar10 + 0xa0) = fVar57;
          *(float *)(iVar10 + 0xa4) = fVar49;
          *(float *)(iVar10 + 0xf4) = fVar7;
          *(float *)(iVar10 + 0xf8) = fVar41;
        }
        else {
          iVar38 = 0;
          uVar30 = 0;
          if (iVar14 != 0) {
            while( true ) {
              FUN_ram_400955dc(iVar10 + iVar38 + 0x2c,pfVar35,pfVar35,uVar8);
              uVar30 = uVar30 + 1;
              iVar38 = iVar38 + 0x54;
              if (*(uint *)(iVar34 + 0x218) <= uVar30) break;
              iVar10 = *(int *)(iVar34 + 0x214);
            }
          }
        }
      }
      FUN_ram_400954f8(pfVar31,pfVar35,pfVar40,uVar8);
      fVar53 = DAT_ram_400a1388._4_4_;
      fVar62 = DAT_ram_40099f7c;
      fVar45 = DAT_ram_40096768;
      fVar59 = DAT_ram_40096764;
      iVar10 = *(int *)(iVar34 + 0x6b0);
      if (iVar10 == 0) {
        if (*(short *)(iVar34 + 0x686) == 1) {
          pfVar35 = *(float **)(iVar34 + 0x6a4);
          fVar58 = 0.0;
          if (pfVar35 != (float *)0x0) {
            fVar58 = *pfVar35;
          }
          pfVar23 = *(float **)(iVar34 + 0x688);
          if ((pfVar23 == (float *)0x0) || (uVar30 = *(uint *)(iVar34 + 0x698), uVar30 == 0)) {
            fVar52 = 0.0;
            fVar63 = 0.0;
            fVar60 = fVar52;
          }
          else {
            fVar63 = *pfVar23;
            if (uVar30 == 1) {
              fVar52 = 0.0;
            }
            else {
              fVar52 = pfVar23[1];
            }
            fVar60 = 0.0;
            if (2 < uVar30) {
              fVar60 = pfVar23[2];
            }
          }
          pfVar23 = *(float **)(iVar34 + 0x68c);
          if ((pfVar23 == (float *)0x0) || (uVar30 = *(uint *)(iVar34 + 0x69c), uVar30 == 0)) {
            fVar46 = 0.0;
            fVar56 = 0.0;
            fVar64 = fVar46;
          }
          else {
            fVar56 = *pfVar23;
            if (uVar30 == 1) {
              fVar64 = 0.0;
            }
            else {
              fVar64 = (float)*(undefined8 *)(pfVar23 + 1);
            }
            fVar46 = 0.0;
            if (2 < uVar30) {
              fVar46 = pfVar23[2];
            }
          }
          pfVar31 = *(float **)(iVar34 + 0x690);
          pfVar23 = *(float **)(iVar34 + 0x694);
          fVar43 = in_register_00000100;
          if ((pfVar31 == (float *)0x0) || (uVar30 = *(uint *)(iVar34 + 0x6a0), uVar30 == 0)) {
            fVar65 = 0.0;
            fVar61 = 0.0;
LAB_ram_300495e2:
            if ((pfVar23 == (float *)0x0) || (uVar30 = *(uint *)(iVar34 + 0x6a0), uVar30 == 0)) {
              fVar51 = 0.0;
              fVar57 = 0.0;
              fVar50 = 0.0;
            }
            else {
              fVar50 = *pfVar23;
              fVar51 = 0.0;
              if (uVar30 != 1) goto LAB_ram_300491e6;
              fVar57 = 0.0;
            }
          }
          else {
            fVar61 = *pfVar31;
            if (uVar30 == 1) {
              fVar65 = 0.0;
            }
            else {
              fVar65 = (float)*(undefined8 *)(pfVar31 + 1);
            }
            if (uVar30 < 3) goto LAB_ram_300495e2;
            fVar51 = pfVar31[2];
            if (pfVar23 == (float *)0x0) {
              fVar50 = 0.0;
              fVar57 = fVar50;
            }
            else {
              fVar50 = *pfVar23;
LAB_ram_300491e6:
              fVar57 = pfVar23[1];
              if (uVar30 < 3) {
                fVar43 = 0.0;
              }
              else {
                fVar43 = pfVar23[2];
              }
            }
          }
          fVar49 = *(float *)(iVar34 + 0x71c);
          fVar7 = *(float *)(iVar34 + 0x720);
          fVar41 = *(float *)(iVar34 + 0x770);
          fVar12 = *(float *)(iVar34 + 0x774);
          if (param_4 != uVar9) {
            uVar30 = 0;
            do {
              fVar27 = *pfVar40;
              fVar11 = fVar27 * fVar63 + fVar61 + fVar58 * fVar56 + fVar50;
              fVar42 = _DAT_ram_300847dc;
              if ((fVar45 < fVar11) && (fVar42 = _DAT_ram_30084fd8, fVar11 < fVar59)) {
                fVar11 = (fVar11 + fVar59) * in_register_00000100;
                uVar25 = (uint)(-1 < (int)fVar11) * (int)fVar11;
                fVar42 = (fVar11 - (float)uVar25) *
                         ((float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar25 + 0x201) * 4) -
                         *(float *)(&DAT_ram_30083fdc + (uVar25 + 0x200) * 4)) +
                         *(float *)(&DAT_ram_30083fdc + (uVar25 + 0x200) * 4);
              }
              fVar11 = fVar27 * fVar52 + fVar65 + fVar58 * fVar64 + fVar57;
              fVar44 = _DAT_ram_300847dc;
              if ((fVar45 < fVar11) && (fVar44 = _DAT_ram_30084fd8, fVar11 < fVar59)) {
                fVar11 = (fVar11 + fVar59) * in_register_00000100;
                uVar25 = (uint)(-1 < (int)fVar11) * (int)fVar11;
                fVar44 = (fVar11 - (float)uVar25) *
                         ((float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar25 + 0x201) * 4) -
                         *(float *)(&DAT_ram_30083fdc + (uVar25 + 0x200) * 4)) +
                         *(float *)(&DAT_ram_30083fdc + (uVar25 + 0x200) * 4);
              }
              fVar11 = (fVar46 * fVar58 + fVar43) * fVar42 + fVar27 * fVar60 + fVar51;
              fVar27 = _DAT_ram_30083fd8;
              if ((fVar67 < fVar11) && (fVar27 = _DAT_ram_300847d4, fVar11 < fVar62)) {
                fVar11 = (fVar11 + fVar62) * fVar53;
                uVar25 = (uint)(-1 < (int)fVar11) * (int)fVar11;
                iVar10 = uVar25 * 4;
                fVar27 = (fVar11 - (float)uVar25) *
                         ((float)*(undefined8 *)(&DAT_ram_30083fdc + iVar10) -
                         (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar10)) +
                         (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar10);
              }
              fVar58 = (fVar58 - fVar27) * fVar44 + fVar27;
              fVar11 = fVar58 * *(float *)(iVar34 + 0x708) + fVar49;
              uVar30 = uVar30 + 1;
              fVar27 = fVar11 * *(float *)(iVar34 + 0x75c) + fVar41;
              fVar41 = fVar11 * *(float *)(iVar34 + 0x760) + fVar12;
              fVar49 = fVar11 * *(float *)(iVar34 + 0x714) +
                       fVar58 * *(float *)(iVar34 + 0x70c) + fVar7;
              fVar7 = fVar58 * *(float *)(iVar34 + 0x710) + fVar11 * *(float *)(iVar34 + 0x718);
              fVar12 = fVar11 * *(float *)(iVar34 + 0x764) + fVar27 * *(float *)(iVar34 + 0x76c);
              fVar41 = fVar27 * *(float *)(iVar34 + 0x768) + fVar41;
              *pfVar40 = fVar27 * *(float *)(iVar34 + 0x778) * param_1;
              pfVar40 = pfVar40 + 1;
            } while (uVar30 < uVar8);
          }
          if (pfVar35 != (float *)0x0) {
            *pfVar35 = fVar58;
          }
          *(float *)(iVar34 + 0x71c) = fVar49;
          *(float *)(iVar34 + 0x720) = fVar7;
          *(float *)(iVar34 + 0x770) = fVar41;
          *(float *)(iVar34 + 0x774) = fVar12;
        }
        else {
          nc_model_recurrent_stage_process(iVar34 + 0x684,pfVar40,uVar8);
          FUN_ram_400955dc(iVar34 + 0x6fc,pfVar40,pfVar40,uVar8);
          FUN_ram_400955dc(iVar34 + 0x750,pfVar40,pfVar40,uVar8);
          if (param_4 != uVar9) {
            uVar30 = 0;
            do {
              uVar30 = uVar30 + 1;
              *pfVar40 = *pfVar40 * *(float *)(iVar34 + 0x778) * param_1;
              pfVar40 = pfVar40 + 1;
            } while (uVar30 < uVar8);
          }
        }
      }
      else {
        fVar59 = *(float *)(iVar34 + 0x778);
        fVar67 = *(float *)(iVar34 + 0x6b4);
        fVar45 = *(float *)(iVar34 + 0x6b8);
        fVar62 = *(float *)(iVar34 + 0x6bc);
        fVar53 = *(float *)(iVar34 + 0x6c0);
        fVar58 = *(float *)(iVar34 + 0x6c4);
        fVar63 = *(float *)(iVar34 + 0x6c8);
        fVar52 = *(float *)(iVar34 + 0x6cc);
        fVar60 = *(float *)(iVar34 + 0x71c);
        fVar56 = *(float *)(iVar34 + 0x720);
        fVar46 = *(float *)(iVar34 + 0x770);
        fVar64 = *(float *)(iVar34 + 0x774);
        if (param_4 != uVar9) {
          uVar30 = 0;
          do {
            fVar43 = *pfVar40;
            uVar30 = uVar30 + 1;
            fVar61 = fVar67 * (fVar53 * fVar52 + fVar43) + fVar45;
            fVar52 = fVar58 * (ABS(fVar43) - fVar52) + fVar52;
            if (fVar61 <= 0.0) {
              fVar61 = 0.0;
            }
            if (fVar62 <= fVar61) {
              fVar61 = fVar62;
            }
            uVar25 = (uint)(-1 < (int)fVar61) * (int)fVar61;
            pfVar35 = (float *)(uVar25 * 0x10 + iVar10);
            fVar61 = fVar61 - (float)uVar25;
            fVar65 = *(float *)(iVar34 + 0x76c);
            fVar61 = (((float)*(undefined8 *)(pfVar35 + 3) * fVar61 + pfVar35[2]) * fVar61 +
                     pfVar35[1]) * fVar61 + fVar63 * fVar43 + *pfVar35;
            fVar43 = *(float *)(iVar34 + 0x764);
            fVar51 = *(float *)(iVar34 + 0x708) * fVar61 + fVar60;
            fVar50 = fVar51 * *(float *)(iVar34 + 0x75c) + fVar46;
            fVar60 = *(float *)(iVar34 + 0x714) * fVar51 +
                     *(float *)(iVar34 + 0x70c) * fVar61 + fVar56;
            fVar56 = fVar61 * *(float *)(iVar34 + 0x710) + fVar51 * *(float *)(iVar34 + 0x718);
            fVar46 = fVar50 * *(float *)(iVar34 + 0x768) +
                     *(float *)(iVar34 + 0x760) * fVar51 + fVar64;
            *pfVar40 = param_1 * fVar59 * fVar50;
            fVar64 = fVar51 * fVar43 + fVar50 * fVar65;
            pfVar40 = pfVar40 + 1;
          } while (uVar30 < uVar8);
        }
        *(float *)(iVar34 + 0x6cc) = fVar52;
        *(float *)(iVar34 + 0x71c) = fVar60;
        *(float *)(iVar34 + 0x720) = fVar56;
        *(float *)(iVar34 + 0x770) = fVar46;
        *(float *)(iVar34 + 0x774) = fVar64;
      }
    }
    uVar9 = uVar9 + uVar8;
    if (param_4 <= uVar9) {
      return;
    }
    iVar34 = *(int *)(param_2 + 0x10);
  } while( true );
}

