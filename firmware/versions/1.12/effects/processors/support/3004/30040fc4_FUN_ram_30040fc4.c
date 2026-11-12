/* NanoCore 1.12: FUN_ram_30040fc4 at 0x30040fc4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_c65be6ac51ff84142242a654bb636e3a4e2d6e983d3b4d7588a0ec7f6267e6bf
 * Source: analysis/rea-1.12-effects/results/01005-export-0x30040fc4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_30040fc4(ushort *param_1,undefined8 *param_2,float *param_3)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  
  fVar3 = (float)DAT_ram_4009675c;
  fVar10 = (float)*(undefined8 *)((int)param_2 + 4);
  fVar10 = fVar10 + fVar10;
  uVar1 = *param_1;
  fVar7 = (float)*param_2 * (float)PTR_entry_ram_40096740;
  fVar2 = (float)*param_2 * (float)PTR_entry_ram_40096740;
  puVar6 = *(undefined8 **)(param_1 + 10);
  (param_3 + (uint)uVar1 * 2)[1] = 0.0;
  iVar4 = uVar1 - 1;
  puVar5 = param_2 + iVar4;
  *(ulonglong *)(param_3 + (uint)uVar1 * 2) = (ulonglong)(uint)((fVar7 - fVar10) * fVar3);
  *(ulonglong *)param_3 = (ulonglong)(uint)((fVar2 + fVar10) * fVar3);
  param_3[1] = 0.0;
  do {
    uVar12 = *puVar5;
    fVar9 = (float)param_2[1];
    fVar2 = (float)uVar12 - fVar9;
    fVar8 = (float)*(undefined8 *)((int)puVar5 + 4);
    fVar7 = (float)*(undefined8 *)((int)param_2 + 0xc);
    fVar10 = fVar8 + fVar7;
    fVar13 = (float)puVar6[1];
    fVar11 = (float)*(undefined8 *)((int)puVar6 + 0xc);
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
    param_3[2] = (fVar11 * fVar10 + fVar13 * fVar2 + (float)uVar12 + fVar9) * fVar3;
    param_3[3] = (-(fVar13 * fVar10) + fVar11 * fVar2 + (fVar7 - fVar8)) * fVar3;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
    param_3 = param_3 + 2;
  } while (iVar4 != 0);
  return;
}

