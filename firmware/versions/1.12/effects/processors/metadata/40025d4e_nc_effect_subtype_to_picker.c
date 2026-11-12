/* NanoCore 1.12: nc_effect_subtype_to_picker at 0x40025d4e.
 * Role: Inverse lookup in MOD selector table
 * REA: ev_83933322ab1014fc64d9694c7c17bcc6c7ec118916444ae0bc8b985139d1aef1
 * Source: analysis/rea-1.12-effects/results/01975-export-0x40025d4e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint nc_effect_subtype_to_picker(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = nc_effect_picker_count();
  uVar1 = 0;
  while( true ) {
    if (uVar1 == uVar2) {
      return 0xffffffff;
    }
    iVar3 = nc_effect_picker_to_subtype(param_1,uVar1);
    if (iVar3 == param_2) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}

