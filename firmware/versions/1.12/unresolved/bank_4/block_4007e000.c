/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4007e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4007eae0.
 * REA evidence: ev_90b2509709527e2472f8e9cfc635b5a9a4e0f05e79a4b8a37bb9cb4f0b7b0656
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4007eae0(float *param_1)

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
  float fVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  char cVar16;
  undefined2 uVar17;
  ushort uVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float fVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  fVar39 = DAT_ram_40099f28;
  uVar30 = *(ulonglong *)param_1;
  if ((float)uVar30 <= DAT_ram_40099f28) {
    uVar30 = (ulonglong)DAT_ram_4009f078;
  }
  cVar1 = *(char *)((int)param_1 + 0x25);
  *(ulonglong *)param_1 = uVar30;
  fVar4 = DAT_ram_4009675c;
  fVar29 = (float)uVar30;
  if (cVar1 != '\0') {
    fVar38 = DAT_ram_40099f84;
    if (*(char *)(param_1 + 6) == '\0') {
      fVar38 = DAT_ram_4009672c;
    }
    fVar36 = fVar29 / DAT_ram_4009678c;
    pfVar22 = param_1 + 0x12;
    pfVar26 = param_1 + 0x812;
    iVar15 = 0;
    pfVar21 = pfVar22;
    do {
      fVar31 = (float)(int)(&DAT_ram_400a0fe4)[iVar15] * fVar36 * fVar38;
      if (0.0 <= fVar31) {
        fVar31 = fVar31 + fVar4;
      }
      else {
        fVar31 = fVar31 - fVar4;
      }
      iVar13 = (int)fVar31;
      if (iVar13 < 0x201) {
        if (iVar13 < 1) {
          iVar13 = 1;
        }
      }
      else {
        iVar13 = 0x200;
      }
      *(ushort *)((int)pfVar26 + iVar15 * 2) = (ushort)iVar13;
      *(undefined2 *)((int)param_1 + iVar15 * 2 + 0x2050) = 0;
      uVar14 = iVar13 * 4;
      pfVar28 = pfVar21;
      if (0x80 < uVar14) {
        uVar25 = uVar14 - 0x81 >> 7;
        pfVar28 = pfVar21 + (uVar25 + 1) * 0x20;
        pfVar19 = pfVar21;
        do {
          iVar13 = memset(pfVar19,0,0x80);
          fence();
          pfVar19 = (float *)(iVar13 + 0x80);
        } while (pfVar19 != pfVar28);
        uVar14 = (uVar14 - 0x80) + uVar25 * -0x80;
      }
      memset(pfVar28,0,uVar14);
      fence();
      iVar15 = iVar15 + 1;
      pfVar21 = pfVar21 + 0x200;
    } while (iVar15 != 4);
    pfVar19 = param_1 + 0x1416;
    pfVar24 = param_1 + 0x816;
    pfVar27 = (float *)&DAT_ram_400a0ff4;
    pfVar21 = pfVar24;
    pfVar28 = pfVar19;
    do {
      fVar36 = (fVar29 * *pfVar27) / fVar39;
      if (0.0 <= fVar36) {
        fVar36 = fVar36 + fVar4;
      }
      else {
        fVar36 = fVar36 - fVar4;
      }
      iVar15 = (int)fVar36;
      if (iVar15 < 0x401) {
        if (iVar15 < 1) {
          iVar15 = 1;
        }
      }
      else {
        iVar15 = 0x400;
      }
      *(ushort *)pfVar28 = (ushort)iVar15;
      *(ushort *)((int)pfVar28 + 6) = 0;
      uVar14 = iVar15 * 4;
      pfVar23 = pfVar21;
      if (0x80 < uVar14) {
        uVar25 = uVar14 - 0x81 >> 7;
        pfVar23 = pfVar21 + (uVar25 + 1) * 0x20;
        pfVar20 = pfVar21;
        do {
          iVar15 = memset(pfVar20,0,0x80);
          fence();
          pfVar20 = (float *)(iVar15 + 0x80);
        } while (pfVar20 != pfVar23);
        uVar14 = (uVar14 - 0x80) + uVar25 * -0x80;
      }
      memset(pfVar23,0,uVar14);
      fence();
      pfVar21 = pfVar21 + 0x400;
      pfVar27 = pfVar27 + 1;
      pfVar28 = (float *)((int)pfVar28 + 2);
    } while (pfVar19 != pfVar21);
    fVar36 = (fVar38 * DAT_ram_4009a4f4 * fVar29) / fVar39;
    if (0.0 <= fVar36) {
      fVar36 = fVar36 + fVar4;
    }
    else {
      fVar36 = fVar36 - fVar4;
    }
    uVar14 = (int)fVar36 + (uint)(((int)fVar36 & 1U) == 0);
    if ((int)uVar14 < 1) {
      uVar14 = 1;
    }
    param_1[0xc31a] = (float)(int)uVar14;
    if ((uVar14 & 0xffff) == 0) {
      uVar14 = 1;
    }
    fVar36 = (fVar38 * DAT_ram_40099f80 * fVar29) / fVar39;
    if (0.0 <= fVar36) {
      fVar36 = fVar36 + fVar4;
    }
    else {
      fVar36 = fVar36 - fVar4;
    }
    uVar25 = (int)fVar36 + (uint)(((int)fVar36 & 1U) == 0);
    if ((int)uVar25 < 1) {
      uVar25 = 1;
    }
    param_1[0xc31b] = (float)(int)uVar25;
    if ((uVar25 & 0xffff) < (uVar14 & 0xffff)) {
      uVar25 = uVar14 & 0xffff;
    }
    fVar36 = (fVar38 * DAT_ram_400a0f68 * fVar29) / fVar39;
    if (0.0 <= fVar36) {
      fVar36 = fVar36 + fVar4;
    }
    else {
      fVar36 = fVar36 - fVar4;
    }
    uVar14 = (int)fVar36 + (uint)(((int)fVar36 & 1U) == 0);
    if ((int)uVar14 < 1) {
      uVar14 = 1;
    }
    param_1[0xc31c] = (float)(int)uVar14;
    if ((uVar14 & 0xffff) < (uVar25 & 0xffff)) {
      uVar14 = uVar25 & 0xffff;
    }
    fVar36 = (fVar38 * DAT_ram_400a0f6c * fVar29) / fVar39;
    if (0.0 <= fVar36) {
      fVar36 = fVar36 + fVar4;
    }
    else {
      fVar36 = fVar36 - fVar4;
    }
    uVar25 = (int)fVar36 + (uint)(((int)fVar36 & 1U) == 0);
    if ((int)uVar25 < 1) {
      uVar25 = 1;
    }
    param_1[0xc31d] = (float)(int)uVar25;
    if ((uVar25 & 0xffff) < (uVar14 & 0xffff)) {
      uVar25 = uVar14 & 0xffff;
    }
    fVar36 = (fVar38 * DAT_ram_400a0f70 * fVar29) / fVar39;
    if (0.0 <= fVar36) {
      fVar36 = fVar36 + fVar4;
    }
    else {
      fVar36 = fVar36 - fVar4;
    }
    uVar14 = (int)fVar36 + (uint)(((int)fVar36 & 1U) == 0);
    if ((int)uVar14 < 1) {
      uVar14 = 1;
    }
    param_1[0xc31e] = (float)(int)uVar14;
    if ((uVar14 & 0xffff) < (uVar25 & 0xffff)) {
      uVar14 = uVar25 & 0xffff;
    }
    fVar36 = (fVar38 * DAT_ram_4009a380 * fVar29) / fVar39;
    if (0.0 <= fVar36) {
      fVar36 = fVar36 + fVar4;
    }
    else {
      fVar36 = fVar36 - fVar4;
    }
    uVar25 = (int)fVar36 + (uint)(((int)fVar36 & 1U) == 0);
    if ((int)uVar25 < 1) {
      uVar25 = 1;
    }
    param_1[0xc31f] = (float)(int)uVar25;
    if ((uVar25 & 0xffff) < (uVar14 & 0xffff)) {
      uVar25 = uVar14 & 0xffff;
    }
    fVar36 = (fVar38 * DAT_ram_400a0f74 * fVar29) / fVar39;
    if (0.0 <= fVar36) {
      fVar36 = fVar36 + fVar4;
    }
    else {
      fVar36 = fVar36 - fVar4;
    }
    uVar14 = (int)fVar36 + (uint)(((int)fVar36 & 1U) == 0);
    if ((int)uVar14 < 1) {
      uVar14 = 1;
    }
    param_1[0xc320] = (float)(int)uVar14;
    if ((uVar14 & 0xffff) < (uVar25 & 0xffff)) {
      uVar14 = uVar25 & 0xffff;
    }
    fVar38 = (fVar38 * DAT_ram_4009b17c * fVar29) / fVar39;
    if (0.0 <= fVar38) {
      fVar38 = fVar38 + fVar4;
    }
    else {
      fVar38 = fVar38 - fVar4;
    }
    uVar25 = (int)fVar38 + (uint)(((int)fVar38 & 1U) == 0);
    if ((int)uVar25 < 1) {
      uVar25 = 1;
    }
    param_1[0xc321] = (float)(int)uVar25;
    if ((uVar25 & 0xffff) < (uVar14 & 0xffff)) {
      uVar25 = uVar14 & 0xffff;
    }
    uVar25 = uVar25 + 0x40;
    if ((uVar25 & 0xffff) == 0) {
      uVar25 = 1;
    }
    uVar17 = (short)uVar25;
    if (0x15e0 < (uVar25 & 0xffff)) {
      uVar17 = 0x15e0;
    }
    pfVar21 = param_1 + 0xc32a;
    *(undefined2 *)(param_1 + 0xc319) = uVar17;
    memset(pfVar21,0,0x20);
    fVar12 = DAT_ram_400a0fb4;
    fVar11 = DAT_ram_400a0fb0;
    fVar10 = DAT_ram_400a0fac;
    fVar9 = DAT_ram_400a0fa8;
    fVar8 = DAT_ram_400a0fa4;
    fVar7 = DAT_ram_400a0fa0;
    fVar6 = DAT_ram_400a0f9c;
    fVar40 = DAT_ram_400a0f98;
    fVar5 = DAT_ram_400a0f94;
    fVar33 = DAT_ram_400a0f90;
    fVar34 = DAT_ram_400a0f8c;
    fVar32 = DAT_ram_400a0f88;
    fVar35 = DAT_ram_400a0f84;
    fVar31 = DAT_ram_400a0f80;
    fVar36 = DAT_ram_400a0f7c;
    fVar38 = DAT_ram_400a0f78;
    *(undefined2 *)((int)param_1 + 0x30c66) = 0;
    param_1[0xc342] = fVar38;
    param_1[0xc332] = fVar36;
    param_1[0xc343] = fVar31;
    param_1[0xc333] = fVar35;
    param_1[0xc344] = fVar32;
    param_1[0xc334] = fVar34;
    param_1[0xc345] = fVar33;
    param_1[0xc335] = fVar5;
    param_1[0xc346] = fVar40;
    param_1[0xc336] = fVar6;
    param_1[0xc347] = fVar7;
    param_1[0xc337] = fVar8;
    param_1[0xc348] = fVar9;
    param_1[0xc338] = fVar10;
    param_1[0xc349] = fVar11;
    param_1[0xc339] = fVar12;
    uVar30 = (ulonglong)DAT_ram_40096728;
    _DAT_ram_30083fd4 = 0x83c6b450;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    *(ulonglong *)(param_1 + 10) = uVar30;
    *(undefined1 *)(param_1 + 0xb) = 0xff;
    *(ulonglong *)(param_1 + 0xc) = uVar30;
    param_1[0xe] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0x11] = 0.0;
    do {
      if (*(ushort *)pfVar26 != 0) {
        uVar14 = (uint)*(ushort *)pfVar26 * 4;
        pfVar28 = pfVar22;
        if (0x80 < uVar14) {
          uVar25 = uVar14 - 0x81 >> 7;
          do {
            iVar15 = memset(pfVar28,0,0x80);
            fence();
            pfVar28 = (float *)(iVar15 + 0x80);
          } while (pfVar28 != pfVar22 + (uVar25 + 1) * 0x20);
          uVar14 = (uVar14 - 0x80) + uVar25 * -0x80;
          pfVar28 = pfVar22 + (uVar25 + 1) * 0x20;
        }
        memset(pfVar28,0,uVar14);
        fence();
      }
      *(ushort *)(pfVar26 + 2) = 0;
      pfVar22 = pfVar22 + 0x200;
      pfVar26 = (float *)((int)pfVar26 + 2);
      pfVar28 = pfVar19;
    } while (pfVar22 != param_1 + 0x812);
    do {
      if (*(ushort *)pfVar28 != 0) {
        uVar14 = (uint)*(ushort *)pfVar28 * 4;
        pfVar26 = pfVar24;
        if (0x80 < uVar14) {
          uVar25 = uVar14 - 0x81 >> 7;
          do {
            iVar15 = memset(pfVar26,0,0x80);
            fence();
            pfVar26 = (float *)(iVar15 + 0x80);
          } while (pfVar26 != pfVar24 + (uVar25 + 1) * 0x20);
          uVar14 = (uVar14 - 0x80) + uVar25 * -0x80;
          pfVar26 = pfVar24 + (uVar25 + 1) * 0x20;
        }
        memset(pfVar26,0,uVar14);
        fence();
      }
      *(ushort *)((int)pfVar28 + 6) = 0;
      pfVar24 = pfVar24 + 0x400;
      pfVar28 = (float *)((int)pfVar28 + 2);
    } while (pfVar19 != pfVar24);
    pfVar26 = param_1 + 0x1419;
    iVar15 = 0;
    while (*(ushort *)(param_1 + 0xc319) != 0) {
      uVar14 = (uint)*(ushort *)(param_1 + 0xc319) * 4;
      pfVar22 = pfVar26;
      if (0x80 < uVar14) {
        uVar25 = uVar14 - 0x81 >> 7;
        do {
          iVar13 = memset(pfVar22,0,0x80);
          fence();
          pfVar22 = (float *)(iVar13 + 0x80);
        } while (pfVar22 != pfVar26 + (uVar25 + 1) * 0x20);
        uVar14 = (uVar14 - 0x80) + uVar25 * -0x80;
        pfVar22 = pfVar26 + (uVar25 + 1) * 0x20;
      }
      memset(pfVar22,0,uVar14);
      fence();
      *pfVar21 = 0.0;
      iVar15 = iVar15 + 1;
      if (iVar15 == 8) goto LAB_ram_4007f580;
      pfVar21 = pfVar21 + 1;
      pfVar26 = pfVar26 + 0x15e0;
    }
    *pfVar21 = 0.0;
    if (iVar15 + 1 != 8) {
      memset(param_1 + iVar15 + 0xc32b,0,(8 - (iVar15 + 1)) * 4);
    }
