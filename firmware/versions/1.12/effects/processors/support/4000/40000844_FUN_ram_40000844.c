/* NanoCore 1.12: FUN_ram_40000844 at 0x40000844.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_82f4d161247b91e15b241e4a9a92ab126a7448b813668adb4ffd0b2075336e5b
 * Source: analysis/rea-1.12-effects/results/01030-export-0x40000844.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_40000844(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_ram_400008c0();
  fVar2 = param_2;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_400008c0(param_2);
    fVar2 = param_1;
    if ((iVar1 != 0) && (fVar2 = param_2, param_2 < param_1)) {
      return param_1;
    }
  }
  return fVar2;
}

