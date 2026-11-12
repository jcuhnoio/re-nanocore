/* NanoCore 1.12: FUN_ram_400075de at 0x400075de.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_4d1d68ed725bf68c1883780e9ea7ff76bddc750b1c9201e678e1151ce3620747
 * Source: analysis/rea-1.12-effects/results/01246-export-0x400075de.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400075de(void)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = _DAT_ram_300517e0;
  uVar2 = (ulonglong)DAT_ram_40096728;
  *(undefined4 *)(_DAT_ram_300517e0 + 0x14) = 0;
  *(ulonglong *)(iVar1 + 8) = uVar2;
  *(ulonglong *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  return;
}

