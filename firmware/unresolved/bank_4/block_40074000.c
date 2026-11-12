/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40074000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40074064.
 * REA evidence: ev_10130df40ff608c307f6a90a6a5603eab3f513d81f55cd95b9d203b07045945a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40074e76) */

void FUN_ram_40074064(undefined8 *param_1)

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
  void *pvVar22;
  undefined *puVar23;
  uint uVar24;
  char cVar25;
  uint uVar26;
  int iVar27;
  undefined8 *puVar28;
  float *pfVar29;
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
  undefined4 *puVar21;
  
  fVar40 = DAT_ram_40098ab8;
  fVar35 = DAT_ram_400980e0;
  fVar43 = DAT_ram_40093094;
  fVar2 = DAT_ram_40092864;
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  fVar31 = (float)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x1c);
  if (DAT_ram_40093094 <= fVar31) {
    if (*(char *)((int)param_1 + 0x21) == '\0') goto LAB_ram_400740ba;
    fVar40 = fVar31 * DAT_ram_400941dc;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    fVar43 = fVar40 / fVar43 + fVar2;
    fVar40 = fVar31 / fVar35;
    uVar32 = (uint)(-1 < (int)fVar43) * (int)fVar43;
    uVar24 = 1;
    if (uVar32 != 0) {
      uVar24 = uVar32;
    }
    uVar26 = 0x2580;
    if (uVar32 < 0x2581) {
      uVar26 = uVar24;
    }
    *(uint *)((int)param_1 + 0x2c) = uVar26;
    *(uint *)(param_1 + 6) = uVar26 + 1;
    if (fVar31 <= 0.0) {
LAB_ram_40074614:
      fVar38 = DAT_ram_40098104;
      fVar36 = DAT_ram_400941ec;
      fVar37 = DAT_ram_4009282c;
      fVar43 = DAT_ram_4009281c;
      pfVar30 = (float *)&DAT_ram_40098d50;
      iVar18 = 0;
      uVar32 = 1;
      puVar19 = (uint *)((int)param_1 + 0x3c);
      pfVar29 = (float *)&DAT_ram_40098d78;
      do {
        fVar34 = *pfVar30;
        pfVar30 = pfVar30 + 1;
        uVar24 = (uint)(fVar34 * fVar38 * fVar31 + fVar2);
        uVar26 = (int)((float)(int)(&DAT_ram_40098d28)[iVar18] * fVar40 + fVar2) + uVar24;
        uVar24 = uVar24 & (int)~uVar24 >> 0x1f;
        uVar26 = uVar26 & (int)~uVar26 >> 0x1f;
        if (0xb23 < (int)uVar26) {
          uVar26 = 0xb23;
        }
        if (0xb23 < (int)uVar24) {
          uVar24 = 0xb23;
        }
        *puVar19 = uVar24;
        puVar19[10] = uVar26;
        if (uVar32 < uVar26) {
          uVar32 = uVar26;
        }
        fVar39 = (float)FUN_ram_40000c0e(-(float)iVar18 / fVar37);
        piVar7 = &DAT_ram_40098da0 + iVar18;
        iVar27 = (&DAT_ram_40098dc8)[iVar18];
        fVar34 = *pfVar29;
        iVar18 = iVar18 + 1;
        puVar19[0x14] = (uint)((float)*piVar7 * fVar39 * fVar36 * (fVar43 - fVar34));
        puVar19[0x1e] = (uint)((float)iVar27 * fVar39 * fVar36 * fVar34);
        puVar19 = puVar19 + 1;
        pfVar29 = pfVar29 + 1;
      } while (iVar18 != 10);
      *(uint *)(param_1 + 7) = uVar32 + 2;
    }
    else {
      iVar18 = (uint)(-1 < (int)(fVar31 + fVar2)) * (int)(fVar31 + fVar2);
      if (iVar18 == 0xac44) {
        puVar23 = &DAT_ram_40098bb0;
        iVar18 = 0;
      }
      else {
        if (iVar18 != 48000) goto LAB_ram_40074614;
        puVar23 = &DAT_ram_40098c50;
        iVar18 = 1;
      }
      FUN_ram_4000305c((int)param_1 + 0x3c,puVar23,0x28);
      FUN_ram_4000305c((int)param_1 + 100,(&PTR_DAT_ram_40098bd8_ram_40098ce8)[iVar18 * 7],0x28);
      FUN_ram_4000305c((int)param_1 + 0x8c,(&PTR_DAT_ram_40098b60_ram_40098cec)[iVar18 * 7],0x28);
      FUN_ram_4000305c((int)param_1 + 0xb4,(&PTR_DAT_ram_40098b88_ram_40098cf0)[iVar18 * 7],0x28);
      fVar38 = DAT_ram_40098104;
      fVar43 = DAT_ram_4009281c;
      uVar32 = *(uint *)((int)param_1 + 100);
      if (*(uint *)((int)param_1 + 100) < *(uint *)(param_1 + 0xd)) {
        uVar32 = *(uint *)(param_1 + 0xd);
      }
      if (uVar32 == 0) {
        uVar32 = 1;
      }
      uVar24 = *(uint *)((int)param_1 + 0x6c);
      if (*(uint *)((int)param_1 + 0x6c) < uVar32) {
        uVar24 = uVar32;
      }
      uVar32 = *(uint *)(param_1 + 0xe);
      if (*(uint *)(param_1 + 0xe) < uVar24) {
        uVar32 = uVar24;
      }
      uVar24 = *(uint *)((int)param_1 + 0x74);
      if (*(uint *)((int)param_1 + 0x74) < uVar32) {
        uVar24 = uVar32;
      }
      uVar32 = *(uint *)(param_1 + 0xf);
      if (*(uint *)(param_1 + 0xf) < uVar24) {
        uVar32 = uVar24;
      }
      uVar24 = *(uint *)((int)param_1 + 0x7c);
      if (*(uint *)((int)param_1 + 0x7c) < uVar32) {
        uVar24 = uVar32;
      }
      uVar32 = *(uint *)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x10) < uVar24) {
        uVar32 = uVar24;
      }
      uVar24 = *(uint *)((int)param_1 + 0x84);
      if (*(uint *)((int)param_1 + 0x84) < uVar32) {
        uVar24 = uVar32;
      }
      uVar32 = *(uint *)(param_1 + 0x11);
      if (*(uint *)(param_1 + 0x11) < uVar24) {
        uVar32 = uVar24;
      }
      if (uVar32 + 2 < 0xb26) {
        *(uint *)(param_1 + 7) = uVar32 + 2;
      }
      else {
        *(undefined4 *)(param_1 + 7) = 0xb25;
      }
    }
    uVar32 = DAT_ram_400937b0;
    pfVar29 = (float *)&DAT_ram_40098d18;
    puVar19 = (uint *)(param_1 + 0x1a42);
    do {
      fVar40 = *pfVar29;
      puVar17 = puVar19 + -800;
      puVar19[1] = 0;
      puVar19[2] = uVar32;
      pfVar29 = pfVar29 + 1;
      fVar40 = ((fVar40 + fVar40) * fVar31) / fVar35 + fVar2;
      uVar24 = (uint)(-1 < (int)fVar40) * (int)fVar40;
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      if (800 < uVar24) {
        uVar24 = 800;
      }
      *puVar19 = uVar24;
      puVar19 = puVar19 + 0x323;
      memset(puVar17,0,0xc80);
    } while ((uint *)(param_1 + 0x2088) != puVar19);
    FUN_ram_400008b8(0,fVar31 * DAT_ram_40098534);
    fVar40 = (float)FUN_ram_400006cc();
    fVar37 = fVar31 * DAT_ram_40098ad4;
    fVar36 = fVar31 * DAT_ram_40098ad8;
    fVar34 = fVar31 * DAT_ram_40098adc;
    fVar39 = fVar31 * DAT_ram_40098ae0;
    uVar26 = 0xed8;
    iVar18 = (uint)(-1 < (int)fVar40) * (int)fVar40 + 2;
    fVar6 = fVar31 * DAT_ram_40098ae4;
    fVar4 = fVar31 * DAT_ram_40098ae8;
    fVar5 = fVar31 * DAT_ram_40098aec;
    fVar40 = (fVar31 * DAT_ram_40098ad0) / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar24 = uVar32;
    if (uVar32 == 0) {
      uVar24 = 1;
    }
    if (0xed8 < uVar32) {
      uVar24 = uVar26;
    }
    uVar32 = iVar18 + uVar24;
    if (0xed8 < iVar18 + uVar24) {
      uVar32 = uVar26;
    }
    *(uint *)((int)param_1 + 0xdc) = uVar24;
    *(short *)((int)param_1 + 0xfc) = (short)uVar32;
    *(float *)((int)param_1 + 0x10c) = (float)(int)uVar32;
    fVar40 = fVar37 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar24 = uVar32;
    if (uVar32 == 0) {
      uVar24 = 1;
    }
    if (0xed8 < uVar32) {
      uVar24 = uVar26;
    }
    uVar32 = iVar18 + uVar24;
    if (0xed8 < iVar18 + uVar24) {
      uVar32 = uVar26;
    }
    *(uint *)(param_1 + 0x1c) = uVar24;
    *(short *)((int)param_1 + 0xfe) = (short)uVar32;
    *(float *)(param_1 + 0x22) = (float)(int)uVar32;
    fVar40 = fVar36 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar24 = uVar32;
    if (uVar32 == 0) {
      uVar24 = 1;
    }
    if (0xed8 < uVar32) {
      uVar24 = uVar26;
    }
    uVar32 = iVar18 + uVar24;
    if (0xed8 < iVar18 + uVar24) {
      uVar32 = uVar26;
    }
    *(uint *)((int)param_1 + 0xe4) = uVar24;
    *(short *)(param_1 + 0x20) = (short)uVar32;
    *(float *)((int)param_1 + 0x114) = (float)(int)uVar32;
    fVar40 = fVar34 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar24 = uVar32;
    if (uVar32 == 0) {
      uVar24 = 1;
    }
    if (0xed8 < uVar32) {
      uVar24 = uVar26;
    }
    uVar32 = iVar18 + uVar24;
    if (0xed8 < iVar18 + uVar24) {
      uVar32 = uVar26;
    }
    *(uint *)(param_1 + 0x1d) = uVar24;
    *(short *)((int)param_1 + 0x102) = (short)uVar32;
    *(float *)(param_1 + 0x23) = (float)(int)uVar32;
    fVar40 = fVar39 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar24 = uVar32;
    if (uVar32 == 0) {
      uVar24 = 1;
    }
    if (0xed8 < uVar32) {
      uVar24 = uVar26;
    }
    uVar32 = iVar18 + uVar24;
    if (0xed8 < iVar18 + uVar24) {
      uVar32 = uVar26;
    }
    *(uint *)((int)param_1 + 0xec) = uVar24;
    *(short *)((int)param_1 + 0x104) = (short)uVar32;
    *(float *)((int)param_1 + 0x11c) = (float)(int)uVar32;
    fVar40 = fVar6 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar24 = uVar32;
    if (uVar32 == 0) {
      uVar24 = 1;
    }
    if (0xed8 < uVar32) {
      uVar24 = uVar26;
    }
    uVar32 = iVar18 + uVar24;
    if (0xed8 < iVar18 + uVar24) {
      uVar32 = uVar26;
    }
    *(uint *)(param_1 + 0x1e) = uVar24;
    *(short *)((int)param_1 + 0x106) = (short)uVar32;
    *(float *)(param_1 + 0x24) = (float)(int)uVar32;
    fVar40 = fVar4 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar24 = uVar32;
    if (uVar32 == 0) {
      uVar24 = 1;
    }
    if (0xed8 < uVar32) {
      uVar24 = uVar26;
    }
    uVar32 = iVar18 + uVar24;
    if (0xed8 < iVar18 + uVar24) {
      uVar32 = uVar26;
    }
    *(uint *)((int)param_1 + 0xf4) = uVar24;
    *(short *)(param_1 + 0x21) = (short)uVar32;
    *(float *)((int)param_1 + 0x124) = (float)(int)uVar32;
    fVar40 = fVar5 / fVar35 + fVar2;
    uVar32 = (uint)(-1 < (int)fVar40) * (int)fVar40;
    uVar24 = 1;
    if (uVar32 != 0) {
      uVar24 = uVar32;
    }
    if (0xed8 < uVar32) {
      uVar24 = uVar26;
    }
    uVar32 = iVar18 + uVar24;
    if (0xed8 < iVar18 + uVar24) {
      uVar32 = uVar26;
    }
    *(uint *)(param_1 + 0x1f) = uVar24;
    *(short *)((int)param_1 + 0x10a) = (short)uVar32;
    *(float *)(param_1 + 0x25) = (float)(int)uVar32;
    memset((void *)((int)param_1 + 0x214),0,0x40);
    memset((undefined4 *)((int)param_1 + 300),0,0x20);
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    memset(param_1 + 0x5f,0,0x9604);
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    memset((void *)((int)param_1 + 0x98fc),0,0x2c94);
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    puVar28 = param_1 + 0x18b2;
    do {
      pvVar22 = memset(puVar28,0,0xc80);
      *(undefined4 *)((int)pvVar22 + 0xc84) = 0;
      puVar28 = (undefined8 *)((int)pvVar22 + 0xc8c);
    } while (puVar28 != param_1 + 0x1ef8);
    puVar28 = param_1 + 0x1ef8;
    puVar20 = (undefined4 *)((int)param_1 + 300);
    do {
      puVar21 = puVar20 + 1;
      pvVar22 = memset(puVar28,0,0x3b60);
      *puVar20 = 0;
      puVar20[0x3a] = 0;
      puVar20[0x42] = 0;
      puVar28 = (undefined8 *)((int)pvVar22 + 0x3b60);
      puVar20 = puVar21;
    } while ((undefined4 *)((int)param_1 + 0x14c) != puVar21);
    uVar41 = *(ulonglong *)((int)param_1 + 4);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
    *(undefined4 *)((int)param_1 + 0x27c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)((int)param_1 + 0x284) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)((int)param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x55) = 0;
    *(undefined4 *)((int)param_1 + 0x2ac) = 0;
    *(undefined4 *)((int)param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
    *(undefined4 *)((int)param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x5a) = 0;
    *(undefined4 *)(param_1 + 0x5d) = 0;
    *(undefined4 *)((int)param_1 + 0x2ec) = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    *(undefined4 *)((int)param_1 + 0x2f4) = 0;
    if (0.0 <= (float)uVar41) goto LAB_ram_400740e0;
LAB_ram_40074ad2:
    fVar40 = DAT_ram_400930f4;
    uVar42 = param_1[1];
    bVar3 = DAT_ram_400930f4 <= (float)uVar42;
    *(undefined8 *)((int)param_1 + 4) = 0;
    if (bVar3) goto LAB_ram_40074106;
LAB_ram_40074aea:
    fVar35 = DAT_ram_40098abc;
    uVar41 = *(ulonglong *)((int)param_1 + 0xc);
    param_1[1] = (ulonglong)(uint)fVar40;
    fVar40 = DAT_ram_40098ac0;
    if (0.0 <= (float)uVar41) goto LAB_ram_4007413e;
LAB_ram_40074b0e:
    uVar42 = param_1[2];
    *(undefined8 *)((int)param_1 + 0xc) = 0;
    if (0.0 <= (float)uVar42) goto LAB_ram_40074158;
LAB_ram_40074b22:
    uVar41 = *(ulonglong *)((int)param_1 + 0x14);
    param_1[2] = 0;
    if (0.0 <= (float)uVar41) goto LAB_ram_40074172;
LAB_ram_40074b36:
    uVar41 = 0;
LAB_ram_40074b3a:
    *(ulonglong *)((int)param_1 + 0x14) = uVar41;
    fVar37 = DAT_ram_400980bc;
    cVar16 = *(char *)(param_1 + 0x2a);
    fVar36 = (float)param_1[3];
    if (0.0 <= fVar36) goto LAB_ram_40074190;
    *(undefined4 *)(param_1 + 3) = 0;
LAB_ram_40074b5a:
    fVar34 = (float)uVar41;
    fVar36 = 0.0;
    if (fVar34 <= fVar37) goto LAB_ram_400741ba;
    fVar37 = 0.0;
    *(float *)((int)param_1 + 0x14c) = fVar31 * DAT_ram_40098534;
LAB_ram_40074b7a:
    if (0.0 < fVar37) {
LAB_ram_40074b86:
      fVar36 = fVar37 * DAT_ram_400980f4;
      goto LAB_ram_40074bf4;
    }
LAB_ram_400741d2:
    if (cVar16 != '\0') {
      memset((void *)((int)param_1 + 0x154),0,0x20);
      fVar37 = DAT_ram_4009281c;
      *(float *)((int)param_1 + 0x174) = DAT_ram_4009281c;
      *(float *)(param_1 + 0x2f) = fVar37;
      *(float *)((int)param_1 + 0x17c) = fVar37;
      *(float *)(param_1 + 0x30) = fVar37;
      *(float *)((int)param_1 + 0x184) = fVar37;
      *(float *)(param_1 + 0x31) = fVar37;
      *(float *)((int)param_1 + 0x18c) = fVar37;
      *(float *)(param_1 + 0x32) = fVar37;
      memset((void *)((int)param_1 + 0x194),0,0x20);
      *(float *)((int)param_1 + 0x1b4) = fVar37;
      *(float *)(param_1 + 0x37) = fVar37;
      *(float *)((int)param_1 + 0x1bc) = fVar37;
      *(float *)(param_1 + 0x38) = fVar37;
      *(float *)((int)param_1 + 0x1c4) = fVar37;
      *(float *)(param_1 + 0x39) = fVar37;
      *(float *)((int)param_1 + 0x1cc) = fVar37;
      *(float *)(param_1 + 0x3a) = fVar37;
    }
    *(undefined1 *)(param_1 + 0x2a) = 0;
    cVar25 = '\0';
  }
  else {
    fVar31 = DAT_ram_40093094;
    if (*(char *)((int)param_1 + 0x21) != '\0') {
      *(undefined4 *)((int)param_1 + 0x2c) = 200;
      *(undefined4 *)(param_1 + 6) = 0xc9;
      *(undefined4 *)((int)param_1 + 0x24) = 0;
      fVar31 = fVar43;
      goto LAB_ram_40074614;
    }
LAB_ram_400740ba:
    uVar41 = *(ulonglong *)((int)param_1 + 4);
    fVar38 = DAT_ram_40098104;
    fVar43 = DAT_ram_4009281c;
    if ((float)uVar41 < 0.0) goto LAB_ram_40074ad2;
LAB_ram_400740e0:
    fVar40 = DAT_ram_400930f4;
    if (DAT_ram_400941dc < (float)uVar41) {
      uVar41 = (ulonglong)(uint)DAT_ram_400941dc;
    }
    uVar42 = param_1[1];
    *(ulonglong *)((int)param_1 + 4) = uVar41;
    if ((float)uVar42 < fVar40) goto LAB_ram_40074aea;
LAB_ram_40074106:
    if (DAT_ram_400930bc < (float)uVar42) {
      uVar42 = (ulonglong)(uint)DAT_ram_400930bc;
      fVar40 = DAT_ram_40098ac8;
      fVar35 = DAT_ram_40098ac4;
    }
    else {
      fVar40 = (float)uVar42 * DAT_ram_40098af0;
      fVar35 = fVar40 * DAT_ram_400980bc;
    }
    uVar41 = *(ulonglong *)((int)param_1 + 0xc);
    param_1[1] = uVar42;
    if ((float)uVar41 < 0.0) goto LAB_ram_40074b0e;
LAB_ram_4007413e:
    if (fVar43 < (float)uVar41) {
      uVar41 = (ulonglong)(uint)fVar43;
    }
    uVar42 = param_1[2];
    *(ulonglong *)((int)param_1 + 0xc) = uVar41;
    if ((float)uVar42 < 0.0) goto LAB_ram_40074b22;
LAB_ram_40074158:
    if (fVar43 < (float)uVar42) {
      uVar42 = (ulonglong)(uint)fVar43;
    }
    uVar41 = *(ulonglong *)((int)param_1 + 0x14);
    param_1[2] = uVar42;
    if ((float)uVar41 < 0.0) goto LAB_ram_40074b36;
LAB_ram_40074172:
    fVar37 = DAT_ram_400980bc;
    if (DAT_ram_400980bc < (float)uVar41) {
      uVar41 = (ulonglong)(uint)DAT_ram_400980bc;
      goto LAB_ram_40074b3a;
    }
    cVar16 = *(char *)(param_1 + 0x2a);
    fVar36 = (float)param_1[3];
    if (fVar36 < 0.0) {
      *(undefined4 *)(param_1 + 3) = 0;
      goto LAB_ram_40074b5a;
    }
LAB_ram_40074190:
    fVar37 = DAT_ram_400980e8;
    fVar34 = (float)uVar41;
    if (fVar36 <= DAT_ram_400980e8) {
      fVar39 = 0.0;
      fVar37 = fVar36;
      if ((0.0 <= fVar34) && (fVar39 = DAT_ram_40098534, fVar34 <= DAT_ram_400980bc)) {
LAB_ram_400741ba:
        fVar39 = fVar34 * fVar38;
        fVar37 = fVar36;
      }
      *(float *)((int)param_1 + 0x14c) = fVar31 * fVar39;
      if (fVar37 < 0.0) goto LAB_ram_400741d2;
      fVar36 = DAT_ram_40098acc;
      if (fVar37 <= DAT_ram_400980e8) goto LAB_ram_40074b7a;
    }
    else {
      param_1[3] = (ulonglong)(uint)DAT_ram_400980e8;
      fVar36 = DAT_ram_40098acc;
      if (0.0 <= fVar34) {
        if (DAT_ram_400980bc < fVar34) {
          *(float *)((int)param_1 + 0x14c) = fVar31 * DAT_ram_40098534;
        }
        else {
          *(float *)((int)param_1 + 0x14c) = fVar34 * fVar38 * fVar31;
        }
        goto LAB_ram_40074b86;
      }
      *(float *)((int)param_1 + 0x14c) = fVar31 * 0.0;
    }
LAB_ram_40074bf4:
    uVar15 = DAT_ram_40098b0c;
    uVar14 = DAT_ram_40098b08;
    uVar13 = DAT_ram_40098b04;
    uVar12 = DAT_ram_40098b00;
    uVar11 = DAT_ram_40098afc;
    uVar10 = DAT_ram_40098af8;
    uVar9 = DAT_ram_40098af4;
    uVar8 = DAT_ram_400988f8;
    uVar33 = DAT_ram_400988f0;
    fVar34 = DAT_ram_4009281c;
    fVar37 = DAT_ram_40092818;
    fVar36 = fVar36 / fVar31;
    if (cVar16 == '\0') {
      *(undefined4 *)((int)param_1 + 0x154) = 0;
      *(float *)((int)param_1 + 0x174) = fVar34;
      *(undefined4 *)(param_1 + 0x2b) = uVar33;
      *(undefined4 *)(param_1 + 0x2f) = uVar33;
      *(float *)((int)param_1 + 0x15c) = fVar34;
      *(undefined4 *)((int)param_1 + 0x17c) = uVar8;
      *(undefined4 *)(param_1 + 0x2c) = uVar33;
      *(undefined4 *)(param_1 + 0x30) = uVar9;
      *(undefined4 *)((int)param_1 + 0x164) = uVar10;
      *(float *)((int)param_1 + 0x184) = fVar37;
      *(undefined4 *)(param_1 + 0x2d) = uVar11;
      *(undefined4 *)(param_1 + 0x31) = uVar12;
      *(float *)((int)param_1 + 0x16c) = fVar37;
      *(undefined4 *)((int)param_1 + 0x18c) = uVar13;
      *(undefined4 *)(param_1 + 0x2e) = uVar14;
      *(undefined4 *)(param_1 + 0x32) = uVar15;
    }
    uVar33 = FUN_ram_40000a08(fVar36);
    *(undefined4 *)((int)param_1 + 0x194) = uVar33;
    uVar33 = FUN_ram_40000786(fVar36);
    fVar37 = DAT_ram_40098b10;
    *(undefined4 *)((int)param_1 + 0x1b4) = uVar33;
    uVar33 = FUN_ram_40000a08(fVar36 * fVar37);
    *(undefined4 *)(param_1 + 0x33) = uVar33;
    uVar33 = FUN_ram_40000786(fVar36 * fVar37);
    fVar37 = DAT_ram_40098b14;
    *(undefined4 *)(param_1 + 0x37) = uVar33;
    uVar33 = FUN_ram_40000a08(fVar36 * fVar37);
    *(undefined4 *)((int)param_1 + 0x19c) = uVar33;
    uVar33 = FUN_ram_40000786(fVar36 * fVar37);
    fVar37 = DAT_ram_40098b18;
    *(undefined4 *)((int)param_1 + 0x1bc) = uVar33;
    uVar33 = FUN_ram_40000a08(fVar36 * fVar37);
    *(undefined4 *)(param_1 + 0x34) = uVar33;
    uVar33 = FUN_ram_40000786(fVar36 * fVar37);
    fVar37 = DAT_ram_4009851c;
    *(undefined4 *)(param_1 + 0x38) = uVar33;
    uVar33 = FUN_ram_40000a08(fVar36 * fVar37);
    *(undefined4 *)((int)param_1 + 0x1a4) = uVar33;
    uVar33 = FUN_ram_40000786(fVar36 * fVar37);
    fVar37 = DAT_ram_40092824;
    *(undefined4 *)((int)param_1 + 0x1c4) = uVar33;
    uVar33 = FUN_ram_40000a08(fVar36 * fVar37);
    *(undefined4 *)(param_1 + 0x35) = uVar33;
    uVar33 = FUN_ram_40000786(fVar36 * fVar37);
    fVar37 = DAT_ram_40098b1c;
    *(undefined4 *)(param_1 + 0x39) = uVar33;
    uVar33 = FUN_ram_40000a08(fVar36 * fVar37);
    *(undefined4 *)((int)param_1 + 0x1ac) = uVar33;
    uVar33 = FUN_ram_40000786(fVar36 * fVar37);
    fVar37 = DAT_ram_40098b20;
    *(undefined4 *)((int)param_1 + 0x1cc) = uVar33;
    uVar33 = FUN_ram_40000a08(fVar36 * fVar37);
    *(undefined4 *)(param_1 + 0x36) = uVar33;
    uVar33 = FUN_ram_40000786(fVar36 * fVar37);
    cVar25 = '\x01';
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined4 *)(param_1 + 0x3a) = uVar33;
  }
  if (cVar25 != cVar16) {
    *(undefined2 *)((int)param_1 + 0x152) = 0;
  }
  fVar37 = DAT_ram_40098108;
  uVar33 = DAT_ram_400930a4;
  puVar19 = (uint *)((int)param_1 + 0xdc);
  do {
    puVar17 = puVar19 + 1;
    fVar36 = ((float)*puVar19 / fVar31) * fVar37;
    uVar32 = FUN_ram_40000d54(uVar33,fVar36 / fVar40);
    puVar19[0x3e] = uVar32;
    uVar32 = FUN_ram_40000d54(uVar33,fVar36 / fVar35);
    puVar19[0x46] = uVar32;
    fVar36 = DAT_ram_4009281c;
    puVar19 = puVar17;
  } while ((uint *)((int)param_1 + 0xfc) != puVar17);
  if (cVar1 != '\0') {
    *(float *)((int)param_1 + 0x1d4) = DAT_ram_4009281c;
    *(float *)((int)param_1 + 500) = fVar36;
    *(float *)(param_1 + 0x3b) = fVar36;
    *(float *)(param_1 + 0x3f) = fVar36;
    *(float *)((int)param_1 + 0x1dc) = fVar36;
    *(float *)((int)param_1 + 0x1fc) = fVar36;
    *(float *)(param_1 + 0x3c) = fVar36;
    *(float *)(param_1 + 0x40) = fVar36;
    *(float *)((int)param_1 + 0x1e4) = fVar36;
    *(float *)((int)param_1 + 0x204) = fVar36;
    *(float *)(param_1 + 0x3d) = fVar36;
    *(float *)(param_1 + 0x41) = fVar36;
    *(float *)((int)param_1 + 0x1ec) = fVar36;
    *(float *)((int)param_1 + 0x20c) = fVar36;
    *(float *)(param_1 + 0x3e) = fVar36;
    *(float *)(param_1 + 0x42) = fVar36;
  }
  fVar40 = DAT_ram_40092818;
  fVar37 = (float)*(undefined8 *)((int)param_1 + 0xc);
  fVar35 = (float)DAT_ram_400985f4;
  if ((0.0 <= fVar37) && (fVar35 = DAT_ram_40098118, fVar37 <= fVar43)) {
    fVar35 = fVar37 * (float)PTR_firmware_entry_ram_40092830 + DAT_ram_40092818;
    fVar37 = fVar43;
    if (ABS(fVar35) <= DAT_ram_4009811c) goto LAB_ram_40074326;
    if (fVar35 < 0.0) {
      fVar35 = (((-fVar35 - DAT_ram_4009811c) / DAT_ram_40098b24) * DAT_ram_400934b8) /
               DAT_ram_400930bc;
    }
    else {
      fVar35 = (((fVar35 - DAT_ram_4009811c) / DAT_ram_40098b24) * DAT_ram_4009284c) /
               DAT_ram_400930bc;
    }
  }
  fVar37 = (float)FUN_ram_40000d54(uVar33,fVar35);
