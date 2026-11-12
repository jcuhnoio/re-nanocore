/* NanoCore 1.12: FUN_ram_40005648 at 0x40005648.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d568bb7073257ad154f6e808b7817458db55a836c235e5b3b87e3f299246ce52
 * Source: analysis/rea-1.12-effects/results/01154-export-0x40005648.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

int FUN_ram_40005648(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0xff) != 0) {
      return (byte)(&DAT_ram_4009606c)[param_1 & 0xff] + 1;
    }
    if ((param_1 & 0xff00) != 0) {
      return (byte)(&DAT_ram_4009606c)[(param_1 & 0xffff) >> 8] + 9;
    }
    if ((param_1 & 0xff0000) != 0) {
      return (byte)(&DAT_ram_4009606c)[(param_1 & 0xffffff) >> 0x10] + 0x11;
    }
    iVar1 = (byte)(&DAT_ram_4009606c)[param_1 >> 0x18] + 0x19;
  }
  return iVar1;
}

