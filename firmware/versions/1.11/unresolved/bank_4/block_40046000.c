/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40046000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40046390.
 * REA evidence: ev_1bfac297396e385a117335d6436dc9c45d1a39f965289d12ac2933a6b28aa5e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40046390(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_ram_40047a70(param_1,param_2,0x27);
  return uVar1;
}


/* NanoCore 1.11, address 0x400463b0.
 * REA evidence: ev_8b8d2518d7973f475f9613c8fbda01fe21045d7db7ce4e1d403ddd41c381f310
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400463b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047a70(param_1,0,0x12);
  iVar2 = FUN_ram_40047a70(param_1,0,0x30);
  uVar3 = FUN_ram_40047a70(param_1,0,0x34);
  if ((uVar3 & 4) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x400463f8.
 * REA evidence: ev_9f9d7164173741c61ef75ecc482aed3f60303e567a57755ed2e5ec061db85d28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400463f8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047a70(param_1,0,0x11);
  iVar2 = FUN_ram_40047a70(param_1,0,0x30);
  uVar3 = FUN_ram_40047a70(param_1,0,0x34);
  if ((uVar3 & 1) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40046440.
 * REA evidence: ev_8b8d6346dbe0c7776dcf1c86342a8a2960383e7f83ddaa707619de0ea7ec6175
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046440(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047a70(param_1,0,0x10);
  iVar2 = FUN_ram_40047a70(param_1,0,0x30);
  uVar3 = FUN_ram_40047a70(param_1,0,0x34);
  if ((uVar3 & 2) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40046488.
 * REA evidence: ev_591c6964b804fe81606b85720b6f44e3ebfda867235bc77265aed2c17e145a47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046488(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047a70(param_1,0,0x13);
  iVar2 = FUN_ram_40047a70(param_1,0,0x30);
  uVar3 = FUN_ram_40047a70(param_1,0,0x34);
  if ((uVar3 & 8) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x400464d0.
 * REA evidence: ev_746b5f75bd4da2cd1a5c63328173c56df6b0ebac2d26df0608185a19a0bf478d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400464d0(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_ram_40044074();
  iVar1 = *(int *)(param_1 + 8);
  if ((*(uint *)(iVar1 + 0x28) & 0x3ffff) >> 0x10 != param_2) {
    *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) & 0xfffc | (ushort)param_2 & 3;
    FUN_ram_400454e4();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4004650a.
 * REA evidence: ev_03cb660bcfbd1c7e6cc3529ea69b98c89784ecb407c92c6588224d4b42db9507
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004650a(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0x3ffff) >> 0x10;
  }
  return 3;
}


/* NanoCore 1.11, address 0x4004651a.
 * REA evidence: ev_fead2eb38947e2b602a74bfbb2dcd6814f9040c944a3c00456e1ce8b3498414f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004651a(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0x3ffffff) >> 0x16;
  }
  return 0xf;
}


/* NanoCore 1.11, address 0x4004652a.
 * REA evidence: ev_6e7b1634bf94ac24f8eef4efe1bf281b5ec196ac2d9d8ed0f637f5f999192e59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004652a(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0xfffff) >> 0x12;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004653a.
 * REA evidence: ev_a9509da0a0b64317b0fb5308cad6bdfa96af028fac18c9897e5b8043059186fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004653a(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0x3fffff) >> 0x14;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004654a.
 * REA evidence: ev_f61985938faf9b35c49f407d79ae9c6e445b3a67b6301efecd4bec2d47786b7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004654a(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return -*(int *)(*(int *)(param_1 + 8) + 0x18);
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004655a.
 * REA evidence: ev_d7717f3da17b791a69f24825ffe58b5bd84045535cff5edff891b9980d692abf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004655a(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return -*(int *)(*(int *)(param_1 + 8) + 0x1c);
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004656a.
 * REA evidence: ev_595f64588bd1ce7dfdb07756a014e2309c951e33a6d5f3036254e74fa6c2f70a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_4004655a(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return -*(int *)(*(int *)(param_1 + 8) + 0x1c);
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004656e.
 * REA evidence: ev_c2ca207fa800db31da8d973bc9ec12285e2de24da7a744fcb41be7890dafe48b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004656e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_ram_40048a9e();
  iVar1 = -0x1fffffff;
  for (iVar6 = 0; iVar6 != iVar2; iVar6 = iVar6 + 1) {
    iVar3 = *(int *)(**(int **)(param_1 + 8) + iVar6 * 4);
    iVar5 = FUN_ram_40043b9e(iVar3,0x40001);
    if (iVar5 == 0) {
      iVar4 = *(int *)(iVar3 + 0x20);
      iVar5 = FUN_ram_40047a70(iVar3,0,0x19);
      iVar5 = iVar5 + iVar4;
      if (iVar1 < iVar5) {
        iVar1 = iVar5;
      }
    }
  }
  iVar2 = FUN_ram_40046440(param_1);
  iVar6 = FUN_ram_400463f8(param_1);
  if (iVar1 != -0x1fffffff) {
    iVar1 = iVar1 - (*(int *)(param_1 + 0x20) - iVar6);
  }
  iVar3 = FUN_ram_4004514c(param_1);
  iVar4 = FUN_ram_40045070(param_1);
  iVar5 = FUN_ram_4004655a(param_1);
  iVar5 = (iVar3 - ((iVar4 - iVar2) - iVar6)) - iVar5;
  if (iVar5 <= iVar1) {
    iVar5 = iVar1;
  }
  return iVar5;
}


/* NanoCore 1.11, address 0x40046626.
 * REA evidence: ev_f5f167ced14dc987bac2febc3cc4c69c057ce4e8c70f79ae04964e24f783d1df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046626(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_ram_40046390(param_1,0);
  if (iVar2 == 1) {
    iVar3 = FUN_ram_40046488(param_1);
    iVar4 = FUN_ram_400463b0(param_1);
    iVar5 = FUN_ram_40048a9e(param_1);
    iVar2 = 0x1fffffff;
    for (iVar1 = 0; iVar5 != iVar1; iVar1 = iVar1 + 1) {
      iVar7 = *(int *)(**(int **)(param_1 + 8) + iVar1 * 4);
      iVar6 = FUN_ram_40043b9e(iVar7,0x40001);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar7 + 0x14);
        iVar7 = FUN_ram_40047a70(iVar7,0,0x1a);
        iVar6 = iVar6 - iVar7;
        if (iVar6 < iVar2) {
          iVar2 = iVar6;
        }
      }
    }
    if (iVar2 == 0x1fffffff) {
      iVar2 = -0x1fffffff;
    }
    else {
      iVar2 = (*(int *)(param_1 + 0x14) + iVar4) - iVar2;
    }
    iVar5 = FUN_ram_4004512c(param_1);
    iVar6 = FUN_ram_40045064(param_1);
    iVar1 = FUN_ram_4004654a(param_1);
    iVar1 = iVar1 + (iVar5 - ((iVar6 - iVar3) - iVar4));
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
  }
  else {
    iVar1 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = -*(int *)(*(int *)(param_1 + 8) + 0x18);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40046716.
 * REA evidence: ev_a0cce2713968ebf6bec64ba556881c1e8def2afb5704595be2d2d32f0119260a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046716(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_ram_40046390(param_1,0);
  if (iVar2 == 1) {
    iVar6 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x18);
    }
  }
  else {
    iVar3 = FUN_ram_40048a9e(param_1);
    iVar2 = -0x1fffffff;
    for (iVar1 = 0; iVar3 != iVar1; iVar1 = iVar1 + 1) {
      iVar4 = *(int *)(**(int **)(param_1 + 8) + iVar1 * 4);
      iVar6 = FUN_ram_40043b9e(iVar4,0x40001);
      if (iVar6 == 0) {
        iVar5 = *(int *)(iVar4 + 0x1c);
        iVar6 = FUN_ram_40047a70(iVar4,0,0x1b);
        iVar6 = iVar6 + iVar5;
        if (iVar2 < iVar6) {
          iVar2 = iVar6;
        }
      }
    }
    iVar1 = FUN_ram_40046488(param_1);
    iVar3 = FUN_ram_400463b0(param_1);
    if (iVar2 != -0x1fffffff) {
      iVar2 = iVar2 - (*(int *)(param_1 + 0x1c) - iVar1);
    }
    iVar4 = FUN_ram_4004512c(param_1);
    iVar5 = FUN_ram_40045064(param_1);
    iVar6 = FUN_ram_4004654a(param_1);
    iVar6 = (iVar4 - ((iVar5 - iVar1) - iVar3)) - iVar6;
    if (iVar6 < iVar2) {
      iVar6 = iVar2;
    }
  }
  return iVar6;
}


/* NanoCore 1.11, address 0x400467f0.
 * REA evidence: ev_087e3662c942acec8f757622690f60710966dd26aa6bbf4d17129e40b039cb6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400467f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 != 0 || param_3 != 0) {
    FUN_ram_40044074();
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_2;
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + param_3;
    FUN_ram_400451b4(param_1,param_2,param_3,1);
    iVar1 = FUN_ram_40044b50(param_1,0xc,0);
    if (iVar1 == 1) {
      FUN_ram_400454e4(param_1);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40046848.
 * REA evidence: ev_a2ba31c2513f850ac770fa997b20fa712d839fa06c79a6af361ee9fec716e994
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046848(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004655a();
  FUN_ram_400467f0(param_1,0,iVar1 + param_2);
  return;
}


/* NanoCore 1.11, address 0x4004686a.
 * REA evidence: ev_4a0156b36ccad99ca1c7a8ea281341082b8f70de5b76fa49a6ea96d6d7daa3f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004686a(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004654a();
  FUN_ram_400467f0(param_1,param_2 + iVar1,0);
  return;
}


/* NanoCore 1.11, address 0x4004688a.
 * REA evidence: ev_0e7b1e80aa7509bb7658d43f1feaad314304c478c72317beac961da7d000ff9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004688a(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_78;
  code *pcStack_74;
  undefined1 *puStack_68;
  undefined1 *puStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  
  if (param_2 == 0 && param_3 == 0) {
    return;
  }
  if (param_4 == 1) {
    uVar1 = FUN_ram_40048a20();
    FUN_ram_4004a154(&uStack_78);
    puStack_68 = &LAB_ram_400463a6;
    uStack_78 = param_1;
    if (param_2 != 0) {
      iVar2 = FUN_ram_4004d1dc(uVar1);
      uStack_48 = FUN_ram_4004a306(iVar2 >> 1,200,400);
      iStack_4c = FUN_ram_4004654a(param_1);
      iStack_54 = -iStack_4c;
      uStack_50 = 0x80000000;
      iStack_4c = param_2 - iStack_4c;
      pcStack_74 = FUN_ram_4004686a;
      puStack_58 = &LAB_ram_4004a35a;
      iVar2 = FUN_ram_40044b50(param_1,9,&uStack_78);
      if (iVar2 != 1) {
        return;
      }
      FUN_ram_4004a19a(&uStack_78);
    }
    if (param_3 != 0) {
      iVar2 = FUN_ram_4004d1fe(uVar1);
      uStack_48 = FUN_ram_4004a306(iVar2 >> 1,200,400);
      iStack_4c = FUN_ram_4004655a(param_1);
      iStack_54 = -iStack_4c;
      uStack_50 = 0x80000000;
      iStack_4c = param_3 - iStack_4c;
      pcStack_74 = FUN_ram_40046848;
      puStack_58 = &LAB_ram_4004a35a;
      iVar2 = FUN_ram_40044b50(param_1,9,&uStack_78);
      if (iVar2 == 1) {
        FUN_ram_4004a19a(&uStack_78);
      }
    }
  }
  else {
    FUN_ram_4004a23a(param_1,FUN_ram_40046848);
    FUN_ram_4004a23a(param_1,FUN_ram_4004686a);
    iVar2 = FUN_ram_40044b50(param_1,9,0);
    if ((iVar2 == 1) && (iVar2 = FUN_ram_400467f0(param_1,param_2,param_3), iVar2 == 1)) {
      FUN_ram_40044b50(param_1,0xb,0);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400469da.
 * REA evidence: ev_9b8df0b31aacb8aa981d716aab2206ff02e0ba37f435da12541279955fb2d1a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400469da(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0 && param_3 == 0) {
    return;
  }
  FUN_ram_40045f80();
  iVar3 = FUN_ram_4004654a(param_1);
  param_2 = param_2 - iVar3;
  iVar4 = FUN_ram_40046390(param_1,0);
  iVar2 = 0;
  if (iVar4 == 1) {
    if (param_2 < 1) goto LAB_ram_40046a40;
    iVar2 = FUN_ram_40046626(param_1);
    iVar4 = FUN_ram_40046716(param_1);
    iVar2 = iVar2 + iVar4;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    bVar1 = param_2 < iVar2;
  }
  else {
    if (-1 < param_2) goto LAB_ram_40046a40;
    iVar2 = FUN_ram_40046626(param_1);
    iVar4 = FUN_ram_40046716(param_1);
    iVar2 = iVar2 + iVar4;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    iVar2 = -iVar2;
    bVar1 = iVar2 < param_2;
  }
  if (bVar1) {
    iVar2 = param_2;
  }
LAB_ram_40046a40:
  iVar5 = FUN_ram_4004655a(param_1);
  param_3 = param_3 - iVar5;
  iVar4 = 0;
  if (param_3 < 0) {
    iVar6 = FUN_ram_4004656e(param_1);
    iVar6 = iVar5 + iVar6;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar4 = -iVar6;
    if (-iVar6 < param_3) {
      iVar4 = param_3;
    }
  }
  if (iVar3 + iVar2 != 0 || iVar4 + iVar5 != 0) {
    FUN_ram_4004688a(param_1,iVar3 + iVar2,iVar4 + iVar5,param_4);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40046ac6.
 * REA evidence: ev_f37a18228068b1735145ca7da7477d220f23d84e0d895701e1744f38a9e85558
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046ac6(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_4004a23a(param_1,FUN_ram_4004686a);
  iVar1 = FUN_ram_4004654a(param_1);
  FUN_ram_400469da(param_1,iVar1 - param_2,0,param_3);
  return;
}


/* NanoCore 1.11, address 0x40046afc.
 * REA evidence: ev_d0c1e3ab1336f9d807a8dbe77ee399aaf5beea9cbb50eb106cccfe3bc79d7197
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046afc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_4004a23a(param_1,FUN_ram_40046848);
  iVar1 = FUN_ram_4004655a(param_1);
  FUN_ram_400469da(param_1,0,iVar1 - param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40046b32.
 * REA evidence: ev_3f23df3e1816965466053ce2e4cf83db6cb1297476da0b2470ee3e811a6aa1e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40046da2) */
