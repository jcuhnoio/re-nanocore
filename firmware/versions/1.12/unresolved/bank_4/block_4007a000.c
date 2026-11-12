/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4007a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4007a4b4.
 * REA evidence: ev_08cd423976cc5dc208c63e7ca75517fd412cbf6282ea5bba819afed049766b56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4007b3ae) */

void FUN_ram_4007a4b4(undefined8 *param_1)

{
  char cVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  uint uVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  float *pfVar28;
  undefined4 *puVar29;
  float *pfVar30;
  float fVar31;
  uint uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  float fVar43;
  
  fVar40 = DAT_ram_400a0b40;
  fVar35 = DAT_ram_4009f078;
  fVar43 = DAT_ram_40099f28;
  fVar2 = DAT_ram_4009675c;
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  fVar31 = (float)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x1c);
  if (DAT_ram_40099f28 <= fVar31) {
    if (*(char *)((int)param_1 + 0x21) == '\0') goto LAB_ram_4007a50a;
    fVar40 = fVar31 * DAT_ram_4009b128;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    fVar43 = fVar40 / fVar43 + fVar2;
    fVar40 = fVar31 / fVar35;
    uVar32 = (uint)(-1 < (int)fVar43) * (int)fVar43;
    uVar22 = 1;
    if (uVar32 != 0) {
      uVar22 = uVar32;
    }
    uVar24 = 0x2580;
    if (uVar32 < 0x2581) {
      uVar24 = uVar22;
    }
    *(uint *)((int)param_1 + 0x2c) = uVar24;
    *(uint *)(param_1 + 6) = uVar24 + 1;
    if (fVar31 <= 0.0) {
LAB_ram_4007aa68:
      fVar38 = DAT_ram_4009f0ac;
      fVar36 = DAT_ram_4009b140;
      fVar37 = DAT_ram_4009673c;
      fVar43 = DAT_ram_4009672c;
      pfVar30 = (float *)&DAT_ram_400a0dd8;
      iVar19 = 0;
      uVar32 = 1;
      puVar17 = (uint *)((int)param_1 + 0x3c);
      pfVar28 = (float *)&DAT_ram_400a0e00;
      do {
        fVar34 = *pfVar30;
        pfVar30 = pfVar30 + 1;
        uVar22 = (uint)(fVar34 * fVar38 * fVar31 + fVar2);
        uVar24 = (int)((float)(int)(&DAT_ram_400a0db0)[iVar19] * fVar40 + fVar2) + uVar22;
        uVar22 = uVar22 & (int)~uVar22 >> 0x1f;
        uVar24 = uVar24 & (int)~uVar24 >> 0x1f;
        if (0xb23 < (int)uVar24) {
          uVar24 = 0xb23;
        }
        if (0xb23 < (int)uVar22) {
          uVar22 = 0xb23;
        }
        *puVar17 = uVar22;
        puVar17[10] = uVar24;
        if (uVar32 < uVar24) {
          uVar32 = uVar24;
        }
        fVar39 = (float)FUN_ram_40000bd8(-(float)iVar19 / fVar37);
        piVar7 = &DAT_ram_400a0e28 + iVar19;
        iVar25 = (&DAT_ram_400a0e50)[iVar19];
        fVar34 = *pfVar28;
        iVar19 = iVar19 + 1;
        puVar17[0x14] = (uint)((float)*piVar7 * fVar39 * fVar36 * (fVar43 - fVar34));
        puVar17[0x1e] = (uint)((float)iVar25 * fVar39 * fVar36 * fVar34);
        puVar17 = puVar17 + 1;
        pfVar28 = pfVar28 + 1;
      } while (iVar19 != 10);
      *(uint *)(param_1 + 7) = uVar32 + 2;
    }
    else {
      iVar19 = (uint)(-1 < (int)(fVar31 + fVar2)) * (int)(fVar31 + fVar2);
      if (iVar19 == 0xac44) {
        puVar21 = &DAT_ram_400a0c38;
        iVar19 = 0;
      }
      else {
        if (iVar19 != 48000) goto LAB_ram_4007aa68;
        puVar21 = &DAT_ram_400a0cd8;
        iVar19 = 1;
      }
      FUN_ram_4000303c((int)param_1 + 0x3c,puVar21,0x28);
      FUN_ram_4000303c((int)param_1 + 100,(&PTR_DAT_ram_400a0c60_ram_400a0d70)[iVar19 * 7],0x28);
      FUN_ram_4000303c((int)param_1 + 0x8c,(&PTR_DAT_ram_400a0be8_ram_400a0d74)[iVar19 * 7],0x28);
      FUN_ram_4000303c((int)param_1 + 0xb4,(&PTR_DAT_ram_400a0c10_ram_400a0d78)[iVar19 * 7],0x28);
      fVar38 = DAT_ram_4009f0ac;
      fVar43 = DAT_ram_4009672c;
      uVar32 = *(uint *)((int)param_1 + 100);
      if (*(uint *)((int)param_1 + 100) < *(uint *)(param_1 + 0xd)) {
        uVar32 = *(uint *)(param_1 + 0xd);
      }
      if (uVar32 == 0) {
        uVar32 = 1;
      }
      uVar22 = *(uint *)((int)param_1 + 0x6c);
      if (*(uint *)((int)param_1 + 0x6c) < uVar32) {
        uVar22 = uVar32;
      }
      uVar32 = *(uint *)(param_1 + 0xe);
      if (*(uint *)(param_1 + 0xe) < uVar22) {
        uVar32 = uVar22;
      }
      uVar22 = *(uint *)((int)param_1 + 0x74);
      if (*(uint *)((int)param_1 + 0x74) < uVar32) {
        uVar22 = uVar32;
      }
      uVar32 = *(uint *)(param_1 + 0xf);
      if (*(uint *)(param_1 + 0xf) < uVar22) {
        uVar32 = uVar22;
      }
      uVar22 = *(uint *)((int)param_1 + 0x7c);
      if (*(uint *)((int)param_1 + 0x7c) < uVar32) {
        uVar22 = uVar32;
      }
      uVar32 = *(uint *)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x10) < uVar22) {
        uVar32 = uVar22;
      }
      uVar22 = *(uint *)((int)param_1 + 0x84);
      if (*(uint *)((int)param_1 + 0x84) < uVar32) {
        uVar22 = uVar32;
      }
      uVar32 = *(uint *)(param_1 + 0x11);
      if (*(uint *)(param_1 + 0x11) < uVar22) {
        uVar32 = uVar22;
      }
      if (uVar32 + 2 < 0xb26) {
        *(uint *)(param_1 + 7) = uVar32 + 2;
      }
      else {
        *(undefined4 *)(param_1 + 7) = 0xb25;
      }
    }
    uVar33 = DAT_ram_4009a644;
    puVar27 = param_1 + 0x1a36;
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    pfVar28 = (float *)&DAT_ram_400a0da0;
    puVar20 = puVar27;
    do {
      fVar40 = *pfVar28;
      puVar26 = puVar20 + -0x180;
      *(undefined4 *)((int)puVar20 + 0x84) = 0;
      *(undefined4 *)(puVar20 + 0x11) = uVar33;
      fVar40 = ((fVar40 + fVar40) * fVar31) / fVar35 + fVar2;
      uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
      if (uVar32 == 0) {
        uVar32 = 1;
      }
      if (800 < uVar32) {
        uVar32 = 800;
      }
      *(uint *)(puVar20 + 0x10) = uVar32;
      do {
        iVar19 = memset(puVar26,0,0x80);
        fence();
        puVar26 = (undefined8 *)(iVar19 + 0x80);
      } while (puVar26 != puVar20);
      iVar19 = memset(puVar26,0,0x80);
      fence();
      puVar20 = (undefined8 *)(iVar19 + 0xc8c);
      pfVar28 = pfVar28 + 1;
    } while (param_1 + 0x207c != puVar20);
    puVar29 = (undefined4 *)((int)param_1 + 300);
    puVar20 = param_1 + 99;
    FUN_ram_40000844(0,fVar31 * DAT_ram_4009f51c);
    fVar40 = (float)FUN_ram_40000658();
    fVar37 = fVar31 * DAT_ram_400a0b5c;
    uVar24 = 0xed8;
    iVar19 = (uint)(-1 < (int)fVar40) * (int)fVar40 + 2;
    fVar36 = fVar31 * DAT_ram_400a0b60;
    fVar34 = fVar31 * DAT_ram_400a0b64;
    fVar39 = fVar31 * DAT_ram_400a0b68;
    fVar6 = fVar31 * DAT_ram_400a0b6c;
    fVar4 = fVar31 * DAT_ram_400a0b70;
    fVar5 = fVar31 * DAT_ram_400a0b74;
    fVar40 = (fVar31 * DAT_ram_400a0b58) / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar22 = uVar32;
    if (uVar32 == 0) {
      uVar22 = 1;
    }
    if (0xed8 < uVar32) {
      uVar22 = uVar24;
    }
    uVar32 = iVar19 + uVar22;
    if (0xed8 < iVar19 + uVar22) {
      uVar32 = uVar24;
    }
    *(uint *)((int)param_1 + 0xdc) = uVar22;
    *(short *)((int)param_1 + 0xfc) = (short)uVar32;
    *(float *)((int)param_1 + 0x10c) = (float)(int)uVar32;
    fVar40 = fVar37 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar22 = uVar32;
    if (uVar32 == 0) {
      uVar22 = 1;
    }
    if (0xed8 < uVar32) {
      uVar22 = uVar24;
    }
    uVar32 = iVar19 + uVar22;
    if (0xed8 < iVar19 + uVar22) {
      uVar32 = uVar24;
    }
    *(uint *)(param_1 + 0x1c) = uVar22;
    *(short *)((int)param_1 + 0xfe) = (short)uVar32;
    *(float *)(param_1 + 0x22) = (float)(int)uVar32;
    fVar40 = fVar36 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar22 = uVar32;
    if (uVar32 == 0) {
      uVar22 = 1;
    }
    if (0xed8 < uVar32) {
      uVar22 = uVar24;
    }
    uVar32 = iVar19 + uVar22;
    if (0xed8 < iVar19 + uVar22) {
      uVar32 = uVar24;
    }
    *(uint *)((int)param_1 + 0xe4) = uVar22;
    *(short *)(param_1 + 0x20) = (short)uVar32;
    *(float *)((int)param_1 + 0x114) = (float)(int)uVar32;
    fVar40 = fVar34 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar22 = uVar32;
    if (uVar32 == 0) {
      uVar22 = 1;
    }
    if (0xed8 < uVar32) {
      uVar22 = uVar24;
    }
    uVar32 = iVar19 + uVar22;
    if (0xed8 < iVar19 + uVar22) {
      uVar32 = uVar24;
    }
    *(uint *)(param_1 + 0x1d) = uVar22;
    *(short *)((int)param_1 + 0x102) = (short)uVar32;
    *(float *)(param_1 + 0x23) = (float)(int)uVar32;
    fVar40 = fVar39 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar22 = uVar32;
    if (uVar32 == 0) {
      uVar22 = 1;
    }
    if (0xed8 < uVar32) {
      uVar22 = uVar24;
    }
    uVar32 = iVar19 + uVar22;
    if (0xed8 < iVar19 + uVar22) {
      uVar32 = uVar24;
    }
    *(uint *)((int)param_1 + 0xec) = uVar22;
    *(short *)((int)param_1 + 0x104) = (short)uVar32;
    *(float *)((int)param_1 + 0x11c) = (float)(int)uVar32;
    fVar40 = fVar6 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar22 = uVar32;
    if (uVar32 == 0) {
      uVar22 = 1;
    }
    if (0xed8 < uVar32) {
      uVar22 = uVar24;
    }
    uVar32 = iVar19 + uVar22;
    if (0xed8 < iVar19 + uVar22) {
      uVar32 = uVar24;
    }
    *(uint *)(param_1 + 0x1e) = uVar22;
    *(short *)((int)param_1 + 0x106) = (short)uVar32;
    *(float *)(param_1 + 0x24) = (float)(int)uVar32;
    fVar40 = fVar4 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar22 = uVar32;
    if (uVar32 == 0) {
      uVar22 = 1;
    }
    if (0xed8 < uVar32) {
      uVar22 = uVar24;
    }
    uVar32 = iVar19 + uVar22;
    if (0xed8 < iVar19 + uVar22) {
      uVar32 = uVar24;
    }
    *(uint *)((int)param_1 + 0xf4) = uVar22;
    *(short *)(param_1 + 0x21) = (short)uVar32;
    *(float *)((int)param_1 + 0x124) = (float)(int)uVar32;
    fVar40 = fVar5 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar22 = 1;
    if (uVar32 != 0) {
      uVar22 = uVar32;
    }
    if (0xed8 < uVar32) {
      uVar22 = uVar24;
    }
    uVar32 = iVar19 + uVar22;
    if (0xed8 < iVar19 + uVar22) {
      uVar32 = uVar24;
    }
    *(uint *)(param_1 + 0x1f) = uVar22;
    *(short *)((int)param_1 + 0x10a) = (short)uVar32;
    *(float *)(param_1 + 0x25) = (float)(int)uVar32;
    memset((int)param_1 + 0x234,0,0x40);
    memset(puVar29,0,0x20);
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    do {
      memset(puVar20,0,0x80);
      fence();
      puVar20 = puVar20 + 0x10;
    } while (puVar20 != param_1 + 0x1323);
    *(undefined1 *)(param_1 + 0x1323) = 0;
    *(undefined1 *)((int)param_1 + 0x9919) = 0;
    *(undefined1 *)((int)param_1 + 0x991a) = 0;
    *(undefined1 *)((int)param_1 + 0x991b) = 0;
    fence();
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    iVar19 = (int)param_1 + 0x991c;
    do {
      iVar19 = memset(iVar19,0,0x80);
      fence();
      iVar19 = iVar19 + 0x80;
    } while (iVar19 != (int)param_1 + 0xc59c);
    memset((int)param_1 + 0xc59c,0,0x14);
    fence();
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    do {
      puVar20 = puVar27 + -0x180;
      do {
        iVar19 = memset(puVar20,0,0x80);
        fence();
        puVar20 = (undefined8 *)(iVar19 + 0x80);
      } while (puVar20 != puVar27);
      iVar19 = memset(puVar20,0,0x80);
      fence();
      *(undefined4 *)(iVar19 + 0x84) = 0;
      puVar27 = (undefined8 *)(iVar19 + 0xc8c);
    } while (param_1 + 0x207c != puVar27);
    puVar20 = param_1 + 0x265c;
    do {
      puVar27 = puVar20 + -0x760;
      do {
        iVar19 = memset(puVar27,0,0x80);
        fence();
        puVar27 = (undefined8 *)(iVar19 + 0x80);
      } while (puVar27 != puVar20);
      iVar19 = memset(puVar27,0,0x60);
      fence();
      *puVar29 = 0;
      puVar29[0x42] = 0;
      puVar29[0x4a] = 0;
      puVar20 = (undefined8 *)(iVar19 + 0x3b60);
      puVar29 = puVar29 + 1;
    } while (param_1 + 0x61bc != puVar20);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)((int)param_1 + 0x151) = 0;
    memset((int)param_1 + 0x154,0,0x20);
    fence();
    uVar41 = *(ulonglong *)((int)param_1 + 4);
    *(undefined4 *)(param_1 + 0x53) = 0;
    *(undefined4 *)((int)param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)((int)param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)((int)param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
    *(undefined4 *)((int)param_1 + 0x2cc) = 0;
    *(undefined4 *)((int)param_1 + 0x2e4) = 0;
    *(undefined4 *)(param_1 + 0x5d) = 0;
    *(undefined4 *)((int)param_1 + 0x2ec) = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    *(undefined4 *)(param_1 + 0x61) = 0;
    *(undefined4 *)((int)param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x62) = 0;
    *(undefined4 *)((int)param_1 + 0x314) = 0;
    if (0.0 <= (float)uVar41) goto LAB_ram_4007a530;
LAB_ram_4007affe:
    fVar40 = DAT_ram_40099f88;
    uVar42 = param_1[1];
    bVar3 = DAT_ram_40099f88 <= (float)uVar42;
    *(undefined8 *)((int)param_1 + 4) = 0;
    if (bVar3) goto LAB_ram_4007a556;
LAB_ram_4007b016:
    fVar35 = DAT_ram_400a0b44;
    uVar41 = *(ulonglong *)((int)param_1 + 0xc);
    param_1[1] = (ulonglong)(uint)fVar40;
    fVar40 = DAT_ram_400a0b48;
    if (0.0 <= (float)uVar41) goto LAB_ram_4007a58e;
LAB_ram_4007b03a:
    uVar42 = param_1[2];
    *(undefined8 *)((int)param_1 + 0xc) = 0;
    if (0.0 <= (float)uVar42) goto LAB_ram_4007a5a8;
LAB_ram_4007b04e:
    uVar41 = *(ulonglong *)((int)param_1 + 0x14);
    param_1[2] = 0;
    if (0.0 <= (float)uVar41) goto LAB_ram_4007a5c2;
LAB_ram_4007b062:
    uVar41 = 0;
LAB_ram_4007b066:
    *(ulonglong *)((int)param_1 + 0x14) = uVar41;
    fVar37 = DAT_ram_4009f060;
    cVar16 = *(char *)(param_1 + 0x2a);
    fVar36 = (float)param_1[3];
    if (0.0 <= fVar36) goto LAB_ram_4007a5e0;
    *(undefined4 *)(param_1 + 3) = 0;
LAB_ram_4007b086:
    fVar34 = (float)uVar41;
    fVar36 = 0.0;
    if (fVar34 <= fVar37) goto LAB_ram_4007a60a;
    fVar37 = 0.0;
    *(float *)((int)param_1 + 0x14c) = fVar31 * DAT_ram_4009f51c;
LAB_ram_4007b0a6:
    if (0.0 < fVar37) {
LAB_ram_4007b0b2:
      fVar36 = fVar37 * DAT_ram_4009f090 * DAT_ram_40099f58;
      goto LAB_ram_4007b12c;
    }
LAB_ram_4007a622:
    if (cVar16 != '\0') {
      memset((int)param_1 + 0x174,0,0x20);
      fVar37 = DAT_ram_4009672c;
      *(float *)((int)param_1 + 0x194) = DAT_ram_4009672c;
      *(float *)(param_1 + 0x33) = fVar37;
      *(float *)((int)param_1 + 0x19c) = fVar37;
      *(float *)(param_1 + 0x34) = fVar37;
      *(float *)((int)param_1 + 0x1a4) = fVar37;
      *(float *)(param_1 + 0x35) = fVar37;
      *(float *)((int)param_1 + 0x1ac) = fVar37;
      *(float *)(param_1 + 0x36) = fVar37;
      memset((int)param_1 + 0x1b4,0,0x20);
      *(float *)((int)param_1 + 0x1d4) = fVar37;
      *(float *)(param_1 + 0x3b) = fVar37;
      *(float *)((int)param_1 + 0x1dc) = fVar37;
      *(float *)(param_1 + 0x3c) = fVar37;
      *(float *)((int)param_1 + 0x1e4) = fVar37;
      *(float *)(param_1 + 0x3d) = fVar37;
      *(float *)((int)param_1 + 0x1ec) = fVar37;
      *(float *)(param_1 + 0x3e) = fVar37;
    }
    *(undefined1 *)(param_1 + 0x2a) = 0;
    cVar23 = '\0';
  }
  else {
    fVar31 = DAT_ram_40099f28;
    if (*(char *)((int)param_1 + 0x21) != '\0') {
      *(undefined4 *)((int)param_1 + 0x2c) = 200;
      *(undefined4 *)(param_1 + 6) = 0xc9;
      *(undefined4 *)((int)param_1 + 0x24) = 0;
      fVar31 = fVar43;
      goto LAB_ram_4007aa68;
    }
LAB_ram_4007a50a:
    uVar41 = *(ulonglong *)((int)param_1 + 4);
    fVar38 = DAT_ram_4009f0ac;
    fVar43 = DAT_ram_4009672c;
    if ((float)uVar41 < 0.0) goto LAB_ram_4007affe;
LAB_ram_4007a530:
    fVar40 = DAT_ram_40099f88;
    if (DAT_ram_4009b128 < (float)uVar41) {
      uVar41 = (ulonglong)(uint)DAT_ram_4009b128;
    }
    uVar42 = param_1[1];
    *(ulonglong *)((int)param_1 + 4) = uVar41;
    if ((float)uVar42 < fVar40) goto LAB_ram_4007b016;
LAB_ram_4007a556:
    if (DAT_ram_40099f50 < (float)uVar42) {
      uVar42 = (ulonglong)(uint)DAT_ram_40099f50;
      fVar40 = DAT_ram_400a0b50;
      fVar35 = DAT_ram_400a0b4c;
    }
    else {
      fVar40 = (float)uVar42 * DAT_ram_400a0b78;
      fVar35 = fVar40 * DAT_ram_4009f060;
    }
    uVar41 = *(ulonglong *)((int)param_1 + 0xc);
    param_1[1] = uVar42;
    if ((float)uVar41 < 0.0) goto LAB_ram_4007b03a;
LAB_ram_4007a58e:
    if (fVar43 < (float)uVar41) {
      uVar41 = (ulonglong)(uint)fVar43;
    }
    uVar42 = param_1[2];
    *(ulonglong *)((int)param_1 + 0xc) = uVar41;
    if ((float)uVar42 < 0.0) goto LAB_ram_4007b04e;
LAB_ram_4007a5a8:
    if (fVar43 < (float)uVar42) {
      uVar42 = (ulonglong)(uint)fVar43;
    }
    uVar41 = *(ulonglong *)((int)param_1 + 0x14);
    param_1[2] = uVar42;
    if ((float)uVar41 < 0.0) goto LAB_ram_4007b062;
LAB_ram_4007a5c2:
    fVar37 = DAT_ram_4009f060;
    if (DAT_ram_4009f060 < (float)uVar41) {
      uVar41 = (ulonglong)(uint)DAT_ram_4009f060;
      goto LAB_ram_4007b066;
    }
    cVar16 = *(char *)(param_1 + 0x2a);
    fVar36 = (float)param_1[3];
    if (fVar36 < 0.0) {
      *(undefined4 *)(param_1 + 3) = 0;
      goto LAB_ram_4007b086;
    }
LAB_ram_4007a5e0:
    fVar37 = DAT_ram_4009f080;
    fVar34 = (float)uVar41;
    if (fVar36 <= DAT_ram_4009f080) {
      fVar39 = 0.0;
      fVar37 = fVar36;
      if ((0.0 <= fVar34) && (fVar39 = DAT_ram_4009f51c, fVar34 <= DAT_ram_4009f060)) {
LAB_ram_4007a60a:
        fVar39 = fVar34 * fVar38;
        fVar37 = fVar36;
      }
      *(float *)((int)param_1 + 0x14c) = fVar31 * fVar39;
      if (fVar37 < 0.0) goto LAB_ram_4007a622;
      fVar36 = DAT_ram_400a0b54;
      if (fVar37 <= DAT_ram_4009f080) goto LAB_ram_4007b0a6;
    }
    else {
      param_1[3] = (ulonglong)(uint)DAT_ram_4009f080;
      fVar36 = DAT_ram_400a0b54;
      if (0.0 <= fVar34) {
        if (DAT_ram_4009f060 < fVar34) {
          *(float *)((int)param_1 + 0x14c) = fVar31 * DAT_ram_4009f51c;
        }
        else {
          *(float *)((int)param_1 + 0x14c) = fVar34 * fVar38 * fVar31;
        }
        goto LAB_ram_4007b0b2;
      }
      *(float *)((int)param_1 + 0x14c) = fVar31 * 0.0;
    }
LAB_ram_4007b12c:
    uVar15 = DAT_ram_400a0b94;
    uVar14 = DAT_ram_400a0b90;
    uVar13 = DAT_ram_400a0b8c;
    uVar12 = DAT_ram_400a0b88;
    uVar11 = DAT_ram_400a0b84;
    uVar10 = DAT_ram_400a0b80;
    uVar9 = DAT_ram_400a0b7c;
    uVar8 = DAT_ram_4009f920;
    uVar33 = DAT_ram_4009f918;
    fVar34 = DAT_ram_4009672c;
    fVar37 = DAT_ram_40096728;
    fVar36 = fVar36 / fVar31;
    if (cVar16 == '\0') {
      *(undefined4 *)((int)param_1 + 0x174) = 0;
      *(float *)((int)param_1 + 0x194) = fVar34;
      *(undefined4 *)(param_1 + 0x2f) = uVar33;
      *(undefined4 *)(param_1 + 0x33) = uVar33;
      *(float *)((int)param_1 + 0x17c) = fVar34;
      *(undefined4 *)((int)param_1 + 0x19c) = uVar8;
      *(undefined4 *)(param_1 + 0x30) = uVar33;
      *(undefined4 *)(param_1 + 0x34) = uVar9;
      *(undefined4 *)((int)param_1 + 0x184) = uVar10;
      *(float *)((int)param_1 + 0x1a4) = fVar37;
      *(undefined4 *)(param_1 + 0x31) = uVar11;
      *(undefined4 *)(param_1 + 0x35) = uVar12;
      *(float *)((int)param_1 + 0x18c) = fVar37;
      *(undefined4 *)((int)param_1 + 0x1ac) = uVar13;
      *(undefined4 *)(param_1 + 0x32) = uVar14;
      *(undefined4 *)(param_1 + 0x36) = uVar15;
    }
    uVar33 = FUN_ram_400009d2(fVar36);
    *(undefined4 *)((int)param_1 + 0x1b4) = uVar33;
    uVar33 = FUN_ram_40000712(fVar36);
    fVar37 = DAT_ram_400a0b98;
    *(undefined4 *)((int)param_1 + 0x1d4) = uVar33;
    uVar33 = FUN_ram_400009d2(fVar36 * fVar37);
    *(undefined4 *)(param_1 + 0x37) = uVar33;
    uVar33 = FUN_ram_40000712(fVar36 * fVar37);
    fVar37 = DAT_ram_400a0b9c;
    *(undefined4 *)(param_1 + 0x3b) = uVar33;
    uVar33 = FUN_ram_400009d2(fVar36 * fVar37);
    *(undefined4 *)((int)param_1 + 0x1bc) = uVar33;
    uVar33 = FUN_ram_40000712(fVar36 * fVar37);
    fVar37 = DAT_ram_400a0ba0;
    *(undefined4 *)((int)param_1 + 0x1dc) = uVar33;
    uVar33 = FUN_ram_400009d2(fVar36 * fVar37);
    *(undefined4 *)(param_1 + 0x38) = uVar33;
    uVar33 = FUN_ram_40000712(fVar36 * fVar37);
    fVar37 = DAT_ram_4009f4fc;
    *(undefined4 *)(param_1 + 0x3c) = uVar33;
    uVar33 = FUN_ram_400009d2(fVar36 * fVar37);
    *(undefined4 *)((int)param_1 + 0x1c4) = uVar33;
    uVar33 = FUN_ram_40000712(fVar36 * fVar37);
    fVar37 = DAT_ram_40096734;
    *(undefined4 *)((int)param_1 + 0x1e4) = uVar33;
    uVar33 = FUN_ram_400009d2(fVar36 * fVar37);
    *(undefined4 *)(param_1 + 0x39) = uVar33;
    uVar33 = FUN_ram_40000712(fVar36 * fVar37);
    fVar37 = DAT_ram_400a0ba4;
    *(undefined4 *)(param_1 + 0x3d) = uVar33;
    uVar33 = FUN_ram_400009d2(fVar36 * fVar37);
    *(undefined4 *)((int)param_1 + 0x1cc) = uVar33;
    uVar33 = FUN_ram_40000712(fVar36 * fVar37);
    fVar37 = DAT_ram_400a0ba8;
    *(undefined4 *)((int)param_1 + 0x1ec) = uVar33;
    uVar33 = FUN_ram_400009d2(fVar36 * fVar37);
    *(undefined4 *)(param_1 + 0x3a) = uVar33;
    uVar33 = FUN_ram_40000712(fVar36 * fVar37);
    cVar23 = '\x01';
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined4 *)(param_1 + 0x3e) = uVar33;
  }
  if (cVar16 != cVar23) {
    *(undefined2 *)((int)param_1 + 0x152) = 0;
  }
  fVar37 = DAT_ram_4009f0b0;
  uVar33 = DAT_ram_40099f38;
  *(undefined1 *)((int)param_1 + 0x151) = 0;
  puVar17 = (uint *)((int)param_1 + 0xdc);
  do {
    puVar18 = puVar17 + 1;
    fVar36 = ((float)*puVar17 / fVar31) * fVar37;
    uVar32 = FUN_ram_40000d44(uVar33,fVar36 / fVar40);
    puVar17[0x46] = uVar32;
    uVar32 = FUN_ram_40000d44(uVar33,fVar36 / fVar35);
    puVar17[0x4e] = uVar32;
    fVar36 = DAT_ram_4009672c;
    puVar17 = puVar18;
  } while ((uint *)((int)param_1 + 0xfc) != puVar18);
  if (cVar1 != '\0') {
    *(float *)((int)param_1 + 500) = DAT_ram_4009672c;
    *(float *)((int)param_1 + 0x214) = fVar36;
    *(float *)(param_1 + 0x3f) = fVar36;
    *(float *)(param_1 + 0x43) = fVar36;
    *(float *)((int)param_1 + 0x1fc) = fVar36;
    *(float *)((int)param_1 + 0x21c) = fVar36;
    *(float *)(param_1 + 0x40) = fVar36;
    *(float *)(param_1 + 0x44) = fVar36;
    *(float *)((int)param_1 + 0x204) = fVar36;
    *(float *)((int)param_1 + 0x224) = fVar36;
    *(float *)(param_1 + 0x41) = fVar36;
    *(float *)(param_1 + 0x45) = fVar36;
    *(float *)((int)param_1 + 0x20c) = fVar36;
    *(float *)((int)param_1 + 0x22c) = fVar36;
    *(float *)(param_1 + 0x42) = fVar36;
    *(float *)(param_1 + 0x46) = fVar36;
  }
  fVar40 = DAT_ram_40096728;
  fVar37 = (float)*(undefined8 *)((int)param_1 + 0xc);
  fVar35 = DAT_ram_4009f5e8;
  if ((0.0 <= fVar37) && (fVar35 = DAT_ram_4009f0bc, fVar37 <= fVar43)) {
    fVar35 = fVar37 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728;
    fVar37 = fVar43;
    if (ABS(fVar35) <= DAT_ram_4009f0c8) goto LAB_ram_4007a77a;
    if (fVar35 < 0.0) {
      fVar35 = (((-fVar35 - DAT_ram_4009f0c8) / DAT_ram_400a0bac) * DAT_ram_4009a354) /
               DAT_ram_40099f50;
    }
    else {
      fVar35 = (((fVar35 - DAT_ram_4009f0c8) / DAT_ram_400a0bac) * DAT_ram_40096764) /
               DAT_ram_40099f50;
    }
  }
  fVar37 = (float)FUN_ram_40000d44(uVar33,fVar35);
