/* NanoCore 1.12: nc_reverb_spring_helper_400a17d8 at 0x400a17d8.
 * Role: Direct callee closure inside copied Spring blob; semantic role not yet established
 * REA: ev_96b66b57854c0e12da945376700bad98017f0496488200b5760599172297d59a
 * Source: analysis/rea-1.12-effects/results/03716-export-0x400a17d8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_helper_400a17d8(float *param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = param_1[4];
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[4];
  uVar19 = *(ulonglong *)(param_1 + 5);
  fVar16 = param_1[6];
  uVar20 = *(ulonglong *)(param_2 + 5);
  fVar15 = param_2[6];
  if (param_5 != 0) {
    pfVar13 = param_3;
    do {
      pfVar14 = pfVar13 + 1;
      fVar17 = (float)*(undefined8 *)pfVar13;
      fVar11 = fVar1 * fVar17 + (float)uVar19;
      fVar18 = (float)*(undefined8 *)param_4;
      fVar12 = fVar6 * fVar18 + (float)uVar20;
      *pfVar13 = fVar11;
      *param_4 = fVar12;
      uVar19 = (ulonglong)(uint)((fVar2 * fVar17 - fVar4 * fVar11) + fVar16);
      uVar20 = (ulonglong)(uint)((fVar7 * fVar18 - fVar9 * fVar12) + fVar15);
      fVar16 = fVar3 * fVar17 - fVar5 * fVar11;
      fVar15 = fVar8 * fVar18 - fVar10 * fVar12;
      pfVar13 = pfVar14;
      param_4 = param_4 + 1;
    } while (param_3 + param_5 != pfVar14);
  }
  *(ulonglong *)(param_1 + 5) = uVar19;
  param_1[6] = fVar16;
  *(ulonglong *)(param_2 + 5) = uVar20;
  param_2[6] = fVar15;
  return;
}

