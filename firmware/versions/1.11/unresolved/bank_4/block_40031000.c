/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40031000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003102a.
 * REA evidence: ev_c8d4fdedb140778574f79fa70ce0403ec71ae821dcfa0aa891a0e600fa283723
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4003102a(int param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
                byte *param_7,undefined4 *param_8)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
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
  iVar4 = FUN_ram_40005656(0x400);
  iVar5 = FUN_ram_40005656(0x400);
  iVar6 = FUN_ram_40005656(0x340);
  if (iVar4 == 0) {
    uVar2 = 0xfffffffb;
    if (iVar6 != 0) goto LAB_ram_40031258;
    if (iVar5 == 0) {
      return 0xfffffffb;
    }
LAB_ram_40031298:
    FUN_ram_400056b4(iVar5);
    uVar3 = uVar2;
  }
  else {
    if (iVar5 == 0) {
      uVar3 = 0xfffffffb;
      uVar2 = 0xfffffffb;
      if (iVar6 == 0) goto LAB_ram_40031266;
    }
    else {
      if (iVar6 == 0) {
        uVar2 = 0xfffffffb;
        goto LAB_ram_40031298;
      }
      puVar1 = (undefined1 *)(param_1 + 0x14);
      puVar12 = (undefined1 *)(param_2 + 0x14);
      puVar11 = (undefined1 *)(param_4 + 0x14);
      uStack_6c = 0;
      do {
        iVar7 = FUN_ram_4002fd18(puVar1);
        puVar13 = puVar1;
        if (iVar7 == 0) {
          if (param_3 < 2) {
            iVar7 = FUN_ram_4002fd18(puVar12);
            puVar13 = puVar12;
            if (iVar7 == 0) {
              if (param_5 < 2) goto LAB_ram_40031154;
LAB_ram_4003117a:
              puVar13 = (undefined1 *)0x0;
              if ((param_5 == 2) &&
                 (iVar7 = FUN_ram_4002fd18(puVar11), puVar13 = puVar11, iVar7 == 0))
              goto LAB_ram_4003118c;
            }
          }
          else if (param_5 < 2) {
LAB_ram_40031154:
            iVar7 = FUN_ram_4002fd18(puVar11);
            puVar13 = puVar11;
            if (iVar7 != 0) goto LAB_ram_400310c6;
            if (param_3 == 2) goto LAB_ram_40031170;
LAB_ram_4003118c:
            puVar13 = (undefined1 *)0x0;
          }
          else {
            if (param_3 != 2) goto LAB_ram_4003117a;
LAB_ram_40031170:
            iVar7 = FUN_ram_4002fd18(puVar12);
            puVar13 = puVar12;
            if (iVar7 == 0) goto LAB_ram_4003117a;
          }
        }
LAB_ram_400310c6:
        iVar7 = uStack_6c * 0x400 + 0x1000;
        iVar8 = FUN_ram_4002fe3c(iVar7,iVar4,0x400);
        if (((iVar8 != 0x400) || (iVar7 = FUN_ram_4002fe3c(iVar7,iVar5,0x400), iVar7 != 0x400)) ||
           (iVar7 = FUN_ram_40002fec(iVar4,iVar5,0x400), iVar7 != 0)) {
          uVar2 = 0xfffffffc;
          goto LAB_ram_40031258;
        }
        iVar7 = FUN_ram_40030204(puVar1);
        if ((iVar7 == 0) || (iVar7 = FUN_ram_400301e4(iVar4,0x400), iVar7 == 0)) {
          iVar7 = FUN_ram_40030230(puVar1,iVar4,iVar6,auStack_58);
          if (iVar7 == 0) {
            if (param_3 < 2) {
              iVar7 = FUN_ram_40030230(puVar12,iVar4,iVar6,auStack_58);
              if (iVar7 != 0) goto LAB_ram_400311c2;
              if (param_5 < 2) goto LAB_ram_40031208;
LAB_ram_400311e6:
              if ((param_5 == 2) &&
                 (iVar7 = FUN_ram_40030230(puVar11,iVar4,iVar6,auStack_58), iVar7 != 0)) {
                bVar10 = *param_7 | 2;
                goto LAB_ram_400311aa;
              }
            }
            else {
              if (1 < param_5) {
                if (param_3 != 2) goto LAB_ram_400311e6;
LAB_ram_4003122e:
                iVar7 = FUN_ram_40030230(puVar12,iVar4,iVar6,auStack_58);
                if (iVar7 != 0) {
                  bVar10 = *param_7 | 1;
                  goto LAB_ram_400311aa;
                }
                goto LAB_ram_400311e6;
              }
LAB_ram_40031208:
              iVar7 = FUN_ram_40030230(puVar11,iVar4,iVar6,auStack_58);
              if (iVar7 != 0) goto LAB_ram_400311c2;
              if (param_3 == 2) goto LAB_ram_4003122e;
            }
            if (puVar13 == (undefined1 *)0x0) goto LAB_ram_40031222;
            iVar7 = FUN_ram_4002fd18(puVar1);
            if (iVar7 != 0) goto LAB_ram_40031128;
          }
          else {
            if (param_6 != 0) {
              bVar10 = *param_7 | (byte)param_6;
LAB_ram_400311aa:
              *param_7 = bVar10;
              uVar9 = (uStack_6c & 0xff) >> 5;
              param_8[uVar9] = param_8[uVar9] | 1 << (uStack_6c & 0x1f);
            }
LAB_ram_400311c2:
            puVar13 = auStack_58;
          }
          FUN_ram_4000304c(puVar1,puVar13,0x18);
        }
        else {
          memset(puVar1,0,0x18);
        }
LAB_ram_40031128:
        puVar1 = puVar1 + 0x18;
        uStack_6c = uStack_6c + 1;
        puVar12 = puVar12 + 0x18;
        puVar11 = puVar11 + 0x18;
      } while (uStack_6c != 0x40);
      uVar2 = 0;
      if ((param_6 != 0) && ((*param_7 & param_6) == 0)) {
LAB_ram_40031222:
        uVar2 = 0xfffffffd;
      }
    }
LAB_ram_40031258:
    FUN_ram_400056b4(iVar6);
    uVar3 = uVar2;
    if (iVar5 != 0) goto LAB_ram_40031298;
  }
  if (iVar4 == 0) {
    return uVar3;
  }
