/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40045000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4004502e.
 * REA evidence: ev_c1bee70c94122c3ea2a6458dc1e848348ed461066c09eb3cfe6537206acb694c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004502e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_ram_40048834(param_1,param_2,0);
  FUN_ram_40044f1c(param_1,param_3,param_4);
  return;
}


/* NanoCore 1.11, address 0x40045052.
 * REA evidence: ev_3d88a7677f2513b2484ae94ae81c3f34dd3059e39ddd48e488c13f7cf88ec0a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045052(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* NanoCore 1.11, address 0x40045064.
 * REA evidence: ev_519b0e4543f6f3ae39765b706a7199b51ccd2cd5c461d84c5d95b1c22d7a1233
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40045064(int param_1)

{
  return (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
}


/* NanoCore 1.11, address 0x40045070.
 * REA evidence: ev_4dfe8caaef929278b50d64743dded0974f2f7078fc67862f6c326b1c0834904a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40045070(int param_1)

{
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
}


/* NanoCore 1.11, address 0x4004507c.
 * REA evidence: ev_5994f134920828cb97605180fb5a29e6c45564b6712df0d27fbad17161932bf9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004507c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40044c22();
  iVar2 = FUN_ram_40044e60(param_1);
  return (((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) - iVar1) - iVar2;
}


/* NanoCore 1.11, address 0x400450aa.
 * REA evidence: ev_391a75b287fa3bb4f99612692eece36ca4d392dccc1f5dadc8344a20e065fafe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400450aa(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40044e18();
  iVar2 = FUN_ram_40044dd0(param_1);
  return (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) - iVar1) - iVar2;
}


/* NanoCore 1.11, address 0x400450d8.
 * REA evidence: ev_c6914cde4f9f119344d4295721a6c1181aa4fc7097846f5aaa4c078d9193db35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400450d8(int param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = *(int *)(param_1 + 0x14);
  param_2[1] = *(int *)(param_1 + 0x18);
  param_2[2] = *(int *)(param_1 + 0x1c);
  param_2[3] = *(int *)(param_1 + 0x20);
  iVar1 = FUN_ram_40044c22();
  *param_2 = *param_2 + iVar1;
  iVar1 = FUN_ram_40044e60(param_1);
  param_2[2] = param_2[2] - iVar1;
  iVar1 = FUN_ram_40044e18(param_1);
  param_2[1] = param_2[1] + iVar1;
  iVar1 = FUN_ram_40044dd0(param_1);
  param_2[3] = param_2[3] - iVar1;
  return;
}


/* NanoCore 1.11, address 0x4004512c.
 * REA evidence: ev_8db243b2af8e494e46bf2afccf398ff2044dfc7f259ac80801cd731720ea544d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004512c(undefined4 param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0xe0000001;
  FUN_ram_40044b50(param_1,0x2f,&uStack_18);
  return uStack_18;
}


/* NanoCore 1.11, address 0x4004514c.
 * REA evidence: ev_602cfec7e7f62e3361d1bf1ff03538cbff01bf61fbd99336992af96b90837fca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004514c(undefined4 param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0xe0000001;
  uStack_14 = 0;
  FUN_ram_40044b50(param_1,0x2f,&uStack_18);
  return uStack_14;
}


/* NanoCore 1.11, address 0x4004516c.
 * REA evidence: ev_5dc51b6fcea1645a5a3ba5af15bce4e85fe52dde6ecc9a5ff581fe0819492b5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004516c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40047a70(param_1,0,1);
  iVar2 = FUN_ram_40047a70(param_1,0,2);
  if ((iVar1 == 0x200007d1) || (uVar3 = 0, iVar2 == 0x200007d1)) {
    FUN_ram_40044ffc(param_1);
    uVar3 = 1;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x400451b4.
 * REA evidence: ev_2223503089a2fb137f9d9d1c272d71d9067420720761263c59647c4b00c3aff5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400451b4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_ram_40048a9e();
  for (iVar2 = 0; iVar2 != iVar3; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(**(int **)(param_1 + 8) + iVar2 * 4);
    if ((param_4 == 0) || (iVar4 = FUN_ram_40043b92(iVar1,0x40000), iVar4 == 0)) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + param_2;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_3;
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + param_2;
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + param_3;
      FUN_ram_400451b4(iVar1,param_2,param_3,0);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40045230.
 * REA evidence: ev_783d3c6c091bafd8c657113a56e52352349b164dbdd63568dfff7689c01c5b5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045230(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    iVar1 = FUN_ram_40044a44(param_1);
    if ((param_4 & 2) != 0) break;
    if (iVar1 == 2) {
      FUN_ram_40044c6a(param_1,param_2,param_3,0);
    }
    if ((param_4 & 1) == 0) {
      return;
    }
    param_1 = FUN_ram_40048a76(param_1);
  }
  if ((param_4 & 1) != 0) {
    uVar2 = FUN_ram_40048a76(param_1);
    FUN_ram_40045230(uVar2,param_2,param_3,param_4);
  }
  if (iVar1 != 2) {
    return;
  }
  FUN_ram_40044c6a(param_1,param_2,param_3,1);
  return;
}


/* NanoCore 1.11, address 0x400452d0.
 * REA evidence: ev_aa431c031cdb25000db115fdb3086ef27194399054618041da158a5daa38459b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400452d0(undefined4 param_1,int *param_2,undefined4 param_3)

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
  FUN_ram_40045230(param_1,&local_30,4,param_3);
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


/* NanoCore 1.11, address 0x40045382.
 * REA evidence: ev_ee0b3e25ea2b4f8cd9c840e5b8275f740a3c185efd77fe847c61cf2ea0a9a9fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40045382(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [24];
  
  iVar1 = FUN_ram_40043b92(param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_40048a14(param_1);
    uVar2 = FUN_ram_40048a20();
    iVar3 = FUN_ram_4004d346();
    if ((((iVar1 == iVar3) || (iVar3 = FUN_ram_4004d358(uVar2), iVar1 == iVar3)) ||
        (iVar3 = FUN_ram_4004d38e(uVar2), iVar1 == iVar3)) ||
       ((iVar3 = FUN_ram_4004d36a(uVar2), iVar1 == iVar3 ||
        (iVar3 = FUN_ram_4004d37c(uVar2), iVar1 == iVar3)))) {
      uVar2 = FUN_ram_400449f0(param_1);
      local_40 = *(undefined4 *)(param_1 + 0x14);
      uStack_3c = *(undefined4 *)(param_1 + 0x18);
      uStack_38 = *(undefined4 *)(param_1 + 0x1c);
      uStack_34 = *(undefined4 *)(param_1 + 0x20);
      FUN_ram_4004a3d2(&local_40,uVar2,uVar2);
      iVar1 = FUN_ram_4004a406(param_2,param_2,&local_40);
      if (iVar1 != 0) {
        FUN_ram_400452d0(param_1,param_2,1);
        do {
          param_1 = FUN_ram_40048a76(param_1);
          if (param_1 == 0) {
            return iVar1;
          }
          iVar3 = FUN_ram_40043b92(param_1,1);
          if (iVar3 != 0) {
            return 0;
          }
          FUN_ram_4000304c(auStack_30,param_1 + 0x14,0x10);
          iVar3 = FUN_ram_40043b92(param_1,0x100000);
          if (iVar3 != 0) {
            uVar2 = FUN_ram_400449f0(param_1);
            FUN_ram_4004a3d2(auStack_30,uVar2,uVar2);
          }
          FUN_ram_400452d0(param_1,auStack_30,1);
          iVar3 = FUN_ram_4004a406(param_2,param_2,auStack_30);
        } while (iVar3 != 0);
      }
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40045480.
 * REA evidence: ev_fde113b238a41f7ec6ee2c6bace9652d589bb63cdfb7fde82748c9de0041969d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045480(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_40048a20();
  iVar1 = FUN_ram_4004d458();
  if (iVar1 != 0) {
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar1 = FUN_ram_40045382(param_1,&uStack_20);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 8) != 0) {
        if ((*(ushort *)(*(int *)(param_1 + 8) + 0x2a) & 0xc00) == 0x800) {
          FUN_ram_4004a3d2(&uStack_20,5,5);
        }
      }
      uVar2 = FUN_ram_40048a20(param_1);
      FUN_ram_400496e4(uVar2,&uStack_20);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400454e4.
 * REA evidence: ev_9ca69e40e37b2e1a124916ea07a50be3c13b3cfcc588bc1e6d778e88d7e421df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400454e4(int param_1)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = FUN_ram_400449f0();
  iStack_1c = *(int *)(param_1 + 0x18) - iStack_14;
  iStack_18 = *(int *)(param_1 + 0x1c) + iStack_14;
  local_20 = *(int *)(param_1 + 0x14) - iStack_14;
  iStack_14 = iStack_14 + *(int *)(param_1 + 0x20);
  FUN_ram_40045480(param_1,&local_20);
  return;
}


/* NanoCore 1.11, address 0x40045518.
 * REA evidence: ev_119f064f19ab6e9bb1588dc50b7ca4657667a84f0bb6a4cd23c81b3b46f3e0f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void switchD_ram:400457de::default(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [24];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40043b92(param_1,0x40000);
    iVar4 = *(int *)(iVar1 + 0x14);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4004654a(iVar1);
      iVar4 = iVar4 - iVar2;
      iVar2 = *(int *)(iVar1 + 0x18);
      iVar3 = FUN_ram_4004655a(iVar1);
      iVar2 = iVar2 - iVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x18);
    }
    iVar3 = FUN_ram_40044c22(iVar1);
    param_2 = param_2 + iVar4 + iVar3;
    iVar4 = FUN_ram_40044e18(iVar1);
    param_3 = param_3 + iVar2 + iVar4;
  }
  param_2 = param_2 - *(int *)(param_1 + 0x14);
  param_3 = param_3 - *(int *)(param_1 + 0x18);
  if (param_2 != 0 || param_3 != 0) {
    FUN_ram_400454e4(param_1);
    local_40 = *(undefined4 *)(param_1 + 0x14);
    iVar2 = 0;
    uStack_3c = *(undefined4 *)(param_1 + 0x18);
    uStack_38 = *(undefined4 *)(param_1 + 0x1c);
    uStack_34 = *(undefined4 *)(param_1 + 0x20);
    if (iVar1 != 0) {
      FUN_ram_400450d8(iVar1,auStack_30);
      iVar2 = FUN_ram_4004a5ae(&local_40,auStack_30,0);
      if (iVar2 == 0) {
        FUN_ram_400474dc(iVar1);
      }
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
    FUN_ram_400451b4(param_1,param_2,param_3,0);
    if (iVar1 != 0) {
      FUN_ram_40044b50(iVar1,0x25,param_1);
    }
    FUN_ram_400454e4(param_1);
    if ((iVar1 != 0) &&
       ((iVar4 = FUN_ram_4004a5ae(param_1 + 0x14,auStack_30,0), iVar2 != 0 || (iVar4 != 0)))) {
      FUN_ram_400474dc(iVar1);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004561c.
 * REA evidence: ev_f7fe59b2755d895e467a92663b741d5c9a885b1def09c72d827dc86faed794d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40045856) */
