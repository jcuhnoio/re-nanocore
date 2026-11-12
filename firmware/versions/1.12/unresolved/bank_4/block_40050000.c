/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40050000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4005001a.
 * REA evidence: ev_57ccc78c858e2c3cad1268574d20c644e9aecb002824f6920ca16248ec904a68
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005001a(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 *puStack_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined1 auStack_b4 [36];
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int *apiStack_6c [5];
  byte bStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined1 uStack_50;
  int *piStack_4c;
  
  bStack_58 = *(byte *)(param_2 + 0x28);
  if (bStack_58 < 3) {
    return;
  }
  iVar6 = *(int *)(param_2 + 0x24);
  if (iVar6 == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x29) & 0x1f) == 0) {
    return;
  }
  iVar4 = (param_3[2] - *param_3) + 1;
  iVar1 = (param_3[3] - param_3[1]) + 1;
  if (iVar4 < iVar1) {
    iVar1 = iVar4;
  }
  iVar4 = iVar1 >> 1;
  if (*(int *)(param_2 + 0x1c) < iVar1 >> 1) {
    iVar4 = *(int *)(param_2 + 0x1c);
  }
  uVar5 = (*(uint *)(param_2 + 0x28) & 0x1fff) >> 8;
  iStack_e4 = iVar6;
  if ((uVar5 & 4) == 0) {
    iStack_e4 = -(iVar6 + iVar4);
  }
  iStack_e4 = iStack_e4 + *param_3;
  iStack_dc = iVar6;
  if ((uVar5 & 8) == 0) {
    iStack_dc = -(iVar6 + iVar4);
  }
  iStack_dc = param_3[2] - iStack_dc;
  iStack_e0 = iVar6;
  if ((uVar5 & 2) == 0) {
    iStack_e0 = -(iVar6 + iVar4);
  }
  iStack_e0 = iStack_e0 + param_3[1];
  iStack_d8 = iVar6;
  if ((uVar5 & 1) == 0) {
    iStack_d8 = -(iVar6 + iVar4);
  }
  iStack_d8 = param_3[3] - iStack_d8;
  uStack_55 = *(undefined1 *)(param_2 + 0x22);
  uStack_56 = *(undefined1 *)(param_2 + 0x21);
  uStack_57 = *(undefined1 *)(param_2 + 0x20);
  iVar6 = iVar4 - iVar6;
  if ((iVar4 == 0) && (iVar6 < 1)) {
    thunk_FUN_ram_40004f92(apiStack_6c,0,0x2c);
    iVar11 = iStack_d8;
    iVar4 = iStack_dc;
    iVar1 = iStack_e0;
    iVar6 = iStack_e4;
    iVar13 = *param_3;
    iVar10 = param_3[2];
    iVar2 = param_3[1];
    apiStack_6c[0] = &iStack_90;
    iStack_84 = iStack_e0 + -1;
    iVar16 = param_3[3];
    iStack_90 = iVar13;
    iStack_88 = iVar10;
    if (iVar2 <= iStack_e0) {
      iStack_8c = iVar2;
      FUN_ram_4005464e(param_1,apiStack_6c);
    }
    iStack_8c = iStack_d8 + 1;
    iStack_84 = param_3[3];
    if (iVar11 <= iVar16) {
      FUN_ram_4005464e(param_1,apiStack_6c);
    }
    iStack_90 = *param_3;
    iStack_88 = iStack_e4 + -1;
    iStack_8c = iStack_e0;
    if (iVar1 < iVar2) {
      iStack_8c = param_3[1];
    }
    iStack_84 = iStack_d8;
    if (iVar16 < iVar11) {
      iStack_84 = param_3[3];
    }
    if (iVar13 <= iVar6) {
      FUN_ram_4005464e(param_1,apiStack_6c);
    }
    iStack_88 = param_3[2];
    iStack_90 = iStack_dc + 1;
    if (iVar10 < iVar4) {
      return;
    }
    FUN_ram_4005464e(param_1,apiStack_6c);
    return;
  }
  uVar5 = FUN_ram_4004a4fe(&iStack_d4,param_3,*(undefined4 *)(param_1 + 8));
  if (uVar5 == 0) {
    return;
  }
  iVar1 = (iStack_cc - iStack_d4) + 1;
  thunk_FUN_ram_40004f92(apiStack_6c,0,0x2c);
  uVar3 = FUN_ram_4005a952(iVar1);
  puStack_f0 = (undefined1 *)0x0;
  piStack_ec = (int *)0x0;
  uStack_e8 = 0;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  uStack_54 = uVar3;
  FUN_ram_40052fc0(auStack_b4,&iStack_e4,iVar6,1);
  puStack_f0 = auStack_b4;
  if (0 < iVar4) {
    FUN_ram_40052fc0(&iStack_90,param_3,iVar4,0);
    piStack_ec = &iStack_90;
  }
  iVar10 = iStack_d8;
  iVar2 = iStack_dc;
  iVar11 = iStack_e0;
  iVar6 = iStack_e4;
  apiStack_6c[0] = &iStack_c4;
  iVar16 = *param_3;
  iVar7 = param_3[2];
  iVar8 = param_3[1];
  iVar9 = param_3[3];
  iVar13 = iVar4 + iVar16;
  if (iVar4 + iVar16 < iStack_e4) {
    iVar13 = iStack_e4;
  }
  iVar14 = iVar7 - iVar4;
  if (iStack_dc < iVar7 - iVar4) {
    iVar14 = iStack_dc;
  }
  iVar17 = iVar4 + iVar8;
  if (iVar4 + iVar8 < iStack_e0) {
    iVar17 = iStack_e0;
  }
  iVar12 = iVar9 - iVar4;
  if (iStack_d8 < iVar9 - iVar4) {
    iVar12 = iStack_d8;
  }
  if ((((iVar16 <= iStack_e4) && (iStack_dc <= iVar7)) && (iVar8 <= iStack_e0)) &&
     (iStack_d8 <= iVar9)) {
    uVar5 = iVar14 - iVar13 < 0x31 ^ 1;
  }
  uStack_50 = 1;
  piStack_4c = apiStack_6c[0];
  if (iStack_e0 < iVar8) {
    if ((iStack_d8 <= iVar9) && (uVar5 != 0)) {
LAB_ram_400502f8:
      iStack_c0 = iStack_d8 + 1;
      iStack_b8 = param_3[3];
      iStack_c4 = iVar13;
      iStack_bc = iVar14;
      FUN_ram_4005464e(param_1,apiStack_6c);
    }
  }
  else if (uVar5 != 0) {
    iStack_b8 = iStack_e0 + -1;
    iStack_c4 = iVar13;
    iStack_c0 = iVar8;
    iStack_bc = iVar14;
    FUN_ram_4005464e(param_1,apiStack_6c);
    if (iVar10 <= iVar9) goto LAB_ram_400502f8;
  }
  if (iStack_e4 < iStack_dc) {
    if (iVar16 <= iVar6) {
LAB_ram_40050388:
      iStack_c4 = *param_3;
      iStack_bc = iStack_e4 + -1;
      iStack_c0 = iVar17;
      iStack_b8 = iVar12;
      FUN_ram_4005464e(param_1,apiStack_6c);
    }
LAB_ram_4005039e:
    if (iVar2 <= iVar7) {
      iStack_c4 = iStack_dc + 1;
      goto LAB_ram_40050328;
    }
  }
  else {
    if (iVar6 < iVar16) goto LAB_ram_4005039e;
    if (iVar7 < iVar2) goto LAB_ram_40050388;
    iStack_c4 = *param_3;
LAB_ram_40050328:
    iStack_bc = param_3[2];
    iStack_c0 = iVar17;
    iStack_b8 = iVar12;
    FUN_ram_4005464e(param_1,apiStack_6c);
  }
  iStack_c4 = iStack_d4;
  if (uVar5 == 0) {
    iStack_bc = iStack_cc;
    iVar6 = 0;
    iVar11 = iStack_e0 - param_3[1];
    if (iStack_e0 - param_3[1] < iVar4) {
      iVar11 = iVar4;
    }
    for (; iVar6 < iVar11; iVar6 = iVar6 + 1) {
      iVar2 = param_3[1] + iVar6;
      iVar10 = param_3[3] - iVar6;
      if ((iStack_d0 <= iVar2) || (iVar10 <= iStack_c8)) {
        thunk_FUN_ram_40004f92(uVar3,0xff,iVar1);
        uStack_50 = FUN_ram_40052cb0(&puStack_f0,uVar3,iStack_c4,iVar2,iVar1);
        if (iStack_d0 <= iVar2) {
          iStack_c0 = iVar2;
          iStack_b8 = iVar2;
          FUN_ram_4005464e(param_1,apiStack_6c);
        }
        if (iVar10 <= iStack_c8) {
          iStack_c0 = iVar10;
          iStack_b8 = iVar10;
          FUN_ram_4005464e(param_1,apiStack_6c);
        }
      }
    }
    goto LAB_ram_4005035e;
  }
  iStack_bc = iVar13 + -1;
  if (iStack_cc < iVar13 + -1) {
    iStack_bc = iStack_cc;
  }
  iVar1 = (iStack_bc - iStack_d4) + 1;
  if (0 < iVar1) {
    iVar15 = iStack_d0;
    iVar13 = iVar12;
    if ((iVar6 < iVar16) && (iVar11 < iVar8)) {
LAB_ram_4005048c:
      if (iVar9 < iVar10) goto LAB_ram_4005041e;
    }
    else {
      for (; iVar15 < iVar17; iVar15 = iVar15 + 1) {
        iStack_c0 = iVar15;
        iStack_b8 = iVar15;
        thunk_FUN_ram_40004f92(uVar3,0xff,iVar1);
        uStack_50 = FUN_ram_40052cb0(&puStack_f0,uVar3,iStack_c4,iVar15,iVar1);
        FUN_ram_4005464e(param_1,apiStack_6c);
      }
      if (iVar6 < iVar16) goto LAB_ram_4005048c;
    }
    while (iVar13 = iVar13 + 1, iVar13 <= iStack_c8) {
      iStack_c0 = iVar13;
      iStack_b8 = iVar13;
      thunk_FUN_ram_40004f92(uVar3,0xff,iVar1);
      uStack_50 = FUN_ram_40052cb0(&puStack_f0,uVar3,iStack_c4,iVar13,iVar1);
      FUN_ram_4005464e(param_1,apiStack_6c);
    }
  }
