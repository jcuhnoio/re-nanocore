/* NanoCore 1.12: nc_amp_drive_schedule_crossfade at 0x400097e2.
 * Role: Schedules ceil(sample_rate * milliseconds / 1000) samples of interpolation using +0x84/+0x88/+0x8c.
 * REA: ev_42ca38e2709485edab77cc086dfe6b0f84aff8ead8cc9f6667ab40a2921c6b76
 * Source: analysis/rea-1.12/results/01318-export-0x400097e2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_amp_drive_schedule_crossfade(float param_1,int param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009672c < param_1) {
    param_1 = DAT_ram_4009672c;
  }
  uVar2 = _DAT_ram_3004f690;
  if (_DAT_ram_3004f690 == 0) {
    uVar2 = 0xac44;
  }
  uVar3 = FUN_ram_400002f4();
  fVar5 = *(float *)(param_2 + 0x84);
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (DAT_ram_4009672c < fVar5) {
    fVar5 = DAT_ram_4009672c;
  }
  if (ABS(param_1 - fVar5) < DAT_ram_40096748) {
    *(float *)(param_2 + 0x84) = param_1;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x8c) = 0;
  }
  else {
    lVar1 = (ulonglong)uVar2 * (ulonglong)param_3 + 999;
    iVar4 = FUN_ram_40003bf8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
    *(float *)(param_2 + 0x84) = fVar5;
    *(int *)(param_2 + 0x8c) = iVar4;
    *(float *)(param_2 + 0x88) = (param_1 - fVar5) / (float)iVar4;
  }
  FUN_ram_400002fa(uVar3);
  return;
}

