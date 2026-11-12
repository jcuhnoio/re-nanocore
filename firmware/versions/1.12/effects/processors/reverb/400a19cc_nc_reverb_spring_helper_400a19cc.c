/* NanoCore 1.12: nc_reverb_spring_helper_400a19cc at 0x400a19cc.
 * Role: Direct callee closure inside copied Spring blob; semantic role not yet established
 * REA: ev_fb330b65fcf94a70fcf52ecda933352ae6034fdb268505ac2e510225cb1aef04
 * Source: analysis/rea-1.12-effects/results/03718-export-0x400a19cc.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_helper_400a19cc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  nc_reverb_spring_helper_400a1868(&DAT_ram_400a3884,param_1 + 0x5e5c,param_2);
  nc_reverb_spring_helper_400a1868(&DAT_ram_400a38c8,param_1 + 0x5f1c,param_3,param_4);
  iVar2 = param_1 + 0x5f9c;
  do {
    iVar5 = iVar2 + 0x1c;
    nc_reverb_spring_helper_400a17d8(iVar2,iVar2 + 0x70,param_2,param_3,param_4);
    iVar2 = iVar5;
  } while (iVar5 != param_1 + 0x600c);
  iVar2 = (param_4 + 0x1787) * 4;
  puVar1 = (undefined4 *)(param_1 + 0x5e1c);
  puVar3 = (undefined8 *)(iVar2 + param_1);
  do {
    puVar4 = (undefined8 *)((int)puVar3 + 4);
    *puVar1 = (int)*puVar3;
    puVar1[0x30] = *(undefined4 *)(puVar3 + 0x18);
    puVar1 = puVar1 + 1;
    puVar3 = puVar4;
  } while (puVar4 != (undefined8 *)(iVar2 + 0x40 + param_1));
  return;
}

