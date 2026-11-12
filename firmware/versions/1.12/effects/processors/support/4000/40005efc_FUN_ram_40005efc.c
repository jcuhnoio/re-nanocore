/* NanoCore 1.12: FUN_ram_40005efc at 0x40005efc.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_9378b9a310ddd2ce317363e68d0664230d5175599e7044043e56ad9274a99e8e
 * Source: analysis/rea-1.12-effects/results/01170-export-0x40005efc.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 * FUN_ram_40005efc(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_40005d78(param_2);
  if (param_1 != 0) {
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    FUN_ram_400061cc();
    for (puVar1 = *(undefined4 **)(iVar2 + 4); puVar1 != (undefined4 *)(iVar2 + 4);
        puVar1 = (undefined4 *)*puVar1) {
      iVar3 = FUN_ram_4000513e(puVar1 + -5,param_1,0x10);
      if (iVar3 == 0) {
        FUN_ram_400061ee();
        return puVar1 + -5;
      }
    }
    FUN_ram_400061ee();
  }
  return (undefined4 *)0x0;
}

