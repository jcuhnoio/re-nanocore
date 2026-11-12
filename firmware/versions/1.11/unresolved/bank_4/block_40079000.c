/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40079000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4007989c.
 * REA evidence: ev_a9f4f4bb552ad3a789b1735f9209b51afbd0a4ad9d30e955521a8c28e2588019
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4007a6d0) */

void FUN_ram_4007989c(undefined8 *param_1)

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
  int iVar18;
  uint *puVar19;
  undefined4 *puVar20;
  undefined *puVar22;
  uint uVar23;
  char cVar24;
  uint uVar25;
  int iVar26;
  undefined8 *puVar27;
  float *pfVar28;
  float *pfVar29;
  float fVar30;
  uint uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  float fVar42;
  undefined4 *puVar21;
  
  fVar39 = DAT_ram_4009aad8;
  fVar34 = DAT_ram_40099f80;
  fVar42 = DAT_ram_40094e80;
  fVar2 = DAT_ram_40094634;
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  fVar30 = (float)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x1c);
  if (DAT_ram_40094e80 <= fVar30) {
    if (*(char *)((int)param_1 + 0x21) == '\0') goto LAB_ram_400798f2;
    fVar39 = fVar30 * DAT_ram_4009600c;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    fVar42 = fVar39 / fVar42 + fVar2;
    fVar39 = fVar30 / fVar34;
    uVar31 = (uint)(-1 < (int)fVar42) * (int)fVar42;
    uVar23 = 1;
    if (uVar31 != 0) {
      uVar23 = uVar31;
    }
    uVar25 = 0x2580;
    if (uVar31 < 0x2581) {
      uVar25 = uVar23;
    }
    *(uint *)((int)param_1 + 0x2c) = uVar25;
    *(uint *)(param_1 + 6) = uVar25 + 1;
    if (fVar30 <= 0.0) {
LAB_ram_40079e50:
      fVar37 = DAT_ram_40099fa4;
      fVar35 = DAT_ram_40096018;
      fVar36 = DAT_ram_40094614;
      fVar42 = DAT_ram_40094604;
      pfVar29 = (float *)&DAT_ram_4009ad70;
      iVar18 = 0;
      uVar31 = 1;
      puVar19 = (uint *)((int)param_1 + 0x3c);
      pfVar28 = (float *)&DAT_ram_4009ad98;
      do {
        fVar33 = *pfVar29;
        pfVar29 = pfVar29 + 1;
        uVar23 = (uint)(fVar33 * fVar37 * fVar30 + fVar2);
        uVar25 = (int)((float)(int)(&DAT_ram_4009ad48)[iVar18] * fVar39 + fVar2) + uVar23;
        uVar23 = uVar23 & (int)~uVar23 >> 0x1f;
        uVar25 = uVar25 & (int)~uVar25 >> 0x1f;
        if (0xb23 < (int)uVar25) {
          uVar25 = 0xb23;
        }
        if (0xb23 < (int)uVar23) {
          uVar23 = 0xb23;
        }
        *puVar19 = uVar23;
        puVar19[10] = uVar25;
        if (uVar31 < uVar25) {
          uVar31 = uVar25;
        }
        fVar38 = (float)FUN_ram_40000bd8(-(float)iVar18 / fVar36);
        piVar7 = &DAT_ram_4009adc0 + iVar18;
        iVar26 = (&DAT_ram_4009ade8)[iVar18];
        fVar33 = *pfVar28;
        iVar18 = iVar18 + 1;
        puVar19[0x14] = (uint)((float)*piVar7 * fVar38 * fVar35 * (fVar42 - fVar33));
        puVar19[0x1e] = (uint)((float)iVar26 * fVar38 * fVar35 * fVar33);
        puVar19 = puVar19 + 1;
        pfVar28 = pfVar28 + 1;
      } while (iVar18 != 10);
      *(uint *)(param_1 + 7) = uVar31 + 2;
    }
    else {
      iVar18 = (uint)(-1 < (int)(fVar30 + fVar2)) * (int)(fVar30 + fVar2);
      if (iVar18 == 0xac44) {
        puVar22 = &DAT_ram_4009abd0;
        iVar18 = 0;
      }
      else {
        if (iVar18 != 48000) goto LAB_ram_40079e50;
        puVar22 = &DAT_ram_4009ac70;
        iVar18 = 1;
      }
      FUN_ram_4000304c((int)param_1 + 0x3c,puVar22,0x28);
      FUN_ram_4000304c((int)param_1 + 100,(&PTR_DAT_ram_4009abf8_ram_4009ad08)[iVar18 * 7],0x28);
      FUN_ram_4000304c((int)param_1 + 0x8c,(&PTR_DAT_ram_4009ab80_ram_4009ad0c)[iVar18 * 7],0x28);
      FUN_ram_4000304c((int)param_1 + 0xb4,(&PTR_DAT_ram_4009aba8_ram_4009ad10)[iVar18 * 7],0x28);
      fVar37 = DAT_ram_40099fa4;
      fVar42 = DAT_ram_40094604;
      uVar31 = *(uint *)((int)param_1 + 100);
      if (*(uint *)((int)param_1 + 100) < *(uint *)(param_1 + 0xd)) {
        uVar31 = *(uint *)(param_1 + 0xd);
      }
      if (uVar31 == 0) {
        uVar31 = 1;
      }
      uVar23 = *(uint *)((int)param_1 + 0x6c);
      if (*(uint *)((int)param_1 + 0x6c) < uVar31) {
        uVar23 = uVar31;
      }
      uVar31 = *(uint *)(param_1 + 0xe);
      if (*(uint *)(param_1 + 0xe) < uVar23) {
        uVar31 = uVar23;
      }
      uVar23 = *(uint *)((int)param_1 + 0x74);
      if (*(uint *)((int)param_1 + 0x74) < uVar31) {
        uVar23 = uVar31;
      }
      uVar31 = *(uint *)(param_1 + 0xf);
      if (*(uint *)(param_1 + 0xf) < uVar23) {
        uVar31 = uVar23;
      }
      uVar23 = *(uint *)((int)param_1 + 0x7c);
      if (*(uint *)((int)param_1 + 0x7c) < uVar31) {
        uVar23 = uVar31;
      }
      uVar31 = *(uint *)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x10) < uVar23) {
        uVar31 = uVar23;
      }
      uVar23 = *(uint *)((int)param_1 + 0x84);
      if (*(uint *)((int)param_1 + 0x84) < uVar31) {
        uVar23 = uVar31;
      }
      uVar31 = *(uint *)(param_1 + 0x11);
      if (*(uint *)(param_1 + 0x11) < uVar23) {
        uVar31 = uVar23;
      }
      if (uVar31 + 2 < 0xb26) {
        *(uint *)(param_1 + 7) = uVar31 + 2;
      }
      else {
        *(undefined4 *)(param_1 + 7) = 0xb25;
      }
    }
    uVar31 = DAT_ram_4009558c;
    pfVar28 = (float *)&DAT_ram_4009ad38;
    puVar19 = (uint *)(param_1 + 0x1a46);
    do {
      fVar39 = *pfVar28;
      puVar17 = puVar19 + -800;
      puVar19[1] = 0;
      puVar19[2] = uVar31;
      pfVar28 = pfVar28 + 1;
      fVar39 = ((fVar39 + fVar39) * fVar30) / fVar34 + fVar2;
      uVar23 = (uint)(-1 < (int)fVar39) * (int)fVar39;
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      if (800 < uVar23) {
        uVar23 = 800;
      }
      *puVar19 = uVar23;
      puVar19 = puVar19 + 0x323;
      memset(puVar17,0,0xc80);
    } while ((uint *)(param_1 + 0x208c) != puVar19);
    FUN_ram_40000844(0,fVar30 * DAT_ram_4009a400);
    fVar39 = (float)FUN_ram_40000658();
    fVar36 = fVar30 * DAT_ram_4009aaf4;
    fVar35 = fVar30 * DAT_ram_4009aaf8;
    fVar33 = fVar30 * DAT_ram_4009aafc;
    fVar38 = fVar30 * DAT_ram_4009ab00;
    uVar25 = 0xed8;
    iVar18 = (uint)(-1 < (int)fVar39) * (int)fVar39 + 2;
    fVar6 = fVar30 * DAT_ram_4009ab04;
    fVar4 = fVar30 * DAT_ram_4009ab08;
    fVar5 = fVar30 * DAT_ram_4009ab0c;
    fVar39 = (fVar30 * DAT_ram_4009aaf0) / fVar34 + fVar2;
    uVar31 = (uint)(-1 < (int)fVar39) * (int)fVar39;
    uVar23 = uVar31;
    if (uVar31 == 0) {
      uVar23 = 1;
    }
    if (0xed8 < uVar31) {
      uVar23 = uVar25;
    }
    uVar31 = iVar18 + uVar23;
    if (0xed8 < iVar18 + uVar23) {
      uVar31 = uVar25;
    }
    *(uint *)((int)param_1 + 0xdc) = uVar23;
    *(short *)((int)param_1 + 0xfc) = (short)uVar31;
    *(float *)((int)param_1 + 0x10c) = (float)(int)uVar31;
    fVar39 = fVar36 / fVar34 + fVar2;
    uVar31 = (uint)(-1 < (int)fVar39) * (int)fVar39;
    uVar23 = uVar31;
    if (uVar31 == 0) {
      uVar23 = 1;
    }
    if (0xed8 < uVar31) {
      uVar23 = uVar25;
    }
    uVar31 = iVar18 + uVar23;
    if (0xed8 < iVar18 + uVar23) {
      uVar31 = uVar25;
    }
    *(uint *)(param_1 + 0x1c) = uVar23;
    *(short *)((int)param_1 + 0xfe) = (short)uVar31;
    *(float *)(param_1 + 0x22) = (float)(int)uVar31;
    fVar39 = fVar35 / fVar34 + fVar2;
    uVar31 = (uint)(-1 < (int)fVar39) * (int)fVar39;
    uVar23 = uVar31;
    if (uVar31 == 0) {
      uVar23 = 1;
    }
    if (0xed8 < uVar31) {
      uVar23 = uVar25;
    }
    uVar31 = iVar18 + uVar23;
    if (0xed8 < iVar18 + uVar23) {
      uVar31 = uVar25;
    }
    *(uint *)((int)param_1 + 0xe4) = uVar23;
    *(short *)(param_1 + 0x20) = (short)uVar31;
    *(float *)((int)param_1 + 0x114) = (float)(int)uVar31;
    fVar39 = fVar33 / fVar34 + fVar2;
    uVar31 = (uint)(-1 < (int)fVar39) * (int)fVar39;
    uVar23 = uVar31;
    if (uVar31 == 0) {
      uVar23 = 1;
    }
    if (0xed8 < uVar31) {
      uVar23 = uVar25;
    }
    uVar31 = iVar18 + uVar23;
    if (0xed8 < iVar18 + uVar23) {
      uVar31 = uVar25;
    }
    *(uint *)(param_1 + 0x1d) = uVar23;
    *(short *)((int)param_1 + 0x102) = (short)uVar31;
    *(float *)(param_1 + 0x23) = (float)(int)uVar31;
    fVar39 = fVar38 / fVar34 + fVar2;
    uVar31 = (uint)(-1 < (int)fVar39) * (int)fVar39;
    uVar23 = uVar31;
    if (uVar31 == 0) {
      uVar23 = 1;
    }
    if (0xed8 < uVar31) {
      uVar23 = uVar25;
    }
    uVar31 = iVar18 + uVar23;
    if (0xed8 < iVar18 + uVar23) {
      uVar31 = uVar25;
    }
    *(uint *)((int)param_1 + 0xec) = uVar23;
    *(short *)((int)param_1 + 0x104) = (short)uVar31;
    *(float *)((int)param_1 + 0x11c) = (float)(int)uVar31;
    fVar39 = fVar6 / fVar34 + fVar2;
    uVar31 = (uint)(-1 < (int)fVar39) * (int)fVar39;
    uVar23 = uVar31;
    if (uVar31 == 0) {
      uVar23 = 1;
    }
    if (0xed8 < uVar31) {
      uVar23 = uVar25;
    }
    uVar31 = iVar18 + uVar23;
    if (0xed8 < iVar18 + uVar23) {
      uVar31 = uVar25;
    }
    *(uint *)(param_1 + 0x1e) = uVar23;
    *(short *)((int)param_1 + 0x106) = (short)uVar31;
    *(float *)(param_1 + 0x24) = (float)(int)uVar31;
    fVar39 = fVar4 / fVar34 + fVar2;
    uVar31 = (uint)(-1 < (int)fVar39) * (int)fVar39;
    uVar23 = uVar31;
    if (uVar31 == 0) {
      uVar23 = 1;
    }
    if (0xed8 < uVar31) {
      uVar23 = uVar25;
    }
    uVar31 = iVar18 + uVar23;
    if (0xed8 < iVar18 + uVar23) {
      uVar31 = uVar25;
    }
    *(uint *)((int)param_1 + 0xf4) = uVar23;
    *(short *)(param_1 + 0x21) = (short)uVar31;
    *(float *)((int)param_1 + 0x124) = (float)(int)uVar31;
    fVar39 = fVar5 / fVar34 + fVar2;
    uVar31 = (uint)(-1 < (int)fVar39) * (int)fVar39;
    uVar23 = 1;
    if (uVar31 != 0) {
      uVar23 = uVar31;
    }
    if (0xed8 < uVar31) {
      uVar23 = uVar25;
    }
    uVar31 = iVar18 + uVar23;
    if (0xed8 < iVar18 + uVar23) {
      uVar31 = uVar25;
    }
    *(uint *)(param_1 + 0x1f) = uVar23;
    *(short *)((int)param_1 + 0x10a) = (short)uVar31;
    *(float *)(param_1 + 0x25) = (float)(int)uVar31;
    memset((int)param_1 + 0x234,0,0x40);
    memset((undefined4 *)((int)param_1 + 300),0,0x20);
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    memset(param_1 + 99,0,0x9604);
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    memset((int)param_1 + 0x991c,0,0x2c94);
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    puVar27 = param_1 + 0x18b6;
    do {
      iVar18 = memset(puVar27,0,0xc80);
      *(undefined4 *)(iVar18 + 0xc84) = 0;
      puVar27 = (undefined8 *)(iVar18 + 0xc8c);
    } while (puVar27 != param_1 + 0x1efc);
    puVar27 = param_1 + 0x1efc;
    puVar20 = (undefined4 *)((int)param_1 + 300);
    do {
      puVar21 = puVar20 + 1;
      iVar18 = memset(puVar27,0,0x3b60);
      *puVar20 = 0;
      puVar20[0x42] = 0;
      puVar20[0x4a] = 0;
      puVar27 = (undefined8 *)(iVar18 + 0x3b60);
      puVar20 = puVar21;
    } while ((undefined4 *)((int)param_1 + 0x14c) != puVar21);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)((int)param_1 + 0x151) = 0;
    memset((int)param_1 + 0x154,0,0x20);
    uVar40 = *(ulonglong *)((int)param_1 + 4);
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
    if (0.0 <= (float)uVar40) goto LAB_ram_40079918;
