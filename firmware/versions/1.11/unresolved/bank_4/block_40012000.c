/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40012000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400120c0.
 * REA evidence: ev_d41faf02bf8d8981bac98b06dfaae6f968aa6e7ab5cbbcbbf8e7336f28cb3abc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400120c0(void)

{
  FUN_ram_40011eaa();
  return;
}


/* NanoCore 1.11, address 0x400120c6.
 * REA evidence: ev_e8ac785e09912e505a59058444ed2c2ccec4de74be736003804f04e18c21dec8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400120c6(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  fence();
  fence();
  uVar1 = _DAT_ram_10200010 & _DAT_ram_10200014;
  if (uVar1 != 0) {
    if ((uVar1 & 0x80000) != 0) {
      fence();
      fence();
      puVar8 = &DAT_ram_3005e240;
      puVar6 = (uint *)&DAT_ram_102002c0;
      uVar7 = 0;
      for (uVar5 = (_DAT_ram_10200214 & _DAT_ram_10200218) >> 0x10; uVar5 != 0; uVar5 = uVar5 >> 1)
      {
        if ((uVar5 & 1) != 0) {
          fence();
          fence();
          uVar4 = *(uint *)(&DAT_ram_10200280 + (uVar7 & 0xff) * 4) & _DAT_ram_10200210;
          fence();
          puVar6[-0x10] = uVar4;
          if (uVar7 == 0) {
            FUN_ram_4001266c();
            if (_DAT_ram_3005e2e0 != 0) {
              FUN_ram_4000304c(_DAT_ram_3005e2dc,_DAT_ram_3005e2e0,_DAT_ram_3005e2e8);
            }
            if (DAT_ram_3005e220 == '\x01') {
              if ((uVar4 & 0x20) != 0) {
                FUN_ram_40010f90();
              }
              if ((uVar4 & 8) != 0) {
                if (_DAT_ram_3005e246 == 0) {
                  DAT_ram_3005e220 = '\r';
                }
                else if (DAT_ram_3005e240 < '\0') {
                  DAT_ram_3005e220 = '\x02';
                }
                else {
                  DAT_ram_3005e220 = '\f';
                }
                FUN_ram_4000f7d2(&DAT_ram_3005e240);
              }
            }
            else if ((uVar4 & 1) != 0) {
              if (_DAT_ram_3005e2e8 != 0) {
                _DAT_ram_3005e2ec = _DAT_ram_3005e2e8;
                _DAT_ram_3005e2e8 = 0;
                uVar4 = 0;
                goto LAB_ram_40012568;
              }
              FUN_ram_40010f90();
            }
          }
          else {
            FUN_ram_4001266c();
            if (*(int *)(puVar8 + 0xa0) != 0) {
              FUN_ram_4000304c(*(undefined4 *)(puVar8 + 0x9c),*(int *)(puVar8 + 0xa0),
                               *(undefined4 *)(puVar8 + 0xa8));
            }
            uVar2 = *puVar6;
            fence();
            iVar3 = *(int *)(puVar8 + 0xa8);
            uVar4 = uVar7 & 0xff;
            *(undefined4 *)(puVar8 + 0xa8) = 0;
            *(uint *)(puVar8 + 0xac) = iVar3 - (uVar2 & 0x7ffff);
LAB_ram_40012568:
            FUN_ram_4000ef58(uVar4);
          }
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 0x18;
      }
    }
    if ((uVar1 & 0x40000) != 0) {
      fence();
      fence();
      puVar8 = &DAT_ram_3005e240;
      puVar6 = (uint *)&DAT_ram_102002a0;
      uVar7 = 0;
      for (uVar5 = _DAT_ram_10200214 & _DAT_ram_10200218 & 0xffff; uVar5 != 0; uVar5 = uVar5 >> 1) {
        if ((uVar5 & 1) != 0) {
          fence();
          fence();
          uVar4 = *(uint *)(&DAT_ram_10200260 + (uVar7 & 0xff) * 4) & _DAT_ram_1020020c;
          fence();
          puVar6[-0x10] = uVar4;
          if ((uVar4 & 0x20) != 0) {
            FUN_ram_4003ff8a(100);
            FUN_ram_40011c64(uVar7 & 0xff);
          }
          if ((uVar4 & 1) != 0) {
            if (uVar7 == 0) {
              if ((_DAT_ram_3005e246 == 0) || (-1 < DAT_ram_3005e240)) {
                FUN_ram_40010f90();
                goto LAB_ram_400125fc;
              }
              uVar4 = 0x80;
              _DAT_ram_3005e274 = _DAT_ram_3005e270 - (_DAT_ram_102002a0 & 0x7ffff);
              _DAT_ram_3005e270 = 0;
            }
            else {
              uVar2 = *puVar6;
              fence();
              iVar3 = *(int *)(puVar8 + 0x30);
              uVar4 = uVar7 & 0xff | 0x80;
              *(undefined4 *)(puVar8 + 0x30) = 0;
              *(uint *)(puVar8 + 0x34) = iVar3 - (uVar2 & 0x7ffff);
            }
            FUN_ram_4000ef38(uVar4);
          }
        }
LAB_ram_400125fc:
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 0x18;
      }
    }
    if ((uVar1 & 0x1000) != 0) {
      fence();
      _DAT_ram_10200010 = 0x1000;
      fence();
      fence();
      _DAT_ram_10200204 = _DAT_ram_10200204 & 0xfffffffe;
      FUN_ram_4001165c();
    }
    if ((uVar1 & 0x2000) != 0) {
      fence();
      _DAT_ram_10200010 = 0x2000;
      fence();
      iVar3 = 9;
      if (((((((_DAT_ram_10200208 & 6) == 2) &&
             (iVar3 = 0xf, 799999 < _DAT_ram_3005e7a0 - 14200000U)) &&
            (iVar3 = 0xe, 999999 < _DAT_ram_3005e7a0 - 15000000U)) &&
           ((iVar3 = 0xd, 1199999 < _DAT_ram_3005e7a0 - 16000000U &&
            (iVar3 = 0xc, 1299999 < _DAT_ram_3005e7a0 + 0xfef98c80U)))) &&
          ((iVar3 = 0xb, 1499999 < _DAT_ram_3005e7a0 + 0xfee5b660U &&
           ((iVar3 = 10, 1799999 < _DAT_ram_3005e7a0 + 0xfeced300U &&
            (iVar3 = 9, 2199999 < _DAT_ram_3005e7a0 + 0xfeb35bc0U)))))) &&
         ((iVar3 = 8, 3699999 < _DAT_ram_3005e7a0 + 0xfe91ca00U &&
          (iVar3 = 7, 4299999 < _DAT_ram_3005e7a0 + 0xfe5954e0U)))) {
        iVar3 = 6;
      }
      fence();
      fence();
      _DAT_ram_10200008 = iVar3 << 10 | _DAT_ram_10200008 & 0xffffc3ff | 7;
      fence();
      fence();
      _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
    }
    if ((uVar1 & 0x200000) != 0) {
      fence();
      uVar7 = _DAT_ram_10200218 >> 0x10;
      puVar8 = &DAT_ram_3005e240;
      uVar5 = 1;
      do {
        if (((~uVar7 >> (uVar5 & 0x1f) & 1) == 0) && (puVar8[0xb2] == '\x01')) {
          uVar4 = *(uint *)(&DAT_ram_10200240 + uVar5 * 4);
          fence();
          if ((uVar4 & 0x8000) != 0) {
            fence();
            if ((_DAT_ram_10200208 & 0x100) == 0) {
              uVar4 = uVar4 & 0xefffffff | 0x20000000;
            }
            else {
              uVar4 = uVar4 & 0xdfffffff | 0x10000000;
            }
            fence();
            *(uint *)(&DAT_ram_10200240 + uVar5 * 4) = uVar4;
          }
        }
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 0x18;
      } while (uVar5 != 5);
      fence();
      _DAT_ram_10200010 = 0x200000;
    }
    if ((uVar1 & 0x100000) != 0) {
      fence();
      uVar7 = _DAT_ram_10200218 & 0xffff;
      puVar8 = &DAT_ram_3005e240;
      uVar5 = 1;
      do {
        if (((~uVar7 >> (uVar5 & 0x1f) & 1) == 0) && (puVar8[0x3a] == '\x01')) {
          uVar4 = *(uint *)(&DAT_ram_10200220 + uVar5 * 4);
          fence();
          if ((uVar4 & 0x8000) != 0) {
            fence();
            if ((_DAT_ram_10200208 & 0x100) == 0) {
              uVar4 = uVar4 & 0xefffffff | 0x20000000;
            }
            else {
              uVar4 = uVar4 & 0xdfffffff | 0x10000000;
            }
            fence();
            *(uint *)(&DAT_ram_10200220 + uVar5 * 4) = uVar4;
          }
        }
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 0x18;
      } while (uVar5 != 5);
      fence();
      _DAT_ram_10200010 = 0x100000;
    }
    if ((uVar1 & 8) != 0) {
      fence();
      _DAT_ram_10200010 = 8;
    }
    if ((uVar1 & 0x800) != 0) {
      fence();
      _DAT_ram_10200010 = 0x800;
      FUN_ram_4000f046();
    }
    if ((int)uVar1 < 0) {
      fence();
      _DAT_ram_10200010 = 0x80000000;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4001265c.
 * REA evidence: ev_60d4c02a1f0a2bf9cc88dd8ce361aeb2f3ac05ef0cf6fee7d540ce52e1fd54cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001265c(void)

{
  FUN_ram_400120c6();
  return 1;
}


/* NanoCore 1.11, address 0x4001266c.
 * REA evidence: ev_fdfd56e1e8502a3d4731aca2de908c92eaf603d56b2021fc85dd6510b1e854ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001266c(void)

{
  undefined4 in_t0;
  
  _DAT_ram_3005e780 = in_t0;
  fence();
  custom0();
  custom0();
  fence();
  custom0();
  return;
}


/* NanoCore 1.11, address 0x4001268e.
 * REA evidence: ev_480fb814d8e4eca993373459e70d1b70f4cd30e973570dfd7d6c0f09eebc2344
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001268e(void)

{
  uint uVar1;
  
  uVar1 = (_DAT_ram_20800004 & 0x1ffffff) >> 0x15;
  if (7 < uVar1 - 1) {
    uVar1 = 2;
  }
  FUN_ram_4003e098(0);
  FUN_ram_400378d0(0x14);
  FUN_ram_400378d0(0x12);
  FUN_ram_4003ff8a(300);
  FUN_ram_4003888a(4);
  FUN_ram_4003888a(2);
  FUN_ram_4003ff8a(300);
  FUN_ram_400388ca(4);
  FUN_ram_400388ca(2);
  FUN_ram_4003ff8a(300);
  _DAT_ram_3005e7a0 = FUN_ram_400379fe(0x12);
  FUN_ram_4003fbd6(0x22,FUN_ram_4001265c,0);
  FUN_ram_4003fb8e(0x22);
  uVar1 = (1 << uVar1) - 1;
  if (3 < uVar1) {
    uVar1 = 3;
  }
  DAT_ram_2080108b =
       (byte)(uVar1 << (8 - ((_DAT_ram_20800004 & 0x1ffffff) >> 0x15) & 0x1f)) |
       DAT_ram_2080108b & 0x1f;
  FUN_ram_4003fb8e(0x22);
  return;
}


/* NanoCore 1.11, address 0x40012760.
 * REA evidence: ev_886f9d083866240456328c0c428da34ad7be3ab2a7f98f62d76a07a02fa7583d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012760(void)

{
  FUN_ram_4003fbb4(0x22);
  FUN_ram_4003888a(4);
  FUN_ram_4003888a(2);
  FUN_ram_400378f4(0x14);
  FUN_ram_400378f4(0x12);
  return;
}


/* NanoCore 1.11, address 0x40012788.
 * REA evidence: ev_fcac966c79aa75880e77279ed155f6a44927458f5c9ec737f4e8942917aa3f63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012788(void)

{
  uint uVar1;
  
  FUN_ram_40012cb4();
  FUN_ram_4004304e();
  FUN_ram_40056ca8(FUN_ram_40004378);
  FUN_ram_400129ee();
  FUN_ram_40012cb6();
  do {
    uVar1 = FUN_ram_4004c646();
    FUN_ram_40012c76();
    if (uVar1 < 8) {
      uVar1 = 8;
    }
    if (0x10 < uVar1) {
      uVar1 = 0x10;
    }
    FUN_ram_400065c6(uVar1);
  } while( true );
}


/* NanoCore 1.11, address 0x400127c6.
 * REA evidence: ev_be00b1c7ded56eef65b06c92898d0496e6eb6e52cd33057dfda538429dd0cdbe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400127c6(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4000642e(0x3005e7a4,&DAT_ram_40094b1c,FUN_ram_40012788,0,0x3005e834,0x8000,0x14,10
                          );
  uVar1 = 0xffffffff;
  if (iVar2 == 0) {
    FUN_ram_40006632(0x3005e7a4);
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40012814.
 * REA evidence: ev_c28709133f427305c0dfb548cbd14f1d2b4d15eadf878fb7230f4d150fb7b21b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40012826) */

