/* NanoCore 1.12: nc_reverb_spring_helper_400a26b8 at 0x400a26b8.
 * Role: Direct callee closure inside copied Spring blob; semantic role not yet established
 * REA: ev_d8dd7792fec4ffccf49aa47bdbbd30075545fa5ba061e328f6b81fe0941d171c
 * Source: analysis/rea-1.12-effects/results/03726-export-0x400a26b8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_helper_400a26b8(int param_1,undefined4 param_2,float *param_3,uint param_4)

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
  undefined8 *puVar11;
  float *pfVar12;
  ulonglong *puVar13;
  float *pfVar14;
  ulonglong *puVar15;
  float *pfVar16;
  undefined8 *puVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  undefined8 *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  ulonglong uVar37;
  float fVar38;
  ulonglong uVar39;
  float fVar40;
  ulonglong uVar41;
  float fVar42;
  float fVar43;
  ulonglong uVar44;
  float fVar45;
  float fVar46;
  ushort auStack_52 [5];
  
  fVar10 = DAT_ram_400a3764;
  fVar9 = DAT_ram_400a3760;
  fVar8 = DAT_ram_400a375c;
  fVar7 = DAT_ram_400a3758;
  fVar6 = DAT_ram_400a3754;
  fVar5 = DAT_ram_400a3750;
  auStack_52[0] = *(ushort *)(param_1 + 0x969c);
  uVar19 = auStack_52[0] + 5;
  if (0x683 < uVar19) {
    uVar19 = auStack_52[0] - 0x67f;
  }
  iVar20 = (uVar19 + 0x18) * 4;
  fVar1 = *(float *)(param_1 + 0x136b8);
  pfVar25 = (float *)(param_1 + 0x607c + iVar20);
  puVar26 = (undefined8 *)(param_1 + 0x7b8c + iVar20);
  if (param_4 < 4) {
    uVar19 = 0;
  }
  else {
    puVar11 = puVar26;
    pfVar12 = pfVar25;
    pfVar24 = param_3;
    do {
      fVar29 = 0.0;
      fVar35 = *(float *)((int)puVar11 + 0xc);
      uVar37 = (ulonglong)(uint)fVar5;
      uVar39 = (ulonglong)(uint)fVar6;
      uVar41 = (ulonglong)(uint)fVar7;
      uVar44 = (ulonglong)(uint)fVar8;
      fVar27 = 0.0;
      fVar30 = 0.0;
      fVar28 = 0.0;
      fVar43 = 0.0;
      fVar33 = 0.0;
      puVar15 = (ulonglong *)&DAT_ram_400a3828;
      puVar13 = (ulonglong *)&DAT_ram_400a37c4;
      puVar17 = puVar11;
      pfVar21 = pfVar12;
      fVar46 = pfVar12[2];
      fVar36 = pfVar12[3];
      fVar45 = *(float *)(puVar11 + 1);
      fVar31 = fVar28;
      fVar32 = fVar28;
      while( true ) {
        fVar2 = *pfVar21;
        fVar3 = pfVar21[1];
        fVar42 = (float)uVar44;
        fVar38 = (float)uVar39;
        fVar4 = fVar38 * fVar35;
        fVar34 = (float)*puVar17;
        fVar35 = (float)*(undefined8 *)((int)puVar17 + 4);
        fVar40 = (float)uVar41;
        fVar28 = fVar40 * fVar46 + fVar42 * fVar36 + fVar28;
        fVar36 = (float)uVar37;
        fVar29 = fVar36 * fVar45 + fVar4 + fVar29;
        fVar33 = pfVar21[-1] * fVar40 + fVar2 * fVar42 + fVar33;
        fVar32 = fVar2 * fVar40 + fVar3 * fVar42 + fVar32;
        fVar31 = fVar3 * fVar40 + fVar42 * fVar46 + fVar31;
        fVar43 = *(float *)((int)puVar17 + -4) * fVar36 + fVar34 * fVar38 + fVar43;
        fVar27 = fVar34 * fVar36 + fVar35 * fVar38 + fVar27;
        fVar30 = fVar35 * fVar36 + fVar38 * fVar45 + fVar30;
        pfVar21 = pfVar21 + -2;
        puVar17 = puVar17 + -1;
        if (puVar15 == (ulonglong *)&DAT_ram_400a3880) break;
        uVar44 = *puVar15;
        uVar41 = *(ulonglong *)((int)puVar15 + 4);
        uVar39 = *puVar13;
        uVar37 = *(ulonglong *)((int)puVar13 + 4);
        puVar15 = puVar15 + 1;
        puVar13 = puVar13 + 1;
        fVar46 = fVar2;
        fVar36 = fVar3;
        fVar45 = fVar34;
      }
      pfVar21 = pfVar12 + -0x18;
      fVar46 = pfVar12[-0x17];
      pfVar14 = (float *)(puVar11 + -0xc);
      fVar36 = *(float *)((int)puVar11 + -0x5c);
      pfVar12 = pfVar12 + 4;
      puVar11 = puVar11 + 2;
      *pfVar24 = fVar1 * (*pfVar14 * fVar10 + fVar43) + *pfVar21 * fVar9 + fVar33;
      pfVar24[1] = fVar1 * (fVar36 * fVar10 + fVar27) + fVar46 * fVar9 + fVar32;
      pfVar24[2] = fVar1 * (fVar34 * fVar10 + fVar30) + fVar2 * fVar9 + fVar31;
      pfVar24[3] = fVar1 * (fVar35 * fVar10 + fVar29) + fVar3 * fVar9 + fVar28;
      pfVar24 = pfVar24 + 4;
    } while (pfVar25 + ((param_4 - 4 >> 2) + 1) * 4 != pfVar12);
    uVar19 = (param_4 - 4 & 0xfffffffc) + 4;
  }
  fVar10 = DAT_ram_400a3764;
  fVar9 = DAT_ram_400a3760;
  fVar8 = DAT_ram_400a375c;
  fVar7 = DAT_ram_400a3758;
  fVar6 = DAT_ram_400a3754;
  fVar5 = DAT_ram_400a3750;
  if (uVar19 < param_4) {
    pfVar21 = pfVar25 + uVar19;
    pfVar24 = (float *)((int)puVar26 + uVar19 * 4);
    pfVar12 = param_3 + uVar19;
    do {
      fVar27 = 0.0;
      fVar43 = 0.0;
      fVar31 = 0.0;
      fVar32 = 0.0;
      pfVar14 = (float *)0x400a37bc;
      pfVar16 = pfVar24;
      pfVar18 = pfVar21;
      pfVar22 = (float *)0x400a3820;
      fVar35 = fVar8;
      fVar28 = fVar6;
      fVar29 = fVar7;
      fVar33 = fVar5;
      while( true ) {
        pfVar23 = pfVar22 + 2;
        fVar32 = *pfVar18 * fVar35 + fVar32;
        fVar31 = *pfVar16 * fVar28 + fVar31;
        fVar43 = pfVar18[-1] * fVar29 + fVar43;
        fVar27 = pfVar16[-1] * fVar33 + fVar27;
        pfVar18 = pfVar18 + -2;
        pfVar16 = pfVar16 + -2;
        if (pfVar23 == (float *)&DAT_ram_400a3880) break;
        fVar35 = *pfVar23;
        fVar28 = pfVar14[2];
        fVar29 = pfVar22[3];
        fVar33 = pfVar14[3];
        pfVar14 = pfVar14 + 2;
        pfVar22 = pfVar23;
      }
      pfVar14 = pfVar21 + -0x18;
      pfVar16 = pfVar24 + -0x18;
      pfVar21 = pfVar21 + 1;
      pfVar24 = pfVar24 + 1;
      *pfVar12 = (*pfVar16 * fVar10 + fVar31 + fVar27) * fVar1 + *pfVar14 * fVar9 + fVar32 + fVar43;
      pfVar12 = pfVar12 + 1;
    } while (pfVar25 + param_4 != pfVar21);
  }
  nc_reverb_spring_helper_400a2630(param_1 + 0x607c,param_1 + 0x969c,param_2);
  nc_reverb_spring_helper_400a2630(param_1 + 0x7b8c,auStack_52,param_3,param_4);
  return;
}

