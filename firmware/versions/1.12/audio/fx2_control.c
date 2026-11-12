/* NanoCore 1.12 analysis module: audio/fx2_control.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4000848c.
 * REA evidence: ev_5487630b86eb54ccd670b4f10edf887db69256d7417c2ae9d0fa18c09b8605bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 nc_fx2_load_drive_slot(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1 - 0x1eU & 0xff) < 8) && (iVar2 = FUN_ram_40091e9c(param_1,0x3004e9bc), iVar2 == 0))
  {
    FUN_ram_40007a82(0x3004e9bc,0,0);
    DAT_ram_3004ab1e = (undefined1)param_1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4000854c.
 * REA evidence: ev_f9d707aaeb15d31109807bdc27eb3cc581767e24a147b68c18cf5b4300e98d0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
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
      FUN_ram_4006c932(iVar3 + 0x144,0xc,DAT_ram_3004f730);
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
    FUN_ram_4006c932(iVar3 + 0x144,0xc,DAT_ram_3004f730);
  }
  *(undefined4 *)(iVar3 + 0x13c) = 8;
  *(byte *)(iVar3 + 0x140) = DAT_ram_3004f730;
  *(undefined4 *)(iVar3 + 0x180) = _DAT_ram_3004f72c;
  *(undefined1 *)(iVar3 + 0x141) = 1;
  nc_dsp_publish_bank(0x3004ee20);
  return 0;
}


