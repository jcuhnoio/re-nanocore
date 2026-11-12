/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40034000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4003400e.
 * REA evidence: ev_d78b020fc2391e90641ebcce2f8425c76c5406c26e4d9c424f64e05390e2a98e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40034022) */
/* WARNING: Removing unreachable block (ram,0x4003402a) */

void FUN_ram_4003400e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003a7fc(s_PD_17_ram_400957d0);
  FUN_ram_4003a8aa(iVar1 / 0x20,iVar1 % 0x20);
  return;
}


/* NanoCore 1.10, address 0x40034036.
 * REA evidence: ev_cf434419dab3a1ed7eb20dad18a1568de5673e3cb66ca0275e314e545b2202da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034036(undefined4 param_1)

{
  FUN_ram_4003400e(param_1,0);
  FUN_ram_40033f38(param_1,0);
  FUN_ram_40033fa4(param_1,0);
  return 0;
}


/* NanoCore 1.10, address 0x40034076.
 * REA evidence: ev_6f2652471b9d8d6f0f87fab95a685b01d11e4df04b539df199f16e878b89d7a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034076(int *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar1 = FUN_ram_4003a7fc(param_2);
    if (-1 < (int)uVar1) {
      *param_1 = (int)uVar1 >> 5;
      param_1[1] = uVar1 & 0x1f;
      FUN_ram_4003ab2c();
      return;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400340aa.
 * REA evidence: ev_e370beb7780f8b635f4ae3c34b71560113ff97d32ab56ff7cdff7b82312ba9a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400340aa(undefined4 *param_1,int param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (param_2 != 0) {
    FUN_ram_4003a8aa();
    return;
  }
  FUN_ram_4003a87c(*param_1,param_1[1]);
  return;
}


/* NanoCore 1.10, address 0x400340c0.
 * REA evidence: ev_d39a0ce4dcf1b19611db3d2058d84f2a9508105823ae3e8bada0c393e85424de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400340c0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_a4;
  undefined4 extraout_a4_00;
  int iVar5;
  int iVar6;
  
  if (param_2 != (int *)0x0) {
    uVar3 = 0;
    while (uVar3 < (uint)param_2[1]) {
      iVar5 = *param_2;
      iVar6 = uVar3 + 2;
      uVar1 = (uint)*(byte *)(uVar3 + iVar5 + 1);
      iVar2 = iVar5 + iVar6;
      if ((*(char *)(iVar5 + uVar3) == '\0') && (uVar1 == 1)) {
        FUN_ram_4003f052((uint)*(byte *)(iVar5 + iVar6) * 1000);
        param_5 = extraout_a4;
      }
      else {
        uVar4 = uVar1;
        if (uVar1 == 0) {
          uVar4 = 0;
          iVar2 = 0;
        }
        (**(code **)(param_1 + 0x10))
                  (*(char *)(iVar5 + uVar3),0,iVar2,uVar4,param_5,*(code **)(param_1 + 0x10));
        param_5 = extraout_a4_00;
      }
      uVar3 = uVar1 + iVar6;
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4003418c.
 * REA evidence: ev_f901f84e539da5901dd25a2cb764d23a406d6459f43cba65d10ef6bbcd8dfcb1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003418c(void)

{
  FUN_ram_40034076(0x3007b808,s_PD_23_ram_40092d38);
  FUN_ram_400340aa(0x3007b808,1);
  FUN_ram_4003f052(1000);
  FUN_ram_400340aa(0x3007b808,0);
  FUN_ram_4003f052(10000);
  FUN_ram_400340aa(0x3007b808,1);
  FUN_ram_4003f052(50000);
  return 0;
}


/* NanoCore 1.10, address 0x400341e6.
 * REA evidence: ev_c3ffccb8245799ad93480b2ae413e61d4a99463673e76f717c4d6a28891ac807
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400341e6(void)

{
  FUN_ram_400369c8(0x10);
  FUN_ram_40036a22(0x10);
  return;
}


/* NanoCore 1.10, address 0x400341fa.
 * REA evidence: ev_c2162641a6889ddab174313a0e27a69e4ec638fc67a5c2063488a420c0644c30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400341fa(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40036ae8(0x10);
  if (iVar1 != 0) {
    FUN_ram_400341e6();
  }
  iVar1 = FUN_ram_400369fe(0x10);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_400369a4(0x10), iVar1 < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_ram_40038aec();
    FUN_ram_4003ec9e(0x20,FUN_ram_40038b62,0);
    FUN_ram_4003ec56(0x20);
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40034248.
 * REA evidence: ev_ce73cc033e49f9ca120f0b7aa910462e2d5bf05b8d64a9fd2bcd8ce06a9325e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40034248(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40038e64();
  return iVar1 == 0;
}


/* NanoCore 1.10, address 0x40034284.
 * REA evidence: ev_9e50c23ff40bd7c4a6996fa485cd3696b8de111be3f1d617d0bf6e20c5d475f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034284(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003a504(param_2);
  uVar2 = 0xfffffff6;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x400342bc.
 * REA evidence: ev_6049ad8e88cad9309bbc7a4b5bc42ed772b582d0ba8d2225776425a93615842b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400342bc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003a504(*param_2);
  FUN_ram_4003a5ca(iVar1,param_2 + 1,1000);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(iVar1 + 0x56);
  return 0;
}


/* NanoCore 1.10, address 0x400342f0.
 * REA evidence: ev_bbbf49082c87a5f1afb6ce0ce454c0d5fe412563fe1011d56292c263acb29203
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400342f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003a504(param_2);
  *param_3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4003a5ca(iVar1,param_3,1000);
    return uVar2;
  }
  return 0xfffffff6;
}


/* NanoCore 1.10, address 0x4003431e.
 * REA evidence: ev_b420210cbb33b8dcf15923041fed19369095119b7ea33563d53798da76f31618
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003431e(void)

{
  int iVar1;
  void *__s;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003a77a();
  if (iVar1 == 0) {
    FUN_ram_4003ec9e(0x5c,FUN_ram_4003a6b6,0);
    FUN_ram_4003ec56(0x5c);
    FUN_ram_4003a37c(1);
    FUN_ram_4003a7b0(DAT_ram_40096430);
    __s = (void *)FUN_ram_40005666(0x50);
    if (__s != (void *)0x0) {
      memset(__s,0,0x50);
      uVar2 = FUN_ram_4004093a(__s,&DAT_ram_400927fc,&PTR_FUN_ram_40034394_ram_40095970,0);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40034394.
 * REA evidence: ev_34a41947fbfe465b174c97b8ffee4f7513dd7ce0598ae9978cc7353b36dfbc2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034394(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)FUN_ram_4003a504(param_2);
  FUN_ram_4003a792();
  if (puVar2 == (undefined1 *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    if (param_3 == 0) {
      FUN_ram_4003a39c(*puVar2,0);
      if (*(int *)(puVar2 + 4) == 0) {
        FUN_ram_40004816(*(undefined4 *)(puVar2 + 0x8c));
        *(undefined4 *)(puVar2 + 0x8c) = 0;
        return 0;
      }
    }
    else {
      FUN_ram_4003a3c6(puVar2,*(undefined4 *)(puVar2 + 0x10));
      puVar2[100] = 0;
      if (*(int *)(puVar2 + 4) == 0) {
        puVar2[100] = 1;
        uVar1 = FUN_ram_400047e8(s_aicos_sem_ram_40095964,0,0);
        *(undefined4 *)(puVar2 + 0x8c) = uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003440c.
 * REA evidence: ev_e5efd79ac8638a4f6dacee93c8255ef5568fd1457f18b48593bb341831bfd3b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40034414) */
