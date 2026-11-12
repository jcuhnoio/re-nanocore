/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40045000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4004500e.
 * REA evidence: ev_107b6306868f4b499d426c9c2c18e529be39b349a64fdf9d75861f8469d0826d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004500e(void)

{
  int iVar1;
  
  if (DAT_ram_3007f940 == '\0') {
    DAT_ram_3007f940 = 1;
    iVar1 = FUN_ram_40047aa2();
    while( true ) {
      if ((*(ushort *)(iVar1 + 0x2a) & 4) == 0) break;
      *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) & 0xfffb;
      FUN_ram_40044f96();
    }
    DAT_ram_3007f940 = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40045054.
 * REA evidence: ev_f71c5bf1a93a22926b742354a81aafb80c6cfac5aa3e91d55dd515b33e0fbeec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40045196) */
/* WARNING: Removing unreachable block (ram,0x400453b6) */
/* WARNING: Removing unreachable block (ram,0x40045262) */
/* WARNING: Removing unreachable block (ram,0x40045266) */
/* WARNING: Removing unreachable block (ram,0x400450fc) */
/* WARNING: Removing unreachable block (ram,0x40045104) */
/* WARNING: Removing unreachable block (ram,0x40045124) */
/* WARNING: Removing unreachable block (ram,0x40045356) */
/* WARNING: Removing unreachable block (ram,0x4004534e) */
/* WARNING: Removing unreachable block (ram,0x400452fe) */
/* WARNING: Removing unreachable block (ram,0x400452f6) */
/* WARNING: Removing unreachable block (ram,0x400452c8) */
/* WARNING: Removing unreachable block (ram,0x400452c4) */
/* WARNING: Removing unreachable block (ram,0x40045144) */
/* WARNING: Removing unreachable block (ram,0x40045148) */
/* WARNING: Removing unreachable block (ram,0x400453be) */
/* WARNING: Removing unreachable block (ram,0x400451de) */
/* WARNING: Removing unreachable block (ram,0x4004511c) */

void FUN_ram_40045054(int param_1,int param_2,int param_3,uint param_4,uint param_5)

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
  
  FUN_ram_4004500e();
  if (param_2 == 0) {
    param_2 = FUN_ram_40047b04(param_1);
  }
  iVar1 = FUN_ram_40047b04(param_1);
  iVar2 = FUN_ram_40043cb0();
  iVar3 = FUN_ram_40043ea6(iVar1);
  uVar4 = FUN_ram_40043cb0(param_2);
  uVar5 = FUN_ram_40043ea6(param_2);
  if (param_3 == 0) {
    iVar6 = FUN_ram_40043c98(param_2);
    if (iVar6 != 1) goto switchD_ram_400450ea_caseD_0;
switchD_ram_400450ea_caseD_2:
    iVar6 = FUN_ram_4004410a(param_2);
    iVar7 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
LAB_ram_4004514c:
    uVar4 = uVar4 + (iVar6 - iVar7);
    goto switchD_ram_400450ea_caseD_0;
  }
  switch(param_3 - 1U & 0xff) {
  case 0:
    goto switchD_ram_400450ea_caseD_0;
  case 1:
    iVar6 = FUN_ram_4004410a(param_2);
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    iVar6 = iVar6 / 2;
    goto LAB_ram_4004514c;
  case 2:
    goto switchD_ram_400450ea_caseD_2;
  case 3:
    goto switchD_ram_400450ea_caseD_3;
  case 4:
    iVar6 = FUN_ram_4004410a(param_2);
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    iVar6 = iVar6 / 2;
    goto LAB_ram_4004526a;
  case 5:
    iVar6 = FUN_ram_4004410a(param_2);
    iVar7 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
LAB_ram_4004526a:
    uVar4 = uVar4 + (iVar6 - iVar7);
switchD_ram_400450ea_caseD_3:
    iVar6 = FUN_ram_40044138(param_2);
    iVar7 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
    break;
  case 7:
    iVar6 = FUN_ram_4004410a(param_2);
    uVar4 = uVar4 + (iVar6 - ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1));
  case 6:
    iVar6 = FUN_ram_40044138(param_2);
    iVar7 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) / 2;
    iVar6 = iVar6 / 2;
    break;
  case 8:
    iVar6 = FUN_ram_4004410a(param_2);
    uVar4 = uVar4 + (iVar6 / 2 - ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2);
    iVar6 = FUN_ram_40044138(param_2);
    iVar6 = iVar6 / 2;
    iVar7 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) / 2;
    break;
  case 9:
    uVar5 = ~(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    goto LAB_ram_400452dc;
  case 10:
    iVar6 = ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1) / 2;
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    goto LAB_ram_40045302;
  case 0xb:
    iVar6 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14);
    iVar7 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
