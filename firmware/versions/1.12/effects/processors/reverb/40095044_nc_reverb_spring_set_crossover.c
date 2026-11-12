/* NanoCore 1.12: nc_reverb_spring_set_crossover at 0x40095044.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_6848a8e47ba3f209ee60b8863db2b38e5f4fe93d65c1f865ea3e7113571e539f
 * Source: analysis/rea-1.12-effects/results/03701-export-0x40095044.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_set_crossover(float param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float in_register_00000100;
  float *pfVar8;
  ulonglong *puVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar18 = DAT_ram_400a1480;
  fVar15 = DAT_ram_400a147c;
  fVar14 = DAT_ram_400a1478;
  fVar16 = DAT_ram_400a0a00;
  fVar7 = DAT_ram_4009f090;
  uVar6 = DAT_ram_40099f38;
  fVar5 = (float)DAT_ram_4009675c;
  fVar4 = DAT_ram_40096744;
  fVar2 = DAT_ram_4009672c;
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 < 0.0) {
    fVar19 = 0.0;
    fVar20 = DAT_ram_4009b12c;
  }
  else {
    fVar20 = DAT_ram_40099f60;
    fVar19 = DAT_ram_4009672c;
    if (param_1 <= DAT_ram_4009672c) {
      fVar20 = (param_1 - (float)DAT_ram_4009675c) * DAT_ram_4009a330;
      fVar19 = param_1;
    }
  }
  fVar1 = (float)*param_2 * (float)DAT_ram_4009675c;
  *(float *)(param_2 + 1) = fVar19;
  pfVar12 = (float *)0x400a1510;
  pfVar8 = (float *)(param_2 + 0xbf7);
  pfVar10 = (float *)&DAT_ram_400a14c0;
  iVar11 = 0x400a1490;
  while( true ) {
    pfVar12 = pfVar12 + 1;
    fVar13 = (float)FUN_ram_40000d44(uVar6,(fVar16 * fVar20 + fVar14) / in_register_00000100);
    fVar18 = (fVar18 * fVar7) / fVar1;
    fVar14 = (float)FUN_ram_400009d2(fVar18);
    fVar14 = fVar14 / (fVar15 + fVar15);
    fVar15 = (float)FUN_ram_40000712(fVar18);
    fVar18 = fVar14 / fVar13 + fVar2;
    fVar15 = (fVar15 * fVar4) / fVar18;
    pfVar8[1] = fVar15;
    pfVar8[3] = fVar15;
    pfVar8[2] = (-(fVar13 * fVar14) + fVar2) / fVar18;
    pfVar8[4] = (fVar2 - fVar14 / fVar13) / fVar18;
    *pfVar8 = (fVar13 * fVar14 + fVar2) / fVar18;
    fVar18 = pfVar10[3];
    fVar14 = pfVar10[4];
    fVar16 = (float)FUN_ram_40000d44(uVar6,(fVar16 * fVar20 + pfVar10[5]) / in_register_00000100);
    fVar18 = (fVar18 * fVar7) / fVar1;
    fVar15 = (float)FUN_ram_400009d2(fVar18);
    fVar15 = fVar15 / (fVar14 + fVar14);
    fVar14 = (float)FUN_ram_40000712(fVar18);
    fVar18 = fVar15 / fVar16 + fVar2;
    uVar17 = (ulonglong)(uint)((fVar14 * fVar4) / fVar18);
    *(ulonglong *)(pfVar8 + 0x1d) = uVar17;
    *(ulonglong *)(pfVar8 + 0x1f) = uVar17;
    *(ulonglong *)(pfVar8 + 0x1c) = (ulonglong)(uint)((fVar16 * fVar15 + fVar2) / fVar18);
    *(ulonglong *)(pfVar8 + 0x1e) = (ulonglong)(uint)((-(fVar16 * fVar15) + fVar2) / fVar18);
    *(ulonglong *)(pfVar8 + 0x20) = (ulonglong)(uint)((fVar2 - fVar15 / fVar16) / fVar18);
    fVar18 = DAT_ram_4009a644;
    puVar3 = PTR_entry_ram_40096740;
    if (pfVar8 + 7 == (float *)((int)param_2 + 0x600c)) break;
    fVar18 = *(float *)(iVar11 + 0x18);
    fVar15 = *(float *)(iVar11 + 0x1c);
    fVar14 = *(float *)(iVar11 + 0x20);
    fVar16 = *pfVar12;
    pfVar8 = pfVar8 + 7;
    pfVar10 = pfVar10 + 3;
    iVar11 = iVar11 + 0xc;
  }
  uVar17 = (ulonglong)(uint)DAT_ram_400a1484;
  puVar9 = (ulonglong *)0x400a14f0;
  pfVar8 = (float *)(param_2 + 0x2648);
  fVar15 = DAT_ram_400a1484;
  if (fVar19 >= fVar5) goto LAB_ram_400952b8;
  do {
    *pfVar8 = fVar2 - (((fVar5 - fVar19) + (fVar5 - fVar19)) * (fVar18 - (float)uVar17) +
                      (float)uVar17);
    while( true ) {
      puVar9 = (ulonglong *)((int)puVar9 + 4);
      if (puVar9 == (ulonglong *)0x400a1510) {
        return;
      }
      pfVar8 = pfVar8 + 1;
      uVar17 = *puVar9;
      fVar15 = (float)uVar17;
      if (fVar19 < fVar5) break;
LAB_ram_400952b8:
      *pfVar8 = fVar2 - (-(in_register_00000100 * (float)puVar3) + fVar2) * fVar15;
    }
  } while( true );
}