/* WARNING: Removing unreachable block (ram,0x40034420) */

void FUN_ram_4003440c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2 / 0x20;
  param_2 = param_2 % 0x20;
  FUN_ram_4003a9f0(iVar1,param_2,1);
  if (param_3 == 2) {
    uVar2 = 3;
  }
  else if (param_3 == 3) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
    if (param_3 != 1) {
      FUN_ram_4003aa6a(iVar1,param_2,0);
      FUN_ram_4003ab2c(iVar1,param_2);
      return;
    }
  }
  FUN_ram_4003aa6a(iVar1,param_2,uVar2);
  FUN_ram_4003aaec(iVar1,param_2);
  return;
}


/* NanoCore 1.10, address 0x4003447a.
 * REA evidence: ev_fc9b19d9d25f5b2fdf1966323b4bc72c8446dce894580f1fe38331dc73077858
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40034484) */
/* WARNING: Removing unreachable block (ram,0x40034488) */

void FUN_ram_4003447a(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 / 0x20;
  if (param_3 != 0) {
    FUN_ram_4003a8aa(iVar1);
    FUN_ram_4003abae(iVar1,param_2 % 0x20,1);
    return;
  }
  FUN_ram_4003a87c(iVar1);
  return;
}


/* NanoCore 1.10, address 0x400344d4.
 * REA evidence: ev_14810f3e2f69264890f5be0527b440d542e067d5a2f1bddedc20f2fada8152cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400344e2) */
