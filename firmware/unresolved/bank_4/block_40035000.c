/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40035000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400350a8.
 * REA evidence: ev_535115036ebf0694ace3a16fc41b3075c68c1c5302218096f129175c2893095a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400350a8(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [16];
  undefined1 local_30 [24];
  
  uVar8 = (uint)*(byte *)(param_2 + 0x15);
  if (uVar8 == 1) {
    auStack_40[0] = *(undefined1 *)(param_2 + 0x14);
    uVar8 = 1;
    uVar3 = 0;
    iVar2 = 1;
  }
  else {
    bVar1 = uVar8 < 2;
    if (bVar1) {
      uVar8 = 1;
    }
    else {
      local_30[0] = *(undefined1 *)(param_2 + 0x14);
    }
    uVar3 = (uint)!bVar1;
    iVar2 = 0;
  }
  uVar7 = (uint)*(byte *)(param_2 + 0x1c);
  uVar6 = uVar8;
  if (uVar7 != 0) {
    uVar4 = (uint)*(byte *)(param_2 + 0x1d);
    if (uVar4 == 1) {
      uVar4 = *(uint *)(param_2 + 0x18);
      puVar5 = auStack_40 + iVar2;
      uVar6 = uVar7;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = (char)(uVar4 >> (uVar6 * 8 & 0x1f));
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
      iVar2 = iVar2 + uVar7;
      uVar6 = 1;
    }
    else if (1 < uVar4) {
      uVar6 = *(uint *)(param_2 + 0x18);
      puVar5 = local_30 + uVar3;
      uVar8 = uVar7;
      do {
        uVar8 = uVar8 - 1;
        *puVar5 = (char)(uVar6 >> (uVar8 * 8 & 0x1f));
        puVar5 = puVar5 + 1;
      } while (uVar8 != 0);
      uVar3 = uVar3 + uVar7;
      uVar6 = uVar4;
      uVar8 = uVar4;
    }
  }
  uVar7 = uVar6 * *(int *)(param_2 + 0x28);
  if (uVar7 < 8) {
    if (iVar2 != 0) goto LAB_ram_40035128;
  }
  else {
    uVar7 = uVar7 >> 3;
    if (uVar6 == 1) {
      memset(auStack_40 + iVar2,0,uVar7);
      iVar2 = iVar2 + uVar7;
    }
    else {
      memset(local_30 + uVar3,0,uVar7);
      uVar3 = uVar3 + uVar7;
      if (iVar2 == 0) goto LAB_ram_40035198;
    }
LAB_ram_40035128:
    FUN_ram_4003c448(param_1 + 0x9c,1);
    puStack_4c = auStack_40;
    uStack_48 = 0;
    uStack_44 = iVar2;
    iVar2 = FUN_ram_4003c730(param_1 + 0x9c,&puStack_4c);
    if (iVar2 != 0) {
      return -1;
    }
  }
  if (uVar3 == 0) {
    return 0;
  }
LAB_ram_40035198:
  FUN_ram_4003c448(param_1 + 0x9c,uVar8);
  puStack_4c = local_30;
  uStack_48 = 0;
  uStack_44 = uVar3;
  iVar2 = FUN_ram_4003c730(param_1 + 0x9c,&puStack_4c);
  return -(uint)(iVar2 != 0);
}


