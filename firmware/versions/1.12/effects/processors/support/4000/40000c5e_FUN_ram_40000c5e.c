/* NanoCore 1.12: FUN_ram_40000c5e at 0x40000c5e.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_afee2bb20441204d313d1ec136ba05c3449bb3f1e0e02c73c7e44b70c79891e8
 * Source: analysis/rea-1.12-effects/results/01041-export-0x40000c5e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40000c5e(float param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_ram_400012a2();
  if ((_DAT_ram_3004d648 != -1) && (param_1 <= 0.0)) {
    if (param_1 != 0.0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
      *puVar1 = 0x21;
      uVar2 = FUN_ram_40002c8c(s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20);
      return uVar2;
    }
    puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
    uVar2 = (ulonglong)DAT_ram_400a43f8;
    *puVar1 = 0x22;
  }
  return uVar2;
}

