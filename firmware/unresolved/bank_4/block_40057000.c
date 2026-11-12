/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40057000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4005727c.
 * REA evidence: ev_9dcdb4c1961632f49656d7af49333a1431da707b97dab6c0666577c0acf9da1a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005727c(int param_1,int param_2)

{
  int iVar1;
  
  FUN_ram_40044572();
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x2c);
  }
  iVar1 = thunk_FUN_ram_40005244(param_2);
  if (*(int *)(param_1 + 0x2c) == param_2) {
    if ((*(byte *)(param_1 + 0x5c) & 8) == 0) {
      iVar1 = FUN_ram_40059bf6(param_2);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 == 0) {
        return;
      }
      goto LAB_ram_400572ec;
    }
  }
  else if ((*(int *)(param_1 + 0x2c) != 0) && ((*(byte *)(param_1 + 0x5c) & 8) == 0)) {
    FUN_ram_40059be4();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  iVar1 = FUN_ram_40059bae(iVar1 + 1);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    return;
  }
  thunk_FUN_ram_400051ee(iVar1,param_2);
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf7;
LAB_ram_400572ec:
  FUN_ram_40056dce(param_1);
  return;
}


/* NanoCore 1.10, address 0x400572fa.
 * REA evidence: ev_89f4edc599a99ce2641160b64260deda56b3c5c65efefb42b6fff94a66b1a47e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400572fa(int param_1,int param_2)

{
  byte bVar1;
  
  FUN_ram_400492c8(param_1,&LAB_ram_40056a8a);
  FUN_ram_400492c8(param_1,&LAB_ram_40056a84);
  bVar1 = *(byte *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(byte *)(param_1 + 0x5c) = bVar1 & 0xef | (param_2 - 2U < 3) << 4;
  if (((bVar1 & 7) == 1) && (*(int *)(param_1 + 0x34) != -1)) {
    FUN_ram_40056b34(param_1);
  }
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf8 | (byte)param_2 & 7;
  FUN_ram_40056dce(param_1);
  return;
}


/* NanoCore 1.10, address 0x40057372.
 * REA evidence: ev_8b29c1537f6782e134c49f5c2d4945411acaf6b09c70993ea7ba58d66747f7f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057372(undefined4 param_1,int param_2)

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
  FUN_ram_40042b3a(param_2,2);
  FUN_ram_400572fa(param_2,0);
  FUN_ram_4005727c(param_2,&DAT_ram_400979b8);
  return;
}


/* NanoCore 1.10, address 0x400573cc.
 * REA evidence: ev_b30d7d1e1448687deefec9efc3e53a58aa9d3bbf66cf6749eb8c853241b1aaf3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40057434) */

