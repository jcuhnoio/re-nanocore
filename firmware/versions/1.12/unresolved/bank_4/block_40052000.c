/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40052000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400523b2.
 * REA evidence: ev_9068516e3f6cb7148281f236014d69b9e4401701e1ea8a6ef98b9df6ee0c914a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400523b2(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_ram_40004f92(param_1,0,param_2);
  return;
}


/* NanoCore 1.12, address 0x400523ba.
 * REA evidence: ev_127f7294772f8978cfaeac31d39549d0a0182b1779c262e4dc9437b76a861575
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400523ba(uint param_1,uint param_2)

{
  if (param_2 < 0xfd) {
    if (2 < param_2) {
      return param_1 * param_2 * 0x10102 >> 0x18;
    }
    param_1 = 0;
  }
  return param_1;
}


/* NanoCore 1.12, address 0x400523e0.
 * REA evidence: ev_1daa705f47906dac234afd3c8539c392e0734e5261595842897f03209bf09ddf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_ram_400523e0(int param_1,int param_2,int param_3,int param_4,int param_5)

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
      goto LAB_ram_400525e2;
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
    goto LAB_ram_400525e8;
  }
  if ((bVar1 & 1) == 0) {
    iVar7 = *(int *)(param_5 + 0x24);
    uVar4 = uVar4 * iVar7;
    if ((int)((uint)(0 < iVar7) + ((int)uVar4 >> 10)) < iVar9) goto LAB_ram_400524aa;
    if (iVar9 + param_4 < (int)uVar4 >> 10) goto LAB_ram_400524c6;
    iVar5 = (int)(uVar4 * 0x100) >> 0x12;
    iVar11 = (int)((uVar4 + iVar7) * 0x100) >> 0x12;
    uVar8 = (uVar4 & 0x3ff) >> 2;
    iVar10 = iVar5 - iVar9;
    iVar6 = iVar10;
    if (iVar5 == iVar11) {
LAB_ram_4005278a:
      if ((-1 < iVar6) && (iVar6 < param_4)) {
        uVar4 = ((uVar4 + iVar7 & 0x3ff) >> 2) + uVar8 >> 1;
        if ((bVar1 & 2) != 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_400523ba(*(undefined1 *)(param_1 + iVar6),uVar4);
        *(undefined1 *)(param_1 + iVar6) = uVar3;
      }
      if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
        iVar6 = iVar11 - iVar9;
        if (param_4 <= iVar6) {
          return 0;
        }
        goto joined_r0x400527c2;
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
            uVar3 = FUN_ram_400523ba(*(undefined1 *)(param_1 + iVar10),uVar4);
            *(undefined1 *)(param_1 + iVar10) = uVar3;
          }
          if ((-1 < iVar6) && (iVar6 < param_4)) {
            iVar9 = 0xff - iVar9;
            uVar4 = ((-*(int *)(param_5 + 0x24) * iVar9 >> 10) * iVar9 & 0x1ffffU) >> 9;
            if ((*(byte *)(param_5 + 0x34) & 2) == 0) {
              uVar4 = ~uVar4 & 0xff;
            }
            uVar3 = FUN_ram_400523ba(*(undefined1 *)(param_1 + iVar6),uVar4);
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
          goto LAB_ram_400525e8;
        }
        uVar8 = 0xff;
        goto LAB_ram_4005278a;
      }
      iVar6 = (int)((0xff - uVar8) * *(int *)(param_5 + 0x28)) >> 10;
      if ((-1 < iVar10) && (iVar10 < param_4)) {
        uVar4 = ((0xff - uVar8) * iVar6 & 0x1ffff) >> 9;
        if ((bVar1 & 2) == 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_400523ba(*(undefined1 *)(param_1 + iVar10),uVar4);
        *(undefined1 *)(param_1 + iVar10) = uVar3;
      }
      iVar9 = iVar10 + 1;
      if ((-1 < iVar9) && (iVar9 < param_4)) {
        iVar6 = 0xff - iVar6;
        uVar4 = ((iVar6 * *(int *)(param_5 + 0x24) >> 10) * iVar6 & 0x1ffffU) >> 9;
        if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_400523ba(*(undefined1 *)(param_1 + iVar9),uVar4);
        *(undefined1 *)(param_1 + iVar9) = uVar3;
      }
      if ((*(byte *)(param_5 + 0x34) & 2) != 0) goto joined_r0x40052772;
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
      if (iVar7 < (int)uVar4) goto LAB_ram_400524aa;
    }
    else if ((int)uVar4 < iVar7) {
LAB_ram_400524aa:
      return (uint)((bVar1 & 2) != 0);
    }
    iVar7 = (iVar9 + param_4) * iVar6 >> 10;
    if (iVar6 < 1) {
      if ((int)uVar4 < iVar7) goto LAB_ram_400524c6;
      uVar4 = uVar4 + 1;
    }
    else if (iVar7 < (int)uVar4) {
LAB_ram_400524c6:
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
        uVar3 = FUN_ram_400523ba(*(undefined1 *)(param_1 + iVar10),uVar4);
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
          uVar3 = FUN_ram_400523ba(*(undefined1 *)(param_1 + param_2),uVar4);
          *(undefined1 *)(param_1 + param_2) = uVar3;
        }
        break;
      }
      if ((-1 < param_2) && (param_2 < param_4)) {
        uVar4 = iVar7 - (*(int *)(param_5 + 0x30) >> 1) & 0xff;
        if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_400523ba(*(undefined1 *)(param_1 + param_2),uVar4);
        *(undefined1 *)(param_1 + param_2) = uVar3;
      }
      param_2 = param_2 + 1;
      iVar7 = iVar7 - *(int *)(param_5 + 0x30);
    } while (param_2 < param_4);
    if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
joined_r0x40052772:
      iVar6 = iVar10;
      if (param_4 < iVar10) {
        return 0;
      }
joined_r0x400527c2:
      if (iVar6 < 0) {
        return 2;
      }
      goto LAB_ram_400525e8;
    }
    param_2 = param_2 + 1;
    if (param_2 < 0) {
      return 0;
    }
    if (param_4 < param_2) {
      return 2;
    }
  }
LAB_ram_400525e2:
  iVar6 = param_4 - param_2;
  param_1 = param_2 + param_1;
LAB_ram_400525e8:
  FUN_ram_400523b2(param_1,iVar6);
  return 2;
}


/* NanoCore 1.12, address 0x400527c8.
 * REA evidence: ev_aa682065e0b53575cb9d200d0c1262458c664061317ea51a4b66c0a77b226f71
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400527c8(int param_1,int param_2,int param_3,int param_4,int param_5)

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
        if ((iVar1 == 0) || (iVar3 <= iVar1)) goto LAB_ram_400529e4;
        if (param_3 < iVar5) {
          return 1;
        }
        iVar5 = (iVar4 + 1) * *(int *)(param_5 + 0x3c) >> 10;
        if (iVar3 - 1U < 0x5a) {
          if (iVar5 < 0) {
LAB_ram_4005284c:
            iVar5 = 0;
          }
        }
        else if ((iVar3 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_4005284c;
        if (iVar1 - 1U < 0x5a) {
          if (iVar5 < 0) {
LAB_ram_40052870:
            iVar5 = 0;
          }
        }
        else if ((iVar1 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40052870;
        iVar2 = (iVar5 + ((iVar4 * *(int *)(param_5 + 0x74) >> 10) - iVar5 >> 1)) - iVar2;
        if (param_4 < iVar2) {
          iVar2 = param_4;
        }
        iVar1 = 1;
        if ((0 < iVar2) &&
           (iVar1 = FUN_ram_400523e0(param_1,param_2,param_3,iVar2,param_5 + 0x18), iVar1 == 0)) {
          FUN_ram_400523b2(param_1,iVar2,param_3);
        }
        if (param_4 < iVar2) {
          iVar2 = param_4;
        }
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        param_5 = param_5 + 0x50;
        goto LAB_ram_400528d4;
      }
    }
    else if (iVar3 != 0) {
LAB_ram_400529e4:
      iVar2 = 3;
      if (iVar5 <= param_3) goto LAB_ram_400529ea;
      goto LAB_ram_400529be;
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
LAB_ram_4005292e:
          iVar5 = 0;
        }
      }
      else if ((iVar3 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_4005292e;
      if (iVar1 - 0x10fU < 0x59) {
        if (iVar5 < 0) {
LAB_ram_40052952:
          iVar5 = 0;
        }
      }
      else if ((iVar1 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40052952;
      iVar2 = (((iVar4 * *(int *)(param_5 + 0x74) >> 10) - iVar5 >> 1) + iVar5) - iVar2;
      if (param_4 <= iVar2) {
        iVar2 = param_4;
      }
      iVar1 = 1;
      if ((0 < iVar2) &&
         (iVar1 = FUN_ram_400523e0(param_1,param_2,param_3,iVar2,param_5 + 0x50), iVar1 == 0)) {
        FUN_ram_400523b2(param_1,iVar2,param_3);
      }
      if (param_4 < iVar2) {
        iVar2 = param_4;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      param_5 = param_5 + 0x18;
LAB_ram_400528d4:
      iVar3 = FUN_ram_400523e0(param_1 + iVar2,iVar2 + param_2,param_3,param_4 - iVar2,param_5);
      if (iVar3 == 0) {
        FUN_ram_400523b2(param_1 + iVar2,param_4 - iVar2);
      }
      if (iVar1 != iVar3) {
        return 2;
      }
      return iVar3;
    }
    iVar2 = 3;
    if (param_3 < iVar5) {
LAB_ram_400529ea:
      iVar2 = FUN_ram_400523e0(param_1,param_2,param_3,param_4,param_5 + 0x18);
    }
  }
LAB_ram_400529be:
  iVar3 = *(int *)(param_5 + 0x14);
  iVar4 = *(int *)(param_5 + 0xc);
  iVar1 = iVar2;
  if (iVar3 == 0xb4) {
    iVar3 = 3;
    if (param_3 < iVar4) goto joined_r0x40052a30;
  }
  else {
    if (iVar3 != 0) {
      if (iVar3 < 0xb4) {
        if (param_3 < iVar4) {
LAB_ram_40052a44:
          iVar3 = 3;
          goto joined_r0x40052a30;
        }
      }
      else if (iVar4 <= param_3) goto LAB_ram_40052a44;
      iVar3 = FUN_ram_400523e0(param_1,param_2,param_3,param_4,param_5 + 0x50);
      iVar1 = iVar3;
      if (iVar2 == 0) {
        return 0;
      }
      goto joined_r0x40052a30;
    }
    iVar3 = 3;
    if (iVar4 <= param_3) goto joined_r0x40052a30;
  }
  iVar3 = 1;
joined_r0x40052a30:
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


/* NanoCore 1.12, address 0x40052ca4.
 * REA evidence: ev_e2f834b1c44f66bf259f4e411d8edc8f702cbad7886a9e5bb49440eb1609a3c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052ca4(void)

{
  FUN_ram_4005a8a0(0x30080ddc);
  return;
}


/* NanoCore 1.12, address 0x40052cb0.
 * REA evidence: ev_41815b26dd5e39714d1f08ec5c4c85616eee3c2b3f397047339b18c50fce5ab4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40052cb0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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


/* NanoCore 1.12, address 0x40052d04.
 * REA evidence: ev_b3d0b5dd6dc55b9118f73440bfe03f284018ee924d9f336135af5f46427af74b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052d04(int param_1)

{
  int iVar1;
  
  FUN_ram_4005a8c4(0x30080ddc);
  if ((*(char *)(param_1 + 4) == '\x02') && (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x10) < 0) {
      FUN_ram_4005a988(*(undefined4 *)(iVar1 + 4));
      FUN_ram_4005a988(*(undefined4 *)(param_1 + 0x20));
    }
    else {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    }
  }
  FUN_ram_4005a8da(0x30080ddc);
  return;
}


/* NanoCore 1.12, address 0x40052d52.
 * REA evidence: ev_71778f4f2251b2c5720ae10a34ae1ec0b47ea08af04b60034c386a11bbc14763
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052d52(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)&DAT_ram_30080de4;
  do {
    if (*piVar1 != 0) {
      FUN_ram_4005a988();
    }
    piVar2 = piVar1 + 7;
    FUN_ram_400523b2(piVar1,0x1c);
    piVar1 = piVar2;
  } while (piVar2 != (int *)0x30080e54);
  return;
}


/* NanoCore 1.12, address 0x40052d8a.
 * REA evidence: ev_291b83b4b4a7af59778e1e6037bc93a722a385380b4e5247f74f858f6e895f86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052d8a(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                     int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_ram_400523b2(param_1,0x38);
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
  *param_1 = FUN_ram_400523e0;
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
  if ((*(byte *)(param_1 + 6) & 3) == 0) goto LAB_ram_40052e50;
  if (bVar4 != 1) {
    if (bVar4 == 2) {
      if (iVar5 < 1) {
LAB_ram_40052e50:
        bVar4 = *(byte *)(param_1 + 0xd) & 0xfd;
        goto LAB_ram_40052e52;
      }
    }
    else if (0 < iVar5) goto LAB_ram_40052e50;
  }
  bVar4 = *(byte *)(param_1 + 0xd) | 2;
LAB_ram_40052e52:
  *(byte *)(param_1 + 0xd) = bVar4;
  iVar7 = iVar5 >> 2;
  if (iVar5 < 0) {
    iVar7 = -iVar7;
  }
  param_1[0xc] = iVar7;
  return;
}


/* NanoCore 1.12, address 0x40052ec8.
 * REA evidence: ev_7ae9dcffaf54c5467b068623cdd49a5a1b3a57ab2e620a30b34fb8ccdd7a3283
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052ec8(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if (0xb4 < param_4) {
    param_4 = (param_4 + -0xb4) * 0x10000 >> 0x10;
  }
  iVar1 = FUN_ram_4004b6b4((param_4 + 0x5a) * 0x10000 >> 0x10);
  iVar2 = FUN_ram_4004b6b4(param_4);
  FUN_ram_40052d8a(param_1,param_2,param_3,(iVar1 >> 5) + param_2,(iVar2 >> 5) + param_3,param_5);
  return;
}


/* NanoCore 1.12, address 0x40052f26.
 * REA evidence: ev_78e448001eb7e97fe124c63b6701fc27cea3655ba6d1d804f2f8d1f66babd17c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052f26(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                     int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar4 = 0x167;
  if ((param_4 < 0x168) && (iVar4 = param_4, param_4 < 0)) {
    iVar4 = 0;
  }
  iVar3 = 0x167;
  if ((param_5 < 0x168) && (iVar3 = param_5, param_5 < 0)) {
    iVar3 = 0;
  }
  sVar2 = (short)iVar4;
  sVar1 = (short)iVar3;
  sVar5 = sVar1 - sVar2;
  if (iVar3 < iVar4) {
    sVar5 = (sVar1 + 0x168) - sVar2;
  }
  *(short *)(param_1 + 0x22) = sVar5;
  *param_1 = FUN_ram_400527c8;
  param_1[4] = iVar4;
  param_1[5] = iVar3;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_ram_40052ec8(param_1 + 6,param_2,param_3,(int)sVar2,0xb3 < param_4);
  FUN_ram_40052ec8(param_1 + 0x14,param_2,param_3,(int)sVar1,param_5 < 0xb4);
  return;
}


/* NanoCore 1.12, address 0x40052fc0.
 * REA evidence: ev_f05a9c52085850c3965965fc6ffacf92364936e90eb113a00d14660a019f2c1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052fc0(undefined4 *param_1,int *param_2,int param_3,byte param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined2 *puVar15;
  int iVar16;
  int iVar17;
  ushort *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_40 [4];
  uint local_30;
  char cStack_2c;
  char cStack_28;
  char cStack_24;
  
  iVar16 = param_2[2];
  iVar11 = param_2[3];
  iVar7 = param_2[1];
  iVar13 = (iVar16 - *param_2) + 1;
  iVar5 = (iVar11 - iVar7) + 1;
  if (iVar13 < iVar5) {
    iVar5 = iVar13;
  }
  iVar13 = iVar5 >> 1;
  if (param_3 < iVar5 >> 1) {
    iVar13 = param_3;
  }
  iVar5 = 0;
  if (-1 < iVar13) {
    iVar5 = iVar13;
  }
  param_1[2] = *param_2;
  param_1[3] = iVar7;
  *param_1 = &LAB_ram_40052a54;
  param_1[4] = iVar16;
  param_1[5] = iVar11;
  param_1[6] = iVar5;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe | param_4 & 1;
  *(undefined1 *)(param_1 + 1) = 2;
  if (iVar13 < 1) {
    param_1[8] = 0;
    return;
  }
  FUN_ram_4005a8c4(0x30080ddc);
  puVar9 = &DAT_ram_30080ce0;
  iVar7 = 0;
  do {
    if (*(int *)(puVar9 + 0x11c) == iVar5) {
      iVar11 = iVar7 * 0x1c;
      *(int *)(&DAT_ram_30080df8 + iVar11) = *(int *)(&DAT_ram_30080df8 + iVar11) + 1;
      iVar16 = 1;
      if (0xf < iVar13) {
        iVar16 = iVar5 >> 4;
      }
      iVar16 = *(int *)(&DAT_ram_30080df4 + iVar11) + iVar16;
      if (1000 < iVar16) {
        iVar16 = 1000;
      }
      *(int *)(&DAT_ram_30080df4 + iVar7 * 0x1c) = iVar16;
      param_1[8] = &DAT_ram_30080de4 + iVar7 * 0x1c;
      goto LAB_ram_400530be;
    }
    iVar7 = iVar7 + 1;
    puVar9 = puVar9 + 0x1c;
  } while (iVar7 != 4);
  piVar14 = (int *)&DAT_ram_30080de4;
  piVar4 = (int *)0x0;
  do {
    piVar6 = piVar4;
    if (((piVar14[5] == 0) && (piVar6 = piVar14, piVar4 != (int *)0x0)) &&
       (piVar6 = piVar4, piVar14[4] < piVar4[4])) {
      piVar6 = piVar14;
    }
    piVar14 = piVar14 + 7;
    piVar4 = piVar6;
  } while (piVar14 != (int *)0x30080e54);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)FUN_ram_4005a960(0x1c);
    iVar7 = -1;
  }
  else {
    piVar6[5] = piVar6[5] + 1;
    iVar7 = 1;
    if (0xf < iVar13) {
      iVar7 = iVar5 >> 4;
    }
    if (1000 < iVar7) {
      iVar7 = 1000;
    }
  }
  piVar6[4] = iVar7;
  iVar7 = *piVar6;
  param_1[8] = piVar6;
  piVar6[6] = iVar5;
  if (iVar7 != 0) {
    FUN_ram_4005a988();
  }
  iVar7 = iVar5 + 1;
  uVar19 = iVar5 * 4;
  puVar9 = (undefined1 *)FUN_ram_4005a952(iVar7 * 6);
  piVar6[3] = (int)(puVar9 + iVar5 * 2 + 2);
  *piVar6 = (int)puVar9;
  piVar6[1] = (int)puVar9;
  piVar6[2] = (int)(puVar9 + uVar19 + 4);
  if (iVar13 == 1) {
    *puVar9 = 0xb4;
    puVar15 = (undefined2 *)piVar6[3];
    *puVar15 = 0;
    puVar15[1] = 1;
    *(undefined2 *)piVar6[2] = 0;
  }
  else {
    iVar16 = FUN_ram_4005a960(iVar7 * 0x10);
    local_40[0] = (int)uVar19 >> 2;
    iVar12 = iVar16 + iVar7 * 8;
    iVar10 = iVar5 * -4 + 1;
    local_30 = 0;
    iVar13 = 0;
    iVar23 = 0;
    iVar7 = 0;
    iVar11 = 0;
    while( true ) {
      if (iVar10 < 1) {
        iVar10 = iVar10 + iVar23 * 2 + 3;
      }
      else {
        iVar10 = iVar10 + (iVar23 - uVar19) * 2 + 5;
        uVar19 = uVar19 - 1;
      }
      iVar23 = iVar23 + 1;
      if ((int)uVar19 < iVar23) break;
      local_40[iVar7] = (int)uVar19 >> 2;
      (&local_30)[iVar7] = uVar19 & 3;
      iVar7 = iVar7 + 1;
      if (iVar7 == 4) {
        iVar22 = piVar6[1];
        iVar17 = iVar11 * 4;
        pcVar1 = (char *)(iVar22 + iVar11);
        iVar7 = iVar11 + 1;
        if (local_40[0] == local_40[3]) {
          *(int *)(iVar16 + iVar11 * 4) = local_40[0];
          *(int *)(iVar12 + iVar11 * 4) = iVar13;
          *(char *)(iVar22 + iVar11) = (char)local_30 + cStack_2c + cStack_28 + cStack_24;
          *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
          iVar22 = iVar7;
        }
        else {
          iVar20 = iVar17 + 4;
          iVar21 = local_40[0] + -1;
          iVar22 = iVar11 + 2;
          if (local_40[0] == local_40[1]) {
            *(int *)(iVar16 + iVar17) = local_40[0];
            *(int *)(iVar12 + iVar17) = iVar13;
            if (local_40[0] == local_40[2]) {
              *pcVar1 = (char)local_30 + cStack_2c + cStack_28;
              *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
              *(int *)(iVar16 + iVar20) = iVar21;
              iVar11 = piVar6[1];
              *(int *)(iVar12 + iVar20) = iVar13;
              cVar8 = cStack_24 + '\f';
            }
            else {
              *pcVar1 = (char)local_30 + cStack_2c;
              *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
              *(int *)(iVar16 + iVar20) = iVar21;
              iVar11 = piVar6[1];
              *(int *)(iVar12 + iVar20) = iVar13;
              cVar8 = cStack_24 + cStack_28 + '\b';
            }
          }
          else {
            *(int *)(iVar16 + iVar17) = local_40[0];
            *(int *)(iVar12 + iVar17) = iVar13;
            *pcVar1 = (char)local_30;
            *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
            iVar11 = piVar6[1];
            *(int *)(iVar16 + iVar20) = iVar21;
            *(int *)(iVar12 + iVar20) = iVar13;
            cVar8 = cStack_28 + cStack_2c + '\x04' + cStack_24;
          }
          *(char *)(iVar11 + iVar7) = cVar8;
          *(char *)(piVar6[1] + iVar7) = *(char *)(piVar6[1] + iVar7) << 4;
        }
        iVar13 = iVar13 + 1;
        iVar7 = 0;
        iVar11 = iVar22;
      }
    }
    iVar7 = iVar11 + 0x3fffffff;
    iVar13 = iVar5 * 0x2d3 >> 10;
    if ((iVar13 != *(int *)(iVar16 + iVar7 * 4)) || (iVar13 != *(int *)(iVar12 + iVar7 * 4))) {
      uVar19 = iVar5 * 0x2d3 & 0x3ff;
      if (uVar19 < 0x201) {
        cVar8 = (char)(uVar19 * uVar19 >> 0xf);
      }
      else {
        cVar8 = '\x0f' - (char)((int)((0x400 - uVar19) * (0x400 - uVar19)) >> 0xf);
      }
      iVar5 = iVar7 * 4 + 4;
      *(int *)(iVar16 + iVar5) = iVar13;
      *(int *)(iVar12 + iVar5) = iVar13;
      *(char *)(piVar6[1] + iVar11) = cVar8;
      *(char *)(piVar6[1] + iVar11) = *(char *)(piVar6[1] + iVar11) << 4;
      iVar11 = iVar11 + 1;
    }
    iVar5 = iVar11;
    for (iVar7 = iVar11 + -2; -1 < iVar7; iVar7 = iVar7 + -1) {
      *(undefined4 *)(iVar16 + iVar5 * 4) = *(undefined4 *)(iVar12 + iVar7 * 4);
      *(undefined4 *)(iVar12 + iVar5 * 4) = *(undefined4 *)(iVar16 + iVar7 * 4);
      *(undefined1 *)(piVar6[1] + iVar5) = *(undefined1 *)(piVar6[1] + iVar7);
      iVar5 = iVar5 + 1;
    }
    iVar5 = 0;
    if (0 < iVar11) {
      iVar5 = iVar11 + -1;
    }
    puVar15 = (undefined2 *)piVar6[3];
    iVar7 = 0;
    *puVar15 = 0;
    iVar13 = 0;
    while (iVar13 < iVar11 + iVar5) {
      iVar10 = piVar6[2];
      uVar2 = *(undefined4 *)(iVar16 + iVar13 * 4);
      puVar15[iVar7] = (short)iVar13;
      puVar18 = (ushort *)(iVar10 + iVar7 * 2);
      *(short *)(iVar10 + iVar7 * 2) = (short)uVar2;
      while ((iVar7 == *(int *)(iVar12 + iVar13 * 4) && (iVar13 != iVar11 + iVar5))) {
        uVar19 = *(uint *)(iVar16 + iVar13 * 4);
        uVar3 = (uint)*puVar18;
        iVar13 = iVar13 + 1;
        if ((int)uVar3 < (int)uVar19) {
          uVar19 = uVar3;
        }
        *puVar18 = (ushort)uVar19;
      }
      iVar7 = iVar7 + 1;
    }
    FUN_ram_4005a988();
  }
LAB_ram_400530be:
  FUN_ram_4005a8da(0x30080ddc);
  return;
}


