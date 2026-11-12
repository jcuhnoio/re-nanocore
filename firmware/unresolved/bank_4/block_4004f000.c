/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4004f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4004f276.
 * REA evidence: ev_fb68e2a737548d4ceb1dab50b5b151ae4078eacd4cf0fae1f509d99f93dff814
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f276(int param_1,int param_2,int *param_3)

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
    thunk_FUN_ram_4000505c(apiStack_6c,0,0x2c);
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
      FUN_ram_400538aa(param_1,apiStack_6c);
    }
    iStack_8c = iStack_d8 + 1;
    iStack_84 = param_3[3];
    if (iVar11 <= iVar16) {
      FUN_ram_400538aa(param_1,apiStack_6c);
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
      FUN_ram_400538aa(param_1,apiStack_6c);
    }
    iStack_88 = param_3[2];
    iStack_90 = iStack_dc + 1;
    if (iVar10 < iVar4) {
      return;
    }
    FUN_ram_400538aa(param_1,apiStack_6c);
    return;
  }
  uVar5 = FUN_ram_40049494(&iStack_d4,param_3,*(undefined4 *)(param_1 + 8));
  if (uVar5 == 0) {
    return;
  }
  iVar1 = (iStack_cc - iStack_d4) + 1;
  thunk_FUN_ram_4000505c(apiStack_6c,0,0x2c);
  uVar3 = FUN_ram_40059bae(iVar1);
  puStack_f0 = (undefined1 *)0x0;
  piStack_ec = (int *)0x0;
  uStack_e8 = 0;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  uStack_54 = uVar3;
  FUN_ram_4005221c(auStack_b4,&iStack_e4,iVar6,1);
  puStack_f0 = auStack_b4;
  if (0 < iVar4) {
    FUN_ram_4005221c(&iStack_90,param_3,iVar4,0);
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
LAB_ram_4004f554:
      iStack_c0 = iStack_d8 + 1;
      iStack_b8 = param_3[3];
      iStack_c4 = iVar13;
      iStack_bc = iVar14;
      FUN_ram_400538aa(param_1,apiStack_6c);
    }
  }
  else if (uVar5 != 0) {
    iStack_b8 = iStack_e0 + -1;
    iStack_c4 = iVar13;
    iStack_c0 = iVar8;
    iStack_bc = iVar14;
    FUN_ram_400538aa(param_1,apiStack_6c);
    if (iVar10 <= iVar9) goto LAB_ram_4004f554;
  }
  if (iStack_e4 < iStack_dc) {
    if (iVar16 <= iVar6) {
LAB_ram_4004f5e4:
      iStack_c4 = *param_3;
      iStack_bc = iStack_e4 + -1;
      iStack_c0 = iVar17;
      iStack_b8 = iVar12;
      FUN_ram_400538aa(param_1,apiStack_6c);
    }
LAB_ram_4004f5fa:
    if (iVar2 <= iVar7) {
      iStack_c4 = iStack_dc + 1;
      goto LAB_ram_4004f584;
    }
  }
  else {
    if (iVar6 < iVar16) goto LAB_ram_4004f5fa;
    if (iVar7 < iVar2) goto LAB_ram_4004f5e4;
    iStack_c4 = *param_3;
LAB_ram_4004f584:
    iStack_bc = param_3[2];
    iStack_c0 = iVar17;
    iStack_b8 = iVar12;
    FUN_ram_400538aa(param_1,apiStack_6c);
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
        thunk_FUN_ram_4000505c(uVar3,0xff,iVar1);
        uStack_50 = FUN_ram_40051f0c(&puStack_f0,uVar3,iStack_c4,iVar2,iVar1);
        if (iStack_d0 <= iVar2) {
          iStack_c0 = iVar2;
          iStack_b8 = iVar2;
          FUN_ram_400538aa(param_1,apiStack_6c);
        }
        if (iVar10 <= iStack_c8) {
          iStack_c0 = iVar10;
          iStack_b8 = iVar10;
          FUN_ram_400538aa(param_1,apiStack_6c);
        }
      }
    }
    goto LAB_ram_4004f5ba;
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
LAB_ram_4004f6e8:
      if (iVar9 < iVar10) goto LAB_ram_4004f67a;
    }
    else {
      for (; iVar15 < iVar17; iVar15 = iVar15 + 1) {
        iStack_c0 = iVar15;
        iStack_b8 = iVar15;
        thunk_FUN_ram_4000505c(uVar3,0xff,iVar1);
        uStack_50 = FUN_ram_40051f0c(&puStack_f0,uVar3,iStack_c4,iVar15,iVar1);
        FUN_ram_400538aa(param_1,apiStack_6c);
      }
      if (iVar6 < iVar16) goto LAB_ram_4004f6e8;
    }
    while (iVar13 = iVar13 + 1, iVar13 <= iStack_c8) {
      iStack_c0 = iVar13;
      iStack_b8 = iVar13;
      thunk_FUN_ram_4000505c(uVar3,0xff,iVar1);
      uStack_50 = FUN_ram_40051f0c(&puStack_f0,uVar3,iStack_c4,iVar13,iVar1);
      FUN_ram_400538aa(param_1,apiStack_6c);
    }
  }
