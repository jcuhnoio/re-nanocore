/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40087000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40087684.
 * REA evidence: ev_a4a1e7738731773da025613a9608d72337211dabb8b541e63719fae4cf7bfb14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40087684(void)

{
  memset(&DAT_ram_30083bf8,0,0x303c);
  _DAT_ram_30086c34 = 0;
  _DAT_ram_30086c38 = 0;
  _DAT_ram_30086c3c = 0;
  return;
}


/* NanoCore 1.10, address 0x40087754.
 * REA evidence: ev_0f47608af10b1ce959872bcc6d7ac0f239576632eb1ac4b94f464aad01c13519
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40087754(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_120 [256];
  
  if (0x2fff < param_2 - 1) {
    return 0xffffffff;
  }
  uVar5 = 0;
  uVar4 = 0;
  while( true ) {
    uVar1 = param_2 - uVar4;
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    iVar3 = FUN_ram_4009048c();
    uVar2 = uVar4 + uVar1;
    if (((iVar3 == 0) || (*(code **)(iVar3 + 0x24) == (code *)0x0)) ||
       (uVar4 = (**(code **)(iVar3 + 0x24))(0,param_1,uVar4,auStack_120,uVar1), uVar1 != uVar4))
    break;
    uVar5 = FUN_ram_4000755e(uVar5,auStack_120,uVar1);
    uVar4 = uVar2;
    if (param_2 <= uVar2) {
      *param_3 = uVar5;
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40087800.
 * REA evidence: ev_7170bbf66f68a36a6723e6be8fe302e0fbf5d47fad71cf1f1c4bf265c843b5bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40087800(void)

{
  int iVar1;
  
  if ((_DAT_ram_3008a534 == 0) &&
     (iVar1 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1), iVar1 == 0)) {
    _DAT_ram_3008a534 = 1;
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40087a78.
 * REA evidence: ev_4588e942a1e8abec7630afd6c2c2a1ec11b8f726106822a238f29eb20b44a4d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40087a78(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_40087a8c;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_40087a8c;
  }
  else {
LAB_ram_40087a8c:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  if ((_DAT_ram_30089c58 & 0xff) != 0) {
    uVar1 = DAT_ram_30089c5a;
    iVar3 = FUN_ram_4009048c();
    if (((iVar3 == 0) || (*(code **)(iVar3 + 0x30) == (code *)0x0)) ||
       (iVar3 = (**(code **)(iVar3 + 0x30))(0,uVar1), iVar3 != 0)) {
      uVar2 = 0xffffffff;
      goto LAB_ram_40087ae0;
    }
  }
  _DAT_ram_30089c58 = 0;
  _DAT_ram_30089c5c = 0;
  _DAT_ram_30089c60 = 0;
  _DAT_ram_30089c64 = 0;
  uVar2 = 0;
LAB_ram_40087ae0:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
    return uVar2;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40087d32.
 * REA evidence: ev_d98b1f82f3cd4a9255e49931184fb3f14b9a47a0cdcc75080dff0b3b689865c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40087d32(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar2 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar2 == 0) {
      _DAT_ram_3008a534 = 1;
    }
    else if (_DAT_ram_3008a534 == 0) goto LAB_ram_40087d58;
  }
  FUN_ram_400049d6(0x3008a508,0xffffffff);
LAB_ram_40087d58:
  if ((_DAT_ram_30086c44 & 0xff) != 0) {
    uVar1 = DAT_ram_30086c46;
    iVar2 = FUN_ram_4009048c();
    if (((iVar2 == 0) || (*(code **)(iVar2 + 0x30) == (code *)0x0)) ||
       (iVar2 = (**(code **)(iVar2 + 0x30))(1,uVar1), iVar2 != 0)) {
      if (_DAT_ram_3008a534 != 0) {
        FUN_ram_40004ac8(0x3008a508);
      }
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 4;
        return 1;
      }
      return 1;
    }
  }
  _DAT_ram_30086c44 = 0;
  _DAT_ram_30086c48 = 0;
  _DAT_ram_30086c4c = 0;
  _DAT_ram_30086c50 = 0;
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
    return 1;
  }
  return 1;
}


/* NanoCore 1.10, address 0x40087e12.
 * REA evidence: ev_df286eb9f0f64fa4cb12ee66b5ec669034be21634bd53b9743113db4bbdf9a80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40087e12(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_40087e36;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_40087e36;
    if (DAT_ram_30089c58 == '\0') {
      return 0xffffffff;
    }
LAB_ram_40087e52:
    uVar1 = DAT_ram_30089c5a;
    if ((((DAT_ram_30089c59 != '\0') && (param_2 != 0)) && (param_3 != 0)) &&
       (_DAT_ram_30089c60 == param_1)) {
      if ((_DAT_ram_30089c5c < (uint)(param_3 + param_1)) || (0x3000 < (uint)(param_3 + param_1))) {
        uVar2 = 0xfffffffe;
        goto LAB_ram_40087ea6;
      }
      iVar3 = FUN_ram_4009048c();
      if ((iVar3 == 0) || (*(code **)(iVar3 + 0x1c) == (code *)0x0)) {
        iVar3 = -1;
      }
      else {
        iVar3 = (**(code **)(iVar3 + 0x1c))(0,uVar1,param_1,param_2,param_3);
      }
      if (param_3 == iVar3) {
        _DAT_ram_30089c60 = param_3 + _DAT_ram_30089c60;
        _DAT_ram_30089c64 = FUN_ram_4000755e(_DAT_ram_30089c64,param_2,param_3);
        uVar2 = 0;
        goto LAB_ram_40087ea6;
      }
    }
  }
  else {
LAB_ram_40087e36:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (DAT_ram_30089c58 != '\0') goto LAB_ram_40087e52;
  }
  uVar2 = 0xffffffff;
LAB_ram_40087ea6:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40087f12.
 * REA evidence: ev_183a6d220c9c21dbf9ba31cbe665798b461143824301d78d3531290375572560
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40087f12(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar2 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar2 == 0) {
      _DAT_ram_3008a534 = 1;
    }
    else if (_DAT_ram_3008a534 == 0) goto LAB_ram_40087f38;
  }
  FUN_ram_400049d6(0x3008a508,0xffffffff);
LAB_ram_40087f38:
  if ((_DAT_ram_30089c58 & 0xff) != 0) {
    uVar1 = DAT_ram_30089c5a;
    iVar2 = FUN_ram_4009048c();
    if (((iVar2 == 0) || (*(code **)(iVar2 + 0x30) == (code *)0x0)) ||
       (iVar2 = (**(code **)(iVar2 + 0x30))(0,uVar1), iVar2 != 0)) {
      if (_DAT_ram_3008a534 != 0) {
        FUN_ram_40004ac8(0x3008a508);
      }
      if (param_2 == (undefined1 *)0x0) {
        return 1;
      }
      *param_2 = 4;
      return 1;
    }
  }
  _DAT_ram_30089c58 = 0;
  _DAT_ram_30089c5c = 0;
  _DAT_ram_30089c60 = 0;
  _DAT_ram_30089c64 = 0;
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  iVar2 = _DAT_ram_30083bf0 + 1;
  _DAT_ram_30083bf0 = 1;
  if (iVar2 != 0) {
    _DAT_ram_30083bf0 = iVar2;
  }
  DAT_ram_30083be4 = 0;
  memset(&DAT_ram_30083bf8,0,0x303c);
  _DAT_ram_30086c34 = 0;
  _DAT_ram_30086c38 = 0;
  _DAT_ram_30086c3c = 0;
  if (param_2 == (undefined1 *)0x0) {
    _DAT_ram_30086c3c = 0;
    _DAT_ram_30086c38 = 0;
    _DAT_ram_30086c34 = 0;
    return 1;
  }
  *param_2 = 0;
  return 1;
}


