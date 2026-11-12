/* NanoCore 1.12: dynamics_subtype_default_parameters at 0x40069600.
 * Role: Four-way initialization of gate/adaptive/combined/compressor normalized controls.
 * REA: ev_cf50368ccd112992e47a244ff3d9ab3b995007a39c0594dce176f19494c8ede3
 * Source: analysis/rea-1.12/results/03516-export-0x40069600.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void dynamics_subtype_default_parameters(ulonglong *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  if (param_3 < 4) {
    memset(param_1,0,param_2 << 2);
    if (param_3 == 1) {
      *param_1 = (ulonglong)DAT_ram_4009675c;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f540;
      return;
    }
    if (param_3 == 3) {
      *param_1 = (ulonglong)DAT_ram_4009f544;
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f548;
        if (param_2 != 2) {
          *(undefined4 *)(param_1 + 1) = 0;
        }
        if (3 < param_2) {
          *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40099f6c;
        }
      }
      if (4 < param_2) {
        param_1[2] = (ulonglong)DAT_ram_40099f88;
      }
      if (param_2 < 6) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_4009675c;
      return;
    }
    *param_1 = (ulonglong)DAT_ram_40099f94;
    if (param_3 != 0) {
      if (param_3 != 2) {
        return;
      }
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f544;
        if (param_2 != 2) {
          param_1[1] = (ulonglong)DAT_ram_4009f548;
        }
        if (3 < param_2) {
          *(undefined4 *)((int)param_1 + 0xc) = 0;
        }
      }
      if (4 < param_2) {
        param_1[2] = (ulonglong)DAT_ram_40099f6c;
      }
      if (5 < param_2) {
        *(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_40099f88;
      }
      if (param_2 < 7) {
        return;
      }
      param_1[3] = (ulonglong)DAT_ram_4009675c;
      return;
    }
  }
  else {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40099f94;
  }
  if (param_2 != 1) {
    *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a584;
  }
  return;
}