LAB_ram_40031266:
  FUN_ram_400056b4(iVar4);
  return uVar3;
}


/* NanoCore 1.11, address 0x400312ac.
 * REA evidence: ev_70298e254e7656d50bb46aba50d8cacbd5e6a54f0fd7fc578ec44e2de683e230
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400312ac(int param_1,int param_2)

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
  uVar3 = FUN_ram_4003048c(iVar9);
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
  iVar4 = FUN_ram_40030cb8(0x15000);
  if (((iVar4 < 0) || (iVar4 = FUN_ram_4002fe8c(0x15000,param_2,0x1000), iVar4 != 0x1000)) ||
     (iVar4 = FUN_ram_40030aca(0x15000,param_2), iVar4 != 0)) {
    return -4;
  }
  iVar4 = FUN_ram_40005656(0x1000);
  if (iVar4 == 0) {
    return -5;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  uVar3 = FUN_ram_40030458(param_1);
  *(char *)(param_1 + 0x28) = (char)uVar3;
  *(char *)(param_1 + 0x29) = (char)((uint)uVar3 >> 8);
  *(char *)(param_1 + 0x2a) = (char)((uint)uVar3 >> 0x10);
  *(char *)(param_1 + 0x2b) = (char)((uint)uVar3 >> 0x18);
  FUN_ram_4002fedc(param_1,auStack_40);
  memset(iVar4,0xff,0x1000);
  FUN_ram_4000304c(iVar4,param_1,0x650);
  FUN_ram_4000304c(iVar4 + 0xff0,auStack_40,0x10);
  iVar8 = _DAT_ram_3007cb7c;
  iVar1 = 0xab000;
  if (_DAT_ram_3007cb7c != 0xaa000) {
    iVar1 = 0xaa000;
  }
  iVar5 = FUN_ram_40030cb8(iVar1);
  if ((iVar5 < 0) || (iVar5 = FUN_ram_4002fe8c(iVar1,iVar4,0xff0), iVar5 != 0xff0)) {
    iVar8 = -4;
    goto LAB_ram_400313d4;
  }
  iVar5 = FUN_ram_4002fe8c(iVar1 + 0xff0,auStack_40,0x10);
  if ((iVar5 == 0x10) && (iVar5 = FUN_ram_40030aca(iVar1,iVar4), iVar5 == 0)) {
    if (iVar8 == 0) {
      if (iVar1 == 0xaa000) {
        iVar1 = 0xab000;
      }
      else {
        iVar1 = 0xaa000;
      }
      iVar8 = FUN_ram_40030cb8(iVar1);
      if ((((iVar8 < 0) || (iVar8 = FUN_ram_4002fe8c(iVar1,iVar4,0xff0), iVar8 != 0xff0)) ||
          (iVar8 = FUN_ram_4002fe8c(iVar1 + 0xff0,auStack_40,0x10), iVar8 != 0x10)) ||
         (iVar8 = FUN_ram_40030aca(iVar1,iVar4), iVar8 != 0)) goto LAB_ram_400314b8;
    }
    _DAT_ram_3007cb80 = *(undefined4 *)(param_1 + 8);
    iVar8 = 0;
    _DAT_ram_3007cb7c = iVar1;
  }
  else {
LAB_ram_400314b8:
    _DAT_ram_3007c564 = 7;
    iVar8 = -8;
  }
LAB_ram_400313d4:
  FUN_ram_400056b4(iVar4);
  if (iVar8 == 0) {
    iVar8 = FUN_ram_40030d6e(*(undefined4 *)(param_1 + 0xc),param_2);
    if ((iVar8 == 0) && (iVar8 = FUN_ram_40030cfc(iVar9), iVar8 == 0)) {
      FUN_ram_4000304c(0x3007c568,iVar9,0x614);
      _DAT_ram_3007c524 = *(undefined4 *)(param_1 + 0x44);
      _DAT_ram_3007c52c = *(undefined4 *)(param_1 + 0x48);
      _DAT_ram_3007c530 = _DAT_ram_3007c524;
    }
    else {
      _DAT_ram_3007c564 = 7;
    }
  }
  return iVar8;
}


/* NanoCore 1.11, address 0x40031534.
 * REA evidence: ev_d2cb9c7ec5dc5ff04c072e1d326347a23c4b056b1177a236f8f3187393484c06
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031534(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 4;
  }
  iVar1 = FUN_ram_4002fe3c(param_1,param_2,0x614);
  uVar3 = 5;
  if (iVar1 == 0x614) {
    iVar1 = FUN_ram_400301e4(param_2,0x614);
    uVar3 = 3;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_400304be(param_2);
      uVar3 = 0;
      if (iVar1 == 0) {
        iVar1 = FUN_ram_4002fcd4(param_2);
        if ((iVar1 != 0) && (iVar1 = FUN_ram_400303fc(param_2), iVar1 != 0)) {
          if (*(int *)(param_2 + 0x10) != 0x50543232) {
            return 1;
          }
          if ((*(int *)(param_2 + 8) != 0) &&
             (iVar1 = *(int *)(param_2 + 0xc), iVar2 = FUN_ram_4003048c(param_2), iVar1 != iVar2)) {
            return 2;
          }
        }
        uVar3 = 4;
      }
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x4003154a.
 * REA evidence: ev_4699f112afb5cd5696b567e1eb9d65e60ac77306b46832b79d34b6010bade294
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003154a(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4002fe3c(param_1,param_2,0x614);
  uVar3 = 5;
  if (iVar1 == 0x614) {
    iVar1 = FUN_ram_400301e4(param_2,0x614);
    uVar3 = 3;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_400304be(param_2);
      uVar3 = 0;
      if (iVar1 == 0) {
        iVar1 = FUN_ram_4002fcd4(param_2);
        if ((iVar1 != 0) && (iVar1 = FUN_ram_400303fc(param_2), iVar1 != 0)) {
          if (*(int *)(param_2 + 0x10) != 0x50543232) {
            return 1;
          }
          if ((*(int *)(param_2 + 8) != 0) &&
             (iVar1 = *(int *)(param_2 + 0xc), iVar2 = FUN_ram_4003048c(param_2), iVar1 != iVar2)) {
            return 2;
          }
        }
        uVar3 = 4;
      }
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40031600.
 * REA evidence: ev_4d05aced4f98ddd1c3316b0a79a594d27f5f75073b3d915136337b27733f351a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40031600(void)

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
  if (_DAT_ram_3007c564 - 1 < 4) {
    return (int)*(char *)(_DAT_ram_3007c564 + 0x400972d3);
  }
  iVar9 = FUN_ram_4002fe0a();
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_ram_40005656(0x614);
  iVar10 = FUN_ram_40005656(0x614);
  piVar11 = (int *)FUN_ram_40005656(0x614);
  iVar12 = FUN_ram_40005656(0x650);
  iVar13 = FUN_ram_40005656(0x650);
  piVar14 = (int *)FUN_ram_40005656(0x650);
  if ((((iVar9 == 0) || (iVar10 == 0)) || (piVar11 == (int *)0x0)) || (iVar12 == 0)) {
    iVar17 = -5;
    if (piVar14 != (int *)0x0) {
LAB_ram_40032088:
      iVar17 = -5;
      goto LAB_ram_40032128;
    }
LAB_ram_40032130:
    if (iVar13 != 0) {
LAB_ram_4003208e:
      FUN_ram_400056b4(iVar13);
    }
    if (iVar12 == 0) goto LAB_ram_4003213e;
  }
  else {
    if (iVar13 != 0) {
      if (piVar14 != (int *)0x0) {
        iVar15 = FUN_ram_40031534(0,iVar9);
        iVar16 = FUN_ram_40031534(0x11000,iVar10);
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
              iVar17 = FUN_ram_40002fec(iVar9,iVar10,0x614);
              iVar27 = iVar9;
              if (iVar17 != 0) goto LAB_ram_4003188a;
            }
            else {
              iVar26 = FUN_ram_4002fcaa();
              iVar27 = iVar10;
              if (iVar26 != 0) goto LAB_ram_400317fa;
            }
            FUN_ram_4000304c(piVar11,iVar27,0x614);
          }
          else {
LAB_ram_400317fa:
            FUN_ram_4000304c(piVar11,iVar17,0x614);
          }
          iVar26 = 0;
          iVar27 = 0;
          bVar2 = true;
        }
        else {
          iVar17 = iVar10;
          if (iVar16 == 0) goto LAB_ram_400317fa;
          iVar17 = iVar9;
          if ((iVar15 == 1) || (iVar17 = iVar10, iVar16 == 1)) {
            FUN_ram_4000304c(piVar11,iVar17,0x614);
            iVar27 = 0;
          }
          else if (iVar15 == 2) {
            FUN_ram_4000304c(piVar11,iVar9,0x614);
            iVar27 = 1;
          }
          else {
            if (iVar16 != 2) {
              if (iVar15 == 3) {
                iVar27 = 0;
                bVar2 = false;
                iVar26 = -1;
                if (iVar16 == 3) goto LAB_ram_40031752;
              }
LAB_ram_4003188a:
              bVar2 = false;
              iVar27 = 0;
              iVar26 = -3;
              goto LAB_ram_40031752;
            }
            FUN_ram_4000304c(piVar11,iVar10,0x614);
            iVar27 = 2;
          }
          iVar26 = 0;
          bVar2 = false;
        }
LAB_ram_40031752:
        iVar17 = iVar26;
        if (iVar26 + 5U < 2) goto LAB_ram_40032128;
        iVar18 = FUN_ram_40030b4e(0xaa000,iVar12);
        iVar19 = FUN_ram_40030b4e(0xab000,iVar13);
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
              iVar17 = FUN_ram_40002fec(iVar12,iVar13,0x650);
              if (iVar17 != 0) {
                uVar23 = 0;
                iVar28 = -3;
                goto LAB_ram_400318c0;
              }
            }
            else {
              iVar17 = FUN_ram_4002fcaa();
              if (iVar17 != 0) goto LAB_ram_400318b2;
            }
            FUN_ram_4000304c(piVar14,iVar13,0x650);
LAB_ram_40031a9a:
            iVar28 = 0;
            uVar23 = 0xab000;
          }
          else {
LAB_ram_400318b2:
            FUN_ram_4000304c(piVar14,iVar12,0x650);
            iVar28 = 0;
            uVar23 = 0xaa000;
          }
        }
        else {
          if (iVar19 == 0) {
            FUN_ram_4000304c(piVar14,iVar13,0x650);
            goto LAB_ram_40031a9a;
          }
          uVar23 = 0;
          iVar28 = 1;
        }
LAB_ram_400318c0:
        iVar17 = iVar28;
        if ((iVar28 + 5U < 2) || (iVar17 = -3, iVar28 == -3)) goto LAB_ram_40032128;
        if (iVar28 == 0) {
          bVar1 = false;
          if (iVar18 == 0 && iVar19 == 0) {
            if (*(int *)(iVar12 + 8) == *(int *)(iVar13 + 8)) {
              iVar17 = FUN_ram_40002fec(iVar12,iVar13,0x650);
              bVar1 = false;
              if (iVar17 == 0) {
                iVar17 = FUN_ram_40002fec(piVar14,iVar12,0x650);
                bVar1 = iVar17 == 0;
              }
            }
            else {
              iVar21 = FUN_ram_4002fcaa();
              iVar17 = iVar12;
              iVar20 = iVar13;
              if (iVar21 == 0) {
                iVar17 = iVar13;
                iVar20 = iVar12;
              }
              iVar21 = FUN_ram_40002fec(piVar14,iVar17,0x650);
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
        _DAT_ram_3007cb80 = 0;
        if (iVar28 == 0) {
          _DAT_ram_3007cb80 = piVar14[2];
        }
        _DAT_ram_3007cb7c = uVar23;
        if (iVar26 == 0) {
          iStack_74 = 0;
          if (bVar2 || iVar27 != 0) {
            iStack_74 = piVar11[2];
          }
          iStack_68 = FUN_ram_4003048c(piVar11);
          iVar17 = FUN_ram_4003102a(piVar11,iVar9,iVar15,iVar10,iVar16,iVar27,&bStack_4d,
                                    auStack_4c + 1);
          bVar8 = bStack_4d;
          if (iVar17 + 5U < 2) goto LAB_ram_40032128;
          iVar19 = iStack_74;
          if (((((bStack_4d & 1) != 0) && (iVar15 == 2)) &&
              (iVar19 = *(int *)(iVar9 + 8), iStack_74 != 0)) &&
             (iVar18 = FUN_ram_4002fcaa(iVar19,iStack_74), iVar18 == 0)) {
            iVar19 = iStack_74;
          }
          iVar18 = iVar19;
          if ((((bVar8 & 2) != 0) && (iVar16 == 2)) &&
             ((iVar18 = *(int *)(iVar10 + 8), iVar19 != 0 &&
              (iVar20 = FUN_ram_4002fcaa(iVar18,iVar19), iVar20 == 0)))) {
            iVar18 = iVar19;
            if (iVar28 != 0) goto LAB_ram_40031a7a;
LAB_ram_4003218c:
            iVar19 = FUN_ram_4002fcaa(iVar18,piVar14[2]);
            bVar5 = iVar19 != 0;
LAB_ram_400321b2:
            if (bVar8 != 0) {
              piVar25 = piVar11 + 5;
              piVar22 = piVar14 + 0x14;
              uVar24 = 0;
              do {
                if (((auStack_4c[(uVar24 >> 5) + 1] >> (uVar24 & 0x1f) & 1) != 0) &&
                   (iVar19 = FUN_ram_40002fec(piVar25,piVar22,0x18), iVar19 != 0)) {
                  bVar6 = true;
                  goto LAB_ram_400320b4;
                }
                uVar24 = uVar24 + 1 & 0xff;
                piVar25 = piVar25 + 6;
                piVar22 = piVar22 + 6;
              } while (uVar24 != 0x40);
            }
            bVar6 = false;
LAB_ram_400320b4:
            bVar3 = false;
            if (bVar2) {
              iVar19 = FUN_ram_40002fec(piVar11,piVar14 + 0xf,0x614);
              bVar3 = iVar19 == 0;
            }
            bVar4 = false;
            if ((iVar27 == 0) && (piVar14[4] == iStack_74)) {
              bVar4 = piVar14[5] == iStack_68;
            }
            if (!bVar6) goto LAB_ram_40031b8e;
            if (iVar17 != 0) goto LAB_ram_40032128;
            if (bVar7) {
              bVar5 = true;
              goto LAB_ram_40031b96;
            }
LAB_ram_40031a7e:
            FUN_ram_4000304c(0x3007c568,piVar11,0x614);
            goto LAB_ram_40031f54;
          }
          if (iVar28 == 0) {
            bVar5 = false;
            if (iVar18 != 0) goto LAB_ram_4003218c;
            goto LAB_ram_400321b2;
          }
LAB_ram_40031a7a:
          if (iVar17 == 0) goto LAB_ram_40031a7e;
        }
        else {
          iVar17 = iVar26;
          if (iVar28 != 0) goto LAB_ram_40032128;
          bVar5 = false;
          bVar4 = false;
          iVar18 = 0;
          iVar17 = -3;
          iStack_74 = 0;
          iStack_68 = 0;
          bVar3 = false;
LAB_ram_40031b8e:
          if (bVar7) {
LAB_ram_40031b96:
            if (bVar4 || bVar3) goto LAB_ram_40031a7a;
          }
          if (bVar5) goto LAB_ram_40031a7a;
          auStack_4c[0] = 0;
          if ((iVar15 - 2U & 0xfffffffd) != 0) {
LAB_ram_40031bc6:
            if ((iVar15 == 3) && (bVar1)) goto LAB_ram_40031bd4;
            if (!bVar7) {
LAB_ram_40031c52:
              if (iVar26 != 0) goto LAB_ram_40031c22;
              iVar17 = piVar14[2];
              if (((iVar18 != iVar17) || (iVar18 == iStack_74)) ||
                 ((*piVar11 == piVar14[0xf] &&
                  ((((short)piVar11[1] == (short)piVar14[0x10] && (piVar11[4] == piVar14[0x13])) &&
                   (iVar26 = FUN_ram_40002fec(piVar11 + 5,piVar14 + 0x14,0x600), iVar26 == 0)))))) {
                if (bVar2) {
                  if (iVar17 == piVar11[2]) {
                    if (piVar11[3] != piVar14[8]) goto LAB_ram_40031c4a;
                    if (iVar27 != 0) goto LAB_ram_40031db2;
                  }
                }
                else if ((iVar27 != 0) && (iVar17 == piVar11[2])) {
LAB_ram_40031db2:
                  iVar27 = FUN_ram_40002fec(piVar11,piVar14 + 0xf,0xc);
                  if (((iVar27 != 0) ||
                      (iVar27 = FUN_ram_40002fec(piVar11 + 4,piVar14 + 0x13,0x604), iVar27 != 0)) &&
                     (iVar27 = FUN_ram_400303c2(iVar9,piVar14 + 0xf), iVar27 == 0))
                  goto LAB_ram_40031c4a;
                }
                if ((iVar18 != 0) && (iVar17 = FUN_ram_4002fcaa(iVar17,iVar18), iVar17 == 0))
                goto LAB_ram_40031c22;
                if (piVar14[4] == iStack_74) {
                  iVar17 = piVar14[5];
                  uVar24 = iStack_68;
                  goto LAB_ram_40031c1e;
                }
              }
            }
LAB_ram_40031c4a:
            iVar17 = -3;
            goto LAB_ram_40032128;
          }
          iVar17 = FUN_ram_40002fec(iVar9,piVar14 + 0xf,0x14);
          if ((iVar17 != 0) || (iVar17 = FUN_ram_400303c2(iVar9,piVar14 + 0xf), iVar17 == 0))
          goto LAB_ram_40031bc6;
LAB_ram_40031bd4:
          iVar17 = FUN_ram_40030c2c(piVar14[3],auStack_4c);
          if (iVar17 != 0) goto LAB_ram_40032128;
          iVar17 = piVar14[7];
          uVar24 = auStack_4c[0];
          if (bVar7) {
LAB_ram_40031c1e:
            if (iVar17 != uVar24) goto LAB_ram_40031c4a;
          }
          else if (iVar17 != auStack_4c[0]) goto LAB_ram_40031c52;
LAB_ram_40031c22:
          if (((*piVar14 != 0x58545350) || (*(short *)((int)piVar14 + 6) != 0x40)) ||
             (iVar17 = FUN_ram_4002fcbc(piVar14[3]), iVar17 == 0)) goto LAB_ram_40031c4a;
          piVar22 = piVar14 + 0xf;
          iVar17 = FUN_ram_400304be(piVar22);
          if (iVar17 == 0) goto LAB_ram_40031c4a;
          bVar2 = false;
          if (iVar15 == 0) {
            iVar17 = FUN_ram_40002fec(iVar9,piVar22,0x614);
            bVar2 = iVar17 == 0;
          }
          iVar15 = FUN_ram_40005656(0x1000);
          iVar17 = -5;
          if (iVar15 == 0) goto LAB_ram_40032128;
          iVar17 = -4;
          iVar27 = FUN_ram_4002fe3c(piVar14[3],iVar15,0x1000);
          if (iVar27 == 0x1000) {
            iVar27 = FUN_ram_40007554(0,iVar15,0x1000);
            if (iVar27 == piVar14[7]) {
              iVar26 = 0;
              if (bVar2) {
                FUN_ram_4000304c(0x3007c568,piVar22,0x614);
                iVar17 = 0;
              }
              else {
LAB_ram_4003204e:
                iVar17 = FUN_ram_40030cfc(piVar22);
                if (iVar17 == 0) {
LAB_ram_4003206a:
                  FUN_ram_4000304c(0x3007c568,piVar22,0x614);
                  iVar17 = 0;
                }
                else {
                  _DAT_ram_3007c564 = 7;
                }
                if (iVar26 != 0) goto LAB_ram_40032042;
              }
            }
            else {
              iVar26 = FUN_ram_40005656(0x1000);
              if (iVar26 == 0) {
                iVar17 = -5;
              }
              else {
                iVar18 = FUN_ram_4002fe3c(0x15000,iVar26,0x1000);
                if (iVar18 == 0x1000) {
                  iVar18 = FUN_ram_40007554(0,iVar26,0x1000);
                  if (iVar27 == piVar14[6]) {
                    iVar17 = -3;
                    if (iVar18 == piVar14[7]) goto LAB_ram_40031ffe;
                  }
                  else if (iVar18 == piVar14[7]) {
LAB_ram_40031ffe:
                    iVar17 = FUN_ram_40030d6e(piVar14[3],iVar26);
                    if (iVar17 == 0) {
                      if (!bVar2) goto LAB_ram_4003204e;
                      goto LAB_ram_4003206a;
                    }
                    _DAT_ram_3007c564 = 7;
                  }
                  else {
                    iVar17 = -3;
                  }
                }
LAB_ram_40032042:
                FUN_ram_400056b4(iVar26);
              }
            }
          }
          FUN_ram_400056b4(iVar15);
          iVar18 = _DAT_ram_3007c570;
          if (iVar17 != 0) goto LAB_ram_40032128;
          iStack_74 = _DAT_ram_3007c570;
          iStack_68 = FUN_ram_4003048c(0x3007c568);
          bStack_4d = 0;
          iVar17 = FUN_ram_4003102a(0x3007c568,piVar22,0,iVar10,iVar16,0,&bStack_4d,auStack_4c + 1);
          if (iVar17 != 0) goto LAB_ram_40032128;
LAB_ram_40031f54:
          _DAT_ram_3007c530 = iStack_74;
          _DAT_ram_3007c52c = iStack_68;
          if (0x3f < _DAT_ram_3007c56e) {
            _DAT_ram_3007c56e = 0;
          }
          DAT_ram_3007c519 = 0;
          _DAT_ram_3007c524 = iVar18;
          iVar17 = FUN_ram_400308b6();
        }
LAB_ram_40032128:
        FUN_ram_400056b4(piVar14);
        goto LAB_ram_40032130;
      }
      iVar17 = -5;
      goto LAB_ram_4003208e;
    }
    iVar17 = -5;
    if (piVar14 != (int *)0x0) goto LAB_ram_40032088;
  }
  FUN_ram_400056b4(iVar12);
LAB_ram_4003213e:
  if (piVar11 != (int *)0x0) {
    FUN_ram_400056b4(piVar11);
  }
  if (iVar10 != 0) {
    FUN_ram_400056b4(iVar10);
  }
  if (iVar9 != 0) {
    FUN_ram_400056b4(iVar9);
  }
  _DAT_ram_3007c564 = 5;
  if (iVar17 + 8U < 9) {
    _DAT_ram_3007c564 = (uint)*(byte *)(iVar17 + 0x400972d0);
  }
  return iVar17;
}