/* WARNING: Removing unreachable block (ram,0x40046d56) */
/* WARNING: Removing unreachable block (ram,0x40046d5e) */
/* WARNING: Removing unreachable block (ram,0x40046daa) */

void FUN_ram_40046b32(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  iVar2 = FUN_ram_40048a76(param_2);
  iVar3 = FUN_ram_40043b92(iVar2,0x10);
  if (iVar3 == 0) {
    return;
  }
  uVar4 = FUN_ram_4004651a(iVar2);
  iVar3 = FUN_ram_4004653a(iVar2);
  piVar11 = param_1;
  if (iVar3 != 0) {
    piVar11 = (int *)(param_2 + 0x14);
  }
  iVar5 = FUN_ram_40046440(iVar2);
  iVar6 = FUN_ram_400463f8(iVar2);
  iVar9 = param_3[1];
  iVar10 = (*(int *)(iVar2 + 0x20) - iVar6) - piVar11[3];
  iVar8 = iVar9 - iVar10;
  iVar1 = ((*(int *)(iVar2 + 0x18) + iVar5) - piVar11[1]) - iVar9;
  iVar7 = FUN_ram_40045070(iVar2);
  if (iVar1 < 0) {
    if (0 < iVar8) {
      iVar1 = iVar10 - iVar9;
      iVar8 = FUN_ram_4004656e(iVar2);
      iVar8 = iVar8 + iVar1;
      goto LAB_ram_40046bd8;
    }
LAB_ram_40046bdc:
    iVar1 = 0;
  }
  else {
    if ((-1 < iVar8) || (iVar1 == 0)) goto LAB_ram_40046bdc;
    iVar8 = FUN_ram_4004655a(iVar2);
    iVar8 = iVar8 - iVar1;
LAB_ram_40046bd8:
    if (iVar8 < 0) goto LAB_ram_40046bdc;
  }
  if (iVar3 == 2) {
    iVar3 = piVar11[3];
    iVar1 = *(int *)(iVar2 + 0x20) - iVar6;
LAB_ram_40046d3a:
    iVar1 = iVar1 - iVar3;
  }
  else {
    if (iVar3 == 3) {
      iVar1 = ((iVar7 - iVar5) - iVar6) / 2 + iVar5 + *(int *)(iVar2 + 0x18);
      iVar3 = ((piVar11[3] - piVar11[1]) + 1) / 2 + piVar11[1];
      goto LAB_ram_40046d3a;
    }
    if (iVar3 == 1) {
      iVar1 = (iVar5 + *(int *)(iVar2 + 0x18)) - piVar11[1];
    }
  }
  iVar3 = FUN_ram_4004652a(iVar2);
  if (iVar3 != 0) {
    param_1 = (int *)(param_2 + 0x14);
  }
  iVar6 = FUN_ram_400463b0(iVar2);
  iVar7 = FUN_ram_40046488(iVar2);
  iVar9 = *param_3;
  iVar5 = ((*(int *)(iVar2 + 0x14) + iVar6) - *param_1) - iVar9;
  iVar10 = (*(int *)(iVar2 + 0x1c) - iVar7) - param_1[2];
  iVar8 = iVar9 - iVar10;
  if (iVar5 < 0) {
    if (0 < iVar8) {
      iVar5 = iVar10 - iVar9;
      iVar8 = FUN_ram_40046716(iVar2);
      iVar8 = iVar8 + iVar5;
      goto LAB_ram_40046c50;
    }
LAB_ram_40046c54:
    iVar5 = 0;
  }
  else {
    if ((-1 < iVar8) || (iVar5 == 0)) goto LAB_ram_40046c54;
    iVar8 = FUN_ram_40046626(iVar2);
    iVar8 = iVar8 - iVar5;
LAB_ram_40046c50:
    if (iVar8 < 0) goto LAB_ram_40046c54;
  }
  iVar8 = FUN_ram_40045064(iVar2);
  if (iVar3 == 2) {
    iVar3 = param_1[2];
    iVar5 = *(int *)(iVar2 + 0x1c) - iVar7;
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 == 1) {
        iVar5 = (iVar6 + *(int *)(iVar2 + 0x14)) - *param_1;
      }
      goto LAB_ram_40046c7c;
    }
    iVar5 = ((iVar8 - iVar6) - iVar7) / 2 + iVar6 + *(int *)(iVar2 + 0x14);
    iVar3 = ((param_1[2] - *param_1) + 1) / 2 + *param_1;
  }
  iVar5 = iVar5 - iVar3;
