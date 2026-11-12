/* NanoCore 1.12: FUN_ram_400061ee at 0x400061ee.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_60dedb85d0d5edf603ccb609f480dc88261dce6a3108f35a6582e7a9e218a8bd
 * Source: analysis/rea-1.12-effects/results/01177-export-0x400061ee.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400061ee(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (_DAT_ram_3004dbd8 - 1) * 0x10000;
  _DAT_ram_3004dbd8 = (ushort)((uint)iVar1 >> 0x10);
  if (0 < iVar1 >> 0x10) {
    FUN_ram_400002fa();
    return;
  }
  _DAT_ram_3004dbd8 = 0;
  FUN_ram_400002fa();
  if (_DAT_ram_3004dbd0 != 0) {
    FUN_ram_40006092();
    return;
  }
  return;
}

