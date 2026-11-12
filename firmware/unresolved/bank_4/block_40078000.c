/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40078000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400781c8.
 * REA evidence: ev_44924f7a9015bebad017130661461e0b9bab2b8445a94f9fb4cf15afcd67fe79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400781c8(float *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  ushort uVar16;
  undefined2 uVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  fVar34 = DAT_ram_40093094;
  uVar25 = *(ulonglong *)param_1;
  if ((float)uVar25 <= DAT_ram_40093094) {
    uVar25 = (ulonglong)DAT_ram_400980e0;
  }
  cVar1 = *(char *)((int)param_1 + 0x25);
  *(ulonglong *)param_1 = uVar25;
  fVar4 = DAT_ram_40092864;
  fVar24 = (float)uVar25;
  if (cVar1 != '\0') {
    fVar33 = DAT_ram_400930f0;
    if (*(char *)(param_1 + 6) == '\0') {
      fVar33 = DAT_ram_4009281c;
    }
    fVar31 = fVar24 / DAT_ram_40092878;
    iVar14 = 0;
    pfVar18 = param_1 + 0x12;
    do {
      fVar26 = (float)(int)(&DAT_ram_40098f60)[iVar14] * fVar31 * fVar33;
      if (0.0 <= fVar26) {
        iVar13 = (int)(fVar26 + fVar4);
        if (iVar13 < 0x201) goto LAB_ram_4007881a;
LAB_ram_40078da4:
        iVar13 = 0x200;
      }
      else {
        iVar13 = (int)(fVar26 - fVar4);
        if (0x200 < iVar13) goto LAB_ram_40078da4;
LAB_ram_4007881a:
        if (iVar13 < 1) {
          iVar13 = 1;
        }
      }
      *(short *)((int)param_1 + iVar14 * 2 + 0x2048) = (short)iVar13;
      *(undefined2 *)((int)param_1 + iVar14 * 2 + 0x2050) = 0;
      pvVar12 = memset(pfVar18,0,iVar13 << 2);
      iVar14 = iVar14 + 1;
      pfVar18 = (float *)((int)pvVar12 + 0x800);
    } while (iVar14 != 4);
    pfVar23 = (float *)&DAT_ram_40098f70;
    pfVar18 = param_1 + 0x1416;
    pfVar21 = param_1 + 0x816;
    do {
      fVar31 = (fVar24 * *pfVar23) / fVar34;
      if (0.0 <= fVar31) {
        fVar31 = fVar31 + fVar4;
      }
      else {
        fVar31 = fVar31 - fVar4;
      }
      iVar14 = (int)fVar31;
      if (iVar14 < 0x401) {
        if (iVar14 < 1) {
          iVar14 = 1;
        }
      }
      else {
        iVar14 = 0x400;
      }
      *(short *)pfVar18 = (short)iVar14;
      *(undefined2 *)((int)pfVar18 + 6) = 0;
      pfVar22 = pfVar21 + 0x400;
      memset(pfVar21,0,iVar14 << 2);
      pfVar23 = pfVar23 + 1;
      pfVar18 = (float *)((int)pfVar18 + 2);
      pfVar21 = pfVar22;
    } while (param_1 + 0x1416 != pfVar22);
    fVar31 = (fVar33 * DAT_ram_40093664 * fVar24) / fVar34;
    if (0.0 <= fVar31) {
      fVar31 = fVar31 + fVar4;
    }
    else {
      fVar31 = fVar31 - fVar4;
    }
    uVar19 = (int)fVar31 + (uint)(((int)fVar31 & 1U) == 0);
    if ((int)uVar19 < 1) {
      uVar19 = 1;
    }
    param_1[0xc31a] = (float)(int)uVar19;
    if ((uVar19 & 0xffff) == 0) {
      uVar19 = 1;
    }
    fVar31 = (fVar33 * DAT_ram_400930ec * fVar24) / fVar34;
    if (0.0 <= fVar31) {
      fVar31 = fVar31 + fVar4;
    }
    else {
      fVar31 = fVar31 - fVar4;
    }
    uVar20 = (int)fVar31 + (uint)(((int)fVar31 & 1U) == 0);
    if ((int)uVar20 < 1) {
      uVar20 = 1;
    }
    param_1[0xc31b] = (float)(int)uVar20;
    if ((uVar20 & 0xffff) < (uVar19 & 0xffff)) {
      uVar20 = uVar19 & 0xffff;
    }
    fVar31 = (fVar33 * DAT_ram_40098ee4 * fVar24) / fVar34;
    if (0.0 <= fVar31) {
      fVar31 = fVar31 + fVar4;
    }
    else {
      fVar31 = fVar31 - fVar4;
    }
    uVar19 = (int)fVar31 + (uint)(((int)fVar31 & 1U) == 0);
    if ((int)uVar19 < 1) {
      uVar19 = 1;
    }
    param_1[0xc31c] = (float)(int)uVar19;
    if ((uVar19 & 0xffff) < (uVar20 & 0xffff)) {
      uVar19 = uVar20 & 0xffff;
    }
    fVar31 = (fVar33 * DAT_ram_40098ee8 * fVar24) / fVar34;
    if (0.0 <= fVar31) {
      fVar31 = fVar31 + fVar4;
    }
    else {
      fVar31 = fVar31 - fVar4;
    }
    uVar20 = (int)fVar31 + (uint)(((int)fVar31 & 1U) == 0);
    if ((int)uVar20 < 1) {
      uVar20 = 1;
    }
    param_1[0xc31d] = (float)(int)uVar20;
    if ((uVar20 & 0xffff) < (uVar19 & 0xffff)) {
      uVar20 = uVar19 & 0xffff;
    }
    fVar31 = (fVar33 * DAT_ram_40098eec * fVar24) / fVar34;
    if (0.0 <= fVar31) {
      fVar31 = fVar31 + fVar4;
    }
    else {
      fVar31 = fVar31 - fVar4;
    }
    uVar19 = (int)fVar31 + (uint)(((int)fVar31 & 1U) == 0);
    if ((int)uVar19 < 1) {
      uVar19 = 1;
    }
    param_1[0xc31e] = (float)(int)uVar19;
    if ((uVar19 & 0xffff) < (uVar20 & 0xffff)) {
      uVar19 = uVar20 & 0xffff;
    }
    fVar31 = (fVar33 * DAT_ram_400934e8 * fVar24) / fVar34;
    if (0.0 <= fVar31) {
      fVar31 = fVar31 + fVar4;
    }
    else {
      fVar31 = fVar31 - fVar4;
    }
    uVar20 = (int)fVar31 + (uint)(((int)fVar31 & 1U) == 0);
    if ((int)uVar20 < 1) {
      uVar20 = 1;
    }
    param_1[0xc31f] = (float)(int)uVar20;
    if ((uVar20 & 0xffff) < (uVar19 & 0xffff)) {
      uVar20 = uVar19 & 0xffff;
    }
    fVar31 = (fVar33 * DAT_ram_40098ef0 * fVar24) / fVar34;
    if (0.0 <= fVar31) {
      fVar31 = fVar31 + fVar4;
    }
    else {
      fVar31 = fVar31 - fVar4;
    }
    uVar19 = (int)fVar31 + (uint)(((int)fVar31 & 1U) == 0);
    if ((int)uVar19 < 1) {
      uVar19 = 1;
    }
    param_1[0xc320] = (float)(int)uVar19;
    if ((uVar19 & 0xffff) < (uVar20 & 0xffff)) {
      uVar19 = uVar20 & 0xffff;
    }
    fVar33 = (fVar33 * DAT_ram_40094224 * fVar24) / fVar34;
    if (0.0 <= fVar33) {
      fVar33 = fVar33 + fVar4;
    }
    else {
      fVar33 = fVar33 - fVar4;
    }
    uVar20 = (int)fVar33 + (uint)(((int)fVar33 & 1U) == 0);
    if ((int)uVar20 < 1) {
      uVar20 = 1;
    }
    param_1[0xc321] = (float)(int)uVar20;
    if ((uVar20 & 0xffff) < (uVar19 & 0xffff)) {
      uVar20 = uVar19 & 0xffff;
    }
    uVar20 = uVar20 + 0x40;
    if ((uVar20 & 0xffff) == 0) {
      uVar20 = 1;
    }
    uVar17 = (short)uVar20;
    if (0x15e0 < (uVar20 & 0xffff)) {
      uVar17 = 0x15e0;
    }
    *(undefined2 *)(param_1 + 0xc319) = uVar17;
    memset(param_1 + 0xc32a,0,0x20);
    fVar11 = DAT_ram_40098f2c;
    fVar10 = DAT_ram_40098f28;
    fVar9 = DAT_ram_40098f24;
    fVar8 = DAT_ram_40098f20;
    fVar7 = DAT_ram_40098f1c;
    fVar6 = DAT_ram_40098f18;
    fVar35 = DAT_ram_40098f14;
    fVar5 = DAT_ram_40098f10;
    fVar28 = DAT_ram_40098f0c;
    fVar29 = DAT_ram_40098f08;
    fVar27 = DAT_ram_40098f04;
    fVar30 = DAT_ram_40098f00;
    fVar26 = DAT_ram_40098efc;
    fVar31 = DAT_ram_40098ef8;
    fVar33 = DAT_ram_40098ef4;
    param_1[0xc339] = DAT_ram_40098f30;
    param_1[0xc342] = fVar33;
    param_1[0xc332] = fVar31;
    param_1[0xc343] = fVar26;
    param_1[0xc333] = fVar30;
    param_1[0xc344] = fVar27;
    param_1[0xc334] = fVar29;
    param_1[0xc345] = fVar28;
    param_1[0xc335] = fVar5;
    param_1[0xc346] = fVar35;
    param_1[0xc336] = fVar6;
    param_1[0xc347] = fVar7;
    param_1[0xc337] = fVar8;
    param_1[0xc348] = fVar9;
    param_1[0xc338] = fVar10;
    param_1[0xc349] = fVar11;
    _DAT_ram_30082bd4 = 0x83c6b450;
    uVar25 = (ulonglong)DAT_ram_40092818;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0xff;
    *(ulonglong *)(param_1 + 10) = uVar25;
    *(ulonglong *)(param_1 + 0xc) = uVar25;
    param_1[0xe] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0x11] = 0.0;
    if (*(ushort *)(param_1 + 0x812) != 0) {
      memset(param_1 + 0x12,0,(uint)*(ushort *)(param_1 + 0x812) << 2);
    }
    *(undefined2 *)(param_1 + 0x814) = 0;
    if (*(ushort *)((int)param_1 + 0x204a) != 0) {
      memset(param_1 + 0x212,0,(uint)*(ushort *)((int)param_1 + 0x204a) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x2052) = 0;
    if (*(ushort *)(param_1 + 0x813) != 0) {
      memset(param_1 + 0x412,0,(uint)*(ushort *)(param_1 + 0x813) << 2);
    }
    *(undefined2 *)(param_1 + 0x815) = 0;
    if (*(ushort *)((int)param_1 + 0x204e) != 0) {
      memset(param_1 + 0x612,0,(uint)*(ushort *)((int)param_1 + 0x204e) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x2056) = 0;
    if (*(ushort *)(param_1 + 0x1416) != 0) {
      memset(param_1 + 0x816,0,(uint)*(ushort *)(param_1 + 0x1416) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x505e) = 0;
    if (*(ushort *)((int)param_1 + 0x505a) != 0) {
      memset(param_1 + 0xc16,0,(uint)*(ushort *)((int)param_1 + 0x505a) << 2);
    }
    *(undefined2 *)(param_1 + 0x1418) = 0;
    if (*(ushort *)(param_1 + 0x1417) != 0) {
      memset(param_1 + 0x1016,0,(uint)*(ushort *)(param_1 + 0x1417) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x5062) = 0;
    if (*(ushort *)(param_1 + 0xc319) == 0) {
      param_1[0xc32a] = 0.0;
      iVar14 = 1;
LAB_ram_40078d50:
      memset(param_1 + iVar14 + 0xc32a,0,(8 - iVar14) * 4);
    }
    else {
      memset(param_1 + 0x1419,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32a] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32b] = 0.0;
        iVar14 = 2;
        goto LAB_ram_40078d50;
      }
      memset(param_1 + 0x29f9,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32b] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32c] = 0.0;
        iVar14 = 3;
        goto LAB_ram_40078d50;
      }
      memset(param_1 + 0x3fd9,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32c] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32d] = 0.0;
        iVar14 = 4;
        goto LAB_ram_40078d50;
      }
      memset(param_1 + 0x55b9,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32d] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32e] = 0.0;
        iVar14 = 5;
        goto LAB_ram_40078d50;
      }
      memset(param_1 + 0x6b99,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32e] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32f] = 0.0;
        iVar14 = 6;
        goto LAB_ram_40078d50;
      }
      memset(param_1 + 0x8179,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32f] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc330] = 0.0;
        iVar14 = 7;
        goto LAB_ram_40078d50;
      }
      memset(param_1 + 0x9759,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc330] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) != 0) {
        memset(param_1 + 0xad39,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      }
      param_1[0xc331] = 0.0;
    }
    *(undefined2 *)((int)param_1 + 0x30c66) = 0;
    memset(param_1 + 0xc36e,0,0x4000);
    *(undefined2 *)(param_1 + 0xd36e) = 0;
    *(undefined2 *)((int)param_1 + 0x30daa) = 0;
  }
  fVar26 = (float)FUN_ram_400008b8(DAT_ram_400930f4,
                                   (float)*(undefined8 *)(param_1 + 1) * DAT_ram_40098f34);
  fVar31 = DAT_ram_4009286c;
  fVar33 = param_1[2];
  if (fVar33 < 0.0) {
    fVar33 = 0.0;
  }
  else if (DAT_ram_4009281c < fVar33) {
    fVar30 = (float)*(undefined8 *)(param_1 + 4);
    fVar33 = DAT_ram_4009281c;
    goto joined_r0x40078266;
  }
  fVar30 = (float)*(undefined8 *)(param_1 + 4);
