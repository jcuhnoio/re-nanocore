/* NanoCore 1.12: nc_chorus_default_parameters at 0x40071ca6.
 * Role: Initial MOD subtype0 defaults at normalized rate0.6043956/depth1.
 * REA: ev_a89b16f18a90e2b4d279899711e9fb52b2b207d47b15bc77109ede922729bb17
 * Source: analysis/rea-1.12-effects/results/03533-export-0x40071ca6.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_chorus_default_parameters(ulonglong *param_1,int param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009f73c;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009672c;
    }
    return;
  }
  return;
}

