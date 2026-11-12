/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4004f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4004f408.
 * REA evidence: ev_4ce6aec94a7d915cb36350239fd4c89a3e45bd47e45d0977af0d68b46bbbaaed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_4004f408(int param_1,int param_2)

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
  
  thunk_FUN_ram_4000504c(param_2,0,0xc);
  if (param_1 != 0) {
    iVar3 = FUN_ram_4004e290(param_1);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        return (undefined4 *)0x0;
      }
    }
    else if ((iVar3 == 1) &&
            (iStack_38 = param_1, uStack_34 = (char)iVar3,
            iVar5 = FUN_ram_4004cdb2(_DAT_ram_30080d4c,&iStack_38,0), iVar5 != 0)) {
      iVar3 = FUN_ram_4004cf38();
      FUN_ram_4000304c(param_2,iVar3 + 8,0xc);
      puVar4 = *(undefined4 **)(iVar3 + 0x14);
LAB_ram_4004f514:
      FUN_ram_4004cdee(_DAT_ram_30080d4c,iVar5,0);
      return puVar4;
    }
    for (puVar4 = (undefined4 *)FUN_ram_4004b518(0x30080d3c); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)FUN_ram_4004b524(0x30080d3c,puVar4)) {
      if ((((code *)*puVar4 != (code *)0x0) && (puVar4[1] != 0)) &&
         (iVar5 = (*(code *)*puVar4)(puVar4,param_1,param_2), iVar5 == 1)) {
        if (*(short *)(param_2 + 8) == 0) {
          uVar1 = *(ushort *)(param_2 + 4);
          if (*(char *)(param_2 + 1) == '\x14') {
            sVar2 = uVar1 << 1;
          }
          else {
            iVar5 = FUN_ram_4004ad00();
            sVar2 = (short)((uint)uVar1 * iVar5 + 7 >> 3);
          }
          *(short *)(param_2 + 8) = sVar2;
        }
        if (iVar3 != 1) {
          return puVar4;
        }
        uStack_34 = (char)iVar3;
        iStack_38 = FUN_ram_4005ac36(param_1);
        puStack_24 = puVar4;
        FUN_ram_4000304c(auStack_30,param_2,0xc);
        iVar5 = FUN_ram_4004ce3e(_DAT_ram_30080d4c,&iStack_38,0);
        if (iVar5 == 0) {
          FUN_ram_4005ab56(iStack_38);
          return (undefined4 *)0x0;
        }
        goto LAB_ram_4004f514;
      }
    }
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.11, address 0x4004f558.
 * REA evidence: ev_f4581716e2f03300f8a1bae8439ef5106351afed9bea6aef5dd49f90d4886cca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004f558(void)

{
  undefined1 auStack_40 [24];
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  FUN_ram_4004b33e(0x30080d3c,0x18);
  puStack_28 = &LAB_ram_4004f3a8;
  puStack_20 = &LAB_ram_4004f3c8;
  uStack_24 = 0;
  FUN_ram_4000304c(auStack_40,&puStack_28,0xc);
  _DAT_ram_30080d48 = FUN_ram_4004cd5c(&PTR_FUN_ram_4004cc8a_ram_40099760,0x18,0x800000,auStack_40);
  puStack_1c = &LAB_ram_4004f538;
  puStack_14 = &LAB_ram_4004f35a;
  uStack_18 = 0;
  FUN_ram_4000304c(auStack_40,&puStack_1c,0xc);
  _DAT_ram_30080d4c = FUN_ram_4004cd5c(&PTR_FUN_ram_4004cc8a_ram_40099738,0x18,0x14,auStack_40);
  return;
}


