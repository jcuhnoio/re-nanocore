/* NanoCore 1.12: FUN_ram_40000b8a at 0x40000b8a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_76a4ce4aa1b2958f1a6b03541802ebd7b48738179949e39b04966011d4e1f4f7
 * Source: analysis/rea-1.12-effects/results/01038-export-0x40000b8a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40000b8a(double param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_ram_40000ec4();
  if ((_DAT_ram_3004d648 != -1) && (param_1 < 0.0)) {
    puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
    *puVar1 = 0x21;
    return 0x7ff8000000000000;
  }
  return uVar2;
}