/* WARNING: Removing unreachable block (ram,0x4004584a) */
/* WARNING: Removing unreachable block (ram,0x40045838) */
/* WARNING: Removing unreachable block (ram,0x40045814) */
/* WARNING: Removing unreachable block (ram,0x400457e6) */
/* WARNING: Removing unreachable block (ram,0x4004575e) */
/* WARNING: Removing unreachable block (ram,0x400456b2) */
/* WARNING: Removing unreachable block (ram,0x400456e8) */
/* WARNING: Removing unreachable block (ram,0x40045794) */
/* WARNING: Removing unreachable block (ram,0x400457e2) */
/* WARNING: Removing unreachable block (ram,0x40045818) */
/* WARNING: Removing unreachable block (ram,0x4004583c) */
/* WARNING: Removing unreachable block (ram,0x4004584e) */
/* WARNING: Removing unreachable block (ram,0x4004585c) */

void FUN_ram_4004561c(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  iVar3 = FUN_ram_40044fc4();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_ram_40048a76(param_1);
  uVar4 = FUN_ram_40047a70(param_1,0,8);
  uVar12 = FUN_ram_40047a70(param_1,0,9);
  uVar11 = (uint)uVar12;
  if (iVar3 == 0) goto LAB_ram_400457f2;
  iVar5 = FUN_ram_4004507c(iVar3,(int)((ulonglong)uVar12 >> 0x20),uVar11);
  iVar6 = FUN_ram_400450aa(iVar3);
  if (((uVar4 & 0x60000000) == 0x20000000) && (uVar10 = uVar4 & 0x9fffffff, (int)uVar10 < 0x7d1)) {
    if (1000 < (int)uVar10) {
      uVar10 = 1000 - uVar10;
    }
    uVar4 = (int)(iVar5 * uVar10) / 100;
  }
  if (((uVar11 & 0x60000000) == 0x20000000) && (uVar10 = uVar11 & 0x9fffffff, (int)uVar10 < 0x7d1))
  {
    if (1000 < (int)uVar10) {
      uVar10 = 1000 - uVar10;
    }
    uVar11 = (int)(iVar6 * uVar10) / 100;
  }
  uVar10 = FUN_ram_40047a70(param_1,0,0x6a);
  uVar7 = FUN_ram_40047a70(param_1,0,0x6b);
  iVar9 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
  iVar1 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
  if (((uVar10 & 0x60000000) == 0x20000000) && (uVar8 = uVar10 & 0x9fffffff, (int)uVar8 < 0x7d1)) {
    if (1000 < (int)uVar8) {
      uVar8 = 1000 - uVar8;
    }
    uVar10 = (int)(iVar9 * uVar8) / 100;
  }
  if (((uVar7 & 0x60000000) == 0x20000000) && (uVar8 = uVar7 & 0x9fffffff, (int)uVar8 < 0x7d1)) {
    if (1000 < (int)uVar8) {
      uVar8 = 1000 - uVar8;
    }
    uVar7 = (int)(iVar1 * uVar8) / 100;
  }
  uVar11 = uVar11 + uVar7;
  cVar2 = FUN_ram_40047a70(param_1,0,10);
  uVar4 = uVar10 + uVar4;
  if (cVar2 == '\0') {
    iVar3 = FUN_ram_40044c0a(iVar3);
    if (iVar3 != 1) goto LAB_ram_400457f2;
switchD_ram_400457de_caseD_1:
    uVar4 = uVar4 + (iVar5 - iVar9);
    goto LAB_ram_400457f2;
  }
  switch(cVar2 + -2) {
  case '\0':
    uVar4 = uVar4 + (iVar5 / 2 - iVar9 / 2);
    goto LAB_ram_400457f2;
  case '\x01':
    goto switchD_ram_400457de_caseD_1;
  case '\x02':
    break;
  case '\x03':
    uVar4 = uVar4 + (iVar5 / 2 - iVar9 / 2);
    break;
  case '\x04':
    uVar4 = uVar4 + (iVar5 - iVar9);
    break;
  case '\x05':
    goto switchD_ram_400457de_caseD_5;
  case '\x06':
    uVar4 = uVar4 + (iVar5 - iVar9);
    goto switchD_ram_400457de_caseD_5;
  case '\a':
    iVar6 = iVar6 / 2;
    uVar4 = uVar4 + (iVar5 / 2 - iVar9 / 2);
    iVar1 = iVar1 / 2;
    break;
  default:
    goto LAB_ram_400457f2;
  }
  uVar11 = uVar11 + (iVar6 - iVar1);
LAB_ram_400457f2:
  switchD_ram:400457de::default(param_1,uVar4,uVar11);
  return;
switchD_ram_400457de_caseD_5:
  uVar11 = uVar11 + (iVar6 / 2 - iVar1 / 2);
  goto LAB_ram_400457f2;
}


