/* NanoCore 1.12: nc_fx2_motion_wah_init at 0x4006c8d8.
 * Role: Initializes MotionWah embedded state
 * REA: ev_9b199205dabe516586d55f75b96c90736602a3eecbc6486cfe47928650907153
 * Source: analysis/rea-1.12-effects/results/03519-export-0x4006c8d8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_fx2_motion_wah_init(int param_1)

{
  if (param_1 != 0) {
    nc_motion_wah_init(param_1 + 0xe24);
    return;
  }
  return;
}

