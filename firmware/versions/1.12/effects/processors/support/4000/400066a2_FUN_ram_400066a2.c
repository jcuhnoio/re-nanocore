/* NanoCore 1.12: FUN_ram_400066a2 at 0x400066a2.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_9f44e4bc76e79a0bf24d9ad8620ab7798155080b31754fcc55afd2fbbff708ed
 * Source: analysis/rea-1.12-effects/results/01196-export-0x400066a2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400066a2(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  uVar3 = FUN_ram_400002f4();
  FUN_ram_40006618(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  if (_DAT_ram_3004dbc4 != (code *)0x0) {
    (*_DAT_ram_3004dbc4)(param_1);
  }
  iVar4 = FUN_ram_40004346();
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar4 = iVar4 + *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x30) = iVar4;
  piVar5 = (int *)&DAT_ram_3004dcf0;
  if ((bVar1 & 4) == 0) {
    piVar5 = (int *)&DAT_ram_3004dcf8;
  }
  piVar7 = piVar5;
  do {
    piVar6 = piVar7;
    piVar7 = (int *)*piVar6;
    if ((int *)piVar5[1] == piVar6) break;
  } while ((iVar4 == piVar7[5]) || (0x7ffffffe < (uint)(piVar7[5] - iVar4)));
  _DAT_ram_3004df90 = _DAT_ram_3004df90 + 1;
  piVar7[1] = param_1 + 0x1c;
  *(int **)(param_1 + 0x1c) = piVar7;
  *piVar6 = param_1 + 0x1c;
  *(int **)(param_1 + 0x20) = piVar6;
  *(byte *)(param_1 + 0x11) = bVar1 | 1;
  bVar2 = false;
  if (((bVar1 & 4) != 0) && ((DAT_ram_3004a954 == '\x01' && ((DAT_ram_3004dd3c & 7) == 2)))) {
    FUN_ram_400064f2();
    bVar2 = true;
  }
  FUN_ram_400002fa(uVar3);
  if (bVar2) {
    FUN_ram_40006092();
  }
  return 0;
}

