/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40053000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400533de.
 * REA evidence: ev_d89ba49c7b08c2be8947e7cb168d680e5a68da3aeea8a2765029cf5965b9db56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400533de(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [44];
  
  iVar3 = FUN_ram_4004a4fe(&iStack_74,param_2 + 0x1c,*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    puVar7 = *(undefined4 **)(param_1 + 8);
    puVar1 = *(undefined4 **)(param_1 + 4);
    uVar9 = *puVar1;
    FUN_ram_4004a496(auStack_64,*puVar7,puVar7[1],puVar7[2],*(int *)(param_2 + 0x20) + -1);
    FUN_ram_4004a4e4(auStack_64,-puVar1[1],-puVar1[2]);
    FUN_ram_4004ddb8(uVar9,auStack_64);
    puVar7 = *(undefined4 **)(param_1 + 8);
    FUN_ram_4004a496(auStack_64,*puVar7,*(int *)(param_2 + 0x28) + 1,puVar7[2],puVar7[3]);
    FUN_ram_4004a4e4(auStack_64,-puVar1[1],-puVar1[2]);
    FUN_ram_4004ddb8(uVar9,auStack_64);
    FUN_ram_4004a496(auStack_64,**(undefined4 **)(param_1 + 8),*(undefined4 *)(param_2 + 0x20),
                     *(int *)(param_2 + 0x1c) + -1,*(undefined4 *)(param_2 + 0x28));
    FUN_ram_4004a4e4(auStack_64,-puVar1[1],-puVar1[2]);
    FUN_ram_4004ddb8(uVar9,auStack_64);
    FUN_ram_4004a496(auStack_64,*(int *)(param_2 + 0x24) + 1,*(undefined4 *)(param_2 + 0x20),
                     *(undefined4 *)(*(int *)(param_1 + 8) + 8),*(undefined4 *)(param_2 + 0x28));
    FUN_ram_4004a4e4(auStack_64,-puVar1[1],-puVar1[2]);
    FUN_ram_4004ddb8(uVar9,auStack_64);
    FUN_ram_40052fc0(auStack_54,param_2 + 0x1c,*(undefined4 *)(param_2 + 0x2c),0);
    uStack_78 = 0;
    uVar2 = (iStack_6c - iStack_74) + 1;
    puStack_7c = auStack_54;
    iVar4 = FUN_ram_4005a952(uVar2);
    for (iVar3 = iStack_70; iVar3 <= iStack_68; iVar3 = iVar3 + 1) {
      thunk_FUN_ram_40004f92(iVar4,0xff,uVar2);
      iVar5 = FUN_ram_40052cb0(&puStack_7c,iVar4,iStack_74,iVar3,uVar2);
      if (iVar5 != 1) {
        iVar6 = FUN_ram_4004da44(puVar1,iStack_74 - puVar1[1],iVar3 - puVar1[2]);
        if (iVar5 == 0) {
          thunk_FUN_ram_40004f92(iVar6,0,uVar2 * 4);
        }
        else {
          for (uVar8 = 0; uVar8 < uVar2; uVar8 = uVar8 + 1) {
            if (*(byte *)(iVar4 + uVar8) != 0xff) {
              *(char *)(iVar6 + 3 + uVar8 * 4) =
                   (char)((uint)*(byte *)(iVar6 + 3 + uVar8 * 4) * (uint)*(byte *)(iVar4 + uVar8) >>
                         8);
            }
          }
        }
      }
    }
    FUN_ram_4005a988(iVar4);
    FUN_ram_40052d04(auStack_54);
  }
  return;
}


