/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40033000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400330f4.
 * REA evidence: ev_d6303d1c08bbed710899d7f96014311fb922303fa6b6575abb4eb5fc7fcef2c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400330f4(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3007b5ac != 1) {
    uVar1 = FUN_ram_400324f0();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003310a.
 * REA evidence: ev_4b5986f81771f6ab2bec07fe4b3180ab5fcd101e6d8e7339b9724c756b87f8b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003310a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40030c6c();
  uVar2 = 0xfffffffc;
  if (iVar1 == 0) {
    uVar2 = FUN_ram_400324f0(0xfffffffc);
    FUN_ram_400310bc();
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4003312a.
 * REA evidence: ev_7033fd075b0bef3fb2154b8c11afeb9ce6f2111b56ea1d88fcd676643fc4a000
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003312a(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -6;
  if (param_1 != (undefined1 *)0x0) {
    iVar2 = FUN_ram_40030c6c();
    iVar1 = -4;
    if (iVar2 == 0) {
      iVar1 = FUN_ram_400330f4();
      if (iVar1 == 0) {
        if (_DAT_ram_3007b5b6 < 0x40) {
          *param_1 = (char)_DAT_ram_3007b5b6;
        }
        else {
          iVar1 = -3;
        }
      }
      FUN_ram_400310bc();
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40033170.
 * REA evidence: ev_3f9b667d8ec3fdc2e1a51837c63f34b39665cd0de40b3b187611c28aff123340
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40033170(uint param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [20];
  
  if (0x3f < param_1) {
    return -7;
  }
  iVar3 = FUN_ram_40030c6c();
  if (iVar3 != 0) {
    return -4;
  }
  iVar3 = FUN_ram_400330f4(0xfffffffc);
  if (((iVar3 == 0) && (_DAT_ram_3007b5b6 != param_1)) &&
     ((DAT_ram_3007b561 != '\0' || (iVar3 = FUN_ram_400317a6(), iVar3 == 0)))) {
    if ((DAT_ram_3007b562 != '\0') || (0xff < _DAT_ram_3007b568)) {
      uVar4 = 0x16000;
      bVar1 = DAT_ram_3007b563 ^ 1;
      if (DAT_ram_3007b563 != 1) {
        uVar4 = 0x17000;
      }
      iVar3 = FUN_ram_40031ba8(uVar4);
      if (iVar3 < 0) {
        iVar3 = -4;
        goto LAB_ram_400331fe;
      }
      _DAT_ram_3007b568 = 0;
      DAT_ram_3007b562 = '\0';
      DAT_ram_3007b563 = bVar1;
    }
    uStack_40 = 0x504a5631;
    iStack_3c = _DAT_ram_3007b564;
    uStack_34 = 0;
    uStack_38 = param_1 & 0xff;
    uVar2 = FUN_ram_40031774(&uStack_40);
    uStack_34 = CONCAT13(uVar2,(undefined3)uStack_34);
    iVar3 = 0x16000;
    if (DAT_ram_3007b563 != 0) {
      iVar3 = 0x17000;
    }
    iVar3 = _DAT_ram_3007b568 * 0x10 + iVar3;
    iVar5 = FUN_ram_40030d7c(iVar3,&uStack_40,0x10);
    if (((iVar5 == 0x10) && (iVar3 = FUN_ram_40030d2c(iVar3,auStack_30,0x10), iVar3 == 0x10)) &&
       (iVar3 = FUN_ram_40002fdc(&uStack_40,auStack_30,0x10), iVar3 == 0)) {
      _DAT_ram_3007b568 = _DAT_ram_3007b568 + 1;
      _DAT_ram_3007b564 = _DAT_ram_3007b564 + 1;
      if (_DAT_ram_3007b564 == 0) {
        _DAT_ram_3007b564 = 1;
      }
      _DAT_ram_3007b5b6 = (ushort)param_1;
      iVar3 = 0;
    }
    else {
      _DAT_ram_3007b5ac = 7;
      iVar3 = -8;
    }
  }
LAB_ram_400331fe:
  FUN_ram_400310bc();
  return iVar3;
}


/* NanoCore 1.12, address 0x400332c6.
 * REA evidence: ev_e108f0bc948277115fbe6aaf95f674516af6447356b257f8a27ad5d7af95cca0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400332c6(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -6;
  if ((param_2 != 0) && (iVar1 = -7, param_1 < 0x40)) {
    iVar2 = FUN_ram_40030c6c();
    iVar1 = -4;
    if (iVar2 == 0) {
      iVar1 = FUN_ram_400330f4();
      if (iVar1 == 0) {
        FUN_ram_4003171a(param_1 * 0x18 + 0x3007b5c4,param_2);
      }
      FUN_ram_400310bc();
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4003331a.
 * REA evidence: ev_0712783793e7d459d0bad5d0b50558a84690ea9f4f359d237fcd35249a4cf1e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003331a(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -6;
  if ((param_2 != 0) && (iVar1 = -7, param_1 < 0x40)) {
    iVar1 = FUN_ram_40030c6c();
    if (iVar1 == 0) {
      if (_DAT_ram_3007b5ac == 1) {
        FUN_ram_4003171a(param_1 * 0x18 + 0x3007b5c4,param_2);
        iVar1 = 0;
      }
      else {
        iVar1 = -4;
        if (_DAT_ram_3007b5ac - 1U < 7) {
          iVar1 = (int)*(char *)(_DAT_ram_3007b5ac + 0x4009c57b);
        }
      }
      FUN_ram_400310bc();
    }
    else {
      iVar1 = -4;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4003338c.
 * REA evidence: ev_4c167b562f70d2b878aba7d6c77a6dbe08864e1ea391adf81d8cdad71e2ea9a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003338c(uint param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return -6;
  }
  if (param_4 == (uint *)0x0) {
    return -6;
  }
  if (0x3f < param_1) {
    return -7;
  }
  iVar1 = FUN_ram_40030c6c();
  if (iVar1 != 0) {
    return -4;
  }
  iVar1 = FUN_ram_400330f4();
  if (iVar1 != 0) goto LAB_ram_400333f0;
  iVar1 = param_1 * 0x18;
  iVar2 = FUN_ram_400310f4(iVar1 + 0x3007b5c4);
  if (iVar2 != 0) {
    iVar1 = 1;
    goto LAB_ram_400333f0;
  }
  iVar2 = FUN_ram_40030c08(iVar1 + 0x3007b5c4);
  if (iVar2 == 0) goto LAB_ram_400333ee;
  if (param_3 < *(ushort *)(iVar1 + 0x3007b5c8)) {
    iVar1 = -6;
    goto LAB_ram_400333f0;
  }
  iVar2 = (param_1 + 4 & 0xff) * 0x400;
  uVar3 = FUN_ram_40030d2c(iVar2,param_2);
  if (uVar3 == *(ushort *)(iVar1 + 0x3007b5c8)) {
    iVar4 = FUN_ram_40007450(0,param_2,uVar3);
    if (iVar4 == *(int *)(iVar1 + 0x3007b5c4)) {
      uVar3 = (uint)*(ushort *)(param_1 * 0x18 + 0x3007b5c8);
      iVar1 = FUN_ram_40031caa(uVar3 + iVar2,0x400 - uVar3);
      if (iVar1 < 0) goto LAB_ram_40033432;
      if (iVar1 != 0) {
        *param_4 = (uint)*(ushort *)(param_1 * 0x18 + 0x3007b5c8);
        iVar1 = 0;
        goto LAB_ram_400333f0;
      }
    }
LAB_ram_400333ee:
    iVar1 = -3;
  }
  else {
LAB_ram_40033432:
    iVar1 = -4;
  }
LAB_ram_400333f0:
  FUN_ram_400310bc();
  return iVar1;
}


/* NanoCore 1.12, address 0x40033472.
 * REA evidence: ev_e5b7c87e3e6323861778339d39ce652702fc52b052119909c03f5c74727e504d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40033472(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (param_2 == 0) {
    return -7;
  }
  if (0x3f < param_1) {
    return -7;
  }
  if ((0x40 - param_1 & 0xff) < param_2) {
    return -7;
  }
  iVar2 = FUN_ram_40030c6c();
  if (iVar2 != 0) {
    return -4;
  }
  if ((param_1 == 0) && (param_2 == 0x40)) {
    iVar2 = FUN_ram_40031d34();
    goto LAB_ram_400334c6;
  }
  iVar2 = FUN_ram_400330f4();
  if (iVar2 != 0) goto LAB_ram_400334c6;
  iVar3 = FUN_ram_4000559c(0x1000);
  iVar4 = FUN_ram_4000559c(0x1000);
  iVar5 = FUN_ram_4000559c(0x650);
  if (iVar3 == 0) {
    iVar2 = -5;
    if (iVar5 != 0) goto LAB_ram_4003358a;
    if (iVar4 == 0) goto LAB_ram_400334c6;
LAB_ram_400336da:
    FUN_ram_400055d4(iVar4);
    iVar6 = iVar2;
LAB_ram_40033594:
    iVar2 = iVar6;
    if (iVar3 == 0) goto LAB_ram_400334c6;
  }
  else {
    if (iVar4 != 0) {
      if (iVar5 == 0) {
        iVar2 = -5;
        goto LAB_ram_400336da;
      }
      param_2 = param_1 + param_2;
      while (param_1 < param_2) {
        uVar11 = (param_1 + 4) * 0x400 & 0xfffff000;
        uVar10 = 1;
        while ((uVar13 = param_1 + uVar10, (int)uVar13 < (int)param_2 &&
               (uVar11 == (((uVar13 & 0xff) + 4) * 0x400 & 0xfffff000)))) {
          uVar10 = uVar10 + 1 & 0xff;
        }
        iVar2 = FUN_ram_40030d2c(uVar11,iVar3,0x1000);
        if (iVar2 != 0x1000) {
          iVar2 = -4;
          goto LAB_ram_4003358a;
        }
        iVar2 = FUN_ram_4003164a(uVar11,param_1,uVar10,iVar3);
        if (iVar2 != 0) goto LAB_ram_4003358a;
        iVar2 = FUN_ram_40007450(0,iVar3,0x1000);
        iVar6 = FUN_ram_40030d2c(uVar11,iVar4,0x1000);
        if (((iVar6 != 0x1000) || (iVar6 = FUN_ram_40007450(0,iVar4,0x1000), iVar2 != iVar6)) ||
           (iVar6 = FUN_ram_40002fdc(iVar4,iVar3,0x1000), iVar6 != 0)) {
          iVar2 = -9;
          goto LAB_ram_4003358a;
        }
        bVar1 = false;
        for (uVar12 = 0; uVar10 != uVar12; uVar12 = uVar12 + 1 & 0xff) {
          uVar8 = param_1 + uVar12 & 0xff;
          iVar9 = uVar8 * 0x18 + 0x3007b5c4;
          iVar6 = FUN_ram_4003129c(iVar9,0x18);
          if (((iVar6 == 0) && (iVar6 = FUN_ram_400310d4(iVar9,0x18), iVar6 == 0)) ||
             (iVar6 = FUN_ram_400310d4(((uVar8 + 4) * 0x400 & 0xfff) + iVar3,0x400), iVar6 == 0)) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          FUN_ram_40030e8e(iVar5,uVar11,iVar2,param_1,2,iVar3);
          for (uVar11 = 0; uVar10 != uVar11; uVar11 = uVar11 + 1 & 0xff) {
            uVar12 = param_1 + uVar11 & 0xff;
            memset(((uVar12 + 4) * 0x400 & 0xfff) + iVar3,0xff,0x400);
            memset(iVar5 + uVar12 * 0x18 + 0x50,0,0x18);
          }
          uVar7 = FUN_ram_40007450(0,iVar3,0x1000);
          *(char *)(iVar5 + 0x1c) = (char)uVar7;
          *(char *)(iVar5 + 0x1d) = (char)((uint)uVar7 >> 8);
          *(char *)(iVar5 + 0x1f) = (char)((uint)uVar7 >> 0x18);
          *(char *)(iVar5 + 0x1e) = (char)((uint)uVar7 >> 0x10);
          iVar2 = FUN_ram_4003219c(iVar5,iVar3);
          if (iVar2 != 0) goto LAB_ram_4003358a;
        }
        for (uVar11 = 0; uVar10 != uVar11; uVar11 = uVar11 + 1 & 0xff) {
          FUN_ram_4002f66a(param_1 + uVar11 & 0xff);
        }
        param_1 = uVar13 & 0xff;
      }
      iVar2 = 0;
LAB_ram_4003358a:
      FUN_ram_400055d4(iVar5);
      iVar6 = iVar2;
      if (iVar4 != 0) goto LAB_ram_400336da;
      goto LAB_ram_40033594;
    }
    iVar6 = -5;
    iVar2 = -5;
    if (iVar5 != 0) goto LAB_ram_4003358a;
  }
  FUN_ram_400055d4(iVar3);
  iVar2 = iVar6;
LAB_ram_400334c6:
  FUN_ram_400310bc();
  return iVar2;
}


/* NanoCore 1.12, address 0x400336ea.
 * REA evidence: ev_e2fcdf0c273d5760126eae0b2c4ff0a210a28816a4124d4dcd596e76957e91f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400336ea(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 auStack_40 [20];
  
  iStack_4c = 0;
  if (param_2 == 0) {
    return -6;
  }
  if (0x3ff < param_3 - 1U) {
    return -6;
  }
  if (0x3f < param_1) {
    return -7;
  }
  iVar2 = FUN_ram_4000559c(0x340);
  iVar3 = FUN_ram_4000559c(0x400);
  if (iVar2 == 0) {
    iVar2 = iVar3;
    if (iVar3 == 0) {
      return -5;
    }
LAB_ram_40033740:
    FUN_ram_400055d4(iVar2);
    return -5;
  }
  if (iVar3 == 0) goto LAB_ram_40033740;
  iVar4 = FUN_ram_40015656(iVar2,param_2,param_3);
  if ((((iVar4 != 0) || (iVar4 = FUN_ram_400154ac(iVar2,iVar3,0x400,&iStack_4c), iVar4 != 0)) ||
      (iStack_4c != param_3)) || (iVar4 = FUN_ram_40002fdc(iVar3,param_2,param_3), iVar4 != 0)) {
LAB_ram_40033752:
    FUN_ram_400055d4(iVar3);
    FUN_ram_400055d4(iVar2);
    return -6;
  }
  iVar4 = FUN_ram_40002f38(iVar2 + 2,0,0x10);
  if (iVar4 == 0) goto LAB_ram_40033752;
  memset(&uStack_48,0,0x18);
  uStack_48 = FUN_ram_40007450(0,param_2,param_3);
  uStack_42 = 1;
  uStack_44 = (undefined2)param_3;
  FUN_ram_4000303c(auStack_40,iVar2 + 2,0x10);
  FUN_ram_400055d4(iVar3);
  FUN_ram_400055d4(iVar2);
  iVar2 = FUN_ram_40030c6c();
  if (iVar2 != 0) {
    return -4;
  }
  iVar2 = FUN_ram_400330f4();
  if (iVar2 != 0) goto LAB_ram_4003384e;
  iVar3 = FUN_ram_4000559c(0x1000);
  iVar4 = FUN_ram_4000559c(0x650);
  if (iVar3 == 0) {
    iVar2 = -5;
    if (iVar4 == 0) goto LAB_ram_4003384e;
LAB_ram_4003383c:
    iVar2 = -5;
LAB_ram_4003383e:
    FUN_ram_400055d4(iVar4);
    if (iVar3 == 0) goto LAB_ram_4003384e;
  }
  else {
    if (iVar4 != 0) {
      uVar1 = (param_1 + 4 & 0xff) << 10;
      uVar7 = uVar1 & 0xfffff000;
      iVar5 = FUN_ram_40030d2c(uVar7,iVar3,0x1000);
      iVar2 = -4;
      if ((iVar5 == 0x1000) && (iVar2 = FUN_ram_4003164a(uVar7,param_1,1,iVar3), iVar2 == 0)) {
        iVar2 = FUN_ram_40007450(0,iVar3,0x1000);
        iVar5 = FUN_ram_4000559c(0x1000);
        if (iVar5 == 0) goto LAB_ram_4003383c;
        iVar6 = FUN_ram_40030d2c(uVar7,iVar5,0x1000);
        if (((iVar6 == 0x1000) && (iVar6 = FUN_ram_40007450(0,iVar5,0x1000), iVar2 == iVar6)) &&
           (iVar6 = FUN_ram_40002fdc(iVar5,iVar3,0x1000), iVar6 == 0)) {
          iVar6 = (uVar1 & 0xfff) + iVar3;
          memset(iVar6,0xff,0x400);
          FUN_ram_4000303c(iVar6,param_2,param_3);
          FUN_ram_40030e8e(iVar4,uVar7,iVar2,param_1,1,iVar3);
          FUN_ram_4000303c(iVar4 + param_1 * 0x18 + 0x50,&uStack_48,0x18);
          iVar2 = FUN_ram_4003219c(iVar4,iVar3);
          if (iVar2 == 0) {
            FUN_ram_4002f66a(param_1);
          }
        }
        else {
          iVar2 = -9;
        }
        FUN_ram_400055d4(iVar5);
      }
      goto LAB_ram_4003383e;
    }
    iVar2 = -5;
  }
  FUN_ram_400055d4(iVar3);
LAB_ram_4003384e:
  FUN_ram_400310bc();
  return iVar2;
}


/* NanoCore 1.12, address 0x4003390a.
 * REA evidence: ev_2331f998cd85c64d200f5c6e37cc7ec37342f1600187368c872ab989d2d5b023
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003390a(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x40033920.
 * REA evidence: ev_d580b5697c306eac81c36316b6ccca2b81f1a82e13cef3ef32d43ed223516970
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40033920(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x40033924.
 * REA evidence: ev_b32eec0f0893750aa154930e021dbcee89c27fa2339ede64f1d804a9d6a3f65d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033924(void)

{
  return;
}


/* NanoCore 1.12, address 0x40033926.
 * REA evidence: ev_d7c5eaec9f15713651b64ee838c245be87121aac01b0ce822706e25b89a725f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40033926(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = 8;
    if ((((param_1 != 2) && (uVar1 = 3, param_1 != 4)) && (uVar1 = 5, param_1 < 5)) &&
       (uVar1 = 4, param_1 == 1)) {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40033954.
 * REA evidence: ev_5df658dc45ee3c694cd5360adc87e986ad11d88582ea541f876b80d4df289217
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40033954(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    uVar1 = FUN_ram_400741a8(0);
    return uVar1;
  case 2:
    return 3;
  case 3:
    uVar1 = FUN_ram_4007404a();
    return uVar1;
  case 4:
    uVar1 = FUN_ram_40071ce6();
    return uVar1;
  case 5:
    uVar1 = FUN_ram_40033926();
    return uVar1;
  case 6:
    uVar1 = FUN_ram_40066d4e();
    return uVar1;
  case 7:
    uVar1 = FUN_ram_400695de();
    return uVar1;
  case 8:
    uVar1 = FUN_ram_4006c8f4(param_2);
    return uVar1;
  default:
    return 0;
  }
}


/* NanoCore 1.12, address 0x40033996.
 * REA evidence: ev_fa3bbc48371472dae15006793a8f33c930858af93cf326a6f1fc1bd4fa6e7002
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40033996(uint param_1)

{
  if (param_1 < 8) {
    return (&DAT_ram_4009c61c)[param_1];
  }
  return 0;
}


/* NanoCore 1.12, address 0x400339ae.
 * REA evidence: ev_2ff19778aa36b3dede805aeb75bd90e7adf865baa806158af0dbac52deab6284
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400339ae(uint param_1)

{
  if (param_1 < 8) {
    if (param_1 == 4) {
      return 2;
    }
  }
  else {
    param_1 = 6;
  }
  return param_1;
}


/* NanoCore 1.12, address 0x400339c2.
 * REA evidence: ev_fff1e1a7b8a83acb287008972b8d55efa3bb8916caaf99433ca1e8daa74db79a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400339c2(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  memset(param_3,0,param_4 << 2);
  switch(param_1) {
  case 1:
    FUN_ram_400740fc(param_3,param_4);
    return;
  case 2:
    if ((param_4 != 1) && (*(ulonglong *)(param_3 + 4) = (ulonglong)DAT_ram_4009672c, param_4 != 2))
    {
      *(ulonglong *)(param_3 + 8) = (ulonglong)DAT_ram_40096760;
    }
    break;
  case 3:
    uVar1 = FUN_ram_400339ae(param_2);
    FUN_ram_40073e58(param_3,param_4,uVar1);
    return;
  case 4:
    nc_mod_default_parameters(param_3,param_4,param_2);
    return;
  case 5:
    FUN_ram_400658f8(param_3,param_4,param_2);
    return;
  case 6:
    FUN_ram_40066e8e(param_3,param_4,param_2);
    return;
  case 7:
    FUN_ram_40069600(param_3,param_4,param_2);
    return;
  case 8:
    FUN_ram_4006c932(param_3,param_4,param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40033ac8.
 * REA evidence: ev_11d7b7da9d55642b957e6b2de637a35a7e66e6c949c0d5710d4aebc134d7b458
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40033ac8(int param_1)

{
  if (7 < (param_1 - 1U & 0xff)) {
    param_1 = 0;
  }
  return param_1;
}


/* NanoCore 1.12, address 0x40033adc.
 * REA evidence: ev_d5fdb6f312a5420cc23984d503312b009a804c1cbed99cccba1aaedd2fc18997
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40033adc(int param_1)

{
  return param_1 - 0x1eU < 8;
}


/* NanoCore 1.12, address 0x40033ae4.
 * REA evidence: ev_c10f90571b33f96ff4ece501b2fd64d91282b0f97bfe294a86a671a793f74989
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40033ae4(uint param_1)

{
  if (param_1 < 8) {
    return param_1 + 0x1e & 0xff;
  }
  return 0xff;
}


/* NanoCore 1.12, address 0x40033af8.
 * REA evidence: ev_b719cf2d2296f5e09ddd66ee9c09ae8e7a6ecc1954c165bc15302b3491f5bec0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033af8(int param_1)

{
  if ((param_1 != 0) && ((byte)(*(char *)(param_1 + 0x33f) - 0x1eU) < 8)) {
    *(undefined1 *)(param_1 + 0x80) = 8;
    *(char *)(param_1 + 0x81) = *(char *)(param_1 + 0x33f) + -0x1e;
  }
  return;
}


/* NanoCore 1.12, address 0x40033b16.
 * REA evidence: ev_242f59ade0a01ba4a1d360e20d3bb3ae45361a14c193364f695f3e4bcfc91c15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40033b16(uint param_1,uint param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (7 < param_1) {
    return 0;
  }
  uVar1 = *(undefined4 *)(&DAT_ram_4009c5fc + param_1 * 4);
  switch(uVar1) {
  case 3:
    param_2 = FUN_ram_400339ae(param_2);
    break;
  case 4:
    if ((param_2 < 0x12) && ((1 << (param_2 & 0x1f) & 0x21c1fU) != 0)) break;
    goto LAB_ram_40033b9e;
  case 5:
    if (param_2 < 8) break;
LAB_ram_40033b9e:
    param_2 = 0;
    break;
  case 6:
    param_2 = FUN_ram_40066d3e(param_2);
    break;
  case 7:
    param_2 = FUN_ram_400695d2(param_2);
    break;
  case 8:
    param_2 = FUN_ram_4006c8e8(param_2);
  }
  uVar2 = FUN_ram_40033954(uVar1);
  FUN_ram_400339c2(uVar1,param_2,param_3,param_4);
  if (uVar2 < param_4) {
    param_4 = uVar2;
  }
  return param_4 & 0xff;
}


/* NanoCore 1.12, address 0x40033bd0.
 * REA evidence: ev_95c8d7fb208b08880bf46c9fc188b9dd55814f61f029f7a8adc6451094cbde86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_40033bd0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 auStack_40 [6];
  
  if (param_1 == 0) {
    uVar2 = 6;
    if ((param_2 != 3) && (uVar2 = 0, param_2 == 6)) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 1);
  }
  FUN_ram_400339c2(param_2,uVar2,auStack_40,0xc);
  uVar4 = 0;
  if (param_3 < 0xc) {
    uVar4 = *(undefined8 *)((int)auStack_40 + param_3 * 4);
  }
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      uVar3 = uVar1;
      if ((uint)*(byte *)(param_1 + 3) <= (uVar3 & 0xff)) {
        return uVar4;
      }
      uVar1 = uVar3 + 1;
    } while (*(byte *)(param_1 + -4 + (uVar3 + 1) * 8) != param_3);
    uVar4 = *(undefined8 *)(param_1 + uVar3 * 8 + 8);
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x40033c40.
 * REA evidence: ev_3637fc8f89e44834e87f5d86df792b3ddb7fcccc8d155df9a3c51526adbc2590
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033c40(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  iVar8 = 0;
  memset(param_2,0,0x308);
  do {
    uVar2 = FUN_ram_40033996(*(undefined1 *)(param_1 + 0x12 + iVar8));
    *(undefined1 *)(param_2 + iVar8) = uVar2;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 8);
  cVar9 = '\0';
  do {
    iVar8 = FUN_ram_40033996(cVar9);
    uVar7 = (uint)*(byte *)(param_1 + 0x1c);
    bVar3 = *(byte *)(param_1 + 0x1d);
    if (7 < (uVar7 - 1 & 0xff)) {
      uVar7 = 0;
    }
    cVar1 = *(char *)(param_1 + 0x1e);
    iVar10 = param_2 + iVar8 * 0x4c;
    *(uint *)(iVar10 + 0xc) = uVar7;
    *(byte *)(iVar10 + 0x10) = bVar3;
    *(bool *)(iVar10 + 0x11) = cVar1 != '\0';
    switch(uVar7) {
    case 3:
      bVar3 = FUN_ram_400339ae();
      break;
    default:
      goto switchD_ram_40033ce8_caseD_4;
    case 5:
      if (7 < bVar3) {
        bVar3 = 0;
      }
      break;
    case 6:
      bVar3 = FUN_ram_40066d3e();
      break;
    case 7:
      bVar3 = FUN_ram_400695d2();
      break;
    case 8:
      bVar3 = FUN_ram_4006c8e8();
    }
    *(byte *)(iVar10 + 0x10) = bVar3;
switchD_ram_40033ce8_caseD_4:
    FUN_ram_400339c2(*(undefined4 *)(iVar10 + 0xc),*(undefined1 *)(iVar10 + 0x10),
                     iVar8 * 0x4c + 0x14 + param_2,0xc);
    uVar6 = *(uint *)(iVar10 + 0xc);
    uVar7 = DAT_ram_4009672c;
    if (uVar6 == 8) {
      cVar1 = *(char *)(iVar10 + 0x10);
      if (cVar1 == '\b') {
LAB_ram_40033d28:
        *(ulonglong *)(param_2 + iVar8 * 0x4c + 0x20) = (ulonglong)uVar7;
      }
      else if (cVar1 == '\t') {
LAB_ram_40033d5e:
        *(ulonglong *)(param_2 + iVar8 * 0x4c + 0x24) = (ulonglong)uVar7;
      }
      else if (cVar1 == '\n') goto LAB_ram_40033d7a;
    }
    else if (uVar6 == 3) {
LAB_ram_40033d7a:
      *(ulonglong *)(param_2 + iVar8 * 0x4c + 0x28) = (ulonglong)uVar7;
    }
    else if (uVar6 == 4) {
      cVar1 = *(char *)(iVar10 + 0x10);
      if (cVar1 == '\0') {
        *(ulonglong *)(param_2 + iVar8 * 0x4c + 0x1c) = (ulonglong)DAT_ram_40096760;
      }
      else {
        uVar7 = DAT_ram_40096760;
        if ((byte)(cVar1 - 1U) < 2) goto LAB_ram_40033d28;
        if (cVar1 == '\x03') goto LAB_ram_40033d7a;
        if (cVar1 == '\x04') goto LAB_ram_40033d5e;
      }
    }
    cVar1 = *(char *)(param_1 + 0x1f);
    iVar4 = param_1;
    for (cVar5 = '\0'; cVar1 != cVar5; cVar5 = cVar5 + '\x01') {
      uVar7 = (uint)*(byte *)(iVar4 + 0x20);
      if (0xb < uVar7) goto LAB_ram_40033e78;
      bVar3 = *(byte *)(iVar10 + 0x10);
      if (uVar6 == 5) {
        if (bVar3 < 8) {
          if ((bVar3 == 1) || (bVar3 == 4)) {
LAB_ram_40033e58:
            if (uVar7 != 3) goto LAB_ram_40033e2c;
          }
          else {
            if ((bVar3 == 0) || (bVar3 == 3)) goto LAB_ram_40033e64;
            if ((2 < (byte)(bVar3 - 5)) || (uVar7 != 5)) goto LAB_ram_40033e2c;
          }
        }
        else {
LAB_ram_40033e64:
          if (uVar7 != 4) goto LAB_ram_40033e2c;
        }
      }
      else {
        if (uVar6 < 6) {
          if (uVar6 == 3) {
LAB_ram_40033ec4:
            if (uVar7 == 5) goto LAB_ram_40033e78;
          }
          else if (uVar6 == 4) {
            if (bVar3 == 0) {
              if (uVar7 == 2) goto LAB_ram_40033e78;
            }
            else {
              if ((byte)(bVar3 - 1) < 2) goto LAB_ram_40033e58;
              if (bVar3 == 3) goto LAB_ram_40033ec4;
              if (bVar3 == 4) goto LAB_ram_40033e64;
            }
          }
        }
        else if (uVar6 == 8) {
          if ((byte)(bVar3 - 5) < 3) {
            if (uVar7 != 0) goto LAB_ram_40033e78;
          }
          else {
            if (bVar3 == 8) goto LAB_ram_40033e58;
            if (bVar3 == 9) goto LAB_ram_40033e64;
            if (bVar3 == 10) goto LAB_ram_40033ec4;
          }
        }
LAB_ram_40033e2c:
        *(undefined8 *)(param_2 + (uVar7 + iVar8 * 0x13) * 4 + 0x14) = *(undefined8 *)(iVar4 + 0x24)
        ;
      }
LAB_ram_40033e78:
      iVar4 = iVar4 + 8;
    }
    cVar9 = cVar9 + '\x01';
    param_1 = param_1 + 100;
    if (cVar9 == '\b') {
      return;
    }
  } while( true );
}


/* NanoCore 1.12, address 0x40033ee0.
 * REA evidence: ev_36945b871f9f089d518d68b65a6124220da94e62706cbfb6490afd7caf0f2319
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033ee0(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  char local_8 [8];
  
  local_8[0] = '\0';
  local_8[1] = '\0';
  local_8[2] = '\0';
  local_8[3] = '\0';
  local_8[4] = '\0';
  local_8[5] = '\0';
  local_8[6] = '\0';
  local_8[7] = '\0';
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0x12);
    do {
      uVar2 = (uint)*pbVar1;
      if ((uVar2 < 8) && (local_8[uVar2] == '\0')) {
LAB_ram_40033f06:
        local_8[uVar2] = '\x01';
      }
      else {
        uVar2 = 0;
        do {
          if (local_8[uVar2] == '\0') {
            *pbVar1 = (byte)uVar2;
            goto LAB_ram_40033f06;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
      }
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != (byte *)(param_1 + 0x1a));
  }
  return;
}


/* NanoCore 1.12, address 0x40033f30.
 * REA evidence: ev_5fee951c337a8353ba0432dd5f222f12cb0571119ed0c0bda969cc4ef43058be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033f30(undefined2 *param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined4 uStack_a4;
  byte abStack_a0 [4];
  undefined8 auStack_9c [11];
  
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
  thunk_FUN_ram_40033ee0();
  *param_1 = param_2;
  if ((byte)(*(char *)((int)param_1 + 0x33f) - 0x1eU) < 8) {
    FUN_ram_40033af8(param_1);
  }
  fVar2 = DAT_ram_4009672c;
  puVar10 = param_1;
  do {
    FUN_ram_4000303c(&uStack_a4,puVar10 + 0xe,100);
    uVar3 = uStack_a4 >> 8 & 0xff;
    if ((uStack_a4 & 0xffff) == 0x205) {
      uVar4 = FUN_ram_40033926(uVar3);
      if (uStack_a4 >> 0x18 == uVar4) {
        puVar5 = &uStack_a4;
        uVar9 = 0;
        for (uVar8 = 0; uVar4 != uVar8; uVar8 = uVar8 + 1 & 0xff) {
          uVar6 = (uint)*(byte *)(puVar5 + 1);
          puVar1 = (undefined8 *)(puVar5 + 2);
          if (((uVar4 <= uVar6) || ((uVar9 >> (uVar6 & 0x1f) & 1) != 0)) || ((float)*puVar1 < 0.0))
          goto LAB_ram_40034072;
          puVar5 = puVar5 + 2;
          if (fVar2 < (float)*puVar1) goto LAB_ram_40034072;
          uVar9 = uVar9 | 1 << (uVar6 & 0x1f) & 0xffffU;
        }
        if (uVar9 == (1 << (uVar4 & 0x1f)) - 1U) goto LAB_ram_40033fca;
      }
    }
    else {
LAB_ram_40033fca:
      uVar8 = uStack_a4 & 0xff;
      uVar4 = 0;
      if ((uVar8 - 1 & 0xff) < 8) {
        if (uVar8 == 7) {
          uVar3 = FUN_ram_400695d2();
          uVar4 = 7;
        }
        else if (uVar8 == 8) {
          uVar3 = FUN_ram_4006c8e8();
          uVar4 = 8;
        }
        else if (uVar8 == 5) {
          uVar4 = 5;
          if (7 < uVar3) {
            uVar3 = 0;
          }
        }
        else {
          uVar4 = uVar8;
          if (uVar8 == 6) {
            uVar3 = FUN_ram_40066d3e();
            uVar4 = 6;
          }
        }
      }
      *(char *)((int)puVar10 + 0x1d) = (char)uVar3;
      uStack_a4._0_2_ = CONCAT11((char)uVar3,(undefined1)uStack_a4);
      uVar3 = FUN_ram_40033954(uVar4,uVar3);
      if (0xc < uVar3) {
        uVar3 = 0xc;
      }
      memset(puVar10 + 0x10,0,0x60);
      *(char *)((int)puVar10 + 0x1f) = (char)uVar3;
      puVar11 = puVar10;
      for (uVar8 = 0; (uVar3 & 0xff) != uVar8; uVar8 = uVar8 + 1 & 0xff) {
        *(char *)(puVar11 + 0x10) = (char)uVar8;
        uVar12 = FUN_ram_40033bd0(&uStack_a4,uVar4,uVar8);
        *(undefined4 *)(puVar11 + 0x12) = uVar12;
        puVar11 = puVar11 + 4;
      }
    }
LAB_ram_40034072:
    puVar10 = puVar10 + 0x32;
    if (param_1 + 400 == puVar10) {
      cVar7 = -1;
      if (*(byte *)((int)param_1 + 0x81) < 8) {
        cVar7 = *(byte *)((int)param_1 + 0x81) + 0x1e;
      }
      *(char *)((int)param_1 + 0x33f) = cVar7;
      return;
    }
  } while( true );
}


