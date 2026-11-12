/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40046000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40046000.
 * REA evidence: ev_297c573f0cc6f387b7025d254464efb6341ff458b38e71b03ec80fb9ccf5d60a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046000(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40048b96();
  for (iVar1 = 0; iVar1 != iVar2; iVar1 = iVar1 + 1) {
    FUN_ram_40046000(*(undefined4 *)(**(int **)(param_1 + 8) + iVar1 * 4));
  }
  if ((*(ushort *)(param_1 + 0x2a) & 1) != 0) {
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfffe;
    FUN_ram_40045a10(param_1);
    FUN_ram_40045714(param_1);
    if (iVar1 != 0) {
      FUN_ram_40056cb8(param_1);
    }
  }
  if ((*(ushort *)(param_1 + 0x2a) & 2) != 0) {
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfffd;
    FUN_ram_4004761c(param_1,0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40046078.
 * REA evidence: ev_38aeae09c6bdaf60af14285b36f2e9c26e27fed77df5f6c587035c57de5f07ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046078(void)

{
  int iVar1;
  
  if (DAT_ram_30080d40 == '\0') {
    DAT_ram_30080d40 = 1;
    iVar1 = FUN_ram_40048b0c();
    while( true ) {
      if ((*(ushort *)(iVar1 + 0x2a) & 4) == 0) break;
      *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) & 0xfffb;
      FUN_ram_40046000();
    }
    DAT_ram_30080d40 = 0;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400460be.
 * REA evidence: ev_06975c2dda6a4f26ed348a82fd0d87ea5f1b500b80049da5bf044c91fd654299
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40046200) */
/* WARNING: Removing unreachable block (ram,0x40046420) */
/* WARNING: Removing unreachable block (ram,0x400462cc) */
/* WARNING: Removing unreachable block (ram,0x400462d0) */
/* WARNING: Removing unreachable block (ram,0x40046166) */
/* WARNING: Removing unreachable block (ram,0x4004616e) */
/* WARNING: Removing unreachable block (ram,0x4004618e) */
/* WARNING: Removing unreachable block (ram,0x400463c0) */
/* WARNING: Removing unreachable block (ram,0x400463b8) */
/* WARNING: Removing unreachable block (ram,0x40046368) */
/* WARNING: Removing unreachable block (ram,0x40046360) */
/* WARNING: Removing unreachable block (ram,0x40046332) */
/* WARNING: Removing unreachable block (ram,0x4004632e) */
/* WARNING: Removing unreachable block (ram,0x400461ae) */
/* WARNING: Removing unreachable block (ram,0x400461b2) */
/* WARNING: Removing unreachable block (ram,0x40046428) */
/* WARNING: Removing unreachable block (ram,0x40046248) */
/* WARNING: Removing unreachable block (ram,0x40046186) */

void FUN_ram_400460be(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  FUN_ram_40046078();
  if (param_2 == 0) {
    param_2 = FUN_ram_40048b6e(param_1);
  }
  iVar1 = FUN_ram_40048b6e(param_1);
  iVar2 = FUN_ram_40044d1a();
  iVar3 = FUN_ram_40044f10(iVar1);
  uVar4 = FUN_ram_40044d1a(param_2);
  uVar5 = FUN_ram_40044f10(param_2);
  if (param_3 == 0) {
    iVar6 = FUN_ram_40044d02(param_2);
    if (iVar6 != 1) goto switchD_ram_40046154_caseD_0;
switchD_ram_40046154_caseD_2:
    iVar6 = FUN_ram_40045174(param_2);
    iVar7 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
LAB_ram_400461b6:
    uVar4 = uVar4 + (iVar6 - iVar7);
    goto switchD_ram_40046154_caseD_0;
  }
  switch(param_3 - 1U & 0xff) {
  case 0:
    goto switchD_ram_40046154_caseD_0;
  case 1:
    iVar6 = FUN_ram_40045174(param_2);
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    iVar6 = iVar6 / 2;
    goto LAB_ram_400461b6;
  case 2:
    goto switchD_ram_40046154_caseD_2;
  case 3:
    goto switchD_ram_40046154_caseD_3;
  case 4:
    iVar6 = FUN_ram_40045174(param_2);
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    iVar6 = iVar6 / 2;
    goto LAB_ram_400462d4;
  case 5:
    iVar6 = FUN_ram_40045174(param_2);
    iVar7 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
LAB_ram_400462d4:
    uVar4 = uVar4 + (iVar6 - iVar7);
switchD_ram_40046154_caseD_3:
    iVar6 = FUN_ram_400451a2(param_2);
    iVar7 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
    break;
  case 7:
    iVar6 = FUN_ram_40045174(param_2);
    uVar4 = uVar4 + (iVar6 - ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1));
  case 6:
    iVar6 = FUN_ram_400451a2(param_2);
    iVar7 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) / 2;
    iVar6 = iVar6 / 2;
    break;
  case 8:
    iVar6 = FUN_ram_40045174(param_2);
    uVar4 = uVar4 + (iVar6 / 2 - ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2);
    iVar6 = FUN_ram_400451a2(param_2);
    iVar6 = iVar6 / 2;
    iVar7 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) / 2;
    break;
  case 9:
    uVar5 = ~(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    goto LAB_ram_40046346;
  case 10:
    iVar6 = ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1) / 2;
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    goto LAB_ram_4004636c;
  case 0xb:
    iVar6 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14);
    iVar7 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
LAB_ram_4004636c:
    uVar4 = iVar6 - iVar7;
    uVar5 = ~(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    goto switchD_ram_40046154_caseD_0;
  case 0xc:
    uVar5 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1;
    goto LAB_ram_40046346;
  case 0xd:
    iVar6 = ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1) / 2;
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    goto LAB_ram_400463c4;
  case 0xe:
    iVar6 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14);
    iVar7 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