LAB_ram_4007a320:
    fVar39 = DAT_ram_40094ee0;
    uVar41 = param_1[1];
    bVar3 = DAT_ram_40094ee0 <= (float)uVar41;
    *(undefined8 *)((int)param_1 + 4) = 0;
    if (bVar3) goto LAB_ram_4007993e;
LAB_ram_4007a338:
    fVar34 = DAT_ram_4009aadc;
    uVar40 = *(ulonglong *)((int)param_1 + 0xc);
    param_1[1] = (ulonglong)(uint)fVar39;
    fVar39 = DAT_ram_4009aae0;
    if (0.0 <= (float)uVar40) goto LAB_ram_40079976;
LAB_ram_4007a35c:
    uVar41 = param_1[2];
    *(undefined8 *)((int)param_1 + 0xc) = 0;
    if (0.0 <= (float)uVar41) goto LAB_ram_40079990;
LAB_ram_4007a370:
    uVar40 = *(ulonglong *)((int)param_1 + 0x14);
    param_1[2] = 0;
    if (0.0 <= (float)uVar40) goto LAB_ram_400799aa;
LAB_ram_4007a384:
    uVar40 = 0;
LAB_ram_4007a388:
    *(ulonglong *)((int)param_1 + 0x14) = uVar40;
    fVar36 = (float)DAT_ram_40099f5c;
    cVar16 = *(char *)(param_1 + 0x2a);
    fVar35 = (float)param_1[3];
    if (0.0 <= fVar35) goto LAB_ram_400799c8;
    *(undefined4 *)(param_1 + 3) = 0;
