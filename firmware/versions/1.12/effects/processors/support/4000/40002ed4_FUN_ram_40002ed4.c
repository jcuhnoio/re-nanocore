/* NanoCore 1.12: FUN_ram_40002ed4 at 0x40002ed4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_26e2cf0c3e05b03c5c5d86bf5aee238bbbbe35a3f642623307ba79bc295d502d
 * Source: analysis/rea-1.12-effects/results/01063-export-0x40002ed4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_40002ed4(int param_1)

{
  float fVar1;
  undefined4 in_register_00000100;
  undefined4 *puVar2;
  
  fVar1 = DAT_ram_400a4524;
  if (param_1 != 0) {
    fVar1 = DAT_ram_400a4528;
  }
  puVar2 = (undefined4 *)thunk_FUN_ram_40004f70(fVar1 * DAT_ram_400a4524);
  *puVar2 = 0x22;
  return in_register_00000100;
}

