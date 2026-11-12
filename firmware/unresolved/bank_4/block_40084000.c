/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40084000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40084996.
 * REA evidence: ev_f08a4bd241086c8a1b0c439c774bca3d769264f3b876e452d9ce5b8b90cb25c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40084996(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = param_2[1];
    uVar7 = param_2[2];
    uVar6 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    iVar5 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    *(undefined4 *)(param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    if (iVar5 != 0) {
      *(undefined1 *)(iVar5 + 0x44) = 0;
      *(undefined1 *)(iVar5 + 0x80) = 0;
      *(undefined1 *)(iVar5 + 0x23c) = 0;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400849d8.
 * REA evidence: ev_6fba85cff2e133450674775d2fe1bef3c88f639ea3e47271d781bad6429dd9de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400849d8(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x24;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400849e6.
 * REA evidence: ev_da706343ebf911c5656dc325c729eb1cb70ef06f1800a3f043839beadbeb1202
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400849e6(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (bVar1 = false, *(int *)(param_1 + 4) != 0)) {
    bVar1 = *(char *)(param_1 + 0x44) != '\0';
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x400849fc.
 * REA evidence: ev_532c7c902444f5ac19ca41fecf0edd50a47c5fc94449321bd25300ee741c8890
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400849fc(int param_1,int param_2,uint param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_00000100;
  float fVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  float fVar15;
  undefined4 *puVar16;
  int iVar17;
  ulonglong *puVar18;
  undefined1 *puVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  float *pfVar23;
  uint uVar24;
  int extraout_a3;
  undefined8 *puVar25;
  int extraout_a3_00;
  int extraout_a3_01;
  int iVar26;
  uint uVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  int *piVar33;
  uint uVar34;
  float *pfVar35;
  uint uVar36;
  float *pfVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
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
  ulonglong uVar62;
  float fVar63;
  float fVar64;
  ulonglong uVar65;
  undefined8 uVar66;
  ulonglong uVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  uint uStack_e0;
  float fStack_dc;
  float *pfStack_d4;
  float *pfStack_d0;
  float fStack_c8;
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
  
  fVar8 = DAT_ram_400930e8;
  fVar7 = DAT_ram_4009284c;
  if (param_1 == 0) {
    return;
  }
  iVar38 = *(int *)(param_1 + 4);
  if ((((iVar38 == 0) || (*(char *)(param_1 + 0x44) == '\0')) || (param_2 == 0)) || (param_3 == 0))
  {
    return;
  }
  uVar11 = 0;
  do {
    fVar1 = DAT_ram_40092838;
    uVar43 = param_3 - uVar11;
    if (0x80 < uVar43) {
      uVar43 = 0x80;
    }
    if (iVar38 != 0) {
      uVar47 = *(undefined8 *)(param_1 + 8);
      fVar28 = (float)uVar47;
      uStack_b0 = (undefined1)uVar47;
      uStack_af = (undefined1)((ulonglong)uVar47 >> 8);
      uStack_ae = (undefined1)((ulonglong)uVar47 >> 0x10);
      uStack_ad = (undefined1)((ulonglong)uVar47 >> 0x18);
      pfVar10 = (float *)(param_2 + uVar11 * 4);
      fVar46 = DAT_ram_400989d4;
      if (*(int *)(iVar38 + 4) != 0) {
        uVar34 = *(uint *)(iVar38 + 8);
        uVar27 = uVar34;
        if ((*(char *)(iVar38 + 0x44) == '\0') ||
           (DAT_ram_40092838 < ABS(fVar28 - *(float *)(iVar38 + 0x4c)))) {
          uVar29 = *(uint *)(iVar38 + 0x28);
          uVar42 = uVar34 << 1;
          if (uVar29 < uVar42) goto LAB_ram_40084b04;
          if (*(int *)(iVar38 + 0x10) == 0) {
LAB_ram_4008601c:
            uVar31 = 0;
          }
          else {
            puVar19 = *(undefined1 **)(iVar38 + 0x14);
            if ((puVar19 == (undefined1 *)0x0) || (*(int *)(iVar38 + 0x1c) == 0)) {
              uVar31 = 0;
            }
            else {
              if (*(int *)(iVar38 + 0x18) == 0) goto LAB_ram_4008601c;
              iVar12 = *(int *)(iVar38 + 0x24);
              puVar19[1] = uStack_af;
              *puVar19 = uStack_b0;
              puVar19[2] = uStack_ae;
              puVar19[3] = uStack_ad;
              fVar48 = DAT_ram_4009935c;
              fVar50 = DAT_ram_40099358;
              fVar46 = DAT_ram_400989d4;
              fVar51 = DAT_ram_400930e8;
              fVar57 = DAT_ram_40092850;
              fVar63 = DAT_ram_4009284c;
              uStack_e0 = *(uint *)(iVar38 + 0x18);
              uVar27 = *(uint *)(iVar38 + 0x10);
              pfStack_d4 = *(float **)(iVar38 + 0x1c);
              pfVar37 = *(float **)(iVar38 + 0x14);
              if (uVar27 == 0) {
                uVar31 = 1;
              }
              else {
                uVar31 = 1;
                uVar39 = 0;
                pfVar23 = pfVar37;
                uVar36 = *(uint *)(iVar38 + 0x20);
                do {
                  uVar22 = *(uint *)(*(int *)(iVar38 + 0xc) + uVar39 * 0x1c);
                  iVar17 = *(int *)(iVar38 + 0xc) + uVar39 * 0x1c;
                  pfVar37 = pfVar23;
                  uVar32 = uVar36;
                  pfVar35 = pfStack_d4;
                  if (uVar22 == 2) {
                    if (uVar31 != 0) {
                      pfVar20 = pfVar23;
                      do {
                        fVar55 = (float)*(undefined8 *)pfVar20;
                        fVar49 = _DAT_ram_300833dc;
                        if ((fVar57 < fVar55) && (fVar49 = _DAT_ram_30083bd8, fVar55 < fVar63)) {
                          fVar49 = (fVar55 + fVar63) * fVar50;
                          uVar36 = (uint)(-1 < (int)fVar49) * (int)fVar49;
                          fVar49 = (fVar49 - (float)uVar36) *
                                   ((float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar36 + 0x201) * 4)
                                   - *(float *)(&DAT_ram_30082bdc + (uVar36 + 0x200) * 4)) +
                                   *(float *)(&DAT_ram_30082bdc + (uVar36 + 0x200) * 4);
                        }
                        pfVar21 = pfVar20 + 1;
                        *pfVar20 = fVar49;
                        pfVar20 = pfVar21;
                      } while (pfVar23 + uVar31 != pfVar21);
                    }
                  }
                  else if (uVar22 < 3) {
                    if (uVar22 == 0) {
                      uVar22 = (uint)*(ushort *)(iVar17 + 8);
                      if (((uVar22 != 0) && (uVar24 = (uint)*(ushort *)(iVar17 + 10), uVar24 != 0))
                         && (iVar41 = *(int *)(iVar17 + 0xc), iVar41 != 0)) {
                        if ((uVar36 < uVar22) || (uStack_e0 < uVar31)) {
                          uVar27 = *(uint *)(iVar38 + 8);
                          uVar31 = 0;
                          goto LAB_ram_40085110;
                        }
                        if (uVar24 <= uVar31) {
                          uVar31 = uVar24;
                        }
                        pfVar37 = pfStack_d4;
                        uVar32 = uStack_e0;
                        uStack_e0 = uVar36;
                        pfVar35 = pfVar23;
                        if (uVar31 == 0) {
                          uVar24 = *(uint *)(iVar17 + 0x18);
                          uVar36 = 0;
                          do {
                            while (iVar41 = uVar36 * 4, uVar36 < uVar24) {
                              uVar36 = uVar36 + 1;
                              *pfStack_d4 = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41)
                              ;
                              pfStack_d4 = pfStack_d4 + 1;
                              uVar31 = uVar22;
                              if (uVar22 <= (uVar36 & 0xffff)) goto LAB_ram_400850fc;
                            }
                            uVar36 = uVar36 + 1;
                            *pfStack_d4 = 0.0;
                            pfStack_d4 = pfStack_d4 + 1;
                            uVar31 = uVar22;
                          } while ((uVar36 & 0xffff) < uVar22);
                        }
                        else {
                          uVar36 = *(uint *)(iVar17 + 0x18);
                          if (pfVar23 == (float *)0x0) {
                            uVar24 = 0;
                            do {
                              while (iVar41 = uVar24 * 4, uVar24 < uVar36) {
                                uVar24 = uVar24 + 1;
                                *pfStack_d4 = (float)*(undefined8 *)
                                                      (*(int *)(iVar17 + 0x14) + iVar41) + 0.0;
                                pfStack_d4 = pfStack_d4 + 1;
                                uVar31 = uVar22;
                                if (uVar22 <= (uVar24 & 0xffff)) goto LAB_ram_400850fc;
                              }
                              uVar24 = uVar24 + 1;
                              *pfStack_d4 = 0.0;
                              pfStack_d4 = pfStack_d4 + 1;
                              uVar31 = uVar22;
                            } while ((uVar24 & 0xffff) < uVar22);
                          }
                          else {
                            iVar26 = 0;
                            uVar27 = 0;
                            do {
                              while( true ) {
                                fVar49 = 0.0;
                                if (uVar27 < uVar36) {
                                  fVar49 = *(float *)(*(int *)(iVar17 + 0x14) + uVar27 * 4);
                                }
                                if (iVar41 + iVar26 == 0) break;
                                uStack_ac = 0;
                                uStack_ab = 0;
                                uStack_aa = 0;
                                uStack_a9 = 0;
                                FUN_ram_4009051c(iVar41 + iVar26,pfVar23,uVar31,&uStack_ac);
                                uVar27 = uVar27 + 1;
                                *pfStack_d4 = (float)CONCAT13(uStack_a9,
                                                              CONCAT12(uStack_aa,
                                                                       CONCAT11(uStack_ab,uStack_ac)
                                                                      )) + fVar49;
                                iVar26 = iVar26 + uVar24 * 4;
                                if (uVar22 <= (uVar27 & 0xffff)) goto LAB_ram_40086be0;
                                iVar41 = *(int *)(iVar17 + 0xc);
                                uVar36 = *(uint *)(iVar17 + 0x18);
                                pfStack_d4 = pfStack_d4 + 1;
                              }
                              uVar27 = uVar27 + 1;
                              *pfStack_d4 = fVar49 + 0.0;
                              iVar26 = iVar26 + uVar24 * 4;
                              pfStack_d4 = pfStack_d4 + 1;
                            } while ((uVar27 & 0xffff) < uVar22);
LAB_ram_40086be0:
                            uVar27 = *(uint *)(iVar38 + 0x10);
                            uVar31 = uVar22;
                          }
                        }
                      }
                    }
                    else {
                      fVar49 = *(float *)(iVar17 + 4);
                      if (uVar31 != 0) {
                        pfVar20 = pfVar23;
                        do {
                          while ((float)*(undefined8 *)pfVar20 < 0.0) {
                            pfVar21 = pfVar20 + 1;
                            *pfVar20 = fVar49 * (float)*(undefined8 *)pfVar20;
                            pfVar20 = pfVar21;
                            if (pfVar21 == pfVar23 + uVar31) goto LAB_ram_400850fc;
                          }
                          pfVar20 = pfVar20 + 1;
                        } while (pfVar23 + uVar31 != pfVar20);
                      }
                    }
                  }
                  else if ((uVar22 == 3) && (pfVar20 = pfVar23, uVar31 != 0)) {
                    do {
                      fVar55 = (float)*(undefined8 *)pfVar20;
                      fVar49 = _DAT_ram_30082bd8;
                      if ((fVar46 < fVar55) && (fVar49 = _DAT_ram_300833d4, fVar55 < fVar51)) {
                        fVar49 = (fVar55 + fVar51) * fVar48;
                        uVar36 = (uint)(-1 < (int)fVar49) * (int)fVar49;
                        iVar17 = uVar36 * 4;
                        fVar49 = (fVar49 - (float)uVar36) *
                                 (*(float *)(&DAT_ram_30082bdc + iVar17) -
                                 *(float *)(&DAT_ram_30082bd8 + iVar17)) +
                                 *(float *)(&DAT_ram_30082bd8 + iVar17);
                      }
                      pfVar21 = pfVar20 + 1;
                      *pfVar20 = fVar49;
                      pfVar20 = pfVar21;
                    } while (pfVar23 + uVar31 != pfVar21);
                  }
LAB_ram_400850fc:
                  pfStack_d4 = pfVar35;
                  uVar39 = uVar39 + 1;
                  pfVar23 = pfVar37;
                  uVar36 = uVar32;
                } while (uVar39 < uVar27);
              }
              if ((iVar12 == 0) || (uVar29 == 0)) {
                uVar27 = *(uint *)(iVar38 + 8);
              }
              else {
                if (uVar29 < uVar31) {
                  uVar31 = uVar29;
                }
                FUN_ram_4000305c(iVar12,pfVar37,uVar31 << 2);
                uVar27 = *(uint *)(iVar38 + 8);
              }
            }
          }
LAB_ram_40085110:
          if (uVar31 < uVar27) {
            iVar12 = *(int *)(iVar38 + 0x24);
            uVar62 = (ulonglong)(uint)DAT_ram_40092864;
            puVar18 = (ulonglong *)(iVar12 + uVar31 * 4);
            do {
              *puVar18 = uVar62;
              puVar18 = (ulonglong *)((int)puVar18 + 4);
            } while ((ulonglong *)(iVar12 + uVar27 * 4) != puVar18);
          }
          if (uVar31 < uVar42) {
            uVar29 = *(uint *)(iVar38 + 0x28);
            do {
              if (uVar31 < uVar29) {
                *(ulonglong *)(*(int *)(iVar38 + 0x24) + uVar31 * 4) =
                     CONCAT44(_DAT_ram_40092868,DAT_ram_40092864);
              }
              uVar31 = uVar31 + 1;
            } while (uVar42 != uVar31);
          }
          fVar63 = DAT_ram_40092864;
          if (uVar27 == 0) {
            if (*(char *)(iVar38 + 0x45) != '\0') goto LAB_ram_4008603c;
          }
          else {
            uVar42 = *(uint *)(iVar38 + 0x28);
            pfVar37 = *(float **)(iVar38 + 0x24);
            uVar29 = 0;
            if (uVar42 == 0) {
LAB_ram_400851c6:
              fVar63 = DAT_ram_40092864;
              uVar31 = uVar34 + uVar29;
              pfVar23 = pfVar37 + uVar31;
              do {
                uVar29 = uVar29 + 1;
                fVar57 = fVar63;
                if (uVar31 < uVar42) {
                  fVar57 = (float)*(undefined8 *)pfVar23;
                }
                uVar31 = uVar34 + uVar29;
                pfVar23[-uVar34] =
                     (*(float *)(iVar38 + 0x38) - *(float *)(iVar38 + 0x34)) * fVar63 +
                     *(float *)(iVar38 + 0x34);
                *pfVar23 = fVar57 * (*(float *)(iVar38 + 0x40) - *(float *)(iVar38 + 0x3c)) +
                           *(float *)(iVar38 + 0x3c);
                pfVar23 = pfVar23 + 1;
              } while (uVar29 < uVar27);
            }
            else {
              uVar31 = uVar27;
              if (uVar42 <= uVar27) {
                uVar31 = uVar42;
              }
              pfVar23 = pfVar37 + uVar34;
              pfVar35 = pfVar37;
              do {
                uVar36 = uVar34 + uVar29;
                uVar29 = uVar29 + 1;
                fVar57 = fVar63;
                if (uVar36 < uVar42) {
                  fVar57 = (float)*(undefined8 *)pfVar23;
                }
                *pfVar35 = (*(float *)(iVar38 + 0x38) - *(float *)(iVar38 + 0x34)) *
                           (float)*(undefined8 *)pfVar35 + *(float *)(iVar38 + 0x34);
                *pfVar23 = (*(float *)(iVar38 + 0x40) - *(float *)(iVar38 + 0x3c)) * fVar57 +
                           *(float *)(iVar38 + 0x3c);
                pfVar23 = pfVar23 + 1;
                pfVar35 = pfVar35 + 1;
              } while (uVar29 < uVar31);
              if (uVar29 < uVar27) goto LAB_ram_400851c6;
            }
            if (*(char *)(iVar38 + 0x45) != '\0') {
LAB_ram_4008603c:
              *(undefined4 *)(iVar38 + 0x48) = 0x200;
              *(float *)(iVar38 + 0x4c) = fVar28;
              *(undefined1 *)(iVar38 + 0x44) = 1;
              fStack_dc = 7.17465e-43;
              goto LAB_ram_40086054;
            }
            puVar13 = *(undefined8 **)(iVar38 + 0x2c);
            pfVar23 = pfVar37 + uVar27;
            puVar16 = *(undefined4 **)(iVar38 + 0x30);
            do {
              pfVar35 = pfVar37 + uVar34;
              *puVar13 = *(undefined8 *)pfVar37;
              pfVar37 = pfVar37 + 1;
              puVar13 = (undefined8 *)((int)puVar13 + 4);
              *puVar16 = (int)*(undefined8 *)pfVar35;
              puVar16 = puVar16 + 1;
            } while (pfVar23 != pfVar37);
          }
          *(undefined4 *)(iVar38 + 0x48) = 0;
          *(float *)(iVar38 + 0x4c) = fVar28;
          *(undefined **)(iVar38 + 0x44) = &sedeleg;
          uVar34 = uVar27;
        }
        else {
          fStack_dc = *(float *)(iVar38 + 0x48);
          if (fStack_dc != 0.0) {
LAB_ram_40086054:
            fVar28 = fStack_dc;
            if (uVar43 <= (uint)fStack_dc) {
              fVar28 = (float)uVar43;
            }
            if (uVar27 != 0) {
              iVar12 = *(int *)(iVar38 + 0x2c);
              iVar17 = *(int *)(iVar38 + 0x30);
              iVar41 = uVar34 << 2;
              uVar34 = 0;
              do {
                while( true ) {
                  iVar26 = uVar34 * 4;
                  puVar13 = (undefined8 *)(iVar12 + iVar26);
                  puVar25 = (undefined8 *)(iVar17 + iVar26);
                  fVar51 = *(float *)(*(int *)(iVar38 + 0x24) + iVar26);
                  fVar50 = *(float *)(*(int *)(iVar38 + 0x24) + iVar41);
                  uVar47 = *puVar13;
                  uVar66 = *puVar25;
                  iVar12 = uVar34 * 0x3c;
                  piVar33 = (int *)(*(int *)(iVar38 + 4) + iVar12);
                  fVar63 = (fVar51 - (float)uVar47) / (float)(uint)fStack_dc;
                  fVar57 = (fVar50 - (float)uVar66) / (float)(uint)fStack_dc;
                  if ((piVar33 != (int *)0x0) &&
                     (iVar17 = *(int *)(*(int *)(iVar38 + 4) + uVar34 * 0x3c), iVar17 != 0)) {
                    iVar14 = piVar33[1];
                    if (iVar14 == 2) {
                      fVar48 = *(float *)(iVar17 + 0x38);
                      fVar49 = *(float *)(iVar17 + 0x3c);
                      fVar55 = *(float *)(iVar17 + 0x40);
                      fVar56 = *(float *)(iVar17 + 0x44);
                      fVar53 = *(float *)(iVar17 + 0x48);
                      fVar54 = *(float *)(iVar17 + 0x8c);
                      fVar52 = *(float *)(iVar17 + 0x90);
                      fVar69 = *(float *)(iVar17 + 0x94);
                      fVar61 = *(float *)(iVar17 + 0x98);
                      fVar60 = *(float *)(iVar17 + 0x9c);
                      uVar62 = *(ulonglong *)(iVar17 + 0x4c);
                      uVar67 = *(ulonglong *)(iVar17 + 0x50);
                      fVar71 = *(float *)(iVar17 + 0xa0);
                      fVar70 = *(float *)(iVar17 + 0xa4);
                      if (param_3 != uVar11) {
                        uVar27 = 0;
                        pfVar37 = pfVar10;
                        do {
                          uVar27 = uVar27 + 1;
                          fVar58 = (float)*(undefined8 *)pfVar37;
                          fVar59 = fVar48 * fVar58 + (float)uVar62;
                          fVar44 = fVar54 * fVar59 + fVar71;
                          uVar62 = (ulonglong)
                                   (uint)(fVar56 * fVar59 + fVar49 * fVar58 + (float)uVar67);
                          *pfVar37 = fVar44;
                          uVar67 = (ulonglong)(uint)(fVar55 * fVar58 + fVar53 * fVar59);
                          fVar71 = fVar61 * fVar44 + fVar52 * fVar59 + fVar70;
                          fVar70 = fVar69 * fVar59 + fVar60 * fVar44;
                          pfVar37 = pfVar37 + 1;
                        } while (uVar27 < uVar43);
                      }
                      *(ulonglong *)(iVar17 + 0x4c) = uVar62;
                      *(ulonglong *)(iVar17 + 0x50) = uVar67;
                      *(float *)(iVar17 + 0xa0) = fVar71;
                      *(float *)(iVar17 + 0xa4) = fVar70;
                      uVar47 = *puVar13;
                      uVar66 = *puVar25;
                    }
                    else if (iVar14 == 3) {
                      fVar48 = *(float *)(iVar17 + 0x38);
                      fVar49 = *(float *)(iVar17 + 0x3c);
                      fVar55 = *(float *)(iVar17 + 0x40);
                      fVar56 = *(float *)(iVar17 + 0x44);
                      fVar53 = *(float *)(iVar17 + 0x48);
                      fVar54 = *(float *)(iVar17 + 0x8c);
                      fVar52 = *(float *)(iVar17 + 0x90);
                      fVar69 = *(float *)(iVar17 + 0x94);
                      fVar61 = *(float *)(iVar17 + 0x98);
                      fVar60 = *(float *)(iVar17 + 0x9c);
                      fVar71 = *(float *)(iVar17 + 0xe0);
                      fVar70 = *(float *)(iVar17 + 0xe4);
                      fVar9 = *(float *)(iVar17 + 0xe8);
                      fVar15 = *(float *)(iVar17 + 0xec);
                      fVar30 = *(float *)(iVar17 + 0xf0);
                      fVar59 = *(float *)(iVar17 + 0x4c);
                      uVar62 = *(ulonglong *)(iVar17 + 0x50);
                      fVar44 = *(float *)(iVar17 + 0xa0);
                      fVar58 = *(float *)(iVar17 + 0xa4);
                      fVar45 = *(float *)(iVar17 + 0xf4);
                      fVar64 = *(float *)(iVar17 + 0xf8);
                      if (param_3 != uVar11) {
                        uVar27 = 0;
                        pfVar37 = pfVar10;
                        do {
                          fVar3 = *pfVar37;
                          uVar27 = uVar27 + 1;
                          fVar4 = fVar48 * fVar3 + fVar59;
                          fVar5 = fVar54 * fVar4 + fVar44;
                          fVar59 = fVar56 * fVar4 + fVar49 * fVar3 + (float)uVar62;
                          fVar6 = fVar71 * fVar5 + fVar45;
                          uVar62 = (ulonglong)(uint)(fVar55 * fVar3 + fVar53 * fVar4);
                          fVar44 = fVar61 * fVar5 + fVar52 * fVar4 + fVar58;
                          *pfVar37 = fVar6;
                          fVar58 = fVar69 * fVar4 + fVar60 * fVar5;
                          fVar45 = fVar15 * fVar6 + fVar70 * fVar5 + fVar64;
                          fVar64 = fVar9 * fVar5 + fVar30 * fVar6;
                          pfVar37 = pfVar37 + 1;
                        } while (uVar27 < uVar43);
                      }
                      *(float *)(iVar17 + 0x4c) = fVar59;
                      *(ulonglong *)(iVar17 + 0x50) = uVar62;
                      *(float *)(iVar17 + 0xa0) = fVar44;
                      *(float *)(iVar17 + 0xa4) = fVar58;
                      *(float *)(iVar17 + 0xf4) = fVar45;
                      *(float *)(iVar17 + 0xf8) = fVar64;
                      uVar47 = *puVar13;
                      uVar66 = *puVar25;
                    }
                    else {
                      iVar40 = 0;
                      uVar27 = 0;
                      if (iVar14 != 0) {
                        while( true ) {
                          FUN_ram_400905e4(iVar17 + iVar40 + 0x2c,pfVar10,pfVar10,uVar43);
                          uVar27 = uVar27 + 1;
                          iVar40 = iVar40 + 0x54;
                          if ((uint)piVar33[1] <= uVar27) break;
                          iVar17 = *piVar33;
                        }
                        uVar47 = *(undefined8 *)(*(int *)(iVar38 + 0x2c) + iVar26);
                        uVar66 = *(undefined8 *)(*(int *)(iVar38 + 0x30) + iVar26);
                        piVar33 = (int *)(*(int *)(iVar38 + 4) + iVar12);
                      }
                    }
                  }
                  FUN_ram_3004503a(uVar47,uVar66,fVar63,fVar57,piVar33 + 4,pfVar10,uVar43,fVar28);
                  iVar12 = *(int *)(iVar38 + 4) + iVar12;
                  iVar17 = *(int *)(iVar12 + 8);
                  if (iVar17 != 0) {
                    iVar14 = *(int *)(iVar12 + 0xc);
                    if (iVar14 == 2) {
                      fVar48 = *(float *)(iVar17 + 0x38);
                      fVar49 = *(float *)(iVar17 + 0x3c);
                      fVar55 = *(float *)(iVar17 + 0x40);
                      fVar56 = *(float *)(iVar17 + 0x44);
                      fVar53 = *(float *)(iVar17 + 0x48);
                      fVar54 = *(float *)(iVar17 + 0x8c);
                      fVar52 = *(float *)(iVar17 + 0x90);
                      fVar69 = *(float *)(iVar17 + 0x94);
                      fVar61 = *(float *)(iVar17 + 0x98);
                      fVar60 = *(float *)(iVar17 + 0x9c);
                      uVar62 = *(ulonglong *)(iVar17 + 0x4c);
                      uVar67 = *(ulonglong *)(iVar17 + 0x50);
                      fVar71 = *(float *)(iVar17 + 0xa0);
                      fVar70 = *(float *)(iVar17 + 0xa4);
                      if (param_3 != uVar11) {
                        uVar27 = 0;
                        pfVar37 = pfVar10;
                        do {
                          uVar27 = uVar27 + 1;
                          fVar58 = (float)*(undefined8 *)pfVar37;
                          fVar59 = fVar48 * fVar58 + (float)uVar62;
                          fVar44 = fVar54 * fVar59 + fVar71;
                          uVar62 = (ulonglong)
                                   (uint)(fVar56 * fVar59 + fVar49 * fVar58 + (float)uVar67);
                          *pfVar37 = fVar44;
                          uVar67 = (ulonglong)(uint)(fVar55 * fVar58 + fVar53 * fVar59);
                          fVar71 = fVar61 * fVar44 + fVar52 * fVar59 + fVar70;
                          fVar70 = fVar69 * fVar59 + fVar60 * fVar44;
                          pfVar37 = pfVar37 + 1;
                        } while (uVar27 < uVar43);
                      }
                      *(ulonglong *)(iVar17 + 0x4c) = uVar62;
                      *(ulonglong *)(iVar17 + 0x50) = uVar67;
                      *(float *)(iVar17 + 0xa0) = fVar71;
                      *(float *)(iVar17 + 0xa4) = fVar70;
                    }
                    else if (iVar14 == 3) {
                      fVar48 = *(float *)(iVar17 + 0x38);
                      fVar49 = *(float *)(iVar17 + 0x3c);
                      fVar55 = *(float *)(iVar17 + 0x40);
                      fVar56 = *(float *)(iVar17 + 0x44);
                      fVar53 = *(float *)(iVar17 + 0x48);
                      fVar54 = *(float *)(iVar17 + 0x8c);
                      fVar52 = *(float *)(iVar17 + 0x90);
                      fVar69 = *(float *)(iVar17 + 0x94);
                      fVar61 = *(float *)(iVar17 + 0x98);
                      fVar60 = *(float *)(iVar17 + 0x9c);
                      fVar71 = *(float *)(iVar17 + 0xe0);
                      fVar70 = *(float *)(iVar17 + 0xe4);
                      fVar15 = *(float *)(iVar17 + 0xe8);
                      fVar30 = *(float *)(iVar17 + 0xec);
                      fVar9 = *(float *)(iVar17 + 0xf0);
                      fVar59 = *(float *)(iVar17 + 0x4c);
                      uVar62 = *(ulonglong *)(iVar17 + 0x50);
                      fVar44 = *(float *)(iVar17 + 0xa0);
                      fVar58 = *(float *)(iVar17 + 0xa4);
                      fVar45 = *(float *)(iVar17 + 0xf4);
                      fVar64 = *(float *)(iVar17 + 0xf8);
                      if (param_3 != uVar11) {
                        uVar27 = 0;
                        pfVar37 = pfVar10;
                        do {
                          fVar3 = *pfVar37;
                          uVar27 = uVar27 + 1;
                          fVar4 = fVar48 * fVar3 + fVar59;
                          fVar5 = fVar54 * fVar4 + fVar44;
                          fVar59 = fVar56 * fVar4 + fVar49 * fVar3 + (float)uVar62;
                          fVar6 = fVar71 * fVar5 + fVar45;
                          uVar62 = (ulonglong)(uint)(fVar55 * fVar3 + fVar53 * fVar4);
                          fVar44 = fVar61 * fVar5 + fVar52 * fVar4 + fVar58;
                          *pfVar37 = fVar6;
                          fVar58 = fVar69 * fVar4 + fVar60 * fVar5;
                          fVar45 = fVar30 * fVar6 + fVar70 * fVar5 + fVar64;
                          fVar64 = fVar15 * fVar5 + fVar9 * fVar6;
                          pfVar37 = pfVar37 + 1;
                        } while (uVar27 < uVar43);
                      }
                      *(float *)(iVar17 + 0x4c) = fVar59;
                      *(ulonglong *)(iVar17 + 0x50) = uVar62;
                      *(float *)(iVar17 + 0xa0) = fVar44;
                      *(float *)(iVar17 + 0xa4) = fVar58;
                      *(float *)(iVar17 + 0xf4) = fVar45;
                      *(float *)(iVar17 + 0xf8) = fVar64;
                    }
                    else {
                      iVar40 = 0;
                      uVar27 = 0;
                      if (iVar14 != 0) {
                        while( true ) {
                          FUN_ram_400905e4(iVar17 + iVar40 + 0x2c,pfVar10,pfVar10,uVar43);
                          uVar27 = uVar27 + 1;
                          iVar40 = iVar40 + 0x54;
                          if (*(uint *)(iVar12 + 0xc) <= uVar27) break;
                          iVar17 = *(int *)(iVar12 + 8);
                        }
                      }
                    }
                  }
                  iVar12 = *(int *)(iVar38 + 0x2c);
                  iVar17 = *(int *)(iVar38 + 0x30);
                  pfVar37 = (float *)(iVar12 + iVar26);
                  pfVar23 = (float *)(iVar26 + iVar17);
                  *(ulonglong *)pfVar37 =
                       (ulonglong)
                       (uint)(fVar63 * (float)(int)fVar28 + (float)*(undefined8 *)pfVar37);
                  *pfVar23 = fVar57 * (float)(int)fVar28 + *pfVar23;
                  if (uVar43 < (uint)fStack_dc) break;
                  uVar27 = *(uint *)(iVar38 + 8);
                  *pfVar37 = fVar51;
                  *pfVar23 = fVar50;
                  uVar34 = uVar34 + 1;
                  iVar41 = iVar41 + 4;
                  if (uVar27 <= uVar34) goto LAB_ram_400861be;
                }
                uVar34 = uVar34 + 1;
                iVar41 = iVar41 + 4;
              } while (uVar34 < *(uint *)(iVar38 + 8));
LAB_ram_400861be:
              fStack_dc = *(float *)(iVar38 + 0x48);
            }
            *(int *)(iVar38 + 0x48) = (int)fStack_dc - (int)fVar28;
            goto LAB_ram_40084b04;
          }
        }
        iVar12 = 0;
        uVar27 = 0;
        if (uVar34 != 0) {
          do {
            piVar33 = (int *)(*(int *)(iVar38 + 4) + iVar12);
            if (piVar33 != (int *)0x0) {
              iVar17 = *(int *)(*(int *)(iVar38 + 4) + iVar12);
              uVar62 = *(ulonglong *)(*(int *)(iVar38 + 0x2c) + uVar27 * 4);
              uVar2 = *(undefined4 *)(uVar27 * 4 + *(int *)(iVar38 + 0x30));
              if (iVar17 != 0) {
                iVar41 = piVar33[1];
                if (iVar41 == 2) {
                  fVar28 = *(float *)(iVar17 + 0x38);
                  fVar63 = *(float *)(iVar17 + 0x3c);
                  fVar57 = *(float *)(iVar17 + 0x40);
                  fVar51 = *(float *)(iVar17 + 0x44);
                  fVar50 = *(float *)(iVar17 + 0x48);
                  fVar48 = *(float *)(iVar17 + 0x8c);
                  fVar49 = *(float *)(iVar17 + 0x90);
                  fVar55 = *(float *)(iVar17 + 0x94);
                  fVar56 = *(float *)(iVar17 + 0x98);
                  fVar53 = *(float *)(iVar17 + 0x9c);
                  uVar67 = *(ulonglong *)(iVar17 + 0x4c);
                  uVar65 = *(ulonglong *)(iVar17 + 0x50);
                  fVar54 = *(float *)(iVar17 + 0xa0);
                  fVar52 = *(float *)(iVar17 + 0xa4);
                  if (param_3 != uVar11) {
                    uVar34 = 0;
                    pfVar37 = pfVar10;
                    do {
                      uVar34 = uVar34 + 1;
                      fVar60 = (float)*(undefined8 *)pfVar37;
                      fVar69 = fVar28 * fVar60 + (float)uVar67;
                      fVar61 = fVar48 * fVar69 + fVar54;
                      uVar67 = (ulonglong)(uint)(fVar51 * fVar69 + fVar63 * fVar60 + (float)uVar65);
                      *pfVar37 = fVar61;
                      uVar65 = (ulonglong)(uint)(fVar57 * fVar60 + fVar50 * fVar69);
                      fVar54 = fVar56 * fVar61 + fVar49 * fVar69 + fVar52;
                      fVar52 = fVar55 * fVar69 + fVar53 * fVar61;
                      pfVar37 = pfVar37 + 1;
                    } while (uVar34 < uVar43);
                  }
                  *(ulonglong *)(iVar17 + 0x4c) = uVar67;
                  *(ulonglong *)(iVar17 + 0x50) = uVar65;
                  *(float *)(iVar17 + 0xa0) = fVar54;
                  *(float *)(iVar17 + 0xa4) = fVar52;
                }
                else if (iVar41 == 3) {
                  fVar28 = *(float *)(iVar17 + 0x38);
                  fVar63 = *(float *)(iVar17 + 0x3c);
                  fVar57 = *(float *)(iVar17 + 0x40);
                  fVar51 = *(float *)(iVar17 + 0x44);
                  fVar50 = *(float *)(iVar17 + 0x48);
                  fVar48 = *(float *)(iVar17 + 0x8c);
                  fVar49 = *(float *)(iVar17 + 0x90);
                  fVar55 = *(float *)(iVar17 + 0x94);
                  fVar56 = *(float *)(iVar17 + 0x98);
                  fVar53 = *(float *)(iVar17 + 0x9c);
                  fVar54 = *(float *)(iVar17 + 0xe0);
                  fVar52 = *(float *)(iVar17 + 0xe4);
                  fVar69 = *(float *)(iVar17 + 0xe8);
                  fVar61 = *(float *)(iVar17 + 0xec);
                  fVar60 = *(float *)(iVar17 + 0xf0);
                  fVar71 = *(float *)(iVar17 + 0x4c);
                  uVar67 = *(ulonglong *)(iVar17 + 0x50);
                  fVar70 = *(float *)(iVar17 + 0xa0);
                  fVar59 = *(float *)(iVar17 + 0xa4);
                  fVar44 = *(float *)(iVar17 + 0xf4);
                  fVar58 = *(float *)(iVar17 + 0xf8);
                  if (param_3 != uVar11) {
                    uVar34 = 0;
                    pfVar37 = pfVar10;
                    do {
                      fVar45 = *pfVar37;
                      uVar34 = uVar34 + 1;
                      fVar64 = fVar28 * fVar45 + fVar71;
                      fVar9 = fVar48 * fVar64 + fVar70;
                      fVar71 = fVar51 * fVar64 + fVar63 * fVar45 + (float)uVar67;
                      fVar15 = fVar54 * fVar9 + fVar44;
                      uVar67 = (ulonglong)(uint)(fVar57 * fVar45 + fVar50 * fVar64);
                      fVar70 = fVar56 * fVar9 + fVar49 * fVar64 + fVar59;
                      *pfVar37 = fVar15;
                      fVar44 = fVar61 * fVar15 + fVar52 * fVar9 + fVar58;
                      fVar59 = fVar55 * fVar64 + fVar53 * fVar9;
                      fVar58 = fVar69 * fVar9 + fVar60 * fVar15;
                      pfVar37 = pfVar37 + 1;
                    } while (uVar34 < uVar43);
                  }
                  *(float *)(iVar17 + 0x4c) = fVar71;
                  *(ulonglong *)(iVar17 + 0x50) = uVar67;
                  *(float *)(iVar17 + 0xa0) = fVar70;
                  *(float *)(iVar17 + 0xa4) = fVar59;
                  *(float *)(iVar17 + 0xf4) = fVar44;
                  *(float *)(iVar17 + 0xf8) = fVar58;
                }
                else {
                  iVar26 = 0;
                  uVar34 = 0;
                  if (iVar41 != 0) {
                    while( true ) {
                      FUN_ram_400905e4(iVar17 + iVar26 + 0x2c,pfVar10,pfVar10,uVar43);
                      uVar34 = uVar34 + 1;
                      iVar26 = iVar26 + 0x54;
                      if ((uint)piVar33[1] <= uVar34) break;
                      iVar17 = *piVar33;
                    }
                  }
                }
              }
              FUN_ram_3004503a(uVar62 & 0xffffffff,uVar2,0,piVar33 + 4,pfVar10,uVar43,0);
              iVar17 = piVar33[2];
              if (iVar17 == 0) {
LAB_ram_40084f0c:
                uVar34 = *(uint *)(iVar38 + 8);
              }
              else {
                iVar41 = piVar33[3];
                if (iVar41 == 2) {
                  fVar28 = *(float *)(iVar17 + 0x38);
                  fVar63 = *(float *)(iVar17 + 0x3c);
                  fVar57 = *(float *)(iVar17 + 0x40);
                  fVar51 = *(float *)(iVar17 + 0x44);
                  fVar50 = *(float *)(iVar17 + 0x48);
                  fVar48 = *(float *)(iVar17 + 0x8c);
                  fVar49 = *(float *)(iVar17 + 0x90);
                  fVar55 = *(float *)(iVar17 + 0x94);
                  fVar56 = *(float *)(iVar17 + 0x98);
                  fVar53 = *(float *)(iVar17 + 0x9c);
                  uVar62 = *(ulonglong *)(iVar17 + 0x4c);
                  uVar67 = *(ulonglong *)(iVar17 + 0x50);
                  fVar54 = *(float *)(iVar17 + 0xa0);
                  fVar52 = *(float *)(iVar17 + 0xa4);
                  if (param_3 != uVar11) {
                    uVar34 = 0;
                    pfVar37 = pfVar10;
                    do {
                      uVar34 = uVar34 + 1;
                      fVar60 = (float)*(undefined8 *)pfVar37;
                      fVar69 = fVar28 * fVar60 + (float)uVar62;
                      fVar61 = fVar48 * fVar69 + fVar54;
                      uVar62 = (ulonglong)(uint)(fVar51 * fVar69 + fVar63 * fVar60 + (float)uVar67);
                      *pfVar37 = fVar61;
                      uVar67 = (ulonglong)(uint)(fVar57 * fVar60 + fVar50 * fVar69);
                      fVar54 = fVar56 * fVar61 + fVar49 * fVar69 + fVar52;
                      fVar52 = fVar55 * fVar69 + fVar53 * fVar61;
                      pfVar37 = pfVar37 + 1;
                    } while (uVar34 < uVar43);
                  }
                  uVar34 = *(uint *)(iVar38 + 8);
                  *(ulonglong *)(iVar17 + 0x4c) = uVar62;
                  *(ulonglong *)(iVar17 + 0x50) = uVar67;
                  *(float *)(iVar17 + 0xa0) = fVar54;
                  *(float *)(iVar17 + 0xa4) = fVar52;
                }
                else {
                  if (iVar41 != 3) {
                    iVar26 = 0;
                    uVar34 = 0;
                    if (iVar41 != 0) {
                      while( true ) {
                        FUN_ram_400905e4(iVar17 + iVar26 + 0x2c,pfVar10,pfVar10,uVar43);
                        uVar34 = uVar34 + 1;
                        iVar26 = iVar26 + 0x54;
                        if ((uint)piVar33[3] <= uVar34) break;
                        iVar17 = piVar33[2];
                      }
                    }
                    goto LAB_ram_40084f0c;
                  }
                  fVar28 = *(float *)(iVar17 + 0x38);
                  fVar63 = *(float *)(iVar17 + 0x3c);
                  fVar57 = *(float *)(iVar17 + 0x40);
                  fVar51 = *(float *)(iVar17 + 0x44);
                  fVar50 = *(float *)(iVar17 + 0x48);
                  fVar48 = *(float *)(iVar17 + 0x8c);
                  fVar49 = *(float *)(iVar17 + 0x90);
                  fVar55 = *(float *)(iVar17 + 0x94);
                  fVar56 = *(float *)(iVar17 + 0x98);
                  fVar53 = *(float *)(iVar17 + 0x9c);
                  fVar54 = *(float *)(iVar17 + 0xe0);
                  fVar52 = *(float *)(iVar17 + 0xe4);
                  fVar69 = *(float *)(iVar17 + 0xe8);
                  fVar61 = *(float *)(iVar17 + 0xec);
                  fVar60 = *(float *)(iVar17 + 0xf0);
                  fVar71 = *(float *)(iVar17 + 0x4c);
                  uVar62 = *(ulonglong *)(iVar17 + 0x50);
                  fVar70 = *(float *)(iVar17 + 0xa0);
                  fVar59 = *(float *)(iVar17 + 0xa4);
                  fVar44 = *(float *)(iVar17 + 0xf4);
                  fVar58 = *(float *)(iVar17 + 0xf8);
                  if (param_3 != uVar11) {
                    uVar34 = 0;
                    pfVar37 = pfVar10;
                    do {
                      fVar45 = *pfVar37;
                      uVar34 = uVar34 + 1;
                      fVar64 = fVar28 * fVar45 + fVar71;
                      fVar9 = fVar48 * fVar64 + fVar70;
                      fVar71 = fVar51 * fVar64 + fVar63 * fVar45 + (float)uVar62;
                      fVar15 = fVar54 * fVar9 + fVar44;
                      uVar62 = (ulonglong)(uint)(fVar57 * fVar45 + fVar50 * fVar64);
                      fVar70 = fVar56 * fVar9 + fVar49 * fVar64 + fVar59;
                      *pfVar37 = fVar15;
                      fVar44 = fVar61 * fVar15 + fVar52 * fVar9 + fVar58;
                      fVar59 = fVar55 * fVar64 + fVar53 * fVar9;
                      fVar58 = fVar69 * fVar9 + fVar60 * fVar15;
                      pfVar37 = pfVar37 + 1;
                    } while (uVar34 < uVar43);
                  }
                  uVar34 = *(uint *)(iVar38 + 8);
                  *(float *)(iVar17 + 0x4c) = fVar71;
                  *(ulonglong *)(iVar17 + 0x50) = uVar62;
                  *(float *)(iVar17 + 0xa0) = fVar70;
                  *(float *)(iVar17 + 0xa4) = fVar59;
                  *(float *)(iVar17 + 0xf4) = fVar44;
                  *(float *)(iVar17 + 0xf8) = fVar58;
                }
              }
            }
            uVar27 = uVar27 + 1;
            iVar12 = iVar12 + 0x3c;
          } while (uVar27 < uVar34);
        }
      }
LAB_ram_40084b04:
      uVar34 = *(uint *)(iVar38 + 0x54);
      fVar28 = DAT_ram_4009281c;
      if (uVar34 != 0) {
        uVar68 = *(undefined8 *)(param_1 + 0xc);
        uVar66 = *(undefined8 *)(param_1 + 0x10);
        uVar47 = *(undefined8 *)(param_1 + 0x14);
        uStack_ac = (undefined1)uVar68;
        uStack_ab = (undefined1)((ulonglong)uVar68 >> 8);
        uStack_aa = (undefined1)((ulonglong)uVar68 >> 0x10);
        uStack_a9 = (undefined1)((ulonglong)uVar68 >> 0x18);
        uStack_a8 = (undefined1)uVar66;
        uStack_a7 = (undefined1)((ulonglong)uVar66 >> 8);
        uStack_a6 = (undefined1)((ulonglong)uVar66 >> 0x10);
        uStack_a5 = (undefined1)((ulonglong)uVar66 >> 0x18);
        fVar63 = (float)uVar47;
        uStack_a4 = fVar63;
        if ((((*(char *)(iVar38 + 0x80) == '\0') ||
             (fVar1 < ABS((float)uVar68 - *(float *)(iVar38 + 0x84)))) ||
            (fVar1 < ABS((float)uVar66 - *(float *)(iVar38 + 0x88)))) ||
           (fVar1 < ABS(fVar63 - *(float *)(iVar38 + 0x8c)))) {
          uVar27 = *(uint *)(iVar38 + 0x74);
          if (uVar27 < uVar34) goto LAB_ram_40084b3c;
          iVar12 = *(int *)(iVar38 + 0x70);
          uVar29 = 0;
          if (*(int *)(iVar38 + 0x5c) == 0) {
LAB_ram_400862fc:
            fVar28 = DAT_ram_40092864;
            pfVar37 = (float *)(iVar12 + uVar29 * 4);
            do {
              *pfVar37 = fVar28;
              uVar29 = uVar29 + 1;
              pfVar37 = pfVar37 + 1;
            } while (uVar29 < uVar34);
          }
          else {
            puVar19 = *(undefined1 **)(iVar38 + 0x60);
            if ((puVar19 == (undefined1 *)0x0) || (*(int *)(iVar38 + 0x68) == 0)) {
              uVar29 = 0;
              goto LAB_ram_400862fc;
            }
            uVar29 = 0;
            if (*(uint *)(iVar38 + 100) < 3) goto LAB_ram_400862fc;
            uStack_a4._3_1_ = (undefined1)((ulonglong)uVar47 >> 0x18);
            uStack_a4._0_1_ = (undefined1)uVar47;
            uStack_a4._1_1_ = (undefined1)((ulonglong)uVar47 >> 8);
            uStack_a4._2_1_ = (undefined1)((ulonglong)uVar47 >> 0x10);
            puVar19[1] = uStack_ab;
            puVar19[2] = uStack_aa;
            *puVar19 = uStack_ac;
            puVar19[3] = uStack_a9;
            puVar19[4] = uStack_a8;
            puVar19[5] = uStack_a7;
            puVar19[6] = uStack_a6;
            puVar19[7] = uStack_a5;
            puVar19[8] = (undefined1)uStack_a4;
            puVar19[9] = uStack_a4._1_1_;
            puVar19[10] = uStack_a4._2_1_;
            puVar19[0xb] = uStack_a4._3_1_;
            fVar48 = DAT_ram_4009935c;
            fVar50 = DAT_ram_40099358;
            fVar51 = DAT_ram_400930e8;
            fVar57 = DAT_ram_40092850;
            fVar28 = DAT_ram_4009284c;
            pfStack_d0 = *(float **)(iVar38 + 0x68);
            uVar34 = *(uint *)(iVar38 + 0x5c);
            pfVar37 = *(float **)(iVar38 + 0x60);
            if (uVar34 == 0) {
              uVar29 = 3;
            }
            else {
              uVar29 = 3;
              uVar36 = 0;
              uVar42 = *(uint *)(iVar38 + 100);
              uVar31 = *(uint *)(iVar38 + 0x6c);
              pfVar23 = pfVar37;
              do {
                uVar32 = *(uint *)(*(int *)(iVar38 + 0x58) + uVar36 * 0x1c);
                iVar17 = *(int *)(iVar38 + 0x58) + uVar36 * 0x1c;
                uVar39 = uVar42;
                pfVar37 = pfVar23;
                pfVar35 = pfStack_d0;
                if (uVar32 == 2) {
                  if (uVar29 != 0) {
                    pfVar20 = pfVar23;
                    do {
                      fVar55 = (float)*(undefined8 *)pfVar20;
                      fVar49 = _DAT_ram_300833dc;
                      if ((fVar57 < fVar55) && (fVar49 = _DAT_ram_30083bd8, fVar55 < fVar28)) {
                        fVar49 = (fVar55 + fVar28) * fVar50;
                        uVar42 = (uint)(-1 < (int)fVar49) * (int)fVar49;
                        fVar49 = (fVar49 - (float)uVar42) *
                                 ((float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar42 + 0x201) * 4) -
                                 *(float *)(&DAT_ram_30082bdc + (uVar42 + 0x200) * 4)) +
                                 *(float *)(&DAT_ram_30082bdc + (uVar42 + 0x200) * 4);
                      }
                      pfVar21 = pfVar20 + 1;
                      *pfVar20 = fVar49;
                      pfVar20 = pfVar21;
                    } while (pfVar23 + uVar29 != pfVar21);
                  }
                }
                else if (uVar32 < 3) {
                  if (uVar32 == 0) {
                    uVar32 = (uint)*(ushort *)(iVar17 + 8);
                    if (((uVar32 != 0) && (uVar22 = (uint)*(ushort *)(iVar17 + 10), uVar22 != 0)) &&
                       (iVar41 = *(int *)(iVar17 + 0xc), iVar41 != 0)) {
                      if ((uVar31 < uVar32) || (uVar42 < uVar29)) {
                        uVar29 = 0;
                        goto LAB_ram_4008555a;
                      }
                      if (uVar22 <= uVar29) {
                        uVar29 = uVar22;
                      }
                      uVar39 = uVar31;
                      uVar31 = uVar42;
                      pfVar37 = pfStack_d0;
                      pfVar35 = pfVar23;
                      if (uVar29 == 0) {
                        uVar22 = *(uint *)(iVar17 + 0x18);
                        uVar42 = 0;
                        do {
                          while (iVar41 = uVar42 * 4, uVar42 < uVar22) {
                            uVar42 = uVar42 + 1;
                            *pfStack_d0 = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41);
                            pfStack_d0 = pfStack_d0 + 1;
                            uVar29 = uVar32;
                            if (uVar32 <= (uVar42 & 0xffff)) goto LAB_ram_4008553c;
                          }
                          uVar42 = uVar42 + 1;
                          *pfStack_d0 = 0.0;
                          pfStack_d0 = pfStack_d0 + 1;
                          uVar29 = uVar32;
                        } while ((uVar42 & 0xffff) < uVar32);
                      }
                      else {
                        uVar42 = *(uint *)(iVar17 + 0x18);
                        if (pfVar23 == (float *)0x0) {
                          uVar22 = 0;
                          do {
                            while (iVar41 = uVar22 * 4, uVar22 < uVar42) {
                              uVar22 = uVar22 + 1;
                              *pfStack_d0 = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41)
                                            + 0.0;
                              pfStack_d0 = pfStack_d0 + 1;
                              uVar29 = uVar32;
                              if (uVar32 <= (uVar22 & 0xffff)) goto LAB_ram_4008553c;
                            }
                            uVar22 = uVar22 + 1;
                            *pfStack_d0 = 0.0;
                            pfStack_d0 = pfStack_d0 + 1;
                            uVar29 = uVar32;
                          } while ((uVar22 & 0xffff) < uVar32);
                        }
                        else {
                          iVar26 = 0;
                          uVar34 = 0;
                          do {
                            while( true ) {
                              fVar49 = 0.0;
                              if (uVar34 < uVar42) {
                                fVar49 = *(float *)(*(int *)(iVar17 + 0x14) + uVar34 * 4);
                              }
                              if (iVar41 + iVar26 == 0) break;
                              uStack_b0 = 0;
                              uStack_af = 0;
                              uStack_ae = 0;
                              uStack_ad = 0;
                              FUN_ram_4009051c(iVar41 + iVar26,pfVar23,uVar29,&uStack_b0);
                              uVar34 = uVar34 + 1;
                              *pfStack_d0 = (float)CONCAT13(uStack_ad,
                                                            CONCAT12(uStack_ae,
                                                                     CONCAT11(uStack_af,uStack_b0)))
                                            + fVar49;
                              iVar26 = iVar26 + uVar22 * 4;
                              if (uVar32 <= (uVar34 & 0xffff)) goto LAB_ram_40086d5c;
                              iVar41 = *(int *)(iVar17 + 0xc);
                              uVar42 = *(uint *)(iVar17 + 0x18);
                              pfStack_d0 = pfStack_d0 + 1;
                            }
                            uVar34 = uVar34 + 1;
                            *pfStack_d0 = fVar49 + 0.0;
                            iVar26 = iVar26 + uVar22 * 4;
                            pfStack_d0 = pfStack_d0 + 1;
                          } while ((uVar34 & 0xffff) < uVar32);
LAB_ram_40086d5c:
                          uVar34 = *(uint *)(iVar38 + 0x5c);
                          uVar29 = uVar32;
                        }
                      }
                    }
                  }
                  else {
                    fVar49 = *(float *)(iVar17 + 4);
                    if (uVar29 != 0) {
                      pfVar20 = pfVar23;
                      do {
                        while ((float)*(undefined8 *)pfVar20 < 0.0) {
                          pfVar21 = pfVar20 + 1;
                          *pfVar20 = fVar49 * (float)*(undefined8 *)pfVar20;
                          pfVar20 = pfVar21;
                          if (pfVar21 == pfVar23 + uVar29) goto LAB_ram_4008553c;
                        }
                        pfVar20 = pfVar20 + 1;
                      } while (pfVar23 + uVar29 != pfVar20);
                    }
                  }
                }
                else if ((uVar32 == 3) && (pfVar20 = pfVar23, uVar29 != 0)) {
                  do {
                    fVar55 = (float)*(undefined8 *)pfVar20;
                    fVar49 = _DAT_ram_30082bd8;
                    if ((fVar46 < fVar55) && (fVar49 = _DAT_ram_300833d4, fVar55 < fVar51)) {
                      fVar49 = (fVar55 + fVar51) * fVar48;
                      uVar42 = (uint)(-1 < (int)fVar49) * (int)fVar49;
                      iVar17 = uVar42 * 4;
                      fVar49 = (fVar49 - (float)uVar42) *
                               (*(float *)(&DAT_ram_30082bdc + iVar17) -
                               *(float *)(&DAT_ram_30082bd8 + iVar17)) +
                               *(float *)(&DAT_ram_30082bd8 + iVar17);
                    }
                    pfVar21 = pfVar20 + 1;
                    *pfVar20 = fVar49;
                    pfVar20 = pfVar21;
                  } while (pfVar23 + uVar29 != pfVar21);
                }
LAB_ram_4008553c:
                pfStack_d0 = pfVar35;
                uVar36 = uVar36 + 1;
                uVar42 = uVar39;
                pfVar23 = pfVar37;
              } while (uVar36 < uVar34);
            }
            if (iVar12 != 0) {
              if (uVar27 < uVar29) {
                uVar29 = uVar27;
              }
              FUN_ram_4000305c(iVar12,pfVar37,uVar29 << 2);
            }
LAB_ram_4008555a:
            uVar34 = *(uint *)(iVar38 + 0x54);
            if (uVar29 < uVar34) {
              iVar12 = *(int *)(iVar38 + 0x70);
              goto LAB_ram_400862fc;
            }
          }
          fVar57 = DAT_ram_40092864;
          fVar28 = DAT_ram_4009281c;
          iVar12 = *(int *)(iVar38 + 0x50);
          fVar51 = in_register_00000100;
          if (uVar34 != 0) {
            iVar17 = 0;
            uVar27 = 0;
            do {
              fVar50 = fVar57;
              if (uVar27 < *(uint *)(iVar38 + 0x74)) {
                fVar50 = (float)*(undefined8 *)(*(int *)(iVar38 + 0x70) + uVar27 * 4);
              }
              piVar33 = (int *)(iVar12 + iVar17);
              fVar50 = (*(float *)(iVar38 + 0x7c) - *(float *)(iVar38 + 0x78)) * fVar50 +
                       *(float *)(iVar38 + 0x78);
              if ((piVar33 != (int *)0x0) && (fVar1 < ABS((float)piVar33[3] - fVar50))) {
                piVar33[3] = (int)fVar50;
                if (0.0 < (float)piVar33[5]) {
                  fVar48 = ((float)piVar33[1] * in_register_00000100) / (float)piVar33[5];
                  fVar49 = (float)FUN_ram_40000786(fVar48);
                  fVar48 = (float)FUN_ram_40000a08(fVar48);
                  iVar41 = *piVar33;
                  if (iVar41 == 2) {
                    fVar56 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar50 / DAT_ram_400930dc);
                    iVar12 = *(int *)(iVar38 + 0x50);
                    fVar53 = fVar49 * DAT_ram_40092834;
                    uVar34 = *(uint *)(iVar38 + 0x54);
                    fVar48 = fVar48 / ((float)piVar33[2] + (float)piVar33[2]);
                    fStack_c8 = fVar56 * fVar48 + fVar28;
                    fVar55 = -(fVar56 * fVar48) + fVar28;
                    fVar50 = fVar48 / fVar56 + fVar28;
                    fVar48 = fVar28 - fVar48 / fVar56;
                    fVar56 = fVar53;
                  }
                  else if (iVar41 - 3U < 2) {
                    fVar48 = fVar48 / ((float)piVar33[2] + (float)piVar33[2]);
                    if (iVar41 == 3) {
                      fVar53 = fVar28 - fVar49;
                      fStack_c8 = fVar53;
                    }
                    else {
                      fVar53 = -(fVar49 + fVar28);
                      fStack_c8 = fVar49 + fVar28;
                    }
                    fStack_c8 = fStack_c8 * DAT_ram_40092864;
                    fVar50 = fVar48 + fVar28;
                    fVar48 = fVar28 - fVar48;
                    fVar56 = fVar49 * DAT_ram_40092834;
                    fVar55 = fStack_c8;
                  }
                  else {
                    fVar52 = (float)FUN_ram_40000d54(CONCAT44(DAT_ram_400930a8,DAT_ram_400930a4),
                                                     fVar50 / DAT_ram_400930dc);
                    fVar54 = (fVar28 / fVar52 + fVar52) * (fVar28 / (float)piVar33[4] - fVar28) +
                             (float)PTR_firmware_entry_ram_40092830;
                    if (0xff < extraout_a3 || 0.0 <= fVar54) {
                      fVar54 = SQRT(fVar54);
                    }
                    else {
                      fVar54 = (float)FUN_ram_40000e84();
                    }
                    fVar69 = fVar52 - fVar28;
                    fVar54 = fVar48 * fVar57 * fVar54;
                    fVar50 = fVar52 + fVar28;
                    fVar48 = fVar49 * fVar69;
                    if (*piVar33 == 0) {
                      fVar55 = fVar50 - fVar48;
                      if (0.0 <= fVar52) {
                        pfStack_d0 = (float *)(fVar50 + fVar48);
                        fVar53 = (fVar52 + fVar52) * (-(fVar49 * fVar50) + fVar69);
                        fVar56 = (fVar49 * fVar50 + fVar69) * DAT_ram_40092834;
                        fVar48 = SQRT(fVar52) + SQRT(fVar52);
                        fVar50 = fVar48 * fVar54 + (float)pfStack_d0;
                        fStack_c8 = fVar52 * (fVar48 * fVar54 + fVar55);
                        fVar55 = fVar52 * (-(fVar48 * fVar54) + fVar55);
                      }
                      else {
                        fVar56 = (float)FUN_ram_40000e84(fVar52);
                        fStack_c8 = fVar54 * (fVar56 + fVar56) + fVar55;
                        fVar53 = (fVar52 + fVar52) * (-(fVar49 * fVar50) + fVar69);
                        fVar56 = (float)FUN_ram_40000e84(fVar52);
                        pfStack_d0 = (float *)(fVar50 + fVar48);
                        fVar55 = -((fVar56 + fVar56) * fVar54) + fVar55;
                        fVar48 = (float)FUN_ram_40000e84(fVar52);
                        fVar48 = fVar48 + fVar48;
                        fVar56 = (fVar49 * fVar50 + fVar69) * DAT_ram_40092834;
LAB_ram_400874be:
                        fStack_c8 = fVar52 * fStack_c8;
                        fVar55 = fVar55 * fVar52;
                        fVar50 = fVar54 * fVar48 + (float)pfStack_d0;
                        fVar48 = (float)FUN_ram_40000e84(fVar52);
                        fVar48 = fVar48 + fVar48;
                      }
                    }
                    else {
                      fVar55 = fVar50 + fVar48;
                      if (*piVar33 < 0x100 && fVar52 < 0.0) {
                        fVar56 = (float)FUN_ram_40000e84(fVar52);
                        fStack_c8 = (fVar56 + fVar56) * fVar54 + fVar55;
                        fVar53 = fVar52 * DAT_ram_40092834 * (fVar49 * fVar50 + fVar69);
                        fVar56 = (float)FUN_ram_40000e84(fVar52);
                        pfStack_d0 = (float *)(fVar50 - fVar48);
                        fVar55 = -(fVar54 * (fVar56 + fVar56)) + fVar55;
                        fVar48 = (float)FUN_ram_40000e84(fVar52);
                        fVar69 = -(fVar49 * fVar50) + fVar69;
                        fVar48 = fVar48 + fVar48;
                        fVar56 = fVar69 + fVar69;
                        goto LAB_ram_400874be;
                      }
                      fVar56 = -(fVar49 * fVar50) + fVar69;
                      pfStack_d0 = (float *)(fVar50 - fVar48);
                      fVar56 = fVar56 + fVar56;
                      fVar53 = fVar52 * DAT_ram_40092834 * (fVar49 * fVar50 + fVar69);
                      fVar48 = SQRT(fVar52) + SQRT(fVar52);
                      fVar50 = fVar54 * fVar48 + (float)pfStack_d0;
                      fStack_c8 = fVar52 * (fVar54 * fVar48 + fVar55);
                      fVar55 = fVar52 * (-(fVar54 * fVar48) + fVar55);
                    }
                    fVar48 = -(fVar54 * fVar48) + (float)pfStack_d0;
                    iVar12 = *(int *)(iVar38 + 0x50);
                    uVar34 = *(uint *)(iVar38 + 0x54);
                  }
                  piVar33[9] = (int)(fVar56 / fVar50);
                  piVar33[0x11] = (int)-(fVar56 / fVar50);
                  piVar33[10] = (int)(fVar48 / fVar50);
                  piVar33[0x12] = (int)-(fVar48 / fVar50);
                  piVar33[6] = (int)(fStack_c8 / fVar50);
                  piVar33[0xe] = (int)(fStack_c8 / fVar50);
                  piVar33[7] = (int)(fVar53 / fVar50);
                  piVar33[0xf] = (int)(fVar53 / fVar50);
                  piVar33[8] = (int)(fVar55 / fVar50);
                  piVar33[0x10] = (int)(fVar55 / fVar50);
                }
              }
              uVar27 = uVar27 + 1;
              iVar17 = iVar17 + 0x54;
            } while (uVar27 < uVar34);
          }
          *(undefined1 *)(iVar38 + 0x80) = 1;
          *(float *)(iVar38 + 0x84) = (float)uVar68;
          *(float *)(iVar38 + 0x88) = (float)uVar66;
          *(float *)(iVar38 + 0x8c) = fVar63;
          in_register_00000100 = fVar51;
        }
        else {
          iVar12 = *(int *)(iVar38 + 0x50);
        }
        if (iVar12 != 0) {
          iVar17 = *(int *)(iVar38 + 0x54);
          if (iVar17 == 2) {
            fVar63 = *(float *)(iVar12 + 0x38);
            fVar57 = *(float *)(iVar12 + 0x3c);
            fVar51 = *(float *)(iVar12 + 0x40);
            fVar50 = *(float *)(iVar12 + 0x44);
            fVar48 = *(float *)(iVar12 + 0x48);
            fVar49 = *(float *)(iVar12 + 0x8c);
            fVar55 = *(float *)(iVar12 + 0x90);
            fVar56 = *(float *)(iVar12 + 0x94);
            fVar53 = *(float *)(iVar12 + 0x98);
            fVar54 = *(float *)(iVar12 + 0x9c);
            fVar52 = *(float *)(iVar12 + 0x4c);
            fVar69 = *(float *)(iVar12 + 0x50);
            fVar61 = *(float *)(iVar12 + 0xa0);
            fVar60 = *(float *)(iVar12 + 0xa4);
            if (param_3 != uVar11) {
              uVar34 = 0;
              pfVar37 = pfVar10;
              do {
                uVar34 = uVar34 + 1;
                fVar59 = (float)*(undefined8 *)pfVar37;
                fVar71 = fVar63 * fVar59 + fVar52;
                fVar70 = fVar49 * fVar71 + fVar61;
                fVar52 = fVar50 * fVar71 + fVar57 * fVar59 + fVar69;
                *pfVar37 = fVar70;
                fVar69 = fVar51 * fVar59 + fVar48 * fVar71;
                fVar61 = fVar53 * fVar70 + fVar55 * fVar71 + fVar60;
                fVar60 = fVar56 * fVar71 + fVar54 * fVar70;
                pfVar37 = pfVar37 + 1;
              } while (uVar34 < uVar43);
            }
            *(float *)(iVar12 + 0x4c) = fVar52;
            *(float *)(iVar12 + 0x50) = fVar69;
            *(float *)(iVar12 + 0xa0) = fVar61;
            *(float *)(iVar12 + 0xa4) = fVar60;
          }
          else if (iVar17 == 3) {
            fVar63 = *(float *)(iVar12 + 0x38);
            fVar57 = *(float *)(iVar12 + 0x3c);
            fVar51 = *(float *)(iVar12 + 0x40);
            fVar50 = *(float *)(iVar12 + 0x44);
            fVar48 = *(float *)(iVar12 + 0x48);
            fVar49 = *(float *)(iVar12 + 0x8c);
            fVar55 = *(float *)(iVar12 + 0x90);
            fVar56 = *(float *)(iVar12 + 0x94);
            fVar53 = *(float *)(iVar12 + 0x98);
            fVar54 = *(float *)(iVar12 + 0x9c);
            fVar52 = *(float *)(iVar12 + 0xe0);
            fVar69 = *(float *)(iVar12 + 0xe4);
            fVar61 = *(float *)(iVar12 + 0xe8);
            fVar60 = *(float *)(iVar12 + 0xec);
            fVar71 = *(float *)(iVar12 + 0xf0);
            fVar70 = *(float *)(iVar12 + 0x4c);
            fVar59 = *(float *)(iVar12 + 0x50);
            fVar44 = *(float *)(iVar12 + 0xa0);
            fVar58 = *(float *)(iVar12 + 0xa4);
            fVar45 = *(float *)(iVar12 + 0xf4);
            fVar64 = *(float *)(iVar12 + 0xf8);
            if (param_3 != uVar11) {
              uVar34 = 0;
              pfVar37 = pfVar10;
              do {
                fVar9 = *pfVar37;
                uVar34 = uVar34 + 1;
                fVar15 = fVar63 * fVar9 + fVar70;
                fVar30 = fVar49 * fVar15 + fVar44;
                fVar70 = fVar50 * fVar15 + fVar57 * fVar9 + fVar59;
                fVar3 = fVar52 * fVar30 + fVar45;
                fVar59 = fVar51 * fVar9 + fVar48 * fVar15;
                fVar44 = fVar53 * fVar30 + fVar55 * fVar15 + fVar58;
                *pfVar37 = fVar3;
                fVar45 = fVar60 * fVar3 + fVar69 * fVar30 + fVar64;
                fVar58 = fVar56 * fVar15 + fVar54 * fVar30;
                fVar64 = fVar61 * fVar30 + fVar71 * fVar3;
                pfVar37 = pfVar37 + 1;
              } while (uVar34 < uVar43);
            }
            *(float *)(iVar12 + 0x4c) = fVar70;
            *(float *)(iVar12 + 0x50) = fVar59;
            *(float *)(iVar12 + 0xa0) = fVar44;
            *(float *)(iVar12 + 0xa4) = fVar58;
            *(float *)(iVar12 + 0xf4) = fVar45;
            *(float *)(iVar12 + 0xf8) = fVar64;
          }
          else {
            iVar41 = 0;
            uVar34 = 0;
            if (iVar17 != 0) {
              while( true ) {
                FUN_ram_400905e4(iVar12 + iVar41 + 0x2c,pfVar10,pfVar10,uVar43);
                uVar34 = uVar34 + 1;
                iVar41 = iVar41 + 0x54;
                if (*(uint *)(iVar38 + 0x54) <= uVar34) break;
                iVar12 = *(int *)(iVar38 + 0x50);
              }
            }
          }
        }
      }
LAB_ram_40084b3c:
      fVar63 = *(float *)(param_1 + 0x20);
      if ((*(char *)(iVar38 + 0x13c) == '\0') || (fVar1 < ABS(fVar63 - *(float *)(iVar38 + 0x140))))
      {
        fVar57 = fVar63 * *(float *)(iVar38 + 0x138);
        if (fVar1 < ABS(fVar57 + *(float *)(iVar38 + 0x9c))) {
          fVar51 = -fVar57;
          *(float *)(iVar38 + 0x9c) = fVar51;
          if (0.0 < *(float *)(iVar38 + 0xa4)) {
            fVar50 = (*(float *)(iVar38 + 0x94) * DAT_ram_400980f4) / *(float *)(iVar38 + 0xa4);
            fVar48 = (float)FUN_ram_40000786(fVar50);
            fVar50 = (float)FUN_ram_40000a08(fVar50);
            iVar12 = *(int *)(iVar38 + 0x90);
            if (iVar12 == 2) {
              fVar54 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar51 / DAT_ram_400930dc);
              fVar49 = fVar48 * DAT_ram_40092834;
              fVar50 = fVar50 / (*(float *)(iVar38 + 0x98) + *(float *)(iVar38 + 0x98));
              fVar51 = fVar54 * fVar50 + fVar28;
              fVar56 = fVar50 / fVar54 + fVar28;
              fVar55 = fVar28 - fVar50 / fVar54;
              fVar53 = fVar49;
              fStack_dc = -(fVar54 * fVar50) + fVar28;
            }
            else if (iVar12 - 3U < 2) {
              fVar50 = fVar50 / (*(float *)(iVar38 + 0x98) + *(float *)(iVar38 + 0x98));
              if (iVar12 == 3) {
                fVar49 = fVar28 - fVar48;
                fVar51 = fVar49;
              }
              else {
                fVar51 = fVar48 + fVar28;
                fVar49 = -fVar51;
              }
              fVar51 = fVar51 * DAT_ram_40092864;
              fVar56 = fVar50 + fVar28;
              fVar55 = fVar28 - fVar50;
              fVar53 = fVar48 * DAT_ram_40092834;
              fStack_dc = fVar51;
            }
            else {
              fVar54 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar51 / DAT_ram_400930dc);
              fVar50 = fVar50 * DAT_ram_40092864;
              fVar51 = (fVar28 / fVar54 + fVar54) * (fVar28 / *(float *)(iVar38 + 0xa0) - fVar28) +
                       (float)PTR_firmware_entry_ram_40092830;
              if (extraout_a3_01 < 0x100 && fVar51 < 0.0) {
                fVar51 = (float)FUN_ram_40000e84();
              }
              else {
                fVar51 = SQRT(fVar51);
              }
              fVar69 = fVar54 - fVar28;
              fVar50 = fVar50 * fVar51;
              fVar52 = fVar54 + fVar28;
              fVar55 = fVar48 * fVar69;
              if (*(int *)(iVar38 + 0x90) == 0) {
                fStack_dc = fVar52 - fVar55;
                if (fVar54 < 0.0) {
                  fVar51 = (float)FUN_ram_40000e84(fVar54);
                  fVar51 = fVar50 * (fVar51 + fVar51) + fStack_dc;
                  fVar49 = (fVar54 + fVar54) * (-(fVar48 * fVar52) + fVar69);
                  fVar56 = (float)FUN_ram_40000e84(fVar54);
                  pfStack_d4 = (float *)(fVar52 + fVar55);
                  fStack_dc = -((fVar56 + fVar56) * fVar50) + fStack_dc;
                  fVar55 = (float)FUN_ram_40000e84(fVar54);
                  fVar56 = (fVar55 + fVar55) * fVar50 + (float)pfStack_d4;
                  fVar53 = (fVar48 * fVar52 + fVar69) * DAT_ram_40092834;
LAB_ram_40087408:
                  fStack_dc = fVar54 * fStack_dc;
                  fVar51 = fVar54 * fVar51;
                  fVar48 = (float)FUN_ram_40000e84(fVar54);
                  fVar55 = -(fVar50 * (fVar48 + fVar48)) + (float)pfStack_d4;
                  goto LAB_ram_40084fbe;
                }
                fVar55 = fVar52 + fVar55;
                fVar49 = (fVar54 + fVar54) * (-(fVar48 * fVar52) + fVar69);
                fVar53 = (fVar48 * fVar52 + fVar69) * DAT_ram_40092834;
              }
              else {
                fStack_dc = fVar52 + fVar55;
                if (*(int *)(iVar38 + 0x90) < 0x100 && fVar54 < 0.0) {
                  fVar51 = (float)FUN_ram_40000e84(fVar54);
                  fVar51 = (fVar51 + fVar51) * fVar50 + fStack_dc;
                  fVar49 = fVar54 * DAT_ram_40092834 * (fVar48 * fVar52 + fVar69);
                  fVar56 = (float)FUN_ram_40000e84(fVar54);
                  pfStack_d4 = (float *)(fVar52 - fVar55);
                  fStack_dc = -((fVar56 + fVar56) * fVar50) + fStack_dc;
                  fVar55 = (float)FUN_ram_40000e84(fVar54);
                  fVar69 = -(fVar48 * fVar52) + fVar69;
                  fVar56 = fVar50 * (fVar55 + fVar55) + (float)pfStack_d4;
                  fVar53 = fVar69 + fVar69;
                  goto LAB_ram_40087408;
                }
                fVar53 = -(fVar48 * fVar52) + fVar69;
                fVar55 = fVar52 - fVar55;
                fVar53 = fVar53 + fVar53;
                fVar49 = fVar54 * DAT_ram_40092834 * (fVar48 * fVar52 + fVar69);
              }
              fVar48 = SQRT(fVar54) + SQRT(fVar54);
              fVar56 = fVar50 * fVar48 + fVar55;
              fVar55 = -(fVar50 * fVar48) + fVar55;
              fVar51 = fVar54 * (fVar50 * fVar48 + fStack_dc);
              fStack_dc = fVar54 * (-(fVar50 * fVar48) + fStack_dc);
            }
LAB_ram_40084fbe:
            *(float *)(iVar38 + 0xb4) = fVar53 / fVar56;
            *(float *)(iVar38 + 0xd4) = -(fVar53 / fVar56);
            *(float *)(iVar38 + 0xb8) = fVar55 / fVar56;
            *(float *)(iVar38 + 0xd8) = -(fVar55 / fVar56);
            *(float *)(iVar38 + 0xa8) = fVar51 / fVar56;
            *(float *)(iVar38 + 200) = fVar51 / fVar56;
            *(float *)(iVar38 + 0xac) = fVar49 / fVar56;
            *(float *)(iVar38 + 0xcc) = fVar49 / fVar56;
            *(float *)(iVar38 + 0xb0) = fStack_dc / fVar56;
            *(float *)(iVar38 + 0xd0) = fStack_dc / fVar56;
          }
        }
        if (fVar1 < ABS(*(float *)(iVar38 + 0xf0) - fVar57)) {
          *(float *)(iVar38 + 0xf0) = fVar57;
          if (0.0 < *(float *)(iVar38 + 0xf8)) {
            fVar51 = (*(float *)(iVar38 + 0xe8) * DAT_ram_400980f4) / *(float *)(iVar38 + 0xf8);
            fVar50 = (float)FUN_ram_40000786(fVar51);
            fVar51 = (float)FUN_ram_40000a08(fVar51);
            iVar12 = *(int *)(iVar38 + 0xe4);
            if (iVar12 == 2) {
              fVar56 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar57 / DAT_ram_400930dc);
              fVar49 = fVar50 * DAT_ram_40092834;
              fVar51 = fVar51 / (*(float *)(iVar38 + 0xec) + *(float *)(iVar38 + 0xec));
              fVar48 = fVar56 * fVar51 + fVar28;
              fVar55 = -(fVar56 * fVar51) + fVar28;
              fVar57 = fVar51 / fVar56 + fVar28;
              fVar51 = fVar28 - fVar51 / fVar56;
              fVar50 = fVar49;
            }
            else if (iVar12 - 3U < 2) {
              fVar51 = fVar51 / (*(float *)(iVar38 + 0xec) + *(float *)(iVar38 + 0xec));
              if (iVar12 == 3) {
                fVar49 = fVar28 - fVar50;
                fVar48 = fVar49;
              }
              else {
                fVar49 = -(fVar50 + fVar28);
                fVar48 = fVar50 + fVar28;
              }
              fVar48 = fVar48 * DAT_ram_40092864;
              fVar57 = fVar51 + fVar28;
              fVar51 = fVar28 - fVar51;
              fVar50 = fVar50 * DAT_ram_40092834;
              fVar55 = fVar48;
            }
            else {
              fVar53 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar57 / DAT_ram_400930dc);
              fVar51 = fVar51 * DAT_ram_40092864;
              fVar56 = (fVar28 / fVar53 + fVar53) * (fVar28 / *(float *)(iVar38 + 0xf4) - fVar28) +
                       (float)PTR_firmware_entry_ram_40092830;
              if (extraout_a3_00 < 0x100 && fVar56 < 0.0) {
                fVar56 = (float)FUN_ram_40000e84();
              }
              else {
                fVar56 = SQRT(fVar56);
              }
              fVar52 = fVar53 - fVar28;
              fVar56 = fVar56 * fVar51;
              fVar54 = fVar53 + fVar28;
              fVar51 = fVar50 * fVar52;
              if (*(int *)(iVar38 + 0xe4) == 0) {
                fVar55 = fVar54 - fVar51;
                if (fVar53 < 0.0) {
                  fVar57 = (float)FUN_ram_40000e84(fVar53);
                  fVar48 = fVar53 * (fVar56 * (fVar57 + fVar57) + fVar55);
                  fVar49 = (fVar53 + fVar53) * (-(fVar50 * fVar54) + fVar52);
                  fVar57 = (float)FUN_ram_40000e84(fVar53);
                  fVar55 = (-((fVar57 + fVar57) * fVar56) + fVar55) * fVar53;
                  fVar57 = (float)FUN_ram_40000e84(fVar53);
                  fVar57 = (fVar57 + fVar57) * fVar56 + fVar54 + fVar51;
                  fVar50 = (fVar50 * fVar54 + fVar52) * DAT_ram_40092834;
                  fVar53 = (float)FUN_ram_40000e84(fVar53);
                  fVar51 = -(fVar56 * (fVar53 + fVar53)) + fVar54 + fVar51;
                }
                else {
                  fVar49 = (fVar53 + fVar53) * (-(fVar50 * fVar54) + fVar52);
                  fVar69 = SQRT(fVar53) + SQRT(fVar53);
                  fVar57 = fVar56 * fVar69 + fVar54 + fVar51;
                  fVar51 = -(fVar56 * fVar69) + fVar54 + fVar51;
                  fVar48 = fVar53 * (fVar56 * fVar69 + fVar55);
                  fVar55 = fVar53 * (-(fVar56 * fVar69) + fVar55);
                  fVar50 = (fVar50 * fVar54 + fVar52) * DAT_ram_40092834;
                }
              }
              else {
                fVar55 = fVar54 + fVar51;
                if (*(int *)(iVar38 + 0xe4) < 0x100 && fVar53 < 0.0) {
                  fVar57 = (float)FUN_ram_40000e84(fVar53);
                  fVar48 = ((fVar57 + fVar57) * fVar56 + fVar55) * fVar53;
                  fVar49 = fVar53 * DAT_ram_40092834 * (fVar50 * fVar54 + fVar52);
                  fVar57 = (float)FUN_ram_40000e84(fVar53);
                  fVar55 = fVar53 * (-(fVar56 * (fVar57 + fVar57)) + fVar55);
                  fVar57 = (float)FUN_ram_40000e84(fVar53);
                  fVar52 = -(fVar50 * fVar54) + fVar52;
                  fVar57 = fVar56 * (fVar57 + fVar57) + (fVar54 - fVar51);
                  fVar50 = (float)FUN_ram_40000e84(fVar53);
                  fVar51 = -(fVar56 * (fVar50 + fVar50)) + (fVar54 - fVar51);
                  fVar50 = fVar52 + fVar52;
                }
                else {
                  fVar69 = -(fVar50 * fVar54) + fVar52;
                  fVar49 = fVar53 * DAT_ram_40092834 * (fVar50 * fVar54 + fVar52);
                  fVar50 = SQRT(fVar53) + SQRT(fVar53);
                  fVar57 = fVar50 * fVar56 + (fVar54 - fVar51);
                  fVar51 = -(fVar56 * fVar50) + (fVar54 - fVar51);
                  fVar48 = (fVar50 * fVar56 + fVar55) * fVar53;
                  fVar55 = fVar53 * (-(fVar50 * fVar56) + fVar55);
                  fVar50 = fVar69 + fVar69;
                }
              }
            }
            *(float *)(iVar38 + 0x108) = fVar50 / fVar57;
            *(float *)(iVar38 + 0x128) = -(fVar50 / fVar57);
            *(float *)(iVar38 + 0x10c) = fVar51 / fVar57;
            *(float *)(iVar38 + 300) = -(fVar51 / fVar57);
            *(float *)(iVar38 + 0xfc) = fVar48 / fVar57;
            *(float *)(iVar38 + 0x11c) = fVar48 / fVar57;
            *(float *)(iVar38 + 0x100) = fVar49 / fVar57;
            *(float *)(iVar38 + 0x120) = fVar49 / fVar57;
            *(float *)(iVar38 + 0x104) = fVar55 / fVar57;
            *(float *)(iVar38 + 0x124) = fVar55 / fVar57;
          }
        }
        *(float *)(iVar38 + 0x140) = fVar63;
        *(undefined1 *)(iVar38 + 0x13c) = 1;
      }
      FUN_ram_400905e4(iVar38 + 0xbc,pfVar10,pfVar10,uVar43);
      FUN_ram_400905e4(iVar38 + 0x110,pfVar10,pfVar10,uVar43);
      uVar47 = *(undefined8 *)(param_1 + 0x1c);
      uStack_b0 = (undefined1)uVar47;
      uStack_af = (undefined1)((ulonglong)uVar47 >> 8);
      uStack_ae = (undefined1)((ulonglong)uVar47 >> 0x10);
      uStack_ad = (undefined1)((ulonglong)uVar47 >> 0x18);
      FUN_ram_4009057c(*(undefined8 *)(param_1 + 0x18),pfVar10,pfVar10,uVar43);
      if ((*(char *)(iVar38 + 0x23c) == '\0') ||
         (fVar1 < ABS((float)uVar47 - *(float *)(iVar38 + 0x240)))) {
        fVar63 = DAT_ram_40092864;
        if ((*(int *)(iVar38 + 0x19c) != 0) &&
           (((puVar19 = *(undefined1 **)(iVar38 + 0x1a0), puVar19 != (undefined1 *)0x0 &&
             (*(int *)(iVar38 + 0x1a8) != 0)) && (*(int *)(iVar38 + 0x1a4) != 0)))) {
          iVar12 = *(int *)(iVar38 + 0x228);
          uVar27 = *(uint *)(iVar38 + 0x22c);
          *puVar19 = uStack_b0;
          puVar19[1] = uStack_af;
          puVar19[2] = uStack_ae;
          puVar19[3] = uStack_ad;
          fVar51 = DAT_ram_4009935c;
          fVar57 = DAT_ram_40092850;
          uVar34 = *(uint *)(iVar38 + 0x19c);
          pfVar37 = *(float **)(iVar38 + 0x1a0);
          if (uVar34 == 0) {
            if ((iVar12 != 0) && (uVar27 != 0)) {
              uVar29 = 1;
              goto LAB_ram_40085766;
            }
          }
          else {
            uVar29 = 1;
            uVar36 = 0;
            uVar42 = *(uint *)(iVar38 + 0x1a4);
            uVar31 = *(uint *)(iVar38 + 0x1ac);
            pfVar23 = *(float **)(iVar38 + 0x1a8);
            pfVar35 = pfVar37;
            do {
              uVar32 = *(uint *)(*(int *)(iVar38 + 0x198) + uVar36 * 0x1c);
              iVar17 = *(int *)(iVar38 + 0x198) + uVar36 * 0x1c;
              uVar39 = uVar42;
              pfVar20 = pfVar23;
              pfVar37 = pfVar35;
              if (uVar32 == 2) {
                if (uVar29 != 0) {
                  pfVar23 = pfVar35;
                  do {
                    fVar50 = (float)*(undefined8 *)pfVar23;
                    fVar63 = _DAT_ram_300833dc;
                    if ((fVar57 < fVar50) && (fVar63 = _DAT_ram_30083bd8, fVar50 < fVar7)) {
                      fVar63 = (fVar50 + fVar7) * DAT_ram_40099358;
                      uVar42 = (uint)(-1 < (int)fVar63) * (int)fVar63;
                      fVar63 = (fVar63 - (float)uVar42) *
                               ((float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar42 + 0x201) * 4) -
                               *(float *)(&DAT_ram_30082bdc + (uVar42 + 0x200) * 4)) +
                               *(float *)(&DAT_ram_30082bdc + (uVar42 + 0x200) * 4);
                    }
                    pfVar21 = pfVar23 + 1;
                    *pfVar23 = fVar63;
                    pfVar23 = pfVar21;
                  } while (pfVar21 != pfVar35 + uVar29);
                }
              }
              else if (uVar32 < 3) {
                if (uVar32 == 0) {
                  uVar32 = (uint)*(ushort *)(iVar17 + 8);
                  if (((uVar32 != 0) && (uVar22 = (uint)*(ushort *)(iVar17 + 10), uVar22 != 0)) &&
                     (iVar41 = *(int *)(iVar17 + 0xc), iVar41 != 0)) {
                    fVar63 = DAT_ram_40092864;
                    if ((uVar31 < uVar32) || (uVar42 < uVar29)) goto LAB_ram_40084bf0;
                    if (uVar22 <= uVar29) {
                      uVar29 = uVar22;
                    }
                    uVar39 = uVar31;
                    uVar31 = uVar42;
                    pfVar20 = pfVar35;
                    pfVar37 = pfVar23;
                    if (uVar29 == 0) {
                      uVar22 = *(uint *)(iVar17 + 0x18);
                      uVar42 = 0;
                      do {
                        while (iVar41 = uVar42 * 4, uVar42 < uVar22) {
                          uVar42 = uVar42 + 1;
                          *pfVar23 = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41);
                          pfVar23 = pfVar23 + 1;
                          uVar29 = uVar32;
                          if (uVar32 <= (uVar42 & 0xffff)) goto LAB_ram_400853fc;
                        }
                        uVar42 = uVar42 + 1;
                        *pfVar23 = 0.0;
                        pfVar23 = pfVar23 + 1;
                        uVar29 = uVar32;
                      } while ((uVar42 & 0xffff) < uVar32);
                    }
                    else {
                      uVar42 = *(uint *)(iVar17 + 0x18);
                      if (pfVar35 == (float *)0x0) {
                        uVar22 = 0;
                        do {
                          while (iVar41 = uVar22 * 4, uVar22 < uVar42) {
                            uVar22 = uVar22 + 1;
                            *pfVar23 = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41) +
                                       0.0;
                            pfVar23 = pfVar23 + 1;
                            uVar29 = uVar32;
                            if (uVar32 <= (uVar22 & 0xffff)) goto LAB_ram_400853fc;
                          }
                          uVar22 = uVar22 + 1;
                          *pfVar23 = 0.0;
                          pfVar23 = pfVar23 + 1;
                          uVar29 = uVar32;
                        } while ((uVar22 & 0xffff) < uVar32);
                      }
                      else {
                        iVar26 = 0;
                        uVar34 = 0;
                        do {
                          while( true ) {
                            fVar63 = 0.0;
                            if (uVar34 < uVar42) {
                              fVar63 = *(float *)(*(int *)(iVar17 + 0x14) + uVar34 * 4);
                            }
                            if (iVar41 + iVar26 == 0) break;
                            uStack_ac = 0;
                            uStack_ab = 0;
                            uStack_aa = 0;
                            uStack_a9 = 0;
                            FUN_ram_4009051c(iVar41 + iVar26,pfVar35,uVar29,&uStack_ac);
                            uVar34 = uVar34 + 1;
                            *pfVar23 = (float)CONCAT13(uStack_a9,
                                                       CONCAT12(uStack_aa,
                                                                CONCAT11(uStack_ab,uStack_ac))) +
                                       fVar63;
                            iVar26 = iVar26 + uVar22 * 4;
                            if (uVar32 <= (uVar34 & 0xffff)) goto LAB_ram_4008691c;
                            iVar41 = *(int *)(iVar17 + 0xc);
                            uVar42 = *(uint *)(iVar17 + 0x18);
                            pfVar23 = pfVar23 + 1;
                          }
                          uVar34 = uVar34 + 1;
                          iVar26 = iVar26 + uVar22 * 4;
                          *pfVar23 = fVar63 + 0.0;
                          pfVar23 = pfVar23 + 1;
                        } while ((uVar34 & 0xffff) < uVar32);
LAB_ram_4008691c:
                        uVar34 = *(uint *)(iVar38 + 0x19c);
                        uVar29 = uVar32;
                      }
                    }
                  }
                }
                else {
                  fVar63 = *(float *)(iVar17 + 4);
                  if (uVar29 != 0) {
                    pfVar23 = pfVar35;
                    do {
                      while ((float)*(undefined8 *)pfVar23 < 0.0) {
                        pfVar21 = pfVar23 + 1;
                        *pfVar23 = fVar63 * (float)*(undefined8 *)pfVar23;
                        pfVar23 = pfVar21;
                        if (pfVar35 + uVar29 == pfVar21) goto LAB_ram_400853fc;
                      }
                      pfVar23 = pfVar23 + 1;
                    } while (pfVar23 != pfVar35 + uVar29);
                  }
                }
              }
              else if ((uVar32 == 3) && (pfVar23 = pfVar35, uVar29 != 0)) {
                do {
                  fVar50 = (float)*(undefined8 *)pfVar23;
                  fVar63 = _DAT_ram_30082bd8;
                  if ((fVar46 < fVar50) && (fVar63 = _DAT_ram_300833d4, fVar50 < fVar8)) {
                    fVar63 = (fVar50 + fVar8) * fVar51;
                    uVar42 = (uint)(-1 < (int)fVar63) * (int)fVar63;
                    iVar17 = uVar42 * 4;
                    fVar63 = (fVar63 - (float)uVar42) *
                             (*(float *)(&DAT_ram_30082bdc + iVar17) -
                             *(float *)(&DAT_ram_30082bd8 + iVar17)) +
                             *(float *)(&DAT_ram_30082bd8 + iVar17);
                  }
                  pfVar21 = pfVar23 + 1;
                  *pfVar23 = fVar63;
                  pfVar23 = pfVar21;
                } while (pfVar21 != pfVar35 + uVar29);
              }
LAB_ram_400853fc:
              uVar36 = uVar36 + 1;
              uVar42 = uVar39;
              pfVar23 = pfVar20;
              pfVar35 = pfVar37;
            } while (uVar36 < uVar34);
            if ((iVar12 != 0) && (uVar27 != 0)) {
LAB_ram_40085766:
              if (uVar27 < uVar29) {
                uVar29 = uVar27;
              }
              FUN_ram_4000305c(iVar12,pfVar37,uVar29 << 2);
            }
            fVar63 = DAT_ram_40092864;
            if (uVar29 == 0) goto LAB_ram_40084bf0;
          }
          fVar63 = DAT_ram_40092864;
          if (*(undefined8 **)(iVar38 + 0x228) != (undefined8 *)0x0) {
            fVar63 = (float)**(undefined8 **)(iVar38 + 0x228);
          }
        }
