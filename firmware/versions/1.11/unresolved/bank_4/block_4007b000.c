/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4007b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4007bc2c.
 * REA evidence: ev_e1314e7267f24fb12660e6cd1ad3c3199aedb95e1ad054dee3b75ff3946b6620
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007bc2c(undefined8 *param_1)

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
  uint uVar16;
  int iVar17;
  undefined2 uVar18;
  int iVar19;
  int iVar20;
  char cVar21;
  ushort uVar22;
  uint uVar23;
  undefined8 *puVar24;
  ushort *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  ulonglong uVar34;
  
  fVar4 = DAT_ram_40094634;
  fVar26 = (float)*param_1;
  fVar28 = DAT_ram_40094604;
  fVar27 = DAT_ram_40099f80;
  if (DAT_ram_40094e80 < fVar26) {
    fVar28 = fVar26 / DAT_ram_40099f80;
    fVar27 = fVar26;
  }
  cVar1 = *(char *)((int)param_1 + 0x2c);
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    iVar19 = 0;
    puVar24 = param_1 + 0x4e;
    do {
      fVar26 = (float)(int)(&DAT_ram_4009aee8)[iVar19] * fVar28;
      if (0.0 <= fVar26) {
        iVar17 = (int)(fVar26 + fVar4);
        if (iVar17 < 0x201) goto LAB_ram_4007c310;
LAB_ram_4007c67a:
        iVar17 = 0x200;
      }
      else {
        iVar17 = (int)(fVar26 - fVar4);
        if (0x200 < iVar17) goto LAB_ram_4007c67a;
LAB_ram_4007c310:
        if (iVar17 < 1) {
          iVar17 = 1;
        }
      }
      *(short *)((int)param_1 + iVar19 * 2 + 0x32) = (short)iVar17;
      *(undefined2 *)((int)param_1 + iVar19 * 2 + 0x38) = 0;
      iVar17 = memset(puVar24,0,iVar17 << 2);
      iVar19 = iVar19 + 1;
      puVar24 = (undefined8 *)(iVar17 + 0x800);
    } while (iVar19 != 3);
    iVar19 = 0;
    puVar24 = param_1 + 0x34e;
    do {
      fVar26 = (float)(int)(&DAT_ram_4009ae98)[iVar19] * fVar28;
      if (0.0 <= fVar26) {
        iVar17 = (int)(fVar26 + fVar4);
        if (iVar17 < 0x201) goto LAB_ram_4007c37e;
LAB_ram_4007c658:
        iVar17 = 0x200;
      }
      else {
        iVar17 = (int)(fVar26 - fVar4);
        if (0x200 < iVar17) goto LAB_ram_4007c658;
LAB_ram_4007c37e:
        if (iVar17 < 1) {
          iVar17 = 1;
        }
      }
      *(short *)((int)param_1 + iVar19 * 2 + 0x3e) = (short)iVar17;
      *(undefined2 *)((int)param_1 + iVar19 * 2 + 0x46) = 0;
      iVar17 = memset(puVar24,0,iVar17 << 2);
      iVar19 = iVar19 + 1;
      puVar24 = (undefined8 *)(iVar17 + 0x800);
    } while (iVar19 != 4);
    iVar19 = 0;
    puVar24 = param_1 + 0x74e;
    do {
      fVar26 = (float)(int)(&DAT_ram_4009aea8)[iVar19] * fVar28;
      if (0.0 <= fVar26) {
        fVar26 = fVar26 + fVar4;
      }
      else {
        fVar26 = fVar26 - fVar4;
      }
      iVar17 = (int)fVar26;
      iVar20 = 0xce4;
      if ((iVar17 < 0xce5) && (iVar20 = iVar17, iVar17 < 1)) {
        iVar20 = 1;
      }
      *(short *)((int)param_1 + iVar19 * 2 + 0x4e) = (short)iVar20;
      iVar17 = memset(puVar24,0,0x3390);
      iVar19 = iVar19 + 1;
      puVar24 = (undefined8 *)(iVar17 + 0x3390);
    } while (iVar19 != 0x10);
    fVar28 = fVar27 * DAT_ram_40099f74;
    *(undefined4 *)((int)param_1 + 0x264) = DAT_ram_400952c4;
    if (0.0 <= fVar28) {
      iVar19 = (int)(fVar28 + fVar4) + 1;
      if (0x321 < iVar19) goto LAB_ram_4007c440;
LAB_ram_4007c748:
      if (iVar19 < 1) {
        iVar19 = 1;
      }
    }
    else {
      iVar19 = (int)(fVar28 - fVar4) + 1;
      if (iVar19 < 0x322) goto LAB_ram_4007c748;
LAB_ram_4007c440:
      iVar19 = 0x321;
    }
    *(short *)((int)param_1 + 0x134) = (short)iVar19;
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
      if (*(short *)(param_1 + 10) != 0) goto LAB_ram_4007c934;
