/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40056000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40056150.
 * REA evidence: ev_ca36eec958212369151ad17d95e213554b9a93704b3d3a0e910b184de3ce464a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056150(byte *param_1,byte *param_2,uint param_3)

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


/* NanoCore 1.12, address 0x400561b8.
 * REA evidence: ev_0cb27bca32b4f12fb48462a2f07880b011b1a1ef9e6f29db02cb803b8fe4e153
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400561b8(byte *param_1,uint param_2,int param_3)

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
  FUN_ram_40056150(&uStack_14,param_1,uStack_21);
  return;
}


/* NanoCore 1.12, address 0x4005628a.
 * REA evidence: ev_e10f58a0b51392356ba19ee5aab75921f23229d03b240bf3d8d8deb729ff4f31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005628a(undefined4 *param_1,int param_2,int param_3)

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
            FUN_ram_40056150(puVar9,puVar2 + iVar8,uVar13);
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
            thunk_FUN_ram_4000500c(puVar2,puVar3,iVar11);
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
          FUN_ram_40056150(puVar9,puVar2 + iVar10,*pbVar4 * uVar13 >> 8);
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
          FUN_ram_40056150(puVar9,puVar2 + iVar10,*pbVar4);
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
        FUN_ram_400561b8(puVar2 + iVar10,uStack_44,*(undefined1 *)((int)param_1 + 0x22));
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


/* NanoCore 1.12, address 0x4005645c.
 * REA evidence: ev_82bd47887faaa27376b4ff138b8d53a489ab19a8351816475920008915123c08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005645c(int *param_1,int param_2)

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
      uStack_34 = FUN_ram_4004ae7c(param_1[6]);
      iVar6 = *param_1;
      for (iVar1 = 0; iVar1 < iVar14; iVar1 = iVar1 + 1) {
        for (iVar2 = 0; iVar2 < (int)(uVar4 * param_2); iVar2 = iVar2 + param_2) {
          FUN_ram_40056150(&uStack_34,iVar6 + iVar2,uVar15);
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
        thunk_FUN_ram_4000500c(puVar10,puVar12,uVar4 * 3);
      }
    }
    else if (param_2 == 4) {
      uVar5 = FUN_ram_4004ae7c(param_1[6]);
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
      uStack_34 = FUN_ram_4004ae7c(param_1[6]);
      iVar2 = *param_1;
      for (iVar6 = 0; iVar6 < iVar14; iVar6 = iVar6 + 1) {
        pbVar16 = pbVar11;
        for (iVar3 = 0; iVar3 < (int)(uVar4 * param_2); iVar3 = iVar3 + param_2) {
          FUN_ram_40056150(&uStack_34,iVar2 + iVar3,*pbVar16 * uVar15 >> 8);
          pbVar16 = pbVar16 + 1;
        }
        iVar2 = iVar2 + iVar13;
        pbVar11 = pbVar11 + iVar1;
      }
    }
    else {
      uStack_34 = FUN_ram_4004ae7c(param_1[6]);
      iVar2 = *param_1;
      for (iVar6 = 0; iVar6 < iVar14; iVar6 = iVar6 + 1) {
        pbVar16 = pbVar11;
        for (iVar3 = 0; iVar3 < (int)(uVar4 * param_2); iVar3 = iVar3 + param_2) {
          FUN_ram_40056150(&uStack_34,iVar2 + iVar3,*pbVar16);
          pbVar16 = pbVar16 + 1;
        }
        iVar2 = iVar2 + iVar13;
        pbVar11 = pbVar11 + iVar1;
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40056616.
 * REA evidence: ev_dd6ac225efb1e90ab724dc3147f2ad77a8ad836b0a091e79640d1b73d2806fc5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056616(int *param_1,uint param_2)

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
LAB_ram_40056906:
    FUN_ram_4005628a(param_1,param_2 & 0xff,uVar6);
    return;
  }
  if (bVar1 < 0x12) {
    if (bVar1 == 0xf) {
      uVar6 = 3;
      goto LAB_ram_40056906;
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
                FUN_ram_40056150(iVar2,iVar13,*(byte *)(iVar2 + 3) * uVar12 >> 8);
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
                FUN_ram_40056150(iVar2,iVar13,*(undefined1 *)(iVar2 + 3));
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
              FUN_ram_40056150(iVar19,iVar13,
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
              FUN_ram_40056150(iVar19,iVar3,
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
            FUN_ram_4000303c(&uStack_44,iVar3,4);
            if (iVar11 == 0) {
              uVar8 = (undefined1)(*(byte *)(iVar3 + 3) * uVar12 >> 8);
            }
            else {
              uVar8 = (undefined1)
                      ((uint)*(byte *)(iVar11 + iVar19) * (uint)*(byte *)(iVar3 + 3) * uVar12 >>
                      0x10);
            }
            uStack_44 = CONCAT13(uVar8,(undefined3)uStack_44);
            FUN_ram_400561b8(iVar10 + iVar19,uStack_44,*(undefined1 *)((int)param_1 + 0x22));
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
              FUN_ram_40056150(&uStack_44,puVar5,uVar12);
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
            FUN_ram_40056150(&uStack_44,puVar5,*(byte *)(iVar10 + iVar2) * uVar12 >> 8);
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
            FUN_ram_40056150(&uStack_44,puVar5,*(undefined1 *)(iVar10 + iVar2));
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
          FUN_ram_400561b8(puVar5,uStack_44,*(undefined1 *)((int)param_1 + 0x22));
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


/* NanoCore 1.12, address 0x40056a9e.
 * REA evidence: ev_40b9c79af95c0edad180c6be37e4e5308f38be7219c84d76437f0791eaf4d895
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40056a9e(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_30080da0 == (code *)0x0) {
    DAT_ram_30080d9c = 1;
    return _DAT_ram_30080d98;
  }
                    /* WARNING: Could not recover jumptable at 0x40056aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*_DAT_ram_30080da0)();
  return uVar1;
}


/* NanoCore 1.12, address 0x40056ac4.
 * REA evidence: ev_99f39c7c2adedc2f87c68ffc7f45c0f04a48f6987e46fcb8b31d74653282c60e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40056ac4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40056a9e();
  return iVar1 - param_1;
}


/* NanoCore 1.12, address 0x40056ada.
 * REA evidence: ev_79191ad8498e724a835cb2d565fc6c4b5ae85070674932766a16c1669d3ec2a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056ada(undefined4 param_1)

{
  _DAT_ram_30080da0 = param_1;
  return;
}


/* NanoCore 1.12, address 0x40056ae4.
 * REA evidence: ev_98c9fe46a2b5b8ea7dd400a0e2ffd55fc5d251c677c7ab4e9661b0b9684f7d1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056ae4(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004b610();
    return;
  }
  FUN_ram_4004b61c(0x30080d24);
  return;
}


/* NanoCore 1.12, address 0x40056af8.
 * REA evidence: ev_07f916a14c8aa2cf4614a9a4dfc1d21ac899c21fb20accddbb09aa55fee5a7d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40056af8(void)

{
  return _DAT_ram_30080d30;
}


/* NanoCore 1.12, address 0x40056b02.
 * REA evidence: ev_c0aad08cfe3b9eef952298f8195cb251d6720c63f19ff1383b1b74a53ad1bd3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40056b02(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40056b0c.
 * REA evidence: ev_e867078d6ce71667d7b36a86a31113c6d264ca3b2081df07ff75b320bf14c69b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40056b0c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xac);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40056b14.
 * REA evidence: ev_7acd7d7e6731fd3d54acd434d86ee96466008a50da3a8dc58f551ca676276cc8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40056b14(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != (uint *)0x0) && (uVar1 = 0, (*param_1 & 0xfffffffd) == 1)) {
    uVar1 = param_1[0x27] & 0xf;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40056b2e.
 * REA evidence: ev_e849abd76ec11a808702b26ec32baf5ce386b64b850629114af0bf5cb00c0b11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40056b2e(uint *param_1)

{
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0xfffffffd) == 1)) {
    return param_1[0x1e];
  }
  return 0;
}


/* NanoCore 1.12, address 0x40056b42.
 * REA evidence: ev_a273cfc965b9d8dfab1d2c58d69f7549040835daf879efd16dcbd4f242c50a3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056b42(int param_1)

{
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
  return;
}


/* NanoCore 1.12, address 0x40056b52.
 * REA evidence: ev_a47ef9b2029be66e71d4058554c0b72d938d7c7a1186afa32ea59e3c1c49dab2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40056b52(void)

{
  return _DAT_ram_30080d34;
}


/* NanoCore 1.12, address 0x40056b5c.
 * REA evidence: ev_78b562202c37dfea6c7ff339d9ac88ac9b4727aa1bf0733ed7915cfd2a7f1a88
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056b5c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  thunk_FUN_ram_40004f92(&iStack_2c,0,0x1c);
  iStack_2c = param_1;
  iStack_28 = param_1;
  uStack_24 = param_2;
  uStack_1c = param_3;
  iVar1 = FUN_ram_4004aeba(param_1 + 0xb4,&iStack_2c,1);
  if (iVar1 == 1) {
    FUN_ram_4004aeba(param_1 + 0xb4,&iStack_2c,0);
  }
  return;
}


/* NanoCore 1.12, address 0x40056ba8.
 * REA evidence: ev_ce161d9c29673161f1cce3d04893c624bd538d157b63e148e273bb3585abc905
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056ba8(int *param_1,int param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
  if (_DAT_ram_30080d30 == param_1) {
    _DAT_ram_30080d34 = 0;
  }
  if (1 < *param_1 - 1U) {
    return;
  }
  iVar1 = param_1[0x1c];
  if ((((param_2 == 0) || (param_2 == param_1[0x1f])) && (param_1[0x1f] = 0, param_2 == 0)) ||
     (param_2 == iVar1)) {
    if (iVar1 != 0) {
      param_1[0x1c] = 0;
      FUN_ram_40044c48(iVar1,0x14,param_1);
      FUN_ram_40056b5c(param_1,0x14,iVar1);
    }
    if (param_2 != 0) goto LAB_ram_40056bf6;
LAB_ram_40056bfc:
    param_1[0x1d] = 0;
    if (param_2 == 0) goto LAB_ram_40056c08;
  }
  else {
LAB_ram_40056bf6:
    if (param_2 == param_1[0x1d]) goto LAB_ram_40056bfc;
  }
  if (param_2 != param_1[0x1e]) {
    return;
  }
LAB_ram_40056c08:
  iVar1 = param_1[0x1e];
  if (iVar1 == 0) {
    return;
  }
  param_1[0x1e] = 0;
  FUN_ram_40044c48(iVar1,0x14,param_1);
  FUN_ram_40056b5c(param_1,0x14,0);
  return;
}


/* NanoCore 1.12, address 0x40056c5c.
 * REA evidence: ev_b42ca23a70f9baa75a3a3e77a85efc73788ae6aa84b78c7a362c545798b6b953
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056c5c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_ram_40056ba8();
    return;
  }
  for (iVar1 = FUN_ram_4004b610(0x30080d24); iVar1 != 0; iVar1 = FUN_ram_40056ae4(iVar1)) {
    FUN_ram_40056ba8(iVar1,param_2);
  }
  _DAT_ram_30080d34 = 0;
  return;
}


/* NanoCore 1.12, address 0x40056c98.
 * REA evidence: ev_370212f19b808ce7ba6c84358892e5f605dad41bf39d2d0b7383236affe62c9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056c98(void)

{
  _DAT_ram_30080d3c = FUN_ram_4005a952(_DAT_ram_30080d38 << 3);
  return;
}


/* NanoCore 1.12, address 0x40056cb8.
 * REA evidence: ev_47871a2f0e631da29ab9c618de904011cab6d263ee102db47937dcc3cfc1c6d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40056cb8(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40047b68(param_1,0,0x16);
  uVar1 = uVar1 & 0xffff;
  if ((uVar1 != 0) && (uVar1 <= _DAT_ram_30080d38)) {
                    /* WARNING: Could not recover jumptable at 0x40056cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_30080d3c + uVar1 * 8))
              (param_1,*(undefined4 *)(_DAT_ram_30080d3c + uVar1 * 8 + 4));
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40056db0.
 * REA evidence: ev_17986c8ebfd136933a7b8b8ab1bff041efbe182880d079d8cbd186e483faca03
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40056db0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400441d4(&PTR_DAT_ram_4009e478_ram_4009e8f0,param_1);
  FUN_ram_4004430a();
  return uVar1;
}


/* NanoCore 1.12, address 0x40056dd0.
 * REA evidence: ev_86a6c97b7fc366ddd5fe7a9e6326413205b3a775b9586165176b9c204a832537
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056dd0(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x58) & 0xff) >> 7 != param_2) {
    *(ushort *)(param_1 + 0x58) =
         (ushort)((param_2 & 1) << 7) | *(ushort *)(param_1 + 0x58) & 0xff7f;
    FUN_ram_400455dc();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40056df2.
 * REA evidence: ev_bd4317da0c677def5e843e7128dbbd6a7b1d693c7946bad2752d3ee0b66d8b67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40056df2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


/* NanoCore 1.12, address 0x40056df6.
 * REA evidence: ev_193aaa1fe02993278d430d4bb3a94ae52982e3f23532056bd8852c8c22e6fc20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40056e2c) */
