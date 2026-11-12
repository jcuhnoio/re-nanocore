/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40043000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40043002.
 * REA evidence: ev_1b35b6ccbb47afe34a2fb6ffe913698366f0ab2e9858b165a664682e1d635b74
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043002(undefined4 param_1,int param_2)

{
  int iVar1;
  
  FUN_ram_40049f6c(param_2);
  FUN_ram_40046af4(0);
  FUN_ram_40047464(param_2);
  FUN_ram_40046af4(1);
  FUN_ram_400492c8(param_2,0);
  iVar1 = FUN_ram_40042c3c(param_2);
  if (iVar1 != 0) {
    FUN_ram_400423a6(param_2);
  }
  if (*(int **)(param_2 + 8) != (int *)0x0) {
    if (**(int **)(param_2 + 8) != 0) {
      FUN_ram_40059be4();
      **(undefined4 **)(param_2 + 8) = 0;
    }
    FUN_ram_40049f18(*(int *)(param_2 + 8) + 8);
    FUN_ram_40059be4(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40043064.
 * REA evidence: ev_4b5b3aaa08a1b34da2295950d0160c3d273a860c2aa858c633ac868e2b7641da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043064(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [28];
  
  iVar1 = FUN_ram_40044052();
  if ((param_2 & 1) != 0) {
    FUN_ram_40044572(param_1);
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_2;
  if ((((param_2 & 1) != 0) && ((*(ushort *)(param_1 + 0x28) & 2) != 0)) &&
     (iVar2 = FUN_ram_40042c3c(param_1), iVar2 != 0)) {
    FUN_ram_400422f8();
    iVar2 = FUN_ram_400424dc(iVar2);
    if (iVar2 != 0) {
      FUN_ram_40044572();
    }
  }
  iVar2 = FUN_ram_40044052(param_1);
  if ((iVar2 != iVar1) || ((param_2 & 0x1800000) != 0)) {
    FUN_ram_40047b04(param_1);
    FUN_ram_4004408a();
    FUN_ram_4004408a(param_1);
  }
  if ((param_2 & 0x10) != 0) {
    FUN_ram_40045ebe(param_1,auStack_40,auStack_30);
    FUN_ram_4004450e(param_1,auStack_40);
    FUN_ram_4004450e(param_1,auStack_30);
  }
  return;
}


/* NanoCore 1.10, address 0x40043102.
 * REA evidence: ev_0389b0990747bb4b1bd06618001806aec82480b6b3ca119968bcb82c457cd453
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043102(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = FUN_ram_40059bbc(0x2c);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) | 0x3c3;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40043130.
 * REA evidence: ev_654e1bed7bcd12d8c933b60f1c68e8df5405687f3333ff939c8884a40e9ab920
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043130(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if (*piVar1 != 0) {
    *param_2 = *piVar1;
    FUN_ram_40043130();
    *param_2 = (int)piVar1;
  }
  if ((code *)piVar1[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004315c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)piVar1[1])(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004316a.
 * REA evidence: ev_f1bd5ef0893a3247f16b8b3c9a847003b04adecfbcf3fbce6e9bf4f40f163d86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4004316a(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  piVar3 = (int *)param_1;
  do {
    if (piVar3 == (int *)0x0) {
      uVar2 = 0;
LAB_ram_40043196:
      piVar3 = (int *)FUN_ram_40059bbc(uVar2);
      if (piVar3 != (int *)0x0) {
        *piVar3 = param_1;
        piVar3[1] = param_2;
        if (param_2 == 0) {
          iVar4 = FUN_ram_4004c24c();
          if (iVar4 == 0) {
            FUN_ram_40059be4(piVar3);
            piVar3 = (int *)0x0;
          }
          else {
            if (*(int *)(iVar4 + 0x2b4) == 0) {
              *(undefined4 *)(iVar4 + 0x2d0) = 0;
            }
            iVar6 = *(int *)(iVar4 + 0x2d0) + 1;
            *(int *)(iVar4 + 0x2d0) = iVar6;
            iVar6 = FUN_ram_40059bf6(*(int *)(iVar4 + 0x2b4),iVar6 * 4);
            *(int *)(iVar4 + 0x2b4) = iVar6;
            *(int **)(iVar6 + *(int *)(iVar4 + 0x2d0) * 4 + -4) = piVar3;
            piVar3[5] = 0;
            piVar3[6] = 0;
            iVar4 = FUN_ram_4004c26a(0);
            piVar3[7] = iVar4 + -1;
            iVar4 = FUN_ram_4004c28c(0);
            piVar3[8] = iVar4 + -1;
          }
        }
        else {
          if (*(int *)(param_2 + 8) == 0) {
            FUN_ram_40043102(param_2);
          }
          puVar8 = *(undefined4 **)(param_2 + 8);
          sVar1 = *(short *)(puVar8 + 10);
          *(ushort *)(puVar8 + 10) = sVar1 + 1U;
          uVar5 = FUN_ram_40059bf6(*puVar8,(uint)(ushort)(sVar1 + 1U) << 2);
          piVar7 = *(int **)(param_2 + 8);
          *puVar8 = uVar5;
          *(int **)(*piVar7 + (*(ushort *)(piVar7 + 10) + 0x3fffffff) * 4) = piVar3;
        }
      }
      return piVar3;
    }
    if ((piVar3[8] & 0xffff0U) != 0) {
      uVar2 = (piVar3[8] & 0xfffffU) >> 4;
      goto LAB_ram_40043196;
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}


/* NanoCore 1.10, address 0x40043248.
 * REA evidence: ev_ca2f51c9df5cb8e98e2a59b0d51fb9a38dc7cb77292faec88ab484b2d0237335
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043248(int *param_1)

{
  code *pcVar1;
  
  while( true ) {
    pcVar1 = *(code **)(*param_1 + 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*param_1,param_1);
    }
    if (*(int *)*param_1 == 0) break;
    *param_1 = *(int *)*param_1;
  }
  return;
}


/* NanoCore 1.10, address 0x4004326c.
 * REA evidence: ev_5a5939f3b772e104241735d6aa9adcbaa4f5f2636420d5f4b37425a6561eb704
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004326c(int *param_1)

{
  param_1 = (int *)*param_1;
  while( true ) {
    if (param_1 == (int *)0x0) {
      return false;
    }
    if ((param_1[8] & 3U) != 0) break;
    param_1 = (int *)*param_1;
  }
  return (param_1[8] & 3U) == 1;
}


/* NanoCore 1.10, address 0x40043286.
 * REA evidence: ev_d4c2e8a512ed53e1f80d2159218db2e6c1825f0cb954d324ed8e79910429a61f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40043286(int *param_1)

{
  param_1 = (int *)*param_1;
  while( true ) {
    if (param_1 == (int *)0x0) {
      return false;
    }
    if ((param_1[8] & 0xcU) != 0) break;
    param_1 = (int *)*param_1;
  }
  return (param_1[8] & 0xcU) == 4;
}


/* NanoCore 1.10, address 0x400432a0.
 * REA evidence: ev_624a3ad05a16deab8773400e7f7a64d7dc4a62326fac9417941f9e5b33c39486
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400432a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_4004408a();
  FUN_ram_40046af4(0);
  FUN_ram_400588d0(param_1);
  FUN_ram_40043130(*param_1,param_1);
  FUN_ram_40046af4(1);
  FUN_ram_400471a2(param_1,0xf0000,0xff);
  FUN_ram_400441fa(param_1);
  iVar1 = FUN_ram_400422ee();
  if ((iVar1 != 0) && (iVar2 = FUN_ram_40043286(param_1), iVar2 != 0)) {
    FUN_ram_40042452(iVar1,param_1);
  }
  iVar1 = FUN_ram_40047b04(param_1);
  if (iVar1 != 0) {
    FUN_ram_40043bde(iVar1,0x25,param_1);
    FUN_ram_40043bde(iVar1,0x26,param_1);
    FUN_ram_40044572(param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004332c.
 * REA evidence: ev_1b3a4adae8d0e2b0ea8b3a3d8fd0d627af8f404bb4362b79beebd7bb9d4af20f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004332c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_40046afe(param_1,param_2,0x1c);
  uVar2 = FUN_ram_40046d60(param_1,param_2,uVar1);
  return uVar2 & 0xffffff;
}


/* NanoCore 1.10, address 0x40043368.
 * REA evidence: ev_7d4da93bd0e21f86d418e3132137a5902e6e9726e556839810a4c67c08c1075d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40043368(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_40046afe(param_1,param_2,0x58);
  uVar2 = FUN_ram_40046d60(param_1,param_2,uVar1);
  return uVar2 & 0xffffff;
}


/* NanoCore 1.10, address 0x400433a6.
 * REA evidence: ev_88aadcf9931b1a5db6a057e2b0362220c6ad4b359234a7d4f19dd11b84aae4c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400433a6(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *__src;
  int iVar5;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  uVar3 = FUN_ram_40047012();
  if ((param_2 == 0) || (2 < uVar3)) {
    uVar4 = FUN_ram_40046afe(param_1,param_2,0xc);
    param_3[7] = uVar4;
    if (*(char *)(param_3 + 8) != '\0') {
      bVar1 = FUN_ram_40046afe(param_1,param_2,0x1d);
      *(byte *)(param_3 + 8) = bVar1;
      if (2 < bVar1) {
        uVar4 = FUN_ram_4004332c(param_1,param_2);
        *(char *)((int)param_3 + 0x21) = (char)uVar4;
        *(char *)((int)param_3 + 0x23) = (char)((uint)uVar4 >> 0x10);
        *(char *)((int)param_3 + 0x22) = (char)((uint)uVar4 >> 8);
        __src = (void *)FUN_ram_40046afe(param_1,param_2,0x26);
        if ((__src == (void *)0x0) || ((*(byte *)((int)__src + 0xb) & 7) == 0)) {
          bVar1 = FUN_ram_40046afe(param_1,param_2,0x20);
          *(byte *)((int)param_3 + 0x2f) = *(byte *)((int)param_3 + 0x2f) & 0xf8 | bVar1 & 7;
          if ((bVar1 & 7) != 0) {
            uVar4 = FUN_ram_4004332c(param_1,param_2);
            *(char *)(param_3 + 9) = (char)uVar4;
            *(char *)((int)param_3 + 0x25) = (char)((uint)uVar4 >> 8);
            *(char *)((int)param_3 + 0x26) = (char)((uint)uVar4 >> 0x10);
            uVar4 = FUN_ram_40046afe(param_1,param_2,0x23);
            uVar4 = FUN_ram_40046d60(param_1,param_2,uVar4);
            *(char *)((int)param_3 + 0x2a) = (char)((uint)uVar4 >> 8);
            *(char *)((int)param_3 + 0x2b) = (char)((uint)uVar4 >> 0x10);
            *(char *)((int)param_3 + 0x29) = (char)uVar4;
            uVar2 = FUN_ram_40046afe(param_1,param_2,0x21);
            *(undefined1 *)(param_3 + 10) = uVar2;
            uVar2 = FUN_ram_40046afe(param_1,param_2,0x22);
            *(undefined1 *)((int)param_3 + 0x2d) = uVar2;
            uVar2 = FUN_ram_40046afe(param_1,param_2,0x24);
            *(undefined1 *)((int)param_3 + 0x27) = uVar2;
            uVar2 = FUN_ram_40046afe(param_1,param_2,0x25);
            *(undefined1 *)(param_3 + 0xb) = uVar2;
          }
        }
        else {
          memcpy(param_3 + 9,__src,0xc);
        }
      }
    }
    if (*(char *)(param_3 + 0x12) != '\0') {
      iVar5 = FUN_ram_40046afe(param_1,param_2,0x30);
      param_3[0x11] = iVar5;
      if (iVar5 != 0) {
        bVar1 = FUN_ram_40046afe(param_1,param_2,0x32);
        *(byte *)(param_3 + 0x12) = bVar1;
        if (2 < bVar1) {
          bVar1 = FUN_ram_40046afe(param_1,param_2,0x34);
          *(byte *)((int)param_3 + 0x49) = *(byte *)((int)param_3 + 0x49) & 0xe0 | bVar1 & 0x1f;
          uVar4 = FUN_ram_40046afe(param_1,param_2,0x31);
          uVar4 = FUN_ram_40046d60(param_1,param_2,uVar4);
          *(short *)((int)param_3 + 0x3e) = (short)uVar4;
          *(char *)(param_3 + 0x10) = (char)((uint)uVar4 >> 0x10);
        }
      }
    }
    if (*(char *)(param_3 + 0x16) != '\0') {
      iVar5 = FUN_ram_40046afe(param_1,param_2,0x38);
      param_3[0x14] = iVar5;
      if (iVar5 != 0) {
        bVar1 = FUN_ram_40046afe(param_1,param_2,0x3a);
        *(byte *)(param_3 + 0x16) = bVar1;
        if (2 < bVar1) {
          uVar4 = FUN_ram_40046afe(param_1,param_2,0x3b);
          param_3[0x15] = uVar4;
          uVar4 = FUN_ram_40046afe(param_1,param_2,0x39);
          uVar4 = FUN_ram_40046d60(param_1,param_2,uVar4);
          *(short *)((int)param_3 + 0x4a) = (short)uVar4;
          *(char *)(param_3 + 0x13) = (char)((uint)uVar4 >> 0x10);
        }
      }
    }
    if (*(char *)((int)param_3 + 0x3b) != '\0') {
      iVar5 = FUN_ram_40046afe(param_1,param_2,0x28);
      param_3[0xc] = iVar5;
      if (iVar5 != 0) {
        bVar1 = FUN_ram_40046afe(param_1,param_2,0x29);
        *(byte *)((int)param_3 + 0x3b) = bVar1;
        if (2 < bVar1) {
          iVar5 = FUN_ram_4004d31e(param_3[0xc]);
          if (iVar5 == 2) {
            uVar4 = FUN_ram_40046afe(param_1,param_2,0x5a);
            param_3[0xd] = uVar4;
            uVar4 = FUN_ram_40043368(param_1,param_2);
            *(char *)(param_3 + 0xe) = (char)uVar4;
            *(char *)((int)param_3 + 0x39) = (char)((uint)uVar4 >> 8);
            *(char *)((int)param_3 + 0x3a) = (char)((uint)uVar4 >> 0x10);
          }
          else {
            uVar4 = FUN_ram_40046afe(param_1,param_2,0x2a);
            uVar4 = FUN_ram_40046d60(param_1,param_2,uVar4);
            *(short *)(param_3 + 0xe) = (short)uVar4;
            *(char *)((int)param_3 + 0x3a) = (char)((uint)uVar4 >> 0x10);
            uVar2 = FUN_ram_40046afe(param_1,param_2,0x2b);
            *(undefined1 *)(param_3 + 0xf) = uVar2;
            iVar5 = FUN_ram_40046afe(param_1,param_2,0x2c);
            *(bool *)((int)param_3 + 0x3d) = iVar5 != 0;
          }
        }
      }
    }
    if (*(char *)(param_3 + 0x1b) != '\0') {
      iVar5 = FUN_ram_40046afe(param_1,param_2,0x3c);
      param_3[0x17] = iVar5;
      if ((iVar5 != 0) && (2 < *(byte *)(param_3 + 0x1b))) {
        bVar1 = FUN_ram_40046afe(param_1,param_2,0x3e);
        *(byte *)(param_3 + 0x1b) = bVar1;
        if (2 < bVar1) {
          uVar4 = FUN_ram_40046afe(param_1,param_2,0x40);
          param_3[0x18] = uVar4;
          uVar4 = FUN_ram_40046afe(param_1,param_2,0x41);
          param_3[0x19] = uVar4;
          uVar4 = FUN_ram_40046afe(param_1,param_2,0x42);
          param_3[0x1a] = uVar4;
          uVar4 = FUN_ram_40046afe(param_1,param_2,0x3d);
          uVar4 = FUN_ram_40046d60(param_1,param_2,uVar4);
          *(char *)((int)param_3 + 0x59) = (char)uVar4;
          *(char *)((int)param_3 + 0x5a) = (char)((uint)uVar4 >> 8);
          *(char *)((int)param_3 + 0x5b) = (char)((uint)uVar4 >> 0x10);
        }
      }
    }
    if (uVar3 < 0xfd) {
      *(char *)(param_3 + 8) = (char)(*(byte *)(param_3 + 8) * uVar3 >> 8);
      *(char *)((int)param_3 + 0x3b) = (char)(*(byte *)((int)param_3 + 0x3b) * uVar3 >> 8);
      *(char *)(param_3 + 0x12) = (char)(*(byte *)(param_3 + 0x12) * uVar3 >> 8);
      *(char *)(param_3 + 0x1b) = (char)(*(byte *)(param_3 + 0x1b) * uVar3 >> 8);
      *(char *)(param_3 + 0x16) = (char)(*(byte *)(param_3 + 0x16) * uVar3 >> 8);
    }
  }
  else {
    *(undefined1 *)(param_3 + 8) = 0;
    *(undefined1 *)((int)param_3 + 0x3b) = 0;
    *(undefined1 *)(param_3 + 0x12) = 0;
    *(undefined1 *)(param_3 + 0x16) = 0;
    *(undefined1 *)(param_3 + 0x1b) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40043798.
 * REA evidence: ev_030e9c5c44ceef4e79544705043dd94bb8b359f29c23a2c7cb17f8706d8e7508
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043798(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  bVar1 = FUN_ram_40046afe(param_1,param_2,0x59);
  *(byte *)(param_3 + 0x12) = bVar1;
  if (2 < bVar1) {
    uVar3 = FUN_ram_40047012(param_1,param_2);
    if (uVar3 < 0xfd) {
      *(char *)(param_3 + 0x12) = (char)(*(byte *)(param_3 + 0x12) * uVar3 >> 8);
    }
    if (2 < *(byte *)(param_3 + 0x12)) {
      uVar4 = FUN_ram_40043368(param_1,param_2);
      *(char *)(param_3 + 0xb) = (char)uVar4;
      *(char *)((int)param_3 + 0x2d) = (char)((uint)uVar4 >> 8);
      *(char *)((int)param_3 + 0x2e) = (char)((uint)uVar4 >> 0x10);
      uVar4 = FUN_ram_40046afe(param_1,param_2,0x5b);
      param_3[0xf] = uVar4;
      uVar4 = FUN_ram_40046afe(param_1,param_2,0x5c);
      param_3[0xe] = uVar4;
      bVar1 = FUN_ram_40046afe(param_1,param_2,0x5d);
      *(byte *)(param_3 + 0x13) = *(byte *)(param_3 + 0x13) & 0xf8 | bVar1 & 7;
      if (param_2 != 0) {
        bVar1 = FUN_ram_40046afe(param_1,param_2,0x67);
        *(byte *)(param_3 + 0x13) = (bVar1 & 7) << 3 | *(byte *)(param_3 + 0x13) & 199;
      }
      uVar4 = FUN_ram_40046afe(param_1,param_2,0x5a);
      param_3[8] = uVar4;
      uVar2 = FUN_ram_40046afe(param_1,param_2,0x5e);
      *(undefined1 *)((int)param_3 + 0x4a) = uVar2;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40043894.
 * REA evidence: ev_daedd457374d2b4435430a56af995dfdf2f470a5d3e7382d2865d5287cbf2a1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400438fe) */
/* WARNING: Removing unreachable block (ram,0x40043912) */

void FUN_ram_40043894(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  bVar1 = FUN_ram_40046afe(param_1,param_2,0x44);
  *(byte *)(param_3 + 0x13) = bVar1;
  if (2 < bVar1) {
    uVar3 = FUN_ram_40047012(param_1,param_2);
    if (uVar3 < 0xfd) {
      *(char *)(param_3 + 0x13) = (char)(*(byte *)(param_3 + 0x13) * uVar3 >> 8);
    }
    if (2 < *(byte *)(param_3 + 0x13)) {
      iVar5 = *(int *)(param_1 + 0x1c);
      param_3[0xc] = 0x100;
      param_3[0xd] = 0x100;
      iVar6 = *(int *)(param_1 + 0x14);
      iVar7 = *(int *)(param_1 + 0x20);
      param_3[0xb] = 0;
      param_3[0x10] = ((iVar5 - iVar6) + 1) / 2;
      param_3[0x11] = ((iVar7 - *(int *)(param_1 + 0x18)) + 1) / 2;
      uVar2 = FUN_ram_40046afe(param_1,param_2,0x46);
      *(undefined1 *)((int)param_3 + 0x4b) = uVar2;
      uVar4 = FUN_ram_40046afe(param_1,param_2,0x45);
      uVar4 = FUN_ram_40046d60(param_1,param_2,uVar4);
      *(short *)(param_3 + 0x12) = (short)uVar4;
      *(char *)((int)param_3 + 0x4a) = (char)((uint)uVar4 >> 0x10);
      if (param_2 != 0) {
        bVar1 = FUN_ram_40046afe(param_1,param_2,0x67);
        *(byte *)((int)param_3 + 0x4d) = *(byte *)((int)param_3 + 0x4d) & 0xf0 | bVar1 & 0xf;
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40043972.
 * REA evidence: ev_0f1002b5fb234d99e5dd7ce7e417b6c906cd274ade6526780c7bb0470b5c257e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400439ac) */

int FUN_ram_40043972(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = FUN_ram_40046afe(param_1,param_2,0x3c);
  if ((iVar3 != 0) && (bVar2 = FUN_ram_40046afe(param_1,param_2,0x3e), 2 < bVar2)) {
    iVar6 = FUN_ram_40046afe(param_1,param_2,0x42);
    uVar4 = FUN_ram_40046afe(param_1,param_2,0x40);
    uVar5 = FUN_ram_40046afe(param_1,param_2,0x41);
    iVar1 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
    iVar7 = ((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f);
    if (iVar1 < iVar7) {
      iVar1 = iVar7;
    }
    iVar1 = iVar3 / 2 + 1 + iVar6 + iVar1;
    if (-1 < iVar1) goto LAB_ram_40043a02;
  }
  iVar1 = 0;
LAB_ram_40043a02:
  iVar3 = FUN_ram_40046afe(param_1,param_2,0x38);
  if ((iVar3 != 0) && (bVar2 = FUN_ram_40046afe(param_1,param_2,0x3a), 2 < bVar2)) {
    iVar6 = FUN_ram_40046afe(param_1,param_2,0x3b);
    if (iVar1 < iVar3 + iVar6) {
      iVar1 = iVar3 + iVar6;
    }
  }
  iVar6 = FUN_ram_40046afe(param_1,param_2,0x68);
  iVar3 = FUN_ram_40046afe(param_1,param_2,0x69);
  if (iVar3 < iVar6) {
    iVar3 = iVar6;
  }
  if (0 < iVar3) {
    iVar1 = iVar1 + iVar3;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40043a7e.
 * REA evidence: ev_601aa2cf0507291d5a10792bb7764d34f788ef85d55c57ad7fc4ea5170da10ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043a7e(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40043a8a.
 * REA evidence: ev_e15c1b5d0fc1027b6c566088951762a449ad4ff3177c36e5a53397768c3b250d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043a8a(int param_1)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40043a7e();
  aiStack_14[0] = 0;
  FUN_ram_40043bde(param_1,0x16,aiStack_14);
  if (*(int *)(param_1 + 8) == 0) {
    if (aiStack_14[0] != 0) {
      FUN_ram_40043102(param_1);
      *(int *)(*(int *)(param_1 + 8) + 0x24) = aiStack_14[0];
    }
  }
  else {
    *(int *)(*(int *)(param_1 + 8) + 0x24) = aiStack_14[0];
  }
  if (aiStack_14[0] != iVar1) {
    FUN_ram_40044572(param_1);
  }
  return;
}


/* NanoCore 1.10, address 0x40043ad2.
 * REA evidence: ev_8b02c431940ca99d3fe5f93bbd73e18a72a4d034776d41824cde38669dd64cbb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40043ad2(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0xfffffff) >> 0x1a;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40043ae2.
 * REA evidence: ev_810d9c5635eec5fc720c3b8233c74d3963de8b192ed8481e3e25e422fa64a26a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_40043ae2(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) goto LAB_ram_40043b0e;
  param_1 = *(int **)*param_2;
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 1;
    }
    pcVar1 = (code *)param_1[3];
    if (pcVar1 != (code *)0x0) break;
LAB_ram_40043b0e:
    param_1 = (int *)*param_1;
  }
  param_2[3] = 0;
  (*pcVar1)();
  return ~*(byte *)(param_2 + 6) & 1;
}


/* NanoCore 1.10, address 0x40043b16.
 * REA evidence: ev_4c0b0b513dd3a31d1fdc2beef10baba0c0e73af0f5e5270eb5dcdd884f1bd627
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40043b16(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  while( true ) {
    iVar2 = FUN_ram_40055d54();
    if (iVar2 != 0) {
      bVar1 = *(byte *)(param_1 + 6);
      if ((bVar1 & 2) != 0) {
        return 1;
      }
      if ((bVar1 & 1) != 0) {
        return bVar1 & 2;
      }
    }
    iVar2 = *(int *)(*param_1 + 8);
    if (iVar2 != 0) {
      iVar2 = iVar2 + 8;
    }
    uVar3 = FUN_ram_40049e50(iVar2,param_1,1);
    if (uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_ram_40043ae2(0,param_1);
    if (uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_ram_40049e50(iVar2,param_1,0);
    if (uVar3 != 1) break;
    iVar2 = FUN_ram_40047b04(*param_1);
    if ((iVar2 == 0) || ((*(byte *)(param_1 + 6) & 4) != 0)) {
      return 1;
    }
    if (1 < param_1[2] - 0x26U) {
      iVar4 = FUN_ram_40042c20(*param_1,0x4000);
      if (iVar4 == 0) {
        return 1;
      }
      if ((param_1[2] - 0x13U < 0x1d) && ((1 << (param_1[2] - 0x13U & 0x1f) & 0x161e27fdU) != 0)) {
        return 1;
      }
    }
    *param_1 = iVar2;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40043bde.
 * REA evidence: ev_64e8b2bec61edbd9e49ec8f5e3d077510176ed6fcacd23455e8db310b9220040
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043bde(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte bStack_14;
  
  uVar1 = 1;
  if (param_1 != 0) {
    bStack_14 = bStack_14 & 0xf8;
    uStack_20 = 0;
    iStack_2c = param_1;
    iStack_28 = param_1;
    uStack_24 = param_2;
    uStack_1c = param_3;
    FUN_ram_40049e34(&iStack_2c);
    uVar1 = FUN_ram_40043b16(&iStack_2c);
    FUN_ram_40049e44(&iStack_2c);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40043c1a.
 * REA evidence: ev_82b212257e786acc403780be44f3073dd82f52cd03a9c18a21773ae54ef1a2d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043c1a(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 8) < 0x13) && ((0x77bfeU >> (*(uint *)(param_1 + 8) & 0x1f) & 1) != 0)) {
    uVar1 = FUN_ram_40049f68();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40043c3a.
 * REA evidence: ev_2b7935650ee868584f8dfae74d67164f6efd2d85a6a27f2cf7ac9cd6c0c4c550
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043c3a(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) - 0x17U < 6) {
    uVar1 = FUN_ram_40049f68();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40043c4c.
 * REA evidence: ev_7923325822621f5e60b543c7aea64c0a2f901aa3b0e1e245e8690688354b4f61
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043c4c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) != 0xe) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_ram_40049f68();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40043c60.
 * REA evidence: ev_14ed9720cedade169451ca4755e163913d5b44796360e7120f15ff34dd07ea6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40043c60(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_40049f68();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40043c6e.
 * REA evidence: ev_063e1d9aa05bc2556f81451128dc58ed689dadba2162293097978d1e8badac32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043c6e(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0x16) {
    piVar1 = (int *)FUN_ram_40049f68();
    iVar2 = *piVar1;
    if (*piVar1 < param_2) {
      iVar2 = param_2;
    }
    *piVar1 = iVar2;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40043c98.
 * REA evidence: ev_ce2718ba060e5d83fea0272c6117346d0b50cf0abee6f1ee3aa4336f24172553
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40043c98(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_ram_40046afe(param_1,0,0x27);
  return uVar1;
}


/* NanoCore 1.10, address 0x40043cb0.
 * REA evidence: ev_8b7813daee864bb454ba12827c07917b17fd44ddc5cc4dab45a1dcf97ed442b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40043cb0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40046afe(param_1,0,0x12);
  iVar2 = FUN_ram_40046afe(param_1,0,0x30);
  uVar3 = FUN_ram_40046afe(param_1,0,0x34);
  if ((uVar3 & 4) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40043cf8.
 * REA evidence: ev_5817dd52e5f3c47ad868a2735d0446872ec3ccfd0cb16e1c0770a15371b96725
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40043dc4) */
/* WARNING: Removing unreachable block (ram,0x40043e04) */

void FUN_ram_40043cf8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uStack_38;
  uint uStack_34;
  
  uVar2 = FUN_ram_40046afe(param_1,0,0x6e);
  uStack_38 = uVar2;
  uStack_38 = FUN_ram_40046afe(param_1,0,0x6c);
  iVar1 = (int)(short)uStack_38;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  uStack_38 = FUN_ram_40046afe(param_1,0,0x6d);
  iVar4 = (int)(short)uStack_38;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  if (((uVar2 != 0) || (iVar1 != 0x100)) || (iVar4 != 0x100)) {
    uStack_38 = FUN_ram_40046afe(param_1,0,0x6f);
    uStack_34 = FUN_ram_40046afe(param_1,0,0x70);
    if (((uStack_38 & 0x60000000) == 0x20000000) &&
       (uVar3 = uStack_38 & 0x9fffffff, (int)uVar3 < 0x7d1)) {
      if (1000 < (int)uVar3) {
        uVar3 = 1000 - uVar3;
      }
      uStack_38 = (int)(((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) * uVar3) / 100;
    }
    if (((uStack_34 & 0x60000000) == 0x20000000) &&
       (uVar3 = uStack_34 & 0x9fffffff, (int)uVar3 < 0x7d1)) {
      if (1000 < (int)uVar3) {
        uVar3 = 1000 - uVar3;
      }
      uStack_34 = (int)(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) * uVar3) / 100;
    }
    uStack_38 = uStack_38 + *(int *)(param_1 + 0x14);
    uStack_34 = uStack_34 + *(int *)(param_1 + 0x18);
    if (param_4 != 0) {
      if (iVar1 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = (iVar1 + 0xffff) / iVar1;
      }
      uVar2 = -uVar2;
      if (iVar4 == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = (iVar4 + 0xffff) / iVar4;
      }
    }
    FUN_ram_40049a0e(param_2,param_3,uVar2,iVar1,iVar4,&uStack_38,param_4 ^ 1);
  }
  return;
}


/* NanoCore 1.10, address 0x40043e5e.
 * REA evidence: ev_ec72ccbb249d53302d7ab4d7cd34e75c00d199316b53fd1a595e28b5ce227480
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40043e5e(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40046afe(param_1,0,0x11);
  iVar2 = FUN_ram_40046afe(param_1,0,0x30);
  uVar3 = FUN_ram_40046afe(param_1,0,0x34);
  if ((uVar3 & 1) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40043ea6.
 * REA evidence: ev_c8364f56e69e45a5393b0c679535788f3e6bccf5e75fd8511f235b50f0b6b7d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40043ea6(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40046afe(param_1,0,0x10);
  iVar2 = FUN_ram_40046afe(param_1,0,0x30);
  uVar3 = FUN_ram_40046afe(param_1,0,0x34);
  if ((uVar3 & 2) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40043eee.
 * REA evidence: ev_9f13cbc38aeebc7af56f82bb6dee52864cc4ca77a8aa3ff39532964d853d992c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40043eee(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40046afe(param_1,0,0x13);
  iVar2 = FUN_ram_40046afe(param_1,0,0x30);
  uVar3 = FUN_ram_40046afe(param_1,0,0x34);
  if ((uVar3 & 8) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40043f36.
 * REA evidence: ev_0cad1c3167b1896c4f81f29ad07954ef9dee1b29ef7a46a4072624f9270c75c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043f36(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40046b86(param_1,8,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_400478a6(param_1,param_2,0);
  return;
}


/* NanoCore 1.10, address 0x40043f70.
 * REA evidence: ev_59d35d3213ae8368fe24d486271c8b6f9b24ab7e3defb351ab5a3fc8ef8eecd4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043f70(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40046b86(param_1,9,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_400478b4(param_1,param_2,0);
  return;
}


/* NanoCore 1.10, address 0x40043faa.
 * REA evidence: ev_52cd0a56fee757b76c1ecac17615d79962d63c696c9e909526778b993534413d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043faa(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40043f36();
  FUN_ram_40043f70(param_1,param_3);
  return;
}


/* NanoCore 1.10, address 0x40043fc4.
 * REA evidence: ev_9b5cd811950054cb7cfcd72e20f3bff25a047e068bceb63fbbe7468b185638b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043fc4(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40046b86(param_1,1,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_4004787c(param_1,param_2,0);
  return;
}


/* NanoCore 1.10, address 0x40043ffe.
 * REA evidence: ev_01e55fd6390508c9771279a44952ab9e6520b48cc2156de609a4e414c8cf9c4c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40043ffe(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40046b86(param_1,2,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_40047898(param_1,param_2,0);
  return;
}


