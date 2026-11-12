/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40007000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400070be.
 * REA evidence: ev_8fcdb6ca509cc849bd2bee4d9484d50361f0953cc3bc2c3cf00c405ab40db381
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400070be(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0x101) {
    iVar3 = -1;
    if (param_3 != (uint *)0x0) {
      FUN_ram_4000305c(param_3,param_1 + 0x4c,0xc);
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
        iVar3 = FUN_ram_40006ff2(*(undefined4 *)(param_1 + 0x58),uVar2 * *(int *)(param_1 + 0x50),
                                 (uVar1 - uVar2) * *(int *)(param_1 + 0x50));
        iVar3 = iVar3 >> 0x1f;
      }
    }
  }
  return iVar3;
}


/* NanoCore 1.10, address 0x4000711a.
 * REA evidence: ev_08fed4c921c1ef5819a93c63a298dc74e7c969c429a7e6bd08d19394f9ef4b2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000711a(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_30;
  undefined1 auStack_2c [32];
  
  iVar2 = fal_partition_find();
  local_30 = 0;
  memset(auStack_2c,0,0x1c);
  if ((iVar2 == 0) || (iVar1 = FUN_ram_40006dcc(iVar2 + 0x1c), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_ram_40005666(0x5c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x50) = 0x200;
      *(undefined4 *)(iVar1 + 0x54) = 0x200;
      uVar3 = *(uint *)(iVar2 + 0x38);
      *(int *)(iVar1 + 0x58) = iVar2;
      *(uint *)(iVar1 + 0x4c) = uVar3 >> 9;
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      *(undefined1 **)(iVar1 + 0x3c) = &LAB_ram_40007052;
      *(undefined1 **)(iVar1 + 0x40) = &LAB_ram_4000702e;
      *(code **)(iVar1 + 0x44) = FUN_ram_400070be;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x48) = 0;
      FUN_ram_4000560c(&local_30,s_blk__s_ram_40092330,iVar2 + 4);
      FUN_ram_4000447c(iVar1,&local_30,0xb);
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400071ba.
 * REA evidence: ev_c0acd7876e2a3c6f5dedbff11b3451d61e5db1b19c31969da7fb7b71ad8888ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400071ba(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = fal_partition_find();
  if ((iVar1 == 0) || (iVar3 = FUN_ram_40006dcc(iVar1 + 0x1c), iVar3 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_ram_40005666(0x60);
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
      *(undefined **)(iVar2 + 0x58) = &DAT_ram_40092338;
      FUN_ram_40040b1c(iVar1 + 4,iVar2);
    }
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x4000721c.
 * REA evidence: ev_d5b5f4e11ca82c022f8052237c5e2e7ce16279ba14ec2c457d3b289aaaa0ccf4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000721c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005a242(_DAT_ram_300499b8,DAT_ram_300464f0 + param_1,param_2);
  if (iVar1 != 0) {
    param_2 = 0xffffffff;
  }
  return param_2;
}


/* NanoCore 1.10, address 0x400072ac.
 * REA evidence: ev_fa60887a4dc6695f8953b8c6d89549be0a77d9919d1a516b10b7477e1ca26a52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400072ac(void)

{
  undefined4 uVar1;
  
  _DAT_ram_300499b8 = FUN_ram_40042040(s_norflash0_ram_40092324);
  uVar1 = 0xffffffff;
  if (_DAT_ram_300499b8 != 0) {
    DAT_ram_300464f8 = *(undefined4 *)(_DAT_ram_300499b8 + 0x18);
    DAT_ram_300464f4 = *(undefined4 *)(_DAT_ram_300499b8 + 0x10);
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400072e2.
 * REA evidence: ev_89b1c08f9b99ed20bcde67c3cdc51c2de92e5d4063e88fa7fdd43dfe381af0ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_400072e2(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_ram_40003424();
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


/* NanoCore 1.10, address 0x4000731a.
 * REA evidence: ev_894baf254b493cc724db0f4900dd0e09acbd6ecb4f157ccd68e93941045a428e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void * FUN_ram_4000731a(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  void *__s;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbStack_14;
  
  __s = (void *)FUN_ram_40002f3c(0xb0);
  if (__s == (void *)0x0) {
    return (void *)0x0;
  }
  memset(__s,0,0xb0);
  bVar3 = *param_1;
  *(undefined4 *)((int)__s + 0x98) = param_2;
  *(undefined4 *)((int)__s + 0x9c) = 0;
  if (bVar3 == 0x2d) {
    pbStack_14 = param_1 + 1;
  }
  else {
    pbStack_14 = param_1;
    uVar6 = FUN_ram_4000375a(param_1,&pbStack_14,0);
    iVar4 = (int)uVar6;
    *(ulonglong *)((int)__s + 0xa0) = uVar6;
    bVar3 = *pbStack_14 & 0xdf;
    if (bVar3 == 0x4b) {
      uVar2 = (undefined4)(uVar6 >> 0x16);
      iVar4 = iVar4 << 10;
    }
    else if (bVar3 == 0x4d) {
      uVar2 = (undefined4)(uVar6 >> 0xc);
      iVar4 = iVar4 << 0x14;
    }
    else {
      if (bVar3 != 0x47) goto LAB_ram_40007358;
      uVar2 = (undefined4)(uVar6 >> 2);
      iVar4 = iVar4 << 0x1e;
    }
    pbStack_14 = pbStack_14 + 1;
    *(int *)((int)__s + 0xa0) = iVar4;
    *(undefined4 *)((int)__s + 0xa4) = uVar2;
  }
LAB_ram_40007358:
  if (*pbStack_14 == 0x40) {
    pbStack_14 = pbStack_14 + 1;
    uVar5 = FUN_ram_4000375a(pbStack_14,&pbStack_14,0);
    *(undefined8 *)((int)__s + 0x98) = uVar5;
  }
  if (*pbStack_14 == 0x28) {
    pbStack_14 = pbStack_14 + 1;
    for (iVar4 = 0; (pbVar1 = pbStack_14 + 1, *pbStack_14 != 0x29 && (iVar4 != 0x90));
        iVar4 = iVar4 + 1) {
      *(byte *)((int)__s + iVar4) = *pbStack_14;
      pbStack_14 = pbVar1;
    }
    do {
      pbStack_14 = pbVar1;
      bVar3 = *pbStack_14;
      if (bVar3 == 0) {
        return __s;
      }
      if (bVar3 == 0x3b) {
        return __s;
      }
      pbStack_14 = pbStack_14 + 1;
      pbVar1 = pbStack_14;
    } while (bVar3 != 0x2c);
    uVar2 = FUN_ram_4000731a(pbStack_14,*(int *)((int)__s + 0x98) + *(int *)((int)__s + 0xa0));
    *(undefined4 *)((int)__s + 0xa8) = uVar2;
  }
  else {
    FUN_ram_40031b48(&DAT_ram_40092348,s_aic_part_parse_ram_40092374);
    FUN_ram_40031b5e(pbStack_14);
    FUN_ram_40002f4a(__s);
    __s = (void *)0x0;
  }
  return __s;
}


/* NanoCore 1.10, address 0x4000746a.
 * REA evidence: ev_a90496e7b3095b9660e2c32f21c683d04e0f43d090572edb6b617b9bf9d48708
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000746a(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400072e2();
  FUN_ram_4000731a(uVar1,0);
  return;
}


/* NanoCore 1.10, address 0x4000747c.
 * REA evidence: ev_d6b3c61dca41959f38b5f9b6bff22e58e1d799d71becf0061a9f68f6d24d2437
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000747c(int param_1)

{
  if (param_1 != 0) {
    do {
      param_1 = *(int *)(param_1 + 0xa8);
      FUN_ram_40002f4a();
    } while (param_1 != 0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000749a.
 * REA evidence: ev_c7f8308ab16e3d99595336a1061d608e49c9fb9c53ef9a6830e30fc61a5d90b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4000749a(int *param_1,int param_2)

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


/* NanoCore 1.10, address 0x400074ba.
 * REA evidence: ev_fe09d29c2dd673943128bf85d353915a54799a61065d94cf145b2ad1c4102ef8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400074ba(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4003ecce();
  if (iVar2 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    FUN_ram_4000305c(iVar1 + 0x300499bc,iVar2 + iVar1,4);
    if (*(int *)(iVar2 + iVar1) == 0x4149ffff) break;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x400);
  FUN_ram_4003ecd8(0x300499bc);
  return;
}


/* NanoCore 1.10, address 0x4000752a.
 * REA evidence: ev_185857235067d98651b79b624a1542f5e64f0289cb1ac82d1259268a93e9770f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000752a(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if ((param_1 & 3) == 0) {
      iVar2 = FUN_ram_4000749a(param_1,0x41490005);
      if ((iVar2 != 0) && (piVar1 = (int *)(iVar2 + 4), iVar2 = iVar2 + 8, *piVar1 == 0)) {
        iVar2 = 0;
      }
      return iVar2;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4000755e.
 * REA evidence: ev_f25a75ffe4386b3fd03cd321eabf8729c9a42a96abafef99f8713feb4b2141f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4000755e(uint param_1,byte *param_2,uint param_3)

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
      param_1 = param_1 >> 8 ^ *(uint *)(&DAT_ram_40092384 + ((*param_2 ^ param_1) & 0xff) * 4);
      if (param_3 == 0) break;
      param_2 = pbVar3;
      uVar4 = (uint)pbVar3 & 3;
    }
  }
  for (uVar4 = 0; param_3 >> 2 != uVar4; uVar4 = uVar4 + 1) {
    uVar2 = (param_1 ^ *(uint *)(pbVar3 + uVar4 * 4)) >> 8 ^
            *(uint *)(&DAT_ram_40092384 + ((param_1 ^ *(uint *)(pbVar3 + uVar4 * 4)) & 0xff) * 4);
    uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_ram_40092384 + (uVar2 & 0xff) * 4);
    uVar2 = *(uint *)(&DAT_ram_40092384 + (uVar2 & 0xff) * 4) ^ uVar2 >> 8;
    param_1 = *(uint *)(&DAT_ram_40092384 + (uVar2 & 0xff) * 4) ^ uVar2 >> 8;
  }
  pbVar3 = pbVar3 + (param_3 >> 2) * 4 + -4;
  if ((param_3 & 3) != 0) {
    pbVar5 = pbVar3 + (param_3 & 3);
    do {
      pbVar1 = pbVar3 + 4;
      pbVar3 = pbVar3 + 1;
      param_1 = param_1 >> 8 ^ *(uint *)(&DAT_ram_40092384 + ((*pbVar1 ^ param_1) & 0xff) * 4);
    } while (pbVar5 != pbVar3);
  }
  return ~param_1;
}


/* NanoCore 1.10, address 0x4000760c.
 * REA evidence: ev_d0363548c3b252aa955188bd9e4da064a90885b1695127cd3f8ac5cf2b8666ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000760c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((code *)**(undefined4 **)(param_1 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x14))();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4000761e.
 * REA evidence: ev_7a821a49ee4c67ea0d541905408601f88ef31d4ad658cc893edb8c78545458c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000761e(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40007630.
 * REA evidence: ev_5e444712d0a17dd7ba94ec79100a942d6792b01e40634e3bd8db49779d38c7a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007630(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0xc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40007642.
 * REA evidence: ev_9340ef9a650a15c10a27c4edd9db81fd4f21aa87c05f5bb694dcb739b43abc5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007642(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000764a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40007654.
 * REA evidence: ev_7c31bbbba777d986fb8c4a9ee5dd55eabb090499d19934eb67b28878563ea7d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007654(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x14);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000765c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40007666.
 * REA evidence: ev_e1ddc75521c45bd78b2bffc7965b62295559b9391d65ac43b3016f9dc6ed3355
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007666(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000766e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40007678.
 * REA evidence: ev_f2df239339ca3ca3940480c80deb799558ad5be2a9dbda4a20704f1d8f9e6f50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007678(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4000768a.
 * REA evidence: ev_52dff01e695572557c7aaf99f23aaaca5e5ba166594747d76ea234acfc66fe7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000768a(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x24);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40007692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4000769c.
 * REA evidence: ev_2968c14650581a5036a1533f7275bcdcebc38eca3a878dac0f076e82bc651397
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000769c(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x28),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x400076a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400076a8.
 * REA evidence: ev_d177e301a7a1fef10c3b82361759c92a82a6e5ced177f2fe1c06eb155ca926a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400076a8(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x14) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x400076b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400076b4.
 * REA evidence: ev_bebd739bc1f0366243f3805ca5d877077c9a9e5c030d813236e7d997a4f49101
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400076b4(int param_1,int param_2)

{
  fence();
  custom0();
  param_2 = param_2 + param_1;
  do {
    custom0();
    param_1 = param_1 + 0x20;
  } while (0 < param_2 - param_1);
  fence();
  custom0();
  return;
}


/* NanoCore 1.10, address 0x400076d8.
 * REA evidence: ev_b721be38c5923391e93edf51fdd2ab63c7e17beb39647818b31ed1c16b617611
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400076d8(void)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = _DAT_ram_3004d4f4;
  uVar2 = (ulonglong)DAT_ram_40092818;
  *(undefined4 *)(_DAT_ram_3004d4f4 + 0x14) = 0;
  *(ulonglong *)(iVar1 + 8) = uVar2;
  *(ulonglong *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  return;
}


/* NanoCore 1.10, address 0x400076fa.
 * REA evidence: ev_46e65f2f8f12a6e6e6712758c1a36090e3c5605198a1d81607e663f051ac79d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_400076fa(ulonglong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = ABS((float)param_1);
  if (DAT_ram_40092820 < fVar3) {
    fVar1 = DAT_ram_40092818;
    if (0.0 <= (float)param_1) {
      fVar1 = DAT_ram_4009281c;
    }
    param_1 = (ulonglong)(uint)fVar1;
    if (fVar3 < DAT_ram_40092824) {
      fVar3 = (fVar3 - DAT_ram_40092820) / DAT_ram_40092828;
      fVar4 = fVar3 * fVar3;
      fVar2 = fVar3 * fVar4;
      fVar3 = ((fVar2 * (float)PTR_firmware_entry_ram_40092830 - fVar4 * DAT_ram_4009282c) +
              DAT_ram_4009281c) * DAT_ram_40092820 +
              (-(fVar4 * (float)PTR_firmware_entry_ram_40092830) + fVar2 + fVar3) * DAT_ram_40092828
              + fVar2 * DAT_ram_40092834 + fVar4 * DAT_ram_4009282c;
      fVar4 = DAT_ram_4009281c;
      if ((fVar3 <= DAT_ram_4009281c) && (fVar4 = fVar3, fVar3 < 0.0)) {
        fVar4 = 0.0;
      }
      param_1 = (ulonglong)(uint)(fVar1 * fVar4);
    }
  }
  return param_1;
}


/* NanoCore 1.10, address 0x400077b2.
 * REA evidence: ev_53fabeeb162e89ec626286113fafd8b3d138f23cb268295fae84e6f2fe006965
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400077b2(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(_DAT_ram_3004b474 + 0x18);
  fence();
  uVar1 = (uVar2 & 0xffffff) >> 0x10;
  if (uVar2 < DAT_ram_30046584) {
    DAT_ram_30046584 = uVar2;
  }
  if (DAT_ram_30046588 < uVar2) {
    DAT_ram_30046588 = uVar2;
  }
  if (0x80 < uVar1) {
    uVar1 = 0x80;
  }
  return 0x80 - uVar1;
}


/* NanoCore 1.10, address 0x400077f4.
 * REA evidence: ev_e9f2f11803874464f980be552df569b6ff42057aa223ec8427a3107b95e1dd80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400077f4(void)

{
  fence();
  if (*(int *)(_DAT_ram_3004b474 + 0xc) != 0) {
    fence();
    *(int *)(_DAT_ram_3004b474 + 0xc) = *(int *)(_DAT_ram_3004b474 + 0xc);
  }
  return;
}


/* NanoCore 1.10, address 0x40007814.
 * REA evidence: ev_3f69d37025ae541f04f8dd19198389e4db357b70f70605c41a5ac473abd1fbd8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40007814(void)

{
  uint uVar1;
  uint uVar2;
  
  if (((DAT_ram_3004b460 == '\0') && (DAT_ram_3004b461 == '\0')) && (DAT_ram_3004da60 == '\0')) {
    uVar2 = 0x20;
    uVar1 = DAT_ram_30046514;
    if (DAT_ram_30046514 < 0x20) goto LAB_ram_40007852;
  }
  else {
    uVar1 = 0x20;
  }
  uVar2 = uVar1;
  if (0x200 < uVar2) {
    uVar2 = 0x200;
  }
LAB_ram_40007852:
  return uVar2 & 0xfffffffe;
}


/* NanoCore 1.10, address 0x4000785c.
 * REA evidence: ev_3e033326b2e6896354a9e98e250f8a8151d881c74b69601ed1058cdc7b795223
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000785c(void)

{
  _DAT_ram_30049ebc = _DAT_ram_30049ed8;
  _DAT_ram_30049ec0 = 0;
  _DAT_ram_30049ec4 = 0;
  return;
}


/* NanoCore 1.10, address 0x4000787e.
 * REA evidence: ev_bcd650c31eb9386790cd82c2756a84a93210139a03742dcc3e29a27c74a982ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000787e(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004d5cc = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x4000789c.
 * REA evidence: ev_658596adf735cd76fba99da3deb039d733308695236554d4fc569fdf48cf53ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000789c(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30049efd = param_1 != 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x400078be.
 * REA evidence: ev_512c3c21c36855a34ac05a9797db88d0dd53fc8cb5204f949399c91588c6f91c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400078be(float param_1,int param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009281c < param_1) {
    param_1 = DAT_ram_4009281c;
  }
  FUN_ram_400002f4();
  *(undefined4 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  *(float *)(param_2 + 0x84) = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40007906.
 * REA evidence: ev_4bcda97046ab90079c25596fdd563ecaae3fa0e56b8b97ff57dec5a995717dd8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40007906(float param_1,uint param_2)

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
  else if (DAT_ram_4009281c < param_1) {
    param_1 = DAT_ram_4009281c;
  }
  uVar4 = _DAT_ram_3004b3d0;
  if (_DAT_ram_3004b3d0 == 0) {
    uVar4 = 0xac44;
  }
  uVar5 = FUN_ram_400002f4();
  iVar3 = _DAT_ram_3004d4f4;
  uVar7 = *(ulonglong *)(_DAT_ram_3004d4f4 + 0x24);
  if ((float)uVar7 < 0.0) {
    uVar7 = 0;
  }
  else if (DAT_ram_4009281c < (float)uVar7) {
    uVar7 = (ulonglong)(uint)DAT_ram_4009281c;
  }
  fVar1 = param_1 - (float)uVar7;
  if (ABS(fVar1) < DAT_ram_40092838) {
    *(ulonglong *)(_DAT_ram_3004d4f4 + 0x24) = CONCAT44(unaff_fs1,param_1);
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
  }
  else {
    lVar2 = (ulonglong)uVar4 * (ulonglong)param_2 + 999;
    iVar6 = FUN_ram_40003bac((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
    *(ulonglong *)(iVar3 + 0x24) = uVar7;
    *(int *)(iVar3 + 0x2c) = iVar6;
    *(ulonglong *)(iVar3 + 0x28) = (ulonglong)(uint)(fVar1 / (float)iVar6);
  }
  FUN_ram_400002fa(uVar5);
  return;
}


/* NanoCore 1.10, address 0x400079da.
 * REA evidence: ev_fa70e94a48345479e4e2c356822481b7f86313ad95d526043fbe66ca5fbc4c7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400079da(float param_1)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009281c < param_1) {
    param_1 = DAT_ram_4009281c;
  }
  FUN_ram_400002f4();
  iVar1 = _DAT_ram_3004d4f4;
  *(undefined4 *)(_DAT_ram_3004d4f4 + 0x28) = 0;
  *(ulonglong *)(iVar1 + 0x24) = CONCAT44(uStack_10,param_1);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40007a22.
 * REA evidence: ev_58198a1b4594dc28980d36edd5da96a5b8c103c87e793e35a36920e2e992b25d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a22(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004b462 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40007a40.
 * REA evidence: ev_725821df5b1fcd4c654cace92a6d42ee4b117662b1b4aff7592eb4e9fb2733f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a40(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30049ef0 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40007a5e.
 * REA evidence: ev_79f11d4eaeec680009a7b577da7968c00c2461dd9f6a788351b604b83d24a913
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a5e(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004d51c = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40007a7c.
 * REA evidence: ev_42fa5b79db72b8c9723ccd15b4a443f915988926abdc5f151a837fa954e86952
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a7c(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004d525 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40007a9a.
 * REA evidence: ev_d4877bcab4047efc11e9eb5f6abdde8000d07b1e95a92103d95b50c32bea14cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007a9a(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004b451 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40007ab8.
 * REA evidence: ev_7b6076f2fc09c56f6815bbd5e6608eb90a4887f7ebb2fe6ed6720e07d9b5b0d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007ab8(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004b458 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40007ad6.
 * REA evidence: ev_ffd4402f2ce6a5346b91f6cf18cfb6e62834ff771a0bbcd46cc1314d97a9d621
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007ad6(undefined1 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004b46d = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40007af4.
 * REA evidence: ev_54414fe46eca9e7ec7889d8326e73b1a58c38a76a286d8ca3caecc7a128a11d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40007af4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = iVar2 + param_1 * 0x48;
    bVar1 = false;
    if (*(int *)(iVar2 + 0xc) == param_2) {
      bVar1 = *(char *)(iVar2 + 0x11) != '\0';
    }
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x40007b34.
 * REA evidence: ev_1b2de8078f92ac942fb1803f1e8bcbdb2be9e54e064c392ab8ee134a49f5bd51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40007b34(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  uVar3 = 0xffffffff;
  if ((iVar1 != 0) && (uVar3 = 0xffffffff, iVar2 != 0)) {
    iVar5 = *(int *)(iVar1 + param_1 * 0x48 + 0xc);
    FUN_ram_4000305c(iVar2,iVar1,0x2dc);
    iVar2 = iVar2 + param_1 * 0x48;
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
    FUN_ram_4005eaba(0x3004abe8);
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40007be6.
 * REA evidence: ev_d268d2df83cc7a88ebf67e981eb77388b6e720969510fc07ba376bb50ad450d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007be6(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 auStack_2c [2];
  float fStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_ram_400849d8();
  if (iVar1 != 0) {
    FUN_ram_4000305c(auStack_2c,iVar1,0x1c);
    if (DAT_ram_4009283c < fStack_1c) {
      if (fStack_1c < DAT_ram_40092840) {
        fStack_1c = DAT_ram_4009281c;
      }
    }
    FUN_ram_40084996(param_1,auStack_2c);
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = auStack_2c[0];
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = CONCAT44(uStack_18,fStack_1c);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40007c4e.
 * REA evidence: ev_17b76460344216ca99b65e71102bddcc95d61990852693e81cc169345ac2545a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007c4e(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [16];
  ushort uStack_14;
  
  FUN_ram_40088f60(auStack_24);
  if ((uStack_14 < 0x1e) && (iVar2 = FUN_ram_4008dbbc(uStack_14 & 0xff,0x3004d584), iVar2 == 0)) {
LAB_ram_40007c7a:
    FUN_ram_40007be6(0x3004d584,0,0);
    uVar3 = 0;
  }
  else {
    uVar1 = 0;
    do {
      iVar2 = FUN_ram_4008dbbc(uVar1,0x3004d584);
      if (iVar2 == 0) {
        if (uStack_14 != uVar1) {
          FUN_ram_40088880(uVar1);
        }
        goto LAB_ram_40007c7a;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 != 0x1e);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40007ccc.
 * REA evidence: ev_c7a23aaece14e021921bd54c3e08e8733abdb961836d9411e4d08718b42063f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007ccc(void)

{
  if (DAT_ram_30049eb4 != '\0') {
    FUN_ram_40004ac8(0x30049e88);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40007ce4.
 * REA evidence: ev_d870c0b6ec3d31c33afb3b9acc8859e4f9cfcfad507c957ef711e9e8f4d30a59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40007ce4(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006472();
  return iVar1 != 0 && _DAT_ram_3004a3e0 == iVar1;
}


/* NanoCore 1.10, address 0x40007d06.
 * REA evidence: ev_e63b4c182dad6a44deef971f24ee16598106747ce5660c5c4aa7673b8d5cd4e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40007d06(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_ram_40004362(300);
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    iVar2 = FUN_ram_400042fa();
    do {
      if (*param_1 == param_2) {
        return 0;
      }
      iVar3 = FUN_ram_400042fa();
    } while (((uint)(iVar3 - iVar2) < uVar1) &&
            ((iVar3 = FUN_ram_40004832(0x3004b428,(iVar2 + uVar1) - iVar3), iVar3 == 0 ||
             (*param_1 == param_2))));
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x40007d82.
 * REA evidence: ev_7bcae35d04bc3b3e41cb76edf6e437738060086fd64caebd706de5a8a20632be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40007d82(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_ram_3004b424 != '\0') {
    iVar1 = FUN_ram_40006472();
    if ((_DAT_ram_3004b3f0 != 0) && (_DAT_ram_3004b420 == iVar1)) {
      _DAT_ram_3004b3f0 = _DAT_ram_3004b3f0 + 1;
      return 0;
    }
    iVar2 = FUN_ram_400049d6(0x3004b3f4,0xffffffff);
    if (iVar2 == 0) {
      _DAT_ram_3004b3f0 = 1;
      _DAT_ram_3004b420 = iVar1;
      uVar3 = FUN_ram_400002f4();
      uVar4 = FUN_ram_400224a8(&DAT_ram_3004b3d4);
      if ((DAT_ram_3004a3e4 == '\0') || (DAT_ram_3004d524 != '\0')) {
        FUN_ram_400224d0(&DAT_ram_3004b3d4,uVar4);
      }
      FUN_ram_400002fa(uVar3);
      iVar1 = FUN_ram_40007d06(0x3004b3d8,uVar4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = FUN_ram_400002f4();
      FUN_ram_400224c0(&DAT_ram_3004b3d4,uVar4);
      if ((DAT_ram_3004a3e4 == '\0') || (DAT_ram_3004d524 != '\0')) {
        FUN_ram_400224ea(&DAT_ram_3004b3d4);
      }
      FUN_ram_400002fa(uVar3);
      _DAT_ram_3004b3f0 = 0;
      _DAT_ram_3004b420 = 0;
      FUN_ram_40004ac8(0x3004b3f4);
      return iVar1;
    }
  }
  return -1;
}


/* NanoCore 1.10, address 0x40007e94.
 * REA evidence: ev_cd40f5e4bfe6364ca11f7029db30e4ec0f77bd26f3ce0abb9e3a99ff47d0b538
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40007e94(void)

{
  uint uVar1;
  int iVar2;
  uint auStack_14 [2];
  
  auStack_14[0] = 0;
  iVar2 = FUN_ram_4008e11c(0x3004b4f4,0x1000,auStack_14);
  if ((((iVar2 == 0) && (auStack_14[0] != 0)) && ((auStack_14[0] & 3) == 0)) &&
     (uVar1 = auStack_14[0] >> 2, uVar1 - 1 < 0x400)) {
    FUN_ram_4000305c(0x3004c4f4,0x3004b4f4);
    FUN_ram_400738bc(_DAT_ram_3004b4c0,0x3004c4f4,uVar1);
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40007f06.
 * REA evidence: ev_bdf7ef9424aa6895729d5829b60ca0d15ed4a415088fe1832fa637c3716fd1f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40007f06(undefined1 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_3004b4bc = param_1;
  if (_DAT_ram_3004b4c0 != 0) {
    FUN_ram_40073bf2();
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.10, address 0x40007f38.
 * REA evidence: ev_2bce5ca35256a27bb19ff7df9c060202da2d744009f1a771d1678ad169125233
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40007f38(undefined1 param_1,undefined1 param_2,undefined1 param_3,int param_4,
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
    cVar1 = FUN_ram_4003fd10(_DAT_ram_30049dc8,&uStack_2c,1);
    if (cVar1 == '\x01') {
      return 0;
    }
    param_4 = param_4 + -1;
    if (param_4 == 0) break;
    FUN_ram_400065d4(param_5);
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40007fa4.
 * REA evidence: ev_69dc742575c7edf360755c8838222aad130523d3490a8a0587a0dc46e00aed12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40007fa4(int param_1,int param_2,uint *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  iVar5 = 0;
  uVar1 = 0;
  uVar2 = 0;
  while( true ) {
    uVar4 = (uint)(uVar1 >> 0x20);
    if (iVar5 == param_2) break;
    iVar3 = *(int *)(param_1 + iVar5 * 4);
    iVar5 = iVar5 + 1;
    uVar6 = iVar3 >> 8;
    uVar4 = iVar3 >> 0x1f;
    uVar4 = (uVar4 ^ uVar6) - uVar4;
    if (uVar2 < uVar4) {
      uVar2 = uVar4;
    }
    uVar1 = (longlong)(int)uVar6 * (longlong)(int)uVar6 + uVar1;
  }
  *param_3 = uVar2;
  if (iVar5 == 0x80) {
    uVar7 = CONCAT44(uVar4 >> 7,(int)(uVar1 >> 7));
  }
  else {
    uVar7 = FUN_ram_40003bac((int)uVar1,uVar4,iVar5,0);
  }
  *param_4 = uVar7;
  return;
}


