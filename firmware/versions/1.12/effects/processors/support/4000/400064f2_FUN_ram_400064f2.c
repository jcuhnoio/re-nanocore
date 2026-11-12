/* NanoCore 1.12: FUN_ram_400064f2 at 0x400064f2.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d1fc4f7d13cebaad2708521ab6ca3759d45fbf4f347a25a8d96d06c1cfc6a5fc
 * Source: analysis/rea-1.12-effects/results/01190-export-0x400064f2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400064f2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) == 2) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *(int *)(param_1 + 0x1c);
    piVar3 = *(int **)(param_1 + 0x20);
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *(int *)(param_1 + 0x20) = param_1 + 0x1c;
    *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
    FUN_ram_4000677c(param_1 + 0x54);
    FUN_ram_40005f7a(param_1);
    FUN_ram_400002fa(uVar1);
    if (_DAT_ram_3004dce8 != (code *)0x0) {
      (*_DAT_ram_3004dce8)(param_1);
    }
    return 0;
  }
  return 0xffffffff;
}

