/* NanoCore 1.12: nc_fx2_load_drive_slot at 0x4000848c.
 * Role: Accepts model slots 30..37 and loads context 0x3004e9bc.
 * REA: ev_5487630b86eb54ccd670b4f10edf887db69256d7417c2ae9d0fa18c09b8605bd
 * Source: analysis/rea-1.12/results/01292-export-0x4000848c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 nc_fx2_load_drive_slot(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1 - 0x1eU & 0xff) < 8) && (iVar2 = nc_model_load_slot_payload(param_1,0x3004e9bc), iVar2 == 0))
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

