/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4002e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002e00e.
 * REA evidence: ev_62a79791d53e93dad285f3ecacd75b02d56f6f462c17631d5606d454f2ecdb6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e00e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_40004346();
  iVar2 = FUN_ram_400043ae(param_1);
  while ((iVar3 = FUN_ram_4002dd60(), iVar3 == 0 && (param_1 != 0))) {
    FUN_ram_400064e4(10);
    iVar3 = FUN_ram_40004346();
    if (iVar2 <= iVar3 - iVar1) {
      FUN_ram_4002dd60();
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002e05c.
 * REA evidence: ev_6d3f31ecba8647327e505a04a9b06e1943d7910f382d348e35257ec43557045a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e05c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  if (param_1 < 1) {
    return;
  }
  iVar2 = FUN_ram_4002dd60();
  iVar3 = FUN_ram_4002dd4e();
  if (iVar3 != 0) {
    if (iVar2 - 2U < 2) {
LAB_ram_4002e0b0:
      FUN_ram_4002dd80();
      return;
    }
    if (iVar2 == 4) {
      if (param_1 < 0xdde) {
        DAT_ram_30079df8 = 0;
        return;
      }
      if ((DAT_ram_30079df8 < 5) &&
         (bVar5 = DAT_ram_30079df8 + 1, bVar1 = DAT_ram_30079df8 != 4, DAT_ram_30079df8 = bVar5,
         bVar1)) {
        return;
      }
    }
    else {
      if (param_1 < 0xdac) {
        DAT_ram_30079dfa = 0;
        if (DAT_ram_30079dfc < 5) {
          DAT_ram_30079dfc = DAT_ram_30079dfc + 1;
        }
        if (param_1 < 0xd7b) {
          if ((1 < DAT_ram_30079df9) ||
             (bVar5 = DAT_ram_30079df9 + 1, bVar1 = DAT_ram_30079df9 == 1, DAT_ram_30079df9 = bVar5,
             bVar1)) goto LAB_ram_4002e0b0;
        }
        else {
          DAT_ram_30079df9 = 0;
        }
        if (DAT_ram_30079dfc < 5) {
          DAT_ram_30079dfa = 0;
          return;
        }
        goto LAB_ram_4002e0b0;
      }
      DAT_ram_30079dfc = 0;
      DAT_ram_30079df9 = 0;
      DAT_ram_30079df8 = 0;
      if ((iVar2 != 5) && (iVar2 = FUN_ram_4002dcfe(param_1), iVar2 == 0)) {
        return;
      }
    }
    FUN_ram_4002dc40();
    FUN_ram_4002dc62();
    uVar4 = 5;
    goto LAB_ram_4002e0f6;
  }
  if (iVar2 == 4) {
    FUN_ram_4002dc40();
    if (param_1 < 0xdac) {
      uVar4 = 3;
      if (param_1 < 0xd7b) goto LAB_ram_4002e1b0;
LAB_ram_4002e1ae:
      uVar4 = 2;
LAB_ram_4002e1b0:
      FUN_ram_4002ddd0(uVar4);
      return;
    }
  }
  else {
    if (iVar2 == 5) {
      FUN_ram_4002dc82();
      iVar2 = 0;
      FUN_ram_4002dc40();
    }
    else if (iVar2 - 2U < 2) {
      if (iVar2 == 2) {
        if (param_1 < 0xd7b) {
          if ((1 < DAT_ram_30079df9) ||
             (bVar5 = DAT_ram_30079df9 + 1, bVar1 = DAT_ram_30079df9 == 1, DAT_ram_30079df9 = bVar5,
             bVar1)) {
            FUN_ram_4002ddd0(3);
          }
        }
        else {
          DAT_ram_30079df9 = 0;
        }
      }
      FUN_ram_4002dca0();
      return;
    }
    if (param_1 < 0xdac) {
      DAT_ram_30079dfa = 0;
      if (DAT_ram_30079dfc < 5) {
        DAT_ram_30079dfc = DAT_ram_30079dfc + 1;
      }
      if (param_1 < 0xd7b) {
        if ((1 < DAT_ram_30079df9) ||
           (bVar5 = DAT_ram_30079df9 + 1, bVar1 = DAT_ram_30079df9 == 1, DAT_ram_30079df9 = bVar5,
           bVar1)) {
          uVar4 = 3;
          goto LAB_ram_4002e1b0;
        }
      }
      else {
        DAT_ram_30079df9 = 0;
      }
      if (DAT_ram_30079dfc < 5) {
        DAT_ram_30079dfa = 0;
        return;
      }
      goto LAB_ram_4002e1ae;
    }
    DAT_ram_30079dfc = 0;
    DAT_ram_30079df9 = 0;
    DAT_ram_30079df8 = 0;
    if ((iVar2 != 1) && (iVar2 = FUN_ram_4002dcfe(param_1), iVar2 == 0)) {
      return;
    }
    FUN_ram_4002dc40();
  }
  uVar4 = 1;
LAB_ram_4002e0f6:
  FUN_ram_4002dc82(uVar4);
  return;
}


/* NanoCore 1.12, address 0x4002e2c4.
 * REA evidence: ev_5e97f1a543446cea60cec258b8727103f3d51fa8315dd5607a7176d49dc7f30e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e2c4(undefined4 param_1)

{
  FUN_ram_400484ce();
  FUN_ram_40043ba4(param_1,0x10);
  return;
}


/* NanoCore 1.12, address 0x4002e2da.
 * REA evidence: ev_815eb10a73664bd8ffdcc5a5afae7ab1286d31d2faef5faec531e01b14caa882
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002e2da(void)

{
  int iVar1;
  
  if ((_DAT_ram_30079e08 == 0) || (_DAT_ram_30079e10 == 0)) {
    return;
  }
  if (_DAT_ram_30079e24 == 4) {
    FUN_ram_40043ba4();
    iVar1 = _DAT_ram_30079e10;
  }
  else {
    FUN_ram_400440ce(_DAT_ram_30079e10,1);
    iVar1 = _DAT_ram_30079e08;
  }
  if (DAT_ram_30079e0c != '\0') {
    FUN_ram_40043ba4();
    return;
  }
  FUN_ram_400440ce(iVar1,1);
  return;
}


/* NanoCore 1.12, address 0x4002e35c.
 * REA evidence: ev_cf91c8b22e30d09fd945c192968d51cfed339a88b73bb38b6d45ea39c8d9accb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e35c(undefined4 param_1)

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


/* NanoCore 1.12, address 0x4002e386.
 * REA evidence: ev_b863d770035306b58a04099555a549e87c3717fd4f85bf6dd1343c77b48caf52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e386(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40043b84();
  FUN_ram_4002e2c4();
  FUN_ram_40045014(uVar1,param_2,param_3);
  FUN_ram_400450a2(uVar1,param_4,param_5);
  FUN_ram_400489d2(uVar1,param_6,0);
  FUN_ram_400489f0(uVar1,0xff,0);
  FUN_ram_40048a2e(uVar1,0,0);
  FUN_ram_40048afe(uVar1,0,0);
  return;
}


/* NanoCore 1.12, address 0x4002e3e8.
 * REA evidence: ev_11cb633f3b0ec2bfa82a25495b93b82c342033f72318d84678ed352f70b3ffc1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002e3e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_30;
  
  iVar1 = FUN_ram_4002de3a();
  if (2 < param_1 - 2U) {
    return 0xffffffff;
  }
  if (_DAT_ram_30079e1c == 0) {
    local_30 = local_30 & 0xff000000;
    FUN_ram_4004d2b6();
    FUN_ram_4004d462();
    _DAT_ram_30079e1c = FUN_ram_40043b84();
    FUN_ram_4002e2c4();
    FUN_ram_400450a2(_DAT_ram_30079e1c,0x20000064);
    FUN_ram_40045126(_DAT_ram_30079e1c,9,0,0);
    FUN_ram_400489d2(_DAT_ram_30079e1c,local_30,0);
    FUN_ram_400489f0(_DAT_ram_30079e1c,0xff,0);
    FUN_ram_40048a2e(_DAT_ram_30079e1c,0,0);
    FUN_ram_40048afe(_DAT_ram_30079e1c,0,0);
    FUN_ram_400440ce(_DAT_ram_30079e1c,2);
    FUN_ram_4002e35c(_DAT_ram_30079e1c);
    _DAT_ram_30079e08 = FUN_ram_40043b84(_DAT_ram_30079e1c);
    FUN_ram_4002e2c4();
    FUN_ram_400450a2(_DAT_ram_30079e08,0x3c,0x1e);
    FUN_ram_40045126(_DAT_ram_30079e08,9,0,0);
    uVar2 = FUN_ram_40043b84(_DAT_ram_30079e08);
    FUN_ram_4002e2c4();
    FUN_ram_40045014(uVar2,0x34,9);
    FUN_ram_400450a2(uVar2,6,0xc);
    FUN_ram_400489d2(uVar2,local_30,0);
    FUN_ram_400489f0(uVar2,0xff,0);
    FUN_ram_400489fe(uVar2,0xd9d8d0,0);
    FUN_ram_40048a1e(uVar2,0xff,0);
    FUN_ram_40048a2e(uVar2,2,0);
    FUN_ram_40048afe(uVar2,0,0);
    uVar2 = FUN_ram_40043b84(_DAT_ram_30079e08);
    FUN_ram_4002e2c4();
    FUN_ram_40045014(uVar2,1,2);
    FUN_ram_400450a2(uVar2,0x34,0x1a);
    FUN_ram_400489d2(uVar2,local_30,0);
    FUN_ram_400489f0(uVar2,0xff,0);
    FUN_ram_400489fe(uVar2,0xd9d8d0,0);
    FUN_ram_40048a1e(uVar2,0xff,0);
    FUN_ram_40048a2e(uVar2,2,0);
    FUN_ram_40048afe(uVar2,1,0);
    FUN_ram_4002e386(_DAT_ram_30079e08,6,7,4,0x10,0xc92f36);
    _DAT_ram_30079e10 = FUN_ram_40043b84(_DAT_ram_30079e08);
    FUN_ram_4002e2c4();
    FUN_ram_40045014(_DAT_ram_30079e10,0x17,6);
    FUN_ram_400450a2(_DAT_ram_30079e10,0xc,0x12);
    FUN_ram_4002e386(_DAT_ram_30079e10,5,0,4,2,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,4,2,4,2,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,3,4,4,2,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,3,6,8,1,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,2,7,8,1,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,1,8,8,1,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,5,9,3,2,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,5,0xb,2,1,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,4,0xc,2,2,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,4,0xe,1,2,0xf2bc3d);
    FUN_ram_4002e386(_DAT_ram_30079e10,3,0x10,1,1,0xf2bc3d);
    _DAT_ram_30079e24 = param_1;
  }
  else {
    uVar3 = _DAT_ram_30079e24 - 2;
    _DAT_ram_30079e24 = param_1;
    if (uVar3 < 2) {
      if (param_1 - 2U == 2) {
        _DAT_ram_30079e24 = 4;
      }
      else if (_DAT_ram_30079e20 == iVar1) goto LAB_ram_4002e484;
    }
  }
  DAT_ram_30079e0c = 1;
  _DAT_ram_30079e20 = iVar1;
  _DAT_ram_30079e14 = FUN_ram_40056a9e();
  DAT_ram_30079e18 = 0;
  DAT_ram_30079e1a = 0;
  DAT_ram_30079e19 = 0;
LAB_ram_4002e484:
  FUN_ram_4002e2da();
  FUN_ram_4002e35c(_DAT_ram_30079e1c);
  FUN_ram_400455dc(_DAT_ram_30079e1c);
  return 0;
}


/* NanoCore 1.12, address 0x4002e738.
 * REA evidence: ev_14a5ecdfa5626451c58f0a78ccc92a1e1413cd2f5f7da7aa3f1bd9da0befe966
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002e738(void)

{
  if (_DAT_ram_30079e1c != 0) {
    FUN_ram_40048d5c();
  }
  _DAT_ram_30079e1c = 0;
  _DAT_ram_30079e08 = 0;
  _DAT_ram_30079e10 = 0;
  _DAT_ram_30079e24 = 0;
  _DAT_ram_30079e20 = 0;
  DAT_ram_30079e0c = 0;
  DAT_ram_30079e18 = 0;
  DAT_ram_30079e1a = 0;
  DAT_ram_30079e19 = 0;
  _DAT_ram_30079e14 = 0;
  return;
}


/* NanoCore 1.12, address 0x4002e7a0.
 * REA evidence: ev_3a419ad266e210d6a2f8f3ab6d243326b97d67db54e3d587e85e6c5c16f72c7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002e7a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_ram_4002dd60();
  iVar2 = FUN_ram_4002de3a();
  if (iVar1 - 2U < 3) {
    if (((_DAT_ram_30079e1c == 0) || (_DAT_ram_30079e24 != iVar1)) ||
       ((iVar1 - 2U != 2 && (_DAT_ram_30079e20 != iVar2)))) {
      FUN_ram_4002e3e8(iVar1);
    }
    else {
      iVar1 = FUN_ram_40056a9e();
      uVar4 = _DAT_ram_30079e24 - 2;
      if ((uVar4 < 2) && (DAT_ram_30079e18 == '\0')) {
        DAT_ram_30079e18 = '\x01';
        _DAT_ram_30079e14 = iVar1;
        FUN_ram_4002df74(_DAT_ram_30079e20);
      }
      else if (499 < (uint)(iVar1 - _DAT_ram_30079e14)) {
        if ((uVar4 < 2) && (2 < DAT_ram_30079e1a)) {
          _DAT_ram_30079e14 = iVar1;
          if (DAT_ram_30079e19 == '\0') {
            DAT_ram_30079e19 = '\x01';
            FUN_ram_4002dfc0(_DAT_ram_30079e20);
          }
        }
        else {
          if ((uVar4 < 2) && (DAT_ram_30079e0c != '\0')) {
            DAT_ram_30079e1a = DAT_ram_30079e1a + 1;
          }
          DAT_ram_30079e0c = DAT_ram_30079e0c == '\0';
          _DAT_ram_30079e14 = iVar1;
          FUN_ram_4002e2da();
          FUN_ram_400455dc(_DAT_ram_30079e1c);
        }
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if (_DAT_ram_30079e1c != 0) {
      FUN_ram_4002e738();
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4002e92c.
 * REA evidence: ev_3b1831625e9e7aacc6598b9c3c348a8535361fcefba085254b032029084afab5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e92c(uint param_1,undefined1 param_2)

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


/* NanoCore 1.12, address 0x4002e954.
 * REA evidence: ev_f8a53769e25345f4e696265d15a488ede63dbec0b8ce7cc2e8fff7f195e7b3d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e954(uint param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  if (param_1 < 8) {
    iVar1 = FUN_ram_40025d4e();
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


/* NanoCore 1.12, address 0x4002e990.
 * REA evidence: ev_8f8dfb73e72ae1109cad374d882d6d5c9b2dac36d6b4fd54d8382ce371a8b91e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e990(float param_1,uint param_2,uint param_3)

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
    uVar2 = FUN_ram_40023402(param_2);
    uVar3 = nc_effect_parameter_count(param_2,uVar2,1);
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


/* NanoCore 1.12, address 0x4002ea20.
 * REA evidence: ev_e223edf081338d9e9ed75cbe14ac757365e5b8e5b8d24a8eed4ad03c870b2683
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ea20(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = 2;
  while ((uVar3 = FUN_ram_400002f4(), iVar1 = _DAT_ram_30079e64, DAT_ram_3004ad9e != -1 &&
         (DAT_ram_30079e68 == '\0'))) {
    DAT_ram_30079e68 = 1;
    FUN_ram_400002fa();
    iVar4 = FUN_ram_4004ad3c(FUN_ram_4002ec00,0);
    if (iVar4 == 1) {
      return;
    }
    uVar3 = FUN_ram_400002f4();
    DAT_ram_30079e68 = '\0';
    if ((DAT_ram_3004ad9e == -1) || (iVar1 == _DAT_ram_30079e64)) break;
    FUN_ram_400002fa();
    if (iVar2 == 1) {
      return;
    }
    iVar2 = 1;
  }
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.12, address 0x4002eaee.
 * REA evidence: ev_05614dc2428ba4306a0f14e3294e6fdf3d5f60506c082291be524575c2f75602
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002eaee(undefined1 param_1)

{
  FUN_ram_400002f4();
  _DAT_ram_30079e64 = _DAT_ram_30079e64 + 1;
  DAT_ram_3004ad9e = param_1;
  FUN_ram_400002fa();
  FUN_ram_4002ea20();
  return;
}


/* NanoCore 1.12, address 0x4002eb1e.
 * REA evidence: ev_ad1bd00e37fe06a7a798c86612418bec497a99520fb58bfe1d835440493f5bda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002eb1e(int param_1)

{
  uint uVar1;
  int iVar2;
  byte abStack_11 [5];
  
  if (_DAT_ram_30079e50 != (code *)0x0) {
    FUN_ram_400002f4();
    abStack_11[0] = DAT_ram_3004ad9e;
    FUN_ram_400002fa();
    if ((abStack_11[0] != 0xff) || (iVar2 = (*_DAT_ram_30079e50)(abStack_11), iVar2 == 0)) {
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
        FUN_ram_4002eaee(uVar1 & 0xff);
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002eb92.
 * REA evidence: ev_959505fb33dbf7a941da9cfd09fe907ea11e2845d3167f001581b15acb5755d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002eb92(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte abStack_11 [5];
  
  uVar1 = (uint)DAT_ram_30079e5c;
  if (((uVar1 != 0) && (_DAT_ram_30079e50 != (code *)0x0)) &&
     (iVar2 = (*_DAT_ram_30079e50)(abStack_11), iVar2 == 0)) {
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
      FUN_ram_4002eaee(uVar3 & 0xff);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002ec00.
 * REA evidence: ev_0996ed00521ff30f8a97b1725f4fc6e4b1e9abc505c1f7bf4b9fbfd84f957982
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ec00(void)

{
  char cVar1;
  
  FUN_ram_400002f4();
  cVar1 = DAT_ram_3004ad9e;
  DAT_ram_3004ad9e = -1;
  FUN_ram_400002fa();
  if ((cVar1 != -1) && (_DAT_ram_30079e54 != (code *)0x0)) {
    (*_DAT_ram_30079e54)(cVar1);
  }
  FUN_ram_400002f4();
  cVar1 = DAT_ram_3004ad9e;
  DAT_ram_30079e68 = 0;
  FUN_ram_400002fa();
  if (cVar1 != -1) {
    FUN_ram_4002ea20();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002ec72.
 * REA evidence: ev_a8dbcffa103e1802d577b5cee1711e45a58a507027d913f75b523663b7409c7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ec72(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_40004f92(&DAT_ram_30079e48,0,0x18);
    return;
  }
  FUN_ram_4000303c(&DAT_ram_30079e48,param_1,0x18);
  return;
}


/* NanoCore 1.12, address 0x4002ec9e.
 * REA evidence: ev_57cde2f69ad67116b5206c63f24fb7481c66fd964d246aecf40e1ae60450d576
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ec9e(void)

{
  FUN_ram_40004f92(0x30079e38,0,0x10);
  FUN_ram_40004f92(0x30079e28,0,0x10);
  DAT_ram_3004ad9e = 0xff;
  DAT_ram_30079e68 = 0;
  _DAT_ram_30079e64 = 0;
  DAT_ram_30079e60 = 1;
  return;
}


/* NanoCore 1.12, address 0x4002ecec.
 * REA evidence: ev_bc666ff36f3a6f3924cb3a9b85165060d90f1bb267da346353cd9be088a0b8bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002ecec(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_30079e4c != (code *)0x0) {
    iVar2 = (*_DAT_ram_30079e4c)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4002efea.
 * REA evidence: ev_d91af78ca07a3a4f922662145b597230afffb31b09023c41c33e5468d3be8019
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002efea(char param_1,uint param_2)

{
  if ((DAT_ram_30079e60 != '\0') && ((byte)(param_1 - 1U) < 0x10)) {
    custom0();
    if ((param_2 & 0x7f) < 0x40) {
      FUN_ram_4002eaee(param_2 & 0x7f);
      return;
    }
  }
  return;
}


