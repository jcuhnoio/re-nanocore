/* NanoCore 1.12: FUN_ram_40004988 at 0x40004988.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_66da42a7f72e2fa6eb55c06a02baf0f560982271610f761cfda366bb893ae36a
 * Source: analysis/rea-1.12-effects/results/01117-export-0x40004988.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_40004988(int param_1,undefined4 param_2)

{
  FUN_ram_40005da0(param_1,3,param_2);
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x24) = 0xff0001;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return 0;
}

