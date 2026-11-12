/* NanoCore 1.12 analysis module: unresolved/bank_4/block_400a1000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400a1540.
 * REA evidence: ev_dbfd0f7276f6724d54cb938a8205d182a5a3660f95ecb081ed5908fbe340fb06
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400a1540(undefined4 *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = param_3;
  puVar5 = param_2;
  puVar2 = param_1;
  if (7 < param_3) {
    do {
      uVar1 = *(undefined4 *)((int)puVar5 + 4);
      uVar7 = puVar5[1];
      uVar8 = *(undefined8 *)((int)puVar5 + 0xc);
      uVar9 = puVar5[2];
      uVar10 = *(undefined8 *)((int)puVar5 + 0x14);
      uVar11 = puVar5[3];
      uVar12 = *(undefined8 *)((int)puVar5 + 0x1c);
      uVar4 = uVar4 - 8;
      *puVar2 = *(undefined4 *)puVar5;
      puVar2[1] = uVar1;
      *(undefined8 *)(puVar2 + 2) = uVar7;
      *(undefined8 *)(puVar2 + 3) = uVar8;
      *(undefined8 *)(puVar2 + 4) = uVar9;
      *(undefined8 *)(puVar2 + 5) = uVar10;
      *(undefined8 *)(puVar2 + 6) = uVar11;
      *(undefined8 *)(puVar2 + 7) = uVar12;
      puVar5 = puVar5 + 4;
      puVar2 = puVar2 + 8;
    } while (7 < uVar4);
    iVar6 = (param_3 - 8 >> 3) + 1;
    param_1 = param_1 + iVar6 * 8;
    param_2 = param_2 + iVar6 * 4;
    param_3 = param_3 & 7;
  }
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      uVar7 = *param_2;
      puVar3 = puVar2 + 1;
      param_2 = (undefined8 *)((int)param_2 + 4);
      *puVar2 = (int)uVar7;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + param_3);
  }
  return;
}


/* NanoCore 1.12, address 0x400a15ac.
 * REA evidence: ev_f7ed9cc803b2df77ba33e345f4763dd6ac8b0d83f02458dcf5be3ef40f933496
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400a15ac(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = param_2;
  puVar3 = param_1;
  puVar5 = param_3;
  uVar6 = param_4;
  if (3 < param_4) {
    do {
      uVar1 = *(undefined4 *)((int)puVar2 + 4);
      uVar7 = puVar2[1];
      uVar8 = *(undefined8 *)((int)puVar2 + 0xc);
      uVar9 = *puVar3;
      uVar10 = *(undefined8 *)((int)puVar3 + 4);
      uVar11 = puVar3[1];
      uVar12 = *(undefined8 *)((int)puVar3 + 0xc);
      *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
      *(undefined4 *)((int)puVar3 + 4) = uVar1;
      puVar3[1] = uVar7;
      *(undefined8 *)((int)puVar3 + 0xc) = uVar8;
      *puVar5 = (int)uVar9;
      puVar5[1] = (int)uVar10;
      puVar5[2] = (int)uVar11;
      puVar5[3] = (int)uVar12;
      uVar6 = uVar6 - 4;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 4;
    } while (3 < uVar6);
    iVar4 = (param_4 - 4 >> 2) + 1;
    param_1 = param_1 + iVar4 * 2;
    param_2 = param_2 + iVar4 * 2;
    param_3 = param_3 + iVar4 * 4;
    param_4 = param_4 & 3;
  }
  if (param_4 != 0) {
    puVar2 = param_1;
    do {
      uVar7 = *puVar2;
      puVar3 = (undefined8 *)((int)puVar2 + 4);
      *(int *)puVar2 = (int)*param_2;
      *param_3 = (int)uVar7;
      param_2 = (undefined8 *)((int)param_2 + 4);
      puVar2 = puVar3;
      param_3 = param_3 + 1;
    } while (puVar3 != (undefined8 *)((int)param_1 + param_4 * 4));
  }
  return;
}


/* NanoCore 1.12, address 0x400a1628.
 * REA evidence: ev_2c3c1753f10fe3b3c843ce91173513f957dfb6e28d30706785537d8bf75f8509
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400a1628(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_2 - param_3;
  if (param_5 < (uint)(param_2 - param_3)) {
    uVar1 = param_5;
  }
  FUN_ram_400a1540(param_4,param_1 + param_3 * 4,uVar1);
  if (param_5 <= uVar1) {
    return;
  }
  FUN_ram_400a1540(param_4 + uVar1 * 4,param_1,param_5 - uVar1);
  return;
}


/* NanoCore 1.12, address 0x400a1704.
 * REA evidence: ev_336a79653b29bb8314f5b0b5d9020e53020b8433ce75e84fb18d01b6c32b8182
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400a1704(int param_1,uint param_2,ushort *param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*param_3;
  uVar2 = param_2 - uVar1;
  if (param_6 < param_2 - uVar1) {
    uVar2 = param_6;
  }
  FUN_ram_400a15ac(param_1 + uVar1 * 4,param_4,param_5,uVar2);
  if (uVar2 < param_6) {
    FUN_ram_400a15ac(param_1,uVar2 * 4 + param_4,param_5 + uVar2 * 4,param_6 - uVar2);
  }
  uVar1 = uVar1 + param_6;
  if (param_2 <= uVar1) {
    uVar1 = uVar1 - param_2;
  }
  *param_3 = (ushort)uVar1;
  return;
}


/* NanoCore 1.12, address 0x400a17d8.
 * REA evidence: ev_9d02d85760863cd21da6c5e015b6b4590cf66cd91546e012aa59fa3b4e6223f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400a17d8(float *param_1,float *param_2,float *param_3,float *param_4,int param_5)

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
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = param_1[4];
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[4];
  uVar19 = *(ulonglong *)(param_1 + 5);
  fVar16 = param_1[6];
  uVar20 = *(ulonglong *)(param_2 + 5);
  fVar15 = param_2[6];
  if (param_5 != 0) {
    pfVar13 = param_3;
    do {
      pfVar14 = pfVar13 + 1;
      fVar17 = (float)*(undefined8 *)pfVar13;
      fVar11 = fVar1 * fVar17 + (float)uVar19;
      fVar18 = (float)*(undefined8 *)param_4;
      fVar12 = fVar6 * fVar18 + (float)uVar20;
      *pfVar13 = fVar11;
      *param_4 = fVar12;
      uVar19 = (ulonglong)(uint)((fVar2 * fVar17 - fVar4 * fVar11) + fVar16);
      uVar20 = (ulonglong)(uint)((fVar7 * fVar18 - fVar9 * fVar12) + fVar15);
      fVar16 = fVar3 * fVar17 - fVar5 * fVar11;
      fVar15 = fVar8 * fVar18 - fVar10 * fVar12;
      pfVar13 = pfVar14;
      param_4 = param_4 + 1;
    } while (param_3 + param_5 != pfVar14);
  }
  *(ulonglong *)(param_1 + 5) = uVar19;
  param_1[6] = fVar16;
  *(ulonglong *)(param_2 + 5) = uVar20;
  param_2[6] = fVar15;
  return;
}


/* NanoCore 1.12, address 0x400a1868.
 * REA evidence: ev_aebf1c8c6ff0b3088e55509770bfb94e174d43bdb9d46c8da1a7f02bd4fd90d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400a1868(undefined8 *param_1,int param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  
  if (param_4 < 4) {
    uVar9 = 0;
  }
  else {
    puVar5 = (undefined8 *)(param_2 + -0x40);
    pfVar6 = param_3;
    do {
      fVar18 = 0.0;
      fVar20 = *(float *)(puVar5 + 9);
      fVar16 = 0.0;
      fVar12 = 0.0;
      fVar17 = 0.0;
      fVar11 = 0.0;
      fVar14 = 0.0;
      puVar7 = param_1;
      puVar10 = puVar5 + 8;
      fVar27 = *(float *)((int)puVar5 + 0x4c);
      fVar15 = fVar17;
      fVar13 = fVar17;
      do {
        puVar8 = puVar10;
        fVar2 = *(float *)((int)puVar8 + -4);
        fVar21 = (float)*puVar8;
        fVar23 = (float)*puVar7;
        fVar3 = fVar23 * fVar20;
        fVar22 = (float)*(undefined8 *)((int)puVar8 + 4);
        fVar26 = (float)*(undefined8 *)((int)puVar7 + 4);
        fVar4 = fVar26 * fVar20;
        fVar20 = *(float *)(puVar8 + -1);
        puVar10 = puVar8 + -2;
        fVar24 = (float)puVar7[1];
        fVar14 = fVar24 * fVar20 + fVar23 * fVar21 + fVar14;
        fVar13 = fVar24 * fVar2 + fVar23 * fVar22 + fVar13;
        fVar15 = fVar24 * fVar21 + fVar3 + fVar15;
        fVar17 = fVar24 * fVar22 + fVar23 * fVar27 + fVar17;
        fVar27 = (float)*(undefined8 *)((int)puVar7 + 0xc);
        fVar11 = fVar27 * *(float *)((int)puVar8 + -0xc) + fVar26 * fVar2 + fVar11;
        fVar16 = fVar27 * fVar20 + fVar26 * fVar21 + fVar16;
        fVar12 = fVar27 * fVar2 + fVar26 * fVar22 + fVar12;
        fVar18 = fVar27 * fVar21 + fVar4 + fVar18;
        puVar7 = puVar7 + 2;
        fVar27 = fVar2;
      } while (puVar10 != puVar5);
      uVar19 = *puVar10;
      uVar25 = *(undefined8 *)((int)puVar8 + -0xc);
      fVar27 = (float)param_1[8];
      pfVar6[2] = fVar12 + fVar20 * fVar27 + fVar15;
      *pfVar6 = fVar11 + fVar27 * (float)uVar19 + fVar14;
      pfVar6[1] = fVar16 + fVar27 * (float)uVar25 + fVar13;
      pfVar6[3] = fVar18 + fVar2 * fVar27 + fVar17;
      puVar5 = puVar8;
      pfVar6 = pfVar6 + 4;
    } while ((undefined8 *)(param_2 + -0x30 + (param_4 - 4 >> 2) * 0x10) != puVar8);
    uVar9 = (param_4 - 4 & 0xfffffffc) + 4;
  }
  if (uVar9 < param_4) {
    puVar5 = (undefined8 *)(param_2 + uVar9 * 4 + -0x40);
    pfVar6 = param_3 + uVar9;
    do {
      fVar14 = 0.0;
      puVar10 = puVar5 + 8;
      fVar20 = 0.0;
      puVar7 = param_1;
      do {
        uVar19 = *puVar10;
        pfVar1 = (float *)((int)puVar10 + -4);
        puVar10 = puVar10 + -1;
        fVar20 = (float)*puVar7 * (float)uVar19 + fVar20;
        fVar14 = (float)*(undefined8 *)((int)puVar7 + 4) * *pfVar1 + fVar14;
        puVar7 = puVar7 + 1;
      } while (puVar5 != puVar10);
      uVar19 = *puVar5;
      puVar5 = (undefined8 *)((int)puVar5 + 4);
      *pfVar6 = fVar14 + (float)param_1[8] * (float)uVar19 + fVar20;
      pfVar6 = pfVar6 + 1;
    } while ((undefined8 *)(param_2 + -0x40 + param_4 * 4) != puVar5);
  }
  return;
}


/* NanoCore 1.12, address 0x400a19cc.
 * REA evidence: ev_5f4d8797167794b6385fcc1a1a5d48468a8b792f83e8c55422ea1c2b4d588350
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400a19cc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  FUN_ram_400a1868(&DAT_ram_400a3884,param_1 + 0x5e5c,param_2);
  FUN_ram_400a1868(&DAT_ram_400a38c8,param_1 + 0x5f1c,param_3,param_4);
  iVar2 = param_1 + 0x5f9c;
  do {
    iVar5 = iVar2 + 0x1c;
    FUN_ram_400a17d8(iVar2,iVar2 + 0x70,param_2,param_3,param_4);
    iVar2 = iVar5;
  } while (iVar5 != param_1 + 0x600c);
  iVar2 = (param_4 + 0x1787) * 4;
  puVar1 = (undefined4 *)(param_1 + 0x5e1c);
  puVar3 = (undefined8 *)(iVar2 + param_1);
  do {
    puVar4 = (undefined8 *)((int)puVar3 + 4);
    *puVar1 = (int)*puVar3;
    puVar1[0x30] = *(undefined4 *)(puVar3 + 0x18);
    puVar1 = puVar1 + 1;
    puVar3 = puVar4;
  } while (puVar4 != (undefined8 *)(iVar2 + 0x40 + param_1));
  return;
}


/* NanoCore 1.12, address 0x400a1ba4.
 * REA evidence: ev_24e545fe246de98c0efd45725c3a07f9e387134ca633aaff129afb88435e9cc6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400a1ba4(float param_1,float *param_2,ulonglong *param_3,uint param_4,float *param_5)

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
  uint uVar13;
  float *pfVar14;
  ulonglong *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
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
  
  fVar31 = *param_5;
  uVar17 = *(ulonglong *)(param_5 + 1);
  fVar29 = param_5[2];
  fVar30 = param_5[3];
  fVar33 = param_5[4];
  fVar28 = param_5[5];
  fVar24 = param_5[6];
  fVar32 = param_5[7];
  fVar27 = param_5[8];
  fVar25 = param_5[9];
  uVar18 = *(ulonglong *)(param_5 + 10);
  fVar26 = param_5[0xb];
  uVar23 = *(ulonglong *)(param_5 + 0xc);
  uVar22 = *(ulonglong *)(param_5 + 0xd);
  uVar21 = *(ulonglong *)(param_5 + 0xe);
  if (param_4 < 3) {
    uVar16 = 0;
  }
  else {
    pfVar14 = param_2;
    puVar15 = param_3;
    uVar13 = 3;
    do {
      uVar16 = uVar13;
      fVar1 = param_1 * *pfVar14 + fVar31;
      fVar2 = param_1 * pfVar14[1] + (float)uVar17;
      fVar3 = param_1 * (float)*(undefined8 *)(pfVar14 + 2) + fVar29;
      fVar4 = param_1 * fVar1 + fVar30;
      fVar5 = param_1 * fVar2 + fVar33;
      fVar6 = param_1 * fVar3 + fVar28;
      fVar31 = -(param_1 * fVar1) + *pfVar14;
      uVar17 = (ulonglong)(uint)(-(param_1 * fVar2) + pfVar14[1]);
      fVar7 = param_1 * fVar4 + fVar24;
      fVar8 = param_1 * fVar5 + fVar32;
      fVar9 = param_1 * fVar6 + fVar27;
      fVar29 = -(param_1 * fVar3) + (float)*(undefined8 *)(pfVar14 + 2);
      fVar30 = -(param_1 * fVar4) + fVar1;
      fVar1 = param_1 * fVar7 + fVar25;
      fVar10 = param_1 * fVar8 + (float)uVar18;
      fVar11 = param_1 * fVar9 + fVar26;
      fVar33 = -(param_1 * fVar5) + fVar2;
      fVar28 = -(param_1 * fVar6) + fVar3;
      fVar2 = param_1 * fVar1 + (float)uVar23;
      fVar3 = param_1 * fVar10 + (float)uVar22;
      fVar12 = param_1 * fVar11 + (float)uVar21;
      fVar24 = -(param_1 * fVar7) + fVar4;
      fVar32 = -(param_1 * fVar8) + fVar5;
      *puVar15 = (ulonglong)(uint)fVar2;
      *(ulonglong *)((int)puVar15 + 4) = (ulonglong)(uint)fVar3;
      puVar15[1] = (ulonglong)(uint)fVar12;
      fVar27 = -(param_1 * fVar9) + fVar6;
      fVar25 = -(param_1 * fVar1) + fVar7;
      uVar18 = (ulonglong)(uint)(-(param_1 * fVar10) + fVar8);
      fVar26 = -(param_1 * fVar11) + fVar9;
      uVar23 = (ulonglong)(uint)(-(param_1 * fVar2) + fVar1);
      uVar22 = (ulonglong)(uint)(-(param_1 * fVar3) + fVar10);
      uVar21 = (ulonglong)(uint)(-(param_1 * fVar12) + fVar11);
      pfVar14 = pfVar14 + 3;
      puVar15 = (ulonglong *)((int)puVar15 + 0xc);
      uVar13 = uVar16 + 3;
    } while (uVar16 + 3 <= param_4);
    param_4 = param_4 - uVar16;
  }
  if (param_4 == 0) {
    *param_5 = fVar31;
    *(ulonglong *)(param_5 + 1) = uVar17;
    param_5[2] = fVar29;
    param_5[3] = fVar30;
    param_5[4] = fVar33;
    param_5[5] = fVar28;
    param_5[6] = fVar24;
    param_5[7] = fVar32;
    param_5[8] = fVar27;
    param_5[9] = fVar25;
    *(ulonglong *)(param_5 + 10) = uVar18;
    param_5[0xb] = fVar26;
    *(ulonglong *)(param_5 + 0xc) = uVar23;
    *(ulonglong *)(param_5 + 0xd) = uVar22;
    *(ulonglong *)(param_5 + 0xe) = uVar21;
  }
  else {
    fVar31 = (float)*(undefined8 *)(param_2 + uVar16) * param_1 + fVar31;
    fVar30 = param_1 * fVar31 + fVar30;
    uVar20 = (ulonglong)(uint)(-(param_1 * fVar31) + (float)*(undefined8 *)(param_2 + uVar16));
    fVar24 = param_1 * fVar30 + fVar24;
    fVar31 = -(param_1 * fVar30) + fVar31;
    fVar25 = param_1 * fVar24 + fVar25;
    fVar30 = -(param_1 * fVar24) + fVar30;
    fVar1 = param_1 * fVar25 + (float)uVar23;
    fVar24 = -(param_1 * fVar25) + fVar24;
    *(ulonglong *)((int)param_3 + uVar16 * 4) = (ulonglong)(uint)fVar1;
    uVar23 = (ulonglong)(uint)(-(param_1 * fVar1) + fVar25);
    if (param_4 == 1) {
      *(ulonglong *)param_5 = uVar17;
      param_5[1] = fVar29;
      *(ulonglong *)(param_5 + 2) = uVar20;
      param_5[3] = fVar33;
      param_5[4] = fVar28;
      param_5[5] = fVar31;
      param_5[6] = fVar32;
      param_5[7] = fVar27;
      param_5[8] = fVar30;
      *(ulonglong *)(param_5 + 9) = uVar18;
      param_5[10] = fVar26;
      param_5[0xb] = fVar24;
      *(ulonglong *)(param_5 + 0xc) = uVar22;
      *(ulonglong *)(param_5 + 0xd) = uVar21;
      *(ulonglong *)(param_5 + 0xe) = uVar23;
    }
    else {
      uVar19 = *(undefined8 *)(param_2 + uVar16 + 1);
      fVar25 = param_1 * (float)uVar19 + (float)uVar17;
      fVar33 = param_1 * fVar25 + fVar33;
      fVar32 = param_1 * fVar33 + fVar32;
      fVar1 = param_1 * fVar32 + (float)uVar18;
      fVar2 = param_1 * fVar1 + (float)uVar22;
      *(float *)(uVar16 * 4 + 4 + (int)param_3) = fVar2;
      *param_5 = fVar29;
      *(ulonglong *)(param_5 + 1) = uVar20;
      *(ulonglong *)(param_5 + 2) = (ulonglong)(uint)(-(param_1 * fVar25) + (float)uVar19);
      param_5[3] = fVar28;
      param_5[4] = fVar31;
      *(ulonglong *)(param_5 + 5) = (ulonglong)(uint)(-(param_1 * fVar33) + fVar25);
      param_5[6] = fVar27;
      param_5[7] = fVar30;
      param_5[8] = -(param_1 * fVar32) + fVar33;
      param_5[9] = fVar26;
      param_5[10] = fVar24;
      param_5[0xb] = -(param_1 * fVar1) + fVar32;
      *(ulonglong *)(param_5 + 0xc) = uVar21;
      *(ulonglong *)(param_5 + 0xd) = uVar23;
      *(ulonglong *)(param_5 + 0xe) = (ulonglong)(uint)(-(param_1 * fVar2) + fVar1);
    }
  }
  return;
}


