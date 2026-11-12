/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40044000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40044038.
 * REA evidence: ev_a9d3807536e59c328ed7b765cb7bfb13e0db0b75cf6f543db4897428edc5e149
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044038(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40043fc4();
  FUN_ram_40043ffe(param_1,param_3);
  return;
}


/* NanoCore 1.10, address 0x40044052.
 * REA evidence: ev_cff2a0e8bf0d5a0d33b79807503945300fb42d961ac7be35556be9d49d7a2e98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40044052(undefined4 param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40042c2c(param_1,0x60001);
  if ((iVar3 == 0) && (iVar3 = FUN_ram_40047b04(param_1), iVar3 != 0)) {
    sVar2 = FUN_ram_40046afe(iVar3,0,0x16);
    bVar1 = sVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4004408a.
 * REA evidence: ev_2003bf45373928cb623c210475e96c035b7ca013812c08f3e7d9b3065ac6f869
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004408a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 1;
  iVar1 = FUN_ram_40047aa2();
  *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) | 4;
  uVar2 = FUN_ram_40047aae();
  FUN_ram_4004c42e(uVar2,0x33,0);
  return;
}


/* NanoCore 1.10, address 0x400440bc.
 * REA evidence: ev_925b1a0e89f12627fb375d679cfe83dc0836901370c53c8bcd48ea535ffcee0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400440bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_ram_400478c2(param_1,param_2,0);
  FUN_ram_40043faa(param_1,param_3,param_4);
  return;
}


/* NanoCore 1.10, address 0x400440e0.
 * REA evidence: ev_3746d426c7b7b1fb32cdee364b47577889edd1724f22aae7e9b2703f4c2eca47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400440e0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* NanoCore 1.10, address 0x400440f2.
 * REA evidence: ev_52c7777fc9dafd39ce675a626dcdff8e1c86b3f09fa76360750f3cf68753f7b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400440f2(int param_1)

{
  return (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
}


/* NanoCore 1.10, address 0x400440fe.
 * REA evidence: ev_43f45d496f4f971dc24f8e2510a3ed6c2d3134a6183536da150551d2db95fad3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400440fe(int param_1)

{
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
}


/* NanoCore 1.10, address 0x4004410a.
 * REA evidence: ev_c2061182629d7b1889a4c6d8eff473a2a5e1d0eb2ab91e905b9106b882947568
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004410a(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40043cb0();
  iVar2 = FUN_ram_40043eee(param_1);
  return (((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) - iVar1) - iVar2;
}


/* NanoCore 1.10, address 0x40044138.
 * REA evidence: ev_6016af4d21ad313c9d285dcc08d18b0c20789847b313d68a407566919dc8d321
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044138(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40043ea6();
  iVar2 = FUN_ram_40043e5e(param_1);
  return (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) - iVar1) - iVar2;
}


/* NanoCore 1.10, address 0x40044166.
 * REA evidence: ev_467256a7e14b834cb41fa05459b98becc322dcdfc729c1f1131fd3d6cfcfa139
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044166(int param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = *(int *)(param_1 + 0x14);
  param_2[1] = *(int *)(param_1 + 0x18);
  param_2[2] = *(int *)(param_1 + 0x1c);
  param_2[3] = *(int *)(param_1 + 0x20);
  iVar1 = FUN_ram_40043cb0();
  *param_2 = *param_2 + iVar1;
  iVar1 = FUN_ram_40043eee(param_1);
  param_2[2] = param_2[2] - iVar1;
  iVar1 = FUN_ram_40043ea6(param_1);
  param_2[1] = param_2[1] + iVar1;
  iVar1 = FUN_ram_40043e5e(param_1);
  param_2[3] = param_2[3] - iVar1;
  return;
}


/* NanoCore 1.10, address 0x400441ba.
 * REA evidence: ev_04dc9d233a19216e511d6ee9d701d450fba60372d314ee02273d6cf08847051f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400441ba(undefined4 param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0xe0000001;
  FUN_ram_40043bde(param_1,0x2f,&uStack_18);
  return uStack_18;
}


/* NanoCore 1.10, address 0x400441da.
 * REA evidence: ev_2a32a8138ffc942b05a031e079bfdbd9b8d53c48d17721f9456e9e144e28080e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400441da(undefined4 param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0xe0000001;
  uStack_14 = 0;
  FUN_ram_40043bde(param_1,0x2f,&uStack_18);
  return uStack_14;
}


/* NanoCore 1.10, address 0x400441fa.
 * REA evidence: ev_7e78156b37374a6c9eba37873ccec70c25e63220486c9d165ae14ee912a974c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400441fa(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40046afe(param_1,0,1);
  iVar2 = FUN_ram_40046afe(param_1,0,2);
  if ((iVar1 == 0x200007d1) || (uVar3 = 0, iVar2 == 0x200007d1)) {
    FUN_ram_4004408a(param_1);
    uVar3 = 1;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40044242.
 * REA evidence: ev_dd90d67fead5bae34329ec5a92bfe83fd1ec1edfb39a1f473d031246b3e01d6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044242(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_ram_40047b2c();
  for (iVar2 = 0; iVar2 != iVar3; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(**(int **)(param_1 + 8) + iVar2 * 4);
    if ((param_4 == 0) || (iVar4 = FUN_ram_40042c20(iVar1,0x40000), iVar4 == 0)) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + param_2;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_3;
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + param_2;
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + param_3;
      FUN_ram_40044242(iVar1,param_2,param_3,0);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400442be.
 * REA evidence: ev_0146428f4da57e95a2726b149305143ea5784ab580d08a61edd6a12f8a3229a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400442be(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    iVar1 = FUN_ram_40043ad2(param_1);
    if ((param_4 & 2) != 0) break;
    if (iVar1 == 2) {
      FUN_ram_40043cf8(param_1,param_2,param_3,0);
    }
    if ((param_4 & 1) == 0) {
      return;
    }
    param_1 = FUN_ram_40047b04(param_1);
  }
  if ((param_4 & 1) != 0) {
    uVar2 = FUN_ram_40047b04(param_1);
    FUN_ram_400442be(uVar2,param_2,param_3,param_4);
  }
  if (iVar1 != 2) {
    return;
  }
  FUN_ram_40043cf8(param_1,param_2,param_3,1);
  return;
}


/* NanoCore 1.10, address 0x4004435e.
 * REA evidence: ev_c3cc0c94e8fece58bbbcd0c60e43fc74882cd60ad3eac4a0c9a8e98651bc9fc0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004435e(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  local_30 = *param_2;
  iStack_2c = param_2[1];
  iStack_20 = param_2[2] + 1;
  iStack_24 = param_2[3] + 1;
  iStack_28 = local_30;
  iStack_1c = iStack_2c;
  iStack_18 = iStack_20;
  iStack_14 = iStack_24;
  FUN_ram_400442be(param_1,&local_30,4,param_3);
  iVar1 = iStack_20;
  if (iStack_18 <= iStack_20) {
    iVar1 = iStack_18;
  }
  if (iStack_28 < iVar1) {
    iVar1 = iStack_28;
  }
  if (local_30 < iVar1) {
    iVar1 = local_30;
  }
  *param_2 = iVar1;
  if (iStack_18 < iStack_20) {
    iStack_18 = iStack_20;
  }
  if (iStack_18 < iStack_28) {
    iStack_18 = iStack_28;
  }
  if (iStack_18 < local_30) {
    iStack_18 = local_30;
  }
  param_2[2] = iStack_18;
  iVar1 = iStack_1c;
  if (iStack_14 <= iStack_1c) {
    iVar1 = iStack_14;
  }
  if (iStack_24 < iVar1) {
    iVar1 = iStack_24;
  }
  if (iStack_2c < iVar1) {
    iVar1 = iStack_2c;
  }
  param_2[1] = iVar1;
  if (iStack_14 < iStack_1c) {
    iStack_14 = iStack_1c;
  }
  if (iStack_14 < iStack_24) {
    iStack_14 = iStack_24;
  }
  if (iStack_14 < iStack_2c) {
    iStack_14 = iStack_2c;
  }
  param_2[3] = iStack_14;
  return;
}


/* NanoCore 1.10, address 0x40044410.
 * REA evidence: ev_08c5f1a4714ef0b7b1cf4e491accb4515ba2109779ad46de1ee2154f717b669f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044410(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [24];
  
  iVar1 = FUN_ram_40042c20(param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_40047aa2(param_1);
    uVar2 = FUN_ram_40047aae();
    iVar3 = FUN_ram_4004c3d4();
    if ((((iVar1 == iVar3) || (iVar3 = FUN_ram_4004c3e6(uVar2), iVar1 == iVar3)) ||
        (iVar3 = FUN_ram_4004c41c(uVar2), iVar1 == iVar3)) ||
       ((iVar3 = FUN_ram_4004c3f8(uVar2), iVar1 == iVar3 ||
        (iVar3 = FUN_ram_4004c40a(uVar2), iVar1 == iVar3)))) {
      uVar2 = FUN_ram_40043a7e(param_1);
      local_40 = *(undefined4 *)(param_1 + 0x14);
      uStack_3c = *(undefined4 *)(param_1 + 0x18);
      uStack_38 = *(undefined4 *)(param_1 + 0x1c);
      uStack_34 = *(undefined4 *)(param_1 + 0x20);
      FUN_ram_40049460(&local_40,uVar2,uVar2);
      iVar1 = FUN_ram_40049494(param_2,param_2,&local_40);
      if (iVar1 != 0) {
        FUN_ram_4004435e(param_1,param_2,1);
        do {
          param_1 = FUN_ram_40047b04(param_1);
          if (param_1 == 0) {
            return iVar1;
          }
          iVar3 = FUN_ram_40042c20(param_1,1);
          if (iVar3 != 0) {
            return 0;
          }
          FUN_ram_4000305c(auStack_30,param_1 + 0x14,0x10);
          iVar3 = FUN_ram_40042c20(param_1,0x100000);
          if (iVar3 != 0) {
            uVar2 = FUN_ram_40043a7e(param_1);
            FUN_ram_40049460(auStack_30,uVar2,uVar2);
          }
          FUN_ram_4004435e(param_1,auStack_30,1);
          iVar3 = FUN_ram_40049494(param_2,param_2,auStack_30);
        } while (iVar3 != 0);
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004450e.
 * REA evidence: ev_f7aa6d1f98a072ccdb887edf5a53d9f0c3bf03dd53353bca98766cb9b1a4cb35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004450e(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_40047aae();
  iVar1 = FUN_ram_4004c4e6();
  if (iVar1 != 0) {
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar1 = FUN_ram_40044410(param_1,&uStack_20);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 8) != 0) {
        if ((*(ushort *)(*(int *)(param_1 + 8) + 0x2a) & 0xc00) == 0x800) {
          FUN_ram_40049460(&uStack_20,5,5);
        }
      }
      uVar2 = FUN_ram_40047aae(param_1);
      FUN_ram_40048772(uVar2,&uStack_20);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40044572.
 * REA evidence: ev_477950119abed554175bc27cfd99489384cf960cf3ea31f50a97aaf1c37458f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044572(int param_1)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = FUN_ram_40043a7e();
  iStack_1c = *(int *)(param_1 + 0x18) - iStack_14;
  iStack_18 = *(int *)(param_1 + 0x1c) + iStack_14;
  local_20 = *(int *)(param_1 + 0x14) - iStack_14;
  iStack_14 = iStack_14 + *(int *)(param_1 + 0x20);
  FUN_ram_4004450e(param_1,&local_20);
  return;
}


/* NanoCore 1.10, address 0x400446aa.
 * REA evidence: ev_180c9a23dfef6fa3b0fbcde177e65d6b9028ecdc333679f5d46eda8a54165b1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400448e4) */
