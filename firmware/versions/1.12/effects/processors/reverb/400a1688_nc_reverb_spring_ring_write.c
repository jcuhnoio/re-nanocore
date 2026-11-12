/* NanoCore 1.12: nc_reverb_spring_ring_write at 0x400a1688.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_88cfe7da183947bf10f3aaa60791781559a17d1a602bde0045597d89e0f5ca65
 * Source: analysis/rea-1.12-effects/results/03713-export-0x400a1688.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_ring_write(int param_1,uint param_2,ushort *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*param_3;
  uVar2 = param_2 - uVar1;
  if (param_5 < param_2 - uVar1) {
    uVar2 = param_5;
  }
  nc_reverb_spring_copy_samples(param_1 + uVar1 * 4,param_4,uVar2);
  if (uVar2 < param_5) {
    nc_reverb_spring_copy_samples(param_1,param_4 + uVar2 * 4,param_5 - uVar2);
  }
  uVar1 = uVar1 + param_5;
  if (param_2 <= uVar1) {
    uVar1 = uVar1 - param_2;
  }
  *param_3 = (ushort)uVar1;
  return;
}

