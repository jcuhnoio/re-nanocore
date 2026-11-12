/* NanoCore 1.12: nc_reverb_shimmer_configure at 0x40083f32.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_2e5da3a1976ee997444bf897485e7ae8a6e15eb8135e35f35731fe0f9bf040e4
 * Source: analysis/rea-1.12-effects/results/03611-export-0x40083f32.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_shimmer_configure(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if ((*(char *)(param_1 + 0x18) != *(char *)(param_2 + 5)) ||
       (*(int *)(param_1 + 0x20) != param_2[7])) {
      *(undefined1 *)(param_1 + 0x45) = 1;
    }
    puVar4 = (undefined4 *)(param_1 + 4);
    puVar5 = param_2 + 0x10;
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *puVar4 = *param_2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      param_2 = param_2 + 4;
      puVar4 = puVar4 + 4;
    } while (param_2 != puVar5);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}

