/* NanoCore 1.12: FUN_ram_4009531a at 0x4009531a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_5e513a5979c867954224abdcbe13220f24002cc78178bea2e4e1401bae9ae87f
 * Source: analysis/rea-1.12-effects/results/03702-export-0x4009531a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_4009531a(float param_1,float *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float *pfVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  
  memset(param_2,0,0x16f74);
  uVar2 = DAT_ram_400a148c;
  uVar3 = DAT_ram_400a1488;
  fVar5 = (float)DAT_ram_4009675c;
  if (param_1 <= DAT_ram_40099f28) {
    param_1 = DAT_ram_4009f078;
  }
  uVar11 = 0;
  *param_2 = param_1;
  pfVar7 = param_2 + 0x17e7;
  iVar10 = 0;
  puVar6 = &DAT_ram_400a14c0;
  puVar9 = (undefined4 *)0x400a1490;
  while( true ) {
    param_1 = param_1 * fVar5;
    bVar1 = iVar10 == 0;
    iVar10 = iVar10 + 1;
    FUN_ram_40094cda(uVar2,uVar3,uVar11,param_1,pfVar7,bVar1);
    FUN_ram_40094cda(*puVar6,puVar6[1],puVar6[2],param_1,pfVar7 + 0x1c,bVar1);
    fVar4 = DAT_ram_4009672c;
    pfVar7 = pfVar7 + 7;
    if (iVar10 == 4) break;
    param_1 = *param_2;
    uVar2 = puVar9[3];
    uVar3 = puVar9[4];
    uVar11 = puVar9[5];
    puVar6 = puVar6 + 3;
    puVar9 = puVar9 + 3;
  }
  uVar12 = (ulonglong)DAT_ram_400a1484;
  puVar8 = (ulonglong *)0x400a14f0;
  pfVar7 = param_2 + 0x4c90;
  while( true ) {
    puVar8 = (ulonglong *)((int)puVar8 + 4);
    *pfVar7 = fVar4 - (float)uVar12;
    if (pfVar7 + 1 == param_2 + 0x4c98) break;
    uVar12 = *puVar8;
    pfVar7 = pfVar7 + 1;
  }
  FUN_ram_40094dda(DAT_ram_4009fa04,param_2);
  nc_reverb_spring_set_decay(fVar4,param_2);
  nc_reverb_spring_set_crossover(fVar5,param_2);
  return;
}

