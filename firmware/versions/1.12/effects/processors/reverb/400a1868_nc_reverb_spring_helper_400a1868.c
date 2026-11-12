/* NanoCore 1.12: nc_reverb_spring_helper_400a1868 at 0x400a1868.
 * Role: Direct callee closure inside copied Spring blob; semantic role not yet established
 * REA: ev_d97a90835d63c25bc65994ef9b345c9c887e88b57c56059e2ebe4ad7adf7271c
 * Source: analysis/rea-1.12-effects/results/03717-export-0x400a1868.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_helper_400a1868(undefined8 *param_1,int param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  
  if (param_4 < 4) {
    uVar9 = 0;
  }
  else {
    puVar5 = (undefined8 *)(param_2 + -0x40);
    pfVar6 = param_3;
    do {
      fVar18 = 0.0;
      fVar20 = *(float *)(puVar5 + 9);
      fVar16 = 0.0;
      fVar12 = 0.0;
      fVar17 = 0.0;
      fVar11 = 0.0;
      fVar14 = 0.0;
      puVar7 = param_1;
      puVar10 = puVar5 + 8;
      fVar27 = *(float *)((int)puVar5 + 0x4c);
      fVar15 = fVar17;
      fVar13 = fVar17;
      do {
        puVar8 = puVar10;
        fVar2 = *(float *)((int)puVar8 + -4);
        fVar21 = (float)*puVar8;
        fVar23 = (float)*puVar7;
        fVar3 = fVar23 * fVar20;
        fVar22 = (float)*(undefined8 *)((int)puVar8 + 4);
        fVar26 = (float)*(undefined8 *)((int)puVar7 + 4);
        fVar4 = fVar26 * fVar20;
        fVar20 = *(float *)(puVar8 + -1);
        puVar10 = puVar8 + -2;
        fVar24 = (float)puVar7[1];
        fVar14 = fVar24 * fVar20 + fVar23 * fVar21 + fVar14;
        fVar13 = fVar24 * fVar2 + fVar23 * fVar22 + fVar13;
        fVar15 = fVar24 * fVar21 + fVar3 + fVar15;
        fVar17 = fVar24 * fVar22 + fVar23 * fVar27 + fVar17;
        fVar27 = (float)*(undefined8 *)((int)puVar7 + 0xc);
        fVar11 = fVar27 * *(float *)((int)puVar8 + -0xc) + fVar26 * fVar2 + fVar11;
        fVar16 = fVar27 * fVar20 + fVar26 * fVar21 + fVar16;
        fVar12 = fVar27 * fVar2 + fVar26 * fVar22 + fVar12;
        fVar18 = fVar27 * fVar21 + fVar4 + fVar18;
        puVar7 = puVar7 + 2;
        fVar27 = fVar2;
      } while (puVar10 != puVar5);
      uVar19 = *puVar10;
      uVar25 = *(undefined8 *)((int)puVar8 + -0xc);
      fVar27 = (float)param_1[8];
      pfVar6[2] = fVar12 + fVar20 * fVar27 + fVar15;
      *pfVar6 = fVar11 + fVar27 * (float)uVar19 + fVar14;
      pfVar6[1] = fVar16 + fVar27 * (float)uVar25 + fVar13;
      pfVar6[3] = fVar18 + fVar2 * fVar27 + fVar17;
      puVar5 = puVar8;
      pfVar6 = pfVar6 + 4;
    } while ((undefined8 *)(param_2 + -0x30 + (param_4 - 4 >> 2) * 0x10) != puVar8);
    uVar9 = (param_4 - 4 & 0xfffffffc) + 4;
  }
  if (uVar9 < param_4) {
    puVar5 = (undefined8 *)(param_2 + uVar9 * 4 + -0x40);
    pfVar6 = param_3 + uVar9;
    do {
      fVar14 = 0.0;
      puVar10 = puVar5 + 8;
      fVar20 = 0.0;
      puVar7 = param_1;
      do {
        uVar19 = *puVar10;
        pfVar1 = (float *)((int)puVar10 + -4);
        puVar10 = puVar10 + -1;
        fVar20 = (float)*puVar7 * (float)uVar19 + fVar20;
        fVar14 = (float)*(undefined8 *)((int)puVar7 + 4) * *pfVar1 + fVar14;
        puVar7 = puVar7 + 1;
      } while (puVar5 != puVar10);
      uVar19 = *puVar5;
      puVar5 = (undefined8 *)((int)puVar5 + 4);
      *pfVar6 = fVar14 + (float)param_1[8] * (float)uVar19 + fVar20;
      pfVar6 = pfVar6 + 1;
    } while ((undefined8 *)(param_2 + -0x40 + param_4 * 4) != puVar5);
  }
  return;
}

