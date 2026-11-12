/* NanoCore 1.12: FUN_ram_40000658 at 0x40000658.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_f7c91a570ea5cc9f1dafecb02b680fc33bbc46641d99b5fbd0b5c392329550da
 * Source: analysis/rea-1.12-effects/results/01027-export-0x40000658.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint FUN_ram_40000658(float param_1)

{
  uint in_register_00000100;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = in_register_00000100 & 0x7fffffff;
  uVar2 = (uVar3 >> 0x17) - 0x7f;
  uVar1 = in_register_00000100;
  if ((int)uVar2 < 0x17) {
    if ((int)uVar2 < 0) {
      if (((0.0 < param_1 + DAT_ram_400a43e8) &&
          (uVar1 = DAT_ram_4009f590, -1 < (int)in_register_00000100)) &&
         (uVar1 = in_register_00000100, uVar3 != 0)) {
        uVar1 = DAT_ram_4009672c;
      }
    }
    else {
      uVar3 = 0x7fffff >> (uVar2 & 0x1f);
      if (((uVar3 & in_register_00000100) != 0) && (0.0 < param_1 + DAT_ram_400a43e8)) {
        if (0 < (int)in_register_00000100) {
          in_register_00000100 = (0x800000 >> (uVar2 & 0x1f)) + in_register_00000100;
        }
        uVar1 = ~uVar3 & in_register_00000100;
      }
    }
  }
  else if (0x7f7fffff < uVar3) {
    return in_register_00000100;
  }
  return uVar1;
}