LAB_ram_40046c7c:
  iVar3 = FUN_ram_4004a23a(iVar2,FUN_ram_40046848);
  iVar6 = FUN_ram_4004a23a(iVar2,FUN_ram_4004686a);
  if (((iVar3 != 0) || (iVar6 != 0)) && (iVar3 = FUN_ram_40044b50(iVar2,0xb,0), iVar3 != 1)) {
    return;
  }
  if (((uVar4 & 1) == 0) && (iVar5 < 0)) {
    iVar5 = 0;
  }
  if (((uVar4 & 2) == 0) && (0 < iVar5)) {
    iVar5 = 0;
  }
  if (((uVar4 & 4) == 0) && (iVar1 < 0)) {
    iVar1 = 0;
  }
  if (((uVar4 & 8) == 0) && (0 < iVar1)) {
    iVar1 = 0;
  }
  iVar3 = iVar5;
  if (param_4 == 0) {
    iVar3 = 0;
  }
  *param_3 = *param_3 + iVar3;
  iVar3 = iVar1;
  if (param_4 == 0) {
    iVar3 = 0;
  }
  param_3[1] = param_3[1] + iVar3;
  FUN_ram_4004688a(iVar2,iVar5,iVar1,param_4);
  return;
}


/* NanoCore 1.11, address 0x40046dea.
 * REA evidence: ev_ad3ca736bbe30c4c45e34cda22cfa93a293f6b44360023835dbab2b4b5b07b33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046dea(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_40045f80();
  uStack_18 = 0;
  uStack_14 = 0;
  iVar2 = FUN_ram_40048a76(param_1);
  iVar3 = param_1;
  while (iVar1 = iVar2, iVar1 != 0) {
    FUN_ram_40046b32(param_1 + 0x14,iVar3,&uStack_18,param_2);
    iVar2 = FUN_ram_40048a76(iVar1);
    iVar3 = iVar1;
  }
  return;
}


/* NanoCore 1.11, address 0x40046e30.
 * REA evidence: ev_d2ecb6f4f03a0d069f1793bb32c6f28fdbf0ed351c7a6cb3861ba90d170ba9b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400474d2) */
