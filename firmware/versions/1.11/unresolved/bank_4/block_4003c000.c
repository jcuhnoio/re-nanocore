/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4003c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003c152.
 * REA evidence: ev_d0360efb7861ed3983f6fdb3f968275d02806deee16c81d11e2d4efdf0fadf95
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c152(undefined4 *param_1)

{
  fence();
  fence();
  *(uint *)*param_1 = *(uint *)*param_1 | 1;
  return;
}


/* NanoCore 1.11, address 0x4003c168.
 * REA evidence: ev_20fe7c3209052a2d817d8e13655cabd550b9199ed64b333613c6b43610b9407a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c168(int *param_1)

{
  fence();
  fence();
  *(uint *)(*param_1 + 0x24) = *(uint *)(*param_1 + 0x24) | 0x100;
  return;
}


/* NanoCore 1.11, address 0x4003c186.
 * REA evidence: ev_000a37b8cc3fff65430cdcede6771421e1209c5c380b911e02a280f302a35c23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c186(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0x5622) || (param_1 == 0xac44)) || (uVar1 = 0x1770000, param_1 == 0x2b11)) {
    uVar1 = 0x1588800;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4003c1da.
 * REA evidence: ev_35239af5c821fb840042683dd3863d682a89ffc40cd1fa00d22f7aa1958e6caa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c1da(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_4003c186(param_2);
  uVar2 = FUN_ram_40037996(param_1);
  FUN_ram_40037a2e(uVar2,uVar1);
  return;
}


/* NanoCore 1.11, address 0x4003c1fc.
 * REA evidence: ev_6abbc6d4a0d15ad60e121a90c1a7c7c327a4e634f1d17e40223759725c9b608a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c1fc(int *param_1,int param_2)

{
  *param_1 = (param_2 + 0x18600) * 0x1000;
  param_1[1] = param_2 + 0x34;
  param_1[2] = param_2 + 0x21;
  param_1[3] = param_2;
  FUN_ram_40037876();
  return;
}


/* NanoCore 1.11, address 0x4003c21c.
 * REA evidence: ev_0d35013cc12b31fc53ac0f3c77da223c8f830df00bf08c1d59980c1081ac6a3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c21c(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  fence();
  uVar3 = *(uint *)(*param_1 + 0x34);
  fence();
  uVar1 = *(uint *)(*param_1 + 100);
  fence();
  if (4 < param_2) {
    return 0xffffffea;
  }
  uVar2 = *(uint *)*param_1 & 0xffffffcf;
  switch(param_2) {
  case 0:
    fence();
    *(uint *)*param_1 = uVar2 | 0x10;
    fence();
    *(uint *)(*param_1 + 0x34) = uVar3 & 0xffcfffff | 0x100000;
    fence();
    uVar1 = uVar1 & 0xffcfffff | 0x100000;
    goto LAB_ram_4003c284;
  case 1:
    fence();
    uVar2 = uVar2 | 0x10;
    break;
  case 2:
    fence();
    puVar4 = (uint *)*param_1;
    uVar1 = uVar2 | 0x20;
    goto LAB_ram_4003c28a;
  case 3:
    fence();
    *(uint *)*param_1 = uVar2;
    fence();
    *(uint *)(*param_1 + 0x34) = uVar3 & 0xffcfffff | 0x100000;
    fence();
    *(uint *)(*param_1 + 100) = uVar1 & 0xffcfffff | 0x100000;
    return 0;
  case 4:
    fence();
  }
  *(uint *)*param_1 = uVar2;
  fence();
  *(uint *)(*param_1 + 0x34) = uVar3 & 0xffcfffff;
  fence();
  uVar1 = uVar1 & 0xffcfffff;
LAB_ram_4003c284:
  puVar4 = (uint *)(*param_1 + 100);
LAB_ram_4003c28a:
  *puVar4 = uVar1;
  return 0;
}


/* NanoCore 1.11, address 0x4003c302.
 * REA evidence: ev_3f218c006d1aa406e5ebeed467816a57d22fd6c4e2cbcd0d4ccd78054fb5430e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c302(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 8 < 0x19) {
    uVar1 = 0xffffffea;
    if ((param_2 & 3) == 0) {
      fence();
      fence();
      *(uint *)(*param_1 + 4) = ((param_2 - 8 >> 2) + 1 & 0xf) << 4 | *(uint *)(*param_1 + 4) & 0x8f
      ;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4003c348.
 * REA evidence: ev_79a258001b8525d884b7372fffe35e5c840e0a977f16155dac72d8b4edb9c302
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c348(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 8 < 0x19) {
    uVar1 = 0xffffffea;
    if ((param_2 & 3) == 0) {
      fence();
      fence();
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xf8 | (param_2 - 8 >> 2) + 1 & 0xff;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4003c384.
 * REA evidence: ev_e625f01cf5923ca148f62e66369966361cda49588160d8148b7998c3ec5231eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c384(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_ram_4003c1da(param_1[2]);
  uVar1 = FUN_ram_4003c186(param_2);
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 / param_2;
  }
  iVar2 = 0;
  if (param_3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 / param_3;
  }
  do {
    if ((byte)(&DAT_ram_400982dc)[iVar2 * 2] == uVar1) {
      fence();
      fence();
      *(uint *)(*param_1 + 0x24) =
           *(uint *)(*param_1 + 0x24) & 0xfffffff0 | (uint)(byte)(&DAT_ram_400982dd)[iVar2 * 2];
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xf);
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003c3f6.
 * REA evidence: ev_8c2049c65015611ed5a3dff2f046f631e4d8bb6685053a1e2868100de6b0031c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c3f6(int *param_1,int param_2)

{
  uint uVar1;
  
  fence();
  uVar1 = *(uint *)(*param_1 + 4) & 0xfff7ffff;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  fence();
  *(uint *)(*param_1 + 4) = uVar1;
  return;
}


/* NanoCore 1.11, address 0x4003c41c.
 * REA evidence: ev_a85bd6530e68dfd3689e3c8daf76c3fe9a769e286bccc0b9ee9eac7f6ab55a48
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c41c(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  FUN_ram_4003c1da(param_1[2]);
  uVar2 = FUN_ram_4003c186(param_2);
  fence();
  if ((*(uint *)*param_1 & 0x30) == 0) {
    uVar3 = *(uint *)(*param_1 + 4);
    fence();
    fence();
    uVar1 = param_3;
  }
  else {
    uVar3 = *(uint *)(*param_1 + 4);
    fence();
    fence();
    uVar1 = param_3 >> 1;
  }
  *(uint *)(*param_1 + 4) = uVar3 & 0xfffc00ff | (uVar1 - 1) * 0x100;
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / param_2;
  }
  iVar4 = 0;
  if (param_3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / param_3;
  }
  do {
    if ((byte)(&DAT_ram_400982dc)[iVar4 * 2] == uVar2) {
      fence();
      fence();
      *(uint *)(*param_1 + 0x24) =
           *(uint *)(*param_1 + 0x24) & 0xffffff0f | (uint)(byte)(&DAT_ram_400982dd)[iVar4 * 2] << 4
      ;
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xf);
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003c4e2.
 * REA evidence: ev_3381f410909889e8d9380daeee493b3f2c190fe5c77cef27673924307d370e0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c4e2(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_2 - 1;
  if (param_3 == 0) {
    fence();
    fence();
    iVar1 = *param_1;
    *(uint *)(iVar1 + 0x34) =
         *(uint *)(*param_1 + 0x34) & 0xfff00000 | (1 << (param_2 & 0x1f)) - 1U | uVar3 * 0x10000;
    fence();
    fence();
    *(uint *)(*param_1 + 0x30) = *(uint *)(iVar1 + 0x30) & 0xfffffff0 | uVar3;
    fence();
    *(undefined4 *)(*param_1 + 0x44) = 0xfedcba98;
    fence();
    puVar2 = (undefined4 *)(*param_1 + 0x48);
  }
  else {
    fence();
    fence();
    iVar1 = *param_1;
    *(uint *)(iVar1 + 100) = *(uint *)(*param_1 + 100) & 0xfff0ffff | uVar3 * 0x10000;
    fence();
    fence();
    *(uint *)(*param_1 + 0x30) = *(uint *)(iVar1 + 0x30) & 0xffffff0f | uVar3 * 0x10;
    fence();
    *(undefined4 *)(*param_1 + 0x68) = 0xfedcba98;
    fence();
    puVar2 = (undefined4 *)(*param_1 + 0x6c);
  }
  *puVar2 = 0x76543210;
  return;
}


/* NanoCore 1.11, address 0x4003c5c0.
 * REA evidence: ev_778cdfa17c1e32255ac35db8d8fcff2e3aae3156f6bc336c97d9ff24b47688e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c5c0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 local_30 [2];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uStack_24 = 1;
  iStack_28 = *param_1 + 0x20;
  iStack_14 = param_1[3] + 0xc;
  uVar2 = *(uint *)(param_2 + 0x10);
  local_30[0] = 1;
  uStack_1c = 1;
  uStack_18 = 1;
  if (uVar2 == 0x18) {
    uStack_24 = 3;
  }
  else if (uVar2 < 0x19) {
    if (uVar2 != 8) {
      if (uVar2 != 0x10) {
        return;
      }
      uStack_24 = 2;
    }
  }
  else {
    if (uVar2 != 0x20) {
      return;
    }
    uStack_24 = 4;
  }
  param_1[9] = 3;
  uStack_20 = uStack_24;
  iVar1 = FUN_ram_40039960();
  param_1[5] = iVar1;
  if (iVar1 != 0) {
    FUN_ram_400398f8(iVar1,&LAB_ram_4003c1b4,param_1 + 5);
    FUN_ram_40039908(param_1[5],local_30);
    FUN_ram_40039b64(param_1[5],param_1[6],param_1[7],param_1[8],1);
    FUN_ram_40039c7e(param_1[5]);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x2000000;
    fence();
    *(undefined4 *)(*param_1 + 0x28) = 0;
    FUN_ram_4003c168(param_1);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 4;
    FUN_ram_4003c152(param_1);
    fence();
    fence();
    puVar3 = (uint *)*param_1;
    *puVar3 = *(uint *)*param_1 | 4;
    fence();
    fence();
    puVar4 = (uint *)*param_1;
    *puVar4 = *puVar3 | 0x100;
    fence();
    fence();
    *(uint *)(*param_1 + 0x1c) = puVar4[7] | 0x80;
  }
  return;
}


/* NanoCore 1.11, address 0x4003c7f6.
 * REA evidence: ev_16b6a8e17beaf0b7aee577a292c473baeebc7f16c412094ac86ef1d63b91bb1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c7f6(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_2c = *param_1 + 0x10;
  iStack_14 = param_1[3] + 0xc;
  uVar2 = *(uint *)(param_2 + 0x10);
  local_30 = 2;
  uStack_1c = 1;
  uStack_18 = 1;
  if (uVar2 == 0x18) {
    uStack_20 = 3;
  }
  else if (uVar2 < 0x19) {
    if (uVar2 == 8) {
      uStack_20 = 1;
    }
    else {
      if (uVar2 != 0x10) {
        return;
      }
      uStack_20 = 2;
    }
  }
  else {
    if (uVar2 != 0x20) {
      return;
    }
    uStack_20 = 4;
  }
  param_1[0xe] = 4;
  uStack_24 = uStack_20;
  iVar1 = FUN_ram_40039960();
  param_1[10] = iVar1;
  if (iVar1 != 0) {
    FUN_ram_400398f8(iVar1,&LAB_ram_4003c1b4,param_1 + 10);
    FUN_ram_40039908(param_1[10],&local_30);
    FUN_ram_40039b64(param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],2);
    FUN_ram_40039c7e(param_1[10]);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x1000000;
    fence();
    *(undefined4 *)(*param_1 + 0x2c) = 0;
    FUN_ram_4003c168(param_1);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffc | 1;
    FUN_ram_4003c152(param_1);
    fence();
    fence();
    puVar3 = (uint *)*param_1;
    *puVar3 = *(uint *)*param_1 | 2;
    fence();
    fence();
    *(uint *)(*param_1 + 0x1c) = puVar3[7] | 8;
  }
  return;
}


/* NanoCore 1.11, address 0x4003c904.
 * REA evidence: ev_d901a8c4498907433286425ba82e8593c912592e9ab9be55f692bc2e1ec43afb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c904(int *param_1)

{
  uint *puVar1;
  
  fence();
  fence();
  puVar1 = (uint *)*param_1;
  puVar1[7] = *(uint *)(*param_1 + 0x1c) & 0xffffff7f;
  fence();
  fence();
  *(uint *)*param_1 = *puVar1 & 0xfffffffb;
  FUN_ram_40039886(param_1[5]);
  FUN_ram_4003992c(param_1[5]);
  param_1[4] = 0;
  return;
}


/* NanoCore 1.11, address 0x4003c94e.
 * REA evidence: ev_90e58b3fbe4af916197226f0373d83d733f8a0cc46d59c8feec4a06267766ecb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c94e(int *param_1)

{
  uint *puVar1;
  
  fence();
  fence();
  puVar1 = (uint *)*param_1;
  puVar1[7] = *(uint *)(*param_1 + 0x1c) & 0xfffffff7;
  fence();
  fence();
  *(uint *)*param_1 = *puVar1 & 0xfffffffd;
  FUN_ram_40039886(param_1[10]);
  FUN_ram_4003992c(param_1[10]);
  return;
}


/* NanoCore 1.11, address 0x4003c990.
 * REA evidence: ev_e44847a03165d2575ec6ef573ac005015fdb3a12516c2e0e6dfe253645df5eef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c990(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  return;
}


/* NanoCore 1.11, address 0x4003c996.
 * REA evidence: ev_76321d217e83b11f373214c5bc90548a9fe80be2baf4f00b8ae968cd3ba25a7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003c996(uint param_1)

{
  if (param_1 < 4) {
    return param_1 * 0x10000 + 0x10400000;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4003c9aa.
 * REA evidence: ev_d42d5496144c36a095dda8195fc044074b57ff18886137e1a68f55af4ea03ad9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c9aa(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  fence();
  uVar2 = *(uint *)(param_1 + 8) & 0xffffd7ff;
  if (param_2 == 1) {
    uVar1 = 0x2000;
  }
  else {
    if (param_2 == 2) goto LAB_ram_4003c9c4;
    uVar1 = 0x800;
  }
  uVar2 = uVar2 | uVar1;
LAB_ram_4003c9c4:
  fence();
  *(uint *)(param_1 + 8) = uVar2;
  return;
}


/* NanoCore 1.11, address 0x4003c9da.
 * REA evidence: ev_981ad188cc1d6a5027c17313b0a86a3a763cb99f5528ac6415597ed8567c883c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c9da(int param_1,int param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = param_2 << 7 | *(uint *)(param_1 + 8) & 0xffffff7f;
  return;
}


/* NanoCore 1.11, address 0x4003c9f2.
 * REA evidence: ev_4004709660ffef6ea43563bfbc6068486d75de6e9f33412ee3084204a9e672b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c9f2(int param_1,int param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = param_2 << 6 | *(uint *)(param_1 + 8) & 0xffffffbf;
  return;
}


/* NanoCore 1.11, address 0x4003ca0a.
 * REA evidence: ev_6b8ce6c5f2b8bfd98cdef024c5719efec7a05f1de06fe11bbc6160414c9f8802
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca0a(int param_1,int param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = param_2 << 8 | *(uint *)(param_1 + 8) & 0xfffffeff;
  return;
}


/* NanoCore 1.11, address 0x4003ca22.
 * REA evidence: ev_d96abdaa8de10a3a3e7ff18b37304b092ce8b4f49e0377cbcb97e8975a62c6f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca22(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80008000;
  return;
}


/* NanoCore 1.11, address 0x4003ca38.
 * REA evidence: ev_bcbb311dd235fde39a8dca65327b19a106e07458a5872c48bcdbfe3e4086e398
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca38(int param_1,uint param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x10) = ~param_2 & *(uint *)(param_1 + 0x10);
  return;
}


/* NanoCore 1.11, address 0x4003ca4e.
 * REA evidence: ev_fc63e9b5eb39fe6b76a13ad2a008f2899b22aef7af9e50c0db5e2ca8f223cff4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca4e(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x100;
  return;
}


/* NanoCore 1.11, address 0x4003ca62.
 * REA evidence: ev_f47e90d6bee99aba419b4224f3c4425d79e2111471c2493eb044909332c7436c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca62(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffeff;
  return;
}


/* NanoCore 1.11, address 0x4003ca76.
 * REA evidence: ev_53386fb8f443c755c7137efb466d6da915ab3aaab95fb0e5b0d2bba0f9bc6eba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca76(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x1000000;
  return;
}


/* NanoCore 1.11, address 0x4003ca8c.
 * REA evidence: ev_f4bdcf9e205ce79434f53a92222c8c9951f52409bdfe7ece9e3923b09eaed5da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca8c(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfeffffff;
  return;
}


/* NanoCore 1.11, address 0x4003caa4.
 * REA evidence: ev_29ad7d1136769febac7c95e631049af68c13f1a0b06b4a0e06ef0147273d6ca0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003caa4(int param_1)

{
  fence();
  if ((*(uint *)(param_1 + 0x38) & 0x20000000) == 0) {
    return 1 - ((int)(*(uint *)(param_1 + 0x38) << 3) >> 0x1f);
  }
  return 4;
}


/* NanoCore 1.11, address 0x4003cac2.
 * REA evidence: ev_bcea85d81413175408e878a6049cb6f1243fb9dda441ccb82bc429542aa666c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003cac2(int param_1)

{
  fence();
  return (*(uint *)(param_1 + 0x1c) & 0xffffff) >> 0x10;
}


/* NanoCore 1.11, address 0x4003cad0.
 * REA evidence: ev_eb4ac63abf17032e812bec5c16d418ef1845b93cd5b649e12e17dc7cf150c1c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cad0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    fence();
    *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(param_2 + iVar1);
  }
  return;
}


/* NanoCore 1.11, address 0x4003caec.
 * REA evidence: ev_16bb19f7a807d4af0c61ef6c12d125bcc511c52eeee24581834447ccd0ca4dbf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003caec(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    fence();
    *(undefined1 *)(param_2 + iVar1) = *(undefined1 *)(param_1 + 0x300);
  }
  return;
}


/* NanoCore 1.11, address 0x4003cb08.
 * REA evidence: ev_cae30f340e455e1926d781dbe7da615453e4664144a4275ee1be48ae451661c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cb08(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80000000;
  return;
}


/* NanoCore 1.11, address 0x4003cb1e.
 * REA evidence: ev_d78e3bab4afd0f1a0923f827631a5ba51c33eea0f50212c08818808776f129b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003cb1e(int param_1)

{
  fence();
  if (-1 < (int)*(uint *)(param_1 + 0x40)) {
    return (*(uint *)(param_1 + 0x40) & 0x3ffffff) >> 0x19;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4003cb36.
 * REA evidence: ev_60604b5fe30a62decb76a5eff32c1817cf3cc6bea8905eb997543f8d040c7372
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003cb36(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x40);
  fence();
  fence();
  *puVar1 = *puVar1 & 0xffc0ffff | 0x2000000;
  FUN_ram_4003ff8a(1);
  fence();
  return (*puVar1 >> 0x19 ^ 1) & 1;
}


/* NanoCore 1.11, address 0x4003cc0a.
 * REA evidence: ev_153be65a0a60e545a23342c875cef706f38f98e8f31fd3fbdce754eb8785e17c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003cc0a(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iStack_14;
  
  uVar1 = 0;
  while ((iVar2 = FUN_ram_40039810(param_1,&iStack_14), iVar2 != 0 && (iStack_14 != 0))) {
    uVar1 = uVar1 + 1;
    FUN_ram_4003ff8a(1);
    if (param_2 < uVar1) {
      FUN_ram_4003952c(*param_1);
      return 0xffffff8c;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4003cc50.
 * REA evidence: ev_1b2bf3ba3b85100355de95f6f0d34497a38ac1e2d0f0fb94c8721f0976b6c960
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cc50(int param_1,uint param_2,uint param_3,int param_4)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x30) = param_4 + param_2 & 0xffffff | *(uint *)(param_1 + 0x30) & 0xff000000;
  fence();
  fence();
  *(uint *)(param_1 + 0x34) = param_2 & 0xffffff | *(uint *)(param_1 + 0x34) & 0xff000000;
  fence();
  fence();
  *(uint *)(param_1 + 0x38) = param_3 & 0xffffff | *(uint *)(param_1 + 0x38) & 0xf0000000;
  return;
}


/* NanoCore 1.11, address 0x4003ccb2.
 * REA evidence: ev_158df9529ea391c252fc4e40e2c20fb38b8013b734bbb17c5fbd3f2168219ab1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4003ccb2(uint *param_1)

{
  bool bVar1;
  
  if (param_1[2] < 0x41) {
    bVar1 = false;
  }
  else if ((*param_1 == 0) || (bVar1 = false, (*param_1 & 7) == 0)) {
    bVar1 = true;
    if (param_1[1] != 0) {
      bVar1 = (param_1[1] & 7) == 0;
    }
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4003ccde.
 * REA evidence: ev_5f91a69231ff54ea3e9cca5a240666d977dcbf34def1b745b90253ede8aad023
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ccde(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  fence();
  if ((uVar1 & 0xf00) != 0) {
    FUN_ram_4003de3c();
  }
  iVar2 = FUN_ram_4003cac2(param_1);
  fence();
  if ((*(uint *)(param_1 + 0x1c) & 0xff) != 0 || iVar2 != 0) {
    FUN_ram_4003de3c(param_1);
    FUN_ram_4003ca22(param_1);
  }
  fence();
  *(uint *)(param_1 + 0x14) = uVar1;
  return;
}


/* NanoCore 1.11, address 0x4003cd3c.
 * REA evidence: ev_41bc4890a3bed2ab03b4597fe1128083b189bb069ccccbaae0d164923129fa7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cd3c(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x40);
  fence();
  fence();
  *puVar1 = *puVar1 & 0xfffffffc | 2;
  fence();
  fence();
  *puVar1 = *puVar1 | 0x20;
  fence();
  fence();
  *puVar1 = *puVar1 | 0x40;
  return;
}


/* NanoCore 1.11, address 0x4003cd74.
 * REA evidence: ev_070d0a6c5f897880755c50626ea20cdaff33910d84644b12f4fcc5dd78c5f32c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003cd74(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = FUN_ram_4003c996(*param_1);
  if (((*param_2 != 0) || (iVar2 = -0x16, param_2[1] != 0)) &&
     ((param_2[2] != 0 || (iVar2 = -0x16, param_2[3] != 0)))) {
    FUN_ram_4003ca22(iVar1);
    iVar3 = *param_2;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2[3];
      iVar9 = param_2[1];
      puVar7 = (uint *)(iVar1 + 0x40);
      uVar6 = iVar2 + 7U >> 3;
      if (iVar9 != 0) {
        iVar8 = param_2[2];
        fence();
        fence();
        *puVar7 = *puVar7 | 0x2000000;
        if (4 < uVar6) {
          uVar6 = 4;
          iVar2 = 0x20;
        }
        uVar4 = 0;
        for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
          uVar4 = uVar4 | (uint)*(byte *)(iVar3 + uVar5) << ((uVar5 & 3) << 3);
        }
        fence();
        *(uint *)(iVar1 + 0x48) = uVar4;
        fence();
        fence();
        *puVar7 = iVar8 << 0x10 | *puVar7 | iVar2 << 8 | 0x80000000;
        uVar6 = iVar8 + 7U >> 3;
        if (4 < uVar6) {
          uVar6 = 4;
          iVar8 = 0x20;
        }
        do {
          iVar2 = FUN_ram_4003cb1e(iVar1);
        } while (iVar2 == 0);
        do {
          iVar2 = FUN_ram_4003cb36(iVar1);
        } while (iVar2 == 0);
        uVar4 = *(uint *)(iVar1 + 0x4c);
        fence();
        for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
          *(char *)(iVar9 + uVar5) = (char)(uVar4 >> ((uVar5 & 3) << 3));
        }
        return iVar8;
      }
      fence();
      fence();
      *puVar7 = *puVar7 | 0x2000000;
      if (4 < uVar6) {
        uVar6 = 4;
        iVar2 = 0x20;
      }
      uVar4 = 0;
      for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
        uVar4 = uVar4 | (uint)*(byte *)(iVar3 + uVar5) << ((uVar5 & 3) << 3);
      }
      fence();
      *(uint *)(iVar1 + 0x48) = uVar4;
      fence();
      fence();
      *puVar7 = iVar2 << 8 | *puVar7 | 0x80000000;
      do {
        iVar3 = FUN_ram_4003cb1e(iVar1);
      } while (iVar3 == 0);
      do {
        fence();
        fence();
        *puVar7 = *puVar7 & 0xffffc0ff | 0x2000000;
        FUN_ram_4003ff8a(1);
        fence();
      } while ((*puVar7 & 0x2000000) != 0);
    }
    iVar3 = param_2[1];
    if (iVar3 != 0) {
      iVar2 = param_2[2];
      puVar7 = (uint *)(iVar1 + 0x40);
      fence();
      fence();
      *puVar7 = *puVar7 | 0x2000000;
      uVar6 = iVar2 + 7U >> 3;
      if (4 < uVar6) {
        uVar6 = 4;
        iVar2 = 0x20;
      }
      fence();
      fence();
      *puVar7 = iVar2 << 0x10 | *puVar7 | 0x80000000;
      do {
        iVar9 = FUN_ram_4003cb1e(iVar1);
      } while (iVar9 == 0);
      do {
        iVar9 = FUN_ram_4003cb36(iVar1);
      } while (iVar9 == 0);
      uVar4 = *(uint *)(iVar1 + 0x4c);
      fence();
      for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
        *(char *)(iVar3 + uVar5) = (char)(uVar4 >> ((uVar5 & 3) << 3));
      }
    }
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x4003cfb8.
 * REA evidence: ev_a471280475702f7d8fc3cc25697eaedaa5c6adb664139592b7ea8f2084fa1ac8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003cfb8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar4 = 0xffffffea;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar6 = *param_2;
    iVar1 = FUN_ram_4003c996(uVar6);
    uVar4 = 0xffffffed;
    if (iVar1 != -1) {
      uVar2 = param_2[1];
      if ((uint)param_2[1] < 32000000) {
        uVar2 = 32000000;
      }
      *param_1 = uVar6;
      uVar5 = 100000000;
      if (uVar2 < 0x5f5e101) {
        uVar5 = uVar2;
      }
      iVar7 = uVar5 + 1000000;
      do {
        iVar7 = iVar7 + -1000000;
        FUN_ram_40037a2e(param_2[2],iVar7);
        uVar2 = FUN_ram_400379fe(param_2[2]);
      } while (uVar5 < uVar2);
      FUN_ram_4003de94(s_freq__input__ram_400982fc,*param_1,uVar2);
      iVar7 = FUN_ram_400378d0(param_2[2]);
      if ((iVar7 < 0) || (iVar7 = FUN_ram_40037876(param_2[2]), iVar7 < 0)) {
        uVar4 = 0xfffffff2;
      }
      else {
        fence();
        puVar3 = (uint *)(iVar1 + 4);
        *puVar3 = 0x80000081;
        fence();
        fence();
        *puVar3 = *puVar3 & 0xfffffffd | 2;
        puVar3 = (uint *)(iVar1 + 8);
        fence();
        fence();
        *puVar3 = *puVar3 & 0xffffbfff | 0x4000;
        FUN_ram_4003c9aa(iVar1,param_2[5]);
        FUN_ram_4003ca38(iVar1,0xffffffff);
        fence();
        fence();
        *puVar3 = (*(byte *)((int)param_2 + 0x11) & 1) << 1 | *puVar3 & 0xfffffffd;
        fence();
        fence();
        *puVar3 = *(byte *)((int)param_2 + 0x12) & 1 | *puVar3 & 0xfffffffe;
        fence();
        fence();
        *puVar3 = (uint)*(byte *)((int)param_2 + 0xe) << 0xc | *puVar3 & 0xffffefff;
        fence();
        fence();
        *puVar3 = (uint)*(byte *)((int)param_2 + 0xd) << 0x19 | *puVar3 & 0xfdffffff;
        fence();
        fence();
        *puVar3 = (*(byte *)(param_2 + 4) & 1) << 2 | *puVar3 & 0xfffffffb;
        FUN_ram_4003c9da(iVar1,*(char *)(param_2 + 4) == '\x01');
        FUN_ram_4003c9f2(iVar1,*(char *)((int)param_2 + 0xf) == '\0');
        FUN_ram_4003ca0a(iVar1,1);
        FUN_ram_4003ca22(iVar1);
        fence();
        fence();
        *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xff00ff00 | 0x200020;
        uVar4 = param_2[2];
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[4] = uVar4;
        uVar4 = 0;
        if (*(char *)(param_1 + 0x14) != '\0') {
          FUN_ram_4003cd3c(iVar1);
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}


