/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40086000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40086132.
 * REA evidence: ev_fd07b036cd903cb82c04964b7df8771a88dcf62b36a5a5dea8b44cbc64188aab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40086132(int *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 in_stack_00000000;
  
  iVar4 = param_1[1];
  if (iVar4 == 0) {
    *param_2 = 0;
  }
  else {
    pbVar3 = (byte *)*param_1;
    bVar1 = *pbVar3;
    param_1[1] = iVar4 - 1U;
    *param_1 = (int)(pbVar3 + 1);
    *param_2 = (uint)bVar1;
    if (3 < iVar4 - 1U) {
      uVar2 = *(undefined4 *)(pbVar3 + 1);
      *param_1 = (int)(pbVar3 + 5);
      param_1[1] = iVar4 - 5U;
      *(ulonglong *)(param_2 + 1) = CONCAT44(in_stack_00000000,uVar2);
      if (iVar4 - 5U < 4) {
        param_2[2] = 0;
      }
      else {
        uVar2 = *(undefined4 *)(pbVar3 + 5);
        *param_1 = (int)(pbVar3 + 9);
        param_1[1] = iVar4 - 9U;
        *(ulonglong *)(param_2 + 2) = CONCAT44(in_stack_00000000,uVar2);
        if (3 < iVar4 - 9U) {
          uVar2 = *(undefined4 *)(pbVar3 + 9);
          *param_1 = (int)(pbVar3 + 0xd);
          param_1[1] = iVar4 - 0xdU;
          *(ulonglong *)(param_2 + 3) = CONCAT44(in_stack_00000000,uVar2);
          if (iVar4 - 0xdU < 4) {
            uVar5 = 0;
          }
          else {
            uVar5 = CONCAT44(in_stack_00000000,*(undefined4 *)(pbVar3 + 0xd));
            *param_1 = (int)(pbVar3 + 0x11);
            param_1[1] = iVar4 + -0x11;
          }
          *(undefined8 *)(param_2 + 4) = uVar5;
          return 0;
        }
      }
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      return 0;
    }
  }
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return 0;
}


/* NanoCore 1.11, address 0x40086250.
 * REA evidence: ev_cd5bcfc4ffd581329762bd0643b5c006c4a536350feac55ec10ebafa66deff9a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400862f0) */
/* WARNING: Removing unreachable block (ram,0x40086484) */

