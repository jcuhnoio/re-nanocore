/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40026000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002662a.
 * REA evidence: ev_f71882a094ed4bf00c0d9bdbc31953fb2140206766a1258c5131465a60149d01
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4002662a(uint param_1,byte param_2,int param_3)

{
  uint uVar1;
  byte bStack_15;
  uint auStack_14 [4];
  
  bStack_15 = param_2;
  auStack_14[0] = param_1;
  FUN_ram_4002518c(auStack_14,&bStack_15);
  if (9 < auStack_14[0]) {
    return 5;
  }
  uVar1 = param_3 - 1;
  switch(auStack_14[0]) {
  case 0:
    if (bStack_15 == 2) {
      return 7;
    }
    if (bStack_15 == 3) {
      return 6;
    }
    return 2;
  case 1:
    if (bStack_15 == 8) {
switchD_ram_4002678e_caseD_5:
      return (1 < uVar1) + 3;
    }
    if (bStack_15 != 9) {
      if (bStack_15 == 10) goto switchD_ram_4002665a_caseD_6;
      if (bStack_15 != 0xb) {
        if ((byte)(bStack_15 - 5) < 3) {
          return 1;
        }
        return 3;
      }
    }
    break;
  default:
LAB_ram_400266be:
    return 5;
  case 3:
code_r0x4002673e:
    return (1 < uVar1) + 2;
  case 4:
    if (bStack_15 < 8) {
      if (bStack_15 != 4) {
        if (4 < bStack_15) goto switchD_ram_4002665a_caseD_6;
        if (bStack_15 != 1) break;
      }
      goto switchD_ram_4002678e_caseD_5;
    }
    break;
  case 5:
    if (bStack_15 == 0xe) {
      return 5;
    }
    if (bStack_15 == 0x10) {
      return 7;
    }
    if (bStack_15 == 0x11) {
      if (1 < uVar1) {
        return 8;
      }
      return 5;
    }
    if (bStack_15 == 0xb) {
      return 4;
    }
    if (1 < (byte)(bStack_15 - 0xc)) {
      if (bStack_15 == 0x12) {
        return 5;
      }
      if (bStack_15 != 9) {
        if ((bStack_15 & 0xfd) == 8) {
          return 5;
        }
        if (bStack_15 == 0) goto code_r0x4002673e;
        if (bStack_15 != 3) {
          if (bStack_15 == 4) {
            if (1 < uVar1) {
              return 5;
            }
            return 4;
          }
          goto switchD_ram_4002678e_caseD_5;
        }
        goto switchD_ram_4002665a_caseD_6;
      }
    }
    break;
  case 6:
switchD_ram_4002665a_caseD_6:
    return (1 < uVar1) + 5;
  case 7:
    if (bStack_15 == 0) {
      return 4;
    }
    if (bStack_15 == 1) {
      return 7;
    }
    return 9;
  case 9:
    switch(bStack_15) {
    case 1:
    case 2:
      return (1 < uVar1) + 1;
    case 3:
      if (uVar1 < 2) {
        return 2;
      }
      return bStack_15;
    case 4:
      return 3;
    default:
      goto switchD_ram_4002678e_caseD_5;
    case 8:
    case 10:
      return 4;
    case 9:
      return 2;
    case 0xb:
      goto LAB_ram_400266be;
    }
  }
  return (1 < uVar1) + 4;
}


/* NanoCore 1.11, address 0x400267aa.
 * REA evidence: ev_f771db0252765093ac1d7c5dc67fe56eaa5cf9e7690cb18b0b2d1bd2f6b25201
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400267aa(int param_1,char param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  char cStack_15;
  int aiStack_14 [4];
  
  cStack_15 = param_2;
  aiStack_14[0] = param_1;
  FUN_ram_4002518c(aiStack_14,&cStack_15);
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
      puVar1 = &DAT_ram_40096ae4;
      goto LAB_ram_40026826;
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
  puVar1 = &DAT_ram_40096aec;
LAB_ram_40026826:
  return (uint)(byte)puVar1[param_3];
}


/* NanoCore 1.11, address 0x40026842.
 * REA evidence: ev_3ec5c8c9c8d0642428aa4a222fe091d02dd995685b654e60825fc179dc6a6862
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40026842(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_ram_4002662a(param_1,param_2,param_4);
  uVar1 = 0;
  while( true ) {
    if (uVar1 == uVar2) {
      return 0xff;
    }
    iVar3 = FUN_ram_400267aa(param_1,param_2,uVar1,param_4);
    if (iVar3 == param_3) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40026898.
 * REA evidence: ev_4ee99a6f82929be6c63da5348cb6ec522a10b6dbbeced7be4df2928ca59231bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40026898(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_ram_4002662a();
  uVar2 = 0;
  for (uVar1 = 0; uVar1 != uVar3; uVar1 = uVar1 + 1 & 0xff) {
    uVar4 = FUN_ram_400267aa(param_1,param_2,uVar1,param_3);
    if ((uVar4 != 0xff) && (uVar2 <= uVar4)) {
      uVar2 = uVar4 + 1 & 0xff;
    }
  }
  return uVar2;
}