void FUN_ram_400573cc(undefined4 param_1,undefined4 param_2)

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
  
  iVar3 = FUN_ram_40043ae2(&PTR_DAT_ram_4009751c_ram_400979c8);
  if (iVar3 == 1) {
    iVar3 = FUN_ram_40049f5e(param_2);
    iVar4 = FUN_ram_40049f56(param_2);
    if (iVar3 - 0x2cU < 2) {
      FUN_ram_40056b34();
      FUN_ram_40056dce(iVar4);
      return;
    }
    if (iVar3 == 0x16) {
      iVar3 = FUN_ram_40056bce();
      FUN_ram_40043c6e(param_2,*(int *)(iVar3 + 0xc) / 4);
      return;
    }
    if (iVar3 == 0x2f) {
      if ((*(byte *)(iVar4 + 0x5c) & 0x40) != 0) {
        uVar5 = FUN_ram_40056bce();
        uVar6 = FUN_ram_40056bba(iVar4);
        uVar7 = FUN_ram_40056ba6(iVar4);
        bVar1 = *(byte *)(iVar4 + 0x5c);
        FUN_ram_4004410a(iVar4);
        aiStack_74[0] = FUN_ram_40046afe(iVar4,0,1);
        if ((aiStack_74[0] != 0x200007d1) ||
           (iVar3 = 0x1fffffff, (int)((uint)*(ushort *)(iVar4 + 0x2a) << 0x14) < 0)) {
          iVar3 = FUN_ram_4004410a(iVar4);
        }
        aiStack_74[0] = FUN_ram_40046afe(iVar4,0,5);
        if (aiStack_74[0] <= iVar3) {
          iVar3 = FUN_ram_40046afe(iVar4,0,5);
          aiStack_74[0] = iVar3;
        }
        FUN_ram_4004b516(iVar4 + 0x4c,*(undefined4 *)(iVar4 + 0x2c),uVar5,uVar6,uVar7,iVar3,
                         (bVar1 & 0x1f) >> 4);
        *(byte *)(iVar4 + 0x5c) = *(byte *)(iVar4 + 0x5c) & 0xbf;
      }
      piVar8 = (int *)FUN_ram_40049f68(param_2);
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
      iVar3 = FUN_ram_40049f56(param_2);
      iVar4 = FUN_ram_40043c3a(param_2);
      FUN_ram_40044166(iVar3,&iStack_a4);
      uVar5 = FUN_ram_40056be2(iVar3);
      FUN_ram_4004d790(aiStack_74);
      uStack_58 = *(undefined4 *)(iVar3 + 0x2c);
      iStack_34 = *(int *)(iVar3 + 0x54);
      iStack_30 = *(int *)(iVar3 + 0x58);
      if (((*(byte *)(iVar3 + 0x5c) & 7) != 3) && (0x3fe < iStack_98 - iStack_a0)) {
        iStack_24 = iVar3 + 0x38;
      }
      uStack_29 = (undefined1)uVar5;
      FUN_ram_40043798(iVar3,0,aiStack_74);
      if (cStack_2a == '\0') {
        cStack_2a = '\x01';
      }
      iStack_50 = *(int *)(iVar3 + 0x44);
      iStack_4c = *(int *)(iVar3 + 0x48);
      if ((iStack_50 != 0xffff) && (iStack_4c != 0xffff)) {
        uVar6 = FUN_ram_40046afe(iVar3,0x40000,0x58);
        aiStack_84[0] = FUN_ram_40046d60(iVar3,0x40000,uVar6);
        uStack_45 = (undefined1)aiStack_84[0];
        uStack_43 = (undefined1)((uint)aiStack_84[0] >> 0x10);
        uStack_44 = (undefined1)((uint)aiStack_84[0] >> 8);
        aiStack_84[0] = FUN_ram_40046afe(iVar3,0x40000,0x1c);
        uStack_42 = (undefined2)aiStack_84[0];
        uStack_40 = (undefined1)((uint)aiStack_84[0] >> 0x10);
      }
      if ((((*(byte *)(iVar3 + 0x5c) & 6) == 2) && ((byte)(cStack_2a - 2U) < 2)) &&
         (FUN_ram_4004b516(aiStack_84,*(undefined4 *)(iVar3 + 0x2c),iStack_54,uStack_38,uStack_3c,
                           0x1fffffff,uVar5), (iStack_9c - iStack_a4) + 1 < aiStack_84[0])) {
        cStack_2a = '\x01';
      }
      iVar2 = iVar4 + 0x18;
      iVar9 = FUN_ram_40049494(auStack_94,&iStack_a4,iVar2);
      if (iVar9 != 0) {
        if ((*(byte *)(iVar3 + 0x5c) & 7) == 0) {
          iVar9 = thunk_FUN_ram_400455e8(iVar3);
          FUN_ram_4004947a(&iStack_a4,0,-iVar9);
          iStack_98 = *(int *)(iVar3 + 0x20);
        }
        if ((*(byte *)(iVar3 + 0x5c) & 6) == 2) {
          FUN_ram_4000305c(aiStack_84,iVar2,0x10);
          FUN_ram_4000305c(iVar2,auStack_94,0x10);
          FUN_ram_4004d806(iVar4,aiStack_74,&iStack_a4);
          FUN_ram_4000305c(iVar2,aiStack_84,0x10);
        }
        else {
          FUN_ram_4004d806(iVar4,aiStack_74,&iStack_a4);
        }
        FUN_ram_4000305c(aiStack_84,iVar2,0x10);
        FUN_ram_4000305c(iVar2,auStack_94,0x10);
        if ((*(byte *)(iVar3 + 0x5c) & 7) == 3) {
          FUN_ram_4004b516(&iStack_ac,*(undefined4 *)(iVar3 + 0x2c),iStack_54,uStack_38,uStack_3c,
                           0x1fffffff,uVar5);
          if ((iStack_9c - iStack_a4) + 1 < iStack_ac) {
            iVar10 = *(int *)(iVar3 + 0x54);
            iVar9 = FUN_ram_400589b4(iStack_54,0x20,0x20);
            iStack_34 = iVar10 + iStack_ac + iVar9 * 3;
            iStack_30 = *(int *)(iVar3 + 0x58);
            FUN_ram_4004d806(iVar4,aiStack_74,&iStack_a4);
          }
          if ((iStack_98 - iStack_a0) + 1 < iStack_a8) {
            iStack_34 = *(int *)(iVar3 + 0x54);
            iStack_30 = iStack_a8 + *(int *)(iVar3 + 0x58) + *(int *)(iStack_54 + 0xc);
            FUN_ram_4004d806(iVar4,aiStack_74,&iStack_a4);
          }
        }
        FUN_ram_4000305c(iVar2,aiStack_84,0x10);
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4005774e.
 * REA evidence: ev_0ad39531c5ffcd68c90a1cbf3026e00f4d8eae9b6b4cf9197f5c78df1a99267b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005774e(undefined4 param_1,void *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  undefined1 auStack_1c [16];
  
  iVar1 = FUN_ram_4004d31e(param_2);
  if (iVar1 == 0) {
    memcpy(param_3,param_2,0xc);
  }
  else if (iVar1 == 1) {
    uVar2 = FUN_ram_4004a374(param_2);
    iVar1 = thunk_FUN_ram_4000522c(uVar2,s_U__icons__s_bin_ram_40093170 + 0xc);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_ram_4004a2bc(auStack_1c,param_2,2);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_40049ff2(auStack_1c,param_3,0xc,&local_20);
      FUN_ram_40049fa0(auStack_1c);
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


/* NanoCore 1.10, address 0x4005780e.
 * REA evidence: ev_455910d58c3dbc6ed38354af34f995014d9931fda9c6ee3e0f6908564f6166e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005780e(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_ram_40049fa0();
      FUN_ram_40059be4(*piVar1);
    }
    if (piVar1[7] != 0) {
      FUN_ram_4004ccdc();
    }
    if (piVar1[8] != 0) {
      FUN_ram_4004ccdc();
    }
    FUN_ram_40059be4(piVar1[1]);
    FUN_ram_40059be4(piVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40057854.
 * REA evidence: ev_0a066ee5bf2d0bd3bb5bef368e735ba8e43464170cc14418438f4c7efd4501e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057854(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    FUN_ram_4004ccdc();
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  FUN_ram_4005780e(param_2);
  if (*(int *)(param_2 + 0x34) != 0) {
    FUN_ram_4004be7c(*(undefined4 *)(param_2 + 0x30),*(int *)(param_2 + 0x34),0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40057892.
 * REA evidence: ev_ea8c1c59a6f038db0ebbd85368b1d292675c34fe4ef2bb2dc4e1e0e91897f5ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057892(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 *param_5)

{
  int iVar1;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  iVar1 = FUN_ram_4004a192(param_1,param_2,0);
  if (iVar1 == 0) {
    FUN_ram_40049ff2(param_1,param_3,param_4,param_5);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400578d8.
 * REA evidence: ev_8d32241002af387e7ca7d2b777cbf6cc6c184459206d34f909af213bd590259f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400578d8(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (iVar1 = FUN_ram_40059bbc(0x40), iVar1 != 0)) {
    *(int *)(param_1 + 0x38) = iVar1;
  }
  return;
}


/* NanoCore 1.10, address 0x400578f8.
 * REA evidence: ev_5bccee56f8c5cfec50cc16b713985a049a719a6016889eb39eb053d05da16c6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400578f8(int param_1)

{
  size_t __n;
  byte *pbVar1;
  void *__dest;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  size_t asStack_34 [4];
  
  puVar13 = *(undefined4 **)(param_1 + 0x38);
  uVar3 = FUN_ram_40049d8e(*(undefined1 *)(param_1 + 0x11));
  uVar15 = (uint)*(ushort *)(param_1 + 0x16);
  if (uVar3 == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = (int)((uint)*(ushort *)(param_1 + 0x18) << 3) / (int)uVar3;
  }
  __n = *(ushort *)(param_1 + 0x18) * uVar15;
  iVar4 = FUN_ram_4004cb86(*(undefined2 *)(param_1 + 0x14),uVar15,0xe,uVar14 & 0x1fffffff);
  if (iVar4 == 0) {
    return 0;
  }
  __dest = *(void **)(iVar4 + 0x10);
  if ((*(ushort *)(param_1 + 0x12) & 8) == 0) {
    if (*(char *)(param_1 + 0xc) == '\x01') {
      iVar10 = FUN_ram_40057892(*puVar13,0xc,__dest,__n,asStack_34);
      if ((iVar10 != 0) || (__n != asStack_34[0])) {
        FUN_ram_4004ccdc(iVar4);
        return 0;
      }
      goto LAB_ram_4005795e;
    }
    if (*(char *)(param_1 + 0xc) != '\0') goto LAB_ram_4005795e;
    iVar10 = *(int *)(param_1 + 8);
  }
  else {
    iVar10 = puVar13[8];
  }
  memcpy(__dest,*(void **)(iVar10 + 0x10),__n);
LAB_ram_4005795e:
  if (*(char *)(param_1 + 0x11) != '\x0e') {
    pbVar1 = (byte *)((__n - 1) + (int)__dest);
    uVar9 = 0;
    puVar2 = (undefined1 *)((int)__dest + (uVar14 * uVar15 - 1));
    for (puVar11 = puVar2; (uint)((int)puVar2 - (int)puVar11) < uVar14 * uVar15;
        puVar11 = puVar11 + -1) {
      uVar6 = 0;
      uVar8 = (int)(uint)*pbVar1 >> (uVar9 & 0x1f) & (1 << (uVar3 & 0x1f)) - 1U & 0xff;
      uVar5 = uVar3;
      uVar7 = uVar8;
      if (uVar8 != 0) {
        for (; uVar6 = (undefined1)uVar7, uVar5 < 8; uVar5 = uVar5 + uVar3 & 0xff) {
          uVar12 = 8 - uVar5;
          uVar7 = uVar8 << (uVar12 & 0x1f) & 0xff | uVar7;
        }
      }
      *puVar11 = uVar6;
      uVar9 = uVar9 + uVar3 & 0xff;
      if (7 < uVar9) {
        pbVar1 = pbVar1 + -1;
        uVar9 = 0;
      }
    }
  }
  puVar13[7] = iVar4;
  *(int *)(param_1 + 0x1c) = iVar4;
  return 1;
}


/* NanoCore 1.10, address 0x40057a2a.
 * REA evidence: ev_14ffb501182781cee5b924fa33b2ec6116803d81c00082a6da27edd3e091a581
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057a2a(uint param_1,int param_2,uint param_3,int param_4,byte *param_5,int param_6)

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
    FUN_ram_4000305c(param_6 + iVar4 * 4,
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


/* NanoCore 1.10, address 0x40057af4.
 * REA evidence: ev_080f37bb60f726b7785f9d1aea37fd4af2ba5b119afe92f68f8c671fa50b83f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40057af4(int param_1)

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
      goto LAB_ram_40057b4e;
    }
    uVar9 = *puVar11;
    iVar8 = FUN_ram_40059bae(iVar7);
    if (iVar8 == 0) {
      return 0;
    }
    iVar10 = FUN_ram_40057892(uVar9,0xc,iVar8,iVar7,&iStack_38);
    if ((iVar10 != 0) || (iVar7 != iStack_38)) {
      FUN_ram_40059be4(iVar8);
      return 0;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x18);
    uVar4 = *(undefined2 *)(param_1 + 0x16);
    uVar5 = *(undefined2 *)(param_1 + 0x14);
    puVar11[1] = iVar8;
    iVar10 = FUN_ram_4004cb86(uVar5,uVar4,cVar1,uVar3);
    if (iVar10 == 0) goto LAB_ram_40057c98;
    iVar12 = *(int *)(iVar10 + 0x10);
    iStack_34 = 0;
    iVar14 = FUN_ram_4004a192(uVar9,0,2);
    if ((iVar14 != 0) || (iVar14 = FUN_ram_4004a228(uVar9,&iStack_34), iVar14 != 0))
    goto LAB_ram_40057c98;
    iStack_34 = iStack_34 - (iVar7 + 0xc);
    iVar7 = FUN_ram_40057892(uVar9,iVar7 + 0xc,iVar12,iStack_34,&iStack_38);
    if ((iVar7 != 0) || (iStack_38 != iStack_34)) goto LAB_ram_40057c98;
  }
  else {
    iVar8 = puVar11[8];
LAB_ram_40057b4e:
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
  iVar7 = FUN_ram_4004cb86(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),0x10,0);
  if (iVar7 != 0) {
    uVar6 = *(ushort *)(iVar7 + 8);
    iVar14 = *(int *)(iVar7 + 0x10);
    for (uVar13 = 0; uVar13 < *(ushort *)(param_1 + 0x16); uVar13 = uVar13 + 1) {
      FUN_ram_40057a2a(cVar1,*(undefined4 *)(param_1 + 0x20),0,*(undefined2 *)(param_1 + 0x14),
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
      FUN_ram_4004ccdc(iVar10);
      return 1;
    }
    return 1;
  }
LAB_ram_40057c98:
  if ((*(char *)(param_1 + 0xc) == '\x01') && ((uVar2 & 8) == 0)) {
    FUN_ram_40059be4(iVar8);
    puVar11[1] = 0;
  }
  if (iVar10 != 0) {
    FUN_ram_4004ccdc(iVar10);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40057cc0.
 * REA evidence: ev_25b0c648d555ef3732a552c36bdfa373b0d5bbf51d6da805734b144c67520e71
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40057cc0(undefined4 param_1,int param_2,int *param_3,uint *param_4)

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
    uVar3 = FUN_ram_40049d8e(cVar1);
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
         (iVar10 = FUN_ram_4004cb86(uVar9,1,cVar5,0), iVar10 == 0)) {
        return 0;
      }
      FUN_ram_4000305c(param_4,param_3,0x10);
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
          iVar4 = FUN_ram_40059bae(iVar6);
          if (iVar4 == 0) {
            return 0;
          }
          iVar15 = FUN_ram_40057892(uVar11,iVar15,iVar4,iVar6,0);
          if (iVar15 != 0) {
            FUN_ram_40059be4(iVar4);
            return 0;
          }
        }
        else {
          iVar4 = *(int *)(*(int *)(param_2 + 8) + 0x10) + iVar15;
        }
        FUN_ram_40057a2a(cVar1,*(undefined4 *)(param_2 + 0x20),uVar14,uVar9,iVar4,iVar12);
        if (*(char *)(param_2 + 0xc) == '\x01') {
          FUN_ram_40059be4(iVar4);
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
          iVar15 = FUN_ram_40057892(uVar11,(*param_4 & 0xfffffff) * 2 +
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
        iVar15 = FUN_ram_40057892(uVar11,iVar15,iVar12,uVar9,0);
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


/* NanoCore 1.10, address 0x40057ede.
 * REA evidence: ev_d66d8545a070b026ebfe70c2f7018244334773a6dbc19578ae2a0118f5716551
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40057ede(int param_1)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *__src;
  undefined4 *__dest;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iStack_38;
  int aiStack_34 [4];
  
  puVar8 = *(undefined4 **)(param_1 + 0x38);
  if ((*(ushort *)(param_1 + 0x12) & 8) == 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      __src = *(undefined4 **)(param_1 + 8);
      __dest = __src;
      if ((*(ushort *)((int)__src + 2) & 0x10) == 0) {
        __dest = puVar8 + 9;
        memcpy(__dest,__src,0x18);
        puVar8[0xe] = puVar8[0xd];
      }
      sVar2 = *(short *)(__dest + 2);
      *(undefined4 **)(param_1 + 0x1c) = __dest;
      uVar3 = 1;
      if (sVar2 == 0) {
        *(undefined2 *)(__dest + 2) = *(undefined2 *)(param_1 + 0x18);
        uVar3 = 1;
      }
    }
    else {
      if (*(char *)(param_1 + 0xc) == '\x01') {
        cVar1 = *(char *)(param_1 + 0x11);
        uVar6 = *puVar8;
        iVar4 = FUN_ram_4004cb86(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                                 cVar1,*(undefined2 *)(param_1 + 0x18));
        if (iVar4 != 0) {
          iVar9 = *(int *)(iVar4 + 0x10);
          iVar7 = 8;
          if ((((cVar1 != '\a') && (iVar7 = 0x10, cVar1 != '\b')) && (iVar7 = 0x40, cVar1 != '\t'))
             && (iVar7 = 0x400, cVar1 != '\n')) {
            iVar7 = 0;
          }
          iVar5 = FUN_ram_40057892(uVar6,0xc,iVar9,iVar7,&iStack_38);
          if ((iVar5 == 0) && (iVar7 == iStack_38)) {
            aiStack_34[0] = 0;
            iVar5 = FUN_ram_4004a192(uVar6,0,2);
            if ((iVar5 == 0) && (iVar5 = FUN_ram_4004a228(uVar6,aiStack_34), iVar5 == 0)) {
              aiStack_34[0] = aiStack_34[0] - (iVar7 + 0xc);
              iVar7 = FUN_ram_40057892(uVar6,iVar7 + 0xc,iVar9 + iVar7,aiStack_34[0],&iStack_38);
              if ((iVar7 == 0) && (iStack_38 == aiStack_34[0])) {
                puVar8[7] = iVar4;
                *(int *)(param_1 + 0x1c) = iVar4;
                return 1;
              }
            }
          }
          FUN_ram_4004ccdc(iVar4);
        }
      }
      uVar3 = 0;
    }
  }
  else {
    uVar6 = puVar8[8];
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
    puVar8[7] = uVar6;
    puVar8[8] = 0;
    uVar3 = 1;
  }
  return uVar3;
}


