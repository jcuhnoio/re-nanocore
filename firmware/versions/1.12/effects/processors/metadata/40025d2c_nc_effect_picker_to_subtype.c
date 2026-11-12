/* NanoCore 1.12: nc_effect_picker_to_subtype at 0x40025d2c.
 * Role: Reads MOD selector byte table4009b34c
 * REA: ev_230e13fb3dc958c0700c254ecffa2d24c6952ce04f0e747d8a1cc948ce58290b
 * Source: analysis/rea-1.12-effects/results/01974-export-0x40025d2c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint nc_effect_picker_to_subtype(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != 5) {
    uVar1 = nc_effect_normalize_subtype();
    return uVar1;
  }
  if (param_2 < 9) {
    return (uint)(byte)(&DAT_ram_4009b34c)[param_2];
  }
  return 0;
}

