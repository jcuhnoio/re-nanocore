/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4002f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002f016.
 * REA evidence: ev_6c020704adf13f65d203827dbe4f2fab022b738f5b15ce5dc33f557bcdcf7b66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002f016(int param_1,undefined4 param_2,int param_3,undefined1 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_ram_4002ef20();
  if (iVar1 == 0) {
    if ((_DAT_ram_3007c4e8 == 0) || (_DAT_ram_3007c188 != 0)) goto LAB_ram_4002f048;
    DAT_ram_3007c190 = (undefined1)param_2;
    _DAT_ram_3007c198 = -1;
    _DAT_ram_3007c18c = param_1;
    DAT_ram_3007c191 = param_4;
    _DAT_ram_3007c194 = param_5;
    if (param_3 != 0) {
      FUN_ram_4000304c(0x3007c1a8,param_3,0x340);
    }
    FUN_ram_40040dd4(0x3007c19c);
    _DAT_ram_3007c188 = 1;
    FUN_ram_4002ef4e();
    uVar2 = FUN_ram_40004352(0x5dc);
    iVar3 = FUN_ram_40040df4(0x3007c19c,uVar2);
    iVar1 = _DAT_ram_3007c198;
    if (iVar3 != 0) {
      iVar3 = FUN_ram_4002ef20();
      iVar1 = _DAT_ram_3007c198;
      if (iVar3 == 0) {
        if (_DAT_ram_3007c188 == 1) {
          _DAT_ram_3007c188 = 0;
        }
        else {
          if (_DAT_ram_3007c188 == 3) {
            FUN_ram_4002ef4e();
            goto LAB_ram_4002f0e4;
          }
          if (_DAT_ram_3007c188 != 0) {
            FUN_ram_4002ef4e();
            goto LAB_ram_4002f0b8;
          }
        }
LAB_ram_4002f048:
        FUN_ram_4002ef4e();
        goto LAB_ram_4002f04c;
      }
LAB_ram_4002f0b8:
      FUN_ram_40040df4(0x3007c19c,0xffffffff);
      iVar1 = _DAT_ram_3007c198;
    }
LAB_ram_4002f0e4:
    if (((iVar1 == 0) && (param_1 == 1)) && (*(code **)(_DAT_ram_3007c4e8 + 0x1c) != (code *)0x0)) {
      iVar1 = (**(code **)(_DAT_ram_3007c4e8 + 0x1c))(param_2,0x3007c1a8);
    }
    iVar3 = FUN_ram_4002ef20();
    if (iVar3 == 0) {
      _DAT_ram_3007c188 = 0;
      FUN_ram_4002ef4e();
    }
  }
  else {
LAB_ram_4002f04c:
    iVar1 = -1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4002f130.
 * REA evidence: ev_512e99686bdbaecb737813f2edd0368b622bea6b3737fd050d3e25bf3d810970
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002f130(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    return true;
  }
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 8))(0);
    return iVar1 != 0;
  }
  return false;
}


