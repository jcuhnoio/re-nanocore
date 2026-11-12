/* NanoCore 1.12: FUN_ram_4000bb90 at 0x4000bb90.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_c3842a3879fe884be1d5c823d14fdc80899ddf163781bbf857dbc1eb306e0083
 * Source: analysis/rea-1.12-effects/results/01322-export-0x4000bb90.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
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
  iVar2 = nc_model_load_slot_payload(param_1,0x30051880);
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

