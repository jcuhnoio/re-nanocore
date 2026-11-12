/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4000f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4000f1e6.
 * REA evidence: ev_3abc7c18f88522d84dbb7fe5fbebbf6087e3a4e8635d277185ac3a2c7d90d804
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f1e6(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_ram_4000305c(&DAT_ram_3005ac20,param_1,8);
  uVar2 = (uint)_DAT_ram_3005ac26;
  if ((uVar2 < 0x1001) || (DAT_ram_3005ac20 < '\0')) {
    _DAT_ram_3005ac40 = 0x3005ac60;
    DAT_ram_3005ac4c = 0;
    _DAT_ram_3005ac44 = uVar2;
    _DAT_ram_3005ac48 = uVar2;
    if ((uVar2 != 0) && (-1 < DAT_ram_3005ac20)) {
      FUN_ram_40011a18(0);
      return;
    }
    iVar1 = FUN_ram_4000eac2();
    if (iVar1 != 0) {
      _DAT_ram_3005ac44 = (uint)_DAT_ram_3005ac26;
      if (_DAT_ram_3005ac48 < _DAT_ram_3005ac26) {
        _DAT_ram_3005ac44 = _DAT_ram_3005ac48;
      }
      if (0x1000 < _DAT_ram_3005ac44) {
        FUN_ram_40031b48(&DAT_ram_40092950);
        FUN_ram_40031b5e(s_Request_buffer_too_small_ram_40092a50);
        FUN_ram_40031b48(&DAT_ram_40092978);
        return;
      }
      FUN_ram_400115b6(0x80,_DAT_ram_3005ac40);
      if ((_DAT_ram_3005ac48 < _DAT_ram_3005ac26) && ((_DAT_ram_3005ac48 & 0x3f) == 0)) {
        DAT_ram_3005ac4c = 1;
      }
      return;
    }
  }
  else {
    FUN_ram_40031b48(&DAT_ram_40092950);
    FUN_ram_40031b5e(s_Request_buffer_too_small_ram_40092a50);
    FUN_ram_40031b48(&DAT_ram_40092978);
  }
  FUN_ram_40011298(0x80);
  return;
}


/* NanoCore 1.10, address 0x4000f2f8.
 * REA evidence: ev_b56fdc5a7abe6f009baa23db7fc603d2496e744ba2b811dbc11da0ec7d6d0b92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f2f8(undefined4 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = FUN_ram_4000f3ba;
  if (param_2 < 0x200) {
    param_1[1] = FUN_ram_4000f342;
  }
  else {
    param_1[1] = 0;
  }
  param_1[3] = &DAT_ram_4000f2dc;
  param_1[2] = 0;
  _DAT_ram_3005bd66 = (short)param_2;
  _DAT_ram_3005bd60 = param_3;
  DAT_ram_3005bd64 = param_4;
  return;
}


/* NanoCore 1.10, address 0x4000f33c.
 * REA evidence: ev_fe60e22bf49ede53c1276b2d4208a11af7b595636d6c0dd45f1e24e299b55098
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f33c(void)

{
  return;
}


/* NanoCore 1.10, address 0x4000f33e.
 * REA evidence: ev_f230473962c2f0ab2fe5954818eacde79684bc25316450353fe95155f273082c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000f33e(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x4000f342.
 * REA evidence: ev_e6f865e28526ba04eff2a40b737c39365f98ba53cc74abfd4073a21bbf579307
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000f342(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 auStack_24 [4];
  
  auStack_24[0] = 0;
  uVar1 = *(undefined1 *)(param_1 + 4);
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_ram_4000305c(auStack_24,*param_2,*param_3);
      FUN_ram_4000f33c(uVar1,auStack_24[0]);
    }
    else {
      if (3 < (byte)(*(char *)(param_1 + 1) + 0x7fU)) {
        return 0;
      }
      auStack_24[0] = FUN_ram_4000f33e(uVar1);
      FUN_ram_4000305c(*param_2,auStack_24,3);
      *param_3 = 3;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4000f3b8.
 * REA evidence: ev_61d69d75ac8946318b8607c063f42a7bb7bc663255798e806c3301055f6830da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f3b8(void)

{
  return;
}


/* NanoCore 1.10, address 0x4000f3ba.
 * REA evidence: ev_83235f0a8ab52f0748d3aec8e3cfe1122f9305f2f18bf609e0fba89d0b8a539e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000f56e) */
