/* NanoCore 1.12: nc_reverb_spring_biquad_process at 0x400a1790.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_bb8b9185668d0094411034d47f2c66720241b0da271cb35b0f45b0a83a9c930f
 * Source: analysis/rea-1.12-effects/results/03715-export-0x400a1790.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_biquad_process(float *param_1,undefined8 *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar11 = *(ulonglong *)(param_1 + 5);
  uVar8 = *(ulonglong *)(param_1 + 6);
  puVar6 = (undefined8 *)((int)param_2 + param_4 * 4);
  do {
    uVar10 = *param_2;
    param_2 = (undefined8 *)((int)param_2 + 4);
    fVar9 = (float)uVar10;
    fVar5 = fVar1 * fVar9 + (float)uVar11;
    *param_3 = fVar5;
    uVar11 = (ulonglong)(uint)((fVar2 * fVar9 - fVar4 * fVar5) + (float)uVar8);
    uVar8 = (ulonglong)(uint)(fVar3 * fVar9 - (float)uVar7 * fVar5);
    param_3 = param_3 + 1;
  } while (puVar6 != param_2);
  *(ulonglong *)(param_1 + 5) = uVar11;
  *(ulonglong *)(param_1 + 6) = uVar8;
  return;
}

