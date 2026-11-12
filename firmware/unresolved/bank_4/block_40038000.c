/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40038000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40038030.
 * REA evidence: ev_4fd8d52eb7fadc1971bfffb51921e55b12d1e50f493c35f107839643feca83fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038030(int param_1)

{
  FUN_ram_40037ff0(param_1,1,1,0x40,0x1f);
  FUN_ram_40037fc2(param_1 + 0x880,&DAT_ram_30047314);
  FUN_ram_40037fc2(param_1 + 0x884,&DAT_ram_30047324);
  FUN_ram_40037fc2(param_1 + 0x888,&DAT_ram_30047334);
  FUN_ram_40037fc2(param_1 + 0x88c,&DAT_ram_30047344);
  return;
}


/* NanoCore 1.10, address 0x4003809a.
 * REA evidence: ev_ce8b1047c1e5fc8e9ed1a296866a7fc52fef008cf116c21d5b51e9492d6c2710
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003809a(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     undefined4 param_7,undefined4 param_8,undefined4 param_9,uint param_10,
                     uint param_11)

{
  FUN_ram_40037c88(param_1 + 0x20,0x7f00,(param_4 & 0x7f) << 8);
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


/* NanoCore 1.10, address 0x4003814a.
 * REA evidence: ev_6ec66e1541cf00ce3abfa9e618895e20a0a0f7aaa7ba7e465c9ddeaa6d3ad761
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003814a(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0x60) = (param_3 & 0xff) << 0x10 | param_2 & 0xff;
  fence();
  *(uint *)(param_1 + 100) = (param_5 & 0xff) << 0x10 | param_4 & 0xff;
  return;
}


/* NanoCore 1.10, address 0x40038178.
 * REA evidence: ev_fa61838e2cf8814672e6ef6e2845a30ff95017b22cb8978b5640e9c5f7fd04e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038178(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1 + 0x20,1);
    return;
  }
  FUN_ram_40037c74(param_1 + 0x20,1);
  return;
}


/* NanoCore 1.10, address 0x4003818a.
 * REA evidence: ev_ac4f2f248fbf34f9a457e135d2ea444f41d876d0444c346f2fd52ed7490cf333
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003818a(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_ram_300473c4;
  if (param_2 - 1U < 3) {
    puVar4 = (undefined4 *)(&PTR_DAT_ram_30047424_ram_40095c7c)[param_2 - 1U];
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


/* NanoCore 1.10, address 0x400381e4.
 * REA evidence: ev_168c33dc8a86b94b2577a045b994f5d8463a5913da92e388ce76a4059767ee4f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400381e4(int param_1)

{
  int iVar1;
  undefined4 local_40 [14];
  
  FUN_ram_40037cd4(0);
  iVar1 = 0;
  do {
    fence();
    *(undefined4 *)(param_1 + 0x70 + iVar1) = *(undefined4 *)((int)local_40 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  return 0;
}


/* NanoCore 1.10, address 0x4003821c.
 * REA evidence: ev_af9a085eb8c2efd75474eb1af2237f9b67db0fa183a5cacb5f9e22e05524ea8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003821c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0xa4) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x10c) = (param_5 & 0x1fff) << 0x10 | param_4 & 0x1fff;
  return;
}


/* NanoCore 1.10, address 0x4003824e.
 * REA evidence: ev_89b874d88f7106ded2138e7549c6e74f49632fa8cbe3288ddca0bece74a9141b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003824e(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1 + 0xa0,0x200000);
    return;
  }
  FUN_ram_40037c74(param_1 + 0xa0,0x200000);
  return;
}


/* NanoCore 1.10, address 0x40038264.
 * REA evidence: ev_b3ba0e4fbfb89db384ebe126881e4192553b53e93e87761ec5f535f3e0b56049
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038264(int param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 != 0) {
    FUN_ram_40037c88(param_1 + 0xa0,0xffc00004,(param_3 & 3) << 0x16 | param_2 << 0x18 | 4);
    return;
  }
  FUN_ram_40037c74(param_1 + 0xa0,4);
  return;
}


/* NanoCore 1.10, address 0x4003828a.
 * REA evidence: ev_dd843118b8c1028e92e24341d7cb7ac240664d6c879983d754abb820e68ce36b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003828a(int param_1,uint param_2)

{
  FUN_ram_40037c88(param_1 + 0xa0,0x7f00,(param_2 & 0x7f) << 8);
  return;
}


/* NanoCore 1.10, address 0x4003829e.
 * REA evidence: ev_ae3af4b4ab3cf87b48b45ec5d2ffbcf4450b2b117e4e4c561739b0ca81c2272d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003829e(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    fence();
    *(uint *)(param_1 + 0xac) = param_2 & 0xffffff;
    FUN_ram_40037c9c(param_1 + 0xa0,2);
    return;
  }
  FUN_ram_40037c74(param_1 + 0xa0,2);
  return;
}


/* NanoCore 1.10, address 0x400382c4.
 * REA evidence: ev_12b3163a9dd099e7173f87f302d2a560303a92c526f32ea94a67bc93d0ddc2f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400382c4(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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


/* NanoCore 1.10, address 0x4003831e.
 * REA evidence: ev_9f43efcbe83915f98d5d4df96b77b088af4732bc6c71739c8e275d1bc44c6f67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003831e(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1 + 0xa0,1);
    return;
  }
  FUN_ram_40037c74(param_1 + 0xa0,1);
  return;
}


/* NanoCore 1.10, address 0x40038330.
 * REA evidence: ev_b98a5f50ce2842ff3f0d3a1eb164d82eb368c45b51d3875b30600e3d055274bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038330(int param_1,uint param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_ram_40037c9c();
    return;
  }
  FUN_ram_40037c74(param_1 + 0xb0,1 << (param_2 & 0x1f));
  return;
}


/* NanoCore 1.10, address 0x40038344.
 * REA evidence: ev_fc908b9bff4c3975539ad1c6565e4f231142be6dab09801a6e8801da2509445c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038344(void)

{
  return;
}


/* NanoCore 1.10, address 0x40038346.
 * REA evidence: ev_4b06600bf99789c287c2c5194271e04be71b17cb49fc649865c840b58b4c950a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038346(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6)

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


/* NanoCore 1.10, address 0x400383fa.
 * REA evidence: ev_335c4f037e9fd4cfb57d01d92c1a420838485de969dce162639afd5633b91a04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400383fa(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1 + 0x120,1);
    return;
  }
  FUN_ram_40037c74(param_1 + 0x120,1);
  return;
}


/* NanoCore 1.10, address 0x4003840c.
 * REA evidence: ev_9fe04d28c10cdced5440898328ed5643398e60103a4e8d92f6160c0ae12a3c83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003840c(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1 + 0x1d4,param_3);
    return;
  }
  FUN_ram_40037c74(param_1 + 0x1d4,param_3);
  return;
}


/* NanoCore 1.10, address 0x4003841e.
 * REA evidence: ev_df6191f1e3fe21e05dbac5490a4219d4657fbad8d51d02844d2a0e6498ec02bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003841e(int param_1)

{
  fence();
  return *(undefined4 *)(param_1 + 0x1d8);
}


/* NanoCore 1.10, address 0x4003842a.
 * REA evidence: ev_e04729d19fe0ebcaf7c70e48643ec10a063ea2fa1f0a1f633ba0e8c0f020f308
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003842a(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x1d8) = param_2;
  return;
}


/* NanoCore 1.10, address 0x40038436.
 * REA evidence: ev_0faba46550c084e24dc5598139fcce4373e50c1857caba46745ec94727ab191e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038436(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1 + 0x1d0,1);
    return;
  }
  FUN_ram_40037c74(param_1 + 0x1d0,1);
  return;
}


/* NanoCore 1.10, address 0x40038448.
 * REA evidence: ev_da96a60b588fedf39855cee9e8569da0cc36c3fc0683112b10d791add569298f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038448(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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


/* NanoCore 1.10, address 0x400384ca.
 * REA evidence: ev_09776ead0f1a43e905440ebe3b1dd1dbc41450eb28ab94e0ad79c328c4c3c20d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400384ca(int param_1,uint param_2,uint param_3)

{
  fence();
  *(uint *)(param_1 + 0x104) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  return;
}


/* NanoCore 1.10, address 0x400384e6.
 * REA evidence: ev_5f1d6152de32bcae645344d178f27aedc5dc3939007173c0b289adc52de9a4a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400384e6(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1,4);
    return;
  }
  FUN_ram_40037c74(param_1,4);
  return;
}


/* NanoCore 1.10, address 0x400384f4.
 * REA evidence: ev_0c0ce4029d645da57b05b28da1ad532a07473d89f063a326e7e1e7ea61613047
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400384f4(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1,2);
    return;
  }
  FUN_ram_40037c74(param_1,2);
  return;
}


/* NanoCore 1.10, address 0x40038502.
 * REA evidence: ev_f2b74d5e3c72d8126f627dbccc2dfb911409a31166e25f9ee37418284d597cba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038502(int param_1,int param_2)

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


/* NanoCore 1.10, address 0x40038526.
 * REA evidence: ev_05af803a4062f94e6dace3ab2f002f9b6599afda0c9add81f7c006258743522e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038526(int param_1,int param_2,int param_3)

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
LAB_ram_4003855c:
      *puVar1 = uVar3;
    }
    else {
      if (param_3 == 2) {
        fence();
        puVar1 = puVar2 + 0x20;
        goto LAB_ram_4003855c;
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


/* NanoCore 1.10, address 0x4003856c.
 * REA evidence: ev_e376caf07495dd30f6d9d13572ca3ef4aaf22bc9c7caefc8f490deeeb96ac916
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003857e) */