LAB_ram_40084bf0:
        fVar63 = (*(float *)(iVar38 + 0x234) - *(float *)(iVar38 + 0x230)) * fVar63 +
                 *(float *)(iVar38 + 0x230);
        if (fVar1 < ABS(*(float *)(iVar38 + 0x150) - fVar63)) {
          *(float *)(iVar38 + 0x150) = fVar63;
          FUN_ram_4007fb52(iVar38 + 0x144);
        }
        *(float *)(iVar38 + 0x240) = (float)uVar47;
        *(undefined1 *)(iVar38 + 0x23c) = 1;
      }
      FUN_ram_400905e4(iVar38 + 0x170,pfVar10,pfVar10,uVar43);
      fVar51 = DAT_ram_4009935c;
      fVar57 = DAT_ram_400930e8;
      fVar63 = _DAT_ram_300833d4;
      fVar1 = *(float *)(iVar38 + 0x238);
      uVar62 = (ulonglong)(uint)_DAT_ram_30082bd8;
      pfVar35 = (float *)(iVar38 + 0x244);
      uVar34 = 0;
      pfVar37 = pfVar10;
      pfVar23 = pfVar35;
      do {
        uVar34 = uVar34 + 1;
        fVar50 = fVar1 * (float)*(undefined8 *)pfVar37;
        pfVar37 = pfVar37 + 1;
        uVar67 = uVar62;
        if ((fVar46 < fVar50) && (uVar67 = (ulonglong)(uint)fVar63, fVar50 < fVar57)) {
          fVar50 = (fVar50 + fVar57) * fVar51;
          uVar27 = (uint)(-1 < (int)fVar50) * (int)fVar50;
          iVar12 = uVar27 * 4;
          uVar67 = (ulonglong)
                   (uint)((fVar50 - (float)uVar27) *
                          (*(float *)(&DAT_ram_30082bdc + iVar12) -
                          *(float *)(&DAT_ram_30082bd8 + iVar12)) +
                         *(float *)(&DAT_ram_30082bd8 + iVar12));
        }
        *(ulonglong *)pfVar23 = uVar67;
        pfVar23[0x80] = -(float)uVar67;
        pfVar23 = pfVar23 + 1;
      } while (uVar34 < uVar43);
      FUN_ram_3004599c(iVar38 + 0x1b0,pfVar35,uVar43);
      FUN_ram_3004503a(fVar28,fVar28,0,iVar38 + 0x1c0,pfVar35,uVar43,0);
      iVar12 = *(int *)(iVar38 + 0x1b8);
      if (iVar12 != 0) {
        iVar17 = *(int *)(iVar38 + 0x1bc);
        if (iVar17 == 2) {
          fVar1 = *(float *)(iVar12 + 0x38);
          fVar63 = *(float *)(iVar12 + 0x3c);
          fVar57 = *(float *)(iVar12 + 0x40);
          fVar51 = *(float *)(iVar12 + 0x44);
          fVar50 = *(float *)(iVar12 + 0x48);
          fVar48 = *(float *)(iVar12 + 0x8c);
          fVar49 = *(float *)(iVar12 + 0x90);
          fVar55 = *(float *)(iVar12 + 0x94);
          fVar56 = *(float *)(iVar12 + 0x98);
          fVar53 = *(float *)(iVar12 + 0x9c);
          uVar62 = *(ulonglong *)(iVar12 + 0x4c);
          uVar67 = *(ulonglong *)(iVar12 + 0x50);
          fVar54 = *(float *)(iVar12 + 0xa0);
          fVar52 = *(float *)(iVar12 + 0xa4);
          if (param_3 != uVar11) {
            uVar34 = 0;
            pfVar37 = pfVar35;
            do {
              fVar69 = *pfVar37;
              uVar34 = uVar34 + 1;
              fVar61 = fVar1 * fVar69 + (float)uVar62;
              fVar60 = fVar48 * fVar61 + fVar54;
              uVar62 = (ulonglong)(uint)(fVar51 * fVar61 + fVar63 * fVar69 + (float)uVar67);
              *pfVar37 = fVar60;
              uVar67 = (ulonglong)(uint)(fVar57 * fVar69 + fVar50 * fVar61);
              fVar54 = fVar56 * fVar60 + fVar49 * fVar61 + fVar52;
              fVar52 = fVar55 * fVar61 + fVar53 * fVar60;
              pfVar37 = pfVar37 + 1;
            } while (uVar34 < uVar43);
          }
          *(ulonglong *)(iVar12 + 0x4c) = uVar62;
          *(ulonglong *)(iVar12 + 0x50) = uVar67;
          *(float *)(iVar12 + 0xa0) = fVar54;
          *(float *)(iVar12 + 0xa4) = fVar52;
        }
        else if (iVar17 == 3) {
          fVar1 = *(float *)(iVar12 + 0x38);
          fVar63 = *(float *)(iVar12 + 0x3c);
          fVar57 = *(float *)(iVar12 + 0x40);
          fVar51 = *(float *)(iVar12 + 0x44);
          fVar50 = *(float *)(iVar12 + 0x48);
          fVar48 = *(float *)(iVar12 + 0x8c);
          fVar49 = *(float *)(iVar12 + 0x90);
          fVar55 = *(float *)(iVar12 + 0x94);
          fVar56 = *(float *)(iVar12 + 0x98);
          fVar53 = *(float *)(iVar12 + 0x9c);
          fVar54 = *(float *)(iVar12 + 0xe0);
          fVar52 = *(float *)(iVar12 + 0xe4);
          fVar69 = *(float *)(iVar12 + 0xe8);
          fVar61 = *(float *)(iVar12 + 0xec);
          fVar60 = *(float *)(iVar12 + 0xf0);
          fVar71 = *(float *)(iVar12 + 0x4c);
          uVar62 = *(ulonglong *)(iVar12 + 0x50);
          fVar70 = *(float *)(iVar12 + 0xa0);
          fVar59 = *(float *)(iVar12 + 0xa4);
          fVar44 = *(float *)(iVar12 + 0xf4);
          fVar58 = *(float *)(iVar12 + 0xf8);
          if (param_3 != uVar11) {
            uVar34 = 0;
            pfVar37 = pfVar35;
            do {
              fVar45 = *pfVar37;
              uVar34 = uVar34 + 1;
              fVar64 = fVar1 * fVar45 + fVar71;
              fVar9 = fVar48 * fVar64 + fVar70;
              fVar71 = fVar51 * fVar64 + fVar63 * fVar45 + (float)uVar62;
              fVar15 = fVar54 * fVar9 + fVar44;
              uVar62 = (ulonglong)(uint)(fVar57 * fVar45 + fVar50 * fVar64);
              fVar70 = fVar56 * fVar9 + fVar49 * fVar64 + fVar59;
              *pfVar37 = fVar15;
              fVar44 = fVar61 * fVar15 + fVar52 * fVar9 + fVar58;
              fVar59 = fVar55 * fVar64 + fVar53 * fVar9;
              fVar58 = fVar69 * fVar9 + fVar60 * fVar15;
              pfVar37 = pfVar37 + 1;
            } while (uVar34 < uVar43);
          }
          *(float *)(iVar12 + 0x4c) = fVar71;
          *(ulonglong *)(iVar12 + 0x50) = uVar62;
          *(float *)(iVar12 + 0xa0) = fVar70;
          *(float *)(iVar12 + 0xa4) = fVar59;
          *(float *)(iVar12 + 0xf4) = fVar44;
          *(float *)(iVar12 + 0xf8) = fVar58;
        }
        else {
          iVar41 = 0;
          uVar34 = 0;
          if (iVar17 != 0) {
            while( true ) {
              FUN_ram_400905e4(iVar12 + iVar41 + 0x2c,pfVar35,pfVar35,uVar43);
              uVar34 = uVar34 + 1;
              iVar41 = iVar41 + 0x54;
              if (*(uint *)(iVar38 + 0x1bc) <= uVar34) break;
              iVar12 = *(int *)(iVar38 + 0x1b8);
            }
          }
        }
      }
      iVar12 = *(int *)(iVar38 + 0x1ec);
      pfVar37 = (float *)(iVar38 + 0x444);
      if (iVar12 != 0) {
        iVar17 = *(int *)(iVar38 + 0x1f0);
        if (iVar17 == 2) {
          fVar1 = *(float *)(iVar12 + 0x38);
          fVar63 = *(float *)(iVar12 + 0x3c);
          fVar57 = *(float *)(iVar12 + 0x40);
          fVar51 = *(float *)(iVar12 + 0x44);
          fVar50 = *(float *)(iVar12 + 0x48);
          fVar48 = *(float *)(iVar12 + 0x8c);
          fVar49 = *(float *)(iVar12 + 0x90);
          fVar55 = *(float *)(iVar12 + 0x94);
          fVar56 = *(float *)(iVar12 + 0x98);
          fVar53 = *(float *)(iVar12 + 0x9c);
          uVar62 = *(ulonglong *)(iVar12 + 0x4c);
          uVar67 = *(ulonglong *)(iVar12 + 0x50);
          fVar54 = *(float *)(iVar12 + 0xa0);
          fVar52 = *(float *)(iVar12 + 0xa4);
          if (param_3 != uVar11) {
            uVar34 = 0;
            pfVar23 = pfVar37;
            do {
              uVar34 = uVar34 + 1;
              fVar60 = (float)*(undefined8 *)pfVar23;
              fVar69 = fVar1 * fVar60 + (float)uVar62;
              fVar61 = fVar48 * fVar69 + fVar54;
              uVar62 = (ulonglong)(uint)(fVar51 * fVar69 + fVar63 * fVar60 + (float)uVar67);
              *pfVar23 = fVar61;
              uVar67 = (ulonglong)(uint)(fVar57 * fVar60 + fVar50 * fVar69);
              fVar54 = fVar56 * fVar61 + fVar49 * fVar69 + fVar52;
              fVar52 = fVar55 * fVar69 + fVar53 * fVar61;
              pfVar23 = pfVar23 + 1;
            } while (uVar34 < uVar43);
          }
          *(ulonglong *)(iVar12 + 0x4c) = uVar62;
          *(ulonglong *)(iVar12 + 0x50) = uVar67;
          *(float *)(iVar12 + 0xa0) = fVar54;
          *(float *)(iVar12 + 0xa4) = fVar52;
        }
        else if (iVar17 == 3) {
          fVar1 = *(float *)(iVar12 + 0x38);
          fVar63 = *(float *)(iVar12 + 0x3c);
          fVar57 = *(float *)(iVar12 + 0x40);
          fVar51 = *(float *)(iVar12 + 0x44);
          fVar50 = *(float *)(iVar12 + 0x48);
          fVar48 = *(float *)(iVar12 + 0x8c);
          fVar49 = *(float *)(iVar12 + 0x90);
          fVar55 = *(float *)(iVar12 + 0x94);
          fVar56 = *(float *)(iVar12 + 0x98);
          fVar53 = *(float *)(iVar12 + 0x9c);
          fVar54 = *(float *)(iVar12 + 0xe0);
          fVar52 = *(float *)(iVar12 + 0xe4);
          fVar69 = *(float *)(iVar12 + 0xe8);
          fVar61 = *(float *)(iVar12 + 0xec);
          fVar60 = *(float *)(iVar12 + 0xf0);
          fVar71 = *(float *)(iVar12 + 0x4c);
          uVar62 = *(ulonglong *)(iVar12 + 0x50);
          fVar70 = *(float *)(iVar12 + 0xa0);
          fVar59 = *(float *)(iVar12 + 0xa4);
          fVar44 = *(float *)(iVar12 + 0xf4);
          fVar58 = *(float *)(iVar12 + 0xf8);
          if (param_3 != uVar11) {
            uVar34 = 0;
            pfVar23 = pfVar37;
            do {
              fVar45 = *pfVar23;
              uVar34 = uVar34 + 1;
              fVar64 = fVar1 * fVar45 + fVar71;
              fVar9 = fVar48 * fVar64 + fVar70;
              fVar71 = fVar51 * fVar64 + fVar63 * fVar45 + (float)uVar62;
              fVar15 = fVar54 * fVar9 + fVar44;
              uVar62 = (ulonglong)(uint)(fVar57 * fVar45 + fVar50 * fVar64);
              fVar70 = fVar56 * fVar9 + fVar49 * fVar64 + fVar59;
              *pfVar23 = fVar15;
              fVar44 = fVar61 * fVar15 + fVar52 * fVar9 + fVar58;
              fVar59 = fVar55 * fVar64 + fVar53 * fVar9;
              fVar58 = fVar69 * fVar9 + fVar60 * fVar15;
              pfVar23 = pfVar23 + 1;
            } while (uVar34 < uVar43);
          }
          *(float *)(iVar12 + 0x4c) = fVar71;
          *(ulonglong *)(iVar12 + 0x50) = uVar62;
          *(float *)(iVar12 + 0xa0) = fVar70;
          *(float *)(iVar12 + 0xa4) = fVar59;
          *(float *)(iVar12 + 0xf4) = fVar44;
          *(float *)(iVar12 + 0xf8) = fVar58;
        }
        else {
          iVar41 = 0;
          uVar34 = 0;
          if (iVar17 != 0) {
            while( true ) {
              FUN_ram_400905e4(iVar12 + iVar41 + 0x2c,pfVar37,pfVar37,uVar43);
              uVar34 = uVar34 + 1;
              iVar41 = iVar41 + 0x54;
              if (*(uint *)(iVar38 + 0x1f0) <= uVar34) break;
              iVar12 = *(int *)(iVar38 + 0x1ec);
            }
          }
        }
      }
      FUN_ram_3004503a(fVar28,fVar28,0,iVar38 + 0x1fc,pfVar37,uVar43,0);
      iVar12 = *(int *)(iVar38 + 500);
      if (iVar12 != 0) {
        iVar17 = *(int *)(iVar38 + 0x1f8);
        if (iVar17 == 2) {
          fVar1 = *(float *)(iVar12 + 0x38);
          fVar28 = *(float *)(iVar12 + 0x3c);
          fVar63 = *(float *)(iVar12 + 0x40);
          fVar57 = *(float *)(iVar12 + 0x44);
          fVar51 = *(float *)(iVar12 + 0x48);
          fVar50 = *(float *)(iVar12 + 0x8c);
          fVar48 = *(float *)(iVar12 + 0x90);
          fVar49 = *(float *)(iVar12 + 0x94);
          fVar55 = *(float *)(iVar12 + 0x98);
          fVar56 = *(float *)(iVar12 + 0x9c);
          uVar62 = *(ulonglong *)(iVar12 + 0x4c);
          uVar67 = *(ulonglong *)(iVar12 + 0x50);
          fVar53 = *(float *)(iVar12 + 0xa0);
          fVar54 = *(float *)(iVar12 + 0xa4);
          if (param_3 != uVar11) {
            uVar34 = 0;
            pfVar23 = pfVar37;
            do {
              uVar34 = uVar34 + 1;
              fVar61 = (float)*(undefined8 *)pfVar23;
              fVar52 = fVar1 * fVar61 + (float)uVar62;
              fVar69 = fVar50 * fVar52 + fVar53;
              uVar62 = (ulonglong)(uint)(fVar57 * fVar52 + fVar28 * fVar61 + (float)uVar67);
              *pfVar23 = fVar69;
              uVar67 = (ulonglong)(uint)(fVar63 * fVar61 + fVar51 * fVar52);
              fVar53 = fVar55 * fVar69 + fVar48 * fVar52 + fVar54;
              fVar54 = fVar49 * fVar52 + fVar56 * fVar69;
              pfVar23 = pfVar23 + 1;
            } while (uVar34 < uVar43);
          }
          *(ulonglong *)(iVar12 + 0x4c) = uVar62;
          *(ulonglong *)(iVar12 + 0x50) = uVar67;
          *(float *)(iVar12 + 0xa0) = fVar53;
          *(float *)(iVar12 + 0xa4) = fVar54;
        }
        else if (iVar17 == 3) {
          fVar1 = *(float *)(iVar12 + 0x38);
          fVar28 = *(float *)(iVar12 + 0x3c);
          fVar63 = *(float *)(iVar12 + 0x40);
          fVar57 = *(float *)(iVar12 + 0x44);
          fVar51 = *(float *)(iVar12 + 0x48);
          fVar50 = *(float *)(iVar12 + 0x8c);
          fVar48 = *(float *)(iVar12 + 0x90);
          fVar49 = *(float *)(iVar12 + 0x94);
          fVar55 = *(float *)(iVar12 + 0x98);
          fVar56 = *(float *)(iVar12 + 0x9c);
          fVar53 = *(float *)(iVar12 + 0xe0);
          fVar54 = *(float *)(iVar12 + 0xe4);
          fVar52 = *(float *)(iVar12 + 0xe8);
          fVar69 = *(float *)(iVar12 + 0xec);
          fVar61 = *(float *)(iVar12 + 0xf0);
          fVar60 = *(float *)(iVar12 + 0x4c);
          uVar62 = *(ulonglong *)(iVar12 + 0x50);
          fVar71 = *(float *)(iVar12 + 0xa0);
          fVar70 = *(float *)(iVar12 + 0xa4);
          fVar59 = *(float *)(iVar12 + 0xf4);
          fVar44 = *(float *)(iVar12 + 0xf8);
          if (param_3 != uVar11) {
            uVar34 = 0;
            pfVar23 = pfVar37;
            do {
              fVar58 = *pfVar23;
              uVar34 = uVar34 + 1;
              fVar45 = fVar1 * fVar58 + fVar60;
              fVar64 = fVar50 * fVar45 + fVar71;
              fVar60 = fVar57 * fVar45 + fVar28 * fVar58 + (float)uVar62;
              fVar9 = fVar53 * fVar64 + fVar59;
              uVar62 = (ulonglong)(uint)(fVar63 * fVar58 + fVar51 * fVar45);
              fVar71 = fVar55 * fVar64 + fVar48 * fVar45 + fVar70;
              *pfVar23 = fVar9;
              fVar59 = fVar69 * fVar9 + fVar54 * fVar64 + fVar44;
              fVar70 = fVar49 * fVar45 + fVar56 * fVar64;
              fVar44 = fVar52 * fVar64 + fVar61 * fVar9;
              pfVar23 = pfVar23 + 1;
            } while (uVar34 < uVar43);
          }
          *(float *)(iVar12 + 0x4c) = fVar60;
          *(ulonglong *)(iVar12 + 0x50) = uVar62;
          *(float *)(iVar12 + 0xa0) = fVar71;
          *(float *)(iVar12 + 0xa4) = fVar70;
          *(float *)(iVar12 + 0xf4) = fVar59;
          *(float *)(iVar12 + 0xf8) = fVar44;
        }
        else {
          iVar41 = 0;
          uVar34 = 0;
          if (iVar17 != 0) {
            while( true ) {
              FUN_ram_400905e4(iVar12 + iVar41 + 0x2c,pfVar37,pfVar37,uVar43);
              uVar34 = uVar34 + 1;
              iVar41 = iVar41 + 0x54;
              if (*(uint *)(iVar38 + 0x1f8) <= uVar34) break;
              iVar12 = *(int *)(iVar38 + 500);
            }
          }
        }
      }
      FUN_ram_40090498(pfVar35,pfVar37,pfVar10,uVar43);
      fVar51 = DAT_ram_4009935c;
      fVar57 = DAT_ram_40099358;
      fVar63 = DAT_ram_400930e8;
      fVar28 = DAT_ram_40092850;
      fVar1 = DAT_ram_4009284c;
      if (*(short *)(iVar38 + 0x646) == 1) {
        pfVar37 = *(float **)(iVar38 + 0x664);
        fVar50 = 0.0;
        if (pfVar37 != (float *)0x0) {
          fVar50 = *pfVar37;
        }
        pfVar23 = *(float **)(iVar38 + 0x648);
        if ((pfVar23 == (float *)0x0) || (uVar34 = *(uint *)(iVar38 + 0x658), uVar34 == 0)) {
          fVar49 = 0.0;
          fVar48 = 0.0;
          fVar55 = fVar49;
        }
        else {
          fVar48 = *pfVar23;
          if (uVar34 == 1) {
            fVar49 = 0.0;
          }
          else {
            fVar49 = pfVar23[1];
          }
          fVar55 = 0.0;
          if (2 < uVar34) {
            fVar55 = pfVar23[2];
          }
        }
        pfVar23 = *(float **)(iVar38 + 0x64c);
        if ((pfVar23 == (float *)0x0) || (uVar34 = *(uint *)(iVar38 + 0x65c), uVar34 == 0)) {
          fVar53 = 0.0;
          fVar56 = 0.0;
          fVar54 = fVar53;
        }
        else {
          fVar56 = *pfVar23;
          if (uVar34 == 1) {
            fVar54 = 0.0;
          }
          else {
            fVar54 = (float)*(undefined8 *)(pfVar23 + 1);
          }
          fVar53 = 0.0;
          if (2 < uVar34) {
            fVar53 = pfVar23[2];
          }
        }
        pfVar23 = *(float **)(iVar38 + 0x650);
        pfVar35 = *(float **)(iVar38 + 0x654);
        fVar52 = in_register_00000100;
        if ((pfVar23 == (float *)0x0) || (uVar34 = *(uint *)(iVar38 + 0x660), uVar34 == 0)) {
          fVar61 = 0.0;
          fVar69 = 0.0;
LAB_ram_40085f00:
          if ((pfVar35 == (float *)0x0) || (uVar34 = *(uint *)(iVar38 + 0x660), uVar34 == 0)) {
            fVar60 = 0.0;
            fVar70 = 0.0;
            fVar71 = 0.0;
          }
          else {
            fVar71 = *pfVar35;
            fVar60 = 0.0;
            if (uVar34 != 1) goto LAB_ram_40085a60;
            fVar70 = 0.0;
          }
        }
        else {
          fVar69 = *pfVar23;
          if (uVar34 == 1) {
            fVar61 = 0.0;
          }
          else {
            fVar61 = pfVar23[1];
          }
          if (uVar34 < 3) goto LAB_ram_40085f00;
          fVar60 = pfVar23[2];
          if (pfVar35 == (float *)0x0) {
            fVar71 = 0.0;
            fVar70 = fVar71;
          }
          else {
            fVar71 = *pfVar35;
LAB_ram_40085a60:
            fVar70 = pfVar35[1];
            if (uVar34 < 3) {
              fVar52 = 0.0;
            }
            else {
              fVar52 = pfVar35[2];
            }
          }
        }
        fVar59 = *(float *)(iVar38 + 0x6bc);
        fVar44 = *(float *)(iVar38 + 0x6c0);
        fVar58 = *(float *)(iVar38 + 0x710);
        fVar45 = *(float *)(iVar38 + 0x714);
        if (param_3 != uVar11) {
          uVar34 = 0;
          do {
            fVar9 = *pfVar10;
            fVar15 = fVar9 * fVar49 + fVar61;
            fVar30 = fVar50 * fVar54 + fVar70;
            fVar64 = fVar9 * fVar48 + fVar69 + fVar50 * fVar56 + fVar71;
            fVar3 = _DAT_ram_300833dc;
            if ((fVar28 < fVar64) && (fVar3 = _DAT_ram_30083bd8, fVar64 < fVar1)) {
              fVar64 = (fVar64 + fVar1) * fVar57;
              uVar27 = (uint)(-1 < (int)fVar64) * (int)fVar64;
              fVar3 = (fVar64 - (float)uVar27) *
                      ((float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar27 + 0x201) * 4) -
                      *(float *)(&DAT_ram_30082bdc + (uVar27 + 0x200) * 4)) +
                      *(float *)(&DAT_ram_30082bdc + (uVar27 + 0x200) * 4);
            }
            fVar64 = _DAT_ram_300833dc;
            if ((fVar28 < fVar15 + fVar30) &&
               (fVar15 = fVar15 + fVar30, fVar64 = _DAT_ram_30083bd8, fVar15 < fVar1)) {
              fVar64 = (fVar15 + fVar1) * fVar57;
              uVar27 = (uint)(-1 < (int)fVar64) * (int)fVar64;
              fVar64 = (fVar64 - (float)uVar27) *
                       ((float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar27 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30082bdc + (uVar27 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30082bdc + (uVar27 + 0x200) * 4);
            }
            fVar9 = (fVar53 * fVar50 + fVar52) * fVar3 + fVar9 * fVar55 + fVar60;
            fVar15 = _DAT_ram_30082bd8;
            if ((fVar46 < fVar9) && (fVar15 = _DAT_ram_300833d4, fVar9 < fVar63)) {
              fVar9 = (fVar9 + fVar63) * fVar51;
              uVar27 = (uint)(-1 < (int)fVar9) * (int)fVar9;
              iVar12 = uVar27 * 4;
              fVar15 = (fVar9 - (float)uVar27) *
                       ((float)*(undefined8 *)(&DAT_ram_30082bdc + iVar12) -
                       (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar12)) +
                       (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar12);
            }
            fVar50 = (fVar50 - fVar15) * fVar64 + fVar15;
            fVar64 = *(float *)(iVar38 + 0x70c);
            fVar30 = fVar50 * *(float *)(iVar38 + 0x6a8) + fVar59;
            fVar9 = *(float *)(iVar38 + 0x704);
            uVar34 = uVar34 + 1;
            fVar58 = fVar30 * *(float *)(iVar38 + 0x6fc) + fVar58;
            fVar3 = fVar30 * *(float *)(iVar38 + 0x700) + fVar45;
            fVar59 = fVar30 * *(float *)(iVar38 + 0x6b4) +
                     fVar50 * *(float *)(iVar38 + 0x6ac) + fVar44;
            fVar44 = fVar50 * *(float *)(iVar38 + 0x6b0) + fVar30 * *(float *)(iVar38 + 0x6b8);
            fVar15 = *(float *)(iVar38 + 0x708);
            *pfVar10 = *(float *)(iVar38 + 0x718) * fVar58;
            fVar45 = fVar30 * fVar9 + fVar58 * fVar64;
            fVar58 = fVar58 * fVar15 + fVar3;
            pfVar10 = pfVar10 + 1;
          } while (uVar34 < uVar43);
        }
        if (pfVar37 != (float *)0x0) {
          *pfVar37 = fVar50;
        }
        *(float *)(iVar38 + 0x6bc) = fVar59;
        *(float *)(iVar38 + 0x6c0) = fVar44;
        *(float *)(iVar38 + 0x710) = fVar58;
        *(float *)(iVar38 + 0x714) = fVar45;
      }
      else {
        FUN_ram_300447b8(iVar38 + 0x644,pfVar10,uVar43);
        FUN_ram_400905e4(iVar38 + 0x69c,pfVar10,pfVar10,uVar43);
        FUN_ram_400905e4(iVar38 + 0x6f0,pfVar10,pfVar10,uVar43);
        FUN_ram_4009057c(*(undefined4 *)(iVar38 + 0x718),pfVar10,pfVar10,uVar43);
      }
    }
    uVar11 = uVar11 + uVar43;
    if (param_3 <= uVar11) {
      return;
    }
    iVar38 = *(int *)(param_1 + 4);
  } while( true );
}


