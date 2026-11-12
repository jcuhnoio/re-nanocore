/* NanoCore 1.12: dsp_fir_process_unrolled at 0x30040000.
 * Role: RAM FIR kernel used by convolver direct head; coefficient/state multiply accumulation.
 * REA: ev_cf7472f8dabbacc976ff850f9ce91332e9245b4f5951ef8e4c3c7d26a5ab702a
 * Source: analysis/rea-1.12/results/01000-export-0x30040000.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void dsp_fir_process_unrolled(ushort *param_1,undefined8 *param_2,float *param_3,uint param_4)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 *puVar38;
  undefined8 *puVar39;
  float *pfVar40;
  undefined8 *puVar41;
  uint uVar42;
  float *pfVar43;
  undefined8 *puVar44;
  float *pfVar45;
  float *pfVar46;
  float *pfVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  float *pfVar50;
  int iVar51;
  uint uVar52;
  uint uVar53;
  undefined4 *puVar54;
  uint uVar55;
  uint uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  ulonglong uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  
  uVar1 = *param_1;
  uVar56 = (uint)uVar1;
  puVar41 = *(undefined8 **)(param_1 + 2);
  uVar42 = param_4 >> 3;
  pfVar40 = *(float **)(param_1 + 4);
  puVar54 = (undefined4 *)((int)puVar41 + uVar56 * 4 + -4);
  puVar49 = puVar41;
  if (uVar42 != 0) {
    uVar52 = (uint)(uVar1 >> 3);
    pfVar43 = (float *)((int)puVar41 + 0x1c);
    puVar38 = puVar54;
    puVar49 = param_2;
    pfVar50 = param_3;
    uVar55 = uVar42;
    do {
      fVar74 = 0.0;
      *puVar38 = *(undefined4 *)puVar49;
      fVar72 = 0.0;
      fVar68 = 0.0;
      puVar38[1] = *(undefined4 *)((int)puVar49 + 4);
      fVar73 = 0.0;
      fVar67 = 0.0;
      puVar38[2] = *(undefined4 *)(puVar49 + 1);
      puVar38[3] = *(undefined4 *)((int)puVar49 + 0xc);
      puVar38[4] = *(undefined4 *)(puVar49 + 2);
      puVar38[5] = *(undefined4 *)((int)puVar49 + 0x14);
      puVar38[6] = *(undefined4 *)(puVar49 + 3);
      puVar38[7] = *(undefined4 *)((int)puVar49 + 0x1c);
      fVar65 = pfVar43[-7];
      uVar66 = (ulonglong)(uint)pfVar43[-6];
      fVar62 = pfVar43[-5];
      fVar57 = pfVar43[-4];
      fVar58 = pfVar43[-3];
      fVar59 = pfVar43[-2];
      fVar60 = pfVar43[-1];
      fVar69 = 0.0;
      pfVar46 = pfVar40;
      pfVar47 = pfVar43;
      fVar61 = fVar73;
      fVar71 = fVar73;
      if (uVar52 != 0) {
        do {
          fVar2 = *pfVar46;
          fVar3 = *pfVar47;
          fVar4 = pfVar46[1];
          fVar12 = fVar2 * fVar65;
          fVar63 = (float)uVar66;
          fVar13 = fVar2 * fVar62;
          fVar14 = fVar2 * fVar57;
          fVar15 = fVar2 * fVar58;
          fVar16 = fVar2 * fVar59;
          fVar17 = fVar2 * fVar60;
          fVar65 = pfVar47[1];
          fVar18 = fVar4 * fVar62;
          fVar19 = fVar4 * fVar57;
          fVar20 = fVar4 * fVar58;
          fVar21 = fVar4 * fVar59;
          fVar22 = fVar4 * fVar60;
          uVar66 = *(ulonglong *)(pfVar47 + 2);
          fVar5 = pfVar46[2];
          fVar6 = pfVar46[3];
          fVar23 = fVar5 * fVar62;
          fVar24 = fVar5 * fVar57;
          fVar25 = fVar5 * fVar58;
          fVar26 = fVar5 * fVar59;
          fVar27 = fVar5 * fVar60;
          fVar64 = (float)uVar66;
          fVar62 = pfVar47[3];
          fVar28 = fVar6 * fVar57;
          fVar29 = fVar6 * fVar58;
          fVar30 = fVar6 * fVar59;
          fVar31 = fVar6 * fVar60;
          fVar57 = pfVar47[4];
          fVar7 = pfVar46[4];
          fVar8 = pfVar46[5];
          pfVar45 = pfVar46 + 8;
          fVar32 = fVar7 * fVar58;
          fVar33 = fVar7 * fVar59;
          fVar34 = fVar7 * fVar60;
          fVar58 = pfVar47[5];
          fVar35 = fVar8 * fVar59;
          fVar36 = fVar8 * fVar60;
          fVar59 = pfVar47[6];
          fVar9 = pfVar46[6];
          fVar37 = fVar9 * fVar60;
          fVar60 = pfVar47[7];
          fVar10 = pfVar46[7];
          fVar71 = fVar3 * fVar10 +
                   fVar37 + fVar35 + fVar32 + fVar28 + fVar23 + fVar4 * fVar63 + fVar12 + fVar71;
          fVar61 = fVar65 * fVar10 +
                   fVar3 * fVar9 +
                   fVar36 + fVar33 + fVar29 + fVar24 + fVar18 + fVar2 * fVar63 + fVar61;
          fVar73 = fVar64 * fVar10 +
                   fVar65 * fVar9 +
                   fVar3 * fVar8 + fVar34 + fVar30 + fVar25 + fVar19 + fVar13 + fVar73;
          fVar67 = fVar62 * fVar10 +
                   fVar64 * fVar9 +
                   fVar65 * fVar8 + fVar3 * fVar7 + fVar31 + fVar26 + fVar20 + fVar14 + fVar67;
          fVar72 = fVar57 * fVar10 +
                   fVar62 * fVar9 +
                   fVar64 * fVar8 +
                   fVar65 * fVar7 + fVar3 * fVar6 + fVar27 + fVar21 + fVar15 + fVar72;
          fVar68 = fVar58 * fVar10 +
                   fVar57 * fVar9 +
                   fVar62 * fVar8 +
                   fVar64 * fVar7 + fVar65 * fVar6 + fVar3 * fVar5 + fVar22 + fVar16 + fVar68;
          fVar69 = fVar59 * fVar10 +
                   fVar58 * fVar9 +
                   fVar57 * fVar8 +
                   fVar62 * fVar7 +
                   fVar64 * fVar6 + fVar65 * fVar5 + fVar3 * fVar4 + fVar17 + fVar69;
          fVar74 = fVar10 * fVar60 +
                   fVar9 * fVar59 +
                   fVar8 * fVar58 +
                   fVar7 * fVar57 +
                   fVar6 * fVar62 + fVar5 * fVar64 + fVar4 * fVar65 + fVar2 * fVar3 + fVar74;
          pfVar46 = pfVar45;
          pfVar47 = pfVar47 + 8;
        } while (pfVar45 != pfVar40 + uVar52 * 8);
        pfVar47 = pfVar43 + uVar52 * 8;
        pfVar46 = pfVar40 + uVar52 * 8;
      }
      uVar53 = uVar56 & 7;
      if ((uVar1 & 7) != 0) {
        do {
          fVar2 = *pfVar46;
          fVar3 = *pfVar47;
          uVar53 = uVar53 - 1;
          fVar71 = fVar2 * fVar65 + fVar71;
          fVar65 = (float)uVar66;
          fVar61 = fVar2 * fVar65 + fVar61;
          fVar73 = fVar2 * fVar62 + fVar73;
          fVar67 = fVar2 * fVar57 + fVar67;
          fVar72 = fVar2 * fVar58 + fVar72;
          fVar68 = fVar2 * fVar59 + fVar68;
          fVar69 = fVar2 * fVar60 + fVar69;
          fVar74 = fVar2 * fVar3 + fVar74;
          uVar66 = (ulonglong)(uint)fVar62;
          pfVar46 = pfVar46 + 1;
          pfVar47 = pfVar47 + 1;
          fVar62 = fVar57;
          fVar57 = fVar58;
          fVar58 = fVar59;
          fVar59 = fVar60;
          fVar60 = fVar3;
        } while (uVar53 != 0);
      }
      *pfVar50 = fVar71;
      pfVar50[1] = fVar61;
      pfVar50[2] = fVar73;
      pfVar50[3] = fVar67;
      pfVar50[4] = fVar72;
      pfVar50[5] = fVar68;
      pfVar50[6] = fVar69;
      pfVar50[7] = fVar74;
      uVar55 = uVar55 - 1;
      pfVar50 = pfVar50 + 8;
      pfVar43 = pfVar43 + 8;
      puVar38 = puVar38 + 8;
      puVar49 = puVar49 + 4;
    } while (uVar55 != 0);
    param_2 = param_2 + uVar42 * 4;
    puVar54 = puVar54 + uVar42 * 8;
    param_3 = param_3 + uVar42 * 8;
    puVar49 = puVar41 + uVar42 * 4;
  }
  if ((param_4 & 7) != 0) {
    iVar51 = (param_4 & 7) * 4;
    puVar39 = (undefined8 *)((int)param_2 + iVar51);
    puVar44 = puVar49;
    do {
      uVar70 = *param_2;
      param_2 = (undefined8 *)((int)param_2 + 4);
      *puVar54 = (int)uVar70;
      uVar66 = 0;
      pfVar50 = pfVar40;
      puVar48 = puVar44;
      for (uVar42 = uVar56; uVar42 != 0; uVar42 = uVar42 - 1) {
        uVar70 = *puVar48;
        puVar48 = (undefined8 *)((int)puVar48 + 4);
        uVar66 = (ulonglong)(uint)((float)uVar70 * (float)*(undefined8 *)pfVar50 + (float)uVar66);
        pfVar50 = pfVar50 + 1;
      }
      *(ulonglong *)param_3 = uVar66;
      puVar44 = (undefined8 *)((int)puVar44 + 4);
      param_3 = param_3 + 1;
      puVar54 = puVar54 + 1;
    } while (param_2 != puVar39);
    puVar49 = (undefined8 *)((int)puVar49 + iVar51);
  }
  uVar55 = uVar56 - 1 >> 2;
  uVar42 = uVar55;
  puVar44 = puVar41;
  puVar39 = puVar49;
  if (uVar55 != 0) {
    do {
      uVar42 = uVar42 - 1;
      *puVar44 = *puVar39;
      *(undefined4 *)((int)puVar44 + 4) = *(undefined4 *)((int)puVar39 + 4);
      *(undefined4 *)(puVar44 + 1) = *(undefined4 *)(puVar39 + 1);
      *(undefined4 *)((int)puVar44 + 0xc) = *(undefined4 *)((int)puVar39 + 0xc);
      puVar44 = puVar44 + 2;
      puVar39 = puVar39 + 2;
    } while (uVar42 != 0);
    puVar49 = puVar49 + uVar55 * 2;
    puVar41 = puVar41 + uVar55 * 2;
  }
  uVar42 = uVar56 - 1 & 3;
  puVar44 = (undefined8 *)((int)puVar49 + uVar42 * 4);
  if (uVar42 != 0) {
    do {
      uVar11 = *(undefined4 *)puVar49;
      puVar49 = (undefined8 *)((int)puVar49 + 4);
      *(undefined4 *)puVar41 = uVar11;
      puVar41 = (undefined8 *)((int)puVar41 + 4);
    } while (puVar49 != puVar44);
  }
  return;
}

