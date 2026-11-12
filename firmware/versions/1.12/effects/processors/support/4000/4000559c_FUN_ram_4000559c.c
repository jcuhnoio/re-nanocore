/* NanoCore 1.12: FUN_ram_4000559c at 0x4000559c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_52e0524dafce8a3be418308a883a0f3925d3dfed66256feedc1dff0de261c3d9
 * Source: analysis/rea-1.12-effects/results/01150-export-0x4000559c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000559c(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_ram_40004f0a();
  uVar1 = thunk_FUN_ram_40005754(0x3004db34,param_1);
  FUN_ram_40004f2c();
  if (_DAT_ram_3004db30 != (code *)0x0) {
    (*_DAT_ram_3004db30)(uVar1,param_1);
  }
  return uVar1;
}