LAB_ram_4007f580:
    *(undefined2 *)((int)param_1 + 0x30c66) = 0;
    pfVar21 = param_1 + 0xc36e;
    do {
      iVar15 = memset(pfVar21,0,0x80);
      fence();
      pfVar21 = (float *)(iVar15 + 0x80);
    } while (pfVar21 != param_1 + 0xd34e);
    memset(param_1 + 0xd34e,0,0x80);
    fence();
    *(undefined2 *)(param_1 + 0xd36e) = 0;
    *(undefined2 *)((int)param_1 + 0x30daa) = 0;
  }
  fVar31 = (float)FUN_ram_40000844(DAT_ram_40099f88,
                                   (float)*(undefined8 *)(param_1 + 1) * DAT_ram_400a0fb8);
  fVar36 = DAT_ram_40096780;
  fVar38 = param_1[2];
  if (fVar38 < 0.0) {
    fVar38 = 0.0;
LAB_ram_4007eb78:
    fVar35 = (float)*(undefined8 *)(param_1 + 4);
    if (0.0 <= fVar35) goto LAB_ram_4007eb86;
LAB_ram_4007f63e:
    fVar35 = 0.0;
  }
  else {
    if (fVar38 <= DAT_ram_4009672c) goto LAB_ram_4007eb78;
    fVar35 = (float)*(undefined8 *)(param_1 + 4);
    fVar38 = DAT_ram_4009672c;
    if (fVar35 < 0.0) goto LAB_ram_4007f63e;
LAB_ram_4007eb86:
    if (DAT_ram_40096780 < fVar35) {
      cVar2 = *(char *)(param_1 + 8);
      fVar32 = (float)*(undefined8 *)(param_1 + 5);
      fVar35 = DAT_ram_40096780;
      goto joined_r0x4007eba8;
    }
  }
  cVar2 = *(char *)(param_1 + 8);
  fVar32 = (float)*(undefined8 *)(param_1 + 5);
