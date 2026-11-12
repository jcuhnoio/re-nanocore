/* NanoCore 1.12: FUN_ram_4000275c at 0x4000275c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_eb362d2d48dbff24906707ffe3c0d53d3551ea71e70b4f08499717c30993e09a
 * Source: analysis/rea-1.12-effects/results/01056-export-0x4000275c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_4000275c(float param_1,int param_2)

{
  float in_register_00000100;
  float fVar1;
  
  fVar1 = ABS(in_register_00000100);
  if (((uint)fVar1 < 0x31800000) && ((int)param_1 == 0)) {
    if (fVar1 == 0.0 && param_2 == -1) {
      fVar1 = (float)FUN_ram_40002c60();
      return DAT_ram_4009672c / fVar1;
    }
    if (param_2 != 1) {
      return in_register_00000100;
    }
  }
  else if (0x3f2ca13f < (uint)fVar1) {
    return in_register_00000100;
  }
  return in_register_00000100;
}

