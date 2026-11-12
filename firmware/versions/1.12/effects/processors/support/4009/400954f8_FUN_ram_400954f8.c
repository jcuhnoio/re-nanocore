/* NanoCore 1.12: FUN_ram_400954f8 at 0x400954f8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_8f499bc8c9b1b686dd661ea679771e6df519e467ebb3d0d164b98956952a4744
 * Source: analysis/rea-1.12-effects/results/03706-export-0x400954f8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_400954f8(undefined8 *param_1,undefined8 *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_4 >> 2;
  puVar2 = param_2;
  puVar3 = param_1;
  pfVar4 = param_3;
  uVar5 = uVar1;
  if (uVar1 != 0) {
    do {
      uVar5 = uVar5 - 1;
      *pfVar4 = (float)*puVar3 + (float)*puVar2;
      pfVar4[1] = *(float *)((int)puVar3 + 4) + *(float *)((int)puVar2 + 4);
      pfVar4[2] = *(float *)(puVar3 + 1) + *(float *)(puVar2 + 1);
      pfVar4[3] = *(float *)((int)puVar3 + 0xc) + *(float *)((int)puVar2 + 0xc);
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      pfVar4 = pfVar4 + 4;
    } while (uVar5 != 0);
    param_1 = param_1 + uVar1 * 2;
    param_2 = param_2 + uVar1 * 2;
    param_3 = param_3 + uVar1 * 4;
  }
  if ((param_4 & 3) != 0) {
    puVar2 = (undefined8 *)((int)param_1 + (param_4 & 3) * 4);
    do {
      uVar7 = *param_1;
      uVar6 = *param_2;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_2 = (undefined8 *)((int)param_2 + 4);
      *param_3 = (float)uVar7 + (float)uVar6;
      param_3 = param_3 + 1;
    } while (param_1 != puVar2);
  }
  return;
}

