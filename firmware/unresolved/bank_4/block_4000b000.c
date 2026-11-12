/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4000b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4000b2dc.
 * REA evidence: ev_4c658b61fc1ea736c971856fb72973937bb73ecd5a55fe42980f46586fa5ccd2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000b2dc(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  do {
    do {
      iVar1 = FUN_ram_40004832(_DAT_ram_30049e40,0xffffffff);
    } while (iVar1 != 0);
    iVar1 = DAT_ram_30046680 << 2;
    while (FUN_ram_400002f4(), _DAT_ram_3004d56c != _DAT_ram_3004d570) {
      uVar3 = _DAT_ram_3004d570 - _DAT_ram_3004d56c;
      if (uVar3 < 9) {
        iVar4 = 0;
        iVar5 = 0;
        if (uVar3 != 1) goto LAB_ram_4000b35c;
      }
      else {
        iVar4 = uVar3 - 8;
        _DAT_ram_3004d56c = _DAT_ram_3004d56c + iVar4;
        uVar3 = 8;
LAB_ram_4000b35c:
        _DAT_ram_3004d56c = _DAT_ram_3004d56c + (uVar3 - 1);
        iVar5 = iVar4 + (uVar3 - 1);
      }
      if (_DAT_ram_3004d56c == *(uint *)((_DAT_ram_3004d56c & 7) * 8 + 0x3004d52c)) {
        uVar3 = (uint)*(byte *)((_DAT_ram_3004d56c & 7) * 8 + 0x3004d530);
        _DAT_ram_3004d56c = _DAT_ram_3004d56c + 1;
        FUN_ram_400002fa();
        if (iVar5 != 0) {
          FUN_ram_400080ce(iVar5);
        }
        if ((1 < uVar3) ||
           (((_DAT_ram_3004a3d8 != 0 &&
             (uVar2 = FUN_ram_400085be(_DAT_ram_3004a3d8,iVar1), -1 < (int)uVar2)) &&
            (uVar3 == (uVar2 & 0xff))))) {
          iVar5 = 1;
          goto LAB_ram_4000b384;
        }
        DAT_ram_30049e70 = 1;
        if (DAT_ram_3004d524 == '\0') {
          FUN_ram_40009a9a(uVar3);
        }
        DAT_ram_30049e70 = 0;
      }
      else {
        _DAT_ram_3004d56c = _DAT_ram_3004d56c + 1;
        FUN_ram_400002fa();
        iVar5 = iVar5 + 1;
LAB_ram_4000b384:
        FUN_ram_400080ce(iVar5);
      }
    }
    FUN_ram_400002fa();
  } while( true );
}


