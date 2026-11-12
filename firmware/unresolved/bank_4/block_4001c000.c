/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4001c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4001c22c.
 * REA evidence: ev_efff8b9d73355254401f320dba123829a8440bb38cdb8f076276a8cbdf899d79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c22c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_ram_30069a30;
  iVar1 = _DAT_ram_300699f8;
  iVar3 = _DAT_ram_30069740;
  if (((_DAT_ram_30069740 == 0) && (_DAT_ram_300699f8 == 0)) && (_DAT_ram_30069a30 == 0))
  goto LAB_ram_4001c2aa;
  _DAT_ram_30069740 = 0;
  _DAT_ram_300699f8 = 0;
  _DAT_ram_30069a30 = 0;
  FUN_ram_4001bfaa();
  if (iVar3 == 0) {
    if (iVar1 != 0) goto LAB_ram_4001c292;
  }
  else {
    FUN_ram_4005924c(iVar3);
    if ((iVar1 != 0) && (iVar3 != iVar1)) {
LAB_ram_4001c292:
      FUN_ram_4005924c(iVar1);
    }
  }
  if (((iVar2 != 0) && (iVar3 != iVar2)) && (iVar1 != iVar2)) {
    FUN_ram_4005924c(iVar2);
  }
LAB_ram_4001c2aa:
  _DAT_ram_30069740 = FUN_ram_40017342(s_font_detail_ram_4009345c,s_font_default_ram_400931d8);
  _DAT_ram_300699f8 = FUN_ram_40017342(s_font_dsmall_ram_40093468,0);
  iVar3 = FUN_ram_4000522c(s_font_dsmall_ram_40093468);
  if (iVar3 == 0) {
    _DAT_ram_30069a30 = _DAT_ram_300699f8;
  }
  else {
    _DAT_ram_30069a30 = FUN_ram_40017342(s_font_dsmall_ram_40093468,0);
  }
  FUN_ram_4001bfaa();
  return;
}


