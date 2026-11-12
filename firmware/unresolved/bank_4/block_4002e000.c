/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4002e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002e084.
 * REA evidence: ev_47542c0f9d24df0baa4e677d81fc0a7eb6db26d1dbf1b68482fac49eff31e5f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002e084(void)

{
  int iVar1;
  
  if (DAT_ram_3007b18c != '\0') {
    iVar1 = FUN_ram_400049d6(0x3007b160,0xffffffff);
    return -(uint)(iVar1 != 0);
  }
  return -1;
}


/* NanoCore 1.10, address 0x4002e0b2.
 * REA evidence: ev_95a7c3288a48a2e794ec984f1a87187ffcf92531e206d6139d5dec6a6883b6f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e0b2(void)

{
  if (DAT_ram_3007b18c != '\0') {
    FUN_ram_40004ac8(0x3007b160);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002e0ca.
 * REA evidence: ev_d146a47d12713c3ad2c0f0aac6d696efd5a50061fabc9fe4c2ff2206c08eec0c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002e0ca(byte *param_1,uint param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 uVar2;
  char acStack_378 [24];
  undefined1 auStack_360 [2];
  undefined1 auStack_35e [842];
  
  memset(acStack_378,0,0x18);
  if (param_4 != (undefined1 *)0x0) {
    if (param_2 < *param_1) {
      iVar1 = FUN_ram_40031504(param_2,acStack_378);
      if (iVar1 == 0) {
        if (acStack_378[0] == '\0') {
          FUN_ram_40014920(auStack_360);
          FUN_ram_4000305c(auStack_35e,s_preset_ram_40093168,6);
          iVar1 = FUN_ram_40014964(auStack_360,0x3007a0f8,0x400,param_3);
        }
        else {
          iVar1 = FUN_ram_400315ca(param_2,0x3007a0f8,0x400,param_3);
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar2 = 4;
    }
    else {
      uVar2 = 3;
    }
    *param_4 = uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002e17a.
 * REA evidence: ev_07dd9117f10bae9bfe54ecd1fbaeaeda8bc7861b69c17214544587d0ccce7fc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002e17a(int param_1,undefined4 param_2,int param_3,undefined1 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_ram_4002e084();
  if (iVar1 == 0) {
    if ((_DAT_ram_3007b15c == 0) || (_DAT_ram_3007adfc != 0)) goto LAB_ram_4002e1ac;
    DAT_ram_3007ae04 = (undefined1)param_2;
    _DAT_ram_3007ae0c = -1;
    _DAT_ram_3007ae00 = param_1;
    DAT_ram_3007ae05 = param_4;
    _DAT_ram_3007ae08 = param_5;
    if (param_3 != 0) {
      FUN_ram_4000305c(0x3007ae1c,param_3,0x340);
    }
    FUN_ram_4003fe9c(0x3007ae10);
    _DAT_ram_3007adfc = 1;
    FUN_ram_4002e0b2();
    uVar2 = FUN_ram_40004362(0x5dc);
    iVar3 = FUN_ram_4003febc(0x3007ae10,uVar2);
    iVar1 = _DAT_ram_3007ae0c;
    if (iVar3 != 0) {
      iVar3 = FUN_ram_4002e084();
      iVar1 = _DAT_ram_3007ae0c;
      if (iVar3 == 0) {
        if (_DAT_ram_3007adfc == 1) {
          _DAT_ram_3007adfc = 0;
        }
        else {
          if (_DAT_ram_3007adfc == 3) {
            FUN_ram_4002e0b2();
            goto LAB_ram_4002e248;
          }
          if (_DAT_ram_3007adfc != 0) {
            FUN_ram_4002e0b2();
            goto LAB_ram_4002e21c;
          }
        }
LAB_ram_4002e1ac:
        FUN_ram_4002e0b2();
        goto LAB_ram_4002e1b0;
      }
LAB_ram_4002e21c:
      FUN_ram_4003febc(0x3007ae10,0xffffffff);
      iVar1 = _DAT_ram_3007ae0c;
    }
LAB_ram_4002e248:
    if (((iVar1 == 0) && (param_1 == 1)) && (*(code **)(_DAT_ram_3007b15c + 0x1c) != (code *)0x0)) {
      iVar1 = (**(code **)(_DAT_ram_3007b15c + 0x1c))(param_2,0x3007ae1c);
    }
    iVar3 = FUN_ram_4002e084();
    if (iVar3 == 0) {
      _DAT_ram_3007adfc = 0;
      FUN_ram_4002e0b2();
    }
  }
  else {
LAB_ram_4002e1b0:
    iVar1 = -1;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4002e294.
 * REA evidence: ev_205af10d7b576aa17b18db2d14757ba76dc50f95ed85e6eaff95411da9cedaa9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002e294(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    return true;
  }
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 8))(0);
    return iVar1 != 0;
  }
  return false;
}


/* NanoCore 1.10, address 0x4002e2b6.
 * REA evidence: ev_64e37cfbd34bc7bccc0015321db365310c2debadf043aa6985db79d5c316d0cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002e2b6(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x18) == 0) != (*(int *)(param_1 + 0x1c) == 0)) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x14) == 0) == (*(int *)(param_1 + 0x18) != 0)) {
    if (DAT_ram_3007b18c == '\0') {
      iVar1 = FUN_ram_4000493c(0x3007b160,s_prsjb_ram_40095434,1);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      DAT_ram_3007b18c = '\x01';
    }
    iVar1 = FUN_ram_4002e084();
    if (iVar1 == 0) {
      if (_DAT_ram_3007adfc == 0) {
        _DAT_ram_3007b15c = param_1;
        FUN_ram_4002e0b2();
        return 0;
      }
      FUN_ram_4002e0b2();
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002e346.
 * REA evidence: ev_fac4ec21bbbb0d25b97843837853a115f425f7d256ef31fd084a83b351c5c476
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002e346(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a3;
  
  iVar1 = FUN_ram_4002e084();
  iVar2 = _DAT_ram_3007b15c;
  if (iVar1 != 0) {
    return;
  }
  if (_DAT_ram_3007adfc == 1) {
    _DAT_ram_3007adfc = 2;
    iVar1 = -1;
    FUN_ram_4002e0b2();
    if (iVar2 != 0) {
      if (_DAT_ram_3007ae00 == 0) {
        if (((_DAT_ram_3007ae08 == _DAT_ram_30079fdc) &&
            (iVar1 = (**(code **)(iVar2 + 0x10))
                               (DAT_ram_3007ae04,0x3007ae1c,DAT_ram_3007ae05,extraout_a3,
                                _DAT_ram_3007ae08,*(code **)(iVar2 + 0x10)), iVar1 != 0)) &&
           (*(code **)(iVar2 + 0x20) != (code *)0x0)) {
          (**(code **)(iVar2 + 0x20))();
        }
      }
      else if (*(code **)(iVar2 + 0x18) == (code *)0x0) {
        iVar1 = (**(code **)(iVar2 + 0x14))(DAT_ram_3007ae04);
      }
      else {
        iVar1 = (**(code **)(iVar2 + 0x18))(0x3007ae1c);
      }
    }
    iVar2 = FUN_ram_4002e084();
    _DAT_ram_3007ae0c = iVar1;
    if (iVar2 == 0) {
      _DAT_ram_3007adfc = 3;
      FUN_ram_4002e0b2();
    }
    FUN_ram_4003ff4e(0x3007ae10);
    return;
  }
  FUN_ram_4002e0b2();
  return;
}


/* NanoCore 1.10, address 0x4002e410.
 * REA evidence: ev_d5c9c5b28e445d0a870e5b78200097b890b955f8ce63f112daa2a7a12c0382a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002e410(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4,int *param_5,
                undefined1 *param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  char local_60 [16];
  char local_50 [28];
  
  iVar3 = (**(code **)(param_1 + 0xc))();
  uVar1 = 8;
  if (iVar3 != 0) {
    uVar1 = 6;
  }
  if (param_6 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 < 2)) {
    uVar7 = 1;
  }
  else {
    iVar3 = FUN_ram_4002e294(param_1);
    uVar7 = 6;
    if (iVar3 != 0) {
      iVar3 = FUN_ram_40031348();
      if (iVar3 == 0) {
        uVar9 = (uint)*param_2;
        uVar8 = (uint)*param_1;
        if (uVar8 <= uVar9) {
          uVar7 = 3;
          goto LAB_ram_4002e454;
        }
        uVar5 = (uint)param_2[1];
        if (0x19 < uVar5) {
          uVar5 = 0x19;
        }
        if (uVar1 < uVar5) {
          uVar5 = uVar1;
        }
        if (uVar8 < uVar9 + uVar5) {
          uVar5 = uVar8 - uVar9 & 0xff;
        }
        puVar2 = &DAT_ram_30079ff8;
        DAT_ram_30079ff9 = (undefined1)uVar5;
        uVar1 = 0;
        iVar3 = 2;
        DAT_ram_30079ff8 = *param_2;
        while( true ) {
          if (uVar5 == uVar1) {
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = &DAT_ram_30079ff8;
            }
            if (param_5 != (int *)0x0) {
              *param_5 = iVar3;
            }
            *param_6 = 0;
            return 1;
          }
          memset(local_60 + 8,0,0x18);
          iVar4 = FUN_ram_40031504(uVar1 + uVar9 & 0xff,local_60 + 8);
          if (iVar4 != 0) break;
          puVar2[2] = (char)(uVar1 + uVar9);
          builtin_strncpy(local_60,"    ",4);
          puVar2[3] = local_60[8] != '\0';
          builtin_strncpy(local_60 + 4,"    ",4);
          iVar4 = 0;
          if (local_60[8] != '\0') {
            iVar6 = 0;
            do {
              if (local_50[iVar6] != ' ') {
                iVar4 = 0;
                if (local_50[iVar6] == '\0') goto LAB_ram_4002e542;
                iVar4 = 0;
                goto LAB_ram_4002e57e;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 0x10);
            iVar4 = 0;
          }
LAB_ram_4002e542:
          for (; s_preset_ram_40093168[iVar4] != '\0'; iVar4 = iVar4 + 1) {
            local_60[iVar4] = s_preset_ram_40093168[iVar4];
          }
LAB_ram_4002e594:
          FUN_ram_4000305c(puVar2 + 4,local_60,8);
          iVar3 = iVar3 + 10;
          uVar1 = uVar1 + 1 & 0xff;
          puVar2 = puVar2 + 10;
        }
      }
      uVar7 = 4;
    }
  }
LAB_ram_4002e454:
  *param_6 = uVar7;
  return 1;
LAB_ram_4002e57e:
  if (local_50[iVar4 + iVar6] == '\0') goto LAB_ram_4002e594;
  local_60[iVar4] = local_50[iVar4 + iVar6];
  iVar4 = iVar4 + 1;
  if ((iVar4 == 8) || (0x10 - iVar6 == iVar4)) goto LAB_ram_4002e594;
  goto LAB_ram_4002e57e;
}


/* NanoCore 1.10, address 0x4002e5ac.
 * REA evidence: ev_dcd9faeaac9cc8db0e7b888d9ed5624f2d35b81333d326ea4993f5e1cfd1507e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002e5ac(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4,int *param_5,
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
    iVar6 = FUN_ram_4002e294();
    if (iVar6 == 0) {
      uVar8 = 6;
    }
    else {
      iVar6 = FUN_ram_40031348();
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
          iVar6 = FUN_ram_4002e0ca(param_1,bVar1,auStack_34,param_6);
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
            DAT_ram_3007a8ff = (undefined1)auStack_34[0];
            DAT_ram_3007a900 = (undefined1)(auStack_34[0] >> 8);
            DAT_ram_3007a8fc = bVar1;
            DAT_ram_3007a8fd = bVar3;
            DAT_ram_3007a8fe = bVar2;
            if (uVar5 != 0) {
              FUN_ram_4000305c(0x3007a901,uVar9 + 0x3007a0f8,uVar5);
            }
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = &DAT_ram_3007a8fc;
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


/* NanoCore 1.10, address 0x4002e6c6.
 * REA evidence: ev_39f90653de8ece31aafb712dada249b553617c7cb8f25786e69ecc396aedb5bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002e6c6(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 *param_4,
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
    iVar1 = FUN_ram_4002e294();
    uVar2 = 6;
    if (iVar1 != 0) {
      iVar1 = FUN_ram_40031348();
      if (iVar1 == 0) {
        uVar2 = *param_2;
        iVar1 = FUN_ram_4002e0ca(param_1,uVar2,aiStack_24,param_6);
        if (iVar1 != 0) {
          return 1;
        }
        uVar3 = aiStack_24[0] + 3;
        if (uVar3 < 0x404) {
          DAT_ram_3007a4f9 = (undefined1)aiStack_24[0];
          DAT_ram_3007a4fa = (undefined1)((uint)aiStack_24[0] >> 8);
          DAT_ram_3007a4f8 = uVar2;
          if (aiStack_24[0] != 0) {
            FUN_ram_4000305c(0x3007a4fb,0x3007a0f8);
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_3007a4f8;
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


/* NanoCore 1.10, address 0x4002e788.
 * REA evidence: ev_d19725b2c0b8ce173fd92b5c9e7d20bc388222e08e3a7988d3ce152fcb31dd3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4002e788(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
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
  if (iVar6 == 0) goto LAB_ram_4002e7f2;
  bVar1 = *param_2;
  if (bVar1 < *param_1) {
    bVar2 = param_2[3];
    bVar3 = param_2[2];
    sVar5 = *(short *)(param_2 + 2);
    if ((ushort)(sVar5 - 1U) < 0x400) {
      bVar4 = param_2[1];
      iVar6 = FUN_ram_400042fa();
      if ((DAT_ram_30079fe0 != '\0') &&
         (uVar9 = iVar6 - _DAT_ram_30079ff0, uVar7 = FUN_ram_40004362(10000), uVar7 < uVar9)) {
        DAT_ram_30079fe0 = '\0';
      }
      if (param_1[3] == 0) {
        if (((DAT_ram_30079fe0 != '\0') && (DAT_ram_30079fe1 == bVar1)) &&
           (DAT_ram_30079fe3 == (bVar4 & 1))) goto LAB_ram_4002e86c;
      }
      else if (((DAT_ram_30079fe0 != '\0') && (DAT_ram_30079fe1 == bVar1)) &&
              (DAT_ram_30079fe2 == bVar4)) {
LAB_ram_4002e86c:
        if (_DAT_ram_30079fe6 == sVar5) goto LAB_ram_4002e874;
      }
      DAT_ram_30079fe0 = '\x01';
      DAT_ram_30079fe4 = param_1[1] != 0 && (param_1[1] & bVar4) != 0;
      _DAT_ram_30079fe8 = 0;
      _DAT_ram_30079fec = 0;
      DAT_ram_30079fd0 = 0;
      DAT_ram_30079fe1 = bVar1;
      DAT_ram_30079fe2 = bVar4;
      DAT_ram_30079fe3 = bVar4 & 1;
      _DAT_ram_30079fe6 = sVar5;
LAB_ram_4002e874:
      DAT_ram_30079bcc = bVar1;
      DAT_ram_30079bcd = bVar4;
      DAT_ram_30079bce = bVar3;
      DAT_ram_30079bcf = bVar2;
      _DAT_ram_30079ff0 = iVar6;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = &DAT_ram_30079bcc;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 4;
      }
      *param_6 = 0;
      return 1;
    }
  }
  uVar8 = 3;
LAB_ram_4002e7f2:
  *param_6 = uVar8;
  return 1;
}


/* NanoCore 1.10, address 0x4002e8fe.
 * REA evidence: ev_82765dbcffcff83982b0191d1665ba6ba09e9559f76b59aaaeceb5ae0787d3e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4002e8fe(undefined4 param_1,ushort *param_2,uint param_3,undefined4 *param_4,
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
  if (DAT_ram_30079fe0 == '\0') {
    *param_6 = 2;
    return 1;
  }
  _DAT_ram_30079ff0 = FUN_ram_400042fa();
  uVar1 = *(undefined1 *)((int)param_2 + 1);
  uVar2 = *param_2;
  iVar4 = param_3 - 2;
  uVar3 = (uint)*param_2;
  if ((uint)_DAT_ram_30079fe6 < uVar3 + iVar4) {
LAB_ram_4002e980:
    *param_6 = 3;
  }
  else {
    uVar5 = (uint)_DAT_ram_30079fe8;
    if (uVar5 == uVar3) {
      FUN_ram_4000305c(uVar3 + 0x30079bd0);
      _DAT_ram_30079fec = FUN_ram_4000755e(_DAT_ram_30079fec,param_2 + 1,iVar4);
      _DAT_ram_30079fe8 = (short)iVar4 + _DAT_ram_30079fe8;
    }
    else if (((uVar5 <= uVar3) || (uVar5 < uVar3 + iVar4)) ||
            (iVar4 = FUN_ram_40002ffc(uVar3 + 0x30079bd0), iVar4 != 0)) goto LAB_ram_4002e980;
    _DAT_ram_30079bce = _DAT_ram_30079fe8;
    DAT_ram_30079bcc = (char)uVar2;
    DAT_ram_30079bcd = uVar1;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_30079bcc;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 4;
    }
    *param_6 = 0;
  }
  return 1;
}


/* NanoCore 1.10, address 0x4002ea10.
 * REA evidence: ev_63e9363ec5ee3e4eb29e62df1197718931dea912dd22b81513e3c5017842bb56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4002ea10(int param_1,short *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
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
  if (DAT_ram_30079fe0 == '\0') {
    if (((DAT_ram_30079fd0 == '\0') || (_DAT_ram_30079fd4 != sVar3)) || (_DAT_ram_30079fd8 != iVar4)
       ) {
      *param_6 = 2;
      return 1;
    }
    DAT_ram_30079bcc = DAT_ram_30079fd1;
    DAT_ram_30079bcd = DAT_ram_30079fd3;
    if (*(char *)(param_1 + 2) != '\0') {
      DAT_ram_30079bcd = DAT_ram_30079fd2;
    }
    DAT_ram_30079bce = uVar5;
    DAT_ram_30079bcf = uVar6;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_30079bcc;
    }
    goto LAB_ram_4002eb10;
  }
  if ((_DAT_ram_30079fe6 == sVar3) && (_DAT_ram_30079fe8 == _DAT_ram_30079fe6)) {
    if (_DAT_ram_30079fec != iVar4) {
      *param_6 = 5;
      DAT_ram_30079fe0 = 0;
      return 1;
    }
    iVar7 = FUN_ram_40014af4(auStack_6b0,0x30079bd0,sVar3);
    cVar2 = DAT_ram_30079fe3;
    cVar1 = DAT_ram_30079fe1;
    if (iVar7 == 0) {
      if (DAT_ram_30079fe4 == '\0') {
        puVar8 = auStack_6b0;
LAB_ram_4002eb84:
        iVar7 = FUN_ram_4002e17a(0,cVar1,puVar8,cVar2,_DAT_ram_30079fdc);
        if (iVar7 == 0) {
LAB_ram_4002ebfc:
          DAT_ram_30079fd0 = '\x01';
          DAT_ram_30079fd2 = DAT_ram_30079fe2;
          DAT_ram_30079fd3 = cVar2;
          DAT_ram_30079fd1 = cVar1;
          DAT_ram_30079fe0 = '\0';
          DAT_ram_30079bcd = cVar2;
          if (*(char *)(param_1 + 2) != '\0') {
            DAT_ram_30079bcd = DAT_ram_30079fe2;
          }
          DAT_ram_30079bcc = cVar1;
          DAT_ram_30079bce = uVar5;
          DAT_ram_30079bcf = uVar6;
          _DAT_ram_30079fd4 = sVar3;
          _DAT_ram_30079fd8 = iVar4;
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_30079bcc;
          }
LAB_ram_4002eb10:
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = 4;
          }
          *param_6 = 0;
          return 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x28) == 0) goto LAB_ram_4002eb82;
        FUN_ram_4000305c(auStack_370,auStack_6b0,0x340);
        if (*(code **)(param_1 + 0x24) != (code *)0x0) {
          (**(code **)(param_1 + 0x24))(auStack_370);
        }
        iVar7 = FUN_ram_40014964(auStack_370,0x3007a9fc,0x400,&uStack_6b4);
        if ((iVar7 == 0) &&
           (iVar7 = (**(code **)(param_1 + 0x28))(cVar1,0x3007a9fc,uStack_6b4), iVar7 == 0)) {
          if (cVar2 != '\0') {
LAB_ram_4002eb82:
            puVar8 = auStack_370;
            goto LAB_ram_4002eb84;
          }
          cStack_6b5 = '\0';
          if (((*(code **)(param_1 + 0x2c) != (code *)0x0) &&
              (iVar7 = (**(code **)(param_1 + 0x2c))(&cStack_6b5), iVar7 == 0)) &&
             (cStack_6b5 == cVar1)) goto LAB_ram_4002eb82;
          goto LAB_ram_4002ebfc;
        }
      }
      uVar5 = 4;
      goto LAB_ram_4002eb40;
    }
  }
  uVar5 = 1;
LAB_ram_4002eb40:
  *param_6 = uVar5;
  DAT_ram_30079fe0 = 0;
  return 1;
}


/* NanoCore 1.10, address 0x4002ec5e.
 * REA evidence: ev_2c859602bb697d3f9e40f7ffa2c9a162e01b96f98fcf42da9b47ac53bba0d8ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002ec5e(void)

{
  undefined4 *in_a3;
  undefined4 *in_a4;
  undefined1 *in_a5;
  
  DAT_ram_30079fe0 = 0;
  DAT_ram_30079fd0 = 0;
  _DAT_ram_30079fdc = _DAT_ram_30079fdc + 1;
  DAT_ram_30079bcc = 0;
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = &DAT_ram_30079bcc;
  }
  if (in_a4 != (undefined4 *)0x0) {
    *in_a4 = 1;
  }
  if (in_a5 != (undefined1 *)0x0) {
    *in_a5 = 0;
  }
  return 1;
}


/* NanoCore 1.10, address 0x4002eca0.
 * REA evidence: ev_d44c42118387d875051e2ebc12eecea7555d6d69f84fa6da4da2187a120e9566
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002eca0(byte *param_1,byte *param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
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
        iVar2 = FUN_ram_4002e17a(1,bVar1,0,0,0);
        if (iVar2 == 0) {
          DAT_ram_30079bcc = bVar1;
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_30079bcc;
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


/* NanoCore 1.10, address 0x4002ed30.
 * REA evidence: ev_9f66116cd59d3ef6bbea6c8904b9e4f5ebed826835cf0b2f548f718e10bda053
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002ed30(byte *param_1,byte *param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
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
        iVar3 = FUN_ram_400316b0(bVar2,bVar1);
        if (iVar3 != 0) {
          uVar4 = 3;
          if (iVar3 != -7) {
            uVar4 = 4;
          }
          *param_6 = uVar4;
          return 1;
        }
        DAT_ram_30079ff4 = bVar2;
        DAT_ram_30079ff5 = bVar1;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = &DAT_ram_30079ff4;
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


/* NanoCore 1.10, address 0x4002edd8.
 * REA evidence: ev_27cca3c92c6c848fc061d3fec6e381d040ac06c8961d7e20a418c8c4606d960b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002edd8(int param_1,int param_2)

{
  if (param_1 != param_2) {
    return (uint)~(param_1 - param_2) >> 0x1f;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002edea.
 * REA evidence: ev_794ca644e4d549521a4f278bdf8e7f889e904d190a78c0406031968efe683b1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002edea(uint param_1)

{
  if (param_1 - 0x1000 < 0xf001) {
    return (param_1 & 0xfff) == 0;
  }
  return false;
}


/* NanoCore 1.10, address 0x4002ee02.
 * REA evidence: ev_1d3a45c12c27dcfde7a9d1b428c362f3a9a05280d4a5e19c81c02bc52ec35e99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002ee02(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != (int *)0x0) && (bVar1 = false, *param_1 == 0x50525354)) {
    bVar1 = (short)param_1[1] == 1;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4002ee46.
 * REA evidence: ev_fc476659d1e328e8f92580f43cd9de50b1be7552cdbd37e6e66dab7cdfe6999f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002ee46(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (bVar1 = false, (*(byte *)(param_1 + 6) & 1) != 0)) {
    bVar1 = *(ushort *)(param_1 + 4) - 1 < 0x400;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4002ee6a.
 * REA evidence: ev_23feb3099cad6a92e021fea3c226217ed4460a7bcbb1c896474e2865fc1ecf22
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002ee6a(void)

{
  int iVar1;
  
  if ((_DAT_ram_3007b1d4 == 0) &&
     (iVar1 = FUN_ram_4000493c(0x3007b1a8,s_prstr_ram_4009543c,1), iVar1 == 0)) {
    _DAT_ram_3007b1d4 = 1;
  }
  return -(uint)(_DAT_ram_3007b1d4 == 0);
}


/* NanoCore 1.10, address 0x4002eeaa.
 * REA evidence: ev_b5aab5a1b531e744368be891c8e784b336af5164393d11c1028d203393cd0b60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002eeaa(void)

{
  int iVar1;
  
  if ((_DAT_ram_3007b1d4 == 0) && (iVar1 = FUN_ram_4002ee6a(), iVar1 != 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_400049d6(0x3007b1a8,0xffffffff);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4002eede.
 * REA evidence: ev_20a114374e65311abbba082f7ea8aa5add277e6b02b54506f63c70018a883e2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002eede(void)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_40006c7c();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006c48(), iVar1 < 1)) {
    return 0;
  }
  if (_DAT_ram_3007b19c != 0) {
    aiStack_14[0] = 0;
    uVar2 = FUN_ram_40006f4a(aiStack_14);
    if (((uVar2 != 0) && (uVar2 <= _DAT_ram_3007b19c)) &&
       (_DAT_ram_3007b19c < uVar2 + aiStack_14[0] * 0x40)) {
      return _DAT_ram_3007b19c;
    }
  }
  _DAT_ram_3007b19c = fal_partition_find(s_presets_ram_40095444);
  return _DAT_ram_3007b19c;
}


/* NanoCore 1.10, address 0x4002ef38.
 * REA evidence: ev_10cec02018ea599baba53d97178b997e41140fe1cd2f20709598cec0a1a3948d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002ef38(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4002eede();
  uVar2 = 0xfffffffc;
  if ((iVar1 != 0) && (0xabfff < *(uint *)(iVar1 + 0x38))) {
    iVar1 = FUN_ram_40006dcc(iVar1 + 0x1c);
    uVar2 = 0xfffffffe;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) == 0x1000)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4002ef6a.
 * REA evidence: ev_acf716fc6c36d88ff52bb45265843ed2d5cd8b849d5596629bf1abd5332859bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002ef6a(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4002eede();
  if ((iVar1 != 0) && (param_2 != 0)) {
    if (((uint)(param_1 + param_3) <= *(uint *)(iVar1 + 0x38)) &&
       ((iVar2 = FUN_ram_40006dcc(iVar1 + 0x1c), iVar2 != 0 &&
        (*(code **)(iVar2 + 0x28) != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x4002efac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(iVar2 + 0x28))(*(int *)(iVar1 + 0x34) + param_1,param_2,param_3);
      return uVar3;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002efba.
 * REA evidence: ev_ed73d58facd87e2281fdec606c281893f2b229dc3e1a2370a9daaba76132ae0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002efba(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4002eede();
  if ((iVar1 != 0) && (param_2 != 0)) {
    if (((uint)(param_1 + param_3) <= *(uint *)(iVar1 + 0x38)) &&
       ((iVar2 = FUN_ram_40006dcc(iVar1 + 0x1c), iVar2 != 0 &&
        (*(code **)(iVar2 + 0x2c) != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x4002effc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(iVar2 + 0x2c))(*(int *)(iVar1 + 0x34) + param_1,param_2,param_3);
      return uVar3;
    }
  }
  return 0xffffffff;
}


