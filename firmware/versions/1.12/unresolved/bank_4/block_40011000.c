/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40011000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40011030.
 * REA evidence: ev_bd74c393f68bcbe347c5732a202ce56221447cbaa0b1db873eb31162563ab823
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40011030(char param_1)

{
  undefined *puVar1;
  
  switch(param_1 + -1) {
  case '\0':
  case '\x03':
    DAT_ram_3005e0dc = 0;
    DAT_ram_3005e0c4 = 0;
    FUN_ram_40010a1c();
    DAT_ram_3005e0dd = 0;
    FUN_ram_40014454(0);
    DAT_ram_3005ecc9 = 0;
    DAT_ram_3005e6fc = 0;
    _DAT_ram_3005e6f8 = 0;
    _DAT_ram_3005e6fa = 0;
    _DAT_ram_3005e6f0 = 0;
    _DAT_ram_3005e6f4 = 0;
    DAT_ram_3005ecca = 0;
    FUN_ram_400103a4();
    return;
  case '\x01':
  case '\x02':
    return;
  case '\x04':
    if (DAT_ram_3005e0dc != '\0') {
      DAT_ram_3005e0dd = '\x01';
    }
    DAT_ram_3005e0dc = 0;
    DAT_ram_3005e0c4 = 0;
    FUN_ram_40010a1c();
    puVar1 = (undefined *)0x0;
    goto LAB_ram_40011116;
  case '\x05':
    if (DAT_ram_3005e0dd == '\0') {
      return;
    }
    if (DAT_ram_3005ecc8 != '\0') {
      return;
    }
    DAT_ram_3005e0dc = 1;
    DAT_ram_3005e0c4 = 0;
    FUN_ram_400106d4(1);
    break;
  case '\x06':
    DAT_ram_3005edc0 = 0;
    _DAT_ram_3005e6e0 = 0;
    _DAT_ram_3005e6e2 = 0;
    DAT_ram_3005e6ec = 0;
    DAT_ram_3005e0dc = 1;
    DAT_ram_3005e0c4 = 0;
    FUN_ram_400106d4(1);
    DAT_ram_3005e0dd = '\x01';
    break;
  default:
    return;
  }
  puVar1 = &DAT_ram_40010e3e;
LAB_ram_40011116:
  FUN_ram_40014454(puVar1);
  return;
}


