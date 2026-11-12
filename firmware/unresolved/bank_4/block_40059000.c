/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40059000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4005900c.
 * REA evidence: ev_353bc631e89beebaf9885bf9346a2c95383df33aa034b5eb403871fb11733712
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005900c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iStack_28;
  int iStack_24;
  
  iVar3 = 0x20;
  if (param_3 != 9) {
    iVar3 = param_3;
  }
  iVar7 = *(int *)(param_1 + 0x18);
  iVar3 = FUN_ram_40058c4e(param_1,iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(int *)(iVar7 + 0xc) != 0) &&
     (iStack_24 = FUN_ram_40058c4e(param_1,param_4), iStack_24 != 0)) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0xc);
    if ((*(ushort *)(*(int *)(param_1 + 0x18) + 0x12) & 0x2000) == 0) {
      uVar6 = piVar2[2] & 0xc0000000;
      iStack_28 = iVar3;
      if (uVar6 == 0) {
        iVar8 = *piVar2;
        iVar4 = FUN_ram_4004b8fa(&iStack_28,iVar8,piVar2[2] & 0x3fffffff,2,&LAB_ram_40058a36);
        iVar5 = 0;
        if (iVar4 == 0) goto LAB_ram_4005904c;
        iVar5 = iVar4 - iVar8 >> 1;
      }
      else {
        if (uVar6 != 0x40000000) goto LAB_ram_4005904a;
        iVar8 = *piVar2;
        iVar4 = FUN_ram_4004b8fa(&iStack_28,iVar8,piVar2[2] & 0x3fffffff,4,&LAB_ram_40058a50);
        iVar5 = 0;
        if (iVar4 == 0) goto LAB_ram_4005904c;
        iVar5 = iVar4 - iVar8 >> 2;
      }
      iVar5 = (int)*(char *)(piVar2[1] + iVar5);
      goto LAB_ram_4005904c;
    }
    if ((*(byte *)(piVar2[1] + iVar3) != 0) &&
       (uVar6 = (uint)*(byte *)(piVar2[2] + iStack_24), uVar6 != 0)) {
      iVar5 = (int)*(char *)(*piVar2 + uVar6 +
                             (*(byte *)(piVar2[1] + iVar3) - 1) * (uint)*(byte *)((int)piVar2 + 0xd)
                            + -1);
      goto LAB_ram_4005904c;
    }
  }
LAB_ram_4005904a:
  iVar5 = 0;
LAB_ram_4005904c:
  iVar4 = *(int *)(iVar7 + 4) + iVar3 * 8;
  uVar6 = *(uint *)(*(int *)(iVar7 + 4) + iVar3 * 8) >> 0x14;
  if (param_3 == 9) {
    uVar6 = uVar6 << 1;
  }
  *(short *)(param_2 + 4) =
       (short)(((int)((uint)*(ushort *)(iVar7 + 0x10) * iVar5) >> 4) + 8 + uVar6 >> 4);
  *(ushort *)(param_2 + 8) = (ushort)*(byte *)(iVar4 + 5);
  bVar1 = *(byte *)(iVar4 + 4);
  *(ushort *)(param_2 + 6) = (ushort)bVar1;
  *(short *)(param_2 + 10) = (short)*(char *)(iVar4 + 6);
  *(short *)(param_2 + 0xc) = (short)*(char *)(iVar4 + 7);
  *(byte *)(param_2 + 0xe) = (byte)((uint)(*(int *)(iVar7 + 0x10) << 3) >> 0x1c);
  *(byte *)(param_2 + 0xf) = *(byte *)(param_2 + 0xf) & 0xfe;
  if (param_3 == 9) {
    *(ushort *)(param_2 + 6) = (ushort)bVar1 << 1;
  }
  return 1;
}


