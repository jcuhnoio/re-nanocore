/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40039000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003901c.
 * REA evidence: ev_d656e75a4f6a580efa9921f22f713aa3d4270885569b00471e160f1594c8c70a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003901c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0x60) = (param_3 & 0xff) << 0x10 | param_2 & 0xff;
  fence();
  *(uint *)(param_1 + 100) = (param_5 & 0xff) << 0x10 | param_4 & 0xff;
  return;
}


/* NanoCore 1.11, address 0x4003904a.
 * REA evidence: ev_533dcb7992f460d7d1d6cc09b81ecd1d911160e94d60b2f49c6cf4feffae853a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003904a(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1 + 0x20,1);
    return;
  }
  FUN_ram_40038b46(param_1 + 0x20,1);
  return;
}


/* NanoCore 1.11, address 0x4003905c.
 * REA evidence: ev_59cde2e57c08291207c95744858da2384aa3f6280f1d62aab0384c01f39ee3e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003905c(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_ram_3004aa7c;
  if (param_2 - 1U < 3) {
    puVar4 = (undefined4 *)(&PTR_DAT_ram_3004aadc_ram_40097af8)[param_2 - 1U];
  }
  puVar2 = (uint *)(param_1 + 0x70);
  uVar3 = 0;
  do {
    if (((uVar3 & 0xfffffffb) == 3) || (uVar3 == 0xb)) {
      fence();
      uVar1 = 0x3fff;
    }
    else {
      fence();
      uVar1 = 0x1fff;
    }
    *puVar2 = puVar4[uVar3] & uVar1;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 != 0xc);
  return;
}


/* NanoCore 1.11, address 0x400390b6.
 * REA evidence: ev_58b71922cea637d85caa04edf559fc901dfc1f40b39bfd84f3824e85690f988a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400390b6(int param_1)

{
  int iVar1;
  undefined4 local_40 [14];
  
  FUN_ram_40038ba6(0);
  iVar1 = 0;
  do {
    fence();
    *(undefined4 *)(param_1 + 0x70 + iVar1) = *(undefined4 *)((int)local_40 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  return 0;
}


/* NanoCore 1.11, address 0x400390ee.
 * REA evidence: ev_781fb905924b812a6f87893ed29fd9d05acb79ca17d725b58aa58a28fc5c2bfb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400390ee(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0xa4) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x10c) = (param_5 & 0x1fff) << 0x10 | param_4 & 0x1fff;
  return;
}


/* NanoCore 1.11, address 0x40039120.
 * REA evidence: ev_0774c9d3fe4612f2d4b3b03d3db902f536f2147337d23692bb82e3bab0188531
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039120(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1 + 0xa0,0x200000);
    return;
  }
  FUN_ram_40038b46(param_1 + 0xa0,0x200000);
  return;
}


/* NanoCore 1.11, address 0x40039136.
 * REA evidence: ev_f89c29902fec5e0a3921d0bd1f3dca8e3cb7d1848d627e371933fd9148237731
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039136(int param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 != 0) {
    FUN_ram_40038b5a(param_1 + 0xa0,0xffc00004,(param_3 & 3) << 0x16 | param_2 << 0x18 | 4);
    return;
  }
  FUN_ram_40038b46(param_1 + 0xa0,4);
  return;
}


/* NanoCore 1.11, address 0x4003915c.
 * REA evidence: ev_e27be8d9a7b43d9a17ec6ceda456971cc2b426f10ff15cf1c96ebee5128ca0d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003915c(int param_1,uint param_2)

{
  FUN_ram_40038b5a(param_1 + 0xa0,0x7f00,(param_2 & 0x7f) << 8);
  return;
}


/* NanoCore 1.11, address 0x40039170.
 * REA evidence: ev_67c28c16c18788b7080b016ff91a0b3143add686a2854e382079b6e61875d077
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039170(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    fence();
    *(uint *)(param_1 + 0xac) = param_2 & 0xffffff;
    FUN_ram_40038b6e(param_1 + 0xa0,2);
    return;
  }
  FUN_ram_40038b46(param_1 + 0xa0,2);
  return;
}


/* NanoCore 1.11, address 0x40039196.
 * REA evidence: ev_55e3dacd1237a12481228a0a3b695f875aa7a03a9176d8085d1284a68d20b4e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039196(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     undefined4 param_7,int param_8)

{
  int iVar1;
  
  iVar1 = (param_8 + 0xc) * 0x10;
  fence();
  *(uint *)(param_1 + iVar1) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(iVar1 + 4 + param_1) = (param_5 & 0x1fff) << 0x10 | param_4 & 0x1fff;
  fence();
  *(uint *)(iVar1 + 8 + param_1) = param_6 & 0x7fff;
  fence();
  *(undefined4 *)(iVar1 + 0xc + param_1) = param_7;
  return;
}


/* NanoCore 1.11, address 0x400391f0.
 * REA evidence: ev_ed975debb3f6a02c142e85c45cc2441c89a74a2b421cedc07a30ed2643a89ce3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400391f0(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1 + 0xa0,1);
    return;
  }
  FUN_ram_40038b46(param_1 + 0xa0,1);
  return;
}


/* NanoCore 1.11, address 0x40039202.
 * REA evidence: ev_73afbe03c0bf446eb152678296b36c9d7ee33b406424d8e1fccc5de0acbae099
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039202(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_ram_40038b6e();
    return;
  }
  FUN_ram_40038b46(param_1 + 0xb0,1 << (param_2 & 0x1f));
  return;
}


/* NanoCore 1.11, address 0x40039216.
 * REA evidence: ev_ad09b2f34d83fb3d3eea8abf4632afcfab889a2ac9e18c4cad3ddb0907ce2b61
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039216(void)

{
  return;
}


/* NanoCore 1.11, address 0x40039218.
 * REA evidence: ev_cefb138b7b708803a9558ec77ba26d319bf7358ceb5cf4df05eaad1e7f556850
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039218(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (param_2 << 0x10) / param_4;
  }
  if (param_5 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)(param_3 << 0x10) / param_5;
  }
  uVar4 = uVar2 >> 1;
  if (0xffff < uVar2) {
    uVar4 = uVar4 - 0x8000;
  }
  uVar1 = uVar3 >> 1;
  if (0xffff < uVar3) {
    uVar1 = uVar1 - 0x8000;
  }
  param_6 = param_6 * 0x20;
  fence();
  *(uint *)(param_6 + 0x130 + param_1) = param_3 << 0x10 & 0x1fff0000U | param_2 & 0x1fff;
  fence();
  *(uint *)(param_6 + 0x134 + param_1) = (param_5 & 0x1fff) << 0x10 | param_4 & 0x1fff;
  fence();
  *(uint *)(param_6 + 0x138 + param_1) = uVar4 & 0xfffff;
  fence();
  *(uint *)(param_6 + 0x13c + param_1) = uVar2 & 0x1fffff;
  fence();
  *(uint *)(param_6 + 0x140 + param_1) = uVar1 & 0xfffff;
  fence();
  *(uint *)(param_6 + 0x144 + param_1) = uVar3 & 0x1fffff;
  return;
}


/* NanoCore 1.11, address 0x400392cc.
 * REA evidence: ev_623c10e48f26b44d4149012752be56e52fe846ab85efa48b457de5226d8bbb52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400392cc(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1 + 0x120,1);
    return;
  }
  FUN_ram_40038b46(param_1 + 0x120,1);
  return;
}


/* NanoCore 1.11, address 0x400392de.
 * REA evidence: ev_696cb3654d7e90e673247ef965c71dccfa650ef60c195156c9ba3fa95e2bde47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400392de(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1 + 0x1d4,param_3);
    return;
  }
  FUN_ram_40038b46(param_1 + 0x1d4,param_3);
  return;
}


/* NanoCore 1.11, address 0x400392f0.
 * REA evidence: ev_0c0897f8702f08b26568ed0b888b5a25b21ff2df29283f15a55cb12195996a03
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400392f0(int param_1)

{
  fence();
  return *(undefined4 *)(param_1 + 0x1d8);
}


/* NanoCore 1.11, address 0x400392fc.
 * REA evidence: ev_7ccdbab02f76f06a49361eb99a4cc0df0114f725161b67129ab4b8ace8234ef6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400392fc(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x1d8) = param_2;
  return;
}


/* NanoCore 1.11, address 0x40039308.
 * REA evidence: ev_21f85800ac7936de232d8f0dd18ed85c774d78b8db4012d5b7365b599752a97b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039308(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1 + 0x1d0,1);
    return;
  }
  FUN_ram_40038b46(param_1 + 0x1d0,1);
  return;
}


/* NanoCore 1.11, address 0x4003931a.
 * REA evidence: ev_d597ca767632876b4a4c68dd2d1700dd140c015c595eb8d5b7b8f5872431efe5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003931a(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint param_8,uint param_9,uint param_10,uint param_11)

{
  fence();
  *(uint *)(param_1 + 0x1e0) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x1e4) = (param_5 & 0x1fff) << 0x10 | param_4 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x1e8) = (param_7 & 0x1fff) << 0x10 | param_6 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x1ec) = (param_9 & 0x7ff) << 0x10 | param_8 & 0x7ff;
  fence();
  *(uint *)(param_1 + 0x1f0) = (param_11 & 1) << 1 | param_10 & 1;
  return;
}


/* NanoCore 1.11, address 0x4003939c.
 * REA evidence: ev_9cdf8461d4d8385db56b1d42cd8e466beb752012ea21cae84e756615804f0980
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003939c(int param_1,uint param_2,uint param_3)

{
  fence();
  *(uint *)(param_1 + 0x104) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  return;
}


/* NanoCore 1.11, address 0x400393b8.
 * REA evidence: ev_aeb3196a6e9b9b98bd51bddcde6a8a0d38ac5fac1be7eee9f49339725a14ebd1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400393b8(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1,4);
    return;
  }
  FUN_ram_40038b46(param_1,4);
  return;
}


/* NanoCore 1.11, address 0x400393c6.
 * REA evidence: ev_85007d6edff24c7c88954c29565848078c5fc676127599a09a7894db01124291
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400393c6(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1,2);
    return;
  }
  FUN_ram_40038b46(param_1,2);
  return;
}


/* NanoCore 1.11, address 0x400393d4.
 * REA evidence: ev_d41a31a23b63cc33bd1dc608a05cdbbb74e6b3aab7576057a44ef5d0bdb72cc9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400393d4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fence();
    *(undefined4 *)(param_1 + 0x900 + iVar1) = *(undefined4 *)(param_2 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  return;
}


/* NanoCore 1.11, address 0x400393f8.
 * REA evidence: ev_a79361d09b41651d0d76c5ad3ab71e08a3a5f70a20317b8dc1c3ef4e0e063945
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400393f8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(param_1 + 0x940);
  iVar4 = 0;
  do {
    uVar3 = *(undefined4 *)(param_2 + iVar4 * 4);
    if (param_3 == 1) {
      fence();
      puVar1 = puVar2 + 0x10;
LAB_ram_4003942e:
      *puVar1 = uVar3;
    }
    else {
      if (param_3 == 2) {
        fence();
        puVar1 = puVar2 + 0x20;
        goto LAB_ram_4003942e;
      }
      if (param_3 == 0) {
        fence();
        *puVar2 = uVar3;
      }
    }
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 1;
    if (iVar4 == 0x10) {
      return;
    }
  } while( true );
}


/* NanoCore 1.11, address 0x4003943e.
 * REA evidence: ev_9b3cd66abc2050505a34fd277817fec853f3b8ccdc5ee1c7cc738f16c29dab40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40039450) */

