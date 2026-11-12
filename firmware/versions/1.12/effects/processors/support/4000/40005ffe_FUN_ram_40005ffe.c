/* NanoCore 1.12: FUN_ram_40005ffe at 0x40005ffe.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_89a830504e9f4fc0eecc40a9a827f38134b88bb6c215aa0b37a7ada830ad68b2
 * Source: analysis/rea-1.12-effects/results/01173-export-0x40005ffe.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005ffe(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_ram_400002f4();
  iVar1 = *(int *)(param_1 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x20);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  if (*(undefined1 **)(&DAT_ram_3004dbe0 + (uint)*(byte *)(param_1 + 0x3d) * 8) ==
      &DAT_ram_3004dbe0 + (uint)*(byte *)(param_1 + 0x3d) * 8) {
    _DAT_ram_3004dce0 = ~*(uint *)(param_1 + 0x40) & _DAT_ram_3004dce0;
  }
  FUN_ram_400002fa();
  return;
}

