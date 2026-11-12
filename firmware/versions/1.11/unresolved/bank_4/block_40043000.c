/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40043000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4004304e.
 * REA evidence: ev_787d8b44b023c1958b547ed6e3149e52939c0f8228698ee9b336479d9af3e21b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004304e(void)

{
  if (DAT_ram_30080c60 == '\0') {
    thunk_FUN_ram_4000504c(&DAT_ram_30080c60,0,0x194);
    FUN_ram_4004b33e(0x30080c64,0x310);
    FUN_ram_4004b33e(0x30080ca4,200);
    _DAT_ram_30080cc4 = 0xa1b2c3d4;
    _DAT_ram_30080c8c = 0x8c;
    _DAT_ram_30080cd0 = 0x3d;
    DAT_ram_30080c84 = 1;
    _DAT_ram_30080cb8 = 1;
    FUN_ram_4004b7d8(0x1234abcd);
    FUN_ram_4005abd2();
    FUN_ram_4004d99e();
    FUN_ram_4004c590();
    FUN_ram_4004af06();
    FUN_ram_40056e66();
    FUN_ram_4004a112();
    FUN_ram_40043250();
    FUN_ram_4004d4a6();
    FUN_ram_4004f9f4();
    FUN_ram_40047a58();
    FUN_ram_40048e44();
    FUN_ram_4004f558();
    FUN_ram_40059390();
    DAT_ram_30080c60 = '\x01';
  }
  return;
}


