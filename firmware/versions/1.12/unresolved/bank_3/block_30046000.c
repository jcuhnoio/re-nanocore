/* NanoCore 1.12 analysis module: unresolved/bank_3/block_30046000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x30046fc6.
 * REA evidence: ev_3378e02089e84c9e85d33839336f30e2c9826d69e5d402fd80e4e31b1669577e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_30046fc6(float param_1,float param_2,float param_3,float param_4,ushort *param_5,
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
  
  fVar44 = DAT_ram_400a1388._4_4_;
  fVar7 = (float)DAT_ram_400a1388;
  fVar32 = DAT_ram_4009f9e4;
  fVar6 = DAT_ram_40099f7c;
  fVar5 = DAT_ram_40096768;
  fVar4 = DAT_ram_40096764;
  fVar33 = _DAT_ram_30084fd8;
  fVar36 = _DAT_ram_300847dc;
  fVar1 = _DAT_ram_300847d4;
  fVar40 = _DAT_ram_30083fd8;
  if (param_7 == 0) {
    return;
  }
  uStack_a0 = (undefined4)unaff_fs11;
  uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
  if (param_8 == 0) {
    if (param_1 == DAT_ram_4009672c) {
      if (param_2 == DAT_ram_4009672c) {
        nc_model_recurrent_stage_process();
        return;
      }
      bVar2 = true;
      goto LAB_ram_3004706a;
    }
    if (param_2 != DAT_ram_4009672c) goto LAB_ram_30047068;
    bVar3 = true;
    bVar2 = false;
  }
  else {
LAB_ram_30047068:
    bVar2 = false;
LAB_ram_3004706a:
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
              goto LAB_ram_300475ca;
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
LAB_ram_300475ca:
            fVar32 = fVar40 * (float)puVar15[1] + fVar32;
          }
          if (pfVar22 == (float *)0x0) {
            if (pfVar14 != (float *)0x0) {
              fVar38 = 0.0;
              fVar30 = *pfVar14 * fVar1 + 0.0;
              fVar40 = (float)*(undefined8 *)(pfVar14 + 1) * fVar1 + 0.0;
              goto LAB_ram_300475f2;
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
LAB_ram_300475f2:
            fVar38 = fVar1 * (float)*(undefined8 *)(pfVar14 + 2) + fVar38;
          }
          fVar36 = fVar36 + fVar30;
          fVar30 = _DAT_ram_300847dc;
          if ((DAT_ram_40096768 < fVar36) && (fVar30 = _DAT_ram_30084fd8, fVar36 < DAT_ram_40096764)
             ) {
            fVar36 = (fVar36 + DAT_ram_40096764) * (float)DAT_ram_400a1388;
            uVar24 = (uint)(-1 < (int)fVar36) * (int)fVar36;
            fVar30 = (fVar36 - (float)uVar24) *
                     (*(float *)(&DAT_ram_30083fdc + (uVar24 + 0x201) * 4) -
                     *(float *)(&DAT_ram_30083fdc + (uVar24 + 0x200) * 4)) +
                     *(float *)(&DAT_ram_30083fdc + (uVar24 + 0x200) * 4);
          }
          fVar33 = fVar33 + fVar40;
          fVar36 = _DAT_ram_300847dc;
          if ((DAT_ram_40096768 < fVar33) && (fVar36 = _DAT_ram_30084fd8, fVar33 < DAT_ram_40096764)
             ) {
            fVar40 = (fVar33 + DAT_ram_40096764) * (float)DAT_ram_400a1388;
            uVar24 = (uint)(-1 < (int)fVar40) * (int)fVar40;
            fVar36 = (fVar40 - (float)uVar24) *
                     ((float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar24 + 0x201) * 4) -
                     (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar24 + 0x200) * 4)) +
                     (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar24 + 0x200) * 4);
          }
          fVar32 = fVar30 * fVar38 + fVar32;
          fVar40 = _DAT_ram_30083fd8;
          if ((DAT_ram_4009f9e4 < fVar32) && (fVar40 = _DAT_ram_300847d4, fVar32 < DAT_ram_40099f7c)
             ) {
            fVar40 = (fVar32 + DAT_ram_40099f7c) * DAT_ram_400a1388._4_4_;
            uVar24 = (uint)(-1 < (int)fVar40) * (int)fVar40;
            iVar21 = uVar24 * 4;
            fVar40 = (fVar40 - (float)uVar24) *
                     ((float)*(undefined8 *)(&DAT_ram_30083fdc + iVar21) -
                     (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar21)) +
                     (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar21);
          }
          fVar40 = (fVar1 - fVar40) * fVar36 + fVar40;
          *pfVar20 = fVar40;
        }
        else {
          iVar21 = *(int *)(param_5 + 0xe);
          uVar12 = (uint)*param_5;
          if (iVar21 == 0) {
LAB_ram_3004717e:
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
LAB_ram_3004711e:
            if (pfVar22 != (float *)0x0) goto LAB_ram_30047122;
LAB_ram_3004753e:
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
                FUN_ram_4009557c(pfVar14,pfVar20,uVar24,&fStack_a4);
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
              goto LAB_ram_3004711e;
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
              goto LAB_ram_3004711e;
            }
            puVar15 = (undefined8 *)((int)puVar18 + iVar8);
            pfVar13 = pfVar16;
            do {
              uVar37 = *puVar18;
              puVar18 = (undefined8 *)((int)puVar18 + 4);
              *pfVar13 = (float)uVar37;
              pfVar13 = pfVar13 + 1;
            } while (puVar18 != puVar15);
            if (pfVar22 == (float *)0x0) goto LAB_ram_3004753e;
LAB_ram_30047122:
            if (pfVar14 == (float *)0x0) {
              pfVar13 = (float *)((int)pfVar22 + iVar8);
              pfVar14 = pfVar17;
              do {
                uVar37 = *(undefined8 *)pfVar22;
                pfVar22 = pfVar22 + 1;
                *pfVar14 = (float)uVar37;
                pfVar14 = pfVar14 + 1;
              } while (pfVar13 != pfVar22);
              goto LAB_ram_3004717e;
            }
            iVar8 = uVar24 * 4;
            iVar9 = 0;
            pfVar13 = pfVar17;
            do {
              fVar40 = *pfVar22;
              fStack_a4 = 0.0;
              FUN_ram_4009557c(pfVar14,pfVar20,uVar24,&fStack_a4);
              iVar9 = iVar9 + 1;
              pfVar22 = pfVar22 + 1;
              pfVar14 = pfVar14 + uVar24;
              *pfVar13 = fVar40 + fStack_a4;
              pfVar13 = pfVar13 + 1;
            } while (iVar21 != iVar9);
          }
          fVar30 = (float)DAT_ram_400a1388;
          fVar38 = DAT_ram_4009f9e4;
          fVar32 = _DAT_ram_30084fd8;
          fVar33 = _DAT_ram_300847dc;
          fVar36 = _DAT_ram_300847d4;
          fVar1 = _DAT_ram_30083fd8;
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
                       (*(float *)(&DAT_ram_30083fdc + (uVar12 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30083fdc + (uVar12 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30083fdc + (uVar12 + 0x200) * 4);
            }
            fVar40 = *pfVar25 + *pfVar22;
            fVar26 = fVar33;
            if ((fVar5 < fVar40) && (fVar26 = fVar32, fVar40 < fVar4)) {
              fVar40 = (fVar40 + fVar4) * fVar7;
              uVar12 = (uint)(-1 < (int)fVar40) * (int)fVar40;
              fVar26 = (fVar40 - (float)uVar12) *
                       (*(float *)(&DAT_ram_30083fdc + (uVar12 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30083fdc + (uVar12 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30083fdc + (uVar12 + 0x200) * 4);
            }
            fVar28 = *pfVar19 * fVar28 + *pfVar13;
            fVar40 = fVar1;
            if ((fVar38 < fVar28) && (fVar40 = fVar36, fVar28 < fVar6)) {
              fVar40 = (fVar28 + fVar6) * fVar44;
              uVar12 = (uint)(-1 < (int)fVar40) * (int)fVar40;
              iVar21 = uVar12 * 4;
              fVar40 = (fVar40 - (float)uVar12) *
                       (*(float *)(&DAT_ram_30083fdc + iVar21) -
                       *(float *)(&DAT_ram_30083fd8 + iVar21)) +
                       *(float *)(&DAT_ram_30083fd8 + iVar21);
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
LAB_ram_30047354:
    if ((puVar15 == (undefined8 *)0x0) || (uVar24 = *(uint *)(param_5 + 0xe), uVar24 == 0)) {
      fVar47 = 0.0;
      fVar49 = 0.0;
      fVar29 = 0.0;
      fVar48 = 0.0;
      goto LAB_ram_3004736e;
    }
    fVar29 = (float)*puVar15;
    fVar47 = 0.0;
    fVar49 = 0.0;
    if (uVar24 == 1) {
      fVar49 = 0.0;
      fVar48 = 0.0;
      goto LAB_ram_3004736e;
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
    if (uVar24 < 3) goto LAB_ram_30047354;
    fVar47 = pfVar20[2];
    if (puVar15 == (undefined8 *)0x0) {
      fVar49 = 0.0;
      fVar29 = 0.0;
      fVar48 = 0.0;
      goto LAB_ram_3004736e;
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
LAB_ram_3004736e:
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
               (*(float *)(&DAT_ram_30083fdc + (uVar23 + 0x201) * 4) -
               (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar23 + 0x200) * 4)) +
               (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar23 + 0x200) * 4);
    }
    fVar35 = fVar31 * fVar38 + fVar46 + fVar41 * fVar26 + fVar49;
    fVar34 = fVar36;
    if ((fVar5 < fVar35) && (fVar34 = fVar33, fVar35 < fVar4)) {
      fVar35 = (fVar35 + fVar4) * fVar7;
      uVar23 = (uint)(-1 < (int)fVar35) * (int)fVar35;
      fVar34 = (fVar35 - (float)uVar23) *
               ((float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar23 + 0x201) * 4) -
               (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar23 + 0x200) * 4)) +
               (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar23 + 0x200) * 4);
    }
    fVar31 = (fVar43 * fVar41 + fVar48) * fVar27 + fVar31 * fVar30 + fVar47;
    fVar35 = fVar40;
    if ((fVar32 < fVar31) && (fVar35 = fVar1, fVar31 < fVar6)) {
      fVar31 = (fVar31 + fVar6) * in_register_00000100;
      uVar23 = (uint)(-1 < (int)fVar31) * (int)fVar31;
      iVar21 = uVar23 * 4;
      fVar35 = (fVar31 - (float)uVar23) *
               ((float)*(undefined8 *)(&DAT_ram_30083fdc + iVar21) -
               (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar21)) +
               (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar21);
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


