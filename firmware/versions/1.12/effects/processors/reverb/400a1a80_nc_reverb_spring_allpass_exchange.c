/* NanoCore 1.12: nc_reverb_spring_allpass_exchange at 0x400a1a80.
 * Role: Delay/input exchange: v=x+g*old; delay=v; output=old-g*v
 * REA: ev_43bfb7021729f5b422293b62cbb66214658b54e60fba7834e46117a2847dc666
 * Source: analysis/rea-1.12-effects/results/03719-export-0x400a1a80.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_allpass_exchange(float param_1,float *param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = param_4;
  pfVar5 = param_3;
  pfVar7 = param_2;
  if (3 < param_4) {
    do {
      uVar9 = *(undefined8 *)pfVar7;
      uVar10 = *(undefined8 *)(pfVar7 + 1);
      uVar11 = *(undefined8 *)(pfVar7 + 2);
      uVar12 = *(undefined8 *)(pfVar7 + 3);
      fVar1 = param_1 * (float)uVar9 + *pfVar5;
      fVar2 = param_1 * (float)uVar10 + pfVar5[1];
      fVar3 = param_1 * (float)uVar11 + pfVar5[2];
      fVar4 = param_1 * (float)uVar12 + (float)*(undefined8 *)(pfVar5 + 3);
      uVar6 = uVar6 - 4;
      *pfVar7 = fVar1;
      pfVar7[1] = fVar2;
      pfVar7[2] = fVar3;
      *(ulonglong *)(pfVar7 + 3) = (ulonglong)(uint)fVar4;
      *(ulonglong *)pfVar5 = (ulonglong)(uint)(-(param_1 * fVar1) + (float)uVar9);
      *(ulonglong *)(pfVar5 + 1) = (ulonglong)(uint)(-(param_1 * fVar2) + (float)uVar10);
      *(ulonglong *)(pfVar5 + 2) = (ulonglong)(uint)(-(param_1 * fVar3) + (float)uVar11);
      *(ulonglong *)(pfVar5 + 3) = (ulonglong)(uint)(-(param_1 * fVar4) + (float)uVar12);
      pfVar5 = pfVar5 + 4;
      pfVar7 = pfVar7 + 4;
    } while (3 < uVar6);
    iVar8 = (param_4 - 4 >> 2) + 1;
    param_2 = param_2 + iVar8 * 4;
    param_3 = param_3 + iVar8 * 4;
    param_4 = param_4 & 3;
  }
  if (param_4 != 0) {
    pfVar5 = param_2;
    do {
      uVar9 = *(undefined8 *)pfVar5;
      pfVar7 = pfVar5 + 1;
      fVar1 = (float)uVar9 * param_1 + (float)*(undefined8 *)param_3;
      *pfVar5 = fVar1;
      *param_3 = -(param_1 * fVar1) + (float)uVar9;
      pfVar5 = pfVar7;
      param_3 = param_3 + 1;
    } while (pfVar7 != param_2 + param_4);
  }
  return;
}

