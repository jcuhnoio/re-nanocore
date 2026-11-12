/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40015000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4001587a.
 * REA evidence: ev_89107f665f8338bdd2ce402292155d6aff0e415c9a9bd6e5daa140c0eefd0284
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40015a4e) */
/* WARNING: Removing unreachable block (ram,0x40015a2c) */
/* WARNING: Removing unreachable block (ram,0x40015a3c) */
/* WARNING: Removing unreachable block (ram,0x40015a5e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001587a(undefined4 param_1)

{
  float fVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uStack_34;
  
  FUN_ram_4000505c(&DAT_ram_300685cc,0,0x100);
  _DAT_ram_300685d8 = param_1;
  _DAT_ram_300685cc = FUN_ram_400042fa();
  _DAT_ram_300685d0 = _DAT_ram_300685cc;
  _DAT_ram_300685d4 = _DAT_ram_300685cc;
  iVar4 = FUN_ram_4002c39e(0x25800);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_40005666(0x25800);
    if (iVar4 == 0) {
      _DAT_ram_30068600 = 0;
      return 0xffffffff;
    }
    DAT_ram_30068608 = 0;
  }
  else {
    DAT_ram_30068608 = 1;
  }
  _DAT_ram_30068600 = iVar4;
  iVar4 = FUN_ram_4002c39e(0x4b000);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_40005666(0x4b000);
    if (iVar4 == 0) {
      _DAT_ram_30068604 = 0;
      FUN_ram_40014e9c();
      return 0xfffffffe;
    }
    DAT_ram_30068609 = 0;
  }
  else {
    DAT_ram_30068609 = 1;
  }
  _DAT_ram_30068604 = iVar4;
  FUN_ram_4004c24c();
  FUN_ram_4004c3d4();
  _DAT_ram_300685e0 = FUN_ram_40042b1a();
  if (_DAT_ram_300685e0 == 0) {
    FUN_ram_40014e9c();
    uVar6 = 0xfffffffd;
  }
  else {
    FUN_ram_40043faa(_DAT_ram_300685e0,0,0);
    FUN_ram_40044038(_DAT_ram_300685e0,0x140,0xf0);
    FUN_ram_40047986(_DAT_ram_300685e0,0xff,0);
    uStack_34 = uStack_34 & 0xff000000;
    FUN_ram_40047968(_DAT_ram_300685e0,uStack_34,0);
    FUN_ram_400479c4(_DAT_ram_300685e0,0,0);
    FUN_ram_40042b3a(_DAT_ram_300685e0,0x10);
    FUN_ram_40042b3a(_DAT_ram_300685e0,2);
    _DAT_ram_300685e4 = FUN_ram_4005600c(_DAT_ram_300685e0);
    if (_DAT_ram_300685e4 == 0) {
      FUN_ram_40014e9c();
      uVar6 = 0xfffffffc;
    }
    else {
      FUN_ram_40043faa(_DAT_ram_300685e4,0,0);
      FUN_ram_40044038(_DAT_ram_300685e4,0x140,0xf0);
      FUN_ram_40042b3a(_DAT_ram_300685e4,0x10);
      FUN_ram_40042b3a(_DAT_ram_300685e4,2);
      FUN_ram_4000505c(&DAT_ram_300685e8,0,0x18);
      fVar1 = DAT_ram_400930f4;
      _DAT_ram_300685e8 = 0x201219;
      _DAT_ram_300685ec = 0xf00140;
      _DAT_ram_300685f4 = 0x25800;
      _DAT_ram_300685f8 = _DAT_ram_30068600;
      _DAT_ram_300685fc = 0;
      puVar2 = &DAT_ram_300685cc;
      do {
        uVar5 = FUN_ram_40014cc6();
        puVar3 = puVar2 + 0x10;
        *(ulonglong *)(puVar2 + 0x40) = (ulonglong)(uint)(float)(uVar5 % 0x140);
        uVar5 = FUN_ram_40014cc6();
        *(ulonglong *)(puVar2 + 0x44) = (ulonglong)(uint)(float)(uVar5 % 100 + 0xf0);
        uVar5 = FUN_ram_40014cc6();
        *(ulonglong *)(puVar2 + 0x48) = (ulonglong)(uint)(float)(uVar5 % 0x19 + 0xf);
        uVar5 = FUN_ram_40014cc6();
        *(ulonglong *)(puVar2 + 0x4c) = (ulonglong)(uint)((float)(uVar5 % 100) * fVar1);
        puVar2 = puVar3;
      } while (puVar3 != (undefined1 *)0x3006868c);
      FUN_ram_40014d48(0);
      FUN_ram_40014ce8();
      FUN_ram_40056474(_DAT_ram_300685e4,&DAT_ram_300685e8);
      FUN_ram_40044572(_DAT_ram_300685e4);
      FUN_ram_40048dde(0);
      _DAT_ram_300685dc = FUN_ram_4004b642(FUN_ram_40014f5c,0x10,0);
      uVar6 = 0;
      if (_DAT_ram_300685dc == 0) {
        FUN_ram_40014e9c();
        uVar6 = 0xfffffffb;
      }
    }
  }
  return uVar6;
}


/* NanoCore 1.10, address 0x40015ab6.
 * REA evidence: ev_2953b1733d3f1d2ac73887baae077087d0988d6bd29691684c0906b3c610cce3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40015ae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40015ab6(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)_DAT_ram_30068f40;
  uVar1 = 0;
  if ((199 < uVar2) && (uVar1 = 1000, uVar2 < 0x5dc)) {
    uVar1 = ((uVar2 - 200) * 1000) / 0x514 & 0xffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40015aee.
 * REA evidence: ev_ee9b57c5437dd3e7481386c8796d05fb9964c70eda67e0bcb3f8b0cfa9244774
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015aee(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_ram_30068ee8 = 4;
  _DAT_ram_30068eec = 5;
  _DAT_ram_30068ef0 = 0;
  _DAT_ram_30068ef4 = 1;
  _DAT_ram_30068ef8 = 2;
  _DAT_ram_30068efc = 3;
  iVar1 = 0;
  iVar2 = 6;
  while( true ) {
    if (*(uint *)(&DAT_ram_300687d8 + iVar1 * 4) < 8) {
      *(uint *)(&DAT_ram_30068ee8 + iVar2 * 4) = *(uint *)(&DAT_ram_300687d8 + iVar1 * 4) + 6;
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 1;
    if (iVar1 == 8) break;
    if (iVar2 == 0xe) {
      return;
    }
  }
  for (; iVar2 != 0xe; iVar2 = iVar2 + 1) {
    *(int *)(&DAT_ram_30068ee8 + iVar2 * 4) = iVar2;
  }
  return;
}


/* NanoCore 1.10, address 0x40015b50.
 * REA evidence: ev_206904fd29a8df1671d509da564f589da43cb42b14d7b79300df328edeeb9c63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015b50(void)

{
  DAT_ram_30069019 = 0;
  _DAT_ram_3006901c = 0;
  return;
}


/* NanoCore 1.10, address 0x40015b62.
 * REA evidence: ev_a9be6b8fe98da633914e5381e6a7eb51631e933c6289a96d6a998593db95fac3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015b62(void)

{
  if (_DAT_ram_30068f50 != 0) {
    FUN_ram_4003e08a(1);
    _DAT_ram_30068f50 = 0;
  }
  DAT_ram_30068f6c = 0;
  FUN_ram_4000505c(&DAT_ram_30068f54,0,0x18);
  return;
}


/* NanoCore 1.10, address 0x40015bb0.
 * REA evidence: ev_0f0d0311d2123ccdd98d027b155f4404ff838ba3cd6905429055cd383838c3d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015bb0(undefined4 param_1,int param_2,int param_3)

{
  FUN_ram_40043faa(param_1,param_2 * 0x4a + 0x18,(1 - param_3) * -0x3a + 0xb6);
  FUN_ram_40044038(param_1,0x32,0x32);
  return;
}


/* NanoCore 1.10, address 0x40015be8.
 * REA evidence: ev_242378b7d32bacc9d6fb1f33c1a0c613ca85f71ea02cbddcade8177f57ddbbca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015be8(void)

{
  DAT_ram_300466ec = 0xffffffff;
  if (_DAT_ram_30068f70 != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_30068f70 = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015c14.
 * REA evidence: ev_e972790f4b27c29dea9a142cf9fc3b97734794be15504d4506af5aa5e7edf2a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015c14(void)

{
  if (_DAT_ram_30069118 != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_30069118 = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015c36.
 * REA evidence: ev_dac1d21031174fe926801a7fac205ed51c7d92a2791231e1a2a738c769f6d361
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015c36(void)

{
  if (_DAT_ram_30068f4c != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_30068f4c = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015c58.
 * REA evidence: ev_6ae6e1d2b47a8bb4644051348cf1324f7bf2193c4a27a677baecb3f52df3dc52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015c58(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_30068f84;
  if (_DAT_ram_30068f84 != 0) {
    thunk_FUN_ram_40024b16(DAT_ram_300466f4);
    uVar2 = thunk_FUN_ram_40024aee();
    FUN_ram_400561e6(iVar1,uVar2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015c8e.
 * REA evidence: ev_7eba948d45c248e1d6b3411516c55444f6d9ecc09b80fba4e754c4e4ae4f6b59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015c8e(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40047b04();
  if (iVar1 != 0) {
    iVar1 = FUN_ram_40047b2c();
    FUN_ram_40047d7c(param_1,iVar1 + -1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015cb8.
 * REA evidence: ev_40e5f90d05403a4f3761481b7f29e98895ff8dea668a91db249ba9c183a1fdb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40015d06) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015cb8(uint param_1)

{
  uint uVar1;
  
  if ((_DAT_ram_30068f44 != 0) && (_DAT_ram_30068f3c != 0)) {
    if (param_1 != 0) {
      uVar1 = param_1 & 0xffff;
      if (1000 < param_1) {
        uVar1 = 1000;
      }
      FUN_ram_40043fc4(_DAT_ram_30068f3c,(uVar1 * 0x6c + 999) / 1000);
      FUN_ram_40042b3a(_DAT_ram_30068f44,1);
      FUN_ram_40015c8e(_DAT_ram_30068f44);
      return;
    }
    FUN_ram_40043064(_DAT_ram_30068f44,1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015d2a.
 * REA evidence: ev_cad7d6b69feb7b9e2025fd247ab626291c1ab54bc6147176fbbe36362dcdd1c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015d2a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_3c [4];
  uint uStack_38;
  undefined1 auStack_30 [24];
  
  iVar2 = -1;
  iVar1 = 0;
  do {
    FUN_ram_400055ea(auStack_30,0x10,s_volume_meter__d_ram_40093144,iVar1);
    iVar3 = FUN_ram_4002ba66(auStack_30,auStack_3c);
    if ((iVar3 == 0) && (0xc < uStack_38)) {
      iVar2 = iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 9);
  DAT_ram_300466e8 = iVar2;
  return;
}


/* NanoCore 1.10, address 0x40015d86.
 * REA evidence: ev_5e02a2c6a68c5e69558a79fba7a8c88c34c72ef9cde3352891e0186f94e2da4c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40015df4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015d86(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = _DAT_ram_30068c20;
  if (_DAT_ram_30068c20 != 0) {
    iVar3 = thunk_FUN_ram_4002206a();
    if ((iVar3 == 0) ||
       ((iVar3 = FUN_ram_4002cba0(), iVar3 == 0 &&
        (uVar4 = FUN_ram_40004388(), (uVar4 / 500 & 1) != 0)))) {
      cVar2 = '3';
    }
    else {
      cVar2 = -1;
    }
    if ((_DAT_ram_30069124 != iVar1) || (DAT_ram_300466f5 != cVar2)) {
      FUN_ram_40047a34(iVar1,cVar2,0);
      _DAT_ram_30069124 = iVar1;
      DAT_ram_300466f5 = cVar2;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40015e02.
 * REA evidence: ev_fab522965c71ecee90f32e423c0fade7eb981f8c4f60ec012af32182edd64889
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015e02(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_4000d9ce();
  iVar1 = _DAT_ram_30068c48;
  if (_DAT_ram_30068c48 != 0) {
    thunk_FUN_ram_40024b16();
    uVar2 = thunk_FUN_ram_40024aee();
    FUN_ram_400561e6(iVar1,uVar2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015e34.
 * REA evidence: ev_1e1c8ef35f0e7ab9468a414f04b6e2549a548b29ce5631b4c70337c2e1ec62a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40015e34(void)

{
  int iVar1;
  undefined1 auStack_20 [24];
  
  iVar1 = FUN_ram_4002b820(auStack_20);
  if (iVar1 != 0) {
    FUN_ram_4002b9e2();
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40015e52.
 * REA evidence: ev_e114ab02c0c412077c2adfc39c60e39228ad81f34bcf8e98c5d24576f4542869
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015e52(undefined4 param_1)

{
  FUN_ram_400440bc(param_1,9,0,0);
  return;
}


/* NanoCore 1.10, address 0x40015e5c.
 * REA evidence: ev_3c6777f33f53a1423cad7860e4a92273545f41bd903d50491de45cd628247f3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015e5c(void)

{
  FUN_ram_40015c36();
  FUN_ram_4003ea0e();
  return;
}


/* NanoCore 1.10, address 0x40015e6c.
 * REA evidence: ev_db6a1804ad5358a1ddf60edec7f08a596bb23840773bede3a4962c4890c4f785
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015e6c(int param_1,uint param_2)

{
  if ((param_1 != 0) && (param_2 < 8)) {
    FUN_ram_40015bb0(param_1,param_2 & 3,(int)param_2 >> 2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015e80.
 * REA evidence: ev_31d725437baaec7f7cb8cdfe445e1512061cdf99cedacf6dd383379c05b2c88c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015e80(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40043faa(param_1,0x78,0xd);
    FUN_ram_40044038(param_1,0x28,0x28);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015eaa.
 * REA evidence: ev_8d947810751d3bb7a0d7bf67a912a6e995286d5ac9b65636e4bced1f3af1035f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015eaa(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40043faa(param_1,0xad,0xd);
    FUN_ram_40044038(param_1,0x28,0x28);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015ed4.
 * REA evidence: ev_fff6d6fb1d77f7da3f0b47b006809bc7ddc5c74c5d2b9f7fce8a1c04f35f1843
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015ed4(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40043faa(param_1,0x115,0xb);
    FUN_ram_40044038(param_1,0x18,0x2d);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40015efc.
 * REA evidence: ev_710c83c5a65188333ba34dfdfe5bd54e1f446677e4023703fd63611838882d23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40015f32) */