/* WARNING: Removing unreachable block (ram,0x400448d8) */
/* WARNING: Removing unreachable block (ram,0x400448c6) */
/* WARNING: Removing unreachable block (ram,0x400448a2) */
/* WARNING: Removing unreachable block (ram,0x40044874) */
/* WARNING: Removing unreachable block (ram,0x400447ec) */
/* WARNING: Removing unreachable block (ram,0x40044740) */
/* WARNING: Removing unreachable block (ram,0x40044776) */
/* WARNING: Removing unreachable block (ram,0x40044822) */
/* WARNING: Removing unreachable block (ram,0x40044870) */
/* WARNING: Removing unreachable block (ram,0x400448a6) */
/* WARNING: Removing unreachable block (ram,0x400448ca) */
/* WARNING: Removing unreachable block (ram,0x400448dc) */
/* WARNING: Removing unreachable block (ram,0x400448ea) */

void FUN_ram_400446aa(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 auStack_30 [4];
  
  iVar2 = FUN_ram_40044052();
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_ram_40047b04(param_1);
  uVar3 = FUN_ram_40046afe(param_1,0,8);
  uStack_34 = uVar3;
  uVar4 = FUN_ram_40046afe(param_1,0,9);
  uStack_34 = uVar4;
  if (iVar2 == 0) goto switchD_ram_4004486c_default;
  iVar5 = FUN_ram_4004410a(iVar2);
  iVar6 = FUN_ram_40044138(iVar2);
  if (((uVar3 & 0x60000000) == 0x20000000) && (uVar10 = uVar3 & 0x9fffffff, (int)uVar10 < 0x7d1)) {
    if (1000 < (int)uVar10) {
      uVar10 = 1000 - uVar10;
    }
    uVar3 = (int)(iVar5 * uVar10) / 100;
  }
  if (((uVar4 & 0x60000000) == 0x20000000) && (uVar10 = uVar4 & 0x9fffffff, (int)uVar10 < 0x7d1)) {
    if (1000 < (int)uVar10) {
      uVar10 = 1000 - uVar10;
    }
    uVar4 = (int)(iVar6 * uVar10) / 100;
  }
  uVar10 = FUN_ram_40046afe(param_1,0,0x6a);
  uStack_34 = uVar10;
  uStack_34 = FUN_ram_40046afe(param_1,0,0x6b);
  iVar9 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
  iVar1 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
  if (((uVar10 & 0x60000000) == 0x20000000) && (uVar8 = uVar10 & 0x9fffffff, (int)uVar8 < 0x7d1)) {
    if (1000 < (int)uVar8) {
      uVar8 = 1000 - uVar8;
    }
    uVar10 = (int)(iVar9 * uVar8) / 100;
  }
  uVar8 = uStack_34;
  if (((uStack_34 & 0x60000000) == 0x20000000) &&
     (uVar7 = uStack_34 & 0x9fffffff, (int)uVar7 < 0x7d1)) {
    if (1000 < (int)uVar7) {
      uVar7 = 1000 - uVar7;
    }
    uVar8 = (int)(iVar1 * uVar7) / 100;
  }
  uVar4 = uVar4 + uVar8;
  uStack_34 = FUN_ram_40046afe(param_1,0,10);
  uVar3 = uVar10 + uVar3;
  if ((uStack_34 & 0xff) == 0) {
    iVar2 = FUN_ram_40043c98(iVar2);
    if (iVar2 != 1) goto switchD_ram_4004486c_default;
switchD_ram_4004486c_caseD_1:
    uVar3 = uVar3 + (iVar5 - iVar9);
    goto switchD_ram_4004486c_default;
  }
  switch((uStack_34 & 0xff) - 2 & 0xff) {
  case 0:
    uVar3 = uVar3 + (iVar5 / 2 - iVar9 / 2);
    goto switchD_ram_4004486c_default;
  case 1:
    goto switchD_ram_4004486c_caseD_1;
  case 2:
    break;
  case 3:
    uVar3 = uVar3 + (iVar5 / 2 - iVar9 / 2);
    break;
  case 4:
    uVar3 = uVar3 + (iVar5 - iVar9);
    break;
  case 5:
    goto switchD_ram_4004486c_caseD_5;
  case 6:
    uVar3 = uVar3 + (iVar5 - iVar9);
    goto switchD_ram_4004486c_caseD_5;
  case 7:
    iVar6 = iVar6 / 2;
    uVar3 = uVar3 + (iVar5 / 2 - iVar9 / 2);
    iVar1 = iVar1 / 2;
    break;
  default:
    goto switchD_ram_4004486c_default;
  }
  uVar4 = uVar4 + (iVar6 - iVar1);
switchD_ram_4004486c_default:
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar6 = FUN_ram_40042c20(param_1,0x40000);
    iVar5 = *(int *)(iVar2 + 0x14);
    if (iVar6 == 0) {
      iVar6 = FUN_ram_400455d8(iVar2);
      iVar5 = iVar5 - iVar6;
      iVar6 = *(int *)(iVar2 + 0x18);
      iVar1 = FUN_ram_400455e8(iVar2);
      iVar6 = iVar6 - iVar1;
    }
    else {
      iVar6 = *(int *)(iVar2 + 0x18);
    }
    iVar1 = FUN_ram_40043cb0(iVar2);
    uVar3 = uVar3 + iVar5 + iVar1;
    iVar5 = FUN_ram_40043ea6(iVar2);
    uVar4 = uVar4 + iVar6 + iVar5;
  }
  iVar6 = uVar3 - *(int *)(param_1 + 0x14);
  iVar5 = uVar4 - *(int *)(param_1 + 0x18);
  if (iVar6 != 0 || iVar5 != 0) {
    FUN_ram_40044572(param_1);
    local_40 = *(undefined4 *)(param_1 + 0x14);
    iVar1 = 0;
    uStack_3c = *(undefined4 *)(param_1 + 0x18);
    uStack_38 = *(undefined4 *)(param_1 + 0x1c);
    uStack_34 = *(undefined4 *)(param_1 + 0x20);
    if (iVar2 != 0) {
      FUN_ram_40044166(iVar2,auStack_30);
      iVar1 = FUN_ram_4004963c(&local_40,auStack_30,0);
      if (iVar1 == 0) {
        FUN_ram_4004656a(iVar2);
      }
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar6;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar5;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar6;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar5;
    FUN_ram_40044242(param_1,iVar6,iVar5,0);
    if (iVar2 != 0) {
      FUN_ram_40043bde(iVar2,0x25,param_1);
    }
    FUN_ram_40044572(param_1);
    if ((iVar2 != 0) &&
       ((iVar6 = FUN_ram_4004963c(param_1 + 0x14,auStack_30,0), iVar1 != 0 || (iVar6 != 0)))) {
      FUN_ram_4004656a(iVar2);
    }
  }
  return;
switchD_ram_4004486c_caseD_5:
  uVar4 = uVar4 + (iVar6 / 2 - iVar1 / 2);
  goto switchD_ram_4004486c_default;
}


