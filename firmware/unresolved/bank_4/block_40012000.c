/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40012000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400120b8.
 * REA evidence: ev_997c55c6d7fca8b6bb7a533073709e8ccaeb0f05993c3b836145ba23fa5d8ffa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400120b8(void)

{
  FUN_ram_4003ec7c(0x22);
  FUN_ram_400379b8(4);
  FUN_ram_400379b8(2);
  FUN_ram_40036a22(0x14);
  FUN_ram_40036a22(0x12);
  return;
}


/* NanoCore 1.10, address 0x400120e0.
 * REA evidence: ev_f62f0eefcf7624d322b3df2f3b911af5b68013f6b873ff341be281c5df509cd4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400120e0(void)

{
  uint uVar1;
  
  FUN_ram_4001260c();
  FUN_ram_400420dc();
  FUN_ram_40055d36(FUN_ram_40004388);
  FUN_ram_40012346();
  FUN_ram_4001260e();
  do {
    uVar1 = FUN_ram_4004b6d4();
    FUN_ram_400125ce();
    if (uVar1 < 8) {
      uVar1 = 8;
    }
    if (0x10 < uVar1) {
      uVar1 = 0x10;
    }
    FUN_ram_400065d4(uVar1);
  } while( true );
}


/* NanoCore 1.10, address 0x4001211e.
 * REA evidence: ev_2031b6173c91a94f942335029ffd0941ea4fe90e7160daa95d2db445b701c393
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001211e(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4000643c(0x3005d424,&DAT_ram_40092d30,FUN_ram_400120e0,0,0x3005d4b4,0x8000,0x14,10
                          );
  uVar1 = 0xffffffff;
  if (iVar2 == 0) {
    FUN_ram_40006640(0x3005d424);
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4001216c.
 * REA evidence: ev_a2b8f1f547ec41da01c899e58c5a6d827bab774ede760b4a6fe7620b9bfde0a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001217e) */

int FUN_ram_4001216c(uint param_1,int param_2)

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


