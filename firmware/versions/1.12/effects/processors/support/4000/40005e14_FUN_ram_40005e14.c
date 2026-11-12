/* NanoCore 1.12: FUN_ram_40005e14 at 0x40005e14.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_599fc83bd436364cdadff2f394c7c07b484f522ce3589673f4094c5b0144a385
 * Source: analysis/rea-1.12-effects/results/01166-export-0x40005e14.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005e14(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_ram_3004dbbc != (code *)0x0) {
    (*_DAT_ram_3004dbbc)();
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_ram_400002f4();
  iVar1 = *(int *)(param_1 + 0x14);
  piVar2 = *(int **)(param_1 + 0x18);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x18) = param_1 + 0x14;
  *(int *)(param_1 + 0x14) = param_1 + 0x14;
  FUN_ram_400002fa();
  return;
}

