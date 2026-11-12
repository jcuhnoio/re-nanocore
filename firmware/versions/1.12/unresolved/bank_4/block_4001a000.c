/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4001a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4001a0ee.
 * REA evidence: ev_f603f2098de44e01db2fafd097fa53de74527966436b5ac61f15c1da66063b1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001a0ee(void)

{
  return DAT_ram_30069adc;
}


/* NanoCore 1.12, address 0x4001a0f8.
 * REA evidence: ev_c5428511ea9388c712d8e2ebfbc59847674bf97958d8411d2d7b1f6dd084fa86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a0f8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4001de20();
  if (iVar1 != 0) {
    FUN_ram_4001de26(param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001a122.
 * REA evidence: ev_ef979cb1929030cc65b1d3f058b26d13a6dc0d7d708d66b43b00f633488e4419
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint thunk_FUN_ram_4001debc(void)

{
  uint uVar1;
  
  uVar1 = DAT_ram_3004acf8;
  if (0x1d < DAT_ram_3004acf8) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001a126.
 * REA evidence: ev_37fdac989d7c29c9ee5840cd5ac3b9c623dd38b5f6d617cf2c727c558bde34e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint thunk_FUN_ram_4001dece(void)

{
  uint uVar1;
  
  uVar1 = DAT_ram_3004ad1c;
  if (0x1d < DAT_ram_3004ad1c) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001a12a.
 * REA evidence: ev_fb994cbd51e37434fd2d346b97897365fb8c6a4e8a39042f4771ec8f48bea409
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_4001dee0(void)

{
  int iVar1;
  
  iVar1 = DAT_ram_3004ad0c;
  if (7 < DAT_ram_3004ad0c - 0x1eU) {
    iVar1 = -1;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4001a12e.
 * REA evidence: ev_2b06932ffd89b0088bb07a1da1192b6d2ea734b1639aeafb8e04cac3f062ae30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint thunk_FUN_ram_4001def6(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4000bb70();
  if (0x1d < uVar1) {
    if (DAT_ram_3006a744 == '\0') {
      FUN_ram_4001bd36();
    }
    uVar1 = DAT_ram_3004acfc;
    if (0x1d < DAT_ram_3004acfc) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001a132.
 * REA evidence: ev_3b1456f25cc0ef0b2496cffcc02dcd25c7f2f6a22ef37388f59f6694aa7a82d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint thunk_FUN_ram_4001df28(void)

{
  uint uVar1;
  undefined1 auStack_24 [16];
  ushort uStack_14;
  
  FUN_ram_4008dbe0(auStack_24);
  uVar1 = (uint)uStack_14;
  if (0x1d < uStack_14) {
    if (DAT_ram_3006aec8 == '\0') {
      FUN_ram_4001b140();
    }
    uVar1 = DAT_ram_3004ad20;
    if (0x1d < DAT_ram_3004ad20) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001a13a.
 * REA evidence: ev_8b16fa75df48cb59fb98f780b3efa2f0c69178102fc0c0dac0a220574e213c9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4001df9e(uint param_1,uint param_2,int param_3)

{
  DAT_ram_3004acf8 = 0xffffffff;
  if (param_1 < 0x1e) {
    DAT_ram_3004acf8 = param_1;
  }
  DAT_ram_3004ad1c = 0xffffffff;
  if (param_2 < 0x1e) {
    DAT_ram_3004ad1c = param_2;
  }
  DAT_ram_3004ad0c = -1;
  if ((param_3 - 0x1eU & 0xff) < 8) {
    DAT_ram_3004ad0c = param_3;
  }
  DAT_ram_3004ad18 = 0xffffffff;
  return;
}


/* NanoCore 1.12, address 0x4001a13e.
 * REA evidence: ev_10361355d902a59dc9b60dc5c6c08b9dfeebb088ed9ab33d2ee99f270f5f38b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4001a13e(void)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (((_DAT_ram_3006a714 != 0) && (_DAT_ram_3006a718 < 8)) &&
     (uVar1 = *(uint *)(_DAT_ram_3006a714 + _DAT_ram_3006a718 * 4), 7 < uVar1)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001a164.
 * REA evidence: ev_535665f911ffa2668e57aa8326db482caf5b71833c699874dae83b82d09c9de2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a164(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = _DAT_ram_3006a71c;
  uVar2 = FUN_ram_4002d6f8(2);
  FUN_ram_40017bd8(uVar1,0x3006a720,uVar2);
  return;
}


/* NanoCore 1.12, address 0x4001a18e.
 * REA evidence: ev_0acafeb8e1efccce3c934890d350b0fff0a621af6307e75aa6df13b160edac67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a18e(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = _DAT_ram_3006a4a4;
  bVar1 = _DAT_ram_3006a4a4 != 0;
  uVar4 = 0;
  if (_DAT_ram_3006a4a4 != 0) {
    uVar4 = FUN_ram_4002d290();
  }
  FUN_ram_40017d68(_DAT_ram_3006a71c,0,bVar1);
  FUN_ram_40017d60(0x3006a720,uVar4 & 1);
  if ((iVar2 != 0) && (_DAT_ram_3006a71c != 0)) {
    FUN_ram_40048ade(_DAT_ram_3006a71c,iVar2,0);
    iVar5 = 0;
    do {
      iVar3 = *(int *)(iVar5 * 4 + 0x3006a720);
      if (iVar3 != 0) {
        FUN_ram_40048ade(iVar3,iVar2,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    FUN_ram_40045068(_DAT_ram_3006a71c,*(undefined4 *)(iVar2 + 0xc));
    FUN_ram_400460be(_DAT_ram_3006a71c,_DAT_ram_3006a4a8,0x14,8,0);
    FUN_ram_40017b64(_DAT_ram_3006a71c,0x3006a720);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001a24c.
 * REA evidence: ev_0cdfdf86197d47f2844d315643252c58ee9d91f78ab18cf162c3565f60185072
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a24c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uStack_38;
  uint auStack_34 [4];
  
  uStack_38 = FUN_ram_40014c88();
  iVar2 = FUN_ram_4002d3a8(4);
  iVar3 = FUN_ram_4002d3c6(4,auStack_34);
  if (iVar3 != 0) {
    uStack_38 = auStack_34[0];
  }
  uStack_38 = uStack_38 & 0xffffff;
  if (_DAT_ram_3006a498 != 0) {
    FUN_ram_400489d2(_DAT_ram_3006a498,uStack_38,0);
    FUN_ram_400489f0(_DAT_ram_3006a498,0xff,0);
  }
  if (_DAT_ram_3006a454 != 0) {
    if (iVar2 == 0) {
      FUN_ram_400440ce(_DAT_ram_3006a454,1);
    }
    else {
      FUN_ram_400172bc(_DAT_ram_3006a454,0x3006a458);
    }
  }
  iVar3 = 0x3006a4ec;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(iVar2 * 4 + 0x3006a6ec);
    if (iVar1 != 0) {
      if ((((_DAT_ram_3006a710 == 0) || (_DAT_ram_3006a70c <= iVar2)) ||
          (*(int *)(_DAT_ram_3006a710 + iVar2 * 4) == 0)) ||
         (iVar4 = FUN_ram_40056df2(), iVar4 == 0)) {
        FUN_ram_400172bc(iVar1,iVar3);
      }
      else {
        FUN_ram_40057218(iVar1,iVar4);
        FUN_ram_40043ba4(iVar1,1);
      }
      iVar4 = FUN_ram_4001e902((&PTR_DAT_ram_4009a0bc_ram_4009a1ec)[iVar2]);
      uVar5 = 0xff;
      if (iVar4 == 0) {
        uVar5 = 0x59;
      }
      FUN_ram_40048a9e(iVar1,uVar5,0);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x40;
  } while (iVar2 != 8);
  FUN_ram_400172bc(_DAT_ram_3006a4a8,0x3006a4ac);
  return;
}


/* NanoCore 1.12, address 0x4001a376.
 * REA evidence: ev_b81e0d412a89755c0c922d7cceda6ec8571dbd834cd07cb475525cdd746e51e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001a376(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (7 < param_1) {
    return 0;
  }
  uVar1 = *(uint *)(_DAT_ram_3006a714 + param_1 * 4);
  if (((uVar1 < 8) && (iVar2 = *(int *)(uVar1 * 4 + 0x3006a6ec), iVar2 != 0)) &&
     (iVar2 = FUN_ram_40043c8a(iVar2,1), iVar2 == 0)) {
    uVar3 = *(undefined4 *)(uVar1 * 4 + 0x3006a6ec);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4001a3c0.
 * REA evidence: ev_c7f64f8da65bbb97c5ddd3e36f6a76240d7c579f632cd8ef1ee824d6b9c10b9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a3c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined3 uVar4;
  
  if ((DAT_ram_3006a49c == '\0') || (7 < _DAT_ram_3006a4a0)) {
    iVar2 = FUN_ram_4001a376(_DAT_ram_3006a718);
    iVar1 = _DAT_ram_3006a718;
    if ((DAT_ram_3006a49c == '\0') &&
       ((iVar2 == 0 || (iVar3 = FUN_ram_40043c8a(iVar2,1), iVar1 = _DAT_ram_3006a718, iVar3 != 0))))
    {
      iVar3 = 0;
      do {
        iVar2 = FUN_ram_4001a376(iVar3);
        iVar1 = iVar3;
        if (iVar2 != 0) break;
        iVar3 = iVar3 + 1;
        iVar1 = _DAT_ram_3006a718;
      } while (iVar3 != 8);
    }
  }
  else {
    iVar2 = *(int *)(_DAT_ram_3006a4a0 * 4 + 0x3006a6ec);
    iVar1 = _DAT_ram_3006a718;
  }
  _DAT_ram_3006a718 = iVar1;
  if (_DAT_ram_3006a498 != 0) {
    FUN_ram_40046078();
  }
  FUN_ram_40018184(iVar2);
  uVar4 = FUN_ram_400170ea(DAT_ram_3006a49c);
  FUN_ram_40018310(uVar4);
  return;
}


/* NanoCore 1.12, address 0x4001a47a.
 * REA evidence: ev_35ddeac71095cf4100325edfe7c5e6f3517a596eaa96dc78d51e5d3afdd13a22
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a47a(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (_DAT_ram_3006a714 != 0) {
    uVar1 = 0;
    do {
      uVar3 = *(uint *)(_DAT_ram_3006a714 + uVar1 * 4);
      if ((uVar3 < 8) && (iVar2 = *(int *)(uVar3 * 4 + 0x3006a6ec), iVar2 != 0)) {
        FUN_ram_40045014(iVar2,(uVar1 & 3) * 0x4a + 0x18,((int)uVar1 >> 2) * 0x3a + 0x42);
        FUN_ram_400450a2(iVar2,0x32,0x32);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 8);
  }
  return;
}


/* NanoCore 1.12, address 0x4001a502.
 * REA evidence: ev_1fb152cb48584d22ae9fbd1aafb6597d7c8173a21b1b9bf6407c7dc7b15520e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a502(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  DAT_ram_3006a450 = 0;
  DAT_ram_3006a49c = 0;
  _DAT_ram_3006a718 = 0;
  _DAT_ram_3006a710 = 0;
  _DAT_ram_3006a70c = 0;
  _DAT_ram_3006a4a4 = 0;
  _DAT_ram_3006a4a0 = 0xffffffff;
  _DAT_ram_3006a454 = 0;
  _DAT_ram_3006a714 = FUN_ram_40017fe0(0);
  FUN_ram_40017090(0x3006a458,0x40,s_bg_chain_ram_4009a1e0);
  iVar3 = 0x3006a4ec;
  iVar2 = 0;
  do {
    ppuVar1 = &PTR_DAT_ram_4009a0bc_ram_4009a1ec + iVar2;
    iVar2 = iVar2 + 1;
    FUN_ram_40017090(iVar3,0x40,*ppuVar1);
    iVar3 = iVar3 + 0x40;
  } while (iVar2 != 8);
  FUN_ram_40017090(0x3006a4ac,0x40,s_chain_ram_4009a0ec);
  _DAT_ram_3006a498 = FUN_ram_40043b84(param_1);
  FUN_ram_400450a2(_DAT_ram_3006a498,0x140,0xf0);
  FUN_ram_400489f0(_DAT_ram_3006a498,0xff,0);
  FUN_ram_40048a2e(_DAT_ram_3006a498,0,0);
  FUN_ram_400440ce(_DAT_ram_3006a498,1);
  _DAT_ram_3006a454 = FUN_ram_40056db0(_DAT_ram_3006a498);
  FUN_ram_40057382(_DAT_ram_3006a454,0xb);
  FUN_ram_40045014(_DAT_ram_3006a454,0,0);
  FUN_ram_400450a2(_DAT_ram_3006a454,0x140,0xf0);
  FUN_ram_400440ce(_DAT_ram_3006a454,1);
  FUN_ram_40043ba4(_DAT_ram_3006a454,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006a454,2);
  _DAT_ram_3006a4a8 = FUN_ram_40056db0(_DAT_ram_3006a498);
  FUN_ram_40057382(_DAT_ram_3006a4a8,0xb);
  FUN_ram_40045014(_DAT_ram_3006a4a8,8,8);
  FUN_ram_400450a2(_DAT_ram_3006a4a8,0x26,0x26);
  _DAT_ram_3006a71c = FUN_ram_400579de(_DAT_ram_3006a498);
  FUN_ram_4005809e(_DAT_ram_3006a71c,1);
  FUN_ram_400450a2(_DAT_ram_3006a71c,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006a71c,_DAT_ram_3006a4a8,0x14,8,0);
  FUN_ram_40017a50(_DAT_ram_3006a498,_DAT_ram_3006a71c,0x3006a720,1);
  iVar2 = 0;
  FUN_ram_4001a164();
  do {
    uVar4 = FUN_ram_40056db0(_DAT_ram_3006a498);
    *(undefined4 *)(iVar2 * 4 + 0x3006a6ec) = uVar4;
    iVar2 = iVar2 + 1;
    FUN_ram_40057382(uVar4,0xb);
  } while (iVar2 != 8);
  _DAT_ram_3006a4a4 = FUN_ram_4001e8e4();
  FUN_ram_4001a18e();
  FUN_ram_4001a24c();
  FUN_ram_4001a47a();
  return;
}


/* NanoCore 1.12, address 0x4001a706.
 * REA evidence: ev_b77ccef3bd424271b16c26dd93fb5396fb39e8268a186e9cb410ce67bbbb0e60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a706(undefined4 param_1,undefined4 param_2)

{
  _DAT_ram_3006a70c = param_2;
  _DAT_ram_3006a710 = param_1;
  FUN_ram_4001a24c();
  return;
}


/* NanoCore 1.12, address 0x4001a71a.
 * REA evidence: ev_ca013884387ca5651ff3f13062994403d85f3b4bee2ad5922d45b9814d7df02f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a71a(void)

{
  if (_DAT_ram_3006a498 != 0) {
    DAT_ram_3006a450 = 1;
    DAT_ram_3006a49c = 0;
    _DAT_ram_3006a4a0 = 0xffffffff;
    _DAT_ram_3006a718 = 0;
    FUN_ram_4001a24c();
    FUN_ram_4001a47a();
    if (_DAT_ram_3006a498 != 0) {
      FUN_ram_40043ba4(_DAT_ram_3006a498,1);
    }
    FUN_ram_4001a3c0();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001a774.
 * REA evidence: ev_34c6f81f6f5e2d1057c29c67f936c9f2c21e3129e0e44d92c135219ae51b6f6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a774(void)

{
  undefined3 uVar1;
  
  DAT_ram_3006a450 = 0;
  DAT_ram_3006a49c = 0;
  _DAT_ram_3006a4a0 = 0xffffffff;
  uVar1 = FUN_ram_400170ea(0);
  FUN_ram_40018310(uVar1);
  if (_DAT_ram_3006a498 != 0) {
    FUN_ram_400440ce(_DAT_ram_3006a498,1);
  }
  FUN_ram_40018184(0);
  return;
}


/* NanoCore 1.12, address 0x4001a7cc.
 * REA evidence: ev_d12151ca2e7cdf5ced52bbfc4a91734d5d72fd3e725e198271a6e82bf17d6f6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001a7cc(void)

{
  return DAT_ram_3006a450;
}


/* NanoCore 1.12, address 0x4001a7d6.
 * REA evidence: ev_74efba631c8822ac04e335be9f5912dba85af97812cc6845af5caae96cd1552c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a7d6(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_28 [16];
  
  iVar8 = _DAT_ram_3006a718;
  cVar1 = DAT_ram_3006a49c;
  if (DAT_ram_3006a450 == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_ram_3006a49c == '\0') {
    _DAT_ram_3006a718 = param_1 + _DAT_ram_3006a718;
    if (_DAT_ram_3006a718 < 0) {
      _DAT_ram_3006a718 = 0;
    }
    else if (7 < _DAT_ram_3006a718) {
      _DAT_ram_3006a718 = 7;
    }
  }
  else {
    if (7 < _DAT_ram_3006a4a0) {
      _DAT_ram_3006a4a0 = FUN_ram_4001a13e();
    }
    iVar2 = _DAT_ram_3006a714;
    uVar6 = _DAT_ram_3006a4a0;
    iVar3 = 1;
    if (param_1 < 1) {
      iVar3 = -1;
    }
    cVar4 = '\0';
    do {
      if ((iVar2 == 0) || (7 < uVar6)) {
LAB_ram_4001a846:
        iVar7 = _DAT_ram_3006a718;
        if (cVar4 != '\0') {
          iVar7 = iVar8;
        }
        break;
      }
      iVar9 = 0;
      do {
        if (uVar6 == *(uint *)(iVar2 + iVar9 * 4)) goto LAB_ram_4001a8b4;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      iVar9 = -1;
LAB_ram_4001a8b4:
      iVar7 = iVar3 + iVar9;
      if (((iVar9 == -1) || (iVar7 < 0)) || (iVar7 == 8)) goto LAB_ram_4001a846;
      uVar5 = *(undefined4 *)(iVar2 + iVar9 * 4);
      param_1 = param_1 - iVar3;
      *(undefined4 *)(iVar2 + iVar9 * 4) = *(undefined4 *)(iVar2 + iVar7 * 4);
      *(undefined4 *)(iVar2 + iVar7 * 4) = uVar5;
      iVar8 = iVar7;
      cVar4 = cVar1;
    } while (param_1 != 0);
    _DAT_ram_3006a718 = iVar7;
    FUN_ram_4001a47a();
    FUN_ram_40018406();
    if (_DAT_ram_3006a714 != 0) {
      iVar8 = 0;
      do {
        uVar6 = *(uint *)(_DAT_ram_3006a714 + iVar8 * 4);
        if (7 < uVar6) goto LAB_ram_4001a886;
        auStack_28[iVar8] = (char)uVar6;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 8);
      iVar8 = FUN_ram_40023878(auStack_28,8);
      if (iVar8 == 0) {
        FUN_ram_4002305e(auStack_28,8);
      }
    }
  }
LAB_ram_4001a886:
  FUN_ram_4001a3c0();
  return;
}


/* NanoCore 1.12, address 0x4001a90e.
 * REA evidence: ev_8b38748f810d106301fbf7a35f109fc37245fc50645f1d559c3de64b4bac51fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001a90e(void)

{
  undefined4 uVar1;
  
  if (DAT_ram_3006a450 != '\0') {
    DAT_ram_3006a49c = DAT_ram_3006a49c ^ 1;
    uVar1 = 0xffffffff;
    if (DAT_ram_3006a49c != 0) {
      uVar1 = FUN_ram_4001a13e();
    }
    _DAT_ram_3006a4a0 = uVar1;
    FUN_ram_4001a3c0();
    return 0;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4001a950.
 * REA evidence: ev_3f54bb04459c2686fed8afc18c3e283a91891a87e5edc2e1cb70a039171d2614
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a950(void)

{
  if (_DAT_ram_3006a498 == 0) {
    return;
  }
  FUN_ram_4001a47a();
  if (DAT_ram_3006a450 != '\0') {
    FUN_ram_4001a3c0();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001a97c.
 * REA evidence: ev_0fa5790c6a48fc4444eb4e1f743b21b307bc8275fe50cc88390dd5701d4dc7d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a97c(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_ram_3006a498 == 0) {
    return;
  }
  iVar1 = 0x3006a4ec;
  do {
    iVar2 = iVar1 + 0x40;
    FUN_ram_4004d0b2(iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0x3006a6ec);
  FUN_ram_4004d0b2(0x3006a4ac);
  FUN_ram_4004d0b2(0x3006a458);
  _DAT_ram_3006a4a4 = FUN_ram_4001e8e4();
  FUN_ram_4001a18e();
  FUN_ram_4001a164();
  FUN_ram_4001a24c();
  FUN_ram_4001a47a();
  if (DAT_ram_3006a450 != '\0') {
    FUN_ram_4001a3c0();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001aa02.
 * REA evidence: ev_1f4bfbe24555940285fba4d572880ebd900d7f2cd43f64e9d2d8ff29b2accfe7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4001aa02(float param_1,float param_2,float param_3)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009672c < param_1) {
    param_1 = DAT_ram_4009672c;
  }
  return (param_3 - param_2) * param_1 + param_2;
}


/* NanoCore 1.12, address 0x4001aa2e.
 * REA evidence: ev_e256e8595d2e33aafc7a8524e13c3cb89e96925794fbf3754f2816c3d4665813
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001aa2e(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = param_1 - DAT_ram_4009675c;
  }
  else {
    param_1 = param_1 + DAT_ram_4009675c;
  }
  return (int)param_1;
}


/* NanoCore 1.12, address 0x4001aa50.
 * REA evidence: ev_c78b67f8a1e7c2422bc2b644c005393d2c5b53f32609a9c50dc1d5a7f6801183
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001aa50(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 == 2) {
    uVar1 = (uint)*(byte *)(param_1 + 4);
    if (uVar1 == 0) {
      return 1;
    }
  }
  else {
    uVar1 = 1;
    if (*param_1 == 1) {
      iVar2 = FUN_ram_4001aa2e((float)*(undefined8 *)(param_1 + 2) -
                               (float)*(undefined8 *)(param_1 + 1),1);
      uVar1 = iVar2 + 1;
      if ((int)uVar1 < 1) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001aa8e.
 * REA evidence: ev_90b29c886fadb67c5aba41ade2b196bbba35c6ebec5cd65a5216ecdcf09417ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001aa8e(int *param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_20;
  
  iVar5 = *param_1;
  if (iVar5 != 0) {
    if (1000 < param_2) {
      param_2 = 1000;
    }
    fVar7 = (float)param_2 / DAT_ram_40099f28;
    if (iVar5 == 1) {
      iVar5 = FUN_ram_4001aa50();
      uVar6 = *(ulonglong *)(param_1 + 1);
      fVar7 = (float)FUN_ram_4001aa02(CONCAT44(uStack_20,fVar7),uVar6 & 0xffffffff,
                                      *(undefined8 *)(param_1 + 2));
      iVar4 = FUN_ram_4001aa2e(fVar7 - (float)uVar6);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (iVar5 <= iVar4) {
        iVar4 = iVar5 + -1;
      }
    }
    else {
      iVar4 = 0;
      if (((iVar5 == 2) && (puVar3 = (undefined8 *)param_1[3], puVar3 != (undefined8 *)0x0)) &&
         (bVar1 = *(byte *)(param_1 + 4), bVar1 != 0)) {
        fVar8 = (float)FUN_ram_4001aa02(fVar7,*(undefined8 *)(param_1 + 1),
                                        *(undefined8 *)(param_1 + 2));
        iVar4 = 0;
        fVar7 = ABS(fVar8 - (float)*puVar3);
        for (iVar5 = 1; iVar5 < (int)(uint)bVar1; iVar5 = iVar5 + 1) {
          fVar2 = ABS(fVar8 - (float)*(undefined8 *)((int)puVar3 + iVar5 * 4));
          if (fVar2 < fVar7) {
            iVar4 = iVar5;
            fVar7 = fVar2;
          }
        }
      }
    }
    return iVar4;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4001ab50.
 * REA evidence: ev_a12bbcd2ebf8466ebd20911eb15a7016bf8a1f5794c85a646581db9122b14d0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001ab50(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4001aa50();
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    if (iVar1 == 1) {
      fVar4 = (float)param_2 + (float)*(undefined8 *)(param_1 + 1);
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      if (param_1[3] == 0) {
        return 0;
      }
      if ((char)param_1[4] == '\0') {
        return 0;
      }
      fVar4 = (float)*(undefined8 *)(param_1[3] + param_2 * 4);
    }
    fVar3 = (float)*(undefined8 *)(param_1 + 1);
    if (((float)*(undefined8 *)(param_1 + 2) <= fVar3) ||
       (fVar4 = (fVar4 - fVar3) / ((float)*(undefined8 *)(param_1 + 2) - fVar3), fVar4 < 0.0)) {
      fVar4 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar4) {
      fVar4 = DAT_ram_4009672c;
    }
    iVar1 = (int)(fVar4 * DAT_ram_40099f28 + DAT_ram_4009675c);
    if (1000 < iVar1) {
      return 1000;
    }
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4001ac0e.
 * REA evidence: ev_53da1589463554c7a2736e0818dd88b787f735de314984fcb65a33a39717139b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4001ac0e(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((DAT_ram_3006aa1c != '\0') && (_DAT_ram_3006aa20 == 100)) {
    iVar2 = 1;
    if (DAT_ram_3006ad54 == '\0') {
      iVar2 = -1;
    }
    bVar1 = _DAT_ram_3006ad28 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4001ac48.
 * REA evidence: ev_0133e0b9ae220d4b6ac91e48a4ceb7cd7cde07e17a0deaf23defe9a5a762fa22
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_4001ac48(void)

{
  return (DAT_ram_3006ad54 != '\0') + '\x02';
}


/* NanoCore 1.12, address 0x4001ac58.
 * REA evidence: ev_c02c706edd739f97fb6bfba73b90afd5956490d02983ac8db4491792c5573468
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4001ac58(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0bc,0x10);
    if ((((iVar2 == 0) || (iVar2 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0c0,0x10), iVar2 == 0)) ||
        (iVar2 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0d0,0x10), iVar2 == 0)) ||
       (((iVar2 = FUN_ram_4000513e(param_1,s_delay_ram_4009a0c8,0x10), iVar2 == 0 ||
         (iVar2 = FUN_ram_4000513e(param_1,s_reverb_ram_4009a0d4,0x10), iVar2 == 0)) ||
        ((iVar2 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0dc,0x10), iVar2 == 0 ||
         (iVar2 = FUN_ram_4000513e(param_1,&DAT_ram_4009acc0,0x10), iVar2 == 0)))))) {
      bVar1 = true;
    }
    else {
      iVar2 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0c4,0x10);
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  return false;
}


/* NanoCore 1.12, address 0x4001ad02.
 * REA evidence: ev_5b2a447dc9c9c8b9c4ffe7c0be17acefc2f06dd74db0f00080a3608cc4044b84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001ad02(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40017188();
  if (7 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001ad18.
 * REA evidence: ev_9ddd75c9434eba1deea7275abc5562562dd1e5de1374831f3eaf7cf84dad81d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001ad18(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4001ad02();
  if (uVar2 < 8) {
    uVar1 = *(undefined1 *)(uVar2 + 0x3006aebc);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001ad26.
 * REA evidence: ev_d636c5a129b2818b1cd21c7657ee1794808cbbe48f0c09068a4967af5e7d08df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001ad26(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = FUN_ram_4001ad02();
  if (uVar2 < 8) {
    uVar1 = *(undefined1 *)(uVar2 + 0x3006aebc);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001ad42.
 * REA evidence: ev_74aa2a05c9afa0b494e16f63ba063e9f6df78be31deec97dbd82d0e09bb77450
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ad42(void)

{
  undefined1 uVar1;
  undefined4 in_register_00000100;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  _DAT_ram_3006b1a8 = 0;
  pcVar6 = &DAT_ram_3006b148;
  iVar2 = 0;
  do {
    uVar3 = 0;
    pcVar5 = pcVar6;
    do {
      if (*pcVar5 != '\0') {
        uVar1 = *(undefined1 *)(iVar2 + 0x3006aebc);
        *pcVar5 = '\0';
        iVar4 = FUN_ram_400270da(iVar2,uVar1,uVar3 & 0xff,1);
        if (iVar4 != 0xff) {
          uStack_47 = (undefined1)iVar4;
          uStack_48 = (undefined1)iVar2;
          uStack_46 = (undefined1)in_register_00000100;
          uStack_45 = (undefined1)((uint)in_register_00000100 >> 8);
          uStack_44 = (undefined1)((uint)in_register_00000100 >> 0x10);
          uStack_43 = (undefined1)((uint)in_register_00000100 >> 0x18);
          FUN_ram_40014472(0x62,&uStack_48,6);
        }
      }
      uVar3 = uVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar3 != 0xc);
    iVar2 = iVar2 + 1;
    pcVar6 = pcVar6 + 0xc;
  } while (iVar2 != 8);
  return;
}


/* NanoCore 1.12, address 0x4001ae16.
 * REA evidence: ev_777bb59df4eeaab2011b9968f85e3bbfd8f38aa3d94941b9bc057dea4dee0643
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_4001ae16(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  
  fVar1 = 0.0;
  if ((0.0 <= param_1) && (fVar1 = param_1, DAT_ram_4009672c < param_1)) {
    fVar1 = DAT_ram_4009672c;
  }
  if ((0.0 < param_2) && (0.0 < param_3)) {
    if (param_2 != param_3) {
      fVar2 = (float)FUN_ram_40000c5e(param_2);
      fVar3 = (float)FUN_ram_40000c5e(param_3);
      fVar4 = (float)FUN_ram_40000c5e(param_2);
      uVar5 = FUN_ram_40000bd8((fVar3 - fVar4) * fVar1 + fVar2);
      return uVar5;
    }
  }
  return (ulonglong)(uint)param_2;
}


/* NanoCore 1.12, address 0x4001aea8.
 * REA evidence: ev_b72e138269e093405766dd3e2fd05d30af20e9e7ed16770f6d2b36599e71b881
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001aec6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001aea8(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_1c [20];
  
  if (_DAT_ram_3006acf8 != 0) {
    uVar2 = (DAT_ram_3006ad1c + 4) / 5;
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    uVar1 = DAT_ram_3006acf4 + 1;
    if (uVar2 < uVar1) {
      uVar1 = 1;
    }
    FUN_ram_40005520(auStack_1c,0xc,s__u__u_ram_4009a20c,uVar1);
    FUN_ram_40017bd8(_DAT_ram_3006acf8,0x3006acfc,auStack_1c);
    FUN_ram_400450a2(_DAT_ram_3006acf8,0x200007d1);
    FUN_ram_40046078(_DAT_ram_3006acf8);
    FUN_ram_40045126(_DAT_ram_3006acf8,5,0,0xfffffff8);
    FUN_ram_40017b64(_DAT_ram_3006acf8,0x3006acfc);
  }
  return;
}


/* NanoCore 1.12, address 0x4001af3a.
 * REA evidence: ev_617242f5e441f167c23260d42c2dd326a43ff1b8ea596bd510f7c32f4655077b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001af3a(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xff;
  if (param_2 == 0) {
    uVar1 = 0x59;
  }
  if (param_1 != 0) {
    FUN_ram_40048a9e(param_1,uVar1,0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001af50.
 * REA evidence: ev_491302c69b95990bed9403b0714daf4f0aeb3fbe717ebedfc50e9788f76ef999
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001af50(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_4001ad02(_DAT_ram_3006aa24);
  uVar2 = 0x3006acb4;
  if ((uVar1 < 8) && (*(char *)(uVar1 + 0x3006adf4) == '\0')) {
    uVar2 = 0x3006ac74;
  }
  FUN_ram_400172bc(_DAT_ram_3006aa6c,uVar2);
  return;
}


/* NanoCore 1.12, address 0x4001af94.
 * REA evidence: ev_7b9af016da646a92c9f91a13c233a8b8ca75b3d18a43bc1761f5bedadb9eced7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4001af94(uint *param_1,uint param_2)

{
  bool bVar1;
  
  if ((param_1[2] & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((*param_1 != 0) && (*param_1 <= param_2)) {
      bVar1 = param_1[1] - 1 < 0xfffffffe;
    }
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4001afea.
 * REA evidence: ev_f08c5a497ecd2a2524cfb948526a6f0b1552408f2337c2edd46e2edcaf0c89bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001afea(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  
  DAT_ram_3006ad64 = 0;
  DAT_ram_3004ad10 = 0xffffffff;
  DAT_ram_3004ad14 = 0xffffffff;
  FUN_ram_40004f92(0x3006adec,0,8);
  FUN_ram_40004f92(0x3006ad68,0,0x80);
  iVar5 = 0x3006ad68;
  iVar1 = 0;
  do {
    iVar2 = FUN_ram_40093110(iVar1 + 0x1eU & 0xff,auStack_40);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_4001af94(auStack_40,0x3000), iVar2 != 0)) {
      *(undefined1 *)(iVar1 + 0x3006adec) = 1;
      memcpy(iVar5,auStack_34,0x10);
      *(undefined1 *)(iVar5 + 0xf) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 0x10;
  } while (iVar1 != 8);
  iVar1 = FUN_ram_4000be82();
  if (((7 < (iVar1 - 0x1eU & 0xff)) ||
      (uVar3 = iVar1 - 0x1eU, *(char *)(iVar1 + 0x3006adce) == '\0')) &&
     (uVar3 = DAT_ram_3004ad10, (int)DAT_ram_3004ad10 < 0)) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      if (*(char *)(uVar4 + 0x3006adec) != '\0') break;
      uVar4 = uVar4 + 1;
      uVar3 = DAT_ram_3004ad10;
    } while (uVar4 != 8);
  }
  DAT_ram_3004ad10 = uVar3;
  DAT_ram_3004ad14 = DAT_ram_3004ad10;
  DAT_ram_3006ad64 = 1;
  _DAT_ram_3006ade8 = FUN_ram_40093102();
  iVar1 = FUN_ram_4001ad02(&DAT_ram_4009a0c0);
  if (iVar1 < 0) {
    return;
  }
  uVar3 = FUN_ram_4000be9e();
  if (0xb < uVar3) {
    uVar3 = 0;
  }
  *(char *)(iVar1 + 0x3006aebc) = (char)uVar3;
  FUN_ram_40023340(1);
  return;
}


