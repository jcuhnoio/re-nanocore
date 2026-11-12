/* NanoCore 1.12: FUN_ram_40008cf8 at 0x40008cf8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_af89b364145e71d0407ff2d1ca727a5ac15236ded919e2b70ea665255e774540
 * Source: analysis/rea-1.12-effects/results/01305-export-0x40008cf8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

int FUN_ram_40008cf8(int param_1)

{
  int iVar1;
  
  iVar1 = 0x40;
  do {
    if (*(int *)(param_1 + 0x8c) == 0) {
      return 0;
    }
    iVar1 = iVar1 + -1;
    FUN_ram_400064e4(1);
  } while (iVar1 != 0);
  return -(uint)(*(int *)(param_1 + 0x8c) != 0);
}

