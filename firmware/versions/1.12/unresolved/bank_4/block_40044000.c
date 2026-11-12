/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40044000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4004406c.
 * REA evidence: ev_332f224c3a35ed029f0e151eeda53cfff804635db5367039886bf947c197b7ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004406c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  FUN_ram_4004afd6(param_2);
  FUN_ram_40047b5e(0);
  FUN_ram_400484ce(param_2);
  FUN_ram_40047b5e(1);
  FUN_ram_4004a332(param_2,0);
  iVar1 = FUN_ram_40043ca6(param_2);
  if (iVar1 != 0) {
    FUN_ram_40043410(param_2);
  }
  if (*(int **)(param_2 + 8) != (int *)0x0) {
    if (**(int **)(param_2 + 8) != 0) {
      FUN_ram_4005a988();
      **(undefined4 **)(param_2 + 8) = 0;
    }
    FUN_ram_4004af82(*(int *)(param_2 + 8) + 8);
    FUN_ram_4005a988(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x400440ce.
 * REA evidence: ev_28bbfdbcb733b18db572141161bf421f1db7d88108d0f99cf434a77cbb8304e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400440ce(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [28];
  
  iVar1 = FUN_ram_400450bc();
  if ((param_2 & 1) != 0) {
    FUN_ram_400455dc(param_1);
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_2;
  if ((((param_2 & 1) != 0) && ((*(ushort *)(param_1 + 0x28) & 2) != 0)) &&
     (iVar2 = FUN_ram_40043ca6(param_1), iVar2 != 0)) {
    FUN_ram_40043362();
    iVar2 = FUN_ram_40043546(iVar2);
    if (iVar2 != 0) {
      FUN_ram_400455dc();
    }
  }
  iVar2 = FUN_ram_400450bc(param_1);
  if ((iVar2 != iVar1) || ((param_2 & 0x1800000) != 0)) {
    FUN_ram_40048b6e(param_1);
    FUN_ram_400450f4();
    FUN_ram_400450f4(param_1);
  }
  if ((param_2 & 0x10) != 0) {
    FUN_ram_40046f28(param_1,auStack_40,auStack_30);
    FUN_ram_40045578(param_1,auStack_40);
    FUN_ram_40045578(param_1,auStack_30);
  }
  return;
}


/* NanoCore 1.12, address 0x4004416c.
 * REA evidence: ev_ca614682fcc29ef1005390b28d0063e728b1472094a685b4a015fc87df71d39f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004416c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = FUN_ram_4005a960(0x2c);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) | 0x3c3;
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004419a.
 * REA evidence: ev_512882638db4aab60636793a8697bdd85bae3c0e3ec9fa3d5ef180f33921933a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004419a(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if (*piVar1 != 0) {
    *param_2 = *piVar1;
    FUN_ram_4004419a();
    *param_2 = (int)piVar1;
  }
  if ((code *)piVar1[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400441c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)piVar1[1])(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400441d4.
 * REA evidence: ev_6d66e1e9c438a6f5bec93869dad3db55ea863ae7dc116e548159e23b85eee19b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_400441d4(int param_1,int param_2)

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
LAB_ram_40044200:
      piVar3 = (int *)FUN_ram_4005a960(uVar2);
      if (piVar3 != (int *)0x0) {
        *piVar3 = param_1;
        piVar3[1] = param_2;
        if (param_2 == 0) {
          iVar4 = FUN_ram_4004d2b6();
          if (iVar4 == 0) {
            FUN_ram_4005a988(piVar3);
            piVar3 = (int *)0x0;
          }
          else {
            if (*(int *)(iVar4 + 0x2b4) == 0) {
              *(undefined4 *)(iVar4 + 0x2d0) = 0;
            }
            iVar6 = *(int *)(iVar4 + 0x2d0) + 1;
            *(int *)(iVar4 + 0x2d0) = iVar6;
            iVar6 = FUN_ram_4005a99a(*(int *)(iVar4 + 0x2b4),iVar6 * 4);
            *(int *)(iVar4 + 0x2b4) = iVar6;
            *(int **)(iVar6 + *(int *)(iVar4 + 0x2d0) * 4 + -4) = piVar3;
            piVar3[5] = 0;
            piVar3[6] = 0;
            iVar4 = FUN_ram_4004d2d4(0);
            piVar3[7] = iVar4 + -1;
            iVar4 = FUN_ram_4004d2f6(0);
            piVar3[8] = iVar4 + -1;
          }
        }
        else {
          if (*(int *)(param_2 + 8) == 0) {
            FUN_ram_4004416c(param_2);
          }
          puVar8 = *(undefined4 **)(param_2 + 8);
          sVar1 = *(short *)(puVar8 + 10);
          *(ushort *)(puVar8 + 10) = sVar1 + 1U;
          uVar5 = FUN_ram_4005a99a(*puVar8,(uint)(ushort)(sVar1 + 1U) << 2);
          piVar7 = *(int **)(param_2 + 8);
          *puVar8 = uVar5;
          *(int **)(*piVar7 + (*(ushort *)(piVar7 + 10) + 0x3fffffff) * 4) = piVar3;
        }
      }
      return piVar3;
    }
    if ((piVar3[8] & 0xffff0U) != 0) {
      uVar2 = (piVar3[8] & 0xfffffU) >> 4;
      goto LAB_ram_40044200;
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}


/* NanoCore 1.12, address 0x400442b2.
 * REA evidence: ev_e584c98a4e1e0bce315b92caab59e76b757354d5a8c42730e7b1bba4941e880d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400442b2(int *param_1)

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


/* NanoCore 1.12, address 0x400442d6.
 * REA evidence: ev_a599228ef87a1eb039fdeeb7cab5dac5a8f2faa7428250afb9f15c5f0583be4b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400442d6(int *param_1)

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


/* NanoCore 1.12, address 0x400442f0.
 * REA evidence: ev_9a87c989d9741528c009f0a5c7b140579ec54f3d5f13d1900f70c7a27e44d6a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400442f0(int *param_1)

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


/* NanoCore 1.12, address 0x4004430a.
 * REA evidence: ev_23e992e7b112519861734498369a73cceec79f92a200e8cc4dab5b1f3b50c481
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004430a(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_400450f4();
  FUN_ram_40047b5e(0);
  FUN_ram_40059674(param_1);
  FUN_ram_4004419a(*param_1,param_1);
  FUN_ram_40047b5e(1);
  FUN_ram_4004820c(param_1,0xf0000,0xff);
  FUN_ram_40045264(param_1);
  iVar1 = FUN_ram_40043358();
  if ((iVar1 != 0) && (iVar2 = FUN_ram_400442f0(param_1), iVar2 != 0)) {
    FUN_ram_400434bc(iVar1,param_1);
  }
  iVar1 = FUN_ram_40048b6e(param_1);
  if (iVar1 != 0) {
    FUN_ram_40044c48(iVar1,0x25,param_1);
    FUN_ram_40044c48(iVar1,0x26,param_1);
    FUN_ram_400455dc(param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40044396.
 * REA evidence: ev_8a65ad2afbd45b2326ef8dda45ee3958e2a2cf2dd2efa50c317d4dc57e8cb515
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40044396(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_40047b68(param_1,param_2,0x1c);
  uVar2 = FUN_ram_40047dca(param_1,param_2,uVar1);
  return uVar2 & 0xffffff;
}


/* NanoCore 1.12, address 0x400443d2.
 * REA evidence: ev_5a66cd311d8f2448c86f4558db56afca26b5ad15d331a0dbe614c459b721aee0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400443d2(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_40047b68(param_1,param_2,0x58);
  uVar2 = FUN_ram_40047dca(param_1,param_2,uVar1);
  return uVar2 & 0xffffff;
}


/* NanoCore 1.12, address 0x40044410.
 * REA evidence: ev_eab97884a6780d1f8b562477c2c767c1dd63701dbc5df2eb56f00e2b327e8a03
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044410(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  uVar3 = FUN_ram_4004807c();
  if ((param_2 == 0) || (2 < uVar3)) {
    uVar4 = FUN_ram_40047b68(param_1,param_2,0xc);
    param_3[7] = uVar4;
    if (*(char *)(param_3 + 8) != '\0') {
      bVar1 = FUN_ram_40047b68(param_1,param_2,0x1d);
      *(byte *)(param_3 + 8) = bVar1;
      if (2 < bVar1) {
        uVar4 = FUN_ram_40044396(param_1,param_2);
        *(char *)((int)param_3 + 0x21) = (char)uVar4;
        *(char *)((int)param_3 + 0x23) = (char)((uint)uVar4 >> 0x10);
        *(char *)((int)param_3 + 0x22) = (char)((uint)uVar4 >> 8);
        iVar5 = FUN_ram_40047b68(param_1,param_2,0x26);
        if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0xb) & 7) == 0)) {
          bVar1 = FUN_ram_40047b68(param_1,param_2,0x20);
          *(byte *)((int)param_3 + 0x2f) = *(byte *)((int)param_3 + 0x2f) & 0xf8 | bVar1 & 7;
          if ((bVar1 & 7) != 0) {
            uVar4 = FUN_ram_40044396(param_1,param_2);
            *(char *)(param_3 + 9) = (char)uVar4;
            *(char *)((int)param_3 + 0x25) = (char)((uint)uVar4 >> 8);
            *(char *)((int)param_3 + 0x26) = (char)((uint)uVar4 >> 0x10);
            uVar4 = FUN_ram_40047b68(param_1,param_2,0x23);
            uVar4 = FUN_ram_40047dca(param_1,param_2,uVar4);
            *(char *)((int)param_3 + 0x2a) = (char)((uint)uVar4 >> 8);
            *(char *)((int)param_3 + 0x2b) = (char)((uint)uVar4 >> 0x10);
            *(char *)((int)param_3 + 0x29) = (char)uVar4;
            uVar2 = FUN_ram_40047b68(param_1,param_2,0x21);
            *(undefined1 *)(param_3 + 10) = uVar2;
            uVar2 = FUN_ram_40047b68(param_1,param_2,0x22);
            *(undefined1 *)((int)param_3 + 0x2d) = uVar2;
            uVar2 = FUN_ram_40047b68(param_1,param_2,0x24);
            *(undefined1 *)((int)param_3 + 0x27) = uVar2;
            uVar2 = FUN_ram_40047b68(param_1,param_2,0x25);
            *(undefined1 *)(param_3 + 0xb) = uVar2;
          }
        }
        else {
          thunk_FUN_ram_4000500c(param_3 + 9,iVar5,0xc);
        }
      }
    }
    if (*(char *)(param_3 + 0x12) != '\0') {
      iVar5 = FUN_ram_40047b68(param_1,param_2,0x30);
      param_3[0x11] = iVar5;
      if (iVar5 != 0) {
        bVar1 = FUN_ram_40047b68(param_1,param_2,0x32);
        *(byte *)(param_3 + 0x12) = bVar1;
        if (2 < bVar1) {
          bVar1 = FUN_ram_40047b68(param_1,param_2,0x34);
          *(byte *)((int)param_3 + 0x49) = *(byte *)((int)param_3 + 0x49) & 0xe0 | bVar1 & 0x1f;
          uVar4 = FUN_ram_40047b68(param_1,param_2,0x31);
          uVar4 = FUN_ram_40047dca(param_1,param_2,uVar4);
          *(short *)((int)param_3 + 0x3e) = (short)uVar4;
          *(char *)(param_3 + 0x10) = (char)((uint)uVar4 >> 0x10);
        }
      }
    }
    if (*(char *)(param_3 + 0x16) != '\0') {
      iVar5 = FUN_ram_40047b68(param_1,param_2,0x38);
      param_3[0x14] = iVar5;
      if (iVar5 != 0) {
        bVar1 = FUN_ram_40047b68(param_1,param_2,0x3a);
        *(byte *)(param_3 + 0x16) = bVar1;
        if (2 < bVar1) {
          uVar4 = FUN_ram_40047b68(param_1,param_2,0x3b);
          param_3[0x15] = uVar4;
          uVar4 = FUN_ram_40047b68(param_1,param_2,0x39);
          uVar4 = FUN_ram_40047dca(param_1,param_2,uVar4);
          *(short *)((int)param_3 + 0x4a) = (short)uVar4;
          *(char *)(param_3 + 0x13) = (char)((uint)uVar4 >> 0x10);
        }
      }
    }
    if (*(char *)((int)param_3 + 0x3b) != '\0') {
      iVar5 = FUN_ram_40047b68(param_1,param_2,0x28);
      param_3[0xc] = iVar5;
      if (iVar5 != 0) {
        bVar1 = FUN_ram_40047b68(param_1,param_2,0x29);
        *(byte *)((int)param_3 + 0x3b) = bVar1;
        if (2 < bVar1) {
          iVar5 = FUN_ram_4004e36e(param_3[0xc]);
          if (iVar5 == 2) {
            uVar4 = FUN_ram_40047b68(param_1,param_2,0x5a);
            param_3[0xd] = uVar4;
            uVar4 = FUN_ram_400443d2(param_1,param_2);
            *(char *)(param_3 + 0xe) = (char)uVar4;
            *(char *)((int)param_3 + 0x39) = (char)((uint)uVar4 >> 8);
            *(char *)((int)param_3 + 0x3a) = (char)((uint)uVar4 >> 0x10);
          }
          else {
            uVar4 = FUN_ram_40047b68(param_1,param_2,0x2a);
            uVar4 = FUN_ram_40047dca(param_1,param_2,uVar4);
            *(short *)(param_3 + 0xe) = (short)uVar4;
            *(char *)((int)param_3 + 0x3a) = (char)((uint)uVar4 >> 0x10);
            uVar2 = FUN_ram_40047b68(param_1,param_2,0x2b);
            *(undefined1 *)(param_3 + 0xf) = uVar2;
            iVar5 = FUN_ram_40047b68(param_1,param_2,0x2c);
            *(bool *)((int)param_3 + 0x3d) = iVar5 != 0;
          }
        }
      }
    }
    if (*(char *)(param_3 + 0x1b) != '\0') {
      iVar5 = FUN_ram_40047b68(param_1,param_2,0x3c);
      param_3[0x17] = iVar5;
      if ((iVar5 != 0) && (2 < *(byte *)(param_3 + 0x1b))) {
        bVar1 = FUN_ram_40047b68(param_1,param_2,0x3e);
        *(byte *)(param_3 + 0x1b) = bVar1;
        if (2 < bVar1) {
          uVar4 = FUN_ram_40047b68(param_1,param_2,0x40);
          param_3[0x18] = uVar4;
          uVar4 = FUN_ram_40047b68(param_1,param_2,0x41);
          param_3[0x19] = uVar4;
          uVar4 = FUN_ram_40047b68(param_1,param_2,0x42);
          param_3[0x1a] = uVar4;
          uVar4 = FUN_ram_40047b68(param_1,param_2,0x3d);
          uVar4 = FUN_ram_40047dca(param_1,param_2,uVar4);
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


/* NanoCore 1.12, address 0x40044802.
 * REA evidence: ev_3ffa9c038ed66f8207f4b4a205397a91cd4ae6e14bb83bdbf214e1bb16cd1e2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044802(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  bVar1 = FUN_ram_40047b68(param_1,param_2,0x59);
  *(byte *)(param_3 + 0x12) = bVar1;
  if (2 < bVar1) {
    uVar3 = FUN_ram_4004807c(param_1,param_2);
    if (uVar3 < 0xfd) {
      *(char *)(param_3 + 0x12) = (char)(*(byte *)(param_3 + 0x12) * uVar3 >> 8);
    }
    if (2 < *(byte *)(param_3 + 0x12)) {
      uVar4 = FUN_ram_400443d2(param_1,param_2);
      *(char *)(param_3 + 0xb) = (char)uVar4;
      *(char *)((int)param_3 + 0x2d) = (char)((uint)uVar4 >> 8);
      *(char *)((int)param_3 + 0x2e) = (char)((uint)uVar4 >> 0x10);
      uVar4 = FUN_ram_40047b68(param_1,param_2,0x5b);
      param_3[0xf] = uVar4;
      uVar4 = FUN_ram_40047b68(param_1,param_2,0x5c);
      param_3[0xe] = uVar4;
      bVar1 = FUN_ram_40047b68(param_1,param_2,0x5d);
      *(byte *)(param_3 + 0x13) = *(byte *)(param_3 + 0x13) & 0xf8 | bVar1 & 7;
      if (param_2 != 0) {
        bVar1 = FUN_ram_40047b68(param_1,param_2,0x67);
        *(byte *)(param_3 + 0x13) = (bVar1 & 7) << 3 | *(byte *)(param_3 + 0x13) & 199;
      }
      uVar4 = FUN_ram_40047b68(param_1,param_2,0x5a);
      param_3[8] = uVar4;
      uVar2 = FUN_ram_40047b68(param_1,param_2,0x5e);
      *(undefined1 *)((int)param_3 + 0x4a) = uVar2;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400448fe.
 * REA evidence: ev_684873f2bf6a4835c3169a144ccf38ee8c18e0bc2d6769b3935511644eaea7d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40044968) */
/* WARNING: Removing unreachable block (ram,0x4004497c) */

void FUN_ram_400448fe(int param_1,int param_2,int *param_3)

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
  bVar1 = FUN_ram_40047b68(param_1,param_2,0x44);
  *(byte *)(param_3 + 0x13) = bVar1;
  if (2 < bVar1) {
    uVar3 = FUN_ram_4004807c(param_1,param_2);
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
      uVar2 = FUN_ram_40047b68(param_1,param_2,0x46);
      *(undefined1 *)((int)param_3 + 0x4b) = uVar2;
      uVar4 = FUN_ram_40047b68(param_1,param_2,0x45);
      uVar4 = FUN_ram_40047dca(param_1,param_2,uVar4);
      *(short *)(param_3 + 0x12) = (short)uVar4;
      *(char *)((int)param_3 + 0x4a) = (char)((uint)uVar4 >> 0x10);
      if (param_2 != 0) {
        bVar1 = FUN_ram_40047b68(param_1,param_2,0x67);
        *(byte *)((int)param_3 + 0x4d) = *(byte *)((int)param_3 + 0x4d) & 0xf0 | bVar1 & 0xf;
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400449dc.
 * REA evidence: ev_a2673467b8a33e05fda703241087de60ae19f3a8fed2e11e5adddd7d56161ba8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40044a16) */

int FUN_ram_400449dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = FUN_ram_40047b68(param_1,param_2,0x3c);
  if ((iVar3 != 0) && (bVar2 = FUN_ram_40047b68(param_1,param_2,0x3e), 2 < bVar2)) {
    iVar6 = FUN_ram_40047b68(param_1,param_2,0x42);
    uVar4 = FUN_ram_40047b68(param_1,param_2,0x40);
    uVar5 = FUN_ram_40047b68(param_1,param_2,0x41);
    iVar1 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
    iVar7 = ((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f);
    if (iVar1 < iVar7) {
      iVar1 = iVar7;
    }
    iVar1 = iVar3 / 2 + 1 + iVar6 + iVar1;
    if (-1 < iVar1) goto LAB_ram_40044a6c;
  }
  iVar1 = 0;
LAB_ram_40044a6c:
  iVar3 = FUN_ram_40047b68(param_1,param_2,0x38);
  if ((iVar3 != 0) && (bVar2 = FUN_ram_40047b68(param_1,param_2,0x3a), 2 < bVar2)) {
    iVar6 = FUN_ram_40047b68(param_1,param_2,0x3b);
    if (iVar1 < iVar3 + iVar6) {
      iVar1 = iVar3 + iVar6;
    }
  }
  iVar6 = FUN_ram_40047b68(param_1,param_2,0x68);
  iVar3 = FUN_ram_40047b68(param_1,param_2,0x69);
  if (iVar3 < iVar6) {
    iVar3 = iVar6;
  }
  if (0 < iVar3) {
    iVar1 = iVar1 + iVar3;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40044ae8.
 * REA evidence: ev_2be8d836457a3300c967070d41632aa64ff53331283d244550aaaa9e837a3afb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044ae8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40044af4.
 * REA evidence: ev_a3487e362e20ce1b86d9a6a713568c9a75d9bbaba3a9453512b0bdf1f3ff5920
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044af4(int param_1)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40044ae8();
  aiStack_14[0] = 0;
  FUN_ram_40044c48(param_1,0x16,aiStack_14);
  if (*(int *)(param_1 + 8) == 0) {
    if (aiStack_14[0] != 0) {
      FUN_ram_4004416c(param_1);
      *(int *)(*(int *)(param_1 + 8) + 0x24) = aiStack_14[0];
    }
  }
  else {
    *(int *)(*(int *)(param_1 + 8) + 0x24) = aiStack_14[0];
  }
  if (aiStack_14[0] != iVar1) {
    FUN_ram_400455dc(param_1);
  }
  return;
}


/* NanoCore 1.12, address 0x40044b3c.
 * REA evidence: ev_a0f9449c109a9c4c0f0cadc3ecc10bf458fe7cc7e0eb1251560654eaaaa8227f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40044b3c(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0xfffffff) >> 0x1a;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40044b4c.
 * REA evidence: ev_ed98865fc1b408ad4072e290618f6688f022f7ad1925d7f8868951b37ddaad76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_40044b4c(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) goto LAB_ram_40044b78;
  param_1 = *(int **)*param_2;
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 1;
    }
    pcVar1 = (code *)param_1[3];
    if (pcVar1 != (code *)0x0) break;
LAB_ram_40044b78:
    param_1 = (int *)*param_1;
  }
  param_2[3] = 0;
  (*pcVar1)();
  return ~*(byte *)(param_2 + 6) & 1;
}


/* NanoCore 1.12, address 0x40044b80.
 * REA evidence: ev_116fb62639e675b75a71b5be1110a845a7f07a173d7e3f6c159bdfaa4151caae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40044b80(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  while( true ) {
    iVar2 = FUN_ram_40056af8();
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
    uVar3 = FUN_ram_4004aeba(iVar2,param_1,1);
    if (uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_ram_40044b4c(0,param_1);
    if (uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_ram_4004aeba(iVar2,param_1,0);
    if (uVar3 != 1) break;
    iVar2 = FUN_ram_40048b6e(*param_1);
    if ((iVar2 == 0) || ((*(byte *)(param_1 + 6) & 4) != 0)) {
      return 1;
    }
    if (1 < param_1[2] - 0x26U) {
      iVar4 = FUN_ram_40043c8a(*param_1,0x4000);
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


/* NanoCore 1.12, address 0x40044c48.
 * REA evidence: ev_5e0f4897426c1ae69008bf1c708f30f3d101a4a25a58188d90a537d17e090f78
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044c48(int param_1,undefined4 param_2,undefined4 param_3)

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
    FUN_ram_4004ae9e(&iStack_2c);
    uVar1 = FUN_ram_40044b80(&iStack_2c);
    FUN_ram_4004aeae(&iStack_2c);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40044c84.
 * REA evidence: ev_61924675b845b4c4a12a3cfda5a1cd5250ca521da3d2a1db711267aca1533ae8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044c84(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 8) < 0x13) && ((0x77bfeU >> (*(uint *)(param_1 + 8) & 0x1f) & 1) != 0)) {
    uVar1 = FUN_ram_4004afd2();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40044ca4.
 * REA evidence: ev_054e9dea1dc2851c9556f4e6f2d330771e964460ae239d617470ed431f0682ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044ca4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) - 0x17U < 6) {
    uVar1 = FUN_ram_4004afd2();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40044cb6.
 * REA evidence: ev_a24826b0b25403f4f05a4d3ddf81a619e35be76178ee3993ad0425562c67c7e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044cb6(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) != 0xe) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_ram_4004afd2();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40044cca.
 * REA evidence: ev_a54c4753f6c297e2ad1a0d8df251fde07e12f64a69c75ea91daaf295cd1f511f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044cca(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4004afd2();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40044cd8.
 * REA evidence: ev_f3a89671ed75e0ea65103366e803064a82b235fd277cd6fc9a579764fffadc92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044cd8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0x16) {
    piVar1 = (int *)FUN_ram_4004afd2();
    iVar2 = *piVar1;
    if (*piVar1 < param_2) {
      iVar2 = param_2;
    }
    *piVar1 = iVar2;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40044d02.
 * REA evidence: ev_462c8acd52294227059c0ea0b7bac8fc5efc3bf2804f316b2107f87b08da9916
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40044d02(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_ram_40047b68(param_1,0,0x27);
  return uVar1;
}


/* NanoCore 1.12, address 0x40044d1a.
 * REA evidence: ev_392c1d3b7af949b54007631549abf366207377b771634a72edd95b0dd5b4d28e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044d1a(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047b68(param_1,0,0x12);
  iVar2 = FUN_ram_40047b68(param_1,0,0x30);
  uVar3 = FUN_ram_40047b68(param_1,0,0x34);
  if ((uVar3 & 4) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40044d62.
 * REA evidence: ev_a8d6a8836f5f822b316c229dd14e15b86a130cea513f03df30d02ac8cdd59629
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40044e2e) */
/* WARNING: Removing unreachable block (ram,0x40044e6e) */

void FUN_ram_40044d62(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uStack_38;
  uint uStack_34;
  
  uVar2 = FUN_ram_40047b68(param_1,0,0x6e);
  uStack_38 = uVar2;
  uStack_38 = FUN_ram_40047b68(param_1,0,0x6c);
  iVar1 = (int)(short)uStack_38;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  uStack_38 = FUN_ram_40047b68(param_1,0,0x6d);
  iVar4 = (int)(short)uStack_38;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  if (((uVar2 != 0) || (iVar1 != 0x100)) || (iVar4 != 0x100)) {
    uStack_38 = FUN_ram_40047b68(param_1,0,0x6f);
    uStack_34 = FUN_ram_40047b68(param_1,0,0x70);
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
    FUN_ram_4004aa78(param_2,param_3,uVar2,iVar1,iVar4,&uStack_38,param_4 ^ 1);
  }
  return;
}


/* NanoCore 1.12, address 0x40044ec8.
 * REA evidence: ev_d435fd463ab3c8c17df024dac9414894d75992f658b9ba66d9fabbf4fc4c3224
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044ec8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047b68(param_1,0,0x11);
  iVar2 = FUN_ram_40047b68(param_1,0,0x30);
  uVar3 = FUN_ram_40047b68(param_1,0,0x34);
  if ((uVar3 & 1) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40044f10.
 * REA evidence: ev_3d8ad0d364d33528d0e132145d87f26fc47b979e1046e9ed5d506de277a2f4a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044f10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047b68(param_1,0,0x10);
  iVar2 = FUN_ram_40047b68(param_1,0,0x30);
  uVar3 = FUN_ram_40047b68(param_1,0,0x34);
  if ((uVar3 & 2) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40044f58.
 * REA evidence: ev_33074c49b5ab0d66c9b58edc3b3e5ac0e9264002f19069881e3862d5d549dc15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044f58(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047b68(param_1,0,0x13);
  iVar2 = FUN_ram_40047b68(param_1,0,0x30);
  uVar3 = FUN_ram_40047b68(param_1,0,0x34);
  if ((uVar3 & 8) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40044fa0.
 * REA evidence: ev_d20418af62c966775856de5c7a40f5f4057ebf47408f710f119e20ad204ee977
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044fa0(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40047bf0(param_1,8,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_40048910(param_1,param_2,0);
  return;
}


/* NanoCore 1.12, address 0x40044fda.
 * REA evidence: ev_c7493f8a41e73db837c7c89fcdb442fc67ef78e5a04dfb3779f94c2e5df89054
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044fda(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40047bf0(param_1,9,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_4004891e(param_1,param_2,0);
  return;
}