LAB_ram_40074326:
  fVar35 = DAT_ram_40098b28;
  *(float *)(param_1 + 0x51) = fVar37;
  uVar33 = FUN_ram_40000c0e(fVar35 / fVar31);
  fVar35 = DAT_ram_40098b2c;
  *(undefined4 *)((int)param_1 + 0x254) = uVar33;
  uVar33 = FUN_ram_40000c0e(fVar35 / fVar31);
  *(undefined4 *)(param_1 + 0x4b) = uVar33;
  if (cVar1 != '\0') {
    *(undefined4 *)((int)param_1 + 0x254) = 0;
    *(undefined4 *)(param_1 + 0x4b) = 0;
  }
  fVar37 = fVar31 * DAT_ram_40098b30;
  fVar35 = (float)*(undefined8 *)((int)param_1 + 4) * fVar38 * fVar31 + fVar2;
  uVar32 = (uint)(-1 < (int)fVar35) * (int)fVar35;
  if (*(uint *)((int)param_1 + 0x2c) < uVar32) {
    uVar32 = *(uint *)((int)param_1 + 0x2c);
  }
  *(uint *)(param_1 + 5) = uVar32;
  uVar33 = FUN_ram_40000c0e(fVar40 / fVar37);
  fVar40 = DAT_ram_40098b34;
  *(undefined4 *)((int)param_1 + 0x25c) = uVar33;
  fVar34 = (float)FUN_ram_40000786(fVar40 / fVar31);
  fVar35 = (float)FUN_ram_40000a08(fVar40 / fVar31);
  fVar5 = DAT_ram_40098b38;
  fVar4 = DAT_ram_40092834;
  fVar35 = fVar35 / DAT_ram_40098b38;
  fVar36 = fVar34 * DAT_ram_40092834;
  fVar40 = fVar35 + fVar43;
  fVar38 = DAT_ram_40098b3c / fVar31;
  fVar37 = ((fVar43 - fVar34) * fVar2) / fVar40;
  *(float *)((int)param_1 + 0x264) = fVar37;
  *(float *)((int)param_1 + 0x26c) = fVar37;
  *(float *)(param_1 + 0x4d) = (fVar43 - fVar34) / fVar40;
  *(float *)(param_1 + 0x4e) = fVar36 / fVar40;
  *(float *)((int)param_1 + 0x274) = (fVar43 - fVar35) / fVar40;
  fVar36 = (float)FUN_ram_40000786(fVar38);
  fVar35 = (float)FUN_ram_40000a08(fVar38);
  fVar35 = fVar35 / fVar5;
  fVar40 = fVar35 + fVar43;
  fVar38 = DAT_ram_40098b40 / fVar31;
  fVar37 = ((fVar36 + fVar43) * fVar2) / fVar40;
  *(float *)((int)param_1 + 0x28c) = fVar37;
  *(float *)((int)param_1 + 0x294) = fVar37;
  *(float *)(param_1 + 0x52) = -(fVar36 + fVar43) / fVar40;
  *(float *)(param_1 + 0x53) = (fVar36 * fVar4) / fVar40;
  *(float *)((int)param_1 + 0x29c) = (fVar43 - fVar35) / fVar40;
  fVar37 = (float)FUN_ram_40000786(fVar38);
  fVar35 = (float)FUN_ram_40000a08(fVar38);
  fVar40 = fVar37 * DAT_ram_40098b48 + DAT_ram_40098b4c;
  fVar38 = fVar35 * fVar2 * DAT_ram_40098b44;
  fVar39 = -(fVar37 * DAT_ram_40098b48) + DAT_ram_40098b4c;
  fVar6 = -(fVar37 * DAT_ram_40098b4c) + DAT_ram_40098b48;
  fVar35 = fVar38 * DAT_ram_40098b50 + fVar39;
  fVar34 = fVar38 * DAT_ram_40098b50;
  fVar37 = (fVar37 * DAT_ram_40098b4c + DAT_ram_40098b48) * DAT_ram_40098b58;
  fVar36 = (fVar38 * DAT_ram_40098b50 + fVar40) * DAT_ram_40098b54;
  fVar40 = (-(fVar38 * DAT_ram_40098b50) + fVar40) * DAT_ram_40098b54;
  fVar31 = DAT_ram_40098b5c / fVar31;
  *(float *)((int)param_1 + 700) = (fVar6 + fVar6) / fVar35;
  *(float *)(param_1 + 0x57) = fVar40 / fVar35;
  *(float *)(param_1 + 0x58) = (-fVar34 + fVar39) / fVar35;
  *(float *)((int)param_1 + 0x2b4) = fVar37 / fVar35;
  *(float *)(param_1 + 0x56) = fVar36 / fVar35;
  fVar38 = (float)FUN_ram_40000786(fVar31);
  fVar35 = (float)FUN_ram_40000a08(fVar31);
  fVar35 = fVar35 / fVar5;
  *(undefined1 *)(param_1 + 4) = 0;
  fVar40 = fVar35 + fVar43;
  fVar2 = ((fVar43 - fVar38) * fVar2) / fVar40;
  *(float *)((int)param_1 + 0x2d4) = fVar2;
  *(float *)((int)param_1 + 0x2dc) = fVar2;
  *(float *)(param_1 + 0x5c) = (fVar38 * fVar4) / fVar40;
  *(float *)((int)param_1 + 0x2e4) = (fVar43 - fVar35) / fVar40;
  *(float *)(param_1 + 0x5b) = (fVar43 - fVar38) / fVar40;
  return;
}


/* NanoCore 1.10, address 0x40074fde.
 * REA evidence: ev_ffd6c9a6cd1661a4a87b51aa2ee6b2c15bb1e3cc27b19132538e003b25817b10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40074fde(float param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x2d2c0);
    uVar6 = DAT_ram_40098e08;
    uVar5 = DAT_ram_40098e04;
    uVar4 = DAT_ram_40098e00;
    uVar3 = DAT_ram_40098dfc;
    uVar2 = DAT_ram_40098df8;
    uVar1 = DAT_ram_40098df4;
    *(undefined4 *)((int)param_2 + 4) = DAT_ram_40098df0;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *(undefined4 *)((int)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((int)param_2 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 3) = uVar5;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar6;
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_400980e0;
    }
    *(undefined **)(param_2 + 4) = &sedeleg;
    *param_2 = (ulonglong)(uint)param_1;
    FUN_ram_40074064(param_2);
    return;
  }
  return;
}


