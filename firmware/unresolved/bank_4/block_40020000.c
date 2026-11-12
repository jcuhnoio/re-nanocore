/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40020000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002002a.
 * REA evidence: ev_205b7458315b8c17828b9daad0e9f075ba40fa2cda5e149214dca52f048315c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002002a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3006a1b8;
  if (_DAT_ram_3006a258 != 0) {
    FUN_ram_400171b6(_DAT_ram_3006a258,0x3006a288,_DAT_ram_3006a1b8 != 0);
    if (iVar1 != 0) {
      FUN_ram_40047a74(_DAT_ram_3006a258,iVar1,0);
      iVar3 = 0;
      do {
        iVar2 = *(int *)(iVar3 * 4 + 0x3006a288);
        if (iVar2 != 0) {
          FUN_ram_40047a74(iVar2,iVar1,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 8);
      FUN_ram_40043ffe(_DAT_ram_3006a258,*(undefined4 *)(iVar1 + 0xc));
      FUN_ram_40045054(_DAT_ram_3006a258,_DAT_ram_3006a200,0x14,8,0);
      FUN_ram_40016fb2(_DAT_ram_3006a258,0x3006a288);
      FUN_ram_40017026(_DAT_ram_3006a258,0x3006a288,&DAT_ram_3006a25c);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400200e6.
 * REA evidence: ev_6a59ed8870a2089a8e2c336f6f03f0b632b51c0d4d2af8ddc700c8cc22d46929
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400200e6(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  FUN_ram_4002c918(&DAT_ram_3006a25c,0x29,pcVar1,10);
  FUN_ram_40017026(_DAT_ram_3006a258,0x3006a288,&DAT_ram_3006a25c);
  return;
}


/* NanoCore 1.10, address 0x40020128.
 * REA evidence: ev_288fc31246ddb833adf9930438befc229dc3747fea421d916875ea9a653f1fd0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020128(void)

{
  if (DAT_ram_3006a204 == '\0') {
    DAT_ram_3006a214 = 0;
  }
  else {
    FUN_ram_400164de(&DAT_ram_3006a214,0x40);
  }
  FUN_ram_4001670a(_DAT_ram_3006a200,&DAT_ram_3006a214);
  FUN_ram_4001670a(_DAT_ram_3006a1bc,&DAT_ram_3006a1c0);
  return;
}


/* NanoCore 1.10, address 0x40020180.
 * REA evidence: ev_45f13d6032802564f6ccc3ec672ed12462365d7873fcafea932c35648e6c57df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40020180(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3006a200;
  if ((((param_1 != 0) && (iVar1 = _DAT_ram_3006a1bc, param_1 != 1)) || (iVar1 == 0)) ||
     (iVar2 = FUN_ram_40042c20(iVar1,1), iVar2 != 0)) {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400201ba.
 * REA evidence: ev_ffd05904f44ee569834f762eaa930fc418eb35063dc0840b0bea1da1b6b50f36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400201ba(void)

{
  bool bVar1;
  undefined3 uVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40020180(_DAT_ram_3006a254);
  if (iVar3 == 0) {
    bVar1 = _DAT_ram_3006a254 == 0;
    iVar3 = FUN_ram_40020180((uint)bVar1);
    if (iVar3 != 0) {
      _DAT_ram_3006a254 = (uint)bVar1;
    }
  }
  FUN_ram_400175d2();
  uVar2 = FUN_ram_40016538(0);
  FUN_ram_4001775e(uVar2);
  return;
}


/* NanoCore 1.10, address 0x4002020e.
 * REA evidence: ev_5c7843b84c77ef5ff97b212138435e1327965b66cd8fe8c237aaf16050e0d125
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002020e(undefined4 param_1)

{
  _DAT_ram_3006a1b8 = 0;
  DAT_ram_3006a1b0 = 0;
  _DAT_ram_3006a254 = 0;
  DAT_ram_3006a204 = 0;
  DAT_ram_3006a25c = 0;
  _DAT_ram_3006a286 = 0;
  FUN_ram_400164de(&DAT_ram_3006a1c0,0x40,&DAT_ram_40093614);
  _DAT_ram_3006a1b4 = FUN_ram_40042b1a(param_1);
  FUN_ram_40044038(_DAT_ram_3006a1b4,0x140,0xf0);
  FUN_ram_40047986(_DAT_ram_3006a1b4,0,0);
  FUN_ram_400479c4(_DAT_ram_3006a1b4,0,0);
  FUN_ram_40043064(_DAT_ram_3006a1b4,1);
  _DAT_ram_3006a200 = FUN_ram_4005600c(_DAT_ram_3006a1b4);
  FUN_ram_400565de(_DAT_ram_3006a200,0xb);
  FUN_ram_40043faa(_DAT_ram_3006a200,8,8);
  FUN_ram_40044038(_DAT_ram_3006a200,0x26,0x26);
  _DAT_ram_3006a258 = FUN_ram_40056c3a(_DAT_ram_3006a1b4);
  FUN_ram_400572fa(_DAT_ram_3006a258,1);
  FUN_ram_40044038(_DAT_ram_3006a258,0xb4,0x1c);
  FUN_ram_40045054(_DAT_ram_3006a258,_DAT_ram_3006a200,0x14,8,0);
  FUN_ram_40016e9e(_DAT_ram_3006a1b4,_DAT_ram_3006a258,0x3006a288,1);
  _DAT_ram_3006a1bc = FUN_ram_4005600c(_DAT_ram_3006a1b4);
  FUN_ram_400565de(_DAT_ram_3006a1bc,0xb);
  FUN_ram_40044038(_DAT_ram_3006a1bc,0x46,0x1e);
  FUN_ram_40043faa(_DAT_ram_3006a1bc,0xf2,0xf);
  _DAT_ram_3006a1b8 = FUN_ram_4001de9c();
  FUN_ram_4002002a();
  return;
}


/* NanoCore 1.10, address 0x4002035e.
 * REA evidence: ev_24d9fd387a73d810e595ebc0cb2cf7a1feb45ae12ccfd6cd27d514d6292b99d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002035e(void)

{
  DAT_ram_3006a1b0 = 0;
  if (_DAT_ram_3006a1b4 != 0) {
    FUN_ram_40043064(_DAT_ram_3006a1b4,1);
  }
  FUN_ram_400175d2(0);
  return;
}


/* NanoCore 1.10, address 0x40020388.
 * REA evidence: ev_09f2420f878dc8f56be6107e46a263eec3b7f3e847328d9cea7b085ccf64f0eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40020388(void)

{
  return DAT_ram_3006a1b0;
}


/* NanoCore 1.10, address 0x40020392.
 * REA evidence: ev_027ab7d5d26419aada50cf682c3c947ea5d7255e2dfc97aba1f9af6ea42f81a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020392(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((DAT_ram_3006a1b0 == '\0') || (param_1 == 0)) {
    return;
  }
  bVar1 = 0;
  if (_DAT_ram_3006a200 != 0) {
    bVar1 = FUN_ram_40042c20(_DAT_ram_3006a200,1);
    bVar1 = bVar1 ^ 1;
  }
  if (((_DAT_ram_3006a1bc != 0) && (iVar2 = FUN_ram_40042c20(_DAT_ram_3006a1bc,1), bVar1 != 0)) &&
     (iVar2 == 0)) {
    _DAT_ram_3006a254 = _DAT_ram_3006a254 + param_1;
    if (_DAT_ram_3006a254 < 1) {
      if (_DAT_ram_3006a254 < 0) {
        _DAT_ram_3006a254 = 0;
      }
    }
    else {
      _DAT_ram_3006a254 = 1;
    }
    FUN_ram_400201ba();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002040a.
 * REA evidence: ev_a0b03fb1f392d3f19f974ad5b3ba3c304bd0d62e0d9f80accb1b665471eb20c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002040a(void)

{
  return DAT_ram_3006a1b0 != '\0' && _DAT_ram_3006a254 == 1;
}


/* NanoCore 1.10, address 0x40020424.
 * REA evidence: ev_8a0dabff4c88aa517374164c604b1d0756338c51e51333e378ca5d60350f07b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020424(void)

{
  if (_DAT_ram_3006a1b4 == 0) {
    return;
  }
  if (DAT_ram_3006a1c0 == '\0') {
    FUN_ram_400164de(&DAT_ram_3006a1c0,0x40,&DAT_ram_40093614);
  }
  if (DAT_ram_3006a214 != '\0') {
    FUN_ram_4004c048();
  }
  FUN_ram_4004c048(&DAT_ram_3006a1c0);
  _DAT_ram_3006a1b8 = FUN_ram_4001de9c();
  FUN_ram_4002002a();
  if (DAT_ram_3006a1b0 != '\0') {
    if (_DAT_ram_3006a286 != 0) {
      FUN_ram_4002c7dc();
      FUN_ram_400200e6();
    }
    FUN_ram_40020128();
    FUN_ram_400201ba();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400204ae.
 * REA evidence: ev_3f6633c652205cd1066b81fa70833924cf7f0f69b726ed55de7308566cdd8939
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400204ae(void)

{
  if (DAT_ram_30046740 != DAT_ram_3004673c) {
    FUN_ram_40029374(DAT_ram_30046740 & 0xffff);
    DAT_ram_3004673c = DAT_ram_30046740;
  }
  return;
}


/* NanoCore 1.10, address 0x400204e4.
 * REA evidence: ev_b7983c31408fdba1afadbe4d523eff25e78a59db71663c409b62c31456470822
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400204e4(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (_DAT_ram_3006a474 == 0) {
    return;
  }
  if (_DAT_ram_3006a348 < 0.0) {
    fVar1 = _DAT_ram_3006a348 - DAT_ram_40092864;
  }
  else {
    fVar1 = _DAT_ram_3006a348 + DAT_ram_40092864;
  }
  iVar4 = (int)fVar1;
  iVar2 = _DAT_ram_3006a350;
  if ((_DAT_ram_3006a350 <= iVar4) && (iVar2 = iVar4, _DAT_ram_3006a34c <= iVar4)) {
    iVar2 = _DAT_ram_3006a34c;
  }
  FUN_ram_40043faa(_DAT_ram_3006a474,iVar2,_DAT_ram_3006a4b8);
  uVar3 = 0xff;
  if (param_1 == 0) {
    uVar3 = 0x4c;
  }
  FUN_ram_40047a34(_DAT_ram_3006a474,uVar3,0);
  return;
}


/* NanoCore 1.10, address 0x40020570.
 * REA evidence: ev_4b14712409677b203f6f376c27047b486913ebf6890c9da14016a8bd72988465
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020570(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  
  cVar1 = DAT_ram_3006a2a8;
  if (DAT_ram_3006a2a8 == '\0') {
    return;
  }
  if (_DAT_ram_3006a358 == 0) {
    return;
  }
  FUN_ram_400204ae();
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_400293ae(&uStack_1c);
  if ((char)uStack_14 == '\0') {
    cVar1 = '\0';
    _DAT_ram_3006a354 = (ulonglong)(uint)(float)_DAT_ram_3006a344;
  }
  else {
    uVar3 = (uint)uStack_18._2_2_;
    _DAT_ram_3006a354 = (ulonglong)(uint)(float)_DAT_ram_3006a344;
    if (5 < ((uVar3 ^ (int)uVar3 >> 0xf) - ((int)uVar3 >> 0xf) & 0xffff)) {
      if ((int)uVar3 < -0x32) {
        uVar3 = 0xffffffce;
      }
      if (0x32 < (int)uVar3) {
        uVar3 = 0x32;
      }
      _DAT_ram_3006a354 =
           (ulonglong)
           (uint)(((float)(int)uVar3 / DAT_ram_40093664) * (float)_DAT_ram_3006a340 +
                 (float)_DAT_ram_3006a344);
    }
  }
  _DAT_ram_3006a348 =
       (ulonglong)
       (uint)(((float)_DAT_ram_3006a354 - (float)_DAT_ram_3006a348) * DAT_ram_40093668 +
             (float)_DAT_ram_3006a348);
  FUN_ram_400204e4(cVar1);
  if ((uStack_14 & 0xff) != 0) {
    if ((byte)uStack_18 < 0xc) {
      pcVar2 = (&PTR_DAT_ram_40093640_ram_40093670)[(char)(byte)uStack_18];
      goto LAB_ram_400205fe;
    }
  }
  pcVar2 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
LAB_ram_400205fe:
  FUN_ram_40017026(_DAT_ram_3006a358,0x3006a35c,pcVar2);
  return;
}


/* NanoCore 1.10, address 0x40020682.
 * REA evidence: ev_f5b3ad813d7d8bd6e9e280a53cf1ae70f078fdf1ab6834593eed09c14b254bb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020682(void)

{
  FUN_ram_400055ea(0x3006a420,8,&DAT_ram_40093380,DAT_ram_30046740);
  FUN_ram_40017026(_DAT_ram_3006a3fc,0x3006a400,0x3006a420);
  if (_DAT_ram_3006a3fc != 0) {
    FUN_ram_40043fc4(_DAT_ram_3006a3fc,0x200007d1);
    FUN_ram_40016fb2(_DAT_ram_3006a3fc,0x3006a400);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400206f0.
 * REA evidence: ev_2bbb1cef7aea164b6162fe90174a86fb7e592575603d31768415f7f0deb96abc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400206f0(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = _DAT_ram_3006a2f8;
  bVar1 = _DAT_ram_3006a2f8 != 0;
  uVar3 = 0;
  if (_DAT_ram_3006a2f8 != 0) {
    uVar3 = FUN_ram_4002c46e();
  }
  FUN_ram_400171b6(_DAT_ram_3006a3fc,0x3006a400,bVar1);
  FUN_ram_400171b6(_DAT_ram_3006a358,0x3006a35c,bVar1);
  FUN_ram_400171ae(0x3006a400,uVar3 & 1);
  FUN_ram_400171ae(0x3006a35c,uVar3 & 1);
  if (((iVar2 != 0) && (_DAT_ram_3006a3fc != 0)) && (_DAT_ram_3006a358 != 0)) {
    FUN_ram_40047a74(_DAT_ram_3006a3fc,iVar2,0);
    iVar5 = 0;
    do {
      iVar4 = *(int *)(iVar5 * 4 + 0x3006a400);
      if (iVar4 != 0) {
        FUN_ram_40047a74(iVar4,iVar2,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    FUN_ram_40043fc4(_DAT_ram_3006a3fc,0x200007d1);
    FUN_ram_40043ffe(_DAT_ram_3006a3fc,uVar6);
    FUN_ram_40045054(_DAT_ram_3006a3fc,_DAT_ram_3006a2fc,0x14,8,0);
    iVar5 = 0;
    FUN_ram_40016fb2(_DAT_ram_3006a3fc,0x3006a400);
    FUN_ram_40047a74(_DAT_ram_3006a358,iVar2,0);
    do {
      iVar4 = *(int *)(iVar5 * 4 + 0x3006a35c);
      if (iVar4 != 0) {
        FUN_ram_40047a74(iVar4,iVar2,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    FUN_ram_40043ffe(_DAT_ram_3006a358,uVar6);
    FUN_ram_40045054(_DAT_ram_3006a358,_DAT_ram_3006a474,0xe,0,6);
    FUN_ram_40016fb2(_DAT_ram_3006a358,0x3006a35c);
    FUN_ram_40020682();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002085e.
 * REA evidence: ev_1f7060441a406c5a78be2bfb9fb574e7cd1d8d9f4dfa953fc6c07919e5a03bc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002085e(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3006a2f8;
  if (_DAT_ram_3006a2f8 != 0) {
    _DAT_ram_3006a2f8 = 0;
    FUN_ram_400206f0();
    FUN_ram_4005924c(iVar1);
  }
  _DAT_ram_3006a2f8 = FUN_ram_40017342(s_font_tuner_ram_400931f4,s_font_default_ram_400931d8);
  FUN_ram_400206f0();
  return;
}


/* NanoCore 1.10, address 0x400208a4.
 * REA evidence: ev_cfcd0909656fc0dbb7dd2cd8079ade122c91c27ee4bf4e67d4f94bf079e480be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400208a4(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x3006a3bc;
  if (DAT_ram_30046744 == '\0') {
    uVar1 = 0x3006a37c;
  }
  FUN_ram_4001670a(_DAT_ram_3006a42c,uVar1);
  return;
}


/* NanoCore 1.10, address 0x400208ca.
 * REA evidence: ev_aa6b242d1c57dcd14d353fd2dfc21eaab501184719222cf1eff93dc1944058b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400208ca(void)

{
  int iVar1;
  int iVar2;
  uint uStack_18;
  uint auStack_14 [2];
  
  uStack_18 = FUN_ram_4001425e();
  iVar1 = FUN_ram_4002c5cc(1);
  iVar2 = FUN_ram_4002c5ea(1,auStack_14);
  if (iVar2 != 0) {
    uStack_18 = auStack_14[0];
  }
  uStack_18 = uStack_18 & 0xffffff;
  if (_DAT_ram_3006a2f0 != 0) {
    FUN_ram_40047968(_DAT_ram_3006a2f0,uStack_18,0);
    FUN_ram_40047986(_DAT_ram_3006a2f0,0xff,0);
  }
  if (_DAT_ram_3006a2ac != 0) {
    if (iVar1 == 0) {
      FUN_ram_40043064(_DAT_ram_3006a2ac,1);
    }
    else {
      FUN_ram_4001670a(_DAT_ram_3006a2ac,0x3006a2b0);
    }
  }
  FUN_ram_4001670a(_DAT_ram_3006a2fc,0x3006a300);
  FUN_ram_400208a4();
  FUN_ram_4001670a(_DAT_ram_3006a430,0x3006a434);
  FUN_ram_4001670a(_DAT_ram_3006a474,0x3006a478);
  return;
}


/* NanoCore 1.10, address 0x4002097e.
 * REA evidence: ev_6d377566efc20acb627cd7bb4aae172a7ac253930379d7e7ea4bd8e0ee9433af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002097e(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 uStack_24;
  
  if ((((_DAT_ram_3006a428 != 1) || (_DAT_ram_3006a42c == 0)) ||
      (iVar4 = FUN_ram_40042c20(_DAT_ram_3006a42c,1), iVar2 = _DAT_ram_3006a42c, iVar4 != 0)) &&
     ((_DAT_ram_3006a3fc == 0 ||
      (iVar4 = FUN_ram_40042c20(_DAT_ram_3006a3fc,1), iVar2 = _DAT_ram_3006a3fc, iVar4 != 0)))) {
    iVar2 = 0;
  }
  uVar1 = (undefined1)((uint)uStack_24 >> 0x18);
  if ((DAT_ram_3006a2f4 == '\0') || (_DAT_ram_3006a428 != 0)) {
    uVar3 = FUN_ram_400164ec();
    uStack_24 = CONCAT13(uVar1,uVar3);
  }
  else {
    uStack_24 = CONCAT13(uVar1,0xff0000);
  }
  if (_DAT_ram_3006a3fc != 0) {
    FUN_ram_40047a44(_DAT_ram_3006a3fc,uStack_24,0);
  }
  FUN_ram_400175d2(iVar2);
  uVar3 = FUN_ram_40016538(DAT_ram_3006a2f4);
  uStack_24 = CONCAT13(uStack_24._3_1_,uVar3);
  FUN_ram_4001775e(uStack_24);
  return;
}


/* NanoCore 1.10, address 0x40020a46.
 * REA evidence: ev_fbeb14c8fde99d5d05479ce9b0827fccd6dacf18e0944a9d27d1da4ef14bbf66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020a46(void)

{
  _DAT_ram_3006a348 = (ulonglong)(uint)(float)_DAT_ram_3006a344;
  _DAT_ram_3006a354 = _DAT_ram_3006a348;
  FUN_ram_400204e4(0);
  return;
}


/* NanoCore 1.10, address 0x40020a6c.
 * REA evidence: ev_d6a6084685b73db2aa3190649b31c27be21546279bf9ed88a6f32a357a3de2d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020a6c(undefined4 param_1)

{
  undefined4 uVar1;
  
  DAT_ram_3006a2a8 = 0;
  DAT_ram_3006a2f4 = 0;
  DAT_ram_30046744 = 1;
  _DAT_ram_3006a428 = 0;
  _DAT_ram_3006a2f8 = 0;
  _DAT_ram_3006a2ac = 0;
  _DAT_ram_3006a4b8 = 0x91;
  _DAT_ram_3006a344 = 0x8e;
  _DAT_ram_3006a340 = 0x56;
  _DAT_ram_3006a350 = 0x38;
  _DAT_ram_3006a348 = (ulonglong)_DAT_ram_4009366c;
  _DAT_ram_3006a354 = _DAT_ram_3006a348;
  FUN_ram_400164de(0x3006a2b0,0x40,s_bg_tuner_ram_4009361c);
  FUN_ram_400164de(0x3006a300,0x40,s_tuner_ram_40093260);
  FUN_ram_400164de(0x3006a3bc,0x40,s_distortion_ram_4009385c + 8);
  FUN_ram_400164de(0x3006a37c,0x40,s_Fbat_off_ram_400936eb + 5);
  FUN_ram_400164de(0x3006a434,0x40,s_tuner_slot1_ram_40093628);
  FUN_ram_400164de(0x3006a478,0x40,s_tuner_slot2_ram_40093634);
  _DAT_ram_3006a2f0 = FUN_ram_40042b1a(param_1);
  FUN_ram_40044038(_DAT_ram_3006a2f0,0x140,0xf0);
  FUN_ram_40047986(_DAT_ram_3006a2f0,0xff,0);
  FUN_ram_400479c4(_DAT_ram_3006a2f0,0,0);
  FUN_ram_40043064(_DAT_ram_3006a2f0,1);
  _DAT_ram_3006a2ac = FUN_ram_4005600c(_DAT_ram_3006a2f0);
  FUN_ram_400565de(_DAT_ram_3006a2ac,0xb);
  FUN_ram_40043faa(_DAT_ram_3006a2ac,0,0);
  FUN_ram_40044038(_DAT_ram_3006a2ac,0x140,0xf0);
  FUN_ram_40043064(_DAT_ram_3006a2ac,1);
  FUN_ram_40042b3a(_DAT_ram_3006a2ac,0x10);
  FUN_ram_40042b3a(_DAT_ram_3006a2ac,2);
  _DAT_ram_3006a2fc = FUN_ram_4005600c(_DAT_ram_3006a2f0);
  FUN_ram_400565de(_DAT_ram_3006a2fc,0xb);
  FUN_ram_40043faa(_DAT_ram_3006a2fc,8,8);
  FUN_ram_40044038(_DAT_ram_3006a2fc,0x26,0x26);
  _DAT_ram_3006a42c = FUN_ram_4005600c(_DAT_ram_3006a2f0);
  FUN_ram_400565de(_DAT_ram_3006a42c,0xb);
  FUN_ram_40043faa(_DAT_ram_3006a42c,0x10b,0xf);
  FUN_ram_40044038(_DAT_ram_3006a42c,0x2d,0x17);
  _DAT_ram_3006a3fc = FUN_ram_40056c3a(_DAT_ram_3006a2f0);
  FUN_ram_400572fa(_DAT_ram_3006a3fc,1);
  FUN_ram_40044038(_DAT_ram_3006a3fc,0x200007d1);
  FUN_ram_40045054(_DAT_ram_3006a3fc,_DAT_ram_3006a2fc,0x14,8,0);
  FUN_ram_40016e9e(_DAT_ram_3006a2f0,_DAT_ram_3006a3fc,0x3006a400,1);
  _DAT_ram_3006a430 = FUN_ram_4005600c(_DAT_ram_3006a2f0);
  FUN_ram_400565de(_DAT_ram_3006a430,0xb);
  FUN_ram_40043faa(_DAT_ram_3006a430,0x32,0x3c);
  FUN_ram_40044038(_DAT_ram_3006a430,0xdc,0x50);
  _DAT_ram_3006a474 = FUN_ram_4005600c(_DAT_ram_3006a2f0);
  FUN_ram_400565de(_DAT_ram_3006a474,0xb);
  FUN_ram_40043faa(_DAT_ram_3006a474,0x8e,0x91);
  FUN_ram_40044038(_DAT_ram_3006a474,0x23,0x23);
  uVar1 = FUN_ram_40056c3a(_DAT_ram_3006a2f0);
  _DAT_ram_3006a358 = uVar1;
  FUN_ram_400572fa(uVar1,1);
  FUN_ram_40044038(_DAT_ram_3006a358,0x28,0x1c);
  FUN_ram_40045054(_DAT_ram_3006a358,_DAT_ram_3006a474,0xe,0,6);
  FUN_ram_40016e9e(_DAT_ram_3006a2f0,_DAT_ram_3006a358,0x3006a35c,2);
  FUN_ram_40017026(_DAT_ram_3006a358,0x3006a35c,s_ep__02x_clear_halt_ram_40092960 + 0x14);
  FUN_ram_4002085e();
  FUN_ram_400208ca();
  FUN_ram_40020a46();
  if (_DAT_ram_3006a4bc == 0) {
    _DAT_ram_3006a4bc = FUN_ram_4004b642(FUN_ram_40020570,0x21,0);
  }
  return;
}


/* NanoCore 1.10, address 0x40020db8.
 * REA evidence: ev_4bbfed66fd4c0b73aac770809025f8f7e9b6d350b6a0aa919014fb191aa5846f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020db8(void)

{
  if (_DAT_ram_3006a2f0 != 0) {
    DAT_ram_3006a2a8 = 1;
    DAT_ram_3006a2f4 = 0;
    _DAT_ram_3006a428 = 0;
    DAT_ram_3004673c = 0xffffffff;
    FUN_ram_40020682();
    FUN_ram_400208ca();
    FUN_ram_40020a46();
    if (_DAT_ram_3006a2f0 != 0) {
      FUN_ram_40042b3a(_DAT_ram_3006a2f0,1);
    }
    FUN_ram_4002097e();
    FUN_ram_4000d9f6(1);
    FUN_ram_4000da28(DAT_ram_30046744);
    FUN_ram_40029344(1);
    FUN_ram_400204ae();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40020e32.
 * REA evidence: ev_04cebf3a5a3cbd193cb798f3921c7bf4f64c38e7a2bbfbd7f92bc0df61b2b319
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020e32(void)

{
  FUN_ram_40029344(0);
  FUN_ram_4000d9f6(0);
  DAT_ram_3006a2a8 = 0;
  FUN_ram_40020a46();
  if (_DAT_ram_3006a2f0 != 0) {
    FUN_ram_40043064(_DAT_ram_3006a2f0,1);
  }
  FUN_ram_400175d2(0);
  return;
}


/* NanoCore 1.10, address 0x40020e68.
 * REA evidence: ev_40f231771a2916d0a0043dcb4942fd0cff6e936e48509ee834d835d4d6f66ed0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40020e68(void)

{
  return DAT_ram_3006a2a8;
}


/* NanoCore 1.10, address 0x40020e72.
 * REA evidence: ev_3310bf96797b50a1122a146de2a76fe2bef15687a43d56bc9351af2ae1b98d3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020e72(int param_1)

{
  if ((DAT_ram_3006a2a8 != '\0') && (param_1 != 0)) {
    if (DAT_ram_3006a2f4 != '\0') {
      if (_DAT_ram_3006a428 == 0) {
        param_1 = param_1 + DAT_ram_30046740;
        if (0x1e0 < param_1) {
          param_1 = 0x1e0;
        }
        if (param_1 < 400) {
          param_1 = 400;
        }
        if (DAT_ram_30046740 != param_1) {
          DAT_ram_30046740 = param_1;
          FUN_ram_40020682();
          FUN_ram_400204ae();
          return;
        }
      }
      else if (_DAT_ram_3006a428 == 1) {
        if ((bool)DAT_ram_30046744 != 0 < param_1) {
          DAT_ram_30046744 = 0 < param_1;
          FUN_ram_4000da28();
          FUN_ram_400208a4();
          return;
        }
      }
      return;
    }
    param_1 = param_1 + _DAT_ram_3006a428;
    if (param_1 < 1) {
      if (param_1 < 0) {
        param_1 = 0;
      }
    }
    else {
      param_1 = 1;
    }
    if (param_1 != _DAT_ram_3006a428) {
      _DAT_ram_3006a428 = param_1;
      FUN_ram_4002097e();
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40020f1a.
 * REA evidence: ev_22098776d30e4cef42669974b4e8dbea5d56a0506877961b4d3de3ac08fe4031
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40020f1a(void)

{
  if (DAT_ram_3006a2a8 != '\0') {
    DAT_ram_3006a2f4 = DAT_ram_3006a2f4 == '\0';
    FUN_ram_4002097e();
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40020f56.
 * REA evidence: ev_8f73d39b2f7780844570727401e3369b16c33b83400318964b4440bce2fb69a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020f56(void)

{
  if (_DAT_ram_3006a2f0 == 0) {
    return;
  }
  FUN_ram_4004c048(0x3006a300);
  FUN_ram_4004c048(0x3006a3bc);
  FUN_ram_4004c048(0x3006a37c);
  FUN_ram_4004c048(0x3006a434);
  FUN_ram_4004c048(0x3006a478);
  FUN_ram_4004c048(0x3006a2b0);
  FUN_ram_4002085e();
  FUN_ram_400208ca();
  if (DAT_ram_3006a2a8 != '\0') {
    FUN_ram_4002097e();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40020fce.
 * REA evidence: ev_f697cd973cd94d879c58dae42bf20f93c4dbf293e5bd910ba83331676f750091
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40020fce(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.10, address 0x40020fec.
 * REA evidence: ev_4812731edbdd2e3a0f1a3272d02a204c8e97afc9a9678e1a411be0a8b59224a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40020fec(void)

{
  int iVar1;
  uint uVar2;
  int iStack_44;
  uint uStack_40;
  undefined1 auStack_38 [4];
  short sStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  char cStack_22;
  char cStack_21;
  
  DAT_ram_3004674c = 0xff0000;
  DAT_ram_30046754 = 3;
  DAT_ram_30046752 = 4;
  DAT_ram_30046748 = 0xffffff;
  DAT_ram_30046750 = 2;
  iVar1 = FUN_ram_4002ba66(&DAT_ram_400936a0,&iStack_44);
  if ((((iVar1 == 0) && (0x17 < uStack_40)) &&
      (iVar1 = FUN_ram_4002b9e8(iStack_44 + 0x10,auStack_38,0x18), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_40020fce(auStack_38), iVar1 == 0x314c4553 && (sStack_34 == 1)))) {
    if (cStack_22 == '\0' && cStack_21 == '\0') {
      uVar2 = FUN_ram_40020fce(auStack_30);
      DAT_ram_30046748 = uVar2 & 0xffffff;
      uVar2 = FUN_ram_40020fce(auStack_2c);
      DAT_ram_3004674c = uVar2 & 0xffffff;
      DAT_ram_30046754 = uStack_28;
      DAT_ram_30046752 = uStack_26;
      DAT_ram_30046750 = uStack_24;
    }
  }
  return;
}


