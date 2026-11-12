/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40080000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400802a2.
 * REA evidence: ev_dd121a7d385ab334c56b2dad5e322d75244698759d06c83a41d2ce17554edbd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400802a2(int *param_1,uint *param_2)

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


/* NanoCore 1.10, address 0x400803c0.
 * REA evidence: ev_95ae966f040d436271866722a29a88d90d53be2a4ac8f45fc015040eb902fe6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40080460) */
/* WARNING: Removing unreachable block (ram,0x400805f4) */

undefined4 FUN_ram_400803c0(undefined4 *param_1,ushort *param_2)

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
LAB_ram_400805f0:
    uVar9 = 0;
LAB_ram_400805f2:
    param_2[4] = 0;
    param_2[5] = 0;
    uVar5 = param_1[1];
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = uVar9;
    param_2[1] = (ushort)(uVar7 / 3);
joined_r0x4008047e:
    if (uVar5 < 2) {
LAB_ram_40080610:
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
      if (uVar5 - 2 < 2) goto LAB_ram_40080610;
      uVar9 = puVar4[1];
      puVar4 = puVar4 + 2;
      uVar5 = uVar5 - 4;
      *param_1 = puVar4;
      iVar8 = (uint)uVar1 * (uint)uVar9;
      param_1[1] = uVar5;
      if (iVar8 == 0) goto LAB_ram_40080610;
      uVar7 = iVar8 * 4;
      if ((uVar7 == 0) || (iVar2 = FUN_ram_40002f3c(uVar7), iVar2 == 0)) goto LAB_ram_40080624;
      if (uVar5 < uVar7) goto LAB_ram_400805cc;
      FUN_ram_4000305c(iVar2,puVar4,uVar7);
      *param_1 = puVar4 + iVar8 * 2;
      param_1[1] = uVar5 + iVar8 * -4;
      *(int *)(param_2 + 6) = iVar2;
      *(int *)(param_2 + 8) = iVar8;
    }
    if ((uint)param_1[1] < 2) {
LAB_ram_4008061a:
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
      if (uVar7 == 0) goto LAB_ram_4008061a;
      uVar6 = uVar7 * 4;
      iVar8 = FUN_ram_40002f3c(uVar6);
      if (iVar8 == 0) goto LAB_ram_40080624;
      if (uVar5 < uVar6) goto LAB_ram_400805cc;
      FUN_ram_4000305c(iVar8,puVar4,uVar6);
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
        iVar8 = FUN_ram_40002f3c(uVar6);
        if (iVar8 != 0) {
          if (uVar6 <= uVar5) {
            FUN_ram_4000305c(iVar8,puVar4,uVar6);
            *param_1 = puVar4 + uVar7 * 2;
            param_1[1] = uVar5 + uVar7 * -4;
            *(int *)(param_2 + 0xe) = iVar8;
            *(uint *)(param_2 + 0x10) = uVar7;
            return 0;
          }
LAB_ram_400805cc:
          param_1[1] = 0;
          FUN_ram_40002f4a();
          return 0xfffffffe;
        }
        goto LAB_ram_40080624;
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
    if (uVar5 - 2 < 2) goto LAB_ram_400805f0;
    uVar9 = puVar4[1];
    puVar4 = puVar4 + 2;
    uVar5 = uVar5 - 4;
    *param_1 = puVar4;
    iVar8 = uVar7 * uVar9;
    param_1[1] = uVar5;
    if (iVar8 == 0) goto LAB_ram_400805f2;
    uVar7 = iVar8 * 4;
    if ((uVar7 != 0) && (iVar2 = FUN_ram_40002f3c(uVar7), iVar2 != 0)) {
      if (uVar5 < uVar7) goto LAB_ram_400805cc;
      FUN_ram_4000305c(iVar2,puVar4,uVar7);
      param_1[1] = uVar5 + iVar8 * -4;
      *param_1 = puVar4 + iVar8 * 2;
      *(int *)(param_2 + 4) = iVar8;
      uVar5 = param_1[1];
      *(int *)(param_2 + 2) = iVar2;
      *param_2 = uVar9;
      param_2[1] = uVar1 / 3;
      goto joined_r0x4008047e;
    }
LAB_ram_40080624:
    uVar3 = 0xfffffffd;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40080638.
 * REA evidence: ev_9bbe355d9a6ef87a04edefdac06ce29f151d721e58725fdca5f0887f0c916ea7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40080638(int *param_1)

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
            FUN_ram_40002f4a();
            *puVar1 = 0;
          }
          puVar1[1] = 0;
          if (puVar1[2] != 0) {
            FUN_ram_40002f4a();
            puVar1[2] = 0;
          }
          puVar1[3] = 0;
          if (puVar1[5] != 0) {
            FUN_ram_40002f4a();
            puVar1[5] = 0;
          }
          if (puVar1[6] != 0) {
            FUN_ram_40002f4a();
            puVar1[6] = 0;
          }
          if (puVar1[7] != 0) {
            FUN_ram_40002f4a();
            puVar1[7] = 0;
          }
          if (puVar1[8] != 0) {
            FUN_ram_40002f4a();
            puVar1[8] = 0;
          }
          if (puVar1[0xc] != 0) {
            FUN_ram_40002f4a();
            puVar1[0xc] = 0;
          }
          if (puVar1[0xd] != 0) {
            FUN_ram_40002f4a();
            puVar1[0xd] = 0;
          }
          if (puVar1[0xe] != 0) {
            FUN_ram_40002f4a();
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
      if (iVar2 == 0) goto LAB_ram_400806fc;
    }
    FUN_ram_40002f4a();
    *param_1 = 0;
  }
