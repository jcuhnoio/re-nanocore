/* NanoCore 1.11 analysis module: unresolved/bank_3/block_30041000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x30041060.
 * REA evidence: ev_cf565b2f08d79f417d2683bd7682649e9cd3e2be1a317a91f192180afea55cb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_30041060(ushort *param_1,undefined8 *param_2,float *param_3)

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
  
  fVar3 = DAT_ram_40094634;
  puVar6 = *(undefined8 **)(param_1 + 10);
  iVar4 = *param_1 - 1;
  puVar5 = param_2 + iVar4;
  fVar1 = ((float)*param_2 - (float)param_2[*param_1]) * DAT_ram_40094634;
  *(ulonglong *)param_3 =
       (ulonglong)(uint)(((float)*param_2 + (float)param_2[*param_1]) * DAT_ram_40094634);
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


/* NanoCore 1.11, address 0x300410e6.
 * REA evidence: ev_dd926034a6f32014370cf15eb80189eb4f4d05f2381c3ffa77385c98c82f8cc9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_300410e6(ushort *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *param_1 = param_1[8] >> 1;
  if (param_4 != 0) {
    FUN_ram_30041060();
    FUN_ram_300408dc(param_1,param_3,param_4,1);
    return;
  }
  FUN_ram_300408dc(param_1,param_2,0,1);
  FUN_ram_30040fc4(param_1,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x3004113c.
 * REA evidence: ev_385e8f3247630d5d95d9de176c8260162b6cee94b6240253720582a296c2fe0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_3004113c(int param_1,int param_2,short *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2 + 1 >> 1;
  do {
    iVar4 = iVar4 + -1;
    puVar2 = (undefined4 *)(param_3[1] + param_1);
    puVar1 = (undefined4 *)(*param_3 + param_1);
    uVar3 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar3;
    uVar3 = puVar1[1];
    puVar1[1] = puVar2[1];
    puVar2[1] = uVar3;
    param_3 = param_3 + 2;
  } while (iVar4 != 0);
  return;
}


