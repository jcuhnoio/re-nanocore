/* NanoCore 1.12: nc_fx2_set_enabled at 0x4000854c.
 * Role: Checks model readiness and selects subtype + 30 for drive subtypes 0..7.
 * REA: ev_f9d707aaeb15d31109807bdc27eb3cc581767e24a147b68c18cf5b4300e98d0d
 * Source: analysis/rea-1.12/results/01294-export-0x4000854c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int nc_fx2_set_enabled(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  if ((iVar2 == 0) || (iVar3 == 0)) {
    FUN_ram_40007780(0);
    return -1;
  }
  if (param_1 == 0) {
LAB_ram_400085ae:
    FUN_ram_40007780(0);
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if ((*(int *)(iVar2 + 0x13c) != 8) || (*(byte *)(iVar2 + 0x140) != DAT_ram_3004f730)) {
      nc_fx2_defaults(iVar3 + 0x144,0xc,DAT_ram_3004f730);
    }
    *(undefined4 *)(iVar3 + 0x13c) = 8;
    bVar1 = DAT_ram_3004f730;
    *(undefined1 *)(iVar3 + 0x141) = 0;
    *(byte *)(iVar3 + 0x140) = bVar1;
    *(undefined4 *)(iVar3 + 0x180) = _DAT_ram_3004f72c;
    nc_dsp_publish_bank(0x3004ee20);
    return -(uint)(param_1 != 0);
  }
  if (DAT_ram_3004f730 < 8) {
    iVar4 = nc_model_is_ready(0x3004e9bc);
    if (iVar4 == 0) {
      if (DAT_ram_3004f730 < 8) {
        nc_fx2_load_drive_slot(DAT_ram_3004f730 + 0x1e);
      }
      else {
        FUN_ram_400084dc();
      }
    }
    if ((DAT_ram_3004f730 < 8) && (iVar4 = nc_model_is_ready(0x3004e9bc), iVar4 == 0))
    goto LAB_ram_400085ae;
  }
  FUN_ram_40007780(1);
  FUN_ram_4000303c(iVar3,iVar2,0x308);
  if ((*(int *)(iVar2 + 0x13c) != 8) || (*(byte *)(iVar2 + 0x140) != DAT_ram_3004f730)) {
    nc_fx2_defaults(iVar3 + 0x144,0xc,DAT_ram_3004f730);
  }
  *(undefined4 *)(iVar3 + 0x13c) = 8;
  *(byte *)(iVar3 + 0x140) = DAT_ram_3004f730;
  *(undefined4 *)(iVar3 + 0x180) = _DAT_ram_3004f72c;
  *(undefined1 *)(iVar3 + 0x141) = 1;
  nc_dsp_publish_bank(0x3004ee20);
  return 0;
}

