/* NanoCore 1.10 analysis module: unresolved/bank_3/block_30044000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x300447b8.
 * REA evidence: ev_1ab4c0b9be9a794e47c95cd7973c0401ecb8551e5742e1d90fe66c606dadf18a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_300447b8(ushort *param_1,float *param_2,int param_3)

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
  float *__s;
  float *__s_00;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  size_t __n;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  ulonglong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 unaff_fs11;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  fVar7 = DAT_ram_4009935c;
  fVar6 = DAT_ram_40099358;
  fVar28 = DAT_ram_400989d4;
  fVar5 = DAT_ram_400930e8;
  fVar4 = DAT_ram_40092850;
  fVar3 = DAT_ram_4009284c;
  fVar29 = _DAT_ram_30083bd8;
  fVar30 = _DAT_ram_300833dc;
  fVar2 = _DAT_ram_300833d4;
  fVar33 = _DAT_ram_30082bd8;
  uVar18 = (uint)param_1[1];
  uStack_a0 = (undefined4)unaff_fs11;
  uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
  if (uVar18 != 1) {
    if (param_3 == 0) {
      return;
    }
    iVar17 = 0;
    do {
      fVar33 = *param_2;
      if ((((uVar18 != 0) && (pfVar19 = *(float **)(param_1 + 0x10), pfVar19 != (float *)0x0)) &&
          (__s = *(float **)(param_1 + 0x12), __s != (float *)0x0)) &&
         (__s_00 = *(float **)(param_1 + 0x14), __s_00 != (float *)0x0)) {
        pfVar12 = *(float **)(param_1 + 6);
        pfVar14 = *(float **)(param_1 + 8);
        puVar11 = *(undefined8 **)(param_1 + 2);
        pfVar20 = *(float **)(param_1 + 4);
        if (uVar18 == 1) {
          fVar2 = *pfVar19;
          if (pfVar12 == (float *)0x0) {
            if (puVar11 != (undefined8 *)0x0) {
              fVar28 = 0.0;
              fVar29 = fVar33 * (float)*puVar11 + 0.0;
              fVar30 = fVar33 * (float)*(undefined8 *)((int)puVar11 + 4) + 0.0;
              goto LAB_ram_30044d1c;
            }
            fVar28 = 0.0;
            fVar29 = 0.0;
            fVar30 = fVar29;
          }
          else if (puVar11 == (undefined8 *)0x0) {
            fVar29 = *pfVar12 + 0.0;
            fVar28 = (float)*(undefined8 *)(pfVar12 + 2) + 0.0;
            fVar30 = (float)*(undefined8 *)(pfVar12 + 1) + 0.0;
          }
          else {
            fVar29 = fVar33 * (float)*puVar11 + *pfVar12;
            fVar28 = (float)*(undefined8 *)(pfVar12 + 2);
            fVar30 = fVar33 * (float)*(undefined8 *)((int)puVar11 + 4) +
                     (float)*(undefined8 *)(pfVar12 + 1);
LAB_ram_30044d1c:
            fVar28 = fVar33 * (float)puVar11[1] + fVar28;
          }
          if (pfVar14 == (float *)0x0) {
            if (pfVar20 != (float *)0x0) {
              fVar23 = 0.0;
              fVar33 = fVar2 * *pfVar20 + 0.0;
              fVar37 = fVar2 * pfVar20[1] + 0.0;
              goto LAB_ram_30044d46;
            }
            fVar37 = 0.0;
            fVar33 = fVar37;
            fVar23 = fVar37;
          }
          else if (pfVar20 == (float *)0x0) {
            fVar37 = pfVar14[1] + 0.0;
            fVar33 = *pfVar14 + 0.0;
            fVar23 = pfVar14[2] + 0.0;
          }
          else {
            fVar37 = fVar2 * pfVar20[1] + pfVar14[1];
            fVar33 = fVar2 * *pfVar20 + *pfVar14;
            fVar23 = pfVar14[2];
LAB_ram_30044d46:
            fVar23 = fVar2 * pfVar20[2] + fVar23;
          }
          fVar33 = fVar33 + fVar29;
          fVar29 = _DAT_ram_300833dc;
          if ((DAT_ram_40092850 < fVar33) && (fVar29 = _DAT_ram_30083bd8, fVar33 < DAT_ram_4009284c)
             ) {
            fVar33 = (fVar33 + DAT_ram_4009284c) * DAT_ram_40099358;
            uVar18 = (uint)(-1 < (int)fVar33) * (int)fVar33;
            fVar29 = (fVar33 - (float)uVar18) *
                     (*(float *)(&DAT_ram_30082bdc + (uVar18 + 0x201) * 4) -
                     *(float *)(&DAT_ram_30082bdc + (uVar18 + 0x200) * 4)) +
                     *(float *)(&DAT_ram_30082bdc + (uVar18 + 0x200) * 4);
          }
          fVar30 = fVar30 + fVar37;
          fVar37 = _DAT_ram_300833dc;
          if ((DAT_ram_40092850 < fVar30) && (fVar37 = _DAT_ram_30083bd8, fVar30 < DAT_ram_4009284c)
             ) {
            fVar33 = (fVar30 + DAT_ram_4009284c) * DAT_ram_40099358;
            uVar18 = (uint)(-1 < (int)fVar33) * (int)fVar33;
            fVar37 = (fVar33 - (float)uVar18) *
                     ((float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar18 + 0x201) * 4) -
                     (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar18 + 0x200) * 4)) +
                     (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar18 + 0x200) * 4);
          }
          fVar28 = fVar29 * fVar23 + fVar28;
          fVar33 = _DAT_ram_30082bd8;
          if ((DAT_ram_400989d4 < fVar28) && (fVar33 = _DAT_ram_300833d4, fVar28 < DAT_ram_400930e8)
             ) {
            fVar33 = (fVar28 + DAT_ram_400930e8) * DAT_ram_4009935c;
            uVar18 = (uint)(-1 < (int)fVar33) * (int)fVar33;
            iVar16 = uVar18 * 4;
            fVar33 = (fVar33 - (float)uVar18) *
                     ((float)*(undefined8 *)(&DAT_ram_30082bdc + iVar16) -
                     (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar16)) +
                     (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar16);
          }
          fVar33 = (fVar2 - fVar33) * fVar37 + fVar33;
          *pfVar19 = fVar33;
        }
        else {
          iVar16 = *(int *)(param_1 + 0xe);
          uVar9 = (uint)*param_1;
          if (iVar16 == 0) {
LAB_ram_30044cb6:
            iVar15 = uVar18 << 2;
          }
          else if (pfVar12 == (float *)0x0) {
            if ((puVar11 == (undefined8 *)0x0) || (uVar9 == 0)) {
              __n = iVar16 << 2;
              memset(__s,0,__n);
            }
            else {
              __n = iVar16 * 4;
              if (uVar9 == 1) {
                pfVar12 = __s;
                do {
                  uVar31 = *puVar11;
                  pfVar10 = pfVar12 + 1;
                  puVar11 = (undefined8 *)((int)puVar11 + 4);
                  *pfVar12 = fVar33 * (float)uVar31 + 0.0;
                  pfVar12 = pfVar10;
                } while (__s + iVar16 != pfVar10);
              }
              else {
                pfVar12 = __s;
                do {
                  uVar31 = *puVar11;
                  pfVar10 = pfVar12 + 1;
                  puVar11 = (undefined8 *)((int)puVar11 + uVar9 * 4);
                  *pfVar12 = fVar33 * (float)uVar31 + 0.0;
                  pfVar12 = pfVar10;
                } while (__s + iVar16 != pfVar10);
              }
            }
LAB_ram_300448a2:
            if (pfVar14 != (float *)0x0) goto LAB_ram_300448a6;
LAB_ram_30044c62:
            if (pfVar20 == (float *)0x0) {
              memset(__s_00,0,__n);
              iVar15 = uVar18 << 2;
            }
            else {
              iVar15 = uVar18 * 4;
              iVar21 = 0;
              pfVar14 = __s_00;
              do {
                fStack_a4 = 0.0;
                FUN_ram_4009051c(pfVar20,pfVar19,uVar18,&fStack_a4);
                iVar21 = iVar21 + 1;
                pfVar20 = pfVar20 + uVar18;
                *pfVar14 = fStack_a4 + 0.0;
                pfVar14 = pfVar14 + 1;
              } while (iVar16 != iVar21);
            }
          }
          else {
            __n = iVar16 * 4;
            if (puVar11 == (undefined8 *)0x0) {
              pfVar13 = pfVar12 + iVar16;
              pfVar10 = __s;
              do {
                uVar31 = *(undefined8 *)pfVar12;
                pfVar12 = pfVar12 + 1;
                *pfVar10 = (float)uVar31;
                pfVar10 = pfVar10 + 1;
              } while (pfVar13 != pfVar12);
              goto LAB_ram_300448a2;
            }
            if (uVar9 != 0) {
              if (uVar9 == 1) {
                pfVar13 = pfVar12 + iVar16;
                pfVar10 = __s;
                do {
                  uVar32 = *puVar11;
                  uVar31 = *(undefined8 *)pfVar12;
                  pfVar12 = pfVar12 + 1;
                  puVar11 = (undefined8 *)((int)puVar11 + 4);
                  *pfVar10 = fVar33 * (float)uVar32 + (float)uVar31;
                  pfVar10 = pfVar10 + 1;
                } while (pfVar13 != pfVar12);
              }
              else {
                pfVar13 = pfVar12 + iVar16;
                pfVar10 = __s;
                do {
                  uVar32 = *puVar11;
                  uVar31 = *(undefined8 *)pfVar12;
                  pfVar12 = pfVar12 + 1;
                  puVar11 = (undefined8 *)((int)puVar11 + uVar9 * 4);
                  *pfVar10 = fVar33 * (float)uVar32 + (float)uVar31;
                  pfVar10 = pfVar10 + 1;
                } while (pfVar13 != pfVar12);
              }
              goto LAB_ram_300448a2;
            }
            pfVar13 = pfVar12 + iVar16;
            pfVar10 = __s;
            do {
              uVar31 = *(undefined8 *)pfVar12;
              pfVar12 = pfVar12 + 1;
              *pfVar10 = (float)uVar31;
              pfVar10 = pfVar10 + 1;
            } while (pfVar13 != pfVar12);
            if (pfVar14 == (float *)0x0) goto LAB_ram_30044c62;
LAB_ram_300448a6:
            if (pfVar20 == (float *)0x0) {
              pfVar12 = (float *)((int)pfVar14 + __n);
              pfVar20 = __s_00;
              do {
                uVar31 = *(undefined8 *)pfVar14;
                pfVar14 = pfVar14 + 1;
                *pfVar20 = (float)uVar31;
                pfVar20 = pfVar20 + 1;
              } while (pfVar12 != pfVar14);
              goto LAB_ram_30044cb6;
            }
            iVar15 = uVar18 * 4;
            iVar21 = 0;
            pfVar12 = __s_00;
            do {
              fVar33 = *pfVar14;
              fStack_a4 = 0.0;
              FUN_ram_4009051c(pfVar20,pfVar19,uVar18,&fStack_a4);
              iVar21 = iVar21 + 1;
              pfVar14 = pfVar14 + 1;
              pfVar20 = pfVar20 + uVar18;
              *pfVar12 = fVar33 + fStack_a4;
              pfVar12 = pfVar12 + 1;
            } while (iVar16 != iVar21);
          }
          fVar23 = DAT_ram_40099358;
          fVar37 = DAT_ram_400989d4;
          fVar28 = _DAT_ram_30083bd8;
          fVar29 = _DAT_ram_300833dc;
          fVar30 = _DAT_ram_300833d4;
          fVar2 = _DAT_ram_30082bd8;
          pfVar14 = pfVar19;
          do {
            pfVar20 = (float *)((int)__s + iVar15);
            pfVar13 = (float *)((int)__s_00 + iVar15);
            fVar33 = (float)*(undefined8 *)__s + (float)*(undefined8 *)__s_00;
            pfVar10 = __s_00 + uVar18 * 2;
            pfVar12 = __s + uVar18 * 2;
            __s = __s + 1;
            __s_00 = __s_00 + 1;
            fVar36 = fVar29;
            if ((fVar4 < fVar33) && (fVar36 = fVar28, fVar33 < fVar3)) {
              fVar33 = (fVar33 + fVar3) * fVar23;
              uVar9 = (uint)(-1 < (int)fVar33) * (int)fVar33;
              fVar36 = (fVar33 - (float)uVar9) *
                       (*(float *)(&DAT_ram_30082bdc + (uVar9 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30082bdc + (uVar9 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30082bdc + (uVar9 + 0x200) * 4);
            }
            fVar33 = *pfVar20 + *pfVar13;
            fVar38 = fVar29;
            if ((fVar4 < fVar33) && (fVar38 = fVar28, fVar33 < fVar3)) {
              fVar33 = (fVar33 + fVar3) * fVar6;
              uVar9 = (uint)(-1 < (int)fVar33) * (int)fVar33;
              fVar38 = (fVar33 - (float)uVar9) *
                       (*(float *)(&DAT_ram_30082bdc + (uVar9 + 0x201) * 4) -
                       *(float *)(&DAT_ram_30082bdc + (uVar9 + 0x200) * 4)) +
                       *(float *)(&DAT_ram_30082bdc + (uVar9 + 0x200) * 4);
            }
            fVar36 = *pfVar10 * fVar36 + (float)*(undefined8 *)pfVar12;
            fVar33 = fVar2;
            if ((fVar37 < fVar36) && (fVar33 = fVar30, fVar36 < fVar5)) {
              fVar33 = (fVar36 + fVar5) * fVar7;
              uVar9 = (uint)(-1 < (int)fVar33) * (int)fVar33;
              iVar16 = uVar9 * 4;
              fVar33 = (fVar33 - (float)uVar9) *
                       (*(float *)(&DAT_ram_30082bdc + iVar16) -
                       *(float *)(&DAT_ram_30082bd8 + iVar16)) +
                       *(float *)(&DAT_ram_30082bd8 + iVar16);
            }
            pfVar20 = pfVar14 + 1;
            fVar33 = ((float)*(undefined8 *)pfVar14 - fVar33) * fVar38 + fVar33;
            *pfVar14 = fVar33;
            pfVar14 = pfVar20;
          } while ((float *)((int)pfVar19 + iVar15) != pfVar20);
        }
      }
      *param_2 = fVar33;
      iVar17 = iVar17 + 1;
      param_2 = param_2 + 1;
      if (param_3 == iVar17) {
        return;
      }
      uVar18 = (uint)param_1[1];
    } while( true );
  }
  puVar8 = *(ulonglong **)(param_1 + 0x10);
  uVar35 = 0;
  if (puVar8 != (ulonglong *)0x0) {
    uVar35 = *puVar8;
  }
  pfVar19 = *(float **)(param_1 + 2);
  if ((pfVar19 == (float *)0x0) || (uVar18 = *(uint *)(param_1 + 10), uVar18 == 0)) {
    fVar23 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
  }
  else {
    fVar37 = *pfVar19;
    if (uVar18 == 1) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = pfVar19[1];
    }
    fVar36 = 0.0;
    if (2 < uVar18) {
      fVar36 = pfVar19[2];
    }
  }
  pfVar19 = *(float **)(param_1 + 4);
  if ((pfVar19 == (float *)0x0) || (uVar18 = *(uint *)(param_1 + 0xc), uVar18 == 0)) {
    fVar40 = 0.0;
    fVar41 = 0.0;
    fVar38 = 0.0;
  }
  else {
    fVar38 = *pfVar19;
    if (uVar18 == 1) {
      fVar40 = 0.0;
    }
    else {
      fVar40 = pfVar19[1];
    }
    fVar41 = 0.0;
    if (2 < uVar18) {
      fVar41 = pfVar19[2];
    }
  }
  pfVar19 = *(float **)(param_1 + 6);
  puVar11 = *(undefined8 **)(param_1 + 8);
  if ((pfVar19 == (float *)0x0) || (uVar18 = *(uint *)(param_1 + 0xe), uVar18 == 0)) {
    fVar42 = 0.0;
    fVar39 = 0.0;
LAB_ram_30044aa0:
    if ((puVar11 == (undefined8 *)0x0) || (uVar18 = *(uint *)(param_1 + 0xe), uVar18 == 0)) {
      fVar43 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar44 = 0.0;
      goto LAB_ram_30044aba;
    }
    fVar26 = (float)*puVar11;
    fVar43 = 0.0;
    fVar44 = 0.0;
    if (uVar18 == 1) {
      fVar25 = 0.0;
      fVar44 = 0.0;
      goto LAB_ram_30044aba;
    }
  }
  else {
    fVar39 = *pfVar19;
    if (uVar18 == 1) {
      fVar42 = 0.0;
    }
    else {
      fVar42 = pfVar19[1];
    }
    if (uVar18 < 3) goto LAB_ram_30044aa0;
    fVar43 = pfVar19[2];
    if (puVar11 == (undefined8 *)0x0) {
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar44 = 0.0;
      goto LAB_ram_30044aba;
    }
    fVar26 = (float)*puVar11;
    fVar44 = fVar43;
  }
  fVar43 = fVar44;
  fVar25 = (float)*(undefined8 *)((int)puVar11 + 4);
  if (uVar18 < 3) {
    fVar44 = 0.0;
  }
  else {
    fVar44 = *(float *)(puVar11 + 1);
  }
LAB_ram_30044aba:
  if (param_3 != 0) {
    iVar17 = 0;
    do {
      fVar34 = (float)uVar35;
      fVar27 = (float)*(undefined8 *)param_2;
      fVar1 = fVar27 * fVar37 + fVar39 + fVar34 * fVar38 + fVar26;
      iVar17 = iVar17 + 1;
      fVar22 = fVar27 * fVar23 + fVar42 + fVar34 * fVar40 + fVar25;
      fVar24 = fVar30;
      if ((fVar4 < fVar1) && (fVar24 = fVar29, fVar1 < fVar3)) {
        fVar1 = (fVar1 + fVar3) * fVar6;
        uVar18 = (uint)(-1 < (int)fVar1) * (int)fVar1;
        fVar24 = (fVar1 - (float)uVar18) *
                 (*(float *)(&DAT_ram_30082bdc + (uVar18 + 0x201) * 4) -
                 (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar18 + 0x200) * 4)) +
                 (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar18 + 0x200) * 4);
      }
      fVar1 = (fVar41 * fVar34 + fVar44) * fVar24 + fVar36 * fVar27 + fVar43;
      fVar24 = fVar30;
      if ((fVar4 < fVar22) && (fVar24 = fVar29, fVar22 < fVar3)) {
        fVar22 = (fVar22 + fVar3) * fVar6;
        uVar18 = (uint)(-1 < (int)fVar22) * (int)fVar22;
        fVar24 = (fVar22 - (float)uVar18) *
                 (*(float *)(&DAT_ram_30082bdc + (uVar18 + 0x201) * 4) -
                 (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar18 + 0x200) * 4)) +
                 (float)*(undefined8 *)(&DAT_ram_30082bdc + (uVar18 + 0x200) * 4);
      }
      fVar22 = fVar33;
      if ((fVar28 < fVar1) && (fVar22 = fVar2, fVar1 < fVar5)) {
        fVar1 = (fVar1 + fVar5) * fVar7;
        uVar18 = (uint)(-1 < (int)fVar1) * (int)fVar1;
        iVar16 = uVar18 * 4;
        fVar22 = (fVar1 - (float)uVar18) *
                 (*(float *)(&DAT_ram_30082bdc + iVar16) -
                 (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar16)) +
                 (float)*(undefined8 *)(&DAT_ram_30082bd8 + iVar16);
      }
      fVar22 = (fVar34 - fVar22) * fVar24 + fVar22;
      uVar35 = (ulonglong)(uint)fVar22;
      *param_2 = fVar22;
      param_2 = param_2 + 1;
    } while (param_3 != iVar17);
  }
  if (puVar8 != (ulonglong *)0x0) {
    *puVar8 = uVar35;
  }
  return;
}