/* NanoCore 1.12, address 0x4001116c.
 * REA evidence: ev_fd8e43449aaef121c6a6a757e527071242381e7e5ee188138415aa984617d217
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001116c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    DAT_ram_3005efc0 = 1;
    DAT_ram_3005ecc9 = 0;
    FUN_ram_4000e68c();
    FUN_ram_400103a4();
    _DAT_ram_3005e6f0 = 0;
    _DAT_ram_3005e6f4 = 0;
    DAT_ram_3005e6fc = 0;
    _DAT_ram_3005e6f8 = 0;
    _DAT_ram_3005e6fa = 0;
    DAT_ram_3005ecca = 0;
    DAT_ram_3005ee22 = 0;
    FUN_ram_400002f4();
    _DAT_ram_3005ecc4 = 0;
    _DAT_ram_3005e700 = 0;
    FUN_ram_400002fa();
    FUN_ram_400127ce(2,(uint)DAT_ram_3005ee22 * 0xc0 + 0x3005ee40,0xb8);
    return;
  }
  FUN_ram_4000dc3e();
  DAT_ram_3005efc1 = 1;
  uVar1 = FUN_ram_4000dc50(0x3005f0e0,0xb8);
  DAT_ram_3005e02a = 1;
  FUN_ram_4001211a(0x81,0x3005f0e0,uVar1,0);
  return;
}


/* NanoCore 1.12, address 0x4001129e.
 * REA evidence: ev_1431b47223bb41bc78de8ec41eb4102d5c0a752bb4f017258af11da1ec0667a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001129e(void)

{
  DAT_ram_3005efc1 = 0;
  FUN_ram_4000dc3e();
  return;
}


/* NanoCore 1.12, address 0x400112aa.
 * REA evidence: ev_c07936c783833b24606189d2131034d315115c9c1819eb1f96d5eaf6876824af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400112aa(void)

{
  return;
}


/* NanoCore 1.12, address 0x400112ac.
 * REA evidence: ev_9d21ba7aa65a285dfeb666515d52a2a7d0f0442c2ff97c6231f98f90f03ae4d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400112ac(void)

{
  int iVar1;
  
  FUN_ram_40014454(0);
  if (DAT_ram_3005e030 == '\0') {
    if (_DAT_ram_3005e02c == 0) {
      _DAT_ram_3005e02c = FUN_ram_4003efa2(0x800,0x20,1,FUN_ram_4003f036);
    }
    if (_DAT_ram_3005e02c != 0) {
      iVar1 = FUN_ram_4000634c(0x3005e034,s_midihk_ram_40099a00,FUN_ram_40010880,0,_DAT_ram_3005e02c
                               ,0x800,0x13,10);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_40006550(0x3005e034);
        if (iVar1 == 0) {
          DAT_ram_3005e030 = '\x01';
          goto LAB_ram_40011336;
        }
        FUN_ram_4000638c(0x3005e034);
      }
      FUN_ram_4003efec(_DAT_ram_3005e02c,1,FUN_ram_4003f070);
      _DAT_ram_3005e02c = 0;
    }
  }
LAB_ram_40011336:
  FUN_ram_4000f68a(&DAT_ram_40099a08);
  FUN_ram_4000ffdc(0x3005ecdc,0x100,&DAT_ram_3004acac,2);
  FUN_ram_4000f6d8();
  FUN_ram_4000ffdc(0x3005ecf8,0x100,&DAT_ram_3004acac,2);
  FUN_ram_4000f6d8();
  FUN_ram_4000ffdc(0x3005ed14,0x100,&DAT_ram_3004acac,2);
  FUN_ram_4000f6d8();
  _DAT_ram_3005ed30 = 0;
  _DAT_ram_3005ed34 = 0;
  _DAT_ram_3005ed38 = 0;
  _DAT_ram_3005ed3c = 0;
  FUN_ram_4000f6d8(&DAT_ram_3005ed30);
  _DAT_ram_3005ed4c = 0;
  _DAT_ram_3005ed50 = 0;
  _DAT_ram_3005ed54 = 0;
  _DAT_ram_3005ed58 = 0;
  FUN_ram_4000f6d8(&DAT_ram_3005ed4c);
  FUN_ram_4000f702(&DAT_ram_3004acb4);
  FUN_ram_4000f702(&DAT_ram_3004acbc);
  FUN_ram_4000f702(&DAT_ram_3004acd0);
  FUN_ram_4000f702(&DAT_ram_3004acc8);
  thunk_FUN_ram_40011e98();
  iVar1 = FUN_ram_40029910();
  if (iVar1 == 0) {
    FUN_ram_40029d6c(2);
    FUN_ram_40029e5a();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001146e.
 * REA evidence: ev_7b6851caf057a5be116ee6c5bb9ed1c12d3be7926d9be7059e62c4e558a59119
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001146e(int param_1,undefined4 param_2,undefined2 param_3)

{
  if (param_1 == 2) {
    DAT_ram_3004acda = param_3;
    return;
  }
  if (param_1 == 0x81) {
    DAT_ram_3004acd8 = param_3;
  }
  return;
}


/* NanoCore 1.12, address 0x40011490.
 * REA evidence: ev_c8ce88f7a2ff9e8ed7e047bdae2e439288a51675b1ddc2f37c46a88885c08ad9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40011490(int param_1)

{
  int iVar1;
  
  if (param_1 == 2) {
    iVar1 = (int)DAT_ram_3004acda;
  }
  else {
    iVar1 = 0x80;
    if (param_1 == 0x81) {
      iVar1 = (int)DAT_ram_3004acd8;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x400114b8.
 * REA evidence: ev_8223335b7af9968599c5fa89fefeee96cc484c8b19ffe1caa9fdffd9f559e35a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400114b8(int param_1,undefined4 param_2,undefined1 param_3)

{
  if (param_1 == 2) {
    DAT_ram_3005f0c8 = param_3;
    return;
  }
  if (param_1 == 0x81) {
    DAT_ram_3005efc3 = param_3;
  }
  return;
}


/* NanoCore 1.12, address 0x400114da.
 * REA evidence: ev_4d4bdb901c0d658b0193d73d986caba4bb03fbcea36cb24c9a96e88c218eae87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_400114da(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = DAT_ram_3005f0c8;
  if ((param_1 != 2) && (uVar1 = 0, param_1 == 0x81)) {
    uVar1 = DAT_ram_3005efc3;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40011500.
 * REA evidence: ev_c8e12c8c35f97c33569379b55defc7b42a7efd369e35c5b9447da2ac12a768f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40011500(void)

{
  if (DAT_ram_3005e030 == '\0') {
    FUN_ram_4001075c();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40011510.
 * REA evidence: ev_46cc4730c8501e870775fca672ba2661ea53f15d025b9bf51a3cfcf2c216b84c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40011522) */