LAB_ram_400463c4:
    uVar4 = iVar6 - iVar7;
    uVar5 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1;
    goto switchD_ram_40046154_caseD_0;
  case 0xf:
    uVar4 = ~(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    goto LAB_ram_400463f8;
  case 0x10:
    uVar4 = ~(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    goto LAB_ram_4004640a;
  case 0x11:
    uVar4 = ~(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    goto LAB_ram_4004643e;
  case 0x12:
    uVar4 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1;
LAB_ram_400463f8:
    uVar5 = 0;
    goto switchD_ram_40046154_caseD_0;
  case 0x13:
    uVar4 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1;
LAB_ram_4004640a:
    iVar6 = ((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1) / 2;
    iVar7 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) / 2;
LAB_ram_4004642c:
    uVar5 = iVar6 - iVar7;
    goto switchD_ram_40046154_caseD_0;
  case 0x14:
    uVar4 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1;
LAB_ram_4004643e:
    iVar6 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18);
    iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    goto LAB_ram_4004642c;
  default:
    uVar5 = 0;
LAB_ram_40046346:
    uVar4 = 0;
    goto switchD_ram_40046154_caseD_0;
  }
  uVar5 = uVar5 + (iVar6 - iVar7);
switchD_ram_40046154_caseD_0:
  if (((param_4 & 0x60000000) == 0x20000000) && (uVar8 = param_4 & 0x9fffffff, (int)uVar8 < 0x7d1))
  {
    if (1000 < (int)uVar8) {
      uVar8 = 1000 - uVar8;
    }
    param_4 = (int)(uVar8 * ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1)) / 100;
  }
  if (((param_5 & 0x60000000) == 0x20000000) && (uVar8 = param_5 & 0x9fffffff, (int)uVar8 < 0x7d1))
  {
    if (1000 < (int)uVar8) {
      uVar8 = 1000 - uVar8;
    }
    param_5 = (int)(uVar8 * ((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1)) / 100;
  }
  iVar6 = FUN_ram_40044d02(iVar1);
  iVar9 = *(int *)(param_2 + 0x14);
  iVar7 = *(int *)(iVar1 + 0x14);
  if (iVar6 == 1) {
    iVar6 = FUN_ram_4004680e(iVar1);
  }
  else {
    iVar6 = FUN_ram_4004671e(iVar1);
  }
  iVar10 = *(int *)(param_2 + 0x18);
  iVar11 = *(int *)(iVar1 + 0x18);
  iVar1 = thunk_FUN_ram_40046652(iVar1);
  FUN_ram_4004892c(param_1,1,0);
  FUN_ram_40045014(param_1,uVar4 + ((((param_4 + iVar9) - iVar7) + iVar6) - iVar2),
                   uVar5 + ((iVar1 + ((param_5 + iVar10) - iVar11)) - iVar3));
  return;
}


