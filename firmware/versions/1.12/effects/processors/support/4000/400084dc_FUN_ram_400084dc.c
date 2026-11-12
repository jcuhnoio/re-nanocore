/* NanoCore 1.12: FUN_ram_400084dc at 0x400084dc.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_7dd4b3195d0deff11775a6ca73abdb60ee778cb79c64c2753398efb93005e149
 * Source: analysis/rea-1.12-effects/results/01287-export-0x400084dc.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_400084dc(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = nc_fx2_load_drive_slot(DAT_ram_3004ab1e);
  if (iVar2 == 0) {
    uVar3 = 0;
    if ((0x1d < DAT_ram_3004ab1e) && ((byte)(DAT_ram_3004ab1e - 0x1e) < 8)) {
      DAT_ram_3004f730 = DAT_ram_3004ab1e - 0x1e;
    }
  }
  else {
    cVar1 = '\0';
    do {
      iVar2 = nc_fx2_load_drive_slot(cVar1 + '\x1e');
      if (iVar2 == 0) {
        DAT_ram_3004f730 = cVar1;
        return 0;
      }
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\b');
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

