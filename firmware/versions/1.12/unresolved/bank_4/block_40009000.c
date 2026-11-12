/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40009000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400093da.
 * REA evidence: ev_0c0fe66f5a6205fc63d20846fbeb69a2faaff437f0ee199388f987ea458dc6d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400093da(uint param_1)

{
  int iVar1;
  
  if (0x1d < param_1) {
    return;
  }
  iVar1 = FUN_ram_40091e9c(param_1,0x30051880);
  if (iVar1 == 0) {
    FUN_ram_40007a82(0x30051880,0,0);
    FUN_ram_400002f4();
    DAT_ram_3004ac94._7_1_ = (undefined1)param_1;
    FUN_ram_400002fa();
    nc_amp_drive_invalidate_parameter_cache(0x300518dc);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40009432.
 * REA evidence: ev_63f14d313ba299c13f9940bbea87b7ee4472473a8b3a835b9d42ad7b9d162342
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40009432(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (_DAT_ram_3004ea14 == 0) {
    return;
  }
  if (DAT_ram_30051819 == '\0') {
    iVar3 = *(int *)(*(int *)(_DAT_ram_3004ea14 + 8) + 0x30);
    fence();
    uVar5 = iVar3 - _DAT_ram_3004e4f4;
    if (iVar3 != _DAT_ram_3004e4f4) {
      if (_DAT_ram_3004e4f0 < uVar5) {
        _DAT_ram_3004e4f0 = uVar5;
      }
      uVar6 = uVar5;
      if (2 < uVar5) {
        iVar2 = uVar5 - 2;
        if ((((DAT_ram_30051879 == '\0') || (DAT_ram_3004e474 != '\0')) ||
            (DAT_ram_3004e4a5 != '\0')) || (_DAT_ram_3005187c != 0)) {
          piVar1 = (int *)&DAT_ram_3004e4f8;
        }
        else {
          _DAT_ram_3004e4cc = _DAT_ram_3004e4cc + iVar2;
          _DAT_ram_3004e4c8 = 1 << (DAT_ram_30051820 & 0x1f) | _DAT_ram_3004e4c8;
          DAT_ram_3004ab5c = DAT_ram_3004ab5c + iVar2;
          DAT_ram_3004abbc = DAT_ram_3004abbc + iVar2;
          DAT_ram_3004abb8 = DAT_ram_3004abb8 + iVar2 * 4;
          piVar1 = (int *)&DAT_ram_3004e504;
        }
        uVar6 = 2;
        *piVar1 = iVar2 + *piVar1;
      }
      for (iVar2 = uVar5 - uVar6; _DAT_ram_3004e4f4 = iVar3, iVar2 != 0; iVar2 = iVar2 + -1) {
        _DAT_ram_3004e4fc = _DAT_ram_3004e4fc + 1;
        if (_DAT_ram_3004e4fc == 3) {
          _DAT_ram_3004e4fc = 0;
        }
      }
      do {
        if ((_DAT_ram_3004e4fc < 3) && (DAT_ram_30051819 == '\0')) {
          uVar5 = _DAT_ram_3004e514 - _DAT_ram_3004e4e8;
          if (uVar5 < 0x200) {
            if ((uVar5 & 1) != 0) {
              uVar5 = uVar5 & 0xfffffffe;
              DAT_ram_3004ab60 = DAT_ram_3004ab60 + 1;
            }
            if (((DAT_ram_30051879 == '\0') || (DAT_ram_3004e474 != '\0')) &&
               (DAT_ram_3004e4b4 == '\0')) {
              if (0x48 < uVar5) {
                uVar4 = uVar5 - 0x48 & 0xfffffffe;
                _DAT_ram_3004e4e8 = _DAT_ram_3004e4e8 + uVar4;
                uVar5 = uVar5 - uVar4;
                _DAT_ram_3004e4d0 = _DAT_ram_3004e4d0 + uVar4;
              }
              if (uVar5 < 0x48) {
                uVar4 = 0x40;
              }
              else {
LAB_ram_4000974c:
                uVar5 = _DAT_ram_3004e4e8 & 0x1ff;
                iVar3 = 8;
                if (0x200 < uVar5 + 8) {
                  iVar3 = 0x200 - uVar5;
                }
                iVar2 = _DAT_ram_3004e4fc * 0x20 + 0x30053dc0;
                FUN_ram_4000303c(iVar2,uVar5 * 4 + 0x30053e40,iVar3 * 4);
                if (iVar3 != 8) {
                  FUN_ram_4000303c(iVar2 + iVar3 * 4,0x30053e40,(8 - iVar3) * 4);
                }
                _DAT_ram_3004e4e8 = _DAT_ram_3004e4e8 + 8;
                FUN_ram_400075a6(iVar2,0x20);
                _DAT_ram_3004e500 = _DAT_ram_3004e500 + 1;
                if (((DAT_ram_30051879 != '\0') && (DAT_ram_3004e474 == '\0')) ||
                   (DAT_ram_3004e4b4 != '\0')) goto LAB_ram_400095c6;
                uVar5 = _DAT_ram_3004e514 - 0x40;
                uVar4 = _DAT_ram_3004e4e8;
              }
              if ((uVar5 == uVar4) && (DAT_ram_3004e4a7 < 8)) {
                DAT_ram_3004e4a7 = DAT_ram_3004e4a7 + 1;
              }
            }
            else {
              if (7 < uVar5) goto LAB_ram_4000974c;
              if ((((DAT_ram_30051879 == '\0') || (DAT_ram_3004e474 != '\0')) ||
                  (DAT_ram_3004e4a5 != '\0')) || (_DAT_ram_3005187c != 0)) {
                piVar1 = (int *)&DAT_ram_3004e4f8;
              }
              else {
                _DAT_ram_3004e510 = _DAT_ram_3004e510 + 1;
                _DAT_ram_3004e50c = 1 << (DAT_ram_30051820 & 0x1f) | _DAT_ram_3004e50c;
                DAT_ram_3004ab5c = DAT_ram_3004ab5c + 1;
                DAT_ram_3004abbc = DAT_ram_3004abbc + 1;
                DAT_ram_3004abb8 = DAT_ram_3004abb8 + 4;
                piVar1 = (int *)&DAT_ram_3004e504;
              }
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            DAT_ram_3004ab60 = DAT_ram_3004ab60 + 1;
          }
        }
LAB_ram_400095c6:
        _DAT_ram_3004e4fc = _DAT_ram_3004e4fc + 1;
        if (_DAT_ram_3004e4fc == 3) {
          _DAT_ram_3004e4fc = 0;
        }
        if (uVar6 == 1) {
          return;
        }
        uVar6 = 1;
      } while( true );
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400098bc.
 * REA evidence: ev_c02d22f17982c7476aae27a32e86359d3bafd94706a18c544da2eb93bab5870b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400098bc(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  char cVar5;
  
  FUN_ram_400002f4();
  uVar4 = DAT_ram_3004ac8c;
  uVar2 = DAT_ram_3004ab1c;
  uVar1 = DAT_ram_3004ab10;
  cVar5 = '\0';
  if (-1 < (short)DAT_ram_3004ab1c) {
    cVar5 = DAT_ram_3004e528;
  }
  DAT_ram_3004ab10 = 0xffff;
  DAT_ram_3004ac8c = 0xffff;
  DAT_ram_3004ab1c = -1;
  DAT_ram_3004e528 = 0;
  _DAT_ram_3004e3d0 = _DAT_ram_3004e3d0 + 1;
  FUN_ram_400002fa();
  if (-1 < (short)uVar1) {
    FUN_ram_400083aa(0,uVar1 & 0xff,0xffffffff);
  }
  if (-1 < (short)uVar4) {
    FUN_ram_400083aa(1,uVar4 & 0xff,0xffffffff);
  }
  if (-1 < (short)uVar2) {
    FUN_ram_400083aa(2,uVar2 & 0xff,0xffffffff);
  }
  if (cVar5 != '\0') {
    nc_amp_drive_schedule_crossfade(DAT_ram_4009672c,0x3004e52c,0x10);
    FUN_ram_400002f4();
    sVar3 = DAT_ram_3004ab1c;
    FUN_ram_400002fa();
    if (-1 < sVar3) {
      FUN_ram_40007780(0);
      nc_amp_drive_set_crossfade(0,0x3004e52c);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400099c4.
 * REA evidence: ev_aa90df5f8371f0eb6c9bd64ebf89aefb5baba342641388a4ef4a6db50ff10d07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400099c4(int param_1,int param_2,undefined4 param_3,code *param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  cVar1 = DAT_ram_3004f6e4;
  uVar2 = (uint)(param_5 != 0);
  if ((DAT_ram_3004f6e4 != '\0') &&
     ((iVar4 = FUN_ram_40006382(), iVar4 == 0 ||
      (iVar4 = FUN_ram_40004a22(0x3004f6b4,0xffffffff), iVar4 != 0)))) {
    return -1;
  }
  FUN_ram_400086ec();
  uVar3 = FUN_ram_40007990(param_1,param_2);
  if ((((param_2 == 8) && (iVar4 = nc_dsp_active_bank(0x3004ee20), iVar4 != 0)) &&
      (7 < *(byte *)(iVar4 + param_1 * 0x4c + 0x10))) || (uVar3 == uVar2)) {
    iVar4 = (*param_4)(uVar2);
  }
  else {
    if ((param_5 == 0) && (iVar4 = FUN_ram_40007bce(), iVar4 != 0)) {
      nc_amp_drive_schedule_crossfade(0,param_3,8);
      iVar4 = FUN_ram_40008cf8(param_3);
      if ((iVar4 != 0) && (iVar4 = FUN_ram_40007bce(), iVar4 != 0)) {
        nc_amp_drive_schedule_crossfade(DAT_ram_4009672c,param_3,0x10);
        iVar4 = -1;
        goto LAB_ram_40009a2c;
      }
    }
    nc_amp_drive_set_crossfade(0,param_3);
    iVar4 = (*param_4)(uVar2);
    if ((iVar4 == 0) && (param_5 != 0)) {
      nc_amp_drive_schedule_crossfade(DAT_ram_4009672c,param_3,0x10);
    }
  }
LAB_ram_40009a2c:
  FUN_ram_40007bb6();
  if (cVar1 != '\0') {
    FUN_ram_40004b14(0x3004f6b4);
  }
  return iVar4;
}


/* NanoCore 1.12, address 0x40009ad8.
 * REA evidence: ev_01ffdab285ce574ffb0b38b289011662442b4a3d8e0195ad1d5350eba3f5ea10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40009ad8(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  iVar4 = FUN_ram_40007990(4,8);
  if (((param_1 < 0xc) && (iVar2 != 0)) && (iVar3 != 0)) {
    if (param_1 < 8) {
      uVar7 = param_1 + 0x1e & 0xff;
      iVar6 = FUN_ram_400086c0();
      if (((iVar6 == 0) && (iVar6 = FUN_ram_40007b94(), iVar6 == 0)) && (DAT_ram_3004e3d4 != '\0'))
      {
        FUN_ram_400002f4();
        bVar1 = DAT_ram_3004ab1c < 0;
        if (bVar1) {
          DAT_ram_3004e528 = (char)iVar4;
        }
        DAT_ram_3004ab1c = (short)uVar7;
        _DAT_ram_3004e3d0 = _DAT_ram_3004e3d0 + 1;
        FUN_ram_400002fa();
        if ((bVar1) && (iVar4 != 0)) {
          nc_amp_drive_schedule_crossfade(0,0x3004e52c,8);
        }
        FUN_ram_40004920(0x3004e3d8);
      }
      else {
        if (iVar4 != 0) {
          iVar6 = FUN_ram_400086c0();
          if (iVar6 == 0) {
            iVar6 = FUN_ram_40007b94();
            if (iVar6 != 0) {
              nc_amp_drive_schedule_crossfade(0,0x3004e52c,8);
              iVar6 = FUN_ram_40008cf8(0x3004e52c);
              if (iVar6 != 0) goto LAB_ram_40009c2c;
            }
          }
          else {
LAB_ram_40009c2c:
            nc_amp_drive_set_crossfade(0,0x3004e52c);
          }
        }
        FUN_ram_40007780(0);
        FUN_ram_400064e4(2);
        iVar6 = nc_fx2_load_drive_slot(uVar7);
        if (iVar6 != 0) {
          FUN_ram_400083aa(2,uVar7,0xffffffff);
          FUN_ram_40007780(iVar4);
          if (iVar4 != 0) {
            nc_amp_drive_schedule_crossfade(DAT_ram_4009672c,0x3004e52c,0x10);
          }
          goto LAB_ram_40009b14;
        }
        FUN_ram_400083aa(2,uVar7,0);
        nc_amp_drive_invalidate_parameter_cache(0x3004e52c);
        FUN_ram_40007780(iVar4);
        if (iVar4 == 0) {
          iVar6 = FUN_ram_400086c0();
          if ((iVar6 != 0) || (iVar6 = FUN_ram_40007b94(), uVar5 = DAT_ram_4009672c, iVar6 != 0)) {
            uVar5 = 0;
          }
          nc_amp_drive_set_crossfade(uVar5,0x3004e52c);
        }
        else {
          nc_amp_drive_schedule_crossfade(DAT_ram_4009672c,0x3004e52c,0x10);
        }
      }
    }
    else if (param_1 == 8) {
      FUN_ram_4006c7ca();
    }
    else if (param_1 == 9) {
      FUN_ram_4006c7d4();
    }
    else if (param_1 == 10) {
      FUN_ram_4006c878();
    }
    else {
      FUN_ram_4006c8d8(_DAT_ram_3004f72c);
    }
    DAT_ram_3004f730 = (char)param_1;
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if ((*(int *)(iVar2 + 0x13c) != 8) || (*(byte *)(iVar2 + 0x140) != param_1)) {
      FUN_ram_4006c932(iVar3 + 0x144,0xc,param_1);
    }
    *(undefined4 *)(iVar3 + 0x13c) = 8;
    uVar5 = _DAT_ram_3004f72c;
    *(char *)(iVar3 + 0x140) = (char)param_1;
    *(undefined4 *)(iVar3 + 0x180) = uVar5;
    *(char *)(iVar3 + 0x141) = (char)iVar4;
    nc_dsp_publish_bank(0x3004ee20);
    uVar5 = 0;
  }
  else {
LAB_ram_40009b14:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


