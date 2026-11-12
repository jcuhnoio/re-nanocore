/* NanoCore 1.12: nc_reverb_hall_helper_4007c9ec at 0x4007c9ec.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_822fbc1c4cc3ab560ffde3e297c237303dbd026239e26d050cfa502a37995fb1
 * Source: analysis/rea-1.12-effects/results/03591-export-0x4007c9ec.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_reverb_hall_helper_4007c9ec(undefined8 *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  undefined2 uVar17;
  int iVar18;
  char cVar19;
  ushort uVar20;
  uint uVar21;
  ushort *puVar22;
  undefined8 *puVar23;
  ushort *puVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  short *psVar29;
  undefined8 *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  ulonglong uVar39;
  
  fVar3 = (float)DAT_ram_4009675c;
  fVar31 = (float)*param_1;
  fVar33 = DAT_ram_4009672c;
  fVar32 = DAT_ram_4009f078;
  if (DAT_ram_40099f28 < fVar31) {
    fVar33 = fVar31 / DAT_ram_4009f078;
    fVar32 = fVar31;
  }
  cVar1 = *(char *)((int)param_1 + 0x2c);
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    puVar27 = param_1 + 0x4e;
    puVar22 = (ushort *)((int)param_1 + 0x32);
    iVar18 = 0;
    puVar30 = puVar27;
    do {
      fVar31 = (float)(int)(&DAT_ram_400a0f50)[iVar18] * fVar33;
      if (0.0 <= fVar31) {
        iVar13 = (int)(fVar31 + fVar3);
        if (iVar13 < 0x201) goto LAB_ram_4007d0d8;
LAB_ram_4007d59a:
        iVar13 = 0x200;
      }
      else {
        iVar13 = (int)(fVar31 - fVar3);
        if (0x200 < iVar13) goto LAB_ram_4007d59a;
LAB_ram_4007d0d8:
        if (iVar13 < 1) {
          iVar13 = 1;
        }
      }
      puVar22[iVar18] = (ushort)iVar13;
      *(undefined2 *)((int)param_1 + iVar18 * 2 + 0x38) = 0;
      uVar16 = iVar13 * 4;
      puVar28 = puVar30;
      if (0x80 < uVar16) {
        uVar21 = uVar16 - 0x81 >> 7;
        puVar28 = puVar30 + (uVar21 + 1) * 0x10;
        puVar23 = puVar30;
        do {
          iVar13 = memset(puVar23,0,0x80);
          fence();
          puVar23 = (undefined8 *)(iVar13 + 0x80);
        } while (puVar28 != puVar23);
        uVar16 = (uVar16 - 0x80) + uVar21 * -0x80;
      }
      memset(puVar28,0,uVar16);
      fence();
      iVar18 = iVar18 + 1;
      puVar30 = puVar30 + 0x100;
    } while (iVar18 != 3);
    puVar28 = param_1 + 0x34e;
    puVar24 = (ushort *)((int)param_1 + 0x3e);
    iVar18 = 0;
    puVar30 = puVar28;
    do {
      fVar31 = (float)*(int *)((int)&DAT_ram_400a0efc + iVar18 * 4 + 4) * fVar33;
      if (0.0 <= fVar31) {
        iVar13 = (int)(fVar31 + fVar3);
        if (iVar13 < 0x201) goto LAB_ram_4007d18a;
LAB_ram_4007d572:
        iVar13 = 0x200;
      }
      else {
        iVar13 = (int)(fVar31 - fVar3);
        if (0x200 < iVar13) goto LAB_ram_4007d572;
LAB_ram_4007d18a:
        if (iVar13 < 1) {
          iVar13 = 1;
        }
      }
      puVar24[iVar18] = (ushort)iVar13;
      *(undefined2 *)((int)param_1 + iVar18 * 2 + 0x46) = 0;
      uVar16 = iVar13 * 4;
      puVar23 = puVar30;
      if (0x80 < uVar16) {
        uVar21 = uVar16 - 0x81 >> 7;
        puVar23 = puVar30 + (uVar21 + 1) * 0x10;
        puVar25 = puVar30;
        do {
          iVar13 = memset(puVar25,0,0x80);
          fence();
          puVar25 = (undefined8 *)(iVar13 + 0x80);
        } while (puVar25 != puVar23);
        uVar16 = (uVar16 - 0x80) + uVar21 * -0x80;
      }
      memset(puVar23,0,uVar16);
      fence();
      iVar18 = iVar18 + 1;
      puVar30 = puVar30 + 0x100;
    } while (iVar18 != 4);
    puVar23 = param_1 + 0xdbe;
    iVar18 = 0;
    psVar29 = (short *)((int)param_1 + 0x4e);
    puVar30 = puVar23;
    do {
      fVar31 = (float)(int)(&DAT_ram_400a0f10)[iVar18] * fVar33;
      if (0.0 <= fVar31) {
        fVar31 = fVar31 + fVar3;
      }
      else {
        fVar31 = fVar31 - fVar3;
      }
      iVar26 = (int)fVar31;
      iVar13 = 0xce4;
      if ((iVar26 < 0xce5) && (iVar13 = iVar26, iVar26 < 1)) {
        iVar13 = 1;
      }
      psVar29[iVar18] = (short)iVar13;
      puVar25 = puVar30 + -0x670;
      do {
        iVar13 = memset(puVar25,0,0x80);
        fence();
        puVar25 = (undefined8 *)(iVar13 + 0x80);
      } while (puVar25 != puVar30);
      iVar13 = memset(puVar25,0,0x10);
      fVar31 = DAT_ram_4009f08c;
      uVar34 = DAT_ram_4009a374;
      fence();
      iVar18 = iVar18 + 1;
      puVar30 = (undefined8 *)(iVar13 + 0x3390);
    } while (iVar18 != 0x10);
    *(undefined2 *)((int)param_1 + 0x6e) = 0;
    fVar31 = fVar32 * fVar31;
    *(undefined4 *)((int)param_1 + 0x264) = uVar34;
    if (0.0 <= fVar31) {
      iVar18 = (int)(fVar31 + fVar3) + 1;
      if (0x321 < iVar18) goto LAB_ram_4007d2b6;
LAB_ram_4007d65c:
      if (iVar18 < 1) {
        iVar18 = 1;
      }
    }
    else {
      iVar18 = (int)(fVar31 - fVar3) + 1;
      if (iVar18 < 0x322) goto LAB_ram_4007d65c;
LAB_ram_4007d2b6:
      iVar18 = 0x321;
    }
    puVar25 = param_1 + 0x6e6e;
    *(short *)((int)param_1 + 0x134) = (short)iVar18;
    puVar30 = puVar25;
    do {
      iVar18 = memset(puVar30,0,0x80);
      fence();
      puVar30 = (undefined8 *)(iVar18 + 0x80);
    } while (puVar30 != param_1 + 0x6ffe);
    *(undefined1 *)(param_1 + 0x6ffe) = 0;
    *(undefined1 *)((int)param_1 + 0x37ff1) = 0;
    *(undefined1 *)((int)param_1 + 0x37ff2) = 0;
    *(undefined1 *)((int)param_1 + 0x37ff3) = 0;
    fence();
    iVar13 = (int)param_1 + 0x37ff4;
    *(undefined4 *)(param_1 + 0x26) = DAT_ram_4009f290;
    iVar18 = iVar13;
    do {
      iVar18 = memset(iVar18,0,0x80);
      fence();
      iVar18 = iVar18 + 0x80;
    } while (iVar18 != (int)param_1 + 0x41574);
    memset((int)param_1 + 0x41574,0,0x80);
    fence();
    *(undefined2 *)((int)param_1 + 0x136) = 0;
    *(undefined2 *)(param_1 + 0x27) = 0;
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    do {
      if (*puVar24 != 0) {
        uVar16 = (uint)*puVar24 * 4;
        puVar30 = puVar28;
        if (0x80 < uVar16) {
          uVar21 = uVar16 - 0x81 >> 7;
          do {
            iVar18 = memset(puVar30,0,0x80);
            fence();
            puVar30 = (undefined8 *)(iVar18 + 0x80);
          } while (puVar30 != puVar28 + (uVar21 + 1) * 0x10);
          uVar16 = (uVar16 - 0x80) + uVar21 * -0x80;
          puVar30 = puVar28 + (uVar21 + 1) * 0x10;
        }
        memset(puVar30,0,uVar16);
        fence();
      }
      puVar24[4] = 0;
      puVar24 = puVar24 + 1;
      puVar28 = puVar28 + 0x100;
    } while (param_1 + 0x74e != puVar28);
    do {
      if (*puVar22 != 0) {
        uVar16 = (uint)*puVar22 * 4;
        puVar30 = puVar27;
        if (0x80 < uVar16) {
          uVar21 = uVar16 - 0x81 >> 7;
          do {
            iVar18 = memset(puVar30,0,0x80);
            fence();
            puVar30 = (undefined8 *)(iVar18 + 0x80);
          } while (puVar30 != puVar27 + (uVar21 + 1) * 0x10);
          uVar16 = (uVar16 - 0x80) + uVar21 * -0x80;
          puVar30 = puVar27 + (uVar21 + 1) * 0x10;
        }
        memset(puVar30,0,uVar16);
        fence();
      }
      puVar22[3] = 0;
      puVar22 = puVar22 + 1;
      puVar27 = puVar27 + 0x100;
    } while (param_1 + 0x34e != puVar27);
    puVar30 = param_1 + 0x16;
    do {
      while (*psVar29 == 0) {
        *(undefined4 *)puVar30 = 0;
        *(undefined4 *)(puVar30 + 8) = 0;
        puVar30 = (undefined8 *)((int)puVar30 + 4);
        psVar29 = psVar29 + 1;
        puVar23 = puVar23 + 0x672;
        if (param_1 + 0x1e == puVar30) goto LAB_ram_4007d4d4;
      }
      puVar27 = puVar23 + -0x670;
      do {
        iVar18 = memset(puVar27,0,0x80);
        fence();
        puVar27 = (undefined8 *)(iVar18 + 0x80);
      } while (puVar27 != puVar23);
      memset(puVar23,0,0x10);
      fence();
      *(undefined4 *)puVar30 = 0;
      *(undefined4 *)(puVar30 + 8) = 0;
      puVar30 = (undefined8 *)((int)puVar30 + 4);
      psVar29 = psVar29 + 1;
      puVar23 = puVar23 + 0x672;
    } while (param_1 + 0x1e != puVar30);
LAB_ram_4007d4d4:
    *(undefined2 *)((int)param_1 + 0x6e) = 0;
    do {
      memset(puVar25,0,0x80);
      fence();
      puVar25 = puVar25 + 0x10;
    } while (puVar25 != param_1 + 0x6ffe);
    *(undefined1 *)(param_1 + 0x6ffe) = 0;
    *(undefined1 *)((int)param_1 + 0x37ff1) = 0;
    *(undefined1 *)((int)param_1 + 0x37ff2) = 0;
    *(undefined1 *)((int)param_1 + 0x37ff3) = 0;
    fence();
    *(undefined2 *)(param_1 + 0x26) = 0;
    do {
      memset(iVar13,0,0x80);
      fence();
      iVar13 = iVar13 + 0x80;
    } while (iVar13 != (int)param_1 + 0x41574);
    memset((int)param_1 + 0x41574,0,0x80);
    fVar33 = DAT_ram_4009672c;
    fence();
    *(undefined2 *)((int)param_1 + 0x136) = 0;
    *(undefined4 *)((int)param_1 + 0x13c) = 0;
    *(float *)(param_1 + 0x4d) = fVar33;
  }
  fVar31 = (float)*(undefined8 *)((int)param_1 + 4);
  *(undefined4 *)(param_1 + 0x4a) = DAT_ram_40096730;
  fVar33 = fVar3;
  if (fVar31 < fVar3) {
LAB_ram_4007ca9e:
    if (cVar1 != '\0') goto LAB_ram_4007caa4;
LAB_ram_4007d5b2:
    fVar31 = DAT_ram_4009f0b0;
    uVar34 = DAT_ram_40099f38;
    pfVar14 = (float *)(param_1 + 0xe);
    puVar22 = (ushort *)((int)param_1 + 0x4e);
    do {
      fVar37 = *(float *)((int)param_1 + 0x264);
      pfVar15 = pfVar14 + 1;
      fVar35 = (float)FUN_ram_40000d44(uVar34,(((float)*puVar22 / fVar32) * fVar31) / fVar33);
      *pfVar14 = fVar35 * fVar37;
      fVar37 = DAT_ram_400a0e9c;
      pfVar14 = pfVar15;
      puVar22 = puVar22 + 1;
    } while ((float *)(param_1 + 0x16) != pfVar15);
    fVar33 = fVar32 * DAT_ram_4009b18c;
    *(undefined4 *)((int)param_1 + 0x254) = DAT_ram_400a0e98;
    if (fVar33 < fVar37) {
      uVar36 = FUN_ram_40000bd8((fVar33 * DAT_ram_4009f0b4) / fVar32);
      uVar34 = DAT_ram_40099f94;
      *(undefined4 *)(param_1 + 0x4b) = uVar36;
      *(undefined4 *)((int)param_1 + 0x25c) = uVar34;
    }
    else {
      uVar36 = FUN_ram_40000bd8(DAT_ram_400a0eec / fVar32);
      uVar34 = DAT_ram_40099f94;
      *(undefined4 *)(param_1 + 0x4b) = uVar36;
      *(undefined4 *)((int)param_1 + 0x25c) = uVar34;
    }
  }
  else {
    if (fVar31 <= DAT_ram_4009a330) {
      fVar33 = (float)FUN_ram_40000844(DAT_ram_40099f88,
                                       ((fVar31 - fVar3) / DAT_ram_4009b194) * DAT_ram_400a0e94 +
                                       fVar3);
      goto LAB_ram_4007ca9e;
    }
    fVar33 = DAT_ram_40096780;
    if (cVar1 == '\0') goto LAB_ram_4007d5b2;
LAB_ram_4007caa4:
    fVar31 = DAT_ram_400a0e9c;
    uVar34 = DAT_ram_400a0e98;
    uVar16 = *(uint *)((int)param_1 + 0x264);
    uVar39 = (ulonglong)uVar16;
    fVar33 = fVar32 * DAT_ram_4009b18c;
    param_1[0xe] = uVar39;
    *(ulonglong *)((int)param_1 + 0x74) = uVar39;
    param_1[0xf] = uVar39;
    *(ulonglong *)((int)param_1 + 0x7c) = uVar39;
    *(uint *)(param_1 + 0x10) = uVar16;
    *(uint *)((int)param_1 + 0x84) = uVar16;
    *(uint *)(param_1 + 0x11) = uVar16;
    *(uint *)((int)param_1 + 0x8c) = uVar16;
    *(uint *)(param_1 + 0x12) = uVar16;
    *(uint *)((int)param_1 + 0x94) = uVar16;
    *(uint *)(param_1 + 0x13) = uVar16;
    *(uint *)((int)param_1 + 0x9c) = uVar16;
    *(uint *)(param_1 + 0x14) = uVar16;
    *(uint *)((int)param_1 + 0xa4) = uVar16;
    *(uint *)(param_1 + 0x15) = uVar16;
    *(uint *)((int)param_1 + 0xac) = uVar16;
    *(undefined4 *)((int)param_1 + 0x254) = uVar34;
    if (fVar33 < fVar31) {
      uVar34 = FUN_ram_40000bd8((fVar33 * DAT_ram_4009f0b4) / fVar32);
      *(undefined4 *)(param_1 + 0x4b) = uVar34;
    }
    else {
      uVar34 = FUN_ram_40000bd8(DAT_ram_400a0eec / fVar32);
      *(undefined4 *)(param_1 + 0x4b) = uVar34;
    }
    *(undefined4 *)((int)param_1 + 0x254) = 0;
    *(undefined4 *)((int)param_1 + 0x25c) = 0;
  }
  uVar34 = FUN_ram_40000bd8(DAT_ram_400a0ea0 / fVar32);
  *(undefined4 *)(param_1 + 0x28) = uVar34;
  fVar33 = DAT_ram_40096728;
  fVar37 = (float)param_1[1];
  fVar31 = DAT_ram_40096728;
  if ((fVar37 < 0.0) || (fVar31 = DAT_ram_4009f0bc, DAT_ram_4009672c < fVar37)) {
LAB_ram_4007d746:
    fVar37 = (float)FUN_ram_40000d44(DAT_ram_40099f38,fVar31);
  }
  else {
    fVar31 = fVar37 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728;
    fVar37 = DAT_ram_4009672c;
    if (DAT_ram_4009f0c8 < ABS(fVar31)) {
      if (fVar31 < 0.0) {
        fVar31 = (((-fVar31 - DAT_ram_4009f0c8) / DAT_ram_400a0bac) * DAT_ram_40099f5c) /
                 DAT_ram_40099f50;
      }
      else {
        fVar31 = (((fVar31 - DAT_ram_4009f0c8) / DAT_ram_400a0bac) * DAT_ram_40096764) /
                 DAT_ram_40099f50;
      }
      goto LAB_ram_4007d746;
    }
  }
  *(float *)((int)param_1 + 0x144) = fVar37;
  fVar37 = DAT_ram_4009f0ac;
  fVar31 = DAT_ram_4009f080;
  cVar1 = *(char *)((int)param_1 + 0x14c);
  fVar35 = (float)*(undefined8 *)((int)param_1 + 0x14);
  if (fVar35 < 0.0) {
    fVar38 = 0.0;
  }
  else {
    fVar38 = DAT_ram_4009f51c;
    if (fVar35 <= (float)DAT_ram_4009f060) {
      fVar38 = fVar35 * DAT_ram_4009f0ac;
    }
  }
  fVar38 = fVar32 * fVar38;
  fVar35 = (float)param_1[3];
  if (fVar35 < 0.0) {
    *(float *)(param_1 + 0x29) = fVar38;
  }
  else {
    if (DAT_ram_4009f080 < fVar35) {
      *(float *)(param_1 + 0x29) = fVar38;
    }
    else {
      *(float *)(param_1 + 0x29) = fVar38;
      fVar31 = fVar35;
      if (fVar35 <= 0.0) goto LAB_ram_4007d668;
    }
    uVar12 = DAT_ram_400a0eb8;
    uVar11 = DAT_ram_400a0eb4;
    uVar10 = DAT_ram_400a0eb0;
    uVar9 = DAT_ram_400a0eac;
    uVar8 = DAT_ram_400a0ea8;
    uVar7 = DAT_ram_400a0ea4;
    uVar6 = DAT_ram_400a0b80;
    uVar5 = DAT_ram_400a0b7c;
    uVar4 = DAT_ram_4009f920;
    uVar36 = DAT_ram_4009f918;
    uVar34 = DAT_ram_4009f770;
    fVar2 = DAT_ram_4009672c;
    fVar35 = DAT_ram_40096728;
    if (0.0 < fVar38) {
      fVar31 = (fVar31 * DAT_ram_4009f090) / fVar32;
      if (cVar1 == '\0') {
        *(float *)(param_1 + 0x32) = DAT_ram_4009672c;
        *(undefined4 *)((int)param_1 + 0x194) = uVar8;
        *(undefined4 *)(param_1 + 0x2b) = uVar36;
        *(undefined4 *)(param_1 + 0x33) = uVar36;
        *(undefined4 *)((int)param_1 + 0x15c) = uVar8;
        *(undefined4 *)((int)param_1 + 0x19c) = uVar34;
        *(float *)(param_1 + 0x2c) = fVar2;
        *(undefined4 *)(param_1 + 0x34) = uVar4;
        *(undefined4 *)((int)param_1 + 0x164) = uVar8;
        *(undefined4 *)((int)param_1 + 0x1a4) = uVar9;
        *(undefined4 *)(param_1 + 0x2d) = uVar36;
        *(undefined4 *)(param_1 + 0x35) = uVar5;
        *(undefined4 *)((int)param_1 + 0x16c) = uVar10;
        *(undefined4 *)((int)param_1 + 0x1ac) = uVar11;
        *(undefined4 *)(param_1 + 0x2e) = uVar6;
        *(undefined4 *)(param_1 + 0x2a) = 0;
        *(undefined4 *)((int)param_1 + 0x154) = uVar7;
        *(float *)(param_1 + 0x36) = fVar35;
        *(undefined4 *)((int)param_1 + 0x174) = uVar12;
        uVar11 = DAT_ram_400a0ecc;
        uVar10 = DAT_ram_400a0ec8;
        uVar9 = DAT_ram_400a0ec4;
        uVar8 = DAT_ram_400a0ec0;
        uVar7 = DAT_ram_400a0ebc;
        uVar6 = DAT_ram_400a0b94;
        uVar5 = DAT_ram_400a0b90;
        uVar4 = DAT_ram_400a0b8c;
        uVar36 = DAT_ram_400a0b88;
        uVar34 = DAT_ram_400a0b84;
        *(undefined4 *)((int)param_1 + 0x1b4) = _DAT_ram_4009f76c;
        *(undefined4 *)(param_1 + 0x2f) = uVar34;
        *(undefined4 *)(param_1 + 0x37) = uVar36;
        *(undefined4 *)((int)param_1 + 0x17c) = uVar7;
        *(undefined4 *)((int)param_1 + 0x1bc) = uVar8;
        *(float *)(param_1 + 0x30) = fVar35;
        *(undefined4 *)(param_1 + 0x38) = uVar4;
        *(undefined4 *)((int)param_1 + 0x184) = uVar9;
        *(undefined4 *)((int)param_1 + 0x1c4) = uVar10;
        *(undefined4 *)(param_1 + 0x31) = uVar5;
        *(undefined4 *)(param_1 + 0x39) = uVar6;
        *(undefined4 *)((int)param_1 + 0x18c) = uVar12;
        *(undefined4 *)((int)param_1 + 0x1cc) = uVar11;
      }
      uVar34 = FUN_ram_400009d2(fVar31);
      *(undefined4 *)(param_1 + 0x3a) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31);
      fVar35 = DAT_ram_400a0ed0;
      *(undefined4 *)(param_1 + 0x42) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)((int)param_1 + 0x1d4) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0b98;
      *(undefined4 *)((int)param_1 + 0x214) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)(param_1 + 0x3b) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0ed4;
      *(undefined4 *)(param_1 + 0x43) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)((int)param_1 + 0x1dc) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0b9c;
      *(undefined4 *)((int)param_1 + 0x21c) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)(param_1 + 0x3c) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_4009f954;
      *(undefined4 *)(param_1 + 0x44) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)((int)param_1 + 0x1e4) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0ba0;
      *(undefined4 *)((int)param_1 + 0x224) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)(param_1 + 0x3d) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0ed8;
      *(undefined4 *)(param_1 + 0x45) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)((int)param_1 + 0x1ec) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_4009f4fc;
      *(undefined4 *)((int)param_1 + 0x22c) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)(param_1 + 0x3e) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0edc;
      *(undefined4 *)(param_1 + 0x46) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)((int)param_1 + 500) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_40096734;
      *(undefined4 *)((int)param_1 + 0x234) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)(param_1 + 0x3f) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0ee0;
      *(undefined4 *)(param_1 + 0x47) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)((int)param_1 + 0x1fc) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0ba4;
      *(undefined4 *)((int)param_1 + 0x23c) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)(param_1 + 0x40) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0ee4;
      *(undefined4 *)(param_1 + 0x48) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)((int)param_1 + 0x204) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0ba8;
      *(undefined4 *)((int)param_1 + 0x244) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)(param_1 + 0x41) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      fVar35 = DAT_ram_400a0ee8;
      *(undefined4 *)(param_1 + 0x49) = uVar34;
      uVar34 = FUN_ram_400009d2(fVar31 * fVar35);
      *(undefined4 *)((int)param_1 + 0x20c) = uVar34;
      uVar34 = FUN_ram_40000712(fVar31 * fVar35);
      cVar19 = '\x01';
      *(undefined1 *)((int)param_1 + 0x14c) = 1;
      *(undefined4 *)((int)param_1 + 0x24c) = uVar34;
      goto LAB_ram_4007cfb8;
    }
  }
LAB_ram_4007d668:
  if (cVar1 != '\0') {
    memset(param_1 + 0x2a,0,0x40);
    fVar31 = DAT_ram_4009672c;
    *(float *)(param_1 + 0x32) = DAT_ram_4009672c;
    *(float *)((int)param_1 + 0x194) = fVar31;
    *(float *)(param_1 + 0x33) = fVar31;
    *(float *)((int)param_1 + 0x19c) = fVar31;
    *(float *)(param_1 + 0x34) = fVar31;
    *(float *)((int)param_1 + 0x1a4) = fVar31;
    *(float *)(param_1 + 0x35) = fVar31;
    *(float *)((int)param_1 + 0x1ac) = fVar31;
    *(float *)(param_1 + 0x36) = fVar31;
    *(float *)((int)param_1 + 0x1b4) = fVar31;
    *(float *)(param_1 + 0x37) = fVar31;
    *(float *)((int)param_1 + 0x1bc) = fVar31;
    *(float *)(param_1 + 0x38) = fVar31;
    *(float *)((int)param_1 + 0x1c4) = fVar31;
    *(float *)(param_1 + 0x39) = fVar31;
    *(float *)((int)param_1 + 0x1cc) = fVar31;
    memset(param_1 + 0x3a,0,0x40);
    *(float *)(param_1 + 0x42) = fVar31;
    *(float *)((int)param_1 + 0x214) = fVar31;
    *(float *)(param_1 + 0x43) = fVar31;
    *(float *)((int)param_1 + 0x21c) = fVar31;
    *(float *)(param_1 + 0x44) = fVar31;
    *(float *)((int)param_1 + 0x224) = fVar31;
    *(float *)(param_1 + 0x45) = fVar31;
    *(float *)((int)param_1 + 0x22c) = fVar31;
    *(float *)(param_1 + 0x46) = fVar31;
    *(float *)((int)param_1 + 0x234) = fVar31;
    *(float *)(param_1 + 0x47) = fVar31;
    *(float *)((int)param_1 + 0x23c) = fVar31;
    *(float *)(param_1 + 0x48) = fVar31;
    *(float *)((int)param_1 + 0x244) = fVar31;
    *(float *)(param_1 + 0x49) = fVar31;
    *(float *)((int)param_1 + 0x24c) = fVar31;
  }
  *(undefined1 *)((int)param_1 + 0x14c) = 0;
  cVar19 = '\0';
LAB_ram_4007cfb8:
  if (cVar1 != cVar19) {
    *(undefined2 *)((int)param_1 + 0x14e) = 0;
  }
  fVar31 = fVar32 * DAT_ram_40099f6c;
  *(int *)(param_1 + 0x4c) = (int)*(undefined8 *)((int)param_1 + 0x24);
  uVar34 = FUN_ram_40000bd8(fVar33 / fVar31);
  *(undefined4 *)((int)param_1 + 0x26c) = uVar34;
  fVar33 = (float)param_1[4] * fVar37 * fVar32;
  if (0.0 <= fVar33) {
    fVar33 = fVar33 + fVar3;
  }
  else {
    fVar33 = fVar33 - fVar3;
  }
  uVar17 = 0;
  uVar16 = *(ushort *)((int)param_1 + 0x134) - 1;
  if (*(ushort *)((int)param_1 + 0x134) != 0) {
    uVar21 = (int)fVar33 & ~(int)fVar33 >> 0x1f;
    if ((int)uVar16 < (int)uVar21) {
      uVar21 = uVar16;
    }
    uVar17 = (undefined2)uVar21;
  }
  *(undefined2 *)((int)param_1 + 0x132) = uVar17;
  fVar32 = (float)param_1[5] * fVar37 * fVar32;
  if (0.0 <= fVar32) {
    fVar32 = fVar32 + fVar3;
  }
  else {
    fVar32 = fVar32 - fVar3;
  }
  iVar18 = (int)fVar32;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar20 = (short)~(ushort)((uint)iVar18 >> 0x10) >> 0xf & (ushort)iVar18;
  if (0x2580 < iVar18) {
    uVar20 = 0x2580;
  }
  *(ushort *)(param_1 + 0x27) = uVar20;
  return;
}

