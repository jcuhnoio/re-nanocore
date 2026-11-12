/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40019000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40019552.
 * REA evidence: ev_bf7d413228b736104fe06d3313120468c1f6a901893b99560d07fa28f649753c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40019552(void)

{
  return DAT_ram_300687b4;
}


/* NanoCore 1.10, address 0x4001955c.
 * REA evidence: ev_57a9db2f40f22821b98c54f4f225dd6875680f1e511673fcec094e8c9abfe788
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001955c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4001d402();
  if (iVar1 != 0) {
    FUN_ram_4001d408(param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001957e.
 * REA evidence: ev_831bb5934b7dedcb43aaf798e2a52626565869ddfd32a56af8d3245bd70940a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4001d41e(undefined4 param_1)

{
  FUN_ram_4001bc60(param_1,0);
  return;
}


/* NanoCore 1.10, address 0x40019586.
 * REA evidence: ev_3ee5d5e3749cf6f9637273124beca3735fbb2f7e12d1fe83e7665d8c9b62e78f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint thunk_FUN_ram_4001d424(void)

{
  uint uVar1;
  
  FUN_ram_4001a0ae();
  uVar1 = DAT_ram_300466f8;
  if (0x1d < DAT_ram_300466f8) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4001958a.
 * REA evidence: ev_6f7a75621355a0f4f4558c6b83c5a753bed8cdd7a314fb1f447635e77cea2fbf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint thunk_FUN_ram_4001d442(void)

{
  uint uVar1;
  
  FUN_ram_4001a116();
  uVar1 = DAT_ram_3004671c;
  if (0x1d < DAT_ram_3004671c) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4001959e.
 * REA evidence: ev_cf2316d33d2602d5aae4c67aaab96469805c2d6af435320aaa23930fc2dfca38
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4001959e(void)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (((_DAT_ram_300693ec != 0) && (_DAT_ram_300693f0 < 8)) &&
     (uVar1 = *(uint *)(_DAT_ram_300693ec + _DAT_ram_300693f0 * 4), 7 < uVar1)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400195c4.
 * REA evidence: ev_9c8b569a8c5dcf4eca4e99720066f089556f9e51927ce2762345909445c9168a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400195c4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = _DAT_ram_300693f4;
  uVar2 = FUN_ram_4002c7dc(2);
  FUN_ram_40017026(uVar1,0x300693f8,uVar2);
  return;
}


/* NanoCore 1.10, address 0x400195ee.
 * REA evidence: ev_695a5ab494afd9578c71e0c6820fc81449ca9e28da3f1f08059a2ec432b5b5db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400195ee(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = _DAT_ram_3006917c;
  bVar1 = _DAT_ram_3006917c != 0;
  uVar4 = 0;
  if (_DAT_ram_3006917c != 0) {
    uVar4 = FUN_ram_4002c4b4();
  }
  FUN_ram_400171b6(_DAT_ram_300693f4,0,bVar1);
  FUN_ram_400171ae(0x300693f8,uVar4 & 1);
  if ((iVar2 != 0) && (_DAT_ram_300693f4 != 0)) {
    FUN_ram_40047a74(_DAT_ram_300693f4,iVar2,0);
    iVar5 = 0;
    do {
      iVar3 = *(int *)(iVar5 * 4 + 0x300693f8);
      if (iVar3 != 0) {
        FUN_ram_40047a74(iVar3,iVar2,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    FUN_ram_40043ffe(_DAT_ram_300693f4,*(undefined4 *)(iVar2 + 0xc));
    FUN_ram_40045054(_DAT_ram_300693f4,_DAT_ram_30069180,0x14,8,0);
    FUN_ram_40016fb2(_DAT_ram_300693f4,0x300693f8);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400196ac.
 * REA evidence: ev_7dbbc38e8a02a6662fe00ebffca6dea8366a042ca58932fb8f9f51656fe6920d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400196ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uStack_38;
  uint auStack_34 [4];
  
  uStack_38 = FUN_ram_4001425e();
  iVar2 = FUN_ram_4002c5cc(4);
  iVar3 = FUN_ram_4002c5ea(4,auStack_34);
  if (iVar3 != 0) {
    uStack_38 = auStack_34[0];
  }
  uStack_38 = uStack_38 & 0xffffff;
  if (_DAT_ram_30069170 != 0) {
    FUN_ram_40047968(_DAT_ram_30069170,uStack_38,0);
    FUN_ram_40047986(_DAT_ram_30069170,0xff,0);
  }
  if (_DAT_ram_3006912c != 0) {
    if (iVar2 == 0) {
      FUN_ram_40043064(_DAT_ram_3006912c,1);
    }
    else {
      FUN_ram_4001670a(_DAT_ram_3006912c,0x30069130);
    }
  }
  iVar3 = 0x300691c4;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(iVar2 * 4 + 0x300693c4);
    if (iVar1 != 0) {
      if ((((_DAT_ram_300693e8 == 0) || (_DAT_ram_300693e4 <= iVar2)) ||
          (*(int *)(_DAT_ram_300693e8 + iVar2 * 4) == 0)) ||
         (iVar4 = FUN_ram_4005604e(), iVar4 == 0)) {
        FUN_ram_4001670a(iVar1,iVar3);
      }
      else {
        FUN_ram_40056474(iVar1,iVar4);
        FUN_ram_40042b3a(iVar1,1);
      }
      iVar4 = FUN_ram_4001deba((&PTR_DAT_ram_40093228_ram_40093358)[iVar2]);
      uVar5 = 0xff;
      if (iVar4 == 0) {
        uVar5 = 0x59;
      }
      FUN_ram_40047a34(iVar1,uVar5,0);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x40;
  } while (iVar2 != 8);
  FUN_ram_4001670a(_DAT_ram_30069180,0x30069184);
  return;
}


/* NanoCore 1.10, address 0x400197d6.
 * REA evidence: ev_23111c8fb4babe67a64bbbc1c2cee35c1017432729be1a21ceae5bf482907238
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400197d6(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (7 < param_1) {
    return 0;
  }
  uVar1 = *(uint *)(_DAT_ram_300693ec + param_1 * 4);
  if (((uVar1 < 8) && (iVar2 = *(int *)(uVar1 * 4 + 0x300693c4), iVar2 != 0)) &&
     (iVar2 = FUN_ram_40042c20(iVar2,1), iVar2 == 0)) {
    uVar3 = *(undefined4 *)(uVar1 * 4 + 0x300693c4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40019820.
 * REA evidence: ev_a74bec5120cd63aaa5ebf476ef154a547295c7de49a6979bafdb72d96ef3ec97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40019820(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined3 uVar4;
  
  if ((DAT_ram_30069174 == '\0') || (7 < _DAT_ram_30069178)) {
    iVar2 = FUN_ram_400197d6(_DAT_ram_300693f0);
    iVar1 = _DAT_ram_300693f0;
    if ((DAT_ram_30069174 == '\0') &&
       ((iVar2 == 0 || (iVar3 = FUN_ram_40042c20(iVar2,1), iVar1 = _DAT_ram_300693f0, iVar3 != 0))))
    {
      iVar3 = 0;
      do {
        iVar2 = FUN_ram_400197d6(iVar3);
        iVar1 = iVar3;
        if (iVar2 != 0) break;
        iVar3 = iVar3 + 1;
        iVar1 = _DAT_ram_300693f0;
      } while (iVar3 != 8);
    }
  }
  else {
    iVar2 = *(int *)(_DAT_ram_30069178 * 4 + 0x300693c4);
    iVar1 = _DAT_ram_300693f0;
  }
  _DAT_ram_300693f0 = iVar1;
  if (_DAT_ram_30069170 != 0) {
    FUN_ram_4004500e();
  }
  FUN_ram_400175d2(iVar2);
  uVar4 = FUN_ram_40016538(DAT_ram_30069174);
  FUN_ram_4001775e(uVar4);
  return;
}


/* NanoCore 1.10, address 0x400198da.
 * REA evidence: ev_d8a46ddd9ddbd86a1691db149058f2c4fac2a54d7e196c40b4b401ee6b9fe1a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400198da(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (_DAT_ram_300693ec != 0) {
    uVar1 = 0;
    do {
      uVar3 = *(uint *)(_DAT_ram_300693ec + uVar1 * 4);
      if ((uVar3 < 8) && (iVar2 = *(int *)(uVar3 * 4 + 0x300693c4), iVar2 != 0)) {
        FUN_ram_40043faa(iVar2,(uVar1 & 3) * 0x4a + 0x18,((int)uVar1 >> 2) * 0x3a + 0x42);
        FUN_ram_40044038(iVar2,0x32,0x32);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 8);
  }
  return;
}


/* NanoCore 1.10, address 0x40019962.
 * REA evidence: ev_efe1d20374828a2f3f2732cecc2e87cfa16f5d89203fcdd611e9be688c25b3ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40019962(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  DAT_ram_30069128 = 0;
  DAT_ram_30069174 = 0;
  _DAT_ram_300693f0 = 0;
  _DAT_ram_300693e8 = 0;
  _DAT_ram_300693e4 = 0;
  _DAT_ram_3006917c = 0;
  _DAT_ram_30069178 = 0xffffffff;
  _DAT_ram_3006912c = 0;
  _DAT_ram_300693ec = FUN_ram_4001742e(0);
  FUN_ram_400164de(0x30069130,0x40,s_bg_chain_ram_4009334c);
  iVar3 = 0x300691c4;
  iVar2 = 0;
  do {
    ppuVar1 = &PTR_DAT_ram_40093228_ram_40093358 + iVar2;
    iVar2 = iVar2 + 1;
    FUN_ram_400164de(iVar3,0x40,*ppuVar1);
    iVar3 = iVar3 + 0x40;
  } while (iVar2 != 8);
  FUN_ram_400164de(0x30069184,0x40,s_chain_ram_40093258);
  _DAT_ram_30069170 = FUN_ram_40042b1a(param_1);
  FUN_ram_40044038(_DAT_ram_30069170,0x140,0xf0);
  FUN_ram_40047986(_DAT_ram_30069170,0xff,0);
  FUN_ram_400479c4(_DAT_ram_30069170,0,0);
  FUN_ram_40043064(_DAT_ram_30069170,1);
  _DAT_ram_3006912c = FUN_ram_4005600c(_DAT_ram_30069170);
  FUN_ram_400565de(_DAT_ram_3006912c,0xb);
  FUN_ram_40043faa(_DAT_ram_3006912c,0,0);
  FUN_ram_40044038(_DAT_ram_3006912c,0x140,0xf0);
  FUN_ram_40043064(_DAT_ram_3006912c,1);
  FUN_ram_40042b3a(_DAT_ram_3006912c,0x10);
  FUN_ram_40042b3a(_DAT_ram_3006912c,2);
  _DAT_ram_30069180 = FUN_ram_4005600c(_DAT_ram_30069170);
  FUN_ram_400565de(_DAT_ram_30069180,0xb);
  FUN_ram_40043faa(_DAT_ram_30069180,8,8);
  FUN_ram_40044038(_DAT_ram_30069180,0x26,0x26);
  _DAT_ram_300693f4 = FUN_ram_40056c3a(_DAT_ram_30069170);
  FUN_ram_400572fa(_DAT_ram_300693f4,1);
  FUN_ram_40044038(_DAT_ram_300693f4,0x200007d1);
  FUN_ram_40045054(_DAT_ram_300693f4,_DAT_ram_30069180,0x14,8,0);
  FUN_ram_40016e9e(_DAT_ram_30069170,_DAT_ram_300693f4,0x300693f8,1);
  iVar2 = 0;
  FUN_ram_400195c4();
  do {
    uVar4 = FUN_ram_4005600c(_DAT_ram_30069170);
    *(undefined4 *)(iVar2 * 4 + 0x300693c4) = uVar4;
    iVar2 = iVar2 + 1;
    FUN_ram_400565de(uVar4,0xb);
  } while (iVar2 != 8);
  _DAT_ram_3006917c = FUN_ram_4001de9c();
  FUN_ram_400195ee();
  FUN_ram_400196ac();
  FUN_ram_400198da();
  return;
}


/* NanoCore 1.10, address 0x40019b66.
 * REA evidence: ev_a7ad3bb2c3c6258ed76530f439939b1e940aaae53b6076823dd289242d65db94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40019b66(undefined4 param_1,undefined4 param_2)

{
  _DAT_ram_300693e4 = param_2;
  _DAT_ram_300693e8 = param_1;
  FUN_ram_400196ac();
  return;
}


/* NanoCore 1.10, address 0x40019b7a.
 * REA evidence: ev_9b0a257defdc6f7f59c19ac6645d208080154501e36d71bae76c5931d1a64d41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40019b7a(void)

{
  if (_DAT_ram_30069170 != 0) {
    DAT_ram_30069128 = 1;
    DAT_ram_30069174 = 0;
    _DAT_ram_30069178 = 0xffffffff;
    _DAT_ram_300693f0 = 0;
    FUN_ram_400196ac();
    FUN_ram_400198da();
    if (_DAT_ram_30069170 != 0) {
      FUN_ram_40042b3a(_DAT_ram_30069170,1);
    }
    FUN_ram_40019820();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40019bd4.
 * REA evidence: ev_d6378178104d26658fb8777e1fc92acd9d31db296179891d4588d1f75f8ae90f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40019bd4(void)

{
  undefined3 uVar1;
  
  DAT_ram_30069128 = 0;
  DAT_ram_30069174 = 0;
  _DAT_ram_30069178 = 0xffffffff;
  uVar1 = FUN_ram_40016538(0);
  FUN_ram_4001775e(uVar1);
  if (_DAT_ram_30069170 != 0) {
    FUN_ram_40043064(_DAT_ram_30069170,1);
  }
  FUN_ram_400175d2(0);
  return;
}


/* NanoCore 1.10, address 0x40019c2c.
 * REA evidence: ev_9c4c4c5c96c13848b8d91e096b9607009f6cdcfaa0a9fa01a8ace785fd8140ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40019c2c(void)

{
  return DAT_ram_30069128;
}


/* NanoCore 1.10, address 0x40019c36.
 * REA evidence: ev_f82bd8ea02d35b1d3f89837cb3820e63c93db6c8b2f97f13e80d13609e220895
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40019c36(int param_1)

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
  
  iVar8 = _DAT_ram_300693f0;
  cVar1 = DAT_ram_30069174;
  if (DAT_ram_30069128 == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_ram_30069174 == '\0') {
    _DAT_ram_300693f0 = param_1 + _DAT_ram_300693f0;
    if (_DAT_ram_300693f0 < 0) {
      _DAT_ram_300693f0 = 0;
    }
    else if (7 < _DAT_ram_300693f0) {
      _DAT_ram_300693f0 = 7;
    }
  }
  else {
    if (7 < _DAT_ram_30069178) {
      _DAT_ram_30069178 = FUN_ram_4001959e();
    }
    iVar2 = _DAT_ram_300693ec;
    uVar6 = _DAT_ram_30069178;
    iVar3 = 1;
    if (param_1 < 1) {
      iVar3 = -1;
    }
    cVar4 = '\0';
    do {
      if ((iVar2 == 0) || (7 < uVar6)) {
LAB_ram_40019ca6:
        iVar7 = _DAT_ram_300693f0;
        if (cVar4 != '\0') {
          iVar7 = iVar8;
        }
        break;
      }
      iVar9 = 0;
      do {
        if (uVar6 == *(uint *)(iVar2 + iVar9 * 4)) goto LAB_ram_40019d14;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      iVar9 = -1;
LAB_ram_40019d14:
      iVar7 = iVar3 + iVar9;
      if (((iVar9 == -1) || (iVar7 < 0)) || (iVar7 == 8)) goto LAB_ram_40019ca6;
      uVar5 = *(undefined4 *)(iVar2 + iVar9 * 4);
      param_1 = param_1 - iVar3;
      *(undefined4 *)(iVar2 + iVar9 * 4) = *(undefined4 *)(iVar2 + iVar7 * 4);
      *(undefined4 *)(iVar2 + iVar7 * 4) = uVar5;
      iVar8 = iVar7;
      cVar4 = cVar1;
    } while (param_1 != 0);
    _DAT_ram_300693f0 = iVar7;
    FUN_ram_400198da();
    FUN_ram_40017854();
    if (_DAT_ram_300693ec != 0) {
      iVar8 = 0;
      do {
        uVar6 = *(uint *)(_DAT_ram_300693ec + iVar8 * 4);
        if (7 < uVar6) goto LAB_ram_40019ce6;
        auStack_28[iVar8] = (char)uVar6;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 8);
      iVar8 = FUN_ram_400234a2(auStack_28,8);
      if (iVar8 == 0) {
        FUN_ram_40022dda(auStack_28,8);
      }
    }
  }
LAB_ram_40019ce6:
  FUN_ram_40019820();
  return;
}


/* NanoCore 1.10, address 0x40019d6e.
 * REA evidence: ev_816745159f211ea482792002cabf2fd41a2faa4d5b0474558668ac4d2c42f6dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40019d6e(void)

{
  undefined4 uVar1;
  
  if (DAT_ram_30069128 != '\0') {
    DAT_ram_30069174 = DAT_ram_30069174 ^ 1;
    uVar1 = 0xffffffff;
    if (DAT_ram_30069174 != 0) {
      uVar1 = FUN_ram_4001959e();
    }
    _DAT_ram_30069178 = uVar1;
    FUN_ram_40019820();
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40019db0.
 * REA evidence: ev_3d85b01cbce8e20963ed8b4cb5ed7570be6a13df28bd9774addafa15058a4267
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40019db0(void)

{
  if (_DAT_ram_30069170 == 0) {
    return;
  }
  FUN_ram_400198da();
  if (DAT_ram_30069128 != '\0') {
    FUN_ram_40019820();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40019ddc.
 * REA evidence: ev_a8813286f55b83adb29a8bf3ddcd6e3f8f737cb9f0563f7e84706967688707d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40019ddc(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_ram_30069170 == 0) {
    return;
  }
  iVar1 = 0x300691c4;
  do {
    iVar2 = iVar1 + 0x40;
    FUN_ram_4004c048(iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0x300693c4);
  FUN_ram_4004c048(0x30069184);
  FUN_ram_4004c048(0x30069130);
  _DAT_ram_3006917c = FUN_ram_4001de9c();
  FUN_ram_400195ee();
  FUN_ram_400195c4();
  FUN_ram_400196ac();
  FUN_ram_400198da();
  if (DAT_ram_30069128 != '\0') {
    FUN_ram_40019820();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40019e62.
 * REA evidence: ev_acbb77e5bac5b2b93dda7169260e660a7af32337f5f308fe56391b41e6ed90e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40019e62(float param_1,float param_2,float param_3)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009281c < param_1) {
    param_1 = DAT_ram_4009281c;
  }
  return (param_3 - param_2) * param_1 + param_2;
}


/* NanoCore 1.10, address 0x40019e8e.
 * REA evidence: ev_b3fe610a5055a5945ef09d3a7d439d33ee655dc54771f997794ac08e16697b3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40019e8e(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = param_1 - DAT_ram_40092864;
  }
  else {
    param_1 = param_1 + DAT_ram_40092864;
  }
  return (int)param_1;
}


/* NanoCore 1.10, address 0x40019eb0.
 * REA evidence: ev_c8f4fe6eb1f688241fa9ea663fe8a5a7f09ad0400c7f07a5ed2c908b561cd4e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40019eb0(int *param_1)

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
      iVar2 = FUN_ram_40019e8e((float)*(undefined8 *)(param_1 + 2) -
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


/* NanoCore 1.10, address 0x40019eee.
 * REA evidence: ev_36514a2a97586f0804c2e55262a7415945177e6ef565c15be64af3ec4d1683f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40019eee(int *param_1,int param_2)

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
    fVar7 = (float)param_2 / DAT_ram_40093094;
    if (iVar5 == 1) {
      iVar5 = FUN_ram_40019eb0();
      uVar6 = *(ulonglong *)(param_1 + 1);
      fVar7 = (float)FUN_ram_40019e62(CONCAT44(uStack_20,fVar7),uVar6 & 0xffffffff,
                                      *(undefined8 *)(param_1 + 2));
      iVar4 = FUN_ram_40019e8e(fVar7 - (float)uVar6);
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
        fVar8 = (float)FUN_ram_40019e62(fVar7,*(undefined8 *)(param_1 + 1),
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


/* NanoCore 1.10, address 0x40019fb0.
 * REA evidence: ev_885f9fe712cdad524d1367d2b5f8397dc2eccc61365cc9d780952d44650df6cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40019fb0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40019eb0();
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
    else if (DAT_ram_4009281c < fVar4) {
      fVar4 = DAT_ram_4009281c;
    }
    iVar1 = (int)(fVar4 * DAT_ram_40093094 + DAT_ram_40092864);
    if (1000 < iVar1) {
      return 1000;
    }
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  return 0;
}