/* NanoCore 1.11, address 0x400430fa.
 * REA evidence: ev_fe759e79c76883e5f1916f0d1d60395e1b46a9605b726395c159f36f0cac0a60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400430fa(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_40056cb2(0);
  iVar1 = 0;
  while ((iVar4 = iVar1, iVar2 != 0 && (iVar3 = FUN_ram_40056cd0(iVar2), iVar4 = iVar2, iVar3 != 1))
        ) {
    iVar4 = FUN_ram_40056cda(iVar2);
    if (iVar4 == param_1) {
      iVar1 = iVar2;
    }
    iVar2 = FUN_ram_40056cb2(iVar2);
  }
  return iVar4;
}


/* NanoCore 1.11, address 0x4004314c.
 * REA evidence: ev_a7909244153558b7ab3e59d9f205479c10096198442734aaaab396ec66a0d607
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004314c(int param_1,code *param_2,code *param_3)

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
        if (piVar2 != piVar6) goto LAB_ram_40043206;
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
LAB_ram_40043206:
      } while (piVar2 == (int *)0x0);
      uVar3 = FUN_ram_40043ba8(*piVar2);
    } while ((uVar3 & 0x80) != 0);
    iVar7 = *piVar2;
    while( true ) {
      if (iVar7 == 0) goto LAB_ram_400431ac;
      iVar5 = FUN_ram_40043b92(iVar7,1);
      if (iVar5 != 0) break;
      iVar7 = FUN_ram_40048a76(iVar7);
    }
    iVar7 = FUN_ram_40043b92(iVar7,1);
  } while (iVar7 != 0);
LAB_ram_400431ac:
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      iVar7 = *piVar6;
      uVar4 = FUN_ram_400430fa(param_1);
      iVar7 = FUN_ram_40044b50(iVar7,0x11,uVar4);
      if (iVar7 != 1) {
        return 0;
      }
      FUN_ram_400454e4(**(undefined4 **)(param_1 + 0xc));
    }
    *(int **)(param_1 + 0xc) = piVar2;
    iVar7 = *piVar2;
    uVar4 = FUN_ram_400430fa(param_1);
    iVar7 = FUN_ram_40044b50(iVar7,0x10,uVar4);
    if (iVar7 == 1) {
      FUN_ram_400454e4(**(undefined4 **)(param_1 + 0xc));
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40043158.
 * REA evidence: ev_bc31d1ef881668498f3e1fdf90208a746a5f76378afff5633bba33ce62259271
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043158(int param_1,code *param_2,code *param_3)

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
        if (piVar2 != piVar6) goto LAB_ram_40043206;
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
LAB_ram_40043206:
      } while (piVar2 == (int *)0x0);
      uVar3 = FUN_ram_40043ba8(*piVar2);
    } while ((uVar3 & 0x80) != 0);
    iVar7 = *piVar2;
    while( true ) {
      if (iVar7 == 0) goto LAB_ram_400431ac;
      iVar5 = FUN_ram_40043b92(iVar7,1);
      if (iVar5 != 0) break;
      iVar7 = FUN_ram_40048a76(iVar7);
    }
    iVar7 = FUN_ram_40043b92(iVar7,1);
  } while (iVar7 != 0);
LAB_ram_400431ac:
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      iVar7 = *piVar6;
      uVar4 = FUN_ram_400430fa(param_1);
      iVar7 = FUN_ram_40044b50(iVar7,0x11,uVar4);
      if (iVar7 != 1) {
        return 0;
      }
      FUN_ram_400454e4(**(undefined4 **)(param_1 + 0xc));
    }
    *(int **)(param_1 + 0xc) = piVar2;
    iVar7 = *piVar2;
    uVar4 = FUN_ram_400430fa(param_1);
    iVar7 = FUN_ram_40044b50(iVar7,0x10,uVar4);
    if (iVar7 == 1) {
      FUN_ram_400454e4(**(undefined4 **)(param_1 + 0xc));
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40043250.
 * REA evidence: ev_86035bddf6312e619a7b4ddd00a0bb0c325baa46b55a828b92a9820a2288f973
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043250(void)

{
  FUN_ram_4004b33e(0x30080c94,0x20);
  return;
}


/* NanoCore 1.11, address 0x40043260.
 * REA evidence: ev_44508bc07c8c5bd184572a2f27a6d930470bc1b52196b4d4349ae784ba0b637b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40043260(void)

{
  return _DAT_ram_30080ca0;
}


/* NanoCore 1.11, address 0x4004326a.
 * REA evidence: ev_69939dbf299d88503b285ef97cbb795228d6d74b350f13ec51cd4081aa212016
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004326a(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004314c(param_1,FUN_ram_4004b518,FUN_ram_4004b524);
  if ((*(code **)(param_1 + 0x14) != (code *)0x0) && (iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x40043296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14))(param_1,1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400432a0.
 * REA evidence: ev_50172a541c744100e82b607f1a07b82e5772c7fbbcbdf0802567a1fddffc5eb4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400432a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004314c(param_1,FUN_ram_4004b51e,FUN_ram_4004b52c);
  if ((*(code **)(param_1 + 0x14) != (code *)0x0) && (iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x400432cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x14))(param_1,0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400432d6.
 * REA evidence: ev_12b9b425e98fcc848113d3ec7f6bb1fb03516e771f09ebf5dc7e8105a9947f81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400432d6(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x1c) = bVar1 | 8;
  if ((bVar1 & 4) == 0) {
    FUN_ram_4004326a();
  }
  else {
    FUN_ram_400432a0();
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf7 | (byte)uVar2 & 8;
  return;
}


/* NanoCore 1.11, address 0x40043318.
 * REA evidence: ev_6db7b5c94cc09d45535ffd6a2c25bc9e2fa8b16d23c9da2043bdbb1d433795ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043318(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_ram_40043bae();
  if (iVar1 == 0) {
    return;
  }
  if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) == param_1)) {
    if ((*(byte *)(iVar1 + 0x1c) & 1) != 0) {
      *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xfe;
    }
    iVar2 = FUN_ram_4004b518(iVar1);
    if ((iVar2 == *(int *)(iVar1 + 0xc)) &&
       (puVar3 = (undefined4 *)FUN_ram_4004b51e(iVar1), puVar3 == *(undefined4 **)(iVar1 + 0xc))) {
      uVar6 = *puVar3;
      uVar4 = FUN_ram_400430fa(iVar1);
      FUN_ram_40044b50(uVar6,0x11,uVar4);
    }
    else {
      FUN_ram_400432d6(iVar1);
    }
  }
  if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) == param_1)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  piVar5 = (int *)FUN_ram_4004b518(iVar1);
  while( true ) {
    if (piVar5 == (int *)0x0) {
      return;
    }
    if (*piVar5 == param_1) break;
    piVar5 = (int *)FUN_ram_4004b524(iVar1);
  }
  FUN_ram_4004b45a(iVar1);
  FUN_ram_4005ab56(piVar5);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
  return;
}


/* NanoCore 1.11, address 0x400433c4.
 * REA evidence: ev_1b7e637ac3b62d202ff2b7ca9927f1c576e440e951840363551883711fadde7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400433c4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return;
  }
  FUN_ram_40043318(param_2);
  for (piVar1 = (int *)FUN_ram_4004b518(param_1); piVar1 != (int *)0x0;
      piVar1 = (int *)FUN_ram_4004b524(param_1,piVar1)) {
    if (*piVar1 == param_2) {
      return;
    }
  }
  iVar2 = FUN_ram_40043bae(param_2);
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 4);
    if ((iVar2 == 0) || (**(int **)(iVar2 + 0xc) != param_2)) goto LAB_ram_40043406;
    FUN_ram_400432d6();
  }
  if (*(int *)(param_2 + 8) == 0) {
    FUN_ram_40044074(param_2);
  }
LAB_ram_40043406:
  *(int *)(*(int *)(param_2 + 8) + 4) = param_1;
  piVar1 = (int *)FUN_ram_4004b410(param_1);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar3 = (int *)FUN_ram_4004b518(param_1);
    if (piVar3 == piVar1) {
      FUN_ram_400432d6(param_1);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004344e.
 * REA evidence: ev_f82ad2c1ea3a019cf598d07667217abfd81ce6fba463b270d37d1485f7cc0195
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004344e(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0)) {
    uVar1 = **(undefined4 **)(param_1 + 0xc);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40043458.
 * REA evidence: ev_205486d172a7b947c8f9bec3ef22b27679b5e9b899e01be2ae988262ec938b0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40043458(int param_1)

{
  if (param_1 != 0) {
    return (*(uint *)(param_1 + 0x1c) & 3) >> 1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40043466.
 * REA evidence: ev_b3e3ca21b64ad35af65a12032448710a5ce9ed5f34a30a591bc479ee2adaa654
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043466(undefined4 param_1,int param_2)

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
    iVar2 = FUN_ram_40046626(iVar1);
    iVar3 = thunk_FUN_ram_4004655a(iVar1);
    iVar6 = *(int *)(iVar1 + 0x18);
    iVar4 = FUN_ram_40047a70(iVar1,0,0x10);
    iVar3 = (iVar4 + iVar6) - iVar3;
    iVar6 = *(int *)(iVar1 + 0x14);
    *(int *)(param_2 + 0x18) = iVar3;
    *(int *)(param_2 + 0x20) = iVar3 + -1;
    iVar4 = FUN_ram_40047a70(iVar1,0,0x12);
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


/* NanoCore 1.11, address 0x400434ee.
 * REA evidence: ev_a43f952033a3b709119e760ce8b23e8037a7278df409a600e649c96883c8bc48
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400434ee(int param_1,uint param_2)

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
    uVar1 = FUN_ram_40047d34(param_1,uVar14,param_2);
    if (uVar1 == 0) {
      *(short *)(param_1 + 0x28) = (short)param_2;
    }
    else {
      FUN_ram_400454e4(param_1);
      *(short *)(param_1 + 0x28) = (short)param_2;
      FUN_ram_40048028(param_1);
      iVar2 = FUN_ram_4005ab2e(0x280);
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
              if ((char *)*puVar12 == (char *)0x0) goto LAB_ram_4004362e;
              puVar11 = puVar12 + 2;
            } while (*(char *)*puVar12 != 'f');
            puVar11 = (undefined4 *)puVar12[1];
LAB_ram_4004360e:
            pcVar6 = (char *)*puVar11;
            while ((*pcVar6 != '\0' && (uVar13 < 0x20))) {
              puVar9 = (uint *)(iVar2 + 4);
              for (uVar5 = 0; uVar13 != uVar5; uVar5 = uVar5 + 1) {
                if ((((char)puVar9[1] == *pcVar6) && ((*puVar9 & 0xff0000) == (uVar10 & 0xff0000)))
                   && ((uVar10 & 0xffff) <= (*puVar9 & 0xffff))) goto LAB_ram_40043684;
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
LAB_ram_40043684:
              pcVar6 = pcVar6 + 1;
            }
          }
          else {
            for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
              if (*(char *)((int)puVar11 + uVar8 + uVar5 * 4) == 'f') {
                puVar11 = (undefined4 *)puVar11[uVar8];
                goto LAB_ram_4004360e;
              }
            }
          }
        }
LAB_ram_4004362e:
        uVar7 = uVar7 + 1;
      }
      iVar15 = iVar2;
      for (uVar3 = 0; uVar13 != uVar3; uVar3 = uVar3 + 1) {
        FUN_ram_40047b32(param_1,*(uint *)(iVar15 + 4) & 0xff0000,uVar14,param_2,iVar15);
        iVar15 = iVar15 + 0x14;
      }
      FUN_ram_4005ab56(iVar2);
      if ((uVar1 & 0xfffffffd) == 1) {
        FUN_ram_40048114(param_1,0xf0000,0xff);
        return;
      }
      if (uVar1 == 2) {
        FUN_ram_400454e4(param_1);
        FUN_ram_400449fc(param_1);
        return;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40043a8c.
 * REA evidence: ev_971cf6fca5d14bc3d8f1faafb6373a44e0c135bc33df3f7226c23360f7579d94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043a8c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400440dc(&DAT_ram_40099398,param_1);
  FUN_ram_40044212();
  return uVar1;
}


/* NanoCore 1.11, address 0x40043aac.
 * REA evidence: ev_9514605980a742d0437dd502ed2bef06e9fd7f125ee7f29d40436c948234ceb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043aac(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_ram_40044fc4();
  if ((param_2 & 0x10) != 0) {
    FUN_ram_40046e30(param_1,auStack_30,auStack_20);
    FUN_ram_40045480(param_1,auStack_30);
    FUN_ram_40045480(param_1,auStack_20);
  }
  *(uint *)(param_1 + 0x24) = ~param_2 & *(uint *)(param_1 + 0x24);
  if ((param_2 & 1) != 0) {
    FUN_ram_400454e4(param_1);
    iVar2 = FUN_ram_40044fc4(param_1);
    if (iVar2 != 0) {
      FUN_ram_40048a76(param_1);
      FUN_ram_40044ffc();
      FUN_ram_40044ffc(param_1);
    }
  }
  iVar2 = FUN_ram_40044fc4(param_1);
  if ((iVar2 == iVar1) && ((param_2 & 0x1800000) == 0)) {
    return;
  }
  FUN_ram_40048a76(param_1);
  FUN_ram_40044ffc();
  return;
}


/* NanoCore 1.11, address 0x40043b40.
 * REA evidence: ev_68bd9b48247f916f1f48182f4114d5db5715be671adf97abf42663910ed3e29e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043b40(int param_1,uint param_2)

{
  param_2 = *(ushort *)(param_1 + 0x28) | param_2;
  if (*(ushort *)(param_1 + 0x28) != param_2) {
    if ((param_2 & 0x80) != 0) {
      FUN_ram_40056e2a(0,param_1);
    }
    FUN_ram_400434ee(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40043b7e.
 * REA evidence: ev_e0d5f582f61ce2ef38afd981d986bfbe4e9706bab4ed30b37c24e8a92fd9c423
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043b7e(int param_1,ushort param_2)

{
  if (*(ushort *)(param_1 + 0x28) != (~param_2 & *(ushort *)(param_1 + 0x28))) {
    FUN_ram_400434ee();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40043b92.
 * REA evidence: ev_60ac5f22e2098a328339a7b6dbe6d1e3250a0a50395987b41329276d25b51a12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40043b92(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x24) & param_2) == param_2;
}


/* NanoCore 1.11, address 0x40043b9e.
 * REA evidence: ev_0d62ef390fc2cb2b63046af25c1582b4045fb754a09e95cc3160c0997fb0c145
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40043b9e(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x24) & param_2) != 0;
}


/* NanoCore 1.11, address 0x40043ba8.
 * REA evidence: ev_23cc79b59e1876cc510d241ff38259f73cb5e46d778a667e3ef433290b1d503d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_40043ba8(int param_1)

{
  return *(undefined2 *)(param_1 + 0x28);
}


/* NanoCore 1.11, address 0x40043bae.
 * REA evidence: ev_0ee1c65d62c46f819fe4a81bff205ed13fffcc4b9ed292b39eb032578d38ea7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043bae(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40043bb6.
 * REA evidence: ev_9ad184801ca80d64ba955adc11991d0a464c7430a11df35f9212a15e50161485
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40043d00) */
/* WARNING: Removing unreachable block (ram,0x40043d44) */
/* WARNING: Removing unreachable block (ram,0x40043ce0) */
/* WARNING: Removing unreachable block (ram,0x40043d86) */

