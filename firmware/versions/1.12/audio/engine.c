/* NanoCore 1.12 analysis module: audio/engine.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40009d20.
 * REA evidence: ev_a4c05e4a703a7622ecf503a7425e151f5348c8c9bed0721b30bf01ff6f707809
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000a56a) */
/* WARNING: Removing unreachable block (ram,0x4000a4be) */
/* WARNING: Removing unreachable block (ram,0x4000aa26) */
/* WARNING: Removing unreachable block (ram,0x4000a92a) */
/* WARNING: Removing unreachable block (ram,0x40009e78) */
/* WARNING: Removing unreachable block (ram,0x4000a94c) */
/* WARNING: Removing unreachable block (ram,0x4000aaca) */
/* WARNING: Removing unreachable block (ram,0x4000a556) */
/* WARNING: Removing unreachable block (ram,0x4000a640) */
/* WARNING: Removing unreachable block (ram,0x4000aa4c) */
/* WARNING: Removing unreachable block (ram,0x4000aaf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_audio_process_dma_half(uint param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  char cVar10;
  float fVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined2 *puVar20;
  uint uVar21;
  undefined2 uVar22;
  uint uVar23;
  uint uVar24;
  undefined2 uVar25;
  uint uVar26;
  int *piVar27;
  undefined *puVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  ushort uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  ulonglong uVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  char cStack_158;
  uint uStack_154;
  uint uStack_10c;
  uint auStack_108 [2];
  float fStack_100;
  uint uStack_fc;
  uint uStack_f8;
  float fStack_f0;
  uint uStack_ec;
  
  cVar10 = DAT_ram_3005efc1;
  uVar34 = DAT_ram_3004ac78;
  uVar47 = FUN_ram_40040028();
  iVar13 = (int)uVar47;
  lVar7 = CONCAT44(DAT_ram_3004ab24,DAT_ram_3004ab20);
  lVar8 = CONCAT44(_DAT_ram_3004e454,_DAT_ram_3004e450);
  uVar9 = CONCAT44(_DAT_ram_3004f68c,_DAT_ram_3004f688);
  if ((1 < param_1) ||
     (lVar7 = CONCAT44(DAT_ram_3004ab24,DAT_ram_3004ab20),
     lVar8 = CONCAT44(_DAT_ram_3004e454,_DAT_ram_3004e450),
     uVar9 = CONCAT44(_DAT_ram_3004f68c,_DAT_ram_3004f688), DAT_ram_30051819 != '\0'))
  goto LAB_ram_4000b40c;
  if (_DAT_ram_3004f68c != 0 || _DAT_ram_3004f688 != 0) {
    uVar26 = iVar13 - _DAT_ram_3004f688;
    if (uVar26 < DAT_ram_3004ab44) {
      DAT_ram_3004ab44 = uVar26;
    }
    if (DAT_ram_3004ab48 < uVar26) {
      DAT_ram_3004ab48 = uVar26;
    }
    if (DAT_ram_3004ab3c != 0) {
      if (DAT_ram_3004ab3c < uVar26) {
        uVar23 = uVar26 - DAT_ram_3004ab3c;
      }
      else {
        uVar23 = (_DAT_ram_3004f688 + DAT_ram_3004ab3c) - iVar13;
      }
      if (DAT_ram_3004ab4c < uVar23) {
        DAT_ram_3004ab4c = uVar23;
      }
      if (DAT_ram_3004ab3c < uVar26) {
        DAT_ram_3004ab50 = DAT_ram_3004ab50 + 1;
        if (DAT_ram_3004ab54 < uVar26 - DAT_ram_3004ab3c) {
          DAT_ram_3004ab54 = uVar26 - DAT_ram_3004ab3c;
        }
      }
    }
  }
  fence();
  fence();
  if (_DAT_ram_1860000c != 0) {
    fence();
  }
  DAT_ram_3004ab78 = DAT_ram_3004ab78 | _DAT_ram_1860000c;
  if ((_DAT_ram_1860000c & 2) != 0) {
    DAT_ram_3004ab84 = DAT_ram_3004ab84 + 1;
  }
  if ((_DAT_ram_1860000c & 0x40) != 0) {
    DAT_ram_3004ab88 = DAT_ram_3004ab88 + 1;
  }
  if (_DAT_ram_18600018 < DAT_ram_3004ab7c) {
    DAT_ram_3004ab7c = _DAT_ram_18600018;
  }
  if (DAT_ram_3004ab80 < _DAT_ram_18600018) {
    DAT_ram_3004ab80 = _DAT_ram_18600018;
  }
  iVar29 = uVar34 * 4;
  uVar23 = param_1 * uVar34 * 4 + 0x30054640;
  uVar26 = (uVar23 & 0x1f) + iVar29;
  if ((uVar26 & 0x1f) != 0) {
    uVar26 = uVar26 + (0x20 - (int)uVar26 % 0x20);
  }
  fence();
  custom0();
  for (; 0 < (int)uVar26; uVar26 = uVar26 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  DAT_ram_3004ea1c = 1;
  _DAT_ram_3004f688 = uVar47;
  fVar37 = (float)thunk_FUN_ram_40022a18();
  if (fVar37 < 0.0) {
    fVar37 = 0.0;
  }
  uVar26 = uVar34 >> 1;
  DAT_ram_3004ac88 = (fVar37 - DAT_ram_3004ac88) * DAT_ram_40096770 + DAT_ram_3004ac88;
  if (DAT_ram_3004f721 == '\0') {
    if ((DAT_ram_30051d6d == '\0') && (DAT_ram_3004f720 == '\0')) {
      uStack_10c = uStack_10c & 0xffffff00;
      if (uVar26 != 0) {
        if (DAT_ram_30058c90 == '\x01') {
          _DAT_ram_30058c8c = (uint)(_DAT_ram_3005cec0 >> 1) << 0x10;
        }
        else {
          if (DAT_ram_30058c90 == '\x02') {
            uVar14 = (uint)_DAT_ram_3005cec2;
            uVar33 = (ushort)(_DAT_ram_30058c8c >> 0xf) & 0x1ffe;
            uVar30 = _DAT_ram_30058c8c >> 0xf & 0x1ffe;
            if (uVar14 < uVar30) {
              uVar14 = uVar14 + 0x2000;
            }
            uVar14 = uVar14 - uVar30;
            uVar30 = uVar14 & 0xffff;
            if (uVar30 < DAT_ram_3004aca0) {
              DAT_ram_3004aca0 = uVar30;
            }
            if (_DAT_ram_30053d84 < uVar30) {
              _DAT_ram_30053d84 = uVar30;
            }
            if (uVar30 < 4) {
              _DAT_ram_3005cec0 = uVar33;
              memset(&DAT_ram_30058dc0,0,uVar26 << 2);
              _DAT_ram_30053d94 = _DAT_ram_30053d94 + 1;
              _DAT_ram_30058c94 = _DAT_ram_30058c94 + 1;
              _DAT_ram_3005cec0 = uVar33;
              if (0x5f < _DAT_ram_30058c94) {
                DAT_ram_30058c90 = '\x01';
                _DAT_ram_3005cec0 = _DAT_ram_3005cec2;
                _DAT_ram_30058c8c = (uint)(_DAT_ram_3005cec2 >> 1) << 0x10;
                DAT_ram_3004aca8 = 0x10000;
                DAT_ram_3004aca4 = 0x10000;
                _DAT_ram_30058c94 = 0;
              }
            }
            else {
              _DAT_ram_30058c94 = 0;
              uVar30 = (uVar14 & 0xffff) >> 1;
              uVar14 = (uVar30 + 0x7e00) * 2;
              if (0x101eb < uVar14) {
                uVar14 = 0x101eb;
              }
              if (uVar14 < 0xfe14) {
                uVar14 = 0xfe14;
              }
              uVar14 = ((int)(uVar14 - DAT_ram_3004aca8) >> 6) + DAT_ram_3004aca8;
              if ((int)uVar14 < 0xfe14) {
                DAT_ram_3004aca8 = 0xfe14;
              }
              else {
                DAT_ram_3004aca8 = 0x101eb;
                if ((int)uVar14 < 0x101ec) {
                  DAT_ram_3004aca8 = uVar14;
                }
              }
              uVar14 = DAT_ram_3004aca8;
              DAT_ram_3004aca4 = DAT_ram_3004aca8;
              puVar20 = (undefined2 *)&DAT_ram_30058dc0;
              if (uVar30 < ((_DAT_ram_30058c8c & 0xffff) + (uVar26 - 1) * DAT_ram_3004aca8 >> 0x10)
                           + (DAT_ram_3004aca8 + 0xffff >> 0x10) + 1) {
                bVar1 = false;
                uVar30 = 0;
                uVar32 = _DAT_ram_30058c8c;
                do {
                  uVar19 = (uint)_DAT_ram_3005cec2;
                  uVar18 = uVar32 >> 0x10;
                  uVar21 = uVar18 * 2 & 0x1ffe;
                  if (uVar19 < uVar21) {
                    uVar19 = uVar19 + 0x2000;
                  }
                  uVar21 = (uVar19 - uVar21 & 0xffff) >> 1;
                  if (uVar21 < 2) {
                    if (bVar1) {
                      _DAT_ram_30058c8c = uVar32;
                    }
                    uVar32 = _DAT_ram_30058c8c;
                    if (uVar30 < uVar26) {
                      _DAT_ram_30053d94 = _DAT_ram_30053d94 + 1;
                      if (uVar30 == 0) {
                        uVar25 = 0;
                        uVar22 = 0;
                      }
                      else {
                        uVar22 = *(undefined2 *)(&DAT_ram_30058dc0 + (uVar30 - 1) * 4);
                        uVar25 = *(undefined2 *)(&DAT_ram_30058dc2 + (uVar30 - 1) * 4);
                      }
                      do {
                        *(undefined2 *)(&DAT_ram_30058dc0 + uVar30 * 4) = uVar22;
                        *(undefined2 *)(&DAT_ram_30058dc2 + uVar30 * 4) = uVar25;
                        uVar30 = uVar30 + 1;
                        uVar32 = _DAT_ram_30058c8c;
                      } while (uVar26 != uVar30);
                    }
                    break;
                  }
                  uVar19 = uVar18 + 1;
                  uVar24 = uVar32 & 0xffff;
                  if (0xfff < uVar19) {
                    uVar19 = 0;
                  }
                  sVar5 = *(short *)((uVar18 * 2 + 1) * 2 + 0x30058ec0);
                  sVar6 = *(short *)((uVar19 * 2 + 1) * 2 + 0x30058ec0);
                  uVar21 = (uVar21 - 1) * 0x10000;
                  if (uVar14 < uVar21) {
                    uVar21 = uVar14;
                  }
                  *puVar20 = (short)((int)*(short *)(uVar19 * 4 + 0x30058ec0) * uVar24 +
                                     (int)*(short *)(uVar18 * 4 + 0x30058ec0) * (0x10000 - uVar24) +
                                     0x8000 >> 0x10);
                  uVar32 = uVar32 + uVar21;
                  puVar20[1] = (short)((int)sVar6 * uVar24 + (int)sVar5 * (0x10000 - uVar24) +
                                       0x8000 >> 0x10);
                  if (0xfffffff < uVar32) {
                    uVar32 = uVar32 + 0xf0000000;
                  }
                  uVar30 = uVar30 + 1;
                  puVar20 = puVar20 + 2;
                  bVar1 = true;
                } while (uVar26 != uVar30);
              }
              else {
                uVar30 = 0;
                do {
                  uVar32 = _DAT_ram_30058c8c >> 0x10;
                  uVar18 = uVar32 + 1;
                  uVar21 = _DAT_ram_30058c8c & 0xffff;
                  if (0xfff < uVar18) {
                    uVar18 = 0;
                  }
                  sVar5 = *(short *)((uVar32 * 2 + 1) * 2 + 0x30058ec0);
                  _DAT_ram_30058c8c = _DAT_ram_30058c8c + uVar14;
                  sVar6 = *(short *)((uVar18 * 2 + 1) * 2 + 0x30058ec0);
                  *puVar20 = (short)((int)*(short *)(uVar18 * 4 + 0x30058ec0) * uVar21 +
                                     (int)*(short *)(uVar32 * 4 + 0x30058ec0) * (0x10000 - uVar21) +
                                     0x8000 >> 0x10);
                  puVar20[1] = (short)((int)sVar6 * uVar21 + (int)sVar5 * (0x10000 - uVar21) +
                                       0x8000 >> 0x10);
                  if (0xfffffff < _DAT_ram_30058c8c) {
                    _DAT_ram_30058c8c = _DAT_ram_30058c8c + 0xf0000000;
                  }
                  uVar30 = uVar30 + 1;
                  puVar20 = puVar20 + 2;
                  uVar32 = _DAT_ram_30058c8c;
                } while (uVar26 != uVar30);
              }
              _DAT_ram_30058c8c = uVar32;
              _DAT_ram_3005cec0 = (ushort)(((_DAT_ram_30058c8c >> 0x10) << 0x11) >> 0x10);
            }
            goto LAB_ram_4000a6f0;
          }
          if (DAT_ram_30058c90 != '\0') {
            DAT_ram_30058c90 = '\0';
          }
          _DAT_ram_30058c8c = 0;
          DAT_ram_3004aca8 = 0x10000;
        }
        _DAT_ram_30058c94 = 0;
        memset(&DAT_ram_30058dc0,0,uVar26 << 2);
      }
LAB_ram_4000a6f0:
      iVar17 = FUN_ram_4002b39e();
      iVar15 = 0;
      if (iVar17 != 0) {
        FUN_ram_4002b468(0x30058cc0,uVar26,&uStack_10c);
        iVar15 = 0x30058cc0;
      }
      if (uVar26 != 0) {
        uVar14 = uVar26;
        if (0x40 < uVar26) {
          uVar14 = 0x40;
        }
        uVar30 = _DAT_ram_3004f690;
        if (_DAT_ram_3004f690 == 0) {
          uVar30 = 0xac44;
        }
        uStack_154 = uStack_10c & 0xff;
        FUN_ram_40024f40(uVar14,uVar30,&fStack_f0);
        fVar2 = DAT_ram_40096778;
        fVar37 = DAT_ram_3004ac88;
        iVar17 = 0;
        iVar31 = uVar14 << 2;
        do {
          uVar44 = (ulonglong)(uint)((float)(*(int *)(uVar23 + iVar17 * 2) >> 8) * fVar2 * fVar37);
          *(ulonglong *)(iVar17 + 0x3004ea20) = uVar44;
          *(ulonglong *)(iVar17 + 0x3004eb20) = uVar44;
          iVar17 = iVar17 + 4;
        } while (iVar31 != iVar17);
        fStack_100 = 0.0;
        uStack_fc = 0;
        uStack_f8 = 0;
        auStack_108[0] = CONCAT31(auStack_108[0]._1_3_,1);
        iVar17 = FUN_ram_40022e0c(&DAT_ram_3004f694);
        if (iVar17 == 0) {
          memset(0x3004ec20,0,iVar31);
          memset(0x3004ed20,0,iVar31);
          fStack_100 = 4.8356874e-10;
LAB_ram_4000aec6:
          uStack_fc = 0;
          uStack_f8 = uStack_f8 & 0xffffff00;
        }
        else {
          DAT_ram_3004f682 = 0;
          nc_dsp_process_chain_checked(0x3004ee20,0x3004ea20,0x3004eb20,0x3004ec20,0x3004ed20,uVar14,auStack_108
                           ,&fStack_100);
          if (DAT_ram_3004f710 != '\0') {
            iVar17 = 0;
            do {
              uVar44 = (ulonglong)
                       (uint)((float)(*(int *)(uVar23 + iVar17 * 2) >> 8) * fVar2 * fVar37);
              *(ulonglong *)(iVar17 + 0x3004ea20) = uVar44;
              *(ulonglong *)(iVar17 + 0x3004eb20) = uVar44;
              iVar17 = iVar17 + 4;
            } while (iVar31 != iVar17);
            fStack_100 = 4.835403e-10;
            goto LAB_ram_4000aec6;
          }
        }
        fVar37 = fStack_100;
        if (fStack_100 == 0.0) {
          fVar37 = 4.835403e-10;
        }
        uVar30 = 0;
        if ((uStack_f8 & 0xff) != 0) {
          uVar30 = uStack_fc;
        }
        FUN_ram_40022e30(&DAT_ram_3004f694,fVar37,uVar30,uVar14);
        FUN_ram_400088ac();
        if (DAT_ram_3004e4a5 != '\0') {
          memset(fVar37,0,iVar31);
          if (uVar30 != 0) {
            memset(uVar30,0,iVar31);
          }
        }
        fVar2 = (float)DAT_ram_3004ac94._5_1_ / DAT_ram_40096780;
        if ((float)DAT_ram_3004ac94 < 0.0) {
          fVar45 = 0.0;
        }
        else {
          fVar45 = (float)DAT_ram_3004ac94;
          if (DAT_ram_4009672c < (float)DAT_ram_3004ac94) {
            fVar45 = DAT_ram_4009672c;
          }
        }
        fVar46 = 0.0;
        fVar45 = (fVar45 - (float)_DAT_ram_3004ac90) * DAT_ram_40096774 + (float)_DAT_ram_3004ac90;
        _DAT_ram_3004ac90 = CONCAT44((float)DAT_ram_3004ac94,fVar45);
        iVar17 = FUN_ram_40022b0e();
        if ((iVar15 != 0) && (0 < iVar17)) {
          fVar46 = (float)iVar17 * DAT_ram_40096784;
        }
        if (uStack_154 != 1) {
          uStack_154 = 2;
        }
        iVar17 = FUN_ram_40022a98();
        fVar35 = 0.0;
        if ((DAT_ram_3005f0c8 == '\0') && (0 < iVar17)) {
          fVar35 = (float)iVar17 * DAT_ram_40096784;
        }
        iVar17 = FUN_ram_40022920();
        fVar38 = DAT_ram_4009676c;
        fVar36 = DAT_ram_40096764;
        fVar3 = DAT_ram_4009675c;
        fVar45 = fVar45 * DAT_ram_4009675c;
        iVar31 = 2;
        uVar32 = 0;
        do {
          fVar11 = DAT_ram_4009677c;
          fVar39 = fVar2 * (float)*(undefined8 *)((int)fVar37 + uVar32 * 4);
          fVar42 = DAT_ram_40096764;
          if ((DAT_ram_40096764 < fVar39) || (fVar42 = DAT_ram_40096768, fVar39 < DAT_ram_40096768))
          {
            fVar39 = fVar42;
          }
          if (uVar30 != 0) {
            fVar42 = fVar2 * (float)*(undefined8 *)(uVar32 * 4 + uVar30);
            fVar43 = fVar36;
            if ((fVar42 <= fVar36) && (fVar43 = fVar42, fVar42 < DAT_ram_40096768)) {
              fVar43 = DAT_ram_40096768;
            }
            fVar39 = (fVar43 + fVar39) * fVar3;
          }
          fVar42 = fVar39;
          fVar43 = fVar39;
          fVar41 = fVar39;
          if (0.0 < fVar46) {
            if (uStack_154 == 1) {
              fVar42 = (float)(int)*(short *)(iVar15 + uVar32 * 2) * DAT_ram_40096788 * fVar46;
              fVar43 = fVar42;
            }
            else {
              fVar42 = (float)(int)*(short *)(iVar15 + uVar32 * 4) * DAT_ram_40096788 * fVar46;
              fVar43 = (float)(int)*(short *)(iVar15 + iVar31) * DAT_ram_40096788 * fVar46;
            }
            fVar42 = fVar39 + fVar42;
            fVar43 = fVar39 + fVar43;
            if (iVar17 != 0) {
              fVar39 = fVar42;
              fVar41 = fVar43;
            }
          }
          if (0.0 < fVar35) {
            fVar40 = (float)(int)*(short *)(&DAT_ram_30058dc0 + uVar32 * 4) * DAT_ram_40096788 *
                     fVar35;
            fVar4 = (float)(int)*(short *)(&DAT_ram_30058dc0 + iVar31) * DAT_ram_40096788 * fVar35;
            fVar42 = fVar42 + fVar40;
            fVar43 = fVar43 + fVar4;
            if (iVar17 != 0) {
              fVar39 = fVar39 + fVar40;
              fVar41 = fVar41 + fVar4;
            }
          }
          if ((cVar10 != '\0') && (DAT_ram_30058c84 != '\0')) {
            fVar39 = fVar39 * fVar45;
            fVar41 = fVar41 * fVar45;
            fVar40 = DAT_ram_40096764;
            if ((DAT_ram_40096764 < fVar39) ||
               (fVar40 = DAT_ram_40096768, fVar39 < DAT_ram_40096768)) {
              fVar39 = fVar40;
            }
            fVar40 = (float)FUN_ram_40007600(fVar39);
            fVar39 = DAT_ram_40096764;
            if ((DAT_ram_40096764 < fVar41) ||
               (fVar39 = DAT_ram_40096768, fVar41 < DAT_ram_40096768)) {
              fVar41 = fVar39;
            }
            fVar41 = (float)FUN_ram_40007600(fVar41);
            fVar39 = fVar38;
            if ((fVar40 <= fVar38) && (fVar39 = fVar40, fVar40 < DAT_ram_40096728)) {
              fVar39 = DAT_ram_40096728;
            }
            fVar40 = fVar38;
            if ((fVar41 <= fVar38) && (fVar40 = fVar41, fVar41 < DAT_ram_40096728)) {
              fVar40 = DAT_ram_40096728;
            }
            uVar16 = FUN_ram_400002f4();
            if (DAT_ram_30058c84 != '\0') {
              uVar21 = _DAT_ram_30058c82 + 1 & 0x1fff;
              if ((_DAT_ram_30058c80 == uVar21) ||
                 ((uint)_DAT_ram_30058c80 == (uVar21 + 1 & 0x1fff))) {
                _DAT_ram_3004f788 = _DAT_ram_3004f788 + 1;
              }
              else {
                *(short *)((uint)_DAT_ram_30058c82 * 2 + 0x30054c80) =
                     (short)((uint)(int)(fVar39 * fVar11) >> 8);
                *(short *)(uVar21 * 2 + 0x30054c80) = (short)((uint)(int)(fVar40 * fVar11) >> 8);
                _DAT_ram_30058c82 = (ushort)(uVar21 + 1) & 0x1fff;
              }
            }
            FUN_ram_400002fa(uVar16);
          }
          fVar42 = fVar42 * fVar45;
          fVar43 = fVar43 * fVar45;
          fVar39 = DAT_ram_40096764;
          if ((DAT_ram_40096764 < fVar42) || (fVar39 = DAT_ram_40096768, fVar42 < DAT_ram_40096768))
          {
            fVar42 = fVar39;
          }
          fVar42 = (float)FUN_ram_40007600(fVar42);
          fVar39 = DAT_ram_40096764;
          if ((DAT_ram_40096764 < fVar43) || (fVar39 = DAT_ram_40096768, fVar43 < DAT_ram_40096768))
          {
            fVar43 = fVar39;
          }
          fVar43 = (float)FUN_ram_40007600(fVar43);
          fVar39 = fVar38;
          if ((fVar42 <= fVar38) && (fVar39 = fVar42, fVar42 < DAT_ram_40096728)) {
            fVar39 = DAT_ram_40096728;
          }
          *(int *)(&DAT_ram_30054a40 + uVar32 * 8) = (int)(fVar39 * fVar11) << 8;
          fVar39 = fVar38;
          if ((fVar43 <= fVar38) && (fVar39 = fVar43, fVar43 < DAT_ram_40096728)) {
            fVar39 = DAT_ram_40096728;
          }
          uVar32 = uVar32 + 1;
          *(int *)(&DAT_ram_30054a40 + iVar31 * 2) = (int)(fVar39 * fVar11) << 8;
          iVar31 = iVar31 + 4;
        } while (uVar14 != uVar32);
      }
    }
    else {
      if ((DAT_ram_30051d6d == '\0') || (DAT_ram_3004ac9c == '\0')) {
        if (uVar26 != 0) {
          uVar14 = uVar26;
          if (0x40 < uVar26) {
            uVar14 = 0x40;
          }
          uVar30 = _DAT_ram_3004f690;
          if (_DAT_ram_3004f690 == 0) {
            uVar30 = 0xac44;
          }
          FUN_ram_40024f40(uVar14,uVar30,&fStack_f0);
          fVar46 = DAT_ram_40096778;
          fVar45 = DAT_ram_40096768;
          fVar2 = DAT_ram_40096764;
          fVar37 = DAT_ram_3004ac88;
          if ((float)DAT_ram_3004ac94 < 0.0) {
            fVar35 = 0.0;
          }
          else {
            fVar35 = (float)DAT_ram_3004ac94;
            if (DAT_ram_4009672c < (float)DAT_ram_3004ac94) {
              fVar35 = DAT_ram_4009672c;
            }
          }
          fVar35 = (fVar35 - (float)_DAT_ram_3004ac90) * DAT_ram_40096774 + (float)_DAT_ram_3004ac90
          ;
          _DAT_ram_3004ac90 = (ulonglong)(uint)fVar35;
          iVar17 = 0;
          do {
            fVar3 = (float)(*(int *)(uVar23 + iVar17 * 2) >> 8) * fVar46 * fVar37;
            uVar44 = (ulonglong)(uint)fVar3;
            if (fVar2 < fVar3) {
              uVar44 = (ulonglong)(uint)fVar2;
            }
            else if (fVar3 < fVar45) {
              uVar44 = (ulonglong)(uint)fVar45;
            }
            *(ulonglong *)(iVar17 + 0x3004ea20) = uVar44;
            *(ulonglong *)(iVar17 + 0x3004eb20) = uVar44;
            iVar17 = iVar17 + 4;
          } while (uVar14 << 2 != iVar17);
          FUN_ram_40022e30(&DAT_ram_3004f694,0x3004ea20,0x3004eb20);
          FUN_ram_400088ac();
          fVar3 = DAT_ram_4009677c;
          fVar46 = DAT_ram_4009676c;
          fVar45 = DAT_ram_40096768;
          fVar2 = DAT_ram_40096764;
          fVar37 = DAT_ram_40096728;
          fVar35 = fVar35 * DAT_ram_4009675c;
          piVar27 = (int *)&DAT_ram_30054a40;
          iVar17 = 0;
          do {
            fVar36 = (float)*(undefined8 *)(iVar17 + 0x3004ea20) * fVar35;
            fVar38 = (float)*(undefined8 *)(iVar17 + 0x3004eb20) * fVar35;
            fVar39 = fVar2;
            if ((fVar36 <= fVar2) && (fVar39 = fVar36, fVar36 < fVar45)) {
              fVar39 = fVar45;
            }
            fVar36 = fVar2;
            if ((fVar38 <= fVar2) && (fVar36 = fVar38, fVar38 < fVar45)) {
              fVar36 = fVar45;
            }
            fVar38 = (float)FUN_ram_40007600(fVar39);
            fVar39 = (float)FUN_ram_40007600(fVar36);
            fVar36 = fVar46;
            if ((fVar38 <= fVar46) && (fVar36 = fVar38, fVar38 < fVar37)) {
              fVar36 = fVar37;
            }
            *piVar27 = (int)(fVar36 * fVar3) << 8;
            fVar36 = fVar46;
            if ((fVar39 <= fVar46) && (fVar36 = fVar39, fVar39 < fVar37)) {
              fVar36 = fVar37;
            }
            iVar17 = iVar17 + 4;
            piVar27[1] = (int)(fVar36 * fVar3) << 8;
            piVar27 = piVar27 + 2;
          } while (uVar14 << 2 != iVar17);
        }
      }
      else {
        memset(&DAT_ram_30054a40,0,iVar29);
        FUN_ram_400088c6(uVar26);
      }
      if ((cVar10 != '\0') && (DAT_ram_30058c84 != '\0')) {
        FUN_ram_40008252(&DAT_ram_30054a40,uVar26);
      }
      fVar37 = DAT_ram_3004ac88;
      if (((DAT_ram_30051d6d != '\0') && (DAT_ram_30051d6d != '\0')) && (uVar26 != 0)) {
        uVar14 = _DAT_ram_30053d80;
        for (uVar30 = 0; uVar30 != (uVar26 & 0xfffffffc); uVar30 = uVar30 + 4) {
          iVar15 = 0;
          iVar17 = 0;
          do {
            iVar31 = iVar17 * 8;
            iVar17 = iVar17 + 1;
            iVar15 = iVar15 + (*(int *)(uVar23 + uVar30 * 8 + iVar31) >> 0x10);
          } while (iVar17 != 4);
          iVar17 = (int)((float)(int)(short)(iVar15 / 4) * fVar37);
          if (iVar17 < -0x8000) {
            iVar17 = -0x8000;
          }
          if (0x7fff < iVar17) {
            iVar17 = 0x7fff;
          }
          if (0xfff < uVar14 - _DAT_ram_30051d70) {
            _DAT_ram_30051d70 = _DAT_ram_30051d70 + 1;
          }
          *(short *)((uVar14 & 0xfff) * 2 + 0x30051d80) = (short)iVar17;
          uVar14 = uVar14 + 1;
        }
        _DAT_ram_30053d80 = _DAT_ram_30053d80 + (uVar34 >> 3);
      }
    }
  }
  else {
    FUN_ram_4000303c(&DAT_ram_30054a40,uVar23,iVar29);
    if (uVar26 != 0) {
      if (DAT_ram_3004f6a0 == '\0' && DAT_ram_3004f6a1 == '\0') {
        FUN_ram_400088c6(uVar26);
      }
      else {
        iVar17 = 0;
        uVar14 = 0;
        piVar27 = (int *)&DAT_ram_30054a40;
        do {
          fStack_100 = (float)*piVar27;
          fStack_f0 = (float)piVar27[1];
          uVar14 = uVar14 + 1;
          iVar15 = FUN_ram_40022e30(&DAT_ram_3004f694,&fStack_100,&fStack_f0,1);
          if (iVar15 != 0) {
            iVar17 = iVar15;
          }
          *piVar27 = (int)fStack_100;
          piVar27[1] = (int)fStack_f0;
          piVar27 = piVar27 + 2;
        } while (uVar26 != uVar14);
        FUN_ram_400088ac(iVar17);
      }
    }
    if ((cVar10 != '\0') && (DAT_ram_30058c84 != '\0')) {
      FUN_ram_40008252(uVar23,uVar26);
    }
  }
  if (DAT_ram_3004ac94._6_1_ != '\0') {
    bVar1 = false;
    if (uVar26 != 0) {
      lVar7 = 0;
      uVar30 = 0;
      uVar32 = 0;
      uVar21 = 0;
      uVar14 = *(int *)(param_1 * uVar34 * 4 + 0x30054640) >> 8;
      do {
        iVar17 = *(int *)(uVar23 + uVar21 * 8);
        uVar24 = iVar17 >> 8;
        uVar18 = iVar17 >> 0x1f;
        uVar19 = (uVar18 ^ uVar24) - uVar18;
        if (uVar32 < uVar19) {
          uVar32 = uVar19;
        }
        if ((uVar21 != 0) &&
           (uVar19 = (int)(uVar24 - uVar14) >> 0x1f, uVar19 = (uVar24 - uVar14 ^ uVar19) - uVar19,
           uVar30 < uVar19)) {
          uVar30 = uVar19;
        }
        uVar21 = uVar21 + 1;
        lVar7 = lVar7 + CONCAT44(uVar18,uVar24);
        uVar14 = uVar24;
      } while (uVar26 != uVar21);
      if (lVar7 < 0) {
        lVar7 = -lVar7;
      }
      uVar14 = FUN_ram_40003808((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),uVar26,0);
      bVar1 = false;
      if ((uVar32 < 0x79999a) && (uVar14 < 0x19999a)) {
        bVar1 = uVar30 < 0x733334;
      }
    }
    _DAT_ram_30051874 = _DAT_ram_30051874 + 1;
    if (bVar1) {
      _DAT_ram_30051876 = _DAT_ram_30051876 + 1;
    }
    else {
      _DAT_ram_30051876 = 0;
    }
    if ((0x7f < _DAT_ram_30051874) && ((0xf < _DAT_ram_30051876 || (0x1bf < _DAT_ram_30051874)))) {
      DAT_ram_3004ac94._6_1_ = '\0';
      _DAT_ram_3004ac90 = _DAT_ram_3004ac90 & 0xffffffff00000000;
    }
    memset(&DAT_ram_30054a40,0,iVar29);
  }
  if (DAT_ram_30051879 == '\0') {
    if ((((DAT_ram_3004ab12 != '\0') && (DAT_ram_30051818 == '\0')) &&
        (DAT_ram_3004ac94._6_1_ == '\0')) && (DAT_ram_3004e474 == '\0')) {
      DAT_ram_30051878 = 1;
    }
LAB_ram_4000a074:
    _DAT_ram_3004ac90 = _DAT_ram_3004ac90 & 0xffffffff00000000;
    memset(&DAT_ram_30054a40,0,iVar29);
  }
  else if (_DAT_ram_3005187c != 0) {
    _DAT_ram_3005187c = _DAT_ram_3005187c + -1;
    goto LAB_ram_4000a074;
  }
  if (((DAT_ram_3005187a == '\0') && (DAT_ram_3004ab12 != '\0')) &&
     ((DAT_ram_30051818 == '\0' && ((DAT_ram_30051879 != '\0' && (_DAT_ram_3005187c == 0)))))) {
    FUN_ram_40008452(1);
    DAT_ram_3005187a = '\x01';
    _DAT_ram_3005187e = 0x20;
  }
  if (_DAT_ram_3005187e != 0) {
    _DAT_ram_3005187e = _DAT_ram_3005187e + -1;
    _DAT_ram_3004ac90 = _DAT_ram_3004ac90 & 0xffffffff00000000;
    memset(&DAT_ram_30054a40,0,iVar29);
  }
  if (((DAT_ram_3005187a == '\0') || (DAT_ram_3004ab12 == '\0')) || (DAT_ram_30051818 != '\0')) {
    _DAT_ram_3004ac90 = _DAT_ram_3004ac90 & 0xffffffff00000000;
    memset(&DAT_ram_30054a40,0,iVar29);
  }
  uVar14 = uVar34;
  if (((uVar34 == 0x80) && (DAT_ram_30051879 != '\0')) &&
     ((DAT_ram_3004e474 == '\0' && (DAT_ram_3004f6a0 == '\0' && DAT_ram_3004f6a1 == '\0')))) {
    uVar30 = _DAT_ram_3004e514 - _DAT_ram_3004e4e8;
    if (uVar30 < DAT_ram_3004ab18) {
      DAT_ram_3004ab18 = uVar30;
    }
    if (_DAT_ram_3004e4d8 < uVar30) {
      _DAT_ram_3004e4d8 = uVar30;
    }
    if (uVar30 < 0x81) {
      if (0x27 < uVar30) {
        _DAT_ram_3004e4e0 = _DAT_ram_3004e4e0 + 1;
        goto LAB_ram_4000b13a;
      }
      uVar14 = 0x41;
      _DAT_ram_3004e4dc = _DAT_ram_3004e4dc + 1;
    }
    else {
      uVar14 = 0x3f;
      _DAT_ram_3004e4e4 = _DAT_ram_3004e4e4 + 1;
    }
    uVar30 = 0;
    do {
      uVar32 = uVar30;
      if (uVar14 == 0x41) {
        uVar32 = 0x40 - uVar30;
      }
      uVar21 = FUN_ram_40003bf8((int)((ulonglong)uVar32 * 0x3f) << 0x10,
                                (int)((ulonglong)uVar32 * 0x3f >> 0x10),uVar14 - 1,0);
      uVar19 = uVar21 >> 0x10;
      uVar18 = uVar19 + 1;
      if (0x3f < uVar18) {
        uVar18 = 0x3f;
      }
      uVar21 = uVar21 & 0xffff;
      uVar44 = (longlong)*(int *)(&DAT_ram_30054a40 + uVar18 * 8) -
               (longlong)*(int *)(&DAT_ram_30054a40 + uVar19 * 8);
      lVar7 = (uVar44 & 0xffffffff) * (ulonglong)uVar21;
      uVar30 = uVar30 + 1;
      *(uint *)(&DAT_ram_30054a40 + uVar32 * 8) =
           ((uint)(((ulonglong)((int)((ulonglong)lVar7 >> 0x20) + uVar21 * (int)(uVar44 >> 0x20)) <<
                   0x20) >> 0x10) | (uint)((ulonglong)lVar7 >> 0x10) & 0xffff) +
           *(int *)(&DAT_ram_30054a40 + uVar19 * 8);
      uVar44 = (longlong)*(int *)(&DAT_ram_30054a44 + uVar18 * 8) -
               (longlong)*(int *)(&DAT_ram_30054a44 + uVar19 * 8);
      lVar7 = (uVar44 & 0xffffffff) * (ulonglong)uVar21;
      *(uint *)(&DAT_ram_30054a40 + (uVar32 * 2 + 1) * 4) =
           *(int *)(&DAT_ram_30054a44 + uVar19 * 8) +
           ((uint)(((ulonglong)((int)((ulonglong)lVar7 >> 0x20) + uVar21 * (int)(uVar44 >> 0x20)) <<
                   0x20) >> 0x10) | (uint)((ulonglong)lVar7 >> 0x10) & 0xffff);
    } while (uVar14 != uVar30);
    uVar14 = uVar14 << 1;
  }
LAB_ram_4000b13a:
  if ((uVar14 - 1 < 0x1ff) && ((uVar14 & 1) == 0)) {
    uVar30 = _DAT_ram_3004e514 - _DAT_ram_3004e4e8;
    if (uVar30 < 0x200) {
      uVar32 = (_DAT_ram_3004e4e8 + 0x1ff) - _DAT_ram_3004e514;
      if (DAT_ram_3004e508 != '\0') {
        iVar29 = FUN_ram_400076d8();
        uVar30 = uVar30 + 0x18 + iVar29;
      }
      DAT_ram_3004ab14 = uVar30;
      _DAT_ram_3004e4ec = uVar30;
      if (uVar14 <= uVar32) {
        uVar32 = _DAT_ram_3004e514 & 0x1ff;
        uVar30 = uVar14;
        if (0x200 < uVar32 + uVar14) {
          uVar30 = 0x200 - uVar32;
        }
        FUN_ram_4000303c(uVar32 * 4 + 0x30053e40,&DAT_ram_30054a40,uVar30 * 4);
        if (uVar30 < uVar14) {
          FUN_ram_4000303c(0x30053e40,&DAT_ram_30054a40 + uVar30 * 4,(uVar14 - uVar30) * 4);
        }
        FUN_ram_400002f4();
        _DAT_ram_3004e514 = _DAT_ram_3004e514 + uVar14;
        if ((DAT_ram_3004e4bc != '\0') &&
           (((DAT_ram_30051879 == '\0' || (DAT_ram_3004e474 != '\0')) &&
            (_DAT_ram_30051868 == _DAT_ram_30051864)))) {
          if (uVar14 + 0x28 < _DAT_ram_3004e514 - _DAT_ram_3004e4e8) {
            uVar14 = (_DAT_ram_3004e514 - _DAT_ram_3004e4e8) - (uVar14 + 0x28) & 0xfffffffe;
            _DAT_ram_3004e4e8 = _DAT_ram_3004e4e8 + uVar14;
            _DAT_ram_3004e4d0 = uVar14 + _DAT_ram_3004e4d0;
          }
          DAT_ram_3004e4a7 = 8;
          DAT_ram_3004e4bc = '\0';
          DAT_ram_3004e4b4 = 1;
          _DAT_ram_3004e4b0 = _DAT_ram_3004e4e8;
          _DAT_ram_3004e4ac = _DAT_ram_3004e4f4;
          _DAT_ram_3004e4b8 = _DAT_ram_3004e500;
          _DAT_ram_3004e4c0 = _DAT_ram_30051868;
          _DAT_ram_3004e4a8 = _DAT_ram_3004e4d0;
          DAT_ram_30051879 = '\x01';
          DAT_ram_30051878 = 0;
          DAT_ram_3004e474 = '\0';
          _DAT_ram_3004e4c4 = _DAT_ram_3004e514;
        }
        FUN_ram_400002fa();
        uVar14 = _DAT_ram_3004e514 - _DAT_ram_3004e4e8;
        if (DAT_ram_3004e508 != '\0') {
          iVar29 = FUN_ram_400076d8();
          uVar14 = uVar14 + 0x18 + iVar29;
        }
        DAT_ram_3004ab14 = uVar14;
        if (_DAT_ram_3004f690 != 0) {
          if (_DAT_ram_3004f690 == 0) {
            uVar30 = 0xffffffff;
            uVar32 = 0xffffffff;
          }
          else {
            uVar30 = (DAT_ram_3004ac78 * 500000) / _DAT_ram_3004f690;
            uVar32 = (uVar14 * 500000) / _DAT_ram_3004f690;
          }
          uVar30 = uVar30 + uVar32;
          if (uVar30 < DAT_ram_3004ab94) {
            DAT_ram_3004ab94 = uVar30;
          }
          if (DAT_ram_3004ab98 < uVar30) {
            DAT_ram_3004ab98 = uVar30;
          }
          if (uVar14 < DAT_ram_3004ab70) {
            DAT_ram_3004ab70 = uVar14;
          }
        }
        goto LAB_ram_4000b178;
      }
    }
    _DAT_ram_3004e4d4 = _DAT_ram_3004e4d4 + 1;
    DAT_ram_3004abc0 = DAT_ram_3004abc0 + 1;
  }
LAB_ram_4000b178:
  fStack_100 = 0.0;
  fStack_f0 = 0.0;
  uStack_fc = 0;
  uStack_ec = 0;
  uStack_10c = 0;
  auStack_108[0] = 0;
  bVar1 = DAT_ram_300517e4 != -1;
  DAT_ram_300517e4 = DAT_ram_300517e4 + '\x01';
  if (bVar1) {
    DAT_ram_300517e4 = '\0';
    if (uVar34 != 0) {
      FUN_ram_400081f0(uVar23,uVar34,&uStack_10c,&fStack_100);
      FUN_ram_400081f0(&DAT_ram_30054a40,uVar34,auStack_108,&fStack_f0);
    }
    _DAT_ram_3004e438 = uStack_10c;
    if (uStack_10c < _DAT_ram_300517e8) {
      _DAT_ram_3004e438 = _DAT_ram_300517e8 - (_DAT_ram_300517e8 - uStack_10c >> 7);
    }
    if ((uStack_fc < _DAT_ram_300517f4) ||
       ((_DAT_ram_3004e440 = CONCAT44(uStack_fc,fStack_100), _DAT_ram_300517f4 == uStack_fc &&
        (_DAT_ram_3004e440 = CONCAT44(uStack_fc,fStack_100),
        (uint)fStack_100 < (uint)_DAT_ram_300517f0)))) {
      uVar44 = _DAT_ram_300517f0 - CONCAT44(uStack_fc,fStack_100);
      uVar23 = (uint)(uVar44 >> 0x20);
      _DAT_ram_3004e440 =
           _DAT_ram_300517f0 -
           CONCAT44(uVar23 >> 7,(int)(((ulonglong)uVar23 << 0x20 | uVar44 & 0xffffffff) >> 7));
    }
    uVar23 = (uint)((ulonglong)_DAT_ram_3004e440 >> 0x20);
    _DAT_ram_3004e448 = auStack_108[0];
    if (auStack_108[0] < _DAT_ram_300517f8) {
      _DAT_ram_3004e448 = _DAT_ram_300517f8 - (_DAT_ram_300517f8 - auStack_108[0] >> 7);
    }
    if ((uStack_ec < _DAT_ram_30051804) ||
       ((_DAT_ram_3004e450 = CONCAT44(uStack_ec,fStack_f0), _DAT_ram_30051804 == uStack_ec &&
        (_DAT_ram_3004e450 = CONCAT44(uStack_ec,fStack_f0),
        (uint)fStack_f0 < (uint)_DAT_ram_30051800)))) {
      uVar44 = _DAT_ram_30051800 - CONCAT44(uStack_ec,fStack_f0);
      uVar14 = (uint)(uVar44 >> 0x20);
      _DAT_ram_3004e450 =
           _DAT_ram_30051800 -
           CONCAT44(uVar14 >> 7,(int)(((ulonglong)uVar14 << 0x20 | uVar44 & 0xffffffff) >> 7));
    }
    uVar14 = (uint)((ulonglong)_DAT_ram_3004e450 >> 0x20);
    iVar29 = 7;
    do {
      if (*(uint *)(iVar29 * 4 + 0x400967e4) <= _DAT_ram_3004e438) {
        DAT_ram_3004e458 = (char)iVar29 + '\x01';
        goto LAB_ram_4000b2ba;
      }
      iVar29 = iVar29 + -1;
    } while (iVar29 != -1);
    DAT_ram_3004e458 = '\0';
LAB_ram_4000b2ba:
    puVar12 = &DAT_ram_40096808;
    iVar29 = 7;
    puVar28 = puVar12;
    do {
      if ((*(uint *)(puVar28 + 0x3c) <= uVar23) &&
         ((*(uint *)(puVar28 + 0x3c) != uVar23 ||
          (*(uint *)(puVar28 + 0x38) <= (uint)_DAT_ram_3004e440)))) {
        DAT_ram_3004e459 = (char)iVar29 + '\x01';
        goto LAB_ram_4000b2ea;
      }
      iVar29 = iVar29 + -1;
      puVar28 = puVar28 + -8;
    } while (iVar29 != -1);
    DAT_ram_3004e459 = '\0';
LAB_ram_4000b2ea:
    iVar29 = 7;
    do {
      if (*(uint *)(iVar29 * 4 + 0x400967e4) <= _DAT_ram_3004e448) {
        DAT_ram_3004e45a = (char)iVar29 + '\x01';
        goto LAB_ram_4000b300;
      }
      iVar29 = iVar29 + -1;
    } while (iVar29 != -1);
    DAT_ram_3004e45a = '\0';
LAB_ram_4000b300:
    iVar29 = 7;
    do {
      if ((*(uint *)(puVar12 + 0x3c) <= uVar14) &&
         ((*(uint *)(puVar12 + 0x3c) != uVar14 ||
          (*(uint *)(puVar12 + 0x38) <= (uint)_DAT_ram_3004e450)))) {
        cStack_158 = (char)iVar29 + '\x01';
        goto LAB_ram_4000b328;
      }
      iVar29 = iVar29 + -1;
      puVar12 = puVar12 + -8;
    } while (iVar29 != -1);
    cStack_158 = '\0';
LAB_ram_4000b328:
    DAT_ram_3004e45b = cStack_158;
    _DAT_ram_300517e8 = _DAT_ram_3004e438;
    _DAT_ram_300517f0 = _DAT_ram_3004e440;
    _DAT_ram_300517f8 = _DAT_ram_3004e448;
    _DAT_ram_30051800 = _DAT_ram_3004e450;
  }
  FUN_ram_40076988(_DAT_ram_3004f7ac);
  fence();
  uVar23 = *(int *)(_DAT_ram_3004f738 + 0x28) << 1;
  if (uVar34 != 0) {
    uVar23 = uVar23 % uVar34;
  }
  if (uVar23 < DAT_ram_3004aba4) {
    DAT_ram_3004aba4 = uVar23;
  }
  if (DAT_ram_3004aba8 < uVar23) {
    DAT_ram_3004aba8 = uVar23;
  }
  if ((((_DAT_ram_3004e470 != 0) && (DAT_ram_30051879 != '\0')) && (_DAT_ram_3004e46c == 0)) &&
     (_DAT_ram_3005187c == 0)) {
    if ((DAT_ram_3004ac78 == 0x80) && (DAT_ram_3004e4a5 == '\0')) {
      _DAT_ram_30058c88 = 0;
    }
    else {
      _DAT_ram_30058c88 = _DAT_ram_30058c88 + 1;
      if (0x13 < _DAT_ram_30058c88) {
        DAT_ram_3004e4a6 = 0;
        _DAT_ram_30058c88 = 0;
        _DAT_ram_3004e46c = 0x80;
        FUN_ram_40004920();
      }
    }
  }
  iVar29 = FUN_ram_40040028();
  uVar34 = iVar29 - iVar13;
  lVar7 = (ulonglong)uVar34 + CONCAT44(DAT_ram_3004ab24,DAT_ram_3004ab20);
  DAT_ram_3004ab30 = DAT_ram_3004ab30 + 1;
  DAT_ram_3004ab34 = uVar26 + DAT_ram_3004ab34;
  if (uVar34 < DAT_ram_3004ab28) {
    DAT_ram_3004ab28 = uVar34;
  }
  if (DAT_ram_3004ab2c < uVar34) {
    DAT_ram_3004ab2c = uVar34;
  }
  lVar8 = _DAT_ram_3004e450;
  uVar9 = _DAT_ram_3004f688;
  if ((DAT_ram_3004ab3c != 0) && (DAT_ram_3004ab3c < uVar34)) {
    DAT_ram_3004ab40 = DAT_ram_3004ab40 + 1;
  }
LAB_ram_4000b40c:
  _DAT_ram_3004f68c = (int)((ulonglong)uVar9 >> 0x20);
  _DAT_ram_3004f688 = (int)uVar9;
  _DAT_ram_3004e454 = (undefined4)((ulonglong)lVar8 >> 0x20);
  _DAT_ram_3004e450 = (undefined4)lVar8;
  DAT_ram_3004ab24 = (undefined4)((ulonglong)lVar7 >> 0x20);
  DAT_ram_3004ab20 = (undefined4)lVar7;
  return;
}


/* NanoCore 1.12, address 0x4000b698.
 * REA evidence: ev_6c3d64e90a2eb461cd1d684dc8cff682eb00056732e1b854314111508666d4d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_audio_block_worker(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  do {
    do {
      iVar3 = FUN_ram_4000487e(_DAT_ram_3004e430,0xffffffff);
    } while (iVar3 != 0);
    while (FUN_ram_400002f4(), _DAT_ram_30051864 != _DAT_ram_30051868) {
      uVar4 = _DAT_ram_30051868 - _DAT_ram_30051864;
      if (uVar4 < 9) {
        iVar3 = 0;
        iVar2 = 0;
        if (uVar4 != 1) goto LAB_ram_4000b70a;
      }
      else {
        iVar3 = uVar4 - 8;
        _DAT_ram_30051864 = _DAT_ram_30051864 + iVar3;
        uVar4 = 8;
LAB_ram_4000b70a:
        _DAT_ram_30051864 = _DAT_ram_30051864 + (uVar4 - 1);
        iVar2 = iVar3 + (uVar4 - 1);
      }
      if (_DAT_ram_30051864 == *(uint *)((_DAT_ram_30051864 & 7) * 8 + 0x30051824)) {
        bVar1 = *(byte *)((_DAT_ram_30051864 & 7) * 8 + 0x30051828);
        _DAT_ram_30051864 = _DAT_ram_30051864 + 1;
        FUN_ram_400002fa();
        if (iVar2 != 0) {
          FUN_ram_40008358(iVar2);
        }
        if (1 < bVar1) {
          iVar2 = 1;
          goto LAB_ram_4000b732;
        }
        DAT_ram_3004e460 = 1;
        if (DAT_ram_30051819 == '\0') {
          nc_audio_process_dma_half(bVar1);
        }
        DAT_ram_3004e460 = 0;
      }
      else {
        _DAT_ram_30051864 = _DAT_ram_30051864 + 1;
        FUN_ram_400002fa();
        iVar2 = iVar2 + 1;
LAB_ram_4000b732:
        FUN_ram_40008358(iVar2);
      }
    }
    FUN_ram_400002fa();
  } while( true );
}


/* NanoCore 1.12, address 0x4000e9f0.
 * REA evidence: ev_601ab4b8b706f06b48645bdbc6fa8a5d5a6df2e4de7d132c64728b29c26cb301
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nc_audio_engine_init(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uStack_90;
  uint *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint auStack_70 [2];
  uint *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  FUN_ram_40008452(0);
  FUN_ram_400083ea(s_PD_10_ram_400966cc,0);
  FUN_ram_400064e4(0x50);
  FUN_ram_400083ea(s_PD_10_ram_400966cc,1);
  FUN_ram_400064e4(0x50);
  FUN_ram_400112ac();
  if (_DAT_ram_3004f728 == 0) {
    _DAT_ram_3004f728 = FUN_ram_40008e9a(0x2000);
  }
  if (_DAT_ram_30051808 == 0) {
    _DAT_ram_30051808 = FUN_ram_40008e9a(0x2000);
  }
  if (_DAT_ram_3004f728 == 0) {
    return 0xffffffff;
  }
  if (_DAT_ram_30051808 == 0) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004f72c == 0) &&
     (_DAT_ram_3004f72c = FUN_ram_40008e9a(0xe48), _DAT_ram_3004f72c == 0)) {
    return 0xffffffff;
  }
  if (_DAT_ram_3005181c == 0) {
    iVar3 = FUN_ram_40005604(0x74c68,0x40);
    if (iVar3 == 0) {
      _DAT_ram_3005181c = iVar3;
      _DAT_ram_3005181c = FUN_ram_40008e9a(0x74c68);
      if (_DAT_ram_3005181c == 0) {
        return 0xffffffff;
      }
    }
    else {
      memset(iVar3,0,0x74c68);
      _DAT_ram_3005181c = iVar3;
    }
  }
  if (_DAT_ram_3004f7ac == 0) {
    if (_DAT_ram_3005181c + 0xcffc0000U < 0x100000) {
      iVar3 = FUN_ram_40005604(0x5240,0x40);
      if (iVar3 != 0) {
        memset(iVar3,0,0x5240);
        _DAT_ram_3004f7ac = iVar3;
        goto LAB_ram_4000eb1c;
      }
      _DAT_ram_3004f7ac = 0;
    }
    _DAT_ram_3004f7ac = FUN_ram_40008e9a(0x5240);
    if (_DAT_ram_3004f7ac == 0) {
      return 0xffffffff;
    }
  }
LAB_ram_4000eb1c:
  if ((_DAT_ram_300517e0 == (int *)0x0) &&
     (_DAT_ram_300517e0 = (int *)FUN_ram_40008e9a(0x38), _DAT_ram_300517e0 == (int *)0x0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_30051814 == 0) &&
     (_DAT_ram_30051814 = FUN_ram_40008e9a(0x192ec), _DAT_ram_30051814 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004e524 == 0) &&
     (_DAT_ram_3004e524 = FUN_ram_40008e9a(0x24c), _DAT_ram_3004e524 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004f724 == 0) &&
     (_DAT_ram_3004f724 = FUN_ram_40008e9a(0x2148), _DAT_ram_3004f724 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004f734 == 0) &&
     (_DAT_ram_3004f734 = FUN_ram_40008e9a(0x2148), _DAT_ram_3004f734 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004f714 == 0) &&
     (_DAT_ram_3004f714 = FUN_ram_40008e9a(0x268), _DAT_ram_3004f714 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004f71c == 0) &&
     (_DAT_ram_3004f71c = FUN_ram_40008e9a(0x5c), _DAT_ram_3004f71c == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3005180c == 0) &&
     (_DAT_ram_3005180c = FUN_ram_40008e9a(0xe48), _DAT_ram_3005180c == 0)) {
    return 0xffffffff;
  }
  _DAT_ram_3004f690 = 0xac44;
  if ((DAT_ram_3004f7dc == '\0') &&
     (iVar3 = FUN_ram_40004988(0x3004f7b0,s_ir_sel_ram_400966d4,1), iVar3 == 0)) {
    DAT_ram_3004f7dc = '\x01';
  }
  if ((DAT_ram_3004e4a4 == '\0') &&
     (iVar3 = FUN_ram_40004988(0x3004e478,s_chain_ed_ram_400966dc,1), iVar3 == 0)) {
    DAT_ram_3004e4a4 = '\x01';
  }
  if (DAT_ram_3004f6e4 == '\0') {
    iVar3 = FUN_ram_40004988(0x3004f6b4,s_dsp_xfer_ram_400966e8,1);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    iVar3 = FUN_ram_40004800(0x3004f6e8,s_dsp_ack_ram_400966f4,0,0);
    if (iVar3 != 0) {
      FUN_ram_400049bc(0x3004f6b4);
      return 0xffffffff;
    }
    FUN_ram_40022d12(&DAT_ram_3004f694,0xac44,6,8);
    DAT_ram_3004f6e4 = '\x01';
  }
  FUN_ram_4009153c();
  FUN_ram_4009339c();
  iVar3 = nc_model_context_init(0x30051880);
  if (iVar3 == 0) {
    FUN_ram_40007aea();
    DAT_ram_300518d8 = 0;
  }
  iVar3 = nc_model_context_init(0x3004e9bc);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_400084dc();
    if (((iVar3 == 0) && (0x1d < DAT_ram_3004ab1e)) && ((byte)(DAT_ram_3004ab1e - 0x1e) < 8)) {
      DAT_ram_3004f730 = DAT_ram_3004ab1e - 0x1e;
    }
    DAT_ram_3004e529 = 0;
  }
  FUN_ram_40076682(_DAT_ram_3004f7ac);
  FUN_ram_40076948(_DAT_ram_3004f7ac,1);
  FUN_ram_40076938(_DAT_ram_3004f7ac,0);
  DAT_ram_3004f7a4 = 0;
  auStack_70[0] = 0;
  iVar3 = FUN_ram_400928bc(0x3004f7e0,0x1000,auStack_70);
  if (((iVar3 == 0) && (auStack_70[0] != 0)) &&
     (((auStack_70[0] & 3) == 0 && (uVar7 = auStack_70[0] >> 2, uVar7 - 1 < 0x400)))) {
    FUN_ram_4000303c(0x300507e0,0x3004f7e0);
    FUN_ram_40076694(_DAT_ram_3004f7ac,0x300507e0,uVar7);
  }
  DAT_ram_3005181a = 0;
  DAT_ram_30051810 = 0;
  DAT_ram_3004e51c = 0;
  DAT_ram_3004f722 = 0;
  DAT_ram_3004e529 = 0;
  FUN_ram_4005f95a(0x3004ee20);
  uVar7 = DAT_ram_4009678c;
  nc_amp_drive_state_init(DAT_ram_4009678c,0x300518dc,0x30051880,&DAT_ram_300518d8);
  nc_amp_drive_state_init(uVar7,0x3004e52c,0x3004e9bc,&DAT_ram_3004e529);
  FUN_ram_4006c4de(uVar7,_DAT_ram_3004f72c,0x3004e52c,&DAT_ram_3004e529,_DAT_ram_3004f728,0x800);
  FUN_ram_4006c4de(uVar7,_DAT_ram_3005180c,0,&DAT_ram_30051810,_DAT_ram_30051808,0x800);
  FUN_ram_40073b48(uVar7,_DAT_ram_3005181c);
  nc_mod_init(uVar7,_DAT_ram_30051814);
  FUN_ram_40069066(uVar7,_DAT_ram_3004f724);
  FUN_ram_40066e08(uVar7,_DAT_ram_3004f714);
  FUN_ram_40068c0c(uVar7,_DAT_ram_3004f71c);
  FUN_ram_40069066(uVar7,_DAT_ram_3004f734);
  _DAT_ram_3004e520 = 0x22573;
  iVar3 = FUN_ram_4003f036(1,0x895cc);
  if (iVar3 == 0) {
    _DAT_ram_3004e520 = 0;
    uVar9 = 0;
    iVar8 = 0;
    uVar6 = 0;
    iVar5 = 0;
    uVar4 = 0;
    iVar3 = 0;
  }
  else {
    memset(iVar3,0,_DAT_ram_3004e520 << 2);
    uVar9 = 0x1804;
    iVar8 = iVar3 + 0x835bc;
    uVar6 = 0x89d;
    iVar5 = iVar3 + 0x81348;
    uVar4 = 0x204d2;
  }
  FUN_ram_40065e48(uVar7,_DAT_ram_3004e524,iVar3,uVar4,iVar5,uVar6,iVar8,uVar9,FUN_ram_40007dde);
  piVar2 = _DAT_ram_300517e0;
  iVar3 = _DAT_ram_3004f7ac;
  _DAT_ram_300517e0[5] = 0;
  *piVar2 = iVar3;
  uVar11 = (ulonglong)DAT_ram_4009678c;
  uVar10 = (ulonglong)DAT_ram_4009672c;
  piVar2[6] = 0;
  *(ulonglong *)(piVar2 + 1) = uVar11;
  uVar11 = (ulonglong)DAT_ram_40096728;
  *(ulonglong *)(piVar2 + 4) = uVar10;
  *(ulonglong *)(piVar2 + 0xb) = uVar10;
  *(ulonglong *)(piVar2 + 2) = uVar11;
  *(ulonglong *)(piVar2 + 3) = uVar11;
  piVar2[7] = 0;
  piVar2[8] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  iVar8 = nc_dsp_inactive_bank(0x3004ee20);
  FUN_ram_4005f91a();
  nc_dsp_node_configure(iVar8,0,1,0,0x300518dc,1);
  nc_dsp_node_configure(iVar8,1,2,0,_DAT_ram_300517e0,0);
  iVar3 = _DAT_ram_3005181c;
  uVar11 = (ulonglong)DAT_ram_40096760;
  *(ulonglong *)(iVar8 + 100) = uVar10;
  *(ulonglong *)(iVar8 + 0x68) = uVar11;
  *(undefined4 *)(iVar8 + 0x60) = 0;
  nc_dsp_node_configure(iVar8,2,3,6,iVar3,0);
  nc_dsp_node_configure(iVar8,3,7,0,_DAT_ram_3004f724,0);
  nc_dsp_node_configure(iVar8,4,8,DAT_ram_3004f730,_DAT_ram_3004f72c,0);
  nc_dsp_node_configure(iVar8,5,5,0,_DAT_ram_3004e524,0);
  nc_dsp_node_configure(iVar8,6,4,0,_DAT_ram_30051814,0);
  nc_dsp_node_configure(iVar8,7,6,0,_DAT_ram_3004f714,0);
  FUN_ram_40008d30(iVar8 + 0x14);
  FUN_ram_4006c932(iVar8 + 0x144,0xc,DAT_ram_3004f730);
  FUN_ram_40073e58(iVar8 + 0xac,0xc,6);
  FUN_ram_40069592(iVar8 + 0xf8,0xc);
  FUN_ram_40065bd4(iVar8 + 400,0xc);
  nc_chorus_default_parameters(iVar8 + 0x1dc,0xc);
  FUN_ram_40066f42(iVar8 + 0x228,0xc);
  nc_dsp_publish_bank(0x3004ee20);
  FUN_ram_4003c2be(&DAT_ram_3004f738,0);
  FUN_ram_4003c2de(&DAT_ram_3004f738,0);
  FUN_ram_4003c4b8(&DAT_ram_3004f738,0);
  FUN_ram_4003c5a4(&DAT_ram_3004f738,2,0);
  FUN_ram_4003c5a4(&DAT_ram_3004f738,2,1);
  FUN_ram_4003c3c4(&DAT_ram_3004f738,0x20);
  FUN_ram_4003c40a(&DAT_ram_3004f738,0x20);
  FUN_ram_4003c446(&DAT_ram_3004f738,0xac44,0x100);
  FUN_ram_4003c4de(&DAT_ram_3004f738,0xac44,0x40);
  FUN_ram_40024ec8(0xac44);
  puVar1 = _DAT_ram_3004f738;
  fence();
  fence();
  _DAT_ram_3004f738[9] = _DAT_ram_3004f738[9] | 0x100;
  fence();
  fence();
  *_DAT_ram_3004f738 = *puVar1 | 1;
  iVar3 = FUN_ram_4000e97c();
  if ((iVar3 == 0) && (iVar3 = FUN_ram_40007e28(0x31,0x23,0,0x10,1), iVar3 == 0)) {
    uStack_88 = 0;
    auStack_70[1] = 0;
    uVar7 = (_DAT_ram_20800004 & 0x1ffffff) >> 0x15;
    if (7 < uVar7 - 1) {
      uVar7 = 2;
    }
    DAT_ram_20801083 =
         (byte)((1 << uVar7) + -1 << (8 - ((_DAT_ram_20800004 & 0x1ffffff) >> 0x15) & 0x1f)) |
         DAT_ram_20801083 & 0x1f;
    uStack_90 = 2;
    puStack_8c = _DAT_ram_3004f738 + 4;
    puStack_68 = _DAT_ram_3004f738 + 8;
    uStack_74 = 0xc;
    uStack_84 = 4;
    uStack_80 = 4;
    uStack_7c = 1;
    uStack_78 = 1;
    auStack_70[0] = 1;
    uStack_54 = 0xc;
    uStack_64 = 4;
    uStack_60 = 4;
    uStack_5c = 1;
    uStack_58 = 1;
    _DAT_ram_3004ea10 = FUN_ram_4003ac8e();
    if (_DAT_ram_3004ea10 != 0) {
      _DAT_ram_3004ea14 = FUN_ram_4003ac8e();
      if (_DAT_ram_3004ea14 == 0) {
        FUN_ram_4003ac5a();
      }
      else {
        FUN_ram_4003ac26(_DAT_ram_3004ea10,&LAB_ram_4000b774,0);
        FUN_ram_4003ac36(_DAT_ram_3004ea10,&uStack_90);
        FUN_ram_4003ac26(_DAT_ram_3004ea14,FUN_ram_40009432,0);
        FUN_ram_4003ac36(_DAT_ram_3004ea14,auStack_70);
        if ((_DAT_ram_3004e430 != 0) ||
           (_DAT_ram_3004e430 = FUN_ram_40004834(s_audblk_ram_400966fc,0,0), _DAT_ram_3004e430 != 0)
           ) {
          if (_DAT_ram_3004e464 == 0) {
            _DAT_ram_3004e464 =
                 FUN_ram_400063d6(s_audblk_ram_400966fc,nc_audio_block_worker,0,0x2000,3,1);
            if (_DAT_ram_3004e464 == 0) {
              return 0xffffffff;
            }
            FUN_ram_40006550();
          }
          if ((_DAT_ram_3004e470 == 0) &&
             (_DAT_ram_3004e470 = FUN_ram_40004834(s_blksw_ram_40096704,0,0), _DAT_ram_3004e470 != 0
             )) {
            iVar3 = FUN_ram_400063d6(s_blksw_ram_40096704,FUN_ram_4000b8b6,0,0x800,0x14,10);
            if (iVar3 == 0) {
              FUN_ram_40004862(_DAT_ram_3004e470);
              _DAT_ram_3004e470 = 0;
            }
            else {
              FUN_ram_40006550();
            }
          }
          iVar3 = FUN_ram_40008ec0(1);
          if (iVar3 == 0) {
            FUN_ram_400064e4(0x14);
            FUN_ram_40008452(0);
            DAT_ram_3005187a = 0;
            DAT_ram_3004ac90 = 0;
            DAT_ram_30051878 = 0;
            DAT_ram_30051879 = 0;
            _DAT_ram_3005187c = 0;
            _DAT_ram_30053d9c = FUN_ram_400044c2(&DAT_ram_4009670c);
            if (_DAT_ram_30053d9c == 0) {
              return 0;
            }
            _DAT_ram_30053d98 = FUN_ram_40038a48();
            iVar3 = FUN_ram_40041982(_DAT_ram_30053d9c,4);
            if (iVar3 == 0) {
              nc_radio_uart5_init();
              if (((DAT_ram_3004e3d4 == '\0') &&
                  (iVar3 = FUN_ram_40004800(0x3004e3d8,s_asset_ram_40096714,0,0), iVar3 == 0)) &&
                 (iVar3 = FUN_ram_400063d6(s_asset_ram_40096714,nc_model_switch_worker,0,0xc00,0x16,10),
                 iVar3 != 0)) {
                FUN_ram_40006550();
                DAT_ram_3004e3d4 = '\x01';
              }
              iVar3 = FUN_ram_400063d6(s_codec_svc_ram_4009671c,FUN_ram_4000f43e,0,0x400,0x19,10);
              if (iVar3 != 0) {
                FUN_ram_40006550();
                return 0;
              }
              return 0;
            }
            _DAT_ram_30053d9c = 0;
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}


