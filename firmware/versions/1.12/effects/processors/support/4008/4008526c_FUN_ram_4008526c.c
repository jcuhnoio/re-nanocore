/* NanoCore 1.12: FUN_ram_4008526c at 0x4008526c.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_6638fad1e3278a6a6792a7a69236d04c19db8fec5c56ff7b210b1b81b124fa62
 * Source: analysis/rea-1.12-effects/results/03615-export-0x4008526c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

int FUN_ram_4008526c(longlong *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == (longlong *)0x0) {
    return 1;
  }
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    uVar3 = *(uint *)(param_1 + 9);
    iVar1 = 1;
    if (uVar3 < 0x81) {
      if (param_3 == 0) {
LAB_ram_40085304:
        iVar1 = 0;
      }
      else {
        uVar2 = param_3;
        if (uVar3 != 0) goto LAB_ram_400852e8;
        while( true ) {
          if (uVar2 < 0x80) {
            uVar8 = param_2 + uVar2;
            param_3 = 0;
            uVar4 = uVar2;
            goto LAB_ram_40085328;
          }
          iVar1 = FUN_ram_40084290(param_1,param_2);
          if (iVar1 != 0) break;
          param_2 = param_2 + 0x80;
          param_3 = uVar2 - 0x80;
          *param_1 = *param_1 + 0x400;
          while( true ) {
            if (param_3 == 0) goto LAB_ram_40085304;
            uVar3 = *(uint *)(param_1 + 9);
            uVar2 = param_3;
            if (uVar3 == 0) break;
LAB_ram_400852e8:
            uVar4 = 0x80 - uVar3;
            if (param_3 < 0x80 - uVar3) {
              uVar4 = param_3;
            }
            uVar2 = uVar4 + uVar3;
            param_3 = param_3 - uVar4;
            uVar8 = param_2 + uVar4;
            if (uVar4 != 0) {
LAB_ram_40085328:
              uVar5 = uVar3 + 0x4c + (int)param_1;
              if ((uVar5 - (param_2 + 1) < 3 || ((param_2 | uVar5) & 3) != 0) || (uVar4 < 10)) {
                uVar3 = 0;
                do {
                  *(undefined1 *)(uVar5 + uVar3) = *(undefined1 *)(param_2 + uVar3);
                  uVar3 = uVar3 + 1;
                } while (uVar3 < uVar4);
              }
              else {
                uVar6 = 1;
                if (uVar4 != 0) {
                  uVar6 = uVar4;
                }
                uVar7 = 0;
                do {
                  *(undefined4 *)(uVar5 + uVar7) = *(undefined4 *)(param_2 + uVar7);
                  uVar7 = uVar7 + 4;
                } while ((uVar4 & 0xfffffffc) != uVar7);
                uVar5 = uVar6 & 0xfffffffc;
                if (uVar6 != uVar5) {
                  *(undefined1 *)((int)param_1 + uVar5 + uVar3 + 0x4c) =
                       *(undefined1 *)(param_2 + uVar5);
                  uVar6 = uVar5 + 1;
                  if (uVar6 < uVar4) {
                    uVar5 = uVar5 + 2;
                    *(undefined1 *)((int)param_1 + uVar6 + uVar3 + 0x4c) =
                         *(undefined1 *)(param_2 + uVar6);
                    if (uVar5 < uVar4) {
                      *(undefined1 *)((int)param_1 + uVar5 + uVar3 + 0x4c) =
                           *(undefined1 *)(param_2 + uVar5);
                    }
                  }
                }
              }
            }
            param_2 = uVar8;
            *(uint *)(param_1 + 9) = uVar2;
            if (uVar2 == 0x80) {
              iVar1 = FUN_ram_40084290(param_1,(int)param_1 + 0x4c);
              if (iVar1 != 0) {
                return iVar1;
              }
              *(undefined4 *)(param_1 + 9) = 0;
              *param_1 = *param_1 + 0x400;
            }
          }
        }
      }
    }
  }
  return iVar1;
}