/* WARNING: Removing unreachable block (ram,0x40015f3c) */

void FUN_ram_40015efc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_40043fc4(param_1,0x200007d1);
  FUN_ram_40043ffe(param_1,0x200007d1);
  FUN_ram_4004500e(param_1);
  iVar1 = FUN_ram_400440f2(param_1);
  iVar2 = FUN_ram_400440fe(param_1);
  FUN_ram_40043faa(param_1,0xfb - iVar1 / 2,0x59 - iVar2 / 2);
  return;
}


/* NanoCore 1.10, address 0x40015f58.
 * REA evidence: ev_7efa0b7335e1f7adfb495be2cd79da9fa55636bdff88ec540ef7e63a2933188f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40015f58(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_ram_30069019 = 1;
  DAT_ram_3006901a = 1;
  uVar1 = FUN_ram_40004362(0x21);
  iVar2 = FUN_ram_400042fa();
  if (_DAT_ram_3006901c != 0) {
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    if ((uint)(iVar2 - _DAT_ram_3006901c) < uVar1) {
      return 0;
    }
  }
  _DAT_ram_3006901c = iVar2;
  return 1;
}


/* NanoCore 1.10, address 0x40015fa8.
 * REA evidence: ev_017da238c07c4669d1f0aa8633977c9c7bf66fd4dc59a08db1ad000eef1135eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40015fa8(char *param_1)

{
  int iVar1;
  undefined1 auStack_1c [4];
  uint uStack_18;
  
  if (*param_1 != '\0') {
    iVar1 = FUN_ram_4002ba66(param_1,auStack_1c);
    return iVar1 == 0 && 0xc < uStack_18;
  }
  return false;
}


/* NanoCore 1.10, address 0x40015fd2.
 * REA evidence: ev_d711849c2f8128c1ced3aa03430ee340bdd2c999f90a4ceff60cd62820c00c33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015fd2(void)

{
  uint uVar1;
  char *pcVar2;
  
  if ((_DAT_ram_300687b0 != 0) && (_DAT_ram_300687a8 != 0)) {
    uVar1 = FUN_ram_4002cb6a();
    if ((uint)DAT_ram_300687ac != (uVar1 & 0xff)) {
      DAT_ram_300687ac = (byte)uVar1;
      if (uVar1 == 2) {
        pcVar2 = s_NO_BT_ram_40093154;
      }
      else {
        pcVar2 = s_BT_FW_ERR_ram_4009315c;
        if (uVar1 != 3) {
          FUN_ram_40043064(_DAT_ram_300687b0,1);
          return;
        }
      }
      FUN_ram_4005727c(_DAT_ram_300687a8,pcVar2);
      FUN_ram_40042b3a(_DAT_ram_300687b0,1);
      FUN_ram_40015c8e(_DAT_ram_300687b0);
      return;
    }
  }
  return;
}