joined_r0x4007eba8:
  fVar34 = DAT_ram_400a0f60;
  if ((DAT_ram_4009a354 <= fVar32) && (fVar34 = DAT_ram_400a0f5c, fVar32 <= DAT_ram_40099f38)) {
    fVar32 = (float)FUN_ram_40000d44(DAT_ram_40099f38,-fVar32 / DAT_ram_40099f44);
    fVar32 = fVar32 * DAT_ram_40099f70;
    fVar34 = DAT_ram_400a0f5c;
    if ((DAT_ram_4009b1a4 <= fVar32) && (fVar34 = DAT_ram_400a0f64, fVar32 <= DAT_ram_400a0fbc)) {
      fVar34 = fVar32 * DAT_ram_4009f0b4;
    }
  }
  fVar5 = DAT_ram_4009f0b4;
  fVar32 = fVar38 * DAT_ram_400a0fc0 + DAT_ram_4009b1a0;
  fVar33 = fVar29 * DAT_ram_4009f22c;
  fVar40 = DAT_ram_4009a358;
  if ((DAT_ram_4009a358 <= fVar32) && (fVar40 = fVar32, fVar33 < fVar32)) {
    fVar40 = fVar33;
  }
  fVar38 = fVar38 * DAT_ram_400a0fc4 + DAT_ram_400a0fc8;
  fVar32 = DAT_ram_4009a35c;
  if ((DAT_ram_4009a35c <= fVar38) && (fVar32 = fVar38, fVar33 < fVar38)) {
    fVar32 = fVar33;
  }
  uVar37 = FUN_ram_40000bd8(fVar34 / fVar29);
  *(undefined8 *)(param_1 + 0xd) = uVar37;
  uVar37 = FUN_ram_40000bd8((fVar40 * fVar5) / fVar29);
  *(undefined8 *)(param_1 + 0x10) = uVar37;
  fVar33 = (float)FUN_ram_40000bd8((fVar32 * fVar5) / fVar29);
  fVar34 = DAT_ram_400a0fcc;
  fVar32 = DAT_ram_4009f230;
  fVar38 = DAT_ram_40099f6c;
  param_1[0xc36b] = fVar33;
  fVar38 = (fVar35 / fVar36) * fVar32 + fVar38;
  param_1[0xc36c] = (fVar35 / fVar36) * fVar34;
  fVar32 = DAT_ram_4009f0b0;
  fVar35 = DAT_ram_40099f38;
  fVar36 = DAT_ram_4009672c;
  if (((float)*(undefined8 *)(param_1 + 10) != fVar31) || (*(char *)(param_1 + 0xb) != cVar2)) {
    if (cVar2 == '\0') {
      pfVar21 = param_1 + 0xc31a;
      do {
        pfVar26 = pfVar21 + 1;
        uVar37 = FUN_ram_40000d44(fVar35,((float)*(undefined8 *)pfVar21 * fVar32) /
                                         (fVar29 * fVar31));
        *(undefined8 *)(pfVar21 + 8) = uVar37;
        pfVar21 = pfVar26;
      } while (param_1 + 0xc322 != pfVar26);
    }
    else {
      param_1[0xc322] = DAT_ram_4009672c;
      param_1[0xc323] = fVar36;
      param_1[0xc324] = fVar36;
      param_1[0xc325] = fVar36;
      param_1[0xc326] = fVar36;
      param_1[0xc327] = fVar36;
      param_1[0xc328] = fVar36;
      param_1[0xc329] = fVar36;
    }
    param_1[10] = fVar31;
    *(char *)(param_1 + 0xb) = cVar2;
  }
  fVar31 = DAT_ram_4009f090;
  fVar36 = DAT_ram_4009672c;
  if ((cVar1 != '\0') || ((float)*(undefined8 *)(param_1 + 0xc) != fVar38)) {
    cVar3 = *(char *)(param_1 + 0xc36a);
    if ((fVar38 <= 0.0) || (param_1[0xc36c] <= 0.0)) {
      memset(param_1 + 0xc33a,0,0x20);
      memset(param_1 + 0xc34a,0,0x20);
      fVar36 = DAT_ram_4009672c;
      param_1[0xc352] = DAT_ram_4009672c;
      param_1[0xc353] = fVar36;
      param_1[0xc354] = fVar36;
      param_1[0xc355] = fVar36;
      param_1[0xc356] = fVar36;
      param_1[0xc357] = fVar36;
      param_1[0xc358] = fVar36;
      param_1[0xc359] = fVar36;
      memset(param_1 + 0xc35a,0,0x20);
      cVar16 = '\0';
      param_1[0xc362] = fVar36;
      param_1[0xc363] = fVar36;
      param_1[0xc364] = fVar36;
      param_1[0xc365] = fVar36;
      param_1[0xc366] = fVar36;
      param_1[0xc367] = fVar36;
      param_1[0xc368] = fVar36;
      param_1[0xc369] = fVar36;
      *(undefined1 *)(param_1 + 0xc36a) = 0;
    }
    else {
      fVar32 = *param_1;
      fVar35 = ((param_1[0xc342] + DAT_ram_4009672c) * fVar38 * DAT_ram_4009f090) / fVar32;
      param_1[0xc33a] = fVar35;
      if ((cVar1 == '\0') && (cVar3 != '\0')) {
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35a] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc362] = fVar35;
        fVar35 = ((param_1[0xc343] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33b] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35b] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc363] = fVar35;
        fVar35 = ((param_1[0xc344] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33c] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35c] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc364] = fVar35;
        fVar35 = ((param_1[0xc345] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33d] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35d] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc365] = fVar35;
        fVar35 = ((param_1[0xc346] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33e] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35e] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc366] = fVar35;
        fVar35 = ((param_1[0xc347] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33f] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35f] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc367] = fVar35;
        fVar35 = ((param_1[0xc348] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc340] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc360] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc368] = fVar35;
        fVar32 = ((param_1[0xc349] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc341] = fVar32;
        fVar36 = (float)FUN_ram_400009d2(fVar32);
        param_1[0xc361] = fVar36;
        fVar36 = (float)FUN_ram_40000712(fVar32);
        param_1[0xc369] = fVar36;
      }
      else {
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35a] = fVar34;
        fVar34 = (float)FUN_ram_40000712(fVar35);
        fVar35 = param_1[0xc332];
        param_1[0xc362] = fVar34;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc34a] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc352] = fVar35;
        fVar35 = ((param_1[0xc343] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33b] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35b] = fVar34;
        fVar34 = (float)FUN_ram_40000712(fVar35);
        fVar35 = param_1[0xc333];
        param_1[0xc363] = fVar34;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc34b] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc353] = fVar35;
        fVar35 = ((param_1[0xc344] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33c] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35c] = fVar34;
        fVar34 = (float)FUN_ram_40000712(fVar35);
        fVar35 = param_1[0xc334];
        param_1[0xc364] = fVar34;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc34c] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc354] = fVar35;
        fVar35 = ((param_1[0xc345] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33d] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35d] = fVar34;
        fVar34 = (float)FUN_ram_40000712(fVar35);
        fVar35 = param_1[0xc335];
        param_1[0xc365] = fVar34;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc34d] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc355] = fVar35;
        fVar35 = ((param_1[0xc346] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33e] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35e] = fVar34;
        fVar34 = (float)FUN_ram_40000712(fVar35);
        fVar35 = param_1[0xc336];
        param_1[0xc366] = fVar34;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc34e] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc356] = fVar35;
        fVar35 = ((param_1[0xc347] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc33f] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc35f] = fVar34;
        fVar34 = (float)FUN_ram_40000712(fVar35);
        fVar35 = param_1[0xc337];
        param_1[0xc367] = fVar34;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[49999] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc357] = fVar35;
        fVar35 = ((param_1[0xc348] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc340] = fVar35;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[0xc360] = fVar34;
        fVar34 = (float)FUN_ram_40000712(fVar35);
        fVar35 = param_1[0xc338];
        param_1[0xc368] = fVar34;
        fVar34 = (float)FUN_ram_400009d2(fVar35);
        param_1[50000] = fVar34;
        fVar35 = (float)FUN_ram_40000712(fVar35);
        param_1[0xc358] = fVar35;
        fVar32 = ((param_1[0xc349] + fVar36) * fVar38 * fVar31) / fVar32;
        param_1[0xc341] = fVar32;
        fVar36 = (float)FUN_ram_400009d2(fVar32);
        param_1[0xc361] = fVar36;
        fVar31 = (float)FUN_ram_40000712(fVar32);
        fVar36 = param_1[0xc339];
        param_1[0xc369] = fVar31;
        fVar31 = (float)FUN_ram_400009d2(fVar36);
        param_1[0xc351] = fVar31;
        fVar36 = (float)FUN_ram_40000712(fVar36);
        param_1[0xc359] = fVar36;
      }
      *(undefined1 *)(param_1 + 0xc36a) = 1;
      cVar16 = '\x01';
    }
    if ((cVar1 != '\0') || (cVar16 != cVar3)) {
      *(undefined2 *)((int)param_1 + 0x30daa) = 0;
    }
    *(ulonglong *)(param_1 + 0xc) = (ulonglong)(uint)fVar38;
  }
  if (cVar2 != '\0') {
    param_1[0xc36b] = 0.0;
  }
  fVar38 = (float)*(undefined8 *)(param_1 + 3);
  if (fVar38 < 0.0) {
    fVar38 = 0.0;
  }
  else if (DAT_ram_4009a380 < fVar38) {
    fVar38 = DAT_ram_4009a380;
  }
  fVar39 = (fVar29 * fVar38) / fVar39;
  if (0.0 <= fVar39) {
    fVar39 = fVar39 + fVar4;
  }
  else {
    fVar39 = fVar39 - fVar4;
  }
  iVar15 = (int)fVar39;
  uVar18 = (short)~(ushort)((uint)iVar15 >> 0x10) >> 0xf & (ushort)iVar15;
  fVar39 = (float)*(undefined8 *)(param_1 + 7);
  if (0x1000 < iVar15) {
    uVar18 = 0x1000;
  }
  *(ushort *)((int)param_1 + 0x34dba) = uVar18;
  if (fVar39 < 0.0) {
    fVar39 = 0.0;
  }
  else if (DAT_ram_4009672c < fVar39) {
    fVar39 = DAT_ram_4009672c;
  }
  param_1[0xc36d] = fVar39;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


