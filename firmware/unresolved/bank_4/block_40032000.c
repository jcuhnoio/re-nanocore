/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40032000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40032142.
 * REA evidence: ev_6d12e8bbef7d82eb45f50dab86df30958b6b75f7b696e0208283611112952453
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40032142(int param_1)

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
LAB_ram_40032168:
        local_8[uVar2] = '\x01';
      }
      else {
        uVar2 = 0;
        do {
          if (local_8[uVar2] == '\0') {
            *pbVar1 = (byte)uVar2;
            goto LAB_ram_40032168;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
      }
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != (byte *)(param_1 + 0x1a));
  }
  return;
}


/* NanoCore 1.10, address 0x40032192.
 * REA evidence: ev_d68df13349b3f5a574eab9409b9374f1d466a78b01f41f536281a1c971bf7a5a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40032192(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  char cVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  char cStack_a4;
  byte bStack_a3;
  
  if (param_1 != (undefined2 *)0x0) {
    thunk_FUN_ram_40032142();
    *param_1 = param_2;
    if ((byte)(*(char *)((int)param_1 + 0x33f) - 0x1eU) < 8) {
      FUN_ram_40031d08(param_1);
    }
    puVar3 = param_1;
    do {
      FUN_ram_4000305c(&cStack_a4,puVar3 + 0xe,100);
      uVar1 = (uint)bStack_a3;
      if ((byte)(cStack_a4 - 1U) < 8) {
        if (cStack_a4 == '\a') {
          uVar1 = FUN_ram_40066f86();
          cVar2 = '\a';
        }
        else if (cStack_a4 == '\b') {
          uVar1 = FUN_ram_4006905e();
          cVar2 = '\b';
        }
        else if (cStack_a4 == '\x05') {
          uVar1 = FUN_ram_4005fbb6();
          cVar2 = '\x05';
        }
        else {
          cVar2 = cStack_a4;
          if (cStack_a4 == '\x06') {
            uVar1 = FUN_ram_400646f6();
            cVar2 = '\x06';
          }
        }
      }
      else {
        cVar2 = '\0';
      }
      bStack_a3 = (byte)uVar1;
      *(byte *)((int)puVar3 + 0x1d) = bStack_a3;
      uVar1 = FUN_ram_40031b64(cVar2,uVar1);
      if (0xc < uVar1) {
        uVar1 = 0xc;
      }
      memset(puVar3 + 0x10,0,0x60);
      *(char *)((int)puVar3 + 0x1f) = (char)uVar1;
      puVar5 = puVar3;
      for (uVar4 = 0; (uVar1 & 0xff) != uVar4; uVar4 = uVar4 + 1 & 0xff) {
        *(char *)(puVar5 + 0x10) = (char)uVar4;
        uVar6 = FUN_ram_40031de0(&cStack_a4,cVar2,uVar4);
        *(undefined4 *)(puVar5 + 0x12) = uVar6;
        puVar5 = puVar5 + 4;
      }
      puVar3 = puVar3 + 0x32;
    } while (puVar3 != param_1 + 400);
    cVar2 = -1;
    if (*(byte *)((int)param_1 + 0x81) < 8) {
      cVar2 = *(byte *)((int)param_1 + 0x81) + 0x1e;
    }
    *(char *)((int)param_1 + 0x33f) = cVar2;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400322ca.
 * REA evidence: ev_24e22ba4d5271c30f9657dfa2f041366acedcffaf04085ce17a2546b8dedef9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400322ca(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40036970();
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.10, address 0x400322e0.
 * REA evidence: ev_e6a04d86d22943591a8046a92da1bc8d36f8ac5b232f100b354617207a7f6538
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400322e0(uint *param_1,uint param_2,uint param_3)

{
  fence();
  fence();
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  return;
}


/* NanoCore 1.10, address 0x400322f4.
 * REA evidence: ev_4a0d0f7059df0ae0c8fe19ce218e0253d740f9442b1e4d52c4d7006f8f53fe60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400322f4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = _DAT_ram_3007b7f8;
  if (param_2 == 0) {
    piVar5 = *(int **)(param_1 + 0x24);
    iVar8 = **(int **)(param_1 + 0x20);
  }
  else {
    piVar5 = *(int **)(param_2 + 0xc);
    iVar8 = **(int **)(param_2 + 4);
  }
  iVar4 = *piVar5;
  *(int **)(_DAT_ram_3007b7f8 + 0x1c) = piVar5;
  *(int *)(iVar1 + 0x18) = param_1;
  *(int *)(iVar1 + 4) = iVar8;
  if (iVar4 == 2) {
    iVar4 = piVar5[1];
    puVar6 = &DAT_ram_400955f8;
  }
  else {
    if (iVar4 != 3) goto LAB_ram_4003232a;
    iVar4 = piVar5[1];
    puVar6 = &DAT_ram_40095618;
  }
  iVar4 = *(int *)(puVar6 + iVar4 * 4);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 8) = iVar8 * iVar4;
LAB_ram_4003232a:
  uVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 8);
  iVar8 = *(int *)(iVar1 + 0xc);
  for (uVar7 = uVar2; (iVar8 == 0 && (uVar7 < 360000000));
      uVar7 = (uint)((ulonglong)uVar7 * (ulonglong)uVar2)) {
    uVar7 = 2 << (uVar3 & 0x1f);
    uVar3 = uVar3 + 1;
    iVar8 = (int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20) +
            *(int *)(iVar1 + 0xc) * uVar7 + ((int)uVar7 >> 0x1f) * uVar2;
  }
  *(uint *)(iVar1 + 0x10) = uVar7;
  *(int *)(iVar1 + 0x14) = iVar8;
  return 0;
}


/* NanoCore 1.10, address 0x400323c8.
 * REA evidence: ev_6576dca72570c79ccf4741afa9eb388400d8f92ebf3b3cf1b11bdb064a5c024a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_400323c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = _DAT_ram_3007b7f8;
  piVar2 = (int *)_DAT_ram_3007b7f8[7];
  if (*piVar2 == 2) {
    FUN_ram_40037ab2(*_DAT_ram_3007b7f8,param_1,param_4,param_3);
  }
  if (*piVar2 == 3) {
    FUN_ram_40037bf8(*puVar1,param_1,param_4,param_3);
  }
  return 0;
}


/* NanoCore 1.10, address 0x4003241e.
 * REA evidence: ev_048efec0d85489c1522ab068b3b74cf2f53d5c7813fa2d33160eaf98ecf42719
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003241e(void)

{
  FUN_ram_400379b8(0x12);
  FUN_ram_40036a22(0x2d);
  FUN_ram_40036a22(0x47);
  return 0;
}


/* NanoCore 1.10, address 0x40032440.
 * REA evidence: ev_5a888814a2d5ce40db8e58729f38160e0070917e636df597c79471ac9682d6ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032440(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3007b7f8;
  uVar2 = *(undefined4 *)(_DAT_ram_3007b7f8 + 4);
  FUN_ram_40036b5c(6,*(undefined4 *)(_DAT_ram_3007b7f8 + 0x10));
  FUN_ram_40036a58(0x47,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10));
  FUN_ram_40036a58(0x46,uVar2,*(undefined4 *)(iVar1 + 8));
  FUN_ram_400369fe(6);
  FUN_ram_400369fe(0x47);
  FUN_ram_400369fe(0x2d);
  FUN_ram_400379f8(0x12);
  return 0;
}


/* NanoCore 1.10, address 0x4003249a.
 * REA evidence: ev_5060687570942f9c26b23f07e77d2d11288e407a16f46b3e53b0766c99220dde
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003249a(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_40005666(0x20);
  uVar2 = 0xfffffff4;
  if (puVar1 != (undefined4 *)0x0) {
    memset(puVar1 + 1,0,0x1c);
    *puVar1 = 0x18800000;
    uVar2 = 0;
    _DAT_ram_3007b7f8 = puVar1;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x400324d2.
 * REA evidence: ev_0e3bef270edb9a2b12b0b0947b3568f2afead1ea55a7c2311b52ae659765fe38
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40032558) */
/* WARNING: Removing unreachable block (ram,0x4003256c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400324d2(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = _DAT_ram_3007b7f8;
  puVar2 = (uint *)_DAT_ram_3007b7f8[7];
  FUN_ram_400322e0(*_DAT_ram_3007b7f8,0x30,(*puVar2 & 3) << 4);
  if (*puVar2 == 2) {
    FUN_ram_400322e0(*puVar1,0xf0000,(puVar2[1] & 0xf) << 0x10);
    if ((*(int *)(puVar1[7] + 8) != 0) || (*(int *)(puVar1[7] + 0xc) != 0)) {
      FUN_ram_40037a58(*puVar1);
    }
  }
  else if (*puVar2 == 3) {
    FUN_ram_400322e0(*puVar1,0x300000,(puVar2[1] / 3 & 3) << 0x14);
    FUN_ram_400322e0(*puVar1,0xf000000,puVar2[1] % 3 << 0x18);
    iVar4 = puVar1[7];
    puVar3 = *(undefined4 **)(iVar4 + 0x1c);
    if ((*(int *)(iVar4 + 8) != 0) || (*(int *)(iVar4 + 0xc) != 0)) {
      FUN_ram_40037b9e(*puVar1);
    }
    if (puVar3 != (undefined4 *)0x0) {
      FUN_ram_40037b2e(*puVar1,puVar3[3],puVar3[4],puVar3[5]);
      FUN_ram_40037b42(*puVar1,puVar3[2],puVar3[1],*puVar3);
    }
  }
  fence();
  fence();
  *(uint *)*puVar1 = *(uint *)*puVar1 | 1;
  return 0;
}


/* NanoCore 1.10, address 0x400325c2.
 * REA evidence: ev_8f40f4ee69659622f19deeaf1df0a8152bcc46fe7e30362cfcd6719ce1882dcd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400325c2(undefined4 param_1)

{
  FUN_ram_4000305c(param_1,_DAT_ram_3007b7fc + 0x374,0xc4);
  return 0;
}


/* NanoCore 1.10, address 0x400325e2.
 * REA evidence: ev_a072276c3092b287f795f4451ddeae88aba6e3d2be6ebf04c68688bd70e02a57
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400325e2(undefined4 param_1)

{
  FUN_ram_4000305c(param_1,_DAT_ram_3007b7fc + 0x340,0x34);
  return 0;
}


/* NanoCore 1.10, address 0x40032602.
 * REA evidence: ev_9cc193847069e17936fcdd15d393df07f5db86af440ea90e2216caf1ef7ed57b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032602(undefined4 param_1)

{
  FUN_ram_4000305c(param_1,_DAT_ram_3007b7fc + 0x330,0x10);
  return 0;
}


/* NanoCore 1.10, address 0x40032620.
 * REA evidence: ev_77d4599bfc797a2ee177f53a59d91b29b31eab6c1198bc8a81554436df8cf1d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032620(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = _DAT_ram_3007b7fc;
  iVar3 = *param_1;
  uVar2 = *_DAT_ram_3007b7fc;
  if (iVar3 != 0) {
    FUN_ram_40038526(uVar2,param_1 + 1,0);
    FUN_ram_40038526(*puVar1,param_1 + 0x11,1);
    FUN_ram_40038526(*puVar1,param_1 + 0x21,2);
    uVar2 = *puVar1;
  }
  FUN_ram_400384f4(uVar2,iVar3 != 0);
  FUN_ram_4000305c(puVar1 + 0xdd,param_1,0xc4);
  return 0;
}


/* NanoCore 1.10, address 0x4003267e.
 * REA evidence: ev_e7b4140d2fc434f4b3817bf8b2017646937a9f4aff9ba3603eb862091ce611a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003267e(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = _DAT_ram_3007b7fc;
  FUN_ram_40037f52(*_DAT_ram_3007b7fc,0);
  iVar3 = *param_1;
  uVar2 = *puVar1;
  if (iVar3 != 0) {
    FUN_ram_40038502(uVar2,param_1 + 1);
    uVar2 = *puVar1;
  }
  FUN_ram_400384e6(uVar2,iVar3 != 0);
  FUN_ram_4000305c(puVar1 + 0xd0,param_1,0x34);
  FUN_ram_40037f52(*puVar1,1);
  return 0;
}


/* NanoCore 1.10, address 0x400326d2.
 * REA evidence: ev_e6d0a7059ab06ea7ef615a55bdfe6f8ebe270d4e07472d0235e84d1162d085fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400326d2(void)

{
  FUN_ram_40038436(*_DAT_ram_3007b7fc,0);
  return 0;
}


/* NanoCore 1.10, address 0x400326ee.
 * REA evidence: ev_1f7bc5667864e08299bb5fa517eece13e48bf80b8610a98d93678301c5184b55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400326ee(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = _DAT_ram_3007b7fc;
  uVar2 = FUN_ram_4003841e(*_DAT_ram_3007b7fc);
  FUN_ram_4003842a(*puVar1,uVar2);
  if ((uVar2 & 1) != 0) {
    FUN_ram_400406ee(puVar1[0x10f],0);
    if ((code *)puVar1[0x112] != (code *)0x0) {
      (*(code *)puVar1[0x112])(puVar1[0x113]);
    }
  }
  if ((puVar1[0x111] & 0x10) != 0) {
    puVar1[0x111] = puVar1[0x111] & 0xf;
    FUN_ram_40038344(*puVar1);
  }
  return 1;
}


/* NanoCore 1.10, address 0x4003274a.
 * REA evidence: ev_9da4e5f720be79eaf323cf3d117bc67115d337f3b7176f183e5c932193eec84f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003274a(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = _DAT_ram_3007b7fc;
  iVar2 = _DAT_ram_3007b7fc[0x10e];
  uVar3 = *(undefined4 *)(iVar2 + 4);
  uVar4 = *(undefined4 *)(iVar2 + 0x14);
  FUN_ram_40038448(*_DAT_ram_3007b7fc,uVar3,uVar4,*(undefined4 *)(iVar2 + 8),
                   *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x18),
                   *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x10),
                   *(undefined4 *)(iVar2 + 0x20),(*(uint *)(iVar2 + 0x24) & 3) >> 1,
                   (*(uint *)(iVar2 + 0x24) & 0xf) >> 3);
  FUN_ram_400384ca(*puVar1,uVar3,uVar4);
  FUN_ram_4003821c(*puVar1,uVar3,uVar4,0,0);
  FUN_ram_40038344(*puVar1,0);
  FUN_ram_40037f2c(*puVar1,2);
  FUN_ram_40037f40(*puVar1,1);
  FUN_ram_40038030(*puVar1);
  FUN_ram_40037fae(*puVar1,0);
  if (puVar1[2] != 0) {
    FUN_ram_40037f5c(*puVar1,puVar1[3],puVar1[4],puVar1[5]);
  }
  if (puVar1[0xc3] == 0) {
    puVar1[0xc2] = 1;
    puVar1[0xc4] = 0;
    puVar1[0xc3] = 1;
    puVar1[0xc5] = 0;
  }
  FUN_ram_4003824e(*puVar1,0);
  FUN_ram_40038264(*puVar1,puVar1[0xc5],puVar1[0xc4],puVar1[0xc3]);
  FUN_ram_4003ec9e(0x3b,FUN_ram_400326ee,0);
  FUN_ram_4003ec56(0x3b);
  FUN_ram_4003840c(*puVar1,1,1);
  FUN_ram_4003840c(*puVar1,1,4);
  FUN_ram_40032620(puVar1 + 0xdd);
  FUN_ram_4003267e(puVar1 + 0xd0);
  FUN_ram_40038436(*puVar1,1);
  return 0;
}


/* NanoCore 1.10, address 0x40032868.
 * REA evidence: ev_4d14e579f179e919436af658c105eba73fca2135a890019057a7fc55587de6b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40032868(void)

{
  FUN_ram_400379b8(0x15);
  FUN_ram_40036a22(0x31);
  FUN_ram_40036a22(0x46);
  return 0;
}


/* NanoCore 1.10, address 0x4003288a.
 * REA evidence: ev_fa36a44f6b4a8664160951a8eda666fd9b646c65279ca0bd5c2ef7c270d7d10d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003288a(void)

{
  FUN_ram_400369fe(0x31);
  FUN_ram_400369fe(0x46);
  FUN_ram_40036b5c(0x31,150000000);
  FUN_ram_400379f8(0x15);
  return 0;
}


/* NanoCore 1.10, address 0x400328bc.
 * REA evidence: ev_05fc1618bb412db5dc65c8998a0d507aaccc258d2cc44a77544d0bdd5481a16e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400328bc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = _DAT_ram_3007b7fc;
  if (param_2 == 0) {
    puVar5 = *(uint **)(param_1 + 0x20);
  }
  else {
    puVar5 = *(uint **)(param_2 + 4);
  }
  uVar2 = puVar5[6];
  uVar6 = puVar5[5];
  uVar8 = puVar5[1];
  uVar9 = puVar5[3];
  uVar3 = puVar5[7];
  *(uint **)(_DAT_ram_3007b7fc + 0x438) = puVar5;
  uVar3 = uVar6 + uVar2 + uVar3 + puVar5[8];
  uVar2 = puVar5[2] + uVar8 + uVar9 + puVar5[4];
  if (uVar2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar5 / uVar2;
  }
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / uVar3;
  }
  if (uVar2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1000000 / uVar2;
  }
  iVar4 = 1;
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / uVar3;
  }
  for (; uVar2 < 0x1e; uVar2 = uVar2 << 1) {
    iVar4 = iVar4 + 1;
  }
  *(uint *)(iVar1 + 0x440) = (uVar3 - 1) - iVar4;
  iVar4 = 0;
  if (0x556 < uVar8) {
    memset((void *)(iVar1 + 8),0,0x10);
    return 0xffffffff;
  }
  do {
    if ((&DAT_ram_4009567c)[iVar4 * 2] == 0xe) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x14);
  if (((param_4 == 0) || (*(uint *)(iVar4 * 8 + 0x40095680) < 0x18)) || (param_3 == 0x18)) {
LAB_ram_40032954:
    memset((void *)(iVar1 + 8),0,0x10);
  }
  else {
    if (param_3 == 0x10) {
      uVar7 = 5;
      *(undefined4 *)(iVar1 + 0xc) = 5;
      *(undefined4 *)(iVar1 + 0x10) = 6;
    }
    else {
      if (param_3 != 0x12) goto LAB_ram_40032954;
      uVar7 = 6;
      *(undefined4 *)(iVar1 + 0xc) = 6;
      *(undefined4 *)(iVar1 + 0x10) = 6;
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar7;
    *(undefined4 *)(iVar1 + 8) = 1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400329a6.
 * REA evidence: ev_6a388afbd520f67e20c571000adee7ee8ef6794aa124455f2b00a44ded4d1a6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400329a6(void)

{
  undefined4 *__s;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __s = (undefined4 *)FUN_ram_40005666(0x450);
  uVar2 = 0xfffffff4;
  if (__s != (undefined4 *)0x0) {
    memset(__s,0,0x450);
    *__s = 0x18a00000;
    __s[1] = &PTR_DAT_ram_4009571c_ram_4009564c;
    puVar1 = (undefined4 *)FUN_ram_40005666(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[2] = puVar1 + 1;
      puVar1[1] = puVar1 + 1;
    }
    __s[0x10f] = puVar1;
    __s[0xcc] = 0x32;
    __s[0xcd] = 0x32;
    __s[0xce] = 0x32;
    __s[0xcf] = 0x32;
    __s[0xd0] = 1;
    FUN_ram_4000305c(__s + 0xd1,&DAT_ram_30046840,0x30);
    __s[0xdd] = 1;
    FUN_ram_4000305c(__s + 0xde,&DAT_ram_30046870,0xc0);
    uVar2 = 0;
    _DAT_ram_3007b7fc = __s;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40032a48.
 * REA evidence: ev_a335a8583fe6fdba03a04719b5ffce9fd1b37d82c7217225b75fb68a4999dde1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40032a48(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004076e(*(undefined4 *)(_DAT_ram_3007b7fc + 0x43c),0,100);
  if (0 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40032a6e.
 * REA evidence: ev_c3572c44523809b0ade3b2a1c732d6fb43a6d846543c25662ae22af8c0123596
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40032a6e(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  if (param_2 < (uint)(*piVar1 + piVar1[1])) {
    return (*(uint *)((*(int **)(param_1 + 4))[1] + param_2 * 0x14 + 0x10) & 7) >> 2;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40032a90.
 * REA evidence: ev_1dbbe140c9beb2d8b8a7ca9776cda8f5ce1aabd7f73d23e7c5f391999939380d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032a90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_3007b7fc;
  iVar2 = *param_1;
  iVar3 = FUN_ram_40032a6e(_DAT_ram_3007b7fc,iVar2);
  if (iVar3 == 0) {
    uVar4 = 0xffffffea;
  }
  else {
    iVar3 = (iVar2 + 0x2f) * 0x10;
    *(int *)(iVar1 + iVar3 + 8) = iVar2;
    FUN_ram_4000305c(param_1,iVar3 + 8 + iVar1,0x10);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x40032adc.
 * REA evidence: ev_bcde995546f99a4ce8357beaeefe088b5e648c9ef74cc556404dfd7d09845d75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032adc(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = _DAT_ram_3007b7fc;
  iVar2 = FUN_ram_40032a6e(_DAT_ram_3007b7fc,*param_1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    FUN_ram_40037f52(*puVar1,0);
    FUN_ram_40038264(*puVar1,param_1[3],param_1[2],param_1[1]);
    FUN_ram_40037f52(*puVar1,1);
    FUN_ram_4000305c(puVar1 + *param_1 * 4 + 0xbe,param_1,0x10);
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40032b36.
 * REA evidence: ev_ea0375f6db4ebdf4a88a1c70c9383a65f98d422078d21f93723452e895983fce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032b36(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = _DAT_ram_3007b7fc;
  FUN_ram_40037f52(*_DAT_ram_3007b7fc,0);
  if ((((*param_1 != puVar1[0xcc]) || (param_1[1] != puVar1[0xcd])) || (param_1[2] != puVar1[0xce]))
     || (puVar1[0xcf] != param_1[3])) {
    if (((*param_1 == 0x32) && (param_1[1] == 0x32)) &&
       ((param_1[2] == 0x32 && (param_1[3] == 0x32)))) {
      FUN_ram_4003818a(*puVar1,puVar1[0x1c] & 3);
    }
    else {
      FUN_ram_400381e4();
    }
  }
  FUN_ram_40037f52(*puVar1,1);
  FUN_ram_4000305c(puVar1 + 0xcc,param_1,0x10);
  return 0;
}


/* NanoCore 1.10, address 0x40032bbc.
 * REA evidence: ev_0b3fb62c287f6ff97de34793db6853d9abecf6edc4d8016472211a7babdb774d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40032bbc(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 4);
  if (param_2 < (uint)(*piVar2 + piVar2[1])) {
    bVar1 = true;
    if (((*(uint *)((*(int **)(param_1 + 4))[1] + param_2 * 0x14 + 0x10) & 2) != 0) &&
       (param_2 != 0)) {
      return param_3 < 4;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x40032be6.
 * REA evidence: ev_82351b155e90a46c0e08dc738757376b5e1c3bcba843dd3cbba7405f37aa7500
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032be6(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = _DAT_ram_3007b7fc;
  iVar5 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = FUN_ram_40032bbc(_DAT_ram_3007b7fc,iVar6,iVar5);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    iVar4 = (iVar5 + iVar6 * 4) * 0x5c;
    iVar2 = iVar1 + iVar4;
    *(int *)(iVar2 + 0x1c) = iVar6;
    *(int *)(iVar2 + 0x20) = iVar5;
    FUN_ram_4000305c(param_1,iVar4 + 0x18 + iVar1,0x5c);
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40032c4c.
 * REA evidence: ev_0fd8fb88a15c13db9ddf8d4dcef02b6cbe1ebce27499b0258b916594ef0c0804
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40032c4c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2[2];
  iVar3 = param_2[1];
  iVar1 = FUN_ram_40032bbc();
  if (iVar1 != 0) {
    iVar5 = iVar3 * 4;
    iVar1 = *(int *)(*(int *)(param_1[1] + 4) + iVar3 * 0x14 + 4);
    if (*param_2 == 0) {
      param_1[(iVar5 + iVar4) * 0x17 + 6] = 0;
      if (iVar1 == 1) {
        FUN_ram_40033062(param_1);
      }
      else {
        FUN_ram_40038178(*param_1,0);
      }
      return 0;
    }
    if (iVar1 == 1) {
      iVar5 = iVar5 + iVar4;
      iVar1 = FUN_ram_40032f84(param_1,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_ram_40033096(param_1,param_2);
        if (iVar1 == 0) goto LAB_ram_40032cf6;
      }
    }
    else {
      iVar1 = FUN_ram_400331ba(param_1,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_ram_4003322c(param_1,param_2);
        if (iVar1 != 0) {
          uVar2 = *param_1;
          param_1[iVar3 * 0x5c + 6] = 0;
          FUN_ram_40038178(uVar2,0);
          return iVar1;
        }
LAB_ram_40032cf6:
        FUN_ram_4000305c(param_1 + iVar5 * 0x17 + 6,param_2,0x5c);
        return 0;
      }
      uVar2 = *param_1;
      param_1[iVar3 * 0x5c + 6] = 0;
      FUN_ram_40038178(uVar2,0);
    }
  }
  return -0x16;
}


/* NanoCore 1.10, address 0x40032d30.
 * REA evidence: ev_12f654aa478074441ee162987eccb36cd31b86601ff1d3c5032d1da7a108702c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40032d30(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar1 = _DAT_ram_3007b7fc;
  FUN_ram_40037f52(*_DAT_ram_3007b7fc,0);
  puVar5 = param_1 + 2;
  uVar2 = *param_1;
  for (uVar4 = 0; uVar4 != uVar2; uVar4 = uVar4 + 1) {
    if (*(int *)(*(int *)(puVar1[1] + 4) + *puVar5 * 0x14 + 4) == 1) {
      puVar1[(puVar5[1] + *puVar5 * 4) * 0x17 + 6] = 0;
    }
    puVar5 = puVar5 + 0x17;
  }
  puVar5 = param_1 + 1;
  uVar2 = 0;
  while( true ) {
    if (*param_1 <= uVar2) {
      FUN_ram_40037f52(*puVar1,1);
      return 0;
    }
    iVar3 = FUN_ram_40032c4c(puVar1,puVar5);
    puVar5 = puVar5 + 0x17;
    if (iVar3 != 0) break;
    uVar2 = uVar2 + 1;
  }
  return iVar3;
}


/* NanoCore 1.10, address 0x40032dc2.
 * REA evidence: ev_e197b1a3bd3c1f67000e77a8151ab2289c59e7272bdbe975635bb44b8ff751af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032dc2(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar2 = _DAT_ram_3007b7fc;
  uVar3 = FUN_ram_400002f4();
  fence();
  if (*(uint *)(*piVar2 + 500) < (uint)piVar2[0x110]) {
    bVar1 = true;
    if (2 < *(uint *)(*piVar2 + 500)) goto LAB_ram_40032e0a;
  }
  FUN_ram_400002fa(uVar3);
  FUN_ram_4003f052(1000);
  bVar1 = false;
LAB_ram_40032e0a:
  FUN_ram_40037f52(*piVar2,0);
  uVar4 = FUN_ram_40032c4c(piVar2,param_1);
  FUN_ram_40037f52(*piVar2,1);
  if (bVar1) {
    FUN_ram_400002fa(uVar3);
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x40032e3e.
 * REA evidence: ev_2c0359ac3d56edca25c2120d8c1b71501572ed13d6d7832e8867ab5be62492bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40032e3e(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  if (param_2 < (uint)(*piVar1 + piVar1[1])) {
    return (*(uint *)((*(int **)(param_1 + 4))[1] + param_2 * 0x14 + 0x10) & 0xf) >> 3;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40032e60.
 * REA evidence: ev_00acd036348b9708bfe1e056a97ed72e332c6f51f4fd6c1db793d7a35c389749
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032e60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_3007b7fc;
  iVar2 = *param_1;
  iVar3 = FUN_ram_40032e3e(_DAT_ram_3007b7fc,iVar2);
  if (iVar3 == 0) {
    uVar4 = 0xffffffea;
  }
  else {
    *(int *)(iVar1 + iVar2 * 0xc + 0x318) = iVar2;
    FUN_ram_4000305c(param_1,iVar2 * 0xc + 0x318 + iVar1,0xc);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x40032eae.
 * REA evidence: ev_24b19ff654991266bd0073e1d481f33af7f06a88d1b9d5847304c8f5487b798b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032eae(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = _DAT_ram_3007b7fc;
  iVar2 = FUN_ram_40032e3e(_DAT_ram_3007b7fc,*param_1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar3 = 0xffffffea;
    if ((uint)param_1[1] < 2) {
      FUN_ram_40037f52(*puVar1,0);
      FUN_ram_4003829e(*puVar1,param_1[2],param_1[1]);
      FUN_ram_40037f52(*puVar1,1);
      FUN_ram_4000305c(puVar1 + *param_1 * 3 + 0xc6,param_1,0xc);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40032f12.
 * REA evidence: ev_31865aac6ac63ec74fce669bbc17962dabd1f3ca5068604c392bbd117a6db06a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40032f12(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  param_1 = param_1 + param_2 * 0x170;
  iVar6 = 0;
  do {
    if ((iVar6 != param_3) && (*(int *)(param_1 + 0x18) != 0)) {
      if (*(int *)(param_1 + 0x58) == 0) {
        iVar2 = *(int *)(param_1 + 0x50);
        iVar4 = *(int *)(param_1 + 0x54);
      }
      else {
        iVar2 = *(int *)(param_1 + 100);
        iVar4 = *(int *)(param_1 + 0x68);
      }
      uVar5 = *(uint *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x2c);
      uVar3 = iVar4 + uVar5;
      if (param_7 + param_5 <= iVar4 + uVar5) {
        uVar3 = param_7 + param_5;
      }
      if (uVar5 < param_5) {
        uVar5 = param_5;
      }
      if (uVar5 < uVar3) {
        uVar3 = iVar2 + uVar1;
        if (param_6 + param_4 <= iVar2 + uVar1) {
          uVar3 = param_6 + param_4;
        }
        if (uVar1 < param_4) {
          uVar1 = param_4;
        }
        if (uVar1 < uVar3) {
          return 1;
        }
      }
    }
    iVar6 = iVar6 + 1;
    param_1 = param_1 + 0x5c;
    if (iVar6 == 4) {
      return 0;
    }
  } while( true );
}


/* NanoCore 1.10, address 0x40032f84.
 * REA evidence: ev_efc22fb4dcc8a034ae5e7d98766dce54e59facf2b9b51077df6f8f018b446081
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_40032f84(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  uVar7 = *(uint *)(*(int *)(param_1 + 0x438) + 4);
  if (uVar4 < uVar7) {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x438) + 0x14);
    uVar5 = *(uint *)(param_2 + 0x18);
    if (uVar5 < uVar3) {
      uVar1 = *(uint *)(param_2 + 0x38);
      uVar9 = *(uint *)(param_2 + 0x3c);
      if (*(int *)(param_2 + 0x40) == 0) {
        if (uVar7 < uVar1 + uVar4) {
          *(uint *)(param_2 + 0x38) = uVar7 - uVar4;
        }
        if (uVar3 < uVar9 + uVar5) {
          *(uint *)(param_2 + 0x3c) = uVar3 - uVar5;
        }
        uVar6 = *(undefined4 *)(param_2 + 0x38);
        uVar8 = *(undefined4 *)(param_2 + 0x3c);
      }
      else {
        uVar11 = *(uint *)(param_2 + 0x44);
        if (uVar1 <= uVar11) {
          return 0;
        }
        uVar10 = *(uint *)(param_2 + 0x48);
        if (uVar9 <= uVar10) {
          return 0;
        }
        if (uVar1 < *(int *)(param_2 + 0x4c) + uVar11) {
          *(uint *)(param_2 + 0x4c) = uVar1 - uVar11;
        }
        if (uVar9 < *(int *)(param_2 + 0x50) + uVar10) {
          *(uint *)(param_2 + 0x50) = uVar9 - uVar10;
        }
        if (uVar7 < *(int *)(param_2 + 0x4c) + uVar4) {
          *(uint *)(param_2 + 0x4c) = uVar7 - uVar4;
        }
        if (uVar3 < *(int *)(param_2 + 0x50) + uVar5) {
          *(uint *)(param_2 + 0x50) = uVar3 - uVar5;
        }
        uVar6 = *(undefined4 *)(param_2 + 0x4c);
        uVar8 = *(undefined4 *)(param_2 + 0x50);
      }
      bVar2 = FUN_ram_40032f12(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                               uVar4,uVar5,uVar6,uVar8);
      return bVar2 ^ 1;
    }
  }
  return 0;
}