joined_r0x40078266:
  if (fVar30 < 0.0) {
    fVar30 = 0.0;
    fVar27 = (float)*(undefined8 *)(param_1 + 5);
    cVar2 = *(char *)(param_1 + 8);
  }
  else {
    if (DAT_ram_4009286c < fVar30) {
      fVar30 = DAT_ram_4009286c;
    }
    cVar2 = *(char *)(param_1 + 8);
    fVar27 = (float)*(undefined8 *)(param_1 + 5);
  }
  fVar29 = DAT_ram_40098edc;
  if ((DAT_ram_400934b8 <= fVar27) && (fVar29 = DAT_ram_40098ed8, fVar27 <= DAT_ram_400930a4)) {
    fVar27 = (float)FUN_ram_40000d54(DAT_ram_400930a4,-fVar27 / DAT_ram_400930b0);
    fVar27 = fVar27 * DAT_ram_400930dc;
    fVar29 = DAT_ram_40098ed8;
    if ((DAT_ram_4009424c <= fVar27) && (fVar29 = DAT_ram_40098ee0, fVar27 <= DAT_ram_40098f38)) {
      fVar29 = fVar27 * DAT_ram_4009810c;
    }
  }
  fVar5 = DAT_ram_4009810c;
  fVar27 = fVar33 * DAT_ram_40098f3c + DAT_ram_400934f0;
  fVar28 = fVar24 * DAT_ram_4009824c;
  fVar35 = DAT_ram_400934bc;
  if ((DAT_ram_400934bc <= fVar27) && (fVar35 = fVar27, fVar28 < fVar27)) {
    fVar35 = fVar28;
  }
  fVar33 = fVar33 * DAT_ram_40098f40 + DAT_ram_40098f44;
  fVar27 = DAT_ram_400934c0;
  if ((DAT_ram_400934c0 <= fVar33) && (fVar27 = fVar33, fVar28 < fVar33)) {
    fVar27 = fVar28;
  }
  uVar32 = FUN_ram_40000c0e(fVar29 / fVar24);
  *(undefined8 *)(param_1 + 0xd) = uVar32;
  uVar32 = FUN_ram_40000c0e((fVar35 * fVar5) / fVar24);
  *(undefined8 *)(param_1 + 0x10) = uVar32;
  fVar28 = (float)FUN_ram_40000c0e((fVar27 * fVar5) / fVar24);
  fVar29 = DAT_ram_40098f48;
  fVar27 = DAT_ram_40098288;
  fVar33 = DAT_ram_400930d8;
  param_1[0xc36b] = fVar28;
  fVar33 = (fVar30 / fVar31) * fVar27 + fVar33;
  param_1[0xc36c] = (fVar30 / fVar31) * fVar29;
  fVar27 = DAT_ram_40098108;
  fVar30 = DAT_ram_400930a4;
  fVar31 = DAT_ram_4009281c;
  if (((float)*(undefined8 *)(param_1 + 10) != fVar26) || (*(char *)(param_1 + 0xb) != cVar2)) {
    if (cVar2 == '\0') {
      pfVar18 = param_1 + 0xc31a;
      do {
        pfVar21 = pfVar18 + 1;
        uVar32 = FUN_ram_40000d54(fVar30,((float)*(undefined8 *)pfVar18 * fVar27) /
                                         (fVar24 * fVar26));
        *(undefined8 *)(pfVar18 + 8) = uVar32;
        pfVar18 = pfVar21;
      } while (param_1 + 0xc322 != pfVar21);
    }
    else {
      param_1[0xc322] = DAT_ram_4009281c;
      param_1[0xc323] = fVar31;
      param_1[0xc324] = fVar31;
      param_1[0xc325] = fVar31;
      param_1[0xc326] = fVar31;
      param_1[0xc327] = fVar31;
      param_1[0xc328] = fVar31;
      param_1[0xc329] = fVar31;
    }
    param_1[10] = fVar26;
    *(char *)(param_1 + 0xb) = cVar2;
  }
  fVar26 = DAT_ram_400980f4;
  fVar31 = DAT_ram_4009281c;
  if ((cVar1 != '\0') || ((float)*(undefined8 *)(param_1 + 0xc) != fVar33)) {
    cVar3 = *(char *)(param_1 + 0xc36a);
    if ((fVar33 <= 0.0) || (param_1[0xc36c] <= 0.0)) {
      memset(param_1 + 0xc33a,0,0x20);
      memset(param_1 + 0xc34a,0,0x20);
      fVar31 = DAT_ram_4009281c;
      param_1[0xc352] = DAT_ram_4009281c;
      param_1[0xc353] = fVar31;
      param_1[0xc354] = fVar31;
      param_1[0xc355] = fVar31;
      param_1[0xc356] = fVar31;
      param_1[0xc357] = fVar31;
      param_1[0xc358] = fVar31;
      param_1[0xc359] = fVar31;
      memset(param_1 + 0xc35a,0,0x20);
      cVar15 = '\0';
      param_1[0xc362] = fVar31;
      param_1[0xc363] = fVar31;
      param_1[0xc364] = fVar31;
      param_1[0xc365] = fVar31;
      param_1[0xc366] = fVar31;
      param_1[0xc367] = fVar31;
      param_1[0xc368] = fVar31;
      param_1[0xc369] = fVar31;
      *(undefined1 *)(param_1 + 0xc36a) = 0;
    }
    else {
      fVar27 = *param_1;
      fVar30 = ((param_1[0xc342] + DAT_ram_4009281c) * fVar33 * DAT_ram_400980f4) / fVar27;
      param_1[0xc33a] = fVar30;
      if ((cVar1 == '\0') && (cVar3 != '\0')) {
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35a] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc362] = fVar30;
        fVar30 = ((param_1[0xc343] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33b] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35b] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc363] = fVar30;
        fVar30 = ((param_1[0xc344] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33c] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35c] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc364] = fVar30;
        fVar30 = ((param_1[0xc345] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33d] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35d] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc365] = fVar30;
        fVar30 = ((param_1[0xc346] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33e] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35e] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc366] = fVar30;
        fVar30 = ((param_1[0xc347] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33f] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35f] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc367] = fVar30;
        fVar30 = ((param_1[0xc348] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc340] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc360] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc368] = fVar30;
        fVar27 = ((param_1[0xc349] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc341] = fVar27;
        fVar31 = (float)FUN_ram_40000a08(fVar27);
        param_1[0xc361] = fVar31;
        fVar31 = (float)FUN_ram_40000786(fVar27);
        param_1[0xc369] = fVar31;
      }
      else {
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35a] = fVar29;
        fVar29 = (float)FUN_ram_40000786(fVar30);
        fVar30 = param_1[0xc332];
        param_1[0xc362] = fVar29;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc34a] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc352] = fVar30;
        fVar30 = ((param_1[0xc343] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33b] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35b] = fVar29;
        fVar29 = (float)FUN_ram_40000786(fVar30);
        fVar30 = param_1[0xc333];
        param_1[0xc363] = fVar29;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc34b] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc353] = fVar30;
        fVar30 = ((param_1[0xc344] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33c] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35c] = fVar29;
        fVar29 = (float)FUN_ram_40000786(fVar30);
        fVar30 = param_1[0xc334];
        param_1[0xc364] = fVar29;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc34c] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc354] = fVar30;
        fVar30 = ((param_1[0xc345] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33d] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35d] = fVar29;
        fVar29 = (float)FUN_ram_40000786(fVar30);
        fVar30 = param_1[0xc335];
        param_1[0xc365] = fVar29;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc34d] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc355] = fVar30;
        fVar30 = ((param_1[0xc346] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33e] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35e] = fVar29;
        fVar29 = (float)FUN_ram_40000786(fVar30);
        fVar30 = param_1[0xc336];
        param_1[0xc366] = fVar29;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc34e] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc356] = fVar30;
        fVar30 = ((param_1[0xc347] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc33f] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc35f] = fVar29;
        fVar29 = (float)FUN_ram_40000786(fVar30);
        fVar30 = param_1[0xc337];
        param_1[0xc367] = fVar29;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[49999] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc357] = fVar30;
        fVar30 = ((param_1[0xc348] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc340] = fVar30;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[0xc360] = fVar29;
        fVar29 = (float)FUN_ram_40000786(fVar30);
        fVar30 = param_1[0xc338];
        param_1[0xc368] = fVar29;
        fVar29 = (float)FUN_ram_40000a08(fVar30);
        param_1[50000] = fVar29;
        fVar30 = (float)FUN_ram_40000786(fVar30);
        param_1[0xc358] = fVar30;
        fVar27 = ((param_1[0xc349] + fVar31) * fVar33 * fVar26) / fVar27;
        param_1[0xc341] = fVar27;
        fVar31 = (float)FUN_ram_40000a08(fVar27);
        param_1[0xc361] = fVar31;
        fVar26 = (float)FUN_ram_40000786(fVar27);
        fVar31 = param_1[0xc339];
        param_1[0xc369] = fVar26;
        fVar26 = (float)FUN_ram_40000a08(fVar31);
        param_1[0xc351] = fVar26;
        fVar31 = (float)FUN_ram_40000786(fVar31);
        param_1[0xc359] = fVar31;
      }
      *(undefined1 *)(param_1 + 0xc36a) = 1;
      cVar15 = '\x01';
    }
    if ((cVar1 != '\0') || (cVar15 != cVar3)) {
      *(undefined2 *)((int)param_1 + 0x30daa) = 0;
    }
    *(ulonglong *)(param_1 + 0xc) = (ulonglong)(uint)fVar33;
  }
  if (cVar2 != '\0') {
    param_1[0xc36b] = 0.0;
  }
  fVar33 = (float)*(undefined8 *)(param_1 + 3);
  if (fVar33 < 0.0) {
    fVar33 = 0.0;
  }
  else if (DAT_ram_400934e8 < fVar33) {
    fVar33 = DAT_ram_400934e8;
  }
  fVar34 = (fVar24 * fVar33) / fVar34;
  if (0.0 <= fVar34) {
    fVar34 = fVar34 + fVar4;
  }
  else {
    fVar34 = fVar34 - fVar4;
  }
  iVar14 = (int)fVar34;
  uVar16 = (short)~(ushort)((uint)iVar14 >> 0x10) >> 0xf & (ushort)iVar14;
  fVar34 = (float)*(undefined8 *)(param_1 + 7);
  if (0x1000 < iVar14) {
    uVar16 = 0x1000;
  }
  *(ushort *)((int)param_1 + 0x34dba) = uVar16;
  if (fVar34 < 0.0) {
    fVar34 = 0.0;
  }
  else if (DAT_ram_4009281c < fVar34) {
    fVar34 = DAT_ram_4009281c;
  }
  param_1[0xc36d] = fVar34;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


