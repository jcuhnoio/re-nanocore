/* NanoCore 1.12: FUN_ram_4000487e at 0x4000487e.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_252ac28e18002834191b26faec16d7f303b19d194f38e307e6602c6838d0e9eb
 * Source: analysis/rea-1.12-effects/results/01114-export-0x4000487e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4000487e(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  if (_DAT_ram_3004dbc8 != (code *)0x0) {
    (*_DAT_ram_3004dbc8)();
  }
  uVar1 = FUN_ram_400002f4();
  if (*(short *)(param_1 + 0x24) == 0) {
    if (aiStack_24[0] == 0) {
      FUN_ram_400002fa();
      return -2;
    }
    iVar2 = FUN_ram_40006382();
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_400047a4(param_1 + 0x1c,iVar2,*(undefined1 *)(param_1 + 0x11));
    if (0 < aiStack_24[0]) {
      FUN_ram_400067c6(iVar2 + 0x54,0,aiStack_24);
      FUN_ram_400066a2(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006092();
    if (*(int *)(iVar2 + 0x38) != 0) {
      return *(int *)(iVar2 + 0x38);
    }
  }
  else {
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
    FUN_ram_400002fa();
  }
  if (_DAT_ram_3004dbc4 != (code *)0x0) {
    (*_DAT_ram_3004dbc4)(param_1);
  }
  return 0;
}

