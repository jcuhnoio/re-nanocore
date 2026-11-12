/* NanoCore 1.12: nc_amp_drive_state_init at 0x4007404e.
 * Role: Initializes the shared model wrapper, filter and cached controls; floating argument prototype needs native correction.
 * REA: ev_50bc6e85972982477cab591f1f2db72fc4368c6da0a19fdd370c89fe48b25863
 * Source: analysis/rea-1.12/results/03555-export-0x4007404e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_amp_drive_state_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    FUN_ram_4005bfd2(param_1 + 2);
    uVar1 = DAT_ram_4009672c;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = uVar1;
    param_1[0x21] = uVar1;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    return;
  }
  return;
}

