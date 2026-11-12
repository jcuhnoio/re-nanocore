/* NanoCore 1.12: FUN_ram_400047a4 at 0x400047a4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_140f20d61f7f94f7deedcfd33f3ffc628a19d292972de742d94c56a8d0c594b4
 * Source: analysis/rea-1.12-effects/results/01110-export-0x400047a4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_400047a4(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_ram_40006430(param_2);
  if (param_3 != 0) {
    if (param_3 != 1) {
      return;
    }
    for (puVar2 = (undefined4 *)*param_1; param_1 != puVar2; puVar2 = (undefined4 *)*puVar2) {
      if (*(byte *)(param_2 + 0x3d) < *(byte *)((int)puVar2 + 0x21)) {
        piVar1 = (int *)puVar2[1];
        *piVar1 = param_2 + 0x1c;
        *(int **)(param_2 + 0x20) = piVar1;
        puVar2[1] = param_2 + 0x1c;
        *(undefined4 **)(param_2 + 0x1c) = puVar2;
        return;
      }
    }
  }
  piVar1 = (int *)param_1[1];
  *piVar1 = param_2 + 0x1c;
  *(int **)(param_2 + 0x20) = piVar1;
  param_1[1] = param_2 + 0x1c;
  *(undefined4 **)(param_2 + 0x1c) = param_1;
  return;
}