int FUN_ram_4003943e(uint param_1,int param_2)

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


/* NanoCore 1.11, address 0x4003947c.
 * REA evidence: ev_053663949896b36866f36cbc4f9623f1ca40e392c69cc04378629d6e0b2ac83b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003948e) */

int FUN_ram_4003947c(uint param_1,int param_2)

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


/* NanoCore 1.11, address 0x400394ba.
 * REA evidence: ev_023b5015b05d285c6854d4b750df1527967a64c513b17e2a45c0a23a765b466c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400394ba(int param_1,uint *param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  piVar5 = *(int **)(*(int *)(gp + -0x4d0) + param_1 * 4);
  if (*piVar5 == param_1) {
    *param_5 = 4;
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    piVar1 = (int *)piVar5[4];
    *param_3 = iVar2;
    uVar3 = 0;
    iVar2 = *piVar1;
    while (uVar3 < (uint)piVar5[2]) {
      iVar7 = piVar1[uVar3];
      uVar3 = uVar3 + 1 & 0xff;
      if (iVar7 == *param_4) {
        iVar2 = iVar7;
      }
    }
    uVar3 = (uint)*(byte *)piVar5[3];
    for (uVar4 = 0; uVar4 < (uint)piVar5[1]; uVar4 = uVar4 + 1 & 0xff) {
      uVar6 = *(uint *)((byte *)piVar5[3] + uVar4 * 4);
      if (uVar6 == *param_2) {
        uVar3 = uVar6 & 0xff;
      }
    }
    *param_2 = uVar3;
    *param_4 = iVar2;
  }
  return;
}


/* NanoCore 1.11, address 0x4003952c.
 * REA evidence: ev_1582e0b432cf482ef5ae2da331752c7797d627af24e28d25327c54a759b243b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003952c(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 < 8) {
    FUN_ram_40032a1a(s_DMA_Ch_d__desc___0x_lx_ram_40097cf0,(&DAT_ram_3004b010)[param_1 * 0x3c],
                     (&DAT_ram_3004b048)[param_1 * 0xf]);
    for (puVar1 = (undefined4 *)(&DAT_ram_3004b048)[param_1 * 0xf]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[7]) {
      FUN_ram_40032a1a(s_task__0x_lx___cfg___0x_x__src___0_ram_40097d08,puVar1,*puVar1,puVar1[1],
                       puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7]);
    }
    fence();
    fence();
    fence();
    fence();
    FUN_ram_40032a1a(s_Common_register__IRQ_EN_0x_x__IR_ram_40097d84,**(undefined4 **)(gp + -0x6c0),
                     *(undefined4 *)(*(int *)(gp + -0x6c0) + 0x10),
                     *(undefined4 *)(*(int *)(gp + -0x6c0) + 0x30),
                     *(undefined4 *)(*(int *)(gp + -0x6c0) + 0x28));
    fence();
    fence();
    fence();
    fence();
    fence();
    fence();
    fence();
    fence();
    fence();
    FUN_ram_40032a1a(s_Ch_d_register__Enable_0x_x__Mode_ram_40097dd0,
                     (&DAT_ram_3004b010)[param_1 * 0x3c],
                     *(undefined4 *)(&DAT_ram_3004b018)[param_1 * 0xf],
                     *(undefined4 *)((&DAT_ram_3004b018)[param_1 * 0xf] + 0x28),
                     *(undefined4 *)((&DAT_ram_3004b018)[param_1 * 0xf] + 4),
                     *(undefined4 *)((&DAT_ram_3004b018)[param_1 * 0xf] + 8),
                     *(undefined4 *)((&DAT_ram_3004b018)[param_1 * 0xf] + 0xc),
                     *(undefined4 *)((&DAT_ram_3004b018)[param_1 * 0xf] + 0x10),
                     *(undefined4 *)((&DAT_ram_3004b018)[param_1 * 0xf] + 0x14),
                     *(undefined4 *)((&DAT_ram_3004b018)[param_1 * 0xf] + 0x18),
                     *(undefined4 *)((&DAT_ram_3004b018)[param_1 * 0xf] + 0x30));
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x40039674.
 * REA evidence: ev_2b1f84f49f399834a6817e8ccceed36987536b075413da4cdf69d551fdf037b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039674(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint auStack_14 [3];
  
  if (0x17 < *(int *)(param_1 + 0x1c) - 1U) {
    return 0xffffffea;
  }
  local_20 = *(uint *)(param_1 + 0xc);
  puVar5 = &local_20;
  puVar7 = &local_20;
  uStack_1c = *(uint *)(param_1 + 0x10);
  uStack_18 = *(uint *)(param_1 + 0x14);
  auStack_14[0] = *(uint *)(param_1 + 0x18);
  if (param_2 == 1) {
    puVar5 = &uStack_1c;
    puVar3 = &uStack_18;
    puVar1 = auStack_14;
  }
  else {
    if (param_2 != 2) {
      return 0xffffffea;
    }
    puVar7 = &uStack_1c;
    puVar3 = auStack_14;
    puVar1 = &uStack_18;
  }
  FUN_ram_400394ba(*(int *)(param_1 + 0x1c),puVar1,puVar3,puVar5,puVar7);
  if (((((DAT_ram_3004b00c >> (local_20 & 0x1f) & 1) != 0) &&
       ((DAT_ram_3004b00c >> (uStack_1c & 0x1f) & 1) != 0)) &&
      ((DAT_ram_3004b008 >> (uStack_18 & 0x1f) & 1) != 0)) &&
     ((DAT_ram_3004b008 >> (auStack_14[0] & 0x1f) & 1) != 0)) {
    iVar8 = 0;
    if (local_20 - 2 < 7) {
      iVar8 = (int)*(char *)(local_20 + 0x40097e6a);
    }
    iVar2 = 0;
    if (uStack_1c - 2 < 7) {
      iVar2 = (int)*(char *)(uStack_1c + 0x40097e6a);
    }
    iVar4 = -0x16;
    if (auStack_14[0] - 1 < 0x10) {
      iVar4 = (int)s_Ch_d_register__Enable_0x_x__Mode_ram_40097dd0[auStack_14[0] + 0x8b];
    }
    iVar6 = -0x16;
    if (uStack_18 - 1 < 0x10) {
      iVar6 = (int)s_Ch_d_register__Enable_0x_x__Mode_ram_40097dd0[uStack_18 + 0x8b];
    }
    *param_3 = iVar8 << 9 | iVar2 << 0x19 | iVar4 << 0x16 | iVar6 << 6;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003976e.
 * REA evidence: ev_c0deb245f98c65a7c25f89500397b1caf15f38d0b845292d28dfc77f8ea68b36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003976e(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = mstatus;
  iVar1 = DAT_ram_3004b1f0;
  mstatus = mstatus & 0xfffffff7;
  uVar3 = 0;
  if (DAT_ram_3004b1f0 != 0) {
    DAT_ram_3004b1f0 = *(int *)(DAT_ram_3004b1f0 + 0x1c);
    uVar3 = memset(iVar1,0,0x20);
  }
  mstatus = uVar2;
  return uVar3;
}


/* NanoCore 1.11, address 0x400397ac.
 * REA evidence: ev_54f44d690ef0783bc642b3155e89f4405f3bf6d00cc90e85357badc28dbf7232
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400397ac(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    if (param_1 == 0) {
      *(int *)(param_3 + 0x38) = param_2;
      goto LAB_ram_400397ba;
    }
  }
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x1c) = param_2;
LAB_ram_400397ba:
  *(undefined4 *)(param_2 + 0x14) = 0xfffff800;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return param_2;
}


/* NanoCore 1.11, address 0x400397d0.
 * REA evidence: ev_437de474fc3993868f7bf10e680d216bb7af2978623217da0f021491be45c459
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400397d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 0;
    while (iVar2 = iVar1, iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x1c);
      *(int *)(iVar2 + 0x1c) = DAT_ram_3004b1f0;
      DAT_ram_3004b1f0 = iVar2;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40039810.
 * REA evidence: ev_faf866f5206eb3e2d7b12f3532a3023e5068387e2c8478fb5354cf721ac80af7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40039810(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffea;
  if ((param_1 != (byte *)0x0) && (param_2 != (undefined4 *)0x0)) {
    fence();
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x18);
    fence();
    uVar1 = (uint)((1 << (*param_1 & 0x1f) & *(uint *)(*(int *)(gp + -0x6c0) + 0x30)) != 0);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40039844.
 * REA evidence: ev_bea9cd441d07e5e5a9105cf2d4ecb8856c091186367fec4bb19ef3b2b7f42b2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039844(int param_1)

{
  if (param_1 != 0) {
    fence();
    fence();
    *(uint *)(*(int *)(param_1 + 8) + 4) = *(uint *)(*(int *)(param_1 + 8) + 4) | 1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x40039866.
 * REA evidence: ev_21f7164bc73fcb205a32f31dd3090e59619982ad99e00073cd8ec0fd8e4f51ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039866(int param_1)

{
  if (param_1 != 0) {
    fence();
    fence();
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x40039886.
 * REA evidence: ev_9ee90b210166edef2daf2443f8faf42511ccae8ab5ba1f5937038cc167258102
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039886(byte *param_1)

{
  uint uVar1;
  
  if (param_1 != (byte *)0x0) {
    uVar1 = *param_1 & 0xfc;
    fence();
    fence();
    *(uint *)(uVar1 + DAT_ram_3004b004) =
         ~(7 << ((*param_1 & 3) << 2)) & *(uint *)(DAT_ram_3004b004 + uVar1);
    FUN_ram_40039844();
    fence();
    **(undefined4 **)(param_1 + 8) = 0;
    FUN_ram_40039866(param_1);
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_ram_400397d0(param_1);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x400398f8.
 * REA evidence: ev_c57c936c1bff7b87d373f478cc0f5cc20cca9436d86057bf7b4d198e4be6a67c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400398f8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffea;
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(param_1 + 0x30) = param_2;
    *(undefined4 *)(param_1 + 0x34) = param_3;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40039908.
 * REA evidence: ev_c1c9714fe95b46f31df97e7c07b50775466ba76e407b7c45602e98ac34645b2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039908(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_ram_4000304c(param_1 + 0xc,param_2,0x20);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003992c.
 * REA evidence: ev_1fdbc578fcd0575dffc9b00b1ec4d959f1e6ba3d062afc40efd365a445687a07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003992c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0xffffffea;
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_ram_400397d0();
      uVar1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    return uVar1;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x40039960.
 * REA evidence: ev_6650abe1e3b5401fa85c7678ab6870bd6dde3301f02ee9948963318fdd6ae480
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_40039960(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = &DAT_ram_3004ab80;
  iVar2 = 0;
  do {
    if (puVar1[0x491] == '\0') {
      iVar3 = iVar2 * 0x3c;
      (&DAT_ram_3004b011)[iVar3] = 1;
      *(undefined2 *)(&DAT_ram_3004b012 + iVar3) = 0;
      (&DAT_ram_3004b014)[iVar3] = 0;
      (&DAT_ram_3004b040)[iVar2 * 0xf] = 0;
      (&DAT_ram_3004b044)[iVar2 * 0xf] = 0;
      (&DAT_ram_3004b048)[iVar2 * 0xf] = 0;
      return &DAT_ram_3004b010 + iVar3;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x3c;
  } while (iVar2 != 8);
  return (undefined1 *)0x0;
}


/* NanoCore 1.11, address 0x400399be.
 * REA evidence: ev_df10d978d7a30be5461dfa29d2351564846134a0b0be0151fb9ef7b8ce154e54
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400399be(void)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  DAT_ram_3004b004 = (undefined4 *)&DAT_ram_10000000;
  iVar2 = 0;
  puVar1 = &DAT_ram_3004ab80;
  do {
    puVar1[0x490] = (char)iVar2;
    *(int *)(puVar1 + 0x498) = iVar2 * 0x40 + 0x10000100;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x3c;
  } while (iVar2 != 8);
  *(undefined4 *)(gp + -0x4d4) = 0;
  puVar1 = &DAT_ram_3004ab80;
  do {
    puVar3 = puVar1;
    *(undefined **)(puVar3 + 0x1c) = DAT_ram_3004b1f0;
    mstatus = mstatus;
    puVar1 = puVar3 + 0x20;
    DAT_ram_3004b1f0 = puVar3;
  } while ((undefined *)(gp + -0x6c4) != puVar3 + 0x20);
  fence();
  *DAT_ram_3004b004 = 0;
  fence();
  DAT_ram_3004b004[1] = 0;
  return 0;
}


/* NanoCore 1.11, address 0x40039a34.
 * REA evidence: ev_2d37963d0f51b4fa846f3b738ae84fcfc522b7eafaeda3efbff199d17bd380c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039a34(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_ram_3004ab80;
  uVar1 = *(uint *)(DAT_ram_3004b004 + 0x10);
  fence();
  uVar2 = 0;
  if (uVar1 != 0) {
    fence();
    *(uint *)(DAT_ram_3004b004 + 0x10) = uVar1;
    do {
      if (((puVar3[0x491] != '\0') && (((byte)puVar3[0x492] & uVar1) != 0)) &&
         (*(code **)(puVar3 + 0x4c0) != (code *)0x0)) {
        (**(code **)(puVar3 + 0x4c0))(*(undefined4 *)(puVar3 + 0x4c4));
      }
      uVar1 = uVar1 >> 4;
    } while ((puVar3 != (undefined *)0x3004ad24) && (puVar3 = puVar3 + 0x3c, uVar1 != 0));
    uVar2 = 1;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40039a9e.
 * REA evidence: ev_8f9057a2afd3d93bf58d9d9a31d12fe22c583fe28c2a358db10f8d998a690698
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039a9e(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uStack_24;
  
  if ((((param_1 == 0) || (0x1fffffe < param_4 - 1)) || (((param_2 | param_3) & 7) != 0)) ||
     (iVar1 = FUN_ram_40039674(param_1 + 0xc,param_5,&uStack_24), iVar1 != 0)) {
    uVar3 = 0xffffffea;
  }
  else {
    puVar2 = (uint *)FUN_ram_4003976e();
    if (puVar2 == (uint *)0x0) {
      uVar3 = 0xfffffff4;
    }
    else {
      puVar2[4] = 0x40;
      puVar2[3] = param_4;
      puVar2[1] = param_3;
      puVar2[2] = param_2;
      if (param_5 == 1) {
        *puVar2 = (*(uint *)(param_1 + 0x28) & 0x3f) << 0x10 | uStack_24 | 0x1000000;
        puVar2[6] = 0x18;
        FUN_ram_4003943e(param_3,param_4);
      }
      else {
        *puVar2 = *(uint *)(param_1 + 0x28) & 0x3f | uStack_24 | 0x100;
        puVar2[6] = 0x14;
        FUN_ram_4003947c(param_2,param_4);
      }
      FUN_ram_400397ac(0,puVar2,param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40039b64.
 * REA evidence: ev_d6aef6be5bf555a0b6dffa7db4ca452405848366202c55f0f0e2e5ed8e7a51ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039b64(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint auStack_44 [4];
  
  if ((((param_1 == 0) || (param_3 == 0)) || (param_4 == 0)) ||
     ((((param_3 | param_2) & 7) != 0 ||
      (iVar2 = FUN_ram_40039674(param_1 + 0xc,param_5,auStack_44), iVar2 != 0)))) {
    uVar6 = 0xffffffea;
  }
  else {
    if (param_4 == 0) {
      param_3 = 0xffffffff;
    }
    else {
      param_3 = param_3 / param_4;
    }
    iVar2 = 0;
    for (uVar1 = 0; uVar1 != param_3; uVar1 = uVar1 + 1) {
      puVar3 = (uint *)FUN_ram_4003976e();
      if (puVar3 == (uint *)0x0) {
        FUN_ram_400397d0(param_1);
        return 0xfffffff4;
      }
      puVar3[3] = param_4;
      uVar5 = *(uint *)(param_1 + 0x28);
      if (param_5 == 1) {
        uVar4 = *(uint *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 2) = 1;
        puVar3[1] = param_2;
        puVar3[2] = uVar4;
        *puVar3 = (uVar5 & 0x3f) << 0x10 | auStack_44[0] | 0x1000000;
        puVar3[4] = 0x40;
        puVar3[6] = 8;
        FUN_ram_4003943e(param_2,param_4);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x10);
        *(undefined1 *)(param_1 + 2) = 2;
        *puVar3 = uVar5 & 0x3f | auStack_44[0] | 0x100;
        puVar3[1] = uVar4;
        puVar3[2] = param_2;
        puVar3[4] = 0x40;
        puVar3[6] = 4;
        FUN_ram_4003947c(param_2,param_4);
      }
      iVar2 = FUN_ram_400397ac(iVar2,puVar3,param_1);
      param_2 = param_2 + param_4;
    }
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 3) = 1;
    uVar6 = 0;
  }
  return uVar6;
}


/* NanoCore 1.11, address 0x40039c7e.
 * REA evidence: ev_71797a7a7dd50339d92b549c16808cb5a11948d9078959e9ab1e83c07803c66d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039c7e(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (byte *)0x0) {
    iVar1 = *(int *)(param_1 + 0x38);
    uVar2 = 0xffffffea;
    if (iVar1 != 0) {
      do {
        FUN_ram_4003943e(iVar1,0x20);
        iVar1 = *(int *)(iVar1 + 0x1c);
      } while (iVar1 != 0);
      if (param_1[3] == 0) {
        param_1[2] = 4;
      }
      fence();
      fence();
      *DAT_ram_3004b004 =
           ~(7 << ((uint)*param_1 << 2 & 0x1f)) & *DAT_ram_3004b004 |
           (uint)param_1[2] << ((uint)*param_1 << 2 & 0x1f);
      fence();
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x28) =
           *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x18);
      fence();
      *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0x38);
      if (param_1[4] == 0) {
        fence();
        iVar1 = *(int *)(param_1 + 8);
        uVar2 = 0;
      }
      else {
        fence();
        iVar1 = *(int *)(param_1 + 8);
        uVar2 = 0x10;
      }
      *(undefined4 *)(iVar1 + 4) = uVar2;
      fence();
      **(undefined4 **)(param_1 + 8) = 1;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x40039d36.
 * REA evidence: ev_430acdc3c5662baee74d456fe73ddf922f160fc1cfe3fe62825ce96ed3983aee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40039d90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40039d36(uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 2) {
    uVar1 = 0xffffffea;
    if ((param_2 < 0x40) && (param_3 != 0)) {
      fence();
      _DAT_ram_19010004 = (param_1 * 0x40 + param_2) * 4;
      fence();
      fence();
      _DAT_ram_19010000 = _DAT_ram_19010000 & 0xf000ffef | 0xa1c0010;
      iVar2 = 1000000;
      do {
        fence();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar1 = 0xffffff8c;
    }
    return uVar1;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x40039dac.
 * REA evidence: ev_4e73b7b0664809fc87e3216bbbd47bf719e4a4eeb43e1a983e4e8d9110a9fe69
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039dac(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x40039db0.
 * REA evidence: ev_0160bc48e24e4313038c6554aa3164045880206900e947e065c83be6f5ffcd42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40039db0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400378d0(0x34);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40037876(0x34), iVar1 < 0)) {
    uVar2 = 0xfffffff2;
  }
  else {
    fence();
    _DAT_ram_19010010 = 0x402ffd8;
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40039dec.
 * REA evidence: ev_55e5e244a44ef2e68824bd208fdd6b4eed3fe6ab2d6f139c20b9218a80b6e8a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039dec(void)

{
  FUN_ram_4003789a(0x34);
  FUN_ram_400378f4(0x34);
  return 0;
}


/* NanoCore 1.11, address 0x40039e08.
 * REA evidence: ev_8ccb6c90ee887e4faaf9abbd9fdc2f7e1e8feff125b54cbfc78dcc58d1a33e2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40039e08(uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint auStack_14 [2];
  
  if ((param_1 < 0x40) && (param_2 != (uint *)0x0)) {
    iVar2 = FUN_ram_40039d36(0,param_1,auStack_14);
    uVar1 = auStack_14[0];
    if (iVar2 == 0) {
      iVar2 = FUN_ram_40039d36(1,param_1,auStack_14);
      if (iVar2 == 0) {
        *param_2 = auStack_14[0] | uVar1;
      }
    }
    return iVar2;
  }
  return -0x16;
}


/* NanoCore 1.11, address 0x40039e4c.
 * REA evidence: ev_a742901875b3bd59862030ac11e4798c50fe5395a60d079b21bbdead4ba118da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039e4c(int param_1)

{
  fence();
  return *(undefined4 *)(param_1 + 0xc);
}


/* NanoCore 1.11, address 0x40039e56.
 * REA evidence: ev_ea3f0267f7f4cf9bfc4535cdf867ee75221610fb0f39a734072da94b3d7af701
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039e56(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                     uint param_12)

{
  fence();
  *(uint *)(param_1 + 0x10) =
       (param_3 & 3) << 0x16 | (param_12 & 1) << 1 | (param_11 & 3) << 2 | (param_10 & 3) << 4 |
       (param_9 & 1) << 6 | (param_8 & 1) << 7 | (param_7 & 0x7f) << 8 | (param_6 & 3) << 0x10 |
       (param_5 & 3) << 0x12 | (param_4 & 1) << 0x15 | param_2 << 0x18 | 1;
  return;
}


/* NanoCore 1.11, address 0x40039edc.
 * REA evidence: ev_1b17846e2d4f906f1ceb788772a1a36fe34ad75cb68978f921f2eb43f1803dd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039edc(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7)

{
  fence();
  *(uint *)(param_1 + 0x10) =
       (param_3 & 3) << 0x16 | (param_7 & 3) << 2 | (param_6 & 0x7f) << 8 | (param_5 & 3) << 0x10 |
       (param_4 & 1) << 0x15 | param_2 << 0x18 | 1;
  return;
}


/* NanoCore 1.11, address 0x40039f24.
 * REA evidence: ev_2825f7d0911f7262a3854b9b3b7692b86d8a6b6deba18bf07e19709958c93004
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039f24(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0x100) =
       (param_4 & 1) << 4 | (param_5 & 1) << 1 | (param_2 & 1) << 0x10 | (param_3 & 0x7f) << 8;
  return;
}


/* NanoCore 1.11, address 0x40039f4e.
 * REA evidence: ev_1d0f905d7a10d3fb73d0b65b0596c98f339c20716d0282ecf8d51d57ff0d932a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039f4e(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0x50) =
       (param_4 & 0x7f) << 8 | param_2 << 0x18 | (param_5 & 1) << 1 | (param_3 & 3) << 0x16 | 1;
  return;
}


/* NanoCore 1.11, address 0x40039f7c.
 * REA evidence: ev_f4f84cc60ec6efcf7fce089cee02903d4563bde13be50f8a55db350a76502950
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039f7c(int param_1)

{
  fence();
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


/* NanoCore 1.11, address 0x40039f8a.
 * REA evidence: ev_7ceac9c11ec662a93bac23da9739169f4e8ba90eb05f62e0c1b6d93595352fe0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039f8a(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_6 == 0) {
    param_3 = param_2;
  }
  if (param_3 < 2) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      uVar4 = 0xffffffff;
      uVar3 = 0xffffffff;
      uVar2 = 0xffffffff;
      uVar1 = 0xffffffff;
    }
    else {
      uVar4 = (int)(((param_5 >> 0x18) - (param_4 >> 0x18)) * 0x10000) / param_3;
      uVar3 = (int)((((param_5 & 0xffffff) >> 0x10) - ((param_4 & 0xffffff) >> 0x10)) * 0x10000) /
              param_3;
      uVar2 = (int)((((param_5 & 0xffff) >> 8) - ((param_4 & 0xffff) >> 8)) * 0x10000) / param_3;
      uVar1 = (int)(((param_5 & 0xff) - (param_4 & 0xff)) * 0x10000) / param_3;
    }
  }
  fence();
  *(uint *)(param_1 + 0x1c) = param_4;
  fence();
  *(uint *)(param_1 + 0x30) = uVar4 & 0x1ffffff;
  fence();
  *(uint *)(param_1 + 0x34) = uVar3 & 0x1ffffff;
  fence();
  *(uint *)(param_1 + 0x38) = uVar2 & 0x1ffffff;
  fence();
  *(uint *)(param_1 + 0x3c) = uVar1 & 0x1ffffff;
  return;
}


