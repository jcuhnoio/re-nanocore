/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40042000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40042040.
 * REA evidence: ev_7b53d942fae7310a15d8bda9a7912c53d9c92c4091fc5019f3b201ba57a5081e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40042040(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40004476();
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


/* NanoCore 1.10, address 0x400420dc.
 * REA evidence: ev_39e4335f1664ff3b84ae39ef5dbf8c472201da3ed5dc8d36ef512144cab0fa44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400420dc(void)

{
  if (DAT_ram_3007f8e0 == '\0') {
    thunk_FUN_ram_4000505c(&DAT_ram_3007f8e0,0,0x194);
    FUN_ram_4004a3cc(0x3007f8e4,0x310);
    FUN_ram_4004a3cc(0x3007f924,200);
    _DAT_ram_3007f944 = 0xa1b2c3d4;
    _DAT_ram_3007f90c = 0x8c;
    _DAT_ram_3007f950 = 0x3d;
    DAT_ram_3007f904 = 1;
    _DAT_ram_3007f938 = 1;
    FUN_ram_4004a866(0x1234abcd);
    FUN_ram_40059c60();
    FUN_ram_4004ca2c();
    FUN_ram_4004b61e();
    FUN_ram_40049f94();
    FUN_ram_40055ef4();
    FUN_ram_400491a0();
    FUN_ram_400422de();
    FUN_ram_4004c534();
    FUN_ram_4004ea82();
    FUN_ram_40046ae6();
    FUN_ram_40047ed2();
    FUN_ram_4004e5e6();
    FUN_ram_4005841e();
    DAT_ram_3007f8e0 = '\x01';
  }
  return;
}


/* NanoCore 1.10, address 0x40042188.
 * REA evidence: ev_db5d0b304c036c4dec8e9f477f98b0ace14fd522a30cfda137733d28e5724087
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40042188(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_40055d40(0);
  iVar1 = 0;
  while ((iVar4 = iVar1, iVar2 != 0 && (iVar3 = FUN_ram_40055d5e(iVar2), iVar4 = iVar2, iVar3 != 1))
        ) {
    iVar4 = FUN_ram_40055d68(iVar2);
    if (iVar4 == param_1) {
      iVar1 = iVar2;
    }
    iVar2 = FUN_ram_40055d40(iVar2);
  }
  return iVar4;
}


/* NanoCore 1.10, address 0x400421da.
 * REA evidence: ev_a973461f7f8bc983559456f6cd3db893d981ff3bde83e566a8f15d455ba9f026
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400421da(int param_1,code *param_2,code *param_3)

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
        if (piVar2 != piVar6) goto LAB_ram_40042294;
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
LAB_ram_40042294:
      } while (piVar2 == (int *)0x0);
      uVar3 = FUN_ram_40042c36(*piVar2);
    } while ((uVar3 & 0x80) != 0);
    iVar7 = *piVar2;
    while( true ) {
      if (iVar7 == 0) goto LAB_ram_4004223a;
      iVar5 = FUN_ram_40042c20(iVar7,1);
      if (iVar5 != 0) break;
      iVar7 = FUN_ram_40047b04(iVar7);
    }
    iVar7 = FUN_ram_40042c20(iVar7,1);
  } while (iVar7 != 0);
LAB_ram_4004223a:
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      iVar7 = *piVar6;
      uVar4 = FUN_ram_40042188(param_1);
      iVar7 = FUN_ram_40043bde(iVar7,0x11,uVar4);
      if (iVar7 != 1) {
        return 0;
      }
      FUN_ram_40044572(**(undefined4 **)(param_1 + 0xc));
    }
    *(int **)(param_1 + 0xc) = piVar2;
    iVar7 = *piVar2;
    uVar4 = FUN_ram_40042188(param_1);
    iVar7 = FUN_ram_40043bde(iVar7,0x10,uVar4);
    if (iVar7 == 1) {
      FUN_ram_40044572(**(undefined4 **)(param_1 + 0xc));
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x400422de.
 * REA evidence: ev_9d00033a47e31c8cfddf0ebaf19e33ce55d8fb99f21eeed07422849adecc486f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400422de(void)

{
  FUN_ram_4004a3cc(0x3007f914,0x20);
  return;
}


/* NanoCore 1.10, address 0x400422ee.
 * REA evidence: ev_6bde9d0fb4df27674e6d728843f63de57ebfe28e288362ef2206592579309fb1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400422ee(void)

{
  return _DAT_ram_3007f920;
}


/* NanoCore 1.10, address 0x400422f8.
 * REA evidence: ev_81821e7720660909d9420baa0a60c551e9f145e62dc14bc827a124b81aa97bb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400422f8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400421da(param_1,FUN_ram_4004a5a6,FUN_ram_4004a5b2);
  if ((*(code **)(param_1 + 0x14) != (code *)0x0) && (iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x40042324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14))(param_1,1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004232e.
 * REA evidence: ev_0a592de9f4d9b4fb466b1e9fe76d03dee4b4c5264bde1fa9e0e135b82b719249
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004232e(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400421da(param_1,FUN_ram_4004a5ac,FUN_ram_4004a5ba);
  if ((*(code **)(param_1 + 0x14) != (code *)0x0) && (iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x4004235a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14))(param_1,0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40042364.
 * REA evidence: ev_0f639e31c06ff556caf95562e442a376a9420e5d36619751c85ec02497cf784f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042364(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x1c) = bVar1 | 8;
  if ((bVar1 & 4) == 0) {
    FUN_ram_400422f8();
  }
  else {
    FUN_ram_4004232e();
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf7 | (byte)uVar2 & 8;
  return;
}


/* NanoCore 1.10, address 0x400423a6.
 * REA evidence: ev_bb93501b0c546603701f40f5f5834ccde151ab1307ce3fd194a84fee1b7737b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400423a6(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_ram_40042c3c();
  if (iVar1 == 0) {
    return;
  }
  if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) == param_1)) {
    if ((*(byte *)(iVar1 + 0x1c) & 1) != 0) {
      *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xfe;
    }
    iVar2 = FUN_ram_4004a5a6(iVar1);
    if ((iVar2 == *(int *)(iVar1 + 0xc)) &&
       (puVar3 = (undefined4 *)FUN_ram_4004a5ac(iVar1), puVar3 == *(undefined4 **)(iVar1 + 0xc))) {
      uVar6 = *puVar3;
      uVar4 = FUN_ram_40042188(iVar1);
      FUN_ram_40043bde(uVar6,0x11,uVar4);
    }
    else {
      FUN_ram_40042364(iVar1);
    }
  }
  if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) == param_1)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  piVar5 = (int *)FUN_ram_4004a5a6(iVar1);
  while( true ) {
    if (piVar5 == (int *)0x0) {
      return;
    }
    if (*piVar5 == param_1) break;
    piVar5 = (int *)FUN_ram_4004a5b2(iVar1);
  }
  FUN_ram_4004a4e8(iVar1);
  FUN_ram_40059be4(piVar5);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
  return;
}


/* NanoCore 1.10, address 0x40042452.
 * REA evidence: ev_8311aa948f68adbae16da2c1637b675856db2a8c507f1909aa7fc0cae5cc56e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042452(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return;
  }
  FUN_ram_400423a6(param_2);
  for (piVar1 = (int *)FUN_ram_4004a5a6(param_1); piVar1 != (int *)0x0;
      piVar1 = (int *)FUN_ram_4004a5b2(param_1,piVar1)) {
    if (*piVar1 == param_2) {
      return;
    }
  }
  iVar2 = FUN_ram_40042c3c(param_2);
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 4);
    if ((iVar2 == 0) || (**(int **)(iVar2 + 0xc) != param_2)) goto LAB_ram_40042494;
    FUN_ram_40042364();
  }
  if (*(int *)(param_2 + 8) == 0) {
    FUN_ram_40043102(param_2);
  }
LAB_ram_40042494:
  *(int *)(*(int *)(param_2 + 8) + 4) = param_1;
  piVar1 = (int *)FUN_ram_4004a49e(param_1);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar3 = (int *)FUN_ram_4004a5a6(param_1);
    if (piVar3 == piVar1) {
      FUN_ram_40042364(param_1);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400424dc.
 * REA evidence: ev_1c504d7057158eaa0db86844d8a10847f75537f669d3ecf6a1da3626e86c4cb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400424dc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0)) {
    uVar1 = **(undefined4 **)(param_1 + 0xc);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400424e6.
 * REA evidence: ev_3da5aeeb0f350faf11c01968d34305ec5519db28a0678f3ccfd19d071c373e7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400424e6(int param_1)

{
  if (param_1 != 0) {
    return (*(uint *)(param_1 + 0x1c) & 3) >> 1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400424f4.
 * REA evidence: ev_a34fdd53e1d8c50213c0a423aad3a52be9ca4b3e9232a2b3818fc2287bb7cbe0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400424f4(undefined4 param_1,int param_2)

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
    iVar2 = FUN_ram_400456b4(iVar1);
    iVar3 = thunk_FUN_ram_400455e8(iVar1);
    iVar6 = *(int *)(iVar1 + 0x18);
    iVar4 = FUN_ram_40046afe(iVar1,0,0x10);
    iVar3 = (iVar4 + iVar6) - iVar3;
    iVar6 = *(int *)(iVar1 + 0x14);
    *(int *)(param_2 + 0x18) = iVar3;
    *(int *)(param_2 + 0x20) = iVar3 + -1;
    iVar4 = FUN_ram_40046afe(iVar1,0,0x12);
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


/* NanoCore 1.10, address 0x4004257c.
 * REA evidence: ev_b29d968159e79d814c20e817805a44e6855d9c43a9f5de8c6382d16a339cb8c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004257c(int param_1,uint param_2)

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
    uVar1 = FUN_ram_40046dc2(param_1,uVar14,param_2);
    if (uVar1 == 0) {
      *(short *)(param_1 + 0x28) = (short)param_2;
    }
    else {
      FUN_ram_40044572(param_1);
      *(short *)(param_1 + 0x28) = (short)param_2;
      FUN_ram_400470b6(param_1);
      iVar2 = FUN_ram_40059bbc(0x280);
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
              if ((char *)*puVar12 == (char *)0x0) goto LAB_ram_400426bc;
              puVar11 = puVar12 + 2;
            } while (*(char *)*puVar12 != 'f');
            puVar11 = (undefined4 *)puVar12[1];
LAB_ram_4004269c:
            pcVar6 = (char *)*puVar11;
            while ((*pcVar6 != '\0' && (uVar13 < 0x20))) {
              puVar9 = (uint *)(iVar2 + 4);
              for (uVar5 = 0; uVar13 != uVar5; uVar5 = uVar5 + 1) {
                if ((((char)puVar9[1] == *pcVar6) && ((*puVar9 & 0xff0000) == (uVar10 & 0xff0000)))
                   && ((uVar10 & 0xffff) <= (*puVar9 & 0xffff))) goto LAB_ram_40042712;
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
LAB_ram_40042712:
              pcVar6 = pcVar6 + 1;
            }
          }
          else {
            for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
              if (*(char *)((int)puVar11 + uVar8 + uVar5 * 4) == 'f') {
                puVar11 = (undefined4 *)puVar11[uVar8];
                goto LAB_ram_4004269c;
              }
            }
          }
        }
LAB_ram_400426bc:
        uVar7 = uVar7 + 1;
      }
      iVar15 = iVar2;
      for (uVar3 = 0; uVar13 != uVar3; uVar3 = uVar3 + 1) {
        FUN_ram_40046bc0(param_1,*(uint *)(iVar15 + 4) & 0xff0000,uVar14,param_2,iVar15);
        iVar15 = iVar15 + 0x14;
      }
      FUN_ram_40059be4(iVar2);
      if ((uVar1 & 0xfffffffd) == 1) {
        FUN_ram_400471a2(param_1,0xf0000,0xff);
        return;
      }
      if (uVar1 == 2) {
        FUN_ram_40044572(param_1);
        FUN_ram_40043a8a(param_1);
        return;
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40042b1a.
 * REA evidence: ev_71b021a30df078b38a9712e03ec11efd0e45136f0e63d32835d2fadf57289c3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40042b1a(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4004316a(&DAT_ram_4009751c,param_1);
  FUN_ram_400432a0();
  return uVar1;
}


/* NanoCore 1.10, address 0x40042b3a.
 * REA evidence: ev_af4fbcc7cd15d57a7f7c76803f86a4dd416fe355b99f7a4bd32accd495affb05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042b3a(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_ram_40044052();
  if ((param_2 & 0x10) != 0) {
    FUN_ram_40045ebe(param_1,auStack_30,auStack_20);
    FUN_ram_4004450e(param_1,auStack_30);
    FUN_ram_4004450e(param_1,auStack_20);
  }
  *(uint *)(param_1 + 0x24) = ~param_2 & *(uint *)(param_1 + 0x24);
  if ((param_2 & 1) != 0) {
    FUN_ram_40044572(param_1);
    iVar2 = FUN_ram_40044052(param_1);
    if (iVar2 != 0) {
      FUN_ram_40047b04(param_1);
      FUN_ram_4004408a();
      FUN_ram_4004408a(param_1);
    }
  }
  iVar2 = FUN_ram_40044052(param_1);
  if ((iVar2 == iVar1) && ((param_2 & 0x1800000) == 0)) {
    return;
  }
  FUN_ram_40047b04(param_1);
  FUN_ram_4004408a();
  return;
}


/* NanoCore 1.10, address 0x40042bce.
 * REA evidence: ev_001e91d61e9bd136209a8f9d58e6742167994a3db6426984556b50c8f51c081b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042bce(int param_1,uint param_2)

{
  param_2 = *(ushort *)(param_1 + 0x28) | param_2;
  if (*(ushort *)(param_1 + 0x28) != param_2) {
    if ((param_2 & 0x80) != 0) {
      FUN_ram_40055eb8(0,param_1);
    }
    FUN_ram_4004257c(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40042c0c.
 * REA evidence: ev_db2a24b9f17d706157b8f69bb3f8cce553993899d66c182272851e66683d1da8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042c0c(int param_1,ushort param_2)

{
  if (*(ushort *)(param_1 + 0x28) != (~param_2 & *(ushort *)(param_1 + 0x28))) {
    FUN_ram_4004257c();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40042c20.
 * REA evidence: ev_803dcd5eb8f1f100955de1775f7f883322116d040f2a7d9895fe6a1480790725
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40042c20(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x24) & param_2) == param_2;
}


/* NanoCore 1.10, address 0x40042c2c.
 * REA evidence: ev_9bd75b3360937bc59f659ed39165faa7f985eb56643408ec02c22f4fb9669949
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40042c2c(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x24) & param_2) != 0;
}


/* NanoCore 1.10, address 0x40042c36.
 * REA evidence: ev_d90619c239aac36b22a428a43e1b6dd1161e56b7b0fa68efa387beb91e1cbf77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_40042c36(int param_1)

{
  return *(undefined2 *)(param_1 + 0x28);
}


/* NanoCore 1.10, address 0x40042c3c.
 * REA evidence: ev_5000a83b1947e27366071291e8d23fcde37c52f7379ae33cb2bfa4f6e5c72996
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40042c3c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40042c44.
 * REA evidence: ev_50b7d4824488008343c7eba7aa2fb3a2785219ad11d4c89af848c054656f6852
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40042d8e) */
/* WARNING: Removing unreachable block (ram,0x40042dd2) */
/* WARNING: Removing unreachable block (ram,0x40042d6e) */
/* WARNING: Removing unreachable block (ram,0x40042e14) */

void FUN_ram_40042c44(undefined4 param_1,undefined4 param_2)

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
  
  iVar3 = FUN_ram_40049f5e(param_2);
  iVar4 = FUN_ram_40049f56(param_2);
  uVar9 = 0x20;
  if (iVar3 == 1) goto LAB_ram_40042e62;
  if (iVar3 == 8) {
    FUN_ram_40042c0c(iVar4,0x20);
    FUN_ram_40049f68(param_2);
    iVar3 = FUN_ram_40055d8a();
    if (iVar3 != 0) {
      return;
    }
    if ((*(uint *)(iVar4 + 0x24) & 8) == 0) {
      return;
    }
    if ((*(ushort *)(iVar4 + 0x28) & 1) != 0) {
      FUN_ram_40042c0c(iVar4,1);
      goto LAB_ram_40042ca2;
    }
LAB_ram_40042c98:
    FUN_ram_40042bce(iVar4,1);
LAB_ram_40042ca2:
    FUN_ram_40043bde(iVar4,0x1e,0);
    return;
  }
  uVar10 = 0x20;
  if (iVar3 == 3) goto LAB_ram_40042e7c;
  if (iVar3 == 0x2d) {
    iVar5 = FUN_ram_40047b2c();
    for (iVar3 = 0; iVar3 != iVar5; iVar3 = iVar3 + 1) {
      FUN_ram_4004408a(*(undefined4 *)(**(int **)(iVar4 + 8) + iVar3 * 4));
    }
    return;
  }
  if (iVar3 != 0xe) {
    if (iVar3 == 0x10) {
      if ((*(uint *)(iVar4 + 0x24) & 0x400) != 0) {
        FUN_ram_40045e78(iVar4,1);
        uVar10 = extraout_a1;
      }
      FUN_ram_40042c3c(iVar4,uVar10);
      iVar3 = FUN_ram_400424e6();
      iVar5 = FUN_ram_40055d54();
      if (iVar5 == 0) {
        FUN_ram_40043c1a(param_2);
      }
      iVar5 = FUN_ram_40055d5e();
      uVar9 = 2;
      if ((iVar5 - 2U & 0xfffffffd) == 0) {
        uVar9 = 6;
      }
      if (iVar3 == 0) {
        FUN_ram_40042bce(iVar4,uVar9);
        uVar10 = 8;
        goto LAB_ram_40042e7c;
      }
      uVar9 = uVar9 | 8;
    }
    else {
      uVar9 = 0x40;
      if (iVar3 != 9) {
        if (iVar3 == 0xb) {
          FUN_ram_40042c0c(iVar4,0x40);
          iVar3 = FUN_ram_40045598(iVar4);
          if (iVar3 != 2) {
            return;
          }
          FUN_ram_40045ebe(iVar4,auStack_40,auStack_30);
          FUN_ram_4004450e(iVar4,auStack_40);
          FUN_ram_4004450e(iVar4,auStack_30);
          return;
        }
        uVar10 = 0xe;
        if (iVar3 != 0x11) {
          if (iVar3 == 0x2c) {
            uVar9 = FUN_ram_40046afe(iVar4,0,10);
            auStack_30[0] = uVar9;
            auStack_30[0] = FUN_ram_40046afe(iVar4,0,0x16);
            if (((auStack_30[0] & 0xffff) != 0) || ((uVar9 & 0xff) != 0)) {
              FUN_ram_4004408a(iVar4);
            }
            iVar5 = FUN_ram_40047b2c(iVar4);
            for (iVar3 = 0; iVar3 != iVar5; iVar3 = iVar3 + 1) {
              FUN_ram_4004408a(*(undefined4 *)(**(int **)(iVar4 + 8) + iVar3 * 4));
            }
            return;
          }
          if (iVar3 == 0x25) {
            uVar9 = FUN_ram_40046afe(iVar4,0,1);
            auStack_30[0] = uVar9;
            uVar7 = FUN_ram_40046afe(iVar4,0,2);
            auStack_30[0] = uVar7;
            uVar8 = FUN_ram_40046afe(iVar4,0,10);
            auStack_30[0] = uVar8;
            auStack_30[0] = FUN_ram_40046afe(iVar4,0,0x16);
            if (((((auStack_30[0] & 0xffff) == 0) && ((uVar8 & 0xff) == 0)) && (uVar9 != 0x200007d1)
                ) && (uVar7 != 0x200007d1)) {
              return;
            }
          }
          else {
            if (iVar3 != 0x27) {
              if (iVar3 == 0x16) {
                uVar10 = FUN_ram_40043972(iVar4,0);
                FUN_ram_40043c6e(param_2,uVar10);
                return;
              }
              if (iVar3 - 0x15U < 7) {
                if ((0x49U >> (iVar3 - 0x15U & 0x1f) & 1) == 0) {
                  return;
                }
                iVar3 = FUN_ram_40049f5e(param_2,0xe);
                iVar4 = FUN_ram_40049f56(param_2);
                if (iVar3 != 0x15) {
                  if (iVar3 == 0x18) {
                    uVar10 = FUN_ram_40043c3a(param_2);
                    FUN_ram_4004de78(&iStack_90);
                    FUN_ram_400433a6(iVar4,0,&iStack_90);
                    uStack_a0 = FUN_ram_40046afe(iVar4,0,0x35);
                    if (uStack_a0 != 0) {
                      bStack_47 = bStack_47 | 0x20;
                    }
                    uVar9 = FUN_ram_40046afe(iVar4,0,0x68);
                    uStack_a0 = uVar9;
                    uVar2 = FUN_ram_40046afe(iVar4,0,0x69);
                    uStack_a0 = *(uint *)(iVar4 + 0x14);
                    uStack_9c = *(undefined4 *)(iVar4 + 0x18);
                    uStack_98 = *(undefined4 *)(iVar4 + 0x1c);
                    uStack_94 = *(undefined4 *)(iVar4 + 0x20);
                    FUN_ram_40049460(&uStack_a0,uVar9,uVar2);
                  }
                  else {
                    if (iVar3 != 0x1b) {
                      return;
                    }
                    uVar10 = FUN_ram_40043c3a(param_2);
                    FUN_ram_40045ebe(iVar4,auStack_b0,&uStack_a0);
                    iVar3 = FUN_ram_4004944a(auStack_b0);
                    if ((iVar3 != 0) || (iVar3 = FUN_ram_4004944a(&uStack_a0), iVar3 != 0)) {
                      FUN_ram_4004de78(&iStack_90);
                      bStack_70 = FUN_ram_40046afe(iVar4,0x10000,0x1d);
                      if (2 < bStack_70) {
                        uVar2 = FUN_ram_40046afe(iVar4,0x10000,0x1c);
                        uStack_6f = (undefined1)uVar2;
                        uStack_6e = (undefined1)((uint)uVar2 >> 8);
                        uStack_6d = (undefined1)((uint)uVar2 >> 0x10);
                      }
                      bStack_48 = FUN_ram_40046afe(iVar4,0x10000,0x32);
                      if (2 < bStack_48) {
                        iStack_4c = FUN_ram_40046afe(iVar4,0x10000,0x30);
                        if (iStack_4c < 1) {
                          bStack_48 = 0;
                        }
                        else {
                          uVar2 = FUN_ram_40046afe(iVar4,0x10000,0x31);
                          uStack_52 = (undefined2)uVar2;
                          uStack_50 = (undefined1)((uint)uVar2 >> 0x10);
                        }
                      }
                      bStack_24 = FUN_ram_40046afe(iVar4,0x10000,0x3e);
                      if (2 < bStack_24) {
                        iStack_34 = FUN_ram_40046afe(iVar4,0x10000,0x3c);
                        if (iStack_34 < 1) {
                          bStack_24 = 0;
                        }
                        else {
                          uStack_28 = FUN_ram_40046afe(iVar4,0x10000,0x42);
                          uVar2 = FUN_ram_40046afe(iVar4,0x10000,0x3d);
                          uStack_37 = (undefined1)uVar2;
                          uStack_36 = (undefined1)((uint)uVar2 >> 8);
                          uStack_35 = (undefined1)((uint)uVar2 >> 0x10);
                        }
                      }
                      uVar9 = FUN_ram_40047012(iVar4,0x10000);
                      if (uVar9 < 0xfd) {
                        bStack_70 = (byte)(bStack_70 * uVar9 * 0x10000 >> 0x18);
                        bStack_48 = bStack_70;
                        bStack_24 = bStack_70;
                      }
                      if ((bStack_70 != 0 || bStack_48 != 0) || bStack_24 != 0) {
                        uStack_74 = FUN_ram_40046afe(iVar4,0x10000,0xc);
                        iVar3 = FUN_ram_4004944a(auStack_b0);
                        if (iVar3 != 0) {
                          uStack_88 = 0;
                          FUN_ram_4004df3a(uVar10,&iStack_90,auStack_b0);
                        }
                        iVar3 = FUN_ram_4004944a(&uStack_a0);
                        if (iVar3 != 0) {
                          uStack_88 = 1;
                          FUN_ram_4004df3a(uVar10,&iStack_90,&uStack_a0);
                        }
                      }
                    }
                    iStack_90 = FUN_ram_40046afe(iVar4,0,0x35);
                    if (iStack_90 == 0) {
                      return;
                    }
                    FUN_ram_4004de78(&iStack_90);
                    bStack_70 = 0;
                    uStack_55 = 0;
                    uStack_38 = 0;
                    bStack_24 = 0;
                    FUN_ram_400433a6(iVar4,0,&iStack_90);
                    uVar9 = FUN_ram_40046afe(iVar4,0,0x68);
                    uStack_a0 = uVar9;
                    uVar2 = FUN_ram_40046afe(iVar4,0,0x69);
                    uStack_a0 = *(uint *)(iVar4 + 0x14);
                    uStack_9c = *(undefined4 *)(iVar4 + 0x18);
                    uStack_98 = *(undefined4 *)(iVar4 + 0x1c);
                    uStack_94 = *(undefined4 *)(iVar4 + 0x20);
                    FUN_ram_40049460(&uStack_a0,uVar9,uVar2);
                  }
                  FUN_ram_4004df3a(uVar10,&iStack_90,&uStack_a0);
                  return;
                }
                piVar1 = (int *)FUN_ram_40049f68(param_2);
                if (*piVar1 == 2) {
                  return;
                }
                iStack_90 = FUN_ram_40046afe(iVar4,0,0x2d);
                if (iStack_90 != 0) {
                  *piVar1 = 2;
                  return;
                }
                iVar3 = FUN_ram_40046afe(iVar4,0,0xc);
                iStack_90 = iVar3;
                iVar5 = FUN_ram_40046afe(iVar4,0,0x68);
                iStack_90 = iVar5;
                uVar10 = FUN_ram_40046afe(iVar4,0,0x69);
                iStack_90 = *(int *)(iVar4 + 0x14);
                uStack_8c = *(undefined4 *)(iVar4 + 0x18);
                uStack_88 = *(undefined4 *)(iVar4 + 0x1c);
                uStack_84 = *(undefined4 *)(iVar4 + 0x20);
                FUN_ram_40049460(&iStack_90,iVar5,uVar10);
                iVar3 = FUN_ram_4004963c(piVar1[1],&iStack_90,iVar3);
                if (((iVar3 != 0) &&
                    (uStack_a0 = FUN_ram_40046afe(iVar4,0,0x1d), 0xfc < (uStack_a0 & 0xff))) &&
                   ((uStack_a0 = FUN_ram_40046afe(iVar4,0,0x5f), 0xfc < (uStack_a0 & 0xff) &&
                    ((uStack_a0 = FUN_ram_40046afe(iVar4,0,0x20), (uStack_a0 & 0xff) == 0 ||
                     (uStack_a0 = FUN_ram_40046afe(iVar4,0,0x25), 0xfc < (uStack_a0 & 0xff))))))) {
                  iVar3 = FUN_ram_40046afe(iVar4,0,0x26);
                  if (iVar3 != 0) {
                    for (uVar9 = 0; uVar9 < *(byte *)(iVar3 + 10); uVar9 = uVar9 + 1) {
                      if (*(byte *)(iVar3 + 3 + uVar9 * 5) < 0xfd) goto LAB_ram_400427fc;
                    }
                  }
                  *piVar1 = 0;
                  return;
                }
LAB_ram_400427fc:
                *piVar1 = 1;
                return;
              }
              if (iVar3 != 0x14) {
                return;
              }
              FUN_ram_40042c0c(iVar4,0x20);
              uVar10 = 0x40;
              goto LAB_ram_40042e7c;
            }
            *(ushort *)(iVar4 + 0x2a) = *(ushort *)(iVar4 + 0x2a) | 2;
          }
          FUN_ram_4004408a(iVar4);
          return;
        }
LAB_ram_40042e7c:
        FUN_ram_40042c0c(iVar4,uVar10);
        return;
      }
    }
LAB_ram_40042e62:
    FUN_ram_40042bce(iVar4,uVar9);
    return;
  }
  if ((*(uint *)(iVar4 + 0x24) & 8) != 0) {
    uVar9 = FUN_ram_40043c4c(param_2);
    if ((uVar9 & 0xfffffffd) != 0x11) {
      if ((uVar9 - 0x12 & 0xfffffffd) == 0) {
        FUN_ram_40042c0c(iVar4,1);
      }
      if (uVar9 == 10) {
        return;
      }
      goto LAB_ram_40042ca2;
    }
    goto LAB_ram_40042c98;
  }
  if ((*(uint *)(iVar4 + 0x24) & 0x810) != 0x810) {
    return;
  }
  iVar3 = FUN_ram_4004326c();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_ram_400456b4(iVar4);
  iVar5 = FUN_ram_400457a4(iVar4);
  iVar6 = FUN_ram_40043c4c(param_2);
  if (iVar6 == 0x12) {
LAB_ram_40042d5e:
    iVar3 = FUN_ram_400455e8(iVar4);
    iVar5 = FUN_ram_400440fe(iVar4);
    iVar3 = iVar5 / 4 + iVar3;
  }
  else {
    if (iVar6 != 0x11) {
      if (iVar6 == 0x13) {
        uVar9 = FUN_ram_400455a8(iVar4);
        if (((uVar9 & 3) != 0) && ((0 < iVar3 || (0 < iVar5)))) {
          iVar3 = FUN_ram_400455d8(iVar4);
          iVar5 = FUN_ram_400440f2(iVar4);
          iVar3 = iVar5 / 4 + iVar3;
          goto LAB_ram_40042dda;
        }
        goto LAB_ram_40042d5e;
      }
      if (iVar6 != 0x14) {
        return;
      }
      uVar9 = FUN_ram_400455a8(iVar4);
      if (((uVar9 & 3) != 0) && ((0 < iVar3 || (0 < iVar5)))) {
        iVar3 = FUN_ram_400455d8(iVar4);
        iVar5 = FUN_ram_400440f2(iVar4);
        iVar3 = iVar3 - iVar5 / 4;
LAB_ram_40042dda:
        FUN_ram_40045b54(iVar4,iVar3,0);
        return;
      }
    }
    iVar3 = FUN_ram_400455e8(iVar4);
    iVar5 = FUN_ram_400440fe(iVar4);
    iVar3 = iVar3 - iVar5 / 4;
  }
  FUN_ram_40045b8a(iVar4,iVar3,0);
  return;
}


