/* NanoCore 1.12: FUN_ram_400083aa at 0x400083aa.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_22bfa9579acbd8b9fdbc7951a55c6c9a07dc0f73157ff1579d002db66a8ba77d
 * Source: analysis/rea-1.12-effects/results/01283-export-0x400083aa.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_400083aa(int param_1,undefined1 param_2,undefined4 param_3)

{
  FUN_ram_400002f4();
  param_1 = param_1 * 0xc;
  *(undefined1 *)(param_1 + 0x3004e404) = param_2;
  *(undefined4 *)(param_1 + 0x3004e408) = param_3;
  *(int *)(param_1 + 0x3004e400) = *(int *)(param_1 + 0x3004e400) + 1;
  FUN_ram_400002fa();
  return;
}

