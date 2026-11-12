/* NanoCore 1.12: FUN_ram_40000902 at 0x40000902.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_baeb3eea1bbfe8b017410a5bd03f1c9c48b0e8caa05a6eb9657f4f6c090cd113
 * Source: analysis/rea-1.12-effects/results/01033-export-0x40000902.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint FUN_ram_40000902(float param_1)

{
  uint in_register_00000100;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (in_register_00000100 & 0x7fffffff) >> 0x17;
  uVar2 = uVar4 - 0x7f;
  uVar1 = (int)in_register_00000100 >> 0x1f | 1;
  if (0x1e < (int)uVar2) {
    return (int)param_1;
  }
  if (-1 < (int)uVar2) {
    uVar3 = in_register_00000100 & 0x7fffff | 0x800000;
    if (0x16 < (int)uVar2) {
      return uVar1 * (uVar3 << (uVar4 - 0x96 & 0x1f));
    }
    return uVar1 * ((0x400000 >> (uVar2 & 0x1f)) + uVar3 >> (0x17 - uVar2 & 0x1f));
  }
  return uVar1 & -(uint)(uVar4 == 0x7e);
}

