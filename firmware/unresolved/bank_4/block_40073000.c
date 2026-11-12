/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40073000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40073104.
 * REA evidence: ev_672780c404ceedfb67e11b7661ebef878dae5ad7c7ace99ff2253351dcf398d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_ram_40073104(int param_1,uint *param_2,float *param_3,int param_4)

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
    if ((*pcVar2 == '\0') && (DAT_ram_3007fbb0 == '\0')) {
      DAT_ram_3007fbb0 = '\x01';
      FUN_ram_400002fa();
      FUN_ram_40072888(param_1);
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
      FUN_ram_4000305c(&DAT_ram_30081bcc,param_2,0x400);
      if (iVar23 == 1) {
        FUN_ram_40091946(param_1,&DAT_ram_30081bcc,&DAT_ram_30081bcc,0);
        puVar16 = (undefined4 *)&DAT_ram_30081bcc;
        puVar14 = (undefined4 *)&DAT_ram_3007fdb8;
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
        } while (puVar16 != (undefined4 *)&DAT_ram_30081fcc);
      }
      else {
        memset(&DAT_ram_3007fdb8,0,0x400);
        FUN_ram_40091946(param_1,&DAT_ram_30081bcc,&DAT_ram_3007fdb8,0);
      }
      puVar24 = (undefined8 *)&DAT_ram_300801b8;
      memset(&DAT_ram_300801b8,0,0x204);
      puVar26 = (undefined8 *)&DAT_ram_3007fbb4;
      memset(&DAT_ram_3007fbb4,0,0x204);
      if (uVar22 == 2) {
        puVar24 = (undefined8 *)&DAT_ram_300801bc;
        puVar26 = (undefined8 *)&DAT_ram_3007fbb8;
        _DAT_ram_300801b8 = _DAT_ram_3007fdb8;
        _DAT_ram_3007fbb4 = _DAT_ram_3007fdbc;
        puVar13 = (undefined8 *)&DAT_ram_3007fdc0;
        do {
          uVar29 = *puVar13;
          uVar31 = *(undefined8 *)((int)puVar13 + 4);
          puVar13 = puVar13 + 1;
          *puVar24 = uVar29;
          *puVar26 = uVar31;
          puVar24 = (undefined8 *)((int)puVar24 + 4);
          puVar26 = (undefined8 *)((int)puVar26 + 4);
        } while (puVar13 != (undefined8 *)&DAT_ram_300801b8);
        _DAT_ram_300803b8 = _DAT_ram_300801b4;
      }
      else if (uVar22 < 3) {
        if (uVar22 == 0) {
          puVar24 = (undefined8 *)&DAT_ram_300801bc;
          puVar26 = (undefined8 *)&DAT_ram_3007fbb8;
          _DAT_ram_300801b8 = _DAT_ram_3007fdb8;
          _DAT_ram_300803b8 = _DAT_ram_3007fdbc;
          puVar13 = (undefined8 *)&DAT_ram_3007fdc0;
          do {
            uVar29 = *puVar13;
            uVar31 = *(undefined8 *)((int)puVar13 + 4);
            puVar13 = puVar13 + 1;
            *puVar24 = uVar29;
            *puVar26 = uVar31;
            puVar24 = (undefined8 *)((int)puVar24 + 4);
            puVar26 = (undefined8 *)((int)puVar26 + 4);
          } while (puVar13 != (undefined8 *)&DAT_ram_300801b8);
        }
        else {
          puVar13 = (undefined8 *)&DAT_ram_3007fdb8;
          do {
            uVar29 = *puVar13;
            uVar31 = *(undefined8 *)((int)puVar13 + 4);
            puVar13 = puVar13 + 1;
            *puVar24 = uVar29;
            *puVar26 = uVar31;
            puVar24 = (undefined8 *)((int)puVar24 + 4);
            puVar26 = (undefined8 *)((int)puVar26 + 4);
          } while (puVar13 != (undefined8 *)&DAT_ram_300801b8);
        }
      }
      else if (uVar22 == 3) {
        puVar14 = (undefined4 *)&DAT_ram_3007fdb8;
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
        } while (puVar14 != &uRam3007ffb8);
        puVar9 = (uint *)&DAT_ram_3007fbb8;
        puVar15 = (uint *)&DAT_ram_3007ffbc;
        *(undefined4 *)puVar24 = uRam3007ffb8;
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
        } while (puVar15 != (uint *)&DAT_ram_300801b4);
        *puVar9 = _DAT_ram_300801b4;
      }
      puVar24 = (undefined8 *)&DAT_ram_300801bc;
      pfVar4 = (float *)&DAT_ram_3007fbb4;
      pfVar12 = (float *)&DAT_ram_300801b8;
      do {
        uVar29 = *(undefined8 *)pfVar4;
        pfVar27 = pfVar12 + 1;
        *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar28;
        *pfVar4 = (float)uVar29 * fVar28;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar27;
      } while (pfVar27 != (float *)&DAT_ram_300803bc);
      *(ulonglong *)param_3 = (ulonglong)_DAT_ram_300801b8;
      *(ulonglong *)(param_3 + 1) = (ulonglong)_DAT_ram_300803b8;
      pfVar4 = (float *)&DAT_ram_3007fbb8;
      pfVar12 = param_3 + 3;
      do {
        pfVar12[-1] = (float)*puVar24;
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *pfVar12 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar12 + 2;
      } while (puVar24 != (undefined8 *)&DAT_ram_300803b8);
    }
    else {
      fVar33 = DAT_ram_4009281c;
      if (fVar28 != 0.0) {
        fVar33 = DAT_ram_4009281c / fVar28;
      }
      uVar3 = FUN_ram_400002f4();
      puVar25 = (uint *)&DAT_ram_300801b8;
      memset(&DAT_ram_300801b8,0,0x204);
      memset(&DAT_ram_3007fbb4,0,0x204);
      _DAT_ram_300801b8 = *param_2;
      _DAT_ram_300803b8 = param_2[1];
      puVar26 = (undefined8 *)&DAT_ram_300801bc;
      puVar15 = (uint *)&DAT_ram_3007fbb8;
      puVar9 = puVar15;
      puVar24 = puVar26;
      do {
        *puVar24 = *(undefined8 *)(param_2 + 2);
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *puVar9 = param_2[3];
        puVar9 = puVar9 + 1;
        param_2 = param_2 + 2;
      } while (puVar24 != (undefined8 *)&DAT_ram_300803b8);
      pfVar27 = (float *)&DAT_ram_3007fbb4;
      pfVar4 = pfVar27;
      pfVar12 = (float *)&DAT_ram_300801b8;
      do {
        uVar29 = *(undefined8 *)pfVar4;
        pfVar17 = pfVar12 + 1;
        *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar33;
        *pfVar4 = (float)uVar29 * fVar33;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar17;
      } while (pfVar17 != (float *)&DAT_ram_300803bc);
      puVar5 = memset(&DAT_ram_3007fdb8,0,0x400);
      if (uVar22 == 2) {
        uVar32 = (ulonglong)_DAT_ram_3007fbb4;
        *puVar5 = (ulonglong)_DAT_ram_300801b8;
        *(ulonglong *)((int)puVar5 + 4) = uVar32;
        puVar14 = (undefined4 *)&DAT_ram_3007fdc0;
        do {
          uVar22 = *puVar15;
          puVar16 = puVar14 + 2;
          *puVar14 = (int)*puVar26;
          puVar14[1] = uVar22;
          puVar26 = (undefined8 *)((int)puVar26 + 4);
          puVar15 = puVar15 + 1;
          puVar14 = puVar16;
        } while (puVar16 != (undefined4 *)&DAT_ram_300801b8);
        *(uint *)((int)puVar5 + 0x3fc) = _DAT_ram_300803b8;
      }
      else if (uVar22 < 3) {
        if (uVar22 == 0) {
          uVar32 = (ulonglong)_DAT_ram_300803b8;
          *puVar5 = (ulonglong)_DAT_ram_300801b8;
          *(ulonglong *)((int)puVar5 + 4) = uVar32;
          puVar14 = (undefined4 *)&DAT_ram_3007fdc0;
          do {
            uVar22 = *puVar15;
            puVar16 = puVar14 + 2;
            *puVar14 = (int)*puVar26;
            puVar14[1] = uVar22;
            puVar26 = (undefined8 *)((int)puVar26 + 4);
            puVar15 = puVar15 + 1;
            puVar14 = puVar16;
          } while (puVar16 != (undefined4 *)&DAT_ram_300801b8);
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
          } while (puVar25 != (uint *)&DAT_ram_300803b8);
        }
      }
      else {
        puVar9 = (uint *)&DAT_ram_300801b8;
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
          } while (puVar9 != (uint *)&DAT_ram_300803b8);
          puVar16 = (undefined4 *)&DAT_ram_3007fbb8;
          puVar14 = (undefined4 *)&DAT_ram_3007ffbc;
          *(uint *)puVar5 = _DAT_ram_300803b8;
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
          } while (puVar16 != &uRam3007fdb0);
          *puVar14 = uRam3007fdb0;
        }
      }
      puVar16 = (undefined4 *)&DAT_ram_3007fdb8;
      puVar14 = (undefined4 *)&DAT_ram_30081bcc;
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
      } while (puVar16 != (undefined4 *)&DAT_ram_300801b8);
      if (iVar23 == 1) {
        FUN_ram_40091946(param_1,&DAT_ram_30081bcc,&DAT_ram_30081bcc,1);
        puVar16 = (undefined4 *)&DAT_ram_30081bcc;
        puVar14 = (undefined4 *)&DAT_ram_300813c4;
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
        } while (puVar16 != (undefined4 *)&DAT_ram_30081fcc);
      }
      else {
        memset(&DAT_ram_300813c4,0,0x400);
        FUN_ram_40091946(param_1,&DAT_ram_30081bcc,&DAT_ram_300813c4,1);
      }
      puVar24 = (undefined8 *)&DAT_ram_300813c4;
      do {
        uVar29 = *puVar24;
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *param_3 = (float)uVar29 * fVar30;
        param_3 = param_3 + 1;
      } while (puVar24 != (undefined8 *)&DAT_ram_300817c4);
    }
    FUN_ram_400002fa(uVar3);
    return;
  }
  if (param_4 == 0) {
    iVar23 = FUN_ram_40004dfe();
    uVar3 = 0x30080bc4;
    if (iVar23 != 0) {
      uVar3 = 0x300807c4;
    }
    uVar3 = FUN_ram_4000305c(uVar3,param_2,0x400);
    FUN_ram_40091946(param_1,uVar3,param_3,0);
    if ((DAT_ram_40098164 < fVar28) && (fVar28 < DAT_ram_40098a98)) {
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
    iVar23 = FUN_ram_40004dfe();
    if (iVar23 != 0) {
      FUN_ram_4000305c(0x300807c4,param_2,0x400);
      pfVar4 = (float *)0x300807c4;
      fVar33 = DAT_ram_40098164;
      goto LAB_ram_4007331c;
    }
    uVar3 = 0x30080bc4;
    fVar28 = DAT_ram_4009281c;
  }
  else {
    fVar28 = DAT_ram_4009281c / fVar28;
    iVar23 = FUN_ram_40004dfe();
    uVar3 = 0x30080bc4;
    if (iVar23 != 0) {
      uVar3 = 0x300807c4;
    }
  }
  pfVar4 = (float *)FUN_ram_4000305c(uVar3,param_2,0x400);
  fVar33 = DAT_ram_40098164;
  if ((fVar28 <= DAT_ram_40098164) || (DAT_ram_40098a98 <= fVar28)) {
    pfVar12 = pfVar4;
    do {
      pfVar27 = pfVar12 + 1;
      *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar28;
      pfVar12 = pfVar27;
    } while (pfVar4 + 0x100 != pfVar27);
  }
LAB_ram_4007331c:
  FUN_ram_40091946(param_1,pfVar4,param_3,1);
  if ((fVar30 <= fVar33) || (DAT_ram_40098a98 <= fVar30)) {
    pfVar4 = param_3;
    do {
      pfVar12 = pfVar4 + 1;
      *pfVar4 = (float)*(undefined8 *)pfVar4 * fVar30;
      pfVar4 = pfVar12;
    } while (pfVar12 != param_3 + 0x100);
  }
  return;
}


