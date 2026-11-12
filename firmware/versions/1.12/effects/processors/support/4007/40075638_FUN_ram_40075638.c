/* NanoCore 1.12: FUN_ram_40075638 at 0x40075638.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_1ebb94e11c7c907b64f5f653b535e32cdfc3ee42ad03880bb2280381201a6c66
 * Source: analysis/rea-1.12-effects/results/03571-export-0x40075638.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
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

