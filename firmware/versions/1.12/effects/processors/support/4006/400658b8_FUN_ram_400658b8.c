/* NanoCore 1.12: FUN_ram_400658b8 at 0x400658b8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_b72090450e20b12bc185388b75dcb37958ed3d70bf9d7c6e8cfd4b18213efb51
 * Source: analysis/rea-1.12-effects/results/03487-export-0x400658b8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_400658b8(float param_1)

{
  float fVar1;
  
  fVar1 = (param_1 - DAT_ram_40099f6c) / DAT_ram_4009b154;
  if (fVar1 < 0.0) {
    return 0.0;
  }
  if (fVar1 <= DAT_ram_4009672c) {
    return fVar1;
  }
  return DAT_ram_4009672c;
}

