/* NanoCore 1.12: nc_reverb_spring_helper_400a1dac at 0x400a1dac.
 * Role: Direct callee closure inside copied Spring blob; semantic role not yet established
 * REA: ev_fc95189acbb2360406f00e3cfce207d78350d5bc392523615913a71de1b3ed32
 * Source: analysis/rea-1.12-effects/results/03722-export-0x400a1dac.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_helper_400a1dac(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 in_register_00000100;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2 + 1;
  while( true ) {
    nc_reverb_spring_allpass_cascade(in_register_00000100,param_3,puVar3,param_4,param_1);
    iVar1 = param_1 + 0x3c;
    do {
      iVar2 = iVar1 + 0x3c;
      nc_reverb_spring_allpass_cascade(in_register_00000100,puVar3,puVar3,param_4,iVar1);
      iVar1 = iVar2;
    } while (param_1 + 300 != iVar2);
    if (param_2 + 100 == puVar3) break;
    param_3 = puVar3 + -1;
    puVar3 = puVar3 + 0x21;
    param_1 = param_1 + 300;
  }
  puVar3 = param_2 + param_4;
  *param_2 = *puVar3;
  param_2[0x21] = puVar3[0x21];
  param_2[0x42] = puVar3[0x42];
  return;
}

