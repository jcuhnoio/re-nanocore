/* NanoCore 1.12: nc_effect_picker_count at 0x40025d1e.
 * Role: Returns nine MOD picker entries
 * REA: ev_e6abf8f82b86a1b683e682eb75858003459a2c4639584277fb5859d693fc14a4
 * Source: analysis/rea-1.12-effects/results/01973-export-0x40025d1e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 nc_effect_picker_count(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 5) {
    uVar1 = FUN_ram_40025c82();
    return uVar1;
  }
  return 9;
}

