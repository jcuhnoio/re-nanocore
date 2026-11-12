/* NanoCore 1.12: FUN_ram_40074de6 at 0x40074de6.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_b737c5487dd92d9a357ce70669fec626aea44614f2eb3bdc2ae3f3357db1503f
 * Source: analysis/rea-1.12-effects/results/03568-export-0x40074de6.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40074de6(ulonglong *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    *param_1 = (ulonglong)DAT_ram_400a0988;
    if (param_2 == 1) {
      uVar1 = 1;
    }
    else {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a644;
      if (param_2 == 2) {
        uVar1 = 2;
      }
      else {
        param_1[1] = (ulonglong)DAT_ram_4009b18c;
        if (param_2 == 3) {
          uVar1 = 3;
        }
        else {
          *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009f0bc;
          if (param_2 - 1 < 4) {
            uVar1 = 4;
          }
          else {
            uVar1 = 5;
            param_1[2] = (ulonglong)DAT_ram_4009672c;
          }
        }
      }
    }
    if (uVar1 < param_2) {
      memset((int)param_1 + uVar1 * 4,0,(param_2 - uVar1) * 4);
      return;
    }
  }
  return;
}

