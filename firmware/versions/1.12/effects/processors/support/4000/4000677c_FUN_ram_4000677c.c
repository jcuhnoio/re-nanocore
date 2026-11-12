/* NanoCore 1.12: FUN_ram_4000677c at 0x4000677c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_57b3e390e9a8e3f0d0a1e5f859fdc9a139899777b23bb3355f9f7e696c8f7856
 * Source: analysis/rea-1.12-effects/results/01197-export-0x4000677c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000677c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    if (_DAT_ram_3004dbc0 != (code *)0x0) {
      (*_DAT_ram_3004dbc0)();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_40006618(param_1);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0xffffffff;
}

