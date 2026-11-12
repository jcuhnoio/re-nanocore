/* NanoCore 1.12: nc_motion_wah_init at 0x40071d38.
 * Role: Initializes shared MotionWah state
 * REA: ev_7b0bff624ec3629dae0ac736b3caa96337ec65fc814cd948813c859a589d9180
 * Source: analysis/rea-1.12-effects/results/03536-export-0x40071d38.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_motion_wah_init(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    uVar1 = (ulonglong)DAT_ram_4009f230;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined1 *)(param_1 + 0x17) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  return;
}