LAB_ram_40045302:
    uVar4 = iVar6 - iVar7;
    uVar5 = ~(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    goto switchD_ram_400450ea_caseD_0;
  case 0xc:
    uVar5 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1;
    goto LAB_ram_400452dc;
  case 0xd:
    iVar6 = ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1) / 2;
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    goto LAB_ram_4004535a;
  case 0xe:
    iVar6 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14);
    iVar7 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
LAB_ram_4004535a:
    uVar4 = iVar6 - iVar7;
    uVar5 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1;
    goto switchD_ram_400450ea_caseD_0;
  case 0xf:
    uVar4 = ~(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    goto LAB_ram_4004538e;
  case 0x10:
    uVar4 = ~(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    goto LAB_ram_400453a0;
  case 0x11:
    uVar4 = ~(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    goto LAB_ram_400453d4;
  case 0x12:
    uVar4 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1;
LAB_ram_4004538e:
    uVar5 = 0;
    goto switchD_ram_400450ea_caseD_0;
  case 0x13:
    uVar4 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1;
LAB_ram_400453a0:
    iVar6 = ((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1) / 2;
    iVar7 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) / 2;
LAB_ram_400453c2:
    uVar5 = iVar6 - iVar7;
    goto switchD_ram_400450ea_caseD_0;
  case 0x14:
    uVar4 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1;
LAB_ram_400453d4:
    iVar6 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18);
    iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    goto LAB_ram_400453c2;
  default:
    uVar5 = 0;
LAB_ram_400452dc:
    uVar4 = 0;
    goto switchD_ram_400450ea_caseD_0;
  }
  uVar5 = uVar5 + (iVar6 - iVar7);
switchD_ram_400450ea_caseD_0:
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
  iVar6 = FUN_ram_40043c98(iVar1);
  iVar9 = *(int *)(param_2 + 0x14);
  iVar7 = *(int *)(iVar1 + 0x14);
  if (iVar6 == 1) {
    iVar6 = FUN_ram_400457a4(iVar1);
  }
  else {
    iVar6 = FUN_ram_400456b4(iVar1);
  }
  iVar10 = *(int *)(param_2 + 0x18);
  iVar11 = *(int *)(iVar1 + 0x18);
  iVar1 = thunk_FUN_ram_400455e8(iVar1);
  FUN_ram_400478c2(param_1,1,0);
  FUN_ram_40043faa(param_1,uVar4 + ((((param_4 + iVar9) - iVar7) + iVar6) - iVar2),
                   uVar5 + ((iVar1 + ((param_5 + iVar10) - iVar11)) - iVar3));
  return;
}


