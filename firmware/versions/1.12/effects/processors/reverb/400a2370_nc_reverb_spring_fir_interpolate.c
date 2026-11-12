/* NanoCore 1.12: nc_reverb_spring_fir_interpolate at 0x400a2370.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_b5dbc8da3021d3813685d2221df211a76fbf4d83b33014e7db283aacd5d1b21a
 * Source: analysis/rea-1.12-effects/results/03724-export-0x400a2370.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_fir_interpolate(int param_1,float *param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  ulonglong *puVar9;
  float *pfVar10;
  uint uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float *pfVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  fVar7 = DAT_ram_400a3748;
  fVar6 = DAT_ram_400a3744;
  if (param_4 < 4) {
    uVar11 = 0;
  }
  else {
    pfVar15 = (float *)(param_1 + 0x38);
    pfVar8 = param_2;
    do {
      fVar29 = pfVar15[0x12];
      fVar28 = pfVar15[-0xc];
      fVar23 = pfVar15[-0xb];
      fVar25 = pfVar15[0x11];
      fVar33 = (fVar25 + pfVar15[-0xe]) * fVar7 + 0.0;
      fVar22 = (fVar29 + pfVar15[-0xd]) * fVar7 + 0.0;
      fVar21 = (pfVar15[0x13] + fVar28) * fVar7 + 0.0;
      fVar20 = (fVar23 + pfVar15[0x14]) * fVar7 + 0.0;
      fVar36 = (pfVar15[0x10] + pfVar15[-0xd]) * fVar6 + 0.0;
      fVar35 = (fVar25 + fVar28) * fVar6 + 0.0;
      fVar34 = (fVar23 + fVar29) * fVar6 + 0.0;
      fVar17 = (pfVar15[-10] + pfVar15[0x13]) * fVar6 + 0.0;
      pfVar10 = pfVar15 + 0xe;
      pfVar13 = pfVar15 + -0xc;
      puVar14 = &DAT_ram_400a392c;
      uVar31 = DAT_ram_400a392c;
      uVar32 = DAT_ram_400a3934;
      fVar19 = pfVar15[-10];
      fVar18 = pfVar15[0x10];
      while( true ) {
        fVar3 = pfVar13[3];
        fVar4 = *pfVar10;
        fVar5 = pfVar13[4];
        fVar26 = (float)*(undefined8 *)(pfVar10 + 1);
        fVar30 = (float)uVar31;
        fVar33 = (fVar26 + fVar28) * fVar30 + fVar33;
        fVar22 = (fVar18 + fVar23) * fVar30 + fVar22;
        fVar21 = (fVar25 + fVar19) * fVar30 + fVar21;
        fVar20 = (fVar3 + fVar29) * fVar30 + fVar20;
        fVar29 = (float)uVar32;
        fVar36 = (fVar4 + fVar23) * fVar29 + fVar36;
        fVar35 = (fVar26 + fVar19) * fVar29 + fVar35;
        fVar34 = (fVar3 + fVar18) * fVar29 + fVar34;
        fVar17 = (fVar5 + fVar25) * fVar29 + fVar17;
        if (pfVar10 + -2 == pfVar15) break;
        fVar25 = pfVar10[-1];
        fVar23 = pfVar13[5];
        pfVar1 = pfVar10 + -2;
        pfVar2 = pfVar13 + 6;
        fVar29 = (float)puVar14[2];
        fVar33 = (fVar25 + fVar19) * fVar29 + fVar33;
        fVar22 = (fVar4 + fVar3) * fVar29 + fVar22;
        fVar21 = (fVar26 + fVar5) * fVar29 + fVar21;
        fVar20 = (fVar23 + fVar18) * fVar29 + fVar20;
        fVar29 = (float)puVar14[3];
        fVar36 = (*pfVar1 + fVar3) * fVar29 + fVar36;
        fVar35 = (fVar25 + fVar5) * fVar29 + fVar35;
        fVar34 = (fVar23 + fVar4) * fVar29 + fVar34;
        fVar17 = (*pfVar2 + fVar26) * fVar29 + fVar17;
        uVar31 = puVar14[4];
        uVar32 = puVar14[5];
        pfVar10 = pfVar10 + -4;
        pfVar13 = pfVar13 + 4;
        puVar14 = puVar14 + 4;
        fVar19 = *pfVar2;
        fVar18 = *pfVar1;
        fVar29 = fVar4;
        fVar28 = fVar5;
      }
      pfVar15 = pfVar10 + 2;
      *pfVar8 = fVar33 + fVar36;
      pfVar8[1] = fVar22 + fVar35;
      pfVar8[2] = fVar21 + fVar34;
      pfVar8[3] = fVar20 + fVar17;
      pfVar8 = pfVar8 + 4;
    } while ((float *)((param_4 - 4 >> 2) * 0x10 + param_1 + 0x48) != pfVar15);
    uVar11 = (param_4 - 4 & 0xfffffffc) + 4;
  }
  fVar7 = DAT_ram_400a3748;
  fVar6 = DAT_ram_400a3744;
  if (uVar11 < param_4) {
    iVar16 = param_4 * 4;
    puVar14 = (undefined8 *)(param_1 + uVar11 * 4 + 0x3c);
    pfVar8 = param_2 + uVar11;
    do {
      fVar28 = 0.0;
      uVar24 = (ulonglong)(uint)fVar6;
      uVar27 = (ulonglong)(uint)fVar7;
      fVar29 = 0.0;
      puVar12 = puVar14 + 8;
      pfVar15 = (float *)((int)puVar14 + -0x3c);
      puVar9 = (ulonglong *)0x400a391c;
      while( true ) {
        uVar31 = *puVar12;
        fVar23 = *pfVar15;
        pfVar10 = (float *)((int)puVar12 + -4);
        pfVar13 = pfVar15 + 1;
        puVar12 = puVar12 + -1;
        pfVar15 = pfVar15 + 2;
        fVar29 = ((float)uVar31 + fVar23) * (float)uVar27 + fVar29;
        fVar28 = (*pfVar10 + *pfVar13) * (float)uVar24 + fVar28;
        if (puVar14 == puVar12) break;
        uVar27 = puVar9[2];
        uVar24 = puVar9[3];
        puVar9 = puVar9 + 2;
      }
      pfVar15 = pfVar8 + 1;
      puVar14 = (undefined8 *)((int)puVar14 + 4);
      *pfVar8 = fVar29 + fVar28;
      pfVar8 = pfVar15;
    } while (param_2 + param_4 != pfVar15);
  }
  else {
    iVar16 = param_4 << 2;
  }
  fVar6 = DAT_ram_400a374c;
  puVar14 = (undefined8 *)(param_1 + 0x3c);
  do {
    uVar31 = *puVar14;
    puVar14 = (undefined8 *)((int)puVar14 + 4);
    *param_3 = (float)uVar31 * fVar6;
    param_3 = param_3 + 1;
  } while ((undefined8 *)(iVar16 + 0x40 + param_1) != puVar14);
  return;
}

