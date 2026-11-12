/* NanoCore 1.12: FUN_ram_40074cf0 at 0x40074cf0.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_274f36cf39a765ac545d25d4fe9daca39b11fc84691a62d76e2d98461ab962f8
 * Source: analysis/rea-1.12-effects/results/03566-export-0x40074cf0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40074cf0(float param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  puVar2 = param_2;
  do {
    iVar1 = memset(puVar2,0,0x80);
    fence();
    puVar2 = (ulonglong *)(iVar1 + 0x80);
  } while (puVar2 != param_2 + 0x600);
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)(iVar1 + 0x81) = 0;
  *(undefined1 *)(iVar1 + 0x82) = 0;
  *(undefined1 *)(iVar1 + 0x83) = 0;
  *(undefined1 *)(iVar1 + 0x84) = 0;
  *(undefined1 *)(iVar1 + 0x85) = 0;
  *(undefined1 *)(iVar1 + 0x86) = 0;
  *(undefined1 *)(iVar1 + 0x87) = 0;
  *(undefined1 *)(iVar1 + 0x88) = 0;
  *(undefined1 *)(iVar1 + 0x89) = 0;
  *(undefined1 *)(iVar1 + 0x8a) = 0;
  *(undefined1 *)(iVar1 + 0x8b) = 0;
  fence();
  if (DAT_ram_40099f28 < param_1) {
    *param_2 = (ulonglong)(uint)param_1;
    return;
  }
  *param_2 = (ulonglong)DAT_ram_4009f078;
  return;
}

