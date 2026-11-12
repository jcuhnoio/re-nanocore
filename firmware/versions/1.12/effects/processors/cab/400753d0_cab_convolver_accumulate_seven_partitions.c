/* NanoCore 1.12: cab_convolver_accumulate_seven_partitions at 0x400753d0.
 * Role: Complex multiply-accumulate across seven spectrum-history partitions.
 * REA: ev_f9d3a59b9cfe28d9e5fb43ea9fcbde3858f3742b3a925a77ebd89a23c165496b
 * Source: analysis/rea-1.12/results/03571-export-0x400753d0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void cab_convolver_accumulate_seven_partitions(int param_1)

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
  float fVar23;
  float fVar24;
  float fVar25;
  ulonglong *puVar26;
  uint uVar27;
  float *pfVar28;
  float *pfVar29;
  int iVar30;
  undefined8 *puVar31;
  int iVar32;
  float *pfVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float *local_1c [4];
  float *pfStack_c;
  undefined8 *puStack_8;
  float *pfStack_4;
  
  uVar27 = (uint)*(ushort *)(param_1 + 0x5220);
  iVar30 = 0;
  do {
    while( true ) {
      local_1c[iVar30] = (float *)(uVar27 * 0x400 + 0x1c18 + param_1);
      iVar32 = iVar30 + 1;
      if (uVar27 != 0) break;
      if (iVar32 == 7) goto LAB_ram_40075412;
      local_1c[iVar32] = (float *)(param_1 + 0x3418);
      iVar30 = iVar30 + 2;
      uVar27 = 5;
      if (iVar30 == 7) goto LAB_ram_40075412;
    }
    uVar27 = uVar27 - 1;
    iVar30 = iVar32;
  } while (iVar32 != 7);
LAB_ram_40075412:
  fVar1 = local_1c[1][1];
  fVar2 = local_1c[0][1];
  fVar3 = local_1c[2][1];
  fVar4 = local_1c[3][1];
  fVar5 = pfStack_c[1];
  uVar35 = *(undefined8 *)((int)puStack_8 + 4);
  fVar6 = pfStack_4[1];
  pfVar33 = (float *)(param_1 + 0x820);
  puVar31 = (undefined8 *)(param_1 + 0x1820);
  puVar26 = (ulonglong *)(param_1 + 0x3c20);
  *(float *)(param_1 + 0x3c18) =
       *pfStack_4 * *(float *)(param_1 + 0x1818) +
       *(float *)(param_1 + 0x1418) * (float)*puStack_8 +
       (float)*(undefined8 *)(param_1 + 0x1018) * *pfStack_c +
       *(float *)(param_1 + 0xc18) * *local_1c[3] +
       *(float *)(param_1 + 0x818) * *local_1c[2] +
       *local_1c[0] * (float)*(undefined8 *)(param_1 + 0x18) +
       *(float *)(param_1 + 0x418) * *local_1c[1];
  *(float *)(param_1 + 0x3c1c) =
       fVar6 * *(float *)(param_1 + 0x181c) +
       *(float *)(param_1 + 0x141c) * (float)uVar35 +
       (float)*(undefined8 *)(param_1 + 0x101c) * fVar5 +
       *(float *)(param_1 + 0xc1c) * fVar4 +
       *(float *)(param_1 + 0x81c) * fVar3 +
       fVar2 * (float)*(undefined8 *)(param_1 + 0x1c) + *(float *)(param_1 + 0x41c) * fVar1;
  pfVar28 = pfStack_4 + 2;
  do {
    fVar1 = pfVar33[-0x1ff];
    fVar2 = local_1c[1][3];
    fVar3 = pfVar33[-0x100];
    fVar4 = pfVar33[-0xff];
    fVar5 = local_1c[0][3];
    fVar6 = pfVar33[-0x200];
    fVar7 = local_1c[2][3];
    fVar8 = *pfVar33;
    fVar9 = pfVar33[1];
    fVar10 = local_1c[0][2];
    fVar11 = local_1c[1][2];
    pfVar29 = pfVar28 + 2;
    fVar12 = pfVar33[0x101];
    fVar13 = local_1c[3][3];
    fVar14 = local_1c[2][2];
    fVar15 = pfVar33[0x100];
    fVar16 = *(float *)((int)puVar31 + -0x7fc);
    fVar17 = pfStack_c[3];
    fVar18 = local_1c[3][2];
    fVar19 = *(float *)(puVar31 + -0x100);
    fVar20 = pfStack_c[2];
    fVar21 = *(float *)(puVar31 + -0x80);
    fVar22 = *(float *)((int)puVar31 + -0x3fc);
    fVar36 = (float)*(undefined8 *)((int)puStack_8 + 0xc);
    fVar23 = pfVar28[1];
    uVar35 = *puVar31;
    fVar24 = *(float *)((int)puVar31 + 4);
    fVar34 = (float)puStack_8[1];
    fVar25 = *pfVar28;
    pfVar33 = pfVar33 + 2;
    *puVar26 = (ulonglong)
               (uint)((fVar10 * fVar6 - fVar5 * fVar1) + (fVar11 * fVar3 - fVar2 * fVar4) +
                      (fVar14 * fVar8 - fVar7 * fVar9) + (fVar18 * fVar15 - fVar13 * fVar12) +
                      (fVar20 * fVar19 - fVar17 * fVar16) + (fVar34 * fVar21 - fVar36 * fVar22) +
                     (fVar25 * (float)uVar35 - fVar23 * fVar24));
    *(ulonglong *)((int)puVar26 + 4) =
         (ulonglong)
         (uint)(fVar10 * fVar1 + fVar5 * fVar6 + fVar11 * fVar4 + fVar2 * fVar3 +
                fVar14 * fVar9 + fVar7 * fVar8 + fVar18 * fVar12 + fVar13 * fVar15 +
                fVar20 * fVar16 + fVar17 * fVar19 + fVar34 * fVar22 + fVar36 * fVar21 +
               fVar25 * fVar24 + fVar23 * (float)uVar35);
    puVar31 = puVar31 + 1;
    puVar26 = puVar26 + 1;
    pfVar28 = pfVar29;
    local_1c[2] = local_1c[2] + 2;
    puStack_8 = puStack_8 + 1;
    pfStack_c = pfStack_c + 2;
    local_1c[3] = local_1c[3] + 2;
    local_1c[1] = local_1c[1] + 2;
    local_1c[0] = local_1c[0] + 2;
  } while (pfStack_4 + 0x100 != pfVar29);
  return;
}

