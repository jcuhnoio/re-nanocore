/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4002a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002a0ec.
 * REA evidence: ev_77fab6dfa081f89184607f396202281c8ed9c98ef112fdb252de744deeabd0c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002a0ec(int param_1)

{
  int iVar1;
  int iStack_14;
  
  if (param_1 - 300U < 0x2dc595) {
    iStack_14 = param_1;
    if (_DAT_ram_300781e4 != 0) {
LAB_ram_4002a122:
      if (_DAT_ram_300781f4 != 0) {
        FUN_ram_400049d6(_DAT_ram_300781f4,0xffffffff);
      }
      if (_DAT_ram_300781ec != 0) {
        FUN_ram_400049d6(_DAT_ram_300781ec,0xffffffff);
      }
      FUN_ram_4002941a();
      FUN_ram_4002b064(0x30076d24,FUN_ram_40029d92,0);
      _DAT_ram_30078800 = _DAT_ram_30078808;
      iVar1 = FUN_ram_40004604(_DAT_ram_300781e4,0x87,&iStack_14);
      if (iVar1 == 0) {
        DAT_ram_30046798 = iStack_14;
      }
      if (_DAT_ram_300781ec != 0) {
        FUN_ram_40004ac8();
      }
      if (_DAT_ram_300781f4 != 0) {
        FUN_ram_40004ac8();
      }
      return -(uint)(iVar1 != 0);
    }
    if (_DAT_ram_3006e028 == 0) {
      iVar1 = FUN_ram_40029f82();
      if (iVar1 == 0) {
        FUN_ram_400065d4(10);
      }
      if (_DAT_ram_300781e4 != 0) goto LAB_ram_4002a122;
    }
  }
  return -1;
}


