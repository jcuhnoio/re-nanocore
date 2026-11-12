/* NanoCore 1.12: FUN_ram_4000666c at 0x4000666c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_868954639c1981e0fa330fa1f6bdd66866c0ec2c2e27c5ab97eddfa25fb01c31
 * Source: analysis/rea-1.12-effects/results/01195-export-0x4000666c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_4000666c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  FUN_ram_40006618(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  FUN_ram_400002fa(uVar1);
  FUN_ram_40005e14(param_1);
  return 0;
}

