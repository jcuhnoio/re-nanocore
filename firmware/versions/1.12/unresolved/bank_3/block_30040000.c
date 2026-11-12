/* NanoCore 1.12 analysis module: unresolved/bank_3/block_30040000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x30040000.
 * REA evidence: ev_cf7472f8dabbacc976ff850f9ce91332e9245b4f5951ef8e4c3c7d26a5ab702a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_30040000(ushort *param_1,undefined8 *param_2,float *param_3,uint param_4)

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


/* NanoCore 1.12, address 0x30040358.
 * REA evidence: ev_7f18876caeefeff9aa44be4c7ed47668c43219987cf851097fcd48200054d538
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_30040358(ushort *param_1,float *param_2)

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
  float fVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar1 = *param_1;
  uVar13 = (uint)(uVar1 >> 1);
  pfVar12 = param_2 + uVar1;
  pfVar15 = param_2 + uVar13;
  pfVar14 = *(float **)(param_1 + 2);
  if (uVar1 >> 3 != 0) {
    pfVar16 = pfVar12 + uVar13;
    pfVar17 = param_2;
    pfVar18 = pfVar12;
    pfVar19 = pfVar14;
    do {
      fVar2 = *pfVar18;
      fVar3 = pfVar18[1];
      fVar4 = pfVar18[3];
      fVar5 = pfVar18[2];
      fVar6 = *pfVar17;
      fVar7 = pfVar17[1];
      uVar22 = *(undefined8 *)(pfVar17 + 2);
      uVar23 = *(undefined8 *)(pfVar17 + 3);
      uVar21 = *(undefined8 *)pfVar16;
      uVar20 = *(undefined8 *)(pfVar16 + 1);
      uVar24 = *(undefined8 *)(pfVar16 + 2);
      uVar25 = *(undefined8 *)(pfVar16 + 3);
      fVar8 = *pfVar15;
      fVar9 = pfVar15[1];
      fVar10 = pfVar15[2];
      fVar11 = pfVar15[3];
      *pfVar17 = fVar6 + fVar2;
      pfVar17[1] = fVar7 + fVar3;
      *(ulonglong *)(pfVar17 + 2) = (ulonglong)(uint)((float)uVar22 + fVar5);
      *(ulonglong *)(pfVar17 + 3) = (ulonglong)(uint)((float)uVar23 + fVar4);
      fVar6 = fVar6 - fVar2;
      fVar7 = fVar7 - fVar3;
      pfVar15[3] = fVar11 + (float)uVar25;
      *pfVar15 = fVar8 + (float)uVar21;
      pfVar15[1] = fVar9 + (float)uVar20;
      pfVar15[2] = fVar10 + (float)uVar24;
      fVar8 = (float)uVar21 - fVar8;
      fVar9 = (float)uVar20 - fVar9;
      fVar2 = pfVar19[1];
      fVar3 = *pfVar19;
      fVar4 = (float)uVar23 - fVar4;
      fVar5 = (float)uVar22 - fVar5;
      fVar11 = (float)uVar25 - fVar11;
      pfVar18[1] = fVar7 * fVar3 - fVar6 * fVar2;
      *pfVar18 = fVar6 * fVar3 + fVar7 * fVar2;
      *(ulonglong *)(pfVar16 + 1) = (ulonglong)(uint)(fVar9 * fVar2 + fVar8 * fVar3);
      *(ulonglong *)pfVar16 = (ulonglong)(uint)(fVar8 * fVar2 - fVar9 * fVar3);
      fVar10 = (float)uVar24 - fVar10;
      fVar2 = pfVar19[3];
      fVar3 = pfVar19[2];
      pfVar17 = pfVar17 + 4;
      pfVar18[2] = fVar5 * fVar3 + fVar4 * fVar2;
      pfVar18[3] = fVar4 * fVar3 - fVar5 * fVar2;
      pfVar16[2] = fVar10 * fVar2 - fVar11 * fVar3;
      pfVar16[3] = fVar11 * fVar2 + fVar10 * fVar3;
      pfVar19 = pfVar19 + 4;
      pfVar15 = pfVar15 + 4;
      pfVar16 = pfVar16 + 4;
      pfVar18 = pfVar18 + 4;
    } while (pfVar17 != param_2 + (uint)(uVar1 >> 3) * 4);
  }
  FUN_ram_30040a04(param_2,uVar13,pfVar14,2);
  FUN_ram_30040a04(pfVar12,uVar13,*(undefined4 *)(param_1 + 2),2);
  return;
}


/* NanoCore 1.12, address 0x300404cc.
 * REA evidence: ev_f084746cd40a2ef950e672937ecff8cf6023a6d007bd46a04d79e5294a65f6d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_300404cc(ushort *param_1,float *param_2)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ushort uVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  int iVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  uint uVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  
  uVar1 = *param_1;
  uVar48 = *(undefined8 *)param_2;
  uVar18 = uVar1 >> 1;
  pfVar23 = param_2 + uVar18;
  pfVar32 = pfVar23 + uVar18;
  fVar4 = *pfVar32;
  fVar2 = (float)uVar48 + fVar4;
  pfVar24 = pfVar32 + uVar18;
  fVar47 = (float)*(undefined8 *)pfVar23;
  fVar44 = (float)*(undefined8 *)pfVar24;
  fVar3 = (float)*(undefined8 *)(param_2 + 1) + pfVar32[1];
  iVar26 = *(int *)(param_1 + 2);
  fVar5 = pfVar24[1];
  fVar6 = pfVar23[1];
  fVar46 = (float)*(undefined8 *)(param_2 + 1) - pfVar32[1];
  *param_2 = fVar47 + fVar2 + fVar44;
  fVar4 = (float)uVar48 - fVar4;
  *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)(fVar3 + pfVar23[1] + pfVar24[1]);
  *pfVar23 = (fVar6 + fVar4) - fVar5;
  pfVar23[1] = (fVar46 - fVar47) + fVar44;
  uVar25 = (uint)(uVar1 >> 2);
  *pfVar32 = (fVar2 - fVar47) - fVar44;
  pfVar32[1] = (fVar3 - fVar6) - fVar5;
  *(ulonglong *)pfVar24 = (ulonglong)(uint)((fVar4 - fVar6) + fVar5);
  uVar39 = uVar25 - 2 >> 1;
  *(ulonglong *)(pfVar24 + 1) = (ulonglong)(uint)((fVar47 + fVar46) - fVar44);
  pfVar37 = param_2 + 2;
  pfVar33 = pfVar23 + 2;
  pfVar34 = pfVar32 + 2;
  pfVar19 = pfVar24 + 2;
  pfVar38 = (float *)(iVar26 + 8);
  pfVar36 = (float *)(iVar26 + 0x10);
  pfVar35 = (float *)(iVar26 + 0x18);
  if (uVar39 != 0) {
    pfVar20 = pfVar35;
    pfVar21 = pfVar23 + -1;
    uVar22 = uVar39;
    pfVar27 = pfVar33;
    pfVar28 = pfVar32 + -1;
    pfVar29 = pfVar24 + -1 + uVar18;
    pfVar30 = pfVar19;
    pfVar31 = pfVar24 + -1;
    pfVar40 = pfVar37;
    pfVar41 = pfVar34;
    pfVar42 = pfVar38;
    pfVar43 = pfVar36;
    do {
      fVar47 = *pfVar27;
      fVar7 = *pfVar30;
      fVar2 = *pfVar40 + *pfVar41;
      fVar5 = pfVar30[1];
      fVar3 = pfVar40[1] + pfVar41[1];
      uVar48 = *(undefined8 *)(pfVar27 + 1);
      fVar6 = *pfVar40 - *pfVar41;
      fVar11 = pfVar40[1] - pfVar41[1];
      *pfVar40 = fVar47 + fVar2 + fVar7;
      fVar46 = (float)uVar48;
      fVar4 = (fVar11 - fVar47) + fVar7;
      fVar12 = (fVar46 + fVar6) - fVar5;
      fVar13 = (fVar3 - fVar46) - fVar5;
      fVar5 = (fVar6 - fVar46) + fVar5;
      pfVar40[1] = fVar3 + (float)*(undefined8 *)(pfVar27 + 1) + pfVar30[1];
      fVar8 = *pfVar29;
      fVar3 = *pfVar21 + *pfVar31;
      fVar9 = pfVar29[-1];
      fVar10 = pfVar28[-1];
      fVar45 = (float)*(undefined8 *)pfVar28;
      fVar6 = pfVar21[-1] + pfVar31[-1];
      fVar14 = *pfVar21 - *pfVar31;
      fVar15 = pfVar21[-1] - pfVar31[-1];
      fVar46 = (fVar45 - fVar8) + fVar15;
      *pfVar21 = fVar45 + fVar3 + fVar8;
      fVar44 = (fVar14 - fVar10) + fVar9;
      fVar16 = (fVar6 - fVar10) - fVar9;
      fVar17 = (fVar2 - fVar47) - fVar7;
      fVar7 = (fVar47 + fVar11) - fVar7;
      fVar47 = (fVar3 - fVar45) - fVar8;
      fVar14 = (fVar9 - fVar10) - fVar14;
      pfVar21[-1] = fVar6 + (float)*(undefined8 *)(pfVar28 + -1) + pfVar29[-1];
      fVar2 = pfVar42[1];
      fVar3 = *pfVar42;
      fVar15 = (fVar45 - fVar8) - fVar15;
      pfVar27[1] = fVar4 * fVar3 - fVar12 * fVar2;
      *pfVar27 = fVar12 * fVar3 + fVar4 * fVar2;
      *pfVar28 = fVar44 * fVar2 - fVar46 * fVar3;
      pfVar28[-1] = fVar46 * fVar2 + fVar44 * fVar3;
      fVar2 = pfVar43[1];
      fVar3 = *pfVar43;
      *pfVar41 = fVar17 * fVar3 + fVar13 * fVar2;
      pfVar41[1] = fVar13 * fVar3 - fVar17 * fVar2;
      *pfVar31 = -(fVar47 * fVar3) - fVar16 * fVar2;
      pfVar31[-1] = -(fVar16 * fVar3) + fVar47 * fVar2;
      fVar2 = pfVar20[1];
      fVar3 = *pfVar20;
      uVar22 = uVar22 - 1;
      pfVar30[1] = fVar7 * fVar3 - fVar5 * fVar2;
      *pfVar30 = fVar5 * fVar3 + fVar7 * fVar2;
      *(ulonglong *)pfVar29 = (ulonglong)(uint)(fVar14 * fVar2 - fVar15 * fVar3);
      *(ulonglong *)(pfVar29 + -1) = (ulonglong)(uint)(fVar15 * fVar2 + fVar14 * fVar3);
      pfVar20 = pfVar20 + 6;
      pfVar21 = pfVar21 + -2;
      pfVar27 = pfVar27 + 2;
      pfVar28 = pfVar28 + -2;
      pfVar29 = pfVar29 + -2;
      pfVar30 = pfVar30 + 2;
      pfVar31 = pfVar31 + -2;
      pfVar40 = pfVar40 + 2;
      pfVar41 = pfVar41 + 2;
      pfVar42 = pfVar42 + 2;
      pfVar43 = pfVar43 + 4;
    } while (uVar22 != 0);
    pfVar37 = pfVar37 + uVar39 * 2;
    pfVar38 = pfVar38 + uVar39 * 2;
    pfVar33 = pfVar33 + uVar39 * 2;
    pfVar36 = pfVar36 + uVar39 * 4;
    pfVar34 = pfVar34 + uVar39 * 2;
    pfVar35 = pfVar35 + uVar39 * 6;
    pfVar19 = pfVar19 + uVar39 * 2;
  }
  fVar6 = *pfVar33;
  fVar46 = *pfVar19;
  fVar2 = *pfVar37 + *pfVar34;
  fVar44 = pfVar33[1];
  fVar5 = pfVar19[1];
  fVar3 = pfVar37[1] + pfVar34[1];
  fVar47 = *pfVar37 - *pfVar34;
  fVar7 = pfVar37[1] - pfVar34[1];
  *pfVar37 = fVar6 + fVar2 + fVar46;
  fVar8 = (fVar44 + fVar47) - fVar5;
  fVar4 = (fVar7 - fVar6) + fVar46;
  fVar9 = (fVar2 - fVar6) - fVar46;
  fVar46 = (fVar6 + fVar7) - fVar46;
  fVar6 = (fVar3 - fVar44) - fVar5;
  pfVar37[1] = fVar3 + pfVar33[1] + pfVar19[1];
  fVar2 = pfVar38[1];
  fVar3 = *pfVar38;
  fVar5 = (fVar47 - fVar44) + fVar5;
  pfVar33[1] = fVar4 * fVar3 - fVar8 * fVar2;
  *pfVar33 = fVar8 * fVar3 + fVar4 * fVar2;
  fVar2 = pfVar36[1];
  fVar3 = *pfVar36;
  pfVar34[1] = fVar6 * fVar3 - fVar9 * fVar2;
  *pfVar34 = fVar9 * fVar3 + fVar6 * fVar2;
  fVar2 = pfVar35[1];
  fVar3 = *pfVar35;
  pfVar19[1] = fVar46 * fVar3 - fVar5 * fVar2;
  *pfVar19 = fVar5 * fVar3 + fVar46 * fVar2;
  FUN_ram_30040a04(param_2,uVar25,iVar26,4);
  FUN_ram_30040a04(pfVar23,uVar25,*(undefined4 *)(param_1 + 2),4);
  FUN_ram_30040a04(pfVar32,uVar25,*(undefined4 *)(param_1 + 2),4);
  FUN_ram_30040a04(pfVar24,uVar25,*(undefined4 *)(param_1 + 2),4);
  return;
}


/* NanoCore 1.12, address 0x300408dc.
 * REA evidence: ev_2f9bdb9ba3810b48edc3725d598742209a3cf49cd509f6017db350b7fa49f0d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_300408dc(ushort *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar2 = (uint)*param_1;
  if (param_3 == 1) {
    if (uVar2 != 0) {
      uVar3 = 0;
      pfVar4 = param_2 + 1;
      do {
        uVar3 = uVar3 + 1;
        *pfVar4 = -(float)*(undefined8 *)pfVar4;
        pfVar4 = pfVar4 + 2;
      } while (uVar2 != uVar3);
      goto LAB_ram_300408fc;
    }
    if (param_4 == 0) {
      return;
    }
  }
  else {
LAB_ram_300408fc:
    if (uVar2 == 0x100) {
LAB_ram_300409d8:
      FUN_ram_300404cc(param_1,param_2);
    }
    else {
      if (uVar2 < 0x101) {
        if (uVar2 == 0x40) goto LAB_ram_30040950;
        if (uVar2 < 0x41) {
          if (uVar2 == 0x10) goto LAB_ram_3004091c;
          if (uVar2 == 0x20) goto LAB_ram_300409d8;
        }
        else if (uVar2 == 0x80) {
LAB_ram_3004091c:
          FUN_ram_30040358(param_1,param_2);
        }
        goto joined_r0x3004095c;
      }
      if (uVar2 == 0x800) goto LAB_ram_300409d8;
      if (uVar2 < 0x801) {
        if (uVar2 == 0x200) goto LAB_ram_30040950;
        if (uVar2 == 0x400) goto LAB_ram_3004091c;
      }
      else if (uVar2 == 0x1000) {
LAB_ram_30040950:
        FUN_ram_30040a04(param_2,uVar2,*(undefined4 *)(param_1 + 2),1);
      }
    }
joined_r0x3004095c:
    if (param_4 == 0) goto joined_r0x30040970;
  }
  FUN_ram_3004113c(param_2,param_1[6],*(undefined4 *)(param_1 + 4));
joined_r0x30040970:
  if ((param_3 == 1) && (fVar1 = DAT_ram_4009672c / (float)uVar2, uVar2 != 0)) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      *param_2 = (float)*(undefined8 *)param_2 * fVar1;
      param_2[1] = -(float)*(undefined8 *)(param_2 + 1) * fVar1;
      param_2 = param_2 + 2;
    } while (uVar2 != uVar3);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x30040a04.
 * REA evidence: ev_6fdbb4ff6b4deb89fa1cdcbcaa99740c4777adb58bbb18a92414740dc111a0c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_30040a04(float *param_1,uint param_2,int param_3,uint param_4)

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
  float in_register_00000100;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  uint uVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  uint uVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  float *pfStack_cc;
  float *pfStack_c8;
  float *pfStack_c4;
  float *pfStack_c0;
  float *pfStack_bc;
  float *pfStack_b8;
  uint uStack_ac;
  
  fVar22 = DAT_ram_4009f918;
  uVar38 = param_2;
  uStack_ac = param_4;
  while( true ) {
    uVar31 = uVar38 >> 3;
    pfVar30 = param_1 + uVar31 * 8;
    pfVar35 = pfVar30 + uVar31 * -6;
    pfVar29 = pfVar35 + uVar31 * 8;
    pfVar24 = pfVar29 + uVar31 * -6;
    pfVar34 = pfVar24 + uVar31 * 8;
    pfVar28 = pfVar34 + uVar31 * -6;
    pfVar27 = pfVar28 + uVar31 * 8;
    uVar26 = 0;
    pfVar23 = param_1;
    do {
      fVar1 = *pfVar23 + *pfVar30;
      fVar2 = *pfVar24 + *pfVar34;
      fVar3 = (float)*(undefined8 *)pfVar28 + *pfVar27;
      fVar4 = *pfVar35 + *pfVar29;
      fVar10 = *pfVar23 - *pfVar30;
      fVar11 = *pfVar35 - *pfVar29;
      fVar5 = fVar1 + fVar2;
      fVar12 = (float)*(undefined8 *)pfVar28 - *pfVar27;
      fVar6 = fVar4 + fVar3;
      fVar4 = fVar4 - fVar3;
      fVar13 = *pfVar24 - *pfVar34;
      fVar1 = fVar1 - fVar2;
      fVar2 = fVar11 - fVar12;
      fVar11 = fVar11 + fVar12;
      uVar26 = uVar26 + uVar38;
      fVar8 = fVar2 * fVar22 + fVar10;
      *pfVar23 = fVar5 + fVar6;
      *pfVar30 = fVar5 - fVar6;
      fVar10 = -(fVar2 * fVar22) + fVar10;
      fVar2 = pfVar24[1] + pfVar34[1];
      fVar3 = pfVar23[1] + pfVar30[1];
      fVar5 = pfVar28[1] + pfVar27[1];
      fVar6 = pfVar35[1] + pfVar29[1];
      fVar14 = pfVar28[1] - pfVar27[1];
      fVar15 = pfVar35[1] - pfVar29[1];
      fVar12 = fVar3 + fVar2;
      fVar16 = pfVar24[1] - pfVar34[1];
      fVar7 = fVar6 + fVar5;
      fVar6 = fVar6 - fVar5;
      fVar5 = fVar15 + fVar14;
      fVar3 = fVar3 - fVar2;
      fVar17 = pfVar23[1] - pfVar30[1];
      fVar15 = fVar15 - fVar14;
      fVar2 = fVar5 * fVar22 + fVar16;
      fVar16 = -(fVar5 * fVar22) + fVar16;
      pfVar23[1] = fVar12 + fVar7;
      fVar5 = fVar11 * fVar22 + fVar13;
      fVar14 = fVar15 * fVar22 + fVar17;
      pfVar30[1] = fVar12 - fVar7;
      *pfVar24 = fVar1 + fVar6;
      fVar13 = -(fVar11 * fVar22) + fVar13;
      fVar17 = -(fVar15 * fVar22) + fVar17;
      *pfVar34 = fVar1 - fVar6;
      pfVar24[1] = fVar3 - fVar4;
      pfVar34[1] = fVar4 + fVar3;
      *pfVar35 = fVar8 + fVar2;
      *pfVar27 = fVar8 - fVar2;
      *pfVar29 = fVar10 + fVar16;
      *(ulonglong *)pfVar28 = (ulonglong)(uint)(fVar10 - fVar16);
      pfVar35[1] = fVar14 - fVar5;
      pfVar27[1] = fVar5 + fVar14;
      pfVar29[1] = fVar17 - fVar13;
      *(ulonglong *)(pfVar28 + 1) = (ulonglong)(uint)(fVar13 + fVar17);
      pfVar23 = pfVar23 + uVar38 * 2;
      pfVar30 = pfVar30 + uVar38 * 2;
      pfVar35 = pfVar35 + uVar38 * 2;
      pfVar29 = pfVar29 + uVar38 * 2;
      pfVar24 = pfVar24 + uVar38 * 2;
      pfVar34 = pfVar34 + uVar38 * 2;
      pfVar28 = pfVar28 + uVar38 * 2;
      pfVar27 = pfVar27 + uVar38 * 2;
    } while (uVar26 < param_2);
    if (uVar31 < 8) break;
    pfVar27 = (float *)(param_3 + uStack_ac * 0x18);
    pfVar34 = pfVar27 + uStack_ac * 4;
    pfStack_c8 = param_1 + uVar31 * 6 + 2;
    pfVar23 = pfVar34 + uStack_ac * 2;
    pfStack_b8 = param_1 + (uVar31 + 1) * 2;
    pfStack_bc = param_1 + uVar31 * 10 + 2;
    pfStack_c0 = param_1 + uVar31 * 4 + 2;
    pfStack_c4 = param_1 + uVar31 * 0xc + 2;
    pfStack_cc = param_1 + uVar31 * 0xe + 2;
    pfVar28 = param_1 + uVar31 * 8 + 2;
    pfVar24 = pfVar23 + uStack_ac * 2;
    uVar26 = 1;
    iVar40 = 0;
    do {
      fVar1 = pfVar24[1];
      fVar2 = *pfVar27;
      iVar40 = iVar40 + uStack_ac;
      pfVar35 = (float *)(param_3 + iVar40 * 8);
      pfVar29 = pfVar35 + iVar40 * 2;
      fVar3 = *pfVar35;
      fVar4 = *pfVar29;
      fVar5 = pfVar29[iVar40 * -2 + 1];
      fVar6 = *pfVar34;
      fVar11 = *pfVar23;
      fVar12 = *pfVar24;
      fVar7 = pfVar27[1];
      fVar8 = pfVar34[1];
      fVar14 = pfVar23[1];
      pfVar25 = param_1 + uVar26 * 2;
      pfVar29 = pfStack_c4;
      pfVar35 = pfStack_c0;
      pfVar30 = pfStack_bc;
      pfVar32 = pfStack_b8;
      pfVar33 = pfVar28;
      pfVar36 = pfStack_c8;
      pfVar37 = pfStack_cc;
      uVar39 = uVar26;
      do {
        fVar16 = *pfVar36 - *pfVar37;
        fVar13 = (float)*(undefined8 *)pfVar32 - *pfVar30;
        fVar10 = fVar13 + fVar16;
        fVar18 = *pfVar35 - (float)*(undefined8 *)pfVar29;
        fVar19 = (*pfVar25 + (float)*(undefined8 *)pfVar33) -
                 (*pfVar35 + (float)*(undefined8 *)pfVar29);
        fVar15 = -((fVar13 - fVar16) * fVar22) + (*pfVar25 - (float)*(undefined8 *)pfVar33);
        fVar13 = fVar10 * fVar22 + fVar18;
        *pfVar25 = in_register_00000100 +
                   (float)*(undefined8 *)pfVar32 + *pfVar30 + *pfVar36 + *pfVar37;
        fVar16 = (float)*(undefined8 *)(pfVar32 + 1) - pfVar30[1];
        fVar20 = pfVar25[1] - (float)*(undefined8 *)(pfVar33 + 1);
        fVar18 = -(fVar10 * fVar22) + fVar18;
        uVar39 = uVar39 + uVar38;
        fVar10 = fVar16 - (pfVar36[1] - pfVar37[1]);
        fVar16 = fVar16 + (pfVar36[1] - pfVar37[1]);
        fVar17 = fVar10 * fVar22 + fVar20;
        fVar20 = -(fVar10 * fVar22) + fVar20;
        fVar9 = -(fVar16 * fVar22) + in_register_00000100;
        fVar10 = fVar15 + fVar9;
        fVar21 = fVar19 - in_register_00000100;
        fVar15 = fVar15 - fVar9;
        fVar9 = fVar17 - fVar13;
        fVar13 = fVar13 + fVar17;
        fVar16 = in_register_00000100 - (fVar16 * fVar22 + in_register_00000100);
        fVar17 = fVar20 - fVar18;
        pfVar25[1] = in_register_00000100;
        *pfVar33 = in_register_00000100;
        pfVar33[1] = in_register_00000100;
        *pfVar35 = fVar4 * (fVar19 + in_register_00000100) + in_register_00000100;
        pfVar35[1] = in_register_00000100;
        *pfVar29 = fVar11 * fVar21 + in_register_00000100;
        pfVar29[1] = fVar11 * in_register_00000100 - fVar14 * fVar21;
        *(ulonglong *)(pfVar32 + 1) =
             (ulonglong)(uint)(fVar3 * fVar9 - fVar5 * in_register_00000100);
        *pfVar32 = fVar3 * in_register_00000100 + fVar5 * fVar9;
        *pfVar37 = fVar12 * fVar16 + fVar1 * fVar13;
        pfVar37[1] = fVar12 * fVar13 - fVar1 * fVar16;
        *(ulonglong *)pfVar30 = (ulonglong)(uint)(fVar6 * fVar10 + fVar8 * fVar17);
        *(ulonglong *)(pfVar30 + 1) = (ulonglong)(uint)(fVar6 * fVar17 - fVar8 * fVar10);
        *pfVar36 = fVar2 * fVar15 + in_register_00000100;
        pfVar36[1] = fVar2 * (fVar18 + fVar20) - fVar7 * fVar15;
        pfVar25 = pfVar25 + uVar38 * 2;
        pfVar33 = pfVar33 + uVar38 * 2;
        pfVar32 = pfVar32 + uVar38 * 2;
        pfVar30 = pfVar30 + uVar38 * 2;
        pfVar35 = pfVar35 + uVar38 * 2;
        pfVar29 = pfVar29 + uVar38 * 2;
        pfVar36 = pfVar36 + uVar38 * 2;
        pfVar37 = pfVar37 + uVar38 * 2;
      } while (uVar39 < param_2);
      uVar26 = uVar26 + 1;
      pfVar28 = pfVar28 + 2;
      pfVar27 = pfVar27 + uStack_ac * 6;
      pfVar34 = pfVar34 + uStack_ac * 10;
      pfVar23 = pfVar23 + uStack_ac * 0xc;
      pfVar24 = pfVar24 + uStack_ac * 0xe;
      pfStack_b8 = pfStack_b8 + 2;
      pfStack_bc = pfStack_bc + 2;
      pfStack_c0 = pfStack_c0 + 2;
      pfStack_c4 = pfStack_c4 + 2;
      pfStack_c8 = pfStack_c8 + 2;
      pfStack_cc = pfStack_cc + 2;
    } while (uVar31 != uVar26);
    uStack_ac = uStack_ac * 8 & 0xffff;
    uVar38 = uVar31;
  }
  return;
}


/* NanoCore 1.12, address 0x30040fc4.
 * REA evidence: ev_c7eef5ecc72cd88c7d8f9fcc6536da506ab29a050045ae574268ec8c2229b42c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
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
  
  fVar3 = DAT_ram_4009675c;
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


