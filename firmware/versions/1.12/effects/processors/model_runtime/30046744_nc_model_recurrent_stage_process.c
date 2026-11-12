/* NanoCore 1.12: nc_model_recurrent_stage_process at 0x30046744.
 * Role: GRU-style gated recurrence inferred from activation tables and hidden-state update.
 * REA: ev_82605307aa2f307d3ed3841eae6ba1b11d146872f93f996c72087e4b138f5af8
 * Source: analysis/rea-1.12/results/01016-export-0x30046744.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_model_recurrent_stage_process(ushort *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  uint uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 unaff_fs11;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  fVar7 = DAT_ram_400a1388._4_4_;
  fVar6 = (float)DAT_ram_400a1388;
  fVar30 = DAT_ram_4009f9e4;
  fVar5 = DAT_ram_40099f7c;
  fVar4 = DAT_ram_40096768;
  fVar3 = DAT_ram_40096764;
  fVar31 = _DAT_ram_30084fd8;
  fVar32 = _DAT_ram_300847dc;
  fVar2 = _DAT_ram_300847d4;
  fVar35 = _DAT_ram_30083fd8;
  uVar19 = (uint)param_1[1];
  uStack_a0 = (undefined4)unaff_fs11;
  uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
  if (uVar19 != 1) {
    if (param_3 == 0) {
      return;
    }
    iVar18 = 0;
    do {
      fVar35 = *param_2;
      if ((((uVar19 != 0) && (pfVar20 = *(float **)(param_1 + 0x10), pfVar20 != (float *)0x0)) &&
          (pfVar12 = *(float **)(param_1 + 0x12), pfVar12 != (float *)0x0)) &&
         (pfVar13 = *(float **)(param_1 + 0x14), pfVar13 != (float *)0x0)) {
        pfVar14 = *(float **)(param_1 + 6);
        pfVar16 = *(float **)(param_1 + 8);
        puVar11 = *(undefined8 **)(param_1 + 2);
        pfVar21 = *(float **)(param_1 + 4);
        if (uVar19 == 1) {
          fVar2 = *pfVar20;
          if (pfVar14 == (float *)0x0) {
            if (puVar11 != (undefined8 *)0x0) {
              fVar30 = 0.0;
              fVar31 = fVar35 * (float)*puVar11 + 0.0;
              fVar32 = fVar35 * (float)*(undefined8 *)((int)puVar11 + 4) + 0.0;
              goto LAB_ram_30046ca8;
            }
            fVar30 = 0.0;
            fVar31 = 0.0;
            fVar32 = fVar31;
          }
          else if (puVar11 == (undefined8 *)0x0) {
            fVar31 = *pfVar14 + 0.0;
            fVar30 = (float)*(undefined8 *)(pfVar14 + 2) + 0.0;
            fVar32 = (float)*(undefined8 *)(pfVar14 + 1) + 0.0;
          }
          else {
            fVar31 = fVar35 * (float)*puVar11 + *pfVar14;
            fVar30 = (float)*(undefined8 *)(pfVar14 + 2);
            fVar32 = fVar35 * (float)*(undefined8 *)((int)puVar11 + 4) +
                     (float)*(undefined8 *)(pfVar14 + 1);
LAB_ram_30046ca8:
            fVar30 = fVar35 * (float)puVar11[1] + fVar30;
          }
          if (pfVar16 == (float *)0x0) {
            if (pfVar21 != (float *)0x0) {
              fVar25 = 0.0;
              fVar35 = fVar2 * *pfVar21 + 0.0;
              fVar39 = fVar2 * pfVar21[1] + 0.0;
              goto LAB_ram_30046cd2;
            }
            fVar39 = 0.0;
            fVar35 = fVar39;
            fVar25 = fVar39;
          }
          else if (pfVar21 == (float *)0x0) {
            fVar39 = pfVar16[1] + 0.0;
            fVar35 = *pfVar16 + 0.0;
            fVar25 = pfVar16[2] + 0.0;
          }
          else {
            fVar39 = fVar2 * pfVar21[1] + pfVar16[1];
            fVar35 = fVar2 * *pfVar21 + *pfVar16;
            fVar25 = pfVar16[2];
LAB_ram_30046cd2:
            fVar25 = fVar2 * pfVar21[2] + fVar25;
          }
          fVar35 = fVar35 + fVar31;
          fVar31 = _DAT_ram_300847dc;
          if ((DAT_ram_40096768 < fVar35) && (fVar31 = _DAT_ram_30084fd8, fVar35 < DAT_ram_40096764)
             ) {
            fVar35 = (fVar35 + DAT_ram_40096764) * (float)DAT_ram_400a1388;
            uVar19 = (uint)(-1 < (int)fVar35) * (int)fVar35;
            fVar31 = (fVar35 - (float)uVar19) *
                     (*(float *)(&DAT_ram_30083fdc + (uVar19 + 0x201) * 4) -
                     *(float *)(&DAT_ram_30083fdc + (uVar19 + 0x200) * 4)) +
                     *(float *)(&DAT_ram_30083fdc + (uVar19 + 0x200) * 4);
          }
          fVar32 = fVar32 + fVar39;
          fVar39 = _DAT_ram_300847dc;
          if ((DAT_ram_40096768 < fVar32) && (fVar39 = _DAT_ram_30084fd8, fVar32 < DAT_ram_40096764)
             ) {
            fVar35 = (fVar32 + DAT_ram_40096764) * (float)DAT_ram_400a1388;
            uVar19 = (uint)(-1 < (int)fVar35) * (int)fVar35;
            fVar39 = (fVar35 - (float)uVar19) *
                     ((float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar19 + 0x201) * 4) -
                     (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar19 + 0x200) * 4)) +
                     (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar19 + 0x200) * 4);
          }
          fVar30 = fVar31 * fVar25 + fVar30;
          fVar35 = _DAT_ram_30083fd8;
          if ((DAT_ram_4009f9e4 < fVar30) && (fVar35 = _DAT_ram_300847d4, fVar30 < DAT_ram_40099f7c)
             ) {
            fVar35 = (fVar30 + DAT_ram_40099f7c) * DAT_ram_400a1388._4_4_;
            uVar19 = (uint)(-1 < (int)fVar35) * (int)fVar35;
            iVar17 = uVar19 * 4;
            fVar35 = (fVar35 - (float)uVar19) *
                     ((float)*(undefined8 *)(&DAT_ram_30083fdc + iVar17) -
                     (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar17)) +
                     (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar17);
          }
          fVar35 = (fVar2 - fVar35) * fVar39 + fVar35;
          *pfVar20 = fVar35;
        }
        else {
          iVar17 = *(int *)(param_1 + 0xe);
          uVar9 = (uint)*param_1;
          if (iVar17 == 0) {
LAB_ram_30046c42:
            iVar23 = uVar19 << 2;
          }
          else if (pfVar14 == (float *)0x0) {
            if ((puVar11 == (undefined8 *)0x0) || (uVar9 == 0)) {
              iVar23 = iVar17 << 2;
              memset(pfVar12,0,iVar23);
            }
            else {
              iVar23 = iVar17 * 4;
              if (uVar9 == 1) {
                pfVar14 = pfVar12;
                do {
                  uVar33 = *puVar11;
                  pfVar10 = pfVar14 + 1;
                  puVar11 = (undefined8 *)((int)puVar11 + 4);
                  *pfVar14 = fVar35 * (float)uVar33 + 0.0;
                  pfVar14 = pfVar10;
                } while (pfVar12 + iVar17 != pfVar10);
              }
              else {
                pfVar14 = pfVar12;
                do {
                  uVar33 = *puVar11;
                  pfVar10 = pfVar14 + 1;
                  puVar11 = (undefined8 *)((int)puVar11 + uVar9 * 4);
                  *pfVar14 = fVar35 * (float)uVar33 + 0.0;
                  pfVar14 = pfVar10;
                } while (pfVar12 + iVar17 != pfVar10);
              }
            }
LAB_ram_3004682e:
            if (pfVar16 != (float *)0x0) goto LAB_ram_30046832;
LAB_ram_30046bee:
            if (pfVar21 == (float *)0x0) {
              memset(pfVar13,0,iVar23);
              iVar23 = uVar19 << 2;
            }
            else {
              iVar23 = uVar19 * 4;
              iVar22 = 0;
              pfVar16 = pfVar13;
              do {
                fStack_a4 = 0.0;
                FUN_ram_4009557c(pfVar21,pfVar20,uVar19,&fStack_a4);
                iVar22 = iVar22 + 1;
                pfVar21 = pfVar21 + uVar19;
                *pfVar16 = fStack_a4 + 0.0;
                pfVar16 = pfVar16 + 1;
              } while (iVar17 != iVar22);
            }
          }
          else {
            iVar23 = iVar17 * 4;
            if (puVar11 == (undefined8 *)0x0) {
              pfVar15 = pfVar14 + iVar17;
              pfVar10 = pfVar12;
              do {
                uVar33 = *(undefined8 *)pfVar14;
                pfVar14 = pfVar14 + 1;
                *pfVar10 = (float)uVar33;
                pfVar10 = pfVar10 + 1;
              } while (pfVar15 != pfVar14);
              goto LAB_ram_3004682e;
            }
            if (uVar9 != 0) {
              if (uVar9 == 1) {
                pfVar15 = pfVar14 + iVar17;
                pfVar10 = pfVar12;
                do {
                  uVar34 = *puVar11;
                  uVar33 = *(undefined8 *)pfVar14;
                  pfVar14 = pfVar14 + 1;
                  puVar11 = (undefined8 *)((int)puVar11 + 4);
                  *pfVar10 = fVar35 * (float)uVar34 + (float)uVar33;
                  pfVar10 = pfVar10 + 1;
                } while (pfVar15 != pfVar14);
              }
              else {
                pfVar15 = pfVar14 + iVar17;
                pfVar10 = pfVar12;
                do {
                  uVar34 = *puVar11;
                  uVar33 = *(undefined8 *)pfVar14;
                  pfVar14 = pfVar14 + 1;
                  puVar11 = (undefined8 *)((int)puVar11 + uVar9 * 4);
                  *pfVar10 = fVar35 * (float)uVar34 + (float)uVar33;
                  pfVar10 = pfVar10 + 1;
                } while (pfVar15 != pfVar14);
              }
              goto LAB_ram_3004682e;
            }
            pfVar15 = pfVar14 + iVar17;
            pfVar10 = pfVar12;
            do {
              uVar33 = *(undefined8 *)pfVar14;
              pfVar14 = pfVar14 + 1;
              *pfVar10 = (float)uVar33;
              pfVar10 = pfVar10 + 1;
            } while (pfVar15 != pfVar14);
            if (pfVar16 == (float *)0x0) goto LAB_ram_30046bee;
LAB_ram_30046832:
            if (pfVar21 == (float *)0x0) {
              pfVar14 = (float *)((int)pfVar16 + iVar23);
              pfVar21 = pfVar13;
              do {
                uVar33 = *(undefined8 *)pfVar16;
                pfVar16 = pfVar16 + 1;
                *pfVar21 = (float)uVar33;
                pfVar21 = pfVar21 + 1;
              } while (pfVar14 != pfVar16);
              goto LAB_ram_30046c42;
            }
            iVar23 = uVar19 * 4;
            iVar22 = 0;
            pfVar14 = pfVar13;
            do {
              fVar35 = *pfVar16;
              fStack_a4 = 0.0;
              FUN_ram_4009557c(pfVar21,pfVar20,uVar19,&fStack_a4);
              iVar22 = iVar22 + 1;
              pfVar16 = pfVar16 + 1;
              pfVar21 = pfVar21 + uVar19;
              *pfVar14 = fVar35 + fStack_a4;
              pfVar14 = pfVar14 + 1;
            } while (iVar17 != iVar22);
          }
          fVar25 = (float)DAT_ram_400a1388;
          fVar39 = DAT_ram_4009f9e4;
          fVar30 = _DAT_ram_30084fd8;
          fVar31 = _DAT_ram_300847dc;
          fVar32 = _DAT_ram_300847d4;
          fVar2 = _DAT_ram_30083fd8;
          pfVar16 = pfVar20;
          do {
            pfVar21 = (float *)((int)pfVar12 + iVar23);
            pfVar15 = (float *)((int)pfVar13 + iVar23);
            fVar35 = (float)*(undefined8 *)pfVar12 + (float)*(undefined8 *)pfVar13;
            pfVar10 = pfVar13 + uVar19 * 2;
            pfVar14 = pfVar12 + uVar19 * 2;
            pfVar12 = pfVar12 + 1;
            pfVar13 = pfVar13 + 1;
            fVar38 = fVar31;
            if ((fVar4 < fVar35) && (fVar38 = fVar30, fVar35 < fVar3)) {
              fVar35 = (fVar35 + fVar3) * fVar25;
              uVar9 = (uint)(-1 < (int)fVar35) * (int)fVar35;
              fVar38 = (fVar35 - (float)uVar9) *
                       (*(float *)(&DAT_ram_30083fdc + (uVar9 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30083fdc + (uVar9 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30083fdc + (uVar9 + 0x200) * 4);
            }
            fVar35 = *pfVar21 + *pfVar15;
            fVar40 = fVar31;
            if ((fVar4 < fVar35) && (fVar40 = fVar30, fVar35 < fVar3)) {
              fVar35 = (fVar35 + fVar3) * fVar6;
              uVar9 = (uint)(-1 < (int)fVar35) * (int)fVar35;
              fVar40 = (fVar35 - (float)uVar9) *
                       (*(float *)(&DAT_ram_30083fdc + (uVar9 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30083fdc + (uVar9 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30083fdc + (uVar9 + 0x200) * 4);
            }
            fVar38 = *pfVar10 * fVar38 + (float)*(undefined8 *)pfVar14;
            fVar35 = fVar2;
            if ((fVar39 < fVar38) && (fVar35 = fVar32, fVar38 < fVar5)) {
              fVar35 = (fVar38 + fVar5) * fVar7;
              uVar9 = (uint)(-1 < (int)fVar35) * (int)fVar35;
              iVar17 = uVar9 * 4;
              fVar35 = (fVar35 - (float)uVar9) *
                       (*(float *)(&DAT_ram_30083fdc + iVar17) -
                       *(float *)(&DAT_ram_30083fd8 + iVar17)) +
                       *(float *)(&DAT_ram_30083fd8 + iVar17);
            }
            pfVar21 = pfVar16 + 1;
            fVar35 = ((float)*(undefined8 *)pfVar16 - fVar35) * fVar40 + fVar35;
            *pfVar16 = fVar35;
            pfVar16 = pfVar21;
          } while ((float *)((int)pfVar20 + iVar23) != pfVar21);
        }
      }
      *param_2 = fVar35;
      iVar18 = iVar18 + 1;
      param_2 = param_2 + 1;
      if (param_3 == iVar18) {
        return;
      }
      uVar19 = (uint)param_1[1];
    } while( true );
  }
  puVar8 = *(ulonglong **)(param_1 + 0x10);
  uVar37 = 0;
  if (puVar8 != (ulonglong *)0x0) {
    uVar37 = *puVar8;
  }
  pfVar20 = *(float **)(param_1 + 2);
  if ((pfVar20 == (float *)0x0) || (uVar19 = *(uint *)(param_1 + 10), uVar19 == 0)) {
    fVar25 = 0.0;
    fVar38 = 0.0;
    fVar39 = 0.0;
  }
  else {
    fVar39 = *pfVar20;
    if (uVar19 == 1) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = pfVar20[1];
    }
    fVar38 = 0.0;
    if (2 < uVar19) {
      fVar38 = pfVar20[2];
    }
  }
  pfVar20 = *(float **)(param_1 + 4);
  if ((pfVar20 == (float *)0x0) || (uVar19 = *(uint *)(param_1 + 0xc), uVar19 == 0)) {
    fVar42 = 0.0;
    fVar43 = 0.0;
    fVar40 = 0.0;
  }
  else {
    fVar40 = *pfVar20;
    if (uVar19 == 1) {
      fVar42 = 0.0;
    }
    else {
      fVar42 = pfVar20[1];
    }
    fVar43 = 0.0;
    if (2 < uVar19) {
      fVar43 = pfVar20[2];
    }
  }
  pfVar20 = *(float **)(param_1 + 6);
  puVar11 = *(undefined8 **)(param_1 + 8);
  if ((pfVar20 == (float *)0x0) || (uVar19 = *(uint *)(param_1 + 0xe), uVar19 == 0)) {
    fVar44 = 0.0;
    fVar41 = 0.0;
LAB_ram_30046a2c:
    if ((puVar11 == (undefined8 *)0x0) || (uVar19 = *(uint *)(param_1 + 0xe), uVar19 == 0)) {
      fVar45 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar46 = 0.0;
      goto LAB_ram_30046a46;
    }
    fVar28 = (float)*puVar11;
    fVar45 = 0.0;
    fVar46 = 0.0;
    if (uVar19 == 1) {
      fVar27 = 0.0;
      fVar46 = 0.0;
      goto LAB_ram_30046a46;
    }
  }
  else {
    fVar41 = *pfVar20;
    if (uVar19 == 1) {
      fVar44 = 0.0;
    }
    else {
      fVar44 = pfVar20[1];
    }
    if (uVar19 < 3) goto LAB_ram_30046a2c;
    fVar45 = pfVar20[2];
    if (puVar11 == (undefined8 *)0x0) {
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar46 = 0.0;
      goto LAB_ram_30046a46;
    }
    fVar28 = (float)*puVar11;
    fVar46 = fVar45;
  }
  fVar45 = fVar46;
  fVar27 = (float)*(undefined8 *)((int)puVar11 + 4);
  if (uVar19 < 3) {
    fVar46 = 0.0;
  }
  else {
    fVar46 = *(float *)(puVar11 + 1);
  }
LAB_ram_30046a46:
  if (param_3 != 0) {
    iVar18 = 0;
    do {
      fVar36 = (float)uVar37;
      fVar29 = (float)*(undefined8 *)param_2;
      fVar1 = fVar29 * fVar39 + fVar41 + fVar36 * fVar40 + fVar28;
      iVar18 = iVar18 + 1;
      fVar24 = fVar29 * fVar25 + fVar44 + fVar36 * fVar42 + fVar27;
      fVar26 = fVar32;
      if ((fVar4 < fVar1) && (fVar26 = fVar31, fVar1 < fVar3)) {
        fVar1 = (fVar1 + fVar3) * fVar6;
        uVar19 = (uint)(-1 < (int)fVar1) * (int)fVar1;
        fVar26 = (fVar1 - (float)uVar19) *
                 (*(float *)(&DAT_ram_30083fdc + (uVar19 + 0x201) * 4) -
                 (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar19 + 0x200) * 4)) +
                 (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar19 + 0x200) * 4);
      }
      fVar1 = (fVar43 * fVar36 + fVar46) * fVar26 + fVar38 * fVar29 + fVar45;
      fVar26 = fVar32;
      if ((fVar4 < fVar24) && (fVar26 = fVar31, fVar24 < fVar3)) {
        fVar24 = (fVar24 + fVar3) * fVar6;
        uVar19 = (uint)(-1 < (int)fVar24) * (int)fVar24;
        fVar26 = (fVar24 - (float)uVar19) *
                 (*(float *)(&DAT_ram_30083fdc + (uVar19 + 0x201) * 4) -
                 (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar19 + 0x200) * 4)) +
                 (float)*(undefined8 *)(&DAT_ram_30083fdc + (uVar19 + 0x200) * 4);
      }
      fVar24 = fVar35;
      if ((fVar30 < fVar1) && (fVar24 = fVar2, fVar1 < fVar5)) {
        fVar1 = (fVar1 + fVar5) * fVar7;
        uVar19 = (uint)(-1 < (int)fVar1) * (int)fVar1;
        iVar17 = uVar19 * 4;
        fVar24 = (fVar1 - (float)uVar19) *
                 (*(float *)(&DAT_ram_30083fdc + iVar17) -
                 (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar17)) +
                 (float)*(undefined8 *)(&DAT_ram_30083fd8 + iVar17);
      }
      fVar24 = (fVar36 - fVar24) * fVar26 + fVar24;
      uVar37 = (ulonglong)(uint)fVar24;
      *param_2 = fVar24;
      param_2 = param_2 + 1;
    } while (param_3 != iVar18);
  }
  if (puVar8 != (ulonglong *)0x0) {
    *puVar8 = uVar37;
  }
  return;
}