int FUN_ram_4003856c(uint param_1,int param_2)

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


/* NanoCore 1.10, address 0x400385aa.
 * REA evidence: ev_d0a0ccb913084ec11ed5e74b1ae4a478b353f40d99dc6c80eafc65fc161a1bc1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400385bc) */

int FUN_ram_400385aa(uint param_1,int param_2)

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


/* NanoCore 1.10, address 0x400385e8.
 * REA evidence: ev_2afbff88e5f69d79264a24770218367e92bd44e0cdc392d29439d09d54fedb3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400385e8(int param_1,uint *param_2,int *param_3,int *param_4,undefined4 *param_5)

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


/* NanoCore 1.10, address 0x4003865a.
 * REA evidence: ev_1fb301ed313df0a38eb9c5fb688206bc9de7e36b195335eeb6eb20b15f71354d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003865a(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 < 8) {
    FUN_ram_40031b48(s_DMA_Ch_d__desc___0x_lx_ram_40095e74,(&DAT_ram_30047950)[param_1 * 0x3c],
                     (&DAT_ram_30047988)[param_1 * 0xf]);
    for (puVar1 = (undefined4 *)(&DAT_ram_30047988)[param_1 * 0xf]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[7]) {
      FUN_ram_40031b48(s_task__0x_lx___cfg___0x_x__src___0_ram_40095e8c,puVar1,*puVar1,puVar1[1],
                       puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7]);
    }
    fence();
    fence();
    fence();
    fence();
    FUN_ram_40031b48(s_Common_register__IRQ_EN_0x_x__IR_ram_40095f08,**(undefined4 **)(gp + -0x6c0),
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
    FUN_ram_40031b48(s_Ch_d_register__Enable_0x_x__Mode_ram_40095f54,
                     (&DAT_ram_30047950)[param_1 * 0x3c],
                     *(undefined4 *)(&DAT_ram_30047958)[param_1 * 0xf],
                     *(undefined4 *)((&DAT_ram_30047958)[param_1 * 0xf] + 0x28),
                     *(undefined4 *)((&DAT_ram_30047958)[param_1 * 0xf] + 4),
                     *(undefined4 *)((&DAT_ram_30047958)[param_1 * 0xf] + 8),
                     *(undefined4 *)((&DAT_ram_30047958)[param_1 * 0xf] + 0xc),
                     *(undefined4 *)((&DAT_ram_30047958)[param_1 * 0xf] + 0x10),
                     *(undefined4 *)((&DAT_ram_30047958)[param_1 * 0xf] + 0x14),
                     *(undefined4 *)((&DAT_ram_30047958)[param_1 * 0xf] + 0x18),
                     *(undefined4 *)((&DAT_ram_30047958)[param_1 * 0xf] + 0x30));
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x400387a2.
 * REA evidence: ev_e14712cbc1681b48f2d26029388c827fdaa3bfe682eb2625f1a1a1a122eba248
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400387a2(int param_1,int param_2,uint *param_3)

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
  FUN_ram_400385e8(*(int *)(param_1 + 0x1c),puVar1,puVar3,puVar5,puVar7);
  if (((((DAT_ram_3004794c >> (local_20 & 0x1f) & 1) != 0) &&
       ((DAT_ram_3004794c >> (uStack_1c & 0x1f) & 1) != 0)) &&
      ((DAT_ram_30047948 >> (uStack_18 & 0x1f) & 1) != 0)) &&
     ((DAT_ram_30047948 >> (auStack_14[0] & 0x1f) & 1) != 0)) {
    iVar8 = 0;
    if (local_20 - 2 < 7) {
      iVar8 = (int)*(char *)(local_20 + 0x40095fee);
    }
    iVar2 = 0;
    if (uStack_1c - 2 < 7) {
      iVar2 = (int)*(char *)(uStack_1c + 0x40095fee);
    }
    iVar4 = -0x16;
    if (auStack_14[0] - 1 < 0x10) {
      iVar4 = (int)s_Ch_d_register__Enable_0x_x__Mode_ram_40095f54[auStack_14[0] + 0x8b];
    }
    iVar6 = -0x16;
    if (uStack_18 - 1 < 0x10) {
      iVar6 = (int)s_Ch_d_register__Enable_0x_x__Mode_ram_40095f54[uStack_18 + 0x8b];
    }
    *param_3 = iVar8 << 9 | iVar2 << 0x19 | iVar4 << 0x16 | iVar6 << 6;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003889c.
 * REA evidence: ev_1d5db0db213201ed29031bc8b0f742eebf50e7e29ba10aeff2cdd55d8cff1597
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void * FUN_ram_4003889c(void)

{
  void *__s;
  uint uVar1;
  void *pvVar2;
  
  uVar1 = mstatus;
  __s = DAT_ram_30047b30;
  mstatus = mstatus & 0xfffffff7;
  pvVar2 = (void *)0x0;
  if (DAT_ram_30047b30 != (void *)0x0) {
    DAT_ram_30047b30 = *(void **)((int)DAT_ram_30047b30 + 0x1c);
    pvVar2 = memset(__s,0,0x20);
  }
  mstatus = uVar1;
  return pvVar2;
}


/* NanoCore 1.10, address 0x400388da.
 * REA evidence: ev_38bd00e2c9f305023e9206a4fd492ec251d34f09cd08f42f8b4c7c153d7939da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400388da(int param_1,int param_2,int param_3)

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
      goto LAB_ram_400388e8;
    }
  }
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x1c) = param_2;
LAB_ram_400388e8:
  *(undefined4 *)(param_2 + 0x14) = 0xfffff800;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return param_2;
}


/* NanoCore 1.10, address 0x400388fe.
 * REA evidence: ev_b3eabe7ea2b3594004721427c528d3bf6557e6261e9e5e985d6dbd2c650d5522
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400388fe(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 0;
    while (iVar2 = iVar1, iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x1c);
      *(int *)(iVar2 + 0x1c) = DAT_ram_30047b30;
      DAT_ram_30047b30 = iVar2;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4003893e.
 * REA evidence: ev_bcaf14fa960a434f42dfcfada7eaa263c7b0ed312a610941e0a1b9f6c6d2db3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003893e(byte *param_1,undefined4 *param_2)

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


/* NanoCore 1.10, address 0x40038972.
 * REA evidence: ev_3989ddc00399b37e06f05a7afb173190d89ae3f48f27e075e2ed25784652517c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038972(int param_1)

{
  if (param_1 != 0) {
    fence();
    fence();
    *(uint *)(*(int *)(param_1 + 8) + 4) = *(uint *)(*(int *)(param_1 + 8) + 4) | 1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40038994.
 * REA evidence: ev_824e008a1a82efaef323933a11178baf2d12f6f10047f8f8b5f7c0317e9aef9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038994(int param_1)

{
  if (param_1 != 0) {
    fence();
    fence();
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x400389b4.
 * REA evidence: ev_e172fa8708f5110b060f6acd6fcff88367f155cc6148728770170149144bc854
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400389b4(byte *param_1)

{
  uint uVar1;
  
  if (param_1 != (byte *)0x0) {
    uVar1 = *param_1 & 0xfc;
    fence();
    fence();
    *(uint *)(uVar1 + DAT_ram_30047944) =
         ~(7 << ((*param_1 & 3) << 2)) & *(uint *)(DAT_ram_30047944 + uVar1);
    FUN_ram_40038972();
    fence();
    **(undefined4 **)(param_1 + 8) = 0;
    FUN_ram_40038994(param_1);
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_ram_400388fe(param_1);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40038a26.
 * REA evidence: ev_ab5b95282b9b964f3bcd68dc9d42dd58b3b6a3252235710bbced0422820abe15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038a26(int param_1,int param_2,undefined4 param_3)

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


/* NanoCore 1.10, address 0x40038a36.
 * REA evidence: ev_0497b92f4550b0941b9363e981beeabe7bede35de2c325b4e62cb59800a5cb1d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038a36(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_ram_4000305c(param_1 + 0xc,param_2,0x20);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40038a5a.
 * REA evidence: ev_8e7cf968e9e94e27733376175cf0fd8e0fde55b2c204bd3008392a5ef60a05ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038a5a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0xffffffea;
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_ram_400388fe();
      uVar1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    return uVar1;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40038a8e.
 * REA evidence: ev_073f6bb0518e2c5694f95f8c959eb9cab8391f6a096d8dcc3767e33b268a3142
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_40038a8e(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = &DAT_ram_300474c0;
  iVar2 = 0;
  do {
    if (puVar1[0x491] == '\0') {
      iVar3 = iVar2 * 0x3c;
      (&DAT_ram_30047951)[iVar3] = 1;
      *(undefined2 *)(&DAT_ram_30047952 + iVar3) = 0;
      (&DAT_ram_30047954)[iVar3] = 0;
      (&DAT_ram_30047980)[iVar2 * 0xf] = 0;
      (&DAT_ram_30047984)[iVar2 * 0xf] = 0;
      (&DAT_ram_30047988)[iVar2 * 0xf] = 0;
      return &DAT_ram_30047950 + iVar3;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x3c;
  } while (iVar2 != 8);
  return (undefined1 *)0x0;
}


/* NanoCore 1.10, address 0x40038aec.
 * REA evidence: ev_e63b2bdd1dc850e4838f0a6a39daaab8c6b0205afc85d0806e72884d8a7894b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038aec(void)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  DAT_ram_30047944 = (undefined4 *)&DAT_ram_10000000;
  iVar2 = 0;
  puVar1 = &DAT_ram_300474c0;
  do {
    puVar1[0x490] = (char)iVar2;
    *(int *)(puVar1 + 0x498) = iVar2 * 0x40 + 0x10000100;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x3c;
  } while (iVar2 != 8);
  *(undefined4 *)(gp + -0x4d4) = 0;
  puVar1 = &DAT_ram_300474c0;
  do {
    puVar3 = puVar1;
    *(undefined **)(puVar3 + 0x1c) = DAT_ram_30047b30;
    mstatus = mstatus;
    puVar1 = puVar3 + 0x20;
    DAT_ram_30047b30 = puVar3;
  } while ((undefined *)(gp + -0x6c4) != puVar3 + 0x20);
  fence();
  *DAT_ram_30047944 = 0;
  fence();
  DAT_ram_30047944[1] = 0;
  return 0;
}


/* NanoCore 1.10, address 0x40038b62.
 * REA evidence: ev_893e0e026ca382f7d7aecb3d302920d9c067a563b8586112f19c2e585d9f76a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038b62(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_ram_300474c0;
  uVar1 = *(uint *)(DAT_ram_30047944 + 0x10);
  fence();
  uVar2 = 0;
  if (uVar1 != 0) {
    fence();
    *(uint *)(DAT_ram_30047944 + 0x10) = uVar1;
    do {
      if (((puVar3[0x491] != '\0') && (((byte)puVar3[0x492] & uVar1) != 0)) &&
         (*(code **)(puVar3 + 0x4c0) != (code *)0x0)) {
        (**(code **)(puVar3 + 0x4c0))(*(undefined4 *)(puVar3 + 0x4c4));
      }
      uVar1 = uVar1 >> 4;
    } while ((puVar3 != (undefined *)0x30047664) && (puVar3 = puVar3 + 0x3c, uVar1 != 0));
    uVar2 = 1;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40038bcc.
 * REA evidence: ev_ccb4f482036947b47d968f0cb1a1f04fca0d4a4ccddc3e2b23de7ecca0a1d442
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038bcc(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uStack_24;
  
  if ((((param_1 == 0) || (0x1fffffe < param_4 - 1)) || (((param_2 | param_3) & 7) != 0)) ||
     (iVar1 = FUN_ram_400387a2(param_1 + 0xc,param_5,&uStack_24), iVar1 != 0)) {
    uVar3 = 0xffffffea;
  }
  else {
    puVar2 = (uint *)FUN_ram_4003889c();
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
        FUN_ram_4003856c(param_3,param_4);
      }
      else {
        *puVar2 = *(uint *)(param_1 + 0x28) & 0x3f | uStack_24 | 0x100;
        puVar2[6] = 0x14;
        FUN_ram_400385aa(param_2,param_4);
      }
      FUN_ram_400388da(0,puVar2,param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40038c92.
 * REA evidence: ev_29e9b964e577710e86b7448b8403b3797d794c50f8b02e72584395b538ae9cc4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038c92(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

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
      (iVar2 = FUN_ram_400387a2(param_1 + 0xc,param_5,auStack_44), iVar2 != 0)))) {
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
      puVar3 = (uint *)FUN_ram_4003889c();
      if (puVar3 == (uint *)0x0) {
        FUN_ram_400388fe(param_1);
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
        FUN_ram_4003856c(param_2,param_4);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x10);
        *(undefined1 *)(param_1 + 2) = 2;
        *puVar3 = uVar5 & 0x3f | auStack_44[0] | 0x100;
        puVar3[1] = uVar4;
        puVar3[2] = param_2;
        puVar3[4] = 0x40;
        puVar3[6] = 4;
        FUN_ram_400385aa(param_2,param_4);
      }
      iVar2 = FUN_ram_400388da(iVar2,puVar3,param_1);
      param_2 = param_2 + param_4;
    }
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 3) = 1;
    uVar6 = 0;
  }
  return uVar6;
}


/* NanoCore 1.10, address 0x40038dac.
 * REA evidence: ev_ea35d62a0688b7d45bc4aa177aceb85a18aabb2d6001b336eda50e0863bb9eb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038dac(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (byte *)0x0) {
    iVar1 = *(int *)(param_1 + 0x38);
    uVar2 = 0xffffffea;
    if (iVar1 != 0) {
      do {
        FUN_ram_4003856c(iVar1,0x20);
        iVar1 = *(int *)(iVar1 + 0x1c);
      } while (iVar1 != 0);
      if (param_1[3] == 0) {
        param_1[2] = 4;
      }
      fence();
      fence();
      *DAT_ram_30047944 =
           ~(7 << ((uint)*param_1 << 2 & 0x1f)) & *DAT_ram_30047944 |
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


/* NanoCore 1.10, address 0x40038e64.
 * REA evidence: ev_4772ad17cd71384533c5dbe661c7ec0126d7244438e5bcbdf64462d9e2bbc8ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038e64(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x40038e68.
 * REA evidence: ev_7d633b91136bc5d64c675e60a198ee690db67a00564d53ab7bc85aa0834da76f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40038e68(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400369fe(0x34);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_400369a4(0x34), iVar1 < 0)) {
    uVar2 = 0xfffffff2;
  }
  else {
    fence();
    _DAT_ram_19010010 = 0x402ffd8;
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40038ea4.
 * REA evidence: ev_ab0b23794facbb2efea337c9dd8f7e85a396d06c3b18112a000def961f98bdc6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038ea4(void)

{
  FUN_ram_400369c8(0x34);
  FUN_ram_40036a22(0x34);
  return 0;
}


/* NanoCore 1.10, address 0x40038ec0.
 * REA evidence: ev_ee1975aa99f7897bef9177026593921ccec31351a44ba3355217ab61fa5fc216
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40038f0c) */
/* WARNING: Removing unreachable block (ram,0x40038f1e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40038ec0(uint param_1)

{
  if (0x3f < param_1) {
    return 0xffffffea;
  }
  fence();
  fence();
  fence();
  do {
    fence();
  } while( true );
}


/* NanoCore 1.10, address 0x40038f28.
 * REA evidence: ev_be59ac3a65f63a573660e3a9635af010727859be2a1aeb40fa9cc1eef79f24b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038f28(int param_1)

{
  fence();
  return *(undefined4 *)(param_1 + 0xc);
}


/* NanoCore 1.10, address 0x40038f32.
 * REA evidence: ev_f6578caa1991f3ca9076eaf7378e874f6d60778f8c0a1dc06c2b0a2b46818208
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038f32(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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


/* NanoCore 1.10, address 0x40038fb8.
 * REA evidence: ev_eab58cedb001c39366139c3b4b0cd988ccf3ccde1cc1a1d1cf6a9f1a35433823
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038fb8(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7)

{
  fence();
  *(uint *)(param_1 + 0x10) =
       (param_3 & 3) << 0x16 | (param_7 & 3) << 2 | (param_6 & 0x7f) << 8 | (param_5 & 3) << 0x10 |
       (param_4 & 1) << 0x15 | param_2 << 0x18 | 1;
  return;
}


