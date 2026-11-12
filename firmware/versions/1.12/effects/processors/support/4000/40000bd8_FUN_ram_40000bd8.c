/* NanoCore 1.12: FUN_ram_40000bd8 at 0x40000bd8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d198bec7cf62db8a82ab9ab26e129ef8a1da14b6e3b3b7bc17819befabccb1fb
 * Source: analysis/rea-1.12-effects/results/01039-export-0x40000bd8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40000bd8(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_ram_40001066();
  if (_DAT_ram_3004d648 != -1) {
    iVar1 = FUN_ram_40002c74(param_1);
    if (iVar1 != 0) {
      if (DAT_ram_400a43f0 < param_1) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        uVar3 = DAT_ram_400a43ec;
        *puVar2 = 0x22;
      }
      else if (param_1 < DAT_ram_400a43f4) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        uVar3 = 0;
        *puVar2 = 0x22;
      }
    }
  }
  return uVar3;
}

