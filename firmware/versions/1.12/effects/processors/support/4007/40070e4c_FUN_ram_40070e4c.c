/* NanoCore 1.12: FUN_ram_40070e4c at 0x40070e4c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_8eb0d0ade005847887d0f1699fdc981c246e9f818ff2b336a5d27cb426765a76
 * Source: analysis/rea-1.12-effects/results/03527-export-0x40070e4c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

char FUN_ram_40070e4c(uint param_1)

{
  char cVar1;
  
  if (param_1 < 5) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\0';
    if ((3 < (param_1 - 8 & 0xff)) && (cVar1 = '\x02', param_1 != 0xc)) {
      return -(param_1 != 0x11);
    }
  }
  return cVar1;
}

