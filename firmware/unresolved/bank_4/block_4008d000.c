/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4008d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4008d24c.
 * REA evidence: ev_b032feb345343d22507a73329f623e50d4920953ed467e2ed7eac3ebeabd96a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4008d24c(int param_1)

{
  return param_1 * 0x3000 + 0x19000;
}


/* NanoCore 1.10, address 0x4008d258.
 * REA evidence: ev_a2826e39d9bc231965f4542cad1d22b8cbaa46f034e5e9e9594d41dc613b2e14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4008d258(int param_1)

{
  return (param_1 + 0x8b) * 0x1000;
}


/* NanoCore 1.10, address 0x4008d260.
 * REA evidence: ev_9dbe34599e86b1e797a67acaa04d324a9fc49d52dd8b006b9f589ffa778d4c6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4008d260(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (*param_1 != 0x53415442) {
    return false;
  }
  return (short)param_1[1] == 4;
}


/* NanoCore 1.10, address 0x4008d2ac.
 * REA evidence: ev_823cbf8c878efc59d62b8c4b1e9b131df3cadffc8dd573b266886498f80fbbdf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008d2ac(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar2 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar2 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008d2c8;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008d2c8;
  }
  else {
LAB_ram_4008d2c8:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  if ((_DAT_ram_30089c58 & 0xff) == 0) {
LAB_ram_4008d2fa:
    _DAT_ram_30089c58 = 0;
    _DAT_ram_30089c5c = 0;
    _DAT_ram_30089c60 = 0;
    _DAT_ram_30089c64 = 0;
  }
  else {
    uVar1 = DAT_ram_30089c5a;
    iVar2 = FUN_ram_4009048c();
    if (((iVar2 != 0) && (*(code **)(iVar2 + 0x30) != (code *)0x0)) &&
       (iVar2 = (**(code **)(iVar2 + 0x30))(0,uVar1), iVar2 == 0)) goto LAB_ram_4008d2fa;
  }
  if ((_DAT_ram_30086c44 & 0xff) == 0) {
LAB_ram_4008d33e:
    _DAT_ram_30086c44 = 0;
    _DAT_ram_30086c48 = 0;
    _DAT_ram_30086c4c = 0;
    _DAT_ram_30086c50 = 0;
  }
  else {
    uVar1 = DAT_ram_30086c46;
    iVar2 = FUN_ram_4009048c();
    if (((iVar2 != 0) && (*(code **)(iVar2 + 0x30) != (code *)0x0)) &&
       (iVar2 = (**(code **)(iVar2 + 0x30))(1,uVar1), iVar2 == 0)) goto LAB_ram_4008d33e;
  }
  puVar3 = (undefined4 *)FUN_ram_4009048c();
  if (((puVar3 == (undefined4 *)0x0) || ((code *)*puVar3 == (code *)0x0)) ||
     ((iVar2 = (*(code *)*puVar3)(), iVar2 == 0 ||
      (((DAT_ram_3008a500 != '\0' && (_DAT_ram_30089c68 == 0x53415442)) && (_DAT_ram_30089c6c == 4))
      )))) goto LAB_ram_4008d4d0;
  memset(&DAT_ram_30089c68,0xff,0x898);
  iVar2 = FUN_ram_4009048c();
  puVar3 = (undefined4 *)FUN_ram_4009048c();
  if (((puVar3 != (undefined4 *)0x0) && ((code *)*puVar3 != (code *)0x0)) &&
     ((iVar4 = (*(code *)*puVar3)(), iVar4 != 0 &&
      ((iVar2 != 0 && (*(code **)(iVar2 + 4) != (code *)0x0)))))) {
    iVar2 = (**(code **)(iVar2 + 4))(&DAT_ram_30089c68);
    if (iVar2 == 1) {
      if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) goto LAB_ram_4008d5de;
    }
    else if (iVar2 == 2) {
      memset(&DAT_ram_30089c68,0xff,0x898);
      _DAT_ram_30089c68 = 0x53415442;
      _DAT_ram_30089c6c = 4;
      _DAT_ram_30089c72 = 0;
      pvVar6 = (void *)0x30089c8c;
      do {
        *(undefined2 *)((int)pvVar6 + -4) = 0;
        *(undefined4 *)((int)pvVar6 + -0xc) = 0;
        *(undefined4 *)((int)pvVar6 + -8) = 0;
        pvVar5 = memset(pvVar6,0,0x10);
        pvVar6 = (void *)((int)pvVar5 + 0x20);
        *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
      } while (pvVar6 != (void *)0x3008a14c);
      pvVar6 = (void *)0x3008a14c;
      do {
        *(undefined2 *)((int)pvVar6 + -4) = 0;
        *(undefined4 *)((int)pvVar6 + -0xc) = 0;
        *(undefined4 *)((int)pvVar6 + -8) = 0;
        pvVar5 = memset(pvVar6,0,0x10);
        pvVar6 = (void *)((int)pvVar5 + 0x20);
        *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
      } while (pvVar6 != (void *)0x3008a50c);
      iVar2 = FUN_ram_4009048c();
      if (((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
           (puVar3 = (undefined4 *)FUN_ram_4009048c(), puVar3 == (undefined4 *)0x0)) ||
          (((code *)*puVar3 == (code *)0x0 || (iVar4 = (*(code *)*puVar3)(), iVar4 == 0)))) ||
         ((iVar2 == 0 ||
          ((*(code **)(iVar2 + 8) == (code *)0x0 ||
           (iVar2 = (**(code **)(iVar2 + 8))(&DAT_ram_30089c68), iVar2 == 0))))))
      goto LAB_ram_4008d4d0;
LAB_ram_4008d5de:
      DAT_ram_3008a500 = '\x01';
      goto LAB_ram_4008d4d0;
    }
  }
  memset(&DAT_ram_30089c68,0xff,0x898);
  DAT_ram_3008a500 = '\0';
LAB_ram_4008d4d0:
  *(undefined4 *)(gp + -0xc) = 1;
  *(undefined4 *)(gp + -8) = 1;
  memset(&DAT_ram_30083bf8,0,0x303c);
  iVar2 = _DAT_ram_3008a534;
  _DAT_ram_30086c34 = 0;
  _DAT_ram_30086c38 = 0;
  _DAT_ram_30086c3c = 0;
  DAT_ram_30086c54 = 0;
  *(undefined1 *)(gp + -4) = 0xff;
  _DAT_ram_30083be4 = 0;
  _DAT_ram_30083be8 = 0;
  _DAT_ram_30083bec = 0;
  _DAT_ram_30083bf4 = 0;
  _DAT_ram_30083bf0 = 1;
  if (iVar2 != 0) {
    FUN_ram_40004ac8(0x3008a508);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4008d5e8.
 * REA evidence: ev_d8cd007d54b9d65e8b0013b729067d0daabba40f4a2da6c4edc315000fa55f15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008d5e8(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  undefined1 *puVar8;
  int *piVar9;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar4 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar4 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008d60a;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008d60a;
  }
  else {
LAB_ram_4008d60a:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  iVar4 = FUN_ram_4009048c();
  if ((((DAT_ram_30086c54 == '\0') &&
       (puVar5 = (undefined4 *)FUN_ram_4009048c(), puVar5 != (undefined4 *)0x0)) &&
      ((code *)*puVar5 != (code *)0x0)) &&
     (((iVar6 = (*(code *)*puVar5)(), iVar6 != 0 && (iVar4 != 0)) && (*(int *)(iVar4 + 0xc) != 0))))
  {
    if ((_DAT_ram_30089c58 & 0xff) != 0) {
      uVar1 = DAT_ram_30089c5a;
      iVar6 = FUN_ram_4009048c();
      if (((iVar6 == 0) || (*(code **)(iVar6 + 0x30) == (code *)0x0)) ||
         (iVar6 = (**(code **)(iVar6 + 0x30))(0,uVar1), iVar6 != 0)) goto LAB_ram_4008d896;
    }
    _DAT_ram_30089c58 = 0;
    _DAT_ram_30089c5c = 0;
    _DAT_ram_30089c60 = 0;
    _DAT_ram_30089c64 = 0;
    if ((_DAT_ram_30086c44 & 0xff) != 0) {
      uVar1 = DAT_ram_30086c46;
      iVar6 = FUN_ram_4009048c();
      if (((iVar6 == 0) || (*(code **)(iVar6 + 0x30) == (code *)0x0)) ||
         (iVar6 = (**(code **)(iVar6 + 0x30))(1,uVar1), iVar6 != 0)) goto LAB_ram_4008d896;
    }
    _DAT_ram_30086c44 = 0;
    _DAT_ram_30086c48 = 0;
    _DAT_ram_30086c4c = 0;
    _DAT_ram_30086c50 = 0;
    memset(&DAT_ram_30083bf8,0,0x303c);
    iVar6 = _DAT_ram_30083bf0 + 1;
    _DAT_ram_30083bf0 = 1;
    if (iVar6 != 0) {
      _DAT_ram_30083bf0 = iVar6;
    }
    _DAT_ram_30086c34 = 0;
    _DAT_ram_30086c38 = 0;
    _DAT_ram_30086c3c = 0;
    DAT_ram_30083be4 = 0;
    if ((_DAT_ram_3008a504 != (undefined1 *)0x0) ||
       (_DAT_ram_3008a504 = (undefined1 *)FUN_ram_4002c39e(0x898),
       _DAT_ram_3008a504 != (undefined1 *)0x0)) {
      puVar2 = _DAT_ram_3008a504;
      memset(_DAT_ram_3008a504,0xff,0x898);
      *puVar2 = 0x42;
      puVar2[1] = 0x54;
      puVar2[2] = 0x41;
      puVar2[3] = 0x53;
      puVar2[4] = 4;
      puVar2[5] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar8 = puVar2 + 0x24;
      iVar6 = 0;
      do {
        puVar2[iVar6 * 0x20 + 0x20] = 0;
        puVar2[iVar6 * 0x20 + 0x21] = 0;
        puVar2[iVar6 * 0x20 + 0x18] = 0;
        puVar2[iVar6 * 0x20 + 0x19] = 0;
        puVar2[iVar6 * 0x20 + 0x1a] = 0;
        puVar2[iVar6 * 0x20 + 0x1b] = 0;
        puVar2[iVar6 * 0x20 + 0x1c] = 0;
        puVar2[iVar6 * 0x20 + 0x1d] = 0;
        puVar2[iVar6 * 0x20 + 0x1e] = 0;
        puVar2[iVar6 * 0x20 + 0x1f] = 0;
        pvVar7 = memset(puVar8,0,0x10);
        iVar6 = iVar6 + 1;
        *(undefined1 *)((int)pvVar7 + 0x10) = 0x1a;
        *(undefined1 *)((int)pvVar7 + 0x11) = 0x1a;
        *(undefined1 *)((int)pvVar7 + 0x12) = 0;
        *(undefined1 *)((int)pvVar7 + 0x13) = 0;
        puVar8 = (undefined1 *)((int)pvVar7 + 0x20);
      } while (iVar6 != 0x26);
      puVar8 = puVar2 + 0x4e4;
      iVar6 = 0;
      do {
        puVar2[iVar6 * 0x20 + 0x4e0] = 0;
        puVar2[iVar6 * 0x20 + 0x4e1] = 0;
        puVar2[iVar6 * 0x20 + 0x4d8] = 0;
        puVar2[iVar6 * 0x20 + 0x4d9] = 0;
        puVar2[iVar6 * 0x20 + 0x4da] = 0;
        puVar2[iVar6 * 0x20 + 0x4db] = 0;
        puVar2[iVar6 * 0x20 + 0x4dc] = 0;
        puVar2[iVar6 * 0x20 + 0x4dd] = 0;
        puVar2[iVar6 * 0x20 + 0x4de] = 0;
        puVar2[iVar6 * 0x20 + 0x4df] = 0;
        pvVar7 = memset(puVar8,0,0x10);
        iVar6 = iVar6 + 1;
        *(undefined1 *)((int)pvVar7 + 0x10) = 0x1a;
        *(undefined1 *)((int)pvVar7 + 0x11) = 0x1a;
        *(undefined1 *)((int)pvVar7 + 0x12) = 0;
        *(undefined1 *)((int)pvVar7 + 0x13) = 0;
        puVar8 = (undefined1 *)((int)pvVar7 + 0x20);
      } while (iVar6 != 0x1e);
      iVar4 = (**(code **)(iVar4 + 0xc))(puVar2);
      if (iVar4 != 0) {
        FUN_ram_4000305c(&DAT_ram_30089c68,_DAT_ram_3008a504,0x898);
        piVar9 = (int *)(gp + -0xc);
        iVar4 = 1;
        DAT_ram_3008a500 = 1;
        if (*piVar9 != -1) {
          iVar4 = *piVar9 + 1;
        }
        *piVar9 = iVar4;
        piVar9 = (int *)(gp + -8);
        if (*piVar9 == -1) {
          *piVar9 = 1;
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          *piVar9 = *piVar9 + 1;
        }
        goto joined_r0x4008d89c;
      }
    }
    memset(&DAT_ram_30089c68,0xff,0x898);
    uVar3 = 0xffffffff;
    DAT_ram_3008a500 = 0;
  }
  else {
LAB_ram_4008d896:
    uVar3 = 0xffffffff;
  }
joined_r0x4008d89c:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4008d9ce.
 * REA evidence: ev_0c1cd002b94b93540a9f32a077e3c24d40fb2e9b054cbf5d4b4861e4950c0e9c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008d9ce(void)

{
  int iVar1;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar1 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar1 == 0) {
      _DAT_ram_3008a534 = 1;
    }
    else if (_DAT_ram_3008a534 == 0) {
      DAT_ram_30086c40 = 1;
      return;
    }
  }
  FUN_ram_400049d6(0x3008a508,0xffffffff);
  DAT_ram_30086c40 = 1;
  return;
}


/* NanoCore 1.10, address 0x4008da34.
 * REA evidence: ev_38f035787cbe0413a1f5ad195767e0dc154810dfb6e3bc03bd313d120dc63025
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008da34(void)

{
  DAT_ram_30086c40 = 0;
  if (_DAT_ram_3008a534 == 0) {
    return;
  }
  FUN_ram_40004ac8(0x3008a508);
  return;
}


/* NanoCore 1.10, address 0x4008da54.
 * REA evidence: ev_7864fad6bcce92d6230cdbd74c1e8718a9dbdb389a44bd3cfdffe8ad270094ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008da54(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar2 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar2 == 0) {
      _DAT_ram_3008a534 = 1;
    }
    else if (_DAT_ram_3008a534 == 0) goto LAB_ram_4008da7a;
  }
  FUN_ram_400049d6(0x3008a508,0xffffffff);
LAB_ram_4008da7a:
  iVar2 = FUN_ram_4009048c();
  if ((((((DAT_ram_30086c54 == '\0' && DAT_ram_30089c58 == '\0') && DAT_ram_30086c44 == '\0') &&
         DAT_ram_30086c34 == '\0') && (iVar2 != 0)) && (*(code **)(iVar2 + 0x14) != (code *)0x0)) &&
     (iVar2 = (**(code **)(iVar2 + 0x14))(param_1), iVar2 != 0)) {
    DAT_ram_30086c54 = '\x01';
    uVar1 = 0;
    *(char *)(gp + -4) = (char)param_1;
  }
  else {
    uVar1 = 0xffffffff;
    if (_DAT_ram_3008a534 != 0) {
      FUN_ram_40004ac8(0x3008a508);
      return 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4008db1a.
 * REA evidence: ev_24134ddedce90e40ce7c70811975c6fdedf0ff1f6c31a9dea349ef49f47bda9a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008db1a(void)

{
  int iVar1;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar1 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar1 == 0) {
      _DAT_ram_3008a534 = 1;
    }
    else if (_DAT_ram_3008a534 == 0) {
      if (DAT_ram_30086c54 == '\0') {
        return;
      }
      DAT_ram_30086c54 = 0;
      *(undefined1 *)(gp + -4) = 0xff;
      return;
    }
  }
  FUN_ram_400049d6(0x3008a508,0xffffffff);
  iVar1 = _DAT_ram_3008a534;
  if (DAT_ram_30086c54 != '\0') {
    DAT_ram_30086c54 = '\0';
    *(undefined1 *)(gp + -4) = 0xff;
    if (iVar1 == 0) {
      return;
    }
    FUN_ram_40004ac8(0x3008a508);
  }
  if (_DAT_ram_3008a534 == 0) {
    return;
  }
  FUN_ram_40004ac8(0x3008a508);
  return;
}


/* NanoCore 1.10, address 0x4008dbbc.
 * REA evidence: ev_3270d1c3e27e81797c0fb1d0c589bb4f1a0d86cd5c98b7daaf2cef7a28877a82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008dbbc(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar2 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar2 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008dbe0;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008dbe0;
    if (param_2 == 0) {
      return 0xffffffff;
    }
LAB_ram_4008dbf2:
    puVar1 = (undefined4 *)FUN_ram_4009048c();
    if ((((puVar1 != (undefined4 *)0x0) && ((code *)*puVar1 != (code *)0x0)) &&
        (iVar2 = (*(code *)*puVar1)(), iVar2 != 0)) && (param_1 < 0x26)) {
      if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
         (_DAT_ram_30089c6c != 4)) {
        memset(&DAT_ram_30089c68,0xff,0x898);
        iVar2 = FUN_ram_4009048c();
        puVar1 = (undefined4 *)FUN_ram_4009048c();
        if (((puVar1 != (undefined4 *)0x0) && ((code *)*puVar1 != (code *)0x0)) &&
           ((iVar7 = (*(code *)*puVar1)(), iVar7 != 0 &&
            ((iVar2 != 0 && (*(code **)(iVar2 + 4) != (code *)0x0)))))) {
          iVar2 = (**(code **)(iVar2 + 4))(&DAT_ram_30089c68);
          if (iVar2 == 1) {
            if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4))
            goto LAB_ram_4008de9c;
          }
          else if (iVar2 == 2) {
            memset(&DAT_ram_30089c68,0xff,0x898);
            _DAT_ram_30089c68 = 0x53415442;
            _DAT_ram_30089c6c = 4;
            _DAT_ram_30089c72 = 0;
            pvVar6 = (void *)0x30089c8c;
            do {
              *(undefined2 *)((int)pvVar6 + -4) = 0;
              *(undefined4 *)((int)pvVar6 + -0xc) = 0;
              *(undefined4 *)((int)pvVar6 + -8) = 0;
              pvVar5 = memset(pvVar6,0,0x10);
              pvVar6 = (void *)((int)pvVar5 + 0x20);
              *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
            } while (pvVar6 != (void *)0x3008a14c);
            pvVar6 = (void *)0x3008a14c;
            do {
              *(undefined2 *)((int)pvVar6 + -4) = 0;
              *(undefined4 *)((int)pvVar6 + -0xc) = 0;
              *(undefined4 *)((int)pvVar6 + -8) = 0;
              pvVar5 = memset(pvVar6,0,0x10);
              pvVar6 = (void *)((int)pvVar5 + 0x20);
              *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
            } while (pvVar6 != (void *)0x3008a50c);
            iVar2 = FUN_ram_4009048c();
            if (((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
                 (puVar1 = (undefined4 *)FUN_ram_4009048c(), puVar1 == (undefined4 *)0x0)) ||
                (((code *)*puVar1 == (code *)0x0 || (iVar7 = (*(code *)*puVar1)(), iVar7 == 0)))) ||
               ((iVar2 == 0 ||
                ((*(code **)(iVar2 + 8) == (code *)0x0 ||
                 (iVar2 = (**(code **)(iVar2 + 8))(&DAT_ram_30089c68), iVar2 == 0))))))
            goto LAB_ram_4008dddc;
LAB_ram_4008de9c:
            DAT_ram_3008a500 = '\x01';
            goto LAB_ram_4008dc3c;
          }
        }
        memset(&DAT_ram_30089c68,0xff,0x898);
        uVar4 = 0xffffffff;
        DAT_ram_3008a500 = '\0';
        goto joined_r0x4008dde0;
      }
LAB_ram_4008dc3c:
      iVar2 = param_1 * 0x20;
      if ((((*(ushort *)(&DAT_ram_30089c88 + iVar2) & 1) != 0) &&
          (iVar7 = *(int *)(&DAT_ram_30089c80 + iVar2), iVar7 - 1U < 0x3000)) &&
         (*(int *)(&DAT_ram_30089c84 + iVar2) - 1U < 0xfffffffe)) {
        iVar3 = FUN_ram_4009048c();
        if ((iVar3 == 0) || (*(code **)(iVar3 + 0x20) == (code *)0x0)) {
          iVar7 = -1;
        }
        else {
          iVar7 = (**(code **)(iVar3 + 0x20))(0,param_1,0,0x30086c58,iVar7);
        }
        if (*(int *)(&DAT_ram_30089c80 + iVar2) != iVar7) goto LAB_ram_4008dddc;
        iVar7 = FUN_ram_4000755e(0,0x30086c58,iVar7);
        if (iVar7 == *(int *)(&DAT_ram_30089c84 + iVar2)) {
          uVar4 = FUN_ram_40081e98(param_2,0x30086c58,*(undefined4 *)(&DAT_ram_30089c80 + iVar2));
          goto joined_r0x4008dde0;
        }
      }
      uVar4 = 0xfffffffe;
      goto joined_r0x4008dde0;
    }
  }
  else {
LAB_ram_4008dbe0:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (param_2 != 0) goto LAB_ram_4008dbf2;
  }
LAB_ram_4008dddc:
  uVar4 = 0xffffffff;
joined_r0x4008dde0:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x4008deac.
 * REA evidence: ev_29220138962e828ae0e4e213386302efb9910c27b852f91ca34ddb9f6c232f7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008deac(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar2 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar2 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008ded0;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008ded0;
    if (0x1d < param_1) {
      return 0;
    }
LAB_ram_4008df0c:
    if (param_2 != 0) {
      if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
         (_DAT_ram_30089c6c != 4)) {
        memset(&DAT_ram_30089c68,0xff,0x898);
        iVar2 = FUN_ram_4009048c();
        puVar3 = (undefined4 *)FUN_ram_4009048c();
        if (((puVar3 != (undefined4 *)0x0) && ((code *)*puVar3 != (code *)0x0)) &&
           ((iVar4 = (*(code *)*puVar3)(), iVar4 != 0 &&
            ((iVar2 != 0 && (*(code **)(iVar2 + 4) != (code *)0x0)))))) {
          iVar2 = (**(code **)(iVar2 + 4))(&DAT_ram_30089c68);
          if (iVar2 == 1) {
            if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) {
LAB_ram_4008df9c:
              DAT_ram_3008a500 = '\x01';
              goto LAB_ram_4008dffe;
            }
          }
          else if (iVar2 == 2) {
            memset(&DAT_ram_30089c68,0xff,0x898);
            _DAT_ram_30089c68 = 0x53415442;
            _DAT_ram_30089c6c = 4;
            _DAT_ram_30089c72 = 0;
            pvVar6 = (void *)0x30089c8c;
            do {
              *(undefined2 *)((int)pvVar6 + -4) = 0;
              *(undefined4 *)((int)pvVar6 + -0xc) = 0;
              *(undefined4 *)((int)pvVar6 + -8) = 0;
              pvVar5 = memset(pvVar6,0,0x10);
              pvVar6 = (void *)((int)pvVar5 + 0x20);
              *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
            } while (pvVar6 != (void *)0x3008a14c);
            pvVar6 = (void *)0x3008a14c;
            do {
              *(undefined2 *)((int)pvVar6 + -4) = 0;
              *(undefined4 *)((int)pvVar6 + -0xc) = 0;
              *(undefined4 *)((int)pvVar6 + -8) = 0;
              pvVar5 = memset(pvVar6,0,0x10);
              pvVar6 = (void *)((int)pvVar5 + 0x20);
              *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
            } while (pvVar6 != (void *)0x3008a50c);
            iVar2 = FUN_ram_4009048c();
            if (((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
                 (puVar3 = (undefined4 *)FUN_ram_4009048c(), puVar3 == (undefined4 *)0x0)) ||
                (((code *)*puVar3 == (code *)0x0 || (iVar4 = (*(code *)*puVar3)(), iVar4 == 0)))) ||
               ((iVar2 == 0 ||
                ((*(code **)(iVar2 + 8) == (code *)0x0 ||
                 (iVar2 = (**(code **)(iVar2 + 8))(&DAT_ram_30089c68), iVar2 == 0))))))
            goto LAB_ram_4008dee4;
            goto LAB_ram_4008df9c;
          }
        }
        memset(&DAT_ram_30089c68,0xff,0x898);
        uVar1 = 0;
        DAT_ram_3008a500 = '\0';
      }
      else {
LAB_ram_4008dffe:
        FUN_ram_4000305c(param_2,&DAT_ram_3008a140 + param_1 * 0x20,0x20);
        uVar1 = 1;
      }
      goto LAB_ram_4008dee6;
    }
  }
  else {
LAB_ram_4008ded0:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (param_1 < 0x1e) goto LAB_ram_4008df0c;
  }
LAB_ram_4008dee4:
  uVar1 = 0;
LAB_ram_4008dee6:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar1;
}


