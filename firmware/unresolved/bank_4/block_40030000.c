/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40030000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40030158.
 * REA evidence: ev_c3a8df1a23a3eb32f18ee1b0b46b06230b35e9142a4fb03ae371bb36c1dfd2c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40030158(int param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
                byte *param_7,undefined4 *param_8)

{
  undefined1 *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uStack_6c;
  undefined1 auStack_58 [36];
  
  if (param_1 == 0) {
    return 0xfffffffa;
  }
  if (param_2 == 0) {
    return 0xfffffffa;
  }
  if (param_4 == 0) {
    return 0xfffffffa;
  }
  *param_7 = 0;
  *param_8 = 0;
  param_8[1] = 0;
  iVar3 = FUN_ram_40005666(0x400);
  iVar4 = FUN_ram_40005666(0x400);
  iVar5 = FUN_ram_40005666(0x340);
  if (iVar3 == 0) {
    uVar1 = 0xfffffffb;
    if (iVar5 != 0) goto LAB_ram_40030386;
    if (iVar4 == 0) {
      return 0xfffffffb;
    }
LAB_ram_400303c6:
    FUN_ram_400056c4(iVar4);
    uVar2 = uVar1;
  }
  else {
    if (iVar4 == 0) {
      uVar2 = 0xfffffffb;
      uVar1 = 0xfffffffb;
      if (iVar5 == 0) goto LAB_ram_40030394;
    }
    else {
      if (iVar5 == 0) {
        uVar1 = 0xfffffffb;
        goto LAB_ram_400303c6;
      }
      __s = (undefined1 *)(param_1 + 0x14);
      puVar11 = (undefined1 *)(param_2 + 0x14);
      puVar10 = (undefined1 *)(param_4 + 0x14);
      uStack_6c = 0;
      do {
        iVar6 = FUN_ram_4002ee46(__s);
        puVar12 = __s;
        if (iVar6 == 0) {
          if (param_3 < 2) {
            iVar6 = FUN_ram_4002ee46(puVar11);
            puVar12 = puVar11;
            if (iVar6 == 0) {
              if (param_5 < 2) goto LAB_ram_40030282;
LAB_ram_400302a8:
              puVar12 = (undefined1 *)0x0;
              if ((param_5 == 2) &&
                 (iVar6 = FUN_ram_4002ee46(puVar10), puVar12 = puVar10, iVar6 == 0))
              goto LAB_ram_400302ba;
            }
          }
          else if (param_5 < 2) {
LAB_ram_40030282:
            iVar6 = FUN_ram_4002ee46(puVar10);
            puVar12 = puVar10;
            if (iVar6 != 0) goto LAB_ram_400301f4;
            if (param_3 == 2) goto LAB_ram_4003029e;
LAB_ram_400302ba:
            puVar12 = (undefined1 *)0x0;
          }
          else {
            if (param_3 != 2) goto LAB_ram_400302a8;
LAB_ram_4003029e:
            iVar6 = FUN_ram_4002ee46(puVar11);
            puVar12 = puVar11;
            if (iVar6 == 0) goto LAB_ram_400302a8;
          }
        }
LAB_ram_400301f4:
        iVar6 = uStack_6c * 0x400 + 0x1000;
        iVar7 = FUN_ram_4002ef6a(iVar6,iVar3,0x400);
        if (((iVar7 != 0x400) || (iVar6 = FUN_ram_4002ef6a(iVar6,iVar4,0x400), iVar6 != 0x400)) ||
           (iVar6 = FUN_ram_40002ffc(iVar3,iVar4,0x400), iVar6 != 0)) {
          uVar1 = 0xfffffffc;
          goto LAB_ram_40030386;
        }
        iVar6 = FUN_ram_4002f332(__s);
        if ((iVar6 == 0) || (iVar6 = FUN_ram_4002f312(iVar3,0x400), iVar6 == 0)) {
          iVar6 = FUN_ram_4002f35e(__s,iVar3,iVar5,auStack_58);
          if (iVar6 == 0) {
            if (param_3 < 2) {
              iVar6 = FUN_ram_4002f35e(puVar11,iVar3,iVar5,auStack_58);
              if (iVar6 != 0) goto LAB_ram_400302f0;
              if (param_5 < 2) goto LAB_ram_40030336;
LAB_ram_40030314:
              if ((param_5 == 2) &&
                 (iVar6 = FUN_ram_4002f35e(puVar10,iVar3,iVar5,auStack_58), iVar6 != 0)) {
                bVar9 = *param_7 | 2;
                goto LAB_ram_400302d8;
              }
            }
            else {
              if (1 < param_5) {
                if (param_3 != 2) goto LAB_ram_40030314;
LAB_ram_4003035c:
                iVar6 = FUN_ram_4002f35e(puVar11,iVar3,iVar5,auStack_58);
                if (iVar6 != 0) {
                  bVar9 = *param_7 | 1;
                  goto LAB_ram_400302d8;
                }
                goto LAB_ram_40030314;
              }
LAB_ram_40030336:
              iVar6 = FUN_ram_4002f35e(puVar10,iVar3,iVar5,auStack_58);
              if (iVar6 != 0) goto LAB_ram_400302f0;
              if (param_3 == 2) goto LAB_ram_4003035c;
            }
            if (puVar12 == (undefined1 *)0x0) goto LAB_ram_40030350;
            iVar6 = FUN_ram_4002ee46(__s);
            if (iVar6 != 0) goto LAB_ram_40030256;
          }
          else {
            if (param_6 != 0) {
              bVar9 = *param_7 | (byte)param_6;
LAB_ram_400302d8:
              *param_7 = bVar9;
              uVar8 = (uStack_6c & 0xff) >> 5;
              param_8[uVar8] = param_8[uVar8] | 1 << (uStack_6c & 0x1f);
            }
LAB_ram_400302f0:
            puVar12 = auStack_58;
          }
          FUN_ram_4000305c(__s,puVar12,0x18);
        }
        else {
          memset(__s,0,0x18);
        }
LAB_ram_40030256:
        __s = __s + 0x18;
        uStack_6c = uStack_6c + 1;
        puVar11 = puVar11 + 0x18;
        puVar10 = puVar10 + 0x18;
      } while (uStack_6c != 0x40);
      uVar1 = 0;
      if ((param_6 != 0) && ((*param_7 & param_6) == 0)) {
LAB_ram_40030350:
        uVar1 = 0xfffffffd;
      }
    }
LAB_ram_40030386:
    FUN_ram_400056c4(iVar5);
    uVar2 = uVar1;
    if (iVar4 != 0) goto LAB_ram_400303c6;
  }
  if (iVar3 == 0) {
    return uVar2;
  }
LAB_ram_40030394:
  FUN_ram_400056c4(iVar3);
  return uVar2;
}