/* NanoCore 1.10, address 0x4004490a.
 * REA evidence: ev_6a871a80717db80e30408c24be08c86f9c05d06a449a9971edfc6492bd4e4183
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004490a(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_ram_40049460(param_2,*(undefined4 *)(*(int *)(param_1 + 8) + 0x20));
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004492c.
 * REA evidence: ev_3190264b8ecb5c11e823992fbdde847b0dce6940099d3e094190767731cd73aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004495e) */
/* WARNING: Removing unreachable block (ram,0x40044994) */

uint FUN_ram_4004492c(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (((param_2 & 0x60000000) == 0x20000000) && (uVar1 = param_2 & 0x9fffffff, (int)uVar1 < 0x7d1))
  {
    if (1000 < (int)uVar1) {
      uVar1 = 1000 - uVar1;
    }
    param_2 = (int)(uVar1 * param_4) / 100;
  }
  if (((param_3 & 0x60000000) == 0x20000000) && (uVar1 = param_3 & 0x9fffffff, (int)uVar1 < 0x7d1))
  {
    if (1000 < (int)uVar1) {
      uVar1 = 1000 - uVar1;
    }
    param_3 = (int)(uVar1 * param_4) / 100;
  }
  if ((int)param_3 <= (int)param_1) {
    param_1 = param_3;
  }
  if ((int)param_1 <= (int)param_2) {
    param_1 = param_2;
  }
  return param_1;
}


