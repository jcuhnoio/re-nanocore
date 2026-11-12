/* NanoCore 1.12: FUN_ram_40094cda at 0x40094cda.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d7b42519f077e677eb3afb94a8182f647cefe324158b046f81ca339b49bd4732
 * Source: analysis/rea-1.12-effects/results/03698-export-0x40094cda.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40094cda(float param_1,float param_2,float param_3,float param_4,ulonglong *param_5,
                     int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)FUN_ram_40000d44(DAT_ram_40099f38,param_3 / DAT_ram_40099f70);
  param_4 = (param_1 * DAT_ram_4009f090) / param_4;
  fVar2 = (float)FUN_ram_400009d2(param_4);
  fVar2 = fVar2 / (param_2 + param_2);
  fVar3 = (float)FUN_ram_40000712(param_4);
  if (param_6 == 0) {
    fVar4 = fVar1 * fVar2 + DAT_ram_4009672c;
    fVar6 = fVar1 * fVar2;
    fVar5 = fVar3 * DAT_ram_40096744;
    fVar2 = fVar2 / fVar1;
    fVar1 = -fVar6 + DAT_ram_4009672c;
  }
  else {
    fVar4 = (fVar3 + DAT_ram_4009672c) * (float)DAT_ram_4009675c;
    fVar5 = -(fVar3 + DAT_ram_4009672c);
    fVar1 = fVar4;
  }
  fVar3 = fVar3 * DAT_ram_40096744;
  fVar6 = DAT_ram_4009672c - fVar2;
  fVar2 = fVar2 + DAT_ram_4009672c;
  *param_5 = (ulonglong)(uint)(fVar4 / fVar2);
  *(ulonglong *)((int)param_5 + 4) = (ulonglong)(uint)(fVar5 / fVar2);
  param_5[1] = (ulonglong)(uint)(fVar1 / fVar2);
  *(ulonglong *)((int)param_5 + 0xc) = (ulonglong)(uint)(fVar3 / fVar2);
  param_5[2] = (ulonglong)(uint)(fVar6 / fVar2);
  return;
}

