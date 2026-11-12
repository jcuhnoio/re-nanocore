/* NanoCore 1.12: FUN_ram_40006092 at 0x40006092.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_5ed36f68f71fd815759a3bc07630c4c631794692563986de7ddf94efff97d6ae
 * Source: analysis/rea-1.12-effects/results/01175-export-0x40006092.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006092(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  
  uVar5 = FUN_ram_400002f4();
  if ((_DAT_ram_3004dbd8 == 0) && (_DAT_ram_3004dce0 != 0)) {
    iVar6 = FUN_ram_40005648();
    iVar3 = _DAT_ram_3004dbd0;
    uVar7 = iVar6 - 1;
    bVar1 = *(byte *)(_DAT_ram_3004dbd0 + 0x3c);
    iVar4 = *(int *)(&DAT_ram_3004dbe0 + uVar7 * 8) + -0x1c;
    bVar2 = false;
    iVar6 = iVar4;
    if ((bVar1 & 7) == 3) {
      iVar6 = _DAT_ram_3004dbd0;
      if (((uVar7 <= *(byte *)(_DAT_ram_3004dbd0 + 0x3d)) &&
          (bVar2 = true, iVar6 = iVar4, *(byte *)(_DAT_ram_3004dbd0 + 0x3d) == uVar7)) &&
         ((bVar1 & 8) == 0)) {
        bVar2 = false;
        iVar6 = _DAT_ram_3004dbd0;
      }
      *(byte *)(_DAT_ram_3004dbd0 + 0x3c) = bVar1 & 0xf7;
    }
    if (iVar3 == iVar6) {
      FUN_ram_40005ffe(iVar3);
      *(byte *)(_DAT_ram_3004dbd0 + 0x3c) = *(byte *)(_DAT_ram_3004dbd0 + 0x3c) & 0xf8 | 3;
    }
    else {
      DAT_ram_3004dbcc = (undefined1)uVar7;
      _DAT_ram_3004dbd0 = iVar6;
      if (_DAT_ram_3004dbd4 != (code *)0x0) {
        (*_DAT_ram_3004dbd4)(iVar3,iVar6);
      }
      if (bVar2) {
        FUN_ram_40005f7a(iVar3);
      }
      FUN_ram_40005ffe(iVar6);
      *(byte *)(iVar6 + 0x3c) = *(byte *)(iVar6 + 0x3c) & 0xf8 | 3;
      pcVar8 = *(char **)(iVar6 + 0x30);
      if (((*pcVar8 != '#') || (*(char **)(iVar6 + 0x24) <= pcVar8)) ||
         (pcVar8 + *(int *)(iVar6 + 0x34) < *(char **)(iVar6 + 0x24))) {
        iVar4 = FUN_ram_400002f4();
        do {
        } while (iVar4 != 0);
      }
      if (DAT_ram_3004daf8 == '\0') {
        if (_DAT_ram_3004dbdc != (code *)0x0) {
          (*_DAT_ram_3004dbdc)(iVar3);
        }
        FUN_ram_4000010a(iVar3 + 0x24,iVar6 + 0x24);
      }
      else {
        FUN_ram_4000010a(iVar3 + 0x24);
      }
    }
  }
  FUN_ram_400002fa(uVar5);
  return;
}

