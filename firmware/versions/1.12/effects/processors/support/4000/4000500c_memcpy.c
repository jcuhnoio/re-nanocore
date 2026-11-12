/* NanoCore 1.12: memcpy at 0x4000500c.
 * Role: Unique exact native body and range-shape match to reviewed 1.10 0x400050d6; data/callee runtime equivalence is not asserted.
 * REA: ev_7a10f41f37cbc0cb3d1d3eac95a7524f48b2d657b665056e493a9349d08a1bc8
 * Source: analysis/rea-1.12-effects/results/01134-export-0x4000500c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((0xf < param_3) &&
     (puVar1 = param_2, puVar4 = param_1, (((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      puVar4[2] = puVar1[2];
      puVar5 = puVar4 + 4;
      puVar4[3] = puVar1[3];
      puVar1 = puVar1 + 4;
      puVar4 = puVar5;
    } while (0xf < (int)param_1 + (param_3 - (int)puVar5));
    iVar6 = (param_3 - 0x10 & 0xfffffff0) + 0x10;
    uVar2 = param_3 & 0xf;
    for (iVar3 = 0; 3 < uVar2 - iVar3; iVar3 = iVar3 + 4) {
      *(undefined4 *)((int)param_1 + iVar3 + iVar6) = *(undefined4 *)((int)param_2 + iVar3 + iVar6);
    }
    param_1 = (undefined4 *)((int)param_1 + (param_3 & 0xc) + iVar6);
    param_2 = (undefined4 *)((int)param_2 + (param_3 & 0xc) + iVar6);
    param_3 = uVar2 + (uVar2 >> 2) * -4;
  }
  for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)param_1 + uVar2) = *(undefined1 *)((int)param_2 + uVar2);
  }
  return;
}

