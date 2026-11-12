/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40072000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40072020.
 * REA evidence: ev_ba5812a3331556cdda6dde7f1fbbdd1d5ce4ca8181a276dd66fbe8bfe9b3511b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40072020(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    memset((void *)(param_1 + 0xc),0,0x3000);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40072036.
 * REA evidence: ev_020051dcb710ed59fcd3cd32ffdf18745e2b71c13ff14eb08d6cfd0791e25392
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40072036(ulonglong *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    *param_1 = (ulonglong)DAT_ram_40098a60;
    if (param_2 == 1) {
      uVar1 = 1;
    }
    else {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_400937b0;
      if (param_2 == 2) {
        uVar1 = 2;
      }
      else {
        param_1[1] = (ulonglong)DAT_ram_40094234;
        if (param_2 == 3) {
          uVar1 = 3;
        }
        else {
          *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40098118;
          if (param_2 - 1 < 4) {
            uVar1 = 4;
          }
          else {
            uVar1 = 5;
            param_1[2] = (ulonglong)DAT_ram_4009281c;
          }
        }
      }
    }
    if (uVar1 < param_2) {
      memset((void *)((int)param_1 + uVar1 * 4),0,(param_2 - uVar1) * 4);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400720ae.
 * REA evidence: ev_76cc288c5756a0c36070f33b149d2e444d9e72b717328e87bd8b3e0769aff937
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400720ae(float *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     float *param_7,int param_8,int param_9)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
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
  float fVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  if (((param_1 == (float *)0x0) || (param_2 == 0)) || (param_4 == 0)) {
    return;
  }
  if (param_9 != 0) {
    *(bool *)param_9 = param_5 != 0;
  }
  fVar4 = DAT_ram_4009281c;
  fVar3 = DAT_ram_400980e0;
  if (DAT_ram_40093094 < *param_1) {
    fVar3 = *param_1;
  }
  fVar38 = DAT_ram_400937b0;
  fVar26 = DAT_ram_40094234;
  fVar37 = DAT_ram_40098118;
  fVar36 = DAT_ram_4009281c;
  fVar27 = DAT_ram_4009807c;
  if (param_7 != (float *)0x0) {
    fVar27 = *param_7;
    if (fVar27 < 0.0) {
      fVar38 = param_7[1];
      fVar27 = 0.0;
      if (0.0 <= fVar38) goto LAB_ram_40072144;
LAB_ram_400725ba:
      fVar26 = param_7[2];
      fVar38 = 0.0;
      if (0.0 <= fVar26) goto LAB_ram_4007215c;
LAB_ram_400725ce:
      fVar37 = param_7[3];
      fVar26 = 0.0;
      if (0.0 <= fVar37) goto LAB_ram_40072174;
LAB_ram_400725e2:
      fVar36 = param_7[4];
      fVar37 = 0.0;
      if (0.0 <= fVar36) goto LAB_ram_4007218c;
LAB_ram_400725f6:
      fVar36 = 0.0;
    }
    else {
      if (DAT_ram_4009281c < fVar27) {
        fVar27 = DAT_ram_4009281c;
      }
      fVar38 = param_7[1];
      if (fVar38 < 0.0) goto LAB_ram_400725ba;
LAB_ram_40072144:
      if (DAT_ram_4009281c < fVar38) {
        fVar38 = DAT_ram_4009281c;
      }
      fVar26 = param_7[2];
      if (fVar26 < 0.0) goto LAB_ram_400725ce;
LAB_ram_4007215c:
      if (DAT_ram_4009281c < fVar26) {
        fVar26 = DAT_ram_4009281c;
      }
      fVar37 = param_7[3];
      if (fVar37 < 0.0) goto LAB_ram_400725e2;
LAB_ram_40072174:
      if (DAT_ram_4009281c < fVar37) {
        fVar37 = DAT_ram_4009281c;
      }
      fVar36 = param_7[4];
      if (fVar36 < 0.0) goto LAB_ram_400725f6;
LAB_ram_4007218c:
      if (DAT_ram_4009281c < fVar36) {
        fVar36 = DAT_ram_4009281c;
      }
    }
    fVar25 = DAT_ram_40098a64;
    if ((0.0 <= fVar27) && (fVar25 = DAT_ram_400985cc, fVar27 <= DAT_ram_4009281c)) {
      fVar25 = fVar27 * DAT_ram_40098a6c + DAT_ram_40098a64;
    }
    fVar27 = (float)FUN_ram_40000c0e(fVar25);
    if (DAT_ram_400984fc <= fVar26) {
      fVar37 = fVar37 + DAT_ram_400934d8;
      fVar35 = 0.0;
      bVar2 = true;
      fVar25 = (fVar26 - DAT_ram_400984fc) / DAT_ram_40098398 + DAT_ram_40098a70;
      fVar26 = DAT_ram_40098a68;
      goto LAB_ram_400721fa;
    }
  }
  fVar26 = fVar26 / DAT_ram_400984fc;
  fVar37 = fVar37 * DAT_ram_40098a78 + DAT_ram_400934d8;
  bVar2 = false;
  fVar25 = fVar26 * DAT_ram_40098108 + DAT_ram_40098a74;
  fVar35 = fVar26 * DAT_ram_40098338 + DAT_ram_40098a7c;
  fVar26 = fVar26 * DAT_ram_40098a80 + DAT_ram_40098a84;
LAB_ram_400721fa:
  fVar18 = DAT_ram_40098a88;
  fVar17 = DAT_ram_40098610;
  fVar16 = DAT_ram_4009860c;
  fVar15 = DAT_ram_40098604._4_4_;
  fVar14 = (float)DAT_ram_40098604;
  fVar13 = DAT_ram_400985fc._4_4_;
  fVar12 = (float)DAT_ram_400985fc;
  fVar11 = DAT_ram_400985f4._4_4_;
  fVar10 = DAT_ram_400984dc;
  fVar9 = DAT_ram_400980f4;
  fVar8 = DAT_ram_400937b0;
  fVar7 = DAT_ram_400934d8;
  fVar6 = DAT_ram_4009309c;
  puVar5 = PTR_firmware_entry_ram_40092830;
  fVar25 = fVar3 * fVar25 * DAT_ram_40098104;
  fVar37 = fVar3 * fVar37 * DAT_ram_40098104;
  fVar1 = fVar4 - fVar36;
  if (param_6 != 0) {
    uVar30 = *(ulonglong *)(param_1 + 1);
    uVar23 = (uint)*(ushort *)(param_1 + 2);
    iVar21 = 0;
    do {
      fVar31 = *(float *)(param_2 + iVar21);
      fVar28 = fVar31;
      if ((param_8 != 0) && (param_3 != 0)) {
        fVar28 = (float)*(undefined8 *)(param_3 + iVar21);
      }
      fVar29 = (float)uVar30;
      fVar34 = fVar29 * fVar9;
      if (fVar10 < fVar34) {
        fVar34 = fVar34 - fVar9;
      }
      if (fVar34 <= fVar11) {
        if (fVar34 < fVar12) {
          fVar34 = fVar13 - fVar34;
        }
      }
      else {
        fVar34 = fVar10 - fVar34;
      }
      fVar33 = fVar34 * fVar34;
      fVar32 = fVar29 * fVar6;
      fVar34 = fVar34 * (fVar33 * (fVar33 * (fVar33 * (fVar33 * fVar14 + fVar15) + fVar16) + fVar17)
                        + fVar4);
      if (fVar7 <= fVar29) {
        if (fVar29 < fVar8) {
          fVar32 = (float)puVar5 - fVar32;
        }
        else {
          fVar32 = fVar32 - fVar6;
        }
      }
      fVar29 = 0.0;
      if ((0.0 <= fVar38) && (fVar29 = fVar4, fVar38 <= fVar4)) {
        fVar29 = fVar38;
      }
      fVar33 = (float)uVar23;
      fVar34 = fVar37 * ((fVar32 - fVar34) * fVar29 + fVar34) + fVar25;
      if (uVar23 == 0) {
        uVar19 = 0x5ff;
        uVar20 = 0x5ff;
        if (0.0 <= fVar34) goto LAB_ram_400723c4;
        uVar19 = 0;
        uVar24 = 1;
LAB_ram_40072546:
        uVar22 = uVar24;
      }
      else {
        uVar19 = uVar23 - 1 & 0xffff;
        uVar20 = uVar19;
        if (0.0 <= fVar34) {
LAB_ram_400723c4:
          uVar20 = uVar19;
          if (fVar18 < fVar34) {
            fVar33 = fVar33 - fVar18;
          }
          else {
            fVar33 = fVar33 - fVar34;
          }
        }
        uVar19 = (uint)fVar33;
        fVar34 = (float)(int)uVar19;
        if (fVar33 < fVar34) {
          uVar19 = uVar19 - 1;
          fVar34 = (float)(int)uVar19;
        }
        fVar33 = fVar33 - fVar34;
        if ((int)uVar19 < 0) {
          uVar19 = uVar19 + 0x600;
        }
        else if (0x5ff < (int)uVar19) {
          uVar19 = uVar19 - 0x600;
        }
        uVar24 = uVar19 + 1 & 0xffff;
        uVar22 = 0;
        if (uVar24 < 0x600) goto LAB_ram_40072546;
      }
      param_1[uVar23 + 3] = fVar31;
      param_1[uVar23 + 0x603] = fVar28;
      fVar29 = fVar4 - fVar33;
      uVar19 = uVar19 & 0xffff;
      fVar34 = fVar26 * ((float)*(undefined8 *)(param_1 + uVar19 + 3) * fVar29 +
                        fVar33 * (float)*(undefined8 *)(param_1 + uVar22 + 3));
      if (bVar2) {
        *(float *)(param_4 + iVar21) = fVar1 * fVar31 + fVar36 * fVar34;
        if (param_5 != 0) {
          fVar31 = fVar26 * (param_1[uVar19 + 0x603] * fVar29 + fVar33 * param_1[uVar22 + 0x603]);
LAB_ram_400722f6:
          *(ulonglong *)(param_5 + iVar21) = (ulonglong)(uint)(fVar28 * fVar1 + fVar31 * fVar36);
        }
      }
      else {
        *(float *)(param_4 + iVar21) =
             fVar1 * fVar31 + fVar36 * (fVar35 * param_1[uVar20 + 3] + fVar34);
        if (param_5 != 0) {
          fVar31 = fVar26 * (param_1[uVar19 + 0x603] * fVar29 + fVar33 * param_1[uVar22 + 0x603]) +
                   fVar35 * param_1[uVar20 + 0x603];
          goto LAB_ram_400722f6;
        }
      }
      uVar19 = uVar23 + 1;
      uVar23 = uVar19 & 0xffff;
      if (uVar23 < 0x600) {
        *(short *)(param_1 + 2) = (short)(uVar19 * 0x10000 >> 0x10);
      }
      else {
        *(undefined2 *)(param_1 + 2) = 0;
        uVar23 = 0;
      }
      fVar31 = fVar27 / fVar3 + (float)*(undefined8 *)(param_1 + 1);
      if (fVar4 <= fVar31) {
        fVar31 = fVar31 - fVar4;
      }
      uVar30 = (ulonglong)(uint)fVar31;
      *(ulonglong *)(param_1 + 1) = uVar30;
      iVar21 = iVar21 + 4;
    } while (param_6 << 2 != iVar21);
  }
  return;
}


/* NanoCore 1.10, address 0x40072620.
 * REA evidence: ev_62636083ffbecedb14b8a5a215cdfebda8c34077b8d70946d8acb09392f8d818
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40072620(int param_1)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulonglong *puVar26;
  uint uVar27;
  float *pfVar28;
  float *pfVar29;
  int iVar30;
  undefined8 *puVar31;
  int iVar32;
  float *pfVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float *local_1c [4];
  float *pfStack_c;
  undefined8 *puStack_8;
  float *pfStack_4;
  
  uVar27 = (uint)*(ushort *)(param_1 + 0x5220);
  iVar30 = 0;
  do {
    while( true ) {
      local_1c[iVar30] = (float *)(uVar27 * 0x400 + 0x1c18 + param_1);
      iVar32 = iVar30 + 1;
      if (uVar27 != 0) break;
      if (iVar32 == 7) goto LAB_ram_40072662;
      local_1c[iVar32] = (float *)(param_1 + 0x3418);
      iVar30 = iVar30 + 2;
      uVar27 = 5;
      if (iVar30 == 7) goto LAB_ram_40072662;
    }
    uVar27 = uVar27 - 1;
    iVar30 = iVar32;
  } while (iVar32 != 7);
LAB_ram_40072662:
  fVar1 = local_1c[1][1];
  fVar2 = local_1c[0][1];
  fVar3 = local_1c[2][1];
  fVar4 = local_1c[3][1];
  fVar5 = pfStack_c[1];
  uVar35 = *(undefined8 *)((int)puStack_8 + 4);
  fVar6 = pfStack_4[1];
  pfVar33 = (float *)(param_1 + 0x820);
  puVar31 = (undefined8 *)(param_1 + 0x1820);
  puVar26 = (ulonglong *)(param_1 + 0x3c20);
  *(float *)(param_1 + 0x3c18) =
       *pfStack_4 * *(float *)(param_1 + 0x1818) +
       *(float *)(param_1 + 0x1418) * (float)*puStack_8 +
       (float)*(undefined8 *)(param_1 + 0x1018) * *pfStack_c +
       *(float *)(param_1 + 0xc18) * *local_1c[3] +
       *(float *)(param_1 + 0x818) * *local_1c[2] +
       *local_1c[0] * (float)*(undefined8 *)(param_1 + 0x18) +
       *(float *)(param_1 + 0x418) * *local_1c[1];
  *(float *)(param_1 + 0x3c1c) =
       fVar6 * *(float *)(param_1 + 0x181c) +
       *(float *)(param_1 + 0x141c) * (float)uVar35 +
       (float)*(undefined8 *)(param_1 + 0x101c) * fVar5 +
       *(float *)(param_1 + 0xc1c) * fVar4 +
       *(float *)(param_1 + 0x81c) * fVar3 +
       fVar2 * (float)*(undefined8 *)(param_1 + 0x1c) + *(float *)(param_1 + 0x41c) * fVar1;
  pfVar28 = pfStack_4 + 2;
  do {
    fVar1 = pfVar33[-0x1ff];
    fVar2 = local_1c[1][3];
    fVar3 = pfVar33[-0x100];
    fVar4 = pfVar33[-0xff];
    fVar5 = local_1c[0][3];
    fVar6 = pfVar33[-0x200];
    fVar7 = local_1c[2][3];
    fVar8 = *pfVar33;
    fVar9 = pfVar33[1];
    fVar10 = local_1c[0][2];
    fVar11 = local_1c[1][2];
    pfVar29 = pfVar28 + 2;
    fVar12 = pfVar33[0x101];
    fVar13 = local_1c[3][3];
    fVar14 = local_1c[2][2];
    fVar15 = pfVar33[0x100];
    fVar16 = *(float *)((int)puVar31 + -0x7fc);
    fVar17 = pfStack_c[3];
    fVar18 = local_1c[3][2];
    fVar19 = *(float *)(puVar31 + -0x100);
    fVar20 = pfStack_c[2];
    fVar21 = *(float *)(puVar31 + -0x80);
    fVar22 = *(float *)((int)puVar31 + -0x3fc);
    fVar36 = (float)*(undefined8 *)((int)puStack_8 + 0xc);
    fVar23 = pfVar28[1];
    uVar35 = *puVar31;
    fVar24 = *(float *)((int)puVar31 + 4);
    fVar34 = (float)puStack_8[1];
    fVar25 = *pfVar28;
    pfVar33 = pfVar33 + 2;
    *puVar26 = (ulonglong)
               (uint)((fVar10 * fVar6 - fVar5 * fVar1) + (fVar11 * fVar3 - fVar2 * fVar4) +
                      (fVar14 * fVar8 - fVar7 * fVar9) + (fVar18 * fVar15 - fVar13 * fVar12) +
                      (fVar20 * fVar19 - fVar17 * fVar16) + (fVar34 * fVar21 - fVar36 * fVar22) +
                     (fVar25 * (float)uVar35 - fVar23 * fVar24));
    *(ulonglong *)((int)puVar26 + 4) =
         (ulonglong)
         (uint)(fVar10 * fVar1 + fVar5 * fVar6 + fVar11 * fVar4 + fVar2 * fVar3 +
                fVar14 * fVar9 + fVar7 * fVar8 + fVar18 * fVar12 + fVar13 * fVar15 +
                fVar20 * fVar16 + fVar17 * fVar19 + fVar34 * fVar22 + fVar36 * fVar21 +
               fVar25 * fVar24 + fVar23 * (float)uVar35);
    puVar31 = puVar31 + 1;
    puVar26 = puVar26 + 1;
    pfVar28 = pfVar29;
    local_1c[2] = local_1c[2] + 2;
    puStack_8 = puStack_8 + 1;
    pfStack_c = pfStack_c + 2;
    local_1c[3] = local_1c[3] + 2;
    local_1c[1] = local_1c[1] + 2;
    local_1c[0] = local_1c[0] + 2;
  } while (pfStack_4 + 0x100 != pfVar29);
  return;
}


/* NanoCore 1.10, address 0x40072888.
 * REA evidence: ev_4c392cc5a0107ff1e0588e74e713b5efa81c8199223564dc13feb39cf58a8bb8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_ram_40072888(undefined4 param_1)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  float *pfVar19;
  uint *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  uint *puVar24;
  undefined4 uVar25;
  float *pfVar26;
  float *pfVar27;
  uint uVar28;
  int iVar29;
  float *pfVar30;
  float *pfVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined8 uVar48;
  double dVar49;
  undefined8 uVar50;
  double dVar51;
  double dVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  int iStack_ac;
  
  fVar1 = DAT_ram_40098a94;
  fVar40 = DAT_ram_40098a90;
  fVar54 = DAT_ram_40098a8c;
  fVar41 = DAT_ram_40098708;
  fVar53 = DAT_ram_400941ec;
  fVar35 = DAT_ram_40093668;
  fVar34 = DAT_ram_40093100;
  fVar55 = DAT_ram_400930f4;
  _DAT_ram_30080fc4 = DAT_ram_40098288;
  iVar4 = 1;
  pfVar5 = (float *)&DAT_ram_30080fc8;
  do {
    fVar39 = (float)iVar4;
    iVar4 = iVar4 + 1;
    fVar39 = fVar39 * fVar54;
    fVar37 = (float)FUN_ram_40000a08(fVar39 * fVar40);
    fVar38 = (float)FUN_ram_40000786(fVar39 * fVar41);
    fVar39 = (float)FUN_ram_40000a08(fVar39 * fVar1);
    *pfVar5 = fVar39 * fVar55 + fVar38 * fVar35 + fVar37 * fVar53 + fVar34;
    fVar39 = DAT_ram_400980f4;
    pfVar5 = pfVar5 + 1;
  } while (iVar4 != 0x100);
  pfVar26 = (float *)&DAT_ram_300805c0;
  fVar55 = _DAT_ram_30080fc4 + 0.0;
  fVar34 = _DAT_ram_30080fc4 * 0.0;
  pfVar27 = (float *)&DAT_ram_300803bc;
  iVar4 = 0;
  pfVar5 = pfVar26;
  pfVar19 = pfVar27;
  do {
    puVar6 = (undefined8 *)&DAT_ram_30080fc4;
    pfVar30 = (float *)&DAT_ram_30080fc8;
    iVar29 = iVar4;
    fVar53 = -fVar34 + 0.0;
    fVar35 = fVar55;
    do {
      fVar41 = (float)iVar29;
      pfVar31 = pfVar30 + 1;
      iVar29 = iVar29 + iVar4;
      fVar41 = fVar41 * fVar39 * fVar54;
      fVar40 = (float)FUN_ram_40000786(fVar41);
      fVar41 = (float)FUN_ram_40000a08(fVar41);
      fVar35 = *pfVar30 * fVar40 + fVar35;
      fVar53 = -(*pfVar30 * fVar41) + fVar53;
      pfVar30 = pfVar31;
    } while (pfVar31 != (float *)&DAT_ram_300813c4);
    *pfVar5 = fVar35;
    *pfVar19 = fVar53;
    dVar47 = DAT_ram_40098ab0;
    dVar2 = DAT_ram_40098aa8;
    dVar45 = DAT_ram_40098aa0;
    fVar35 = DAT_ram_4009281c;
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar19 = pfVar19 + 1;
  } while (iVar4 != 0x81);
  uVar36 = (ulonglong)(uint)DAT_ram_4009281c;
  iStack_ac = 0;
  uVar28 = 0;
  iVar4 = 0;
  fVar55 = DAT_ram_400985b8;
  while( true ) {
    puVar21 = (undefined4 *)&DAT_ram_30080fc4;
    puVar17 = (undefined4 *)&DAT_ram_30081bcc;
    do {
      uVar7 = puVar21[1];
      uVar8 = puVar21[2];
      uVar11 = puVar21[3];
      *puVar17 = *puVar21;
      puVar17[1] = uVar7;
      puVar17[2] = uVar8;
      puVar17[3] = uVar11;
      puVar21 = puVar21 + 4;
      puVar17 = puVar17 + 4;
    } while (puVar21 != (undefined4 *)&DAT_ram_300813c4);
    if (iVar4 == 0) {
      memset(&DAT_ram_30081fcc,0,0x400);
      FUN_ram_40091946(param_1,&DAT_ram_30081bcc,&DAT_ram_30081fcc,0);
      puVar21 = (undefined4 *)&DAT_ram_30081fcc;
      puVar17 = (undefined4 *)&DAT_ram_300823cc;
      do {
        uVar7 = puVar21[1];
        uVar8 = puVar21[2];
        uVar11 = puVar21[3];
        *puVar17 = *puVar21;
        puVar17[1] = uVar7;
        puVar17[2] = uVar8;
        puVar17[3] = uVar11;
        puVar21 = puVar21 + 4;
        puVar17 = puVar17 + 4;
      } while (puVar21 != (undefined4 *)&DAT_ram_300823cc);
    }
    else {
      FUN_ram_40091946(param_1,&DAT_ram_30081bcc,&DAT_ram_30081bcc,0);
      puVar21 = (undefined4 *)&DAT_ram_30081bcc;
      puVar17 = (undefined4 *)&DAT_ram_300823cc;
      do {
        uVar7 = puVar21[1];
        uVar8 = puVar21[2];
        uVar11 = puVar21[3];
        *puVar17 = *puVar21;
        puVar17[1] = uVar7;
        puVar17[2] = uVar8;
        puVar17[3] = uVar11;
        puVar21 = puVar21 + 4;
        puVar17 = puVar17 + 4;
      } while (puVar21 != (undefined4 *)&DAT_ram_30081fcc);
    }
    uVar3 = 0;
    do {
      memset(&DAT_ram_300827cc,0,0x204);
      memset(&DAT_ram_300817c4,0,0x204);
      if (uVar3 == 2) {
        _DAT_ram_300817c4 = (ulonglong)_DAT_ram_300823d0;
        puVar22 = (undefined8 *)&DAT_ram_300823d4;
        _DAT_ram_300827cc = _DAT_ram_300823cc;
        puVar12 = (undefined8 *)&DAT_ram_300827d0;
        puVar18 = (undefined8 *)&DAT_ram_300817c8;
        do {
          uVar48 = *puVar22;
          uVar50 = *(undefined8 *)((int)puVar22 + 4);
          puVar22 = puVar22 + 1;
          *puVar12 = uVar48;
          *puVar18 = uVar50;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar18 = (undefined8 *)((int)puVar18 + 4);
        } while (puVar22 != (undefined8 *)&DAT_ram_300827cc);
        _DAT_ram_300829cc = _DAT_ram_300827c8;
      }
      else if (uVar3 == 3) {
        puVar21 = (undefined4 *)&DAT_ram_300823cc;
        puVar17 = (undefined4 *)&DAT_ram_300827cc;
        do {
          uVar7 = puVar21[1];
          uVar8 = puVar21[2];
          uVar11 = puVar21[3];
          *puVar17 = *puVar21;
          puVar17[1] = uVar7;
          puVar17[2] = uVar8;
          puVar17[3] = uVar11;
          puVar21 = puVar21 + 4;
          puVar17 = puVar17 + 4;
        } while (puVar21 != (undefined4 *)&DAT_ram_300825cc);
        puVar20 = (uint *)&DAT_ram_300825d0;
        puVar24 = (uint *)&DAT_ram_300817c8;
        *puVar17 = _DAT_ram_300825cc;
        do {
          uVar33 = puVar20[1];
          uVar32 = puVar20[2];
          uVar10 = puVar20[3];
          uVar15 = puVar20[4];
          uVar14 = puVar20[5];
          *puVar24 = *puVar20;
          puVar24[1] = uVar33;
          puVar24[2] = uVar32;
          puVar24[3] = uVar10;
          puVar24[4] = uVar15;
          puVar24[5] = uVar14;
          puVar20 = puVar20 + 6;
          puVar24 = puVar24 + 6;
        } while (puVar20 != (uint *)&DAT_ram_300827c8);
        *puVar24 = _DAT_ram_300827c8;
      }
      else if (uVar3 == 1) {
        puVar22 = (undefined8 *)&DAT_ram_300823cc;
        puVar12 = (undefined8 *)&DAT_ram_300827cc;
        puVar18 = (undefined8 *)&DAT_ram_300817c4;
        do {
          uVar48 = *puVar22;
          uVar50 = *(undefined8 *)((int)puVar22 + 4);
          puVar22 = puVar22 + 1;
          *puVar12 = uVar48;
          *puVar18 = uVar50;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar18 = (undefined8 *)((int)puVar18 + 4);
        } while (puVar22 != (undefined8 *)&DAT_ram_300827cc);
      }
      else {
        puVar22 = (undefined8 *)&DAT_ram_300823d4;
        _DAT_ram_300827cc = _DAT_ram_300823cc;
        _DAT_ram_300829cc = _DAT_ram_300823d0;
        puVar12 = (undefined8 *)&DAT_ram_300827d0;
        puVar18 = (undefined8 *)&DAT_ram_300817c8;
        do {
          uVar48 = *puVar22;
          uVar50 = *(undefined8 *)((int)puVar22 + 4);
          puVar22 = puVar22 + 1;
          *puVar12 = uVar48;
          *puVar18 = uVar50;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar18 = (undefined8 *)((int)puVar18 + 4);
        } while (puVar22 != (undefined8 *)&DAT_ram_300827cc);
      }
      dVar42 = 0.0;
      pfVar5 = pfVar27;
      pfVar19 = pfVar26;
      do {
        uVar48 = *(undefined8 *)pfVar5;
        uVar50 = *(undefined8 *)pfVar19;
        pfVar5 = pfVar5 + 1;
        pfVar19 = pfVar19 + 1;
        dVar51 = (double)(float)uVar50 * (double)(float)uVar50 +
                 (double)(float)uVar48 * (double)(float)uVar48;
        if (dVar42 < dVar51) {
          dVar42 = dVar51;
        }
      } while (pfVar19 != (float *)0x300807c4);
      if (dVar42 <= 0.0) {
        dVar42 = 0.0;
      }
      else {
        dVar42 = dVar42 * dVar45;
      }
      dVar51 = 0.0;
      pfVar9 = (float *)&DAT_ram_300827cc;
      pfVar13 = (float *)&DAT_ram_300817c4;
      dVar43 = 0.0;
      pfVar5 = pfVar9;
      pfVar19 = pfVar27;
      pfVar30 = pfVar26;
      pfVar31 = pfVar13;
      do {
        uVar48 = *(undefined8 *)pfVar19;
        pfVar19 = pfVar19 + 1;
        dVar49 = (double)(float)uVar48;
        dVar52 = (double)(float)*(undefined8 *)pfVar30;
        pfVar30 = pfVar30 + 1;
        if (dVar42 < dVar52 * dVar52 + dVar49 * dVar49) {
          dVar44 = (double)*pfVar31;
          dVar46 = (double)(float)*(undefined8 *)pfVar5;
          dVar43 = dVar43 + dVar52 * dVar46 + dVar49 * dVar44;
          dVar51 = dVar51 + dVar46 * dVar46 + dVar44 * dVar44;
        }
        pfVar5 = pfVar5 + 1;
        pfVar31 = pfVar31 + 1;
      } while (pfVar30 != (float *)0x300807c4);
      fVar34 = fVar35;
      if (dVar2 < dVar51) {
        fVar34 = (float)(dVar43 / dVar51);
      }
      dVar43 = 0.0;
      dVar51 = 0.0;
      pfVar5 = pfVar27;
      pfVar19 = pfVar26;
      do {
        uVar48 = *(undefined8 *)pfVar5;
        pfVar5 = pfVar5 + 1;
        dVar52 = (double)(float)uVar48;
        dVar44 = (double)(float)*(undefined8 *)pfVar19;
        pfVar19 = pfVar19 + 1;
        dVar49 = dVar44 * dVar44 + dVar52 * dVar52;
        if (dVar42 < dVar49) {
          dVar43 = dVar43 + dVar49;
          dVar52 = -((double)fVar34 * (double)(float)*(undefined8 *)pfVar13) + dVar52;
          dVar44 = -((double)fVar34 * (double)*pfVar9) + dVar44;
          dVar51 = dVar51 + dVar44 * dVar44 + dVar52 * dVar52;
        }
        pfVar9 = pfVar9 + 1;
        pfVar13 = pfVar13 + 1;
      } while (pfVar19 != (float *)0x300807c4);
      fVar53 = 0.0;
      if (dVar47 < dVar43 != 0) {
        if ((dVar47 < dVar43) < 0x100 && dVar51 / dVar43 < 0.0) {
          dVar42 = (double)FUN_ram_40000bc0();
          fVar53 = (float)dVar42;
        }
        else {
          fVar53 = (float)SQRT(dVar51 / dVar43);
        }
      }
      if (fVar53 < fVar55) {
        uVar36 = (ulonglong)(uint)fVar34;
        uVar28 = uVar3;
        fVar55 = fVar53;
        iStack_ac = iVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 4);
    if (iVar4 != 0) break;
    iVar4 = 1;
  }
  if ((float)uVar36 == 0.0) {
    uVar36 = (ulonglong)(uint)fVar35;
  }
  pfVar30 = (float *)&DAT_ram_300829d0;
  pfVar31 = (float *)&DAT_ram_300819c8;
  pfVar5 = pfVar31;
  pfVar19 = pfVar30;
  do {
    fVar55 = *pfVar26;
    fVar34 = *pfVar27;
    pfVar26 = pfVar26 + 1;
    pfVar27 = pfVar27 + 1;
    *pfVar19 = fVar55 / (float)uVar36;
    *pfVar5 = fVar34 / (float)uVar36;
    pfVar5 = pfVar5 + 1;
    pfVar19 = pfVar19 + 1;
  } while (pfVar26 != (float *)0x300807c4);
  memset(&DAT_ram_300823cc,0,0x400);
  if (uVar28 == 2) {
    puVar12 = (undefined8 *)&DAT_ram_300829d4;
    _DAT_ram_300823d0 = (uint)_DAT_ram_300819c8;
    _DAT_ram_300823cc = _DAT_ram_300829d0;
    puVar18 = (undefined8 *)&DAT_ram_300819cc;
    puVar17 = (undefined4 *)&DAT_ram_300823d4;
    do {
      uVar48 = *puVar18;
      puVar21 = puVar17 + 2;
      *puVar17 = (int)*puVar12;
      puVar17[1] = (int)uVar48;
      puVar12 = (undefined8 *)((int)puVar12 + 4);
      puVar18 = (undefined8 *)((int)puVar18 + 4);
      puVar17 = puVar21;
    } while (puVar21 != (undefined4 *)&DAT_ram_300827cc);
    _DAT_ram_300827c8 = _DAT_ram_30082bd0;
  }
  else if (uVar28 < 3) {
    if (uVar28 == 0) {
      puVar12 = (undefined8 *)&DAT_ram_300829d4;
      _DAT_ram_300823cc = _DAT_ram_300829d0;
      _DAT_ram_300823d0 = _DAT_ram_30082bd0;
      puVar18 = (undefined8 *)&DAT_ram_300819cc;
      puVar17 = (undefined4 *)&DAT_ram_300823d4;
      do {
        uVar48 = *puVar18;
        puVar21 = puVar17 + 2;
        *puVar17 = (int)*puVar12;
        puVar17[1] = (int)uVar48;
        puVar12 = (undefined8 *)((int)puVar12 + 4);
        puVar18 = (undefined8 *)((int)puVar18 + 4);
        puVar17 = puVar21;
      } while (puVar21 != (undefined4 *)&DAT_ram_300827cc);
    }
    else {
      puVar23 = (ulonglong *)&DAT_ram_300823cc;
      if (uVar28 == 1) {
        do {
          fVar55 = *pfVar30;
          fVar34 = *pfVar31;
          pfVar30 = pfVar30 + 1;
          *puVar23 = (ulonglong)(uint)fVar55;
          *(ulonglong *)((int)puVar23 + 4) = (ulonglong)(uint)fVar34;
          pfVar31 = pfVar31 + 1;
          puVar23 = puVar23 + 1;
        } while (pfVar30 != (float *)&DAT_ram_30082bd0);
      }
    }
  }
  else if (uVar28 == 3) {
    puVar24 = (uint *)&DAT_ram_300829d0;
    puVar20 = (uint *)&DAT_ram_300823cc;
    do {
      uVar3 = puVar24[1];
      uVar10 = puVar24[2];
      uVar15 = puVar24[3];
      *puVar20 = *puVar24;
      puVar20[1] = uVar3;
      puVar20[2] = uVar10;
      puVar20[3] = uVar15;
      puVar24 = puVar24 + 4;
      puVar20 = puVar20 + 4;
    } while (puVar24 != (uint *)&DAT_ram_30082bd0);
    puVar17 = (undefined4 *)&DAT_ram_300825d0;
    puVar21 = (undefined4 *)&DAT_ram_300819cc;
    *puVar20 = _DAT_ram_30082bd0;
    do {
      uVar7 = puVar21[1];
      uVar25 = puVar21[2];
      uVar8 = puVar21[3];
      uVar11 = puVar21[4];
      uVar16 = puVar21[5];
      *puVar17 = *puVar21;
      puVar17[1] = uVar7;
      puVar17[2] = uVar25;
      puVar17[3] = uVar8;
      puVar17[4] = uVar11;
      puVar17[5] = uVar16;
      puVar21 = puVar21 + 6;
      puVar17 = puVar17 + 6;
    } while (puVar21 != &uRam30081bc4);
    *puVar17 = uRam30081bc4;
  }
  puVar21 = (undefined4 *)&DAT_ram_300823cc;
  puVar17 = (undefined4 *)&DAT_ram_30081bcc;
  do {
    uVar7 = puVar21[1];
    uVar8 = puVar21[2];
    uVar11 = puVar21[3];
    *puVar17 = *puVar21;
    puVar17[1] = uVar7;
    puVar17[2] = uVar8;
    puVar17[3] = uVar11;
    puVar21 = puVar21 + 4;
    puVar17 = puVar17 + 4;
  } while (puVar21 != (undefined4 *)&DAT_ram_300827cc);
  if (iStack_ac == 1) {
    FUN_ram_40091946(param_1,&DAT_ram_30081bcc,&DAT_ram_30081bcc,1);
    puVar21 = (undefined4 *)&DAT_ram_30081bcc;
    puVar17 = (undefined4 *)&DAT_ram_30081fcc;
    do {
      uVar7 = puVar21[1];
      uVar8 = puVar21[2];
      uVar11 = puVar21[3];
      *puVar17 = *puVar21;
      puVar17[1] = uVar7;
      puVar17[2] = uVar8;
      puVar17[3] = uVar11;
      puVar21 = puVar21 + 4;
      puVar17 = puVar17 + 4;
    } while (puVar21 != (undefined4 *)&DAT_ram_30081fcc);
  }
  else {
    memset(&DAT_ram_30081fcc,0,0x400);
    FUN_ram_40091946(param_1,&DAT_ram_30081bcc,&DAT_ram_30081fcc,1);
  }
  dVar45 = 0.0;
  puVar12 = (undefined8 *)&DAT_ram_30081fcc;
  dVar47 = 0.0;
  do {
    uVar48 = *puVar6;
    puVar6 = (undefined8 *)((int)puVar6 + 4);
    dVar42 = (double)(float)*puVar12;
    puVar12 = (undefined8 *)((int)puVar12 + 4);
    dVar45 = dVar42 * dVar42 + dVar45;
    dVar47 = (double)(float)uVar48 * dVar42 + dVar47;
  } while (puVar6 != (undefined8 *)&DAT_ram_300813c4);
  if (dVar2 < dVar45) {
    fVar54 = (float)(dVar47 / dVar45);
  }
  FUN_ram_400002f4();
  *(uint *)(gp + -0x1c) = uVar28;
  *(int *)(gp + -0x18) = iStack_ac;
  *(undefined1 *)(gp + -0x20) = 1;
  *(ulonglong *)(gp + -0x14) = uVar36;
  *(float *)(gp + -0x10) = fVar54;
  DAT_ram_3007fbb0 = 0;
  FUN_ram_400002fa();
  return;
}


