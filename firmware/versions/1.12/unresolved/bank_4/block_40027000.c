/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40027000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40027042.
 * REA evidence: ev_f35f076209bc6a99a75a7da9803a8e40847a9c868d060c14215e67f8dffc76b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40027042(int param_1,char param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  char cStack_15;
  int aiStack_14 [4];
  
  cStack_15 = param_2;
  aiStack_14[0] = param_1;
  FUN_ram_40025be8(aiStack_14,&cStack_15);
  if (1 < param_4 - 1U) {
    return param_3;
  }
  if (aiStack_14[0] == 5) {
    if (((byte)(cStack_15 - 0xcU) < 2) && (param_3 < 4)) {
      return param_3 + 1 & 0xff;
    }
    if ((cStack_15 != '\t') || (3 < param_3)) {
      if (cStack_15 != '\x11') {
        return param_3;
      }
      if (4 < param_3) {
        return param_3;
      }
      puVar1 = &DAT_ram_4009bd8c;
      goto LAB_ram_400270be;
    }
  }
  else {
    if (aiStack_14[0] != 1) {
      return param_3;
    }
    if (cStack_15 != '\v') {
      return param_3;
    }
    if (3 < param_3) {
      return param_3;
    }
  }
  puVar1 = &DAT_ram_4009bd94;
LAB_ram_400270be:
  return (uint)(byte)puVar1[param_3];
}


/* NanoCore 1.12, address 0x400270da.
 * REA evidence: ev_08d4bedd355f32d914cba1cff880961bef89ea4af2d54623485f991e415bed0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400270da(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = nc_effect_parameter_count(param_1,param_2,param_4);
  uVar1 = 0;
  while( true ) {
    if (uVar1 == uVar2) {
      return 0xff;
    }
    iVar3 = FUN_ram_40027042(param_1,param_2,uVar1,param_4);
    if (iVar3 == param_3) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40027130.
 * REA evidence: ev_2b661a0ec3ab91949e81c40f1b8d8e9dd2b70b1df2dfeab93635d4c9613018c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40027130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = nc_effect_parameter_count();
  uVar2 = 0;
  for (uVar1 = 0; uVar1 != uVar3; uVar1 = uVar1 + 1 & 0xff) {
    uVar4 = FUN_ram_40027042(param_1,param_2,uVar1,param_3);
    if ((uVar4 != 0xff) && (uVar2 <= uVar4)) {
      uVar2 = uVar4 + 1 & 0xff;
    }
  }
  return uVar2;
}


