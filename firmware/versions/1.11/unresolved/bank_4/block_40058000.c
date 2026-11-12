/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40058000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400581ee.
 * REA evidence: ev_d1716fa8bb7f869189a080aca4929f13490ad78cced699f9d8b9d6b0fda22123
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400581ee(int param_1,int param_2)

{
  int iVar1;
  
  FUN_ram_400454e4();
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x2c);
  }
  iVar1 = thunk_FUN_ram_40005234(param_2);
  if (*(int *)(param_1 + 0x2c) == param_2) {
    if ((*(byte *)(param_1 + 0x5c) & 8) == 0) {
      iVar1 = FUN_ram_4005ab68(param_2);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 == 0) {
        return;
      }
      goto LAB_ram_4005825e;
    }
  }
  else if ((*(int *)(param_1 + 0x2c) != 0) && ((*(byte *)(param_1 + 0x5c) & 8) == 0)) {
    FUN_ram_4005ab56();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  iVar1 = FUN_ram_4005ab20(iVar1 + 1);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    return;
  }
  thunk_FUN_ram_400051de(iVar1,param_2);
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf7;
LAB_ram_4005825e:
  FUN_ram_40057d40(param_1);
  return;
}


/* NanoCore 1.11, address 0x4005826c.
 * REA evidence: ev_f7f312d08561d6e4b9acf1054e37ed3f993b8666c8976e7b7302c678e7f1f1ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005826c(int param_1,int param_2)

{
  byte bVar1;
  
  FUN_ram_4004a23a(param_1,&LAB_ram_400579fc);
  FUN_ram_4004a23a(param_1,&LAB_ram_400579f6);
  bVar1 = *(byte *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(byte *)(param_1 + 0x5c) = bVar1 & 0xef | (param_2 - 2U < 3) << 4;
  if (((bVar1 & 7) == 1) && (*(int *)(param_1 + 0x34) != -1)) {
    FUN_ram_40057aa6(param_1);
  }
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf8 | (byte)param_2 & 7;
  FUN_ram_40057d40(param_1);
  return;
}


/* NanoCore 1.11, address 0x400582e4.
 * REA evidence: ev_fd3a8701216deba394039765f2e573860893db8fbf321926d764d762ef3d74d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400582e4(undefined4 param_1,int param_2)

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
  FUN_ram_40043aac(param_2,2);
  FUN_ram_4005826c(param_2,0);
  FUN_ram_400581ee(param_2,&DAT_ram_40099834);
  return;
}


/* NanoCore 1.11, address 0x4005833e.
 * REA evidence: ev_b4f8ca245178316d86933f465971815480eec86582a6e031af1158d6fa5a20ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400583a6) */

