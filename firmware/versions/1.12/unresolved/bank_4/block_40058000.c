/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40058000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40058020.
 * REA evidence: ev_14af9de01b9fa2c9ff533589ce3977174dffb854a29df5db9b6664adb363097c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40058020(int param_1,int param_2)

{
  int iVar1;
  
  FUN_ram_400455dc();
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x2c);
  }
  iVar1 = thunk_FUN_ram_4000517a(param_2);
  if (*(int *)(param_1 + 0x2c) == param_2) {
    if ((*(byte *)(param_1 + 0x5c) & 8) == 0) {
      iVar1 = FUN_ram_4005a99a(param_2);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 == 0) {
        return;
      }
      goto LAB_ram_40058090;
    }
  }
  else if ((*(int *)(param_1 + 0x2c) != 0) && ((*(byte *)(param_1 + 0x5c) & 8) == 0)) {
    FUN_ram_4005a988();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  iVar1 = FUN_ram_4005a952(iVar1 + 1);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    return;
  }
  thunk_FUN_ram_40005124(iVar1,param_2);
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf7;
LAB_ram_40058090:
  FUN_ram_40057b72(param_1);
  return;
}


/* NanoCore 1.12, address 0x4005809e.
 * REA evidence: ev_623581492f53257e883ca604a03d3383dc3a3b9d6bceb04b712a6ddbe9aa7dd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005809e(int param_1,int param_2)

{
  byte bVar1;
  
  FUN_ram_4004a332(param_1,&LAB_ram_4005782e);
  FUN_ram_4004a332(param_1,&LAB_ram_40057828);
  bVar1 = *(byte *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(byte *)(param_1 + 0x5c) = bVar1 & 0xef | (param_2 - 2U < 3) << 4;
  if (((bVar1 & 7) == 1) && (*(int *)(param_1 + 0x34) != -1)) {
    FUN_ram_400578d8(param_1);
  }
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf8 | (byte)param_2 & 7;
  FUN_ram_40057b72(param_1);
  return;
}


/* NanoCore 1.12, address 0x40058116.
 * REA evidence: ev_2f971d7da2c591c179d7de9979253d2505075ff283e5c338be1ed58fca2a7029
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40058116(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x44) = 0xffff;
  *(undefined4 *)(param_2 + 0x48) = 0xffff;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(byte *)(param_2 + 0x5c) = *(byte *)(param_2 + 0x5c) & 0xd0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  FUN_ram_40043ba4(param_2,2);
  FUN_ram_4005809e(param_2,0);
  FUN_ram_40058020(param_2,&DAT_ram_4009e914);
  return;
}


/* NanoCore 1.12, address 0x40058170.
 * REA evidence: ev_0f4396428bc7436c6abc3b9282e67c31f100e4159179960d4b6bbced91ab058a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400581d8) */