/* NanoCore 1.11, address 0x4004f5ea.
 * REA evidence: ev_b994c8a88bdd648544b3a513052f52ddf265ee5be1e9095c8b54b63b21aad62c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004f5ea(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004f408();
  return iVar1 != 0;
}


/* NanoCore 1.11, address 0x4004f5fc.
 * REA evidence: ev_f74156ac86959cf10111e075f33705b606c7350b8dc6f35d4445eedfe6e42357
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004f5fc(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 uStack_30;
  
  thunk_FUN_ram_4000504c(param_1,0,0x3c);
  if (param_2 != 0) {
    param_1[2] = param_2;
    uVar1 = FUN_ram_4004e290(param_2);
    *(undefined1 *)(param_1 + 3) = uVar1;
    iVar2 = _DAT_ram_30080d48;
    param_1[0xc] = _DAT_ram_30080d48;
    if ((param_3 == 0) || (*(char *)(param_3 + 2) == '\0')) {
      iStack_34 = param_1[2];
      uStack_30 = uVar1;
      iVar2 = FUN_ram_4004cdb2(iVar2,auStack_38,0);
      if (iVar2 != 0) {
        iVar3 = FUN_ram_4004cf38();
        param_1[7] = *(int *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        param_1[0xd] = iVar2;
        *param_1 = iVar3;
        return 1;
      }
    }
    iVar2 = FUN_ram_4004f408(param_2,param_1 + 4);
    *param_1 = iVar2;
    if (iVar2 != 0) {
      if (param_3 == 0) {
        *(undefined1 *)((int)param_1 + 5) = 0;
        *(undefined2 *)((int)param_1 + 6) = 0;
      }
      else {
        FUN_ram_4000304c(param_1 + 1,param_3,4);
      }
      *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x4004f6aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(iVar2 + 4))(iVar2,param_1);
      return uVar4;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004f6b6.
 * REA evidence: ev_3b35390e239ce66205e070a650ca61a8a532e4b4e8492ca499fca9e4d97cdcd0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004f6b6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004f6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*param_1,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004f6ca.
 * REA evidence: ev_9c753cf9779bff2dca93de807e5e376861aa623427974e6701476d0bc77a6dec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f6ca(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(code **)(iVar1 + 0xc) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4004f6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4004f6d8.
 * REA evidence: ev_8ba45269d7d2818fa02ad07547d5c402698c75c8469d1d6418f75a765c21da50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004f6d8(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004b34e(0x30080d3c);
  if (iVar1 != 0) {
    thunk_FUN_ram_4000504c(iVar1,0,0x18);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004f700.
 * REA evidence: ev_7066ed27613b8148d822f7c913716f4aed2176f66ab22264509cbfaf31bb57d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f700(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* NanoCore 1.11, address 0x4004f704.
 * REA evidence: ev_c1da4c834e94e29bd496dd7560330f393a127d10229f591e38ff04b5375808b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f704(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4004f708.
 * REA evidence: ev_4feafac2f6b59016b5f8a5da3f4405d404e28fadf34204ad1cd9afcb4dc84da0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f708(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4004f70c.
 * REA evidence: ev_65c540267d1708822626bf6efa207573df5ee0304692af02bdb0faad652736de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f70c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4004f710.
 * REA evidence: ev_9313f66f6b6ec8efe8be39b89935b23c25b0d73b504bef991689a0fdf1281508
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f710(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4004f714.
 * REA evidence: ev_48cde318fecb49c0dd3094e6dfa44ec5e38fe7811731e36cd6d582603619393e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4004f714(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4004ce3e(_DAT_ram_30080d48,param_2,0);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4004cf38();
    *(undefined4 *)(iVar2 + 0xc) = param_3;
    if (*(char *)(iVar2 + 8) == '\x01') {
      uVar3 = FUN_ram_4005ac36(*(undefined4 *)(iVar2 + 4));
      *(undefined4 *)(iVar2 + 4) = uVar3;
    }
    *(undefined4 *)(iVar2 + 0x14) = param_4;
    *(undefined4 *)(iVar2 + 0x10) = param_1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004f770.
 * REA evidence: ev_ccf6bdeb1acca3fd7af963f0520b307c854bff01e6c395c708a71ee71cf9b107
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004f770(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
LAB_ram_4004f77c:
    param_2 = 0;
  }
  else {
    if ((((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_2 + 1) != '\x14')) &&
        (uVar2 = FUN_ram_4004d9f0(*(undefined2 *)(param_2 + 4)), *(ushort *)(param_2 + 8) != uVar2))
       && (iVar1 = FUN_ram_4004de7e(param_2,uVar2), iVar1 != 1)) {
      iVar1 = FUN_ram_4004daf8(*(undefined2 *)(param_2 + 4),*(undefined2 *)(param_2 + 6),
                               *(undefined1 *)(param_2 + 1),uVar2);
      if (iVar1 == 0) goto LAB_ram_4004f77c;
      FUN_ram_4004dd7a(iVar1,0,param_2,0);
      param_2 = iVar1;
    }
    if ((((*(char *)(param_1 + 5) != '\0') && (3 < (byte)(*(char *)(param_2 + 1) - 0xbU))) &&
        ((iVar1 = FUN_ram_4004ad1e(), iVar1 != 0 && ((*(ushort *)(param_2 + 2) & 1) == 0)))) &&
       (((*(ushort *)(param_2 + 2) & 0x20) != 0 ||
        (param_2 = FUN_ram_4004db9e(param_2), param_2 != 0)))) {
      FUN_ram_4004df8a();
    }
  }
  return param_2;
}


/* NanoCore 1.11, address 0x4004f884.
 * REA evidence: ev_25e2e7eba0a77d3397c62f7ab5191c5210e1eb85017044f9f9720e7d3bfed5ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f884(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x1c;
  FUN_ram_4005aabc(iVar1);
  *(undefined1 *)(param_1 + 0x24) = 1;
  while( true ) {
    while ((iVar3 = *(int *)(param_1 + 0x18), iVar3 == 0 && (*(char *)(param_1 + 0x25) == '\0'))) {
      FUN_ram_4005aae2(iVar1);
    }
    if (*(char *)(param_1 + 0x25) != '\0') break;
    if (*(uint *)(iVar3 + 4) < 10) {
      uVar2 = *(undefined4 *)(iVar3 + 0x4c);
      switch(*(uint *)(iVar3 + 4)) {
      case 0:
        FUN_ram_40051394(param_1,uVar2,iVar3 + 8);
        break;
      case 1:
        FUN_ram_400501e8(param_1,uVar2,iVar3 + 8);
        break;
      case 2:
        FUN_ram_400508a2(param_1,uVar2,iVar3 + 8);
        break;
      case 3:
        FUN_ram_40051f62(param_1,uVar2,iVar3 + 8);
        break;
      case 4:
        FUN_ram_40051e18(param_1,uVar2,iVar3 + 8);
        break;
      case 5:
        FUN_ram_40051e32(param_1,uVar2,iVar3 + 8);
        break;
      case 6:
        FUN_ram_40051f7a(param_1);
        break;
      case 7:
        FUN_ram_4004fe02(param_1,uVar2,iVar3 + 8);
        break;
      case 8:
        FUN_ram_400544ba(param_1);
        break;
      case 9:
        FUN_ram_400535ac(param_1,uVar2,iVar3 + 8);
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 3;
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_ram_4004d538();
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_ram_4005ab0c(iVar1);
  return;
}


/* NanoCore 1.11, address 0x4004f964.
 * REA evidence: ev_a5c0f35fa9f9c523fcf1d69c556552621dc62bbde19c5533729942724e1c57c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f964(int param_1)

{
  *(undefined1 *)(param_1 + 0x25) = 1;
  if (*(char *)(param_1 + 0x24) != '\0') {
    FUN_ram_4005aaf8(param_1 + 0x1c);
  }
  FUN_ram_4005aa5a(param_1 + 0x20);
  return;
}


/* NanoCore 1.11, address 0x4004f9f4.
 * REA evidence: ev_1b36935a33961fd739a43145a5dea1ebced3f44e44ea152bc2d64379d30252f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f9f4(void)

{
  int iVar1;
  
  FUN_ram_40052e72();
  iVar1 = FUN_ram_4004d4b2(0x2c);
  *(undefined1 **)(iVar1 + 0xc) = &LAB_ram_4004f992;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_ram_4004f824;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(code **)(iVar1 + 0x14) = FUN_ram_4004f964;
  FUN_ram_4005aa1a(iVar1 + 0x20,0x14,FUN_ram_4004f884,0x8000,iVar1);
  return;
}


/* NanoCore 1.11, address 0x4004fa40.
 * REA evidence: ev_305168354287128ea2628dbb61b0de2104dc09eb74a4636ef80551debacf4546
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004fa40(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                     int param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  
  iVar6 = FUN_ram_4004ad00(param_8);
  if (param_7 == 1) {
    if (iVar6 == 0x10) {
      puVar8 = (undefined2 *)(param_2 + param_4 * 2);
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        iVar2 = iVar6;
        puVar3 = puVar8;
        for (iVar10 = 0; puVar3 = puVar3 + -1, iVar10 < param_4; iVar10 = iVar10 + 1) {
          iVar4 = iVar2 * 2;
          iVar2 = iVar2 + (param_5 >> 1);
          *puVar3 = *(undefined2 *)(param_1 + iVar4);
        }
        puVar8 = (undefined2 *)((int)puVar8 + (param_6 & 0xfffffffe));
      }
    }
    else if (iVar6 == 0x18) {
      iVar10 = (param_3 + -1) * param_6;
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        puVar11 = (undefined1 *)(param_1 + iVar6 * 3);
        puVar7 = (undefined1 *)(param_2 + iVar10);
        for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
          *puVar7 = *puVar11;
          puVar7[1] = puVar11[1];
          puVar1 = puVar11 + 2;
          puVar11 = puVar11 + param_5;
          puVar7[2] = *puVar1;
          puVar7 = puVar7 + 3;
        }
        iVar10 = iVar10 - param_6;
      }
    }
    else if (iVar6 == 0x20) {
      puVar9 = (undefined4 *)(param_2 + param_4 * 4);
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        puVar5 = puVar9;
        for (iVar2 = 0; puVar5 = puVar5 + -1, iVar2 < param_4; iVar2 = iVar2 + 1) {
          iVar4 = iVar10 * 4;
          iVar10 = iVar10 + (param_5 >> 2);
          *puVar5 = *(undefined4 *)(param_1 + iVar4);
        }
        puVar9 = (undefined4 *)((int)puVar9 + (param_6 & 0xfffffffc));
      }
    }
  }
  else if (param_7 == 2) {
    if (iVar6 == 0x10) {
      iVar10 = 0;
      puVar8 = (undefined2 *)(param_2 + (param_3 + (param_4 + -1) * (param_6 >> 1)) * 2);
      for (iVar6 = 0; iVar6 < param_4; iVar6 = iVar6 + 1) {
        puVar3 = puVar8;
        for (iVar2 = 0; puVar3 = puVar3 + -1, iVar2 < param_3; iVar2 = iVar2 + 1) {
          *puVar3 = *(undefined2 *)(param_1 + iVar10 * 2 + iVar2 * 2);
        }
        puVar8 = puVar8 + -(param_6 >> 1);
        iVar10 = iVar10 + (param_5 >> 1);
      }
    }
    else if (iVar6 == 0x18) {
      iVar6 = (param_4 + -1) * param_6;
      iVar10 = 0;
      for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
        puVar7 = (undefined1 *)(iVar6 + param_3 * 3 + param_2);
        puVar11 = (undefined1 *)(param_1 + iVar10);
        for (iVar4 = 0; iVar4 < param_3; iVar4 = iVar4 + 1) {
          puVar7[-3] = *puVar11;
          puVar7[-2] = puVar11[1];
          puVar7[-1] = puVar11[2];
          puVar7 = puVar7 + -3;
          puVar11 = puVar11 + 3;
        }
        iVar10 = iVar10 + param_5;
        iVar6 = iVar6 - param_6;
      }
    }
    else if (iVar6 == 0x20) {
      param_5 = param_5 >> 2;
      iVar10 = 0;
      puVar9 = (undefined4 *)(param_2 + (param_3 + (param_4 + -1) * param_5) * 4);
      for (iVar6 = 0; iVar6 < param_4; iVar6 = iVar6 + 1) {
        puVar5 = puVar9;
        for (iVar2 = 0; puVar5 = puVar5 + -1, iVar2 < param_3; iVar2 = iVar2 + 1) {
          *puVar5 = *(undefined4 *)(param_1 + iVar10 * 4 + iVar2 * 4);
        }
        puVar9 = puVar9 + -param_5;
        iVar10 = iVar10 + param_5;
      }
    }
  }
  else if (param_7 == 3) {
    if (iVar6 == 0x10) {
      param_2 = param_2 + (param_3 + -1) * (param_6 >> 1) * 2;
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
          iVar4 = iVar10 * 2;
          iVar10 = iVar10 + (param_5 >> 1);
          *(undefined2 *)(param_2 + iVar2 * 2) = *(undefined2 *)(param_1 + iVar4);
        }
        param_2 = param_2 + (param_6 >> 1) * -2;
      }
    }
    else if (iVar6 == 0x18) {
      iVar10 = 0;
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        puVar11 = (undefined1 *)(param_1 + iVar6 * 3);
        puVar7 = (undefined1 *)(iVar10 + param_4 * 3 + param_2);
        for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
          puVar7[-3] = *puVar11;
          puVar7[-2] = puVar11[1];
          puVar1 = puVar11 + 2;
          puVar11 = puVar11 + param_5;
          puVar7[-1] = *puVar1;
          puVar7 = puVar7 + -3;
        }
        iVar10 = iVar10 + param_6;
      }
    }
    else if (iVar6 == 0x20) {
      param_2 = param_2 + (param_3 + -1) * (param_6 >> 2) * 4;
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
          iVar4 = iVar10 * 4;
          iVar10 = iVar10 + (param_5 >> 2);
          *(undefined4 *)(param_2 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar4);
        }
        param_2 = param_2 + (param_6 >> 2) * -4;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004fcea.
 * REA evidence: ev_cc8023d0680ea2b1b33a95c36ed4d11aad2f49ee8bd6169a5d51a0a8c7efb98d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004fcea(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = FUN_ram_4004a406(&iStack_20,param_3,param_2);
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


/* NanoCore 1.11, address 0x4004fd62.
 * REA evidence: ev_158e2d1634d81bc62e8d73fdb46f2b6bd4aff8da720cb4841972f661917a1db6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004fd62(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_3 >> 1;
  iVar1 = FUN_ram_4004b5bc((param_1 + 0x5a) * 0x10000 >> 0x10);
  iVar2 = FUN_ram_4004b5bc(param_1);
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


/* NanoCore 1.11, address 0x4004fe02.
 * REA evidence: ev_324d14b6b473b9939ba3c4c7bdd4d9aed82599942e7b9be9fc836601d6b2f980
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005001e) */