LAB_ram_4004f67a:
  iStack_bc = iStack_cc;
  iStack_c4 = iStack_d4;
  if (iStack_d4 < iVar14 + 1) {
    iStack_c4 = iVar14 + 1;
  }
  iVar6 = (iStack_cc - iStack_c4) + 1;
  if (iVar6 < 1) goto LAB_ram_4004f5ba;
  iVar1 = iStack_d0;
  if ((iVar7 < iVar2) && (iVar11 < iVar8)) {
LAB_ram_4004f6a0:
    if (iVar9 < iVar10) goto LAB_ram_4004f5ba;
  }
  else {
    for (; iVar1 < iVar17; iVar1 = iVar1 + 1) {
      iStack_c0 = iVar1;
      iStack_b8 = iVar1;
      thunk_FUN_ram_4000505c(uVar3,0xff,iVar6);
      uStack_50 = FUN_ram_40051f0c(&puStack_f0,uVar3,iStack_c4,iVar1,iVar6);
      FUN_ram_400538aa(param_1,apiStack_6c);
    }
    if (iVar7 < iVar2) goto LAB_ram_4004f6a0;
  }
  while (iVar12 = iVar12 + 1, iVar12 <= iStack_c8) {
    iStack_c0 = iVar12;
    iStack_b8 = iVar12;
    thunk_FUN_ram_4000505c(uVar3,0xff,iVar6);
    uStack_50 = FUN_ram_40051f0c(&puStack_f0,uVar3,iStack_c4,iVar12,iVar6);
    FUN_ram_400538aa(param_1,apiStack_6c);
  }
LAB_ram_4004f5ba:
  FUN_ram_40051f60(auStack_b4);
  if (0 < iVar4) {
    FUN_ram_40051f60(&iStack_90);
  }
  FUN_ram_40059be4(uVar3);
  return;
}


/* NanoCore 1.10, address 0x4004f7a0.
 * REA evidence: ev_ad5a261a9f9f66d8da9590c7d6a0a339b59b26131634ca0528ad13341b0eab5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004f7a0(int param_1,uint param_2,ushort *param_3)

{
  bool bVar1;
  ushort *puVar2;
  void *__src;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t __n;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  
  __n = param_1 * 2;
  iVar11 = (int)param_2 >> 1;
  __src = (void *)FUN_ram_40059bae(__n);
  iVar10 = iVar11 - (uint)((param_2 & 1) == 0);
  puVar2 = param_3;
  for (iVar12 = 0; iVar12 < param_1; iVar12 = iVar12 + 1) {
    iVar9 = param_1 + -1;
    iVar6 = iVar9 - iVar10;
    iVar4 = puVar2[param_1 + -1] * param_2;
    do {
      *(short *)((int)__src + iVar9 * 2) = (short)iVar4;
      uVar7 = 0;
      if (iVar9 + iVar11 < param_1) {
        uVar7 = (uint)puVar2[iVar11 + iVar9];
      }
      if (iVar6 < 1) {
        uVar3 = *puVar2;
      }
      else {
        uVar3 = puVar2[iVar6 + -1];
      }
      iVar9 = iVar9 + -1;
      iVar4 = (iVar4 - uVar7) + (uint)uVar3;
      iVar6 = iVar6 + -1;
    } while (iVar9 != -1);
    memcpy(puVar2,__src,__n);
    puVar2 = puVar2 + param_1;
  }
  if (param_2 == 0) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = (ushort)(0x3fc0 / param_2);
  }
  for (iVar12 = 0; param_1 * param_1 != iVar12; iVar12 = iVar12 + 1) {
    uVar7 = (uint)param_3[iVar12];
    if (uVar7 != 0) {
      if (uVar7 == 0x3fc0) {
        param_3[iVar12] = uVar3;
      }
      else {
        if (param_2 == 0) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = (ushort)((int)uVar7 / (int)param_2);
        }
        param_3[iVar12] = uVar5;
      }
    }
  }
  iVar10 = iVar10 + 1;
  for (iVar12 = 0; iVar12 < param_1; iVar12 = iVar12 + 1) {
    iVar9 = *param_3 * param_2;
    iVar4 = 0;
    puVar2 = param_3;
    iVar6 = 0;
    do {
      iVar8 = iVar6;
      uVar13 = 0;
      if (-1 < iVar9) {
        uVar13 = (undefined2)((uint)(iVar9 << 10) >> 0x10);
      }
      *(undefined2 *)((int)__src + iVar8 * 2) = uVar13;
      if (iVar8 - iVar11 < 1) {
        uVar3 = *puVar2;
      }
      else {
        uVar3 = *(ushort *)((int)param_3 + iVar4 + param_1 * iVar11 * -2);
      }
      if (iVar10 + iVar8 < param_1) {
        uVar5 = *(ushort *)((int)param_3 + iVar4 + __n * iVar10);
      }
      else {
        uVar5 = param_3[(param_1 + -1) * param_1];
      }
      iVar9 = (iVar9 - (uint)uVar3) + (uint)uVar5;
      puVar2 = puVar2 + param_1;
      iVar4 = iVar4 + __n;
      iVar6 = iVar8 + 1;
    } while (param_1 != iVar8 + 1);
    iVar6 = 0;
    puVar2 = param_3;
    do {
      *puVar2 = *(ushort *)((int)__src + iVar6 * 2);
      puVar2 = puVar2 + param_1;
      bVar1 = iVar8 != iVar6;
      iVar6 = iVar6 + 1;
    } while (bVar1);
    param_3 = param_3 + 1;
  }
  FUN_ram_40059be4(__src);
  return;
}


/* NanoCore 1.10, address 0x4004f930.
 * REA evidence: ev_42edb329bcc3ed5961c24f66f6486701516d24d47265d112fab1caaa275e91b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004fbaa) */