/* NanoCore 1.12, address 0x40046488.
 * REA evidence: ev_33edb498faba442bc1a2219eda5e3fa06a4297eb77d969af4a308311f34e8797
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40046488(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_ram_40047b68(param_1,param_2,0x27);
  return uVar1;
}


/* NanoCore 1.12, address 0x400464a8.
 * REA evidence: ev_52ad26d102901c3c0fb71c5b69d08ee77fc67c5596d6e62671b29775ffb5c4a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400464a8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047b68(param_1,0,0x12);
  iVar2 = FUN_ram_40047b68(param_1,0,0x30);
  uVar3 = FUN_ram_40047b68(param_1,0,0x34);
  if ((uVar3 & 4) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x400464f0.
 * REA evidence: ev_1f47c75638f4a0eebc9031eedf75b833effaea64394ec5b925fe61e19301b4bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400464f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047b68(param_1,0,0x11);
  iVar2 = FUN_ram_40047b68(param_1,0,0x30);
  uVar3 = FUN_ram_40047b68(param_1,0,0x34);
  if ((uVar3 & 1) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40046538.
 * REA evidence: ev_7b5316d51b10cd82e2009aaa4e317153fbc0c63b8395f456d0dbc367ef4b2d1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046538(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047b68(param_1,0,0x10);
  iVar2 = FUN_ram_40047b68(param_1,0,0x30);
  uVar3 = FUN_ram_40047b68(param_1,0,0x34);
  if ((uVar3 & 2) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40046580.
 * REA evidence: ev_be5069cf6667b9645d7d069490841d1f05e6558c37caa514a43f321bf4423aea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046580(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047b68(param_1,0,0x13);
  iVar2 = FUN_ram_40047b68(param_1,0,0x30);
  uVar3 = FUN_ram_40047b68(param_1,0,0x34);
  if ((uVar3 & 8) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x400465c8.
 * REA evidence: ev_62e35b1a01439ee26a8bf69ff36383097947a0e1b5d4642a6b4e9fd9c8a44f87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400465c8(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_ram_4004416c();
  iVar1 = *(int *)(param_1 + 8);
  if ((*(uint *)(iVar1 + 0x28) & 0x3ffff) >> 0x10 != param_2) {
    *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) & 0xfffc | (ushort)param_2 & 3;
    FUN_ram_400455dc();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40046602.
 * REA evidence: ev_68cdb81a6e78ecdee84484ab49e60baf0f29cf374b2d5d6296f3d71880e9cc76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40046602(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0x3ffff) >> 0x10;
  }
  return 3;
}


/* NanoCore 1.12, address 0x40046612.
 * REA evidence: ev_87ba601f719942b699baf447c20656f3999a6c227b580ea561b24ae56316e81e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40046612(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0x3ffffff) >> 0x16;
  }
  return 0xf;
}


/* NanoCore 1.12, address 0x40046622.
 * REA evidence: ev_c5d032dd5418e76edf728c8d52a591fe3f964624294367b7b8c0f09a4233c9dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40046622(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0xfffff) >> 0x12;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40046632.
 * REA evidence: ev_21381d2346869349ca425741ca429c834de63a491670b48032621a06f75fe91f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40046632(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0x3fffff) >> 0x14;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40046642.
 * REA evidence: ev_9caef775f04045de06b2770531a621a02a58b4f536574201b3d8a1e313a77b22
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046642(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return -*(int *)(*(int *)(param_1 + 8) + 0x18);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40046652.
 * REA evidence: ev_ea51db3e986e3e974030c23fb3f8479d0fa4830a1b10ce671f272935c6f2a7c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046652(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return -*(int *)(*(int *)(param_1 + 8) + 0x1c);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40046662.
 * REA evidence: ev_b56191f8fdcb7df09ebfbb03ff39992a78857a73850a09c22262de0dba74eb11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40046652(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return -*(int *)(*(int *)(param_1 + 8) + 0x1c);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40046666.
 * REA evidence: ev_ce89cc8783633ebf389f460935422b84261fcc2fecdd31720af09ea719956e7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046666(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_ram_40048b96();
  iVar1 = -0x1fffffff;
  for (iVar6 = 0; iVar6 != iVar2; iVar6 = iVar6 + 1) {
    iVar3 = *(int *)(**(int **)(param_1 + 8) + iVar6 * 4);
    iVar5 = FUN_ram_40043c96(iVar3,0x40001);
    if (iVar5 == 0) {
      iVar4 = *(int *)(iVar3 + 0x20);
      iVar5 = FUN_ram_40047b68(iVar3,0,0x19);
      iVar5 = iVar5 + iVar4;
      if (iVar1 < iVar5) {
        iVar1 = iVar5;
      }
    }
  }
  iVar2 = FUN_ram_40046538(param_1);
  iVar6 = FUN_ram_400464f0(param_1);
  if (iVar1 != -0x1fffffff) {
    iVar1 = iVar1 - (*(int *)(param_1 + 0x20) - iVar6);
  }
  iVar3 = FUN_ram_40045244(param_1);
  iVar4 = FUN_ram_40045168(param_1);
  iVar5 = FUN_ram_40046652(param_1);
  iVar5 = (iVar3 - ((iVar4 - iVar2) - iVar6)) - iVar5;
  if (iVar5 <= iVar1) {
    iVar5 = iVar1;
  }
  return iVar5;
}


/* NanoCore 1.12, address 0x4004671e.
 * REA evidence: ev_f4144fbadc417d0743c21476e5fc605b524684d62b874520b6e2b3cfb17a6856
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004671e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_ram_40046488(param_1,0);
  if (iVar2 == 1) {
    iVar3 = FUN_ram_40046580(param_1);
    iVar4 = FUN_ram_400464a8(param_1);
    iVar5 = FUN_ram_40048b96(param_1);
    iVar2 = 0x1fffffff;
    for (iVar1 = 0; iVar5 != iVar1; iVar1 = iVar1 + 1) {
      iVar7 = *(int *)(**(int **)(param_1 + 8) + iVar1 * 4);
      iVar6 = FUN_ram_40043c96(iVar7,0x40001);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar7 + 0x14);
        iVar7 = FUN_ram_40047b68(iVar7,0,0x1a);
        iVar6 = iVar6 - iVar7;
        if (iVar6 < iVar2) {
          iVar2 = iVar6;
        }
      }
    }
    if (iVar2 == 0x1fffffff) {
      iVar2 = -0x1fffffff;
    }
    else {
      iVar2 = (*(int *)(param_1 + 0x14) + iVar4) - iVar2;
    }
    iVar5 = FUN_ram_40045224(param_1);
    iVar6 = FUN_ram_4004515c(param_1);
    iVar1 = FUN_ram_40046642(param_1);
    iVar1 = iVar1 + (iVar5 - ((iVar6 - iVar3) - iVar4));
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
  }
  else {
    iVar1 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = -*(int *)(*(int *)(param_1 + 8) + 0x18);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004680e.
 * REA evidence: ev_08882003056913367dd93ac3d770ac2d8369b30bd7e6a968100b2fd00f9fe887
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004680e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_ram_40046488(param_1,0);
  if (iVar2 == 1) {
    iVar6 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x18);
    }
  }
  else {
    iVar3 = FUN_ram_40048b96(param_1);
    iVar2 = -0x1fffffff;
    for (iVar1 = 0; iVar3 != iVar1; iVar1 = iVar1 + 1) {
      iVar4 = *(int *)(**(int **)(param_1 + 8) + iVar1 * 4);
      iVar6 = FUN_ram_40043c96(iVar4,0x40001);
      if (iVar6 == 0) {
        iVar5 = *(int *)(iVar4 + 0x1c);
        iVar6 = FUN_ram_40047b68(iVar4,0,0x1b);
        iVar6 = iVar6 + iVar5;
        if (iVar2 < iVar6) {
          iVar2 = iVar6;
        }
      }
    }
    iVar1 = FUN_ram_40046580(param_1);
    iVar3 = FUN_ram_400464a8(param_1);
    if (iVar2 != -0x1fffffff) {
      iVar2 = iVar2 - (*(int *)(param_1 + 0x1c) - iVar1);
    }
    iVar4 = FUN_ram_40045224(param_1);
    iVar5 = FUN_ram_4004515c(param_1);
    iVar6 = FUN_ram_40046642(param_1);
    iVar6 = (iVar4 - ((iVar5 - iVar1) - iVar3)) - iVar6;
    if (iVar6 < iVar2) {
      iVar6 = iVar2;
    }
  }
  return iVar6;
}


/* NanoCore 1.12, address 0x400468e8.
 * REA evidence: ev_f940fa5b1c536ffe40ebb0c1fccf83a66a18ccb86ea4a92c3ba853803a973e1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400468e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 != 0 || param_3 != 0) {
    FUN_ram_4004416c();
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_2;
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + param_3;
    FUN_ram_400452ac(param_1,param_2,param_3,1);
    iVar1 = FUN_ram_40044c48(param_1,0xc,0);
    if (iVar1 == 1) {
      FUN_ram_400455dc(param_1);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40046940.
 * REA evidence: ev_7e6229bfa8d77585909d16a2314662175f5ad632ac7fde2be40216a90cdaadd6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046940(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40046652();
  FUN_ram_400468e8(param_1,0,iVar1 + param_2);
  return;
}


/* NanoCore 1.12, address 0x40046962.
 * REA evidence: ev_40d00f1ee6042292a64a6251d5f21b118266ad6e8166d76cca1f9a493ac0bc7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046962(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40046642();
  FUN_ram_400468e8(param_1,param_2 + iVar1,0);
  return;
}


/* NanoCore 1.12, address 0x40046982.
 * REA evidence: ev_60aa1cbeef317841a3641c459bcf1ad6fff4a6df52fabf2d6ea51b4eab2fc418
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046982(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_78;
  code *pcStack_74;
  undefined1 *puStack_68;
  undefined1 *puStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  
  if (param_2 == 0 && param_3 == 0) {
    return;
  }
  if (param_4 == 1) {
    uVar1 = FUN_ram_40048b18();
    FUN_ram_4004a24c(&uStack_78);
    puStack_68 = &LAB_ram_4004649e;
    uStack_78 = param_1;
    if (param_2 != 0) {
      iVar2 = FUN_ram_4004d2d4(uVar1);
      uStack_48 = FUN_ram_4004a3fe(iVar2 >> 1,200,400);
      iStack_4c = FUN_ram_40046642(param_1);
      iStack_54 = -iStack_4c;
      uStack_50 = 0x80000000;
      iStack_4c = param_2 - iStack_4c;
      pcStack_74 = FUN_ram_40046962;
      puStack_58 = &LAB_ram_4004a452;
      iVar2 = FUN_ram_40044c48(param_1,9,&uStack_78);
      if (iVar2 != 1) {
        return;
      }
      FUN_ram_4004a292(&uStack_78);
    }
    if (param_3 != 0) {
      iVar2 = FUN_ram_4004d2f6(uVar1);
      uStack_48 = FUN_ram_4004a3fe(iVar2 >> 1,200,400);
      iStack_4c = FUN_ram_40046652(param_1);
      iStack_54 = -iStack_4c;
      uStack_50 = 0x80000000;
      iStack_4c = param_3 - iStack_4c;
      pcStack_74 = FUN_ram_40046940;
      puStack_58 = &LAB_ram_4004a452;
      iVar2 = FUN_ram_40044c48(param_1,9,&uStack_78);
      if (iVar2 == 1) {
        FUN_ram_4004a292(&uStack_78);
      }
    }
  }
  else {
    FUN_ram_4004a332(param_1,FUN_ram_40046940);
    FUN_ram_4004a332(param_1,FUN_ram_40046962);
    iVar2 = FUN_ram_40044c48(param_1,9,0);
    if ((iVar2 == 1) && (iVar2 = FUN_ram_400468e8(param_1,param_2,param_3), iVar2 == 1)) {
      FUN_ram_40044c48(param_1,0xb,0);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40046ad2.
 * REA evidence: ev_a495227dd7ae1bd00e81adfd3184e4c79fa9c0fd8f85da0d98d41200ae9a9631
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046ad2(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0 && param_3 == 0) {
    return;
  }
  FUN_ram_40046078();
  iVar3 = FUN_ram_40046642(param_1);
  param_2 = param_2 - iVar3;
  iVar4 = FUN_ram_40046488(param_1,0);
  iVar2 = 0;
  if (iVar4 == 1) {
    if (param_2 < 1) goto LAB_ram_40046b38;
    iVar2 = FUN_ram_4004671e(param_1);
    iVar4 = FUN_ram_4004680e(param_1);
    iVar2 = iVar2 + iVar4;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    bVar1 = param_2 < iVar2;
  }
  else {
    if (-1 < param_2) goto LAB_ram_40046b38;
    iVar2 = FUN_ram_4004671e(param_1);
    iVar4 = FUN_ram_4004680e(param_1);
    iVar2 = iVar2 + iVar4;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    iVar2 = -iVar2;
    bVar1 = iVar2 < param_2;
  }
  if (bVar1) {
    iVar2 = param_2;
  }
LAB_ram_40046b38:
  iVar5 = FUN_ram_40046652(param_1);
  param_3 = param_3 - iVar5;
  iVar4 = 0;
  if (param_3 < 0) {
    iVar6 = FUN_ram_40046666(param_1);
    iVar6 = iVar5 + iVar6;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar4 = -iVar6;
    if (-iVar6 < param_3) {
      iVar4 = param_3;
    }
  }
  if (iVar3 + iVar2 != 0 || iVar4 + iVar5 != 0) {
    FUN_ram_40046982(param_1,iVar3 + iVar2,iVar4 + iVar5,param_4);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40046bbe.
 * REA evidence: ev_7eea5fceee789676466e0574ec61085386eb12db56f69385b84cc83d7141e315
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046bbe(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_4004a332(param_1,FUN_ram_40046962);
  iVar1 = FUN_ram_40046642(param_1);
  FUN_ram_40046ad2(param_1,iVar1 - param_2,0,param_3);
  return;
}


/* NanoCore 1.12, address 0x40046bf4.
 * REA evidence: ev_d978313bea05d63d597a30ab56d70952f25ae7cbadf5bc4144893d6582403c8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046bf4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_4004a332(param_1,FUN_ram_40046940);
  iVar1 = FUN_ram_40046652(param_1);
  FUN_ram_40046ad2(param_1,0,iVar1 - param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40046c2a.
 * REA evidence: ev_b609adb907c0186211a6a4582a6bd4d4aec219a08b61e0dc5cad11f6c1e62e10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40046e9a) */
