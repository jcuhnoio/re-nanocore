/* NanoCore 1.12: FUN_ram_40085624 at 0x40085624.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_7430ee68ae2ce8f0c167f1889fb52a24949abaddf973fe907b99a2cf477af53c
 * Source: analysis/rea-1.12-effects/results/03619-export-0x40085624.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined8 FUN_ram_40085624(int param_1)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  if (*(uint *)(param_1 + 8) < 4) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    return 0;
  }
  uVar1 = **(undefined4 **)(param_1 + 4);
  *(undefined4 **)(param_1 + 4) = *(undefined4 **)(param_1 + 4) + 1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) - 4;
  return CONCAT44(in_stack_00000000,uVar1);
}

