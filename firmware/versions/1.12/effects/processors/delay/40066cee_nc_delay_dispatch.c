/* NanoCore 1.12: nc_delay_dispatch at 0x40066cee.
 * Role: Kind 5 callback; fast path subtype 3 to Ice
 * REA: ev_2a4fc7d27133cc9dd54f3353bb78c5eb77dd16f37f678f04c44c666d3e2bea9c
 * Source: analysis/rea-1.12-effects/results/03492-export-0x40066cee.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_delay_dispatch
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               undefined4 param_7,int param_8,char param_9,int param_10)

{
  if (((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) &&
      ((param_6 != 0 && (*(int *)(param_1 + 4) != 0)))) &&
     ((3 < *(uint *)(param_1 + 8) && ((param_8 == 3 && (*(char *)(param_1 + 0x20) == '\x03')))))) {
    if (param_10 != 0) {
      *(bool *)param_10 = param_9 != '\0' && (param_3 != 0 && param_5 != 0);
    }
    nc_delay_ice_process();
    return;
  }
  nc_delay_process_variants();
  return;
}