/* NanoCore 1.10, address 0x400121aa.
 * REA evidence: ev_bcd6360eb4724de2bb0833276d676ce0fa9ba2e1b440c9145b5eda72943d14d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400121aa(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint auStack_24 [3];
  
  puVar1 = (undefined4 *)FUN_ram_4004c512();
  iVar2 = FUN_ram_4004c524(param_1);
  iVar3 = FUN_ram_4004c3c4(param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == puVar1[0xd]) {
      puVar1[0x10] = (uint)((int)puVar1[0x10] < 1);
      FUN_ram_4001216c(iVar3,puVar1[0xe] + 0x1f & 0xffffffe0);
      while ((*(char *)((int)puVar1 + 0x2d) == '\0' && (*(char *)(puVar1 + 0xb) == '\0'))) {
        FUN_ram_40059b70(puVar1 + 10);
      }
      *(undefined1 *)((int)puVar1 + 0x2d) = 0;
      iVar3 = puVar1[6];
      if (puVar1[0x10] == 1) {
        iVar3 = iVar3 + puVar1[0xf];
      }
      uVar4 = FUN_ram_4004c26a(param_1);
      uVar5 = FUN_ram_4004c28c(param_1);
      uVar6 = FUN_ram_4004c2f8(param_1);
      uVar7 = FUN_ram_4004ca7e(uVar4,uVar6);
      uVar9 = puVar1[3];
      uVar8 = FUN_ram_4004c49e(param_1);
      FUN_ram_4004eace(*(undefined4 *)(iVar2 + 0x10),iVar3,uVar4,uVar5,uVar7,uVar9,uVar8,uVar6);
      FUN_ram_40059d48(*puVar1,0x4643,puVar1 + 0x10);
      *(undefined1 *)((int)puVar1 + 0x2e) = 1;
      FUN_ram_40059b86(puVar1 + 9);
    }
    else {
      FUN_ram_4001216c(iVar3,puVar1[0xf] + 0x1f & 0xffffffe0);
      auStack_24[0] = (uint)(*(int *)(iVar2 + 0x10) != puVar1[6]);
      FUN_ram_40059d48(*puVar1,0x4643,auStack_24);
      if (DAT_ram_300466dc != '\0') {
        FUN_ram_40059d48(*puVar1,0x4663,0);
        DAT_ram_300466dc = '\0';
      }
      FUN_ram_40059d48(*puVar1,0x4620,0);
    }
    if (_DAT_ram_300654b8 == 0) {
      _DAT_ram_300654b8 = 1;
      _DAT_ram_300654c0 = FUN_ram_4003f0c6();
      _DAT_ram_300654c4 = _DAT_ram_300654c0 >> 0x1f;
    }
    iVar2 = FUN_ram_4003f0c6();
    if (iVar2 - _DAT_ram_300654c0 < 1000000) {
      _DAT_ram_300654b4 = _DAT_ram_300654b4 + 1;
    }
    else {
      puVar1[0x11] = _DAT_ram_300654b4;
      _DAT_ram_300654b4 = 0;
      _DAT_ram_300654b8 = 0;
    }
  }
  FUN_ram_4004c3be(param_1);
  return;
}


/* NanoCore 1.10, address 0x40012346.
 * REA evidence: ev_785daafa900d7eb8b8cd82b2ed3a8be24b3054dc3ca84bc29579ef3bbbaa3ca3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012346(void)

{
  size_t __n;
  undefined2 uVar1;
  undefined3 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  void *__s;
  uint uVar8;
  char cVar9;
  int iVar10;
  
  iVar3 = FUN_ram_40040ade(s_PD_23_ram_40092d38);
  if (-1 < iVar3) {
    FUN_ram_40040aa6(iVar3,0);
    FUN_ram_40040aba(iVar3,1);
    FUN_ram_400065d4(1);
    FUN_ram_40040aba(iVar3,0);
    FUN_ram_400065d4(10);
    FUN_ram_40040aba(iVar3,1);
    FUN_ram_400065d4(0x32);
  }
  piVar4 = (int *)FUN_ram_40059bbc(0x48);
  if (piVar4 != (int *)0x0) {
    iVar3 = FUN_ram_40059cf6();
    *piVar4 = iVar3;
    if (iVar3 != 0) {
      FUN_ram_40059d48(iVar3,0x4662,piVar4 + 1);
      iVar3 = piVar4[5];
      __s = (void *)piVar4[6];
      uVar8 = iVar3 * piVar4[3];
      iVar10 = piVar4[4];
      cVar9 = '\x10';
      piVar4[0xf] = uVar8;
      if (piVar4[1] - 4U < 0xb) {
        cVar9 = s_PD_23_ram_40092d38[piVar4[1] + 4];
      }
      __n = uVar8 * 2;
      if ((__s != (void *)0x0) && (__n != 0)) {
        iVar6 = FUN_ram_40049d8e(cVar9);
        uVar2 = FUN_ram_4001425e();
        if (iVar6 == 0x10) {
          uVar1 = FUN_ram_40049dee(uVar2);
          for (uVar7 = 0; (uVar8 & 0x7fffffff) != uVar7; uVar7 = uVar7 + 1) {
            *(undefined2 *)((int)__s + uVar7 * 2) = uVar1;
          }
        }
        else if (iVar6 == 0x20) {
          uVar5 = FUN_ram_40049e12(uVar2);
          for (uVar7 = 0; (uVar8 & 0x7fffffff) >> 1 != uVar7; uVar7 = uVar7 + 1) {
            *(undefined4 *)((int)__s + uVar7 * 4) = uVar5;
          }
        }
        else {
          memset(__s,0,__n);
        }
      }
      FUN_ram_4001216c(piVar4[6],__n + 0x1f & 0xffffffe0);
      uVar5 = FUN_ram_4004c0d8(iVar10,iVar3);
      FUN_ram_4004c47a(uVar5,cVar9);
      FUN_ram_4004c2e8(uVar5,FUN_ram_400121aa);
      FUN_ram_4004c500(uVar5,piVar4);
      FUN_ram_4004c30e(uVar5,(void *)((int)__s + uVar8),__s,uVar8,1);
      return;
    }
    FUN_ram_40059be4(piVar4);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001251a.
 * REA evidence: ev_7cd49a10404b072ffd5e6e63e515dcd5a2ea83ccf830ce8dac12b6c35164e575
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001251a(void)

{
  int iVar1;
  
  FUN_ram_400042fa();
  if ((_DAT_ram_300654d4 == 0) && (iVar1 = FUN_ram_4002c332(), iVar1 == 0)) {
    _DAT_ram_300654d4 = 1;
  }
  FUN_ram_4001895e();
  return;
}


/* NanoCore 1.10, address 0x40012548.
 * REA evidence: ev_9b2a4750247a28474933bc4ffec0ccd2a3e7b9a634fcdc9f899cc43dbc49d189
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012548(void)

{
  int iVar1;
  
  if (_DAT_ram_300654cc == 0) {
    _DAT_ram_300654cc = 1;
    FUN_ram_4002b46e();
    if ((_DAT_ram_300654d0 == 0) &&
       (iVar1 = FUN_ram_400064c6(s_ui_preload_ram_40092d4c,&LAB_ram_400124ee,0,0x2000,0x1d,10),
       iVar1 != 0)) {
      _DAT_ram_300654d0 = 1;
      FUN_ram_40006640();
    }
    iVar1 = FUN_ram_4001587a(&LAB_ram_40012544);
    if (iVar1 != 0) {
      FUN_ram_4001251a();
      FUN_ram_40048dde(0);
    }
    FUN_ram_4003e71c(1);
    FUN_ram_400065d4(0x1e);
    FUN_ram_40048dde(0);
    FUN_ram_4003e6d0(1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400125ce.
 * REA evidence: ev_0e2ff631823a6f8dc7cf284417faaeca427d139118293104e2b6c5142fb2d2ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400125ce(void)

{
  uint uVar1;
  
  FUN_ram_40028b8a(1);
  FUN_ram_4002bfcc();
  uVar1 = FUN_ram_4002277a();
  if ((_DAT_ram_300654c8 != 0) && ((uVar1 & 0xfffffffb) == 1)) {
    _DAT_ram_300654c8 = 0;
    FUN_ram_4002bf64();
    FUN_ram_40012548();
  }
  FUN_ram_40012852();
  FUN_ram_4002e346();
  return;
}


/* NanoCore 1.10, address 0x4001260c.
 * REA evidence: ev_ee6c84b1c73686dfd5d181212b3995c56e6ce4d9275a9184442ac8060598e0a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001260c(void)

{
  return;
}


/* NanoCore 1.10, address 0x4001260e.
 * REA evidence: ev_5541eb08b02f39485801d61fd239d6f02ac746fb35fb4134affd034cb573afd3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001260e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40022a28(0x28a);
  if (2 < iVar1 - 2U) {
    FUN_ram_40012548();
    return;
  }
  _DAT_ram_300654c8 = 1;
  iVar1 = FUN_ram_4002bc14();
  if (iVar1 == 0) {
    FUN_ram_40048dde();
    FUN_ram_4003e71c(1);
    FUN_ram_400065d4(0x1e);
    FUN_ram_40048dde(0);
    FUN_ram_4003e6d0(1);
    FUN_ram_40028bba(1);
    FUN_ram_40028ca8();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001266c.
 * REA evidence: ev_b2233713f13b46a88bc934236c7dcbabc9559f128532ca3b14ab8eeaff20ea46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001266c(void)

{
  FUN_ram_40028cf4();
  FUN_ram_40028b6c(3);
  return 0;
}


/* NanoCore 1.10, address 0x40012682.
 * REA evidence: ev_3538714ea2601278c6a0bfa94c016bb1277cb1f6652b516f40f66531fb74853e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40012682(void)

{
  FUN_ram_4002cb58(1);
  return 0;
}


/* NanoCore 1.10, address 0x40012694.
 * REA evidence: ev_d79c43475fe76b184ea19a1f573aaa02160b9de4021a45b467f899c44653bb76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012694(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_ram_4003e304();
  iVar3 = FUN_ram_4003e32c();
  iVar4 = FUN_ram_4003e354();
  iVar5 = FUN_ram_4003e37c();
  iVar6 = FUN_ram_4003e3a4();
  sVar1 = FUN_ram_4003e9ba();
  if (_DAT_ram_300654d8 != 0 || sVar1 != 0) {
    FUN_ram_40018938();
  }
  _DAT_ram_300654d8 = sVar1;
  if (iVar3 != 0) {
    FUN_ram_400188a2(iVar3);
  }
  if (iVar2 != 0) {
    FUN_ram_400174c2(iVar2);
  }
  for (; 0 < iVar5; iVar5 = iVar5 + -1) {
    FUN_ram_400188e2();
  }
  for (; 0 < iVar4; iVar4 = iVar4 + -1) {
    FUN_ram_40018900();
  }
  if (0 < iVar6) {
    FUN_ram_4001891e();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40012740.
 * REA evidence: ev_c7e7b4cf0cab89f81b874382ac6da265c8b1e44c2b9fdc42488fe68918552de5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012740(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 2;
    FUN_ram_4003ea5a();
    FUN_ram_4003e3cc();
    if (3 < uVar1) {
      FUN_ram_40012694();
      uVar1 = 0;
    }
    FUN_ram_400065d4(2);
  } while( true );
}


/* NanoCore 1.10, address 0x40012768.
 * REA evidence: ev_26a08a9fb1962b788b6d42344ddbf337f34863f847764f2296b3593e56928aa1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012768(void)

{
  FUN_ram_4000d9ce();
  FUN_ram_4002227c();
  FUN_ram_4002cb3e();
  return;
}


/* NanoCore 1.10, address 0x4001277c.
 * REA evidence: ev_a325f3457dd5abe9a0cfd8745e0ecab82e3420d1a9f70076cf10ad7019a4a4db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001277c(void)

{
  int iVar1;
  
  FUN_ram_4003e768();
  FUN_ram_4003e4de();
  FUN_ram_40022272();
  FUN_ram_4000d996();
  FUN_ram_4001211e();
  FUN_ram_40029f82();
  iVar1 = FUN_ram_400064c6(s_enc_poll_ram_40092d58,FUN_ram_40012740,0,0x800,0x1d,10);
  if (iVar1 != 0) {
    FUN_ram_40006640();
  }
  FUN_ram_40012694();
  return 0;
}


/* NanoCore 1.10, address 0x400127d6.
 * REA evidence: ev_cc84270bf259549c730b83659754822888fda6061c8ab5ddeacd2369de8833ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400127d6(void)

{
  FUN_ram_4002cfa0(&PTR_PTR_ram_40092d64);
  FUN_ram_4002cfcc();
  return;
}


/* NanoCore 1.10, address 0x400127ee.
 * REA evidence: ev_25a12efc93d26fcba515b1a8e402114faae1142df709c1cf8559c68325883cea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002d412(void)

{
  return;
}


/* NanoCore 1.10, address 0x400127f2.
 * REA evidence: ev_7f46845db19e3ffd622ede414adbd83b4fe0bcd6141ba9d9648b64b503074e8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool thunk_FUN_ram_4002d01a(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_30079a78 != (code *)0x0) {
    iVar2 = (*_DAT_ram_30079a78)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x400127f6.
 * REA evidence: ev_09cf1c971dda70e7a8cab89038946b55b4255d8501f0d28bc18826eb920479fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool thunk_FUN_ram_4002d01a(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_30079a78 != (code *)0x0) {
    iVar2 = (*_DAT_ram_30079a78)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x400127fa.
 * REA evidence: ev_f6b21c6ef2262444044378a65d7396d3d5895582a89f3d1d1a2a991782484a23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002d05e(void)

{
  FUN_ram_4002d05e();
  return;
}


/* NanoCore 1.10, address 0x400127fe.
 * REA evidence: ev_909122c96d5668cf7f00361142e3c6386bad09d1face07a32d3076eaab5f9d28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400127fe(void)

{
  return;
}


/* NanoCore 1.10, address 0x40012802.
 * REA evidence: ev_6efd9aeb119fbd24d2a1ab7a542ea39b21186793b6a3994b6c2cde99d6afc4c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012802(void)

{
  return;
}


/* NanoCore 1.10, address 0x40012806.
 * REA evidence: ev_e548997613f087d8321eecc093bbe2ce9ac2f730da5def8d43fdc070f7988991
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002d2d0(void)

{
  FUN_ram_4002d2d0();
  return;
}


/* NanoCore 1.10, address 0x4001280a.
 * REA evidence: ev_700658ac625141467db60c8e5513d2aea1490d358b1666b71b338fb959eeee33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002d322(void)

{
  FUN_ram_4002d322();
  return;
}


/* NanoCore 1.10, address 0x40012852.
 * REA evidence: ev_6e02d15dc40ba56d6140848bf32b43dcb79670686a493b0cf3964691443dbd95
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012852(void)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _DAT_ram_300654f0 = _DAT_ram_300654f0 + 1;
  if (DAT_ram_300654e4 != '\0') {
    DAT_ram_300654e4 = 0;
    _DAT_ram_300654e8 = _DAT_ram_300654e8 + 1;
    uStack_18 = _DAT_ram_300654dc;
    uStack_14 = _DAT_ram_300654e0;
    FUN_ram_400178c0(&uStack_18,8);
    FUN_ram_40048dde(0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40012a62.
 * REA evidence: ev_51d5120bf8760034e8ab93a5caa861dfbc94c32af4de1d36e52c5416099be3cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40012a62(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_400137bc();
  return (uVar1 & 0xfffffffd) == 0;
}


/* NanoCore 1.10, address 0x40012a76.
 * REA evidence: ev_f3dbe6eabe3eb384e90e16cd322630ad83c78950f712243f0108b1a6c08d34ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012a76(void)

{
  FUN_ram_40019552();
  return;
}


/* NanoCore 1.10, address 0x40012a84.
 * REA evidence: ev_185cbf9e12c5623751c4c4c228240043270b1723a6d9736e1a553ca91bddbfa6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012a84(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002e2b6(&DAT_ram_40092de8);
  if (iVar1 == 0) {
    nc_register_opcode_handler(0x40,nc_handle_preset_list_names);
    nc_register_opcode_handler(0x41,nc_handle_preset_read_chunk);
    nc_register_opcode_handler(0x48,nc_handle_opcode_48);
    nc_register_opcode_handler(0x42,nc_handle_opcode_42);
    nc_register_opcode_handler(0x43,nc_handle_opcode_43);
    nc_register_opcode_handler(0x44,nc_handle_opcode_44);
    nc_register_opcode_handler(0x45,nc_handle_opcode_45);
    nc_register_opcode_handler(0x46,nc_handle_preset_readiness);
    nc_register_opcode_handler(0x49,nc_handle_opcode_49);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40012b4e.
 * REA evidence: ev_15d4c7a559f50075ec357e8029341ced616de44614bf0d28a5c0cd87f7cad079
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40012b4e(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_30067544;
  iVar2 = _DAT_ram_3006750c;
  if ((((param_1 == 1) || (iVar1 = _DAT_ram_30067540, param_1 == 0)) || (param_1 == 2)) &&
     (iVar1 != 0)) {
    iVar2 = iVar1;
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x40012b80.
 * REA evidence: ev_fa5e71bc1f889ddaf4f321f94583ec4b2323816d2f837a631344096dc002e6ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012b80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 100000;
  do {
    if ((_DAT_ram_18710014 & 0x20) != 0) {
      if (iVar1 != 0) {
        _DAT_ram_18710000 = param_1;
        return;
      }
      return;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  _DAT_ram_18710000 = param_1;
  return;
}


/* NanoCore 1.10, address 0x40012ba6.
 * REA evidence: ev_1f5dbef5bdede8da935b088d9d508c822c57d6ef0fd337c1a0d74ee27e2b22ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012ba6(char *param_1)

{
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    FUN_ram_40012b80();
  }
  return;
}


/* NanoCore 1.10, address 0x40012bc4.
 * REA evidence: ev_2cd0a965407204b24ce6bac7d8a8d6be615c10a2d733a1095c23d6bd0f1bed79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012bc4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x1c;
  do {
    uVar1 = uVar2 & 0x1f;
    uVar2 = uVar2 - 4;
    FUN_ram_40012b80(s_0123456789abcdef_ram_40092f14[param_1 >> uVar1 & 0xf]);
  } while (uVar2 != 0xfffffffc);
  return;
}


/* NanoCore 1.10, address 0x40012c00.
 * REA evidence: ev_bb7f128d72b2235da18609b65fb1bb579967029b0b182d534bf0b027c8d0a60f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012c00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = mtval;
  uVar2 = mcause;
  uVar1 = mepc;
  FUN_ram_40012ba6(s_DFU_APP_TRAP_mcause_0x_ram_40092e18);
  FUN_ram_40012bc4(uVar2);
  FUN_ram_40012ba6(&DAT_ram_40092e34);
  FUN_ram_40012bc4(uVar1);
  FUN_ram_40012ba6(&DAT_ram_40092e40);
  FUN_ram_40012bc4(uVar3);
  FUN_ram_40012ba6(s_descriptor_<type:0x_02x,index:0x_ram_400929f4 + 0x30);
  do {
    FUN_ram_4003e1dc();
  } while( true );
}


/* NanoCore 1.10, address 0x40012dc2.
 * REA evidence: ev_3df622440b898b08782fa618f1739722fdf7ec046426635520ad8553ce7a9f63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40012dc2(int param_1,undefined1 *param_2)

{
  FUN_ram_4002a26a(0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  return 1;
}


/* NanoCore 1.10, address 0x40012e68.
 * REA evidence: ev_aeccfee9c199fdda982b86bc2acfd0d6749dc1aea4cecc4b8b8c4c048ad4668a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40012e68(undefined4 param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fal_partition_find(s_ui_asset_ram_40092e4c);
  uVar2 = 0;
  if (param_3 != (undefined1 *)0x0) {
    if (iVar1 == 0) {
      *param_3 = 4;
    }
    else {
      _DAT_ram_300678c0 = *(undefined4 *)(iVar1 + 0x38);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = &DAT_ram_300678c0;
        param_2[1] = 4;
      }
      *param_3 = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40012eb0.
 * REA evidence: ev_f9d2a378fbc67e964b64a96700cee208ef11cc1888741f6c4675a4e5fbaaeef8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40012eb0(int *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  
  iVar1 = fal_partition_find(s_ui_asset_ram_40092e4c);
  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  if (((iVar1 == 0) || (param_2 == 0)) || (*(uint *)(iVar1 + 0x38) < param_2)) {
    uVar5 = 3;
  }
  else {
    iVar2 = FUN_ram_40006dcc(iVar1 + 0x1c);
    uVar4 = param_2;
    if ((iVar2 != 0) && (uVar6 = *(uint *)(iVar2 + 0x20), uVar6 != 0)) {
      if (uVar6 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = ((param_2 - 1) + uVar6) / uVar6;
      }
      uVar4 = uVar3 * uVar6;
      if (*(uint *)(iVar1 + 0x38) < uVar3 * uVar6) {
        uVar4 = *(uint *)(iVar1 + 0x38);
      }
    }
    FUN_ram_4002a26a(1);
    iVar2 = FUN_ram_40006ff2(iVar1,0,uVar4);
    if (-1 < iVar2) {
      *(undefined1 *)(param_1 + 4) = 1;
      *param_1 = iVar1;
      param_1[1] = param_2;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_ram_4002b5dc();
      FUN_ram_400223bc();
      *param_3 = 0;
      return 1;
    }
    FUN_ram_4002a26a(0);
    uVar5 = 4;
  }
  *param_3 = uVar5;
  return 1;
}