/* NanoCore 1.10, address 0x400352f6.
 * REA evidence: ev_7bea8f82ca48e214f1ff4c5b2a044dad35ee381ded62c85e1f74ae382b40b6db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400352f6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40005666(0x74);
  iVar1 = 5;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x69) = param_4;
    *(undefined4 *)(iVar2 + 0x6c) = param_5;
    *(undefined4 *)(iVar2 + 0x70) = param_6;
    iVar1 = FUN_ram_40041900(iVar2,param_2,param_1,0);
    if (iVar1 != 0) {
      FUN_ram_400056c4(iVar2);
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4003534a.
 * REA evidence: ev_36b6f3767107a79a804eaecd401b9c57df290c933076df448cbe8ac5510ccc91
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003534a(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint auStack_14 [2];
  
  FUN_ram_40006c48();
  iVar2 = FUN_ram_40006f4a(auStack_14);
  if (iVar2 != 0) {
    iVar2 = iVar2 + 4;
    for (uVar1 = 0; uVar1 < auStack_14[0]; uVar1 = uVar1 + 1) {
      iVar3 = FUN_ram_400071ba(iVar2);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      iVar3 = FUN_ram_4000711a(iVar2);
      iVar2 = iVar2 + 0x40;
      if (iVar3 == 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x40035392.
 * REA evidence: ev_1913228f21beb83251bdbb7371e5c0ed06c2f5f49820d60bc9939fc91c695404
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40035392(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_28 = 0x804;
  uStack_24 = 50000000;
  iVar1 = FUN_ram_400352f6(s_qspi0_ram_400959ec,s_qspi01_ram_40095a0c,0,1,0,0);
  uVar2 = 0;
  if (-1 < iVar1) {
    uStack_18 = 0x800000;
    uStack_14 = 0x100;
    uStack_20 = 0x804;
    uStack_1c = 50000000;
    iVar1 = FUN_ram_40041e64(s_norflash0_ram_40092324,s_qspi01_ram_40095a0c,&uStack_28,&uStack_20);
    uVar2 = (uint)(iVar1 != 0);
  }
  return 1 - uVar2;
}


/* NanoCore 1.10, address 0x40035408.
 * REA evidence: ev_57af218c22196530ce1824e0dfa91c51773b9f8059cb96fe9f775612bd68ea42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40035408(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003d19e();
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.10, address 0x4003541e.
 * REA evidence: ev_0f2c67e448670e31d910c59400a5a602b71d5861e1574a328f86a7860f132157
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40035430) */

int FUN_ram_4003541e(uint param_1,int param_2)

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