/* WARNING: Removing unreachable block (ram,0x400344e8) */

undefined4
FUN_ram_400344d4(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_3 < 5) {
    uVar1 = (&DAT_ram_400959a4)[param_3];
  }
  FUN_ram_4003aaaa(param_2 / 0x20,param_2 % 0x20,uVar1);
  FUN_ram_4003ec9e(param_2 + 0x60,param_4,param_5);
  FUN_ram_4003ec56(param_2 + 0x60);
  return 0;
}


/* NanoCore 1.10, address 0x40034528.
 * REA evidence: ev_a0d53376ce4a4ab1bccd059002f05c97e3ea2f828258e77c4899fa4fac730030
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034528(int param_1)

{
  uint uVar1;
  uint uStack_28;
  uint auStack_24 [4];
  
  param_1 = param_1 + -0x44;
  uStack_28 = 0;
  auStack_24[0] = 0;
  FUN_ram_4003a932(param_1,&uStack_28);
  FUN_ram_4003a912(param_1,auStack_24);
  uStack_28 = uStack_28 & auStack_24[0];
  uVar1 = 0;
  do {
    if ((uStack_28 >> (uVar1 & 0x1f) & 1) != 0) {
      FUN_ram_4003ec12(param_1 * 0x20 + 0x60 + uVar1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x20);
  FUN_ram_4003a952(param_1,0xffffffff);
  return 1;
}


/* NanoCore 1.10, address 0x40034592.
 * REA evidence: ev_d167c2c9b0ac57ad02642492d5b17a8c1ca438aa215dfad938e0ed8ecc6ac0e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400345a2) */