/* NanoCore 1.10, address 0x400449a6.
 * REA evidence: ev_cc73dd4fd76a528c554369698240a6be0d9c77426fb50305acea93d64d1351c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40044d90) */
/* WARNING: Removing unreachable block (ram,0x40044f70) */

undefined4 FUN_ram_400449a6(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint auStack_50 [7];
  
  if ((*(uint *)(param_1 + 0x28) & 0xc000000) == 0xc000000) {
    return 0;
  }
  iVar2 = FUN_ram_40047b04();
  if (iVar2 == 0) {
    return 0;
  }
  if ((int)((uint)*(ushort *)(param_1 + 0x2a) << 0x14) < 0) {
    iVar13 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
    goto LAB_ram_40044a10;
  }
  uVar4 = FUN_ram_40046afe(param_1,0,1);
  auStack_50[0] = uVar4;
  iVar13 = FUN_ram_4004410a(iVar2);
  if (uVar4 == 0x200007d1) {
    iVar1 = FUN_ram_400455d8(param_1);
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = 0;
    }
    iVar5 = FUN_ram_40043eee(param_1);
    iVar6 = FUN_ram_40043cb0(param_1);
    iVar3 = FUN_ram_400441ba(param_1);
    iVar7 = FUN_ram_40047b2c(param_1);
    iVar8 = FUN_ram_40043c98(param_1);
    uVar4 = iVar6 + iVar3 + iVar5;
    iVar3 = -0x1fffffff;
    iVar14 = 0;
    if (iVar8 == 1) {
      for (; iVar7 != iVar14; iVar14 = iVar14 + 1) {
        iVar10 = *(int *)(**(int **)(param_1 + 8) + iVar14 * 4);
        iVar8 = FUN_ram_40042c2c(iVar10,0x40001);
        if (iVar8 == 0) {
          iVar8 = FUN_ram_40044052(iVar10);
          if ((iVar8 == 0) &&
             ((auStack_50[0] = FUN_ram_40046afe(iVar10,0,10), 8 < (auStack_50[0] & 0xff) ||
              ((1 << (auStack_50[0] & 0x1f) & 0x149U) == 0)))) {
            auStack_50[0] = FUN_ram_40046afe(iVar10,0,8);
            iVar8 = -0x1fffffff;
            if (auStack_50[0] == 0) {
              iVar15 = *(int *)(iVar10 + 0x1c);
              iVar8 = *(int *)(iVar10 + 0x14);
              auStack_50[0] = FUN_ram_40046afe(iVar10,0,0x1a);
              iVar8 = (iVar15 - iVar8) + 1 + iVar5 + auStack_50[0];
            }
          }
          else {
            iVar8 = (*(int *)(param_1 + 0x1c) - *(int *)(iVar10 + 0x14)) + 1;
          }
          auStack_50[0] = FUN_ram_40046afe(iVar10,0,0x1a);
          if (iVar3 <= (int)(auStack_50[0] + iVar8)) {
            auStack_50[0] = FUN_ram_40046afe(iVar10,0,0x1a);
            iVar3 = iVar8 + auStack_50[0];
          }
        }
      }
      uVar9 = iVar6 + iVar3;
      if (iVar3 == -0x1fffffff) goto LAB_ram_40044c36;
    }
    else {
      for (; iVar7 != iVar14; iVar14 = iVar14 + 1) {
        iVar10 = *(int *)(**(int **)(param_1 + 8) + iVar14 * 4);
        iVar8 = FUN_ram_40042c2c(iVar10,0x40001);
        if (iVar8 == 0) {
          iVar8 = FUN_ram_40044052(iVar10);
          if ((iVar8 == 0) &&
             ((auStack_50[0] = FUN_ram_40046afe(iVar10,0,10), 7 < (auStack_50[0] & 0xff) ||
              ((1 << (auStack_50[0] & 0x1f) & 0x93U) == 0)))) {
            auStack_50[0] = FUN_ram_40046afe(iVar10,0,9);
            iVar8 = -0x1fffffff;
            if (auStack_50[0] == 0) {
              iVar15 = *(int *)(iVar10 + 0x1c);
              iVar8 = *(int *)(iVar10 + 0x14);
              auStack_50[0] = FUN_ram_40046afe(iVar10,0,0x1b);
              iVar8 = (iVar15 - iVar8) + 1 + iVar6 + auStack_50[0];
            }
          }
          else {
            iVar8 = (*(int *)(iVar10 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
          }
          auStack_50[0] = FUN_ram_40046afe(iVar10,0,0x1b);
          if (iVar3 <= (int)(auStack_50[0] + iVar8)) {
            auStack_50[0] = FUN_ram_40046afe(iVar10,0,0x1b);
            iVar3 = iVar8 + auStack_50[0];
          }
        }
      }
      if (iVar3 == -0x1fffffff) {
LAB_ram_40044c36:
        uVar9 = 0xe0000001;
      }
      else {
        uVar9 = iVar5 + iVar3;
      }
    }
    if (*(int *)(param_1 + 8) != 0) {
      *(int *)(*(int *)(param_1 + 8) + 0x18) = -iVar1;
    }
    if ((uVar9 != 0xe0000001) && ((int)uVar4 < (int)uVar9)) {
      uVar4 = uVar9;
    }
  }
  else if ((uVar4 & 0x60000000) == 0x20000000 && (int)(uVar4 & 0x9fffffff) < 0x7d1) {
    if (((int)((uint)*(ushort *)(iVar2 + 0x2a) << 0x14) < 0) ||
       (auStack_50[0] = FUN_ram_40046afe(iVar2,0,1), auStack_50[0] != 0x200007d1)) {
      uVar4 = uVar4 & 0x9fffffff;
      if (1000 < (int)uVar4) {
        uVar4 = 1000 - uVar4;
      }
      uVar9 = FUN_ram_40046afe(param_1,0,0x1a);
      auStack_50[0] = uVar9;
      auStack_50[0] = FUN_ram_40046afe(param_1,0,0x1b);
      uVar4 = (int)(iVar13 * uVar4) / 100 - (auStack_50[0] + uVar9);
    }
    else {
      iVar1 = FUN_ram_40043cb0(param_1);
      iVar3 = FUN_ram_40043eee(param_1);
      uVar4 = iVar1 + iVar3;
    }
  }
  uVar9 = FUN_ram_40046afe(param_1,0,4);
  auStack_50[0] = uVar9;
  auStack_50[0] = FUN_ram_40046afe(param_1,0,5);
  iVar13 = FUN_ram_4004492c(uVar4,uVar9,auStack_50[0],iVar13);
LAB_ram_40044a10:
  if ((*(ushort *)(param_1 + 0x2a) & 0x400) == 0) {
    uVar4 = FUN_ram_40046afe(param_1,0,2);
    auStack_50[0] = uVar4;
    iVar1 = FUN_ram_40044138(iVar2);
    if (uVar4 == 0x200007d1) {
      iVar3 = FUN_ram_400455e8(param_1);
      if (*(int *)(param_1 + 8) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c) = 0;
      }
      iVar5 = FUN_ram_40043ea6(param_1);
      iVar6 = FUN_ram_40043e5e(param_1);
      iVar7 = FUN_ram_400441da(param_1);
      iVar8 = FUN_ram_40047b2c(param_1);
      uVar4 = iVar5 + iVar7 + iVar6;
      iVar7 = -0x1fffffff;
      for (iVar14 = 0; piVar11 = *(int **)(param_1 + 8), iVar8 != iVar14; iVar14 = iVar14 + 1) {
        iVar15 = *(int *)(*piVar11 + iVar14 * 4);
        iVar10 = FUN_ram_40042c2c(iVar15,0x40001);
        if (iVar10 == 0) {
          iVar10 = FUN_ram_40044052(iVar15);
          if ((iVar10 == 0) &&
             (auStack_50[0] = FUN_ram_40046afe(iVar15,0,10), 3 < (auStack_50[0] & 0xff))) {
            auStack_50[0] = FUN_ram_40046afe(iVar15,0,9);
            iVar10 = -0x1fffffff;
            if (auStack_50[0] == 0) {
              iVar12 = *(int *)(iVar15 + 0x20);
              iVar10 = *(int *)(iVar15 + 0x18);
              auStack_50[0] = FUN_ram_40046afe(iVar15,0,0x18);
              iVar10 = (iVar12 - iVar10) + 1 + iVar5 + auStack_50[0];
            }
          }
          else {
            iVar10 = (*(int *)(iVar15 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
          }
          auStack_50[0] = FUN_ram_40046afe(iVar15,0,0x19);
          if (iVar7 <= (int)(auStack_50[0] + iVar10)) {
            auStack_50[0] = FUN_ram_40046afe(iVar15,0,0x19);
            iVar7 = iVar10 + auStack_50[0];
          }
        }
      }
      if (piVar11 != (int *)0x0) {
        piVar11[7] = -iVar3;
      }
      if ((iVar7 != -0x1fffffff) && ((int)uVar4 < iVar7 + iVar6)) {
        uVar4 = iVar7 + iVar6;
      }
    }
    else if ((uVar4 & 0x60000000) == 0x20000000 && (int)(uVar4 & 0x9fffffff) < 0x7d1) {
      if (((*(ushort *)(iVar2 + 0x2a) & 0x400) == 0) &&
         (auStack_50[0] = FUN_ram_40046afe(iVar2,0,2), auStack_50[0] == 0x200007d1)) {
        iVar3 = FUN_ram_40043ea6(param_1);
        iVar5 = FUN_ram_40043e5e(param_1);
        uVar4 = iVar3 + iVar5;
      }
      else {
        uVar4 = uVar4 & 0x9fffffff;
        if (1000 < (int)uVar4) {
          uVar4 = 1000 - uVar4;
        }
        uVar9 = FUN_ram_40046afe(param_1,0,0x18);
        auStack_50[0] = uVar9;
        auStack_50[0] = FUN_ram_40046afe(param_1,0,0x19);
        uVar4 = (int)(iVar1 * uVar4) / 100 - (auStack_50[0] + uVar9);
      }
    }
    uVar9 = FUN_ram_40046afe(param_1,0,6);
    auStack_50[0] = uVar9;
    auStack_50[0] = FUN_ram_40046afe(param_1,0,7);
    iVar1 = FUN_ram_4004492c(uVar4,uVar9,auStack_50[0],iVar1);
  }
  else {
    iVar1 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
  }
  if (((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1 == iVar13) &&
     ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1 == iVar1)) {
    return 0;
  }
  FUN_ram_40044572(param_1);
  uStack_60 = *(undefined4 *)(param_1 + 0x14);
  uStack_5c = *(undefined4 *)(param_1 + 0x18);
  uStack_58 = *(undefined4 *)(param_1 + 0x1c);
  uStack_54 = *(undefined4 *)(param_1 + 0x20);
  FUN_ram_40044166(iVar2,auStack_50);
  iVar3 = FUN_ram_4004963c(&uStack_60,auStack_50,0);
  if (iVar3 == 0) {
    FUN_ram_4004656a(iVar2);
  }
  *(int *)(param_1 + 0x20) = iVar1 + *(int *)(param_1 + 0x18) + -1;
  iVar1 = FUN_ram_40043c98(param_1);
  if (iVar1 == 1) {
    *(int *)(param_1 + 0x14) = (*(int *)(param_1 + 0x1c) - iVar13) + 1;
  }
  else {
    *(int *)(param_1 + 0x1c) = iVar13 + *(int *)(param_1 + 0x14) + -1;
  }
  FUN_ram_40043bde(param_1,0x2c,&uStack_60);
  FUN_ram_40043bde(iVar2,0x25,param_1);
  FUN_ram_40044572(param_1);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 2;
  iVar13 = FUN_ram_4004963c(param_1 + 0x14,auStack_50,0);
  if ((iVar3 != 0) || (iVar13 != 0)) {
    FUN_ram_4004656a(iVar2);
  }
  FUN_ram_40043a8a(param_1);
  return 1;
}


/* NanoCore 1.10, address 0x40044f96.
 * REA evidence: ev_f6662e3604dbce0b15918f7c90e631b3b3a99e4e5657078c159880c5c34010fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044f96(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40047b2c();
  for (iVar1 = 0; iVar1 != iVar2; iVar1 = iVar1 + 1) {
    FUN_ram_40044f96(*(undefined4 *)(**(int **)(param_1 + 8) + iVar1 * 4));
  }
  if ((*(ushort *)(param_1 + 0x2a) & 1) != 0) {
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfffe;
    FUN_ram_400449a6(param_1);
    FUN_ram_400446aa(param_1);
    if (iVar1 != 0) {
      FUN_ram_40055f14(param_1);
    }
  }
  if ((*(ushort *)(param_1 + 0x2a) & 2) != 0) {
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfffd;
    FUN_ram_400465b2(param_1,0);
    return;
  }
  return;
}


