/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4008f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4008f170.
 * REA evidence: ev_d88ae6b55cf51b2d5e78617e655edff0a12f606041e25b5a243e0cdc267dc37f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008f170(int param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  size_t __n;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_140 [268];
  
  if (DAT_ram_3008aef0 == '\0') {
    return 0;
  }
  if (param_1 != _DAT_ram_3008aef4) {
    return 0;
  }
  if (param_2 != _DAT_ram_3008aef0 >> 0x18) {
    return 0;
  }
  if ((DAT_ram_3008aef1 == '\0') || (DAT_ram_3008aef2 == '\0')) {
LAB_ram_4008f2e2:
    if (_DAT_ram_3008aeec == (void *)0x0) goto LAB_ram_4008f302;
  }
  else {
    if (_DAT_ram_3008aee8 != (void *)0x0) {
      if (param_1 == 1) {
        iVar4 = FUN_ram_4008d258(param_2);
      }
      else {
        iVar4 = FUN_ram_4008d24c(param_2);
      }
      if (_DAT_ram_3008aef4 == 1) {
        iVar2 = 0x1000;
        uVar9 = 0x1000;
      }
      else {
        iVar2 = 0x3000;
        uVar9 = 0x3000;
      }
      iVar5 = FUN_ram_4000755e(0,_DAT_ram_3008aee8,uVar9);
      iVar6 = FUN_ram_40006ff2(_DAT_ram_3008aee4,iVar4,uVar9);
      if ((iVar6 < 0) ||
         (iVar6 = FUN_ram_40006fa8(_DAT_ram_3008aee4,iVar4,_DAT_ram_3008aee8,uVar9),
         pvVar1 = _DAT_ram_3008aee8, iVar6 != iVar2)) {
        return 0xffffffff;
      }
      iVar2 = 0;
      if (_DAT_ram_3008aee8 == (void *)0x0) {
        uVar3 = 0;
        do {
          uVar8 = uVar9 - uVar3;
          if (0x100 < uVar8) {
            uVar8 = 0x100;
          }
          uVar7 = fal_partition_read(_DAT_ram_3008aee4,uVar3 + iVar4,auStack_140,uVar8);
          uVar3 = uVar3 + uVar8;
          if (uVar8 != uVar7) {
            return 0xffffffff;
          }
          iVar2 = FUN_ram_4000755e(iVar2,auStack_140,uVar8);
        } while (uVar3 < uVar9);
      }
      else {
        uVar3 = 0;
        do {
          uVar8 = uVar9 - uVar3;
          if (0x100 < uVar8) {
            uVar8 = 0x100;
          }
          uVar7 = fal_partition_read(_DAT_ram_3008aee4,iVar4 + uVar3,auStack_140,uVar8);
          iVar6 = (int)pvVar1 + uVar3;
          uVar3 = uVar3 + uVar7;
          if (uVar7 != uVar8) {
            return 0xffffffff;
          }
          iVar6 = FUN_ram_40002ffc(auStack_140,iVar6,uVar7);
          if (iVar6 != 0) {
            return 0xffffffff;
          }
          iVar2 = FUN_ram_4000755e(iVar2,auStack_140,uVar7);
        } while (uVar3 < uVar9);
      }
      if (iVar2 != iVar5) {
        return 0xffffffff;
      }
      _DAT_ram_3008aef0 = (ushort)DAT_ram_3008aef0;
      goto LAB_ram_4008f2e2;
    }
    if (_DAT_ram_3008aeec == (void *)0x0) {
      _DAT_ram_3008aef0 = 0;
      _DAT_ram_3008aef4 = 0;
      _DAT_ram_3008aef8 = 0;
      return 0;
    }
  }
  memset(_DAT_ram_3008aeec,0,_DAT_ram_3008aef8);
  FUN_ram_4002c3f4();
  _DAT_ram_3008aeec = (void *)0x0;
LAB_ram_4008f302:
  if (_DAT_ram_3008aee8 != (void *)0x0) {
    __n = 0x3000;
    if (_DAT_ram_3008aef4 == 1) {
      __n = 0x1000;
    }
    memset(_DAT_ram_3008aee8,0,__n);
    FUN_ram_4002c3f4();
    _DAT_ram_3008aee8 = (void *)0x0;
  }
  _DAT_ram_3008aef8 = 0;
  _DAT_ram_3008aef4 = 0;
  _DAT_ram_3008aef0 = 0;
  return 0;
}


