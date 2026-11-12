/* NanoCore 1.12: FUN_ram_400043ae at 0x400043ae.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_76695822d22cf41556b6fe3a882422fb4aeddfa52c0b750eaee4276fa9848caf
 * Source: analysis/rea-1.12-effects/results/01084-export-0x400043ae.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x400043ba) */
/* WARNING: Removing unreachable block (ram,0x400043b6) */
/* WARNING: Removing unreachable block (ram,0x400043c6) */

int FUN_ram_400043ae(int param_1)

{
  if (param_1 < 0) {
    return -1;
  }
  return ((param_1 % 1000) * 1000 + 999) / 1000 + (param_1 / 1000) * 1000;
}

