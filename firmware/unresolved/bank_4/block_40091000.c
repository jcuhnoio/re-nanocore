/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40091000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40091134.
 * REA evidence: ev_69ce0653fb638cb927a435976fbf1a1b7fbdbd687576abd0a82ff9ef0b4b0caf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40091134(ushort *param_1,float *param_2,int param_3,int param_4)

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
      goto LAB_ram_40091154;
    }
    if (param_4 == 0) {
      return;
    }
  }
  else {
LAB_ram_40091154:
    if (uVar2 == 0x100) {
LAB_ram_40091234:
      FUN_ram_40090d24(param_1,param_2);
    }
    else {
      if (uVar2 < 0x101) {
        if (uVar2 == 0x40) goto LAB_ram_400911aa;
        if (uVar2 < 0x41) {
          if (uVar2 == 0x10) goto LAB_ram_40091174;
          if (uVar2 == 0x20) goto LAB_ram_40091234;
        }
        else if (uVar2 == 0x80) {
LAB_ram_40091174:
          FUN_ram_40090bb0(param_1,param_2);
        }
        goto joined_r0x400911b6;
      }
      if (uVar2 == 0x800) goto LAB_ram_40091234;
      if (uVar2 < 0x801) {
        if (uVar2 == 0x200) goto LAB_ram_400911aa;
        if (uVar2 == 0x400) goto LAB_ram_40091174;
      }
      else if (uVar2 == 0x1000) {
LAB_ram_400911aa:
        FUN_ram_40091264(param_2,uVar2,*(undefined4 *)(param_1 + 2),1);
      }
    }
joined_r0x400911b6:
    if (param_4 == 0) goto joined_r0x400911ca;
  }
  FUN_ram_40000658(param_2,param_1[6],*(undefined4 *)(param_1 + 4));
joined_r0x400911ca:
  if ((param_3 == 1) && (fVar1 = DAT_ram_4009281c / (float)uVar2, uVar2 != 0)) {
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


/* NanoCore 1.10, address 0x40091264.
 * REA evidence: ev_cb6559a6a7795b8428ffe955562265fe4ad83cd07f1780bcc06dab7e395e4915
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40091264(float *param_1,uint param_2,int param_3,uint param_4)

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
  
  fVar22 = DAT_ram_400988f0;
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


/* NanoCore 1.10, address 0x40091824.
 * REA evidence: ev_82f29272ddadacabd2706e1fe3735bfb927bf56fc6e69ece66cd083e3ef2b64e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40091824(ushort *param_1,undefined8 *param_2,float *param_3)

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
  
  fVar3 = DAT_ram_40092864;
  fVar10 = (float)*(undefined8 *)((int)param_2 + 4);
  fVar10 = fVar10 + fVar10;
  uVar1 = *param_1;
  fVar7 = (float)*param_2 * (float)PTR_firmware_entry_ram_40092830;
  fVar2 = (float)*param_2 * (float)PTR_firmware_entry_ram_40092830;
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


/* NanoCore 1.10, address 0x400918c0.
 * REA evidence: ev_f604cc793c963b6297cf9b881dd650bda23d9c3fd7275e50a5d9e2a109f1d6e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400918c0(ushort *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  fVar3 = DAT_ram_40092864;
  puVar6 = *(undefined8 **)(param_1 + 10);
  iVar4 = *param_1 - 1;
  puVar5 = param_2 + iVar4;
  fVar1 = ((float)*param_2 - (float)param_2[*param_1]) * DAT_ram_40092864;
  *(ulonglong *)param_3 =
       (ulonglong)(uint)(((float)*param_2 + (float)param_2[*param_1]) * DAT_ram_40092864);
  *(ulonglong *)(param_3 + 1) = (ulonglong)(uint)fVar1;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar11 = *puVar5;
    fVar9 = (float)param_2[1];
    fVar2 = fVar9 - (float)uVar11;
    fVar8 = (float)*(undefined8 *)((int)puVar5 + 4);
    fVar7 = (float)*(undefined8 *)((int)param_2 + 0xc);
    fVar1 = fVar8 + fVar7;
    fVar12 = (float)puVar6[1];
    fVar10 = (float)*(undefined8 *)((int)puVar6 + 0xc);
    puVar5 = puVar5 + -1;
    param_3[2] = (-(fVar10 * fVar1) + -(fVar12 * fVar2) + (float)uVar11 + fVar9) * fVar3;
    param_3[3] = (-(fVar12 * fVar1) + fVar10 * fVar2 + (fVar7 - fVar8)) * fVar3;
    puVar6 = puVar6 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 2;
  }
  return;
}


/* NanoCore 1.10, address 0x40091946.
 * REA evidence: ev_77523c8a3eff91902c63b33f946ecf52f71035c486726b477ca08134fdea1697
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40091946(ushort *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *param_1 = param_1[8] >> 1;
  if (param_4 != 0) {
    FUN_ram_400918c0();
    FUN_ram_40091134(param_1,param_3,param_4,1);
    return;
  }
  FUN_ram_40091134(param_1,param_2,0,1);
  FUN_ram_40091824(param_1,param_2,param_3);
  return;
}


