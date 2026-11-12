/* NanoCore 1.12: FUN_ram_400055d4 at 0x400055d4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_f2c63050c9d27b2071d821d53cbb3ffdb7ed4f38e909a47ec605ae11e8c207f9
 * Source: analysis/rea-1.12-effects/results/01151-export-0x400055d4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400055d4(int param_1)

{
  if (_DAT_ram_3004db2c != (code *)0x0) {
    (*_DAT_ram_3004db2c)();
  }
  if (param_1 != 0) {
    FUN_ram_40004f0a();
    thunk_FUN_ram_400058be(param_1);
    FUN_ram_40004f2c();
    return;
  }
  return;
}