/* NanoCore 1.10, address 0x4002a1c6.
 * REA evidence: ev_2a396298cab1fe119f513c92fc279e4198c521886cf98e7a74fa90cbb2989c8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002a1c6(void)

{
  return _DAT_ram_300781e4 != 0;
}


/* NanoCore 1.10, address 0x4002a1d4.
 * REA evidence: ev_813579e41df1f94115e28cf55697c79036c0670e9ae02c7fad9e4e54f657594f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002a1d4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_30076d1c;
  if (_DAT_ram_30077d54 == 0) {
    uVar2 = 0;
    if ((_DAT_ram_3006e020 != 0) && (_DAT_ram_30076d1c != 0)) {
      iVar3 = FUN_ram_400042fa();
      if ((_DAT_ram_3006e024 == 0) || ((uint)(iVar3 - iVar1) <= _DAT_ram_3006e024)) {
        uVar2 = 1;
      }
      else {
        uVar4 = FUN_ram_400002f4();
        FUN_ram_4002ad42(0x3006e340);
        FUN_ram_400002fa(uVar4);
        _DAT_ram_3006e020 = 0;
        _DAT_ram_3007815c = 0;
        _DAT_ram_3006e33c = 0;
        _DAT_ram_30076d20 = 0;
        _DAT_ram_30076d22 = 0;
        _DAT_ram_30076d1c = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4002a26a.
 * REA evidence: ev_13d1139a528c5fd94730b43f67a3e435947d1fd065153a4a4d78ec46879bcb1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a26a(int param_1)

{
  _DAT_ram_30077d54 = (uint)(param_1 != 0);
  if ((param_1 != 0) != 0) {
    _DAT_ram_3007815c = 0;
    _DAT_ram_3006e33c = 0;
    _DAT_ram_30076d20 = 0;
    _DAT_ram_30076d22 = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4002a29e.
 * REA evidence: ev_ea7b590e6cef70275a0eb23abe766b85f1a65fb95447f7952dd7c15494a9e2ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002a29e(int param_1,uint param_2,undefined1 *param_3)

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
  if (DAT_ram_30046795 != '\x01') {
    iVar8 = 2;
  }
  uVar12 = iVar8 * 2;
  uVar9 = param_2 * uVar12;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)iVar8;
  }
  if (0x100 < param_2) {
LAB_ram_4002a2e4:
    FUN_ram_40029562(param_1,uVar9);
    return uVar9;
  }
  if (_DAT_ram_3007815c == 0) {
    uVar3 = FUN_ram_4002949c();
    FUN_ram_400293fe();
    if (iVar8 == 1) {
      uVar7 = 0x1b90;
    }
    else {
      uVar7 = 0x3720;
    }
    if (uVar3 < uVar7) goto LAB_ram_4002a2e4;
    _DAT_ram_3007815c = 1;
    _DAT_ram_3006e338 = 0;
    _DAT_ram_3006e33c = 0x40;
  }
  uVar3 = FUN_ram_4002949c();
  FUN_ram_400293fe();
  if (param_2 < 8) {
LAB_ram_4002a378:
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
      if (uVar3 < uVar7) goto LAB_ram_4002a378;
      iVar10 = -1;
      uVar3 = uVar12;
    }
    else {
      uVar3 = iVar8 * -2;
      iVar10 = 1;
    }
    uVar3 = uVar3 + uVar9;
    bVar1 = false;
    iVar4 = 0x30077d58;
  }
  uVar7 = FUN_ram_4002ae08(0x3006e340,iVar4,uVar3);
  iVar4 = param_1;
  if (iVar10 == -1) {
    if (uVar7 < uVar9) {
      if (bVar1) goto LAB_ram_4002a432;
LAB_ram_4002a3f8:
      iVar4 = 0x30077d58;
      goto LAB_ram_4002a400;
    }
    iVar10 = (uVar7 < uVar3) - 1;
    if (!bVar1) goto LAB_ram_4002a3f8;
    if (uVar7 < uVar3) goto LAB_ram_4002a566;
LAB_ram_4002a3d4:
    iVar10 = 1;
    _DAT_ram_300781e0 = _DAT_ram_300781e0 + 1;
  }
  else {
    if (!bVar1) goto LAB_ram_4002a3f8;
LAB_ram_4002a400:
    if (iVar10 != 1) {
      if (uVar7 < uVar9) goto LAB_ram_4002a432;
      if (iVar10 == 0) {
        if (!bVar1) {
          FUN_ram_4000305c(param_1,iVar4,uVar9);
        }
        goto LAB_ram_4002a566;
      }
      goto LAB_ram_4002a3d4;
    }
    if (uVar7 < uVar9 + iVar8 * -2) {
LAB_ram_4002a432:
      if (iVar8 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = uVar7 / uVar12;
      }
      _DAT_ram_300781cc = _DAT_ram_300781cc + 1;
      uVar11 = uVar12 * uVar3;
      if ((uVar11 != 0) && (!bVar1)) {
        FUN_ram_4000305c(param_1,iVar4,uVar11);
      }
      if (uVar11 < uVar9) {
        memset((void *)(param_1 + uVar11),0,uVar9 - uVar11);
      }
      if (uVar12 <= uVar7) {
        FUN_ram_400297bc(param_1,uVar3,iVar8);
        iVar10 = (uVar3 - 1) * iVar8;
        _DAT_ram_30076d20 = *(short *)(param_1 + iVar10 * 2);
        _DAT_ram_30076d22 = _DAT_ram_30076d20;
        if (iVar8 == 2) {
          _DAT_ram_30076d22 = *(short *)(param_1 + iVar10 * 2 + 2);
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
        else if (_DAT_ram_30076d20 == 0 && _DAT_ram_30076d22 == 0) {
          memset((void *)(param_1 + iVar4 * 2),0,uVar12 * iVar10);
        }
        else {
          iVar10 = iVar10 + -1;
          iVar6 = iVar10 * _DAT_ram_30076d22;
          puVar2 = (undefined2 *)(param_1 + uVar11);
          iVar4 = iVar10;
          do {
            if (iVar10 == 0) {
              uVar5 = 0xffff;
            }
            else {
              uVar5 = (undefined2)((_DAT_ram_30076d20 * iVar4) / iVar10);
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
            iVar6 = iVar6 - _DAT_ram_30076d22;
          } while (iVar4 != -1);
        }
      }
      if (uVar7 != 0) {
        _DAT_ram_3006e338 = 0;
        _DAT_ram_3006e33c = 0x40;
        _DAT_ram_30076d20 = 0;
        _DAT_ram_30076d22 = 0;
        return uVar9;
      }
      _DAT_ram_3006e338 = 0;
      _DAT_ram_3006e33c = 0x40;
      _DAT_ram_30076d20 = 0;
      _DAT_ram_30076d22 = 0;
      _DAT_ram_3007815c = 0;
      return uVar9;
    }
    iVar10 = -1;
    _DAT_ram_300781dc = _DAT_ram_300781dc + 1;
  }
  FUN_ram_4002959a(param_1,param_2,iVar4,param_2 + iVar10,iVar8);
LAB_ram_4002a566:
  iVar10 = (param_2 - 1) * iVar8;
  FUN_ram_400297bc(param_1,param_2,iVar8);
  _DAT_ram_30076d20 = *(undefined2 *)(param_1 + iVar10 * 2);
  _DAT_ram_30076d22 = _DAT_ram_30076d20;
  if (iVar8 == 2) {
    _DAT_ram_30076d22 = *(undefined2 *)(iVar10 * 2 + param_1 + 2);
  }
  return uVar9;
}


/* NanoCore 1.10, address 0x4002a5a4.
 * REA evidence: ev_5d082c0bd9c8d0e14a4b6f6478ba06ad8b7d56e8c5727ce582e60ed89f4f6f6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002a5a4(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_ram_400002f4();
  bVar2 = false;
  if (_DAT_ram_30078b14 < param_2) {
    param_2 = _DAT_ram_30078b14;
  }
  uVar4 = _DAT_ram_30079318;
  for (uVar1 = 0; param_2 != uVar1; uVar1 = uVar1 + 1) {
    uVar3 = uVar4 + 1;
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(uVar4 + 0x30078b18);
    if (0x7ff < uVar3) {
      uVar3 = 0;
    }
    bVar2 = true;
    uVar4 = uVar3;
  }
  if (bVar2) {
    _DAT_ram_30079318 = uVar4;
  }
  _DAT_ram_30078b14 = _DAT_ram_30078b14 - uVar1;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.10, address 0x4002a692.
 * REA evidence: ev_6e6889319ccb62371b1d065a6df3ec183221cb4e1645a6cb6d116251982bded6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a692(void)

{
  if (_DAT_ram_300781e4 != 0) {
    FUN_ram_4002995c();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002a6a2.
 * REA evidence: ev_d3960dabdaa6fb54a785b749799ef0ad0d9da762aa1ac21bca439734075c5c20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002a6a2(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && ((_DAT_ram_3006e028 != 0 || (iVar5 = FUN_ram_40029f82(), iVar5 == 0)))))) {
    iVar5 = _DAT_ram_3006e330;
    FUN_ram_4002a692(param_1,param_2);
    iVar1 = FUN_ram_400042fa();
    if (param_5 == 0) {
      param_5 = 1;
    }
    iVar2 = FUN_ram_40004362(param_5);
    while (iVar3 = FUN_ram_400042fa(), 0 < (iVar1 + iVar2) - iVar3) {
      FUN_ram_40029b60(0);
      if (_DAT_ram_3006e330 != iVar5) {
        uVar4 = FUN_ram_400002f4();
        if (_DAT_ram_3006e32c < param_4) {
          param_4 = (uint)_DAT_ram_3006e32c;
        }
        if (param_4 != 0) {
          FUN_ram_4000305c(param_3,0x3006e02c,param_4);
        }
        FUN_ram_400002fa(uVar4);
        return param_4;
      }
      FUN_ram_400065d4(2);
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002a766.
 * REA evidence: ev_20b66ac1208556a94b0a478767eaebd060b91f2d2d127b4a20b843e34e0476dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a766(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (_DAT_ram_300781e4 == 0) {
    if (_DAT_ram_3006e028 != 0) {
      return;
    }
    iVar4 = FUN_ram_40029f82();
    if (iVar4 == 0) {
      FUN_ram_400065d4(10);
    }
    if (_DAT_ram_300781e4 == 0) {
      return;
    }
  }
  uVar1 = param_2;
  if (0x300 < param_2) {
    uVar1 = 0x300;
  }
  if (DAT_ram_300781f8 != '\0') {
    if (((((param_1 == (char *)0x0) || (param_2 < 0xb)) ||
         ((*param_1 != -0x56 ||
          (((param_1[1] != 'U' || (*(ushort *)(param_1 + 2) < 5)) ||
           (uVar2 = (uint)(ushort)(*(ushort *)(param_1 + 2) + 6), uVar1 < uVar2)))))) ||
        ((0x300 < uVar2 || (param_1[4] != '\x01')))) ||
       ((uVar5 = FUN_ram_4002af92(0,param_1,uVar2 - 2),
        uVar5 != CONCAT11(param_1[uVar2 - 1],param_1[uVar2 - 2]) ||
        (iVar4 = FUN_ram_400293e0(param_1 + 5), 0x2dc594 < iVar4 - 300U)))) {
      iVar4 = 0;
    }
    _DAT_ram_300781a0 = FUN_ram_400298b4(param_1,uVar1);
    _DAT_ram_30078180 = _DAT_ram_30078180 + 1;
    _DAT_ram_30078184 = _DAT_ram_30078184 + 1;
    _DAT_ram_300781a4 = 0xffffffff;
    if (uVar1 == _DAT_ram_300781a0) {
      if ((iVar4 != 0) && (DAT_ram_30046798 != iVar4)) {
        _DAT_ram_3007819c = uVar1;
        FUN_ram_400065d4(2);
        FUN_ram_4002a0ec(iVar4);
        return;
      }
    }
    else {
      _DAT_ram_3007818c = _DAT_ram_3007818c + 1;
    }
    _DAT_ram_3007819c = uVar1;
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
    uVar6 = (uint)DAT_ram_3004679c;
    DAT_ram_3004679c = DAT_ram_3004679c + 1;
    iVar3 = FUN_ram_4002afd6(0x3007880c,0x308,4,uVar6,param_1 + uVar2,uVar5 & 0xffff);
    if (iVar3 == 0) break;
    _DAT_ram_300781a0 = FUN_ram_400298b4(0x3007880c,iVar3);
    if (iVar4 == 0) {
      _DAT_ram_30078180 = _DAT_ram_30078180 + 1;
    }
    _DAT_ram_30078184 = _DAT_ram_30078184 + 1;
    if (iVar3 != _DAT_ram_300781a0) {
      _DAT_ram_3007818c = _DAT_ram_3007818c + 1;
    }
    _DAT_ram_3007819c = iVar3;
    _DAT_ram_300781a4 = uVar6;
    if (iVar4 == 0) {
      if ((param_1 == (char *)0x0) || (param_2 == 0)) {
        _DAT_ram_30078188 = _DAT_ram_30078188 + 1;
        _DAT_ram_30078190 = 0;
        _DAT_ram_30078194 = 0;
        _DAT_ram_30078198 = 0;
      }
      else {
        _DAT_ram_30078190 = 0xffffffff;
        _DAT_ram_30078194 = 0;
        _DAT_ram_30078198 = 0;
        if ((((6 < param_2) && (*param_1 == -0x56)) && (param_1[1] == 'U')) &&
           ((_DAT_ram_30078190 = (uint)(byte)param_1[4], param_1[4] == '\x02' && (0xc < param_2))))
        {
          _DAT_ram_30078194 = FUN_ram_400293e0(param_1 + 5);
          _DAT_ram_30078198 = FUN_ram_400293e0(param_1 + 9);
        }
      }
    }
    uVar2 = uVar2 + uVar5;
    iVar4 = iVar4 + 1;
    if (uVar2 < uVar1) {
      FUN_ram_400065d4(0xf);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4002aa14.
 * REA evidence: ev_1be1ba06e8bbadf665e71908e6ec1523e52db563aba82cf31dfc98ae6a0e7f09
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002aa14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_300781f8 = param_1 != 0;
  FUN_ram_4002941a();
  _DAT_ram_30078800 = _DAT_ram_30078808;
  FUN_ram_400002fa(uVar1);
  if ((_DAT_ram_300781e4 != 0) && ((bool)DAT_ram_300781e8 != (param_1 != 0))) {
    if (_DAT_ram_300781f4 != 0) {
      FUN_ram_400049d6(_DAT_ram_300781f4,0xffffffff);
    }
    if (_DAT_ram_300781ec != 0) {
      FUN_ram_400049d6(_DAT_ram_300781ec,0xffffffff);
    }
    FUN_ram_4000460e(_DAT_ram_300781e4,0);
    FUN_ram_40035d2a(5);
    FUN_ram_40004574(_DAT_ram_300781e4);
    iVar3 = _DAT_ram_300781e4;
    if (param_1 == 0) {
      iVar3 = FUN_ram_4002975c(_DAT_ram_300781e4);
      if (iVar3 == 0) {
        DAT_ram_300781e8 = '\0';
      }
    }
    else {
      iVar2 = FUN_ram_400044f8(_DAT_ram_300781e4,0x103);
      if ((iVar2 == 0) || (iVar2 = FUN_ram_400044f8(iVar3,3), iVar2 == 0)) {
        FUN_ram_4000460e(iVar3,&LAB_ram_4002979e);
        DAT_ram_300781e8 = '\x01';
      }
    }
    if (_DAT_ram_300781ec != 0) {
      FUN_ram_40004ac8();
    }
    if (_DAT_ram_300781f4 != 0) {
      FUN_ram_40004ac8();
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4002ab0e.
 * REA evidence: ev_b79b3bd81d46a9f1f440da26ef02c8440aa23411a22059171e042976b1ae0cbe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002ab0e(void)

{
  return DAT_ram_300781f8 != '\0';
}


/* NanoCore 1.10, address 0x4002ab1c.
 * REA evidence: ev_aa07c71e6e517699c8a520e2b03e00c2e10eec8d3f89ebf814c9207d8d37a8b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002ab1c(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  if ((_DAT_ram_3006e028 != 0) || (iVar7 = FUN_ram_40029f82(), iVar7 == 0)) {
    cVar1 = DAT_ram_300781f8;
    if ((DAT_ram_300781f8 != '\0') && ((param_1 == 0 || (param_2 == 0)))) {
      FUN_ram_40029b60(1);
      iVar7 = FUN_ram_40029836(param_3,param_4);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
    iVar7 = _DAT_ram_30078808;
    if ((param_1 == 0) || (param_2 == 0)) {
      iVar2 = FUN_ram_400042fa();
    }
    else {
      FUN_ram_4002a766(param_1,param_2);
      iVar2 = FUN_ram_400042fa();
      iVar3 = FUN_ram_40004362(3);
      iVar2 = iVar2 + iVar3;
    }
    iVar3 = FUN_ram_400042fa();
    if (param_5 == 0) {
      param_5 = 1;
    }
    iVar4 = FUN_ram_40004362(param_5);
    while (iVar5 = FUN_ram_400042fa(), 0 < (iVar3 + iVar4) - iVar5) {
      if ((cVar1 == '\0') || (iVar5 = FUN_ram_400042fa(), iVar5 - iVar2 < 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      FUN_ram_40029b60(uVar6);
      if (_DAT_ram_30078808 != iVar7) {
        iVar7 = FUN_ram_40029836(param_3,param_4);
        return iVar7;
      }
      FUN_ram_400065d4(2);
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002ac26.
 * REA evidence: ev_f898d4236dc4992d69e036bd55d314546c7f7ede7f615315cfd403bedf5bc123
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ac26(int param_1)

{
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  uStack_13 = param_1 != 0;
  uStack_14 = 2;
  FUN_ram_4002a692(&uStack_14,2);
  return;
}


/* NanoCore 1.10, address 0x4002ac46.
 * REA evidence: ev_115af8d931bb29b023423fed477bab3c5751b0abb27162538b1f17be4e2abda5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ac46(void)

{
  char cVar1;
  undefined1 uStack_14;
  char cStack_13;
  
  if (DAT_ram_30046794 != '\x02') {
    DAT_ram_30046794 = '\x02';
    DAT_ram_30078160 = '\0';
    FUN_ram_400294bc();
  }
  if (DAT_ram_30078160 != DAT_ram_30046794) {
    cVar1 = '\x01';
    if (DAT_ram_30046794 != '\x01') {
      cVar1 = '\x02';
    }
    uStack_14 = 3;
    if (_DAT_ram_300781e4 != 0) {
      cStack_13 = cVar1;
      FUN_ram_4002a692(&uStack_14,2);
      DAT_ram_30078160 = cVar1;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4002acc2.
 * REA evidence: ev_45f0233cb8c6be8e0b24dfa45680cb9f9a1756f7cd306565714162331a7fa2b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002acc2(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  do {
    while (_DAT_ram_300781e4 != 0) {
LAB_ram_4002ad18:
      iVar2 = FUN_ram_4002951a();
      iVar1 = _DAT_ram_300781f0;
      uVar3 = 0x14;
      if (iVar2 == 0) {
        uVar3 = 4;
      }
      if (_DAT_ram_300781f0 != 0) {
        uVar3 = FUN_ram_40004362(uVar3);
        FUN_ram_40004832(iVar1,uVar3);
      }
      FUN_ram_40029b60(0);
    }
    _DAT_ram_300781e4 = FUN_ram_40004476(s_uart5_ram_40094f34);
    if (_DAT_ram_300781e4 != 0) {
      iVar1 = FUN_ram_4002975c();
      if (iVar1 == 0) {
        DAT_ram_30078160 = 0;
        FUN_ram_4002ac46();
        goto LAB_ram_4002ad18;
      }
      _DAT_ram_300781e4 = 0;
    }
    FUN_ram_400065d4(10);
  } while( true );
}


/* NanoCore 1.10, address 0x4002ad3e.
 * REA evidence: ev_cda81e059de206f82e3b0df520cea57781837afd33dcaf8180a0ade85cf83118
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_4002ac46(void)

{
  char cVar1;
  undefined1 uStack_14;
  char cStack_13;
  
  if (DAT_ram_30046794 != '\x02') {
    DAT_ram_30046794 = '\x02';
    DAT_ram_30078160 = '\0';
    FUN_ram_400294bc();
  }
  if (DAT_ram_30078160 != DAT_ram_30046794) {
    cVar1 = '\x01';
    if (DAT_ram_30046794 != '\x01') {
      cVar1 = '\x02';
    }
    uStack_14 = 3;
    if (_DAT_ram_300781e4 != 0) {
      cStack_13 = cVar1;
      FUN_ram_4002a692(&uStack_14,2);
      DAT_ram_30078160 = cVar1;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4002ad42.
 * REA evidence: ev_a5716e83aec97f42432b4d1d9767168a89f4d76314cf42a903bf7c04d85c996f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ad42(int param_1)

{
  *(undefined4 *)(param_1 + 0x89d0) = 0;
  *(undefined4 *)(param_1 + 0x89d4) = 0;
  *(undefined4 *)(param_1 + 0x89d8) = 0;
  return;
}


/* NanoCore 1.10, address 0x4002ad54.
 * REA evidence: ev_ff94eb9e2edbebeccd23d95ec9c2809eabb93359453cf6dc78a052018d405c20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002ad54(int param_1,int param_2,uint param_3)

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
      FUN_ram_4000305c(param_1 + iVar2,param_2,uVar3);
      if (uVar3 < param_3) {
        FUN_ram_4000305c(param_1,param_2 + uVar3,param_3 - uVar3);
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


/* NanoCore 1.10, address 0x4002ae08.
 * REA evidence: ev_ee5dc6eff4675f5f0616117cf881902b988a14e8385dffd365156f2f6567c24c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002ae08(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_ram_400002f4();
    uVar2 = *(uint *)(param_1 + 0x89d8);
    iVar1 = *(int *)(param_1 + 0x89d4);
    FUN_ram_400002fa();
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    if (param_3 != 0) {
      uVar2 = 0x89d0U - iVar1;
      if (param_3 < 0x89d0U - iVar1) {
        uVar2 = param_3;
      }
      FUN_ram_4000305c(param_2,param_1 + iVar1,uVar2);
      if (uVar2 < param_3) {
        FUN_ram_4000305c(param_2 + uVar2,param_1,param_3 - uVar2);
      }
      uVar2 = iVar1 + param_3;
      if (0x89cf < uVar2) {
        uVar2 = uVar2 - 0x89d0;
      }
      FUN_ram_400002f4();
      *(uint *)(param_1 + 0x89d4) = uVar2;
      *(uint *)(param_1 + 0x89d8) = *(int *)(param_1 + 0x89d8) - param_3;
      FUN_ram_400002fa();
      return param_3;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002aeb8.
 * REA evidence: ev_54df5f7dc4aca56ebbc76f79b618c39b299ef3c27b04e3497f94b8b7968e2980
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002aeb8(int param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if ((*(byte *)(param_1 + 0xe) & 0xfb) == 1) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
  if (*(byte *)(param_1 + 0xe) == 3) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    return;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}


/* NanoCore 1.10, address 0x4002aeea.
 * REA evidence: ev_9ec4f1a4b2f13457a14ce99f440edcb3f090639cb58588dc57d083ece608966e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002aeea(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_ram_30079720 == '\x02') {
    return;
  }
  FUN_ram_400002f4();
  if (DAT_ram_30079720 == '\0') {
    DAT_ram_30079720 = 1;
    FUN_ram_400002fa();
    uVar3 = 0;
    do {
      uVar4 = (uVar3 & 0xff) << 8;
      iVar1 = 8;
      do {
        uVar2 = uVar4 << 1;
        if ((short)uVar4 < 0) {
          uVar2 = uVar2 ^ 0x1021;
        }
        uVar4 = uVar2 & 0xffff;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      *(short *)(uVar3 * 2 + 0x30079724) = (short)uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x100);
    FUN_ram_400002f4();
    DAT_ram_30079720 = 2;
    FUN_ram_400002fa();
    return;
  }
  FUN_ram_400002fa();
  do {
  } while (DAT_ram_30079720 != '\x02');
  return;
}


/* NanoCore 1.10, address 0x4002af92.
 * REA evidence: ev_3db5739bcc9b4947598780fefe20bf3a9566279caac01f58a1f4d73e467bf871
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002af92(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_ram_4002aeea();
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
  }
  return;
}


/* NanoCore 1.10, address 0x4002afd6.
 * REA evidence: ev_68c43db3abc2e0075cc9356dfa5f79c3cfdfd6b2a561304211f3b9ab63ecbfe1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002afd6(undefined1 *param_1,uint param_2,undefined1 param_3,undefined4 param_4,
                     int param_5,int param_6)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (((param_1 == (undefined1 *)0x0) || (uVar2 = param_6 + 8, param_2 < uVar2)) ||
     ((param_6 != 0 && (param_5 == 0)))) {
    uVar2 = 0;
  }
  else {
    FUN_ram_4002aeea();
    *param_1 = 0xa5;
    param_1[4] = (char)param_4;
    param_1[1] = param_3;
    param_1[2] = (char)param_6;
    param_1[3] = (char)((uint)param_6 >> 8);
    param_1[5] = (char)((uint)param_4 >> 8);
    if (param_6 != 0) {
      FUN_ram_4000305c(param_1 + 6,param_5,param_6);
    }
    uVar1 = FUN_ram_4002af92(0xffff,param_1,param_6 + 6);
    param_1[param_6 + 6] = (char)uVar1;
    param_1[param_6 + 7] = (char)((ushort)uVar1 >> 8);
  }
  return uVar2;
}


