/* NanoCore 1.12: FUN_ram_30041060 at 0x30041060.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_5e4c88b069256ed6ba7559992c1c2073174744ade76439923ad1683922234499
 * Source: analysis/rea-1.12-effects/results/01006-export-0x30041060.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_30041060(ushort *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  fVar3 = (float)DAT_ram_4009675c;
  puVar6 = *(undefined8 **)(param_1 + 10);
  iVar4 = *param_1 - 1;
  puVar5 = param_2 + iVar4;
  fVar1 = ((float)*param_2 - (float)param_2[*param_1]) * (float)DAT_ram_4009675c;
  *(ulonglong *)param_3 =
       (ulonglong)(uint)(((float)*param_2 + (float)param_2[*param_1]) * (float)DAT_ram_4009675c);
  *(ulonglong *)(param_3 + 1) = (ulonglong)(uint)fVar1;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar11 = *puVar5;
    fVar9 = (float)param_2[1];
    fVar2 = fVar9 - (float)uVar11;
    fVar8 = (float)*(undefined8 *)((int)puVar5 + 4);
    fVar7 = (float)*(undefined8 *)((int)param_2 + 0xc);
    fVar1 = fVar8 + fVar7;
    fVar12 = (float)puVar6[1];
    fVar10 = (float)*(undefined8 *)((int)puVar6 + 0xc);
    puVar5 = puVar5 + -1;
    param_3[2] = (-(fVar10 * fVar1) + -(fVar12 * fVar2) + (float)uVar11 + fVar9) * fVar3;
    param_3[3] = (-(fVar12 * fVar1) + fVar10 * fVar2 + (fVar7 - fVar8)) * fVar3;
    puVar6 = puVar6 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 2;
  }
  return;
}