LAB_ram_4005041e:
  iStack_bc = iStack_cc;
  iStack_c4 = iStack_d4;
  if (iStack_d4 < iVar14 + 1) {
    iStack_c4 = iVar14 + 1;
  }
  iVar6 = (iStack_cc - iStack_c4) + 1;
  if (iVar6 < 1) goto LAB_ram_4005035e;
  iVar1 = iStack_d0;
  if ((iVar7 < iVar2) && (iVar11 < iVar8)) {
LAB_ram_40050444:
    if (iVar9 < iVar10) goto LAB_ram_4005035e;
  }
  else {
    for (; iVar1 < iVar17; iVar1 = iVar1 + 1) {
      iStack_c0 = iVar1;
      iStack_b8 = iVar1;
      thunk_FUN_ram_40004f92(uVar3,0xff,iVar6);
      uStack_50 = FUN_ram_40052cb0(&puStack_f0,uVar3,iStack_c4,iVar1,iVar6);
      FUN_ram_4005464e(param_1,apiStack_6c);
    }
    if (iVar7 < iVar2) goto LAB_ram_40050444;
  }
  while (iVar12 = iVar12 + 1, iVar12 <= iStack_c8) {
    iStack_c0 = iVar12;
    iStack_b8 = iVar12;
    thunk_FUN_ram_40004f92(uVar3,0xff,iVar6);
    uStack_50 = FUN_ram_40052cb0(&puStack_f0,uVar3,iStack_c4,iVar12,iVar6);
    FUN_ram_4005464e(param_1,apiStack_6c);
  }
