/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40017000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40017026.
 * REA evidence: ev_b57d30f2b500d37fbd68822dbd1518dd0df7b16bf5aaae83d1c9f29aaa55e69a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017026(int param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1 != 0) {
    uVar2 = FUN_ram_400164ec();
    uStack_28 = CONCAT22(CONCAT11(uStack_28._3_1_,(char)((uint)uVar2 >> 0x10)),(short)uVar2);
    FUN_ram_40047a44(param_1,uStack_28,0);
    if (param_3 == (char *)0x0) {
      param_3 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
    }
    FUN_ram_4005727c(param_1,param_3);
    iVar1 = 0;
    do {
      if ((param_2 != 0) && (iVar3 = *(int *)(param_2 + iVar1 * 4), iVar3 != 0)) {
        uVar2 = FUN_ram_40016512();
        uStack_24 = CONCAT22(CONCAT11(uStack_24._3_1_,(char)((uint)uVar2 >> 0x10)),(short)uVar2);
        FUN_ram_40047a44(iVar3,uStack_24,0);
        FUN_ram_4005727c(*(undefined4 *)(param_2 + iVar1 * 4),param_3);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400170c4.
 * REA evidence: ev_f140377d2ad7f129a3c3cc9f5ec1d3a89f3600df2ebceb3bbe70ef97b5961738
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400170c4(void)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  if (_DAT_ram_30068fc8 != 0) {
    if (_DAT_ram_30069014 < 0) {
      _DAT_ram_30069014 = 0;
    }
    else if (0x3f < _DAT_ram_30069014) {
      _DAT_ram_30069014 = 0x3f;
    }
    if ((DAT_ram_30068ffe == '\0') || (DAT_ram_30068ffd == '\0')) {
      FUN_ram_400055ea(auStack_20,0x10,s__02d__s_ram_400931d0,_DAT_ram_30069014 + 1,
                       &DAT_ram_30068fcc);
    }
    else {
      FUN_ram_400055ea(auStack_20,0x10,s_REPLACE_ram_400931c8,_DAT_ram_30069014 + 1);
    }
    if ((DAT_ram_30069010 == '\0') || (iVar1 = FUN_ram_4000522c(auStack_20,0x30069000), iVar1 != 0))
    {
      memcpy((void *)0x30069000,auStack_20,0x10);
      DAT_ram_30069010 = '\x01';
      FUN_ram_40017026(_DAT_ram_30068fc8,0x30068fd8,0x30069000);
      if (_DAT_ram_30068fc8 != 0) {
        FUN_ram_40015efc();
      }
      FUN_ram_40016fb2(_DAT_ram_30068fc8,0x30068fd8);
    }
    FUN_ram_40016566();
  }
  return;
}


/* NanoCore 1.10, address 0x400171ae.
 * REA evidence: ev_e8b8bc593c07cb3a71ae98eedff3263adcec23c204f24967ccc09320929ecd2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400171ae(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40016060();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400171b6.
 * REA evidence: ev_b735a767e0410a5bc7f4a218b149e98589de37e0d59437078fca62bc73ca9fa4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400171b6(int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    return;
  }
  if (param_3 == 0) {
    FUN_ram_40043064(param_1,1);
  }
  else {
    FUN_ram_40042b3a();
  }
  if (param_2 != 0) {
    FUN_ram_400171ae(param_2,param_3);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400171f0.
 * REA evidence: ev_36ea4f391a2c7e65511b7a06197396fbf0672e33decb6876ead4e9d4ca902851
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400171f0(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  
  ppuVar1 = _DAT_ram_30068f80;
  uVar5 = 0;
  if (_DAT_ram_30068f80 != (undefined **)0x0) {
    uVar5 = FUN_ram_4002c4a6();
  }
  FUN_ram_400171b6(_DAT_ram_30068fc8,0,ppuVar1 != (undefined **)0x0);
  FUN_ram_40016060(0x30068fd8,uVar5 & 1);
  if (_DAT_ram_300687a8 != 0) {
    ppuVar4 = &PTR_LAB_ram_4001280e_ram_40092d7c;
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar4 = ppuVar1;
    }
    FUN_ram_40047a74(_DAT_ram_300687a8,ppuVar4,0);
  }
  if ((ppuVar1 != (undefined **)0x0) && (_DAT_ram_30068fc8 != 0)) {
    FUN_ram_40047a74(_DAT_ram_30068fc8,ppuVar1,0);
    iVar2 = 0;
    do {
      iVar3 = *(int *)(iVar2 * 4 + 0x30068fd8);
      if (iVar3 != 0) {
        FUN_ram_40047a74(iVar3,ppuVar1,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    DAT_ram_30069010 = 0;
    FUN_ram_400170c4();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400172a2.
 * REA evidence: ev_76db62b70438b9f99c70fae5dc758efcf16bdcd5286d321149d720d945f42e58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400172a2(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_30068f78 != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_30068f78 = 0;
  }
  DAT_ram_30068f74 = 1;
  uVar1 = FUN_ram_4002c4a6();
  FUN_ram_400171b6(_DAT_ram_30068fc8,0,1);
  FUN_ram_40016060(0x30068fd8,uVar1);
  return;
}


/* NanoCore 1.10, address 0x400172f2.
 * REA evidence: ev_38d6caf2a299de3d6dfdaed1ec1088373c3790b70ce1fb1cb863254c1f0483f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400172f2(void)

{
  uint uVar1;
  
  DAT_ram_30068f74 = DAT_ram_30068f74 ^ 1;
  uVar1 = 0;
  if (DAT_ram_30068f74 != 0) {
    uVar1 = FUN_ram_4002c4a6();
  }
  FUN_ram_400171b6(_DAT_ram_30068fc8,0,DAT_ram_30068f74);
  FUN_ram_40016060(0x30068fd8,uVar1 & 1);
  return;
}


/* NanoCore 1.10, address 0x40017342.
 * REA evidence: ev_e1d06804e33a4f32df19d5836ef1b109e1cbeb0d9dd84ed9e55c73b1e94bfd09
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40017342(char *param_1,char *param_2)

{
  int iVar1;
  undefined1 auStack_50 [68];
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_ram_400164de(auStack_50,0x40,param_1);
    iVar1 = FUN_ram_400594a8(auStack_50);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     ((param_1 != (char *)0x0 && (iVar1 = FUN_ram_4000522c(param_1,param_2), iVar1 == 0)))) {
    iVar1 = 0;
  }
  else {
    FUN_ram_400164de(auStack_50,0x40,param_2);
    iVar1 = FUN_ram_400594a8(auStack_50);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400173a2.
 * REA evidence: ev_4687b9aa7924a73c58a465dda152a709262859ca2ec77290413c0210e5a4ff4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400173a2(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_30068f80;
  if (_DAT_ram_30068f80 != 0) {
    _DAT_ram_30068f80 = 0;
    FUN_ram_400171f0();
    FUN_ram_4005924c(iVar1);
  }
  _DAT_ram_30068f80 = FUN_ram_40017342(s_font_preset_ram_400931e8,s_font_default_ram_400931d8);
  FUN_ram_400171f0();
  return;
}


/* NanoCore 1.10, address 0x400173e8.
 * REA evidence: ev_839311abd42782259f4bda361220be830f211d4da47661713e55cae3b1af15c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400173e8(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_30069110;
  if (_DAT_ram_30069110 != 0) {
    _DAT_ram_30069110 = 0;
    FUN_ram_4001635c();
    FUN_ram_4005924c(iVar1);
  }
  _DAT_ram_30069110 = FUN_ram_40017342(s_font_tuner_ram_400931f4,s_font_default_ram_400931d8);
  FUN_ram_4001635c();
  return;
}


/* NanoCore 1.10, address 0x4001742e.
 * REA evidence: ev_9da43790ae69e21b2e459aed609aedd1c3142aba7cc227d01ca49dc71e40148f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4001742e(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 8;
  }
  return &DAT_ram_300687d8;
}


/* NanoCore 1.10, address 0x4001743e.
 * REA evidence: ev_4da610837e948cd8870292b9c9672ffa21ae7209defddeb0341e1f9b13b79f03
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001743e(undefined4 param_1)

{
  FUN_ram_40015be8();
  _DAT_ram_30069014 = param_1;
  FUN_ram_400170c4();
  return;
}


/* NanoCore 1.10, address 0x4001745a.
 * REA evidence: ev_5f4ffc09d2b7aad2c95a175262c2ea6e20a790cb22489e0e782e82634f11ca7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001745a(uint param_1)

{
  char cVar1;
  char acStack_11 [9];
  
  cVar1 = DAT_ram_300466f4;
  acStack_11[0] = (char)param_1;
  if (100 < param_1) {
    acStack_11[0] = 'd';
  }
  DAT_ram_300466f4 = acStack_11[0];
  FUN_ram_4000d9d8();
  FUN_ram_40015c58();
  if (_DAT_ram_30068f84 != 0) {
    FUN_ram_40044572();
  }
  if (acStack_11[0] != cVar1) {
    FUN_ram_400137c6(0x69,acStack_11,1);
  }
  return;
}


/* NanoCore 1.10, address 0x400174b8.
 * REA evidence: ev_59ad12d405837ffa685666010b13183ee75a6f62127e93135da143474ff7c1dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_400174b8(void)

{
  return DAT_ram_300466f4;
}


/* NanoCore 1.10, address 0x400174c2.
 * REA evidence: ev_02f57e288ea0bd17f468787b16317723144a6883eb07e8f220911901369444d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400174c2(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400062bc();
    _DAT_ram_30068f30 = _DAT_ram_30068f30 + param_1;
    if (_DAT_ram_30068f30 < -0x80) {
      _DAT_ram_30068f30 = -0x80;
    }
    if (0x80 < _DAT_ram_30068f30) {
      _DAT_ram_30068f30 = 0x80;
    }
    FUN_ram_400062de();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40017502.
 * REA evidence: ev_692301c53fa6d2f5e4a32fa008d95b5c861ff2db887dcf30bc08b19012cf30c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017502(void)

{
  FUN_ram_4001609e();
  FUN_ram_400170c4();
  return;
}


/* NanoCore 1.10, address 0x40017512.
 * REA evidence: ev_c15228530809479a2fbb78438689eff48de1f8403324877e04a3bd61423b6824
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017512(uint param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_3c [16];
  undefined1 uStack_2c;
  char acStack_28 [8];
  undefined1 auStack_20 [28];
  
  if ((int)param_1 < 0x40) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x3f;
  }
  iVar1 = FUN_ram_40031558(param_1 & 0xff,acStack_28);
  if ((iVar1 == 0) && (acStack_28[0] != '\0')) {
    memcpy(auStack_3c,auStack_20,0x10);
    puVar2 = auStack_3c;
    uStack_2c = 0;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  FUN_ram_40017502(puVar2);
  return;
}


/* NanoCore 1.10, address 0x4001755a.
 * REA evidence: ev_1c0fef7443f6c7a7a0b15e0eb53b63e83a17c369acd3eff93c49aff0b85847c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001755a(void)

{
  if (DAT_ram_30068ffc != '\0') {
    DAT_ram_30068ffc = '\0';
    if (DAT_ram_30068f7c != '\0') {
      FUN_ram_40017512(_DAT_ram_30069014);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40017584.
 * REA evidence: ev_10c23b44cb8aacc74ddf85509534c361a049dc2616bb9742a732fb07af82bf92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017584(void *param_1,int param_2)

{
  size_t __n;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    __n = param_2 - 1;
    if (8 < __n) {
      __n = 8;
    }
    memcpy(param_1,&DAT_ram_30068fcc,__n);
    *(undefined1 *)((int)param_1 + __n) = 0;
    while ((__n != 0 && (__n = __n - 1, *(char *)((int)param_1 + __n) == ' '))) {
      *(undefined1 *)((int)param_1 + __n) = 0;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400175d2.
 * REA evidence: ev_aa1536037ed8b31774fd50f1ddfc15cf69d2503bba52811432eb54784fa5c62a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400175d2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar2 = _DAT_ram_30069078;
  if (_DAT_ram_3006906c != 0) {
    iVar2 = FUN_ram_40042c20(_DAT_ram_3006906c,1);
    if ((((_DAT_ram_30068fc8 == param_1) || (DAT_ram_30068ffe != '\0')) ||
        ((_DAT_ram_30069020 != 0 && (iVar3 = FUN_ram_40042c20(_DAT_ram_30069020,1), iVar3 == 0))))
       || (param_1 == 0)) {
      if (iVar2 == 0) {
        FUN_ram_40043064(_DAT_ram_3006906c,1);
      }
      DAT_ram_3006907c = '\0';
      _DAT_ram_30069078 = 0;
      iVar2 = _DAT_ram_30069078;
    }
    else {
      iVar3 = FUN_ram_40021104();
      FUN_ram_400440e0(param_1,&local_50);
      iVar4 = iStack_4c - iVar3;
      iVar5 = local_50 - iVar3;
      iVar1 = (iStack_48 - local_50) + 1 + iVar3 * 2;
      iVar3 = (iStack_44 - iStack_4c) + 1 + iVar3 * 2;
      if (((((DAT_ram_3006907c == '\0') || (_DAT_ram_30069084 != iVar5)) ||
           (_DAT_ram_30069088 != iVar4)) &&
          (FUN_ram_40043faa(_DAT_ram_3006906c,iVar5,iVar4), _DAT_ram_30069084 = iVar5,
          _DAT_ram_30069088 = iVar4, DAT_ram_3006907c == '\0')) ||
         ((_DAT_ram_30069080 != iVar1 || (_DAT_ram_30069074 != iVar3)))) {
        FUN_ram_40044038(_DAT_ram_3006906c,iVar1,iVar3);
        _DAT_ram_30069074 = iVar3;
        _DAT_ram_30069080 = iVar1;
      }
      DAT_ram_3006907c = '\x01';
      if (iVar2 != 0) {
        FUN_ram_40042b3a(_DAT_ram_3006906c,1);
      }
      iVar3 = 0;
      if (_DAT_ram_30069078 != 0) {
        iVar3 = FUN_ram_40047b04(_DAT_ram_30069078);
      }
      iVar1 = FUN_ram_40047b04(param_1);
      if ((iVar2 != 0) || (iVar2 = param_1, iVar3 != iVar1)) {
        FUN_ram_40015c8e(_DAT_ram_3006906c);
        iVar2 = param_1;
      }
    }
  }
  _DAT_ram_30069078 = iVar2;
  return;
}


/* NanoCore 1.10, address 0x4001775e.
 * REA evidence: ev_67cad011f8358419de2c87b7f700ccf8d4cb8f0da8ea55192e4a5161dbbd4b40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001775e(uint param_1)

{
  if ((_DAT_ram_3006906c != 0) &&
     ((DAT_ram_30069073 == '\0' || ((param_1 & 0xffffff) != (uint)_DAT_ram_30069070)))) {
    _DAT_ram_30069070 = (uint3)param_1;
    DAT_ram_30069073 = 1;
    FUN_ram_40047994(_DAT_ram_3006906c,param_1,0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400177d2.
 * REA evidence: ev_a1ea6f5c31e15b3ecfda848be77f22e5db677294d6c01a6d6b7c2e738bea2f1d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400177d2(void)

{
  undefined3 uVar1;
  undefined4 uVar2;
  
  if (DAT_ram_300466e7 == '\0') {
    return;
  }
  FUN_ram_400175d2(_DAT_ram_3006908c);
  if (((DAT_ram_30068f7c == '\0') && (DAT_ram_30068ffe == '\0')) && (DAT_ram_30069018 == '\0')) {
    uVar2 = 0;
    if (DAT_ram_30069120 == '\0') goto LAB_ram_40017818;
  }
  uVar2 = 1;
LAB_ram_40017818:
  uVar1 = FUN_ram_40016538(uVar2);
  FUN_ram_4001775e(uVar1);
  return;
}


/* NanoCore 1.10, address 0x4001783c.
 * REA evidence: ev_c045dd6397db9173fae7e508bf6546bd8a37500b13e55cffc8d437429b8bd787
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001783c(void)

{
  if (DAT_ram_300466e7 != '\0') {
    FUN_ram_4001798a();
  }
  FUN_ram_400177d2();
  return;
}


/* NanoCore 1.10, address 0x40017854.
 * REA evidence: ev_04f8fb3084c8104180116201e539d2f5dd47e603d2c653ad859bb1672f93cd99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017854(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      iVar3 = iVar2;
      if (*(int *)(&DAT_ram_300687d8 + iVar2 * 4) == iVar1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar1;
    } while (iVar2 != 8);
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    FUN_ram_40015e6c(*(undefined4 *)(iVar2 + 0x300687b8),iVar3);
    if (iVar1 == 8) {
      FUN_ram_40015aee();
      if (DAT_ram_300466e7 == '\0') {
        return;
      }
      FUN_ram_4001783c();
      return;
    }
  } while( true );
}


/* NanoCore 1.10, address 0x400178c0.
 * REA evidence: ev_af501b5187d14534bda6dcc3bb9bb43da8d6172c5ed1f56eca9b7810f7220304
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400178c0(int param_1,uint param_2)

{
  int iVar1;
  uint uStack_1c;
  byte local_18 [12];
  
  uStack_1c = 0;
  if ((param_1 != 0) && (7 < param_2)) {
    FUN_ram_40022d0e();
    FUN_ram_40022cde(local_18,8,&uStack_1c);
    if (7 < uStack_1c) {
      iVar1 = 0;
      do {
        *(uint *)(&DAT_ram_300687d8 + iVar1 * 4) = (uint)local_18[iVar1];
        iVar1 = iVar1 + 1;
      } while (iVar1 != 8);
      FUN_ram_40017854();
      FUN_ram_40019db0();
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40017914.
 * REA evidence: ev_29f5317e173429b7f60fa16e18ca636d0debcef20727e69d56a3718061da978d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017914(void)

{
  int iVar1;
  byte abStack_11 [13];
  
  iVar1 = FUN_ram_40014750(abStack_11);
  if (iVar1 == 0) {
    _DAT_ram_30069014 = (uint)abStack_11[0];
    FUN_ram_40017512();
  }
  FUN_ram_40016566();
  FUN_ram_4001783c();
  return;
}


/* NanoCore 1.10, address 0x40017940.
 * REA evidence: ev_f0ac18201f5a975c9edc4b675faa1518b35378bbed05b1a9155067562f4145ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017940(void)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_11 [9];
  
  uVar1 = DAT_ram_300466ec;
  FUN_ram_40015be8();
  if (-1 < (int)uVar1) {
    FUN_ram_4001755a();
    iVar2 = FUN_ram_400146f2(uVar1 & 0xff);
    if (iVar2 != 0) {
      FUN_ram_40017914();
      return;
    }
    auStack_11[0] = (undefined1)uVar1;
    FUN_ram_400137c6(0x60,auStack_11,1);
  }
  return;
}


/* NanoCore 1.10, address 0x4001798a.
 * REA evidence: ev_d5c4441f4748f52aa1bf027b645b68877017918467efe1eb10691e9213c15727
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001798a(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = _DAT_ram_30069068;
  if (_DAT_ram_30069068 == 3) {
    piVar2 = (int *)&DAT_ram_30068fc8;
LAB_ram_400179a8:
    if ((*piVar2 == 0) || (iVar3 = FUN_ram_40042c20(*piVar2,1), iVar3 != 0)) {
LAB_ram_400179ac:
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
  }
  else {
    piVar2 = (int *)&DAT_ram_30068f84;
    if (_DAT_ram_30069068 == 4) goto LAB_ram_400179a8;
    if (((0xd < _DAT_ram_30069068) || (*(int *)(&DAT_ram_30068c0c + _DAT_ram_30069068 * 4) == 0)) ||
       (iVar3 = FUN_ram_40042c20(*(int *)(&DAT_ram_30068c0c + _DAT_ram_30069068 * 4),1), iVar3 != 0)
       ) goto LAB_ram_400179ac;
    iVar3 = *(int *)(&DAT_ram_30068c0c + uVar1 * 4);
  }
  if (_DAT_ram_3006908c != iVar3) {
    _DAT_ram_3006908c = iVar3;
  }
  if (uVar1 == 3) {
LAB_ram_400179c4:
    if (DAT_ram_30069018 != '\0') {
      DAT_ram_30069018 = '\0';
    }
    if (uVar1 == 5) goto LAB_ram_40017a3c;
  }
  else {
    if (DAT_ram_30068f7c != '\0') {
      FUN_ram_40017940();
      DAT_ram_30068f7c = '\0';
      FUN_ram_40016566();
    }
    if (uVar1 != 4) goto LAB_ram_400179c4;
  }
  if (DAT_ram_30069120 != '\0') {
    DAT_ram_30069120 = '\0';
  }
LAB_ram_40017a3c:
  FUN_ram_40016566();
  return;
}


/* NanoCore 1.10, address 0x40017a5c.
 * REA evidence: ev_5811c93474f7a079fb47362dc1882a3d7401b3d8a1f66a80a1703f18d839eea2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017a5c(void)

{
  int iVar1;
  byte abStack_11 [13];
  
  abStack_11[0] = 0;
  FUN_ram_40017940();
  iVar1 = FUN_ram_40031368(abStack_11);
  if (iVar1 == 0) {
    if (0x3f < abStack_11[0]) {
      abStack_11[0] = 0x3f;
    }
  }
  else {
    abStack_11[0] = 0;
  }
  iVar1 = FUN_ram_400148a2(abStack_11[0]);
  if (iVar1 == 0) {
    FUN_ram_400162e4();
  }
  return;
}


/* NanoCore 1.10, address 0x40017af0.
 * REA evidence: ev_e782ac87e0081870ce6bfad961d2a3decdae5b379ac8fd8cf53fef11cfbba614
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017af0(void)

{
  if (_DAT_ram_30069064 != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_30069064 = 0;
  }
  if (_DAT_ram_30069020 != 0) {
    FUN_ram_40043064(_DAT_ram_30069020,1);
  }
  if (DAT_ram_300466e7 != '\0') {
    FUN_ram_4001783c();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40017b36.
 * REA evidence: ev_3d40ba24848a19a0d978d15246c16be04319ce459d0b44a44da7e05008ceeb7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017b36(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_ram_300466e7 = (undefined1)param_1;
  iVar1 = 0;
  do {
    iVar2 = *(int *)(&DAT_ram_30068c0c + iVar1 * 4);
    if (iVar2 != 0) {
      if ((param_1 == 0) || (DAT_ram_300686d0 == '\0')) {
        FUN_ram_40043064(iVar2,1);
      }
      else {
        FUN_ram_400167c6(iVar2,iVar1);
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  FUN_ram_40016c3c(param_1);
  FUN_ram_40016d7a(param_1);
  if (param_1 != 0) {
    FUN_ram_40027cfa(0x30068c8c);
    if (_DAT_ram_3006911c != 0) {
      FUN_ram_40043064(_DAT_ram_3006911c,1);
    }
    FUN_ram_40015c14();
    FUN_ram_400171f0();
    FUN_ram_40015d86();
    FUN_ram_40015e02();
    FUN_ram_40015c58();
    FUN_ram_400168a6();
    FUN_ram_4001783c();
    return;
  }
  DAT_ram_3006901a = 0;
  FUN_ram_40015b50();
  DAT_ram_30068f7c = 0;
  DAT_ram_30068ffc = 0;
  DAT_ram_30068ffe = 0;
  DAT_ram_30068ffd = 0;
  DAT_ram_30069018 = 0;
  DAT_ram_30069120 = 0;
  FUN_ram_40016566();
  FUN_ram_400172a2();
  FUN_ram_400171b6(_DAT_ram_30068fc8,0x30068fd8,0);
  iVar1 = FUN_ram_4001dc50();
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_40020388(), iVar1 == 0)) &&
      (iVar1 = FUN_ram_40020e68(), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_40019c2c(), iVar1 == 0 && (iVar1 = FUN_ram_4001fda6(), iVar1 == 0)))) {
    FUN_ram_400175d2();
  }
  FUN_ram_40017af0();
  return;
}


/* NanoCore 1.10, address 0x40017c66.
 * REA evidence: ev_8ed4218f30c9efe2215935bc9de53904368e65355e3f4d6af5e9f390b04656cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017c66(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4001dc50();
  if (iVar1 != 0) {
    FUN_ram_4001dbf6();
  }
  iVar1 = FUN_ram_40020388();
  if (iVar1 != 0) {
    FUN_ram_4002035e();
  }
  iVar1 = FUN_ram_40019c2c();
  if (iVar1 != 0) {
    FUN_ram_40019bd4();
  }
  iVar1 = FUN_ram_4001fda6();
  if (iVar1 != 0) {
    FUN_ram_4001fd8c();
  }
  iVar1 = FUN_ram_40020e68();
  if (iVar1 == 0) {
    FUN_ram_40020db8();
  }
  FUN_ram_40017b36(0);
  return;
}


/* NanoCore 1.10, address 0x40017cd6.
 * REA evidence: ev_01b44864017747d07bdf6a36880ca14b762773d2119e45e1059d2f0b10880c59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_40017cd6(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_ram_3006901a;
  if (DAT_ram_3006901a == '\0') {
LAB_ram_40017ce6:
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_ram_4001dc50();
    if ((((iVar2 == 0) && (iVar2 = FUN_ram_40020e68(), iVar2 == 0)) &&
        (iVar2 = FUN_ram_40019c2c(), iVar2 == 0)) &&
       ((iVar2 = FUN_ram_4001fda6(), iVar2 == 0 && (iVar2 = FUN_ram_40020388(), iVar2 == 0)))) {
      FUN_ram_400177d2();
    }
    else {
      iVar2 = FUN_ram_4001dc50();
      if (iVar2 == 0) goto LAB_ram_40017ce6;
      FUN_ram_4001dc64();
    }
    DAT_ram_3006901a = '\0';
    FUN_ram_40015b50();
  }
  return cVar1;
}


/* NanoCore 1.10, address 0x40017d2e.
 * REA evidence: ev_37676e574d32f78ebffafde643cafdef18f3fbfffe5046e2680fe171c46fc4de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017d2e(void)

{
  int iVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  
  if (_DAT_ram_3006906c != 0) {
    FUN_ram_40047986(_DAT_ram_3006906c,0,0);
    iVar1 = _DAT_ram_3006906c;
    uVar3 = FUN_ram_400210f0();
    FUN_ram_400479c4(iVar1,uVar3,0);
    iVar1 = _DAT_ram_3006906c;
    uVar3 = FUN_ram_400210fa();
    FUN_ram_40047a94(iVar1,uVar3,0);
    DAT_ram_3006907c = 0;
    DAT_ram_30069073 = 0;
    uVar2 = FUN_ram_40016538(0);
    FUN_ram_4001775e(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40017dac.
 * REA evidence: ev_9981eb9c992619c6e4bcee4d2e761f9a24e5c8b3648a938a9bdcf3a6fa8cf62b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017dac(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  
  FUN_ram_4002b5dc();
  FUN_ram_40015b62();
  DAT_ram_300466e8 = 0xffffffff;
  iVar1 = 0;
  FUN_ram_40016c3c(0);
  do {
    if (*(int *)(&DAT_ram_30068c0c + iVar1 * 4) != 0) {
      FUN_ram_40043064(*(int *)(&DAT_ram_30068c0c + iVar1 * 4),1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  iVar1 = 0x30068840;
  uVar2 = 0xfffffffd;
  do {
    if (1 < uVar2) {
      FUN_ram_4004c048(iVar1);
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x40;
  } while (uVar2 != 0xb);
  if (DAT_ram_30069024 != '\0') {
    FUN_ram_4004c048();
  }
  if (DAT_ram_300690d0 != '\0') {
    FUN_ram_4004c048();
  }
  if (DAT_ram_30069090 != '\0') {
    FUN_ram_4004c048();
  }
  if (DAT_ram_30068bcc != '\0') {
    FUN_ram_4004c048();
  }
  if (DAT_ram_30068c4c != '\0') {
    FUN_ram_4004c048();
  }
  if (DAT_ram_30068f88 != '\0') {
    FUN_ram_4004c048();
  }
  if (DAT_ram_30068800 != '\0') {
    FUN_ram_4004c048();
  }
  if (DAT_ram_30068724 != '\0') {
    FUN_ram_4004c048();
  }
  if (DAT_ram_30068764 != '\0') {
    FUN_ram_4004c048();
  }
  if (DAT_ram_300686e0 != '\0') {
    FUN_ram_4004c048();
  }
  pcVar3 = &DAT_ram_30068ca8;
  do {
    if (*pcVar3 != '\0') {
      FUN_ram_4004c048(pcVar3);
    }
    pcVar3 = pcVar3 + 0x40;
  } while (pcVar3 != &DAT_ram_30068ee8);
  FUN_ram_4001de64();
  FUN_ram_4002c34c();
  DAT_ram_300686d0 = FUN_ram_40015e34();
  FUN_ram_4002c3fc();
  FUN_ram_4002c4c2();
  FUN_ram_4002c658();
  FUN_ram_4002112c();
  FUN_ram_40020fec();
  FUN_ram_40017d2e();
  FUN_ram_40016dfa();
  if (DAT_ram_300686d0 != '\0') {
    FUN_ram_400160ec();
    FUN_ram_40015d2a();
    FUN_ram_40017af0();
    FUN_ram_400162aa();
    if ((_DAT_ram_30068c0c == 0) && (_DAT_ram_30068c44 != 0)) {
      FUN_ram_400167e0();
    }
    piVar4 = (int *)&DAT_ram_30068c0c;
    iVar1 = 0;
    do {
      if (*piVar4 != 0) {
        FUN_ram_40016644(*piVar4,iVar1);
        FUN_ram_400167c6(*piVar4,iVar1);
        FUN_ram_400565de(*piVar4,9);
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 != 0xe);
    FUN_ram_40015d86();
    FUN_ram_40016cba();
    FUN_ram_40015e02();
    FUN_ram_40015c58();
    FUN_ram_400168a6();
    if (_DAT_ram_30068c44 != 0) {
      FUN_ram_40044572();
    }
  }
  FUN_ram_4001e982();
  FUN_ram_400173a2();
  FUN_ram_400173e8();
  FUN_ram_40016566();
  FUN_ram_40016c3c(DAT_ram_300466e7);
  FUN_ram_40020424();
  FUN_ram_40020f56();
  FUN_ram_40019ddc();
  FUN_ram_4001ff6a();
  iVar1 = FUN_ram_4001dc50();
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_40020388(), iVar1 == 0)) &&
      (iVar1 = FUN_ram_40020e68(), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_40019c2c(), iVar1 == 0 && (iVar1 = FUN_ram_4001fda6(), iVar1 == 0)))) {
    FUN_ram_4001783c();
    return;
  }
  FUN_ram_40017b36(0);
  return;
}


