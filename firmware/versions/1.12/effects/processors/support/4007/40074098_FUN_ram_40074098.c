/* NanoCore 1.12: FUN_ram_40074098 at 0x40074098.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_1801a674869a7402c95251c0b84391d5d897bba970bab14be20997ee1052259f
 * Source: analysis/rea-1.12-effects/results/03554-export-0x40074098.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40074098(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)(uint)DAT_ram_4009675c;
    uVar1 = _DAT_ram_4009f080;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = _DAT_ram_4009f080;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = _DAT_ram_4009f080;
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)DAT_ram_4009675c._4_4_;
    }
    return;
  }
  return;
}

