/* NanoCore 1.12: FUN_ram_4000638c at 0x4000638c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d769c24207301ed4a53af65b15baf5a4c9979e5fc428ca139d3bfb4e2fec1122
 * Source: analysis/rea-1.12-effects/results/01183-export-0x4000638c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_4000638c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) != 4) {
    if ((*(byte *)(param_1 + 0x3c) & 7) != 0) {
      FUN_ram_40005ffe();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000666c(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x3c) = 4;
    FUN_ram_40004660(param_1);
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0;
}