/* NanoCore 1.10, address 0x4008f3a8.
 * REA evidence: ev_e12584aec844d73bceff03a5c185b9e64704d228dbf3150fe07597d61a60de40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008f3a8(int param_1,uint param_2)

{
  size_t __n;
  
  if (((DAT_ram_3008aef0 != '\0') && (param_1 == _DAT_ram_3008aef4)) &&
     (_DAT_ram_3008aef0 >> 0x18 == param_2)) {
    if (_DAT_ram_3008aeec != (void *)0x0) {
      memset(_DAT_ram_3008aeec,0,_DAT_ram_3008aef8);
      FUN_ram_4002c3f4();
      _DAT_ram_3008aeec = (void *)0x0;
    }
    if (_DAT_ram_3008aee8 != (void *)0x0) {
      __n = 0x3000;
      if (_DAT_ram_3008aef4 == 1) {
        __n = 0x1000;
      }
      memset(_DAT_ram_3008aee8,0,__n);
      FUN_ram_4002c3f4();
      _DAT_ram_3008aee8 = (void *)0x0;
    }
    _DAT_ram_3008aef0 = 0;
    _DAT_ram_3008aef4 = 0;
    _DAT_ram_3008aef8 = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4008f438.
 * REA evidence: ev_29d083f01c6a537b5400a7d59031f0d54f3c8d0c7a8f226316ae0f69b75c2195
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008f438(void)

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
  
  if (_DAT_ram_3008aee4 == 0) {
    return 0;
  }
  iVar4 = FUN_ram_40006dcc(_DAT_ram_3008aee4 + 0x1c);
  if (_DAT_ram_3008aee4 == 0) {
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
  iVar5 = fal_partition_read(_DAT_ram_3008aee4,0x12000,&DAT_ram_3008b79c,0x1000);
  iVar4 = _DAT_ram_3008b7ac;
  if (iVar5 != 0x1000) {
    return 0;
  }
  pcVar3 = &DAT_ram_3008b79c;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 != -1) {
      pcVar3 = &DAT_ram_3008c034;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        if (cVar1 != -1) {
          return 0;
        }
      } while (pcVar3 != &DAT_ram_3008c79c);
      if ((_DAT_ram_3008b79c == 0x53415442) && (_DAT_ram_3008b7a0 == 4)) {
        if (_DAT_ram_3008b7b0 == 0x53413232) {
          uVar7 = FUN_ram_4000755e(0,&DAT_ram_3008b79c,0x10);
          uVar7 = FUN_ram_4000755e(uVar7,&DAT_ram_40099418,4);
          iVar5 = FUN_ram_4000755e(uVar7,&DAT_ram_3008b7b0,0x884);
          if (iVar5 != iVar4) {
            return 0;
          }
        }
        else if ((_DAT_ram_3008b7ac != 0 || _DAT_ram_3008b7a8 != 0) || _DAT_ram_3008b7b0 != 0) {
          return 0;
        }
        iVar4 = FUN_ram_4000755e(0,&DAT_ram_3008b79c,0x1000);
        if (((iVar4 == _DAT_ram_3008aedc) &&
            (iVar4 = FUN_ram_40006ff2(_DAT_ram_3008aee4,0xa9000,0x1000), -1 < iVar4)) &&
           (iVar4 = FUN_ram_40006fa8(_DAT_ram_3008aee4,0xa9000,&DAT_ram_3008b79c,0x1000),
           iVar4 == 0x1000)) {
          uVar9 = 0;
          while( true ) {
            uVar2 = 0x1000 - uVar9;
            if (0x100 < uVar2) {
              uVar2 = 0x100;
            }
            uVar6 = fal_partition_read(_DAT_ram_3008aee4,uVar9 + 0xa9000,auStack_120,uVar2);
            puVar8 = &DAT_ram_3008b79c + uVar9;
            uVar9 = uVar9 + uVar6;
            if ((uVar6 != uVar2) || (iVar4 = FUN_ram_40002ffc(auStack_120,puVar8), iVar4 != 0))
            break;
            if (0xfff < uVar9) {
              _DAT_ram_3008aedc = 0;
              DAT_ram_3008aee0 = 0;
              _DAT_ram_3008b794 = 0xa9000;
              DAT_ram_3008b798 = 1;
              return 1;
            }
          }
        }
      }
      return 0;
    }
  } while (pcVar3 != &DAT_ram_3008c79c);
  return 0;
}


/* NanoCore 1.10, address 0x4008f778.
 * REA evidence: ev_7d94812cb61fe19a674939d9dffc946cbc86dee1b431fc6d4d521b4dcd9855ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008f778(int param_1)

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
  
  local_58 = DAT_ram_40091af4;
  uStack_54 = DAT_ram_40091af8;
  uStack_50 = DAT_ram_40091afc;
  uStack_4c = DAT_ram_40091b00;
  uStack_48 = DAT_ram_40091b04;
  uStack_44 = DAT_ram_40091b08;
  if ((_DAT_ram_3008aee4 == 0) || (param_1 == 0)) {
    return 0;
  }
  DAT_ram_3008b798 = 0;
  _DAT_ram_3008c79c = 0;
  DAT_ram_3008aee0 = 0;
  _DAT_ram_3008aedc = 0;
  DAT_ram_3008aee1 = 0;
  piVar18 = &local_58;
  bVar4 = true;
  bVar2 = 0;
  bVar5 = false;
  cVar16 = '\0';
LAB_ram_4008f82e:
  iVar15 = *piVar18;
  iVar7 = fal_partition_read(_DAT_ram_3008aee4,iVar15,&DAT_ram_3008b79c,0x1000);
  if (iVar7 != 0x1000) {
    _DAT_ram_3008aedc = 0;
    DAT_ram_3008aee0 = 0;
    DAT_ram_3008b798 = 0;
    _DAT_ram_3008c79c = 0;
    return 0;
  }
  pcVar17 = &DAT_ram_3008b79c;
  pcVar13 = pcVar17;
  do {
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != -1) {
      bVar4 = false;
      break;
    }
  } while (pcVar13 != &DAT_ram_3008c79c);
  puVar14 = (undefined4 *)&DAT_ram_3008b79c;
  puVar12 = (undefined4 *)&DAT_ram_3008a644;
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
    iVar7 = _DAT_ram_3008b7ac;
    puVar14 = puVar14 + 5;
    puVar12 = puVar12 + 5;
  } while (puVar14 != (undefined4 *)&DAT_ram_3008c034);
  pcVar13 = &DAT_ram_3008b79c;
  do {
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != -1) {
      pcVar13 = &DAT_ram_3008c034;
      goto LAB_ram_4008f8ce;
    }
  } while (pcVar13 != &DAT_ram_3008c79c);
  goto LAB_ram_4008f8d8;
  while (pcVar13 != &DAT_ram_3008c79c) {
LAB_ram_4008f8ce:
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != -1) goto LAB_ram_4008f8d8;
  }
  if ((_DAT_ram_3008b79c == 0x53415442) && (_DAT_ram_3008b7a0 == 4)) {
    if (_DAT_ram_3008b7b0 == 0x53413232) {
      uVar6 = FUN_ram_4000755e(0,&DAT_ram_3008b79c,0x10);
      uVar6 = FUN_ram_4000755e(uVar6,&DAT_ram_40099418,4);
      iVar9 = FUN_ram_4000755e(uVar6,&DAT_ram_3008b7b0,0x884);
      if (iVar9 == iVar7) goto LAB_ram_4008f9ec;
      goto LAB_ram_4008f8d8;
    }
    if ((_DAT_ram_3008b7ac != 0 || _DAT_ram_3008b7a8 != 0) || _DAT_ram_3008b7b0 != 0)
    goto LAB_ram_4008f8d8;
LAB_ram_4008f9ec:
    iVar9 = FUN_ram_4008d260(&DAT_ram_3008a644);
    iVar7 = _DAT_ram_3008a654;
    bVar3 = false;
    if ((iVar9 != 0) && (bVar3 = false, _DAT_ram_3008a658 == 0x53413232)) {
      uVar6 = FUN_ram_4000755e(0,&DAT_ram_3008a644,0x10);
      uVar6 = FUN_ram_4000755e(uVar6,&DAT_ram_40099418,4);
      iVar9 = FUN_ram_4000755e(uVar6,&DAT_ram_3008a658,0x884);
      bVar3 = iVar7 == iVar9;
    }
    *(bool *)(piVar18 + 1) = bVar3;
    iVar7 = FUN_ram_4008d260(&DAT_ram_3008a644);
    if ((iVar7 != 0) &&
       ((_DAT_ram_3008a650 == 0 && _DAT_ram_3008a654 == 0) && _DAT_ram_3008a658 == 0)) {
      *(undefined1 *)((int)piVar18 + 5) = 1;
      if (iVar15 == 0x12000) {
LAB_ram_4008fa34:
        DAT_ram_3008aee1 = 1;
      }
      goto LAB_ram_4008f8d8;
    }
    *(undefined1 *)((int)piVar18 + 5) = 0;
    if (iVar15 != 0x12000) goto LAB_ram_4008f8d8;
    if (bVar3) goto LAB_ram_4008fa34;
LAB_ram_4008f924:
    if (cVar16 != '\0' || bVar5) goto LAB_ram_4008f906;
    cVar16 = *(char *)((int)piVar18 + 5);
    bVar5 = false;
    if (cVar16 == '\0') goto LAB_ram_4008f906;
    FUN_ram_4000305c(param_1,&DAT_ram_3008a644,0x898);
  }
  else {
LAB_ram_4008f8d8:
    if ((char)piVar18[1] == '\0') goto LAB_ram_4008f924;
    if (bVar5) {
      if (_DAT_ram_3008a650 == *(int *)(param_1 + 0xc)) {
        if (*(byte *)((int)piVar18 + 6) <= bVar2) goto LAB_ram_4008f906;
      }
      else if (_DAT_ram_3008a650 - *(int *)(param_1 + 0xc) < 0) goto LAB_ram_4008f906;
    }
    FUN_ram_4000305c(param_1,&DAT_ram_3008a644,0x898);
    bVar5 = true;
  }
  bVar2 = *(byte *)((int)piVar18 + 6);
  cVar16 = '\x01';
  _DAT_ram_3008b794 = iVar15;
LAB_ram_4008f906:
  piVar18 = piVar18 + 2;
  if (aiStack_40 == piVar18) {
    if (cVar16 == '\0') {
      if (bVar4) {
        return 2;
      }
      return 0;
    }
    _DAT_ram_3008c79c = 0;
    if (bVar5) {
      _DAT_ram_3008c79c = *(undefined4 *)(param_1 + 0xc);
    }
    DAT_ram_3008b798 = 1;
    if (_DAT_ram_3008b794 != 0x12000) {
      DAT_ram_3008b798 = 1;
      return 1;
    }
    iVar15 = fal_partition_read(_DAT_ram_3008aee4,0x12000,&DAT_ram_3008b79c,0x1000);
    iVar7 = _DAT_ram_3008b7ac;
    if (iVar15 != 0x1000) {
      DAT_ram_3008b798 = 0;
      _DAT_ram_3008c79c = 0;
      return 0;
    }
    while (cVar16 = *pcVar17, pcVar17 = pcVar17 + 1, cVar16 == -1) {
      if (pcVar17 == &DAT_ram_3008c79c) {
        DAT_ram_3008b798 = 0;
        _DAT_ram_3008c79c = 0;
        return 0;
      }
    }
    pcVar13 = &DAT_ram_3008c034;
    do {
      cVar16 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      if (cVar16 != -1) {
        DAT_ram_3008b798 = 0;
        _DAT_ram_3008c79c = 0;
        return 0;
      }
    } while (pcVar13 != &DAT_ram_3008c79c);
    if ((_DAT_ram_3008b79c == 0x53415442) && (_DAT_ram_3008b7a0 == 4)) {
      if (_DAT_ram_3008b7b0 == 0x53413232) {
        uVar6 = FUN_ram_4000755e(0,&DAT_ram_3008b79c,0x10);
        uVar6 = FUN_ram_4000755e(uVar6,&DAT_ram_40099418,4);
        iVar15 = FUN_ram_4000755e(uVar6,&DAT_ram_3008b7b0,0x884);
        if (iVar15 != iVar7) {
          DAT_ram_3008b798 = 0;
          _DAT_ram_3008c79c = 0;
          return 0;
        }
      }
      else if ((_DAT_ram_3008b7a8 != 0 || _DAT_ram_3008b7ac != 0) || _DAT_ram_3008b7b0 != 0) {
        DAT_ram_3008b798 = 0;
        _DAT_ram_3008c79c = 0;
        return 0;
      }
      iVar7 = FUN_ram_40002ffc(&DAT_ram_3008b79c,param_1,0x898);
      if (iVar7 == 0) {
        _DAT_ram_3008aedc = FUN_ram_4000755e(0,&DAT_ram_3008b79c,0x1000);
        DAT_ram_3008aee0 = 1;
        return 1;
      }
    }
    DAT_ram_3008b798 = 0;
    _DAT_ram_3008c79c = 0;
    return 0;
  }
  goto LAB_ram_4008f82e;
}


/* NanoCore 1.10, address 0x4008fc22.
 * REA evidence: ev_b6917fee50631685746de653085cc25358b43cffe3d63e7a9f1d55fe37e8a4ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008fc22(void)

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
  
  if (((_DAT_ram_3008aee4 != 0) ||
      ((_DAT_ram_3008aee4 = fal_partition_find(s_presets_ram_40095444), _DAT_ram_3008aee4 != 0 &&
       (0xa9fff < *(uint *)(_DAT_ram_3008aee4 + 0x38))))) &&
     (iVar2 = FUN_ram_4008f778(&DAT_ram_3008aefc), iVar2 != 0)) {
    if (iVar2 == 2) {
      return 1;
    }
    if ((DAT_ram_3008aee0 == '\0') || (iVar2 = FUN_ram_4008f438(), iVar2 != 0)) {
      if (DAT_ram_3008aee1 == '\0') {
        return 1;
      }
      if (_DAT_ram_3008b794 == 0xa9000) {
        return 1;
      }
      iVar2 = _DAT_ram_3008c79c + 1;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      if (_DAT_ram_3008aee4 != 0) {
        puVar1 = (undefined4 *)&DAT_ram_3008c7a0;
        puVar11 = (undefined4 *)&DAT_ram_3008aefc;
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
        } while (puVar11 != (undefined4 *)&DAT_ram_3008b794);
        _DAT_ram_3008c7b0 = 0;
        _DAT_ram_3008c7b4 = 0x53413232;
        _DAT_ram_3008c7ac = iVar2;
        uVar3 = FUN_ram_4000755e(0,&DAT_ram_3008c7a0,0x10);
        uVar3 = FUN_ram_4000755e(uVar3,&DAT_ram_40099418,4);
        _DAT_ram_3008c7b0 = FUN_ram_4000755e(uVar3,&DAT_ram_3008c7b4,0x884);
        puVar1 = (undefined4 *)&DAT_ram_3008b79c;
        memset(&DAT_ram_3008b79c,0xff,0x1000);
        puVar11 = (undefined4 *)&DAT_ram_3008c7a0;
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
        } while (puVar11 != (undefined4 *)0x3008d038);
        iVar4 = FUN_ram_40006dcc(_DAT_ram_3008aee4 + 0x1c);
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
        iVar4 = FUN_ram_40006ff2(_DAT_ram_3008aee4,0xa9000,uVar9);
        if ((-1 < iVar4) &&
           (iVar4 = FUN_ram_40006fa8(_DAT_ram_3008aee4,0xa9000,&DAT_ram_3008b79c,0x1000),
           iVar4 == 0x1000)) {
          uVar12 = 0;
          do {
            uVar9 = 0x1000 - uVar12;
            if (0x100 < uVar9) {
              uVar9 = 0x100;
            }
            uVar5 = fal_partition_read(_DAT_ram_3008aee4,uVar12 + 0xa9000,auStack_130,uVar9);
            puVar7 = &DAT_ram_3008b79c + uVar12;
            uVar12 = uVar12 + uVar5;
            if (uVar5 != uVar9) {
              return 0;
            }
            iVar4 = FUN_ram_40002ffc(auStack_130,puVar7);
            if (iVar4 != 0) {
              return 0;
            }
          } while (uVar12 < 0x1000);
          _DAT_ram_3008b794 = 0xa9000;
          DAT_ram_3008b798 = 1;
          _DAT_ram_3008c79c = iVar2;
          return 1;
        }
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4008ff3a.
 * REA evidence: ev_79b728698b2f51376242093e4e754a6ae4538429e8bfac6fd4392bb36ad4edcd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008ff3a(void)

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
  
  iVar2 = _DAT_ram_3008c79c + 1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  iVar12 = 0x18000;
  if ((DAT_ram_3008b798 != '\0') && (_DAT_ram_3008b794 != 0xa9000)) {
    iVar12 = 0xa9000;
  }
  puVar1 = (undefined4 *)&DAT_ram_3008c7a0;
  FUN_ram_4000305c(&DAT_ram_3008c7a0);
  _DAT_ram_3008c7b0 = 0;
  _DAT_ram_3008c7b4 = 0x53413232;
  _DAT_ram_3008c7ac = iVar2;
  uVar3 = FUN_ram_4000755e(0,&DAT_ram_3008c7a0,0x10);
  uVar3 = FUN_ram_4000755e(uVar3,&DAT_ram_40099418,4);
  _DAT_ram_3008c7b0 = FUN_ram_4000755e(uVar3,&DAT_ram_3008c7b4,0x884);
  puVar4 = (undefined4 *)&DAT_ram_3008b79c;
  memset(&DAT_ram_3008b79c,0xff,0x1000);
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
  } while (puVar1 != (undefined4 *)0x3008d038);
  iVar5 = FUN_ram_40006dcc(*unaff_s3 + 0x1c);
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
  iVar5 = FUN_ram_40006ff2(*unaff_s3,iVar12,uVar8);
  if ((-1 < iVar5) &&
     (iVar5 = FUN_ram_40006fa8(*unaff_s3,iVar12,&DAT_ram_3008b79c,0x1000), iVar5 == 0x1000)) {
    uVar11 = 0;
    while( true ) {
      uVar8 = 0x1000 - uVar11;
      if (0x100 < uVar8) {
        uVar8 = 0x100;
      }
      uVar6 = fal_partition_read(*unaff_s3,iVar12 + uVar11);
      uVar11 = uVar11 + uVar6;
      if ((uVar6 != uVar8) || (iVar5 = FUN_ram_40002ffc(), iVar5 != 0)) break;
      if (0xfff < uVar11) {
        _DAT_ram_3008b794 = iVar12;
        DAT_ram_3008b798 = 1;
        _DAT_ram_3008c79c = iVar2;
        return 1;
      }
    }
  }
  return 0;
}


