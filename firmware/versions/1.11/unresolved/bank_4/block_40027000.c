/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40027000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40027f50.
 * REA evidence: ev_8805461aafde478417c3389eea62f07c0b4306c1509690bc69f68463a92d9e30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40027f50(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((0 < param_3) && (param_4 != 0)) {
    if (param_2 == 0) {
      return param_1;
    }
    if ((param_1 < 0) || (param_3 <= param_1)) {
      param_1 = 0;
    }
    iVar1 = 0;
    do {
      param_1 = param_1 + param_2;
      if (param_1 < 0) {
        param_1 = param_3 + -1;
      }
      else if (param_3 <= param_1) {
        param_1 = 0;
      }
      if (*(char *)(param_4 + param_1) != '\0') {
        return param_1;
      }
      iVar1 = iVar1 + 1;
    } while (param_3 != iVar1);
  }
  return -1;
}


/* NanoCore 1.11, address 0x40027f86.
 * REA evidence: ev_2318698e5321a21acc655c8883bee480d08a80971520f2f49b29e342cedbfa00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40027f86(int param_1,uint param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_5 != (int *)0x0) {
    if (param_2 == 0) {
      return 0;
    }
    if ((0 < param_3) && (param_4 != 0)) {
      uVar4 = 1;
      if ((int)param_2 < 1) {
        uVar4 = 0xffffffff;
      }
      iVar2 = ((int)param_2 >> 0x1f ^ param_2) - ((int)param_2 >> 0x1f);
      iVar1 = 0;
      while ((iVar2 = iVar2 + -1, iVar2 != -1 &&
             (iVar3 = FUN_ram_40027f50(param_1,uVar4), -1 < iVar3))) {
        iVar1 = 1;
        param_1 = iVar3;
      }
      if (iVar1 == 0) {
        return 0;
      }
      *param_5 = param_1;
      return iVar1;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40027ffa.
 * REA evidence: ev_eed1e50a278a04ef634c5562e52e8e55b45f5103c3f02a72e2f60118e773c498
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027ffa(undefined2 *param_1)

{
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = 0x6400;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


