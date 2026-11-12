/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4004f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4004f4e6.
 * REA evidence: ev_7a1627e1abff75cea2226f5ebad2a6a8124bd1e5056a0f31e888ddb88d49152d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_4004f4e6(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_38;
  undefined1 uStack_34;
  undefined1 auStack_30 [12];
  undefined4 *puStack_24;
  
  thunk_FUN_ram_40004f92(param_2,0,0xc);
  if (param_1 != 0) {
    iVar3 = FUN_ram_4004e36e(param_1);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        return (undefined4 *)0x0;
      }
    }
    else if ((iVar3 == 1) &&
            (iStack_38 = param_1, uStack_34 = (char)iVar3,
            iVar5 = FUN_ram_4004ceaa(_DAT_ram_30080dcc,&iStack_38,0), iVar5 != 0)) {
      iVar3 = FUN_ram_4004d030();
      FUN_ram_4000303c(param_2,iVar3 + 8,0xc);
      puVar4 = *(undefined4 **)(iVar3 + 0x14);
LAB_ram_4004f5f2:
      FUN_ram_4004cee6(_DAT_ram_30080dcc,iVar5,0);
      return puVar4;
    }
    for (puVar4 = (undefined4 *)FUN_ram_4004b610(0x30080dbc); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)FUN_ram_4004b61c(0x30080dbc,puVar4)) {
      if ((((code *)*puVar4 != (code *)0x0) && (puVar4[1] != 0)) &&
         (iVar5 = (*(code *)*puVar4)(puVar4,param_1,param_2), iVar5 == 1)) {
        if (*(short *)(param_2 + 8) == 0) {
          uVar1 = *(ushort *)(param_2 + 4);
          if (*(char *)(param_2 + 1) == '\x14') {
            sVar2 = uVar1 << 1;
          }
          else {
            iVar5 = FUN_ram_4004adf8();
            sVar2 = (short)((uint)uVar1 * iVar5 + 7 >> 3);
          }
          *(short *)(param_2 + 8) = sVar2;
        }
        if (iVar3 != 1) {
          return puVar4;
        }
        uStack_34 = (char)iVar3;
        iStack_38 = FUN_ram_4005aa68(param_1);
        puStack_24 = puVar4;
        FUN_ram_4000303c(auStack_30,param_2,0xc);
        iVar5 = FUN_ram_4004cf36(_DAT_ram_30080dcc,&iStack_38,0);
        if (iVar5 == 0) {
          FUN_ram_4005a988(iStack_38);
          return (undefined4 *)0x0;
        }
        goto LAB_ram_4004f5f2;
      }
    }
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.12, address 0x4004f636.
 * REA evidence: ev_8205880050ccc0a39745c11bd43040f0c2090934676d8540e50d86e85e0b2aca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004f636(void)

{
  undefined1 auStack_40 [24];
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  FUN_ram_4004b436(0x30080dbc,0x18);
  puStack_28 = &LAB_ram_4004f486;
  puStack_20 = &LAB_ram_4004f4a6;
  uStack_24 = 0;
  FUN_ram_4000303c(auStack_40,&puStack_28,0xc);
  _DAT_ram_30080dc8 = FUN_ram_4004ce54(&PTR_FUN_ram_4004cd82_ram_4009e840,0x18,0x800000,auStack_40);
  puStack_1c = &LAB_ram_4004f616;
  puStack_14 = &LAB_ram_4004f438;
  uStack_18 = 0;
  FUN_ram_4000303c(auStack_40,&puStack_1c,0xc);
  _DAT_ram_30080dcc = FUN_ram_4004ce54(&PTR_FUN_ram_4004cd82_ram_4009e818,0x18,0x14,auStack_40);
  return;
}


