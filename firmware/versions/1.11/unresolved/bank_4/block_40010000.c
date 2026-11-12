/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40010000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40010064.
 * REA evidence: ev_84685bf44a99e741ac4ef015c0f1c98e4bce8a23a1cf42042cc8ecf46a23a4a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010064(void)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_1c [4];
  
  if (DAT_ram_3005dea1 != '\0') {
    if (DAT_ram_3005de40 == '\0') {
      DAT_ram_3005dea1 = '\0';
      FUN_ram_4000304c(auStack_1c,&DAT_ram_40094864,0xc);
      DAT_ram_3005de40 = '\x01';
      iVar1 = FUN_ram_4000fe7c(auStack_1c,0xc);
      if (iVar1 < 0) {
        DAT_ram_3005de40 = '\0';
        DAT_ram_3005dea1 = '\x01';
      }
    }
    else {
      DAT_ram_3005dea1 = '\x01';
    }
  }
  if (DAT_ram_3005d0a8 != '\0') {
    DAT_ram_3005d0a8 = 0;
    iVar1 = FUN_ram_40004466(&DAT_ram_40094860);
    auStack_1c[0] = 0;
    FUN_ram_4003f5f4(0);
    FUN_ram_4003f640(0);
    FUN_ram_4003ec0e(5);
    if (iVar1 != 0) {
      FUN_ram_400044b0(iVar1);
      FUN_ram_400045f4(iVar1,0x1c02,auStack_1c);
      FUN_ram_400045f4(iVar1,0x1c05,0);
      FUN_ram_400065c6(1000);
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((DAT_ram_3005d15c != '\0') && (DAT_ram_3005d144 == '\0')) {
    iVar1 = FUN_ram_400042ea();
    iVar2 = FUN_ram_40004352(100);
    if ((iVar2 == 0) || (iVar2 <= iVar1 - _DAT_ram_3005d154)) {
      FUN_ram_4000ffdc(0);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40010188.
 * REA evidence: ev_bd7cceb1fc600b0ebbe97a5af7305c2872903811b5963571a3bc564250f3e608
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010188(void)

{
  do {
    FUN_ram_40010064();
    FUN_ram_400065c6(0x14);
  } while( true );
}


/* NanoCore 1.11, address 0x40010324.
 * REA evidence: ev_db87285051a5e29ed78430189b13f259d435c38b4dcfe8ca68e4a97e22d96a36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010324(void)

{
  DAT_ram_3005de40 = 0;
  _DAT_ram_3005e144 = _DAT_ram_3005e146;
  DAT_ram_3005dea1 = 0;
  _DAT_ram_3005d760 = 0;
  _DAT_ram_3005d762 = 0;
  DAT_ram_3005e042 = 0;
  DAT_ram_3005d76c = 0;
  return;
}


/* NanoCore 1.11, address 0x40010470.
 * REA evidence: ev_34b56e2695bd32f6a27afecbbb39ab1bb1cd7a9cbbe8ed4d40b11fae2a6c51ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40010442) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40010470(uint param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar14;
  
  while (DAT_ram_3005de40 = 0, DAT_ram_3005d76c != '\0') {
    uVar14 = CONCAT44(param_2,1);
    if ((DAT_ram_3005d15c == '\0') || (DAT_ram_3005dd48 != '\0')) {
      uVar5 = FUN_ram_40010324(1,param_2);
      return uVar5;
    }
    if (DAT_ram_3005d76c == '\0') {
      return 1;
    }
    if (_DAT_ram_3005d762 < _DAT_ram_3005d760) {
      uVar11 = _DAT_ram_3005d760 - _DAT_ram_3005d762;
      if (0x40 < uVar11) {
        uVar11 = 0x40;
      }
      DAT_ram_3005de40 = 1;
      uVar14 = FUN_ram_40011c5e(0x83,_DAT_ram_3005d762 + 0x3005d160,uVar11);
      if (-1 < (int)(uint)uVar14) {
        _DAT_ram_3005d762 = uVar11 + _DAT_ram_3005d762;
        return (uint)uVar14;
      }
      _DAT_ram_3005d768 = _DAT_ram_3005d768 + 1;
    }
    DAT_ram_3005de40 = 0;
    _DAT_ram_3005d760 = 0;
    _DAT_ram_3005d762 = 0;
    DAT_ram_3005d76c = '\0';
    if ((DAT_ram_3005d15c == '\0') || (DAT_ram_3005dd48 != '\0')) {
      uVar5 = FUN_ram_40010324((uint)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      return uVar5;
    }
    if (_DAT_ram_3005e144 == _DAT_ram_3005e146) {
      return (uint)uVar14;
    }
    param_2 = 0;
    param_1 = 0x83;
  }
  uVar9 = (uint)_DAT_ram_3005e146;
  uVar5 = (uint)_DAT_ram_3005e144;
  bVar4 = false;
  bVar3 = false;
  uVar8 = 0;
  bVar13 = DAT_ram_3005e042;
  do {
    if (uVar9 == uVar5) {
      if (bVar3) {
        DAT_ram_3005e042 = bVar13;
      }
      if (bVar4) {
        _DAT_ram_3005e144 = (ushort)uVar5;
      }
      if (uVar8 == 0) {
        return param_1;
      }
LAB_ram_40010514:
      DAT_ram_3005de40 = 1;
      uVar5 = FUN_ram_40011c5e(0x83,0x3005de60);
      return uVar5;
    }
    if (0x3b < uVar8) {
      if (bVar3) {
        DAT_ram_3005e042 = bVar13;
      }
      if (bVar4) {
        _DAT_ram_3005e144 = (ushort)uVar5;
      }
      goto LAB_ram_40010514;
    }
    bVar12 = *(byte *)(uVar5 + 0x3005e044);
    if ((char)bVar12 < '\0') {
      uVar5 = uVar5 + 1 & 0xffff;
      if (0xff < uVar5) {
        uVar5 = 0;
      }
      bVar13 = bVar12;
      if (0xef < bVar12) {
        bVar13 = 0;
      }
      bVar4 = true;
      bVar3 = true;
LAB_ram_400105ae:
      bVar10 = bVar12 & 0xf0;
      uVar6 = 0xc;
      if (bVar10 != 0xc0) {
        if (bVar10 < 0xc1) {
          uVar6 = 10;
          if (bVar10 != 0xa0) {
            if (bVar10 < 0xa1) {
              uVar6 = 8;
              if (bVar10 == 0x80) goto LAB_ram_400105fa;
              bVar7 = 0x90;
              uVar6 = 9;
            }
            else {
              bVar7 = 0xb0;
              uVar6 = 0xb;
            }
            if (bVar10 != bVar7) {
LAB_ram_400105de:
              uVar6 = 0;
            }
          }
        }
        else {
          uVar6 = 0xe;
          if (bVar10 != 0xe0) {
            if (bVar10 == 0xf0) {
              uVar6 = 4;
              if ((((bVar12 != 0xf0) && (uVar6 = 2, bVar12 != 0xf1)) && (uVar6 = 3, bVar12 != 0xf2))
                 && ((uVar6 = 2, bVar12 != 0xf3 && (uVar6 = 0xf, bVar12 == 0xf6)))) {
                uVar6 = 5;
              }
            }
            else {
              uVar6 = 0xd;
              if (bVar10 != 0xd0) goto LAB_ram_400105de;
            }
          }
        }
      }
LAB_ram_400105fa:
      param_1 = FUN_ram_4000fe3c(bVar12);
      *(undefined1 *)(uVar8 + 0x3005de60) = uVar6;
      *(byte *)(uVar8 + 0x3005de61) = bVar12;
      if (param_1 < 2) {
        *(undefined1 *)(uVar8 + 0x3005de62) = 0;
LAB_ram_4001069e:
        *(undefined1 *)(uVar8 + 0x3005de63) = 0;
        uVar8 = uVar8 + 4 & 0xff;
      }
      else {
        puVar1 = (undefined1 *)(uVar5 + 0x3005e044);
        uVar5 = uVar5 + 1 & 0xffff;
        *(undefined1 *)(uVar8 + 0x3005de62) = *puVar1;
        if (0xff < uVar5) {
          uVar5 = 0;
        }
        if (param_1 == 2) {
          bVar4 = true;
          goto LAB_ram_4001069e;
        }
        pbVar2 = (byte *)(uVar5 + 0x3005e044);
        param_1 = (uint)*pbVar2;
        uVar5 = uVar5 + 1 & 0xffff;
        *(byte *)(uVar8 + 0x3005de63) = *pbVar2;
        uVar8 = uVar8 + 4 & 0xff;
        bVar4 = true;
        if (uVar5 == 0x100) {
LAB_ram_400106c4:
          bVar4 = true;
          uVar5 = 0;
        }
      }
    }
    else {
      bVar12 = bVar13;
      if (bVar13 != 0) goto LAB_ram_400105ae;
      uVar5 = uVar5 + 1 & 0xffff;
      bVar4 = true;
      if (0xff < uVar5) goto LAB_ram_400106c4;
    }
  } while( true );
}


/* NanoCore 1.11, address 0x40010938.
 * REA evidence: ev_7c54a7f6dda01149013674c854ce12ec4df297e90e61db7b289d47b6ca70921a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010938(char param_1)

{
  undefined *puVar1;
  
  switch(param_1 + -1) {
  case '\0':
  case '\x03':
    DAT_ram_3005d15c = 0;
    DAT_ram_3005d144 = 0;
    FUN_ram_40010324();
    DAT_ram_3005d15d = 0;
    FUN_ram_40013ece(0);
    DAT_ram_3005dd49 = 0;
    DAT_ram_3005d77c = 0;
    _DAT_ram_3005d778 = 0;
    _DAT_ram_3005d77a = 0;
    _DAT_ram_3005d770 = 0;
    _DAT_ram_3005d774 = 0;
    DAT_ram_3005dd4a = 0;
    FUN_ram_4000fcac();
    return;
  case '\x01':
  case '\x02':
    return;
  case '\x04':
    DAT_ram_3005d15d = DAT_ram_3005d15c;
    DAT_ram_3005d15c = 0;
    DAT_ram_3005d144 = 0;
    FUN_ram_40010324();
    puVar1 = (undefined *)0x0;
    goto LAB_ram_40010a10;
  case '\x05':
    if (DAT_ram_3005d15d == '\0') {
      return;
    }
    DAT_ram_3005d15c = 1;
    DAT_ram_3005d144 = 0;
    FUN_ram_4000ffdc(1);
    break;
  case '\x06':
    DAT_ram_3005de40 = 0;
    _DAT_ram_3005d760 = 0;
    _DAT_ram_3005d762 = 0;
    DAT_ram_3005d76c = 0;
    DAT_ram_3005d15c = 1;
    DAT_ram_3005d144 = 0;
    FUN_ram_4000ffdc(1);
    DAT_ram_3005d15d = '\x01';
    break;
  default:
    return;
  }
  puVar1 = &DAT_ram_40010746;
LAB_ram_40010a10:
  FUN_ram_40013ece(puVar1);
  return;
}


/* NanoCore 1.11, address 0x40010a66.
 * REA evidence: ev_2d7597d41c28dc6d4ea74481457a567c2bd88354ffdc787e9b96a4807e6ec895
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010a66(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    DAT_ram_3005e040 = 1;
    DAT_ram_3005dd49 = 0;
    FUN_ram_4000dfd4();
    FUN_ram_4000fcac();
    _DAT_ram_3005d770 = 0;
    _DAT_ram_3005d774 = 0;
    DAT_ram_3005d77c = 0;
    _DAT_ram_3005d778 = 0;
    _DAT_ram_3005d77a = 0;
    DAT_ram_3005dd4a = 0;
    DAT_ram_3005dea2 = 0;
    FUN_ram_400002f4();
    _DAT_ram_3005dd44 = 0;
    _DAT_ram_3005d780 = 0;
    FUN_ram_400002fa();
    FUN_ram_400120c0(2,(uint)DAT_ram_3005dea2 * 0xc0 + 0x3005dec0,0xb8);
    return;
  }
  DAT_ram_3005e041 = 1;
  uVar1 = FUN_ram_4000dc9a(0x3005e160,0xb8);
  DAT_ram_3005d0aa = 1;
  FUN_ram_40011a0c(0x81,0x3005e160,uVar1,0);
  return;
}


/* NanoCore 1.11, address 0x40010b94.
 * REA evidence: ev_09f32a1afe6d2825d3af024d070af84bb9239fc748d5bcce2ea3dc26c0ac2abe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010b94(void)

{
  DAT_ram_3005e041 = 0;
  return;
}


/* NanoCore 1.11, address 0x40010b9e.
 * REA evidence: ev_d954f9fcf6397fc599865227a728cc7fc1ebc8284cd2be3ddcfd4c29794a58df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010b9e(void)

{
  return;
}


/* NanoCore 1.11, address 0x40010ba0.
 * REA evidence: ev_532a203bc6239b84e4aa080fd492174a90ec9ce0f5ac538219cb8c2db24440b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010ba0(void)

{
  int iVar1;
  
  FUN_ram_40013ece(0);
  if (DAT_ram_3005d0b0 == '\0') {
    if (_DAT_ram_3005d0ac == 0) {
      _DAT_ram_3005d0ac = FUN_ram_4003eee0(0x800,0x20,1,FUN_ram_4003ef74);
    }
    if (_DAT_ram_3005d0ac != 0) {
      iVar1 = FUN_ram_4000642e(0x3005d0b4,&DAT_ram_40094890,FUN_ram_40010188,0,_DAT_ram_3005d0ac,
                               0x800,0x13,10);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_40006632(0x3005d0b4);
        if (iVar1 == 0) {
          DAT_ram_3005d0b0 = '\x01';
          goto LAB_ram_40010c2a;
        }
        FUN_ram_4000646e(0x3005d0b4);
      }
      FUN_ram_4003ef2a(_DAT_ram_3005d0ac,1,FUN_ram_4003efae);
      _DAT_ram_3005d0ac = 0;
    }
  }
LAB_ram_40010c2a:
  FUN_ram_4000ef7a(&DAT_ram_40094898);
  FUN_ram_4000f8e4(0x3005dd5c,0x100,&DAT_ram_30049d68,2);
  FUN_ram_4000efc8();
  FUN_ram_4000f8e4(0x3005dd78,0x100,&DAT_ram_30049d68,2);
  FUN_ram_4000efc8();
  FUN_ram_4000f8e4(0x3005dd94,0x100,&DAT_ram_30049d68,2);
  FUN_ram_4000efc8();
  _DAT_ram_3005ddb0 = 0;
  _DAT_ram_3005ddb4 = 0;
  _DAT_ram_3005ddb8 = 0;
  _DAT_ram_3005ddbc = 0;
  FUN_ram_4000efc8(&DAT_ram_3005ddb0);
  _DAT_ram_3005ddcc = 0;
  _DAT_ram_3005ddd0 = 0;
  _DAT_ram_3005ddd4 = 0;
  _DAT_ram_3005ddd8 = 0;
  FUN_ram_4000efc8(&DAT_ram_3005ddcc);
  FUN_ram_4000eff2(&DAT_ram_30049d70);
  FUN_ram_4000eff2(&DAT_ram_30049d78);
  FUN_ram_4000eff2(&DAT_ram_30049d8c);
  FUN_ram_4000eff2(&DAT_ram_30049d84);
  thunk_FUN_ram_4001178c();
  iVar1 = FUN_ram_40028bfc();
  if (iVar1 == 0) {
    FUN_ram_40029058(2);
    FUN_ram_40029146();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40010d62.
 * REA evidence: ev_1b25be3e250a5294d79f32f7f469cbb0162757a7f6ad11127fd8ab62fe577a2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010d62(int param_1,undefined4 param_2,undefined2 param_3)

{
  if (param_1 == 2) {
    DAT_ram_30049d96 = param_3;
    return;
  }
  if (param_1 == 0x81) {
    DAT_ram_30049d94 = param_3;
  }
  return;
}


/* NanoCore 1.11, address 0x40010d84.
 * REA evidence: ev_a16a555d52fc8a605c3c6cf33ec50bd9a8acf94e75d07f3e73a5c6030cbb63c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40010d84(int param_1)

{
  int iVar1;
  
  if (param_1 == 2) {
    iVar1 = (int)DAT_ram_30049d96;
  }
  else {
    iVar1 = 0x80;
    if (param_1 == 0x81) {
      iVar1 = (int)DAT_ram_30049d94;
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40010dac.
 * REA evidence: ev_894515418e38762c4dd625e1d43b011d07dee419da7325d7a1906bb71c159daa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010dac(int param_1,undefined4 param_2,undefined1 param_3)

{
  if (param_1 == 2) {
    DAT_ram_3005e148 = param_3;
    return;
  }
  if (param_1 == 0x81) {
    DAT_ram_3005e043 = param_3;
  }
  return;
}


/* NanoCore 1.11, address 0x40010dce.
 * REA evidence: ev_a9b4790069a8bca48498602182766f679faacd5e3eb20350fa6876a85096e4a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40010dce(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = DAT_ram_3005e148;
  if ((param_1 != 2) && (uVar1 = 0, param_1 == 0x81)) {
    uVar1 = DAT_ram_3005e043;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40010df4.
 * REA evidence: ev_e20981b711df78ace44e938ea43c6a5712c51c9328130be5ac683803288ada49
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010df4(void)

{
  if (DAT_ram_3005d0b0 == '\0') {
    FUN_ram_40010064();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40010e04.
 * REA evidence: ev_d5969748738bf10b4923b79308262e11626978edea086418f5cefda1ba760aa8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40010e16) */

int FUN_ram_40010e04(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + (param_1 & 0x1f);
  if ((uVar2 & 0x1f) != 0) {
    uVar2 = uVar2 + (0x20 - (int)uVar2 % 0x20);
  }
  fence();
  custom0();
  iVar1 = (param_1 & 0xffffffe0) + uVar2;
  for (; 0 < (int)uVar2; uVar2 = uVar2 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  return iVar1;
}


/* NanoCore 1.11, address 0x40010e42.
 * REA evidence: ev_8eedf88af871dc5f785fa9e956726ee867902c993b28428cf03801badd3d93a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40010e54) */

int FUN_ram_40010e42(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + (param_1 & 0x1f);
  if ((uVar2 & 0x1f) != 0) {
    uVar2 = uVar2 + (0x20 - (int)uVar2 % 0x20);
  }
  fence();
  custom0();
  iVar1 = (param_1 & 0xffffffe0) + uVar2;
  for (; 0 < (int)uVar2; uVar2 = uVar2 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  return iVar1;
}


/* NanoCore 1.11, address 0x40010e80.
 * REA evidence: ev_a24851d934e516f93a5069bb9726e667f0ef49a8d2525f73031ba39d581d8062
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010e80(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
    for (uVar3 = uVar2; uVar3 < 5; uVar3 = uVar3 + 1) {
      if ((1 << (uVar3 & 0x1f) & _DAT_ram_3005e378) != 0) {
        uVar3 = uVar3 << 0xb;
        goto LAB_ram_40010ebc;
      }
    }
    uVar3 = 0;
LAB_ram_40010ebc:
    puVar1 = (uint *)(uVar2 * 4 + 0x1020021c);
    fence();
    fence();
    *puVar1 = uVar3 | *puVar1 & 0xffff87ff;
    if (uVar2 == 5) {
      return;
    }
  } while( true );
}


/* NanoCore 1.11, address 0x40010ed6.
 * REA evidence: ev_138f9b55cf6aaa26c2545557f4f26d22b60807d0e36938417f5cdcfdbd034a36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40010f02) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40010ed6(void)

{
  int iVar1;
  
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 2;
  iVar1 = 0x30d41;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    fence();
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40010f0a.
 * REA evidence: ev_e18c9b77d1b7e11e21fe7c83e8797277841fa9905bd04555ffe90549f53d8886
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010f0a(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) != param_2) {
      FUN_ram_4000571e();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40010f2e.
 * REA evidence: ev_0ac4c62ce3771e3977d683683b7d782aeae3b22f92db271c573f2a0aa2f14400
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40010f2e(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x10) = param_2;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (0x200 < uVar2) {
    iVar1 = FUN_ram_400056e4(uVar2,0x20);
    *(int *)(param_1 + 8) = iVar1;
    uVar3 = 0;
    if (iVar1 == 0) {
      FUN_ram_40032a1a(&DAT_ram_40094720);
      FUN_ram_40032a30(s_alloc_error__ram_40094a48);
      FUN_ram_40032a1a(&DAT_ram_40094748);
      uVar3 = 0xfffffffb;
    }
    return uVar3;
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  return 0;
}


/* NanoCore 1.11, address 0x40010f90.
 * REA evidence: ev_7905fa4b3af885ee7266364323695a2b6f7eead45fac4f0d4a5b726676f1a371
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010f90(void)

{
  _DAT_ram_3005e2e8 = 8;
  _DAT_ram_3005e2dc = &DAT_ram_3005e240;
  DAT_ram_3005e220 = 1;
  FUN_ram_40010e04(&DAT_ram_3005e240,0x20);
  fence();
  _DAT_ram_102002c0 = 0x20080008;
  fence();
  _DAT_ram_10200320 = &DAT_ram_3005e240;
  fence();
  _DAT_ram_10200280 = 0xffffffff;
  fence();
  fence();
  _DAT_ram_10200240 = _DAT_ram_10200240 | 0x84008000;
  return;
}


