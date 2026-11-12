/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4002d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002d0b0.
 * REA evidence: ev_76e175a3ebc74463ef6a953fafbf3191b49b0e9349008fb57c8133803c7bc2a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002d0b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002ce9c();
  if (iVar1 - 2U < 2) {
    FUN_ram_400002f4();
    if (_DAT_ram_3007adb8 == param_1) {
      DAT_ram_3007adbd = 1;
      DAT_ram_3007adbc = 0;
    }
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002d0fc.
 * REA evidence: ev_ba3d0d1777dae3f0ba7f512f1a32eb928a1bcceb33f619f5a5af8c13b371d182
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002d0fc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002ce9c();
  if (iVar1 - 2U < 2) {
    FUN_ram_400002f4();
    if ((_DAT_ram_3007adb8 == param_1) && (DAT_ram_3007adbd != '\0')) {
      DAT_ram_3007adbc = 1;
    }
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002d14a.
 * REA evidence: ev_9fe362a26fd91de5bde4946a8895ddecc208e3c8e4080b8dc5abbda630dd184e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d14a(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_400042ea();
  iVar2 = FUN_ram_40004352(param_1);
  while ((iVar3 = FUN_ram_4002ce9c(), iVar3 == 0 && (param_1 != 0))) {
    FUN_ram_400065c6(10);
    iVar3 = FUN_ram_400042ea();
    if (iVar2 <= iVar3 - iVar1) {
      FUN_ram_4002ce9c();
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002d198.
 * REA evidence: ev_8aea0d7d2e2e4e41ea0de152ef6f4ee02dce2c869f54b1e0a5f9ea94bbf84f29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d198(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  if (param_1 < 1) {
    return;
  }
  iVar2 = FUN_ram_4002ce9c();
  iVar3 = FUN_ram_4002ce8a();
  if (iVar3 != 0) {
    if (iVar2 - 2U < 2) {
LAB_ram_4002d1ec:
      FUN_ram_4002cebc();
      return;
    }
    if (iVar2 == 4) {
      if (param_1 < 0xdde) {
        DAT_ram_3007adb0 = 0;
        return;
      }
      if ((DAT_ram_3007adb0 < 5) &&
         (bVar5 = DAT_ram_3007adb0 + 1, bVar1 = DAT_ram_3007adb0 != 4, DAT_ram_3007adb0 = bVar5,
         bVar1)) {
        return;
      }
    }
    else {
      if (param_1 < 0xdac) {
        DAT_ram_3007adb2 = 0;
        if (DAT_ram_3007adb4 < 5) {
          DAT_ram_3007adb4 = DAT_ram_3007adb4 + 1;
        }
        if (param_1 < 0xd7b) {
          if ((1 < DAT_ram_3007adb1) ||
             (bVar5 = DAT_ram_3007adb1 + 1, bVar1 = DAT_ram_3007adb1 == 1, DAT_ram_3007adb1 = bVar5,
             bVar1)) goto LAB_ram_4002d1ec;
        }
        else {
          DAT_ram_3007adb1 = 0;
        }
        if (DAT_ram_3007adb4 < 5) {
          DAT_ram_3007adb2 = 0;
          return;
        }
        goto LAB_ram_4002d1ec;
      }
      DAT_ram_3007adb4 = 0;
      DAT_ram_3007adb1 = 0;
      DAT_ram_3007adb0 = 0;
      if ((iVar2 != 5) && (iVar2 = FUN_ram_4002ce3a(param_1), iVar2 == 0)) {
        return;
      }
    }
    FUN_ram_4002cd7c();
    FUN_ram_4002cd9e();
    uVar4 = 5;
    goto LAB_ram_4002d232;
  }
  if (iVar2 == 4) {
    FUN_ram_4002cd7c();
    if (param_1 < 0xdac) {
      uVar4 = 3;
      if (param_1 < 0xd7b) goto LAB_ram_4002d2ec;
LAB_ram_4002d2ea:
      uVar4 = 2;
LAB_ram_4002d2ec:
      FUN_ram_4002cf0c(uVar4);
      return;
    }
  }
  else {
    if (iVar2 == 5) {
      FUN_ram_4002cdbe();
      iVar2 = 0;
      FUN_ram_4002cd7c();
    }
    else if (iVar2 - 2U < 2) {
      if (iVar2 == 2) {
        if (param_1 < 0xd7b) {
          if ((1 < DAT_ram_3007adb1) ||
             (bVar5 = DAT_ram_3007adb1 + 1, bVar1 = DAT_ram_3007adb1 == 1, DAT_ram_3007adb1 = bVar5,
             bVar1)) {
            FUN_ram_4002cf0c(3);
          }
        }
        else {
          DAT_ram_3007adb1 = 0;
        }
      }
      FUN_ram_4002cddc();
      return;
    }
    if (param_1 < 0xdac) {
      DAT_ram_3007adb2 = 0;
      if (DAT_ram_3007adb4 < 5) {
        DAT_ram_3007adb4 = DAT_ram_3007adb4 + 1;
      }
      if (param_1 < 0xd7b) {
        if ((1 < DAT_ram_3007adb1) ||
           (bVar5 = DAT_ram_3007adb1 + 1, bVar1 = DAT_ram_3007adb1 == 1, DAT_ram_3007adb1 = bVar5,
           bVar1)) {
          uVar4 = 3;
          goto LAB_ram_4002d2ec;
        }
      }
      else {
        DAT_ram_3007adb1 = 0;
      }
      if (DAT_ram_3007adb4 < 5) {
        DAT_ram_3007adb2 = 0;
        return;
      }
      goto LAB_ram_4002d2ea;
    }
    DAT_ram_3007adb4 = 0;
    DAT_ram_3007adb1 = 0;
    DAT_ram_3007adb0 = 0;
    if ((iVar2 != 1) && (iVar2 = FUN_ram_4002ce3a(param_1), iVar2 == 0)) {
      return;
    }
    FUN_ram_4002cd7c();
  }
  uVar4 = 1;
LAB_ram_4002d232:
  FUN_ram_4002cdbe(uVar4);
  return;
}


/* NanoCore 1.11, address 0x4002d400.
 * REA evidence: ev_acd2c32ab138990eedf7a94675ca9a3047f15ccbe16a131bf0d1549398b6f751
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d400(undefined4 param_1)

{
  FUN_ram_400483d6();
  FUN_ram_40043aac(param_1,0x10);
  return;
}


/* NanoCore 1.11, address 0x4002d416.
 * REA evidence: ev_e782b0172fc269fea28c856f5957661992cab1e920ac12c8719873670590f1db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002d416(void)

{
  int iVar1;
  
  if ((_DAT_ram_3007adc0 == 0) || (_DAT_ram_3007adc8 == 0)) {
    return;
  }
  if (_DAT_ram_3007addc == 4) {
    FUN_ram_40043aac();
    iVar1 = _DAT_ram_3007adc8;
  }
  else {
    FUN_ram_40043fd6(_DAT_ram_3007adc8,1);
    iVar1 = _DAT_ram_3007adc0;
  }
  if (DAT_ram_3007adc4 != '\0') {
    FUN_ram_40043aac();
    return;
  }
  FUN_ram_40043fd6(iVar1,1);
  return;
}


/* NanoCore 1.11, address 0x4002d498.
 * REA evidence: ev_51c8f508740f9bb03e9acafea0e507c90abc75308bf6738a158a009b26660ef1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d498(undefined4 param_1)

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


/* NanoCore 1.11, address 0x4002d4c2.
 * REA evidence: ev_b61c88a941ce52de5f68277c5bcd8ac4d567c83e9ed038f32e138fc5dc353c84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d4c2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40043a8c();
  FUN_ram_4002d400();
  FUN_ram_40044f1c(uVar1,param_2,param_3);
  FUN_ram_40044faa(uVar1,param_4,param_5);
  FUN_ram_400488da(uVar1,param_6,0);
  FUN_ram_400488f8(uVar1,0xff,0);
  FUN_ram_40048936(uVar1,0,0);
  FUN_ram_40048a06(uVar1,0,0);
  return;
}


/* NanoCore 1.11, address 0x4002d524.
 * REA evidence: ev_38b6d61bacb94fbcd3371a327b2e2e5a39ec41e5af50cd32cb21cc0633ca5686
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002d524(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_30;
  
  iVar1 = FUN_ram_4002cf76();
  if (2 < param_1 - 2U) {
    return 0xffffffff;
  }
  if (_DAT_ram_3007add4 == 0) {
    local_30 = local_30 & 0xff000000;
    FUN_ram_4004d1be();
    FUN_ram_4004d36a();
    _DAT_ram_3007add4 = FUN_ram_40043a8c();
    FUN_ram_4002d400();
    FUN_ram_40044faa(_DAT_ram_3007add4,0x20000064);
    FUN_ram_4004502e(_DAT_ram_3007add4,9,0,0);
    FUN_ram_400488da(_DAT_ram_3007add4,local_30,0);
    FUN_ram_400488f8(_DAT_ram_3007add4,0xff,0);
    FUN_ram_40048936(_DAT_ram_3007add4,0,0);
    FUN_ram_40048a06(_DAT_ram_3007add4,0,0);
    FUN_ram_40043fd6(_DAT_ram_3007add4,2);
    FUN_ram_4002d498(_DAT_ram_3007add4);
    _DAT_ram_3007adc0 = FUN_ram_40043a8c(_DAT_ram_3007add4);
    FUN_ram_4002d400();
    FUN_ram_40044faa(_DAT_ram_3007adc0,0x3c,0x1e);
    FUN_ram_4004502e(_DAT_ram_3007adc0,9,0,0);
    uVar2 = FUN_ram_40043a8c(_DAT_ram_3007adc0);
    FUN_ram_4002d400();
    FUN_ram_40044f1c(uVar2,0x34,9);
    FUN_ram_40044faa(uVar2,6,0xc);
    FUN_ram_400488da(uVar2,local_30,0);
    FUN_ram_400488f8(uVar2,0xff,0);
    FUN_ram_40048906(uVar2,0xd9d8d0,0);
    FUN_ram_40048926(uVar2,0xff,0);
    FUN_ram_40048936(uVar2,2,0);
    FUN_ram_40048a06(uVar2,0,0);
    uVar2 = FUN_ram_40043a8c(_DAT_ram_3007adc0);
    FUN_ram_4002d400();
    FUN_ram_40044f1c(uVar2,1,2);
    FUN_ram_40044faa(uVar2,0x34,0x1a);
    FUN_ram_400488da(uVar2,local_30,0);
    FUN_ram_400488f8(uVar2,0xff,0);
    FUN_ram_40048906(uVar2,0xd9d8d0,0);
    FUN_ram_40048926(uVar2,0xff,0);
    FUN_ram_40048936(uVar2,2,0);
    FUN_ram_40048a06(uVar2,1,0);
    FUN_ram_4002d4c2(_DAT_ram_3007adc0,6,7,4,0x10,0xc92f36);
    _DAT_ram_3007adc8 = FUN_ram_40043a8c(_DAT_ram_3007adc0);
    FUN_ram_4002d400();
    FUN_ram_40044f1c(_DAT_ram_3007adc8,0x17,6);
    FUN_ram_40044faa(_DAT_ram_3007adc8,0xc,0x12);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,5,0,4,2,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,4,2,4,2,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,3,4,4,2,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,3,6,8,1,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,2,7,8,1,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,1,8,8,1,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,5,9,3,2,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,5,0xb,2,1,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,4,0xc,2,2,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,4,0xe,1,2,0xf2bc3d);
    FUN_ram_4002d4c2(_DAT_ram_3007adc8,3,0x10,1,1,0xf2bc3d);
    _DAT_ram_3007addc = param_1;
  }
  else {
    uVar3 = _DAT_ram_3007addc - 2;
    _DAT_ram_3007addc = param_1;
    if (uVar3 < 2) {
      if (param_1 - 2U == 2) {
        _DAT_ram_3007addc = 4;
      }
      else if (_DAT_ram_3007add8 == iVar1) goto LAB_ram_4002d5c0;
    }
  }
  DAT_ram_3007adc4 = 1;
  _DAT_ram_3007add8 = iVar1;
  _DAT_ram_3007adcc = FUN_ram_40056c6c();
  DAT_ram_3007add0 = 0;
  DAT_ram_3007add2 = 0;
  DAT_ram_3007add1 = 0;
LAB_ram_4002d5c0:
  FUN_ram_4002d416();
  FUN_ram_4002d498(_DAT_ram_3007add4);
  FUN_ram_400454e4(_DAT_ram_3007add4);
  return 0;
}


/* NanoCore 1.11, address 0x4002d874.
 * REA evidence: ev_69a34fd7e45dad1c610c49e9a2b406888fbfb8eba5e118e68bae682ba9f952ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002d874(void)

{
  if (_DAT_ram_3007add4 != 0) {
    FUN_ram_40048c64();
  }
  _DAT_ram_3007add4 = 0;
  _DAT_ram_3007adc0 = 0;
  _DAT_ram_3007adc8 = 0;
  _DAT_ram_3007addc = 0;
  _DAT_ram_3007add8 = 0;
  DAT_ram_3007adc4 = 0;
  DAT_ram_3007add0 = 0;
  DAT_ram_3007add2 = 0;
  DAT_ram_3007add1 = 0;
  _DAT_ram_3007adcc = 0;
  return;
}


/* NanoCore 1.11, address 0x4002d8dc.
 * REA evidence: ev_74657a52ce2cc44d3e4bb49b23de05e8c6c211df6bbde311834264ed058f6800
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002d8dc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_ram_4002ce9c();
  iVar2 = FUN_ram_4002cf76();
  if (iVar1 - 2U < 3) {
    if (((_DAT_ram_3007add4 == 0) || (_DAT_ram_3007addc != iVar1)) ||
       ((iVar1 - 2U != 2 && (_DAT_ram_3007add8 != iVar2)))) {
      FUN_ram_4002d524(iVar1);
    }
    else {
      iVar1 = FUN_ram_40056c6c();
      uVar4 = _DAT_ram_3007addc - 2;
      if ((uVar4 < 2) && (DAT_ram_3007add0 == '\0')) {
        DAT_ram_3007add0 = '\x01';
        _DAT_ram_3007adcc = iVar1;
        FUN_ram_4002d0b0(_DAT_ram_3007add8);
      }
      else if (499 < (uint)(iVar1 - _DAT_ram_3007adcc)) {
        if ((uVar4 < 2) && (2 < DAT_ram_3007add2)) {
          _DAT_ram_3007adcc = iVar1;
          if (DAT_ram_3007add1 == '\0') {
            DAT_ram_3007add1 = '\x01';
            FUN_ram_4002d0fc(_DAT_ram_3007add8);
          }
        }
        else {
          if ((uVar4 < 2) && (DAT_ram_3007adc4 != '\0')) {
            DAT_ram_3007add2 = DAT_ram_3007add2 + 1;
          }
          DAT_ram_3007adc4 = DAT_ram_3007adc4 == '\0';
          _DAT_ram_3007adcc = iVar1;
          FUN_ram_4002d416();
          FUN_ram_400454e4(_DAT_ram_3007add4);
        }
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if (_DAT_ram_3007add4 != 0) {
      FUN_ram_4002d874();
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x4002da68.
 * REA evidence: ev_64f25d84281c9e202e4abe8e2668d9e216e095f95ef7a3789c34e41da06b06a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002da68(uint param_1,undefined1 param_2)

{
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  if (param_1 < 8) {
    uStack_13 = (undefined1)param_1;
    uStack_14 = 3;
    uStack_12 = param_2;
    nc_submit_slot_command(&uStack_14,3);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002da90.
 * REA evidence: ev_ef37f2a6b96076814c61862c51f4e964b4f2ce990736eeb6d6e0ecf32dead019
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002da90(uint param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  if (param_1 < 8) {
    iVar1 = FUN_ram_400252e8();
    if (-1 < iVar1) {
      uStack_14 = 2;
      uStack_13 = (undefined1)param_1;
      uStack_12 = param_2;
      nc_submit_slot_command(&uStack_14,3);
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002dacc.
 * REA evidence: ev_f1b90e8bcd26b93cf4ca210e25039ab296120b3ad39b707303876edbd3ee6609
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002dacc(float param_1,uint param_2,uint param_3)

{
  undefined4 in_register_00000100;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  uVar1 = 0;
  if (0.0 <= param_1) {
    uVar1 = in_register_00000100;
  }
  if ((param_2 < 8) && (param_3 < 0xc)) {
    uVar2 = FUN_ram_40022f10(param_2);
    uVar3 = FUN_ram_4002662a(param_2,uVar2,1);
    if (param_3 < uVar3) {
      uStack_18 = 1;
      uStack_15 = (undefined1)uVar1;
      uStack_14 = (undefined1)((uint)uVar1 >> 8);
      uStack_17 = (undefined1)param_2;
      uStack_16 = (undefined1)param_3;
      uStack_13 = (undefined1)((uint)uVar1 >> 0x10);
      uStack_12 = (undefined1)((uint)uVar1 >> 0x18);
      nc_submit_slot_command(&uStack_18,7);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002db5c.
 * REA evidence: ev_5abda5f7fe14054f61f0b1dde25485041de65c3d3916cfb1792058943414a7b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002db5c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = 2;
  while ((uVar3 = FUN_ram_400002f4(), iVar1 = _DAT_ram_3007ae1c, DAT_ram_30049e5a != -1 &&
         (DAT_ram_3007ae20 == '\0'))) {
    DAT_ram_3007ae20 = 1;
    FUN_ram_400002fa();
    iVar4 = FUN_ram_4004ac44(FUN_ram_4002dd3c,0);
    if (iVar4 == 1) {
      return;
    }
    uVar3 = FUN_ram_400002f4();
    DAT_ram_3007ae20 = '\0';
    if ((DAT_ram_30049e5a == -1) || (iVar1 == _DAT_ram_3007ae1c)) break;
    FUN_ram_400002fa();
    if (iVar2 == 1) {
      return;
    }
    iVar2 = 1;
  }
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.11, address 0x4002dc2a.
 * REA evidence: ev_450000178826f1b2f019c7ce9a3798c24e104eaafd14c3bead736d12bf298908
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002dc2a(undefined1 param_1)

{
  FUN_ram_400002f4();
  _DAT_ram_3007ae1c = _DAT_ram_3007ae1c + 1;
  DAT_ram_30049e5a = param_1;
  FUN_ram_400002fa();
  FUN_ram_4002db5c();
  return;
}


/* NanoCore 1.11, address 0x4002dc5a.
 * REA evidence: ev_bcb83789728f65dd0d158d1d27a7af2200e36c0676f50b7d7dc9168d140fae6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002dc5a(int param_1)

{
  uint uVar1;
  int iVar2;
  byte abStack_11 [5];
  
  if (_DAT_ram_3007ae08 != (code *)0x0) {
    FUN_ram_400002f4();
    abStack_11[0] = DAT_ram_30049e5a;
    FUN_ram_400002fa();
    if ((abStack_11[0] != 0xff) || (iVar2 = (*_DAT_ram_3007ae08)(abStack_11), iVar2 == 0)) {
      uVar1 = (uint)abStack_11[0] + param_1;
      if ((int)uVar1 < 0x40) {
        if ((int)uVar1 < 0) {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0x3f;
      }
      if (abStack_11[0] != uVar1) {
        FUN_ram_4002dc2a(uVar1 & 0xff);
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002dcce.
 * REA evidence: ev_fb90b4d4c86f16020f8836ae12df0350208441726dd08ffae00d1867b1b887b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002dcce(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte abStack_11 [5];
  
  uVar1 = (uint)DAT_ram_3007ae14;
  if (((uVar1 != 0) && (_DAT_ram_3007ae08 != (code *)0x0)) &&
     (iVar2 = (*_DAT_ram_3007ae08)(abStack_11), iVar2 == 0)) {
    uVar4 = (uint)abStack_11[0];
    if (uVar1 == 0) {
      uVar5 = 0xffffffff;
      uVar3 = 0xffffffff;
    }
    else {
      uVar5 = 0x3f / uVar1;
      uVar3 = uVar4 / uVar1;
    }
    if ((int)(uVar3 + param_1) < (int)uVar5) {
      uVar5 = uVar3 + param_1;
    }
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    uVar3 = uVar4;
    if (uVar1 != 0) {
      uVar3 = uVar4 % uVar1;
    }
    uVar3 = uVar3 + uVar5 * uVar1;
    if (0x3f < (int)uVar3) {
      uVar3 = 0x3f;
    }
    if (uVar3 != uVar4) {
      FUN_ram_4002dc2a(uVar3 & 0xff);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002dd3c.
 * REA evidence: ev_5c81736dab88312adb750e37c053c3231566bf75d5efae3d7fc3c014336a358c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002dd3c(void)

{
  char cVar1;
  
  FUN_ram_400002f4();
  cVar1 = DAT_ram_30049e5a;
  DAT_ram_30049e5a = -1;
  FUN_ram_400002fa();
  if ((cVar1 != -1) && (_DAT_ram_3007ae0c != (code *)0x0)) {
    (*_DAT_ram_3007ae0c)(cVar1);
  }
  FUN_ram_400002f4();
  cVar1 = DAT_ram_30049e5a;
  DAT_ram_3007ae20 = 0;
  FUN_ram_400002fa();
  if (cVar1 != -1) {
    FUN_ram_4002db5c();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002ddae.
 * REA evidence: ev_266a5fcea59dee877d0fca013a7665ad68272a2a0f604e74d64a684e7954596a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ddae(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4000504c(&DAT_ram_3007ae00,0,0x18);
    return;
  }
  FUN_ram_4000304c(&DAT_ram_3007ae00,param_1,0x18);
  return;
}


/* NanoCore 1.11, address 0x4002ddda.
 * REA evidence: ev_c894a72b1cb33670dca382fa54d3dcbb1e58ad2127406dfda9387103d650fe70
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ddda(void)

{
  FUN_ram_4000504c(0x3007adf0,0,0x10);
  FUN_ram_4000504c(0x3007ade0,0,0x10);
  DAT_ram_30049e5a = 0xff;
  DAT_ram_3007ae20 = 0;
  _DAT_ram_3007ae1c = 0;
  DAT_ram_3007ae18 = 1;
  return;
}


/* NanoCore 1.11, address 0x4002de28.
 * REA evidence: ev_d205e7c4ddc6b1ba9a1f0cd629903ff605392ea48cdd75071501e8cfe229ae30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002de28(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_3007ae04 != (code *)0x0) {
    iVar2 = (*_DAT_ram_3007ae04)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


