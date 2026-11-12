/* NanoCore 1.12: FUN_ram_4000648c at 0x4000648c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_7434d3dbac8f129dc9506657a82e9564d224832b2b9699141f49b4d03463f474
 * Source: analysis/rea-1.12-effects/results/01187-export-0x4000648c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000648c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = _DAT_ram_3004dbd0;
  uStack_14 = param_1;
  uVar2 = FUN_ram_400002f4();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  FUN_ram_40006430(iVar1);
  FUN_ram_400067c6(iVar1 + 0x54,0,&uStack_14);
  FUN_ram_400066a2(iVar1 + 0x54);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006092();
  if (*(int *)(iVar1 + 0x38) == -2) {
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  return *(undefined4 *)(iVar1 + 0x38);
}

