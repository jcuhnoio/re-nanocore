/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40043000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400430aa.
 * REA evidence: ev_18043f33b0f2c7b7fd5ca3c5df687d413d1b64394b90bcc5c6a24a6829e8436e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400430aa(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400044c2();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) == 1) {
      uVar2 = *(undefined4 *)(iVar1 + 0x88);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40043146.
 * REA evidence: ev_97e724a10de5d3fd7f66f39dc4c554c2d82f283358352a762cf3176809f09786
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40043146(void)

{
  if (DAT_ram_30080ce0 == '\0') {
    thunk_FUN_ram_40004f92(&DAT_ram_30080ce0,0,0x194);
    FUN_ram_4004b436(0x30080ce4,0x310);
    FUN_ram_4004b436(0x30080d24,200);
    _DAT_ram_30080d44 = 0xa1b2c3d4;
    _DAT_ram_30080d0c = 0x8c;
    _DAT_ram_30080d50 = 0x3d;
    DAT_ram_30080d04 = 1;
    _DAT_ram_30080d38 = 1;
    FUN_ram_4004b8d0(0x1234abcd);
    FUN_ram_4005aa04();
    FUN_ram_4004da7c();
    FUN_ram_4004c688();
    FUN_ram_4004affe();
    FUN_ram_40056c98();
    FUN_ram_4004a20a();
    FUN_ram_40043348();
    FUN_ram_4004d584();
    FUN_ram_4004fad0();
    FUN_ram_40047b50();
    FUN_ram_40048f3c();
    FUN_ram_4004f636();
    FUN_ram_400591c2();
    DAT_ram_30080ce0 = '\x01';
  }
  return;
}


/* NanoCore 1.12, address 0x400431f2.
 * REA evidence: ev_3588298c31af0c257aebe6a47ba15c97d30ca0252af69af23ce74d36b3c44c74
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400431f2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_40056ae4(0);
  iVar1 = 0;
  while ((iVar4 = iVar1, iVar2 != 0 && (iVar3 = FUN_ram_40056b02(iVar2), iVar4 = iVar2, iVar3 != 1))
        ) {
    iVar4 = FUN_ram_40056b0c(iVar2);
    if (iVar4 == param_1) {
      iVar1 = iVar2;
    }
    iVar2 = FUN_ram_40056ae4(iVar2);
  }
  return iVar4;
}


/* NanoCore 1.12, address 0x40043244.
 * REA evidence: ev_4c9c65bc7ca29b7ef10f0aee5349e6ef03e678f939202411036da8a00a19403a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043244(int param_1,code *param_2,code *param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0xc);
  bVar1 = true;
  piVar6 = (int *)0x0;
  do {
    do {
      if (piVar2 != (int *)0x0) {
        if (piVar6 == (int *)0x0) {
          piVar6 = piVar2;
        }
        piVar2 = (int *)(*param_3)(param_1,piVar2);
        if (piVar2 != piVar6) goto LAB_ram_400432fe;
        return 0;
      }
      do {
        if (((*(byte *)(param_1 + 0x1c) & 8) == 0) && (piVar6 != (int *)0x0)) {
          return 0;
        }
        if (!bVar1) {
          return 0;
        }
        piVar2 = (int *)(*param_2)(param_1);
        bVar1 = false;
        if (piVar6 == (int *)0x0) {
          piVar6 = piVar2;
          if (piVar2 == (int *)0x0) {
            return 0;
          }
          break;
        }
LAB_ram_400432fe:
      } while (piVar2 == (int *)0x0);
      uVar3 = FUN_ram_40043ca0(*piVar2);
    } while ((uVar3 & 0x80) != 0);
    iVar7 = *piVar2;
    while( true ) {
      if (iVar7 == 0) goto LAB_ram_400432a4;
      iVar5 = FUN_ram_40043c8a(iVar7,1);
      if (iVar5 != 0) break;
      iVar7 = FUN_ram_40048b6e(iVar7);
    }
    iVar7 = FUN_ram_40043c8a(iVar7,1);
  } while (iVar7 != 0);
LAB_ram_400432a4:
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      iVar7 = *piVar6;
      uVar4 = FUN_ram_400431f2(param_1);
      iVar7 = FUN_ram_40044c48(iVar7,0x11,uVar4);
      if (iVar7 != 1) {
        return 0;
      }
      FUN_ram_400455dc(**(undefined4 **)(param_1 + 0xc));
    }
    *(int **)(param_1 + 0xc) = piVar2;
    iVar7 = *piVar2;
    uVar4 = FUN_ram_400431f2(param_1);
    iVar7 = FUN_ram_40044c48(iVar7,0x10,uVar4);
    if (iVar7 == 1) {
      FUN_ram_400455dc(**(undefined4 **)(param_1 + 0xc));
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40043250.
 * REA evidence: ev_8914f2366d97b8741ae44e4562ece8d311dfdced332366a6f51d31c56659f994
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043250(int param_1,code *param_2,code *param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar2 = *(int **)(param_1 + 0xc);
  bVar1 = true;
  piVar6 = (int *)0x0;
  do {
    do {
      if (piVar2 != (int *)0x0) {
        if (piVar6 == (int *)0x0) {
          piVar6 = piVar2;
        }
        piVar2 = (int *)(*param_3)(param_1,piVar2);
        if (piVar2 != piVar6) goto LAB_ram_400432fe;
        return 0;
      }
      do {
        if (((*(byte *)(param_1 + 0x1c) & 8) == 0) && (piVar6 != (int *)0x0)) {
          return 0;
        }
        if (!bVar1) {
          return 0;
        }
        piVar2 = (int *)(*param_2)(param_1);
        bVar1 = false;
        if (piVar6 == (int *)0x0) {
          piVar6 = piVar2;
          if (piVar2 == (int *)0x0) {
            return 0;
          }
          break;
        }
LAB_ram_400432fe:
      } while (piVar2 == (int *)0x0);
      uVar3 = FUN_ram_40043ca0(*piVar2);
    } while ((uVar3 & 0x80) != 0);
    iVar7 = *piVar2;
    while( true ) {
      if (iVar7 == 0) goto LAB_ram_400432a4;
      iVar5 = FUN_ram_40043c8a(iVar7,1);
      if (iVar5 != 0) break;
      iVar7 = FUN_ram_40048b6e(iVar7);
    }
    iVar7 = FUN_ram_40043c8a(iVar7,1);
  } while (iVar7 != 0);
LAB_ram_400432a4:
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      iVar7 = *piVar6;
      uVar4 = FUN_ram_400431f2(param_1);
      iVar7 = FUN_ram_40044c48(iVar7,0x11,uVar4);
      if (iVar7 != 1) {
        return 0;
      }
      FUN_ram_400455dc(**(undefined4 **)(param_1 + 0xc));
    }
    *(int **)(param_1 + 0xc) = piVar2;
    iVar7 = *piVar2;
    uVar4 = FUN_ram_400431f2(param_1);
    iVar7 = FUN_ram_40044c48(iVar7,0x10,uVar4);
    if (iVar7 == 1) {
      FUN_ram_400455dc(**(undefined4 **)(param_1 + 0xc));
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40043348.
 * REA evidence: ev_44829c16bdc13cc03c06bb1c5ca9d36e096cac3797a8f588bde0b7736f0241b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043348(void)

{
  FUN_ram_4004b436(0x30080d14,0x20);
  return;
}


/* NanoCore 1.12, address 0x40043358.
 * REA evidence: ev_7343f334f5fc050b1f52cf86c463a4c9524d04d28a7b03618645c3617cd12768
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40043358(void)

{
  return _DAT_ram_30080d20;
}


/* NanoCore 1.12, address 0x40043362.
 * REA evidence: ev_5604cd70b1bf3b250675d3889ebdc0dca94ff29b51f6241bccbe5e7b976afa0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043362(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40043244(param_1,FUN_ram_4004b610,FUN_ram_4004b61c);
  if ((*(code **)(param_1 + 0x14) != (code *)0x0) && (iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x4004338e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14))(param_1,1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40043398.
 * REA evidence: ev_cf5325c1d7b3395d9d6f6109b4723099cd246733a419e2ce63bf37a88b267576
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043398(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40043244(param_1,FUN_ram_4004b616,FUN_ram_4004b624);
  if ((*(code **)(param_1 + 0x14) != (code *)0x0) && (iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x400433c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14))(param_1,0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400433ce.
 * REA evidence: ev_e3283c96f9990e00930964518b7835f24a7773f5fff164c0b1b6f90ae0cdd67c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400433ce(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x1c) = bVar1 | 8;
  if ((bVar1 & 4) == 0) {
    FUN_ram_40043362();
  }
  else {
    FUN_ram_40043398();
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf7 | (byte)uVar2 & 8;
  return;
}


/* NanoCore 1.12, address 0x40043410.
 * REA evidence: ev_05451bd5d726c19c263c21201244368f25ccd1eee810535c67b4d9cc212a5a94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043410(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_ram_40043ca6();
  if (iVar1 == 0) {
    return;
  }
  if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) == param_1)) {
    if ((*(byte *)(iVar1 + 0x1c) & 1) != 0) {
      *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xfe;
    }
    iVar2 = FUN_ram_4004b610(iVar1);
    if ((iVar2 == *(int *)(iVar1 + 0xc)) &&
       (puVar3 = (undefined4 *)FUN_ram_4004b616(iVar1), puVar3 == *(undefined4 **)(iVar1 + 0xc))) {
      uVar6 = *puVar3;
      uVar4 = FUN_ram_400431f2(iVar1);
      FUN_ram_40044c48(uVar6,0x11,uVar4);
    }
    else {
      FUN_ram_400433ce(iVar1);
    }
  }
  if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) == param_1)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  piVar5 = (int *)FUN_ram_4004b610(iVar1);
  while( true ) {
    if (piVar5 == (int *)0x0) {
      return;
    }
    if (*piVar5 == param_1) break;
    piVar5 = (int *)FUN_ram_4004b61c(iVar1);
  }
  FUN_ram_4004b552(iVar1);
  FUN_ram_4005a988(piVar5);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
  return;
}


/* NanoCore 1.12, address 0x400434bc.
 * REA evidence: ev_c15e0cc2a7cc11ec3135d122c3300bac1be2836300cbd0603edbf82034d6dacf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400434bc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return;
  }
  FUN_ram_40043410(param_2);
  for (piVar1 = (int *)FUN_ram_4004b610(param_1); piVar1 != (int *)0x0;
      piVar1 = (int *)FUN_ram_4004b61c(param_1,piVar1)) {
    if (*piVar1 == param_2) {
      return;
    }
  }
  iVar2 = FUN_ram_40043ca6(param_2);
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 4);
    if ((iVar2 == 0) || (**(int **)(iVar2 + 0xc) != param_2)) goto LAB_ram_400434fe;
    FUN_ram_400433ce();
  }
  if (*(int *)(param_2 + 8) == 0) {
    FUN_ram_4004416c(param_2);
  }
LAB_ram_400434fe:
  *(int *)(*(int *)(param_2 + 8) + 4) = param_1;
  piVar1 = (int *)FUN_ram_4004b508(param_1);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar3 = (int *)FUN_ram_4004b610(param_1);
    if (piVar3 == piVar1) {
      FUN_ram_400433ce(param_1);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40043546.
 * REA evidence: ev_2c3ea56c4411449dc9cbb0774526280ab611bdb068665e2370497df3bfcbab6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043546(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0)) {
    uVar1 = **(undefined4 **)(param_1 + 0xc);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40043550.
 * REA evidence: ev_7112d5fcac55776e68f37c7ad9862bd901382fc50ac5a7d8bbc49308f7ef9c4b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40043550(int param_1)

{
  if (param_1 != 0) {
    return (*(uint *)(param_1 + 0x1c) & 3) >> 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004355e.
 * REA evidence: ev_dd4f02e0dbbfffb88fcabaa116a0d346daf8d671f9e165ffee8b5deaa3fdbdc5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004355e(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    uVar5 = 0x1002;
  }
  else {
    iVar2 = FUN_ram_4004671e(iVar1);
    iVar3 = thunk_FUN_ram_40046652(iVar1);
    iVar6 = *(int *)(iVar1 + 0x18);
    iVar4 = FUN_ram_40047b68(iVar1,0,0x10);
    iVar3 = (iVar4 + iVar6) - iVar3;
    iVar6 = *(int *)(iVar1 + 0x14);
    *(int *)(param_2 + 0x18) = iVar3;
    *(int *)(param_2 + 0x20) = iVar3 + -1;
    iVar4 = FUN_ram_40047b68(iVar1,0,0x12);
    iVar2 = (iVar4 + iVar6) - iVar2;
    *(int *)(param_2 + 0x14) = iVar2;
    *(int *)(param_2 + 0x1c) = iVar2 + -1;
    uVar5 = 0x3302;
  }
  *(undefined4 *)(param_2 + 0x24) = uVar5;
  iVar4 = 0x1000;
  if (iVar1 != 0) {
    iVar4 = 0x9000;
  }
  *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) | iVar4 - 0x78cU;
  return;
}


/* NanoCore 1.12, address 0x400435e6.
 * REA evidence: ev_174fcc39f955766951c13301f601fa77e70f18db4b1196f77d83a3d29ee217c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400435e6(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  uVar14 = (uint)*(ushort *)(param_1 + 0x28);
  if (uVar14 != param_2) {
    uVar1 = FUN_ram_40047e2c(param_1,uVar14,param_2);
    if (uVar1 == 0) {
      *(short *)(param_1 + 0x28) = (short)param_2;
    }
    else {
      FUN_ram_400455dc(param_1);
      *(short *)(param_1 + 0x28) = (short)param_2;
      FUN_ram_40048120(param_1);
      iVar2 = FUN_ram_4005a960(0x280);
      uVar3 = *(uint *)(param_1 + 0x28);
      uVar7 = 0;
      uVar13 = 0;
      while ((uVar7 < (uVar3 & 0x3ffffff) >> 0x14 && (uVar13 < 0x20))) {
        uVar10 = *(uint *)(*(int *)(param_1 + 0xc) + uVar7 * 8 + 4);
        if (((~param_2 & uVar10 & 0xffff) == 0) && ((uVar10 & 0x2000000) == 0)) {
          puVar11 = *(undefined4 **)(*(int *)(param_1 + 0xc) + uVar7 * 8);
          uVar5 = (uint)*(byte *)(puVar11 + 2);
          puVar11 = (undefined4 *)*puVar11;
          if (uVar5 == 0xff) {
            do {
              puVar12 = puVar11;
              if ((char *)*puVar12 == (char *)0x0) goto LAB_ram_40043726;
              puVar11 = puVar12 + 2;
            } while (*(char *)*puVar12 != 'f');
            puVar11 = (undefined4 *)puVar12[1];
LAB_ram_40043706:
            pcVar6 = (char *)*puVar11;
            while ((*pcVar6 != '\0' && (uVar13 < 0x20))) {
              puVar9 = (uint *)(iVar2 + 4);
              for (uVar5 = 0; uVar13 != uVar5; uVar5 = uVar5 + 1) {
                if ((((char)puVar9[1] == *pcVar6) && ((*puVar9 & 0xff0000) == (uVar10 & 0xff0000)))
                   && ((uVar10 & 0xffff) <= (*puVar9 & 0xffff))) goto LAB_ram_4004377c;
                puVar9 = puVar9 + 5;
              }
              iVar15 = uVar13 * 0x14;
              uVar13 = uVar13 + 1;
              *(short *)(iVar2 + iVar15) = (short)puVar11[3];
              iVar15 = iVar2 + iVar15;
              *(short *)(iVar15 + 2) = (short)puVar11[4];
              *(undefined4 *)(iVar15 + 0xc) = puVar11[2];
              *(char *)(iVar15 + 8) = *pcVar6;
              uVar4 = puVar11[1];
              *(uint *)(iVar15 + 4) = uVar10 & 0xffffff;
              *(undefined4 *)(iVar15 + 0x10) = uVar4;
LAB_ram_4004377c:
              pcVar6 = pcVar6 + 1;
            }
          }
          else {
            for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
              if (*(char *)((int)puVar11 + uVar8 + uVar5 * 4) == 'f') {
                puVar11 = (undefined4 *)puVar11[uVar8];
                goto LAB_ram_40043706;
              }
            }
          }
        }
LAB_ram_40043726:
        uVar7 = uVar7 + 1;
      }
      iVar15 = iVar2;
      for (uVar3 = 0; uVar13 != uVar3; uVar3 = uVar3 + 1) {
        FUN_ram_40047c2a(param_1,*(uint *)(iVar15 + 4) & 0xff0000,uVar14,param_2,iVar15);
        iVar15 = iVar15 + 0x14;
      }
      FUN_ram_4005a988(iVar2);
      if ((uVar1 & 0xfffffffd) == 1) {
        FUN_ram_4004820c(param_1,0xf0000,0xff);
        return;
      }
      if (uVar1 == 2) {
        FUN_ram_400455dc(param_1);
        FUN_ram_40044af4(param_1);
        return;
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40043b84.
 * REA evidence: ev_6bfe7479104e854b01eb8c27db25fa09861ed0ba8f648051da1fc7b06999ae26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043b84(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400441d4(&DAT_ram_4009e478,param_1);
  FUN_ram_4004430a();
  return uVar1;
}


/* NanoCore 1.12, address 0x40043ba4.
 * REA evidence: ev_166f5eb7d998ce5bf712c1c80facc5050df5a5effc78de9c50bf4036a7d77a70
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043ba4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_ram_400450bc();
  if ((param_2 & 0x10) != 0) {
    FUN_ram_40046f28(param_1,auStack_30,auStack_20);
    FUN_ram_40045578(param_1,auStack_30);
    FUN_ram_40045578(param_1,auStack_20);
  }
  *(uint *)(param_1 + 0x24) = ~param_2 & *(uint *)(param_1 + 0x24);
  if ((param_2 & 1) != 0) {
    FUN_ram_400455dc(param_1);
    iVar2 = FUN_ram_400450bc(param_1);
    if (iVar2 != 0) {
      FUN_ram_40048b6e(param_1);
      FUN_ram_400450f4();
      FUN_ram_400450f4(param_1);
    }
  }
  iVar2 = FUN_ram_400450bc(param_1);
  if ((iVar2 == iVar1) && ((param_2 & 0x1800000) == 0)) {
    return;
  }
  FUN_ram_40048b6e(param_1);
  FUN_ram_400450f4();
  return;
}


/* NanoCore 1.12, address 0x40043c38.
 * REA evidence: ev_b42ad387cc2da71b63254e1e3eef9ebcbc09145b0409e2f0c2e7d6c8826d367f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043c38(int param_1,uint param_2)

{
  param_2 = *(ushort *)(param_1 + 0x28) | param_2;
  if (*(ushort *)(param_1 + 0x28) != param_2) {
    if ((param_2 & 0x80) != 0) {
      FUN_ram_40056c5c(0,param_1);
    }
    FUN_ram_400435e6(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40043c76.
 * REA evidence: ev_862bf6fb983629affb8489734345cbc41daddc5653a641e90974135f07b90291
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043c76(int param_1,ushort param_2)

{
  if (*(ushort *)(param_1 + 0x28) != (~param_2 & *(ushort *)(param_1 + 0x28))) {
    FUN_ram_400435e6();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40043c8a.
 * REA evidence: ev_40cb2ecb270c4afab815470f39368ff24504f18c1bb99412cd365be60c256800
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40043c8a(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x24) & param_2) == param_2;
}


/* NanoCore 1.12, address 0x40043c96.
 * REA evidence: ev_14af806007205ac39657b1c1889b10182e148b81e8b90476fbc25ffa640bb507
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40043c96(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x24) & param_2) != 0;
}


/* NanoCore 1.12, address 0x40043ca0.
 * REA evidence: ev_0656f28ae1cb1272106cf00e4364f788638114e7c4afa2e0a4157dbc91646aea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_40043ca0(int param_1)

{
  return *(undefined2 *)(param_1 + 0x28);
}


/* NanoCore 1.12, address 0x40043ca6.
 * REA evidence: ev_d4f983bd7e0080bb88d862625d0140b2cbb4730ac4c36e05dec83ea85e6390b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043ca6(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40043cae.
 * REA evidence: ev_f64303eae8fbe5d051fa0661d5e156ac8737851b4264b740bcc2dbb2a04f1986
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40043df8) */
/* WARNING: Removing unreachable block (ram,0x40043e3c) */
/* WARNING: Removing unreachable block (ram,0x40043dd8) */
/* WARNING: Removing unreachable block (ram,0x40043e7e) */

void FUN_ram_40043cae(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 extraout_a1;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_74;
  byte bStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_55;
  undefined2 uStack_52;
  undefined1 uStack_50;
  int iStack_4c;
  byte bStack_48;
  byte bStack_47;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  int iStack_34;
  uint auStack_30 [2];
  undefined4 uStack_28;
  byte bStack_24;
  
  iVar3 = FUN_ram_4004afc8(param_2);
  iVar4 = FUN_ram_4004afc0(param_2);
  uVar9 = 0x20;
  if (iVar3 == 1) goto LAB_ram_40043ecc;
  if (iVar3 == 8) {
    FUN_ram_40043c76(iVar4,0x20);
    FUN_ram_4004afd2(param_2);
    iVar3 = FUN_ram_40056b2e();
    if (iVar3 != 0) {
      return;
    }
    if ((*(uint *)(iVar4 + 0x24) & 8) == 0) {
      return;
    }
    if ((*(ushort *)(iVar4 + 0x28) & 1) != 0) {
      FUN_ram_40043c76(iVar4,1);
      goto LAB_ram_40043d0c;
    }
LAB_ram_40043d02:
    FUN_ram_40043c38(iVar4,1);
LAB_ram_40043d0c:
    FUN_ram_40044c48(iVar4,0x1e,0);
    return;
  }
  uVar10 = 0x20;
  if (iVar3 == 3) goto LAB_ram_40043ee6;
  if (iVar3 == 0x2d) {
    iVar5 = FUN_ram_40048b96();
    for (iVar3 = 0; iVar3 != iVar5; iVar3 = iVar3 + 1) {
      FUN_ram_400450f4(*(undefined4 *)(**(int **)(iVar4 + 8) + iVar3 * 4));
    }
    return;
  }
  if (iVar3 != 0xe) {
    if (iVar3 == 0x10) {
      if ((*(uint *)(iVar4 + 0x24) & 0x400) != 0) {
        FUN_ram_40046ee2(iVar4,1);
        uVar10 = extraout_a1;
      }
      FUN_ram_40043ca6(iVar4,uVar10);
      iVar3 = FUN_ram_40043550();
      iVar5 = FUN_ram_40056af8();
      if (iVar5 == 0) {
        FUN_ram_40044c84(param_2);
      }
      iVar5 = FUN_ram_40056b02();
      uVar9 = 2;
      if ((iVar5 - 2U & 0xfffffffd) == 0) {
        uVar9 = 6;
      }
      if (iVar3 == 0) {
        FUN_ram_40043c38(iVar4,uVar9);
        uVar10 = 8;
        goto LAB_ram_40043ee6;
      }
      uVar9 = uVar9 | 8;
    }
    else {
      uVar9 = 0x40;
      if (iVar3 != 9) {
        if (iVar3 == 0xb) {
          FUN_ram_40043c76(iVar4,0x40);
          iVar3 = FUN_ram_40046602(iVar4);
          if (iVar3 != 2) {
            return;
          }
          FUN_ram_40046f28(iVar4,auStack_40,auStack_30);
          FUN_ram_40045578(iVar4,auStack_40);
          FUN_ram_40045578(iVar4,auStack_30);
          return;
        }
        uVar10 = 0xe;
        if (iVar3 != 0x11) {
          if (iVar3 == 0x2c) {
            uVar9 = FUN_ram_40047b68(iVar4,0,10);
            auStack_30[0] = uVar9;
            auStack_30[0] = FUN_ram_40047b68(iVar4,0,0x16);
            if (((auStack_30[0] & 0xffff) != 0) || ((uVar9 & 0xff) != 0)) {
              FUN_ram_400450f4(iVar4);
            }
            iVar5 = FUN_ram_40048b96(iVar4);
            for (iVar3 = 0; iVar3 != iVar5; iVar3 = iVar3 + 1) {
              FUN_ram_400450f4(*(undefined4 *)(**(int **)(iVar4 + 8) + iVar3 * 4));
            }
            return;
          }
          if (iVar3 == 0x25) {
            uVar9 = FUN_ram_40047b68(iVar4,0,1);
            auStack_30[0] = uVar9;
            uVar7 = FUN_ram_40047b68(iVar4,0,2);
            auStack_30[0] = uVar7;
            uVar8 = FUN_ram_40047b68(iVar4,0,10);
            auStack_30[0] = uVar8;
            auStack_30[0] = FUN_ram_40047b68(iVar4,0,0x16);
            if (((((auStack_30[0] & 0xffff) == 0) && ((uVar8 & 0xff) == 0)) && (uVar9 != 0x200007d1)
                ) && (uVar7 != 0x200007d1)) {
              return;
            }
          }
          else {
            if (iVar3 != 0x27) {
              if (iVar3 == 0x16) {
                uVar10 = FUN_ram_400449dc(iVar4,0);
                FUN_ram_40044cd8(param_2,uVar10);
                return;
              }
              if (iVar3 - 0x15U < 7) {
                if ((0x49U >> (iVar3 - 0x15U & 0x1f) & 1) == 0) {
                  return;
                }
                iVar3 = FUN_ram_4004afc8(param_2,0xe);
                iVar4 = FUN_ram_4004afc0(param_2);
                if (iVar3 != 0x15) {
                  if (iVar3 == 0x18) {
                    uVar10 = FUN_ram_40044ca4(param_2);
                    FUN_ram_4004eec8(&iStack_90);
                    FUN_ram_40044410(iVar4,0,&iStack_90);
                    uStack_a0 = FUN_ram_40047b68(iVar4,0,0x35);
                    if (uStack_a0 != 0) {
                      bStack_47 = bStack_47 | 0x20;
                    }
                    uVar9 = FUN_ram_40047b68(iVar4,0,0x68);
                    uStack_a0 = uVar9;
                    uVar2 = FUN_ram_40047b68(iVar4,0,0x69);
                    uStack_a0 = *(uint *)(iVar4 + 0x14);
                    uStack_9c = *(undefined4 *)(iVar4 + 0x18);
                    uStack_98 = *(undefined4 *)(iVar4 + 0x1c);
                    uStack_94 = *(undefined4 *)(iVar4 + 0x20);
                    FUN_ram_4004a4ca(&uStack_a0,uVar9,uVar2);
                  }
                  else {
                    if (iVar3 != 0x1b) {
                      return;
                    }
                    uVar10 = FUN_ram_40044ca4(param_2);
                    FUN_ram_40046f28(iVar4,auStack_b0,&uStack_a0);
                    iVar3 = FUN_ram_4004a4b4(auStack_b0);
                    if ((iVar3 != 0) || (iVar3 = FUN_ram_4004a4b4(&uStack_a0), iVar3 != 0)) {
                      FUN_ram_4004eec8(&iStack_90);
                      bStack_70 = FUN_ram_40047b68(iVar4,0x10000,0x1d);
                      if (2 < bStack_70) {
                        uVar2 = FUN_ram_40047b68(iVar4,0x10000,0x1c);
                        uStack_6f = (undefined1)uVar2;
                        uStack_6e = (undefined1)((uint)uVar2 >> 8);
                        uStack_6d = (undefined1)((uint)uVar2 >> 0x10);
                      }
                      bStack_48 = FUN_ram_40047b68(iVar4,0x10000,0x32);
                      if (2 < bStack_48) {
                        iStack_4c = FUN_ram_40047b68(iVar4,0x10000,0x30);
                        if (iStack_4c < 1) {
                          bStack_48 = 0;
                        }
                        else {
                          uVar2 = FUN_ram_40047b68(iVar4,0x10000,0x31);
                          uStack_52 = (undefined2)uVar2;
                          uStack_50 = (undefined1)((uint)uVar2 >> 0x10);
                        }
                      }
                      bStack_24 = FUN_ram_40047b68(iVar4,0x10000,0x3e);
                      if (2 < bStack_24) {
                        iStack_34 = FUN_ram_40047b68(iVar4,0x10000,0x3c);
                        if (iStack_34 < 1) {
                          bStack_24 = 0;
                        }
                        else {
                          uStack_28 = FUN_ram_40047b68(iVar4,0x10000,0x42);
                          uVar2 = FUN_ram_40047b68(iVar4,0x10000,0x3d);
                          uStack_37 = (undefined1)uVar2;
                          uStack_36 = (undefined1)((uint)uVar2 >> 8);
                          uStack_35 = (undefined1)((uint)uVar2 >> 0x10);
                        }
                      }
                      uVar9 = FUN_ram_4004807c(iVar4,0x10000);
                      if (uVar9 < 0xfd) {
                        bStack_70 = (byte)(bStack_70 * uVar9 * 0x10000 >> 0x18);
                        bStack_48 = bStack_70;
                        bStack_24 = bStack_70;
                      }
                      if ((bStack_70 != 0 || bStack_48 != 0) || bStack_24 != 0) {
                        uStack_74 = FUN_ram_40047b68(iVar4,0x10000,0xc);
                        iVar3 = FUN_ram_4004a4b4(auStack_b0);
                        if (iVar3 != 0) {
                          uStack_88 = 0;
                          FUN_ram_4004ef8a(uVar10,&iStack_90,auStack_b0);
                        }
                        iVar3 = FUN_ram_4004a4b4(&uStack_a0);
                        if (iVar3 != 0) {
                          uStack_88 = 1;
                          FUN_ram_4004ef8a(uVar10,&iStack_90,&uStack_a0);
                        }
                      }
                    }
                    iStack_90 = FUN_ram_40047b68(iVar4,0,0x35);
                    if (iStack_90 == 0) {
                      return;
                    }
                    FUN_ram_4004eec8(&iStack_90);
                    bStack_70 = 0;
                    uStack_55 = 0;
                    uStack_38 = 0;
                    bStack_24 = 0;
                    FUN_ram_40044410(iVar4,0,&iStack_90);
                    uVar9 = FUN_ram_40047b68(iVar4,0,0x68);
                    uStack_a0 = uVar9;
                    uVar2 = FUN_ram_40047b68(iVar4,0,0x69);
                    uStack_a0 = *(uint *)(iVar4 + 0x14);
                    uStack_9c = *(undefined4 *)(iVar4 + 0x18);
                    uStack_98 = *(undefined4 *)(iVar4 + 0x1c);
                    uStack_94 = *(undefined4 *)(iVar4 + 0x20);
                    FUN_ram_4004a4ca(&uStack_a0,uVar9,uVar2);
                  }
                  FUN_ram_4004ef8a(uVar10,&iStack_90,&uStack_a0);
                  return;
                }
                piVar1 = (int *)FUN_ram_4004afd2(param_2);
                if (*piVar1 == 2) {
                  return;
                }
                iStack_90 = FUN_ram_40047b68(iVar4,0,0x2d);
                if (iStack_90 != 0) {
                  *piVar1 = 2;
                  return;
                }
                iVar3 = FUN_ram_40047b68(iVar4,0,0xc);
                iStack_90 = iVar3;
                iVar5 = FUN_ram_40047b68(iVar4,0,0x68);
                iStack_90 = iVar5;
                uVar10 = FUN_ram_40047b68(iVar4,0,0x69);
                iStack_90 = *(int *)(iVar4 + 0x14);
                uStack_8c = *(undefined4 *)(iVar4 + 0x18);
                uStack_88 = *(undefined4 *)(iVar4 + 0x1c);
                uStack_84 = *(undefined4 *)(iVar4 + 0x20);
                FUN_ram_4004a4ca(&iStack_90,iVar5,uVar10);
                iVar3 = FUN_ram_4004a6a6(piVar1[1],&iStack_90,iVar3);
                if (((iVar3 != 0) &&
                    (uStack_a0 = FUN_ram_40047b68(iVar4,0,0x1d), 0xfc < (uStack_a0 & 0xff))) &&
                   ((uStack_a0 = FUN_ram_40047b68(iVar4,0,0x5f), 0xfc < (uStack_a0 & 0xff) &&
                    ((uStack_a0 = FUN_ram_40047b68(iVar4,0,0x20), (uStack_a0 & 0xff) == 0 ||
                     (uStack_a0 = FUN_ram_40047b68(iVar4,0,0x25), 0xfc < (uStack_a0 & 0xff))))))) {
                  iVar3 = FUN_ram_40047b68(iVar4,0,0x26);
                  if (iVar3 != 0) {
                    for (uVar9 = 0; uVar9 < *(byte *)(iVar3 + 10); uVar9 = uVar9 + 1) {
                      if (*(byte *)(iVar3 + 3 + uVar9 * 5) < 0xfd) goto LAB_ram_40043866;
                    }
                  }
                  *piVar1 = 0;
                  return;
                }
LAB_ram_40043866:
                *piVar1 = 1;
                return;
              }
              if (iVar3 != 0x14) {
                return;
              }
              FUN_ram_40043c76(iVar4,0x20);
              uVar10 = 0x40;
              goto LAB_ram_40043ee6;
            }
            *(ushort *)(iVar4 + 0x2a) = *(ushort *)(iVar4 + 0x2a) | 2;
          }
          FUN_ram_400450f4(iVar4);
          return;
        }
LAB_ram_40043ee6:
        FUN_ram_40043c76(iVar4,uVar10);
        return;
      }
    }
LAB_ram_40043ecc:
    FUN_ram_40043c38(iVar4,uVar9);
    return;
  }
  if ((*(uint *)(iVar4 + 0x24) & 8) != 0) {
    uVar9 = FUN_ram_40044cb6(param_2);
    if ((uVar9 & 0xfffffffd) != 0x11) {
      if ((uVar9 - 0x12 & 0xfffffffd) == 0) {
        FUN_ram_40043c76(iVar4,1);
      }
      if (uVar9 == 10) {
        return;
      }
      goto LAB_ram_40043d0c;
    }
    goto LAB_ram_40043d02;
  }
  if ((*(uint *)(iVar4 + 0x24) & 0x810) != 0x810) {
    return;
  }
  iVar3 = FUN_ram_400442d6();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_ram_4004671e(iVar4);
  iVar5 = FUN_ram_4004680e(iVar4);
  iVar6 = FUN_ram_40044cb6(param_2);
  if (iVar6 == 0x12) {
LAB_ram_40043dc8:
    iVar3 = FUN_ram_40046652(iVar4);
    iVar5 = FUN_ram_40045168(iVar4);
    iVar3 = iVar5 / 4 + iVar3;
  }
  else {
    if (iVar6 != 0x11) {
      if (iVar6 == 0x13) {
        uVar9 = FUN_ram_40046612(iVar4);
        if (((uVar9 & 3) != 0) && ((0 < iVar3 || (0 < iVar5)))) {
          iVar3 = FUN_ram_40046642(iVar4);
          iVar5 = FUN_ram_4004515c(iVar4);
          iVar3 = iVar5 / 4 + iVar3;
          goto LAB_ram_40043e44;
        }
        goto LAB_ram_40043dc8;
      }
      if (iVar6 != 0x14) {
        return;
      }
      uVar9 = FUN_ram_40046612(iVar4);
      if (((uVar9 & 3) != 0) && ((0 < iVar3 || (0 < iVar5)))) {
        iVar3 = FUN_ram_40046642(iVar4);
        iVar5 = FUN_ram_4004515c(iVar4);
        iVar3 = iVar3 - iVar5 / 4;
LAB_ram_40043e44:
        FUN_ram_40046bbe(iVar4,iVar3,0);
        return;
      }
    }
    iVar3 = FUN_ram_40046652(iVar4);
    iVar5 = FUN_ram_40045168(iVar4);
    iVar3 = iVar3 - iVar5 / 4;
  }
  FUN_ram_40046bf4(iVar4,iVar3,0);
  return;
}