/* NanoCore 1.11, address 0x4004587c.
 * REA evidence: ev_6b1284ee966e76e0a56a0619ba4b0d0a32c62939f8207c6b81a5cfa953ba36ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004587c(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_ram_4004a3d2(param_2,*(undefined4 *)(*(int *)(param_1 + 8) + 0x20));
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4004589e.
 * REA evidence: ev_8f24dc09038bdf83ec209fba0aea06633692a0145a0c20a620d11e11e3ed2684
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400458d0) */
/* WARNING: Removing unreachable block (ram,0x40045906) */

uint FUN_ram_4004589e(uint param_1,uint param_2,uint param_3,int param_4)

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


/* NanoCore 1.11, address 0x40045918.
 * REA evidence: ev_58f73db18500208b4f6d7818ea3a9d8b0a4684c8c46c57d921b4428d18f6d259
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40045d02) */
/* WARNING: Removing unreachable block (ram,0x40045ee2) */

undefined4 FUN_ram_40045918(int param_1)

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
  iVar2 = FUN_ram_40048a76();
  if (iVar2 == 0) {
    return 0;
  }
  if ((int)((uint)*(ushort *)(param_1 + 0x2a) << 0x14) < 0) {
    iVar13 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
    goto LAB_ram_40045982;
  }
  uVar4 = FUN_ram_40047a70(param_1,0,1);
  auStack_50[0] = uVar4;
  iVar13 = FUN_ram_4004507c(iVar2);
  if (uVar4 == 0x200007d1) {
    iVar1 = FUN_ram_4004654a(param_1);
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = 0;
    }
    iVar5 = FUN_ram_40044e60(param_1);
    iVar6 = FUN_ram_40044c22(param_1);
    iVar3 = FUN_ram_4004512c(param_1);
    iVar7 = FUN_ram_40048a9e(param_1);
    iVar8 = FUN_ram_40044c0a(param_1);
    uVar4 = iVar6 + iVar3 + iVar5;
    iVar3 = -0x1fffffff;
    iVar14 = 0;
    if (iVar8 == 1) {
      for (; iVar7 != iVar14; iVar14 = iVar14 + 1) {
        iVar10 = *(int *)(**(int **)(param_1 + 8) + iVar14 * 4);
        iVar8 = FUN_ram_40043b9e(iVar10,0x40001);
        if (iVar8 == 0) {
          iVar8 = FUN_ram_40044fc4(iVar10);
          if ((iVar8 == 0) &&
             ((auStack_50[0] = FUN_ram_40047a70(iVar10,0,10), 8 < (auStack_50[0] & 0xff) ||
              ((1 << (auStack_50[0] & 0x1f) & 0x149U) == 0)))) {
            auStack_50[0] = FUN_ram_40047a70(iVar10,0,8);
            iVar8 = -0x1fffffff;
            if (auStack_50[0] == 0) {
              iVar15 = *(int *)(iVar10 + 0x1c);
              iVar8 = *(int *)(iVar10 + 0x14);
              auStack_50[0] = FUN_ram_40047a70(iVar10,0,0x1a);
              iVar8 = (iVar15 - iVar8) + 1 + iVar5 + auStack_50[0];
            }
          }
          else {
            iVar8 = (*(int *)(param_1 + 0x1c) - *(int *)(iVar10 + 0x14)) + 1;
          }
          auStack_50[0] = FUN_ram_40047a70(iVar10,0,0x1a);
          if (iVar3 <= (int)(auStack_50[0] + iVar8)) {
            auStack_50[0] = FUN_ram_40047a70(iVar10,0,0x1a);
            iVar3 = iVar8 + auStack_50[0];
          }
        }
      }
      uVar9 = iVar6 + iVar3;
      if (iVar3 == -0x1fffffff) goto LAB_ram_40045ba8;
    }
    else {
      for (; iVar7 != iVar14; iVar14 = iVar14 + 1) {
        iVar10 = *(int *)(**(int **)(param_1 + 8) + iVar14 * 4);
        iVar8 = FUN_ram_40043b9e(iVar10,0x40001);
        if (iVar8 == 0) {
          iVar8 = FUN_ram_40044fc4(iVar10);
          if ((iVar8 == 0) &&
             ((auStack_50[0] = FUN_ram_40047a70(iVar10,0,10), 7 < (auStack_50[0] & 0xff) ||
              ((1 << (auStack_50[0] & 0x1f) & 0x93U) == 0)))) {
            auStack_50[0] = FUN_ram_40047a70(iVar10,0,9);
            iVar8 = -0x1fffffff;
            if (auStack_50[0] == 0) {
              iVar15 = *(int *)(iVar10 + 0x1c);
              iVar8 = *(int *)(iVar10 + 0x14);
              auStack_50[0] = FUN_ram_40047a70(iVar10,0,0x1b);
              iVar8 = (iVar15 - iVar8) + 1 + iVar6 + auStack_50[0];
            }
          }
          else {
            iVar8 = (*(int *)(iVar10 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
          }
          auStack_50[0] = FUN_ram_40047a70(iVar10,0,0x1b);
          if (iVar3 <= (int)(auStack_50[0] + iVar8)) {
            auStack_50[0] = FUN_ram_40047a70(iVar10,0,0x1b);
            iVar3 = iVar8 + auStack_50[0];
          }
        }
      }
      if (iVar3 == -0x1fffffff) {
LAB_ram_40045ba8:
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
       (auStack_50[0] = FUN_ram_40047a70(iVar2,0,1), auStack_50[0] != 0x200007d1)) {
      uVar4 = uVar4 & 0x9fffffff;
      if (1000 < (int)uVar4) {
        uVar4 = 1000 - uVar4;
      }
      uVar9 = FUN_ram_40047a70(param_1,0,0x1a);
      auStack_50[0] = uVar9;
      auStack_50[0] = FUN_ram_40047a70(param_1,0,0x1b);
      uVar4 = (int)(iVar13 * uVar4) / 100 - (auStack_50[0] + uVar9);
    }
    else {
      iVar1 = FUN_ram_40044c22(param_1);
      iVar3 = FUN_ram_40044e60(param_1);
      uVar4 = iVar1 + iVar3;
    }
  }
  uVar9 = FUN_ram_40047a70(param_1,0,4);
  auStack_50[0] = uVar9;
  auStack_50[0] = FUN_ram_40047a70(param_1,0,5);
  iVar13 = FUN_ram_4004589e(uVar4,uVar9,auStack_50[0],iVar13);
LAB_ram_40045982:
  if ((*(ushort *)(param_1 + 0x2a) & 0x400) == 0) {
    uVar4 = FUN_ram_40047a70(param_1,0,2);
    auStack_50[0] = uVar4;
    iVar1 = FUN_ram_400450aa(iVar2);
    if (uVar4 == 0x200007d1) {
      iVar3 = FUN_ram_4004655a(param_1);
      if (*(int *)(param_1 + 8) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c) = 0;
      }
      iVar5 = FUN_ram_40044e18(param_1);
      iVar6 = FUN_ram_40044dd0(param_1);
      iVar7 = FUN_ram_4004514c(param_1);
      iVar8 = FUN_ram_40048a9e(param_1);
      uVar4 = iVar5 + iVar7 + iVar6;
      iVar7 = -0x1fffffff;
      for (iVar14 = 0; piVar11 = *(int **)(param_1 + 8), iVar8 != iVar14; iVar14 = iVar14 + 1) {
        iVar15 = *(int *)(*piVar11 + iVar14 * 4);
        iVar10 = FUN_ram_40043b9e(iVar15,0x40001);
        if (iVar10 == 0) {
          iVar10 = FUN_ram_40044fc4(iVar15);
          if ((iVar10 == 0) &&
             (auStack_50[0] = FUN_ram_40047a70(iVar15,0,10), 3 < (auStack_50[0] & 0xff))) {
            auStack_50[0] = FUN_ram_40047a70(iVar15,0,9);
            iVar10 = -0x1fffffff;
            if (auStack_50[0] == 0) {
              iVar12 = *(int *)(iVar15 + 0x20);
              iVar10 = *(int *)(iVar15 + 0x18);
              auStack_50[0] = FUN_ram_40047a70(iVar15,0,0x18);
              iVar10 = (iVar12 - iVar10) + 1 + iVar5 + auStack_50[0];
            }
          }
          else {
            iVar10 = (*(int *)(iVar15 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
          }
          auStack_50[0] = FUN_ram_40047a70(iVar15,0,0x19);
          if (iVar7 <= (int)(auStack_50[0] + iVar10)) {
            auStack_50[0] = FUN_ram_40047a70(iVar15,0,0x19);
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
         (auStack_50[0] = FUN_ram_40047a70(iVar2,0,2), auStack_50[0] == 0x200007d1)) {
        iVar3 = FUN_ram_40044e18(param_1);
        iVar5 = FUN_ram_40044dd0(param_1);
        uVar4 = iVar3 + iVar5;
      }
      else {
        uVar4 = uVar4 & 0x9fffffff;
        if (1000 < (int)uVar4) {
          uVar4 = 1000 - uVar4;
        }
        uVar9 = FUN_ram_40047a70(param_1,0,0x18);
        auStack_50[0] = uVar9;
        auStack_50[0] = FUN_ram_40047a70(param_1,0,0x19);
        uVar4 = (int)(iVar1 * uVar4) / 100 - (auStack_50[0] + uVar9);
      }
    }
    uVar9 = FUN_ram_40047a70(param_1,0,6);
    auStack_50[0] = uVar9;
    auStack_50[0] = FUN_ram_40047a70(param_1,0,7);
    iVar1 = FUN_ram_4004589e(uVar4,uVar9,auStack_50[0],iVar1);
  }
  else {
    iVar1 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
  }
  if (((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1 == iVar13) &&
     ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1 == iVar1)) {
    return 0;
  }
  FUN_ram_400454e4(param_1);
  uStack_60 = *(undefined4 *)(param_1 + 0x14);
  uStack_5c = *(undefined4 *)(param_1 + 0x18);
  uStack_58 = *(undefined4 *)(param_1 + 0x1c);
  uStack_54 = *(undefined4 *)(param_1 + 0x20);
  FUN_ram_400450d8(iVar2,auStack_50);
  iVar3 = FUN_ram_4004a5ae(&uStack_60,auStack_50,0);
  if (iVar3 == 0) {
    FUN_ram_400474dc(iVar2);
  }
  *(int *)(param_1 + 0x20) = iVar1 + *(int *)(param_1 + 0x18) + -1;
  iVar1 = FUN_ram_40044c0a(param_1);
  if (iVar1 == 1) {
    *(int *)(param_1 + 0x14) = (*(int *)(param_1 + 0x1c) - iVar13) + 1;
  }
  else {
    *(int *)(param_1 + 0x1c) = iVar13 + *(int *)(param_1 + 0x14) + -1;
  }
  FUN_ram_40044b50(param_1,0x2c,&uStack_60);
  FUN_ram_40044b50(iVar2,0x25,param_1);
  FUN_ram_400454e4(param_1);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 2;
  iVar13 = FUN_ram_4004a5ae(param_1 + 0x14,auStack_50,0);
  if ((iVar3 != 0) || (iVar13 != 0)) {
    FUN_ram_400474dc(iVar2);
  }
  FUN_ram_400449fc(param_1);
  return 1;
}


/* NanoCore 1.11, address 0x40045f08.
 * REA evidence: ev_52c645741321a6277508e893146aa3a88144534f9a8876ace2e4879d2b0c079c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045f08(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40048a9e();
  for (iVar1 = 0; iVar1 != iVar2; iVar1 = iVar1 + 1) {
    FUN_ram_40045f08(*(undefined4 *)(**(int **)(param_1 + 8) + iVar1 * 4));
  }
  if ((*(ushort *)(param_1 + 0x2a) & 1) != 0) {
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfffe;
    FUN_ram_40045918(param_1);
    FUN_ram_4004561c(param_1);
    if (iVar1 != 0) {
      FUN_ram_40056e86(param_1);
    }
  }
  if ((*(ushort *)(param_1 + 0x2a) & 2) != 0) {
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfffd;
    FUN_ram_40047524(param_1,0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40045f80.
 * REA evidence: ev_35224b166ca8a11fa1ba0172c53a6b6c4e19e2f5d63292150ca7cc1feb50b765
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045f80(void)

{
  int iVar1;
  
  if (DAT_ram_30080cc0 == '\0') {
    DAT_ram_30080cc0 = 1;
    iVar1 = FUN_ram_40048a14();
    while( true ) {
      if ((*(ushort *)(iVar1 + 0x2a) & 4) == 0) break;
      *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) & 0xfffb;
      FUN_ram_40045f08();
    }
    DAT_ram_30080cc0 = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40045fc6.
 * REA evidence: ev_f2a3a6a8aae69cd28d6e21b9d5e44e9629d18b6c29f21afe9f814690fa5a337c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40046108) */
/* WARNING: Removing unreachable block (ram,0x40046328) */
/* WARNING: Removing unreachable block (ram,0x400461d4) */
/* WARNING: Removing unreachable block (ram,0x400461d8) */
/* WARNING: Removing unreachable block (ram,0x4004606e) */
/* WARNING: Removing unreachable block (ram,0x40046076) */
/* WARNING: Removing unreachable block (ram,0x40046096) */
/* WARNING: Removing unreachable block (ram,0x400462c8) */
/* WARNING: Removing unreachable block (ram,0x400462c0) */
/* WARNING: Removing unreachable block (ram,0x40046270) */
/* WARNING: Removing unreachable block (ram,0x40046268) */
/* WARNING: Removing unreachable block (ram,0x4004623a) */
/* WARNING: Removing unreachable block (ram,0x40046236) */
/* WARNING: Removing unreachable block (ram,0x400460b6) */
/* WARNING: Removing unreachable block (ram,0x400460ba) */
/* WARNING: Removing unreachable block (ram,0x40046330) */
/* WARNING: Removing unreachable block (ram,0x40046150) */
/* WARNING: Removing unreachable block (ram,0x4004608e) */

void FUN_ram_40045fc6(int param_1,int param_2,int param_3,uint param_4,uint param_5)

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
  
  FUN_ram_40045f80();
  if (param_2 == 0) {
    param_2 = FUN_ram_40048a76(param_1);
  }
  iVar1 = FUN_ram_40048a76(param_1);
  iVar2 = FUN_ram_40044c22();
  iVar3 = FUN_ram_40044e18(iVar1);
  uVar4 = FUN_ram_40044c22(param_2);
  uVar5 = FUN_ram_40044e18(param_2);
  if (param_3 == 0) {
    iVar6 = FUN_ram_40044c0a(param_2);
    if (iVar6 != 1) goto switchD_ram_4004605c_caseD_0;
switchD_ram_4004605c_caseD_2:
    iVar6 = FUN_ram_4004507c(param_2);
    iVar7 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
LAB_ram_400460be:
    uVar4 = uVar4 + (iVar6 - iVar7);
    goto switchD_ram_4004605c_caseD_0;
  }
  switch(param_3 - 1U & 0xff) {
  case 0:
    goto switchD_ram_4004605c_caseD_0;
  case 1:
    iVar6 = FUN_ram_4004507c(param_2);
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    iVar6 = iVar6 / 2;
    goto LAB_ram_400460be;
  case 2:
    goto switchD_ram_4004605c_caseD_2;
  case 3:
    goto switchD_ram_4004605c_caseD_3;
  case 4:
    iVar6 = FUN_ram_4004507c(param_2);
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    iVar6 = iVar6 / 2;
    goto LAB_ram_400461dc;
  case 5:
    iVar6 = FUN_ram_4004507c(param_2);
    iVar7 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
LAB_ram_400461dc:
    uVar4 = uVar4 + (iVar6 - iVar7);
switchD_ram_4004605c_caseD_3:
    iVar6 = FUN_ram_400450aa(param_2);
    iVar7 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
    break;
  case 7:
    iVar6 = FUN_ram_4004507c(param_2);
    uVar4 = uVar4 + (iVar6 - ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1));
  case 6:
    iVar6 = FUN_ram_400450aa(param_2);
    iVar7 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) / 2;
    iVar6 = iVar6 / 2;
    break;
  case 8:
    iVar6 = FUN_ram_4004507c(param_2);
    uVar4 = uVar4 + (iVar6 / 2 - ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2);
    iVar6 = FUN_ram_400450aa(param_2);
    iVar6 = iVar6 / 2;
    iVar7 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) / 2;
    break;
  case 9:
    uVar5 = ~(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    goto LAB_ram_4004624e;
  case 10:
    iVar6 = ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1) / 2;
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    goto LAB_ram_40046274;
  case 0xb:
    iVar6 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14);
    iVar7 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
LAB_ram_40046274:
    uVar4 = iVar6 - iVar7;
    uVar5 = ~(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    goto switchD_ram_4004605c_caseD_0;
  case 0xc:
    uVar5 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1;
    goto LAB_ram_4004624e;
  case 0xd:
    iVar6 = ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1) / 2;
    iVar7 = ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) / 2;
    goto LAB_ram_400462cc;
  case 0xe:
    iVar6 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14);
    iVar7 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
