/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40055000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40055026.
 * REA evidence: ev_d82e676f6b8159131a7a398bbe219b65f85ec0ec9674aa6cbebbfa38eb61d963
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40055026(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uStack_44;
  undefined1 auStack_40 [20];
  
  iVar3 = param_1[4];
  iVar10 = param_1[1];
  iVar12 = param_1[2];
  uVar15 = (uint)*(byte *)((int)param_1 + 0x1b);
  iVar14 = param_1[5];
  iVar13 = param_1[3];
  FUN_ram_40054d22(auStack_40);
  if (iVar3 == 0) {
    if (uVar15 < 0xfd) {
      uVar5 = FUN_ram_4004ad3e(param_1[6],uVar15);
      iVar3 = *param_1;
      for (iVar14 = 0; iVar14 < iVar12; iVar14 = iVar14 + 1) {
        for (iVar1 = 0; iVar1 < iVar10; iVar1 = iVar1 + 1) {
          iVar4 = iVar3 + iVar1 * 4;
          uVar6 = FUN_ram_40054ad2(uVar5,CONCAT13(*(undefined1 *)(iVar4 + 3),
                                                  CONCAT12(*(undefined1 *)(iVar4 + 2),
                                                           CONCAT11(*(undefined1 *)(iVar4 + 1),
                                                                    *(undefined1 *)
                                                                     (iVar3 + iVar1 * 4)))),
                                   auStack_40);
          *(char *)(iVar3 + iVar1 * 4) = (char)uVar6;
          *(char *)(iVar4 + 1) = (char)((uint)uVar6 >> 8);
          *(char *)(iVar4 + 2) = (char)((uint)uVar6 >> 0x10);
          *(char *)(iVar4 + 3) = (char)((uint)uVar6 >> 0x18);
        }
        iVar3 = iVar3 + iVar13;
      }
    }
    else {
      uVar5 = FUN_ram_4004ad84(param_1[6]);
      puVar7 = (undefined4 *)*param_1;
      uVar15 = 0;
      if (0 < iVar10) {
        uVar15 = iVar10 - 1U & 0xfffffff0;
      }
      for (iVar3 = 0; iVar3 < iVar12; iVar3 = iVar3 + 1) {
        puVar8 = puVar7;
        for (iVar14 = 0; uVar9 = uVar15, iVar14 < iVar10 + -0x10; iVar14 = iVar14 + 0x10) {
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
        for (; (int)uVar9 < iVar10; uVar9 = uVar9 + 1) {
          puVar7[uVar9] = uVar5;
        }
        puVar7 = (undefined4 *)((int)puVar7 + iVar13);
      }
    }
  }
  else if (uVar15 < 0xfd) {
    uStack_44 = FUN_ram_4004ad3e(param_1[6],uVar15);
    iVar1 = *param_1;
    for (iVar4 = 0; iVar4 < iVar12; iVar4 = iVar4 + 1) {
      for (iVar2 = 0; iVar2 < iVar10; iVar2 = iVar2 + 1) {
        iVar11 = iVar1 + iVar2 * 4;
        uStack_44 = CONCAT13((char)(*(byte *)(iVar3 + iVar2) * uVar15 >> 8),(undefined3)uStack_44);
        uVar5 = FUN_ram_40054ad2(uStack_44,
                                 CONCAT13(*(undefined1 *)(iVar11 + 3),
                                          CONCAT12(*(undefined1 *)(iVar11 + 2),
                                                   CONCAT11(*(undefined1 *)(iVar11 + 1),
                                                            *(undefined1 *)(iVar1 + iVar2 * 4)))),
                                 auStack_40);
        *(char *)(iVar1 + iVar2 * 4) = (char)uVar5;
        *(char *)(iVar11 + 1) = (char)((uint)uVar5 >> 8);
        *(char *)(iVar11 + 2) = (char)((uint)uVar5 >> 0x10);
        *(char *)(iVar11 + 3) = (char)((uint)uVar5 >> 0x18);
      }
      iVar1 = iVar1 + iVar13;
      iVar3 = iVar3 + iVar14;
    }
  }
  else {
    uStack_44 = FUN_ram_4004ad3e(param_1[6],0xff);
    iVar1 = *param_1;
    for (iVar4 = 0; iVar4 < iVar12; iVar4 = iVar4 + 1) {
      for (iVar2 = 0; iVar2 < iVar10; iVar2 = iVar2 + 1) {
        iVar11 = iVar1 + iVar2 * 4;
        uStack_44 = CONCAT13(*(undefined1 *)(iVar3 + iVar2),(undefined3)uStack_44);
        uVar5 = FUN_ram_40054ad2(uStack_44,
                                 CONCAT13(*(undefined1 *)(iVar11 + 3),
                                          CONCAT12(*(undefined1 *)(iVar11 + 2),
                                                   CONCAT11(*(undefined1 *)(iVar11 + 1),
                                                            *(undefined1 *)(iVar1 + iVar2 * 4)))),
                                 auStack_40);
        *(char *)(iVar1 + iVar2 * 4) = (char)uVar5;
        *(char *)(iVar11 + 1) = (char)((uint)uVar5 >> 8);
        *(char *)(iVar11 + 2) = (char)((uint)uVar5 >> 0x10);
        *(char *)(iVar11 + 3) = (char)((uint)uVar5 >> 0x18);
      }
      iVar1 = iVar1 + iVar13;
      iVar3 = iVar3 + iVar14;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4005523a.
 * REA evidence: ev_a2271ff574f2dac4ebed0882a47beedc21df18ac350e245be93e58216e819105
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005523a(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uStack_54;
  undefined1 auStack_50 [28];
  
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 0x11) {
    uVar5 = 4;
LAB_ram_40055550:
    FUN_ram_40054d5c(param_1,uVar5);
    return;
  }
  if (bVar1 < 0x12) {
    if (bVar1 == 0xf) {
      uVar5 = 3;
      goto LAB_ram_40055550;
    }
    if (bVar1 == 0x10) {
      iVar15 = param_1[1];
      iVar14 = param_1[2];
      uVar13 = (uint)*(byte *)((int)param_1 + 0x21);
      iVar4 = *param_1;
      iVar16 = param_1[3];
      iVar10 = param_1[6];
      iVar17 = param_1[7];
      iVar11 = param_1[4];
      iVar18 = param_1[5];
      FUN_ram_40054d22(auStack_50);
      if (*(char *)((int)param_1 + 0x22) == '\0') {
        if (iVar11 == 0) {
          iVar11 = 0;
          if (uVar13 < 0xfd) {
            for (; iVar11 < iVar14; iVar11 = iVar11 + 1) {
              for (iVar18 = 0; iVar18 < iVar15; iVar18 = iVar18 + 1) {
                FUN_ram_4000304c(&uStack_54,iVar10 + iVar18 * 4,4);
                iVar9 = iVar18 * 4 + iVar4;
                uStack_54 = CONCAT13((char)(*(byte *)(iVar10 + 3 + iVar18 * 4) * uVar13 >> 8),
                                     (undefined3)uStack_54);
                uVar5 = FUN_ram_40054ad2(uStack_54,
                                         CONCAT13(*(undefined1 *)(iVar9 + 3),
                                                  CONCAT12(*(undefined1 *)(iVar9 + 2),
                                                           CONCAT11(*(undefined1 *)(iVar9 + 1),
                                                                    *(undefined1 *)
                                                                     (iVar4 + iVar18 * 4)))),
                                         auStack_50);
                *(char *)(iVar4 + iVar18 * 4) = (char)uVar5;
                *(char *)(iVar9 + 1) = (char)((uint)uVar5 >> 8);
                *(char *)(iVar9 + 2) = (char)((uint)uVar5 >> 0x10);
                *(char *)(iVar9 + 3) = (char)((uint)uVar5 >> 0x18);
              }
              iVar4 = iVar4 + iVar16;
              iVar10 = iVar10 + iVar17;
            }
          }
          else {
            for (iVar11 = 0; iVar11 < iVar14; iVar11 = iVar11 + 1) {
              for (iVar18 = 0; iVar18 < iVar15; iVar18 = iVar18 + 1) {
                iVar12 = iVar4 + iVar18 * 4;
                iVar9 = iVar18 * 4 + iVar10;
                uVar5 = FUN_ram_40054ad2(CONCAT13(*(undefined1 *)(iVar9 + 3),
                                                  CONCAT12(*(undefined1 *)(iVar9 + 2),
                                                           CONCAT11(*(undefined1 *)(iVar9 + 1),
                                                                    *(undefined1 *)
                                                                     (iVar10 + iVar18 * 4)))),
                                         CONCAT13(*(undefined1 *)(iVar12 + 3),
                                                  CONCAT12(*(undefined1 *)(iVar12 + 2),
                                                           CONCAT11(*(undefined1 *)(iVar12 + 1),
                                                                    *(undefined1 *)
                                                                     (iVar4 + iVar18 * 4)))),
                                         auStack_50);
                *(char *)(iVar4 + iVar18 * 4) = (char)uVar5;
                *(char *)(iVar12 + 1) = (char)((uint)uVar5 >> 8);
                *(char *)(iVar12 + 2) = (char)((uint)uVar5 >> 0x10);
                *(char *)(iVar12 + 3) = (char)((uint)uVar5 >> 0x18);
              }
              iVar4 = iVar4 + iVar16;
              iVar10 = iVar10 + iVar17;
            }
          }
        }
        else {
          iVar9 = 0;
          if (uVar13 < 0xfd) {
            for (; iVar9 < iVar14; iVar9 = iVar9 + 1) {
              for (iVar12 = 0; iVar12 < iVar15; iVar12 = iVar12 + 1) {
                FUN_ram_4000304c(&uStack_54,iVar10 + iVar12 * 4,4);
                iVar3 = iVar12 * 4 + iVar4;
                uStack_54 = CONCAT13((char)(*(byte *)(iVar10 + 3 + iVar12 * 4) * uVar13 *
                                            (uint)*(byte *)(iVar11 + iVar12) >> 0x10),
                                     (undefined3)uStack_54);
                uVar5 = FUN_ram_40054ad2(uStack_54,
                                         CONCAT13(*(undefined1 *)(iVar3 + 3),
                                                  CONCAT12(*(undefined1 *)(iVar3 + 2),
                                                           CONCAT11(*(undefined1 *)(iVar3 + 1),
                                                                    *(undefined1 *)
                                                                     (iVar4 + iVar12 * 4)))),
                                         auStack_50);
                *(char *)(iVar4 + iVar12 * 4) = (char)uVar5;
                *(char *)(iVar3 + 1) = (char)((uint)uVar5 >> 8);
                *(char *)(iVar3 + 2) = (char)((uint)uVar5 >> 0x10);
                *(char *)(iVar3 + 3) = (char)((uint)uVar5 >> 0x18);
              }
              iVar4 = iVar4 + iVar16;
              iVar10 = iVar10 + iVar17;
              iVar11 = iVar11 + iVar18;
            }
          }
          else {
            for (iVar9 = 0; iVar9 < iVar14; iVar9 = iVar9 + 1) {
              for (iVar12 = 0; iVar12 < iVar15; iVar12 = iVar12 + 1) {
                FUN_ram_4000304c(&uStack_54,iVar10 + iVar12 * 4,4);
                iVar3 = iVar12 * 4 + iVar4;
                uStack_54 = CONCAT13((char)((uint)*(byte *)(iVar10 + 3 + iVar12 * 4) *
                                            (uint)*(byte *)(iVar11 + iVar12) >> 8),
                                     (undefined3)uStack_54);
                uVar5 = FUN_ram_40054ad2(uStack_54,
                                         CONCAT13(*(undefined1 *)(iVar3 + 3),
                                                  CONCAT12(*(undefined1 *)(iVar3 + 2),
                                                           CONCAT11(*(undefined1 *)(iVar3 + 1),
                                                                    *(undefined1 *)
                                                                     (iVar4 + iVar12 * 4)))),
                                         auStack_50);
                *(char *)(iVar4 + iVar12 * 4) = (char)uVar5;
                *(char *)(iVar3 + 1) = (char)((uint)uVar5 >> 8);
                *(char *)(iVar3 + 2) = (char)((uint)uVar5 >> 0x10);
                *(char *)(iVar3 + 3) = (char)((uint)uVar5 >> 0x18);
              }
              iVar4 = iVar4 + iVar16;
              iVar10 = iVar10 + iVar17;
              iVar11 = iVar11 + iVar18;
            }
          }
        }
      }
      else {
        for (iVar9 = 0; iVar9 < iVar14; iVar9 = iVar9 + 1) {
          for (iVar12 = 0; iVar12 < iVar15; iVar12 = iVar12 + 1) {
            FUN_ram_4000304c(&uStack_54,iVar10 + iVar12 * 4,4);
            uVar6 = (uint)*(byte *)(iVar10 + 3 + iVar12 * 4);
            if (iVar11 == 0) {
              uVar8 = (undefined1)(uVar13 * uVar6 >> 8);
            }
            else {
              uVar8 = (undefined1)(*(byte *)(iVar11 + iVar12) * uVar6 * uVar13 >> 0x10);
            }
            uStack_54 = CONCAT13(uVar8,(undefined3)uStack_54);
            FUN_ram_40054c0c(iVar4 + iVar12 * 4,uStack_54,*(undefined1 *)((int)param_1 + 0x22),
                             auStack_50);
          }
          if (iVar11 != 0) {
            iVar11 = iVar11 + iVar18;
          }
          iVar4 = iVar4 + iVar16;
          iVar10 = iVar10 + iVar17;
        }
      }
    }
  }
  else if (bVar1 == 0x12) {
    iVar15 = param_1[1];
    iVar14 = param_1[2];
    bVar1 = *(byte *)((int)param_1 + 0x21);
    uVar13 = (uint)bVar1;
    iVar4 = *param_1;
    iVar16 = param_1[3];
    iVar10 = param_1[6];
    iVar17 = param_1[7];
    iVar11 = param_1[4];
    iVar18 = param_1[5];
    FUN_ram_40054d22(auStack_50);
    if (*(char *)((int)param_1 + 0x22) == '\0') {
      if (iVar11 == 0) {
        uStack_54 = (uint)bVar1 << 0x18;
        for (iVar11 = 0; iVar11 < iVar14; iVar11 = iVar11 + 1) {
          for (iVar18 = 0; iVar18 < iVar15; iVar18 = iVar18 + 1) {
            uVar2 = *(ushort *)(iVar10 + iVar18 * 2);
            iVar9 = iVar4 + iVar18 * 4;
            uStack_54._0_2_ =
                 CONCAT11((char)(((uVar2 & 0x7ff) >> 5) * 0x40d >> 8),
                          (char)((uVar2 & 0x1f) * 0x83a >> 8));
            uStack_54 = CONCAT22(CONCAT11(uStack_54._3_1_,(char)((uint)(uVar2 >> 0xb) * 0x83a >> 8))
                                 ,(undefined2)uStack_54);
            uVar5 = FUN_ram_40054ad2(uStack_54,
                                     CONCAT13(*(undefined1 *)(iVar9 + 3),
                                              CONCAT12(*(undefined1 *)(iVar9 + 2),
                                                       CONCAT11(*(undefined1 *)(iVar9 + 1),
                                                                *(undefined1 *)(iVar4 + iVar18 * 4))
                                                      )),auStack_50);
            *(char *)(iVar4 + iVar18 * 4) = (char)uVar5;
            *(char *)(iVar9 + 1) = (char)((uint)uVar5 >> 8);
            *(char *)(iVar9 + 2) = (char)((uint)uVar5 >> 0x10);
            *(char *)(iVar9 + 3) = (char)((uint)uVar5 >> 0x18);
          }
          iVar4 = iVar4 + iVar16;
          iVar10 = iVar10 + iVar17;
        }
      }
      else if (uVar13 < 0xfd) {
        for (iVar9 = 0; iVar9 < iVar14; iVar9 = iVar9 + 1) {
          for (iVar12 = 0; iVar12 < iVar15; iVar12 = iVar12 + 1) {
            iVar3 = iVar4 + iVar12 * 4;
            uVar2 = *(ushort *)(iVar10 + iVar12 * 2);
            uStack_54._0_2_ =
                 CONCAT11((char)(((uVar2 & 0x7ff) >> 5) * 0x40d >> 8),
                          (char)((uVar2 & 0x1f) * 0x83a >> 8));
            uStack_54 = CONCAT22(CONCAT11((char)(*(byte *)(iVar11 + iVar12) * uVar13 >> 8),
                                          (char)((uint)(uVar2 >> 0xb) * 0x83a >> 8)),
                                 (undefined2)uStack_54);
            uVar5 = FUN_ram_40054ad2(uStack_54,
                                     CONCAT13(*(undefined1 *)(iVar3 + 3),
                                              CONCAT12(*(undefined1 *)(iVar3 + 2),
                                                       CONCAT11(*(undefined1 *)(iVar3 + 1),
                                                                *(undefined1 *)(iVar4 + iVar12 * 4))
                                                      )),auStack_50);
            *(char *)(iVar4 + iVar12 * 4) = (char)uVar5;
            *(char *)(iVar3 + 1) = (char)((uint)uVar5 >> 8);
            *(char *)(iVar3 + 2) = (char)((uint)uVar5 >> 0x10);
            *(char *)(iVar3 + 3) = (char)((uint)uVar5 >> 0x18);
          }
          iVar4 = iVar4 + iVar16;
          iVar10 = iVar10 + iVar17;
          iVar11 = iVar11 + iVar18;
        }
      }
      else {
        for (iVar9 = 0; iVar9 < iVar14; iVar9 = iVar9 + 1) {
          for (iVar12 = 0; iVar12 < iVar15; iVar12 = iVar12 + 1) {
            iVar3 = iVar4 + iVar12 * 4;
            uVar2 = *(ushort *)(iVar10 + iVar12 * 2);
            uStack_54._0_2_ =
                 CONCAT11((char)(((uVar2 & 0x7ff) >> 5) * 0x40d >> 8),
                          (char)((uVar2 & 0x1f) * 0x83a >> 8));
            uStack_54 = CONCAT22(CONCAT11(*(undefined1 *)(iVar11 + iVar12),
                                          (char)((uint)(uVar2 >> 0xb) * 0x83a >> 8)),
                                 (undefined2)uStack_54);
            uVar5 = FUN_ram_40054ad2(uStack_54,
                                     CONCAT13(*(undefined1 *)(iVar3 + 3),
                                              CONCAT12(*(undefined1 *)(iVar3 + 2),
                                                       CONCAT11(*(undefined1 *)(iVar3 + 1),
                                                                *(undefined1 *)(iVar4 + iVar12 * 4))
                                                      )),auStack_50);
            *(char *)(iVar4 + iVar12 * 4) = (char)uVar5;
            *(char *)(iVar3 + 1) = (char)((uint)uVar5 >> 8);
            *(char *)(iVar3 + 2) = (char)((uint)uVar5 >> 0x10);
            *(char *)(iVar3 + 3) = (char)((uint)uVar5 >> 0x18);
          }
          iVar4 = iVar4 + iVar16;
          iVar10 = iVar10 + iVar17;
          iVar11 = iVar11 + iVar18;
        }
      }
    }
    else {
      for (iVar9 = 0; iVar9 < iVar14; iVar9 = iVar9 + 1) {
        for (iVar12 = 0; iVar12 < iVar15; iVar12 = iVar12 + 1) {
          uVar2 = *(ushort *)(iVar10 + iVar12 * 2);
          bVar7 = bVar1;
          if (iVar11 != 0) {
            bVar7 = (byte)(*(byte *)(iVar11 + iVar12) * uVar13 >> 8);
          }
          uStack_54 = CONCAT13(bVar7,(int3)CONCAT31(CONCAT21((short)((uint)(uVar2 >> 0xb) * 0x83a >>
                                                                    8),
                                                             (char)(((uVar2 & 0x7ff) >> 5) * 0x40d
                                                                   >> 8)),
                                                    (char)((uVar2 & 0x1f) * 0x83a >> 8)));
          FUN_ram_40054c0c(iVar4 + iVar12 * 4,uStack_54,*(undefined1 *)((int)param_1 + 0x22),
                           auStack_50);
        }
        if (iVar11 != 0) {
          iVar11 = iVar11 + iVar18;
        }
        iVar4 = iVar4 + iVar16;
        iVar10 = iVar10 + iVar17;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40055804.
 * REA evidence: ev_c8f53fa7877888d8494f95819761666ef1f3837c7c7427d60427e01c6164feef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40055804(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_3 != 0xff) && (uVar1 = param_2, param_3 != 0)) {
    uVar1 = (param_2 | param_2 << 0x10) & 0x7e0f81f;
    uVar1 = ((((param_1 << 0x10 | param_1) & 0x7e0f81f) - uVar1) * (param_3 + 4U >> 3) >> 5) + uVar1
    ;
    return uVar1 & 0xf81f | (uVar1 & 0x7e0f81f) >> 0x10;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40055848.
 * REA evidence: ev_4b80320e1c622e597000043055411f3a7aa60e44a2730874b3656e8c06b2628d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40055848(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 0) {
    if (param_3 == 0xff) {
      param_2 = ((param_1[1] & 0xfc) << 3 | (param_1[2] & 0xfffff8) << 8) + (uint)(*param_1 >> 3);
    }
    else {
      uVar1 = ~param_3 & 0xff;
      param_2 = ((int)((param_1[1] >> 2) * param_3 + ((param_2 & 0x7ff) >> 5) * uVar1) >> 3 & 0x7e0U
                | ((param_2 >> 0xb) * uVar1 + (param_1[2] >> 3) * param_3) * 8 & 0xfffff800) +
                ((int)((*param_1 >> 3) * param_3 + (param_2 & 0x1f) * uVar1) >> 8);
    }
    param_2 = param_2 & 0xffff;
  }
  return param_2;
}


/* NanoCore 1.11, address 0x400558be.
 * REA evidence: ev_dd4ea851f737a0f072f35b6462854356bfa80dc91545ab2720966dcd7297d79a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400558be(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  ushort *puVar21;
  int iStack_4c;
  int iStack_48;
  
  iVar8 = param_1[5];
  cVar3 = *(char *)((int)param_1 + 0x22);
  iVar6 = param_1[1];
  iVar12 = param_1[2];
  uVar5 = (uint)*(byte *)((int)param_1 + 0x21);
  puVar21 = (ushort *)*param_1;
  iVar13 = param_1[3];
  pbVar20 = (byte *)param_1[6];
  iVar14 = param_1[7];
  iVar19 = param_1[4];
  if (cVar3 == '\0') {
    if (iVar19 == 0) {
      iVar8 = 0;
      if (uVar5 < 0xfd) {
        for (; iVar8 < iVar12; iVar8 = iVar8 + 1) {
          pbVar17 = pbVar20;
          for (iVar19 = 0; iVar19 < iVar6; iVar19 = iVar19 + 1) {
            uVar7 = FUN_ram_40055848(pbVar17,puVar21[iVar19],uVar5);
            puVar21[iVar19] = uVar7;
            pbVar17 = pbVar17 + param_2;
          }
          puVar21 = (ushort *)((int)puVar21 + iVar13);
          pbVar20 = pbVar20 + iVar14;
        }
      }
      else {
        for (iVar8 = 0; iVar8 < iVar12; iVar8 = iVar8 + 1) {
          pbVar17 = pbVar20;
          for (iVar19 = 0; iVar19 < iVar6; iVar19 = iVar19 + 1) {
            pbVar1 = pbVar17 + 2;
            pbVar2 = pbVar17 + 1;
            bVar4 = *pbVar17;
            pbVar17 = pbVar17 + param_2;
            puVar21[iVar19] =
                 ((*pbVar1 & 0xf8) << 8 | (*pbVar2 & 0xfc) << 3) +
                 (short)(((uint)bVar4 << 0xd) >> 0x10);
          }
          puVar21 = (ushort *)((int)puVar21 + iVar13);
          pbVar20 = pbVar20 + iVar14;
        }
      }
    }
    else {
      iVar18 = 0;
      if (uVar5 < 0xfd) {
        for (; iVar18 < iVar12; iVar18 = iVar18 + 1) {
          pbVar17 = pbVar20;
          for (iVar15 = 0; iVar15 < iVar6; iVar15 = iVar15 + 1) {
            uVar7 = FUN_ram_40055848(pbVar17,puVar21[iVar15],*(byte *)(iVar19 + iVar15) * uVar5 >> 8
                                    );
            puVar21[iVar15] = uVar7;
            pbVar17 = pbVar17 + param_2;
          }
          puVar21 = (ushort *)((int)puVar21 + iVar13);
          pbVar20 = pbVar20 + iVar14;
          iVar19 = iVar19 + iVar8;
        }
      }
      else {
        for (; iVar18 < iVar12; iVar18 = iVar18 + 1) {
          pbVar17 = pbVar20;
          for (iVar15 = 0; iVar15 < iVar6; iVar15 = iVar15 + 1) {
            uVar7 = FUN_ram_40055848(pbVar17,puVar21[iVar15],*(undefined1 *)(iVar19 + iVar15));
            puVar21[iVar15] = uVar7;
            pbVar17 = pbVar17 + param_2;
          }
          puVar21 = (ushort *)((int)puVar21 + iVar13);
          pbVar20 = pbVar20 + iVar14;
          iVar19 = iVar19 + iVar8;
        }
      }
    }
  }
  else {
    for (iStack_48 = 0; iStack_48 < iVar12; iStack_48 = iStack_48 + 1) {
      puVar16 = puVar21;
      pbVar17 = pbVar20;
      for (iStack_4c = 0; iStack_4c < iVar6; iStack_4c = iStack_4c + 1) {
        if (cVar3 == '\x02') {
          uVar7 = *puVar16;
          uVar11 = (uint)(uVar7 >> 0xb) - (uint)(pbVar17[2] >> 3);
          if ((int)uVar11 < 0) {
            uVar11 = 0;
          }
          iVar18 = ((uVar7 & 0x7ff) >> 5) - (uint)(pbVar17[1] >> 2);
          if (iVar18 < 0) {
            iVar18 = 0;
          }
          uVar9 = (uVar11 & 0x1f) * 0x800 + iVar18 * 0x20 & 0xffff;
          uVar11 = (uVar7 & 0x1f) - (uint)(*pbVar17 >> 3);
          if ((int)uVar11 < 0) {
            uVar11 = 0;
          }
LAB_ram_40055a42:
          uVar9 = uVar9 + uVar11;
        }
        else {
          if (cVar3 != '\x03') {
            if (cVar3 != '\x01') {
              return;
            }
            uVar7 = *puVar16;
            uVar9 = (uint)(pbVar17[2] >> 3) + (uint)(uVar7 >> 0xb);
            if (0x1f < uVar9) {
              uVar9 = 0x1f;
            }
            uVar10 = (uint)(pbVar17[1] >> 2) + ((uVar7 & 0x7ff) >> 5);
            if (0x3f < uVar10) {
              uVar10 = 0x3f;
            }
            uVar11 = (uint)(*pbVar17 >> 3) + (uVar7 & 0x1f);
            uVar9 = (uVar9 & 0x1f) * 0x800 + uVar10 * 0x20 & 0xffff;
            if (0x1f < uVar11) {
              uVar11 = 0x1f;
            }
            goto LAB_ram_40055a42;
          }
          uVar7 = *puVar16;
          uVar9 = ((int)((uint)(pbVar17[2] >> 3) * (uint)(uVar7 >> 0xb)) >> 5) * 0x800 +
                  ((int)((uint)(pbVar17[1] >> 2) * ((uVar7 & 0x7ff) >> 5)) >> 6) * 0x20 +
                  ((int)((uint)(*pbVar17 >> 3) * (uVar7 & 0x1f)) >> 5);
        }
        uVar11 = uVar5;
        if ((iVar19 != 0) && (uVar11 = (uint)*(byte *)(iVar19 + iStack_4c), uVar5 < 0xfd)) {
          uVar11 = uVar11 * uVar5 >> 8;
        }
        uVar7 = FUN_ram_40055804(uVar9 & 0xffff,*puVar16,uVar11);
        *puVar16 = uVar7;
        pbVar17 = pbVar17 + param_2;
        puVar16 = puVar16 + 1;
      }
      puVar21 = (ushort *)((int)puVar21 + iVar13);
      pbVar20 = pbVar20 + iVar14;
      if (iVar19 != 0) {
        iVar19 = iVar19 + iVar8;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40055b56.
 * REA evidence: ev_ebc1e47d8240068e5c6ee1a78af50852c2160685b69c7b42db21bd4243478309
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40055b56(undefined4 *param_1)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  
  iVar3 = param_1[1];
  iVar17 = param_1[2];
  iVar6 = FUN_ram_4004ad60(param_1[6]);
  puVar12 = (undefined1 *)param_1[4];
  uVar15 = (uint)*(byte *)((int)param_1 + 0x1b);
  puVar2 = (ushort *)*param_1;
  iVar16 = param_1[3];
  uVar4 = (ushort)iVar6;
  if (puVar12 == (undefined1 *)0x0) {
    if (uVar15 < 0xfd) {
      iVar7 = *puVar2 + 1;
      uVar19 = 0;
      for (iVar18 = 0; iVar18 < iVar17; iVar18 = iVar18 + 1) {
        bVar1 = ((uint)puVar2 & 3) != 0;
        if (bVar1) {
          uVar4 = FUN_ram_40055804(iVar6,*puVar2,uVar15);
          *puVar2 = uVar4;
        }
        uVar13 = (uint)bVar1;
        puVar10 = puVar2 + uVar13;
        for (uVar11 = uVar13; (int)uVar11 < iVar3 + -2; uVar11 = uVar11 + 2) {
          uVar4 = puVar10[1];
          uVar5 = *puVar10;
          if (uVar5 == uVar4) {
            if (*(int *)puVar10 == iVar7) {
              *(undefined4 *)puVar10 = uVar19;
            }
            else {
              uVar4 = FUN_ram_40055804(iVar6,uVar5,uVar15);
              iVar7 = *(int *)puVar10;
              *puVar10 = uVar4;
              puVar10[1] = uVar4;
              uVar19 = *(undefined4 *)puVar10;
            }
          }
          else {
            uVar5 = FUN_ram_40055804(iVar6,uVar5,uVar15);
            *puVar10 = uVar5;
            uVar4 = FUN_ram_40055804(iVar6,uVar4,uVar15);
            puVar10[1] = uVar4;
          }
          puVar10 = puVar10 + 2;
        }
        uVar11 = 0;
        if ((int)uVar13 < iVar3) {
          uVar11 = (iVar3 + -1) - uVar13 & 0xfffffffe;
        }
        for (iVar14 = uVar13 + uVar11; iVar14 < iVar3; iVar14 = iVar14 + 1) {
          uVar4 = FUN_ram_40055804(iVar6,puVar2[iVar14],uVar15);
          puVar2[iVar14] = uVar4;
        }
        puVar2 = (ushort *)((int)puVar2 + iVar16);
      }
    }
    else {
      iVar6 = iVar6 * 0x10001;
      for (iVar7 = 0; iVar7 < iVar17; iVar7 = iVar7 + 1) {
        puVar9 = puVar2 + iVar3;
        puVar8 = puVar2 + (iVar3 - 1U & 0xfffffff0);
        puVar10 = puVar2;
        if (((uint)puVar2 & 3) != 0) {
          puVar10 = puVar2 + 1;
          *puVar2 = uVar4;
          puVar2 = puVar10;
        }
        for (; puVar10 < puVar8; puVar10 = puVar10 + 0x10) {
          *(int *)puVar10 = iVar6;
          *(int *)(puVar10 + 2) = iVar6;
          *(int *)(puVar10 + 4) = iVar6;
          *(int *)(puVar10 + 6) = iVar6;
          *(int *)(puVar10 + 8) = iVar6;
          *(int *)(puVar10 + 10) = iVar6;
          *(int *)(puVar10 + 0xc) = iVar6;
          *(int *)(puVar10 + 0xe) = iVar6;
        }
        uVar15 = 0;
        if ((ushort *)((int)puVar2 + -0x1f) <= puVar8) {
          uVar15 = (int)puVar8 + (0x1f - (int)puVar2) & 0xffffffe0;
        }
        puVar2 = (ushort *)((int)puVar2 + uVar15);
        for (puVar10 = puVar2; puVar10 < puVar9; puVar10 = puVar10 + 1) {
          *puVar10 = uVar4;
        }
        uVar15 = 0;
        if ((ushort *)((int)puVar2 + -1) <= puVar9) {
          uVar15 = (int)puVar9 + (1 - (int)puVar2) & 0xfffffffe;
        }
        puVar2 = (ushort *)((int)puVar2 + uVar15 + iVar16 + iVar3 * -2);
      }
    }
  }
  else {
    iVar7 = param_1[5];
    if (uVar15 < 0xfd) {
      for (iVar18 = 0; iVar18 < iVar17; iVar18 = iVar18 + 1) {
        for (iVar14 = 0; iVar14 < iVar3; iVar14 = iVar14 + 1) {
          uVar4 = FUN_ram_40055804(iVar6,puVar2[iVar14],(byte)puVar12[iVar14] * uVar15 >> 8);
          puVar2[iVar14] = uVar4;
        }
        puVar2 = (ushort *)((int)puVar2 + iVar16);
        puVar12 = puVar12 + iVar7;
      }
    }
    else {
      puVar2 = puVar2 + 1;
      for (iVar18 = 0; puVar10 = puVar2 + -1, iVar18 < iVar17; iVar18 = iVar18 + 1) {
        bVar1 = ((uint)puVar12 & 1) != 0;
        if (bVar1) {
          uVar5 = FUN_ram_40055804(iVar6,*puVar10,*puVar12);
          *puVar10 = uVar5;
        }
        uVar11 = (uint)bVar1;
        for (uVar15 = uVar11; (int)uVar15 < iVar3 + -1; uVar15 = uVar15 + 2) {
          if (*(short *)(puVar12 + uVar15) == -1) {
            puVar10[uVar15] = uVar4;
            puVar2[uVar15] = uVar4;
          }
          else if (*(short *)(puVar12 + uVar15) != 0) {
            uVar5 = FUN_ram_40055804(iVar6,puVar10[uVar15],puVar12[uVar15]);
            puVar10[uVar15] = uVar5;
            uVar5 = FUN_ram_40055804(iVar6,puVar2[uVar15],puVar12[uVar15 + 1]);
            puVar2[uVar15] = uVar5;
          }
        }
        uVar15 = 0;
        if ((int)uVar11 <= iVar3) {
          uVar15 = iVar3 - uVar11 & 0xfffffffe;
        }
        iVar14 = uVar15 + uVar11;
        if (iVar14 < iVar3) {
          uVar5 = FUN_ram_40055804(iVar6,puVar10[iVar14],puVar12[iVar14]);
          puVar10[iVar14] = uVar5;
        }
        puVar12 = puVar12 + iVar7;
        puVar2 = (ushort *)((int)puVar2 + iVar16);
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40055dee.
 * REA evidence: ev_46b194808dd2d0c550e383dd7f55f4f70d2f791ae54141d738ca7503661e32fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40055dee(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ushort *puVar19;
  byte *pbVar20;
  ushort *puVar21;
  ushort *puVar22;
  byte *pbVar23;
  int iStack_48;
  
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 == 0x11) {
    uVar7 = 4;
LAB_ram_4005609a:
    FUN_ram_400558be(param_1,uVar7);
    return;
  }
  if (bVar1 < 0x12) {
    if (bVar1 == 0xf) {
      uVar7 = 3;
      goto LAB_ram_4005609a;
    }
    if (bVar1 == 0x10) {
      iVar8 = param_1[1];
      cVar2 = *(char *)((int)param_1 + 0x22);
      iVar14 = param_1[2];
      iVar9 = param_1[5];
      uVar3 = (uint)*(byte *)((int)param_1 + 0x21);
      puVar5 = (ushort *)*param_1;
      iVar15 = param_1[3];
      pbVar20 = (byte *)param_1[6];
      iVar16 = param_1[7];
      iVar17 = param_1[4];
      if (cVar2 == '\0') {
        if (iVar17 == 0) {
          iVar9 = 0;
          if (uVar3 < 0xfd) {
            for (; iVar9 < iVar14; iVar9 = iVar9 + 1) {
              pbVar23 = pbVar20;
              for (iVar17 = 0; iVar17 < iVar8; iVar17 = iVar17 + 1) {
                uVar6 = FUN_ram_40055848(pbVar23,puVar5[iVar17],pbVar23[3] * uVar3 >> 8);
                puVar5[iVar17] = uVar6;
                pbVar23 = pbVar23 + 4;
              }
              puVar5 = (ushort *)((int)puVar5 + iVar15);
              pbVar20 = pbVar20 + iVar16;
            }
          }
          else {
            for (iVar9 = 0; iVar9 < iVar14; iVar9 = iVar9 + 1) {
              pbVar23 = pbVar20;
              for (iVar17 = 0; iVar17 < iVar8; iVar17 = iVar17 + 1) {
                uVar6 = FUN_ram_40055848(pbVar23,puVar5[iVar17],pbVar23[3]);
                puVar5[iVar17] = uVar6;
                pbVar23 = pbVar23 + 4;
              }
              puVar5 = (ushort *)((int)puVar5 + iVar15);
              pbVar20 = pbVar20 + iVar16;
            }
          }
        }
        else {
          iVar18 = 0;
          if (uVar3 < 0xfd) {
            for (; iVar18 < iVar14; iVar18 = iVar18 + 1) {
              pbVar23 = pbVar20;
              for (iVar4 = 0; iVar4 < iVar8; iVar4 = iVar4 + 1) {
                uVar6 = FUN_ram_40055848(pbVar23,puVar5[iVar4],
                                         (uint)pbVar23[3] * (uint)*(byte *)(iVar17 + iVar4) * uVar3
                                         >> 0x10);
                puVar5[iVar4] = uVar6;
                pbVar23 = pbVar23 + 4;
              }
              puVar5 = (ushort *)((int)puVar5 + iVar15);
              pbVar20 = pbVar20 + iVar16;
              iVar17 = iVar17 + iVar9;
            }
          }
          else {
            for (iVar18 = 0; iVar18 < iVar14; iVar18 = iVar18 + 1) {
              pbVar23 = pbVar20;
              for (iVar4 = 0; iVar4 < iVar8; iVar4 = iVar4 + 1) {
                uVar6 = FUN_ram_40055848(pbVar23,puVar5[iVar4],
                                         (uint)pbVar23[3] * (uint)*(byte *)(iVar17 + iVar4) >> 8);
                puVar5[iVar4] = uVar6;
                pbVar23 = pbVar23 + 4;
              }
              puVar5 = (ushort *)((int)puVar5 + iVar15);
              pbVar20 = pbVar20 + iVar16;
              iVar17 = iVar17 + iVar9;
            }
          }
        }
      }
      else {
        for (iVar18 = 0; iVar18 < iVar14; iVar18 = iVar18 + 1) {
          puVar22 = puVar5;
          pbVar23 = pbVar20;
          for (iVar4 = 0; iVar4 < iVar8; iVar4 = iVar4 + 1) {
            if (cVar2 == '\x02') {
              uVar6 = *puVar22;
              uVar12 = (uint)(uVar6 >> 0xb) - (uint)(pbVar23[2] >> 3);
              if ((int)uVar12 < 0) {
                uVar12 = 0;
              }
              iVar13 = ((uVar6 & 0x7ff) >> 5) - (uint)(pbVar23[1] >> 2);
              if (iVar13 < 0) {
                iVar13 = 0;
              }
              uVar10 = (uVar12 & 0x1f) * 0x800 + iVar13 * 0x20 & 0xffff;
              uVar12 = (uVar6 & 0x1f) - (uint)(*pbVar23 >> 3);
              if ((int)uVar12 < 0) {
                uVar12 = 0;
              }
LAB_ram_40056222:
              uVar10 = uVar10 + uVar12;
            }
            else {
              if (cVar2 != '\x03') {
                if (cVar2 != '\x01') {
                  return;
                }
                uVar6 = *puVar22;
                uVar10 = (uint)(pbVar23[2] >> 3) + (uint)(uVar6 >> 0xb);
                if (0x1f < uVar10) {
                  uVar10 = 0x1f;
                }
                uVar11 = (uint)(pbVar23[1] >> 2) + ((uVar6 & 0x7ff) >> 5);
                if (0x3f < uVar11) {
                  uVar11 = 0x3f;
                }
                uVar12 = (uint)(*pbVar23 >> 3) + (uVar6 & 0x1f);
                uVar10 = (uVar10 & 0x1f) * 0x800 + uVar11 * 0x20 & 0xffff;
                if (0x1f < uVar12) {
                  uVar12 = 0x1f;
                }
                goto LAB_ram_40056222;
              }
              uVar6 = *puVar22;
              uVar10 = ((int)((uint)(pbVar23[2] >> 3) * (uint)(uVar6 >> 0xb)) >> 5) * 0x800 +
                       ((int)((uint)(pbVar23[1] >> 2) * ((uVar6 & 0x7ff) >> 5)) >> 6) * 0x20 +
                       ((int)((uint)(*pbVar23 >> 3) * (uVar6 & 0x1f)) >> 5);
            }
            if (iVar17 == 0) {
              uVar12 = (uint)pbVar23[3];
              if (uVar3 < 0xfd) {
                uVar12 = uVar3 * uVar12 >> 8;
              }
            }
            else {
              uVar12 = (uint)*(byte *)(iVar17 + iVar4);
              if (uVar3 < 0xfd) {
                uVar12 = uVar12 * uVar3 * (uint)pbVar23[3] >> 0x10;
              }
            }
            uVar6 = FUN_ram_40055804(uVar10 & 0xffff,*puVar22,uVar12);
            *puVar22 = uVar6;
            puVar22 = puVar22 + 1;
            pbVar23 = pbVar23 + 4;
          }
          puVar5 = (ushort *)((int)puVar5 + iVar15);
          pbVar20 = pbVar20 + iVar16;
          if (iVar17 != 0) {
            iVar17 = iVar17 + iVar9;
          }
        }
      }
    }
  }
  else if (bVar1 == 0x12) {
    iVar9 = param_1[5];
    cVar2 = *(char *)((int)param_1 + 0x22);
    iVar8 = param_1[1];
    iVar14 = param_1[2];
    uVar3 = (uint)*(byte *)((int)param_1 + 0x21);
    puVar5 = (ushort *)*param_1;
    iVar15 = param_1[3];
    puVar22 = (ushort *)param_1[6];
    iVar16 = param_1[7];
    iVar17 = param_1[4];
    if (cVar2 == '\0') {
      if (iVar17 == 0) {
        if (uVar3 < 0xfd) {
          for (iVar9 = 0; iVar9 < iVar14; iVar9 = iVar9 + 1) {
            for (iVar17 = 0; iVar17 < iVar8; iVar17 = iVar17 + 1) {
              uVar6 = FUN_ram_40055804(puVar22[iVar17],puVar5[iVar17],uVar3);
              puVar5[iVar17] = uVar6;
            }
            puVar5 = (ushort *)((int)puVar5 + iVar15);
            puVar22 = (ushort *)((int)puVar22 + iVar16);
          }
        }
        else {
          for (iVar9 = 0; iVar9 < iVar14; iVar9 = iVar9 + 1) {
            thunk_FUN_ram_400050c6(puVar5,puVar22,iVar8 << 1);
            puVar5 = (ushort *)((int)puVar5 + iVar15);
            puVar22 = (ushort *)((int)puVar22 + iVar16);
          }
        }
      }
      else {
        iVar18 = 0;
        if (uVar3 < 0xfd) {
          for (; iVar18 < iVar14; iVar18 = iVar18 + 1) {
            for (iVar4 = 0; iVar4 < iVar8; iVar4 = iVar4 + 1) {
              uVar6 = FUN_ram_40055804(puVar22[iVar4],puVar5[iVar4],
                                       *(byte *)(iVar17 + iVar4) * uVar3 >> 8);
              puVar5[iVar4] = uVar6;
            }
            puVar5 = (ushort *)((int)puVar5 + iVar15);
            puVar22 = (ushort *)((int)puVar22 + iVar16);
            iVar17 = iVar17 + iVar9;
          }
        }
        else {
          for (iVar18 = 0; iVar18 < iVar14; iVar18 = iVar18 + 1) {
            for (iVar4 = 0; iVar4 < iVar8; iVar4 = iVar4 + 1) {
              uVar6 = FUN_ram_40055804(puVar22[iVar4],puVar5[iVar4],*(undefined1 *)(iVar17 + iVar4))
              ;
              puVar5[iVar4] = uVar6;
            }
            puVar5 = (ushort *)((int)puVar5 + iVar15);
            puVar22 = (ushort *)((int)puVar22 + iVar16);
            iVar17 = iVar17 + iVar9;
          }
        }
      }
    }
    else {
      for (iStack_48 = 0; iStack_48 < iVar14; iStack_48 = iStack_48 + 1) {
        puVar19 = puVar5;
        puVar21 = puVar22;
        for (iVar18 = 0; iVar18 < iVar8; iVar18 = iVar18 + 1) {
          if (cVar2 == '\x02') {
            if (*puVar21 != 0) {
              uVar6 = *puVar19;
              uVar12 = (uint)(uVar6 >> 0xb) - (uint)(*puVar21 >> 0xb);
              if ((int)uVar12 < 0) {
                uVar12 = 0;
              }
              iVar4 = ((uVar6 & 0x7ff) >> 5) - ((*puVar21 & 0x7ff) >> 5);
              if (iVar4 < 0) {
                iVar4 = 0;
              }
              uVar10 = (uVar6 & 0x1f) - (*puVar21 & 0x1f);
              uVar12 = (uVar12 & 0x1f) * 0x800 + iVar4 * 0x20 & 0xffff;
              if ((int)uVar10 < 0) {
                uVar10 = 0;
              }
              goto LAB_ram_40055f8e;
            }
          }
          else if (cVar2 == '\x03') {
            uVar10 = (uint)*puVar21;
            if (uVar10 != 0xffff) {
              uVar6 = *puVar19;
              uVar12 = ((int)((uint)(uVar6 >> 0xb) * (uint)(*puVar21 >> 0xb)) >> 5) * 0x800 +
                       ((int)(((uVar6 & 0x7ff) >> 5) * ((uVar10 & 0x7ff) >> 5)) >> 6) * 0x20;
              uVar10 = (int)((uVar6 & 0x1f) * (uVar10 & 0x1f)) >> 5;
              goto LAB_ram_40055f8e;
            }
          }
          else {
            if (cVar2 != '\x01') {
              return;
            }
            if (*puVar21 != 0) {
              uVar6 = *puVar19;
              uVar12 = (uint)(uVar6 >> 0xb) + (uint)(*puVar21 >> 0xb);
              if (0x1f < uVar12) {
                uVar12 = 0x1f;
              }
              uVar11 = ((uVar6 & 0x7ff) >> 5) + ((*puVar21 & 0x7ff) >> 5);
              if (0x3f < uVar11) {
                uVar11 = 0x3f;
              }
              uVar10 = (*puVar21 & 0x1f) + (uVar6 & 0x1f);
              uVar12 = (uVar12 & 0x1f) * 0x800 + uVar11 * 0x20 & 0xffff;
              if (0x1f < uVar10) {
                uVar10 = 0x1f;
              }
LAB_ram_40055f8e:
              uVar11 = uVar3;
              if ((iVar17 != 0) && (uVar11 = (uint)*(byte *)(iVar17 + iVar18), uVar3 < 0xfd)) {
                uVar11 = uVar11 * uVar3 >> 8;
              }
              uVar6 = FUN_ram_40055804(uVar12 + uVar10 & 0xffff,*puVar19,uVar11);
              *puVar19 = uVar6;
            }
          }
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 1;
        }
        puVar5 = (ushort *)((int)puVar5 + iVar15);
        puVar22 = (ushort *)((int)puVar22 + iVar16);
        if (iVar17 != 0) {
          iVar17 = iVar17 + iVar9;
        }
      }
    }
  }
  return;
}


