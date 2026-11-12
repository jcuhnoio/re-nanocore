/* NanoCore 1.12: FUN_ram_300410e6 at 0x300410e6.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_c2632a83910c8cbcf7265d82387512ed8356d5d3d8183339d6c41b38c3b73237
 * Source: analysis/rea-1.12-effects/results/01007-export-0x300410e6.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_300410e6(ushort *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *param_1 = param_1[8] >> 1;
  if (param_4 != 0) {
    FUN_ram_30041060();
    FUN_ram_300408dc(param_1,param_3,param_4,1);
    return;
  }
  FUN_ram_300408dc(param_1,param_2,0,1);
  FUN_ram_30040fc4(param_1,param_2,param_3);
  return;
}

