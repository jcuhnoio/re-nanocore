/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40016000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40016236.
 * REA evidence: ev_3c355f5dece01d3e6dc9dd2d46dd0722bd6be803ca61b1d338dd436918ea7ac7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40016264) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40016236(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)_DAT_ram_3006a2c0;
  uVar1 = 0;
  if ((199 < uVar2) && (uVar1 = 1000, uVar2 < 0x5dc)) {
    uVar1 = ((uVar2 - 200) * 1000) / 0x514 & 0xffff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4001626e.
 * REA evidence: ev_ec9aaa71f1fb1af997d43d5ccfdf5a31353503dca23c90c6f81c41e66123b7b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001626e(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_ram_3006a268 = 4;
  _DAT_ram_3006a26c = 5;
  _DAT_ram_3006a270 = 0;
  _DAT_ram_3006a274 = 1;
  _DAT_ram_3006a278 = 2;
  _DAT_ram_3006a27c = 3;
  iVar1 = 0;
  iVar2 = 6;
  while( true ) {
    if (*(uint *)(&DAT_ram_30069b58 + iVar1 * 4) < 8) {
      *(uint *)(&DAT_ram_3006a268 + iVar2 * 4) = *(uint *)(&DAT_ram_30069b58 + iVar1 * 4) + 6;
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 1;
    if (iVar1 == 8) break;
    if (iVar2 == 0xe) {
      return;
    }
  }
  for (; iVar2 != 0xe; iVar2 = iVar2 + 1) {
    *(int *)(&DAT_ram_3006a268 + iVar2 * 4) = iVar2;
  }
  return;
}


/* NanoCore 1.11, address 0x400162d0.
 * REA evidence: ev_3a7d849abb5843c403965cbe294c16ed21c36cb89d165bb7f1034f2beddff259
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400162d0(void)

{
  DAT_ram_3006a399 = 0;
  _DAT_ram_3006a39c = 0;
  return;
}


/* NanoCore 1.11, address 0x400162e2.
 * REA evidence: ev_f607d1384c4f4687978d49e2f99d82f6a94327c9c39347d9d05faa6b3d861ce4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400162e2(void)

{
  if (_DAT_ram_3006a2d0 != 0) {
    FUN_ram_4003efae(1);
    _DAT_ram_3006a2d0 = 0;
  }
  DAT_ram_3006a2ec = 0;
  FUN_ram_4000504c(&DAT_ram_3006a2d4,0,0x18);
  return;
}


/* NanoCore 1.11, address 0x40016330.
 * REA evidence: ev_694fcb605a955a7a2298b263d6b2478df85ab2305aea4ae72d4bd1b9a7bc5f77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016330(undefined4 param_1,int param_2,int param_3)

{
  FUN_ram_40044f1c(param_1,param_2 * 0x4a + 0x18,(1 - param_3) * -0x3a + 0xb6);
  FUN_ram_40044faa(param_1,0x32,0x32);
  return;
}


/* NanoCore 1.11, address 0x40016368.
 * REA evidence: ev_f56b5d230890c8fe3a8dc80795015d108ab8753f6dcaa2bf8f4b8929e86b3b64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016368(void)

{
  DAT_ram_30049da8 = 0xffffffff;
  if (_DAT_ram_3006a2f0 != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006a2f0 = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40016394.
 * REA evidence: ev_88aa5981019f49674b8e94db906868631c8c9972a0ca4947040a2c94b797ad8a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016394(void)

{
  if (_DAT_ram_3006a498 != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006a498 = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400163b6.
 * REA evidence: ev_4f0c14b7dab191aed0cde0002965fc543d15ce46fcbc561ca512218a560a4510
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400163b6(void)

{
  if (_DAT_ram_3006a2cc != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006a2cc = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400163d8.
 * REA evidence: ev_12c9d7be6b60acfed9a9fa1ce611c8dde50f2b3f7b6fc0d163ee8abefb37abba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400163d8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3006a304;
  if (_DAT_ram_3006a304 != 0) {
    thunk_FUN_ram_40024dd4(DAT_ram_30049db0);
    uVar2 = thunk_FUN_ram_40024dac();
    FUN_ram_40057158(iVar1,uVar2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001640e.
 * REA evidence: ev_b93f9da025cfa518719b497f7b900ca2b6d854d92543f4159e35ce487301baaf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001640e(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40048a76();
  if (iVar1 != 0) {
    iVar1 = FUN_ram_40048a9e();
    FUN_ram_40048cee(param_1,iVar1 + -1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40016438.
 * REA evidence: ev_02a58ce4f69988cc39999de202c6035f68f6b065dfe5037ac69737c58ab72030
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40016486) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016438(uint param_1)

{
  uint uVar1;
  
  if ((_DAT_ram_3006a2c4 != 0) && (_DAT_ram_3006a2bc != 0)) {
    if (param_1 != 0) {
      uVar1 = param_1 & 0xffff;
      if (1000 < param_1) {
        uVar1 = 1000;
      }
      FUN_ram_40044f36(_DAT_ram_3006a2bc,(uVar1 * 0x6c + 999) / 1000);
      FUN_ram_40043aac(_DAT_ram_3006a2c4,1);
      FUN_ram_4001640e(_DAT_ram_3006a2c4);
      return;
    }
    FUN_ram_40043fd6(_DAT_ram_3006a2c4,1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400164aa.
 * REA evidence: ev_31b50a478b2639df61e142b67af4f38bed8617e734242deb611b9cc31b4a9574
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400164aa(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_3c [4];
  uint uStack_38;
  undefined1 auStack_30 [24];
  
  iVar2 = -1;
  iVar1 = 0;
  do {
    FUN_ram_400055da(auStack_30,0x10,s_volume_meter__d_ram_40094f30,iVar1);
    iVar3 = FUN_ram_4002bf80(auStack_30,auStack_3c);
    if ((iVar3 == 0) && (0xc < uStack_38)) {
      iVar2 = iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 9);
  DAT_ram_30049da4 = iVar2;
  return;
}


/* NanoCore 1.11, address 0x40016506.
 * REA evidence: ev_b2bfdb5976222a07087714f7f7675f735464de1cdab7b3cd7f8639d061d59978
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40016574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016506(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = _DAT_ram_30069fa0;
  if (_DAT_ram_30069fa0 != 0) {
    iVar3 = thunk_FUN_ram_4002247a();
    if ((iVar3 == 0) ||
       ((iVar3 = FUN_ram_4002cd00(), iVar3 == 0 &&
        (uVar4 = FUN_ram_40004378(), (uVar4 / 500 & 1) != 0)))) {
      cVar2 = '3';
    }
    else {
      cVar2 = -1;
    }
    if ((_DAT_ram_3006a4a4 != iVar1) || (DAT_ram_30049db1 != cVar2)) {
      FUN_ram_400489a6(iVar1,cVar2,0);
      _DAT_ram_3006a4a4 = iVar1;
      DAT_ram_30049db1 = cVar2;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40016582.
 * REA evidence: ev_5e70675a71c516a5e2b30471be85f90178362e4063718b691a0d11cbee965b1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016582(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_4000deac();
  iVar1 = _DAT_ram_30069fc8;
  if (_DAT_ram_30069fc8 != 0) {
    thunk_FUN_ram_40024dd4();
    uVar2 = thunk_FUN_ram_40024dac();
    FUN_ram_40057158(iVar1,uVar2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400165b4.
 * REA evidence: ev_5992ba9933989ea2243ee52fc693a38c60375befe0eb5f0ba854b76390195128
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400165b4(void)

{
  int iVar1;
  undefined1 auStack_20 [24];
  
  iVar1 = FUN_ram_4002bcfc(auStack_20);
  if (iVar1 != 0) {
    FUN_ram_4002befc();
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x400165d2.
 * REA evidence: ev_6860736c5521bf73f7442539e7a88d955edbd0c0ed1e7a46b105794cd37ca427
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400165d2(undefined4 param_1)

{
  FUN_ram_4004502e(param_1,9,0,0);
  return;
}


/* NanoCore 1.11, address 0x400165dc.
 * REA evidence: ev_62ac86afff31d904dd80876a74101681dd5867916166233c759fb959c0a409b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400165dc(void)

{
  FUN_ram_400163b6();
  FUN_ram_4003f946();
  return;
}


/* NanoCore 1.11, address 0x400165ec.
 * REA evidence: ev_7f90513d8cebf96581ad850f671199a626b730ef0265426851c1e33ef896043c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400165ec(int param_1,uint param_2)

{
  if ((param_1 != 0) && (param_2 < 8)) {
    FUN_ram_40016330(param_1,param_2 & 3,(int)param_2 >> 2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40016600.
 * REA evidence: ev_aa4704726a8d8e33b886a9c28f732317cafa4eb5f360acc902e9d63fe15c0d42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016600(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40044f1c(param_1,0x78,0xd);
    FUN_ram_40044faa(param_1,0x28,0x28);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001662a.
 * REA evidence: ev_5001cd9d488423daa93750822d35c8ea13e44928f60f8f2418f0444eb1527505
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001662a(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40044f1c(param_1,0xad,0xd);
    FUN_ram_40044faa(param_1,0x28,0x28);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40016654.
 * REA evidence: ev_aff1076ded0cfacc3a3749332cd1f712abac82d75e4fb94a8d947a4a9ad50b74
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016654(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40044f1c(param_1,0x115,0xb);
    FUN_ram_40044faa(param_1,0x18,0x2d);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001667c.
 * REA evidence: ev_a5341ac9a3d5e3eb0e942b8e20dc873a4eff181757cd9ec6aba7e6bc685680ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400166b2) */
/* WARNING: Removing unreachable block (ram,0x400166bc) */

void FUN_ram_4001667c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_40044f36(param_1,0x200007d1);
  FUN_ram_40044f70(param_1,0x200007d1);
  FUN_ram_40045f80(param_1);
  iVar1 = FUN_ram_40045064(param_1);
  iVar2 = FUN_ram_40045070(param_1);
  FUN_ram_40044f1c(param_1,0xfb - iVar1 / 2,0x59 - iVar2 / 2);
  return;
}


/* NanoCore 1.11, address 0x400166d8.
 * REA evidence: ev_f859ef44e0686b80af342e1a7d6f000cb66a5a07b5a72067e7c0590f45b839f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400166d8(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_ram_3006a399 = 1;
  DAT_ram_3006a39a = 1;
  uVar1 = FUN_ram_40004352(0x21);
  iVar2 = FUN_ram_400042ea();
  if (_DAT_ram_3006a39c != 0) {
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if ((uint)(iVar2 - _DAT_ram_3006a39c) < uVar1) {
      return 0;
    }
  }
  _DAT_ram_3006a39c = iVar2;
  return 1;
}


/* NanoCore 1.11, address 0x40016728.
 * REA evidence: ev_72be8411b525311c93865ef5236c9f177273a25803165ebab4dfe7332f90c9ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40016728(char *param_1)

{
  int iVar1;
  undefined1 auStack_1c [4];
  uint uStack_18;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_ram_4002bf80(param_1,auStack_1c);
    return iVar1 == 0 && 0xc < uStack_18;
  }
  return false;
}


/* NanoCore 1.11, address 0x40016752.
 * REA evidence: ev_00d46b63bb3360f92d54b0bf078612fc3e350f6550a75570580d3eae1ef13719
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016752(void)

{
  uint uVar1;
  char *pcVar2;
  
  if ((_DAT_ram_30069b30 != 0) && (_DAT_ram_30069b28 != 0)) {
    uVar1 = FUN_ram_4002ccc0();
    if ((uint)DAT_ram_30069b2c != (uVar1 & 0xff)) {
      DAT_ram_30069b2c = (byte)uVar1;
      if (uVar1 == 2) {
        pcVar2 = &DAT_ram_40094f40;
      }
      else {
        pcVar2 = s_BT_FW_ERR_ram_40094f48;
        if (uVar1 != 3) {
          FUN_ram_40043fd6(_DAT_ram_30069b30,1);
          return;
        }
      }
      FUN_ram_400581ee(_DAT_ram_30069b28,pcVar2);
      FUN_ram_40043aac(_DAT_ram_30069b30,1);
      FUN_ram_4001640e(_DAT_ram_30069b30);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400167e0.
 * REA evidence: ev_203e156a52590e95f4dd70e66dab8dff40543f543cfa0659b1e2fe8249dbc774
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400167e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar1 * 4);
    if (iVar2 != 0) {
      if (param_2 == 0) {
        FUN_ram_40043fd6(iVar2,1);
      }
      else {
        FUN_ram_40043aac();
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return;
}


/* NanoCore 1.11, address 0x4001681e.
 * REA evidence: ev_d528cce39f21cd836710068a423d5b48aef25cfa789352b6d3485f43b56d3d23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001681e(char *param_1)

{
  int iVar1;
  
  _DAT_ram_3006a34c = 0x20202020;
  _DAT_ram_3006a350 = 0x20202020;
  if (param_1 != (char *)0x0) {
    for (; *param_1 == ' '; param_1 = param_1 + 1) {
    }
    if (*param_1 != '\0') goto LAB_ram_4001684e;
  }
  param_1 = s_preset_ram_40094f54;
LAB_ram_4001684e:
  iVar1 = 0;
  do {
    if (param_1[iVar1] == '\0') {
      DAT_ram_3006a354 = 0;
      return;
    }
    (&DAT_ram_3006a34c)[iVar1] = param_1[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  DAT_ram_3006a354 = 0;
  return;
}


/* NanoCore 1.11, address 0x4001686c.
 * REA evidence: ev_5e5d8a1c31ad4af3c4a4c3a6c88a68076d66a054fe4e7d207d2bc11b24cc888a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_4001686c(void)

{
  int iVar1;
  undefined1 *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  char cVar12;
  ushort uVar13;
  int iVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [16];
  undefined1 uStack_6c;
  char cStack_6b;
  ushort uStack_6a;
  ushort uStack_68;
  ushort uStack_66;
  ushort uStack_64;
  undefined2 uStack_62;
  undefined1 *puStack_60;
  
  if (DAT_ram_3006a2ec != '\0') {
    return DAT_ram_3006a2ec;
  }
  if (DAT_ram_3006a3a4 == '\0') {
    return '\0';
  }
  iVar5 = FUN_ram_4004f5fc(auStack_7c,&DAT_ram_3006a3a4,0);
  if (iVar5 != 1) {
    return '\0';
  }
  if (puStack_60 == (undefined1 *)0x0) {
    uVar11 = (uint)uStack_66;
    uVar4 = (uint)uStack_64;
    iVar14 = uVar4 * uVar11;
    iVar5 = iVar14;
    if (cStack_6b == '\x14') {
      iVar5 = iVar14 + (uStack_64 >> 1) * uVar11;
    }
    iVar6 = FUN_ram_4003ef74(1,iVar5);
    if (iVar6 != 0) {
      FUN_ram_4000504c(iVar6,0,iVar5);
      iStack_94 = uStack_68 - 1;
      iStack_90 = uVar11 - 1;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_8c = 0xe0000001;
      iStack_88 = -0x1fffffff;
      uStack_84 = 0xe0000001;
      uStack_80 = 0xe0000001;
      while (iVar7 = FUN_ram_4004f6b6(auStack_7c,&uStack_9c,&uStack_8c), puVar2 = puStack_60,
            iVar1 = iStack_88, iVar7 == 1) {
        if (puStack_60 == (undefined1 *)0x0) goto LAB_ram_400169ea;
        iVar7 = iVar6 + uVar4 * iStack_88;
        iVar8 = *(int *)(puStack_60 + 0x10);
        uVar11 = uVar4;
        if (cStack_6b == '\x14') {
          memcpy(iVar7,iVar8,uVar4);
          iVar8 = *(int *)(puVar2 + 0x10) + uVar4;
          iVar7 = iVar14 + iVar1 * (uint)(uStack_64 >> 1) + iVar6;
          uVar11 = (uint)(uStack_64 >> 1);
        }
        memcpy(iVar7,iVar8,uVar11);
      }
      uVar9 = uStack_6a & 0xfff7;
      uVar16 = uStack_6c;
      uVar15 = uStack_62;
      cVar12 = cStack_6b;
      uVar13 = uStack_68;
      uVar10 = uStack_66;
      uVar3 = uStack_64;
      if (iVar7 == 0) goto LAB_ram_40016918;
LAB_ram_400169ea:
      FUN_ram_4003efae(1,iVar6);
    }
  }
  else {
    iVar6 = FUN_ram_4003ef74(1,*(undefined4 *)(puStack_60 + 0xc));
    if (iVar6 != 0) {
      memcpy(iVar6,*(undefined4 *)(puStack_60 + 0x10),*(undefined4 *)(puStack_60 + 0xc));
      uVar9 = *(ushort *)(puStack_60 + 2);
      iVar5 = *(int *)(puStack_60 + 0xc);
      uVar16 = *puStack_60;
      uVar15 = *(undefined2 *)(puStack_60 + 10);
      cVar12 = puStack_60[1];
      uVar13 = *(ushort *)(puStack_60 + 4);
      uVar10 = *(ushort *)(puStack_60 + 6);
      uVar3 = *(ushort *)(puStack_60 + 8);
LAB_ram_40016918:
      FUN_ram_4004f6ca(auStack_7c);
      if (_DAT_ram_3006a2d0 != 0) {
        FUN_ram_4003efae(1);
      }
      _DAT_ram_3006a2d0 = iVar6;
      DAT_ram_3006a2d4 = uVar16;
      DAT_ram_3006a2d5 = cVar12;
      _DAT_ram_3006a2d6 = uVar9 & 0xffe7;
      _DAT_ram_3006a2d8 = uVar13;
      _DAT_ram_3006a2da = uVar10;
      _DAT_ram_3006a2dc = uVar3;
      _DAT_ram_3006a2de = uVar15;
      _DAT_ram_3006a2e0 = iVar5;
      _DAT_ram_3006a2e4 = iVar6;
      _DAT_ram_3006a2e8 = 0;
      DAT_ram_3006a2ec = 1;
      return '\x01';
    }
  }
  FUN_ram_4004f6ca(auStack_7c);
  return '\0';
}


/* NanoCore 1.11, address 0x40016a2a.
 * REA evidence: ev_0a3338b13915e8b82f5dc62417a2fd302911be48bd235f13f8f767ecf85ff5a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40016a2a(void)

{
  int iVar1;
  
  if ((_DAT_ram_3006a3a0 == 0) || (iVar1 = FUN_ram_4001686c(), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    FUN_ram_400573e6(_DAT_ram_3006a3a0,&DAT_ram_3006a2d4);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40016a64.
 * REA evidence: ev_a5d4b609c8ad483fa02bb71aed130dfae3b69aab34567cd08b64629d666916d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016a64(void)

{
  int iVar1;
  
  if ((_DAT_ram_3006a3a0 != 0) && (iVar1 = FUN_ram_40016a2a(), iVar1 != 0)) {
    FUN_ram_40043aac(_DAT_ram_3006a3a0,1);
    FUN_ram_4001640e(_DAT_ram_3006a3a0);
    if (_DAT_ram_3006a3ec != 0) {
      FUN_ram_40043fd6(_DAT_ram_3006a3ec,1);
    }
    if (_DAT_ram_3006a3e4 != 0) {
      FUN_ram_4004c61a();
      _DAT_ram_3006a3e4 = 0;
    }
    _DAT_ram_3006a3e4 = FUN_ram_4004c5b4(&LAB_ram_40018296,0x5dc,0);
    if (_DAT_ram_3006a3e4 != 0) {
      FUN_ram_4004c83c(_DAT_ram_3006a3e4,1);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40016adc.
 * REA evidence: ev_98f9e2a12eaafc111e3b835ff3c5c4467d052590c98bd97918c2d3705708a390
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016adc(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar2 = _DAT_ram_3006a490;
  if ((_DAT_ram_3006a490 == (undefined **)0x0) &&
     (ppuVar2 = _DAT_ram_3006a300, _DAT_ram_3006a300 == (undefined **)0x0)) {
    ppuVar2 = &PTR_LAB_ram_40012e96_ram_40094b68;
  }
  if (_DAT_ram_3006a494 != 0) {
    puVar3 = ppuVar2[3];
    if ((int)puVar3 < 1) {
      puVar3 = (undefined *)0x2e;
    }
    FUN_ram_40044faa(_DAT_ram_3006a494,0x96,puVar3);
    FUN_ram_400489e6(_DAT_ram_3006a494,ppuVar2,0);
    iVar1 = _DAT_ram_3006a494;
    FUN_ram_40048862(_DAT_ram_3006a494,0x100,0);
    FUN_ram_40048872(iVar1,0x100,0);
    FUN_ram_40048842(_DAT_ram_3006a494,0,0);
    FUN_ram_40048852(_DAT_ram_3006a494,0,0);
    FUN_ram_400165d2(_DAT_ram_3006a494);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40016b6e.
 * REA evidence: ev_c556093b56e6a961748a4001cbe82fae14c696e1d66dacb3fdfba507273090c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016b6e(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 auStack_14 [4];
  
  iVar1 = _DAT_ram_3006a49c;
  if ((_DAT_ram_3006a49c != 0) && (_DAT_ram_3006a494 != 0)) {
    iVar2 = FUN_ram_40016236();
    if (iVar2 != 0) {
      FUN_ram_40043fd6(iVar1,1);
      return;
    }
    FUN_ram_40028096(0x3006a00c,&cStack_18);
    if (cStack_18 == '\0') {
      FUN_ram_40043fd6(_DAT_ram_3006a49c,1);
      FUN_ram_40016394();
    }
    else {
      FUN_ram_4002814e(uStack_17,auStack_14,4);
      FUN_ram_400581ee(_DAT_ram_3006a494,auStack_14);
      FUN_ram_40016adc();
      iVar1 = _DAT_ram_3006a49c;
      uVar3 = FUN_ram_40028176(uStack_16,0xd6);
      FUN_ram_400488f8(iVar1,uVar3,0);
      iVar1 = _DAT_ram_3006a49c;
      uVar3 = FUN_ram_40028176(uStack_16,0x2a);
      FUN_ram_40048926(iVar1,uVar3,0);
      iVar1 = _DAT_ram_3006a49c;
      uVar3 = FUN_ram_40028176(uStack_16,0x4e);
      FUN_ram_40048996(iVar1,uVar3,0);
      FUN_ram_400489d6(_DAT_ram_3006a494,uStack_16,0);
      FUN_ram_40043aac(_DAT_ram_3006a49c,1);
      FUN_ram_4001640e(_DAT_ram_3006a49c);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40016c5e.
 * REA evidence: ev_2a6a9ecbef602cdfd40f444a52f5f04abbc5eb0fb7baa515b5f168eb744757e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016c5e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400055da(param_1,param_2,s_U__icons__s_bin_ram_40094f5c,param_3);
  return;
}


/* NanoCore 1.11, address 0x40016c6c.
 * REA evidence: ev_4ea5a86e1ca6cdebf47898f8e16be16d9df37aada71588c240e9c361b79616bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40016c6c(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40021636();
  return uVar1 & 0xffffff;
}


/* NanoCore 1.11, address 0x40016c92.
 * REA evidence: ev_47faa717fae9879e05e2cc3466f6c1d2eecdb194c24b3105e3ce4c43c6728205
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40016c92(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40021640();
  return uVar1 & 0xffffff;
}


/* NanoCore 1.11, address 0x40016cb8.
 * REA evidence: ev_161b460fb4929a0307b8510bdc990a2cbfe8c35ebfe8cbfb56a5f04d86b2a19d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40016cb8(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_ram_4002c640();
  }
  else {
    uVar1 = FUN_ram_4002c64a();
  }
  return uVar1 & 0xffffff;
}


/* NanoCore 1.11, address 0x40016ce6.
 * REA evidence: ev_30cf24113de294b48ef177c5fce0de467633d1bdc869c188b802551c973d4424
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016ce6(void)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  if ((DAT_ram_3006a2fc == '\0') && (DAT_ram_3006a37e == '\0')) {
    if (DAT_ram_30049da3 != '\0') {
      if (_DAT_ram_3006a3e8 == 3) {
        uVar1 = 0;
        goto LAB_ram_40016d00;
      }
    }
    uVar1 = FUN_ram_40016c6c();
  }
  else {
    uVar1 = 1;
LAB_ram_40016d00:
    uVar1 = FUN_ram_40016cb8(uVar1);
  }
  uStack_14 = CONCAT22(CONCAT11(uStack_14._3_1_,(char)((uint)uVar1 >> 0x10)),(short)uVar1);
  if (_DAT_ram_3006a348 != 0) {
    FUN_ram_400489b6(_DAT_ram_3006a348,uStack_14,0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40016d56.
 * REA evidence: ev_8e3d3e6eb74ea12add345fde5101f752aa612a11fa5b5fe7d7630cf5155a9a36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40016d56(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = 0;
  do {
    iVar2 = FUN_ram_400051f8((&PTR_DAT_ram_40095014_ram_40095070)[iVar1],param_1,0x10);
    if (iVar2 == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return -1;
}


/* NanoCore 1.11, address 0x40016d9e.
 * REA evidence: ev_45ab21f140a09de9f507d2b4b9b21673c8b9af29f85eda2e5f826bcea3446647
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40016d9e(int param_1)

{
  undefined4 uVar1;
  
  if ((&DAT_ram_400950e8)[param_1] == '\x01') {
    uVar1 = FUN_ram_40016d56((&PTR_s_settings_ram_40095038_ram_400950a0)[param_1]);
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40016dc4.
 * REA evidence: ev_2df303d2e61708f4f8786344311baa21d2ca386f2153c913bf3410e0a0a7d87c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016dc4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 3) {
    FUN_ram_4001667c();
    return;
  }
  if (param_2 == 4) {
    FUN_ram_4001662a();
    return;
  }
  if (param_2 == 5) {
    uVar5 = 0xe;
    iVar2 = 0xe2;
  }
  else {
    if ((&DAT_ram_400950e8)[param_2] == '\x01') {
      uVar1 = FUN_ram_40016d9e(param_2);
      uVar4 = 0xffffffff;
      if (uVar1 < 8) {
        uVar3 = 0;
        do {
          uVar4 = uVar3;
          if (uVar1 == *(uint *)(&DAT_ram_30069b58 + uVar3 * 4)) break;
          uVar3 = uVar3 + 1;
          uVar4 = uVar1;
        } while (uVar3 != 8);
      }
      FUN_ram_400165ec(param_1,uVar4);
      return;
    }
    if ((byte)(&DAT_ram_400950d8)[param_2] != 0) {
      FUN_ram_40016330(param_1,(uint)(byte)(&DAT_ram_40095090)[param_2],
                       (byte)(&DAT_ram_400950d8)[param_2] - 1);
      return;
    }
    uVar5 = 0x46;
    iVar2 = (uint)(byte)(&DAT_ram_40095090)[param_2] * 0x35 + 0x20;
  }
  FUN_ram_40044f1c(param_1,iVar2,uVar5);
  FUN_ram_40044faa(param_1,0x26,0x26);
  return;
}


/* NanoCore 1.11, address 0x40016e8a.
 * REA evidence: ev_a2b75f732ae3e406def19a352621e09f8e118cb7bdb2f1a4afa6979b7a85a0a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016e8a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [24];
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    FUN_ram_40043fd6(param_1,1);
    return;
  }
  if (((DAT_ram_3006a3a4 != '\0') && (iVar1 = FUN_ram_4000521c(param_2), iVar1 == 0)) &&
     (iVar1 = FUN_ram_4001686c(), iVar1 != 0)) {
    FUN_ram_400573e6(param_1,&DAT_ram_3006a2d4);
    FUN_ram_40043aac(param_1,1);
    return;
  }
  iVar1 = FUN_ram_4004f5ea(param_2,auStack_2c);
  if (iVar1 == 1) {
    FUN_ram_400573e6(param_1,param_2);
    FUN_ram_40043aac(param_1,1);
  }
  else {
    iVar1 = FUN_ram_40056fc0(param_1);
    if (((iVar1 == 0) || (iVar2 = FUN_ram_4004e290(), iVar2 != 1)) ||
       (iVar1 = FUN_ram_4000521c(iVar1,param_2), iVar1 != 0)) {
      FUN_ram_40043fd6(param_1,1);
    }
    else {
      FUN_ram_40043aac(param_1,1);
      FUN_ram_400454e4(param_1);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40016f46.
 * REA evidence: ev_7ef02d04a4ee9f289910c56a16b44d031decac28a0b067307c3c23754f9d3dfa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016f46(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0xe)) {
    FUN_ram_40016e8a(param_1,param_2 * 0x40 + 0x30069bc0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40016f60.
 * REA evidence: ev_d3ce469490c94d648ccab920394106ad1416fc80a94087b6941ac26c9ced832a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016f60(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = 0;
  do {
    if (1 < iVar1 - 3U) {
      uVar2 = FUN_ram_40056f7e(param_1);
      FUN_ram_40016dc4(uVar2,iVar1);
      FUN_ram_40016f46(uVar2,iVar1);
      FUN_ram_40057550(uVar2,9);
      *(undefined4 *)(&DAT_ram_30069f8c + iVar1 * 4) = uVar2;
      uVar3 = FUN_ram_40016d9e(iVar1);
      if (uVar3 < 8) {
        *(undefined4 *)(uVar3 * 4 + 0x30069b38) = uVar2;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  FUN_ram_40016506();
  FUN_ram_400454e4(param_1);
  return;
}


/* NanoCore 1.11, address 0x40016fea.
 * REA evidence: ev_ac4e9559087851a9a4b3dee7341038ad0275e5e6db979ee874764f1625cb5432
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016fea(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (-1 < (int)DAT_ram_30049da4)) {
    uVar1 = DAT_ram_30049da4 & 0xff;
    if (8 < (DAT_ram_30049da4 & 0xff)) {
      uVar1 = 8;
    }
    if (param_2 < uVar1) {
      uVar1 = param_2 & 0xff;
    }
    FUN_ram_40016e8a(param_1,&DAT_ram_3006a028 + uVar1 * 0x40);
    return;
  }
  return;
}