LAB_ram_4007c528:
      *(undefined4 *)((int)param_1 + 0xb4) = 0;
      *(undefined4 *)((int)param_1 + 0xf4) = 0;
      if (*(short *)((int)param_1 + 0x52) != 0) goto LAB_ram_4007c958;
LAB_ram_4007c538:
      *(undefined4 *)(param_1 + 0x17) = 0;
      *(undefined4 *)(param_1 + 0x1f) = 0;
      if (*(short *)((int)param_1 + 0x54) != 0) goto LAB_ram_4007c97c;
LAB_ram_4007c548:
      *(undefined4 *)((int)param_1 + 0xbc) = 0;
      *(undefined4 *)((int)param_1 + 0xfc) = 0;
      if (*(short *)((int)param_1 + 0x56) != 0) goto LAB_ram_4007c9a0;
LAB_ram_4007c558:
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (*(short *)(param_1 + 0xb) != 0) goto LAB_ram_4007c9c4;
LAB_ram_4007c568:
      *(undefined4 *)((int)param_1 + 0xc4) = 0;
      *(undefined4 *)((int)param_1 + 0x104) = 0;
      if (*(short *)((int)param_1 + 0x5a) != 0) goto LAB_ram_4007c9e8;
LAB_ram_4007c578:
      *(undefined4 *)(param_1 + 0x19) = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
      if (*(short *)((int)param_1 + 0x5c) != 0) goto LAB_ram_4007ca0c;
LAB_ram_4007c588:
      *(undefined4 *)((int)param_1 + 0xcc) = 0;
      *(undefined4 *)((int)param_1 + 0x10c) = 0;
      if (*(short *)((int)param_1 + 0x5e) != 0) goto LAB_ram_4007ca30;
LAB_ram_4007c598:
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x22) = 0;
      if (*(short *)(param_1 + 0xc) != 0) goto LAB_ram_4007ca54;
LAB_ram_4007c5a8:
      *(undefined4 *)((int)param_1 + 0xd4) = 0;
      *(undefined4 *)((int)param_1 + 0x114) = 0;
      if (*(short *)((int)param_1 + 0x62) != 0) goto LAB_ram_4007ca7a;
LAB_ram_4007c5b8:
      *(undefined4 *)(param_1 + 0x1b) = 0;
      *(undefined4 *)(param_1 + 0x23) = 0;
      if (*(short *)((int)param_1 + 100) != 0) goto LAB_ram_4007caa0;
