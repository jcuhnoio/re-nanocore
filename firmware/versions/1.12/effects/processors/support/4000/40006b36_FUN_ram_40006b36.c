/* NanoCore 1.12: FUN_ram_40006b36 at 0x40006b36.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d5deb630bfea28317f74e74e96c07a4b9730f8b3eb7d3804a030b8cedba7f1c6
 * Source: analysis/rea-1.12-effects/results/01207-export-0x40006b36.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined1 * thunk_FUN_ram_40004f70(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_40004d36();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006382(), iVar1 != 0)) {
    puVar2 = (undefined1 *)(iVar1 + 0x38);
  }
  else {
    puVar2 = &DAT_ram_3004dafc;
  }
  return puVar2;
}

