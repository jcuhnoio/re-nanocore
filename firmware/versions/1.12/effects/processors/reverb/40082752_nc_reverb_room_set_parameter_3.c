/* NanoCore 1.12: nc_reverb_room_set_parameter_3 at 0x40082752.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_a96d381c34e2c0349f52794033c1de3f21ff7f57a7fb1fd4c8ec3b527507bff0
 * Source: analysis/rea-1.12-effects/results/03606-export-0x40082752.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_room_set_parameter_3(float param_1,int param_2)

{
  float fVar1;
  
  if (param_2 != 0) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    else if (DAT_ram_4009672c < param_1) {
      param_1 = DAT_ram_4009672c;
    }
    fVar1 = (float)FUN_ram_40000d44(DAT_ram_400a0a1c,param_1);
    fVar1 = fVar1 * DAT_ram_4009a340;
    *(undefined1 *)(param_2 + 0x54) = 1;
    *(ulonglong *)(param_2 + 0xc) = (ulonglong)(uint)fVar1;
    return;
  }
  return;
}

