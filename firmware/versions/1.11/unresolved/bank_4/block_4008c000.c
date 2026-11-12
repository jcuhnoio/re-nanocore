/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4008c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4008c328.
 * REA evidence: ev_dceba699ec11e0daa20e7000ada45b42f1b45b805cebf717537d97be45441b52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008c328(undefined4 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008c350;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008c350;
  }
  else {
LAB_ram_4008c350:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  memset(param_1,0,0x14);
  iVar2 = FUN_ram_400933f0();
  if ((((DAT_ram_3008b890 != '\0') || (iVar2 == 0)) || (*(code **)(iVar2 + 8) == (code *)0x0)) ||
     (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 == 0)) goto LAB_ram_4008c56e;
  if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) || (_DAT_ram_3008aff4 != 4))
  {
    memset(&DAT_ram_3008aff0,0xff,0x898);
    iVar2 = FUN_ram_400933f0();
    iVar3 = FUN_ram_400933f0();
    if (((DAT_ram_3008b890 == '\0') && (iVar3 != 0)) &&
       ((*(code **)(iVar3 + 8) != (code *)0x0 &&
        (((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (iVar2 != 0)) &&
         (*(code **)(iVar2 + 0xc) != (code *)0x0)))))) {
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008aff0);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) goto LAB_ram_4008c50c;
      }
      else {
        if (iVar2 != 2) goto LAB_ram_4008c50c;
        memset(&DAT_ram_3008aff0,0xff,0x898);
        _DAT_ram_3008aff0 = 0x53415442;
        _DAT_ram_3008aff4 = 4;
        _DAT_ram_3008affa = 0;
        iVar2 = 0x3008b014;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar3 = memset(iVar2,0,0x10);
          iVar2 = iVar3 + 0x20;
          *(undefined4 *)(iVar3 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar2 != 0x3008b4d4);
        iVar2 = 0x3008b4d4;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar3 = memset(iVar2,0,0x10);
          iVar2 = iVar3 + 0x20;
          *(undefined4 *)(iVar3 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar2 != 0x3008b894);
        iVar2 = FUN_ram_400933f0();
        if (((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
             ((iVar3 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0' ||
              (((iVar3 == 0 || (*(code **)(iVar3 + 8) == (code *)0x0)) ||
               (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0)))))) ||
            ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))) ||
           (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008aff0), iVar2 == 0))
        goto LAB_ram_4008c52a;
      }
      DAT_ram_3008b888 = '\x01';
    }
    else {
LAB_ram_4008c50c:
      memset(&DAT_ram_3008aff0,0xff,0x898);
      DAT_ram_3008b888 = '\0';
    }
  }
LAB_ram_4008c52a:
  *param_1 = 0x1e000;
  iVar2 = FUN_ram_400933f0();
  uVar4 = 0;
  if ((iVar2 != 0) && (*(code **)(iVar2 + 0x3c) != (code *)0x0)) {
    uVar4 = (**(code **)(iVar2 + 0x3c))();
  }
  uVar5 = _DAT_ram_3008aff8;
  if (0x1d < (_DAT_ram_3008aff8 & 0xff)) {
    uVar5 = 0xffff;
  }
  *(ushort *)(param_1 + 4) = uVar5;
  uVar1 = _DAT_ram_30087fc4;
  param_1[2] = 0x1e;
  param_1[1] = uVar4;
  param_1[3] = 0x1000;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
LAB_ram_4008c56e:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4008c5e4.
 * REA evidence: ev_a20b30dea8139c300bc8531345e146fb6b172048474750b47402793caa21729b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008c5e4(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ushort uVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008c60c;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008c60c;
  }
  else {
LAB_ram_4008c60c:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  memset(param_1,0,0x14);
  iVar3 = FUN_ram_400933f0();
  if ((((DAT_ram_3008b890 != '\0') || (iVar3 == 0)) || (*(code **)(iVar3 + 8) == (code *)0x0)) ||
     (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0)) goto LAB_ram_4008c868;
  if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) || (_DAT_ram_3008aff4 != 4))
  {
    memset(&DAT_ram_3008aff0,0xff,0x898);
    iVar3 = FUN_ram_400933f0();
    iVar4 = FUN_ram_400933f0();
    if (((DAT_ram_3008b890 == '\0') && (iVar4 != 0)) &&
       ((*(code **)(iVar4 + 8) != (code *)0x0 &&
        (((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar3 != 0)) &&
         (*(code **)(iVar3 + 0xc) != (code *)0x0)))))) {
      iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
      if (iVar3 == 1) {
        if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) goto LAB_ram_4008c8d6;
      }
      else if (iVar3 == 2) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        _DAT_ram_3008aff0 = 0x53415442;
        _DAT_ram_3008aff4 = 4;
        _DAT_ram_3008affa = 0;
        iVar3 = 0x3008b014;
        do {
          *(undefined2 *)(iVar3 + -4) = 0;
          *(undefined4 *)(iVar3 + -0xc) = 0;
          *(undefined4 *)(iVar3 + -8) = 0;
          iVar4 = memset(iVar3,0,0x10);
          iVar3 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar3 != 0x3008b4d4);
        iVar3 = 0x3008b4d4;
        do {
          *(undefined2 *)(iVar3 + -4) = 0;
          *(undefined4 *)(iVar3 + -0xc) = 0;
          *(undefined4 *)(iVar3 + -8) = 0;
          iVar4 = memset(iVar3,0,0x10);
          iVar3 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar3 != 0x3008b894);
        iVar3 = FUN_ram_400933f0();
        if (((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
             ((iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0' ||
              (((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
               (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0)))))) ||
            ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
           (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 == 0))
        goto LAB_ram_4008c7ea;
LAB_ram_4008c8d6:
        DAT_ram_3008b888 = '\x01';
        goto LAB_ram_4008c7ea;
      }
    }
    memset(&DAT_ram_3008aff0,0xff,0x898);
    DAT_ram_3008b888 = '\0';
  }
LAB_ram_4008c7ea:
  pcVar5 = (char *)FUN_ram_400933f0();
  uVar2 = 0x72000;
  if (((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) &&
     ((pcVar5 = (char *)FUN_ram_400933f0(), pcVar5 != (char *)0x0 && (*pcVar5 != '\0')))) {
    uVar2 = 0x728e8;
  }
  *param_1 = uVar2;
  iVar3 = FUN_ram_400933f0();
  uVar2 = 0;
  if ((iVar3 != 0) && (*(code **)(iVar3 + 0x3c) != (code *)0x0)) {
    uVar2 = (**(code **)(iVar3 + 0x3c))();
  }
  param_1[1] = uVar2;
  param_1[2] = 0x26;
  pcVar5 = (char *)FUN_ram_400933f0();
  uVar2 = 0x3000;
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    uVar2 = 0x303c;
  }
  uVar6 = _DAT_ram_3008aff6;
  if (0x25 < (_DAT_ram_3008aff6 & 0xff)) {
    uVar6 = 0xffff;
  }
  *(ushort *)(param_1 + 4) = uVar6;
  uVar1 = _DAT_ram_3008afdc;
  param_1[3] = uVar2;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
LAB_ram_4008c868:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
    return;
  }
  return;
}


