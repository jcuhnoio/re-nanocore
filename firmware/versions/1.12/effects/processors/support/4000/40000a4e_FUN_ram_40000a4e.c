/* NanoCore 1.12: FUN_ram_40000a4e at 0x40000a4e.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_69ce9a81e86357ccbc311238a30141fadec4963b21b8430feb85d7e6005f2153
 * Source: analysis/rea-1.12-effects/results/01036-export-0x40000a4e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

ulonglong FUN_ram_40000a4e(undefined8 param_1)

{
  uint in_register_00000100;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((in_register_00000100 & 0x7fffffff) < 0x3f490fdb) {
    uVar2 = FUN_ram_4000275c(param_1,0,1);
    return uVar2;
  }
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return (ulonglong)(uint)((float)param_1 - (float)param_1);
  }
  uVar1 = FUN_ram_40001bb4(&uStack_18);
  uVar2 = FUN_ram_4000275c(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),
                           (uVar1 & 1) * -2 + 1);
  return uVar2;
}

