/* NanoCore 1.12: FUN_ram_3004113c at 0x3004113c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_47b0287aff1deed6df854fb91a82d4b6fb4c77c8d85cf9ee6ea4194650e0e804
 * Source: analysis/rea-1.12-effects/results/01008-export-0x3004113c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_3004113c(int param_1,int param_2,short *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2 + 1 >> 1;
  do {
    iVar4 = iVar4 + -1;
    puVar2 = (undefined4 *)(param_3[1] + param_1);
    puVar1 = (undefined4 *)(*param_3 + param_1);
    uVar3 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar3;
    uVar3 = puVar1[1];
    puVar1[1] = puVar2[1];
    puVar2[1] = uVar3;
    param_3 = param_3 + 2;
  } while (iVar4 != 0);
  return;
}