LAB_ram_4007c5c8:
      sVar2 = *(short *)((int)param_1 + 0x66);
      *(undefined4 *)((int)param_1 + 0xdc) = 0;
      *(undefined4 *)((int)param_1 + 0x11c) = 0;
    }
    else {
      memset(param_1 + 0x74e,0,0x3390);
      *(undefined4 *)(param_1 + 0x16) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      if (*(short *)(param_1 + 10) == 0) goto LAB_ram_4007c528;
LAB_ram_4007c934:
      memset(param_1 + 0xdc0,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xb4) = 0;
      *(undefined4 *)((int)param_1 + 0xf4) = 0;
      if (*(short *)((int)param_1 + 0x52) == 0) goto LAB_ram_4007c538;
LAB_ram_4007c958:
      memset(param_1 + 0x1432,0,0x3390);
      *(undefined4 *)(param_1 + 0x17) = 0;
      *(undefined4 *)(param_1 + 0x1f) = 0;
      if (*(short *)((int)param_1 + 0x54) == 0) goto LAB_ram_4007c548;
LAB_ram_4007c97c:
      memset(param_1 + 0x1aa4,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xbc) = 0;
      *(undefined4 *)((int)param_1 + 0xfc) = 0;
      if (*(short *)((int)param_1 + 0x56) == 0) goto LAB_ram_4007c558;
LAB_ram_4007c9a0:
      memset(param_1 + 0x2116,0,0x3390);
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (*(short *)(param_1 + 0xb) == 0) goto LAB_ram_4007c568;
LAB_ram_4007c9c4:
      memset(param_1 + 0x2788,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xc4) = 0;
      *(undefined4 *)((int)param_1 + 0x104) = 0;
      if (*(short *)((int)param_1 + 0x5a) == 0) goto LAB_ram_4007c578;
LAB_ram_4007c9e8:
      memset(param_1 + 0x2dfa,0,0x3390);
      *(undefined4 *)(param_1 + 0x19) = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
      if (*(short *)((int)param_1 + 0x5c) == 0) goto LAB_ram_4007c588;
LAB_ram_4007ca0c:
      memset(param_1 + 0x346c,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xcc) = 0;
      *(undefined4 *)((int)param_1 + 0x10c) = 0;
      if (*(short *)((int)param_1 + 0x5e) == 0) goto LAB_ram_4007c598;
LAB_ram_4007ca30:
      memset(param_1 + 0x3ade,0,0x3390);
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x22) = 0;
      if (*(short *)(param_1 + 0xc) == 0) goto LAB_ram_4007c5a8;
LAB_ram_4007ca54:
      memset(param_1 + 0x4150,0,0x3390);
      *(undefined4 *)((int)param_1 + 0xd4) = 0;
      *(undefined4 *)((int)param_1 + 0x114) = 0;
      if (*(short *)((int)param_1 + 0x62) == 0) goto LAB_ram_4007c5b8;
LAB_ram_4007ca7a:
      memset(param_1 + 0x47c2,0,0x3390);
      *(undefined4 *)(param_1 + 0x1b) = 0;
      *(undefined4 *)(param_1 + 0x23) = 0;
      if (*(short *)((int)param_1 + 100) == 0) goto LAB_ram_4007c5c8;
