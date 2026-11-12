/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40016000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4001642c.
 * REA evidence: ev_616d83d71546a94cc0cd92b2d4d7085f4322cf36f2ed37fec8a768ce78dc49dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40016600) */
/* WARNING: Removing unreachable block (ram,0x400165de) */
/* WARNING: Removing unreachable block (ram,0x400165ee) */
/* WARNING: Removing unreachable block (ram,0x40016610) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001642c(undefined4 param_1)

{
  float fVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uStack_34;
  
  FUN_ram_40004f92(&DAT_ram_300698f4,0,0x100);
  _DAT_ram_30069900 = param_1;
  _DAT_ram_300698f4 = FUN_ram_40004346();
  _DAT_ram_300698f8 = _DAT_ram_300698f4;
  _DAT_ram_300698fc = _DAT_ram_300698f4;
  iVar4 = FUN_ram_4002d154(0x25800);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_4000559c(0x25800);
    if (iVar4 == 0) {
      _DAT_ram_30069928 = 0;
      return 0xffffffff;
    }
    DAT_ram_30069930 = 0;
  }
  else {
    DAT_ram_30069930 = 1;
  }
  _DAT_ram_30069928 = iVar4;
  iVar4 = FUN_ram_4002d154(0x4b000);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_4000559c(0x4b000);
    if (iVar4 == 0) {
      _DAT_ram_3006992c = 0;
      FUN_ram_40015a4e();
      return 0xfffffffe;
    }
    DAT_ram_30069931 = 0;
  }
  else {
    DAT_ram_30069931 = 1;
  }
  _DAT_ram_3006992c = iVar4;
  FUN_ram_4004d2b6();
  FUN_ram_4004d43e();
  _DAT_ram_30069908 = FUN_ram_40043b84();
  if (_DAT_ram_30069908 == 0) {
    FUN_ram_40015a4e();
    uVar6 = 0xfffffffd;
  }
  else {
    FUN_ram_40045014(_DAT_ram_30069908,0,0);
    FUN_ram_400450a2(_DAT_ram_30069908,0x140,0xf0);
    FUN_ram_400489f0(_DAT_ram_30069908,0xff,0);
    uStack_34 = uStack_34 & 0xff000000;
    FUN_ram_400489d2(_DAT_ram_30069908,uStack_34,0);
    FUN_ram_40048a2e(_DAT_ram_30069908,0,0);
    FUN_ram_40043ba4(_DAT_ram_30069908,0x10);
    FUN_ram_40043ba4(_DAT_ram_30069908,2);
    _DAT_ram_3006990c = FUN_ram_40056db0(_DAT_ram_30069908);
    if (_DAT_ram_3006990c == 0) {
      FUN_ram_40015a4e();
      uVar6 = 0xfffffffc;
    }
    else {
      FUN_ram_40045014(_DAT_ram_3006990c,0,0);
      FUN_ram_400450a2(_DAT_ram_3006990c,0x140,0xf0);
      FUN_ram_40043ba4(_DAT_ram_3006990c,0x10);
      FUN_ram_40043ba4(_DAT_ram_3006990c,2);
      FUN_ram_40004f92(&DAT_ram_30069910,0,0x18);
      fVar1 = DAT_ram_40099f88;
      _DAT_ram_30069910 = 0x201219;
      _DAT_ram_30069914 = 0xf00140;
      _DAT_ram_3006991c = 0x25800;
      _DAT_ram_30069920 = _DAT_ram_30069928;
      _DAT_ram_30069924 = 0;
      puVar2 = &DAT_ram_300698f4;
      do {
        uVar5 = FUN_ram_40015878();
        puVar3 = puVar2 + 0x10;
        *(ulonglong *)(puVar2 + 0x40) = (ulonglong)(uint)(float)(uVar5 % 0x140);
        uVar5 = FUN_ram_40015878();
        *(ulonglong *)(puVar2 + 0x44) = (ulonglong)(uint)(float)(uVar5 % 100 + 0xf0);
        uVar5 = FUN_ram_40015878();
        *(ulonglong *)(puVar2 + 0x48) = (ulonglong)(uint)(float)(uVar5 % 0x19 + 0xf);
        uVar5 = FUN_ram_40015878();
        *(ulonglong *)(puVar2 + 0x4c) = (ulonglong)(uint)((float)(uVar5 % 100) * fVar1);
        puVar2 = puVar3;
      } while (puVar3 != (undefined1 *)0x300699b4);
      FUN_ram_400158fa(0);
      FUN_ram_4001589a();
      FUN_ram_40057218(_DAT_ram_3006990c,&DAT_ram_30069910);
      FUN_ram_400455dc(_DAT_ram_3006990c);
      FUN_ram_40049e48(0);
      _DAT_ram_30069904 = FUN_ram_4004c6ac(FUN_ram_40015b0e,0x10,0);
      uVar6 = 0;
      if (_DAT_ram_30069904 == 0) {
        FUN_ram_40015a4e();
        uVar6 = 0xfffffffb;
      }
    }
  }
  return uVar6;
}


/* NanoCore 1.12, address 0x40016668.
 * REA evidence: ev_8cca558ea42753822a007d1c9473aa9d918048f706d5d2b3f4356e5b3b63ea4e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40016696) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40016668(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)_DAT_ram_3006a268;
  uVar1 = 0;
  if ((199 < uVar2) && (uVar1 = 1000, uVar2 < 0x5dc)) {
    uVar1 = ((uVar2 - 200) * 1000) / 0x514 & 0xffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x400166a0.
 * REA evidence: ev_0f297f8ad2272b329608f8d3403a72b9f2cd47857446699cebe801ed3116106a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400166a0(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_ram_3006a210 = 4;
  _DAT_ram_3006a214 = 5;
  _DAT_ram_3006a218 = 0;
  _DAT_ram_3006a21c = 1;
  _DAT_ram_3006a220 = 2;
  _DAT_ram_3006a224 = 3;
  iVar1 = 0;
  iVar2 = 6;
  while( true ) {
    if (*(uint *)(&DAT_ram_30069b00 + iVar1 * 4) < 8) {
      *(uint *)(&DAT_ram_3006a210 + iVar2 * 4) = *(uint *)(&DAT_ram_30069b00 + iVar1 * 4) + 6;
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 1;
    if (iVar1 == 8) break;
    if (iVar2 == 0xe) {
      return;
    }
  }
  for (; iVar2 != 0xe; iVar2 = iVar2 + 1) {
    *(int *)(&DAT_ram_3006a210 + iVar2 * 4) = iVar2;
  }
  return;
}


/* NanoCore 1.12, address 0x40016702.
 * REA evidence: ev_e034bcbc483d84a5fa4b8451e090378ca69091815aa70968e5aaab463b873e77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016702(void)

{
  DAT_ram_3006a341 = 0;
  _DAT_ram_3006a344 = 0;
  return;
}


/* NanoCore 1.12, address 0x40016714.
 * REA evidence: ev_9077537b2069d6e509c5531a89b87ab331ed18bc1b615c7f961f270a816beb22
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016714(void)

{
  if (_DAT_ram_3006a278 != 0) {
    FUN_ram_4003f070(1);
    _DAT_ram_3006a278 = 0;
  }
  DAT_ram_3006a294 = 0;
  FUN_ram_40004f92(&DAT_ram_3006a27c,0,0x18);
  return;
}


/* NanoCore 1.12, address 0x40016762.
 * REA evidence: ev_f0e439bd761998b74b3e07d7a4b19046b13f811503a96d192d213ba611994132
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016762(undefined4 param_1,int param_2,int param_3)

{
  FUN_ram_40045014(param_1,param_2 * 0x4a + 0x18,(1 - param_3) * -0x3a + 0xb6);
  FUN_ram_400450a2(param_1,0x32,0x32);
  return;
}


/* NanoCore 1.12, address 0x4001679a.
 * REA evidence: ev_a49f5de0a684338ccb0f46b7e74876d1967de2413583ae0ca9ee41b8cb833103
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001679a(void)

{
  DAT_ram_3004acec = 0xffffffff;
  if (_DAT_ram_3006a298 != 0) {
    FUN_ram_4004c712();
    _DAT_ram_3006a298 = 0;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400167c6.
 * REA evidence: ev_dc485e27a8ba0965353b549b25d35866f4661219016ccbb8939a36b005b026de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400167c6(void)

{
  if (_DAT_ram_3006a440 != 0) {
    FUN_ram_4004c712();
    _DAT_ram_3006a440 = 0;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400167e8.
 * REA evidence: ev_98d52c5629da5d779da124fbaca1ad7857a758007066d47fc29e45a7ee1df222
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400167e8(void)

{
  if (_DAT_ram_3006a274 != 0) {
    FUN_ram_4004c712();
    _DAT_ram_3006a274 = 0;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001680a.
 * REA evidence: ev_ff215bef109b45d0bf7f93c4c6a9400b591b2ac1fcdc16fb0b8fd847e3b6c9f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001680a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3006a2ac;
  if (_DAT_ram_3006a2ac != 0) {
    thunk_FUN_ram_40025798(DAT_ram_3004acf4);
    uVar2 = thunk_FUN_ram_40025770();
    FUN_ram_40056f8a(iVar1,uVar2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40016840.
 * REA evidence: ev_d69f9aeb2fc9c95674b0ca7bedb28f75f4eade8178f4c2f6a73bb17461480b2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016840(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40048b6e();
  if (iVar1 != 0) {
    iVar1 = FUN_ram_40048b96();
    FUN_ram_40048de6(param_1,iVar1 + -1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001686a.
 * REA evidence: ev_b0fa0c18957b84358b2bb3ef16b2b519109d4cc4dfb9b7a0416027a95dcbc6e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400168b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001686a(uint param_1)

{
  uint uVar1;
  
  if ((_DAT_ram_3006a26c != 0) && (_DAT_ram_3006a264 != 0)) {
    if (param_1 != 0) {
      uVar1 = param_1 & 0xffff;
      if (1000 < param_1) {
        uVar1 = 1000;
      }
      FUN_ram_4004502e(_DAT_ram_3006a264,(uVar1 * 0x6c + 999) / 1000);
      FUN_ram_40043ba4(_DAT_ram_3006a26c,1);
      FUN_ram_40016840(_DAT_ram_3006a26c);
      return;
    }
    FUN_ram_400440ce(_DAT_ram_3006a26c,1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400168dc.
 * REA evidence: ev_08696a248a03f2ef9dbaaaf385e394b4b2b4d81a331c867500ec1a51ab54906e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400168dc(void)

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
    FUN_ram_40005520(auStack_30,0x10,s_volume_meter__d_ram_40099fd8,iVar1);
    iVar3 = FUN_ram_4002ce1e(auStack_30,auStack_3c);
    if ((iVar3 == 0) && (0xc < uStack_38)) {
      iVar2 = iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 9);
  DAT_ram_3004ace8 = iVar2;
  return;
}


/* NanoCore 1.12, address 0x40016938.
 * REA evidence: ev_00a8be91d53e91725fc1beb2ec401c1c330426da45bbaa6cd1eb9e4904eb6d31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400169a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016938(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = _DAT_ram_30069f48;
  if (_DAT_ram_30069f48 != 0) {
    iVar3 = thunk_FUN_ram_40022972();
    if ((iVar3 == 0) ||
       ((iVar3 = FUN_ram_4002dbc4(), iVar3 == 0 &&
        (uVar4 = FUN_ram_400043d4(), (uVar4 / 500 & 1) != 0)))) {
      cVar2 = '3';
    }
    else {
      cVar2 = -1;
    }
    if ((_DAT_ram_3006a44c != iVar1) || (DAT_ram_3004acf5 != cVar2)) {
      FUN_ram_40048a9e(iVar1,cVar2,0);
      _DAT_ram_3006a44c = iVar1;
      DAT_ram_3004acf5 = cVar2;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400169b4.
 * REA evidence: ev_0e2847d4d134575845d680a772e35cc61b356539decbda216d591257fe98f1d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400169b4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_4000e564();
  iVar1 = _DAT_ram_30069f70;
  if (_DAT_ram_30069f70 != 0) {
    thunk_FUN_ram_40025798();
    uVar2 = thunk_FUN_ram_40025770();
    FUN_ram_40056f8a(iVar1,uVar2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400169e6.
 * REA evidence: ev_e1a6871e00300380f5347585020f128020eb70cece703d96008984bda3b3f6de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400169e6(void)

{
  int iVar1;
  undefined1 auStack_20 [24];
  
  iVar1 = FUN_ram_4002cb50(auStack_20);
  if (iVar1 != 0) {
    FUN_ram_4002cd7e();
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40016a04.
 * REA evidence: ev_f6c732889df6866a7369cf55f9ccc3b5e79a9da96aa2bdb2dbfb4506885e7549
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016a04(undefined4 param_1)

{
  FUN_ram_40045126(param_1,9,0,0);
  return;
}


/* NanoCore 1.12, address 0x40016a0e.
 * REA evidence: ev_94a20522a6f4c7618ef2784591ffde2f20abeccd3081f9c9b7f2710e42db829d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016a0e(void)

{
  FUN_ram_400167e8();
  FUN_ram_4003fa08();
  return;
}


/* NanoCore 1.12, address 0x40016a1e.
 * REA evidence: ev_8047c058e6940c2f3d9d0fbb34cbe6f5316bc85cfdc4c4e10388f6d2238dfa23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016a1e(int param_1,uint param_2)

{
  if ((param_1 != 0) && (param_2 < 8)) {
    FUN_ram_40016762(param_1,param_2 & 3,(int)param_2 >> 2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40016a32.
 * REA evidence: ev_7d5b63d92c657dab25fca37b3ebf87f4d298d39cbb389f09c71f84015adbc146
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016a32(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40045014(param_1,0x78,0xd);
    FUN_ram_400450a2(param_1,0x28,0x28);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40016a5c.
 * REA evidence: ev_0e5b762c3dcc634b82f2794e7c8935fa9e9a945e3fe9d3459114470a905583eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016a5c(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40045014(param_1,0xad,0xd);
    FUN_ram_400450a2(param_1,0x28,0x28);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40016a86.
 * REA evidence: ev_9687cceaf404fd637c3c7ecc0cadbbe6548b93d53ca11d5e47a2bb71ab7bebd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016a86(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40045014(param_1,0x115,0xb);
    FUN_ram_400450a2(param_1,0x18,0x2d);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40016aae.
 * REA evidence: ev_9c119a62629dec09b39fed60b36eeed2858503c79d9d06c806008e5a1be4372d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40016ae4) */