void FUN_ram_4005833e(undefined4 param_1,undefined4 param_2)

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
  
  iVar3 = FUN_ram_40044a54(&PTR_DAT_ram_40099398_ram_40099844);
  if (iVar3 == 1) {
    iVar3 = FUN_ram_4004aed0(param_2);
    iVar4 = FUN_ram_4004aec8(param_2);
    if (iVar3 - 0x2cU < 2) {
      FUN_ram_40057aa6();
      FUN_ram_40057d40(iVar4);
      return;
    }
    if (iVar3 == 0x16) {
      iVar3 = FUN_ram_40057b40();
      FUN_ram_40044be0(param_2,*(int *)(iVar3 + 0xc) / 4);
      return;
    }
    if (iVar3 == 0x2f) {
      if ((*(byte *)(iVar4 + 0x5c) & 0x40) != 0) {
        uVar5 = FUN_ram_40057b40();
        uVar6 = FUN_ram_40057b2c(iVar4);
        uVar7 = FUN_ram_40057b18(iVar4);
        bVar1 = *(byte *)(iVar4 + 0x5c);
        FUN_ram_4004507c(iVar4);
        aiStack_74[0] = FUN_ram_40047a70(iVar4,0,1);
        if ((aiStack_74[0] != 0x200007d1) ||
           (iVar3 = 0x1fffffff, (int)((uint)*(ushort *)(iVar4 + 0x2a) << 0x14) < 0)) {
          iVar3 = FUN_ram_4004507c(iVar4);
        }
        aiStack_74[0] = FUN_ram_40047a70(iVar4,0,5);
        if (aiStack_74[0] <= iVar3) {
          iVar3 = FUN_ram_40047a70(iVar4,0,5);
          aiStack_74[0] = iVar3;
        }
        FUN_ram_4004c488(iVar4 + 0x4c,*(undefined4 *)(iVar4 + 0x2c),uVar5,uVar6,uVar7,iVar3,
                         (bVar1 & 0x1f) >> 4);
        *(byte *)(iVar4 + 0x5c) = *(byte *)(iVar4 + 0x5c) & 0xbf;
      }
      piVar8 = (int *)FUN_ram_4004aeda(param_2);
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
      iVar3 = FUN_ram_4004aec8(param_2);
      iVar4 = FUN_ram_40044bac(param_2);
      FUN_ram_400450d8(iVar3,&iStack_a4);
      uVar5 = FUN_ram_40057b54(iVar3);
      FUN_ram_4004e702(aiStack_74);
      uStack_58 = *(undefined4 *)(iVar3 + 0x2c);
      iStack_34 = *(int *)(iVar3 + 0x54);
      iStack_30 = *(int *)(iVar3 + 0x58);
      if (((*(byte *)(iVar3 + 0x5c) & 7) != 3) && (0x3fe < iStack_98 - iStack_a0)) {
        iStack_24 = iVar3 + 0x38;
      }
      uStack_29 = (undefined1)uVar5;
      FUN_ram_4004470a(iVar3,0,aiStack_74);
      if (cStack_2a == '\0') {
        cStack_2a = '\x01';
      }
      iStack_50 = *(int *)(iVar3 + 0x44);
      iStack_4c = *(int *)(iVar3 + 0x48);
      if ((iStack_50 != 0xffff) && (iStack_4c != 0xffff)) {
        uVar6 = FUN_ram_40047a70(iVar3,0x40000,0x58);
        aiStack_84[0] = FUN_ram_40047cd2(iVar3,0x40000,uVar6);
        uStack_45 = (undefined1)aiStack_84[0];
        uStack_43 = (undefined1)((uint)aiStack_84[0] >> 0x10);
        uStack_44 = (undefined1)((uint)aiStack_84[0] >> 8);
        aiStack_84[0] = FUN_ram_40047a70(iVar3,0x40000,0x1c);
        uStack_42 = (undefined2)aiStack_84[0];
        uStack_40 = (undefined1)((uint)aiStack_84[0] >> 0x10);
      }
      if ((((*(byte *)(iVar3 + 0x5c) & 6) == 2) && ((byte)(cStack_2a - 2U) < 2)) &&
         (FUN_ram_4004c488(aiStack_84,*(undefined4 *)(iVar3 + 0x2c),iStack_54,uStack_38,uStack_3c,
                           0x1fffffff,uVar5), (iStack_9c - iStack_a4) + 1 < aiStack_84[0])) {
        cStack_2a = '\x01';
      }
      iVar2 = iVar4 + 0x18;
      iVar9 = FUN_ram_4004a406(auStack_94,&iStack_a4,iVar2);
      if (iVar9 != 0) {
        if ((*(byte *)(iVar3 + 0x5c) & 7) == 0) {
          iVar9 = thunk_FUN_ram_4004655a(iVar3);
          FUN_ram_4004a3ec(&iStack_a4,0,-iVar9);
          iStack_98 = *(int *)(iVar3 + 0x20);
        }
        if ((*(byte *)(iVar3 + 0x5c) & 6) == 2) {
          FUN_ram_4000304c(aiStack_84,iVar2,0x10);
          FUN_ram_4000304c(iVar2,auStack_94,0x10);
          FUN_ram_4004e778(iVar4,aiStack_74,&iStack_a4);
          FUN_ram_4000304c(iVar2,aiStack_84,0x10);
        }
        else {
          FUN_ram_4004e778(iVar4,aiStack_74,&iStack_a4);
        }
        FUN_ram_4000304c(aiStack_84,iVar2,0x10);
        FUN_ram_4000304c(iVar2,auStack_94,0x10);
        if ((*(byte *)(iVar3 + 0x5c) & 7) == 3) {
          FUN_ram_4004c488(&iStack_ac,*(undefined4 *)(iVar3 + 0x2c),iStack_54,uStack_38,uStack_3c,
                           0x1fffffff,uVar5);
          if ((iStack_9c - iStack_a4) + 1 < iStack_ac) {
            iVar10 = *(int *)(iVar3 + 0x54);
            iVar9 = FUN_ram_40059926(iStack_54,0x20,0x20);
            iStack_34 = iVar10 + iStack_ac + iVar9 * 3;
            iStack_30 = *(int *)(iVar3 + 0x58);
            FUN_ram_4004e778(iVar4,aiStack_74,&iStack_a4);
          }
          if ((iStack_98 - iStack_a0) + 1 < iStack_a8) {
            iStack_34 = *(int *)(iVar3 + 0x54);
            iStack_30 = iStack_a8 + *(int *)(iVar3 + 0x58) + *(int *)(iStack_54 + 0xc);
            FUN_ram_4004e778(iVar4,aiStack_74,&iStack_a4);
          }
        }
        FUN_ram_4000304c(iVar2,aiStack_84,0x10);
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400586c0.
 * REA evidence: ev_5916ae1f784f43fe91703f6e54a70617760efc2a2cccddda29cf48989d974c4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400586c0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  undefined1 auStack_1c [16];
  
  iVar1 = FUN_ram_4004e290(param_2);
  if (iVar1 == 0) {
    thunk_FUN_ram_400050c6(param_3,param_2,0xc);
  }
  else if (iVar1 == 1) {
    uVar2 = FUN_ram_4004b2e6(param_2);
    iVar1 = thunk_FUN_ram_4000521c(uVar2,s_U__icons__s_bin_ram_40094f5c + 0xc);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_ram_4004b22e(auStack_1c,param_2,2);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4004af64(auStack_1c,param_3,0xc,&local_20);
      FUN_ram_4004af12(auStack_1c);
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


/* NanoCore 1.11, address 0x40058780.
 * REA evidence: ev_57f53ae21f941ac6ced2f9807698c7e6e0cc1cdc040bfd9314d1f4ea338b056f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40058780(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_ram_4004af12();
      FUN_ram_4005ab56(*piVar1);
    }
    if (piVar1[7] != 0) {
      FUN_ram_4004dc4e();
    }
    if (piVar1[8] != 0) {
      FUN_ram_4004dc4e();
    }
    FUN_ram_4005ab56(piVar1[1]);
    FUN_ram_4005ab56(piVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x400587c6.
 * REA evidence: ev_54991154e6a43e11c9d964aa0dd6c8c3df5bf9bbb2e715f2395b6724a510e188
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400587c6(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    FUN_ram_4004dc4e();
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  FUN_ram_40058780(param_2);
  if (*(int *)(param_2 + 0x34) != 0) {
    FUN_ram_4004cdee(*(undefined4 *)(param_2 + 0x30),*(int *)(param_2 + 0x34),0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40058804.
 * REA evidence: ev_c4f78dfe352360d93135230b2e119ddebeb8e647fae4d8bd917dbca50fc71f65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40058804(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 *param_5)

{
  int iVar1;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  iVar1 = FUN_ram_4004b104(param_1,param_2,0);
  if (iVar1 == 0) {
    FUN_ram_4004af64(param_1,param_3,param_4,param_5);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005884a.
 * REA evidence: ev_8cce5de469eba7ce6aa7db35a737b6f05e672f348f529c01d1e7270e8e08c48e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005884a(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (iVar1 = FUN_ram_4005ab2e(0x40), iVar1 != 0)) {
    *(int *)(param_1 + 0x38) = iVar1;
  }
  return;
}


/* NanoCore 1.11, address 0x4005886a.
 * REA evidence: ev_1387b8a3b37ce991d5ad337ca43c5a14fcfcae94791cf0ed5af86834413aa4c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005886a(int param_1)

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
  uVar5 = FUN_ram_4004ad00(*(undefined1 *)(param_1 + 0x11));
  uVar17 = (uint)*(ushort *)(param_1 + 0x16);
  if (uVar5 == 0) {
    uVar16 = 0xffffffff;
  }
  else {
    uVar16 = (int)((uint)*(ushort *)(param_1 + 0x18) << 3) / (int)uVar5;
  }
  iVar1 = *(ushort *)(param_1 + 0x18) * uVar17;
  iVar6 = FUN_ram_4004daf8(*(undefined2 *)(param_1 + 0x14),uVar17,0xe,uVar16 & 0x1fffffff);
  if (iVar6 == 0) {
    return 0;
  }
  iVar3 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(param_1 + 0x12) & 8) == 0) {
    if (*(char *)(param_1 + 0xc) == '\x01') {
      iVar12 = FUN_ram_40058804(*puVar15,0xc,iVar3,iVar1,aiStack_34);
      if ((iVar12 != 0) || (iVar1 != aiStack_34[0])) {
        FUN_ram_4004dc4e(iVar6);
        return 0;
      }
      goto LAB_ram_400588d0;
    }
    if (*(char *)(param_1 + 0xc) != '\0') goto LAB_ram_400588d0;
    iVar12 = *(int *)(param_1 + 8);
  }
  else {
    iVar12 = puVar15[8];
  }
  thunk_FUN_ram_400050c6(iVar3,*(undefined4 *)(iVar12 + 0x10),iVar1);
LAB_ram_400588d0:
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


/* NanoCore 1.11, address 0x4005899c.
 * REA evidence: ev_8c4d02b8e25475e44e0ed05510b7b804b77ce83e7946ffe55cf9c7f981a6c51a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005899c(uint param_1,int param_2,uint param_3,int param_4,byte *param_5,int param_6)

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
    FUN_ram_4000304c(param_6 + iVar4 * 4,
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


/* NanoCore 1.11, address 0x40058a66.
 * REA evidence: ev_594c461af96829add61e83bce6a73337ba751ebf39d7a29d4adcfbd866f00bcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40058a66(int param_1)

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
      goto LAB_ram_40058ac0;
    }
    uVar9 = *puVar11;
    iVar8 = FUN_ram_4005ab20(iVar7);
    if (iVar8 == 0) {
      return 0;
    }
    iVar10 = FUN_ram_40058804(uVar9,0xc,iVar8,iVar7,&iStack_38);
    if ((iVar10 != 0) || (iVar7 != iStack_38)) {
      FUN_ram_4005ab56(iVar8);
      return 0;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x18);
    uVar4 = *(undefined2 *)(param_1 + 0x16);
    uVar5 = *(undefined2 *)(param_1 + 0x14);
    puVar11[1] = iVar8;
    iVar10 = FUN_ram_4004daf8(uVar5,uVar4,cVar1,uVar3);
    if (iVar10 == 0) goto LAB_ram_40058c0a;
    iVar12 = *(int *)(iVar10 + 0x10);
    iStack_34 = 0;
    iVar14 = FUN_ram_4004b104(uVar9,0,2);
    if ((iVar14 != 0) || (iVar14 = FUN_ram_4004b19a(uVar9,&iStack_34), iVar14 != 0))
    goto LAB_ram_40058c0a;
    iStack_34 = iStack_34 - (iVar7 + 0xc);
    iVar7 = FUN_ram_40058804(uVar9,iVar7 + 0xc,iVar12,iStack_34,&iStack_38);
    if ((iVar7 != 0) || (iStack_38 != iStack_34)) goto LAB_ram_40058c0a;
  }
  else {
    iVar8 = puVar11[8];
LAB_ram_40058ac0:
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
  iVar7 = FUN_ram_4004daf8(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),0x10,0);
  if (iVar7 != 0) {
    uVar6 = *(ushort *)(iVar7 + 8);
    iVar14 = *(int *)(iVar7 + 0x10);
    for (uVar13 = 0; uVar13 < *(ushort *)(param_1 + 0x16); uVar13 = uVar13 + 1) {
      FUN_ram_4005899c(cVar1,*(undefined4 *)(param_1 + 0x20),0,*(undefined2 *)(param_1 + 0x14),
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
      FUN_ram_4004dc4e(iVar10);
      return 1;
    }
    return 1;
  }
LAB_ram_40058c0a:
  if ((*(char *)(param_1 + 0xc) == '\x01') && ((uVar2 & 8) == 0)) {
    FUN_ram_4005ab56(iVar8);
    puVar11[1] = 0;
  }
  if (iVar10 != 0) {
    FUN_ram_4004dc4e(iVar10);
  }
  return 0;
}


/* NanoCore 1.11, address 0x40058c32.
 * REA evidence: ev_26bab4a10bf89f23e80ed4f9d35e2b575ae4622ff976964a8c619165717edfff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40058c32(undefined4 param_1,int param_2,int *param_3,uint *param_4)

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
    uVar3 = FUN_ram_4004ad00(cVar1);
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
         (iVar10 = FUN_ram_4004daf8(uVar9,1,cVar5,0), iVar10 == 0)) {
        return 0;
      }
      FUN_ram_4000304c(param_4,param_3,0x10);
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
          iVar4 = FUN_ram_4005ab20(iVar6);
          if (iVar4 == 0) {
            return 0;
          }
          iVar15 = FUN_ram_40058804(uVar11,iVar15,iVar4,iVar6,0);
          if (iVar15 != 0) {
            FUN_ram_4005ab56(iVar4);
            return 0;
          }
        }
        else {
          iVar4 = *(int *)(*(int *)(param_2 + 8) + 0x10) + iVar15;
        }
        FUN_ram_4005899c(cVar1,*(undefined4 *)(param_2 + 0x20),uVar14,uVar9,iVar4,iVar12);
        if (*(char *)(param_2 + 0xc) == '\x01') {
          FUN_ram_4005ab56(iVar4);
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
          iVar15 = FUN_ram_40058804(uVar11,(*param_4 & 0xfffffff) * 2 +
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
        iVar15 = FUN_ram_40058804(uVar11,iVar15,iVar12,uVar9,0);
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


/* NanoCore 1.11, address 0x40058e50.
 * REA evidence: ev_47ad2b4be752c06ccc2715c9793c69cae72ad8d9964fe771d362711419359c4c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40058e50(int param_1)

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
        thunk_FUN_ram_400050c6(puVar7,puVar6,0x18);
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
        iVar4 = FUN_ram_4004daf8(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                                 cVar1,*(undefined2 *)(param_1 + 0x18));
        if (iVar4 != 0) {
          iVar11 = *(int *)(iVar4 + 0x10);
          iVar9 = 8;
          if ((((cVar1 != '\a') && (iVar9 = 0x10, cVar1 != '\b')) && (iVar9 = 0x40, cVar1 != '\t'))
             && (iVar9 = 0x400, cVar1 != '\n')) {
            iVar9 = 0;
          }
          iVar5 = FUN_ram_40058804(uVar8,0xc,iVar11,iVar9,&iStack_38);
          if ((iVar5 == 0) && (iVar9 == iStack_38)) {
            aiStack_34[0] = 0;
            iVar5 = FUN_ram_4004b104(uVar8,0,2);
            if ((iVar5 == 0) && (iVar5 = FUN_ram_4004b19a(uVar8,aiStack_34), iVar5 == 0)) {
              aiStack_34[0] = aiStack_34[0] - (iVar9 + 0xc);
              iVar9 = FUN_ram_40058804(uVar8,iVar9 + 0xc,iVar11 + iVar9,aiStack_34[0],&iStack_38);
              if ((iVar9 == 0) && (iStack_38 == aiStack_34[0])) {
                puVar10[7] = iVar4;
                *(int *)(param_1 + 0x1c) = iVar4;
                return 1;
              }
            }
          }
          FUN_ram_4004dc4e(iVar4);
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


/* NanoCore 1.11, address 0x40058f84.
 * REA evidence: ev_93a8379af0456082dbdb72414a8d6cf0cd4f8e69c491934b7487522089e3858a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40058f84(int param_1)

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
  
  puVar1 = (undefined4 *)FUN_ram_4005884a();
  puVar9 = puVar1 + 3;
  thunk_FUN_ram_4000504c(puVar9,0,0x10);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar10 = *puVar1;
    iVar2 = FUN_ram_4004b104(uVar10,0,2);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_ram_4004b19a(uVar10,&iStack_24);
    if (iVar2 != 0) {
      return 0;
    }
    iStack_24 = iStack_24 + -0x18;
    iVar2 = FUN_ram_40058804(uVar10,0xc,puVar9,0xc,&iStack_28);
    if (iVar2 != 0) {
      return 0;
    }
    if (iStack_28 != 0xc) {
      return 0;
    }
    if (puVar1[4] != iStack_24) {
      return 0;
    }
    iVar2 = FUN_ram_4005ab20();
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = FUN_ram_4004af64(uVar10,iVar2,iStack_24,&iStack_28);
    if ((iVar3 != 0) || (iStack_28 != iStack_24)) {
      FUN_ram_4005ab56(iVar2);
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
    thunk_FUN_ram_400050c6(puVar9,*(undefined4 *)(iVar2 + 0x10),0xc);
    puVar1[6] = *(int *)(iVar2 + 0x10) + 0xc;
    if (puVar1[4] != iStack_24) {
      return 0;
    }
    iVar2 = 0;
  }
  iVar3 = FUN_ram_4005884a(param_1);
  if (iVar3 != 0) {
    uVar11 = puVar1[5];
    uVar10 = puVar1[4];
    iVar4 = FUN_ram_4004daf8(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                             *(undefined1 *)(param_1 + 0x11),*(undefined2 *)(param_1 + 0x18));
    if (iVar4 != 0) {
      uVar6 = *(undefined4 *)(iVar4 + 0x10);
      if ((puVar1[3] & 0xf) == 1) {
        uVar7 = 2;
        if (*(char *)(param_1 + 0x11) != '\x14') {
          iVar5 = FUN_ram_4004ad00();
          uVar7 = iVar5 + 7 >> 3;
        }
        iVar5 = FUN_ram_400596ba(puVar1[6],uVar10,uVar6,uVar11,uVar7 & 0xff);
LAB_ram_40059102:
        if (puVar1[5] == iVar5) {
          *(int *)(iVar3 + 0x20) = iVar4;
          bVar8 = true;
          goto LAB_ram_40059046;
        }
      }
      else if (((puVar1[3] & 0xf) == 2) &&
              (iVar5 = FUN_ram_400593ea(puVar1[6],uVar6,uVar10,uVar11), -1 < iVar5))
      goto LAB_ram_40059102;
      FUN_ram_4004dc4e(iVar4);
    }
  }
  bVar8 = false;
LAB_ram_40059046:
  puVar1[6] = 0;
  FUN_ram_4005ab56(iVar2);
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
    uVar10 = FUN_ram_4005886a(param_1);
    return uVar10;
  }
  if (*(char *)(param_1 + 7) == '\0') {
    uVar10 = FUN_ram_40058a66(param_1);
    return uVar10;
  }
  uVar10 = FUN_ram_40058e50();
  return uVar10;
}


