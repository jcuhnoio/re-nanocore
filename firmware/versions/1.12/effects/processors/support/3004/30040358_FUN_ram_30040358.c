/* NanoCore 1.12: FUN_ram_30040358 at 0x30040358.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_9fe131906ecb1919338b0c7c2ba24c37719d5c7ceac6fe381009e09dde5c6224
 * Source: analysis/rea-1.12-effects/results/01001-export-0x30040358.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
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

