/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40013000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40013070.
 * REA evidence: ev_17c3742b165edd394e11b0a74b50f2884ca94a60e3a218c3fa727af5f4ab144a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40013070(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_ram_40022106();
  iVar5 = 0x7f;
  if (iVar1 < 0x80) {
    iVar5 = iVar1;
  }
  iVar1 = FUN_ram_40022186();
  if (100 < iVar1) {
    iVar1 = 100;
  }
  iVar2 = FUN_ram_400221fc();
  if (100 < iVar2) {
    iVar2 = 100;
  }
  iVar3 = FUN_ram_400220ac();
  if (0x10 < iVar3) {
    iVar3 = 0x10;
  }
  *param_1 = 1;
  iVar4 = thunk_FUN_ram_4002206a();
  param_1[1] = iVar4 != 0;
  iVar4 = FUN_ram_40022018();
  param_1[2] = iVar4 != 0;
  if (iVar5 < -0x80) {
    iVar5 = -0x80;
  }
  param_1[3] = (char)iVar5;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  param_1[4] = (char)iVar1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  param_1[5] = (char)iVar2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  param_1[6] = (char)iVar3;
  return;
}


/* NanoCore 1.10, address 0x40013130.
 * REA evidence: ev_9cf0510e330db036f97198445a6dd22e0b53ff18bd5bf33fb8c3c7bdd79d60b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40013130(void)

{
  undefined4 *in_a3;
  undefined1 *in_a4;
  
  FUN_ram_40013070(0x30067be8);
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = 0x30067be8;
    in_a3[1] = 7;
  }
  *in_a4 = 0;
  return 1;
}


/* NanoCore 1.10, address 0x4001317a.
 * REA evidence: ev_2b4aa097f2b6a43850168bcf19bf2c9569aa4da00d805399ba6b3b29f0c93ce0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001317a(void)

{
  int iVar1;
  undefined4 *in_a3;
  undefined1 *in_a4;
  undefined1 uVar2;
  
  iVar1 = FUN_ram_40022e16(0x30068200,1);
  if (iVar1 == -1) {
    uVar2 = 6;
  }
  else {
    if (iVar1 == 0) {
      if (in_a3 != (undefined4 *)0x0) {
        *in_a3 = 0x30068200;
        in_a3[1] = 0x80;
      }
      *in_a4 = 0;
      return 1;
    }
    uVar2 = 7;
  }
  *in_a4 = uVar2;
  return 1;
}


/* NanoCore 1.10, address 0x400131e0.
 * REA evidence: ev_2faa103adbb12e974186730019bff6d2a9fde7188aa4d200fbac215b5f4f780b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400131e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined1 *param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002a6a2(param_6,param_3,0x30067bfc,0x300,0xfa);
  if (iVar1 == 0) {
    *param_5 = 2;
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x30067bfc;
      param_4[1] = iVar1;
    }
    *param_5 = 0;
  }
  return 1;
}


/* NanoCore 1.10, address 0x4001323e.
 * REA evidence: ev_09d4a19456156030dd8bb8bed3268808ad4a3bf5bf52e237f249a7bc75ffe68f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001323e(void)

{
  undefined4 *in_a3;
  undefined1 *in_a4;
  
  FUN_ram_40023c9a((undefined1)DAT_ram_300466e0);
  DAT_ram_30067bf8 = 2;
  DAT_ram_30067bf9 = FUN_ram_40023d0c();
  _DAT_ram_30067bfa = FUN_ram_40023d2a();
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = &DAT_ram_30067bf8;
    in_a3[1] = 4;
  }
  *in_a4 = 0;
  return 1;
}


/* NanoCore 1.10, address 0x40013294.
 * REA evidence: ev_61ec05d47b838a0559b1938327090147f0efd576a860ee89e38079afb916628f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40013294(void)

{
  undefined4 in_register_00000100;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_a3;
  undefined1 *in_a4;
  uint uVar9;
  uint uVar10;
  undefined1 uStack_45;
  uint auStack_44 [4];
  
  uStack_45 = 0;
  uVar4 = 0;
  if (in_a4 != (undefined1 *)0x0) {
    DAT_ram_300678e4 = 3;
    iVar5 = FUN_ram_40031368(&uStack_45);
    if (iVar5 != 0) {
      uStack_45 = 0;
    }
    uVar1 = 3;
    uVar10 = 0;
    DAT_ram_300678e5 = uStack_45;
    DAT_ram_300678e6 = FUN_ram_400174b8();
    do {
      uVar6 = FUN_ram_400236a0(&PTR_FUN_ram_4001dffa_ram_40092da0,uVar10 & 0xff);
      uVar4 = FUN_ram_40024ea8(uVar10);
      uVar3 = FUN_ram_4001deba();
      uVar7 = FUN_ram_4001dffa(uVar4);
      if (0x300 < uVar1 + 3) break;
      (&DAT_ram_300678e4)[uVar1] = uVar3;
      puVar2 = &DAT_ram_300678e4 + uVar1;
      (&DAT_ram_300678e5)[uVar1] = (char)uVar7;
      (&DAT_ram_300678e6)[uVar1] = (char)uVar6;
      uVar1 = uVar1 + 3;
      for (uVar9 = 0; uVar9 != uVar6; uVar9 = uVar9 + 1 & 0xff) {
        uVar8 = FUN_ram_40026450(uVar10,uVar7,uVar9,1);
        FUN_ram_4001dfce(uVar4,uVar8);
        if (0x300 < uVar1 + 4) break;
        puVar2[3] = (char)in_register_00000100;
        puVar2[4] = (char)((uint)in_register_00000100 >> 8);
        puVar2[5] = (char)((uint)in_register_00000100 >> 0x10);
        puVar2[6] = (char)((uint)in_register_00000100 >> 0x18);
        uVar1 = uVar1 + 4;
        puVar2 = puVar2 + 4;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 8);
    uVar10 = uVar1;
    if (uVar1 + 9 < 0x301) {
      auStack_44[0] = 0;
      iVar5 = FUN_ram_4001742e(auStack_44);
      (&DAT_ram_300678e4)[uVar1] = 8;
      uVar6 = 0;
      do {
        if ((iVar5 == 0) || (auStack_44[0] <= uVar6)) {
          uVar3 = (undefined1)uVar6;
        }
        else {
          uVar3 = (undefined1)*(undefined4 *)(iVar5 + uVar6 * 4);
        }
        (&DAT_ram_300678e5)[uVar6 + uVar1] = uVar3;
        uVar6 = uVar6 + 1;
        uVar10 = uVar1 + 9;
      } while (uVar6 != 8);
    }
    if (in_a3 != (undefined4 *)0x0) {
      *in_a3 = &DAT_ram_300678e4;
      in_a3[1] = uVar10;
    }
    *in_a4 = 0;
    uVar4 = 1;
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x4001347a.
 * REA evidence: ev_589048fd888e42c71856646607a7c4b41310d398c9afb2207993eebbd83040a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001347a(int param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte local_8 [8];
  
  uVar3 = 0;
  uVar5 = 0;
  while( true ) {
    if (param_2 <= uVar3) {
      *param_5 = uVar5;
      return 0;
    }
    local_8[0] = 0;
    local_8[1] = 0;
    local_8[2] = 0;
    local_8[3] = 0;
    local_8[4] = 0;
    local_8[5] = 0;
    local_8[6] = 0;
    uVar2 = 0;
    iVar7 = param_1 + uVar3;
    uVar6 = 0;
    do {
      bVar1 = *(byte *)(iVar7 + uVar6);
      uVar3 = uVar3 + 1;
      if ((char)bVar1 < '\0') {
        uVar2 = uVar2 | 1 << (uVar6 & 0x1f) & 0xffU;
      }
      uVar4 = uVar6 + 1;
      local_8[uVar6] = bVar1 & 0x7f;
    } while ((uVar4 != 7) && (uVar6 = uVar4, uVar3 != param_2));
    uVar6 = uVar5 + 1 + uVar4;
    if (param_4 < uVar6) break;
    iVar7 = param_3 + uVar5;
    *(char *)(param_3 + uVar5) = (char)uVar2;
    uVar2 = 0;
    do {
      *(byte *)(iVar7 + 1 + uVar2) = local_8[uVar2];
      uVar2 = uVar2 + 1;
      uVar5 = uVar6;
    } while (uVar2 != uVar4);
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40013506.
 * REA evidence: ev_b684c8578ab941b84e0cfde3431bc8efb471ad22a35ee1208d9b49c12a9c931e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40013506(undefined4 param_1,undefined1 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  size_t asStack_24 [3];
  
  asStack_24[0] = 0;
  pcVar2 = (code *)FUN_ram_40012b4e();
  if ((pcVar2 != (code *)0x0) && (param_4 != 0)) {
    if (0x400 < param_4) {
      param_4 = 0x400;
    }
    if (DAT_ram_3006753c != '\0') {
      FUN_ram_400049d6(0x30067510,0xffffffff);
    }
    iVar3 = FUN_ram_4001347a(param_3,param_4,0x30066d00,0x400,asStack_24);
    if (iVar3 == 0) {
      _DAT_ram_300654fc = 0x434e7df0;
      DAT_ram_30065500 = param_2;
      if (asStack_24[0] + 6 < 0x401) {
        memcpy((void *)0x30065501,(void *)0x30066d00,asStack_24[0]);
        uVar1 = asStack_24[0] + 6;
        *(undefined1 *)(asStack_24[0] + 0x30065501) = 0xf7;
        uVar4 = uVar1;
        if (0xff < uVar1) {
          uVar4 = 0xff;
        }
        FUN_ram_40010386(&DAT_ram_40092e58,&DAT_ram_300654fc,uVar4 & 0xff);
        (*pcVar2)(&DAT_ram_300654fc,uVar1);
      }
    }
    if (DAT_ram_3006753c != '\0') {
      FUN_ram_40004ac8(0x30067510);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40013600.
 * REA evidence: ev_93319ff3113299d56ff3ca73f731be30db908fd8c8358d7b2d2e4c5c09cd0394
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40013600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                     void *param_5,uint param_6)

{
  size_t __n;
  undefined1 uStack_318;
  undefined1 uStack_317;
  undefined1 uStack_316;
  undefined1 uStack_315;
  undefined1 uStack_314;
  undefined1 uStack_313;
  undefined2 uStack_312;
  undefined1 auStack_310 [772];
  
  __n = 0x300;
  if (param_6 < 0x301) {
    __n = param_6;
  }
  uStack_318 = 2;
  uStack_315 = (undefined1)param_3;
  uStack_317 = (undefined1)param_2;
  uStack_316 = (undefined1)((uint)param_2 >> 8);
  uStack_314 = (undefined1)((uint)param_3 >> 8);
  uStack_312 = (undefined2)__n;
  uStack_313 = param_4;
  if ((param_6 != 0) && (param_5 != (void *)0x0)) {
    memcpy(auStack_310,param_5,__n);
  }
  FUN_ram_40013506(param_1,0x71,&uStack_318,__n + 8);
  return;
}


/* NanoCore 1.10, address 0x400136e8.
 * REA evidence: ev_77c7d5bedd22e81ebdfecf9dadd51e5b3c5b52d7d8de7761ccbbd5ffb6b5141e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400136e8(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
                undefined1 *param_5)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (bVar1 == 2) {
    FUN_ram_4002aa14(0);
    DAT_ram_300654f4 = 1;
    DAT_ram_300681fc = 2;
  }
  else {
    if (1 < bVar1) {
      *param_5 = 1;
      return 1;
    }
    DAT_ram_300654f4 = 0;
    FUN_ram_4002aa14(bVar1);
    DAT_ram_300681fc = FUN_ram_4002ab0e();
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = &DAT_ram_300681fc;
    param_4[1] = 1;
  }
  *param_5 = 0;
  return 1;
}


/* NanoCore 1.10, address 0x4001379e.
 * REA evidence: ev_2c5edc93d18bf52393fd695ac77848b7cbe1c3813106a863d80c5685bd72229d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001379e(undefined4 param_1)

{
  _DAT_ram_30067540 = param_1;
  return;
}


/* NanoCore 1.10, address 0x400137a8.
 * REA evidence: ev_53ff5b021a17a13f1a592f91664fd58b2cff50b43c4b5887f324b5f997a395e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400137a8(undefined4 param_1)

{
  _DAT_ram_30067544 = param_1;
  return;
}


/* NanoCore 1.10, address 0x400137b2.
 * REA evidence: ev_b0158e7e906e2e27f28786d34f1dcd28eb30ac44d1e87be4c1b73aa3a6a3c822
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400137b2(undefined4 param_1)

{
  _DAT_ram_300654f8 = param_1;
  return;
}


/* NanoCore 1.10, address 0x400137bc.
 * REA evidence: ev_2ad969fb5a72a3a4fb948515d38f092e4f51a6692f05bd677f7a8c30b1ef9854
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400137bc(void)

{
  return DAT_ram_300466e0;
}


/* NanoCore 1.10, address 0x400137c6.
 * REA evidence: ev_d88a01c1631450e6b8a7d6f0bc85d1374514c1a7dd539fd5e11f7821ea30da78
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400137c6(undefined1 param_1,void *param_2,uint param_3)

{
  uint __n;
  int iVar1;
  int iVar2;
  undefined1 uStack_328;
  undefined1 uStack_327;
  undefined1 uStack_326;
  undefined1 uStack_325;
  undefined1 uStack_324;
  undefined1 auStack_323 [779];
  
  iVar1 = FUN_ram_40023d32(_DAT_ram_30067540 != 0,_DAT_ram_30067544 != 0);
  if ((iVar1 != 0xff) && (iVar2 = FUN_ram_40012b4e(), iVar2 != 0)) {
    __n = param_3;
    if (0x300 < param_3) {
      __n = 0x300;
    }
    uStack_328 = 2;
    uStack_326 = 0;
    uStack_325 = (undefined1)__n;
    uStack_324 = (undefined1)(__n >> 8);
    uStack_327 = param_1;
    if ((param_3 != 0) && (param_2 != (void *)0x0)) {
      memcpy(auStack_323,param_2,__n);
    }
    FUN_ram_40013506(iVar1,0x72,&uStack_328,__n + 5);
  }
  return;
}


/* NanoCore 1.10, address 0x4001387c.
 * REA evidence: ev_521cc028a5d3c595acd49259570f80aca6f86ef40db490435dc647779de2af48
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001387c(void)

{
  undefined1 auStack_18 [20];
  
  FUN_ram_40013070(auStack_18);
  FUN_ram_400137c6(0x67,auStack_18,7);
  return;
}


/* NanoCore 1.10, address 0x40013a4c.
 * REA evidence: ev_37c39d53422ec0c527d7a67401caef2aa9613fec24e46550dad23fc86f5a560b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40013a4c(void)

{
  int iVar1;
  
  if ((DAT_ram_3006753c == '\0') &&
     (iVar1 = FUN_ram_4000493c(0x30067510,s_syxtx_ram_40092e5c,1), iVar1 == 0)) {
    DAT_ram_3006753c = '\x01';
  }
  FUN_ram_40023c86();
  if (DAT_ram_30067508 == '\0') {
    _DAT_ram_30065a88 = FUN_ram_40013294;
    _DAT_ram_30065a8c = &LAB_ram_400139c2;
    _DAT_ram_30065a90 = &LAB_ram_40013120;
    _DAT_ram_30065a94 = &LAB_ram_40013898;
    _DAT_ram_30065a9c = &DAT_ram_4001322e;
    _DAT_ram_30065aa4 = &LAB_ram_400131cc;
    _DAT_ram_30065aa8 = &LAB_ram_40012ce6;
    _DAT_ram_30065aac = &LAB_ram_400136c2;
    _DAT_ram_30065ab0 = &LAB_ram_40012ca2;
    _DAT_ram_30065ab4 = &LAB_ram_4001316a;
    nc_register_message_listener(0x20,&PTR_FUN_ram_40012e68_ram_40092f28,0x300675ac);
    FUN_ram_4008d2ac();
    FUN_ram_4008eb1e();
    FUN_ram_40012a84();
    DAT_ram_30067508 = '\x01';
  }
  return;
}


/* NanoCore 1.10, address 0x40013e8e.
 * REA evidence: ev_a7971bbcea556ea8fc9ec93094b921e0da8acf86d741927b8f6973c68ef7ce7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40013e8e(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *__src;
  size_t sVar6;
  uint uVar7;
  size_t __n;
  int iStack_48;
  uint auStack_44 [4];
  
  if (param_1 == 0xf0) {
    _DAT_ram_30067500 = 0;
    _DAT_ram_30067504 = _DAT_ram_300654f8;
  }
  uVar2 = _DAT_ram_30067500;
  if (0x3ff < _DAT_ram_30067500) {
    if (param_1 == 0xf7) {
      _DAT_ram_30067500 = 0;
      return;
    }
    return;
  }
  uVar7 = _DAT_ram_30067500 + 1;
  puVar1 = &DAT_ram_30067100 + _DAT_ram_30067500;
  _DAT_ram_30067500 = uVar7;
  *puVar1 = (char)param_1;
  if (param_1 != 0xf7) {
    return;
  }
  if (uVar7 < 6) {
    _DAT_ram_30067500 = 0;
    return;
  }
  if (uVar7 == 7) {
    if (DAT_ram_30067100 != -0x10) {
      _DAT_ram_30067500 = 0;
      return;
    }
    if (DAT_ram_30067101 != '}') {
      _DAT_ram_30067500 = 0;
      return;
    }
    if ((((DAT_ram_30067102 == 'D') && (DAT_ram_30067103 == 'F')) && (DAT_ram_30067104 == 'U')) &&
       ((DAT_ram_30067105 == '\x01' && (DAT_ram_30067106 == -9)))) {
      _DAT_ram_30067500 = 0;
      iStack_48 = 0;
      auStack_44[0] = 0;
      FUN_ram_4003e1dc();
      FUN_ram_4003e6d0(0);
      FUN_ram_4003e71c(0);
      iVar4 = FUN_ram_40006c7c();
      if ((iVar4 != 1) && (iVar4 = FUN_ram_40006c48(), iVar4 < 1)) {
        return;
      }
      iVar4 = fal_partition_find(&DAT_ram_40092e78);
      if (iVar4 == 0) {
        return;
      }
      iVar5 = dfu_find_updater_image(iVar4,&iStack_48,auStack_44);
      uVar2 = auStack_44[0];
      iVar3 = iStack_48;
      if (iVar5 != 0) {
        return;
      }
      __src = (void *)FUN_ram_40005666(auStack_44[0]);
      if (__src == (void *)0x0) {
        return;
      }
      if ((0x40300000 < uVar2 + (int)__src) && (__src < (void *)0x40340000)) {
LAB_ram_40013fe2:
        FUN_ram_400056c4(__src);
        return;
      }
      for (uVar7 = 0; uVar7 < uVar2; uVar7 = uVar7 + __n) {
        __n = uVar2 - uVar7;
        if (0x1000 < __n) {
          __n = 0x1000;
        }
        iVar5 = 0x30065d00;
        fence();
        custom0();
        do {
          custom0();
          iVar5 = iVar5 + 0x20;
        } while (iVar5 != 0x30066d00);
        fence();
        custom0();
        sVar6 = fal_partition_read(iVar4,iVar3 + uVar7,0x30065d00,__n);
        if (sVar6 != __n) goto LAB_ram_40013fe2;
        memcpy((void *)((int)__src + uVar7),(void *)0x30065d00,__n);
      }
      FUN_ram_4003e1dc();
      FUN_ram_4003e6d0(0);
      FUN_ram_4003e71c(0);
      uVar2 = auStack_44[0];
      FUN_ram_4003dcea(5);
      FUN_ram_40012ba6(s_DFU_JA_pre_irq_off_ram_40092e7c);
      mstatus = mstatus & 0xfffffff7;
      iVar4 = 0x1e8481;
      do {
        if ((_DAT_ram_18710014 & 0x40) != 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_ram_40012ba6(s_DFU_J0_irq_off__drained_ram_40092e94);
      iVar4 = 0;
      do {
        *(undefined1 *)(iVar4 * 4 + 0x20801001) = 0;
        *(undefined1 *)(iVar4 * 4 + 0x20801000) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x60);
      FUN_ram_40012ba6(s_DFU_J0b_clic_cleared_ram_40092eb0);
      _mtvec = 0x40012c03;
      FUN_ram_40012ba6(s_DFU_J1_mtvec_ram_40092ec8);
      memcpy(&SUB_ram_40300100,__src,uVar2);
      FUN_ram_40012ba6(s_DFU_J2_copied_ram_40092ed8);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      FUN_ram_40012ba6(s_DFU_J3_dcache_ram_40092ee8);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      fence.i();
      FUN_ram_40012ba6(s_DFU_J4_entry_words_0x_ram_40092ef8);
      FUN_ram_40012bc4(_SUB_ram_40300100);
      FUN_ram_40012ba6(&DAT_ram_40092f10);
      FUN_ram_40012bc4(_DAT_ram_40300104);
      FUN_ram_40012ba6(s_descriptor_<type:0x_02x,index:0x_ram_400929f4 + 0x30);
      (*(code *)&SUB_ram_40300100)(0x44,0);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    if (DAT_ram_30067100 != -0x10) {
      _DAT_ram_30067500 = 0;
      return;
    }
    if (DAT_ram_30067101 != '}') {
      _DAT_ram_30067500 = 0;
      return;
    }
  }
  if (((DAT_ram_30067102 == 'N') && (DAT_ram_30067103 == 'C')) && (DAT_ram_30067104 == 'p')) {
    auStack_44[0] = 0;
    iVar4 = nc_sysex_unpack_7bit(&DAT_ram_30067105,uVar2 - 5,0x300675c0,0x300,auStack_44);
    if (iVar4 == 0) {
      nc_dispatch_request(0x70,0x300675c0,auStack_44[0],_DAT_ram_30067504);
    }
  }
  _DAT_ram_30067500 = 0;
  return;
}


/* NanoCore 1.10, address 0x40013eea.
 * REA evidence: ev_7f03e06519d8270f7c47cdad9105531ac292bb04d1da5af758d1a67ef8247c0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40013eea(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     int param_5,char *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *__src;
  size_t sVar6;
  size_t __n;
  int iStack_48;
  uint auStack_44 [4];
  
  if (param_5 == 7) {
    if (*param_6 != -0x10) {
      _DAT_ram_30067500 = 0;
      return;
    }
    if (param_6[1] != '}') {
      _DAT_ram_30067500 = 0;
      return;
    }
    if ((((param_6[2] == 'D') && (param_6[3] == 'F')) && (param_6[4] == 'U')) &&
       ((param_6[5] == '\x01' && (param_6[6] == -9)))) {
      _DAT_ram_30067500 = 0;
      iStack_48 = 0;
      auStack_44[0] = 0;
      FUN_ram_4003e1dc();
      FUN_ram_4003e6d0(0);
      FUN_ram_4003e71c(0);
      iVar4 = FUN_ram_40006c7c();
      if ((iVar4 != 1) && (iVar4 = FUN_ram_40006c48(), iVar4 < 1)) {
        return;
      }
      iVar4 = fal_partition_find(&DAT_ram_40092e78);
      if (iVar4 == 0) {
        return;
      }
      iVar5 = dfu_find_updater_image(iVar4,&iStack_48,auStack_44);
      uVar2 = auStack_44[0];
      iVar1 = iStack_48;
      if (iVar5 != 0) {
        return;
      }
      __src = (void *)FUN_ram_40005666(auStack_44[0]);
      if (__src == (void *)0x0) {
        return;
      }
      if ((0x40300000 < uVar2 + (int)__src) && (__src < (void *)0x40340000)) {
LAB_ram_40013fe2:
        FUN_ram_400056c4(__src);
        return;
      }
      for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + __n) {
        __n = uVar2 - uVar3;
        if (0x1000 < __n) {
          __n = 0x1000;
        }
        iVar5 = 0x30065d00;
        fence();
        custom0();
        do {
          custom0();
          iVar5 = iVar5 + 0x20;
        } while (iVar5 != 0x30066d00);
        fence();
        custom0();
        sVar6 = fal_partition_read(iVar4,iVar1 + uVar3,0x30065d00,__n);
        if (sVar6 != __n) goto LAB_ram_40013fe2;
        memcpy((void *)((int)__src + uVar3),(void *)0x30065d00,__n);
      }
      FUN_ram_4003e1dc();
      FUN_ram_4003e6d0(0);
      FUN_ram_4003e71c(0);
      uVar2 = auStack_44[0];
      FUN_ram_4003dcea(5);
      FUN_ram_40012ba6(s_DFU_JA_pre_irq_off_ram_40092e7c);
      mstatus = mstatus & 0xfffffff7;
      iVar4 = 0x1e8481;
      do {
        if ((_DAT_ram_18710014 & 0x40) != 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_ram_40012ba6(s_DFU_J0_irq_off__drained_ram_40092e94);
      iVar4 = 0;
      do {
        *(undefined1 *)(iVar4 * 4 + 0x20801001) = 0;
        *(undefined1 *)(iVar4 * 4 + 0x20801000) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x60);
      FUN_ram_40012ba6(s_DFU_J0b_clic_cleared_ram_40092eb0);
      _mtvec = 0x40012c03;
      FUN_ram_40012ba6(s_DFU_J1_mtvec_ram_40092ec8);
      memcpy(&SUB_ram_40300100,__src,uVar2);
      FUN_ram_40012ba6(s_DFU_J2_copied_ram_40092ed8);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      FUN_ram_40012ba6(s_DFU_J3_dcache_ram_40092ee8);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      fence.i();
      FUN_ram_40012ba6(s_DFU_J4_entry_words_0x_ram_40092ef8);
      FUN_ram_40012bc4(_SUB_ram_40300100);
      FUN_ram_40012ba6(&DAT_ram_40092f10);
      FUN_ram_40012bc4(_DAT_ram_40300104);
      FUN_ram_40012ba6(s_descriptor_<type:0x_02x,index:0x_ram_400929f4 + 0x30);
      (*(code *)&SUB_ram_40300100)(0x44,0);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    if (*param_6 != -0x10) {
      _DAT_ram_30067500 = 0;
      return;
    }
    if (param_6[1] != '}') {
      _DAT_ram_30067500 = 0;
      return;
    }
  }
  if (((param_6[2] == 'N') && (param_6[3] == 'C')) && (param_6[4] == 'p')) {
    auStack_44[0] = 0;
    iVar4 = nc_sysex_unpack_7bit(&DAT_ram_30067105,param_2 + -5,0x300675c0,0x300,auStack_44);
    if (iVar4 == 0) {
      nc_dispatch_request(0x70,0x300675c0,auStack_44[0],_DAT_ram_30067504);
    }
  }
  _DAT_ram_30067500 = 0;
  return;
}


