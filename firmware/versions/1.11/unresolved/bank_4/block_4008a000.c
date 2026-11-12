/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4008a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4008a00a.
 * REA evidence: ev_f210d01eee26ea44c0a280adf94cb1d6084f1cc293ef591751d8ce7542a6172a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008a00a(void)

{
  int iVar1;
  
  if ((_DAT_ram_3008b8c0 == 0) &&
     (iVar1 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1), iVar1 == 0)) {
    _DAT_ram_3008b8c0 = 1;
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4008a04c.
 * REA evidence: ev_0f2341fe52c02086d7a19db9e2ad15d35fc375f6ec1541bb83c6af4638a390f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008a04c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008a060;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008a060;
  }
  else {
LAB_ram_4008a060:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  if ((_DAT_ram_3008afdc & 0xff) != 0) {
    uVar1 = DAT_ram_3008afde;
    iVar3 = FUN_ram_400933f0();
    if (((iVar3 == 0) || (*(code **)(iVar3 + 0x38) == (code *)0x0)) ||
       (iVar3 = (**(code **)(iVar3 + 0x38))(0,uVar1), iVar3 != 0)) {
      uVar2 = 0xffffffff;
      goto LAB_ram_4008a0bc;
    }
  }
  _DAT_ram_3008afdc = 0;
  _DAT_ram_3008afe0 = 0;
  _DAT_ram_3008afe4 = 0;
  _DAT_ram_3008afe8 = 0;
  _DAT_ram_3008afec = 0;
  uVar2 = 0;
LAB_ram_4008a0bc:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
    return uVar2;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4008a10c.
 * REA evidence: ev_76f02402bdc11e3c3b43f8cef461a80130aa7ac30afb86b9f96c21aa31f8b522
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008a10c(uint param_1,int param_2,uint param_3,uint *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  uint uStack_39c;
  uint uStack_398;
  uint uStack_394;
  uint auStack_390 [32];
  undefined4 uStack_310;
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  uint uStack_2d4;
  undefined1 auStack_2d0 [60];
  uint auStack_294 [9];
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [60];
  uint auStack_214 [33];
  uint auStack_190 [32];
  undefined1 auStack_110 [220];
  
  *param_4 = 0;
  uVar2 = _DAT_ram_30084f90;
  if ((param_2 != 0) && (uVar10 = 0xffffffff, 0x3b < param_1)) {
    if ((_DAT_ram_30084f78 == 0x46504153) &&
       ((DAT_ram_30084f7c == '\x01' && (param_1 == _DAT_ram_30084f90 + 0x3c)))) {
      if ((_DAT_ram_30084f90 == 0) || (param_3 < _DAT_ram_30084f90)) {
        uVar10 = 0xfffffffd;
      }
      else {
        memset(auStack_270,0,0x60);
        auStack_294[2] = DAT_ram_4009b394;
        auStack_294[3] = DAT_ram_4009b398;
        auStack_294[1] = DAT_ram_4009b390;
        auStack_294[6] = DAT_ram_4009b3a4;
        auStack_294[4] = DAT_ram_4009b39c;
        auStack_294[5] = DAT_ram_4009b3a0;
        auStack_294[7] = DAT_ram_4009b3a8;
        auStack_294[8] = DAT_ram_4009b3ac;
        iVar6 = 1;
        do {
          auStack_214[iVar6] = auStack_294[iVar6] ^ 0x36363636;
          auStack_214[iVar6 + 0x20] = auStack_294[iVar6] ^ 0x5c5c5c5c;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x21);
        FUN_ram_40085500(auStack_110);
        FUN_ram_400855c4(auStack_110,auStack_214 + 1,0x80);
        FUN_ram_400855c4(auStack_110,&DAT_ram_4009b3c4,3);
        FUN_ram_4008574c(auStack_110,auStack_2d0);
        FUN_ram_40085500(auStack_110);
        FUN_ram_400855c4(auStack_110,auStack_214 + 0x21,0x80);
        FUN_ram_400855c4(auStack_110,auStack_2d0,0x40);
        FUN_ram_4008574c(auStack_110,auStack_390);
        memset(auStack_270,0,0x60);
        auStack_294[2] = DAT_ram_4009b394;
        auStack_294[3] = DAT_ram_4009b398;
        auStack_294[1] = DAT_ram_4009b390;
        auStack_294[6] = DAT_ram_4009b3a4;
        auStack_294[4] = DAT_ram_4009b39c;
        auStack_294[5] = DAT_ram_4009b3a0;
        auStack_294[7] = DAT_ram_4009b3a8;
        auStack_294[8] = DAT_ram_4009b3ac;
        iVar6 = 1;
        do {
          auStack_214[iVar6] = auStack_294[iVar6] ^ 0x36363636;
          auStack_214[iVar6 + 0x20] = auStack_294[iVar6] ^ 0x5c5c5c5c;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x21);
        FUN_ram_40085500(auStack_110);
        FUN_ram_400855c4(auStack_110,auStack_214 + 1,0x80);
        FUN_ram_400855c4(auStack_110,&DAT_ram_4009b3dc,3);
        FUN_ram_4008574c(auStack_110,auStack_2d0);
        FUN_ram_40085500(auStack_110);
        FUN_ram_400855c4(auStack_110,auStack_214 + 0x21,0x80);
        FUN_ram_400855c4(auStack_110,auStack_2d0,0x40);
        puVar13 = auStack_390 + 0x10;
        FUN_ram_4008574c(auStack_110,puVar13);
        memset(auStack_250,0,0x40);
        puVar11 = auStack_294 + 1;
        puVar12 = puVar13;
        do {
          uVar3 = puVar12[1];
          uVar4 = puVar12[2];
          uVar7 = puVar12[3];
          *puVar11 = *puVar12;
          puVar11[1] = uVar3;
          puVar11[2] = uVar4;
          puVar11[3] = uVar7;
          puVar12 = puVar12 + 4;
          puVar11 = puVar11 + 4;
        } while (&uStack_310 != puVar12);
        iVar6 = 1;
        do {
          auStack_214[iVar6] = auStack_294[iVar6] ^ 0x36363636;
          auStack_214[iVar6 + 0x20] = auStack_294[iVar6] ^ 0x5c5c5c5c;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x21);
        FUN_ram_40085500(auStack_110);
        FUN_ram_400855c4(auStack_110,auStack_214 + 1,0x80);
        FUN_ram_400855c4(auStack_110,&DAT_ram_30084f78,0x1c);
        FUN_ram_400855c4(auStack_110,0x30084f94,uVar2);
        FUN_ram_4008574c(auStack_110,auStack_2d0);
        FUN_ram_40085500(auStack_110);
        FUN_ram_400855c4(auStack_110,auStack_214 + 0x21,0x80);
        FUN_ram_400855c4(auStack_110,auStack_2d0,0x40);
        FUN_ram_4008574c(auStack_110,&uStack_310);
        uStack_3b0 = uStack_310;
        uStack_3ac = uStack_30c;
        uStack_3a8 = uStack_308;
        uStack_3a4 = uStack_304;
        uStack_3a0 = uStack_300;
        uStack_39c = uStack_2fc;
        uStack_398 = uStack_2f8;
        uStack_394 = uStack_2f4;
        if ((uVar2 + 0x30084f94 & 3) == 0) {
          uVar3 = uStack_310 ^ *(uint *)(uVar2 + 0x30084f94) |
                  uStack_30c ^ *(uint *)(uVar2 + 0x30084f98) |
                  uStack_308 ^ *(uint *)(uVar2 + 0x30084f9c) |
                  uStack_304 ^ *(uint *)(uVar2 + 0x30084fa0) |
                  uStack_300 ^ *(uint *)(uVar2 + 0x30084fa4) |
                  uStack_2fc ^ *(uint *)(uVar2 + 0x30084fa8) |
                  uStack_2f8 ^ *(uint *)(uVar2 + 0x30084fac) |
                  uStack_2f4 ^ *(uint *)(uVar2 + 0x30084fb0);
          uVar3 = uVar3 >> 0x18 | (uVar3 & 0xffff) >> 8 | uVar3 & 0xff | (uVar3 & 0xffffff) >> 0x10;
        }
        else {
          iVar6 = 1;
          uVar3 = 0;
          do {
            iVar9 = iVar6 + 3;
            pbVar1 = (byte *)(uVar2 + 0x30084f93 + iVar6);
            iVar6 = iVar6 + 1;
            uVar3 = uVar3 | *pbVar1 ^ *(byte *)((int)&uStack_3b4 + iVar9);
          } while (iVar6 != 0x21);
        }
        uVar10 = 0xfffffffe;
        if (uVar3 == 0) {
          uStack_3c4 = _DAT_ram_30084f80;
          iVar6 = 0;
          uVar3 = 0;
          uStack_3c0 = _DAT_ram_30084f84;
          uStack_3bc = _DAT_ram_30084f88;
          uStack_3b8 = _DAT_ram_30084f8c;
          do {
            uStack_3b4 = iVar6;
            memset(auStack_250,0,0x40);
            uVar4 = uVar2 - uVar3;
            puVar11 = auStack_390;
            puVar12 = auStack_294 + 1;
            do {
              uVar7 = puVar11[1];
              uVar5 = puVar11[2];
              uVar8 = puVar11[3];
              *puVar12 = *puVar11;
              puVar12[1] = uVar7;
              puVar12[2] = uVar5;
              puVar12[3] = uVar8;
              puVar11 = puVar11 + 4;
              puVar12 = puVar12 + 4;
            } while (puVar11 != puVar13);
            iVar9 = 1;
            do {
              auStack_214[iVar9] = auStack_294[iVar9] ^ 0x36363636;
              auStack_214[iVar9 + 0x20] = auStack_294[iVar9] ^ 0x5c5c5c5c;
              iVar9 = iVar9 + 1;
            } while (iVar9 != 0x21);
            FUN_ram_40085500(auStack_110);
            FUN_ram_400855c4(auStack_110,auStack_214 + 1,0x80);
            FUN_ram_400855c4(auStack_110,&uStack_3c4,0x14);
            FUN_ram_4008574c(auStack_110,auStack_2d0);
            FUN_ram_40085500(auStack_110);
            FUN_ram_400855c4(auStack_110,auStack_214 + 0x21,0x80);
            FUN_ram_400855c4(auStack_110,auStack_2d0,0x40);
            FUN_ram_4008574c(auStack_110,&uStack_310);
            if (0x40 < uVar4) {
              uVar4 = 0x40;
            }
            puVar12 = (uint *)(param_2 + uVar3);
            if (((int)puVar12 - (uVar3 + 0x30084f95) < 3 || uVar4 - 1 < 5) ||
               ((((uint)puVar12 | uVar3 + 0x30084f94) & 3) != 0)) {
              uVar7 = uVar3;
              do {
                *(byte *)(param_2 + uVar7) =
                     *(byte *)((int)&uStack_310 + (uVar7 - uVar3)) ^ *(byte *)(uVar7 + 0x30084f94);
                uVar7 = uVar7 + 1;
              } while (uVar7 != uVar4 + uVar3);
            }
            else {
              uVar7 = uVar4 >> 2;
              *puVar12 = *(uint *)(uVar3 + 0x30084f94) ^ uStack_310;
              if (((((uVar7 == 1) ||
                    (puVar12[1] = *(uint *)(uVar3 + 0x30084f98) ^ uStack_30c, uVar7 == 2)) ||
                   (puVar12[2] = *(uint *)(uVar3 + 0x30084f9c) ^ uStack_308, uVar7 == 3)) ||
                  (((puVar12[3] = *(uint *)(uVar3 + 0x30084fa0) ^ uStack_304, uVar7 == 4 ||
                    (puVar12[4] = *(uint *)(uVar3 + 0x30084fa4) ^ uStack_300, uVar7 == 5)) ||
                   ((puVar12[5] = *(uint *)(uVar3 + 0x30084fa8) ^ uStack_2fc, uVar7 == 6 ||
                    ((puVar12[6] = *(uint *)(uVar3 + 0x30084fac) ^ uStack_2f8, uVar7 == 7 ||
                     (puVar12[7] = *(uint *)(uVar3 + 0x30084fb0) ^ uStack_2f4, uVar7 == 8)))))))) ||
                 ((puVar12[8] = *(uint *)(uVar3 + 0x30084fb4) ^ uStack_2f0, uVar7 == 9 ||
                  (((((puVar12[9] = *(uint *)(uVar3 + 0x30084fb8) ^ uStack_2ec, uVar7 == 10 ||
                      (puVar12[10] = *(uint *)(uVar3 + 0x30084fbc) ^ uStack_2e8, uVar7 == 0xb)) ||
                     (puVar12[0xb] = *(uint *)(uVar3 + 0x30084fc0) ^ uStack_2e4, uVar7 == 0xc)) ||
                    ((puVar12[0xc] = *(uint *)(uVar3 + 0x30084fc4) ^ uStack_2e0, uVar7 == 0xd ||
                     (puVar12[0xd] = *(uint *)(uVar3 + 0x30084fc8) ^ uStack_2dc, uVar7 == 0xe)))) ||
                   (puVar12[0xe] = uStack_2d8 ^ *(uint *)(uVar3 + 0x30084fcc), uVar7 != 0x10)))))) {
                uVar7 = uVar4 & 0xfffffffc;
                if (uVar4 != uVar7) {
                  uVar5 = uVar7 + 1;
                  *(byte *)(param_2 + uVar7 + uVar3) =
                       *(byte *)(uVar7 + uVar3 + 0x30084f94) ^ *(byte *)((int)&uStack_310 + uVar7);
                  if (uVar5 < uVar4) {
                    uVar7 = uVar7 + 2;
                    *(byte *)(param_2 + uVar5 + uVar3) =
                         *(byte *)(uVar5 + uVar3 + 0x30084f94) ^ *(byte *)((int)&uStack_310 + uVar5)
                    ;
                    if (uVar7 < uVar4) {
                      *(byte *)(param_2 + uVar7 + uVar3) =
                           *(byte *)((int)&uStack_310 + uVar7) ^
                           *(byte *)(uVar7 + uVar3 + 0x30084f94);
                    }
                  }
                }
              }
              else {
                puVar12[0xf] = *(uint *)(uVar3 + 0x30084fd0) ^ uStack_2d4;
              }
            }
            uVar3 = uVar4 + uVar3;
            iVar6 = iVar6 + 1;
          } while (uVar3 < uVar2);
          uVar10 = 0;
          *param_4 = uVar2;
        }
      }
    }
    return uVar10;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4008a122.
 * REA evidence: ev_4d62400a0a0d3b2f2849302dbd7e7b66247bd24ef86cb8a225800c1a37808c52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008a122(int param_1,int param_2,uint param_3,uint *param_4,undefined4 param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  uint uStack_39c;
  uint uStack_398;
  uint uStack_394;
  uint local_390 [32];
  undefined4 local_310;
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  uint uStack_2d4;
  undefined1 auStack_2d0 [60];
  uint auStack_294 [9];
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [60];
  uint auStack_214 [33];
  uint auStack_190 [32];
  undefined1 auStack_110 [220];
  
  uVar2 = _DAT_ram_30084f90;
  if (((_DAT_ram_30084f78 == 0x46504153) && (DAT_ram_30084f7c == '\x01')) &&
     (param_1 == _DAT_ram_30084f90 + 0x3c)) {
    if ((_DAT_ram_30084f90 == 0) || (param_3 < _DAT_ram_30084f90)) {
      param_5 = 0xfffffffd;
    }
    else {
      memset(auStack_270,0,0x60);
      auStack_294[2] = DAT_ram_4009b394;
      auStack_294[3] = DAT_ram_4009b398;
      auStack_294[1] = DAT_ram_4009b390;
      auStack_294[6] = DAT_ram_4009b3a4;
      auStack_294[4] = DAT_ram_4009b39c;
      auStack_294[5] = DAT_ram_4009b3a0;
      auStack_294[7] = DAT_ram_4009b3a8;
      auStack_294[8] = DAT_ram_4009b3ac;
      iVar6 = 1;
      do {
        auStack_214[iVar6] = auStack_294[iVar6] ^ 0x36363636;
        auStack_214[iVar6 + 0x20] = auStack_294[iVar6] ^ 0x5c5c5c5c;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x21);
      FUN_ram_40085500(auStack_110);
      FUN_ram_400855c4(auStack_110,auStack_214 + 1,0x80);
      FUN_ram_400855c4(auStack_110,&DAT_ram_4009b3c4,3);
      FUN_ram_4008574c(auStack_110,auStack_2d0);
      FUN_ram_40085500(auStack_110);
      FUN_ram_400855c4(auStack_110,auStack_214 + 0x21,0x80);
      FUN_ram_400855c4(auStack_110,auStack_2d0,0x40);
      FUN_ram_4008574c(auStack_110,local_390);
      memset(auStack_270,0,0x60);
      auStack_294[2] = DAT_ram_4009b394;
      auStack_294[3] = DAT_ram_4009b398;
      auStack_294[1] = DAT_ram_4009b390;
      auStack_294[6] = DAT_ram_4009b3a4;
      auStack_294[4] = DAT_ram_4009b39c;
      auStack_294[5] = DAT_ram_4009b3a0;
      auStack_294[7] = DAT_ram_4009b3a8;
      auStack_294[8] = DAT_ram_4009b3ac;
      iVar6 = 1;
      do {
        auStack_214[iVar6] = auStack_294[iVar6] ^ 0x36363636;
        auStack_214[iVar6 + 0x20] = auStack_294[iVar6] ^ 0x5c5c5c5c;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x21);
      FUN_ram_40085500(auStack_110);
      FUN_ram_400855c4(auStack_110,auStack_214 + 1,0x80);
      FUN_ram_400855c4(auStack_110,&DAT_ram_4009b3dc,3);
      FUN_ram_4008574c(auStack_110,auStack_2d0);
      FUN_ram_40085500(auStack_110);
      FUN_ram_400855c4(auStack_110,auStack_214 + 0x21,0x80);
      FUN_ram_400855c4(auStack_110,auStack_2d0,0x40);
      puVar12 = local_390 + 0x10;
      FUN_ram_4008574c(auStack_110,puVar12);
      memset(auStack_250,0,0x40);
      puVar10 = auStack_294 + 1;
      puVar11 = puVar12;
      do {
        uVar3 = puVar11[1];
        uVar4 = puVar11[2];
        uVar7 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar7;
        puVar11 = puVar11 + 4;
        puVar10 = puVar10 + 4;
      } while (&local_310 != puVar11);
      iVar6 = 1;
      do {
        auStack_214[iVar6] = auStack_294[iVar6] ^ 0x36363636;
        auStack_214[iVar6 + 0x20] = auStack_294[iVar6] ^ 0x5c5c5c5c;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x21);
      FUN_ram_40085500(auStack_110);
      FUN_ram_400855c4(auStack_110,auStack_214 + 1,0x80);
      FUN_ram_400855c4(auStack_110,&DAT_ram_30084f78,0x1c);
      FUN_ram_400855c4(auStack_110,0x30084f94,uVar2);
      FUN_ram_4008574c(auStack_110,auStack_2d0);
      FUN_ram_40085500(auStack_110);
      FUN_ram_400855c4(auStack_110,auStack_214 + 0x21,0x80);
      FUN_ram_400855c4(auStack_110,auStack_2d0,0x40);
      FUN_ram_4008574c(auStack_110,&local_310);
      uStack_3b0 = local_310;
      uStack_3ac = uStack_30c;
      uStack_3a8 = uStack_308;
      uStack_3a4 = uStack_304;
      uStack_3a0 = uStack_300;
      uStack_39c = uStack_2fc;
      uStack_398 = uStack_2f8;
      uStack_394 = uStack_2f4;
      if ((uVar2 + 0x30084f94 & 3) == 0) {
        uVar3 = local_310 ^ *(uint *)(uVar2 + 0x30084f94) |
                uStack_30c ^ *(uint *)(uVar2 + 0x30084f98) |
                uStack_308 ^ *(uint *)(uVar2 + 0x30084f9c) |
                uStack_304 ^ *(uint *)(uVar2 + 0x30084fa0) |
                uStack_300 ^ *(uint *)(uVar2 + 0x30084fa4) |
                uStack_2fc ^ *(uint *)(uVar2 + 0x30084fa8) |
                uStack_2f8 ^ *(uint *)(uVar2 + 0x30084fac) |
                uStack_2f4 ^ *(uint *)(uVar2 + 0x30084fb0);
        uVar3 = uVar3 >> 0x18 | (uVar3 & 0xffff) >> 8 | uVar3 & 0xff | (uVar3 & 0xffffff) >> 0x10;
      }
      else {
        iVar6 = 1;
        uVar3 = 0;
        do {
          iVar9 = iVar6 + 3;
          pbVar1 = (byte *)(uVar2 + 0x30084f93 + iVar6);
          iVar6 = iVar6 + 1;
          uVar3 = uVar3 | *pbVar1 ^ *(byte *)((int)&uStack_3b4 + iVar9);
        } while (iVar6 != 0x21);
      }
      param_5 = 0xfffffffe;
      if (uVar3 == 0) {
        uStack_3c4 = _DAT_ram_30084f80;
        iVar6 = 0;
        uVar3 = 0;
        uStack_3c0 = _DAT_ram_30084f84;
        uStack_3bc = _DAT_ram_30084f88;
        uStack_3b8 = _DAT_ram_30084f8c;
        do {
          uStack_3b4 = iVar6;
          memset(auStack_250,0,0x40);
          uVar4 = uVar2 - uVar3;
          puVar10 = local_390;
          puVar11 = auStack_294 + 1;
          do {
            uVar7 = puVar10[1];
            uVar5 = puVar10[2];
            uVar8 = puVar10[3];
            *puVar11 = *puVar10;
            puVar11[1] = uVar7;
            puVar11[2] = uVar5;
            puVar11[3] = uVar8;
            puVar10 = puVar10 + 4;
            puVar11 = puVar11 + 4;
          } while (puVar10 != puVar12);
          iVar9 = 1;
          do {
            auStack_214[iVar9] = auStack_294[iVar9] ^ 0x36363636;
            auStack_214[iVar9 + 0x20] = auStack_294[iVar9] ^ 0x5c5c5c5c;
            iVar9 = iVar9 + 1;
          } while (iVar9 != 0x21);
          FUN_ram_40085500(auStack_110);
          FUN_ram_400855c4(auStack_110,auStack_214 + 1,0x80);
          FUN_ram_400855c4(auStack_110,&uStack_3c4,0x14);
          FUN_ram_4008574c(auStack_110,auStack_2d0);
          FUN_ram_40085500(auStack_110);
          FUN_ram_400855c4(auStack_110,auStack_214 + 0x21,0x80);
          FUN_ram_400855c4(auStack_110,auStack_2d0,0x40);
          FUN_ram_4008574c(auStack_110,&local_310);
          if (0x40 < uVar4) {
            uVar4 = 0x40;
          }
          puVar11 = (uint *)(param_2 + uVar3);
          if (((int)puVar11 - (uVar3 + 0x30084f95) < 3 || uVar4 - 1 < 5) ||
             ((((uint)puVar11 | uVar3 + 0x30084f94) & 3) != 0)) {
            uVar7 = uVar3;
            do {
              *(byte *)(param_2 + uVar7) =
                   *(byte *)((int)&local_310 + (uVar7 - uVar3)) ^ *(byte *)(uVar7 + 0x30084f94);
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar4 + uVar3);
          }
          else {
            uVar7 = uVar4 >> 2;
            *puVar11 = *(uint *)(uVar3 + 0x30084f94) ^ local_310;
            if (((((((uVar7 == 1) ||
                    (puVar11[1] = *(uint *)(uVar3 + 0x30084f98) ^ uStack_30c, uVar7 == 2)) ||
                   (puVar11[2] = *(uint *)(uVar3 + 0x30084f9c) ^ uStack_308, uVar7 == 3)) ||
                  ((puVar11[3] = *(uint *)(uVar3 + 0x30084fa0) ^ uStack_304, uVar7 == 4 ||
                   (puVar11[4] = *(uint *)(uVar3 + 0x30084fa4) ^ uStack_300, uVar7 == 5)))) ||
                 ((puVar11[5] = *(uint *)(uVar3 + 0x30084fa8) ^ uStack_2fc, uVar7 == 6 ||
                  ((puVar11[6] = *(uint *)(uVar3 + 0x30084fac) ^ uStack_2f8, uVar7 == 7 ||
                   (puVar11[7] = *(uint *)(uVar3 + 0x30084fb0) ^ uStack_2f4, uVar7 == 8)))))) ||
                (puVar11[8] = *(uint *)(uVar3 + 0x30084fb4) ^ uStack_2f0, uVar7 == 9)) ||
               ((((puVar11[9] = *(uint *)(uVar3 + 0x30084fb8) ^ uStack_2ec, uVar7 == 10 ||
                  (puVar11[10] = *(uint *)(uVar3 + 0x30084fbc) ^ uStack_2e8, uVar7 == 0xb)) ||
                 (puVar11[0xb] = *(uint *)(uVar3 + 0x30084fc0) ^ uStack_2e4, uVar7 == 0xc)) ||
                (((puVar11[0xc] = *(uint *)(uVar3 + 0x30084fc4) ^ uStack_2e0, uVar7 == 0xd ||
                  (puVar11[0xd] = *(uint *)(uVar3 + 0x30084fc8) ^ uStack_2dc, uVar7 == 0xe)) ||
                 (puVar11[0xe] = uStack_2d8 ^ *(uint *)(uVar3 + 0x30084fcc), uVar7 != 0x10)))))) {
              uVar7 = uVar4 & 0xfffffffc;
              if (uVar4 != uVar7) {
                uVar5 = uVar7 + 1;
                *(byte *)(param_2 + uVar7 + uVar3) =
                     *(byte *)(uVar7 + uVar3 + 0x30084f94) ^ *(byte *)((int)&local_310 + uVar7);
                if (uVar5 < uVar4) {
                  uVar7 = uVar7 + 2;
                  *(byte *)(param_2 + uVar5 + uVar3) =
                       *(byte *)(uVar5 + uVar3 + 0x30084f94) ^ *(byte *)((int)&local_310 + uVar5);
                  if (uVar7 < uVar4) {
                    *(byte *)(param_2 + uVar7 + uVar3) =
                         *(byte *)((int)&local_310 + uVar7) ^ *(byte *)(uVar7 + uVar3 + 0x30084f94);
                  }
                }
              }
            }
            else {
              puVar11[0xf] = *(uint *)(uVar3 + 0x30084fd0) ^ uStack_2d4;
            }
          }
          uVar3 = uVar4 + uVar3;
          iVar6 = iVar6 + 1;
        } while (uVar3 < uVar2);
        param_5 = 0;
        *param_4 = uVar2;
      }
    }
  }
  return param_5;
}


/* NanoCore 1.11, address 0x4008a954.
 * REA evidence: ev_9eea211c28f0fe5ac77625937c3f88a44ced4d905e132de55cb43a5902ade465
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008a954(void)

{
  undefined4 *unaff_s0;
  uint uVar1;
  int in_a4;
  undefined1 *unaff_s2;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_ram_3008afdc == '\0') {
    uVar1 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = _DAT_ram_3008afe4 & 0xff;
    uVar4 = (_DAT_ram_3008afe4 & 0xffff) >> 8;
    uVar3 = (_DAT_ram_3008afe4 & 0xffffff) >> 0x10;
    uVar1 = _DAT_ram_3008afe4 >> 0x18;
  }
  if (in_a4 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  _DAT_ram_3008b9c8 = uVar2 | uVar4 << 8 | uVar3 << 0x10 | uVar1 << 0x18;
  if (unaff_s0 != (undefined4 *)0x0) {
    *unaff_s0 = &DAT_ram_3008b9c8;
    unaff_s0[1] = 4;
  }
  *unaff_s2 = 0;
  return 1;
}


/* NanoCore 1.11, address 0x4008a9a2.
 * REA evidence: ev_a92c9f75beb0f5714a2a2b4086568294097c8c1e8c369441c58556cbc9832421
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008a9a2(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
    }
    else if (_DAT_ram_3008b8c0 == 0) goto LAB_ram_4008a9c8;
  }
  FUN_ram_400049c6(0x3008b894,0xffffffff);
LAB_ram_4008a9c8:
  if ((_DAT_ram_30087fc4 & 0xff) != 0) {
    uVar1 = DAT_ram_30087fc6;
    iVar2 = FUN_ram_400933f0();
    if (((iVar2 == 0) || (*(code **)(iVar2 + 0x38) == (code *)0x0)) ||
       (iVar2 = (**(code **)(iVar2 + 0x38))(1,uVar1), iVar2 != 0)) {
      if (_DAT_ram_3008b8c0 != 0) {
        FUN_ram_40004ab8(0x3008b894);
      }
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 4;
        return 1;
      }
      return 1;
    }
  }
  _DAT_ram_30087fc4 = 0;
  _DAT_ram_30087fc8 = 0;
  _DAT_ram_30087fcc = 0;
  _DAT_ram_30087fd0 = 0;
  _DAT_ram_30087fd4 = 0;
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
    return 1;
  }
  return 1;
}


/* NanoCore 1.11, address 0x4008aa8a.
 * REA evidence: ev_bde86178e2faaad75ccb7ee810df70d110a0b442d7c9d6ee88caec2c290e232d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008aa8a(uint param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008aaae;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008aaae;
    if (DAT_ram_3008afdc == '\0') {
      return 0xffffffff;
    }
LAB_ram_4008aaca:
    uVar1 = DAT_ram_3008afde;
    if ((((DAT_ram_3008afdd != '\0') && (param_2 != 0)) && (param_3 != 0)) &&
       (_DAT_ram_3008afe4 == param_1)) {
      if ((_DAT_ram_3008afe0 < param_1) || (_DAT_ram_3008afe0 - param_1 < param_3)) {
        uVar2 = 0xfffffffe;
        goto LAB_ram_4008ab1c;
      }
      iVar3 = FUN_ram_400933f0();
      if ((iVar3 == 0) || (*(code **)(iVar3 + 0x24) == (code *)0x0)) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (**(code **)(iVar3 + 0x24))(0,uVar1,param_1,param_2,param_3);
      }
      if (param_3 == uVar4) {
        _DAT_ram_3008afe4 = param_3 + _DAT_ram_3008afe4;
        _DAT_ram_3008afe8 = FUN_ram_40007554(_DAT_ram_3008afe8,param_2,param_3);
        uVar2 = 0;
        goto LAB_ram_4008ab1c;
      }
    }
  }
  else {
LAB_ram_4008aaae:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (DAT_ram_3008afdc != '\0') goto LAB_ram_4008aaca;
  }
  uVar2 = 0xffffffff;
LAB_ram_4008ab1c:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4008ab88.
 * REA evidence: ev_e79ff98ee87f39a5f240b45c27904d483d2d530eb36b6ab9e88e5761d1591ce9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008ab88(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
    }
    else if (_DAT_ram_3008b8c0 == 0) goto LAB_ram_4008abae;
  }
  FUN_ram_400049c6(0x3008b894,0xffffffff);
LAB_ram_4008abae:
  if ((_DAT_ram_3008afdc & 0xff) != 0) {
    uVar1 = DAT_ram_3008afde;
    iVar2 = FUN_ram_400933f0();
    if (((iVar2 == 0) || (*(code **)(iVar2 + 0x38) == (code *)0x0)) ||
       (iVar2 = (**(code **)(iVar2 + 0x38))(0,uVar1), iVar2 != 0)) {
      if (_DAT_ram_3008b8c0 != 0) {
        FUN_ram_40004ab8(0x3008b894);
      }
      if (param_2 == (undefined1 *)0x0) {
        return 1;
      }
      *param_2 = 4;
      return 1;
    }
  }
  _DAT_ram_3008afdc = 0;
  _DAT_ram_3008afe0 = 0;
  _DAT_ram_3008afe4 = 0;
  _DAT_ram_3008afe8 = 0;
  _DAT_ram_3008afec = 0;
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  iVar2 = _DAT_ram_30084f70 + 1;
  _DAT_ram_30084f70 = 1;
  if (iVar2 != 0) {
    _DAT_ram_30084f70 = iVar2;
  }
  DAT_ram_30084f64 = 0;
  memset(&DAT_ram_30084f78,0,0x303c);
  _DAT_ram_30087fb4 = 0;
  _DAT_ram_30087fb8 = 0;
  _DAT_ram_30087fbc = 0;
  if (param_2 == (undefined1 *)0x0) {
    _DAT_ram_30087fbc = 0;
    _DAT_ram_30087fb8 = 0;
    _DAT_ram_30087fb4 = 0;
    return 1;
  }
  *param_2 = 0;
  return 1;
}


