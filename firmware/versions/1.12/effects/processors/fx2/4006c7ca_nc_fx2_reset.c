/* NanoCore 1.12: nc_fx2_reset at 0x4006c7ca.
 * Role: Resets pitch and FX2 state
 * REA: ev_30b2af4db3cc0810f7d3173adad6a5657e7d58ee1a1f528259638bbba0d89817
 * Source: analysis/rea-1.12-effects/results/03516-export-0x4006c7ca.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_fx2_reset(int param_1)

{
  if (param_1 != 0) {
    nc_pitch_reset(param_1 + 8);
    return;
  }
  return;
}

