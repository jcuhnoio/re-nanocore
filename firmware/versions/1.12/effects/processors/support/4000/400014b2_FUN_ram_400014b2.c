/* NanoCore 1.12: FUN_ram_400014b2 at 0x400014b2.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_a89af975054d464b9c359dd5fcf8e9d82fe35ba118cc7381eafbf10421b8c230
 * Source: analysis/rea-1.12-effects/results/01049-export-0x400014b2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_400014b2(float param_1)

{
  float fVar1;
  int iVar2;
  uint in_register_00000100;
  int iVar3;
  float fVar4;
  
  if ((in_register_00000100 & 0x7fffffff) == 0) {
    return DAT_ram_400a4418 / 0.0;
  }
  if (-1 < (int)in_register_00000100) {
    if ((int)in_register_00000100 < 0x7f800000) {
      iVar3 = 0;
      if ((int)in_register_00000100 < 0x800000) {
        iVar3 = -0x19;
      }
      iVar3 = ((int)in_register_00000100 >> 0x17) + -0x7f + iVar3;
      iVar2 = iVar3 >> 0x1f;
      fVar1 = (float)(iVar3 - iVar2);
      fVar4 = (float)FUN_ram_400012a2(in_register_00000100 & 0x7fffff | (iVar2 + 0x7f) * 0x800000);
      return fVar1 * DAT_ram_400a443c + fVar1 * DAT_ram_400a4438 + fVar4 * DAT_ram_400a4434;
    }
    return param_1 + param_1;
  }
  return (param_1 - param_1) / 0.0;
}

