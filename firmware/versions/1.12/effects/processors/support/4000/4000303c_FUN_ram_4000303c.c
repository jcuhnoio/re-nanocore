/* NanoCore 1.12: FUN_ram_4000303c at 0x4000303c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_4026d224f851d54299075ce1e0c0d25fa302d9d68be67647d91daa5950c856c2
 * Source: analysis/rea-1.12-effects/results/01068-export-0x4000303c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 * FUN_ram_4000303c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)((int)param_1 + param_3);
  puVar3 = param_1;
  if ((3 < param_3) && ((((uint)param_1 ^ (uint)param_2) & 3) == 0)) {
    if (((uint)param_1 & 3) != 0) {
      iVar5 = 4 - ((uint)param_1 & 3);
      puVar2 = param_1;
      puVar4 = param_2;
      iVar6 = iVar5;
      do {
        param_2 = (undefined4 *)((int)puVar4 + 1);
        iVar6 = iVar6 + -1;
        puVar3 = (undefined4 *)((int)puVar2 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
        puVar2 = puVar3;
        puVar4 = param_2;
      } while (iVar6 != 0);
      param_3 = param_3 - iVar5;
      if (param_3 < 2) goto LAB_ram_400030be;
    }
    puVar2 = (undefined4 *)(((uint)puVar1 & 0xfffffffc) - 0x20);
    if (puVar3 <= puVar2) {
      param_3 = param_3 & 0x1f;
      do {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        puVar3[2] = param_2[2];
        puVar3[3] = param_2[3];
        puVar3[4] = param_2[4];
        puVar3[5] = param_2[5];
        puVar3[6] = param_2[6];
        puVar4 = param_2 + 7;
        param_2 = param_2 + 8;
        puVar3[7] = *puVar4;
        puVar3 = puVar3 + 8;
      } while (puVar3 <= puVar2);
    }
    puVar1 = (undefined4 *)(((uint)puVar1 & 0xfffffffc) - 4);
    if (puVar3 <= puVar1) {
      param_3 = param_3 & 3;
      puVar2 = puVar3;
      puVar4 = param_2;
      do {
        param_2 = puVar4 + 1;
        puVar3 = puVar2 + 1;
        *puVar2 = *puVar4;
        puVar2 = puVar3;
        puVar4 = param_2;
      } while (puVar3 <= puVar1);
    }
    puVar1 = (undefined4 *)((int)puVar3 + param_3);
  }
LAB_ram_400030be:
  if (param_3 != 0) {
    do {
      puVar2 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = *(undefined1 *)param_2;
      puVar3 = puVar2;
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (puVar2 < puVar1);
  }
  return param_1;
}