LAB_ram_4007caa0:
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
    memset((int)param_1 + 0x37ff4,0,0x9600);
    fVar28 = DAT_ram_40094604;
    *(undefined2 *)((int)param_1 + 0x136) = 0;
    *(undefined4 *)((int)param_1 + 0x13c) = 0;
    *(float *)(param_1 + 0x4d) = fVar28;
  }
  fVar26 = (float)*(undefined8 *)((int)param_1 + 4);
  *(undefined4 *)(param_1 + 0x4a) = DAT_ram_40094608;
  fVar28 = fVar4;
  if (fVar26 < fVar4) {
LAB_ram_4007bcda:
    if (cVar1 != '\0') goto LAB_ram_4007bcde;
LAB_ram_4007c6a0:
    fVar26 = DAT_ram_40099fa8;
    uVar29 = DAT_ram_40094e90;
    pfVar14 = (float *)(param_1 + 0xe);
    puVar25 = (ushort *)((int)param_1 + 0x4e);
    do {
      fVar32 = *(float *)((int)param_1 + 0x264);
      pfVar15 = pfVar14 + 1;
      fVar30 = (float)FUN_ram_40000d44(uVar29,(((float)*puVar25 / fVar27) * fVar26) / fVar28);
      *pfVar14 = fVar30 * fVar32;
      fVar32 = DAT_ram_4009ae34;
      pfVar14 = pfVar15;
      puVar25 = puVar25 + 1;
    } while ((float *)(param_1 + 0x16) != pfVar15);
    fVar28 = fVar27 * DAT_ram_4009605c;
    *(undefined4 *)((int)param_1 + 0x254) = DAT_ram_4009ae30;
    if (fVar28 < fVar32) {
      uVar31 = FUN_ram_40000bd8((fVar28 * DAT_ram_40099fac) / fVar27);
      uVar29 = DAT_ram_40094eec;
      *(undefined4 *)(param_1 + 0x4b) = uVar31;
      *(undefined4 *)((int)param_1 + 0x25c) = uVar29;
    }
    else {
      uVar31 = FUN_ram_40000bd8(DAT_ram_4009ae84 / fVar27);
      uVar29 = DAT_ram_40094eec;
      *(undefined4 *)(param_1 + 0x4b) = uVar31;
      *(undefined4 *)((int)param_1 + 0x25c) = uVar29;
    }
  }
  else {
    if (fVar26 <= DAT_ram_40095280) {
      fVar28 = (float)FUN_ram_40000844(DAT_ram_40094ee0,
                                       ((fVar26 - fVar4) / DAT_ram_40096064) * DAT_ram_4009ae2c +
                                       fVar4);
      goto LAB_ram_4007bcda;
    }
    fVar28 = DAT_ram_40094658;
    if (cVar1 == '\0') goto LAB_ram_4007c6a0;
LAB_ram_4007bcde:
    fVar26 = DAT_ram_4009ae34;
    uVar29 = DAT_ram_4009ae30;
    uVar16 = *(uint *)((int)param_1 + 0x264);
    uVar34 = (ulonglong)uVar16;
    fVar28 = fVar27 * DAT_ram_4009605c;
    param_1[0xe] = uVar34;
    *(ulonglong *)((int)param_1 + 0x74) = uVar34;
    param_1[0xf] = uVar34;
    *(ulonglong *)((int)param_1 + 0x7c) = uVar34;
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
    *(undefined4 *)((int)param_1 + 0x254) = uVar29;
    if (fVar28 < fVar26) {
      uVar29 = FUN_ram_40000bd8((fVar28 * DAT_ram_40099fac) / fVar27);
      *(undefined4 *)(param_1 + 0x4b) = uVar29;
    }
    else {
      uVar29 = FUN_ram_40000bd8(DAT_ram_4009ae84 / fVar27);
      *(undefined4 *)(param_1 + 0x4b) = uVar29;
    }
    *(undefined4 *)((int)param_1 + 0x254) = 0;
    *(undefined4 *)((int)param_1 + 0x25c) = 0;
  }
  uVar29 = FUN_ram_40000bd8(DAT_ram_4009ae38 / fVar27);
  *(undefined4 *)(param_1 + 0x28) = uVar29;
  fVar28 = DAT_ram_40094600;
  fVar32 = (float)param_1[1];
  fVar26 = DAT_ram_40094600;
  if ((fVar32 < 0.0) || (fVar26 = DAT_ram_40099fb8, DAT_ram_40094604 < fVar32)) {
LAB_ram_4007c832:
    fVar32 = (float)FUN_ram_40000d44(DAT_ram_40094e90,fVar26);
  }
  else {
    fVar26 = fVar32 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600;
    fVar32 = DAT_ram_40094604;
    if (DAT_ram_40099fbc < ABS(fVar26)) {
      if (fVar26 < 0.0) {
        fVar26 = (((-fVar26 - DAT_ram_40099fbc) / DAT_ram_4009ab44) * DAT_ram_40094eb4) /
                 DAT_ram_40094ea8;
      }
      else {
        fVar26 = (((fVar26 - DAT_ram_40099fbc) / DAT_ram_4009ab44) * DAT_ram_4009463c) /
                 DAT_ram_40094ea8;
      }
      goto LAB_ram_4007c832;
    }
  }
  *(float *)((int)param_1 + 0x144) = fVar32;
  fVar32 = DAT_ram_40099fa4;
  fVar26 = DAT_ram_40099f88;
  cVar1 = *(char *)((int)param_1 + 0x14c);
  fVar30 = (float)*(undefined8 *)((int)param_1 + 0x14);
  if (fVar30 < 0.0) {
    fVar33 = 0.0;
  }
  else {
    fVar33 = DAT_ram_4009a400;
    if (fVar30 <= (float)DAT_ram_40099f5c) {
      fVar33 = fVar30 * DAT_ram_40099fa4;
    }
  }
  fVar30 = *(float *)(param_1 + 3);
  fVar33 = fVar27 * fVar33;
  if (fVar30 < 0.0) {
    *(float *)(param_1 + 0x29) = fVar33;
  }
  else {
    if (DAT_ram_40099f88 < fVar30) {
      *(float *)(param_1 + 0x29) = fVar33;
    }
    else {
      *(float *)(param_1 + 0x29) = fVar33;
      fVar26 = fVar30;
      if (fVar30 <= 0.0) goto LAB_ram_4007c754;
    }
    uVar13 = DAT_ram_4009ae50;
    uVar12 = DAT_ram_4009ae4c;
    uVar11 = DAT_ram_4009ae48;
    uVar10 = DAT_ram_4009ae44;
    uVar9 = DAT_ram_4009ae40;
    uVar8 = DAT_ram_4009ae3c;
    uVar7 = DAT_ram_4009ab18;
    uVar6 = DAT_ram_4009ab14;
    uVar5 = DAT_ram_4009a7f4;
    uVar31 = DAT_ram_4009a7ec;
    uVar29 = DAT_ram_4009a644;
    fVar3 = DAT_ram_40094604;
    fVar30 = DAT_ram_40094600;
    if (0.0 < fVar33) {
      fVar26 = (fVar26 * DAT_ram_40099f94) / fVar27;
      if (cVar1 == '\0') {
        *(float *)(param_1 + 0x32) = DAT_ram_40094604;
        *(undefined4 *)((int)param_1 + 0x194) = uVar9;
        *(undefined4 *)(param_1 + 0x2b) = uVar31;
        *(undefined4 *)(param_1 + 0x33) = uVar31;
        *(undefined4 *)((int)param_1 + 0x15c) = uVar9;
        *(undefined4 *)((int)param_1 + 0x19c) = uVar29;
        *(float *)(param_1 + 0x2c) = fVar3;
        *(undefined4 *)(param_1 + 0x34) = uVar5;
        *(undefined4 *)((int)param_1 + 0x164) = uVar9;
        *(undefined4 *)((int)param_1 + 0x1a4) = uVar10;
        *(undefined4 *)(param_1 + 0x2d) = uVar31;
        *(undefined4 *)(param_1 + 0x35) = uVar6;
        *(undefined4 *)((int)param_1 + 0x16c) = uVar11;
        *(undefined4 *)((int)param_1 + 0x1ac) = uVar12;
        *(undefined4 *)(param_1 + 0x2e) = uVar7;
        *(undefined4 *)(param_1 + 0x2a) = 0;
        *(undefined4 *)((int)param_1 + 0x154) = uVar8;
        *(float *)(param_1 + 0x36) = fVar30;
        *(undefined4 *)((int)param_1 + 0x174) = uVar13;
        uVar12 = DAT_ram_4009ae64;
        uVar11 = DAT_ram_4009ae60;
        uVar10 = DAT_ram_4009ae5c;
        uVar9 = DAT_ram_4009ae58;
        uVar8 = DAT_ram_4009ae54;
        uVar7 = DAT_ram_4009ab2c;
        uVar6 = DAT_ram_4009ab28;
        uVar5 = DAT_ram_4009ab24;
        uVar31 = DAT_ram_4009ab20;
        uVar29 = DAT_ram_4009ab1c;
        *(undefined4 *)((int)param_1 + 0x1b4) = DAT_ram_4009a640;
        *(undefined4 *)(param_1 + 0x2f) = uVar29;
        *(undefined4 *)(param_1 + 0x37) = uVar31;
        *(undefined4 *)((int)param_1 + 0x17c) = uVar8;
        *(undefined4 *)((int)param_1 + 0x1bc) = uVar9;
        *(float *)(param_1 + 0x30) = fVar30;
        *(undefined4 *)(param_1 + 0x38) = uVar5;
        *(undefined4 *)((int)param_1 + 0x184) = uVar10;
        *(undefined4 *)((int)param_1 + 0x1c4) = uVar11;
        *(undefined4 *)(param_1 + 0x31) = uVar6;
        *(undefined4 *)(param_1 + 0x39) = uVar7;
        *(undefined4 *)((int)param_1 + 0x18c) = uVar13;
        *(undefined4 *)((int)param_1 + 0x1cc) = uVar12;
      }
      uVar29 = FUN_ram_400009d2(fVar26);
      *(undefined4 *)(param_1 + 0x3a) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26);
      fVar30 = DAT_ram_4009ae68;
      *(undefined4 *)(param_1 + 0x42) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)((int)param_1 + 0x1d4) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ab30;
      *(undefined4 *)((int)param_1 + 0x214) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)(param_1 + 0x3b) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ae6c;
      *(undefined4 *)(param_1 + 0x43) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)((int)param_1 + 0x1dc) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ab34;
      *(undefined4 *)((int)param_1 + 0x21c) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)(param_1 + 0x3c) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009a828;
      *(undefined4 *)(param_1 + 0x44) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)((int)param_1 + 0x1e4) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ab38;
      *(undefined4 *)((int)param_1 + 0x224) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)(param_1 + 0x3d) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ae70;
      *(undefined4 *)(param_1 + 0x45) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)((int)param_1 + 0x1ec) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009a3dc;
      *(undefined4 *)((int)param_1 + 0x22c) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)(param_1 + 0x3e) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ae74;
      *(undefined4 *)(param_1 + 0x46) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)((int)param_1 + 500) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009460c;
      *(undefined4 *)((int)param_1 + 0x234) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)(param_1 + 0x3f) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ae78;
      *(undefined4 *)(param_1 + 0x47) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)((int)param_1 + 0x1fc) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ab3c;
      *(undefined4 *)((int)param_1 + 0x23c) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)(param_1 + 0x40) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ae7c;
      *(undefined4 *)(param_1 + 0x48) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)((int)param_1 + 0x204) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ab40;
      *(undefined4 *)((int)param_1 + 0x244) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)(param_1 + 0x41) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      fVar30 = DAT_ram_4009ae80;
      *(undefined4 *)(param_1 + 0x49) = uVar29;
      uVar29 = FUN_ram_400009d2(fVar26 * fVar30);
      *(undefined4 *)((int)param_1 + 0x20c) = uVar29;
      uVar29 = FUN_ram_40000712(fVar26 * fVar30);
      cVar21 = '\x01';
      *(undefined1 *)((int)param_1 + 0x14c) = 1;
      *(undefined4 *)((int)param_1 + 0x24c) = uVar29;
      goto LAB_ram_4007c1f4;
    }
  }
