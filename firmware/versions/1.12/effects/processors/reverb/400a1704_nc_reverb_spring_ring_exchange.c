/* NanoCore 1.12: nc_reverb_spring_ring_exchange at 0x400a1704.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_e996931f6b65fd8061ae9789c3ef9f22699b1cadd4abbe7f8db8536ac04a6b98
 * Source: analysis/rea-1.12-effects/results/03714-export-0x400a1704.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_ring_exchange(int param_1,uint param_2,ushort *param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*param_3;
  uVar2 = param_2 - uVar1;
  if (param_6 < param_2 - uVar1) {
    uVar2 = param_6;
  }
  nc_reverb_spring_exchange_samples(param_1 + uVar1 * 4,param_4,param_5,uVar2);
  if (uVar2 < param_6) {
    nc_reverb_spring_exchange_samples(param_1,uVar2 * 4 + param_4,param_5 + uVar2 * 4,param_6 - uVar2);
  }
  uVar1 = uVar1 + param_6;
  if (param_2 <= uVar1) {
    uVar1 = uVar1 - param_2;
  }
  *param_3 = (ushort)uVar1;
  return;
}

