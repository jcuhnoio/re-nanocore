/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4008c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4008c210.
 * REA evidence: ev_57dd7440d9e62a339a5e76f49d86f067cddf248899fb2fb22c6b40729ea14d8f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008c210(void)

{
  undefined4 *unaff_s0;
  uint uVar1;
  int in_a4;
  undefined1 *unaff_s2;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_ram_3008b05c == '\0') {
    uVar1 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = _DAT_ram_3008b064 & 0xff;
    uVar4 = (_DAT_ram_3008b064 & 0xffff) >> 8;
    uVar3 = (_DAT_ram_3008b064 & 0xffffff) >> 0x10;
    uVar1 = _DAT_ram_3008b064 >> 0x18;
  }
  if (in_a4 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  _DAT_ram_3008ba48 = uVar2 | uVar4 << 8 | uVar3 << 0x10 | uVar1 << 0x18;
  if (unaff_s0 != (undefined4 *)0x0) {
    *unaff_s0 = &DAT_ram_3008ba48;
    unaff_s0[1] = 4;
  }
  *unaff_s2 = 0;
  return 1;
}


/* NanoCore 1.12, address 0x4008c25e.
 * REA evidence: ev_44270fc6d5a0f09eec1c711c6467be930bfabd0c55665b17c86a5c20e087eb83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008c25e(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
    }
    else if (_DAT_ram_3008b940 == 0) goto LAB_ram_4008c284;
  }
  FUN_ram_40004a22(0x3008b914,0xffffffff);
LAB_ram_4008c284:
  if ((_DAT_ram_30088044 & 0xff) != 0) {
    uVar1 = DAT_ram_30088046;
    iVar2 = FUN_ram_40094cd0();
    if (((iVar2 == 0) || (*(code **)(iVar2 + 0x38) == (code *)0x0)) ||
       (iVar2 = (**(code **)(iVar2 + 0x38))(1,uVar1), iVar2 != 0)) {
      if (_DAT_ram_3008b940 != 0) {
        FUN_ram_40004b14(0x3008b914);
      }
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 4;
        return 1;
      }
      return 1;
    }
  }
  _DAT_ram_30088044 = 0;
  _DAT_ram_30088048 = 0;
  _DAT_ram_3008804c = 0;
  _DAT_ram_30088050 = 0;
  _DAT_ram_30088054 = 0;
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
    return 1;
  }
  return 1;
}


/* NanoCore 1.12, address 0x4008c346.
 * REA evidence: ev_52c58281f97b255aa5b78493b5a0ef6aaa678a78f5709d1aa966a9e5fa702302
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008c346(uint param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008c36a;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008c36a;
    if (DAT_ram_3008b05c == '\0') {
      return 0xffffffff;
    }
LAB_ram_4008c386:
    uVar1 = DAT_ram_3008b05e;
    if ((((DAT_ram_3008b05d != '\0') && (param_2 != 0)) && (param_3 != 0)) &&
       (_DAT_ram_3008b064 == param_1)) {
      if ((_DAT_ram_3008b060 < param_1) || (_DAT_ram_3008b060 - param_1 < param_3)) {
        uVar2 = 0xfffffffe;
        goto LAB_ram_4008c3d8;
      }
      iVar3 = FUN_ram_40094cd0();
      if ((iVar3 == 0) || (*(code **)(iVar3 + 0x24) == (code *)0x0)) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (**(code **)(iVar3 + 0x24))(0,uVar1,param_1,param_2,param_3);
      }
      if (param_3 == uVar4) {
        _DAT_ram_3008b064 = param_3 + _DAT_ram_3008b064;
        _DAT_ram_3008b068 = FUN_ram_40007450(_DAT_ram_3008b068,param_2,param_3);
        uVar2 = 0;
        goto LAB_ram_4008c3d8;
      }
    }
  }
  else {
LAB_ram_4008c36a:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (DAT_ram_3008b05c != '\0') goto LAB_ram_4008c386;
  }
  uVar2 = 0xffffffff;
LAB_ram_4008c3d8:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4008c444.
 * REA evidence: ev_800a09c40681702974e8a79767eca599cde972301e1c13736ec0fa8f89b25e98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008c444(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
    }
    else if (_DAT_ram_3008b940 == 0) goto LAB_ram_4008c46a;
  }
  FUN_ram_40004a22(0x3008b914,0xffffffff);
LAB_ram_4008c46a:
  if ((_DAT_ram_3008b05c & 0xff) != 0) {
    uVar1 = DAT_ram_3008b05e;
    iVar2 = FUN_ram_40094cd0();
    if (((iVar2 == 0) || (*(code **)(iVar2 + 0x38) == (code *)0x0)) ||
       (iVar2 = (**(code **)(iVar2 + 0x38))(0,uVar1), iVar2 != 0)) {
      if (_DAT_ram_3008b940 != 0) {
        FUN_ram_40004b14(0x3008b914);
      }
      if (param_2 == (undefined1 *)0x0) {
        return 1;
      }
      *param_2 = 4;
      return 1;
    }
  }
  _DAT_ram_3008b05c = 0;
  _DAT_ram_3008b060 = 0;
  _DAT_ram_3008b064 = 0;
  _DAT_ram_3008b068 = 0;
  _DAT_ram_3008b06c = 0;
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  iVar2 = _DAT_ram_30084ff0 + 1;
  _DAT_ram_30084ff0 = 1;
  if (iVar2 != 0) {
    _DAT_ram_30084ff0 = iVar2;
  }
  DAT_ram_30084fe4 = 0;
  memset(&DAT_ram_30084ff8,0,0x303c);
  _DAT_ram_30088034 = 0;
  _DAT_ram_30088038 = 0;
  _DAT_ram_3008803c = 0;
  if (param_2 == (undefined1 *)0x0) {
    _DAT_ram_3008803c = 0;
    _DAT_ram_30088038 = 0;
    _DAT_ram_30088034 = 0;
    return 1;
  }
  *param_2 = 0;
  return 1;
}


/* NanoCore 1.12, address 0x4008c908.
 * REA evidence: ev_29a93098d4c88e9c7edce68ed64f56604d7424bc804697597d9d0cbc10b8fb16
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008c908(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,undefined1 *param_5
                )

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    *param_5 = 1;
    return 1;
  }
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008c95e;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008c95e;
  }
  else {
LAB_ram_4008c95e:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  if ((((DAT_ram_30088058 == '\0') && (iVar2 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0')) &&
      (iVar2 != 0)) &&
     ((*(code **)(iVar2 + 8) != (code *)0x0 && (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 != 0)))) {
    bVar1 = *param_2;
    if (0x25 < bVar1) {
      *param_5 = 3;
      goto LAB_ram_4008c97c;
    }
    if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) ||
       (_DAT_ram_3008b074 != 4)) {
      memset(&DAT_ram_3008b070,0xff,0x898);
      iVar2 = FUN_ram_40094cd0();
      iVar4 = FUN_ram_40094cd0();
      if (((((DAT_ram_3008b910 != '\0') || (iVar4 == 0)) || (*(code **)(iVar4 + 8) == (code *)0x0))
          || ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 || (iVar2 == 0)))) ||
         (*(code **)(iVar2 + 0xc) == (code *)0x0)) {
LAB_ram_4008cc98:
        memset(&DAT_ram_3008b070,0xff,0x898);
        DAT_ram_3008b908 = '\0';
        goto LAB_ram_4008c976;
      }
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008b070);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) goto LAB_ram_4008cc98;
      }
      else {
        if (iVar2 != 2) goto LAB_ram_4008cc98;
        memset(&DAT_ram_3008b070,0xff,0x898);
        _DAT_ram_3008b070 = 0x53415442;
        _DAT_ram_3008b074 = 4;
        _DAT_ram_3008b07a = 0;
        iVar2 = 0x3008b094;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
        } while (iVar2 != 0x3008b554);
        iVar2 = 0x3008b554;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
        } while (iVar2 != 0x3008b914);
        iVar2 = FUN_ram_40094cd0();
        if ((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
            (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
           ((((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
             ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 ||
              ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))) ||
            (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008b070), iVar2 == 0))))
        goto LAB_ram_4008c976;
      }
      DAT_ram_3008b908 = '\x01';
    }
    if ((_DAT_ram_3008b90c != (int *)0x0) ||
       (_DAT_ram_3008b90c = (int *)FUN_ram_4002d154(0x898), _DAT_ram_3008b90c != (int *)0x0)) {
      piVar6 = _DAT_ram_3008b90c;
      FUN_ram_4000303c(_DAT_ram_3008b90c,&DAT_ram_3008b070,0x898);
      uVar3 = memset(piVar6 + (uint)bVar1 * 8 + 9,0,0x10);
      if (param_3 != 1) {
        uVar5 = param_3 - 1;
        if (0xf < uVar5) {
          uVar5 = 0xf;
        }
        FUN_ram_4000303c(uVar3,param_2 + 1,uVar5);
      }
      iVar2 = FUN_ram_40094cd0();
      if ((((((*piVar6 == 0x53415442) && ((short)piVar6[1] == 4)) &&
            (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0')) &&
           ((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)))) &&
          ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 &&
           ((iVar2 != 0 && (*(code **)(iVar2 + 0x10) != (code *)0x0)))))) &&
         (iVar2 = (**(code **)(iVar2 + 0x10))(piVar6), iVar2 != 0)) {
        DAT_ram_3008b908 = '\x01';
        FUN_ram_4000303c(&DAT_ram_3008b070,_DAT_ram_3008b90c,0x898);
        piVar6 = (int *)(gp + -0xc);
        if (*piVar6 == -1) {
          *piVar6 = 1;
          *param_5 = 0;
        }
        else {
          iVar2 = *piVar6;
          *param_5 = 0;
          *piVar6 = iVar2 + 1;
        }
        goto LAB_ram_4008c97c;
      }
    }
  }
LAB_ram_4008c976:
  *param_5 = 4;
LAB_ram_4008c97c:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return 1;
}


/* NanoCore 1.12, address 0x4008ccee.
 * REA evidence: ev_c0fde27ba026438c7d4d393999023112679c6f592cb7db898e3450ea001f0863
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008ccee(undefined4 param_1,uint *param_2,int param_3,undefined4 param_4,undefined1 *param_5
                )

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((DAT_ram_30088044 == '\0') ||
     (uVar4 = *param_2, DAT_ram_30088046 != *(char *)((int)param_2 + 3))) {
    *param_5 = 2;
    return 1;
  }
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008cd50;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008cd50;
    if ((DAT_ram_30088044 != '\0') && (DAT_ram_30088045 != '\0')) goto LAB_ram_4008cd6a;
  }
  else {
LAB_ram_4008cd50:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if ((DAT_ram_30088044 != '\0') && (DAT_ram_30088045 != '\0')) {
LAB_ram_4008cd6a:
      cVar1 = DAT_ram_30088046;
      uVar4 = uVar4 & 0xffffff;
      if (uVar4 == _DAT_ram_3008804c) {
        if ((_DAT_ram_30088048 < uVar4) || (uVar5 = param_3 - 4, _DAT_ram_30088048 - uVar4 < uVar5))
        {
          uVar2 = 3;
joined_r0x4008ce1e:
          if (_DAT_ram_3008b940 != 0) {
            FUN_ram_40004b14(0x3008b914);
          }
          goto LAB_ram_4008cdd0;
        }
        iVar3 = FUN_ram_40094cd0();
        if ((iVar3 != 0) && (*(code **)(iVar3 + 0x24) != (code *)0x0)) {
          uVar4 = (**(code **)(iVar3 + 0x24))(1,cVar1,uVar4,param_2 + 1,uVar5);
          if (uVar5 == uVar4) {
            _DAT_ram_3008804c = uVar5 + _DAT_ram_3008804c;
            _DAT_ram_30088050 = FUN_ram_40007450(_DAT_ram_30088050,param_2 + 1,uVar5);
            uVar2 = 0;
            goto joined_r0x4008ce1e;
          }
        }
      }
    }
    if (_DAT_ram_3008b940 != 0) {
      FUN_ram_40004b14(0x3008b914);
      uVar2 = 4;
      goto LAB_ram_4008cdd0;
    }
  }
  uVar2 = 4;
LAB_ram_4008cdd0:
  *param_5 = uVar2;
  return 1;
}


