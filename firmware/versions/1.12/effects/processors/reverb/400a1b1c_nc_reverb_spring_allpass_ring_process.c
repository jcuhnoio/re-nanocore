/* NanoCore 1.12: nc_reverb_spring_allpass_ring_process at 0x400a1b1c.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_69a3c76a99c256751a08c24506b314101f2b65ec4f1d9cc680715428fed78b30
 * Source: analysis/rea-1.12-effects/results/03720-export-0x400a1b1c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_allpass_ring_process(int param_1,uint param_2,ushort *param_3,int param_4,uint param_5)

{
  undefined4 in_register_00000100;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*param_3;
  uVar2 = param_2 - uVar1;
  if (param_5 < param_2 - uVar1) {
    uVar2 = param_5;
  }
  nc_reverb_spring_allpass_exchange(param_1 + uVar1 * 4,param_4,uVar2);
  if (uVar2 < param_5) {
    nc_reverb_spring_allpass_exchange(in_register_00000100,param_1,param_4 + uVar2 * 4,param_5 - uVar2);
  }
  uVar1 = uVar1 + param_5;
  if (param_2 <= uVar1) {
    uVar1 = uVar1 - param_2;
  }
  *param_3 = (ushort)uVar1;
  return;
}