/* NanoCore 1.10, address 0x4001c318.
 * REA evidence: ev_8b3f2a64e851c14ca4b4ef72329c94c17ad6052abc287b4ea2b8b3af711da6bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001c318(ulonglong param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((float)param_1 < 0.0) {
    param_1 = 0;
  }
  else if (DAT_ram_4009281c < (float)param_1) {
    param_1 = (ulonglong)(uint)DAT_ram_4009281c;
  }
  if (param_2 != 0) {
    fVar6 = (float)param_1;
    iVar1 = FUN_ram_40024ec6(param_2);
    if (iVar1 != 0xff) {
      uStack_68 = FUN_ram_4002c7dc(0x6d);
      uStack_64 = FUN_ram_4002c7dc(0x6e);
      uStack_60 = FUN_ram_4002c7dc(0x6f);
      uStack_5c = FUN_ram_4002c7dc(0x70);
      uStack_58 = FUN_ram_4002c7dc(0x71);
      uStack_54 = FUN_ram_4002c7dc(0x72);
      uStack_50 = FUN_ram_4002c7dc(0x69);
      uStack_4c = FUN_ram_4002c7dc(0x6a);
      uStack_48 = FUN_ram_4002c7dc(0x6b);
      uStack_44 = FUN_ram_4002c7dc(0x6c);
      iVar1 = FUN_ram_400265a0(CONCAT44(uStack_70,fVar6),iVar1,param_3,param_4,param_5,0x18,
                               &uStack_68,1);
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = FUN_ram_4000522c(param_2,&DAT_ram_40093228);
    param_1 = CONCAT44(uStack_70,fVar6);
    if (iVar1 == 0) {
      if ((param_3 & 0xfffffffd) == 0 && param_4 == 0) {
        uVar3 = DAT_ram_40093498;
        fVar7 = 0.0;
        goto LAB_ram_4001c428;
      }
    }
    else {
      iVar1 = FUN_ram_4000522c(param_2,&DAT_ram_4009322c);
      uVar3 = DAT_ram_400934a8;
      param_1 = CONCAT44(uStack_70,fVar6);
      if (iVar1 != 0) {
        iVar1 = FUN_ram_4000522c(param_2,&DAT_ram_40093dc4);
        fVar7 = DAT_ram_400930a4;
        param_1 = CONCAT44(uStack_70,fVar6);
        if (iVar1 == 0) {
          if (param_4 == 0) goto LAB_ram_4001c516;
          if (2 < (param_4 - 1 & 0xff)) {
            uVar5 = 4;
            goto LAB_ram_4001c6c0;
          }
          fVar6 = (float)FUN_ram_40019e62(param_1,DAT_ram_400934b8,DAT_ram_400930a4);
          fVar6 = fVar6 * fVar7;
LAB_ram_4001c6b2:
          iStack_74 = FUN_ram_40019e8e(fVar6);
          uVar3 = 0x6e;
        }
        else {
          iVar1 = FUN_ram_4000522c(param_2,&DAT_ram_40093230);
          if (iVar1 == 0) {
            fVar7 = DAT_ram_400934bc;
            fVar9 = DAT_ram_400930bc;
            if ((param_4 == 0) || (fVar7 = DAT_ram_4009349c, fVar9 = DAT_ram_400934c0, param_4 == 1)
               ) goto LAB_ram_4001c4e2;
LAB_ram_4001c964:
            uVar5 = 2;
LAB_ram_4001c6c0:
            param_1 = CONCAT44(uStack_70,fVar6);
            if (param_4 == uVar5) goto LAB_ram_4001c61c;
            goto LAB_ram_4001c354;
          }
          iVar1 = FUN_ram_4000522c(param_2,s_delay_ram_40093234);
          param_1 = CONCAT44(uStack_70,fVar6);
          if (iVar1 == 0) {
            if (7 < param_3) {
LAB_ram_4001c788:
              if (param_4 == 0) {
                uVar8 = FUN_ram_40019e62(param_1,DAT_ram_4009281c,DAT_ram_400934c0);
                goto LAB_ram_4001c79e;
              }
LAB_ram_4001c7d2:
              if (param_4 != 1) {
                param_4 = param_4 - 2 & 0xff;
                uVar5 = 2;
                goto LAB_ram_4001c7e0;
              }
LAB_ram_4001c740:
              uVar3 = 0;
LAB_ram_4001c74c:
              FUN_ram_40019e62(CONCAT44(uStack_70,fVar6),uVar3,DAT_ram_400934c8);
              uVar3 = FUN_ram_40019e8e();
              puVar4 = &DAT_ram_4009338c;
LAB_ram_4001c75e:
              FUN_ram_400055ea(param_5,0x18,puVar4,uVar3);
              return;
            }
            puVar4 = DAT_ram_400930f4;
            if (param_3 == 1) {
              if (param_4 != 0) {
                if (param_4 == 1) goto LAB_ram_4001c740;
                param_4 = param_4 - 2;
joined_r0x4001cabe:
                param_1 = CONCAT44(uStack_70,fVar6);
                if ((param_4 & 0xff) < 2) goto LAB_ram_4001c61c;
                goto LAB_ram_4001c354;
              }
              goto LAB_ram_4001c82c;
            }
            if (param_3 == 0) goto LAB_ram_4001c788;
            if (param_3 == 2) {
              if (param_4 == 0) goto LAB_ram_4001c82c;
              goto LAB_ram_4001c7d2;
            }
            if (param_3 == 3) {
              if (param_4 != 0) {
                uVar5 = 1;
                if (param_4 != 1) {
                  uVar3 = DAT_ram_40093490;
                  fVar7 = DAT_ram_40093494;
                  if (param_4 == 2) goto LAB_ram_4001c468;
LAB_ram_4001c7fa:
                  param_4 = param_4 - 3;
                  goto LAB_ram_4001c80e;
                }
                goto LAB_ram_4001c740;
              }
            }
            else if (param_3 == 4) {
              if (param_4 != 0) {
                if (param_4 != 1) goto LAB_ram_4001c80c;
                goto LAB_ram_4001c740;
              }
            }
            else if (param_3 == 5) {
              puVar4 = PTR_firmware_entry_ram_40092830;
              if (param_4 != 0) {
                if (param_4 != 1) {
                  uVar5 = 2;
                  if (param_4 == 2) {
                    FUN_ram_40019e62(param_1,DAT_ram_4009309c,DAT_ram_400930c4);
                    iStack_74 = FUN_ram_40019e8e();
                    uVar3 = 0x72;
                    goto LAB_ram_4001c87e;
                  }
                  goto LAB_ram_4001c7fa;
                }
                goto LAB_ram_4001c740;
              }
            }
            else if (param_3 == 6) {
              if (param_4 != 0) {
                if (param_4 != 1) goto LAB_ram_4001c8ba;
                goto LAB_ram_4001c740;
              }
            }
            else {
              if (param_3 != 7) goto LAB_ram_4001c354;
              if (param_4 != 0) {
                if (param_4 != 1) {
                  fVar7 = DAT_ram_400930bc;
                  if (param_4 == 2) goto LAB_ram_4001c8e2;
                  fVar7 = DAT_ram_400930e8;
                  puVar4 = DAT_ram_400930d8;
                  if (param_4 != 3) goto LAB_ram_4001cb08;
                  goto LAB_ram_4001c930;
                }
                goto LAB_ram_4001c740;
              }
            }
LAB_ram_4001c82c:
            fVar6 = (float)FUN_ram_40019e62(param_1,puVar4,DAT_ram_400934c4);
            iStack_74 = FUN_ram_40019e8e(fVar6 * DAT_ram_400930a4);
            if (999 < iStack_74) {
              uVar8 = (ulonglong)(uint)fVar6;
LAB_ram_4001c79e:
              uVar3 = FUN_ram_40019e8e(uVar8);
              uVar2 = FUN_ram_4002c7dc(0x6f);
              FUN_ram_4001b0c8(param_5,uVar3,uVar2);
              return;
            }
          }
          else {
            iVar1 = FUN_ram_4000522c(param_2,&DAT_ram_4009323c);
            param_1 = CONCAT44(uStack_70,fVar6);
            if (iVar1 == 0) {
              if (param_3 == 0) {
                fVar7 = DAT_ram_400934cc;
                puVar4 = DAT_ram_400930f4;
                if (param_4 != 0) {
                  if (param_4 == 1) {
                    fVar6 = (float)FUN_ram_40019e62(param_1,0,DAT_ram_4009281c);
                    iStack_74 = FUN_ram_40019e8e(fVar6 * DAT_ram_4009286c);
                    uVar3 = 0x6f;
                    goto LAB_ram_4001c4a8;
                  }
                  goto LAB_ram_4001c964;
                }
LAB_ram_4001c930:
                FUN_ram_40019e62(CONCAT44(uStack_70,fVar6),puVar4,fVar7);
LAB_ram_4001c5ba:
                FUN_ram_4001b1a8(param_5);
                return;
              }
              if (1 < (param_3 - 1 & 0xff)) {
                fVar7 = DAT_ram_400930bc;
                puVar4 = DAT_ram_400934d4;
                if (param_3 == 3) {
                  if (param_4 == 0) goto LAB_ram_4001c930;
                  if ((param_4 == 1) || ((param_4 - 4 & 0xff) < 2)) goto LAB_ram_4001c61c;
                  if (param_4 == 2) goto LAB_ram_4001c9c4;
                  fVar7 = DAT_ram_400930dc;
                  if (param_4 == 3) goto LAB_ram_4001c4f6;
                }
                else if (param_3 == 4) {
                  if (param_4 != 0) {
                    uVar5 = 1;
                    if (param_4 == 1) goto LAB_ram_4001c8e2;
                    if (param_4 != 2) goto LAB_ram_4001c7fa;
LAB_ram_4001c9c4:
                    if (fVar6 < 0.0) {
                      param_1 = 0;
                    }
                    else if (DAT_ram_4009281c < fVar6) {
                      param_1 = (ulonglong)(uint)DAT_ram_4009281c;
                    }
                    uVar5 = (uint)((float)param_1 * DAT_ram_4009309c);
                    if ((int)uVar5 < 4) {
                      if ((int)uVar5 < 0) {
                        uVar5 = 0;
                      }
                    }
                    else {
                      uVar5 = 3;
                    }
                    uVar3 = FUN_ram_4001a7e0(uVar5 & 0xff);
                    puVar4 = &DAT_ram_400937d8;
                    goto LAB_ram_4001c75e;
                  }
                  goto LAB_ram_4001c930;
                }
                goto LAB_ram_4001c354;
              }
              fVar7 = DAT_ram_400930e8;
              puVar4 = DAT_ram_400930d8;
              if (param_4 == 0) goto LAB_ram_4001c930;
              uVar3 = DAT_ram_400934d0;
              if (param_4 != 1) {
                param_4 = param_4 - 2;
                goto LAB_ram_4001c668;
              }
              goto LAB_ram_4001c74c;
            }
            iVar1 = FUN_ram_4000522c(param_2,s_reverb_ram_40093240);
            if (iVar1 != 0) {
              iVar1 = FUN_ram_4000522c(param_2,&DAT_ram_40093248);
              param_1 = CONCAT44(uStack_70,fVar6);
              if (iVar1 != 0) goto LAB_ram_4001c354;
              uVar3 = DAT_ram_400934f4;
              fVar7 = DAT_ram_400930b0;
              if (param_3 < 2) {
                if (param_3 == 1) {
                  if (5 < param_4) {
                    uVar5 = 6;
LAB_ram_4001cbce:
                    uVar3 = DAT_ram_40093490;
                    fVar7 = DAT_ram_40093494;
                    if (param_4 != uVar5) goto LAB_ram_4001c354;
                  }
                }
                else if (2 < param_4) {
                  uVar5 = 3;
                  goto LAB_ram_4001cbce;
                }
              }
              else if (7 < param_4) {
                uVar5 = 8;
                goto LAB_ram_4001cbce;
              }
LAB_ram_4001c428:
              fVar6 = (float)FUN_ram_40019e62(CONCAT44(uStack_70,fVar6),uVar3,fVar7);
              fVar6 = fVar6 * DAT_ram_400930a4;
              goto LAB_ram_4001c6b2;
            }
            if (param_3 == 6) {
              fVar9 = DAT_ram_4009286c;
              fVar10 = DAT_ram_4009281c;
              if (param_4 != 0) {
                fVar7 = DAT_ram_400934d8;
                puVar4 = DAT_ram_400930a0;
                if (param_4 != 3) {
                  if ((param_4 - 1 & 0xff) < 2) goto LAB_ram_4001c61c;
                  param_4 = param_4 - 4;
                  goto joined_r0x4001cabe;
                }
                goto LAB_ram_4001c930;
              }
LAB_ram_4001ca6e:
              fVar6 = (float)FUN_ram_40019e62(CONCAT44(uStack_70,fVar6),fVar10,fVar9);
              iStack_74 = FUN_ram_40019e8e(fVar6 * DAT_ram_400930a4);
              uVar3 = 0x71;
              goto LAB_ram_4001ca88;
            }
            fVar9 = DAT_ram_40093494;
            if (param_3 == 5) {
              if (param_4 == 0) {
LAB_ram_4001cacc:
                fVar10 = 0.0;
                goto LAB_ram_4001ca6e;
              }
              fVar7 = DAT_ram_400934dc;
              if (param_4 != 1) {
                uVar3 = DAT_ram_400934e4;
                fVar7 = DAT_ram_400934e0;
                if (param_4 != 3) {
                  if (param_4 == 2) goto LAB_ram_4001c61c;
LAB_ram_4001cb08:
                  uVar5 = 1;
                  param_4 = param_4 - 4;
                  goto LAB_ram_4001c80e;
                }
                goto LAB_ram_4001c468;
              }
LAB_ram_4001c8e2:
              fVar9 = 0.0;
            }
            else {
              fVar7 = DAT_ram_400934e8;
              if (param_3 != 7) {
                fVar10 = DAT_ram_40092864;
                if (param_4 == 0) goto LAB_ram_4001ca6e;
                if (param_4 != 1) {
LAB_ram_4001c8ba:
                  param_4 = param_4 - 2 & 0xff;
                  uVar5 = 3;
                  goto LAB_ram_4001c7e0;
                }
                goto LAB_ram_4001c8e2;
              }
              if (param_4 == 0) goto LAB_ram_4001cacc;
              fVar9 = DAT_ram_400930e8;
              if (param_4 != 1) {
                uVar5 = 2;
                fVar7 = DAT_ram_400934ec;
                puVar4 = DAT_ram_400934f0;
                if (param_4 != 2) goto LAB_ram_4001c7fa;
                goto LAB_ram_4001c930;
              }
            }
            fVar6 = (float)FUN_ram_40019e62(CONCAT44(uStack_70,fVar6),fVar9,fVar7);
            iStack_74 = FUN_ram_40019e8e(fVar6 * DAT_ram_400930a4);
          }
          uVar3 = 0x6f;
        }
LAB_ram_4001ca88:
        uVar3 = FUN_ram_4002c7dc(uVar3);
LAB_ram_4001c52a:
        FUN_ram_4001b0fa(param_5,iStack_74,uVar3);
        return;
      }
      if (param_3 != 8) {
        if (param_3 == 9) {
          fVar7 = DAT_ram_4009349c;
          fVar9 = DAT_ram_400930a4;
          if (param_4 == 0) {
LAB_ram_4001c4e2:
            FUN_ram_4001a3a2(CONCAT44(uStack_70,fVar6),fVar9,fVar7);
            goto LAB_ram_4001c5ba;
          }
          uVar5 = 1;
          if (param_4 == 1) {
LAB_ram_4001c4f6:
            puVar4 = (undefined *)0x0;
            goto LAB_ram_4001c930;
          }
          if (param_4 != 2) goto LAB_ram_4001c7fa;
          param_1 = FUN_ram_40019e62(param_1,DAT_ram_400930f4,DAT_ram_400930bc);
        }
        else {
          if (param_3 == 10) {
            if (param_4 != 0) {
              if ((param_4 == 1) || ((param_4 - 3 & 0xff) < 3)) goto LAB_ram_4001c61c;
              if (param_4 == 2) {
                fVar6 = (float)FUN_ram_40019e62(param_1,0,DAT_ram_4009284c);
                iStack_74 = FUN_ram_40019e8e(fVar6 * DAT_ram_4009286c);
                uVar3 = 0x6d;
                goto LAB_ram_4001c4a8;
              }
              goto LAB_ram_4001c354;
            }
            if (fVar6 < 0.0) {
              param_1 = 0;
LAB_ram_4001c582:
              fVar6 = (float)param_1 + (float)param_1;
              fVar7 = (float)FUN_ram_40019e62(fVar6,DAT_ram_400934a4,DAT_ram_400934a0);
              uVar2 = DAT_ram_400934ac;
            }
            else {
              if (DAT_ram_4009281c < fVar6) {
                param_1 = (ulonglong)(uint)DAT_ram_4009281c;
              }
              else if (fVar6 <= DAT_ram_40092864) goto LAB_ram_4001c582;
              fVar6 = (float)param_1 - DAT_ram_40092864;
              fVar6 = fVar6 + fVar6;
              fVar7 = (float)FUN_ram_40019e62(fVar6,DAT_ram_400934a0,DAT_ram_400934b0);
              uVar2 = uVar3;
              uVar3 = DAT_ram_400934b4;
            }
            fVar6 = (float)FUN_ram_40019e62(fVar6,uVar2,uVar3);
            FUN_ram_40000e84(fVar7 * fVar6);
            goto LAB_ram_4001c5ba;
          }
          if (param_4 != 0) {
            param_4 = param_4 - 1;
LAB_ram_4001c668:
            param_4 = param_4 & 0xff;
            uVar5 = 1;
            goto LAB_ram_4001c7e0;
          }
        }
LAB_ram_4001c516:
        iStack_74 = FUN_ram_40019e8e((float)param_1 * DAT_ram_400930a4);
        uVar3 = 0;
        goto LAB_ram_4001c52a;
      }
      uVar3 = DAT_ram_40093490;
      fVar7 = DAT_ram_40093494;
      if (param_4 == 0) {
LAB_ram_4001c468:
        FUN_ram_40019e62(CONCAT44(uStack_70,fVar6),uVar3,fVar7);
        iStack_74 = FUN_ram_40019e8e();
        uVar3 = 0x70;
LAB_ram_4001c87e:
        uVar3 = FUN_ram_4002c7dc(uVar3);
        FUN_ram_400055ea(param_5,0x18,s__ld__s_ram_40093474,iStack_74,uVar3);
        return;
      }
      if (param_4 == 1) {
        fVar6 = (float)FUN_ram_40019e62(param_1,DAT_ram_40092818,DAT_ram_4009281c);
        iStack_74 = FUN_ram_40019e8e(fVar6 * DAT_ram_4009286c);
        uVar3 = 0x70;
LAB_ram_4001c4a8:
        uVar3 = FUN_ram_4002c7dc(uVar3);
        goto LAB_ram_4001c4b0;
      }
LAB_ram_4001c80c:
      uVar5 = 1;
      param_4 = param_4 - 2;
LAB_ram_4001c80e:
      param_4 = param_4 & 0xff;
LAB_ram_4001c7e0:
      param_1 = CONCAT44(uStack_70,fVar6);
      if (param_4 <= uVar5) {
LAB_ram_4001c61c:
        FUN_ram_4001b054(param_5);
        return;
      }
    }
  }
LAB_ram_4001c354:
  iStack_74 = FUN_ram_40019e8e((float)param_1 * DAT_ram_4009286c);
  uVar3 = 0;
LAB_ram_4001c4b0:
  FUN_ram_4001b150(param_5,iStack_74,uVar3);
  return;
}


/* NanoCore 1.10, address 0x4001cbfc.
 * REA evidence: ev_f544cb1572a10e7e10a1007789432a0169fdf06f911911470525f504fc30e9b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001cbfc(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 uVar17;
  int iVar18;
  float fVar19;
  char local_88 [8];
  char acStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar12 = (uint)DAT_ram_300699cc * 0x50000 >> 0x10;
  if (DAT_ram_300699f4 <= uVar12) {
    DAT_ram_300699cc = 0;
    uVar12 = 0;
  }
  uVar12 = DAT_ram_300699f4 - uVar12;
  if (5 < (uVar12 & 0xffff)) {
    uVar12 = 5;
  }
  DAT_ram_30069a34 = (byte)uVar12;
  uVar13 = (uVar12 & 0xff) + 1 & 0xff;
  iVar4 = 0;
  if (uVar13 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)((uVar12 & 0xffff) * -0x28 + 0x140) / (int)uVar13;
  }
  iVar14 = iVar2 + 0x28;
  do {
    iVar5 = *(int *)(&DAT_ram_30069938 + iVar4 * 4);
    if (iVar4 < (int)(uint)DAT_ram_30069a34) {
      *(int *)(iVar4 * 4 + 0x3006974c) = iVar2;
      *(undefined4 *)(iVar4 * 4 + 0x30069760) = 0x74;
      if (iVar5 != 0) {
        FUN_ram_40042b3a(iVar5,1);
      }
    }
    else {
      if (iVar5 != 0) {
        FUN_ram_40043064(iVar5,1);
      }
      if (*(int *)(&DAT_ram_30069828 + iVar4 * 4) != 0) {
        FUN_ram_40043064(*(int *)(&DAT_ram_30069828 + iVar4 * 4),1);
      }
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + iVar14;
  } while (iVar4 != 5);
  FUN_ram_4000505c(0x3006987c,0xff,5);
  iVar4 = _DAT_ram_300696fc;
  if (_DAT_ram_300696fc == 0) {
    uVar17 = 0;
    iVar2 = -1;
    iVar14 = 0xff;
  }
  else {
    iVar2 = FUN_ram_4001a28e(_DAT_ram_300696fc);
    uVar17 = 0;
    if (-1 < iVar2) {
      uVar17 = *(undefined1 *)(iVar2 + 0x30069b94);
    }
    iVar14 = FUN_ram_40024ec6(iVar4);
  }
  uVar6 = FUN_ram_4002c48a();
  uVar7 = FUN_ram_4002c498();
  fVar1 = DAT_ram_40093094;
  puVar16 = (undefined4 *)&DAT_ram_30069814;
  puVar15 = (undefined4 *)&DAT_ram_30069924;
  iVar5 = 0;
  do {
    iVar8 = FUN_ram_4001ab92(iVar5);
    iVar18 = iVar5 * 0x20 + 0x30069774;
    iVar3 = iVar5 * 0x20 + 0x30069884;
    if (iVar5 < (int)(uint)DAT_ram_30069a34) {
      fVar19 = 0.0;
      if (-1 < iVar2) {
        fVar19 = (float)*(ushort *)((iVar2 * 0xc + iVar8) * 2 + 0x30069ad4) / fVar1;
      }
      if (((iVar14 == 0xff) ||
          (pcVar9 = (char *)FUN_ram_40025306(iVar14,uVar17,iVar8,1), pcVar9 == (char *)0x0)) ||
         (pcVar11 = pcVar9, *pcVar9 == '\0')) {
        pcVar9 = (char *)FUN_ram_4002c7dc(0x74);
        if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
          pcVar9 = &DAT_ram_4009347c;
        }
        FUN_ram_400055ea(local_88,8,pcVar9,iVar8 + 1);
        pcVar9 = local_88;
        pcVar11 = pcVar9;
      }
      for (; *pcVar9 != '\0'; pcVar9 = pcVar9 + 1) {
        if (*pcVar9 == '\n') goto LAB_ram_4001cea4;
      }
      if (*pcVar11 != '\0') {
        FUN_ram_400055ea(acStack_80,0x18,&DAT_ram_40093480);
        pcVar11 = acStack_80;
      }
LAB_ram_4001cea4:
      FUN_ram_400171b6(*puVar16,0,1);
      FUN_ram_40017026(*puVar16,iVar18,pcVar11);
      FUN_ram_400171ae(iVar18,uVar6);
      FUN_ram_400171b6(*puVar15,0,1);
      FUN_ram_4001c318(fVar19,iVar4,uVar17,iVar8,auStack_68);
      FUN_ram_40017026(*puVar15,iVar3,auStack_68);
      uVar10 = uVar7;
    }
    else {
      FUN_ram_400171b6(*puVar16,0,0);
      FUN_ram_400171b6(*puVar15,0,0);
      FUN_ram_400171ae(iVar18,0);
      uVar10 = 0;
    }
    FUN_ram_400171ae(iVar3,uVar10);
    iVar5 = iVar5 + 1;
    puVar16 = puVar16 + 1;
    puVar15 = puVar15 + 1;
    if (iVar5 == 5) {
      FUN_ram_4001ac88();
      for (iVar4 = 0; iVar4 < (int)(uint)DAT_ram_30069a34; iVar4 = iVar4 + 1) {
        if (iVar4 < 5) {
          FUN_ram_4001ae34(iVar4);
        }
      }
      FUN_ram_4001a434();
      iVar4 = FUN_ram_4001a18a();
      if ((iVar4 <= _DAT_ram_30069a00) && ((int)(uint)DAT_ram_30069a34 <= _DAT_ram_30069a00 - iVar4)
         ) {
        FUN_ram_4001bf4c(iVar4 + (uint)DAT_ram_30069a34 + -1);
        return;
      }
      FUN_ram_4001b4ac();
      return;
    }
  } while( true );
}


/* NanoCore 1.10, address 0x4001cf26.
 * REA evidence: ev_c47cd7a71a0d66668e89390afc64fd1431f38ba8a36b60bd06061d2795f89d89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001cf26(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [36];
  
  if (param_1 < 5) {
    if ((((int)param_1 < (int)(uint)DAT_ram_30069a34) && (_DAT_ram_300696fc != 0)) &&
       (iVar1 = FUN_ram_4001a28e(), -1 < iVar1)) {
      iVar2 = FUN_ram_4001ab92(param_1);
      FUN_ram_4001c318((float)*(ushort *)((iVar2 + iVar1 * 0xc) * 2 + 0x30069ad4) / DAT_ram_40093094
                       ,_DAT_ram_300696fc,*(undefined1 *)(iVar1 + 0x30069b94),iVar2,auStack_38);
      FUN_ram_40017026(*(undefined4 *)(&DAT_ram_30069924 + param_1 * 4),param_1 * 0x20 + 0x30069884,
                       auStack_38);
      if (param_2 != 0) {
        iVar1 = FUN_ram_4001a18a();
        *(bool *)(param_1 + 0x3006987c) = iVar1 + param_1 == _DAT_ram_30069a00;
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001cff4.
 * REA evidence: ev_8fca96e02a9bdd2c18711b66d032b1d8b1053f9fb087361998ead48377a226e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001cff4(void)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  if (_DAT_ram_30069db0 != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_30069db0 = 0;
  }
  fVar2 = DAT_ram_40093094;
  iVar9 = 0x30069ad4;
  pcVar8 = &DAT_ram_30069db4;
  iVar5 = 0;
  do {
    uVar3 = 0;
    pcVar7 = pcVar8;
    do {
      if (*pcVar7 != '\0') {
        uVar1 = *(ushort *)(iVar9 + uVar3 * 2);
        *pcVar7 = '\0';
        FUN_ram_400233ba((float)uVar1 / fVar2,iVar5);
        FUN_ram_4001ab1a(iVar5,uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
      pcVar7 = pcVar7 + 1;
    } while (uVar3 != 0xc);
    iVar5 = iVar5 + 1;
    iVar9 = iVar9 + 0x18;
    pcVar8 = pcVar8 + 0xc;
  } while (iVar5 != 8);
  uVar3 = (uint)DAT_ram_30069e14;
  if ((uVar3 != 0) && (DAT_ram_30069e14 = 0, DAT_ram_300696aa != '\0')) {
    puVar6 = _DAT_ram_300696fc;
    if (_DAT_ram_300696fc == (undefined *)0x0) {
      puVar6 = &DAT_ram_40093dc4;
    }
    iVar5 = FUN_ram_4001a28e(puVar6);
    uVar4 = 0;
    if (-1 < iVar5) {
      for (; (int)uVar4 < (int)(uint)DAT_ram_30069a34; uVar4 = uVar4 + 1) {
        if ((1 << (uVar4 & 0x1f) & uVar3) != 0) {
          FUN_ram_4001cf26(uVar4,0);
        }
      }
    }
  }
  return;
}


