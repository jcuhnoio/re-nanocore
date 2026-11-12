/* NanoCore 1.12: FUN_ram_40005da0 at 0x40005da0.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d12ce7359bf377f4bb29e4cc1aa298b73f598bebdb4ce27c53be1932835271d6
 * Source: analysis/rea-1.12-effects/results/01165-export-0x40005da0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005da0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_ram_40005d78(param_2);
  FUN_ram_400061cc();
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (puVar4 = (undefined4 *)*puVar1; puVar1 != puVar4; puVar4 = (undefined4 *)*puVar4) {
  }
  FUN_ram_400061ee();
  *(byte *)(param_1 + 0x10) = (byte)param_2 | 0x80;
  FUN_ram_400050f8(param_1,param_3,0x10);
  if (_DAT_ram_3004dbb8 != (code *)0x0) {
    (*_DAT_ram_3004dbb8)(param_1);
  }
  FUN_ram_400002f4();
  iVar3 = *(int *)(iVar2 + 4);
  *(int *)(iVar3 + 4) = param_1 + 0x14;
  *(int *)(param_1 + 0x14) = iVar3;
  *(int *)(iVar2 + 4) = param_1 + 0x14;
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  FUN_ram_400002fa();
  return;
}

