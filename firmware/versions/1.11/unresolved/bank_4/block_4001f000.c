/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4001f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4001f0b6.
 * REA evidence: ev_9ccc4a4d86ff72af560efa7a8a75920285841f125ea58e5eb46140192ca8c94c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f0b6(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_50 [7];
  
  uVar3 = FUN_ram_4001a8d0();
  if (-1 < (int)uVar3) {
    bVar1 = *(byte *)(uVar3 + 0x3006af14);
    uVar4 = FUN_ram_4002523e(uVar3,param_2);
    *(char *)(uVar3 + 0x3006af14) = (char)uVar4;
    FUN_ram_40022e50(uVar3,uVar4);
    if (bVar1 != uVar4) {
      memset(local_50,0,0x30);
      uVar4 = FUN_ram_40032bf8(uVar3 & 0xff,uVar4,local_50,0xc);
      puVar2 = local_50;
      for (uVar3 = 0; (uVar3 & 0xff) < uVar4; uVar3 = uVar3 + 1) {
        FUN_ram_4001e524(*puVar2,param_1,uVar3);
        puVar2 = (undefined8 *)((int)puVar2 + 4);
      }
    }
    if ((((DAT_ram_3006aa2a != '\0') && (_DAT_ram_3006aa7c != 0)) && (param_1 != 0)) &&
       (iVar5 = FUN_ram_400051f8(_DAT_ram_3006aa7c,param_1,0x10), iVar5 == 0)) {
      FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
      DAT_ram_3006ad4c = 0;
      DAT_ram_3006ad74 = FUN_ram_4001e630(_DAT_ram_3006aa7c);
      FUN_ram_4001d12e();
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4001f190.
 * REA evidence: ev_20af0ad75d975758d918cbea46569092adfbc4c7297416dfe381d4eda1f1482f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40024cf8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
  return;
}


/* NanoCore 1.11, address 0x4001f194.
 * REA evidence: ev_aac27f104eb6a945509d542e7796109cc792cd65257c1a78573f814e85816aa7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40024d06(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar5 = 1;
    if ((int)param_3 < 1) {
      iVar5 = -1;
    }
    iVar1 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
    iVar2 = 4;
    if (iVar1 < 4) {
      iVar2 = 1;
      if (iVar1 != 1) {
        iVar2 = 2;
      }
    }
    if (param_1 != (int *)0x0) {
      uVar3 = FUN_ram_40004352(0x5a);
      iVar4 = FUN_ram_400042ea();
      if ((*param_1 != 0) && (param_2 == (char)param_1[1])) {
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        if ((uint)(iVar4 - *param_1) <= uVar3) {
          iVar2 = iVar2 << 1;
        }
      }
      *param_1 = iVar4;
      *(char *)(param_1 + 1) = (char)param_2;
    }
    return iVar1 * iVar5 * iVar2;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4001f198.
 * REA evidence: ev_82c1886118d826c12830122c79514eeac7c2ca20d1c6e3e78e97674d4738cb83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40024d98(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40024d06();
  return iVar1 * 10;
}


/* NanoCore 1.11, address 0x4001f19c.
 * REA evidence: ev_a9d72ad8d8a0f4ac6944d361541aa199133f40823a0553ff26363a9e9c012f68
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024dc6) */

int thunk_FUN_ram_40024dac(int param_1)

{
  if (param_1 < 0x3e9) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 1000;
  }
  return (param_1 * 0xa8c) / 1000;
}


/* NanoCore 1.11, address 0x4001f1a0.
 * REA evidence: ev_3d86d4e475fa71c2305fd6a3049fe7d84a8b7efe90a79211627354c77af7e7aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40024dd4(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  return param_1 * 10;
}


/* NanoCore 1.11, address 0x4001f1a4.
 * REA evidence: ev_b7fe26639d059803ae8f714a2fbdb41ebfccaf6ec27fd4da038d6c6d92d0d9aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024e0c) */

int thunk_FUN_ram_40024e1a(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40024d98(param_1,param_2,param_4);
  iVar2 = 100;
  if ((param_3 < 0x65) && (iVar2 = param_3, param_3 < 0)) {
    iVar2 = 0;
  }
  iVar1 = iVar1 + iVar2 * 10;
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  return (iVar1 * 100 + 500) / 1000;
}


/* NanoCore 1.11, address 0x4001f1a8.
 * REA evidence: ev_44364abbc256f8a2f95bb8e11da33c18e570d72e91b28d234435b4b0732e5993
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f1a8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_ram_40022428();
  uVar2 = 0x3006b430;
  if (iVar1 != 0) {
    uVar2 = 0x3006b470;
  }
  FUN_ram_40016e8a(_DAT_ram_3006b3dc,uVar2);
  return;
}


/* NanoCore 1.11, address 0x4001f1d2.
 * REA evidence: ev_75da6f3497b13415d2f5160f008db53fadf930ddc03a2dac518eed2d8a2f716f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f1d2(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_ram_40022516();
  FUN_ram_400055da(0x3006b384,0x10,&DAT_ram_400953c0,uVar1);
  FUN_ram_400177a6(_DAT_ram_3006b394,0x3006b398,0x3006b384);
  return;
}


/* NanoCore 1.11, address 0x4001f212.
 * REA evidence: ev_154998dcb8f07a60f3047e06ce6d841f9559a640d54ec64996c1036f0f6309bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f212(void)

{
  FUN_ram_400055da(0x3006b2e8,0x10,&DAT_ram_400955b4,&DAT_ram_400953c4);
  FUN_ram_400177a6(_DAT_ram_3006b2f8,0x3006b2fc,0x3006b2e8);
  return;
}


/* NanoCore 1.11, address 0x4001f254.
 * REA evidence: ev_a0a63193d673e5cc6e8619484b42465601cfbf1c4dd7ed286af508e1b22a27e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f254(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40022596();
  FUN_ram_400055da(0x3006b4fc,8,&DAT_ram_4009516c,uVar1);
  FUN_ram_400177a6(_DAT_ram_3006b504,0x3006b508,0x3006b4fc);
  return;
}


/* NanoCore 1.11, address 0x4001f294.
 * REA evidence: ev_427b476b95109567f571ec4259f8d2fb8fbfd575bc13cde1b06602344d0bba49
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f294(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4002260c();
  FUN_ram_400055da(0x3006b288,8,&DAT_ram_4009516c,uVar1);
  FUN_ram_400177a6(_DAT_ram_3006b290,0x3006b294,0x3006b288);
  return;
}


/* NanoCore 1.11, address 0x4001f2d4.
 * REA evidence: ev_40bc9aff343cf16e66d40b260a93dcf71c3dad13b79d57346dd2da8d24dfaa84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f2d4(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_400224bc();
  uVar2 = 0;
  if (uVar1 < 0x11) {
    uVar2 = uVar1;
  }
  FUN_ram_400055da(0x3006b404,8,&DAT_ram_4009516c,uVar2);
  FUN_ram_400177a6(_DAT_ram_3006b40c,0x3006b410,0x3006b404);
  return;
}


/* NanoCore 1.11, address 0x4001f31c.
 * REA evidence: ev_34874bcc165c47afa802778186e6a2e4a12f2fb923be3f245beb943cafebfd77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f31c(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = _DAT_ram_3006b2c0;
  bVar1 = _DAT_ram_3006b2c0 != 0;
  uVar5 = 0;
  if (_DAT_ram_3006b2c0 != 0) {
    uVar5 = FUN_ram_4002c37a();
  }
  uVar5 = uVar5 & 1;
  FUN_ram_40017936(_DAT_ram_3006b4b4,0x3006b4b8,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b3b8,0x3006b3bc,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b360,0x3006b364,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b394,0x3006b398,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b4d8,0x3006b4dc,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b504,0x3006b508,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b264,0x3006b268,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b290,0x3006b294,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b3e0,0x3006b3e4,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b40c,0x3006b410,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b2c4,0x3006b2c8,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b2f8,0x3006b2fc,bVar1);
  FUN_ram_4001792e(0x3006b4b8,uVar5);
  FUN_ram_4001792e(0x3006b3bc,uVar5);
  FUN_ram_4001792e(0x3006b364,uVar5);
  FUN_ram_4001792e(0x3006b398,uVar5);
  FUN_ram_4001792e(0x3006b4dc,uVar5);
  FUN_ram_4001792e(0x3006b508,uVar5);
  FUN_ram_4001792e(0x3006b268,uVar5);
  FUN_ram_4001792e(0x3006b294,uVar5);
  FUN_ram_4001792e(0x3006b3e4,uVar5);
  FUN_ram_4001792e(0x3006b410,uVar5);
  FUN_ram_4001792e(0x3006b2c8,uVar5);
  FUN_ram_4001792e(0x3006b2fc,uVar5);
  if (((((iVar2 != 0) && (_DAT_ram_3006b4b4 != 0)) && (_DAT_ram_3006b3b8 != 0)) &&
      (((_DAT_ram_3006b360 != 0 && (_DAT_ram_3006b394 != 0)) &&
       ((_DAT_ram_3006b4d8 != 0 && ((_DAT_ram_3006b504 != 0 && (_DAT_ram_3006b264 != 0)))))))) &&
     ((_DAT_ram_3006b290 != 0 &&
      ((((_DAT_ram_3006b3e0 != 0 && (_DAT_ram_3006b40c != 0)) && (_DAT_ram_3006b2c4 != 0)) &&
       (_DAT_ram_3006b2f8 != 0)))))) {
    FUN_ram_400489e6(_DAT_ram_3006b4b4,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b4b8);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b3b8,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b3bc);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b360,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b364);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b394,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b398);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b4d8,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b4dc);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b504,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b508);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b264,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b268);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b290,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b294);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b3e0,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b3e4);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b40c,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b410);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b2c4,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b2c8);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_400489e6(_DAT_ram_3006b2f8,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b2fc);
      if (iVar6 != 0) {
        FUN_ram_400489e6(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    FUN_ram_40044f70(_DAT_ram_3006b4b4,uVar3);
    FUN_ram_40045fc6(_DAT_ram_3006b4b4,_DAT_ram_3006b31c,0x14,8,0);
    FUN_ram_40017732(_DAT_ram_3006b4b4,0x3006b4b8);
    FUN_ram_40044f70(_DAT_ram_3006b3b8,uVar3);
    FUN_ram_40045fc6(_DAT_ram_3006b3b8,_DAT_ram_3006b3dc,0x11,0xfffffff8,0);
    FUN_ram_40017732(_DAT_ram_3006b3b8,0x3006b3bc);
    FUN_ram_40044f70(_DAT_ram_3006b360,uVar3);
    FUN_ram_40045fc6(_DAT_ram_3006b360,_DAT_ram_3006b394,0x11,0xfffffff8,0);
    FUN_ram_40017732(_DAT_ram_3006b360,0x3006b364);
    FUN_ram_40044faa(_DAT_ram_3006b394,0x2d,0x17);
    FUN_ram_40017732(_DAT_ram_3006b394,0x3006b398);
    FUN_ram_40044f70(_DAT_ram_3006b4d8,uVar3);
    FUN_ram_40045fc6(_DAT_ram_3006b4d8,_DAT_ram_3006b504,0x11,0xfffffff8,0);
    FUN_ram_40017732(_DAT_ram_3006b4d8,0x3006b4dc);
    FUN_ram_40044faa(_DAT_ram_3006b504,0x2d,0x17);
    FUN_ram_40017732(_DAT_ram_3006b504,0x3006b508);
    FUN_ram_40044f70(_DAT_ram_3006b264,uVar3);
    FUN_ram_40045fc6(_DAT_ram_3006b264,_DAT_ram_3006b290,0x11,0xfffffff8,0);
    FUN_ram_40017732(_DAT_ram_3006b264,0x3006b268);
    FUN_ram_40044faa(_DAT_ram_3006b290,0x2d,0x17);
    FUN_ram_40017732(_DAT_ram_3006b290,0x3006b294);
    FUN_ram_40044f70(_DAT_ram_3006b3e0,uVar3);
    FUN_ram_40045fc6(_DAT_ram_3006b3e0,_DAT_ram_3006b40c,0x11,0xfffffff8,0);
    FUN_ram_40017732(_DAT_ram_3006b3e0,0x3006b3e4);
    FUN_ram_40044faa(_DAT_ram_3006b40c,0x2d,0x17);
    FUN_ram_40017732(_DAT_ram_3006b40c,0x3006b410);
    FUN_ram_40044f70(_DAT_ram_3006b2c4,uVar3);
    FUN_ram_40045fc6(_DAT_ram_3006b2c4,_DAT_ram_3006b2f8,0x11,0xfffffff8,0);
    FUN_ram_40017732(_DAT_ram_3006b2c4,0x3006b2c8);
    FUN_ram_40044faa(_DAT_ram_3006b2f8,0x2d,0x17);
    FUN_ram_40017732(_DAT_ram_3006b2f8,0x3006b2fc);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001fa12.
 * REA evidence: ev_a58d7379644b321fd87d65d476312d3055335401de0ea1c5c87b133cccab91c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001fa12(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = FUN_ram_40016c6c();
  uVar1 = (undefined1)((uint)uVar2 >> 0x10);
  uStack_24 = (undefined2)uVar2;
  if (_DAT_ram_3006b394 != 0) {
    if ((DAT_ram_3006b2b8 == '\0') || (_DAT_ram_3006b2bc != 1)) {
      uStack_20 = CONCAT22(uStack_20._2_2_,uStack_24);
      uVar3 = uVar1;
    }
    else {
      uStack_20 = (uint)uStack_20._2_2_ << 0x10;
      uVar3 = 0xff;
    }
    uStack_20._0_3_ = CONCAT12(uVar3,(undefined2)uStack_20);
    FUN_ram_400489b6(_DAT_ram_3006b394,uStack_20,0);
  }
  if (_DAT_ram_3006b504 != 0) {
    if ((DAT_ram_3006b2b8 == '\0') || (_DAT_ram_3006b2bc != 2)) {
      uStack_1c = CONCAT22(uStack_1c._2_2_,uStack_24);
      uVar3 = uVar1;
    }
    else {
      uStack_1c = (uint)uStack_1c._2_2_ << 0x10;
      uVar3 = 0xff;
    }
    uStack_1c._0_3_ = CONCAT12(uVar3,(undefined2)uStack_1c);
    FUN_ram_400489b6(_DAT_ram_3006b504,uStack_1c,0);
  }
  if (_DAT_ram_3006b290 != 0) {
    if ((DAT_ram_3006b2b8 == '\0') || (_DAT_ram_3006b2bc != 3)) {
      uStack_18 = CONCAT22(uStack_18._2_2_,uStack_24);
      uVar3 = uVar1;
    }
    else {
      uStack_18 = (uint)uStack_18._2_2_ << 0x10;
      uVar3 = 0xff;
    }
    uStack_18._0_3_ = CONCAT12(uVar3,(undefined2)uStack_18);
    FUN_ram_400489b6(_DAT_ram_3006b290,uStack_18,0);
  }
  if (_DAT_ram_3006b40c != 0) {
    if ((DAT_ram_3006b2b8 == '\0') || (_DAT_ram_3006b2bc != 4)) {
      uStack_14 = CONCAT22(uStack_14._2_2_,uStack_24);
    }
    else {
      uStack_14 = (uint)uStack_14._2_2_ << 0x10;
      uVar1 = 0xff;
    }
    uStack_14._0_3_ = CONCAT12(uVar1,(undefined2)uStack_14);
    FUN_ram_400489b6(_DAT_ram_3006b40c,uStack_14,0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001fb40.
 * REA evidence: ev_9a7e1be379acfae228861a983aafc3776bbf28c2cc27c67af1cbc8b18c32e122
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001fb40(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_18;
  uint auStack_14 [2];
  
  uStack_18 = FUN_ram_40014984();
  iVar2 = FUN_ram_4002c4e4(2);
  iVar3 = FUN_ram_4002c502(2,auStack_14);
  if (iVar3 != 0) {
    uStack_18 = auStack_14[0];
  }
  uStack_18 = uStack_18 & 0xffffff;
  if (_DAT_ram_3006b2b4 != 0) {
    FUN_ram_400488da(_DAT_ram_3006b2b4,uStack_18,0);
    FUN_ram_400488f8(_DAT_ram_3006b2b4,0xff,0);
  }
  if (_DAT_ram_3006b220 != 0) {
    if (iVar2 == 0) {
      FUN_ram_40043fd6(_DAT_ram_3006b220,1);
    }
    else {
      FUN_ram_40016e8a(_DAT_ram_3006b220,0x3006b224);
    }
  }
  FUN_ram_40016e8a(_DAT_ram_3006b31c,0x3006b320);
  uVar1 = _DAT_ram_3006b4b4;
  uVar4 = FUN_ram_4002c834(1);
  FUN_ram_400177a6(uVar1,0x3006b4b8,uVar4);
  uVar1 = _DAT_ram_3006b3b8;
  uVar4 = FUN_ram_4002c834(0x16);
  FUN_ram_400177a6(uVar1,0x3006b3bc,uVar4);
  uVar1 = _DAT_ram_3006b360;
  uVar4 = FUN_ram_4002c834(0x17);
  FUN_ram_400177a6(uVar1,0x3006b364,uVar4);
  if (DAT_ram_3006b21c != '\0') {
    FUN_ram_4001f1a8();
  }
  FUN_ram_4001f1d2();
  uVar1 = _DAT_ram_3006b4d8;
  uVar4 = FUN_ram_4002c834(0x18);
  FUN_ram_400177a6(uVar1,0x3006b4dc,uVar4);
  FUN_ram_4001f254();
  uVar1 = _DAT_ram_3006b264;
  uVar4 = FUN_ram_4002c834(0x19);
  FUN_ram_400177a6(uVar1,0x3006b268,uVar4);
  FUN_ram_4001f294();
  uVar1 = _DAT_ram_3006b3e0;
  uVar4 = FUN_ram_4002c834(0x24);
  FUN_ram_400177a6(uVar1,0x3006b3e4,uVar4);
  FUN_ram_4001f2d4();
  uVar1 = _DAT_ram_3006b2c4;
  uVar4 = FUN_ram_4002c834(0x1a);
  FUN_ram_400177a6(uVar1,0x3006b2c8,uVar4);
  FUN_ram_4001f212();
  iVar2 = _DAT_ram_3006b2c0;
  if (_DAT_ram_3006b2c0 != 0) {
    _DAT_ram_3006b2c0 = 0;
    FUN_ram_4001f31c();
    FUN_ram_4005a1be(iVar2);
  }
  _DAT_ram_3006b2c0 = FUN_ram_40017ac2(s_font_settings_ram_400953cc,s_font_default_ram_40094fc4);
  FUN_ram_4001f31c();
  FUN_ram_4001fa12();
  return;
}


/* NanoCore 1.11, address 0x4001fcfe.
 * REA evidence: ev_112e5bb967d170f93b07bac540e3068bdc4d7cc98dfe58bec2dc8c419bf784bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001fcfe(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  switch(param_1) {
  case 0:
    piVar1 = (int *)&DAT_ram_3006b3dc;
    break;
  case 1:
    piVar1 = (int *)&DAT_ram_3006b394;
    break;
  case 2:
    piVar1 = (int *)&DAT_ram_3006b504;
    break;
  case 3:
    piVar1 = (int *)&DAT_ram_3006b290;
    break;
  case 4:
    piVar1 = (int *)&DAT_ram_3006b40c;
    break;
  case 5:
    piVar1 = (int *)&DAT_ram_3006b2f8;
    break;
  default:
    return 0;
  }
  if ((*piVar1 == 0) || (iVar2 = FUN_ram_40043b92(*piVar1,1), iVar2 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x4001fd72.
 * REA evidence: ev_3a319a2f9e231e39531688b209be85803b37e469978039daf80454638fd82031
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001fd72(void)

{
  int iVar1;
  int iVar2;
  undefined3 uVar3;
  int iVar4;
  
  iVar4 = FUN_ram_4001fcfe(_DAT_ram_3006b4b0);
  if ((iVar4 == 0) || (iVar2 = FUN_ram_40043b92(iVar4,1), iVar1 = _DAT_ram_3006b4b0, iVar2 != 0)) {
    iVar2 = 0;
    do {
      iVar4 = FUN_ram_4001fcfe(iVar2);
      iVar1 = iVar2;
      if (iVar4 != 0) break;
      iVar2 = iVar2 + 1;
      iVar1 = _DAT_ram_3006b4b0;
    } while (iVar2 != 6);
  }
  _DAT_ram_3006b4b0 = iVar1;
  if (_DAT_ram_3006b2b4 != 0) {
    FUN_ram_40045f80();
  }
  FUN_ram_40017d52(iVar4);
  uVar3 = FUN_ram_40016cb8(DAT_ram_3006b2b8);
  FUN_ram_40017ede(uVar3);
  FUN_ram_4001fa12();
  return;
}


/* NanoCore 1.11, address 0x4001fe00.
 * REA evidence: ev_3abe68e123e1aa486efacea12328d151f7e9a3ccb83faeade7e91929bed632ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001fe00(undefined4 param_1)

{
  DAT_ram_3006b21c = 0;
  _DAT_ram_3006b4b0 = 0;
  DAT_ram_3006b2b8 = 0;
  _DAT_ram_3006b2bc = 1;
  _DAT_ram_3006b220 = 0;
  _DAT_ram_3006b2c0 = 0;
  FUN_ram_40016c5e(0x3006b224,0x40,s_bg_settings_ram_400953f4);
  FUN_ram_40016c5e(0x3006b320,0x40,s_settings_ram_40095038);
  FUN_ram_40016c5e(0x3006b470,0x40,s_distortion_ram_4009565c + 8);
  FUN_ram_40016c5e(0x3006b430,0x40,s_bat_off_ram_4009728c + 4);
  _DAT_ram_3006b2b4 = FUN_ram_40043a8c(param_1);
  FUN_ram_40044faa(_DAT_ram_3006b2b4,0x140,0xf0);
  FUN_ram_400488f8(_DAT_ram_3006b2b4,0xff,0);
  FUN_ram_40048936(_DAT_ram_3006b2b4,0,0);
  FUN_ram_40043fd6(_DAT_ram_3006b2b4,1);
  _DAT_ram_3006b220 = FUN_ram_40056f7e(_DAT_ram_3006b2b4);
  FUN_ram_40057550(_DAT_ram_3006b220,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006b220,0,0);
  FUN_ram_40044faa(_DAT_ram_3006b220,0x140,0xf0);
  FUN_ram_40043fd6(_DAT_ram_3006b220,1);
  FUN_ram_40043aac(_DAT_ram_3006b220,0x10);
  FUN_ram_40043aac(_DAT_ram_3006b220,2);
  _DAT_ram_3006b31c = FUN_ram_40056f7e(_DAT_ram_3006b2b4);
  FUN_ram_40057550(_DAT_ram_3006b31c,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006b31c,8,8);
  FUN_ram_40044faa(_DAT_ram_3006b31c,0x26,0x26);
  _DAT_ram_3006b4b4 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b4b4,1);
  FUN_ram_40044faa(_DAT_ram_3006b4b4,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006b4b4,_DAT_ram_3006b31c,0x14,8,0);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b4b4,0x3006b4b8,1);
  _DAT_ram_3006b3dc = FUN_ram_40056f7e(_DAT_ram_3006b2b4);
  FUN_ram_40057550(_DAT_ram_3006b3dc,0xb);
  FUN_ram_40044faa(_DAT_ram_3006b3dc,0x2d,0x17);
  FUN_ram_40044f1c(_DAT_ram_3006b3dc,0xfb,0x3c);
  _DAT_ram_3006b3b8 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b3b8,1);
  FUN_ram_40044faa(_DAT_ram_3006b3b8,0xeb,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006b3b8,_DAT_ram_3006b3dc,0x11,0xfffffff8,0);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b3b8,0x3006b3bc,1);
  _DAT_ram_3006b394 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b394,1);
  FUN_ram_40044faa(_DAT_ram_3006b394,0x2d,0x17);
  FUN_ram_40044f1c(_DAT_ram_3006b394,0xfb,0x5b);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b394,0x3006b398,2);
  _DAT_ram_3006b360 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b360,1);
  FUN_ram_40044faa(_DAT_ram_3006b360,0xeb,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006b360,_DAT_ram_3006b394,0x11,0xfffffff8,0);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b360,0x3006b364,1);
  _DAT_ram_3006b504 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b504,1);
  FUN_ram_40044faa(_DAT_ram_3006b504,0x2d,0x17);
  FUN_ram_40044f1c(_DAT_ram_3006b504,0xfb,0x7a);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b504,0x3006b508,2);
  _DAT_ram_3006b4d8 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b4d8,1);
  FUN_ram_40044faa(_DAT_ram_3006b4d8,0xeb,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006b4d8,_DAT_ram_3006b504,0x11,0xfffffff8,0);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b4d8,0x3006b4dc,1);
  _DAT_ram_3006b290 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b290,1);
  FUN_ram_40044faa(_DAT_ram_3006b290,0x2d,0x17);
  FUN_ram_40044f1c(_DAT_ram_3006b290,0xfb,0x99);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b290,0x3006b294,2);
  _DAT_ram_3006b264 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b264,1);
  FUN_ram_40044faa(_DAT_ram_3006b264,0xeb,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006b264,_DAT_ram_3006b290,0x11,0xfffffff8,0);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b264,0x3006b268,1);
  _DAT_ram_3006b40c = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b40c,1);
  FUN_ram_40044faa(_DAT_ram_3006b40c,0x2d,0x17);
  FUN_ram_40044f1c(_DAT_ram_3006b40c,0xfb,0xb8);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b40c,0x3006b410,2);
  _DAT_ram_3006b3e0 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b3e0,1);
  FUN_ram_40044faa(_DAT_ram_3006b3e0,0xeb,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006b3e0,_DAT_ram_3006b40c,0x11,0xfffffff8,0);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b3e0,0x3006b3e4,1);
  _DAT_ram_3006b2f8 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b2f8,1);
  FUN_ram_40044faa(_DAT_ram_3006b2f8,0x2d,0x17);
  FUN_ram_40044f1c(_DAT_ram_3006b2f8,0xfb,0xd7);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b2f8,0x3006b2fc,2);
  _DAT_ram_3006b2c4 = FUN_ram_40057bac(_DAT_ram_3006b2b4);
  FUN_ram_4005826c(_DAT_ram_3006b2c4,1);
  FUN_ram_40044faa(_DAT_ram_3006b2c4,0xeb,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006b2c4,_DAT_ram_3006b2f8,0x11,0xfffffff8,0);
  FUN_ram_4001761e(_DAT_ram_3006b2b4,_DAT_ram_3006b2c4,0x3006b2c8,1);
  FUN_ram_4001fb40();
  return;
}