LAB_ram_4007a3a8:
    fVar33 = (float)uVar40;
    fVar35 = 0.0;
    if (fVar33 <= fVar36) goto LAB_ram_400799f2;
    fVar36 = 0.0;
    *(float *)((int)param_1 + 0x14c) = fVar30 * DAT_ram_4009a400;
LAB_ram_4007a3c8:
    if (0.0 < fVar36) {
LAB_ram_4007a3d4:
      fVar35 = fVar36 * DAT_ram_40099f94 * DAT_ram_40094eb0;
      goto LAB_ram_4007a44e;
    }
LAB_ram_40079a0a:
    if (cVar16 != '\0') {
      memset((int)param_1 + 0x174,0,0x20);
      fVar36 = DAT_ram_40094604;
      *(float *)((int)param_1 + 0x194) = DAT_ram_40094604;
      *(float *)(param_1 + 0x33) = fVar36;
      *(float *)((int)param_1 + 0x19c) = fVar36;
      *(float *)(param_1 + 0x34) = fVar36;
      *(float *)((int)param_1 + 0x1a4) = fVar36;
      *(float *)(param_1 + 0x35) = fVar36;
      *(float *)((int)param_1 + 0x1ac) = fVar36;
      *(float *)(param_1 + 0x36) = fVar36;
      memset((int)param_1 + 0x1b4,0,0x20);
      *(float *)((int)param_1 + 0x1d4) = fVar36;
      *(float *)(param_1 + 0x3b) = fVar36;
      *(float *)((int)param_1 + 0x1dc) = fVar36;
      *(float *)(param_1 + 0x3c) = fVar36;
      *(float *)((int)param_1 + 0x1e4) = fVar36;
      *(float *)(param_1 + 0x3d) = fVar36;
      *(float *)((int)param_1 + 0x1ec) = fVar36;
      *(float *)(param_1 + 0x3e) = fVar36;
    }
    *(undefined1 *)(param_1 + 0x2a) = 0;
    cVar24 = '\0';
  }
  else {
    fVar30 = DAT_ram_40094e80;
    if (*(char *)((int)param_1 + 0x21) != '\0') {
      *(undefined4 *)((int)param_1 + 0x2c) = 200;
      *(undefined4 *)(param_1 + 6) = 0xc9;
      *(undefined4 *)((int)param_1 + 0x24) = 0;
      fVar30 = fVar42;
      goto LAB_ram_40079e50;
    }
LAB_ram_400798f2:
    uVar40 = *(ulonglong *)((int)param_1 + 4);
    fVar37 = DAT_ram_40099fa4;
    fVar42 = DAT_ram_40094604;
    if ((float)uVar40 < 0.0) goto LAB_ram_4007a320;
LAB_ram_40079918:
    fVar39 = DAT_ram_40094ee0;
    if (DAT_ram_4009600c < (float)uVar40) {
      uVar40 = (ulonglong)(uint)DAT_ram_4009600c;
    }
    uVar41 = param_1[1];
    *(ulonglong *)((int)param_1 + 4) = uVar40;
    if ((float)uVar41 < fVar39) goto LAB_ram_4007a338;
LAB_ram_4007993e:
    if (DAT_ram_40094ea8 < (float)uVar41) {
      uVar41 = (ulonglong)(uint)DAT_ram_40094ea8;
      fVar39 = DAT_ram_4009aae8;
      fVar34 = DAT_ram_4009aae4;
    }
    else {
      fVar39 = (float)uVar41 * DAT_ram_4009ab10;
      fVar34 = fVar39 * (float)DAT_ram_40099f5c;
    }
    uVar40 = *(ulonglong *)((int)param_1 + 0xc);
    param_1[1] = uVar41;
    if ((float)uVar40 < 0.0) goto LAB_ram_4007a35c;
LAB_ram_40079976:
    if (fVar42 < (float)uVar40) {
      uVar40 = (ulonglong)(uint)fVar42;
    }
    uVar41 = param_1[2];
    *(ulonglong *)((int)param_1 + 0xc) = uVar40;
    if ((float)uVar41 < 0.0) goto LAB_ram_4007a370;
LAB_ram_40079990:
    if (fVar42 < (float)uVar41) {
      uVar41 = (ulonglong)(uint)fVar42;
    }
    uVar40 = *(ulonglong *)((int)param_1 + 0x14);
    param_1[2] = uVar41;
    if ((float)uVar40 < 0.0) goto LAB_ram_4007a384;
LAB_ram_400799aa:
    fVar36 = (float)DAT_ram_40099f5c;
    if ((float)DAT_ram_40099f5c < (float)uVar40) {
      uVar40 = (ulonglong)(uint)(float)DAT_ram_40099f5c;
      goto LAB_ram_4007a388;
    }
    cVar16 = *(char *)(param_1 + 0x2a);
    fVar35 = (float)param_1[3];
    if (fVar35 < 0.0) {
      *(undefined4 *)(param_1 + 3) = 0;
      goto LAB_ram_4007a3a8;
    }
LAB_ram_400799c8:
    fVar36 = DAT_ram_40099f88;
    fVar33 = (float)uVar40;
    if (fVar35 <= DAT_ram_40099f88) {
      fVar38 = 0.0;
      fVar36 = fVar35;
      if ((0.0 <= fVar33) && (fVar38 = DAT_ram_4009a400, fVar33 <= (float)DAT_ram_40099f5c)) {
LAB_ram_400799f2:
        fVar38 = fVar33 * fVar37;
        fVar36 = fVar35;
      }
      *(float *)((int)param_1 + 0x14c) = fVar30 * fVar38;
      if (fVar36 < 0.0) goto LAB_ram_40079a0a;
      fVar35 = DAT_ram_4009aaec;
      if (fVar36 <= DAT_ram_40099f88) goto LAB_ram_4007a3c8;
    }
    else {
      param_1[3] = (ulonglong)(uint)DAT_ram_40099f88;
      fVar35 = DAT_ram_4009aaec;
      if (0.0 <= fVar33) {
        if ((float)DAT_ram_40099f5c < fVar33) {
          *(float *)((int)param_1 + 0x14c) = fVar30 * DAT_ram_4009a400;
        }
        else {
          *(float *)((int)param_1 + 0x14c) = fVar33 * fVar37 * fVar30;
        }
        goto LAB_ram_4007a3d4;
      }
      *(float *)((int)param_1 + 0x14c) = fVar30 * 0.0;
    }
LAB_ram_4007a44e:
    uVar15 = DAT_ram_4009ab2c;
    uVar14 = DAT_ram_4009ab28;
    uVar13 = DAT_ram_4009ab24;
    uVar12 = DAT_ram_4009ab20;
    uVar11 = DAT_ram_4009ab1c;
    uVar10 = DAT_ram_4009ab18;
    uVar9 = DAT_ram_4009ab14;
    uVar8 = DAT_ram_4009a7f4;
    uVar32 = DAT_ram_4009a7ec;
    fVar33 = DAT_ram_40094604;
    fVar36 = DAT_ram_40094600;
    fVar35 = fVar35 / fVar30;
    if (cVar16 == '\0') {
      *(undefined4 *)((int)param_1 + 0x174) = 0;
      *(float *)((int)param_1 + 0x194) = fVar33;
      *(undefined4 *)(param_1 + 0x2f) = uVar32;
      *(undefined4 *)(param_1 + 0x33) = uVar32;
      *(float *)((int)param_1 + 0x17c) = fVar33;
      *(undefined4 *)((int)param_1 + 0x19c) = uVar8;
      *(undefined4 *)(param_1 + 0x30) = uVar32;
      *(undefined4 *)(param_1 + 0x34) = uVar9;
      *(undefined4 *)((int)param_1 + 0x184) = uVar10;
      *(float *)((int)param_1 + 0x1a4) = fVar36;
      *(undefined4 *)(param_1 + 0x31) = uVar11;
      *(undefined4 *)(param_1 + 0x35) = uVar12;
      *(float *)((int)param_1 + 0x18c) = fVar36;
      *(undefined4 *)((int)param_1 + 0x1ac) = uVar13;
      *(undefined4 *)(param_1 + 0x32) = uVar14;
      *(undefined4 *)(param_1 + 0x36) = uVar15;
    }
    uVar32 = FUN_ram_400009d2(fVar35);
    *(undefined4 *)((int)param_1 + 0x1b4) = uVar32;
    uVar32 = FUN_ram_40000712(fVar35);
    fVar36 = DAT_ram_4009ab30;
    *(undefined4 *)((int)param_1 + 0x1d4) = uVar32;
    uVar32 = FUN_ram_400009d2(fVar35 * fVar36);
    *(undefined4 *)(param_1 + 0x37) = uVar32;
    uVar32 = FUN_ram_40000712(fVar35 * fVar36);
    fVar36 = DAT_ram_4009ab34;
    *(undefined4 *)(param_1 + 0x3b) = uVar32;
    uVar32 = FUN_ram_400009d2(fVar35 * fVar36);
    *(undefined4 *)((int)param_1 + 0x1bc) = uVar32;
    uVar32 = FUN_ram_40000712(fVar35 * fVar36);
    fVar36 = DAT_ram_4009ab38;
    *(undefined4 *)((int)param_1 + 0x1dc) = uVar32;
    uVar32 = FUN_ram_400009d2(fVar35 * fVar36);
    *(undefined4 *)(param_1 + 0x38) = uVar32;
    uVar32 = FUN_ram_40000712(fVar35 * fVar36);
    fVar36 = DAT_ram_4009a3dc;
    *(undefined4 *)(param_1 + 0x3c) = uVar32;
    uVar32 = FUN_ram_400009d2(fVar35 * fVar36);
    *(undefined4 *)((int)param_1 + 0x1c4) = uVar32;
    uVar32 = FUN_ram_40000712(fVar35 * fVar36);
    fVar36 = DAT_ram_4009460c;
    *(undefined4 *)((int)param_1 + 0x1e4) = uVar32;
    uVar32 = FUN_ram_400009d2(fVar35 * fVar36);
    *(undefined4 *)(param_1 + 0x39) = uVar32;
    uVar32 = FUN_ram_40000712(fVar35 * fVar36);
    fVar36 = DAT_ram_4009ab3c;
    *(undefined4 *)(param_1 + 0x3d) = uVar32;
    uVar32 = FUN_ram_400009d2(fVar35 * fVar36);
    *(undefined4 *)((int)param_1 + 0x1cc) = uVar32;
    uVar32 = FUN_ram_40000712(fVar35 * fVar36);
    fVar36 = DAT_ram_4009ab40;
    *(undefined4 *)((int)param_1 + 0x1ec) = uVar32;
    uVar32 = FUN_ram_400009d2(fVar35 * fVar36);
    *(undefined4 *)(param_1 + 0x3a) = uVar32;
    uVar32 = FUN_ram_40000712(fVar35 * fVar36);
    cVar24 = '\x01';
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined4 *)(param_1 + 0x3e) = uVar32;
  }
  if (cVar24 != cVar16) {
    *(undefined2 *)((int)param_1 + 0x152) = 0;
  }
  fVar36 = DAT_ram_40099fa8;
  uVar32 = DAT_ram_40094e90;
  *(undefined1 *)((int)param_1 + 0x151) = 0;
  puVar19 = (uint *)((int)param_1 + 0xdc);
  do {
    puVar17 = puVar19 + 1;
    fVar35 = ((float)*puVar19 / fVar30) * fVar36;
    uVar31 = FUN_ram_40000d44(uVar32,fVar35 / fVar39);
    puVar19[0x46] = uVar31;
    uVar31 = FUN_ram_40000d44(uVar32,fVar35 / fVar34);
    puVar19[0x4e] = uVar31;
    fVar35 = DAT_ram_40094604;
    puVar19 = puVar17;
  } while ((uint *)((int)param_1 + 0xfc) != puVar17);
  if (cVar1 != '\0') {
    *(float *)((int)param_1 + 500) = DAT_ram_40094604;
    *(float *)((int)param_1 + 0x214) = fVar35;
    *(float *)(param_1 + 0x3f) = fVar35;
    *(float *)(param_1 + 0x43) = fVar35;
    *(float *)((int)param_1 + 0x1fc) = fVar35;
    *(float *)((int)param_1 + 0x21c) = fVar35;
    *(float *)(param_1 + 0x40) = fVar35;
    *(float *)(param_1 + 0x44) = fVar35;
    *(float *)((int)param_1 + 0x204) = fVar35;
    *(float *)((int)param_1 + 0x224) = fVar35;
    *(float *)(param_1 + 0x41) = fVar35;
    *(float *)(param_1 + 0x45) = fVar35;
    *(float *)((int)param_1 + 0x20c) = fVar35;
    *(float *)((int)param_1 + 0x22c) = fVar35;
    *(float *)(param_1 + 0x42) = fVar35;
    *(float *)(param_1 + 0x46) = fVar35;
  }
  fVar39 = DAT_ram_40094600;
  fVar36 = (float)*(undefined8 *)((int)param_1 + 0xc);
  fVar34 = (float)DAT_ram_4009a4bc;
  if ((0.0 <= fVar36) && (fVar34 = DAT_ram_40099fb8, fVar36 <= fVar42)) {
    fVar34 = fVar36 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600;
    fVar36 = fVar42;
    if (ABS(fVar34) <= DAT_ram_40099fbc) goto LAB_ram_40079b62;
    if (fVar34 < 0.0) {
      fVar34 = (((-fVar34 - DAT_ram_40099fbc) / DAT_ram_4009ab44) * DAT_ram_400952a4) /
               DAT_ram_40094ea8;
    }
    else {
      fVar34 = (((fVar34 - DAT_ram_40099fbc) / DAT_ram_4009ab44) * DAT_ram_4009463c) /
               DAT_ram_40094ea8;
    }
  }
  fVar36 = (float)FUN_ram_40000d44(uVar32,fVar34);
