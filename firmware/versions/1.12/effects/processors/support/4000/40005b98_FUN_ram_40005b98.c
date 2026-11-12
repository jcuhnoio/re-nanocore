/* NanoCore 1.12: FUN_ram_40005b98 at 0x40005b98.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_962c1d9ebcd549645983726a9e36b06c7f8c9b7101f04c8862512ec60ba0b32a
 * Source: analysis/rea-1.12-effects/results/01159-export-0x40005b98.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 * thunk_FUN_ram_40005754(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = param_2 + 3U & 0xfffffffc;
  if (uVar8 < 0xc) {
    uVar8 = 0xc;
  }
  if (uVar8 < *(uint *)(param_1 + 0x24)) {
    if ((*(int *)(param_1 + 0x78) == 0) &&
       (iVar2 = FUN_ram_4000487e(param_1 + 0x50,0xffffffff), iVar2 != 0)) {
      FUN_ram_40004f4a();
    }
    else {
      uVar5 = 0;
      puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x30))[4];
      while (*(undefined4 **)(param_1 + 0x30) != puVar1) {
        if (uVar8 <= uVar5) goto LAB_ram_400057a0;
        uVar5 = (puVar1[2] - (int)puVar1) - 0x1c;
        if (uVar5 < uVar8) {
          puVar1 = (undefined4 *)puVar1[4];
        }
      }
      if (uVar8 <= uVar5) {
LAB_ram_400057a0:
        if (uVar5 < uVar8 + 0x28) {
          iVar2 = *(int *)(param_1 + 0x24);
          *(uint *)(param_1 + 0x24) = iVar2 - uVar5;
          uVar5 = uVar5 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar5) {
            *(uint *)(param_1 + 0x28) = uVar5;
          }
          iVar2 = puVar1[4];
          *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
          *(int *)(puVar1[5] + 0x10) = iVar2;
          puVar1[4] = 0;
          puVar1[5] = 0;
        }
        else {
          iVar9 = (int)puVar1 + uVar8 + 0x1c;
          *(undefined4 *)((int)puVar1 + uVar8 + 0x1c) = 0x1ea01ea0;
          *(int *)(iVar9 + 4) = param_1;
          FUN_ram_40004f92(iVar9 + 0x18,0x20,4);
          uVar6 = puVar1[2];
          *(undefined4 **)(iVar9 + 0xc) = puVar1;
          uVar4 = puVar1[5];
          *(undefined4 *)(iVar9 + 8) = uVar6;
          iVar2 = *(int *)(param_1 + 0x24);
          *(int *)(puVar1[2] + 0xc) = iVar9;
          iVar7 = puVar1[4];
          puVar1[2] = iVar9;
          *(undefined4 *)(iVar7 + 0x14) = uVar4;
          *(int *)(puVar1[5] + 0x10) = iVar7;
          iVar7 = *(int *)(param_1 + 0x30);
          puVar1[4] = 0;
          puVar1[5] = 0;
          uVar4 = *(undefined4 *)(iVar7 + 0x10);
          *(int *)(iVar9 + 0x14) = iVar7;
          *(undefined4 *)(iVar9 + 0x10) = uVar4;
          *(int *)(*(int *)(iVar7 + 0x10) + 0x14) = iVar9;
          *(int *)(iVar7 + 0x10) = iVar9;
          iVar2 = iVar2 + -0x1c;
          *(uint *)(param_1 + 0x24) = iVar2 - uVar8;
          uVar8 = uVar8 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar8) {
            *(uint *)(param_1 + 0x28) = uVar8;
          }
        }
        *puVar1 = 0x1ea01ea1;
        iVar2 = FUN_ram_40006382();
        if (iVar2 == 0) {
          puVar3 = &DAT_ram_40096194;
        }
        else {
          puVar3 = (undefined *)FUN_ram_40006382();
        }
        memcpy(puVar1 + 6,puVar3,4);
        if (*(int *)(param_1 + 0x78) == 0) {
          FUN_ram_40004920(param_1 + 0x50);
        }
        return puVar1 + 7;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        FUN_ram_40004920(param_1 + 0x50);
      }
    }
  }
  return (undefined4 *)0x0;
}

