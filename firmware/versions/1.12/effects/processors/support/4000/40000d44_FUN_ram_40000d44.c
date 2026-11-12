/* NanoCore 1.12: FUN_ram_40000d44 at 0x40000d44.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_b027f7b2c606b53eeda1b831e593b220c5784ceee9f7342cd8f8c8fb39c9680b
 * Source: analysis/rea-1.12-effects/results/01044-export-0x40000d44.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x40000e64) */
/* WARNING: Removing unreachable block (ram,0x40000de0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_ram_40000d44(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)FUN_ram_4000156a();
  if (_DAT_ram_3004d648 != -1) {
    if (param_1 == 0.0) {
      if (param_2 == 0.0) {
        return DAT_ram_4009672c;
      }
      iVar1 = FUN_ram_40002c74(param_2);
      if ((iVar1 != 0) && (param_2 < 0.0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        fVar3 = DAT_ram_400a43f8;
        *puVar2 = 0x21;
      }
    }
    else {
      iVar1 = FUN_ram_40002c74();
      if (((iVar1 == 0) && (iVar1 = FUN_ram_40002c74(param_1), iVar1 != 0)) &&
         (iVar1 = FUN_ram_40002c74(param_2), iVar1 != 0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        *puVar2 = 0x22;
        fVar3 = DAT_ram_400a43ec;
        if ((param_1 < 0.0) &&
           (fVar4 = (float)FUN_ram_40002c96(param_2), fVar3 = DAT_ram_400a43ec, fVar4 != param_2)) {
          fVar3 = DAT_ram_400a43f8;
        }
      }
      else if (((fVar3 == 0.0) && (iVar1 = FUN_ram_40002c74(param_1), iVar1 != 0)) &&
              (iVar1 = FUN_ram_40002c74(param_2), iVar1 != 0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        *puVar2 = 0x22;
        fVar3 = 0.0;
      }
    }
  }
  return fVar3;
}

