/* NanoCore 1.12: FUN_ram_40004a22 at 0x40004a22.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_466d563e084c4a11784a854b608ca0c071ff5367eb3048669ff6d7eb83406387
 * Source: analysis/rea-1.12-effects/results/01121-export-0x40004a22.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004a22(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  iVar1 = FUN_ram_40006382();
  uVar2 = FUN_ram_400002f4();
  if (_DAT_ram_3004dbc8 != (code *)0x0) {
    (*_DAT_ram_3004dbc8)(param_1);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  if (iVar3 != iVar1) {
    if (*(short *)(param_1 + 0x24) == 0) {
      if (aiStack_24[0] == 0) {
        *(undefined4 *)(iVar1 + 0x38) = 0xfffffffe;
        FUN_ram_400002fa(uVar2);
        return -2;
      }
      if (*(byte *)(iVar1 + 0x3d) < *(byte *)(iVar3 + 0x3d)) {
        FUN_ram_4000657e(iVar3,2,iVar1 + 0x3d);
      }
      FUN_ram_400047a4(param_1 + 0x1c,iVar1,*(undefined1 *)(param_1 + 0x11));
      if (0 < aiStack_24[0]) {
        FUN_ram_400067c6(iVar1 + 0x54,0,aiStack_24);
        FUN_ram_400066a2(iVar1 + 0x54);
      }
      FUN_ram_400002fa(uVar2);
      FUN_ram_40006092();
      if (*(int *)(iVar1 + 0x38) != 0) {
        return *(int *)(iVar1 + 0x38);
      }
      uVar2 = FUN_ram_400002f4();
      goto LAB_ram_40004a68;
    }
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
    *(int *)(param_1 + 0x28) = iVar1;
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(iVar1 + 0x3d);
  }
  if (*(char *)(param_1 + 0x27) == -1) {
    FUN_ram_400002fa(uVar2);
    return -3;
  }
  *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + '\x01';
LAB_ram_40004a68:
  FUN_ram_400002fa(uVar2);
  if (_DAT_ram_3004dbc4 != (code *)0x0) {
    (*_DAT_ram_3004dbc4)(param_1);
  }
  return 0;
}

