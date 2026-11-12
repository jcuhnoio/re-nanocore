/* NanoCore 1.12: nc_reverb_spring_helper_400a2630 at 0x400a2630.
 * Role: Direct callee closure inside copied Spring blob; semantic role not yet established
 * REA: ev_86fe2cb536baf3805fd3abed248500a254dbce1564184a34d9052505cc7d0b57
 * Source: analysis/rea-1.12-effects/results/03725-export-0x400a2630.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_helper_400a2630(int param_1,ushort *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = (uint)*param_2;
  uVar2 = uVar4 + param_4;
  if ((uVar4 < 0x40) || (0x684 < uVar2)) {
    puVar1 = (undefined8 *)((int)param_3 + param_4 * 4);
    if (param_4 != 0) {
      do {
        uVar6 = *param_3;
        uVar5 = uVar4 - 0x684;
        if (uVar4 < 0x684) {
          uVar5 = uVar4;
        }
        puVar3 = (undefined8 *)(param_1 + uVar5 * 4);
        *puVar3 = uVar6;
        param_3 = (undefined8 *)((int)param_3 + 4);
        if (uVar5 < 0x40) {
          *(int *)(puVar3 + 0x342) = (int)uVar6;
        }
        uVar4 = uVar4 + 1;
      } while (puVar1 != param_3);
    }
  }
  else {
    nc_reverb_spring_copy_samples(param_1 + uVar4 * 4,param_3,param_4);
  }
  if (0x683 < uVar2) {
    uVar2 = uVar2 - 0x684;
  }
  *param_2 = (ushort)uVar2;
  return;
}

