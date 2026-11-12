/* NanoCore 1.12: FUN_ram_400002f4 at 0x400002f4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_a4eddd5e76f20b37cc92ca3868c08bf55fb6780a745526dbdf96ad93cc8cba11
 * Source: analysis/rea-1.12-effects/results/01024-export-0x400002f4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint FUN_ram_400002f4(void)

{
  uint uVar1;
  
  uVar1 = mstatus;
  mstatus = mstatus & 0xfffffff7;
  return uVar1;
}