int FUN_ram_40011510(uint param_1,int param_2)

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


/* NanoCore 1.12, address 0x4001154e.
 * REA evidence: ev_c9f20ee78b17f63afda8be64af87690e7912a9053072d49592862620083da1fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40011560) */

int FUN_ram_4001154e(uint param_1,int param_2)

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


/* NanoCore 1.12, address 0x4001158c.
 * REA evidence: ev_563053caba208ddea300d78de6bd2d4af68881ccf9fd5cb13661d33a7e590e80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001158c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
    for (uVar3 = uVar2; uVar3 < 5; uVar3 = uVar3 + 1) {
      if ((1 << (uVar3 & 0x1f) & _DAT_ram_3005f2f8) != 0) {
        uVar3 = uVar3 << 0xb;
        goto LAB_ram_400115c8;
      }
    }
    uVar3 = 0;
LAB_ram_400115c8:
    puVar1 = (uint *)(uVar2 * 4 + 0x1020021c);
    fence();
    fence();
    *puVar1 = uVar3 | *puVar1 & 0xffff87ff;
    if (uVar2 == 5) {
      return;
    }
  } while( true );
}


/* NanoCore 1.12, address 0x400115e2.
 * REA evidence: ev_501027387eb8da6296db7b6f201792d857e422d5ec03e4f964d979859b09e45f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001160e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400115e2(void)

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


/* NanoCore 1.12, address 0x40011616.
 * REA evidence: ev_2028433c67d0876856171938d50f14960df1327a937b733b5eed931877861dc0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40011616(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) != param_2) {
      FUN_ram_4000563e();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4001163a.
 * REA evidence: ev_1154a5a756360cbfab8865c7a5a7a0f27e31d7125d1c3389b6602772b4512bd4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001163a(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x10) = param_2;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (0x200 < uVar2) {
    iVar1 = FUN_ram_40005604(uVar2,0x20);
    *(int *)(param_1 + 8) = iVar1;
    uVar3 = 0;
    if (iVar1 == 0) {
      FUN_ram_4003390a(&DAT_ram_400998a8);
      FUN_ram_40033920(s_alloc_error__ram_40099bb8);
      FUN_ram_4003390a(&DAT_ram_400998cc);
      uVar3 = 0xfffffffb;
    }
    return uVar3;
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  return 0;
}


/* NanoCore 1.12, address 0x4001169c.
 * REA evidence: ev_4b3928a912f386f9f033ae37291feacfb54f64e56f9ee4172beba16d0b69f1b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001169c(void)

{
  _DAT_ram_3005f268 = 8;
  _DAT_ram_3005f25c = &DAT_ram_3005f1c0;
  DAT_ram_3005f1a0 = 1;
  FUN_ram_40011510(&DAT_ram_3005f1c0,0x20);
  fence();
  _DAT_ram_102002c0 = 0x20080008;
  fence();
  _DAT_ram_10200320 = &DAT_ram_3005f1c0;
  fence();
  _DAT_ram_10200280 = 0xffffffff;
  fence();
  fence();
  _DAT_ram_10200240 = _DAT_ram_10200240 | 0x84008000;
  return;
}


/* NanoCore 1.12, address 0x40011710.
 * REA evidence: ev_62d02718c943952d4509d26a88aaac35b7a919e54e1d09d72c52cc41c79d3580
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40011710(int param_1)

{
  int iVar1;
  
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 & 0xffffff07 | param_1 << 3 | 4;
  iVar1 = 0x30d41;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    fence();
  }
  return;
}


/* NanoCore 1.12, address 0x40011746.
 * REA evidence: ev_3c20e93d5d7af4748a3fce02e7eba6b174579c5e626e3b0894fb75b025fb7795
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40011746(void)

{
  undefined4 *puVar1;
  
  FUN_ram_4000f764();
  puVar1 = (undefined4 *)&DAT_ram_10200280;
  do {
    fence();
    *puVar1 = 0xfb7f;
    fence();
    puVar1[-8] = 0xfb7f;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined4 *)0x10200294);
  fence();
  _DAT_ram_1020020c = 0;
  fence();
  _DAT_ram_10200210 = 0;
  fence();
  _DAT_ram_10200218 = 0;
  FUN_ram_40011710(0x10);
  FUN_ram_400115e2();
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 2;
  FUN_ram_40013014();
  return 0;
}


/* NanoCore 1.12, address 0x400117c8.
 * REA evidence: ev_256773ce36d78ab056e0300ee291160307ea5edb1e84bf64a85add95ec722835
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400117c8(uint param_1)

{
  fence();
  fence();
  _DAT_ram_10200200 = (param_1 & 0x7f) << 4 | _DAT_ram_10200200 & 0xfffff80f;
  return 0;
}


/* NanoCore 1.12, address 0x400117ec.
 * REA evidence: ev_7bb18e0ab63f234957b87400dede7f5f5d45d1040ca89f568f3d3bb8c30caaf4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400117ec(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar7 = _DAT_ram_10200218;
  bVar1 = *(byte *)(param_1 + 2);
  uVar5 = bVar1 & 0x7f;
  if (uVar5 < 5) {
    uVar2 = *(ushort *)(param_1 + 4) & 0x7ff;
    if ((bVar1 & 0x7f) == 0) {
      if (uVar2 == 0x20) {
        uVar2 = 1;
      }
      else if (uVar2 < 0x21) {
        if (uVar2 == 8) {
          uVar2 = 3;
        }
        else if (uVar2 == 0x10) {
          uVar2 = 2;
        }
      }
      else if (uVar2 == 0x40) {
        uVar2 = 0;
      }
    }
    fence();
    if (*(char *)(param_1 + 2) < '\0') {
      FUN_ram_4000303c(uVar5 * 7 + 0x3005f2d0,param_1,7);
      *(ushort *)(&DAT_ram_3005f1e0 + uVar5 * 0x18) = *(ushort *)(param_1 + 4) & 0x7ff;
      *(byte *)(uVar5 * 0x18 + 0x3005f1e2) = *(byte *)(param_1 + 3) & 3;
      fence();
      uVar4 = 1 << (bVar1 & 0x1f);
      _DAT_ram_10200218 = uVar4 | uVar7;
      uVar7 = *(byte *)(param_1 + 3) & 1;
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        _DAT_ram_3005f2f8 = uVar4 | _DAT_ram_3005f2f8;
      }
      else {
        if ((_DAT_ram_3005f2f4 & 2) == 0) {
          uVar7 = 1;
          uVar4 = 2;
        }
        else {
          if ((_DAT_ram_3005f2f4 & 4) != 0) {
            return 0xffffffff;
          }
          uVar7 = 2;
          uVar4 = 4;
        }
        _DAT_ram_3005f2f4 = uVar4 | _DAT_ram_3005f2f4;
        FUN_ram_40011710();
      }
      FUN_ram_4001158c();
      puVar6 = (uint *)(&DAT_ram_10200220 + uVar5 * 4);
      fence();
      uVar2 = uVar2 | (*(byte *)(param_1 + 3) & 3) << 0x12 | uVar7 << 0x16 | *puVar6;
    }
    else {
      *(ushort *)(&DAT_ram_3005f258 + uVar5 * 0x18) = *(ushort *)(param_1 + 4) & 0x7ff;
      *(byte *)(uVar5 * 0x18 + 0x3005f25a) = *(byte *)(param_1 + 3) & 3;
      fence();
      _DAT_ram_10200218 = 1 << (uVar5 + 0x10 & 0x1f) & 0xffff0000U | _DAT_ram_10200218;
      puVar6 = (uint *)(&DAT_ram_10200240 + uVar5 * 4);
      fence();
      uVar2 = uVar2 | (*(byte *)(param_1 + 3) & 3) << 0x12 | *puVar6;
    }
    fence();
    *puVar6 = uVar2 | 0x10008000;
    uVar3 = 0;
  }
  else {
    FUN_ram_4003390a(&DAT_ram_400998a8);
    FUN_ram_4003390a(s_Ep_addr__d_overflow_ram_40099bc8,*(undefined1 *)(param_1 + 2));
    FUN_ram_4003390a(&DAT_ram_400998cc);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x400119dc.
 * REA evidence: ev_f1e3322ce41252304e9a7111579c92fd0b38d859360284160bc0d31b51e59d31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400119dc(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  
  uVar3 = param_1 & 0x7f;
  iVar9 = uVar3 * 4;
  if ((char)param_1 < '\0') {
    puVar7 = (uint *)(&DAT_ram_10200220 + iVar9);
    fence();
    fence();
    if ((int)*puVar7 < 0) {
      uVar8 = (*puVar7 & 0x3ffffff) >> 0x16;
      if (uVar8 == 0) {
        fence();
        fence();
        _DAT_ram_10200204 = _DAT_ram_10200204 | 0x80;
        iVar1 = 100;
        do {
          fence();
          if ((_DAT_ram_10200010 & 0x40) != 0) goto LAB_ram_40011c02;
          iVar1 = iVar1 + -1;
          FUN_ram_4004004c(1);
        } while (iVar1 != 0);
        FUN_ram_4003390a(&DAT_ram_400998a8);
        pcVar5 = s__s__timeout_USBINTSTS_GOUTNAKEFF_ram_40099c00;
      }
      else {
        fence();
        *puVar7 = *puVar7 | 0x8000000;
        iVar1 = 100;
        do {
          fence();
          if ((*(uint *)(&DAT_ram_10200260 + iVar9) & 0x40) != 0) goto LAB_ram_40011c02;
          iVar1 = iVar1 + -1;
          FUN_ram_4004004c(1);
        } while (iVar1 != 0);
        FUN_ram_4003390a(&DAT_ram_400998a8);
        pcVar5 = s__s__timeout_INEPINT_NAKEFF_ram_40099c24;
      }
      FUN_ram_4003390a(pcVar5,s_usbd_ep_close_ram_40099c7c);
      FUN_ram_4003390a(&DAT_ram_400998cc);
LAB_ram_40011c02:
      fence();
      fence();
      *puVar7 = *puVar7 | 0x48000000;
      iVar1 = 100;
      puVar2 = (uint *)(&DAT_ram_10200260 + iVar9);
      do {
        fence();
        if ((*puVar2 & 2) != 0) goto LAB_ram_40011c68;
        iVar1 = iVar1 + -1;
        FUN_ram_4004004c(1);
      } while (iVar1 != 0);
      FUN_ram_4003390a(&DAT_ram_400998a8);
      FUN_ram_4003390a(s__s__timeout_OUTEPCFG_EPDisable_ram_40099be0,s_usbd_ep_close_ram_40099c7c);
      FUN_ram_4003390a(&DAT_ram_400998cc);
LAB_ram_40011c68:
      fence();
      fence();
      *puVar2 = *puVar2 | 2;
      FUN_ram_40011710(uVar8);
      if (uVar8 == 0) {
        _DAT_ram_3005f2f8 = ~(1 << (param_1 & 0x1f)) & _DAT_ram_3005f2f8;
        fence();
        fence();
        _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
      }
      else {
        _DAT_ram_3005f2f4 = ~(1 << uVar8) & _DAT_ram_3005f2f4;
      }
    }
    fence();
    fence();
    _DAT_ram_10200218 = ~(1 << (param_1 & 0x1f) & 0xffff0000U) & _DAT_ram_10200218;
    fence();
    *puVar7 = 0;
    uVar6 = 0x3005f300;
    puVar4 = &DAT_ram_3005f1e0 + uVar3 * 0x18;
  }
  else {
    puVar7 = (uint *)(&DAT_ram_10200240 + iVar9);
    fence();
    if ((int)*puVar7 < 0) {
      fence();
      if ((_DAT_ram_10200010 & 0x80) == 0) {
        fence();
        fence();
        _DAT_ram_10200204 = _DAT_ram_10200204 | 0x200;
      }
      iVar1 = 100;
      do {
        fence();
        if ((_DAT_ram_10200010 & 0x80) != 0) goto LAB_ram_40011a84;
        iVar1 = iVar1 + -1;
        FUN_ram_4004004c(1);
      } while (iVar1 != 0);
      FUN_ram_4003390a(&DAT_ram_400998a8);
      FUN_ram_4003390a(s__s__timeout_USBINTSTS_GOUTNAKEFF_ram_40099c00,s_usbd_ep_close_ram_40099c7c)
      ;
      FUN_ram_4003390a(&DAT_ram_400998cc);
LAB_ram_40011a84:
      fence();
      fence();
      *puVar7 = *puVar7 | 0x48000000;
      puVar2 = (uint *)(&DAT_ram_10200280 + iVar9);
      iVar9 = 0;
      do {
        fence();
        if ((*puVar2 & 2) != 0) {
          if (iVar9 == 100) {
            FUN_ram_4003390a(&DAT_ram_400998a8);
            FUN_ram_4003390a(s__s__timeout_OUTEPCFG_EPDisable_ram_40099be0,
                             s_usbd_ep_close_ram_40099c7c);
            FUN_ram_4003390a(&DAT_ram_400998cc);
          }
          break;
        }
        iVar9 = iVar9 + 1;
        FUN_ram_4004004c(1);
      } while (iVar9 != 1000);
      fence();
      fence();
      *puVar2 = *puVar2 | 2;
      fence();
      fence();
      _DAT_ram_10200204 = _DAT_ram_10200204 | 0x400;
    }
    fence();
    fence();
    _DAT_ram_10200218 = ~(1 << (uVar3 + 0x10 & 0x1f) & 0xffff0000U) & _DAT_ram_10200218;
    fence();
    *puVar7 = 0;
    uVar6 = 0x3005f500;
    puVar4 = &DAT_ram_3005f258 + uVar3 * 0x18;
  }
  FUN_ram_40011616(puVar4,uVar6);
  return 0;
}


/* NanoCore 1.12, address 0x40011d68.
 * REA evidence: ev_5d70e91251d2e6b96cfab14551ad129302ee9524d20840dcaee03e3ab3df95ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40011d68(void)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  FUN_ram_400117c8(0);
  FUN_ram_40011710(0x10);
  FUN_ram_400115e2();
  puVar3 = (undefined4 *)&DAT_ram_102002a0;
  bVar1 = 0;
  do {
    if (bVar1 == 0) {
      fence();
      _DAT_ram_10200220 = 0x8000000;
      fence();
      _DAT_ram_10200240 = 0x8000000;
    }
    else {
      FUN_ram_400119dc(bVar1);
      FUN_ram_400119dc(bVar1 | 0x80);
    }
    fence();
    *puVar3 = 0;
    fence();
    puVar3[-0x10] = 0xffffffff;
    fence();
    puVar3[8] = 0;
    fence();
    puVar3[-8] = 0xffffffff;
    bVar1 = bVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (bVar1 != 5);
  fence();
  _DAT_ram_10200218 = 0;
  fence();
  _DAT_ram_10200210 = 0x29;
  fence();
  _DAT_ram_1020020c = 0x29;
  puVar2 = &DAT_ram_3005f258;
  FUN_ram_4001158c();
  do {
    FUN_ram_40011616(puVar2,0x3005f500);
    puVar4 = puVar2 + -0x78;
    puVar2 = puVar2 + 0x18;
    FUN_ram_40011616(puVar4,0x3005f300);
  } while (puVar2 != (undefined1 *)0x3005f2d0);
  memset(&DAT_ram_3005f1c0,0,0x140);
  FUN_ram_4000f780();
  FUN_ram_4001169c();
  return 0;
}


/* NanoCore 1.12, address 0x40011e98.
 * REA evidence: ev_908418be02cee9443b2655d7d2918872e871692dbb7b50c3363b7ee54ce38198
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40011e98(void)

{
  undefined4 uVar1;
  int iVar2;
  
  memset(&DAT_ram_3005f1c0,0,0x140);
  FUN_ram_40012f42();
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 2;
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 & 0xfffffdff;
  fence();
  _DAT_ram_10200008 = 0x1407;
  iVar2 = 0x30d41;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) goto LAB_ram_40011f38;
    fence();
  } while ((_DAT_ram_10200000 & 4) == 0);
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 1;
  iVar2 = 0x30d41;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    fence();
  }
LAB_ram_40011f38:
  FUN_ram_4001158c();
  fence();
  _DAT_ram_10200028 = 0;
  fence();
  _DAT_ram_1020002c = 0;
  fence();
  fence();
  _DAT_ram_10200200 = _DAT_ram_10200200 & 0xfffffffc | 1;
  FUN_ram_40011710(0x10);
  uVar1 = FUN_ram_400115e2();
  fence();
  _DAT_ram_1020020c = 0;
  fence();
  _DAT_ram_10200210 = 0;
  fence();
  _DAT_ram_10200218 = 0;
  fence();
  fence();
  _DAT_ram_10200010 = 0xbfffffff;
  fence();
  _DAT_ram_10200014 = 0x803c3800;
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 0x3800;
  fence();
  _DAT_ram_10200018 = 0x119;
  fence();
  _DAT_ram_10200020 = 0x1000119;
  fence();
  _DAT_ram_10200028 = 0x1000219;
  fence();
  _DAT_ram_1020002c = 0xdd0319;
  FUN_ram_40011d68();
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 0x200;
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 & 0xfffffffd;
  return uVar1;
}


