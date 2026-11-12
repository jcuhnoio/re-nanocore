/* NanoCore 1.12: nc_amp_drive_invalidate_parameter_cache at 0x40008376.
 * Role: Invalidates cached controls at wrapper +0x6c through +0x80.
 * REA: ev_7c7cae260e5fbf296b7337de90214fff6bc66a32894c713aa02629616139f207
 * Source: analysis/rea-1.12/results/01288-export-0x40008376.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_amp_drive_invalidate_parameter_cache(int param_1)

{
  ulonglong uVar1;
  
  FUN_ram_400002f4();
  uVar1 = (ulonglong)DAT_ram_40096754;
  *(ulonglong *)(param_1 + 0x6c) = uVar1;
  *(ulonglong *)(param_1 + 0x70) = uVar1;
  *(ulonglong *)(param_1 + 0x74) = uVar1;
  *(ulonglong *)(param_1 + 0x78) = uVar1;
  *(ulonglong *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = DAT_ram_40096758;
  FUN_ram_400002fa();
  return;
}

