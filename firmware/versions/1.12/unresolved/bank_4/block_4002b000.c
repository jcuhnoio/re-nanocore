/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4002b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002b2b6.
 * REA evidence: ev_472291825e0032ddcfbf71e6cf65e109aebdf258caa6512a97208026ccebc762
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002b2b6(int param_1)

{
  int iVar1;
  int iStack_14;
  
  if (param_1 - 300U < 0x2dc595) {
    iStack_14 = param_1;
    if (_DAT_ram_30078588 != 0) {
LAB_ram_4002b2ec:
      if (_DAT_ram_30078598 != 0) {
        FUN_ram_40004a22(_DAT_ram_30078598,0xffffffff);
      }
      if (_DAT_ram_30078590 != 0) {
        FUN_ram_40004a22(_DAT_ram_30078590,0xffffffff);
      }
      FUN_ram_4002a5cc();
      FUN_ram_4002c2c0(0x300770c8,FUN_ram_4002af5c,0);
      _DAT_ram_30078ba4 = _DAT_ram_30078bac;
      iVar1 = FUN_ram_40004650(_DAT_ram_30078588,0x87,&iStack_14);
      if (iVar1 == 0) {
        DAT_ram_3004ad88 = iStack_14;
      }
      if (_DAT_ram_30078590 != 0) {
        FUN_ram_40004b14();
      }
      if (_DAT_ram_30078598 != 0) {
        FUN_ram_40004b14();
      }
      return -(uint)(iVar1 != 0);
    }
    if (_DAT_ram_3006e3cc == 0) {
      iVar1 = nc_radio_uart5_init();
      if (iVar1 == 0) {
        FUN_ram_400064e4(10);
      }
      if (_DAT_ram_30078588 != 0) goto LAB_ram_4002b2ec;
    }
  }
  return -1;
}


