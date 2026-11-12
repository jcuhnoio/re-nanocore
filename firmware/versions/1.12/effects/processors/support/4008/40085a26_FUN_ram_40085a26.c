/* NanoCore 1.12: FUN_ram_40085a26 at 0x40085a26.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_4cceae809c3a8bd8722043a25029debb0adb3a1348388f532fedf757ffb65c55
 * Source: analysis/rea-1.12-effects/results/03621-export-0x40085a26.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40085a26(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
      *param_1 = 0;
    }
    iVar1 = param_1[4];
    param_1[1] = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    }
    iVar1 = param_1[6];
    param_1[4] = 0;
    param_1[5] = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    }
    iVar1 = param_1[8];
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
      param_1[8] = 0;
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[9] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    return;
  }
  return;
}

