/* NanoCore 1.12: nc_reverb_room_set_parameter_2 at 0x400827ae.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_1bfa0545d2ec8d5e95cf4e42a76cb2c6923eb207a6edc89871a2b9330580316c
 * Source: analysis/rea-1.12-effects/results/03607-export-0x400827ae.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_room_set_parameter_2(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_ram_40000844(0,param_1);
    *(undefined1 *)(param_2 + 0x54) = 1;
    *(undefined8 *)(param_2 + 4) = uVar1;
    *(undefined8 *)(param_2 + 0x34) = uVar1;
    return;
  }
  return;
}