/* NanoCore 1.10, address 0x400303da.
 * REA evidence: ev_915046c0a8b37fbcf70f24ce398616db031de252735730fc935587323e46b44f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400303da(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *__s;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_40 [28];
  
  iVar8 = param_1 + 0x3c;
  uVar2 = FUN_ram_4002f5ba(iVar8);
  *(char *)(param_1 + 0x48) = (char)uVar2;
  uVar5 = (undefined1)((uint)uVar2 >> 8);
  *(undefined1 *)(param_1 + 0x49) = uVar5;
  uVar6 = (undefined1)((uint)uVar2 >> 0x10);
  *(undefined1 *)(param_1 + 0x4a) = uVar6;
  uVar1 = (undefined1)((uint)uVar2 >> 0x18);
  *(undefined1 *)(param_1 + 0x4b) = uVar1;
  *(char *)(param_1 + 0x20) = (char)uVar2;
  *(undefined1 *)(param_1 + 0x21) = uVar5;
  *(undefined1 *)(param_1 + 0x22) = uVar6;
  *(undefined1 *)(param_1 + 0x23) = uVar1;
  if (param_2 == 0) {
    return -6;
  }
  iVar3 = FUN_ram_4002fde6(0x15000);
  if (((iVar3 < 0) || (iVar3 = FUN_ram_4002efba(0x15000,param_2,0x1000), iVar3 != 0x1000)) ||
     (iVar3 = FUN_ram_4002fbf8(0x15000,param_2), iVar3 != 0)) {
    return -4;
  }
  __s = (void *)FUN_ram_40005666(0x1000);
  if (__s == (void *)0x0) {
    return -5;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  uVar2 = FUN_ram_4002f586(param_1);
  *(char *)(param_1 + 0x28) = (char)uVar2;
  *(char *)(param_1 + 0x29) = (char)((uint)uVar2 >> 8);
  *(char *)(param_1 + 0x2a) = (char)((uint)uVar2 >> 0x10);
  *(char *)(param_1 + 0x2b) = (char)((uint)uVar2 >> 0x18);
  FUN_ram_4002f00a(param_1,auStack_40);
  memset(__s,0xff,0x1000);
  FUN_ram_4000305c(__s,param_1,0x650);
  FUN_ram_4000305c((int)__s + 0xff0,auStack_40,0x10);
  iVar7 = _DAT_ram_3007b7f0;
  iVar3 = 0xab000;
  if (_DAT_ram_3007b7f0 != 0xaa000) {
    iVar3 = 0xaa000;
  }
  iVar4 = FUN_ram_4002fde6(iVar3);
  if ((iVar4 < 0) || (iVar4 = FUN_ram_4002efba(iVar3,__s,0xff0), iVar4 != 0xff0)) {
    iVar7 = -4;
    goto LAB_ram_40030502;
  }
  iVar4 = FUN_ram_4002efba(iVar3 + 0xff0,auStack_40,0x10);
  if ((iVar4 == 0x10) && (iVar4 = FUN_ram_4002fbf8(iVar3,__s), iVar4 == 0)) {
    if (iVar7 == 0) {
      if (iVar3 == 0xaa000) {
        iVar3 = 0xab000;
      }
      else {
        iVar3 = 0xaa000;
      }
      iVar7 = FUN_ram_4002fde6(iVar3);
      if ((((iVar7 < 0) || (iVar7 = FUN_ram_4002efba(iVar3,__s,0xff0), iVar7 != 0xff0)) ||
          (iVar7 = FUN_ram_4002efba(iVar3 + 0xff0,auStack_40,0x10), iVar7 != 0x10)) ||
         (iVar7 = FUN_ram_4002fbf8(iVar3,__s), iVar7 != 0)) goto LAB_ram_400305e6;
    }
    _DAT_ram_3007b7f4 = *(undefined4 *)(param_1 + 8);
    iVar7 = 0;
    _DAT_ram_3007b7f0 = iVar3;
  }
  else {
LAB_ram_400305e6:
    _DAT_ram_3007b1d8 = 7;
    iVar7 = -8;
  }
LAB_ram_40030502:
  FUN_ram_400056c4(__s);
  if (iVar7 == 0) {
    iVar7 = FUN_ram_4002fe9c(*(undefined4 *)(param_1 + 0xc),param_2);
    if ((iVar7 == 0) && (iVar7 = FUN_ram_4002fe2a(iVar8), iVar7 == 0)) {
      FUN_ram_4000305c(0x3007b1dc,iVar8,0x614);
      _DAT_ram_3007b198 = *(undefined4 *)(param_1 + 0x44);
      _DAT_ram_3007b1a0 = *(undefined4 *)(param_1 + 0x48);
      _DAT_ram_3007b1a4 = _DAT_ram_3007b198;
    }
    else {
      _DAT_ram_3007b1d8 = 7;
    }
  }
  return iVar7;
}


/* NanoCore 1.10, address 0x40030662.
 * REA evidence: ev_90fd1cf5d2c2d71140501c0b2bc19f91329cc40cc9544541e67fdd52101551f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030662(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 4;
  }
  iVar1 = FUN_ram_4002ef6a(param_1,param_2,0x614);
  uVar3 = 5;
  if (iVar1 == 0x614) {
    iVar1 = FUN_ram_4002f312(param_2,0x614);
    uVar3 = 3;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4002f5ec(param_2);
      uVar3 = 0;
      if (iVar1 == 0) {
        iVar1 = FUN_ram_4002ee02(param_2);
        if ((iVar1 != 0) && (iVar1 = FUN_ram_4002f52a(param_2), iVar1 != 0)) {
          if (*(int *)(param_2 + 0x10) != 0x50543232) {
            return 1;
          }
          if ((*(int *)(param_2 + 8) != 0) &&
             (iVar1 = *(int *)(param_2 + 0xc), iVar2 = FUN_ram_4002f5ba(param_2), iVar1 != iVar2)) {
            return 2;
          }
        }
        uVar3 = 4;
      }
    }
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4003072e.
 * REA evidence: ev_088738adb21ae89b150ac18ef0777fed33e661d4f00c233d3f3a0c5c56f515b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003072e(void)

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
  if (_DAT_ram_3007b1d8 - 1 < 4) {
    return (int)*(char *)(_DAT_ram_3007b1d8 + 0x40095457);
  }
  iVar9 = FUN_ram_4002ef38();
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_ram_40005666(0x614);
  iVar10 = FUN_ram_40005666(0x614);
  piVar11 = (int *)FUN_ram_40005666(0x614);
  iVar12 = FUN_ram_40005666(0x650);
  iVar13 = FUN_ram_40005666(0x650);
  piVar14 = (int *)FUN_ram_40005666(0x650);
  if ((((iVar9 == 0) || (iVar10 == 0)) || (piVar11 == (int *)0x0)) || (iVar12 == 0)) {
    iVar17 = -5;
    if (piVar14 != (int *)0x0) {
LAB_ram_400311b6:
      iVar17 = -5;
      goto LAB_ram_40031256;
    }
LAB_ram_4003125e:
    if (iVar13 != 0) {
LAB_ram_400311bc:
      FUN_ram_400056c4(iVar13);
    }
    if (iVar12 == 0) goto LAB_ram_4003126c;
  }
  else {
    if (iVar13 != 0) {
      if (piVar14 != (int *)0x0) {
        iVar15 = FUN_ram_40030662(0,iVar9);
        iVar16 = FUN_ram_40030662(0x11000,iVar10);
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
              iVar17 = FUN_ram_40002ffc(iVar9,iVar10,0x614);
              iVar27 = iVar9;
              if (iVar17 != 0) goto LAB_ram_400309b8;
            }
            else {
              iVar26 = FUN_ram_4002edd8();
              iVar27 = iVar10;
              if (iVar26 != 0) goto LAB_ram_40030928;
            }
            FUN_ram_4000305c(piVar11,iVar27,0x614);
          }
          else {
LAB_ram_40030928:
            FUN_ram_4000305c(piVar11,iVar17,0x614);
          }
          iVar26 = 0;
          iVar27 = 0;
          bVar2 = true;
        }
        else {
          iVar17 = iVar10;
          if (iVar16 == 0) goto LAB_ram_40030928;
          iVar17 = iVar9;
          if ((iVar15 == 1) || (iVar17 = iVar10, iVar16 == 1)) {
            FUN_ram_4000305c(piVar11,iVar17,0x614);
            iVar27 = 0;
          }
          else if (iVar15 == 2) {
            FUN_ram_4000305c(piVar11,iVar9,0x614);
            iVar27 = 1;
          }
          else {
            if (iVar16 != 2) {
              if (iVar15 == 3) {
                iVar27 = 0;
                bVar2 = false;
                iVar26 = -1;
                if (iVar16 == 3) goto LAB_ram_40030880;
              }
LAB_ram_400309b8:
              bVar2 = false;
              iVar27 = 0;
              iVar26 = -3;
              goto LAB_ram_40030880;
            }
            FUN_ram_4000305c(piVar11,iVar10,0x614);
            iVar27 = 2;
          }
          iVar26 = 0;
          bVar2 = false;
        }
LAB_ram_40030880:
        iVar17 = iVar26;
        if (iVar26 + 5U < 2) goto LAB_ram_40031256;
        iVar18 = FUN_ram_4002fc7c(0xaa000,iVar12);
        iVar19 = FUN_ram_4002fc7c(0xab000,iVar13);
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
              iVar17 = FUN_ram_40002ffc(iVar12,iVar13,0x650);
              if (iVar17 != 0) {
                uVar23 = 0;
                iVar28 = -3;
                goto LAB_ram_400309ee;
              }
            }
            else {
              iVar17 = FUN_ram_4002edd8();
              if (iVar17 != 0) goto LAB_ram_400309e0;
            }
            FUN_ram_4000305c(piVar14,iVar13,0x650);
LAB_ram_40030bc8:
            iVar28 = 0;
            uVar23 = 0xab000;
          }
          else {
LAB_ram_400309e0:
            FUN_ram_4000305c(piVar14,iVar12,0x650);
            iVar28 = 0;
            uVar23 = 0xaa000;
          }
        }
        else {
          if (iVar19 == 0) {
            FUN_ram_4000305c(piVar14,iVar13,0x650);
            goto LAB_ram_40030bc8;
          }
          uVar23 = 0;
          iVar28 = 1;
        }
LAB_ram_400309ee:
        iVar17 = iVar28;
        if ((iVar28 + 5U < 2) || (iVar17 = -3, iVar28 == -3)) goto LAB_ram_40031256;
        if (iVar28 == 0) {
          bVar1 = false;
          if (iVar18 == 0 && iVar19 == 0) {
            if (*(int *)(iVar12 + 8) == *(int *)(iVar13 + 8)) {
              iVar17 = FUN_ram_40002ffc(iVar12,iVar13,0x650);
              bVar1 = false;
              if (iVar17 == 0) {
                iVar17 = FUN_ram_40002ffc(piVar14,iVar12,0x650);
                bVar1 = iVar17 == 0;
              }
            }
            else {
              iVar21 = FUN_ram_4002edd8();
              iVar17 = iVar12;
              iVar20 = iVar13;
              if (iVar21 == 0) {
                iVar17 = iVar13;
                iVar20 = iVar12;
              }
              iVar21 = FUN_ram_40002ffc(piVar14,iVar17,0x650);
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
        _DAT_ram_3007b7f4 = 0;
        if (iVar28 == 0) {
          _DAT_ram_3007b7f4 = piVar14[2];
        }
        _DAT_ram_3007b7f0 = uVar23;
        if (iVar26 == 0) {
          iStack_74 = 0;
          if (bVar2 || iVar27 != 0) {
            iStack_74 = piVar11[2];
          }
          iStack_68 = FUN_ram_4002f5ba(piVar11);
          iVar17 = FUN_ram_40030158(piVar11,iVar9,iVar15,iVar10,iVar16,iVar27,&bStack_4d,
                                    auStack_4c + 1);
          bVar8 = bStack_4d;
          if (iVar17 + 5U < 2) goto LAB_ram_40031256;
          iVar19 = iStack_74;
          if (((((bStack_4d & 1) != 0) && (iVar15 == 2)) &&
              (iVar19 = *(int *)(iVar9 + 8), iStack_74 != 0)) &&
             (iVar18 = FUN_ram_4002edd8(iVar19,iStack_74), iVar18 == 0)) {
            iVar19 = iStack_74;
          }
          iVar18 = iVar19;
          if ((((bVar8 & 2) != 0) && (iVar16 == 2)) &&
             ((iVar18 = *(int *)(iVar10 + 8), iVar19 != 0 &&
              (iVar20 = FUN_ram_4002edd8(iVar18,iVar19), iVar20 == 0)))) {
            iVar18 = iVar19;
            if (iVar28 != 0) goto LAB_ram_40030ba8;
LAB_ram_400312ba:
            iVar19 = FUN_ram_4002edd8(iVar18,piVar14[2]);
            bVar5 = iVar19 != 0;
LAB_ram_400312e0:
            if (bVar8 != 0) {
              piVar25 = piVar11 + 5;
              piVar22 = piVar14 + 0x14;
              uVar24 = 0;
              do {
                if (((auStack_4c[(uVar24 >> 5) + 1] >> (uVar24 & 0x1f) & 1) != 0) &&
                   (iVar19 = FUN_ram_40002ffc(piVar25,piVar22,0x18), iVar19 != 0)) {
                  bVar6 = true;
                  goto LAB_ram_400311e2;
                }
                uVar24 = uVar24 + 1 & 0xff;
                piVar25 = piVar25 + 6;
                piVar22 = piVar22 + 6;
              } while (uVar24 != 0x40);
            }
            bVar6 = false;
LAB_ram_400311e2:
            bVar3 = false;
            if (bVar2) {
              iVar19 = FUN_ram_40002ffc(piVar11,piVar14 + 0xf,0x614);
              bVar3 = iVar19 == 0;
            }
            bVar4 = false;
            if ((iVar27 == 0) && (piVar14[4] == iStack_74)) {
              bVar4 = piVar14[5] == iStack_68;
            }
            if (!bVar6) goto LAB_ram_40030cbc;
            if (iVar17 != 0) goto LAB_ram_40031256;
            if (bVar7) {
              bVar5 = true;
              goto LAB_ram_40030cc4;
            }
LAB_ram_40030bac:
            FUN_ram_4000305c(0x3007b1dc,piVar11,0x614);
            goto LAB_ram_40031082;
          }
          if (iVar28 == 0) {
            bVar5 = false;
            if (iVar18 != 0) goto LAB_ram_400312ba;
            goto LAB_ram_400312e0;
          }
LAB_ram_40030ba8:
          if (iVar17 == 0) goto LAB_ram_40030bac;
        }
        else {
          iVar17 = iVar26;
          if (iVar28 != 0) goto LAB_ram_40031256;
          bVar5 = false;
          bVar4 = false;
          iVar18 = 0;
          iVar17 = -3;
          iStack_74 = 0;
          iStack_68 = 0;
          bVar3 = false;
LAB_ram_40030cbc:
          if (bVar7) {
LAB_ram_40030cc4:
            if (bVar4 || bVar3) goto LAB_ram_40030ba8;
          }
          if (bVar5) goto LAB_ram_40030ba8;
          auStack_4c[0] = 0;
          if ((iVar15 - 2U & 0xfffffffd) != 0) {
LAB_ram_40030cf4:
            if ((iVar15 == 3) && (bVar1)) goto LAB_ram_40030d02;
            if (!bVar7) {
LAB_ram_40030d80:
              if (iVar26 != 0) goto LAB_ram_40030d50;
              iVar17 = piVar14[2];
              if (((iVar18 != iVar17) || (iVar18 == iStack_74)) ||
                 ((*piVar11 == piVar14[0xf] &&
                  ((((short)piVar11[1] == (short)piVar14[0x10] && (piVar11[4] == piVar14[0x13])) &&
                   (iVar26 = FUN_ram_40002ffc(piVar11 + 5,piVar14 + 0x14,0x600), iVar26 == 0)))))) {
                if (bVar2) {
                  if (iVar17 == piVar11[2]) {
                    if (piVar11[3] != piVar14[8]) goto LAB_ram_40030d78;
                    if (iVar27 != 0) goto LAB_ram_40030ee0;
                  }
                }
                else if ((iVar27 != 0) && (iVar17 == piVar11[2])) {
LAB_ram_40030ee0:
                  iVar27 = FUN_ram_40002ffc(piVar11,piVar14 + 0xf,0xc);
                  if (((iVar27 != 0) ||
                      (iVar27 = FUN_ram_40002ffc(piVar11 + 4,piVar14 + 0x13,0x604), iVar27 != 0)) &&
                     (iVar27 = FUN_ram_4002f4f0(iVar9,piVar14 + 0xf), iVar27 == 0))
                  goto LAB_ram_40030d78;
                }
                if ((iVar18 != 0) && (iVar17 = FUN_ram_4002edd8(iVar17,iVar18), iVar17 == 0))
                goto LAB_ram_40030d50;
                if (piVar14[4] == iStack_74) {
                  iVar17 = piVar14[5];
                  uVar24 = iStack_68;
                  goto LAB_ram_40030d4c;
                }
              }
            }
LAB_ram_40030d78:
            iVar17 = -3;
            goto LAB_ram_40031256;
          }
          iVar17 = FUN_ram_40002ffc(iVar9,piVar14 + 0xf,0x14);
          if ((iVar17 != 0) || (iVar17 = FUN_ram_4002f4f0(iVar9,piVar14 + 0xf), iVar17 == 0))
          goto LAB_ram_40030cf4;
LAB_ram_40030d02:
          iVar17 = FUN_ram_4002fd5a(piVar14[3],auStack_4c);
          if (iVar17 != 0) goto LAB_ram_40031256;
          iVar17 = piVar14[7];
          uVar24 = auStack_4c[0];
          if (bVar7) {
LAB_ram_40030d4c:
            if (iVar17 != uVar24) goto LAB_ram_40030d78;
          }
          else if (iVar17 != auStack_4c[0]) goto LAB_ram_40030d80;
LAB_ram_40030d50:
          if (((*piVar14 != 0x58545350) || (*(short *)((int)piVar14 + 6) != 0x40)) ||
             (iVar17 = FUN_ram_4002edea(piVar14[3]), iVar17 == 0)) goto LAB_ram_40030d78;
          piVar22 = piVar14 + 0xf;
          iVar17 = FUN_ram_4002f5ec(piVar22);
          if (iVar17 == 0) goto LAB_ram_40030d78;
          bVar2 = false;
          if (iVar15 == 0) {
            iVar17 = FUN_ram_40002ffc(iVar9,piVar22,0x614);
            bVar2 = iVar17 == 0;
          }
          iVar15 = FUN_ram_40005666(0x1000);
          iVar17 = -5;
          if (iVar15 == 0) goto LAB_ram_40031256;
          iVar17 = -4;
          iVar27 = FUN_ram_4002ef6a(piVar14[3],iVar15,0x1000);
          if (iVar27 == 0x1000) {
            iVar27 = FUN_ram_4000755e(0,iVar15,0x1000);
            if (iVar27 == piVar14[7]) {
              iVar26 = 0;
              if (bVar2) {
                FUN_ram_4000305c(0x3007b1dc,piVar22,0x614);
                iVar17 = 0;
              }
              else {
LAB_ram_4003117c:
                iVar17 = FUN_ram_4002fe2a(piVar22);
                if (iVar17 == 0) {
LAB_ram_40031198:
                  FUN_ram_4000305c(0x3007b1dc,piVar22,0x614);
                  iVar17 = 0;
                }
                else {
                  _DAT_ram_3007b1d8 = 7;
                }
                if (iVar26 != 0) goto LAB_ram_40031170;
              }
            }
            else {
              iVar26 = FUN_ram_40005666(0x1000);
              if (iVar26 == 0) {
                iVar17 = -5;
              }
              else {
                iVar18 = FUN_ram_4002ef6a(0x15000,iVar26,0x1000);
                if (iVar18 == 0x1000) {
                  iVar18 = FUN_ram_4000755e(0,iVar26,0x1000);
                  if (iVar27 == piVar14[6]) {
                    iVar17 = -3;
                    if (iVar18 == piVar14[7]) goto LAB_ram_4003112c;
                  }
                  else if (iVar18 == piVar14[7]) {
LAB_ram_4003112c:
                    iVar17 = FUN_ram_4002fe9c(piVar14[3],iVar26);
                    if (iVar17 == 0) {
                      if (!bVar2) goto LAB_ram_4003117c;
                      goto LAB_ram_40031198;
                    }
                    _DAT_ram_3007b1d8 = 7;
                  }
                  else {
                    iVar17 = -3;
                  }
                }
LAB_ram_40031170:
                FUN_ram_400056c4(iVar26);
              }
            }
          }
          FUN_ram_400056c4(iVar15);
          iVar18 = _DAT_ram_3007b1e4;
          if (iVar17 != 0) goto LAB_ram_40031256;
          iStack_74 = _DAT_ram_3007b1e4;
          iStack_68 = FUN_ram_4002f5ba(0x3007b1dc);
          bStack_4d = 0;
          iVar17 = FUN_ram_40030158(0x3007b1dc,piVar22,0,iVar10,iVar16,0,&bStack_4d,auStack_4c + 1);
          if (iVar17 != 0) goto LAB_ram_40031256;
LAB_ram_40031082:
          _DAT_ram_3007b1a4 = iStack_74;
          _DAT_ram_3007b1a0 = iStack_68;
          if (0x3f < _DAT_ram_3007b1e2) {
            _DAT_ram_3007b1e2 = 0;
          }
          DAT_ram_3007b18d = 0;
          _DAT_ram_3007b198 = iVar18;
          iVar17 = FUN_ram_4002f9e4();
        }
LAB_ram_40031256:
        FUN_ram_400056c4(piVar14);
        goto LAB_ram_4003125e;
      }
      iVar17 = -5;
      goto LAB_ram_400311bc;
    }
    iVar17 = -5;
    if (piVar14 != (int *)0x0) goto LAB_ram_400311b6;
  }
  FUN_ram_400056c4(iVar12);
LAB_ram_4003126c:
  if (piVar11 != (int *)0x0) {
    FUN_ram_400056c4(piVar11);
  }
  if (iVar10 != 0) {
    FUN_ram_400056c4(iVar10);
  }
  if (iVar9 != 0) {
    FUN_ram_400056c4(iVar9);
  }
  _DAT_ram_3007b1d8 = 5;
  if (iVar17 + 8U < 9) {
    _DAT_ram_3007b1d8 = (uint)*(byte *)(iVar17 + 0x40095454);
  }
  return iVar17;
}