LAB_ram_4005035e:
  FUN_ram_40052d04(auStack_b4);
  if (0 < iVar4) {
    FUN_ram_40052d04(&iStack_90);
  }
  FUN_ram_4005a988(uVar3);
  return;
}


/* NanoCore 1.12, address 0x40050544.
 * REA evidence: ev_d51a0f62cae20df1e8322495fa7b8c6ad674852d58d683e37289125481c89b5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40050544(int param_1,uint param_2,ushort *param_3)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  
  iVar12 = param_1 * 2;
  iVar13 = (int)param_2 >> 1;
  iVar3 = FUN_ram_4005a952(iVar12);
  iVar11 = iVar13 - (uint)((param_2 & 1) == 0);
  puVar2 = param_3;
  for (iVar14 = 0; iVar14 < param_1; iVar14 = iVar14 + 1) {
    iVar10 = param_1 + -1;
    iVar7 = iVar10 - iVar11;
    iVar5 = puVar2[param_1 + -1] * param_2;
    do {
      *(short *)(iVar3 + iVar10 * 2) = (short)iVar5;
      uVar8 = 0;
      if (iVar10 + iVar13 < param_1) {
        uVar8 = (uint)puVar2[iVar13 + iVar10];
      }
      if (iVar7 < 1) {
        uVar4 = *puVar2;
      }
      else {
        uVar4 = puVar2[iVar7 + -1];
      }
      iVar10 = iVar10 + -1;
      iVar5 = (iVar5 - uVar8) + (uint)uVar4;
      iVar7 = iVar7 + -1;
    } while (iVar10 != -1);
    thunk_FUN_ram_4000500c(puVar2,iVar3,iVar12);
    puVar2 = puVar2 + param_1;
  }
  if (param_2 == 0) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = (ushort)(0x3fc0 / param_2);
  }
  for (iVar14 = 0; param_1 * param_1 != iVar14; iVar14 = iVar14 + 1) {
    uVar8 = (uint)param_3[iVar14];
    if (uVar8 != 0) {
      if (uVar8 == 0x3fc0) {
        param_3[iVar14] = uVar4;
      }
      else {
        if (param_2 == 0) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = (ushort)((int)uVar8 / (int)param_2);
        }
        param_3[iVar14] = uVar6;
      }
    }
  }
  iVar11 = iVar11 + 1;
  for (iVar14 = 0; iVar14 < param_1; iVar14 = iVar14 + 1) {
    iVar10 = *param_3 * param_2;
    iVar5 = 0;
    puVar2 = param_3;
    iVar7 = 0;
    do {
      iVar9 = iVar7;
      uVar15 = 0;
      if (-1 < iVar10) {
        uVar15 = (undefined2)((uint)(iVar10 << 10) >> 0x10);
      }
      *(undefined2 *)(iVar3 + iVar9 * 2) = uVar15;
      if (iVar9 - iVar13 < 1) {
        uVar4 = *puVar2;
      }
      else {
        uVar4 = *(ushort *)((int)param_3 + iVar5 + param_1 * iVar13 * -2);
      }
      if (iVar11 + iVar9 < param_1) {
        uVar6 = *(ushort *)((int)param_3 + iVar5 + iVar12 * iVar11);
      }
      else {
        uVar6 = param_3[(param_1 + -1) * param_1];
      }
      iVar10 = (iVar10 - (uint)uVar4) + (uint)uVar6;
      puVar2 = puVar2 + param_1;
      iVar5 = iVar5 + iVar12;
      iVar7 = iVar9 + 1;
    } while (param_1 != iVar9 + 1);
    iVar7 = 0;
    puVar2 = param_3;
    do {
      *puVar2 = *(ushort *)(iVar3 + iVar7 * 2);
      puVar2 = puVar2 + param_1;
      bVar1 = iVar9 != iVar7;
      iVar7 = iVar7 + 1;
    } while (bVar1);
    param_3 = param_3 + 1;
  }
  FUN_ram_4005a988(iVar3);
  return;
}


/* NanoCore 1.12, address 0x400506d4.
 * REA evidence: ev_258c7989950d7a7fb8cd68d7fd72f7d6f540694072ff071555bca250883b19a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005094e) */