/* WARNING: Removing unreachable block (ram,0x4000f4a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000f3ba(char *param_1,int *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char *pcVar7;
  char cVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  ushort uVar13;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 0;
  cVar1 = param_1[3];
  cVar2 = param_1[5];
  cVar8 = '\0';
  pcVar7 = _DAT_ram_3005bd60;
  do {
    if (DAT_ram_3005bd64 == cVar8) {
LAB_ram_4000f418:
      FUN_ram_40031b48(&DAT_ram_40092950);
      FUN_ram_40031b48(s_Do_not_find_subtype_for_0x_02x_ram_40092a6c,cVar2);
      FUN_ram_40031b48(&DAT_ram_40092978);
      return 0xffffffff;
    }
    if (pcVar7[1] == cVar2) {
      cVar8 = *pcVar7;
      cVar3 = pcVar7[2];
      if (cVar8 != '\x01') {
        if (cVar8 == '\x06') {
          uVar13 = *(ushort *)(param_1 + 2) & 0xff;
          if (cVar1 == '\x01') {
            cVar1 = param_1[1];
            if (_DAT_ram_3005bd66 < 0x200) {
              if (cVar1 == '\x01') {
LAB_ram_4000f500:
                FUN_ram_4001058e(cVar3,uVar13,*(char *)*param_2 != '\0');
                return 0;
              }
              if (cVar1 != -0x7f) {
                return 0xffffffff;
              }
            }
            else {
              if (cVar1 != '\x01') {
                return 0xffffffff;
              }
              if (-1 < *param_1) goto LAB_ram_4000f500;
            }
            uVar5 = FUN_ram_400105b0(cVar3,uVar13);
            *(undefined1 *)*param_2 = uVar5;
            *param_3 = 1;
            return 0;
          }
          if (cVar1 != '\x02') {
            return 0xffffffff;
          }
          bVar4 = param_1[1];
          if (_DAT_ram_3005bd66 < 0x200) {
            if (bVar4 != 0x82) {
              if (bVar4 < 0x83) {
                if (bVar4 == 1) {
                  FUN_ram_4000305c(&uStack_24,*param_2,*param_3);
                  uVar10 = (uint)uStack_24 & 0xffff;
                  if (0 < (short)uStack_24) {
                    uVar10 = 0;
                  }
                  if ((short)uVar10 < -0x2500) {
                    uVar10 = 0xffffdb00;
                  }
                  uVar10 = (((int)((uVar10 + 0x2500) * 0x10000) >> 0x10) * 0xff) / 0x2500;
                  goto LAB_ram_4000f572;
                }
                if (bVar4 != 0x81) {
                  return 0xffffffff;
                }
                iVar12 = FUN_ram_40010566(cVar3,uVar13);
                iVar12 = (iVar12 * 0x2500) / 0xff + -0x2500;
                puVar9 = (undefined1 *)*param_2;
                uVar5 = (undefined1)((uint)iVar12 >> 8);
                *puVar9 = (char)iVar12;
LAB_ram_4000f4bc:
                puVar9[1] = uVar5;
              }
              else {
                if (bVar4 != 0x83) {
                  if (bVar4 != 0x84) {
                    return 0xffffffff;
                  }
                  uVar5 = 1;
                  *(undefined1 *)*param_2 = 0;
                  puVar9 = (undefined1 *)*param_2;
                  goto LAB_ram_4000f4bc;
                }
                *(undefined1 *)*param_2 = 0;
                *(undefined1 *)(*param_2 + 1) = 0;
              }
              iVar12 = 2;
              goto LAB_ram_4000f5a0;
            }
            uStack_24._1_1_ = 0xdb;
            *(undefined1 *)*param_2 = 0;
            puVar9 = (undefined1 *)*param_2;
          }
          else {
            if (bVar4 != 1) {
              if (bVar4 != 2) {
                return 0xffffffff;
              }
              if (*param_1 < '\0') {
                puVar11 = (undefined2 *)*param_2;
                *puVar11 = 1;
                puVar11[1] = 0;
                puVar11[2] = 100;
                puVar11[3] = 1;
                *param_3 = 8;
                return 0;
              }
              return 0;
            }
            if (-1 < *param_1) {
              FUN_ram_4000305c(&uStack_24,*param_2,*param_3);
              uVar10 = (uint)uStack_24 & 0xffff;
LAB_ram_4000f572:
              FUN_ram_40010544(cVar3,uVar13,uVar10);
              return 0;
            }
            uVar6 = FUN_ram_40010566(cVar3,uVar13);
            puVar9 = (undefined1 *)*param_2;
            *puVar9 = (char)uVar6;
            uStack_24._1_1_ = (undefined1)((ushort)uVar6 >> 8);
          }
          puVar9[1] = uStack_24._1_1_;
          *param_3 = 2;
        }
        else {
          if (cVar8 != '\n') {
            return 0;
          }
          if (cVar1 != '\x01') {
            if (cVar1 != '\x02') {
              return 0xffffffff;
            }
            if (*param_1 < '\0') {
              *(undefined1 *)*param_2 = 1;
              *param_3 = 1;
              return 0;
            }
            return 0xffffffff;
          }
          if (param_1[1] != '\x01') {
            if (param_1[1] != '\x02') {
              return 0xffffffff;
            }
            if (*param_1 < '\0') {
              uStack_24 = (ushort *)0x0;
              FUN_ram_4000f3b8(cVar3,&uStack_24);
              iVar12 = (uint)*uStack_24 * 0xc + 2;
              FUN_ram_4000305c(*param_2,uStack_24,iVar12);
              *param_3 = iVar12;
              return 0;
            }
            return 0;
          }
          if (-1 < *param_1) {
            FUN_ram_4000305c(&uStack_28,*param_2,*(undefined2 *)(param_1 + 6));
            FUN_ram_4000f33c(cVar3,uStack_28);
            return 0;
          }
          uStack_28 = FUN_ram_4000f33e(cVar3);
          FUN_ram_4000305c(*param_2,&uStack_28,4);
          iVar12 = 4;
LAB_ram_4000f5a0:
          *param_3 = iVar12;
        }
        return 0;
      }
      goto LAB_ram_4000f418;
    }
    cVar8 = cVar8 + '\x01';
    pcVar7 = pcVar7 + 3;
  } while( true );
}


/* NanoCore 1.10, address 0x4000f6c0.
 * REA evidence: ev_f80ba1779f6cf08c66d7ccb374ef67c324b0bd3015455e31445bf6d11171572c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f6c0(void)

{
  _DAT_ram_3005c420 = 0;
  _DAT_ram_3005c422 = 0;
  DAT_ram_3005c42c = 0;
  return;
}


/* NanoCore 1.10, address 0x4000f6da.
 * REA evidence: ev_974df926f8b77dd89cdffc91cb3dbd98928376dfdc9b2ae2a5e926dd244c5a97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f6da(void)

{
  DAT_ram_3005cb00 = 0;
  _DAT_ram_3005cdf4 = _DAT_ram_3005cdf6;
  DAT_ram_3005ccf2 = 0;
  DAT_ram_3005cb61 = 0;
  FUN_ram_4000f6c0();
  return;
}


/* NanoCore 1.10, address 0x4000f706.
 * REA evidence: ev_672e5c14ed2ccf398a868967f3c3514483af16c536fea0701d648d76f1c88ebf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f706(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3005ca14 = 0;
  _DAT_ram_3005ca18 = 0;
  _DAT_ram_3005ca10 = 0;
  DAT_ram_300466c4 = 0xffffffff;
  _DAT_ram_3005ca0c = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x4000f740.
 * REA evidence: ev_478b4b7afcc1b0423438c153fe4c2e9b6f5f6d6936be904df89efa55ae86956c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f740(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)DAT_ram_3005cb62;
  uVar3 = 1 - uVar4;
  DAT_ram_3005cb62 = (byte)uVar3;
  FUN_ram_40011a18(2,(uVar3 & 0xff) * 0xb8 + 0x3005cb80,0xb8);
  _DAT_ram_3005ca14 = _DAT_ram_3005ca14 + 1;
  if (param_2 == 0) {
    _DAT_ram_3005ca18 = _DAT_ram_3005ca18 + 1;
  }
  else {
    DAT_ram_3005ca0a = 1;
    _DAT_ram_3005ca10 = _DAT_ram_3005ca10 + param_2;
    if (param_2 < DAT_ram_300466c4) {
      DAT_ram_300466c4 = param_2;
    }
    if (_DAT_ram_3005ca0c < param_2) {
      _DAT_ram_3005ca0c = param_2;
    }
    iVar1 = uVar4 * 0xb8 + 0x3005cb80;
    FUN_ram_4000db1e(iVar1,param_2);
    iVar2 = thunk_FUN_ram_40022018();
    if ((iVar2 != 0) && (param_2 >> 1 != 0)) {
      FUN_ram_400002f4();
      uVar3 = 0;
      do {
        *(undefined2 *)(_DAT_ram_3005ca04 * 2 + 0x3005c444) = *(undefined2 *)(iVar1 + uVar3 * 2);
        _DAT_ram_3005ca04 = _DAT_ram_3005ca04 + 1;
        if (0x2df < _DAT_ram_3005ca04) {
          _DAT_ram_3005ca04 = 0;
        }
        if (_DAT_ram_3005ca04 == _DAT_ram_3005c440) {
          _DAT_ram_3005c440 = _DAT_ram_3005c440 + 1;
          if (0x2df < _DAT_ram_3005c440) {
            _DAT_ram_3005c440 = 0;
          }
        }
        uVar3 = uVar3 + 1;
      } while (param_2 >> 1 != uVar3);
      FUN_ram_400002fa();
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4000f870.
 * REA evidence: ev_7be63b1fe2b74c78a68dcbc4a214b81d74750c35b81b37177b23ed5861d42685
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f870(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004dfe();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006472(), iVar1 != 0)) {
    FUN_ram_400065d4(1);
    return;
  }
  thunk_FUN_ram_4003f052(1000);
  return;
}


/* NanoCore 1.10, address 0x4000f896.
 * REA evidence: ev_7b55f87d005ec136fea3da69c8a38b8f583e69beec8ae4ca76cd87dff2f94422
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000f896(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xf0;
  if (uVar1 != 0xd0) {
    if (uVar1 == 0xf0) {
      if ((param_1 & 0xfd) == 0xf1) {
        return 2;
      }
      if (param_1 != 0xf2) {
        return 1;
      }
      return 3;
    }
    if (uVar1 != 0xc0) {
      return 3;
    }
  }
  return 2;
}


/* NanoCore 1.10, address 0x4000f8d6.
 * REA evidence: ev_38279abff429086c7e37c7d1b35c21266b82d531f7bcae29eb5dbb9395a7d019
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000f8d6(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x7d1;
  while( true ) {
    if (DAT_ram_3005ca08 != '\0') {
      return -1;
    }
    iVar2 = FUN_ram_400115b6(0x83,param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    if (1 < iVar2 + 3U) {
      return iVar2;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) break;
    FUN_ram_4000f870();
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x4000f932.
 * REA evidence: ev_8d2a133e9e40c72d16aa8b5c2031aa09ae9b94506b765f8c44c2ad45162155f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f932(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  
  DAT_ram_3005bd6a = 0;
  if (DAT_ram_3005ccf1 != '\0') {
    uVar2 = FUN_ram_4000d68c(0x3005ce00,0xb8);
    iVar3 = thunk_FUN_ram_40022018();
    if ((iVar3 != 0) && (uVar1 = (uVar2 & 0x1ffff) >> 1, uVar1 != 0)) {
      iVar3 = FUN_ram_40022190();
      FUN_ram_400002f4();
      uVar5 = 0;
      do {
        if (_DAT_ram_3005c440 != _DAT_ram_3005ca04) {
          iVar6 = _DAT_ram_3005c440 * 2;
          _DAT_ram_3005c440 = _DAT_ram_3005c440 + 1;
          if (0x2df < _DAT_ram_3005c440) {
            _DAT_ram_3005c440 = 0;
          }
          if (0 < iVar3) {
            iVar6 = (*(short *)(iVar6 + 0x3005c444) * iVar3 >> 0x11) +
                    (int)*(short *)(uVar5 * 2 + 0x3005ce00);
            uVar4 = 0x7fff;
            if ((iVar6 < 0x8000) && (uVar4 = 0x8000, -0x8001 < iVar6)) {
              uVar4 = (undefined2)((uint)(iVar6 * 0x10000) >> 0x10);
            }
            *(undefined2 *)(uVar5 * 2 + 0x3005ce00) = uVar4;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
      FUN_ram_400002fa();
    }
    DAT_ram_3005bd6a = 1;
    FUN_ram_400115b6(0x81,0x3005ce00,uVar2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000fa1e.
 * REA evidence: ev_afd80b6bdcd1c10b8f31b7620966ecf566d281e788c6a4c781998d56ab38673c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000fa1e(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400042fa();
  if ((DAT_ram_3005be1c != '\0') && ((DAT_ram_3005be04 == '\0' || (param_1 != 0)))) {
    _DAT_ram_3005be14 = uVar1;
    _DAT_ram_3005be10 = FUN_ram_40011a18(3,0x3005cac0,0x40);
    if (_DAT_ram_3005be10 == 0) {
      DAT_ram_3005be04 = '\x01';
      _DAT_ram_3005be18 = _DAT_ram_3005be18 + 1;
    }
    else {
      DAT_ram_3005be04 = '\0';
      _DAT_ram_3005be0c = _DAT_ram_3005be0c + 1;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4000fc38.
 * REA evidence: ev_4a14d41b2653877f29f9fb75a004d7033908af74e16f5262baa592dfe12b9725
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000fc38(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  if (DAT_ram_3005ca08 != '\0') {
    DAT_ram_3005cb00 = 0;
    FUN_ram_4000f6c0();
    return;
  }
  if ((DAT_ram_3005c42c != '\0') && (DAT_ram_3005cb00 == '\0')) {
    if (_DAT_ram_3005c422 < _DAT_ram_3005c420) {
      uVar2 = _DAT_ram_3005c420 - _DAT_ram_3005c422;
      if (0x40 < uVar2) {
        uVar2 = 0x40;
      }
      DAT_ram_3005cb00 = 1;
      if (param_1 == 0) {
        iVar1 = FUN_ram_4000f8d6(&DAT_ram_3005be20 + _DAT_ram_3005c422,uVar2);
      }
      else {
        iVar1 = FUN_ram_400115b6(0x83,&DAT_ram_3005be20 + _DAT_ram_3005c422,uVar2);
      }
      if (-1 < iVar1) {
        _DAT_ram_3005c422 = uVar2 + _DAT_ram_3005c422;
        return;
      }
      DAT_ram_3005cb00 = '\0';
      _DAT_ram_3005c428 = _DAT_ram_3005c428 + 1;
    }
    _DAT_ram_3005c420 = 0;
    _DAT_ram_3005c422 = 0;
    DAT_ram_3005c42c = 0;
    FUN_ram_4000ffca();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000fd40.
 * REA evidence: ev_9aef26dc8554b9373c829b207e727fb871401239dd1c0fa7a517a4abba160b5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000fd40(void)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  
  DAT_ram_3005cb00 = 0;
  if (DAT_ram_3005c42c != '\0') {
    FUN_ram_4000fc38(1);
    return;
  }
  uVar9 = (uint)_DAT_ram_3005cdf6;
  uVar4 = (uint)_DAT_ram_3005cdf4;
  bVar3 = false;
  bVar2 = false;
  uVar8 = 0;
  bVar12 = DAT_ram_3005ccf2;
  do {
    if (uVar9 == uVar4) {
      if (bVar2) {
        DAT_ram_3005ccf2 = bVar12;
      }
      if (bVar3) {
        _DAT_ram_3005cdf4 = (ushort)uVar4;
      }
      if (uVar8 == 0) {
        return;
      }
LAB_ram_4000fde4:
      DAT_ram_3005cb00 = 1;
      FUN_ram_400115b6(0x83,0x3005cb20);
      return;
    }
    if (0x3b < uVar8) {
      if (bVar2) {
        DAT_ram_3005ccf2 = bVar12;
      }
      if (bVar3) {
        _DAT_ram_3005cdf4 = (ushort)uVar4;
      }
      goto LAB_ram_4000fde4;
    }
    bVar11 = *(byte *)(uVar4 + 0x3005ccf4);
    if ((char)bVar11 < '\0') {
      uVar4 = uVar4 + 1 & 0xffff;
      if (0xff < uVar4) {
        uVar4 = 0;
      }
      bVar12 = bVar11;
      if (0xef < bVar11) {
        bVar12 = 0;
      }
      bVar3 = true;
      bVar2 = true;
LAB_ram_4000fe7e:
      bVar10 = bVar11 & 0xf0;
      uVar5 = 0xc;
      if (bVar10 != 0xc0) {
        if (bVar10 < 0xc1) {
          uVar5 = 10;
          if (bVar10 != 0xa0) {
            if (bVar10 < 0xa1) {
              uVar5 = 8;
              if (bVar10 == 0x80) goto LAB_ram_4000feca;
              bVar6 = 0x90;
              uVar5 = 9;
            }
            else {
              bVar6 = 0xb0;
              uVar5 = 0xb;
            }
            if (bVar10 != bVar6) {
LAB_ram_4000feae:
              uVar5 = 0;
            }
          }
        }
        else {
          uVar5 = 0xe;
          if (bVar10 != 0xe0) {
            if (bVar10 == 0xf0) {
              uVar5 = 4;
              if ((((bVar11 != 0xf0) && (uVar5 = 2, bVar11 != 0xf1)) && (uVar5 = 3, bVar11 != 0xf2))
                 && ((uVar5 = 2, bVar11 != 0xf3 && (uVar5 = 0xf, bVar11 == 0xf6)))) {
                uVar5 = 5;
              }
            }
            else {
              uVar5 = 0xd;
              if (bVar10 != 0xd0) goto LAB_ram_4000feae;
            }
          }
        }
      }
LAB_ram_4000feca:
      uVar7 = FUN_ram_4000f896(bVar11);
      *(undefined1 *)(uVar8 + 0x3005cb20) = uVar5;
      *(byte *)(uVar8 + 0x3005cb21) = bVar11;
      if (uVar7 < 2) {
        *(undefined1 *)(uVar8 + 0x3005cb22) = 0;
LAB_ram_4000ff6e:
        *(undefined1 *)(uVar8 + 0x3005cb23) = 0;
        uVar8 = uVar8 + 4 & 0xff;
      }
      else {
        puVar1 = (undefined1 *)(uVar4 + 0x3005ccf4);
        uVar4 = uVar4 + 1 & 0xffff;
        *(undefined1 *)(uVar8 + 0x3005cb22) = *puVar1;
        if (0xff < uVar4) {
          uVar4 = 0;
        }
        if (uVar7 == 2) {
          bVar3 = true;
          goto LAB_ram_4000ff6e;
        }
        puVar1 = (undefined1 *)(uVar4 + 0x3005ccf4);
        uVar4 = uVar4 + 1 & 0xffff;
        *(undefined1 *)(uVar8 + 0x3005cb23) = *puVar1;
        uVar8 = uVar8 + 4 & 0xff;
        bVar3 = true;
        if (uVar4 == 0x100) {
LAB_ram_4000ff94:
          bVar3 = true;
          uVar4 = 0;
        }
      }
    }
    else {
      bVar11 = bVar12;
      if (bVar12 != 0) goto LAB_ram_4000fe7e;
      uVar4 = uVar4 + 1 & 0xffff;
      bVar3 = true;
      if (0xff < uVar4) goto LAB_ram_4000ff94;
    }
  } while( true );
}


/* NanoCore 1.10, address 0x4000ffca.
 * REA evidence: ev_4dd12e6debb31869225c23edb5e59d41a9bee1741ff54851a1df61071b208525
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000ffca(void)

{
  if ((DAT_ram_3005be1c != '\0') && (DAT_ram_3005ca08 == '\0')) {
    if ((DAT_ram_3005c42c == '\0') && (DAT_ram_3005cb00 == '\0')) {
      if (_DAT_ram_3005cdf4 != _DAT_ram_3005cdf6) {
        FUN_ram_4000fd40(0x83,0);
        return;
      }
    }
    return;
  }
  FUN_ram_4000f6da();
  return;
}