/* NanoCore 1.12, address 0x4002b390.
 * REA evidence: ev_8510b555b02641b613621cbd7cc69b6c73960ddfc204066b67ce508ca208450d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002b390(void)

{
  return _DAT_ram_30078588 != 0;
}


/* NanoCore 1.12, address 0x4002b39e.
 * REA evidence: ev_35644bf20429bd33b9b8099efb798901da44a7fce91f635ec99a2672287c5b4b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002b39e(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_300770c0;
  if (_DAT_ram_300780f8 == 0) {
    uVar2 = 0;
    if ((_DAT_ram_3006e3c4 != 0) && (_DAT_ram_300770c0 != 0)) {
      iVar3 = FUN_ram_40004346();
      if ((_DAT_ram_3006e3c8 == 0) || ((uint)(iVar3 - iVar1) <= _DAT_ram_3006e3c8)) {
        uVar2 = 1;
      }
      else {
        uVar4 = FUN_ram_400002f4();
        FUN_ram_4002bf9e(0x3006e6e4);
        FUN_ram_400002fa(uVar4);
        _DAT_ram_3006e3c4 = 0;
        _DAT_ram_30078500 = 0;
        _DAT_ram_3006e6e0 = 0;
        _DAT_ram_300770c4 = 0;
        _DAT_ram_300770c6 = 0;
        _DAT_ram_300770c0 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4002b434.
 * REA evidence: ev_17a52ff262df284e1fa6accaedcbceccb31f6be3f7b896b214d82cb9327b3302
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b434(int param_1)

{
  _DAT_ram_300780f8 = (uint)(param_1 != 0);
  if ((param_1 != 0) != 0) {
    _DAT_ram_30078500 = 0;
    _DAT_ram_3006e6e0 = 0;
    _DAT_ram_300770c4 = 0;
    _DAT_ram_300770c6 = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4002b468.
 * REA evidence: ev_0730894cc131ee306aeac4dc49303ca2731f198733a83419a5d1ac807c23ad1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002b468(int param_1,uint param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar8 = 1;
  if (DAT_ram_3004ad85 != '\x01') {
    iVar8 = 2;
  }
  uVar12 = iVar8 * 2;
  uVar9 = param_2 * uVar12;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)iVar8;
  }
  if (0x100 < param_2) {
LAB_ram_4002b4ae:
    FUN_ram_4002a72c(param_1,uVar9);
    return uVar9;
  }
  if (_DAT_ram_30078500 == 0) {
    uVar3 = FUN_ram_4002a5de();
    FUN_ram_4002a5b0();
    if (iVar8 == 1) {
      uVar7 = 0x1b90;
    }
    else {
      uVar7 = 0x3720;
    }
    if (uVar3 < uVar7) goto LAB_ram_4002b4ae;
    _DAT_ram_30078500 = 1;
    _DAT_ram_3006e6dc = 0;
    _DAT_ram_3006e6e0 = 0x40;
  }
  uVar3 = FUN_ram_4002a5de();
  FUN_ram_4002a5b0();
  if (param_2 < 8) {
LAB_ram_4002b542:
    iVar10 = 0;
    bVar1 = true;
    iVar4 = param_1;
    uVar3 = uVar9;
  }
  else {
    if (iVar8 == 1) {
      uVar7 = 0x1b90;
    }
    else {
      uVar7 = 0x3720;
    }
    if (uVar7 < uVar3) {
      if (iVar8 == 1) {
        uVar7 = 0x2958;
      }
      else {
        uVar7 = 0x52b0;
      }
      if (uVar3 < uVar7) goto LAB_ram_4002b542;
      iVar10 = -1;
      uVar3 = uVar12;
    }
    else {
      uVar3 = iVar8 * -2;
      iVar10 = 1;
    }
    uVar3 = uVar3 + uVar9;
    bVar1 = false;
    iVar4 = 0x300780fc;
  }
  uVar7 = FUN_ram_4002c064(0x3006e6e4,iVar4,uVar3);
  iVar4 = param_1;
  if (iVar10 == -1) {
    if (uVar7 < uVar9) {
      if (bVar1) goto LAB_ram_4002b5fc;
LAB_ram_4002b5c2:
      iVar4 = 0x300780fc;
      goto LAB_ram_4002b5ca;
    }
    iVar10 = (uVar7 < uVar3) - 1;
    if (!bVar1) goto LAB_ram_4002b5c2;
    if (uVar7 < uVar3) goto LAB_ram_4002b730;
LAB_ram_4002b59e:
    iVar10 = 1;
    _DAT_ram_30078584 = _DAT_ram_30078584 + 1;
  }
  else {
    if (!bVar1) goto LAB_ram_4002b5c2;
LAB_ram_4002b5ca:
    if (iVar10 != 1) {
      if (uVar7 < uVar9) goto LAB_ram_4002b5fc;
      if (iVar10 == 0) {
        if (!bVar1) {
          FUN_ram_4000303c(param_1,iVar4,uVar9);
        }
        goto LAB_ram_4002b730;
      }
      goto LAB_ram_4002b59e;
    }
    if (uVar7 < uVar9 + iVar8 * -2) {
LAB_ram_4002b5fc:
      if (iVar8 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = uVar7 / uVar12;
      }
      _DAT_ram_30078570 = _DAT_ram_30078570 + 1;
      uVar11 = uVar12 * uVar3;
      if ((uVar11 != 0) && (!bVar1)) {
        FUN_ram_4000303c(param_1,iVar4,uVar11);
      }
      if (uVar11 < uVar9) {
        memset(param_1 + uVar11,0,uVar9 - uVar11);
      }
      if (uVar12 <= uVar7) {
        FUN_ram_4002a986(param_1,uVar3,iVar8);
        iVar10 = (uVar3 - 1) * iVar8;
        _DAT_ram_300770c4 = *(short *)(param_1 + iVar10 * 2);
        _DAT_ram_300770c6 = _DAT_ram_300770c4;
        if (iVar8 == 2) {
          _DAT_ram_300770c6 = *(short *)(param_1 + iVar10 * 2 + 2);
        }
      }
      if ((uVar3 < param_2) && (iVar10 = param_2 - uVar3, param_2 != uVar3)) {
        iVar4 = iVar8 * uVar3;
        if (iVar10 == 1) {
          *(undefined2 *)(param_1 + iVar4 * 2) = 0;
          if (iVar8 == 2) {
            *(undefined2 *)(param_1 + (iVar4 + 1) * 2) = 0;
          }
        }
        else if (_DAT_ram_300770c4 == 0 && _DAT_ram_300770c6 == 0) {
          memset(param_1 + iVar4 * 2,0,uVar12 * iVar10);
        }
        else {
          iVar10 = iVar10 + -1;
          iVar6 = iVar10 * _DAT_ram_300770c6;
          puVar2 = (undefined2 *)(param_1 + uVar11);
          iVar4 = iVar10;
          do {
            if (iVar10 == 0) {
              uVar5 = 0xffff;
            }
            else {
              uVar5 = (undefined2)((_DAT_ram_300770c4 * iVar4) / iVar10);
            }
            *puVar2 = uVar5;
            if (iVar8 == 2) {
              if (iVar10 == 0) {
                uVar5 = 0xffff;
              }
              else {
                uVar5 = (undefined2)(iVar6 / iVar10);
              }
              puVar2[1] = uVar5;
            }
            iVar4 = iVar4 + -1;
            puVar2 = puVar2 + iVar8;
            iVar6 = iVar6 - _DAT_ram_300770c6;
          } while (iVar4 != -1);
        }
      }
      if (uVar7 != 0) {
        _DAT_ram_3006e6dc = 0;
        _DAT_ram_3006e6e0 = 0x40;
        _DAT_ram_300770c4 = 0;
        _DAT_ram_300770c6 = 0;
        return uVar9;
      }
      _DAT_ram_3006e6dc = 0;
      _DAT_ram_3006e6e0 = 0x40;
      _DAT_ram_300770c4 = 0;
      _DAT_ram_300770c6 = 0;
      _DAT_ram_30078500 = 0;
      return uVar9;
    }
    iVar10 = -1;
    _DAT_ram_30078580 = _DAT_ram_30078580 + 1;
  }
  FUN_ram_4002a764(param_1,param_2,iVar4,param_2 + iVar10,iVar8);
LAB_ram_4002b730:
  iVar10 = (param_2 - 1) * iVar8;
  FUN_ram_4002a986(param_1,param_2,iVar8);
  _DAT_ram_300770c4 = *(undefined2 *)(param_1 + iVar10 * 2);
  _DAT_ram_300770c6 = _DAT_ram_300770c4;
  if (iVar8 == 2) {
    _DAT_ram_300770c6 = *(undefined2 *)(iVar10 * 2 + param_1 + 2);
  }
  return uVar9;
}


/* NanoCore 1.12, address 0x4002b76e.
 * REA evidence: ev_8695b5616bbcb609a5335122c50b342649d62c104c34ef43dfb6c51d200f1030
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002b76e(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_ram_400002f4();
  bVar2 = false;
  if (_DAT_ram_30078eb8 < param_2) {
    param_2 = _DAT_ram_30078eb8;
  }
  uVar4 = _DAT_ram_300796bc;
  for (uVar1 = 0; param_2 != uVar1; uVar1 = uVar1 + 1) {
    uVar3 = uVar4 + 1;
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(uVar4 + 0x30078ebc);
    if (0x7ff < uVar3) {
      uVar3 = 0;
    }
    bVar2 = true;
    uVar4 = uVar3;
  }
  if (bVar2) {
    _DAT_ram_300796bc = uVar4;
  }
  _DAT_ram_30078eb8 = _DAT_ram_30078eb8 - uVar1;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.12, address 0x4002b86c.
 * REA evidence: ev_3c3975ff77c0d54c3e8302867324d9add5eb6262ffcb04e9dcc5ff349298273c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002b86c(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && ((_DAT_ram_3006e3cc != 0 || (iVar5 = nc_radio_uart5_init(), iVar5 == 0)))))) {
    iVar5 = _DAT_ram_3006e6d4;
    nc_radio_send_control_if_ready(param_1,param_2);
    iVar1 = FUN_ram_40004346();
    if (param_5 == 0) {
      param_5 = 1;
    }
    iVar2 = FUN_ram_400043ae(param_5);
    while (iVar3 = FUN_ram_40004346(), 0 < (iVar1 + iVar2) - iVar3) {
      FUN_ram_4002ad2a(0);
      if (_DAT_ram_3006e6d4 != iVar5) {
        uVar4 = FUN_ram_400002f4();
        if (_DAT_ram_3006e6d0 < param_4) {
          param_4 = (uint)_DAT_ram_3006e6d0;
        }
        if (param_4 != 0) {
          FUN_ram_4000303c(param_3,0x3006e3d0,param_4);
        }
        FUN_ram_400002fa(uVar4);
        return param_4;
      }
      FUN_ram_400064e4(2);
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002b930.
 * REA evidence: ev_58f1dae9062f216191864c6b4a5fd905a799b7e50edba89ee165b1408ee577e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b930(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (_DAT_ram_30078588 == 0) {
    if (_DAT_ram_3006e3cc != 0) {
      return;
    }
    iVar4 = nc_radio_uart5_init();
    if (iVar4 == 0) {
      FUN_ram_400064e4(10);
    }
    if (_DAT_ram_30078588 == 0) {
      return;
    }
  }
  uVar1 = param_2;
  if (0x300 < param_2) {
    uVar1 = 0x300;
  }
  if (DAT_ram_3007859d != '\0') {
    if (((((param_1 == (char *)0x0) || (param_2 < 0xb)) ||
         ((*param_1 != -0x56 ||
          (((param_1[1] != 'U' || (*(ushort *)(param_1 + 2) < 5)) ||
           (uVar2 = (uint)(ushort)(*(ushort *)(param_1 + 2) + 6), uVar1 < uVar2)))))) ||
        ((0x300 < uVar2 || (param_1[4] != '\x01')))) ||
       ((uVar5 = FUN_ram_4002c1ee(0,param_1,uVar2 - 2),
        uVar5 != CONCAT11(param_1[uVar2 - 1],param_1[uVar2 - 2]) ||
        (iVar4 = FUN_ram_4002a592(param_1 + 5), 0x2dc594 < iVar4 - 300U)))) {
      iVar4 = 0;
    }
    _DAT_ram_30078544 = nc_radio_uart_write(param_1,uVar1);
    _DAT_ram_30078524 = _DAT_ram_30078524 + 1;
    _DAT_ram_30078528 = _DAT_ram_30078528 + 1;
    _DAT_ram_30078548 = 0xffffffff;
    if (uVar1 == _DAT_ram_30078544) {
      if ((iVar4 != 0) && (DAT_ram_3004ad88 != iVar4)) {
        _DAT_ram_30078540 = uVar1;
        FUN_ram_400064e4(2);
        FUN_ram_4002b2b6(iVar4);
        return;
      }
    }
    else {
      _DAT_ram_30078530 = _DAT_ram_30078530 + 1;
    }
    _DAT_ram_30078540 = uVar1;
    return;
  }
  iVar4 = 0;
  uVar2 = 0;
  while( true ) {
    if (uVar1 <= uVar2) {
      return;
    }
    uVar5 = uVar1 - uVar2;
    if (0x80 < uVar5) {
      uVar5 = 0x80;
    }
    uVar6 = (uint)DAT_ram_3004ad8c;
    DAT_ram_3004ad8c = DAT_ram_3004ad8c + 1;
    iVar3 = FUN_ram_4002c232(0x30078bb0,0x308,4,uVar6,param_1 + uVar2,uVar5 & 0xffff);
    if (iVar3 == 0) break;
    _DAT_ram_30078544 = nc_radio_uart_write(0x30078bb0,iVar3);
    if (iVar4 == 0) {
      _DAT_ram_30078524 = _DAT_ram_30078524 + 1;
    }
    _DAT_ram_30078528 = _DAT_ram_30078528 + 1;
    if (iVar3 != _DAT_ram_30078544) {
      _DAT_ram_30078530 = _DAT_ram_30078530 + 1;
    }
    _DAT_ram_30078540 = iVar3;
    _DAT_ram_30078548 = uVar6;
    if (iVar4 == 0) {
      if ((param_1 == (char *)0x0) || (param_2 == 0)) {
        _DAT_ram_3007852c = _DAT_ram_3007852c + 1;
        _DAT_ram_30078534 = 0;
        _DAT_ram_30078538 = 0;
        _DAT_ram_3007853c = 0;
      }
      else {
        _DAT_ram_30078534 = 0xffffffff;
        _DAT_ram_30078538 = 0;
        _DAT_ram_3007853c = 0;
        if ((((6 < param_2) && (*param_1 == -0x56)) && (param_1[1] == 'U')) &&
           ((_DAT_ram_30078534 = (uint)(byte)param_1[4], param_1[4] == '\x02' && (0xc < param_2))))
        {
          _DAT_ram_30078538 = FUN_ram_4002a592(param_1 + 5);
          _DAT_ram_3007853c = FUN_ram_4002a592(param_1 + 9);
        }
      }
    }
    uVar2 = uVar2 + uVar5;
    iVar4 = iVar4 + 1;
    if (uVar2 < uVar1) {
      FUN_ram_400064e4(0xf);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002bbe0.
 * REA evidence: ev_91d2f49f4aedeeb253071c2326b16a31343acef1017bd8372222f6f01e077bca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002bbe0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_3007859c = 0;
  DAT_ram_3007859d = param_1 != 0;
  FUN_ram_4002a5cc();
  _DAT_ram_30078ba4 = _DAT_ram_30078bac;
  FUN_ram_400002fa(uVar1);
  if ((_DAT_ram_30078588 != 0) && ((bool)DAT_ram_3007858c != (param_1 != 0))) {
    if (_DAT_ram_30078598 != 0) {
      FUN_ram_40004a22(_DAT_ram_30078598,0xffffffff);
    }
    if (_DAT_ram_30078590 != 0) {
      FUN_ram_40004a22(_DAT_ram_30078590,0xffffffff);
    }
    FUN_ram_4000465a(_DAT_ram_30078588,0);
    FUN_ram_40037f2a(5);
    FUN_ram_400045c0(_DAT_ram_30078588);
    iVar3 = _DAT_ram_30078588;
    if (param_1 == 0) {
      iVar3 = FUN_ram_4002a926(_DAT_ram_30078588);
      if (iVar3 == 0) {
        DAT_ram_3007858c = '\0';
      }
    }
    else {
      iVar2 = FUN_ram_40004544(_DAT_ram_30078588,0x103);
      if ((iVar2 == 0) || (iVar2 = FUN_ram_40004544(iVar3,3), iVar2 == 0)) {
        FUN_ram_4000465a(iVar3,&LAB_ram_4002a968);
        DAT_ram_3007858c = '\x01';
      }
    }
    if (_DAT_ram_30078590 != 0) {
      FUN_ram_40004b14();
    }
    if (_DAT_ram_30078598 != 0) {
      FUN_ram_40004b14();
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002bce2.
 * REA evidence: ev_c7e1ca861a8aeae0c2315ee51f36373995a12769c4c517175f403e55f604b153
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002bce2(void)

{
  return DAT_ram_3007859d != '\0';
}


/* NanoCore 1.12, address 0x4002bcf0.
 * REA evidence: ev_d73a571b7c781c7a89366597a5bf6cfc1996098e27e8dd53a0c83b82be49b708
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002bcf0(void)

{
  FUN_ram_4002bbe0(0);
  DAT_ram_3007859c = 1;
  return;
}


/* NanoCore 1.12, address 0x4002bd0a.
 * REA evidence: ev_0515d31ab3caba9b38614dbd3f08f92883125738465273cecaffc25a99a16bd4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002bd0a(char *param_1,uint param_2)

{
  if ((((((DAT_ram_3007859c != '\0') && (DAT_ram_3007859d == '\0')) && (param_1 != (char *)0x0)) &&
       ((6 < param_2 && (*param_1 == -0x56)))) &&
      ((param_1[1] == 'U' && ((param_1[2] == '\x01' && (param_1[3] == '\0')))))) &&
     (param_1[4] == '\x03')) {
    FUN_ram_4002b930();
    FUN_ram_4002bbe0(1);
    return 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002bd78.
 * REA evidence: ev_05afb6c9f447002d632af5626366c2291bddf74108f8594992410ba3b1de9fe3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002bd78(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    return 0;
  }
  if ((_DAT_ram_3006e3cc != 0) || (iVar7 = nc_radio_uart5_init(), iVar7 == 0)) {
    cVar1 = DAT_ram_3007859d;
    if ((DAT_ram_3007859d != '\0') && ((param_1 == 0 || (param_2 == 0)))) {
      FUN_ram_4002ad2a(1);
      iVar7 = FUN_ram_4002aa00(param_3,param_4);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
    iVar7 = _DAT_ram_30078bac;
    if ((param_1 == 0) || (param_2 == 0)) {
      iVar2 = FUN_ram_40004346();
    }
    else {
      FUN_ram_4002b930(param_1,param_2);
      iVar2 = FUN_ram_40004346();
      iVar3 = FUN_ram_400043ae(3);
      iVar2 = iVar2 + iVar3;
    }
    iVar3 = FUN_ram_40004346();
    if (param_5 == 0) {
      param_5 = 1;
    }
    iVar4 = FUN_ram_400043ae(param_5);
    while (iVar5 = FUN_ram_40004346(), 0 < (iVar3 + iVar4) - iVar5) {
      if ((cVar1 == '\0') || (iVar5 = FUN_ram_40004346(), iVar5 - iVar2 < 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      FUN_ram_4002ad2a(uVar6);
      if (_DAT_ram_30078bac != iVar7) {
        iVar7 = FUN_ram_4002aa00(param_3,param_4);
        return iVar7;
      }
      FUN_ram_400064e4(2);
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002bea2.
 * REA evidence: ev_5d2f20851ac80a6200e03d6e76ed5bdc0f43f414ae0a21ff5873bf79f9fdbc8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002bea2(void)

{
  char cVar1;
  undefined1 uStack_14;
  char cStack_13;
  
  if (DAT_ram_3004ad84 != '\x02') {
    DAT_ram_3004ad84 = '\x02';
    DAT_ram_30078504 = '\0';
    FUN_ram_4002a5fe();
  }
  if (DAT_ram_30078504 != DAT_ram_3004ad84) {
    cVar1 = '\x01';
    if (DAT_ram_3004ad84 != '\x01') {
      cVar1 = '\x02';
    }
    uStack_14 = 3;
    if (_DAT_ram_30078588 != 0) {
      cStack_13 = cVar1;
      nc_radio_send_control_if_ready(&uStack_14,2);
      DAT_ram_30078504 = cVar1;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002bf1e.
 * REA evidence: ev_cfbdb5c5620dd6da3e76a0b9c2153e887878403d3144fa78c3f80bf4ac787a7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002bf1e(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  do {
    while (_DAT_ram_30078588 != 0) {
LAB_ram_4002bf74:
      iVar2 = FUN_ram_4002a6e4();
      iVar1 = _DAT_ram_30078594;
      uVar3 = 0x14;
      if (iVar2 == 0) {
        uVar3 = 4;
      }
      if (_DAT_ram_30078594 != 0) {
        uVar3 = FUN_ram_400043ae(uVar3);
        FUN_ram_4000487e(iVar1,uVar3);
      }
      FUN_ram_4002ad2a(0);
    }
    _DAT_ram_30078588 = FUN_ram_400044c2(s_uart5_ram_4009c04c);
    if (_DAT_ram_30078588 != 0) {
      iVar1 = FUN_ram_4002a926();
      if (iVar1 == 0) {
        DAT_ram_30078504 = 0;
        FUN_ram_4002bea2();
        goto LAB_ram_4002bf74;
      }
      _DAT_ram_30078588 = 0;
    }
    FUN_ram_400064e4(10);
  } while( true );
}


/* NanoCore 1.12, address 0x4002bf9a.
 * REA evidence: ev_0b101f252756faa11ea74dc8ea051ca6268e6b777a65d9eafd9c7e838e38f3e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_4002bea2(void)

{
  char cVar1;
  undefined1 uStack_14;
  char cStack_13;
  
  if (DAT_ram_3004ad84 != '\x02') {
    DAT_ram_3004ad84 = '\x02';
    DAT_ram_30078504 = '\0';
    FUN_ram_4002a5fe();
  }
  if (DAT_ram_30078504 != DAT_ram_3004ad84) {
    cVar1 = '\x01';
    if (DAT_ram_3004ad84 != '\x01') {
      cVar1 = '\x02';
    }
    uStack_14 = 3;
    if (_DAT_ram_30078588 != 0) {
      cStack_13 = cVar1;
      nc_radio_send_control_if_ready(&uStack_14,2);
      DAT_ram_30078504 = cVar1;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002bf9e.
 * REA evidence: ev_ec63a0304da6125b08577bfd950323ee70694679e143b2a0b63f0af01d0878cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002bf9e(int param_1)

{
  *(undefined4 *)(param_1 + 0x89d0) = 0;
  *(undefined4 *)(param_1 + 0x89d4) = 0;
  *(undefined4 *)(param_1 + 0x89d8) = 0;
  return;
}


/* NanoCore 1.12, address 0x4002bfb0.
 * REA evidence: ev_2910d52242aa26a0983d0a01128a0b8c743f0681f8dd6082617afa61168f191a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002bfb0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_ram_400002f4();
    iVar4 = *(int *)(param_1 + 0x89d8);
    iVar2 = *(int *)(param_1 + 0x89d0);
    FUN_ram_400002fa();
    uVar1 = 0xffffffff;
    if (param_3 <= 0x89d0U - iVar4) {
      uVar3 = 0x89d0U - iVar2;
      if (param_3 < 0x89d0U - iVar2) {
        uVar3 = param_3;
      }
      FUN_ram_4000303c(param_1 + iVar2,param_2,uVar3);
      if (uVar3 < param_3) {
        FUN_ram_4000303c(param_1,param_2 + uVar3,param_3 - uVar3);
      }
      uVar3 = iVar2 + param_3;
      if (0x89cf < uVar3) {
        uVar3 = uVar3 - 0x89d0;
      }
      FUN_ram_400002f4();
      *(uint *)(param_1 + 0x89d0) = uVar3;
      *(uint *)(param_1 + 0x89d8) = param_3 + *(int *)(param_1 + 0x89d8);
      FUN_ram_400002fa();
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}