/* NanoCore 1.10, address 0x4005917c.
 * REA evidence: ev_676265da22b09d313829fb0f5ec49f143cd5adb9feadafc42bd4612aafe3e335
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4005917c(undefined4 *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    param_2 = param_2 - 1;
    if (param_2 == 0xffffffff) {
      *param_3 = 0;
      return uVar1;
    }
    *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) << 1;
    iVar2 = (*(byte *)(param_1 + 1) - 1) * 0x1000000;
    if (iVar2 >> 0x18 < 0) {
      *(undefined1 *)(param_1 + 1) = 7;
      iVar2 = FUN_ram_40049ff2(*param_1,(int)param_1 + 5,1,0);
      *param_3 = (char)iVar2;
      if (iVar2 != 0) {
        return 0;
      }
    }
    else {
      *(char *)(param_1 + 1) = (char)((uint)iVar2 >> 0x18);
    }
    uVar1 = uVar1 | (uint)(*(byte *)((int)param_1 + 5) >> 7) << (param_2 & 0x1f);
  } while( true );
}


/* NanoCore 1.10, address 0x40059202.
 * REA evidence: ev_65a4e1ef1a956be4f1494d7b31fc5067a1bacb3269deb0e1633d085986aa791d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40059202(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [8];
  
  FUN_ram_4004a192(param_1,param_2,0);
  iVar1 = FUN_ram_40049ff2(param_1,&uStack_18,4,0);
  if (((iVar1 != 0) || (iVar1 = FUN_ram_40049ff2(param_1,auStack_14,4,0), iVar1 != 0)) ||
     (iVar1 = FUN_ram_40002ffc(param_3,auStack_14,4), iVar1 != 0)) {
    uStack_18 = 0xffffffff;
  }
  return uStack_18;
}


/* NanoCore 1.10, address 0x4005924c.
 * REA evidence: ev_2f05a4b68df3204903db659c50f1324cbf5ccba7a0ecb87231a388f310f33912
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005924c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  puVar1 = (undefined4 *)puVar3[3];
  if ((*(ushort *)((int)puVar3 + 0x12) & 0x2000) == 0) {
    if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40059282;
    FUN_ram_40059be4(*puVar1);
    uVar4 = puVar1[1];
  }
  else {
    if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40059282;
    FUN_ram_40059be4(*puVar1);
    FUN_ram_40059be4(puVar1[1]);
    uVar4 = puVar1[2];
  }
  FUN_ram_40059be4(uVar4);
  FUN_ram_40059be4(puVar1);
LAB_ram_40059282:
  iVar2 = puVar3[2];
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 8);
    for (iVar5 = 0; iVar5 < (int)((puVar3[4] & 0x1ffffff) >> 0x10); iVar5 = iVar5 + 1) {
      FUN_ram_40059be4(puVar1[1]);
      FUN_ram_40059be4(*puVar1);
      puVar1 = puVar1 + 5;
    }
    FUN_ram_40059be4(iVar2);
  }
  FUN_ram_40059be4(*puVar3);
  FUN_ram_40059be4(puVar3[1]);
  FUN_ram_40059be4(puVar3);
  FUN_ram_40059be4(param_1);
  return;
}


/* NanoCore 1.10, address 0x400592fa.
 * REA evidence: ev_d88b5554a2fe60d617dd9d4c1d6707138c85f0fd5c032d9a243003b62c2dc232
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400592fa(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char cStack_2b;
  byte bStack_2a;
  byte bStack_29;
  undefined1 auStack_28 [4];
  uint auStack_24 [2];
  
  iVar1 = FUN_ram_40059202(param_1,param_4,&DAT_ram_40097a74);
  if (iVar1 < 0) {
    return -1;
  }
  iVar2 = FUN_ram_40049ff2(param_1,&cStack_2b,1,0);
  if (iVar2 != 0) {
    return -1;
  }
  iVar2 = FUN_ram_40049ff2(param_1,auStack_28,3,0);
  if (iVar2 != 0) {
    return -1;
  }
  if (cStack_2b == '\0') {
    puVar3 = (undefined4 *)FUN_ram_40059bae(0xc);
    memset(puVar3,0,0xc);
    *(undefined4 **)(param_2 + 0xc) = puVar3;
    *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) & 0xdfff;
    iVar2 = FUN_ram_40049ff2(param_1,auStack_24,4,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = auStack_24[0] << 2;
    if (param_3 == 0) {
      iVar2 = auStack_24[0] << 1;
    }
    uVar4 = FUN_ram_40059bae(iVar2);
    uVar5 = FUN_ram_40059bae(auStack_24[0]);
    puVar3[1] = uVar5;
    puVar3[2] = auStack_24[0] & 0x3fffffff | param_3 << 0x1e;
    *puVar3 = uVar4;
    iVar2 = FUN_ram_40049ff2(param_1,uVar4,iVar2,0);
  }
  else {
    if (cStack_2b != '\x03') {
      return -1;
    }
    puVar3 = (undefined4 *)FUN_ram_40059bae(0x10);
    memset(puVar3,0,0x10);
    *(undefined4 **)(param_2 + 0xc) = puVar3;
    *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) | 0x2000;
    iVar2 = FUN_ram_40049ff2(param_1,auStack_24,2,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_ram_40049ff2(param_1,&bStack_2a,1,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_ram_40049ff2(param_1,&bStack_29,1,0);
    if (iVar2 != 0) {
      return -1;
    }
    uVar7 = (uint)bStack_29;
    uVar8 = (uint)bStack_2a;
    uVar4 = FUN_ram_40059bae(auStack_24[0] & 0xffff);
    uVar6 = FUN_ram_40059bae(auStack_24[0] & 0xffff);
    uVar5 = FUN_ram_40059bae(uVar8 * uVar7);
    *(byte *)(puVar3 + 3) = bStack_2a;
    puVar3[1] = uVar4;
    *puVar3 = uVar5;
    *(byte *)((int)puVar3 + 0xd) = bStack_29;
    puVar3[2] = uVar6;
    iVar2 = FUN_ram_40049ff2(param_1,uVar4,auStack_24[0] & 0xffff,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_ram_40049ff2(param_1,uVar6,auStack_24[0] & 0xffff,0);
    auStack_24[0] = uVar8 * uVar7;
  }
  if ((iVar2 == 0) && (iVar2 = FUN_ram_40049ff2(param_1,uVar5,auStack_24[0],0), iVar2 == 0)) {
    return iVar1;
  }
  return -1;
}


/* NanoCore 1.10, address 0x400594a8.
 * REA evidence: ev_56326a3ef5f8090723be0dab937fa07a2084ea8db158375601fedce3a87195bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_400594a8(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *__s;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  char cStack_81;
  uint uStack_80;
  undefined1 *puStack_7c;
  undefined2 uStack_78;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [4];
  ushort uStack_64;
  ushort uStack_60;
  short sStack_5e;
  ushort uStack_52;
  undefined2 uStack_50;
  char cStack_4e;
  undefined1 uStack_4d;
  char cStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte bStack_48;
  char cStack_47;
  byte bStack_46;
  undefined1 uStack_44;
  undefined1 uStack_42;
  
  iVar5 = FUN_ram_4004a2bc(auStack_74,param_1,2);
  if (iVar5 != 0) {
    return (undefined4 *)0x0;
  }
  puVar6 = (undefined4 *)FUN_ram_40059bbc(0x24);
  __s = (int *)FUN_ram_40059bae(0x14);
  memset(__s,0,0x14);
  puVar6[6] = __s;
  iVar5 = FUN_ram_40059202(auStack_74,0,&DAT_ram_40097a7c);
  if ((-1 < iVar5) && (iVar7 = FUN_ram_40049ff2(auStack_74,auStack_68,0x28,0), iVar7 == 0)) {
    puVar6[4] = -(int)sStack_5e;
    puVar6[3] = (uint)uStack_60 - (int)sStack_5e;
    *puVar6 = FUN_ram_4005900c;
    puVar6[1] = FUN_ram_40058d2c;
    *(byte *)(puVar6 + 5) = *(byte *)(puVar6 + 5) & 0xfc | bStack_46 & 3;
    *(undefined1 *)((int)puVar6 + 0x15) = uStack_44;
    *(undefined1 *)((int)puVar6 + 0x16) = uStack_42;
    *(undefined2 *)(__s + 4) = uStack_50;
    *(byte *)((int)__s + 0x13) =
         cStack_47 << 6 | (bStack_4b & 0xf) << 1 | *(byte *)((int)__s + 0x13) & 0x21;
    iVar7 = FUN_ram_40059202(auStack_74,iVar5,&DAT_ram_40097a84);
    if ((-1 < iVar7) && (iVar8 = FUN_ram_40049ff2(auStack_74,&puStack_7c,4,0), iVar8 == 0)) {
      pvVar9 = (void *)FUN_ram_40059bae((int)puStack_7c * 0x14);
      pvVar9 = memset(pvVar9,0,(int)puStack_7c * 0x14);
      __s[2] = (int)pvVar9;
      *(ushort *)((int)__s + 0x12) =
           *(ushort *)((int)__s + 0x12) & 0xfe00 | (ushort)((uint)puStack_7c & 0x1ff);
      piVar10 = (int *)FUN_ram_40059bae(((uint)puStack_7c & 0x1ff) << 4);
      iVar8 = FUN_ram_40049ff2(auStack_74,piVar10,((__s[4] & 0x1ffffffU) >> 0x10) << 4,0);
      if (iVar8 == 0) {
        piVar18 = piVar10;
        for (uVar19 = 0; uVar19 < (__s[4] & 0x1ffffffU) >> 0x10; uVar19 = uVar19 + 1) {
          iVar8 = FUN_ram_4004a192(auStack_74,*piVar18 + iVar5,0);
          if (iVar8 != 0) goto LAB_ram_400596a4;
          iVar8 = __s[2] + uVar19 * 0x14;
          *(int *)(__s[2] + uVar19 * 0x14) = piVar18[1];
          *(short *)(iVar8 + 4) = (short)piVar18[2];
          *(undefined2 *)(iVar8 + 6) = *(undefined2 *)((int)piVar18 + 10);
          bVar1 = *(byte *)((int)piVar18 + 0xe);
          *(byte *)(iVar8 + 0x12) = bVar1;
          if (bVar1 != 2) {
            if (bVar1 < 3) {
              if (bVar1 == 0) {
                iVar12 = piVar18[3];
                uVar11 = FUN_ram_40059bae((char)iVar12);
                *(undefined4 *)(iVar8 + 0xc) = uVar11;
                iVar12 = FUN_ram_40049ff2(auStack_74,uVar11,(char)iVar12,0);
                if (iVar12 == 0) {
                  *(undefined2 *)(iVar8 + 0x10) = *(undefined2 *)(iVar8 + 4);
                  goto LAB_ram_4005972e;
                }
                goto LAB_ram_400596a4;
              }
            }
            else if (bVar1 != 3) goto LAB_ram_400596a4;
            uVar2 = *(ushort *)(piVar18 + 3);
            uVar11 = FUN_ram_40059bae((uint)uVar2 << 1);
            iVar12 = piVar18[3];
            *(undefined4 *)(iVar8 + 8) = uVar11;
            *(short *)(iVar8 + 0x10) = (short)iVar12;
            iVar12 = FUN_ram_40049ff2(auStack_74,uVar11,(uint)uVar2 << 1,0);
            if (iVar12 != 0) goto LAB_ram_400596a4;
            if (*(char *)((int)piVar18 + 0xe) == '\x01') {
              uVar11 = FUN_ram_40059bae((uint)*(ushort *)(iVar8 + 0x10) << 1);
              *(undefined4 *)(iVar8 + 0xc) = uVar11;
              iVar8 = FUN_ram_40049ff2(auStack_74,uVar11,(uint)*(ushort *)(iVar8 + 0x10) << 1,0);
              if (iVar8 != 0) goto LAB_ram_400596a4;
            }
          }
LAB_ram_4005972e:
          piVar18 = piVar18 + 4;
        }
        bVar3 = true;
      }
      else {
LAB_ram_400596a4:
        bVar3 = false;
      }
      FUN_ram_40059be4(piVar10);
      if (bVar3) {
        iVar8 = FUN_ram_40059202(auStack_74,iVar7 + iVar5,&DAT_ram_40097a8c);
        if ((-1 < iVar8) && (iVar12 = FUN_ram_40049ff2(auStack_74,&uStack_80,4,0), iVar12 == 0)) {
          iVar12 = FUN_ram_40059bae((uStack_80 + 1) * 4);
          if (cStack_4e == '\0') {
            for (uVar19 = 0; uVar19 < uStack_80; uVar19 = uVar19 + 1) {
              iVar13 = FUN_ram_40049ff2(auStack_74,&puStack_7c,2,0);
              if (iVar13 != 0) goto LAB_ram_400596fc;
              *(uint *)(iVar12 + uVar19 * 4) = (uint)puStack_7c & 0xffff;
            }
          }
          else if ((cStack_4e != '\x01') ||
                  (iVar13 = FUN_ram_40049ff2(auStack_74,iVar12,uStack_80 << 2,0), iVar13 != 0)) {
LAB_ram_400596fc:
            FUN_ram_40059be4(iVar12);
            goto LAB_ram_40059700;
          }
          iVar8 = iVar7 + iVar5 + iVar8;
          iVar5 = FUN_ram_40059202(auStack_74,iVar8,&DAT_ram_40097a94);
          if (iVar5 < 0) {
LAB_ram_400599a2:
            iVar5 = -1;
          }
          else {
            puVar14 = (uint *)FUN_ram_40059bae(uStack_80 << 3);
            memset(puVar14,0,uStack_80 << 3);
            __s[1] = (int)puVar14;
            uVar20 = 0;
            puVar21 = puVar14;
            for (uVar19 = 0; uStack_80 != uVar19; uVar19 = uVar19 + 1) {
              iVar7 = FUN_ram_4004a192(auStack_74,*(int *)(iVar12 + uVar19 * 4) + iVar8,0);
              cStack_81 = (char)iVar7;
              if (iVar7 != 0) goto LAB_ram_400599a2;
              puStack_7c = auStack_74;
              uStack_78 = 0xff;
              if (bStack_48 == 0) {
                *puVar21 = *puVar21 & 0xfffff | (uint)uStack_52 << 0x14;
              }
              else {
                iVar7 = FUN_ram_4005917c(&puStack_7c,bStack_48,&cStack_81);
                *puVar21 = *puVar21 & 0xfffff | iVar7 << 0x14;
                if (cStack_81 != '\0') goto LAB_ram_400599a2;
              }
              if (cStack_4c == '\0') {
                *puVar21 = (*puVar21 >> 0x14) << 0x18 | *puVar21 & 0xfffff;
              }
              uVar23 = (uint)bStack_4a;
              uVar22 = FUN_ram_4005917c(&puStack_7c,uVar23,&cStack_81);
              if ((1 << (uVar23 - 1 & 0x1f) & uVar22) != 0) {
                uVar22 = uVar22 | -1 << (uVar23 & 0x1f);
              }
              *(char *)((int)puVar21 + 6) = (char)uVar22;
              if (cStack_81 != '\0') goto LAB_ram_400599a2;
              uVar23 = (uint)bStack_4a;
              uVar22 = FUN_ram_4005917c(&puStack_7c,uVar23,&cStack_81);
              if ((1 << (uVar23 - 1 & 0x1f) & uVar22) != 0) {
                uVar22 = uVar22 | -1 << (uVar23 & 0x1f);
              }
              *(char *)((int)puVar21 + 7) = (char)uVar22;
              if (cStack_81 != '\0') goto LAB_ram_400599a2;
              uVar4 = FUN_ram_4005917c(&puStack_7c,bStack_49,&cStack_81);
              *(undefined1 *)(puVar21 + 1) = uVar4;
              if (cStack_81 != '\0') goto LAB_ram_400599a2;
              uVar4 = FUN_ram_4005917c(&puStack_7c,bStack_49,&cStack_81);
              *(undefined1 *)((int)puVar21 + 5) = uVar4;
              if (cStack_81 != '\0') goto LAB_ram_400599a2;
              iVar7 = iVar5;
              if (uVar19 < uStack_80 - 1) {
                iVar7 = *(int *)(iVar12 + 4 + uVar19 * 4);
              }
              iVar13 = *(int *)(iVar12 + uVar19 * 4);
              if (uVar19 == 0) {
                *(undefined1 *)(puVar21 + 1) = 0;
                *(undefined1 *)((int)puVar21 + 5) = 0;
                *puVar21 = *puVar21 & 0xfffff;
                *(undefined1 *)((int)puVar21 + 6) = 0;
                *(undefined1 *)((int)puVar21 + 7) = 0;
              }
              *puVar21 = uVar20 & 0xfffff | *puVar21 & 0xfff00000;
              if ((uint)(byte)puVar21[1] * (uint)*(byte *)((int)puVar21 + 5) != 0) {
                uVar20 = uVar20 + (iVar7 - (((int)((uint)bStack_48 + (uint)bStack_4a * 2 +
                                                  (uint)bStack_49 * 2) >> 3) + iVar13));
              }
              puVar21 = puVar21 + 2;
            }
            iVar7 = FUN_ram_40059bae(uVar20);
            *__s = iVar7;
            puVar14 = puVar14 + 3;
            iVar13 = 0;
            for (uVar20 = 1; uVar20 < uVar19; uVar20 = uVar20 + 1) {
              iVar15 = FUN_ram_4004a192(auStack_74,*(int *)(iVar12 + uVar20 * 4) + iVar8,0);
              cStack_81 = (char)iVar15;
              if (iVar15 != 0) goto LAB_ram_400599a2;
              puStack_7c = auStack_74;
              uStack_78 = 0xff;
              uVar22 = (uint)bStack_48 + (uint)bStack_4a * 2 + (uint)bStack_49 * 2;
              FUN_ram_4005917c(&puStack_7c,uVar22,&cStack_81);
              if (cStack_81 != '\0') goto LAB_ram_400599a2;
              if ((uint)(byte)*puVar14 * (uint)*(byte *)((int)puVar14 + 1) != 0) {
                iVar15 = iVar5;
                if (uVar20 < uVar19 - 1) {
                  iVar15 = *(int *)(iVar12 + 4 + uVar20 * 4);
                }
                uVar23 = uVar22 & 7;
                iVar15 = iVar15 - (((int)uVar22 >> 3) + *(int *)(iVar12 + uVar20 * 4));
                iVar16 = 0;
                if (uVar23 == 0) {
                  iVar16 = FUN_ram_40049ff2(auStack_74,iVar7 + iVar13,iVar15);
                  if (iVar16 != 0) goto LAB_ram_400599a2;
                }
                else {
                  for (; iVar16 < iVar15 + -1; iVar16 = iVar16 + 1) {
                    uVar4 = FUN_ram_4005917c(&puStack_7c,8,&cStack_81);
                    *(undefined1 *)(iVar7 + iVar13 + iVar16) = uVar4;
                    if (cStack_81 != '\0') goto LAB_ram_400599a2;
                  }
                  iVar16 = FUN_ram_4005917c(&puStack_7c,8 - uVar23,&cStack_81);
                  iVar17 = iVar15 + iVar13 + -1;
                  *(char *)(iVar7 + iVar17) = (char)iVar16;
                  if (cStack_81 != '\0') goto LAB_ram_400599a2;
                  *(char *)(iVar7 + iVar17) = (char)(iVar16 << uVar23);
                }
                iVar13 = iVar13 + iVar15;
              }
              puVar14 = puVar14 + 2;
            }
          }
          FUN_ram_40059be4(iVar12);
          if (iVar5 != -1) {
            if (uStack_64 < 4) {
              __s[3] = 0;
              __s[4] = __s[4] & 0xdfff0000;
              goto LAB_ram_400597e6;
            }
            iVar5 = FUN_ram_400592fa(auStack_74,__s,uStack_4d,iVar5 + iVar8);
            if (-1 < iVar5) goto LAB_ram_400597e6;
          }
        }
      }
    }
  }
LAB_ram_40059700:
  FUN_ram_4005924c(puVar6);
  puVar6 = (undefined4 *)0x0;
LAB_ram_400597e6:
  FUN_ram_40049fa0(auStack_74);
  return puVar6;
}


/* NanoCore 1.10, address 0x40059aa8.
 * REA evidence: ev_1fae06b6e4d0f54893506ae15fb9bb6100d1ef671f3c51e9ec50575a6768edfb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40059aa8(int *param_1,undefined1 param_2,int param_3,undefined4 param_4,
                     undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (param_3 != 0)) {
    iVar2 = FUN_ram_400064c6(s_thread_ram_40097a9c,param_3,param_5,param_4,param_2,0x14);
    *param_1 = iVar2;
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = FUN_ram_40006640();
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  return false;
}


/* NanoCore 1.10, address 0x40059ae8.
 * REA evidence: ev_8e60aaa250735cf1b4fc25df5a2f00bd0f0c9eb60b5ac27269ca3c5098d3d406
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40059ae8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_ram_4000647c(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.10, address 0x40059afc.
 * REA evidence: ev_b48be6c64929a74f1b7c317efd3be2704c53e9ef44305156796ea5ddf9c481a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40059afc(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4000498c(s_mutex_ram_40097aa4,1);
  *param_1 = iVar1;
  return iVar1 != 0;
}


/* NanoCore 1.10, address 0x40059b20.
 * REA evidence: ev_36872394505134739e556fddf4140093f588f64036b63dd082cd76db0ec4c90e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40059b20(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400049d6(*param_1,0xffffffff);
  return iVar1 == 0;
}


/* NanoCore 1.10, address 0x40059b36.
 * REA evidence: ev_d6526e45212a47e52a6199caabc963264f40dee4a7f145a46b18cb69acdcb339
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40059b36(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004ac8(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.10, address 0x40059b4a.
 * REA evidence: ev_bf74620785f27a45da6b8b2ad2269ffef1586528c5987f68b5aa512a435676a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40059b4a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400047e8(&DAT_ram_40097aac,0,1);
  *param_1 = iVar1;
  return iVar1 != 0;
}


/* NanoCore 1.10, address 0x40059b70.
 * REA evidence: ev_84897ee02cfaacd137931500d58e0720704ae50199e155fd01c766f4e677ce58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40059b70(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004832(*param_1,0xffffffff);
  return iVar1 == 0;
}


/* NanoCore 1.10, address 0x40059b86.
 * REA evidence: ev_eb4a8c73a6a514459b6ca5c38864c7f480aacf657e3cba1fdeb12929c0c43a2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40059b86(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400048d4(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.10, address 0x40059b9a.
 * REA evidence: ev_feca8021e7009261e6c6b7c3afeb346c541f73b095d78be55762460bedeac1f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40059b9a(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004816(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.10, address 0x40059bae.
 * REA evidence: ev_21b4f798875f9283382d73cfdd472810d2a467aa4899f6925708fb191356d88f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_40059bae(int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined1 *)FUN_ram_40059c62();
    return puVar1;
  }
  return &DAT_ram_3007f944;
}


/* NanoCore 1.10, address 0x40059bbc.
 * REA evidence: ev_5ea3f2957e0e062315dadf0e14b2212eaa99c2ee603fbda6f9fdd951ac11c93c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_40059bbc(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_ram_3007f944;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)FUN_ram_40059c62();
    if (puVar1 != (undefined1 *)0x0) {
      thunk_FUN_ram_4000505c(puVar1,0,param_1);
    }
  }
  return puVar1;
}


/* NanoCore 1.10, address 0x40059be4.
 * REA evidence: ev_274d13a2dc6da1e799627a3ad205321c815f536b51a97a473241b102be1511c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059be4(undefined1 *param_1)

{
  if ((param_1 != &DAT_ram_3007f944) && (param_1 != (undefined1 *)0x0)) {
    FUN_ram_40059ca4();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40059bf6.
 * REA evidence: ev_26a02e6ab09c6adf5c39dbd8e460050f4583a61b3b2623c7483391bbdf068e0a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_40059bf6(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    FUN_ram_40059be4();
    return &DAT_ram_3007f944;
  }
  if (param_1 == &DAT_ram_3007f944) {
    puVar1 = (undefined1 *)FUN_ram_40059bae(param_2);
    return puVar1;
  }
  puVar1 = (undefined1 *)FUN_ram_40059c7e();
  return puVar1;
}


/* NanoCore 1.10, address 0x40059c22.
 * REA evidence: ev_b626a9cd8b3645e6d04e9520f89db1d0a68338b829e93dd0e28f1dbcaf69b50e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40059c22(void)

{
  if (DAT_ram_3007fa78 == '\0') {
    DAT_ram_3007fa78 = '\x01';
    _DAT_ram_3007fa74 = FUN_ram_40005fec(s_heap_cma_ram_40094f5c,7);
  }
  return _DAT_ram_3007fa74;
}


/* NanoCore 1.10, address 0x40059c60.
 * REA evidence: ev_ad024950d266e8ecb4df8ee5fbf2f4ad1fe72b28493d44cfccd1eef8a2a7ee4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059c60(void)

{
  return;
}


/* NanoCore 1.10, address 0x40059c62.
 * REA evidence: ev_dbf478fb377f37fea5178c54581073b2fd16361e095d62aa80e9f222be6cf575
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059c62(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40059c22();
  if (iVar1 != 0) {
    FUN_ram_40005844(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40059c7e.
 * REA evidence: ev_522ebaf93deeafa3178a758a8eb11c98d2b4d9a1e63522c927057d03c81e7ed6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059c7e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40059c22();
  if (iVar1 != 0) {
    FUN_ram_40005a94(iVar1,param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40059ca4.
 * REA evidence: ev_700f90f4e8fbfaebddd9c0602ec98cc5502fe235d6f9d9b88a6de72752cc5ecc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059ca4(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400059ae();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40059cac.
 * REA evidence: ev_eb673949fe7b5946d3f1a6a5b60efb7c415ad6e7d76633b3643500d50dfd9c92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  uint uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  
  pvVar8 = __dest;
  if ((0xf < __n) && (puVar2 = __src, puVar5 = __dest, (((uint)__src | (uint)__dest) & 3) == 0)) {
    do {
      *puVar5 = *puVar2;
      puVar5[1] = puVar2[1];
      puVar5[2] = puVar2[2];
      puVar6 = puVar5 + 4;
      puVar5[3] = puVar2[3];
      puVar2 = puVar2 + 4;
      puVar5 = puVar6;
    } while (0xf < (int)__dest + (__n - (int)puVar6));
    iVar7 = (__n - 0x10 & 0xfffffff0) + 0x10;
    uVar1 = __n & 0xf;
    for (iVar4 = 0; 3 < uVar1 - iVar4; iVar4 = iVar4 + 4) {
      *(undefined4 *)((int)__dest + iVar4 + iVar7) = *(undefined4 *)((int)__src + iVar4 + iVar7);
    }
    pvVar8 = (void *)((int)__dest + (__n & 0xc) + iVar7);
    __src = (void *)((int)__src + (__n & 0xc) + iVar7);
    __n = uVar1 + (uVar1 >> 2) * -4;
  }
  for (sVar3 = 0; __n != sVar3; sVar3 = sVar3 + 1) {
    *(undefined1 *)((int)pvVar8 + sVar3) = *(undefined1 *)((int)__src + sVar3);
  }
  return __dest;
}


/* NanoCore 1.10, address 0x40059cb0.
 * REA evidence: ev_f3eeac56155684d02f884a3a785779d8ee02bb265d8d7b9c8c32efb040dd57dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4000505c(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if ((3 < param_3) && (((uint)param_1 & 3) == 0)) {
    uVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    for (puVar4 = param_1; 0xf < (int)param_1 + (param_3 - (int)puVar4); puVar4 = puVar4 + 4) {
      *puVar4 = uVar3;
      puVar4[1] = uVar3;
      puVar4[2] = uVar3;
      puVar4[3] = uVar3;
    }
    uVar2 = param_3 >> 4;
    param_3 = param_3 + uVar2 * -0x10;
    for (iVar1 = 0; 3 < param_3 - iVar1; iVar1 = iVar1 + 4) {
      *(undefined4 *)((int)param_1 + iVar1 + uVar2 * 0x10) = uVar3;
    }
    param_1 = param_1 + uVar2 * 4 + (param_3 >> 2);
    param_3 = param_3 + (param_3 >> 2) * -4;
  }
  for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)param_1 + uVar2) = param_2;
  }
  return;
}


/* NanoCore 1.10, address 0x40059cb4.
 * REA evidence: ev_403a79c17282e6358c09833bffc2fee3c0deac5764d5575686b2545a8d2f76b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40005166(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 < param_1) && (param_1 < param_2 + param_3)) {
    uVar1 = 0;
    while (uVar1 = uVar1 - 1, ~param_3 != uVar1) {
      *(undefined1 *)(param_1 + param_3 + uVar1) = *(undefined1 *)(param_2 + param_3 + uVar1);
    }
    return;
  }
  for (uVar1 = 0; param_3 != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}


/* NanoCore 1.10, address 0x40059cb8.
 * REA evidence: ev_22df860f77770e531b526f8a31c56106ed974ee2076c64fa61b5fcc43aad91ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40005244(char *param_1)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
  }
  return (int)pcVar1 - (int)param_1;
}


/* NanoCore 1.10, address 0x40059cbc.
 * REA evidence: ev_e099b2508e491f9625b8eb94102fc7119766d55f26a0ce7d936224c0f6d2f7dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_400051ee(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(char *)(param_2 + iVar1) == '\0') break;
    *(char *)(param_1 + iVar1) = *(char *)(param_2 + iVar1);
    iVar1 = iVar1 + 1;
  }
  *(undefined1 *)(param_1 + iVar1) = 0;
  return;
}


/* NanoCore 1.10, address 0x40059cc0.
 * REA evidence: ev_d2ffd2f826061997ee96d984d7c26c53520a837c0c6acb91ebfadcc8700f506c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_4000522c(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar2 = (uint)*(byte *)(param_1 + iVar3);
    pbVar1 = (byte *)(param_2 + iVar3);
    if (uVar2 == 0) break;
    iVar3 = iVar3 + 1;
  } while (uVar2 == *pbVar1);
  return uVar2 - *pbVar1;
}


/* NanoCore 1.10, address 0x40059cc4.
 * REA evidence: ev_a8ac09aa46501d9762d80904db03245ff648def91f7451380655f699604229c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void * FUN_ram_40059cc4(void *param_1)

{
  void *__dest;
  int iVar1;
  
  __dest = (void *)0x0;
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_ram_40005244();
    __dest = (void *)FUN_ram_40059bae(iVar1 + 1U);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,iVar1 + 1U);
    }
  }
  return __dest;
}


/* NanoCore 1.10, address 0x40059cf6.
 * REA evidence: ev_3877125066fe1f5ed573e65d743064dd7df2f82ab8c178199b870e132686a77b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_40059cf6(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _DAT_ram_3007fa7c;
  if (_DAT_ram_3007fa7c == (int *)0x0) {
    piVar1 = (int *)FUN_ram_40005666(8);
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_ram_40004476(&DAT_ram_40095754);
      if (iVar2 == 0) {
        FUN_ram_400056c4(piVar1);
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = iVar2;
        piVar1[1] = 1;
        _DAT_ram_3007fa7c = piVar1;
      }
    }
  }
  else {
    _DAT_ram_3007fa7c[1] = _DAT_ram_3007fa7c[1] + 1;
  }
  return piVar1;
}


/* NanoCore 1.10, address 0x40059d48.
 * REA evidence: ev_5c05b4f64947ee2bf1ba0cf473c56759d6a602d7bae5bd94f13075f6b37432c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059d48(undefined4 *param_1)

{
  FUN_ram_40004604(*param_1);
  return;
}


/* NanoCore 1.10, address 0x40059d4e.
 * REA evidence: ev_c336f981c16c240bc322edc61df1c2fb01eeb36c4a64b2d47674b0f04a7a839b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40059d4e(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_18 [4];
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  auStack_18[0] = 0x9f;
  iVar1 = (**(code **)(param_1 + 0x30))
                    (param_1 + 0x20,auStack_18,1,&uStack_14,3,*(code **)(param_1 + 0x30));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xe) = uStack_12;
    *(undefined2 *)(param_1 + 0xc) = uStack_14;
  }
  uVar2 = *(uint *)(param_1 + 0xc) & 0xffff;
  if ((uVar2 == 0xffff) || (uVar2 == 0)) {
    iVar1 = 1;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40059d98.
 * REA evidence: ev_5e1e8580a26fdf85ddf074a7c21d6afd3426ca57f46026cf832d050855ee0d9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059d98(int param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  
  uVar1 = ((param_1 != 0) + 2) * 8;
  do {
    *param_3 = (char)(param_2 >> (uVar1 & 0x1f));
    uVar1 = uVar1 - 8;
    param_3 = param_3 + 1;
  } while (uVar1 != 0xfffffff8);
  return;
}


/* NanoCore 1.10, address 0x40059db2.
 * REA evidence: ev_23fe2980869e00fbac908c2686c49e5e5d489b96db98fc8f68dd256fc45770e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40059db2(int param_1,int param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  
  bVar4 = *(byte *)(param_1 + 0x94);
  pcVar2 = &DAT_ram_40097ed4;
  do {
    if (((*pcVar2 == *(char *)(param_1 + 0xc)) && (pcVar2[1] == *(char *)(param_1 + 0xd))) &&
       (pcVar2[2] == *(char *)(param_1 + 0xe))) {
      bVar4 = pcVar2[3];
    }
    pcVar2 = pcVar2 + 4;
  } while (pcVar2 != &DAT_ram_40097f24);
  if (param_2 == 2) {
    uVar3 = *(uint *)(param_1 + 0x10);
    if ((bVar4 & 4) == 0) {
      if ((bVar4 & 2) != 0) {
        if (uVar3 < 0x1000001) {
          *(undefined1 *)(param_1 + 0x54) = 0x3b;
          uVar5 = 0x18;
        }
        else {
          *(undefined1 *)(param_1 + 0x54) = 0x3c;
          uVar5 = 0x20;
        }
        *(undefined1 *)(param_1 + 0x56) = uVar5;
        *(undefined1 *)(param_1 + 0x55) = 1;
        *(undefined1 *)(param_1 + 0x57) = 1;
        *(undefined2 *)(param_1 + 0x58) = 0x800;
        uVar5 = 2;
        goto LAB_ram_40059e70;
      }
      goto LAB_ram_40059e4e;
    }
    if (uVar3 < 0x1000001) {
      *(undefined1 *)(param_1 + 0x54) = 0xbb;
      uVar5 = 0x18;
    }
    else {
      *(undefined1 *)(param_1 + 0x54) = 0xbc;
      uVar5 = 0x20;
    }
    *(undefined1 *)(param_1 + 0x56) = uVar5;
    *(undefined1 *)(param_1 + 0x55) = 1;
    uVar5 = 2;
    *(undefined1 *)(param_1 + 0x57) = 2;
    uVar1 = 0x400;
  }
  else if (param_2 == 4) {
    uVar3 = *(uint *)(param_1 + 0x10);
    if ((bVar4 & 0x10) == 0) {
      if ((bVar4 & 8) != 0) {
        if (uVar3 < 0x1000001) {
          *(undefined1 *)(param_1 + 0x54) = 0x6b;
          uVar5 = 0x18;
        }
        else {
          *(undefined1 *)(param_1 + 0x54) = 0x6c;
          uVar5 = 0x20;
        }
        *(undefined1 *)(param_1 + 0x56) = uVar5;
        *(undefined1 *)(param_1 + 0x55) = 1;
        *(undefined1 *)(param_1 + 0x57) = 1;
        *(undefined2 *)(param_1 + 0x58) = 0x800;
        uVar5 = 4;
        goto LAB_ram_40059e70;
      }
      goto LAB_ram_40059e4e;
    }
    if (uVar3 < 0x1000001) {
      *(undefined1 *)(param_1 + 0x54) = 0xeb;
      uVar5 = 0x18;
    }
    else {
      *(undefined1 *)(param_1 + 0x54) = 0xec;
      uVar5 = 0x20;
    }
    *(undefined1 *)(param_1 + 0x56) = uVar5;
    *(undefined1 *)(param_1 + 0x55) = 1;
    uVar5 = 4;
    *(undefined1 *)(param_1 + 0x57) = 4;
    uVar1 = 0x600;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x9c) < 0x3473bc1) {
LAB_ram_40059e4e:
      if (uVar3 < 0x1000001) {
        *(undefined1 *)(param_1 + 0x54) = 3;
        uVar5 = 0x18;
      }
      else {
        *(undefined1 *)(param_1 + 0x54) = 0x13;
        uVar5 = 0x20;
      }
      *(undefined1 *)(param_1 + 0x56) = uVar5;
      uVar5 = 1;
      *(undefined1 *)(param_1 + 0x55) = 1;
      *(undefined1 *)(param_1 + 0x57) = 1;
      *(undefined2 *)(param_1 + 0x58) = 0;
      goto LAB_ram_40059e70;
    }
    if (uVar3 < 0x1000001) {
      *(undefined1 *)(param_1 + 0x54) = 0xb;
      uVar5 = 0x18;
    }
    else {
      *(undefined1 *)(param_1 + 0x54) = 0xc;
      uVar5 = 0x20;
    }
    *(undefined1 *)(param_1 + 0x56) = uVar5;
    uVar5 = 1;
    *(undefined1 *)(param_1 + 0x55) = 1;
    *(undefined1 *)(param_1 + 0x57) = 1;
    uVar1 = 0x800;
  }
  *(undefined2 *)(param_1 + 0x58) = uVar1;
LAB_ram_40059e70:
  *(undefined1 *)(param_1 + 0x5a) = uVar5;
  return 0;
}


/* NanoCore 1.10, address 0x40059f7c.
 * REA evidence: ev_aace8a95b131a02aabda8cea5af2829dbe947d28dd5300b8ad015e60067192b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059f7c(int param_1,undefined4 param_2)

{
  undefined1 auStack_11 [13];
  
  auStack_11[0] = 5;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,auStack_11,1,param_2,1,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.10, address 0x40059f9e.
 * REA evidence: ev_32a5fb45baeda3864816656e898b1c201119106daa4b18dcefc7ac6f8757e3bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40059f9e(int param_1,int param_2)

{
  int iVar1;
  byte abStack_11 [5];
  
  while ((iVar1 = FUN_ram_40059f7c(param_1,abStack_11), iVar1 != 0 || ((abStack_11[0] & 1) != 0))) {
    if (param_2 == 0) {
      return 4;
    }
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))();
    }
    param_2 = param_2 + -1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40059fd6.
 * REA evidence: ev_4ad36e8d9cc73ea1bff1cc5a23446c134b749338913126fb79830036562747c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40059fd6(int param_1,int param_2,uint param_3,undefined1 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined1 *__s;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  undefined1 auStack_160 [300];
  
  if (*(uint *)(param_1 + 0x10) < param_2 + param_3) {
    return 5;
  }
  iVar7 = param_1 + 0x20;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(iVar7);
  }
  iVar3 = FUN_ram_40059f9e(param_1,1000);
  uVar6 = (uint)param_4 & 0x1f;
  uVar2 = param_3;
  if (param_3 < 0x101) {
    bVar1 = true;
    __s = auStack_160;
    if (uVar6 != 0) goto LAB_ram_4005a052;
  }
  else if (uVar6 != 0) {
    uVar2 = 0x20 - uVar6;
  }
  bVar1 = false;
  __s = param_4;
LAB_ram_4005a052:
  if (iVar3 == 0) {
    do {
      if (((uVar2 & 0x1f) != 0) && (0x100 < uVar2)) {
        uVar2 = uVar2 & 0xffffffe0;
      }
      iVar3 = (**(code **)(param_1 + 0x28))(iVar7,&uStack_16c);
      if (iVar3 != 0) break;
      if (*(char *)(param_1 + 0x54) == '\x03') {
        uStack_168 = 3;
        FUN_ram_40059d98(*(undefined1 *)(param_1 + 0x45),param_2,auStack_167);
        cVar5 = (*(char *)(param_1 + 0x45) != '\0') + '\x04';
        FUN_ram_4003d08c(uStack_16c,param_2,cVar5,uVar2);
        FUN_ram_4003d104();
        iVar3 = (**(code **)(param_1 + 0x30))
                          (iVar7,&uStack_168,cVar5,__s,uVar2,*(code **)(param_1 + 0x30));
        FUN_ram_4003d128();
        iVar4 = FUN_ram_4003d13c();
        if (iVar4 != 0) {
          memset(__s,0xff,uVar2);
        }
      }
      else {
        iVar3 = (**(code **)(param_1 + 0x34))
                          (iVar7,param_2,param_1 + 0x54,__s,uVar2,*(code **)(param_1 + 0x34));
      }
      if (iVar3 != 0) break;
      if (bVar1) {
        FUN_ram_4000305c(param_4,__s,uVar2);
      }
      __s = __s + uVar2;
      param_2 = param_2 + uVar2;
      uVar2 = param_3 - uVar2;
      iVar3 = 0;
      param_3 = uVar2;
    } while (uVar2 != 0);
  }
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar7);
  }
  return iVar3;
}


