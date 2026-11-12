/* NanoCore 1.12: eq_default_parameters at 0x40066f42.
 * Role: Midpoint EQ control initialization.
 * REA: ev_caaaddc5233b6eb3e0b60b676e5f9675f564042ee1888df159bd33f52d90d05c
 * Source: analysis/rea-1.12/results/03503-export-0x40066f42.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void eq_default_parameters(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    uVar1 = _DAT_ram_4009675c;
    *param_1 = _DAT_ram_4009675c;
    if (((((param_2 != 1) && (*(undefined8 *)((int)param_1 + 4) = uVar1, param_2 != 2)) &&
         (param_1[1] = uVar1, param_2 != 3)) &&
        ((*(undefined8 *)((int)param_1 + 0xc) = uVar1, param_2 != 4 &&
         (param_1[2] = uVar1, param_2 != 5)))) &&
       ((*(undefined8 *)((int)param_1 + 0x14) = uVar1, param_2 != 6 &&
        ((param_1[3] = uVar1, param_2 != 7 &&
         (*(undefined8 *)((int)param_1 + 0x1c) = uVar1, param_2 != 8)))))) {
      param_1[4] = uVar1;
    }
    return;
  }
  return;
}

