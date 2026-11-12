/* NanoCore 1.12: nc_mod_process_dispatch at 0x40071cfe.
 * Role: Observed callback table and native thunk; generic path or subtype8 fastpath.
 * REA: ev_3c02173796a45602f492979d805531d2995634e531ba342706e11b0085067b2b
 * Source: analysis/rea-1.12-effects/results/03535-export-0x40071cfe.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_mod_process_dispatch
               (int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
               int param_6,undefined4 param_7,int param_8,char param_9,int param_10)

{
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) &&
     (((param_6 != 0 && (param_8 == 8)) && (*(char *)(param_1 + 0x2044) == '\b')))) {
    if (param_10 != 0) {
      *(bool *)param_10 = param_9 != '\0';
    }
    nc_pulse_vibe_process();
    return;
  }
  nc_mod_process_general();
  return;
}

