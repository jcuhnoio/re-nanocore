/* NanoCore 1.12: FUN_ram_400955dc at 0x400955dc.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_2de3b826ed2a5fb5aa7bac52a7288da1671a47b11141b73e9a4f12bebb641f9d
 * Source: analysis/rea-1.12-effects/results/03708-export-0x400955dc.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_400955dc(byte *param_1,float *param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  
  uVar14 = param_4 >> 4;
  puVar11 = *(undefined8 **)(param_1 + 8);
  puVar10 = *(ulonglong **)(param_1 + 4);
  uVar9 = (uint)*param_1;
  do {
    uVar19 = *puVar11;
    puVar7 = (undefined8 *)((int)puVar11 + 4);
    puVar8 = puVar11 + 1;
    fVar1 = *(float *)((int)puVar11 + 0xc);
    fVar2 = *(float *)(puVar11 + 2);
    uVar22 = *puVar10;
    uVar21 = *(ulonglong *)((int)puVar10 + 4);
    puVar11 = (undefined8 *)((int)puVar11 + 0x14);
    fVar18 = (float)uVar19;
    fVar17 = (float)*puVar7;
    fVar16 = (float)*puVar8;
    pfVar13 = param_3;
    pfVar12 = param_2;
    uVar15 = uVar14;
    if (uVar14 != 0) {
      do {
        fVar3 = *pfVar12;
        fVar5 = fVar18 * fVar3 + (float)uVar22;
        uVar15 = uVar15 - 1;
        *pfVar13 = fVar5;
        fVar20 = pfVar12[1];
        fVar6 = fVar18 * fVar20 + fVar1 * fVar5 + fVar17 * fVar3 + (float)uVar21;
        pfVar13[1] = fVar6;
        fVar4 = pfVar12[2];
        fVar5 = fVar18 * fVar4 + fVar1 * fVar6 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar5;
        pfVar13[2] = fVar5;
        fVar3 = pfVar12[3];
        fVar6 = fVar18 * fVar3 + fVar1 * fVar5 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar6;
        pfVar13[3] = fVar6;
        fVar20 = pfVar12[4];
        fVar5 = fVar18 * fVar20 + fVar1 * fVar6 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar5;
        pfVar13[4] = fVar5;
        fVar4 = pfVar12[5];
        fVar6 = fVar18 * fVar4 + fVar1 * fVar5 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar6;
        pfVar13[5] = fVar6;
        fVar3 = pfVar12[6];
        fVar5 = fVar18 * fVar3 + fVar1 * fVar6 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar5;
        pfVar13[6] = fVar5;
        fVar20 = pfVar12[7];
        fVar6 = fVar18 * fVar20 + fVar1 * fVar5 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar6;
        pfVar13[7] = fVar6;
        fVar4 = pfVar12[8];
        fVar5 = fVar18 * fVar4 + fVar1 * fVar6 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar5;
        pfVar13[8] = fVar5;
        fVar3 = pfVar12[9];
        fVar6 = fVar18 * fVar3 + fVar1 * fVar5 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar6;
        pfVar13[9] = fVar6;
        fVar20 = pfVar12[10];
        fVar5 = fVar18 * fVar20 + fVar1 * fVar6 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar5;
        pfVar13[10] = fVar5;
        fVar4 = pfVar12[0xb];
        fVar6 = fVar18 * fVar4 + fVar1 * fVar5 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar6;
        pfVar13[0xb] = fVar6;
        fVar3 = pfVar12[0xc];
        fVar5 = fVar18 * fVar3 + fVar1 * fVar6 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar5;
        pfVar13[0xc] = fVar5;
        fVar20 = pfVar12[0xd];
        fVar6 = fVar18 * fVar20 + fVar1 * fVar5 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar6;
        pfVar13[0xd] = fVar6;
        fVar4 = pfVar12[0xe];
        fVar5 = fVar18 * fVar4 + fVar1 * fVar6 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar5;
        pfVar13[0xe] = fVar5;
        fVar3 = pfVar12[0xf];
        fVar20 = fVar18 * fVar3 + fVar1 * fVar5 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar6;
        pfVar13[0xf] = fVar20;
        uVar22 = (ulonglong)(uint)(fVar1 * fVar20 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar5)
        ;
        uVar21 = (ulonglong)(uint)(fVar16 * fVar3 + fVar2 * fVar20);
        pfVar12 = pfVar12 + 0x10;
        pfVar13 = pfVar13 + 0x10;
      } while (uVar15 != 0);
      param_2 = param_2 + uVar14 * 0x10;
      pfVar13 = param_3 + uVar14 * 0x10;
    }
    if ((param_4 & 0xf) != 0) {
      pfVar12 = param_2 + (param_4 & 0xf);
      do {
        uVar19 = *(undefined8 *)param_2;
        param_2 = param_2 + 1;
        fVar20 = (float)uVar19;
        fVar3 = fVar18 * fVar20 + (float)uVar22;
        *pfVar13 = fVar3;
        uVar22 = (ulonglong)(uint)(fVar1 * fVar3 + fVar17 * fVar20 + (float)uVar21);
        uVar21 = (ulonglong)(uint)(fVar16 * fVar20 + fVar2 * fVar3);
        pfVar13 = pfVar13 + 1;
      } while (param_2 != pfVar12);
    }
    *puVar10 = uVar22;
    *(ulonglong *)((int)puVar10 + 4) = uVar21;
    uVar9 = uVar9 - 1;
    puVar10 = puVar10 + 1;
    param_2 = param_3;
  } while (uVar9 != 0);
  return;
}