int FUN_ram_40012814(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + (param_1 & 0x1f);
  if ((uVar2 & 0x1f) != 0) {
    uVar2 = uVar2 + (0x20 - (int)uVar2 % 0x20);
  }
  fence();
  custom0();
  iVar1 = (param_1 & 0xffffffe0) + uVar2;
  for (; 0 < (int)uVar2; uVar2 = uVar2 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  return iVar1;
}


/* NanoCore 1.11, address 0x40012852.
 * REA evidence: ev_34be8c7ae5c8d8bf288bc495fa5fa1663fb361088e5c0ba17183d76f872a7fa2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012852(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint auStack_24 [3];
  
  puVar1 = (undefined4 *)FUN_ram_4004d484();
  iVar2 = FUN_ram_4004d496(param_1);
  iVar3 = FUN_ram_4004d336(param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == puVar1[0xd]) {
      puVar1[0x10] = (uint)((int)puVar1[0x10] < 1);
      FUN_ram_40012814(iVar3,puVar1[0xe] + 0x1f & 0xffffffe0);
      while ((*(char *)((int)puVar1 + 0x2d) == '\0' && (*(char *)(puVar1 + 0xb) == '\0'))) {
        FUN_ram_4005aae2(puVar1 + 10);
      }
      *(undefined1 *)((int)puVar1 + 0x2d) = 0;
      iVar3 = puVar1[6];
      if (puVar1[0x10] == 1) {
        iVar3 = iVar3 + puVar1[0xf];
      }
      uVar4 = FUN_ram_4004d1dc(param_1);
      uVar5 = FUN_ram_4004d1fe(param_1);
      uVar6 = FUN_ram_4004d26a(param_1);
      uVar7 = FUN_ram_4004d9f0(uVar4,uVar6);
      uVar9 = puVar1[3];
      uVar8 = FUN_ram_4004d410(param_1);
      FUN_ram_4004fa40(*(undefined4 *)(iVar2 + 0x10),iVar3,uVar4,uVar5,uVar7,uVar9,uVar8,uVar6);
      FUN_ram_4005acba(*puVar1,0x4643,puVar1 + 0x10);
      *(undefined1 *)((int)puVar1 + 0x2e) = 1;
      FUN_ram_4005aaf8(puVar1 + 9);
    }
    else {
      FUN_ram_40012814(iVar3,puVar1[0xf] + 0x1f & 0xffffffe0);
      auStack_24[0] = (uint)(*(int *)(iVar2 + 0x10) != puVar1[6]);
      FUN_ram_4005acba(*puVar1,0x4643,auStack_24);
      if (DAT_ram_30049d98 != '\0') {
        FUN_ram_4005acba(*puVar1,0x4663,0);
        DAT_ram_30049d98 = '\0';
      }
      FUN_ram_4005acba(*puVar1,0x4620,0);
    }
    if (_DAT_ram_30066838 == 0) {
      _DAT_ram_30066838 = 1;
      _DAT_ram_30066840 = FUN_ram_4003fffe();
      _DAT_ram_30066844 = _DAT_ram_30066840 >> 0x1f;
    }
    iVar2 = FUN_ram_4003fffe();
    if (iVar2 - _DAT_ram_30066840 < 1000000) {
      _DAT_ram_30066834 = _DAT_ram_30066834 + 1;
    }
    else {
      puVar1[0x11] = _DAT_ram_30066834;
      _DAT_ram_30066834 = 0;
      _DAT_ram_30066838 = 0;
    }
  }
  FUN_ram_4004d330(param_1);
  return;
}


/* NanoCore 1.11, address 0x400129ee.
 * REA evidence: ev_30eb488d599312f8b5634731ef744de6a84ba7ac4967cab652e9aa4189d0f12a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400129ee(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  
  iVar4 = FUN_ram_40041a16(s_PD_23_ram_40094b24);
  if (-1 < iVar4) {
    FUN_ram_400419de(iVar4,0);
    FUN_ram_400419f2(iVar4,1);
    FUN_ram_400065c6(1);
    FUN_ram_400419f2(iVar4,0);
    FUN_ram_400065c6(10);
    FUN_ram_400419f2(iVar4,1);
    FUN_ram_400065c6(0x32);
  }
  piVar5 = (int *)FUN_ram_4005ab2e(0x48);
  if (piVar5 != (int *)0x0) {
    iVar4 = FUN_ram_4005ac68();
    *piVar5 = iVar4;
    if (iVar4 != 0) {
      FUN_ram_4005acba(iVar4,0x4662,piVar5 + 1);
      iVar11 = piVar5[5];
      iVar4 = piVar5[6];
      uVar9 = iVar11 * piVar5[3];
      iVar12 = piVar5[4];
      cVar10 = '\x10';
      piVar5[0xf] = uVar9;
      if (piVar5[1] - 4U < 0xb) {
        cVar10 = s_PD_23_ram_40094b24[piVar5[1] + 4];
      }
      iVar1 = uVar9 * 2;
      if ((iVar4 != 0) && (iVar1 != 0)) {
        iVar7 = FUN_ram_4004ad00(cVar10);
        uVar3 = FUN_ram_40014984();
        if (iVar7 == 0x10) {
          uVar2 = FUN_ram_4004ad60(uVar3);
          for (uVar8 = 0; (uVar9 & 0x7fffffff) != uVar8; uVar8 = uVar8 + 1) {
            *(undefined2 *)(iVar4 + uVar8 * 2) = uVar2;
          }
        }
        else if (iVar7 == 0x20) {
          uVar6 = FUN_ram_4004ad84(uVar3);
          for (uVar8 = 0; (uVar9 & 0x7fffffff) >> 1 != uVar8; uVar8 = uVar8 + 1) {
            *(undefined4 *)(iVar4 + uVar8 * 4) = uVar6;
          }
        }
        else {
          memset(iVar4,0,iVar1);
        }
      }
      FUN_ram_40012814(piVar5[6],iVar1 + 0x1fU & 0xffffffe0);
      uVar6 = FUN_ram_4004d04a(iVar12,iVar11);
      FUN_ram_4004d3ec(uVar6,cVar10);
      FUN_ram_4004d25a(uVar6,FUN_ram_40012852);
      FUN_ram_4004d472(uVar6,piVar5);
      FUN_ram_4004d280(uVar6,iVar4 + uVar9,iVar4,uVar9,1);
      return;
    }
    FUN_ram_4005ab56(piVar5);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40012bc2.
 * REA evidence: ev_0ea62f210148a3137a6f1087f5649e0d3da2f48b768a554338479ff9e8a54443
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012bc2(void)

{
  int iVar1;
  
  FUN_ram_400042ea();
  if ((_DAT_ram_30066854 == 0) && (iVar1 = FUN_ram_4002c24a(), iVar1 == 0)) {
    _DAT_ram_30066854 = 1;
  }
  FUN_ram_400190c8();
  return;
}


/* NanoCore 1.11, address 0x40012bf0.
 * REA evidence: ev_6b99733d2a513f8edc37be8976c2716e0c868a89c7f9fe336f26a1d75deb3306
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012bf0(void)

{
  int iVar1;
  
  if (_DAT_ram_3006684c == 0) {
    _DAT_ram_3006684c = 1;
    FUN_ram_4002b94a();
    if ((_DAT_ram_30066850 == 0) &&
       (iVar1 = FUN_ram_400064b8(s_ui_preload_ram_40094b38,&LAB_ram_40012b96,0,0x2000,0x1d,10),
       iVar1 != 0)) {
      _DAT_ram_30066850 = 1;
      FUN_ram_40006632();
    }
    iVar1 = FUN_ram_40015ffa(&LAB_ram_40012bec);
    if (iVar1 != 0) {
      FUN_ram_40012bc2();
      FUN_ram_40049d50(0);
    }
    FUN_ram_4003f640(1);
    FUN_ram_400065c6(0x1e);
    FUN_ram_40049d50(0);
    FUN_ram_4003f5f4(1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40012c76.
 * REA evidence: ev_0efb76f1560993dd9343c27ad0e7d8ccc6c4676d3d5552396732053207e70c50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012c76(void)

{
  uint uVar1;
  
  FUN_ram_40029028(1);
  FUN_ram_4002d8dc();
  uVar1 = FUN_ram_4002ce9c();
  if ((_DAT_ram_30066848 != 0) && ((uVar1 & 0xfffffffb) == 1)) {
    _DAT_ram_30066848 = 0;
    FUN_ram_4002d874();
    FUN_ram_40012bf0();
  }
  FUN_ram_40012f6e();
  FUN_ram_4002f1e2();
  return;
}


/* NanoCore 1.11, address 0x40012cb4.
 * REA evidence: ev_2f464f14fa921149537daf7e26a2553b5c4f3a6ada3859020638aef1cc3e5c8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012cb4(void)

{
  return;
}


/* NanoCore 1.11, address 0x40012cb6.
 * REA evidence: ev_e1eb07c4fc00f9f91b70f58358224f4ba56400bd877d5677b4e829bca4af44d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012cb6(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002d14a(0x28a);
  if (2 < iVar1 - 2U) {
    FUN_ram_40012bf0();
    return;
  }
  _DAT_ram_30066848 = 1;
  iVar1 = FUN_ram_4002d524();
  if (iVar1 == 0) {
    FUN_ram_40049d50();
    FUN_ram_4003f640(1);
    FUN_ram_400065c6(0x1e);
    FUN_ram_40049d50(0);
    FUN_ram_4003f5f4(1);
    FUN_ram_40029058(1);
    FUN_ram_40029146();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40012d14.
 * REA evidence: ev_751f7b1e125d19e6548760a00c7c0e2e9080ff30dfce8c1d2d67dc141f78aac9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40012d14(void)

{
  FUN_ram_40029192();
  FUN_ram_4002900a(3);
  return 0;
}


/* NanoCore 1.11, address 0x40012d2a.
 * REA evidence: ev_cb0bc17e3b150d6ec412fb97bc68b16069bd9c0a1945d3956023eea86033240f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40012d2a(void)

{
  FUN_ram_4002ccae(1);
  return 0;
}


/* NanoCore 1.11, address 0x40012d3c.
 * REA evidence: ev_50e8b635138e2e76c806148afa4f80c852d118a35811493afe8a089645bf168e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012d3c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_ram_4003f228();
  iVar3 = FUN_ram_4003f250();
  iVar4 = FUN_ram_4003f278();
  iVar5 = FUN_ram_4003f2a0();
  iVar6 = FUN_ram_4003f2c8();
  sVar1 = FUN_ram_4003f8f2();
  if (_DAT_ram_30066858 != 0 || sVar1 != 0) {
    FUN_ram_400190a2();
  }
  _DAT_ram_30066858 = sVar1;
  if (iVar3 != 0) {
    FUN_ram_4001900c(iVar3);
  }
  if (iVar2 != 0) {
    FUN_ram_40017c42(iVar2);
  }
  for (; 0 < iVar5; iVar5 = iVar5 + -1) {
    FUN_ram_4001904c();
  }
  for (; 0 < iVar4; iVar4 = iVar4 + -1) {
    FUN_ram_4001906a();
  }
  if (0 < iVar6) {
    FUN_ram_40019088();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40012de8.
 * REA evidence: ev_e9040a083c36fb80b8aab92fbb2c820dfaab164036a746ad825ae92be7604008
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012de8(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 2;
    FUN_ram_4003f992();
    FUN_ram_4003f2f0();
    if (3 < uVar1) {
      FUN_ram_40012d3c();
      uVar1 = 0;
    }
    FUN_ram_400065c6(2);
  } while( true );
}


/* NanoCore 1.11, address 0x40012e10.
 * REA evidence: ev_e4519727d89e499ea0b45528187b33f9f1995bc09e556fe02d575f0af4e423e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012e10(void)

{
  FUN_ram_4000deac();
  FUN_ram_4002268c();
  FUN_ram_4002cc6c();
  return;
}


/* NanoCore 1.11, address 0x40012e24.
 * REA evidence: ev_2a58a67ee46dd005063c14c1a543dc5bfc89dd17ee51cc6bb756e86262267292
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40012e24(void)

{
  int iVar1;
  
  FUN_ram_4003f68c();
  FUN_ram_4003f402();
  FUN_ram_40022682();
  FUN_ram_4000de74();
  FUN_ram_400127c6();
  nc_radio_uart5_init();
  FUN_ram_4002cabe();
  iVar1 = FUN_ram_400064b8(s_enc_poll_ram_40094b44,FUN_ram_40012de8,0,0x800,0x1d,10);
  if (iVar1 != 0) {
    FUN_ram_40006632();
  }
  FUN_ram_40012d3c();
  return 0;
}


/* NanoCore 1.11, address 0x40012e7e.
 * REA evidence: ev_4c2fee1a96776e6e21d76075e91b6f9e128470a23b590917a6dab23fbba44200
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012e7e(void)

{
  FUN_ram_4002ddae(&DAT_ram_40094b50);
  FUN_ram_4002ddda();
  return;
}


/* NanoCore 1.11, address 0x40012e9e.
 * REA evidence: ev_d3c0336c1adc82bea489872778e28d3452960f05b5b5b26fdb08b9735e0ae471
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40012e9e(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = FUN_ram_4000dbf8();
  iVar1 = -1;
  if (iVar4 == 0) {
    iVar1 = FUN_ram_4000bf3e(param_1);
    FUN_ram_4000dc48();
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_ram_4001da88();
      uVar3 = thunk_FUN_ram_4001daac();
      thunk_FUN_ram_4001db6a(uVar2,param_1,uVar3);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40012ee6.
 * REA evidence: ev_39511de2b942c9f03e9a1e1fb87d5da826be03260b3e2aee83c30b64486c4889
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40012ee6(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = FUN_ram_4000dbf8();
  iVar1 = -1;
  if (iVar4 == 0) {
    iVar1 = FUN_ram_4000bb6a(param_1,0,0);
    FUN_ram_4000dc48();
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_ram_4001da9a();
      uVar3 = thunk_FUN_ram_4001daac();
      thunk_FUN_ram_4001db6a(param_1,uVar2,uVar3);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40012f6e.
 * REA evidence: ev_97027aed6a67714867f672a6172346ccdf6f669ef213ea35c8d53ff87b2be929
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012f6e(void)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _DAT_ram_30066870 = _DAT_ram_30066870 + 1;
  if (DAT_ram_30066864 != '\0') {
    DAT_ram_30066864 = 0;
    _DAT_ram_30066868 = _DAT_ram_30066868 + 1;
    uStack_18 = _DAT_ram_3006685c;
    uStack_14 = _DAT_ram_30066860;
    FUN_ram_40018040(&uStack_18,8);
    FUN_ram_40049d50(0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40012fc6.
 * REA evidence: ev_fc80e4ae8fa7ba2ac4cfa481e18c210a112e851dc5d4a5945f22a44419b5444d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012fc6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_4002fc02(&DAT_ram_40094bd4,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.11, address 0x40012ff6.
 * REA evidence: ev_a6d5fc3fd4572549788b2988dfdfca4eb05a426f69723d6d40258c32ba92767b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40012ff6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_4002fb72(&DAT_ram_40094bd4,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


