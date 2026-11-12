/* NanoCore 1.12: FUN_ram_4000657e at 0x4000657e.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_7f691e4bfb6d9bddd0fe8972537435b87b7c4250e07affe4bcf32d8f7f6cb204
 * Source: analysis/rea-1.12-effects/results/01192-export-0x4000657e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_4000657e(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    FUN_ram_40005ef4();
    uVar2 = FUN_ram_4000638c(param_1);
    FUN_ram_40006092();
  }
  else {
    if (param_2 == 2) {
      uVar2 = FUN_ram_400002f4();
      if ((*(byte *)(param_1 + 0x3c) & 7) == 1) {
        FUN_ram_40005ffe(param_1);
        bVar1 = *param_3;
        *(byte *)(param_1 + 0x3d) = bVar1;
        *(int *)(param_1 + 0x40) = 1 << (bVar1 & 0x1f);
        FUN_ram_40005f7a(param_1);
      }
      else {
        bVar1 = *param_3;
        *(byte *)(param_1 + 0x3d) = bVar1;
        *(int *)(param_1 + 0x40) = 1 << (bVar1 & 0x1f);
      }
      FUN_ram_400002fa(uVar2);
    }
    else if (param_2 == 0) {
      uVar2 = FUN_ram_40006550();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

