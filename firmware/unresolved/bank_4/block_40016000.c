/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40016000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40016060.
 * REA evidence: ev_a57609fd12cd8c997b600ab4cc9619c0d8ffe4c8b632981da4fe4ea133588990
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016060(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar1 * 4);
    if (iVar2 != 0) {
      if (param_2 == 0) {
        FUN_ram_40043064(iVar2,1);
      }
      else {
        FUN_ram_40042b3a();
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return;
}


/* NanoCore 1.10, address 0x4001609e.
 * REA evidence: ev_328ac7b0a458d885ff856824a4e5089181e3576430713970546e8cbd0e3fde9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001609e(char *param_1)

{
  int iVar1;
  
  _DAT_ram_30068fcc = 0x20202020;
  _DAT_ram_30068fd0 = 0x20202020;
  if (param_1 != (char *)0x0) {
    for (; *param_1 == ' '; param_1 = param_1 + 1) {
    }
    if (*param_1 != '\0') goto LAB_ram_400160ce;
  }
  param_1 = s_preset_ram_40093168;
LAB_ram_400160ce:
  iVar1 = 0;
  do {
    if (param_1[iVar1] == '\0') {
      DAT_ram_30068fd4 = 0;
      return;
    }
    (&DAT_ram_30068fcc)[iVar1] = param_1[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  DAT_ram_30068fd4 = 0;
  return;
}


/* NanoCore 1.10, address 0x400160ec.
 * REA evidence: ev_401e43457f9b109136fea4c96eeef3ac9f3f963f795ea0f0274b909b68f7f611
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_400160ec(void)

{
  int iVar1;
  undefined1 *puVar2;
  ushort uVar3;
  uint __n;
  int iVar4;
  void *__dest;
  int iVar5;
  void *__dest_00;
  void *__src;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [16];
  undefined1 uStack_6c;
  char cStack_6b;
  ushort uStack_6a;
  ushort uStack_68;
  ushort uStack_66;
  ushort uStack_64;
  undefined2 uStack_62;
  undefined1 *puStack_60;
  
  if (DAT_ram_30068f6c != '\0') {
    return DAT_ram_30068f6c;
  }
  if (DAT_ram_30069024 == '\0') {
    return '\0';
  }
  iVar4 = FUN_ram_4004e68a(auStack_7c,&DAT_ram_30069024,0);
  if (iVar4 != 1) {
    return '\0';
  }
  if (puStack_60 == (undefined1 *)0x0) {
    uVar8 = (uint)uStack_66;
    __n = (uint)uStack_64;
    iVar11 = __n * uVar8;
    iVar4 = iVar11;
    if (cStack_6b == '\x14') {
      iVar4 = iVar11 + (uStack_64 >> 1) * uVar8;
    }
    __dest = (void *)FUN_ram_4003e050(1,iVar4);
    if (__dest != (void *)0x0) {
      FUN_ram_4000505c(__dest,0,iVar4);
      iStack_94 = uStack_68 - 1;
      iStack_90 = uVar8 - 1;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_8c = 0xe0000001;
      iStack_88 = -0x1fffffff;
      uStack_84 = 0xe0000001;
      uStack_80 = 0xe0000001;
      while (iVar5 = FUN_ram_4004e744(auStack_7c,&uStack_9c,&uStack_8c), puVar2 = puStack_60,
            iVar1 = iStack_88, iVar5 == 1) {
        if (puStack_60 == (undefined1 *)0x0) goto LAB_ram_4001626a;
        __dest_00 = (void *)((int)__dest + __n * iStack_88);
        __src = *(void **)(puStack_60 + 0x10);
        uVar8 = __n;
        if (cStack_6b == '\x14') {
          memcpy(__dest_00,__src,__n);
          __src = (void *)(*(int *)(puVar2 + 0x10) + __n);
          __dest_00 = (void *)(iVar11 + iVar1 * (uint)(uStack_64 >> 1) + (int)__dest);
          uVar8 = (uint)(uStack_64 >> 1);
        }
        memcpy(__dest_00,__src,uVar8);
      }
      uVar6 = uStack_6a & 0xfff7;
      uVar13 = uStack_6c;
      uVar12 = uStack_62;
      cVar9 = cStack_6b;
      uVar10 = uStack_68;
      uVar7 = uStack_66;
      uVar3 = uStack_64;
      if (iVar5 == 0) goto LAB_ram_40016198;
LAB_ram_4001626a:
      FUN_ram_4003e08a(1,__dest);
    }
  }
  else {
    __dest = (void *)FUN_ram_4003e050(1,*(undefined4 *)(puStack_60 + 0xc));
    if (__dest != (void *)0x0) {
      memcpy(__dest,*(void **)(puStack_60 + 0x10),*(size_t *)(puStack_60 + 0xc));
      uVar6 = *(ushort *)(puStack_60 + 2);
      iVar4 = *(int *)(puStack_60 + 0xc);
      uVar13 = *puStack_60;
      uVar12 = *(undefined2 *)(puStack_60 + 10);
      cVar9 = puStack_60[1];
      uVar10 = *(ushort *)(puStack_60 + 4);
      uVar7 = *(ushort *)(puStack_60 + 6);
      uVar3 = *(ushort *)(puStack_60 + 8);
LAB_ram_40016198:
      FUN_ram_4004e758(auStack_7c);
      if (_DAT_ram_30068f50 != (void *)0x0) {
        FUN_ram_4003e08a(1);
      }
      _DAT_ram_30068f50 = __dest;
      DAT_ram_30068f54 = uVar13;
      DAT_ram_30068f55 = cVar9;
      _DAT_ram_30068f56 = uVar6 & 0xffe7;
      _DAT_ram_30068f58 = uVar10;
      _DAT_ram_30068f5a = uVar7;
      _DAT_ram_30068f5c = uVar3;
      _DAT_ram_30068f5e = uVar12;
      _DAT_ram_30068f60 = iVar4;
      _DAT_ram_30068f64 = __dest;
      _DAT_ram_30068f68 = 0;
      DAT_ram_30068f6c = 1;
      return '\x01';
    }
  }
  FUN_ram_4004e758(auStack_7c);
  return '\0';
}


/* NanoCore 1.10, address 0x400162aa.
 * REA evidence: ev_b0d4a7766b9beaf9559455117476b147eacd19f49709f0e6daa7c3acdcfaae5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400162aa(void)

{
  int iVar1;
  
  if ((_DAT_ram_30069020 == 0) || (iVar1 = FUN_ram_400160ec(), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    FUN_ram_40056474(_DAT_ram_30069020,&DAT_ram_30068f54);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400162e4.
 * REA evidence: ev_ae489d3321048a185b6ae6ab70c494f7efe2e1c31042fb624cc32382df58366f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400162e4(void)

{
  int iVar1;
  
  if ((_DAT_ram_30069020 != 0) && (iVar1 = FUN_ram_400162aa(), iVar1 != 0)) {
    FUN_ram_40042b3a(_DAT_ram_30069020,1);
    FUN_ram_40015c8e(_DAT_ram_30069020);
    if (_DAT_ram_3006906c != 0) {
      FUN_ram_40043064(_DAT_ram_3006906c,1);
    }
    if (_DAT_ram_30069064 != 0) {
      FUN_ram_4004b6a8();
      _DAT_ram_30069064 = 0;
    }
    _DAT_ram_30069064 = FUN_ram_4004b642(&LAB_ram_40017b32,0x5dc,0);
    if (_DAT_ram_30069064 != 0) {
      FUN_ram_4004b8ca(_DAT_ram_30069064,1);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4001635c.
 * REA evidence: ev_f0cef5906aa4c706fc2b9f409349b9fd16d7ee1cfc407fedca37e3641d284db0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001635c(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar2 = _DAT_ram_30069110;
  if ((_DAT_ram_30069110 == (undefined **)0x0) &&
     (ppuVar2 = _DAT_ram_30068f80, _DAT_ram_30068f80 == (undefined **)0x0)) {
    ppuVar2 = &PTR_LAB_ram_4001280e_ram_40092d7c;
  }
  if (_DAT_ram_30069114 != 0) {
    puVar3 = ppuVar2[3];
    if ((int)puVar3 < 1) {
      puVar3 = (undefined *)0x2e;
    }
    FUN_ram_40044038(_DAT_ram_30069114,0x96,puVar3);
    FUN_ram_40047a74(_DAT_ram_30069114,ppuVar2,0);
    iVar1 = _DAT_ram_30069114;
    FUN_ram_400478f0(_DAT_ram_30069114,0x100,0);
    FUN_ram_40047900(iVar1,0x100,0);
    FUN_ram_400478d0(_DAT_ram_30069114,0,0);
    FUN_ram_400478e0(_DAT_ram_30069114,0,0);
    FUN_ram_40015e52(_DAT_ram_30069114);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400163ee.
 * REA evidence: ev_d0e634c61210eca54abca0073cfd7012a1338839e06118a546b6aaae6ecb4343
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400163ee(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 auStack_14 [4];
  
  iVar1 = _DAT_ram_3006911c;
  if ((_DAT_ram_3006911c != 0) && (_DAT_ram_30069114 != 0)) {
    iVar2 = FUN_ram_40015ab6();
    if (iVar2 != 0) {
      FUN_ram_40043064(iVar1,1);
      return;
    }
    FUN_ram_40027d02(0x30068c8c,&cStack_18);
    if (cStack_18 == '\0') {
      FUN_ram_40043064(_DAT_ram_3006911c,1);
      FUN_ram_40015c14();
    }
    else {
      FUN_ram_40027dba(uStack_17,auStack_14,4);
      FUN_ram_4005727c(_DAT_ram_30069114,auStack_14);
      FUN_ram_4001635c();
      iVar1 = _DAT_ram_3006911c;
      uVar3 = FUN_ram_40027de2(uStack_16,0xd6);
      FUN_ram_40047986(iVar1,uVar3,0);
      iVar1 = _DAT_ram_3006911c;
      uVar3 = FUN_ram_40027de2(uStack_16,0x2a);
      FUN_ram_400479b4(iVar1,uVar3,0);
      iVar1 = _DAT_ram_3006911c;
      uVar3 = FUN_ram_40027de2(uStack_16,0x4e);
      FUN_ram_40047a24(iVar1,uVar3,0);
      FUN_ram_40047a64(_DAT_ram_30069114,uStack_16,0);
      FUN_ram_40042b3a(_DAT_ram_3006911c,1);
      FUN_ram_40015c8e(_DAT_ram_3006911c);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400164de.
 * REA evidence: ev_83a5efe3634bc4a4b6b70ab8a2de2d473955a06f8e0ad9530f04a44482566967
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400164de(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400055ea(param_1,param_2,s_U__icons__s_bin_ram_40093170,param_3);
  return;
}


/* NanoCore 1.10, address 0x400164ec.
 * REA evidence: ev_7065bb12b58a96296704cd5629c966695ad815731d1e504755b36572364fe08e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400164ec(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_400211d6();
  return uVar1 & 0xffffff;
}


/* NanoCore 1.10, address 0x40016512.
 * REA evidence: ev_851a7016c97dbaaca46be973ffe209ceb360c2d33f49847feade4b46ca6768f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40016512(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_400211e0();
  return uVar1 & 0xffffff;
}


/* NanoCore 1.10, address 0x40016538.
 * REA evidence: ev_18eb5516591a7ff000caa5c37fcb73e25aff80c83f2b6bb8645fec1117445bd3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40016538(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_ram_400210dc();
  }
  else {
    uVar1 = FUN_ram_400210e6();
  }
  return uVar1 & 0xffffff;
}


/* NanoCore 1.10, address 0x40016566.
 * REA evidence: ev_57618ecdfb1ab7c9188aa739de649201f6d95af2d9636ab2e6147f35466ba3f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016566(void)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  if ((DAT_ram_30068f7c == '\0') && (DAT_ram_30068ffe == '\0')) {
    if (DAT_ram_300466e7 != '\0') {
      if (_DAT_ram_30069068 == 3) {
        uVar1 = 0;
        goto LAB_ram_40016580;
      }
    }
    uVar1 = FUN_ram_400164ec();
  }
  else {
    uVar1 = 1;
LAB_ram_40016580:
    uVar1 = FUN_ram_40016538(uVar1);
  }
  uStack_14 = CONCAT22(CONCAT11(uStack_14._3_1_,(char)((uint)uVar1 >> 0x10)),(short)uVar1);
  if (_DAT_ram_30068fc8 != 0) {
    FUN_ram_40047a44(_DAT_ram_30068fc8,uStack_14,0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400165d6.
 * REA evidence: ev_122c65f8c9eace5cd7c86bb3a03edeb84afce595baff3040fc2d21b5a3a1ec21
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400165d6(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = 0;
  do {
    iVar2 = FUN_ram_40005208((&PTR_DAT_ram_40093228_ram_40093284)[iVar1],param_1,0x10);
    if (iVar2 == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return -1;
}


/* NanoCore 1.10, address 0x4001661e.
 * REA evidence: ev_b582f7eea64f9dc773dd66044a50f3ef8ceb2f453b1ff1f9a90ee5ebe4eed643
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001661e(int param_1)

{
  undefined4 uVar1;
  
  if ((&DAT_ram_400932fc)[param_1] == '\x01') {
    uVar1 = FUN_ram_400165d6((&DAT_ram_400932b4)[param_1]);
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40016644.
 * REA evidence: ev_e268d3ce28ea6e89844d8209374f8d096deba003b90afbfc8ab979b77ccc24e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016644(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 3) {
    FUN_ram_40015efc();
    return;
  }
  if (param_2 == 4) {
    FUN_ram_40015eaa();
    return;
  }
  if (param_2 == 5) {
    uVar5 = 0xe;
    iVar2 = 0xe2;
  }
  else {
    if ((&DAT_ram_400932fc)[param_2] == '\x01') {
      uVar1 = FUN_ram_4001661e(param_2);
      uVar4 = 0xffffffff;
      if (uVar1 < 8) {
        uVar3 = 0;
        do {
          uVar4 = uVar3;
          if (uVar1 == *(uint *)(&DAT_ram_300687d8 + uVar3 * 4)) break;
          uVar3 = uVar3 + 1;
          uVar4 = uVar1;
        } while (uVar3 != 8);
      }
      FUN_ram_40015e6c(param_1,uVar4);
      return;
    }
    if ((byte)(&DAT_ram_400932ec)[param_2] != 0) {
      FUN_ram_40015bb0(param_1,(uint)(byte)(&DAT_ram_400932a4)[param_2],
                       (byte)(&DAT_ram_400932ec)[param_2] - 1);
      return;
    }
    uVar5 = 0x46;
    iVar2 = (uint)(byte)(&DAT_ram_400932a4)[param_2] * 0x35 + 0x20;
  }
  FUN_ram_40043faa(param_1,iVar2,uVar5);
  FUN_ram_40044038(param_1,0x26,0x26);
  return;
}


/* NanoCore 1.10, address 0x4001670a.
 * REA evidence: ev_77e2f88f7d3e70cbedacc30b374060d8936451a877af53aeeb29f48c19d3fcef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001670a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [24];
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    FUN_ram_40043064(param_1,1);
    return;
  }
  if (((DAT_ram_30069024 != '\0') && (iVar1 = FUN_ram_4000522c(param_2), iVar1 == 0)) &&
     (iVar1 = FUN_ram_400160ec(), iVar1 != 0)) {
    FUN_ram_40056474(param_1,&DAT_ram_30068f54);
    FUN_ram_40042b3a(param_1,1);
    return;
  }
  iVar1 = FUN_ram_4004e678(param_2,auStack_2c);
  if (iVar1 == 1) {
    FUN_ram_40056474(param_1,param_2);
    FUN_ram_40042b3a(param_1,1);
  }
  else {
    iVar1 = FUN_ram_4005604e(param_1);
    if (((iVar1 == 0) || (iVar2 = FUN_ram_4004d31e(), iVar2 != 1)) ||
       (iVar1 = FUN_ram_4000522c(iVar1,param_2), iVar1 != 0)) {
      FUN_ram_40043064(param_1,1);
    }
    else {
      FUN_ram_40042b3a(param_1,1);
      FUN_ram_40044572(param_1);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400167c6.
 * REA evidence: ev_6aebe78c5050871ae0157ed5fa831184fd499854c26b5adf8ffde20a1d7fc433
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400167c6(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0xe)) {
    FUN_ram_4001670a(param_1,param_2 * 0x40 + 0x30068840);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400167e0.
 * REA evidence: ev_eb47f20fa437056d13cb2cf0a8249b32b984f1c484fc7b8f5b42dd52e25be56f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400167e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = 0;
  do {
    if (1 < iVar1 - 3U) {
      uVar2 = FUN_ram_4005600c(param_1);
      FUN_ram_40016644(uVar2,iVar1);
      FUN_ram_400167c6(uVar2,iVar1);
      FUN_ram_400565de(uVar2,9);
      *(undefined4 *)(&DAT_ram_30068c0c + iVar1 * 4) = uVar2;
      uVar3 = FUN_ram_4001661e(iVar1);
      if (uVar3 < 8) {
        *(undefined4 *)(uVar3 * 4 + 0x300687b8) = uVar2;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  FUN_ram_40015d86();
  FUN_ram_40044572(param_1);
  return;
}


/* NanoCore 1.10, address 0x4001686a.
 * REA evidence: ev_9f71c299d1ba59b00c837169f3d64fa543995cfa59cc8f7deb370f67aff7c274
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001686a(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (-1 < (int)DAT_ram_300466e8)) {
    uVar1 = DAT_ram_300466e8 & 0xff;
    if (8 < (DAT_ram_300466e8 & 0xff)) {
      uVar1 = 8;
    }
    if (param_2 < uVar1) {
      uVar1 = param_2 & 0xff;
    }
    FUN_ram_4001670a(param_1,&DAT_ram_30068ca8 + uVar1 * 0x40);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400168a6.
 * REA evidence: ev_3bc47b5930feef8009bdaa9a3e2ebb2f07205efb459274f77cff961e4b79bf65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001699a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400168a6(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  iVar3 = FUN_ram_40055cfa();
  if (_DAT_ram_30068720 == 0) {
    return;
  }
  iVar4 = FUN_ram_4000e884();
  iVar5 = FUN_ram_4003e68c();
  if (iVar5 == 0) {
    if (DAT_ram_300687a4 != '\0') {
      DAT_ram_300687a4 = '\0';
      DAT_ram_300686d1 = 0;
      _DAT_ram_300686d4 = iVar3;
    }
    if (iVar4 < 1) {
      DAT_ram_300686d8 = '\0';
      DAT_ram_300466e4 = '\x01';
      bVar2 = 1;
    }
    else {
      if (DAT_ram_300466e5 < 3) {
        if (DAT_ram_300466e5 == 0) {
          iVar5 = 0xe74;
          goto LAB_ram_400169f2;
        }
        if (DAT_ram_300466e5 == 1) {
          if (iVar4 < 0xe42) {
            DAT_ram_300466e5 = 0;
          }
          else if (0xf63 < iVar4) {
            DAT_ram_300466e5 = 2;
          }
        }
        else {
          DAT_ram_300466e5 = (0xf31 < iVar4) + 1;
        }
      }
      else {
        DAT_ram_300466e5 = 2;
        if (iVar4 < 0xf64) {
          iVar5 = 0xe42;
LAB_ram_400169f2:
          DAT_ram_300466e5 = iVar5 <= iVar4;
        }
      }
      bVar2 = DAT_ram_300466e5;
      if (DAT_ram_300686d8 == '\0') {
        if (iVar4 < 0xddf) {
          DAT_ram_300686d8 = '\x01';
LAB_ram_40016a14:
          DAT_ram_300466e4 = '\x01';
          _DAT_ram_300686dc = iVar3;
        }
      }
      else if (0xe0f < iVar4) {
        DAT_ram_300686d8 = '\0';
        goto LAB_ram_40016a14;
      }
    }
    if (DAT_ram_300686d8 == '\0') goto LAB_ram_4001694c;
    bVar7 = false;
    cVar1 = DAT_ram_300466e4;
    for (iVar4 = _DAT_ram_300686dc; 499 < (uint)(iVar3 - iVar4); iVar4 = iVar4 + 500) {
      cVar1 = cVar1 == '\0';
      bVar7 = true;
    }
    if (bVar7) {
      DAT_ram_300466e4 = cVar1;
      _DAT_ram_300686dc = iVar4;
    }
    bVar2 = 0;
    bVar7 = DAT_ram_300466e4 == '\0';
LAB_ram_40016a60:
    pcVar6 = s_battery_low_ram_40093180;
    puVar9 = &DAT_ram_30068724;
  }
  else {
    if (DAT_ram_300687a4 == '\0') {
      DAT_ram_300687a4 = '\x01';
      DAT_ram_300686d1 = 0;
      DAT_ram_300466e4 = '\x01';
      DAT_ram_300686d8 = '\0';
      _DAT_ram_300686d4 = iVar3;
      _DAT_ram_300686dc = iVar3;
    }
    if (iVar4 < 0xfb9) {
      uVar8 = (uint)DAT_ram_300686d1;
      bVar7 = false;
      for (iVar4 = _DAT_ram_300686d4; 999 < (uint)(iVar3 - iVar4); iVar4 = iVar4 + 1000) {
        uVar8 = (uVar8 + 1) % 3;
        bVar7 = true;
      }
      bVar2 = DAT_ram_300686d1;
      if (bVar7) {
        DAT_ram_300686d1 = (byte)uVar8;
        _DAT_ram_300686d4 = iVar4;
        bVar2 = DAT_ram_300686d1;
      }
LAB_ram_4001694c:
      if (bVar2 == 0) {
        bVar7 = false;
        goto LAB_ram_40016a60;
      }
      bVar7 = false;
      if (bVar2 != 2) {
        pcVar6 = s_battery_mid_ram_4009319c;
        puVar9 = &DAT_ram_30068764;
        goto LAB_ram_40016968;
      }
    }
    else {
      bVar2 = 2;
    }
    bVar7 = false;
    pcVar6 = s_battery_full_ram_4009318c;
    puVar9 = &DAT_ram_300686e0;
  }
LAB_ram_40016968:
  iVar3 = FUN_ram_40015fa8(pcVar6);
  if ((iVar3 == 0) || (bVar7)) {
    FUN_ram_40043064(_DAT_ram_30068720,1);
    DAT_ram_300466e6 = 0xff;
  }
  else if ((DAT_ram_300466e6 != bVar2) ||
          (iVar3 = FUN_ram_40042c20(_DAT_ram_30068720,1), iVar3 != 0)) {
    DAT_ram_300466e6 = bVar2;
    FUN_ram_4001670a(_DAT_ram_30068720,puVar9);
    FUN_ram_40015ed4(_DAT_ram_30068720);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40016b3c.
 * REA evidence: ev_71d48aa84c305a4af454f260b2a396bfc475b4cdd583ea0b33e01ba1278d359a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016b3c(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  byte bStack_18;
  byte bStack_16;
  
  if ((DAT_ram_300466e7 == '\0') || (DAT_ram_300686d0 == '\0')) {
    return;
  }
  if (_DAT_ram_30068bc0 != 0) {
    uVar2 = FUN_ram_40004362(0x96);
    iVar3 = FUN_ram_400042fa();
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    if ((uint)(iVar3 - _DAT_ram_30068bc0) < uVar2) {
      return;
    }
  }
  if (((-1 < DAT_ram_300466e8) && (_DAT_ram_30068c98 != 0)) && (_DAT_ram_30068ca0 != 0)) {
    memset(auStack_38,0,0x28);
    FUN_ram_4000d93c(auStack_38);
    if (8 < bStack_18) {
      bStack_18 = 8;
    }
    bVar1 = bStack_16;
    if (8 < bStack_16) {
      bVar1 = 8;
    }
    if (DAT_ram_30068c9c != bStack_18) {
      DAT_ram_30068c9c = bStack_18;
      FUN_ram_4001686a(_DAT_ram_30068c98);
    }
    if (DAT_ram_30068ca4 != bVar1) {
      DAT_ram_30068ca4 = bVar1;
      FUN_ram_4001686a(_DAT_ram_30068ca0,bVar1);
    }
  }
  FUN_ram_40015e02();
  FUN_ram_400168a6();
  FUN_ram_40015d86();
  return;
}


/* NanoCore 1.10, address 0x40016c3c.
 * REA evidence: ev_29f4556e2ff33b1676ac93777d05aae39bb3a9724fca30b628a4876fcc20565b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016c3c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (DAT_ram_300686d0 != '\0')) {
    uVar1 = ~DAT_ram_300466e8 >> 0x1f;
  }
  if (_DAT_ram_30068c98 != 0) {
    if (uVar1 == 0) {
      FUN_ram_40043064(_DAT_ram_30068c98,1);
    }
    else {
      FUN_ram_40042b3a();
    }
  }
  if (_DAT_ram_30068ca0 == 0) {
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    if (uVar1 == 0) {
      FUN_ram_40043064(_DAT_ram_30068ca0,1);
      return;
    }
    FUN_ram_40042b3a();
  }
  DAT_ram_30068c9c = 0xff;
  DAT_ram_30068ca4 = 0xff;
  FUN_ram_40016b3c(0);
  return;
}


/* NanoCore 1.10, address 0x40016cba.
 * REA evidence: ev_67b2b92729941d9bd1efa50567fdc9529b320f634eba58867f9bd993a7addd97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016cba(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar1 = FUN_ram_40015fa8(&DAT_ram_400931a8);
  iVar2 = FUN_ram_40015fa8(s_master_knob_ram_400931b0);
  iVar3 = FUN_ram_40015fa8(s_preset_knob_ram_400931bc);
  if ((iVar2 == 0) && (iVar1 == 0)) {
    iVar1 = iVar3;
    if (_DAT_ram_30068c48 != 0) {
      FUN_ram_40043064(_DAT_ram_30068c48,1);
    }
joined_r0x40016d64:
    if (iVar1 == 0) {
      if (_DAT_ram_30068f84 != 0) {
        FUN_ram_40043064(_DAT_ram_30068f84,1);
      }
      goto LAB_ram_40016d48;
    }
  }
  else {
    puVar4 = &DAT_ram_30068c4c;
    if (iVar2 == 0) {
      puVar4 = &DAT_ram_30068800;
    }
    FUN_ram_4001670a(_DAT_ram_30068c48,puVar4);
    FUN_ram_40015e80(_DAT_ram_30068c48);
    if (iVar3 == 0) goto joined_r0x40016d64;
  }
  puVar4 = &DAT_ram_30068f88;
  if (iVar3 == 0) {
    puVar4 = &DAT_ram_30068800;
  }
  FUN_ram_4001670a(_DAT_ram_30068f84,puVar4);
  FUN_ram_40015eaa(_DAT_ram_30068f84);
LAB_ram_40016d48:
  FUN_ram_400168a6();
  return;
}


/* NanoCore 1.10, address 0x40016d7a.
 * REA evidence: ev_56a730c15ed1dba32fe6838e2cf3a17184bb68b09c07323f85a9efb2048a04b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016d7a(int param_1)

{
  int iVar1;
  char cVar2;
  int local_2c [6];
  
  local_2c[0] = _DAT_ram_30068c48;
  local_2c[1] = _DAT_ram_30068f84;
  local_2c[2] = _DAT_ram_30068720;
  cVar2 = '\0';
  if (param_1 != 0) {
    cVar2 = DAT_ram_300686d0;
  }
  iVar1 = 0;
  do {
    if (local_2c[iVar1] != 0) {
      if (cVar2 == '\0') {
        FUN_ram_40043064(local_2c[iVar1],1);
      }
      else {
        FUN_ram_40042b3a();
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  if (cVar2 != '\0') {
    FUN_ram_40016cba();
    FUN_ram_40015e02();
    FUN_ram_40015c58();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40016dfa.
 * REA evidence: ev_e798b0c151745e7c45f9d4f60490af8a463aa6fea2053fe96447a2ee640c4d2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40016dfa(void)

{
  undefined3 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  uVar1 = FUN_ram_4001425e();
  iVar2 = FUN_ram_4002c5cc(0);
  iVar3 = FUN_ram_4002c5ea(0,&uStack_14);
  if (iVar3 != 0) {
    uVar1 = CONCAT12(uStack_12,uStack_14);
  }
  if (_DAT_ram_30068c44 != 0) {
    FUN_ram_40047968(_DAT_ram_30068c44,uVar1,0);
    FUN_ram_40047986(_DAT_ram_30068c44,0xff,0);
  }
  if (_DAT_ram_30068bc4 != 0) {
    FUN_ram_40047968(_DAT_ram_30068bc4,uVar1,0);
    FUN_ram_40047986(_DAT_ram_30068bc4,0xff,0);
  }
  if (_DAT_ram_30068bc8 != 0) {
    if (iVar2 == 0) {
      FUN_ram_40043064(_DAT_ram_30068bc8,1);
    }
    else {
      FUN_ram_4001670a(_DAT_ram_30068bc8,&DAT_ram_30068bcc);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40016e9e.
 * REA evidence: ev_f4ccee5d60abfad9aec92dc156a76c0609bfcf468a39678b432a5c5d2e521978
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016e9e(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_34;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar3 = FUN_ram_400440f2(param_2);
    uVar4 = FUN_ram_400440fe(param_2);
    uVar2 = FUN_ram_400164ec();
    FUN_ram_40047a44(param_2,uVar2,0);
    FUN_ram_40047a84(param_2,param_4,0);
    iVar1 = 0;
    puVar6 = &DAT_ram_4009330c;
    do {
      uVar5 = FUN_ram_40056c3a(param_1);
      *(undefined4 *)(param_3 + iVar1 * 4) = uVar5;
      FUN_ram_400572fa(uVar5,1);
      uVar7 = *(undefined4 *)(param_3 + iVar1 * 4);
      uVar5 = FUN_ram_40016512();
      uStack_34 = CONCAT31(CONCAT12(uStack_34._3_1_,(short)((uint)uVar5 >> 8)),(char)uVar5);
      FUN_ram_40047a44(uVar7,uStack_34,0);
      FUN_ram_40047a84(*(undefined4 *)(param_3 + iVar1 * 4),param_4,0);
      FUN_ram_40044038(*(undefined4 *)(param_3 + iVar1 * 4),uVar3,uVar4);
      FUN_ram_40045054(*(undefined4 *)(param_3 + iVar1 * 4),param_2,9,*puVar6,puVar6[1]);
      FUN_ram_40042b3a(*(undefined4 *)(param_3 + iVar1 * 4),2);
      uVar7 = *(undefined4 *)(param_3 + iVar1 * 4);
      uVar5 = FUN_ram_40047b3a(param_2);
      iVar1 = iVar1 + 1;
      FUN_ram_40047d7c(uVar7,uVar5);
      puVar6 = puVar6 + 2;
    } while (iVar1 != 8);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40016fb2.
 * REA evidence: ev_836dada45a6eff5c8c9a1d60303c5e79502c7fd3398204a0e47d6f77aaa5c1e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40016fb2(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = FUN_ram_400440f2();
    uVar3 = FUN_ram_400440fe(param_1);
    puVar5 = &DAT_ram_4009330c;
    iVar1 = 0;
    do {
      iVar4 = *(int *)(param_2 + iVar1 * 4);
      if (iVar4 != 0) {
        FUN_ram_40044038(iVar4,uVar2,uVar3);
        FUN_ram_40045054(*(undefined4 *)(param_2 + iVar1 * 4),param_1,9,*puVar5,puVar5[1]);
      }
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar1 != 8);
    return;
  }
  return;
}


