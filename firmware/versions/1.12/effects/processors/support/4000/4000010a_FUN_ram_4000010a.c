/* NanoCore 1.12: FUN_ram_4000010a at 0x4000010a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_70d49ddbffe1609428e9899449b6a09102703052ce467d740491477c0e54c15c
 * Source: analysis/rea-1.12-effects/results/01023-export-0x4000010a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000010a(undefined4 param_1,undefined4 param_2)

{
  if (_DAT_ram_3004dfa4 != 1) {
    _DAT_ram_3004dfa4 = 1;
    _DAT_ram_3004df9c = param_1;
  }
  _DAT_ram_3004dfa0 = param_2;
  DAT_ram_2080100c = DAT_ram_2080100c | 1;
  fence();
  fence();
  custom0();
  return;
}