/* NanoCore 1.10, address 0x4004541e.
 * REA evidence: ev_c238cdf0e9fb1d696efafc392a0663c1f31b68cd1d4164af4c49f8c2ee463351
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4004541e(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_ram_40046afe(param_1,param_2,0x27);
  return uVar1;
}


/* NanoCore 1.10, address 0x4004543e.
 * REA evidence: ev_d1b8e8da4c6d8029e3cc4c10a7d837e784b4deb39b27ec9287beb138e29bb24b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004543e(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40046afe(param_1,0,0x12);
  iVar2 = FUN_ram_40046afe(param_1,0,0x30);
  uVar3 = FUN_ram_40046afe(param_1,0,0x34);
  if ((uVar3 & 4) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40045486.
 * REA evidence: ev_8572c06806721a393a325f15ca3831b1cae56c9c462d58c6a8dce836d499c5ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40045486(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40046afe(param_1,0,0x11);
  iVar2 = FUN_ram_40046afe(param_1,0,0x30);
  uVar3 = FUN_ram_40046afe(param_1,0,0x34);
  if ((uVar3 & 1) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400454ce.
 * REA evidence: ev_2b3917fff4b1b696a8f284f782f3e885112f5bb8e03bdc05e7a9a9ad69697426
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400454ce(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40046afe(param_1,0,0x10);
  iVar2 = FUN_ram_40046afe(param_1,0,0x30);
  uVar3 = FUN_ram_40046afe(param_1,0,0x34);
  if ((uVar3 & 2) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40045516.
 * REA evidence: ev_a01a50dc6c86befb4335ced630b1f8c2fcf99cd832d8f4f52077c3e822852c34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40045516(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40046afe(param_1,0,0x13);
  iVar2 = FUN_ram_40046afe(param_1,0,0x30);
  uVar3 = FUN_ram_40046afe(param_1,0,0x34);
  if ((uVar3 & 8) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004555e.
 * REA evidence: ev_a590b28455c707069efdcd83adcf79deaf53e9724a4df3849438bf70a157930c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004555e(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_ram_40043102();
  iVar1 = *(int *)(param_1 + 8);
  if ((*(uint *)(iVar1 + 0x28) & 0x3ffff) >> 0x10 != param_2) {
    *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) & 0xfffc | (ushort)param_2 & 3;
    FUN_ram_40044572();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40045598.
 * REA evidence: ev_080381102c6472c67dc6dbb80d00db48e5073b56902db054b5fea4d8ec102410
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40045598(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0x3ffff) >> 0x10;
  }
  return 3;
}


/* NanoCore 1.10, address 0x400455a8.
 * REA evidence: ev_31dc9ae49a970999776f9aaa27e7944fc8d09aa17a6fc3b31a10f76e5a3b48c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400455a8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0x3ffffff) >> 0x16;
  }
  return 0xf;
}


/* NanoCore 1.10, address 0x400455b8.
 * REA evidence: ev_6c8560fb0e1a79201c803e3b1d6b4b86bc2bcc1f7729cd36d34e5825aa6333a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400455b8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0xfffff) >> 0x12;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400455c8.
 * REA evidence: ev_35ddccd5046bb467f90dbc98b06c8ed8708a9e3a28f28ffd17854f24afff2c79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400455c8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0x3fffff) >> 0x14;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400455d8.
 * REA evidence: ev_b8888804e88a4fab2b7911e93cabb53637278dab633b0dd23853ba3afedeb7e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400455d8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return -*(int *)(*(int *)(param_1 + 8) + 0x18);
  }
  return 0;
}


/* NanoCore 1.10, address 0x400455e8.
 * REA evidence: ev_3ccdb3517909f1152f1c233de7d198f65044884fbfe54c0c54ad76231516d6d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400455e8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return -*(int *)(*(int *)(param_1 + 8) + 0x1c);
  }
  return 0;
}


/* NanoCore 1.10, address 0x400455f8.
 * REA evidence: ev_15469cd2541ef43f5d5aed73862886300a02b51821f3ec06164a87100b7222b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_400455e8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return -*(int *)(*(int *)(param_1 + 8) + 0x1c);
  }
  return 0;
}


/* NanoCore 1.10, address 0x400455fc.
 * REA evidence: ev_2ff5c381fe287f14581951a93ceb64ff14a347a8eab4f12ca8602ce4f648e35e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400455fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_ram_40047b2c();
  iVar1 = -0x1fffffff;
  for (iVar6 = 0; iVar6 != iVar2; iVar6 = iVar6 + 1) {
    iVar3 = *(int *)(**(int **)(param_1 + 8) + iVar6 * 4);
    iVar5 = FUN_ram_40042c2c(iVar3,0x40001);
    if (iVar5 == 0) {
      iVar4 = *(int *)(iVar3 + 0x20);
      iVar5 = FUN_ram_40046afe(iVar3,0,0x19);
      iVar5 = iVar5 + iVar4;
      if (iVar1 < iVar5) {
        iVar1 = iVar5;
      }
    }
  }
  iVar2 = FUN_ram_400454ce(param_1);
  iVar6 = FUN_ram_40045486(param_1);
  if (iVar1 != -0x1fffffff) {
    iVar1 = iVar1 - (*(int *)(param_1 + 0x20) - iVar6);
  }
  iVar3 = FUN_ram_400441da(param_1);
  iVar4 = FUN_ram_400440fe(param_1);
  iVar5 = FUN_ram_400455e8(param_1);
  iVar5 = (iVar3 - ((iVar4 - iVar2) - iVar6)) - iVar5;
  if (iVar5 <= iVar1) {
    iVar5 = iVar1;
  }
  return iVar5;
}


/* NanoCore 1.10, address 0x400456b4.
 * REA evidence: ev_c4ed1fcbbbcccd65928426b4b328ed477bf3c353651425baa430ef02b66d6ebb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400456b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_ram_4004541e(param_1,0);
  if (iVar2 == 1) {
    iVar3 = FUN_ram_40045516(param_1);
    iVar4 = FUN_ram_4004543e(param_1);
    iVar5 = FUN_ram_40047b2c(param_1);
    iVar2 = 0x1fffffff;
    for (iVar1 = 0; iVar5 != iVar1; iVar1 = iVar1 + 1) {
      iVar7 = *(int *)(**(int **)(param_1 + 8) + iVar1 * 4);
      iVar6 = FUN_ram_40042c2c(iVar7,0x40001);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar7 + 0x14);
        iVar7 = FUN_ram_40046afe(iVar7,0,0x1a);
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
    iVar5 = FUN_ram_400441ba(param_1);
    iVar6 = FUN_ram_400440f2(param_1);
    iVar1 = FUN_ram_400455d8(param_1);
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


/* NanoCore 1.10, address 0x400457a4.
 * REA evidence: ev_ade989993ed6b3b83622198386d78cea90f4754d65d285175f858bc915a7ee0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400457a4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_ram_4004541e(param_1,0);
  if (iVar2 == 1) {
    iVar6 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x18);
    }
  }
  else {
    iVar3 = FUN_ram_40047b2c(param_1);
    iVar2 = -0x1fffffff;
    for (iVar1 = 0; iVar3 != iVar1; iVar1 = iVar1 + 1) {
      iVar4 = *(int *)(**(int **)(param_1 + 8) + iVar1 * 4);
      iVar6 = FUN_ram_40042c2c(iVar4,0x40001);
      if (iVar6 == 0) {
        iVar5 = *(int *)(iVar4 + 0x1c);
        iVar6 = FUN_ram_40046afe(iVar4,0,0x1b);
        iVar6 = iVar6 + iVar5;
        if (iVar2 < iVar6) {
          iVar2 = iVar6;
        }
      }
    }
    iVar1 = FUN_ram_40045516(param_1);
    iVar3 = FUN_ram_4004543e(param_1);
    if (iVar2 != -0x1fffffff) {
      iVar2 = iVar2 - (*(int *)(param_1 + 0x1c) - iVar1);
    }
    iVar4 = FUN_ram_400441ba(param_1);
    iVar5 = FUN_ram_400440f2(param_1);
    iVar6 = FUN_ram_400455d8(param_1);
    iVar6 = (iVar4 - ((iVar5 - iVar1) - iVar3)) - iVar6;
    if (iVar6 < iVar2) {
      iVar6 = iVar2;
    }
  }
  return iVar6;
}


/* NanoCore 1.10, address 0x4004587e.
 * REA evidence: ev_f4b887a8060fdc00031352eac2b450e70eddd36d157825562570fda62ccb3e64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004587e(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 != 0 || param_3 != 0) {
    FUN_ram_40043102();
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_2;
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + param_3;
    FUN_ram_40044242(param_1,param_2,param_3,1);
    iVar1 = FUN_ram_40043bde(param_1,0xc,0);
    if (iVar1 == 1) {
      FUN_ram_40044572(param_1);
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400458d6.
 * REA evidence: ev_efcf0572830b3e0d0bd8117481afa7ba1cee6bef8b4cf76d819ac0d5cb4f38cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400458d6(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_400455e8();
  FUN_ram_4004587e(param_1,0,iVar1 + param_2);
  return;
}


/* NanoCore 1.10, address 0x400458f8.
 * REA evidence: ev_3abde89be351829699cb66e1a8b3202f16406628c6613daaa7cad6859ee5fc26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400458f8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_400455d8();
  FUN_ram_4004587e(param_1,param_2 + iVar1,0);
  return;
}


/* NanoCore 1.10, address 0x40045918.
 * REA evidence: ev_97fe767584f73466439ce6b2fa6fc613fb70c9195e4dcf94f55a4a61d8c23157
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045918(undefined4 param_1,int param_2,int param_3,int param_4)

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
    uVar1 = FUN_ram_40047aae();
    FUN_ram_400491e2(&uStack_78);
    puStack_68 = &LAB_ram_40045434;
    uStack_78 = param_1;
    if (param_2 != 0) {
      iVar2 = FUN_ram_4004c26a(uVar1);
      uStack_48 = FUN_ram_40049394(iVar2 >> 1,200,400);
      iStack_4c = FUN_ram_400455d8(param_1);
      iStack_54 = -iStack_4c;
      uStack_50 = 0x80000000;
      iStack_4c = param_2 - iStack_4c;
      pcStack_74 = FUN_ram_400458f8;
      puStack_58 = &LAB_ram_400493e8;
      iVar2 = FUN_ram_40043bde(param_1,9,&uStack_78);
      if (iVar2 != 1) {
        return;
      }
      FUN_ram_40049228(&uStack_78);
    }
    if (param_3 != 0) {
      iVar2 = FUN_ram_4004c28c(uVar1);
      uStack_48 = FUN_ram_40049394(iVar2 >> 1,200,400);
      iStack_4c = FUN_ram_400455e8(param_1);
      iStack_54 = -iStack_4c;
      uStack_50 = 0x80000000;
      iStack_4c = param_3 - iStack_4c;
      pcStack_74 = FUN_ram_400458d6;
      puStack_58 = &LAB_ram_400493e8;
      iVar2 = FUN_ram_40043bde(param_1,9,&uStack_78);
      if (iVar2 == 1) {
        FUN_ram_40049228(&uStack_78);
      }
    }
  }
  else {
    FUN_ram_400492c8(param_1,FUN_ram_400458d6);
    FUN_ram_400492c8(param_1,FUN_ram_400458f8);
    iVar2 = FUN_ram_40043bde(param_1,9,0);
    if ((iVar2 == 1) && (iVar2 = FUN_ram_4004587e(param_1,param_2,param_3), iVar2 == 1)) {
      FUN_ram_40043bde(param_1,0xb,0);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40045a68.
 * REA evidence: ev_e6c1fc544d7f81e375a932abe84dace407924695b404493f84931467c0226066
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045a68(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_ram_4004500e();
  iVar3 = FUN_ram_400455d8(param_1);
  param_2 = param_2 - iVar3;
  iVar4 = FUN_ram_4004541e(param_1,0);
  iVar2 = 0;
  if (iVar4 == 1) {
    if (param_2 < 1) goto LAB_ram_40045ace;
    iVar2 = FUN_ram_400456b4(param_1);
    iVar4 = FUN_ram_400457a4(param_1);
    iVar2 = iVar2 + iVar4;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    bVar1 = param_2 < iVar2;
  }
  else {
    if (-1 < param_2) goto LAB_ram_40045ace;
    iVar2 = FUN_ram_400456b4(param_1);
    iVar4 = FUN_ram_400457a4(param_1);
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
LAB_ram_40045ace:
  iVar5 = FUN_ram_400455e8(param_1);
  param_3 = param_3 - iVar5;
  iVar4 = 0;
  if (param_3 < 0) {
    iVar6 = FUN_ram_400455fc(param_1);
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
    FUN_ram_40045918(param_1,iVar3 + iVar2,iVar4 + iVar5,param_4);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40045b54.
 * REA evidence: ev_ab9f632c2bebc730e9b8e3986f3c537268c42412974846c4817faaeacb5262e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045b54(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_400492c8(param_1,FUN_ram_400458f8);
  iVar1 = FUN_ram_400455d8(param_1);
  FUN_ram_40045a68(param_1,iVar1 - param_2,0,param_3);
  return;
}


/* NanoCore 1.10, address 0x40045b8a.
 * REA evidence: ev_4e3ea43db5cf44032eceef87fb5e7ca67dfdfc8fb08b3749eb473ff8b0421fa3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045b8a(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_400492c8(param_1,FUN_ram_400458d6);
  iVar1 = FUN_ram_400455e8(param_1);
  FUN_ram_40045a68(param_1,0,iVar1 - param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40045bc0.
 * REA evidence: ev_fbade1a2e660e1b97e2f8f273f5fd0f7b96cb63f879be09831332401da7b8d44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40045e30) */
