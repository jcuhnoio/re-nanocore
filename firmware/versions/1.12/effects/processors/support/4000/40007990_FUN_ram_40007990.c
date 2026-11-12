/* NanoCore 1.12: FUN_ram_40007990 at 0x40007990.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_6c2831e420effe8adcea181f0ee0281d1d36eb05297b309c3b4a497babea3ff4
 * Source: analysis/rea-1.12-effects/results/01262-export-0x40007990.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

bool FUN_ram_40007990(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = iVar2 + param_1 * 0x4c;
    bVar1 = false;
    if (*(int *)(iVar2 + 0xc) == param_2) {
      bVar1 = *(char *)(iVar2 + 0x11) != '\0';
    }
  }
  return bVar1;
}

