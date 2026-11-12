/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40075000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40075056.
 * REA evidence: ev_0423ee820b4d71e9c07bb8237197101ddf06dc19bb6a24aa5ba0e42675645cdd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40075056(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = *param_2;
    uVar6 = param_2[1];
    uVar5 = param_2[2];
    uVar2 = param_2[3];
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    *(undefined4 *)(param_1 + 0x1c) = param_2[6];
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}


/* NanoCore 1.10, address 0x4007508c.
 * REA evidence: ev_7ef89bf93e0b65413abcf4f5ff22d79175e5a9ab6686cca438f5af1b19c396a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007508c(int param_1)

{
  undefined4 *puVar1;
  void *pvVar3;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    memset((void *)(param_1 + 0x2f8),0,0x9604);
    *(undefined4 *)(param_1 + 0x24) = 0;
    memset((void *)(param_1 + 0x98fc),0,0x2c94);
    *(undefined4 *)(param_1 + 0x34) = 0;
    pvVar3 = (void *)(param_1 + 0xc590);
    do {
      pvVar3 = memset(pvVar3,0,0xc80);
      *(undefined4 *)((int)pvVar3 + 0xc84) = 0;
      pvVar3 = (void *)((int)pvVar3 + 0xc8c);
    } while (pvVar3 != (void *)(param_1 + 0xf7c0));
    pvVar3 = (void *)(param_1 + 0xf7c0);
    puVar1 = (undefined4 *)(param_1 + 300);
    do {
      puVar2 = puVar1 + 1;
      pvVar3 = memset(pvVar3,0,0x3b60);
      *puVar1 = 0;
      puVar1[0x3a] = 0;
      puVar1[0x42] = 0;
      pvVar3 = (void *)((int)pvVar3 + 0x3b60);
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)(param_1 + 0x14c));
    *(undefined4 *)(param_1 + 0x260) = 0;
    *(undefined4 *)(param_1 + 0x278) = 0;
    *(undefined4 *)(param_1 + 0x27c) = 0;
    *(undefined4 *)(param_1 + 0x280) = 0;
    *(undefined4 *)(param_1 + 0x284) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = 0;
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40075ddc.
 * REA evidence: ev_4dc15add63b841752475657fb4b1733b57f5e6b8ccb70a05b2c309a0be1b12c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40075ddc(undefined8 *param_1)

{
  char cVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float *pfVar14;
  float *pfVar15;
  void *pvVar16;
  uint uVar17;
  int iVar18;
  undefined2 uVar19;
  int iVar20;
  int iVar21;
  char cVar22;
  ushort uVar23;
  uint uVar24;
  undefined8 *puVar25;
  ushort *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  ulonglong uVar35;
  
  fVar4 = DAT_ram_40092864;
  fVar27 = (float)*param_1;
  fVar29 = DAT_ram_4009281c;
  fVar28 = DAT_ram_400980e0;
  if (DAT_ram_40093094 < fVar27) {
    fVar29 = fVar27 / DAT_ram_400980e0;
    fVar28 = fVar27;
  }
  cVar1 = *(char *)((int)param_1 + 0x2c);
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    iVar20 = 0;
    puVar25 = param_1 + 0x4e;
    do {
      fVar27 = (float)(int)(&DAT_ram_40098ecc)[iVar20] * fVar29;
      if (0.0 <= fVar27) {
        iVar18 = (int)(fVar27 + fVar4);
        if (iVar18 < 0x201) goto LAB_ram_400764c0;
LAB_ram_4007682a:
        iVar18 = 0x200;
      }
      else {
        iVar18 = (int)(fVar27 - fVar4);
        if (0x200 < iVar18) goto LAB_ram_4007682a;
LAB_ram_400764c0:
        if (iVar18 < 1) {
          iVar18 = 1;
        }
      }
      *(short *)((int)param_1 + iVar20 * 2 + 0x32) = (short)iVar18;
      *(undefined2 *)((int)param_1 + iVar20 * 2 + 0x38) = 0;
      pvVar16 = memset(puVar25,0,iVar18 << 2);
      iVar20 = iVar20 + 1;
      puVar25 = (undefined8 *)((int)pvVar16 + 0x800);
    } while (iVar20 != 3);
    iVar20 = 0;
    puVar25 = param_1 + 0x34e;
    do {
      fVar27 = (float)(int)(&DAT_ram_40098e7c)[iVar20] * fVar29;
      if (0.0 <= fVar27) {
        iVar18 = (int)(fVar27 + fVar4);
        if (iVar18 < 0x201) goto LAB_ram_4007652e;
LAB_ram_40076808:
        iVar18 = 0x200;
      }
      else {
        iVar18 = (int)(fVar27 - fVar4);
        if (0x200 < iVar18) goto LAB_ram_40076808;
LAB_ram_4007652e:
        if (iVar18 < 1) {
          iVar18 = 1;
        }
      }
      *(short *)((int)param_1 + iVar20 * 2 + 0x3e) = (short)iVar18;
      *(undefined2 *)((int)param_1 + iVar20 * 2 + 0x46) = 0;
      pvVar16 = memset(puVar25,0,iVar18 << 2);
      iVar20 = iVar20 + 1;
      puVar25 = (undefined8 *)((int)pvVar16 + 0x800);
    } while (iVar20 != 4);
    iVar20 = 0;
    puVar25 = param_1 + 0x74e;
    do {
      fVar27 = (float)(int)(&DAT_ram_40098e8c)[iVar20] * fVar29;
      if (0.0 <= fVar27) {
        fVar27 = fVar27 + fVar4;
      }
      else {
        fVar27 = fVar27 - fVar4;
      }
      iVar18 = (int)fVar27;
      iVar21 = 0xce4;
      if ((iVar18 < 0xce5) && (iVar21 = iVar18, iVar18 < 1)) {
        iVar21 = 1;
      }
      *(short *)((int)param_1 + iVar20 * 2 + 0x4e) = (short)iVar21;
      pvVar16 = memset(puVar25,0,0x3390);
      iVar20 = iVar20 + 1;
      puVar25 = (undefined8 *)((int)pvVar16 + 0x3390);
    } while (iVar20 != 0x10);
    fVar29 = fVar28 * DAT_ram_400980d4;
    *(undefined4 *)((int)param_1 + 0x264) = DAT_ram_400934d8;
    if (0.0 <= fVar29) {
      iVar20 = (int)(fVar29 + fVar4) + 1;
      if (0x321 < iVar20) goto LAB_ram_400765f0;
LAB_ram_400768f8:
      if (iVar20 < 1) {
        iVar20 = 1;
      }
    }
    else {
      iVar20 = (int)(fVar29 - fVar4) + 1;
      if (iVar20 < 0x322) goto LAB_ram_400768f8;
LAB_ram_400765f0:
      iVar20 = 0x321;
    }
    *(short *)((int)param_1 + 0x134) = (short)iVar20;
    *(undefined2 *)((int)param_1 + 0x132) = 0;
    *(undefined2 *)(param_1 + 0x27) = 0;
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    if (*(ushort *)((int)param_1 + 0x3e) != 0) {
      memset(param_1 + 0x34e,0,(uint)*(ushort *)((int)param_1 + 0x3e) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x46) = 0;
    if (*(ushort *)(param_1 + 8) != 0) {
      memset(param_1 + 0x44e,0,(uint)*(ushort *)(param_1 + 8) << 2);
    }
    *(undefined2 *)(param_1 + 9) = 0;
    if (*(ushort *)((int)param_1 + 0x42) != 0) {
      memset(param_1 + 0x54e,0,(uint)*(ushort *)((int)param_1 + 0x42) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x4a) = 0;
    if (*(ushort *)((int)param_1 + 0x44) != 0) {
      memset(param_1 + 0x64e,0,(uint)*(ushort *)((int)param_1 + 0x44) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x4c) = 0;
    if (*(ushort *)((int)param_1 + 0x32) != 0) {
      memset(param_1 + 0x4e,0,(uint)*(ushort *)((int)param_1 + 0x32) << 2);
    }
    *(undefined2 *)(param_1 + 7) = 0;
    if (*(ushort *)((int)param_1 + 0x34) != 0) {
      memset(param_1 + 0x14e,0,(uint)*(ushort *)((int)param_1 + 0x34) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
    if (*(ushort *)((int)param_1 + 0x36) != 0) {
      memset(param_1 + 0x24e,0,(uint)*(ushort *)((int)param_1 + 0x36) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x3c) = 0;
    if (*(short *)((int)param_1 + 0x4e) == 0) {
      *(undefined4 *)(param_1 + 0x16) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      if (*(short *)(param_1 + 10) != 0) goto LAB_ram_40076ae4;
LAB_ram_400766d8:
      *(undefined4 *)((int)param_1 + 0xb4) = 0;
      *(undefined4 *)((int)param_1 + 0xf4) = 0;
      if (*(short *)((int)param_1 + 0x52) != 0) goto LAB_ram_40076b08;
LAB_ram_400766e8:
      *(undefined4 *)(param_1 + 0x17) = 0;
      *(undefined4 *)(param_1 + 0x1f) = 0;
      if (*(short *)((int)param_1 + 0x54) != 0) goto LAB_ram_40076b2c;
LAB_ram_400766f8:
      *(undefined4 *)((int)param_1 + 0xbc) = 0;
      *(undefined4 *)((int)param_1 + 0xfc) = 0;
      if (*(short *)((int)param_1 + 0x56) != 0) goto LAB_ram_40076b50;
LAB_ram_40076708:
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (*(short *)(param_1 + 0xb) != 0) goto LAB_ram_40076b74;
LAB_ram_40076718:
      *(undefined4 *)((int)param_1 + 0xc4) = 0;
      *(undefined4 *)((int)param_1 + 0x104) = 0;
      if (*(short *)((int)param_1 + 0x5a) != 0) goto LAB_ram_40076b98;
LAB_ram_40076728:
      *(undefined4 *)(param_1 + 0x19) = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
      if (*(short *)((int)param_1 + 0x5c) != 0) goto LAB_ram_40076bbc;
LAB_ram_40076738:
      *(undefined4 *)((int)param_1 + 0xcc) = 0;
      *(undefined4 *)((int)param_1 + 0x10c) = 0;
      if (*(short *)((int)param_1 + 0x5e) != 0) goto LAB_ram_40076be0;
LAB_ram_40076748:
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x22) = 0;
      if (*(short *)(param_1 + 0xc) != 0) goto LAB_ram_40076c04;
LAB_ram_40076758:
      *(undefined4 *)((int)param_1 + 0xd4) = 0;
      *(undefined4 *)((int)param_1 + 0x114) = 0;
      if (*(short *)((int)param_1 + 0x62) != 0) goto LAB_ram_40076c2a;
LAB_ram_40076768:
      *(undefined4 *)(param_1 + 0x1b) = 0;
      *(undefined4 *)(param_1 + 0x23) = 0;
      if (*(short *)((int)param_1 + 100) != 0) goto LAB_ram_40076c50;
LAB_ram_40076778:
      sVar2 = *(short *)((int)param_1 + 0x66);
      *(undefined4 *)((int)param_1 + 0xdc) = 0;
      *(undefined4 *)((int)param_1 + 0x11c) = 0;
    }
    else {
      memset(param_1 + 0x74e,0,0x3390);
      *(undefined4 *)(param_1 + 0x16) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      if (*(short *)(param_1 + 10) == 0) goto LAB_ram_400766d8;
LAB_ram_40076ae4:
      memset(param_1 + 0xdc0,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xb4) = 0;
      *(undefined4 *)((int)param_1 + 0xf4) = 0;
      if (*(short *)((int)param_1 + 0x52) == 0) goto LAB_ram_400766e8;
LAB_ram_40076b08:
      memset(param_1 + 0x1432,0,0x3390);
      *(undefined4 *)(param_1 + 0x17) = 0;
      *(undefined4 *)(param_1 + 0x1f) = 0;
      if (*(short *)((int)param_1 + 0x54) == 0) goto LAB_ram_400766f8;
LAB_ram_40076b2c:
      memset(param_1 + 0x1aa4,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xbc) = 0;
      *(undefined4 *)((int)param_1 + 0xfc) = 0;
      if (*(short *)((int)param_1 + 0x56) == 0) goto LAB_ram_40076708;
LAB_ram_40076b50:
      memset(param_1 + 0x2116,0,0x3390);
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (*(short *)(param_1 + 0xb) == 0) goto LAB_ram_40076718;
LAB_ram_40076b74:
      memset(param_1 + 0x2788,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xc4) = 0;
      *(undefined4 *)((int)param_1 + 0x104) = 0;
      if (*(short *)((int)param_1 + 0x5a) == 0) goto LAB_ram_40076728;
LAB_ram_40076b98:
      memset(param_1 + 0x2dfa,0,0x3390);
      *(undefined4 *)(param_1 + 0x19) = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
      if (*(short *)((int)param_1 + 0x5c) == 0) goto LAB_ram_40076738;
LAB_ram_40076bbc:
      memset(param_1 + 0x346c,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xcc) = 0;
      *(undefined4 *)((int)param_1 + 0x10c) = 0;
      if (*(short *)((int)param_1 + 0x5e) == 0) goto LAB_ram_40076748;
LAB_ram_40076be0:
      memset(param_1 + 0x3ade,0,0x3390);
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x22) = 0;
      if (*(short *)(param_1 + 0xc) == 0) goto LAB_ram_40076758;
LAB_ram_40076c04:
      memset(param_1 + 0x4150,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xd4) = 0;
      *(undefined4 *)((int)param_1 + 0x114) = 0;
      if (*(short *)((int)param_1 + 0x62) == 0) goto LAB_ram_40076768;
LAB_ram_40076c2a:
      memset(param_1 + 0x47c2,0,0x3390);
      *(undefined4 *)(param_1 + 0x1b) = 0;
      *(undefined4 *)(param_1 + 0x23) = 0;
      if (*(short *)((int)param_1 + 100) == 0) goto LAB_ram_40076778;
LAB_ram_40076c50:
      memset(param_1 + 0x4e34,0,0x3390);
      sVar2 = *(short *)((int)param_1 + 0x66);
      *(undefined4 *)((int)param_1 + 0xdc) = 0;
      *(undefined4 *)((int)param_1 + 0x11c) = 0;
    }
    if (sVar2 != 0) {
      memset(param_1 + 0x54a6,0,0x3390);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (*(short *)(param_1 + 0xd) != 0) {
      memset(param_1 + 0x5b18,0,0x3390);
    }
    *(undefined4 *)((int)param_1 + 0xe4) = 0;
    *(undefined4 *)((int)param_1 + 0x124) = 0;
    if (*(short *)((int)param_1 + 0x6a) == 0) {
      sVar2 = *(short *)((int)param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x1d) = 0;
      *(undefined4 *)(param_1 + 0x25) = 0;
    }
    else {
      memset(param_1 + 0x618a,0,0x3390);
      sVar2 = *(short *)((int)param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x1d) = 0;
      *(undefined4 *)(param_1 + 0x25) = 0;
    }
    if (sVar2 != 0) {
      memset(param_1 + 0x67fc,0,0x3390);
    }
    *(undefined4 *)((int)param_1 + 0xec) = 0;
    *(undefined4 *)((int)param_1 + 300) = 0;
    *(undefined2 *)((int)param_1 + 0x6e) = 0;
    memset(param_1 + 0x6e6e,0,0xc84);
    *(undefined2 *)(param_1 + 0x26) = 0;
    memset((void *)((int)param_1 + 0x37ff4),0,0x9600);
    fVar29 = DAT_ram_4009281c;
    *(undefined2 *)((int)param_1 + 0x136) = 0;
    *(undefined4 *)((int)param_1 + 0x13c) = 0;
    *(float *)(param_1 + 0x4d) = fVar29;
  }
  fVar27 = (float)*(undefined8 *)((int)param_1 + 4);
  *(undefined4 *)(param_1 + 0x4a) = DAT_ram_40092820;
  fVar29 = fVar4;
  if (fVar27 < fVar4) {
LAB_ram_40075e8a:
    if (cVar1 != '\0') goto LAB_ram_40075e8e;
LAB_ram_40076850:
    fVar27 = DAT_ram_40098108;
    uVar30 = DAT_ram_400930a4;
    pfVar14 = (float *)(param_1 + 0xe);
    puVar26 = (ushort *)((int)param_1 + 0x4e);
    do {
      fVar33 = *(float *)((int)param_1 + 0x264);
      pfVar15 = pfVar14 + 1;
      fVar31 = (float)FUN_ram_40000d54(uVar30,(((float)*puVar26 / fVar28) * fVar27) / fVar29);
      *pfVar14 = fVar31 * fVar33;
      fVar33 = DAT_ram_40098e14;
      pfVar14 = pfVar15;
      puVar26 = puVar26 + 1;
    } while ((float *)(param_1 + 0x16) != pfVar15);
    fVar29 = fVar28 * DAT_ram_40094234;
    *(undefined4 *)((int)param_1 + 0x254) = DAT_ram_40098e10;
    if (fVar29 < fVar33) {
      uVar32 = FUN_ram_40000c0e((fVar29 * DAT_ram_4009810c) / fVar28);
      uVar30 = DAT_ram_40093100;
      *(undefined4 *)(param_1 + 0x4b) = uVar32;
      *(undefined4 *)((int)param_1 + 0x25c) = uVar30;
    }
    else {
      uVar32 = FUN_ram_40000c0e(DAT_ram_40098e64 / fVar28);
      uVar30 = DAT_ram_40093100;
      *(undefined4 *)(param_1 + 0x4b) = uVar32;
      *(undefined4 *)((int)param_1 + 0x25c) = uVar30;
    }
  }
  else {
    if (fVar27 <= DAT_ram_40093494) {
      fVar29 = (float)FUN_ram_400008b8(DAT_ram_400930f4,
                                       ((fVar27 - fVar4) / DAT_ram_4009423c) * DAT_ram_40098e0c +
                                       fVar4);
      goto LAB_ram_40075e8a;
    }
    fVar29 = DAT_ram_4009286c;
    if (cVar1 == '\0') goto LAB_ram_40076850;
LAB_ram_40075e8e:
    fVar27 = DAT_ram_40098e14;
    uVar30 = DAT_ram_40098e10;
    uVar17 = *(uint *)((int)param_1 + 0x264);
    uVar35 = (ulonglong)uVar17;
    fVar29 = fVar28 * DAT_ram_40094234;
    param_1[0xe] = uVar35;
    *(ulonglong *)((int)param_1 + 0x74) = uVar35;
    param_1[0xf] = uVar35;
    *(ulonglong *)((int)param_1 + 0x7c) = uVar35;
    *(uint *)(param_1 + 0x10) = uVar17;
    *(uint *)((int)param_1 + 0x84) = uVar17;
    *(uint *)(param_1 + 0x11) = uVar17;
    *(uint *)((int)param_1 + 0x8c) = uVar17;
    *(uint *)(param_1 + 0x12) = uVar17;
    *(uint *)((int)param_1 + 0x94) = uVar17;
    *(uint *)(param_1 + 0x13) = uVar17;
    *(uint *)((int)param_1 + 0x9c) = uVar17;
    *(uint *)(param_1 + 0x14) = uVar17;
    *(uint *)((int)param_1 + 0xa4) = uVar17;
    *(uint *)(param_1 + 0x15) = uVar17;
    *(uint *)((int)param_1 + 0xac) = uVar17;
    *(undefined4 *)((int)param_1 + 0x254) = uVar30;
    if (fVar29 < fVar27) {
      uVar30 = FUN_ram_40000c0e((fVar29 * DAT_ram_4009810c) / fVar28);
      *(undefined4 *)(param_1 + 0x4b) = uVar30;
    }
    else {
      uVar30 = FUN_ram_40000c0e(DAT_ram_40098e64 / fVar28);
      *(undefined4 *)(param_1 + 0x4b) = uVar30;
    }
    *(undefined4 *)((int)param_1 + 0x254) = 0;
    *(undefined4 *)((int)param_1 + 0x25c) = 0;
  }
  uVar30 = FUN_ram_40000c0e(DAT_ram_40098e18 / fVar28);
  *(undefined4 *)(param_1 + 0x28) = uVar30;
  fVar29 = DAT_ram_40092818;
  fVar33 = (float)param_1[1];
  fVar27 = DAT_ram_40092818;
  if ((fVar33 < 0.0) || (fVar27 = DAT_ram_40098118, DAT_ram_4009281c < fVar33)) {
LAB_ram_400769e2:
    fVar33 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar27);
  }
  else {
    fVar27 = fVar33 * (float)PTR_firmware_entry_ram_40092830 + DAT_ram_40092818;
    fVar33 = DAT_ram_4009281c;
    if (DAT_ram_4009811c < ABS(fVar27)) {
      if (fVar27 < 0.0) {
        fVar27 = (((-fVar27 - DAT_ram_4009811c) / DAT_ram_40098b24) * DAT_ram_400930c8) /
                 DAT_ram_400930bc;
      }
      else {
        fVar27 = (((fVar27 - DAT_ram_4009811c) / DAT_ram_40098b24) * DAT_ram_4009284c) /
                 DAT_ram_400930bc;
      }
      goto LAB_ram_400769e2;
    }
  }
  *(float *)((int)param_1 + 0x144) = fVar33;
  fVar33 = DAT_ram_40098104;
  fVar27 = DAT_ram_400980e8;
  cVar1 = *(char *)((int)param_1 + 0x14c);
  fVar31 = (float)*(undefined8 *)((int)param_1 + 0x14);
  if (fVar31 < 0.0) {
    fVar34 = 0.0;
  }
  else {
    fVar34 = DAT_ram_40098534;
    if (fVar31 <= DAT_ram_400980bc) {
      fVar34 = fVar31 * DAT_ram_40098104;
    }
  }
  fVar31 = *(float *)(param_1 + 3);
  fVar34 = fVar28 * fVar34;
  if (fVar31 < 0.0) {
    *(float *)(param_1 + 0x29) = fVar34;
  }
  else {
    if (DAT_ram_400980e8 < fVar31) {
      *(float *)(param_1 + 0x29) = fVar34;
    }
    else {
      *(float *)(param_1 + 0x29) = fVar34;
      fVar27 = fVar31;
      if (fVar31 <= 0.0) goto LAB_ram_40076904;
    }
    uVar13 = DAT_ram_40098e30;
    uVar12 = DAT_ram_40098e2c;
    uVar11 = DAT_ram_40098e28;
    uVar10 = DAT_ram_40098e24;
    uVar9 = DAT_ram_40098e20;
    uVar8 = DAT_ram_40098e1c;
    uVar7 = DAT_ram_40098af8;
    uVar6 = DAT_ram_40098af4;
    uVar5 = DAT_ram_400988f8;
    uVar32 = DAT_ram_400988f0;
    uVar30 = DAT_ram_4009869c;
    fVar3 = DAT_ram_4009281c;
    fVar31 = DAT_ram_40092818;
    if (0.0 < fVar34) {
      fVar27 = (fVar27 * DAT_ram_400980f4) / fVar28;
      if (cVar1 == '\0') {
        *(float *)(param_1 + 0x32) = DAT_ram_4009281c;
        *(undefined4 *)((int)param_1 + 0x194) = uVar9;
        *(undefined4 *)(param_1 + 0x2b) = uVar32;
        *(undefined4 *)(param_1 + 0x33) = uVar32;
        *(undefined4 *)((int)param_1 + 0x15c) = uVar9;
        *(undefined4 *)((int)param_1 + 0x19c) = uVar30;
        *(float *)(param_1 + 0x2c) = fVar3;
        *(undefined4 *)(param_1 + 0x34) = uVar5;
        *(undefined4 *)((int)param_1 + 0x164) = uVar9;
        *(undefined4 *)((int)param_1 + 0x1a4) = uVar10;
        *(undefined4 *)(param_1 + 0x2d) = uVar32;
        *(undefined4 *)(param_1 + 0x35) = uVar6;
        *(undefined4 *)((int)param_1 + 0x16c) = uVar11;
        *(undefined4 *)((int)param_1 + 0x1ac) = uVar12;
        *(undefined4 *)(param_1 + 0x2e) = uVar7;
        *(undefined4 *)(param_1 + 0x2a) = 0;
        *(undefined4 *)((int)param_1 + 0x154) = uVar8;
        *(float *)(param_1 + 0x36) = fVar31;
        *(undefined4 *)((int)param_1 + 0x174) = uVar13;
        uVar12 = DAT_ram_40098e44;
        uVar11 = DAT_ram_40098e40;
        uVar10 = DAT_ram_40098e3c;
        uVar9 = DAT_ram_40098e38;
        uVar8 = DAT_ram_40098e34;
        uVar7 = DAT_ram_40098b0c;
        uVar6 = DAT_ram_40098b08;
        uVar5 = DAT_ram_40098b04;
        uVar32 = DAT_ram_40098b00;
        uVar30 = DAT_ram_40098afc;
        *(undefined4 *)((int)param_1 + 0x1b4) = DAT_ram_40098694._4_4_;
        *(undefined4 *)(param_1 + 0x2f) = uVar30;
        *(undefined4 *)(param_1 + 0x37) = uVar32;
        *(undefined4 *)((int)param_1 + 0x17c) = uVar8;
        *(undefined4 *)((int)param_1 + 0x1bc) = uVar9;
        *(float *)(param_1 + 0x30) = fVar31;
        *(undefined4 *)(param_1 + 0x38) = uVar5;
        *(undefined4 *)((int)param_1 + 0x184) = uVar10;
        *(undefined4 *)((int)param_1 + 0x1c4) = uVar11;
        *(undefined4 *)(param_1 + 0x31) = uVar6;
        *(undefined4 *)(param_1 + 0x39) = uVar7;
        *(undefined4 *)((int)param_1 + 0x18c) = uVar13;
        *(undefined4 *)((int)param_1 + 0x1cc) = uVar12;
      }
      uVar30 = FUN_ram_40000a08(fVar27);
      *(undefined4 *)(param_1 + 0x3a) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27);
      fVar31 = DAT_ram_40098e48;
      *(undefined4 *)(param_1 + 0x42) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)((int)param_1 + 0x1d4) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098b10;
      *(undefined4 *)((int)param_1 + 0x214) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)(param_1 + 0x3b) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098e4c;
      *(undefined4 *)(param_1 + 0x43) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)((int)param_1 + 0x1dc) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098b14;
      *(undefined4 *)((int)param_1 + 0x21c) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)(param_1 + 0x3c) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098930;
      *(undefined4 *)(param_1 + 0x44) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)((int)param_1 + 0x1e4) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098b18;
      *(undefined4 *)((int)param_1 + 0x224) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)(param_1 + 0x3d) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098e50;
      *(undefined4 *)(param_1 + 0x45) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)((int)param_1 + 0x1ec) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_4009851c;
      *(undefined4 *)((int)param_1 + 0x22c) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)(param_1 + 0x3e) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098e54;
      *(undefined4 *)(param_1 + 0x46) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)((int)param_1 + 500) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40092824;
      *(undefined4 *)((int)param_1 + 0x234) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)(param_1 + 0x3f) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098e58;
      *(undefined4 *)(param_1 + 0x47) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)((int)param_1 + 0x1fc) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098b1c;
      *(undefined4 *)((int)param_1 + 0x23c) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)(param_1 + 0x40) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098e5c;
      *(undefined4 *)(param_1 + 0x48) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)((int)param_1 + 0x204) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098b20;
      *(undefined4 *)((int)param_1 + 0x244) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)(param_1 + 0x41) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      fVar31 = DAT_ram_40098e60;
      *(undefined4 *)(param_1 + 0x49) = uVar30;
      uVar30 = FUN_ram_40000a08(fVar27 * fVar31);
      *(undefined4 *)((int)param_1 + 0x20c) = uVar30;
      uVar30 = FUN_ram_40000786(fVar27 * fVar31);
      cVar22 = '\x01';
      *(undefined1 *)((int)param_1 + 0x14c) = 1;
      *(undefined4 *)((int)param_1 + 0x24c) = uVar30;
      goto LAB_ram_400763a4;
    }
  }
LAB_ram_40076904:
  if (cVar1 != '\0') {
    memset(param_1 + 0x2a,0,0x40);
    fVar27 = DAT_ram_4009281c;
    *(float *)(param_1 + 0x32) = DAT_ram_4009281c;
    *(float *)((int)param_1 + 0x194) = fVar27;
    *(float *)(param_1 + 0x33) = fVar27;
    *(float *)((int)param_1 + 0x19c) = fVar27;
    *(float *)(param_1 + 0x34) = fVar27;
    *(float *)((int)param_1 + 0x1a4) = fVar27;
    *(float *)(param_1 + 0x35) = fVar27;
    *(float *)((int)param_1 + 0x1ac) = fVar27;
    *(float *)(param_1 + 0x36) = fVar27;
    *(float *)((int)param_1 + 0x1b4) = fVar27;
    *(float *)(param_1 + 0x37) = fVar27;
    *(float *)((int)param_1 + 0x1bc) = fVar27;
    *(float *)(param_1 + 0x38) = fVar27;
    *(float *)((int)param_1 + 0x1c4) = fVar27;
    *(float *)(param_1 + 0x39) = fVar27;
    *(float *)((int)param_1 + 0x1cc) = fVar27;
    memset(param_1 + 0x3a,0,0x40);
    *(float *)(param_1 + 0x42) = fVar27;
    *(float *)((int)param_1 + 0x214) = fVar27;
    *(float *)(param_1 + 0x43) = fVar27;
    *(float *)((int)param_1 + 0x21c) = fVar27;
    *(float *)(param_1 + 0x44) = fVar27;
    *(float *)((int)param_1 + 0x224) = fVar27;
    *(float *)(param_1 + 0x45) = fVar27;
    *(float *)((int)param_1 + 0x22c) = fVar27;
    *(float *)(param_1 + 0x46) = fVar27;
    *(float *)((int)param_1 + 0x234) = fVar27;
    *(float *)(param_1 + 0x47) = fVar27;
    *(float *)((int)param_1 + 0x23c) = fVar27;
    *(float *)(param_1 + 0x48) = fVar27;
    *(float *)((int)param_1 + 0x244) = fVar27;
    *(float *)(param_1 + 0x49) = fVar27;
    *(float *)((int)param_1 + 0x24c) = fVar27;
  }
  *(undefined1 *)((int)param_1 + 0x14c) = 0;
  cVar22 = '\0';
LAB_ram_400763a4:
  if (cVar1 != cVar22) {
    *(undefined2 *)((int)param_1 + 0x14e) = 0;
  }
  fVar27 = fVar28 * DAT_ram_400930d8;
  *(int *)(param_1 + 0x4c) = (int)*(undefined8 *)((int)param_1 + 0x24);
  uVar30 = FUN_ram_40000c0e(fVar29 / fVar27);
  *(undefined4 *)((int)param_1 + 0x26c) = uVar30;
  fVar29 = (float)param_1[4] * fVar33 * fVar28;
  if (0.0 <= fVar29) {
    fVar29 = fVar29 + fVar4;
  }
  else {
    fVar29 = fVar29 - fVar4;
  }
  uVar19 = 0;
  uVar17 = *(ushort *)((int)param_1 + 0x134) - 1;
  if (*(ushort *)((int)param_1 + 0x134) != 0) {
    uVar24 = (int)fVar29 & ~(int)fVar29 >> 0x1f;
    if ((int)uVar17 < (int)uVar24) {
      uVar24 = uVar17;
    }
    uVar19 = (undefined2)uVar24;
  }
  *(undefined2 *)((int)param_1 + 0x132) = uVar19;
  fVar28 = (float)param_1[5] * fVar33 * fVar28;
  if (0.0 <= fVar28) {
    fVar28 = fVar28 + fVar4;
  }
  else {
    fVar28 = fVar28 - fVar4;
  }
  iVar20 = (int)fVar28;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar23 = (short)~(ushort)((uint)iVar20 >> 0x10) >> 0xf & (ushort)iVar20;
  if (0x2580 < iVar20) {
    uVar23 = 0x2580;
  }
  *(ushort *)(param_1 + 0x27) = uVar23;
  return;
}


