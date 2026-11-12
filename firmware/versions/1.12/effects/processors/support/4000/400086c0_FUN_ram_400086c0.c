/* NanoCore 1.12: FUN_ram_400086c0 at 0x400086c0.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_c23dada01bf710b4a1a1a8a9e98c937b0640f1fb49128bbecb59ddead38fed61
 * Source: analysis/rea-1.12-effects/results/01289-export-0x400086c0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_400086c0(void)

{
  int iVar1;
  
  if (_DAT_ram_3004f6b0 != 0) {
    iVar1 = FUN_ram_40006382();
    return _DAT_ram_3004f6e0 == iVar1;
  }
  return false;
}