void FUN_ram_4004fe02(int param_1,int param_2,undefined4 param_3)

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
    FUN_ram_4000304c(&iStack_230,param_3,0x10);
    iVar3 = FUN_ram_4004a406(&iStack_220,&iStack_230,*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      if ((int)(uint)uVar1 <= (int)uVar2) {
        uVar2 = (uint)uVar1;
      }
      iVar10 = *(int *)(param_2 + 0x24);
      iVar9 = *(int *)(param_2 + 0x28);
      if ((*(int *)(param_2 + 0x38) == 0) &&
         ((iVar10 + 0x168 == iVar9 || (iVar9 + 0x168 == iVar10)))) {
        FUN_ram_4004ee7a(auStack_cc);
        uStack_a4 = *(undefined1 *)(param_2 + 0x3c);
        uStack_ac = *(undefined2 *)(param_2 + 0x1c);
        uStack_aa = *(undefined1 *)(param_2 + 0x1e);
        uStack_b0 = 0x7fff;
        bStack_a3 = bStack_a3 & 0xe0 | 0xf;
        uStack_a8 = uVar2;
        FUN_ram_400501e8(param_1,auStack_cc,&iStack_230);
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
        FUN_ram_400530f4(auStack_cc,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),
                         iVar10,iVar9);
        puStack_200 = auStack_cc;
        FUN_ram_4005318e(auStack_1a0,&iStack_230,0x7fff,0);
        puStack_1fc = auStack_1a0;
        if ((iStack_208 - iStack_210 < 0) || (iStack_204 - iStack_20c < 0)) {
          iVar3 = 0;
        }
        else {
          FUN_ram_4005318e(auStack_17c,&iStack_210,0x7fff,1);
          puStack_1f8 = auStack_17c;
        }
        iVar8 = (iStack_218 - iStack_220) + 1;
        uVar4 = FUN_ram_4005ab20(iVar8);
        FUN_ram_4000304c(&uStack_1f0,&iStack_220,0x10);
        memset(&uStack_130,0,0x28);
        uStack_120 = *(undefined1 *)(param_2 + 0x3c);
        puStack_134 = &uStack_1f0;
        uStack_11c = uVar4;
        puStack_114 = puStack_134;
        if (*(int *)(param_2 + 0x38) == 0) {
          FUN_ram_4000304c(auStack_11f,param_2 + 0x1c,3);
        }
        else {
          FUN_ram_4004f5fc(auStack_108,*(int *)(param_2 + 0x38),0);
          iStack_1d8 = *(ushort *)(iStack_ec + 4) - 1;
          uVar6 = (uint)(*(ushort *)(iStack_ec + 4) >> 1);
          iStack_1d4 = *(ushort *)(iStack_ec + 6) - 1;
          uStack_1e0 = 0;
          uStack_1dc = 0;
          FUN_ram_4004a3ec(&uStack_1e0,*(int *)(param_2 + 0x2c) - uVar6,
                           *(int *)(param_2 + 0x30) - uVar6);
          uStack_130 = *(undefined4 *)(iStack_ec + 0x10);
          uStack_128 = *(undefined1 *)(iStack_ec + 1);
          uStack_12c = (uint)*(ushort *)(iStack_ec + 8);
          puStack_124 = &uStack_1e0;
        }
        iVar11 = 0;
        if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
          iVar11 = FUN_ram_4005ab20(uVar2 * uVar2);
          thunk_FUN_ram_4000504c(iVar11,0xff,uVar2 * uVar2);
          iStack_1a8 = uVar2 - 1;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          iStack_1a4 = iStack_1a8;
          FUN_ram_4005318e(auStack_158,&uStack_1b0,(int)uVar2 / 2,0);
          uStack_234 = 0;
          iVar7 = iVar11;
          puStack_238 = auStack_158;
          for (iVar12 = 0; iVar12 < (int)uVar2; iVar12 = iVar12 + 1) {
            iVar5 = FUN_ram_40052e7e(&puStack_238,iVar7,0,iVar12,uVar2);
            if (iVar5 == 0) {
              thunk_FUN_ram_4000504c(iVar7,0,uVar2);
            }
            iVar7 = iVar7 + uVar2;
          }
          FUN_ram_4004fd62((int)(short)iVar10,*(undefined2 *)(param_2 + 0x34),uVar2 & 0xff,
                           auStack_1d0);
          FUN_ram_4004a3ec(auStack_1d0,*(undefined4 *)(param_2 + 0x2c),
                           *(undefined4 *)(param_2 + 0x30));
          FUN_ram_4004fd62((int)(short)iVar9,*(undefined2 *)(param_2 + 0x34),uVar2 & 0xff,
                           auStack_1c0);
          FUN_ram_4004a3ec(auStack_1c0,*(undefined4 *)(param_2 + 0x2c),
                           *(undefined4 *)(param_2 + 0x30));
        }
        iStack_1e4 = iStack_1ec;
        for (iVar9 = 0; iVar9 < (iStack_214 - iStack_21c) + 1; iVar9 = iVar9 + 1) {
          thunk_FUN_ram_4000504c(uVar4,0xff,iVar8);
          iVar10 = FUN_ram_40052e7e(&puStack_200,uVar4,uStack_1f0,iStack_1ec,iVar8);
          cStack_118 = (char)iVar10;
          if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
            if ((iStack_1cc <= iStack_1ec) && (iStack_1ec <= iStack_1c4)) {
              if (iVar10 == 0) {
                thunk_FUN_ram_4000504c(uVar4,0,iVar8);
                cStack_118 = '\x02';
              }
              FUN_ram_4004fcea(iVar11,&uStack_1f0,auStack_1d0,uVar4,uVar2);
            }
            if ((iStack_1bc <= iStack_1ec) && (iStack_1ec <= iStack_1b4)) {
              if (cStack_118 == '\0') {
                thunk_FUN_ram_4000504c(uVar4,0,iVar8);
                cStack_118 = '\x02';
              }
              FUN_ram_4004fcea(iVar11,&uStack_1f0,auStack_1c0,uVar4,uVar2);
            }
          }
          FUN_ram_4005481c(param_1,&puStack_134);
          iStack_1ec = iStack_1ec + 1;
          iStack_1e4 = iStack_1e4 + 1;
        }
        FUN_ram_40052ed2(auStack_cc);
        FUN_ram_40052ed2(auStack_1a0);
        if (iVar3 != 0) {
          FUN_ram_40052ed2(auStack_17c);
        }
        FUN_ram_4005ab56(uVar4);
        if (*(int *)(param_2 + 0x38) != 0) {
          FUN_ram_4004f6ca(auStack_108);
        }
        if (iVar11 != 0) {
          FUN_ram_4005ab56(iVar11);
        }
      }
    }
  }
  return;
}


