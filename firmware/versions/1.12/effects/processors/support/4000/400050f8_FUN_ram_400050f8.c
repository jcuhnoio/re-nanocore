/* NanoCore 1.12: FUN_ram_400050f8 at 0x400050f8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_b114961a7a31a65c8c174ae692f1001ed3974e5937147ba3ab26c9fe3d2531a0
 * Source: analysis/rea-1.12-effects/results/01137-export-0x400050f8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_400050f8(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_3 != 0) {
    iVar3 = param_3;
    do {
      cVar1 = *(char *)((param_2 + param_3) - iVar3);
      iVar4 = iVar3 + -1;
      pcVar2 = param_1 + 1;
      *param_1 = cVar1;
      if (cVar1 == '\0') {
        pcVar5 = pcVar2;
        while (pcVar5 + 1 != pcVar2 + iVar3) {
          *pcVar5 = '\0';
          pcVar5 = pcVar5 + 1;
        }
        return;
      }
      iVar3 = iVar4;
      param_1 = pcVar2;
    } while (iVar4 != 0);
  }
  return;
}