/* NanoCore 1.10, address 0x4003545c.
 * REA evidence: ev_c12cb2b6e421b0cc2e2481302b565e1f12d33721ae7bccbb6db1b9bea13f3704
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003545c(int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
  if (uVar2 <= param_5) {
    param_5 = uVar2;
  }
  uVar1 = uVar2 - param_3;
  if (param_5 < uVar2 - param_3) {
    uVar1 = param_5;
  }
  FUN_ram_4000305c(*param_2 + param_3,param_4,uVar1);
  if (uVar1 < param_5) {
    FUN_ram_4000305c(*param_2,param_4 + uVar1,param_5 - uVar1);
  }
  param_5 = param_3 + param_5;
  if (uVar2 != 0) {
    param_5 = param_5 % uVar2;
  }
  return param_5;
}


/* NanoCore 1.10, address 0x400354c8.
 * REA evidence: ev_701ffe6891936b3b9d304cfbb60e146c1a27f60d9fffb0404f8759a6cf41196c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400354c8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = param_1 * 0x38;
  if (*(char *)(iVar9 + 0x3007e394) == '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 * 0x70 + 0x3007e028);
  if (iVar1 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(iVar9 + 0x3007e368);
  if (uVar5 != 0) {
    param_2 = param_2 % uVar5;
  }
  uVar2 = *(uint *)(iVar9 + 0x3007e364);
  if (param_2 == uVar2) {
    return 0;
  }
  uVar7 = param_2 - uVar2;
  if (param_2 <= uVar2) {
    uVar7 = uVar7 + uVar5;
  }
  iVar8 = param_1 * 0x70 + 0x3007dfc0;
  iVar9 = *(int *)(param_1 * 0x10 + 0x3007df44);
  uVar3 = (uint)*(ushort *)(iVar1 + 4);
  iVar4 = iVar9 + uVar2;
  if (uVar2 < param_2) {
    FUN_ram_4003541e(iVar4,uVar7);
    iVar9 = iVar4;
    uVar5 = uVar7;
  }
  else {
    FUN_ram_4003541e(iVar4,uVar5 - uVar2);
    uVar3 = FUN_ram_4003545c(iVar8,iVar1,uVar3,iVar4,uVar5 - uVar2);
    if (param_2 == 0) goto LAB_ram_4003556a;
    FUN_ram_4003541e(iVar9,param_2);
    uVar5 = param_2;
  }
  uVar3 = FUN_ram_4003545c(iVar8,iVar1,uVar3,iVar9,uVar5);
LAB_ram_4003556a:
  uVar2 = (*(uint *)(&DAT_ram_3007e014 + param_1 * 0x70) & 0x3ffffff) >> 10;
  uVar5 = uVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    uVar5 = (uint)*(ushort *)(iVar1 + 4);
    uVar6 = (uint)*(ushort *)(iVar1 + 6);
    if (uVar5 < uVar6) {
      uVar5 = uVar2 - (uVar6 - uVar5);
    }
    else {
      uVar5 = uVar5 - uVar6;
    }
  }
  *(short *)(iVar1 + 4) = (short)uVar3;
  if (uVar7 < uVar2 - uVar5) {
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = uVar7 + uVar5;
  }
  else {
    *(short *)(iVar1 + 6) = (short)uVar3;
    *(undefined4 *)(iVar1 + 8) = 1;
  }
  *(uint *)(param_1 * 0x38 + 0x3007e364) = param_2;
  return uVar2;
}


/* NanoCore 1.10, address 0x40035616.
 * REA evidence: ev_15edeb0ec284e363e69f7e48a826e18689272e6bd9e1b2ef6850039c1322b5d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035616(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  iVar1 = param_1 * 0x38;
  if ((*(char *)(iVar1 + 0x3007e394) != '\0') && (*(int *)(iVar1 + 0x3007e360) != 0)) {
    iVar3 = *(int *)(param_1 * 0x10 + 0x3007df44);
    if (iVar3 != 0) {
      uVar2 = FUN_ram_400002f4();
      fence();
      iVar1 = FUN_ram_400354c8(param_1,*(int *)(*(int *)(*(int *)(iVar1 + 0x3007e360) + 8) + 0x14) -
                                       iVar3);
      FUN_ram_400002fa(uVar2);
      if (iVar1 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x70 + 0x3007dfe8);
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400356a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40035704.
 * REA evidence: ev_ec3a5e9c83675c9119baea093e70a731d6f2592584fc5ca3a87b9e5c3d9a5822
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035704(void)

{
  int in_a5;
  
  *(int *)(in_a5 * 4 + 0x3007e540) = *(int *)(in_a5 * 4 + 0x3007e540) + 1;
  FUN_ram_4003d4a4();
  return;
}


/* NanoCore 1.10, address 0x4003572e.
 * REA evidence: ev_aef062540dc52bf11d56235c7cec545bc76aa4e9fe8d60847366c160d28e2348
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003572e(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  iVar4 = param_1 * 0x38;
  uVar3 = 0;
  if ((*(char *)(iVar4 + 0x3007e394) == '\0') &&
     (uVar3 = 0xffffffff, *(char *)(iVar4 + 0x3007e395) == '\0')) {
    iStack_48 = *(int *)(param_1 * 0x10 + 0x3007df44);
    if (iStack_48 != 0) {
      iStack_34 = param_1 + 0x10;
      local_50 = 2;
      uStack_4c = *param_2;
      uStack_40 = 0;
      uStack_3c = 1;
      uStack_38 = 1;
      uStack_44 = 1;
      FUN_ram_4003d87a(param_2);
      iVar1 = FUN_ram_40038a8e();
      *(int *)(iVar4 + 0x3007e360) = iVar1;
      if (iVar1 == 0) {
        *(undefined1 *)(iVar4 + 0x3007e395) = 1;
      }
      else {
        FUN_ram_40038a36(iVar1,&local_50);
        FUN_ram_40038a26(*(undefined4 *)(iVar4 + 0x3007e360),&LAB_ram_4003587a,param_1);
        uVar2 = *(uint *)(param_1 * 4 + 0x3007e520);
        if (uVar2 < 0x800) {
          uVar2 = 0x800;
        }
        iVar1 = param_1 * 0x38;
        *(uint *)(iVar4 + 0x3007e368) = uVar2;
        uVar3 = *(undefined4 *)(param_1 * 0x10 + 0x3007df44);
        *(undefined4 *)(iVar1 + 0x3007e36c) = 0x200;
        iVar4 = FUN_ram_40038c92(*(undefined4 *)(iVar1 + 0x3007e360),uVar3,
                                 *(undefined4 *)(iVar1 + 0x3007e368),0x200,2);
        if (iVar4 == 0) {
          *(undefined4 *)(iVar1 + 0x3007e364) = 0;
          *(undefined4 *)(iVar1 + 0x3007e370) = 0;
          *(undefined4 *)(iVar1 + 0x3007e374) = 0;
          *(undefined4 *)(iVar1 + 0x3007e378) = 0;
          *(undefined4 *)(iVar1 + 0x3007e37c) = 0;
          *(undefined4 *)(iVar1 + 0x3007e380) = 0;
          *(undefined4 *)(iVar1 + 0x3007e384) = 0;
          *(undefined4 *)(iVar1 + 0x3007e388) = 0;
          *(undefined1 *)(iVar1 + 0x3007e396) = 0;
          *(undefined1 *)(iVar1 + 0x3007e394) = 1;
          FUN_ram_4003d82a(param_2);
          FUN_ram_40038dac(*(undefined4 *)(iVar1 + 0x3007e360));
          return 0;
        }
        FUN_ram_40038a5a(*(undefined4 *)(iVar1 + 0x3007e360));
        *(undefined4 *)(iVar1 + 0x3007e360) = 0;
        *(undefined4 *)(iVar1 + 0x3007e36c) = 0;
        *(undefined1 *)(iVar1 + 0x3007e395) = 1;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4003592c.
 * REA evidence: ev_f78fb3bd8309c30927fc889fea4cc9370149675557debf4de694765c52ee9893
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003592c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_2 == 0) {
    piVar6 = *(int **)(*(int *)(param_1 + 0x34) * 0x70 + 0x3007e028);
    FUN_ram_4003541e(*(undefined4 *)(*(int *)(param_1 + 0x34) * 0x10 + 0x3007df44),0x800);
    uVar5 = (uint)*(ushort *)(piVar6 + 1);
    iVar3 = *(int *)(param_1 + 0x34) * 0x10;
    iVar2 = *(int *)(iVar3 + 0x3007df48);
    iVar3 = *(int *)(iVar3 + 0x3007df44);
    uVar4 = (*(uint *)(&DAT_ram_3007e014 + *(int *)(param_1 + 0x34) * 0x70) & 0x3ffffff) >> 10;
    if (uVar5 + iVar2 < uVar4) {
      iVar1 = *piVar6 + uVar5;
    }
    else {
      FUN_ram_4000305c(*piVar6 + uVar5,iVar3,uVar4 - uVar5);
      iVar1 = *piVar6;
      iVar3 = *(int *)(param_1 + 0x34) * 0x10;
      uVar4 = (*(uint *)(&DAT_ram_3007e014 + *(int *)(param_1 + 0x34) * 0x70) & 0x3ffffff) >> 10;
      iVar2 = (*(ushort *)(piVar6 + 1) - uVar4) + *(int *)(iVar3 + 0x3007df48);
      iVar3 = (uVar4 - *(ushort *)(piVar6 + 1)) + *(int *)(iVar3 + 0x3007df44);
    }
    FUN_ram_4000305c(iVar1,iVar3,iVar2);
    FUN_ram_4003d666(param_1,1,1);
    FUN_ram_4004153a(*(int *)(param_1 + 0x34) * 0x70 + 0x3007dfc0,
                     *(int *)(*(int *)(param_1 + 0x34) * 0x10 + 0x3007df48) << 8 | 3);
    return;
  }
  if (param_2 == 1) {
    FUN_ram_4004153a(*(int *)(param_1 + 0x34) * 0x70 + 0x3007dfc0,4);
    FUN_ram_400048d4(*(undefined4 *)(*(int *)(param_1 + 0x34) * 0x10 + 0x3007df4c));
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40035a58.
 * REA evidence: ev_c3916d6e9eb927d99623643e6a062290ce52904d133e98ec214b2a00f4e8a802
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035a58(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_4 == 2) {
    uVar6 = *(undefined4 *)(param_1 + 0x48);
    iVar1 = (uint)*(byte *)(param_1 + 0x60) * 0x10;
    uVar2 = FUN_ram_4000305c(*(undefined4 *)(iVar1 + 0x3007df40));
    uVar4 = (uVar2 & 0x1f) + 0x800;
    uVar3 = uVar2 & 0xffffffe0;
    if ((uVar2 & 0x1f) != 0) {
      uVar4 = (uVar4 & 0xffffffe0) + 0x20;
    }
    fence();
    custom0();
    iVar5 = uVar4 + uVar3;
    do {
      custom0();
      uVar3 = uVar3 + 0x20;
    } while (0 < (int)(iVar5 - uVar3));
    fence();
    custom0();
    iVar5 = FUN_ram_4003d93a(uVar6,*(undefined4 *)(iVar1 + 0x3007df40),param_3);
    if (iVar5 == 0) {
      FUN_ram_40004832(*(undefined4 *)(iVar1 + 0x3007df4c),0xffffffff);
      return param_3;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x40035af4.
 * REA evidence: ev_8ea180fceb7fa639d209f297b97bb05a44a7fc958563dd24c37a024253cf8f08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035af4(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  undefined1 auStack_70 [76];
  
  iVar10 = param_1 * 0x70 + 0x3007dfc0;
  iVar2 = *(int *)(param_1 * 0x70 + 0x3007e028);
  if (iVar2 != 0) {
    uVar4 = FUN_ram_400002f4();
    uVar1 = 0;
    do {
      iVar5 = FUN_ram_4003d41e(param_2);
      if (iVar5 < 0) {
        uVar7 = 0;
        if (uVar1 == 0) goto LAB_ram_40035b98;
        break;
      }
      auStack_70[uVar1] = (char)iVar5;
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x40);
    uVar3 = FUN_ram_4003545c(iVar10,iVar2,*(undefined2 *)(iVar2 + 4),auStack_70,uVar1);
    uVar7 = (*(uint *)(&DAT_ram_3007e014 + param_1 * 0x70) & 0x3ffffff) >> 10;
    uVar6 = uVar7;
    if (*(int *)(iVar2 + 8) == 0) {
      uVar6 = (uint)*(ushort *)(iVar2 + 4);
      uVar8 = (uint)*(ushort *)(iVar2 + 6);
      if (uVar6 < uVar8) {
        uVar6 = uVar7 - (uVar8 - uVar6);
      }
      else {
        uVar6 = uVar6 - uVar8;
      }
    }
    *(undefined2 *)(iVar2 + 4) = uVar3;
    if (uVar1 < uVar7 - uVar6) {
      *(undefined4 *)(iVar2 + 8) = 0;
      uVar7 = uVar1 + uVar6;
    }
    else {
      *(undefined2 *)(iVar2 + 6) = uVar3;
      *(undefined4 *)(iVar2 + 8) = 1;
    }
LAB_ram_40035b98:
    FUN_ram_400002fa(uVar4);
    if ((uVar7 != 0) && (pcVar9 = *(code **)(param_1 * 0x70 + 0x3007dfe8), pcVar9 != (code *)0x0)) {
      (*pcVar9)(iVar10,uVar7);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40035bda.
 * REA evidence: ev_9d5d46751598fe1870e23577ab6432bd5c86cfe7a0187233b5a29ae97ad11528
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035bda(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1 - 0x4c;
  if (7 < uVar1) {
    return;
  }
  iVar4 = uVar1 * 0x70;
  iVar5 = iVar4 + 0x3007dfc0;
  uVar2 = *(undefined4 *)(&DAT_ram_3007e008 + iVar4);
  uVar3 = FUN_ram_4003d5ec(uVar1);
  if ((*(ushort *)(iVar4 + 0x3007dfe2) & 0x200) == 0) {
    if (uVar3 != 6) {
      if ((uVar3 & 0xf7) != 4) {
        return;
      }
      FUN_ram_4004153a(iVar5,1);
      return;
    }
    FUN_ram_4003d666(uVar2,1,0);
  }
  else if (uVar3 != 6) {
    if ((uVar3 & 0xf7) == 4) {
      if ((*(char *)(uVar1 * 0x38 + 0x3007e394) != '\0') ||
         (iVar4 = FUN_ram_4003572e(uVar1 & 0xff,uVar2), iVar4 == 0)) {
        if (uVar3 != 0xc) {
          return;
        }
        FUN_ram_40035616();
        FUN_ram_40035af4(uVar1 & 0xff,uVar2);
        return;
      }
      FUN_ram_4003d666(uVar2,1,0);
      uVar3 = FUN_ram_4003d866(uVar2);
      iVar4 = uVar1 * 0x10;
      *(uint *)(iVar4 + 0x3007df48) = uVar3;
      if (uVar3 != 0) {
        if (0x800 < uVar3) {
          *(undefined4 *)(iVar4 + 0x3007df48) = 0x800;
        }
        iVar4 = FUN_ram_4003d894(uVar2,*(undefined4 *)(iVar4 + 0x3007df44),
                                 *(undefined4 *)(iVar4 + 0x3007df48));
        if (iVar4 == 0) {
          return;
        }
        iVar5 = uVar1 * 0x70 + 0x3007dfc0;
      }
      FUN_ram_4004153a(iVar5,1);
    }
    goto LAB_ram_40035c9e;
  }
  FUN_ram_4003d58e(uVar1,*(undefined4 *)(&DAT_ram_3007e008 + iVar4));
LAB_ram_40035c9e:
  FUN_ram_4003d666(uVar2,1,1);
  return;
}


/* NanoCore 1.10, address 0x40035d2a.
 * REA evidence: ev_5899bba29baa3e68871dc32031f4ac9c6ce8a93c5931a3fa7f1339ff20443318
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035d2a(uint param_1)

{
  int iVar1;
  
  if (param_1 < 8) {
    iVar1 = *(int *)(&DAT_ram_3007e008 + param_1 * 0x70);
    if (iVar1 != 0) {
      FUN_ram_4003d666(iVar1,1,0);
      FUN_ram_4003d848(iVar1);
    }
    iVar1 = param_1 * 0x38;
    if ((*(char *)(iVar1 + 0x3007e394) != '\0') && (*(int *)(iVar1 + 0x3007e360) != 0)) {
      FUN_ram_400389b4();
      FUN_ram_40038a5a(*(undefined4 *)(iVar1 + 0x3007e360));
    }
    iVar1 = param_1 * 0x38;
    *(undefined4 *)(iVar1 + 0x3007e360) = 0;
    *(undefined4 *)(iVar1 + 0x3007e364) = 0;
    *(undefined4 *)(iVar1 + 0x3007e368) = 0;
    *(undefined4 *)(iVar1 + 0x3007e36c) = 0;
    *(undefined4 *)(iVar1 + 0x3007e370) = 0;
    *(undefined4 *)(iVar1 + 0x3007e374) = 0;
    *(undefined4 *)(iVar1 + 0x3007e378) = 0;
    *(undefined4 *)(iVar1 + 0x3007e37c) = 0;
    *(undefined4 *)(iVar1 + 0x3007e388) = 0;
    *(undefined2 *)(iVar1 + 0x3007e394) = 0;
    *(undefined1 *)(iVar1 + 0x3007e396) = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40035dd2.
 * REA evidence: ev_710d3b9e356d08893d44a94caaa0b1697bd60568de4b454eb30f7cc667fd1b37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035dd2(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (7 < param_1) {
    return;
  }
  if ((*(ushort *)(param_1 * 0x70 + 0x3007dfe2) & 0x200) == 0) {
    return;
  }
  iVar6 = param_1 * 0x38;
  if (*(char *)(iVar6 + 0x3007e394) == '\0') {
    return;
  }
  if (*(int *)(iVar6 + 0x3007e360) == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 * 0x10 + 0x3007df44);
  if (iVar7 == 0) {
    return;
  }
  uVar2 = FUN_ram_400002f4();
  fence();
  uVar5 = *(int *)(*(int *)(*(int *)(iVar6 + 0x3007e360) + 8) + 0x14) - iVar7;
  iVar7 = *(int *)(iVar6 + 0x3007e370);
  if (*(uint *)(iVar6 + 0x3007e368) != 0) {
    uVar5 = uVar5 % *(uint *)(iVar6 + 0x3007e368);
  }
  iVar3 = FUN_ram_400042fa();
  uVar4 = FUN_ram_40004362(4);
  if ((*(char *)(iVar6 + 0x3007e396) != '\0') && (*(uint *)(iVar6 + 0x3007e378) == uVar5)) {
    if (*(int *)(iVar6 + 0x3007e37c) == iVar7) {
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (uVar4 <= (uint)(iVar3 - *(int *)(param_1 * 0x38 + 0x3007e388))) {
        iVar6 = FUN_ram_400354c8(param_1 & 0xff,uVar5);
        *(undefined1 *)(param_1 * 0x38 + 0x3007e396) = 0;
        goto LAB_ram_40035eba;
      }
    }
    iVar6 = 0;
    if (*(int *)(param_1 * 0x38 + 0x3007e37c) == iVar7) goto LAB_ram_40035eba;
  }
  iVar1 = param_1 * 0x38;
  iVar6 = 0;
  *(uint *)(iVar1 + 0x3007e378) = uVar5;
  *(int *)(iVar1 + 0x3007e37c) = iVar7;
  *(int *)(iVar1 + 0x3007e388) = iVar3;
  *(undefined1 *)(iVar1 + 0x3007e396) = 1;
LAB_ram_40035eba:
  FUN_ram_400002fa(uVar2);
  if ((iVar6 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x70 + 0x3007dfe8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40035ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40035f32.
 * REA evidence: ev_5d9408b44c961bb12ff2f5d8d86c585f2c8e794f62c3357d8623505efeb9e346
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035f32(uint param_1)

{
  if (7 < param_1) {
    return;
  }
  if (((*(ushort *)(param_1 * 0x70 + 0x3007dfe2) & 0x200) != 0) &&
     (*(char *)(param_1 * 0x38 + 0x3007e394) != '\0')) {
    FUN_ram_40035616();
    if (*(int *)(&DAT_ram_3007e008 + param_1 * 0x70) != 0) {
      FUN_ram_40035af4(param_1 & 0xff);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40035f92.
 * REA evidence: ev_a9c1322836fe737d0ce21c2ba3297f1da676477d1d64ad1b173d7f0e010deafd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035f92(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  puVar5 = (&PTR_s_no_pin_ram_40095a14_ram_40095af0)[param_1 * 8];
  iVar2 = FUN_ram_4000522c(puVar5,s_no_pin_ram_40095a14);
  uVar4 = (&DAT_ram_40095ae8)[param_1 * 8];
  if ((iVar2 != 0) && ((uVar4 == 4 || (uVar4 - 6 < 2)))) {
    uVar3 = FUN_ram_40040ade(puVar5);
    *(undefined4 *)(param_2 * 0xc + 0x3007e620) = uVar3;
    FUN_ram_40040aa6(uVar3,0);
    FUN_ram_40040aba(*(undefined4 *)(param_2 * 0xc + 0x3007e620),0);
    (&DAT_ram_3007e01c)[param_2 * 0x70] = (&DAT_ram_3007e01c)[param_2 * 0x70] | 0x40;
  }
  puVar5 = (&PTR_s_no_pin_ram_40095a14_ram_40095af4)[param_1 * 8];
  iVar2 = FUN_ram_4000522c(puVar5,s_no_pin_ram_40095a14);
  if ((iVar2 != 0) && ((uVar4 & 0xfffffffd) == 4)) {
    uVar3 = FUN_ram_40040ade(puVar5);
    iVar2 = param_2 * 0xc;
    *(undefined4 *)(iVar2 + 0x3007e5a4) = uVar3;
    FUN_ram_40040aa6(uVar3,1);
    iVar1 = param_2 * 0x70;
    FUN_ram_40040a6e(*(undefined4 *)(iVar2 + 0x3007e5a4),2,&LAB_ram_400358f4,iVar1 + 0x3007dfc0);
    FUN_ram_40040a8c(*(undefined4 *)(iVar2 + 0x3007e5a4),1);
    (&DAT_ram_3007e01c)[iVar1] = (&DAT_ram_3007e01c)[iVar1] | 0x20;
  }
  if (uVar4 == 5) {
    (&DAT_ram_3007e01c)[param_2 * 0x70] = (&DAT_ram_3007e01c)[param_2 * 0x70] | 0x60;
  }
  return;
}


