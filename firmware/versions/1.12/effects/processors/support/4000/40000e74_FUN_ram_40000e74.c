/* NanoCore 1.12: FUN_ram_40000e74 at 0x40000e74.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_a004c3558d11f47b92d809cb7c1c7f12f4dcba4391cee97ceec34f32df5b64f4
 * Source: analysis/rea-1.12-effects/results/01045-export-0x40000e74.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40000e74(float param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_ram_40001e38();
  if ((_DAT_ram_3004d648 != -1) && (param_1 < 0.0)) {
    puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
    *puVar1 = 0x21;
    return 0x7fc00000;
  }
  return uVar2;
}

