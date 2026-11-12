/* NanoCore 1.12: FUN_ram_40004b14 at 0x40004b14.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_43411f3dccfbf9a2bf6bf55282bda9c8ae2c589e5395976570a12bb2b86ab017
 * Source: analysis/rea-1.12-effects/results/01122-export-0x40004b14.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004b14(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = FUN_ram_40006382();
  uVar3 = FUN_ram_400002f4();
  if (_DAT_ram_3004dbc0 != (code *)0x0) {
    (*_DAT_ram_3004dbc0)(param_1);
  }
  if (*(int *)(param_1 + 0x28) != iVar2) {
    *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
    FUN_ram_400002fa(uVar3);
    return -1;
  }
  cVar1 = *(char *)(param_1 + 0x27);
  *(char *)(param_1 + 0x27) = cVar1 + -1;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x26) != *(char *)(iVar2 + 0x3d)) {
      FUN_ram_4000657e(iVar2,2,param_1 + 0x26);
    }
    piVar4 = *(int **)(param_1 + 0x1c);
    if (piVar4 == (int *)(param_1 + 0x1c)) {
      if (*(short *)(param_1 + 0x24) != -1) {
        *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x26) = 0xff;
        goto LAB_ram_40004be2;
      }
    }
    else {
      *(int **)(param_1 + 0x28) = piVar4 + -7;
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)((int)piVar4 + 0x21);
      if (*(char *)(param_1 + 0x27) != -1) {
        *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + '\x01';
        FUN_ram_4000479e();
        iVar2 = 1;
        goto LAB_ram_40004bb2;
      }
    }
    FUN_ram_400002fa(uVar3);
    iVar2 = -3;
  }
  else {
LAB_ram_40004be2:
    iVar2 = 0;
LAB_ram_40004bb2:
    FUN_ram_400002fa(uVar3);
    if (iVar2 == 1) {
      FUN_ram_40006092();
      iVar2 = 0;
    }
  }
  return iVar2;
}