LAB_ram_4007c754:
  if (cVar1 != '\0') {
    memset(param_1 + 0x2a,0,0x40);
    fVar26 = DAT_ram_40094604;
    *(float *)(param_1 + 0x32) = DAT_ram_40094604;
    *(float *)((int)param_1 + 0x194) = fVar26;
    *(float *)(param_1 + 0x33) = fVar26;
    *(float *)((int)param_1 + 0x19c) = fVar26;
    *(float *)(param_1 + 0x34) = fVar26;
    *(float *)((int)param_1 + 0x1a4) = fVar26;
    *(float *)(param_1 + 0x35) = fVar26;
    *(float *)((int)param_1 + 0x1ac) = fVar26;
    *(float *)(param_1 + 0x36) = fVar26;
    *(float *)((int)param_1 + 0x1b4) = fVar26;
    *(float *)(param_1 + 0x37) = fVar26;
    *(float *)((int)param_1 + 0x1bc) = fVar26;
    *(float *)(param_1 + 0x38) = fVar26;
    *(float *)((int)param_1 + 0x1c4) = fVar26;
    *(float *)(param_1 + 0x39) = fVar26;
    *(float *)((int)param_1 + 0x1cc) = fVar26;
    memset(param_1 + 0x3a,0,0x40);
    *(float *)(param_1 + 0x42) = fVar26;
    *(float *)((int)param_1 + 0x214) = fVar26;
    *(float *)(param_1 + 0x43) = fVar26;
    *(float *)((int)param_1 + 0x21c) = fVar26;
    *(float *)(param_1 + 0x44) = fVar26;
    *(float *)((int)param_1 + 0x224) = fVar26;
    *(float *)(param_1 + 0x45) = fVar26;
    *(float *)((int)param_1 + 0x22c) = fVar26;
    *(float *)(param_1 + 0x46) = fVar26;
    *(float *)((int)param_1 + 0x234) = fVar26;
    *(float *)(param_1 + 0x47) = fVar26;
    *(float *)((int)param_1 + 0x23c) = fVar26;
    *(float *)(param_1 + 0x48) = fVar26;
    *(float *)((int)param_1 + 0x244) = fVar26;
    *(float *)(param_1 + 0x49) = fVar26;
    *(float *)((int)param_1 + 0x24c) = fVar26;
  }
  *(undefined1 *)((int)param_1 + 0x14c) = 0;
  cVar21 = '\0';
