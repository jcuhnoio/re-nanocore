/* NanoCore 1.12: nc_drive_parameter_defaults at 0x40074160.
 * Role: Initializes normalized drive defaults to [0.5, 0.5, 0.8].
 * REA: ev_a5a8e84c581a702f44b5a9af23a3770fb120c14e0705f128bd3e364d81b41284
 * Source: analysis/rea-1.12/results/03558-export-0x40074160.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_drive_parameter_defaults(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    uVar1 = (ulonglong)DAT_ram_4009675c;
    *param_1 = uVar1;
    if ((param_2 != 1) && (*(ulonglong *)((int)param_1 + 4) = uVar1, param_2 != 2)) {
      param_1[1] = (ulonglong)DAT_ram_40096760;
    }
    return;
  }
  return;
}

