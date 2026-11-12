/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40010000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400101ac.
 * REA evidence: ev_d903d802f1a9aba4def27250018c918b9f3435d291e5ae771019c2612c14ed5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400101ac(int param_1)

{
  if (param_1 != 4) {
    if (param_1 == 7) {
      DAT_ram_3005cb00 = 0;
      FUN_ram_4000f6c0();
      DAT_ram_3005be1c = 1;
      DAT_ram_3005be04 = 0;
      FUN_ram_4000fa1e(1);
      return;
    }
    if (param_1 != 1) {
      return;
    }
  }
  DAT_ram_3005be1c = 0;
  DAT_ram_3005be04 = 0;
  FUN_ram_4000f6da();
  DAT_ram_3005cb00 = 0;
  FUN_ram_4000f6c0();
  DAT_ram_3005ca09 = 0;
  DAT_ram_3005c43c = 0;
  _DAT_ram_3005c438 = 0;
  _DAT_ram_3005c43a = 0;
  _DAT_ram_3005c430 = 0;
  _DAT_ram_3005c434 = 0;
  DAT_ram_3005ca0a = 0;
  FUN_ram_4000f706();
  return;
}


/* NanoCore 1.10, address 0x40010250.
 * REA evidence: ev_3e36747f0c36e197d8122955ee1d26948acb85249a1816f032b5e04a7d2d6780
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010250(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    DAT_ram_3005ccf0 = 1;
    DAT_ram_3005ca09 = 0;
    FUN_ram_4000dac2();
    FUN_ram_4000f706();
    _DAT_ram_3005c430 = 0;
    _DAT_ram_3005c434 = 0;
    DAT_ram_3005c43c = 0;
    _DAT_ram_3005c438 = 0;
    _DAT_ram_3005c43a = 0;
    DAT_ram_3005ca0a = 0;
    DAT_ram_3005cb62 = 0;
    FUN_ram_400002f4();
    _DAT_ram_3005ca04 = 0;
    _DAT_ram_3005c440 = 0;
    FUN_ram_400002fa();
    FUN_ram_40011a18(2,(uint)DAT_ram_3005cb62 * 0xb8 + 0x3005cb80,0xb8);
    return;
  }
  DAT_ram_3005ccf1 = 1;
  uVar1 = FUN_ram_4000d68c(0x3005ce00,0xb8);
  DAT_ram_3005bd6a = 1;
  FUN_ram_400115b6(0x81,0x3005ce00,uVar1);
  return;
}


/* NanoCore 1.10, address 0x4001037c.
 * REA evidence: ev_d630d9b84cdae9d3bb387dfb6d2ccaa6795095e2f6b85882d85a11f3b0530847
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001037c(void)

{
  DAT_ram_3005ccf1 = 0;
  return;
}


/* NanoCore 1.10, address 0x40010386.
 * REA evidence: ev_86df9a988dcb7a4caba9b8f81899621a5678b0460db8f534c9bf1ae99f086dc7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010386(void)

{
  return;
}


/* NanoCore 1.10, address 0x40010388.
 * REA evidence: ev_08e974dd2a998d0208f37f1adf61173fc858abd2e87a139c1dcb59257c5b49a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010388(void)

{
  int iVar1;
  
  FUN_ram_400137a8(&LAB_ram_40010016);
  if (DAT_ram_3005bd70 == '\0') {
    if (_DAT_ram_3005bd6c == 0) {
      _DAT_ram_3005bd6c = FUN_ram_4003dfbc(0x800,0x20,1,FUN_ram_4003e050);
    }
    if (_DAT_ram_3005bd6c != 0) {
      iVar1 = FUN_ram_4000643c(0x3005bd74,s_midihk_ram_40092a90,FUN_ram_40010746,0,_DAT_ram_3005bd6c
                               ,0x800,0x13,10);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_40006640(0x3005bd74);
        if (iVar1 == 0) {
          DAT_ram_3005bd70 = '\x01';
          goto LAB_ram_40010418;
        }
        FUN_ram_4000647c(0x3005bd74);
      }
      FUN_ram_4003e006(_DAT_ram_3005bd6c,1,FUN_ram_4003e08a);
      _DAT_ram_3005bd6c = 0;
    }
  }
LAB_ram_40010418:
  FUN_ram_4000e98e(&DAT_ram_40092aac);
  FUN_ram_4000f2f8(0x3005ca1c,0x100,&DAT_ram_300466ac,2);
  FUN_ram_4000e9dc();
  FUN_ram_4000f2f8(0x3005ca38,0x100,&DAT_ram_300466ac,2);
  FUN_ram_4000e9dc();
  FUN_ram_4000f2f8(0x3005ca54,0x100,&DAT_ram_300466ac,2);
  FUN_ram_4000e9dc();
  _DAT_ram_3005ca70 = 0;
  _DAT_ram_3005ca74 = 0;
  _DAT_ram_3005ca78 = 0;
  _DAT_ram_3005ca7c = 0;
  FUN_ram_4000e9dc(&DAT_ram_3005ca70);
  _DAT_ram_3005ca8c = 0;
  _DAT_ram_3005ca90 = 0;
  _DAT_ram_3005ca94 = 0;
  _DAT_ram_3005ca98 = 0;
  FUN_ram_4000e9dc(&DAT_ram_3005ca8c);
  FUN_ram_4000ea06(&DAT_ram_300466b4);
  FUN_ram_4000ea06(&DAT_ram_300466bc);
  FUN_ram_4000ea06(&DAT_ram_300466d0);
  FUN_ram_4000ea06(&DAT_ram_300466c8);
  thunk_FUN_ram_400110e4();
  FUN_ram_40028776();
  FUN_ram_40028bba(2);
  FUN_ram_40028ca8();
  return;
}


/* NanoCore 1.10, address 0x40010544.
 * REA evidence: ev_049a7e32ecd16d7d57b00dae5c79ab4b845606d3b197cad28c8ede437a0d315a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010544(int param_1,undefined4 param_2,undefined2 param_3)

{
  if (param_1 == 2) {
    DAT_ram_300466da = param_3;
    return;
  }
  if (param_1 == 0x81) {
    DAT_ram_300466d8 = param_3;
  }
  return;
}


/* NanoCore 1.10, address 0x40010566.
 * REA evidence: ev_a3ce845f4844ffaefe119d91776d2c2f21ce446953a4a3d1ad8d3518ef0b9586
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40010566(int param_1)

{
  int iVar1;
  
  if (param_1 == 2) {
    iVar1 = (int)DAT_ram_300466da;
  }
  else {
    iVar1 = 0x80;
    if (param_1 == 0x81) {
      iVar1 = (int)DAT_ram_300466d8;
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4001058e.
 * REA evidence: ev_ede25260cbdeeb02d3a7c1bc078caf1483041eb7d7054a7e1551c2515a6a16c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001058e(int param_1,undefined4 param_2,undefined1 param_3)

{
  if (param_1 == 2) {
    DAT_ram_3005cdf8 = param_3;
    return;
  }
  if (param_1 == 0x81) {
    DAT_ram_3005ccf3 = param_3;
  }
  return;
}


/* NanoCore 1.10, address 0x400105b0.
 * REA evidence: ev_2404f802660a7c6a0ef1f6d77764cc54bc2b4d8f84828cb0ab6a2bdb7ceb1b1a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_400105b0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = DAT_ram_3005cdf8;
  if ((param_1 != 2) && (uVar1 = 0, param_1 == 0x81)) {
    uVar1 = DAT_ram_3005ccf3;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400105d6.
 * REA evidence: ev_8c1f1396375ce31094192bfa5a156900713cfc1d4b8cbfdaa676f13ce91baebb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400105d6(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 local_50 [17];
  
  if (DAT_ram_3005cb61 != '\0') {
    if (DAT_ram_3005cb00 == '\0') {
      DAT_ram_3005cb61 = '\0';
      FUN_ram_4000305c(local_50,&DAT_ram_40092a9c,0xc);
      DAT_ram_3005cb00 = '\x01';
      iVar1 = FUN_ram_4000f8d6(local_50,0xc);
      if (iVar1 < 0) {
        DAT_ram_3005cb00 = '\0';
        DAT_ram_3005cb61 = '\x01';
      }
    }
    else {
      DAT_ram_3005cb61 = '\x01';
    }
  }
  if (DAT_ram_3005bd68 != '\0') {
    DAT_ram_3005bd68 = 0;
    iVar1 = FUN_ram_40004476(&DAT_ram_40092a98);
    local_50[0] = 0;
    FUN_ram_4003e6d0(0);
    FUN_ram_4003e71c(0);
    FUN_ram_4003dcea(5);
    if (iVar1 != 0) {
      FUN_ram_400044c0(iVar1);
      FUN_ram_40004604(iVar1,0x1c02,local_50);
      FUN_ram_40004604(iVar1,0x1c05,0);
      FUN_ram_400065d4(1000);
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((DAT_ram_3005be1c != '\0') && (DAT_ram_3005be04 == '\0')) {
    iVar1 = FUN_ram_400042fa();
    iVar2 = FUN_ram_40004362(100);
    if ((iVar2 == 0) || (iVar2 <= iVar1 - _DAT_ram_3005be14)) {
      FUN_ram_4000fa1e(0);
    }
  }
  iVar1 = FUN_ram_4002a5a4(local_50,0x40);
  uVar3 = (uint)_DAT_ram_3005cdf6;
  bVar4 = false;
  for (iVar2 = 0; iVar2 != iVar1; iVar2 = iVar2 + 1) {
    uVar5 = uVar3 + 1 & 0xffff;
    *(undefined1 *)(uVar3 + 0x3005ccf4) = *(undefined1 *)((int)local_50 + iVar2);
    uVar3 = uVar5;
    if (0xff < uVar5) {
      uVar3 = 0;
    }
    bVar4 = true;
  }
  if (bVar4) {
    _DAT_ram_3005cdf6 = (ushort)uVar3;
  }
  if (iVar1 != 0) {
    FUN_ram_4000ffca();
  }
  return;
}


/* NanoCore 1.10, address 0x40010746.
 * REA evidence: ev_471bc8508c3e4126669d8f246303e271684d2d51e27e7f890d2554b9e6534fda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010746(void)

{
  do {
    FUN_ram_400105d6();
    FUN_ram_40028b8a(2);
    FUN_ram_400065d4(0x14);
  } while( true );
}


/* NanoCore 1.10, address 0x4001075c.
 * REA evidence: ev_c1f9e6fa17277cd5f7d76bf322d463c834effac50b13b9289f5cd88b9de56c47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001076e) */