LAB_ram_400806fc:
  param_1[1] = 0;
  if (param_1[4] != 0) {
    FUN_ram_40002f4a();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_1[6] != 0) {
    FUN_ram_40002f4a();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[8] != 0) {
    FUN_ram_40002f4a();
    param_1[8] = 0;
  }
  param_1[9] = 0;
  if (param_1[10] != 0) {
    FUN_ram_40002f4a();
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_ram_40002f4a();
    param_1[0xb] = 0;
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}


/* NanoCore 1.10, address 0x4008076c.
 * REA evidence: ev_ae25e20ff531da19a35566211128b2e08b161646e6f331a48e730fdf694c732a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4008076c(int *param_1,undefined4 *param_2)

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
LAB_ram_40080a0e:
    param_2[1] = 0;
    uVar7 = param_1[1];
    *param_2 = 0;
  }
  else {
    uVar7 = param_1[1] - 2;
    uVar8 = (uint)*(ushort *)*param_1;
    *param_1 = (int)((ushort *)*param_1 + 1);
    param_1[1] = uVar7;
    if (uVar8 == 0) goto LAB_ram_40080a0e;
    puVar2 = (uint *)FUN_ram_40002f2a(1,uVar8 * 0x14);
    if (puVar2 == (uint *)0x0) {
      return 0xfffffffd;
    }
    puVar5 = puVar2;
    do {
      while (uVar7 == 0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        uVar6 = uVar7;
LAB_ram_40080a4a:
        puVar5[2] = 0;
LAB_ram_40080a4e:
        puVar5[3] = 0;
LAB_ram_40080a52:
        puVar5[4] = 0;
        puVar5 = puVar5 + 5;
        uVar7 = uVar6;
        if (puVar2 + uVar8 * 5 == puVar5) goto LAB_ram_400808bc;
      }
      pbVar4 = (byte *)*param_1;
      uVar6 = uVar7 - 1;
      bVar1 = *pbVar4;
      param_1[1] = uVar6;
      *param_1 = (int)(pbVar4 + 1);
      *puVar5 = (uint)bVar1;
      if (uVar6 < 4) {
        puVar5[1] = 0;
        goto LAB_ram_40080a4a;
      }
      uVar3 = *(undefined4 *)(pbVar4 + 1);
      uVar6 = uVar7 - 5;
      *param_1 = (int)(pbVar4 + 5);
      param_1[1] = uVar6;
      *(ulonglong *)(puVar5 + 1) = CONCAT44(uStack_20,uVar3);
      if (uVar6 < 4) {
        puVar5[2] = 0;
        goto LAB_ram_40080a4e;
      }
      uVar3 = *(undefined4 *)(pbVar4 + 5);
      uVar6 = uVar7 - 9;
      *param_1 = (int)(pbVar4 + 9);
      param_1[1] = uVar6;
      *(ulonglong *)(puVar5 + 2) = CONCAT44(uStack_20,uVar3);
      if (uVar6 < 4) goto LAB_ram_40080a4e;
      uVar3 = *(undefined4 *)(pbVar4 + 9);
      uVar6 = uVar7 - 0xd;
      *param_1 = (int)(pbVar4 + 0xd);
      param_1[1] = uVar6;
      *(ulonglong *)(puVar5 + 3) = CONCAT44(uStack_20,uVar3);
      if (uVar6 < 4) goto LAB_ram_40080a52;
      *(ulonglong *)(puVar5 + 4) = CONCAT44(uStack_20,*(undefined4 *)(pbVar4 + 0xd));
      *param_1 = (int)(pbVar4 + 0x11);
      param_1[1] = uVar7 - 0x11;
      puVar5 = puVar5 + 5;
      uVar7 = uVar7 - 0x11;
    } while (puVar2 + uVar8 * 5 != puVar5);
LAB_ram_400808bc:
    param_2[1] = uVar8;
    uVar7 = param_1[1];
    *param_2 = puVar2;
  }
  if (1 < uVar7) {
    uVar8 = (uint)*(ushort *)*param_1;
    *param_1 = (int)((ushort *)*param_1 + 1);
    param_1[1] = uVar7 - 2;
    if (uVar8 != 0) {
      puVar2 = (uint *)FUN_ram_40002f2a(1,uVar8 * 0x14);
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
LAB_ram_40080a6e:
          puVar5[2] = 0;
LAB_ram_40080a72:
          puVar5[3] = 0;
LAB_ram_40080a76:
          puVar5[4] = 0;
          puVar5 = puVar5 + 5;
          uVar7 = uVar6;
          if (puVar2 + uVar8 * 5 == puVar5) goto LAB_ram_40080a04;
        }
        pbVar4 = (byte *)*param_1;
        uVar6 = uVar7 - 1;
        bVar1 = *pbVar4;
        param_1[1] = uVar6;
        *param_1 = (int)(pbVar4 + 1);
        *puVar5 = (uint)bVar1;
        if (uVar6 < 4) {
          puVar5[1] = 0;
          goto LAB_ram_40080a6e;
        }
        uVar3 = *(undefined4 *)(pbVar4 + 1);
        uVar6 = uVar7 - 5;
        *param_1 = (int)(pbVar4 + 5);
        param_1[1] = uVar6;
        *(ulonglong *)(puVar5 + 1) = CONCAT44(uStack_20,uVar3);
        if (uVar6 < 4) {
          puVar5[2] = 0;
          goto LAB_ram_40080a72;
        }
        uVar3 = *(undefined4 *)(pbVar4 + 5);
        uVar6 = uVar7 - 9;
        *param_1 = (int)(pbVar4 + 9);
        param_1[1] = uVar6;
        *(ulonglong *)(puVar5 + 2) = CONCAT44(uStack_20,uVar3);
        if (uVar6 < 4) goto LAB_ram_40080a72;
        uVar3 = *(undefined4 *)(pbVar4 + 9);
        uVar6 = uVar7 - 0xd;
        *param_1 = (int)(pbVar4 + 0xd);
        param_1[1] = uVar6;
        *(ulonglong *)(puVar5 + 3) = CONCAT44(uStack_20,uVar3);
        if (uVar6 < 4) goto LAB_ram_40080a76;
        *(ulonglong *)(puVar5 + 4) = CONCAT44(uStack_20,*(undefined4 *)(pbVar4 + 0xd));
        *param_1 = (int)(pbVar4 + 0x11);
        param_1[1] = uVar7 - 0x11;
        puVar5 = puVar5 + 5;
        uVar7 = uVar7 - 0x11;
      } while (puVar2 + uVar8 * 5 != puVar5);
LAB_ram_40080a04:
      param_2[2] = puVar2;
      param_2[3] = uVar8;
      goto LAB_ram_40080a28;
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
LAB_ram_40080a28:
  uVar3 = FUN_ram_400803c0(param_1,param_2 + 4);
  return uVar3;
}


/* NanoCore 1.10, address 0x40080ac4.
 * REA evidence: ev_2df2d210cd6d72bf74422356e489f5df106e5a0ba79e4c1ffea786cf721a0234
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40080ac4(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_ram_40002f4a();
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_ram_40002f4a();
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  if (*(int *)(param_1 + 200) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}


/* NanoCore 1.10, address 0x40080c40.
 * REA evidence: ev_f5c002cfd903a18d0754d9cd4e95b6266151f3f7f778d149c577f63f0a34192a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40080c40(int param_1)

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
            FUN_ram_40002f4a();
            *puVar1 = 0;
          }
          puVar1[1] = 0;
          if (puVar1[2] != 0) {
            FUN_ram_40002f4a();
            puVar1[2] = 0;
          }
          puVar1[3] = 0;
          if (puVar1[5] != 0) {
            FUN_ram_40002f4a();
            puVar1[5] = 0;
          }
          if (puVar1[6] != 0) {
            FUN_ram_40002f4a();
            puVar1[6] = 0;
          }
          if (puVar1[7] != 0) {
            FUN_ram_40002f4a();
            puVar1[7] = 0;
          }
          if (puVar1[8] != 0) {
            FUN_ram_40002f4a();
            puVar1[8] = 0;
          }
          if (puVar1[0xc] != 0) {
            FUN_ram_40002f4a();
            puVar1[0xc] = 0;
          }
          if (puVar1[0xd] != 0) {
            FUN_ram_40002f4a();
            puVar1[0xd] = 0;
          }
          if (puVar1[0xe] != 0) {
            FUN_ram_40002f4a();
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
      if (iVar2 == 0) goto LAB_ram_40080d00;
    }
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 4) = 0;
  }
LAB_ram_40080d00:
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_ram_40002f4a();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_ram_40002f4a();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_ram_40002f4a();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_ram_40002f4a();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FUN_ram_40090832(param_1 + 0xbc,1,param_1 + 200,param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  FUN_ram_40090832(param_1 + 0x110,1,param_1 + 0x11c,param_1 + 0x130);
  *(undefined1 *)(param_1 + 0x13c) = 0;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_ram_40002f4a();
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    FUN_ram_40002f4a();
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (*(int *)(param_1 + 0x1b0) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(int *)(param_1 + 0x1e0) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(param_1 + 0x1ec) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 500) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x200) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  if (*(int *)(param_1 + 0x204) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x208) = 0;
  }
  if (*(int *)(param_1 + 0x20c) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  if (*(int *)(param_1 + 0x224) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(int *)(param_1 + 0x228) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x648) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x648) = 0;
  }
  if (*(int *)(param_1 + 0x64c) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x64c) = 0;
  }
  if (*(int *)(param_1 + 0x650) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x650) = 0;
  }
  if (*(int *)(param_1 + 0x654) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x654) = 0;
  }
  if (*(int *)(param_1 + 0x664) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x664) = 0;
  }
  if (*(int *)(param_1 + 0x668) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x668) = 0;
  }
  if (*(int *)(param_1 + 0x66c) != 0) {
    FUN_ram_40002f4a();
    *(undefined4 *)(param_1 + 0x66c) = 0;
  }
  *(undefined4 *)(param_1 + 0x644) = 0;
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  return;
}


/* NanoCore 1.10, address 0x40080fe4.
 * REA evidence: ev_d694cc43d04eea182e6bae38372904264e5f8b5bed3ac2b9c830e78c075d50f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40080fe4(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 uStack_40;
  
  if (1 < (uint)param_1[1]) {
    iVar9 = param_1[1] - 2;
    uVar14 = (uint)*(ushort *)*param_1;
    *param_1 = (int)((ushort *)*param_1 + 1);
    param_1[1] = iVar9;
    if (uVar14 != 0) {
      puVar4 = (uint *)FUN_ram_40002f2a(1,uVar14 * 0x1c);
      if (puVar4 == (uint *)0x0) {
        return 0xfffffffd;
      }
      uVar8 = 0;
      puVar3 = puVar4;
      if (iVar9 == 0) goto LAB_ram_400810b8;
      do {
        pbVar7 = (byte *)*param_1;
        uVar12 = iVar9 - 1;
        uVar6 = (uint)*pbVar7;
        param_1[1] = uVar12;
        *param_1 = (int)(pbVar7 + 1);
        *puVar3 = uVar6;
        if (uVar6 != 0) {
          if (uVar6 == 1) {
            uVar16 = 0;
            if (3 < uVar12) {
              uVar16 = CONCAT44(uStack_40,*(undefined4 *)(pbVar7 + 1));
              *param_1 = (int)(pbVar7 + 5);
              param_1[1] = iVar9 + -5;
            }
            *(undefined8 *)(puVar3 + 1) = uVar16;
          }
          goto joined_r0x400810ac;
        }
        if (1 < uVar12) {
          uVar1 = *(ushort *)(pbVar7 + 1);
          uVar12 = iVar9 - 3;
          *param_1 = (int)(pbVar7 + 3);
          param_1[1] = uVar12;
          *(ushort *)(puVar3 + 2) = uVar1;
          if (uVar12 < 2) goto LAB_ram_400812f6;
          uVar2 = *(ushort *)(pbVar7 + 3);
          pbVar7 = pbVar7 + 5;
          uVar12 = iVar9 - 5;
          *param_1 = (int)pbVar7;
          uVar6 = (uint)uVar1 * (uint)uVar2;
          param_1[1] = uVar12;
          *(ushort *)((int)puVar3 + 10) = uVar2;
          if (uVar6 == 0) goto LAB_ram_400812fa;
          uVar15 = uVar6 * 4;
          if ((uVar15 != 0) && (uVar5 = FUN_ram_40002f3c(uVar15), uVar5 != 0)) {
            if (uVar12 < uVar15) {
              param_1[1] = 0;
              FUN_ram_40002f4a();
              uVar11 = 0xfffffffe;
              goto LAB_ram_4008120c;
            }
            FUN_ram_4000305c(uVar5,pbVar7,uVar15);
            uVar12 = uVar12 + uVar6 * -4;
            *param_1 = (int)(pbVar7 + uVar15);
            param_1[1] = uVar12;
            puVar3[3] = uVar5;
            puVar3[4] = uVar6;
            goto LAB_ram_400811a4;
          }
LAB_ram_400812ac:
          uVar11 = 0xfffffffd;
          goto LAB_ram_4008120c;
        }
        *(undefined2 *)(puVar3 + 2) = 0;
LAB_ram_400812f6:
        *(undefined2 *)((int)puVar3 + 10) = 0;
LAB_ram_400812fa:
        puVar3[3] = 0;
        puVar3[4] = 0;
        uVar5 = 0;
LAB_ram_400811a4:
        if (1 < uVar12) {
          uVar12 = uVar12 - 2;
          puVar10 = (ushort *)*param_1 + 1;
          uVar6 = (uint)*(ushort *)*param_1;
          *param_1 = (int)puVar10;
          param_1[1] = uVar12;
          if (uVar6 != 0) {
            uVar13 = uVar6 * 4;
            uVar15 = FUN_ram_40002f2a(uVar13,1);
            puVar3[5] = uVar15;
            if (uVar15 == 0) {
              if (uVar5 != 0) {
                FUN_ram_40002f4a(uVar5);
                puVar3[3] = 0;
              }
              puVar3[4] = 0;
              if (puVar3[5] != 0) {
                FUN_ram_40002f4a();
                puVar3[5] = 0;
              }
              uVar14 = DAT_ram_40098374;
              puVar3[6] = 0;
              puVar3[2] = uVar14;
              goto LAB_ram_400812ac;
            }
            puVar3[6] = uVar6;
            if (uVar13 <= uVar12) {
              FUN_ram_4000305c(uVar15,puVar10,uVar13);
              *param_1 = (int)(puVar10 + uVar6 * 2);
              param_1[1] = uVar12 + uVar6 * -4;
              goto joined_r0x400810ac;
            }
            param_1[1] = 0;
            if (uVar5 == 0) {
              puVar3[4] = 0;
LAB_ram_400812e2:
              FUN_ram_40002f4a(uVar15);
              puVar3[5] = 0;
            }
            else {
              FUN_ram_40002f4a(uVar5);
              uVar15 = puVar3[5];
              puVar3[3] = 0;
              puVar3[4] = 0;
              if (uVar15 != 0) goto LAB_ram_400812e2;
            }
            uVar14 = DAT_ram_40098374;
            puVar3[6] = 0;
            puVar3[2] = uVar14;
            uVar11 = 0xfffffffe;
LAB_ram_4008120c:
            uVar6 = DAT_ram_40098374;
            uVar14 = 0;
            iVar9 = 0;
            uVar12 = *puVar4;
            while( true ) {
              if (uVar12 == 0) {
                if (puVar4[iVar9 + 3] != 0) {
                  FUN_ram_40002f4a();
                  puVar4[iVar9 + 3] = 0;
                }
                puVar4[iVar9 + 4] = 0;
                if (puVar4[iVar9 + 5] != 0) {
                  FUN_ram_40002f4a();
                  puVar4[iVar9 + 5] = 0;
                }
                puVar4[iVar9 + 6] = 0;
                puVar4[iVar9 + 2] = uVar6;
              }
              uVar14 = uVar14 + 1 & 0xffff;
              if (uVar8 < uVar14) break;
              iVar9 = uVar14 * 7;
              uVar12 = puVar4[uVar14 * 7];
            }
            FUN_ram_40002f4a(puVar4);
            return uVar11;
          }
        }
joined_r0x400810ac:
        while( true ) {
          uVar8 = uVar8 + 1 & 0xffff;
          if (uVar8 == uVar14) {
            *param_2 = puVar4;
            param_2[1] = uVar8;
            return 0;
          }
          puVar3 = puVar3 + 7;
          iVar9 = param_1[1];
          if (iVar9 != 0) break;
LAB_ram_400810b8:
          *puVar3 = 0;
          *(undefined2 *)(puVar3 + 2) = 0;
          *(undefined2 *)((int)puVar3 + 10) = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
        }
      } while( true );
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return 0;
}


