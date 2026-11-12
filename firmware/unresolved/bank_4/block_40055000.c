/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40055000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400553ac.
 * REA evidence: ev_9ad11d939c1de429d38cdc61d35259ebf723bf70ac6f9e318a11d7e26750ba81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400553ac(byte *param_1,byte *param_2,uint param_3)

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


/* NanoCore 1.10, address 0x40055414.
 * REA evidence: ev_750fdba2cd9d011debf5bdf431bb98ca6f9a401ddd203de60ec793ba67a7b345
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40055414(byte *param_1,uint param_2,int param_3)

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
  FUN_ram_400553ac(&uStack_14,param_1,uStack_21);
  return;
}


/* NanoCore 1.10, address 0x400554e6.
 * REA evidence: ev_aa4dd8b7f9320e39d0cd9b693a31ac9c4b3ea1a62c2944c50faee5884d4865c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400554e6(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 *__dest;
  undefined3 *__src;
  byte *pbVar2;
  byte bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined3 *puVar7;
  int iVar8;
  size_t __n;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uStack_44;
  
  iVar9 = param_1[2];
  __n = param_2 * param_1[1];
  bVar1 = *(byte *)((int)param_1 + 0x21);
  uVar10 = (uint)bVar1;
  __dest = (undefined1 *)*param_1;
  iVar11 = param_1[3];
  __src = (undefined3 *)param_1[6];
  iVar12 = param_1[7];
  pbVar5 = (byte *)param_1[4];
  iVar13 = param_1[5];
  if (*(char *)((int)param_1 + 0x22) == '\0') {
    if (pbVar5 == (byte *)0x0) {
      if (uVar10 < 0xfd) {
        for (iVar13 = 0; iVar13 < iVar9; iVar13 = iVar13 + 1) {
          puVar7 = __src;
          for (iVar6 = 0; iVar6 < (int)__n; iVar6 = iVar6 + param_2) {
            FUN_ram_400553ac(puVar7,__dest + iVar6,uVar10);
            puVar7 = (undefined3 *)((int)puVar7 + param_3);
          }
          __dest = __dest + iVar11;
          __src = (undefined3 *)((int)__src + iVar12);
        }
      }
      else {
        iVar13 = 0;
        if (param_2 == param_3) {
          for (iVar13 = 0; iVar13 < iVar9; iVar13 = iVar13 + 1) {
            memcpy(__dest,__src,__n);
            __dest = __dest + iVar11;
            __src = (undefined3 *)((int)__src + iVar12);
          }
        }
        else {
          for (; puVar7 = __src, puVar4 = __dest, iVar13 < iVar9; iVar13 = iVar13 + 1) {
            for (; (int)puVar4 - (int)__dest < (int)__n; puVar4 = puVar4 + param_2) {
              *puVar4 = *(undefined1 *)puVar7;
              puVar4[1] = *(undefined1 *)((int)puVar7 + 1);
              puVar4[2] = *(undefined1 *)((int)puVar7 + 2);
              puVar7 = (undefined3 *)((int)puVar7 + param_3);
            }
            __dest = __dest + iVar11;
            __src = (undefined3 *)((int)__src + iVar12);
          }
        }
      }
    }
    else if (uVar10 < 0xfd) {
      for (iVar6 = 0; iVar6 < iVar9; iVar6 = iVar6 + 1) {
        puVar7 = __src;
        pbVar2 = pbVar5;
        for (iVar8 = 0; iVar8 < (int)__n; iVar8 = iVar8 + param_2) {
          FUN_ram_400553ac(puVar7,__dest + iVar8,*pbVar2 * uVar10 >> 8);
          puVar7 = (undefined3 *)((int)puVar7 + param_3);
          pbVar2 = pbVar2 + 1;
        }
        __dest = __dest + iVar11;
        __src = (undefined3 *)((int)__src + iVar12);
        pbVar5 = pbVar5 + iVar13;
      }
    }
    else {
      for (iVar6 = 0; iVar6 < iVar9; iVar6 = iVar6 + 1) {
        pbVar2 = pbVar5;
        puVar7 = __src;
        for (iVar8 = 0; iVar8 < (int)__n; iVar8 = iVar8 + param_2) {
          FUN_ram_400553ac(puVar7,__dest + iVar8,*pbVar2);
          puVar7 = (undefined3 *)((int)puVar7 + param_3);
          pbVar2 = pbVar2 + 1;
        }
        __dest = __dest + iVar11;
        __src = (undefined3 *)((int)__src + iVar12);
        pbVar5 = pbVar5 + iVar13;
      }
    }
  }
  else {
    for (iVar6 = 0; iVar6 < iVar9; iVar6 = iVar6 + 1) {
      puVar7 = __src;
      for (iVar8 = 0; iVar8 < (int)__n; iVar8 = iVar8 + param_2) {
        bVar3 = bVar1;
        if (pbVar5 != (byte *)0x0) {
          bVar3 = (byte)(pbVar5[iVar8] * uVar10 >> 8);
        }
        uStack_44 = CONCAT13(bVar3,*puVar7);
        FUN_ram_40055414(__dest + iVar8,uStack_44,*(undefined1 *)((int)param_1 + 0x22));
        puVar7 = (undefined3 *)((int)puVar7 + param_3);
      }
      if (pbVar5 != (byte *)0x0) {
        pbVar5 = pbVar5 + iVar13;
      }
      __dest = __dest + iVar11;
      __src = (undefined3 *)((int)__src + iVar12);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400556b8.
 * REA evidence: ev_84c3f7a809cd0e250a1e7f771f7d7d9db5ff0462adcbb95dedee6bc0cee832f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400556b8(int *param_1,int param_2)

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
  undefined1 *__src;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 uStack_34;
  
  pbVar11 = (byte *)param_1[4];
  uVar4 = param_1[1];
  iVar13 = param_1[2];
  uVar14 = (uint)*(byte *)((int)param_1 + 0x1b);
  iVar12 = param_1[3];
  if (pbVar11 == (byte *)0x0) {
    if (uVar14 < 0xfd) {
      uStack_34 = FUN_ram_40049e12(param_1[6]);
      iVar6 = *param_1;
      for (iVar1 = 0; iVar1 < iVar13; iVar1 = iVar1 + 1) {
        for (iVar2 = 0; iVar2 < (int)(uVar4 * param_2); iVar2 = iVar2 + param_2) {
          FUN_ram_400553ac(&uStack_34,iVar6 + iVar2,uVar14);
        }
        iVar6 = iVar6 + iVar12;
      }
    }
    else if (param_2 == 3) {
      __src = (undefined1 *)*param_1;
      for (puVar10 = __src; (int)puVar10 - (int)__src < (int)(uVar4 * 3); puVar10 = puVar10 + 3) {
        *puVar10 = (char)param_1[6];
        puVar10[1] = *(undefined1 *)((int)param_1 + 0x19);
        puVar10[2] = *(undefined1 *)((int)param_1 + 0x1a);
      }
      puVar10 = __src;
      for (iVar1 = 1; puVar10 = puVar10 + iVar12, iVar1 < iVar13; iVar1 = iVar1 + 1) {
        memcpy(puVar10,__src,uVar4 * 3);
      }
    }
    else if (param_2 == 4) {
      uVar5 = FUN_ram_40049e12(param_1[6]);
      puVar7 = (undefined4 *)*param_1;
      uVar14 = 0;
      if (-1 < (int)uVar4) {
        uVar14 = uVar4 & 0xfffffff0;
      }
      for (iVar1 = 0; iVar1 < iVar13; iVar1 = iVar1 + 1) {
        puVar8 = puVar7;
        for (iVar6 = 0; uVar9 = uVar14, iVar6 < (int)(uVar4 - 0xf); iVar6 = iVar6 + 0x10) {
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
        puVar7 = (undefined4 *)((int)puVar7 + iVar12);
      }
    }
  }
  else {
    iVar1 = param_1[5];
    if (uVar14 < 0xfd) {
      uStack_34 = FUN_ram_40049e12(param_1[6]);
      iVar2 = *param_1;
      for (iVar6 = 0; iVar6 < iVar13; iVar6 = iVar6 + 1) {
        pbVar15 = pbVar11;
        for (iVar3 = 0; iVar3 < (int)(uVar4 * param_2); iVar3 = iVar3 + param_2) {
          FUN_ram_400553ac(&uStack_34,iVar2 + iVar3,*pbVar15 * uVar14 >> 8);
          pbVar15 = pbVar15 + 1;
        }
        iVar2 = iVar2 + iVar12;
        pbVar11 = pbVar11 + iVar1;
      }
    }
    else {
      uStack_34 = FUN_ram_40049e12(param_1[6]);
      iVar2 = *param_1;
      for (iVar6 = 0; iVar6 < iVar13; iVar6 = iVar6 + 1) {
        pbVar15 = pbVar11;
        for (iVar3 = 0; iVar3 < (int)(uVar4 * param_2); iVar3 = iVar3 + param_2) {
          FUN_ram_400553ac(&uStack_34,iVar2 + iVar3,*pbVar15);
          pbVar15 = pbVar15 + 1;
        }
        iVar2 = iVar2 + iVar12;
        pbVar11 = pbVar11 + iVar1;
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40055872.
 * REA evidence: ev_18bff7a76c9b3523f463d0f5554197cd5bea3df35041691d5ef93700fae2e6a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40055872(int *param_1,uint param_2)

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
LAB_ram_40055b62:
    FUN_ram_400554e6(param_1,param_2 & 0xff,uVar6);
    return;
  }
  if (bVar1 < 0x12) {
    if (bVar1 == 0xf) {
      uVar6 = 3;
      goto LAB_ram_40055b62;
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
                FUN_ram_400553ac(iVar2,iVar13,*(byte *)(iVar2 + 3) * uVar12 >> 8);
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
                FUN_ram_400553ac(iVar2,iVar13,*(undefined1 *)(iVar2 + 3));
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
              FUN_ram_400553ac(iVar19,iVar13,
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
              FUN_ram_400553ac(iVar19,iVar3,
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
            FUN_ram_4000305c(&uStack_44,iVar3,4);
            if (iVar11 == 0) {
              uVar8 = (undefined1)(*(byte *)(iVar3 + 3) * uVar12 >> 8);
            }
            else {
              uVar8 = (undefined1)
                      ((uint)*(byte *)(iVar11 + iVar19) * (uint)*(byte *)(iVar3 + 3) * uVar12 >>
                      0x10);
            }
            uStack_44 = CONCAT13(uVar8,(undefined3)uStack_44);
            FUN_ram_40055414(iVar10 + iVar19,uStack_44,*(undefined1 *)((int)param_1 + 0x22));
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
              FUN_ram_400553ac(&uStack_44,puVar5,uVar12);
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
            FUN_ram_400553ac(&uStack_44,puVar5,*(byte *)(iVar10 + iVar2) * uVar12 >> 8);
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
            FUN_ram_400553ac(&uStack_44,puVar5,*(undefined1 *)(iVar10 + iVar2));
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
          FUN_ram_40055414(puVar5,uStack_44,*(undefined1 *)((int)param_1 + 0x22));
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


/* NanoCore 1.10, address 0x40055cfa.
 * REA evidence: ev_ac73305a7924df669ebe63f5d71904be6bdafbef95551149f15600cbb8b8719c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40055cfa(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3007f9a0 == (code *)0x0) {
    DAT_ram_3007f99c = 1;
    return _DAT_ram_3007f998;
  }
                    /* WARNING: Could not recover jumptable at 0x40055d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*_DAT_ram_3007f9a0)();
  return uVar1;
}


/* NanoCore 1.10, address 0x40055d20.
 * REA evidence: ev_36cd09a4bab3099c99fbf2f5da81e6fdbb366d7813ebfe5312b20eb10386ec10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40055d20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40055cfa();
  return iVar1 - param_1;
}


/* NanoCore 1.10, address 0x40055d36.
 * REA evidence: ev_b7f1975ec82ea4b5fdd5172c75621592650eb4cd09b67e1d6e1688d99740f1f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40055d36(undefined4 param_1)

{
  _DAT_ram_3007f9a0 = param_1;
  return;
}


/* NanoCore 1.10, address 0x40055d40.
 * REA evidence: ev_6820d4bbeb638c3fec6c3b754f3ddfc49fdf2742dd25a6e779e780585794e9a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40055d40(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004a5a6();
    return;
  }
  FUN_ram_4004a5b2(0x3007f924);
  return;
}


/* NanoCore 1.10, address 0x40055d54.
 * REA evidence: ev_afe65b0f0648534527e0f58550c7a8f789a84c33bc24d183117aee5ba51a544e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40055d54(void)

{
  return _DAT_ram_3007f930;
}


/* NanoCore 1.10, address 0x40055d5e.
 * REA evidence: ev_a34e999f8d81d495ec1e99149dda8ef9bf448e993185a917c7a01817e0146a7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40055d5e(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40055d68.
 * REA evidence: ev_0b490c14f515a85bf945a63c4b00878e6d0c36063dac87ebcc3c4af3f1c61b33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40055d68(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xac);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40055d70.
 * REA evidence: ev_30889b1231535aad0ee2decec6b8f3506ad56c96df0565468d283b1a1a9963a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40055d70(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != (uint *)0x0) && (uVar1 = 0, (*param_1 & 0xfffffffd) == 1)) {
    uVar1 = param_1[0x27] & 0xf;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40055d8a.
 * REA evidence: ev_d59f988cb1fced83654ca6064879ff70c191373b736096c336b6e7ea49cc767b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40055d8a(uint *param_1)

{
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0xfffffffd) == 1)) {
    return param_1[0x1e];
  }
  return 0;
}


/* NanoCore 1.10, address 0x40055d9e.
 * REA evidence: ev_98e4af144f8906486739393b0103dcdd09c52816bd739db32d88b7c4566cf220
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40055d9e(int param_1)

{
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
  return;
}


/* NanoCore 1.10, address 0x40055dae.
 * REA evidence: ev_2f764cb68155f64e8a179e5731b2d3fc3a11af23e73ce1437e60b6201b42995c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40055dae(void)

{
  return _DAT_ram_3007f934;
}


/* NanoCore 1.10, address 0x40055db8.
 * REA evidence: ev_2c0856a4a2f8320496f789ed9714eb9240dfc2315a9d4ac7abc8791b15ce441a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40055db8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  thunk_FUN_ram_4000505c(&iStack_2c,0,0x1c);
  iStack_2c = param_1;
  iStack_28 = param_1;
  uStack_24 = param_2;
  uStack_1c = param_3;
  iVar1 = FUN_ram_40049e50(param_1 + 0xb4,&iStack_2c,1);
  if (iVar1 == 1) {
    FUN_ram_40049e50(param_1 + 0xb4,&iStack_2c,0);
  }
  return;
}


/* NanoCore 1.10, address 0x40055e04.
 * REA evidence: ev_8c00c4c9e066ae3d4698a06da39d6c67d6e3a5fb7e7990e346851d5c8441240a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40055e04(int *param_1,int param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
  if (_DAT_ram_3007f930 == param_1) {
    _DAT_ram_3007f934 = 0;
  }
  if (1 < *param_1 - 1U) {
    return;
  }
  iVar1 = param_1[0x1c];
  if ((((param_2 == 0) || (param_2 == param_1[0x1f])) && (param_1[0x1f] = 0, param_2 == 0)) ||
     (param_2 == iVar1)) {
    if (iVar1 != 0) {
      param_1[0x1c] = 0;
      FUN_ram_40043bde(iVar1,0x14,param_1);
      FUN_ram_40055db8(param_1,0x14,iVar1);
    }
    if (param_2 != 0) goto LAB_ram_40055e52;
LAB_ram_40055e58:
    param_1[0x1d] = 0;
    if (param_2 == 0) goto LAB_ram_40055e64;
  }
  else {
LAB_ram_40055e52:
    if (param_2 == param_1[0x1d]) goto LAB_ram_40055e58;
  }
  if (param_2 != param_1[0x1e]) {
    return;
  }
LAB_ram_40055e64:
  iVar1 = param_1[0x1e];
  if (iVar1 == 0) {
    return;
  }
  param_1[0x1e] = 0;
  FUN_ram_40043bde(iVar1,0x14,param_1);
  FUN_ram_40055db8(param_1,0x14,0);
  return;
}


/* NanoCore 1.10, address 0x40055eb8.
 * REA evidence: ev_82b4612c46e98aa7937f40a5a315b9dde44804aef15beb7da92e991fb0e6d872
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40055eb8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_ram_40055e04();
    return;
  }
  for (iVar1 = FUN_ram_4004a5a6(0x3007f924); iVar1 != 0; iVar1 = FUN_ram_40055d40(iVar1)) {
    FUN_ram_40055e04(iVar1,param_2);
  }
  _DAT_ram_3007f934 = 0;
  return;
}


/* NanoCore 1.10, address 0x40055ef4.
 * REA evidence: ev_a9c26a4c0390e4ea0161b145a9adb4c4e24e8a0f837f8282bc7148a41a323c8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40055ef4(void)

{
  _DAT_ram_3007f93c = FUN_ram_40059bae(_DAT_ram_3007f938 << 3);
  return;
}


/* NanoCore 1.10, address 0x40055f14.
 * REA evidence: ev_5a6caa7dca3401b43f955ff4a47cf203a07f5f4420d0257d1aa7ccfe0c4ef291
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40055f14(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40046afe(param_1,0,0x16);
  uVar1 = uVar1 & 0xffff;
  if ((uVar1 != 0) && (uVar1 <= _DAT_ram_3007f938)) {
                    /* WARNING: Could not recover jumptable at 0x40055f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3007f93c + uVar1 * 8))
              (param_1,*(undefined4 *)(_DAT_ram_3007f93c + uVar1 * 8 + 4));
    return;
  }
  return;
}