/* NanoCore 1.12, address 0x4004f6c8.
 * REA evidence: ev_1d30ef5bffa6742ebd21e2b34d30110bd6f8abe692b398bf92181730179e2cfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004f6c8(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004f4e6();
  return iVar1 != 0;
}


/* NanoCore 1.12, address 0x4004f6da.
 * REA evidence: ev_6b8c316b76c4be44861b81cb145647f1ca2e96b364638c44ea3c269281bac526
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004f6da(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 uStack_30;
  
  thunk_FUN_ram_40004f92(param_1,0,0x3c);
  if (param_2 != 0) {
    param_1[2] = param_2;
    uVar1 = FUN_ram_4004e36e(param_2);
    *(undefined1 *)(param_1 + 3) = uVar1;
    iVar2 = _DAT_ram_30080dc8;
    param_1[0xc] = _DAT_ram_30080dc8;
    if ((param_3 == 0) || (*(char *)(param_3 + 2) == '\0')) {
      iStack_34 = param_1[2];
      uStack_30 = uVar1;
      iVar2 = FUN_ram_4004ceaa(iVar2,auStack_38,0);
      if (iVar2 != 0) {
        iVar3 = FUN_ram_4004d030();
        param_1[7] = *(int *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        param_1[0xd] = iVar2;
        *param_1 = iVar3;
        return 1;
      }
    }
    iVar2 = FUN_ram_4004f4e6(param_2,param_1 + 4);
    *param_1 = iVar2;
    if (iVar2 != 0) {
      if (param_3 == 0) {
        *(undefined1 *)((int)param_1 + 5) = 0;
        *(undefined2 *)((int)param_1 + 6) = 0;
      }
      else {
        FUN_ram_4000303c(param_1 + 1,param_3,4);
      }
      *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x4004f788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(iVar2 + 4))(iVar2,param_1);
      return uVar4;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004f794.
 * REA evidence: ev_6350ed03046afcd5e2ad356597055860602cfa29b2b546da94464acb0ef16849
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004f794(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004f7a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*param_1,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004f7a8.
 * REA evidence: ev_0b8c18cc3f35881e068681ddcd79a7a796a65f6ed15300bb35a50216e38078b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f7a8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(code **)(iVar1 + 0xc) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4004f7b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004f7b6.
 * REA evidence: ev_598fbd624e856ffb4ad920040ea0b82de8d122c1867c149545c8d32d2e215086
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004f7b6(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004b446(0x30080dbc);
  if (iVar1 != 0) {
    thunk_FUN_ram_40004f92(iVar1,0,0x18);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004f7de.
 * REA evidence: ev_acb14d1cc684c95d13804170ccfb5cadcdb2babe11c5f914dab61f3a179aa45e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f7de(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* NanoCore 1.12, address 0x4004f7e2.
 * REA evidence: ev_64f5d4ea666ce1e258e4aa3cf7a540e13486e948c3ae63d2892a2e9655194b61
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f7e2(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4004f7e6.
 * REA evidence: ev_4ad768b8604625ecf0dcabaa6ae345b1ab12e7b1416909f2b92e32f10aa76c9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f7e6(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4004f7ea.
 * REA evidence: ev_ce03d55ce7b01c2ff5e57b75bdd8eef62e00828bb0dd41c452c876b724852acc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f7ea(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4004f7ee.
 * REA evidence: ev_2dd154be46e0fb1f9fa830c11d57bb94f456d76e08f1d4fd6460b1e256306020
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f7ee(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4004f7f2.
 * REA evidence: ev_2bfd9cd1cd088054ce05ba7b06cccd6318926405fbe317dff97fd1885226ea77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4004f7f2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4004cf36(_DAT_ram_30080dc8,param_2,0);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4004d030();
    *(undefined4 *)(iVar2 + 0xc) = param_3;
    if (*(char *)(iVar2 + 8) == '\x01') {
      uVar3 = FUN_ram_4005aa68(*(undefined4 *)(iVar2 + 4));
      *(undefined4 *)(iVar2 + 4) = uVar3;
    }
    *(undefined4 *)(iVar2 + 0x14) = param_4;
    *(undefined4 *)(iVar2 + 0x10) = param_1;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004f84e.
 * REA evidence: ev_cc85537f9027b0d057848ac0b62e948e3f1c60cbbe90ac7b9e7c4874c1b02ad0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004f84e(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
LAB_ram_4004f85a:
    param_2 = 0;
  }
  else {
    if ((((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_2 + 1) != '\x14')) &&
        (uVar2 = FUN_ram_4004dace(*(undefined2 *)(param_2 + 4)), *(ushort *)(param_2 + 8) != uVar2))
       && (iVar1 = FUN_ram_4004df5c(param_2,uVar2), iVar1 != 1)) {
      iVar1 = FUN_ram_4004dbd6(*(undefined2 *)(param_2 + 4),*(undefined2 *)(param_2 + 6),
                               *(undefined1 *)(param_2 + 1),uVar2);
      if (iVar1 == 0) goto LAB_ram_4004f85a;
      FUN_ram_4004de58(iVar1,0,param_2,0);
      param_2 = iVar1;
    }
    if ((((*(char *)(param_1 + 5) != '\0') && (3 < (byte)(*(char *)(param_2 + 1) - 0xbU))) &&
        ((iVar1 = FUN_ram_4004ae16(), iVar1 != 0 && ((*(ushort *)(param_2 + 2) & 1) == 0)))) &&
       (((*(ushort *)(param_2 + 2) & 0x20) != 0 ||
        (param_2 = FUN_ram_4004dc7c(param_2), param_2 != 0)))) {
      FUN_ram_4004e068();
    }
  }
  return param_2;
}


/* NanoCore 1.12, address 0x4004f962.
 * REA evidence: ev_faa523daad36d722d998461b448bcefabf8aedb6087583d5082953539285859b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f962(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x1c;
  FUN_ram_4005a8ee(iVar1);
  *(undefined1 *)(param_1 + 0x24) = 1;
  while( true ) {
    while ((iVar3 = *(int *)(param_1 + 0x18), iVar3 == 0 && (*(char *)(param_1 + 0x25) == '\0'))) {
      FUN_ram_4005a914(iVar1);
    }
    if (*(char *)(param_1 + 0x25) != '\0') break;
    if (*(uint *)(iVar3 + 4) < 10) {
      uVar2 = *(undefined4 *)(iVar3 + 0x4c);
      switch(*(uint *)(iVar3 + 4)) {
      case 0:
        FUN_ram_400511c6(param_1,uVar2,iVar3 + 8);
        break;
      case 1:
        FUN_ram_4005001a(param_1,uVar2,iVar3 + 8);
        break;
      case 2:
        FUN_ram_400506d4(param_1,uVar2,iVar3 + 8);
        break;
      case 3:
        FUN_ram_40051d94(param_1,uVar2,iVar3 + 8);
        break;
      case 4:
        FUN_ram_40051c4a(param_1,uVar2,iVar3 + 8);
        break;
      case 5:
        FUN_ram_40051c64(param_1,uVar2,iVar3 + 8);
        break;
      case 6:
        FUN_ram_40051dac(param_1);
        break;
      case 7:
        FUN_ram_4004fc34(param_1,uVar2,iVar3 + 8);
        break;
      case 8:
        FUN_ram_400542ec(param_1);
        break;
      case 9:
        FUN_ram_400533de(param_1,uVar2,iVar3 + 8);
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 3;
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_ram_4004d616();
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_ram_4005a93e(iVar1);
  return;
}


/* NanoCore 1.12, address 0x4004fa40.
 * REA evidence: ev_e76fd19398807a20d88aafd98eadddc83fbc332288c8318a932cd0a0c7c9c8a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004fa40(int param_1)

{
  *(undefined1 *)(param_1 + 0x25) = 1;
  if (*(char *)(param_1 + 0x24) != '\0') {
    FUN_ram_4005a92a(param_1 + 0x1c);
  }
  FUN_ram_4005a88c(param_1 + 0x20);
  return;
}


/* NanoCore 1.12, address 0x4004fad0.
 * REA evidence: ev_52abd1957edc98f73ab69306c05a9ac4cc9d73442e900ca7c41c793d5fbd7b7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004fad0(void)

{
  int iVar1;
  
  FUN_ram_40052ca4();
  iVar1 = FUN_ram_4004d590(0x2c);
  *(undefined1 **)(iVar1 + 0xc) = &LAB_ram_4004fa6e;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_ram_4004f902;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(code **)(iVar1 + 0x14) = FUN_ram_4004fa40;
  FUN_ram_4005a84c(iVar1 + 0x20,0x14,FUN_ram_4004f962,0x8000,iVar1);
  return;
}


/* NanoCore 1.12, address 0x4004fb1c.
 * REA evidence: ev_c69e962c86d6f29bda862aa61514cf23a65d66d2662d4053317e29a54feda09c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004fb1c(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = FUN_ram_4004a4fe(&iStack_20,param_3,param_2);
  if (iVar1 != 0) {
    iVar1 = param_3[1];
    iVar2 = *param_3;
    param_4 = param_4 + (iStack_20 - *param_2);
    for (uVar4 = 0; uVar4 < (iStack_18 - iStack_20) + 1U; uVar4 = uVar4 + 1) {
      uVar3 = (uint)*(byte *)(param_1 + (iStack_20 - iVar2) + (iStack_1c - iVar1) * param_5 + uVar4)
              + (uint)*(byte *)(param_4 + uVar4);
      if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      *(char *)(param_4 + uVar4) = (char)uVar3;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4004fb94.
 * REA evidence: ev_ac4dfa1aeda0a8859f10d2897fa55250c7829fdce714a184ad0b04130a0e8e2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004fb94(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_3 >> 1;
  iVar1 = FUN_ram_4004b6b4((param_1 + 0x5a) * 0x10000 >> 0x10);
  iVar2 = FUN_ram_4004b6b4(param_1);
  uVar3 = ~param_3 & 1;
  iVar1 = (int)((param_2 - uVar4) * iVar1) >> 7;
  iVar2 = (int)((param_2 - uVar4) * iVar2) >> 7;
  if (iVar1 < 1) {
    iVar1 = iVar1 + 0x80 >> 8;
    *param_4 = iVar1 - uVar4;
    iVar1 = (iVar1 + uVar4) - uVar3;
  }
  else {
    iVar1 = iVar1 + -0x80 >> 8;
    *param_4 = (iVar1 - uVar4) + uVar3;
    iVar1 = iVar1 + uVar4;
  }
  param_4[2] = iVar1;
  if (iVar2 < 1) {
    iVar1 = iVar2 + 0x80 >> 8;
    param_4[1] = iVar1 - uVar4;
    iVar1 = (iVar1 + uVar4) - uVar3;
  }
  else {
    iVar1 = iVar2 + -0x80 >> 8;
    param_4[1] = uVar3 + (iVar1 - uVar4);
    iVar1 = iVar1 + uVar4;
  }
  param_4[3] = iVar1;
  return;
}


/* NanoCore 1.12, address 0x4004fc34.
 * REA evidence: ev_516b0bae981e44002f04632f4dffad00278f0ee191d8a8d542c8850b2e10ac23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004fe50) */

