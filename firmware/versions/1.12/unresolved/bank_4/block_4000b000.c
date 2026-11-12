/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4000b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4000b886.
 * REA evidence: ev_87af334b60f5d9cf0e6dee8dd28df8fe26a0375c4252520d7e584c59d0f0c309
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000b886(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_30051818 = 1;
  DAT_ram_30051878 = 0;
  FUN_ram_40008452(0);
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.12, address 0x4000b8b6.
 * REA evidence: ev_45968cf12a01d29f8ec69ab1a83e3103e7c7919e3277b625277a4a6e439ead18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000b8b6(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  do {
    while( true ) {
      do {
        iVar4 = FUN_ram_4000487e(_DAT_ram_3004e470,0xffffffff);
        iVar3 = _DAT_ram_3004e46c;
      } while (iVar4 != 0);
      if ((_DAT_ram_3004e46c != 0) &&
         ((DAT_ram_3004ac78 != _DAT_ram_3004e46c || (DAT_ram_3004e4a6 != DAT_ram_3004e4a5)))) break;
LAB_ram_4000b93e:
      _DAT_ram_3004e46c = 0;
    }
    DAT_ram_3004e474 = 1;
    DAT_ram_30051879 = 0;
    DAT_ram_30051878 = 0;
    DAT_ram_3004e4b4 = 0;
    DAT_ram_3004e4bc = 0;
    DAT_ram_3004ac90 = 0;
    DAT_ram_3004e4a7 = 0;
    iVar4 = FUN_ram_40007e28(0x31,0x23,0,0x10,1);
    if (iVar4 == 0) {
      FUN_ram_400064e4(0x19);
      puVar5 = _DAT_ram_3004f738;
      bVar1 = false;
      if (DAT_ram_3004ac78 != iVar3) {
        DAT_ram_30051819 = 1;
        fence();
        fence();
        _DAT_ram_3004f738[7] = _DAT_ram_3004f738[7] & 0xfffffff7;
        puVar2 = _DAT_ram_3004f738;
        fence();
        fence();
        *_DAT_ram_3004f738 = *puVar5 & 0xfffffffd;
        puVar5 = _DAT_ram_3004f738;
        fence();
        fence();
        _DAT_ram_3004f738[7] = puVar2[7] & 0xffffff7f;
        puVar2 = _DAT_ram_3004f738;
        fence();
        fence();
        *_DAT_ram_3004f738 = *puVar5 & 0xfffffeff;
        fence();
        fence();
        *_DAT_ram_3004f738 = *puVar2 & 0xfffffffb;
        DAT_ram_3004e508 = 0;
        while (DAT_ram_3004e460 != '\0') {
          FUN_ram_400064e4(1);
        }
        _DAT_ram_30051864 = _DAT_ram_30051868;
        if (_DAT_ram_3004e430 != 0) {
          do {
            iVar4 = FUN_ram_4000491c(_DAT_ram_3004e430);
          } while (iVar4 == 0);
        }
        if (_DAT_ram_3004ea10 != 0) {
          FUN_ram_4003abb4();
        }
        if (_DAT_ram_3004ea14 != 0) {
          FUN_ram_4003abb4();
        }
        fence();
        fence();
        puVar5 = _DAT_ram_3004f738 + 5;
        *puVar5 = _DAT_ram_3004f738[5] | 0x2000000;
        fence();
        fence();
        _DAT_ram_3004f738[5] = *puVar5 | 0x1000000;
        DAT_ram_3004ac78 = iVar3;
        FUN_ram_40008ec0(0);
        bVar1 = true;
      }
      if ((DAT_ram_3004ab12 != '\0') && (DAT_ram_30051818 == '\0')) {
        if ((DAT_ram_3004e4a5 == '\0') && (bVar1)) {
          iVar3 = 0x79;
          while ((DAT_ram_3004e4a7 < 8 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
            FUN_ram_400064e4(1);
          }
        }
        FUN_ram_400076b8();
        iVar3 = FUN_ram_40007e28(0x31,0x20,0,0x14,2);
        if (iVar3 != 0) goto LAB_ram_4000b98e;
        _DAT_ram_3005187c = 0x10;
        DAT_ram_3004ac90 = 0;
        iVar3 = FUN_ram_40008bee();
        if (iVar3 != 0) {
          DAT_ram_30051879 = 1;
          DAT_ram_3004e474 = 0;
          goto LAB_ram_4000b93e;
        }
      }
    }
    else {
LAB_ram_4000b98e:
      FUN_ram_4000b886();
    }
    _DAT_ram_3004e46c = 0;
    DAT_ram_3004e474 = 0;
  } while( true );
}


/* NanoCore 1.12, address 0x4000bb56.
 * REA evidence: ev_5fede39f63bfd004dcc7232b10715ddebc42c4a0f39b35142ca77305f81c4a07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000bb56(undefined4 param_1)

{
  FUN_ram_400099c4(0,1,0x300518dc,FUN_ram_40008d64,param_1);
  return;
}


/* NanoCore 1.12, address 0x4000bb70.
 * REA evidence: ev_889919e97ca046b3ac7a7006c8b077a5b4838a1bb6506789b822154118b5410f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000bb70(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3004ac94._7_1_;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000bb90.
 * REA evidence: ev_8684b6a3b59b0d37aca2dc95e5db5612e356ddde415527c20c9615219fdff5f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bb90(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_34 [32];
  
  if (0x1d < param_1) {
    return 0xffffffff;
  }
  uVar1 = FUN_ram_4000bb70();
  iVar2 = FUN_ram_40007990(0,1);
  uVar3 = DAT_ram_4009672c;
  if (iVar2 == 0) {
LAB_ram_4000bbc2:
    nc_amp_drive_set_crossfade(uVar3,0x300518dc);
  }
  else {
    iVar2 = FUN_ram_400086c0();
    if (iVar2 != 0) {
LAB_ram_4000bbbe:
      uVar3 = 0;
      goto LAB_ram_4000bbc2;
    }
    nc_amp_drive_schedule_crossfade(0,0x300518dc,8);
    iVar2 = FUN_ram_40008cf8(0x300518dc);
    if (iVar2 != 0) goto LAB_ram_4000bbbe;
  }
  FUN_ram_4000771a(0);
  FUN_ram_400064e4(5);
  iVar2 = FUN_ram_40091e9c(param_1,0x30051880);
  if (iVar2 == 0) {
    FUN_ram_400002f4();
    DAT_ram_3004ac94._7_1_ = (undefined1)param_1;
    FUN_ram_400002fa();
    iVar2 = FUN_ram_4008d7c4(param_1);
    if (iVar2 == 0) {
      FUN_ram_40007a82(0x30051880,param_2,param_3);
      FUN_ram_40074098(auStack_34,5);
      uVar3 = FUN_ram_40007990(0,1);
      FUN_ram_400086ec();
      iVar2 = FUN_ram_400079d0(0,1,0x300518dc,auStack_34,5,uVar3);
      FUN_ram_40007bb6();
      if (iVar2 == 0) {
        nc_amp_drive_invalidate_parameter_cache(0x300518dc);
        iVar2 = FUN_ram_40007990(0,1);
        FUN_ram_4000771a();
        if (iVar2 == 0) {
          iVar2 = FUN_ram_400086c0();
          if ((iVar2 != 0) || (iVar2 = FUN_ram_40007b94(), uVar3 = DAT_ram_4009672c, iVar2 != 0)) {
            uVar3 = 0;
          }
          nc_amp_drive_set_crossfade(uVar3,0x300518dc);
        }
        else {
          nc_amp_drive_schedule_crossfade(DAT_ram_4009672c,0x300518dc,0x10);
        }
        FUN_ram_400002f4();
        _DAT_ram_300518d4 = _DAT_ram_300518d4 + 1;
        FUN_ram_400002fa();
        return 0;
      }
      goto LAB_ram_4000bc16;
    }
  }
  if (param_1 != uVar1) {
    FUN_ram_400093da(uVar1);
  }
LAB_ram_4000bc16:
  iVar2 = FUN_ram_40007990(0,1);
  FUN_ram_4000771a();
  if (iVar2 == 0) {
    nc_amp_drive_set_crossfade(DAT_ram_4009672c,0x300518dc);
  }
  else {
    nc_amp_drive_schedule_crossfade(DAT_ram_4009672c,0x300518dc,0x10);
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000bd3c.
 * REA evidence: ev_547970e98bef1a0dcdac54c3a567961663c4b30daedd358e53b5b73bb0ac1bc8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bd3c(uint param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  
  if (param_1 < 0xc) {
    if (param_1 < 8) {
      FUN_ram_400086ec();
      uVar4 = FUN_ram_40009ad8(param_1);
      FUN_ram_40007bb6();
    }
    else {
      iVar3 = FUN_ram_40007c9a();
      if (iVar3 == 0) {
        FUN_ram_400002f4();
        cVar2 = DAT_ram_3004e528;
        uVar1 = DAT_ram_3004ab1c;
        cVar5 = '\0';
        if (-1 < (short)DAT_ram_3004ab1c) {
          DAT_ram_3004ab1c = 0xffff;
          DAT_ram_3004e528 = '\0';
          _DAT_ram_3004e3d0 = _DAT_ram_3004e3d0 + 1;
          cVar5 = cVar2;
        }
        FUN_ram_400002fa();
        if (-1 < (short)uVar1) {
          FUN_ram_400083aa(2,uVar1 & 0xff,0xffffffff);
        }
        if (cVar5 != '\0') {
          nc_amp_drive_schedule_crossfade(DAT_ram_4009672c,0x3004e52c,0x10);
          FUN_ram_400002f4();
          uVar1 = DAT_ram_3004ab1c;
          FUN_ram_400002fa();
          if (-1 < (short)uVar1) {
            FUN_ram_40007780(0);
            nc_amp_drive_set_crossfade(0,0x3004e52c);
          }
        }
        FUN_ram_400086ec();
        uVar4 = FUN_ram_40009ad8(param_1);
        FUN_ram_40007bb6();
        FUN_ram_4000877c();
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    return uVar4;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000bd46.
 * REA evidence: ev_972505bb59aef4f937496f16a0b26809b6a93737d05b6eafc4397c3e934c4947
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bd46(uint param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  
  if (param_1 < 8) {
    FUN_ram_400086ec();
    uVar4 = FUN_ram_40009ad8(param_1);
    FUN_ram_40007bb6();
  }
  else {
    iVar3 = FUN_ram_40007c9a();
    if (iVar3 == 0) {
      FUN_ram_400002f4();
      cVar2 = DAT_ram_3004e528;
      uVar1 = DAT_ram_3004ab1c;
      cVar5 = '\0';
      if (-1 < (short)DAT_ram_3004ab1c) {
        DAT_ram_3004ab1c = 0xffff;
        DAT_ram_3004e528 = '\0';
        _DAT_ram_3004e3d0 = _DAT_ram_3004e3d0 + 1;
        cVar5 = cVar2;
      }
      FUN_ram_400002fa();
      if (-1 < (short)uVar1) {
        FUN_ram_400083aa(2,uVar1 & 0xff,0xffffffff);
      }
      if (cVar5 != '\0') {
        nc_amp_drive_schedule_crossfade(DAT_ram_4009672c,0x3004e52c,0x10);
        FUN_ram_400002f4();
        uVar1 = DAT_ram_3004ab1c;
        FUN_ram_400002fa();
        if (-1 < (short)uVar1) {
          FUN_ram_40007780(0);
          nc_amp_drive_set_crossfade(0,0x3004e52c);
        }
      }
      FUN_ram_400086ec();
      uVar4 = FUN_ram_40009ad8(param_1);
      FUN_ram_40007bb6();
      FUN_ram_4000877c();
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x4000be30.
 * REA evidence: ev_6599774c315f52e7e05f5d82b97ee4ecf9e36d21bc20f9c9f1dfc1facb43dd58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000be30(undefined4 param_1)

{
  FUN_ram_400099c4(4,8,0x3004e52c,nc_fx2_set_enabled,param_1);
  return;
}


/* NanoCore 1.12, address 0x4000be4a.
 * REA evidence: ev_23781e8a952987277fe2e5321afb2bd61cd939de58121e4b07cebf2f5de320fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000be4a(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((byte)(param_1 - 0x1eU) < 8) && (iVar1 = FUN_ram_4000bd3c(), iVar1 == 0)) &&
     (DAT_ram_3004f730 < 8)) {
    uVar2 = FUN_ram_40008c5a();
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000be82.
 * REA evidence: ev_af13b990453f109a87ff6bfc2dc174c7a9b6c872fd5af91b004c6d4edde73905
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000be82(void)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (DAT_ram_3004f730 < 8) {
    uVar1 = DAT_ram_3004ab1e;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4000be9e.
 * REA evidence: ev_ca0066b2f1e39020ef47ba6330af0ee093f02b6f7a70dbff77b8eff55c632d6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000be9e(void)

{
  return DAT_ram_3004f730;
}


/* NanoCore 1.12, address 0x4000bea8.
 * REA evidence: ev_5c2ae5838c336607432748c2496ed1e693b2378d52175a91f974ac62898d67ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bea8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 5)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if ((*(int *)(iVar2 + 0x13c) != 8) || (*(char *)(iVar2 + 0x140) != DAT_ram_3004f730)) {
      FUN_ram_4006c932(iVar3 + 0x144,0xc);
    }
    *(undefined4 *)(iVar3 + 0x13c) = 8;
    uVar1 = 0;
    *(char *)(iVar3 + 0x140) = DAT_ram_3004f730;
    *(undefined4 *)(iVar3 + 0x180) = _DAT_ram_3004f72c;
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x144) = param_1;
    nc_dsp_publish_bank(0x3004ee20);
  }
  FUN_ram_40007bb6();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000bf64.
 * REA evidence: ev_0b4a123aa04815a238f818dc9dc6fa02f1acbf7390ea678b4ee82e9db7034257
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bf64(uint param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uStack_38;
  undefined1 auStack_34 [16];
  ushort uStack_24;
  
  if (DAT_ram_3004f7dc != '\0') {
    FUN_ram_40004a22(0x3004f7b0,0xffffffff);
  }
  cVar2 = DAT_ram_3004f7a4;
  uStack_38 = 0;
  FUN_ram_4008dbe0(auStack_34);
  if (cVar2 != '\0') {
    iVar4 = FUN_ram_400086c0();
    if (iVar4 == 0) {
      iVar4 = 0x40;
      FUN_ram_400077a2(0,8);
      do {
        if (*(int *)(_DAT_ram_300517e0 + 0x34) == 0) goto LAB_ram_4000bfce;
        iVar4 = iVar4 + -1;
        FUN_ram_400064e4(1);
      } while (iVar4 != 0);
      if (*(int *)(_DAT_ram_300517e0 + 0x34) == 0) goto LAB_ram_4000bfce;
    }
    FUN_ram_40007876(0);
  }
LAB_ram_4000bfce:
  iVar5 = FUN_ram_400925b4(param_1,0x3004f7e0,0x1000,&uStack_38);
  iVar4 = _DAT_ram_300517e0;
  if ((((iVar5 == 0) && (uStack_38 != 0)) && ((uStack_38 & 3) == 0)) &&
     (uVar3 = uStack_38 >> 2, uVar3 - 1 < 0x400)) {
    bVar1 = DAT_ram_3004f7a4 != '\0';
    FUN_ram_400086ec();
    iVar4 = FUN_ram_400079d0(1,2,iVar4,&DAT_ram_400967d8,3,bVar1);
    FUN_ram_40007bb6();
    if ((iVar4 == 0) &&
       ((uStack_24 != 0xffff && param_1 == uStack_24 ||
        (iVar4 = FUN_ram_4008d424(param_1), iVar4 == 0)))) {
      FUN_ram_4000303c(0x300507e0,0x3004f7e0,uStack_38);
      FUN_ram_40076694(_DAT_ram_3004f7ac,0x300507e0,uVar3);
      FUN_ram_400075de();
      if (cVar2 == '\0') {
        iVar4 = FUN_ram_400086c0();
        if ((iVar4 != 0) || (iVar4 = FUN_ram_40007b94(), uVar6 = DAT_ram_4009672c, iVar4 != 0)) {
          uVar6 = 0;
        }
        FUN_ram_40007876(uVar6);
      }
      else {
        FUN_ram_400077a2(DAT_ram_4009672c,0x10);
      }
      FUN_ram_400002f4();
      _DAT_ram_3004f7a8 = _DAT_ram_3004f7a8 + 1;
      FUN_ram_400002fa();
      uVar6 = 0;
      goto LAB_ram_4000c046;
    }
  }
  if (cVar2 == '\0') {
    FUN_ram_40007876(DAT_ram_4009672c);
  }
  else {
    FUN_ram_400077a2(DAT_ram_4009672c,0x10);
  }
  uVar6 = 0xffffffff;
LAB_ram_4000c046:
  if (DAT_ram_3004f7dc != '\0') {
    FUN_ram_40004b14(0x3004f7b0);
  }
  return uVar6;
}


