/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40094000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40094038.
 * REA evidence: ev_51cdb470b37735c39f90b6b4799e4e3fad3ff76cde8de14ab748963ce48c162b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40094038(int param_1)

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
  
  local_58 = DAT_ram_400959dc;
  uStack_54 = DAT_ram_400959e0;
  uStack_50 = DAT_ram_400959e4;
  uStack_4c = DAT_ram_400959e8;
  uStack_48 = DAT_ram_400959ec;
  uStack_44 = DAT_ram_400959f0;
  if ((_DAT_ram_3008c2f0 == 0) || (param_1 == 0)) {
    return 0;
  }
  DAT_ram_3008cba4 = 0;
  _DAT_ram_3008dba8 = 0;
  DAT_ram_3008c2ec = 0;
  _DAT_ram_3008c2e8 = 0;
  DAT_ram_3008c2ed = 0;
  piVar18 = &local_58;
  bVar4 = true;
  bVar2 = 0;
  bVar5 = false;
  cVar16 = '\0';
LAB_ram_400940ee:
  iVar15 = *piVar18;
  iVar7 = fal_partition_read(_DAT_ram_3008c2f0,iVar15,&DAT_ram_3008cba8,0x1000);
  if (iVar7 != 0x1000) {
    _DAT_ram_3008c2e8 = 0;
    DAT_ram_3008c2ec = 0;
    DAT_ram_3008cba4 = 0;
    _DAT_ram_3008dba8 = 0;
    return 0;
  }
  pcVar17 = &DAT_ram_3008cba8;
  pcVar13 = pcVar17;
  do {
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != -1) {
      bVar4 = false;
      break;
    }
  } while (pcVar13 != &DAT_ram_3008dba8);
  puVar14 = (undefined4 *)&DAT_ram_3008cba8;
  puVar12 = (undefined4 *)&DAT_ram_3008ba50;
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
    iVar7 = _DAT_ram_3008cbb8;
    puVar14 = puVar14 + 5;
    puVar12 = puVar12 + 5;
  } while (puVar14 != (undefined4 *)&DAT_ram_3008d440);
  pcVar13 = &DAT_ram_3008cba8;
  do {
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != -1) {
      pcVar13 = &DAT_ram_3008d440;
      goto LAB_ram_4009418e;
    }
  } while (pcVar13 != &DAT_ram_3008dba8);
  goto LAB_ram_40094198;
  while (pcVar13 != &DAT_ram_3008dba8) {
LAB_ram_4009418e:
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    if (cVar1 != -1) goto LAB_ram_40094198;
  }
  if ((_DAT_ram_3008cba8 == 0x53415442) && (_DAT_ram_3008cbac == 4)) {
    if (_DAT_ram_3008cbbc == 0x53413232) {
      uVar6 = FUN_ram_40007450(0,&DAT_ram_3008cba8,0x10);
      uVar6 = FUN_ram_40007450(uVar6,&DAT_ram_400a1450,4);
      iVar9 = FUN_ram_40007450(uVar6,&DAT_ram_3008cbbc,0x884);
      if (iVar9 == iVar7) goto LAB_ram_400942ac;
      goto LAB_ram_40094198;
    }
    if ((_DAT_ram_3008cbb8 != 0 || _DAT_ram_3008cbb4 != 0) || _DAT_ram_3008cbbc != 0)
    goto LAB_ram_40094198;
LAB_ram_400942ac:
    iVar9 = FUN_ram_400914f2(&DAT_ram_3008ba50);
    iVar7 = _DAT_ram_3008ba60;
    bVar3 = false;
    if ((iVar9 != 0) && (bVar3 = false, _DAT_ram_3008ba64 == 0x53413232)) {
      uVar6 = FUN_ram_40007450(0,&DAT_ram_3008ba50,0x10);
      uVar6 = FUN_ram_40007450(uVar6,&DAT_ram_400a1450,4);
      iVar9 = FUN_ram_40007450(uVar6,&DAT_ram_3008ba64,0x884);
      bVar3 = iVar7 == iVar9;
    }
    *(bool *)(piVar18 + 1) = bVar3;
    iVar7 = FUN_ram_400914f2(&DAT_ram_3008ba50);
    if ((iVar7 != 0) &&
       ((_DAT_ram_3008ba5c == 0 && _DAT_ram_3008ba60 == 0) && _DAT_ram_3008ba64 == 0)) {
      *(undefined1 *)((int)piVar18 + 5) = 1;
      if (iVar15 == 0x12000) {
LAB_ram_400942f4:
        DAT_ram_3008c2ed = 1;
      }
      goto LAB_ram_40094198;
    }
    *(undefined1 *)((int)piVar18 + 5) = 0;
    if (iVar15 != 0x12000) goto LAB_ram_40094198;
    if (bVar3) goto LAB_ram_400942f4;
LAB_ram_400941e4:
    if (cVar16 != '\0' || bVar5) goto LAB_ram_400941c6;
    cVar16 = *(char *)((int)piVar18 + 5);
    bVar5 = false;
    if (cVar16 == '\0') goto LAB_ram_400941c6;
    FUN_ram_4000303c(param_1,&DAT_ram_3008ba50,0x898);
  }
  else {
LAB_ram_40094198:
    if ((char)piVar18[1] == '\0') goto LAB_ram_400941e4;
    if (bVar5) {
      if (_DAT_ram_3008ba5c == *(int *)(param_1 + 0xc)) {
        if (*(byte *)((int)piVar18 + 6) <= bVar2) goto LAB_ram_400941c6;
      }
      else if (_DAT_ram_3008ba5c - *(int *)(param_1 + 0xc) < 0) goto LAB_ram_400941c6;
    }
    FUN_ram_4000303c(param_1,&DAT_ram_3008ba50,0x898);
    bVar5 = true;
  }
  bVar2 = *(byte *)((int)piVar18 + 6);
  cVar16 = '\x01';
  _DAT_ram_3008cba0 = iVar15;
