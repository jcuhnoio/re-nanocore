/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40074000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40074716.
 * REA evidence: ev_c1c673d8b26ecdc96fbf0eba361d730af9f17c1e2f48300cd5a33a0f8fdccdfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40074716(float param_1,ulonglong *param_2)

{
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  memset(param_2,0,0x300c);
  if (DAT_ram_40094e80 < param_1) {
    *param_2 = (ulonglong)(uint)param_1;
    return;
  }
  *param_2 = (ulonglong)DAT_ram_40099f80;
  return;
}


/* NanoCore 1.11, address 0x40074760.
 * REA evidence: ev_114fc4a5428b261f5b91f033193d8fc7a3c9bf8c383b8da42e74a97387be85ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40074760(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    memset(param_1 + 0xc,0,0x3000);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40074776.
 * REA evidence: ev_71e9443b5c0919e7707365d009f72d23e5569c8b6a130c45e83530534ede77ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40074776(ulonglong *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    *param_1 = (ulonglong)DAT_ram_4009a928;
    if (param_2 == 1) {
      uVar1 = 1;
    }
    else {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009558c;
      if (param_2 == 2) {
        uVar1 = 2;
      }
      else {
        param_1[1] = (ulonglong)DAT_ram_4009605c;
        if (param_2 == 3) {
          uVar1 = 3;
        }
        else {
          *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40099fb8;
          if (param_2 - 1 < 4) {
            uVar1 = 4;
          }
          else {
            uVar1 = 5;
            param_1[2] = (ulonglong)DAT_ram_40094604;
          }
        }
      }
    }
    if (uVar1 < param_2) {
      memset((int)param_1 + uVar1 * 4,0,(param_2 - uVar1) * 4);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40074d60.
 * REA evidence: ev_7c2bc27a159ff86385705196c03757d5d3132235f3346c66ab445fac83bd575c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40074d60(int param_1)

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
      if (iVar32 == 7) goto LAB_ram_40074da2;
      local_1c[iVar32] = (float *)(param_1 + 0x3418);
      iVar30 = iVar30 + 2;
      uVar27 = 5;
      if (iVar30 == 7) goto LAB_ram_40074da2;
    }
    uVar27 = uVar27 - 1;
    iVar30 = iVar32;
  } while (iVar32 != 7);
LAB_ram_40074da2:
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


/* NanoCore 1.11, address 0x40074fc8.
 * REA evidence: ev_334169d45e6f7d12348ffb972866be062f28ccd99db765129e222440ea342d12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_ram_40074fc8(undefined4 param_1)

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
  
  fVar1 = DAT_ram_4009a960;
  fVar40 = DAT_ram_4009a95c;
  fVar54 = DAT_ram_4009a958;
  fVar41 = DAT_ram_4009a62c;
  fVar53 = DAT_ram_40096018;
  fVar35 = DAT_ram_40095454;
  fVar34 = DAT_ram_40094eec;
  fVar55 = DAT_ram_40094ee0;
  _DAT_ram_30082344 = DAT_ram_4009a110;
  iVar4 = 1;
  pfVar5 = (float *)&DAT_ram_30082348;
  do {
    fVar39 = (float)iVar4;
    iVar4 = iVar4 + 1;
    fVar39 = fVar39 * fVar54;
    fVar37 = (float)FUN_ram_400009d2(fVar39 * fVar40);
    fVar38 = (float)FUN_ram_40000712(fVar39 * fVar41);
    fVar39 = (float)FUN_ram_400009d2(fVar39 * fVar1);
    *pfVar5 = fVar39 * fVar55 + fVar38 * fVar35 + fVar37 * fVar53 + fVar34;
    fVar39 = DAT_ram_40099f94;
    pfVar5 = pfVar5 + 1;
  } while (iVar4 != 0x100);
  pfVar26 = (float *)&DAT_ram_30081940;
  fVar55 = _DAT_ram_30082344 + 0.0;
  fVar34 = _DAT_ram_30082344 * 0.0;
  pfVar27 = (float *)&DAT_ram_3008173c;
  iVar4 = 0;
  pfVar5 = pfVar26;
  pfVar19 = pfVar27;
  do {
    puVar6 = (undefined8 *)&DAT_ram_30082344;
    pfVar30 = (float *)&DAT_ram_30082348;
    iVar29 = iVar4;
    fVar53 = -fVar34 + 0.0;
    fVar35 = fVar55;
    do {
      fVar41 = (float)iVar29;
      pfVar31 = pfVar30 + 1;
      iVar29 = iVar29 + iVar4;
      fVar41 = fVar41 * fVar39 * fVar54;
      fVar40 = (float)FUN_ram_40000712(fVar41);
      fVar41 = (float)FUN_ram_400009d2(fVar41);
      fVar35 = *pfVar30 * fVar40 + fVar35;
      fVar53 = -(*pfVar30 * fVar41) + fVar53;
      pfVar30 = pfVar31;
    } while (pfVar31 != (float *)&DAT_ram_30082744);
    *pfVar5 = fVar35;
    *pfVar19 = fVar53;
    dVar47 = DAT_ram_4009a980;
    dVar2 = DAT_ram_4009a978;
    dVar45 = DAT_ram_4009a970;
    fVar35 = DAT_ram_40094604;
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar19 = pfVar19 + 1;
  } while (iVar4 != 0x81);
  uVar36 = (ulonglong)(uint)DAT_ram_40094604;
  iStack_ac = 0;
  uVar28 = 0;
  iVar4 = 0;
  fVar55 = DAT_ram_4009a954;
  while( true ) {
    puVar21 = (undefined4 *)&DAT_ram_30082344;
    puVar17 = (undefined4 *)&DAT_ram_30082f4c;
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
    } while (puVar21 != (undefined4 *)&DAT_ram_30082744);
    if (iVar4 == 0) {
      memset(&DAT_ram_3008334c,0,0x400);
      FUN_ram_300410e6(param_1,&DAT_ram_30082f4c,&DAT_ram_3008334c,0);
      puVar21 = (undefined4 *)&DAT_ram_3008334c;
      puVar17 = (undefined4 *)&DAT_ram_3008374c;
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
      } while (puVar21 != (undefined4 *)&DAT_ram_3008374c);
    }
    else {
      FUN_ram_300410e6(param_1,&DAT_ram_30082f4c,&DAT_ram_30082f4c,0);
      puVar21 = (undefined4 *)&DAT_ram_30082f4c;
      puVar17 = (undefined4 *)&DAT_ram_3008374c;
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
      } while (puVar21 != (undefined4 *)&DAT_ram_3008334c);
    }
    uVar3 = 0;
    do {
      memset(&DAT_ram_30083b4c,0,0x204);
      memset(&DAT_ram_30082b44,0,0x204);
      if (uVar3 == 2) {
        _DAT_ram_30082b44 = (ulonglong)_DAT_ram_30083750;
        puVar22 = (undefined8 *)&DAT_ram_30083754;
        _DAT_ram_30083b4c = _DAT_ram_3008374c;
        puVar12 = (undefined8 *)&DAT_ram_30083b50;
        puVar18 = (undefined8 *)&DAT_ram_30082b48;
        do {
          uVar48 = *puVar22;
          uVar50 = *(undefined8 *)((int)puVar22 + 4);
          puVar22 = puVar22 + 1;
          *puVar12 = uVar48;
          *puVar18 = uVar50;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar18 = (undefined8 *)((int)puVar18 + 4);
        } while (puVar22 != (undefined8 *)&DAT_ram_30083b4c);
        _DAT_ram_30083d4c = _DAT_ram_30083b48;
      }
      else if (uVar3 == 3) {
        puVar21 = (undefined4 *)&DAT_ram_3008374c;
        puVar17 = (undefined4 *)&DAT_ram_30083b4c;
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
        } while (puVar21 != (undefined4 *)&DAT_ram_3008394c);
        puVar20 = (uint *)&DAT_ram_30083950;
        puVar24 = (uint *)&DAT_ram_30082b48;
        *puVar17 = _DAT_ram_3008394c;
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
        } while (puVar20 != (uint *)&DAT_ram_30083b48);
        *puVar24 = _DAT_ram_30083b48;
      }
      else if (uVar3 == 1) {
        puVar22 = (undefined8 *)&DAT_ram_3008374c;
        puVar12 = (undefined8 *)&DAT_ram_30083b4c;
        puVar18 = (undefined8 *)&DAT_ram_30082b44;
        do {
          uVar48 = *puVar22;
          uVar50 = *(undefined8 *)((int)puVar22 + 4);
          puVar22 = puVar22 + 1;
          *puVar12 = uVar48;
          *puVar18 = uVar50;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar18 = (undefined8 *)((int)puVar18 + 4);
        } while (puVar22 != (undefined8 *)&DAT_ram_30083b4c);
      }
      else {
        puVar22 = (undefined8 *)&DAT_ram_30083754;
        _DAT_ram_30083b4c = _DAT_ram_3008374c;
        _DAT_ram_30083d4c = _DAT_ram_30083750;
        puVar12 = (undefined8 *)&DAT_ram_30083b50;
        puVar18 = (undefined8 *)&DAT_ram_30082b48;
        do {
          uVar48 = *puVar22;
          uVar50 = *(undefined8 *)((int)puVar22 + 4);
          puVar22 = puVar22 + 1;
          *puVar12 = uVar48;
          *puVar18 = uVar50;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar18 = (undefined8 *)((int)puVar18 + 4);
        } while (puVar22 != (undefined8 *)&DAT_ram_30083b4c);
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
      } while (pfVar19 != (float *)0x30081b44);
      if (dVar42 <= 0.0) {
        dVar42 = 0.0;
      }
      else {
        dVar42 = dVar42 * dVar45;
      }
      dVar51 = 0.0;
      pfVar9 = (float *)&DAT_ram_30083b4c;
      pfVar13 = (float *)&DAT_ram_30082b44;
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
      } while (pfVar30 != (float *)0x30081b44);
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
      } while (pfVar19 != (float *)0x30081b44);
      fVar53 = 0.0;
      if (dVar47 < dVar43 != 0) {
        if ((dVar47 < dVar43) < 0x100 && dVar51 / dVar43 < 0.0) {
          dVar42 = (double)FUN_ram_40000b8a();
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
  pfVar30 = (float *)&DAT_ram_30083d50;
  pfVar31 = (float *)&DAT_ram_30082d48;
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
  } while (pfVar26 != (float *)0x30081b44);
  memset(&DAT_ram_3008374c,0,0x400);
  if (uVar28 == 2) {
    puVar12 = (undefined8 *)&DAT_ram_30083d54;
    _DAT_ram_30083750 = (uint)_DAT_ram_30082d48;
    _DAT_ram_3008374c = _DAT_ram_30083d50;
    puVar18 = (undefined8 *)&DAT_ram_30082d4c;
    puVar17 = (undefined4 *)&DAT_ram_30083754;
    do {
      uVar48 = *puVar18;
      puVar21 = puVar17 + 2;
      *puVar17 = (int)*puVar12;
      puVar17[1] = (int)uVar48;
      puVar12 = (undefined8 *)((int)puVar12 + 4);
      puVar18 = (undefined8 *)((int)puVar18 + 4);
      puVar17 = puVar21;
    } while (puVar21 != (undefined4 *)&DAT_ram_30083b4c);
    _DAT_ram_30083b48 = _DAT_ram_30083f50;
  }
  else if (uVar28 < 3) {
    if (uVar28 == 0) {
      puVar12 = (undefined8 *)&DAT_ram_30083d54;
      _DAT_ram_3008374c = _DAT_ram_30083d50;
      _DAT_ram_30083750 = _DAT_ram_30083f50;
      puVar18 = (undefined8 *)&DAT_ram_30082d4c;
      puVar17 = (undefined4 *)&DAT_ram_30083754;
      do {
        uVar48 = *puVar18;
        puVar21 = puVar17 + 2;
        *puVar17 = (int)*puVar12;
        puVar17[1] = (int)uVar48;
        puVar12 = (undefined8 *)((int)puVar12 + 4);
        puVar18 = (undefined8 *)((int)puVar18 + 4);
        puVar17 = puVar21;
      } while (puVar21 != (undefined4 *)&DAT_ram_30083b4c);
    }
    else {
      puVar23 = (ulonglong *)&DAT_ram_3008374c;
      if (uVar28 == 1) {
        do {
          fVar55 = *pfVar30;
          fVar34 = *pfVar31;
          pfVar30 = pfVar30 + 1;
          *puVar23 = (ulonglong)(uint)fVar55;
          *(ulonglong *)((int)puVar23 + 4) = (ulonglong)(uint)fVar34;
          pfVar31 = pfVar31 + 1;
          puVar23 = puVar23 + 1;
        } while (pfVar30 != (float *)&DAT_ram_30083f50);
      }
    }
  }
  else if (uVar28 == 3) {
    puVar24 = (uint *)&DAT_ram_30083d50;
    puVar20 = (uint *)&DAT_ram_3008374c;
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
    } while (puVar24 != (uint *)&DAT_ram_30083f50);
    puVar17 = (undefined4 *)&DAT_ram_30083950;
    puVar21 = (undefined4 *)&DAT_ram_30082d4c;
    *puVar20 = _DAT_ram_30083f50;
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
    } while (puVar21 != &uRam30082f44);
    *puVar17 = uRam30082f44;
  }
  puVar21 = (undefined4 *)&DAT_ram_3008374c;
  puVar17 = (undefined4 *)&DAT_ram_30082f4c;
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
  } while (puVar21 != (undefined4 *)&DAT_ram_30083b4c);
  if (iStack_ac == 1) {
    FUN_ram_300410e6(param_1,&DAT_ram_30082f4c,&DAT_ram_30082f4c,1);
    puVar21 = (undefined4 *)&DAT_ram_30082f4c;
    puVar17 = (undefined4 *)&DAT_ram_3008334c;
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
    } while (puVar21 != (undefined4 *)&DAT_ram_3008334c);
  }
  else {
    memset(&DAT_ram_3008334c,0,0x400);
    FUN_ram_300410e6(param_1,&DAT_ram_30082f4c,&DAT_ram_3008334c,1);
  }
  dVar45 = 0.0;
  puVar12 = (undefined8 *)&DAT_ram_3008334c;
  dVar47 = 0.0;
  do {
    uVar48 = *puVar6;
    puVar6 = (undefined8 *)((int)puVar6 + 4);
    dVar42 = (double)(float)*puVar12;
    puVar12 = (undefined8 *)((int)puVar12 + 4);
    dVar45 = dVar42 * dVar42 + dVar45;
    dVar47 = (double)(float)uVar48 * dVar42 + dVar47;
  } while (puVar6 != (undefined8 *)&DAT_ram_30082744);
  if (dVar2 < dVar45) {
    fVar54 = (float)(dVar47 / dVar45);
  }
  FUN_ram_400002f4();
  *(uint *)(gp + -0x1c) = uVar28;
  *(int *)(gp + -0x18) = iStack_ac;
  *(undefined1 *)(gp + -0x20) = 1;
  *(ulonglong *)(gp + -0x14) = uVar36;
  *(float *)(gp + -0x10) = fVar54;
  DAT_ram_30080f30 = 0;
  FUN_ram_400002fa();
  return;
}


