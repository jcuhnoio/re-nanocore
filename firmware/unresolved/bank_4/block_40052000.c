/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40052000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40052124.
 * REA evidence: ev_e3c9478bfed6da862f1280a54f7f9f4a1a2c4ac7d1cff139a089eab0df63c051
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052124(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if (0xb4 < param_4) {
    param_4 = (param_4 + -0xb4) * 0x10000 >> 0x10;
  }
  iVar1 = FUN_ram_4004a64a((param_4 + 0x5a) * 0x10000 >> 0x10);
  iVar2 = FUN_ram_4004a64a(param_4);
  FUN_ram_40051fe6(param_1,param_2,param_3,(iVar1 >> 5) + param_2,(iVar2 >> 5) + param_3,param_5);
  return;
}


/* NanoCore 1.10, address 0x40052182.
 * REA evidence: ev_6bd255b7a157ea054cba4e05d7a3a8f87fa0c0f653d8f9d32d45769bf223ef75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052182(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                     int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar4 = 0x167;
  if ((param_4 < 0x168) && (iVar4 = param_4, param_4 < 0)) {
    iVar4 = 0;
  }
  iVar3 = 0x167;
  if ((param_5 < 0x168) && (iVar3 = param_5, param_5 < 0)) {
    iVar3 = 0;
  }
  sVar2 = (short)iVar4;
  sVar1 = (short)iVar3;
  sVar5 = sVar1 - sVar2;
  if (iVar3 < iVar4) {
    sVar5 = (sVar1 + 0x168) - sVar2;
  }
  *(short *)(param_1 + 0x22) = sVar5;
  *param_1 = FUN_ram_40051a24;
  param_1[4] = iVar4;
  param_1[5] = iVar3;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_ram_40052124(param_1 + 6,param_2,param_3,(int)sVar2,0xb3 < param_4);
  FUN_ram_40052124(param_1 + 0x14,param_2,param_3,(int)sVar1,param_5 < 0xb4);
  return;
}


/* NanoCore 1.10, address 0x4005221c.
 * REA evidence: ev_99a43813260c984e3be641ecda26630841cbc307a8b974941bd88888c03a227d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005221c(undefined4 *param_1,int *param_2,int param_3,byte param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined2 *puVar15;
  int iVar16;
  int iVar17;
  ushort *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_40 [4];
  uint local_30;
  char cStack_2c;
  char cStack_28;
  char cStack_24;
  
  iVar16 = param_2[2];
  iVar11 = param_2[3];
  iVar7 = param_2[1];
  iVar13 = (iVar16 - *param_2) + 1;
  iVar5 = (iVar11 - iVar7) + 1;
  if (iVar13 < iVar5) {
    iVar5 = iVar13;
  }
  iVar13 = iVar5 >> 1;
  if (param_3 < iVar5 >> 1) {
    iVar13 = param_3;
  }
  iVar5 = 0;
  if (-1 < iVar13) {
    iVar5 = iVar13;
  }
  param_1[2] = *param_2;
  param_1[3] = iVar7;
  *param_1 = &LAB_ram_40051cb0;
  param_1[4] = iVar16;
  param_1[5] = iVar11;
  param_1[6] = iVar5;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe | param_4 & 1;
  *(undefined1 *)(param_1 + 1) = 2;
  if (iVar13 < 1) {
    param_1[8] = 0;
    return;
  }
  FUN_ram_40059b20(0x3007f9dc);
  puVar9 = &DAT_ram_3007f8e0;
  iVar7 = 0;
  do {
    if (*(int *)(puVar9 + 0x11c) == iVar5) {
      iVar11 = iVar7 * 0x1c;
      *(int *)(&DAT_ram_3007f9f8 + iVar11) = *(int *)(&DAT_ram_3007f9f8 + iVar11) + 1;
      iVar16 = 1;
      if (0xf < iVar13) {
        iVar16 = iVar5 >> 4;
      }
      iVar16 = *(int *)(&DAT_ram_3007f9f4 + iVar11) + iVar16;
      if (1000 < iVar16) {
        iVar16 = 1000;
      }
      *(int *)(&DAT_ram_3007f9f4 + iVar7 * 0x1c) = iVar16;
      param_1[8] = &DAT_ram_3007f9e4 + iVar7 * 0x1c;
      goto LAB_ram_4005231a;
    }
    iVar7 = iVar7 + 1;
    puVar9 = puVar9 + 0x1c;
  } while (iVar7 != 4);
  piVar14 = (int *)&DAT_ram_3007f9e4;
  piVar4 = (int *)0x0;
  do {
    piVar6 = piVar4;
    if (((piVar14[5] == 0) && (piVar6 = piVar14, piVar4 != (int *)0x0)) &&
       (piVar6 = piVar4, piVar14[4] < piVar4[4])) {
      piVar6 = piVar14;
    }
    piVar14 = piVar14 + 7;
    piVar4 = piVar6;
  } while (piVar14 != (int *)0x3007fa54);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)FUN_ram_40059bbc(0x1c);
    iVar7 = -1;
  }
  else {
    piVar6[5] = piVar6[5] + 1;
    iVar7 = 1;
    if (0xf < iVar13) {
      iVar7 = iVar5 >> 4;
    }
    if (1000 < iVar7) {
      iVar7 = 1000;
    }
  }
  piVar6[4] = iVar7;
  iVar7 = *piVar6;
  param_1[8] = piVar6;
  piVar6[6] = iVar5;
  if (iVar7 != 0) {
    FUN_ram_40059be4();
  }
  iVar7 = iVar5 + 1;
  uVar19 = iVar5 * 4;
  puVar9 = (undefined1 *)FUN_ram_40059bae(iVar7 * 6);
  piVar6[3] = (int)(puVar9 + iVar5 * 2 + 2);
  *piVar6 = (int)puVar9;
  piVar6[1] = (int)puVar9;
  piVar6[2] = (int)(puVar9 + uVar19 + 4);
  if (iVar13 == 1) {
    *puVar9 = 0xb4;
    puVar15 = (undefined2 *)piVar6[3];
    *puVar15 = 0;
    puVar15[1] = 1;
    *(undefined2 *)piVar6[2] = 0;
  }
  else {
    iVar16 = FUN_ram_40059bbc(iVar7 * 0x10);
    local_40[0] = (int)uVar19 >> 2;
    iVar12 = iVar16 + iVar7 * 8;
    iVar10 = iVar5 * -4 + 1;
    local_30 = 0;
    iVar13 = 0;
    iVar23 = 0;
    iVar7 = 0;
    iVar11 = 0;
    while( true ) {
      if (iVar10 < 1) {
        iVar10 = iVar10 + iVar23 * 2 + 3;
      }
      else {
        iVar10 = iVar10 + (iVar23 - uVar19) * 2 + 5;
        uVar19 = uVar19 - 1;
      }
      iVar23 = iVar23 + 1;
      if ((int)uVar19 < iVar23) break;
      local_40[iVar7] = (int)uVar19 >> 2;
      (&local_30)[iVar7] = uVar19 & 3;
      iVar7 = iVar7 + 1;
      if (iVar7 == 4) {
        iVar22 = piVar6[1];
        iVar17 = iVar11 * 4;
        pcVar1 = (char *)(iVar22 + iVar11);
        iVar7 = iVar11 + 1;
        if (local_40[0] == local_40[3]) {
          *(int *)(iVar16 + iVar11 * 4) = local_40[0];
          *(int *)(iVar12 + iVar11 * 4) = iVar13;
          *(char *)(iVar22 + iVar11) = (char)local_30 + cStack_2c + cStack_28 + cStack_24;
          *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
          iVar22 = iVar7;
        }
        else {
          iVar20 = iVar17 + 4;
          iVar21 = local_40[0] + -1;
          iVar22 = iVar11 + 2;
          if (local_40[0] == local_40[1]) {
            *(int *)(iVar16 + iVar17) = local_40[0];
            *(int *)(iVar12 + iVar17) = iVar13;
            if (local_40[0] == local_40[2]) {
              *pcVar1 = (char)local_30 + cStack_2c + cStack_28;
              *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
              *(int *)(iVar16 + iVar20) = iVar21;
              iVar11 = piVar6[1];
              *(int *)(iVar12 + iVar20) = iVar13;
              cVar8 = cStack_24 + '\f';
            }
            else {
              *pcVar1 = (char)local_30 + cStack_2c;
              *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
              *(int *)(iVar16 + iVar20) = iVar21;
              iVar11 = piVar6[1];
              *(int *)(iVar12 + iVar20) = iVar13;
              cVar8 = cStack_24 + cStack_28 + '\b';
            }
          }
          else {
            *(int *)(iVar16 + iVar17) = local_40[0];
            *(int *)(iVar12 + iVar17) = iVar13;
            *pcVar1 = (char)local_30;
            *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
            iVar11 = piVar6[1];
            *(int *)(iVar16 + iVar20) = iVar21;
            *(int *)(iVar12 + iVar20) = iVar13;
            cVar8 = cStack_28 + cStack_2c + '\x04' + cStack_24;
          }
          *(char *)(iVar11 + iVar7) = cVar8;
          *(char *)(piVar6[1] + iVar7) = *(char *)(piVar6[1] + iVar7) << 4;
        }
        iVar13 = iVar13 + 1;
        iVar7 = 0;
        iVar11 = iVar22;
      }
    }
    iVar7 = iVar11 + 0x3fffffff;
    iVar13 = iVar5 * 0x2d3 >> 10;
    if ((iVar13 != *(int *)(iVar16 + iVar7 * 4)) || (iVar13 != *(int *)(iVar12 + iVar7 * 4))) {
      uVar19 = iVar5 * 0x2d3 & 0x3ff;
      if (uVar19 < 0x201) {
        cVar8 = (char)(uVar19 * uVar19 >> 0xf);
      }
      else {
        cVar8 = '\x0f' - (char)((int)((0x400 - uVar19) * (0x400 - uVar19)) >> 0xf);
      }
      iVar5 = iVar7 * 4 + 4;
      *(int *)(iVar16 + iVar5) = iVar13;
      *(int *)(iVar12 + iVar5) = iVar13;
      *(char *)(piVar6[1] + iVar11) = cVar8;
      *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
      iVar11 = iVar11 + 1;
    }
    iVar5 = iVar11;
    for (iVar7 = iVar11 + -2; -1 < iVar7; iVar7 = iVar7 + -1) {
      *(undefined4 *)(iVar16 + iVar5 * 4) = *(undefined4 *)(iVar12 + iVar7 * 4);
      *(undefined4 *)(iVar12 + iVar5 * 4) = *(undefined4 *)(iVar16 + iVar7 * 4);
      *(undefined1 *)(piVar6[1] + iVar5) = *(undefined1 *)(piVar6[1] + iVar7);
      iVar5 = iVar5 + 1;
    }
    iVar5 = 0;
    if (0 < iVar11) {
      iVar5 = iVar11 + -1;
    }
    puVar15 = (undefined2 *)piVar6[3];
    iVar7 = 0;
    *puVar15 = 0;
    iVar13 = 0;
    while (iVar13 < iVar11 + iVar5) {
      iVar10 = piVar6[2];
      uVar2 = *(undefined4 *)(iVar16 + iVar13 * 4);
      puVar15[iVar7] = (short)iVar13;
      puVar18 = (ushort *)(iVar10 + iVar7 * 2);
      *(short *)(iVar10 + iVar7 * 2) = (short)uVar2;
      while ((iVar7 == *(int *)(iVar12 + iVar13 * 4) && (iVar13 != iVar11 + iVar5))) {
        uVar19 = *(uint *)(iVar16 + iVar13 * 4);
        uVar3 = (uint)*puVar18;
        iVar13 = iVar13 + 1;
        if ((int)uVar3 < (int)uVar19) {
          uVar19 = uVar3;
        }
        *puVar18 = (ushort)uVar19;
      }
      iVar7 = iVar7 + 1;
    }
    FUN_ram_40059be4();
  }
LAB_ram_4005231a:
  FUN_ram_40059b36(0x3007f9dc);
  return;
}


/* NanoCore 1.10, address 0x4005263a.
 * REA evidence: ev_a2ce418c5c0a6cca12d5d7afea83a5c16558494f42073973d639e8a72a87aa06
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005263a(int param_1,int param_2)

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
  
  iVar3 = FUN_ram_40049494(&iStack_74,param_2 + 0x1c,*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    puVar7 = *(undefined4 **)(param_1 + 8);
    puVar1 = *(undefined4 **)(param_1 + 4);
    uVar9 = *puVar1;
    FUN_ram_4004942c(auStack_64,*puVar7,puVar7[1],puVar7[2],*(int *)(param_2 + 0x20) + -1);
    FUN_ram_4004947a(auStack_64,-puVar1[1],-puVar1[2]);
    FUN_ram_4004cd68(uVar9,auStack_64);
    puVar7 = *(undefined4 **)(param_1 + 8);
    FUN_ram_4004942c(auStack_64,*puVar7,*(int *)(param_2 + 0x28) + 1,puVar7[2],puVar7[3]);
    FUN_ram_4004947a(auStack_64,-puVar1[1],-puVar1[2]);
    FUN_ram_4004cd68(uVar9,auStack_64);
    FUN_ram_4004942c(auStack_64,**(undefined4 **)(param_1 + 8),*(undefined4 *)(param_2 + 0x20),
                     *(int *)(param_2 + 0x1c) + -1,*(undefined4 *)(param_2 + 0x28));
    FUN_ram_4004947a(auStack_64,-puVar1[1],-puVar1[2]);
    FUN_ram_4004cd68(uVar9,auStack_64);
    FUN_ram_4004942c(auStack_64,*(int *)(param_2 + 0x24) + 1,*(undefined4 *)(param_2 + 0x20),
                     *(undefined4 *)(*(int *)(param_1 + 8) + 8),*(undefined4 *)(param_2 + 0x28));
    FUN_ram_4004947a(auStack_64,-puVar1[1],-puVar1[2]);
    FUN_ram_4004cd68(uVar9,auStack_64);
    FUN_ram_4005221c(auStack_54,param_2 + 0x1c,*(undefined4 *)(param_2 + 0x2c),0);
    uStack_78 = 0;
    uVar2 = (iStack_6c - iStack_74) + 1;
    puStack_7c = auStack_54;
    iVar4 = FUN_ram_40059bae(uVar2);
    for (iVar3 = iStack_70; iVar3 <= iStack_68; iVar3 = iVar3 + 1) {
      thunk_FUN_ram_4000505c(iVar4,0xff,uVar2);
      iVar5 = FUN_ram_40051f0c(&puStack_7c,iVar4,iStack_74,iVar3,uVar2);
      if (iVar5 != 1) {
        iVar6 = FUN_ram_4004c9f4(puVar1,iStack_74 - puVar1[1],iVar3 - puVar1[2]);
        if (iVar5 == 0) {
          thunk_FUN_ram_4000505c(iVar6,0,uVar2 * 4);
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
    FUN_ram_40059be4(iVar4);
    FUN_ram_40051f60(auStack_54);
  }
  return;
}


/* NanoCore 1.10, address 0x400527e6.
 * REA evidence: ev_a21d021a0dc46afcd61f68f319b7a57d315527c694f6ed2c32b1748a3189d3ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400527e6(uint param_1,uint param_2)

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


/* NanoCore 1.10, address 0x4005288a.
 * REA evidence: ev_a94b79b8ebc7af9558046d0afa0304aa6ca28b5557f811f3da9d1e42f08434d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005288a(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
LAB_ram_40052926:
      *(undefined1 *)((int)param_10 + 3) = 0;
    }
    else {
      uVar10 = (iVar15 >> 8) + param_6;
      iVar5 = (int)uVar10 >> 8;
      if (((int)uVar10 < 0) || (param_3 <= iVar5)) goto LAB_ram_40052926;
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
          uVar6 = FUN_ram_400527e6(uStack_44);
          *(char *)param_10 = (char)uVar6;
          *(char *)((int)param_10 + 1) = (char)((uint)uVar6 >> 8);
          *(char *)((int)param_10 + 2) = (char)((uint)uVar6 >> 0x10);
          *(char *)((int)param_10 + 3) = (char)((uint)uVar6 >> 0x18);
        }
        uStack_48._0_3_ = CONCAT12(uVar2,CONCAT11(uVar1,uVar3));
        uStack_48 = CONCAT13(0xff,(undefined3)uStack_48);
        if (*(int *)param_10 != uStack_48) {
          uStack_48 = CONCAT13((char)iVar4,(undefined3)uStack_48);
          uVar6 = FUN_ram_400527e6(uStack_48);
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


/* NanoCore 1.10, address 0x40052ae8.
 * REA evidence: ev_ec8347b72387b5dafff25805d69dcbe7c03e3edbeb4db5eb805d8df894f7b553
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052ae8(int param_1,int param_2,int param_3,int *param_4,int *param_5)

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


/* NanoCore 1.10, address 0x40052b98.
 * REA evidence: ev_77f7a73a4d8116fcc9fab1857be00ec516cd552d372b0365409e38ce3ef7c728
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40052b98(uint param_1,uint param_2,int param_3)

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


/* NanoCore 1.10, address 0x40052bd4.
 * REA evidence: ev_4bd2322249f03569bbfaf04484fc1393e876b7b25ed1b5e2ae63970321183e3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40052bda) */

