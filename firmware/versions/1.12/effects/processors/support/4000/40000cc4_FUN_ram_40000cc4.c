/* NanoCore 1.12: FUN_ram_40000cc4 at 0x40000cc4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_e60b0a814c017471854a817093dc94777e0fd12d4d0593b861e77f3dd04e698a
 * Source: analysis/rea-1.12-effects/results/01042-export-0x40000cc4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40000cc4(float param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_ram_400014b2();
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

