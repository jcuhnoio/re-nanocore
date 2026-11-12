/* NanoCore 1.12: FUN_ram_40004660 at 0x40004660.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_f079a850bdb112d32540858f82abc8e4e041812e82fe0064b61eb5ce3a68bf48
 * Source: analysis/rea-1.12-effects/results/01104-export-0x40004660.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40004660(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_LOOP_ram_3004a89c;
  puVar1 = (undefined4 *)(PTR_LOOP_ram_3004a89c + 4);
  PTR_LOOP_ram_3004a89c = (undefined *)(param_1 + 0x1c);
  *puVar1 = (undefined *)(param_1 + 0x1c);
  *(undefined **)(param_1 + 0x1c) = puVar2;
  *(undefined ***)(param_1 + 0x20) = &PTR_LOOP_ram_3004a89c;
  return;
}

