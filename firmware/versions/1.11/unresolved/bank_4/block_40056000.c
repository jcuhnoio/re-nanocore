/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40056000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4005631e.
 * REA evidence: ev_42103b74232134455ffb34f29e56c6c10685b05f4a73043885a10c94f7ab255f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005631e(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  
  if (param_3 != 0) {
    if (param_3 < 0xfd) {
      uVar1 = ~param_3 & 0xff;
      *param_2 = (byte)(*param_1 * param_3 + *param_2 * uVar1 >> 8);
      param_2[1] = (byte)(param_2[1] * uVar1 + param_1[1] * param_3 >> 8);
      bVar2 = (byte)(param_2[2] * uVar1 + param_1[2] * param_3 >> 8);
    }
    else {
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      bVar2 = param_1[2];
    }
    param_2[2] = bVar2;
  }
  return;
}


/* NanoCore 1.11, address 0x40056386.
 * REA evidence: ev_6dd954294c1541549f1df751ad07a368afdb8852348e4b500e66e52efa6fc1d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056386(byte *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_21;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  uVar2 = param_2 & 0xff;
  uVar4 = (param_2 & 0xffff) >> 8;
  uVar3 = (param_2 & 0xffffff) >> 0x10;
  if (param_3 == 2) {
    iVar1 = *param_1 - uVar2;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    uStack_14 = (undefined1)iVar1;
    iVar1 = param_1[1] - uVar4;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    uStack_13 = (undefined1)iVar1;
    uVar3 = param_1[2] - uVar3;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
  }
  else if (param_3 == 3) {
    uStack_14 = (undefined1)(*param_1 * uVar2 >> 8);
    uStack_13 = (undefined1)(param_1[1] * uVar4 >> 8);
    uVar3 = (int)(param_1[2] * uVar3) >> 8;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    uVar2 = *param_1 + uVar2;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    uStack_14 = (undefined1)uVar2;
    uVar4 = param_1[1] + uVar4;
    if (0xff < uVar4) {
      uVar4 = 0xff;
    }
    uStack_13 = (undefined1)uVar4;
    uVar3 = uVar3 + param_1[2];
    if (0xff < uVar3) {
      uVar3 = 0xff;
    }
  }
  uStack_21 = (undefined1)(param_2 >> 0x18);
  uStack_12 = (undefined1)uVar3;
  FUN_ram_4005631e(&uStack_14,param_1,uStack_21);
  return;
}


/* NanoCore 1.11, address 0x40056458.
 * REA evidence: ev_2414254f393c6323944c260ce4e66f1193bbe8d6b9d2c6765b00eabf87e3f95b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056458(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined3 *puVar3;
  byte *pbVar4;
  byte bVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  undefined3 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_44;
  
  iVar12 = param_1[2];
  iVar11 = param_2 * param_1[1];
  bVar1 = *(byte *)((int)param_1 + 0x21);
  uVar13 = (uint)bVar1;
  puVar2 = (undefined1 *)*param_1;
  iVar14 = param_1[3];
  puVar3 = (undefined3 *)param_1[6];
  iVar15 = param_1[7];
  pbVar7 = (byte *)param_1[4];
  iVar16 = param_1[5];
  if (*(char *)((int)param_1 + 0x22) == '\0') {
    if (pbVar7 == (byte *)0x0) {
      if (uVar13 < 0xfd) {
        for (iVar16 = 0; iVar16 < iVar12; iVar16 = iVar16 + 1) {
          puVar9 = puVar3;
          for (iVar8 = 0; iVar8 < iVar11; iVar8 = iVar8 + param_2) {
            FUN_ram_4005631e(puVar9,puVar2 + iVar8,uVar13);
            puVar9 = (undefined3 *)((int)puVar9 + param_3);
          }
          puVar2 = puVar2 + iVar14;
          puVar3 = (undefined3 *)((int)puVar3 + iVar15);
        }
      }
      else {
        iVar16 = 0;
        if (param_2 == param_3) {
          for (iVar16 = 0; iVar16 < iVar12; iVar16 = iVar16 + 1) {
            thunk_FUN_ram_400050c6(puVar2,puVar3,iVar11);
            puVar2 = puVar2 + iVar14;
            puVar3 = (undefined3 *)((int)puVar3 + iVar15);
          }
        }
        else {
          for (; puVar9 = puVar3, puVar6 = puVar2, iVar16 < iVar12; iVar16 = iVar16 + 1) {
            for (; (int)puVar6 - (int)puVar2 < iVar11; puVar6 = puVar6 + param_2) {
              *puVar6 = *(undefined1 *)puVar9;
              puVar6[1] = *(undefined1 *)((int)puVar9 + 1);
              puVar6[2] = *(undefined1 *)((int)puVar9 + 2);
              puVar9 = (undefined3 *)((int)puVar9 + param_3);
            }
            puVar2 = puVar2 + iVar14;
            puVar3 = (undefined3 *)((int)puVar3 + iVar15);
          }
        }
      }
    }
    else if (uVar13 < 0xfd) {
      for (iVar8 = 0; iVar8 < iVar12; iVar8 = iVar8 + 1) {
        puVar9 = puVar3;
        pbVar4 = pbVar7;
        for (iVar10 = 0; iVar10 < iVar11; iVar10 = iVar10 + param_2) {
          FUN_ram_4005631e(puVar9,puVar2 + iVar10,*pbVar4 * uVar13 >> 8);
          puVar9 = (undefined3 *)((int)puVar9 + param_3);
          pbVar4 = pbVar4 + 1;
        }
        puVar2 = puVar2 + iVar14;
        puVar3 = (undefined3 *)((int)puVar3 + iVar15);
        pbVar7 = pbVar7 + iVar16;
      }
    }
    else {
      for (iVar8 = 0; iVar8 < iVar12; iVar8 = iVar8 + 1) {
        pbVar4 = pbVar7;
        puVar9 = puVar3;
        for (iVar10 = 0; iVar10 < iVar11; iVar10 = iVar10 + param_2) {
          FUN_ram_4005631e(puVar9,puVar2 + iVar10,*pbVar4);
          puVar9 = (undefined3 *)((int)puVar9 + param_3);
          pbVar4 = pbVar4 + 1;
        }
        puVar2 = puVar2 + iVar14;
        puVar3 = (undefined3 *)((int)puVar3 + iVar15);
        pbVar7 = pbVar7 + iVar16;
      }
    }
  }
  else {
    for (iVar8 = 0; iVar8 < iVar12; iVar8 = iVar8 + 1) {
      puVar9 = puVar3;
      for (iVar10 = 0; iVar10 < iVar11; iVar10 = iVar10 + param_2) {
        bVar5 = bVar1;
        if (pbVar7 != (byte *)0x0) {
          bVar5 = (byte)(pbVar7[iVar10] * uVar13 >> 8);
        }
        uStack_44 = CONCAT13(bVar5,*puVar9);
        FUN_ram_40056386(puVar2 + iVar10,uStack_44,*(undefined1 *)((int)param_1 + 0x22));
        puVar9 = (undefined3 *)((int)puVar9 + param_3);
      }
      if (pbVar7 != (byte *)0x0) {
        pbVar7 = pbVar7 + iVar16;
      }
      puVar2 = puVar2 + iVar14;
      puVar3 = (undefined3 *)((int)puVar3 + iVar15);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4005662a.
 * REA evidence: ev_566e88af7602e129418aaca1683b0e43d5bb15d357a2e828ed3502d0d147e7cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005662a(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  undefined4 uStack_34;
  
  pbVar11 = (byte *)param_1[4];
  uVar4 = param_1[1];
  iVar14 = param_1[2];
  uVar15 = (uint)*(byte *)((int)param_1 + 0x1b);
  iVar13 = param_1[3];
  if (pbVar11 == (byte *)0x0) {
    if (uVar15 < 0xfd) {
      uStack_34 = FUN_ram_4004ad84(param_1[6]);
      iVar6 = *param_1;
      for (iVar1 = 0; iVar1 < iVar14; iVar1 = iVar1 + 1) {
        for (iVar2 = 0; iVar2 < (int)(uVar4 * param_2); iVar2 = iVar2 + param_2) {
          FUN_ram_4005631e(&uStack_34,iVar6 + iVar2,uVar15);
        }
        iVar6 = iVar6 + iVar13;
      }
    }
    else if (param_2 == 3) {
      puVar12 = (undefined1 *)*param_1;
      for (puVar10 = puVar12; (int)puVar10 - (int)puVar12 < (int)(uVar4 * 3); puVar10 = puVar10 + 3)
      {
        *puVar10 = (char)param_1[6];
        puVar10[1] = *(undefined1 *)((int)param_1 + 0x19);
        puVar10[2] = *(undefined1 *)((int)param_1 + 0x1a);
      }
      puVar10 = puVar12;
      for (iVar1 = 1; puVar10 = puVar10 + iVar13, iVar1 < iVar14; iVar1 = iVar1 + 1) {
        thunk_FUN_ram_400050c6(puVar10,puVar12,uVar4 * 3);
      }
    }
    else if (param_2 == 4) {
      uVar5 = FUN_ram_4004ad84(param_1[6]);
      puVar7 = (undefined4 *)*param_1;
      uVar15 = 0;
      if (-1 < (int)uVar4) {
        uVar15 = uVar4 & 0xfffffff0;
      }
      for (iVar1 = 0; iVar1 < iVar14; iVar1 = iVar1 + 1) {
        puVar8 = puVar7;
        for (iVar6 = 0; uVar9 = uVar15, iVar6 < (int)(uVar4 - 0xf); iVar6 = iVar6 + 0x10) {
          *puVar8 = uVar5;
          puVar8[1] = uVar5;
          puVar8[2] = uVar5;
          puVar8[3] = uVar5;
          puVar8[4] = uVar5;
          puVar8[5] = uVar5;
          puVar8[6] = uVar5;
          puVar8[7] = uVar5;
          puVar8[8] = uVar5;
          puVar8[9] = uVar5;
          puVar8[10] = uVar5;
          puVar8[0xb] = uVar5;
          puVar8[0xc] = uVar5;
          puVar8[0xd] = uVar5;
          puVar8[0xe] = uVar5;
          puVar8[0xf] = uVar5;
          puVar8 = puVar8 + 0x10;
        }
        for (; (int)uVar9 < (int)uVar4; uVar9 = uVar9 + 1) {
          puVar7[uVar9] = uVar5;
        }
        puVar7 = (undefined4 *)((int)puVar7 + iVar13);
      }
    }
  }
  else {
    iVar1 = param_1[5];
    if (uVar15 < 0xfd) {
      uStack_34 = FUN_ram_4004ad84(param_1[6]);
      iVar2 = *param_1;
      for (iVar6 = 0; iVar6 < iVar14; iVar6 = iVar6 + 1) {
        pbVar16 = pbVar11;
        for (iVar3 = 0; iVar3 < (int)(uVar4 * param_2); iVar3 = iVar3 + param_2) {
          FUN_ram_4005631e(&uStack_34,iVar2 + iVar3,*pbVar16 * uVar15 >> 8);
          pbVar16 = pbVar16 + 1;
        }
        iVar2 = iVar2 + iVar13;
        pbVar11 = pbVar11 + iVar1;
      }
    }
    else {
      uStack_34 = FUN_ram_4004ad84(param_1[6]);
      iVar2 = *param_1;
      for (iVar6 = 0; iVar6 < iVar14; iVar6 = iVar6 + 1) {
        pbVar16 = pbVar11;
        for (iVar3 = 0; iVar3 < (int)(uVar4 * param_2); iVar3 = iVar3 + param_2) {
          FUN_ram_4005631e(&uStack_34,iVar2 + iVar3,*pbVar16);
          pbVar16 = pbVar16 + 1;
        }
        iVar2 = iVar2 + iVar13;
        pbVar11 = pbVar11 + iVar1;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400567e4.
 * REA evidence: ev_19fc598ec42b98afe17cb8c6046f0ce2b39a0299bc0d7e59f951a060615596be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400567e4(int *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uStack_44;
  
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 0x11) {
    uVar6 = 4;
LAB_ram_40056ad4:
    FUN_ram_40056458(param_1,param_2 & 0xff,uVar6);
    return;
  }
  if (bVar1 < 0x12) {
    if (bVar1 == 0xf) {
      uVar6 = 3;
      goto LAB_ram_40056ad4;
    }
    if (bVar1 == 0x10) {
      iVar14 = param_1[1];
      iVar15 = param_1[2];
      uVar12 = (uint)*(byte *)((int)param_1 + 0x21);
      iVar10 = *param_1;
      iVar16 = param_1[3];
      iVar4 = param_1[6];
      iVar17 = param_1[7];
      iVar11 = param_1[4];
      iVar18 = param_1[5];
      if (*(char *)((int)param_1 + 0x22) == '\0') {
        if (iVar11 == 0) {
          iVar11 = 0;
          if (uVar12 < 0xfd) {
            for (; iVar11 < iVar15; iVar11 = iVar11 + 1) {
              iVar2 = iVar4;
              iVar13 = iVar10;
              for (iVar18 = 0; iVar18 < iVar14; iVar18 = iVar18 + 1) {
                FUN_ram_4005631e(iVar2,iVar13,*(byte *)(iVar2 + 3) * uVar12 >> 8);
                iVar2 = iVar2 + 4;
                iVar13 = iVar13 + param_2;
              }
              iVar10 = iVar10 + iVar16;
              iVar4 = iVar4 + iVar17;
            }
          }
          else {
            for (iVar11 = 0; iVar11 < iVar15; iVar11 = iVar11 + 1) {
              iVar2 = iVar4;
              iVar13 = iVar10;
              for (iVar18 = 0; iVar18 < iVar14; iVar18 = iVar18 + 1) {
                FUN_ram_4005631e(iVar2,iVar13,*(undefined1 *)(iVar2 + 3));
                iVar2 = iVar2 + 4;
                iVar13 = iVar13 + param_2;
              }
              iVar10 = iVar10 + iVar16;
              iVar4 = iVar4 + iVar17;
            }
          }
        }
        else if (uVar12 < 0xfd) {
          for (iVar2 = 0; iVar2 < iVar15; iVar2 = iVar2 + 1) {
            iVar13 = iVar10;
            iVar19 = iVar4;
            for (iVar3 = 0; iVar3 < iVar14; iVar3 = iVar3 + 1) {
              FUN_ram_4005631e(iVar19,iVar13,
                               (uint)*(byte *)(iVar19 + 3) * (uint)*(byte *)(iVar11 + iVar3) *
                               uVar12 >> 0x10);
              iVar13 = iVar13 + param_2;
              iVar19 = iVar19 + 4;
            }
            iVar10 = iVar10 + iVar16;
            iVar4 = iVar4 + iVar17;
            iVar11 = iVar11 + iVar18;
          }
        }
        else {
          for (iVar2 = 0; iVar2 < iVar15; iVar2 = iVar2 + 1) {
            iVar19 = iVar4;
            iVar3 = iVar10;
            for (iVar13 = 0; iVar13 < iVar14; iVar13 = iVar13 + 1) {
              FUN_ram_4005631e(iVar19,iVar3,
                               (uint)*(byte *)(iVar19 + 3) * (uint)*(byte *)(iVar11 + iVar13) >> 8);
              iVar19 = iVar19 + 4;
              iVar3 = iVar3 + param_2;
            }
            iVar10 = iVar10 + iVar16;
            iVar4 = iVar4 + iVar17;
            iVar11 = iVar11 + iVar18;
          }
        }
      }
      else {
        for (iVar2 = 0; iVar2 < iVar15; iVar2 = iVar2 + 1) {
          iVar19 = 0;
          iVar3 = iVar4;
          for (iVar13 = 0; iVar13 < iVar14; iVar13 = iVar13 + 1) {
            FUN_ram_4000304c(&uStack_44,iVar3,4);
            if (iVar11 == 0) {
              uVar8 = (undefined1)(*(byte *)(iVar3 + 3) * uVar12 >> 8);
            }
            else {
              uVar8 = (undefined1)
                      ((uint)*(byte *)(iVar11 + iVar19) * (uint)*(byte *)(iVar3 + 3) * uVar12 >>
                      0x10);
            }
            uStack_44 = CONCAT13(uVar8,(undefined3)uStack_44);
            FUN_ram_40056386(iVar10 + iVar19,uStack_44,*(undefined1 *)((int)param_1 + 0x22));
            iVar19 = iVar19 + param_2;
            iVar3 = iVar3 + 4;
          }
          if (iVar11 != 0) {
            iVar11 = iVar11 + iVar18;
          }
          iVar10 = iVar10 + iVar16;
          iVar4 = iVar4 + iVar17;
        }
      }
    }
  }
  else if (bVar1 == 0x12) {
    iVar11 = param_1[1];
    iVar14 = param_1[2];
    bVar1 = *(byte *)((int)param_1 + 0x21);
    uVar12 = (uint)bVar1;
    puVar9 = (undefined1 *)*param_1;
    iVar15 = param_1[3];
    iVar4 = param_1[6];
    iVar16 = param_1[7];
    iVar10 = param_1[4];
    iVar17 = param_1[5];
    if (*(char *)((int)param_1 + 0x22) == '\0') {
      if (iVar10 == 0) {
        if (uVar12 < 0xfd) {
          for (iVar10 = 0; iVar10 < iVar14; iVar10 = iVar10 + 1) {
            puVar5 = puVar9;
            for (iVar17 = 0; iVar17 < iVar11; iVar17 = iVar17 + 1) {
              uStack_44 = CONCAT31(CONCAT21(CONCAT11(uStack_44._3_1_,
                                                     (char)((uint)(*(ushort *)(iVar4 + iVar17 * 2)
                                                                  >> 0xb) * 0x83a >> 8)),
                                            (char)(((*(ushort *)(iVar4 + iVar17 * 2) & 0x7ff) >> 5)
                                                   * 0x40d >> 8)),
                                   (char)((*(ushort *)(iVar4 + iVar17 * 2) & 0x1f) * 0x83a >> 8));
              FUN_ram_4005631e(&uStack_44,puVar5,uVar12);
              puVar5 = puVar5 + param_2;
            }
            puVar9 = puVar9 + iVar15;
            iVar4 = iVar4 + iVar16;
          }
        }
        else {
          for (iVar10 = 0; iVar10 < iVar14; iVar10 = iVar10 + 1) {
            puVar5 = puVar9;
            for (iVar17 = 0; iVar17 < iVar11; iVar17 = iVar17 + 1) {
              puVar5[2] = (char)((uint)(*(ushort *)(iVar4 + iVar17 * 2) >> 0xb) * 0x83a >> 8);
              puVar5[1] = (char)(((*(ushort *)(iVar4 + iVar17 * 2) & 0x7ff) >> 5) * 0x40d >> 8);
              *puVar5 = (char)((*(ushort *)(iVar4 + iVar17 * 2) & 0x1f) * 0x83a >> 8);
              puVar5 = puVar5 + param_2;
            }
            puVar9 = puVar9 + iVar15;
            iVar4 = iVar4 + iVar16;
          }
        }
      }
      else if (uVar12 < 0xfd) {
        for (iVar18 = 0; iVar18 < iVar14; iVar18 = iVar18 + 1) {
          puVar5 = puVar9;
          for (iVar2 = 0; iVar2 < iVar11; iVar2 = iVar2 + 1) {
            uStack_44 = CONCAT31(CONCAT21(CONCAT11(uStack_44._3_1_,
                                                   (char)((uint)(*(ushort *)(iVar4 + iVar2 * 2) >>
                                                                0xb) * 0x83a >> 8)),
                                          (char)(((*(ushort *)(iVar4 + iVar2 * 2) & 0x7ff) >> 5) *
                                                 0x40d >> 8)),
                                 (char)((*(ushort *)(iVar4 + iVar2 * 2) & 0x1f) * 0x83a >> 8));
            FUN_ram_4005631e(&uStack_44,puVar5,*(byte *)(iVar10 + iVar2) * uVar12 >> 8);
            puVar5 = puVar5 + param_2;
          }
          puVar9 = puVar9 + iVar15;
          iVar4 = iVar4 + iVar16;
          iVar10 = iVar10 + iVar17;
        }
      }
      else {
        for (iVar18 = 0; iVar18 < iVar14; iVar18 = iVar18 + 1) {
          puVar5 = puVar9;
          for (iVar2 = 0; iVar2 < iVar11; iVar2 = iVar2 + 1) {
            uStack_44 = CONCAT31(CONCAT21(CONCAT11(uStack_44._3_1_,
                                                   (char)((uint)(*(ushort *)(iVar4 + iVar2 * 2) >>
                                                                0xb) * 0x83a >> 8)),
                                          (char)(((*(ushort *)(iVar4 + iVar2 * 2) & 0x7ff) >> 5) *
                                                 0x40d >> 8)),
                                 (char)((*(ushort *)(iVar4 + iVar2 * 2) & 0x1f) * 0x83a >> 8));
            FUN_ram_4005631e(&uStack_44,puVar5,*(undefined1 *)(iVar10 + iVar2));
            puVar5 = puVar5 + param_2;
          }
          puVar9 = puVar9 + iVar15;
          iVar4 = iVar4 + iVar16;
          iVar10 = iVar10 + iVar17;
        }
      }
    }
    else {
      for (iVar18 = 0; iVar18 < iVar14; iVar18 = iVar18 + 1) {
        puVar5 = puVar9;
        for (iVar2 = 0; iVar2 < iVar11; iVar2 = iVar2 + 1) {
          bVar7 = bVar1;
          if (iVar10 != 0) {
            bVar7 = (byte)(*(byte *)(iVar10 + iVar2) * uVar12 >> 8);
          }
          uStack_44 = CONCAT13(bVar7,(int3)CONCAT31(CONCAT21((short)((uint)(*(ushort *)
                                                                             (iVar4 + iVar2 * 2) >>
                                                                           0xb) * 0x83a >> 8),
                                                             (char)(((*(ushort *)(iVar4 + iVar2 * 2)
                                                                     & 0x7ff) >> 5) * 0x40d >> 8)),
                                                    (char)((*(ushort *)(iVar4 + iVar2 * 2) & 0x1f) *
                                                           0x83a >> 8)));
          FUN_ram_40056386(puVar5,uStack_44,*(undefined1 *)((int)param_1 + 0x22));
          puVar5 = puVar5 + param_2;
        }
        if (iVar10 != 0) {
          iVar10 = iVar10 + iVar17;
        }
        puVar9 = puVar9 + iVar15;
        iVar4 = iVar4 + iVar16;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40056c6c.
 * REA evidence: ev_3283a80c450ac8d18db4822416bcfb761c81a861b1b12bcdf355c4671de6c0b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40056c6c(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_30080d20 == (code *)0x0) {
    DAT_ram_30080d1c = 1;
    return _DAT_ram_30080d18;
  }
                    /* WARNING: Could not recover jumptable at 0x40056c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*_DAT_ram_30080d20)();
  return uVar1;
}


/* NanoCore 1.11, address 0x40056c92.
 * REA evidence: ev_a492d7067b7e97187806b6d5b092771275b8b0ace5adcf2850d475876a2e06c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40056c92(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40056c6c();
  return iVar1 - param_1;
}


/* NanoCore 1.11, address 0x40056ca8.
 * REA evidence: ev_66b5217a1d3aafc1517a1515247e76472144c5a16912f14b56dde246b173a9fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056ca8(undefined4 param_1)

{
  _DAT_ram_30080d20 = param_1;
  return;
}


/* NanoCore 1.11, address 0x40056cb2.
 * REA evidence: ev_14238ab1ff2dd6431ea90a4b5d827c3aae5b2d1b987ff9a17c1cf646f67ce405
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056cb2(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004b518();
    return;
  }
  FUN_ram_4004b524(0x30080ca4);
  return;
}


/* NanoCore 1.11, address 0x40056cc6.
 * REA evidence: ev_2efaba99f218b735c34e0ddd276ead9fd357581737f9b5ba0610443cf538790c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40056cc6(void)

{
  return _DAT_ram_30080cb0;
}


/* NanoCore 1.11, address 0x40056cd0.
 * REA evidence: ev_3959e4e04ac156fe4053b78e8ff04b3f3ba923e752d6cdbed94b708e2d25bfec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40056cd0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40056cda.
 * REA evidence: ev_7d177b555eed00ef5cf9b78f2709a791283b421781c5b81af6a61c75dea9fc3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40056cda(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xac);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40056ce2.
 * REA evidence: ev_6acb442fd168dfa15376a25e35e9a8eb4228d6dfb0a1cf37ce57bed0ad4eb373
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40056ce2(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != (uint *)0x0) && (uVar1 = 0, (*param_1 & 0xfffffffd) == 1)) {
    uVar1 = param_1[0x27] & 0xf;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40056cfc.
 * REA evidence: ev_ccf565e0bb7850513f32504e85043cdd3608ecb56addebfde189d22c1671d56a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40056cfc(uint *param_1)

{
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0xfffffffd) == 1)) {
    return param_1[0x1e];
  }
  return 0;
}


/* NanoCore 1.11, address 0x40056d10.
 * REA evidence: ev_17ea08a8d9c512209ef9f6c34b586ca9c1595c1a652b9938a6222e27487891a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056d10(int param_1)

{
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
  return;
}


/* NanoCore 1.11, address 0x40056d20.
 * REA evidence: ev_288632aa0fb06f542082d118b94164bc1da2c9e3d1db2b9e1eb0085b410c7939
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40056d20(void)

{
  return _DAT_ram_30080cb4;
}


/* NanoCore 1.11, address 0x40056d2a.
 * REA evidence: ev_8d1909a41f004b2e84c37b148660f09a1944436d2b17274f9690970fe6ab2aea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056d2a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  thunk_FUN_ram_4000504c(&iStack_2c,0,0x1c);
  iStack_2c = param_1;
  iStack_28 = param_1;
  uStack_24 = param_2;
  uStack_1c = param_3;
  iVar1 = FUN_ram_4004adc2(param_1 + 0xb4,&iStack_2c,1);
  if (iVar1 == 1) {
    FUN_ram_4004adc2(param_1 + 0xb4,&iStack_2c,0);
  }
  return;
}


/* NanoCore 1.11, address 0x40056d76.
 * REA evidence: ev_ed97dc56e4a9755f3fe1c2b24e3c569bd798b52623be12eac2b15cbc3dab471b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056d76(int *param_1,int param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
  if (_DAT_ram_30080cb0 == param_1) {
    _DAT_ram_30080cb4 = 0;
  }
  if (1 < *param_1 - 1U) {
    return;
  }
  iVar1 = param_1[0x1c];
  if ((((param_2 == 0) || (param_2 == param_1[0x1f])) && (param_1[0x1f] = 0, param_2 == 0)) ||
     (param_2 == iVar1)) {
    if (iVar1 != 0) {
      param_1[0x1c] = 0;
      FUN_ram_40044b50(iVar1,0x14,param_1);
      FUN_ram_40056d2a(param_1,0x14,iVar1);
    }
    if (param_2 != 0) goto LAB_ram_40056dc4;
LAB_ram_40056dca:
    param_1[0x1d] = 0;
    if (param_2 == 0) goto LAB_ram_40056dd6;
  }
  else {
LAB_ram_40056dc4:
    if (param_2 == param_1[0x1d]) goto LAB_ram_40056dca;
  }
  if (param_2 != param_1[0x1e]) {
    return;
  }
LAB_ram_40056dd6:
  iVar1 = param_1[0x1e];
  if (iVar1 == 0) {
    return;
  }
  param_1[0x1e] = 0;
  FUN_ram_40044b50(iVar1,0x14,param_1);
  FUN_ram_40056d2a(param_1,0x14,0);
  return;
}


/* NanoCore 1.11, address 0x40056e2a.
 * REA evidence: ev_4c94c7040d3881368ba0c49314c6e5b9c238bfb612cb04d5b763393d78794030
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056e2a(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_ram_40056d76();
    return;
  }
  for (iVar1 = FUN_ram_4004b518(0x30080ca4); iVar1 != 0; iVar1 = FUN_ram_40056cb2(iVar1)) {
    FUN_ram_40056d76(iVar1,param_2);
  }
  _DAT_ram_30080cb4 = 0;
  return;
}


/* NanoCore 1.11, address 0x40056e66.
 * REA evidence: ev_75b33a7071550e25973f65113d474ba1dc8b21d249d8bb815d66755e2018e342
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056e66(void)

{
  _DAT_ram_30080cbc = FUN_ram_4005ab20(_DAT_ram_30080cb8 << 3);
  return;
}


/* NanoCore 1.11, address 0x40056e86.
 * REA evidence: ev_071ed0324c20d316effd539cd08357c613338a2f88088c3e81deb3bde81027ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056e86(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40047a70(param_1,0,0x16);
  uVar1 = uVar1 & 0xffff;
  if ((uVar1 != 0) && (uVar1 <= _DAT_ram_30080cb8)) {
                    /* WARNING: Could not recover jumptable at 0x40056ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_30080cbc + uVar1 * 8))
              (param_1,*(undefined4 *)(_DAT_ram_30080cbc + uVar1 * 8 + 4));
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40056f7e.
 * REA evidence: ev_0fde0c202f6e05525ad933a1a5d16985bec2e029ec148cedb70732d76a055644
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40056f7e(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400440dc(&PTR_DAT_ram_40099398_ram_40099810,param_1);
  FUN_ram_40044212();
  return uVar1;
}


/* NanoCore 1.11, address 0x40056f9e.
 * REA evidence: ev_535429b07ac3274f56dd17a45777d11edbad2a989266e1be1fedc2b512143ea9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056f9e(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x58) & 0xff) >> 7 != param_2) {
    *(ushort *)(param_1 + 0x58) =
         (ushort)((param_2 & 1) << 7) | *(ushort *)(param_1 + 0x58) & 0xff7f;
    FUN_ram_400454e4();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40056fc0.
 * REA evidence: ev_550637952d6d71605a1607c3c79ed37e5c34d83f17a159e71ccd30ea4754a4fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40056fc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


/* NanoCore 1.11, address 0x40056fc4.
 * REA evidence: ev_8b7be0161f3a76e501f3249835cb3cc10257d6939eb32cfdeb62d8d2dd24d236
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40056ffa) */
/* WARNING: Removing unreachable block (ram,0x40057036) */

void FUN_ram_40056fc4(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (((uVar1 & 0x60000000) == 0x20000000) && (uVar2 = uVar1 & 0x9fffffff, (int)uVar2 < 0x7d1)) {
    if (1000 < (int)uVar2) {
      uVar2 = 1000 - uVar2;
    }
    uVar1 = (int)(*(int *)(param_1 + 0x3c) * uVar2) / 100;
  }
  *param_2 = uVar1;
  uVar1 = *(uint *)(param_1 + 0x54);
  if (((uVar1 & 0x60000000) == 0x20000000) && (uVar2 = uVar1 & 0x9fffffff, (int)uVar2 < 0x7d1)) {
    if (1000 < (int)uVar2) {
      uVar2 = 1000 - uVar2;
    }
    uVar1 = (int)(*(int *)(param_1 + 0x40) * uVar2) / 100;
  }
  param_2[1] = uVar1;
  return;
}


