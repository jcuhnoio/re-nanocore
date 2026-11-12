/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4001f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4001f472.
 * REA evidence: ev_23eb945fdc86f67fe12b0512edccd6d00420b1e5104a33d6f2f0a2551a215bf1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f472(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = FUN_ram_400164ec();
  uVar1 = (undefined1)((uint)uVar2 >> 0x10);
  uStack_24 = (undefined2)uVar2;
  if (_DAT_ram_3006a014 != 0) {
    if ((DAT_ram_30069f38 == '\0') || (_DAT_ram_30069f3c != 1)) {
      uStack_20 = CONCAT22(uStack_20._2_2_,uStack_24);
      uVar3 = uVar1;
    }
    else {
      uStack_20 = (uint)uStack_20._2_2_ << 0x10;
      uVar3 = 0xff;
    }
    uStack_20._0_3_ = CONCAT12(uVar3,(undefined2)uStack_20);
    FUN_ram_40047a44(_DAT_ram_3006a014,uStack_20,0);
  }
  if (_DAT_ram_3006a184 != 0) {
    if ((DAT_ram_30069f38 == '\0') || (_DAT_ram_30069f3c != 2)) {
      uStack_1c = CONCAT22(uStack_1c._2_2_,uStack_24);
      uVar3 = uVar1;
    }
    else {
      uStack_1c = (uint)uStack_1c._2_2_ << 0x10;
      uVar3 = 0xff;
    }
    uStack_1c._0_3_ = CONCAT12(uVar3,(undefined2)uStack_1c);
    FUN_ram_40047a44(_DAT_ram_3006a184,uStack_1c,0);
  }
  if (_DAT_ram_30069f10 != 0) {
    if ((DAT_ram_30069f38 == '\0') || (_DAT_ram_30069f3c != 3)) {
      uStack_18 = CONCAT22(uStack_18._2_2_,uStack_24);
      uVar3 = uVar1;
    }
    else {
      uStack_18 = (uint)uStack_18._2_2_ << 0x10;
      uVar3 = 0xff;
    }
    uStack_18._0_3_ = CONCAT12(uVar3,(undefined2)uStack_18);
    FUN_ram_40047a44(_DAT_ram_30069f10,uStack_18,0);
  }
  if (_DAT_ram_3006a08c != 0) {
    if ((DAT_ram_30069f38 == '\0') || (_DAT_ram_30069f3c != 4)) {
      uStack_14 = CONCAT22(uStack_14._2_2_,uStack_24);
    }
    else {
      uStack_14 = (uint)uStack_14._2_2_ << 0x10;
      uVar1 = 0xff;
    }
    uStack_14._0_3_ = CONCAT12(uVar1,(undefined2)uStack_14);
    FUN_ram_40047a44(_DAT_ram_3006a08c,uStack_14,0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001f5a0.
 * REA evidence: ev_63b986b9349fea0db7a74ff6199d4d628304563feddd436b7fd6525d8945c433
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f5a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_18;
  uint auStack_14 [2];
  
  uStack_18 = FUN_ram_4001425e();
  iVar2 = FUN_ram_4002c5cc(2);
  iVar3 = FUN_ram_4002c5ea(2,auStack_14);
  if (iVar3 != 0) {
    uStack_18 = auStack_14[0];
  }
  uStack_18 = uStack_18 & 0xffffff;
  if (_DAT_ram_30069f34 != 0) {
    FUN_ram_40047968(_DAT_ram_30069f34,uStack_18,0);
    FUN_ram_40047986(_DAT_ram_30069f34,0xff,0);
  }
  if (_DAT_ram_30069ea0 != 0) {
    if (iVar2 == 0) {
      FUN_ram_40043064(_DAT_ram_30069ea0,1);
    }
    else {
      FUN_ram_4001670a(_DAT_ram_30069ea0,0x30069ea4);
    }
  }
  FUN_ram_4001670a(_DAT_ram_30069f9c,0x30069fa0);
  uVar1 = _DAT_ram_3006a134;
  uVar4 = FUN_ram_4002c7dc(1);
  FUN_ram_40017026(uVar1,0x3006a138,uVar4);
  uVar1 = _DAT_ram_3006a038;
  uVar4 = FUN_ram_4002c7dc(0x16);
  FUN_ram_40017026(uVar1,0x3006a03c,uVar4);
  uVar1 = _DAT_ram_30069fe0;
  uVar4 = FUN_ram_4002c7dc(0x17);
  FUN_ram_40017026(uVar1,0x30069fe4,uVar4);
  if (DAT_ram_30069e9c != '\0') {
    FUN_ram_4001ec08();
  }
  FUN_ram_4001ec32();
  uVar1 = _DAT_ram_3006a158;
  uVar4 = FUN_ram_4002c7dc(0x18);
  FUN_ram_40017026(uVar1,0x3006a15c,uVar4);
  FUN_ram_4001ecb4();
  uVar1 = _DAT_ram_30069ee4;
  uVar4 = FUN_ram_4002c7dc(0x19);
  FUN_ram_40017026(uVar1,0x30069ee8,uVar4);
  FUN_ram_4001ecf4();
  uVar1 = _DAT_ram_3006a060;
  uVar4 = FUN_ram_4002c7dc(0x24);
  FUN_ram_40017026(uVar1,0x3006a064,uVar4);
  FUN_ram_4001ed34();
  uVar1 = _DAT_ram_30069f44;
  uVar4 = FUN_ram_4002c7dc(0x1a);
  FUN_ram_40017026(uVar1,0x30069f48,uVar4);
  FUN_ram_4001ec72();
  iVar2 = _DAT_ram_30069f40;
  if (_DAT_ram_30069f40 != 0) {
    _DAT_ram_30069f40 = 0;
    FUN_ram_4001ed7c();
    FUN_ram_4005924c(iVar2);
  }
  _DAT_ram_30069f40 = FUN_ram_40017342(s_font_settings_ram_400935e0,s_font_default_ram_400931d8);
  FUN_ram_4001ed7c();
  FUN_ram_4001f472();
  return;
}


/* NanoCore 1.10, address 0x4001f75e.
 * REA evidence: ev_a2eff063b2c7c635b9f452d0ab5c99727636566c3c263e81cae7c07b29542810
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001f75e(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  switch(param_1) {
  case 0:
    piVar1 = (int *)&DAT_ram_3006a05c;
    break;
  case 1:
    piVar1 = (int *)&DAT_ram_3006a014;
    break;
  case 2:
    piVar1 = (int *)&DAT_ram_3006a184;
    break;
  case 3:
    piVar1 = (int *)&DAT_ram_30069f10;
    break;
  case 4:
    piVar1 = (int *)&DAT_ram_3006a08c;
    break;
  case 5:
    piVar1 = (int *)&DAT_ram_30069f78;
    break;
  default:
    return 0;
  }
  if ((*piVar1 == 0) || (iVar2 = FUN_ram_40042c20(*piVar1,1), iVar2 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x4001f7d2.
 * REA evidence: ev_8cf9bf9d76f0c12cb350b5fb31849de68e9c83cba11f50fc0655a1f351f2150d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f7d2(void)

{
  int iVar1;
  int iVar2;
  undefined3 uVar3;
  int iVar4;
  
  iVar4 = FUN_ram_4001f75e(_DAT_ram_3006a130);
  if ((iVar4 == 0) || (iVar2 = FUN_ram_40042c20(iVar4,1), iVar1 = _DAT_ram_3006a130, iVar2 != 0)) {
    iVar2 = 0;
    do {
      iVar4 = FUN_ram_4001f75e(iVar2);
      iVar1 = iVar2;
      if (iVar4 != 0) break;
      iVar2 = iVar2 + 1;
      iVar1 = _DAT_ram_3006a130;
    } while (iVar2 != 6);
  }
  _DAT_ram_3006a130 = iVar1;
  if (_DAT_ram_30069f34 != 0) {
    FUN_ram_4004500e();
  }
  FUN_ram_400175d2(iVar4);
  uVar3 = FUN_ram_40016538(DAT_ram_30069f38);
  FUN_ram_4001775e(uVar3);
  FUN_ram_4001f472();
  return;
}


/* NanoCore 1.10, address 0x4001f860.
 * REA evidence: ev_fb00ff0ab7496d63fcdfa7dfd8edb3f6e885cb2212403bf8173a7a3474ba12b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f860(undefined4 param_1)

{
  DAT_ram_30069e9c = 0;
  _DAT_ram_3006a130 = 0;
  DAT_ram_30069f38 = 0;
  _DAT_ram_30069f3c = 1;
  _DAT_ram_30069ea0 = 0;
  _DAT_ram_30069f40 = 0;
  FUN_ram_400164de(0x30069ea4,0x40,s_bg_settings_ram_40093608);
  FUN_ram_400164de(0x30069fa0,0x40,s_settings_ram_4009324c);
  FUN_ram_400164de(0x3006a0f0,0x40,s_distortion_ram_4009385c + 8);
  FUN_ram_400164de(0x3006a0b0,0x40,s_Fbat_off_ram_400936eb + 5);
  _DAT_ram_30069f34 = FUN_ram_40042b1a(param_1);
  FUN_ram_40044038(_DAT_ram_30069f34,0x140,0xf0);
  FUN_ram_40047986(_DAT_ram_30069f34,0xff,0);
  FUN_ram_400479c4(_DAT_ram_30069f34,0,0);
  FUN_ram_40043064(_DAT_ram_30069f34,1);
  _DAT_ram_30069ea0 = FUN_ram_4005600c(_DAT_ram_30069f34);
  FUN_ram_400565de(_DAT_ram_30069ea0,0xb);
  FUN_ram_40043faa(_DAT_ram_30069ea0,0,0);
  FUN_ram_40044038(_DAT_ram_30069ea0,0x140,0xf0);
  FUN_ram_40043064(_DAT_ram_30069ea0,1);
  FUN_ram_40042b3a(_DAT_ram_30069ea0,0x10);
  FUN_ram_40042b3a(_DAT_ram_30069ea0,2);
  _DAT_ram_30069f9c = FUN_ram_4005600c(_DAT_ram_30069f34);
  FUN_ram_400565de(_DAT_ram_30069f9c,0xb);
  FUN_ram_40043faa(_DAT_ram_30069f9c,8,8);
  FUN_ram_40044038(_DAT_ram_30069f9c,0x26,0x26);
  _DAT_ram_3006a134 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_3006a134,1);
  FUN_ram_40044038(_DAT_ram_3006a134,0x200007d1);
  FUN_ram_40045054(_DAT_ram_3006a134,_DAT_ram_30069f9c,0x14,8,0);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_3006a134,0x3006a138,1);
  _DAT_ram_3006a05c = FUN_ram_4005600c(_DAT_ram_30069f34);
  FUN_ram_400565de(_DAT_ram_3006a05c,0xb);
  FUN_ram_40044038(_DAT_ram_3006a05c,0x2d,0x17);
  FUN_ram_40043faa(_DAT_ram_3006a05c,0xfb,0x3c);
  _DAT_ram_3006a038 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_3006a038,1);
  FUN_ram_40044038(_DAT_ram_3006a038,0xeb,0x200007d1);
  FUN_ram_40045054(_DAT_ram_3006a038,_DAT_ram_3006a05c,0x11,0xfffffff8,0);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_3006a038,0x3006a03c,1);
  _DAT_ram_3006a014 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_3006a014,1);
  FUN_ram_40044038(_DAT_ram_3006a014,0x2d,0x17);
  FUN_ram_40043faa(_DAT_ram_3006a014,0xfb,0x5b);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_3006a014,0x3006a018,2);
  _DAT_ram_30069fe0 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_30069fe0,1);
  FUN_ram_40044038(_DAT_ram_30069fe0,0xeb,0x200007d1);
  FUN_ram_40045054(_DAT_ram_30069fe0,_DAT_ram_3006a014,0x11,0xfffffff8,0);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_30069fe0,0x30069fe4,1);
  _DAT_ram_3006a184 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_3006a184,1);
  FUN_ram_40044038(_DAT_ram_3006a184,0x2d,0x17);
  FUN_ram_40043faa(_DAT_ram_3006a184,0xfb,0x7a);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_3006a184,0x3006a188,2);
  _DAT_ram_3006a158 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_3006a158,1);
  FUN_ram_40044038(_DAT_ram_3006a158,0xeb,0x200007d1);
  FUN_ram_40045054(_DAT_ram_3006a158,_DAT_ram_3006a184,0x11,0xfffffff8,0);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_3006a158,0x3006a15c,1);
  _DAT_ram_30069f10 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_30069f10,1);
  FUN_ram_40044038(_DAT_ram_30069f10,0x2d,0x17);
  FUN_ram_40043faa(_DAT_ram_30069f10,0xfb,0x99);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_30069f10,0x30069f14,2);
  _DAT_ram_30069ee4 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_30069ee4,1);
  FUN_ram_40044038(_DAT_ram_30069ee4,0xeb,0x200007d1);
  FUN_ram_40045054(_DAT_ram_30069ee4,_DAT_ram_30069f10,0x11,0xfffffff8,0);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_30069ee4,0x30069ee8,1);
  _DAT_ram_3006a08c = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_3006a08c,1);
  FUN_ram_40044038(_DAT_ram_3006a08c,0x2d,0x17);
  FUN_ram_40043faa(_DAT_ram_3006a08c,0xfb,0xb8);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_3006a08c,0x3006a090,2);
  _DAT_ram_3006a060 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_3006a060,1);
  FUN_ram_40044038(_DAT_ram_3006a060,0xeb,0x200007d1);
  FUN_ram_40045054(_DAT_ram_3006a060,_DAT_ram_3006a08c,0x11,0xfffffff8,0);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_3006a060,0x3006a064,1);
  _DAT_ram_30069f78 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_30069f78,1);
  FUN_ram_40044038(_DAT_ram_30069f78,0x2d,0x17);
  FUN_ram_40043faa(_DAT_ram_30069f78,0xfb,0xd7);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_30069f78,0x30069f7c,2);
  _DAT_ram_30069f44 = FUN_ram_40056c3a(_DAT_ram_30069f34);
  FUN_ram_400572fa(_DAT_ram_30069f44,1);
  FUN_ram_40044038(_DAT_ram_30069f44,0xeb,0x200007d1);
  FUN_ram_40045054(_DAT_ram_30069f44,_DAT_ram_30069f78,0x11,0xfffffff8,0);
  FUN_ram_40016e9e(_DAT_ram_30069f34,_DAT_ram_30069f44,0x30069f48,1);
  FUN_ram_4001f5a0();
  return;
}


/* NanoCore 1.10, address 0x4001fd8c.
 * REA evidence: ev_ce7a3517c306c182fc0ee93bc90b16da00e16be4322e3e6da94dab1e43adc1be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001fd8c(void)

{
  DAT_ram_30069e9c = 0;
  if (_DAT_ram_30069f34 != 0) {
    FUN_ram_40043064(_DAT_ram_30069f34,1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001fda6.
 * REA evidence: ev_f9a0cfe5cdb41753e8460227f53bcc730d7cb33d1c4c8e0881ff2962b71412e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001fda6(void)

{
  return DAT_ram_30069e9c;
}


/* NanoCore 1.10, address 0x4001fdb0.
 * REA evidence: ev_faa1ed39e6607cc5acaa1d532a01b60ff72028986affa8cf1d89a915553f5520
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001fdb0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = _DAT_ram_3006a130;
  if ((DAT_ram_30069e9c == '\0') || (param_1 == 0)) {
    return;
  }
  if (DAT_ram_30069f38 == '\0') {
    _DAT_ram_3006a130 = param_1 + _DAT_ram_3006a130;
    if (_DAT_ram_3006a130 < 0) {
      _DAT_ram_3006a130 = 0;
    }
    else if (5 < _DAT_ram_3006a130) {
      _DAT_ram_3006a130 = 5;
    }
    if (_DAT_ram_3006a130 == iVar1) {
      return;
    }
  }
  else {
    if (_DAT_ram_30069f3c == 0) {
      iVar1 = FUN_ram_40022018();
      thunk_FUN_ram_40022026(0 < param_1);
      FUN_ram_4001ec08();
      iVar2 = FUN_ram_40022018();
      if ((iVar1 != 0) == (iVar2 != 0)) goto LAB_ram_4001fe2e;
    }
    else {
      if (_DAT_ram_30069f3c == 1) {
        iVar1 = FUN_ram_40022106();
        iVar2 = thunk_FUN_ram_40022106();
        thunk_FUN_ram_4002211a(iVar2 + param_1);
        FUN_ram_4001ec32();
        iVar2 = FUN_ram_40022106();
      }
      else if (_DAT_ram_30069f3c == 2) {
        iVar1 = FUN_ram_40022186();
        iVar2 = thunk_FUN_ram_40024a48(0x3006a1a8,2,param_1);
        FUN_ram_4002219a(iVar2 + iVar1);
        FUN_ram_4001ecb4();
        iVar2 = FUN_ram_40022186();
      }
      else if (_DAT_ram_30069f3c == 3) {
        iVar1 = FUN_ram_400221fc();
        iVar2 = thunk_FUN_ram_40024a48(0x3006a1a8,3,param_1);
        FUN_ram_40022210(iVar2 + iVar1);
        FUN_ram_4001ecf4();
        iVar2 = FUN_ram_400221fc();
      }
      else {
        if (_DAT_ram_30069f3c != 4) goto LAB_ram_4001fe2e;
        iVar1 = FUN_ram_400220ac();
        uVar3 = FUN_ram_400220ac();
        if (0x10 < uVar3) {
          uVar3 = 0;
        }
        param_1 = uVar3 + param_1;
        if (param_1 < 0x11) {
          if (param_1 < 0) {
            param_1 = 0;
          }
        }
        else {
          param_1 = 0x10;
        }
        FUN_ram_400220be(param_1);
        FUN_ram_4001ed34();
        iVar2 = FUN_ram_400220ac();
      }
      if (iVar2 == iVar1) goto LAB_ram_4001fe2e;
    }
    FUN_ram_4001387c();
  }
LAB_ram_4001fe2e:
  FUN_ram_4001f7d2();
  return;
}


/* NanoCore 1.10, address 0x4001ff02.
 * REA evidence: ev_80140a240428964d8fed8fe246a69222a3fff83ee541d7faf8afea319a56ce97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001ff02(void)

{
  if (DAT_ram_30069e9c == '\0') {
    return 0;
  }
  if (DAT_ram_30069f38 == '\0') {
    if (_DAT_ram_3006a130 == 0) {
      DAT_ram_30069f38 = 1;
      _DAT_ram_30069f3c = 0;
    }
    else {
      if (3 < _DAT_ram_3006a130 - 1U) {
        return 0;
      }
      DAT_ram_30069f38 = 1;
      _DAT_ram_30069f3c = _DAT_ram_3006a130;
    }
  }
  else {
    DAT_ram_30069f38 = 0;
  }
  FUN_ram_4001f7d2();
  return 0;
}


/* NanoCore 1.10, address 0x4001ff6a.
 * REA evidence: ev_830b29dc92a22e02a0d27a2eb64b4af3bdf7a3c7fb786f0015c8b0640a3cf73c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ff6a(void)

{
  if (_DAT_ram_30069f34 != 0) {
    FUN_ram_4004c048(0x30069ea4);
    FUN_ram_4001f5a0();
    FUN_ram_4001f7d2();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001ff92.
 * REA evidence: ev_79c2ca6a05721b7c8d5b0135a3348c6a1f011e4a6c0e8a3002817c12b45460b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ff92(void)

{
  if (_DAT_ram_30069f34 == 0) {
    return;
  }
  FUN_ram_4001ec08();
  FUN_ram_4001ec32();
  FUN_ram_4001ecb4();
  FUN_ram_4001ecf4();
  FUN_ram_4001ed34();
  FUN_ram_4001ec72();
  if (DAT_ram_30069e9c != '\0') {
    FUN_ram_4001f7d2();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001ffd2.
 * REA evidence: ev_a1c14bd40e6d65b16fa364f523df55a3a95e216fb789e1fad7a34921b93c1870
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ffd2(void)

{
  if (_DAT_ram_30069f34 != 0) {
    _DAT_ram_3006a130 = 0;
    DAT_ram_30069f38 = 0;
    thunk_FUN_ram_40024a3a(0x3006a1a8);
    DAT_ram_30069e9c = 1;
    if (_DAT_ram_30069f34 != 0) {
      FUN_ram_40042b3a(_DAT_ram_30069f34,1);
    }
    FUN_ram_4001ff92();
    FUN_ram_4001f7d2();
    return;
  }
  return;
}


