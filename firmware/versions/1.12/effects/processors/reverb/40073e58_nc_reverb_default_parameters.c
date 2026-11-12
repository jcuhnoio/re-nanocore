/* NanoCore 1.12: nc_reverb_default_parameters at 0x40073e58.
 * Role: Default parameter table writer
 * REA: ev_d4743062e51f4786044fc00147dc56060c9c83b6146382e33abb6cc2326a6004
 * Source: analysis/rea-1.12-effects/results/03551-export-0x40073e58.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_default_parameters(float *param_1,uint param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  
  if ((param_1 == (float *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 * 4);
  fVar6 = DAT_ram_4009f9cc;
  fVar7 = DAT_ram_40099f7c;
  fVar3 = DAT_ram_4009b144;
  fVar4 = DAT_ram_40099f88;
  fVar5 = DAT_ram_40099f90;
  if ((param_3 < 8) &&
     (fVar6 = DAT_ram_4009f9d0, fVar7 = DAT_ram_4009a328, fVar3 = DAT_ram_4009f9d4,
     fVar4 = DAT_ram_4009f0bc, fVar5 = DAT_ram_4009f2dc, param_3 != 4)) {
    if (param_3 == 6) {
      *param_1 = DAT_ram_4009f230;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_4009a644;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009f0bc;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_4009f9dc;
        }
      }
    }
    else {
      if (param_3 == 7) {
        uVar8 = (ulonglong)(uint)(float)DAT_ram_4009675c;
        pfVar2 = param_1;
        do {
          *(ulonglong *)pfVar2 = uVar8;
          pfVar2 = pfVar2 + 1;
        } while (pfVar2 != param_1 + param_2);
        if (param_2 == 1) {
          return;
        }
        param_1[1] = DAT_ram_40099f94;
        return;
      }
      if (param_3 != 5) {
        if (param_3 < 4) {
          iVar1 = param_3 * 4;
          fVar6 = ((float)*(undefined8 *)(&DAT_ram_4009fa0c + iVar1) - (float)DAT_ram_4009675c) /
                  DAT_ram_4009b194;
          fVar7 = (float)*(undefined8 *)(&DAT_ram_4009fa1c + iVar1);
          fVar3 = (float)*(undefined8 *)(&DAT_ram_4009fa2c + iVar1);
          fVar4 = (float)*(undefined8 *)(&DAT_ram_4009fa3c + iVar1);
          fVar5 = (float)*(undefined8 *)(&DAT_ram_4009fa4c + iVar1);
        }
        goto LAB_ram_40073ee2;
      }
      *param_1 = DAT_ram_4009f9e0;
      if (param_2 != 1) {
        param_1[1] = 0.0;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009f9d4;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_4009a644;
        }
      }
    }
    if (4 < param_2) {
      param_1[4] = (float)DAT_ram_4009675c;
    }
  }
  else {
LAB_ram_40073ee2:
    *param_1 = fVar6;
    if (param_2 != 1) {
      param_1[1] = fVar7 / DAT_ram_4009a380;
      if (param_2 != 2) {
        param_1[2] = fVar3;
      }
      if (3 < param_2) {
        param_1[3] = fVar4;
      }
    }
    if (4 < param_2) {
      param_1[4] = fVar5;
    }
  }
  return;
}

