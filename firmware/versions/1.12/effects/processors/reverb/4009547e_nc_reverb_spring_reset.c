/* NanoCore 1.12: nc_reverb_spring_reset at 0x4009547e.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_87ac2a0974048aee66fa1594657dc486ed06143b1c629053711c968548a5226c
 * Source: analysis/rea-1.12-effects/results/03705-export-0x4009547e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x400954cc) */
/* WARNING: Removing unreachable block (ram,0x400954d2) */

void nc_reverb_spring_reset(undefined8 *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)((int)param_1 + 4);
    uVar2 = param_1[1];
    FUN_ram_4009531a(*param_1);
    nc_reverb_spring_set_decay(uVar1,param_1);
    nc_reverb_spring_set_crossover(uVar2 & 0xffffffff,param_1);
    return;
  }
  return;
}

