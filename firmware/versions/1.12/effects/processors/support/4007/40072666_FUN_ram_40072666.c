/* NanoCore 1.12: FUN_ram_40072666 at 0x40072666.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_54d9500ed1f0e991af82fa60c06a50a4b0a87b765eeb5cc17181aa28f9bbae7f
 * Source: analysis/rea-1.12-effects/results/03543-export-0x40072666.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40072666(ulonglong *param_1,int param_2,int param_3)

{
  if (param_1 != (ulonglong *)0x0) {
    memset(param_1,0,param_2 << 2);
    if (param_3 == 0x11) {
      if ((((param_2 != 0) && (*param_1 = (ulonglong)DAT_ram_4009f8ec, param_2 != 1)) &&
          (*(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009b140, param_2 != 2)) &&
         (((param_1[1] = (ulonglong)DAT_ram_4009f8f0, param_2 != 3 &&
           (*(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009f8f4, param_2 != 4)) &&
          ((*(undefined4 *)(param_1 + 2) = 0, param_2 != 5 &&
           ((*(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_4009f230, param_2 != 6 &&
            (param_1[3] = (ulonglong)DAT_ram_4009f8f8, param_2 != 7)))))))) {
        *(ulonglong *)((int)param_1 + 0x1c) = (ulonglong)DAT_ram_4009f8fc;
      }
    }
    else if ((((param_3 == 0xb) && (param_2 != 0)) &&
             (*param_1 = (ulonglong)DAT_ram_4009f084, param_2 != 1)) &&
            ((*(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009b18c, param_2 != 2 &&
             (param_1[1] = (ulonglong)DAT_ram_40099f90, param_2 != 3)))) {
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)(uint)DAT_ram_4009675c;
    }
    return;
  }
  return;
}

