/* NanoCore 1.12: FUN_ram_40085ab2 at 0x40085ab2.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_f842e57c238723c69abe4b5d8f05c371d2d3f9ddc6a710262971436eb12acbb4
 * Source: analysis/rea-1.12-effects/results/03622-export-0x40085ab2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_40085ab2(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_stack_00000000;
  
  iVar4 = param_1[2];
  *param_2 = *param_1;
  if (iVar4 == 0) {
    param_2[1] = 0;
LAB_ram_40085ba8:
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined8 *)(param_2 + 5) = 0;
    return 0;
  }
  pbVar3 = (byte *)param_1[1];
  bVar1 = *pbVar3;
  param_1[2] = iVar4 - 1U;
  param_1[1] = pbVar3 + 1;
  param_2[1] = (uint)bVar1;
  if (iVar4 - 1U < 4) goto LAB_ram_40085ba8;
  uVar2 = *(undefined4 *)(pbVar3 + 1);
  param_1[1] = pbVar3 + 5;
  param_1[2] = iVar4 - 5U;
  *(ulonglong *)(param_2 + 2) = CONCAT44(in_stack_00000000,uVar2);
  if (iVar4 - 5U < 4) {
    param_2[3] = 0;
  }
  else {
    uVar2 = *(undefined4 *)(pbVar3 + 5);
    param_1[1] = pbVar3 + 9;
    param_1[2] = iVar4 - 9U;
    *(ulonglong *)(param_2 + 3) = CONCAT44(in_stack_00000000,uVar2);
    if (3 < iVar4 - 9U) {
      uVar2 = *(undefined4 *)(pbVar3 + 9);
      param_1[1] = pbVar3 + 0xd;
      param_1[2] = iVar4 - 0xdU;
      *(ulonglong *)(param_2 + 4) = CONCAT44(in_stack_00000000,uVar2);
      if (3 < iVar4 - 0xdU) {
        uVar2 = *(undefined4 *)(pbVar3 + 0xd);
        param_1[1] = pbVar3 + 0x11;
        param_1[2] = iVar4 + -0x11;
        *(ulonglong *)(param_2 + 5) = CONCAT44(in_stack_00000000,uVar2);
        return 0;
      }
      goto LAB_ram_40085bcc;
    }
  }
  param_2[4] = 0;
LAB_ram_40085bcc:
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined8 *)(param_2 + 5) = 0;
  return 0;
}