void FUN_ram_40043bb6(undefined4 param_1,undefined4 param_2)

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
  
  iVar3 = FUN_ram_4004aed0(param_2);
  iVar4 = FUN_ram_4004aec8(param_2);
  uVar9 = 0x20;
  if (iVar3 == 1) goto LAB_ram_40043dd4;
  if (iVar3 == 8) {
    FUN_ram_40043b7e(iVar4,0x20);
    FUN_ram_4004aeda(param_2);
    iVar3 = FUN_ram_40056cfc();
    if (iVar3 != 0) {
      return;
    }
    if ((*(uint *)(iVar4 + 0x24) & 8) == 0) {
      return;
    }
    if ((*(ushort *)(iVar4 + 0x28) & 1) != 0) {
      FUN_ram_40043b7e(iVar4,1);
      goto LAB_ram_40043c14;
    }
LAB_ram_40043c0a:
    FUN_ram_40043b40(iVar4,1);
LAB_ram_40043c14:
    FUN_ram_40044b50(iVar4,0x1e,0);
    return;
  }
  uVar10 = 0x20;
  if (iVar3 == 3) goto LAB_ram_40043dee;
  if (iVar3 == 0x2d) {
    iVar5 = FUN_ram_40048a9e();
    for (iVar3 = 0; iVar3 != iVar5; iVar3 = iVar3 + 1) {
      FUN_ram_40044ffc(*(undefined4 *)(**(int **)(iVar4 + 8) + iVar3 * 4));
    }
    return;
  }
  if (iVar3 != 0xe) {
    if (iVar3 == 0x10) {
      if ((*(uint *)(iVar4 + 0x24) & 0x400) != 0) {
        FUN_ram_40046dea(iVar4,1);
        uVar10 = extraout_a1;
      }
      FUN_ram_40043bae(iVar4,uVar10);
      iVar3 = FUN_ram_40043458();
      iVar5 = FUN_ram_40056cc6();
      if (iVar5 == 0) {
        FUN_ram_40044b8c(param_2);
      }
      iVar5 = FUN_ram_40056cd0();
      uVar9 = 2;
      if ((iVar5 - 2U & 0xfffffffd) == 0) {
        uVar9 = 6;
      }
      if (iVar3 == 0) {
        FUN_ram_40043b40(iVar4,uVar9);
        uVar10 = 8;
        goto LAB_ram_40043dee;
      }
      uVar9 = uVar9 | 8;
    }
    else {
      uVar9 = 0x40;
      if (iVar3 != 9) {
        if (iVar3 == 0xb) {
          FUN_ram_40043b7e(iVar4,0x40);
          iVar3 = FUN_ram_4004650a(iVar4);
          if (iVar3 != 2) {
            return;
          }
          FUN_ram_40046e30(iVar4,auStack_40,auStack_30);
          FUN_ram_40045480(iVar4,auStack_40);
          FUN_ram_40045480(iVar4,auStack_30);
          return;
        }
        uVar10 = 0xe;
        if (iVar3 != 0x11) {
          if (iVar3 == 0x2c) {
            uVar9 = FUN_ram_40047a70(iVar4,0,10);
            auStack_30[0] = uVar9;
            auStack_30[0] = FUN_ram_40047a70(iVar4,0,0x16);
            if (((auStack_30[0] & 0xffff) != 0) || ((uVar9 & 0xff) != 0)) {
              FUN_ram_40044ffc(iVar4);
            }
            iVar5 = FUN_ram_40048a9e(iVar4);
            for (iVar3 = 0; iVar3 != iVar5; iVar3 = iVar3 + 1) {
              FUN_ram_40044ffc(*(undefined4 *)(**(int **)(iVar4 + 8) + iVar3 * 4));
            }
            return;
          }
          if (iVar3 == 0x25) {
            uVar9 = FUN_ram_40047a70(iVar4,0,1);
            auStack_30[0] = uVar9;
            uVar7 = FUN_ram_40047a70(iVar4,0,2);
            auStack_30[0] = uVar7;
            uVar8 = FUN_ram_40047a70(iVar4,0,10);
            auStack_30[0] = uVar8;
            auStack_30[0] = FUN_ram_40047a70(iVar4,0,0x16);
            if (((((auStack_30[0] & 0xffff) == 0) && ((uVar8 & 0xff) == 0)) && (uVar9 != 0x200007d1)
                ) && (uVar7 != 0x200007d1)) {
              return;
            }
          }
          else {
            if (iVar3 != 0x27) {
              if (iVar3 == 0x16) {
                uVar10 = FUN_ram_400448e4(iVar4,0);
                FUN_ram_40044be0(param_2,uVar10);
                return;
              }
              if (iVar3 - 0x15U < 7) {
                if ((0x49U >> (iVar3 - 0x15U & 0x1f) & 1) == 0) {
                  return;
                }
                iVar3 = FUN_ram_4004aed0(param_2,0xe);
                iVar4 = FUN_ram_4004aec8(param_2);
                if (iVar3 != 0x15) {
                  if (iVar3 == 0x18) {
                    uVar10 = FUN_ram_40044bac(param_2);
                    FUN_ram_4004edea(&iStack_90);
                    FUN_ram_40044318(iVar4,0,&iStack_90);
                    uStack_a0 = FUN_ram_40047a70(iVar4,0,0x35);
                    if (uStack_a0 != 0) {
                      bStack_47 = bStack_47 | 0x20;
                    }
                    uVar9 = FUN_ram_40047a70(iVar4,0,0x68);
                    uStack_a0 = uVar9;
                    uVar2 = FUN_ram_40047a70(iVar4,0,0x69);
                    uStack_a0 = *(uint *)(iVar4 + 0x14);
                    uStack_9c = *(undefined4 *)(iVar4 + 0x18);
                    uStack_98 = *(undefined4 *)(iVar4 + 0x1c);
                    uStack_94 = *(undefined4 *)(iVar4 + 0x20);
                    FUN_ram_4004a3d2(&uStack_a0,uVar9,uVar2);
                  }
                  else {
                    if (iVar3 != 0x1b) {
                      return;
                    }
                    uVar10 = FUN_ram_40044bac(param_2);
                    FUN_ram_40046e30(iVar4,auStack_b0,&uStack_a0);
                    iVar3 = FUN_ram_4004a3bc(auStack_b0);
                    if ((iVar3 != 0) || (iVar3 = FUN_ram_4004a3bc(&uStack_a0), iVar3 != 0)) {
                      FUN_ram_4004edea(&iStack_90);
                      bStack_70 = FUN_ram_40047a70(iVar4,0x10000,0x1d);
                      if (2 < bStack_70) {
                        uVar2 = FUN_ram_40047a70(iVar4,0x10000,0x1c);
                        uStack_6f = (undefined1)uVar2;
                        uStack_6e = (undefined1)((uint)uVar2 >> 8);
                        uStack_6d = (undefined1)((uint)uVar2 >> 0x10);
                      }
                      bStack_48 = FUN_ram_40047a70(iVar4,0x10000,0x32);
                      if (2 < bStack_48) {
                        iStack_4c = FUN_ram_40047a70(iVar4,0x10000,0x30);
                        if (iStack_4c < 1) {
                          bStack_48 = 0;
                        }
                        else {
                          uVar2 = FUN_ram_40047a70(iVar4,0x10000,0x31);
                          uStack_52 = (undefined2)uVar2;
                          uStack_50 = (undefined1)((uint)uVar2 >> 0x10);
                        }
                      }
                      bStack_24 = FUN_ram_40047a70(iVar4,0x10000,0x3e);
                      if (2 < bStack_24) {
                        iStack_34 = FUN_ram_40047a70(iVar4,0x10000,0x3c);
                        if (iStack_34 < 1) {
                          bStack_24 = 0;
                        }
                        else {
                          uStack_28 = FUN_ram_40047a70(iVar4,0x10000,0x42);
                          uVar2 = FUN_ram_40047a70(iVar4,0x10000,0x3d);
                          uStack_37 = (undefined1)uVar2;
                          uStack_36 = (undefined1)((uint)uVar2 >> 8);
                          uStack_35 = (undefined1)((uint)uVar2 >> 0x10);
                        }
                      }
                      uVar9 = FUN_ram_40047f84(iVar4,0x10000);
                      if (uVar9 < 0xfd) {
                        bStack_70 = (byte)(bStack_70 * uVar9 * 0x10000 >> 0x18);
                        bStack_48 = bStack_70;
                        bStack_24 = bStack_70;
                      }
                      if ((bStack_70 != 0 || bStack_48 != 0) || bStack_24 != 0) {
                        uStack_74 = FUN_ram_40047a70(iVar4,0x10000,0xc);
                        iVar3 = FUN_ram_4004a3bc(auStack_b0);
                        if (iVar3 != 0) {
                          uStack_88 = 0;
                          FUN_ram_4004eeac(uVar10,&iStack_90,auStack_b0);
                        }
                        iVar3 = FUN_ram_4004a3bc(&uStack_a0);
                        if (iVar3 != 0) {
                          uStack_88 = 1;
                          FUN_ram_4004eeac(uVar10,&iStack_90,&uStack_a0);
                        }
                      }
                    }
                    iStack_90 = FUN_ram_40047a70(iVar4,0,0x35);
                    if (iStack_90 == 0) {
                      return;
                    }
                    FUN_ram_4004edea(&iStack_90);
                    bStack_70 = 0;
                    uStack_55 = 0;
                    uStack_38 = 0;
                    bStack_24 = 0;
                    FUN_ram_40044318(iVar4,0,&iStack_90);
                    uVar9 = FUN_ram_40047a70(iVar4,0,0x68);
                    uStack_a0 = uVar9;
                    uVar2 = FUN_ram_40047a70(iVar4,0,0x69);
                    uStack_a0 = *(uint *)(iVar4 + 0x14);
                    uStack_9c = *(undefined4 *)(iVar4 + 0x18);
                    uStack_98 = *(undefined4 *)(iVar4 + 0x1c);
                    uStack_94 = *(undefined4 *)(iVar4 + 0x20);
                    FUN_ram_4004a3d2(&uStack_a0,uVar9,uVar2);
                  }
                  FUN_ram_4004eeac(uVar10,&iStack_90,&uStack_a0);
                  return;
                }
                piVar1 = (int *)FUN_ram_4004aeda(param_2);
                if (*piVar1 == 2) {
                  return;
                }
                iStack_90 = FUN_ram_40047a70(iVar4,0,0x2d);
                if (iStack_90 != 0) {
                  *piVar1 = 2;
                  return;
                }
                iVar3 = FUN_ram_40047a70(iVar4,0,0xc);
                iStack_90 = iVar3;
                iVar5 = FUN_ram_40047a70(iVar4,0,0x68);
                iStack_90 = iVar5;
                uVar10 = FUN_ram_40047a70(iVar4,0,0x69);
                iStack_90 = *(int *)(iVar4 + 0x14);
                uStack_8c = *(undefined4 *)(iVar4 + 0x18);
                uStack_88 = *(undefined4 *)(iVar4 + 0x1c);
                uStack_84 = *(undefined4 *)(iVar4 + 0x20);
                FUN_ram_4004a3d2(&iStack_90,iVar5,uVar10);
                iVar3 = FUN_ram_4004a5ae(piVar1[1],&iStack_90,iVar3);
                if (((iVar3 != 0) &&
                    (uStack_a0 = FUN_ram_40047a70(iVar4,0,0x1d), 0xfc < (uStack_a0 & 0xff))) &&
                   ((uStack_a0 = FUN_ram_40047a70(iVar4,0,0x5f), 0xfc < (uStack_a0 & 0xff) &&
                    ((uStack_a0 = FUN_ram_40047a70(iVar4,0,0x20), (uStack_a0 & 0xff) == 0 ||
                     (uStack_a0 = FUN_ram_40047a70(iVar4,0,0x25), 0xfc < (uStack_a0 & 0xff))))))) {
                  iVar3 = FUN_ram_40047a70(iVar4,0,0x26);
                  if (iVar3 != 0) {
                    for (uVar9 = 0; uVar9 < *(byte *)(iVar3 + 10); uVar9 = uVar9 + 1) {
                      if (*(byte *)(iVar3 + 3 + uVar9 * 5) < 0xfd) goto LAB_ram_4004376e;
                    }
                  }
                  *piVar1 = 0;
                  return;
                }
LAB_ram_4004376e:
                *piVar1 = 1;
                return;
              }
              if (iVar3 != 0x14) {
                return;
              }
              FUN_ram_40043b7e(iVar4,0x20);
              uVar10 = 0x40;
              goto LAB_ram_40043dee;
            }
            *(ushort *)(iVar4 + 0x2a) = *(ushort *)(iVar4 + 0x2a) | 2;
          }
          FUN_ram_40044ffc(iVar4);
          return;
        }
LAB_ram_40043dee:
        FUN_ram_40043b7e(iVar4,uVar10);
        return;
      }
    }
LAB_ram_40043dd4:
    FUN_ram_40043b40(iVar4,uVar9);
    return;
  }
  if ((*(uint *)(iVar4 + 0x24) & 8) != 0) {
    uVar9 = FUN_ram_40044bbe(param_2);
    if ((uVar9 & 0xfffffffd) != 0x11) {
      if ((uVar9 - 0x12 & 0xfffffffd) == 0) {
        FUN_ram_40043b7e(iVar4,1);
      }
      if (uVar9 == 10) {
        return;
      }
      goto LAB_ram_40043c14;
    }
    goto LAB_ram_40043c0a;
  }
  if ((*(uint *)(iVar4 + 0x24) & 0x810) != 0x810) {
    return;
  }
  iVar3 = FUN_ram_400441de();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_ram_40046626(iVar4);
  iVar5 = FUN_ram_40046716(iVar4);
  iVar6 = FUN_ram_40044bbe(param_2);
  if (iVar6 == 0x12) {
LAB_ram_40043cd0:
    iVar3 = FUN_ram_4004655a(iVar4);
    iVar5 = FUN_ram_40045070(iVar4);
    iVar3 = iVar5 / 4 + iVar3;
  }
  else {
    if (iVar6 != 0x11) {
      if (iVar6 == 0x13) {
        uVar9 = FUN_ram_4004651a(iVar4);
        if (((uVar9 & 3) != 0) && ((0 < iVar3 || (0 < iVar5)))) {
          iVar3 = FUN_ram_4004654a(iVar4);
          iVar5 = FUN_ram_40045064(iVar4);
          iVar3 = iVar5 / 4 + iVar3;
          goto LAB_ram_40043d4c;
        }
        goto LAB_ram_40043cd0;
      }
      if (iVar6 != 0x14) {
        return;
      }
      uVar9 = FUN_ram_4004651a(iVar4);
      if (((uVar9 & 3) != 0) && ((0 < iVar3 || (0 < iVar5)))) {
        iVar3 = FUN_ram_4004654a(iVar4);
        iVar5 = FUN_ram_40045064(iVar4);
        iVar3 = iVar3 - iVar5 / 4;
LAB_ram_40043d4c:
        FUN_ram_40046ac6(iVar4,iVar3,0);
        return;
      }
    }
    iVar3 = FUN_ram_4004655a(iVar4);
    iVar5 = FUN_ram_40045070(iVar4);
    iVar3 = iVar3 - iVar5 / 4;
  }
  FUN_ram_40046afc(iVar4,iVar3,0);
  return;
}


