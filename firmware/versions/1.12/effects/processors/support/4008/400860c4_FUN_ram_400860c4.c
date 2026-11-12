/* NanoCore 1.12: FUN_ram_400860c4 at 0x400860c4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_0e44479f05643af58b0c34c8920a57dece0167908ceee8e047481baa9cf5f0cc
 * Source: analysis/rea-1.12-effects/results/03624-export-0x400860c4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_400860c4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    uVar3 = param_1[1];
    if (uVar3 != 0) {
      iVar4 = 0;
      uVar5 = 0;
      do {
        puVar1 = (undefined4 *)(iVar2 + iVar4);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)(iVar2 + iVar4);
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            *puVar1 = 0;
          }
          iVar2 = puVar1[2];
          puVar1[1] = 0;
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[2] = 0;
          }
          iVar2 = puVar1[5];
          puVar1[3] = 0;
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[5] = 0;
          }
          iVar2 = puVar1[6];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[6] = 0;
          }
          iVar2 = puVar1[7];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[7] = 0;
          }
          iVar2 = puVar1[8];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[8] = 0;
          }
          iVar2 = puVar1[0xc];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[0xc] = 0;
          }
          iVar2 = puVar1[0xd];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[0xd] = 0;
          }
          iVar2 = puVar1[0xe];
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[0xe] = 0;
          }
          iVar2 = puVar1[0xf];
          puVar1[4] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          if (iVar2 != 0) {
            (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
            puVar1[0xf] = 0;
          }
          uVar3 = param_1[1];
          iVar2 = *param_1;
          puVar1[0x16] = 0;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x5c;
      } while (uVar5 < uVar3);
      if (iVar2 == 0) goto LAB_ram_400861f4;
    }
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    *param_1 = 0;
  }
LAB_ram_400861f4:
  iVar2 = param_1[4];
  param_1[1] = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
  }
  iVar2 = param_1[6];
  param_1[4] = 0;
  param_1[5] = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
  }
  iVar2 = param_1[8];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[8] = 0;
  }
  iVar2 = param_1[10];
  param_1[9] = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[10] = 0;
  }
  iVar2 = param_1[0xb];
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[0xb] = 0;
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}