/* WARNING: Removing unreachable block (ram,0x40046e4e) */
/* WARNING: Removing unreachable block (ram,0x40046e56) */
/* WARNING: Removing unreachable block (ram,0x40046ea2) */

void FUN_ram_40046c2a(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  iVar2 = FUN_ram_40048b6e(param_2);
  iVar3 = FUN_ram_40043c8a(iVar2,0x10);
  if (iVar3 == 0) {
    return;
  }
  uVar4 = FUN_ram_40046612(iVar2);
  iVar3 = FUN_ram_40046632(iVar2);
  piVar11 = param_1;
  if (iVar3 != 0) {
    piVar11 = (int *)(param_2 + 0x14);
  }
  iVar5 = FUN_ram_40046538(iVar2);
  iVar6 = FUN_ram_400464f0(iVar2);
  iVar9 = param_3[1];
  iVar10 = (*(int *)(iVar2 + 0x20) - iVar6) - piVar11[3];
  iVar8 = iVar9 - iVar10;
  iVar1 = ((*(int *)(iVar2 + 0x18) + iVar5) - piVar11[1]) - iVar9;
  iVar7 = FUN_ram_40045168(iVar2);
  if (iVar1 < 0) {
    if (0 < iVar8) {
      iVar1 = iVar10 - iVar9;
      iVar8 = FUN_ram_40046666(iVar2);
      iVar8 = iVar8 + iVar1;
      goto LAB_ram_40046cd0;
    }
LAB_ram_40046cd4:
    iVar1 = 0;
  }
  else {
    if ((-1 < iVar8) || (iVar1 == 0)) goto LAB_ram_40046cd4;
    iVar8 = FUN_ram_40046652(iVar2);
    iVar8 = iVar8 - iVar1;
LAB_ram_40046cd0:
    if (iVar8 < 0) goto LAB_ram_40046cd4;
  }
  if (iVar3 == 2) {
    iVar3 = piVar11[3];
    iVar1 = *(int *)(iVar2 + 0x20) - iVar6;
LAB_ram_40046e32:
    iVar1 = iVar1 - iVar3;
  }
  else {
    if (iVar3 == 3) {
      iVar1 = ((iVar7 - iVar5) - iVar6) / 2 + iVar5 + *(int *)(iVar2 + 0x18);
      iVar3 = ((piVar11[3] - piVar11[1]) + 1) / 2 + piVar11[1];
      goto LAB_ram_40046e32;
    }
    if (iVar3 == 1) {
      iVar1 = (iVar5 + *(int *)(iVar2 + 0x18)) - piVar11[1];
    }
  }
  iVar3 = FUN_ram_40046622(iVar2);
  if (iVar3 != 0) {
    param_1 = (int *)(param_2 + 0x14);
  }
  iVar6 = FUN_ram_400464a8(iVar2);
  iVar7 = FUN_ram_40046580(iVar2);
  iVar9 = *param_3;
  iVar5 = ((*(int *)(iVar2 + 0x14) + iVar6) - *param_1) - iVar9;
  iVar10 = (*(int *)(iVar2 + 0x1c) - iVar7) - param_1[2];
  iVar8 = iVar9 - iVar10;
  if (iVar5 < 0) {
    if (0 < iVar8) {
      iVar5 = iVar10 - iVar9;
      iVar8 = FUN_ram_4004680e(iVar2);
      iVar8 = iVar8 + iVar5;
      goto LAB_ram_40046d48;
    }
LAB_ram_40046d4c:
    iVar5 = 0;
  }
  else {
    if ((-1 < iVar8) || (iVar5 == 0)) goto LAB_ram_40046d4c;
    iVar8 = FUN_ram_4004671e(iVar2);
    iVar8 = iVar8 - iVar5;
LAB_ram_40046d48:
    if (iVar8 < 0) goto LAB_ram_40046d4c;
  }
  iVar8 = FUN_ram_4004515c(iVar2);
  if (iVar3 == 2) {
    iVar3 = param_1[2];
    iVar5 = *(int *)(iVar2 + 0x1c) - iVar7;
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 == 1) {
        iVar5 = (iVar6 + *(int *)(iVar2 + 0x14)) - *param_1;
      }
      goto LAB_ram_40046d74;
    }
    iVar5 = ((iVar8 - iVar6) - iVar7) / 2 + iVar6 + *(int *)(iVar2 + 0x14);
    iVar3 = ((param_1[2] - *param_1) + 1) / 2 + *param_1;
  }
  iVar5 = iVar5 - iVar3;
