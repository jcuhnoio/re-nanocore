/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40030000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40030020.
 * REA evidence: ev_87fa2c951226bc7d75b4f8e151ad1a21fe0ae0bd92c198de9f9b282a783c469c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40030020(int param_1)

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


/* NanoCore 1.12, address 0x40030042.
 * REA evidence: ev_adfd314977b2c382bbae0fe070480d40cf4ae3978a5fbec4e9928c48a55a214a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40030042(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x18) == 0) != (*(int *)(param_1 + 0x1c) == 0)) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x14) == 0) == (*(int *)(param_1 + 0x18) != 0)) {
    if (DAT_ram_3007b560 == '\0') {
      iVar1 = FUN_ram_40004988(0x3007b534,s_prsjb_ram_4009c558,1);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      DAT_ram_3007b560 = '\x01';
    }
    iVar1 = FUN_ram_4002fe10();
    if (iVar1 == 0) {
      if (_DAT_ram_3007b1d0 == 0) {
        _DAT_ram_3007b530 = param_1;
        FUN_ram_4002fe3e();
        return 0;
      }
      FUN_ram_4002fe3e();
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x400300d2.
 * REA evidence: ev_c308d6f0f789cf7a423f02f0f5c6eac18fa5e46de5e090144067833f9701789d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400300d2(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a3;
  
  iVar1 = FUN_ram_4002fe10();
  iVar2 = _DAT_ram_3007b530;
  if (iVar1 != 0) {
    return;
  }
  if (_DAT_ram_3007b1d0 == 1) {
    _DAT_ram_3007b1d0 = 2;
    iVar1 = -1;
    FUN_ram_4002fe3e();
    if (iVar2 != 0) {
      if (_DAT_ram_3007b1d4 == 0) {
        if (((_DAT_ram_3007b1dc == _DAT_ram_3007a3b0) &&
            (iVar1 = (**(code **)(iVar2 + 0x10))
                               (DAT_ram_3007b1d8,0x3007b1f0,DAT_ram_3007b1d9,extraout_a3,
                                _DAT_ram_3007b1dc,*(code **)(iVar2 + 0x10)), iVar1 != 0)) &&
           (*(code **)(iVar2 + 0x20) != (code *)0x0)) {
          (**(code **)(iVar2 + 0x20))();
        }
      }
      else if (*(code **)(iVar2 + 0x18) == (code *)0x0) {
        iVar1 = (**(code **)(iVar2 + 0x14))(DAT_ram_3007b1d8);
      }
      else {
        iVar1 = (**(code **)(iVar2 + 0x18))(0x3007b1f0);
      }
    }
    iVar2 = FUN_ram_4002fe10();
    _DAT_ram_3007b1e0 = iVar1;
    if (iVar2 == 0) {
      _DAT_ram_3007b1d0 = 3;
      FUN_ram_4002fe3e();
    }
    FUN_ram_40040f48(0x3007b1e4);
    return;
  }
  FUN_ram_4002fe3e();
  return;
}


/* NanoCore 1.12, address 0x4003019c.
 * REA evidence: ev_31b5a8b1a964845aff43514b3f0f8f366e5287d84c0112c8c5fbb763fad2d99e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4003019c(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4,int *param_5,
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
      iVar2 = FUN_ram_40030020(param_1);
      uVar6 = 6;
      if (iVar2 != 0) {
        iVar2 = FUN_ram_4003310a();
        if (iVar2 == 0) {
          uVar12 = (uint)*param_2;
          uVar7 = (uint)*param_1;
          if (uVar7 <= uVar12) {
            uVar6 = 3;
            goto LAB_ram_400301cc;
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
          DAT_ram_3007a3cd = (undefined1)uVar5;
          iVar2 = 0x3007a3d0;
          uVar10 = 0;
          iVar11 = 2;
          DAT_ram_3007a3cc = *param_2;
          while( true ) {
            if (uVar5 == uVar10) {
              if (param_4 != (undefined4 *)0x0) {
                *param_4 = &DAT_ram_3007a3cc;
              }
              if (param_5 != (int *)0x0) {
                *param_5 = iVar11;
              }
              *param_6 = 0;
              return 1;
            }
            memset(acStack_58,0,0x18);
            iVar3 = FUN_ram_400332c6(uVar10 + uVar12 & 0xff,acStack_58);
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
LAB_ram_400302fa:
              if (local_50[iVar3] == ' ') goto LAB_ram_400302f4;
              if (local_50[iVar3] != '\0') {
                for (uVar7 = 0;
                    (((uVar7 & 0xff) < uVar8 && (0x10U - iVar3 != uVar7)) &&
                    (local_50[uVar7 + iVar3] != '\0')); uVar7 = uVar7 + 1) {
                  local_68[uVar7] = local_50[uVar7 + iVar3];
                }
                goto LAB_ram_40030334;
              }
            }
LAB_ram_400302f0:
            uVar7 = 0;
            do {
              if (s_preset_ram_40099ffc[uVar7] == '\0') break;
              local_68[uVar7] = s_preset_ram_40099ffc[uVar7];
              uVar7 = uVar7 + 1;
            } while ((uVar7 & 0xff) < uVar8);
LAB_ram_40030334:
            FUN_ram_4000303c(iVar2,local_68,uVar8);
            iVar11 = iVar11 + uVar9;
            uVar10 = uVar10 + 1 & 0xff;
            iVar2 = iVar2 + uVar9;
          }
        }
        uVar6 = 4;
      }
      goto LAB_ram_400301cc;
    }
  }
  uVar6 = 1;
LAB_ram_400301cc:
  *param_6 = uVar6;
  return 1;
LAB_ram_400302f4:
  iVar3 = iVar3 + 1;
  if (iVar3 == 0x10) goto LAB_ram_400302f0;
  goto LAB_ram_400302fa;
}


/* NanoCore 1.12, address 0x4003036e.
 * REA evidence: ev_9734a159ccd942d79325001fa8dad839bf04794a4049554a9cf3262347b6a853
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4003036e(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4,int *param_5,
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
    iVar6 = FUN_ram_40030020();
    if (iVar6 == 0) {
      uVar8 = 6;
    }
    else {
      iVar6 = FUN_ram_4003310a();
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
          iVar6 = FUN_ram_4002fe56(param_1,bVar1,auStack_34,param_6);
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
            DAT_ram_3007acd3 = (undefined1)auStack_34[0];
            DAT_ram_3007acd4 = (undefined1)(auStack_34[0] >> 8);
            DAT_ram_3007acd0 = bVar1;
            DAT_ram_3007acd1 = bVar3;
            DAT_ram_3007acd2 = bVar2;
            if (uVar5 != 0) {
              FUN_ram_4000303c(0x3007acd5,uVar9 + 0x3007a4cc,uVar5);
            }
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = &DAT_ram_3007acd0;
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


/* NanoCore 1.12, address 0x40030488.
 * REA evidence: ev_c013b609efe4b0ddd41553efbd86c5b4f916018431f91960463c33cb6f84b3e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40030488(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 *param_4,
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
    iVar1 = FUN_ram_40030020();
    uVar2 = 6;
    if (iVar1 != 0) {
      iVar1 = FUN_ram_4003310a();
      if (iVar1 == 0) {
        uVar2 = *param_2;
        iVar1 = FUN_ram_4002fe56(param_1,uVar2,aiStack_24,param_6);
        if (iVar1 != 0) {
          return 1;
        }
        uVar3 = aiStack_24[0] + 3;
        if (uVar3 < 0x404) {
          DAT_ram_3007a8cd = (undefined1)aiStack_24[0];
          DAT_ram_3007a8ce = (undefined1)((uint)aiStack_24[0] >> 8);
          DAT_ram_3007a8cc = uVar2;
          if (aiStack_24[0] != 0) {
            FUN_ram_4000303c(0x3007a8cf,0x3007a4cc);
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_3007a8cc;
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


/* NanoCore 1.12, address 0x4003054a.
 * REA evidence: ev_b9897e721091a8b69e6a99d13f1082f389095dfd6b584763788f065f436f8fbd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4003054a(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
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
  if (iVar6 == 0) goto LAB_ram_400305b4;
  bVar1 = *param_2;
  if (bVar1 < *param_1) {
    bVar2 = param_2[3];
    bVar3 = param_2[2];
    sVar5 = *(short *)(param_2 + 2);
    if ((ushort)(sVar5 - 1U) < 0x400) {
      bVar4 = param_2[1];
      iVar6 = FUN_ram_40004346();
      if ((DAT_ram_3007a3b4 != '\0') &&
         (uVar9 = iVar6 - _DAT_ram_3007a3c4, uVar7 = FUN_ram_400043ae(10000), uVar7 < uVar9)) {
        DAT_ram_3007a3b4 = '\0';
      }
      if (param_1[4] == 0) {
        if (((DAT_ram_3007a3b4 != '\0') && (DAT_ram_3007a3b5 == bVar1)) &&
           (DAT_ram_3007a3b7 == (bVar4 & 1))) goto LAB_ram_4003062e;
      }
      else if (((DAT_ram_3007a3b4 != '\0') && (DAT_ram_3007a3b5 == bVar1)) &&
              (DAT_ram_3007a3b6 == bVar4)) {
LAB_ram_4003062e:
        if (_DAT_ram_3007a3ba == sVar5) goto LAB_ram_40030636;
      }
      DAT_ram_3007a3b4 = '\x01';
      DAT_ram_3007a3b8 = param_1[2] != 0 && (param_1[2] & bVar4) != 0;
      _DAT_ram_3007a3bc = 0;
      _DAT_ram_3007a3c0 = 0;
      DAT_ram_3007a3a4 = 0;
      DAT_ram_3007a3b5 = bVar1;
      DAT_ram_3007a3b6 = bVar4;
      DAT_ram_3007a3b7 = bVar4 & 1;
      _DAT_ram_3007a3ba = sVar5;
LAB_ram_40030636:
      DAT_ram_30079fa0 = bVar1;
      DAT_ram_30079fa1 = bVar4;
      DAT_ram_30079fa2 = bVar3;
      DAT_ram_30079fa3 = bVar2;
      _DAT_ram_3007a3c4 = iVar6;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = &DAT_ram_30079fa0;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 4;
      }
      *param_6 = 0;
      return 1;
    }
  }
  uVar8 = 3;
LAB_ram_400305b4:
  *param_6 = uVar8;
  return 1;
}


/* NanoCore 1.12, address 0x40030560.
 * REA evidence: ev_8221f5c3fab7cf6a18aee031bcdeb2ff65cc0aded94cd59293aac1f7bf2625b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40030560(byte *param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
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
  if (iVar6 == 0) goto LAB_ram_400305b4;
  bVar1 = *param_2;
  if (bVar1 < *param_1) {
    bVar2 = param_2[3];
    bVar3 = param_2[2];
    sVar5 = *(short *)(param_2 + 2);
    if ((ushort)(sVar5 - 1U) < 0x400) {
      bVar4 = param_2[1];
      iVar6 = FUN_ram_40004346();
      if ((DAT_ram_3007a3b4 != '\0') &&
         (uVar9 = iVar6 - _DAT_ram_3007a3c4, uVar7 = FUN_ram_400043ae(10000), uVar7 < uVar9)) {
        DAT_ram_3007a3b4 = '\0';
      }
      if (param_1[4] == 0) {
        if (((DAT_ram_3007a3b4 != '\0') && (DAT_ram_3007a3b5 == bVar1)) &&
           (DAT_ram_3007a3b7 == (bVar4 & 1))) goto LAB_ram_4003062e;
      }
      else if (((DAT_ram_3007a3b4 != '\0') && (DAT_ram_3007a3b5 == bVar1)) &&
              (DAT_ram_3007a3b6 == bVar4)) {
LAB_ram_4003062e:
        if (_DAT_ram_3007a3ba == sVar5) goto LAB_ram_40030636;
      }
      DAT_ram_3007a3b4 = '\x01';
      DAT_ram_3007a3b8 = param_1[2] != 0 && (param_1[2] & bVar4) != 0;
      _DAT_ram_3007a3bc = 0;
      _DAT_ram_3007a3c0 = 0;
      DAT_ram_3007a3a4 = 0;
      DAT_ram_3007a3b5 = bVar1;
      DAT_ram_3007a3b6 = bVar4;
      DAT_ram_3007a3b7 = bVar4 & 1;
      _DAT_ram_3007a3ba = sVar5;
LAB_ram_40030636:
      DAT_ram_30079fa0 = bVar1;
      DAT_ram_30079fa1 = bVar4;
      DAT_ram_30079fa2 = bVar3;
      DAT_ram_30079fa3 = bVar2;
      _DAT_ram_3007a3c4 = iVar6;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = &DAT_ram_30079fa0;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 4;
      }
      *param_6 = 0;
      return 1;
    }
  }
  uVar8 = 3;
LAB_ram_400305b4:
  *param_6 = uVar8;
  return 1;
}


/* NanoCore 1.12, address 0x400306c0.
 * REA evidence: ev_d0373a24c8f33ea4f7fa5344dad2eace8fbf02e791ceec8ca664dabea20e8ddd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_400306c0(undefined4 param_1,ushort *param_2,uint param_3,undefined4 *param_4,
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
  if (DAT_ram_3007a3b4 == '\0') {
    *param_6 = 2;
    return 1;
  }
  _DAT_ram_3007a3c4 = FUN_ram_40004346();
  uVar1 = *(undefined1 *)((int)param_2 + 1);
  uVar2 = *param_2;
  iVar4 = param_3 - 2;
  uVar3 = (uint)*param_2;
  if ((uint)_DAT_ram_3007a3ba < uVar3 + iVar4) {
LAB_ram_40030742:
    *param_6 = 3;
  }
  else {
    uVar5 = (uint)_DAT_ram_3007a3bc;
    if (uVar5 == uVar3) {
      FUN_ram_4000303c(uVar3 + 0x30079fa4);
      _DAT_ram_3007a3c0 = FUN_ram_40007450(_DAT_ram_3007a3c0,param_2 + 1,iVar4);
      _DAT_ram_3007a3bc = (short)iVar4 + _DAT_ram_3007a3bc;
    }
    else if (((uVar5 <= uVar3) || (uVar5 < uVar3 + iVar4)) ||
            (iVar4 = FUN_ram_40002fdc(uVar3 + 0x30079fa4), iVar4 != 0)) goto LAB_ram_40030742;
    _DAT_ram_30079fa2 = _DAT_ram_3007a3bc;
    DAT_ram_30079fa0 = (char)uVar2;
    DAT_ram_30079fa1 = uVar1;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_30079fa0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 4;
    }
    *param_6 = 0;
  }
  return 1;
}


/* NanoCore 1.12, address 0x400306d8.
 * REA evidence: ev_691515abdccf0c90e56500fcc8e9db1c28f39383ce47769f87be69110282b87f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_400306d8(undefined1 param_1,ushort *param_2,int param_3,undefined4 *param_4,
                undefined4 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (DAT_ram_3007a3b4 == '\0') {
    *param_6 = param_1;
    return 1;
  }
  _DAT_ram_3007a3c4 = FUN_ram_40004346();
  uVar1 = *(undefined1 *)((int)param_2 + 1);
  uVar2 = *param_2;
  param_3 = param_3 + -2;
  uVar3 = (uint)*param_2;
  if ((uint)_DAT_ram_3007a3ba < uVar3 + param_3) {
LAB_ram_40030742:
    *param_6 = 3;
  }
  else {
    uVar5 = (uint)_DAT_ram_3007a3bc;
    if (uVar5 == uVar3) {
      FUN_ram_4000303c(uVar3 + 0x30079fa4);
      _DAT_ram_3007a3c0 = FUN_ram_40007450(_DAT_ram_3007a3c0,param_2 + 1,param_3);
      _DAT_ram_3007a3bc = (short)param_3 + _DAT_ram_3007a3bc;
    }
    else if (((uVar5 <= uVar3) || (uVar5 < uVar3 + param_3)) ||
            (iVar4 = FUN_ram_40002fdc(uVar3 + 0x30079fa4), iVar4 != 0)) goto LAB_ram_40030742;
    _DAT_ram_30079fa2 = _DAT_ram_3007a3bc;
    DAT_ram_30079fa0 = (char)uVar2;
    DAT_ram_30079fa1 = uVar1;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_30079fa0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 4;
    }
    *param_6 = 0;
  }
  return 1;
}


/* NanoCore 1.12, address 0x400307d2.
 * REA evidence: ev_b9edabe1da63d1a6a60edfc7c75bb6e112553b791695e8f774099720071deb57
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_400307d2(int param_1,short *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
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
  if (DAT_ram_3007a3b4 == '\0') {
    if (((DAT_ram_3007a3a4 == '\0') || (_DAT_ram_3007a3a8 != sVar3)) || (_DAT_ram_3007a3ac != iVar4)
       ) {
      *param_6 = 2;
      return 1;
    }
    DAT_ram_30079fa0 = DAT_ram_3007a3a5;
    DAT_ram_30079fa1 = DAT_ram_3007a3a7;
    if (*(char *)(param_1 + 3) != '\0') {
      DAT_ram_30079fa1 = DAT_ram_3007a3a6;
    }
    DAT_ram_30079fa2 = uVar5;
    DAT_ram_30079fa3 = uVar6;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_30079fa0;
    }
    goto LAB_ram_400308d2;
  }
  if ((_DAT_ram_3007a3ba == sVar3) && (_DAT_ram_3007a3bc == _DAT_ram_3007a3ba)) {
    if (_DAT_ram_3007a3c0 != iVar4) {
      *param_6 = 5;
      DAT_ram_3007a3b4 = 0;
      return 1;
    }
    iVar7 = FUN_ram_40015656(auStack_6b0,0x30079fa4,sVar3);
    cVar2 = DAT_ram_3007a3b7;
    cVar1 = DAT_ram_3007a3b5;
    if (iVar7 == 0) {
      if (DAT_ram_3007a3b8 == '\0') {
        puVar8 = auStack_6b0;
LAB_ram_40030946:
        iVar7 = FUN_ram_4002ff06(0,cVar1,puVar8,cVar2,_DAT_ram_3007a3b0);
        if (iVar7 == 0) {
LAB_ram_400309be:
          DAT_ram_3007a3a4 = '\x01';
          DAT_ram_3007a3a6 = DAT_ram_3007a3b6;
          DAT_ram_3007a3a7 = cVar2;
          DAT_ram_3007a3a5 = cVar1;
          DAT_ram_3007a3b4 = '\0';
          DAT_ram_30079fa1 = cVar2;
          if (*(char *)(param_1 + 3) != '\0') {
            DAT_ram_30079fa1 = DAT_ram_3007a3b6;
          }
          DAT_ram_30079fa0 = cVar1;
          DAT_ram_30079fa2 = uVar5;
          DAT_ram_30079fa3 = uVar6;
          _DAT_ram_3007a3a8 = sVar3;
          _DAT_ram_3007a3ac = iVar4;
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_30079fa0;
          }
LAB_ram_400308d2:
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = 4;
          }
          *param_6 = 0;
          return 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x28) == 0) goto LAB_ram_40030944;
        FUN_ram_4000303c(auStack_370,auStack_6b0,0x340);
        if (*(code **)(param_1 + 0x24) != (code *)0x0) {
          (**(code **)(param_1 + 0x24))(auStack_370);
        }
        iVar7 = FUN_ram_400154ac(auStack_370,0x3007add0,0x400,&uStack_6b4);
        if ((iVar7 == 0) &&
           (iVar7 = (**(code **)(param_1 + 0x28))(cVar1,0x3007add0,uStack_6b4), iVar7 == 0)) {
          if (cVar2 != '\0') {
LAB_ram_40030944:
            puVar8 = auStack_370;
            goto LAB_ram_40030946;
          }
          cStack_6b5 = '\0';
          if (((*(code **)(param_1 + 0x2c) != (code *)0x0) &&
              (iVar7 = (**(code **)(param_1 + 0x2c))(&cStack_6b5), iVar7 == 0)) &&
             (cStack_6b5 == cVar1)) goto LAB_ram_40030944;
          goto LAB_ram_400309be;
        }
      }
      uVar5 = 4;
      goto LAB_ram_40030902;
    }
  }
  uVar5 = 1;
LAB_ram_40030902:
  *param_6 = uVar5;
  DAT_ram_3007a3b4 = 0;
  return 1;
}


/* NanoCore 1.12, address 0x40030a20.
 * REA evidence: ev_26ca2f3dc2bfdc83edb0a01f38873f7f50e5f077c5af87711aa7611a55d99d55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40030a20(void)

{
  undefined4 *in_a3;
  undefined4 *in_a4;
  undefined1 *in_a5;
  
  DAT_ram_3007a3b4 = 0;
  DAT_ram_3007a3a4 = 0;
  _DAT_ram_3007a3b0 = _DAT_ram_3007a3b0 + 1;
  DAT_ram_30079fa0 = 0;
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = &DAT_ram_30079fa0;
  }
  if (in_a4 != (undefined4 *)0x0) {
    *in_a4 = 1;
  }
  if (in_a5 != (undefined1 *)0x0) {
    *in_a5 = 0;
  }
  return 1;
}


/* NanoCore 1.12, address 0x40030a62.
 * REA evidence: ev_7769c4813b1720941f7dfddf0816a33129e40c9f8eb535dff61ef4d0eae811c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40030a62(byte *param_1,byte *param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
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
        iVar2 = FUN_ram_4002ff06(1,bVar1,0,0,0);
        if (iVar2 == 0) {
          DAT_ram_30079fa0 = bVar1;
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_30079fa0;
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


/* NanoCore 1.12, address 0x40030a76.
 * REA evidence: ev_9cc24f4adc4aa3a88264c4e7d60b7c500bd46aa8d4d3ce5f378c0d6d6baa49ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40030a76(byte *param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
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
      iVar2 = FUN_ram_4002ff06(1,bVar1,0,0,0);
      if (iVar2 == 0) {
        DAT_ram_30079fa0 = bVar1;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = &DAT_ram_30079fa0;
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


/* NanoCore 1.12, address 0x40030af2.
 * REA evidence: ev_44a3d6f2cf4be8d2d6540b6e76a19c7b0d8ed05fa83a3b528f2c13e94b595495
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40030af2(byte *param_1,byte *param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
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
        iVar3 = FUN_ram_40033472(bVar2,bVar1);
        if (iVar3 != 0) {
          uVar4 = 3;
          if (iVar3 != -7) {
            uVar4 = 4;
          }
          *param_6 = uVar4;
          return 1;
        }
        DAT_ram_3007a3c8 = bVar2;
        DAT_ram_3007a3c9 = bVar1;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = &DAT_ram_3007a3c8;
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


/* NanoCore 1.12, address 0x40030b9a.
 * REA evidence: ev_3404694bde5eaca09ddf3aba21938e6041f854f66f37f13663481bdadb19e7bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40030b9a(int param_1,int param_2)

{
  if (param_1 != param_2) {
    return (uint)~(param_1 - param_2) >> 0x1f;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40030bac.
 * REA evidence: ev_35e3a033095d8bb1b2c3fe4711197c1c4f87d4d1001097d772ab08ace2fbf352
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40030bac(uint param_1)

{
  if (param_1 - 0x1000 < 0xf001) {
    return (param_1 & 0xfff) == 0;
  }
  return false;
}


/* NanoCore 1.12, address 0x40030bc4.
 * REA evidence: ev_520944b7f0a506586cd28b5c66e62ed7c83f951f2cc9e969a2de497b895ed529
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40030bc4(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != (int *)0x0) && (bVar1 = false, *param_1 == 0x50525354)) {
    bVar1 = (short)param_1[1] == 1;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x40030c08.
 * REA evidence: ev_c9eb76d082f944637d2823468c37b10892ab3683fd243b629b1a23048023eeab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40030c08(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (bVar1 = false, (*(byte *)(param_1 + 6) & 1) != 0)) {
    bVar1 = *(ushort *)(param_1 + 4) - 1 < 0x400;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x40030c2c.
 * REA evidence: ev_1f6d752d65422306cbea15389625c51628eabd788060d83e725f8b5b479dd4ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40030c2c(void)

{
  int iVar1;
  
  if ((_DAT_ram_3007b5a8 == 0) &&
     (iVar1 = FUN_ram_40004988(0x3007b57c,s_prstr_ram_4009c560,1), iVar1 == 0)) {
    _DAT_ram_3007b5a8 = 1;
  }
  return -(uint)(_DAT_ram_3007b5a8 == 0);
}


/* NanoCore 1.12, address 0x40030c6c.
 * REA evidence: ev_3e8a7526ea91ef4f249aaec7cdc96da2a1eba88fd134a26225658d9643039aa6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40030c6c(void)

{
  int iVar1;
  
  if ((_DAT_ram_3007b5a8 == 0) && (iVar1 = FUN_ram_40030c2c(), iVar1 != 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_40004a22(0x3007b57c,0xffffffff);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40030ca0.
 * REA evidence: ev_779d729f9d809bac46de805c9bb6a91fa2c580eeccbb60539fb08b1ab28b7d59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40030ca0(void)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_40006b6e();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006b3a(), iVar1 < 1)) {
    return 0;
  }
  if (_DAT_ram_3007b570 != 0) {
    aiStack_14[0] = 0;
    uVar2 = FUN_ram_40006e3c(aiStack_14);
    if (((uVar2 != 0) && (uVar2 <= _DAT_ram_3007b570)) &&
       (_DAT_ram_3007b570 < uVar2 + aiStack_14[0] * 0x40)) {
      return _DAT_ram_3007b570;
    }
  }
  _DAT_ram_3007b570 = FUN_ram_40006dec(s_presets_ram_4009c568);
  return _DAT_ram_3007b570;
}


/* NanoCore 1.12, address 0x40030cfa.
 * REA evidence: ev_df6cac7a7b08545249d0f85a48879a97c4a1f677fe42653b589cfc942dd2f900
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030cfa(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40030ca0();
  uVar2 = 0xfffffffc;
  if ((iVar1 != 0) && (0xabfff < *(uint *)(iVar1 + 0x38))) {
    iVar1 = FUN_ram_40006cbe(iVar1 + 0x1c);
    uVar2 = 0xfffffffe;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) == 0x1000)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40030d2c.
 * REA evidence: ev_1343ff3b2c2c56d813ec9557ee459e65b488f48bf3c3f847d48a8b34bc90130b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030d2c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40030ca0();
  if ((iVar1 != 0) && (param_2 != 0)) {
    if (((uint)(param_1 + param_3) <= *(uint *)(iVar1 + 0x38)) &&
       ((iVar2 = FUN_ram_40006cbe(iVar1 + 0x1c), iVar2 != 0 &&
        (*(code **)(iVar2 + 0x28) != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x40030d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(iVar2 + 0x28))(*(int *)(iVar1 + 0x34) + param_1,param_2,param_3);
      return uVar3;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40030d7c.
 * REA evidence: ev_58b62e79fe174e4d0599beeb63924ec4c7c044bec63bcae0d6a44af456591fe9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030d7c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40030ca0();
  if ((iVar1 != 0) && (param_2 != 0)) {
    if (((uint)(param_1 + param_3) <= *(uint *)(iVar1 + 0x38)) &&
       ((iVar2 = FUN_ram_40006cbe(iVar1 + 0x1c), iVar2 != 0 &&
        (*(code **)(iVar2 + 0x2c) != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x40030dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(iVar2 + 0x2c))(*(int *)(iVar1 + 0x34) + param_1,param_2,param_3);
      return uVar3;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40030dcc.
 * REA evidence: ev_979fa38ef6662f0f37d447cacffb1b17bbb1ca3b6998ef101cdec4862ed74fcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40030dcc(int param_1,undefined1 *param_2)

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
  uVar4 = FUN_ram_40007450(0,param_2,0xc);
  param_2[0xc] = (char)uVar4;
  param_2[0xd] = (char)((uint)uVar4 >> 8);
  param_2[0xe] = (char)((uint)uVar4 >> 0x10);
  param_2[0xf] = (char)((uint)uVar4 >> 0x18);
  return;
}


/* NanoCore 1.12, address 0x40030e8e.
 * REA evidence: ev_eb10e4f1ffe2709b604681b697707cddc279eb2d7e6a38bb81116e4130d6e57f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40030e8e(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
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
  
  iVar1 = _DAT_ram_3007b578;
  iVar3 = iVar1;
  if (((_DAT_ram_3007b56c != 0) && (iVar3 = _DAT_ram_3007b56c, _DAT_ram_3007b578 != 0)) &&
     (iVar4 = FUN_ram_40030b9a(_DAT_ram_3007b56c,_DAT_ram_3007b578), iVar4 == 0)) {
    iVar3 = iVar1;
  }
  iVar4 = _DAT_ram_3007bbc8;
  if ((_DAT_ram_3007bbc8 != 0) && (iVar5 = FUN_ram_40030b9a(_DAT_ram_3007bbc8,iVar3), iVar5 != 0)) {
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
  uVar6 = _DAT_ram_3007b574;
  param_1[0x14] = (char)_DAT_ram_3007b574;
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
  uVar6 = FUN_ram_40007450(0,param_6,0x1000);
  param_1[0x1d] = (char)((uint)uVar6 >> 8);
  param_1[0x1e] = (char)((uint)uVar6 >> 0x10);
  param_1[0x1c] = (char)uVar6;
  param_1[0x24] = 0x14;
  param_1[0x1f] = (char)((uint)uVar6 >> 0x18);
  param_1[0x25] = 6;
  param_1[0x26] = param_4;
  param_1[0x27] = param_5;
  FUN_ram_4000303c(param_1 + 0x3c,0x3007b5b0,0x614);
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


