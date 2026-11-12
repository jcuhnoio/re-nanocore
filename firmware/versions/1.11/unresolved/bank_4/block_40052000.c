/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40052000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40052580.
 * REA evidence: ev_4ecc5699abade4991f5a0c53d40fc7b03aab0a214a74f785af139ea8ba95b4ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052580(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_ram_4000504c(param_1,0,param_2);
  return;
}


/* NanoCore 1.11, address 0x40052588.
 * REA evidence: ev_f432cc51dcd38206f5a1548ab408091c8a8eb2fbdbcc2232adf736374795a103
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40052588(uint param_1,uint param_2)

{
  if (param_2 < 0xfd) {
    if (2 < param_2) {
      return param_1 * param_2 * 0x10102 >> 0x18;
    }
    param_1 = 0;
  }
  return param_1;
}


/* NanoCore 1.11, address 0x400525ae.
 * REA evidence: ev_97ccfe9df609329ac8d9c2ccd4d097d2cf5cbd70bd9d422acea1ddb66d94d491
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_ram_400525ae(int param_1,int param_2,int param_3,int param_4,int param_5)

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
      goto LAB_ram_400527b0;
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
    goto LAB_ram_400527b6;
  }
  if ((bVar1 & 1) == 0) {
    iVar7 = *(int *)(param_5 + 0x24);
    uVar4 = uVar4 * iVar7;
    if ((int)((uint)(0 < iVar7) + ((int)uVar4 >> 10)) < iVar9) goto LAB_ram_40052678;
    if (iVar9 + param_4 < (int)uVar4 >> 10) goto LAB_ram_40052694;
    iVar5 = (int)(uVar4 * 0x100) >> 0x12;
    iVar11 = (int)((uVar4 + iVar7) * 0x100) >> 0x12;
    uVar8 = (uVar4 & 0x3ff) >> 2;
    iVar10 = iVar5 - iVar9;
    iVar6 = iVar10;
    if (iVar5 == iVar11) {
LAB_ram_40052958:
      if ((-1 < iVar6) && (iVar6 < param_4)) {
        uVar4 = ((uVar4 + iVar7 & 0x3ff) >> 2) + uVar8 >> 1;
        if ((bVar1 & 2) != 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_40052588(*(undefined1 *)(param_1 + iVar6),uVar4);
        *(undefined1 *)(param_1 + iVar6) = uVar3;
      }
      if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
        iVar6 = iVar11 - iVar9;
        if (param_4 <= iVar6) {
          return 0;
        }
        goto joined_r0x40052990;
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
            uVar3 = FUN_ram_40052588(*(undefined1 *)(param_1 + iVar10),uVar4);
            *(undefined1 *)(param_1 + iVar10) = uVar3;
          }
          if ((-1 < iVar6) && (iVar6 < param_4)) {
            iVar9 = 0xff - iVar9;
            uVar4 = ((-*(int *)(param_5 + 0x24) * iVar9 >> 10) * iVar9 & 0x1ffffU) >> 9;
            if ((*(byte *)(param_5 + 0x34) & 2) == 0) {
              uVar4 = ~uVar4 & 0xff;
            }
            uVar3 = FUN_ram_40052588(*(undefined1 *)(param_1 + iVar6),uVar4);
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
          goto LAB_ram_400527b6;
        }
        uVar8 = 0xff;
        goto LAB_ram_40052958;
      }
      iVar6 = (int)((0xff - uVar8) * *(int *)(param_5 + 0x28)) >> 10;
      if ((-1 < iVar10) && (iVar10 < param_4)) {
        uVar4 = ((0xff - uVar8) * iVar6 & 0x1ffff) >> 9;
        if ((bVar1 & 2) == 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_40052588(*(undefined1 *)(param_1 + iVar10),uVar4);
        *(undefined1 *)(param_1 + iVar10) = uVar3;
      }
      iVar9 = iVar10 + 1;
      if ((-1 < iVar9) && (iVar9 < param_4)) {
        iVar6 = 0xff - iVar6;
        uVar4 = ((iVar6 * *(int *)(param_5 + 0x24) >> 10) * iVar6 & 0x1ffffU) >> 9;
        if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_40052588(*(undefined1 *)(param_1 + iVar9),uVar4);
        *(undefined1 *)(param_1 + iVar9) = uVar3;
      }
      if ((*(byte *)(param_5 + 0x34) & 2) != 0) goto joined_r0x40052940;
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
      if (iVar7 < (int)uVar4) goto LAB_ram_40052678;
    }
    else if ((int)uVar4 < iVar7) {
LAB_ram_40052678:
      return (uint)((bVar1 & 2) != 0);
    }
    iVar7 = (iVar9 + param_4) * iVar6 >> 10;
    if (iVar6 < 1) {
      if ((int)uVar4 < iVar7) goto LAB_ram_40052694;
      uVar4 = uVar4 + 1;
    }
    else if (iVar7 < (int)uVar4) {
LAB_ram_40052694:
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
        uVar3 = FUN_ram_40052588(*(undefined1 *)(param_1 + iVar10),uVar4);
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
          uVar3 = FUN_ram_40052588(*(undefined1 *)(param_1 + param_2),uVar4);
          *(undefined1 *)(param_1 + param_2) = uVar3;
        }
        break;
      }
      if ((-1 < param_2) && (param_2 < param_4)) {
        uVar4 = iVar7 - (*(int *)(param_5 + 0x30) >> 1) & 0xff;
        if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_ram_40052588(*(undefined1 *)(param_1 + param_2),uVar4);
        *(undefined1 *)(param_1 + param_2) = uVar3;
      }
      param_2 = param_2 + 1;
      iVar7 = iVar7 - *(int *)(param_5 + 0x30);
    } while (param_2 < param_4);
    if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
joined_r0x40052940:
      iVar6 = iVar10;
      if (param_4 < iVar10) {
        return 0;
      }
joined_r0x40052990:
      if (iVar6 < 0) {
        return 2;
      }
      goto LAB_ram_400527b6;
    }
    param_2 = param_2 + 1;
    if (param_2 < 0) {
      return 0;
    }
    if (param_4 < param_2) {
      return 2;
    }
  }
LAB_ram_400527b0:
  iVar6 = param_4 - param_2;
  param_1 = param_2 + param_1;
LAB_ram_400527b6:
  FUN_ram_40052580(param_1,iVar6);
  return 2;
}


/* NanoCore 1.11, address 0x40052996.
 * REA evidence: ev_3a3246e469a30dfdd4a73908cd4eb79a34c637175f7f714dec1eb565bef696d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40052996(int param_1,int param_2,int param_3,int param_4,int param_5)

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
        if ((iVar1 == 0) || (iVar3 <= iVar1)) goto LAB_ram_40052bb2;
        if (param_3 < iVar5) {
          return 1;
        }
        iVar5 = (iVar4 + 1) * *(int *)(param_5 + 0x3c) >> 10;
        if (iVar3 - 1U < 0x5a) {
          if (iVar5 < 0) {
LAB_ram_40052a1a:
            iVar5 = 0;
          }
        }
        else if ((iVar3 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40052a1a;
        if (iVar1 - 1U < 0x5a) {
          if (iVar5 < 0) {
LAB_ram_40052a3e:
            iVar5 = 0;
          }
        }
        else if ((iVar1 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40052a3e;
        iVar2 = (iVar5 + ((iVar4 * *(int *)(param_5 + 0x74) >> 10) - iVar5 >> 1)) - iVar2;
        if (param_4 < iVar2) {
          iVar2 = param_4;
        }
        iVar1 = 1;
        if ((0 < iVar2) &&
           (iVar1 = FUN_ram_400525ae(param_1,param_2,param_3,iVar2,param_5 + 0x18), iVar1 == 0)) {
          FUN_ram_40052580(param_1,iVar2,param_3);
        }
        if (param_4 < iVar2) {
          iVar2 = param_4;
        }
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        param_5 = param_5 + 0x50;
        goto LAB_ram_40052aa2;
      }
    }
    else if (iVar3 != 0) {
LAB_ram_40052bb2:
      iVar2 = 3;
      if (iVar5 <= param_3) goto LAB_ram_40052bb8;
      goto LAB_ram_40052b8c;
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
LAB_ram_40052afc:
          iVar5 = 0;
        }
      }
      else if ((iVar3 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40052afc;
      if (iVar1 - 0x10fU < 0x59) {
        if (iVar5 < 0) {
LAB_ram_40052b20:
          iVar5 = 0;
        }
      }
      else if ((iVar1 - 0x5bU < 0xb3) && (0 < iVar5)) goto LAB_ram_40052b20;
      iVar2 = (((iVar4 * *(int *)(param_5 + 0x74) >> 10) - iVar5 >> 1) + iVar5) - iVar2;
      if (param_4 <= iVar2) {
        iVar2 = param_4;
      }
      iVar1 = 1;
      if ((0 < iVar2) &&
         (iVar1 = FUN_ram_400525ae(param_1,param_2,param_3,iVar2,param_5 + 0x50), iVar1 == 0)) {
        FUN_ram_40052580(param_1,iVar2,param_3);
      }
      if (param_4 < iVar2) {
        iVar2 = param_4;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      param_5 = param_5 + 0x18;
LAB_ram_40052aa2:
      iVar3 = FUN_ram_400525ae(param_1 + iVar2,iVar2 + param_2,param_3,param_4 - iVar2,param_5);
      if (iVar3 == 0) {
        FUN_ram_40052580(param_1 + iVar2,param_4 - iVar2);
      }
      if (iVar1 != iVar3) {
        return 2;
      }
      return iVar3;
    }
    iVar2 = 3;
    if (param_3 < iVar5) {
LAB_ram_40052bb8:
      iVar2 = FUN_ram_400525ae(param_1,param_2,param_3,param_4,param_5 + 0x18);
    }
  }
LAB_ram_40052b8c:
  iVar3 = *(int *)(param_5 + 0x14);
  iVar4 = *(int *)(param_5 + 0xc);
  iVar1 = iVar2;
  if (iVar3 == 0xb4) {
    iVar3 = 3;
    if (param_3 < iVar4) goto joined_r0x40052bfe;
  }
  else {
    if (iVar3 != 0) {
      if (iVar3 < 0xb4) {
        if (param_3 < iVar4) {
LAB_ram_40052c12:
          iVar3 = 3;
          goto joined_r0x40052bfe;
        }
      }
      else if (iVar4 <= param_3) goto LAB_ram_40052c12;
      iVar3 = FUN_ram_400525ae(param_1,param_2,param_3,param_4,param_5 + 0x50);
      iVar1 = iVar3;
      if (iVar2 == 0) {
        return 0;
      }
      goto joined_r0x40052bfe;
    }
    iVar3 = 3;
    if (iVar4 <= param_3) goto joined_r0x40052bfe;
  }
  iVar3 = 1;
joined_r0x40052bfe:
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


/* NanoCore 1.11, address 0x40052e72.
 * REA evidence: ev_e2114848ec016881226ebd742e0ac1701fda4ed2f0017cc8655f4fcee3b09287
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052e72(void)

{
  FUN_ram_4005aa6e(0x30080d5c);
  return;
}


/* NanoCore 1.11, address 0x40052e7e.
 * REA evidence: ev_295332b7ec640170909b5227ae7e553b5d53b8aa30b21ac5ffc40f6ff35b53b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40052e7e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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


/* NanoCore 1.11, address 0x40052ed2.
 * REA evidence: ev_3375b19731cb0d4a94e397b0a250d7b8adbf115a5f8d780cc13772b8b1508ae0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052ed2(int param_1)

{
  int iVar1;
  
  FUN_ram_4005aa92(0x30080d5c);
  if ((*(char *)(param_1 + 4) == '\x02') && (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x10) < 0) {
      FUN_ram_4005ab56(*(undefined4 *)(iVar1 + 4));
      FUN_ram_4005ab56(*(undefined4 *)(param_1 + 0x20));
    }
    else {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    }
  }
  FUN_ram_4005aaa8(0x30080d5c);
  return;
}


/* NanoCore 1.11, address 0x40052f20.
 * REA evidence: ev_335c600cfb0b3dd3955943b79d06a4bc0d2ce041dff22a8d2b2811079c8abb3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052f20(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)&DAT_ram_30080d64;
  do {
    if (*piVar1 != 0) {
      FUN_ram_4005ab56();
    }
    piVar2 = piVar1 + 7;
    FUN_ram_40052580(piVar1,0x1c);
    piVar1 = piVar2;
  } while (piVar2 != (int *)0x30080dd4);
  return;
}


/* NanoCore 1.11, address 0x40052f58.
 * REA evidence: ev_46a694b557b1767fed5626c0e456470b848966c2a895d3b0ad2e893951ee65f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40052f58(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                     int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_ram_40052580(param_1,0x38);
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
  *param_1 = FUN_ram_400525ae;
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
  if ((*(byte *)(param_1 + 6) & 3) == 0) goto LAB_ram_4005301e;
  if (bVar4 != 1) {
    if (bVar4 == 2) {
      if (iVar5 < 1) {
LAB_ram_4005301e:
        bVar4 = *(byte *)(param_1 + 0xd) & 0xfd;
        goto LAB_ram_40053020;
      }
    }
    else if (0 < iVar5) goto LAB_ram_4005301e;
  }
  bVar4 = *(byte *)(param_1 + 0xd) | 2;
LAB_ram_40053020:
  *(byte *)(param_1 + 0xd) = bVar4;
  iVar7 = iVar5 >> 2;
  if (iVar5 < 0) {
    iVar7 = -iVar7;
  }
  param_1[0xc] = iVar7;
  return;
}