LAB_ram_40046d74:
  iVar3 = FUN_ram_4004a332(iVar2,FUN_ram_40046940);
  iVar6 = FUN_ram_4004a332(iVar2,FUN_ram_40046962);
  if (((iVar3 != 0) || (iVar6 != 0)) && (iVar3 = FUN_ram_40044c48(iVar2,0xb,0), iVar3 != 1)) {
    return;
  }
  if (((uVar4 & 1) == 0) && (iVar5 < 0)) {
    iVar5 = 0;
  }
  if (((uVar4 & 2) == 0) && (0 < iVar5)) {
    iVar5 = 0;
  }
  if (((uVar4 & 4) == 0) && (iVar1 < 0)) {
    iVar1 = 0;
  }
  if (((uVar4 & 8) == 0) && (0 < iVar1)) {
    iVar1 = 0;
  }
  iVar3 = iVar5;
  if (param_4 == 0) {
    iVar3 = 0;
  }
  *param_3 = *param_3 + iVar3;
  iVar3 = iVar1;
  if (param_4 == 0) {
    iVar3 = 0;
  }
  param_3[1] = param_3[1] + iVar3;
  FUN_ram_40046982(iVar2,iVar5,iVar1,param_4);
  return;
}


/* NanoCore 1.12, address 0x40046ee2.
 * REA evidence: ev_1400d743823c2ab69200951c296560122d31edb4ca644775ea7de45659f273a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046ee2(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_40046078();
  uStack_18 = 0;
  uStack_14 = 0;
  iVar2 = FUN_ram_40048b6e(param_1);
  iVar3 = param_1;
  while (iVar1 = iVar2, iVar1 != 0) {
    FUN_ram_40046c2a(param_1 + 0x14,iVar3,&uStack_18,param_2);
    iVar2 = FUN_ram_40048b6e(iVar1);
    iVar3 = iVar1;
  }
  return;
}


/* NanoCore 1.12, address 0x40046f28.
 * REA evidence: ev_c9c6522e97e9efb0abda54014a1f173992eee014b40539202405496a7ae8ca87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400475ca) */
