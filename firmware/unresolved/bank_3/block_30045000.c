/* NanoCore 1.10 analysis module: unresolved/bank_3/block_30045000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x3004503a.
 * REA evidence: ev_d5b0efdbe6406ea41d7a4c09a78a16cc3b36b84765b77a79b908d082edd0aef6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_3004503a(float param_1,float param_2,float param_3,float param_4,ushort *param_5,
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
  size_t __n;
  int iVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float *__s;
  float *__s_00;
  undefined8 *puVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  ulonglong uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 unaff_fs11;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  fVar42 = DAT_ram_4009935c;
  fVar7 = DAT_ram_40099358;
  fVar30 = DAT_ram_400989d4;
  fVar6 = DAT_ram_400930e8;
  fVar5 = DAT_ram_40092850;
  fVar4 = DAT_ram_4009284c;
  fVar31 = _DAT_ram_30083bd8;
  fVar34 = _DAT_ram_300833dc;
  fVar1 = _DAT_ram_300833d4;
  fVar38 = _DAT_ram_30082bd8;
  if (param_7 == 0) {
    return;
  }
  uStack_a0 = (undefined4)unaff_fs11;
  uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
  if (param_8 == 0) {
    if (param_1 == DAT_ram_4009281c) {
      if (param_2 == DAT_ram_4009281c) {
        FUN_ram_300447b8();
        return;
      }
      bVar2 = true;
      goto LAB_ram_300450de;
    }
    if (param_2 != DAT_ram_4009281c) goto LAB_ram_300450dc;
    bVar3 = true;
    bVar2 = false;
  }
  else {
LAB_ram_300450dc:
    bVar2 = false;
LAB_ram_300450de:
    bVar3 = false;
  }
  uVar22 = (uint)param_5[1];
  if (uVar22 != 1) {
    uVar21 = 0;
    do {
      fVar38 = *param_6;
      if (!bVar2) {
        fVar38 = fVar38 * param_1;
      }
      if ((((uVar22 != 0) && (pfVar17 = *(float **)(param_5 + 0x10), pfVar17 != (float *)0x0)) &&
          (__s = *(float **)(param_5 + 0x12), __s != (float *)0x0)) &&
         (__s_00 = *(float **)(param_5 + 0x14), __s_00 != (float *)0x0)) {
        puVar15 = *(undefined8 **)(param_5 + 6);
        pfVar19 = *(float **)(param_5 + 8);
        puVar14 = *(undefined8 **)(param_5 + 2);
        pfVar13 = *(float **)(param_5 + 4);
        if (uVar22 == 1) {
          fVar1 = *pfVar17;
          if (puVar15 == (undefined8 *)0x0) {
            if (puVar14 != (undefined8 *)0x0) {
              fVar30 = 0.0;
              fVar34 = fVar38 * (float)*puVar14 + 0.0;
              fVar31 = (float)*(undefined8 *)((int)puVar14 + 4) * fVar38 + 0.0;
              goto LAB_ram_3004563e;
            }
            fVar30 = 0.0;
            fVar31 = 0.0;
            fVar34 = fVar31;
          }
          else if (puVar14 == (undefined8 *)0x0) {
            fVar31 = (float)*(undefined8 *)((int)puVar15 + 4) + 0.0;
            fVar30 = (float)puVar15[1] + 0.0;
            fVar34 = (float)*puVar15 + 0.0;
          }
          else {
            fVar31 = fVar38 * (float)*(undefined8 *)((int)puVar14 + 4) +
                     (float)*(undefined8 *)((int)puVar15 + 4);
            fVar34 = fVar38 * (float)*puVar14 + (float)*puVar15;
            fVar30 = (float)puVar15[1];
LAB_ram_3004563e:
            fVar30 = fVar38 * (float)puVar14[1] + fVar30;
          }
          if (pfVar19 == (float *)0x0) {
            if (pfVar13 != (float *)0x0) {
              fVar36 = 0.0;
              fVar28 = *pfVar13 * fVar1 + 0.0;
              fVar38 = (float)*(undefined8 *)(pfVar13 + 1) * fVar1 + 0.0;
              goto LAB_ram_30045666;
            }
            fVar38 = 0.0;
            fVar28 = fVar38;
            fVar36 = fVar38;
          }
          else if (pfVar13 == (float *)0x0) {
            fVar38 = pfVar19[1] + 0.0;
            fVar28 = *pfVar19 + 0.0;
            fVar36 = pfVar19[2] + 0.0;
          }
          else {
            fVar38 = fVar1 * (float)*(undefined8 *)(pfVar13 + 1) + pfVar19[1];
            fVar28 = fVar1 * *pfVar13 + *pfVar19;
            fVar36 = pfVar19[2];
LAB_ram_30045666:
            fVar36 = fVar1 * (float)*(undefined8 *)(pfVar13 + 2) + fVar36;
          }
          fVar34 = fVar34 + fVar28;
          fVar28 = _DAT_ram_300833dc;
          if ((DAT_ram_40092850 < fVar34) && (fVar28 = _DAT_ram_30083bd8, fVar34 < DAT_ram_4009284c)
             ) {
            fVar34 = (fVar34 + DAT_ram_4009284c) * DAT_ram_40099358;
            uVar22 = (uint)(-1 < (int)fVar34) * (int)fVar34;
            fVar28 = (fVar34 - (float)uVar22) *
                     (*(float *)(&DAT_ram_30082bdc + (uVar22 + 0x201) * 4) -
                     *(float *)(&DAT_ram_30082bdc + (uVar22 + 0x200) * 4)) +
                     *(float *)(&DAT_ram_30082bdc + (uVar22 + 0x200) * 4);
          }
          fVar31 = fVar31 + fVar38;
          fVar34 = _DAT_ram_300833dc;
          if ((DAT_ram_40092850 < fVar31) && (fVar34 = _DAT_ram_30083bd8, fVar31 < DAT_ram_4009284c)
             ) {
            fVar38 = (fVar31 + DAT_ram_4009284c) * DAT_ram_40099358;
            uVar22 = (uint)(-1 < (int)fVar38) * (int)fVar38;
            fVar34 = (fVar38 - (float)uVar22) *
                     ((float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar22 + 0x201) * 4) -
                     (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar22 + 0x200) * 4)) +
                     (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar22 + 0x200) * 4);
          }
          fVar30 = fVar28 * fVar36 + fVar30;
          fVar38 = _DAT_ram_30082bd8;
          if ((DAT_ram_400989d4 < fVar30) && (fVar38 = _DAT_ram_300833d4, fVar30 < DAT_ram_400930e8)
             ) {
            fVar38 = (fVar30 + DAT_ram_400930e8) * DAT_ram_4009935c;
            uVar22 = (uint)(-1 < (int)fVar38) * (int)fVar38;
            iVar18 = uVar22 * 4;
            fVar38 = (fVar38 - (float)uVar22) *
                     ((float)*(undefined8 *)(&DAT_ram_30082bdc + iVar18) -
                     (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar18)) +
                     (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar18);
          }
          fVar38 = (fVar1 - fVar38) * fVar34 + fVar38;
          *pfVar17 = fVar38;
        }
        else {
          iVar18 = *(int *)(param_5 + 0xe);
          uVar11 = (uint)*param_5;
          if (iVar18 == 0) {
LAB_ram_300451f2:
            iVar20 = uVar22 << 2;
          }
          else if (puVar15 == (undefined8 *)0x0) {
            if (puVar14 == (undefined8 *)0x0) {
              __n = iVar18 << 2;
              memset(__s,0,__n);
            }
            else if (uVar11 == 0) {
              __n = iVar18 << 2;
              memset(__s,0,__n);
            }
            else {
              __n = iVar18 * 4;
              if (uVar11 == 1) {
                pfVar12 = __s;
                do {
                  uVar35 = *puVar14;
                  pfVar16 = pfVar12 + 1;
                  puVar14 = (undefined8 *)((int)puVar14 + 4);
                  *pfVar12 = fVar38 * (float)uVar35 + 0.0;
                  pfVar12 = pfVar16;
                } while (__s + iVar18 != pfVar16);
              }
              else {
                pfVar12 = __s;
                do {
                  uVar35 = *puVar14;
                  pfVar16 = pfVar12 + 1;
                  puVar14 = (undefined8 *)((int)puVar14 + uVar11 * 4);
                  *pfVar12 = fVar38 * (float)uVar35 + 0.0;
                  pfVar12 = pfVar16;
                } while (__s + iVar18 != pfVar16);
              }
            }
LAB_ram_30045192:
            if (pfVar19 != (float *)0x0) goto LAB_ram_30045196;
LAB_ram_300455b2:
            if (pfVar13 == (float *)0x0) {
              memset(__s_00,0,__n);
              iVar20 = uVar22 << 2;
            }
            else {
              iVar20 = uVar22 * 4;
              iVar8 = 0;
              pfVar19 = __s_00;
              do {
                fStack_a4 = 0.0;
                FUN_ram_4009051c(pfVar13,pfVar17,uVar22,&fStack_a4);
                iVar8 = iVar8 + 1;
                pfVar13 = pfVar13 + uVar22;
                *pfVar19 = fStack_a4 + 0.0;
                pfVar19 = pfVar19 + 1;
              } while (iVar18 != iVar8);
            }
          }
          else {
            __n = iVar18 * 4;
            if (puVar14 == (undefined8 *)0x0) {
              puVar14 = (undefined8 *)((int)puVar15 + __n);
              pfVar12 = __s;
              do {
                uVar35 = *puVar15;
                puVar15 = (undefined8 *)((int)puVar15 + 4);
                *pfVar12 = (float)uVar35;
                pfVar12 = pfVar12 + 1;
              } while (puVar14 != puVar15);
              goto LAB_ram_30045192;
            }
            if (uVar11 != 0) {
              if (uVar11 == 1) {
                puVar9 = (undefined8 *)((int)puVar15 + __n);
                pfVar12 = __s;
                do {
                  uVar37 = *puVar14;
                  uVar35 = *puVar15;
                  puVar15 = (undefined8 *)((int)puVar15 + 4);
                  puVar14 = (undefined8 *)((int)puVar14 + 4);
                  *pfVar12 = fVar38 * (float)uVar37 + (float)uVar35;
                  pfVar12 = pfVar12 + 1;
                } while (puVar9 != puVar15);
              }
              else {
                puVar9 = (undefined8 *)((int)puVar15 + __n);
                pfVar12 = __s;
                do {
                  uVar37 = *puVar14;
                  uVar35 = *puVar15;
                  puVar15 = (undefined8 *)((int)puVar15 + 4);
                  puVar14 = (undefined8 *)((int)puVar14 + uVar11 * 4);
                  *pfVar12 = fVar38 * (float)uVar37 + (float)uVar35;
                  pfVar12 = pfVar12 + 1;
                } while (puVar15 != puVar9);
              }
              goto LAB_ram_30045192;
            }
            puVar14 = (undefined8 *)((int)puVar15 + __n);
            pfVar12 = __s;
            do {
              uVar35 = *puVar15;
              puVar15 = (undefined8 *)((int)puVar15 + 4);
              *pfVar12 = (float)uVar35;
              pfVar12 = pfVar12 + 1;
            } while (puVar15 != puVar14);
            if (pfVar19 == (float *)0x0) goto LAB_ram_300455b2;
LAB_ram_30045196:
            if (pfVar13 == (float *)0x0) {
              pfVar12 = (float *)((int)pfVar19 + __n);
              pfVar13 = __s_00;
              do {
                uVar35 = *(undefined8 *)pfVar19;
                pfVar19 = pfVar19 + 1;
                *pfVar13 = (float)uVar35;
                pfVar13 = pfVar13 + 1;
              } while (pfVar12 != pfVar19);
              goto LAB_ram_300451f2;
            }
            iVar20 = uVar22 * 4;
            iVar8 = 0;
            pfVar12 = __s_00;
            do {
              fVar38 = *pfVar19;
              fStack_a4 = 0.0;
              FUN_ram_4009051c(pfVar13,pfVar17,uVar22,&fStack_a4);
              iVar8 = iVar8 + 1;
              pfVar19 = pfVar19 + 1;
              pfVar13 = pfVar13 + uVar22;
              *pfVar12 = fVar38 + fStack_a4;
              pfVar12 = pfVar12 + 1;
            } while (iVar18 != iVar8);
          }
          fVar28 = DAT_ram_40099358;
          fVar36 = DAT_ram_400989d4;
          fVar30 = _DAT_ram_30083bd8;
          fVar31 = _DAT_ram_300833dc;
          fVar34 = _DAT_ram_300833d4;
          fVar1 = _DAT_ram_30082bd8;
          pfVar13 = pfVar17;
          do {
            pfVar23 = (float *)((int)__s + iVar20);
            pfVar19 = (float *)((int)__s_00 + iVar20);
            fVar38 = (float)*(undefined8 *)__s + (float)*(undefined8 *)__s_00;
            pfVar16 = __s_00 + uVar22 * 2;
            pfVar12 = __s + uVar22 * 2;
            __s = __s + 1;
            __s_00 = __s_00 + 1;
            fVar26 = fVar31;
            if ((fVar5 < fVar38) && (fVar26 = fVar30, fVar38 < fVar4)) {
              fVar38 = (fVar38 + fVar4) * fVar28;
              uVar11 = (uint)(-1 < (int)fVar38) * (int)fVar38;
              fVar26 = (fVar38 - (float)uVar11) *
                       (*(float *)(&DAT_ram_30082bdc + (uVar11 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30082bdc + (uVar11 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30082bdc + (uVar11 + 0x200) * 4);
            }
            fVar38 = *pfVar23 + *pfVar19;
            fVar24 = fVar31;
            if ((fVar5 < fVar38) && (fVar24 = fVar30, fVar38 < fVar4)) {
              fVar38 = (fVar38 + fVar4) * fVar7;
              uVar11 = (uint)(-1 < (int)fVar38) * (int)fVar38;
              fVar24 = (fVar38 - (float)uVar11) *
                       (*(float *)(&DAT_ram_30082bdc + (uVar11 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30082bdc + (uVar11 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30082bdc + (uVar11 + 0x200) * 4);
            }
            fVar26 = *pfVar16 * fVar26 + *pfVar12;
            fVar38 = fVar1;
            if ((fVar36 < fVar26) && (fVar38 = fVar34, fVar26 < fVar6)) {
              fVar38 = (fVar26 + fVar6) * fVar42;
              uVar11 = (uint)(-1 < (int)fVar38) * (int)fVar38;
              iVar18 = uVar11 * 4;
              fVar38 = (fVar38 - (float)uVar11) *
                       (*(float *)(&DAT_ram_30082bdc + iVar18) -
                       *(float *)(&DAT_ram_30082bd8 + iVar18)) +
                       *(float *)(&DAT_ram_30082bd8 + iVar18);
            }
            pfVar19 = pfVar13 + 1;
            fVar38 = ((float)*(undefined8 *)pfVar13 - fVar38) * fVar24 + fVar38;
            *pfVar13 = fVar38;
            pfVar13 = pfVar19;
          } while ((float *)((int)pfVar17 + iVar20) != pfVar19);
        }
      }
      if (!bVar3) {
        fVar38 = fVar38 * param_2;
      }
      *param_6 = fVar38;
      if (uVar21 < param_8) {
        param_1 = param_1 + param_3;
        param_2 = param_2 + param_4;
      }
      uVar21 = uVar21 + 1;
      param_6 = param_6 + 1;
      if (param_7 == uVar21) {
        return;
      }
      uVar22 = (uint)param_5[1];
    } while( true );
  }
  puVar10 = *(ulonglong **)(param_5 + 0x10);
  uVar40 = 0;
  if (puVar10 != (ulonglong *)0x0) {
    uVar40 = *puVar10;
  }
  pfVar17 = *(float **)(param_5 + 2);
  if ((pfVar17 == (float *)0x0) || (uVar22 = *(uint *)(param_5 + 10), uVar22 == 0)) {
    fVar36 = 0.0;
    fVar42 = 0.0;
    fVar28 = 0.0;
  }
  else {
    fVar42 = *pfVar17;
    if (uVar22 == 1) {
      fVar36 = 0.0;
    }
    else {
      fVar36 = pfVar17[1];
    }
    fVar28 = 0.0;
    if (2 < uVar22) {
      fVar28 = (float)*(undefined8 *)(pfVar17 + 2);
    }
  }
  pfVar17 = *(float **)(param_5 + 4);
  if ((pfVar17 == (float *)0x0) || (uVar22 = *(uint *)(param_5 + 0xc), uVar22 == 0)) {
    fVar24 = 0.0;
    fVar41 = 0.0;
    fVar26 = 0.0;
  }
  else {
    fVar26 = *pfVar17;
    if (uVar22 == 1) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = pfVar17[1];
    }
    fVar41 = 0.0;
    if (2 < uVar22) {
      fVar41 = pfVar17[2];
    }
  }
  pfVar17 = *(float **)(param_5 + 6);
  puVar14 = *(undefined8 **)(param_5 + 8);
  if ((pfVar17 == (float *)0x0) || (uVar22 = *(uint *)(param_5 + 0xe), uVar22 == 0)) {
    fVar44 = 0.0;
    fVar43 = 0.0;
LAB_ram_300453c8:
    if ((puVar14 == (undefined8 *)0x0) || (uVar22 = *(uint *)(param_5 + 0xe), uVar22 == 0)) {
      fVar45 = 0.0;
      fVar47 = 0.0;
      fVar27 = 0.0;
      fVar46 = 0.0;
      goto LAB_ram_300453e2;
    }
    fVar27 = (float)*puVar14;
    fVar45 = 0.0;
    fVar47 = 0.0;
    if (uVar22 == 1) {
      fVar47 = 0.0;
      fVar46 = 0.0;
      goto LAB_ram_300453e2;
    }
  }
  else {
    fVar43 = *pfVar17;
    if (uVar22 == 1) {
      fVar44 = 0.0;
    }
    else {
      fVar44 = pfVar17[1];
    }
    if (uVar22 < 3) goto LAB_ram_300453c8;
    fVar45 = pfVar17[2];
    if (puVar14 == (undefined8 *)0x0) {
      fVar47 = 0.0;
      fVar27 = 0.0;
      fVar46 = 0.0;
      goto LAB_ram_300453e2;
    }
    fVar27 = (float)*puVar14;
    fVar47 = fVar45;
  }
  fVar45 = fVar47;
  fVar47 = *(float *)((int)puVar14 + 4);
  if (uVar22 < 3) {
    fVar46 = 0.0;
  }
  else {
    fVar46 = *(float *)(puVar14 + 1);
  }
LAB_ram_300453e2:
  uVar22 = 0;
  do {
    fVar29 = *param_6;
    if (!bVar2) {
      fVar29 = fVar29 * param_1;
    }
    fVar39 = (float)uVar40;
    fVar33 = fVar29 * fVar42 + fVar43 + fVar39 * fVar26 + fVar27;
    fVar25 = fVar34;
    if ((fVar5 < fVar33) && (fVar25 = fVar31, fVar33 < fVar4)) {
      fVar33 = (fVar33 + fVar4) * fVar7;
      uVar21 = (uint)(-1 < (int)fVar33) * (int)fVar33;
      fVar25 = (fVar33 - (float)uVar21) *
               (*(float *)(&DAT_ram_30082bdc + (uVar21 + 0x201) * 4) -
               (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar21 + 0x200) * 4)) +
               (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar21 + 0x200) * 4);
    }
    fVar33 = fVar29 * fVar36 + fVar44 + fVar39 * fVar24 + fVar47;
    fVar32 = fVar34;
    if ((fVar5 < fVar33) && (fVar32 = fVar31, fVar33 < fVar4)) {
      fVar33 = (fVar33 + fVar4) * fVar7;
      uVar21 = (uint)(-1 < (int)fVar33) * (int)fVar33;
      fVar32 = (fVar33 - (float)uVar21) *
               ((float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar21 + 0x201) * 4) -
               (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar21 + 0x200) * 4)) +
               (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar21 + 0x200) * 4);
    }
    fVar29 = (fVar41 * fVar39 + fVar46) * fVar25 + fVar29 * fVar28 + fVar45;
    fVar33 = fVar38;
    if ((fVar30 < fVar29) && (fVar33 = fVar1, fVar29 < fVar6)) {
      fVar29 = (fVar29 + fVar6) * in_register_00000100;
      uVar21 = (uint)(-1 < (int)fVar29) * (int)fVar29;
      iVar18 = uVar21 * 4;
      fVar33 = (fVar29 - (float)uVar21) *
               ((float)*(undefined8 *)(&DAT_ram_30082bdc + iVar18) -
               (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar18)) +
               (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar18);
    }
    fVar33 = (fVar39 - fVar33) * fVar32 + fVar33;
    uVar40 = (ulonglong)(uint)fVar33;
    if (!bVar3) {
      fVar33 = fVar33 * param_2;
    }
    *param_6 = fVar33;
    param_6 = param_6 + 1;
    if (uVar22 < param_8) {
      param_1 = param_1 + param_3;
      param_2 = param_2 + param_4;
    }
    uVar22 = uVar22 + 1;
  } while (param_7 != uVar22);
  if (puVar10 != (ulonglong *)0x0) {
    *puVar10 = uVar40;
  }
  return;
}


/* NanoCore 1.10, address 0x3004599c.
 * REA evidence: ev_65b4fefc1483c1505c456b248b012942ba26dd677d9e8c636c0454fb8d16e18b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_3004599c(int *param_1,float *param_2,int param_3)

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
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  if (((param_1 != (int *)0x0) && (iVar19 = *param_1, iVar19 != 0)) && (param_3 != 0)) {
    iVar18 = param_1[1];
    if (iVar18 == 2) {
      fVar1 = *(float *)(iVar19 + 0x38);
      fVar2 = *(float *)(iVar19 + 0x3c);
      fVar3 = *(float *)(iVar19 + 0x40);
      fVar4 = *(float *)(iVar19 + 0x44);
      fVar5 = *(float *)(iVar19 + 0x48);
      fVar6 = *(float *)(iVar19 + 0x8c);
      fVar7 = *(float *)(iVar19 + 0x90);
      fVar8 = *(float *)(iVar19 + 0x94);
      fVar9 = *(float *)(iVar19 + 0x98);
      fVar10 = *(float *)(iVar19 + 0x9c);
      uVar25 = *(ulonglong *)(iVar19 + 0x4c);
      uVar29 = *(ulonglong *)(iVar19 + 0x50);
      fVar31 = *(float *)(iVar19 + 0xa0);
      fVar30 = *(float *)(iVar19 + 0xa4);
      pfVar17 = param_2;
      do {
        pfVar16 = pfVar17 + 1;
        fVar26 = (float)*(undefined8 *)pfVar17;
        fVar11 = fVar1 * fVar26 + (float)uVar25;
        fVar22 = fVar6 * fVar11 + fVar31;
        uVar25 = (ulonglong)(uint)(fVar4 * fVar11 + fVar2 * fVar26 + (float)uVar29);
        *pfVar17 = fVar22;
        uVar29 = (ulonglong)(uint)(fVar3 * fVar26 + fVar5 * fVar11);
        fVar31 = fVar9 * fVar22 + fVar7 * fVar11 + fVar30;
        fVar30 = fVar8 * fVar11 + fVar10 * fVar22;
        pfVar17 = pfVar16;
      } while (param_2 + param_3 != pfVar16);
      *(ulonglong *)(iVar19 + 0x4c) = uVar25;
      *(ulonglong *)(iVar19 + 0x50) = uVar29;
      *(float *)(iVar19 + 0xa0) = fVar31;
      *(float *)(iVar19 + 0xa4) = fVar30;
      return;
    }
    if (iVar18 == 3) {
      fVar1 = *(float *)(iVar19 + 0x38);
      fVar2 = *(float *)(iVar19 + 0x3c);
      fVar3 = *(float *)(iVar19 + 0x40);
      uVar24 = *(undefined8 *)(iVar19 + 0x44);
      uVar23 = *(undefined8 *)(iVar19 + 0x48);
      fVar4 = *(float *)(iVar19 + 0x8c);
      fVar5 = *(float *)(iVar19 + 0x90);
      fVar6 = *(float *)(iVar19 + 0x94);
      fVar7 = *(float *)(iVar19 + 0x98);
      fVar8 = *(float *)(iVar19 + 0x9c);
      fVar9 = *(float *)(iVar19 + 0xe0);
      fVar10 = *(float *)(iVar19 + 0xe4);
      fVar31 = *(float *)(iVar19 + 0xe8);
      fVar30 = *(float *)(iVar19 + 0xec);
      fVar11 = *(float *)(iVar19 + 0xf0);
      fVar22 = *(float *)(iVar19 + 0x4c);
      uVar25 = *(ulonglong *)(iVar19 + 0x50);
      fVar26 = *(float *)(iVar19 + 0xa0);
      fVar27 = *(float *)(iVar19 + 0xa4);
      fVar32 = *(float *)(iVar19 + 0xf4);
      fVar28 = *(float *)(iVar19 + 0xf8);
      pfVar17 = param_2;
      do {
        fVar12 = *pfVar17;
        pfVar16 = pfVar17 + 1;
        fVar13 = fVar1 * fVar12 + fVar22;
        fVar14 = fVar4 * fVar13 + fVar26;
        fVar22 = (float)uVar24 * fVar13 + fVar2 * fVar12 + (float)uVar25;
        fVar15 = fVar9 * fVar14 + fVar32;
        uVar25 = (ulonglong)(uint)(fVar3 * fVar12 + (float)uVar23 * fVar13);
        fVar26 = fVar7 * fVar14 + fVar5 * fVar13 + fVar27;
        *pfVar17 = fVar15;
        fVar32 = fVar30 * fVar15 + fVar10 * fVar14 + fVar28;
        fVar27 = fVar6 * fVar13 + fVar8 * fVar14;
        fVar28 = fVar31 * fVar14 + fVar11 * fVar15;
        pfVar17 = pfVar16;
      } while (param_2 + param_3 != pfVar16);
      *(float *)(iVar19 + 0x4c) = fVar22;
      *(ulonglong *)(iVar19 + 0x50) = uVar25;
      *(float *)(iVar19 + 0xa0) = fVar26;
      *(float *)(iVar19 + 0xa4) = fVar27;
      *(float *)(iVar19 + 0xf4) = fVar32;
      *(float *)(iVar19 + 0xf8) = fVar28;
    }
    else {
      iVar21 = 0;
      uVar20 = 0;
      if (iVar18 != 0) {
        while( true ) {
          FUN_ram_400905e4(iVar19 + iVar21 + 0x2c,param_2,param_2,param_3);
          uVar20 = uVar20 + 1;
          iVar21 = iVar21 + 0x54;
          if ((uint)param_1[1] <= uVar20) break;
          iVar19 = *param_1;
        }
      }
    }
    return;
  }
  return;
}


