/* NanoCore 1.12: FUN_ram_40071e10 at 0x40071e10.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_6409fea923c6e7d7e055c02c54b09b75835aea19e419535d501738ad0412c728
 * Source: analysis/rea-1.12-effects/results/03538-export-0x40071e10.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40071e10(ulonglong *param_1,uint param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009f8b4;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)(uint)DAT_ram_4009675c;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009f230;
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)DAT_ram_4009672c;
    }
    return;
  }
  return;
}

