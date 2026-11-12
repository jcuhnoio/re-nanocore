/* NanoCore 1.12: FUN_ram_400009d2 at 0x400009d2.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_b2d401eaec791de1625c37aac4a064d3f4d53e5184dff6dcc1332e1932fccf85
 * Source: analysis/rea-1.12-effects/results/01035-export-0x400009d2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

ulonglong FUN_ram_400009d2(undefined8 param_1)

{
  uint in_register_00000100;
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((in_register_00000100 & 0x7fffffff) < 0x3f490fd9) {
    uVar3 = FUN_ram_400026b6(param_1,0,0);
    return uVar3;
  }
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return (ulonglong)(uint)((float)param_1 - (float)param_1);
  }
  uVar1 = FUN_ram_40001bb4(&uStack_18);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    uVar3 = FUN_ram_40001f08(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_ram_400026b6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 0) {
    uVar3 = FUN_ram_400026b6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
  }
  else {
    fVar2 = (float)FUN_ram_40001f08();
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  return uVar3;
}

