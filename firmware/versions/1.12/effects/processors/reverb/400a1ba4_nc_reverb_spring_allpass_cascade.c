/* NanoCore 1.12: nc_reverb_spring_allpass_cascade at 0x400a1ba4.
 * Role: Repeated all-pass recurrence over staged state
 * REA: ev_8cbbe13633019ab798c70dce8af1cfa38076bd1c841e3ed97a4779615884ede7
 * Source: analysis/rea-1.12-effects/results/03721-export-0x400a1ba4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_allpass_cascade(float param_1,float *param_2,ulonglong *param_3,uint param_4,float *param_5)

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
  uint uVar13;
  float *pfVar14;
  ulonglong *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  fVar31 = *param_5;
  uVar17 = *(ulonglong *)(param_5 + 1);
  fVar29 = param_5[2];
  fVar30 = param_5[3];
  fVar33 = param_5[4];
  fVar28 = param_5[5];
  fVar24 = param_5[6];
  fVar32 = param_5[7];
  fVar27 = param_5[8];
  fVar25 = param_5[9];
  uVar18 = *(ulonglong *)(param_5 + 10);
  fVar26 = param_5[0xb];
  uVar23 = *(ulonglong *)(param_5 + 0xc);
  uVar22 = *(ulonglong *)(param_5 + 0xd);
  uVar21 = *(ulonglong *)(param_5 + 0xe);
  if (param_4 < 3) {
    uVar16 = 0;
  }
  else {
    pfVar14 = param_2;
    puVar15 = param_3;
    uVar13 = 3;
    do {
      uVar16 = uVar13;
      fVar1 = param_1 * *pfVar14 + fVar31;
      fVar2 = param_1 * pfVar14[1] + (float)uVar17;
      fVar3 = param_1 * (float)*(undefined8 *)(pfVar14 + 2) + fVar29;
      fVar4 = param_1 * fVar1 + fVar30;
      fVar5 = param_1 * fVar2 + fVar33;
      fVar6 = param_1 * fVar3 + fVar28;
      fVar31 = -(param_1 * fVar1) + *pfVar14;
      uVar17 = (ulonglong)(uint)(-(param_1 * fVar2) + pfVar14[1]);
      fVar7 = param_1 * fVar4 + fVar24;
      fVar8 = param_1 * fVar5 + fVar32;
      fVar9 = param_1 * fVar6 + fVar27;
      fVar29 = -(param_1 * fVar3) + (float)*(undefined8 *)(pfVar14 + 2);
      fVar30 = -(param_1 * fVar4) + fVar1;
      fVar1 = param_1 * fVar7 + fVar25;
      fVar10 = param_1 * fVar8 + (float)uVar18;
      fVar11 = param_1 * fVar9 + fVar26;
      fVar33 = -(param_1 * fVar5) + fVar2;
      fVar28 = -(param_1 * fVar6) + fVar3;
      fVar2 = param_1 * fVar1 + (float)uVar23;
      fVar3 = param_1 * fVar10 + (float)uVar22;
      fVar12 = param_1 * fVar11 + (float)uVar21;
      fVar24 = -(param_1 * fVar7) + fVar4;
      fVar32 = -(param_1 * fVar8) + fVar5;
      *puVar15 = (ulonglong)(uint)fVar2;
      *(ulonglong *)((int)puVar15 + 4) = (ulonglong)(uint)fVar3;
      puVar15[1] = (ulonglong)(uint)fVar12;
      fVar27 = -(param_1 * fVar9) + fVar6;
      fVar25 = -(param_1 * fVar1) + fVar7;
      uVar18 = (ulonglong)(uint)(-(param_1 * fVar10) + fVar8);
      fVar26 = -(param_1 * fVar11) + fVar9;
      uVar23 = (ulonglong)(uint)(-(param_1 * fVar2) + fVar1);
      uVar22 = (ulonglong)(uint)(-(param_1 * fVar3) + fVar10);
      uVar21 = (ulonglong)(uint)(-(param_1 * fVar12) + fVar11);
      pfVar14 = pfVar14 + 3;
      puVar15 = (ulonglong *)((int)puVar15 + 0xc);
      uVar13 = uVar16 + 3;
    } while (uVar16 + 3 <= param_4);
    param_4 = param_4 - uVar16;
  }
  if (param_4 == 0) {
    *param_5 = fVar31;
    *(ulonglong *)(param_5 + 1) = uVar17;
    param_5[2] = fVar29;
    param_5[3] = fVar30;
    param_5[4] = fVar33;
    param_5[5] = fVar28;
    param_5[6] = fVar24;
    param_5[7] = fVar32;
    param_5[8] = fVar27;
    param_5[9] = fVar25;
    *(ulonglong *)(param_5 + 10) = uVar18;
    param_5[0xb] = fVar26;
    *(ulonglong *)(param_5 + 0xc) = uVar23;
    *(ulonglong *)(param_5 + 0xd) = uVar22;
    *(ulonglong *)(param_5 + 0xe) = uVar21;
  }
  else {
    fVar31 = (float)*(undefined8 *)(param_2 + uVar16) * param_1 + fVar31;
    fVar30 = param_1 * fVar31 + fVar30;
    uVar20 = (ulonglong)(uint)(-(param_1 * fVar31) + (float)*(undefined8 *)(param_2 + uVar16));
    fVar24 = param_1 * fVar30 + fVar24;
    fVar31 = -(param_1 * fVar30) + fVar31;
    fVar25 = param_1 * fVar24 + fVar25;
    fVar30 = -(param_1 * fVar24) + fVar30;
    fVar1 = param_1 * fVar25 + (float)uVar23;
    fVar24 = -(param_1 * fVar25) + fVar24;
    *(ulonglong *)((int)param_3 + uVar16 * 4) = (ulonglong)(uint)fVar1;
    uVar23 = (ulonglong)(uint)(-(param_1 * fVar1) + fVar25);
    if (param_4 == 1) {
      *(ulonglong *)param_5 = uVar17;
      param_5[1] = fVar29;
      *(ulonglong *)(param_5 + 2) = uVar20;
      param_5[3] = fVar33;
      param_5[4] = fVar28;
      param_5[5] = fVar31;
      param_5[6] = fVar32;
      param_5[7] = fVar27;
      param_5[8] = fVar30;
      *(ulonglong *)(param_5 + 9) = uVar18;
      param_5[10] = fVar26;
      param_5[0xb] = fVar24;
      *(ulonglong *)(param_5 + 0xc) = uVar22;
      *(ulonglong *)(param_5 + 0xd) = uVar21;
      *(ulonglong *)(param_5 + 0xe) = uVar23;
    }
    else {
      uVar19 = *(undefined8 *)(param_2 + uVar16 + 1);
      fVar25 = param_1 * (float)uVar19 + (float)uVar17;
      fVar33 = param_1 * fVar25 + fVar33;
      fVar32 = param_1 * fVar33 + fVar32;
      fVar1 = param_1 * fVar32 + (float)uVar18;
      fVar2 = param_1 * fVar1 + (float)uVar22;
      *(float *)(uVar16 * 4 + 4 + (int)param_3) = fVar2;
      *param_5 = fVar29;
      *(ulonglong *)(param_5 + 1) = uVar20;
      *(ulonglong *)(param_5 + 2) = (ulonglong)(uint)(-(param_1 * fVar25) + (float)uVar19);
      param_5[3] = fVar28;
      param_5[4] = fVar31;
      *(ulonglong *)(param_5 + 5) = (ulonglong)(uint)(-(param_1 * fVar33) + fVar25);
      param_5[6] = fVar27;
      param_5[7] = fVar30;
      param_5[8] = -(param_1 * fVar32) + fVar33;
      param_5[9] = fVar26;
      param_5[10] = fVar24;
      param_5[0xb] = -(param_1 * fVar1) + fVar32;
      *(ulonglong *)(param_5 + 0xc) = uVar21;
      *(ulonglong *)(param_5 + 0xd) = uVar23;
      *(ulonglong *)(param_5 + 0xe) = (ulonglong)(uint)(-(param_1 * fVar2) + fVar1);
    }
  }
  return;
}

