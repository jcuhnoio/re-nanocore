/* NanoCore 1.12: nc_reverb_spring_ring_read at 0x400a1628.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_515c566eabd73383f3b4c08f31f96f4d4a4e406e4e4241dcc4e893ed626e775e
 * Source: analysis/rea-1.12-effects/results/03712-export-0x400a1628.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_ring_read(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_2 - param_3;
  if (param_5 < (uint)(param_2 - param_3)) {
    uVar1 = param_5;
  }
  nc_reverb_spring_copy_samples(param_4,param_1 + param_3 * 4,uVar1);
  if (param_5 <= uVar1) {
    return;
  }
  nc_reverb_spring_copy_samples(param_4 + uVar1 * 4,param_1,param_5 - uVar1);
  return;
}

