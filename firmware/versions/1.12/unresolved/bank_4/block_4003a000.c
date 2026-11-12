/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4003a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4003a12c.
 * REA evidence: ev_dae02104065cf054dc3f5e12c363b1ea0aadf1ba2f2e4c2331475c1e2c98005e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a12c(int param_1,uint param_2)

{
  FUN_ram_40039e88(param_1 + 0x1dc,0x1fff0000,(param_2 & 0x1fff) << 0x10);
  return;
}


/* NanoCore 1.12, address 0x4003a140.
 * REA evidence: ev_0de63dab290e2daf523520c6c56b19f3140375a16611b3a7e118067c254ff053
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a140(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1 + 0x170,0x10000);
    return;
  }
  FUN_ram_40039e74(param_1 + 0x170,0x10000);
  return;
}


/* NanoCore 1.12, address 0x4003a152.
 * REA evidence: ev_693bb377e8ec57f3d250e89ca97d81c908cf073e8323af54636728c999096ca6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a152(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4003a15c.
 * REA evidence: ev_44c00e4f9205ff37154f47b8365fd875886b71e15c2517e242b27c38a00e030f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a15c(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  fence();
  *(uint *)(param_1 + 0xc) = (~param_3 & 3) << 8 | ~param_4 & 3 | (~param_2 & 3) << 0x10;
  if (param_5 != 0) {
    FUN_ram_40039e9c(param_1 + 0x14,0x80000000);
    FUN_ram_40039e9c(param_1,1);
    return;
  }
  FUN_ram_40039e74(param_1,1);
  return;
}


/* NanoCore 1.12, address 0x4003a1ae.
 * REA evidence: ev_309b6895b2000a5008eef4bc21ee45bb69e1a58e622405cfa83376be622ddc1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a1ae(int param_1,uint param_2)

{
  FUN_ram_40039e88(param_1 + 0x1d0,0x30,(param_2 & 3) << 4);
  return;
}


/* NanoCore 1.12, address 0x4003a1c2.
 * REA evidence: ev_8c8191bd84785bd663efabe0a242a22c8ff471f48fff4775339f6cebd1783acf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a1c2(undefined4 param_1,int *param_2)

{
  FUN_ram_40039e88(param_1,0xf3fff3ff,
                   (param_2[1] & 0xfU) << 0xc |
                   *param_2 << 0x1c | param_2[3] & 0x3ffU | (param_2[2] & 0x3ffU) << 0x10);
  return;
}


/* NanoCore 1.12, address 0x4003a1f0.
 * REA evidence: ev_100beec8ae6cdf6339ebc88c72a1f20a0f797cd0d2cb1882536fbcdf702167fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a1f0(int param_1,int param_2,int param_3,uint param_4)

{
  param_1 = param_1 + 0x890;
  if (param_3 != 0) {
    FUN_ram_40039e9c(param_1,0x8000);
  }
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1,0x4000);
  }
  FUN_ram_40039e88(param_1,0x3ff,param_4 & 0x3ff);
  return;
}


/* NanoCore 1.12, address 0x4003a230.
 * REA evidence: ev_ca207d536ac4f9cc45b5f50106c4fdec21549cbd3d5377aaf5e93326149746a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a230(int param_1)

{
  FUN_ram_4003a1f0(param_1,1,1,0x40,0x1f);
  FUN_ram_4003a1c2(param_1 + 0x880,&DAT_ram_3004b910);
  FUN_ram_4003a1c2(param_1 + 0x884,&DAT_ram_3004b920);
  FUN_ram_4003a1c2(param_1 + 0x888,&DAT_ram_3004b930);
  FUN_ram_4003a1c2(param_1 + 0x88c,&DAT_ram_3004b940);
  return;
}


/* NanoCore 1.12, address 0x4003a29a.
 * REA evidence: ev_d2cda8027665cac7f72283fbfb988d65983612b2c8c4a05464241eba7fea934a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a29a(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     undefined4 param_7,undefined4 param_8,undefined4 param_9,uint param_10,
                     uint param_11)

{
  FUN_ram_40039e88(param_1 + 0x20,0x7f00,(param_4 & 0x7f) << 8);
  fence();
  *(uint *)(param_1 + 0x24) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x30) = (param_6 & 0x1fff) << 0x10 | param_5 & 0x1fff;
  fence();
  *(undefined4 *)(param_1 + 0x40) = param_7;
  fence();
  *(undefined4 *)(param_1 + 0x44) = param_8;
  fence();
  *(undefined4 *)(param_1 + 0x48) = param_9;
  fence();
  *(uint *)(param_1 + 0x114) = (param_11 & 0x1fff) << 0x10 | param_10 & 0x1fff;
  return;
}


/* NanoCore 1.12, address 0x4003a34a.
 * REA evidence: ev_a941f1d94395ed4374838c7188c52f456e97ba49e8ef07c3cf53f48ca9f451c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a34a(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0x60) = (param_3 & 0xff) << 0x10 | param_2 & 0xff;
  fence();
  *(uint *)(param_1 + 100) = (param_5 & 0xff) << 0x10 | param_4 & 0xff;
  return;
}


/* NanoCore 1.12, address 0x4003a378.
 * REA evidence: ev_b399d0a6a090f4b46cdfb006f6737956de5a08cdc64295ca28dd3329dcd683af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a378(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1 + 0x20,1);
    return;
  }
  FUN_ram_40039e74(param_1 + 0x20,1);
  return;
}


/* NanoCore 1.12, address 0x4003a38a.
 * REA evidence: ev_c1a0beaf266e613868ff95d4d9fcf631610e993e168601703ae8b3447cc8de81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a38a(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_ram_3004b9c0;
  if (param_2 - 1U < 3) {
    puVar4 = (undefined4 *)(&PTR_DAT_ram_3004ba20_ram_4009ce74)[param_2 - 1U];
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


/* NanoCore 1.12, address 0x4003a3e4.
 * REA evidence: ev_13e35ea07baaa13f29389786013677e4a88d1d812b80a4406c3b3e3af42e1ebc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a3e4(int param_1)

{
  int iVar1;
  undefined4 local_40 [14];
  
  FUN_ram_40039ed4(0);
  iVar1 = 0;
  do {
    fence();
    *(undefined4 *)(param_1 + 0x70 + iVar1) = *(undefined4 *)((int)local_40 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  return 0;
}


/* NanoCore 1.12, address 0x4003a41c.
 * REA evidence: ev_c35c382093e75da4b2fbeb3066fe8a5e2280e835c34823d0cfb8a4cd34d6cbb0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a41c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0xa4) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x10c) = (param_5 & 0x1fff) << 0x10 | param_4 & 0x1fff;
  return;
}


/* NanoCore 1.12, address 0x4003a44e.
 * REA evidence: ev_fdcf9b59ca66ca0c53e49ee26e1ff05559e23abbdaff7f267d925a1a5c7b02fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a44e(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1 + 0xa0,0x200000);
    return;
  }
  FUN_ram_40039e74(param_1 + 0xa0,0x200000);
  return;
}


/* NanoCore 1.12, address 0x4003a464.
 * REA evidence: ev_6699e7c52155baef242daf0510dda2306da53694a935a14e4416e1e412aa94e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a464(int param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 != 0) {
    FUN_ram_40039e88(param_1 + 0xa0,0xffc00004,(param_3 & 3) << 0x16 | param_2 << 0x18 | 4);
    return;
  }
  FUN_ram_40039e74(param_1 + 0xa0,4);
  return;
}


/* NanoCore 1.12, address 0x4003a48a.
 * REA evidence: ev_5e21ac078a0790f33613217fc857e0171fb101e37898e4794fd4a9581a81d398
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a48a(int param_1,uint param_2)

{
  FUN_ram_40039e88(param_1 + 0xa0,0x7f00,(param_2 & 0x7f) << 8);
  return;
}


/* NanoCore 1.12, address 0x4003a49e.
 * REA evidence: ev_1f6ddeb686d8dc848e6ec7b2ab3336a1228a6f798d439d3dc1a42dec96545d26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a49e(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    fence();
    *(uint *)(param_1 + 0xac) = param_2 & 0xffffff;
    FUN_ram_40039e9c(param_1 + 0xa0,2);
    return;
  }
  FUN_ram_40039e74(param_1 + 0xa0,2);
  return;
}


/* NanoCore 1.12, address 0x4003a4c4.
 * REA evidence: ev_333a93c6f243947a2f9d7bccc7c47dd8595a00fc7688640c3c7cf2835c5d8677
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a4c4(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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


/* NanoCore 1.12, address 0x4003a51e.
 * REA evidence: ev_7f1ad1252bc0c755cb7acdc13458e9147dbed844c7fba9887b02df54074cabbe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a51e(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1 + 0xa0,1);
    return;
  }
  FUN_ram_40039e74(param_1 + 0xa0,1);
  return;
}


/* NanoCore 1.12, address 0x4003a530.
 * REA evidence: ev_6131e7b1a9f3d1df4b8979a8f05e0f7704b5ca2882b66dfcc587583408eff779
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a530(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_ram_40039e9c();
    return;
  }
  FUN_ram_40039e74(param_1 + 0xb0,1 << (param_2 & 0x1f));
  return;
}


/* NanoCore 1.12, address 0x4003a544.
 * REA evidence: ev_2f3be83388ff6f8d6c2ffd76f242f8d82b4a4f11d1bf2e717069f310a6551533
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a544(void)

{
  return;
}


/* NanoCore 1.12, address 0x4003a546.
 * REA evidence: ev_b80dc10e98fbb070cf6223d1f8c6d8134801d2b0c672d731029de9fe5f573801
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a546(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6)

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


/* NanoCore 1.12, address 0x4003a5fa.
 * REA evidence: ev_4bb1ad18900c25441e59454d1e188e0dbda9ab0dc569aca4d289cadcdb301231
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a5fa(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1 + 0x120,1);
    return;
  }
  FUN_ram_40039e74(param_1 + 0x120,1);
  return;
}


/* NanoCore 1.12, address 0x4003a60c.
 * REA evidence: ev_dadb1e56d19b3d0caa27e62888999ed00ea0f1085958e86362078cc5aa5fe272
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a60c(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1 + 0x1d4,param_3);
    return;
  }
  FUN_ram_40039e74(param_1 + 0x1d4,param_3);
  return;
}


/* NanoCore 1.12, address 0x4003a61e.
 * REA evidence: ev_c97f705f7e0a08938c4a54e47bb70a23476d4b03ee6718d44738dae339642b3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a61e(int param_1)

{
  fence();
  return *(undefined4 *)(param_1 + 0x1d8);
}


/* NanoCore 1.12, address 0x4003a62a.
 * REA evidence: ev_717e941981b0e4e5e68001409e9ec498ba753e4bfcb939d191e5f640dbd1fb35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a62a(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x1d8) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4003a636.
 * REA evidence: ev_38cdc5305ef8cbafaf56de2c3e8486ff7f1053ef8c7835d86de1d1e27f676d97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a636(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1 + 0x1d0,1);
    return;
  }
  FUN_ram_40039e74(param_1 + 0x1d0,1);
  return;
}


/* NanoCore 1.12, address 0x4003a648.
 * REA evidence: ev_c3b8c4c91ca01ba4a52f45f7b2c8a56d2f3c9ec211392af12f6d1bb211776bce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a648(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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


/* NanoCore 1.12, address 0x4003a6ca.
 * REA evidence: ev_5ee26879443f0a084bfd6d716d900c82c8cb98cdf48cac53a909d756982d763b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a6ca(int param_1,uint param_2,uint param_3)

{
  fence();
  *(uint *)(param_1 + 0x104) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  return;
}


/* NanoCore 1.12, address 0x4003a6e6.
 * REA evidence: ev_c406416b6c01022f090616ba3291767c19028e62c4207c8ea8fcf143baf620ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a6e6(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1,4);
    return;
  }
  FUN_ram_40039e74(param_1,4);
  return;
}


/* NanoCore 1.12, address 0x4003a6f4.
 * REA evidence: ev_c2d9cd91b73cfe2e49ebc81b271275f18c664dffaeb4b9d9b360fe61283fbeda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a6f4(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40039e9c(param_1,2);
    return;
  }
  FUN_ram_40039e74(param_1,2);
  return;
}


/* NanoCore 1.12, address 0x4003a702.
 * REA evidence: ev_3c1495871a01be0d8de6d0cf04b4a9f2c5bde8b94b3e6882f3e582b077717dec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a702(int param_1,int param_2)

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


/* NanoCore 1.12, address 0x4003a726.
 * REA evidence: ev_9e1d4f8f129d2ed111c84a8234fd13ed7b30e54bb999170692c90f3f16aaacfb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a726(int param_1,int param_2,int param_3)

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
LAB_ram_4003a75c:
      *puVar1 = uVar3;
    }
    else {
      if (param_3 == 2) {
        fence();
        puVar1 = puVar2 + 0x20;
        goto LAB_ram_4003a75c;
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


/* NanoCore 1.12, address 0x4003a76c.
 * REA evidence: ev_b56a8e464cbb7b67ef6c40154cbe405b0f2715486c4d898a8d90902b85310489
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003a77e) */

