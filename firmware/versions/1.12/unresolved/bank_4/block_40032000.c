/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40032000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4003219c.
 * REA evidence: ev_8e9602493f4806b6f955541756c8fbd545542783582c2db0860063cfb9115905
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003219c(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_40 [28];
  
  iVar9 = param_1 + 0x3c;
  uVar3 = FUN_ram_4003137c(iVar9);
  *(char *)(param_1 + 0x48) = (char)uVar3;
  uVar6 = (undefined1)((uint)uVar3 >> 8);
  *(undefined1 *)(param_1 + 0x49) = uVar6;
  uVar7 = (undefined1)((uint)uVar3 >> 0x10);
  *(undefined1 *)(param_1 + 0x4a) = uVar7;
  uVar2 = (undefined1)((uint)uVar3 >> 0x18);
  *(undefined1 *)(param_1 + 0x4b) = uVar2;
  *(char *)(param_1 + 0x20) = (char)uVar3;
  *(undefined1 *)(param_1 + 0x21) = uVar6;
  *(undefined1 *)(param_1 + 0x22) = uVar7;
  *(undefined1 *)(param_1 + 0x23) = uVar2;
  if (param_2 == 0) {
    return -6;
  }
  iVar4 = FUN_ram_40031ba8(0x15000);
  if (((iVar4 < 0) || (iVar4 = FUN_ram_40030d7c(0x15000,param_2,0x1000), iVar4 != 0x1000)) ||
     (iVar4 = FUN_ram_400319ba(0x15000,param_2), iVar4 != 0)) {
    return -4;
  }
  iVar4 = FUN_ram_4000559c(0x1000);
  if (iVar4 == 0) {
    return -5;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  uVar3 = FUN_ram_40031348(param_1);
  *(char *)(param_1 + 0x28) = (char)uVar3;
  *(char *)(param_1 + 0x29) = (char)((uint)uVar3 >> 8);
  *(char *)(param_1 + 0x2a) = (char)((uint)uVar3 >> 0x10);
  *(char *)(param_1 + 0x2b) = (char)((uint)uVar3 >> 0x18);
  FUN_ram_40030dcc(param_1,auStack_40);
  memset(iVar4,0xff,0x1000);
  FUN_ram_4000303c(iVar4,param_1,0x650);
  FUN_ram_4000303c(iVar4 + 0xff0,auStack_40,0x10);
  iVar8 = _DAT_ram_3007bbc4;
  iVar1 = 0xab000;
  if (_DAT_ram_3007bbc4 != 0xaa000) {
    iVar1 = 0xaa000;
  }
  iVar5 = FUN_ram_40031ba8(iVar1);
  if ((iVar5 < 0) || (iVar5 = FUN_ram_40030d7c(iVar1,iVar4,0xff0), iVar5 != 0xff0)) {
    iVar8 = -4;
    goto LAB_ram_400322c4;
  }
  iVar5 = FUN_ram_40030d7c(iVar1 + 0xff0,auStack_40,0x10);
  if ((iVar5 == 0x10) && (iVar5 = FUN_ram_400319ba(iVar1,iVar4), iVar5 == 0)) {
    if (iVar8 == 0) {
      if (iVar1 == 0xaa000) {
        iVar1 = 0xab000;
      }
      else {
        iVar1 = 0xaa000;
      }
      iVar8 = FUN_ram_40031ba8(iVar1);
      if ((((iVar8 < 0) || (iVar8 = FUN_ram_40030d7c(iVar1,iVar4,0xff0), iVar8 != 0xff0)) ||
          (iVar8 = FUN_ram_40030d7c(iVar1 + 0xff0,auStack_40,0x10), iVar8 != 0x10)) ||
         (iVar8 = FUN_ram_400319ba(iVar1,iVar4), iVar8 != 0)) goto LAB_ram_400323a8;
    }
    _DAT_ram_3007bbc8 = *(undefined4 *)(param_1 + 8);
    iVar8 = 0;
    _DAT_ram_3007bbc4 = iVar1;
  }
  else {
LAB_ram_400323a8:
    _DAT_ram_3007b5ac = 7;
    iVar8 = -8;
  }
LAB_ram_400322c4:
  FUN_ram_400055d4(iVar4);
  if (iVar8 == 0) {
    iVar8 = FUN_ram_40031c5e(*(undefined4 *)(param_1 + 0xc),param_2);
    if ((iVar8 == 0) && (iVar8 = FUN_ram_40031bec(iVar9), iVar8 == 0)) {
      FUN_ram_4000303c(0x3007b5b0,iVar9,0x614);
      _DAT_ram_3007b56c = *(undefined4 *)(param_1 + 0x44);
      _DAT_ram_3007b574 = *(undefined4 *)(param_1 + 0x48);
      _DAT_ram_3007b578 = _DAT_ram_3007b56c;
    }
    else {
      _DAT_ram_3007b5ac = 7;
    }
  }
  return iVar8;
}


/* NanoCore 1.12, address 0x40032424.
 * REA evidence: ev_c5ea99a581dff00d71a59de183b3cf14ac45cc3a42bd641ae784ae0006d5a7ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40032424(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 4;
  }
  iVar1 = FUN_ram_40030d2c(param_1,param_2,0x614);
  uVar3 = 5;
  if (iVar1 == 0x614) {
    iVar1 = FUN_ram_400310d4(param_2,0x614);
    uVar3 = 3;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_400313ae(param_2);
      uVar3 = 0;
      if (iVar1 == 0) {
        iVar1 = FUN_ram_40030bc4(param_2);
        if ((iVar1 != 0) && (iVar1 = FUN_ram_400312ec(param_2), iVar1 != 0)) {
          if (*(int *)(param_2 + 0x10) != 0x50543232) {
            return 1;
          }
          if ((*(int *)(param_2 + 8) != 0) &&
             (iVar1 = *(int *)(param_2 + 0xc), iVar2 = FUN_ram_4003137c(param_2), iVar1 != iVar2)) {
            return 2;
          }
        }
        uVar3 = 4;
      }
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4003243a.
 * REA evidence: ev_d092906f7b745b69a45ebe5bf1138965333c738a3c05f50adae8a2246d462e1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003243a(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40030d2c(param_1,param_2,0x614);
  uVar3 = 5;
  if (iVar1 == 0x614) {
    iVar1 = FUN_ram_400310d4(param_2,0x614);
    uVar3 = 3;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_400313ae(param_2);
      uVar3 = 0;
      if (iVar1 == 0) {
        iVar1 = FUN_ram_40030bc4(param_2);
        if ((iVar1 != 0) && (iVar1 = FUN_ram_400312ec(param_2), iVar1 != 0)) {
          if (*(int *)(param_2 + 0x10) != 0x50543232) {
            return 1;
          }
          if ((*(int *)(param_2 + 8) != 0) &&
             (iVar1 = *(int *)(param_2 + 0xc), iVar2 = FUN_ram_4003137c(param_2), iVar1 != iVar2)) {
            return 2;
          }
        }
        uVar3 = 4;
      }
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x400324f0.
 * REA evidence: ev_ac93bca412af248a01700f8ded36ad828f88cded767e4c39bded9361753057b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400324f0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  undefined4 uVar23;
  uint uVar24;
  int *piVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iStack_74;
  int iStack_68;
  byte bStack_4d;
  uint auStack_4c [6];
  
  bStack_4d = 0;
  auStack_4c[1] = 0;
  auStack_4c[2] = 0;
  if (_DAT_ram_3007b5ac - 1 < 4) {
    return (int)*(char *)(_DAT_ram_3007b5ac + 0x4009c57b);
  }
  iVar9 = FUN_ram_40030cfa();
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_ram_4000559c(0x614);
  iVar10 = FUN_ram_4000559c(0x614);
  piVar11 = (int *)FUN_ram_4000559c(0x614);
  iVar12 = FUN_ram_4000559c(0x650);
  iVar13 = FUN_ram_4000559c(0x650);
  piVar14 = (int *)FUN_ram_4000559c(0x650);
  if ((((iVar9 == 0) || (iVar10 == 0)) || (piVar11 == (int *)0x0)) || (iVar12 == 0)) {
    iVar17 = -5;
    if (piVar14 != (int *)0x0) {
LAB_ram_40032f78:
      iVar17 = -5;
      goto LAB_ram_40033018;
    }
LAB_ram_40033020:
    if (iVar13 != 0) {
LAB_ram_40032f7e:
      FUN_ram_400055d4(iVar13);
    }
    if (iVar12 == 0) goto LAB_ram_4003302e;
  }
  else {
    if (iVar13 != 0) {
      if (piVar14 != (int *)0x0) {
        iVar15 = FUN_ram_40032424(0,iVar9);
        iVar16 = FUN_ram_40032424(0x11000,iVar10);
        if ((iVar15 == 5) || (iVar16 == 5)) {
          iVar27 = 0;
          bVar2 = false;
          iVar26 = -4;
        }
        else if ((iVar15 == 6) || (iVar16 == 6)) {
          iVar27 = 0;
          bVar2 = false;
          iVar26 = -5;
        }
        else if (iVar15 == 0) {
          iVar17 = iVar9;
          if (iVar16 == 0) {
            if (*(int *)(iVar9 + 8) == *(int *)(iVar10 + 8)) {
              iVar17 = FUN_ram_40002fdc(iVar9,iVar10,0x614);
              iVar27 = iVar9;
              if (iVar17 != 0) goto LAB_ram_4003277a;
            }
            else {
              iVar26 = FUN_ram_40030b9a();
              iVar27 = iVar10;
              if (iVar26 != 0) goto LAB_ram_400326ea;
            }
            FUN_ram_4000303c(piVar11,iVar27,0x614);
          }
          else {
LAB_ram_400326ea:
            FUN_ram_4000303c(piVar11,iVar17,0x614);
          }
          iVar26 = 0;
          iVar27 = 0;
          bVar2 = true;
        }
        else {
          iVar17 = iVar10;
          if (iVar16 == 0) goto LAB_ram_400326ea;
          iVar17 = iVar9;
          if ((iVar15 == 1) || (iVar17 = iVar10, iVar16 == 1)) {
            FUN_ram_4000303c(piVar11,iVar17,0x614);
            iVar27 = 0;
          }
          else if (iVar15 == 2) {
            FUN_ram_4000303c(piVar11,iVar9,0x614);
            iVar27 = 1;
          }
          else {
            if (iVar16 != 2) {
              if (iVar15 == 3) {
                iVar27 = 0;
                bVar2 = false;
                iVar26 = -1;
                if (iVar16 == 3) goto LAB_ram_40032642;
              }
LAB_ram_4003277a:
              bVar2 = false;
              iVar27 = 0;
              iVar26 = -3;
              goto LAB_ram_40032642;
            }
            FUN_ram_4000303c(piVar11,iVar10,0x614);
            iVar27 = 2;
          }
          iVar26 = 0;
          bVar2 = false;
        }
LAB_ram_40032642:
        iVar17 = iVar26;
        if (iVar26 + 5U < 2) goto LAB_ram_40033018;
        iVar18 = FUN_ram_40031a3e(0xaa000,iVar12);
        iVar19 = FUN_ram_40031a3e(0xab000,iVar13);
        if ((iVar18 == 4) || (iVar19 == 4)) {
          uVar23 = 0;
          iVar28 = -4;
        }
        else if ((iVar18 == 5) || (iVar19 == 5)) {
          uVar23 = 0;
          iVar28 = -5;
        }
        else if (iVar18 == 0) {
          if (iVar19 == 0) {
            if (*(int *)(iVar12 + 8) == *(int *)(iVar13 + 8)) {
              iVar17 = FUN_ram_40002fdc(iVar12,iVar13,0x650);
              if (iVar17 != 0) {
                uVar23 = 0;
                iVar28 = -3;
                goto LAB_ram_400327b0;
              }
            }
            else {
              iVar17 = FUN_ram_40030b9a();
              if (iVar17 != 0) goto LAB_ram_400327a2;
            }
            FUN_ram_4000303c(piVar14,iVar13,0x650);
LAB_ram_4003298a:
            iVar28 = 0;
            uVar23 = 0xab000;
          }
          else {
LAB_ram_400327a2:
            FUN_ram_4000303c(piVar14,iVar12,0x650);
            iVar28 = 0;
            uVar23 = 0xaa000;
          }
        }
        else {
          if (iVar19 == 0) {
            FUN_ram_4000303c(piVar14,iVar13,0x650);
            goto LAB_ram_4003298a;
          }
          uVar23 = 0;
          iVar28 = 1;
        }
LAB_ram_400327b0:
        iVar17 = iVar28;
        if ((iVar28 + 5U < 2) || (iVar17 = -3, iVar28 == -3)) goto LAB_ram_40033018;
        if (iVar28 == 0) {
          bVar1 = false;
          if (iVar18 == 0 && iVar19 == 0) {
            if (*(int *)(iVar12 + 8) == *(int *)(iVar13 + 8)) {
              iVar17 = FUN_ram_40002fdc(iVar12,iVar13,0x650);
              bVar1 = false;
              if (iVar17 == 0) {
                iVar17 = FUN_ram_40002fdc(piVar14,iVar12,0x650);
                bVar1 = iVar17 == 0;
              }
            }
            else {
              iVar21 = FUN_ram_40030b9a();
              iVar17 = iVar12;
              iVar20 = iVar13;
              if (iVar21 == 0) {
                iVar17 = iVar13;
                iVar20 = iVar12;
              }
              iVar21 = FUN_ram_40002fdc(piVar14,iVar17,0x650);
              if (iVar21 == 0) {
                bVar1 = false;
                if (*(int *)(iVar17 + 0x10) == *(int *)(iVar20 + 8)) {
                  bVar1 = *(int *)(iVar17 + 0x14) == *(int *)(iVar20 + 0x20);
                }
              }
              else {
                bVar1 = false;
              }
            }
          }
          bVar7 = iVar18 == 3 || iVar19 == 3;
        }
        else {
          bVar7 = false;
          bVar1 = false;
        }
        _DAT_ram_3007bbc8 = 0;
        if (iVar28 == 0) {
          _DAT_ram_3007bbc8 = piVar14[2];
        }
        _DAT_ram_3007bbc4 = uVar23;
        if (iVar26 == 0) {
          iStack_74 = 0;
          if (bVar2 || iVar27 != 0) {
            iStack_74 = piVar11[2];
          }
          iStack_68 = FUN_ram_4003137c(piVar11);
          iVar17 = FUN_ram_40031f1a(piVar11,iVar9,iVar15,iVar10,iVar16,iVar27,&bStack_4d,
                                    auStack_4c + 1);
          bVar8 = bStack_4d;
          if (iVar17 + 5U < 2) goto LAB_ram_40033018;
          iVar19 = iStack_74;
          if (((((bStack_4d & 1) != 0) && (iVar15 == 2)) &&
              (iVar19 = *(int *)(iVar9 + 8), iStack_74 != 0)) &&
             (iVar18 = FUN_ram_40030b9a(iVar19,iStack_74), iVar18 == 0)) {
            iVar19 = iStack_74;
          }
          iVar18 = iVar19;
          if ((((bVar8 & 2) != 0) && (iVar16 == 2)) &&
             ((iVar18 = *(int *)(iVar10 + 8), iVar19 != 0 &&
              (iVar20 = FUN_ram_40030b9a(iVar18,iVar19), iVar20 == 0)))) {
            iVar18 = iVar19;
            if (iVar28 != 0) goto LAB_ram_4003296a;
LAB_ram_4003307c:
            iVar19 = FUN_ram_40030b9a(iVar18,piVar14[2]);
            bVar5 = iVar19 != 0;
LAB_ram_400330a2:
            if (bVar8 != 0) {
              piVar25 = piVar11 + 5;
              piVar22 = piVar14 + 0x14;
              uVar24 = 0;
              do {
                if (((auStack_4c[(uVar24 >> 5) + 1] >> (uVar24 & 0x1f) & 1) != 0) &&
                   (iVar19 = FUN_ram_40002fdc(piVar25,piVar22,0x18), iVar19 != 0)) {
                  bVar6 = true;
                  goto LAB_ram_40032fa4;
                }
                uVar24 = uVar24 + 1 & 0xff;
                piVar25 = piVar25 + 6;
                piVar22 = piVar22 + 6;
              } while (uVar24 != 0x40);
            }
            bVar6 = false;
LAB_ram_40032fa4:
            bVar3 = false;
            if (bVar2) {
              iVar19 = FUN_ram_40002fdc(piVar11,piVar14 + 0xf,0x614);
              bVar3 = iVar19 == 0;
            }
            bVar4 = false;
            if ((iVar27 == 0) && (piVar14[4] == iStack_74)) {
              bVar4 = piVar14[5] == iStack_68;
            }
            if (!bVar6) goto LAB_ram_40032a7e;
            if (iVar17 != 0) goto LAB_ram_40033018;
            if (bVar7) {
              bVar5 = true;
              goto LAB_ram_40032a86;
            }
LAB_ram_4003296e:
            FUN_ram_4000303c(0x3007b5b0,piVar11,0x614);
            goto LAB_ram_40032e44;
          }
          if (iVar28 == 0) {
            bVar5 = false;
            if (iVar18 != 0) goto LAB_ram_4003307c;
            goto LAB_ram_400330a2;
          }
LAB_ram_4003296a:
          if (iVar17 == 0) goto LAB_ram_4003296e;
        }
        else {
          iVar17 = iVar26;
          if (iVar28 != 0) goto LAB_ram_40033018;
          bVar5 = false;
          bVar4 = false;
          iVar18 = 0;
          iVar17 = -3;
          iStack_74 = 0;
          iStack_68 = 0;
          bVar3 = false;
LAB_ram_40032a7e:
          if (bVar7) {
LAB_ram_40032a86:
            if (bVar4 || bVar3) goto LAB_ram_4003296a;
          }
          if (bVar5) goto LAB_ram_4003296a;
          auStack_4c[0] = 0;
          if ((iVar15 - 2U & 0xfffffffd) != 0) {
LAB_ram_40032ab6:
            if ((iVar15 == 3) && (bVar1)) goto LAB_ram_40032ac4;
            if (!bVar7) {
LAB_ram_40032b42:
              if (iVar26 != 0) goto LAB_ram_40032b12;
              iVar17 = piVar14[2];
              if (((iVar18 != iVar17) || (iVar18 == iStack_74)) ||
                 ((*piVar11 == piVar14[0xf] &&
                  ((((short)piVar11[1] == (short)piVar14[0x10] && (piVar11[4] == piVar14[0x13])) &&
                   (iVar26 = FUN_ram_40002fdc(piVar11 + 5,piVar14 + 0x14,0x600), iVar26 == 0)))))) {
                if (bVar2) {
                  if (iVar17 == piVar11[2]) {
                    if (piVar11[3] != piVar14[8]) goto LAB_ram_40032b3a;
                    if (iVar27 != 0) goto LAB_ram_40032ca2;
                  }
                }
                else if ((iVar27 != 0) && (iVar17 == piVar11[2])) {
LAB_ram_40032ca2:
                  iVar27 = FUN_ram_40002fdc(piVar11,piVar14 + 0xf,0xc);
                  if (((iVar27 != 0) ||
                      (iVar27 = FUN_ram_40002fdc(piVar11 + 4,piVar14 + 0x13,0x604), iVar27 != 0)) &&
                     (iVar27 = FUN_ram_400312b2(iVar9,piVar14 + 0xf), iVar27 == 0))
                  goto LAB_ram_40032b3a;
                }
                if ((iVar18 != 0) && (iVar17 = FUN_ram_40030b9a(iVar17,iVar18), iVar17 == 0))
                goto LAB_ram_40032b12;
                if (piVar14[4] == iStack_74) {
                  iVar17 = piVar14[5];
                  uVar24 = iStack_68;
                  goto LAB_ram_40032b0e;
                }
              }
            }
LAB_ram_40032b3a:
            iVar17 = -3;
            goto LAB_ram_40033018;
          }
          iVar17 = FUN_ram_40002fdc(iVar9,piVar14 + 0xf,0x14);
          if ((iVar17 != 0) || (iVar17 = FUN_ram_400312b2(iVar9,piVar14 + 0xf), iVar17 == 0))
          goto LAB_ram_40032ab6;
LAB_ram_40032ac4:
          iVar17 = FUN_ram_40031b1c(piVar14[3],auStack_4c);
          if (iVar17 != 0) goto LAB_ram_40033018;
          iVar17 = piVar14[7];
          uVar24 = auStack_4c[0];
          if (bVar7) {
LAB_ram_40032b0e:
            if (iVar17 != uVar24) goto LAB_ram_40032b3a;
          }
          else if (iVar17 != auStack_4c[0]) goto LAB_ram_40032b42;
LAB_ram_40032b12:
          if (((*piVar14 != 0x58545350) || (*(short *)((int)piVar14 + 6) != 0x40)) ||
             (iVar17 = FUN_ram_40030bac(piVar14[3]), iVar17 == 0)) goto LAB_ram_40032b3a;
          piVar22 = piVar14 + 0xf;
          iVar17 = FUN_ram_400313ae(piVar22);
          if (iVar17 == 0) goto LAB_ram_40032b3a;
          bVar2 = false;
          if (iVar15 == 0) {
            iVar17 = FUN_ram_40002fdc(iVar9,piVar22,0x614);
            bVar2 = iVar17 == 0;
          }
          iVar15 = FUN_ram_4000559c(0x1000);
          iVar17 = -5;
          if (iVar15 == 0) goto LAB_ram_40033018;
          iVar17 = -4;
          iVar27 = FUN_ram_40030d2c(piVar14[3],iVar15,0x1000);
          if (iVar27 == 0x1000) {
            iVar27 = FUN_ram_40007450(0,iVar15,0x1000);
            if (iVar27 == piVar14[7]) {
              iVar26 = 0;
              if (bVar2) {
                FUN_ram_4000303c(0x3007b5b0,piVar22,0x614);
                iVar17 = 0;
              }
              else {
LAB_ram_40032f3e:
                iVar17 = FUN_ram_40031bec(piVar22);
                if (iVar17 == 0) {
LAB_ram_40032f5a:
                  FUN_ram_4000303c(0x3007b5b0,piVar22,0x614);
                  iVar17 = 0;
                }
                else {
                  _DAT_ram_3007b5ac = 7;
                }
                if (iVar26 != 0) goto LAB_ram_40032f32;
              }
            }
            else {
              iVar26 = FUN_ram_4000559c(0x1000);
              if (iVar26 == 0) {
                iVar17 = -5;
              }
              else {
                iVar18 = FUN_ram_40030d2c(0x15000,iVar26,0x1000);
                if (iVar18 == 0x1000) {
                  iVar18 = FUN_ram_40007450(0,iVar26,0x1000);
                  if (iVar27 == piVar14[6]) {
                    iVar17 = -3;
                    if (iVar18 == piVar14[7]) goto LAB_ram_40032eee;
                  }
                  else if (iVar18 == piVar14[7]) {
LAB_ram_40032eee:
                    iVar17 = FUN_ram_40031c5e(piVar14[3],iVar26);
                    if (iVar17 == 0) {
                      if (!bVar2) goto LAB_ram_40032f3e;
                      goto LAB_ram_40032f5a;
                    }
                    _DAT_ram_3007b5ac = 7;
                  }
                  else {
                    iVar17 = -3;
                  }
                }
LAB_ram_40032f32:
                FUN_ram_400055d4(iVar26);
              }
            }
          }
          FUN_ram_400055d4(iVar15);
          iVar18 = _DAT_ram_3007b5b8;
          if (iVar17 != 0) goto LAB_ram_40033018;
          iStack_74 = _DAT_ram_3007b5b8;
          iStack_68 = FUN_ram_4003137c(0x3007b5b0);
          bStack_4d = 0;
          iVar17 = FUN_ram_40031f1a(0x3007b5b0,piVar22,0,iVar10,iVar16,0,&bStack_4d,auStack_4c + 1);
          if (iVar17 != 0) goto LAB_ram_40033018;
LAB_ram_40032e44:
          _DAT_ram_3007b578 = iStack_74;
          _DAT_ram_3007b574 = iStack_68;
          if (0x3f < _DAT_ram_3007b5b6) {
            _DAT_ram_3007b5b6 = 0;
          }
          DAT_ram_3007b561 = 0;
          _DAT_ram_3007b56c = iVar18;
          iVar17 = FUN_ram_400317a6();
        }
LAB_ram_40033018:
        FUN_ram_400055d4(piVar14);
        goto LAB_ram_40033020;
      }
      iVar17 = -5;
      goto LAB_ram_40032f7e;
    }
    iVar17 = -5;
    if (piVar14 != (int *)0x0) goto LAB_ram_40032f78;
  }
  FUN_ram_400055d4(iVar12);
LAB_ram_4003302e:
  if (piVar11 != (int *)0x0) {
    FUN_ram_400055d4(piVar11);
  }
  if (iVar10 != 0) {
    FUN_ram_400055d4(iVar10);
  }
  if (iVar9 != 0) {
    FUN_ram_400055d4(iVar9);
  }
  _DAT_ram_3007b5ac = 5;
  if (iVar17 + 8U < 9) {
    _DAT_ram_3007b5ac = (uint)*(byte *)(iVar17 + 0x4009c578);
  }
  return iVar17;
}