/* NanoCore 1.12, address 0x4005358a.
 * REA evidence: ev_6eea3e084223aca7f4b35a536c96257641daa549d7d4a3214fecae01bf31dc9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4005358a(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  
  uVar1 = param_1 >> 0x18;
  if (uVar1 < 0xfd) {
    uStack_18 = (undefined1)param_2;
    uStack_17 = (byte)(param_2 >> 8);
    uStack_16 = (byte)(param_2 >> 0x10);
    if (uVar1 < 3) {
      uStack_4 = uStack_18;
      uStack_3 = uStack_17;
      uStack_2 = uStack_16;
    }
    else {
      iVar2 = 0xff - uVar1;
      uStack_4 = (undefined1)((param_2 & 0xff) * iVar2 + (param_1 & 0xff) * uVar1 >> 8);
      uStack_3 = (byte)((uint)uStack_17 * iVar2 + ((param_1 & 0xffff) >> 8) * uVar1 >> 8);
      uStack_2 = (byte)((uint)uStack_16 * iVar2 + ((param_1 & 0xffffff) >> 0x10) * uVar1 >> 8);
    }
  }
  else {
    uStack_4 = (undefined1)param_1;
    uStack_3 = (byte)(param_1 >> 8);
    uStack_2 = (byte)(param_1 >> 0x10);
  }
  return (uint)CONCAT12(uStack_2,CONCAT11(uStack_3,uStack_4)) | param_2 & 0xff000000;
}


/* NanoCore 1.12, address 0x4005362e.
 * REA evidence: ev_c42b89ca96328afcf78cb7bc738b623eb1e5b18b722b6a7cd782e2f9614297f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005362e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7,int param_8,int param_9,uint3 *param_10,char param_11,int param_12)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar14 = 0;
  iVar15 = 0;
  iVar13 = 0;
  do {
    if (param_9 <= iVar13) {
      return;
    }
    uVar8 = (iVar14 >> 8) + param_5;
    iVar16 = (int)uVar8 >> 8;
    if (((int)uVar8 < 0) || (param_2 <= iVar16)) {
LAB_ram_400536ca:
      *(undefined1 *)((int)param_10 + 3) = 0;
    }
    else {
      uVar10 = (iVar15 >> 8) + param_6;
      iVar5 = (int)uVar10 >> 8;
      if (((int)uVar10 < 0) || (param_3 <= iVar5)) goto LAB_ram_400536ca;
      if ((uVar8 & 0x80) == 0) {
        iVar4 = 0x7f - (uVar8 & 0xff);
        iVar7 = -1;
      }
      else {
        iVar4 = (uVar8 & 0xff) - 0x80;
        iVar7 = 1;
      }
      if ((uVar10 & 0x80) == 0) {
        iVar12 = 0x7f - (uVar10 & 0xff);
        iVar11 = -1;
      }
      else {
        iVar12 = (uVar10 & 0xff) - 0x80;
        iVar11 = 1;
      }
      iVar17 = iVar16 * param_12 + iVar5 * param_4;
      iVar9 = param_1 + iVar17;
      *(undefined1 *)((int)param_10 + 2) = *(undefined1 *)(iVar9 + 2);
      *(undefined1 *)((int)param_10 + 1) = *(undefined1 *)(iVar9 + 1);
      uVar2 = *(undefined1 *)(param_1 + iVar17);
      *(undefined1 *)((int)param_10 + 3) = 0xff;
      *(undefined1 *)param_10 = uVar2;
      if ((((param_11 == '\0') || (iVar7 + iVar16 == -1)) || (param_2 <= iVar7 + iVar16)) ||
         ((iVar11 + iVar5 == -1 || (param_3 <= iVar11 + iVar5)))) {
        if (((iVar16 == 0) && (iVar7 == -1)) || ((param_2 + -1 == iVar16 && (iVar7 == 1)))) {
          *(char *)((int)param_10 + 3) = (char)((uint)((0xff - iVar4) * 0xff) >> 8);
        }
        else if (((iVar5 == 0) && (iVar11 == -1)) || ((param_3 + -1 == iVar5 && (iVar11 == 1)))) {
          *(char *)((int)param_10 + 3) = (char)((uint)((0xff - iVar12) * 0xff) >> 8);
        }
      }
      else {
        iVar16 = iVar9 + iVar7 * param_12;
        uVar2 = *(undefined1 *)(iVar16 + 2);
        uVar1 = *(undefined1 *)(iVar16 + 1);
        uVar3 = *(undefined1 *)(iVar9 + iVar7 * param_12);
        iVar16 = iVar9 + iVar11 * param_4;
        uStack_44._0_3_ =
             CONCAT12(*(undefined1 *)(iVar16 + 2),
                      CONCAT11(*(undefined1 *)(iVar16 + 1),*(undefined1 *)(iVar9 + iVar11 * param_4)
                              ));
        uStack_44 = CONCAT13(0xff,(undefined3)uStack_44);
        if (uStack_44 != (*param_10 | 0xff000000)) {
          uStack_44 = CONCAT13((char)iVar12,(undefined3)uStack_44);
          uVar6 = FUN_ram_4005358a(uStack_44);
          *(char *)param_10 = (char)uVar6;
          *(char *)((int)param_10 + 1) = (char)((uint)uVar6 >> 8);
          *(char *)((int)param_10 + 2) = (char)((uint)uVar6 >> 0x10);
          *(char *)((int)param_10 + 3) = (char)((uint)uVar6 >> 0x18);
        }
        uStack_48._0_3_ = CONCAT12(uVar2,CONCAT11(uVar1,uVar3));
        uStack_48 = CONCAT13(0xff,(undefined3)uStack_48);
        if (*(int *)param_10 != uStack_48) {
          uStack_48 = CONCAT13((char)iVar4,(undefined3)uStack_48);
          uVar6 = FUN_ram_4005358a(uStack_48);
          *(char *)param_10 = (char)uVar6;
          *(char *)((int)param_10 + 1) = (char)((uint)uVar6 >> 8);
          *(char *)((int)param_10 + 2) = (char)((uint)uVar6 >> 0x10);
          *(char *)((int)param_10 + 3) = (char)((uint)uVar6 >> 0x18);
        }
      }
    }
    iVar13 = iVar13 + 1;
    param_10 = param_10 + 1;
    iVar15 = iVar15 + param_8;
    iVar14 = iVar14 + param_7;
  } while( true );
}


/* NanoCore 1.12, address 0x4005388c.
 * REA evidence: ev_58a2a5d47f32d3c696943dd0c9b94e67112b75cff4426004de6f757203ba7195
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005388c(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((*(int *)(param_1 + 0x20) == 0) && (iVar2 == 0x100)) && (*(int *)(param_1 + 0x1c) == 0x100))
  {
    *param_4 = param_2 << 8;
    param_3 = param_3 << 8;
  }
  else {
    param_2 = param_2 - *(int *)(param_1 + 0x2c);
    param_3 = param_3 - *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x20) == 0) {
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = (param_2 * 0x10000) / iVar2;
      }
      *param_4 = iVar2 + iVar3;
      if (*(int *)(param_1 + 0x1c) == 0) {
        param_3 = -1;
      }
      else {
        param_3 = (param_3 * 0x10000) / *(int *)(param_1 + 0x1c);
      }
    }
    else {
      iVar1 = param_2 * *(int *)(param_1 + 0x14) - param_3 * *(int *)(param_1 + 0x10);
      if ((iVar2 != 0x100) || (*(int *)(param_1 + 0x1c) != 0x100)) {
        if (iVar2 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = (iVar1 * 0x100) / iVar2;
        }
        *param_4 = (iVar2 >> 2) + iVar3;
        if (*(int *)(param_1 + 0x1c) == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = ((param_3 * *(int *)(param_1 + 0x14) + param_2 * *(int *)(param_1 + 0x10)) * 0x100
                  ) / *(int *)(param_1 + 0x1c);
        }
        *param_5 = (iVar2 >> 2) + *(int *)(param_1 + 0x28);
        return;
      }
      *param_4 = (iVar1 >> 2) + iVar3;
      param_3 = param_3 * *(int *)(param_1 + 0x14) + param_2 * *(int *)(param_1 + 0x10) >> 2;
    }
    param_3 = param_3 + *(int *)(param_1 + 0x28);
  }
  *param_5 = param_3;
  return;
}


/* NanoCore 1.12, address 0x4005393c.
 * REA evidence: ev_da0caa1912ae392e8693101345d2e29af2c6f5dbd60c26c3df887e2f0aed50be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4005393c(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = (param_2 | param_2 << 0x10) & 0x7e0f81f;
    uVar1 = ((((param_1 << 0x10 | param_1) & 0x7e0f81f) - uVar1) * (param_3 + 4U >> 3) >> 5) + uVar1
    ;
    param_2 = uVar1 & 0xf81f | (uVar1 & 0x7e0f81f) >> 0x10;
  }
  return param_2;
}


/* NanoCore 1.12, address 0x40053978.
 * REA evidence: ev_0e604a7e841013c5634b0b108f3cc1e40be74d29e89e732b4dfe07c0201b07db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005397e) */