/* WARNING: Removing unreachable block (ram,0x40056e68) */

void FUN_ram_40056df6(int param_1,uint *param_2)

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


/* NanoCore 1.12, address 0x40056e70.
 * REA evidence: ev_d7c1efc4a8e03140414764e57d4c94cf6901a841d11bbd40ac0f480c797cf5fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056e70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  FUN_ram_40046078();
  uVar1 = FUN_ram_4004515c(param_1);
  uVar2 = FUN_ram_40045168(param_1);
  FUN_ram_40056df6(param_1,auStack_38);
  FUN_ram_4004e462(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                   *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
  iStack_30 = iStack_30 + *(int *)(param_1 + 0x14) + -1;
  iStack_2c = iStack_2c + *(int *)(param_1 + 0x18) + -1;
  iStack_28 = *(int *)(param_1 + 0x14) + 1 + iStack_28;
  iStack_24 = *(int *)(param_1 + 0x18) + 1 + iStack_24;
  FUN_ram_40045578(param_1,&iStack_30);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  uVar3 = FUN_ram_40048b18(param_1);
  FUN_ram_4004d518(uVar3,0);
  FUN_ram_40044af4(param_1);
  FUN_ram_4004d518(uVar3,1);
  FUN_ram_4004e462(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                   *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
  iStack_30 = iStack_30 + *(int *)(param_1 + 0x14) + -1;
  iStack_2c = iStack_2c + *(int *)(param_1 + 0x18) + -1;
  iStack_28 = *(int *)(param_1 + 0x14) + 1 + iStack_28;
  iStack_24 = *(int *)(param_1 + 0x18) + 1 + iStack_24;
  FUN_ram_40045578(param_1,&iStack_30);
  return;
}


/* NanoCore 1.12, address 0x40056f64.
 * REA evidence: ev_e7d9bb65c4c3a0d9a770277cd8b0c10388af040efa845dff63f5e137dc3746b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056f64(int param_1,int param_2)

{
  if (((*(uint *)(param_1 + 0x58) & 0xfff) >> 8 < 0xb) &&
     ((*(int *)(param_1 + 0x48) != param_2 || (*(int *)(param_1 + 0x4c) != param_2)))) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    FUN_ram_40056e70(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40056f8a.
 * REA evidence: ev_69e34909595a9f5b2fdbfd38b03a2e1e41d7ef387dd53ee3cfa3391b96fea9b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056f8a(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x58) & 0xfff) >> 8 < 0xb) {
    while (iVar1 = param_2, 0xe0f < iVar1) {
      param_2 = iVar1 + -0xe10;
    }
    for (; iVar1 < 0; iVar1 = iVar1 + 0xe10) {
    }
  }
  if (*(int *)(param_1 + 0x44) != iVar1) {
    FUN_ram_40046078(param_1);
    uVar2 = FUN_ram_4004515c(param_1);
    uVar3 = FUN_ram_40045168(param_1);
    FUN_ram_40056df6(param_1,auStack_38);
    FUN_ram_4004e462(&iStack_30,uVar2,uVar3,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_40045578(param_1,&iStack_30);
    *(int *)(param_1 + 0x44) = iVar1;
    uVar4 = FUN_ram_40048b18(param_1);
    FUN_ram_4004d518(uVar4,0);
    FUN_ram_40044af4(param_1);
    FUN_ram_4004d518(uVar4,1);
    FUN_ram_4004e462(&iStack_30,uVar2,uVar3,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_40045578(param_1,&iStack_30);
  }
  return;
}


