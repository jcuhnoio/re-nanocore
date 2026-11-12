/* NanoCore 1.12: FUN_ram_40074a6e at 0x40074a6e.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_ee0ce7c611d633842d62d8a5fd1b0c1bf2a826a2912c1acb3a6bf0056671a311
 * Source: analysis/rea-1.12-effects/results/03562-export-0x40074a6e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

char * FUN_ram_40074a6e(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 0x3c) {
    iVar1 = param_1 * 0x2c;
    iVar4 = *(int *)(&DAT_ram_4009ff40 + iVar1);
    if (param_2 < (byte)(&DAT_ram_4009fe90)[iVar4]) {
      iVar2 = iVar4 * 9;
      iVar3 = 0;
      if (param_2 != (int)(char)(&DAT_ram_4009feac)[iVar2]) {
        if (param_2 == (int)(char)(&DAT_ram_4009fead)[iVar2]) {
          if (iVar4 - 1U < 2) {
            return s_Release_ram_4009b0b4;
          }
          return PTR_s_Decay_ram_4009ac88_ram_4009ff04;
        }
        iVar3 = 2;
        if ((param_2 != (int)(char)(&DAT_ram_4009feae)[iVar2]) &&
           (iVar3 = 3, param_2 != (int)(char)(&DAT_ram_4009feaf)[iVar2])) {
          if (param_2 == (int)(char)(&DAT_ram_4009feb0)[iVar2]) {
            if (*(char **)(&DAT_ram_4009ff60 + iVar1) != (char *)0x0) {
              return *(char **)(&DAT_ram_4009ff60 + iVar1);
            }
            return (&PTR_s_Detune_ram_4009fae0_ram_4009fe74)[*(int *)(&DAT_ram_4009ff3c + iVar1)];
          }
          iVar3 = 5;
          if (((param_2 != (int)(char)(&DAT_ram_4009feb1)[iVar2]) &&
              (iVar3 = 6, param_2 != (int)(char)(&DAT_ram_4009feb2)[iVar2])) &&
             (iVar3 = 7, param_2 != (int)(char)(&DAT_ram_4009feb3)[iVar2])) {
            if ((int)(char)(&DAT_ram_4009feb4)[iVar4 * 9] != param_2) {
              return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
            }
            if (*(int *)(&DAT_ram_4009ff5c + param_1 * 0x2c) == 0x22) {
              return &DAT_ram_4009ae10;
            }
            return PTR_s_Pattern_ram_4009faf0_ram_4009ff20;
          }
        }
      }
      return (&PTR_DAT_ram_4009ac9c_ram_4009ff00)[iVar3];
    }
  }
  return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
}