/* WARNING: Removing unreachable block (ram,0x40047456) */
/* WARNING: Removing unreachable block (ram,0x40047394) */
/* WARNING: Removing unreachable block (ram,0x40047014) */
/* WARNING: Removing unreachable block (ram,0x400472d8) */
/* WARNING: Removing unreachable block (ram,0x40047250) */
/* WARNING: Removing unreachable block (ram,0x40047180) */
/* WARNING: Removing unreachable block (ram,0x4004714e) */
/* WARNING: Removing unreachable block (ram,0x40047216) */
/* WARNING: Removing unreachable block (ram,0x4004729c) */
/* WARNING: Removing unreachable block (ram,0x40046fe4) */
/* WARNING: Removing unreachable block (ram,0x4004735c) */
/* WARNING: Removing unreachable block (ram,0x400473d4) */
/* WARNING: Removing unreachable block (ram,0x4004748e) */
/* WARNING: Removing unreachable block (ram,0x4004740c) */

void FUN_ram_40046e30(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iStack_6c;
  
  FUN_ram_4004a39e(param_2,0,0,0xffffffff,0xffffffff);
  FUN_ram_4004a39e(param_3,0,0,0xffffffff,0xffffffff);
  uVar2 = FUN_ram_40043b92(param_1,0x10);
  if (uVar2 == 0) {
    return;
  }
  iVar3 = FUN_ram_4004650a(param_1);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = FUN_ram_40056cb2(0);
  if (iVar3 == 2) {
    while( true ) {
      if (iVar4 == 0) {
        return;
      }
      iVar5 = FUN_ram_40056cfc(iVar4);
      if (param_1 == iVar5) break;
      iVar4 = FUN_ram_40056cb2(iVar4);
    }
  }
  iVar5 = FUN_ram_4004655a(param_1);
  iVar6 = FUN_ram_4004656e(param_1);
  iVar7 = FUN_ram_40046626(param_1);
  iVar8 = FUN_ram_40046716(param_1);
  uVar9 = FUN_ram_4004651a(param_1);
  uVar21 = 0;
  if (((uVar9 & 0xc) != 0) && (uVar21 = uVar2, iVar3 != 1)) {
    if (iVar3 == 3) {
      if (iVar5 < 1) {
        uVar21 = (uint)(0 < iVar6);
      }
    }
    else {
      uVar21 = 0;
      if (iVar3 == 2) {
        iVar10 = FUN_ram_40056ce2(iVar4);
        uVar21 = (uint)(iVar10 == 0xc);
      }
    }
  }
  if ((uVar9 & 3) != 0) {
    if (iVar3 == 1) goto LAB_ram_40046eee;
    if (iVar3 == 3) {
      if ((0 < iVar7) || (0 < iVar8)) goto LAB_ram_40046eee;
    }
    else if ((iVar3 == 2) && (iVar3 = FUN_ram_40056ce2(iVar4), iVar3 == 3)) goto LAB_ram_40046eee;
  }
  uVar2 = 0;
  if (uVar21 == 0) {
    return;
  }
LAB_ram_40046eee:
  iVar4 = FUN_ram_40046390(param_1,0x10000);
  iVar10 = FUN_ram_40047a70(param_1,0x10000,0x10);
  iVar11 = FUN_ram_40047a70(param_1,0x10000,0x11);
  iVar12 = FUN_ram_40047a70(param_1,0x10000,0x12);
  iVar13 = FUN_ram_40047a70(param_1,0x10000,0x13);
  iVar14 = FUN_ram_40047a70(param_1,0x10000,1);
  iVar15 = FUN_ram_40045070(param_1);
  iVar16 = FUN_ram_40045064(param_1);
  iVar3 = iVar14;
  if (uVar21 == 0) {
    iVar3 = 0;
  }
  iStack_6c = iVar14;
  if (uVar2 == 0) {
    iStack_6c = 0;
  }
  bVar1 = FUN_ram_40047a70(param_1,0x10000,0x1d);
  if ((1 < bVar1) || (bVar1 = FUN_ram_40047a70(param_1,0x10000,0x32), 1 < bVar1)) {
    if ((uVar21 != 0) && (iVar5 = iVar5 + iVar15 + iVar6, iVar5 != 0)) {
      param_3[1] = *(int *)(param_1 + 0x18);
      param_3[3] = *(int *)(param_1 + 0x20);
      if (iVar4 == 1) {
        iVar19 = *(int *)(param_1 + 0x14) + iVar12;
        *param_3 = iVar19;
        param_3[2] = iVar19 + iVar14 + -1;
      }
      else {
        iVar19 = *(int *)(param_1 + 0x1c) - iVar13;
        param_3[2] = iVar19;
        *param_3 = (iVar19 - iVar14) + 1;
      }
      iVar19 = ((iVar15 - iVar10) - iVar11) - iStack_6c;
      if (iVar5 == 0) {
        iVar20 = -1;
      }
      else {
        iVar20 = (iVar15 * iVar19) / iVar5;
      }
      iVar17 = FUN_ram_4004d220(0);
      iVar18 = 1;
      if (0xef < iVar17 * 10) {
        iVar17 = FUN_ram_4004d220(0);
        iVar18 = (iVar17 * 10 + 0x50) / 0xa0;
      }
      if (iVar20 <= iVar18) {
        iVar17 = FUN_ram_4004d220(0);
        iVar20 = 1;
        if (0xef < iVar17 * 10) {
          iVar20 = FUN_ram_4004d220(0);
          iVar20 = (iVar20 * 10 + 0x50) / 0xa0;
        }
      }
      iVar5 = iVar5 - iVar15;
      if (iVar5 < 1) {
        iVar5 = *(int *)(param_1 + 0x20);
        param_3[1] = iVar10 + *(int *)(param_1 + 0x18);
        param_3[3] = ((iVar5 - iVar11) - iStack_6c) + -1;
      }
      else {
        iVar19 = iVar19 - iVar20;
        if (iVar5 == 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = (iVar6 * iVar19) / iVar5;
        }
        iVar6 = (iVar19 - iVar5) + *(int *)(param_1 + 0x18);
        iVar5 = iVar6 + iVar10;
        param_3[1] = iVar5;
        param_3[3] = iVar20 + iVar5 + -1;
        if (iVar6 < *(int *)(param_1 + 0x18)) {
          iVar10 = iVar10 + *(int *)(param_1 + 0x18);
          param_3[1] = iVar10;
          iVar5 = FUN_ram_4004d220(0);
          iVar6 = 1;
          if (0xef < iVar5 * 10) {
            iVar5 = FUN_ram_4004d220(0);
            iVar6 = (iVar5 * 10 + 0x50) / 0xa0;
          }
          if (param_3[3] < iVar10 + iVar6) {
            iVar10 = param_3[1];
            iVar5 = FUN_ram_4004d220(0);
            iVar6 = 1;
            if (0xef < iVar5 * 10) {
              iVar5 = FUN_ram_4004d220(0);
              iVar6 = (iVar5 * 10 + 0x50) / 0xa0;
            }
            param_3[3] = iVar6 + iVar10;
          }
        }
        iVar5 = (*(int *)(param_1 + 0x20) - iStack_6c) - iVar11;
        if (iVar5 < param_3[3]) {
          param_3[3] = iVar5;
          iVar6 = FUN_ram_4004d220(0);
          iVar10 = 1;
          if (0xef < iVar6 * 10) {
            iVar6 = FUN_ram_4004d220(0);
            iVar10 = (iVar6 * 10 + 0x50) / 0xa0;
          }
          if (iVar5 - iVar10 < param_3[1]) {
            iVar10 = param_3[3];
            iVar5 = FUN_ram_4004d220(0);
            iVar6 = 1;
            if (0xef < iVar5 * 10) {
              iVar5 = FUN_ram_4004d220(0);
              iVar6 = (iVar5 * 10 + 0x50) / 0xa0;
            }
            param_3[1] = iVar10 - iVar6;
          }
        }
      }
    }
    if ((uVar2 != 0) && (iVar5 = iVar7 + iVar16 + iVar8, iVar5 != 0)) {
      iVar11 = *(int *)(param_1 + 0x20) - iVar11;
      iVar6 = *(int *)(param_1 + 0x14);
      param_2[3] = iVar11;
      *param_2 = iVar6;
      iVar6 = *(int *)(param_1 + 0x1c);
      param_2[1] = (iVar11 - iVar14) + 1;
      param_2[2] = iVar6;
      iVar10 = ((iVar16 - iVar12) - iVar13) - iVar3;
      iVar6 = FUN_ram_4004d220(0);
      iVar7 = 1;
      if (iVar5 == 0) {
        iVar11 = -1;
      }
      else {
        iVar11 = (iVar16 * iVar10) / iVar5;
      }
      if (0xef < iVar6 * 10) {
        iVar6 = FUN_ram_4004d220(0);
        iVar7 = (iVar6 * 10 + 0x50) / 0xa0;
      }
      if (iVar11 <= iVar7) {
        iVar6 = FUN_ram_4004d220(0);
        iVar11 = 1;
        if (0xef < iVar6 * 10) {
          iVar6 = FUN_ram_4004d220(0);
          iVar11 = (iVar6 * 10 + 0x50) / 0xa0;
        }
      }
      iVar5 = iVar5 - iVar16;
      if (iVar5 < 1) {
        iVar12 = iVar12 + *(int *)(param_1 + 0x14);
        iVar5 = *(int *)(param_1 + 0x1c);
        if (iVar4 == 1) {
          *param_2 = iVar12 + iVar3 + -1;
          param_2[2] = iVar5 - iVar13;
        }
        else {
          *param_2 = iVar12;
          param_2[2] = ((iVar5 - iVar13) - iVar3) + -1;
        }
      }
      else {
        iVar10 = iVar10 - iVar11;
        if (iVar5 == 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = (iVar8 * iVar10) / iVar5;
        }
        iVar6 = (iVar10 - iVar5) + *(int *)(param_1 + 0x14);
        iVar5 = iVar6 + iVar12;
        if (iVar4 == 1) {
          *param_2 = iVar5 + iVar3;
          param_2[2] = iVar5 + iVar3 + iVar11 + -1;
          if (iVar6 < *(int *)(param_1 + 0x14)) {
            iVar3 = *(int *)(param_1 + 0x14) + iVar12 + iVar3;
            *param_2 = iVar3;
            iVar4 = FUN_ram_4004d220(0);
            iVar5 = 1;
            if (0xef < iVar4 * 10) {
              iVar4 = FUN_ram_4004d220(0);
              iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
            }
            if (param_2[2] < iVar5 + iVar3) {
              iVar5 = *param_2;
              iVar3 = FUN_ram_4004d220(0);
              iVar4 = 1;
              if (0xef < iVar3 * 10) {
                iVar3 = FUN_ram_4004d220(0);
                iVar4 = (iVar3 * 10 + 0x50) / 0xa0;
              }
              param_2[2] = iVar4 + iVar5;
            }
          }
          iVar13 = *(int *)(param_1 + 0x1c) - iVar13;
          if (param_2[2] <= iVar13) {
            return;
          }
          param_2[2] = iVar13;
          iVar3 = FUN_ram_4004d220(0);
          iVar4 = 1;
          if (0xef < iVar3 * 10) {
            iVar3 = FUN_ram_4004d220(0);
            iVar4 = (iVar3 * 10 + 0x50) / 0xa0;
          }
          iVar13 = iVar13 - iVar4;
        }
        else {
          *param_2 = iVar5;
          iVar4 = *(int *)(param_1 + 0x14);
          param_2[2] = iVar11 + iVar5 + -1;
          if (iVar6 < iVar4) {
            iVar12 = iVar12 + iVar4;
            *param_2 = iVar12;
            iVar4 = FUN_ram_4004d220(0);
            iVar5 = 1;
            if (0xef < iVar4 * 10) {
              iVar4 = FUN_ram_4004d220(0);
              iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
            }
            if (param_2[2] < iVar5 + iVar12) {
              iVar6 = *param_2;
              iVar4 = FUN_ram_4004d220(0);
              iVar5 = 1;
              if (0xef < iVar4 * 10) {
                iVar4 = FUN_ram_4004d220(0);
                iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
              }
              param_2[2] = iVar5 + iVar6;
            }
          }
          iVar13 = (*(int *)(param_1 + 0x1c) - iVar3) - iVar13;
          if (param_2[2] <= iVar13) {
            return;
          }
          param_2[2] = iVar13;
          iVar3 = FUN_ram_4004d220(0);
          iVar4 = 1;
          if (0xef < iVar3 * 10) {
            iVar3 = FUN_ram_4004d220(0);
            iVar4 = (iVar3 * 10 + 0x50) / 0xa0;
          }
          iVar13 = iVar13 - iVar4;
        }
        if (iVar13 < *param_2) {
          iVar3 = param_2[2];
          iVar4 = FUN_ram_4004d220(0);
          iVar5 = 1;
          if (0xef < iVar4 * 10) {
            iVar4 = FUN_ram_4004d220(0);
            iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
          }
          *param_2 = iVar3 - iVar5;
        }
      }
    }
  }
  return;
}