void FUN_ram_40053978(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7,int param_8,int param_9,int param_10,int param_11,char param_12,
                     char param_13)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  iVar18 = param_4 / 2;
  iVar20 = 0;
  iVar21 = 0;
  iVar8 = 0;
  iVar19 = param_1 + param_4 * param_3;
  do {
    if (param_9 <= iVar8) {
      return;
    }
    uVar9 = (iVar20 >> 8) + param_5;
    iVar16 = (int)uVar9 >> 8;
    if (((int)uVar9 < 0) || (param_2 <= iVar16)) {
LAB_ram_40053a28:
      *(undefined1 *)(param_11 + iVar8) = 0;
    }
    else {
      uVar13 = (iVar21 >> 8) + param_6;
      iVar11 = (int)uVar13 >> 8;
      if (((int)uVar13 < 0) || (param_3 <= iVar11)) goto LAB_ram_40053a28;
      if ((uVar9 & 0x80) == 0) {
        iVar7 = 0x7f - (uVar9 & 0xff);
        iVar5 = -1;
      }
      else {
        iVar7 = (uVar9 & 0xff) - 0x80;
        iVar5 = 1;
      }
      uVar9 = iVar7 * 2;
      if ((uVar13 & 0x80) == 0) {
        iVar12 = 0x7f - (uVar13 & 0xff);
        iVar14 = -1;
      }
      else {
        iVar12 = (uVar13 & 0xff) - 0x80;
        iVar14 = 1;
      }
      uVar13 = iVar12 * 2;
      iVar22 = iVar16 * 2 + param_4 * iVar11;
      iVar10 = param_1 + iVar22;
      *(undefined2 *)(param_10 + iVar8 * 2) = *(undefined2 *)(param_1 + iVar22);
      if ((((param_13 == '\0') || (iVar5 + iVar16 == -1)) || (param_2 <= iVar5 + iVar16)) ||
         ((iVar14 + iVar11 == -1 || (param_3 <= iVar14 + iVar11)))) {
        uVar6 = 0xff;
        if (param_12 != '\0') {
          uVar6 = (uint)*(byte *)(iVar19 + iVar18 * iVar11 + iVar16);
        }
        if (((((iVar16 == 0) && (iVar5 == -1)) || ((param_2 + -1 == iVar16 && (iVar5 == 1)))) ||
            ((uVar9 = uVar13, iVar11 == 0 && (iVar14 == -1)))) ||
           ((param_3 + -1 == iVar11 && (iVar14 == 1)))) {
          uVar6 = (int)((0xff - uVar9) * uVar6) >> 8;
        }
        *(char *)(param_11 + iVar8) = (char)uVar6;
      }
      else {
        sVar2 = *(short *)(iVar10 + iVar5 * 2);
        sVar3 = *(short *)(iVar10 + iVar14 * param_4);
        if (param_12 == '\0') {
          *(undefined1 *)(param_11 + iVar8) = 0xff;
        }
        else {
          iVar16 = iVar16 + iVar18 * iVar11;
          iVar11 = iVar19 + iVar16;
          bVar1 = *(byte *)(iVar19 + iVar16);
          uVar17 = (uint)bVar1;
          *(byte *)(param_11 + iVar8) = bVar1;
          uVar6 = (uint)*(byte *)(iVar11 + iVar5);
          uVar15 = (uint)*(byte *)(iVar11 + iVar14 * iVar18);
          if (uVar17 != uVar15) {
            uVar15 = (uVar15 * uVar13 + (iVar12 * -2 + 0x100) * uVar17 & 0xffff) >> 8;
          }
          if (uVar17 != uVar6) {
            uVar6 = (uVar6 * uVar9 + (iVar7 * -2 + 0x100) * uVar17 & 0xffff) >> 8;
          }
          iVar16 = (int)(uVar15 + uVar6) >> 1;
          *(char *)(param_11 + iVar8) = (char)iVar16;
          if (iVar16 == 0) goto LAB_ram_40053a2c;
        }
        sVar4 = *(short *)(param_10 + iVar8 * 2);
        if ((sVar4 != sVar3) || (sVar3 != sVar2)) {
          uVar13 = FUN_ram_4005393c(sVar3,sVar4,uVar13 & 0xfe);
          uVar9 = FUN_ram_4005393c(sVar2,sVar4,uVar9 & 0xfe);
          uVar13 = (uVar13 | uVar13 << 0x10) & 0x7e0f81f;
          uVar9 = ((((uVar9 << 0x10 | uVar9) & 0x7e0f81f) - uVar13 & 0xfffffff) >> 1) + uVar13 &
                  0x7e0f81f;
          *(ushort *)(param_10 + iVar8 * 2) = (ushort)uVar9 | (ushort)(uVar9 >> 0x10);
        }
      }
    }
LAB_ram_40053a2c:
    iVar8 = iVar8 + 1;
    iVar21 = iVar21 + param_8;
    iVar20 = iVar20 + param_7;
  } while( true );
}


