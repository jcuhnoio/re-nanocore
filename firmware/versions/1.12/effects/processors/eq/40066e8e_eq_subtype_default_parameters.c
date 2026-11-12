/* NanoCore 1.12: eq_subtype_default_parameters at 0x40066e8e.
 * Role: Initializes4/7/9 controls to midpoint according to band count.
 * REA: ev_5038a6fff57b0dcbbbf6535009ac8d8792a88bc0035054acbe21fa353983cd60
 * Source: analysis/rea-1.12/results/03502-export-0x40066e8e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void eq_subtype_default_parameters(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 7;
  if (param_3 != 1) {
    iVar1 = 9;
  }
  if (param_3 == 0) {
    iVar1 = 4;
  }
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    uVar2 = (undefined4)_DAT_ram_4009675c;
    *param_1 = uVar2;
    if ((((param_2 != 1) &&
         (((param_1[1] = uVar2, param_2 != 2 && (param_1[2] = uVar2, param_2 != 3)) &&
          (param_1[3] = uVar2, iVar1 != 4)))) &&
        ((((param_2 != 4 && (param_1[4] = uVar2, iVar1 != 5)) && (param_2 != 5)) &&
         ((param_1[5] = uVar2, iVar1 != 6 && (param_2 != 6)))))) &&
       ((param_1[6] = uVar2, iVar1 != 7 &&
        (((param_2 != 7 && (param_1[7] = uVar2, iVar1 == 9)) && (param_2 != 8)))))) {
      param_1[8] = uVar2;
    }
  }
  return;
}

