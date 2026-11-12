/* NanoCore 1.12 analysis module: unresolved/bank_3/block_30047000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x30047928.
 * REA evidence: ev_4a2bf7bf0f85d49fd2ed20f9cf7bec8bedc719bc46b0833413328deee2682121
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_30047928(int *param_1,float *param_2,int param_3)

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
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  if (((param_1 != (int *)0x0) && (iVar19 = *param_1, iVar19 != 0)) && (param_3 != 0)) {
    iVar18 = param_1[1];
    if (iVar18 == 2) {
      fVar1 = *(float *)(iVar19 + 0x38);
      fVar2 = *(float *)(iVar19 + 0x3c);
      fVar3 = *(float *)(iVar19 + 0x40);
      fVar4 = *(float *)(iVar19 + 0x44);
      fVar5 = *(float *)(iVar19 + 0x48);
      fVar6 = *(float *)(iVar19 + 0x8c);
      fVar7 = *(float *)(iVar19 + 0x90);
      fVar8 = *(float *)(iVar19 + 0x94);
      fVar9 = *(float *)(iVar19 + 0x98);
      fVar10 = *(float *)(iVar19 + 0x9c);
      uVar25 = *(ulonglong *)(iVar19 + 0x4c);
      uVar29 = *(ulonglong *)(iVar19 + 0x50);
      fVar31 = *(float *)(iVar19 + 0xa0);
      fVar30 = *(float *)(iVar19 + 0xa4);
      pfVar17 = param_2;
      do {
        pfVar16 = pfVar17 + 1;
        fVar26 = (float)*(undefined8 *)pfVar17;
        fVar11 = fVar1 * fVar26 + (float)uVar25;
        fVar22 = fVar6 * fVar11 + fVar31;
        uVar25 = (ulonglong)(uint)(fVar4 * fVar11 + fVar2 * fVar26 + (float)uVar29);
        *pfVar17 = fVar22;
        uVar29 = (ulonglong)(uint)(fVar3 * fVar26 + fVar5 * fVar11);
        fVar31 = fVar9 * fVar22 + fVar7 * fVar11 + fVar30;
        fVar30 = fVar8 * fVar11 + fVar10 * fVar22;
        pfVar17 = pfVar16;
      } while (param_2 + param_3 != pfVar16);
      *(ulonglong *)(iVar19 + 0x4c) = uVar25;
      *(ulonglong *)(iVar19 + 0x50) = uVar29;
      *(float *)(iVar19 + 0xa0) = fVar31;
      *(float *)(iVar19 + 0xa4) = fVar30;
      return;
    }
    if (iVar18 == 3) {
      fVar1 = *(float *)(iVar19 + 0x38);
      fVar2 = *(float *)(iVar19 + 0x3c);
      fVar3 = *(float *)(iVar19 + 0x40);
      uVar24 = *(undefined8 *)(iVar19 + 0x44);
      uVar23 = *(undefined8 *)(iVar19 + 0x48);
      fVar4 = *(float *)(iVar19 + 0x8c);
      fVar5 = *(float *)(iVar19 + 0x90);
      fVar6 = *(float *)(iVar19 + 0x94);
      fVar7 = *(float *)(iVar19 + 0x98);
      fVar8 = *(float *)(iVar19 + 0x9c);
      fVar9 = *(float *)(iVar19 + 0xe0);
      fVar10 = *(float *)(iVar19 + 0xe4);
      fVar31 = *(float *)(iVar19 + 0xe8);
      fVar30 = *(float *)(iVar19 + 0xec);
      fVar11 = *(float *)(iVar19 + 0xf0);
      fVar22 = *(float *)(iVar19 + 0x4c);
      uVar25 = *(ulonglong *)(iVar19 + 0x50);
      fVar26 = *(float *)(iVar19 + 0xa0);
      fVar27 = *(float *)(iVar19 + 0xa4);
      fVar32 = *(float *)(iVar19 + 0xf4);
      fVar28 = *(float *)(iVar19 + 0xf8);
      pfVar17 = param_2;
      do {
        fVar12 = *pfVar17;
        pfVar16 = pfVar17 + 1;
        fVar13 = fVar1 * fVar12 + fVar22;
        fVar14 = fVar4 * fVar13 + fVar26;
        fVar22 = (float)uVar24 * fVar13 + fVar2 * fVar12 + (float)uVar25;
        fVar15 = fVar9 * fVar14 + fVar32;
        uVar25 = (ulonglong)(uint)(fVar3 * fVar12 + (float)uVar23 * fVar13);
        fVar26 = fVar7 * fVar14 + fVar5 * fVar13 + fVar27;
        *pfVar17 = fVar15;
        fVar32 = fVar30 * fVar15 + fVar10 * fVar14 + fVar28;
        fVar27 = fVar6 * fVar13 + fVar8 * fVar14;
        fVar28 = fVar31 * fVar14 + fVar11 * fVar15;
        pfVar17 = pfVar16;
      } while (param_2 + param_3 != pfVar16);
      *(float *)(iVar19 + 0x4c) = fVar22;
      *(ulonglong *)(iVar19 + 0x50) = uVar25;
      *(float *)(iVar19 + 0xa0) = fVar26;
      *(float *)(iVar19 + 0xa4) = fVar27;
      *(float *)(iVar19 + 0xf4) = fVar32;
      *(float *)(iVar19 + 0xf8) = fVar28;
    }
    else {
      iVar21 = 0;
      uVar20 = 0;
      if (iVar18 != 0) {
        while( true ) {
          FUN_ram_400955dc(iVar19 + iVar21 + 0x2c,param_2,param_2,param_3);
          uVar20 = uVar20 + 1;
          iVar21 = iVar21 + 0x54;
          if ((uint)param_1[1] <= uVar20) break;
          iVar19 = *param_1;
        }
      }
    }
    return;
  }
  return;
}


