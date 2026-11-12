/* NanoCore 1.12: FUN_ram_40000712 at 0x40000712.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_8b0d32eeecf6e7ffb9db6286dab0536c294d3474e7d505cfa9304df5ac73da6c
 * Source: analysis/rea-1.12-effects/results/01028-export-0x40000712.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

ulonglong FUN_ram_40000712(undefined8 param_1)

{
  uint in_register_00000100;
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((in_register_00000100 & 0x7fffffff) < 0x3f490fd9) {
    uVar3 = FUN_ram_40001f08(param_1,0);
    return uVar3;
  }
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return (ulonglong)(uint)((float)param_1 - (float)param_1);
  }
  uVar1 = FUN_ram_40001bb4(&uStack_18);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    fVar2 = (float)FUN_ram_400026b6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_ram_40001f08(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 0) {
    uVar3 = FUN_ram_40001f08(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
  }
  else {
    uVar3 = FUN_ram_400026b6(1);
  }
  return uVar3;
}