LAB_ram_400941c6:
  piVar18 = piVar18 + 2;
  if (aiStack_40 == piVar18) {
    if (cVar16 == '\0') {
      if (bVar4) {
        return 2;
      }
      return 0;
    }
    _DAT_ram_3008dba8 = 0;
    if (bVar5) {
      _DAT_ram_3008dba8 = *(undefined4 *)(param_1 + 0xc);
    }
    DAT_ram_3008cba4 = 1;
    if (_DAT_ram_3008cba0 != 0x12000) {
      DAT_ram_3008cba4 = 1;
      return 1;
    }
    iVar15 = fal_partition_read(_DAT_ram_3008c2f0,0x12000,&DAT_ram_3008cba8,0x1000);
    iVar7 = _DAT_ram_3008cbb8;
    if (iVar15 != 0x1000) {
      DAT_ram_3008cba4 = 0;
      _DAT_ram_3008dba8 = 0;
      return 0;
    }
    while (cVar16 = *pcVar17, pcVar17 = pcVar17 + 1, cVar16 == -1) {
      if (pcVar17 == &DAT_ram_3008dba8) {
        DAT_ram_3008cba4 = 0;
        _DAT_ram_3008dba8 = 0;
        return 0;
      }
    }
    pcVar13 = &DAT_ram_3008d440;
    do {
      cVar16 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      if (cVar16 != -1) {
        DAT_ram_3008cba4 = 0;
        _DAT_ram_3008dba8 = 0;
        return 0;
      }
    } while (pcVar13 != &DAT_ram_3008dba8);
    if ((_DAT_ram_3008cba8 == 0x53415442) && (_DAT_ram_3008cbac == 4)) {
      if (_DAT_ram_3008cbbc == 0x53413232) {
        uVar6 = FUN_ram_40007450(0,&DAT_ram_3008cba8,0x10);
        uVar6 = FUN_ram_40007450(uVar6,&DAT_ram_400a1450,4);
        iVar15 = FUN_ram_40007450(uVar6,&DAT_ram_3008cbbc,0x884);
        if (iVar15 != iVar7) {
          DAT_ram_3008cba4 = 0;
          _DAT_ram_3008dba8 = 0;
          return 0;
        }
      }
      else if ((_DAT_ram_3008cbb4 != 0 || _DAT_ram_3008cbb8 != 0) || _DAT_ram_3008cbbc != 0) {
        DAT_ram_3008cba4 = 0;
        _DAT_ram_3008dba8 = 0;
        return 0;
      }
      iVar7 = FUN_ram_40002fdc(&DAT_ram_3008cba8,param_1,0x898);
      if (iVar7 == 0) {
        _DAT_ram_3008c2e8 = FUN_ram_40007450(0,&DAT_ram_3008cba8,0x1000);
        DAT_ram_3008c2ec = 1;
        return 1;
      }
    }
    DAT_ram_3008cba4 = 0;
    _DAT_ram_3008dba8 = 0;
    return 0;
  }
  goto LAB_ram_400940ee;
}


