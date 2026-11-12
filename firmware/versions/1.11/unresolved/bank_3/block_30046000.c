/* NanoCore 1.11 analysis module: unresolved/bank_3/block_30046000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x300464c2.
 * REA evidence: ev_42a7c885f9ea095b23e782a94d6b0f18d54915e548fe0047ec0a897ffafec6ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_300464c2(float param_1,float param_2,float param_3,float param_4,ushort *param_5,
                     float *param_6,uint param_7,uint param_8)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_register_00000100;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float *pfVar16;
  float *pfVar17;
  undefined8 *puVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  ulonglong uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 unaff_fs11;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  fVar44 = DAT_ram_4009b370._4_4_;
  fVar7 = (float)DAT_ram_4009b370;
  fVar32 = DAT_ram_4009a89c;
  fVar6 = DAT_ram_40094ed4;
  fVar5 = DAT_ram_40094640;
  fVar4 = DAT_ram_4009463c;
  fVar33 = _DAT_ram_30084f58;
  fVar36 = _DAT_ram_3008475c;
  fVar1 = _DAT_ram_30084754;
  fVar40 = _DAT_ram_30083f58;
  if (param_7 == 0) {
    return;
  }
  uStack_a0 = (undefined4)unaff_fs11;
  uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
  if (param_8 == 0) {
    if (param_1 == DAT_ram_40094604) {
      if (param_2 == DAT_ram_40094604) {
        FUN_ram_30045c40();
        return;
      }
      bVar2 = true;
      goto LAB_ram_30046566;
    }
    if (param_2 != DAT_ram_40094604) goto LAB_ram_30046564;
    bVar3 = true;
    bVar2 = false;
  }
  else {
LAB_ram_30046564:
    bVar2 = false;
LAB_ram_30046566:
    bVar3 = false;
  }
  uVar24 = (uint)param_5[1];
  if (uVar24 != 1) {
    uVar23 = 0;
    do {
      fVar40 = *param_6;
      if (!bVar2) {
        fVar40 = fVar40 * param_1;
      }
      if ((((uVar24 != 0) && (pfVar20 = *(float **)(param_5 + 0x10), pfVar20 != (float *)0x0)) &&
          (pfVar16 = *(float **)(param_5 + 0x12), pfVar16 != (float *)0x0)) &&
         (pfVar17 = *(float **)(param_5 + 0x14), pfVar17 != (float *)0x0)) {
        puVar18 = *(undefined8 **)(param_5 + 6);
        pfVar22 = *(float **)(param_5 + 8);
        puVar15 = *(undefined8 **)(param_5 + 2);
        pfVar14 = *(float **)(param_5 + 4);
        if (uVar24 == 1) {
          fVar1 = *pfVar20;
          if (puVar18 == (undefined8 *)0x0) {
            if (puVar15 != (undefined8 *)0x0) {
              fVar32 = 0.0;
              fVar36 = fVar40 * (float)*puVar15 + 0.0;
              fVar33 = (float)*(undefined8 *)((int)puVar15 + 4) * fVar40 + 0.0;
              goto LAB_ram_30046ac6;
            }
            fVar32 = 0.0;
            fVar33 = 0.0;
            fVar36 = fVar33;
          }
          else if (puVar15 == (undefined8 *)0x0) {
            fVar33 = (float)*(undefined8 *)((int)puVar18 + 4) + 0.0;
            fVar32 = (float)puVar18[1] + 0.0;
            fVar36 = (float)*puVar18 + 0.0;
          }
          else {
            fVar33 = fVar40 * (float)*(undefined8 *)((int)puVar15 + 4) +
                     (float)*(undefined8 *)((int)puVar18 + 4);
            fVar36 = fVar40 * (float)*puVar15 + (float)*puVar18;
            fVar32 = (float)puVar18[1];
LAB_ram_30046ac6:
            fVar32 = fVar40 * (float)puVar15[1] + fVar32;
          }
          if (pfVar22 == (float *)0x0) {
            if (pfVar14 != (float *)0x0) {
              fVar38 = 0.0;
              fVar30 = *pfVar14 * fVar1 + 0.0;
              fVar40 = (float)*(undefined8 *)(pfVar14 + 1) * fVar1 + 0.0;
              goto LAB_ram_30046aee;
            }
            fVar40 = 0.0;
            fVar30 = fVar40;
            fVar38 = fVar40;
          }
          else if (pfVar14 == (float *)0x0) {
            fVar40 = pfVar22[1] + 0.0;
            fVar30 = *pfVar22 + 0.0;
            fVar38 = pfVar22[2] + 0.0;
          }
          else {
            fVar40 = fVar1 * (float)*(undefined8 *)(pfVar14 + 1) + pfVar22[1];
            fVar30 = fVar1 * *pfVar14 + *pfVar22;
            fVar38 = pfVar22[2];
LAB_ram_30046aee:
            fVar38 = fVar1 * (float)*(undefined8 *)(pfVar14 + 2) + fVar38;
          }
          fVar36 = fVar36 + fVar30;
          fVar30 = _DAT_ram_3008475c;
          if ((DAT_ram_40094640 < fVar36) && (fVar30 = _DAT_ram_30084f58, fVar36 < DAT_ram_4009463c)
             ) {
            fVar36 = (fVar36 + DAT_ram_4009463c) * (float)DAT_ram_4009b370;
            uVar24 = (uint)(-1 < (int)fVar36) * (int)fVar36;
            fVar30 = (fVar36 - (float)uVar24) *
                     (*(float *)(&DAT_ram_30083f5c + (uVar24 + 0x201) * 4) -
                     *(float *)(&DAT_ram_30083f5c + (uVar24 + 0x200) * 4)) +
                     *(float *)(&DAT_ram_30083f5c + (uVar24 + 0x200) * 4);
          }
          fVar33 = fVar33 + fVar40;
          fVar36 = _DAT_ram_3008475c;
          if ((DAT_ram_40094640 < fVar33) && (fVar36 = _DAT_ram_30084f58, fVar33 < DAT_ram_4009463c)
             ) {
            fVar40 = (fVar33 + DAT_ram_4009463c) * (float)DAT_ram_4009b370;
            uVar24 = (uint)(-1 < (int)fVar40) * (int)fVar40;
            fVar36 = (fVar40 - (float)uVar24) *
                     ((float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar24 + 0x201) * 4) -
                     (float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar24 + 0x200) * 4)) +
                     (float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar24 + 0x200) * 4);
          }
          fVar32 = fVar30 * fVar38 + fVar32;
          fVar40 = _DAT_ram_30083f58;
          if ((DAT_ram_4009a89c < fVar32) && (fVar40 = _DAT_ram_30084754, fVar32 < DAT_ram_40094ed4)
             ) {
            fVar40 = (fVar32 + DAT_ram_40094ed4) * DAT_ram_4009b370._4_4_;
            uVar24 = (uint)(-1 < (int)fVar40) * (int)fVar40;
            iVar21 = uVar24 * 4;
            fVar40 = (fVar40 - (float)uVar24) *
                     ((float)*(undefined8 *)(&DAT_ram_30083f5c + iVar21) -
                     (float)*(undefined8 *)(&DAT_ram_30083f58 + iVar21)) +
                     (float)*(undefined8 *)(&DAT_ram_30083f58 + iVar21);
          }
          fVar40 = (fVar1 - fVar40) * fVar36 + fVar40;
          *pfVar20 = fVar40;
        }
        else {
          iVar21 = *(int *)(param_5 + 0xe);
          uVar12 = (uint)*param_5;
          if (iVar21 == 0) {
LAB_ram_3004667a:
            iVar8 = uVar24 << 2;
          }
          else if (puVar18 == (undefined8 *)0x0) {
            if (puVar15 == (undefined8 *)0x0) {
              iVar8 = iVar21 << 2;
              memset(pfVar16,0,iVar8);
            }
            else if (uVar12 == 0) {
              iVar8 = iVar21 << 2;
              memset(pfVar16,0,iVar8);
            }
            else {
              iVar8 = iVar21 * 4;
              if (uVar12 == 1) {
                pfVar13 = pfVar16;
                do {
                  uVar37 = *puVar15;
                  pfVar19 = pfVar13 + 1;
                  puVar15 = (undefined8 *)((int)puVar15 + 4);
                  *pfVar13 = fVar40 * (float)uVar37 + 0.0;
                  pfVar13 = pfVar19;
                } while (pfVar16 + iVar21 != pfVar19);
              }
              else {
                pfVar13 = pfVar16;
                do {
                  uVar37 = *puVar15;
                  pfVar19 = pfVar13 + 1;
                  puVar15 = (undefined8 *)((int)puVar15 + uVar12 * 4);
                  *pfVar13 = fVar40 * (float)uVar37 + 0.0;
                  pfVar13 = pfVar19;
                } while (pfVar16 + iVar21 != pfVar19);
              }
            }
LAB_ram_3004661a:
            if (pfVar22 != (float *)0x0) goto LAB_ram_3004661e;
LAB_ram_30046a3a:
            if (pfVar14 == (float *)0x0) {
              memset(pfVar17,0,iVar8);
              iVar8 = uVar24 << 2;
            }
            else {
              iVar8 = uVar24 * 4;
              iVar9 = 0;
              pfVar22 = pfVar17;
              do {
                fStack_a4 = 0.0;
                FUN_ram_40093480(pfVar14,pfVar20,uVar24,&fStack_a4);
                iVar9 = iVar9 + 1;
                pfVar14 = pfVar14 + uVar24;
                *pfVar22 = fStack_a4 + 0.0;
                pfVar22 = pfVar22 + 1;
              } while (iVar21 != iVar9);
            }
          }
          else {
            iVar8 = iVar21 * 4;
            if (puVar15 == (undefined8 *)0x0) {
              puVar15 = (undefined8 *)((int)puVar18 + iVar8);
              pfVar13 = pfVar16;
              do {
                uVar37 = *puVar18;
                puVar18 = (undefined8 *)((int)puVar18 + 4);
                *pfVar13 = (float)uVar37;
                pfVar13 = pfVar13 + 1;
              } while (puVar15 != puVar18);
              goto LAB_ram_3004661a;
            }
            if (uVar12 != 0) {
              if (uVar12 == 1) {
                puVar10 = (undefined8 *)((int)puVar18 + iVar8);
                pfVar13 = pfVar16;
                do {
                  uVar39 = *puVar15;
                  uVar37 = *puVar18;
                  puVar18 = (undefined8 *)((int)puVar18 + 4);
                  puVar15 = (undefined8 *)((int)puVar15 + 4);
                  *pfVar13 = fVar40 * (float)uVar39 + (float)uVar37;
                  pfVar13 = pfVar13 + 1;
                } while (puVar10 != puVar18);
              }
              else {
                puVar10 = (undefined8 *)((int)puVar18 + iVar8);
                pfVar13 = pfVar16;
                do {
                  uVar39 = *puVar15;
                  uVar37 = *puVar18;
                  puVar18 = (undefined8 *)((int)puVar18 + 4);
                  puVar15 = (undefined8 *)((int)puVar15 + uVar12 * 4);
                  *pfVar13 = fVar40 * (float)uVar39 + (float)uVar37;
                  pfVar13 = pfVar13 + 1;
                } while (puVar18 != puVar10);
              }
              goto LAB_ram_3004661a;
            }
            puVar15 = (undefined8 *)((int)puVar18 + iVar8);
            pfVar13 = pfVar16;
            do {
              uVar37 = *puVar18;
              puVar18 = (undefined8 *)((int)puVar18 + 4);
              *pfVar13 = (float)uVar37;
              pfVar13 = pfVar13 + 1;
            } while (puVar18 != puVar15);
            if (pfVar22 == (float *)0x0) goto LAB_ram_30046a3a;
LAB_ram_3004661e:
            if (pfVar14 == (float *)0x0) {
              pfVar13 = (float *)((int)pfVar22 + iVar8);
              pfVar14 = pfVar17;
              do {
                uVar37 = *(undefined8 *)pfVar22;
                pfVar22 = pfVar22 + 1;
                *pfVar14 = (float)uVar37;
                pfVar14 = pfVar14 + 1;
              } while (pfVar13 != pfVar22);
              goto LAB_ram_3004667a;
            }
            iVar8 = uVar24 * 4;
            iVar9 = 0;
            pfVar13 = pfVar17;
            do {
              fVar40 = *pfVar22;
              fStack_a4 = 0.0;
              FUN_ram_40093480(pfVar14,pfVar20,uVar24,&fStack_a4);
              iVar9 = iVar9 + 1;
              pfVar22 = pfVar22 + 1;
              pfVar14 = pfVar14 + uVar24;
              *pfVar13 = fVar40 + fStack_a4;
              pfVar13 = pfVar13 + 1;
            } while (iVar21 != iVar9);
          }
          fVar30 = (float)DAT_ram_4009b370;
          fVar38 = DAT_ram_4009a89c;
          fVar32 = _DAT_ram_30084f58;
          fVar33 = _DAT_ram_3008475c;
          fVar36 = _DAT_ram_30084754;
          fVar1 = _DAT_ram_30083f58;
          pfVar14 = pfVar20;
          do {
            pfVar25 = (float *)((int)pfVar16 + iVar8);
            pfVar22 = (float *)((int)pfVar17 + iVar8);
            fVar40 = (float)*(undefined8 *)pfVar16 + (float)*(undefined8 *)pfVar17;
            pfVar19 = pfVar17 + uVar24 * 2;
            pfVar13 = pfVar16 + uVar24 * 2;
            pfVar16 = pfVar16 + 1;
            pfVar17 = pfVar17 + 1;
            fVar28 = fVar33;
            if ((fVar5 < fVar40) && (fVar28 = fVar32, fVar40 < fVar4)) {
              fVar40 = (fVar40 + fVar4) * fVar30;
              uVar12 = (uint)(-1 < (int)fVar40) * (int)fVar40;
              fVar28 = (fVar40 - (float)uVar12) *
                       (*(float *)(&DAT_ram_30083f5c + (uVar12 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30083f5c + (uVar12 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30083f5c + (uVar12 + 0x200) * 4);
            }
            fVar40 = *pfVar25 + *pfVar22;
            fVar26 = fVar33;
            if ((fVar5 < fVar40) && (fVar26 = fVar32, fVar40 < fVar4)) {
              fVar40 = (fVar40 + fVar4) * fVar7;
              uVar12 = (uint)(-1 < (int)fVar40) * (int)fVar40;
              fVar26 = (fVar40 - (float)uVar12) *
                       (*(float *)(&DAT_ram_30083f5c + (uVar12 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30083f5c + (uVar12 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30083f5c + (uVar12 + 0x200) * 4);
            }
            fVar28 = *pfVar19 * fVar28 + *pfVar13;
            fVar40 = fVar1;
            if ((fVar38 < fVar28) && (fVar40 = fVar36, fVar28 < fVar6)) {
              fVar40 = (fVar28 + fVar6) * fVar44;
              uVar12 = (uint)(-1 < (int)fVar40) * (int)fVar40;
              iVar21 = uVar12 * 4;
              fVar40 = (fVar40 - (float)uVar12) *
                       (*(float *)(&DAT_ram_30083f5c + iVar21) -
                       *(float *)(&DAT_ram_30083f58 + iVar21)) +
                       *(float *)(&DAT_ram_30083f58 + iVar21);
            }
            pfVar22 = pfVar14 + 1;
            fVar40 = ((float)*(undefined8 *)pfVar14 - fVar40) * fVar26 + fVar40;
            *pfVar14 = fVar40;
            pfVar14 = pfVar22;
          } while ((float *)((int)pfVar20 + iVar8) != pfVar22);
        }
      }
      if (!bVar3) {
        fVar40 = fVar40 * param_2;
      }
      *param_6 = fVar40;
      if (uVar23 < param_8) {
        param_1 = param_1 + param_3;
        param_2 = param_2 + param_4;
      }
      uVar23 = uVar23 + 1;
      param_6 = param_6 + 1;
      if (param_7 == uVar23) {
        return;
      }
      uVar24 = (uint)param_5[1];
    } while( true );
  }
  puVar11 = *(ulonglong **)(param_5 + 0x10);
  uVar42 = 0;
  if (puVar11 != (ulonglong *)0x0) {
    uVar42 = *puVar11;
  }
  pfVar20 = *(float **)(param_5 + 2);
  if ((pfVar20 == (float *)0x0) || (uVar24 = *(uint *)(param_5 + 10), uVar24 == 0)) {
    fVar38 = 0.0;
    fVar44 = 0.0;
    fVar30 = 0.0;
  }
  else {
    fVar44 = *pfVar20;
    if (uVar24 == 1) {
      fVar38 = 0.0;
    }
    else {
      fVar38 = pfVar20[1];
    }
    fVar30 = 0.0;
    if (2 < uVar24) {
      fVar30 = (float)*(undefined8 *)(pfVar20 + 2);
    }
  }
  pfVar20 = *(float **)(param_5 + 4);
  if ((pfVar20 == (float *)0x0) || (uVar24 = *(uint *)(param_5 + 0xc), uVar24 == 0)) {
    fVar26 = 0.0;
    fVar43 = 0.0;
    fVar28 = 0.0;
  }
  else {
    fVar28 = *pfVar20;
    if (uVar24 == 1) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = pfVar20[1];
    }
    fVar43 = 0.0;
    if (2 < uVar24) {
      fVar43 = pfVar20[2];
    }
  }
  pfVar20 = *(float **)(param_5 + 6);
  puVar15 = *(undefined8 **)(param_5 + 8);
  if ((pfVar20 == (float *)0x0) || (uVar24 = *(uint *)(param_5 + 0xe), uVar24 == 0)) {
    fVar46 = 0.0;
    fVar45 = 0.0;
LAB_ram_30046850:
    if ((puVar15 == (undefined8 *)0x0) || (uVar24 = *(uint *)(param_5 + 0xe), uVar24 == 0)) {
      fVar47 = 0.0;
      fVar49 = 0.0;
      fVar29 = 0.0;
      fVar48 = 0.0;
      goto LAB_ram_3004686a;
    }
    fVar29 = (float)*puVar15;
    fVar47 = 0.0;
    fVar49 = 0.0;
    if (uVar24 == 1) {
      fVar49 = 0.0;
      fVar48 = 0.0;
      goto LAB_ram_3004686a;
    }
  }
  else {
    fVar45 = *pfVar20;
    if (uVar24 == 1) {
      fVar46 = 0.0;
    }
    else {
      fVar46 = pfVar20[1];
    }
    if (uVar24 < 3) goto LAB_ram_30046850;
    fVar47 = pfVar20[2];
    if (puVar15 == (undefined8 *)0x0) {
      fVar49 = 0.0;
      fVar29 = 0.0;
      fVar48 = 0.0;
      goto LAB_ram_3004686a;
    }
    fVar29 = (float)*puVar15;
    fVar49 = fVar47;
  }
  fVar47 = fVar49;
  fVar49 = *(float *)((int)puVar15 + 4);
  if (uVar24 < 3) {
    fVar48 = 0.0;
  }
  else {
    fVar48 = *(float *)(puVar15 + 1);
  }
LAB_ram_3004686a:
  uVar24 = 0;
  do {
    fVar31 = *param_6;
    if (!bVar2) {
      fVar31 = fVar31 * param_1;
    }
    fVar41 = (float)uVar42;
    fVar35 = fVar31 * fVar44 + fVar45 + fVar41 * fVar28 + fVar29;
    fVar27 = fVar36;
    if ((fVar5 < fVar35) && (fVar27 = fVar33, fVar35 < fVar4)) {
      fVar35 = (fVar35 + fVar4) * fVar7;
      uVar23 = (uint)(-1 < (int)fVar35) * (int)fVar35;
      fVar27 = (fVar35 - (float)uVar23) *
               (*(float *)(&DAT_ram_30083f5c + (uVar23 + 0x201) * 4) -
               (float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar23 + 0x200) * 4)) +
               (float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar23 + 0x200) * 4);
    }
    fVar35 = fVar31 * fVar38 + fVar46 + fVar41 * fVar26 + fVar49;
    fVar34 = fVar36;
    if ((fVar5 < fVar35) && (fVar34 = fVar33, fVar35 < fVar4)) {
      fVar35 = (fVar35 + fVar4) * fVar7;
      uVar23 = (uint)(-1 < (int)fVar35) * (int)fVar35;
      fVar34 = (fVar35 - (float)uVar23) *
               ((float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar23 + 0x201) * 4) -
               (float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar23 + 0x200) * 4)) +
               (float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar23 + 0x200) * 4);
    }
    fVar31 = (fVar43 * fVar41 + fVar48) * fVar27 + fVar31 * fVar30 + fVar47;
    fVar35 = fVar40;
    if ((fVar32 < fVar31) && (fVar35 = fVar1, fVar31 < fVar6)) {
      fVar31 = (fVar31 + fVar6) * in_register_00000100;
      uVar23 = (uint)(-1 < (int)fVar31) * (int)fVar31;
      iVar21 = uVar23 * 4;
      fVar35 = (fVar31 - (float)uVar23) *
               ((float)*(undefined8 *)(&DAT_ram_30083f5c + iVar21) -
               (float)*(undefined8 *)(&DAT_ram_30083f58 + iVar21)) +
               (float)*(undefined8 *)(&DAT_ram_30083f58 + iVar21);
    }
    fVar35 = (fVar41 - fVar35) * fVar34 + fVar35;
    uVar42 = (ulonglong)(uint)fVar35;
    if (!bVar3) {
      fVar35 = fVar35 * param_2;
    }
    *param_6 = fVar35;
    param_6 = param_6 + 1;
    if (uVar24 < param_8) {
      param_1 = param_1 + param_3;
      param_2 = param_2 + param_4;
    }
    uVar24 = uVar24 + 1;
  } while (param_7 != uVar24);
  if (puVar11 != (ulonglong *)0x0) {
    *puVar11 = uVar42;
  }
  return;
}


/* NanoCore 1.11, address 0x30046e24.
 * REA evidence: ev_63c86594a190e7f25aacdfd4cb66ab57990701dc5f305fba378ced713587cefa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_30046e24(float param_1,int param_2,int param_3,uint param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_register_00000100;
  float fVar10;
  float *pfVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  float fVar15;
  undefined4 *puVar16;
  int iVar17;
  float *pfVar18;
  ulonglong *puVar19;
  undefined1 *puVar20;
  float *pfVar21;
  float *pfVar22;
  uint uVar23;
  float *pfVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
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
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar56;
  ulonglong uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  ulonglong uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float *pfStack_dc;
  uint uStack_d8;
  float *pfStack_d0;
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
  
  fVar9 = DAT_ram_40094ed4;
  fVar8 = DAT_ram_4009463c;
  if (param_2 == 0) {
    return;
  }
  iVar38 = *(int *)(param_2 + 4);
  if ((((iVar38 == 0) || (*(char *)(param_2 + 0x44) == '\0')) || (param_3 == 0)) || (param_4 == 0))
  {
    return;
  }
  uVar30 = 0;
  do {
    fVar59 = DAT_ram_40094620;
    uVar43 = param_4 - uVar30;
    if (0x80 < uVar43) {
      uVar43 = 0x80;
    }
    if (iVar38 != 0) {
      fVar51 = *(float *)(param_2 + 8);
      uStack_b0 = SUB41(fVar51,0);
      uStack_af = (undefined1)((uint)fVar51 >> 8);
      uStack_ae = (undefined1)((uint)fVar51 >> 0x10);
      uStack_ad = (undefined1)((uint)fVar51 >> 0x18);
      pfVar11 = (float *)(param_3 + uVar30 * 4);
      fVar49 = DAT_ram_4009a89c;
      if (*(int *)(iVar38 + 4) != 0) {
        uVar34 = *(uint *)(iVar38 + 8);
        uVar27 = uVar34;
        if ((*(char *)(iVar38 + 0x44) == '\0') ||
           (DAT_ram_40094620 < ABS(fVar51 - *(float *)(iVar38 + 0x4c)))) {
          uVar28 = *(uint *)(iVar38 + 0x28);
          uVar42 = uVar34 << 1;
          if (uVar28 < uVar42) goto LAB_ram_30046f32;
          if (*(int *)(iVar38 + 0x10) == 0) {
LAB_ram_30048182:
            uVar32 = 0;
          }
          else {
            puVar20 = *(undefined1 **)(iVar38 + 0x14);
            if ((puVar20 == (undefined1 *)0x0) || (*(int *)(iVar38 + 0x1c) == 0)) {
              uVar32 = 0;
            }
            else {
              if (*(int *)(iVar38 + 0x18) == 0) goto LAB_ram_30048182;
              iVar12 = *(int *)(iVar38 + 0x24);
              puVar20[1] = uStack_af;
              *puVar20 = uStack_b0;
              puVar20[2] = uStack_ae;
              puVar20[3] = uStack_ad;
              fVar60 = DAT_ram_4009b370._4_4_;
              fVar67 = (float)DAT_ram_4009b370;
              fVar49 = DAT_ram_4009a89c;
              fVar58 = DAT_ram_40094ed4;
              fVar56 = DAT_ram_40094640;
              fVar1 = DAT_ram_4009463c;
              pfStack_dc = *(float **)(iVar38 + 0x18);
              uVar27 = *(uint *)(iVar38 + 0x10);
              pfStack_d0 = *(float **)(iVar38 + 0x1c);
              pfVar37 = *(float **)(iVar38 + 0x14);
              if (uVar27 == 0) {
                uVar32 = 1;
              }
              else {
                uVar32 = 1;
                uVar39 = 0;
                pfVar24 = pfVar37;
                uVar36 = *(uint *)(iVar38 + 0x20);
                do {
                  uVar33 = *(uint *)(*(int *)(iVar38 + 0xc) + uVar39 * 0x1c);
                  iVar17 = *(int *)(iVar38 + 0xc) + uVar39 * 0x1c;
                  pfVar37 = pfVar24;
                  pfVar21 = (float *)uVar36;
                  pfVar35 = pfStack_d0;
                  if (uVar33 == 2) {
                    if (uVar32 != 0) {
                      pfVar18 = pfVar24;
                      do {
                        fVar62 = (float)*(undefined8 *)pfVar18;
                        fVar61 = _DAT_ram_3008475c;
                        if ((fVar56 < fVar62) && (fVar61 = _DAT_ram_30084f58, fVar62 < fVar1)) {
                          fVar61 = (fVar62 + fVar1) * fVar67;
                          uVar36 = (uint)(-1 < (int)fVar61) * (int)fVar61;
                          fVar61 = (fVar61 - (float)uVar36) *
                                   ((float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar36 + 0x201) * 4)
                                   - *(float *)(&DAT_ram_30083f5c + (uVar36 + 0x200) * 4)) +
                                   *(float *)(&DAT_ram_30083f5c + (uVar36 + 0x200) * 4);
                        }
                        pfVar22 = pfVar18 + 1;
                        *pfVar18 = fVar61;
                        pfVar18 = pfVar22;
                      } while (pfVar24 + uVar32 != pfVar22);
                    }
                  }
                  else if (uVar33 < 3) {
                    if (uVar33 == 0) {
                      uVar33 = (uint)*(ushort *)(iVar17 + 8);
                      if (((uVar33 != 0) && (uVar23 = (uint)*(ushort *)(iVar17 + 10), uVar23 != 0))
                         && (iVar41 = *(int *)(iVar17 + 0xc), iVar41 != 0)) {
                        if ((uVar36 < uVar33) || (pfStack_dc < uVar32)) {
                          uVar32 = 0;
                          uVar27 = *(uint *)(iVar38 + 8);
                          goto LAB_ram_30047540;
                        }
                        if (uVar23 <= uVar32) {
                          uVar32 = uVar23;
                        }
                        pfVar37 = pfStack_d0;
                        pfVar21 = pfStack_dc;
                        pfStack_dc = (float *)uVar36;
                        pfVar35 = pfVar24;
                        if (uVar32 == 0) {
                          uVar23 = *(uint *)(iVar17 + 0x18);
                          uVar36 = 0;
                          do {
                            while (iVar41 = uVar36 * 4, uVar36 < uVar23) {
                              uVar36 = uVar36 + 1;
                              *pfStack_d0 = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41)
                              ;
                              pfStack_d0 = pfStack_d0 + 1;
                              uVar32 = uVar33;
                              if (uVar33 <= (uVar36 & 0xffff)) goto LAB_ram_3004752c;
                            }
                            uVar36 = uVar36 + 1;
                            *pfStack_d0 = 0.0;
                            pfStack_d0 = pfStack_d0 + 1;
                            uVar32 = uVar33;
                          } while ((uVar36 & 0xffff) < uVar33);
                        }
                        else {
                          uVar36 = *(uint *)(iVar17 + 0x18);
                          if (pfVar24 == (float *)0x0) {
                            uVar23 = 0;
                            do {
                              while (iVar41 = uVar23 * 4, uVar23 < uVar36) {
                                uVar23 = uVar23 + 1;
                                *pfStack_d0 = (float)*(undefined8 *)
                                                      (*(int *)(iVar17 + 0x14) + iVar41) + 0.0;
                                pfStack_d0 = pfStack_d0 + 1;
                                uVar32 = uVar33;
                                if (uVar33 <= (uVar23 & 0xffff)) goto LAB_ram_3004752c;
                              }
                              uVar23 = uVar23 + 1;
                              *pfStack_d0 = 0.0;
                              pfStack_d0 = pfStack_d0 + 1;
                              uVar32 = uVar33;
                            } while ((uVar23 & 0xffff) < uVar33);
                          }
                          else {
                            iVar26 = 0;
                            uVar27 = 0;
                            do {
                              while( true ) {
                                fVar61 = 0.0;
                                if (uVar27 < uVar36) {
                                  fVar61 = *(float *)(*(int *)(iVar17 + 0x14) + uVar27 * 4);
                                }
                                if (iVar41 + iVar26 == 0) break;
                                uStack_ac = 0;
                                uStack_ab = 0;
                                uStack_aa = 0;
                                uStack_a9 = 0;
                                FUN_ram_40093480(iVar41 + iVar26,pfVar24,uVar32,&uStack_ac);
                                uVar27 = uVar27 + 1;
                                *pfStack_d0 = (float)CONCAT13(uStack_a9,
                                                              CONCAT12(uStack_aa,
                                                                       CONCAT11(uStack_ab,uStack_ac)
                                                                      )) + fVar61;
                                iVar26 = iVar26 + uVar23 * 4;
                                if (uVar33 <= (uVar27 & 0xffff)) goto LAB_ram_30048a54;
                                iVar41 = *(int *)(iVar17 + 0xc);
                                uVar36 = *(uint *)(iVar17 + 0x18);
                                pfStack_d0 = pfStack_d0 + 1;
                              }
                              uVar27 = uVar27 + 1;
                              *pfStack_d0 = fVar61 + 0.0;
                              iVar26 = iVar26 + uVar23 * 4;
                              pfStack_d0 = pfStack_d0 + 1;
                            } while ((uVar27 & 0xffff) < uVar33);
LAB_ram_30048a54:
                            uVar27 = *(uint *)(iVar38 + 0x10);
                            uVar32 = uVar33;
                          }
                        }
                      }
                    }
                    else {
                      fVar61 = *(float *)(iVar17 + 4);
                      if (uVar32 != 0) {
                        pfVar18 = pfVar24;
                        do {
                          while ((float)*(undefined8 *)pfVar18 < 0.0) {
                            pfVar22 = pfVar18 + 1;
                            *pfVar18 = fVar61 * (float)*(undefined8 *)pfVar18;
                            pfVar18 = pfVar22;
                            if (pfVar22 == pfVar24 + uVar32) goto LAB_ram_3004752c;
                          }
                          pfVar18 = pfVar18 + 1;
                        } while (pfVar24 + uVar32 != pfVar18);
                      }
                    }
                  }
                  else if ((uVar33 == 3) && (pfVar18 = pfVar24, uVar32 != 0)) {
                    do {
                      fVar62 = (float)*(undefined8 *)pfVar18;
                      fVar61 = _DAT_ram_30083f58;
                      if ((fVar49 < fVar62) && (fVar61 = _DAT_ram_30084754, fVar62 < fVar58)) {
                        fVar61 = (fVar62 + fVar58) * fVar60;
                        uVar36 = (uint)(-1 < (int)fVar61) * (int)fVar61;
                        iVar17 = uVar36 * 4;
                        fVar61 = (fVar61 - (float)uVar36) *
                                 (*(float *)(&DAT_ram_30083f5c + iVar17) -
                                 *(float *)(&DAT_ram_30083f58 + iVar17)) +
                                 *(float *)(&DAT_ram_30083f58 + iVar17);
                      }
                      pfVar22 = pfVar18 + 1;
                      *pfVar18 = fVar61;
                      pfVar18 = pfVar22;
                    } while (pfVar24 + uVar32 != pfVar22);
                  }
LAB_ram_3004752c:
                  pfStack_d0 = pfVar35;
                  uVar39 = uVar39 + 1;
                  pfVar24 = pfVar37;
                  uVar36 = (uint)pfVar21;
                } while (uVar39 < uVar27);
              }
              if ((iVar12 == 0) || (uVar28 == 0)) {
                uVar27 = *(uint *)(iVar38 + 8);
              }
              else {
                if (uVar28 < uVar32) {
                  uVar32 = uVar28;
                }
                FUN_ram_4000304c(iVar12,pfVar37,uVar32 << 2);
                uVar27 = *(uint *)(iVar38 + 8);
              }
            }
          }
LAB_ram_30047540:
          if (uVar32 < uVar27) {
            iVar12 = *(int *)(iVar38 + 0x24);
            uVar65 = (ulonglong)(uint)DAT_ram_40094634;
            puVar19 = (ulonglong *)(iVar12 + uVar32 * 4);
            do {
              *puVar19 = uVar65;
              puVar19 = (ulonglong *)((int)puVar19 + 4);
            } while ((ulonglong *)(iVar12 + uVar27 * 4) != puVar19);
          }
          if (uVar32 < uVar42) {
            uVar28 = *(uint *)(iVar38 + 0x28);
            do {
              if (uVar32 < uVar28) {
                *(ulonglong *)(*(int *)(iVar38 + 0x24) + uVar32 * 4) =
                     CONCAT44(_DAT_ram_40094638,DAT_ram_40094634);
              }
              uVar32 = uVar32 + 1;
            } while (uVar42 != uVar32);
          }
          fVar1 = DAT_ram_40094634;
          if (uVar27 == 0) {
            if (*(char *)(iVar38 + 0x45) != '\0') goto LAB_ram_300481a0;
          }
          else {
            uVar42 = *(uint *)(iVar38 + 0x28);
            pfVar37 = *(float **)(iVar38 + 0x24);
            uVar28 = 0;
            if (uVar42 == 0) {
LAB_ram_300475f6:
              fVar1 = DAT_ram_40094634;
              uVar32 = uVar34 + uVar28;
              pfVar24 = pfVar37 + uVar32;
              do {
                uVar28 = uVar28 + 1;
                fVar56 = fVar1;
                if (uVar32 < uVar42) {
                  fVar56 = (float)*(undefined8 *)pfVar24;
                }
                uVar32 = uVar34 + uVar28;
                pfVar24[-uVar34] =
                     (*(float *)(iVar38 + 0x38) - *(float *)(iVar38 + 0x34)) * fVar1 +
                     *(float *)(iVar38 + 0x34);
                *pfVar24 = fVar56 * (*(float *)(iVar38 + 0x40) - *(float *)(iVar38 + 0x3c)) +
                           *(float *)(iVar38 + 0x3c);
                pfVar24 = pfVar24 + 1;
              } while (uVar28 < uVar27);
            }
            else {
              uVar32 = uVar27;
              if (uVar42 <= uVar27) {
                uVar32 = uVar42;
              }
              pfVar24 = pfVar37 + uVar34;
              pfVar35 = pfVar37;
              do {
                uVar36 = uVar34 + uVar28;
                uVar28 = uVar28 + 1;
                fVar56 = fVar1;
                if (uVar36 < uVar42) {
                  fVar56 = (float)*(undefined8 *)pfVar24;
                }
                *pfVar35 = (*(float *)(iVar38 + 0x38) - *(float *)(iVar38 + 0x34)) *
                           (float)*(undefined8 *)pfVar35 + *(float *)(iVar38 + 0x34);
                *pfVar24 = (*(float *)(iVar38 + 0x40) - *(float *)(iVar38 + 0x3c)) * fVar56 +
                           *(float *)(iVar38 + 0x3c);
                pfVar24 = pfVar24 + 1;
                pfVar35 = pfVar35 + 1;
              } while (uVar28 < uVar32);
              if (uVar28 < uVar27) goto LAB_ram_300475f6;
            }
            if (*(char *)(iVar38 + 0x45) != '\0') {
LAB_ram_300481a0:
              *(undefined4 *)(iVar38 + 0x48) = 0x1000;
              *(float *)(iVar38 + 0x4c) = fVar51;
              *(undefined1 *)(iVar38 + 0x44) = 1;
              uStack_d8 = 0x1000;
              goto LAB_ram_300481b4;
            }
            puVar13 = *(undefined8 **)(iVar38 + 0x2c);
            pfVar24 = pfVar37 + uVar27;
            puVar16 = *(undefined4 **)(iVar38 + 0x30);
            do {
              pfVar35 = pfVar37 + uVar34;
              *puVar13 = *(undefined8 *)pfVar37;
              pfVar37 = pfVar37 + 1;
              puVar13 = (undefined8 *)((int)puVar13 + 4);
              *puVar16 = (int)*(undefined8 *)pfVar35;
              puVar16 = puVar16 + 1;
            } while (pfVar24 != pfVar37);
          }
          *(undefined4 *)(iVar38 + 0x48) = 0;
          *(float *)(iVar38 + 0x4c) = fVar51;
          *(undefined **)(iVar38 + 0x44) = &sedeleg;
          uVar34 = uVar27;
        }
        else {
          uStack_d8 = *(uint *)(iVar38 + 0x48);
          if (uStack_d8 != 0) {
LAB_ram_300481b4:
            uVar28 = uStack_d8;
            if (uVar43 <= uStack_d8) {
              uVar28 = uVar43;
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
                  fVar56 = *(float *)(*(int *)(iVar38 + 0x24) + iVar26);
                  fVar58 = *(float *)(*(int *)(iVar38 + 0x24) + iVar41);
                  uVar50 = *puVar13;
                  uVar55 = *puVar25;
                  iVar12 = uVar34 * 0x3c;
                  piVar31 = (int *)(*(int *)(iVar38 + 4) + iVar12);
                  fVar51 = (fVar56 - (float)uVar50) / (float)uStack_d8;
                  fVar1 = (fVar58 - (float)uVar55) / (float)uStack_d8;
                  if ((piVar31 != (int *)0x0) &&
                     (iVar17 = *(int *)(*(int *)(iVar38 + 4) + uVar34 * 0x3c), iVar17 != 0)) {
                    iVar14 = piVar31[1];
                    if (iVar14 == 2) {
                      fVar67 = *(float *)(iVar17 + 0x38);
                      fVar60 = *(float *)(iVar17 + 0x3c);
                      fVar61 = *(float *)(iVar17 + 0x40);
                      fVar62 = *(float *)(iVar17 + 0x44);
                      fVar63 = *(float *)(iVar17 + 0x48);
                      fVar64 = *(float *)(iVar17 + 0x8c);
                      fVar45 = *(float *)(iVar17 + 0x90);
                      fVar68 = *(float *)(iVar17 + 0x94);
                      fVar66 = *(float *)(iVar17 + 0x98);
                      fVar54 = *(float *)(iVar17 + 0x9c);
                      uVar65 = *(ulonglong *)(iVar17 + 0x4c);
                      uVar57 = *(ulonglong *)(iVar17 + 0x50);
                      fVar53 = *(float *)(iVar17 + 0xa0);
                      fVar69 = *(float *)(iVar17 + 0xa4);
                      if (param_4 != uVar30) {
                        uVar27 = 0;
                        pfVar37 = pfVar11;
                        do {
                          uVar27 = uVar27 + 1;
                          fVar52 = (float)*(undefined8 *)pfVar37;
                          fVar48 = fVar67 * fVar52 + (float)uVar65;
                          fVar46 = fVar64 * fVar48 + fVar53;
                          uVar65 = (ulonglong)
                                   (uint)(fVar62 * fVar48 + fVar60 * fVar52 + (float)uVar57);
                          *pfVar37 = fVar46;
                          uVar57 = (ulonglong)(uint)(fVar61 * fVar52 + fVar63 * fVar48);
                          fVar53 = fVar66 * fVar46 + fVar45 * fVar48 + fVar69;
                          fVar69 = fVar68 * fVar48 + fVar54 * fVar46;
                          pfVar37 = pfVar37 + 1;
                        } while (uVar27 < uVar43);
                      }
                      *(ulonglong *)(iVar17 + 0x4c) = uVar65;
                      *(ulonglong *)(iVar17 + 0x50) = uVar57;
                      *(float *)(iVar17 + 0xa0) = fVar53;
                      *(float *)(iVar17 + 0xa4) = fVar69;
                      uVar50 = *puVar13;
                      uVar55 = *puVar25;
                    }
                    else if (iVar14 == 3) {
                      fVar67 = *(float *)(iVar17 + 0x38);
                      fVar60 = *(float *)(iVar17 + 0x3c);
                      fVar61 = *(float *)(iVar17 + 0x40);
                      fVar62 = *(float *)(iVar17 + 0x44);
                      fVar63 = *(float *)(iVar17 + 0x48);
                      fVar64 = *(float *)(iVar17 + 0x8c);
                      fVar45 = *(float *)(iVar17 + 0x90);
                      fVar68 = *(float *)(iVar17 + 0x94);
                      fVar66 = *(float *)(iVar17 + 0x98);
                      fVar54 = *(float *)(iVar17 + 0x9c);
                      fVar53 = *(float *)(iVar17 + 0xe0);
                      fVar10 = *(float *)(iVar17 + 0xe4);
                      fVar15 = *(float *)(iVar17 + 0xe8);
                      fVar29 = *(float *)(iVar17 + 0xec);
                      fVar44 = *(float *)(iVar17 + 0xf0);
                      fVar69 = *(float *)(iVar17 + 0x4c);
                      uVar65 = *(ulonglong *)(iVar17 + 0x50);
                      fVar48 = *(float *)(iVar17 + 0xa0);
                      fVar46 = *(float *)(iVar17 + 0xa4);
                      fVar52 = *(float *)(iVar17 + 0xf4);
                      fVar47 = *(float *)(iVar17 + 0xf8);
                      if (param_4 != uVar30) {
                        uVar27 = 0;
                        pfVar37 = pfVar11;
                        do {
                          fVar4 = *pfVar37;
                          uVar27 = uVar27 + 1;
                          fVar5 = fVar67 * fVar4 + fVar69;
                          fVar6 = fVar64 * fVar5 + fVar48;
                          fVar69 = fVar62 * fVar5 + fVar60 * fVar4 + (float)uVar65;
                          fVar7 = fVar53 * fVar6 + fVar52;
                          uVar65 = (ulonglong)(uint)(fVar61 * fVar4 + fVar63 * fVar5);
                          fVar48 = fVar66 * fVar6 + fVar45 * fVar5 + fVar46;
                          *pfVar37 = fVar7;
                          fVar46 = fVar68 * fVar5 + fVar54 * fVar6;
                          fVar52 = fVar29 * fVar7 + fVar10 * fVar6 + fVar47;
                          fVar47 = fVar15 * fVar6 + fVar44 * fVar7;
                          pfVar37 = pfVar37 + 1;
                        } while (uVar27 < uVar43);
                      }
                      *(float *)(iVar17 + 0x4c) = fVar69;
                      *(ulonglong *)(iVar17 + 0x50) = uVar65;
                      *(float *)(iVar17 + 0xa0) = fVar48;
                      *(float *)(iVar17 + 0xa4) = fVar46;
                      *(float *)(iVar17 + 0xf4) = fVar52;
                      *(float *)(iVar17 + 0xf8) = fVar47;
                      uVar50 = *puVar13;
                      uVar55 = *puVar25;
                    }
                    else {
                      iVar40 = 0;
                      uVar27 = 0;
                      if (iVar14 != 0) {
                        while( true ) {
                          FUN_ram_400934e0(iVar17 + iVar40 + 0x2c,pfVar11,pfVar11,uVar43);
                          uVar27 = uVar27 + 1;
                          iVar40 = iVar40 + 0x54;
                          if ((uint)piVar31[1] <= uVar27) break;
                          iVar17 = *piVar31;
                        }
                        uVar50 = *(undefined8 *)(*(int *)(iVar38 + 0x2c) + iVar26);
                        uVar55 = *(undefined8 *)(*(int *)(iVar38 + 0x30) + iVar26);
                        piVar31 = (int *)(*(int *)(iVar38 + 4) + iVar12);
                      }
                    }
                  }
                  FUN_ram_300464c2(uVar50,uVar55,fVar51,fVar1,piVar31 + 4,pfVar11,uVar43,uVar28);
                  iVar12 = *(int *)(iVar38 + 4) + iVar12;
                  iVar17 = *(int *)(iVar12 + 8);
                  if (iVar17 != 0) {
                    iVar14 = *(int *)(iVar12 + 0xc);
                    if (iVar14 == 2) {
                      fVar67 = *(float *)(iVar17 + 0x38);
                      fVar60 = *(float *)(iVar17 + 0x3c);
                      fVar61 = *(float *)(iVar17 + 0x40);
                      fVar62 = *(float *)(iVar17 + 0x44);
                      fVar63 = *(float *)(iVar17 + 0x48);
                      fVar64 = *(float *)(iVar17 + 0x8c);
                      fVar45 = *(float *)(iVar17 + 0x90);
                      fVar68 = *(float *)(iVar17 + 0x94);
                      fVar66 = *(float *)(iVar17 + 0x98);
                      fVar54 = *(float *)(iVar17 + 0x9c);
                      uVar65 = *(ulonglong *)(iVar17 + 0x4c);
                      uVar57 = *(ulonglong *)(iVar17 + 0x50);
                      fVar53 = *(float *)(iVar17 + 0xa0);
                      fVar69 = *(float *)(iVar17 + 0xa4);
                      if (param_4 != uVar30) {
                        uVar27 = 0;
                        pfVar37 = pfVar11;
                        do {
                          uVar27 = uVar27 + 1;
                          fVar52 = (float)*(undefined8 *)pfVar37;
                          fVar48 = fVar67 * fVar52 + (float)uVar65;
                          fVar46 = fVar64 * fVar48 + fVar53;
                          uVar65 = (ulonglong)
                                   (uint)(fVar62 * fVar48 + fVar60 * fVar52 + (float)uVar57);
                          *pfVar37 = fVar46;
                          uVar57 = (ulonglong)(uint)(fVar61 * fVar52 + fVar63 * fVar48);
                          fVar53 = fVar66 * fVar46 + fVar45 * fVar48 + fVar69;
                          fVar69 = fVar68 * fVar48 + fVar54 * fVar46;
                          pfVar37 = pfVar37 + 1;
                        } while (uVar27 < uVar43);
                      }
                      *(ulonglong *)(iVar17 + 0x4c) = uVar65;
                      *(ulonglong *)(iVar17 + 0x50) = uVar57;
                      *(float *)(iVar17 + 0xa0) = fVar53;
                      *(float *)(iVar17 + 0xa4) = fVar69;
                    }
                    else if (iVar14 == 3) {
                      fVar67 = *(float *)(iVar17 + 0x38);
                      fVar60 = *(float *)(iVar17 + 0x3c);
                      fVar61 = *(float *)(iVar17 + 0x40);
                      fVar62 = *(float *)(iVar17 + 0x44);
                      fVar63 = *(float *)(iVar17 + 0x48);
                      fVar64 = *(float *)(iVar17 + 0x8c);
                      fVar45 = *(float *)(iVar17 + 0x90);
                      fVar68 = *(float *)(iVar17 + 0x94);
                      fVar66 = *(float *)(iVar17 + 0x98);
                      fVar54 = *(float *)(iVar17 + 0x9c);
                      fVar53 = *(float *)(iVar17 + 0xe0);
                      fVar15 = *(float *)(iVar17 + 0xe4);
                      fVar29 = *(float *)(iVar17 + 0xe8);
                      fVar10 = *(float *)(iVar17 + 0xec);
                      fVar44 = *(float *)(iVar17 + 0xf0);
                      fVar69 = *(float *)(iVar17 + 0x4c);
                      uVar65 = *(ulonglong *)(iVar17 + 0x50);
                      fVar48 = *(float *)(iVar17 + 0xa0);
                      fVar46 = *(float *)(iVar17 + 0xa4);
                      fVar52 = *(float *)(iVar17 + 0xf4);
                      fVar47 = *(float *)(iVar17 + 0xf8);
                      if (param_4 != uVar30) {
                        uVar27 = 0;
                        pfVar37 = pfVar11;
                        do {
                          fVar4 = *pfVar37;
                          uVar27 = uVar27 + 1;
                          fVar5 = fVar67 * fVar4 + fVar69;
                          fVar6 = fVar64 * fVar5 + fVar48;
                          fVar69 = fVar62 * fVar5 + fVar60 * fVar4 + (float)uVar65;
                          fVar7 = fVar53 * fVar6 + fVar52;
                          uVar65 = (ulonglong)(uint)(fVar61 * fVar4 + fVar63 * fVar5);
                          fVar48 = fVar66 * fVar6 + fVar45 * fVar5 + fVar46;
                          *pfVar37 = fVar7;
                          fVar46 = fVar68 * fVar5 + fVar54 * fVar6;
                          fVar52 = fVar10 * fVar7 + fVar15 * fVar6 + fVar47;
                          fVar47 = fVar29 * fVar6 + fVar44 * fVar7;
                          pfVar37 = pfVar37 + 1;
                        } while (uVar27 < uVar43);
                      }
                      *(float *)(iVar17 + 0x4c) = fVar69;
                      *(ulonglong *)(iVar17 + 0x50) = uVar65;
                      *(float *)(iVar17 + 0xa0) = fVar48;
                      *(float *)(iVar17 + 0xa4) = fVar46;
                      *(float *)(iVar17 + 0xf4) = fVar52;
                      *(float *)(iVar17 + 0xf8) = fVar47;
                    }
                    else {
                      iVar40 = 0;
                      uVar27 = 0;
                      if (iVar14 != 0) {
                        while( true ) {
                          FUN_ram_400934e0(iVar17 + iVar40 + 0x2c,pfVar11,pfVar11,uVar43);
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
                  pfVar24 = (float *)(iVar26 + iVar17);
                  *pfVar37 = fVar51 * (float)(int)uVar28 + (float)*(undefined8 *)pfVar37;
                  *pfVar24 = fVar1 * (float)(int)uVar28 + *pfVar24;
                  if (uVar43 < uStack_d8) break;
                  uVar27 = *(uint *)(iVar38 + 8);
                  *pfVar37 = fVar56;
                  *pfVar24 = fVar58;
                  uVar34 = uVar34 + 1;
                  iVar41 = iVar41 + 4;
                  if (uVar27 <= uVar34) goto LAB_ram_30048324;
                }
                uVar34 = uVar34 + 1;
                iVar41 = iVar41 + 4;
              } while (uVar34 < *(uint *)(iVar38 + 8));
LAB_ram_30048324:
              uStack_d8 = *(uint *)(iVar38 + 0x48);
            }
            *(uint *)(iVar38 + 0x48) = uStack_d8 - uVar28;
            goto LAB_ram_30046f32;
          }
        }
        iVar12 = 0;
        uVar27 = 0;
        if (uVar34 != 0) {
          do {
            piVar31 = (int *)(*(int *)(iVar38 + 4) + iVar12);
            if (piVar31 != (int *)0x0) {
              iVar17 = *(int *)(*(int *)(iVar38 + 4) + iVar12);
              uVar2 = *(undefined4 *)(*(int *)(iVar38 + 0x2c) + uVar27 * 4);
              uVar3 = *(undefined4 *)(uVar27 * 4 + *(int *)(iVar38 + 0x30));
              if (iVar17 != 0) {
                iVar41 = piVar31[1];
                if (iVar41 == 2) {
                  fVar51 = *(float *)(iVar17 + 0x38);
                  fVar1 = *(float *)(iVar17 + 0x3c);
                  fVar56 = *(float *)(iVar17 + 0x40);
                  fVar58 = *(float *)(iVar17 + 0x44);
                  fVar67 = *(float *)(iVar17 + 0x48);
                  fVar60 = *(float *)(iVar17 + 0x8c);
                  fVar61 = *(float *)(iVar17 + 0x90);
                  fVar62 = *(float *)(iVar17 + 0x94);
                  fVar63 = *(float *)(iVar17 + 0x98);
                  fVar64 = *(float *)(iVar17 + 0x9c);
                  uVar65 = *(ulonglong *)(iVar17 + 0x4c);
                  uVar57 = *(ulonglong *)(iVar17 + 0x50);
                  fVar45 = *(float *)(iVar17 + 0xa0);
                  fVar68 = *(float *)(iVar17 + 0xa4);
                  if (param_4 != uVar30) {
                    uVar34 = 0;
                    pfVar37 = pfVar11;
                    do {
                      uVar34 = uVar34 + 1;
                      fVar53 = (float)*(undefined8 *)pfVar37;
                      fVar66 = fVar51 * fVar53 + (float)uVar65;
                      fVar54 = fVar60 * fVar66 + fVar45;
                      uVar65 = (ulonglong)(uint)(fVar58 * fVar66 + fVar1 * fVar53 + (float)uVar57);
                      *pfVar37 = fVar54;
                      uVar57 = (ulonglong)(uint)(fVar56 * fVar53 + fVar67 * fVar66);
                      fVar45 = fVar63 * fVar54 + fVar61 * fVar66 + fVar68;
                      fVar68 = fVar62 * fVar66 + fVar64 * fVar54;
                      pfVar37 = pfVar37 + 1;
                    } while (uVar34 < uVar43);
                  }
                  *(ulonglong *)(iVar17 + 0x4c) = uVar65;
                  *(ulonglong *)(iVar17 + 0x50) = uVar57;
                  *(float *)(iVar17 + 0xa0) = fVar45;
                  *(float *)(iVar17 + 0xa4) = fVar68;
                }
                else if (iVar41 == 3) {
                  fVar51 = *(float *)(iVar17 + 0x38);
                  fVar1 = *(float *)(iVar17 + 0x3c);
                  fVar56 = *(float *)(iVar17 + 0x40);
                  fVar58 = *(float *)(iVar17 + 0x44);
                  fVar67 = *(float *)(iVar17 + 0x48);
                  fVar60 = *(float *)(iVar17 + 0x8c);
                  fVar61 = *(float *)(iVar17 + 0x90);
                  fVar62 = *(float *)(iVar17 + 0x94);
                  fVar63 = *(float *)(iVar17 + 0x98);
                  fVar64 = *(float *)(iVar17 + 0x9c);
                  fVar45 = *(float *)(iVar17 + 0xe0);
                  fVar68 = *(float *)(iVar17 + 0xe4);
                  fVar66 = *(float *)(iVar17 + 0xe8);
                  fVar54 = *(float *)(iVar17 + 0xec);
                  fVar53 = *(float *)(iVar17 + 0xf0);
                  fVar69 = *(float *)(iVar17 + 0x4c);
                  uVar65 = *(ulonglong *)(iVar17 + 0x50);
                  fVar48 = *(float *)(iVar17 + 0xa0);
                  fVar46 = *(float *)(iVar17 + 0xa4);
                  fVar52 = *(float *)(iVar17 + 0xf4);
                  fVar47 = *(float *)(iVar17 + 0xf8);
                  if (param_4 != uVar30) {
                    uVar34 = 0;
                    pfVar37 = pfVar11;
                    do {
                      fVar10 = *pfVar37;
                      uVar34 = uVar34 + 1;
                      fVar15 = fVar51 * fVar10 + fVar69;
                      fVar29 = fVar60 * fVar15 + fVar48;
                      fVar69 = fVar58 * fVar15 + fVar1 * fVar10 + (float)uVar65;
                      fVar44 = fVar45 * fVar29 + fVar52;
                      uVar65 = (ulonglong)(uint)(fVar56 * fVar10 + fVar67 * fVar15);
                      fVar48 = fVar63 * fVar29 + fVar61 * fVar15 + fVar46;
                      *pfVar37 = fVar44;
                      fVar52 = fVar54 * fVar44 + fVar68 * fVar29 + fVar47;
                      fVar46 = fVar62 * fVar15 + fVar64 * fVar29;
                      fVar47 = fVar66 * fVar29 + fVar53 * fVar44;
                      pfVar37 = pfVar37 + 1;
                    } while (uVar34 < uVar43);
                  }
                  *(float *)(iVar17 + 0x4c) = fVar69;
                  *(ulonglong *)(iVar17 + 0x50) = uVar65;
                  *(float *)(iVar17 + 0xa0) = fVar48;
                  *(float *)(iVar17 + 0xa4) = fVar46;
                  *(float *)(iVar17 + 0xf4) = fVar52;
                  *(float *)(iVar17 + 0xf8) = fVar47;
                }
                else {
                  iVar26 = 0;
                  uVar34 = 0;
                  if (iVar41 != 0) {
                    while( true ) {
                      FUN_ram_400934e0(iVar17 + iVar26 + 0x2c,pfVar11,pfVar11,uVar43);
                      uVar34 = uVar34 + 1;
                      iVar26 = iVar26 + 0x54;
                      if ((uint)piVar31[1] <= uVar34) break;
                      iVar17 = *piVar31;
                    }
                  }
                }
              }
              FUN_ram_300464c2(uVar2,uVar3,0,piVar31 + 4,pfVar11,uVar43,0);
              iVar17 = piVar31[2];
              if (iVar17 == 0) {
LAB_ram_30047402:
                uVar34 = *(uint *)(iVar38 + 8);
              }
              else {
                iVar41 = piVar31[3];
                if (iVar41 == 2) {
                  fVar51 = *(float *)(iVar17 + 0x38);
                  fVar1 = *(float *)(iVar17 + 0x3c);
                  fVar56 = *(float *)(iVar17 + 0x40);
                  fVar58 = *(float *)(iVar17 + 0x44);
                  fVar67 = *(float *)(iVar17 + 0x48);
                  fVar60 = *(float *)(iVar17 + 0x8c);
                  fVar61 = *(float *)(iVar17 + 0x90);
                  fVar62 = *(float *)(iVar17 + 0x94);
                  fVar63 = *(float *)(iVar17 + 0x98);
                  fVar64 = *(float *)(iVar17 + 0x9c);
                  uVar65 = *(ulonglong *)(iVar17 + 0x4c);
                  uVar57 = *(ulonglong *)(iVar17 + 0x50);
                  fVar45 = *(float *)(iVar17 + 0xa0);
                  fVar68 = *(float *)(iVar17 + 0xa4);
                  if (param_4 != uVar30) {
                    uVar34 = 0;
                    pfVar37 = pfVar11;
                    do {
                      uVar34 = uVar34 + 1;
                      fVar53 = (float)*(undefined8 *)pfVar37;
                      fVar66 = fVar51 * fVar53 + (float)uVar65;
                      fVar54 = fVar60 * fVar66 + fVar45;
                      uVar65 = (ulonglong)(uint)(fVar58 * fVar66 + fVar1 * fVar53 + (float)uVar57);
                      *pfVar37 = fVar54;
                      uVar57 = (ulonglong)(uint)(fVar56 * fVar53 + fVar67 * fVar66);
                      fVar45 = fVar63 * fVar54 + fVar61 * fVar66 + fVar68;
                      fVar68 = fVar62 * fVar66 + fVar64 * fVar54;
                      pfVar37 = pfVar37 + 1;
                    } while (uVar34 < uVar43);
                  }
                  uVar34 = *(uint *)(iVar38 + 8);
                  *(ulonglong *)(iVar17 + 0x4c) = uVar65;
                  *(ulonglong *)(iVar17 + 0x50) = uVar57;
                  *(float *)(iVar17 + 0xa0) = fVar45;
                  *(float *)(iVar17 + 0xa4) = fVar68;
                }
                else {
                  if (iVar41 != 3) {
                    iVar26 = 0;
                    uVar34 = 0;
                    if (iVar41 != 0) {
                      while( true ) {
                        FUN_ram_400934e0(iVar17 + iVar26 + 0x2c,pfVar11,pfVar11,uVar43);
                        uVar34 = uVar34 + 1;
                        iVar26 = iVar26 + 0x54;
                        if ((uint)piVar31[3] <= uVar34) break;
                        iVar17 = piVar31[2];
                      }
                    }
                    goto LAB_ram_30047402;
                  }
                  fVar51 = *(float *)(iVar17 + 0x38);
                  fVar1 = *(float *)(iVar17 + 0x3c);
                  fVar56 = *(float *)(iVar17 + 0x40);
                  fVar58 = *(float *)(iVar17 + 0x44);
                  fVar67 = *(float *)(iVar17 + 0x48);
                  fVar60 = *(float *)(iVar17 + 0x8c);
                  fVar61 = *(float *)(iVar17 + 0x90);
                  fVar62 = *(float *)(iVar17 + 0x94);
                  fVar63 = *(float *)(iVar17 + 0x98);
                  fVar64 = *(float *)(iVar17 + 0x9c);
                  fVar45 = *(float *)(iVar17 + 0xe0);
                  fVar68 = *(float *)(iVar17 + 0xe4);
                  fVar66 = *(float *)(iVar17 + 0xe8);
                  fVar54 = *(float *)(iVar17 + 0xec);
                  fVar53 = *(float *)(iVar17 + 0xf0);
                  fVar69 = *(float *)(iVar17 + 0x4c);
                  uVar65 = *(ulonglong *)(iVar17 + 0x50);
                  fVar48 = *(float *)(iVar17 + 0xa0);
                  fVar46 = *(float *)(iVar17 + 0xa4);
                  fVar52 = *(float *)(iVar17 + 0xf4);
                  fVar47 = *(float *)(iVar17 + 0xf8);
                  if (param_4 != uVar30) {
                    uVar34 = 0;
                    pfVar37 = pfVar11;
                    do {
                      fVar10 = *pfVar37;
                      uVar34 = uVar34 + 1;
                      fVar15 = fVar51 * fVar10 + fVar69;
                      fVar29 = fVar60 * fVar15 + fVar48;
                      fVar69 = fVar58 * fVar15 + fVar1 * fVar10 + (float)uVar65;
                      fVar44 = fVar45 * fVar29 + fVar52;
                      uVar65 = (ulonglong)(uint)(fVar56 * fVar10 + fVar67 * fVar15);
                      fVar48 = fVar63 * fVar29 + fVar61 * fVar15 + fVar46;
                      *pfVar37 = fVar44;
                      fVar52 = fVar54 * fVar44 + fVar68 * fVar29 + fVar47;
                      fVar46 = fVar62 * fVar15 + fVar64 * fVar29;
                      fVar47 = fVar66 * fVar29 + fVar53 * fVar44;
                      pfVar37 = pfVar37 + 1;
                    } while (uVar34 < uVar43);
                  }
                  uVar34 = *(uint *)(iVar38 + 8);
                  *(float *)(iVar17 + 0x4c) = fVar69;
                  *(ulonglong *)(iVar17 + 0x50) = uVar65;
                  *(float *)(iVar17 + 0xa0) = fVar48;
                  *(float *)(iVar17 + 0xa4) = fVar46;
                  *(float *)(iVar17 + 0xf4) = fVar52;
                  *(float *)(iVar17 + 0xf8) = fVar47;
                }
              }
            }
            uVar27 = uVar27 + 1;
            iVar12 = iVar12 + 0x3c;
          } while (uVar27 < uVar34);
        }
      }
LAB_ram_30046f32:
      uVar34 = *(uint *)(iVar38 + 0x54);
      if (uVar34 != 0) {
        fVar51 = *(float *)(param_2 + 0xc);
        fVar1 = *(float *)(param_2 + 0x10);
        fVar56 = *(float *)(param_2 + 0x14);
        uStack_ac = SUB41(fVar51,0);
        uStack_ab = (undefined1)((uint)fVar51 >> 8);
        uStack_aa = (undefined1)((uint)fVar51 >> 0x10);
        uStack_a9 = (undefined1)((uint)fVar51 >> 0x18);
        uStack_a8 = SUB41(fVar1,0);
        uStack_a7 = (undefined1)((uint)fVar1 >> 8);
        uStack_a6 = (undefined1)((uint)fVar1 >> 0x10);
        uStack_a5 = (undefined1)((uint)fVar1 >> 0x18);
        uStack_a4 = fVar56;
        if ((((*(char *)(iVar38 + 0x80) == '\0') ||
             (fVar59 < ABS(fVar51 - *(float *)(iVar38 + 0x84)))) ||
            (fVar59 < ABS(fVar1 - *(float *)(iVar38 + 0x88)))) ||
           (fVar59 < ABS(fVar56 - *(float *)(iVar38 + 0x8c)))) {
          uVar27 = *(uint *)(iVar38 + 0x74);
          if (uVar27 < uVar34) goto LAB_ram_30046f5c;
          iVar12 = *(int *)(iVar38 + 0x70);
          uVar28 = 0;
          if (*(int *)(iVar38 + 0x5c) == 0) {
LAB_ram_30048460:
            fVar58 = DAT_ram_40094634;
            pfVar37 = (float *)(iVar12 + uVar28 * 4);
            do {
              *pfVar37 = fVar58;
              uVar28 = uVar28 + 1;
              pfVar37 = pfVar37 + 1;
            } while (uVar28 < uVar34);
          }
          else {
            puVar20 = *(undefined1 **)(iVar38 + 0x60);
            if ((puVar20 == (undefined1 *)0x0) || (*(int *)(iVar38 + 0x68) == 0)) {
              uVar28 = 0;
              goto LAB_ram_30048460;
            }
            uVar28 = 0;
            if (*(uint *)(iVar38 + 100) < 3) goto LAB_ram_30048460;
            uStack_a4._3_1_ = (undefined1)((uint)fVar56 >> 0x18);
            uStack_a4._0_1_ = SUB41(fVar56,0);
            uStack_a4._1_1_ = (undefined1)((uint)fVar56 >> 8);
            uStack_a4._2_1_ = (undefined1)((uint)fVar56 >> 0x10);
            puVar20[1] = uStack_ab;
            puVar20[2] = uStack_aa;
            *puVar20 = uStack_ac;
            puVar20[3] = uStack_a9;
            puVar20[4] = uStack_a8;
            puVar20[5] = uStack_a7;
            puVar20[6] = uStack_a6;
            puVar20[7] = uStack_a5;
            puVar20[8] = (undefined1)uStack_a4;
            puVar20[9] = uStack_a4._1_1_;
            puVar20[10] = uStack_a4._2_1_;
            puVar20[0xb] = uStack_a4._3_1_;
            fVar61 = DAT_ram_4009b370._4_4_;
            fVar60 = DAT_ram_40094ed4;
            fVar67 = DAT_ram_40094640;
            fVar58 = DAT_ram_4009463c;
            pfStack_dc = *(float **)(iVar38 + 0x68);
            uVar34 = *(uint *)(iVar38 + 0x5c);
            pfVar37 = *(float **)(iVar38 + 0x60);
            if (uVar34 == 0) {
              uVar28 = 3;
            }
            else {
              uVar28 = 3;
              uVar36 = 0;
              uVar42 = *(uint *)(iVar38 + 100);
              uVar32 = *(uint *)(iVar38 + 0x6c);
              pfVar24 = pfVar37;
              fVar62 = (float)DAT_ram_4009b370;
              do {
                uVar33 = *(uint *)(*(int *)(iVar38 + 0x58) + uVar36 * 0x1c);
                iVar17 = *(int *)(iVar38 + 0x58) + uVar36 * 0x1c;
                uVar39 = uVar42;
                pfVar37 = pfVar24;
                pfVar35 = pfStack_dc;
                if (uVar33 == 2) {
                  if (uVar28 != 0) {
                    pfVar21 = pfVar24;
                    do {
                      fVar64 = (float)*(undefined8 *)pfVar21;
                      fVar63 = _DAT_ram_3008475c;
                      if ((fVar67 < fVar64) && (fVar63 = _DAT_ram_30084f58, fVar64 < fVar58)) {
                        fVar63 = (fVar64 + fVar58) * fVar62;
                        uVar42 = (uint)(-1 < (int)fVar63) * (int)fVar63;
                        fVar63 = (fVar63 - (float)uVar42) *
                                 ((float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar42 + 0x201) * 4) -
                                 *(float *)(&DAT_ram_30083f5c + (uVar42 + 0x200) * 4)) +
                                 *(float *)(&DAT_ram_30083f5c + (uVar42 + 0x200) * 4);
                      }
                      pfVar18 = pfVar21 + 1;
                      *pfVar21 = fVar63;
                      pfVar21 = pfVar18;
                    } while (pfVar24 + uVar28 != pfVar18);
                  }
                }
                else if (uVar33 < 3) {
                  if (uVar33 == 0) {
                    uVar33 = (uint)*(ushort *)(iVar17 + 8);
                    if (((uVar33 != 0) && (uVar23 = (uint)*(ushort *)(iVar17 + 10), uVar23 != 0)) &&
                       (iVar41 = *(int *)(iVar17 + 0xc), iVar41 != 0)) {
                      if ((uVar32 < uVar33) || (uVar42 < uVar28)) {
                        uVar28 = 0;
                        goto LAB_ram_30047956;
                      }
                      if (uVar23 <= uVar28) {
                        uVar28 = uVar23;
                      }
                      uVar39 = uVar32;
                      uVar32 = uVar42;
                      pfVar37 = pfStack_dc;
                      pfVar35 = pfVar24;
                      if (uVar28 == 0) {
                        uVar23 = *(uint *)(iVar17 + 0x18);
                        uVar42 = 0;
                        do {
                          while (iVar41 = uVar42 * 4, uVar42 < uVar23) {
                            uVar42 = uVar42 + 1;
                            *pfStack_dc = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41);
                            pfStack_dc = pfStack_dc + 1;
                            uVar28 = uVar33;
                            if (uVar33 <= (uVar42 & 0xffff)) goto LAB_ram_30047934;
                          }
                          uVar42 = uVar42 + 1;
                          *pfStack_dc = 0.0;
                          pfStack_dc = pfStack_dc + 1;
                          uVar28 = uVar33;
                        } while ((uVar42 & 0xffff) < uVar33);
                      }
                      else {
                        uVar42 = *(uint *)(iVar17 + 0x18);
                        if (pfVar24 == (float *)0x0) {
                          uVar23 = 0;
                          do {
                            while (iVar41 = uVar23 * 4, uVar23 < uVar42) {
                              uVar23 = uVar23 + 1;
                              *pfStack_dc = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41)
                                            + 0.0;
                              pfStack_dc = pfStack_dc + 1;
                              uVar28 = uVar33;
                              if (uVar33 <= (uVar23 & 0xffff)) goto LAB_ram_30047934;
                            }
                            uVar23 = uVar23 + 1;
                            *pfStack_dc = 0.0;
                            pfStack_dc = pfStack_dc + 1;
                            uVar28 = uVar33;
                          } while ((uVar23 & 0xffff) < uVar33);
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
                              uStack_b0 = 0;
                              uStack_af = 0;
                              uStack_ae = 0;
                              uStack_ad = 0;
                              FUN_ram_40093480(iVar41 + iVar26,pfVar24,uVar28,&uStack_b0);
                              uVar34 = uVar34 + 1;
                              *pfStack_dc = (float)CONCAT13(uStack_ad,
                                                            CONCAT12(uStack_ae,
                                                                     CONCAT11(uStack_af,uStack_b0)))
                                            + fVar63;
                              iVar26 = iVar26 + uVar23 * 4;
                              fVar62 = (float)DAT_ram_4009b370;
                              if (uVar33 <= (uVar34 & 0xffff)) goto LAB_ram_30048b1e;
                              iVar41 = *(int *)(iVar17 + 0xc);
                              uVar42 = *(uint *)(iVar17 + 0x18);
                              pfStack_dc = pfStack_dc + 1;
                            }
                            uVar34 = uVar34 + 1;
                            *pfStack_dc = fVar63 + 0.0;
                            iVar26 = iVar26 + uVar23 * 4;
                            pfStack_dc = pfStack_dc + 1;
                          } while ((uVar34 & 0xffff) < uVar33);
LAB_ram_30048b1e:
                          uVar34 = *(uint *)(iVar38 + 0x5c);
                          uVar28 = uVar33;
                        }
                      }
                    }
                  }
                  else {
                    fVar63 = *(float *)(iVar17 + 4);
                    if (uVar28 != 0) {
                      pfVar21 = pfVar24;
                      do {
                        while (0.0 <= (float)*(undefined8 *)pfVar21) {
                          pfVar21 = pfVar21 + 1;
                          if (pfVar24 + uVar28 == pfVar21) goto LAB_ram_30047934;
                        }
                        pfVar18 = pfVar21 + 1;
                        *pfVar21 = fVar63 * (float)*(undefined8 *)pfVar21;
                        pfVar21 = pfVar18;
                      } while (pfVar18 != pfVar24 + uVar28);
                    }
                  }
                }
                else if ((uVar33 == 3) && (pfVar21 = pfVar24, uVar28 != 0)) {
                  do {
                    fVar64 = (float)*(undefined8 *)pfVar21;
                    fVar63 = _DAT_ram_30083f58;
                    if ((fVar49 < fVar64) && (fVar63 = _DAT_ram_30084754, fVar64 < fVar60)) {
                      fVar63 = (fVar64 + fVar60) * fVar61;
                      uVar42 = (uint)(-1 < (int)fVar63) * (int)fVar63;
                      iVar17 = uVar42 * 4;
                      fVar63 = (fVar63 - (float)uVar42) *
                               (*(float *)(&DAT_ram_30083f5c + iVar17) -
                               *(float *)(&DAT_ram_30083f58 + iVar17)) +
                               *(float *)(&DAT_ram_30083f58 + iVar17);
                    }
                    pfVar18 = pfVar21 + 1;
                    *pfVar21 = fVar63;
                    pfVar21 = pfVar18;
                  } while (pfVar24 + uVar28 != pfVar18);
                }
LAB_ram_30047934:
                pfStack_dc = pfVar35;
                uVar36 = uVar36 + 1;
                uVar42 = uVar39;
                pfVar24 = pfVar37;
              } while (uVar36 < uVar34);
            }
            if (iVar12 != 0) {
              if (uVar27 < uVar28) {
                uVar28 = uVar27;
              }
              FUN_ram_4000304c(iVar12,pfVar37,uVar28 << 2);
            }
LAB_ram_30047956:
            uVar34 = *(uint *)(iVar38 + 0x54);
            if (uVar28 < uVar34) {
              iVar12 = *(int *)(iVar38 + 0x70);
              goto LAB_ram_30048460;
            }
          }
          fVar58 = DAT_ram_40094634;
          iVar12 = *(int *)(iVar38 + 0x50);
          iVar17 = 0;
          uVar27 = 0;
          if (uVar34 != 0) {
            do {
              iVar41 = iVar12 + iVar17;
              fVar67 = fVar58;
              if (uVar27 < *(uint *)(iVar38 + 0x74)) {
                fVar67 = *(float *)(*(int *)(iVar38 + 0x70) + uVar27 * 4);
              }
              uVar27 = uVar27 + 1;
              iVar17 = iVar17 + 0x54;
              fVar67 = (*(float *)(iVar38 + 0x7c) - *(float *)(iVar38 + 0x78)) * fVar67 +
                       *(float *)(iVar38 + 0x78);
              if ((iVar41 != 0) && (fVar59 < ABS((float)*(undefined8 *)(iVar41 + 0xc) - fVar67))) {
                *(ulonglong *)(iVar41 + 0xc) = (ulonglong)(uint)fVar67;
                FUN_ram_4008597e(iVar41);
                uVar34 = *(uint *)(iVar38 + 0x54);
                iVar12 = *(int *)(iVar38 + 0x50);
              }
            } while (uVar27 < uVar34);
          }
          *(float *)(iVar38 + 0x84) = fVar51;
          *(float *)(iVar38 + 0x88) = fVar1;
          *(float *)(iVar38 + 0x8c) = fVar56;
          *(undefined1 *)(iVar38 + 0x80) = 1;
        }
        else {
          iVar12 = *(int *)(iVar38 + 0x50);
        }
        if (iVar12 != 0) {
          iVar17 = *(int *)(iVar38 + 0x54);
          if (iVar17 == 2) {
            fVar51 = *(float *)(iVar12 + 0x38);
            fVar1 = *(float *)(iVar12 + 0x3c);
            fVar56 = *(float *)(iVar12 + 0x40);
            fVar58 = *(float *)(iVar12 + 0x44);
            fVar67 = *(float *)(iVar12 + 0x48);
            fVar60 = *(float *)(iVar12 + 0x8c);
            fVar61 = *(float *)(iVar12 + 0x90);
            fVar62 = *(float *)(iVar12 + 0x94);
            fVar63 = *(float *)(iVar12 + 0x98);
            fVar64 = *(float *)(iVar12 + 0x9c);
            uVar65 = *(ulonglong *)(iVar12 + 0x4c);
            uVar57 = *(ulonglong *)(iVar12 + 0x50);
            fVar45 = *(float *)(iVar12 + 0xa0);
            fVar68 = *(float *)(iVar12 + 0xa4);
            if (param_4 != uVar30) {
              uVar34 = 0;
              pfVar37 = pfVar11;
              do {
                uVar34 = uVar34 + 1;
                fVar53 = (float)*(undefined8 *)pfVar37;
                fVar66 = fVar51 * fVar53 + (float)uVar65;
                fVar54 = fVar60 * fVar66 + fVar45;
                uVar65 = (ulonglong)(uint)(fVar58 * fVar66 + fVar1 * fVar53 + (float)uVar57);
                *pfVar37 = fVar54;
                uVar57 = (ulonglong)(uint)(fVar56 * fVar53 + fVar67 * fVar66);
                fVar45 = fVar63 * fVar54 + fVar61 * fVar66 + fVar68;
                fVar68 = fVar62 * fVar66 + fVar64 * fVar54;
                pfVar37 = pfVar37 + 1;
              } while (uVar34 < uVar43);
            }
            *(ulonglong *)(iVar12 + 0x4c) = uVar65;
            *(ulonglong *)(iVar12 + 0x50) = uVar57;
            *(float *)(iVar12 + 0xa0) = fVar45;
            *(float *)(iVar12 + 0xa4) = fVar68;
          }
          else if (iVar17 == 3) {
            fVar51 = *(float *)(iVar12 + 0x38);
            fVar1 = *(float *)(iVar12 + 0x3c);
            fVar56 = *(float *)(iVar12 + 0x40);
            fVar58 = *(float *)(iVar12 + 0x44);
            fVar67 = *(float *)(iVar12 + 0x48);
            fVar60 = *(float *)(iVar12 + 0x8c);
            fVar61 = *(float *)(iVar12 + 0x90);
            fVar62 = *(float *)(iVar12 + 0x94);
            fVar63 = *(float *)(iVar12 + 0x98);
            fVar64 = *(float *)(iVar12 + 0x9c);
            fVar45 = *(float *)(iVar12 + 0xe0);
            fVar68 = *(float *)(iVar12 + 0xe4);
            fVar66 = *(float *)(iVar12 + 0xe8);
            fVar54 = *(float *)(iVar12 + 0xec);
            fVar53 = *(float *)(iVar12 + 0xf0);
            fVar69 = *(float *)(iVar12 + 0x4c);
            uVar65 = *(ulonglong *)(iVar12 + 0x50);
            fVar48 = *(float *)(iVar12 + 0xa0);
            fVar46 = *(float *)(iVar12 + 0xa4);
            fVar52 = *(float *)(iVar12 + 0xf4);
            fVar47 = *(float *)(iVar12 + 0xf8);
            if (param_4 != uVar30) {
              uVar34 = 0;
              pfVar37 = pfVar11;
              do {
                fVar10 = *pfVar37;
                uVar34 = uVar34 + 1;
                fVar15 = fVar51 * fVar10 + fVar69;
                fVar29 = fVar60 * fVar15 + fVar48;
                fVar69 = fVar58 * fVar15 + fVar1 * fVar10 + (float)uVar65;
                fVar44 = fVar45 * fVar29 + fVar52;
                uVar65 = (ulonglong)(uint)(fVar56 * fVar10 + fVar67 * fVar15);
                fVar48 = fVar63 * fVar29 + fVar61 * fVar15 + fVar46;
                *pfVar37 = fVar44;
                fVar52 = fVar54 * fVar44 + fVar68 * fVar29 + fVar47;
                fVar46 = fVar62 * fVar15 + fVar64 * fVar29;
                fVar47 = fVar66 * fVar29 + fVar53 * fVar44;
                pfVar37 = pfVar37 + 1;
              } while (uVar34 < uVar43);
            }
            *(float *)(iVar12 + 0x4c) = fVar69;
            *(ulonglong *)(iVar12 + 0x50) = uVar65;
            *(float *)(iVar12 + 0xa0) = fVar48;
            *(float *)(iVar12 + 0xa4) = fVar46;
            *(float *)(iVar12 + 0xf4) = fVar52;
            *(float *)(iVar12 + 0xf8) = fVar47;
          }
          else {
            iVar41 = 0;
            uVar34 = 0;
            if (iVar17 != 0) {
              while( true ) {
                FUN_ram_400934e0(iVar12 + iVar41 + 0x2c,pfVar11,pfVar11,uVar43);
                uVar34 = uVar34 + 1;
                iVar41 = iVar41 + 0x54;
                if (*(uint *)(iVar38 + 0x54) <= uVar34) break;
                iVar12 = *(int *)(iVar38 + 0x50);
              }
            }
          }
        }
      }
LAB_ram_30046f5c:
      fVar51 = *(float *)(param_2 + 0x20);
      if ((*(char *)(iVar38 + 0x13c) == '\0') || (fVar59 < ABS(fVar51 - *(float *)(iVar38 + 0x140)))
         ) {
        fVar1 = fVar51 * *(float *)(iVar38 + 0x138);
        if (fVar59 < ABS(fVar1 + *(float *)(iVar38 + 0x9c))) {
          *(float *)(iVar38 + 0x9c) = -fVar1;
          FUN_ram_4008597e(iVar38 + 0x90);
        }
        if (fVar59 < ABS(*(float *)(iVar38 + 0xf0) - fVar1)) {
          *(float *)(iVar38 + 0xf0) = fVar1;
          FUN_ram_4008597e(iVar38 + 0xe4);
        }
        *(float *)(iVar38 + 0x140) = fVar51;
        *(undefined1 *)(iVar38 + 0x13c) = 1;
      }
      FUN_ram_400934e0(iVar38 + 0xbc,pfVar11,pfVar11,uVar43);
      FUN_ram_400934e0(iVar38 + 0x110,pfVar11,pfVar11,uVar43);
      fVar51 = *(float *)(param_2 + 0x1c);
      fVar1 = *(float *)(param_2 + 0x18);
      uStack_b0 = SUB41(fVar51,0);
      uStack_af = (undefined1)((uint)fVar51 >> 8);
      uStack_ae = (undefined1)((uint)fVar51 >> 0x10);
      uStack_ad = (undefined1)((uint)fVar51 >> 0x18);
      if ((*(char *)(iVar38 + 0x23c) == '\0') || (fVar59 < ABS(fVar51 - *(float *)(iVar38 + 0x240)))
         ) {
        fVar56 = DAT_ram_40094634;
        if ((*(int *)(iVar38 + 0x19c) != 0) &&
           (((puVar20 = *(undefined1 **)(iVar38 + 0x1a0), puVar20 != (undefined1 *)0x0 &&
             (*(int *)(iVar38 + 0x1a8) != 0)) && (*(int *)(iVar38 + 0x1a4) != 0)))) {
          iVar12 = *(int *)(iVar38 + 0x228);
          uVar27 = *(uint *)(iVar38 + 0x22c);
          *puVar20 = uStack_b0;
          puVar20[1] = uStack_af;
          puVar20[2] = uStack_ae;
          puVar20[3] = uStack_ad;
          fVar67 = DAT_ram_4009b370._4_4_;
          fVar58 = DAT_ram_40094640;
          uVar34 = *(uint *)(iVar38 + 0x19c);
          pfVar37 = *(float **)(iVar38 + 0x1a0);
          if (uVar34 == 0) {
            if ((iVar12 != 0) && (uVar27 != 0)) {
              uVar28 = 1;
              goto LAB_ram_30047a78;
            }
          }
          else {
            uVar28 = 1;
            uVar36 = 0;
            uVar42 = *(uint *)(iVar38 + 0x1a4);
            uVar32 = *(uint *)(iVar38 + 0x1ac);
            pfVar24 = *(float **)(iVar38 + 0x1a8);
            pfVar35 = pfVar37;
            do {
              uVar33 = *(uint *)(*(int *)(iVar38 + 0x198) + uVar36 * 0x1c);
              iVar17 = *(int *)(iVar38 + 0x198) + uVar36 * 0x1c;
              uVar39 = uVar42;
              pfVar21 = pfVar24;
              pfVar37 = pfVar35;
              if (uVar33 == 2) {
                if (uVar28 != 0) {
                  pfVar24 = pfVar35;
                  do {
                    fVar60 = (float)*(undefined8 *)pfVar24;
                    fVar56 = _DAT_ram_3008475c;
                    if ((fVar58 < fVar60) && (fVar56 = _DAT_ram_30084f58, fVar60 < fVar8)) {
                      fVar56 = (fVar60 + fVar8) * (float)DAT_ram_4009b370;
                      uVar42 = (uint)(-1 < (int)fVar56) * (int)fVar56;
                      fVar56 = (fVar56 - (float)uVar42) *
                               ((float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar42 + 0x201) * 4) -
                               *(float *)(&DAT_ram_30083f5c + (uVar42 + 0x200) * 4)) +
                               *(float *)(&DAT_ram_30083f5c + (uVar42 + 0x200) * 4);
                    }
                    pfVar18 = pfVar24 + 1;
                    *pfVar24 = fVar56;
                    pfVar24 = pfVar18;
                  } while (pfVar18 != pfVar35 + uVar28);
                }
              }
              else if (uVar33 < 3) {
                if (uVar33 == 0) {
                  uVar33 = (uint)*(ushort *)(iVar17 + 8);
                  if (((uVar33 != 0) && (uVar23 = (uint)*(ushort *)(iVar17 + 10), uVar23 != 0)) &&
                     (iVar41 = *(int *)(iVar17 + 0xc), iVar41 != 0)) {
                    fVar56 = DAT_ram_40094634;
                    if ((uVar32 < uVar33) || (uVar42 < uVar28)) goto LAB_ram_30047010;
                    if (uVar23 <= uVar28) {
                      uVar28 = uVar23;
                    }
                    uVar39 = uVar32;
                    uVar32 = uVar42;
                    pfVar21 = pfVar35;
                    pfVar37 = pfVar24;
                    if (uVar28 == 0) {
                      uVar23 = *(uint *)(iVar17 + 0x18);
                      uVar42 = 0;
                      do {
                        while (iVar41 = uVar42 * 4, uVar42 < uVar23) {
                          uVar42 = uVar42 + 1;
                          *pfVar24 = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41);
                          pfVar24 = pfVar24 + 1;
                          uVar28 = uVar33;
                          if (uVar33 <= (uVar42 & 0xffff)) goto LAB_ram_30047750;
                        }
                        uVar42 = uVar42 + 1;
                        *pfVar24 = 0.0;
                        pfVar24 = pfVar24 + 1;
                        uVar28 = uVar33;
                      } while ((uVar42 & 0xffff) < uVar33);
                    }
                    else {
                      uVar42 = *(uint *)(iVar17 + 0x18);
                      if (pfVar35 == (float *)0x0) {
                        uVar23 = 0;
                        do {
                          while (iVar41 = uVar23 * 4, uVar23 < uVar42) {
                            uVar23 = uVar23 + 1;
                            *pfVar24 = (float)*(undefined8 *)(*(int *)(iVar17 + 0x14) + iVar41) +
                                       0.0;
                            pfVar24 = pfVar24 + 1;
                            uVar28 = uVar33;
                            if (uVar33 <= (uVar23 & 0xffff)) goto LAB_ram_30047750;
                          }
                          uVar23 = uVar23 + 1;
                          *pfVar24 = 0.0;
                          pfVar24 = pfVar24 + 1;
                          uVar28 = uVar33;
                        } while ((uVar23 & 0xffff) < uVar33);
                      }
                      else {
                        iVar26 = 0;
                        uVar34 = 0;
                        do {
                          while( true ) {
                            fVar56 = 0.0;
                            if (uVar34 < uVar42) {
                              fVar56 = *(float *)(*(int *)(iVar17 + 0x14) + uVar34 * 4);
                            }
                            if (iVar41 + iVar26 == 0) break;
                            uStack_ac = 0;
                            uStack_ab = 0;
                            uStack_aa = 0;
                            uStack_a9 = 0;
                            FUN_ram_40093480(iVar41 + iVar26,pfVar35,uVar28,&uStack_ac);
                            uVar34 = uVar34 + 1;
                            *pfVar24 = (float)CONCAT13(uStack_a9,
                                                       CONCAT12(uStack_aa,
                                                                CONCAT11(uStack_ab,uStack_ac))) +
                                       fVar56;
                            iVar26 = iVar26 + uVar23 * 4;
                            if (uVar33 <= (uVar34 & 0xffff)) goto LAB_ram_300486e4;
                            iVar41 = *(int *)(iVar17 + 0xc);
                            uVar42 = *(uint *)(iVar17 + 0x18);
                            pfVar24 = pfVar24 + 1;
                          }
                          uVar34 = uVar34 + 1;
                          iVar26 = iVar26 + uVar23 * 4;
                          *pfVar24 = fVar56 + 0.0;
                          pfVar24 = pfVar24 + 1;
                        } while ((uVar34 & 0xffff) < uVar33);
LAB_ram_300486e4:
                        uVar34 = *(uint *)(iVar38 + 0x19c);
                        uVar28 = uVar33;
                      }
                    }
                  }
                }
                else {
                  fVar56 = *(float *)(iVar17 + 4);
                  if (uVar28 != 0) {
                    pfVar24 = pfVar35;
                    do {
                      while ((float)*(undefined8 *)pfVar24 < 0.0) {
                        pfVar18 = pfVar24 + 1;
                        *pfVar24 = fVar56 * (float)*(undefined8 *)pfVar24;
                        pfVar24 = pfVar18;
                        if (pfVar35 + uVar28 == pfVar18) goto LAB_ram_30047750;
                      }
                      pfVar24 = pfVar24 + 1;
                    } while (pfVar24 != pfVar35 + uVar28);
                  }
                }
              }
              else if ((uVar33 == 3) && (pfVar24 = pfVar35, uVar28 != 0)) {
                do {
                  fVar60 = (float)*(undefined8 *)pfVar24;
                  fVar56 = _DAT_ram_30083f58;
                  if ((fVar49 < fVar60) && (fVar56 = _DAT_ram_30084754, fVar60 < fVar9)) {
                    fVar56 = (fVar60 + fVar9) * fVar67;
                    uVar42 = (uint)(-1 < (int)fVar56) * (int)fVar56;
                    iVar17 = uVar42 * 4;
                    fVar56 = (fVar56 - (float)uVar42) *
                             (*(float *)(&DAT_ram_30083f5c + iVar17) -
                             *(float *)(&DAT_ram_30083f58 + iVar17)) +
                             *(float *)(&DAT_ram_30083f58 + iVar17);
                  }
                  pfVar18 = pfVar24 + 1;
                  *pfVar24 = fVar56;
                  pfVar24 = pfVar18;
                } while (pfVar35 + uVar28 != pfVar18);
              }
LAB_ram_30047750:
              uVar36 = uVar36 + 1;
              uVar42 = uVar39;
              pfVar24 = pfVar21;
              pfVar35 = pfVar37;
            } while (uVar36 < uVar34);
            if ((iVar12 != 0) && (uVar27 != 0)) {
LAB_ram_30047a78:
              if (uVar27 < uVar28) {
                uVar28 = uVar27;
              }
              FUN_ram_4000304c(iVar12,pfVar37,uVar28 << 2);
            }
            fVar56 = DAT_ram_40094634;
            if (uVar28 == 0) goto LAB_ram_30047010;
          }
          fVar56 = DAT_ram_40094634;
          if (*(undefined8 **)(iVar38 + 0x228) != (undefined8 *)0x0) {
            fVar56 = (float)**(undefined8 **)(iVar38 + 0x228);
          }
        }
LAB_ram_30047010:
        fVar56 = (*(float *)(iVar38 + 0x234) - *(float *)(iVar38 + 0x230)) * fVar56 +
                 *(float *)(iVar38 + 0x230);
        if (fVar59 < ABS(*(float *)(iVar38 + 0x150) - fVar56)) {
          *(float *)(iVar38 + 0x150) = fVar56;
          FUN_ram_4008597e(iVar38 + 0x144);
        }
        *(float *)(iVar38 + 0x240) = fVar51;
        *(undefined1 *)(iVar38 + 0x23c) = 1;
      }
      fVar45 = DAT_ram_4009b370._4_4_;
      fVar64 = DAT_ram_40094ed4;
      fVar63 = _DAT_ram_30083f58;
      fVar59 = *(float *)(iVar38 + 400);
      fVar51 = *(float *)(iVar38 + 0x194);
      fVar56 = *(float *)(iVar38 + 0x17c);
      fVar58 = *(float *)(iVar38 + 0x180);
      fVar67 = *(float *)(iVar38 + 0x188);
      fVar60 = *(float *)(iVar38 + 0x184);
      fVar61 = *(float *)(iVar38 + 0x18c);
      fVar62 = *(float *)(iVar38 + 0x238);
      uVar65 = (ulonglong)(uint)_DAT_ram_30084754;
      pfVar35 = (float *)(iVar38 + 0x244);
      uVar34 = 0;
      pfVar37 = pfVar11;
      pfVar24 = pfVar35;
      do {
        uVar34 = uVar34 + 1;
        fVar66 = fVar1 * (float)*(undefined8 *)pfVar37;
        pfVar37 = pfVar37 + 1;
        fVar68 = fVar66 * fVar56 + fVar59;
        fVar54 = fVar68 * fVar62;
        fVar59 = fVar68 * fVar67 + fVar66 * fVar58 + fVar51;
        fVar51 = fVar66 * fVar60 + fVar68 * fVar61;
        uVar57 = (ulonglong)(uint)fVar63;
        if ((fVar49 < fVar54) && (uVar57 = uVar65, fVar54 < fVar64)) {
          fVar68 = (fVar54 + fVar64) * fVar45;
          uVar27 = (uint)(-1 < (int)fVar68) * (int)fVar68;
          iVar12 = uVar27 * 4;
          uVar57 = (ulonglong)
                   (uint)((fVar68 - (float)uVar27) *
                          (*(float *)(&DAT_ram_30083f5c + iVar12) -
                          *(float *)(&DAT_ram_30083f58 + iVar12)) +
                         *(float *)(&DAT_ram_30083f58 + iVar12));
        }
        *(ulonglong *)pfVar24 = uVar57;
        pfVar24[0x80] = -(float)uVar57;
        pfVar24 = pfVar24 + 1;
      } while (uVar34 < uVar43);
      iVar12 = *(int *)(iVar38 + 0x1b0);
      *(float *)(iVar38 + 400) = fVar59;
      *(float *)(iVar38 + 0x194) = fVar51;
      if (iVar12 != 0) {
        iVar17 = *(int *)(iVar38 + 0x1b4);
        if (iVar17 == 2) {
          fVar59 = *(float *)(iVar12 + 0x38);
          fVar51 = *(float *)(iVar12 + 0x3c);
          fVar1 = *(float *)(iVar12 + 0x40);
          fVar56 = *(float *)(iVar12 + 0x44);
          fVar58 = *(float *)(iVar12 + 0x48);
          fVar67 = *(float *)(iVar12 + 0x8c);
          fVar60 = *(float *)(iVar12 + 0x90);
          fVar61 = *(float *)(iVar12 + 0x94);
          fVar62 = *(float *)(iVar12 + 0x98);
          fVar63 = *(float *)(iVar12 + 0x9c);
          uVar65 = *(ulonglong *)(iVar12 + 0x4c);
          uVar57 = *(ulonglong *)(iVar12 + 0x50);
          fVar64 = *(float *)(iVar12 + 0xa0);
          fVar45 = *(float *)(iVar12 + 0xa4);
          if (param_4 != uVar30) {
            uVar34 = 0;
            pfVar37 = pfVar35;
            do {
              uVar34 = uVar34 + 1;
              fVar54 = (float)*(undefined8 *)pfVar37;
              fVar68 = fVar59 * fVar54 + (float)uVar65;
              fVar66 = fVar67 * fVar68 + fVar64;
              uVar65 = (ulonglong)(uint)(fVar56 * fVar68 + fVar51 * fVar54 + (float)uVar57);
              *pfVar37 = fVar66;
              uVar57 = (ulonglong)(uint)(fVar1 * fVar54 + fVar58 * fVar68);
              fVar64 = fVar62 * fVar66 + fVar60 * fVar68 + fVar45;
              fVar45 = fVar61 * fVar68 + fVar63 * fVar66;
              pfVar37 = pfVar37 + 1;
            } while (uVar34 < uVar43);
          }
          *(ulonglong *)(iVar12 + 0x4c) = uVar65;
          *(ulonglong *)(iVar12 + 0x50) = uVar57;
          *(float *)(iVar12 + 0xa0) = fVar64;
          *(float *)(iVar12 + 0xa4) = fVar45;
        }
        else if (iVar17 == 3) {
          fVar59 = *(float *)(iVar12 + 0x38);
          fVar51 = *(float *)(iVar12 + 0x3c);
          fVar1 = *(float *)(iVar12 + 0x40);
          fVar56 = *(float *)(iVar12 + 0x44);
          fVar58 = *(float *)(iVar12 + 0x48);
          fVar67 = *(float *)(iVar12 + 0x8c);
          fVar60 = *(float *)(iVar12 + 0x90);
          fVar61 = *(float *)(iVar12 + 0x94);
          fVar62 = *(float *)(iVar12 + 0x98);
          fVar63 = *(float *)(iVar12 + 0x9c);
          fVar64 = *(float *)(iVar12 + 0xe0);
          fVar45 = *(float *)(iVar12 + 0xe4);
          fVar68 = *(float *)(iVar12 + 0xe8);
          fVar66 = *(float *)(iVar12 + 0xec);
          fVar54 = *(float *)(iVar12 + 0xf0);
          fVar53 = *(float *)(iVar12 + 0x4c);
          uVar65 = *(ulonglong *)(iVar12 + 0x50);
          fVar69 = *(float *)(iVar12 + 0xa0);
          fVar48 = *(float *)(iVar12 + 0xa4);
          fVar46 = *(float *)(iVar12 + 0xf4);
          fVar52 = *(float *)(iVar12 + 0xf8);
          if (param_4 != uVar30) {
            uVar34 = 0;
            pfVar37 = pfVar35;
            do {
              fVar47 = *pfVar37;
              uVar34 = uVar34 + 1;
              fVar10 = fVar59 * fVar47 + fVar53;
              fVar15 = fVar67 * fVar10 + fVar69;
              fVar53 = fVar56 * fVar10 + fVar51 * fVar47 + (float)uVar65;
              fVar29 = fVar64 * fVar15 + fVar46;
              uVar65 = (ulonglong)(uint)(fVar1 * fVar47 + fVar58 * fVar10);
              fVar69 = fVar62 * fVar15 + fVar60 * fVar10 + fVar48;
              *pfVar37 = fVar29;
              fVar46 = fVar66 * fVar29 + fVar45 * fVar15 + fVar52;
              fVar48 = fVar61 * fVar10 + fVar63 * fVar15;
              fVar52 = fVar68 * fVar15 + fVar54 * fVar29;
              pfVar37 = pfVar37 + 1;
            } while (uVar34 < uVar43);
          }
          *(float *)(iVar12 + 0x4c) = fVar53;
          *(ulonglong *)(iVar12 + 0x50) = uVar65;
          *(float *)(iVar12 + 0xa0) = fVar69;
          *(float *)(iVar12 + 0xa4) = fVar48;
          *(float *)(iVar12 + 0xf4) = fVar46;
          *(float *)(iVar12 + 0xf8) = fVar52;
        }
        else {
          iVar41 = 0;
          uVar34 = 0;
          if (iVar17 != 0) {
            while( true ) {
              FUN_ram_400934e0(iVar12 + iVar41 + 0x2c,pfVar35,pfVar35,uVar43);
              uVar34 = uVar34 + 1;
              iVar41 = iVar41 + 0x54;
              if (*(uint *)(iVar38 + 0x1b4) <= uVar34) break;
              iVar12 = *(int *)(iVar38 + 0x1b0);
            }
          }
        }
      }
      uVar2 = DAT_ram_40094604;
      FUN_ram_300464c2(DAT_ram_40094604,DAT_ram_40094604,0,iVar38 + 0x1c0,pfVar35,uVar43,0);
      iVar12 = *(int *)(iVar38 + 0x1b8);
      if (iVar12 != 0) {
        iVar17 = *(int *)(iVar38 + 0x1bc);
        if (iVar17 == 2) {
          fVar59 = *(float *)(iVar12 + 0x38);
          fVar51 = *(float *)(iVar12 + 0x3c);
          fVar1 = *(float *)(iVar12 + 0x40);
          fVar56 = *(float *)(iVar12 + 0x44);
          fVar58 = *(float *)(iVar12 + 0x48);
          fVar67 = *(float *)(iVar12 + 0x8c);
          fVar60 = *(float *)(iVar12 + 0x90);
          fVar61 = *(float *)(iVar12 + 0x94);
          fVar62 = *(float *)(iVar12 + 0x98);
          fVar63 = *(float *)(iVar12 + 0x9c);
          uVar65 = *(ulonglong *)(iVar12 + 0x4c);
          uVar57 = *(ulonglong *)(iVar12 + 0x50);
          fVar64 = *(float *)(iVar12 + 0xa0);
          fVar45 = *(float *)(iVar12 + 0xa4);
          if (param_4 != uVar30) {
            uVar34 = 0;
            pfVar37 = pfVar35;
            do {
              fVar68 = *pfVar37;
              uVar34 = uVar34 + 1;
              fVar66 = fVar59 * fVar68 + (float)uVar65;
              fVar54 = fVar67 * fVar66 + fVar64;
              uVar65 = (ulonglong)(uint)(fVar56 * fVar66 + fVar51 * fVar68 + (float)uVar57);
              *pfVar37 = fVar54;
              uVar57 = (ulonglong)(uint)(fVar1 * fVar68 + fVar58 * fVar66);
              fVar64 = fVar62 * fVar54 + fVar60 * fVar66 + fVar45;
              fVar45 = fVar61 * fVar66 + fVar63 * fVar54;
              pfVar37 = pfVar37 + 1;
            } while (uVar34 < uVar43);
          }
          *(ulonglong *)(iVar12 + 0x4c) = uVar65;
          *(ulonglong *)(iVar12 + 0x50) = uVar57;
          *(float *)(iVar12 + 0xa0) = fVar64;
          *(float *)(iVar12 + 0xa4) = fVar45;
        }
        else if (iVar17 == 3) {
          fVar59 = *(float *)(iVar12 + 0x38);
          fVar51 = *(float *)(iVar12 + 0x3c);
          fVar1 = *(float *)(iVar12 + 0x40);
          fVar56 = *(float *)(iVar12 + 0x44);
          fVar58 = *(float *)(iVar12 + 0x48);
          fVar67 = *(float *)(iVar12 + 0x8c);
          fVar60 = *(float *)(iVar12 + 0x90);
          fVar61 = *(float *)(iVar12 + 0x94);
          fVar62 = *(float *)(iVar12 + 0x98);
          fVar63 = *(float *)(iVar12 + 0x9c);
          fVar64 = *(float *)(iVar12 + 0xe0);
          fVar45 = *(float *)(iVar12 + 0xe4);
          fVar68 = *(float *)(iVar12 + 0xe8);
          fVar66 = *(float *)(iVar12 + 0xec);
          fVar54 = *(float *)(iVar12 + 0xf0);
          fVar53 = *(float *)(iVar12 + 0x4c);
          uVar65 = *(ulonglong *)(iVar12 + 0x50);
          fVar69 = *(float *)(iVar12 + 0xa0);
          fVar48 = *(float *)(iVar12 + 0xa4);
          fVar46 = *(float *)(iVar12 + 0xf4);
          fVar52 = *(float *)(iVar12 + 0xf8);
          if (param_4 != uVar30) {
            uVar34 = 0;
            pfVar37 = pfVar35;
            do {
              fVar47 = *pfVar37;
              uVar34 = uVar34 + 1;
              fVar10 = fVar59 * fVar47 + fVar53;
              fVar15 = fVar67 * fVar10 + fVar69;
              fVar53 = fVar56 * fVar10 + fVar51 * fVar47 + (float)uVar65;
              fVar29 = fVar64 * fVar15 + fVar46;
              uVar65 = (ulonglong)(uint)(fVar1 * fVar47 + fVar58 * fVar10);
              fVar69 = fVar62 * fVar15 + fVar60 * fVar10 + fVar48;
              *pfVar37 = fVar29;
              fVar46 = fVar66 * fVar29 + fVar45 * fVar15 + fVar52;
              fVar48 = fVar61 * fVar10 + fVar63 * fVar15;
              fVar52 = fVar68 * fVar15 + fVar54 * fVar29;
              pfVar37 = pfVar37 + 1;
            } while (uVar34 < uVar43);
          }
          *(float *)(iVar12 + 0x4c) = fVar53;
          *(ulonglong *)(iVar12 + 0x50) = uVar65;
          *(float *)(iVar12 + 0xa0) = fVar69;
          *(float *)(iVar12 + 0xa4) = fVar48;
          *(float *)(iVar12 + 0xf4) = fVar46;
          *(float *)(iVar12 + 0xf8) = fVar52;
        }
        else {
          iVar41 = 0;
          uVar34 = 0;
          if (iVar17 != 0) {
            while( true ) {
              FUN_ram_400934e0(iVar12 + iVar41 + 0x2c,pfVar35,pfVar35,uVar43);
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
          fVar59 = *(float *)(iVar12 + 0x38);
          fVar51 = *(float *)(iVar12 + 0x3c);
          fVar1 = *(float *)(iVar12 + 0x40);
          fVar56 = *(float *)(iVar12 + 0x44);
          fVar58 = *(float *)(iVar12 + 0x48);
          fVar67 = *(float *)(iVar12 + 0x8c);
          fVar60 = *(float *)(iVar12 + 0x90);
          fVar61 = *(float *)(iVar12 + 0x94);
          fVar62 = *(float *)(iVar12 + 0x98);
          fVar63 = *(float *)(iVar12 + 0x9c);
          uVar65 = *(ulonglong *)(iVar12 + 0x4c);
          uVar57 = *(ulonglong *)(iVar12 + 0x50);
          fVar64 = *(float *)(iVar12 + 0xa0);
          fVar45 = *(float *)(iVar12 + 0xa4);
          if (param_4 != uVar30) {
            uVar34 = 0;
            pfVar24 = pfVar37;
            do {
              uVar34 = uVar34 + 1;
              fVar54 = (float)*(undefined8 *)pfVar24;
              fVar68 = fVar59 * fVar54 + (float)uVar65;
              fVar66 = fVar67 * fVar68 + fVar64;
              uVar65 = (ulonglong)(uint)(fVar56 * fVar68 + fVar51 * fVar54 + (float)uVar57);
              *pfVar24 = fVar66;
              uVar57 = (ulonglong)(uint)(fVar1 * fVar54 + fVar58 * fVar68);
              fVar64 = fVar62 * fVar66 + fVar60 * fVar68 + fVar45;
              fVar45 = fVar61 * fVar68 + fVar63 * fVar66;
              pfVar24 = pfVar24 + 1;
            } while (uVar34 < uVar43);
          }
          *(ulonglong *)(iVar12 + 0x4c) = uVar65;
          *(ulonglong *)(iVar12 + 0x50) = uVar57;
          *(float *)(iVar12 + 0xa0) = fVar64;
          *(float *)(iVar12 + 0xa4) = fVar45;
        }
        else if (iVar17 == 3) {
          fVar59 = *(float *)(iVar12 + 0x38);
          fVar51 = *(float *)(iVar12 + 0x3c);
          fVar1 = *(float *)(iVar12 + 0x40);
          fVar56 = *(float *)(iVar12 + 0x44);
          fVar58 = *(float *)(iVar12 + 0x48);
          fVar67 = *(float *)(iVar12 + 0x8c);
          fVar60 = *(float *)(iVar12 + 0x90);
          fVar61 = *(float *)(iVar12 + 0x94);
          fVar62 = *(float *)(iVar12 + 0x98);
          fVar63 = *(float *)(iVar12 + 0x9c);
          fVar64 = *(float *)(iVar12 + 0xe0);
          fVar45 = *(float *)(iVar12 + 0xe4);
          fVar68 = *(float *)(iVar12 + 0xe8);
          fVar66 = *(float *)(iVar12 + 0xec);
          fVar54 = *(float *)(iVar12 + 0xf0);
          fVar53 = *(float *)(iVar12 + 0x4c);
          uVar65 = *(ulonglong *)(iVar12 + 0x50);
          fVar69 = *(float *)(iVar12 + 0xa0);
          fVar48 = *(float *)(iVar12 + 0xa4);
          fVar46 = *(float *)(iVar12 + 0xf4);
          fVar52 = *(float *)(iVar12 + 0xf8);
          if (param_4 != uVar30) {
            uVar34 = 0;
            pfVar24 = pfVar37;
            do {
              fVar47 = *pfVar24;
              uVar34 = uVar34 + 1;
              fVar10 = fVar59 * fVar47 + fVar53;
              fVar15 = fVar67 * fVar10 + fVar69;
              fVar53 = fVar56 * fVar10 + fVar51 * fVar47 + (float)uVar65;
              fVar29 = fVar64 * fVar15 + fVar46;
              uVar65 = (ulonglong)(uint)(fVar1 * fVar47 + fVar58 * fVar10);
              fVar69 = fVar62 * fVar15 + fVar60 * fVar10 + fVar48;
              *pfVar24 = fVar29;
              fVar46 = fVar66 * fVar29 + fVar45 * fVar15 + fVar52;
              fVar48 = fVar61 * fVar10 + fVar63 * fVar15;
              fVar52 = fVar68 * fVar15 + fVar54 * fVar29;
              pfVar24 = pfVar24 + 1;
            } while (uVar34 < uVar43);
          }
          *(float *)(iVar12 + 0x4c) = fVar53;
          *(ulonglong *)(iVar12 + 0x50) = uVar65;
          *(float *)(iVar12 + 0xa0) = fVar69;
          *(float *)(iVar12 + 0xa4) = fVar48;
          *(float *)(iVar12 + 0xf4) = fVar46;
          *(float *)(iVar12 + 0xf8) = fVar52;
        }
        else {
          iVar41 = 0;
          uVar34 = 0;
          if (iVar17 != 0) {
            while( true ) {
              FUN_ram_400934e0(iVar12 + iVar41 + 0x2c,pfVar37,pfVar37,uVar43);
              uVar34 = uVar34 + 1;
              iVar41 = iVar41 + 0x54;
              if (*(uint *)(iVar38 + 0x1f0) <= uVar34) break;
              iVar12 = *(int *)(iVar38 + 0x1ec);
            }
          }
        }
      }
      FUN_ram_300464c2(uVar2,uVar2,0,iVar38 + 0x1fc,pfVar37,uVar43,0);
      iVar12 = *(int *)(iVar38 + 500);
      if (iVar12 != 0) {
        iVar17 = *(int *)(iVar38 + 0x1f8);
        if (iVar17 == 2) {
          fVar59 = *(float *)(iVar12 + 0x38);
          fVar51 = *(float *)(iVar12 + 0x3c);
          fVar1 = *(float *)(iVar12 + 0x40);
          fVar56 = *(float *)(iVar12 + 0x44);
          fVar58 = *(float *)(iVar12 + 0x48);
          fVar67 = *(float *)(iVar12 + 0x8c);
          fVar60 = *(float *)(iVar12 + 0x90);
          fVar61 = *(float *)(iVar12 + 0x94);
          fVar62 = *(float *)(iVar12 + 0x98);
          fVar63 = *(float *)(iVar12 + 0x9c);
          uVar65 = *(ulonglong *)(iVar12 + 0x4c);
          uVar57 = *(ulonglong *)(iVar12 + 0x50);
          fVar64 = *(float *)(iVar12 + 0xa0);
          fVar45 = *(float *)(iVar12 + 0xa4);
          if (param_4 != uVar30) {
            uVar34 = 0;
            pfVar24 = pfVar37;
            do {
              uVar34 = uVar34 + 1;
              fVar54 = (float)*(undefined8 *)pfVar24;
              fVar68 = fVar59 * fVar54 + (float)uVar65;
              fVar66 = fVar67 * fVar68 + fVar64;
              uVar65 = (ulonglong)(uint)(fVar56 * fVar68 + fVar51 * fVar54 + (float)uVar57);
              *pfVar24 = fVar66;
              uVar57 = (ulonglong)(uint)(fVar1 * fVar54 + fVar58 * fVar68);
              fVar64 = fVar62 * fVar66 + fVar60 * fVar68 + fVar45;
              fVar45 = fVar61 * fVar68 + fVar63 * fVar66;
              pfVar24 = pfVar24 + 1;
            } while (uVar34 < uVar43);
          }
          *(ulonglong *)(iVar12 + 0x4c) = uVar65;
          *(ulonglong *)(iVar12 + 0x50) = uVar57;
          *(float *)(iVar12 + 0xa0) = fVar64;
          *(float *)(iVar12 + 0xa4) = fVar45;
        }
        else if (iVar17 == 3) {
          fVar59 = *(float *)(iVar12 + 0x38);
          fVar51 = *(float *)(iVar12 + 0x3c);
          fVar1 = *(float *)(iVar12 + 0x40);
          fVar56 = *(float *)(iVar12 + 0x44);
          fVar58 = *(float *)(iVar12 + 0x48);
          fVar67 = *(float *)(iVar12 + 0x8c);
          fVar60 = *(float *)(iVar12 + 0x90);
          fVar61 = *(float *)(iVar12 + 0x94);
          fVar62 = *(float *)(iVar12 + 0x98);
          fVar63 = *(float *)(iVar12 + 0x9c);
          fVar64 = *(float *)(iVar12 + 0xe0);
          fVar45 = *(float *)(iVar12 + 0xe4);
          fVar68 = *(float *)(iVar12 + 0xe8);
          fVar66 = *(float *)(iVar12 + 0xec);
          fVar54 = *(float *)(iVar12 + 0xf0);
          fVar53 = *(float *)(iVar12 + 0x4c);
          uVar65 = *(ulonglong *)(iVar12 + 0x50);
          fVar69 = *(float *)(iVar12 + 0xa0);
          fVar48 = *(float *)(iVar12 + 0xa4);
          fVar46 = *(float *)(iVar12 + 0xf4);
          fVar52 = *(float *)(iVar12 + 0xf8);
          if (param_4 != uVar30) {
            uVar34 = 0;
            pfVar24 = pfVar37;
            do {
              fVar47 = *pfVar24;
              uVar34 = uVar34 + 1;
              fVar10 = fVar59 * fVar47 + fVar53;
              fVar15 = fVar67 * fVar10 + fVar69;
              fVar53 = fVar56 * fVar10 + fVar51 * fVar47 + (float)uVar65;
              fVar29 = fVar64 * fVar15 + fVar46;
              uVar65 = (ulonglong)(uint)(fVar1 * fVar47 + fVar58 * fVar10);
              fVar69 = fVar62 * fVar15 + fVar60 * fVar10 + fVar48;
              *pfVar24 = fVar29;
              fVar46 = fVar66 * fVar29 + fVar45 * fVar15 + fVar52;
              fVar48 = fVar61 * fVar10 + fVar63 * fVar15;
              fVar52 = fVar68 * fVar15 + fVar54 * fVar29;
              pfVar24 = pfVar24 + 1;
            } while (uVar34 < uVar43);
          }
          *(float *)(iVar12 + 0x4c) = fVar53;
          *(ulonglong *)(iVar12 + 0x50) = uVar65;
          *(float *)(iVar12 + 0xa0) = fVar69;
          *(float *)(iVar12 + 0xa4) = fVar48;
          *(float *)(iVar12 + 0xf4) = fVar46;
          *(float *)(iVar12 + 0xf8) = fVar52;
        }
        else {
          iVar41 = 0;
          uVar34 = 0;
          if (iVar17 != 0) {
            while( true ) {
              FUN_ram_400934e0(iVar12 + iVar41 + 0x2c,pfVar37,pfVar37,uVar43);
              uVar34 = uVar34 + 1;
              iVar41 = iVar41 + 0x54;
              if (*(uint *)(iVar38 + 0x1f8) <= uVar34) break;
              iVar12 = *(int *)(iVar38 + 500);
            }
          }
        }
      }
      FUN_ram_400933fc(pfVar35,pfVar37,pfVar11,uVar43);
      fVar56 = DAT_ram_4009b370._4_4_;
      fVar1 = DAT_ram_40094ed4;
      fVar51 = DAT_ram_40094640;
      fVar59 = DAT_ram_4009463c;
      if (*(short *)(iVar38 + 0x646) == 1) {
        pfVar37 = *(float **)(iVar38 + 0x664);
        fVar58 = 0.0;
        if (pfVar37 != (float *)0x0) {
          fVar58 = *pfVar37;
        }
        pfVar24 = *(float **)(iVar38 + 0x648);
        if ((pfVar24 == (float *)0x0) || (uVar34 = *(uint *)(iVar38 + 0x658), uVar34 == 0)) {
          fVar60 = 0.0;
          fVar67 = 0.0;
          fVar61 = fVar60;
        }
        else {
          fVar67 = *pfVar24;
          if (uVar34 == 1) {
            fVar60 = 0.0;
          }
          else {
            fVar60 = pfVar24[1];
          }
          fVar61 = 0.0;
          if (2 < uVar34) {
            fVar61 = pfVar24[2];
          }
        }
        pfVar24 = *(float **)(iVar38 + 0x64c);
        if ((pfVar24 == (float *)0x0) || (uVar34 = *(uint *)(iVar38 + 0x65c), uVar34 == 0)) {
          fVar63 = 0.0;
          fVar62 = 0.0;
          fVar64 = fVar63;
        }
        else {
          fVar62 = *pfVar24;
          if (uVar34 == 1) {
            fVar63 = 0.0;
          }
          else {
            fVar63 = pfVar24[1];
          }
          fVar64 = 0.0;
          if (2 < uVar34) {
            fVar64 = pfVar24[2];
          }
        }
        pfVar24 = *(float **)(iVar38 + 0x650);
        pfVar35 = *(float **)(iVar38 + 0x654);
        fVar45 = in_register_00000100;
        if ((pfVar24 == (float *)0x0) || (uVar34 = *(uint *)(iVar38 + 0x660), uVar34 == 0)) {
          fVar66 = 0.0;
          fVar68 = 0.0;
LAB_ram_3004814a:
          if ((pfVar35 == (float *)0x0) || (uVar34 = *(uint *)(iVar38 + 0x660), uVar34 == 0)) {
            fVar54 = 0.0;
            fVar69 = 0.0;
            fVar53 = 0.0;
          }
          else {
            fVar53 = *pfVar35;
            fVar54 = 0.0;
            if (uVar34 != 1) goto LAB_ram_30047d76;
            fVar69 = 0.0;
          }
        }
        else {
          fVar68 = *pfVar24;
          if (uVar34 == 1) {
            fVar66 = 0.0;
          }
          else {
            fVar66 = pfVar24[1];
          }
          if (uVar34 < 3) goto LAB_ram_3004814a;
          fVar54 = pfVar24[2];
          if (pfVar35 == (float *)0x0) {
            fVar53 = 0.0;
            fVar69 = fVar53;
          }
          else {
            fVar53 = *pfVar35;
LAB_ram_30047d76:
            fVar69 = pfVar35[1];
            if (uVar34 < 3) {
              fVar45 = 0.0;
            }
            else {
              fVar45 = pfVar35[2];
            }
          }
        }
        fVar48 = *(float *)(iVar38 + 0x6bc);
        fVar46 = *(float *)(iVar38 + 0x6c0);
        fVar52 = *(float *)(iVar38 + 0x710);
        fVar47 = *(float *)(iVar38 + 0x714);
        if (param_4 != uVar30) {
          uVar34 = 0;
          do {
            fVar15 = *pfVar11;
            fVar29 = fVar15 * fVar60 + fVar66;
            fVar44 = fVar58 * fVar63 + fVar69;
            fVar10 = fVar15 * fVar67 + fVar68 + fVar58 * fVar62 + fVar53;
            fVar4 = _DAT_ram_3008475c;
            if ((fVar51 < fVar10) && (fVar4 = _DAT_ram_30084f58, fVar10 < fVar59)) {
              fVar10 = (fVar10 + fVar59) * in_register_00000100;
              uVar27 = (uint)(-1 < (int)fVar10) * (int)fVar10;
              fVar4 = (fVar10 - (float)uVar27) *
                      ((float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar27 + 0x201) * 4) -
                      *(float *)(&DAT_ram_30083f5c + (uVar27 + 0x200) * 4)) +
                      *(float *)(&DAT_ram_30083f5c + (uVar27 + 0x200) * 4);
            }
            fVar10 = _DAT_ram_3008475c;
            if ((fVar51 < fVar29 + fVar44) &&
               (fVar29 = fVar29 + fVar44, fVar10 = _DAT_ram_30084f58, fVar29 < fVar59)) {
              fVar10 = (fVar29 + fVar59) * in_register_00000100;
              uVar27 = (uint)(-1 < (int)fVar10) * (int)fVar10;
              fVar10 = (fVar10 - (float)uVar27) *
                       ((float)*(undefined8 *)(&DAT_ram_30083f5c + (uVar27 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30083f5c + (uVar27 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30083f5c + (uVar27 + 0x200) * 4);
            }
            fVar15 = (fVar58 * fVar64 + fVar45) * fVar4 + fVar15 * fVar61 + fVar54;
            fVar29 = _DAT_ram_30083f58;
            if ((fVar49 < fVar15) && (fVar29 = _DAT_ram_30084754, fVar15 < fVar1)) {
              fVar15 = (fVar15 + fVar1) * fVar56;
              uVar27 = (uint)(-1 < (int)fVar15) * (int)fVar15;
              iVar12 = uVar27 * 4;
              fVar29 = (fVar15 - (float)uVar27) *
                       ((float)*(undefined8 *)(&DAT_ram_30083f5c + iVar12) -
                       (float)*(undefined8 *)(&DAT_ram_30083f58 + iVar12)) +
                       (float)*(undefined8 *)(&DAT_ram_30083f58 + iVar12);
            }
            fVar58 = (fVar58 - fVar29) * fVar10 + fVar29;
            fVar10 = fVar58 * *(float *)(iVar38 + 0x6a8) + fVar48;
            uVar34 = uVar34 + 1;
            fVar15 = fVar10 * *(float *)(iVar38 + 0x6fc) + fVar52;
            fVar52 = fVar10 * *(float *)(iVar38 + 0x700) + fVar47;
            fVar48 = fVar10 * *(float *)(iVar38 + 0x6b4) +
                     fVar58 * *(float *)(iVar38 + 0x6ac) + fVar46;
            fVar46 = fVar58 * *(float *)(iVar38 + 0x6b0) + fVar10 * *(float *)(iVar38 + 0x6b8);
            fVar47 = fVar10 * *(float *)(iVar38 + 0x704) + fVar15 * *(float *)(iVar38 + 0x70c);
            fVar52 = fVar15 * *(float *)(iVar38 + 0x708) + fVar52;
            *pfVar11 = fVar15 * *(float *)(iVar38 + 0x718) * param_1;
            pfVar11 = pfVar11 + 1;
          } while (uVar34 < uVar43);
        }
        if (pfVar37 != (float *)0x0) {
          *pfVar37 = fVar58;
        }
        *(float *)(iVar38 + 0x6bc) = fVar48;
        *(float *)(iVar38 + 0x6c0) = fVar46;
        *(float *)(iVar38 + 0x710) = fVar52;
        *(float *)(iVar38 + 0x714) = fVar47;
      }
      else {
        FUN_ram_30045c40(iVar38 + 0x644,pfVar11,uVar43);
        FUN_ram_400934e0(iVar38 + 0x69c,pfVar11,pfVar11,uVar43);
        FUN_ram_400934e0(iVar38 + 0x6f0,pfVar11,pfVar11,uVar43);
        if (param_4 != uVar30) {
          uVar34 = 0;
          do {
            uVar34 = uVar34 + 1;
            *pfVar11 = *pfVar11 * *(float *)(iVar38 + 0x718) * param_1;
            pfVar11 = pfVar11 + 1;
          } while (uVar34 < uVar43);
        }
      }
    }
    uVar30 = uVar30 + uVar43;
    if (param_4 <= uVar30) {
      return;
    }
    iVar38 = *(int *)(param_2 + 4);
  } while( true );
}


