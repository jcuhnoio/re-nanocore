/* NanoCore 1.12: nc_delay_bypass_copy at 0x4006066c.
 * Role: Copies mono/stereo or averages stereo to mono
 * REA: ev_ec35bd382d05a70960ffd14df79fe160ae2e6aae11ef1974da0f49c932c3c05f
 * Source: analysis/rea-1.12-effects/results/03481-export-0x4006066c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_delay_bypass_copy(float *param_1,float *param_2,float *param_3,float *param_4,int param_5,
                     int param_6)

{
  float fVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  fVar1 = (float)DAT_ram_4009675c;
  if (((param_1 == (float *)0x0) || (param_3 == (float *)0x0)) || (param_5 == 0)) {
    return;
  }
  if ((param_6 == 0) || (param_2 == (float *)0x0)) {
    if (param_1 != param_3) {
      param_3 = (float *)FUN_ram_4000303c(param_3,param_1,param_5 << 2);
    }
    param_2 = param_3;
    if (param_4 == (float *)0x0) {
      return;
    }
  }
  else {
    if (param_4 == (float *)0x0) {
      pfVar2 = param_1 + param_5;
      do {
        uVar4 = *(undefined8 *)param_1;
        uVar3 = *(undefined8 *)param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        *param_3 = ((float)uVar4 + (float)uVar3) * fVar1;
        param_3 = param_3 + 1;
      } while (pfVar2 != param_1);
      return;
    }
    if (param_1 != param_3) {
      FUN_ram_4000303c(param_3,param_1,param_5 << 2);
    }
  }
  if (param_2 == param_4) {
    return;
  }
  FUN_ram_4000303c(param_4,param_2,param_5 << 2);
  return;
}