/* WARNING: Removing unreachable block (ram,0x40045de4) */
/* WARNING: Removing unreachable block (ram,0x40045dec) */
/* WARNING: Removing unreachable block (ram,0x40045e38) */

void FUN_ram_40045bc0(int *param_1,int param_2,int *param_3,int param_4)

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
  
  iVar2 = FUN_ram_40047b04(param_2);
  iVar3 = FUN_ram_40042c20(iVar2,0x10);
  if (iVar3 == 0) {
    return;
  }
  uVar4 = FUN_ram_400455a8(iVar2);
  iVar3 = FUN_ram_400455c8(iVar2);
  piVar11 = param_1;
  if (iVar3 != 0) {
    piVar11 = (int *)(param_2 + 0x14);
  }
  iVar5 = FUN_ram_400454ce(iVar2);
  iVar6 = FUN_ram_40045486(iVar2);
  iVar9 = param_3[1];
  iVar10 = (*(int *)(iVar2 + 0x20) - iVar6) - piVar11[3];
  iVar8 = iVar9 - iVar10;
  iVar1 = ((*(int *)(iVar2 + 0x18) + iVar5) - piVar11[1]) - iVar9;
  iVar7 = FUN_ram_400440fe(iVar2);
  if (iVar1 < 0) {
    if (0 < iVar8) {
      iVar1 = iVar10 - iVar9;
      iVar8 = FUN_ram_400455fc(iVar2);
      iVar8 = iVar8 + iVar1;
      goto LAB_ram_40045c66;
    }
LAB_ram_40045c6a:
    iVar1 = 0;
  }
  else {
    if ((-1 < iVar8) || (iVar1 == 0)) goto LAB_ram_40045c6a;
    iVar8 = FUN_ram_400455e8(iVar2);
    iVar8 = iVar8 - iVar1;
LAB_ram_40045c66:
    if (iVar8 < 0) goto LAB_ram_40045c6a;
  }
  if (iVar3 == 2) {
    iVar3 = piVar11[3];
    iVar1 = *(int *)(iVar2 + 0x20) - iVar6;
LAB_ram_40045dc8:
    iVar1 = iVar1 - iVar3;
  }
  else {
    if (iVar3 == 3) {
      iVar1 = ((iVar7 - iVar5) - iVar6) / 2 + iVar5 + *(int *)(iVar2 + 0x18);
      iVar3 = ((piVar11[3] - piVar11[1]) + 1) / 2 + piVar11[1];
      goto LAB_ram_40045dc8;
    }
    if (iVar3 == 1) {
      iVar1 = (iVar5 + *(int *)(iVar2 + 0x18)) - piVar11[1];
    }
  }
  iVar3 = FUN_ram_400455b8(iVar2);
  if (iVar3 != 0) {
    param_1 = (int *)(param_2 + 0x14);
  }
  iVar6 = FUN_ram_4004543e(iVar2);
  iVar7 = FUN_ram_40045516(iVar2);
  iVar9 = *param_3;
  iVar5 = ((*(int *)(iVar2 + 0x14) + iVar6) - *param_1) - iVar9;
  iVar10 = (*(int *)(iVar2 + 0x1c) - iVar7) - param_1[2];
  iVar8 = iVar9 - iVar10;
  if (iVar5 < 0) {
    if (0 < iVar8) {
      iVar5 = iVar10 - iVar9;
      iVar8 = FUN_ram_400457a4(iVar2);
      iVar8 = iVar8 + iVar5;
      goto LAB_ram_40045cde;
    }
LAB_ram_40045ce2:
    iVar5 = 0;
  }
  else {
    if ((-1 < iVar8) || (iVar5 == 0)) goto LAB_ram_40045ce2;
    iVar8 = FUN_ram_400456b4(iVar2);
    iVar8 = iVar8 - iVar5;
LAB_ram_40045cde:
    if (iVar8 < 0) goto LAB_ram_40045ce2;
  }
  iVar8 = FUN_ram_400440f2(iVar2);
  if (iVar3 == 2) {
    iVar3 = param_1[2];
    iVar5 = *(int *)(iVar2 + 0x1c) - iVar7;
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 == 1) {
        iVar5 = (iVar6 + *(int *)(iVar2 + 0x14)) - *param_1;
      }
      goto LAB_ram_40045d0a;
    }
    iVar5 = ((iVar8 - iVar6) - iVar7) / 2 + iVar6 + *(int *)(iVar2 + 0x14);
    iVar3 = ((param_1[2] - *param_1) + 1) / 2 + *param_1;
  }
  iVar5 = iVar5 - iVar3;