/* WARNING: Removing unreachable block (ram,0x400345a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034592(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2 / 0x20;
  param_2 = param_2 % 0x20;
  if (param_3 == 0) {
    FUN_ram_4003a8d8(uVar1,param_2);
  }
  else {
    uVar3 = 1 << (uVar1 & 0x1f);
    if ((uVar3 & _DAT_ram_3007b810) == 0) {
      iVar2 = uVar1 + 0x44;
      FUN_ram_4003ec9e(iVar2,FUN_ram_40034528,0);
      FUN_ram_4003ec56(iVar2);
      FUN_ram_4003ec56(iVar2);
      _DAT_ram_3007b810 = _DAT_ram_3007b810 | uVar3;
    }
    FUN_ram_4003a99e(uVar1,param_2);
    FUN_ram_4003abae(uVar1,param_2,2);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40034718.
 * REA evidence: ev_b742b0aebad599623349f822a94d6f8d4ab049dc22d8ccfa12750017004f60b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034718(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_ram_30046fb0;
  DAT_ram_30046f49 = (undefined1)DAT_ram_30046fb0;
  iVar3 = FUN_ram_4003ae12(&DAT_ram_30046fb0);
  if (iVar3 == 0) {
    FUN_ram_4000305c((uVar1 & 0xff) * 0xe4 + 0x3007b814,&DAT_ram_30046f24,0xe4);
    uVar2 = DAT_ram_30046fec;
    if (DAT_ram_30046fc4 != 0) {
      FUN_ram_4003ec9e(DAT_ram_30046fec,FUN_ram_4003479e,0);
      FUN_ram_4003ec56(uVar2);
    }
    FUN_ram_4003fcb8(&DAT_ram_30046f24,PTR_DAT_ram_400927b4_ram_30046fb4);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003479e.
 * REA evidence: ev_400d8dc9c3130e73f6fec476a199ab60259fd98ec8a933d6df3c679041faf3d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003479e(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_29;
  undefined4 uStack_28;
  byte *pbStack_24;
  
  iVar4 = 0x3007b814;
  iVar5 = 0;
  do {
    if (*(int *)(iVar4 + 200) == param_1) goto LAB_ram_400347ce;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xe4;
  } while (iVar5 != 8);
  iVar5 = 0;
LAB_ram_400347ce:
  iVar4 = iVar5 * 0xe4;
  uVar1 = *(uint *)(*(int *)(&DAT_ram_3007b8a8 + iVar4) + 0x40);
  fence();
  fence();
  if (*(code **)(&DAT_ram_3007b8c0 + iVar4) == (code *)0x0) {
    for (iVar3 = 0; iVar3 < (int)(*(uint *)(*(int *)(&DAT_ram_3007b8a8 + iVar4) + 0x9c) & 0xff);
        iVar3 = iVar3 + 1) {
      fence();
    }
    fence();
    *(undefined4 *)(*(int *)(&DAT_ram_3007b8a8 + iVar5 * 0xe4) + 0x3c) = 0xffff;
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 0x400) != 0) {
      uStack_28 = 1;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007b8c0 + iVar4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007b8a8 + iVar4) + 0x3c) = 0x400;
    }
    if ((uVar1 & 4) != 0) {
      local_29 = *(byte *)(*(int *)(&DAT_ram_3007b8a8 + iVar4) + 0x10);
      fence();
      uStack_28 = 3;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007b8c0 + iVar5 * 0xe4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007b8a8 + iVar5 * 0xe4) + 0x3c) = 4;
    }
    if ((uVar1 & 0x20) != 0) {
      pbStack_24 = &local_29;
      iVar4 = iVar5 * 0xe4;
      uStack_28 = 0;
      (**(code **)(&DAT_ram_3007b8c0 + iVar4))(&uStack_28);
      fence();
      *(uint *)(*(int *)(&DAT_ram_3007b8a8 + iVar4) + 0x10) = (uint)*pbStack_24;
      uStack_28 = 2;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007b8c0 + iVar4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007b8a8 + iVar4) + 0x3c) = 0x20;
    }
    if ((uVar1 & 0x80) != 0) {
      uStack_28 = 4;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007b8c0 + iVar5 * 0xe4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007b8a8 + iVar5 * 0xe4) + 0x3c) = 0x80;
    }
    if ((uVar1 & 1) != 0) {
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007b8a8 + iVar5 * 0xe4) + 0x3c) = 1;
    }
    uVar2 = 1;
    if ((uVar1 & 0x40) != 0) {
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007b8a8 + iVar5 * 0xe4) + 0x3c) = 0x40;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40034a30.
 * REA evidence: ev_675408425719895bbccae4d0ef6b40435b3bb98ca6e0f50ee99f1eed1648144a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034a30(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0x3007cf40;
  *(undefined4 *)(param_1 + 0x74) = 0x1000;
  *(undefined4 *)(param_1 + 0x78) = 0x800;
  *(undefined4 *)(param_1 + 0x84) = 0x3007bf40;
  *(undefined4 *)(param_1 + 0x88) = 0x1000;
  *(undefined4 *)(param_1 + 0x8c) = 0x800;
  FUN_ram_4000760c(*(undefined4 *)(param_1 + 0x9c));
  return 0;
}


/* NanoCore 1.10, address 0x40034adc.
 * REA evidence: ev_a3df9ea6da914314cc8ff6d2ef5ed3856793023b52407d10f5448c6fea1ac9eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034adc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_ram_400076a8(*(undefined4 *)(param_1 + 0x9c));
    FUN_ram_4003b9e0(param_1 + 0x58);
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    FUN_ram_4003ba2a(param_1 + 0x58);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff6;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40034cda.
 * REA evidence: ev_ea41971923498e3fe649313cc0c12bba7f001619e5ece6b0f5042963c213d690
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034cda(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_ram_40038994(*(undefined4 *)(param_1 + 0x6c));
  }
  else {
    FUN_ram_40038972();
  }
  return 0;
}


/* NanoCore 1.10, address 0x40034d00.
 * REA evidence: ev_26e142e4adf1e5fd67d5cc2873b01f0cd708ce6e5789bf3318df7d51e973b871
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40034d00(int param_1)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40040228(*(int *)(param_1 + 0x50) + 4);
  FUN_ram_4003893e(*(undefined4 *)(param_1 + 0x6c),aiStack_14);
  return iVar1 * 0x800 +
         ((aiStack_14[0] + 0x1000) - *(int *)(param_1 + 0x78)) +
         (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0x70);
}


/* NanoCore 1.10, address 0x40034d3e.
 * REA evidence: ev_9bc15b6b64bbab270a6cf37c3e6cfe6bdfdbcd2105374ffcb3bf7390fe2a28d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034d3e(void)

{
  undefined4 uVar1;
  
  FUN_ram_4003b2d8(&DAT_ram_30047088,DAT_ram_30047100);
  DAT_ram_3004707c = &PTR_LAB_ram_400349a0_ram_30047008;
  DAT_ram_30047104 = 0;
  if (_DAT_ram_30049dbc != 0) {
    DAT_ram_300470cc = _DAT_ram_30049dbc;
    uVar1 = FUN_ram_4003f848(&DAT_ram_30047030,PTR_s_i2s0_sound_ram_400959d7_1_ram_300470fc,3);
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40034d9a.
 * REA evidence: ev_0b1a209b8dc5c92a6b7ca58ad2fbaa8cc5b1555ff1dd489d6b2c616c696d3445
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034d9a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + -0x58;
  if (param_2 == 1) {
    FUN_ram_4003f8bc(iVar1);
    iVar1 = 0x3007cf40;
    fence();
    custom0();
    do {
      custom0();
      iVar1 = iVar1 + 0x20;
    } while (iVar1 != 0x3007df40);
    fence();
    custom0();
  }
  else if (param_2 == 2) {
    iVar2 = 0x3007bf40;
    fence();
    custom0();
    do {
      custom0();
      iVar2 = iVar2 + 0x20;
    } while (iVar2 != 0x3007cf40);
    fence();
    custom0();
    if (*(char *)(param_1 + 0x7c) == '\0') {
      FUN_ram_4003fa0a(iVar1,0x3007bf40);
      *(undefined1 *)(param_1 + 0x7c) = 1;
    }
    else {
      FUN_ram_4003fa0a(iVar1,*(int *)(param_1 + 0x34) + 0x3007bf40);
      *(undefined1 *)(param_1 + 0x7c) = 0;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40034e42.
 * REA evidence: ev_c7783be5bb709af09578904fe389c78e56658b53fbac4e966df80cfc6616becd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40034e42(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_2 == 0) {
    *(undefined1 *)(iVar1 + 0x114) = 0;
    iVar1 = 0;
  }
  else {
    *(undefined1 *)(iVar1 + 0x114) = 1;
    if (*(int *)(iVar1 + 0x118) == 0) {
      uVar2 = FUN_ram_40005666(0xc);
      *(undefined4 *)(iVar1 + 0x118) = uVar2;
    }
    iVar1 = -(uint)(*(int *)(iVar1 + 0x118) == 0);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40034e7e.
 * REA evidence: ev_6fdd0c1285483d0d5e220460628b67b22159e5224882252c9b0dabb5a2255ecf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40034e7e(void)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  iVar1 = FUN_ram_400416ea(&DAT_ram_30047108,PTR_s_qspi0_ram_400959ec_ram_3004718c,
                           &PTR_FUN_ram_40034f3e_ram_400959f4);
  if (iVar1 == 0) {
    FUN_ram_4000560c(auStack_20,&DAT_ram_400959e4,PTR_s_qspi0_ram_400959ec_ram_3004718c);
    DAT_ram_30047208 = FUN_ram_400047e8(auStack_20,0,1);
    if (DAT_ram_30047208 == 0) {
      iVar1 = 5;
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40034ef6.
 * REA evidence: ev_90c1d6a42932b71e935b48e93ccc21561a71d95c5491c88d738c330afcc0f52d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034ef6(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_40004d9a();
  FUN_ram_4003cd5c(param_2);
  FUN_ram_40004dcc();
  return 1;
}


/* NanoCore 1.10, address 0x40034f3e.
 * REA evidence: ev_994f6920280a44b1bdcd4c41bc2058b5c5b556ac83ef7d4122a736ebe19a0acb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40034f3e(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 auStack_48 [5];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  byte bStack_26;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  undefined4 uStack_20;
  uint uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  *(undefined1 *)(iVar1 + 0xec) = 0;
  iVar2 = FUN_ram_400051a2((void *)(iVar1 + 0xf0),param_2,8);
  if ((iVar2 != 0) || (*(char *)(iVar1 + 0xec) != '\0')) {
    memcpy((void *)(iVar1 + 0xf0),param_2,8);
    FUN_ram_4000505c(&uStack_34,0,0x24);
    uStack_34 = *(undefined4 *)(iVar1 + 0x88);
    uStack_2c = *(undefined4 *)(iVar1 + 0x8c);
    uStack_30 = *(uint *)(param_2 + 4);
    if (100000000 < *(uint *)(param_2 + 4)) {
      uStack_30 = 100000000;
    }
    if (uStack_30 < 100000) {
      uStack_30 = 100000;
    }
    uVar5 = *(uint *)(iVar1 + 0x90);
    uVar6 = uVar5;
    if (uStack_30 != 0) {
      uVar6 = uVar5 % uStack_30;
    }
    if (uVar6 == 0) {
      uStack_30 = uVar5;
    }
    if (uStack_30 < 32000000) {
      uStack_30 = 32000000;
    }
    uVar6 = (uint)*param_2;
    bStack_26 = (byte)(((uVar6 ^ 4) << 0x1d) >> 0x1f);
    bStack_22 = *param_2 & 1;
    bStack_24 = (byte)(((uVar6 ^ 0x10) << 0x1b) >> 0x1f);
    uStack_20 = *(undefined4 *)(iVar1 + 0x108);
    bStack_23 = (byte)((uVar6 << 0x1e) >> 0x1f);
    uStack_1c = *(uint *)(iVar1 + 0x110);
    if (4 < uStack_1c) {
      uStack_1c = 0;
    }
    uVar6 = 0;
    if (*(int *)(iVar1 + 0x10c) != 0) {
      uVar6 = 0x4000;
    }
    iVar2 = iVar1 + 0x9c;
    uStack_1c = uStack_1c | uVar6;
    iVar3 = FUN_ram_4003c094(iVar2,&uStack_34);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*(char *)(iVar1 + 0x104) == '\0') {
      FUN_ram_4000505c(auStack_48,0,0x14);
      auStack_48[0] = *(undefined4 *)(iVar1 + 0x94);
      iVar3 = FUN_ram_4003c6ce(iVar2,auStack_48);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_ram_4003cafc(iVar2,&LAB_ram_40034f14,iVar1);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x98);
      FUN_ram_4003ec9e(uVar4,FUN_ram_40034ef6,iVar2);
      FUN_ram_4003ec56(uVar4);
      FUN_ram_4003ec56(*(undefined4 *)(iVar1 + 0x98));
    }
    uVar6 = *(uint *)(param_2 + 4);
    if (100000000 < *(uint *)(param_2 + 4)) {
      uVar6 = 100000000;
    }
    FUN_ram_4003c342(iVar2,uVar6);
  }
  *(undefined1 *)(iVar1 + 0x104) = 1;
  return 0;
}


