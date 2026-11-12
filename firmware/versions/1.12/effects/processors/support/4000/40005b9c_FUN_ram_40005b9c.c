/* NanoCore 1.12: FUN_ram_40005b9c at 0x40005b9c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_3ee8df780ab453f4aa1a2ef083a94c4438d122c3bf026d024ad7bb384640e25e
 * Source: analysis/rea-1.12-effects/results/01160-export-0x40005b9c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void thunk_FUN_ram_400058be(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_1 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + -0x18);
  iVar2 = param_1 + -0x1c;
  if ((*(int *)(iVar3 + 0x78) == 0) &&
     (iVar4 = FUN_ram_4000487e(iVar3 + 0x50,0xffffffff), iVar4 != 0)) {
    FUN_ram_40004f4a();
    return;
  }
  *(undefined4 *)(param_1 + -0x1c) = 0x1ea01ea0;
  uVar5 = *(uint *)(param_1 + -0x14);
  iVar4 = (*(int *)(iVar3 + 0x24) + uVar5) - iVar2;
  *(int *)(iVar3 + 0x24) = iVar4 + -0x1c;
  puVar6 = *(uint **)(param_1 + -0x10);
  bVar1 = (*puVar6 & 1) == 0;
  if (bVar1) {
    *(int *)(iVar3 + 0x24) = iVar4;
    puVar6[2] = uVar5;
    *(uint **)(*(int *)(param_1 + -0x14) + 0xc) = puVar6;
    iVar2 = *(int *)(param_1 + -0x10);
  }
  puVar6 = *(uint **)(iVar2 + 8);
  if ((*puVar6 & 1) == 0) {
    uVar5 = puVar6[5];
    *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 0x1c;
    uVar7 = puVar6[2];
    *(int *)(uVar7 + 0xc) = iVar2;
    *(uint *)(iVar2 + 8) = uVar7;
    uVar7 = puVar6[4];
    *(uint *)(uVar7 + 0x14) = uVar5;
    *(uint *)(puVar6[5] + 0x10) = uVar7;
  }
  if (!bVar1) {
    for (iVar4 = *(int *)(*(int *)(iVar3 + 0x30) + 0x10);
        (*(int *)(iVar3 + 0x30) != iVar4 &&
        ((*(int *)(iVar4 + 8) - iVar4) - 0x1cU < (*(int *)(iVar2 + 8) - iVar2) - 0x1cU));
        iVar4 = *(int *)(iVar4 + 0x10)) {
    }
    uVar8 = *(undefined4 *)(iVar4 + 0x14);
    *(int *)(iVar2 + 0x10) = iVar4;
    *(undefined4 *)(iVar2 + 0x14) = uVar8;
    *(int *)(*(int *)(iVar4 + 0x14) + 0x10) = iVar2;
    *(int *)(iVar4 + 0x14) = iVar2;
  }
  FUN_ram_40004f92(iVar2 + 0x18,0x20,4);
  if (*(int *)(iVar3 + 0x78) == 0) {
    FUN_ram_40004920(iVar3 + 0x50);
    return;
  }
  return;
}

