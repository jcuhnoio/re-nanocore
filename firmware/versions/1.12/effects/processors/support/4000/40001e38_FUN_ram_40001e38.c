/* NanoCore 1.12: FUN_ram_40001e38 at 0x40001e38.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_3143cb121ca2d9b17d68d3009b472ce81be7bb6cdf059445348a47a0104a585c
 * Source: analysis/rea-1.12-effects/results/01052-export-0x40001e38.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint FUN_ram_40001e38(void)

{
  uint in_register_00000100;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return in_register_00000100;
  }
  if ((in_register_00000100 & 0x7fffffff) != 0) {
    if ((int)in_register_00000100 < 0) {
      return in_register_00000100;
    }
    iVar4 = (int)in_register_00000100 >> 0x17;
    if ((in_register_00000100 & 0x7f800000) == 0) {
      if ((in_register_00000100 & 0x800000) == 0) {
        iVar7 = 0;
        do {
          iVar1 = iVar7;
          in_register_00000100 = in_register_00000100 << 1;
          iVar7 = iVar1 + 1;
        } while ((in_register_00000100 & 0x800000) == 0);
        iVar4 = iVar4 - iVar1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    uVar6 = in_register_00000100 & 0x7fffff | 0x800000;
    iVar7 = uVar6 << 1;
    if ((iVar4 - 0x7fU & 1) != 0) {
      iVar7 = uVar6 << 2;
    }
    iVar3 = 0x19;
    uVar6 = 0;
    iVar1 = 0;
    uVar5 = 0x1000000;
    do {
      iVar2 = iVar1 + uVar5;
      iVar3 = iVar3 + -1;
      if (iVar2 <= iVar7) {
        iVar1 = iVar2 + uVar5;
        iVar7 = iVar7 - iVar2;
        uVar6 = uVar6 + uVar5;
      }
      iVar7 = iVar7 << 1;
      uVar5 = uVar5 >> 1;
    } while (iVar3 != 0);
    if (iVar7 != 0) {
      uVar6 = uVar6 + 1 & 0xfffffffe;
    }
    in_register_00000100 = ((int)uVar6 >> 1) + 0x3f000000 + ((int)(iVar4 - 0x7fU) >> 1) * 0x800000;
  }
  return in_register_00000100;
}

