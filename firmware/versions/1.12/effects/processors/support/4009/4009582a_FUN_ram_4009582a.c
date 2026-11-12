/* NanoCore 1.12: FUN_ram_4009582a at 0x4009582a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_1c34df38929341985fbf37b380a494676437b2298413fce9dfef7e3c5e781bff
 * Source: analysis/rea-1.12-effects/results/03709-export-0x4009582a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_4009582a(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = (char)param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  uVar1 = memset(param_4,0,param_2 << 3);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