/* NanoCore 1.12, address 0x40053bd2.
 * REA evidence: ev_05fbbe59e4afbb30892ebf6b7f8d82a443e319f83c6bc96c2dc304b87e1fc052
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40053c92) */
/* WARNING: Removing unreachable block (ram,0x40053bec) */
/* WARNING: Removing unreachable block (ram,0x40053c96) */

void FUN_ram_40053bd2(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
                     undefined4 param_6,int param_7,undefined4 param_8,char param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_f4;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [16];
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iStack_54 = -*(int *)(param_7 + 0x2c);
  iVar1 = iStack_54 / 10;
  uStack_5c = *(undefined4 *)(param_7 + 0x30);
  uStack_58 = *(undefined4 *)(param_7 + 0x34);
  iStack_48 = *(int *)(param_7 + 0x40);
  iStack_44 = *(int *)(param_7 + 0x44);
  iVar9 = iVar1 * -10 - *(int *)(param_7 + 0x2c);
  iVar2 = FUN_ram_4004b6b4((int)(short)iVar1);
  iVar3 = FUN_ram_4004b6b4((iVar1 + 1) * 0x10000 >> 0x10);
  iVar4 = FUN_ram_4004b6b4((iVar1 + 0x5a) * 0x10000 >> 0x10);
  iVar1 = FUN_ram_4004b6b4((iVar1 + 0x5b) * 0x10000 >> 0x10);
  iStack_60 = (iVar1 * iVar9 + (10 - iVar9) * iVar4) / 10 >> 5;
  iVar4 = param_2[1];
  iStack_50 = iStack_48 << 8;
  iStack_4c = iStack_44 << 8;
  iStack_64 = (iVar3 * iVar9 + (10 - iVar9) * iVar2) / 10 >> 5;
  iVar2 = (param_2[2] - *param_2) + 1;
  iVar1 = param_2[3];
  if (param_9 == '\x0f') {
    FUN_ram_4004adf8(0x10);
    iVar3 = 0;
  }
  else {
    if (param_9 == '\x14') {
      iStack_f4 = iVar2 * 2;
    }
    else {
      iVar3 = FUN_ram_4004adf8(param_9);
      iStack_f4 = (iVar3 + 7 >> 3) * iVar2;
      iVar3 = 0;
      if (param_9 != '\x12') goto LAB_ram_40053ce8;
    }
    iVar3 = param_10 + ((iVar1 - iVar4) + 1) * iStack_f4;
  }
LAB_ram_40053ce8:
  iVar9 = *(int *)(param_7 + 0x2c);
  if (iVar9 == 0) {
    iVar5 = param_2[1];
    iVar8 = (((param_4 + -1) - *(int *)(param_7 + 0x40)) * *(int *)(param_7 + 0x30) >> 8) +
            *(int *)(param_7 + 0x40);
    iVar6 = *param_2;
    iVar10 = param_2[2];
    if (iVar8 < param_2[2]) {
      iVar10 = iVar8;
    }
    if (iVar8 <= iVar6) {
      iVar6 = iVar8;
    }
    iVar7 = (((param_5 + -1) - *(int *)(param_7 + 0x44)) * *(int *)(param_7 + 0x34) >> 8) +
            *(int *)(param_7 + 0x44);
    iVar8 = param_2[3];
    if (iVar7 < param_2[3]) {
      iVar8 = iVar7;
    }
    if (iVar7 <= iVar5) {
      iVar5 = iVar7;
    }
    FUN_ram_4005388c(auStack_74,iVar6,iVar5,auStack_84,auStack_80);
    FUN_ram_4005388c(auStack_74,iVar10,iVar8,auStack_7c,auStack_78);
  }
  iVar10 = 0;
  while( true ) {
    if ((iVar1 - iVar4) + 1 <= iVar10) {
      return;
    }
    if (iVar9 != 0) {
      FUN_ram_4005388c(auStack_74,*param_2,param_2[1] + iVar10,auStack_84,auStack_80);
      FUN_ram_4005388c(auStack_74,param_2[2],param_2[1] + iVar10,auStack_7c,auStack_78);
    }
    if ((byte)(param_9 - 0xe) < 7) break;
    if (iVar3 != 0) {
      iVar3 = iVar3 + iVar2;
    }
    iVar10 = iVar10 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x40053e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_ram_4009e8b4 + *(int *)(&DAT_ram_4009e8b4 + (uint)(byte)(param_9 - 0xe) * 4)))();
  return;
}