/* WARNING: Removing unreachable block (ram,0x4005072c) */
/* WARNING: Removing unreachable block (ram,0x40050712) */
/* WARNING: Removing unreachable block (ram,0x400507fe) */
/* WARNING: Removing unreachable block (ram,0x40050968) */

void FUN_ram_400506d4(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iStack_104;
  byte *pbStack_100;
  int iStack_fc;
  int *piStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined1 auStack_d0 [16];
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  code *apcStack_6c [5];
  byte bStack_58;
  undefined1 auStack_57 [3];
  int iStack_54;
  undefined1 uStack_50;
  code *pcStack_4c;
  
  iVar15 = *(int *)(param_2 + 0x28);
  iVar18 = (*param_3 + *(int *)(param_2 + 0x2c)) - iVar15;
  iVar4 = *(int *)(param_2 + 0x2c) + param_3[2] + iVar15;
  iVar17 = (param_3[1] + *(int *)(param_2 + 0x30)) - iVar15;
  iVar15 = *(int *)(param_2 + 0x30) + param_3[3] + iVar15;
  iVar16 = *(int *)(param_2 + 0x24) / 2;
  iVar11 = -(*(int *)(param_2 + 0x24) / 2);
  iStack_e0 = iVar18 + iVar11 + -1;
  iStack_dc = iVar11 + iVar17 + -1;
  iStack_d4 = iVar16 + iVar15 + 1;
  bVar1 = *(byte *)(param_2 + 0x34);
  iStack_d8 = iVar4 + iVar16 + 1;
  if (0xfd < bVar1) {
    bVar1 = 0xff;
  }
  iVar11 = FUN_ram_4004a4fe(auStack_d0,&iStack_e0,*(undefined4 *)(param_1 + 8));
  if (iVar11 == 0) {
    return;
  }
  iStack_c0 = *param_3;
  iStack_bc = param_3[1];
  iStack_b8 = param_3[2];
  iStack_b4 = param_3[3];
  FUN_ram_4004a4ca(&iStack_c0,0xffffffff,0xffffffff);
  iVar16 = *(int *)(param_2 + 0x1c);
  iVar11 = iStack_b4 - iStack_bc;
  if (iStack_b8 - iStack_c0 < iStack_b4 - iStack_bc) {
    iVar11 = iStack_b8 - iStack_c0;
  }
  iVar15 = iVar15 - iVar17;
  iVar4 = iVar4 - iVar18;
  iVar18 = iVar15 + 1;
  iVar19 = iVar4 + 1;
  iVar17 = iVar18;
  if (iVar4 < iVar15) {
    iVar17 = iVar19;
  }
  iVar15 = iVar11 + 1 >> 1;
  if (iVar16 < iVar15) {
    iVar15 = iVar16;
  }
  iVar4 = iVar17 >> 1;
  if (iVar16 < iVar17 >> 1) {
    iVar4 = iVar16;
  }
  iVar11 = *(int *)(param_2 + 0x24) + iVar4;
  puVar5 = (undefined2 *)FUN_ram_4005a952(iVar11 * iVar11 * 2);
  uVar21 = *(uint *)(param_2 + 0x24);
  iVar16 = iVar4 + uVar21;
  iStack_88 = (uVar21 | 0xfffffffe) + iVar4 + (int)uVar21 / 2;
  iStack_8c = (int)uVar21 / 2 + 1;
  iStack_90 = iStack_88 - iVar19;
  iStack_84 = iStack_8c + iVar18;
  FUN_ram_40052fc0(apcStack_6c,&iStack_90,iVar4,0);
  iVar4 = 1;
  if (uVar21 != 1) {
    iVar4 = (int)uVar21 >> 1;
  }
  pbVar6 = (byte *)FUN_ram_4005a952(iVar16);
  puVar12 = puVar5;
  for (iVar17 = 0; iVar17 < iVar16; iVar17 = iVar17 + 1) {
    thunk_FUN_ram_40004f92(pbVar6,0xff,iVar16);
    iVar18 = (*apcStack_6c[0])(pbVar6,0,iVar17,iVar16,apcStack_6c,apcStack_6c[0]);
    if (iVar18 == 0) {
      thunk_FUN_ram_40004f92(puVar12,0,iVar16 * 2);
    }
    else {
      if (iVar4 == 0) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = (undefined2)((int)((uint)*pbVar6 << 6) / iVar4);
      }
      *puVar12 = uVar13;
      for (iVar18 = 1; iVar16 != iVar18; iVar18 = iVar18 + 1) {
        if ((uint)pbVar6[iVar18 + -1] == (uint)pbVar6[iVar18]) {
          uVar13 = puVar12[iVar18 + -1];
        }
        else if (iVar4 == 0) {
          uVar13 = 0xffff;
        }
        else {
          uVar13 = (undefined2)((int)((uint)pbVar6[iVar18] << 6) / iVar4);
        }
        puVar12[iVar18] = uVar13;
      }
    }
    puVar12 = puVar12 + iVar16;
  }
  FUN_ram_4005a988(pbVar6);
  iVar17 = iVar16 * iVar16;
  FUN_ram_40052d04(apcStack_6c);
  if (iVar4 == 1) {
    for (iVar4 = 0; iVar4 != iVar17; iVar4 = iVar4 + 1) {
      *(char *)((int)puVar5 + iVar4) = (char)((ushort)puVar5[iVar4] >> 6);
    }
  }
  else {
    FUN_ram_40050544(iVar16,iVar4,puVar5);
    iVar4 = (uVar21 & 1) + iVar4;
    if (1 < iVar4) {
      if (iVar4 == 0) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = (undefined2)(0x3fc0 / iVar4);
      }
      for (iVar18 = 0; iVar18 != iVar17; iVar18 = iVar18 + 1) {
        uVar21 = (uint)(ushort)puVar5[iVar18];
        if (uVar21 != 0) {
          if (uVar21 == 0xff) {
            puVar5[iVar18] = uVar13;
          }
          else {
            if (iVar4 == 0) {
              uVar14 = 0xffff;
            }
            else {
              uVar14 = (undefined2)((int)(uVar21 << 6) / iVar4);
            }
            puVar5[iVar18] = uVar14;
          }
        }
      }
      FUN_ram_40050544(iVar16,iVar4,puVar5);
    }
    for (iVar4 = 0; iVar4 != iVar17; iVar4 = iVar4 + 1) {
      *(char *)((int)puVar5 + iVar4) = (char)puVar5[iVar4];
    }
  }
  piStack_e8 = (int *)0x0;
  uStack_e4 = 0;
  iVar4 = -((*(int *)(param_2 + 0x34) << 0x17) >> 0x1f);
  if (iVar4 == 0) {
    FUN_ram_40052fc0(&iStack_90,&iStack_c0,iVar15,1);
    piStack_e8 = &iStack_90;
  }
  iVar16 = FUN_ram_4005a952((iStack_d8 - iStack_e0) + 1);
  thunk_FUN_ram_40004f92(apcStack_6c,0,0x2c);
  apcStack_6c[0] = (code *)&iStack_b0;
  iStack_54 = iVar16;
  pcStack_4c = apcStack_6c[0];
  FUN_ram_4000303c(auStack_57,param_2 + 0x20,3);
  bStack_58 = *(byte *)(param_2 + 0x34);
  iStack_a8 = iStack_d8;
  iStack_b0 = (iStack_d8 - iVar11) + 1;
  iVar17 = ((iStack_d8 - iStack_e0) + 1) / 2 + iStack_e0;
  iStack_ac = iStack_dc;
  if (iStack_b0 < iVar17) {
    iStack_b0 = iVar17;
  }
  iVar18 = ((iStack_d4 - iStack_dc) + 1) / 2 + iStack_dc;
  iStack_a4 = iStack_dc + iVar11 + -1;
  if (iVar18 < iStack_a4) {
    iStack_a4 = iVar18;
  }
  iVar19 = FUN_ram_4004a4fe(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar19 != 0) &&
     (iVar10 = FUN_ram_4004a6a6(&iStack_a0,&iStack_c0,iVar15), iVar9 = iStack_9c, iVar20 = iStack_a0
     , iVar7 = iStack_d8, iVar19 = iStack_dc, iVar10 == 0)) {
    pbStack_100 = (byte *)0x0;
    iVar10 = (iStack_98 - iStack_a0) + 1;
    if (iVar4 != 0) {
      FUN_ram_4004a83a(&iStack_a0,&iStack_c0,iVar15);
      pbStack_100 = (byte *)iVar4;
    }
    if (0 < iVar10) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      iVar7 = (int)puVar5 + (iVar20 - ((iVar7 - iVar11) + 1)) + (iVar9 - iVar19) * iVar11;
      uStack_50 = 2;
      iStack_54 = iVar16;
      for (iVar19 = iStack_9c; iVar19 <= iStack_94; iVar19 = iVar19 + 1) {
        iStack_ac = iVar19;
        iStack_a4 = iVar19;
        iVar20 = iVar7;
        if (pbStack_100 == (byte *)0x0) {
          thunk_FUN_ram_4000500c(iVar16,iVar7,iVar11);
          iVar9 = FUN_ram_40052cb0(&piStack_e8,iVar16,iStack_a0,iVar19,iVar10);
          iVar20 = iStack_54;
          if (iVar9 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar9;
          }
        }
        iStack_54 = iVar20;
        FUN_ram_4005464e(param_1,apcStack_6c);
        iVar7 = iVar7 + iVar11;
      }
    }
  }
  iVar19 = iVar18 + 1;
  iStack_a8 = iStack_d8;
  iStack_b0 = (iStack_d8 - iVar11) + 1;
  iStack_a4 = iStack_d4;
  if (iStack_b0 < iVar17) {
    iStack_b0 = iVar17;
  }
  iStack_ac = (iStack_d4 - iVar11) + 1;
  if (iStack_ac < iVar19) {
    iStack_ac = iVar19;
  }
  iVar7 = FUN_ram_4004a4fe(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar7 != 0) &&
     (iVar8 = FUN_ram_4004a6a6(&iStack_a0,&iStack_c0,iVar15), iVar10 = iStack_94, iVar9 = iStack_a0,
     iVar20 = iStack_a4, iVar7 = iStack_d8, iVar8 == 0)) {
    pbStack_100 = (byte *)0x0;
    iVar8 = (iStack_98 - iStack_a0) + 1;
    if (iVar4 != 0) {
      FUN_ram_4004a83a(&iStack_a0,&iStack_c0,iVar15);
      pbStack_100 = (byte *)iVar4;
    }
    if (0 < iVar8) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      iVar20 = (int)puVar5 + (iVar9 - ((iVar7 - iVar11) + 1)) + (iVar20 - iVar10) * iVar11;
      uStack_50 = 2;
      iStack_54 = iVar16;
      for (iVar7 = iStack_94; iStack_9c <= iVar7; iVar7 = iVar7 + -1) {
        iStack_ac = iVar7;
        iStack_a4 = iVar7;
        iVar9 = iVar20;
        if (pbStack_100 == (byte *)0x0) {
          thunk_FUN_ram_4000500c(iVar16,iVar20,iVar11);
          iVar10 = FUN_ram_40052cb0(&piStack_e8,iVar16,iStack_a0,iVar7,iVar8);
          iVar9 = iStack_54;
          if (iVar10 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar10;
          }
        }
        iStack_54 = iVar9;
        FUN_ram_4005464e(param_1,apcStack_6c);
        iVar20 = iVar20 + iVar11;
      }
    }
  }
  iStack_b0 = iStack_e0 + iVar11;
  iStack_a8 = iStack_d8 - iVar11;
  iStack_ac = iStack_dc;
  iStack_a4 = iStack_dc + iVar11 + -1;
  if (iVar18 < iStack_a4) {
    iStack_a4 = iVar18;
  }
  iVar7 = FUN_ram_4004a4fe(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar7 != 0) &&
     (iVar9 = FUN_ram_4004a6a6(&iStack_a0,&iStack_c0,iVar15), iVar20 = iStack_9c, iVar7 = iStack_ac,
     iVar9 == 0)) {
    iVar9 = (iStack_98 - iStack_a0) + 1;
    if (iVar4 == 0) {
      if (iVar9 < 1) goto LAB_ram_40050a8c;
      iStack_fc = 0;
      iStack_54 = iVar16;
    }
    else {
      FUN_ram_4004a83a(&iStack_a0,&iStack_c0,iVar15);
      if (iVar9 < 1) goto LAB_ram_40050a8c;
      iStack_54 = 0;
      iStack_fc = iVar4;
    }
    pbStack_100 = (byte *)((int)puVar5 + (iVar20 - iVar7) * iVar11);
    iStack_b0 = iStack_a0;
    iStack_a8 = iStack_98;
    for (iVar7 = iStack_9c; iVar7 <= iStack_94; iVar7 = iVar7 + 1) {
      bVar2 = *pbStack_100;
      iStack_a4 = iVar7;
      iStack_ac = iVar7;
      if (iStack_fc == 0) {
        thunk_FUN_ram_40004f92(iVar16,(uint)bVar2,iVar9);
        iVar20 = FUN_ram_40052cb0(&piStack_e8,iVar16,iStack_a0,iVar7,iVar9);
        if (iVar20 == 1) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = (undefined1)iVar20;
        }
      }
      else {
        bStack_58 = bVar2;
        if (bVar1 != 0xff) {
          bStack_58 = (byte)((uint)*(byte *)(param_2 + 0x34) * (uint)bVar2 >> 8);
        }
      }
      FUN_ram_4005464e(param_1,apcStack_6c);
      pbStack_100 = pbStack_100 + iVar11;
    }
  }