/* NanoCore 1.12, address 0x400944e2.
 * REA evidence: ev_a5d98bfef2d196b1997265eb6d099d346992e98cf97eaaefd3b07c8643e82942
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400944e2(void)

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
  
  if (((_DAT_ram_3008c2f0 != 0) ||
      ((_DAT_ram_3008c2f0 = FUN_ram_40006dec(s_presets_ram_4009c568), _DAT_ram_3008c2f0 != 0 &&
       (0xa9fff < *(uint *)(_DAT_ram_3008c2f0 + 0x38))))) &&
     (iVar2 = FUN_ram_40094038(&DAT_ram_3008c308), iVar2 != 0)) {
    if (iVar2 == 2) {
      return 1;
    }
    if ((DAT_ram_3008c2ec == '\0') || (iVar2 = FUN_ram_40093cf8(), iVar2 != 0)) {
      if (DAT_ram_3008c2ed == '\0') {
        return 1;
      }
      if (_DAT_ram_3008cba0 == 0xa9000) {
        return 1;
      }
      iVar2 = _DAT_ram_3008dba8 + 1;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      if (_DAT_ram_3008c2f0 != 0) {
        puVar1 = (undefined4 *)&DAT_ram_3008dbac;
        puVar11 = (undefined4 *)&DAT_ram_3008c308;
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
        } while (puVar11 != (undefined4 *)&DAT_ram_3008cba0);
        _DAT_ram_3008dbbc = 0;
        _DAT_ram_3008dbc0 = 0x53413232;
        _DAT_ram_3008dbb8 = iVar2;
        uVar3 = FUN_ram_40007450(0,&DAT_ram_3008dbac,0x10);
        uVar3 = FUN_ram_40007450(uVar3,&DAT_ram_400a1450,4);
        _DAT_ram_3008dbbc = FUN_ram_40007450(uVar3,&DAT_ram_3008dbc0,0x884);
        puVar1 = (undefined4 *)&DAT_ram_3008cba8;
        memset(&DAT_ram_3008cba8,0xff,0x1000);
        puVar11 = (undefined4 *)&DAT_ram_3008dbac;
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
        } while (puVar11 != (undefined4 *)0x3008e444);
        iVar4 = FUN_ram_40006cbe(_DAT_ram_3008c2f0 + 0x1c);
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
        iVar4 = FUN_ram_40006ee4(_DAT_ram_3008c2f0,0xa9000,uVar9);
        if ((-1 < iVar4) &&
           (iVar4 = FUN_ram_40006e9a(_DAT_ram_3008c2f0,0xa9000,&DAT_ram_3008cba8,0x1000),
           iVar4 == 0x1000)) {
          uVar12 = 0;
          do {
            uVar9 = 0x1000 - uVar12;
            if (0x100 < uVar9) {
              uVar9 = 0x100;
            }
            uVar5 = fal_partition_read(_DAT_ram_3008c2f0,uVar12 + 0xa9000,auStack_130,uVar9);
            puVar7 = &DAT_ram_3008cba8 + uVar12;
            uVar12 = uVar12 + uVar5;
            if (uVar5 != uVar9) {
              return 0;
            }
            iVar4 = FUN_ram_40002fdc(auStack_130,puVar7);
            if (iVar4 != 0) {
              return 0;
            }
          } while (uVar12 < 0x1000);
          _DAT_ram_3008cba0 = 0xa9000;
          DAT_ram_3008cba4 = 1;
          _DAT_ram_3008dba8 = iVar2;
          return 1;
        }
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x400947fa.
 * REA evidence: ev_ebd085a7a94c377e64ad95023ed0c10ec9030c2ca9d9226f8e1bd3ec958e2a53
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400947fa(void)

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
  
  iVar2 = _DAT_ram_3008dba8 + 1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  iVar12 = 0x18000;
  if ((DAT_ram_3008cba4 != '\0') && (_DAT_ram_3008cba0 != 0xa9000)) {
    iVar12 = 0xa9000;
  }
  puVar1 = (undefined4 *)&DAT_ram_3008dbac;
  FUN_ram_4000303c(&DAT_ram_3008dbac);
  _DAT_ram_3008dbbc = 0;
  _DAT_ram_3008dbc0 = 0x53413232;
  _DAT_ram_3008dbb8 = iVar2;
  uVar3 = FUN_ram_40007450(0,&DAT_ram_3008dbac,0x10);
  uVar3 = FUN_ram_40007450(uVar3,&DAT_ram_400a1450,4);
  _DAT_ram_3008dbbc = FUN_ram_40007450(uVar3,&DAT_ram_3008dbc0,0x884);
  puVar4 = (undefined4 *)&DAT_ram_3008cba8;
  memset(&DAT_ram_3008cba8,0xff,0x1000);
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
  } while (puVar1 != (undefined4 *)0x3008e444);
  iVar5 = FUN_ram_40006cbe(*unaff_s3 + 0x1c);
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
  iVar5 = FUN_ram_40006ee4(*unaff_s3,iVar12,uVar8);
  if ((-1 < iVar5) &&
     (iVar5 = FUN_ram_40006e9a(*unaff_s3,iVar12,&DAT_ram_3008cba8,0x1000), iVar5 == 0x1000)) {
    uVar11 = 0;
    while( true ) {
      uVar8 = 0x1000 - uVar11;
      if (0x100 < uVar8) {
        uVar8 = 0x100;
      }
      uVar6 = fal_partition_read(*unaff_s3,iVar12 + uVar11);
      uVar11 = uVar11 + uVar6;
      if ((uVar6 != uVar8) || (iVar5 = FUN_ram_40002fdc(), iVar5 != 0)) break;
      if (0xfff < uVar11) {
        _DAT_ram_3008cba0 = iVar12;
        DAT_ram_3008cba4 = 1;
        _DAT_ram_3008dba8 = iVar2;
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40094970.
 * REA evidence: ev_9f7125b138f79d1f678349e6ade31f710dbcd894ad5f89fce7b1770386657b14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40094970(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 auStack_130 [256];
  
  if (((_DAT_ram_3008c2f0 != 0) && (param_1 != 0)) && (iVar1 = FUN_ram_400914f2(), iVar1 != 0)) {
    DAT_ram_3008cba4 = 0;
    _DAT_ram_3008dba8 = 0;
    DAT_ram_3008c2ec = 0;
    _DAT_ram_3008c2e8 = 0;
    DAT_ram_3008c2ed = 0;
    if (((_DAT_ram_3008c2f0 != 0) && (0xa9fff < *(uint *)(_DAT_ram_3008c2f0 + 0x38))) &&
       ((iVar1 = FUN_ram_40006ee4(_DAT_ram_3008c2f0,0x18000,0x92000), -1 < iVar1 &&
        (_DAT_ram_3008c2f0 != 0)))) {
      puVar11 = (undefined4 *)&DAT_ram_3008dbac;
      FUN_ram_4000303c(&DAT_ram_3008dbac,param_1,0x898);
      _DAT_ram_3008dbb8 = 1;
      _DAT_ram_3008dbbc = 0;
      _DAT_ram_3008dbc0 = 0x53413232;
      uVar2 = FUN_ram_40007450(0,&DAT_ram_3008dbac,0x10);
      uVar2 = FUN_ram_40007450(uVar2,&DAT_ram_400a1450,4);
      _DAT_ram_3008dbbc = FUN_ram_40007450(uVar2,&DAT_ram_3008dbc0,0x884);
      puVar3 = (undefined4 *)&DAT_ram_3008cba8;
      memset(&DAT_ram_3008cba8,0xff,0x1000);
      do {
        uVar2 = puVar11[1];
        uVar5 = puVar11[2];
        uVar7 = puVar11[3];
        uVar9 = puVar11[4];
        *puVar3 = *puVar11;
        puVar3[1] = uVar2;
        puVar3[2] = uVar5;
        puVar3[3] = uVar7;
        puVar3[4] = uVar9;
        puVar11 = puVar11 + 5;
        puVar3 = puVar3 + 5;
      } while (puVar11 != (undefined4 *)0x3008e444);
      iVar1 = FUN_ram_40006cbe(_DAT_ram_3008c2f0 + 0x1c);
      if ((iVar1 == 0) || (uVar10 = *(uint *)(iVar1 + 0x20), uVar10 == 0)) {
        uVar8 = 0x1000;
      }
      else {
        if (uVar10 == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uVar10 + 0xfff) / uVar10;
        }
        uVar8 = uVar8 * uVar10;
        if (0x1000 < uVar8) {
          return 0;
        }
      }
      iVar1 = FUN_ram_40006ee4(_DAT_ram_3008c2f0,0x18000,uVar8);
      if ((-1 < iVar1) &&
         (iVar1 = FUN_ram_40006e9a(_DAT_ram_3008c2f0,0x18000,&DAT_ram_3008cba8,0x1000),
         iVar1 == 0x1000)) {
        uVar10 = 0;
        do {
          uVar8 = 0x1000 - uVar10;
          if (0x100 < uVar8) {
            uVar8 = 0x100;
          }
          uVar4 = fal_partition_read(_DAT_ram_3008c2f0,uVar10 + 0x18000,auStack_130,uVar8);
          puVar6 = &DAT_ram_3008cba8 + uVar10;
          uVar10 = uVar10 + uVar4;
          if (uVar4 != uVar8) {
            return 0;
          }
          iVar1 = FUN_ram_40002fdc(auStack_130,puVar6);
          if (iVar1 != 0) {
            return 0;
          }
        } while (uVar10 < 0x1000);
        _DAT_ram_3008dba8 = 1;
        _DAT_ram_3008cba0 = 0x18000;
        DAT_ram_3008cba4 = 1;
        if (_DAT_ram_3008c2f0 != 0) {
          FUN_ram_4000303c(&DAT_ram_3008dbac,param_1,0x898);
          _DAT_ram_3008dbb8 = 2;
          _DAT_ram_3008dbbc = 0;
          _DAT_ram_3008dbc0 = 0x53413232;
          uVar2 = FUN_ram_40007450(0,&DAT_ram_3008dbac,0x10);
          uVar2 = FUN_ram_40007450(uVar2,&DAT_ram_400a1450,4);
          _DAT_ram_3008dbbc = FUN_ram_40007450(uVar2,&DAT_ram_3008dbc0,0x884);
          memset(&DAT_ram_3008cba8,0xff,0x1000);
          puVar11 = (undefined4 *)&DAT_ram_3008dbac;
          puVar3 = (undefined4 *)&DAT_ram_3008cba8;
          do {
            uVar2 = puVar11[1];
            uVar5 = puVar11[2];
            uVar7 = puVar11[3];
            uVar9 = puVar11[4];
            *puVar3 = *puVar11;
            puVar3[1] = uVar2;
            puVar3[2] = uVar5;
            puVar3[3] = uVar7;
            puVar3[4] = uVar9;
            puVar11 = puVar11 + 5;
            puVar3 = puVar3 + 5;
          } while (puVar11 != (undefined4 *)0x3008e444);
          iVar1 = FUN_ram_40006cbe(_DAT_ram_3008c2f0 + 0x1c);
          if ((iVar1 == 0) || (uVar10 = *(uint *)(iVar1 + 0x20), uVar10 == 0)) {
            uVar8 = 0x1000;
          }
          else {
            if (uVar10 == 0) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uVar10 + 0xfff) / uVar10;
            }
            uVar8 = uVar8 * uVar10;
            if (0x1000 < uVar8) {
              return 0;
            }
          }
          iVar1 = FUN_ram_40006ee4(_DAT_ram_3008c2f0,0xa9000,uVar8);
          if ((-1 < iVar1) &&
             (iVar1 = FUN_ram_40006e9a(_DAT_ram_3008c2f0,0xa9000,&DAT_ram_3008cba8,0x1000),
             iVar1 == 0x1000)) {
            uVar10 = 0;
            while( true ) {
              uVar8 = 0x1000 - uVar10;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              uVar4 = fal_partition_read(_DAT_ram_3008c2f0,uVar10 + 0xa9000,auStack_130,uVar8);
              puVar6 = &DAT_ram_3008cba8 + uVar10;
              uVar10 = uVar10 + uVar4;
              if ((uVar4 != uVar8) || (iVar1 = FUN_ram_40002fdc(auStack_130,puVar6), iVar1 != 0))
              break;
              if (0xfff < uVar10) {
                _DAT_ram_3008cba0 = 0xa9000;
                DAT_ram_3008cba4 = 1;
                _DAT_ram_3008dba8 = 2;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40094cd0.
 * REA evidence: ev_5270cc74307db6b9be992a6016031f470ca1885d9a0b5e093ebc61b592aa69c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_40094cd0(void)

{
  return &DAT_ram_400a1410;
}


/* NanoCore 1.12, address 0x40094cda.
 * REA evidence: ev_6549fa8d56bbc81f9feadba5c95208a22b39b10c3e1d86da809d3573a0bb2ad2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40094cda(float param_1,float param_2,float param_3,float param_4,ulonglong *param_5,
                     int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)FUN_ram_40000d44(DAT_ram_40099f38,param_3 / DAT_ram_40099f70);
  param_4 = (param_1 * DAT_ram_4009f090) / param_4;
  fVar2 = (float)FUN_ram_400009d2(param_4);
  fVar2 = fVar2 / (param_2 + param_2);
  fVar3 = (float)FUN_ram_40000712(param_4);
  if (param_6 == 0) {
    fVar4 = fVar1 * fVar2 + DAT_ram_4009672c;
    fVar6 = fVar1 * fVar2;
    fVar5 = fVar3 * DAT_ram_40096744;
    fVar2 = fVar2 / fVar1;
    fVar1 = -fVar6 + DAT_ram_4009672c;
  }
  else {
    fVar4 = (fVar3 + DAT_ram_4009672c) * DAT_ram_4009675c;
    fVar5 = -(fVar3 + DAT_ram_4009672c);
    fVar1 = fVar4;
  }
  fVar3 = fVar3 * DAT_ram_40096744;
  fVar6 = DAT_ram_4009672c - fVar2;
  fVar2 = fVar2 + DAT_ram_4009672c;
  *param_5 = (ulonglong)(uint)(fVar4 / fVar2);
  *(ulonglong *)((int)param_5 + 4) = (ulonglong)(uint)(fVar5 / fVar2);
  param_5[1] = (ulonglong)(uint)(fVar1 / fVar2);
  *(ulonglong *)((int)param_5 + 0xc) = (ulonglong)(uint)(fVar3 / fVar2);
  param_5[2] = (ulonglong)(uint)(fVar6 / fVar2);
  return;
}


/* NanoCore 1.12, address 0x40094dda.
 * REA evidence: ev_8a2abf2f1d2ed4b0117e2e2a93f9d23bb4bae236c252aea557d12fa8a10a4825
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40094dda(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 in_register_00000100;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = *param_1;
  uVar6 = in_register_00000100;
  uVar5 = FUN_ram_40000882(DAT_ram_4009f9d8,(float)uVar4 * DAT_ram_4009b18c);
  uVar3 = uVar6;
  FUN_ram_40000882(DAT_ram_4009b1a0,uVar5);
  uVar6 = FUN_ram_40000882(uVar6,in_register_00000100);
  fVar7 = (float)FUN_ram_40000844(uVar3,uVar6);
  fVar1 = DAT_ram_4009fa04;
  if (fVar7 != *(float *)(param_1 + 0x2dee)) {
    *(float *)(param_1 + 0x2dee) = fVar7;
    fVar9 = DAT_ram_400a1454;
    if (fVar7 != fVar1) {
      fVar9 = fVar7 * DAT_ram_4009f090;
    }
    fVar9 = fVar9 / (float)uVar4;
    fVar8 = (float)FUN_ram_400009d2(fVar9);
    fVar8 = fVar8 / DAT_ram_400a1458;
    fVar9 = (float)FUN_ram_40000712(fVar9);
    fVar2 = fVar9 * DAT_ram_40096744;
    fVar1 = fVar8 + DAT_ram_4009672c;
    fVar8 = DAT_ram_4009672c - fVar8;
    fVar7 = ((fVar9 + DAT_ram_4009672c) * DAT_ram_4009675c) / fVar1;
    fVar9 = -(fVar9 + DAT_ram_4009672c) / fVar1;
    *(float *)(param_1 + 0x26d8) = fVar7;
    *(float *)(param_1 + 0x26d9) = fVar7;
    fVar2 = fVar2 / fVar1;
    *(float *)((int)param_1 + 0x136c4) = fVar9;
    fVar8 = fVar8 / fVar1;
    *(float *)((int)param_1 + 0x136cc) = fVar2;
    *(float *)(param_1 + 0x26da) = fVar8;
    *(float *)((int)param_1 + 0x136dc) = fVar7;
    *(float *)(param_1 + 0x26dc) = fVar9;
    *(float *)((int)param_1 + 0x136e4) = fVar7;
    *(float *)(param_1 + 0x26dd) = fVar2;
    *(float *)((int)param_1 + 0x136ec) = fVar8;
  }
  return;
}


/* NanoCore 1.12, address 0x40094f12.
 * REA evidence: ev_d8727e901e7bf9b80c1a288303b73eca5cc4ece49ae186f17d924c2006bdbf05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40094f12(ulonglong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar2 = DAT_ram_400a1460;
  fVar1 = DAT_ram_4009672c;
  if (param_2 == 0) {
    return;
  }
  fVar4 = (float)param_1;
  if (fVar4 < DAT_ram_4009a374) {
    param_1 = (ulonglong)(uint)DAT_ram_4009a374;
    fVar4 = DAT_ram_40099f30;
  }
  else if (DAT_ram_4009673c < fVar4) {
    param_1 = (ulonglong)(uint)DAT_ram_4009673c;
    fVar4 = DAT_ram_4009f2d4;
  }
  else {
    fVar4 = DAT_ram_4009672c / fVar4;
  }
  *(ulonglong *)(param_2 + 4) = param_1;
  fVar5 = (float)FUN_ram_40000d44(fVar2,fVar4);
  fVar4 = DAT_ram_400a1464;
  *(float *)(param_2 + 0x136bc) = fVar5 / fVar2;
  uVar6 = FUN_ram_40000d44(fVar4,fVar1 / (float)*(undefined8 *)(param_2 + 4) - fVar1);
  uVar3 = DAT_ram_400a1468;
  *(undefined4 *)(param_2 + 0x136b8) = uVar6;
  fVar5 = (float)FUN_ram_40000d44(uVar3,fVar1 / (float)*(undefined8 *)(param_2 + 4));
  fVar1 = DAT_ram_4009676c;
  *(float *)(param_2 + 0x15de8) = -fVar5;
  fVar5 = DAT_ram_400a145c;
  if (*(float *)(param_2 + 0x136bc) * fVar2 <= fVar1) {
    fVar5 = *(float *)(param_2 + 0x136bc) * DAT_ram_400a146c;
  }
  if (DAT_ram_400a1470 < *(float *)(param_2 + 0x136b8) * fVar4) {
    *(undefined4 *)(param_2 + 0x136b8) = DAT_ram_400a1474;
  }
  *(float *)(param_2 + 0x136bc) = fVar5;
  return;
}


