/* NanoCore 1.12: FUN_ram_4009557c at 0x4009557c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_39414cdaef0632892fa658739737e1308feccf9e5b83a133bc2811c35031b1fd
 * Source: analysis/rea-1.12-effects/results/03707-export-0x4009557c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_4009557c(undefined8 *param_1,undefined8 *param_2,uint param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar4 = param_3 >> 2;
  uVar7 = 0;
  puVar1 = param_2;
  puVar2 = param_1;
  uVar3 = uVar4;
  if (uVar4 != 0) {
    do {
      uVar3 = uVar3 - 1;
      uVar7 = (ulonglong)
              (uint)((float)*(undefined8 *)((int)puVar2 + 0xc) *
                     (float)*(undefined8 *)((int)puVar1 + 0xc) +
                    (float)puVar2[1] * (float)puVar1[1] +
                    (float)*(undefined8 *)((int)puVar2 + 4) *
                    (float)*(undefined8 *)((int)puVar1 + 4) +
                    (float)*puVar2 * (float)*puVar1 + (float)uVar7);
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 2;
    } while (uVar3 != 0);
    param_1 = param_1 + uVar4 * 2;
    param_2 = param_2 + uVar4 * 2;
  }
  if ((param_3 & 3) != 0) {
    puVar1 = (undefined8 *)((int)param_1 + (param_3 & 3) * 4);
    do {
      uVar5 = *param_1;
      uVar6 = *param_2;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_2 = (undefined8 *)((int)param_2 + 4);
      uVar7 = (ulonglong)(uint)((float)uVar5 * (float)uVar6 + (float)uVar7);
    } while (param_1 != puVar1);
  }
  *param_4 = uVar7;
  return;
}

