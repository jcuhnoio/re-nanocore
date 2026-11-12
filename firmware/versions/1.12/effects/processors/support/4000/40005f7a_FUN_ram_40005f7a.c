/* NanoCore 1.12: FUN_ram_40005f7a at 0x40005f7a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_8377e6656001d951c67396085aae5ef8c97e3e5678153077216152a488209b96
 * Source: analysis/rea-1.12-effects/results/01172-export-0x40005f7a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005f7a(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  FUN_ram_400002f4();
  if (_DAT_ram_3004dbd0 == param_1) {
    *(byte *)(_DAT_ram_3004dbd0 + 0x3c) = *(byte *)(_DAT_ram_3004dbd0 + 0x3c) & 0xf8 | 3;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3c);
    uVar3 = (uint)*(byte *)(param_1 + 0x3d);
    *(byte *)(param_1 + 0x3c) = bVar1 & 0xf8 | 1;
    iVar2 = uVar3 * 8;
    iVar4 = param_1 + 0x1c;
    if ((bVar1 & 8) == 0) {
      iVar6 = *(int *)(&DAT_ram_3004dbe0 + uVar3 * 8);
      *(int *)(iVar6 + 4) = iVar4;
      *(int *)(param_1 + 0x1c) = iVar6;
      *(int *)(&DAT_ram_3004dbe0 + uVar3 * 8) = iVar4;
      *(undefined1 **)(param_1 + 0x20) = &DAT_ram_3004dbe0 + iVar2;
    }
    else {
      piVar5 = *(int **)(&DAT_ram_3004dbe4 + iVar2);
      *piVar5 = iVar4;
      *(int **)(param_1 + 0x20) = piVar5;
      *(int *)(&DAT_ram_3004dbe4 + iVar2) = iVar4;
      *(undefined1 **)(param_1 + 0x1c) = &DAT_ram_3004dbe0 + iVar2;
    }
    _DAT_ram_3004dce0 = *(uint *)(param_1 + 0x40) | _DAT_ram_3004dce0;
  }
  FUN_ram_400002fa();
  return;
}

