/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4007e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4007e018.
 * REA evidence: ev_2d25ce3a37d0d448e3234800fa8b877e8eaee1dca793a947f53849e9924f407c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4007e018(float *param_1)

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
  int iVar12;
  int iVar13;
  char cVar14;
  ushort uVar15;
  undefined2 uVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  fVar33 = DAT_ram_40094e80;
  uVar24 = *(ulonglong *)param_1;
  if ((float)uVar24 <= DAT_ram_40094e80) {
    uVar24 = (ulonglong)DAT_ram_40099f80;
  }
  cVar1 = *(char *)((int)param_1 + 0x25);
  *(ulonglong *)param_1 = uVar24;
  fVar4 = DAT_ram_40094634;
  fVar23 = (float)uVar24;
  if (cVar1 != '\0') {
    fVar32 = DAT_ram_40094edc;
    if (*(char *)(param_1 + 6) == '\0') {
      fVar32 = DAT_ram_40094604;
    }
    fVar30 = fVar23 / DAT_ram_40094664;
    iVar13 = 0;
    pfVar17 = param_1 + 0x12;
    do {
      fVar25 = (float)(int)(&DAT_ram_4009af7c)[iVar13] * fVar30 * fVar32;
      if (0.0 <= fVar25) {
        iVar12 = (int)(fVar25 + fVar4);
        if (iVar12 < 0x201) goto LAB_ram_4007e66a;
LAB_ram_4007ebf4:
        iVar12 = 0x200;
      }
      else {
        iVar12 = (int)(fVar25 - fVar4);
        if (0x200 < iVar12) goto LAB_ram_4007ebf4;
LAB_ram_4007e66a:
        if (iVar12 < 1) {
          iVar12 = 1;
        }
      }
      *(short *)((int)param_1 + iVar13 * 2 + 0x2048) = (short)iVar12;
      *(undefined2 *)((int)param_1 + iVar13 * 2 + 0x2050) = 0;
      iVar12 = memset(pfVar17,0,iVar12 << 2);
      iVar13 = iVar13 + 1;
      pfVar17 = (float *)(iVar12 + 0x800);
    } while (iVar13 != 4);
    pfVar22 = (float *)&DAT_ram_4009af8c;
    pfVar17 = param_1 + 0x1416;
    pfVar20 = param_1 + 0x816;
    do {
      fVar30 = (fVar23 * *pfVar22) / fVar33;
      if (0.0 <= fVar30) {
        fVar30 = fVar30 + fVar4;
      }
      else {
        fVar30 = fVar30 - fVar4;
      }
      iVar13 = (int)fVar30;
      if (iVar13 < 0x401) {
        if (iVar13 < 1) {
          iVar13 = 1;
        }
      }
      else {
        iVar13 = 0x400;
      }
      *(short *)pfVar17 = (short)iVar13;
      *(undefined2 *)((int)pfVar17 + 6) = 0;
      pfVar21 = pfVar20 + 0x400;
      memset(pfVar20,0,iVar13 << 2);
      pfVar22 = pfVar22 + 1;
      pfVar17 = (float *)((int)pfVar17 + 2);
      pfVar20 = pfVar21;
    } while (param_1 + 0x1416 != pfVar21);
    fVar30 = (fVar32 * DAT_ram_40095450 * fVar23) / fVar33;
    if (0.0 <= fVar30) {
      fVar30 = fVar30 + fVar4;
    }
    else {
      fVar30 = fVar30 - fVar4;
    }
    uVar18 = (int)fVar30 + (uint)(((int)fVar30 & 1U) == 0);
    if ((int)uVar18 < 1) {
      uVar18 = 1;
    }
    param_1[0xc31a] = (float)(int)uVar18;
    if ((uVar18 & 0xffff) == 0) {
      uVar18 = 1;
    }
    fVar30 = (fVar32 * DAT_ram_40094ed8 * fVar23) / fVar33;
    if (0.0 <= fVar30) {
      fVar30 = fVar30 + fVar4;
    }
    else {
      fVar30 = fVar30 - fVar4;
    }
    uVar19 = (int)fVar30 + (uint)(((int)fVar30 & 1U) == 0);
    if ((int)uVar19 < 1) {
      uVar19 = 1;
    }
    param_1[0xc31b] = (float)(int)uVar19;
    if ((uVar19 & 0xffff) < (uVar18 & 0xffff)) {
      uVar19 = uVar18 & 0xffff;
    }
    fVar30 = (fVar32 * DAT_ram_4009af00 * fVar23) / fVar33;
    if (0.0 <= fVar30) {
      fVar30 = fVar30 + fVar4;
    }
    else {
      fVar30 = fVar30 - fVar4;
    }
    uVar18 = (int)fVar30 + (uint)(((int)fVar30 & 1U) == 0);
    if ((int)uVar18 < 1) {
      uVar18 = 1;
    }
    param_1[0xc31c] = (float)(int)uVar18;
    if ((uVar18 & 0xffff) < (uVar19 & 0xffff)) {
      uVar18 = uVar19 & 0xffff;
    }
    fVar30 = (fVar32 * DAT_ram_4009af04 * fVar23) / fVar33;
    if (0.0 <= fVar30) {
      fVar30 = fVar30 + fVar4;
    }
    else {
      fVar30 = fVar30 - fVar4;
    }
    uVar19 = (int)fVar30 + (uint)(((int)fVar30 & 1U) == 0);
    if ((int)uVar19 < 1) {
      uVar19 = 1;
    }
    param_1[0xc31d] = (float)(int)uVar19;
    if ((uVar19 & 0xffff) < (uVar18 & 0xffff)) {
      uVar19 = uVar18 & 0xffff;
    }
    fVar30 = (fVar32 * DAT_ram_4009af08 * fVar23) / fVar33;
    if (0.0 <= fVar30) {
      fVar30 = fVar30 + fVar4;
    }
    else {
      fVar30 = fVar30 - fVar4;
    }
    uVar18 = (int)fVar30 + (uint)(((int)fVar30 & 1U) == 0);
    if ((int)uVar18 < 1) {
      uVar18 = 1;
    }
    param_1[0xc31e] = (float)(int)uVar18;
    if ((uVar18 & 0xffff) < (uVar19 & 0xffff)) {
      uVar18 = uVar19 & 0xffff;
    }
    fVar30 = (fVar32 * DAT_ram_400952d4 * fVar23) / fVar33;
    if (0.0 <= fVar30) {
      fVar30 = fVar30 + fVar4;
    }
    else {
      fVar30 = fVar30 - fVar4;
    }
    uVar19 = (int)fVar30 + (uint)(((int)fVar30 & 1U) == 0);
    if ((int)uVar19 < 1) {
      uVar19 = 1;
    }
    param_1[0xc31f] = (float)(int)uVar19;
    if ((uVar19 & 0xffff) < (uVar18 & 0xffff)) {
      uVar19 = uVar18 & 0xffff;
    }
    fVar30 = (fVar32 * DAT_ram_4009af0c * fVar23) / fVar33;
    if (0.0 <= fVar30) {
      fVar30 = fVar30 + fVar4;
    }
    else {
      fVar30 = fVar30 - fVar4;
    }
    uVar18 = (int)fVar30 + (uint)(((int)fVar30 & 1U) == 0);
    if ((int)uVar18 < 1) {
      uVar18 = 1;
    }
    param_1[0xc320] = (float)(int)uVar18;
    if ((uVar18 & 0xffff) < (uVar19 & 0xffff)) {
      uVar18 = uVar19 & 0xffff;
    }
    fVar32 = (fVar32 * DAT_ram_4009604c * fVar23) / fVar33;
    if (0.0 <= fVar32) {
      fVar32 = fVar32 + fVar4;
    }
    else {
      fVar32 = fVar32 - fVar4;
    }
    uVar19 = (int)fVar32 + (uint)(((int)fVar32 & 1U) == 0);
    if ((int)uVar19 < 1) {
      uVar19 = 1;
    }
    param_1[0xc321] = (float)(int)uVar19;
    if ((uVar19 & 0xffff) < (uVar18 & 0xffff)) {
      uVar19 = uVar18 & 0xffff;
    }
    uVar19 = uVar19 + 0x40;
    if ((uVar19 & 0xffff) == 0) {
      uVar19 = 1;
    }
    uVar16 = (short)uVar19;
    if (0x15e0 < (uVar19 & 0xffff)) {
      uVar16 = 0x15e0;
    }
    *(undefined2 *)(param_1 + 0xc319) = uVar16;
    memset(param_1 + 0xc32a,0,0x20);
    fVar11 = DAT_ram_4009af48;
    fVar10 = DAT_ram_4009af44;
    fVar9 = DAT_ram_4009af40;
    fVar8 = DAT_ram_4009af3c;
    fVar7 = DAT_ram_4009af38;
    fVar6 = DAT_ram_4009af34;
    fVar34 = DAT_ram_4009af30;
    fVar5 = DAT_ram_4009af2c;
    fVar27 = DAT_ram_4009af28;
    fVar28 = DAT_ram_4009af24;
    fVar26 = DAT_ram_4009af20;
    fVar29 = DAT_ram_4009af1c;
    fVar25 = DAT_ram_4009af18;
    fVar30 = DAT_ram_4009af14;
    fVar32 = DAT_ram_4009af10;
    param_1[0xc339] = DAT_ram_4009af4c;
    param_1[0xc342] = fVar32;
    param_1[0xc332] = fVar30;
    param_1[0xc343] = fVar25;
    param_1[0xc333] = fVar29;
    param_1[0xc344] = fVar26;
    param_1[0xc334] = fVar28;
    param_1[0xc345] = fVar27;
    param_1[0xc335] = fVar5;
    param_1[0xc346] = fVar34;
    param_1[0xc336] = fVar6;
    param_1[0xc347] = fVar7;
    param_1[0xc337] = fVar8;
    param_1[0xc348] = fVar9;
    param_1[0xc338] = fVar10;
    param_1[0xc349] = fVar11;
    _DAT_ram_30083f54 = 0x83c6b450;
    uVar24 = (ulonglong)DAT_ram_40094600;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0xff;
    *(ulonglong *)(param_1 + 10) = uVar24;
    *(ulonglong *)(param_1 + 0xc) = uVar24;
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
      iVar13 = 1;
LAB_ram_4007eba0:
      memset(param_1 + iVar13 + 0xc32a,0,(8 - iVar13) * 4);
    }
    else {
      memset(param_1 + 0x1419,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32a] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32b] = 0.0;
        iVar13 = 2;
        goto LAB_ram_4007eba0;
      }
      memset(param_1 + 0x29f9,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32b] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32c] = 0.0;
        iVar13 = 3;
        goto LAB_ram_4007eba0;
      }
      memset(param_1 + 0x3fd9,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32c] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32d] = 0.0;
        iVar13 = 4;
        goto LAB_ram_4007eba0;
      }
      memset(param_1 + 0x55b9,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32d] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32e] = 0.0;
        iVar13 = 5;
        goto LAB_ram_4007eba0;
      }
      memset(param_1 + 0x6b99,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32e] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc32f] = 0.0;
        iVar13 = 6;
        goto LAB_ram_4007eba0;
      }
      memset(param_1 + 0x8179,0,(uint)*(ushort *)(param_1 + 0xc319) << 2);
      param_1[0xc32f] = 0.0;
      if (*(ushort *)(param_1 + 0xc319) == 0) {
        param_1[0xc330] = 0.0;
        iVar13 = 7;
        goto LAB_ram_4007eba0;
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
  fVar25 = (float)FUN_ram_40000844(DAT_ram_40094ee0,
                                   (float)*(undefined8 *)(param_1 + 1) * DAT_ram_4009af50);
  fVar30 = DAT_ram_40094658;
  fVar32 = param_1[2];
  if (fVar32 < 0.0) {
    fVar32 = 0.0;
  }
  else if (DAT_ram_40094604 < fVar32) {
    fVar29 = (float)*(undefined8 *)(param_1 + 4);
    fVar32 = DAT_ram_40094604;
    goto joined_r0x4007e0b6;
  }
  fVar29 = (float)*(undefined8 *)(param_1 + 4);
joined_r0x4007e0b6:
  if (fVar29 < 0.0) {
    fVar29 = 0.0;
    fVar26 = (float)*(undefined8 *)(param_1 + 5);
    cVar2 = *(char *)(param_1 + 8);
  }
  else {
    if (DAT_ram_40094658 < fVar29) {
      fVar29 = DAT_ram_40094658;
    }
    cVar2 = *(char *)(param_1 + 8);
    fVar26 = (float)*(undefined8 *)(param_1 + 5);
  }
  fVar28 = DAT_ram_4009aef8;
  if ((DAT_ram_400952a4 <= fVar26) && (fVar28 = DAT_ram_4009aef4, fVar26 <= DAT_ram_40094e90)) {
    fVar26 = (float)FUN_ram_40000d44(DAT_ram_40094e90,-fVar26 / DAT_ram_40094e9c);
    fVar26 = fVar26 * DAT_ram_40094ec8;
    fVar28 = DAT_ram_4009aef4;
    if (((float)DAT_ram_40096074 <= fVar26) &&
       (fVar28 = DAT_ram_4009aefc, fVar26 <= DAT_ram_4009af54)) {
      fVar28 = fVar26 * DAT_ram_40099fac;
    }
  }
  fVar5 = DAT_ram_40099fac;
  fVar26 = fVar32 * DAT_ram_4009af58 + DAT_ram_400952dc;
  fVar27 = fVar23 * DAT_ram_4009a10c;
  fVar34 = DAT_ram_400952a8;
  if ((DAT_ram_400952a8 <= fVar26) && (fVar34 = fVar26, fVar27 < fVar26)) {
    fVar34 = fVar27;
  }
  fVar32 = fVar32 * DAT_ram_4009af5c + DAT_ram_4009af60;
  fVar26 = DAT_ram_400952ac;
  if ((DAT_ram_400952ac <= fVar32) && (fVar26 = fVar32, fVar27 < fVar32)) {
    fVar26 = fVar27;
  }
  uVar31 = FUN_ram_40000bd8(fVar28 / fVar23);
  *(undefined8 *)(param_1 + 0xd) = uVar31;
  uVar31 = FUN_ram_40000bd8((fVar34 * fVar5) / fVar23);
  *(undefined8 *)(param_1 + 0x10) = uVar31;
  fVar27 = (float)FUN_ram_40000bd8((fVar26 * fVar5) / fVar23);
  fVar28 = DAT_ram_4009af64;
  fVar26 = DAT_ram_4009a110;
  fVar32 = DAT_ram_40094ec4;
  param_1[0xc36b] = fVar27;
  fVar32 = (fVar29 / fVar30) * fVar26 + fVar32;
  param_1[0xc36c] = (fVar29 / fVar30) * fVar28;
  fVar26 = DAT_ram_40099fa8;
  fVar29 = DAT_ram_40094e90;
  fVar30 = DAT_ram_40094604;
  if (((float)*(undefined8 *)(param_1 + 10) != fVar25) || (*(char *)(param_1 + 0xb) != cVar2)) {
    if (cVar2 == '\0') {
      pfVar17 = param_1 + 0xc31a;
      do {
        pfVar20 = pfVar17 + 1;
        uVar31 = FUN_ram_40000d44(fVar29,((float)*(undefined8 *)pfVar17 * fVar26) /
                                         (fVar23 * fVar25));
        *(undefined8 *)(pfVar17 + 8) = uVar31;
        pfVar17 = pfVar20;
      } while (param_1 + 0xc322 != pfVar20);
    }
    else {
      param_1[0xc322] = DAT_ram_40094604;
      param_1[0xc323] = fVar30;
      param_1[0xc324] = fVar30;
      param_1[0xc325] = fVar30;
      param_1[0xc326] = fVar30;
      param_1[0xc327] = fVar30;
      param_1[0xc328] = fVar30;
      param_1[0xc329] = fVar30;
    }
    param_1[10] = fVar25;
    *(char *)(param_1 + 0xb) = cVar2;
  }
  fVar25 = DAT_ram_40099f94;
  fVar30 = DAT_ram_40094604;
  if ((cVar1 != '\0') || ((float)*(undefined8 *)(param_1 + 0xc) != fVar32)) {
    cVar3 = *(char *)(param_1 + 0xc36a);
    if ((fVar32 <= 0.0) || (param_1[0xc36c] <= 0.0)) {
      memset(param_1 + 0xc33a,0,0x20);
      memset(param_1 + 0xc34a,0,0x20);
      fVar30 = DAT_ram_40094604;
      param_1[0xc352] = DAT_ram_40094604;
      param_1[0xc353] = fVar30;
      param_1[0xc354] = fVar30;
      param_1[0xc355] = fVar30;
      param_1[0xc356] = fVar30;
      param_1[0xc357] = fVar30;
      param_1[0xc358] = fVar30;
      param_1[0xc359] = fVar30;
      memset(param_1 + 0xc35a,0,0x20);
      cVar14 = '\0';
      param_1[0xc362] = fVar30;
      param_1[0xc363] = fVar30;
      param_1[0xc364] = fVar30;
      param_1[0xc365] = fVar30;
      param_1[0xc366] = fVar30;
      param_1[0xc367] = fVar30;
      param_1[0xc368] = fVar30;
      param_1[0xc369] = fVar30;
      *(undefined1 *)(param_1 + 0xc36a) = 0;
    }
    else {
      fVar26 = *param_1;
      fVar29 = ((param_1[0xc342] + DAT_ram_40094604) * fVar32 * DAT_ram_40099f94) / fVar26;
      param_1[0xc33a] = fVar29;
      if ((cVar1 == '\0') && (cVar3 != '\0')) {
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35a] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc362] = fVar29;
        fVar29 = ((param_1[0xc343] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33b] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35b] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc363] = fVar29;
        fVar29 = ((param_1[0xc344] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33c] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35c] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc364] = fVar29;
        fVar29 = ((param_1[0xc345] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33d] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35d] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc365] = fVar29;
        fVar29 = ((param_1[0xc346] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33e] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35e] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc366] = fVar29;
        fVar29 = ((param_1[0xc347] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33f] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35f] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc367] = fVar29;
        fVar29 = ((param_1[0xc348] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc340] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc360] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc368] = fVar29;
        fVar26 = ((param_1[0xc349] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc341] = fVar26;
        fVar30 = (float)FUN_ram_400009d2(fVar26);
        param_1[0xc361] = fVar30;
        fVar30 = (float)FUN_ram_40000712(fVar26);
        param_1[0xc369] = fVar30;
      }
      else {
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35a] = fVar28;
        fVar28 = (float)FUN_ram_40000712(fVar29);
        fVar29 = param_1[0xc332];
        param_1[0xc362] = fVar28;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc34a] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc352] = fVar29;
        fVar29 = ((param_1[0xc343] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33b] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35b] = fVar28;
        fVar28 = (float)FUN_ram_40000712(fVar29);
        fVar29 = param_1[0xc333];
        param_1[0xc363] = fVar28;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc34b] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc353] = fVar29;
        fVar29 = ((param_1[0xc344] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33c] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35c] = fVar28;
        fVar28 = (float)FUN_ram_40000712(fVar29);
        fVar29 = param_1[0xc334];
        param_1[0xc364] = fVar28;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc34c] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc354] = fVar29;
        fVar29 = ((param_1[0xc345] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33d] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35d] = fVar28;
        fVar28 = (float)FUN_ram_40000712(fVar29);
        fVar29 = param_1[0xc335];
        param_1[0xc365] = fVar28;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc34d] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc355] = fVar29;
        fVar29 = ((param_1[0xc346] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33e] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35e] = fVar28;
        fVar28 = (float)FUN_ram_40000712(fVar29);
        fVar29 = param_1[0xc336];
        param_1[0xc366] = fVar28;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc34e] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc356] = fVar29;
        fVar29 = ((param_1[0xc347] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc33f] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc35f] = fVar28;
        fVar28 = (float)FUN_ram_40000712(fVar29);
        fVar29 = param_1[0xc337];
        param_1[0xc367] = fVar28;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[49999] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc357] = fVar29;
        fVar29 = ((param_1[0xc348] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc340] = fVar29;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[0xc360] = fVar28;
        fVar28 = (float)FUN_ram_40000712(fVar29);
        fVar29 = param_1[0xc338];
        param_1[0xc368] = fVar28;
        fVar28 = (float)FUN_ram_400009d2(fVar29);
        param_1[50000] = fVar28;
        fVar29 = (float)FUN_ram_40000712(fVar29);
        param_1[0xc358] = fVar29;
        fVar26 = ((param_1[0xc349] + fVar30) * fVar32 * fVar25) / fVar26;
        param_1[0xc341] = fVar26;
        fVar30 = (float)FUN_ram_400009d2(fVar26);
        param_1[0xc361] = fVar30;
        fVar25 = (float)FUN_ram_40000712(fVar26);
        fVar30 = param_1[0xc339];
        param_1[0xc369] = fVar25;
        fVar25 = (float)FUN_ram_400009d2(fVar30);
        param_1[0xc351] = fVar25;
        fVar30 = (float)FUN_ram_40000712(fVar30);
        param_1[0xc359] = fVar30;
      }
      *(undefined1 *)(param_1 + 0xc36a) = 1;
      cVar14 = '\x01';
    }
    if ((cVar1 != '\0') || (cVar14 != cVar3)) {
      *(undefined2 *)((int)param_1 + 0x30daa) = 0;
    }
    *(ulonglong *)(param_1 + 0xc) = (ulonglong)(uint)fVar32;
  }
  if (cVar2 != '\0') {
    param_1[0xc36b] = 0.0;
  }
  fVar32 = (float)*(undefined8 *)(param_1 + 3);
  if (fVar32 < 0.0) {
    fVar32 = 0.0;
  }
  else if (DAT_ram_400952d4 < fVar32) {
    fVar32 = DAT_ram_400952d4;
  }
  fVar33 = (fVar23 * fVar32) / fVar33;
  if (0.0 <= fVar33) {
    fVar33 = fVar33 + fVar4;
  }
  else {
    fVar33 = fVar33 - fVar4;
  }
  iVar13 = (int)fVar33;
  uVar15 = (short)~(ushort)((uint)iVar13 >> 0x10) >> 0xf & (ushort)iVar13;
  fVar33 = (float)*(undefined8 *)(param_1 + 7);
  if (0x1000 < iVar13) {
    uVar15 = 0x1000;
  }
  *(ushort *)((int)param_1 + 0x34dba) = uVar15;
  if (fVar33 < 0.0) {
    fVar33 = 0.0;
  }
  else if (DAT_ram_40094604 < fVar33) {
    fVar33 = DAT_ram_40094604;
  }
  param_1[0xc36d] = fVar33;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


