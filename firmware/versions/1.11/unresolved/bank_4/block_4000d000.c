/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4000d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4000d076.
 * REA evidence: ev_c4341a6d2c88f7004e93419c7bbf2c100e08163786c61f11d4ca51d0c41c4f1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000d076(undefined4 param_1)

{
  FUN_ram_4000890c(FUN_ram_40008206,param_1);
  return;
}


/* NanoCore 1.11, address 0x4000d084.
 * REA evidence: ev_686efa962292e93ecb96d0f4786df28089488ef8161441a1c0b8040cf3c80187
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d084(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    if (iVar3 != 0) {
      bVar1 = param_1 != 0;
      if ((*(int *)(iVar2 + 0x2b8) == 9) && ((bool)*(char *)(iVar2 + 0x2bd) == bVar1)) {
        uVar4 = 0;
        if (DAT_ram_3004e7c9 == *(char *)(iVar2 + 0x2bd)) goto LAB_ram_4000d13e;
      }
      FUN_ram_40007a76(bVar1);
      if (param_1 != 0) {
        FUN_ram_40068d64(_DAT_ram_3004e7cc);
      }
      FUN_ram_4000304c(iVar3,iVar2,0x304);
      if (*(int *)(iVar2 + 0x2b8) != 9) {
        *(undefined1 *)(iVar3 + 700) = 0;
        FUN_ram_400695cc(iVar3 + 0x2c0,0xc,0);
      }
      *(undefined4 *)(iVar3 + 0x2b8) = 9;
      uVar4 = _DAT_ram_3004e7cc;
      *(bool *)(iVar3 + 0x2bd) = bVar1;
      *(undefined4 *)(iVar3 + 0x2fc) = uVar4;
      FUN_ram_4005fcd6(0x3004dec4);
      uVar4 = 0;
    }
  }
LAB_ram_4000d13e:
  FUN_ram_40007cba();
  return uVar4;
}


/* NanoCore 1.11, address 0x4000d15a.
 * REA evidence: ev_0e1991e2573c2f97a4b49db8b8e429447651dd97952bace161269bdf018b5920
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d15a(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if (*(int *)(iVar2 + 0x2b8) != 9) {
      *(undefined1 *)(iVar3 + 700) = 0;
      FUN_ram_400695cc(iVar3 + 0x2c0,0xc,0);
    }
    *(undefined4 *)(iVar3 + 0x2b8) = 9;
    *(undefined4 *)(iVar3 + 0x2fc) = _DAT_ram_3004e7cc;
    FUN_ram_40007f4e(iVar3,9);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x2c0) = param_1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar1 = 0;
  }
  FUN_ram_40007cba();
  return uVar1;
}


/* NanoCore 1.11, address 0x4000d208.
 * REA evidence: ev_31812ed6083017c5025bc3a53cc894edca6d9131d7546df7655d2a8163fe0fa0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000d208(undefined4 param_1)

{
  FUN_ram_4000890c(FUN_ram_400080a4,param_1);
  return;
}


/* NanoCore 1.11, address 0x4000d216.
 * REA evidence: ev_eb860739a629b9b3820c3ebd7c0736a994bd927e7afde6746db30e12f198954d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000d216(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if (*(int *)(iVar2 + 0xc) != 1) {
      *(undefined1 *)(iVar3 + 0x10) = 0;
      FUN_ram_40008e30(iVar3 + 0x14);
    }
    *(undefined4 *)(iVar3 + 0xc) = 1;
    *(undefined4 *)(iVar3 + 0x50) = 0x3005093c;
    *(undefined1 *)(iVar3 + 0x10) = 0;
    FUN_ram_40007f4e(iVar3,0);
    *(ulonglong *)(iVar3 + param_2 * 4 + 0x14) = (ulonglong)param_1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar1 = 0;
  }
  FUN_ram_40007cba();
  return uVar1;
}


/* NanoCore 1.11, address 0x4000d2be.
 * REA evidence: ev_00c6f522882816ba0ea5573578acd47f5236b469a7467b5b768e91e17da22c31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d2be(uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = _DAT_ram_30050854;
  FUN_ram_400087c0();
  iVar3 = FUN_ram_4005fcbe(0x3004dec4);
  iVar4 = FUN_ram_4005fca2(0x3004dec4);
  uVar2 = 0xffffffff;
  if (((iVar3 != 0) && (uVar2 = 0xffffffff, iVar4 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000304c(iVar4,iVar3,0x304);
    *(undefined4 *)(iVar4 + 0x58) = 2;
    *(undefined4 *)(iVar4 + 0x9c) = uVar1;
    FUN_ram_40007f4e(iVar4,1);
    *(ulonglong *)(iVar4 + param_2 * 4 + 0x60) = (ulonglong)param_1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar2 = 0;
  }
  FUN_ram_40007cba();
  return uVar2;
}


/* NanoCore 1.11, address 0x4000d34c.
 * REA evidence: ev_5dff3694ab1d896271e4117918db6ee3078d2c434b26dbcd9b12345f62b2d28c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d34c(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if (*(int *)(iVar2 + 0xa4) != 3) {
      *(undefined1 *)(iVar3 + 0xa8) = 6;
      FUN_ram_40073b74(iVar3 + 0xac,0xc,6);
    }
    *(undefined4 *)(iVar3 + 0xa4) = 3;
    *(undefined4 *)(iVar3 + 0xe8) = _DAT_ram_3005088c;
    FUN_ram_40007f4e(iVar3,2);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0xac) = param_1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar1 = 0;
  }
  FUN_ram_40007cba();
  return uVar1;
}


/* NanoCore 1.11, address 0x4000d3fc.
 * REA evidence: ev_43398313a3497da35ac3f19ff1538af165eda353fa2d0e807e79a8b64113c23f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000d3fc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char local_1c [12];
  
  FUN_ram_400087c0();
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  local_1c[0] = '\0';
  local_1c[1] = '\0';
  local_1c[2] = '\0';
  local_1c[3] = '\0';
  local_1c[4] = '\0';
  local_1c[5] = '\0';
  local_1c[6] = '\0';
  local_1c[7] = '\0';
  local_1c[8] = '\0';
  local_1c[9] = '\0';
  if ((((param_1 == 0) || (9 < (param_2 - 1 & 0xff))) || (iVar1 == 0)) || (iVar2 == 0)) {
LAB_ram_4000d436:
    uVar3 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    do {
      uVar4 = (uint)*(byte *)(param_1 + uVar5);
      if ((9 < uVar4) || (local_1c[uVar4] != '\0')) goto LAB_ram_4000d436;
      uVar5 = uVar5 + 1;
      local_1c[uVar4] = '\x01';
    } while ((uVar5 & 0xff) < param_2);
    iVar1 = FUN_ram_4000304c(iVar2,iVar1,0x304);
    uVar5 = 0;
    do {
      *(undefined1 *)(iVar1 + uVar5) = *(undefined1 *)(param_1 + uVar5);
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xff) < param_2);
    iVar2 = 0;
    do {
      if (local_1c[iVar2] == '\0') {
        *(char *)(iVar1 + param_2) = (char)iVar2;
        param_2 = param_2 + 1 & 0xff;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    FUN_ram_4005fcd6(0x3004dec4);
    uVar3 = 0;
  }
  FUN_ram_40007cba();
  return uVar3;
}


/* NanoCore 1.11, address 0x4000d4d6.
 * REA evidence: ev_533902fe8c0a271bd7d451ea1ed248238c17afac847ea3d8b33d9538bb4403f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d4d6(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  byte bVar14;
  int *piVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  char cVar22;
  undefined4 uVar23;
  int *piVar24;
  undefined1 uStack_69;
  char acStack_68 [12];
  byte local_5c [12];
  
  uStack_69 = 0;
  iVar17 = FUN_ram_400087fc(&uStack_69);
  if (iVar17 != 0) {
    return 0xffffffff;
  }
  FUN_ram_400087c0();
  iVar17 = 0;
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0xc + iVar17 * 0x4c) == 3) {
        iVar17 = FUN_ram_40008b2e(*(undefined1 *)(iVar17 * 0x4c + param_1 + 0x10));
        if (iVar17 != 0) goto LAB_ram_4000d67a;
        FUN_ram_400002f4();
        DAT_ram_30049d50._6_1_ = 0xff;
        _DAT_ram_3004d490 = _DAT_ram_3004d490 + 1;
        FUN_ram_400002fa();
        break;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != 10);
    iVar17 = FUN_ram_4005fcbe(0x3004dec4);
    iVar18 = FUN_ram_4005fca2(0x3004dec4);
    if (iVar18 != 0) {
      FUN_ram_4000304c(iVar18,param_1,0x304);
      iVar20 = 0;
      acStack_68[0] = '\0';
      acStack_68[1] = '\0';
      acStack_68[2] = '\0';
      acStack_68[3] = '\0';
      acStack_68[4] = '\0';
      acStack_68[5] = '\0';
      acStack_68[6] = '\0';
      acStack_68[7] = '\0';
      acStack_68[8] = '\0';
      acStack_68[9] = '\0';
      uVar21 = 0;
      do {
        uVar19 = (uint)*(byte *)(iVar18 + iVar20);
        if ((uVar19 < 10) && (acStack_68[uVar19] == '\0')) {
          local_5c[uVar21] = *(byte *)(iVar18 + iVar20);
          acStack_68[uVar19] = '\x01';
          uVar21 = uVar21 + 1 & 0xff;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 != 10);
      iVar20 = 0;
      do {
        if (acStack_68[iVar20] == '\0') {
          local_5c[uVar21] = (byte)iVar20;
          uVar21 = uVar21 + 1 & 0xff;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 != 10);
      FUN_ram_4000304c(iVar18,local_5c,10);
      FUN_ram_4000781e(0);
      FUN_ram_40007884(0);
      FUN_ram_40007eb0(0);
      FUN_ram_40007a1c(0);
      FUN_ram_400079e0(0);
      FUN_ram_400079fe(0);
      FUN_ram_400079c2(0);
      FUN_ram_40007a3a(0);
      FUN_ram_40007a58(0);
      FUN_ram_40007a76(0);
      fVar13 = DAT_ram_40094644;
      uVar23 = DAT_ram_40094604;
      piVar24 = (int *)(iVar18 + 0xc);
      piVar15 = (int *)(iVar17 + 0xc);
      bVar7 = false;
      bVar12 = false;
      bVar11 = false;
      bVar6 = false;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar5 = false;
      bVar16 = false;
      bVar4 = false;
      bVar3 = false;
      cVar22 = '\0';
      do {
        switch(*piVar24) {
        case 1:
          if ((bVar3) || (iVar20 = FUN_ram_40089d70(0x300508ec), iVar20 == 0))
          goto switchD_ram_4000d678_default;
          piVar24[0x11] = 0x3005093c;
          *(undefined1 *)(piVar24 + 1) = 0;
          FUN_ram_4000781e(*(char *)((int)piVar24 + 5) != '\0');
          if (*(char *)((int)piVar24 + 5) == '\0') {
            FUN_ram_4000783c(uVar23,0x3005093c);
          }
          else {
            FUN_ram_400083f2(0x3005093c);
            if ((_DAT_ram_300509c8 != 0) || (_DAT_ram_300509c0 < DAT_ram_40094644)) {
              FUN_ram_40009832(uVar23,0x3005093c,0x10);
            }
          }
          bVar3 = true;
          break;
        case 2:
          if (bVar5) goto switchD_ram_4000d678_default;
          piVar24[0x11] = _DAT_ram_30050854;
          FUN_ram_40007eb0(*(char *)((int)piVar24 + 5) != '\0');
          if (*(char *)((int)piVar24 + 5) == '\0') {
            FUN_ram_4000797a(uVar23);
          }
          else if ((*(int *)(_DAT_ram_30050854 + 0x34) != 0) ||
                  ((float)*(undefined8 *)(_DAT_ram_30050854 + 0x2c) < fVar13)) {
            FUN_ram_400078a6(uVar23,0x10);
          }
          bVar5 = true;
          break;
        case 3:
          if (bVar8) goto switchD_ram_4000d678_default;
          if (7 < *(byte *)(piVar24 + 1)) {
            *(undefined1 *)(piVar24 + 1) = 6;
          }
          piVar24[0x11] = _DAT_ram_3005088c;
          FUN_ram_40007a1c(*(char *)((int)piVar24 + 5) != '\0');
          bVar8 = true;
          if ((*(char *)((int)piVar24 + 5) != '\0') &&
             (((iVar17 == 0 || (*piVar15 != 3)) ||
              ((*(char *)((int)piVar15 + 5) == '\0' || ((char)piVar15[1] != (char)piVar24[1])))))) {
            FUN_ram_40073ade(_DAT_ram_3005088c);
            bVar8 = true;
          }
          break;
        case 4:
          if (bVar10) goto switchD_ram_4000d678_default;
          piVar24[0x11] = _DAT_ram_30050884;
          FUN_ram_400079fe(*(char *)((int)piVar24 + 5) != '\0');
          bVar10 = true;
          if (*(char *)((int)piVar24 + 5) != '\0') {
            FUN_ram_40070e40(_DAT_ram_30050884);
          }
          break;
        case 5:
          if (bVar9) goto switchD_ram_4000d678_default;
          piVar24[0x11] = _DAT_ram_3004d5d4;
          FUN_ram_400079e0(*(char *)((int)piVar24 + 5) != '\0');
          bVar9 = true;
          if (*(char *)((int)piVar24 + 5) != '\0') {
            FUN_ram_40065c3e(_DAT_ram_3004d5d4);
            *(char *)(_DAT_ram_3004d5d4 + 0x20) = (char)piVar24[1];
          }
          break;
        case 6:
          if (bVar11) goto switchD_ram_4000d678_default;
          piVar24[0x11] = _DAT_ram_3004e7ac;
          FUN_ram_40007a3a(*(char *)((int)piVar24 + 5) != '\0');
          bVar11 = true;
          if (*(char *)((int)piVar24 + 5) != '\0') {
            FUN_ram_40066d28(_DAT_ram_3004e7ac);
          }
          break;
        case 7:
          if (bVar6) goto switchD_ram_4000d678_default;
          piVar24[0x11] = _DAT_ram_3004e7bc;
          FUN_ram_400079c2(*(char *)((int)piVar24 + 5) != '\0');
          bVar6 = true;
          if ((*(char *)((int)piVar24 + 5) != '\0') &&
             ((((iVar17 == 0 || (*(char *)((int)piVar15 + 5) == '\0')) || (*piVar15 != *piVar24)) ||
              (bVar6 = true, (char)piVar15[1] != (char)piVar24[1])))) {
            bVar6 = true;
            FUN_ram_40068d64(_DAT_ram_3004e7bc);
          }
          break;
        case 8:
          if (cVar22 == '\x06') {
            if ((bVar4) || (cVar1 = *(char *)(iVar18 + 0x1d8), 3 < (byte)(cVar1 - 8U))) {
              *(undefined4 *)(iVar18 + 0x1d4) = 0;
              *(undefined1 *)(iVar18 + 0x1d9) = 0;
              *(undefined4 *)(iVar18 + 0x218) = 0;
            }
            else {
              *(undefined4 *)(iVar18 + 0x218) = _DAT_ram_3005087c;
              FUN_ram_400079fe(*(char *)(iVar18 + 0x1d9) != '\0');
              if (*(char *)(iVar18 + 0x1d9) != '\0') {
                FUN_ram_400087da(cVar1);
              }
              bVar4 = true;
            }
          }
          else {
            if (bVar16) goto switchD_ram_4000d678_default;
            bVar2 = *(byte *)(piVar24 + 1);
            bVar14 = 0;
            if (((bVar2 < 0xc) && (bVar14 = bVar2, 7 < bVar2)) ||
               ((((DAT_ram_30049be0 == (byte)(bVar14 + 0x1e) &&
                  (iVar20 = FUN_ram_40089d70(0x3004da6c), iVar20 != 0)) ||
                 (iVar20 = FUN_ram_40008508(bVar14 + 0x1e), iVar20 == 0)) &&
                (iVar20 = FUN_ram_40089d70(0x3004da6c), iVar20 != 0)))) {
              bVar16 = *(char *)((int)piVar24 + 5) != '\0';
            }
            else {
              *(undefined1 *)((int)piVar24 + 5) = 0;
              bVar16 = false;
            }
            FUN_ram_40007884(bVar16);
            DAT_ram_3004e7c8 = bVar14;
            piVar24[0x11] = _DAT_ram_3004e7c4;
            *(byte *)(piVar24 + 1) = bVar14;
            if (*(char *)((int)piVar24 + 5) == '\0') {
              FUN_ram_4000783c(uVar23,0x3004d5dc);
            }
            else if (bVar14 == 8) {
              FUN_ram_4006c754();
            }
            else if (bVar14 == 9) {
              FUN_ram_4006c75e();
            }
            else if (bVar14 == 10) {
              FUN_ram_4006c7fe();
            }
            else if (bVar14 == 0xb) {
              FUN_ram_4006c85e();
            }
            else {
              FUN_ram_400083f2(0x3004d5dc);
              if ((_DAT_ram_3004d668 != 0) || (_DAT_ram_3004d660 < fVar13)) {
                FUN_ram_40009832(uVar23,0x3004d5dc,0x10);
              }
            }
            bVar16 = true;
          }
          break;
        case 9:
          if (bVar7) goto switchD_ram_4000d678_default;
          piVar24[0x11] = _DAT_ram_3004e7cc;
          FUN_ram_40007a76(*(char *)((int)piVar24 + 5) != '\0');
          bVar7 = true;
          if ((*(char *)((int)piVar24 + 5) != '\0') &&
             ((((iVar17 == 0 || (*(char *)((int)piVar15 + 5) == '\0')) || (*piVar15 != *piVar24)) ||
              (bVar7 = true, (char)piVar15[1] != (char)piVar24[1])))) {
            bVar7 = true;
            FUN_ram_40068d64(_DAT_ram_3004e7cc);
          }
          break;
        case 10:
          if (bVar12) goto switchD_ram_4000d678_default;
          piVar24[0x11] = _DAT_ram_3004e7b4;
          FUN_ram_40007a58(*(char *)((int)piVar24 + 5) != '\0');
          bVar12 = true;
          if (*(char *)((int)piVar24 + 5) != '\0') {
            FUN_ram_40068c56(_DAT_ram_3004e7b4);
          }
          break;
        default:
switchD_ram_4000d678_default:
          *piVar24 = 0;
          *(undefined1 *)((int)piVar24 + 5) = 0;
          piVar24[0x11] = 0;
        }
        FUN_ram_400089b8(piVar24);
        cVar22 = cVar22 + '\x01';
        piVar24 = piVar24 + 0x13;
        piVar15 = piVar15 + 0x13;
      } while (cVar22 != '\n');
      FUN_ram_4005fcd6(0x3004dec4);
      uVar23 = 0;
      goto LAB_ram_4000d67c;
    }
  }
LAB_ram_4000d67a:
  uVar23 = 0xffffffff;
LAB_ram_4000d67c:
  FUN_ram_40007cba();
  FUN_ram_40008940(uStack_69);
  return uVar23;
}


/* NanoCore 1.11, address 0x4000db24.
 * REA evidence: ev_d7345770cbb87d32af70f294b25d00fe26985a2a4a645f1ccae954f78934890b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000db24(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_ram_400087c0();
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  uVar3 = 0xffffffff;
  if (((param_1 != 0) && (iVar1 != 0)) && (iVar2 != 0)) {
    FUN_ram_4000304c(iVar2,iVar1,0x304);
    param_1 = param_1 + 0x44;
    iVar1 = iVar2 + 0x44;
    do {
      FUN_ram_4000304c(iVar1 + -0x30,param_1 + -0x30,0x30);
      iVar4 = iVar1 + 0x4c;
      FUN_ram_4000304c(iVar1,param_1,0xc);
      param_1 = param_1 + 0x4c;
      iVar1 = iVar4;
    } while (iVar4 != iVar2 + 0x33c);
    FUN_ram_4005fcd6(0x3004dec4);
    uVar3 = 0;
  }
  FUN_ram_40007cba();
  return uVar3;
}


/* NanoCore 1.11, address 0x4000dbb4.
 * REA evidence: ev_a43d29bf9ab1a0e73874bbade04a1c511d7caa27e9b35b3f836098e871b0a65d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000dbb4(void)

{
  int iVar1;
  
  if (DAT_ram_3004e77c == '\0') {
    return -1;
  }
  iVar1 = FUN_ram_40006464();
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_400049c6(0x3004e74c,0xffffffff);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4000dbca.
 * REA evidence: ev_296c29567021530ad156c2c56e9417e0a6e768779eeb20a7fb9c7429f2292e94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000dbca(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006464();
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_400049c6(0x3004e74c,0xffffffff);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4000dbec.
 * REA evidence: ev_8a867fc49aaf22cb681484972b218271fb907c0effa4eb23ee1bdcd297bb21f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000dbec(void)

{
  FUN_ram_40004ab8(0x3004e74c);
  return;
}


/* NanoCore 1.11, address 0x4000dbf8.
 * REA evidence: ev_5fa14bd2c087ed3c068cc2297f33b30090b2687e6b100b4b70ced6ab3c05b621
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000dbf8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40006464();
  if ((((DAT_ram_3004e77c != '\0') && (iVar1 != 0)) && (_DAT_ram_3004dabc != iVar1)) &&
     (iVar2 = FUN_ram_400049c6(0x3004e74c,0xffffffff), iVar2 == 0)) {
    _DAT_ram_3004dabc = iVar1;
    FUN_ram_4000990c();
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4000dc48.
 * REA evidence: ev_e029a1bbd9915fea74bb8eafc83b48294bf08efe24d2c9613e62c38f035853d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000dc48(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006464();
  if (iVar1 == _DAT_ram_3004dabc) {
    _DAT_ram_3004dabc = 0;
    FUN_ram_40004ab8(0x3004e74c);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4000dc7a.
 * REA evidence: ev_4e29b0dbf70f9bcc82d435f1769d685cdce6eda6ab4f1a0fa484ad411a9f07e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000dc7a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40007d9e();
  if (iVar1 == 0) {
    FUN_ram_4000990c();
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4000dc9a.
 * REA evidence: ev_4b8cc1cd5c55a1f212e13210ae3c5091d71c7e85c85c17c13519ff1cbbd08910
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000dcc0) */
/* WARNING: Removing unreachable block (ram,0x4000dcc6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4000dc9a(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = _DAT_ram_30057d00;
  uVar3 = _DAT_ram_3004e728;
  if (_DAT_ram_3004e728 == 0) {
    uVar3 = 0xac44;
  }
  uVar2 = uVar3 / 1000;
  _DAT_ram_30057d10 = uVar3 % 1000 + _DAT_ram_30057d10;
  if (999 < _DAT_ram_30057d10) {
    _DAT_ram_30057d10 = _DAT_ram_30057d10 - 1000;
    uVar2 = uVar2 + 1;
  }
  uVar3 = param_2 >> 2;
  if (uVar2 <= param_2 >> 2) {
    uVar3 = uVar2;
  }
  iVar5 = (uVar3 & 0x3fff) << 2;
  if (DAT_ram_30057d04 == '\0') {
    DAT_ram_30057d04 = '\x01';
    _DAT_ram_30057d02 = 0;
    _DAT_ram_30057d00 = 0;
  }
  else {
    if (DAT_ram_30057d04 == '\x01') {
      if ((_DAT_ram_30057d02 - _DAT_ram_30057d00 & 0x1c00) == 0) goto LAB_ram_4000dd54;
      DAT_ram_30057d04 = '\x02';
    }
    uVar2 = (uint)_DAT_ram_30057d00;
    uVar4 = (_DAT_ram_30057d02 - uVar2 & 0x1fff) >> 1;
    if (uVar3 <= uVar4) {
      if (uVar4 < 0x281) {
        uVar6 = uVar3;
        if (uVar4 < 0x180) {
          uVar6 = uVar3 - (1 < uVar3);
        }
      }
      else {
        uVar6 = uVar3 + (uVar3 < uVar4);
      }
      uVar3 = uVar3 * 2;
      uVar4 = 0x2000 - uVar2;
      if (uVar3 <= 0x2000 - uVar2) {
        uVar4 = uVar3;
      }
      if (uVar4 != 0) {
        param_1 = FUN_ram_4000304c(param_1,uVar2 * 2 + 0x30053d00,uVar4 << 1);
      }
      if (uVar4 < uVar3) {
        FUN_ram_4000304c(param_1 + uVar4 * 2,0x30053d00,(uVar3 - uVar4) * 2);
      }
      _DAT_ram_30057d00 = uVar1 + (short)uVar6 * 2 & 0x1fff;
      return iVar5;
    }
    DAT_ram_30057d04 = '\0';
  }
LAB_ram_4000dd54:
  memset(param_1,0);
  return iVar5;
}


/* NanoCore 1.11, address 0x4000de1a.
 * REA evidence: ev_f0ed8dd6027d2a0e86a627afc16447746f2e8c4425782aa0d976edd148f9fdab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000de1a(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_ram_400002f4();
    uVar2 = _DAT_ram_3004d504;
    uVar1 = _DAT_ram_3004d500;
    *param_1 = _DAT_ram_3004d4f8;
    uVar3 = _DAT_ram_3004d508;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    uVar1 = _DAT_ram_3004d510;
    param_1[4] = uVar3;
    uVar4 = DAT_ram_3004d518;
    uVar2 = _DAT_ram_3004d514;
    param_1[6] = uVar1;
    param_1[7] = uVar2;
    *(undefined1 *)(param_1 + 8) = uVar4;
    *(undefined1 *)((int)param_1 + 0x21) = DAT_ram_3004d519;
    uVar4 = DAT_ram_3004d51b;
    *(undefined1 *)((int)param_1 + 0x22) = DAT_ram_3004d51a;
    *(undefined1 *)((int)param_1 + 0x23) = uVar4;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4000de74.
 * REA evidence: ev_5139724f7a859e5ec2388f83e124756c89f1222d66c4453d686091c5d621dcc4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000de74(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  DAT_ram_30049d50 = (ulonglong)(uint)((float)param_1 / DAT_ram_40094658);
  return;
}


/* NanoCore 1.11, address 0x4000deac.
 * REA evidence: ev_7d19f4560226ecaef7fc745f24cfc502e0df4dc543cf7064f58ffd00e23c3509
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000deac(void)

{
  return DAT_ram_30049d50._4_1_;
}


/* NanoCore 1.11, address 0x4000deb6.
 * REA evidence: ev_9d7ec40daa2691b27d452f0b5c8f1f47951afb44a799da11df824973b86dcb90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000deb6(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  DAT_ram_30049d50._5_1_ = (char)param_1;
  return;
}


/* NanoCore 1.11, address 0x4000ded4.
 * REA evidence: ev_b77cb35a225523113f2ba66c4f4fe0faabd41d96a8877645a5f5c2364b0ddf03
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000ded4(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30050dcc = param_1 != 0;
  _DAT_ram_30052e00 = 0;
  _DAT_ram_30050dd0 = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x4000df06.
 * REA evidence: ev_e6b43bc6fc9c0ee2d9d700b43633feefc223702e52fe71fcb85cc8b8d43270de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000df06(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30049d59 = param_1 != 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x4000df28.
 * REA evidence: ev_df79100e234ee5fd97d5ad422657a40dd02355e60214056d2b3f88a5ef5d6b12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4000df28(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = param_2, param_2 != 0)) {
    FUN_ram_400002f4();
    uVar2 = _DAT_ram_30052e00 - _DAT_ram_30050dd0;
    if (0x1000 < uVar2) {
      _DAT_ram_30050dd0 = _DAT_ram_30052e00 + -0x1000;
      uVar2 = 0x1000;
    }
    if (uVar2 < param_2) {
      uVar1 = uVar2;
    }
    for (uVar2 = 0; uVar2 != uVar1; uVar2 = uVar2 + 1) {
      *(undefined2 *)(param_1 + uVar2 * 2) =
           *(undefined2 *)((_DAT_ram_30050dd0 + uVar2 & 0xfff) * 2 + 0x30050e00);
    }
    _DAT_ram_30050dd0 = _DAT_ram_30050dd0 + uVar1;
    FUN_ram_400002fa();
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4000dfa0.
 * REA evidence: ev_777d832ea237f34e4e7c94ad75b50eace2efa95a9396f8af24de1f62bbad23ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000dfa0(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_400379fe(_DAT_ram_3004e7d8);
  if (uVar1 == 0) {
    uVar2 = 0x2b11;
  }
  else {
    uVar2 = FUN_ram_40003b9c((int)((ulonglong)uVar1 * 0xac44),
                             (int)((ulonglong)uVar1 * 0xac44 >> 0x20),0x5622000,0);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4000dfd4.
 * REA evidence: ev_0bc821dab04925855353f3f873f55fcc0839029bba913e06dda83a75695054e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000dfd4(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3005bf42 = 0;
  _DAT_ram_3005bf40 = 0;
  DAT_ram_30057d14 = 0;
  DAT_ram_30052e10 = 0;
  DAT_ram_30049d5c = 0x2000;
  _DAT_ram_30052e04 = 0;
  _DAT_ram_30052e14 = 0;
  _DAT_ram_30052e08 = 0;
  DAT_ram_30049d60 = 0x10000;
  FUN_ram_400002fa();
  return;
}


