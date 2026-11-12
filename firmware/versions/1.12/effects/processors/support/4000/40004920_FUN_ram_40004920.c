/* NanoCore 1.12: FUN_ram_40004920 at 0x40004920.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_e407476a5b39cc70d08c153a877b52a7f1924ea03a1772b1587c25dd2747ac6c
 * Source: analysis/rea-1.12-effects/results/01116-export-0x40004920.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (_DAT_ram_3004dbc0 != (code *)0x0) {
    (*_DAT_ram_3004dbc0)();
  }
  uVar2 = FUN_ram_400002f4();
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 == (int *)(param_1 + 0x1c)) {
    if (*(short *)(param_1 + 0x24) == -1) {
      FUN_ram_400002fa();
      return -3;
    }
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
    iVar1 = 0;
  }
  else {
    FUN_ram_4000479e(piVar3);
    iVar1 = 1;
  }
  FUN_ram_400002fa(uVar2);
  if (iVar1 == 1) {
    FUN_ram_40006092();
    iVar1 = 0;
  }
  return iVar1;
}

