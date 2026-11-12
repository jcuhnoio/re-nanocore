/* NanoCore 1.12: nc_reverb_room_set_parameter_4 at 0x400827d8.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_7964b069954a92b6f54fb991c772eec9886aab2706c6ed3c0070ef30e849bfe1
 * Source: analysis/rea-1.12-effects/results/03608-export-0x400827d8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_room_set_parameter_4(undefined4 param_1,undefined4 param_2,int param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar1 = FUN_ram_40000844(0,param_1);
    *(ulonglong *)(param_3 + 0x30) = uVar1 & 0xffffffff;
    uVar2 = FUN_ram_40000844(0,param_2);
    *(undefined1 *)(param_3 + 0x54) = 1;
    *(undefined8 *)(param_3 + 0x2c) = uVar2;
    return;
  }
  return;
}

