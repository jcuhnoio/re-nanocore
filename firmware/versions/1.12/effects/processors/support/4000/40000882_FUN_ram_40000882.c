/* NanoCore 1.12: FUN_ram_40000882 at 0x40000882.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d18d917e63375be8b7681961e5c01b1bec159d9c3724523028bb1bee3be956c8
 * Source: analysis/rea-1.12-effects/results/01031-export-0x40000882.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_40000882(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_ram_400008c0();
  fVar2 = param_2;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_400008c0(param_2);
    fVar2 = param_1;
    if ((iVar1 != 0) && (fVar2 = param_2, param_1 < param_2)) {
      return param_1;
    }
  }
  return fVar2;
}

