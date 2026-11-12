/* NanoCore 1.12: expression_subtype_default_parameters at 0x40068cda.
 * Role: Subtype-specific default normalized controls.
 * REA: ev_4191fe90e0cfc89e375ede76ca5b499388d9eb50eeb8807d9a6bbbd321fda9ad
 * Source: analysis/rea-1.12/results/03509-export-0x40068cda.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void expression_subtype_default_parameters(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  if (param_3 < 4) {
    if (param_3 == 2) {
      *param_1 = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    }
    else {
      if (param_3 == 3) {
        uVar1 = (ulonglong)DAT_ram_4009675c;
        *param_1 = uVar1;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 == 2) {
          return;
        }
        param_1[1] = (ulonglong)DAT_ram_4009672c;
        return;
      }
      if (param_3 != 1) goto LAB_ram_40068d10;
      *param_1 = (ulonglong)DAT_ram_4009675c;
    }
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    }
  }
  else {
LAB_ram_40068d10:
    uVar1 = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    *param_1 = uVar1;
    if (param_2 != 1) {
      *(undefined4 *)((int)param_1 + 4) = 0;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
      }
    }
  }
  return;
}

