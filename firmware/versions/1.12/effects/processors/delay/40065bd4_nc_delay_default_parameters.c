/* NanoCore 1.12: nc_delay_default_parameters at 0x40065bd4.
 * Role: Default parameter table writer
 * REA: ev_b0f38a4293c57690bab628b946df04a90bccb47b6253c84cb65dafa66bea26ed
 * Source: analysis/rea-1.12-effects/results/03489-export-0x40065bd4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_delay_default_parameters(ulonglong *param_1,uint param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009f308;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f304;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_4009b144;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009f2dc;
      }
    }
    if (4 < param_2) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
  }
  return;
}

