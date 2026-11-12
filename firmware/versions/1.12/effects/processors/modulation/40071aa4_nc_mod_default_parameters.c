/* NanoCore 1.12: nc_mod_default_parameters at 0x40071aa4.
 * Role: Subtype-dependent defaults; subtype0 uses same classic chorus defaults.
 * REA: ev_209989c72dbcbe8a6aefe17d6cf2cf712bad97178fdb7e21be15c79bdb328ad7
 * Source: analysis/rea-1.12-effects/results/03532-export-0x40071aa4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_mod_default_parameters(ulonglong *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  if (param_3 < 5) {
    if (param_3 == 1) {
      *param_1 = (ulonglong)DAT_ram_4009f710;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f70c;
      if (param_2 == 2) {
        return;
      }
      param_1[1] = (ulonglong)DAT_ram_4009f0bc;
      return;
    }
    if (param_3 == 2) {
      *param_1 = (ulonglong)DAT_ram_4009f710;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f718;
      if (param_2 == 2) {
        return;
      }
      param_1[1] = (ulonglong)DAT_ram_4009a4f8;
      return;
    }
    if (param_3 != 3) {
      if (param_3 != 4) {
        *param_1 = (ulonglong)DAT_ram_4009f73c;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009672c;
        return;
      }
      *param_1 = (ulonglong)DAT_ram_4009f72c;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40099f34;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (param_2 < 4) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009675c._4_4_;
      return;
    }
    *param_1 = (ulonglong)DAT_ram_4009f728;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f080;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (3 < param_2) {
        *(undefined4 *)((int)param_1 + 0xc) = 0;
      }
    }
  }
  else {
    if (param_3 != 8) {
      if (param_3 == 9) {
        FUN_ram_40071e10(param_1,param_2);
        return;
      }
      if (param_3 != 10) {
        if (param_3 != 0xb) {
          if (param_3 == 0xc) {
            *param_1 = CONCAT44(DAT_ram_4009675c._4_4_,(uint)DAT_ram_4009675c);
            if (param_2 != 1) {
              *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009b18c;
              if (param_2 != 2) {
                param_1[1] = (ulonglong)DAT_ram_4009f230;
              }
              if (3 < param_2) {
                *(ulonglong *)((int)param_1 + 0xc) =
                     CONCAT44(DAT_ram_4009675c._4_4_,(uint)DAT_ram_4009675c);
              }
            }
            if (param_2 < 5) {
              return;
            }
            param_1[2] = (ulonglong)DAT_ram_4009b144;
            return;
          }
          if (param_3 != 0x11) {
            return;
          }
        }
        FUN_ram_40072666(param_1,param_2,param_3);
        return;
      }
      FUN_ram_40074de6(param_1,param_2);
      return;
    }
    *param_1 = (ulonglong)DAT_ram_4009f804;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)(uint)DAT_ram_4009675c;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_4009672c;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009672c;
      }
    }
  }
  if (4 < param_2) {
    param_1[2] = (ulonglong)DAT_ram_4009672c;
  }
  return;
}

