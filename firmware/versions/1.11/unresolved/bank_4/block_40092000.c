/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40092000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4009211a.
 * REA evidence: ev_3853dbb83d9f55e5f1c1c336ab0590fc3b1df859d56f86bd71408963f71bdc7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4009211a(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_140 [268];
  
  if (DAT_ram_3008c27c == '\0') {
    return 0;
  }
  if (param_1 != _DAT_ram_3008c280) {
    return 0;
  }
  if (param_2 != _DAT_ram_3008c27c >> 0x18) {
    return 0;
  }
  if ((DAT_ram_3008c27d == '\0') || (DAT_ram_3008c27e == '\0')) {
LAB_ram_4009229e:
    if (_DAT_ram_3008c278 == 0) goto LAB_ram_400922be;
  }
  else {
    if (_DAT_ram_3008c274 != 0) {
      if (param_1 == 1) {
        iVar1 = FUN_ram_4008fc0a(param_2);
      }
      else {
        iVar1 = FUN_ram_4008fbfe(param_2);
      }
      uVar9 = 0x1000;
      if (_DAT_ram_3008c280 != 1) {
        uVar9 = FUN_ram_4008fc12(DAT_ram_3008c27f);
      }
      iVar2 = FUN_ram_40007554(0,_DAT_ram_3008c274,uVar9);
      iVar3 = FUN_ram_40006fe6(_DAT_ram_3008c270,iVar1,uVar9);
      if ((iVar3 < 0) ||
         (uVar4 = FUN_ram_40006f9c(_DAT_ram_3008c270,iVar1,_DAT_ram_3008c274,uVar9),
         iVar3 = _DAT_ram_3008c274, uVar4 != uVar9)) {
        return 0xffffffff;
      }
      iVar10 = 0;
      if (uVar9 != 0) {
        if (_DAT_ram_3008c274 == 0) {
          uVar4 = 0;
          do {
            uVar8 = uVar9 - uVar4;
            if (0x100 < uVar8) {
              uVar8 = 0x100;
            }
            uVar5 = FUN_ram_40006f52(_DAT_ram_3008c270,iVar1 + uVar4,auStack_140,uVar8);
            uVar4 = uVar4 + uVar5;
            if (uVar5 != uVar8) {
              return 0xffffffff;
            }
            iVar10 = FUN_ram_40007554(iVar10,auStack_140);
          } while (uVar4 < uVar9);
        }
        else {
          uVar4 = 0;
          do {
            uVar8 = uVar9 - uVar4;
            if (0x100 < uVar8) {
              uVar8 = 0x100;
            }
            uVar5 = FUN_ram_40006f52(_DAT_ram_3008c270,uVar4 + iVar1,auStack_140,uVar8);
            iVar7 = iVar3 + uVar4;
            uVar4 = uVar4 + uVar5;
            if (uVar5 != uVar8) {
              return 0xffffffff;
            }
            iVar7 = FUN_ram_40002fec(auStack_140,iVar7,uVar5);
            if (iVar7 != 0) {
              return 0xffffffff;
            }
            iVar10 = FUN_ram_40007554(iVar10,auStack_140,uVar5);
          } while (uVar4 < uVar9);
        }
      }
      if (iVar10 != iVar2) {
        return 0xffffffff;
      }
      _DAT_ram_3008c27c = (ushort)DAT_ram_3008c27c;
      goto LAB_ram_4009229e;
    }
    if (_DAT_ram_3008c278 == 0) {
      _DAT_ram_3008c27c = 0;
      _DAT_ram_3008c280 = 0;
      _DAT_ram_3008c284 = 0;
      return 0;
    }
  }
  memset(_DAT_ram_3008c278,0,_DAT_ram_3008c284);
  FUN_ram_4002c30c();
  _DAT_ram_3008c278 = 0;
LAB_ram_400922be:
  iVar1 = _DAT_ram_3008c274;
  if (_DAT_ram_3008c274 != 0) {
    if (_DAT_ram_3008c280 == 1) {
      uVar6 = 0x1000;
    }
    else {
      uVar6 = FUN_ram_4008fc12(DAT_ram_3008c27f);
    }
    iVar2 = _DAT_ram_3008c274;
    memset(iVar1,0,uVar6);
    FUN_ram_4002c30c(iVar2);
    _DAT_ram_3008c274 = 0;
  }
  _DAT_ram_3008c284 = 0;
  _DAT_ram_3008c280 = 0;
  _DAT_ram_3008c27c = 0;
  return 0;
}


