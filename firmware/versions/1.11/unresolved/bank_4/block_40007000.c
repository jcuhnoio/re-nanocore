/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40007000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400070b4.
 * REA evidence: ev_a247366bc52121eccefa3cd4b6eecb4d33aa99a712c788ee0dff1143d86ca87f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400070b4(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0x101) {
    iVar3 = -1;
    if (param_3 != (uint *)0x0) {
      FUN_ram_4000304c(param_3,param_1 + 0x4c,0xc);
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0;
    if (param_2 == 0x103) {
      uVar2 = *param_3;
      uVar1 = param_3[1];
      iVar3 = -1;
      if (uVar2 <= uVar1) {
        if (uVar2 == uVar1) {
          uVar1 = uVar2 + 1;
        }
        iVar3 = FUN_ram_40006fe6(*(undefined4 *)(param_1 + 0x58),uVar2 * *(int *)(param_1 + 0x50),
                                 (uVar1 - uVar2) * *(int *)(param_1 + 0x50));
        iVar3 = iVar3 >> 0x1f;
      }
    }
  }
  return iVar3;
}


/* NanoCore 1.11, address 0x40007110.
 * REA evidence: ev_8027bbcac9b9c8dfc1904784e5b01bb22f2be4cbee54f8594692bd995c0abc8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40007110(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_30;
  undefined1 auStack_2c [32];
  
  iVar2 = FUN_ram_40006eee();
  local_30 = 0;
  memset(auStack_2c,0,0x1c);
  if ((iVar2 == 0) || (iVar1 = FUN_ram_40006dbe(iVar2 + 0x1c), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_ram_40005656(0x5c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x50) = 0x200;
      *(undefined4 *)(iVar1 + 0x54) = 0x200;
      uVar3 = *(uint *)(iVar2 + 0x38);
      *(int *)(iVar1 + 0x58) = iVar2;
      *(uint *)(iVar1 + 0x4c) = uVar3 >> 9;
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      *(undefined1 **)(iVar1 + 0x3c) = &LAB_ram_40007048;
      *(undefined1 **)(iVar1 + 0x40) = &LAB_ram_40007022;
      *(code **)(iVar1 + 0x44) = FUN_ram_400070b4;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      FUN_ram_400055fc(&local_30,s_blk__s_ram_400940f0,iVar2 + 4);
      FUN_ram_4000446c(iVar1,&local_30,0xb);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x400071b0.
 * REA evidence: ev_650a1b854ceba0d9ca25469212d2b361aedef229795f491aa09758f97c59a10f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400071b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_ram_40006eee();
  if ((iVar1 == 0) || (iVar3 = FUN_ram_40006dbe(iVar1 + 0x1c), iVar3 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_ram_40005656(0x60);
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
      *(undefined **)(iVar2 + 0x58) = &DAT_ram_400940f8;
      FUN_ram_40041a54(iVar1 + 4,iVar2);
    }
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x40007212.
 * REA evidence: ev_1e5fb265c35be0f265f96b5906daa504b8c9b536346e7e21d6d169a723dba7ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40007212(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005b1d2(_DAT_ram_3004d078,DAT_ram_30049bb0 + param_1,param_2);
  if (iVar1 != 0) {
    param_2 = 0xffffffff;
  }
  return param_2;
}


/* NanoCore 1.11, address 0x400072a2.
 * REA evidence: ev_935446c296fd69420ff6861052d4dd1e3566113ff2f4b3d5a9592b960fb5105b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400072a2(void)

{
  undefined4 uVar1;
  
  _DAT_ram_3004d078 = FUN_ram_40042fb2(s_norflash0_ram_400940e4);
  uVar1 = 0xffffffff;
  if (_DAT_ram_3004d078 != 0) {
    DAT_ram_30049bb8 = *(undefined4 *)(_DAT_ram_3004d078 + 0x18);
    DAT_ram_30049bb4 = *(undefined4 *)(_DAT_ram_3004d078 + 0x10);
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x400072d8.
 * REA evidence: ev_ab52d8af036c4f99ff6510d294fdd615ee22ea73998e01cf538d635c1534220d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_400072d8(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_ram_40003414();
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


/* NanoCore 1.11, address 0x40007310.
 * REA evidence: ev_8e3743f2961a25cac4a669fa0be5d4abe65c04d6a069a0f9669064bf9f662cf4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40007310(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte *pbStack_14;
  
  iVar2 = FUN_ram_40002f2c(0xb0);
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
    uVar7 = FUN_ram_4000374a(param_1,&pbStack_14,0);
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
      if (bVar4 != 0x47) goto LAB_ram_4000734e;
      uVar3 = (undefined4)(uVar7 >> 2);
      iVar5 = iVar5 << 0x1e;
    }
    pbStack_14 = pbStack_14 + 1;
    *(int *)(iVar2 + 0xa0) = iVar5;
    *(undefined4 *)(iVar2 + 0xa4) = uVar3;
  }
LAB_ram_4000734e:
  if (*pbStack_14 == 0x40) {
    pbStack_14 = pbStack_14 + 1;
    uVar6 = FUN_ram_4000374a(pbStack_14,&pbStack_14,0);
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
    uVar3 = FUN_ram_40007310(pbStack_14,*(int *)(iVar2 + 0x98) + *(int *)(iVar2 + 0xa0));
    *(undefined4 *)(iVar2 + 0xa8) = uVar3;
  }
  else {
    FUN_ram_40032a1a(s___s__Partition_name_should_be_ne_ram_40094107 + 1,
                     s_aic_part_parse_ram_40094134);
    FUN_ram_40032a30(pbStack_14);
    FUN_ram_40002f3a(iVar2);
    iVar2 = 0;
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x40007460.
 * REA evidence: ev_7fae5b9523c310bb82a1825d47c8f063ed7678a52ee9746a9dc3f12514c2351d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007460(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400072d8();
  FUN_ram_40007310(uVar1,0);
  return;
}


/* NanoCore 1.11, address 0x40007472.
 * REA evidence: ev_ed3cb4618aa085959d064280f0e834735297d08126c6c21e2441a478fbe92153
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007472(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = *(int *)(param_1 + 0xa8);
      FUN_ram_40002f3a();
    } while (param_1 != 0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40007476.
 * REA evidence: ev_171241d27b589f1e3064a4600703588c70a57c4ae15fc48ef905c59abf1bd98a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007476(int param_1)

{
  do {
    param_1 = *(int *)(param_1 + 0xa8);
    FUN_ram_40002f3a();
  } while (param_1 != 0);
  return;
}


/* NanoCore 1.11, address 0x40007490.
 * REA evidence: ev_4df8737cd481a8af6c77945508a884b94da7e73caa27424d51d948ff05975d2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_40007490(int *param_1,int param_2)

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


/* NanoCore 1.11, address 0x400074b0.
 * REA evidence: ev_d7644bc13ace68795ab31a59b12d5532fc09ec6ef246edb67aa0610ad90a483e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400074b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4003fc06();
  if (iVar2 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    FUN_ram_4000304c(iVar1 + 0x3004d07c,iVar2 + iVar1,4);
    if (*(int *)(iVar2 + iVar1) == 0x4149ffff) break;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x400);
  FUN_ram_4003fc10(0x3004d07c);
  return;
}


/* NanoCore 1.11, address 0x40007520.
 * REA evidence: ev_9edf0a3f690f8e5b98e7564762ddb2ac4e79f7c2d15ef27fd93ae857ff2bc16d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40007520(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if ((param_1 & 3) == 0) {
      iVar2 = FUN_ram_40007490(param_1,0x41490005);
      if ((iVar2 != 0) && (piVar1 = (int *)(iVar2 + 4), iVar2 = iVar2 + 8, *piVar1 == 0)) {
        iVar2 = 0;
      }
      return iVar2;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40007554.
 * REA evidence: ev_89d8dea3e30cebcec1a28597dc04bd5dad182e20ee291ee98035a42db69a3878
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40007554(uint param_1,byte *param_2,uint param_3)

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
      param_1 = param_1 >> 8 ^ *(uint *)(&DAT_ram_40094144 + ((*param_2 ^ param_1) & 0xff) * 4);
      if (param_3 == 0) break;
      param_2 = pbVar3;
      uVar4 = (uint)pbVar3 & 3;
    }
  }
  for (uVar4 = 0; param_3 >> 2 != uVar4; uVar4 = uVar4 + 1) {
    uVar2 = (param_1 ^ *(uint *)(pbVar3 + uVar4 * 4)) >> 8 ^
            *(uint *)(&DAT_ram_40094144 + ((param_1 ^ *(uint *)(pbVar3 + uVar4 * 4)) & 0xff) * 4);
    uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_ram_40094144 + (uVar2 & 0xff) * 4);
    uVar2 = *(uint *)(&DAT_ram_40094144 + (uVar2 & 0xff) * 4) ^ uVar2 >> 8;
    param_1 = *(uint *)(&DAT_ram_40094144 + (uVar2 & 0xff) * 4) ^ uVar2 >> 8;
  }
  pbVar3 = pbVar3 + (param_3 >> 2) * 4 + -4;
  if ((param_3 & 3) != 0) {
    pbVar5 = pbVar3 + (param_3 & 3);
    do {
      pbVar1 = pbVar3 + 4;
      pbVar3 = pbVar3 + 1;
      param_1 = param_1 >> 8 ^ *(uint *)(&DAT_ram_40094144 + ((*pbVar1 ^ param_1) & 0xff) * 4);
    } while (pbVar5 != pbVar3);
  }
  return ~param_1;
}


/* NanoCore 1.11, address 0x40007602.
 * REA evidence: ev_4ffcddec33517b522ccd7390a0df22f6c7d2a4290a54b52e4b36f31ae05e59b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007602(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((code *)**(undefined4 **)(param_1 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000760a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x14))();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40007614.
 * REA evidence: ev_c82653f8f3ff79797ec011606f8159d6b3086cd013209581a7c4403d11a38b9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007614(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000761c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40007626.
 * REA evidence: ev_412ffec560116719b11bad5065914eabfdd7131a51654e4565fa6c22787c8549
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007626(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0xc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000762e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40007638.
 * REA evidence: ev_695b72474ffd1c85237047e95e37a2e35956d235d6a94a9dfa970ad401e5990d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007638(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4000764a.
 * REA evidence: ev_e860df3d0333f8583d132234f5671e39d0276e76a57b75759fc36c1d7df24b87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000764a(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x14);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4000765c.
 * REA evidence: ev_113a17517d5337873e0a69691724054ee36a0b44dbe5ead509040b92a79cc899
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000765c(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4000766e.
 * REA evidence: ev_2667f32225a7dc0f05c00e50e1bbf378f4c88ed335ecd8954bcfd3411bc49d50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000766e(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40007680.
 * REA evidence: ev_e6dadee8ce47c9da11ac2b75e34fb953429db4db629cedecd1d9617c13436f0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007680(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x24);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40007692.
 * REA evidence: ev_a461a0da34b65a1fe799c5e61177b18d3395d77ef3a20815398c7b95f92f9227
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007692(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x28),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4000769a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4000769e.
 * REA evidence: ev_a0bde884d3b355b380c3a58aee3a56d647bd08eb53ad971124e2b5b0c3fae098
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000769e(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x400076a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400076aa.
 * REA evidence: ev_a2fa961bb5a404375a2d066427e6034d77a94e1733b9f7bcbbeb93b73a7d638c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400076aa(uint param_1,int param_2)

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


/* NanoCore 1.11, address 0x400076e2.
 * REA evidence: ev_d2d062f6b62699a95b767793b7950a77d287da511ccb3f8a2c97d574ce22d893
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400076e2(void)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = _DAT_ram_30050854;
  uVar2 = (ulonglong)DAT_ram_40094600;
  *(undefined4 *)(_DAT_ram_30050854 + 0x14) = 0;
  *(ulonglong *)(iVar1 + 8) = uVar2;
  *(ulonglong *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  return;
}


/* NanoCore 1.11, address 0x40007704.
 * REA evidence: ev_310c294708b8e1f086f3cb666005ee2df549e40023c2b362e15e2e4212fd73d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40007704(ulonglong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = ABS((float)param_1);
  if (DAT_ram_40094608 < fVar3) {
    fVar1 = DAT_ram_40094600;
    if (0.0 <= (float)param_1) {
      fVar1 = DAT_ram_40094604;
    }
    param_1 = (ulonglong)(uint)fVar1;
    if (fVar3 < DAT_ram_4009460c) {
      fVar3 = (fVar3 - DAT_ram_40094608) / DAT_ram_40094610;
      fVar4 = fVar3 * fVar3;
      fVar2 = fVar3 * fVar4;
      fVar3 = ((fVar2 * (float)PTR_entry_ram_40094618 - fVar4 * DAT_ram_40094614) + DAT_ram_40094604
              ) * DAT_ram_40094608 +
              (-(fVar4 * (float)PTR_entry_ram_40094618) + fVar2 + fVar3) * DAT_ram_40094610 +
              fVar2 * DAT_ram_4009461c + fVar4 * DAT_ram_40094614;
      fVar4 = DAT_ram_40094604;
      if ((fVar3 <= DAT_ram_40094604) && (fVar4 = fVar3, fVar3 < 0.0)) {
        fVar4 = 0.0;
      }
      param_1 = (ulonglong)(uint)(fVar1 * fVar4);
    }
  }
  return param_1;
}


/* NanoCore 1.11, address 0x400077bc.
 * REA evidence: ev_e9b168b3830c3f6228af8bd6dd05ab946bad03195ff52c8f5d90b460323c057d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400077bc(void)

{
  fence();
  if (*(int *)(_DAT_ram_3004e7d0 + 0xc) != 0) {
    fence();
    *(int *)(_DAT_ram_3004e7d0 + 0xc) = *(int *)(_DAT_ram_3004e7d0 + 0xc);
  }
  return;
}


/* NanoCore 1.11, address 0x400077dc.
 * REA evidence: ev_0312adfa88f999f66df49e0e136bc2f14f6899911ce2ab597d1b6d493d43546f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400077dc(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(_DAT_ram_3004e7d0 + 0x18);
  fence();
  uVar1 = (uVar2 & 0xffffff) >> 0x10;
  if (uVar2 < DAT_ram_30049c44) {
    DAT_ram_30049c44 = uVar2;
  }
  if (DAT_ram_30049c48 < uVar2) {
    DAT_ram_30049c48 = uVar2;
  }
  if (0x80 < uVar1) {
    uVar1 = 0x80;
  }
  return 0x80 - uVar1;
}


/* NanoCore 1.11, address 0x4000781e.
 * REA evidence: ev_d554f24597456b8d21f2b96065fd43b0d403db9cba542eed130873306d651183
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000781e(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30050938 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x4000783c.
 * REA evidence: ev_2ea7b88d26288fa88a4926f849259fde40f1e96fa2bf7747628b1afa3c5d988f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000783c(float param_1,int param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_40094604 < param_1) {
    param_1 = DAT_ram_40094604;
  }
  FUN_ram_400002f4();
  *(undefined4 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  *(float *)(param_2 + 0x84) = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40007884.
 * REA evidence: ev_db4abed20a800979d9ccd58fac33a22e318fb1172013ca3d022eb28f0be61b8f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007884(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004d5d9 = param_1 != 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x400078a6.
 * REA evidence: ev_7490848034ae6e780a287d57c82545c7acee63f3f1547f9c8110c2ffe294dadb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400078a6(float param_1,uint param_2)

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
  else if (DAT_ram_40094604 < param_1) {
    param_1 = DAT_ram_40094604;
  }
  uVar4 = _DAT_ram_3004e728;
  if (_DAT_ram_3004e728 == 0) {
    uVar4 = 0xac44;
  }
  uVar5 = FUN_ram_400002f4();
  iVar3 = _DAT_ram_30050854;
  uVar7 = *(ulonglong *)(_DAT_ram_30050854 + 0x2c);
  if ((float)uVar7 < 0.0) {
    uVar7 = 0;
  }
  else if (DAT_ram_40094604 < (float)uVar7) {
    uVar7 = (ulonglong)(uint)DAT_ram_40094604;
  }
  fVar1 = param_1 - (float)uVar7;
  if (ABS(fVar1) < DAT_ram_40094620) {
    *(ulonglong *)(_DAT_ram_30050854 + 0x2c) = CONCAT44(unaff_fs1,param_1);
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
  }
  else {
    lVar2 = (ulonglong)uVar4 * (ulonglong)param_2 + 999;
    iVar6 = FUN_ram_40003b9c((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
    *(ulonglong *)(iVar3 + 0x2c) = uVar7;
    *(int *)(iVar3 + 0x34) = iVar6;
    *(ulonglong *)(iVar3 + 0x30) = (ulonglong)(uint)(fVar1 / (float)iVar6);
  }
  FUN_ram_400002fa(uVar5);
  return;
}


/* NanoCore 1.11, address 0x4000797a.
 * REA evidence: ev_9d8dcc612bf3716c2c5de7e4a3404d4a6fd06ac58ef9f8b7c3e2fdfa4434a3fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000797a(float param_1)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_40094604 < param_1) {
    param_1 = DAT_ram_40094604;
  }
  FUN_ram_400002f4();
  iVar1 = _DAT_ram_30050854;
  *(undefined4 *)(_DAT_ram_30050854 + 0x30) = 0;
  *(ulonglong *)(iVar1 + 0x2c) = CONCAT44(uStack_10,param_1);
  *(undefined4 *)(iVar1 + 0x34) = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x400079c2.
 * REA evidence: ev_d93cef2a8d0d986e56dfa4e894c8033d923d171c95de8e20fb5e0fc98a8c1ffc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400079c2(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004e7ba = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x400079e0.
 * REA evidence: ev_d4cddc6cb6a6a16d6284173f8cf3b715022d0ade93f21e2a1dbdb0c17aa3c31f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400079e0(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004d5cc = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x400079fe.
 * REA evidence: ev_7f27cccabff0e1e8b3dee851a1f5dde2c09226f5c1b35b480cdf2356c120d901
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400079fe(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30050880 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40007a1c.
 * REA evidence: ev_dc2dd3981dffffc9c8c30ce9d09a40077e3500f3bd6ce3097ec84de12d7afb94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a1c(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3005088a = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40007a3a.
 * REA evidence: ev_7f914daadde9bc4bd4ce18336c28660d058e835688236e2ae44b934707fbe141
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a3a(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004e7a9 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40007a58.
 * REA evidence: ev_58b6a7549d33c11fdfb4b3a7cf2bb0c52e2ea65471d38515a81cb8ca451fe1dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a58(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004e7b0 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40007a76.
 * REA evidence: ev_3999a9175d803da02e3decc7399bca99960395f725b66afd6aa0d07af8d43715
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a76(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004e7c9 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40007a94.
 * REA evidence: ev_2a77805d34882ff576c0bb03fd6df83d676e2b799500548233912751769fc5d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40007a94(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
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


/* NanoCore 1.11, address 0x40007ad4.
 * REA evidence: ev_6f80bc5e2be59f5707c2123be44bc02f82e36ba9a9d372693f5a93fa69ddc462
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40007ad4(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  uVar3 = 0xffffffff;
  if ((iVar1 != 0) && (uVar3 = 0xffffffff, iVar2 != 0)) {
    iVar5 = *(int *)(iVar1 + param_1 * 0x4c + 0xc);
    FUN_ram_4000304c(iVar2,iVar1,0x304);
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
    FUN_ram_4005fcd6(0x3004dec4);
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40007b86.
 * REA evidence: ev_bb1d3bf078d98d9891a6d8e5a0b53a30c68cb0d9e585f0c9993ba85c5aabb665
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007b86(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 auStack_2c [2];
  float fStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_ram_40089d62();
  if (iVar1 != 0) {
    FUN_ram_4000304c(auStack_2c,iVar1,0x1c);
    if (DAT_ram_40094624 < fStack_1c) {
      if (fStack_1c < DAT_ram_40094628) {
        fStack_1c = DAT_ram_40094604;
      }
    }
    FUN_ram_40089d20(param_1,auStack_2c);
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = auStack_2c[0];
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = CONCAT44(uStack_18,fStack_1c);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40007bee.
 * REA evidence: ev_0436fe86675c8cd5971ac06ebff2e6c3a378c4d284a457f407b97614080fc686
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007bee(void)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_34 [16];
  ushort uStack_24;
  
  FUN_ram_4008c5e4(auStack_34);
  if ((uStack_24 < 0x1e) && (iVar3 = FUN_ram_400905cc(uStack_24 & 0xff,0x300508ec), iVar3 == 0)) {
    FUN_ram_400002f4();
    DAT_ram_30049d58 = (undefined1)uStack_24;
    FUN_ram_400002fa();
LAB_ram_40007c32:
    uVar2 = 0;
    FUN_ram_40007b86(0x300508ec,0,0);
  }
  else {
    uVar1 = 0;
    do {
      iVar3 = FUN_ram_400905cc(uVar1,0x300508ec);
      if (iVar3 == 0) {
        FUN_ram_400002f4();
        DAT_ram_30049d58 = (undefined1)uVar1;
        FUN_ram_400002fa();
        if (uStack_24 != uVar1) {
          FUN_ram_4008bf0c(uVar1);
        }
        goto LAB_ram_40007c32;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 != 0x1e);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40007c98.
 * REA evidence: ev_30db59b01b0905c2e2f5317be98ee18f08624be060a8715bd1693334e3561be9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40007c98(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006464();
  return iVar1 != 0 && _DAT_ram_3004dabc == iVar1;
}


/* NanoCore 1.11, address 0x40007cba.
 * REA evidence: ev_1a6de9d14506e0db28f20032040fa439014891f771441a0534cbe73adb22e250
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007cba(void)

{
  if (DAT_ram_3004d564 != '\0') {
    FUN_ram_40004ab8(0x3004d538);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40007cd2.
 * REA evidence: ev_71b940f90ca13243ab928dddba592c81c3fe154e04be4d1aa18461e0b94ed276
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40007cd2(void)

{
  int iVar1;
  
  if ((((DAT_ram_3004dac0 != '\0') && (DAT_ram_30050889 == '\0')) && (DAT_ram_3004e7b9 == '\0')) &&
     ((DAT_ram_3004e7b8 == '\0' && (DAT_ram_30050dcc == '\0')))) {
    iVar1 = FUN_ram_40022914(&DAT_ram_3004e72c);
    return iVar1 != 0;
  }
  return false;
}


/* NanoCore 1.11, address 0x40007d22.
 * REA evidence: ev_aeaf5b8edd9466ecf0618d164ad8915ae0897760d9bb58eeb7200f94824d7c66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007d22(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_ram_40004352(300);
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    iVar2 = FUN_ram_400042ea();
    do {
      if (*param_1 == param_2) {
        return 0;
      }
      iVar3 = FUN_ram_400042ea();
    } while (((uint)(iVar3 - iVar2) < uVar1) &&
            ((iVar3 = FUN_ram_40004822(0x3004e780,(iVar2 + uVar1) - iVar3), iVar3 == 0 ||
             (*param_1 == param_2))));
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x40007d9e.
 * REA evidence: ev_aff616b9a03d4bfc64658f48ce6c5be55f9b2e33ec1ea7e4c63212cc7ea49937
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40007d9e(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_ram_3004e77c != '\0') {
    iVar1 = FUN_ram_40006464();
    if ((_DAT_ram_3004e748 != 0) && (_DAT_ram_3004e778 == iVar1)) {
      _DAT_ram_3004e748 = _DAT_ram_3004e748 + 1;
      return 0;
    }
    iVar2 = FUN_ram_400049c6(0x3004e74c,0xffffffff);
    if (iVar2 == 0) {
      _DAT_ram_3004e748 = 1;
      _DAT_ram_3004e778 = iVar1;
      uVar3 = FUN_ram_400002f4();
      uVar4 = FUN_ram_400228b8(&DAT_ram_3004e72c);
      if ((DAT_ram_3004dac0 == '\0') || (DAT_ram_30050889 != '\0')) {
        FUN_ram_400228e0(&DAT_ram_3004e72c,uVar4);
      }
      FUN_ram_400002fa(uVar3);
      iVar1 = FUN_ram_40007d22(0x3004e730,uVar4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = FUN_ram_400002f4();
      FUN_ram_400228d0(&DAT_ram_3004e72c,uVar4);
      if ((DAT_ram_3004dac0 == '\0') || (DAT_ram_30050889 != '\0')) {
        FUN_ram_400228fa(&DAT_ram_3004e72c);
      }
      FUN_ram_400002fa(uVar3);
      _DAT_ram_3004e748 = 0;
      _DAT_ram_3004e778 = 0;
      FUN_ram_40004ab8(0x3004e74c);
      return iVar1;
    }
  }
  return -1;
}


/* NanoCore 1.11, address 0x40007eb0.
 * REA evidence: ev_39301852aa76e5440374121acfbca7a439bce1ec48008cf657fefd7ce48a97e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40007eb0(undefined1 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_3004e818 = param_1;
  if (_DAT_ram_3004e820 != 0) {
    FUN_ram_400762c8();
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.11, address 0x40007ee2.
 * REA evidence: ev_2a340c151394d7b8145080d9771c211b8e9635f5b44835c504317b8dcc1d1495
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40007ee2(undefined1 param_1,undefined1 param_2,undefined1 param_3,int param_4,
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
    cVar1 = FUN_ram_40040c48(_DAT_ram_3004d488,&uStack_2c,1);
    if (cVar1 == '\x01') {
      return 0;
    }
    param_4 = param_4 + -1;
    if (param_4 == 0) break;
    FUN_ram_400065c6(param_5);
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40007f4e.
 * REA evidence: ev_d4d6c26f4b9be9902809bb45fba0693f6e4e1b93d5ebc46b59f887f2a0a4382e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007f4e(int param_1,int param_2)

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
    cVar1 = DAT_ram_30050938;
    break;
  case 2:
    cVar1 = DAT_ram_3004e818;
    break;
  case 3:
    cVar1 = DAT_ram_3005088a;
    break;
  case 4:
    cVar1 = DAT_ram_30050880;
    break;
  case 5:
    cVar1 = DAT_ram_3004d5cc;
    break;
  case 6:
    cVar1 = DAT_ram_3004e7a9;
    break;
  case 7:
    cVar1 = DAT_ram_3004e7ba;
    break;
  case 8:
    cVar1 = DAT_ram_3004d5d9;
    break;
  case 9:
    cVar1 = DAT_ram_3004e7c9;
    break;
  case 10:
    cVar1 = DAT_ram_3004e7b0;
    break;
  default:
    goto switchD_ram_40007f72_default;
  }
  bVar2 = cVar1 != '\0';
switchD_ram_40007f72_default:
  *(bool *)(param_1 + 0x11) = bVar2;
  return;
}


/* NanoCore 1.11, address 0x40007fe0.
 * REA evidence: ev_fad5676b8c66e69fb0169866f73d64a177e0ac1dc57b512345e5fef56f91aea2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40007fe0(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      if (3 < param_1) {
        param_1 = 0;
      }
      FUN_ram_4000304c(iVar2,iVar1,0x304);
      if ((*(int *)(iVar1 + 0xf0) != 7) || (*(byte *)(iVar1 + 0xf4) != param_1)) {
        FUN_ram_400695cc(iVar2 + 0xf8,0xc,param_1);
      }
      *(undefined4 *)(iVar2 + 0x134) = _DAT_ram_3004e7bc;
      *(undefined4 *)(iVar2 + 0xf0) = 7;
      *(char *)(iVar2 + 0xf4) = (char)param_1;
      FUN_ram_40007f4e(iVar2,3);
      FUN_ram_4005fcd6(0x3004dec4);
      if ((*(int *)(iVar1 + 0xf0) == 7) && (*(byte *)(iVar1 + 0xf4) == param_1)) {
        return 0;
      }
      FUN_ram_40068d64(_DAT_ram_3004e7bc);
      uVar3 = 0;
    }
  }
  return uVar3;
}