LAB_ram_40050a8c:
  bStack_58 = *(byte *)(param_2 + 0x34);
  iStack_b0 = iStack_e0 + iVar11;
  iStack_a8 = iStack_d8 - iVar11;
  iStack_a4 = iStack_d4;
  iStack_ac = (iStack_d4 - iVar11) + 1;
  if (iStack_ac < iVar19) {
    iStack_ac = iVar19;
  }
  iVar7 = FUN_ram_4004a4fe(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if (((iVar7 != 0) &&
      (iVar9 = FUN_ram_4004a6a6(&iStack_a0,&iStack_c0,iVar15), iVar20 = iStack_94, iVar7 = iStack_a4
      , iVar9 == 0)) && (iVar9 = (iStack_98 - iStack_a0) + 1, 0 < iVar9)) {
    iVar10 = iVar16;
    if (iVar4 != 0) {
      FUN_ram_4004a83a(&iStack_a0,&iStack_c0,iVar15);
      iStack_54 = 0;
      iVar10 = iStack_54;
    }
    iStack_54 = iVar10;
    iStack_b0 = iStack_a0;
    pbVar6 = (byte *)((int)puVar5 + (iVar7 - iVar20) * iVar11);
    iStack_a8 = iStack_98;
    for (iVar7 = iStack_94; iStack_9c <= iVar7; iVar7 = iVar7 + -1) {
      iStack_a4 = iVar7;
      iStack_ac = iVar7;
      if (iVar4 == 0) {
        thunk_FUN_ram_40004f92(iVar16,*pbVar6,iVar9);
        iVar20 = FUN_ram_40052cb0(&piStack_e8,iVar16,iStack_a0,iVar7,iVar9);
        if (iVar20 == 1) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = (undefined1)iVar20;
        }
      }
      else {
        FUN_ram_4004a83a(&iStack_a0,&iStack_c0,iVar15);
        bStack_58 = *pbVar6;
        if (bVar1 != 0xff) {
          bStack_58 = (byte)((uint)bStack_58 * (uint)*(byte *)(param_2 + 0x34) >> 8);
        }
      }
      FUN_ram_4005464e(param_1,apcStack_6c);
      pbVar6 = pbVar6 + iVar11;
    }
  }
  bStack_58 = *(undefined1 *)(param_2 + 0x34);
  iStack_a8 = iStack_d8;
  iStack_ac = iStack_dc + iVar11;
  if (iVar18 < iStack_dc + iVar11) {
    iStack_ac = iVar19;
  }
  iStack_b0 = (iStack_d8 - iVar11) + 1;
  iStack_a4 = iStack_d4 - iVar11;
  if (iStack_d4 - iVar11 < iVar18) {
    iStack_a4 = iVar18;
  }
  if (iStack_b0 < iVar17) {
    iStack_b0 = iVar17;
  }
  iVar7 = FUN_ram_4004a4fe(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar7 != 0) && (iVar7 = FUN_ram_4004a6a6(&iStack_a0,&iStack_c0,iVar15), iVar7 == 0)) {
    iVar20 = (iStack_98 - iStack_a0) + 1;
    iVar7 = (iStack_a0 - ((iStack_d8 - iVar11) + 1)) + (iVar11 + -1) * iVar11 + (int)puVar5;
    if (iVar4 == 0) {
      iStack_104 = 0;
      iStack_54 = iVar16;
    }
    else {
      FUN_ram_4004a83a(&iStack_a0,&iStack_c0,iVar15);
      iStack_54 = iVar7;
      iStack_104 = iVar4;
    }
    if (0 < iVar20) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      uStack_50 = 2;
      for (iVar9 = iStack_9c; iVar9 <= iStack_94; iVar9 = iVar9 + 1) {
        iStack_ac = iVar9;
        iStack_a4 = iVar9;
        if (iStack_104 == 0) {
          thunk_FUN_ram_4000500c(iVar16,iVar7,iVar20);
          iVar10 = FUN_ram_40052cb0(&piStack_e8,iVar16,iStack_a0,iVar9,iVar20);
          if (iVar10 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar10;
          }
        }
        FUN_ram_4005464e(param_1,apcStack_6c);
      }
    }
  }
  puVar12 = puVar5;
  for (iVar7 = 0; iVar7 < iVar11; iVar7 = iVar7 + 1) {
    for (iVar20 = 0; iVar20 < iVar11 >> 1; iVar20 = iVar20 + 1) {
      uVar3 = *(undefined1 *)((int)puVar12 + iVar20);
      *(undefined1 *)((int)puVar12 + iVar20) = *(undefined1 *)((int)puVar12 + -iVar20 + iVar11 + -1)
      ;
      *(undefined1 *)((int)puVar12 + -iVar20 + iVar11 + -1) = uVar3;
    }
    puVar12 = (undefined2 *)((int)puVar12 + iVar11);
  }
  iStack_ac = iStack_dc + iVar11;
  if (iVar18 < iStack_dc + iVar11) {
    iStack_ac = iVar19;
  }
  iStack_b0 = iStack_e0;
  iStack_a8 = iStack_e0 + iVar11 + -1;
  iStack_a4 = iStack_d4 - iVar11;
  if (iStack_d4 - iVar11 < iVar18) {
    iStack_a4 = iVar18;
  }
  iVar17 = iVar17 + -1;
  if (iVar17 < iStack_a8) {
    iStack_a8 = iVar17;
  }
  iVar7 = FUN_ram_4004a4fe(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar7 != 0) && (iVar7 = FUN_ram_4004a6a6(&iStack_a0,&iStack_c0,iVar15), iVar7 == 0)) {
    iVar20 = (iStack_98 - iStack_a0) + 1;
    iVar7 = (iStack_a0 - iStack_b0) + (iVar11 + -1) * iVar11 + (int)puVar5;
    if (iVar4 == 0) {
      iStack_104 = 0;
      iStack_54 = iVar16;
    }
    else {
      FUN_ram_4004a83a(&iStack_a0,&iStack_c0,iVar15);
      iStack_54 = iVar7;
      iStack_104 = iVar4;
    }
    if (0 < iVar20) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      uStack_50 = 2;
      for (iVar9 = iStack_9c; iVar9 <= iStack_94; iVar9 = iVar9 + 1) {
        iStack_ac = iVar9;
        iStack_a4 = iVar9;
        if (iStack_104 == 0) {
          thunk_FUN_ram_4000500c(iVar16,iVar7,iVar20);
          iVar10 = FUN_ram_40052cb0(&piStack_e8,iVar16,iStack_a0,iVar9,iVar20);
          if (iVar10 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar10;
          }
        }
        FUN_ram_4005464e(param_1,apcStack_6c);
      }
    }
  }
  iStack_b0 = iStack_e0;
  iStack_a8 = iStack_e0 + iVar11 + -1;
  iStack_ac = iStack_dc;
  if (iVar17 < iStack_a8) {
    iStack_a8 = iVar17;
  }
  iStack_a4 = iStack_dc + iVar11 + -1;
  if (iVar18 < iStack_a4) {
    iStack_a4 = iVar18;
  }
  iVar7 = FUN_ram_4004a4fe(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar7 != 0) &&
     (iVar8 = FUN_ram_4004a6a6(&iStack_a0,&iStack_c0,iVar15), iVar10 = iStack_9c, iVar9 = iStack_a0,
     iVar20 = iStack_ac, iVar7 = iStack_b0, iVar8 == 0)) {
    iStack_104 = 0;
    iVar8 = (iStack_98 - iStack_a0) + 1;
    if (iVar4 != 0) {
      FUN_ram_4004a83a(&iStack_a0,&iStack_c0,iVar15);
      iStack_104 = iVar4;
    }
    iStack_54 = iVar16;
    if (0 < iVar8) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      iVar20 = (int)puVar5 + (iVar9 - iVar7) + (iVar10 - iVar20) * iVar11;
      uStack_50 = 2;
      for (iVar7 = iStack_9c; iVar7 <= iStack_94; iVar7 = iVar7 + 1) {
        iStack_ac = iVar7;
        iStack_a4 = iVar7;
        iVar9 = iVar20;
        if (iStack_104 == 0) {
          thunk_FUN_ram_4000500c(iVar16,iVar20,iVar11);
          iVar10 = FUN_ram_40052cb0(&piStack_e8,iVar16,iStack_a0,iVar7,iVar8);
          iVar9 = iStack_54;
          if (iVar10 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar10;
          }
        }
        iStack_54 = iVar9;
        FUN_ram_4005464e(param_1,apcStack_6c);
        iVar20 = iVar20 + iVar11;
      }
    }
  }
  iStack_a4 = iStack_d4;
  iStack_ac = (iStack_d4 - iVar11) + 1;
  iStack_b0 = iStack_e0;
  if (iStack_ac < iVar19) {
    iStack_ac = iVar19;
  }
  iStack_a8 = iStack_e0 + iVar11 + -1;
  if (iVar17 < iStack_a8) {
    iStack_a8 = iVar17;
  }
  iVar17 = FUN_ram_4004a4fe(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar17 != 0) &&
     (iVar10 = FUN_ram_4004a6a6(&iStack_a0,&iStack_c0,iVar15), iVar9 = iStack_94, iVar20 = iStack_a0
     , iVar7 = iStack_a4, iVar17 = iStack_b0, iVar10 == 0)) {
    iVar8 = (iStack_98 - iStack_a0) + 1;
    iVar10 = 0;
    if (iVar4 != 0) {
      FUN_ram_4004a83a(&iStack_a0,&iStack_c0,iVar15);
      iVar10 = iVar4;
    }
    if (0 < iVar8) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      iVar7 = (int)puVar5 + (iVar20 - iVar17) + (iVar7 - iVar9) * iVar11;
      uStack_50 = 2;
      iStack_54 = iVar16;
      for (iVar17 = iStack_94; iStack_9c <= iVar17; iVar17 = iVar17 + -1) {
        iStack_ac = iVar17;
        iStack_a4 = iVar17;
        iVar20 = iVar7;
        if (iVar10 == 0) {
          thunk_FUN_ram_4000500c(iVar16,iVar7,iVar11);
          iVar9 = FUN_ram_40052cb0(&piStack_e8,iVar16,iStack_a0,iVar17,iVar8);
          iVar20 = iStack_54;
          if (iVar9 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar9;
          }
        }
        iStack_54 = iVar20;
        FUN_ram_4005464e(param_1,apcStack_6c);
        iVar7 = iVar7 + iVar11;
      }
    }
  }
  iStack_b0 = iStack_e0 + iVar11;
  iStack_a8 = iStack_d8 - iVar11;
  iStack_ac = iStack_dc + iVar11;
  if (iVar18 < iStack_dc + iVar11) {
    iStack_ac = iVar19;
  }
  iStack_a4 = iStack_d4 - iVar11;
  if (iStack_d4 - iVar11 < iVar18) {
    iStack_a4 = iVar18;
  }
  iStack_54 = iVar16;
  iVar11 = FUN_ram_4004a4fe(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if (((iVar11 != 0) && (iVar15 = FUN_ram_4004a6a6(&iStack_a0,&iStack_c0,iVar15), iVar15 == 0)) &&
     (iVar15 = (iStack_98 - iStack_a0) + 1, 0 < iVar15)) {
    iStack_b0 = iStack_a0;
    iStack_a8 = iStack_98;
    for (iVar11 = iStack_9c; iVar11 <= iStack_94; iVar11 = iVar11 + 1) {
      iStack_ac = iVar11;
      iStack_a4 = iVar11;
      thunk_FUN_ram_40004f92(iVar16,0xff,iVar15);
      uStack_50 = FUN_ram_40052cb0(&piStack_e8,iVar16,iStack_a0,iVar11,iVar15);
      FUN_ram_4005464e(param_1,apcStack_6c);
    }
  }
  if (iVar4 == 0) {
    FUN_ram_40052d04(&iStack_90);
  }
  FUN_ram_4005a988(puVar5);
  FUN_ram_4005a988(iVar16);
  return;
}


