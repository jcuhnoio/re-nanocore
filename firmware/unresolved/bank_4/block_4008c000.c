/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4008c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4008c3ac.
 * REA evidence: ev_43716605f861eacc006133e71c56138b461eed0050038746fb1eb37ed7ca278b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008c3ac(undefined4 param_1,uint param_2,int param_3,undefined1 *param_4)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 uVar15;
  int *piVar16;
  void *pvVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint *__s;
  int iStack_408;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  uint uStack_3e0;
  uint uStack_3dc;
  uint uStack_3d8;
  uint uStack_3d4;
  uint uStack_3d0;
  uint uStack_3cc;
  uint uStack_3c8;
  uint uStack_3c4;
  uint local_3c0 [31];
  byte bStack_341;
  undefined4 uStack_340;
  uint uStack_33c;
  uint uStack_338;
  uint uStack_334;
  uint uStack_330;
  uint uStack_32c;
  uint uStack_328;
  uint uStack_324;
  uint uStack_320;
  uint uStack_31c;
  uint uStack_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  undefined1 auStack_300 [60];
  uint auStack_2c4 [9];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [60];
  uint auStack_244 [33];
  uint auStack_1c0 [32];
  int iStack_140;
  short sStack_13c;
  
  uVar21 = _DAT_ram_30083c10;
  uVar4 = param_2 & 0xffffff;
  if (param_4 == (undefined1 *)0x0) {
    return 0;
  }
  uVar19 = param_2 >> 0x18;
  bVar18 = (byte)(param_2 >> 0x18);
  if (DAT_ram_30083be4 == '\0') {
    if (DAT_ram_30086c35 == '\0') {
LAB_ram_4008c43a:
      if (DAT_ram_30089c58 != '\0') goto LAB_ram_4008c44a;
      goto LAB_ram_4008c718;
    }
LAB_ram_4008c702:
    if ((_DAT_ram_30086c34 & 0xff) == 0) goto LAB_ram_4008c43a;
LAB_ram_4008c432:
    if ((_DAT_ram_30086c34 >> 0x10 & 0xff) != uVar19) goto LAB_ram_4008c43a;
    if ((_DAT_ram_30086c3c != _DAT_ram_30086c38) || (uVar4 != _DAT_ram_30086c3c)) {
      *param_4 = 1;
      goto LAB_ram_4008c71e;
    }
    if ((((uVar4 < 0x3c) || (_DAT_ram_30083bf8 != 0x46504153)) || (DAT_ram_30083bfc != '\x01')) ||
       (uVar4 != _DAT_ram_30083c10 + 0x3c)) {
      *param_4 = 1;
      FUN_ram_40087684();
      return 1;
    }
    if (0x2fff < _DAT_ram_30083c10 - 1) {
      *param_4 = 3;
      FUN_ram_40087684();
      return 1;
    }
    memset(auStack_2a0,0,0x60);
    auStack_2c4[2] = DAT_ram_40099388;
    auStack_2c4[3] = DAT_ram_4009938c;
    auStack_2c4[1] = DAT_ram_40099384;
    auStack_2c4[6] = DAT_ram_40099398;
    auStack_2c4[4] = DAT_ram_40099390;
    auStack_2c4[5] = DAT_ram_40099394;
    auStack_2c4[7] = DAT_ram_4009939c;
    auStack_2c4[8] = DAT_ram_400993a0;
    iVar23 = 1;
    do {
      auStack_244[iVar23] = auStack_2c4[iVar23] ^ 0x36363636;
      auStack_244[iVar23 + 0x20] = auStack_2c4[iVar23] ^ 0x5c5c5c5c;
      iVar23 = iVar23 + 1;
    } while (iVar23 != 0x21);
    FUN_ram_4007f6d4(&iStack_140);
    FUN_ram_4007f798(&iStack_140,auStack_244 + 1,0x80);
    FUN_ram_4007f798(&iStack_140,&DAT_ram_400993ac,3);
    FUN_ram_4007f920(&iStack_140,auStack_300);
    FUN_ram_4007f6d4(&iStack_140);
    FUN_ram_4007f798(&iStack_140,auStack_244 + 0x21,0x80);
    FUN_ram_4007f798(&iStack_140,auStack_300,0x40);
    FUN_ram_4007f920(&iStack_140,local_3c0);
    memset(auStack_2a0,0,0x60);
    auStack_2c4[2] = DAT_ram_40099388;
    auStack_2c4[3] = DAT_ram_4009938c;
    auStack_2c4[1] = DAT_ram_40099384;
    auStack_2c4[6] = DAT_ram_40099398;
    auStack_2c4[4] = DAT_ram_40099390;
    auStack_2c4[5] = DAT_ram_40099394;
    auStack_2c4[7] = DAT_ram_4009939c;
    auStack_2c4[8] = DAT_ram_400993a0;
    iVar23 = 1;
    do {
      auStack_244[iVar23] = auStack_2c4[iVar23] ^ 0x36363636;
      auStack_244[iVar23 + 0x20] = auStack_2c4[iVar23] ^ 0x5c5c5c5c;
      iVar23 = iVar23 + 1;
    } while (iVar23 != 0x21);
    FUN_ram_4007f6d4(&iStack_140);
    FUN_ram_4007f798(&iStack_140,auStack_244 + 1,0x80);
    FUN_ram_4007f798(&iStack_140,&DAT_ram_400993c4,3);
    FUN_ram_4007f920(&iStack_140,auStack_300);
    FUN_ram_4007f6d4(&iStack_140);
    FUN_ram_4007f798(&iStack_140,auStack_244 + 0x21,0x80);
    FUN_ram_4007f798(&iStack_140,auStack_300,0x40);
    __s = local_3c0 + 0x10;
    FUN_ram_4007f920(&iStack_140,__s);
    memset(auStack_280,0,0x40);
    puVar13 = auStack_2c4 + 1;
    puVar14 = __s;
    do {
      uVar20 = puVar14[1];
      uVar22 = puVar14[2];
      uVar11 = puVar14[3];
      *puVar13 = *puVar14;
      puVar13[1] = uVar20;
      puVar13[2] = uVar22;
      puVar13[3] = uVar11;
      puVar14 = puVar14 + 4;
      puVar13 = puVar13 + 4;
    } while (&uStack_340 != puVar14);
    iVar23 = 1;
    do {
      auStack_244[iVar23] = auStack_2c4[iVar23] ^ 0x36363636;
      auStack_244[iVar23 + 0x20] = auStack_2c4[iVar23] ^ 0x5c5c5c5c;
      iVar23 = iVar23 + 1;
    } while (iVar23 != 0x21);
    FUN_ram_4007f6d4(&iStack_140);
    FUN_ram_4007f798(&iStack_140,auStack_244 + 1,0x80);
    FUN_ram_4007f798(&iStack_140,&DAT_ram_30083bf8,0x1c);
    FUN_ram_4007f798(&iStack_140,0x30083c14,uVar21);
    FUN_ram_4007f920(&iStack_140,auStack_300);
    FUN_ram_4007f6d4(&iStack_140);
    FUN_ram_4007f798(&iStack_140,auStack_244 + 0x21,0x80);
    FUN_ram_4007f798(&iStack_140,auStack_300,0x40);
    FUN_ram_4007f920(&iStack_140,&uStack_340);
    uStack_3e0 = uStack_340;
    uStack_3dc = uStack_33c;
    uStack_3d8 = uStack_338;
    uStack_3d4 = uStack_334;
    uStack_3d0 = uStack_330;
    uStack_3cc = uStack_32c;
    uStack_3c8 = uStack_328;
    uStack_3c4 = uStack_324;
    if ((uVar21 + 0x30083c14 & 3) == 0) {
      uVar20 = uStack_340 ^ *(uint *)(uVar21 + 0x30083c14) |
               uStack_33c ^ *(uint *)(uVar21 + 0x30083c18) |
               uStack_338 ^ *(uint *)(uVar21 + 0x30083c1c) |
               uStack_334 ^ *(uint *)(uVar21 + 0x30083c20) |
               uStack_330 ^ *(uint *)(uVar21 + 0x30083c24) |
               uStack_32c ^ *(uint *)(uVar21 + 0x30083c28) |
               uStack_328 ^ *(uint *)(uVar21 + 0x30083c2c) |
               *(uint *)(uVar21 + 0x30083c30) ^ uStack_324;
      uVar20 = uVar20 >> 0x18 | (uVar20 & 0xffff) >> 8 | uVar20 & 0xff | (uVar20 & 0xffffff) >> 0x10
      ;
    }
    else {
      iVar23 = 1;
      uVar20 = 0;
      do {
        iVar5 = iVar23 + 3;
        pbVar2 = (byte *)(uVar21 + 0x30083c13 + iVar23);
        iVar23 = iVar23 + 1;
        uVar20 = uVar20 | *pbVar2 ^ *(byte *)((int)&uStack_3e4 + iVar5);
      } while (iVar23 != 0x21);
    }
    if (uVar20 == 0) {
      uStack_3f4 = _DAT_ram_30083c00;
      iStack_408 = 0;
      uVar20 = 0;
      uStack_3f0 = _DAT_ram_30083c04;
      uStack_3ec = _DAT_ram_30083c08;
      uStack_3e8 = _DAT_ram_30083c0c;
      do {
        uStack_3e4 = iStack_408;
        uVar22 = uVar21 - uVar20;
        memset(auStack_280,0,0x40);
        puVar13 = local_3c0;
        puVar14 = auStack_2c4 + 1;
        do {
          uVar11 = puVar13[1];
          uVar10 = puVar13[2];
          uVar12 = puVar13[3];
          *puVar14 = *puVar13;
          puVar14[1] = uVar11;
          puVar14[2] = uVar10;
          puVar14[3] = uVar12;
          puVar13 = puVar13 + 4;
          puVar14 = puVar14 + 4;
        } while (__s != puVar13);
        iVar23 = 1;
        do {
          auStack_244[iVar23] = auStack_2c4[iVar23] ^ 0x36363636;
          auStack_244[iVar23 + 0x20] = auStack_2c4[iVar23] ^ 0x5c5c5c5c;
          iVar23 = iVar23 + 1;
        } while (iVar23 != 0x21);
        FUN_ram_4007f6d4(&iStack_140);
        FUN_ram_4007f798(&iStack_140,auStack_244 + 1,0x80);
        FUN_ram_4007f798(&iStack_140,&uStack_3f4,0x14);
        FUN_ram_4007f920(&iStack_140,auStack_300);
        FUN_ram_4007f6d4(&iStack_140);
        FUN_ram_4007f798(&iStack_140,auStack_244 + 0x21,0x80);
        FUN_ram_4007f798(&iStack_140,auStack_300,0x40);
        FUN_ram_4007f920(&iStack_140,&uStack_340);
        if (0x40 < uVar22) {
          uVar22 = 0x40;
        }
        if (((uVar20 + 0x30083c14 & 3) == 0) && (4 < uVar22 - 1)) {
          uVar11 = uVar22 >> 2;
          *(uint *)(uVar20 + 0x30083c14) = uStack_340 ^ *(uint *)(uVar20 + 0x30083c14);
          if ((((((uVar11 == 1) ||
                 (*(uint *)(uVar20 + 0x30083c18) = uStack_33c ^ *(uint *)(uVar20 + 0x30083c18),
                 uVar11 == 2)) ||
                ((*(uint *)(uVar20 + 0x30083c1c) = uStack_338 ^ *(uint *)(uVar20 + 0x30083c1c),
                 uVar11 == 3 ||
                 (((*(uint *)(uVar20 + 0x30083c20) = *(uint *)(uVar20 + 0x30083c20) ^ uStack_334,
                   uVar11 == 4 ||
                   (*(uint *)(uVar20 + 0x30083c24) = uStack_330 ^ *(uint *)(uVar20 + 0x30083c24),
                   uVar11 == 5)) ||
                  (*(uint *)(uVar20 + 0x30083c28) = uStack_32c ^ *(uint *)(uVar20 + 0x30083c28),
                  uVar11 == 6)))))) ||
               ((*(uint *)(uVar20 + 0x30083c2c) = *(uint *)(uVar20 + 0x30083c2c) ^ uStack_328,
                uVar11 == 7 ||
                (*(uint *)(uVar20 + 0x30083c30) = uStack_324 ^ *(uint *)(uVar20 + 0x30083c30),
                uVar11 == 8)))) ||
              (*(uint *)(uVar20 + 0x30083c34) = *(uint *)(uVar20 + 0x30083c34) ^ uStack_320,
              uVar11 == 9)) ||
             (((*(uint *)(uVar20 + 0x30083c38) = uStack_31c ^ *(uint *)(uVar20 + 0x30083c38),
               uVar11 == 10 ||
               (*(uint *)(uVar20 + 0x30083c3c) = uStack_318 ^ *(uint *)(uVar20 + 0x30083c3c),
               uVar11 == 0xb)) ||
              ((*(uint *)(uVar20 + 0x30083c40) = *(uint *)(uVar20 + 0x30083c40) ^ uStack_314,
               uVar11 == 0xc ||
               (((*(uint *)(uVar20 + 0x30083c44) = *(uint *)(uVar20 + 0x30083c44) ^ uStack_310,
                 uVar11 == 0xd ||
                 (*(uint *)(uVar20 + 0x30083c48) = *(uint *)(uVar20 + 0x30083c48) ^ uStack_30c,
                 uVar11 == 0xe)) ||
                (*(uint *)(uVar20 + 0x30083c4c) = uStack_308 ^ *(uint *)(uVar20 + 0x30083c4c),
                uVar11 != 0x10)))))))) {
            uVar11 = uVar22 & 0xfffffffc;
            if (uVar22 != uVar11) {
              uVar10 = uVar11 + 1;
              *(byte *)(uVar11 + uVar20 + 0x30083c14) =
                   *(byte *)(uVar11 + uVar20 + 0x30083c14) ^ *(byte *)((int)&uStack_340 + uVar11);
              if (uVar10 < uVar22) {
                uVar11 = uVar11 + 2;
                *(byte *)(uVar10 + uVar20 + 0x30083c14) =
                     *(byte *)((int)&uStack_340 + uVar10) ^ *(byte *)(uVar10 + uVar20 + 0x30083c14);
                if (uVar11 < uVar22) {
                  *(byte *)(uVar11 + uVar20 + 0x30083c14) =
                       *(byte *)((int)&uStack_340 + uVar11) ^
                       *(byte *)(uVar11 + uVar20 + 0x30083c14);
                }
              }
            }
          }
          else {
            *(uint *)(uVar20 + 0x30083c50) = *(uint *)(uVar20 + 0x30083c50) ^ uStack_304;
          }
        }
        else {
          uVar11 = 1;
          do {
            *(byte *)(uVar20 + 0x30083c13 + uVar11) =
                 (&bStack_341)[uVar11] ^ *(byte *)(uVar20 + 0x30083c13 + uVar11);
            bVar1 = uVar22 != uVar11;
            uVar11 = uVar11 + 1;
          } while (bVar1);
        }
        uVar20 = uVar20 + uVar22;
        iStack_408 = iStack_408 + 1;
      } while (uVar20 < uVar21);
      uVar9 = FUN_ram_4000755e(0,0x30083c14,uVar21);
      iVar23 = FUN_ram_4008855c(uVar19,uVar21);
      if (iVar23 == 0) {
        uVar19 = 0;
        while( true ) {
          uVar20 = uVar21 - uVar19;
          if (0x100 < uVar20) {
            uVar20 = 0x100;
          }
          iVar23 = FUN_ram_40087e12(uVar19,uVar19 + 0x30083c14,uVar20);
          uVar19 = uVar19 + uVar20;
          if (iVar23 != 0) break;
          if (uVar21 <= uVar19) {
            iVar23 = FUN_ram_4008b1c8(uVar21,uVar9,0,0);
            memset(local_3c0,0,0x40);
            memset(__s,0,0x40);
            memset(&uStack_3e0,0,0x20);
            if (iVar23 == -2) {
              *param_4 = 5;
            }
            else if (iVar23 == 0) {
              *param_4 = 0;
              _DAT_ram_30083bf4 = _DAT_ram_30083bf0;
              DAT_ram_30083be4 = '\x01';
              DAT_ram_30083be5 = bVar18;
              _DAT_ram_30083be8 = uVar4;
              _DAT_ram_30083bec = param_3;
            }
            else {
              *param_4 = 4;
            }
            FUN_ram_40087684();
            return 1;
          }
        }
        FUN_ram_40087a78();
        memset(local_3c0,0,0x40);
        memset(__s,0,0x40);
        memset(&uStack_3e0,0,0x20);
        uVar15 = 3;
        if (iVar23 != -2) {
          uVar15 = 4;
        }
        *param_4 = uVar15;
        FUN_ram_40087684();
        return 1;
      }
      memset(local_3c0,0,0x40);
      memset(__s,0,0x40);
      memset(&uStack_3e0,0,0x20);
      uVar15 = 3;
      if (iVar23 != -2) {
        uVar15 = 4;
      }
      *param_4 = uVar15;
      FUN_ram_40087684();
      return 1;
    }
LAB_ram_4008ca7a:
    *param_4 = 5;
  }
  else {
    if (DAT_ram_30089c58 == '\0') {
      if (DAT_ram_30086c34 == '\0') {
        if ((((_DAT_ram_30083bf4 == _DAT_ram_30083bf0) && (DAT_ram_30083be5 == uVar19)) &&
            (uVar4 == _DAT_ram_30083be8)) && (param_3 == _DAT_ram_30083bec)) {
          *param_4 = 0;
          return 1;
        }
      }
      else if (DAT_ram_30086c35 != '\0') goto LAB_ram_4008c432;
    }
    else {
      if (DAT_ram_30086c35 != '\0') goto LAB_ram_4008c702;
LAB_ram_4008c44a:
      if ((_DAT_ram_30089c58 >> 0x10 & 0xff) == uVar19) {
        if (_DAT_ram_3008a534 == 0) {
          iVar23 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
          if (iVar23 == 0) {
            _DAT_ram_3008a534 = 1;
            goto LAB_ram_4008c462;
          }
          if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008c462;
          if (DAT_ram_30089c58 != '\0') goto LAB_ram_4008c478;
        }
        else {
LAB_ram_4008c462:
          FUN_ram_400049d6(0x3008a508,0xffffffff);
          if (DAT_ram_30089c58 != '\0') {
LAB_ram_4008c478:
            if (((DAT_ram_30089c59 != '\0') && (uVar4 == _DAT_ram_30089c5c)) &&
               (uVar4 == _DAT_ram_30089c60)) {
              if (param_3 != _DAT_ram_30089c64) {
                if (_DAT_ram_3008a534 == 0) goto LAB_ram_4008ca7a;
                FUN_ram_40004ac8(0x3008a508);
LAB_ram_4008c9ba:
                if (param_3 == _DAT_ram_30089c64) {
                  *param_4 = 3;
                  goto LAB_ram_4008c71e;
                }
                goto LAB_ram_4008ca7a;
              }
              bVar3 = DAT_ram_30089c5a;
              uVar19 = (uint)DAT_ram_30089c5a;
              iVar23 = 0;
              uVar21 = 0;
              if (uVar4 - 1 < 0x3000) {
                do {
                  uVar20 = uVar4 - uVar21;
                  if (0x100 < uVar20) {
                    uVar20 = 0x100;
                  }
                  iVar5 = FUN_ram_4009048c();
                  uVar22 = uVar21 + uVar20;
                  if ((iVar5 == 0) || (*(code **)(iVar5 + 0x24) == (code *)0x0))
                  goto LAB_ram_4008cab8;
                  uVar21 = (**(code **)(iVar5 + 0x24))(0,uVar19,uVar21,&iStack_140,uVar20);
                  if (uVar20 != uVar21) goto LAB_ram_4008cab8;
                  iVar23 = FUN_ram_4000755e(iVar23,&iStack_140,uVar20);
                  uVar21 = uVar22;
                } while (uVar22 < uVar4);
                if (param_3 == iVar23) {
                  if ((uVar19 < 0x26) && (0xb < uVar4)) {
                    iVar5 = FUN_ram_4009048c();
                    if ((iVar5 != 0) &&
                       ((*(code **)(iVar5 + 0x24) != (code *)0x0 &&
                        (iVar5 = (**(code **)(iVar5 + 0x24))(0,uVar19,0,&iStack_140,0xc),
                        iVar5 == 0xc)))) {
                      if ((iStack_140 != 0x42504444) || (2 < (ushort)(sStack_13c - 1U)))
                      goto LAB_ram_4008c984;
                      if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
                         (_DAT_ram_30089c6c != 4)) {
                        memset(&DAT_ram_30089c68,0xff,0x898);
                        iVar5 = FUN_ram_4009048c();
                        puVar6 = (undefined4 *)FUN_ram_4009048c();
                        if (((puVar6 != (undefined4 *)0x0) && ((code *)*puVar6 != (code *)0x0)) &&
                           ((iVar7 = (*(code *)*puVar6)(), iVar7 != 0 &&
                            ((iVar5 != 0 && (*(code **)(iVar5 + 4) != (code *)0x0)))))) {
                          iVar5 = (**(code **)(iVar5 + 4))(&DAT_ram_30089c68);
                          if (iVar5 == 1) {
                            if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) {
LAB_ram_4008c8da:
                              DAT_ram_3008a500 = '\x01';
                              goto LAB_ram_4008c572;
                            }
                          }
                          else if (iVar5 == 2) {
                            memset(&DAT_ram_30089c68,0xff,0x898);
                            _DAT_ram_30089c68 = 0x53415442;
                            _DAT_ram_30089c6c = 4;
                            _DAT_ram_30089c72 = 0;
                            pvVar17 = (void *)0x30089c8c;
                            do {
                              *(undefined2 *)((int)pvVar17 + -4) = 0;
                              *(undefined4 *)((int)pvVar17 + -0xc) = 0;
                              *(undefined4 *)((int)pvVar17 + -8) = 0;
                              pvVar8 = memset(pvVar17,0,0x10);
                              pvVar17 = (void *)((int)pvVar8 + 0x20);
                              *(undefined4 *)((int)pvVar8 + 0x10) = DAT_ram_400993a8;
                            } while (pvVar17 != (void *)0x3008a14c);
                            pvVar17 = (void *)0x3008a14c;
                            do {
                              *(undefined2 *)((int)pvVar17 + -4) = 0;
                              *(undefined4 *)((int)pvVar17 + -0xc) = 0;
                              *(undefined4 *)((int)pvVar17 + -8) = 0;
                              pvVar8 = memset(pvVar17,0,0x10);
                              pvVar17 = (void *)((int)pvVar8 + 0x20);
                              *(undefined4 *)((int)pvVar8 + 0x10) = DAT_ram_400993a8;
                            } while (pvVar17 != (void *)0x3008a50c);
                            iVar5 = FUN_ram_4009048c();
                            if ((((((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4))
                                  && (puVar6 = (undefined4 *)FUN_ram_4009048c(),
                                     puVar6 != (undefined4 *)0x0)) &&
                                 (((code *)*puVar6 != (code *)0x0 &&
                                  (iVar7 = (*(code *)*puVar6)(), iVar7 != 0)))) && (iVar5 != 0)) &&
                               ((*(code **)(iVar5 + 8) != (code *)0x0 &&
                                (iVar5 = (**(code **)(iVar5 + 8))(&DAT_ram_30089c68), iVar5 != 0))))
                            goto LAB_ram_4008c8da;
                            goto LAB_ram_4008c922;
                          }
                        }
                        memset(&DAT_ram_30089c68,0xff,0x898);
                        DAT_ram_3008a500 = '\0';
                      }
                      else {
LAB_ram_4008c572:
                        if ((_DAT_ram_3008a504 != (int *)0x0) ||
                           (_DAT_ram_3008a504 = (int *)FUN_ram_4002c39e(0x898),
                           _DAT_ram_3008a504 != (int *)0x0)) {
                          FUN_ram_4000305c(_DAT_ram_3008a504,&DAT_ram_30089c68,0x898);
                          iVar5 = FUN_ram_4009048c();
                          if ((iVar5 != 0) &&
                             ((*(code **)(iVar5 + 0x28) != (code *)0x0 &&
                              (iVar5 = (**(code **)(iVar5 + 0x28))(0,uVar19,uVar4,iVar23),
                              piVar16 = _DAT_ram_3008a504, iVar5 == 0)))) {
                            *(char *)((int)_DAT_ram_3008a504 + uVar19 * 0x20 + 0x1f) =
                                 (char)((uint)iVar23 >> 0x18);
                            *(char *)((int)piVar16 + uVar19 * 0x20 + 0x1d) =
                                 (char)((uint)iVar23 >> 8);
                            *(char *)((int)piVar16 + uVar19 * 0x20 + 0x1e) =
                                 (char)((uint)iVar23 >> 0x10);
                            *(undefined1 *)(piVar16 + uVar19 * 8 + 8) = 1;
                            *(char *)(piVar16 + uVar19 * 8 + 6) = (char)uVar4;
                            *(char *)((int)piVar16 + uVar19 * 0x20 + 0x19) = (char)(param_2 >> 8);
                            *(char *)((int)piVar16 + uVar19 * 0x20 + 0x1a) = (char)(param_2 >> 0x10)
                            ;
                            *(undefined1 *)((int)piVar16 + uVar19 * 0x20 + 0x1b) = 0;
                            *(char *)(piVar16 + uVar19 * 8 + 7) = (char)iVar23;
                            *(undefined1 *)((int)piVar16 + uVar19 * 0x20 + 0x21) = 0;
                            *(byte *)((int)piVar16 + 6) = bVar3;
                            *(undefined1 *)((int)piVar16 + 7) = 0;
                            iVar5 = FUN_ram_4009048c();
                            if ((*piVar16 == 0x53415442) &&
                               (((((short)piVar16[1] == 4 &&
                                  (puVar6 = (undefined4 *)FUN_ram_4009048c(),
                                  puVar6 != (undefined4 *)0x0)) && ((code *)*puVar6 != (code *)0x0))
                                && (((iVar7 = (*(code *)*puVar6)(), iVar7 != 0 && (iVar5 != 0)) &&
                                    ((*(code **)(iVar5 + 8) != (code *)0x0 &&
                                     (iVar5 = (**(code **)(iVar5 + 8))(piVar16), iVar5 != 0))))))))
                            {
                              DAT_ram_3008a500 = '\x01';
                              FUN_ram_4000305c(&DAT_ram_30089c68,_DAT_ram_3008a504,0x898);
                              iVar5 = FUN_ram_4009048c();
                              if ((iVar5 != 0) && (*(code **)(iVar5 + 0x2c) != (code *)0x0)) {
                                (**(code **)(iVar5 + 0x2c))(0,uVar19);
                              }
                              piVar16 = (int *)(gp + -0xc);
                              if (*piVar16 == -1) {
                                *piVar16 = 1;
                              }
                              else {
                                *piVar16 = *piVar16 + 1;
                              }
                              _DAT_ram_30089c58 = 0;
                              _DAT_ram_30089c5c = 0;
                              _DAT_ram_30089c60 = 0;
                              _DAT_ram_30089c64 = 0;
                              if (_DAT_ram_3008a534 != 0) {
                                FUN_ram_40004ac8(0x3008a508);
                              }
                              *param_4 = 0;
                              _DAT_ram_30083bf4 = _DAT_ram_30083bf0;
                              DAT_ram_30083be4 = '\x01';
                              DAT_ram_30083be5 = bVar18;
                              _DAT_ram_30083be8 = uVar4;
                              _DAT_ram_30083bec = iVar23;
                              goto LAB_ram_4008c71e;
                            }
                            iVar23 = FUN_ram_4009048c();
                            if (((iVar23 == 0) || (*(code **)(iVar23 + 0x30) == (code *)0x0)) ||
                               (iVar23 = (**(code **)(iVar23 + 0x30))(0,uVar19), iVar23 != 0))
                            goto joined_r0x4008cadc;
                            goto LAB_ram_4008c948;
                          }
                        }
                      }
LAB_ram_4008c922:
                      if ((_DAT_ram_30089c58 & 0xff) == 0) goto LAB_ram_4008c948;
                      uVar15 = DAT_ram_30089c5a;
                      iVar23 = FUN_ram_4009048c();
                      if ((iVar23 == 0) || (*(code **)(iVar23 + 0x30) == (code *)0x0))
                      goto joined_r0x4008cadc;
                      iVar23 = (**(code **)(iVar23 + 0x30))(0,uVar15);
                      goto joined_r0x4008cad4;
                    }
                    iVar23 = -1;
                  }
                  else {
LAB_ram_4008c984:
                    iVar23 = -2;
                  }
                  if ((_DAT_ram_30089c58 & 0xff) == 0) {
LAB_ram_4008c98c:
                    _DAT_ram_30089c58 = 0;
                    _DAT_ram_30089c5c = 0;
                    _DAT_ram_30089c60 = 0;
                    _DAT_ram_30089c64 = 0;
                  }
                  else {
                    uVar15 = DAT_ram_30089c5a;
                    iVar5 = FUN_ram_4009048c();
                    if (((iVar5 != 0) && (*(code **)(iVar5 + 0x30) != (code *)0x0)) &&
                       (iVar5 = (**(code **)(iVar5 + 0x30))(0,uVar15), iVar5 == 0))
                    goto LAB_ram_4008c98c;
                  }
                  if (_DAT_ram_3008a534 != 0) {
                    FUN_ram_40004ac8(0x3008a508);
                  }
                  if (iVar23 != -2) goto LAB_ram_4008c978;
                  goto LAB_ram_4008c9ba;
                }
LAB_ram_4008cab8:
                if ((_DAT_ram_30089c58 & 0xff) != 0) {
                  uVar19 = _DAT_ram_30089c58 >> 0x10 & 0xff;
                  goto LAB_ram_4008cac4;
                }
LAB_ram_4008c948:
                _DAT_ram_30089c58 = 0;
                _DAT_ram_30089c5c = 0;
                _DAT_ram_30089c60 = 0;
                _DAT_ram_30089c64 = 0;
              }
              else {
LAB_ram_4008cac4:
                iVar23 = FUN_ram_4009048c();
                if ((iVar23 != 0) && (*(code **)(iVar23 + 0x30) != (code *)0x0)) {
                  iVar23 = (**(code **)(iVar23 + 0x30))(0,uVar19);
joined_r0x4008cad4:
                  if (iVar23 == 0) goto LAB_ram_4008c948;
                }
              }
            }
          }
joined_r0x4008cadc:
          if (_DAT_ram_3008a534 != 0) {
            FUN_ram_40004ac8(0x3008a508);
          }
        }
LAB_ram_4008c978:
        *param_4 = 4;
        goto LAB_ram_4008c71e;
      }
    }
LAB_ram_4008c718:
    *param_4 = 2;
  }
LAB_ram_4008c71e:
  memset(&DAT_ram_30083bf8,0,0x303c);
  _DAT_ram_30086c3c = 0;
  _DAT_ram_30086c38 = 0;
  _DAT_ram_30086c34 = 0;
  return 1;
}