undefined4 FUN_ram_40086250(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  
  if (param_2 == (ushort *)0x0) {
    return 0xffffffff;
  }
  uVar5 = param_1[1];
  if (uVar5 < 2) {
    uVar7 = 0;
LAB_ram_40086480:
    uVar9 = 0;
LAB_ram_40086482:
    param_2[4] = 0;
    param_2[5] = 0;
    uVar5 = param_1[1];
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = uVar9;
    param_2[1] = (ushort)(uVar7 / 3);
joined_r0x4008630e:
    if (uVar5 < 2) {
LAB_ram_400864a0:
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
    }
    else {
      puVar4 = (ushort *)*param_1;
      uVar1 = *puVar4;
      *param_1 = puVar4 + 1;
      param_1[1] = uVar5 - 2;
      if (uVar5 - 2 < 2) goto LAB_ram_400864a0;
      uVar9 = puVar4[1];
      puVar4 = puVar4 + 2;
      uVar5 = uVar5 - 4;
      *param_1 = puVar4;
      iVar8 = (uint)uVar1 * (uint)uVar9;
      param_1[1] = uVar5;
      if (iVar8 == 0) goto LAB_ram_400864a0;
      uVar7 = iVar8 * 4;
      if ((uVar7 == 0) || (iVar2 = FUN_ram_40002f2c(uVar7), iVar2 == 0)) goto LAB_ram_400864b4;
      if (uVar5 < uVar7) goto LAB_ram_4008645c;
      FUN_ram_4000304c(iVar2,puVar4,uVar7);
      *param_1 = puVar4 + iVar8 * 2;
      param_1[1] = uVar5 + iVar8 * -4;
      *(int *)(param_2 + 6) = iVar2;
      *(int *)(param_2 + 8) = iVar8;
    }
    if ((uint)param_1[1] < 2) {
LAB_ram_400864aa:
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
    }
    else {
      uVar5 = param_1[1] - 2;
      puVar4 = (ushort *)*param_1 + 1;
      uVar7 = (uint)*(ushort *)*param_1;
      *param_1 = puVar4;
      param_1[1] = uVar5;
      if (uVar7 == 0) goto LAB_ram_400864aa;
      uVar6 = uVar7 * 4;
      iVar8 = FUN_ram_40002f2c(uVar6);
      if (iVar8 == 0) goto LAB_ram_400864b4;
      if (uVar5 < uVar6) goto LAB_ram_4008645c;
      FUN_ram_4000304c(iVar8,puVar4,uVar6);
      *param_1 = puVar4 + uVar7 * 2;
      param_1[1] = uVar5 + uVar7 * -4;
      *(int *)(param_2 + 10) = iVar8;
      *(uint *)(param_2 + 0xc) = uVar7;
    }
    if (1 < (uint)param_1[1]) {
      uVar5 = param_1[1] - 2;
      puVar4 = (ushort *)*param_1 + 1;
      uVar7 = (uint)*(ushort *)*param_1;
      *param_1 = puVar4;
      param_1[1] = uVar5;
      if (uVar7 != 0) {
        uVar6 = uVar7 * 4;
        iVar8 = FUN_ram_40002f2c(uVar6);
        if (iVar8 != 0) {
          if (uVar6 <= uVar5) {
            FUN_ram_4000304c(iVar8,puVar4,uVar6);
            *param_1 = puVar4 + uVar7 * 2;
            param_1[1] = uVar5 + uVar7 * -4;
            *(int *)(param_2 + 0xe) = iVar8;
            *(uint *)(param_2 + 0x10) = uVar7;
            return 0;
          }
LAB_ram_4008645c:
          param_1[1] = 0;
          FUN_ram_40002f3a();
          return 0xfffffffe;
        }
        goto LAB_ram_400864b4;
      }
    }
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    uVar3 = 0;
  }
  else {
    puVar4 = (ushort *)*param_1;
    uVar1 = *puVar4;
    *param_1 = puVar4 + 1;
    param_1[1] = uVar5 - 2;
    uVar7 = (uint)uVar1;
    if (uVar5 - 2 < 2) goto LAB_ram_40086480;
    uVar9 = puVar4[1];
    puVar4 = puVar4 + 2;
    uVar5 = uVar5 - 4;
    *param_1 = puVar4;
    iVar8 = uVar7 * uVar9;
    param_1[1] = uVar5;
    if (iVar8 == 0) goto LAB_ram_40086482;
    uVar7 = iVar8 * 4;
    if ((uVar7 != 0) && (iVar2 = FUN_ram_40002f2c(uVar7), iVar2 != 0)) {
      if (uVar5 < uVar7) goto LAB_ram_4008645c;
      FUN_ram_4000304c(iVar2,puVar4,uVar7);
      param_1[1] = uVar5 + iVar8 * -4;
      *param_1 = puVar4 + iVar8 * 2;
      *(int *)(param_2 + 4) = iVar8;
      uVar5 = param_1[1];
      *(int *)(param_2 + 2) = iVar2;
      *param_2 = uVar9;
      param_2[1] = uVar1 / 3;
      goto joined_r0x4008630e;
    }
LAB_ram_400864b4:
    uVar3 = 0xfffffffd;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x400864c8.
 * REA evidence: ev_b3e2bfc5e55d979160bd8bbc53764357fc95bce8196796da88c3a17b55ce630f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400864c8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    uVar3 = param_1[1];
    if (uVar3 != 0) {
      iVar4 = 0;
      uVar5 = 0;
      do {
        puVar1 = (undefined4 *)(iVar2 + iVar4);
        if (puVar1 != (undefined4 *)0x0) {
          if (*(int *)(iVar2 + iVar4) != 0) {
            FUN_ram_40002f3a();
            *puVar1 = 0;
          }
          puVar1[1] = 0;
          if (puVar1[2] != 0) {
            FUN_ram_40002f3a();
            puVar1[2] = 0;
          }
          puVar1[3] = 0;
          if (puVar1[5] != 0) {
            FUN_ram_40002f3a();
            puVar1[5] = 0;
          }
          if (puVar1[6] != 0) {
            FUN_ram_40002f3a();
            puVar1[6] = 0;
          }
          if (puVar1[7] != 0) {
            FUN_ram_40002f3a();
            puVar1[7] = 0;
          }
          if (puVar1[8] != 0) {
            FUN_ram_40002f3a();
            puVar1[8] = 0;
          }
          if (puVar1[0xc] != 0) {
            FUN_ram_40002f3a();
            puVar1[0xc] = 0;
          }
          if (puVar1[0xd] != 0) {
            FUN_ram_40002f3a();
            puVar1[0xd] = 0;
          }
          if (puVar1[0xe] != 0) {
            FUN_ram_40002f3a();
            puVar1[0xe] = 0;
          }
          uVar3 = param_1[1];
          iVar2 = *param_1;
          puVar1[4] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x3c;
      } while (uVar5 < uVar3);
      if (iVar2 == 0) goto LAB_ram_4008658c;
    }
    FUN_ram_40002f3a();
    *param_1 = 0;
  }
LAB_ram_4008658c:
  param_1[1] = 0;
  if (param_1[4] != 0) {
    FUN_ram_40002f3a();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_1[6] != 0) {
    FUN_ram_40002f3a();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[8] != 0) {
    FUN_ram_40002f3a();
    param_1[8] = 0;
  }
  param_1[9] = 0;
  if (param_1[10] != 0) {
    FUN_ram_40002f3a();
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_ram_40002f3a();
    param_1[0xb] = 0;
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}


/* NanoCore 1.11, address 0x400865fc.
 * REA evidence: ev_6ae008e43a05378dbe8b38658d0e15e11ebe44a0cc6e629a6b86d9968ce5b58d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400865fc(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_20;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  if ((uint)param_1[1] < 2) {
LAB_ram_4008689e:
    param_2[1] = 0;
    uVar7 = param_1[1];
    *param_2 = 0;
  }
  else {
    uVar7 = param_1[1] - 2;
    uVar8 = (uint)*(ushort *)*param_1;
    *param_1 = (int)((ushort *)*param_1 + 1);
    param_1[1] = uVar7;
    if (uVar8 == 0) goto LAB_ram_4008689e;
    puVar2 = (uint *)FUN_ram_40002f1a(1,uVar8 * 0x14);
    if (puVar2 == (uint *)0x0) {
      return 0xfffffffd;
    }
    puVar5 = puVar2;
    do {
      while (uVar7 == 0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        uVar6 = uVar7;
LAB_ram_400868da:
        puVar5[2] = 0;
LAB_ram_400868de:
        puVar5[3] = 0;
LAB_ram_400868e2:
        puVar5[4] = 0;
        puVar5 = puVar5 + 5;
        uVar7 = uVar6;
        if (puVar2 + uVar8 * 5 == puVar5) goto LAB_ram_4008674c;
      }
      pbVar4 = (byte *)*param_1;
      uVar6 = uVar7 - 1;
      bVar1 = *pbVar4;
      param_1[1] = uVar6;
      *param_1 = (int)(pbVar4 + 1);
      *puVar5 = (uint)bVar1;
      if (uVar6 < 4) {
        puVar5[1] = 0;
        goto LAB_ram_400868da;
      }
      uVar3 = *(undefined4 *)(pbVar4 + 1);
      uVar6 = uVar7 - 5;
      *param_1 = (int)(pbVar4 + 5);
      param_1[1] = uVar6;
      *(ulonglong *)(puVar5 + 1) = CONCAT44(uStack_20,uVar3);
      if (uVar6 < 4) {
        puVar5[2] = 0;
        goto LAB_ram_400868de;
      }
      uVar3 = *(undefined4 *)(pbVar4 + 5);
      uVar6 = uVar7 - 9;
      *param_1 = (int)(pbVar4 + 9);
      param_1[1] = uVar6;
      *(ulonglong *)(puVar5 + 2) = CONCAT44(uStack_20,uVar3);
      if (uVar6 < 4) goto LAB_ram_400868de;
      uVar3 = *(undefined4 *)(pbVar4 + 9);
      uVar6 = uVar7 - 0xd;
      *param_1 = (int)(pbVar4 + 0xd);
      param_1[1] = uVar6;
      *(ulonglong *)(puVar5 + 3) = CONCAT44(uStack_20,uVar3);
      if (uVar6 < 4) goto LAB_ram_400868e2;
      *(ulonglong *)(puVar5 + 4) = CONCAT44(uStack_20,*(undefined4 *)(pbVar4 + 0xd));
      *param_1 = (int)(pbVar4 + 0x11);
      param_1[1] = uVar7 - 0x11;
      puVar5 = puVar5 + 5;
      uVar7 = uVar7 - 0x11;
    } while (puVar2 + uVar8 * 5 != puVar5);
LAB_ram_4008674c:
    param_2[1] = uVar8;
    uVar7 = param_1[1];
    *param_2 = puVar2;
  }
  if (1 < uVar7) {
    uVar8 = (uint)*(ushort *)*param_1;
    *param_1 = (int)((ushort *)*param_1 + 1);
    param_1[1] = uVar7 - 2;
    if (uVar8 != 0) {
      puVar2 = (uint *)FUN_ram_40002f1a(1,uVar8 * 0x14);
      if (puVar2 == (uint *)0x0) {
        return 0xfffffffd;
      }
      puVar5 = puVar2;
      uVar7 = uVar7 - 2;
      do {
        while (uVar7 == 0) {
          *puVar5 = 0;
          puVar5[1] = 0;
          uVar6 = uVar7;
LAB_ram_400868fe:
          puVar5[2] = 0;
LAB_ram_40086902:
          puVar5[3] = 0;
LAB_ram_40086906:
          puVar5[4] = 0;
          puVar5 = puVar5 + 5;
          uVar7 = uVar6;
          if (puVar2 + uVar8 * 5 == puVar5) goto LAB_ram_40086894;
        }
        pbVar4 = (byte *)*param_1;
        uVar6 = uVar7 - 1;
        bVar1 = *pbVar4;
        param_1[1] = uVar6;
        *param_1 = (int)(pbVar4 + 1);
        *puVar5 = (uint)bVar1;
        if (uVar6 < 4) {
          puVar5[1] = 0;
          goto LAB_ram_400868fe;
        }
        uVar3 = *(undefined4 *)(pbVar4 + 1);
        uVar6 = uVar7 - 5;
        *param_1 = (int)(pbVar4 + 5);
        param_1[1] = uVar6;
        *(ulonglong *)(puVar5 + 1) = CONCAT44(uStack_20,uVar3);
        if (uVar6 < 4) {
          puVar5[2] = 0;
          goto LAB_ram_40086902;
        }
        uVar3 = *(undefined4 *)(pbVar4 + 5);
        uVar6 = uVar7 - 9;
        *param_1 = (int)(pbVar4 + 9);
        param_1[1] = uVar6;
        *(ulonglong *)(puVar5 + 2) = CONCAT44(uStack_20,uVar3);
        if (uVar6 < 4) goto LAB_ram_40086902;
        uVar3 = *(undefined4 *)(pbVar4 + 9);
        uVar6 = uVar7 - 0xd;
        *param_1 = (int)(pbVar4 + 0xd);
        param_1[1] = uVar6;
        *(ulonglong *)(puVar5 + 3) = CONCAT44(uStack_20,uVar3);
        if (uVar6 < 4) goto LAB_ram_40086906;
        *(ulonglong *)(puVar5 + 4) = CONCAT44(uStack_20,*(undefined4 *)(pbVar4 + 0xd));
        *param_1 = (int)(pbVar4 + 0x11);
        param_1[1] = uVar7 - 0x11;
        puVar5 = puVar5 + 5;
        uVar7 = uVar7 - 0x11;
      } while (puVar2 + uVar8 * 5 != puVar5);
LAB_ram_40086894:
      param_2[2] = puVar2;
      param_2[3] = uVar8;
      goto LAB_ram_400868b8;
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
LAB_ram_400868b8:
  uVar3 = FUN_ram_40086250(param_1,param_2 + 4);
  return uVar3;
}


/* NanoCore 1.11, address 0x40086954.
 * REA evidence: ev_692971912017ecf076dfe2eb6ae61f6d8f95b6bc149cf9fbb8428e6c06fc3b37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40086954(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  if (*(int *)(param_1 + 200) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}


/* NanoCore 1.11, address 0x40086ad0.
 * REA evidence: ev_b6fc6ff046d5f87e078b7017eef272351a79369fbfa0fe6a7372956589dfa6e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40086ad0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 != 0) {
      iVar4 = 0;
      uVar5 = 0;
      do {
        puVar1 = (undefined4 *)(iVar2 + iVar4);
        if (puVar1 != (undefined4 *)0x0) {
          if (*(int *)(iVar2 + iVar4) != 0) {
            FUN_ram_40002f3a();
            *puVar1 = 0;
          }
          puVar1[1] = 0;
          if (puVar1[2] != 0) {
            FUN_ram_40002f3a();
            puVar1[2] = 0;
          }
          puVar1[3] = 0;
          if (puVar1[5] != 0) {
            FUN_ram_40002f3a();
            puVar1[5] = 0;
          }
          if (puVar1[6] != 0) {
            FUN_ram_40002f3a();
            puVar1[6] = 0;
          }
          if (puVar1[7] != 0) {
            FUN_ram_40002f3a();
            puVar1[7] = 0;
          }
          if (puVar1[8] != 0) {
            FUN_ram_40002f3a();
            puVar1[8] = 0;
          }
          if (puVar1[0xc] != 0) {
            FUN_ram_40002f3a();
            puVar1[0xc] = 0;
          }
          if (puVar1[0xd] != 0) {
            FUN_ram_40002f3a();
            puVar1[0xd] = 0;
          }
          if (puVar1[0xe] != 0) {
            FUN_ram_40002f3a();
            puVar1[0xe] = 0;
          }
          uVar3 = *(uint *)(param_1 + 8);
          iVar2 = *(int *)(param_1 + 4);
          puVar1[4] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x3c;
      } while (uVar5 < uVar3);
      if (iVar2 == 0) goto LAB_ram_40086b90;
    }
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 4) = 0;
  }
LAB_ram_40086b90:
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FUN_ram_4009372e(param_1 + 0xbc,1,param_1 + 200,param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  FUN_ram_4009372e(param_1 + 0x110,1,param_1 + 0x11c,param_1 + 0x130);
  *(undefined1 *)(param_1 + 0x13c) = 0;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (*(int *)(param_1 + 0x1b0) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x1e0) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(param_1 + 0x1ec) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 500) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x200) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  if (*(int *)(param_1 + 0x204) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x208) = 0;
  }
  if (*(int *)(param_1 + 0x20c) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  if (*(int *)(param_1 + 0x224) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(int *)(param_1 + 0x228) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x648) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x648) = 0;
  }
  if (*(int *)(param_1 + 0x64c) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x64c) = 0;
  }
  if (*(int *)(param_1 + 0x650) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x650) = 0;
  }
  if (*(int *)(param_1 + 0x654) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x654) = 0;
  }
  if (*(int *)(param_1 + 0x664) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x664) = 0;
  }
  if (*(int *)(param_1 + 0x668) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x668) = 0;
  }
  if (*(int *)(param_1 + 0x66c) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x66c) = 0;
  }
  *(undefined4 *)(param_1 + 0x644) = 0;
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  return;
}


/* NanoCore 1.11, address 0x40086e74.
 * REA evidence: ev_190e54cd4586cc43f68559f2d2f0836d2f71492141d6d8639551eedcca26c9e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40086e74(uint param_1,int *param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_2 != 0) {
    FUN_ram_40002f3a();
    *param_2 = 0;
  }
  param_2[1] = 0;
  if (param_2[2] != 0) {
    FUN_ram_40002f3a();
    param_2[2] = 0;
  }
  param_2[3] = 0;
  if (param_2[5] != 0) {
    FUN_ram_40002f3a();
    param_2[5] = 0;
  }
  if (param_2[6] != 0) {
    FUN_ram_40002f3a();
    param_2[6] = 0;
  }
  if (param_2[7] != 0) {
    FUN_ram_40002f3a();
    param_2[7] = 0;
  }
  if (param_2[8] != 0) {
    FUN_ram_40002f3a();
    param_2[8] = 0;
  }
  if (param_2[0xc] != 0) {
    FUN_ram_40002f3a();
    param_2[0xc] = 0;
  }
  if (param_2[0xd] != 0) {
    FUN_ram_40002f3a();
    param_2[0xd] = 0;
  }
  if (param_2[0xe] != 0) {
    FUN_ram_40002f3a();
    param_2[0xe] = 0;
  }
  param_2[4] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if (param_3 != (undefined4 *)0x0) {
    uVar16 = param_3[1];
    if (uVar16 == 0) {
      if (*param_2 != 0) {
        FUN_ram_40002f3a();
        *param_2 = 0;
      }
      uVar16 = param_3[3];
      param_2[1] = 0;
    }
    else {
      if ((int)((ulonglong)uVar16 * 0x54 >> 0x20) != 0) {
        return 0xfffffffd;
      }
      uVar15 = 0;
      if (uVar16 * 0x54 == 0) {
        return 0xfffffffd;
      }
      puVar13 = (undefined4 *)*param_3;
      puVar5 = (undefined4 *)FUN_ram_40002f1a(1);
      puVar4 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        return 0xfffffffd;
      }
      do {
        uVar15 = uVar15 + 1;
        if (puVar13 != (undefined4 *)0x0) {
          uVar12 = *puVar13;
          *(ulonglong *)(puVar4 + 1) = (ulonglong)(uint)puVar13[1];
          uVar3 = puVar13[2];
          *puVar4 = uVar12;
          *(ulonglong *)(puVar4 + 2) = (ulonglong)uVar3;
          *(ulonglong *)(puVar4 + 3) = (ulonglong)(uint)puVar13[3];
          uVar3 = puVar13[4];
          *(ulonglong *)(puVar4 + 5) = (ulonglong)param_1;
          *(ulonglong *)(puVar4 + 4) = (ulonglong)uVar3;
          FUN_ram_4008597e(puVar4);
          puVar4[0x13] = 0;
          puVar4[0x14] = 0;
          FUN_ram_4009372e(puVar4 + 0xb,1,puVar4 + 0xe,puVar4 + 0x13);
        }
        puVar13 = puVar13 + 5;
        puVar4 = puVar4 + 0x15;
      } while (uVar15 != uVar16);
      if (*param_2 != 0) {
        FUN_ram_40002f3a();
      }
      param_2[1] = uVar16;
      uVar16 = param_3[3];
      *param_2 = (int)puVar5;
    }
    if (uVar16 == 0) {
      if (param_2[2] != 0) {
        FUN_ram_40002f3a();
        param_2[2] = 0;
      }
      param_2[3] = 0;
    }
    else {
      if ((int)((ulonglong)uVar16 * 0x54 >> 0x20) != 0) {
        return 0xfffffffd;
      }
      uVar15 = 0;
      if (uVar16 * 0x54 == 0) {
        return 0xfffffffd;
      }
      puVar13 = (undefined4 *)param_3[2];
      puVar5 = (undefined4 *)FUN_ram_40002f1a(1);
      puVar4 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        return 0xfffffffd;
      }
      do {
        uVar15 = uVar15 + 1;
        if (puVar13 != (undefined4 *)0x0) {
          uVar12 = *puVar13;
          *(ulonglong *)(puVar4 + 1) = (ulonglong)(uint)puVar13[1];
          uVar3 = puVar13[2];
          *puVar4 = uVar12;
          *(ulonglong *)(puVar4 + 2) = (ulonglong)uVar3;
          *(ulonglong *)(puVar4 + 3) = (ulonglong)(uint)puVar13[3];
          uVar3 = puVar13[4];
          *(ulonglong *)(puVar4 + 5) = (ulonglong)param_1;
          *(ulonglong *)(puVar4 + 4) = (ulonglong)uVar3;
          FUN_ram_4008597e(puVar4);
          puVar4[0x13] = 0;
          puVar4[0x14] = 0;
          FUN_ram_4009372e(puVar4 + 0xb,1,puVar4 + 0xe,puVar4 + 0x13);
        }
        puVar13 = puVar13 + 5;
        puVar4 = puVar4 + 0x15;
      } while (uVar15 != uVar16);
      if (param_2[2] != 0) {
        FUN_ram_40002f3a();
      }
      param_2[2] = (int)puVar5;
      param_2[3] = uVar16;
    }
    if (param_2[5] != 0) {
      FUN_ram_40002f3a();
      param_2[5] = 0;
    }
    if (param_2[6] != 0) {
      FUN_ram_40002f3a();
      param_2[6] = 0;
    }
    if (param_2[7] != 0) {
      FUN_ram_40002f3a();
      param_2[7] = 0;
    }
    if (param_2[8] != 0) {
      FUN_ram_40002f3a();
      param_2[8] = 0;
    }
    if (param_2[0xc] != 0) {
      FUN_ram_40002f3a();
      param_2[0xc] = 0;
    }
    if (param_2[0xd] != 0) {
      FUN_ram_40002f3a();
      param_2[0xd] = 0;
    }
    if (param_2[0xe] != 0) {
      FUN_ram_40002f3a();
      param_2[0xe] = 0;
    }
    param_2[4] = 0;
    uVar1 = *(ushort *)((int)param_3 + 0x12);
    uVar16 = (uint)uVar1;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    if (uVar16 != 0) {
      uVar2 = *(ushort *)(param_3 + 4);
      if (uVar2 != 0) {
        iVar17 = uVar2 * uVar16;
        if (iVar17 * 0xc == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_ram_40002f2c();
        }
        param_2[5] = iVar6;
        iVar14 = uVar16 * 0xc;
        if (uVar16 * uVar16 * 0xc == 0) {
          param_2[6] = 0;
          iVar17 = FUN_ram_40002f2c(iVar14);
          param_2[7] = iVar17;
          iVar17 = FUN_ram_40002f2c(iVar14);
          param_2[8] = iVar17;
          iVar17 = FUN_ram_40002f1a(1,uVar16 << 2);
          param_2[0xc] = iVar17;
          iVar17 = FUN_ram_40002f1a(1,iVar14);
          param_2[0xd] = iVar17;
          iVar17 = FUN_ram_40002f1a(1,iVar14);
          param_2[0xe] = iVar17;
        }
        else {
          iVar7 = FUN_ram_40002f2c();
          param_2[6] = iVar7;
          iVar8 = FUN_ram_40002f2c(iVar14);
          param_2[7] = iVar8;
          iVar9 = FUN_ram_40002f2c(iVar14);
          param_2[8] = iVar9;
          iVar10 = FUN_ram_40002f1a(1,uVar16 << 2);
          param_2[0xc] = iVar10;
          iVar11 = FUN_ram_40002f1a(1,iVar14);
          param_2[0xd] = iVar11;
          iVar14 = FUN_ram_40002f1a(1,iVar14);
          param_2[0xe] = iVar14;
          if ((((iVar6 != 0) && (iVar7 != 0)) && (iVar8 != 0)) &&
             (((iVar9 != 0 && (iVar10 != 0)) && ((iVar11 != 0 && (iVar14 != 0)))))) {
            FUN_ram_4000304c(iVar6,param_3[5],param_3[6] << 2);
            FUN_ram_4000304c(iVar7,param_3[7],param_3[8] << 2);
            FUN_ram_4000304c(iVar8,param_3[9],param_3[10] << 2);
            FUN_ram_4000304c(iVar9,param_3[0xb],param_3[0xc] << 2);
            *(ushort *)(param_2 + 4) = uVar2;
            *(ushort *)((int)param_2 + 0x12) = uVar1;
            param_2[9] = iVar17 * 3;
            param_2[10] = uVar16 * uVar16 * 3;
            param_2[0xb] = uVar16 * 3;
            return 0;
          }
        }
        FUN_ram_400858c6(param_2 + 4);
        return 0xfffffffd;
      }
    }
  }
  return 0;
}


