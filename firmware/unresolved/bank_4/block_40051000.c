/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40051000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40051008.
 * REA evidence: ev_450d6a083ce3643d117f2240474d5c225f0751ff77925942235a3325b39cd9c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40051034) */

void FUN_ram_40051008(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  int *piStack_158;
  int **ppiStack_154;
  undefined4 uStack_150;
  int *apiStack_14c [5];
  undefined1 uStack_138;
  undefined1 auStack_137 [3];
  int iStack_134;
  undefined1 uStack_130;
  int *piStack_12c;
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int *apiStack_78 [5];
  undefined1 uStack_64;
  undefined1 auStack_63 [3];
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if ((*(int *)(param_2 + 0x30) == 0) || (*(byte *)(param_2 + 0x3c) < 3)) {
    return;
  }
  iStack_178 = *(int *)(param_2 + 0x1c);
  iVar11 = *(int *)(param_2 + 0x24);
  iVar4 = *(int *)(param_2 + 0x20);
  iStack_174 = *(int *)(param_2 + 0x28);
  if ((iStack_178 == iVar11) && (iStack_174 == iVar4)) {
    return;
  }
  iVar6 = *(int *)(param_2 + 0x30) / 2;
  iStack_180 = iVar11;
  if (iStack_178 <= iVar11) {
    iStack_180 = iStack_178;
  }
  iStack_180 = iStack_180 - iVar6;
  if (iStack_178 < iVar11) {
    iStack_178 = iVar11;
  }
  iStack_178 = iStack_178 + iVar6;
  iStack_17c = iVar4;
  if (iStack_174 <= iVar4) {
    iStack_17c = iStack_174;
  }
  iStack_17c = iStack_17c - iVar6;
  if (iStack_174 < iVar4) {
    iStack_174 = iVar4;
  }
  iStack_174 = iStack_174 + iVar6;
  iVar4 = FUN_ram_40049494(&iStack_180,&iStack_180,*(undefined4 *)(param_1 + 8));
  if (iVar4 == 0) {
    return;
  }
  iVar12 = *(int *)(param_2 + 0x20);
  iVar6 = *(int *)(param_2 + 0x28);
  iVar11 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0x24);
  iVar9 = *(int *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 8);
  if (iVar12 == iVar6) {
    iStack_b0 = iVar4;
    if (iVar11 <= iVar4) {
      iStack_b0 = iVar11;
    }
    iStack_a4 = (int)(iVar9 - 1U) >> 1;
    if (iVar4 <= iVar11) {
      iVar4 = iVar11;
    }
    iStack_a8 = iVar4 + -1;
    iStack_ac = iVar12 - ((iVar9 - 1U & 1) + iStack_a4);
    iStack_a4 = iStack_a4 + iVar12;
    iVar4 = FUN_ram_40049494(&iStack_b0,&iStack_b0,uVar5);
    if (iVar4 == 0) goto LAB_ram_40051138;
    bVar1 = false;
    if (*(int *)(param_2 + 0x38) != 0) {
      bVar1 = *(int *)(param_2 + 0x34) != 0;
    }
    thunk_FUN_ram_4000505c(apiStack_78,0,0x2c);
    apiStack_78[0] = &iStack_b0;
    FUN_ram_4000305c(auStack_63,param_2 + 0x2c,3);
    iVar4 = iStack_a4;
    uStack_64 = *(undefined1 *)(param_2 + 0x3c);
    if (bVar1) {
      iStack_a4 = iStack_ac;
      iVar6 = (iStack_a8 - iStack_b0) + 1;
      iVar9 = *(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x34);
      iVar11 = iStack_b0;
      if (iVar9 != 0) {
        iVar11 = iStack_b0 % iVar9;
      }
      iVar12 = FUN_ram_40059bae(iVar6);
      uStack_58 = &iStack_b0;
      uStack_5c = CONCAT31(uStack_5c._1_3_,2);
      iStack_60 = iVar12;
      for (iVar9 = iStack_ac; iVar9 <= iVar4; iVar9 = iVar9 + 1) {
        thunk_FUN_ram_4000505c(iVar12,0xff,iVar6);
        iVar8 = iVar11;
        for (iVar7 = 0; iVar7 < iVar6; iVar7 = iVar7 + 1) {
          iVar10 = *(int *)(param_2 + 0x34);
          if (iVar10 < iVar8) {
            if (iVar10 + *(int *)(param_2 + 0x38) < iVar8) {
              iVar8 = 0;
            }
            else {
              *(undefined1 *)(iVar12 + iVar7) = 0;
            }
          }
          else {
            iVar10 = (iVar10 - iVar8) * 0x10000 >> 0x10;
            iVar7 = iVar7 + iVar10;
            iVar8 = iVar8 + iVar10;
          }
          uStack_5c = CONCAT31(uStack_5c._1_3_,2);
          iVar8 = iVar8 + 1;
        }
        FUN_ram_400538aa(param_1,apiStack_78);
        iStack_ac = iStack_ac + 1;
        iStack_a4 = iStack_a4 + 1;
      }
LAB_ram_40051246:
      FUN_ram_40059be4(iVar12);
      goto LAB_ram_40051138;
    }
  }
  else {
    iVar8 = iVar6;
    if (iVar12 <= iVar6) {
      iVar8 = iVar12;
    }
    iVar7 = iVar6;
    if (iVar6 <= iVar12) {
      iVar7 = iVar12;
    }
    if (iVar11 != iVar4) {
      iVar10 = iVar4;
      iVar13 = iVar12;
      if (iVar6 <= iVar12) {
        iVar10 = iVar11;
        iVar11 = iVar4;
        iVar13 = iVar6;
        iVar6 = iVar12;
      }
      uVar2 = iVar10 - iVar11;
      uVar14 = iVar6 - iVar13;
      iVar4 = ((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f);
      iVar12 = ((int)uVar14 >> 0x1f ^ uVar14) - ((int)uVar14 >> 0x1f);
      if (iVar12 < iVar4) {
        if (iVar4 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = (iVar12 * 0x20) / iVar4;
        }
      }
      else if (iVar12 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = (iVar4 * 0x20) / iVar12;
      }
      iStack_170 = iVar11;
      if (iVar10 <= iVar11) {
        iStack_170 = iVar10;
      }
      iVar9 = (uint)(byte)(&DAT_ram_40097934)[iVar3] * iVar9 + 0x3f;
      uVar15 = iVar9 >> 7;
      iStack_170 = iStack_170 - uVar15;
      iStack_164 = iVar7 + uVar15;
      iStack_168 = iVar11;
      if (iVar11 <= iVar10) {
        iStack_168 = iVar10;
      }
      iStack_168 = iStack_168 + uVar15;
      iStack_16c = iVar8 - uVar15;
      iVar8 = FUN_ram_40049494(&iStack_170,&iStack_170,uVar5);
      if (iVar8 != 0) {
        iVar9 = iVar9 >> 8;
        piStack_158 = (int *)0x0;
        ppiStack_154 = (int **)0x0;
        uStack_150 = 0;
        iVar8 = (uVar15 & 1) + iVar9;
        puStack_160 = auStack_120;
        puStack_15c = auStack_e8;
        if (iVar12 < iVar4) {
          iVar12 = iVar13 - iVar9;
          iVar9 = iVar6 - iVar9;
          iVar4 = iVar11;
          iVar7 = iVar10;
          if ((int)uVar2 < 1) {
            FUN_ram_40051fe6(auStack_120,iVar11,iVar13 + iVar8,iVar10,iVar6 + iVar8,0);
          }
          else {
            FUN_ram_40051fe6(auStack_120,iVar11,iVar12,iVar10,iVar9,0);
            iVar12 = iVar13 + iVar8;
            iVar9 = iVar6 + iVar8;
          }
        }
        else {
          FUN_ram_40051fe6(auStack_120,iVar8 + iVar11,iVar13,iVar10 + iVar8,iVar6,0);
          iVar4 = iVar11 - iVar9;
          iVar12 = iVar13;
          iVar7 = iVar10 - iVar9;
          iVar9 = iVar6;
        }
        FUN_ram_40051fe6(auStack_e8,iVar4,iVar12,iVar7,iVar9,1);
        if ((*(byte *)(param_2 + 0x3d) & 0x10) == 0) {
          FUN_ram_40051fe6(&iStack_b0,iVar11,iVar13,iVar11 - uVar14,uVar2 + iVar13,3);
          FUN_ram_40051fe6(apiStack_78,iVar10,iVar6,iVar10 - uVar14,uVar2 + iVar6,2);
          piStack_158 = &iStack_b0;
          ppiStack_154 = apiStack_78;
        }
        iVar4 = iStack_168 - iStack_170;
        FUN_ram_40048854();
        uVar2 = FUN_ram_4004c26a();
        iVar4 = iVar4 + 1;
        uVar14 = FUN_ram_4004944a(&iStack_170);
        if (uVar14 < uVar2) {
          uVar2 = FUN_ram_4004944a(&iStack_170);
        }
        iVar12 = FUN_ram_40059bae(uVar2);
        iVar6 = iStack_164;
        iStack_164 = iStack_16c;
        thunk_FUN_ram_4000505c(iVar12,0xff,uVar2);
        thunk_FUN_ram_4000505c(apiStack_14c,0,0x2c);
        apiStack_14c[0] = &iStack_170;
        FUN_ram_4000305c(auStack_137,param_2 + 0x2c,3);
        uStack_138 = *(undefined1 *)(param_2 + 0x3c);
        piStack_12c = &iStack_170;
        iVar11 = 0;
        iStack_134 = iVar12;
        for (iVar9 = iStack_16c; iVar9 <= iVar6; iVar9 = iVar9 + 1) {
          iVar8 = FUN_ram_40051f0c(&puStack_160,iVar12 + iVar11,iStack_170,iVar9,iVar4);
          uStack_130 = (undefined1)iVar8;
          if (iVar8 == 0) {
            thunk_FUN_ram_4000505c(iVar12 + iVar11,0,iVar4);
          }
          iVar11 = iVar11 + iVar4;
          if ((uint)(iVar4 + iVar11) < uVar2) {
            iStack_164 = iStack_164 + 1;
          }
          else {
            uStack_130 = 2;
            FUN_ram_400538aa(param_1,apiStack_14c);
            iStack_16c = iStack_164 + 1;
            iVar11 = 0;
            iStack_164 = iStack_16c;
            thunk_FUN_ram_4000505c(iVar12,0xff,uVar2);
          }
        }
        if (iStack_16c != iStack_164) {
          iStack_164 = iStack_164 + -1;
          uStack_130 = 2;
          FUN_ram_400538aa(param_1,apiStack_14c);
        }
        FUN_ram_40059be4(iVar12);
        FUN_ram_40051f60(auStack_120);
        FUN_ram_40051f60(auStack_e8);
        if ((*(byte *)(param_2 + 0x3d) & 0x10) == 0) {
          FUN_ram_40051f60(&iStack_b0);
          FUN_ram_40051f60(apiStack_78);
        }
      }
      goto LAB_ram_40051138;
    }
    iStack_a8 = (int)(iVar9 - 1U) >> 1;
    iStack_a4 = iVar7 + -1;
    iStack_b0 = iVar11 - ((iVar9 - 1U & 1) + iStack_a8);
    iStack_a8 = iStack_a8 + iVar11;
    iStack_ac = iVar8;
    iVar4 = FUN_ram_40049494(&iStack_b0,&iStack_b0,uVar5);
    if (iVar4 == 0) goto LAB_ram_40051138;
    bVar1 = false;
    if (*(int *)(param_2 + 0x38) != 0) {
      bVar1 = *(int *)(param_2 + 0x34) != 0;
    }
    thunk_FUN_ram_4000505c(apiStack_78,0,0x2c);
    apiStack_78[0] = &iStack_b0;
    FUN_ram_4000305c(auStack_63,param_2 + 0x2c,3);
    iVar4 = iStack_a4;
    uStack_64 = *(undefined1 *)(param_2 + 0x3c);
    if (bVar1) {
      iVar8 = (iStack_a8 - iStack_b0) + 1;
      iStack_a4 = iStack_ac;
      iVar12 = FUN_ram_40059bae(iVar8);
      uStack_58 = &iStack_b0;
      uStack_5c = CONCAT31(uStack_5c._1_3_,2);
      iVar9 = *(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x34);
      iVar11 = iStack_ac;
      iVar6 = iStack_ac;
      iStack_60 = iVar12;
      if (iVar9 != 0) {
        iVar11 = iStack_ac % iVar9;
      }
      for (; iVar6 <= iVar4; iVar6 = iVar6 + 1) {
        thunk_FUN_ram_4000505c(iVar12,0xff,iVar8);
        uStack_5c = CONCAT31(uStack_5c._1_3_,iVar11 <= *(int *)(param_2 + 0x34));
        if (*(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x38) <= iVar11) {
          iVar11 = 0;
        }
        FUN_ram_400538aa(param_1,apiStack_78);
        iStack_ac = iStack_ac + 1;
        iStack_a4 = iStack_a4 + 1;
        iVar11 = iVar11 + 1;
      }
      goto LAB_ram_40051246;
    }
  }
  FUN_ram_400538aa(param_1,apiStack_78);
LAB_ram_40051138:
  if ((*(uint *)(param_2 + 0x3c) & 0xc00) != 0) {
    FUN_ram_4004dee2(apiStack_78);
    FUN_ram_4000305c((int)&uStack_58 + 1,param_2 + 0x2c,3);
    uStack_5c = 0x7fff;
    uStack_58 = (int *)CONCAT31(uStack_58._1_3_,*(undefined1 *)(param_2 + 0x3c));
    iVar4 = (int)*(uint *)(param_2 + 0x30) >> 1;
    uVar2 = ~*(uint *)(param_2 + 0x30) & 1;
    if ((*(byte *)(param_2 + 0x3d) & 4) != 0) {
      iStack_b0 = *(int *)(param_2 + 0x1c) - iVar4;
      iStack_a8 = (*(int *)(param_2 + 0x1c) + iVar4) - uVar2;
      iStack_ac = *(int *)(param_2 + 0x20) - iVar4;
      iStack_a4 = (*(int *)(param_2 + 0x20) + iVar4) - uVar2;
      FUN_ram_40050422(param_1,apiStack_78,&iStack_b0);
    }
    if ((*(byte *)(param_2 + 0x3d) & 8) != 0) {
      iStack_b0 = *(int *)(param_2 + 0x24) - iVar4;
      iStack_a8 = (*(int *)(param_2 + 0x24) + iVar4) - uVar2;
      iStack_ac = *(int *)(param_2 + 0x28) - iVar4;
      iStack_a4 = (*(int *)(param_2 + 0x28) + iVar4) - uVar2;
      FUN_ram_40050422(param_1,apiStack_78,&iStack_b0);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4005160e.
 * REA evidence: ev_fbf7d3fc133c007aae69decb43256764b8e35d30085a66b78f94c0925dd75b2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005160e(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_ram_4000505c(param_1,0,param_2);
  return;
}


/* NanoCore 1.10, address 0x40051616.
 * REA evidence: ev_e96ec8264ade18a2910ddb6302e022c3f6c93e5587f7d191073ff3cc07d79e21
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40051616(uint param_1,uint param_2)

{
  if (param_2 < 0xfd) {
    if (2 < param_2) {
      return param_1 * param_2 * 0x10102 >> 0x18;
    }
    param_1 = 0;
  }
  return param_1;
}


/* NanoCore 1.10, address 0x4005163c.
 * REA evidence: ev_a4b984d4b2311286029faa9da6766996d14cf7bf6f768563f9af66cd3d768d41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_ram_4005163c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar4 = param_3 - *(int *)(param_5 + 0x20);
  iVar6 = *(int *)(param_5 + 0x1c);
  bVar1 = *(byte *)(param_5 + 0x34);
  iVar9 = param_2 - iVar6;
  if (*(int *)(param_5 + 0x2c) == 0) {
    bVar2 = *(byte *)(param_5 + 0x18);
    if ((bVar1 & 1) != 0) {
      if ((bVar2 & 2) == 0) {
        return bVar1 & 1;
      }
      if ((bVar2 & 3) == 2) {
        return uVar4 >> 0x1f;
      }
      if ((bVar2 & 3) != 3) {
        return 0;
      }
      if ((int)uVar4 < 1) {
        return 0;
      }
      return bVar1 & 1;
    }
    if ((bVar2 & 2) != 0) {
      return 1;
    }
    if ((bVar2 & 3) == 1) {
      if (0 < iVar9) {
        return 1;
      }
    }
    else if ((bVar2 & 3) == 0) {
      if (iVar9 + param_4 < 0) {
        return 1;
      }
      param_2 = iVar6 - param_2;
      if (param_2 < 0) {
        return 0;
      }
      if (param_4 <= param_2) {
        return 2;
      }
      goto LAB_ram_4005183e;
    }
    if (iVar9 + param_4 < 0) {
      return 0;
    }
    iVar6 = iVar6 - param_2;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if (param_4 <= iVar6) {
      return 0;
    }
    goto LAB_ram_40051844;
  }
  if ((bVar1 & 1) == 0) {
    iVar7 = *(int *)(param_5 + 0x24);
    uVar4 = uVar4 * iVar7;
    if ((int)((uint)(0 < iVar7) + ((int)uVar4 >> 10)) < iVar9) goto LAB_ram_40051706;
    if (iVar9 + param_4 < (int)uVar4 >> 10) goto LAB_ram_40051722;
    iVar5 = (int)(uVar4 * 0x100) >> 0x12;
    iVar11 = (int)((uVar4 + iVar7) * 0x100) >> 0x12;
    uVar8 = (uVar4 & 0x3ff) >> 2;
    iVar10 = iVar5 - iVar9;
    iVar6 = iVar10;
    if (iVar5 == iVar11) {
LAB_ram_400519e6:
      if ((-1 < iVar6) && (iVar6 < param_4)) {
        uVar4 = ((uVar4 + iVar7 & 0x3ff) >> 2) + uVar8 >> 1;
        if ((bVar1 & 2) != 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_40051616(*(undefined1 *)(param_1 + iVar6),uVar4);
        *(undefined1 *)(param_1 + iVar6) = uVar3;
      }
      if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
        iVar6 = iVar11 - iVar9;
        if (param_4 <= iVar6) {
          return 0;
        }
        goto joined_r0x40051a1e;
      }
      param_2 = iVar6 + 1;
    }
    else {
      if (iVar7 < 0) {
        iVar6 = iVar10 + -1;
        if (uVar8 != 0) {
          iVar9 = (int)(-*(int *)(param_5 + 0x28) * uVar8) >> 10;
          if ((-1 < iVar10) && (iVar10 < param_4)) {
            uVar4 = (uVar8 * iVar9 & 0x1ffff) >> 9;
            if ((bVar1 & 2) != 0) {
              uVar4 = ~uVar4 & 0xff;
            }
            uVar3 = FUN_ram_40051616(*(undefined1 *)(param_1 + iVar10),uVar4);
            *(undefined1 *)(param_1 + iVar10) = uVar3;
          }
          if ((-1 < iVar6) && (iVar6 < param_4)) {
            iVar9 = 0xff - iVar9;
            uVar4 = ((-*(int *)(param_5 + 0x24) * iVar9 >> 10) * iVar9 & 0x1ffffU) >> 9;
            if ((*(byte *)(param_5 + 0x34) & 2) == 0) {
              uVar4 = ~uVar4 & 0xff;
            }
            uVar3 = FUN_ram_40051616(*(undefined1 *)(param_1 + iVar6),uVar4);
            *(undefined1 *)(param_1 + iVar6) = uVar3;
          }
          if ((*(byte *)(param_5 + 0x34) & 2) == 0) {
            iVar10 = iVar10 + 1;
            if (param_4 < iVar10) {
              return 1;
            }
            if (iVar10 < 0) {
              return 2;
            }
            iVar6 = param_4 - iVar10;
            param_1 = param_1 + iVar10;
          }
          else {
            if (param_4 < iVar6) {
              return 2;
            }
            if (iVar6 < 1) {
              return 2;
            }
          }
          goto LAB_ram_40051844;
        }
        uVar8 = 0xff;
        goto LAB_ram_400519e6;
      }
      iVar6 = (int)((0xff - uVar8) * *(int *)(param_5 + 0x28)) >> 10;
      if ((-1 < iVar10) && (iVar10 < param_4)) {
        uVar4 = ((0xff - uVar8) * iVar6 & 0x1ffff) >> 9;
        if ((bVar1 & 2) == 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_40051616(*(undefined1 *)(param_1 + iVar10),uVar4);
        *(undefined1 *)(param_1 + iVar10) = uVar3;
      }
      iVar9 = iVar10 + 1;
      if ((-1 < iVar9) && (iVar9 < param_4)) {
        iVar6 = 0xff - iVar6;
        uVar4 = ((iVar6 * *(int *)(param_5 + 0x24) >> 10) * iVar6 & 0x1ffffU) >> 9;
        if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_40051616(*(undefined1 *)(param_1 + iVar9),uVar4);
        *(undefined1 *)(param_1 + iVar9) = uVar3;
      }
      if ((*(byte *)(param_5 + 0x34) & 2) != 0) goto joined_r0x400519ce;
      param_2 = iVar10 + 2;
    }
    if (param_4 <= param_2) {
      param_2 = param_4;
    }
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 < 1) {
      return 2;
    }
  }
  else {
    iVar6 = *(int *)(param_5 + 0x28);
    iVar7 = iVar9 * iVar6 >> 10;
    if (iVar6 < 1) {
      if (iVar7 < (int)uVar4) goto LAB_ram_40051706;
    }
    else if ((int)uVar4 < iVar7) {
LAB_ram_40051706:
      return (uint)((bVar1 & 2) != 0);
    }
    iVar7 = (iVar9 + param_4) * iVar6 >> 10;
    if (iVar6 < 1) {
      if ((int)uVar4 < iVar7) goto LAB_ram_40051722;
      uVar4 = uVar4 + 1;
    }
    else if (iVar7 < (int)uVar4) {
LAB_ram_40051722:
      return (uint)((bVar1 & 2) == 0);
    }
    iVar7 = 0xff;
    iVar6 = uVar4 * *(int *)(param_5 + 0x24) * 0x100;
    uVar4 = iVar6 >> 10 & 0xff;
    if (uVar4 != 0) {
      iVar7 = 0xff - ((int)((0xff - uVar4) * *(int *)(param_5 + 0x30)) >> 8);
    }
    iVar10 = (iVar6 >> 0x12) - iVar9;
    param_2 = iVar10;
    if (uVar4 != 0) {
      if ((-1 < iVar10) && (iVar10 < param_4)) {
        uVar4 = ((0xff - uVar4) * (0xff - iVar7) & 0x1ffff) >> 9;
        if ((bVar1 & 2) == 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_40051616(*(undefined1 *)(param_1 + iVar10),uVar4);
        *(undefined1 *)(param_1 + iVar10) = uVar3;
      }
      param_2 = iVar10 + 1;
    }
    do {
      if (iVar7 <= *(int *)(param_5 + 0x30)) {
        if ((param_2 < param_4) && (-1 < param_2)) {
          uVar4 = ((iVar7 * *(int *)(param_5 + 0x24) >> 10) * iVar7 & 0x1ffffU) >> 9;
          if (*(int *)(param_5 + 0x28) < 0) {
            uVar4 = ~uVar4 & 0xff;
          }
          if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
            uVar4 = ~uVar4 & 0xff;
          }
          uVar3 = FUN_ram_40051616(*(undefined1 *)(param_1 + param_2),uVar4);
          *(undefined1 *)(param_1 + param_2) = uVar3;
        }
        break;
      }
      if ((-1 < param_2) && (param_2 < param_4)) {
        uVar4 = iVar7 - (*(int *)(param_5 + 0x30) >> 1) & 0xff;
        if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_40051616(*(undefined1 *)(param_1 + param_2),uVar4);
        *(undefined1 *)(param_1 + param_2) = uVar3;
      }
      param_2 = param_2 + 1;
      iVar7 = iVar7 - *(int *)(param_5 + 0x30);
    } while (param_2 < param_4);
    if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
joined_r0x400519ce:
      iVar6 = iVar10;
      if (param_4 < iVar10) {
        return 0;
      }
joined_r0x40051a1e:
      if (iVar6 < 0) {
        return 2;
      }
      goto LAB_ram_40051844;
    }
    param_2 = param_2 + 1;
    if (param_2 < 0) {
      return 0;
    }
    if (param_4 < param_2) {
      return 2;
    }
  }
LAB_ram_4005183e:
  iVar6 = param_4 - param_2;
  param_1 = param_2 + param_1;
LAB_ram_40051844:
  FUN_ram_4005160e(param_1,iVar6);
  return 2;
}


/* NanoCore 1.10, address 0x40051a24.
 * REA evidence: ev_aa4d7a7481d91b42504200accb1860d6fcca05f77bf101c6eca87dbbeaffd0d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40051a24(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_5 + 0xc);
  iVar3 = *(int *)(param_5 + 0x10);
  iVar2 = param_2 - *(int *)(param_5 + 8);
  iVar4 = param_3 - iVar5;
  iVar1 = *(int *)(param_5 + 0x14);
  if (iVar3 < 0xb4) {
    if (iVar1 < 0xb4) {
      if (iVar3 != 0) {
        if ((iVar1 == 0) || (iVar3 <= iVar1)) goto LAB_ram_40051c40;
        if (param_3 < iVar5) {
          return 1;
        }
        iVar5 = (iVar4 + 1) * *(int *)(param_5 + 0x3c) >> 10;
        if (iVar3 - 1U < 0x5a) {
          if (iVar5 < 0) {
LAB_ram_40051aa8:
            iVar5 = 0;
          }
        }
        else if ((iVar3 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40051aa8;
        if (iVar1 - 1U < 0x5a) {
          if (iVar5 < 0) {
LAB_ram_40051acc:
            iVar5 = 0;
          }
        }
        else if ((iVar1 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40051acc;
        iVar2 = (iVar5 + ((iVar4 * *(int *)(param_5 + 0x74) >> 10) - iVar5 >> 1)) - iVar2;
        if (param_4 < iVar2) {
          iVar2 = param_4;
        }
        iVar1 = 1;
        if ((0 < iVar2) &&
           (iVar1 = FUN_ram_4005163c(param_1,param_2,param_3,iVar2,param_5 + 0x18), iVar1 == 0)) {
          FUN_ram_4005160e(param_1,iVar2,param_3);
        }
        if (param_4 < iVar2) {
          iVar2 = param_4;
        }
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        param_5 = param_5 + 0x50;
        goto LAB_ram_40051b30;
      }
    }
    else if (iVar3 != 0) {
LAB_ram_40051c40:
      iVar2 = 3;
      if (iVar5 <= param_3) goto LAB_ram_40051c46;
      goto LAB_ram_40051c1a;
    }
    iVar2 = 3;
    if (iVar5 <= param_3) {
      iVar2 = 1;
    }
  }
  else if (iVar3 == 0xb4) {
    iVar2 = 1;
    if (iVar5 <= param_3) {
      iVar2 = 3;
    }
  }
  else {
    if ((0xb4 < iVar1) && (iVar1 < iVar3)) {
      if (iVar5 < param_3) {
        return 1;
      }
      iVar5 = (iVar4 + 1) * *(int *)(param_5 + 0x3c) >> 10;
      if (iVar3 - 0x10fU < 0x59) {
        if (iVar5 < 0) {
LAB_ram_40051b8a:
          iVar5 = 0;
        }
      }
      else if ((iVar3 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40051b8a;
      if (iVar1 - 0x10fU < 0x59) {
        if (iVar5 < 0) {
LAB_ram_40051bae:
          iVar5 = 0;
        }
      }
      else if ((iVar1 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40051bae;
      iVar2 = (((iVar4 * *(int *)(param_5 + 0x74) >> 10) - iVar5 >> 1) + iVar5) - iVar2;
      if (param_4 <= iVar2) {
        iVar2 = param_4;
      }
      iVar1 = 1;
      if ((0 < iVar2) &&
         (iVar1 = FUN_ram_4005163c(param_1,param_2,param_3,iVar2,param_5 + 0x50), iVar1 == 0)) {
        FUN_ram_4005160e(param_1,iVar2,param_3);
      }
      if (param_4 < iVar2) {
        iVar2 = param_4;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      param_5 = param_5 + 0x18;
LAB_ram_40051b30:
      iVar3 = FUN_ram_4005163c(param_1 + iVar2,iVar2 + param_2,param_3,param_4 - iVar2,param_5);
      if (iVar3 == 0) {
        FUN_ram_4005160e(param_1 + iVar2,param_4 - iVar2);
      }
      if (iVar1 != iVar3) {
        return 2;
      }
      return iVar3;
    }
    iVar2 = 3;
    if (param_3 < iVar5) {
LAB_ram_40051c46:
      iVar2 = FUN_ram_4005163c(param_1,param_2,param_3,param_4,param_5 + 0x18);
    }
  }
LAB_ram_40051c1a:
  iVar3 = *(int *)(param_5 + 0x14);
  iVar4 = *(int *)(param_5 + 0xc);
  iVar1 = iVar2;
  if (iVar3 == 0xb4) {
    iVar3 = 3;
    if (param_3 < iVar4) goto joined_r0x40051c8c;
  }
  else {
    if (iVar3 != 0) {
      if (iVar3 < 0xb4) {
        if (param_3 < iVar4) {
LAB_ram_40051ca0:
          iVar3 = 3;
          goto joined_r0x40051c8c;
        }
      }
      else if (iVar4 <= param_3) goto LAB_ram_40051ca0;
      iVar3 = FUN_ram_4005163c(param_1,param_2,param_3,param_4,param_5 + 0x50);
      iVar1 = iVar3;
      if (iVar2 == 0) {
        return 0;
      }
      goto joined_r0x40051c8c;
    }
    iVar3 = 3;
    if (iVar4 <= param_3) goto joined_r0x40051c8c;
  }
  iVar3 = 1;
joined_r0x40051c8c:
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar2 == 3) {
    if (iVar3 == 3) {
      return 0;
    }
  }
  else if ((iVar2 == 1) && (iVar3 == 1)) {
    return 1;
  }
  return 2;
}


/* NanoCore 1.10, address 0x40051f00.
 * REA evidence: ev_7502f89f394426ab3f2946beb552b8dda633aa53f23a38b1424a6d5eb9ef0974
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40051f00(void)

{
  FUN_ram_40059afc(0x3007f9dc);
  return;
}


/* NanoCore 1.10, address 0x40051f0c.
 * REA evidence: ev_45de61fb37998fa90606fe3bb5bb0856257ea59985d74810d11477596273d72e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40051f0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  while( true ) {
    puVar3 = (undefined4 *)*param_1;
    if (puVar3 == (undefined4 *)0x0) {
      return iVar1 + 1;
    }
    iVar2 = (*(code *)*puVar3)(param_2,param_3,param_4,param_5,puVar3,(code *)*puVar3);
    if (iVar2 == 0) break;
    if (iVar2 == 2) {
      iVar1 = 1;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40051f60.
 * REA evidence: ev_01b09a69055735995d72406c5a80e579815d7754843d8027bb7c4d98efe0de01
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40051f60(int param_1)

{
  int iVar1;
  
  FUN_ram_40059b20(0x3007f9dc);
  if ((*(char *)(param_1 + 4) == '\x02') && (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x10) < 0) {
      FUN_ram_40059be4(*(undefined4 *)(iVar1 + 4));
      FUN_ram_40059be4(*(undefined4 *)(param_1 + 0x20));
    }
    else {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    }
  }
  FUN_ram_40059b36(0x3007f9dc);
  return;
}


/* NanoCore 1.10, address 0x40051fae.
 * REA evidence: ev_14deea902a789f0d2582bc31325821443217a44ca9f91d67fdfd577c70de10bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40051fae(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)&DAT_ram_3007f9e4;
  do {
    if (*piVar1 != 0) {
      FUN_ram_40059be4();
    }
    piVar2 = piVar1 + 7;
    FUN_ram_4005160e(piVar1,0x1c);
    piVar1 = piVar2;
  } while (piVar2 != (int *)0x3007fa54);
  return;
}


/* NanoCore 1.10, address 0x40051fe6.
 * REA evidence: ev_53b3a9b71ed4dd0f934796e0274820315e5a58a6ac7990a2bf628e1cd401a460
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40051fe6(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                     int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_ram_4005160e(param_1,0x38);
  iVar5 = param_2;
  iVar7 = param_3;
  if (param_3 == param_5) {
    if (param_6 == 3) {
      iVar7 = param_3 + -1;
      param_5 = param_5 + -1;
    }
  }
  else if (param_5 < param_3) {
    iVar5 = param_4;
    iVar7 = param_5;
    param_4 = param_2;
    param_5 = param_3;
  }
  param_1[4] = param_4;
  uVar2 = param_4 - iVar5;
  param_1[3] = iVar7;
  param_1[5] = param_5;
  param_1[8] = iVar7;
  uVar3 = param_5 - iVar7;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc | (byte)param_6 & 3;
  bVar1 = (int)(((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f)) <
          (int)(((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f));
  param_1[2] = iVar5;
  param_1[7] = iVar5;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe | bVar1;
  param_1[10] = 0;
  param_1[9] = 0;
  *param_1 = FUN_ram_4005163c;
  *(undefined1 *)(param_1 + 1) = 0;
  if (bVar1) {
    if (uVar2 != 0) {
      if (uVar2 == 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = 0x100000 / (int)uVar2;
      }
      param_1[10] = (int)(iVar5 * uVar3) >> 10;
    }
    if (uVar3 != 0) {
      if (uVar3 == 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = 0x100000 / (int)uVar3;
      }
      param_1[9] = (int)(iVar5 * uVar2) >> 10;
    }
    uVar6 = param_1[10];
  }
  else {
    if (uVar3 != 0) {
      if (uVar3 == 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = 0x100000 / (int)uVar3;
      }
      param_1[9] = (int)(iVar5 * uVar2) >> 10;
    }
    if (uVar2 != 0) {
      if (uVar2 == 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = 0x100000 / (int)uVar2;
      }
      param_1[10] = (int)(iVar5 * uVar3) >> 10;
    }
    uVar6 = param_1[9];
  }
  param_1[0xb] = uVar6;
  iVar5 = param_1[0xb];
  bVar4 = *(byte *)(param_1 + 6) & 3;
  if ((*(byte *)(param_1 + 6) & 3) == 0) goto LAB_ram_400520ac;
  if (bVar4 != 1) {
    if (bVar4 == 2) {
      if (iVar5 < 1) {
LAB_ram_400520ac:
        bVar4 = *(byte *)(param_1 + 0xd) & 0xfd;
        goto LAB_ram_400520ae;
      }
    }
    else if (0 < iVar5) goto LAB_ram_400520ac;
  }
  bVar4 = *(byte *)(param_1 + 0xd) | 2;
LAB_ram_400520ae:
  *(byte *)(param_1 + 0xd) = bVar4;
  iVar7 = iVar5 >> 2;
  if (iVar5 < 0) {
    iVar7 = -iVar7;
  }
  param_1[0xc] = iVar7;
  return;
}


