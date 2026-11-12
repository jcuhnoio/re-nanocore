/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40037000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40037042.
 * REA evidence: ev_b709f9806a10c614d0b5f862566beef2289b58e712453e7bd5047b6e11843d99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40037042(int param_1,int param_2)

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
      uVar2 = FUN_ram_4000559c(0xc);
      *(undefined4 *)(iVar1 + 0x118) = uVar2;
    }
    iVar1 = -(uint)(*(int *)(iVar1 + 0x118) == 0);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4003707e.
 * REA evidence: ev_114c6172b0c18f4e6fc29f312570a949b5150ebedeae2d298f4df6659d5515ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003707e(void)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  iVar1 = FUN_ram_4004271a(&DAT_ram_3004b704,PTR_s_qspi0_ram_4009cbe4_ram_3004b788,
                           &PTR_FUN_ram_4003713e_ram_4009cbec);
  if (iVar1 == 0) {
    FUN_ram_40005542(auStack_20,&DAT_ram_4009cbdc,PTR_s_qspi0_ram_4009cbe4_ram_3004b788);
    DAT_ram_3004b804 = FUN_ram_40004834(auStack_20,0,1);
    if (DAT_ram_3004b804 == 0) {
      iVar1 = 5;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x400370f6.
 * REA evidence: ev_60cab050efd7d67c53f15cd6c6149ca87c79279c6f769617b4102c1e4eeaba2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400370f6(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_40004cd2();
  FUN_ram_4003dd42(param_2);
  FUN_ram_40004d04();
  return 1;
}


/* NanoCore 1.12, address 0x4003713e.
 * REA evidence: ev_13f3db7d8f5d94289721a92f4fb4eb272aa7dd209c49b48661103dd869389ad1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003713e(int param_1,byte *param_2)

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
  iVar2 = FUN_ram_400050d8(iVar1 + 0xf0,param_2,8);
  if ((iVar2 != 0) || (*(char *)(iVar1 + 0xec) != '\0')) {
    memcpy(iVar1 + 0xf0,param_2,8);
    FUN_ram_40004f92(&uStack_34,0,0x24);
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
    iVar3 = FUN_ram_4003d07a(iVar2,&uStack_34);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*(char *)(iVar1 + 0x104) == '\0') {
      FUN_ram_40004f92(auStack_48,0,0x14);
      auStack_48[0] = *(undefined4 *)(iVar1 + 0x94);
      iVar3 = FUN_ram_4003d6b4(iVar2,auStack_48);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_ram_4003dae2(iVar2,&LAB_ram_40037114,iVar1);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x98);
      FUN_ram_4003fc98(uVar4,FUN_ram_400370f6,iVar2);
      FUN_ram_4003fc50(uVar4);
      FUN_ram_4003fc50(*(undefined4 *)(iVar1 + 0x98));
    }
    uVar6 = *(uint *)(param_2 + 4);
    if (100000000 < *(uint *)(param_2 + 4)) {
      uVar6 = 100000000;
    }
    FUN_ram_4003d328(iVar2,uVar6);
  }
  *(undefined1 *)(iVar1 + 0x104) = 1;
  return 0;
}


/* NanoCore 1.12, address 0x400372a8.
 * REA evidence: ev_153aa233fc2a9027efaa83aaecf6b4a99b5028f95afb67f9fe7e80aa077b6d21
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400372a8(int param_1,int param_2)

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
    if (iVar2 != 0) goto LAB_ram_40037328;
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
      if (iVar2 == 0) goto LAB_ram_40037398;
    }
LAB_ram_40037328:
    FUN_ram_4003d42e(param_1 + 0x9c,1);
    puStack_4c = auStack_40;
    uStack_48 = 0;
    uStack_44 = iVar2;
    iVar2 = FUN_ram_4003d716(param_1 + 0x9c,&puStack_4c);
    if (iVar2 != 0) {
      return -1;
    }
  }
  if (uVar3 == 0) {
    return 0;
  }
LAB_ram_40037398:
  FUN_ram_4003d42e(param_1 + 0x9c,uVar8);
  puStack_4c = local_30;
  uStack_48 = 0;
  uStack_44 = uVar3;
  iVar2 = FUN_ram_4003d716(param_1 + 0x9c,&puStack_4c);
  return -(uint)(iVar2 != 0);
}


/* NanoCore 1.12, address 0x400374f6.
 * REA evidence: ev_40c27796981e94bfa9c14a9582bc62d166df5014842da46dd8946068977f1e20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400374f6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4000559c(0x74);
  iVar1 = 5;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x69) = param_4;
    *(undefined4 *)(iVar2 + 0x6c) = param_5;
    *(undefined4 *)(iVar2 + 0x70) = param_6;
    iVar1 = FUN_ram_40042930(iVar2,param_2,param_1,0);
    if (iVar1 != 0) {
      FUN_ram_400055d4(iVar2);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4003754a.
 * REA evidence: ev_2bf129dfe1f0bbac8b5e4691c773af59277b7be8da880416caca7f0675ee34d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003754a(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint auStack_14 [2];
  
  FUN_ram_40006b3a();
  iVar2 = FUN_ram_40006e3c(auStack_14);
  if (iVar2 != 0) {
    iVar2 = iVar2 + 4;
    for (uVar1 = 0; uVar1 < auStack_14[0]; uVar1 = uVar1 + 1) {
      iVar3 = FUN_ram_400070ac(iVar2);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      iVar3 = FUN_ram_4000700c(iVar2);
      iVar2 = iVar2 + 0x40;
      if (iVar3 == 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40037592.
 * REA evidence: ev_d8140c89bab48fd8e9b5fc6949b9da0d8ac0d30f020a73fc922bc4b014f62869
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40037592(void)

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
  iVar1 = FUN_ram_400374f6(s_qspi0_ram_4009cbe4,s_qspi01_ram_4009cc04,0,1,0,0);
  uVar2 = 0;
  if (-1 < iVar1) {
    uStack_18 = 0x800000;
    uStack_14 = 0x100;
    uStack_20 = 0x804;
    uStack_1c = 50000000;
    iVar1 = FUN_ram_40042e94(s_norflash0_ram_4009620c,s_qspi01_ram_4009cc04,&uStack_28,&uStack_20);
    uVar2 = (uint)(iVar1 != 0);
  }
  return 1 - uVar2;
}


/* NanoCore 1.12, address 0x40037608.
 * REA evidence: ev_76ecf79a9f1bb6beda76b54936bf1cab7a418d08de92fc696aac1599b19346d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40037608(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003e184();
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.12, address 0x4003761e.
 * REA evidence: ev_18d51b6fb1accb05994f3f37b4148e8d92bdf9262a117d4a26cf315bbe2820e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40037630) */

int FUN_ram_4003761e(uint param_1,int param_2)

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


/* NanoCore 1.12, address 0x4003765c.
 * REA evidence: ev_4d99931c55fe8fc7f685d10e1be5fa722203d702ffcee36c7195fe41210e56cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003765c(int param_1,int *param_2,int param_3,int param_4,uint param_5)

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
  FUN_ram_4000303c(*param_2 + param_3,param_4,uVar1);
  if (uVar1 < param_5) {
    FUN_ram_4000303c(*param_2,param_4 + uVar1,param_5 - uVar1);
  }
  param_5 = param_3 + param_5;
  if (uVar2 != 0) {
    param_5 = param_5 % uVar2;
  }
  return param_5;
}


/* NanoCore 1.12, address 0x400376c8.
 * REA evidence: ev_4ff007d778a4ddbd956a5e752fc94eebf28ef11fb585651ba9011c300f3be1f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400376c8(int param_1,uint param_2)

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
  if (*(char *)(iVar9 + 0x3007f794) == '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 * 0x70 + 0x3007f428);
  if (iVar1 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(iVar9 + 0x3007f768);
  if (uVar5 != 0) {
    param_2 = param_2 % uVar5;
  }
  uVar2 = *(uint *)(iVar9 + 0x3007f764);
  if (param_2 == uVar2) {
    return 0;
  }
  uVar7 = param_2 - uVar2;
  if (param_2 <= uVar2) {
    uVar7 = uVar7 + uVar5;
  }
  iVar8 = param_1 * 0x70 + 0x3007f3c0;
  iVar9 = *(int *)(param_1 * 0x10 + 0x3007f344);
  uVar3 = (uint)*(ushort *)(iVar1 + 4);
  iVar4 = iVar9 + uVar2;
  if (uVar2 < param_2) {
    FUN_ram_4003761e(iVar4,uVar7);
    iVar9 = iVar4;
    uVar5 = uVar7;
  }
  else {
    FUN_ram_4003761e(iVar4,uVar5 - uVar2);
    uVar3 = FUN_ram_4003765c(iVar8,iVar1,uVar3,iVar4,uVar5 - uVar2);
    if (param_2 == 0) goto LAB_ram_4003776a;
    FUN_ram_4003761e(iVar9,param_2);
    uVar5 = param_2;
  }
  uVar3 = FUN_ram_4003765c(iVar8,iVar1,uVar3,iVar9,uVar5);
LAB_ram_4003776a:
  uVar2 = (*(uint *)(&DAT_ram_3007f414 + param_1 * 0x70) & 0x3ffffff) >> 10;
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
  *(uint *)(param_1 * 0x38 + 0x3007f764) = param_2;
  return uVar2;
}


/* NanoCore 1.12, address 0x40037816.
 * REA evidence: ev_eefcf2759f0113c7a48d89c797dee29ed48b5cfb19a01d0cec875dad47c05110
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037816(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  iVar1 = param_1 * 0x38;
  if ((*(char *)(iVar1 + 0x3007f794) != '\0') && (*(int *)(iVar1 + 0x3007f760) != 0)) {
    iVar3 = *(int *)(param_1 * 0x10 + 0x3007f344);
    if (iVar3 != 0) {
      uVar2 = FUN_ram_400002f4();
      fence();
      iVar1 = FUN_ram_400376c8(param_1,*(int *)(*(int *)(*(int *)(iVar1 + 0x3007f760) + 8) + 0x14) -
                                       iVar3);
      FUN_ram_400002fa(uVar2);
      if (iVar1 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x70 + 0x3007f3e8);
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400378a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40037904.
 * REA evidence: ev_4f25f408d3b7c01c554a1460ce617ad7412d7c644beaa72d3032907d82852bde
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037904(void)

{
  int in_a5;
  
  *(int *)(in_a5 * 4 + 0x3007f940) = *(int *)(in_a5 * 4 + 0x3007f940) + 1;
  FUN_ram_4003e48a();
  return;
}


/* NanoCore 1.12, address 0x4003792e.
 * REA evidence: ev_1ecf0e67473a3e2dd042ffe5241560c18d1749f6b0876ae25da4be53db72ffa9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003792e(int param_1,undefined4 *param_2)

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
  if ((*(char *)(iVar4 + 0x3007f794) == '\0') &&
     (uVar3 = 0xffffffff, *(char *)(iVar4 + 0x3007f795) == '\0')) {
    iStack_48 = *(int *)(param_1 * 0x10 + 0x3007f344);
    if (iStack_48 != 0) {
      iStack_34 = param_1 + 0x10;
      local_50 = 2;
      uStack_4c = *param_2;
      uStack_40 = 0;
      uStack_3c = 1;
      uStack_38 = 1;
      uStack_44 = 1;
      FUN_ram_4003e860(param_2);
      iVar1 = FUN_ram_4003ac8e();
      *(int *)(iVar4 + 0x3007f760) = iVar1;
      if (iVar1 == 0) {
        *(undefined1 *)(iVar4 + 0x3007f795) = 1;
      }
      else {
        FUN_ram_4003ac36(iVar1,&local_50);
        FUN_ram_4003ac26(*(undefined4 *)(iVar4 + 0x3007f760),&LAB_ram_40037a7a,param_1);
        uVar2 = *(uint *)(param_1 * 4 + 0x3007f920);
        if (uVar2 < 0x800) {
          uVar2 = 0x800;
        }
        iVar1 = param_1 * 0x38;
        *(uint *)(iVar4 + 0x3007f768) = uVar2;
        uVar3 = *(undefined4 *)(param_1 * 0x10 + 0x3007f344);
        *(undefined4 *)(iVar1 + 0x3007f76c) = 0x200;
        iVar4 = FUN_ram_4003ae92(*(undefined4 *)(iVar1 + 0x3007f760),uVar3,
                                 *(undefined4 *)(iVar1 + 0x3007f768),0x200,2);
        if (iVar4 == 0) {
          *(undefined4 *)(iVar1 + 0x3007f764) = 0;
          *(undefined4 *)(iVar1 + 0x3007f770) = 0;
          *(undefined4 *)(iVar1 + 0x3007f774) = 0;
          *(undefined4 *)(iVar1 + 0x3007f778) = 0;
          *(undefined4 *)(iVar1 + 0x3007f77c) = 0;
          *(undefined4 *)(iVar1 + 0x3007f780) = 0;
          *(undefined4 *)(iVar1 + 0x3007f784) = 0;
          *(undefined4 *)(iVar1 + 0x3007f788) = 0;
          *(undefined1 *)(iVar1 + 0x3007f796) = 0;
          *(undefined1 *)(iVar1 + 0x3007f794) = 1;
          FUN_ram_4003e810(param_2);
          FUN_ram_4003afac(*(undefined4 *)(iVar1 + 0x3007f760));
          return 0;
        }
        FUN_ram_4003ac5a(*(undefined4 *)(iVar1 + 0x3007f760));
        *(undefined4 *)(iVar1 + 0x3007f760) = 0;
        *(undefined4 *)(iVar1 + 0x3007f76c) = 0;
        *(undefined1 *)(iVar1 + 0x3007f795) = 1;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40037b2c.
 * REA evidence: ev_4c6823c52352345431a16ebf5370d5ec92b3d6c2220572c1c700a2bd7dcfb681
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037b2c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_2 == 0) {
    piVar6 = *(int **)(*(int *)(param_1 + 0x34) * 0x70 + 0x3007f428);
    FUN_ram_4003761e(*(undefined4 *)(*(int *)(param_1 + 0x34) * 0x10 + 0x3007f344),0x800);
    uVar5 = (uint)*(ushort *)(piVar6 + 1);
    iVar3 = *(int *)(param_1 + 0x34) * 0x10;
    iVar2 = *(int *)(iVar3 + 0x3007f348);
    iVar3 = *(int *)(iVar3 + 0x3007f344);
    uVar4 = (*(uint *)(&DAT_ram_3007f414 + *(int *)(param_1 + 0x34) * 0x70) & 0x3ffffff) >> 10;
    if (uVar5 + iVar2 < uVar4) {
      iVar1 = *piVar6 + uVar5;
    }
    else {
      FUN_ram_4000303c(*piVar6 + uVar5,iVar3,uVar4 - uVar5);
      iVar1 = *piVar6;
      iVar3 = *(int *)(param_1 + 0x34) * 0x10;
      uVar4 = (*(uint *)(&DAT_ram_3007f414 + *(int *)(param_1 + 0x34) * 0x70) & 0x3ffffff) >> 10;
      iVar2 = (*(ushort *)(piVar6 + 1) - uVar4) + *(int *)(iVar3 + 0x3007f348);
      iVar3 = (uVar4 - *(ushort *)(piVar6 + 1)) + *(int *)(iVar3 + 0x3007f344);
    }
    FUN_ram_4000303c(iVar1,iVar3,iVar2);
    FUN_ram_4003e64c(param_1,1,1);
    FUN_ram_4004256a(*(int *)(param_1 + 0x34) * 0x70 + 0x3007f3c0,
                     *(int *)(*(int *)(param_1 + 0x34) * 0x10 + 0x3007f348) << 8 | 3);
    return;
  }
  if (param_2 == 1) {
    FUN_ram_4004256a(*(int *)(param_1 + 0x34) * 0x70 + 0x3007f3c0,4);
    FUN_ram_40004920(*(undefined4 *)(*(int *)(param_1 + 0x34) * 0x10 + 0x3007f34c));
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40037c58.
 * REA evidence: ev_8eac2a2067ebf58abba2ba91d0d9835fbd9e7dff7d1f8ab6fcea0e982914a08e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037c58(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
    uVar2 = FUN_ram_4000303c(*(undefined4 *)(iVar1 + 0x3007f340));
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
    iVar5 = FUN_ram_4003e920(uVar6,*(undefined4 *)(iVar1 + 0x3007f340),param_3);
    if (iVar5 == 0) {
      FUN_ram_4000487e(*(undefined4 *)(iVar1 + 0x3007f34c),0xffffffff);
      return param_3;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40037cf4.
 * REA evidence: ev_91033b3f710a0381fe268dfa001d28368ea2d99a537d000de47f44f92defd8fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037cf4(int param_1,undefined4 param_2)

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
  
  iVar10 = param_1 * 0x70 + 0x3007f3c0;
  iVar2 = *(int *)(param_1 * 0x70 + 0x3007f428);
  if (iVar2 != 0) {
    uVar4 = FUN_ram_400002f4();
    uVar1 = 0;
    do {
      iVar5 = FUN_ram_4003e404(param_2);
      if (iVar5 < 0) {
        uVar7 = 0;
        if (uVar1 == 0) goto LAB_ram_40037d98;
        break;
      }
      auStack_70[uVar1] = (char)iVar5;
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x40);
    uVar3 = FUN_ram_4003765c(iVar10,iVar2,*(undefined2 *)(iVar2 + 4),auStack_70,uVar1);
    uVar7 = (*(uint *)(&DAT_ram_3007f414 + param_1 * 0x70) & 0x3ffffff) >> 10;
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
LAB_ram_40037d98:
    FUN_ram_400002fa(uVar4);
    if ((uVar7 != 0) && (pcVar9 = *(code **)(param_1 * 0x70 + 0x3007f3e8), pcVar9 != (code *)0x0)) {
      (*pcVar9)(iVar10,uVar7);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40037dda.
 * REA evidence: ev_e1f4deec5c5851fab4043bcaf599f050e4442119f2ce6e94b40187b7f1efb790
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037dda(int param_1)

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
  iVar5 = iVar4 + 0x3007f3c0;
  uVar2 = *(undefined4 *)(&DAT_ram_3007f408 + iVar4);
  uVar3 = FUN_ram_4003e5d2(uVar1);
  if ((*(ushort *)(iVar4 + 0x3007f3e2) & 0x200) == 0) {
    if (uVar3 != 6) {
      if ((uVar3 & 0xf7) != 4) {
        return;
      }
      FUN_ram_4004256a(iVar5,1);
      return;
    }
    FUN_ram_4003e64c(uVar2,1,0);
  }
  else if (uVar3 != 6) {
    if ((uVar3 & 0xf7) == 4) {
      if ((*(char *)(uVar1 * 0x38 + 0x3007f794) != '\0') ||
         (iVar4 = FUN_ram_4003792e(uVar1 & 0xff,uVar2), iVar4 == 0)) {
        if (uVar3 != 0xc) {
          return;
        }
        FUN_ram_40037816();
        FUN_ram_40037cf4(uVar1 & 0xff,uVar2);
        return;
      }
      FUN_ram_4003e64c(uVar2,1,0);
      uVar3 = FUN_ram_4003e84c(uVar2);
      iVar4 = uVar1 * 0x10;
      *(uint *)(iVar4 + 0x3007f348) = uVar3;
      if (uVar3 != 0) {
        if (0x800 < uVar3) {
          *(undefined4 *)(iVar4 + 0x3007f348) = 0x800;
        }
        iVar4 = FUN_ram_4003e87a(uVar2,*(undefined4 *)(iVar4 + 0x3007f344),
                                 *(undefined4 *)(iVar4 + 0x3007f348));
        if (iVar4 == 0) {
          return;
        }
        iVar5 = uVar1 * 0x70 + 0x3007f3c0;
      }
      FUN_ram_4004256a(iVar5,1);
    }
    goto LAB_ram_40037e9e;
  }
  FUN_ram_4003e574(uVar1,*(undefined4 *)(&DAT_ram_3007f408 + iVar4));
LAB_ram_40037e9e:
  FUN_ram_4003e64c(uVar2,1,1);
  return;
}


/* NanoCore 1.12, address 0x40037f2a.
 * REA evidence: ev_f26460b45cbd700332e01d1f89f77258e646736a738fe0073befa5e6afd8aa86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037f2a(uint param_1)

{
  int iVar1;
  
  if (param_1 < 8) {
    iVar1 = *(int *)(&DAT_ram_3007f408 + param_1 * 0x70);
    if (iVar1 != 0) {
      FUN_ram_4003e64c(iVar1,1,0);
      FUN_ram_4003e82e(iVar1);
    }
    iVar1 = param_1 * 0x38;
    if ((*(char *)(iVar1 + 0x3007f794) != '\0') && (*(int *)(iVar1 + 0x3007f760) != 0)) {
      FUN_ram_4003abb4();
      FUN_ram_4003ac5a(*(undefined4 *)(iVar1 + 0x3007f760));
    }
    iVar1 = param_1 * 0x38;
    *(undefined4 *)(iVar1 + 0x3007f760) = 0;
    *(undefined4 *)(iVar1 + 0x3007f764) = 0;
    *(undefined4 *)(iVar1 + 0x3007f768) = 0;
    *(undefined4 *)(iVar1 + 0x3007f76c) = 0;
    *(undefined4 *)(iVar1 + 0x3007f770) = 0;
    *(undefined4 *)(iVar1 + 0x3007f774) = 0;
    *(undefined4 *)(iVar1 + 0x3007f778) = 0;
    *(undefined4 *)(iVar1 + 0x3007f77c) = 0;
    *(undefined4 *)(iVar1 + 0x3007f788) = 0;
    *(undefined2 *)(iVar1 + 0x3007f794) = 0;
    *(undefined1 *)(iVar1 + 0x3007f796) = 0;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40037fd2.
 * REA evidence: ev_d28af2f14b87b46cce3e89e15bdf3d8dc8d06377a87481f7d9881df24b436362
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037fd2(uint param_1)

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
  if ((*(ushort *)(param_1 * 0x70 + 0x3007f3e2) & 0x200) == 0) {
    return;
  }
  iVar6 = param_1 * 0x38;
  if (*(char *)(iVar6 + 0x3007f794) == '\0') {
    return;
  }
  if (*(int *)(iVar6 + 0x3007f760) == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 * 0x10 + 0x3007f344);
  if (iVar7 == 0) {
    return;
  }
  uVar2 = FUN_ram_400002f4();
  fence();
  uVar5 = *(int *)(*(int *)(*(int *)(iVar6 + 0x3007f760) + 8) + 0x14) - iVar7;
  iVar7 = *(int *)(iVar6 + 0x3007f770);
  if (*(uint *)(iVar6 + 0x3007f768) != 0) {
    uVar5 = uVar5 % *(uint *)(iVar6 + 0x3007f768);
  }
  iVar3 = FUN_ram_40004346();
  uVar4 = FUN_ram_400043ae(4);
  if ((*(char *)(iVar6 + 0x3007f796) != '\0') && (*(uint *)(iVar6 + 0x3007f778) == uVar5)) {
    if (*(int *)(iVar6 + 0x3007f77c) == iVar7) {
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (uVar4 <= (uint)(iVar3 - *(int *)(param_1 * 0x38 + 0x3007f788))) {
        iVar6 = FUN_ram_400376c8(param_1 & 0xff,uVar5);
        *(undefined1 *)(param_1 * 0x38 + 0x3007f796) = 0;
        goto LAB_ram_400380ba;
      }
    }
    iVar6 = 0;
    if (*(int *)(param_1 * 0x38 + 0x3007f77c) == iVar7) goto LAB_ram_400380ba;
  }
  iVar1 = param_1 * 0x38;
  iVar6 = 0;
  *(uint *)(iVar1 + 0x3007f778) = uVar5;
  *(int *)(iVar1 + 0x3007f77c) = iVar7;
  *(int *)(iVar1 + 0x3007f788) = iVar3;
  *(undefined1 *)(iVar1 + 0x3007f796) = 1;
LAB_ram_400380ba:
  FUN_ram_400002fa(uVar2);
  if ((iVar6 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x70 + 0x3007f3e8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x400380e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


