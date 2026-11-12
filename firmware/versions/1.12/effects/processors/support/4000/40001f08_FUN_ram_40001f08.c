/* NanoCore 1.12: FUN_ram_40001f08 at 0x40001f08.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_2abd5fc2329e72ce7bbe7773f0e26c349a6c7669a4f7d9af634b6fdb0ae83d3e
 * Source: analysis/rea-1.12-effects/results/01053-export-0x40001f08.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_40001f08(float param_1,float param_2)

{
  float fVar1;
  float in_register_00000100;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ABS(in_register_00000100);
  if ((uint)fVar2 < 0x32000000) {
    if ((int)param_1 == 0) {
      return DAT_ram_4009672c;
    }
    fVar5 = param_1 * param_1;
    fVar5 = fVar5 * (fVar5 * (fVar5 * (fVar5 * (fVar5 * (fVar5 * DAT_ram_400a44a8 + DAT_ram_400a44ac
                                                        ) + DAT_ram_400a44b0) + DAT_ram_400a44b4) +
                             DAT_ram_400a44b8) + DAT_ram_4009f668);
  }
  else {
    fVar1 = param_1 * param_1;
    fVar5 = (((((fVar1 * DAT_ram_400a44a8 + DAT_ram_400a44ac) * fVar1 + DAT_ram_400a44b0) * fVar1 +
              DAT_ram_400a44b4) * fVar1 + DAT_ram_400a44b8) * fVar1 + DAT_ram_4009f668) * fVar1;
    if (0x3e999999 < (uint)fVar2) {
      fVar4 = DAT_ram_400a44a4;
      fVar3 = DAT_ram_400a44a0;
      if ((uint)fVar2 < 0x3f480001) {
        fVar4 = (float)((int)fVar2 + -0x1000000);
        fVar3 = DAT_ram_4009672c - (float)((int)fVar2 + -0x1000000);
      }
      return fVar3 - ((fVar1 * (float)DAT_ram_4009675c - fVar4) -
                     (fVar1 * fVar5 - in_register_00000100 * param_2));
    }
  }
  return DAT_ram_4009672c -
         (param_1 * param_1 * (float)DAT_ram_4009675c -
         (param_1 * param_1 * fVar5 - in_register_00000100 * param_2));
}

