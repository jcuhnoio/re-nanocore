/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40075000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400753d0.
 * REA evidence: ev_f9d3a59b9cfe28d9e5fb43ea9fcbde3858f3742b3a925a77ebd89a23c165496b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400753d0(int param_1)

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
      if (iVar32 == 7) goto LAB_ram_40075412;
      local_1c[iVar32] = (float *)(param_1 + 0x3418);
      iVar30 = iVar30 + 2;
      uVar27 = 5;
      if (iVar30 == 7) goto LAB_ram_40075412;
    }
    uVar27 = uVar27 - 1;
    iVar30 = iVar32;
  } while (iVar32 != 7);
LAB_ram_40075412:
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


/* NanoCore 1.12, address 0x40075638.
 * REA evidence: ev_1be3e34d06617b2519c0793fb5a2cdc4199bda5a8ae2427cf2fa2b17991b4218
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_ram_40075638(undefined4 param_1)

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
  
  fVar1 = DAT_ram_400a09c0;
  fVar40 = DAT_ram_400a09bc;
  fVar54 = DAT_ram_400a09b8;
  fVar41 = DAT_ram_4009f758;
  fVar53 = DAT_ram_4009b140;
  fVar35 = DAT_ram_4009a4f8;
  fVar34 = DAT_ram_40099f94;
  fVar55 = DAT_ram_40099f88;
  _DAT_ram_300823c4 = DAT_ram_4009f230;
  iVar4 = 1;
  pfVar5 = (float *)&DAT_ram_300823c8;
  do {
    fVar39 = (float)iVar4;
    iVar4 = iVar4 + 1;
    fVar39 = fVar39 * fVar54;
    fVar37 = (float)FUN_ram_400009d2(fVar39 * fVar40);
    fVar38 = (float)FUN_ram_40000712(fVar39 * fVar41);
    fVar39 = (float)FUN_ram_400009d2(fVar39 * fVar1);
    *pfVar5 = fVar39 * fVar55 + fVar38 * fVar35 + fVar37 * fVar53 + fVar34;
    fVar39 = DAT_ram_4009f090;
    pfVar5 = pfVar5 + 1;
  } while (iVar4 != 0x100);
  pfVar26 = (float *)&DAT_ram_300819c0;
  fVar55 = _DAT_ram_300823c4 + 0.0;
  fVar34 = _DAT_ram_300823c4 * 0.0;
  pfVar27 = (float *)&DAT_ram_300817bc;
  iVar4 = 0;
  pfVar5 = pfVar26;
  pfVar19 = pfVar27;
  do {
    puVar6 = (undefined8 *)&DAT_ram_300823c4;
    pfVar30 = (float *)&DAT_ram_300823c8;
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
    } while (pfVar31 != (float *)&DAT_ram_300827c4);
    *pfVar5 = fVar35;
    *pfVar19 = fVar53;
    dVar47 = DAT_ram_400a09e0;
    dVar2 = DAT_ram_400a09d8;
    dVar45 = DAT_ram_400a09d0;
    fVar35 = DAT_ram_4009672c;
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar19 = pfVar19 + 1;
  } while (iVar4 != 0x81);
  uVar36 = (ulonglong)(uint)DAT_ram_4009672c;
  iStack_ac = 0;
  uVar28 = 0;
  iVar4 = 0;
  fVar55 = DAT_ram_400a09b4;
  while( true ) {
    puVar21 = (undefined4 *)&DAT_ram_300823c4;
    puVar17 = (undefined4 *)&DAT_ram_30082fcc;
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
    } while (puVar21 != (undefined4 *)&DAT_ram_300827c4);
    if (iVar4 == 0) {
      memset(&DAT_ram_300833cc,0,0x400);
      FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_300833cc,0);
      puVar21 = (undefined4 *)&DAT_ram_300833cc;
      puVar17 = (undefined4 *)&DAT_ram_300837cc;
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
      } while (puVar21 != (undefined4 *)&DAT_ram_300837cc);
    }
    else {
      FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_30082fcc,0);
      puVar21 = (undefined4 *)&DAT_ram_30082fcc;
      puVar17 = (undefined4 *)&DAT_ram_300837cc;
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
      } while (puVar21 != (undefined4 *)&DAT_ram_300833cc);
    }
    uVar3 = 0;
    do {
      memset(&DAT_ram_30083bcc,0,0x204);
      memset(&DAT_ram_30082bc4,0,0x204);
      if (uVar3 == 2) {
        _DAT_ram_30082bc4 = (ulonglong)_DAT_ram_300837d0;
        puVar22 = (undefined8 *)&DAT_ram_300837d4;
        _DAT_ram_30083bcc = _DAT_ram_300837cc;
        puVar12 = (undefined8 *)&DAT_ram_30083bd0;
        puVar18 = (undefined8 *)&DAT_ram_30082bc8;
        do {
          uVar48 = *puVar22;
          uVar50 = *(undefined8 *)((int)puVar22 + 4);
          puVar22 = puVar22 + 1;
          *puVar12 = uVar48;
          *puVar18 = uVar50;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar18 = (undefined8 *)((int)puVar18 + 4);
        } while (puVar22 != (undefined8 *)&DAT_ram_30083bcc);
        _DAT_ram_30083dcc = _DAT_ram_30083bc8;
      }
      else if (uVar3 == 3) {
        puVar21 = (undefined4 *)&DAT_ram_300837cc;
        puVar17 = (undefined4 *)&DAT_ram_30083bcc;
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
        } while (puVar21 != (undefined4 *)&DAT_ram_300839cc);
        puVar20 = (uint *)&DAT_ram_300839d0;
        puVar24 = (uint *)&DAT_ram_30082bc8;
        *puVar17 = _DAT_ram_300839cc;
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
        } while (puVar20 != (uint *)&DAT_ram_30083bc8);
        *puVar24 = _DAT_ram_30083bc8;
      }
      else if (uVar3 == 1) {
        puVar22 = (undefined8 *)&DAT_ram_300837cc;
        puVar12 = (undefined8 *)&DAT_ram_30083bcc;
        puVar18 = (undefined8 *)&DAT_ram_30082bc4;
        do {
          uVar48 = *puVar22;
          uVar50 = *(undefined8 *)((int)puVar22 + 4);
          puVar22 = puVar22 + 1;
          *puVar12 = uVar48;
          *puVar18 = uVar50;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar18 = (undefined8 *)((int)puVar18 + 4);
        } while (puVar22 != (undefined8 *)&DAT_ram_30083bcc);
      }
      else {
        puVar22 = (undefined8 *)&DAT_ram_300837d4;
        _DAT_ram_30083bcc = _DAT_ram_300837cc;
        _DAT_ram_30083dcc = _DAT_ram_300837d0;
        puVar12 = (undefined8 *)&DAT_ram_30083bd0;
        puVar18 = (undefined8 *)&DAT_ram_30082bc8;
        do {
          uVar48 = *puVar22;
          uVar50 = *(undefined8 *)((int)puVar22 + 4);
          puVar22 = puVar22 + 1;
          *puVar12 = uVar48;
          *puVar18 = uVar50;
          puVar12 = (undefined8 *)((int)puVar12 + 4);
          puVar18 = (undefined8 *)((int)puVar18 + 4);
        } while (puVar22 != (undefined8 *)&DAT_ram_30083bcc);
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
      } while (pfVar19 != (float *)0x30081bc4);
      if (dVar42 <= 0.0) {
        dVar42 = 0.0;
      }
      else {
        dVar42 = dVar42 * dVar45;
      }
      dVar51 = 0.0;
      pfVar9 = (float *)&DAT_ram_30083bcc;
      pfVar13 = (float *)&DAT_ram_30082bc4;
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
      } while (pfVar30 != (float *)0x30081bc4);
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
      } while (pfVar19 != (float *)0x30081bc4);
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
  pfVar30 = (float *)&DAT_ram_30083dd0;
  pfVar31 = (float *)&DAT_ram_30082dc8;
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
  } while (pfVar26 != (float *)0x30081bc4);
  memset(&DAT_ram_300837cc,0,0x400);
  if (uVar28 == 2) {
    puVar12 = (undefined8 *)&DAT_ram_30083dd4;
    _DAT_ram_300837d0 = (uint)_DAT_ram_30082dc8;
    _DAT_ram_300837cc = _DAT_ram_30083dd0;
    puVar18 = (undefined8 *)&DAT_ram_30082dcc;
    puVar17 = (undefined4 *)&DAT_ram_300837d4;
    do {
      uVar48 = *puVar18;
      puVar21 = puVar17 + 2;
      *puVar17 = (int)*puVar12;
      puVar17[1] = (int)uVar48;
      puVar12 = (undefined8 *)((int)puVar12 + 4);
      puVar18 = (undefined8 *)((int)puVar18 + 4);
      puVar17 = puVar21;
    } while (puVar21 != (undefined4 *)&DAT_ram_30083bcc);
    _DAT_ram_30083bc8 = _DAT_ram_30083fd0;
  }
  else if (uVar28 < 3) {
    if (uVar28 == 0) {
      puVar12 = (undefined8 *)&DAT_ram_30083dd4;
      _DAT_ram_300837cc = _DAT_ram_30083dd0;
      _DAT_ram_300837d0 = _DAT_ram_30083fd0;
      puVar18 = (undefined8 *)&DAT_ram_30082dcc;
      puVar17 = (undefined4 *)&DAT_ram_300837d4;
      do {
        uVar48 = *puVar18;
        puVar21 = puVar17 + 2;
        *puVar17 = (int)*puVar12;
        puVar17[1] = (int)uVar48;
        puVar12 = (undefined8 *)((int)puVar12 + 4);
        puVar18 = (undefined8 *)((int)puVar18 + 4);
        puVar17 = puVar21;
      } while (puVar21 != (undefined4 *)&DAT_ram_30083bcc);
    }
    else {
      puVar23 = (ulonglong *)&DAT_ram_300837cc;
      if (uVar28 == 1) {
        do {
          fVar55 = *pfVar30;
          fVar34 = *pfVar31;
          pfVar30 = pfVar30 + 1;
          *puVar23 = (ulonglong)(uint)fVar55;
          *(ulonglong *)((int)puVar23 + 4) = (ulonglong)(uint)fVar34;
          pfVar31 = pfVar31 + 1;
          puVar23 = puVar23 + 1;
        } while (pfVar30 != (float *)&DAT_ram_30083fd0);
      }
    }
  }
  else if (uVar28 == 3) {
    puVar24 = (uint *)&DAT_ram_30083dd0;
    puVar20 = (uint *)&DAT_ram_300837cc;
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
    } while (puVar24 != (uint *)&DAT_ram_30083fd0);
    puVar17 = (undefined4 *)&DAT_ram_300839d0;
    puVar21 = (undefined4 *)&DAT_ram_30082dcc;
    *puVar20 = _DAT_ram_30083fd0;
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
    } while (puVar21 != &uRam30082fc4);
    *puVar17 = uRam30082fc4;
  }
  puVar21 = (undefined4 *)&DAT_ram_300837cc;
  puVar17 = (undefined4 *)&DAT_ram_30082fcc;
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
  } while (puVar21 != (undefined4 *)&DAT_ram_30083bcc);
  if (iStack_ac == 1) {
    FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_30082fcc,1);
    puVar21 = (undefined4 *)&DAT_ram_30082fcc;
    puVar17 = (undefined4 *)&DAT_ram_300833cc;
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
    } while (puVar21 != (undefined4 *)&DAT_ram_300833cc);
  }
  else {
    memset(&DAT_ram_300833cc,0,0x400);
    FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_300833cc,1);
  }
  dVar45 = 0.0;
  puVar12 = (undefined8 *)&DAT_ram_300833cc;
  dVar47 = 0.0;
  do {
    uVar48 = *puVar6;
    puVar6 = (undefined8 *)((int)puVar6 + 4);
    dVar42 = (double)(float)*puVar12;
    puVar12 = (undefined8 *)((int)puVar12 + 4);
    dVar45 = dVar42 * dVar42 + dVar45;
    dVar47 = (double)(float)uVar48 * dVar42 + dVar47;
  } while (puVar6 != (undefined8 *)&DAT_ram_300827c4);
  if (dVar2 < dVar45) {
    fVar54 = (float)(dVar47 / dVar45);
  }
  FUN_ram_400002f4();
  *(uint *)(gp + -0x1c) = uVar28;
  *(int *)(gp + -0x18) = iStack_ac;
  *(undefined1 *)(gp + -0x20) = 1;
  *(ulonglong *)(gp + -0x14) = uVar36;
  *(float *)(gp + -0x10) = fVar54;
  DAT_ram_30080fb0 = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40075ec4.
 * REA evidence: ev_da6513bb1d631949dac9e30fcfe697f71c383e161fdec283f9dce2d5cb1c6bcb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_ram_40075ec4(int param_1,uint *param_2,float *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  float *pfVar4;
  ulonglong *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  uint *puVar25;
  undefined8 *puVar26;
  float *pfVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  float fVar33;
  
  if (((param_1 == 0) || (param_2 == (uint *)0x0)) || (param_3 == (float *)0x0)) {
    return;
  }
  pcVar2 = (char *)(gp + -0x20);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_ram_400002f4();
    if ((*pcVar2 == '\0') && (DAT_ram_30080fb0 == '\0')) {
      DAT_ram_30080fb0 = '\x01';
      FUN_ram_400002fa();
      FUN_ram_40075638(param_1);
    }
    else {
      FUN_ram_400002fa(uVar3);
    }
  }
  FUN_ram_400002f4();
  cVar1 = *pcVar2;
  uVar22 = *(uint *)(gp + -0x1c);
  iVar23 = *(int *)(gp + -0x18);
  uVar29 = *(undefined8 *)(gp + -0x14);
  uVar31 = *(undefined8 *)(gp + -0x10);
  FUN_ram_400002fa();
  fVar28 = (float)uVar29;
  fVar30 = (float)uVar31;
  if ((cVar1 != '\0') && (uVar22 != 0 || iVar23 != 0)) {
    if (param_4 == 0) {
      uVar3 = FUN_ram_400002f4();
      FUN_ram_4000303c(&DAT_ram_30082fcc,param_2,0x400);
      if (iVar23 == 1) {
        FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_30082fcc,0);
        puVar16 = (undefined4 *)&DAT_ram_30082fcc;
        puVar14 = (undefined4 *)&DAT_ram_300811b8;
        do {
          uVar6 = puVar16[1];
          uVar8 = puVar16[2];
          uVar10 = puVar16[3];
          *puVar14 = *puVar16;
          puVar14[1] = uVar6;
          puVar14[2] = uVar8;
          puVar14[3] = uVar10;
          puVar16 = puVar16 + 4;
          puVar14 = puVar14 + 4;
        } while (puVar16 != (undefined4 *)&DAT_ram_300833cc);
      }
      else {
        memset(&DAT_ram_300811b8,0,0x400);
        FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_300811b8,0);
      }
      puVar24 = (undefined8 *)&DAT_ram_300815b8;
      memset(&DAT_ram_300815b8,0,0x204);
      puVar26 = (undefined8 *)&DAT_ram_30080fb4;
      memset(&DAT_ram_30080fb4,0,0x204);
      if (uVar22 == 2) {
        puVar24 = (undefined8 *)&DAT_ram_300815bc;
        puVar26 = (undefined8 *)&DAT_ram_30080fb8;
        _DAT_ram_300815b8 = _DAT_ram_300811b8;
        _DAT_ram_30080fb4 = _DAT_ram_300811bc;
        puVar13 = (undefined8 *)&DAT_ram_300811c0;
        do {
          uVar29 = *puVar13;
          uVar31 = *(undefined8 *)((int)puVar13 + 4);
          puVar13 = puVar13 + 1;
          *puVar24 = uVar29;
          *puVar26 = uVar31;
          puVar24 = (undefined8 *)((int)puVar24 + 4);
          puVar26 = (undefined8 *)((int)puVar26 + 4);
        } while (puVar13 != (undefined8 *)&DAT_ram_300815b8);
        _DAT_ram_300817b8 = _DAT_ram_300815b4;
      }
      else if (uVar22 < 3) {
        if (uVar22 == 0) {
          puVar24 = (undefined8 *)&DAT_ram_300815bc;
          puVar26 = (undefined8 *)&DAT_ram_30080fb8;
          _DAT_ram_300815b8 = _DAT_ram_300811b8;
          _DAT_ram_300817b8 = _DAT_ram_300811bc;
          puVar13 = (undefined8 *)&DAT_ram_300811c0;
          do {
            uVar29 = *puVar13;
            uVar31 = *(undefined8 *)((int)puVar13 + 4);
            puVar13 = puVar13 + 1;
            *puVar24 = uVar29;
            *puVar26 = uVar31;
            puVar24 = (undefined8 *)((int)puVar24 + 4);
            puVar26 = (undefined8 *)((int)puVar26 + 4);
          } while (puVar13 != (undefined8 *)&DAT_ram_300815b8);
        }
        else {
          puVar13 = (undefined8 *)&DAT_ram_300811b8;
          do {
            uVar29 = *puVar13;
            uVar31 = *(undefined8 *)((int)puVar13 + 4);
            puVar13 = puVar13 + 1;
            *puVar24 = uVar29;
            *puVar26 = uVar31;
            puVar24 = (undefined8 *)((int)puVar24 + 4);
            puVar26 = (undefined8 *)((int)puVar26 + 4);
          } while (puVar13 != (undefined8 *)&DAT_ram_300815b8);
        }
      }
      else if (uVar22 == 3) {
        puVar14 = (undefined4 *)&DAT_ram_300811b8;
        do {
          uVar6 = puVar14[1];
          uVar8 = puVar14[2];
          uVar10 = puVar14[3];
          *(undefined4 *)puVar24 = *puVar14;
          *(undefined4 *)((int)puVar24 + 4) = uVar6;
          *(undefined4 *)(puVar24 + 1) = uVar8;
          *(undefined4 *)((int)puVar24 + 0xc) = uVar10;
          puVar14 = puVar14 + 4;
          puVar24 = puVar24 + 2;
        } while (puVar14 != &uRam300813b8);
        puVar9 = (uint *)&DAT_ram_30080fb8;
        puVar15 = (uint *)&DAT_ram_300813bc;
        *(undefined4 *)puVar24 = uRam300813b8;
        do {
          uVar21 = puVar15[1];
          uVar19 = puVar15[2];
          uVar22 = puVar15[3];
          uVar7 = puVar15[4];
          uVar11 = puVar15[5];
          *puVar9 = *puVar15;
          puVar9[1] = uVar21;
          puVar9[2] = uVar19;
          puVar9[3] = uVar22;
          puVar9[4] = uVar7;
          puVar9[5] = uVar11;
          puVar15 = puVar15 + 6;
          puVar9 = puVar9 + 6;
        } while (puVar15 != (uint *)&DAT_ram_300815b4);
        *puVar9 = _DAT_ram_300815b4;
      }
      puVar24 = (undefined8 *)&DAT_ram_300815bc;
      pfVar4 = (float *)&DAT_ram_30080fb4;
      pfVar12 = (float *)&DAT_ram_300815b8;
      do {
        uVar29 = *(undefined8 *)pfVar4;
        pfVar27 = pfVar12 + 1;
        *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar28;
        *pfVar4 = (float)uVar29 * fVar28;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar27;
      } while (pfVar27 != (float *)&DAT_ram_300817bc);
      *(ulonglong *)param_3 = (ulonglong)_DAT_ram_300815b8;
      *(ulonglong *)(param_3 + 1) = (ulonglong)_DAT_ram_300817b8;
      pfVar4 = (float *)&DAT_ram_30080fb8;
      pfVar12 = param_3 + 3;
      do {
        pfVar12[-1] = (float)*puVar24;
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *pfVar12 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar12 + 2;
      } while (puVar24 != (undefined8 *)&DAT_ram_300817b8);
    }
    else {
      fVar33 = DAT_ram_4009672c;
      if (fVar28 != 0.0) {
        fVar33 = DAT_ram_4009672c / fVar28;
      }
      uVar3 = FUN_ram_400002f4();
      puVar25 = (uint *)&DAT_ram_300815b8;
      memset(&DAT_ram_300815b8,0,0x204);
      memset(&DAT_ram_30080fb4,0,0x204);
      _DAT_ram_300815b8 = *param_2;
      _DAT_ram_300817b8 = param_2[1];
      puVar26 = (undefined8 *)&DAT_ram_300815bc;
      puVar15 = (uint *)&DAT_ram_30080fb8;
      puVar9 = puVar15;
      puVar24 = puVar26;
      do {
        *puVar24 = *(undefined8 *)(param_2 + 2);
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *puVar9 = param_2[3];
        puVar9 = puVar9 + 1;
        param_2 = param_2 + 2;
      } while (puVar24 != (undefined8 *)&DAT_ram_300817b8);
      pfVar27 = (float *)&DAT_ram_30080fb4;
      pfVar4 = pfVar27;
      pfVar12 = (float *)&DAT_ram_300815b8;
      do {
        uVar29 = *(undefined8 *)pfVar4;
        pfVar17 = pfVar12 + 1;
        *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar33;
        *pfVar4 = (float)uVar29 * fVar33;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar17;
      } while (pfVar17 != (float *)&DAT_ram_300817bc);
      puVar5 = (ulonglong *)memset(&DAT_ram_300811b8,0,0x400);
      if (uVar22 == 2) {
        uVar32 = (ulonglong)_DAT_ram_30080fb4;
        *puVar5 = (ulonglong)_DAT_ram_300815b8;
        *(ulonglong *)((int)puVar5 + 4) = uVar32;
        puVar14 = (undefined4 *)&DAT_ram_300811c0;
        do {
          uVar22 = *puVar15;
          puVar16 = puVar14 + 2;
          *puVar14 = (int)*puVar26;
          puVar14[1] = uVar22;
          puVar26 = (undefined8 *)((int)puVar26 + 4);
          puVar15 = puVar15 + 1;
          puVar14 = puVar16;
        } while (puVar16 != (undefined4 *)&DAT_ram_300815b8);
        *(uint *)((int)puVar5 + 0x3fc) = _DAT_ram_300817b8;
      }
      else if (uVar22 < 3) {
        if (uVar22 == 0) {
          uVar32 = (ulonglong)_DAT_ram_300817b8;
          *puVar5 = (ulonglong)_DAT_ram_300815b8;
          *(ulonglong *)((int)puVar5 + 4) = uVar32;
          puVar14 = (undefined4 *)&DAT_ram_300811c0;
          do {
            uVar22 = *puVar15;
            puVar16 = puVar14 + 2;
            *puVar14 = (int)*puVar26;
            puVar14[1] = uVar22;
            puVar26 = (undefined8 *)((int)puVar26 + 4);
            puVar15 = puVar15 + 1;
            puVar14 = puVar16;
          } while (puVar16 != (undefined4 *)&DAT_ram_300815b8);
        }
        else {
          do {
            uVar22 = *puVar25;
            fVar28 = *pfVar27;
            puVar25 = puVar25 + 1;
            *puVar5 = (ulonglong)uVar22;
            *(ulonglong *)((int)puVar5 + 4) = (ulonglong)(uint)fVar28;
            pfVar27 = pfVar27 + 1;
            puVar5 = puVar5 + 1;
          } while (puVar25 != (uint *)&DAT_ram_300817b8);
        }
      }
      else {
        puVar9 = (uint *)&DAT_ram_300815b8;
        if (uVar22 == 3) {
          do {
            uVar22 = puVar9[1];
            uVar7 = puVar9[2];
            uVar11 = puVar9[3];
            *(uint *)puVar5 = *puVar9;
            *(uint *)((int)puVar5 + 4) = uVar22;
            *(uint *)(puVar5 + 1) = uVar7;
            *(uint *)((int)puVar5 + 0xc) = uVar11;
            puVar9 = puVar9 + 4;
            puVar5 = puVar5 + 2;
          } while (puVar9 != (uint *)&DAT_ram_300817b8);
          puVar16 = (undefined4 *)&DAT_ram_30080fb8;
          puVar14 = (undefined4 *)&DAT_ram_300813bc;
          *(uint *)puVar5 = _DAT_ram_300817b8;
          do {
            uVar20 = puVar16[1];
            uVar6 = puVar16[2];
            uVar8 = puVar16[3];
            uVar10 = puVar16[4];
            uVar18 = puVar16[5];
            *puVar14 = *puVar16;
            puVar14[1] = uVar20;
            puVar14[2] = uVar6;
            puVar14[3] = uVar8;
            puVar14[4] = uVar10;
            puVar14[5] = uVar18;
            puVar16 = puVar16 + 6;
            puVar14 = puVar14 + 6;
          } while (puVar16 != &uRam300811b0);
          *puVar14 = uRam300811b0;
        }
      }
      puVar16 = (undefined4 *)&DAT_ram_300811b8;
      puVar14 = (undefined4 *)&DAT_ram_30082fcc;
      do {
        uVar6 = puVar16[1];
        uVar8 = puVar16[2];
        uVar10 = puVar16[3];
        *puVar14 = *puVar16;
        puVar14[1] = uVar6;
        puVar14[2] = uVar8;
        puVar14[3] = uVar10;
        puVar16 = puVar16 + 4;
        puVar14 = puVar14 + 4;
      } while (puVar16 != (undefined4 *)&DAT_ram_300815b8);
      if (iVar23 == 1) {
        FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_30082fcc,1);
        puVar16 = (undefined4 *)&DAT_ram_30082fcc;
        puVar14 = (undefined4 *)&DAT_ram_300827c4;
        do {
          uVar6 = puVar16[1];
          uVar8 = puVar16[2];
          uVar10 = puVar16[3];
          *puVar14 = *puVar16;
          puVar14[1] = uVar6;
          puVar14[2] = uVar8;
          puVar14[3] = uVar10;
          puVar16 = puVar16 + 4;
          puVar14 = puVar14 + 4;
        } while (puVar16 != (undefined4 *)&DAT_ram_300833cc);
      }
      else {
        memset(&DAT_ram_300827c4,0,0x400);
        FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_300827c4,1);
      }
      puVar24 = (undefined8 *)&DAT_ram_300827c4;
      do {
        uVar29 = *puVar24;
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *param_3 = (float)uVar29 * fVar30;
        param_3 = param_3 + 1;
      } while (puVar24 != (undefined8 *)&DAT_ram_30082bc4);
    }
    FUN_ram_400002fa(uVar3);
    return;
  }
  if (param_4 == 0) {
    iVar23 = FUN_ram_40004d36();
    uVar3 = 0x30081fc4;
    if (iVar23 != 0) {
      uVar3 = 0x30081bc4;
    }
    uVar3 = FUN_ram_4000303c(uVar3,param_2,0x400);
    FUN_ram_300410e6(param_1,uVar3,param_3,0);
    if ((DAT_ram_4009f124 < fVar28) && (fVar28 < DAT_ram_400a09c4)) {
      return;
    }
    pfVar4 = param_3;
    do {
      pfVar12 = pfVar4 + 1;
      *pfVar4 = (float)*(undefined8 *)pfVar4 * fVar28;
      pfVar4 = pfVar12;
    } while (param_3 + 0x100 != pfVar12);
    return;
  }
  if (fVar28 == 0.0) {
    iVar23 = FUN_ram_40004d36();
    if (iVar23 != 0) {
      FUN_ram_4000303c(0x30081bc4,param_2,0x400);
      pfVar4 = (float *)0x30081bc4;
      fVar33 = DAT_ram_4009f124;
      goto LAB_ram_400760e0;
    }
    uVar3 = 0x30081fc4;
    fVar28 = DAT_ram_4009672c;
  }
  else {
    fVar28 = DAT_ram_4009672c / fVar28;
    iVar23 = FUN_ram_40004d36();
    uVar3 = 0x30081fc4;
    if (iVar23 != 0) {
      uVar3 = 0x30081bc4;
    }
  }
  pfVar4 = (float *)FUN_ram_4000303c(uVar3,param_2,0x400);
  fVar33 = DAT_ram_4009f124;
  if ((fVar28 <= DAT_ram_4009f124) || (DAT_ram_400a09c4 <= fVar28)) {
    pfVar12 = pfVar4;
    do {
      pfVar27 = pfVar12 + 1;
      *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar28;
      pfVar12 = pfVar27;
    } while (pfVar4 + 0x100 != pfVar27);
  }
LAB_ram_400760e0:
  FUN_ram_300410e6(param_1,pfVar4,param_3,1);
  if ((fVar30 <= fVar33) || (DAT_ram_400a09c4 <= fVar30)) {
    pfVar4 = param_3;
    do {
      pfVar12 = pfVar4 + 1;
      *pfVar4 = (float)*(undefined8 *)pfVar4 * fVar30;
      pfVar4 = pfVar12;
    } while (pfVar12 != param_3 + 0x100);
  }
  return;
}


