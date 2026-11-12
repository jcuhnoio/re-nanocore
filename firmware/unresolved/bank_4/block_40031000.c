/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40031000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40031332.
 * REA evidence: ev_34f30d4298e254d56a3fb6ca6fa744d3ea5b4f462c44adf36a82f1bf0bb30c6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40031332(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3007b1d8 != 1) {
    uVar1 = FUN_ram_4003072e();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40031348.
 * REA evidence: ev_29676a90243f65c06ed11ebdd68dc94140784acc1ed4dcb98874335a15f7588f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031348(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4002eeaa();
  uVar2 = 0xfffffffc;
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4003072e(0xfffffffc);
    FUN_ram_4002f2fa();
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40031368.
 * REA evidence: ev_c320b748316e1e959e2662d1cf806c2f39e108678073482c8498b83fb8f9f99e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40031368(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -6;
  if (param_1 != (undefined1 *)0x0) {
    iVar2 = FUN_ram_4002eeaa();
    iVar1 = -4;
    if (iVar2 == 0) {
      iVar1 = FUN_ram_40031332();
      if (iVar1 == 0) {
        if (_DAT_ram_3007b1e2 < 0x40) {
          *param_1 = (char)_DAT_ram_3007b1e2;
        }
        else {
          iVar1 = -3;
        }
      }
      FUN_ram_4002f2fa();
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400313ae.
 * REA evidence: ev_b8011b1113c7c2ee82a903f1436f75479e908dc4301447289a7de705f3d84cdd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400313ae(uint param_1)

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
  iVar3 = FUN_ram_4002eeaa();
  if (iVar3 != 0) {
    return -4;
  }
  iVar3 = FUN_ram_40031332(0xfffffffc);
  if (((iVar3 == 0) && (_DAT_ram_3007b1e2 != param_1)) &&
     ((DAT_ram_3007b18d != '\0' || (iVar3 = FUN_ram_4002f9e4(), iVar3 == 0)))) {
    if ((DAT_ram_3007b18e != '\0') || (0xff < _DAT_ram_3007b194)) {
      uVar4 = 0x16000;
      bVar1 = DAT_ram_3007b18f ^ 1;
      if (DAT_ram_3007b18f != 1) {
        uVar4 = 0x17000;
      }
      iVar3 = FUN_ram_4002fde6(uVar4);
      if (iVar3 < 0) {
        iVar3 = -4;
        goto LAB_ram_4003143c;
      }
      _DAT_ram_3007b194 = 0;
      DAT_ram_3007b18e = '\0';
      DAT_ram_3007b18f = bVar1;
    }
    uStack_40 = 0x504a5631;
    iStack_3c = _DAT_ram_3007b190;
    uStack_34 = 0;
    uStack_38 = param_1 & 0xff;
    uVar2 = FUN_ram_4002f9b2(&uStack_40);
    uStack_34 = CONCAT13(uVar2,(undefined3)uStack_34);
    iVar3 = 0x16000;
    if (DAT_ram_3007b18f != 0) {
      iVar3 = 0x17000;
    }
    iVar3 = _DAT_ram_3007b194 * 0x10 + iVar3;
    iVar5 = FUN_ram_4002efba(iVar3,&uStack_40,0x10);
    if (((iVar5 == 0x10) && (iVar3 = FUN_ram_4002ef6a(iVar3,auStack_30,0x10), iVar3 == 0x10)) &&
       (iVar3 = FUN_ram_40002ffc(&uStack_40,auStack_30,0x10), iVar3 == 0)) {
      _DAT_ram_3007b194 = _DAT_ram_3007b194 + 1;
      _DAT_ram_3007b190 = _DAT_ram_3007b190 + 1;
      if (_DAT_ram_3007b190 == 0) {
        _DAT_ram_3007b190 = 1;
      }
      _DAT_ram_3007b1e2 = (ushort)param_1;
      iVar3 = 0;
    }
    else {
      _DAT_ram_3007b1d8 = 7;
      iVar3 = -8;
    }
  }
LAB_ram_4003143c:
  FUN_ram_4002f2fa();
  return iVar3;
}


/* NanoCore 1.10, address 0x40031504.
 * REA evidence: ev_844d28add2a9eb6860aa703aa1fc20a53276365b34c5a5559d9527e5620d6aa7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40031504(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -6;
  if ((param_2 != 0) && (iVar1 = -7, param_1 < 0x40)) {
    iVar2 = FUN_ram_4002eeaa();
    iVar1 = -4;
    if (iVar2 == 0) {
      iVar1 = FUN_ram_40031332();
      if (iVar1 == 0) {
        FUN_ram_4002f958(param_1 * 0x18 + 0x3007b1f0,param_2);
      }
      FUN_ram_4002f2fa();
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40031558.
 * REA evidence: ev_bed2e4700d1514aa9bd4ce2300b1226441eb3a9e29100dcc042adb37c6a7e45a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40031558(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -6;
  if ((param_2 != 0) && (iVar1 = -7, param_1 < 0x40)) {
    iVar1 = FUN_ram_4002eeaa();
    if (iVar1 == 0) {
      if (_DAT_ram_3007b1d8 == 1) {
        FUN_ram_4002f958(param_1 * 0x18 + 0x3007b1f0,param_2);
        iVar1 = 0;
      }
      else {
        iVar1 = -4;
        if (_DAT_ram_3007b1d8 - 1U < 7) {
          iVar1 = (int)*(char *)(_DAT_ram_3007b1d8 + 0x40095457);
        }
      }
      FUN_ram_4002f2fa();
    }
    else {
      iVar1 = -4;
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400315ca.
 * REA evidence: ev_63e26b8ab4e0e320ef5c529b9434ae9ab77f77c246cf31889604950d42e25d2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400315ca(uint param_1,int param_2,uint param_3,uint *param_4)

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
  iVar1 = FUN_ram_4002eeaa();
  if (iVar1 != 0) {
    return -4;
  }
  iVar1 = FUN_ram_40031332();
  if (iVar1 != 0) goto LAB_ram_4003162e;
  iVar1 = param_1 * 0x18;
  iVar2 = FUN_ram_4002f332(iVar1 + 0x3007b1f0);
  if (iVar2 != 0) {
    iVar1 = 1;
    goto LAB_ram_4003162e;
  }
  iVar2 = FUN_ram_4002ee46(iVar1 + 0x3007b1f0);
  if (iVar2 == 0) goto LAB_ram_4003162c;
  if (param_3 < *(ushort *)(iVar1 + 0x3007b1f4)) {
    iVar1 = -6;
    goto LAB_ram_4003162e;
  }
  iVar2 = (param_1 + 4 & 0xff) * 0x400;
  uVar3 = FUN_ram_4002ef6a(iVar2,param_2);
  if (uVar3 == *(ushort *)(iVar1 + 0x3007b1f4)) {
    iVar4 = FUN_ram_4000755e(0,param_2,uVar3);
    if (iVar4 == *(int *)(iVar1 + 0x3007b1f0)) {
      uVar3 = (uint)*(ushort *)(param_1 * 0x18 + 0x3007b1f4);
      iVar1 = FUN_ram_4002fee8(uVar3 + iVar2,0x400 - uVar3);
      if (iVar1 < 0) goto LAB_ram_40031670;
      if (iVar1 != 0) {
        *param_4 = (uint)*(ushort *)(param_1 * 0x18 + 0x3007b1f4);
        iVar1 = 0;
        goto LAB_ram_4003162e;
      }
    }
LAB_ram_4003162c:
    iVar1 = -3;
  }
  else {
LAB_ram_40031670:
    iVar1 = -4;
  }
LAB_ram_4003162e:
  FUN_ram_4002f2fa();
  return iVar1;
}


/* NanoCore 1.10, address 0x400316b0.
 * REA evidence: ev_ac758dee3be6fa7ae4d0742dcd65f68b84917d2a4e8ab5994502938b7ef2d247
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400316b0(uint param_1,uint param_2)

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
  iVar2 = FUN_ram_4002eeaa();
  if (iVar2 != 0) {
    return -4;
  }
  if ((param_1 == 0) && (param_2 == 0x40)) {
    iVar2 = FUN_ram_4002ff72();
    goto LAB_ram_40031704;
  }
  iVar2 = FUN_ram_40031332();
  if (iVar2 != 0) goto LAB_ram_40031704;
  iVar3 = FUN_ram_40005666(0x1000);
  iVar4 = FUN_ram_40005666(0x1000);
  iVar5 = FUN_ram_40005666(0x650);
  if (iVar3 == 0) {
    iVar2 = -5;
    if (iVar5 != 0) goto LAB_ram_400317c8;
    if (iVar4 == 0) goto LAB_ram_40031704;
LAB_ram_40031918:
    FUN_ram_400056c4(iVar4);
    iVar6 = iVar2;
LAB_ram_400317d2:
    iVar2 = iVar6;
    if (iVar3 == 0) goto LAB_ram_40031704;
  }
  else {
    if (iVar4 != 0) {
      if (iVar5 == 0) {
        iVar2 = -5;
        goto LAB_ram_40031918;
      }
      param_2 = param_1 + param_2;
      while (param_1 < param_2) {
        uVar11 = (param_1 + 4) * 0x400 & 0xfffff000;
        uVar10 = 1;
        while ((uVar13 = param_1 + uVar10, (int)uVar13 < (int)param_2 &&
               (uVar11 == (((uVar13 & 0xff) + 4) * 0x400 & 0xfffff000)))) {
          uVar10 = uVar10 + 1 & 0xff;
        }
        iVar2 = FUN_ram_4002ef6a(uVar11,iVar3,0x1000);
        if (iVar2 != 0x1000) {
          iVar2 = -4;
          goto LAB_ram_400317c8;
        }
        iVar2 = FUN_ram_4002f888(uVar11,param_1,uVar10,iVar3);
        if (iVar2 != 0) goto LAB_ram_400317c8;
        iVar2 = FUN_ram_4000755e(0,iVar3,0x1000);
        iVar6 = FUN_ram_4002ef6a(uVar11,iVar4,0x1000);
        if (((iVar6 != 0x1000) || (iVar6 = FUN_ram_4000755e(0,iVar4,0x1000), iVar2 != iVar6)) ||
           (iVar6 = FUN_ram_40002ffc(iVar4,iVar3,0x1000), iVar6 != 0)) {
          iVar2 = -9;
          goto LAB_ram_400317c8;
        }
        bVar1 = false;
        for (uVar12 = 0; uVar10 != uVar12; uVar12 = uVar12 + 1 & 0xff) {
          uVar8 = param_1 + uVar12 & 0xff;
          iVar9 = uVar8 * 0x18 + 0x3007b1f0;
          iVar6 = FUN_ram_4002f4da(iVar9,0x18);
          if (((iVar6 == 0) && (iVar6 = FUN_ram_4002f312(iVar9,0x18), iVar6 == 0)) ||
             (iVar6 = FUN_ram_4002f312(((uVar8 + 4) * 0x400 & 0xfff) + iVar3,0x400), iVar6 == 0)) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          FUN_ram_4002f0cc(iVar5,uVar11,iVar2,param_1,2,iVar3);
          for (uVar11 = 0; uVar10 != uVar11; uVar11 = uVar11 + 1 & 0xff) {
            uVar12 = param_1 + uVar11 & 0xff;
            memset((void *)(((uVar12 + 4) * 0x400 & 0xfff) + iVar3),0xff,0x400);
            memset((void *)(iVar5 + uVar12 * 0x18 + 0x50),0,0x18);
          }
          uVar7 = FUN_ram_4000755e(0,iVar3,0x1000);
          *(char *)(iVar5 + 0x1c) = (char)uVar7;
          *(char *)(iVar5 + 0x1d) = (char)((uint)uVar7 >> 8);
          *(char *)(iVar5 + 0x1f) = (char)((uint)uVar7 >> 0x18);
          *(char *)(iVar5 + 0x1e) = (char)((uint)uVar7 >> 0x10);
          iVar2 = FUN_ram_400303da(iVar5,iVar3);
          if (iVar2 != 0) goto LAB_ram_400317c8;
        }
        for (uVar11 = 0; uVar10 != uVar11; uVar11 = uVar11 + 1 & 0xff) {
          FUN_ram_4002d92e(param_1 + uVar11 & 0xff);
        }
        param_1 = uVar13 & 0xff;
      }
      iVar2 = 0;
LAB_ram_400317c8:
      FUN_ram_400056c4(iVar5);
      iVar6 = iVar2;
      if (iVar4 != 0) goto LAB_ram_40031918;
      goto LAB_ram_400317d2;
    }
    iVar6 = -5;
    iVar2 = -5;
    if (iVar5 != 0) goto LAB_ram_400317c8;
  }
  FUN_ram_400056c4(iVar3);
  iVar2 = iVar6;
LAB_ram_40031704:
  FUN_ram_4002f2fa();
  return iVar2;
}


/* NanoCore 1.10, address 0x40031928.
 * REA evidence: ev_342ee3e74eb96eead94ca0efafb3dbd42c7a56c04eae809e1c7399fcd35f1250
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40031928(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  void *__s;
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
  iVar2 = FUN_ram_40005666(0x340);
  iVar3 = FUN_ram_40005666(0x400);
  if (iVar2 == 0) {
    iVar2 = iVar3;
    if (iVar3 == 0) {
      return -5;
    }
LAB_ram_4003197e:
    FUN_ram_400056c4(iVar2);
    return -5;
  }
  if (iVar3 == 0) goto LAB_ram_4003197e;
  iVar4 = FUN_ram_40014af4(iVar2,param_2,param_3);
  if ((((iVar4 != 0) || (iVar4 = FUN_ram_40014964(iVar2,iVar3,0x400,&iStack_4c), iVar4 != 0)) ||
      (iStack_4c != param_3)) || (iVar4 = FUN_ram_40002ffc(iVar3,param_2,param_3), iVar4 != 0)) {
LAB_ram_40031990:
    FUN_ram_400056c4(iVar3);
    FUN_ram_400056c4(iVar2);
    return -6;
  }
  iVar4 = FUN_ram_40002f58(iVar2 + 2,0,0x10);
  if (iVar4 == 0) goto LAB_ram_40031990;
  memset(&uStack_48,0,0x18);
  uStack_48 = FUN_ram_4000755e(0,param_2,param_3);
  uStack_42 = 1;
  uStack_44 = (undefined2)param_3;
  FUN_ram_4000305c(auStack_40,iVar2 + 2,0x10);
  FUN_ram_400056c4(iVar3);
  FUN_ram_400056c4(iVar2);
  iVar2 = FUN_ram_4002eeaa();
  if (iVar2 != 0) {
    return -4;
  }
  iVar2 = FUN_ram_40031332();
  if (iVar2 != 0) goto LAB_ram_40031a8c;
  iVar3 = FUN_ram_40005666(0x1000);
  iVar4 = FUN_ram_40005666(0x650);
  if (iVar3 == 0) {
    iVar2 = -5;
    if (iVar4 == 0) goto LAB_ram_40031a8c;
LAB_ram_40031a7a:
    iVar2 = -5;
LAB_ram_40031a7c:
    FUN_ram_400056c4(iVar4);
    if (iVar3 == 0) goto LAB_ram_40031a8c;
  }
  else {
    if (iVar4 != 0) {
      uVar1 = (param_1 + 4 & 0xff) << 10;
      uVar7 = uVar1 & 0xfffff000;
      iVar5 = FUN_ram_4002ef6a(uVar7,iVar3,0x1000);
      iVar2 = -4;
      if ((iVar5 == 0x1000) && (iVar2 = FUN_ram_4002f888(uVar7,param_1,1,iVar3), iVar2 == 0)) {
        iVar2 = FUN_ram_4000755e(0,iVar3,0x1000);
        iVar5 = FUN_ram_40005666(0x1000);
        if (iVar5 == 0) goto LAB_ram_40031a7a;
        iVar6 = FUN_ram_4002ef6a(uVar7,iVar5,0x1000);
        if (((iVar6 == 0x1000) && (iVar6 = FUN_ram_4000755e(0,iVar5,0x1000), iVar2 == iVar6)) &&
           (iVar6 = FUN_ram_40002ffc(iVar5,iVar3,0x1000), iVar6 == 0)) {
          __s = (void *)((uVar1 & 0xfff) + iVar3);
          memset(__s,0xff,0x400);
          FUN_ram_4000305c(__s,param_2,param_3);
          FUN_ram_4002f0cc(iVar4,uVar7,iVar2,param_1,1,iVar3);
          FUN_ram_4000305c(iVar4 + param_1 * 0x18 + 0x50,&uStack_48,0x18);
          iVar2 = FUN_ram_400303da(iVar4,iVar3);
          if (iVar2 == 0) {
            FUN_ram_4002d92e(param_1);
          }
        }
        else {
          iVar2 = -9;
        }
        FUN_ram_400056c4(iVar5);
      }
      goto LAB_ram_40031a7c;
    }
    iVar2 = -5;
  }
  FUN_ram_400056c4(iVar3);
LAB_ram_40031a8c:
  FUN_ram_4002f2fa();
  return iVar2;
}


/* NanoCore 1.10, address 0x40031b48.
 * REA evidence: ev_5c718dc520bd6d16642a4f0007a113d8422c065f51bd86a3515aa8df6fccf17a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031b48(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x40031b5e.
 * REA evidence: ev_711dc9aabb14e062c6c31efb0c334c29f59cf086e6aefd9dae6028897347c332
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031b5e(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x40031b62.
 * REA evidence: ev_788a270f3732dc688f316052e1ce7f187e7ed9e8bbb298fd859858d34d4b6419
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40031b62(void)

{
  return;
}


/* NanoCore 1.10, address 0x40031b64.
 * REA evidence: ev_8645c52d0111ccf414fca6d3248f7d8cc6f62232009b7c49a89f04b9b85b8f81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031b64(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    uVar1 = FUN_ram_4007178a(0);
    return uVar1;
  case 2:
    return 2;
  case 3:
    uVar1 = FUN_ram_4007162c();
    return uVar1;
  case 4:
    uVar1 = FUN_ram_4006b744();
    return uVar1;
  case 5:
    uVar1 = FUN_ram_4005fbc2();
    return uVar1;
  case 6:
    uVar1 = FUN_ram_40064706();
    return uVar1;
  case 7:
    uVar1 = FUN_ram_40066f92();
    return uVar1;
  case 8:
    uVar1 = FUN_ram_4006906a(param_2);
    return uVar1;
  default:
    return 0;
  }
}


/* NanoCore 1.10, address 0x40031ba6.
 * REA evidence: ev_3dcb5f31a02359b83af89ede1634f9066b08720906038dd8fe3a817e9c28a9a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40031ba6(uint param_1)

{
  if (param_1 < 8) {
    return (&DAT_ram_40095514)[param_1];
  }
  return 0;
}


/* NanoCore 1.10, address 0x40031bbe.
 * REA evidence: ev_d9dd34a09c79cf31178732dc592bd3310d8475ea18bf1281b7ca64fb13da4cd3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40031bbe(uint param_1)

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


/* NanoCore 1.10, address 0x40031bd2.
 * REA evidence: ev_2e0eeb422751e4f71bcdfa3fe32afd2e2baee2f96bd76249dc406ac748a4707f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40031bd2(undefined4 param_1,undefined4 param_2,void *param_3,int param_4)

{
  undefined4 uVar1;
  
  memset(param_3,0,param_4 << 2);
  switch(param_1) {
  case 1:
    FUN_ram_400716de(param_3,param_4);
    return;
  case 2:
    if ((param_4 != 1) &&
       (*(ulonglong *)((int)param_3 + 4) = (ulonglong)DAT_ram_4009281c, param_4 != 2)) {
      *(ulonglong *)((int)param_3 + 8) = (ulonglong)DAT_ram_4009287c;
    }
    break;
  case 3:
    uVar1 = FUN_ram_40031bbe(param_2);
    FUN_ram_40071420(param_3,param_4,uVar1);
    return;
  case 4:
    FUN_ram_4006b500(param_3,param_4,param_2);
    return;
  case 5:
    FUN_ram_4005fbec(param_3,param_4,param_2);
    return;
  case 6:
    FUN_ram_40064846(param_3,param_4,param_2);
    return;
  case 7:
    FUN_ram_40066fb4(param_3,param_4,param_2);
    return;
  case 8:
    FUN_ram_400690a8(param_3,param_4,param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40031cd8.
 * REA evidence: ev_ed1df1adbcf008ca5148bebf924fb8155e7a273b963dd9824b90ffd95c9ca7bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40031cd8(int param_1)

{
  if (7 < (param_1 - 1U & 0xff)) {
    param_1 = 0;
  }
  return param_1;
}


/* NanoCore 1.10, address 0x40031cec.
 * REA evidence: ev_7da4ff93b9f8d8ddd8200bf5d45d08a58a1a382c15c68ab7f8a473be833a0894
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40031cec(int param_1)

{
  return param_1 - 0x1eU < 8;
}


/* NanoCore 1.10, address 0x40031cf4.
 * REA evidence: ev_0d786b8c8fd155c294affd4276abefc200e69add00ca51d99137027fe98215d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40031cf4(uint param_1)

{
  if (param_1 < 8) {
    return param_1 + 0x1e & 0xff;
  }
  return 0xff;
}


/* NanoCore 1.10, address 0x40031d08.
 * REA evidence: ev_dbedca3fd4242f16ad005c48419044acc1c8db92ec208ff335377140e6c26021
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40031d08(int param_1)

{
  if ((param_1 != 0) && ((byte)(*(char *)(param_1 + 0x33f) - 0x1eU) < 8)) {
    *(undefined1 *)(param_1 + 0x80) = 8;
    *(char *)(param_1 + 0x81) = *(char *)(param_1 + 0x33f) + -0x1e;
  }
  return;
}


/* NanoCore 1.10, address 0x40031d26.
 * REA evidence: ev_9ef653ac988fce6755a63bc0196021e0ad25c0281ca7a1fc1e241fd58abc30f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40031d26(uint param_1,uint param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    if (param_4 == 0) {
      return 0;
    }
    if (param_1 < 8) {
      uVar1 = *(undefined4 *)(&DAT_ram_400954f4 + param_1 * 4);
      switch(uVar1) {
      case 3:
        param_2 = FUN_ram_40031bbe(param_2);
        break;
      case 4:
        if ((0x11 < param_2) || ((1 << (param_2 & 0x1f) & 0x21c1fU) == 0)) {
          param_2 = 0;
        }
        break;
      case 5:
        param_2 = FUN_ram_4005fbb6(param_2);
        break;
      case 6:
        param_2 = FUN_ram_400646f6(param_2);
        break;
      case 7:
        param_2 = FUN_ram_40066f86(param_2);
        break;
      case 8:
        param_2 = FUN_ram_4006905e(param_2);
      }
      uVar2 = FUN_ram_40031b64(uVar1);
      FUN_ram_40031bd2(uVar1,param_2,param_3,param_4);
      if (uVar2 < param_4) {
        param_4 = uVar2;
      }
      return param_4 & 0xff;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x40031de0.
 * REA evidence: ev_27e79cfd0f6d176290db3829ca1fdc465f79f7c4c6a5eb2ad051337401926e63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_40031de0(int param_1,int param_2,uint param_3)

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
  FUN_ram_40031bd2(param_2,uVar2,auStack_40,0xc);
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


/* NanoCore 1.10, address 0x40031e50.
 * REA evidence: ev_b817998d661aff017e948e162dfad21cca570d97d44be87461c9b828052aa009
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40031e50(int param_1,void *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    return;
  }
  iVar4 = 0;
  memset(param_2,0,0x2dc);
  do {
    uVar6 = FUN_ram_40031ba6(*(undefined1 *)(param_1 + 0x12 + iVar4));
    *(undefined1 *)((int)param_2 + iVar4) = uVar6;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  pbVar10 = (byte *)(param_1 + 0x1c);
  uVar11 = 0;
  do {
    iVar4 = FUN_ram_40031ba6(uVar11 & 0xff);
    iVar12 = iVar4 * 0x48;
    uVar8 = (uint)*pbVar10;
    bVar1 = pbVar10[2];
    bVar2 = pbVar10[1];
    if (7 < (uVar8 - 1 & 0xff)) {
      uVar8 = 0;
    }
    *(uint *)((int)param_2 + iVar12 + 0xc) = uVar8;
    *(bool *)((int)param_2 + iVar12 + 0x11) = bVar1 != 0;
    *(byte *)((int)param_2 + iVar12 + 0x10) = bVar2;
    switch(uVar8) {
    case 3:
      uVar6 = FUN_ram_40031bbe();
      break;
    default:
      goto switchD_ram_40031f18_caseD_4;
    case 5:
      uVar6 = FUN_ram_4005fbb6();
      break;
    case 6:
      uVar6 = FUN_ram_400646f6();
      break;
    case 7:
      uVar6 = FUN_ram_40066f86();
      break;
    case 8:
      uVar6 = FUN_ram_4006905e();
    }
    *(undefined1 *)((int)param_2 + iVar12 + 0x10) = uVar6;
switchD_ram_40031f18_caseD_4:
    FUN_ram_40031bd2(*(undefined4 *)((int)param_2 + iVar12 + 0xc),
                     *(undefined1 *)((int)param_2 + iVar12 + 0x10),iVar12 + 0x14 + (int)param_2,0xc)
    ;
    iVar9 = *(int *)((int)param_2 + iVar12 + 0xc);
    uVar8 = DAT_ram_4009281c;
    if (iVar9 == 8) {
      cVar3 = *(char *)((int)param_2 + iVar12 + 0x10);
      if (cVar3 == '\b') {
LAB_ram_40031f54:
        *(ulonglong *)((int)param_2 + iVar4 * 0x48 + 0x20) = (ulonglong)uVar8;
      }
      else if (cVar3 == '\t') {
LAB_ram_40031f84:
        *(ulonglong *)((int)param_2 + iVar4 * 0x48 + 0x24) = (ulonglong)uVar8;
      }
      else if (cVar3 == '\n') goto LAB_ram_40031f9c;
    }
    else if (iVar9 == 3) {
LAB_ram_40031f9c:
      *(ulonglong *)((int)param_2 + iVar4 * 0x48 + 0x28) = (ulonglong)uVar8;
    }
    else if (iVar9 == 4) {
      cVar3 = *(char *)((int)param_2 + iVar12 + 0x10);
      if (cVar3 == '\0') {
        *(ulonglong *)((int)param_2 + iVar4 * 0x48 + 0x1c) = (ulonglong)DAT_ram_4009287c;
      }
      else {
        uVar8 = DAT_ram_4009287c;
        if ((byte)(cVar3 - 1U) < 2) goto LAB_ram_40031f54;
        if (cVar3 == '\x03') goto LAB_ram_40031f9c;
        if (cVar3 == '\x04') goto LAB_ram_40031f84;
      }
    }
    for (uVar8 = 0; uVar8 < pbVar10[3]; uVar8 = uVar8 + 1 & 0xff) {
      uVar5 = (uint)*(byte *)(uVar8 * 8 + uVar11 * 100 + param_1 + 0x20);
      if (0xb < uVar5) goto LAB_ram_4003207c;
      cVar3 = *(char *)((int)param_2 + iVar12 + 0x10);
      switch(*(undefined4 *)((int)param_2 + iVar12 + 0xc)) {
      case 2:
        iVar9 = uVar5 - 2;
        goto LAB_ram_4003204c;
      case 3:
        iVar9 = uVar5 - 5;
LAB_ram_4003204c:
        if (iVar9 != 0) break;
        goto LAB_ram_4003207c;
      case 4:
        if (cVar3 == '\0') {
          if (uVar5 == 2) goto LAB_ram_4003207c;
        }
        else {
          if ((byte)(cVar3 - 1U) < 2) goto LAB_ram_400320fa;
          if (cVar3 != '\x03') {
            if ((cVar3 != '\x04') || (uVar5 != 4)) break;
            goto LAB_ram_4003207c;
          }
LAB_ram_400320d2:
          uVar7 = 5;
LAB_ram_40032132:
          if (uVar5 == uVar7) goto LAB_ram_4003207c;
        }
        break;
      case 5:
        iVar9 = FUN_ram_4005fbb6();
        if (iVar9 == 1) {
LAB_ram_400320fa:
          uVar7 = 3;
          goto LAB_ram_40032132;
        }
        uVar7 = 4;
        if (iVar9 == 4) {
          if (uVar5 == 3) goto LAB_ram_4003207c;
        }
        else if (iVar9 == 0) goto LAB_ram_40032132;
        if (((iVar9 - 2U & 0xff) < 2) && (uVar5 == 4)) goto LAB_ram_4003207c;
        if ((iVar9 - 5U & 0xff) < 3) goto LAB_ram_400320d2;
        break;
      case 8:
        if ((byte)(cVar3 - 5U) < 3) {
          if (uVar5 != 0) goto LAB_ram_4003207c;
        }
        else {
          if (cVar3 == '\b') goto LAB_ram_400320fa;
          if (cVar3 == '\t') {
            uVar7 = 4;
            goto LAB_ram_40032132;
          }
          if (cVar3 == '\n') goto LAB_ram_400320d2;
        }
      }
      *(undefined8 *)((int)param_2 + (uVar5 + iVar4 * 0x12) * 4 + 0x14) =
           *(undefined8 *)(uVar8 * 8 + uVar11 * 100 + param_1 + 0x24);
LAB_ram_4003207c:
    }
    uVar11 = uVar11 + 1;
    pbVar10 = pbVar10 + 100;
    if (uVar11 == 8) {
      return;
    }
  } while( true );
}


