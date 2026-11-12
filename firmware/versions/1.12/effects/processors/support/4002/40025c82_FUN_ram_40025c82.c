/* NanoCore 1.12: FUN_ram_40025c82 at 0x40025c82.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_75bd31d3ec240c38daafc560f48134903ced06d3d172e46d5f7b57ea617dff0c
 * Source: analysis/rea-1.12-effects/results/01970-export-0x40025c82.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined1 FUN_ram_40025c82(uint param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 10) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (param_1 < 10) {
      uVar1 = (&DAT_ram_4009b1a8)[param_1];
    }
  }
  return uVar1;
}