LAB_ram_4007a77a:
  fVar35 = DAT_ram_400a0bb0;
  *(float *)(param_1 + 0x55) = fVar37;
  uVar33 = FUN_ram_40000bd8(fVar35 / fVar31);
  fVar35 = DAT_ram_400a0bb4;
  *(undefined4 *)((int)param_1 + 0x274) = uVar33;
  uVar33 = FUN_ram_40000bd8(fVar35 / fVar31);
  *(undefined4 *)(param_1 + 0x4f) = uVar33;
  if (cVar1 != '\0') {
    *(undefined4 *)((int)param_1 + 0x274) = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
  }
  fVar37 = fVar31 * DAT_ram_400a0bb8;
  fVar35 = (float)*(undefined8 *)((int)param_1 + 4) * fVar38 * fVar31 + fVar2;
  uVar32 = (uint)(-1 < (int)fVar35) * (int)fVar35;
  if (*(uint *)((int)param_1 + 0x2c) < uVar32) {
    uVar32 = *(uint *)((int)param_1 + 0x2c);
  }
  *(uint *)(param_1 + 5) = uVar32;
  uVar33 = FUN_ram_40000bd8(fVar40 / fVar37);
  fVar40 = DAT_ram_400a0bbc;
  *(undefined4 *)((int)param_1 + 0x27c) = uVar33;
  fVar34 = (float)FUN_ram_40000712(fVar40 / fVar31);
  fVar35 = (float)FUN_ram_400009d2(fVar40 / fVar31);
  fVar5 = DAT_ram_400a0bc0;
  fVar4 = DAT_ram_40096744;
  fVar35 = fVar35 / DAT_ram_400a0bc0;
  fVar36 = fVar34 * DAT_ram_40096744;
  fVar40 = fVar35 + fVar43;
  fVar38 = DAT_ram_400a0bc4 / fVar31;
  fVar37 = ((fVar43 - fVar34) * fVar2) / fVar40;
  *(float *)((int)param_1 + 0x284) = fVar37;
  *(float *)((int)param_1 + 0x28c) = fVar37;
  *(float *)(param_1 + 0x51) = (fVar43 - fVar34) / fVar40;
  *(float *)(param_1 + 0x52) = fVar36 / fVar40;
  *(float *)((int)param_1 + 0x294) = (fVar43 - fVar35) / fVar40;
  fVar36 = (float)FUN_ram_40000712(fVar38);
  fVar35 = (float)FUN_ram_400009d2(fVar38);
  fVar35 = fVar35 / fVar5;
  fVar40 = fVar35 + fVar43;
  fVar38 = DAT_ram_400a0bc8 / fVar31;
  fVar37 = ((fVar36 + fVar43) * fVar2) / fVar40;
  *(float *)((int)param_1 + 0x2ac) = fVar37;
  *(float *)((int)param_1 + 0x2b4) = fVar37;
  *(float *)(param_1 + 0x56) = -(fVar36 + fVar43) / fVar40;
  *(float *)(param_1 + 0x57) = (fVar36 * fVar4) / fVar40;
  *(float *)((int)param_1 + 700) = (fVar43 - fVar35) / fVar40;
  fVar37 = (float)FUN_ram_40000712(fVar38);
  fVar35 = (float)FUN_ram_400009d2(fVar38);
  fVar40 = fVar37 * DAT_ram_400a0bd0 + DAT_ram_400a0bd4;
  fVar38 = fVar35 * fVar2 * DAT_ram_400a0bcc;
  fVar39 = -(fVar37 * DAT_ram_400a0bd0) + DAT_ram_400a0bd4;
  fVar6 = -(fVar37 * DAT_ram_400a0bd4) + DAT_ram_400a0bd0;
  fVar35 = fVar38 * DAT_ram_400a0bd8 + fVar39;
  fVar34 = fVar38 * DAT_ram_400a0bd8;
  fVar37 = (fVar37 * DAT_ram_400a0bd4 + DAT_ram_400a0bd0) * DAT_ram_400a0be0;
  fVar36 = (fVar38 * DAT_ram_400a0bd8 + fVar40) * DAT_ram_400a0bdc;
  fVar40 = (-(fVar38 * DAT_ram_400a0bd8) + fVar40) * DAT_ram_400a0bdc;
  fVar31 = DAT_ram_400a0be4 / fVar31;
  *(float *)((int)param_1 + 0x2dc) = (fVar6 + fVar6) / fVar35;
  *(float *)(param_1 + 0x5b) = fVar40 / fVar35;
  *(float *)(param_1 + 0x5c) = (-fVar34 + fVar39) / fVar35;
  *(float *)((int)param_1 + 0x2d4) = fVar37 / fVar35;
  *(float *)(param_1 + 0x5a) = fVar36 / fVar35;
  fVar38 = (float)FUN_ram_40000712(fVar31);
  fVar35 = (float)FUN_ram_400009d2(fVar31);
  fVar35 = fVar35 / fVar5;
  *(undefined1 *)(param_1 + 4) = 0;
  fVar40 = fVar35 + fVar43;
  fVar2 = ((fVar43 - fVar38) * fVar2) / fVar40;
  *(float *)((int)param_1 + 0x2f4) = fVar2;
  *(float *)((int)param_1 + 0x2fc) = fVar2;
  *(float *)(param_1 + 0x60) = (fVar38 * fVar4) / fVar40;
  *(float *)((int)param_1 + 0x304) = (fVar43 - fVar35) / fVar40;
  *(float *)(param_1 + 0x5f) = (fVar43 - fVar38) / fVar40;
  return;
}