int FUN_ram_4003a76c(uint param_1,int param_2)

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


/* NanoCore 1.12, address 0x4003a7aa.
 * REA evidence: ev_8faa688f679baf26f14c8ed47ae4b80aff616ecf3868e050121b887f0b8eee20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003a7bc) */

int FUN_ram_4003a7aa(uint param_1,int param_2)

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


/* NanoCore 1.12, address 0x4003a7e8.
 * REA evidence: ev_cefb635d46ca8e5e6c72e437bfe6d8555a902c0d6b7ace908ee7e5e1a7b51149
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a7e8(int param_1,uint *param_2,int *param_3,int *param_4,undefined4 *param_5)

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


/* NanoCore 1.12, address 0x4003a85a.
 * REA evidence: ev_a2bb3d31d984cd97afbb69a494a4fc82053864e52a3c6c47718ef639e3bdd2a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a85a(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 < 8) {
    FUN_ram_4003390a(s_DMA_Ch_d__desc___0x_lx_ram_4009d06c,(&DAT_ram_3004bf50)[param_1 * 0x3c],
                     (&DAT_ram_3004bf88)[param_1 * 0xf]);
    for (puVar1 = (undefined4 *)(&DAT_ram_3004bf88)[param_1 * 0xf]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[7]) {
      FUN_ram_4003390a(s_task__0x_lx___cfg___0x_x__src___0_ram_4009d084,puVar1,*puVar1,puVar1[1],
                       puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7]);
    }
    fence();
    fence();
    fence();
    fence();
    FUN_ram_4003390a(s_Common_register__IRQ_EN_0x_x__IR_ram_4009d100,**(undefined4 **)(gp + -0x6c0),
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
    FUN_ram_4003390a(s_Ch_d_register__Enable_0x_x__Mode_ram_4009d14c,
                     (&DAT_ram_3004bf50)[param_1 * 0x3c],
                     *(undefined4 *)(&DAT_ram_3004bf58)[param_1 * 0xf],
                     *(undefined4 *)((&DAT_ram_3004bf58)[param_1 * 0xf] + 0x28),
                     *(undefined4 *)((&DAT_ram_3004bf58)[param_1 * 0xf] + 4),
                     *(undefined4 *)((&DAT_ram_3004bf58)[param_1 * 0xf] + 8),
                     *(undefined4 *)((&DAT_ram_3004bf58)[param_1 * 0xf] + 0xc),
                     *(undefined4 *)((&DAT_ram_3004bf58)[param_1 * 0xf] + 0x10),
                     *(undefined4 *)((&DAT_ram_3004bf58)[param_1 * 0xf] + 0x14),
                     *(undefined4 *)((&DAT_ram_3004bf58)[param_1 * 0xf] + 0x18),
                     *(undefined4 *)((&DAT_ram_3004bf58)[param_1 * 0xf] + 0x30));
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003a9a2.
 * REA evidence: ev_72fcdcf96df1c4ebefb92764214654bf6a49567660ac0c93b7e8e7e7bc56e794
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a9a2(int param_1,int param_2,uint *param_3)

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
  FUN_ram_4003a7e8(*(int *)(param_1 + 0x1c),puVar1,puVar3,puVar5,puVar7);
  if (((((DAT_ram_3004bf4c >> (local_20 & 0x1f) & 1) != 0) &&
       ((DAT_ram_3004bf4c >> (uStack_1c & 0x1f) & 1) != 0)) &&
      ((DAT_ram_3004bf48 >> (uStack_18 & 0x1f) & 1) != 0)) &&
     ((DAT_ram_3004bf48 >> (auStack_14[0] & 0x1f) & 1) != 0)) {
    iVar8 = 0;
    if (local_20 - 2 < 7) {
      iVar8 = (int)*(char *)(local_20 + 0x4009d1e6);
    }
    iVar2 = 0;
    if (uStack_1c - 2 < 7) {
      iVar2 = (int)*(char *)(uStack_1c + 0x4009d1e6);
    }
    iVar4 = -0x16;
    if (auStack_14[0] - 1 < 0x10) {
      iVar4 = (int)s_Ch_d_register__Enable_0x_x__Mode_ram_4009d14c[auStack_14[0] + 0x8b];
    }
    iVar6 = -0x16;
    if (uStack_18 - 1 < 0x10) {
      iVar6 = (int)s_Ch_d_register__Enable_0x_x__Mode_ram_4009d14c[uStack_18 + 0x8b];
    }
    *param_3 = iVar8 << 9 | iVar2 << 0x19 | iVar4 << 0x16 | iVar6 << 6;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003aa9c.
 * REA evidence: ev_a1e7df381873ee75a2f3890a39a6463c5afe16ded514bf426e98416054d1f6b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003aa9c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = mstatus;
  iVar1 = DAT_ram_3004c130;
  mstatus = mstatus & 0xfffffff7;
  uVar3 = 0;
  if (DAT_ram_3004c130 != 0) {
    DAT_ram_3004c130 = *(int *)(DAT_ram_3004c130 + 0x1c);
    uVar3 = memset(iVar1,0,0x20);
  }
  mstatus = uVar2;
  return uVar3;
}


/* NanoCore 1.12, address 0x4003aada.
 * REA evidence: ev_834de9058d0c325fefecf34750d8e9b34107b2dd77f88fa5073a9cbb183be791
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003aada(int param_1,int param_2,int param_3)

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
      goto LAB_ram_4003aae8;
    }
  }
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x1c) = param_2;
LAB_ram_4003aae8:
  *(undefined4 *)(param_2 + 0x14) = 0xfffff800;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return param_2;
}


/* NanoCore 1.12, address 0x4003aafe.
 * REA evidence: ev_ea6096a17525745772e7d8249dcb0103e636684ab2795586e454cb23397cf716
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003aafe(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 0;
    while (iVar2 = iVar1, iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x1c);
      *(int *)(iVar2 + 0x1c) = DAT_ram_3004c130;
      DAT_ram_3004c130 = iVar2;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4003ab3e.
 * REA evidence: ev_ec37a435ea90d378725a07de80438c258f9a9d905662fcc11cfd7b0748383dc0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003ab3e(byte *param_1,undefined4 *param_2)

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


/* NanoCore 1.12, address 0x4003ab72.
 * REA evidence: ev_d2c24f47f77e9d67a5175eef2410773e703bbfdc415d511f1c7405c055f1160d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ab72(int param_1)

{
  if (param_1 != 0) {
    fence();
    fence();
    *(uint *)(*(int *)(param_1 + 8) + 4) = *(uint *)(*(int *)(param_1 + 8) + 4) | 1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003ab94.
 * REA evidence: ev_5774413f12cf1497e14d8367b544fd10104a8fc084199183e93d1018eed63e3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ab94(int param_1)

{
  if (param_1 != 0) {
    fence();
    fence();
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003abb4.
 * REA evidence: ev_5fbba4abf4ea2eff1bc5306075f08f6a3f7fc633c57dffcadfbcc6a38dc7148d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003abb4(byte *param_1)

{
  uint uVar1;
  
  if (param_1 != (byte *)0x0) {
    uVar1 = *param_1 & 0xfc;
    fence();
    fence();
    *(uint *)(uVar1 + DAT_ram_3004bf44) =
         ~(7 << ((*param_1 & 3) << 2)) & *(uint *)(DAT_ram_3004bf44 + uVar1);
    FUN_ram_4003ab72();
    fence();
    **(undefined4 **)(param_1 + 8) = 0;
    FUN_ram_4003ab94(param_1);
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_ram_4003aafe(param_1);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003ac26.
 * REA evidence: ev_a74d0bb259fb9a4160fb38d52492adbab971113e935257df3ff2b43b956d2927
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ac26(int param_1,int param_2,undefined4 param_3)

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


/* NanoCore 1.12, address 0x4003ac36.
 * REA evidence: ev_7c2e98594992cc51e8791cbfe81d01f032a5a38669a397327503c29d9652edcf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ac36(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_ram_4000303c(param_1 + 0xc,param_2,0x20);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003ac5a.
 * REA evidence: ev_70f6e524ef341c9f839a1ba7b7cc5b97fb2cb838cfc905ba27153a914040e3af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ac5a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0xffffffea;
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_ram_4003aafe();
      uVar1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    return uVar1;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003ac8e.
 * REA evidence: ev_1a858166a7fd9ed9d346bf2d872f5e1b4555cbf9ae3924e2c8d5d16325c90f48
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4003ac8e(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = &DAT_ram_3004bac0;
  iVar2 = 0;
  do {
    if (puVar1[0x491] == '\0') {
      iVar3 = iVar2 * 0x3c;
      (&DAT_ram_3004bf51)[iVar3] = 1;
      *(undefined2 *)(&DAT_ram_3004bf52 + iVar3) = 0;
      (&DAT_ram_3004bf54)[iVar3] = 0;
      (&DAT_ram_3004bf80)[iVar2 * 0xf] = 0;
      (&DAT_ram_3004bf84)[iVar2 * 0xf] = 0;
      (&DAT_ram_3004bf88)[iVar2 * 0xf] = 0;
      return &DAT_ram_3004bf50 + iVar3;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x3c;
  } while (iVar2 != 8);
  return (undefined1 *)0x0;
}


/* NanoCore 1.12, address 0x4003acec.
 * REA evidence: ev_293e922a71adafb8ac7f42dfcd300bc9c94a561172db42e800c74b871b2aa34e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003acec(void)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  DAT_ram_3004bf44 = (undefined4 *)&DAT_ram_10000000;
  iVar2 = 0;
  puVar1 = &DAT_ram_3004bac0;
  do {
    puVar1[0x490] = (char)iVar2;
    *(int *)(puVar1 + 0x498) = iVar2 * 0x40 + 0x10000100;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x3c;
  } while (iVar2 != 8);
  *(undefined4 *)(gp + -0x4d4) = 0;
  puVar1 = &DAT_ram_3004bac0;
  do {
    puVar3 = puVar1;
    *(undefined **)(puVar3 + 0x1c) = DAT_ram_3004c130;
    mstatus = mstatus;
    puVar1 = puVar3 + 0x20;
    DAT_ram_3004c130 = puVar3;
  } while ((undefined *)(gp + -0x6c4) != puVar3 + 0x20);
  fence();
  *DAT_ram_3004bf44 = 0;
  fence();
  DAT_ram_3004bf44[1] = 0;
  return 0;
}


/* NanoCore 1.12, address 0x4003ad62.
 * REA evidence: ev_5e789afa215192d661fc62a96b6893f90987c37f6dece0ee1dd2f0c6694bd9b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ad62(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_ram_3004bac0;
  uVar1 = *(uint *)(DAT_ram_3004bf44 + 0x10);
  fence();
  uVar2 = 0;
  if (uVar1 != 0) {
    fence();
    *(uint *)(DAT_ram_3004bf44 + 0x10) = uVar1;
    do {
      if (((puVar3[0x491] != '\0') && (((byte)puVar3[0x492] & uVar1) != 0)) &&
         (*(code **)(puVar3 + 0x4c0) != (code *)0x0)) {
        (**(code **)(puVar3 + 0x4c0))(*(undefined4 *)(puVar3 + 0x4c4));
      }
      uVar1 = uVar1 >> 4;
    } while ((puVar3 != (undefined *)0x3004bc64) && (puVar3 = puVar3 + 0x3c, uVar1 != 0));
    uVar2 = 1;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4003adcc.
 * REA evidence: ev_3f68fc63a88c7938ba3119ebff14dc06dc1f4cd1a7e7e21546eb93150048172d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003adcc(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uStack_24;
  
  if ((((param_1 == 0) || (0x1fffffe < param_4 - 1)) || (((param_2 | param_3) & 7) != 0)) ||
     (iVar1 = FUN_ram_4003a9a2(param_1 + 0xc,param_5,&uStack_24), iVar1 != 0)) {
    uVar3 = 0xffffffea;
  }
  else {
    puVar2 = (uint *)FUN_ram_4003aa9c();
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
        FUN_ram_4003a76c(param_3,param_4);
      }
      else {
        *puVar2 = *(uint *)(param_1 + 0x28) & 0x3f | uStack_24 | 0x100;
        puVar2[6] = 0x14;
        FUN_ram_4003a7aa(param_2,param_4);
      }
      FUN_ram_4003aada(0,puVar2,param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4003ae92.
 * REA evidence: ev_d3543934bb9d91a38814801a2cd57dd4a7f4bb961bdc708228f223d0f66c9493
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ae92(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

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
      (iVar2 = FUN_ram_4003a9a2(param_1 + 0xc,param_5,auStack_44), iVar2 != 0)))) {
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
      puVar3 = (uint *)FUN_ram_4003aa9c();
      if (puVar3 == (uint *)0x0) {
        FUN_ram_4003aafe(param_1);
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
        FUN_ram_4003a76c(param_2,param_4);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x10);
        *(undefined1 *)(param_1 + 2) = 2;
        *puVar3 = uVar5 & 0x3f | auStack_44[0] | 0x100;
        puVar3[1] = uVar4;
        puVar3[2] = param_2;
        puVar3[4] = 0x40;
        puVar3[6] = 4;
        FUN_ram_4003a7aa(param_2,param_4);
      }
      iVar2 = FUN_ram_4003aada(iVar2,puVar3,param_1);
      param_2 = param_2 + param_4;
    }
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 3) = 1;
    uVar6 = 0;
  }
  return uVar6;
}


/* NanoCore 1.12, address 0x4003afac.
 * REA evidence: ev_bd2c8d9bb581b3723278488246f421bfc21535ae359061232927e1d4401ddb2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003afac(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (byte *)0x0) {
    iVar1 = *(int *)(param_1 + 0x38);
    uVar2 = 0xffffffea;
    if (iVar1 != 0) {
      do {
        FUN_ram_4003a76c(iVar1,0x20);
        iVar1 = *(int *)(iVar1 + 0x1c);
      } while (iVar1 != 0);
      if (param_1[3] == 0) {
        param_1[2] = 4;
      }
      fence();
      fence();
      *DAT_ram_3004bf44 =
           ~(7 << ((uint)*param_1 << 2 & 0x1f)) & *DAT_ram_3004bf44 |
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