void FUN_ram_40052bd4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
LAB_ram_40052c84:
      *(undefined1 *)(param_11 + iVar8) = 0;
    }
    else {
      uVar13 = (iVar21 >> 8) + param_6;
      iVar11 = (int)uVar13 >> 8;
      if (((int)uVar13 < 0) || (param_3 <= iVar11)) goto LAB_ram_40052c84;
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
          if (iVar16 == 0) goto LAB_ram_40052c88;
        }
        sVar4 = *(short *)(param_10 + iVar8 * 2);
        if ((sVar4 != sVar3) || (sVar3 != sVar2)) {
          uVar13 = FUN_ram_40052b98(sVar3,sVar4,uVar13 & 0xfe);
          uVar9 = FUN_ram_40052b98(sVar2,sVar4,uVar9 & 0xfe);
          uVar13 = (uVar13 | uVar13 << 0x10) & 0x7e0f81f;
          uVar9 = ((((uVar9 << 0x10 | uVar9) & 0x7e0f81f) - uVar13 & 0xfffffff) >> 1) + uVar13 &
                  0x7e0f81f;
          *(ushort *)(param_10 + iVar8 * 2) = (ushort)uVar9 | (ushort)(uVar9 >> 0x10);
        }
      }
    }
LAB_ram_40052c88:
    iVar8 = iVar8 + 1;
    iVar21 = iVar21 + param_8;
    iVar20 = iVar20 + param_7;
  } while( true );
}