LAB_ram_40045d0a:
  iVar3 = FUN_ram_400492c8(iVar2,FUN_ram_400458d6);
  iVar6 = FUN_ram_400492c8(iVar2,FUN_ram_400458f8);
  if (((iVar3 != 0) || (iVar6 != 0)) && (iVar3 = FUN_ram_40043bde(iVar2,0xb,0), iVar3 != 1)) {
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
  FUN_ram_40045918(iVar2,iVar5,iVar1,param_4);
  return;
}


/* NanoCore 1.10, address 0x40045e78.
 * REA evidence: ev_c99384d6fdc429e4a6c917a4cdf712e7fd9af16e560f482bda0be159930168d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045e78(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_4004500e();
  uStack_18 = 0;
  uStack_14 = 0;
  iVar2 = FUN_ram_40047b04(param_1);
  iVar3 = param_1;
  while (iVar1 = iVar2, iVar1 != 0) {
    FUN_ram_40045bc0(param_1 + 0x14,iVar3,&uStack_18,param_2);
    iVar2 = FUN_ram_40047b04(iVar1);
    iVar3 = iVar1;
  }
  return;
}


/* NanoCore 1.10, address 0x40045ebe.
 * REA evidence: ev_2472051495f73382bcd9bc000c207b0162d885b07d02d3a237120d9cdc054495
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40046560) */
/* WARNING: Removing unreachable block (ram,0x400464e4) */
/* WARNING: Removing unreachable block (ram,0x40046422) */
/* WARNING: Removing unreachable block (ram,0x400460a2) */
/* WARNING: Removing unreachable block (ram,0x40046366) */
/* WARNING: Removing unreachable block (ram,0x400462de) */
/* WARNING: Removing unreachable block (ram,0x4004620e) */
/* WARNING: Removing unreachable block (ram,0x400461dc) */
/* WARNING: Removing unreachable block (ram,0x400462a4) */
/* WARNING: Removing unreachable block (ram,0x4004632a) */
/* WARNING: Removing unreachable block (ram,0x40046072) */
/* WARNING: Removing unreachable block (ram,0x400463ea) */
/* WARNING: Removing unreachable block (ram,0x40046462) */
/* WARNING: Removing unreachable block (ram,0x4004651c) */
/* WARNING: Removing unreachable block (ram,0x4004649a) */