void FUN_ram_4004fc34(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puStack_238;
  undefined4 uStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  undefined1 *puStack_200;
  undefined1 *puStack_1fc;
  undefined1 *puStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int iStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined1 auStack_1d0 [4];
  int iStack_1cc;
  int iStack_1c4;
  undefined1 auStack_1c0 [4];
  int iStack_1bc;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined1 auStack_1a0 [36];
  undefined1 auStack_17c [36];
  undefined1 auStack_158 [36];
  undefined4 *puStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined1 uStack_128;
  undefined4 *puStack_124;
  undefined1 uStack_120;
  undefined1 auStack_11f [3];
  undefined4 uStack_11c;
  char cStack_118;
  undefined4 *puStack_114;
  undefined1 auStack_108 [28];
  int iStack_ec;
  undefined1 auStack_cc [28];
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  uint uStack_a8;
  undefined1 uStack_a4;
  byte bStack_a3;
  
  if (*(byte *)(param_2 + 0x3c) < 3) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x20);
  if ((uVar2 != 0) && (*(int *)(param_2 + 0x24) != *(int *)(param_2 + 0x28))) {
    uVar1 = *(ushort *)(param_2 + 0x34);
    FUN_ram_4000303c(&iStack_230,param_3,0x10);
    iVar3 = FUN_ram_4004a4fe(&iStack_220,&iStack_230,*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      if ((int)(uint)uVar1 <= (int)uVar2) {
        uVar2 = (uint)uVar1;
      }
      iVar10 = *(int *)(param_2 + 0x24);
      iVar9 = *(int *)(param_2 + 0x28);
      if ((*(int *)(param_2 + 0x38) == 0) &&
         ((iVar10 + 0x168 == iVar9 || (iVar9 + 0x168 == iVar10)))) {
        FUN_ram_4004ef58(auStack_cc);
        uStack_a4 = *(undefined1 *)(param_2 + 0x3c);
        uStack_ac = *(undefined2 *)(param_2 + 0x1c);
        uStack_aa = *(undefined1 *)(param_2 + 0x1e);
        uStack_b0 = 0x7fff;
        bStack_a3 = bStack_a3 & 0xe0 | 0xf;
        uStack_a8 = uVar2;
        FUN_ram_4005001a(param_1,auStack_cc,&iStack_230);
      }
      else {
        iStack_204 = *(int *)(param_2 + 0x20);
        iStack_20c = iStack_22c + iStack_204;
        iStack_208 = iStack_228 - iStack_204;
        iStack_210 = iStack_230 + iStack_204;
        iStack_204 = iStack_224 - iStack_204;
        for (; 0x167 < iVar10; iVar10 = iVar10 + -0x168) {
        }
        for (; 0x167 < iVar9; iVar9 = iVar9 + -0x168) {
        }
        puStack_200 = (undefined1 *)0x0;
        puStack_1fc = (undefined1 *)0x0;
        puStack_1f8 = (undefined1 *)0x0;
        uStack_1f4 = 0;
        FUN_ram_40052f26(auStack_cc,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),
                         iVar10,iVar9);
        puStack_200 = auStack_cc;
        FUN_ram_40052fc0(auStack_1a0,&iStack_230,0x7fff,0);
        puStack_1fc = auStack_1a0;
        if ((iStack_208 - iStack_210 < 0) || (iStack_204 - iStack_20c < 0)) {
          iVar3 = 0;
        }
        else {
          FUN_ram_40052fc0(auStack_17c,&iStack_210,0x7fff,1);
          puStack_1f8 = auStack_17c;
        }
        iVar8 = (iStack_218 - iStack_220) + 1;
        uVar4 = FUN_ram_4005a952(iVar8);
        FUN_ram_4000303c(&uStack_1f0,&iStack_220,0x10);
        memset(&uStack_130,0,0x28);
        uStack_120 = *(undefined1 *)(param_2 + 0x3c);
        puStack_134 = &uStack_1f0;
        uStack_11c = uVar4;
        puStack_114 = puStack_134;
        if (*(int *)(param_2 + 0x38) == 0) {
          FUN_ram_4000303c(auStack_11f,param_2 + 0x1c,3);
        }
        else {
          FUN_ram_4004f6da(auStack_108,*(int *)(param_2 + 0x38),0);
          iStack_1d8 = *(ushort *)(iStack_ec + 4) - 1;
          uVar6 = (uint)(*(ushort *)(iStack_ec + 4) >> 1);
          iStack_1d4 = *(ushort *)(iStack_ec + 6) - 1;
          uStack_1e0 = 0;
          uStack_1dc = 0;
          FUN_ram_4004a4e4(&uStack_1e0,*(int *)(param_2 + 0x2c) - uVar6,
                           *(int *)(param_2 + 0x30) - uVar6);
          uStack_130 = *(undefined4 *)(iStack_ec + 0x10);
          uStack_128 = *(undefined1 *)(iStack_ec + 1);
          uStack_12c = (uint)*(ushort *)(iStack_ec + 8);
          puStack_124 = &uStack_1e0;
        }
        iVar11 = 0;
        if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
          iVar11 = FUN_ram_4005a952(uVar2 * uVar2);
          thunk_FUN_ram_40004f92(iVar11,0xff,uVar2 * uVar2);
          iStack_1a8 = uVar2 - 1;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          iStack_1a4 = iStack_1a8;
          FUN_ram_40052fc0(auStack_158,&uStack_1b0,(int)uVar2 / 2,0);
          uStack_234 = 0;
          iVar7 = iVar11;
          puStack_238 = auStack_158;
          for (iVar12 = 0; iVar12 < (int)uVar2; iVar12 = iVar12 + 1) {
            iVar5 = FUN_ram_40052cb0(&puStack_238,iVar7,0,iVar12,uVar2);
            if (iVar5 == 0) {
              thunk_FUN_ram_40004f92(iVar7,0,uVar2);
            }
            iVar7 = iVar7 + uVar2;
          }
          FUN_ram_4004fb94((int)(short)iVar10,*(undefined2 *)(param_2 + 0x34),uVar2 & 0xff,
                           auStack_1d0);
          FUN_ram_4004a4e4(auStack_1d0,*(undefined4 *)(param_2 + 0x2c),
                           *(undefined4 *)(param_2 + 0x30));
          FUN_ram_4004fb94((int)(short)iVar9,*(undefined2 *)(param_2 + 0x34),uVar2 & 0xff,
                           auStack_1c0);
          FUN_ram_4004a4e4(auStack_1c0,*(undefined4 *)(param_2 + 0x2c),
                           *(undefined4 *)(param_2 + 0x30));
        }
        iStack_1e4 = iStack_1ec;
        for (iVar9 = 0; iVar9 < (iStack_214 - iStack_21c) + 1; iVar9 = iVar9 + 1) {
          thunk_FUN_ram_40004f92(uVar4,0xff,iVar8);
          iVar10 = FUN_ram_40052cb0(&puStack_200,uVar4,uStack_1f0,iStack_1ec,iVar8);
          cStack_118 = (char)iVar10;
          if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
            if ((iStack_1cc <= iStack_1ec) && (iStack_1ec <= iStack_1c4)) {
              if (iVar10 == 0) {
                thunk_FUN_ram_40004f92(uVar4,0,iVar8);
                cStack_118 = '\x02';
              }
              FUN_ram_4004fb1c(iVar11,&uStack_1f0,auStack_1d0,uVar4,uVar2);
            }
            if ((iStack_1bc <= iStack_1ec) && (iStack_1ec <= iStack_1b4)) {
              if (cStack_118 == '\0') {
                thunk_FUN_ram_40004f92(uVar4,0,iVar8);
                cStack_118 = '\x02';
              }
              FUN_ram_4004fb1c(iVar11,&uStack_1f0,auStack_1c0,uVar4,uVar2);
            }
          }
          FUN_ram_4005464e(param_1,&puStack_134);
          iStack_1ec = iStack_1ec + 1;
          iStack_1e4 = iStack_1e4 + 1;
        }
        FUN_ram_40052d04(auStack_cc);
        FUN_ram_40052d04(auStack_1a0);
        if (iVar3 != 0) {
          FUN_ram_40052d04(auStack_17c);
        }
        FUN_ram_4005a988(uVar4);
        if (*(int *)(param_2 + 0x38) != 0) {
          FUN_ram_4004f7a8(auStack_108);
        }
        if (iVar11 != 0) {
          FUN_ram_4005a988(iVar11);
        }
      }
    }
  }
  return;
}


