/* NanoCore 1.12: FUN_ram_400008c0 at 0x400008c0.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_25230bc4a4f5392d84fbbe903245dd3a4ce0bf31062962e6ae880d25d5954cd4
 * Source: analysis/rea-1.12-effects/results/01032-export-0x400008c0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined1 FUN_ram_400008c0(void)

{
  uint in_register_00000100;
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = in_register_00000100 & 0x7fffffff;
  uVar1 = 2;
  if ((uVar2 != 0) && (uVar1 = 4, 0x7effffff < uVar2 - 0x800000)) {
    uVar1 = 3;
    if (0x7ffffe < uVar2 - 1) {
      uVar1 = uVar2 == 0x7f800000;
    }
  }
  return uVar1;
}