/* NanoCore 1.10, address 0x400738aa.
 * REA evidence: ev_55104c578a729011169b865bb7a3b803e68365e3942615ba00d9dc0bcd625ecb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400738aa(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x5230);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400738bc.
 * REA evidence: ev_ca9e0b8d2d934f6ea6822a83811d96a6a3731ffd9c71aa0889b877c7a36cfa43
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400738bc(undefined4 *param_1,undefined8 *param_2,uint param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *__s;
  uint uVar14;
  undefined4 *__s_00;
  undefined8 uVar15;
  uint uStack_5c;
  uint uStack_58;
  undefined2 uStack_54;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  FUN_ram_400002f4();
  param_1[0x1486] = DAT_ram_40098374;
  *(undefined2 *)((int)param_1 + 0x521e) = 0;
  FUN_ram_400002fa();
  if ((param_2 == (undefined8 *)0x0) || (param_3 == 0)) {
    return;
  }
  if (param_3 < 0x401) {
    uStack_58 = param_3 & 0xffff;
    if (param_3 < 0x81) {
      uStack_5c = param_3 & 0xffff;
      uStack_54 = 0;
      uVar14 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_3 - 1 >> 7;
      uStack_54 = (undefined2)((param_3 - 1 & 0x7fffff) >> 7);
      uVar14 = param_3 - 0x80;
      uStack_5c = 0x80;
      param_3 = 0x80;
    }
  }
  else {
    uStack_54 = 7;
    uStack_58 = 0x400;
    uVar14 = 0x380;
    uVar13 = 7;
    param_3 = 0x80;
    uStack_5c = 0x80;
  }
  memset(param_1 + 0x1306,0,0x200);
  fVar1 = DAT_ram_40098a9c;
  puVar7 = (ulonglong *)(param_1 + 0x1385);
  puVar9 = param_2;
  do {
    uVar15 = *puVar9;
    puVar9 = (undefined8 *)((int)puVar9 + 4);
    *puVar7 = (ulonglong)(uint)((float)uVar15 * fVar1);
    puVar7 = (ulonglong *)((int)puVar7 + -4);
  } while ((undefined8 *)((int)param_2 + param_3 * 4) != puVar9);
  __s_00 = param_1 + 6;
  memset(__s_00,0,0x1c00);
  puVar5 = PTR_DAT_ram_400999bc_ram_40099dd0;
  uVar4 = DAT_ram_40099dc8;
  puVar3 = PTR_DAT_ram_4009941c_ram_40099dc4;
  puVar2 = PTR_DAT_ram_400995bc_ram_40099dc0;
  uVar6 = DAT_ram_40099dbc;
  if (uVar13 == 0) {
    *(undefined2 *)(param_1 + 0x1487) = 0;
    memset(param_1 + 0xe86,0,0x200);
    memset(param_1 + 0xe06,0,0x200);
    memset(param_1 + 0x706,0,0x1c00);
    memset(param_1 + 0x1206,0,0x400);
    memset(param_1 + 0x1386,0,0x400);
    param_1[0x1488] = DAT_ram_40098374;
    param_1[0x1489] = 0;
    param_1[0x148a] = 0;
  }
  else {
    param_1[4] = DAT_ram_40099dcc;
    *param_1 = uVar6;
    param_1[5] = puVar5;
    param_1[1] = puVar2;
    param_1[2] = puVar3;
    param_1[3] = uVar4;
    uVar6 = FUN_ram_400002f4();
    if ((*(char *)(gp + -0x20) == '\0') && (DAT_ram_3007fbb0 == '\0')) {
      DAT_ram_3007fbb0 = '\x01';
      FUN_ram_400002fa();
      FUN_ram_40072888(param_1);
    }
    else {
      FUN_ram_400002fa(uVar6);
    }
    __s = param_1 + 0x1106;
    puVar12 = __s_00 + uVar13 * 0x100;
    while( true ) {
      memset(__s,0,0x400);
      uVar13 = uVar14;
      if (0x80 < uVar14) {
        uVar13 = 0x80;
      }
      if (uVar14 == 0) break;
      puVar9 = (undefined8 *)((int)param_2 + param_3 * 4);
      uVar10 = 0;
      pfVar8 = (float *)(param_1 + 0x1106);
      do {
        uVar15 = *puVar9;
        uVar10 = uVar10 + 1;
        puVar9 = (undefined8 *)((int)puVar9 + 4);
        *pfVar8 = (float)uVar15 * fVar1;
        pfVar8 = pfVar8 + 1;
      } while (uVar10 < uVar13);
      iVar11 = uVar13 - 1;
      if (uVar14 == 0) {
        iVar11 = 0;
      }
      uVar14 = uVar14 - uVar13;
      param_3 = param_3 + 1 + iVar11;
      FUN_ram_40073104(param_1,__s,__s_00,0);
      if ((uVar14 == 0) || (__s_00 = __s_00 + 0x100, __s_00 == puVar12)) goto LAB_ram_40073b5a;
    }
    FUN_ram_40073104(param_1,__s,__s_00,0);
LAB_ram_40073b5a:
    *(undefined2 *)(param_1 + 0x1487) = 0;
    memset(param_1 + 0xe86,0,0x200);
    memset(param_1 + 0xe06,0,0x200);
    memset(param_1 + 0x706,0,0x1c00);
    memset(param_1 + 0x1206,0,0x400);
    memset(param_1 + 0x1386,0,0x400);
    param_1[0x1488] = DAT_ram_40098374;
    param_1[0x1489] = 0;
    param_1[0x148a] = 0x800080;
  }
  FUN_ram_400002f4();
  param_1[0x1486] = uStack_5c << 0x10 | uStack_58;
  *(undefined2 *)((int)param_1 + 0x521e) = uStack_54;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40073bf2.
 * REA evidence: ev_ad33929312d4a60356a635044ad36f8fba1e5630c188538f238aa172f73a45f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40073bf2(int param_1,int param_2)

{
  if (param_1 != 0) {
    *(bool *)(param_1 + 0x522c) = param_2 != 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40073c04.
 * REA evidence: ev_9ae58bb181fbc0451e7999849fbe1b5c2a19cd68fc57b67a3a3286ec7129ea34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40073c04(int param_1,float *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  float fVar19;
  undefined8 uVar20;
  float fStack_240;
  int iStack_23c;
  int iStack_238;
  float afStack_40 [3];
  
  if ((((param_1 == 0) || (param_2 == (float *)0x0)) || (param_3 == 0)) ||
     ((*(short *)(param_1 + 0x5218) == 0 || (*(char *)(param_1 + 0x522c) == '\0')))) {
    return;
  }
  if (*(short *)(param_1 + 0x521e) != 0) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x5224);
    uVar14 = 0;
    iVar13 = param_1 + 0x4418;
    do {
      while( true ) {
        uVar15 = param_3 - uVar14;
        if (0x80 - uVar7 < param_3 - uVar14) {
          uVar15 = 0x80 - uVar7;
        }
        FUN_ram_4000305c(param_1 + (uVar7 + 0xe86) * 4,param_2 + uVar14,uVar15 << 2);
        uVar14 = uVar14 + uVar15;
        uVar15 = uVar15 + *(ushort *)(param_1 + 0x5224);
        uVar7 = uVar15 & 0xffff;
        *(short *)(param_1 + 0x5224) = (short)(uVar15 * 0x10000 >> 0x10);
        if (uVar7 == 0x80) break;
        if (param_3 <= uVar14) goto LAB_ram_40073c6c;
      }
      FUN_ram_4000305c(iVar13,param_1 + 0x3a18,0x200);
      memset((void *)(param_1 + 0x4618),0,0x200);
      FUN_ram_40073104(param_1,iVar13,param_1 + 0x4018,0);
      FUN_ram_4000305c((uint)*(ushort *)(param_1 + 0x5220) * 0x400 + 0x1c18 + param_1,
                       param_1 + 0x4018,0x400);
      uVar15 = (uint)*(ushort *)(param_1 + 0x521e);
      uVar7 = *(ushort *)(param_1 + 0x5222) + 1;
      if (uVar15 < uVar7) {
        uVar7 = uVar15;
      }
      if (uVar7 == 7) {
        FUN_ram_40072620(param_1);
      }
      else {
        uVar2 = (uint)*(ushort *)(param_1 + 0x5220);
        pfVar10 = (float *)(uVar2 * 0x400 + 0x1c18 + param_1);
        puVar8 = (undefined8 *)(param_1 + 0x20);
        puVar4 = (undefined8 *)(param_1 + 0x418);
        *(float *)(param_1 + 0x3c18) = *pfVar10 * *(float *)(param_1 + 0x18);
        *(float *)(param_1 + 0x3c1c) = pfVar10[1] * *(float *)(param_1 + 0x1c);
        pfVar5 = (float *)(param_1 + 0x3c20);
        do {
          uVar17 = *(undefined8 *)(pfVar10 + 3);
          uVar20 = *puVar8;
          fVar16 = (float)*(undefined8 *)((int)puVar8 + 4);
          puVar8 = puVar8 + 1;
          fVar19 = (float)*(undefined8 *)(pfVar10 + 2);
          pfVar5[1] = fVar19 * fVar16 + (float)uVar17 * (float)uVar20;
          *pfVar5 = fVar19 * (float)uVar20 - (float)uVar17 * fVar16;
          pfVar5 = pfVar5 + 2;
          pfVar10 = pfVar10 + 2;
        } while (puVar4 != puVar8);
        if (1 < uVar7) {
          do {
            if (uVar2 == 0) {
              uVar2 = uVar15;
            }
            uVar2 = uVar2 - 1;
            pfVar11 = (float *)(uVar2 * 0x400 + 0x1c18 + param_1);
            pfVar5 = pfVar11 + 2;
            *(float *)(param_1 + 0x3c18) = *pfVar11 * (float)*puVar4 + *(float *)(param_1 + 0x3c18);
            *(float *)(param_1 + 0x3c1c) =
                 pfVar11[1] * (float)*(undefined8 *)((int)puVar4 + 4) + *(float *)(param_1 + 0x3c1c)
            ;
            pfVar10 = (float *)(param_1 + 0x3c20);
            puVar8 = puVar4;
            do {
              uVar20 = *(undefined8 *)(pfVar5 + 1);
              uVar17 = *(undefined8 *)pfVar5;
              fVar16 = (float)puVar8[1];
              fVar19 = (float)*(undefined8 *)((int)puVar8 + 0xc);
              pfVar5 = pfVar5 + 2;
              pfVar10[1] = (float)*(undefined8 *)(pfVar10 + 1) +
                           (float)uVar17 * fVar19 + (float)uVar20 * fVar16;
              *pfVar10 = (float)*(undefined8 *)pfVar10 +
                         ((float)uVar17 * fVar16 - (float)uVar20 * fVar19);
              pfVar10 = pfVar10 + 2;
              puVar8 = puVar8 + 1;
            } while (pfVar11 + 0x100 != pfVar5);
            puVar4 = puVar4 + 0x80;
          } while ((undefined8 *)(param_1 + 0x18 + uVar7 * 0x400) != puVar4);
        }
      }
      FUN_ram_40073104(param_1,param_1 + 0x3c18,iVar13,1);
      puVar9 = (ulonglong *)(param_1 + 0x3818);
      puVar4 = (undefined8 *)(param_1 + 0x4418);
      pfVar10 = &fStack_240;
      do {
        uVar20 = *puVar4;
        uVar18 = *puVar9;
        pfVar5 = pfVar10 + 1;
        *puVar9 = (ulonglong)*(uint *)(puVar4 + 0x40);
        puVar4 = (undefined8 *)((int)puVar4 + 4);
        puVar9 = (ulonglong *)((int)puVar9 + 4);
        *pfVar10 = (float)uVar20 + (float)uVar18;
        pfVar10 = pfVar5;
      } while (afStack_40 != pfVar5);
      uVar6 = *(short *)(param_1 + 0x5220) + 1;
      *(ushort *)(param_1 + 0x5220) = uVar6;
      if ((uint)*(ushort *)(param_1 + 0x521e) <= (uint)uVar6) {
        *(undefined2 *)(param_1 + 0x5220) = 0;
      }
      uVar7 = *(ushort *)(param_1 + 0x5222) + 1;
      if (uVar7 < *(ushort *)(param_1 + 0x521e)) {
        *(short *)(param_1 + 0x5222) = (short)uVar7;
      }
      uVar6 = *(ushort *)(param_1 + 0x5228);
      uVar2 = *(ushort *)(param_1 + 0x522a) + 0x80;
      uVar15 = 0x100 - uVar6;
      uVar7 = 0x100;
      if (0xff < uVar2) {
        uVar7 = uVar2;
      }
      uVar12 = 0x80;
      if (uVar15 < 0x81) {
        uVar12 = uVar15;
      }
      if (uVar7 - 0x100 != 0) {
        *(ushort *)(param_1 + 0x5226) = *(short *)(param_1 + 0x5226) + (short)(uVar7 - 0x100) & 0xff
        ;
      }
      FUN_ram_4000305c(param_1 + (uVar6 + 0x1206) * 4,&fStack_240,uVar12 * 4);
      if (uVar15 < 0x80) {
        FUN_ram_4000305c(param_1 + 0x4818,&fStack_240 + uVar12,(0x80 - uVar12) * 4);
      }
      uVar3 = (undefined2)(uVar2 * 0x10000 >> 0x10);
      if (0x100 < uVar2) {
        uVar3 = 0x100;
      }
      *(ushort *)(param_1 + 0x5228) = uVar6 + 0x80 & 0xff;
      *(undefined2 *)(param_1 + 0x522a) = uVar3;
      *(undefined2 *)(param_1 + 0x5224) = 0;
      uVar7 = 0;
    } while (uVar14 < param_3);
  }
LAB_ram_40073c6c:
  iStack_23c = param_1 + 0x4e18;
  iStack_238 = param_1 + 0x4c18;
  fStack_240._0_2_ = 0x80;
  FUN_ram_40090858(&fStack_240,param_2,param_2,param_3);
  uVar6 = *(ushort *)(param_1 + 0x522a);
  uVar1 = *(ushort *)(param_1 + 0x5226);
  if (uVar6 <= param_3) {
    param_3 = (uint)uVar6;
  }
  uVar7 = 0x100 - uVar1;
  if (param_3 <= uVar7) {
    uVar7 = param_3;
  }
  if (uVar7 != 0) {
    puVar4 = (undefined8 *)(param_1 + (uVar1 + 0x1206) * 4);
    pfVar10 = param_2;
    do {
      uVar20 = *puVar4;
      pfVar5 = pfVar10 + 1;
      puVar4 = (undefined8 *)((int)puVar4 + 4);
      *pfVar10 = (float)*(undefined8 *)pfVar10 + (float)uVar20;
      pfVar10 = pfVar5;
    } while (param_2 + uVar7 != pfVar5);
  }
  if (uVar7 < param_3) {
    puVar4 = (undefined8 *)(param_1 + 0x4818);
    pfVar10 = param_2 + uVar7;
    do {
      uVar20 = *puVar4;
      pfVar5 = pfVar10 + 1;
      puVar4 = (undefined8 *)((int)puVar4 + 4);
      *pfVar10 = (float)*(undefined8 *)pfVar10 + (float)uVar20;
      pfVar10 = pfVar5;
    } while (param_2 + param_3 != pfVar5);
  }
  *(ushort *)(param_1 + 0x522a) = uVar6 - (short)param_3;
  *(ushort *)(param_1 + 0x5226) = (short)param_3 + uVar1 & 0xff;
  return;
}


