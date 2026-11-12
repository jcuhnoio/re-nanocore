/* NanoCore 1.12: FUN_ram_40002fdc at 0x40002fdc.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_f2789ec23e055e294425be8aaa0d67166a558d0f043af9b60a258ca9e7e840a1
 * Source: analysis/rea-1.12-effects/results/01067-export-0x40002fdc.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

int FUN_ram_40002fdc(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (3 < param_3) {
    if ((((uint)param_1 | (uint)param_2) & 3) != 0) goto LAB_ram_40003004;
    do {
      if (*(int *)param_1 != *(int *)param_2) goto LAB_ram_40003004;
      param_3 = param_3 - 4;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    } while (3 < param_3);
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_ram_40003004:
  uVar1 = (uint)*param_2;
  uVar2 = (uint)*param_1;
  uVar3 = 1;
  if (uVar2 == uVar1) {
    do {
      if (uVar3 == param_3) {
        return 0;
      }
      uVar2 = (uint)param_1[uVar3];
      uVar1 = (uint)param_2[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar2 == uVar1);
  }
  return uVar2 - uVar1;
}

