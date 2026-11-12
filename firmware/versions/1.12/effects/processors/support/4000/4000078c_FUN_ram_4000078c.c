/* NanoCore 1.12: FUN_ram_4000078c at 0x4000078c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d11aadcc6d66522325aae987a331da46bf4b5f175a1f685cbaec1d3c5347c33a
 * Source: analysis/rea-1.12-effects/results/01029-export-0x4000078c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint FUN_ram_4000078c(float param_1)

{
  uint in_register_00000100;
  uint uVar1;
  uint uVar2;
  
  uVar2 = in_register_00000100 & 0x7fffffff;
  uVar1 = (uVar2 >> 0x17) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      if (((0.0 < param_1 + DAT_ram_400a43e8) && ((int)in_register_00000100 < 0)) && (uVar2 != 0)) {
        in_register_00000100 = DAT_ram_40096728;
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if (((uVar2 & in_register_00000100) != 0) && (0.0 < param_1 + DAT_ram_400a43e8)) {
        if ((int)in_register_00000100 < 0) {
          in_register_00000100 = (0x800000 >> (uVar1 & 0x1f)) + in_register_00000100;
        }
        in_register_00000100 = ~uVar2 & in_register_00000100;
      }
    }
  }
  else if (0x7f7fffff < uVar2) {
    return in_register_00000100;
  }
  return in_register_00000100;
}

