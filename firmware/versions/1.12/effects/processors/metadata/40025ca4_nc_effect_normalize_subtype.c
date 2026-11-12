/* NanoCore 1.12: nc_effect_normalize_subtype at 0x40025ca4.
 * Role: Restricts MOD selector to nine supported IDs
 * REA: ev_d3916b2ea3465912cd88a74a9f78797f88983a6d6275c97dc3d2fe5503ee99a6
 * Source: analysis/rea-1.12-effects/results/01971-export-0x40025ca4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint nc_effect_normalize_subtype(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 6) {
    if (param_2 < 8) {
      if (param_2 == 4) {
        param_2 = 2;
      }
    }
    else {
      param_2 = 6;
    }
  }
  else if (param_1 == 7) {
    if (2 < param_2) {
      param_2 = 2;
    }
    param_2 = param_2 & 0xff;
  }
  else {
    if (param_1 != 5) {
      uVar1 = FUN_ram_40025c82();
      if ((uVar1 < 2) || (uVar1 <= param_2)) {
        param_2 = 0;
      }
      return param_2;
    }
    if ((((4 < param_2) && (param_2 != 10)) && (param_2 != 0xb)) &&
       ((param_2 != 0xc && (param_2 != 0x11)))) {
      param_2 = 0;
    }
  }
  return param_2;
}