/* NanoCore 1.11, address 0x40043f74.
 * REA evidence: ev_96b9e6264e1c9b948c05ebe8bca71e905474d03763e973660894cc5534bf0690
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043f74(undefined4 param_1,int param_2)

{
  int iVar1;
  
  FUN_ram_4004aede(param_2);
  FUN_ram_40047a66(0);
  FUN_ram_400483d6(param_2);
  FUN_ram_40047a66(1);
  FUN_ram_4004a23a(param_2,0);
  iVar1 = FUN_ram_40043bae(param_2);
  if (iVar1 != 0) {
    FUN_ram_40043318(param_2);
  }
  if (*(int **)(param_2 + 8) != (int *)0x0) {
    if (**(int **)(param_2 + 8) != 0) {
      FUN_ram_4005ab56();
      **(undefined4 **)(param_2 + 8) = 0;
    }
    FUN_ram_4004ae8a(*(int *)(param_2 + 8) + 8);
    FUN_ram_4005ab56(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40043fd6.
 * REA evidence: ev_0fac39ef58d05c1eb805c2d03ec0abd4805c0c2fbf5255a3c9057b0f466d0207
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043fd6(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [28];
  
  iVar1 = FUN_ram_40044fc4();
  if ((param_2 & 1) != 0) {
    FUN_ram_400454e4(param_1);
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_2;
  if ((((param_2 & 1) != 0) && ((*(ushort *)(param_1 + 0x28) & 2) != 0)) &&
     (iVar2 = FUN_ram_40043bae(param_1), iVar2 != 0)) {
    FUN_ram_4004326a();
    iVar2 = FUN_ram_4004344e(iVar2);
    if (iVar2 != 0) {
      FUN_ram_400454e4();
    }
  }
  iVar2 = FUN_ram_40044fc4(param_1);
  if ((iVar2 != iVar1) || ((param_2 & 0x1800000) != 0)) {
    FUN_ram_40048a76(param_1);
    FUN_ram_40044ffc();
    FUN_ram_40044ffc(param_1);
  }
  if ((param_2 & 0x10) != 0) {
    FUN_ram_40046e30(param_1,auStack_40,auStack_30);
    FUN_ram_40045480(param_1,auStack_40);
    FUN_ram_40045480(param_1,auStack_30);
  }
  return;
}


