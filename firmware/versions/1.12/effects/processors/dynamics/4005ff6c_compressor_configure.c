/* NanoCore 1.12: compressor_configure at 0x4005ff6c.
 * Role: Threshold, ratio, knee, attack, release and makeup configuration and coefficient calculation.
 * REA: ev_270ec4425fa1733874da830a5ff44a563748a8b19ba9d8efb3a70cf5c27ca072
 * Source: analysis/rea-1.12/results/03484-export-0x4005ff6c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void compressor_configure(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = DAT_ram_40099f50;
  uVar1 = DAT_ram_40099f38;
  fVar6 = DAT_ram_4009672c;
  if (param_7 == (undefined8 *)0x0) {
    return;
  }
  fVar5 = DAT_ram_4009672c;
  if (DAT_ram_4009672c <= param_2) {
    fVar5 = param_2;
  }
  if ((float)param_3 < 0.0) {
    param_3 = 0;
  }
  if ((float)param_4 < 0.0) {
    param_4 = 0;
  }
  if ((float)param_5 < 0.0) {
    param_5 = 0;
  }
  if (((((float)param_7[1] == (float)param_1) &&
       ((float)*(undefined8 *)((int)param_7 + 0xc) == fVar5)) &&
      ((float)param_7[2] == (float)param_3)) &&
     ((((float)*(undefined8 *)((int)param_7 + 0x14) == (float)param_4 &&
       ((float)param_7[3] == (float)param_5)) &&
      ((float)*(undefined8 *)((int)param_7 + 0x1c) == (float)param_6)))) {
    return;
  }
  param_7[1] = param_1;
  *(float *)((int)param_7 + 0xc) = fVar5;
  param_7[2] = param_3;
  *(undefined8 *)((int)param_7 + 0x14) = param_4;
  param_7[3] = param_5;
  *(undefined8 *)((int)param_7 + 0x1c) = param_6;
  uVar3 = FUN_ram_40000d44(uVar1,(float)param_6 / fVar2);
  fVar5 = (float)param_7[2] * DAT_ram_4009675c;
  param_7[4] = uVar3 & 0xffffffff;
  uVar4 = FUN_ram_40000d44(uVar1,(-fVar5 + (float)param_7[1]) / fVar2);
  *(undefined8 *)((int)param_7 + 0x24) = uVar4;
  fVar2 = (float)*param_7;
  if (fVar2 <= fVar6) {
    fVar5 = (float)*(undefined8 *)((int)param_7 + 0x14);
    fVar2 = fVar6;
  }
  else {
    fVar5 = (float)*(undefined8 *)((int)param_7 + 0x14);
  }
  if (fVar5 <= 0.0) {
    *(undefined4 *)(param_7 + 5) = 0;
    fVar6 = (float)param_7[3];
  }
  else {
    uVar4 = FUN_ram_40000bd8(DAT_ram_40096728 / (fVar5 * DAT_ram_4009f0ac * fVar2));
    param_7[5] = uVar4;
    fVar6 = (float)param_7[3];
  }
  if (0.0 < fVar6) {
    uVar4 = FUN_ram_40000bd8(DAT_ram_40096728 / (fVar6 * DAT_ram_4009f0ac * fVar2));
    *(undefined8 *)((int)param_7 + 0x2c) = uVar4;
    return;
  }
  *(undefined4 *)((int)param_7 + 0x2c) = 0;
  return;
}