/* WARNING: Removing unreachable block (ram,0x4004754e) */
/* WARNING: Removing unreachable block (ram,0x4004748c) */
/* WARNING: Removing unreachable block (ram,0x4004710c) */
/* WARNING: Removing unreachable block (ram,0x400473d0) */
/* WARNING: Removing unreachable block (ram,0x40047348) */
/* WARNING: Removing unreachable block (ram,0x40047278) */
/* WARNING: Removing unreachable block (ram,0x40047246) */
/* WARNING: Removing unreachable block (ram,0x4004730e) */
/* WARNING: Removing unreachable block (ram,0x40047394) */
/* WARNING: Removing unreachable block (ram,0x400470dc) */
/* WARNING: Removing unreachable block (ram,0x40047454) */
/* WARNING: Removing unreachable block (ram,0x400474cc) */
/* WARNING: Removing unreachable block (ram,0x40047586) */
/* WARNING: Removing unreachable block (ram,0x40047504) */

void FUN_ram_40046f28(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iStack_6c;
  
  FUN_ram_4004a496(param_2,0,0,0xffffffff,0xffffffff);
  FUN_ram_4004a496(param_3,0,0,0xffffffff,0xffffffff);
  uVar2 = FUN_ram_40043c8a(param_1,0x10);
  if (uVar2 == 0) {
    return;
  }
  iVar3 = FUN_ram_40046602(param_1);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = FUN_ram_40056ae4(0);
  if (iVar3 == 2) {
    while( true ) {
      if (iVar4 == 0) {
        return;
      }
      iVar5 = FUN_ram_40056b2e(iVar4);
      if (param_1 == iVar5) break;
      iVar4 = FUN_ram_40056ae4(iVar4);
    }
  }
  iVar5 = FUN_ram_40046652(param_1);
  iVar6 = FUN_ram_40046666(param_1);
  iVar7 = FUN_ram_4004671e(param_1);
  iVar8 = FUN_ram_4004680e(param_1);
  uVar9 = FUN_ram_40046612(param_1);
  uVar21 = 0;
  if (((uVar9 & 0xc) != 0) && (uVar21 = uVar2, iVar3 != 1)) {
    if (iVar3 == 3) {
      if (iVar5 < 1) {
        uVar21 = (uint)(0 < iVar6);
      }
    }
    else {
      uVar21 = 0;
      if (iVar3 == 2) {
        iVar10 = FUN_ram_40056b14(iVar4);
        uVar21 = (uint)(iVar10 == 0xc);
      }
    }
  }
  if ((uVar9 & 3) != 0) {
    if (iVar3 == 1) goto LAB_ram_40046fe6;
    if (iVar3 == 3) {
      if ((0 < iVar7) || (0 < iVar8)) goto LAB_ram_40046fe6;
    }
    else if ((iVar3 == 2) && (iVar3 = FUN_ram_40056b14(iVar4), iVar3 == 3)) goto LAB_ram_40046fe6;
  }
  uVar2 = 0;
  if (uVar21 == 0) {
    return;
  }
LAB_ram_40046fe6:
  iVar4 = FUN_ram_40046488(param_1,0x10000);
  iVar10 = FUN_ram_40047b68(param_1,0x10000,0x10);
  iVar11 = FUN_ram_40047b68(param_1,0x10000,0x11);
  iVar12 = FUN_ram_40047b68(param_1,0x10000,0x12);
  iVar13 = FUN_ram_40047b68(param_1,0x10000,0x13);
  iVar14 = FUN_ram_40047b68(param_1,0x10000,1);
  iVar15 = FUN_ram_40045168(param_1);
  iVar16 = FUN_ram_4004515c(param_1);
  iVar3 = iVar14;
  if (uVar21 == 0) {
    iVar3 = 0;
  }
  iStack_6c = iVar14;
  if (uVar2 == 0) {
    iStack_6c = 0;
  }
  bVar1 = FUN_ram_40047b68(param_1,0x10000,0x1d);
  if ((1 < bVar1) || (bVar1 = FUN_ram_40047b68(param_1,0x10000,0x32), 1 < bVar1)) {
    if ((uVar21 != 0) && (iVar5 = iVar5 + iVar15 + iVar6, iVar5 != 0)) {
      param_3[1] = *(int *)(param_1 + 0x18);
      param_3[3] = *(int *)(param_1 + 0x20);
      if (iVar4 == 1) {
        iVar19 = *(int *)(param_1 + 0x14) + iVar12;
        *param_3 = iVar19;
        param_3[2] = iVar19 + iVar14 + -1;
      }
      else {
        iVar19 = *(int *)(param_1 + 0x1c) - iVar13;
        param_3[2] = iVar19;
        *param_3 = (iVar19 - iVar14) + 1;
      }
      iVar19 = ((iVar15 - iVar10) - iVar11) - iStack_6c;
      if (iVar5 == 0) {
        iVar20 = -1;
      }
      else {
        iVar20 = (iVar15 * iVar19) / iVar5;
      }
      iVar17 = FUN_ram_4004d318(0);
      iVar18 = 1;
      if (0xef < iVar17 * 10) {
        iVar17 = FUN_ram_4004d318(0);
        iVar18 = (iVar17 * 10 + 0x50) / 0xa0;
      }
      if (iVar20 <= iVar18) {
        iVar17 = FUN_ram_4004d318(0);
        iVar20 = 1;
        if (0xef < iVar17 * 10) {
          iVar20 = FUN_ram_4004d318(0);
          iVar20 = (iVar20 * 10 + 0x50) / 0xa0;
        }
      }
      iVar5 = iVar5 - iVar15;
      if (iVar5 < 1) {
        iVar5 = *(int *)(param_1 + 0x20);
        param_3[1] = iVar10 + *(int *)(param_1 + 0x18);
        param_3[3] = ((iVar5 - iVar11) - iStack_6c) + -1;
      }
      else {
        iVar19 = iVar19 - iVar20;
        if (iVar5 == 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = (iVar6 * iVar19) / iVar5;
        }
        iVar6 = (iVar19 - iVar5) + *(int *)(param_1 + 0x18);
        iVar5 = iVar6 + iVar10;
        param_3[1] = iVar5;
        param_3[3] = iVar20 + iVar5 + -1;
        if (iVar6 < *(int *)(param_1 + 0x18)) {
          iVar10 = iVar10 + *(int *)(param_1 + 0x18);
          param_3[1] = iVar10;
          iVar5 = FUN_ram_4004d318(0);
          iVar6 = 1;
          if (0xef < iVar5 * 10) {
            iVar5 = FUN_ram_4004d318(0);
            iVar6 = (iVar5 * 10 + 0x50) / 0xa0;
          }
          if (param_3[3] < iVar10 + iVar6) {
            iVar10 = param_3[1];
            iVar5 = FUN_ram_4004d318(0);
            iVar6 = 1;
            if (0xef < iVar5 * 10) {
              iVar5 = FUN_ram_4004d318(0);
              iVar6 = (iVar5 * 10 + 0x50) / 0xa0;
            }
            param_3[3] = iVar6 + iVar10;
          }
        }
        iVar5 = (*(int *)(param_1 + 0x20) - iStack_6c) - iVar11;
        if (iVar5 < param_3[3]) {
          param_3[3] = iVar5;
          iVar6 = FUN_ram_4004d318(0);
          iVar10 = 1;
          if (0xef < iVar6 * 10) {
            iVar6 = FUN_ram_4004d318(0);
            iVar10 = (iVar6 * 10 + 0x50) / 0xa0;
          }
          if (iVar5 - iVar10 < param_3[1]) {
            iVar10 = param_3[3];
            iVar5 = FUN_ram_4004d318(0);
            iVar6 = 1;
            if (0xef < iVar5 * 10) {
              iVar5 = FUN_ram_4004d318(0);
              iVar6 = (iVar5 * 10 + 0x50) / 0xa0;
            }
            param_3[1] = iVar10 - iVar6;
          }
        }
      }
    }
    if ((uVar2 != 0) && (iVar5 = iVar7 + iVar16 + iVar8, iVar5 != 0)) {
      iVar11 = *(int *)(param_1 + 0x20) - iVar11;
      iVar6 = *(int *)(param_1 + 0x14);
      param_2[3] = iVar11;
      *param_2 = iVar6;
      iVar6 = *(int *)(param_1 + 0x1c);
      param_2[1] = (iVar11 - iVar14) + 1;
      param_2[2] = iVar6;
      iVar10 = ((iVar16 - iVar12) - iVar13) - iVar3;
      iVar6 = FUN_ram_4004d318(0);
      iVar7 = 1;
      if (iVar5 == 0) {
        iVar11 = -1;
      }
      else {
        iVar11 = (iVar16 * iVar10) / iVar5;
      }
      if (0xef < iVar6 * 10) {
        iVar6 = FUN_ram_4004d318(0);
        iVar7 = (iVar6 * 10 + 0x50) / 0xa0;
      }
      if (iVar11 <= iVar7) {
        iVar6 = FUN_ram_4004d318(0);
        iVar11 = 1;
        if (0xef < iVar6 * 10) {
          iVar6 = FUN_ram_4004d318(0);
          iVar11 = (iVar6 * 10 + 0x50) / 0xa0;
        }
      }
      iVar5 = iVar5 - iVar16;
      if (iVar5 < 1) {
        iVar12 = iVar12 + *(int *)(param_1 + 0x14);
        iVar5 = *(int *)(param_1 + 0x1c);
        if (iVar4 == 1) {
          *param_2 = iVar12 + iVar3 + -1;
          param_2[2] = iVar5 - iVar13;
        }
        else {
          *param_2 = iVar12;
          param_2[2] = ((iVar5 - iVar13) - iVar3) + -1;
        }
      }
      else {
        iVar10 = iVar10 - iVar11;
        if (iVar5 == 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = (iVar8 * iVar10) / iVar5;
        }
        iVar6 = (iVar10 - iVar5) + *(int *)(param_1 + 0x14);
        iVar5 = iVar6 + iVar12;
        if (iVar4 == 1) {
          *param_2 = iVar5 + iVar3;
          param_2[2] = iVar5 + iVar3 + iVar11 + -1;
          if (iVar6 < *(int *)(param_1 + 0x14)) {
            iVar3 = *(int *)(param_1 + 0x14) + iVar12 + iVar3;
            *param_2 = iVar3;
            iVar4 = FUN_ram_4004d318(0);
            iVar5 = 1;
            if (0xef < iVar4 * 10) {
              iVar4 = FUN_ram_4004d318(0);
              iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
            }
            if (param_2[2] < iVar5 + iVar3) {
              iVar5 = *param_2;
              iVar3 = FUN_ram_4004d318(0);
              iVar4 = 1;
              if (0xef < iVar3 * 10) {
                iVar3 = FUN_ram_4004d318(0);
                iVar4 = (iVar3 * 10 + 0x50) / 0xa0;
              }
              param_2[2] = iVar4 + iVar5;
            }
          }
          iVar13 = *(int *)(param_1 + 0x1c) - iVar13;
          if (param_2[2] <= iVar13) {
            return;
          }
          param_2[2] = iVar13;
          iVar3 = FUN_ram_4004d318(0);
          iVar4 = 1;
          if (0xef < iVar3 * 10) {
            iVar3 = FUN_ram_4004d318(0);
            iVar4 = (iVar3 * 10 + 0x50) / 0xa0;
          }
          iVar13 = iVar13 - iVar4;
        }
        else {
          *param_2 = iVar5;
          iVar4 = *(int *)(param_1 + 0x14);
          param_2[2] = iVar11 + iVar5 + -1;
          if (iVar6 < iVar4) {
            iVar12 = iVar12 + iVar4;
            *param_2 = iVar12;
            iVar4 = FUN_ram_4004d318(0);
            iVar5 = 1;
            if (0xef < iVar4 * 10) {
              iVar4 = FUN_ram_4004d318(0);
              iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
            }
            if (param_2[2] < iVar5 + iVar12) {
              iVar6 = *param_2;
              iVar4 = FUN_ram_4004d318(0);
              iVar5 = 1;
              if (0xef < iVar4 * 10) {
                iVar4 = FUN_ram_4004d318(0);
                iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
              }
              param_2[2] = iVar5 + iVar6;
            }
          }
          iVar13 = (*(int *)(param_1 + 0x1c) - iVar3) - iVar13;
          if (param_2[2] <= iVar13) {
            return;
          }
          param_2[2] = iVar13;
          iVar3 = FUN_ram_4004d318(0);
          iVar4 = 1;
          if (0xef < iVar3 * 10) {
            iVar3 = FUN_ram_4004d318(0);
            iVar4 = (iVar3 * 10 + 0x50) / 0xa0;
          }
          iVar13 = iVar13 - iVar4;
        }
        if (iVar13 < *param_2) {
          iVar3 = param_2[2];
          iVar4 = FUN_ram_4004d318(0);
          iVar5 = 1;
          if (0xef < iVar4 * 10) {
            iVar4 = FUN_ram_4004d318(0);
            iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
          }
          *param_2 = iVar3 - iVar5;
        }
      }
    }
  }
  return;
}


