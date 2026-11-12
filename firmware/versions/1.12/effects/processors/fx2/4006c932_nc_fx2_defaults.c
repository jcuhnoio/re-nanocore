/* NanoCore 1.12: nc_fx2_defaults at 0x4006c932.
 * Role: FX2 default control setup
 * REA: ev_1688b3a25a4d8d3d721229dc700b2e5ff4c8a417acda6e1682c84e448c839384
 * Source: analysis/rea-1.12-effects/results/03522-export-0x4006c932.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_fx2_defaults(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  if (0xb < param_3) {
    nc_drive_parameter_defaults();
    return;
  }
  if (param_3 != 8) {
    if (param_3 == 9) {
      memset(param_1,0,param_2 << 2);
      *param_1 = (ulonglong)DAT_ram_4009f59c;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40099f6c;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_4009f598;
      }
      if (param_2 < 4) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009675c._4_4_;
      return;
    }
    if (param_3 == 10) {
      memset(param_1,0,param_2 << 2);
      uVar1 = (ulonglong)(uint)DAT_ram_4009675c;
      *param_1 = uVar1;
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 != 2) {
          param_1[1] = (ulonglong)DAT_ram_4009f5a8;
        }
        if (3 < param_2) {
          *(undefined4 *)((int)param_1 + 0xc) = 0;
        }
      }
      if (param_2 < 5) {
        return;
      }
      param_1[2] = (ulonglong)DAT_ram_4009675c._4_4_;
      return;
    }
    if (param_3 == 0xb) {
      FUN_ram_40071e10();
      return;
    }
    if (2 < (param_3 - 5 & 0xff)) {
      nc_drive_parameter_defaults();
      return;
    }
  }
  memset(param_1,0,param_2 << 2);
  *param_1 = CONCAT44(DAT_ram_4009675c._4_4_,(uint)DAT_ram_4009675c);
  if ((param_2 != 1) &&
     (*(ulonglong *)((int)param_1 + 4) = CONCAT44(DAT_ram_4009675c._4_4_,(uint)DAT_ram_4009675c),
     param_2 != 2)) {
    param_1[1] = (ulonglong)DAT_ram_4009672c;
  }
  return;
}