/* NanoCore 1.10, address 0x40052e2e.
 * REA evidence: ev_5c7907d6acc54183e603294a0c4f23b2478a427b79dfb23765056283efa79e35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40052eee) */
/* WARNING: Removing unreachable block (ram,0x40052e48) */
/* WARNING: Removing unreachable block (ram,0x40052ef2) */

void FUN_ram_40052e2e(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
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
  iVar2 = FUN_ram_4004a64a((int)(short)iVar1);
  iVar3 = FUN_ram_4004a64a((iVar1 + 1) * 0x10000 >> 0x10);
  iVar4 = FUN_ram_4004a64a((iVar1 + 0x5a) * 0x10000 >> 0x10);
  iVar1 = FUN_ram_4004a64a((iVar1 + 0x5b) * 0x10000 >> 0x10);
  iStack_60 = (iVar1 * iVar9 + (10 - iVar9) * iVar4) / 10 >> 5;
  iVar4 = param_2[1];
  iStack_50 = iStack_48 << 8;
  iStack_4c = iStack_44 << 8;
  iStack_64 = (iVar3 * iVar9 + (10 - iVar9) * iVar2) / 10 >> 5;
  iVar2 = (param_2[2] - *param_2) + 1;
  iVar1 = param_2[3];
  if (param_9 == '\x0f') {
    FUN_ram_40049d8e(0x10);
    iVar3 = 0;
  }
  else {
    if (param_9 == '\x14') {
      iStack_f4 = iVar2 * 2;
    }
    else {
      iVar3 = FUN_ram_40049d8e(param_9);
      iStack_f4 = (iVar3 + 7 >> 3) * iVar2;
      iVar3 = 0;
      if (param_9 != '\x12') goto LAB_ram_40052f44;
    }
    iVar3 = param_10 + ((iVar1 - iVar4) + 1) * iStack_f4;
  }
LAB_ram_40052f44:
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
    FUN_ram_40052ae8(auStack_74,iVar6,iVar5,auStack_84,auStack_80);
    FUN_ram_40052ae8(auStack_74,iVar10,iVar8,auStack_7c,auStack_78);
  }
  iVar10 = 0;
  while( true ) {
    if ((iVar1 - iVar4) + 1 <= iVar10) {
      return;
    }
    if (iVar9 != 0) {
      FUN_ram_40052ae8(auStack_74,*param_2,param_2[1] + iVar10,auStack_84,auStack_80);
      FUN_ram_40052ae8(auStack_74,param_2[2],param_2[1] + iVar10,auStack_7c,auStack_78);
    }
    if ((byte)(param_9 - 0xe) < 7) break;
    if (iVar3 != 0) {
      iVar3 = iVar3 + iVar2;
    }
    iVar10 = iVar10 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x400530b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_ram_40097958 + *(int *)(&DAT_ram_40097958 + (uint)(byte)(param_9 - 0xe) * 4)))();
  return;
}