/* NanoCore 1.11, address 0x4002f152.
 * REA evidence: ev_af9d5f371df1be35d01a2a3febabef6d345cd1aaff39ae5856bf098a87ea7911
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002f152(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x18) == 0) != (*(int *)(param_1 + 0x1c) == 0)) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x14) == 0) == (*(int *)(param_1 + 0x18) != 0)) {
    if (DAT_ram_3007c518 == '\0') {
      iVar1 = FUN_ram_4000492c(0x3007c4ec,s_prsjb_ram_400972b0,1);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      DAT_ram_3007c518 = '\x01';
    }
    iVar1 = FUN_ram_4002ef20();
    if (iVar1 == 0) {
      if (_DAT_ram_3007c188 == 0) {
        _DAT_ram_3007c4e8 = param_1;
        FUN_ram_4002ef4e();
        return 0;
      }
      FUN_ram_4002ef4e();
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4002f1e2.
 * REA evidence: ev_6ade7b33d339c40fc590c8d8e64e588f92c4e367addab8fee81fe80ec70bee5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002f1e2(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a3;
  
  iVar1 = FUN_ram_4002ef20();
  iVar2 = _DAT_ram_3007c4e8;
  if (iVar1 != 0) {
    return;
  }
  if (_DAT_ram_3007c188 == 1) {
    _DAT_ram_3007c188 = 2;
    iVar1 = -1;
    FUN_ram_4002ef4e();
    if (iVar2 != 0) {
      if (_DAT_ram_3007c18c == 0) {
        if (((_DAT_ram_3007c194 == _DAT_ram_3007b368) &&
            (iVar1 = (**(code **)(iVar2 + 0x10))
                               (DAT_ram_3007c190,0x3007c1a8,DAT_ram_3007c191,extraout_a3,
                                _DAT_ram_3007c194,*(code **)(iVar2 + 0x10)), iVar1 != 0)) &&
           (*(code **)(iVar2 + 0x20) != (code *)0x0)) {
          (**(code **)(iVar2 + 0x20))();
        }
      }
      else if (*(code **)(iVar2 + 0x18) == (code *)0x0) {
        iVar1 = (**(code **)(iVar2 + 0x14))(DAT_ram_3007c190);
      }
      else {
        iVar1 = (**(code **)(iVar2 + 0x18))(0x3007c1a8);
      }
    }
    iVar2 = FUN_ram_4002ef20();
    _DAT_ram_3007c198 = iVar1;
    if (iVar2 == 0) {
      _DAT_ram_3007c188 = 3;
      FUN_ram_4002ef4e();
    }
    FUN_ram_40040e86(0x3007c19c);
    return;
  }
  FUN_ram_4002ef4e();
  return;
}


/* NanoCore 1.11, address 0x4002f2ac.
 * REA evidence: ev_bf26cfc36bb3d728ff315d3c0bac786dc69c5916690ddb1a500e6228b4decbc9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002f2ac(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4,int *param_5,
                undefined1 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char local_68 [16];
  char acStack_58 [8];
  char local_50 [28];
  
  if (param_6 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_1 != (byte *)0x0) && (uVar8 = (uint)param_1[1], (uVar8 - 1 & 0xff) < 0x10)) {
    uVar9 = uVar8 + 2;
    uVar10 = 8;
    iVar2 = (**(code **)(param_1 + 0xc))();
    if (iVar2 != 0) {
      if (uVar9 == 0) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = 0x3e / uVar9;
      }
    }
    if ((param_2 != (byte *)0x0) && (1 < param_3)) {
      iVar2 = FUN_ram_4002f130(param_1);
      uVar6 = 6;
      if (iVar2 != 0) {
        iVar2 = FUN_ram_4003221a();
        if (iVar2 == 0) {
          uVar12 = (uint)*param_2;
          uVar7 = (uint)*param_1;
          if (uVar7 <= uVar12) {
            uVar6 = 3;
            goto LAB_ram_4002f2dc;
          }
          if (uVar9 == 0) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = 0xfe / uVar9;
          }
          uVar5 = (uint)param_2[1];
          if (uVar4 < uVar5) {
            uVar5 = uVar4 & 0xff;
          }
          if (uVar10 < uVar5) {
            uVar5 = uVar10;
          }
          uVar5 = uVar5 & 0xff;
          if (uVar7 < uVar12 + uVar5) {
            uVar5 = uVar7 - uVar12 & 0xff;
          }
          DAT_ram_3007b385 = (undefined1)uVar5;
          iVar2 = 0x3007b388;
          uVar10 = 0;
          iVar11 = 2;
          DAT_ram_3007b384 = *param_2;
          while( true ) {
            if (uVar5 == uVar10) {
              if (param_4 != (undefined4 *)0x0) {
                *param_4 = &DAT_ram_3007b384;
              }
              if (param_5 != (int *)0x0) {
                *param_5 = iVar11;
              }
              *param_6 = 0;
              return 1;
            }
            memset(acStack_58,0,0x18);
            iVar3 = FUN_ram_400323d6(uVar10 + uVar12 & 0xff,acStack_58);
            cVar1 = acStack_58[0];
            if (iVar3 != 0) break;
            *(char *)(iVar2 + -2) = (char)(uVar10 + uVar12);
            *(bool *)(iVar2 + -1) = acStack_58[0] != '\0';
            uVar7 = 0;
            do {
              local_68[uVar7] = ' ';
              uVar7 = uVar7 + 1;
            } while ((uVar7 & 0xff) < uVar8);
            if (cVar1 != '\0') {
              iVar3 = 0;
LAB_ram_4002f40a:
              if (local_50[iVar3] == ' ') goto LAB_ram_4002f404;
              if (local_50[iVar3] != '\0') {
                for (uVar7 = 0;
                    (((uVar7 & 0xff) < uVar8 && (0x10U - iVar3 != uVar7)) &&
                    (local_50[uVar7 + iVar3] != '\0')); uVar7 = uVar7 + 1) {
                  local_68[uVar7] = local_50[uVar7 + iVar3];
                }
                goto LAB_ram_4002f444;
              }
            }
LAB_ram_4002f400:
            uVar7 = 0;
            do {
              if (s_preset_ram_40094f54[uVar7] == '\0') break;
              local_68[uVar7] = s_preset_ram_40094f54[uVar7];
              uVar7 = uVar7 + 1;
            } while ((uVar7 & 0xff) < uVar8);
LAB_ram_4002f444:
            FUN_ram_4000304c(iVar2,local_68,uVar8);
            iVar11 = iVar11 + uVar9;
            uVar10 = uVar10 + 1 & 0xff;
            iVar2 = iVar2 + uVar9;
          }
        }
        uVar6 = 4;
      }
      goto LAB_ram_4002f2dc;
    }
  }
  uVar6 = 1;
LAB_ram_4002f2dc:
  *param_6 = uVar6;
  return 1;
LAB_ram_4002f404:
  iVar3 = iVar3 + 1;
  if (iVar3 == 0x10) goto LAB_ram_4002f400;
  goto LAB_ram_4002f40a;
}


/* NanoCore 1.11, address 0x4002f47e.
 * REA evidence: ev_b630d014efa1e87767ca203d3ad3199ffccef5c7aac340e6a8740d4ee517fac2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002f47e(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4,int *param_5,
                undefined1 *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint auStack_34 [4];
  
  auStack_34[0] = 0;
  if (param_6 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 < 4)) {
    *param_6 = 1;
  }
  else {
    iVar6 = FUN_ram_4002f130();
    if (iVar6 == 0) {
      uVar8 = 6;
    }
    else {
      iVar6 = FUN_ram_4003221a();
      if (iVar6 == 0) {
        bVar1 = *param_2;
        if (bVar1 < *param_1) {
          bVar2 = param_2[2];
          bVar3 = (byte)*(ushort *)(param_2 + 1);
          bVar4 = param_2[3];
          uVar9 = (uint)*(ushort *)(param_2 + 1);
          uVar5 = 0xfb;
          iVar6 = (**(code **)(param_1 + 0xc))();
          if (iVar6 != 0) {
            uVar5 = 0x3b;
          }
          iVar6 = FUN_ram_4002ef66(param_1,bVar1,auStack_34,param_6);
          if (iVar6 != 0) {
            return 1;
          }
          if (uVar9 <= auStack_34[0]) {
            uVar7 = auStack_34[0] - uVar9;
            if ((uint)bVar4 < auStack_34[0] - uVar9) {
              uVar7 = (uint)bVar4;
            }
            if (uVar7 <= uVar5) {
              uVar5 = uVar7;
            }
            DAT_ram_3007bc8b = (undefined1)auStack_34[0];
            DAT_ram_3007bc8c = (undefined1)(auStack_34[0] >> 8);
            DAT_ram_3007bc88 = bVar1;
            DAT_ram_3007bc89 = bVar3;
            DAT_ram_3007bc8a = bVar2;
            if (uVar5 != 0) {
              FUN_ram_4000304c(0x3007bc8d,uVar9 + 0x3007b484,uVar5);
            }
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = &DAT_ram_3007bc88;
            }
            if (param_5 != (int *)0x0) {
              *param_5 = uVar5 + 5;
            }
            *param_6 = 0;
            return 1;
          }
        }
        uVar8 = 3;
      }
      else {
        uVar8 = 4;
      }
    }
    *param_6 = uVar8;
  }
  return 1;
}


/* NanoCore 1.11, address 0x4002f598.
 * REA evidence: ev_a8942fad4dee45dfd51a600bba33c8049633d5ebf76d3df66e7748a3db597774
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002f598(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 *param_4,
                uint *param_5,undefined1 *param_6)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int aiStack_24 [2];
  
  aiStack_24[0] = 0;
  if (param_6 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    *param_6 = 1;
  }
  else {
    iVar1 = FUN_ram_4002f130();
    uVar2 = 6;
    if (iVar1 != 0) {
      iVar1 = FUN_ram_4003221a();
      if (iVar1 == 0) {
        uVar2 = *param_2;
        iVar1 = FUN_ram_4002ef66(param_1,uVar2,aiStack_24,param_6);
        if (iVar1 != 0) {
          return 1;
        }
        uVar3 = aiStack_24[0] + 3;
        if (uVar3 < 0x404) {
          DAT_ram_3007b885 = (undefined1)aiStack_24[0];
          DAT_ram_3007b886 = (undefined1)((uint)aiStack_24[0] >> 8);
          DAT_ram_3007b884 = uVar2;
          if (aiStack_24[0] != 0) {
            FUN_ram_4000304c(0x3007b887,0x3007b484);
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_3007b884;
          }
          if (param_5 != (uint *)0x0) {
            *param_5 = uVar3;
          }
          *param_6 = 0;
          return 1;
        }
        uVar2 = 3;
      }
      else {
        uVar2 = 4;
      }
    }
    *param_6 = uVar2;
  }
  return 1;
}


/* NanoCore 1.11, address 0x4002f65a.
 * REA evidence: ev_d1e60d57e6d1d4afdf51b887f6d00bb528fa2acc14ef8995cc78ad472121e0a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4002f65a(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
                undefined1 *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  
  if (param_6 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 < 4)) {
    *param_6 = 1;
    return 1;
  }
  iVar6 = (**(code **)(param_1 + 8))();
  uVar8 = 6;
  if (iVar6 == 0) goto LAB_ram_4002f6c4;
  bVar1 = *param_2;
  if (bVar1 < *param_1) {
    bVar2 = param_2[3];
    bVar3 = param_2[2];
    sVar5 = *(short *)(param_2 + 2);
    if ((ushort)(sVar5 - 1U) < 0x400) {
      bVar4 = param_2[1];
      iVar6 = FUN_ram_400042ea();
      if ((DAT_ram_3007b36c != '\0') &&
         (uVar9 = iVar6 - _DAT_ram_3007b37c, uVar7 = FUN_ram_40004352(10000), uVar7 < uVar9)) {
        DAT_ram_3007b36c = '\0';
      }
      if (param_1[4] == 0) {
        if (((DAT_ram_3007b36c != '\0') && (DAT_ram_3007b36d == bVar1)) &&
           (DAT_ram_3007b36f == (bVar4 & 1))) goto LAB_ram_4002f73e;
      }
      else if (((DAT_ram_3007b36c != '\0') && (DAT_ram_3007b36d == bVar1)) &&
              (DAT_ram_3007b36e == bVar4)) {
LAB_ram_4002f73e:
        if (_DAT_ram_3007b372 == sVar5) goto LAB_ram_4002f746;
      }
      DAT_ram_3007b36c = '\x01';
      DAT_ram_3007b370 = param_1[2] != 0 && (param_1[2] & bVar4) != 0;
      _DAT_ram_3007b374 = 0;
      _DAT_ram_3007b378 = 0;
      DAT_ram_3007b35c = 0;
      DAT_ram_3007b36d = bVar1;
      DAT_ram_3007b36e = bVar4;
      DAT_ram_3007b36f = bVar4 & 1;
      _DAT_ram_3007b372 = sVar5;
LAB_ram_4002f746:
      DAT_ram_3007af58 = bVar1;
      DAT_ram_3007af59 = bVar4;
      DAT_ram_3007af5a = bVar3;
      DAT_ram_3007af5b = bVar2;
      _DAT_ram_3007b37c = iVar6;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = &DAT_ram_3007af58;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 4;
      }
      *param_6 = 0;
      return 1;
    }
  }
  uVar8 = 3;
LAB_ram_4002f6c4:
  *param_6 = uVar8;
  return 1;
}


/* NanoCore 1.11, address 0x4002f670.
 * REA evidence: ev_d1cdbe8cb2d3fcc364e2a497984a00eeef58549479186f7e775c020c494b1201
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4002f670(byte *param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5,undefined1 *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  
  iVar6 = (**(code **)(param_1 + 8))();
  uVar8 = 6;
  if (iVar6 == 0) goto LAB_ram_4002f6c4;
  bVar1 = *param_2;
  if (bVar1 < *param_1) {
    bVar2 = param_2[3];
    bVar3 = param_2[2];
    sVar5 = *(short *)(param_2 + 2);
    if ((ushort)(sVar5 - 1U) < 0x400) {
      bVar4 = param_2[1];
      iVar6 = FUN_ram_400042ea();
      if ((DAT_ram_3007b36c != '\0') &&
         (uVar9 = iVar6 - _DAT_ram_3007b37c, uVar7 = FUN_ram_40004352(10000), uVar7 < uVar9)) {
        DAT_ram_3007b36c = '\0';
      }
      if (param_1[4] == 0) {
        if (((DAT_ram_3007b36c != '\0') && (DAT_ram_3007b36d == bVar1)) &&
           (DAT_ram_3007b36f == (bVar4 & 1))) goto LAB_ram_4002f73e;
      }
      else if (((DAT_ram_3007b36c != '\0') && (DAT_ram_3007b36d == bVar1)) &&
              (DAT_ram_3007b36e == bVar4)) {
LAB_ram_4002f73e:
        if (_DAT_ram_3007b372 == sVar5) goto LAB_ram_4002f746;
      }
      DAT_ram_3007b36c = '\x01';
      DAT_ram_3007b370 = param_1[2] != 0 && (param_1[2] & bVar4) != 0;
      _DAT_ram_3007b374 = 0;
      _DAT_ram_3007b378 = 0;
      DAT_ram_3007b35c = 0;
      DAT_ram_3007b36d = bVar1;
      DAT_ram_3007b36e = bVar4;
      DAT_ram_3007b36f = bVar4 & 1;
      _DAT_ram_3007b372 = sVar5;
LAB_ram_4002f746:
      DAT_ram_3007af58 = bVar1;
      DAT_ram_3007af59 = bVar4;
      DAT_ram_3007af5a = bVar3;
      DAT_ram_3007af5b = bVar2;
      _DAT_ram_3007b37c = iVar6;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = &DAT_ram_3007af58;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 4;
      }
      *param_6 = 0;
      return 1;
    }
  }
  uVar8 = 3;
LAB_ram_4002f6c4:
  *param_6 = uVar8;
  return 1;
}


/* NanoCore 1.11, address 0x4002f7d0.
 * REA evidence: ev_a6bd11726b13a25a0cffbcfb8de64f0025ed1c0f308d67ce9c2d424b1a43ac58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4002f7d0(undefined4 param_1,ushort *param_2,uint param_3,undefined4 *param_4,
                undefined4 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_6 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (ushort *)0x0) || (param_3 < 3)) {
    *param_6 = 1;
    return 1;
  }
  if (DAT_ram_3007b36c == '\0') {
    *param_6 = 2;
    return 1;
  }
  _DAT_ram_3007b37c = FUN_ram_400042ea();
  uVar1 = *(undefined1 *)((int)param_2 + 1);
  uVar2 = *param_2;
  iVar4 = param_3 - 2;
  uVar3 = (uint)*param_2;
  if ((uint)_DAT_ram_3007b372 < uVar3 + iVar4) {
LAB_ram_4002f852:
    *param_6 = 3;
  }
  else {
    uVar5 = (uint)_DAT_ram_3007b374;
    if (uVar5 == uVar3) {
      FUN_ram_4000304c(uVar3 + 0x3007af5c);
      _DAT_ram_3007b378 = FUN_ram_40007554(_DAT_ram_3007b378,param_2 + 1,iVar4);
      _DAT_ram_3007b374 = (short)iVar4 + _DAT_ram_3007b374;
    }
    else if (((uVar5 <= uVar3) || (uVar5 < uVar3 + iVar4)) ||
            (iVar4 = FUN_ram_40002fec(uVar3 + 0x3007af5c), iVar4 != 0)) goto LAB_ram_4002f852;
    _DAT_ram_3007af5a = _DAT_ram_3007b374;
    DAT_ram_3007af58 = (char)uVar2;
    DAT_ram_3007af59 = uVar1;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_3007af58;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 4;
    }
    *param_6 = 0;
  }
  return 1;
}


/* NanoCore 1.11, address 0x4002f7e8.
 * REA evidence: ev_c65393d6d8a94bf292c4afc4dc33a47d884016e01cbdbe00466d984e529c8026
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4002f7e8(undefined1 param_1,ushort *param_2,int param_3,undefined4 *param_4,
                undefined4 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (DAT_ram_3007b36c == '\0') {
    *param_6 = param_1;
    return 1;
  }
  _DAT_ram_3007b37c = FUN_ram_400042ea();
  uVar1 = *(undefined1 *)((int)param_2 + 1);
  uVar2 = *param_2;
  param_3 = param_3 + -2;
  uVar3 = (uint)*param_2;
  if ((uint)_DAT_ram_3007b372 < uVar3 + param_3) {
LAB_ram_4002f852:
    *param_6 = 3;
  }
  else {
    uVar5 = (uint)_DAT_ram_3007b374;
    if (uVar5 == uVar3) {
      FUN_ram_4000304c(uVar3 + 0x3007af5c);
      _DAT_ram_3007b378 = FUN_ram_40007554(_DAT_ram_3007b378,param_2 + 1,param_3);
      _DAT_ram_3007b374 = (short)param_3 + _DAT_ram_3007b374;
    }
    else if (((uVar5 <= uVar3) || (uVar5 < uVar3 + param_3)) ||
            (iVar4 = FUN_ram_40002fec(uVar3 + 0x3007af5c), iVar4 != 0)) goto LAB_ram_4002f852;
    _DAT_ram_3007af5a = _DAT_ram_3007b374;
    DAT_ram_3007af58 = (char)uVar2;
    DAT_ram_3007af59 = uVar1;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_3007af58;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 4;
    }
    *param_6 = 0;
  }
  return 1;
}


/* NanoCore 1.11, address 0x4002f8e2.
 * REA evidence: ev_b5f4ccfea07ef6dedc40b871987e6c78b49663b0f36704a456c263e8b9de0db9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4002f8e2(int param_1,short *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
                undefined1 *param_6)

{
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar7;
  undefined1 *puVar8;
  char cStack_6b5;
  undefined4 uStack_6b4;
  undefined1 auStack_6b0 [832];
  undefined1 auStack_370 [840];
  undefined1 uVar6;
  
  uStack_6b4 = 0;
  if (param_6 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (short *)0x0) || (param_3 < 6)) {
    *param_6 = 1;
    return 1;
  }
  sVar3 = *param_2;
  iVar4 = *(int *)(param_2 + 1);
  uVar5 = (undefined1)sVar3;
  uVar6 = (undefined1)((ushort)sVar3 >> 8);
  if (DAT_ram_3007b36c == '\0') {
    if (((DAT_ram_3007b35c == '\0') || (_DAT_ram_3007b360 != sVar3)) || (_DAT_ram_3007b364 != iVar4)
       ) {
      *param_6 = 2;
      return 1;
    }
    DAT_ram_3007af58 = DAT_ram_3007b35d;
    DAT_ram_3007af59 = DAT_ram_3007b35f;
    if (*(char *)(param_1 + 3) != '\0') {
      DAT_ram_3007af59 = DAT_ram_3007b35e;
    }
    DAT_ram_3007af5a = uVar5;
    DAT_ram_3007af5b = uVar6;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_3007af58;
    }
    goto LAB_ram_4002f9e2;
  }
  if ((_DAT_ram_3007b372 == sVar3) && (_DAT_ram_3007b374 == _DAT_ram_3007b372)) {
    if (_DAT_ram_3007b378 != iVar4) {
      *param_6 = 5;
      DAT_ram_3007b36c = 0;
      return 1;
    }
    iVar7 = FUN_ram_40015274(auStack_6b0,0x3007af5c,sVar3);
    cVar2 = DAT_ram_3007b36f;
    cVar1 = DAT_ram_3007b36d;
    if (iVar7 == 0) {
      if (DAT_ram_3007b370 == '\0') {
        puVar8 = auStack_6b0;
LAB_ram_4002fa56:
        iVar7 = FUN_ram_4002f016(0,cVar1,puVar8,cVar2,_DAT_ram_3007b368);
        if (iVar7 == 0) {
LAB_ram_4002face:
          DAT_ram_3007b35c = '\x01';
          DAT_ram_3007b35e = DAT_ram_3007b36e;
          DAT_ram_3007b35f = cVar2;
          DAT_ram_3007b35d = cVar1;
          DAT_ram_3007b36c = '\0';
          DAT_ram_3007af59 = cVar2;
          if (*(char *)(param_1 + 3) != '\0') {
            DAT_ram_3007af59 = DAT_ram_3007b36e;
          }
          DAT_ram_3007af58 = cVar1;
          DAT_ram_3007af5a = uVar5;
          DAT_ram_3007af5b = uVar6;
          _DAT_ram_3007b360 = sVar3;
          _DAT_ram_3007b364 = iVar4;
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_3007af58;
          }
LAB_ram_4002f9e2:
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = 4;
          }
          *param_6 = 0;
          return 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x28) == 0) goto LAB_ram_4002fa54;
        FUN_ram_4000304c(auStack_370,auStack_6b0,0x340);
        if (*(code **)(param_1 + 0x24) != (code *)0x0) {
          (**(code **)(param_1 + 0x24))(auStack_370);
        }
        iVar7 = FUN_ram_400150e4(auStack_370,0x3007bd88,0x400,&uStack_6b4);
        if ((iVar7 == 0) &&
           (iVar7 = (**(code **)(param_1 + 0x28))(cVar1,0x3007bd88,uStack_6b4), iVar7 == 0)) {
          if (cVar2 != '\0') {
LAB_ram_4002fa54:
            puVar8 = auStack_370;
            goto LAB_ram_4002fa56;
          }
          cStack_6b5 = '\0';
          if (((*(code **)(param_1 + 0x2c) != (code *)0x0) &&
              (iVar7 = (**(code **)(param_1 + 0x2c))(&cStack_6b5), iVar7 == 0)) &&
             (cStack_6b5 == cVar1)) goto LAB_ram_4002fa54;
          goto LAB_ram_4002face;
        }
      }
      uVar5 = 4;
      goto LAB_ram_4002fa12;
    }
  }
  uVar5 = 1;
LAB_ram_4002fa12:
  *param_6 = uVar5;
  DAT_ram_3007b36c = 0;
  return 1;
}


/* NanoCore 1.11, address 0x4002fb30.
 * REA evidence: ev_8f276d1caa97628dd6537a4765a3cf61e40adf422941ee0ae987ff7b6d58357c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002fb30(void)

{
  undefined4 *in_a3;
  undefined4 *in_a4;
  undefined1 *in_a5;
  
  DAT_ram_3007b36c = 0;
  DAT_ram_3007b35c = 0;
  _DAT_ram_3007b368 = _DAT_ram_3007b368 + 1;
  DAT_ram_3007af58 = 0;
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = &DAT_ram_3007af58;
  }
  if (in_a4 != (undefined4 *)0x0) {
    *in_a4 = 1;
  }
  if (in_a5 != (undefined1 *)0x0) {
    *in_a5 = 0;
  }
  return 1;
}


/* NanoCore 1.11, address 0x4002fb72.
 * REA evidence: ev_9c0d87f34a16b34bf47c0d331d59ca143f4c8cb7a30f3b1b9b60fdd7be17e7fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002fb72(byte *param_1,byte *param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                undefined1 *param_6)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (param_6 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 != (byte *)0x0) && (param_3 == 1)) {
    iVar2 = (**(code **)(param_1 + 8))();
    uVar3 = 6;
    if (iVar2 != 0) {
      bVar1 = *param_2;
      if (bVar1 < *param_1) {
        iVar2 = FUN_ram_4002f016(1,bVar1,0,0,0);
        if (iVar2 == 0) {
          DAT_ram_3007af58 = bVar1;
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_3007af58;
          }
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = 1;
          }
          *param_6 = 0;
          return 1;
        }
        uVar3 = 4;
      }
      else {
        uVar3 = 3;
      }
    }
    *param_6 = uVar3;
    return 1;
  }
  *param_6 = 1;
  return 1;
}


/* NanoCore 1.11, address 0x4002fb86.
 * REA evidence: ev_ce78381921746add6c430abbe8c0601087611a13cd5922cb763d22e3a1b236b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002fb86(byte *param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5,undefined1 *param_6)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = (**(code **)(param_1 + 8))();
  uVar3 = 6;
  if (iVar2 != 0) {
    bVar1 = *param_2;
    if (bVar1 < *param_1) {
      iVar2 = FUN_ram_4002f016(1,bVar1,0,0,0);
      if (iVar2 == 0) {
        DAT_ram_3007af58 = bVar1;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = &DAT_ram_3007af58;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 1;
        }
        *param_6 = 0;
        return 1;
      }
      uVar3 = 4;
    }
    else {
      uVar3 = 3;
    }
  }
  *param_6 = uVar3;
  return 1;
}


/* NanoCore 1.11, address 0x4002fc02.
 * REA evidence: ev_7f9469ab22c7a779475465c9963ff6840a9a9c85ec746b137f9ab33a2f62c717
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002fc02(byte *param_1,byte *param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                undefined1 *param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  
  if (param_6 == (undefined1 *)0x0) {
    return 0;
  }
  if (((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (param_3 == 2)) {
    bVar1 = param_2[1];
    if (bVar1 == 0) {
      uVar4 = 1;
    }
    else {
      bVar2 = *param_2;
      if ((bVar2 < *param_1) && (bVar1 <= (byte)(*param_1 - bVar2))) {
        iVar3 = FUN_ram_40032582(bVar2,bVar1);
        if (iVar3 != 0) {
          uVar4 = 3;
          if (iVar3 != -7) {
            uVar4 = 4;
          }
          *param_6 = uVar4;
          return 1;
        }
        DAT_ram_3007b380 = bVar2;
        DAT_ram_3007b381 = bVar1;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = &DAT_ram_3007b380;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 2;
        }
        *param_6 = 0;
        return 1;
      }
      uVar4 = 3;
    }
    *param_6 = uVar4;
    return 1;
  }
  *param_6 = 1;
  return 1;
}


/* NanoCore 1.11, address 0x4002fcaa.
 * REA evidence: ev_215c523771681eecf871ceb105b79a77bfcca9d16db62374f4b406ae1746fcda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002fcaa(int param_1,int param_2)

{
  if (param_1 != param_2) {
    return (uint)~(param_1 - param_2) >> 0x1f;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002fcbc.
 * REA evidence: ev_a4fbd5ccf7f816902b550599a20a09ee6db1f6c94370e011d3e4abe792bdd84f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002fcbc(uint param_1)

{
  if (param_1 - 0x1000 < 0xf001) {
    return (param_1 & 0xfff) == 0;
  }
  return false;
}


/* NanoCore 1.11, address 0x4002fcd4.
 * REA evidence: ev_c25a28dfe84c718937f6470bcfc986d146075fa281bb5ed11729cbd668ed7392
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002fcd4(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != (int *)0x0) && (bVar1 = false, *param_1 == 0x50525354)) {
    bVar1 = (short)param_1[1] == 1;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4002fd18.
 * REA evidence: ev_5e76b317750554a11d121a5d0a2bd84686135a4c6781e86e857d63a4b82d593a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002fd18(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (bVar1 = false, (*(byte *)(param_1 + 6) & 1) != 0)) {
    bVar1 = *(ushort *)(param_1 + 4) - 1 < 0x400;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4002fd3c.
 * REA evidence: ev_7198445ebda1b2b48036588e00307a840ca481604f2ff08bcd9068c1f10903dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002fd3c(void)

{
  int iVar1;
  
  if ((_DAT_ram_3007c560 == 0) &&
     (iVar1 = FUN_ram_4000492c(0x3007c534,s_prstr_ram_400972b8,1), iVar1 == 0)) {
    _DAT_ram_3007c560 = 1;
  }
  return -(uint)(_DAT_ram_3007c560 == 0);
}


/* NanoCore 1.11, address 0x4002fd7c.
 * REA evidence: ev_524a178232358e2f07a03ca46dc785792286d5a1adcf33d7344fe509c6614fcb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002fd7c(void)

{
  int iVar1;
  
  if ((_DAT_ram_3007c560 == 0) && (iVar1 = FUN_ram_4002fd3c(), iVar1 != 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_400049c6(0x3007c534,0xffffffff);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4002fdb0.
 * REA evidence: ev_b738ac1301933848775252b32609304c350e89609dba513405e4bc680895e62e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002fdb0(void)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_40006c6e();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006c3a(), iVar1 < 1)) {
    return 0;
  }
  if (_DAT_ram_3007c528 != 0) {
    aiStack_14[0] = 0;
    uVar2 = FUN_ram_40006f3e(aiStack_14);
    if (((uVar2 != 0) && (uVar2 <= _DAT_ram_3007c528)) &&
       (_DAT_ram_3007c528 < uVar2 + aiStack_14[0] * 0x40)) {
      return _DAT_ram_3007c528;
    }
  }
  _DAT_ram_3007c528 = FUN_ram_40006eee(s_presets_ram_400972c0);
  return _DAT_ram_3007c528;
}


/* NanoCore 1.11, address 0x4002fe0a.
 * REA evidence: ev_91e63137924b7806f8b9e7df7343eafa9b8b5e0b2bac376ab7119d07ce9a1a71
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fe0a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4002fdb0();
  uVar2 = 0xfffffffc;
  if ((iVar1 != 0) && (0xabfff < *(uint *)(iVar1 + 0x38))) {
    iVar1 = FUN_ram_40006dbe(iVar1 + 0x1c);
    uVar2 = 0xfffffffe;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) == 0x1000)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4002fe3c.
 * REA evidence: ev_67ab1c98baa10a60a4fe2cebddf96b229bac6d00116c39473f47d81193d882c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fe3c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4002fdb0();
  if ((iVar1 != 0) && (param_2 != 0)) {
    if (((uint)(param_1 + param_3) <= *(uint *)(iVar1 + 0x38)) &&
       ((iVar2 = FUN_ram_40006dbe(iVar1 + 0x1c), iVar2 != 0 &&
        (*(code **)(iVar2 + 0x28) != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x4002fe7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(iVar2 + 0x28))(*(int *)(iVar1 + 0x34) + param_1,param_2,param_3);
      return uVar3;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4002fe8c.
 * REA evidence: ev_f334d9d2dfd6dbf41de76e41e68b029a6b5407524d72133b87e39461de2263f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fe8c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4002fdb0();
  if ((iVar1 != 0) && (param_2 != 0)) {
    if (((uint)(param_1 + param_3) <= *(uint *)(iVar1 + 0x38)) &&
       ((iVar2 = FUN_ram_40006dbe(iVar1 + 0x1c), iVar2 != 0 &&
        (*(code **)(iVar2 + 0x2c) != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x4002fece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(iVar2 + 0x2c))(*(int *)(iVar1 + 0x34) + param_1,param_2,param_3);
      return uVar3;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4002fedc.
 * REA evidence: ev_cebfc33b44ab643578e559dd28bbd2db93f8073223eaf1a1a9173bbd3419e8de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002fedc(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined4 uVar4;
  
  memset(param_2 + 4,0,0xc);
  *param_2 = 0x54;
  param_2[1] = 0x58;
  param_2[2] = 0x4f;
  param_2[3] = 0x4b;
  uVar1 = *(undefined1 *)(param_1 + 10);
  uVar3 = *(undefined3 *)(param_1 + 8);
  uVar2 = *(undefined1 *)(param_1 + 0xb);
  param_2[4] = (char)*(undefined2 *)(param_1 + 8);
  param_2[5] = (char)((uint3)uVar3 >> 8);
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  uVar1 = *(undefined1 *)(param_1 + 0x2a);
  uVar3 = *(undefined3 *)(param_1 + 0x28);
  uVar2 = *(undefined1 *)(param_1 + 0x2b);
  param_2[8] = (char)*(undefined2 *)(param_1 + 0x28);
  param_2[10] = uVar1;
  param_2[9] = (char)((uint3)uVar3 >> 8);
  param_2[0xb] = uVar2;
  uVar4 = FUN_ram_40007554(0,param_2,0xc);
  param_2[0xc] = (char)uVar4;
  param_2[0xd] = (char)((uint)uVar4 >> 8);
  param_2[0xe] = (char)((uint)uVar4 >> 0x10);
  param_2[0xf] = (char)((uint)uVar4 >> 0x18);
  return;
}


/* NanoCore 1.11, address 0x4002ff9e.
 * REA evidence: ev_cf8ee5b79b33495a17fca34cc809c4a6e99b8af9cc44a6a0887b2f9f0fea20d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ff9e(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                     undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  iVar1 = _DAT_ram_3007c530;
  iVar3 = iVar1;
  if (((_DAT_ram_3007c524 != 0) && (iVar3 = _DAT_ram_3007c524, _DAT_ram_3007c530 != 0)) &&
     (iVar4 = FUN_ram_4002fcaa(_DAT_ram_3007c524,_DAT_ram_3007c530), iVar4 == 0)) {
    iVar3 = iVar1;
  }
  iVar4 = _DAT_ram_3007cb80;
  if ((_DAT_ram_3007cb80 != 0) && (iVar5 = FUN_ram_4002fcaa(_DAT_ram_3007cb80,iVar3), iVar5 != 0)) {
    iVar3 = iVar4;
  }
  iVar3 = iVar3 + 1;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  memset(param_1,0,0x650);
  param_1[3] = 0x58;
  param_1[6] = 0x40;
  uVar7 = (undefined1)((uint)iVar3 >> 8);
  param_1[9] = uVar7;
  uVar8 = (undefined1)((uint)iVar3 >> 0x10);
  param_1[10] = uVar8;
  param_1[0xd] = (char)((uint)param_2 >> 8);
  param_1[0xe] = (char)((uint)param_2 >> 0x10);
  param_1[0x11] = (char)((uint)iVar1 >> 8);
  param_1[0x12] = (char)((uint)iVar1 >> 0x10);
  uVar6 = _DAT_ram_3007c52c;
  param_1[0x14] = (char)_DAT_ram_3007c52c;
  param_1[0x15] = (char)((uint)uVar6 >> 8);
  param_1[0x17] = (char)((uint)uVar6 >> 0x18);
  param_1[0xc] = (char)param_2;
  param_1[0x10] = (char)iVar1;
  param_1[0x18] = (char)param_3;
  param_1[0x19] = (char)((uint)param_3 >> 8);
  param_1[1] = 0x53;
  param_1[2] = 0x54;
  param_1[0x16] = (char)((uint)uVar6 >> 0x10);
  param_1[0x1a] = (char)((uint)param_3 >> 0x10);
  *param_1 = 0x50;
  param_1[4] = 1;
  param_1[8] = (char)iVar3;
  uVar2 = (undefined1)((uint)iVar3 >> 0x18);
  param_1[0xb] = uVar2;
  param_1[0xf] = (char)((uint)param_2 >> 0x18);
  param_1[0x13] = (char)((uint)iVar1 >> 0x18);
  param_1[0x1b] = (char)((uint)param_3 >> 0x18);
  uVar6 = FUN_ram_40007554(0,param_6,0x1000);
  param_1[0x1d] = (char)((uint)uVar6 >> 8);
  param_1[0x1e] = (char)((uint)uVar6 >> 0x10);
  param_1[0x1c] = (char)uVar6;
  param_1[0x24] = 0x14;
  param_1[0x1f] = (char)((uint)uVar6 >> 0x18);
  param_1[0x25] = 6;
  param_1[0x26] = param_4;
  param_1[0x27] = param_5;
  FUN_ram_4000304c(param_1 + 0x3c,0x3007c568,0x614);
  param_1[0x3e] = 0x52;
  param_1[0x3d] = 0x53;
  param_1[0x3c] = 0x54;
  param_1[0x3f] = 0x50;
  param_1[0x40] = 1;
  param_1[0x41] = 0;
  if (0x3f < CONCAT11(param_1[0x43],param_1[0x42])) {
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  }
  param_1[0x4c] = 0x32;
  param_1[0x4d] = 0x32;
  param_1[0x4e] = 0x54;
  param_1[0x44] = (char)iVar3;
  param_1[0x46] = uVar8;
  param_1[0x47] = uVar2;
  param_1[0x45] = uVar7;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4f] = 0x50;
  return;
}