/* NanoCore 1.11, address 0x4009236a.
 * REA evidence: ev_499851c0f9be21a4d780eb9e3a2b119c4da668b504252cc36f3820fc6e876869
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4009236a(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((DAT_ram_3008c27c != '\0') && (param_1 == _DAT_ram_3008c280)) &&
     (_DAT_ram_3008c27c >> 0x18 == param_2)) {
    if (_DAT_ram_3008c278 != 0) {
      memset(_DAT_ram_3008c278,0,_DAT_ram_3008c284);
      FUN_ram_4002c30c();
      _DAT_ram_3008c278 = 0;
    }
    iVar1 = _DAT_ram_3008c274;
    if (_DAT_ram_3008c274 != 0) {
      if (_DAT_ram_3008c280 == 1) {
        uVar3 = 0x1000;
      }
      else {
        uVar3 = FUN_ram_4008fc12(DAT_ram_3008c27f);
      }
      iVar2 = _DAT_ram_3008c274;
      memset(iVar1,0,uVar3);
      FUN_ram_4002c30c(iVar2);
      _DAT_ram_3008c274 = 0;
    }
    _DAT_ram_3008c27c = 0;
    _DAT_ram_3008c280 = 0;
    _DAT_ram_3008c284 = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40092418.
 * REA evidence: ev_c776146fc97b1d3e5b2238e04ae818eda0429c4d888dd0e471304c94e9b6cd4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40092418(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 auStack_120 [256];
  
  if (_DAT_ram_3008c270 == 0) {
    return 0;
  }
  iVar4 = FUN_ram_40006dbe(_DAT_ram_3008c270 + 0x1c);
  if (_DAT_ram_3008c270 == 0) {
    return 0;
  }
  if (iVar4 == 0) {
    return 0;
  }
  uVar9 = *(uint *)(iVar4 + 0x20);
  if (uVar9 == 0) {
    return 0;
  }
  if (uVar9 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uVar9 + 0xfff) / uVar9;
  }
  if (uVar2 * uVar9 != 0x1000) {
    return 0;
  }
  iVar5 = FUN_ram_40006f52(_DAT_ram_3008c270,0x12000,&DAT_ram_3008cb28,0x1000);
  iVar4 = _DAT_ram_3008cb38;
  if (iVar5 != 0x1000) {
    return 0;
  }
  pcVar3 = &DAT_ram_3008cb28;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 != -1) {
      pcVar3 = &DAT_ram_3008d3c0;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        if (cVar1 != -1) {
          return 0;
        }
      } while (pcVar3 != &DAT_ram_3008db28);
      if ((_DAT_ram_3008cb28 == 0x53415442) && (_DAT_ram_3008cb2c == 4)) {
        if (_DAT_ram_3008cb3c == 0x53413232) {
          uVar7 = FUN_ram_40007554(0,&DAT_ram_3008cb28,0x10);
          uVar7 = FUN_ram_40007554(uVar7,&DAT_ram_4009b438,4);
          iVar5 = FUN_ram_40007554(uVar7,&DAT_ram_3008cb3c,0x884);
          if (iVar5 != iVar4) {
            return 0;
          }
        }
        else if ((_DAT_ram_3008cb38 != 0 || _DAT_ram_3008cb34 != 0) || _DAT_ram_3008cb3c != 0) {
          return 0;
        }
        iVar4 = FUN_ram_40007554(0,&DAT_ram_3008cb28,0x1000);
        if (((iVar4 == _DAT_ram_3008c268) &&
            (iVar4 = FUN_ram_40006fe6(_DAT_ram_3008c270,0xa9000,0x1000), -1 < iVar4)) &&
           (iVar4 = FUN_ram_40006f9c(_DAT_ram_3008c270,0xa9000,&DAT_ram_3008cb28,0x1000),
           iVar4 == 0x1000)) {
          uVar9 = 0;
          while( true ) {
            uVar2 = 0x1000 - uVar9;
            if (0x100 < uVar2) {
              uVar2 = 0x100;
            }
            uVar6 = FUN_ram_40006f52(_DAT_ram_3008c270,uVar9 + 0xa9000,auStack_120,uVar2);
            puVar8 = &DAT_ram_3008cb28 + uVar9;
            uVar9 = uVar9 + uVar6;
            if ((uVar6 != uVar2) || (iVar4 = FUN_ram_40002fec(auStack_120,puVar8), iVar4 != 0))
            break;
            if (0xfff < uVar9) {
              _DAT_ram_3008c268 = 0;
              DAT_ram_3008c26c = 0;
              _DAT_ram_3008cb20 = 0xa9000;
              DAT_ram_3008cb24 = 1;
              return 1;
            }
          }
        }
      }
      return 0;
    }
  } while (pcVar3 != &DAT_ram_3008db28);
  return 0;
}


/* NanoCore 1.11, address 0x40092758.
 * REA evidence: ev_6c884172fba9c129acb8db5a3b6e7b021acd5bb9955d9c1506f5838c0fdc43fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40092758(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int iVar15;
  char cVar16;
  char *pcVar17;
  int *piVar18;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int aiStack_40 [3];
  
  local_58 = DAT_ram_400938b4;
  uStack_54 = DAT_ram_400938b8;
  uStack_50 = DAT_ram_400938bc;
  uStack_4c = DAT_ram_400938c0;
  uStack_48 = DAT_ram_400938c4;
  uStack_44 = DAT_ram_400938c8;
  if ((_DAT_ram_3008c270 == 0) || (param_1 == 0)) {
    return 0;
  }
  DAT_ram_3008cb24 = 0;
  _DAT_ram_3008db28 = 0;
  DAT_ram_3008c26c = 0;
  _DAT_ram_3008c268 = 0;
  DAT_ram_3008c26d = 0;
  piVar18 = &local_58;
  bVar4 = true;
  bVar2 = 0;
  bVar5 = false;
  cVar16 = '\0';
LAB_ram_4009280e:
  iVar15 = *piVar18;
  iVar7 = FUN_ram_40006f52(_DAT_ram_3008c270,iVar15,&DAT_ram_3008cb28,0x1000);
  if (iVar7 != 0x1000) {
    _DAT_ram_3008c268 = 0;
    DAT_ram_3008c26c = 0;
    DAT_ram_3008cb24 = 0;
    _DAT_ram_3008db28 = 0;
    return 0;
  }
  pcVar17 = &DAT_ram_3008cb28;
  pcVar13 = pcVar17;
  do {
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != -1) {
      bVar4 = false;
      break;
    }
  } while (pcVar13 != &DAT_ram_3008db28);
  puVar14 = (undefined4 *)&DAT_ram_3008cb28;
  puVar12 = (undefined4 *)&DAT_ram_3008b9d0;
  do {
    uVar6 = puVar14[1];
    uVar8 = puVar14[2];
    uVar10 = puVar14[3];
    uVar11 = puVar14[4];
    *puVar12 = *puVar14;
    puVar12[1] = uVar6;
    puVar12[2] = uVar8;
    puVar12[3] = uVar10;
    puVar12[4] = uVar11;
    iVar7 = _DAT_ram_3008cb38;
    puVar14 = puVar14 + 5;
    puVar12 = puVar12 + 5;
  } while (puVar14 != (undefined4 *)&DAT_ram_3008d3c0);
  pcVar13 = &DAT_ram_3008cb28;
  do {
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != -1) {
      pcVar13 = &DAT_ram_3008d3c0;
      goto LAB_ram_400928ae;
    }
  } while (pcVar13 != &DAT_ram_3008db28);
  goto LAB_ram_400928b8;
  while (pcVar13 != &DAT_ram_3008db28) {
LAB_ram_400928ae:
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != -1) goto LAB_ram_400928b8;
  }
  if ((_DAT_ram_3008cb28 == 0x53415442) && (_DAT_ram_3008cb2c == 4)) {
    if (_DAT_ram_3008cb3c == 0x53413232) {
      uVar6 = FUN_ram_40007554(0,&DAT_ram_3008cb28,0x10);
      uVar6 = FUN_ram_40007554(uVar6,&DAT_ram_4009b438,4);
      iVar9 = FUN_ram_40007554(uVar6,&DAT_ram_3008cb3c,0x884);
      if (iVar9 == iVar7) goto LAB_ram_400929cc;
      goto LAB_ram_400928b8;
    }
    if ((_DAT_ram_3008cb38 != 0 || _DAT_ram_3008cb34 != 0) || _DAT_ram_3008cb3c != 0)
    goto LAB_ram_400928b8;
LAB_ram_400929cc:
    iVar9 = FUN_ram_4008fc22(&DAT_ram_3008b9d0);
    iVar7 = _DAT_ram_3008b9e0;
    bVar3 = false;
    if ((iVar9 != 0) && (bVar3 = false, _DAT_ram_3008b9e4 == 0x53413232)) {
      uVar6 = FUN_ram_40007554(0,&DAT_ram_3008b9d0,0x10);
      uVar6 = FUN_ram_40007554(uVar6,&DAT_ram_4009b438,4);
      iVar9 = FUN_ram_40007554(uVar6,&DAT_ram_3008b9e4,0x884);
      bVar3 = iVar7 == iVar9;
    }
    *(bool *)(piVar18 + 1) = bVar3;
    iVar7 = FUN_ram_4008fc22(&DAT_ram_3008b9d0);
    if ((iVar7 != 0) &&
       ((_DAT_ram_3008b9dc == 0 && _DAT_ram_3008b9e0 == 0) && _DAT_ram_3008b9e4 == 0)) {
      *(undefined1 *)((int)piVar18 + 5) = 1;
      if (iVar15 == 0x12000) {
LAB_ram_40092a14:
        DAT_ram_3008c26d = 1;
      }
      goto LAB_ram_400928b8;
    }
    *(undefined1 *)((int)piVar18 + 5) = 0;
    if (iVar15 != 0x12000) goto LAB_ram_400928b8;
    if (bVar3) goto LAB_ram_40092a14;
LAB_ram_40092904:
    if (cVar16 != '\0' || bVar5) goto LAB_ram_400928e6;
    cVar16 = *(char *)((int)piVar18 + 5);
    bVar5 = false;
    if (cVar16 == '\0') goto LAB_ram_400928e6;
    FUN_ram_4000304c(param_1,&DAT_ram_3008b9d0,0x898);
  }
  else {
LAB_ram_400928b8:
    if ((char)piVar18[1] == '\0') goto LAB_ram_40092904;
    if (bVar5) {
      if (_DAT_ram_3008b9dc == *(int *)(param_1 + 0xc)) {
        if (*(byte *)((int)piVar18 + 6) <= bVar2) goto LAB_ram_400928e6;
      }
      else if (_DAT_ram_3008b9dc - *(int *)(param_1 + 0xc) < 0) goto LAB_ram_400928e6;
    }
    FUN_ram_4000304c(param_1,&DAT_ram_3008b9d0,0x898);
    bVar5 = true;
  }
  bVar2 = *(byte *)((int)piVar18 + 6);
  cVar16 = '\x01';
  _DAT_ram_3008cb20 = iVar15;
LAB_ram_400928e6:
  piVar18 = piVar18 + 2;
  if (aiStack_40 == piVar18) {
    if (cVar16 == '\0') {
      if (bVar4) {
        return 2;
      }
      return 0;
    }
    _DAT_ram_3008db28 = 0;
    if (bVar5) {
      _DAT_ram_3008db28 = *(undefined4 *)(param_1 + 0xc);
    }
    DAT_ram_3008cb24 = 1;
    if (_DAT_ram_3008cb20 != 0x12000) {
      DAT_ram_3008cb24 = 1;
      return 1;
    }
    iVar15 = FUN_ram_40006f52(_DAT_ram_3008c270,0x12000,&DAT_ram_3008cb28,0x1000);
    iVar7 = _DAT_ram_3008cb38;
    if (iVar15 != 0x1000) {
      DAT_ram_3008cb24 = 0;
      _DAT_ram_3008db28 = 0;
      return 0;
    }
    while (cVar16 = *pcVar17, pcVar17 = pcVar17 + 1, cVar16 == -1) {
      if (pcVar17 == &DAT_ram_3008db28) {
        DAT_ram_3008cb24 = 0;
        _DAT_ram_3008db28 = 0;
        return 0;
      }
    }
    pcVar13 = &DAT_ram_3008d3c0;
    do {
      cVar16 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      if (cVar16 != -1) {
        DAT_ram_3008cb24 = 0;
        _DAT_ram_3008db28 = 0;
        return 0;
      }
    } while (pcVar13 != &DAT_ram_3008db28);
    if ((_DAT_ram_3008cb28 == 0x53415442) && (_DAT_ram_3008cb2c == 4)) {
      if (_DAT_ram_3008cb3c == 0x53413232) {
        uVar6 = FUN_ram_40007554(0,&DAT_ram_3008cb28,0x10);
        uVar6 = FUN_ram_40007554(uVar6,&DAT_ram_4009b438,4);
        iVar15 = FUN_ram_40007554(uVar6,&DAT_ram_3008cb3c,0x884);
        if (iVar15 != iVar7) {
          DAT_ram_3008cb24 = 0;
          _DAT_ram_3008db28 = 0;
          return 0;
        }
      }
      else if ((_DAT_ram_3008cb34 != 0 || _DAT_ram_3008cb38 != 0) || _DAT_ram_3008cb3c != 0) {
        DAT_ram_3008cb24 = 0;
        _DAT_ram_3008db28 = 0;
        return 0;
      }
      iVar7 = FUN_ram_40002fec(&DAT_ram_3008cb28,param_1,0x898);
      if (iVar7 == 0) {
        _DAT_ram_3008c268 = FUN_ram_40007554(0,&DAT_ram_3008cb28,0x1000);
        DAT_ram_3008c26c = 1;
        return 1;
      }
    }
    DAT_ram_3008cb24 = 0;
    _DAT_ram_3008db28 = 0;
    return 0;
  }
  goto LAB_ram_4009280e;
}


/* NanoCore 1.11, address 0x40092c02.
 * REA evidence: ev_0ec423a31d686bf497f11b2b6783c407406cc45b09c095a1c5df334e503c1df6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40092c02(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined1 auStack_130 [260];
  
  if (((_DAT_ram_3008c270 != 0) ||
      ((_DAT_ram_3008c270 = FUN_ram_40006eee(s_presets_ram_400972c0), _DAT_ram_3008c270 != 0 &&
       (0xa9fff < *(uint *)(_DAT_ram_3008c270 + 0x38))))) &&
     (iVar2 = FUN_ram_40092758(&DAT_ram_3008c288), iVar2 != 0)) {
    if (iVar2 == 2) {
      return 1;
    }
    if ((DAT_ram_3008c26c == '\0') || (iVar2 = FUN_ram_40092418(), iVar2 != 0)) {
      if (DAT_ram_3008c26d == '\0') {
        return 1;
      }
      if (_DAT_ram_3008cb20 == 0xa9000) {
        return 1;
      }
      iVar2 = _DAT_ram_3008db28 + 1;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      if (_DAT_ram_3008c270 != 0) {
        puVar1 = (undefined4 *)&DAT_ram_3008db2c;
        puVar11 = (undefined4 *)&DAT_ram_3008c288;
        do {
          uVar3 = puVar11[1];
          uVar6 = puVar11[2];
          uVar8 = puVar11[3];
          uVar10 = puVar11[4];
          *puVar1 = *puVar11;
          puVar1[1] = uVar3;
          puVar1[2] = uVar6;
          puVar1[3] = uVar8;
          puVar1[4] = uVar10;
          puVar11 = puVar11 + 5;
          puVar1 = puVar1 + 5;
        } while (puVar11 != (undefined4 *)&DAT_ram_3008cb20);
        _DAT_ram_3008db3c = 0;
        _DAT_ram_3008db40 = 0x53413232;
        _DAT_ram_3008db38 = iVar2;
        uVar3 = FUN_ram_40007554(0,&DAT_ram_3008db2c,0x10);
        uVar3 = FUN_ram_40007554(uVar3,&DAT_ram_4009b438,4);
        _DAT_ram_3008db3c = FUN_ram_40007554(uVar3,&DAT_ram_3008db40,0x884);
        puVar1 = (undefined4 *)&DAT_ram_3008cb28;
        memset(&DAT_ram_3008cb28,0xff,0x1000);
        puVar11 = (undefined4 *)&DAT_ram_3008db2c;
        do {
          uVar3 = puVar11[1];
          uVar6 = puVar11[2];
          uVar8 = puVar11[3];
          uVar10 = puVar11[4];
          *puVar1 = *puVar11;
          puVar1[1] = uVar3;
          puVar1[2] = uVar6;
          puVar1[3] = uVar8;
          puVar1[4] = uVar10;
          puVar11 = puVar11 + 5;
          puVar1 = puVar1 + 5;
        } while (puVar11 != (undefined4 *)0x3008e3c4);
        iVar4 = FUN_ram_40006dbe(_DAT_ram_3008c270 + 0x1c);
        if ((iVar4 == 0) || (uVar12 = *(uint *)(iVar4 + 0x20), uVar12 == 0)) {
          uVar9 = 0x1000;
        }
        else {
          if (uVar12 == 0) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uVar12 + 0xfff) / uVar12;
          }
          uVar9 = uVar9 * uVar12;
          if (0x1000 < uVar9) {
            return 0;
          }
        }
        iVar4 = FUN_ram_40006fe6(_DAT_ram_3008c270,0xa9000,uVar9);
        if ((-1 < iVar4) &&
           (iVar4 = FUN_ram_40006f9c(_DAT_ram_3008c270,0xa9000,&DAT_ram_3008cb28,0x1000),
           iVar4 == 0x1000)) {
          uVar12 = 0;
          do {
            uVar9 = 0x1000 - uVar12;
            if (0x100 < uVar9) {
              uVar9 = 0x100;
            }
            uVar5 = FUN_ram_40006f52(_DAT_ram_3008c270,uVar12 + 0xa9000,auStack_130,uVar9);
            puVar7 = &DAT_ram_3008cb28 + uVar12;
            uVar12 = uVar12 + uVar5;
            if (uVar5 != uVar9) {
              return 0;
            }
            iVar4 = FUN_ram_40002fec(auStack_130,puVar7);
            if (iVar4 != 0) {
              return 0;
            }
          } while (uVar12 < 0x1000);
          _DAT_ram_3008cb20 = 0xa9000;
          DAT_ram_3008cb24 = 1;
          _DAT_ram_3008db28 = iVar2;
          return 1;
        }
      }
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40092f1a.
 * REA evidence: ev_841477df328c7fcfdd57ec2e9d94ee48dd265fe1c20a12856db1c42a76249a9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40092f1a(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int *unaff_s3;
  int iVar12;
  
  iVar2 = _DAT_ram_3008db28 + 1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  iVar12 = 0x18000;
  if ((DAT_ram_3008cb24 != '\0') && (_DAT_ram_3008cb20 != 0xa9000)) {
    iVar12 = 0xa9000;
  }
  puVar1 = (undefined4 *)&DAT_ram_3008db2c;
  FUN_ram_4000304c(&DAT_ram_3008db2c);
  _DAT_ram_3008db3c = 0;
  _DAT_ram_3008db40 = 0x53413232;
  _DAT_ram_3008db38 = iVar2;
  uVar3 = FUN_ram_40007554(0,&DAT_ram_3008db2c,0x10);
  uVar3 = FUN_ram_40007554(uVar3,&DAT_ram_4009b438,4);
  _DAT_ram_3008db3c = FUN_ram_40007554(uVar3,&DAT_ram_3008db40,0x884);
  puVar4 = (undefined4 *)&DAT_ram_3008cb28;
  memset(&DAT_ram_3008cb28,0xff,0x1000);
  do {
    uVar3 = puVar1[1];
    uVar7 = puVar1[2];
    uVar9 = puVar1[3];
    uVar10 = puVar1[4];
    *puVar4 = *puVar1;
    puVar4[1] = uVar3;
    puVar4[2] = uVar7;
    puVar4[3] = uVar9;
    puVar4[4] = uVar10;
    puVar1 = puVar1 + 5;
    puVar4 = puVar4 + 5;
  } while (puVar1 != (undefined4 *)0x3008e3c4);
  iVar5 = FUN_ram_40006dbe(*unaff_s3 + 0x1c);
  if ((iVar5 == 0) || (uVar11 = *(uint *)(iVar5 + 0x20), uVar11 == 0)) {
    uVar8 = 0x1000;
  }
  else {
    if (uVar11 == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uVar11 + 0xfff) / uVar11;
    }
    uVar8 = uVar8 * uVar11;
    if (0x1000 < uVar8) {
      return 0;
    }
  }
  iVar5 = FUN_ram_40006fe6(*unaff_s3,iVar12,uVar8);
  if ((-1 < iVar5) &&
     (iVar5 = FUN_ram_40006f9c(*unaff_s3,iVar12,&DAT_ram_3008cb28,0x1000), iVar5 == 0x1000)) {
    uVar11 = 0;
    while( true ) {
      uVar8 = 0x1000 - uVar11;
      if (0x100 < uVar8) {
        uVar8 = 0x100;
      }
      uVar6 = FUN_ram_40006f52(*unaff_s3,iVar12 + uVar11);
      uVar11 = uVar11 + uVar6;
      if ((uVar6 != uVar8) || (iVar5 = FUN_ram_40002fec(), iVar5 != 0)) break;
      if (0xfff < uVar11) {
        _DAT_ram_3008cb20 = iVar12;
        DAT_ram_3008cb24 = 1;
        _DAT_ram_3008db28 = iVar2;
        return 1;
      }
    }
  }
  return 0;
}


