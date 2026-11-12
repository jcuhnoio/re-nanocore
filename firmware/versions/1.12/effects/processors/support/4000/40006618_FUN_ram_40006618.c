/* NanoCore 1.12: FUN_ram_40006618 at 0x40006618.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_ca3820d4a74b6b13849b6ca8febf606ad54915a685e434c9478a0113caba5a12
 * Source: analysis/rea-1.12-effects/results/01193-export-0x40006618.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40006618(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x20);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  return;
}

