/* NanoCore 1.12: FUN_ram_40006430 at 0x40006430.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_1bed93168989653b3cc8902246f528c3c99fd8c1b8a79aa1f5b9e72a9dce9c04
 * Source: analysis/rea-1.12-effects/results/01186-export-0x40006430.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006430(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 5) == 1) {
    uVar1 = FUN_ram_400002f4();
    FUN_ram_40005ffe(param_1);
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf8 | 2;
    FUN_ram_4000677c(param_1 + 0x54);
    FUN_ram_400002fa(uVar1);
    if (_DAT_ram_3004dcec != (code *)0x0) {
      (*_DAT_ram_3004dcec)(param_1);
    }
    return 0;
  }
  return 0xffffffff;
}

