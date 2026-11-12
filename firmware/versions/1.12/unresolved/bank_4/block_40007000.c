/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40007000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4000700c.
 * REA evidence: ev_af267bf4d935697368ee86d5d838037f0c059465cfbf5e4330441380946d3086
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000700c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_30;
  undefined1 auStack_2c [32];
  
  iVar2 = FUN_ram_40006dec();
  local_30 = 0;
  memset(auStack_2c,0,0x1c);
  if ((iVar2 == 0) || (iVar1 = FUN_ram_40006cbe(iVar2 + 0x1c), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_ram_4000559c(0x5c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x50) = 0x200;
      *(undefined4 *)(iVar1 + 0x54) = 0x200;
      uVar3 = *(uint *)(iVar2 + 0x38);
      *(int *)(iVar1 + 0x58) = iVar2;
      *(uint *)(iVar1 + 0x4c) = uVar3 >> 9;
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      *(undefined1 **)(iVar1 + 0x3c) = &LAB_ram_40006f44;
      *(undefined1 **)(iVar1 + 0x40) = &LAB_ram_40006f20;
      *(code **)(iVar1 + 0x44) = FUN_ram_40006fb0;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      FUN_ram_40005542(&local_30,s_blk__s_ram_40096218,iVar2 + 4);
      FUN_ram_400044c8(iVar1,&local_30,0xb);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x400070ac.
 * REA evidence: ev_2884f2b0d51bdbabcb14029aba4d620dde8f34e73ffdafd900ff0cc338542962
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400070ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_ram_40006dec();
  if ((iVar1 == 0) || (iVar3 = FUN_ram_40006cbe(iVar1 + 0x1c), iVar3 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_ram_4000559c(0x60);
    if (iVar2 != 0) {
      uVar4 = *(uint *)(iVar3 + 0x20);
      uVar5 = *(uint *)(iVar1 + 0x38);
      *(int *)(iVar2 + 0x5c) = iVar1;
      *(undefined4 *)(iVar2 + 0x50) = 0;
      if (uVar4 == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = uVar5 / uVar4;
      }
      *(uint *)(iVar2 + 0x4c) = uVar4;
      *(uint *)(iVar2 + 0x54) = uVar5;
      *(undefined **)(iVar2 + 0x58) = &DAT_ram_40096220;
      FUN_ram_40041b16(iVar1 + 4,iVar2);
    }
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x4000710e.
 * REA evidence: ev_32b6906bcd90ac4cd8acf954669d5da532b1b18b30f69d5f38a951adb297b73b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000710e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005b004(_DAT_ram_3004dfb8,DAT_ram_3004aaf0 + param_1,param_2);
  if (iVar1 != 0) {
    param_2 = 0xffffffff;
  }
  return param_2;
}


/* NanoCore 1.12, address 0x4000719e.
 * REA evidence: ev_4a9b94633545dc3cf40601f7765f813c827d39c700c608a1f878a46f2eee6fd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000719e(void)

{
  undefined4 uVar1;
  
  _DAT_ram_3004dfb8 = FUN_ram_400430aa(s_norflash0_ram_4009620c);
  uVar1 = 0xffffffff;
  if (_DAT_ram_3004dfb8 != 0) {
    DAT_ram_3004aaf8 = *(undefined4 *)(_DAT_ram_3004dfb8 + 0x18);
    DAT_ram_3004aaf4 = *(undefined4 *)(_DAT_ram_3004dfb8 + 0x10);
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x400071d4.
 * REA evidence: ev_d11cd3e208707d9d0d835c4cad83ef736fd3b4fd042270806c54cc8694b6bb5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_400071d4(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_ram_40003404();
  pcVar2 = param_1 + iVar1;
  while( true ) {
    if (pcVar2 == param_1) {
      return param_1;
    }
    if ((*pcVar2 == ':') || (*pcVar2 == '=')) break;
    pcVar2 = pcVar2 + -1;
  }
  return pcVar2 + 1;
}


/* NanoCore 1.12, address 0x4000720c.
 * REA evidence: ev_a446d92becf755c5591180ea3a74993d6ee6946f44dafbe4c33893a1b2a371c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000720c(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte *pbStack_14;
  
  iVar2 = FUN_ram_40002f1a(0xb0);
  if (iVar2 == 0) {
    return 0;
  }
  memset(iVar2,0,0xb0);
  bVar4 = *param_1;
  *(undefined4 *)(iVar2 + 0x98) = param_2;
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  if (bVar4 == 0x2d) {
    pbStack_14 = param_1 + 1;
  }
  else {
    pbStack_14 = param_1;
    uVar7 = FUN_ram_4000373a(param_1,&pbStack_14,0);
    iVar5 = (int)uVar7;
    *(ulonglong *)(iVar2 + 0xa0) = uVar7;
    bVar4 = *pbStack_14 & 0xdf;
    if (bVar4 == 0x4b) {
      uVar3 = (undefined4)(uVar7 >> 0x16);
      iVar5 = iVar5 << 10;
    }
    else if (bVar4 == 0x4d) {
      uVar3 = (undefined4)(uVar7 >> 0xc);
      iVar5 = iVar5 << 0x14;
    }
    else {
      if (bVar4 != 0x47) goto LAB_ram_4000724a;
      uVar3 = (undefined4)(uVar7 >> 2);
      iVar5 = iVar5 << 0x1e;
    }
    pbStack_14 = pbStack_14 + 1;
    *(int *)(iVar2 + 0xa0) = iVar5;
    *(undefined4 *)(iVar2 + 0xa4) = uVar3;
  }
LAB_ram_4000724a:
  if (*pbStack_14 == 0x40) {
    pbStack_14 = pbStack_14 + 1;
    uVar6 = FUN_ram_4000373a(pbStack_14,&pbStack_14,0);
    *(undefined8 *)(iVar2 + 0x98) = uVar6;
  }
  if (*pbStack_14 == 0x28) {
    pbStack_14 = pbStack_14 + 1;
    for (iVar5 = 0; (pbVar1 = pbStack_14 + 1, *pbStack_14 != 0x29 && (iVar5 != 0x90));
        iVar5 = iVar5 + 1) {
      *(byte *)(iVar2 + iVar5) = *pbStack_14;
      pbStack_14 = pbVar1;
    }
    do {
      pbStack_14 = pbVar1;
      bVar4 = *pbStack_14;
      if (bVar4 == 0) {
        return iVar2;
      }
      if (bVar4 == 0x3b) {
        return iVar2;
      }
      pbStack_14 = pbStack_14 + 1;
      pbVar1 = pbStack_14;
    } while (bVar4 != 0x2c);
    uVar3 = FUN_ram_4000720c(pbStack_14,*(int *)(iVar2 + 0x98) + *(int *)(iVar2 + 0xa0));
    *(undefined4 *)(iVar2 + 0xa8) = uVar3;
  }
  else {
    FUN_ram_4003390a(s___s__Partition_name_should_be_ne_ram_4009622f + 1,
                     s_aic_part_parse_ram_4009625c);
    FUN_ram_40033920(pbStack_14);
    FUN_ram_40002f28(iVar2);
    iVar2 = 0;
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x4000735c.
 * REA evidence: ev_2c98b8c3c2ca77b7c2b66570a5863fc1b776b617f7cae669a99224be3ab1b0bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000735c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400071d4();
  FUN_ram_4000720c(uVar1,0);
  return;
}


/* NanoCore 1.12, address 0x4000736e.
 * REA evidence: ev_6ddf8edf353b026b51b9fcc70ee4127ba80f0c122d9634c3bfd287da461bcf40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000736e(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = *(int *)(param_1 + 0xa8);
      FUN_ram_40002f28();
    } while (param_1 != 0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40007372.
 * REA evidence: ev_220a254f48d2a3cb871f53f0859c5b60801d6b98ab8228aded8f7dec0f0cee1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007372(int param_1)

{
  do {
    param_1 = *(int *)(param_1 + 0xa8);
    FUN_ram_40002f28();
  } while (param_1 != 0);
  return;
}


/* NanoCore 1.12, address 0x4000738c.
 * REA evidence: ev_ec3d62b5a7a51d374220108ad009d91076ef65b7e18ddfe28b3a7282ac142e3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4000738c(int *param_1,int param_2)

{
  while( true ) {
    if (*param_1 == param_2) {
      return param_1;
    }
    if (*param_1 == 0x4149ffff) break;
    param_1 = (int *)((int)param_1 + (param_1[1] & 0xfffffffcU) + 8);
  }
  return (int *)0x0;
}


/* NanoCore 1.12, address 0x400073ac.
 * REA evidence: ev_bc0acfc6b69b282abcb6faa0c45d4bb59ad39527fbe575010873ae33845bfdb8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400073ac(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4003fcc8();
  if (iVar2 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    FUN_ram_4000303c(iVar1 + 0x3004dfbc,iVar2 + iVar1,4);
    if (*(int *)(iVar2 + iVar1) == 0x4149ffff) break;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x400);
  FUN_ram_4003fcd2(0x3004dfbc);
  return;
}


/* NanoCore 1.12, address 0x4000741c.
 * REA evidence: ev_6fcc63b14cd05dd0f89878c4ad8c0a3308b7c0153774fce2f6a34a77ea68991a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000741c(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if ((param_1 & 3) == 0) {
      iVar2 = FUN_ram_4000738c(param_1,0x41490005);
      if ((iVar2 != 0) && (piVar1 = (int *)(iVar2 + 4), iVar2 = iVar2 + 8, *piVar1 == 0)) {
        iVar2 = 0;
      }
      return iVar2;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40007450.
 * REA evidence: ev_f4d0672f0c644da9e7a1bfc95c34892dfe784a1a64b3d87f65e818fae5c94274
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40007450(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  param_1 = ~param_1;
  pbVar3 = param_2;
  uVar4 = param_3;
  if (((uint)param_2 & 3) != 0) {
    while (pbVar3 = param_2, uVar4 != 0) {
      pbVar3 = param_2 + 1;
      param_3 = param_3 - 1;
      param_1 = param_1 >> 8 ^ *(uint *)(&DAT_ram_4009626c + ((*param_2 ^ param_1) & 0xff) * 4);
      if (param_3 == 0) break;
      param_2 = pbVar3;
      uVar4 = (uint)pbVar3 & 3;
    }
  }
  for (uVar4 = 0; param_3 >> 2 != uVar4; uVar4 = uVar4 + 1) {
    uVar2 = (param_1 ^ *(uint *)(pbVar3 + uVar4 * 4)) >> 8 ^
            *(uint *)(&DAT_ram_4009626c + ((param_1 ^ *(uint *)(pbVar3 + uVar4 * 4)) & 0xff) * 4);
    uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_ram_4009626c + (uVar2 & 0xff) * 4);
    uVar2 = *(uint *)(&DAT_ram_4009626c + (uVar2 & 0xff) * 4) ^ uVar2 >> 8;
    param_1 = *(uint *)(&DAT_ram_4009626c + (uVar2 & 0xff) * 4) ^ uVar2 >> 8;
  }
  pbVar3 = pbVar3 + (param_3 >> 2) * 4 + -4;
  if ((param_3 & 3) != 0) {
    pbVar5 = pbVar3 + (param_3 & 3);
    do {
      pbVar1 = pbVar3 + 4;
      pbVar3 = pbVar3 + 1;
      param_1 = param_1 >> 8 ^ *(uint *)(&DAT_ram_4009626c + ((*pbVar1 ^ param_1) & 0xff) * 4);
    } while (pbVar5 != pbVar3);
  }
  return ~param_1;
}


/* NanoCore 1.12, address 0x400074fe.
 * REA evidence: ev_b112e7306a485fbf6fb0e4e220cd64e33397f57279d112772347c03d5b25259a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400074fe(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((code *)**(undefined4 **)(param_1 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x14))();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40007510.
 * REA evidence: ev_dbbd49d5a5b6f3992ab711c49466e647f49a0943664fbcb72c5f9b329abed116
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007510(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40007522.
 * REA evidence: ev_6465d6641fbf0a69c14ea65c8adb280795769c9bf8e1f3cf28e81dd908e120ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007522(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0xc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000752a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40007534.
 * REA evidence: ev_69f11c75e566c7cf9ce9366aa86dc83c3a52a8cbbb0d8e1597855e52b8ccb504
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007534(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000753c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40007546.
 * REA evidence: ev_d67a337aaafbee3fd0b691c14edce29c349e97336d24fdcb45ef1bca88717d42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007546(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x14);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000754e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40007558.
 * REA evidence: ev_1b64a55ebb9114d421a8730f4d2a2bffb9f8da90af1bc2582d95610a6af33a63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007558(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4000756a.
 * REA evidence: ev_a288173f02cb40f9e376ba85c9050777388f89b44fbd01519503ddf60f978ae7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000756a(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4000757c.
 * REA evidence: ev_d0aedd4f526485c25ea1a34094c9570337fa63b59e86a3f66148833aa69efe2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000757c(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x24);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4000758e.
 * REA evidence: ev_fd4281b36eb764d352d24194c0b62c9a0adf8d59f5409d84e7cb70693e6e6659
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000758e(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x28),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40007596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4000759a.
 * REA evidence: ev_c548090795d08ea98f211c862afae0ff496eb7c845ee3ab744bff6c996662d27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000759a(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x400075a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400075a6.
 * REA evidence: ev_c765ffac1e78fcf5125fb610e13a0a2bfd47cf8958e9f47b28c95b1033ce4b32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400075a6(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2 + (param_1 & 0x1f);
  param_1 = param_1 & 0xffffffe0;
  if ((uVar1 & 0x1f) != 0) {
    uVar1 = (uVar1 - (uVar1 & 0x1f)) + 0x20;
  }
  fence();
  custom0();
  iVar2 = uVar1 + param_1;
  do {
    custom0();
    param_1 = param_1 + 0x20;
  } while (0 < (int)(iVar2 - param_1));
  fence();
  custom0();
  return;
}


/* NanoCore 1.12, address 0x400075de.
 * REA evidence: ev_8a01278640feee4d36bf13d5b3af707accfba8b90c2babf982c0b5eeddf6ff19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400075de(void)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = _DAT_ram_300517e0;
  uVar2 = (ulonglong)DAT_ram_40096728;
  *(undefined4 *)(_DAT_ram_300517e0 + 0x14) = 0;
  *(ulonglong *)(iVar1 + 8) = uVar2;
  *(ulonglong *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  return;
}


/* NanoCore 1.12, address 0x40007600.
 * REA evidence: ev_a06cf09e67494dcb8bdc6fc0e32189e044e5260ee7895ec15ff777c861d13d45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40007600(ulonglong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = ABS((float)param_1);
  if (DAT_ram_40096730 < fVar3) {
    fVar1 = DAT_ram_40096728;
    if (0.0 <= (float)param_1) {
      fVar1 = DAT_ram_4009672c;
    }
    param_1 = (ulonglong)(uint)fVar1;
    if (fVar3 < DAT_ram_40096734) {
      fVar3 = (fVar3 - DAT_ram_40096730) / DAT_ram_40096738;
      fVar4 = fVar3 * fVar3;
      fVar2 = fVar3 * fVar4;
      fVar3 = ((fVar2 * (float)PTR_entry_ram_40096740 - fVar4 * DAT_ram_4009673c) + DAT_ram_4009672c
              ) * DAT_ram_40096730 +
              (-(fVar4 * (float)PTR_entry_ram_40096740) + fVar2 + fVar3) * DAT_ram_40096738 +
              fVar2 * DAT_ram_40096744 + fVar4 * DAT_ram_4009673c;
      fVar4 = DAT_ram_4009672c;
      if ((fVar3 <= DAT_ram_4009672c) && (fVar4 = fVar3, fVar3 < 0.0)) {
        fVar4 = 0.0;
      }
      param_1 = (ulonglong)(uint)(fVar1 * fVar4);
    }
  }
  return param_1;
}


/* NanoCore 1.12, address 0x400076b8.
 * REA evidence: ev_fccde606e3fb70edd5939587ad416f19808b858a882ef77c123f0639b1e389ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400076b8(void)

{
  fence();
  if (*(int *)(_DAT_ram_3004f738 + 0xc) != 0) {
    fence();
    *(int *)(_DAT_ram_3004f738 + 0xc) = *(int *)(_DAT_ram_3004f738 + 0xc);
  }
  return;
}


/* NanoCore 1.12, address 0x400076d8.
 * REA evidence: ev_89a7c9b6d250c3ab39aefbcab95d2005a8896f4f0047056c2851b8de77acc58d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400076d8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(_DAT_ram_3004f738 + 0x18);
  fence();
  uVar1 = (uVar2 & 0xffffff) >> 0x10;
  if (uVar2 < DAT_ram_3004ab7c) {
    DAT_ram_3004ab7c = uVar2;
  }
  if (DAT_ram_3004ab80 < uVar2) {
    DAT_ram_3004ab80 = uVar2;
  }
  if (0x80 < uVar1) {
    uVar1 = 0x80;
  }
  return 0x80 - uVar1;
}


/* NanoCore 1.12, address 0x4000771a.
 * REA evidence: ev_02fa30176b62348903dd759f4cbaebc3b4bcb80f2370ed977211e953210b79a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000771a(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_300518d8 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40007780.
 * REA evidence: ev_2170d93123e416674fe95934b57f776da1edfc894ac092a4d5d0c542a5192743
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007780(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004e529 = param_1 != 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x400077a2.
 * REA evidence: ev_1c7b364188329dcb4bc74b0f6f59aab9496414104ed061b3d86736408a908c85
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400077a2(float param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 unaff_fs1;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009672c < param_1) {
    param_1 = DAT_ram_4009672c;
  }
  uVar4 = _DAT_ram_3004f690;
  if (_DAT_ram_3004f690 == 0) {
    uVar4 = 0xac44;
  }
  uVar5 = FUN_ram_400002f4();
  iVar3 = _DAT_ram_300517e0;
  uVar7 = *(ulonglong *)(_DAT_ram_300517e0 + 0x2c);
  if ((float)uVar7 < 0.0) {
    uVar7 = 0;
  }
  else if (DAT_ram_4009672c < (float)uVar7) {
    uVar7 = (ulonglong)(uint)DAT_ram_4009672c;
  }
  fVar1 = param_1 - (float)uVar7;
  if (ABS(fVar1) < DAT_ram_40096748) {
    *(ulonglong *)(_DAT_ram_300517e0 + 0x2c) = CONCAT44(unaff_fs1,param_1);
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
  }
  else {
    lVar2 = (ulonglong)uVar4 * (ulonglong)param_2 + 999;
    iVar6 = FUN_ram_40003bf8((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
    *(ulonglong *)(iVar3 + 0x2c) = uVar7;
    *(int *)(iVar3 + 0x34) = iVar6;
    *(ulonglong *)(iVar3 + 0x30) = (ulonglong)(uint)(fVar1 / (float)iVar6);
  }
  FUN_ram_400002fa(uVar5);
  return;
}


/* NanoCore 1.12, address 0x40007876.
 * REA evidence: ev_38f0e8814e8b6b17ddc11645f4ac166a2e0cf0076ae8f914801318717d7d2c8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40007876(float param_1)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009672c < param_1) {
    param_1 = DAT_ram_4009672c;
  }
  FUN_ram_400002f4();
  iVar1 = _DAT_ram_300517e0;
  *(undefined4 *)(_DAT_ram_300517e0 + 0x30) = 0;
  *(ulonglong *)(iVar1 + 0x2c) = CONCAT44(uStack_10,param_1);
  *(undefined4 *)(iVar1 + 0x34) = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x400078be.
 * REA evidence: ev_80e1009946fe61ec97c983e05b0b483ca7640a497577ea62dc77be4f80839b8f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400078be(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004f722 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x400078dc.
 * REA evidence: ev_44f206ad2901e40eb96e255c73afbac60ddef4cc879f0d8dc4b6e1b9377a4901
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400078dc(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004e51c = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x400078fa.
 * REA evidence: ev_f7b48da70984a55518f681de970ec24a5bd5d12dd359a4b90887fedc0a4e47cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400078fa(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30051810 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40007918.
 * REA evidence: ev_d456121f81d87317f9b5bd3c0a1107c36fa895ea55f135d0ad239910ed50d7ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007918(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3005181a = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40007936.
 * REA evidence: ev_8aebb53021aaaa5930124fdeea715d51e83bcc8875dc8e72a6ed260e810b7050
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007936(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004f711 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40007954.
 * REA evidence: ev_c9deaa914b18368d683b67ef0e8b5dbb4bbbed8ef4e75dcf051687713625553e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007954(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004f718 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40007972.
 * REA evidence: ev_5f96b174922492252ce8e6373ce43ecd20b31a8e78ce182cc83fd8cde7674203
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007972(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004f731 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40007990.
 * REA evidence: ev_a7696036228651d9adad57039d6fedc6d0db318572a6bbb8d8387879517edf65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40007990(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = iVar2 + param_1 * 0x4c;
    bVar1 = false;
    if (*(int *)(iVar2 + 0xc) == param_2) {
      bVar1 = *(char *)(iVar2 + 0x11) != '\0';
    }
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x400079d0.
 * REA evidence: ev_89fd60cd2ce828d1b5d66a43ef9e44906f649db4eabc6383d2f430678597ed3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400079d0(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  uVar3 = 0xffffffff;
  if ((iVar1 != 0) && (uVar3 = 0xffffffff, iVar2 != 0)) {
    iVar5 = *(int *)(iVar1 + param_1 * 0x4c + 0xc);
    FUN_ram_4000303c(iVar2,iVar1,0x308);
    iVar2 = iVar2 + param_1 * 0x4c;
    *(int *)(iVar2 + 0xc) = param_2;
    *(undefined4 *)(iVar2 + 0x50) = param_3;
    *(bool *)(iVar2 + 0x11) = param_6 != 0;
    if (iVar5 != param_2) {
      uVar4 = 0;
      do {
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined8 *)(iVar2 + 0x14) = *(undefined8 *)(param_4 + iVar1);
        iVar2 = iVar2 + 4;
      } while ((uVar4 & 0xff) < param_5);
    }
    nc_dsp_publish_bank(0x3004ee20);
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40007a82.
 * REA evidence: ev_7132c13d75a9657bc54022b2922f6d89f5c3fe94046748885036dcc1600281a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a82(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 auStack_2c [2];
  float fStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_ram_4008b61c();
  if (iVar1 != 0) {
    FUN_ram_4000303c(auStack_2c,iVar1,0x1c);
    if (DAT_ram_4009674c < fStack_1c) {
      if (fStack_1c < DAT_ram_40096750) {
        fStack_1c = DAT_ram_4009672c;
      }
    }
    FUN_ram_4008b5da(param_1,auStack_2c);
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = auStack_2c[0];
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = CONCAT44(uStack_18,fStack_1c);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40007aea.
 * REA evidence: ev_c83a9957cba68c0d12e39fb56e5e225018d3b125a0a7a7859ba870a6384df8f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007aea(void)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_34 [16];
  ushort uStack_24;
  
  FUN_ram_4008de9c(auStack_34);
  if ((uStack_24 < 0x1e) && (iVar3 = FUN_ram_40091e9c(uStack_24 & 0xff,0x30051880), iVar3 == 0)) {
    FUN_ram_400002f4();
    DAT_ram_3004ac94._7_1_ = (undefined1)uStack_24;
    FUN_ram_400002fa();
LAB_ram_40007b2e:
    uVar2 = 0;
    FUN_ram_40007a82(0x30051880,0,0);
  }
  else {
    uVar1 = 0;
    do {
      iVar3 = FUN_ram_40091e9c(uVar1,0x30051880);
      if (iVar3 == 0) {
        FUN_ram_400002f4();
        DAT_ram_3004ac94._7_1_ = (undefined1)uVar1;
        FUN_ram_400002fa();
        if (uStack_24 != uVar1) {
          FUN_ram_4008d7c4(uVar1);
        }
        goto LAB_ram_40007b2e;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 != 0x1e);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40007b94.
 * REA evidence: ev_b0d4cc1b0c66aa1f7e789144a0368c8f7663687203debd654a1b67f7bd8fc93b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40007b94(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006382();
  return iVar1 != 0 && _DAT_ram_3004ea18 == iVar1;
}


/* NanoCore 1.12, address 0x40007bb6.
 * REA evidence: ev_6498b6542a86be6055f070917169eb090c32a38f5245a53559ef52b3a42a8357
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007bb6(void)

{
  if (DAT_ram_3004e4a4 != '\0') {
    FUN_ram_40004b14(0x3004e478);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40007bce.
 * REA evidence: ev_e21700b5ed3e2a2fe4008c809dbea0e8134e865a7b66e16f5838b0e434524352
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40007bce(void)

{
  int iVar1;
  
  if ((((DAT_ram_3004ea1c != '\0') && (DAT_ram_30051819 == '\0')) && (DAT_ram_3004f721 == '\0')) &&
     ((DAT_ram_3004f720 == '\0' && (DAT_ram_30051d6d == '\0')))) {
    iVar1 = FUN_ram_40022e0c(&DAT_ram_3004f694);
    return iVar1 != 0;
  }
  return false;
}


/* NanoCore 1.12, address 0x40007c1e.
 * REA evidence: ev_f46b0819f8623fe316b398e070004fdee9dd8facae3ad7ae57c3a2e576943c3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007c1e(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_ram_400043ae(300);
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    iVar2 = FUN_ram_40004346();
    do {
      if (*param_1 == param_2) {
        return 0;
      }
      iVar3 = FUN_ram_40004346();
    } while (((uint)(iVar3 - iVar2) < uVar1) &&
            ((iVar3 = FUN_ram_4000487e(0x3004f6e8,(iVar2 + uVar1) - iVar3), iVar3 == 0 ||
             (*param_1 == param_2))));
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x40007c9a.
 * REA evidence: ev_fa19903750ac7fafab53f2e89ea52bffee128b8cc50842391fb8705f8d220880
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40007c9a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_ram_3004f6e4 != '\0') {
    iVar1 = FUN_ram_40006382();
    if ((_DAT_ram_3004f6b0 != 0) && (_DAT_ram_3004f6e0 == iVar1)) {
      _DAT_ram_3004f6b0 = _DAT_ram_3004f6b0 + 1;
      return 0;
    }
    iVar2 = FUN_ram_40004a22(0x3004f6b4,0xffffffff);
    if (iVar2 == 0) {
      _DAT_ram_3004f6b0 = 1;
      _DAT_ram_3004f6e0 = iVar1;
      uVar3 = FUN_ram_400002f4();
      uVar4 = FUN_ram_40022db0(&DAT_ram_3004f694);
      if ((DAT_ram_3004ea1c == '\0') || (DAT_ram_30051819 != '\0')) {
        FUN_ram_40022dd8(&DAT_ram_3004f694,uVar4);
      }
      FUN_ram_400002fa(uVar3);
      iVar1 = FUN_ram_40007c1e(0x3004f698,uVar4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = FUN_ram_400002f4();
      FUN_ram_40022dc8(&DAT_ram_3004f694,uVar4);
      if ((DAT_ram_3004ea1c == '\0') || (DAT_ram_30051819 != '\0')) {
        FUN_ram_40022df2(&DAT_ram_3004f694);
      }
      FUN_ram_400002fa(uVar3);
      _DAT_ram_3004f6b0 = 0;
      _DAT_ram_3004f6e0 = 0;
      FUN_ram_40004b14(0x3004f6b4);
      return iVar1;
    }
  }
  return -1;
}


/* NanoCore 1.12, address 0x40007dac.
 * REA evidence: ev_063bc807ec8e175c1b563cfaad8ef512ff784c7432b96d7cb874c806b9087c63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40007dac(undefined1 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_3004f7a4 = param_1;
  if (_DAT_ram_3004f7ac != 0) {
    FUN_ram_40076938();
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.12, address 0x40007dde.
 * REA evidence: ev_3a01f0ad56ad6afd6fb7d4987e88c121634a98ab2a86aef40807f2f59919602f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007dde(int param_1,uint param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2;
  for (; iVar1 = param_1 - param_2, 0x80 < param_2; param_2 = param_2 - 0x80) {
    memset(iVar1,0,0x80);
    fence();
  }
  if (param_2 != 0) {
    memset(iVar1,0,param_2);
    fence();
  }
  return;
}


/* NanoCore 1.12, address 0x40007e28.
 * REA evidence: ev_1877d19d7471199130cad696bccd082b1b2845e698d32a220f4f2ef803c47b76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40007e28(undefined1 param_1,undefined1 param_2,undefined1 param_3,int param_4,
                undefined4 param_5)

{
  char cVar1;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  
  local_30 = 0;
  uStack_2f = param_1;
  uStack_2e = param_2;
  uStack_2d = param_3;
  while( true ) {
    uStack_2c = 0x1b;
    uStack_28 = 4;
    puStack_24 = &local_30;
    cVar1 = FUN_ram_40040d0a(_DAT_ram_3004e3c8,&uStack_2c,1);
    if (cVar1 == '\x01') {
      return 0;
    }
    param_4 = param_4 + -1;
    if (param_4 == 0) break;
    FUN_ram_400064e4(param_5);
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40007e94.
 * REA evidence: ev_9c34828647906bf6aa8b0c40b098b0f60dfe8ff522bd24adc76fddca09672341
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007e94(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    return;
  }
  param_1 = param_1 + param_2 * 0x4c;
  bVar2 = false;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 1:
    cVar1 = DAT_ram_300518d8;
    break;
  case 2:
    cVar1 = DAT_ram_3004f7a4;
    break;
  case 3:
    cVar1 = DAT_ram_3005181a;
    break;
  case 4:
    cVar1 = DAT_ram_30051810;
    break;
  case 5:
    cVar1 = DAT_ram_3004e51c;
    break;
  case 6:
    cVar1 = DAT_ram_3004f711;
    break;
  case 7:
    cVar1 = DAT_ram_3004f722;
    break;
  case 8:
    cVar1 = DAT_ram_3004e529;
    break;
  case 9:
    cVar1 = DAT_ram_3004f731;
    break;
  case 10:
    cVar1 = DAT_ram_3004f718;
    break;
  default:
    goto switchD_ram_40007eb8_default;
  }
  bVar2 = cVar1 != '\0';
switchD_ram_40007eb8_default:
  *(bool *)(param_1 + 0x11) = bVar2;
  return;
}


/* NanoCore 1.12, address 0x40007f26.
 * REA evidence: ev_c45f0b88f8a43c13bb68e08c46b1f6b16828b63ec16a358a3abb421d8e14f3e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40007f26(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      if (3 < param_1) {
        param_1 = 0;
      }
      FUN_ram_4000303c(iVar2,iVar1,0x308);
      if ((*(int *)(iVar1 + 0xf0) != 7) || (*(byte *)(iVar1 + 0xf4) != param_1)) {
        FUN_ram_40069600(iVar2 + 0xf8,0xc,param_1);
      }
      *(undefined4 *)(iVar2 + 0x134) = _DAT_ram_3004f724;
      *(undefined4 *)(iVar2 + 0xf0) = 7;
      *(char *)(iVar2 + 0xf4) = (char)param_1;
      FUN_ram_40007e94(iVar2,3);
      nc_dsp_publish_bank(0x3004ee20);
      if ((*(int *)(iVar1 + 0xf0) == 7) && (*(byte *)(iVar1 + 0xf4) == param_1)) {
        return 0;
      }
      FUN_ram_40068da0(_DAT_ram_3004f724);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40007fea.
 * REA evidence: ev_b8e688eb3fbaa63f38465f65dce46f64447a764760e86add65d330a7673921a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40007fea(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar4 = 0xffffffff;
  if ((iVar2 != 0) && (uVar4 = 0xffffffff, iVar3 != 0)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    bVar1 = param_1 == 1;
    if ((*(int *)(iVar2 + 0x2b8) != 9) || ((bool)*(char *)(iVar2 + 700) != bVar1)) {
      FUN_ram_40069600(iVar3 + 0x2c0,0xc,bVar1);
    }
    *(undefined4 *)(iVar3 + 0x2fc) = _DAT_ram_3004f734;
    *(undefined4 *)(iVar3 + 0x2b8) = 9;
    *(bool *)(iVar3 + 700) = bVar1;
    FUN_ram_40007e94(iVar3,9);
    nc_dsp_publish_bank(0x3004ee20);
    if ((*(int *)(iVar2 + 0x2b8) != 9) || (uVar4 = 0, (bool)*(char *)(iVar2 + 700) != bVar1)) {
      FUN_ram_40068da0(_DAT_ram_3004f734);
      uVar4 = 0;
    }
  }
  return uVar4;
}