void FUN_ram_40045ebe(int param_1,int *param_2,int *param_3)

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
  
  FUN_ram_4004942c(param_2,0,0,0xffffffff,0xffffffff);
  FUN_ram_4004942c(param_3,0,0,0xffffffff,0xffffffff);
  uVar2 = FUN_ram_40042c20(param_1,0x10);
  if (uVar2 == 0) {
    return;
  }
  iVar3 = FUN_ram_40045598(param_1);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = FUN_ram_40055d40(0);
  if (iVar3 == 2) {
    while( true ) {
      if (iVar4 == 0) {
        return;
      }
      iVar5 = FUN_ram_40055d8a(iVar4);
      if (param_1 == iVar5) break;
      iVar4 = FUN_ram_40055d40(iVar4);
    }
  }
  iVar5 = FUN_ram_400455e8(param_1);
  iVar6 = FUN_ram_400455fc(param_1);
  iVar7 = FUN_ram_400456b4(param_1);
  iVar8 = FUN_ram_400457a4(param_1);
  uVar9 = FUN_ram_400455a8(param_1);
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
        iVar10 = FUN_ram_40055d70(iVar4);
        uVar21 = (uint)(iVar10 == 0xc);
      }
    }
  }
  if ((uVar9 & 3) != 0) {
    if (iVar3 == 1) goto LAB_ram_40045f7c;
    if (iVar3 == 3) {
      if ((0 < iVar7) || (0 < iVar8)) goto LAB_ram_40045f7c;
    }
    else if ((iVar3 == 2) && (iVar3 = FUN_ram_40055d70(iVar4), iVar3 == 3)) goto LAB_ram_40045f7c;
  }
  uVar2 = 0;
  if (uVar21 == 0) {
    return;
  }
