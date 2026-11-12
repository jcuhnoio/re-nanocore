/* NanoCore 1.12: FUN_ram_4008b9c8 at 0x4008b9c8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_3656a55a7fcac425fbabc37d1083f457519c7f998cfea8eacb65c67b8925b2d1
 * Source: analysis/rea-1.12-effects/results/03645-export-0x4008b9c8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008b9c8(uint param_1,int param_2,uint param_3,uint *param_4)

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
  uVar2 = _DAT_ram_30085010;
  if ((param_2 != 0) && (uVar10 = 0xffffffff, 0x3b < param_1)) {
    if ((_DAT_ram_30084ff8 == 0x46504153) &&
       ((DAT_ram_30084ffc == '\x01' && (param_1 == _DAT_ram_30085010 + 0x3c)))) {
      if ((_DAT_ram_30085010 == 0) || (param_3 < _DAT_ram_30085010)) {
        uVar10 = 0xfffffffd;
      }
      else {
        memset(auStack_270,0,0x60);
        auStack_294[2] = DAT_ram_400a13ac;
        auStack_294[3] = DAT_ram_400a13b0;
        auStack_294[1] = DAT_ram_400a13a8;
        auStack_294[6] = DAT_ram_400a13bc;
        auStack_294[4] = DAT_ram_400a13b4;
        auStack_294[5] = DAT_ram_400a13b8;
        auStack_294[7] = DAT_ram_400a13c0;
        auStack_294[8] = DAT_ram_400a13c4;
        iVar6 = 1;
        do {
          auStack_214[iVar6] = auStack_294[iVar6] ^ 0x36363636;
          auStack_214[iVar6 + 0x20] = auStack_294[iVar6] ^ 0x5c5c5c5c;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x21);
        FUN_ram_400851a8(auStack_110);
        FUN_ram_4008526c(auStack_110,auStack_214 + 1,0x80);
        FUN_ram_4008526c(auStack_110,&DAT_ram_400a13dc,3);
        FUN_ram_400853f4(auStack_110,auStack_2d0);
        FUN_ram_400851a8(auStack_110);
        FUN_ram_4008526c(auStack_110,auStack_214 + 0x21,0x80);
        FUN_ram_4008526c(auStack_110,auStack_2d0,0x40);
        FUN_ram_400853f4(auStack_110,auStack_390);
        memset(auStack_270,0,0x60);
        auStack_294[2] = DAT_ram_400a13ac;
        auStack_294[3] = DAT_ram_400a13b0;
        auStack_294[1] = DAT_ram_400a13a8;
        auStack_294[6] = DAT_ram_400a13bc;
        auStack_294[4] = DAT_ram_400a13b4;
        auStack_294[5] = DAT_ram_400a13b8;
        auStack_294[7] = DAT_ram_400a13c0;
        auStack_294[8] = DAT_ram_400a13c4;
        iVar6 = 1;
        do {
          auStack_214[iVar6] = auStack_294[iVar6] ^ 0x36363636;
          auStack_214[iVar6 + 0x20] = auStack_294[iVar6] ^ 0x5c5c5c5c;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x21);
        FUN_ram_400851a8(auStack_110);
        FUN_ram_4008526c(auStack_110,auStack_214 + 1,0x80);
        FUN_ram_4008526c(auStack_110,&DAT_ram_400a13f4,3);
        FUN_ram_400853f4(auStack_110,auStack_2d0);
        FUN_ram_400851a8(auStack_110);
        FUN_ram_4008526c(auStack_110,auStack_214 + 0x21,0x80);
        FUN_ram_4008526c(auStack_110,auStack_2d0,0x40);
        puVar13 = auStack_390 + 0x10;
        FUN_ram_400853f4(auStack_110,puVar13);
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
        FUN_ram_400851a8(auStack_110);
        FUN_ram_4008526c(auStack_110,auStack_214 + 1,0x80);
        FUN_ram_4008526c(auStack_110,&DAT_ram_30084ff8,0x1c);
        FUN_ram_4008526c(auStack_110,0x30085014,uVar2);
        FUN_ram_400853f4(auStack_110,auStack_2d0);
        FUN_ram_400851a8(auStack_110);
        FUN_ram_4008526c(auStack_110,auStack_214 + 0x21,0x80);
        FUN_ram_4008526c(auStack_110,auStack_2d0,0x40);
        FUN_ram_400853f4(auStack_110,&uStack_310);
        uStack_3b0 = uStack_310;
        uStack_3ac = uStack_30c;
        uStack_3a8 = uStack_308;
        uStack_3a4 = uStack_304;
        uStack_3a0 = uStack_300;
        uStack_39c = uStack_2fc;
        uStack_398 = uStack_2f8;
        uStack_394 = uStack_2f4;
        if ((uVar2 + 0x30085014 & 3) == 0) {
          uVar3 = uStack_310 ^ *(uint *)(uVar2 + 0x30085014) |
                  uStack_30c ^ *(uint *)(uVar2 + 0x30085018) |
                  uStack_308 ^ *(uint *)(uVar2 + 0x3008501c) |
                  uStack_304 ^ *(uint *)(uVar2 + 0x30085020) |
                  uStack_300 ^ *(uint *)(uVar2 + 0x30085024) |
                  uStack_2fc ^ *(uint *)(uVar2 + 0x30085028) |
                  uStack_2f8 ^ *(uint *)(uVar2 + 0x3008502c) |
                  uStack_2f4 ^ *(uint *)(uVar2 + 0x30085030);
          uVar3 = uVar3 >> 0x18 | (uVar3 & 0xffff) >> 8 | uVar3 & 0xff | (uVar3 & 0xffffff) >> 0x10;
        }
        else {
          iVar6 = 1;
          uVar3 = 0;
          do {
            iVar9 = iVar6 + 3;
            pbVar1 = (byte *)(uVar2 + 0x30085013 + iVar6);
            iVar6 = iVar6 + 1;
            uVar3 = uVar3 | *pbVar1 ^ *(byte *)((int)&uStack_3b4 + iVar9);
          } while (iVar6 != 0x21);
        }
        uVar10 = 0xfffffffe;
        if (uVar3 == 0) {
          uStack_3c4 = _DAT_ram_30085000;
          iVar6 = 0;
          uVar3 = 0;
          uStack_3c0 = _DAT_ram_30085004;
          uStack_3bc = _DAT_ram_30085008;
          uStack_3b8 = _DAT_ram_3008500c;
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
            FUN_ram_400851a8(auStack_110);
            FUN_ram_4008526c(auStack_110,auStack_214 + 1,0x80);
            FUN_ram_4008526c(auStack_110,&uStack_3c4,0x14);
            FUN_ram_400853f4(auStack_110,auStack_2d0);
            FUN_ram_400851a8(auStack_110);
            FUN_ram_4008526c(auStack_110,auStack_214 + 0x21,0x80);
            FUN_ram_4008526c(auStack_110,auStack_2d0,0x40);
            FUN_ram_400853f4(auStack_110,&uStack_310);
            if (0x40 < uVar4) {
              uVar4 = 0x40;
            }
            puVar12 = (uint *)(param_2 + uVar3);
            if (((int)puVar12 - (uVar3 + 0x30085015) < 3 || uVar4 - 1 < 5) ||
               ((((uint)puVar12 | uVar3 + 0x30085014) & 3) != 0)) {
              uVar7 = uVar3;
              do {
                *(byte *)(param_2 + uVar7) =
                     *(byte *)((int)&uStack_310 + (uVar7 - uVar3)) ^ *(byte *)(uVar7 + 0x30085014);
                uVar7 = uVar7 + 1;
              } while (uVar7 != uVar4 + uVar3);
            }
            else {
              uVar7 = uVar4 >> 2;
              *puVar12 = *(uint *)(uVar3 + 0x30085014) ^ uStack_310;
              if (((((uVar7 == 1) ||
                    (puVar12[1] = *(uint *)(uVar3 + 0x30085018) ^ uStack_30c, uVar7 == 2)) ||
                   (puVar12[2] = *(uint *)(uVar3 + 0x3008501c) ^ uStack_308, uVar7 == 3)) ||
                  (((puVar12[3] = *(uint *)(uVar3 + 0x30085020) ^ uStack_304, uVar7 == 4 ||
                    (puVar12[4] = *(uint *)(uVar3 + 0x30085024) ^ uStack_300, uVar7 == 5)) ||
                   ((puVar12[5] = *(uint *)(uVar3 + 0x30085028) ^ uStack_2fc, uVar7 == 6 ||
                    ((puVar12[6] = *(uint *)(uVar3 + 0x3008502c) ^ uStack_2f8, uVar7 == 7 ||
                     (puVar12[7] = *(uint *)(uVar3 + 0x30085030) ^ uStack_2f4, uVar7 == 8)))))))) ||
                 ((puVar12[8] = *(uint *)(uVar3 + 0x30085034) ^ uStack_2f0, uVar7 == 9 ||
                  (((((puVar12[9] = *(uint *)(uVar3 + 0x30085038) ^ uStack_2ec, uVar7 == 10 ||
                      (puVar12[10] = *(uint *)(uVar3 + 0x3008503c) ^ uStack_2e8, uVar7 == 0xb)) ||
                     (puVar12[0xb] = *(uint *)(uVar3 + 0x30085040) ^ uStack_2e4, uVar7 == 0xc)) ||
                    ((puVar12[0xc] = *(uint *)(uVar3 + 0x30085044) ^ uStack_2e0, uVar7 == 0xd ||
                     (puVar12[0xd] = *(uint *)(uVar3 + 0x30085048) ^ uStack_2dc, uVar7 == 0xe)))) ||
                   (puVar12[0xe] = uStack_2d8 ^ *(uint *)(uVar3 + 0x3008504c), uVar7 != 0x10)))))) {
                uVar7 = uVar4 & 0xfffffffc;
                if (uVar4 != uVar7) {
                  uVar5 = uVar7 + 1;
                  *(byte *)(param_2 + uVar7 + uVar3) =
                       *(byte *)(uVar7 + uVar3 + 0x30085014) ^ *(byte *)((int)&uStack_310 + uVar7);
                  if (uVar5 < uVar4) {
                    uVar7 = uVar7 + 2;
                    *(byte *)(param_2 + uVar5 + uVar3) =
                         *(byte *)(uVar5 + uVar3 + 0x30085014) ^ *(byte *)((int)&uStack_310 + uVar5)
                    ;
                    if (uVar7 < uVar4) {
                      *(byte *)(param_2 + uVar7 + uVar3) =
                           *(byte *)((int)&uStack_310 + uVar7) ^
                           *(byte *)(uVar7 + uVar3 + 0x30085014);
                    }
                  }
                }
              }
              else {
                puVar12[0xf] = *(uint *)(uVar3 + 0x30085050) ^ uStack_2d4;
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

