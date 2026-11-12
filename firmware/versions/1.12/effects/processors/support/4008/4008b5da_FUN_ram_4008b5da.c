/* NanoCore 1.12: FUN_ram_4008b5da at 0x4008b5da.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_41d12c79564403dca6b04543ed48c5069c6d2424e8a9f2cedc2dee172c6016d2
 * Source: analysis/rea-1.12-effects/results/03637-export-0x4008b5da.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_4008b5da(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = param_2[1];
    uVar7 = param_2[2];
    uVar6 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    iVar5 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *param_2;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
    *(undefined4 *)(param_1 + 0x20) = uVar6;
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    if (iVar5 != 0) {
      *(undefined1 *)(iVar5 + 0x44) = 0;
      *(undefined1 *)(iVar5 + 0x80) = 0;
      *(undefined1 *)(iVar5 + 0x27c) = 0;
    }
  }
  return;
}

