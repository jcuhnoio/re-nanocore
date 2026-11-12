/* NanoCore 1.12: nc_reverb_room_set_parameter_1 at 0x40082726.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_ef50aca751350aa39e7f59053f384298971d5671e0c161b81abe8b43c834f074
 * Source: analysis/rea-1.12-effects/results/03605-export-0x40082726.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_room_set_parameter_1(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_ram_40000844(DAT_ram_40099f6c,param_1);
    *(undefined1 *)(param_2 + 0x54) = 1;
    *(undefined8 *)(param_2 + 8) = uVar1;
    return;
  }
  return;
}