LAB_ram_40045f7c:
  iVar4 = FUN_ram_4004541e(param_1,0x10000);
  iVar10 = FUN_ram_40046afe(param_1,0x10000,0x10);
  iVar11 = FUN_ram_40046afe(param_1,0x10000,0x11);
  iVar12 = FUN_ram_40046afe(param_1,0x10000,0x12);
  iVar13 = FUN_ram_40046afe(param_1,0x10000,0x13);
  iVar14 = FUN_ram_40046afe(param_1,0x10000,1);
  iVar15 = FUN_ram_400440fe(param_1);
  iVar16 = FUN_ram_400440f2(param_1);
  iVar3 = iVar14;
  if (uVar21 == 0) {
    iVar3 = 0;
  }
  iStack_6c = iVar14;
  if (uVar2 == 0) {
    iStack_6c = 0;
  }
  bVar1 = FUN_ram_40046afe(param_1,0x10000,0x1d);
  if ((1 < bVar1) || (bVar1 = FUN_ram_40046afe(param_1,0x10000,0x32), 1 < bVar1)) {
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
      iVar17 = FUN_ram_4004c2ae(0);
      iVar18 = 1;
      if (0xef < iVar17 * 10) {
        iVar17 = FUN_ram_4004c2ae(0);
        iVar18 = (iVar17 * 10 + 0x50) / 0xa0;
      }
      if (iVar20 <= iVar18) {
        iVar17 = FUN_ram_4004c2ae(0);
        iVar20 = 1;
        if (0xef < iVar17 * 10) {
          iVar20 = FUN_ram_4004c2ae(0);
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
          iVar5 = FUN_ram_4004c2ae(0);
          iVar6 = 1;
          if (0xef < iVar5 * 10) {
            iVar5 = FUN_ram_4004c2ae(0);
            iVar6 = (iVar5 * 10 + 0x50) / 0xa0;
          }
          if (param_3[3] < iVar10 + iVar6) {
            iVar10 = param_3[1];
            iVar5 = FUN_ram_4004c2ae(0);
            iVar6 = 1;
            if (0xef < iVar5 * 10) {
              iVar5 = FUN_ram_4004c2ae(0);
              iVar6 = (iVar5 * 10 + 0x50) / 0xa0;
            }
            param_3[3] = iVar6 + iVar10;
          }
        }
        iVar5 = (*(int *)(param_1 + 0x20) - iStack_6c) - iVar11;
        if (iVar5 < param_3[3]) {
          param_3[3] = iVar5;
          iVar6 = FUN_ram_4004c2ae(0);
          iVar10 = 1;
          if (0xef < iVar6 * 10) {
            iVar6 = FUN_ram_4004c2ae(0);
            iVar10 = (iVar6 * 10 + 0x50) / 0xa0;
          }
          if (iVar5 - iVar10 < param_3[1]) {
            iVar10 = param_3[3];
            iVar5 = FUN_ram_4004c2ae(0);
            iVar6 = 1;
            if (0xef < iVar5 * 10) {
              iVar5 = FUN_ram_4004c2ae(0);
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
      iVar6 = FUN_ram_4004c2ae(0);
      iVar7 = 1;
      if (iVar5 == 0) {
        iVar11 = -1;
      }
      else {
        iVar11 = (iVar16 * iVar10) / iVar5;
      }
      if (0xef < iVar6 * 10) {
        iVar6 = FUN_ram_4004c2ae(0);
        iVar7 = (iVar6 * 10 + 0x50) / 0xa0;
      }
      if (iVar11 <= iVar7) {
        iVar6 = FUN_ram_4004c2ae(0);
        iVar11 = 1;
        if (0xef < iVar6 * 10) {
          iVar6 = FUN_ram_4004c2ae(0);
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
            iVar4 = FUN_ram_4004c2ae(0);
            iVar5 = 1;
            if (0xef < iVar4 * 10) {
              iVar4 = FUN_ram_4004c2ae(0);
              iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
            }
            if (param_2[2] < iVar5 + iVar3) {
              iVar5 = *param_2;
              iVar3 = FUN_ram_4004c2ae(0);
              iVar4 = 1;
              if (0xef < iVar3 * 10) {
                iVar3 = FUN_ram_4004c2ae(0);
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
          iVar3 = FUN_ram_4004c2ae(0);
          iVar4 = 1;
          if (0xef < iVar3 * 10) {
            iVar3 = FUN_ram_4004c2ae(0);
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
            iVar4 = FUN_ram_4004c2ae(0);
            iVar5 = 1;
            if (0xef < iVar4 * 10) {
              iVar4 = FUN_ram_4004c2ae(0);
              iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
            }
            if (param_2[2] < iVar5 + iVar12) {
              iVar6 = *param_2;
              iVar4 = FUN_ram_4004c2ae(0);
              iVar5 = 1;
              if (0xef < iVar4 * 10) {
                iVar4 = FUN_ram_4004c2ae(0);
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
          iVar3 = FUN_ram_4004c2ae(0);
          iVar4 = 1;
          if (0xef < iVar3 * 10) {
            iVar3 = FUN_ram_4004c2ae(0);
            iVar4 = (iVar3 * 10 + 0x50) / 0xa0;
          }
          iVar13 = iVar13 - iVar4;
        }
        if (iVar13 < *param_2) {
          iVar3 = param_2[2];
          iVar4 = FUN_ram_4004c2ae(0);
          iVar5 = 1;
          if (0xef < iVar4 * 10) {
            iVar4 = FUN_ram_4004c2ae(0);
            iVar5 = (iVar4 * 10 + 0x50) / 0xa0;
          }
          *param_2 = iVar3 - iVar5;
        }
      }
    }
  }
  return;
}


