/* NanoCore 1.12: dynamics_gate_default_parameters at 0x40069592.
 * Role: Initializes two controls for basic gate.
 * REA: ev_9e0f0f0b79b5b0a835831dfae848043d2bac15e3dcf8bb229e40d8769a4c27c6
 * Source: analysis/rea-1.12/results/03513-export-0x40069592.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void dynamics_gate_default_parameters(ulonglong *param_1,int param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40099f94;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a584;
    }
    return;
  }
  return;
}

