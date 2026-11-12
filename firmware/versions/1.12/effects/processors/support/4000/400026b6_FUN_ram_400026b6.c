/* NanoCore 1.12: FUN_ram_400026b6 at 0x400026b6.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_7b03d67db3ae04a3f527e2b90b7579b65c05a008839ea38cc194d34940391eb5
 * Source: analysis/rea-1.12-effects/results/01055-export-0x400026b6.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

ulonglong FUN_ram_400026b6(ulonglong param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_register_00000100;
  
  if ((0x31ffffff < (uint)ABS(in_register_00000100)) || ((int)(float)param_1 != 0)) {
    fVar2 = in_register_00000100 * in_register_00000100;
    fVar3 = in_register_00000100 * fVar2;
    fVar1 = (((fVar2 * DAT_ram_400a44c0 + DAT_ram_400a44c4) * fVar2 + DAT_ram_400a44c8) * fVar2 +
            DAT_ram_4009f5fc) * fVar2 + DAT_ram_4009f600;
    if (param_3 == 0) {
      return (ulonglong)(uint)((fVar2 * fVar1 + DAT_ram_4009f604) * fVar3 + in_register_00000100);
    }
    param_1 = (ulonglong)
              (uint)(in_register_00000100 -
                    (fVar3 * DAT_ram_4009f66c +
                    ((param_2 * (float)DAT_ram_4009675c - fVar3 * fVar1) * fVar2 - param_2)));
  }
  return param_1;
}

