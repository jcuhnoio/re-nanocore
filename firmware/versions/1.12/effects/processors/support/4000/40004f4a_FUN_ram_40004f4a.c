/* NanoCore 1.12: FUN_ram_40004f4a at 0x40004f4a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_93c75265e409447b77d451f624bb652fb00c04d0456ac1727fb9edc43fe8134b
 * Source: analysis/rea-1.12-effects/results/01131-export-0x40004f4a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004f4a(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40004d36();
  uVar1 = param_1;
  if ((iVar2 == 0) && (iVar2 = FUN_ram_40006382(), uVar1 = param_1, iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x38) = param_1;
    uVar1 = _DAT_ram_3004dafc;
  }
  _DAT_ram_3004dafc = uVar1;
  return;
}