/* WARNING: Removing unreachable block (ram,0x40016aee) */

void FUN_ram_40016aae(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_4004502e(param_1,0x200007d1);
  FUN_ram_40045068(param_1,0x200007d1);
  FUN_ram_40046078(param_1);
  iVar1 = FUN_ram_4004515c(param_1);
  iVar2 = FUN_ram_40045168(param_1);
  FUN_ram_40045014(param_1,0xfb - iVar1 / 2,0x59 - iVar2 / 2);
  return;
}


/* NanoCore 1.12, address 0x40016b0a.
 * REA evidence: ev_e0692602895416b0f9516ab27df96d8284eb3317f438387671f1aa6e3f8b8acb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40016b0a(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_ram_3006a341 = 1;
  DAT_ram_3006a342 = 1;
  uVar1 = FUN_ram_400043ae(0x21);
  iVar2 = FUN_ram_40004346();
  if (_DAT_ram_3006a344 != 0) {
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if ((uint)(iVar2 - _DAT_ram_3006a344) < uVar1) {
      return 0;
    }
  }
  _DAT_ram_3006a344 = iVar2;
  return 1;
}


/* NanoCore 1.12, address 0x40016b5a.
 * REA evidence: ev_f4541549ea745d44d0461d0112f41c14b2e7c461bb43b1a07e3a1727ec5afc8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40016b5a(char *param_1)

{
  int iVar1;
  undefined1 auStack_1c [4];
  uint uStack_18;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_ram_4002ce1e(param_1,auStack_1c);
    return iVar1 == 0 && 0xc < uStack_18;
  }
  return false;
}


/* NanoCore 1.12, address 0x40016b84.
 * REA evidence: ev_720e2ebd54d2f06d439e028c6d71f8746aa34581f06c236d09e17bfce4c5501d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016b84(void)

{
  uint uVar1;
  char *pcVar2;
  
  if ((_DAT_ram_30069ad8 != 0) && (_DAT_ram_30069ad0 != 0)) {
    uVar1 = FUN_ram_4002db84();
    if ((uint)DAT_ram_30069ad4 != (uVar1 & 0xff)) {
      DAT_ram_30069ad4 = (byte)uVar1;
      if (uVar1 == 2) {
        pcVar2 = s_NO_BT_ram_40099fe8;
      }
      else {
        pcVar2 = s_BT_FW_ERR_ram_40099ff0;
        if (uVar1 != 3) {
          FUN_ram_400440ce(_DAT_ram_30069ad8,1);
          return;
        }
      }
      FUN_ram_40058020(_DAT_ram_30069ad0,pcVar2);
      FUN_ram_40043ba4(_DAT_ram_30069ad8,1);
      FUN_ram_40016840(_DAT_ram_30069ad8);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40016c12.
 * REA evidence: ev_aa4fe92718f34da41192ce183912e5bdd6f08687886d64bb07c32c9e0ef87098
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016c12(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar1 * 4);
    if (iVar2 != 0) {
      if (param_2 == 0) {
        FUN_ram_400440ce(iVar2,1);
      }
      else {
        FUN_ram_40043ba4();
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return;
}


/* NanoCore 1.12, address 0x40016c50.
 * REA evidence: ev_9e4d7f7019f7e59a0569a097f8df65859bf950bf4d55767202673fc8c9058e1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016c50(char *param_1)

{
  int iVar1;
  
  _DAT_ram_3006a2f4 = 0x20202020;
  _DAT_ram_3006a2f8 = 0x20202020;
  if (param_1 != (char *)0x0) {
    for (; *param_1 == ' '; param_1 = param_1 + 1) {
    }
    if (*param_1 != '\0') goto LAB_ram_40016c80;
  }
  param_1 = s_preset_ram_40099ffc;
LAB_ram_40016c80:
  iVar1 = 0;
  do {
    if (param_1[iVar1] == '\0') {
      DAT_ram_3006a2fc = 0;
      return;
    }
    (&DAT_ram_3006a2f4)[iVar1] = param_1[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  DAT_ram_3006a2fc = 0;
  return;
}


/* NanoCore 1.12, address 0x40016c9e.
 * REA evidence: ev_584b186ee87b338b342e3e793a76483ac4b9cf88331c345e9f0173faa81206b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_40016c9e(void)

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
  
  if (DAT_ram_3006a294 != '\0') {
    return DAT_ram_3006a294;
  }
  if (DAT_ram_3006a34c == '\0') {
    return '\0';
  }
  iVar5 = FUN_ram_4004f6da(auStack_7c,&DAT_ram_3006a34c,0);
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
    iVar6 = FUN_ram_4003f036(1,iVar5);
    if (iVar6 != 0) {
      FUN_ram_40004f92(iVar6,0,iVar5);
      iStack_94 = uStack_68 - 1;
      iStack_90 = uVar11 - 1;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_8c = 0xe0000001;
      iStack_88 = -0x1fffffff;
      uStack_84 = 0xe0000001;
      uStack_80 = 0xe0000001;
      while (iVar7 = FUN_ram_4004f794(auStack_7c,&uStack_9c,&uStack_8c), puVar2 = puStack_60,
            iVar1 = iStack_88, iVar7 == 1) {
        if (puStack_60 == (undefined1 *)0x0) goto LAB_ram_40016e1c;
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
      if (iVar7 == 0) goto LAB_ram_40016d4a;
LAB_ram_40016e1c:
      FUN_ram_4003f070(1,iVar6);
    }
  }
  else {
    iVar6 = FUN_ram_4003f036(1,*(undefined4 *)(puStack_60 + 0xc));
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
LAB_ram_40016d4a:
      FUN_ram_4004f7a8(auStack_7c);
      if (_DAT_ram_3006a278 != 0) {
        FUN_ram_4003f070(1);
      }
      _DAT_ram_3006a278 = iVar6;
      DAT_ram_3006a27c = uVar16;
      DAT_ram_3006a27d = cVar12;
      _DAT_ram_3006a27e = uVar9 & 0xffe7;
      _DAT_ram_3006a280 = uVar13;
      _DAT_ram_3006a282 = uVar10;
      _DAT_ram_3006a284 = uVar3;
      _DAT_ram_3006a286 = uVar15;
      _DAT_ram_3006a288 = iVar5;
      _DAT_ram_3006a28c = iVar6;
      _DAT_ram_3006a290 = 0;
      DAT_ram_3006a294 = 1;
      return '\x01';
    }
  }
  FUN_ram_4004f7a8(auStack_7c);
  return '\0';
}


/* NanoCore 1.12, address 0x40016e5c.
 * REA evidence: ev_79cc3c8aefdaa62f7cbefbf972ffaba086f7001065d445d6603243c471df48c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40016e5c(void)

{
  int iVar1;
  
  if ((_DAT_ram_3006a348 == 0) || (iVar1 = FUN_ram_40016c9e(), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    FUN_ram_40057218(_DAT_ram_3006a348,&DAT_ram_3006a27c);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40016e96.
 * REA evidence: ev_350c6fe816b0446b00c84ffcc956ded277950f226840017dc8411ad317b94a08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016e96(void)

{
  int iVar1;
  
  if ((_DAT_ram_3006a348 != 0) && (iVar1 = FUN_ram_40016e5c(), iVar1 != 0)) {
    FUN_ram_40043ba4(_DAT_ram_3006a348,1);
    FUN_ram_40016840(_DAT_ram_3006a348);
    if (_DAT_ram_3006a394 != 0) {
      FUN_ram_400440ce(_DAT_ram_3006a394,1);
    }
    if (_DAT_ram_3006a38c != 0) {
      FUN_ram_4004c712();
      _DAT_ram_3006a38c = 0;
    }
    _DAT_ram_3006a38c = FUN_ram_4004c6ac(&LAB_ram_400186c8,0x5dc,0);
    if (_DAT_ram_3006a38c != 0) {
      FUN_ram_4004c934(_DAT_ram_3006a38c,1);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40016f0e.
 * REA evidence: ev_337446f44173fde61be4aa916735d3e829f081275c760f774255ffea127627bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016f0e(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar2 = _DAT_ram_3006a438;
  if ((_DAT_ram_3006a438 == (undefined **)0x0) &&
     (ppuVar2 = _DAT_ram_3006a2a8, _DAT_ram_3006a2a8 == (undefined **)0x0)) {
    ppuVar2 = &PTR_LAB_ram_400136ec_ram_40099ce0;
  }
  if (_DAT_ram_3006a43c != 0) {
    puVar3 = ppuVar2[3];
    if ((int)puVar3 < 1) {
      puVar3 = (undefined *)0x2e;
    }
    FUN_ram_400450a2(_DAT_ram_3006a43c,0x96,puVar3);
    FUN_ram_40048ade(_DAT_ram_3006a43c,ppuVar2,0);
    iVar1 = _DAT_ram_3006a43c;
    FUN_ram_4004895a(_DAT_ram_3006a43c,0x100,0);
    FUN_ram_4004896a(iVar1,0x100,0);
    FUN_ram_4004893a(_DAT_ram_3006a43c,0,0);
    FUN_ram_4004894a(_DAT_ram_3006a43c,0,0);
    FUN_ram_40016a04(_DAT_ram_3006a43c);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40016fa0.
 * REA evidence: ev_97d2330a5edfb87486c001f1020811608f35fa4eca14b3290758621c33616c6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016fa0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 auStack_14 [4];
  
  iVar1 = _DAT_ram_3006a444;
  if ((_DAT_ram_3006a444 != 0) && (_DAT_ram_3006a43c != 0)) {
    iVar2 = FUN_ram_40016668();
    if (iVar2 != 0) {
      FUN_ram_400440ce(iVar1,1);
      return;
    }
    FUN_ram_40028daa(0x30069fb4,&cStack_18);
    if (cStack_18 == '\0') {
      FUN_ram_400440ce(_DAT_ram_3006a444,1);
      FUN_ram_400167c6();
    }
    else {
      FUN_ram_40028e62(uStack_17,auStack_14,4);
      FUN_ram_40058020(_DAT_ram_3006a43c,auStack_14);
      FUN_ram_40016f0e();
      iVar1 = _DAT_ram_3006a444;
      uVar3 = FUN_ram_40028e8a(uStack_16,0xd6);
      FUN_ram_400489f0(iVar1,uVar3,0);
      iVar1 = _DAT_ram_3006a444;
      uVar3 = FUN_ram_40028e8a(uStack_16,0x2a);
      FUN_ram_40048a1e(iVar1,uVar3,0);
      iVar1 = _DAT_ram_3006a444;
      uVar3 = FUN_ram_40028e8a(uStack_16,0x4e);
      FUN_ram_40048a8e(iVar1,uVar3,0);
      FUN_ram_40048ace(_DAT_ram_3006a43c,uStack_16,0);
      FUN_ram_40043ba4(_DAT_ram_3006a444,1);
      FUN_ram_40016840(_DAT_ram_3006a444);
    }
  }
  return;
}


