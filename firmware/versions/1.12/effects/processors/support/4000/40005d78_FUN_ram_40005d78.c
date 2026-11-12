/* NanoCore 1.12: FUN_ram_40005d78 at 0x40005d78.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_0b260ff761206f16c2a13eed9a3d2b8db9537a4a2c7514d4a5244a34ca62517a
 * Source: analysis/rea-1.12-effects/results/01164-export-0x40005d78.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 * FUN_ram_40005d78(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_ram_3004a8a4)[iVar1 * 4] == param_1) {
      return &DAT_ram_3004a8a4 + iVar1 * 4;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xb);
  return (undefined4 *)0x0;
}

