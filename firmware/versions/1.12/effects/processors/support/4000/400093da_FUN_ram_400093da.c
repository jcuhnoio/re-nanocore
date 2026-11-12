/* NanoCore 1.12: FUN_ram_400093da at 0x400093da.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_8e027074946255b76c89c64f47ec18f65e1ced49b1638786ac189c3a3dff6aac
 * Source: analysis/rea-1.12-effects/results/01310-export-0x400093da.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_400093da(uint param_1)

{
  int iVar1;
  
  if (0x1d < param_1) {
    return;
  }
  iVar1 = nc_model_load_slot_payload(param_1,0x30051880);
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

