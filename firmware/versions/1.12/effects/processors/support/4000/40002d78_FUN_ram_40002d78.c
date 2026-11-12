/* NanoCore 1.12: FUN_ram_40002d78 at 0x40002d78.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_6c3c9956929e1051c22d850f87be43fb8200d22b5ad2ab00f049d83a1100e5bc
 * Source: analysis/rea-1.12-effects/results/01062-export-0x40002d78.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint FUN_ram_40002d78(int param_1)

{
  int iVar1;
  uint in_register_00000100;
  uint uVar2;
  
  uVar2 = in_register_00000100 & 0x7fffffff;
  if (uVar2 == 0) {
    return in_register_00000100;
  }
  if (0x7f7fffff < uVar2) {
    return in_register_00000100;
  }
  if ((in_register_00000100 & 0x7f800000) == 0) {
    if (param_1 < -50000) {
      return in_register_00000100;
    }
    uVar2 = ((in_register_00000100 & 0x7fffffff) >> 0x17) - 0x19;
  }
  else {
    uVar2 = uVar2 >> 0x17;
  }
  iVar1 = uVar2 + param_1;
  if (iVar1 < 0xff) {
    if (0 < iVar1) {
      return iVar1 * 0x800000 | in_register_00000100 & 0x807fffff;
    }
    if (-0x17 < iVar1) {
      return in_register_00000100;
    }
    if (param_1 < 0xc351) {
      return in_register_00000100;
    }
  }
  return in_register_00000100;
}