/* NanoCore 1.10, address 0x4000b3e2.
 * REA evidence: ev_07e2638fbc6e83d7cf9de4f60a52d5b3c6f91ae5a5ed74bfce6815fc81fae6c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000b3e2(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte local_24 [12];
  
  if (DAT_ram_3004d524 != '\0') {
    return;
  }
  uVar2 = DAT_ram_3004d574 & 1;
  bVar1 = (byte)uVar2;
  if (((_DAT_ram_3004a3d8 == 0) ||
      (uVar4 = FUN_ram_400085be(_DAT_ram_3004a3d8,DAT_ram_30046680 << 2), (int)uVar4 < 0)) ||
     (((uVar4 & 0xff) - uVar2 & 1) != 0)) {
    local_24[0] = bVar1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if (uVar2 == (uVar4 & 0xff)) goto LAB_ram_4000b458;
    local_24[0] = bVar1;
    uVar3 = 2;
    DAT_ram_30046560 = DAT_ram_30046560 + 1;
    local_24[1] = bVar1 ^ 1;
  }
  DAT_ram_3004d574 = bVar1 + (char)uVar3 & 1;
  local_24[0] = bVar1;
LAB_ram_4000b458:
  uVar2 = 0;
  if (_DAT_ram_30049e40 == 0) {
    for (uVar2 = 0; (uVar2 & 0xff) < uVar3; uVar2 = uVar2 + 1) {
      DAT_ram_30049e70 = 1;
      FUN_ram_40009a9a(local_24[uVar2]);
      DAT_ram_30049e70 = 0;
    }
  }
  else {
    for (; (uVar2 & 0xff) < uVar3; uVar2 = uVar2 + 1) {
      bVar1 = local_24[uVar2];
      *(uint *)((_DAT_ram_3004d570 & 7) * 8 + 0x3004d52c) = _DAT_ram_3004d570;
      *(byte *)((_DAT_ram_3004d570 & 7) * 8 + 0x3004d530) = bVar1;
      _DAT_ram_3004d570 = _DAT_ram_3004d570 + 1;
    }
    if (uVar3 != 0) {
      FUN_ram_400048d4(_DAT_ram_30049e40);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4000b4fe.
 * REA evidence: ev_990c638cf554376079502c52aa9379d01cfd965138730c67c28c701d0bebd8da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000b4fe(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_ram_40008120();
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    FUN_ram_4000787e(0);
  }
  else {
    if (param_1 == 0) {
      FUN_ram_4000787e(0);
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if (*(int *)(iVar1 + 0xc) != 1) {
        *(undefined1 *)(iVar2 + 0x10) = 0;
        FUN_ram_400086c4(iVar2 + 0x14);
      }
      *(undefined4 *)(iVar2 + 0x50) = 0x3004d5d0;
      *(undefined4 *)(iVar2 + 0xc) = 1;
      *(undefined2 *)(iVar2 + 0x10) = 0;
      FUN_ram_4005eaba(0x3004abe8);
      uVar4 = 0;
      goto LAB_ram_4000b584;
    }
    iVar3 = FUN_ram_400849e6(0x3004d584);
    if (iVar3 == 0) {
      FUN_ram_40007c4e();
    }
    iVar3 = FUN_ram_400849e6(0x3004d584);
    if (iVar3 != 0) {
      FUN_ram_4000787e(1);
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if (*(int *)(iVar1 + 0xc) != 1) {
        *(undefined1 *)(iVar2 + 0x10) = 0;
        FUN_ram_400086c4(iVar2 + 0x14);
      }
      *(undefined4 *)(iVar2 + 0xc) = 1;
      *(undefined4 *)(iVar2 + 0x50) = 0x3004d5d0;
      *(undefined2 *)(iVar2 + 0x10) = 0x100;
      FUN_ram_4005eaba(0x3004abe8);
      uVar4 = 0;
      goto LAB_ram_4000b584;
    }
    FUN_ram_4000787e();
    FUN_ram_4000305c(iVar2,iVar1,0x2dc);
    if (*(int *)(iVar1 + 0xc) != 1) {
      *(undefined1 *)(iVar2 + 0x10) = 0;
      FUN_ram_400086c4(iVar2 + 0x14);
    }
    *(undefined4 *)(iVar2 + 0x50) = 0x3004d5d0;
    *(undefined4 *)(iVar2 + 0xc) = 1;
    *(undefined2 *)(iVar2 + 0x10) = 0;
    FUN_ram_4005eaba(0x3004abe8);
  }
  uVar4 = 0xffffffff;
LAB_ram_4000b584:
  FUN_ram_40007ccc();
  return uVar4;
}


/* NanoCore 1.10, address 0x4000b63c.
 * REA evidence: ev_4bc46a62637423fc7e804e5cbe6fcd2fdf62d726798ca74d3e64cf10812fcd69
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000b63c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [20];
  
  if (0x1d < param_1) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_40007af4(0,1);
  uVar2 = DAT_ram_4009281c;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_4000821c();
    if (iVar1 == 0) {
      FUN_ram_400091d0(0,0x3004d5d0,8);
      iVar1 = FUN_ram_4000868c(0x3004d5d0);
      if (iVar1 == 0) goto LAB_ram_4000b694;
    }
    uVar2 = 0;
  }
  FUN_ram_400078be(uVar2,0x3004d5d0);
LAB_ram_4000b694:
  FUN_ram_4000787e(0);
  FUN_ram_400065d4(5);
  iVar1 = FUN_ram_4008dbbc(param_1,0x3004d584);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40088880(param_1), iVar1 == 0)) {
    FUN_ram_40007be6(0x3004d584,param_2,param_3);
    FUN_ram_4007167a(auStack_24,5);
    uVar2 = FUN_ram_40007af4(0,1);
    FUN_ram_40008120();
    iVar1 = FUN_ram_40007b34(0,1,0x3004d5d0,auStack_24,5,uVar2);
    FUN_ram_40007ccc();
    if (iVar1 == 0) {
      FUN_ram_400080ec(0x3004d5d0);
      iVar1 = FUN_ram_40007af4(0,1);
      FUN_ram_4000787e();
      if (iVar1 == 0) {
        iVar1 = FUN_ram_4000821c();
        if ((iVar1 != 0) || (iVar1 = FUN_ram_40007ce4(), uVar2 = DAT_ram_4009281c, iVar1 != 0)) {
          uVar2 = 0;
        }
        FUN_ram_400078be(uVar2,0x3004d5d0);
        return 0;
      }
      FUN_ram_400091d0(DAT_ram_4009281c,0x3004d5d0,0x10);
      return 0;
    }
  }
  iVar1 = FUN_ram_40007af4(0,1);
  FUN_ram_4000787e();
  if (iVar1 == 0) {
    FUN_ram_400078be(DAT_ram_4009281c,0x3004d5d0);
  }
  else {
    FUN_ram_400091d0(DAT_ram_4009281c,0x3004d5d0,0x10);
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4000b7ae.
 * REA evidence: ev_de6bd4d78e676484fead8056e2adfee76a751749edec95066c6851041bd395a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000b7ae(uint param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  
  if (param_1 < 0xc) {
    if (param_1 < 8) {
      FUN_ram_40008120();
      uVar4 = FUN_ram_40009368(param_1);
      FUN_ram_40007ccc();
    }
    else {
      iVar3 = FUN_ram_40007d82();
      if (iVar3 == 0) {
        FUN_ram_400002f4();
        cVar2 = DAT_ram_30049efc;
        cVar5 = '\0';
        if (-1 < DAT_ram_3004651e) {
          DAT_ram_3004651e = -1;
          DAT_ram_30049efc = '\0';
          _DAT_ram_30049dd0 = _DAT_ram_30049dd0 + 1;
          cVar5 = cVar2;
        }
        FUN_ram_400002fa();
        if (cVar5 != '\0') {
          FUN_ram_400091d0(DAT_ram_4009281c,0x30049f00,0x10);
          FUN_ram_400002f4();
          sVar1 = DAT_ram_3004651e;
          FUN_ram_400002fa();
          if (-1 < sVar1) {
            FUN_ram_4000789c(0);
            FUN_ram_400078be(0,0x30049f00);
          }
        }
        FUN_ram_40008120();
        uVar4 = FUN_ram_40009368(param_1);
        FUN_ram_40007ccc();
        FUN_ram_4000829c();
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    return uVar4;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4000b88e.
 * REA evidence: ev_30d9e69ccd871b7916b8e9eab008c20e26bc6a5821c82860a8991f0672f6813e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4000b88e(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  if ((iVar2 == 0) || (iVar3 == 0)) {
    FUN_ram_4000789c(0);
    iVar2 = -1;
    goto LAB_ram_4000b8ce;
  }
  if (param_1 != 0) {
    if (DAT_ram_3004b46c < 8) {
      iVar4 = FUN_ram_400849e6(0x3004a390);
      if (iVar4 == 0) {
        if (DAT_ram_3004b46c < 8) {
          FUN_ram_4000813a(DAT_ram_3004b46c + 0x1e);
        }
        else {
          FUN_ram_4000818a();
        }
      }
      if ((DAT_ram_3004b46c < 8) && (iVar4 = FUN_ram_400849e6(0x3004a390), iVar4 == 0))
      goto LAB_ram_4000b8fc;
    }
    FUN_ram_4000789c(1);
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if (*(int *)(iVar2 + 300) == 8) {
      if (*(byte *)(iVar2 + 0x130) != DAT_ram_3004b46c) goto LAB_ram_4000b992;
    }
    else {
LAB_ram_4000b992:
      FUN_ram_400690a8(iVar3 + 0x134,0xc,DAT_ram_3004b46c);
    }
    *(undefined4 *)(iVar3 + 300) = 8;
    *(byte *)(iVar3 + 0x130) = DAT_ram_3004b46c;
    *(undefined4 *)(iVar3 + 0x170) = _DAT_ram_3004b468;
    *(undefined1 *)(iVar3 + 0x131) = 1;
    FUN_ram_4005eaba(0x3004abe8);
    iVar2 = 0;
    goto LAB_ram_4000b8ce;
  }
LAB_ram_4000b8fc:
  FUN_ram_4000789c(0);
  FUN_ram_4000305c(iVar3,iVar2,0x2dc);
  if (*(int *)(iVar2 + 300) == 8) {
    if (*(byte *)(iVar2 + 0x130) != DAT_ram_3004b46c) goto LAB_ram_4000b918;
  }
  else {
LAB_ram_4000b918:
    FUN_ram_400690a8(iVar3 + 0x134,0xc,DAT_ram_3004b46c);
  }
  *(undefined4 *)(iVar3 + 300) = 8;
  bVar1 = DAT_ram_3004b46c;
  *(undefined1 *)(iVar3 + 0x131) = 0;
  *(byte *)(iVar3 + 0x130) = bVar1;
  *(undefined4 *)(iVar3 + 0x170) = _DAT_ram_3004b468;
  FUN_ram_4005eaba(0x3004abe8);
  iVar2 = -(uint)(param_1 != 0);
LAB_ram_4000b8ce:
  FUN_ram_40007ccc();
  return iVar2;
}


/* NanoCore 1.10, address 0x4000ba0e.
 * REA evidence: ev_1104ed8a18603bc6d923f4730eb9591e461c14661c42243701f7edd465a7de4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000ba0e(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if ((((byte)(param_1 - 0x1eU) < 8) && (iVar1 = FUN_ram_4000b7ae(), iVar1 == 0)) &&
     (DAT_ram_3004b46c < 8)) {
    puVar3 = &DAT_ram_400928d8;
    if ((byte)(DAT_ram_3004b46c - 5) < 3) {
      puVar3 = &DAT_ram_400928cc;
    }
    uVar2 = FUN_ram_400085f0(_DAT_ram_3004b468,puVar3);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4000ba6a.
 * REA evidence: ev_5d9461777c93977624467c9408b8b956c7802c082388f4ee9a78bcf01e80efbc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000ba6a(void)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (DAT_ram_3004b46c < 8) {
    uVar1 = DAT_ram_30046520;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4000ba86.
 * REA evidence: ev_1e9712cdaeaac2c1bb75408b43fbbcf9a3c7f2a5d157a841cc9936273f4db842
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000ba86(void)

{
  return DAT_ram_3004b46c;
}


/* NanoCore 1.10, address 0x4000ba90.
 * REA evidence: ev_52f38343e79e53894f1b73076f7b3dbf16716d94a31f3fd415f7f3e5e2e80a93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000ba90(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 5)) {
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if ((*(int *)(iVar2 + 300) != 8) || (*(char *)(iVar2 + 0x130) != DAT_ram_3004b46c)) {
      FUN_ram_400690a8(iVar3 + 0x134,0xc);
    }
    *(undefined4 *)(iVar3 + 300) = 8;
    uVar1 = 0;
    *(char *)(iVar3 + 0x130) = DAT_ram_3004b46c;
    *(undefined4 *)(iVar3 + 0x170) = _DAT_ram_3004b468;
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x134) = param_1;
    FUN_ram_4005eaba(0x3004abe8);
  }
  FUN_ram_40007ccc();
  return uVar1;
}


/* NanoCore 1.10, address 0x4000bb4c.
 * REA evidence: ev_58d6b3e72ac5c4a0dd476a5512388b20865286e9e9c49c16337243e2196ae489
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bb4c(uint param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_34 [16];
  ushort uStack_24;
  
  if (DAT_ram_3004b4f0 != '\0') {
    FUN_ram_400049d6(0x3004b4c4,0xffffffff);
  }
  cVar2 = DAT_ram_3004b4bc;
  FUN_ram_40089208(auStack_34);
  if (uStack_24 == 0xffff) {
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_ram_4000bba4;
    }
LAB_ram_4000bbe8:
    iVar4 = FUN_ram_40088bf0(param_1);
    if (iVar4 == 0) goto LAB_ram_4000bc38;
  }
  else {
    bVar1 = param_1 != uStack_24;
    if (cVar2 != '\0') {
LAB_ram_4000bba4:
      iVar4 = FUN_ram_4000821c();
      if (iVar4 == 0) {
        iVar4 = 0x40;
        FUN_ram_40007906(0,8);
        do {
          if (*(int *)(_DAT_ram_3004d4f4 + 0x2c) == 0) goto LAB_ram_4000bbe6;
          iVar4 = iVar4 + -1;
          FUN_ram_400065d4(1);
        } while (iVar4 != 0);
        if (*(int *)(_DAT_ram_3004d4f4 + 0x2c) == 0) goto LAB_ram_4000bbe6;
      }
      FUN_ram_400079da(0);
    }
LAB_ram_4000bbe6:
    if (bVar1) goto LAB_ram_4000bbe8;
LAB_ram_4000bc38:
    iVar5 = FUN_ram_40007e94();
    iVar4 = _DAT_ram_3004d4f4;
    if (iVar5 == 0) {
      bVar1 = DAT_ram_3004b4bc != '\0';
      FUN_ram_40008120();
      iVar4 = FUN_ram_40007b34(1,2,iVar4,&DAT_ram_400928e4,3,bVar1);
      FUN_ram_40007ccc();
      if (iVar4 == 0) {
        FUN_ram_400076d8();
        uVar3 = 0;
        if (cVar2 == '\0') {
          iVar4 = FUN_ram_4000821c();
          if ((iVar4 != 0) || (iVar4 = FUN_ram_40007ce4(), uVar6 = DAT_ram_4009281c, iVar4 != 0)) {
            uVar6 = 0;
          }
          FUN_ram_400079da(uVar6);
        }
        else {
          FUN_ram_40007906(DAT_ram_4009281c,0x10);
        }
        goto LAB_ram_4000bc02;
      }
    }
  }
  if (cVar2 == '\0') {
    FUN_ram_400079da(DAT_ram_4009281c);
  }
  else {
    FUN_ram_40007906(DAT_ram_4009281c,0x10);
  }
  uVar3 = 0xffffffff;
LAB_ram_4000bc02:
  if (DAT_ram_3004b4f0 != '\0') {
    FUN_ram_40004ac8(0x3004b4c4);
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4000bcb0.
 * REA evidence: ev_b1d58326e7b7bbc2c7c757767d74cd9eb0540c1816ee77bcb5f4c29e824ecc45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000bcb0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_40008120();
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_400079da(DAT_ram_4009281c);
      FUN_ram_40007f06(param_1 != 0);
      FUN_ram_400076d8();
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      *(bool *)(iVar2 + 0x59) = param_1 != 0;
      FUN_ram_4005eaba(0x3004abe8);
      uVar3 = 0;
    }
  }
  FUN_ram_40007ccc();
  return uVar3;
}


/* NanoCore 1.10, address 0x4000bd34.
 * REA evidence: ev_89f9a80af4f42178aea4dbff4bb4b0d7a81b584b013970eebdb70b171ac4b974
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bd34(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_40008120();
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_40007a22(param_1 != 0);
      if (param_1 != 0) {
        FUN_ram_4006674c(_DAT_ram_3004b464);
      }
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if ((param_1 != 0) && (*(int *)(iVar1 + 0xe4) != 7)) {
        *(undefined1 *)(iVar2 + 0xe8) = 0;
        FUN_ram_40066fb4(iVar2 + 0xec,0xc,0);
      }
      *(undefined4 *)(iVar2 + 0xe4) = 7;
      uVar3 = _DAT_ram_3004b464;
      *(bool *)(iVar2 + 0xe9) = param_1 != 0;
      *(undefined4 *)(iVar2 + 0x128) = uVar3;
      FUN_ram_4005eaba(0x3004abe8);
      uVar3 = 0;
    }
  }
  FUN_ram_40007ccc();
  return uVar3;
}


/* NanoCore 1.10, address 0x4000bdee.
 * REA evidence: ev_0e859b4738ba2b9297840d7630127a65dffc7d986ea3f48e688bf63c0fdfa4a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bdee(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if (*(int *)(iVar2 + 0xe4) != 7) {
      *(undefined1 *)(iVar3 + 0xe8) = 0;
      FUN_ram_40066fb4(iVar3 + 0xec,0xc,0);
    }
    *(undefined4 *)(iVar3 + 0xe4) = 7;
    uVar1 = 0;
    *(undefined4 *)(iVar3 + 0x128) = _DAT_ram_3004b464;
    *(bool *)(iVar3 + 0xe9) = DAT_ram_3004b462 != '\0';
    *(undefined4 *)(iVar3 + param_2 * 4 + 0xec) = param_1;
    FUN_ram_4005eaba(0x3004abe8);
  }
  FUN_ram_40007ccc();
  return uVar1;
}


/* NanoCore 1.10, address 0x4000bea4.
 * REA evidence: ev_63a79bad7599f9212c5c540ed8dddfa520fe209a6ae452e1c4545a91bbbd8a6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000bea4(undefined4 param_1)

{
  FUN_ram_40008358(FUN_ram_400099e8,param_1);
  return;
}


/* NanoCore 1.10, address 0x4000beb2.
 * REA evidence: ev_e93ada2c94564f6bb6e93356f4333d430dd38481c433debe05ec7a58bba37868
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000beb2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_40008120();
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_40007a40(param_1 != 0);
      if (param_1 != 0) {
        FUN_ram_4005fee6(_DAT_ram_30049ef8);
      }
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if ((param_1 != 0) && (*(int *)(iVar1 + 0x174) != 5)) {
        *(undefined1 *)(iVar2 + 0x178) = 0;
        FUN_ram_4005fe7c(iVar2 + 0x17c,0xc);
      }
      *(undefined4 *)(iVar2 + 0x174) = 5;
      uVar3 = _DAT_ram_30049ef8;
      *(bool *)(iVar2 + 0x179) = param_1 != 0;
      *(undefined4 *)(iVar2 + 0x1b8) = uVar3;
      FUN_ram_4005eaba(0x3004abe8);
      uVar3 = 0;
    }
  }
  FUN_ram_40007ccc();
  return uVar3;
}


/* NanoCore 1.10, address 0x4000bf6a.
 * REA evidence: ev_e06432fb4792d6adf6ecc9c36154fdcfeffe136449d922ce2eea739ef6d51729
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bf6a(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if (*(int *)(iVar2 + 0x174) != 5) {
      *(undefined1 *)(iVar3 + 0x178) = 0;
      FUN_ram_4005fe7c(iVar3 + 0x17c,0xc);
    }
    *(undefined4 *)(iVar3 + 0x174) = 5;
    uVar1 = 0;
    *(undefined4 *)(iVar3 + 0x1b8) = _DAT_ram_30049ef8;
    *(bool *)(iVar3 + 0x179) = DAT_ram_30049ef0 != '\0';
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x17c) = param_1;
    FUN_ram_4005eaba(0x3004abe8);
  }
  FUN_ram_40007ccc();
  return uVar1;
}