/* WARNING: Removing unreachable block (ram,0x4004f988) */
/* WARNING: Removing unreachable block (ram,0x4004f96e) */
/* WARNING: Removing unreachable block (ram,0x4004fa5a) */
/* WARNING: Removing unreachable block (ram,0x4004fbc4) */

void FUN_ram_4004f930(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  void *pvVar4;
  size_t __n;
  int iVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  void *__dest;
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
  void *pvVar20;
  size_t sVar21;
  uint uVar22;
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
  void *pvStack_54;
  undefined1 uStack_50;
  code *pcStack_4c;
  
  iVar15 = *(int *)(param_2 + 0x28);
  iVar18 = (*param_3 + *(int *)(param_2 + 0x2c)) - iVar15;
  iVar5 = *(int *)(param_2 + 0x2c) + param_3[2] + iVar15;
  iVar17 = (param_3[1] + *(int *)(param_2 + 0x30)) - iVar15;
  iVar15 = *(int *)(param_2 + 0x30) + param_3[3] + iVar15;
  iVar16 = *(int *)(param_2 + 0x24) / 2;
  iVar11 = -(*(int *)(param_2 + 0x24) / 2);
  iStack_e0 = iVar18 + iVar11 + -1;
  iStack_dc = iVar11 + iVar17 + -1;
  iStack_d4 = iVar16 + iVar15 + 1;
  bVar1 = *(byte *)(param_2 + 0x34);
  iStack_d8 = iVar5 + iVar16 + 1;
  if (0xfd < bVar1) {
    bVar1 = 0xff;
  }
  iVar11 = FUN_ram_40049494(auStack_d0,&iStack_e0,*(undefined4 *)(param_1 + 8));
  if (iVar11 == 0) {
    return;
  }
  iStack_c0 = *param_3;
  iStack_bc = param_3[1];
  iStack_b8 = param_3[2];
  iStack_b4 = param_3[3];
  FUN_ram_40049460(&iStack_c0,0xffffffff,0xffffffff);
  iVar16 = *(int *)(param_2 + 0x1c);
  iVar11 = iStack_b4 - iStack_bc;
  if (iStack_b8 - iStack_c0 < iStack_b4 - iStack_bc) {
    iVar11 = iStack_b8 - iStack_c0;
  }
  iVar15 = iVar15 - iVar17;
  iVar5 = iVar5 - iVar18;
  iVar18 = iVar15 + 1;
  iVar19 = iVar5 + 1;
  iVar17 = iVar18;
  if (iVar5 < iVar15) {
    iVar17 = iVar19;
  }
  iVar15 = iVar11 + 1 >> 1;
  if (iVar16 < iVar15) {
    iVar15 = iVar16;
  }
  iVar5 = iVar17 >> 1;
  if (iVar16 < iVar17 >> 1) {
    iVar5 = iVar16;
  }
  __n = *(int *)(param_2 + 0x24) + iVar5;
  puVar6 = (undefined2 *)FUN_ram_40059bae(__n * __n * 2);
  uVar22 = *(uint *)(param_2 + 0x24);
  iVar11 = iVar5 + uVar22;
  iStack_88 = (uVar22 | 0xfffffffe) + iVar5 + (int)uVar22 / 2;
  iStack_8c = (int)uVar22 / 2 + 1;
  iStack_90 = iStack_88 - iVar19;
  iStack_84 = iStack_8c + iVar18;
  FUN_ram_4005221c(apcStack_6c,&iStack_90,iVar5,0);
  iVar5 = 1;
  if (uVar22 != 1) {
    iVar5 = (int)uVar22 >> 1;
  }
  pbVar7 = (byte *)FUN_ram_40059bae(iVar11);
  puVar12 = puVar6;
  for (iVar16 = 0; iVar16 < iVar11; iVar16 = iVar16 + 1) {
    thunk_FUN_ram_4000505c(pbVar7,0xff,iVar11);
    iVar17 = (*apcStack_6c[0])(pbVar7,0,iVar16,iVar11,apcStack_6c,apcStack_6c[0]);
    if (iVar17 == 0) {
      thunk_FUN_ram_4000505c(puVar12,0,iVar11 * 2);
    }
    else {
      if (iVar5 == 0) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = (undefined2)((int)((uint)*pbVar7 << 6) / iVar5);
      }
      *puVar12 = uVar13;
      for (iVar17 = 1; iVar11 != iVar17; iVar17 = iVar17 + 1) {
        if ((uint)pbVar7[iVar17 + -1] == (uint)pbVar7[iVar17]) {
          uVar13 = puVar12[iVar17 + -1];
        }
        else if (iVar5 == 0) {
          uVar13 = 0xffff;
        }
        else {
          uVar13 = (undefined2)((int)((uint)pbVar7[iVar17] << 6) / iVar5);
        }
        puVar12[iVar17] = uVar13;
      }
    }
    puVar12 = puVar12 + iVar11;
  }
  FUN_ram_40059be4(pbVar7);
  iVar16 = iVar11 * iVar11;
  FUN_ram_40051f60(apcStack_6c);
  if (iVar5 == 1) {
    for (iVar5 = 0; iVar5 != iVar16; iVar5 = iVar5 + 1) {
      *(char *)((int)puVar6 + iVar5) = (char)((ushort)puVar6[iVar5] >> 6);
    }
  }
  else {
    FUN_ram_4004f7a0(iVar11,iVar5,puVar6);
    iVar5 = (uVar22 & 1) + iVar5;
    if (1 < iVar5) {
      if (iVar5 == 0) {
        uVar13 = 0xffff;
      }
      else {
        uVar13 = (undefined2)(0x3fc0 / iVar5);
      }
      for (iVar17 = 0; iVar17 != iVar16; iVar17 = iVar17 + 1) {
        uVar22 = (uint)(ushort)puVar6[iVar17];
        if (uVar22 != 0) {
          if (uVar22 == 0xff) {
            puVar6[iVar17] = uVar13;
          }
          else {
            if (iVar5 == 0) {
              uVar14 = 0xffff;
            }
            else {
              uVar14 = (undefined2)((int)(uVar22 << 6) / iVar5);
            }
            puVar6[iVar17] = uVar14;
          }
        }
      }
      FUN_ram_4004f7a0(iVar11,iVar5,puVar6);
    }
    for (iVar5 = 0; iVar5 != iVar16; iVar5 = iVar5 + 1) {
      *(char *)((int)puVar6 + iVar5) = (char)puVar6[iVar5];
    }
  }
  piStack_e8 = (int *)0x0;
  uStack_e4 = 0;
  iVar5 = -((*(int *)(param_2 + 0x34) << 0x17) >> 0x1f);
  if (iVar5 == 0) {
    FUN_ram_4005221c(&iStack_90,&iStack_c0,iVar15,1);
    piStack_e8 = &iStack_90;
  }
  __dest = (void *)FUN_ram_40059bae((iStack_d8 - iStack_e0) + 1);
  thunk_FUN_ram_4000505c(apcStack_6c,0,0x2c);
  apcStack_6c[0] = (code *)&iStack_b0;
  pvStack_54 = __dest;
  pcStack_4c = apcStack_6c[0];
  FUN_ram_4000305c(auStack_57,param_2 + 0x20,3);
  bStack_58 = *(byte *)(param_2 + 0x34);
  iStack_a8 = iStack_d8;
  iStack_b0 = (iStack_d8 - __n) + 1;
  iVar11 = ((iStack_d8 - iStack_e0) + 1) / 2 + iStack_e0;
  iStack_ac = iStack_dc;
  if (iStack_b0 < iVar11) {
    iStack_b0 = iVar11;
  }
  iVar16 = ((iStack_d4 - iStack_dc) + 1) / 2 + iStack_dc;
  iStack_a4 = iStack_dc + __n + -1;
  if (iVar16 < iStack_a4) {
    iStack_a4 = iVar16;
  }
  iVar17 = FUN_ram_40049494(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar17 != 0) &&
     (iVar10 = FUN_ram_4004963c(&iStack_a0,&iStack_c0,iVar15), iVar9 = iStack_9c, iVar19 = iStack_a0
     , iVar18 = iStack_d8, iVar17 = iStack_dc, iVar10 == 0)) {
    pbStack_100 = (byte *)0x0;
    iVar10 = (iStack_98 - iStack_a0) + 1;
    if (iVar5 != 0) {
      FUN_ram_400497d0(&iStack_a0,&iStack_c0,iVar15);
      pbStack_100 = (byte *)iVar5;
    }
    if (0 < iVar10) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      pvVar20 = (void *)((int)puVar6 + (iVar19 - ((iVar18 - __n) + 1)) + (iVar9 - iVar17) * __n);
      uStack_50 = 2;
      pvStack_54 = __dest;
      for (iVar17 = iStack_9c; iVar17 <= iStack_94; iVar17 = iVar17 + 1) {
        iStack_ac = iVar17;
        iStack_a4 = iVar17;
        pvVar4 = pvVar20;
        if (pbStack_100 == (byte *)0x0) {
          memcpy(__dest,pvVar20,__n);
          iVar18 = FUN_ram_40051f0c(&piStack_e8,__dest,iStack_a0,iVar17,iVar10);
          pvVar4 = pvStack_54;
          if (iVar18 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar18;
          }
        }
        pvStack_54 = pvVar4;
        FUN_ram_400538aa(param_1,apcStack_6c);
        pvVar20 = (void *)((int)pvVar20 + __n);
      }
    }
  }
  iVar17 = iVar16 + 1;
  iStack_a8 = iStack_d8;
  iStack_b0 = (iStack_d8 - __n) + 1;
  iStack_a4 = iStack_d4;
  if (iStack_b0 < iVar11) {
    iStack_b0 = iVar11;
  }
  iStack_ac = (iStack_d4 - __n) + 1;
  if (iStack_ac < iVar17) {
    iStack_ac = iVar17;
  }
  iVar18 = FUN_ram_40049494(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar18 != 0) &&
     (iVar8 = FUN_ram_4004963c(&iStack_a0,&iStack_c0,iVar15), iVar10 = iStack_94, iVar9 = iStack_a0,
     iVar19 = iStack_a4, iVar18 = iStack_d8, iVar8 == 0)) {
    pbStack_100 = (byte *)0x0;
    iVar8 = (iStack_98 - iStack_a0) + 1;
    if (iVar5 != 0) {
      FUN_ram_400497d0(&iStack_a0,&iStack_c0,iVar15);
      pbStack_100 = (byte *)iVar5;
    }
    if (0 < iVar8) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      pvVar20 = (void *)((int)puVar6 + (iVar9 - ((iVar18 - __n) + 1)) + (iVar19 - iVar10) * __n);
      uStack_50 = 2;
      pvStack_54 = __dest;
      for (iVar18 = iStack_94; iStack_9c <= iVar18; iVar18 = iVar18 + -1) {
        iStack_ac = iVar18;
        iStack_a4 = iVar18;
        pvVar4 = pvVar20;
        if (pbStack_100 == (byte *)0x0) {
          memcpy(__dest,pvVar20,__n);
          iVar19 = FUN_ram_40051f0c(&piStack_e8,__dest,iStack_a0,iVar18,iVar8);
          pvVar4 = pvStack_54;
          if (iVar19 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar19;
          }
        }
        pvStack_54 = pvVar4;
        FUN_ram_400538aa(param_1,apcStack_6c);
        pvVar20 = (void *)((int)pvVar20 + __n);
      }
    }
  }
  iStack_b0 = iStack_e0 + __n;
  iStack_a8 = iStack_d8 - __n;
  iStack_ac = iStack_dc;
  iStack_a4 = iStack_dc + __n + -1;
  if (iVar16 < iStack_a4) {
    iStack_a4 = iVar16;
  }
  iVar18 = FUN_ram_40049494(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar18 != 0) &&
     (iVar9 = FUN_ram_4004963c(&iStack_a0,&iStack_c0,iVar15), iVar19 = iStack_9c, iVar18 = iStack_ac
     , iVar9 == 0)) {
    iVar9 = (iStack_98 - iStack_a0) + 1;
    if (iVar5 == 0) {
      if (iVar9 < 1) goto LAB_ram_4004fce8;
      iStack_fc = 0;
      pvStack_54 = __dest;
    }
    else {
      FUN_ram_400497d0(&iStack_a0,&iStack_c0,iVar15);
      if (iVar9 < 1) goto LAB_ram_4004fce8;
      pvStack_54 = (void *)0x0;
      iStack_fc = iVar5;
    }
    pbStack_100 = (byte *)((int)puVar6 + (iVar19 - iVar18) * __n);
    iStack_b0 = iStack_a0;
    iStack_a8 = iStack_98;
    for (iVar18 = iStack_9c; iVar18 <= iStack_94; iVar18 = iVar18 + 1) {
      bVar2 = *pbStack_100;
      iStack_a4 = iVar18;
      iStack_ac = iVar18;
      if (iStack_fc == 0) {
        thunk_FUN_ram_4000505c(__dest,(uint)bVar2,iVar9);
        iVar19 = FUN_ram_40051f0c(&piStack_e8,__dest,iStack_a0,iVar18,iVar9);
        if (iVar19 == 1) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = (undefined1)iVar19;
        }
      }
      else {
        bStack_58 = bVar2;
        if (bVar1 != 0xff) {
          bStack_58 = (byte)((uint)*(byte *)(param_2 + 0x34) * (uint)bVar2 >> 8);
        }
      }
      FUN_ram_400538aa(param_1,apcStack_6c);
      pbStack_100 = pbStack_100 + __n;
    }
  }