int FUN_ram_4001075c(uint param_1,int param_2)

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


/* NanoCore 1.10, address 0x4001079a.
 * REA evidence: ev_b321847d794acad6447c6a04f762b64a150008b398bd2faec46fcaa2f9ffe5c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400107ac) */

int FUN_ram_4001079a(uint param_1,int param_2)

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


/* NanoCore 1.10, address 0x400107d8.
 * REA evidence: ev_9018111cc568997ad877faa575bf1e9f237d4d72a5bf4d5c95cc162be3a0e389
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400107d8(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
    for (uVar3 = uVar2; uVar3 < 5; uVar3 = uVar3 + 1) {
      if ((1 << (uVar3 & 0x1f) & _DAT_ram_3005cff8) != 0) {
        uVar3 = uVar3 << 0xb;
        goto LAB_ram_40010814;
      }
    }
    uVar3 = 0;
LAB_ram_40010814:
    puVar1 = (uint *)(uVar2 * 4 + 0x1020021c);
    fence();
    fence();
    *puVar1 = uVar3 | *puVar1 & 0xffff87ff;
    if (uVar2 == 5) {
      return;
    }
  } while( true );
}


/* NanoCore 1.10, address 0x4001082e.
 * REA evidence: ev_7e8f392bf2ee73d6f9f8bb16f7da36a9f4e532e2eb8eede25417c4ae8aa622e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001085a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001082e(void)

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


/* NanoCore 1.10, address 0x40010862.
 * REA evidence: ev_1efaa369e6abfb5fd5196d38ab3233deed2101a57e8c732bf088228ca65cb946
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010862(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) != param_2) {
      FUN_ram_4000572e();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40010886.
 * REA evidence: ev_c70c24b304b129cab238cbbd6fb089a02b5d77b3c0f4c7c8bf6dcf77c722f8b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40010886(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x10) = param_2;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (0x200 < uVar2) {
    iVar1 = FUN_ram_400056f4(uVar2,0x20);
    *(int *)(param_1 + 8) = iVar1;
    uVar3 = 0;
    if (iVar1 == 0) {
      FUN_ram_40031b48(&DAT_ram_40092950);
      FUN_ram_40031b5e(s_alloc_error__ram_40092c5c);
      FUN_ram_40031b48(&DAT_ram_40092978);
      uVar3 = 0xfffffffb;
    }
    return uVar3;
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  return 0;
}


/* NanoCore 1.10, address 0x400108e8.
 * REA evidence: ev_23091426a61e0853784de5ac10321ad7c1b6d239078197fed95b32cd78743b1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400108e8(void)

{
  _DAT_ram_3005cf68 = 8;
  _DAT_ram_3005cf5c = &DAT_ram_3005cec0;
  DAT_ram_3005ceb8 = 1;
  FUN_ram_4001075c(&DAT_ram_3005cec0,0x20);
  fence();
  _DAT_ram_102002c0 = 0x20080008;
  fence();
  _DAT_ram_10200320 = &DAT_ram_3005cec0;
  fence();
  _DAT_ram_10200280 = 0xffffffff;
  fence();
  fence();
  _DAT_ram_10200240 = _DAT_ram_10200240 | 0x84008000;
  return;
}


/* NanoCore 1.10, address 0x4001095c.
 * REA evidence: ev_85bb2725a5d1a00fd2cbe3b46f620b8de4946a103653958f8f8e6280de552fd3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001095c(int param_1)

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


/* NanoCore 1.10, address 0x40010992.
 * REA evidence: ev_bdbbc7d03d5634d33a6505c7f371246181e55ccf8087833f345893136174a435
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40010992(void)

{
  undefined4 *puVar1;
  
  FUN_ram_4000ea5a();
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
  FUN_ram_4001095c(0x10);
  FUN_ram_4001082e();
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 2;
  FUN_ram_400120b8();
  return 0;
}


/* NanoCore 1.10, address 0x40010a14.
 * REA evidence: ev_96420983dab60ed83327671b1f1c79fd1412a40d1494f8c61a36977e194b9330
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40010a14(uint param_1)

{
  fence();
  fence();
  _DAT_ram_10200200 = (param_1 & 0x7f) << 4 | _DAT_ram_10200200 & 0xfffff80f;
  return 0;
}


/* NanoCore 1.10, address 0x40010a38.
 * REA evidence: ev_c63c84fa05a520caf69aa329bcb6bea84b312a67f2f701654f165d0e7beca9e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40010a38(int param_1)

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
      FUN_ram_4000305c(uVar5 * 7 + 0x3005cfd0,param_1,7);
      *(ushort *)(&DAT_ram_3005cee0 + uVar5 * 0x18) = *(ushort *)(param_1 + 4) & 0x7ff;
      *(byte *)(uVar5 * 0x18 + 0x3005cee2) = *(byte *)(param_1 + 3) & 3;
      fence();
      uVar4 = 1 << (bVar1 & 0x1f);
      _DAT_ram_10200218 = uVar4 | uVar7;
      uVar7 = *(byte *)(param_1 + 3) & 1;
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        _DAT_ram_3005cff8 = uVar4 | _DAT_ram_3005cff8;
      }
      else {
        if ((_DAT_ram_3005cff4 & 2) == 0) {
          uVar7 = 1;
          uVar4 = 2;
        }
        else {
          if ((_DAT_ram_3005cff4 & 4) != 0) {
            return 0xffffffff;
          }
          uVar7 = 2;
          uVar4 = 4;
        }
        _DAT_ram_3005cff4 = uVar4 | _DAT_ram_3005cff4;
        FUN_ram_4001095c();
      }
      FUN_ram_400107d8();
      puVar6 = (uint *)(&DAT_ram_10200220 + uVar5 * 4);
      fence();
      uVar2 = uVar2 | (*(byte *)(param_1 + 3) & 3) << 0x12 | uVar7 << 0x16 | *puVar6;
    }
    else {
      *(ushort *)(&DAT_ram_3005cf58 + uVar5 * 0x18) = *(ushort *)(param_1 + 4) & 0x7ff;
      *(byte *)(uVar5 * 0x18 + 0x3005cf5a) = *(byte *)(param_1 + 3) & 3;
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
    FUN_ram_40031b48(&DAT_ram_40092950);
    FUN_ram_40031b48(s_Ep_addr__d_overflow_ram_40092c6c,*(undefined1 *)(param_1 + 2));
    FUN_ram_40031b48(&DAT_ram_40092978);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40010c28.
 * REA evidence: ev_d514c90ea75fb110390c0925e4bd2451daf2390f1592da3f6403d43b4a3bcafa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40010c28(uint param_1)

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
          if ((_DAT_ram_10200010 & 0x40) != 0) goto LAB_ram_40010e4e;
          iVar1 = iVar1 + -1;
          FUN_ram_4003f052(1);
        } while (iVar1 != 0);
        FUN_ram_40031b48(&DAT_ram_40092950);
        pcVar5 = s__s__timeout_USBINTSTS_GOUTNAKEFF_ram_40092ca4;
      }
      else {
        fence();
        *puVar7 = *puVar7 | 0x8000000;
        iVar1 = 100;
        do {
          fence();
          if ((*(uint *)(&DAT_ram_10200260 + iVar9) & 0x40) != 0) goto LAB_ram_40010e4e;
          iVar1 = iVar1 + -1;
          FUN_ram_4003f052(1);
        } while (iVar1 != 0);
        FUN_ram_40031b48(&DAT_ram_40092950);
        pcVar5 = s__s__timeout_INEPINT_NAKEFF_ram_40092cc8;
      }
      FUN_ram_40031b48(pcVar5,s_usbd_ep_close_ram_40092d20);
      FUN_ram_40031b48(&DAT_ram_40092978);
LAB_ram_40010e4e:
      fence();
      fence();
      *puVar7 = *puVar7 | 0x48000000;
      iVar1 = 100;
      puVar2 = (uint *)(&DAT_ram_10200260 + iVar9);
      do {
        fence();
        if ((*puVar2 & 2) != 0) goto LAB_ram_40010eb4;
        iVar1 = iVar1 + -1;
        FUN_ram_4003f052(1);
      } while (iVar1 != 0);
      FUN_ram_40031b48(&DAT_ram_40092950);
      FUN_ram_40031b48(s__s__timeout_OUTEPCFG_EPDisable_ram_40092c84,s_usbd_ep_close_ram_40092d20);
      FUN_ram_40031b48(&DAT_ram_40092978);
LAB_ram_40010eb4:
      fence();
      fence();
      *puVar2 = *puVar2 | 2;
      FUN_ram_4001095c(uVar8);
      if (uVar8 == 0) {
        _DAT_ram_3005cff8 = ~(1 << (param_1 & 0x1f)) & _DAT_ram_3005cff8;
        fence();
        fence();
        _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
      }
      else {
        _DAT_ram_3005cff4 = ~(1 << uVar8) & _DAT_ram_3005cff4;
      }
    }
    fence();
    fence();
    _DAT_ram_10200218 = ~(1 << (param_1 & 0x1f) & 0xffff0000U) & _DAT_ram_10200218;
    fence();
    *puVar7 = 0;
    uVar6 = 0x3005d000;
    puVar4 = &DAT_ram_3005cee0 + uVar3 * 0x18;
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
        if ((_DAT_ram_10200010 & 0x80) != 0) goto LAB_ram_40010cd0;
        iVar1 = iVar1 + -1;
        FUN_ram_4003f052(1);
      } while (iVar1 != 0);
      FUN_ram_40031b48(&DAT_ram_40092950);
      FUN_ram_40031b48(s__s__timeout_USBINTSTS_GOUTNAKEFF_ram_40092ca4,s_usbd_ep_close_ram_40092d20)
      ;
      FUN_ram_40031b48(&DAT_ram_40092978);
LAB_ram_40010cd0:
      fence();
      fence();
      *puVar7 = *puVar7 | 0x48000000;
      puVar2 = (uint *)(&DAT_ram_10200280 + iVar9);
      iVar9 = 0;
      do {
        fence();
        if ((*puVar2 & 2) != 0) {
          if (iVar9 == 100) {
            FUN_ram_40031b48(&DAT_ram_40092950);
            FUN_ram_40031b48(s__s__timeout_OUTEPCFG_EPDisable_ram_40092c84,
                             s_usbd_ep_close_ram_40092d20);
            FUN_ram_40031b48(&DAT_ram_40092978);
          }
          break;
        }
        iVar9 = iVar9 + 1;
        FUN_ram_4003f052(1);
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
    uVar6 = 0x3005d200;
    puVar4 = &DAT_ram_3005cf58 + uVar3 * 0x18;
  }
  FUN_ram_40010862(puVar4,uVar6);
  return 0;
}


/* NanoCore 1.10, address 0x40010fb4.
 * REA evidence: ev_a073ab84585b414ec82382387b9da94a8d00c9162cbafd745845d9a03a78eeb4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40010fb4(void)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  FUN_ram_40010a14(0);
  FUN_ram_4001095c(0x10);
  FUN_ram_4001082e();
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
      FUN_ram_40010c28(bVar1);
      FUN_ram_40010c28(bVar1 | 0x80);
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
  puVar2 = &DAT_ram_3005cf58;
  FUN_ram_400107d8();
  do {
    FUN_ram_40010862(puVar2,0x3005d200);
    puVar4 = puVar2 + -0x78;
    puVar2 = puVar2 + 0x18;
    FUN_ram_40010862(puVar4,0x3005d000);
  } while (puVar2 != (undefined1 *)0x3005cfd0);
  memset(&DAT_ram_3005cec0,0,0x140);
  FUN_ram_4000ea76();
  FUN_ram_400108e8();
  return 0;
}


