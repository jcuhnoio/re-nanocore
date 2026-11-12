/* NanoCore 1.12: FUN_ram_4000513e at 0x4000513e.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_360fde34b3ffc7e908f27ab86f174d179a7d1b7f777c4c1f08549716e93fcdc4
 * Source: analysis/rea-1.12-effects/results/01139-export-0x4000513e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

int FUN_ram_4000513e(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  while( true ) {
    if (param_3 == iVar2) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + iVar2);
    iVar3 = (int)(((uint)*pbVar1 - (uint)*(byte *)(param_2 + iVar2)) * 0x1000000) >> 0x18;
    if (iVar3 != 0) break;
    iVar2 = iVar2 + 1;
    if (*pbVar1 == 0) {
      return 0;
    }
  }
  return iVar3;
}