LAB_ram_4004fce8:
  bStack_58 = *(byte *)(param_2 + 0x34);
  iStack_b0 = iStack_e0 + __n;
  iStack_a8 = iStack_d8 - __n;
  iStack_a4 = iStack_d4;
  iStack_ac = (iStack_d4 - __n) + 1;
  if (iStack_ac < iVar17) {
    iStack_ac = iVar17;
  }
  iVar18 = FUN_ram_40049494(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if (((iVar18 != 0) &&
      (iVar9 = FUN_ram_4004963c(&iStack_a0,&iStack_c0,iVar15), iVar19 = iStack_94,
      iVar18 = iStack_a4, iVar9 == 0)) && (iVar9 = (iStack_98 - iStack_a0) + 1, 0 < iVar9)) {
    pvVar20 = __dest;
    if (iVar5 != 0) {
      FUN_ram_400497d0(&iStack_a0,&iStack_c0,iVar15);
      pvStack_54 = (void *)0x0;
      pvVar20 = pvStack_54;
    }
    pvStack_54 = pvVar20;
    iStack_b0 = iStack_a0;
    pbVar7 = (byte *)((int)puVar6 + (iVar18 - iVar19) * __n);
    iStack_a8 = iStack_98;
    for (iVar18 = iStack_94; iStack_9c <= iVar18; iVar18 = iVar18 + -1) {
      iStack_a4 = iVar18;
      iStack_ac = iVar18;
      if (iVar5 == 0) {
        thunk_FUN_ram_4000505c(__dest,*pbVar7,iVar9);
        iVar19 = FUN_ram_40051f0c(&piStack_e8,__dest,iStack_a0,iVar18,iVar9);
        if (iVar19 == 1) {
          uStack_50 = 2;
        }
        else {
          uStack_50 = (undefined1)iVar19;
        }
      }
      else {
        FUN_ram_400497d0(&iStack_a0,&iStack_c0,iVar15);
        bStack_58 = *pbVar7;
        if (bVar1 != 0xff) {
          bStack_58 = (byte)((uint)bStack_58 * (uint)*(byte *)(param_2 + 0x34) >> 8);
        }
      }
      FUN_ram_400538aa(param_1,apcStack_6c);
      pbVar7 = pbVar7 + __n;
    }
  }
  bStack_58 = *(undefined1 *)(param_2 + 0x34);
  iStack_a8 = iStack_d8;
  iStack_ac = iStack_dc + __n;
  if (iVar16 < (int)(iStack_dc + __n)) {
    iStack_ac = iVar17;
  }
  iStack_b0 = (iStack_d8 - __n) + 1;
  iStack_a4 = iStack_d4 - __n;
  if ((int)(iStack_d4 - __n) < iVar16) {
    iStack_a4 = iVar16;
  }
  if (iStack_b0 < iVar11) {
    iStack_b0 = iVar11;
  }
  iVar18 = FUN_ram_40049494(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar18 != 0) && (iVar18 = FUN_ram_4004963c(&iStack_a0,&iStack_c0,iVar15), iVar18 == 0)) {
    sVar21 = (iStack_98 - iStack_a0) + 1;
    pvVar20 = (void *)((iStack_a0 - ((iStack_d8 - __n) + 1)) + (__n - 1) * __n + (int)puVar6);
    if (iVar5 == 0) {
      iStack_104 = 0;
      pvStack_54 = __dest;
    }
    else {
      FUN_ram_400497d0(&iStack_a0,&iStack_c0,iVar15);
      pvStack_54 = pvVar20;
      iStack_104 = iVar5;
    }
    if (0 < (int)sVar21) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      uStack_50 = 2;
      for (iVar18 = iStack_9c; iVar18 <= iStack_94; iVar18 = iVar18 + 1) {
        iStack_ac = iVar18;
        iStack_a4 = iVar18;
        if (iStack_104 == 0) {
          memcpy(__dest,pvVar20,sVar21);
          iVar19 = FUN_ram_40051f0c(&piStack_e8,__dest,iStack_a0,iVar18,sVar21);
          if (iVar19 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar19;
          }
        }
        FUN_ram_400538aa(param_1,apcStack_6c);
      }
    }
  }
  puVar12 = puVar6;
  for (iVar18 = 0; iVar18 < (int)__n; iVar18 = iVar18 + 1) {
    for (iVar19 = 0; iVar19 < (int)__n >> 1; iVar19 = iVar19 + 1) {
      uVar3 = *(undefined1 *)((int)puVar12 + iVar19);
      *(undefined1 *)((int)puVar12 + iVar19) = *(undefined1 *)((int)puVar12 + -iVar19 + (__n - 1));
      *(undefined1 *)((int)puVar12 + -iVar19 + (__n - 1)) = uVar3;
    }
    puVar12 = (undefined2 *)((int)puVar12 + __n);
  }
  iStack_ac = iStack_dc + __n;
  if (iVar16 < (int)(iStack_dc + __n)) {
    iStack_ac = iVar17;
  }
  iStack_b0 = iStack_e0;
  iStack_a8 = iStack_e0 + __n + -1;
  iStack_a4 = iStack_d4 - __n;
  if ((int)(iStack_d4 - __n) < iVar16) {
    iStack_a4 = iVar16;
  }
  iVar11 = iVar11 + -1;
  if (iVar11 < iStack_a8) {
    iStack_a8 = iVar11;
  }
  iVar18 = FUN_ram_40049494(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar18 != 0) && (iVar18 = FUN_ram_4004963c(&iStack_a0,&iStack_c0,iVar15), iVar18 == 0)) {
    sVar21 = (iStack_98 - iStack_a0) + 1;
    pvVar20 = (void *)((iStack_a0 - iStack_b0) + (__n - 1) * __n + (int)puVar6);
    if (iVar5 == 0) {
      iStack_104 = 0;
      pvStack_54 = __dest;
    }
    else {
      FUN_ram_400497d0(&iStack_a0,&iStack_c0,iVar15);
      pvStack_54 = pvVar20;
      iStack_104 = iVar5;
    }
    if (0 < (int)sVar21) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      uStack_50 = 2;
      for (iVar18 = iStack_9c; iVar18 <= iStack_94; iVar18 = iVar18 + 1) {
        iStack_ac = iVar18;
        iStack_a4 = iVar18;
        if (iStack_104 == 0) {
          memcpy(__dest,pvVar20,sVar21);
          iVar19 = FUN_ram_40051f0c(&piStack_e8,__dest,iStack_a0,iVar18,sVar21);
          if (iVar19 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar19;
          }
        }
        FUN_ram_400538aa(param_1,apcStack_6c);
      }
    }
  }
  iStack_b0 = iStack_e0;
  iStack_a8 = iStack_e0 + __n + -1;
  iStack_ac = iStack_dc;
  if (iVar11 < iStack_a8) {
    iStack_a8 = iVar11;
  }
  iStack_a4 = iStack_dc + __n + -1;
  if (iVar16 < iStack_a4) {
    iStack_a4 = iVar16;
  }
  iVar18 = FUN_ram_40049494(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar18 != 0) &&
     (iVar8 = FUN_ram_4004963c(&iStack_a0,&iStack_c0,iVar15), iVar10 = iStack_9c, iVar9 = iStack_a0,
     iVar19 = iStack_ac, iVar18 = iStack_b0, iVar8 == 0)) {
    iStack_104 = 0;
    iVar8 = (iStack_98 - iStack_a0) + 1;
    if (iVar5 != 0) {
      FUN_ram_400497d0(&iStack_a0,&iStack_c0,iVar15);
      iStack_104 = iVar5;
    }
    pvStack_54 = __dest;
    if (0 < iVar8) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      pvVar20 = (void *)((int)puVar6 + (iVar9 - iVar18) + (iVar10 - iVar19) * __n);
      uStack_50 = 2;
      for (iVar18 = iStack_9c; iVar18 <= iStack_94; iVar18 = iVar18 + 1) {
        iStack_ac = iVar18;
        iStack_a4 = iVar18;
        pvVar4 = pvVar20;
        if (iStack_104 == 0) {
          memcpy(__dest,pvVar20,__n);
          iVar19 = FUN_ram_40051f0c(&piStack_e8,__dest,iStack_a0,iVar18,iVar8);
          pvVar4 = pvStack_54;
          if (iVar19 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar19;
          }
        }
        pvStack_54 = pvVar4;
        FUN_ram_400538aa(param_1,apcStack_6c);
        pvVar20 = (void *)((int)pvVar20 + __n);
      }
    }
  }
  iStack_a4 = iStack_d4;
  iStack_ac = (iStack_d4 - __n) + 1;
  iStack_b0 = iStack_e0;
  if (iStack_ac < iVar17) {
    iStack_ac = iVar17;
  }
  iStack_a8 = iStack_e0 + __n + -1;
  if (iVar11 < iStack_a8) {
    iStack_a8 = iVar11;
  }
  iVar11 = FUN_ram_40049494(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if ((iVar11 != 0) &&
     (iVar10 = FUN_ram_4004963c(&iStack_a0,&iStack_c0,iVar15), iVar9 = iStack_94, iVar19 = iStack_a0
     , iVar18 = iStack_a4, iVar11 = iStack_b0, iVar10 == 0)) {
    iVar8 = (iStack_98 - iStack_a0) + 1;
    iVar10 = 0;
    if (iVar5 != 0) {
      FUN_ram_400497d0(&iStack_a0,&iStack_c0,iVar15);
      iVar10 = iVar5;
    }
    if (0 < iVar8) {
      iStack_b0 = iStack_a0;
      iStack_a8 = iStack_98;
      pvVar20 = (void *)((int)puVar6 + (iVar19 - iVar11) + (iVar18 - iVar9) * __n);
      uStack_50 = 2;
      pvStack_54 = __dest;
      for (iVar11 = iStack_94; iStack_9c <= iVar11; iVar11 = iVar11 + -1) {
        iStack_ac = iVar11;
        iStack_a4 = iVar11;
        pvVar4 = pvVar20;
        if (iVar10 == 0) {
          memcpy(__dest,pvVar20,__n);
          iVar18 = FUN_ram_40051f0c(&piStack_e8,__dest,iStack_a0,iVar11,iVar8);
          pvVar4 = pvStack_54;
          if (iVar18 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar18;
          }
        }
        pvStack_54 = pvVar4;
        FUN_ram_400538aa(param_1,apcStack_6c);
        pvVar20 = (void *)((int)pvVar20 + __n);
      }
    }
  }
  iStack_b0 = iStack_e0 + __n;
  iStack_a8 = iStack_d8 - __n;
  iStack_ac = iStack_dc + __n;
  if (iVar16 < (int)(iStack_dc + __n)) {
    iStack_ac = iVar17;
  }
  iStack_a4 = iStack_d4 - __n;
  if ((int)(iStack_d4 - __n) < iVar16) {
    iStack_a4 = iVar16;
  }
  pvStack_54 = __dest;
  iVar11 = FUN_ram_40049494(&iStack_a0,&iStack_b0,*(undefined4 *)(param_1 + 8));
  if (((iVar11 != 0) && (iVar15 = FUN_ram_4004963c(&iStack_a0,&iStack_c0,iVar15), iVar15 == 0)) &&
     (iVar15 = (iStack_98 - iStack_a0) + 1, 0 < iVar15)) {
    iStack_b0 = iStack_a0;
    iStack_a8 = iStack_98;
    for (iVar11 = iStack_9c; iVar11 <= iStack_94; iVar11 = iVar11 + 1) {
      iStack_ac = iVar11;
      iStack_a4 = iVar11;
      thunk_FUN_ram_4000505c(__dest,0xff,iVar15);
      uStack_50 = FUN_ram_40051f0c(&piStack_e8,__dest,iStack_a0,iVar11,iVar15);
      FUN_ram_400538aa(param_1,apcStack_6c);
    }
  }
  if (iVar5 == 0) {
    FUN_ram_40051f60(&iStack_90);
  }
  FUN_ram_40059be4(puVar6);
  FUN_ram_40059be4(__dest);
  return;
}


