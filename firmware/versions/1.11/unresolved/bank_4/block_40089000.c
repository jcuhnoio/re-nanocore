/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40089000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40089d20.
 * REA evidence: ev_aeef5d516292a22999114d2b95e126d8a91694b94f56f3ebb313986230e47720
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40089d20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = param_2[1];
    uVar7 = param_2[2];
    uVar6 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    iVar5 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    *(undefined4 *)(param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    if (iVar5 != 0) {
      *(undefined1 *)(iVar5 + 0x44) = 0;
      *(undefined1 *)(iVar5 + 0x80) = 0;
      *(undefined1 *)(iVar5 + 0x23c) = 0;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40089d62.
 * REA evidence: ev_13f1e1a5a188eee2f9e8bfbdfa3c29e62feafb6a9cfeb91f1299d499e47c6e29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40089d62(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x24;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40089d70.
 * REA evidence: ev_771048760860472d36a4819c8b2b92a59a20ec7671381f35d7780a5802d33d07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40089d70(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (bVar1 = false, *(int *)(param_1 + 4) != 0)) {
    bVar1 = *(char *)(param_1 + 0x44) != '\0';
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x40089d86.
 * REA evidence: ev_ae0258faa3c4a63d193b4da47d6f51f09eda2f5f629f74f2af7afde45ecf32b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40089d86(void)

{
  memset(&DAT_ram_30084f78,0,0x303c);
  _DAT_ram_30087fb4 = 0;
  _DAT_ram_30087fb8 = 0;
  _DAT_ram_30087fbc = 0;
  return;
}


/* NanoCore 1.11, address 0x40089db8.
 * REA evidence: ev_55d695197ec24f85f8113c28cc1c4e5309329a4cad5fff424482c619610a1d89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40089db8(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_120 [256];
  
  if (0xfff < param_2 - 1) {
    return 0xffffffff;
  }
  uVar5 = 0;
  uVar4 = 0;
  while( true ) {
    uVar1 = param_2 - uVar4;
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    iVar3 = FUN_ram_400933f0();
    uVar2 = uVar4 + uVar1;
    if (((iVar3 == 0) || (*(code **)(iVar3 + 0x2c) == (code *)0x0)) ||
       (uVar4 = (**(code **)(iVar3 + 0x2c))(1,param_1,uVar4,auStack_120,uVar1), uVar1 != uVar4))
    break;
    uVar5 = FUN_ram_40007554(uVar5,auStack_120,uVar1);
    uVar4 = uVar2;
    if (param_2 <= uVar2) {
      *param_3 = uVar5;
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40089e64.
 * REA evidence: ev_ff6263d4e4875b2028777b37f9cf464a4a0ace826b926a3f9802cc0b16fe0557
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40089e64(uint param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_120 [256];
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  pcVar3 = (char *)FUN_ram_400933f0();
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    if (0x25 < param_1) {
      return 0xffffffff;
    }
  }
  else {
    pcVar3 = (char *)FUN_ram_400933f0();
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      uVar5 = 0x303c;
      goto LAB_ram_40089eac;
    }
  }
  uVar5 = 0x3000;
LAB_ram_40089eac:
  if (param_2 <= uVar5) {
    uVar6 = 0;
    uVar5 = 0;
    while( true ) {
      uVar1 = param_2 - uVar5;
      if (0x100 < uVar1) {
        uVar1 = 0x100;
      }
      iVar4 = FUN_ram_400933f0();
      uVar2 = uVar5 + uVar1;
      if (((iVar4 == 0) || (*(code **)(iVar4 + 0x2c) == (code *)0x0)) ||
         (uVar5 = (**(code **)(iVar4 + 0x2c))(0,param_1,uVar5,auStack_120,uVar1), uVar1 != uVar5))
      break;
      uVar6 = FUN_ram_40007554(uVar6,auStack_120,uVar1);
      uVar5 = uVar2;
      if (param_2 <= uVar2) {
        *param_3 = uVar6;
        return 0;
      }
    }
  }
  return 0xffffffff;
}


