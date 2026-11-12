/* NanoCore 1.12: FUN_ram_40006550 at 0x40006550.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_bcba0c8c7367b7d17a7475be33b42f076ea6562fb1e31ac964dd52bde3889f56
 * Source: analysis/rea-1.12-effects/results/01191-export-0x40006550.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006550(int param_1)

{
  *(int *)(param_1 + 0x40) = 1 << (*(byte *)(param_1 + 0x3d) & 0x1f);
  *(undefined1 *)(param_1 + 0x3c) = 2;
  FUN_ram_400064f2();
  if (_DAT_ram_3004dbd0 != 0) {
    FUN_ram_40006092();
  }
  return 0;
}

