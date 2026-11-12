/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40018000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40018008.
 * REA evidence: ev_d5408c9e76dc617aff5630943132d9b73647c4cc1e31dc00924cd052ba7c792c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40018008(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_ram_40017c66();
    return;
  }
  iVar1 = FUN_ram_40020e68();
  if (iVar1 != 0) {
    FUN_ram_40020e32();
    FUN_ram_40017b36(1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001802c.
 * REA evidence: ev_5f7e699fad724cbc0e372616a2f4a714fed5434c565bd2cfd5bcdc5af77df965
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001802c(void)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char acStack_58 [36];
  
  FUN_ram_40015fd2();
  FUN_ram_400062bc();
  cVar4 = DAT_ram_30068f36;
  uVar3 = _DAT_ram_30068f34;
  iVar7 = _DAT_ram_30068f30;
  cVar2 = DAT_ram_30068f2c;
  iVar11 = _DAT_ram_30068f28;
  uVar1 = _DAT_ram_30068f24;
  iVar9 = _DAT_ram_30068f20;
  _DAT_ram_30068f24 = 0;
  _DAT_ram_30068f30 = 0;
  _DAT_ram_30068f20 = 0;
  _DAT_ram_30068f28 = 0;
  DAT_ram_30068f2c = 0;
  DAT_ram_30068f36 = 0;
  FUN_ram_400062de();
  if (uVar1 == 0 && iVar7 == 0) {
    if (cVar4 != '\0') goto LAB_ram_400180d8;
LAB_ram_40018328:
    if ((iVar9 < 1) && (iVar11 < 1)) {
LAB_ram_40018248:
      if (cVar2 == '\0') goto LAB_ram_40018284;
    }
    if (DAT_ram_3006901a != '\0') {
LAB_ram_40018336:
      FUN_ram_40017cd6();
    }
  }
  else {
    _DAT_ram_30068bc0 = FUN_ram_400042fa();
    if (cVar4 != '\0') {
LAB_ram_400180d8:
      _DAT_ram_30068f40 = uVar3;
      if (uVar3 == 0) {
        if (DAT_ram_30068f48 == '\0') {
          FUN_ram_40015c36();
          FUN_ram_40015cb8(0);
        }
        DAT_ram_30068f48 = '\0';
      }
      else {
        FUN_ram_40015ab6();
        FUN_ram_40015cb8();
        if ((0x5db < uVar3) && (DAT_ram_30068f48 == '\0')) {
          DAT_ram_30068f48 = '\x01';
          FUN_ram_40015cb8(1000);
          FUN_ram_40048dde(0);
          if (_DAT_ram_30068f4c == 0) {
            _DAT_ram_30068f4c = FUN_ram_4004b642(FUN_ram_40015e5c,0x50,0);
          }
        }
      }
    }
    if (iVar7 != 0) {
      uVar6 = FUN_ram_4000d9ce();
      uVar6 = thunk_FUN_ram_40024b5c(0x300687f8,0,uVar6,iVar7);
      FUN_ram_4000d996();
      FUN_ram_40015e02();
      if ((DAT_ram_300466e7 == '\0') && (iVar7 = FUN_ram_40015ab6(), iVar7 == 0)) {
        FUN_ram_40027c7c(0x30068c8c,uVar6);
        FUN_ram_400163ee();
        if (_DAT_ram_30069118 == 0) {
          _DAT_ram_30069118 = FUN_ram_4004b642(&LAB_ram_400164da,0x32,0);
        }
        else {
          FUN_ram_4004b8ce();
        }
      }
    }
    if (uVar1 == 0) goto LAB_ram_40018328;
    uVar8 = FUN_ram_4001dc50();
    uVar10 = (int)uVar1 >> 0x1f;
    if (uVar8 == 0) {
      iVar7 = FUN_ram_40020e68();
      if (iVar7 == 0) {
        iVar7 = FUN_ram_40019c2c();
        if (iVar7 == 0) {
          iVar7 = FUN_ram_4001fda6();
          if (iVar7 == 0) {
            iVar7 = FUN_ram_40020388();
            if (iVar7 == 0) {
              if (DAT_ram_30069120 == 0) {
                if (DAT_ram_30068ffe == '\0') {
                  if (DAT_ram_30069018 != 0) {
                    uVar5 = thunk_FUN_ram_40024b5c(0x300687f8,1,DAT_ram_300466f4,uVar1);
                    FUN_ram_4001745a(uVar5);
                    goto LAB_ram_400183ce;
                  }
                  if (DAT_ram_30068f7c == 0) {
                    iVar7 = 0;
                    do {
                      if (_DAT_ram_30069068 == *(uint *)(&DAT_ram_30068ee8 + iVar7 * 4))
                      goto LAB_ram_40018538;
                      iVar7 = iVar7 + 1;
                    } while (iVar7 != 0xe);
                    iVar7 = 0;
LAB_ram_40018538:
                    iVar7 = iVar7 + uVar1;
                    if (iVar7 < 0xe) {
                      if (iVar7 < 0) {
                        iVar7 = 0;
                      }
                    }
                    else {
                      iVar7 = 0xd;
                    }
                    uVar8 = *(uint *)(&DAT_ram_30068ee8 + iVar7 * 4);
                    if (_DAT_ram_30069068 != uVar8) {
                      _DAT_ram_30069068 = uVar8;
                      if (DAT_ram_300466e7 != '\0') {
                        FUN_ram_4001798a();
                      }
                      if ((uVar10 ^ uVar1) - 1 == uVar10) {
                        DAT_ram_30069019 = '\0';
                      }
                      else {
                        iVar7 = FUN_ram_40015f58();
                        if (iVar7 == 0) goto LAB_ram_40018328;
                      }
                      DAT_ram_3006901a = '\0';
                      FUN_ram_400177d2();
                      if (DAT_ram_30069019 != '\0') goto LAB_ram_400181b4;
                    }
                  }
                  else {
                    _DAT_ram_30069014 = _DAT_ram_30069014 + uVar1;
                    if ((int)_DAT_ram_30069014 < 0) {
                      _DAT_ram_30069014 = 0;
                    }
                    else if (0x3f < (int)_DAT_ram_30069014) {
                      _DAT_ram_30069014 = 0x3f;
                    }
                    if (-1 < (int)_DAT_ram_30069014) {
                      DAT_ram_300466ec = _DAT_ram_30069014;
                      if (_DAT_ram_30068f70 == 0) {
                        _DAT_ram_30068f70 = FUN_ram_4004b642(&LAB_ram_40017a9c,0x4b,0);
                        if (_DAT_ram_30068f70 != 0) {
                          FUN_ram_4004b8ca(_DAT_ram_30068f70,1);
                        }
                      }
                      else {
                        FUN_ram_4004b8a8(_DAT_ram_30068f70,0x4b);
                        FUN_ram_4004b8ca(_DAT_ram_30068f70,1);
                        FUN_ram_4004b8ce(_DAT_ram_30068f70);
                      }
                    }
                    iVar7 = FUN_ram_400042fa();
                    if (((uVar10 ^ uVar1) - 1 != uVar10) &&
                       (uVar8 = FUN_ram_40004362(0x21), _DAT_ram_30068ff8 != 0)) {
                      if (uVar8 == 0) {
                        uVar8 = 1;
                      }
                      if ((uint)(iVar7 - _DAT_ram_30068ff8) < uVar8) {
                        DAT_ram_30068ffc = '\x01';
                        goto LAB_ram_40018328;
                      }
                    }
                    _DAT_ram_30068ff8 = iVar7;
                    FUN_ram_40017512(_DAT_ram_30069014);
                    DAT_ram_30068ffc = '\0';
                  }
                }
                else if (DAT_ram_30068ffd == '\0') {
                  _DAT_ram_30069014 = _DAT_ram_30069014 + uVar1;
                  FUN_ram_40017512();
                }
              }
              else {
                iVar7 = thunk_FUN_ram_4002206a();
                if ((iVar7 != 0) != 0 < (int)uVar1) {
                  FUN_ram_4002cb78();
                  iVar7 = thunk_FUN_ram_4002206a();
                  acStack_58[0] = iVar7 != 0;
                  FUN_ram_400137c6(100,acStack_58,1);
                  FUN_ram_4001387c();
                  FUN_ram_40015d86();
LAB_ram_400183ce:
                  FUN_ram_4001783c();
                }
              }
            }
            else {
              DAT_ram_3006901a = '\0';
              FUN_ram_40015b50();
              FUN_ram_40020392(uVar1);
            }
          }
          else {
            DAT_ram_3006901a = '\0';
            FUN_ram_40015b50();
            FUN_ram_4001fdb0(uVar1);
          }
        }
        else {
          DAT_ram_3006901a = '\0';
          FUN_ram_40015b50();
          FUN_ram_40019c36(uVar1);
        }
      }
      else {
        DAT_ram_3006901a = '\0';
        FUN_ram_40015b50();
        FUN_ram_40020e72(uVar1);
      }
      goto LAB_ram_40018328;
    }
    if ((uVar10 ^ uVar1) - 1 == uVar10) {
      DAT_ram_30069019 = '\0';
    }
    else {
      uVar8 = FUN_ram_40015f58();
    }
    FUN_ram_4001dc5a((uVar8 ^ 1) & 0xff);
    FUN_ram_4001e2e0(uVar1);
    FUN_ram_4001dc5a(0);
    if (uVar8 == 0) goto LAB_ram_40018328;
    if (DAT_ram_30069019 != '\0') {
LAB_ram_400181b4:
      DAT_ram_3006901a = '\x01';
      if ((iVar9 < 1) && (iVar11 < 1)) goto LAB_ram_40018248;
      goto LAB_ram_40018336;
    }
    DAT_ram_3006901a = '\0';
    if ((iVar9 < 1) && (iVar11 < 1)) goto LAB_ram_40018248;
  }
  FUN_ram_4001755a();
LAB_ram_40018284:
  for (; 0 < iVar9; iVar9 = iVar9 + -1) {
    iVar7 = FUN_ram_4001dc50();
    if (iVar7 == 0) {
      iVar7 = FUN_ram_40020e68();
      if (iVar7 == 0) {
        iVar7 = FUN_ram_40019c2c();
        if (iVar7 == 0) {
          iVar7 = FUN_ram_4001fda6();
          if (iVar7 == 0) {
            iVar7 = FUN_ram_40020388();
            if (iVar7 == 0) {
              if (DAT_ram_30068ffe != '\0') {
                if ((int)_DAT_ram_30069014 < 0x40) {
                  uVar8 = _DAT_ram_30069014;
                  if ((int)_DAT_ram_30069014 < 0) {
                    uVar8 = 0;
                  }
                }
                else {
                  uVar8 = 0x3f;
                }
                iVar7 = FUN_ram_40031504(uVar8 & 0xff,acStack_58);
                if (((iVar7 == 0) && (acStack_58[0] != '\0')) && (DAT_ram_30068ffd == '\0')) {
                  DAT_ram_30068ffd = '\x01';
                  FUN_ram_400170c4();
                }
                else {
                  iVar7 = FUN_ram_400148a2(_DAT_ram_30069014 & 0xff);
                  if (iVar7 == 0) {
                    FUN_ram_400162e4();
                  }
                  if (DAT_ram_300466f0 < 0xe) {
                    _DAT_ram_30069068 = DAT_ram_300466f0;
                  }
                  DAT_ram_300466f0 = 0xffffffff;
                  DAT_ram_30068ffe = '\0';
                  FUN_ram_400172a2();
                  DAT_ram_30068ffd = '\0';
                  FUN_ram_400170c4();
LAB_ram_4001869a:
                  FUN_ram_40016566();
                }
                goto LAB_ram_4001864e;
              }
              if (0xd < _DAT_ram_30069068) goto LAB_ram_400185c6;
              if ((&DAT_ram_400932fc)[_DAT_ram_30069068] == '\0') {
                if (_DAT_ram_30069068 == 0) {
                  FUN_ram_4001ffd2();
                }
                else {
                  if (_DAT_ram_30069068 != 1) {
                    if (_DAT_ram_30069068 == 2) {
                      FUN_ram_40017c66();
                      goto LAB_ram_400185c6;
                    }
                    if (_DAT_ram_30069068 == 5) {
                      DAT_ram_30069120 = DAT_ram_30069120 ^ 1;
                    }
                    else {
                      if (_DAT_ram_30069068 != 4) {
                        if (_DAT_ram_30069068 == 3) {
                          if (DAT_ram_30068f7c != 0) {
                            FUN_ram_40017940();
                          }
                          DAT_ram_30068f7c = DAT_ram_30068f7c ^ 1;
                          goto LAB_ram_4001869a;
                        }
                        goto LAB_ram_400186b6;
                      }
                      DAT_ram_30069018 = DAT_ram_30069018 ^ 1;
                    }
LAB_ram_4001864e:
                    FUN_ram_4001783c();
                    goto LAB_ram_400185c6;
                  }
                  FUN_ram_40019b7a();
                }
              }
              else {
                FUN_ram_4001e2a4((&DAT_ram_400932b4)[_DAT_ram_30069068]);
              }
LAB_ram_400186b6:
              uVar6 = 0;
              goto LAB_ram_400185ae;
            }
            iVar7 = FUN_ram_4002040a();
            if (iVar7 != 0) {
              FUN_ram_4002035e();
              goto LAB_ram_400185ac;
            }
          }
          else {
            iVar7 = FUN_ram_4001ff02();
            if (iVar7 != 0) {
              FUN_ram_4001fd8c();
              goto LAB_ram_400185ac;
            }
          }
        }
        else {
          iVar7 = FUN_ram_40019d6e();
          if (iVar7 != 0) {
            FUN_ram_40019bd4();
LAB_ram_400185ac:
            uVar6 = 1;
LAB_ram_400185ae:
            FUN_ram_40017b36(uVar6);
          }
        }
      }
      else {
        iVar7 = FUN_ram_40020f1a();
        if (iVar7 != 0) {
          FUN_ram_40018008(0);
        }
      }
    }
    else {
      iVar7 = FUN_ram_4001dcb8();
      if (iVar7 != 0) {
        FUN_ram_4001dbf6();
        goto LAB_ram_400185ac;
      }
    }
LAB_ram_400185c6:
  }
  do {
    if (iVar11 < 1) {
      if (cVar2 != '\0') {
        iVar9 = FUN_ram_4001dc50();
        if (((iVar9 == 0) && (iVar9 = FUN_ram_40020e68(), iVar9 == 0)) &&
           ((iVar9 = FUN_ram_40019c2c(), iVar9 == 0 &&
            ((iVar9 = FUN_ram_4001fda6(), iVar9 == 0 && (iVar9 = FUN_ram_40020388(), iVar9 == 0)))))
           ) {
          if ((DAT_ram_30068ffe == '\0') && (DAT_ram_300466e7 != '\0')) {
            FUN_ram_40017940();
            DAT_ram_300466f0 = _DAT_ram_30069068;
            if (0xd < _DAT_ram_30069068) {
              DAT_ram_300466f0 = 6;
            }
            DAT_ram_30068f7c = 0;
            DAT_ram_30069018 = 0;
            DAT_ram_30069120 = 0;
            DAT_ram_30068ffe = '\x01';
            DAT_ram_30068ffd = '\0';
            FUN_ram_400170c4();
            FUN_ram_40017512(_DAT_ram_30069014);
            FUN_ram_400172a2();
            _DAT_ram_30068f78 = FUN_ram_4004b642(FUN_ram_400172f2,0x15e,0);
            FUN_ram_40016566();
            FUN_ram_4001783c();
          }
        }
        else {
          FUN_ram_40017a5c();
        }
      }
      if ((DAT_ram_3006901a != '\0') && (uVar1 == 0)) {
        FUN_ram_400062bc();
        iVar9 = _DAT_ram_30068f24;
        FUN_ram_400062de();
        if ((iVar9 == 0) && (iVar9 = FUN_ram_40017cd6(), iVar9 == 0)) {
          DAT_ram_3006901a = '\0';
          FUN_ram_40015b50();
        }
      }
      if ((DAT_ram_30068ffc != '\0') && (uVar1 == 0)) {
        FUN_ram_400062bc();
        iVar9 = _DAT_ram_30068f24;
        FUN_ram_400062de();
        if (iVar9 == 0) {
          FUN_ram_4001755a();
          return;
        }
      }
      return;
    }
    iVar9 = FUN_ram_4001dc50();
    if (iVar9 == 0) {
      iVar9 = FUN_ram_40020e68();
      if (iVar9 == 0) {
        iVar9 = FUN_ram_40019c2c();
        if (iVar9 == 0) {
          iVar9 = FUN_ram_4001fda6();
          if (iVar9 == 0) {
            iVar9 = FUN_ram_40020388();
            if (iVar9 == 0) {
              if (DAT_ram_300466e7 != '\0') goto LAB_ram_40018740;
            }
            else {
              FUN_ram_4002035e();
            }
          }
          else {
            FUN_ram_4001fd8c();
          }
        }
        else {
          FUN_ram_40019bd4();
        }
        goto LAB_ram_4001872c;
      }
      FUN_ram_40018008(0);
    }
    else {
      FUN_ram_4001dbf6();
LAB_ram_4001872c:
      FUN_ram_40017b36(1);
    }
LAB_ram_40018740:
    iVar11 = iVar11 + -1;
  } while( true );
}


/* NanoCore 1.10, address 0x4001884c.
 * REA evidence: ev_33e9b8fe5664a5bf64c0a0b839173a63b836197edaea328a9855449d55db3d50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001884c(void)

{
  FUN_ram_40049cd2(FUN_ram_40017dac,0);
  return;
}


/* NanoCore 1.10, address 0x4001885a.
 * REA evidence: ev_9195df71493184f20028bb2a2687e19ef47ec6015794bf50cfa049059169f8e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001885a(int param_1)

{
  int iVar1;
  
  FUN_ram_4002b5dc();
  iVar1 = FUN_ram_40015e34();
  if (iVar1 != 0) {
    FUN_ram_4001884c();
    if (param_1 != 0) {
      FUN_ram_4004b6a8(param_1);
    }
    _DAT_ram_300686cc = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40018888.
 * REA evidence: ev_e1939f131d18d09ce08fa1a6b4f790920df973d3abe764651d225798fbceeac6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018888(void)

{
  if (_DAT_ram_30068c44 != 0) {
    FUN_ram_40049cd2(&LAB_ram_40017ca6,0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400188a2.
 * REA evidence: ev_5f1b1e16c94cc6c782a731795ec5d77b62a680ba975e9c3e8745869cd16e9dd7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400188a2(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400062bc();
    _DAT_ram_30068f24 = _DAT_ram_30068f24 + param_1;
    if (_DAT_ram_30068f24 < -0x80) {
      _DAT_ram_30068f24 = -0x80;
    }
    if (0x80 < _DAT_ram_30068f24) {
      _DAT_ram_30068f24 = 0x80;
    }
    FUN_ram_400062de();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400188e2.
 * REA evidence: ev_9477cbbced60949211e23b646a424be8c6c958dc92d8b81645ef3f51882ea423
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400188e2(void)

{
  FUN_ram_400062bc();
  _DAT_ram_30068f20 = _DAT_ram_30068f20 + 1;
  FUN_ram_400062de();
  return;
}


/* NanoCore 1.10, address 0x40018900.
 * REA evidence: ev_cbede16902f9df75d1201cedfab58777c43b66d8e4e43c8548cafacafebbad77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018900(void)

{
  FUN_ram_400062bc();
  _DAT_ram_30068f28 = _DAT_ram_30068f28 + 1;
  FUN_ram_400062de();
  return;
}


/* NanoCore 1.10, address 0x4001891e.
 * REA evidence: ev_5ca6aba95dbfe3f972990326e272f0632545cf0068f2010be733066f93c3f6fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001891e(void)

{
  FUN_ram_400062bc();
  DAT_ram_30068f2c = 1;
  FUN_ram_400062de();
  return;
}


/* NanoCore 1.10, address 0x40018938.
 * REA evidence: ev_2f792b53c2cd81702d6404618a39e640a6c526803a4a0167658640c86b928118
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018938(undefined2 param_1)

{
  FUN_ram_400062bc();
  DAT_ram_30068f36 = 1;
  _DAT_ram_30068f34 = param_1;
  FUN_ram_400062de();
  return;
}


/* NanoCore 1.10, address 0x4001895e.
 * REA evidence: ev_3e18c7c12a1a62c52f44f2e49e4f6f60b44deb1901a1631cab67e592c5c4ae7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001895e(void)

{
  int iVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_40;
  
  FUN_ram_4004c24c();
  uVar3 = FUN_ram_4004c3d4();
  uVar2 = FUN_ram_4001425e();
  FUN_ram_40047968(uVar3,uVar2,0);
  FUN_ram_40047986(uVar3,0xff,0);
  _DAT_ram_30069068 = 6;
  DAT_ram_300687ac = 0xff;
  _DAT_ram_30068f24 = 0;
  _DAT_ram_30068f30 = 0;
  _DAT_ram_30068f20 = 0;
  _DAT_ram_30068f28 = 0;
  DAT_ram_30068f2c = 0;
  DAT_ram_30068f36 = 0;
  _DAT_ram_30068f34 = 0;
  _DAT_ram_30068f44 = 0;
  _DAT_ram_30068f38 = 0;
  _DAT_ram_30068f3c = 0;
  _DAT_ram_3006911c = 0;
  _DAT_ram_30069114 = 0;
  _DAT_ram_300687b0 = 0;
  _DAT_ram_300687a8 = 0;
  _DAT_ram_30068f4c = 0;
  _DAT_ram_30069118 = 0;
  _DAT_ram_30068f40 = 0;
  DAT_ram_30068f48 = 0;
  _DAT_ram_30068c44 = uVar3;
  FUN_ram_40027c66(0x30068c8c);
  _DAT_ram_3006908c = 0;
  _DAT_ram_30069078 = 0;
  DAT_ram_3006907c = 0;
  DAT_ram_30069073 = 0;
  DAT_ram_3006901a = 0;
  FUN_ram_40015b50();
  DAT_ram_300466f0 = 0xffffffff;
  _DAT_ram_30068fc8 = 0;
  DAT_ram_30068f7c = 0;
  DAT_ram_30068ffe = 0;
  DAT_ram_30068ffd = 0;
  DAT_ram_30069018 = 0;
  DAT_ram_30069120 = 0;
  _DAT_ram_30068f78 = 0;
  DAT_ram_30068f74 = 1;
  DAT_ram_300466ec = 0xffffffff;
  DAT_ram_300466e8 = 0xffffffff;
  DAT_ram_300466e6 = 0xff;
  DAT_ram_300466e5 = 0xff;
  _DAT_ram_30068f80 = (undefined **)0x0;
  _DAT_ram_30069110 = 0;
  _DAT_ram_30068c48 = 0;
  _DAT_ram_30068f84 = 0;
  _DAT_ram_30068720 = 0;
  _DAT_ram_30068f70 = 0;
  DAT_ram_30068ffc = 0;
  _DAT_ram_30068ff8 = 0;
  DAT_ram_30069010 = 0;
  _DAT_ram_30069020 = 0;
  _DAT_ram_30069064 = 0;
  _DAT_ram_30068c98 = 0;
  _DAT_ram_30068ca0 = 0;
  DAT_ram_30068c9c = 0;
  DAT_ram_30068ca4 = 0;
  _DAT_ram_30068bc8 = 0;
  DAT_ram_300686d1 = 0;
  DAT_ram_300687a4 = 0;
  DAT_ram_300686d8 = 0;
  DAT_ram_300466e4 = 1;
  _DAT_ram_300686d4 = 0;
  _DAT_ram_300686dc = 0;
  DAT_ram_300687b4 = 0;
  thunk_FUN_ram_40024a3a(0x300687f8);
  FUN_ram_4001609e(0);
  _DAT_ram_30068bc4 = FUN_ram_40042b1a(uVar3);
  FUN_ram_40043faa(_DAT_ram_30068bc4,0,0);
  FUN_ram_40044038(_DAT_ram_30068bc4,0x140,0xf0);
  FUN_ram_40047968(_DAT_ram_30068bc4,uVar2,0);
  FUN_ram_40047986(_DAT_ram_30068bc4,0xff,0);
  FUN_ram_400479c4(_DAT_ram_30068bc4,0,0);
  FUN_ram_40042b3a(_DAT_ram_30068bc4,0x10);
  FUN_ram_40042b3a(_DAT_ram_30068bc4,2);
  FUN_ram_40047d7c(_DAT_ram_30068bc4,0);
  _DAT_ram_30068bc8 = FUN_ram_4005600c(_DAT_ram_30068bc4);
  FUN_ram_400565de(_DAT_ram_30068bc8,0xb);
  FUN_ram_40043faa(_DAT_ram_30068bc8,0,0);
  FUN_ram_40044038(_DAT_ram_30068bc8,0x140,0xf0);
  iVar1 = 0;
  FUN_ram_40043064(_DAT_ram_30068bc8,1);
  FUN_ram_40042b3a(_DAT_ram_30068bc8,0x10);
  FUN_ram_40042b3a(_DAT_ram_30068bc8,2);
  _DAT_ram_30068c98 = FUN_ram_4005600c(uVar3);
  FUN_ram_400565de(_DAT_ram_30068c98,0xb);
  FUN_ram_40044038(_DAT_ram_30068c98,0x55,0x14);
  FUN_ram_40043faa(_DAT_ram_30068c98,0x15,0xb);
  FUN_ram_40043064(_DAT_ram_30068c98,1);
  FUN_ram_40042b3a(_DAT_ram_30068c98,0x10);
  FUN_ram_40042b3a(_DAT_ram_30068c98,2);
  _DAT_ram_30068ca0 = FUN_ram_4005600c(uVar3);
  FUN_ram_400565de(_DAT_ram_30068ca0,0xb);
  FUN_ram_40044038(_DAT_ram_30068ca0,0x55,0x14);
  FUN_ram_40043faa(_DAT_ram_30068ca0,0x15,0x23);
  FUN_ram_40043064(_DAT_ram_30068ca0,1);
  FUN_ram_40042b3a(_DAT_ram_30068ca0,0x10);
  puVar5 = (undefined1 *)0x30068840;
  FUN_ram_40042b3a(_DAT_ram_30068ca0,2);
  _DAT_ram_30068c48 = FUN_ram_4005600c(uVar3);
  FUN_ram_400565de(_DAT_ram_30068c48,9);
  FUN_ram_40042b3a(_DAT_ram_30068c48,0x10);
  FUN_ram_40042b3a(_DAT_ram_30068c48,2);
  FUN_ram_40043064(_DAT_ram_30068c48,1);
  FUN_ram_40015e80(_DAT_ram_30068c48);
  _DAT_ram_30068f84 = FUN_ram_4005600c(uVar3);
  FUN_ram_400565de(_DAT_ram_30068f84,9);
  FUN_ram_40042b3a(_DAT_ram_30068f84,0x10);
  FUN_ram_40042b3a(_DAT_ram_30068f84,2);
  FUN_ram_40043064(_DAT_ram_30068f84,1);
  FUN_ram_40015eaa(_DAT_ram_30068f84);
  _DAT_ram_30068720 = FUN_ram_4005600c(uVar3);
  FUN_ram_400565de(_DAT_ram_30068720,0xb);
  FUN_ram_40042b3a(_DAT_ram_30068720,0x10);
  FUN_ram_40042b3a(_DAT_ram_30068720,2);
  FUN_ram_40043064(_DAT_ram_30068720,1);
  FUN_ram_40015ed4(_DAT_ram_30068720);
  FUN_ram_400164de(&DAT_ram_30068bcc,0x40,s_bg_main_ram_40093200);
  do {
    if (iVar1 - 3U < 2) {
      *puVar5 = 0;
    }
    else {
      FUN_ram_400164de(puVar5,0x40,(&DAT_ram_400932b4)[iVar1]);
    }
    iVar1 = iVar1 + 1;
    puVar5 = puVar5 + 0x40;
  } while (iVar1 != 0xe);
  FUN_ram_400164de(&DAT_ram_30069024,0x40,s_saved_flag_ram_40093208);
  FUN_ram_400164de(&DAT_ram_300690d0,0x40,s_distortion_ram_4009385c + 8);
  FUN_ram_400164de(&DAT_ram_30069090,0x40,s_Fbat_off_ram_400936eb + 5);
  FUN_ram_400164de(&DAT_ram_30068c4c,0x40,s_master_knob_ram_400931b0);
  FUN_ram_400164de(&DAT_ram_30068f88,0x40,s_preset_knob_ram_400931bc);
  FUN_ram_400164de(&DAT_ram_30068800,0x40,&DAT_ram_400931a8);
  FUN_ram_400164de(&DAT_ram_30068724,0x40,s_battery_low_ram_40093180);
  FUN_ram_400164de(&DAT_ram_30068764,0x40,s_battery_mid_ram_4009319c);
  FUN_ram_400164de(&DAT_ram_300686e0,0x40,s_battery_full_ram_4009318c);
  puVar5 = &DAT_ram_30068ca8;
  iVar1 = 0;
  do {
    FUN_ram_400055ea(&uStack_40,0x10,s_volume_meter__u_ram_40093214,iVar1);
    iVar1 = iVar1 + 1;
    FUN_ram_400164de(puVar5,0x40,&uStack_40);
    puVar5 = puVar5 + 0x40;
  } while (iVar1 != 9);
  _DAT_ram_300687d8 = 0;
  _DAT_ram_300687dc = 1;
  _DAT_ram_300687e0 = 2;
  _DAT_ram_300687e4 = 3;
  _DAT_ram_300687e8 = 4;
  _DAT_ram_300687ec = 5;
  _DAT_ram_300687f0 = 6;
  _DAT_ram_300687f4 = 7;
  FUN_ram_40015aee();
  FUN_ram_40015b62();
  DAT_ram_300686d0 = FUN_ram_40015e34();
  FUN_ram_4002c3fc();
  FUN_ram_4002c4c2();
  FUN_ram_4002c658();
  FUN_ram_4002112c();
  FUN_ram_40020fec();
  FUN_ram_400173a2();
  FUN_ram_400173e8();
  FUN_ram_40016dfa();
  FUN_ram_4000505c(&DAT_ram_30068c0c,0,0x38);
  FUN_ram_4000505c(0x300687b8,0,0x20);
  if (DAT_ram_300686d0 == '\0') {
    if (_DAT_ram_300686cc == 0) {
      _DAT_ram_300686cc = FUN_ram_4004b642(FUN_ram_4001885a,500,0);
    }
  }
  else {
    FUN_ram_400160ec();
    FUN_ram_40015d2a();
    FUN_ram_400167e0(uVar3);
  }
  FUN_ram_40016c3c(1);
  FUN_ram_40016d7a(1);
  _DAT_ram_3006906c = FUN_ram_40042b1a(uVar3);
  FUN_ram_40017d2e();
  FUN_ram_40042b3a(_DAT_ram_3006906c,2);
  FUN_ram_40043064(_DAT_ram_3006906c,1);
  FUN_ram_4001d560(uVar3);
  FUN_ram_4001dbe2(0x300687b8,8);
  FUN_ram_4002020e(uVar3);
  FUN_ram_40020a6c(uVar3);
  FUN_ram_40019962(uVar3);
  FUN_ram_40019b66(0x300687b8,8);
  FUN_ram_4001f860(uVar3);
  _DAT_ram_30069020 = FUN_ram_4005600c(uVar3);
  FUN_ram_40044038(_DAT_ram_30069020,200,0xa0);
  FUN_ram_40043faa(_DAT_ram_30069020,0x3c,0x28);
  FUN_ram_40043064(_DAT_ram_30069020,1);
  FUN_ram_40042b3a(_DAT_ram_30069020,0x10);
  FUN_ram_40042b3a(_DAT_ram_30069020,2);
  FUN_ram_400162aa();
  _DAT_ram_30068fc8 = FUN_ram_40056c3a(uVar3);
  FUN_ram_400572fa(_DAT_ram_30068fc8,1);
  FUN_ram_40044038(_DAT_ram_30068fc8,0x200007d1);
  FUN_ram_40016e9e(uVar3,_DAT_ram_30068fc8,0x30068fd8,2);
  FUN_ram_400171f0();
  FUN_ram_40016566();
  _DAT_ram_30068f44 = FUN_ram_40042b1a(uVar3);
  FUN_ram_40043faa(_DAT_ram_30068f44,0,0);
  FUN_ram_40044038(_DAT_ram_30068f44,0x140,0xf0);
  uStack_40 = (uint)uStack_40._3_1_ << 0x18;
  FUN_ram_40047968(_DAT_ram_30068f44,uStack_40,0);
  FUN_ram_40047986(_DAT_ram_30068f44,0xb2,0);
  FUN_ram_400479c4(_DAT_ram_30068f44,0,0);
  FUN_ram_40047a94(_DAT_ram_30068f44,0,0);
  FUN_ram_40042b3a(_DAT_ram_30068f44,0x10);
  FUN_ram_40042b3a(_DAT_ram_30068f44,2);
  FUN_ram_40043064(_DAT_ram_30068f44,1);
  _DAT_ram_30068f38 = FUN_ram_40042b1a(_DAT_ram_30068f44);
  FUN_ram_40044038(_DAT_ram_30068f38,0x70,10);
  FUN_ram_40015e52(_DAT_ram_30068f38);
  FUN_ram_40047968(_DAT_ram_30068f38,0x101010,0);
  FUN_ram_40047986(_DAT_ram_30068f38,0xff,0);
  FUN_ram_40047994(_DAT_ram_30068f38,0xececec,0);
  FUN_ram_400479c4(_DAT_ram_30068f38,1,0);
  FUN_ram_40047a94(_DAT_ram_30068f38,0,0);
  FUN_ram_40042b3a(_DAT_ram_30068f38,0x10);
  FUN_ram_40042b3a(_DAT_ram_30068f38,2);
  _DAT_ram_30068f3c = FUN_ram_40042b1a(_DAT_ram_30068f38);
  FUN_ram_40043faa(_DAT_ram_30068f3c,1,1);
  FUN_ram_40044038(_DAT_ram_30068f3c,0,6);
  FUN_ram_40047968(_DAT_ram_30068f3c,0xececec,0);
  FUN_ram_40047986(_DAT_ram_30068f3c,0xff,0);
  FUN_ram_400479c4(_DAT_ram_30068f3c,0,0);
  FUN_ram_40047a94(_DAT_ram_30068f3c,0,0);
  FUN_ram_40042b3a(_DAT_ram_30068f3c,0x10);
  FUN_ram_40042b3a(_DAT_ram_30068f3c,2);
  uStack_54 = CONCAT13(uStack_54._3_1_,0xffffff);
  _DAT_ram_3006911c = FUN_ram_40042b1a(uVar3);
  FUN_ram_40044038(_DAT_ram_3006911c,0x96,0x5c);
  FUN_ram_40015e52(_DAT_ram_3006911c);
  FUN_ram_40047968(_DAT_ram_3006911c,0x121214,0);
  FUN_ram_40047986(_DAT_ram_3006911c,0,0);
  FUN_ram_40047994(_DAT_ram_3006911c,0xffffff,0);
  FUN_ram_400479b4(_DAT_ram_3006911c,0,0);
  FUN_ram_400479c4(_DAT_ram_3006911c,1,0);
  FUN_ram_40047a94(_DAT_ram_3006911c,0x16,0);
  FUN_ram_40047930(_DAT_ram_3006911c,0,0);
  FUN_ram_4004793e(_DAT_ram_3006911c,0,0);
  FUN_ram_4004794c(_DAT_ram_3006911c,0,0);
  FUN_ram_4004795a(_DAT_ram_3006911c,0,0);
  FUN_ram_400479e4(_DAT_ram_3006911c,0xe,0);
  FUN_ram_400479f4(_DAT_ram_3006911c,5,0);
  uStack_50 = uStack_50 & 0xff000000;
  FUN_ram_40047a04(_DAT_ram_3006911c,uStack_50,0);
  FUN_ram_40047a24(_DAT_ram_3006911c,0,0);
  FUN_ram_40042b3a(_DAT_ram_3006911c,0x10);
  FUN_ram_40042b3a(_DAT_ram_3006911c,2);
  FUN_ram_40043064(_DAT_ram_3006911c,1);
  _DAT_ram_30069114 = FUN_ram_40056c3a(_DAT_ram_3006911c);
  FUN_ram_4005727c(_DAT_ram_30069114,&DAT_ram_40093224);
  FUN_ram_400572fa(_DAT_ram_30069114,4);
  FUN_ram_40047a44(_DAT_ram_30069114,uStack_54,0);
  FUN_ram_40047a64(_DAT_ram_30069114,0,0);
  FUN_ram_40047a84(_DAT_ram_30069114,2,0);
  FUN_ram_4001635c();
  FUN_ram_40042b3a(_DAT_ram_30069114,0x10);
  FUN_ram_40042b3a(_DAT_ram_30069114,2);
  _DAT_ram_300687b0 = FUN_ram_40042b1a(uVar3);
  FUN_ram_40044038(_DAT_ram_300687b0,0xdc,0x50);
  FUN_ram_40015e52(_DAT_ram_300687b0);
  uStack_54 = CONCAT13(uStack_54._3_1_,0x80000);
  uStack_54 = CONCAT22(uStack_54._2_2_,0x808);
  FUN_ram_40047968(_DAT_ram_300687b0,uStack_54,0);
  FUN_ram_40047986(_DAT_ram_300687b0,0xe5,0);
  FUN_ram_40047994(_DAT_ram_300687b0,0xff4d4d,0);
  FUN_ram_400479c4(_DAT_ram_300687b0,2,0);
  FUN_ram_40047a94(_DAT_ram_300687b0,8,0);
  uVar3 = _DAT_ram_300687b0;
  FUN_ram_4004794c(_DAT_ram_300687b0,0,0);
  FUN_ram_4004795a(uVar3,0,0);
  FUN_ram_40047930(uVar3,0,0);
  FUN_ram_4004793e(uVar3,0,0);
  FUN_ram_40042b3a(_DAT_ram_300687b0,0x10);
  FUN_ram_40042b3a(_DAT_ram_300687b0,2);
  FUN_ram_40043064(_DAT_ram_300687b0,1);
  _DAT_ram_300687a8 = FUN_ram_40056c3a(_DAT_ram_300687b0);
  FUN_ram_4005727c(_DAT_ram_300687a8,s_NO_BT_ram_40093154);
  FUN_ram_400572fa(_DAT_ram_300687a8,4);
  FUN_ram_40044038(_DAT_ram_300687a8,0xd0,0x200007d1);
  FUN_ram_40047a84(_DAT_ram_300687a8,2,0);
  FUN_ram_40047a44(_DAT_ram_300687a8,0xff4d4d,0);
  ppuVar4 = _DAT_ram_30068f80;
  if (_DAT_ram_30068f80 == (undefined **)0x0) {
    ppuVar4 = &PTR_LAB_ram_4001280e_ram_40092d7c;
  }
  FUN_ram_40047a74(_DAT_ram_300687a8,ppuVar4,0);
  uVar3 = _DAT_ram_300687a8;
  FUN_ram_400478f0(_DAT_ram_300687a8,0x180,0);
  FUN_ram_40047900(uVar3,0x180,0);
  FUN_ram_40047910(_DAT_ram_300687a8,0x20000032,0);
  FUN_ram_40047920(_DAT_ram_300687a8,0x20000032,0);
  FUN_ram_40015e52(_DAT_ram_300687a8);
  FUN_ram_40042b3a(_DAT_ram_300687a8,0x10);
  FUN_ram_40042b3a(_DAT_ram_300687a8,2);
  FUN_ram_40015fd2();
  FUN_ram_4004b642(FUN_ram_4001802c,0x10,0);
  FUN_ram_4004b642(FUN_ram_40016b3c,0x32,0);
  iVar1 = FUN_ram_40014718();
  if (iVar1 != 0) {
    FUN_ram_40017914();
  }
  FUN_ram_4001783c();
  FUN_ram_40044572(_DAT_ram_30068c44);
  FUN_ram_40048dde(0);
  DAT_ram_300687b4 = 1;
  FUN_ram_40028bba(1);
  FUN_ram_40028ca8();
  return;
}