void FUN_ram_40058170(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined1 auStack_94 [16];
  int aiStack_84 [4];
  int aiStack_74 [7];
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined2 uStack_42;
  undefined1 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  char cStack_2a;
  undefined1 uStack_29;
  int iStack_24;
  
  iVar3 = FUN_ram_40044b4c(&PTR_DAT_ram_4009e478_ram_4009e924);
  if (iVar3 == 1) {
    iVar3 = FUN_ram_4004afc8(param_2);
    iVar4 = FUN_ram_4004afc0(param_2);
    if (iVar3 - 0x2cU < 2) {
      FUN_ram_400578d8();
      FUN_ram_40057b72(iVar4);
      return;
    }
    if (iVar3 == 0x16) {
      iVar3 = FUN_ram_40057972();
      FUN_ram_40044cd8(param_2,*(int *)(iVar3 + 0xc) / 4);
      return;
    }
    if (iVar3 == 0x2f) {
      if ((*(byte *)(iVar4 + 0x5c) & 0x40) != 0) {
        uVar5 = FUN_ram_40057972();
        uVar6 = FUN_ram_4005795e(iVar4);
        uVar7 = FUN_ram_4005794a(iVar4);
        bVar1 = *(byte *)(iVar4 + 0x5c);
        FUN_ram_40045174(iVar4);
        aiStack_74[0] = FUN_ram_40047b68(iVar4,0,1);
        if ((aiStack_74[0] != 0x200007d1) ||
           (iVar3 = 0x1fffffff, (int)((uint)*(ushort *)(iVar4 + 0x2a) << 0x14) < 0)) {
          iVar3 = FUN_ram_40045174(iVar4);
        }
        aiStack_74[0] = FUN_ram_40047b68(iVar4,0,5);
        if (aiStack_74[0] <= iVar3) {
          iVar3 = FUN_ram_40047b68(iVar4,0,5);
          aiStack_74[0] = iVar3;
        }
        FUN_ram_4004c580(iVar4 + 0x4c,*(undefined4 *)(iVar4 + 0x2c),uVar5,uVar6,uVar7,iVar3,
                         (bVar1 & 0x1f) >> 4);
        *(byte *)(iVar4 + 0x5c) = *(byte *)(iVar4 + 0x5c) & 0xbf;
      }
      piVar8 = (int *)FUN_ram_4004afd2(param_2);
      iVar3 = *(int *)(iVar4 + 0x4c);
      if (*(int *)(iVar4 + 0x4c) < *piVar8) {
        iVar3 = *piVar8;
      }
      *piVar8 = iVar3;
      iVar3 = *(int *)(iVar4 + 0x50);
      if (*(int *)(iVar4 + 0x50) < piVar8[1]) {
        iVar3 = piVar8[1];
      }
      piVar8[1] = iVar3;
    }
    else if (iVar3 == 0x18) {
      iVar3 = FUN_ram_4004afc0(param_2);
      iVar4 = FUN_ram_40044ca4(param_2);
      FUN_ram_400451d0(iVar3,&iStack_a4);
      uVar5 = FUN_ram_40057986(iVar3);
      FUN_ram_4004e7e0(aiStack_74);
      uStack_58 = *(undefined4 *)(iVar3 + 0x2c);
      iStack_34 = *(int *)(iVar3 + 0x54);
      iStack_30 = *(int *)(iVar3 + 0x58);
      if (((*(byte *)(iVar3 + 0x5c) & 7) != 3) && (0x3fe < iStack_98 - iStack_a0)) {
        iStack_24 = iVar3 + 0x38;
      }
      uStack_29 = (undefined1)uVar5;
      FUN_ram_40044802(iVar3,0,aiStack_74);
      if (cStack_2a == '\0') {
        cStack_2a = '\x01';
      }
      iStack_50 = *(int *)(iVar3 + 0x44);
      iStack_4c = *(int *)(iVar3 + 0x48);
      if ((iStack_50 != 0xffff) && (iStack_4c != 0xffff)) {
        uVar6 = FUN_ram_40047b68(iVar3,0x40000,0x58);
        aiStack_84[0] = FUN_ram_40047dca(iVar3,0x40000,uVar6);
        uStack_45 = (undefined1)aiStack_84[0];
        uStack_43 = (undefined1)((uint)aiStack_84[0] >> 0x10);
        uStack_44 = (undefined1)((uint)aiStack_84[0] >> 8);
        aiStack_84[0] = FUN_ram_40047b68(iVar3,0x40000,0x1c);
        uStack_42 = (undefined2)aiStack_84[0];
        uStack_40 = (undefined1)((uint)aiStack_84[0] >> 0x10);
      }
      if ((((*(byte *)(iVar3 + 0x5c) & 6) == 2) && ((byte)(cStack_2a - 2U) < 2)) &&
         (FUN_ram_4004c580(aiStack_84,*(undefined4 *)(iVar3 + 0x2c),iStack_54,uStack_38,uStack_3c,
                           0x1fffffff,uVar5), (iStack_9c - iStack_a4) + 1 < aiStack_84[0])) {
        cStack_2a = '\x01';
      }
      iVar2 = iVar4 + 0x18;
      iVar9 = FUN_ram_4004a4fe(auStack_94,&iStack_a4,iVar2);
      if (iVar9 != 0) {
        if ((*(byte *)(iVar3 + 0x5c) & 7) == 0) {
          iVar9 = thunk_FUN_ram_40046652(iVar3);
          FUN_ram_4004a4e4(&iStack_a4,0,-iVar9);
          iStack_98 = *(int *)(iVar3 + 0x20);
        }
        if ((*(byte *)(iVar3 + 0x5c) & 6) == 2) {
          FUN_ram_4000303c(aiStack_84,iVar2,0x10);
          FUN_ram_4000303c(iVar2,auStack_94,0x10);
          FUN_ram_4004e856(iVar4,aiStack_74,&iStack_a4);
          FUN_ram_4000303c(iVar2,aiStack_84,0x10);
        }
        else {
          FUN_ram_4004e856(iVar4,aiStack_74,&iStack_a4);
        }
        FUN_ram_4000303c(aiStack_84,iVar2,0x10);
        FUN_ram_4000303c(iVar2,auStack_94,0x10);
        if ((*(byte *)(iVar3 + 0x5c) & 7) == 3) {
          FUN_ram_4004c580(&iStack_ac,*(undefined4 *)(iVar3 + 0x2c),iStack_54,uStack_38,uStack_3c,
                           0x1fffffff,uVar5);
          if ((iStack_9c - iStack_a4) + 1 < iStack_ac) {
            iVar10 = *(int *)(iVar3 + 0x54);
            iVar9 = FUN_ram_40059758(iStack_54,0x20,0x20);
            iStack_34 = iVar10 + iStack_ac + iVar9 * 3;
            iStack_30 = *(int *)(iVar3 + 0x58);
            FUN_ram_4004e856(iVar4,aiStack_74,&iStack_a4);
          }
          if ((iStack_98 - iStack_a0) + 1 < iStack_a8) {
            iStack_34 = *(int *)(iVar3 + 0x54);
            iStack_30 = iStack_a8 + *(int *)(iVar3 + 0x58) + *(int *)(iStack_54 + 0xc);
            FUN_ram_4004e856(iVar4,aiStack_74,&iStack_a4);
          }
        }
        FUN_ram_4000303c(iVar2,aiStack_84,0x10);
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400584f2.
 * REA evidence: ev_0df778f20d2b9b3164c15045702be427a5c7f0f0f8bfba8adacc0cc65bddbf65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400584f2(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  undefined1 auStack_1c [16];
  
  iVar1 = FUN_ram_4004e36e(param_2);
  if (iVar1 == 0) {
    thunk_FUN_ram_4000500c(param_3,param_2,0xc);
  }
  else if (iVar1 == 1) {
    uVar2 = FUN_ram_4004b3de(param_2);
    iVar1 = thunk_FUN_ram_40005162(uVar2,s_U__icons__s_bin_ram_4009a004 + 0xc);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_ram_4004b326(auStack_1c,param_2,2);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4004b05c(auStack_1c,param_3,0xc,&local_20);
      FUN_ram_4004b00a(auStack_1c);
      if (iVar1 != 0) {
        return 0;
      }
      if (local_20 != 0xc) {
        return 0;
      }
      if (*param_3 != '\x19') {
        param_3[1] = *param_3;
        *param_3 = '\x19';
      }
      *(ushort *)(param_3 + 2) = *(ushort *)(param_3 + 2) | 0x20;
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    param_3[1] = '\x0e';
    param_3[4] = '\x01';
    param_3[5] = '\0';
    param_3[6] = '\x01';
    param_3[7] = '\0';
  }
  if (*param_3 != '\x19') {
    *(ushort *)(param_3 + 2) = *(ushort *)(param_3 + 2) & 0xfffe;
  }
  return 1;
}


/* NanoCore 1.12, address 0x400585b2.
 * REA evidence: ev_a95b98a5c31d1e96d7782435995ef1a00502378949be27c8c54a10139b763522
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400585b2(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_ram_4004b00a();
      FUN_ram_4005a988(*piVar1);
    }
    if (piVar1[7] != 0) {
      FUN_ram_4004dd2c();
    }
    if (piVar1[8] != 0) {
      FUN_ram_4004dd2c();
    }
    FUN_ram_4005a988(piVar1[1]);
    FUN_ram_4005a988(piVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x400585f8.
 * REA evidence: ev_a2fd9e7dd650caaaa059ce03a663a62508587267d58e1b3b6fd351df1b8786ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400585f8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    FUN_ram_4004dd2c();
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  FUN_ram_400585b2(param_2);
  if (*(int *)(param_2 + 0x34) != 0) {
    FUN_ram_4004cee6(*(undefined4 *)(param_2 + 0x30),*(int *)(param_2 + 0x34),0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40058636.
 * REA evidence: ev_522cd10b78989ec3a68d9839f199dd8249ee83b696b1ebdf8476968828675344
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40058636(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 *param_5)

{
  int iVar1;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  iVar1 = FUN_ram_4004b1fc(param_1,param_2,0);
  if (iVar1 == 0) {
    FUN_ram_4004b05c(param_1,param_3,param_4,param_5);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005867c.
 * REA evidence: ev_34c2d400611fc87517181ee1d10426642e419598dc94652a2cb8fdcd1941593a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005867c(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (iVar1 = FUN_ram_4005a960(0x40), iVar1 != 0)) {
    *(int *)(param_1 + 0x38) = iVar1;
  }
  return;
}


/* NanoCore 1.12, address 0x4005869c.
 * REA evidence: ev_75cdc9135aeba36650ea8d2c0a91bd82fa26209d46ad4875382794bda2351ab1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005869c(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  int aiStack_34 [4];
  
  puVar15 = *(undefined4 **)(param_1 + 0x38);
  uVar5 = FUN_ram_4004adf8(*(undefined1 *)(param_1 + 0x11));
  uVar17 = (uint)*(ushort *)(param_1 + 0x16);
  if (uVar5 == 0) {
    uVar16 = 0xffffffff;
  }
  else {
    uVar16 = (int)((uint)*(ushort *)(param_1 + 0x18) << 3) / (int)uVar5;
  }
  iVar1 = *(ushort *)(param_1 + 0x18) * uVar17;
  iVar6 = FUN_ram_4004dbd6(*(undefined2 *)(param_1 + 0x14),uVar17,0xe,uVar16 & 0x1fffffff);
  if (iVar6 == 0) {
    return 0;
  }
  iVar3 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(param_1 + 0x12) & 8) == 0) {
    if (*(char *)(param_1 + 0xc) == '\x01') {
      iVar12 = FUN_ram_40058636(*puVar15,0xc,iVar3,iVar1,aiStack_34);
      if ((iVar12 != 0) || (iVar1 != aiStack_34[0])) {
        FUN_ram_4004dd2c(iVar6);
        return 0;
      }
      goto LAB_ram_40058702;
    }
    if (*(char *)(param_1 + 0xc) != '\0') goto LAB_ram_40058702;
    iVar12 = *(int *)(param_1 + 8);
  }
  else {
    iVar12 = puVar15[8];
  }
  thunk_FUN_ram_4000500c(iVar3,*(undefined4 *)(iVar12 + 0x10),iVar1);
LAB_ram_40058702:
  if (*(char *)(param_1 + 0x11) != '\x0e') {
    pbVar2 = (byte *)(iVar1 + -1 + iVar3);
    uVar11 = 0;
    puVar4 = (undefined1 *)(iVar3 + (uVar16 * uVar17 - 1));
    for (puVar13 = puVar4; (uint)((int)puVar4 - (int)puVar13) < uVar16 * uVar17;
        puVar13 = puVar13 + -1) {
      uVar8 = 0;
      uVar10 = (int)(uint)*pbVar2 >> (uVar11 & 0x1f) & (1 << (uVar5 & 0x1f)) - 1U & 0xff;
      uVar7 = uVar5;
      uVar9 = uVar10;
      if (uVar10 != 0) {
        for (; uVar8 = (undefined1)uVar9, uVar7 < 8; uVar7 = uVar7 + uVar5 & 0xff) {
          uVar14 = 8 - uVar7;
          uVar9 = uVar10 << (uVar14 & 0x1f) & 0xff | uVar9;
        }
      }
      *puVar13 = uVar8;
      uVar11 = uVar11 + uVar5 & 0xff;
      if (7 < uVar11) {
        pbVar2 = pbVar2 + -1;
        uVar11 = 0;
      }
    }
  }
  puVar15[7] = iVar6;
  *(int *)(param_1 + 0x1c) = iVar6;
  return 1;
}


/* NanoCore 1.12, address 0x400587ce.
 * REA evidence: ev_1e8311a97225dad8395ab6f64483f17dcbff894c1112e080b51a6896572d246f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400587ce(uint param_1,int param_2,uint param_3,int param_4,byte *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 9) {
    param_5 = param_5 + ((int)param_3 >> 1);
    uVar2 = 0;
    if ((param_3 & 1) == 0) {
      uVar2 = 4;
    }
    iVar3 = 4;
  }
  else if (param_1 < 10) {
    if (param_1 == 7) {
      uVar2 = (uint)(char)((byte)param_3 ^ 7);
      iVar3 = 1;
    }
    else {
      if (param_1 != 8) {
        return;
      }
      param_5 = param_5 + ((int)param_3 >> 2);
      uVar2 = (~param_3 & 3) << 1;
      iVar3 = 2;
    }
  }
  else {
    if (param_1 != 10) {
      return;
    }
    param_5 = param_5 + param_3;
    uVar2 = 0;
    iVar3 = 8;
  }
  for (iVar4 = 0; iVar4 < param_4; iVar4 = iVar4 + 1) {
    uVar1 = (int)((uVar2 - iVar3) * 0x1000000) >> 0x18;
    FUN_ram_4000303c(param_6 + iVar4 * 4,
                     param_2 + ((int)(uint)*param_5 >> (uVar2 & 0x1f) & (1 << iVar3) - 1U & 0xffff &
                               0xff) * 4,4);
    uVar2 = uVar1;
    if ((int)uVar1 < 0) {
      param_5 = param_5 + 1;
      uVar2 = 8 - iVar3;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40058898.
 * REA evidence: ev_ed9c2dbe82d7c0577a45dd1b059b9de4b1ed6353693a7d0d4be7d32df3b80289
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40058898(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iStack_38;
  int iStack_34;
  
  cVar1 = *(char *)(param_1 + 0x11);
  puVar11 = *(undefined4 **)(param_1 + 0x38);
  iVar7 = 8;
  if ((((cVar1 != '\a') && (iVar7 = 0x10, cVar1 != '\b')) && (iVar7 = 0x40, cVar1 != '\t')) &&
     (iVar7 = 0x400, cVar1 != '\n')) {
    iVar7 = 0;
  }
  uVar2 = *(ushort *)(param_1 + 0x12);
  if ((uVar2 & 8) == 0) {
    if (*(char *)(param_1 + 0xc) != '\x01') {
      if (*(char *)(param_1 + 0xc) != '\0') {
        return 0;
      }
      iVar8 = *(int *)(param_1 + 8);
      goto LAB_ram_400588f2;
    }
    uVar9 = *puVar11;
    iVar8 = FUN_ram_4005a952(iVar7);
    if (iVar8 == 0) {
      return 0;
    }
    iVar10 = FUN_ram_40058636(uVar9,0xc,iVar8,iVar7,&iStack_38);
    if ((iVar10 != 0) || (iVar7 != iStack_38)) {
      FUN_ram_4005a988(iVar8);
      return 0;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x18);
    uVar4 = *(undefined2 *)(param_1 + 0x16);
    uVar5 = *(undefined2 *)(param_1 + 0x14);
    puVar11[1] = iVar8;
    iVar10 = FUN_ram_4004dbd6(uVar5,uVar4,cVar1,uVar3);
    if (iVar10 == 0) goto LAB_ram_40058a3c;
    iVar12 = *(int *)(iVar10 + 0x10);
    iStack_34 = 0;
    iVar14 = FUN_ram_4004b1fc(uVar9,0,2);
    if ((iVar14 != 0) || (iVar14 = FUN_ram_4004b292(uVar9,&iStack_34), iVar14 != 0))
    goto LAB_ram_40058a3c;
    iStack_34 = iStack_34 - (iVar7 + 0xc);
    iVar7 = FUN_ram_40058636(uVar9,iVar7 + 0xc,iVar12,iStack_34,&iStack_38);
    if ((iVar7 != 0) || (iStack_38 != iStack_34)) goto LAB_ram_40058a3c;
  }
  else {
    iVar8 = puVar11[8];
LAB_ram_400588f2:
    iVar8 = *(int *)(iVar8 + 0x10);
    iVar10 = 0;
    iVar12 = iVar8 + iVar7;
  }
  *(int *)(param_1 + 0x20) = iVar8;
  uVar9 = 2;
  if ((((cVar1 != '\a') && (uVar9 = 4, cVar1 != '\b')) && (uVar9 = 0x10, cVar1 != '\t')) &&
     (uVar9 = 0x100, cVar1 != '\n')) {
    uVar9 = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  iVar7 = FUN_ram_4004dbd6(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),0x10,0);
  if (iVar7 != 0) {
    uVar6 = *(ushort *)(iVar7 + 8);
    iVar14 = *(int *)(iVar7 + 0x10);
    for (uVar13 = 0; uVar13 < *(ushort *)(param_1 + 0x16); uVar13 = uVar13 + 1) {
      FUN_ram_400587ce(cVar1,*(undefined4 *)(param_1 + 0x20),0,*(undefined2 *)(param_1 + 0x14),
                       iVar12,iVar14);
      iVar14 = iVar14 + (uint)uVar6;
      iVar12 = iVar12 + (uint)*(ushort *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x1c) = iVar7;
    puVar11[7] = iVar7;
    if (*(char *)(param_1 + 0xc) != '\x01') {
      return 1;
    }
    if ((uVar2 & 8) == 0) {
      puVar11[1] = iVar8;
      FUN_ram_4004dd2c(iVar10);
      return 1;
    }
    return 1;
  }
LAB_ram_40058a3c:
  if ((*(char *)(param_1 + 0xc) == '\x01') && ((uVar2 & 8) == 0)) {
    FUN_ram_4005a988(iVar8);
    puVar11[1] = 0;
  }
  if (iVar10 != 0) {
    FUN_ram_4004dd2c(iVar10);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40058a64.
 * REA evidence: ev_d69976451b8dcbb5f81d519509a7bd9653655a9dab587f265975b8ed018af25e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40058a64(undefined4 param_1,int param_2,int *param_3,uint *param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  undefined4 *puVar17;
  
  cVar1 = *(char *)(param_2 + 0x11);
  bVar16 = cVar1 - 7;
  if (((bVar16 < 4) || ((byte)(cVar1 - 0xfU) < 6)) &&
     (puVar17 = *(undefined4 **)(param_2 + 0x38), puVar17 != (undefined4 *)0x0)) {
    uVar11 = *puVar17;
    uVar3 = FUN_ram_4004adf8(cVar1);
    uVar9 = (param_3[2] - *param_3) + 1;
    iVar15 = 0xc;
    if (*(char *)(param_2 + 0xc) != '\x01') {
      iVar15 = 0;
    }
    iVar10 = puVar17[0xf];
    if (param_4[1] == 0xe0000001) {
      cVar5 = cVar1;
      if (bVar16 < 4) {
        cVar5 = '\x10';
      }
      if (((iVar10 == 0) || (*(ushort *)(iVar10 + 4) != uVar9)) &&
         (iVar10 = FUN_ram_4004dbd6(uVar9,1,cVar5,0), iVar10 == 0)) {
        return 0;
      }
      FUN_ram_4000303c(param_4,param_3,0x10);
      param_4[3] = param_4[1];
      puVar17[0xf] = iVar10;
    }
    else {
      param_4[1] = param_4[1] + 1;
      param_4[3] = param_4[3] + 1;
    }
    uVar7 = param_4[1];
    if ((int)uVar7 <= param_3[3]) {
      iVar12 = *(int *)(iVar10 + 0x10);
      if (bVar16 < 4) {
        uVar8 = *param_4;
        if (uVar3 == 0) {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = 8 / uVar3;
        }
        uVar14 = uVar8;
        if (uVar13 != 0) {
          uVar14 = uVar8 % uVar13;
        }
        iVar15 = *(ushort *)(param_2 + 0x18) * uVar7 + *(int *)(param_2 + 0x24) * 4 +
                 (uVar8 * uVar3 >> 3) + iVar15;
        if (*(char *)(param_2 + 0xc) == '\x01') {
          iVar6 = (uVar9 * uVar3 + 7 >> 3) + 1;
          iVar4 = FUN_ram_4005a952(iVar6);
          if (iVar4 == 0) {
            return 0;
          }
          iVar15 = FUN_ram_40058636(uVar11,iVar15,iVar4,iVar6,0);
          if (iVar15 != 0) {
            FUN_ram_4005a988(iVar4);
            return 0;
          }
        }
        else {
          iVar4 = *(int *)(*(int *)(param_2 + 8) + 0x10) + iVar15;
        }
        FUN_ram_400587ce(cVar1,*(undefined4 *)(param_2 + 0x20),uVar14,uVar9,iVar4,iVar12);
        if (*(char *)(param_2 + 0xc) == '\x01') {
          FUN_ram_4005a988(iVar4);
        }
      }
      else {
        if ((byte)(cVar1 - 0xfU) < 5) {
          uVar9 = uVar9 * uVar3 >> 3;
          iVar15 = (uVar3 * *param_4 >> 3) + *(ushort *)(param_2 + 0x18) * uVar7 + iVar15;
        }
        else {
          if (cVar1 != '\x14') {
            return 0;
          }
          uVar2 = *(ushort *)(iVar10 + 8);
          iVar15 = FUN_ram_40058636(uVar11,(*param_4 & 0xfffffff) * 2 +
                                           *(ushort *)(param_2 + 0x18) * uVar7 + iVar15,iVar12,
                                    (uint)uVar2,0);
          if (iVar15 != 0) {
            return 0;
          }
          iVar12 = iVar12 + (uint)uVar2;
          iVar15 = *param_4 + 0xc +
                   (uint)*(ushort *)(param_2 + 0x16) * (uint)*(ushort *)(param_2 + 0x18) +
                   (uint)(*(ushort *)(param_2 + 0x18) >> 1) * param_4[1];
        }
        iVar15 = FUN_ram_40058636(uVar11,iVar15,iVar12,uVar9,0);
        if (iVar15 != 0) {
          return 0;
        }
      }
      *(int *)(param_2 + 0x1c) = iVar10;
      return 1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40058c82.
 * REA evidence: ev_061e07554a0d880bbbd6cd695b84f6585c9a8953c26ffe7be40ed80ebf6a4ec1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40058c82(int param_1)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iStack_38;
  int aiStack_34 [4];
  
  puVar10 = *(undefined4 **)(param_1 + 0x38);
  if ((*(ushort *)(param_1 + 0x12) & 8) == 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      puVar6 = *(undefined4 **)(param_1 + 8);
      puVar7 = puVar6;
      if ((*(ushort *)((int)puVar6 + 2) & 0x10) == 0) {
        puVar7 = puVar10 + 9;
        thunk_FUN_ram_4000500c(puVar7,puVar6,0x18);
        puVar10[0xe] = puVar10[0xd];
      }
      sVar2 = *(short *)(puVar7 + 2);
      *(undefined4 **)(param_1 + 0x1c) = puVar7;
      uVar3 = 1;
      if (sVar2 == 0) {
        *(undefined2 *)(puVar7 + 2) = *(undefined2 *)(param_1 + 0x18);
        uVar3 = 1;
      }
    }
    else {
      if (*(char *)(param_1 + 0xc) == '\x01') {
        cVar1 = *(char *)(param_1 + 0x11);
        uVar8 = *puVar10;
        iVar4 = FUN_ram_4004dbd6(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                                 cVar1,*(undefined2 *)(param_1 + 0x18));
        if (iVar4 != 0) {
          iVar11 = *(int *)(iVar4 + 0x10);
          iVar9 = 8;
          if ((((cVar1 != '\a') && (iVar9 = 0x10, cVar1 != '\b')) && (iVar9 = 0x40, cVar1 != '\t'))
             && (iVar9 = 0x400, cVar1 != '\n')) {
            iVar9 = 0;
          }
          iVar5 = FUN_ram_40058636(uVar8,0xc,iVar11,iVar9,&iStack_38);
          if ((iVar5 == 0) && (iVar9 == iStack_38)) {
            aiStack_34[0] = 0;
            iVar5 = FUN_ram_4004b1fc(uVar8,0,2);
            if ((iVar5 == 0) && (iVar5 = FUN_ram_4004b292(uVar8,aiStack_34), iVar5 == 0)) {
              aiStack_34[0] = aiStack_34[0] - (iVar9 + 0xc);
              iVar9 = FUN_ram_40058636(uVar8,iVar9 + 0xc,iVar11 + iVar9,aiStack_34[0],&iStack_38);
              if ((iVar9 == 0) && (iStack_38 == aiStack_34[0])) {
                puVar10[7] = iVar4;
                *(int *)(param_1 + 0x1c) = iVar4;
                return 1;
              }
            }
          }
          FUN_ram_4004dd2c(iVar4);
        }
      }
      uVar3 = 0;
    }
  }
  else {
    uVar8 = puVar10[8];
    *(undefined4 *)(param_1 + 0x1c) = uVar8;
    puVar10[7] = uVar8;
    puVar10[8] = 0;
    uVar3 = 1;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40058db6.
 * REA evidence: ev_3da2f2729bac7b6b30b169368476ab167359ac1acd726f9dcf3e64763935e9c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40058db6(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_28;
  int iStack_24;
  
  puVar1 = (undefined4 *)FUN_ram_4005867c();
  puVar9 = puVar1 + 3;
  thunk_FUN_ram_40004f92(puVar9,0,0x10);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar10 = *puVar1;
    iVar2 = FUN_ram_4004b1fc(uVar10,0,2);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_ram_4004b292(uVar10,&iStack_24);
    if (iVar2 != 0) {
      return 0;
    }
    iStack_24 = iStack_24 + -0x18;
    iVar2 = FUN_ram_40058636(uVar10,0xc,puVar9,0xc,&iStack_28);
    if (iVar2 != 0) {
      return 0;
    }
    if (iStack_28 != 0xc) {
      return 0;
    }
    if (puVar1[4] != iStack_24) {
      return 0;
    }
    iVar2 = FUN_ram_4005a952();
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = FUN_ram_4004b05c(uVar10,iVar2,iStack_24,&iStack_28);
    if ((iVar3 != 0) || (iStack_28 != iStack_24)) {
      FUN_ram_4005a988(iVar2);
      return 0;
    }
    puVar1[6] = iVar2;
  }
  else {
    if (*(char *)(param_1 + 0xc) != '\0') {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 8);
    iStack_24 = *(int *)(iVar2 + 0xc) + -0xc;
    thunk_FUN_ram_4000500c(puVar9,*(undefined4 *)(iVar2 + 0x10),0xc);
    puVar1[6] = *(int *)(iVar2 + 0x10) + 0xc;
    if (puVar1[4] != iStack_24) {
      return 0;
    }
    iVar2 = 0;
  }
  iVar3 = FUN_ram_4005867c(param_1);
  if (iVar3 != 0) {
    uVar11 = puVar1[5];
    uVar10 = puVar1[4];
    iVar4 = FUN_ram_4004dbd6(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                             *(undefined1 *)(param_1 + 0x11),*(undefined2 *)(param_1 + 0x18));
    if (iVar4 != 0) {
      uVar6 = *(undefined4 *)(iVar4 + 0x10);
      if ((puVar1[3] & 0xf) == 1) {
        uVar7 = 2;
        if (*(char *)(param_1 + 0x11) != '\x14') {
          iVar5 = FUN_ram_4004adf8();
          uVar7 = iVar5 + 7 >> 3;
        }
        iVar5 = FUN_ram_400594ec(puVar1[6],uVar10,uVar6,uVar11,uVar7 & 0xff);
LAB_ram_40058f34:
        if (puVar1[5] == iVar5) {
          *(int *)(iVar3 + 0x20) = iVar4;
          bVar8 = true;
          goto LAB_ram_40058e78;
        }
      }
      else if (((puVar1[3] & 0xf) == 2) &&
              (iVar5 = FUN_ram_4005921c(puVar1[6],uVar6,uVar10,uVar11), -1 < iVar5))
      goto LAB_ram_40058f34;
      FUN_ram_4004dd2c(iVar4);
    }
  }
  bVar8 = false;
LAB_ram_40058e78:
  puVar1[6] = 0;
  FUN_ram_4005a988(iVar2);
  if (((!bVar8) || (iVar2 = puVar1[8], iVar2 == 0)) || (*(int *)(iVar2 + 0x10) == 0)) {
    return 0;
  }
  if (3 < (byte)(*(char *)(param_1 + 0x11) - 7U)) {
    if (3 < (byte)(*(char *)(param_1 + 0x11) - 0xbU)) {
      *(int *)(param_1 + 0x1c) = iVar2;
      puVar1[7] = iVar2;
      puVar1[8] = 0;
      return 1;
    }
    uVar10 = FUN_ram_4005869c(param_1);
    return uVar10;
  }
  if (*(char *)(param_1 + 7) == '\0') {
    uVar10 = FUN_ram_40058898(param_1);
    return uVar10;
  }
  uVar10 = FUN_ram_40058c82();
  return uVar10;
}


/* NanoCore 1.12, address 0x40058f7e.
 * REA evidence: ev_7a2b240f1fee7aee5ad6697683d4149622aa824f78d4a775b88811c3c6885263
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40058f7e(undefined4 param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined4 *puVar10;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar3 = FUN_ram_4004b3de(*(undefined4 *)(param_2 + 8));
    iVar4 = thunk_FUN_ram_40005162(uVar3,s_U__icons__s_bin_ram_4009a004 + 0xc);
    if (iVar4 != 0) {
      return 0;
    }
    piVar5 = (int *)FUN_ram_4005867c(param_2);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    *(int **)(param_2 + 0x38) = piVar5;
    iVar4 = FUN_ram_4005a952(0xc);
    if (iVar4 == 0) goto LAB_ram_40058fe4;
    iVar6 = FUN_ram_4004b326(iVar4,*(undefined4 *)(param_2 + 8),2);
    if (iVar6 != 0) {
      FUN_ram_4005a988(iVar4);
      goto LAB_ram_40058fe4;
    }
    uVar1 = *(ushort *)(param_2 + 0x12);
    *piVar5 = iVar4;
    if ((uVar1 & 8) != 0) goto LAB_ram_4005900c;
    cVar9 = *(char *)(param_2 + 0x11);
    if ((byte)(cVar9 - 7U) < 4) {
      cVar9 = '\0';
      if (*(char *)(param_2 + 7) == '\0') goto LAB_ram_40059106;
      iVar4 = FUN_ram_40058c82();
    }
    else {
      if ((byte)(cVar9 - 0xbU) < 4) goto LAB_ram_40059044;
      if (5 < (byte)(cVar9 - 0xfU)) goto LAB_ram_4005905a;
      puVar10 = *(undefined4 **)(param_2 + 0x38);
      uVar3 = *puVar10;
      iVar6 = (uint)*(ushort *)(param_2 + 0x18) * (uint)*(ushort *)(param_2 + 0x16);
      if (cVar9 == '\x14') {
        iVar6 = iVar6 + (uint)(*(ushort *)(param_2 + 0x18) >> 1) * (uint)*(ushort *)(param_2 + 0x16)
        ;
      }
      iVar7 = FUN_ram_4004dbd6(*(undefined2 *)(param_2 + 0x14));
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar8 = FUN_ram_40058636(uVar3,0xc,*(undefined4 *)(iVar7 + 0x10),iVar6,&iStack_48);
        if ((iVar8 == 0) && (iVar6 == iStack_48)) {
          *(int *)(param_2 + 0x1c) = iVar7;
          puVar10[7] = iVar7;
          iVar4 = 1;
        }
        else {
          FUN_ram_4004dd2c(iVar7);
        }
      }
    }
LAB_ram_400590ae:
    cVar9 = '\0';
LAB_ram_400590b0:
    if (iVar4 != 1) {
LAB_ram_4005905c:
      FUN_ram_400585b2(param_2);
      return iVar4;
    }
  }
  else {
    if (*(char *)(param_2 + 0xc) != '\0') {
LAB_ram_4005905a:
      iVar4 = 0;
      goto LAB_ram_4005905c;
    }
    iVar4 = *(int *)(param_2 + 8);
    if (*(int *)(iVar4 + 0x10) == 0) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 0x12) & 8) != 0) {
LAB_ram_4005900c:
      iVar4 = FUN_ram_40058db6(param_2);
      goto LAB_ram_400590ae;
    }
    if ((byte)(*(char *)(iVar4 + 1) - 7U) < 4) {
      iVar4 = FUN_ram_4005867c(param_2);
      if (iVar4 == 0) {
        return 0;
      }
      cVar9 = *(char *)(param_2 + 7);
      if (cVar9 == '\0') {
LAB_ram_40059106:
        iVar4 = FUN_ram_40058898(param_2);
      }
      else {
        iVar4 = FUN_ram_40058c82(param_2);
      }
      goto LAB_ram_400590b0;
    }
    if ((byte)(*(char *)(iVar4 + 1) - 0xbU) < 4) {
      iVar4 = FUN_ram_4005867c(param_2);
      if (iVar4 == 0) {
        return 0;
      }
LAB_ram_40059044:
      iVar4 = FUN_ram_4005869c(param_2);
      goto LAB_ram_400590ae;
    }
    iVar7 = FUN_ram_4005867c(param_2);
    iVar6 = iVar4;
    if ((*(ushort *)(iVar4 + 2) & 0x10) == 0) {
      iVar6 = iVar7 + 0x24;
      thunk_FUN_ram_4000500c(iVar6,iVar4,0x18);
      *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar7 + 0x34);
    }
    sVar2 = *(short *)(iVar6 + 8);
    *(int *)(param_2 + 0x1c) = iVar6;
    cVar9 = '\x01';
    if (sVar2 == 0) {
      *(undefined2 *)(iVar6 + 8) = *(undefined2 *)(param_2 + 0x18);
    }
  }
  iVar4 = *(int *)(param_2 + 0x1c);
  if (iVar4 == 0) {
    return 1;
  }
  iVar6 = FUN_ram_4004f84e(param_2,iVar4);
  if (iVar6 != 0) {
    if (iVar4 == iVar6) {
      *(int *)(param_2 + 0x1c) = iVar4;
      if (cVar9 != '\0') {
        return 1;
      }
    }
    else {
      FUN_ram_400585b2(param_2);
      iVar4 = FUN_ram_4005867c(param_2);
      *(int *)(iVar4 + 0x1c) = iVar6;
      *(int *)(param_2 + 0x1c) = iVar6;
    }
    if (*(char *)(param_2 + 6) != '\0') {
      return 1;
    }
    uStack_40 = *(undefined1 *)(param_2 + 0xc);
    uStack_44 = *(undefined4 *)(param_2 + 8);
    iStack_48 = *(int *)(*(int *)(param_2 + 0x1c) + 0xc);
    iVar4 = FUN_ram_4004f7f2(param_1,&iStack_48,*(int *)(param_2 + 0x1c),
                             *(undefined4 *)(param_2 + 0x38));
    if (iVar4 != 0) {
      *(int *)(param_2 + 0x34) = iVar4;
      iVar4 = FUN_ram_4005867c(param_2);
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      return 1;
    }
  }
LAB_ram_40058fe4:
  FUN_ram_400585b2(param_2);
  return 0;
}


