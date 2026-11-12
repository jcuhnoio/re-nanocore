/* NanoCore 1.12: FUN_ram_40000970 at 0x40000970.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_42c08244da08d99fb9a578a35cc90b41410738a0188ad5472839596b8d305944
 * Source: analysis/rea-1.12-effects/results/01034-export-0x40000970.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

ulonglong FUN_ram_40000970(ulonglong param_1)

{
  uint in_register_00000100;
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((in_register_00000100 & 0x7fffffff) >> 0x17) - 0x7f;
  if ((int)uVar2 < 0x17) {
    if ((int)uVar2 < 0) {
      uVar1 = in_register_00000100 & 0x80000000;
      if (uVar2 == 0xffffffff) {
        uVar1 = in_register_00000100 & 0x80000000 | 0x3f800000;
      }
      param_1 = (ulonglong)uVar1;
    }
    else {
      uVar1 = 0x7fffff >> (uVar2 & 0x1f);
      if ((uVar1 & in_register_00000100) != 0) {
        param_1 = (ulonglong)((0x400000 >> (uVar2 & 0x1f)) + in_register_00000100 & ~uVar1);
      }
    }
  }
  else if (uVar2 == 0x80) {
    return (ulonglong)(uint)((float)param_1 + (float)param_1);
  }
  return param_1;
}

