/* NanoCore 1.12 analysis module: storage/partitions.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40006e50.
 * REA evidence: ev_b17eba8a1cf823500159100dc6e2309e94b2374e6bc4843112f3191dbd93d9e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 fal_partition_read(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((uint)(param_2 + param_4) <= *(uint *)(param_1 + 0x38)) {
    iVar1 = FUN_ram_40006ce4();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x40006e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(iVar1 + 0x28))(param_2 + *(int *)(param_1 + 0x34),param_3,param_4);
      return uVar2;
    }
  }
  return 0xffffffff;
}


