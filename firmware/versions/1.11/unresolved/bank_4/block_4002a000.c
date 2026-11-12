/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4002a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002a03a.
 * REA evidence: ev_0767ffa0d491ed102aa3de7992c190d8030a25cd406fa1310be4d3c89d4e1c1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a03a(int param_1)

{
  char cVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = _DAT_ram_3007955c;
  if (_DAT_ram_30079554 != 0) {
    if (_DAT_ram_3007955c != 0) {
      uVar6 = FUN_ram_40004352(2);
      iVar4 = FUN_ram_400049c6(iVar4,uVar6);
      if (iVar4 != 0) {
        return;
      }
    }
    if (param_1 == 0) {
      iVar4 = FUN_ram_400299f4();
      if (iVar4 == 0) {
        FUN_ram_40036ca4(5);
      }
    }
    else {
      FUN_ram_40036e04(5);
    }
    cVar3 = '\b';
    while (uVar5 = FUN_ram_400045a8(_DAT_ram_30079554,0,0x3007a690,0x400), uVar5 != 0) {
      _DAT_ram_300794d4 = _DAT_ram_300794d4 + uVar5;
      if (DAT_ram_30079568 == '\0') {
        FUN_ram_4002b574(0x30078094,0x3007a690,uVar5);
      }
      else {
        uVar9 = 0;
        do {
          uVar8 = (uint)_DAT_ram_3007986c;
          cVar1 = *(char *)(uVar9 + 0x3007a690);
          if (uVar8 == 0) {
            if (cVar1 == -0x56) {
              _DAT_ram_3007986c = 1;
LAB_ram_4002a162:
              DAT_ram_3007956c = 0xaa;
            }
          }
          else if (uVar8 == 1) {
            if (cVar1 == 'U') {
              _DAT_ram_3007986c = 2;
              DAT_ram_3007956d = 0x55;
            }
            else {
              if (cVar1 == -0x56) goto LAB_ram_4002a162;
LAB_ram_4002a1a2:
              FUN_ram_400298dc();
            }
          }
          else {
            if (0x2ff < uVar8) goto LAB_ram_4002a1a2;
            uVar7 = uVar8 + 1 & 0xffff;
            (&DAT_ram_3007956c)[uVar8] = cVar1;
            _DAT_ram_3007986c = (ushort)((uVar8 + 1) * 0x10000 >> 0x10);
            if (uVar7 == 4) {
              _DAT_ram_3007986e = _DAT_ram_3007956e + 6;
              if (0x2fa < _DAT_ram_3007956e) goto LAB_ram_4002a1a2;
            }
            else if ((_DAT_ram_3007986e != 0) && (uVar7 == _DAT_ram_3007986e)) {
              uVar8 = FUN_ram_4002b46c(0,&DAT_ram_3007956c,uVar7 - 2);
              uVar2 = _DAT_ram_3007986e;
              uVar7 = (uint)_DAT_ram_3007986e;
              if (uVar8 == *(ushort *)(uVar7 + 0x3007956a)) {
                if ((uVar7 - 1 & 0xffff) < 0x300) {
                  uVar6 = FUN_ram_400002f4();
                  FUN_ram_4000304c(0x30079870,&DAT_ram_3007956c,uVar7);
                  _DAT_ram_30079b74 = uVar2;
                  _DAT_ram_30079b78 = _DAT_ram_30079b78 + 1;
                  FUN_ram_400002fa(uVar6);
                }
              }
              else {
                _DAT_ram_3007952c = _DAT_ram_3007952c + 1;
              }
              goto LAB_ram_4002a1a2;
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar5 != uVar9);
      }
      if ((uVar5 < 0x400) || (cVar3 = cVar3 + -1, cVar3 == '\0')) break;
    }
    if (_DAT_ram_3007955c != 0) {
      FUN_ram_40004ab8();
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002a268.
 * REA evidence: ev_b51f06c1ef53f6ccf13524b9d570a4f6b426b403d05f37c0b767bd72c15e9fb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002a268(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x4002a26c.
 * REA evidence: ev_0924238b92d25c1739b8e878a2e48b37028d2571661fc30b1b77949146d89298
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a26c(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int *piVar5;
  char cVar6;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    cVar6 = '\x02';
  }
  else {
    cVar6 = '\x01';
    if (cVar1 != '\x05') {
      if (cVar1 == '\x02') {
        _DAT_ram_300794e0 = _DAT_ram_300794e0 + 1;
        FUN_ram_4002996c(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        uVar4 = *(ushort *)(param_1 + 2);
        if (uVar4 == 0) {
          return;
        }
        if (0x20 < uVar4) {
          uVar4 = 0x20;
        }
        FUN_ram_40010b9e(s_uart_rx_ram_40096d70,*(undefined4 *)(param_1 + 8),uVar4 & 0xff);
        return;
      }
      if (cVar1 == '\x03') {
        _DAT_ram_300794e4 = _DAT_ram_300794e4 + 1;
        iVar2 = FUN_ram_40029e6e(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        if (iVar2 != 0) {
          _DAT_ram_300794e0 = _DAT_ram_300794e0 + 1;
          return;
        }
        iVar2 = FUN_ram_4002cd0e(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_ram_4002a268(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        if (iVar2 != 0) {
          return;
        }
        uVar3 = FUN_ram_400002f4();
        _DAT_ram_3006f69c = *(ushort *)(param_1 + 2);
        if (0x300 < _DAT_ram_3006f69c) {
          _DAT_ram_3006f69c = 0x300;
        }
        if (_DAT_ram_3006f69c != 0) {
          FUN_ram_4000304c(0x3006f39c,*(undefined4 *)(param_1 + 8),_DAT_ram_3006f69c);
        }
        piVar5 = (int *)&DAT_ram_3006f6a0;
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        _DAT_ram_300794e8 = _DAT_ram_300794e8 + 1;
        uVar3 = FUN_ram_400002f4();
        _DAT_ram_30079b74 = *(ushort *)(param_1 + 2);
        if (0x300 < _DAT_ram_30079b74) {
          _DAT_ram_30079b74 = 0x300;
        }
        if (_DAT_ram_30079b74 != 0) {
          FUN_ram_4000304c(0x30079870,*(undefined4 *)(param_1 + 8),_DAT_ram_30079b74);
        }
        piVar5 = (int *)&DAT_ram_30079b78;
      }
      *piVar5 = *piVar5 + 1;
      FUN_ram_400002fa(uVar3);
      return;
    }
  }
  _DAT_ram_300794dc = _DAT_ram_300794dc + 1;
  if ((_DAT_ram_300790c4 == 0) && (*(short *)(param_1 + 2) != 0)) {
    if (DAT_ram_30049e41 != cVar6) {
      FUN_ram_4002990e();
      DAT_ram_30049e41 = cVar6;
    }
    _DAT_ram_3006f390 = 1;
    _DAT_ram_3007808c = FUN_ram_400042ea();
    iVar2 = FUN_ram_4002b22e(0x3006f6b0,*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
    if (iVar2 == 0) {
      _DAT_ram_30079524 = _DAT_ram_30079524 + 1;
    }
    else {
      _DAT_ram_30079528 = _DAT_ram_30079528 + 1;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002a5c6.
 * REA evidence: ev_bcf20cbf29b44ef8b9374d404ef7f99bc58e8e44be372b52eeaa3edf2fcdcd49
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002a5c6(int param_1)

{
  int iVar1;
  int iStack_14;
  
  if (param_1 - 300U < 0x2dc595) {
    iStack_14 = param_1;
    if (_DAT_ram_30079554 != 0) {
LAB_ram_4002a5fc:
      if (_DAT_ram_30079564 != 0) {
        FUN_ram_400049c6(_DAT_ram_30079564,0xffffffff);
      }
      if (_DAT_ram_3007955c != 0) {
        FUN_ram_400049c6(_DAT_ram_3007955c,0xffffffff);
      }
      FUN_ram_400298dc();
      FUN_ram_4002b53e(0x30078094,FUN_ram_4002a26c,0);
      _DAT_ram_30079b70 = _DAT_ram_30079b78;
      iVar1 = FUN_ram_400045f4(_DAT_ram_30079554,0x87,&iStack_14);
      if (iVar1 == 0) {
        DAT_ram_30049e44 = iStack_14;
      }
      if (_DAT_ram_3007955c != 0) {
        FUN_ram_40004ab8();
      }
      if (_DAT_ram_30079564 != 0) {
        FUN_ram_40004ab8();
      }
      return -(uint)(iVar1 != 0);
    }
    if (_DAT_ram_3006f398 == 0) {
      iVar1 = nc_radio_uart5_init();
      if (iVar1 == 0) {
        FUN_ram_400065c6(10);
      }
      if (_DAT_ram_30079554 != 0) goto LAB_ram_4002a5fc;
    }
  }
  return -1;
}


/* NanoCore 1.11, address 0x4002a6a0.
 * REA evidence: ev_22cb539583b5af01d49af916140f6cde00d6e0d992472749fbffa7db8dcaa35a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002a6a0(void)

{
  return _DAT_ram_30079554 != 0;
}


/* NanoCore 1.11, address 0x4002a6ae.
 * REA evidence: ev_2c04e479d93dc45005cf35ddf24a5f32a1fbe6fe25c1dc9578105e36da9a359e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002a6ae(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_3007808c;
  if (_DAT_ram_300790c4 == 0) {
    uVar2 = 0;
    if ((_DAT_ram_3006f390 != 0) && (_DAT_ram_3007808c != 0)) {
      iVar3 = FUN_ram_400042ea();
      if ((_DAT_ram_3006f394 == 0) || ((uint)(iVar3 - iVar1) <= _DAT_ram_3006f394)) {
        uVar2 = 1;
      }
      else {
        uVar4 = FUN_ram_400002f4();
        FUN_ram_4002b21c(0x3006f6b0);
        FUN_ram_400002fa(uVar4);
        _DAT_ram_3006f390 = 0;
        _DAT_ram_300794cc = 0;
        _DAT_ram_3006f6ac = 0;
        _DAT_ram_30078090 = 0;
        _DAT_ram_30078092 = 0;
        _DAT_ram_3007808c = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4002a744.
 * REA evidence: ev_df4a473bf19ef3b81773c3fc104fff1239184c71a4e4f5a11b92ee3d51dc3131
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a744(int param_1)

{
  _DAT_ram_300790c4 = (uint)(param_1 != 0);
  if ((param_1 != 0) != 0) {
    _DAT_ram_300794cc = 0;
    _DAT_ram_3006f6ac = 0;
    _DAT_ram_30078090 = 0;
    _DAT_ram_30078092 = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4002a778.
 * REA evidence: ev_d4781cc91f2490d56a0c854dd116a706dbe81018c6856604a948df0cda4585c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002a778(int param_1,uint param_2,undefined1 *param_3)

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
  if (DAT_ram_30049e41 != '\x01') {
    iVar8 = 2;
  }
  uVar12 = iVar8 * 2;
  uVar9 = param_2 * uVar12;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)iVar8;
  }
  if (0x100 < param_2) {
LAB_ram_4002a7be:
    FUN_ram_40029a3c(param_1,uVar9);
    return uVar9;
  }
  if (_DAT_ram_300794cc == 0) {
    uVar3 = FUN_ram_400298ee();
    FUN_ram_400298c0();
    if (iVar8 == 1) {
      uVar7 = 0x1b90;
    }
    else {
      uVar7 = 0x3720;
    }
    if (uVar3 < uVar7) goto LAB_ram_4002a7be;
    _DAT_ram_300794cc = 1;
    _DAT_ram_3006f6a8 = 0;
    _DAT_ram_3006f6ac = 0x40;
  }
  uVar3 = FUN_ram_400298ee();
  FUN_ram_400298c0();
  if (param_2 < 8) {
LAB_ram_4002a852:
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
      if (uVar3 < uVar7) goto LAB_ram_4002a852;
      iVar10 = -1;
      uVar3 = uVar12;
    }
    else {
      uVar3 = iVar8 * -2;
      iVar10 = 1;
    }
    uVar3 = uVar3 + uVar9;
    bVar1 = false;
    iVar4 = 0x300790c8;
  }
  uVar7 = FUN_ram_4002b2e2(0x3006f6b0,iVar4,uVar3);
  iVar4 = param_1;
  if (iVar10 == -1) {
    if (uVar7 < uVar9) {
      if (bVar1) goto LAB_ram_4002a90c;
LAB_ram_4002a8d2:
      iVar4 = 0x300790c8;
      goto LAB_ram_4002a8da;
    }
    iVar10 = (uVar7 < uVar3) - 1;
    if (!bVar1) goto LAB_ram_4002a8d2;
    if (uVar7 < uVar3) goto LAB_ram_4002aa40;
LAB_ram_4002a8ae:
    iVar10 = 1;
    _DAT_ram_30079550 = _DAT_ram_30079550 + 1;
  }
  else {
    if (!bVar1) goto LAB_ram_4002a8d2;
LAB_ram_4002a8da:
    if (iVar10 != 1) {
      if (uVar7 < uVar9) goto LAB_ram_4002a90c;
      if (iVar10 == 0) {
        if (!bVar1) {
          FUN_ram_4000304c(param_1,iVar4,uVar9);
        }
        goto LAB_ram_4002aa40;
      }
      goto LAB_ram_4002a8ae;
    }
    if (uVar7 < uVar9 + iVar8 * -2) {
LAB_ram_4002a90c:
      if (iVar8 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = uVar7 / uVar12;
      }
      _DAT_ram_3007953c = _DAT_ram_3007953c + 1;
      uVar11 = uVar12 * uVar3;
      if ((uVar11 != 0) && (!bVar1)) {
        FUN_ram_4000304c(param_1,iVar4,uVar11);
      }
      if (uVar11 < uVar9) {
        memset(param_1 + uVar11,0,uVar9 - uVar11);
      }
      if (uVar12 <= uVar7) {
        FUN_ram_40029c96(param_1,uVar3,iVar8);
        iVar10 = (uVar3 - 1) * iVar8;
        _DAT_ram_30078090 = *(short *)(param_1 + iVar10 * 2);
        _DAT_ram_30078092 = _DAT_ram_30078090;
        if (iVar8 == 2) {
          _DAT_ram_30078092 = *(short *)(param_1 + iVar10 * 2 + 2);
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
        else if (_DAT_ram_30078090 == 0 && _DAT_ram_30078092 == 0) {
          memset(param_1 + iVar4 * 2,0,uVar12 * iVar10);
        }
        else {
          iVar10 = iVar10 + -1;
          iVar6 = iVar10 * _DAT_ram_30078092;
          puVar2 = (undefined2 *)(param_1 + uVar11);
          iVar4 = iVar10;
          do {
            if (iVar10 == 0) {
              uVar5 = 0xffff;
            }
            else {
              uVar5 = (undefined2)((_DAT_ram_30078090 * iVar4) / iVar10);
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
            iVar6 = iVar6 - _DAT_ram_30078092;
          } while (iVar4 != -1);
        }
      }
      if (uVar7 != 0) {
        _DAT_ram_3006f6a8 = 0;
        _DAT_ram_3006f6ac = 0x40;
        _DAT_ram_30078090 = 0;
        _DAT_ram_30078092 = 0;
        return uVar9;
      }
      _DAT_ram_3006f6a8 = 0;
      _DAT_ram_3006f6ac = 0x40;
      _DAT_ram_30078090 = 0;
      _DAT_ram_30078092 = 0;
      _DAT_ram_300794cc = 0;
      return uVar9;
    }
    iVar10 = -1;
    _DAT_ram_3007954c = _DAT_ram_3007954c + 1;
  }
  FUN_ram_40029a74(param_1,param_2,iVar4,param_2 + iVar10,iVar8);
LAB_ram_4002aa40:
  iVar10 = (param_2 - 1) * iVar8;
  FUN_ram_40029c96(param_1,param_2,iVar8);
  _DAT_ram_30078090 = *(undefined2 *)(param_1 + iVar10 * 2);
  _DAT_ram_30078092 = _DAT_ram_30078090;
  if (iVar8 == 2) {
    _DAT_ram_30078092 = *(undefined2 *)(iVar10 * 2 + param_1 + 2);
  }
  return uVar9;
}


/* NanoCore 1.11, address 0x4002aa7e.
 * REA evidence: ev_18ebc4820c552bef74c095f68257b161632fd0cb73e0fb0f2604a302ea797270
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002aa7e(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_ram_400002f4();
  bVar2 = false;
  if (_DAT_ram_30079e84 < param_2) {
    param_2 = _DAT_ram_30079e84;
  }
  uVar4 = _DAT_ram_3007a688;
  for (uVar1 = 0; param_2 != uVar1; uVar1 = uVar1 + 1) {
    uVar3 = uVar4 + 1;
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(uVar4 + 0x30079e88);
    if (0x7ff < uVar3) {
      uVar3 = 0;
    }
    bVar2 = true;
    uVar4 = uVar3;
  }
  if (bVar2) {
    _DAT_ram_3007a688 = uVar4;
  }
  _DAT_ram_30079e84 = _DAT_ram_30079e84 - uVar1;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.11, address 0x4002ab7c.
 * REA evidence: ev_ac425f2a51c9bb74d6159e08f11c4edf7929cf89ce6b3c1d6b58d8c68d9378ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002ab7c(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && ((_DAT_ram_3006f398 != 0 || (iVar5 = nc_radio_uart5_init(), iVar5 == 0)))))) {
    iVar5 = _DAT_ram_3006f6a0;
    nc_radio_send_control_if_ready(param_1,param_2);
    iVar1 = FUN_ram_400042ea();
    if (param_5 == 0) {
      param_5 = 1;
    }
    iVar2 = FUN_ram_40004352(param_5);
    while (iVar3 = FUN_ram_400042ea(), 0 < (iVar1 + iVar2) - iVar3) {
      FUN_ram_4002a03a(0);
      if (_DAT_ram_3006f6a0 != iVar5) {
        uVar4 = FUN_ram_400002f4();
        if (_DAT_ram_3006f69c < param_4) {
          param_4 = (uint)_DAT_ram_3006f69c;
        }
        if (param_4 != 0) {
          FUN_ram_4000304c(param_3,0x3006f39c,param_4);
        }
        FUN_ram_400002fa(uVar4);
        return param_4;
      }
      FUN_ram_400065c6(2);
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002ac40.
 * REA evidence: ev_200f2bcb23617373b0574689c785db61ae33b69b7390f67f88b5e205144fffee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ac40(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (_DAT_ram_30079554 == 0) {
    if (_DAT_ram_3006f398 != 0) {
      return;
    }
    iVar4 = nc_radio_uart5_init();
    if (iVar4 == 0) {
      FUN_ram_400065c6(10);
    }
    if (_DAT_ram_30079554 == 0) {
      return;
    }
  }
  uVar1 = param_2;
  if (0x300 < param_2) {
    uVar1 = 0x300;
  }
  if (DAT_ram_30079568 != '\0') {
    if (((((param_1 == (char *)0x0) || (param_2 < 0xb)) ||
         ((*param_1 != -0x56 ||
          (((param_1[1] != 'U' || (*(ushort *)(param_1 + 2) < 5)) ||
           (uVar2 = (uint)(ushort)(*(ushort *)(param_1 + 2) + 6), uVar1 < uVar2)))))) ||
        ((0x300 < uVar2 || (param_1[4] != '\x01')))) ||
       ((uVar5 = FUN_ram_4002b46c(0,param_1,uVar2 - 2),
        uVar5 != CONCAT11(param_1[uVar2 - 1],param_1[uVar2 - 2]) ||
        (iVar4 = FUN_ram_400298a2(param_1 + 5), 0x2dc594 < iVar4 - 300U)))) {
      iVar4 = 0;
    }
    _DAT_ram_30079510 = nc_radio_uart_write(param_1,uVar1);
    _DAT_ram_300794f0 = _DAT_ram_300794f0 + 1;
    _DAT_ram_300794f4 = _DAT_ram_300794f4 + 1;
    _DAT_ram_30079514 = 0xffffffff;
    if (uVar1 == _DAT_ram_30079510) {
      if ((iVar4 != 0) && (DAT_ram_30049e44 != iVar4)) {
        _DAT_ram_3007950c = uVar1;
        FUN_ram_400065c6(2);
        FUN_ram_4002a5c6(iVar4);
        return;
      }
    }
    else {
      _DAT_ram_300794fc = _DAT_ram_300794fc + 1;
    }
    _DAT_ram_3007950c = uVar1;
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
    uVar6 = (uint)DAT_ram_30049e48;
    DAT_ram_30049e48 = DAT_ram_30049e48 + 1;
    iVar3 = FUN_ram_4002b4b0(0x30079b7c,0x308,4,uVar6,param_1 + uVar2,uVar5 & 0xffff);
    if (iVar3 == 0) break;
    _DAT_ram_30079510 = nc_radio_uart_write(0x30079b7c,iVar3);
    if (iVar4 == 0) {
      _DAT_ram_300794f0 = _DAT_ram_300794f0 + 1;
    }
    _DAT_ram_300794f4 = _DAT_ram_300794f4 + 1;
    if (iVar3 != _DAT_ram_30079510) {
      _DAT_ram_300794fc = _DAT_ram_300794fc + 1;
    }
    _DAT_ram_3007950c = iVar3;
    _DAT_ram_30079514 = uVar6;
    if (iVar4 == 0) {
      if ((param_1 == (char *)0x0) || (param_2 == 0)) {
        _DAT_ram_300794f8 = _DAT_ram_300794f8 + 1;
        _DAT_ram_30079500 = 0;
        _DAT_ram_30079504 = 0;
        _DAT_ram_30079508 = 0;
      }
      else {
        _DAT_ram_30079500 = 0xffffffff;
        _DAT_ram_30079504 = 0;
        _DAT_ram_30079508 = 0;
        if ((((6 < param_2) && (*param_1 == -0x56)) && (param_1[1] == 'U')) &&
           ((_DAT_ram_30079500 = (uint)(byte)param_1[4], param_1[4] == '\x02' && (0xc < param_2))))
        {
          _DAT_ram_30079504 = FUN_ram_400298a2(param_1 + 5);
          _DAT_ram_30079508 = FUN_ram_400298a2(param_1 + 9);
        }
      }
    }
    uVar2 = uVar2 + uVar5;
    iVar4 = iVar4 + 1;
    if (uVar2 < uVar1) {
      FUN_ram_400065c6(0xf);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002aeee.
 * REA evidence: ev_c3e8cd875e16faece3648f892c9ca30b774d3fb9c35d7e81df86ede7be971f76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002aeee(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_30079568 = param_1 != 0;
  FUN_ram_400298dc();
  _DAT_ram_30079b70 = _DAT_ram_30079b78;
  FUN_ram_400002fa(uVar1);
  if ((_DAT_ram_30079554 != 0) && ((bool)DAT_ram_30079558 != (param_1 != 0))) {
    if (_DAT_ram_30079564 != 0) {
      FUN_ram_400049c6(_DAT_ram_30079564,0xffffffff);
    }
    if (_DAT_ram_3007955c != 0) {
      FUN_ram_400049c6(_DAT_ram_3007955c,0xffffffff);
    }
    FUN_ram_400045fe(_DAT_ram_30079554,0);
    FUN_ram_40036bfc(5);
    FUN_ram_40004564(_DAT_ram_30079554);
    iVar3 = _DAT_ram_30079554;
    if (param_1 == 0) {
      iVar3 = FUN_ram_40029c36(_DAT_ram_30079554);
      if (iVar3 == 0) {
        DAT_ram_30079558 = '\0';
      }
    }
    else {
      iVar2 = FUN_ram_400044e8(_DAT_ram_30079554,0x103);
      if ((iVar2 == 0) || (iVar2 = FUN_ram_400044e8(iVar3,3), iVar2 == 0)) {
        FUN_ram_400045fe(iVar3,&LAB_ram_40029c78);
        DAT_ram_30079558 = '\x01';
      }
    }
    if (_DAT_ram_3007955c != 0) {
      FUN_ram_40004ab8();
    }
    if (_DAT_ram_30079564 != 0) {
      FUN_ram_40004ab8();
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002afe8.
 * REA evidence: ev_0a48a539f09a6e4ba106bcc32e7ed24ebb00da1da0db3a046d1a55a10598f01b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002afe8(void)

{
  return DAT_ram_30079568 != '\0';
}


/* NanoCore 1.11, address 0x4002aff6.
 * REA evidence: ev_394c0a6acf0d882d355e2879404947d7136f8151dce0af76c25a4322cb308fe2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002aff6(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  if ((_DAT_ram_3006f398 != 0) || (iVar7 = nc_radio_uart5_init(), iVar7 == 0)) {
    cVar1 = DAT_ram_30079568;
    if ((DAT_ram_30079568 != '\0') && ((param_1 == 0 || (param_2 == 0)))) {
      FUN_ram_4002a03a(1);
      iVar7 = FUN_ram_40029d10(param_3,param_4);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
    iVar7 = _DAT_ram_30079b78;
    if ((param_1 == 0) || (param_2 == 0)) {
      iVar2 = FUN_ram_400042ea();
    }
    else {
      FUN_ram_4002ac40(param_1,param_2);
      iVar2 = FUN_ram_400042ea();
      iVar3 = FUN_ram_40004352(3);
      iVar2 = iVar2 + iVar3;
    }
    iVar3 = FUN_ram_400042ea();
    if (param_5 == 0) {
      param_5 = 1;
    }
    iVar4 = FUN_ram_40004352(param_5);
    while (iVar5 = FUN_ram_400042ea(), 0 < (iVar3 + iVar4) - iVar5) {
      if ((cVar1 == '\0') || (iVar5 = FUN_ram_400042ea(), iVar5 - iVar2 < 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      FUN_ram_4002a03a(uVar6);
      if (_DAT_ram_30079b78 != iVar7) {
        iVar7 = FUN_ram_40029d10(param_3,param_4);
        return iVar7;
      }
      FUN_ram_400065c6(2);
    }
  }
  return 0;
}