LAB_ram_4007c1f4:
  if (cVar1 != cVar21) {
    *(undefined2 *)((int)param_1 + 0x14e) = 0;
  }
  fVar26 = fVar27 * DAT_ram_40094ec4;
  *(int *)(param_1 + 0x4c) = (int)*(undefined8 *)((int)param_1 + 0x24);
  uVar29 = FUN_ram_40000bd8(fVar28 / fVar26);
  *(undefined4 *)((int)param_1 + 0x26c) = uVar29;
  fVar28 = (float)param_1[4] * fVar32 * fVar27;
  if (0.0 <= fVar28) {
    fVar28 = fVar28 + fVar4;
  }
  else {
    fVar28 = fVar28 - fVar4;
  }
  uVar18 = 0;
  uVar16 = *(ushort *)((int)param_1 + 0x134) - 1;
  if (*(ushort *)((int)param_1 + 0x134) != 0) {
    uVar23 = (int)fVar28 & ~(int)fVar28 >> 0x1f;
    if ((int)uVar16 < (int)uVar23) {
      uVar23 = uVar16;
    }
    uVar18 = (undefined2)uVar23;
  }
  *(undefined2 *)((int)param_1 + 0x132) = uVar18;
  fVar27 = (float)param_1[5] * fVar32 * fVar27;
  if (0.0 <= fVar27) {
    fVar27 = fVar27 + fVar4;
  }
  else {
    fVar27 = fVar27 - fVar4;
  }
  iVar19 = (int)fVar27;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar22 = (short)~(ushort)((uint)iVar19 >> 0x10) >> 0xf & (ushort)iVar19;
  if (0x2580 < iVar19) {
    uVar22 = 0x2580;
  }
  *(ushort *)(param_1 + 0x27) = uVar22;
  return;
}