LAB_ram_400462cc:
    uVar4 = iVar6 - iVar7;
    uVar5 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1;
    goto switchD_ram_4004605c_caseD_0;
  case 0xf:
    uVar4 = ~(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    goto LAB_ram_40046300;
  case 0x10:
    uVar4 = ~(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    goto LAB_ram_40046312;
  case 0x11:
    uVar4 = ~(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
    goto LAB_ram_40046346;
  case 0x12:
    uVar4 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1;
LAB_ram_40046300:
    uVar5 = 0;
    goto switchD_ram_4004605c_caseD_0;
  case 0x13:
    uVar4 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1;
LAB_ram_40046312:
    iVar6 = ((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1) / 2;
    iVar7 = ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) / 2;
LAB_ram_40046334:
    uVar5 = iVar6 - iVar7;
    goto switchD_ram_4004605c_caseD_0;
  case 0x14:
    uVar4 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1;
LAB_ram_40046346:
    iVar6 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18);
    iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    goto LAB_ram_40046334;
  default:
    uVar5 = 0;
LAB_ram_4004624e:
    uVar4 = 0;
    goto switchD_ram_4004605c_caseD_0;
  }
  uVar5 = uVar5 + (iVar6 - iVar7);
switchD_ram_4004605c_caseD_0:
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
  iVar6 = FUN_ram_40044c0a(iVar1);
  iVar9 = *(int *)(param_2 + 0x14);
  iVar7 = *(int *)(iVar1 + 0x14);
  if (iVar6 == 1) {
    iVar6 = FUN_ram_40046716(iVar1);
  }
  else {
    iVar6 = FUN_ram_40046626(iVar1);
  }
  iVar10 = *(int *)(param_2 + 0x18);
  iVar11 = *(int *)(iVar1 + 0x18);
  iVar1 = thunk_FUN_ram_4004655a(iVar1);
  FUN_ram_40048834(param_1,1,0);
  FUN_ram_40044f1c(param_1,uVar4 + ((((param_4 + iVar9) - iVar7) + iVar6) - iVar2),
                   uVar5 + ((iVar1 + ((param_5 + iVar10) - iVar11)) - iVar3));
  return;
}


