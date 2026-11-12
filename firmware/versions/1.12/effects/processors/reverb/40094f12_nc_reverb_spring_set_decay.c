/* NanoCore 1.12: nc_reverb_spring_set_decay at 0x40094f12.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_6fa43786e2071128d9f96412e3f37b65b1429302b34c834ad6c685dc08dadf18
 * Source: analysis/rea-1.12-effects/results/03700-export-0x40094f12.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_set_decay(ulonglong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar2 = DAT_ram_400a1460;
  fVar1 = DAT_ram_4009672c;
  if (param_2 == 0) {
    return;
  }
  fVar4 = (float)param_1;
  if (fVar4 < DAT_ram_4009a374) {
    param_1 = (ulonglong)(uint)DAT_ram_4009a374;
    fVar4 = DAT_ram_40099f30;
  }
  else if (DAT_ram_4009673c < fVar4) {
    param_1 = (ulonglong)(uint)DAT_ram_4009673c;
    fVar4 = DAT_ram_4009f2d4;
  }
  else {
    fVar4 = DAT_ram_4009672c / fVar4;
  }
  *(ulonglong *)(param_2 + 4) = param_1;
  fVar5 = (float)FUN_ram_40000d44(fVar2,fVar4);
  fVar4 = DAT_ram_400a1464;
  *(float *)(param_2 + 0x136bc) = fVar5 / fVar2;
  uVar6 = FUN_ram_40000d44(fVar4,fVar1 / (float)*(undefined8 *)(param_2 + 4) - fVar1);
  uVar3 = DAT_ram_400a1468;
  *(undefined4 *)(param_2 + 0x136b8) = uVar6;
  fVar5 = (float)FUN_ram_40000d44(uVar3,fVar1 / (float)*(undefined8 *)(param_2 + 4));
  fVar1 = DAT_ram_4009676c;
  *(float *)(param_2 + 0x15de8) = -fVar5;
  fVar5 = DAT_ram_400a145c;
  if (*(float *)(param_2 + 0x136bc) * fVar2 <= fVar1) {
    fVar5 = *(float *)(param_2 + 0x136bc) * DAT_ram_400a146c;
  }
  if (DAT_ram_400a1470 < *(float *)(param_2 + 0x136b8) * fVar4) {
    *(undefined4 *)(param_2 + 0x136b8) = DAT_ram_400a1474;
  }
  *(float *)(param_2 + 0x136bc) = fVar5;
  return;
}