LAB_ram_40079b62:
  fVar34 = DAT_ram_4009ab48;
  *(float *)(param_1 + 0x55) = fVar36;
  uVar32 = FUN_ram_40000bd8(fVar34 / fVar30);
  fVar34 = DAT_ram_4009ab4c;
  *(undefined4 *)((int)param_1 + 0x274) = uVar32;
  uVar32 = FUN_ram_40000bd8(fVar34 / fVar30);
  *(undefined4 *)(param_1 + 0x4f) = uVar32;
  if (cVar1 != '\0') {
    *(undefined4 *)((int)param_1 + 0x274) = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
  }
  fVar36 = fVar30 * DAT_ram_4009ab50;
  fVar34 = (float)*(undefined8 *)((int)param_1 + 4) * fVar37 * fVar30 + fVar2;
  uVar31 = (uint)(-1 < (int)fVar34) * (int)fVar34;
  if (*(uint *)((int)param_1 + 0x2c) < uVar31) {
    uVar31 = *(uint *)((int)param_1 + 0x2c);
  }
  *(uint *)(param_1 + 5) = uVar31;
  uVar32 = FUN_ram_40000bd8(fVar39 / fVar36);
  fVar39 = DAT_ram_4009ab54;
  *(undefined4 *)((int)param_1 + 0x27c) = uVar32;
  fVar33 = (float)FUN_ram_40000712(fVar39 / fVar30);
  fVar34 = (float)FUN_ram_400009d2(fVar39 / fVar30);
  fVar5 = DAT_ram_4009ab58;
  fVar4 = DAT_ram_4009461c;
  fVar34 = fVar34 / DAT_ram_4009ab58;
  fVar35 = fVar33 * DAT_ram_4009461c;
  fVar39 = fVar34 + fVar42;
  fVar37 = DAT_ram_4009ab5c / fVar30;
  fVar36 = ((fVar42 - fVar33) * fVar2) / fVar39;
  *(float *)((int)param_1 + 0x284) = fVar36;
  *(float *)((int)param_1 + 0x28c) = fVar36;
  *(float *)(param_1 + 0x51) = (fVar42 - fVar33) / fVar39;
  *(float *)(param_1 + 0x52) = fVar35 / fVar39;
  *(float *)((int)param_1 + 0x294) = (fVar42 - fVar34) / fVar39;
  fVar35 = (float)FUN_ram_40000712(fVar37);
  fVar34 = (float)FUN_ram_400009d2(fVar37);
  fVar34 = fVar34 / fVar5;
  fVar39 = fVar34 + fVar42;
  fVar37 = DAT_ram_4009ab60 / fVar30;
  fVar36 = ((fVar35 + fVar42) * fVar2) / fVar39;
  *(float *)((int)param_1 + 0x2ac) = fVar36;
  *(float *)((int)param_1 + 0x2b4) = fVar36;
  *(float *)(param_1 + 0x56) = -(fVar35 + fVar42) / fVar39;
  *(float *)(param_1 + 0x57) = (fVar35 * fVar4) / fVar39;
  *(float *)((int)param_1 + 700) = (fVar42 - fVar34) / fVar39;
  fVar36 = (float)FUN_ram_40000712(fVar37);
  fVar34 = (float)FUN_ram_400009d2(fVar37);
  fVar39 = fVar36 * DAT_ram_4009ab68 + DAT_ram_4009ab6c;
  fVar37 = fVar34 * fVar2 * DAT_ram_4009ab64;
  fVar38 = -(fVar36 * DAT_ram_4009ab68) + DAT_ram_4009ab6c;
  fVar6 = -(fVar36 * DAT_ram_4009ab6c) + DAT_ram_4009ab68;
  fVar34 = fVar37 * DAT_ram_4009ab70 + fVar38;
  fVar33 = fVar37 * DAT_ram_4009ab70;
  fVar36 = (fVar36 * DAT_ram_4009ab6c + DAT_ram_4009ab68) * DAT_ram_4009ab78;
  fVar35 = (fVar37 * DAT_ram_4009ab70 + fVar39) * DAT_ram_4009ab74;
  fVar39 = (-(fVar37 * DAT_ram_4009ab70) + fVar39) * DAT_ram_4009ab74;
  fVar30 = DAT_ram_4009ab7c / fVar30;
  *(float *)((int)param_1 + 0x2dc) = (fVar6 + fVar6) / fVar34;
  *(float *)(param_1 + 0x5b) = fVar39 / fVar34;
  *(float *)(param_1 + 0x5c) = (-fVar33 + fVar38) / fVar34;
  *(float *)((int)param_1 + 0x2d4) = fVar36 / fVar34;
  *(float *)(param_1 + 0x5a) = fVar35 / fVar34;
  fVar37 = (float)FUN_ram_40000712(fVar30);
  fVar34 = (float)FUN_ram_400009d2(fVar30);
  fVar34 = fVar34 / fVar5;
  *(undefined1 *)(param_1 + 4) = 0;
  fVar39 = fVar34 + fVar42;
  fVar2 = ((fVar42 - fVar37) * fVar2) / fVar39;
  *(float *)((int)param_1 + 0x2f4) = fVar2;
  *(float *)((int)param_1 + 0x2fc) = fVar2;
  *(float *)(param_1 + 0x60) = (fVar37 * fVar4) / fVar39;
  *(float *)((int)param_1 + 0x304) = (fVar42 - fVar34) / fVar39;
  *(float *)(param_1 + 0x5f) = (fVar42 - fVar37) / fVar39;
  return;
}


