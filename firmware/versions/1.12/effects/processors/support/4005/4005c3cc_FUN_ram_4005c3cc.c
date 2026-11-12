/* NanoCore 1.12: FUN_ram_4005c3cc at 0x4005c3cc.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_bc496733d727e682ba55b5bfe63e65a809bcadbc1c23d0c38b6d23182380a39d
 * Source: analysis/rea-1.12-effects/results/03458-export-0x4005c3cc.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_4005c3cc(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  
  fVar1 = DAT_ram_4009672c;
  if (param_2 == (float *)0x0) {
    return;
  }
  fVar6 = (float)DAT_ram_4009f060;
  if (0.0 <= (float)param_1) {
    fVar6 = DAT_ram_4009b140;
  }
  *(undefined8 *)(param_2 + 0x17) = param_1;
  fVar4 = *param_2;
  if (*param_2 < fVar1) {
    fVar4 = fVar1;
  }
  fVar2 = (float)FUN_ram_40000d44(DAT_ram_40099f38,(float)param_1 / DAT_ram_40099f70);
  fVar4 = DAT_ram_4009f054 / fVar4;
  fVar3 = (float)FUN_ram_400009d2(fVar4);
  fVar3 = fVar3 / (fVar6 + fVar6);
  fVar4 = (float)FUN_ram_40000712(fVar4);
  fVar6 = fVar1 / (fVar3 / fVar2 + fVar1);
  uVar5 = (ulonglong)(uint)(fVar4 * DAT_ram_40096744 * fVar6);
  *(ulonglong *)(param_2 + 9) = uVar5;
  *(ulonglong *)(param_2 + 10) = (ulonglong)(uint)((-(fVar2 * fVar3) + fVar1) * fVar6);
  *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)((fVar2 * fVar3 + fVar1) * fVar6);
  *(ulonglong *)(param_2 + 0xc) = (ulonglong)(uint)((fVar1 - fVar3 / fVar2) * fVar6);
  *(ulonglong *)(param_2 + 0xb) = uVar5;
  return;
}

