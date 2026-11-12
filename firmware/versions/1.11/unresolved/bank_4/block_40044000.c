/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40044000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40044074.
 * REA evidence: ev_e43d8b996c2c9fed0ab3969518c1f4757fbf212a345cc514db8ad38f7f5d941d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044074(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = FUN_ram_4005ab2e(0x2c);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) | 0x3c3;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400440a2.
 * REA evidence: ev_a29cf50cb84150ceaa04b8bed3d87e357b2f5edb2690b08af7b3e38e9fa917c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400440a2(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if (*piVar1 != 0) {
    *param_2 = *piVar1;
    FUN_ram_400440a2();
    *param_2 = (int)piVar1;
  }
  if ((code *)piVar1[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400440ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)piVar1[1])(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400440dc.
 * REA evidence: ev_f3aac92ff56a1832ea90a8f7f1501cf446c639cec776c6fc88b8fbbf51df0e3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_400440dc(int param_1,int param_2)

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
LAB_ram_40044108:
      piVar3 = (int *)FUN_ram_4005ab2e(uVar2);
      if (piVar3 != (int *)0x0) {
        *piVar3 = param_1;
        piVar3[1] = param_2;
        if (param_2 == 0) {
          iVar4 = FUN_ram_4004d1be();
          if (iVar4 == 0) {
            FUN_ram_4005ab56(piVar3);
            piVar3 = (int *)0x0;
          }
          else {
            if (*(int *)(iVar4 + 0x2b4) == 0) {
              *(undefined4 *)(iVar4 + 0x2d0) = 0;
            }
            iVar6 = *(int *)(iVar4 + 0x2d0) + 1;
            *(int *)(iVar4 + 0x2d0) = iVar6;
            iVar6 = FUN_ram_4005ab68(*(int *)(iVar4 + 0x2b4),iVar6 * 4);
            *(int *)(iVar4 + 0x2b4) = iVar6;
            *(int **)(iVar6 + *(int *)(iVar4 + 0x2d0) * 4 + -4) = piVar3;
            piVar3[5] = 0;
            piVar3[6] = 0;
            iVar4 = FUN_ram_4004d1dc(0);
            piVar3[7] = iVar4 + -1;
            iVar4 = FUN_ram_4004d1fe(0);
            piVar3[8] = iVar4 + -1;
          }
        }
        else {
          if (*(int *)(param_2 + 8) == 0) {
            FUN_ram_40044074(param_2);
          }
          puVar8 = *(undefined4 **)(param_2 + 8);
          sVar1 = *(short *)(puVar8 + 10);
          *(ushort *)(puVar8 + 10) = sVar1 + 1U;
          uVar5 = FUN_ram_4005ab68(*puVar8,(uint)(ushort)(sVar1 + 1U) << 2);
          piVar7 = *(int **)(param_2 + 8);
          *puVar8 = uVar5;
          *(int **)(*piVar7 + (*(ushort *)(piVar7 + 10) + 0x3fffffff) * 4) = piVar3;
        }
      }
      return piVar3;
    }
    if ((piVar3[8] & 0xffff0U) != 0) {
      uVar2 = (piVar3[8] & 0xfffffU) >> 4;
      goto LAB_ram_40044108;
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}


/* NanoCore 1.11, address 0x400441ba.
 * REA evidence: ev_d3a0754f937cd17721d55b5aaf919454202cfa66e75c23e442d6fd7555e85251
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400441ba(int *param_1)

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


/* NanoCore 1.11, address 0x400441de.
 * REA evidence: ev_2590e25cf2c350d86ce874a8dd6ff1b8eed044833c82d51d2b1b32d7435831bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400441de(int *param_1)

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


/* NanoCore 1.11, address 0x400441f8.
 * REA evidence: ev_5bb14cddf7027eb03305ce984ceeb4f0368e8f18c5d2992be21eabda7d2d6c9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400441f8(int *param_1)

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


/* NanoCore 1.11, address 0x40044212.
 * REA evidence: ev_3ccc05fa7e7fd915413c1433bcd553587e67f0c0d07186b11bba567e4d09a65e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044212(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_40044ffc();
  FUN_ram_40047a66(0);
  FUN_ram_40059842(param_1);
  FUN_ram_400440a2(*param_1,param_1);
  FUN_ram_40047a66(1);
  FUN_ram_40048114(param_1,0xf0000,0xff);
  FUN_ram_4004516c(param_1);
  iVar1 = FUN_ram_40043260();
  if ((iVar1 != 0) && (iVar2 = FUN_ram_400441f8(param_1), iVar2 != 0)) {
    FUN_ram_400433c4(iVar1,param_1);
  }
  iVar1 = FUN_ram_40048a76(param_1);
  if (iVar1 != 0) {
    FUN_ram_40044b50(iVar1,0x25,param_1);
    FUN_ram_40044b50(iVar1,0x26,param_1);
    FUN_ram_400454e4(param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4004429e.
 * REA evidence: ev_0f6698267e06b21f16ac1a0c78ff3119fc9b9df3298ed92e5cfafa9cec846805
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004429e(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_40047a70(param_1,param_2,0x1c);
  uVar2 = FUN_ram_40047cd2(param_1,param_2,uVar1);
  return uVar2 & 0xffffff;
}


/* NanoCore 1.11, address 0x400442da.
 * REA evidence: ev_05529a9d3491bdca2573c4b6fccf79e6f5f3b98b9ce10ec811df1bf617627718
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400442da(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_40047a70(param_1,param_2,0x58);
  uVar2 = FUN_ram_40047cd2(param_1,param_2,uVar1);
  return uVar2 & 0xffffff;
}


/* NanoCore 1.11, address 0x40044318.
 * REA evidence: ev_d99b4191c18c7d50751713017416c8639262433eddc4fa0f1b8fd86fc25f154e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044318(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  uVar3 = FUN_ram_40047f84();
  if ((param_2 == 0) || (2 < uVar3)) {
    uVar4 = FUN_ram_40047a70(param_1,param_2,0xc);
    param_3[7] = uVar4;
    if (*(char *)(param_3 + 8) != '\0') {
      bVar1 = FUN_ram_40047a70(param_1,param_2,0x1d);
      *(byte *)(param_3 + 8) = bVar1;
      if (2 < bVar1) {
        uVar4 = FUN_ram_4004429e(param_1,param_2);
        *(char *)((int)param_3 + 0x21) = (char)uVar4;
        *(char *)((int)param_3 + 0x23) = (char)((uint)uVar4 >> 0x10);
        *(char *)((int)param_3 + 0x22) = (char)((uint)uVar4 >> 8);
        iVar5 = FUN_ram_40047a70(param_1,param_2,0x26);
        if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0xb) & 7) == 0)) {
          bVar1 = FUN_ram_40047a70(param_1,param_2,0x20);
          *(byte *)((int)param_3 + 0x2f) = *(byte *)((int)param_3 + 0x2f) & 0xf8 | bVar1 & 7;
          if ((bVar1 & 7) != 0) {
            uVar4 = FUN_ram_4004429e(param_1,param_2);
            *(char *)(param_3 + 9) = (char)uVar4;
            *(char *)((int)param_3 + 0x25) = (char)((uint)uVar4 >> 8);
            *(char *)((int)param_3 + 0x26) = (char)((uint)uVar4 >> 0x10);
            uVar4 = FUN_ram_40047a70(param_1,param_2,0x23);
            uVar4 = FUN_ram_40047cd2(param_1,param_2,uVar4);
            *(char *)((int)param_3 + 0x2a) = (char)((uint)uVar4 >> 8);
            *(char *)((int)param_3 + 0x2b) = (char)((uint)uVar4 >> 0x10);
            *(char *)((int)param_3 + 0x29) = (char)uVar4;
            uVar2 = FUN_ram_40047a70(param_1,param_2,0x21);
            *(undefined1 *)(param_3 + 10) = uVar2;
            uVar2 = FUN_ram_40047a70(param_1,param_2,0x22);
            *(undefined1 *)((int)param_3 + 0x2d) = uVar2;
            uVar2 = FUN_ram_40047a70(param_1,param_2,0x24);
            *(undefined1 *)((int)param_3 + 0x27) = uVar2;
            uVar2 = FUN_ram_40047a70(param_1,param_2,0x25);
            *(undefined1 *)(param_3 + 0xb) = uVar2;
          }
        }
        else {
          thunk_FUN_ram_400050c6(param_3 + 9,iVar5,0xc);
        }
      }
    }
    if (*(char *)(param_3 + 0x12) != '\0') {
      iVar5 = FUN_ram_40047a70(param_1,param_2,0x30);
      param_3[0x11] = iVar5;
      if (iVar5 != 0) {
        bVar1 = FUN_ram_40047a70(param_1,param_2,0x32);
        *(byte *)(param_3 + 0x12) = bVar1;
        if (2 < bVar1) {
          bVar1 = FUN_ram_40047a70(param_1,param_2,0x34);
          *(byte *)((int)param_3 + 0x49) = *(byte *)((int)param_3 + 0x49) & 0xe0 | bVar1 & 0x1f;
          uVar4 = FUN_ram_40047a70(param_1,param_2,0x31);
          uVar4 = FUN_ram_40047cd2(param_1,param_2,uVar4);
          *(short *)((int)param_3 + 0x3e) = (short)uVar4;
          *(char *)(param_3 + 0x10) = (char)((uint)uVar4 >> 0x10);
        }
      }
    }
    if (*(char *)(param_3 + 0x16) != '\0') {
      iVar5 = FUN_ram_40047a70(param_1,param_2,0x38);
      param_3[0x14] = iVar5;
      if (iVar5 != 0) {
        bVar1 = FUN_ram_40047a70(param_1,param_2,0x3a);
        *(byte *)(param_3 + 0x16) = bVar1;
        if (2 < bVar1) {
          uVar4 = FUN_ram_40047a70(param_1,param_2,0x3b);
          param_3[0x15] = uVar4;
          uVar4 = FUN_ram_40047a70(param_1,param_2,0x39);
          uVar4 = FUN_ram_40047cd2(param_1,param_2,uVar4);
          *(short *)((int)param_3 + 0x4a) = (short)uVar4;
          *(char *)(param_3 + 0x13) = (char)((uint)uVar4 >> 0x10);
        }
      }
    }
    if (*(char *)((int)param_3 + 0x3b) != '\0') {
      iVar5 = FUN_ram_40047a70(param_1,param_2,0x28);
      param_3[0xc] = iVar5;
      if (iVar5 != 0) {
        bVar1 = FUN_ram_40047a70(param_1,param_2,0x29);
        *(byte *)((int)param_3 + 0x3b) = bVar1;
        if (2 < bVar1) {
          iVar5 = FUN_ram_4004e290(param_3[0xc]);
          if (iVar5 == 2) {
            uVar4 = FUN_ram_40047a70(param_1,param_2,0x5a);
            param_3[0xd] = uVar4;
            uVar4 = FUN_ram_400442da(param_1,param_2);
            *(char *)(param_3 + 0xe) = (char)uVar4;
            *(char *)((int)param_3 + 0x39) = (char)((uint)uVar4 >> 8);
            *(char *)((int)param_3 + 0x3a) = (char)((uint)uVar4 >> 0x10);
          }
          else {
            uVar4 = FUN_ram_40047a70(param_1,param_2,0x2a);
            uVar4 = FUN_ram_40047cd2(param_1,param_2,uVar4);
            *(short *)(param_3 + 0xe) = (short)uVar4;
            *(char *)((int)param_3 + 0x3a) = (char)((uint)uVar4 >> 0x10);
            uVar2 = FUN_ram_40047a70(param_1,param_2,0x2b);
            *(undefined1 *)(param_3 + 0xf) = uVar2;
            iVar5 = FUN_ram_40047a70(param_1,param_2,0x2c);
            *(bool *)((int)param_3 + 0x3d) = iVar5 != 0;
          }
        }
      }
    }
    if (*(char *)(param_3 + 0x1b) != '\0') {
      iVar5 = FUN_ram_40047a70(param_1,param_2,0x3c);
      param_3[0x17] = iVar5;
      if ((iVar5 != 0) && (2 < *(byte *)(param_3 + 0x1b))) {
        bVar1 = FUN_ram_40047a70(param_1,param_2,0x3e);
        *(byte *)(param_3 + 0x1b) = bVar1;
        if (2 < bVar1) {
          uVar4 = FUN_ram_40047a70(param_1,param_2,0x40);
          param_3[0x18] = uVar4;
          uVar4 = FUN_ram_40047a70(param_1,param_2,0x41);
          param_3[0x19] = uVar4;
          uVar4 = FUN_ram_40047a70(param_1,param_2,0x42);
          param_3[0x1a] = uVar4;
          uVar4 = FUN_ram_40047a70(param_1,param_2,0x3d);
          uVar4 = FUN_ram_40047cd2(param_1,param_2,uVar4);
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


/* NanoCore 1.11, address 0x4004470a.
 * REA evidence: ev_8ad2b617fa93435b3b03eaab9b36850a3accf77a2185bec8bfcf43ce42e932a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004470a(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  bVar1 = FUN_ram_40047a70(param_1,param_2,0x59);
  *(byte *)(param_3 + 0x12) = bVar1;
  if (2 < bVar1) {
    uVar3 = FUN_ram_40047f84(param_1,param_2);
    if (uVar3 < 0xfd) {
      *(char *)(param_3 + 0x12) = (char)(*(byte *)(param_3 + 0x12) * uVar3 >> 8);
    }
    if (2 < *(byte *)(param_3 + 0x12)) {
      uVar4 = FUN_ram_400442da(param_1,param_2);
      *(char *)(param_3 + 0xb) = (char)uVar4;
      *(char *)((int)param_3 + 0x2d) = (char)((uint)uVar4 >> 8);
      *(char *)((int)param_3 + 0x2e) = (char)((uint)uVar4 >> 0x10);
      uVar4 = FUN_ram_40047a70(param_1,param_2,0x5b);
      param_3[0xf] = uVar4;
      uVar4 = FUN_ram_40047a70(param_1,param_2,0x5c);
      param_3[0xe] = uVar4;
      bVar1 = FUN_ram_40047a70(param_1,param_2,0x5d);
      *(byte *)(param_3 + 0x13) = *(byte *)(param_3 + 0x13) & 0xf8 | bVar1 & 7;
      if (param_2 != 0) {
        bVar1 = FUN_ram_40047a70(param_1,param_2,0x67);
        *(byte *)(param_3 + 0x13) = (bVar1 & 7) << 3 | *(byte *)(param_3 + 0x13) & 199;
      }
      uVar4 = FUN_ram_40047a70(param_1,param_2,0x5a);
      param_3[8] = uVar4;
      uVar2 = FUN_ram_40047a70(param_1,param_2,0x5e);
      *(undefined1 *)((int)param_3 + 0x4a) = uVar2;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40044806.
 * REA evidence: ev_7f2bb811f59e1207b0891524dbf04a666115424c70437e9f6c31654e43840253
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40044870) */
/* WARNING: Removing unreachable block (ram,0x40044884) */

void FUN_ram_40044806(int param_1,int param_2,int *param_3)

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
  bVar1 = FUN_ram_40047a70(param_1,param_2,0x44);
  *(byte *)(param_3 + 0x13) = bVar1;
  if (2 < bVar1) {
    uVar3 = FUN_ram_40047f84(param_1,param_2);
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
      uVar2 = FUN_ram_40047a70(param_1,param_2,0x46);
      *(undefined1 *)((int)param_3 + 0x4b) = uVar2;
      uVar4 = FUN_ram_40047a70(param_1,param_2,0x45);
      uVar4 = FUN_ram_40047cd2(param_1,param_2,uVar4);
      *(short *)(param_3 + 0x12) = (short)uVar4;
      *(char *)((int)param_3 + 0x4a) = (char)((uint)uVar4 >> 0x10);
      if (param_2 != 0) {
        bVar1 = FUN_ram_40047a70(param_1,param_2,0x67);
        *(byte *)((int)param_3 + 0x4d) = *(byte *)((int)param_3 + 0x4d) & 0xf0 | bVar1 & 0xf;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400448e4.
 * REA evidence: ev_8e08101b424a00a93a260af1f93da94566146996790431a9ff16c1b9121daeb0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004491e) */

int FUN_ram_400448e4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = FUN_ram_40047a70(param_1,param_2,0x3c);
  if ((iVar3 != 0) && (bVar2 = FUN_ram_40047a70(param_1,param_2,0x3e), 2 < bVar2)) {
    iVar6 = FUN_ram_40047a70(param_1,param_2,0x42);
    uVar4 = FUN_ram_40047a70(param_1,param_2,0x40);
    uVar5 = FUN_ram_40047a70(param_1,param_2,0x41);
    iVar1 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
    iVar7 = ((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f);
    if (iVar1 < iVar7) {
      iVar1 = iVar7;
    }
    iVar1 = iVar3 / 2 + 1 + iVar6 + iVar1;
    if (-1 < iVar1) goto LAB_ram_40044974;
  }
  iVar1 = 0;
LAB_ram_40044974:
  iVar3 = FUN_ram_40047a70(param_1,param_2,0x38);
  if ((iVar3 != 0) && (bVar2 = FUN_ram_40047a70(param_1,param_2,0x3a), 2 < bVar2)) {
    iVar6 = FUN_ram_40047a70(param_1,param_2,0x3b);
    if (iVar1 < iVar3 + iVar6) {
      iVar1 = iVar3 + iVar6;
    }
  }
  iVar6 = FUN_ram_40047a70(param_1,param_2,0x68);
  iVar3 = FUN_ram_40047a70(param_1,param_2,0x69);
  if (iVar3 < iVar6) {
    iVar3 = iVar6;
  }
  if (0 < iVar3) {
    iVar1 = iVar1 + iVar3;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x400449f0.
 * REA evidence: ev_70b7bf361763460f2e384353b770f7646a9b1ea5b84686ce89c6757bee8e28c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400449f0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
  }
  return 0;
}


/* NanoCore 1.11, address 0x400449fc.
 * REA evidence: ev_618dde7940070a85f0c064ffe93d36617ff4c2c736cae14d562de221550e4f12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400449fc(int param_1)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_400449f0();
  aiStack_14[0] = 0;
  FUN_ram_40044b50(param_1,0x16,aiStack_14);
  if (*(int *)(param_1 + 8) == 0) {
    if (aiStack_14[0] != 0) {
      FUN_ram_40044074(param_1);
      *(int *)(*(int *)(param_1 + 8) + 0x24) = aiStack_14[0];
    }
  }
  else {
    *(int *)(*(int *)(param_1 + 8) + 0x24) = aiStack_14[0];
  }
  if (aiStack_14[0] != iVar1) {
    FUN_ram_400454e4(param_1);
  }
  return;
}


/* NanoCore 1.11, address 0x40044a44.
 * REA evidence: ev_1847c85090770bf2427da24556e89e1cfb397d3df2341871c9855d78be182f98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40044a44(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return (*(uint *)(*(int *)(param_1 + 8) + 0x28) & 0xfffffff) >> 0x1a;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40044a54.
 * REA evidence: ev_15f7e7f757def87eb209ce6b266ed12b676c6718be6a6b73be0e5072186a1e41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_40044a54(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) goto LAB_ram_40044a80;
  param_1 = *(int **)*param_2;
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 1;
    }
    pcVar1 = (code *)param_1[3];
    if (pcVar1 != (code *)0x0) break;
LAB_ram_40044a80:
    param_1 = (int *)*param_1;
  }
  param_2[3] = 0;
  (*pcVar1)();
  return ~*(byte *)(param_2 + 6) & 1;
}


/* NanoCore 1.11, address 0x40044a88.
 * REA evidence: ev_cb2804f01ffadbb876d2524b9fbb8f11a8af084adc9c954acdf20aaeb23e0253
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40044a88(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  while( true ) {
    iVar2 = FUN_ram_40056cc6();
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
    uVar3 = FUN_ram_4004adc2(iVar2,param_1,1);
    if (uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_ram_40044a54(0,param_1);
    if (uVar3 != 1) {
      return uVar3;
    }
    uVar3 = FUN_ram_4004adc2(iVar2,param_1,0);
    if (uVar3 != 1) break;
    iVar2 = FUN_ram_40048a76(*param_1);
    if ((iVar2 == 0) || ((*(byte *)(param_1 + 6) & 4) != 0)) {
      return 1;
    }
    if (1 < param_1[2] - 0x26U) {
      iVar4 = FUN_ram_40043b92(*param_1,0x4000);
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


/* NanoCore 1.11, address 0x40044b50.
 * REA evidence: ev_129270e535d28ab096cd12093f5a0dfe7ab6bac47af9c2cc14c236bc2e9dea3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044b50(int param_1,undefined4 param_2,undefined4 param_3)

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
    FUN_ram_4004ada6(&iStack_2c);
    uVar1 = FUN_ram_40044a88(&iStack_2c);
    FUN_ram_4004adb6(&iStack_2c);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40044b8c.
 * REA evidence: ev_1d71ec0b66f05d97e7fd7620a1229a2f354e7acc5bb35f651e237864f234804b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044b8c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 8) < 0x13) && ((0x77bfeU >> (*(uint *)(param_1 + 8) & 0x1f) & 1) != 0)) {
    uVar1 = FUN_ram_4004aeda();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40044bac.
 * REA evidence: ev_118da725f1860c670363ff3c1eb8c5956fc7a167ae403b354a8438b1f979046a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044bac(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) - 0x17U < 6) {
    uVar1 = FUN_ram_4004aeda();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40044bbe.
 * REA evidence: ev_87d007b48d17cf060848f125f6d64e78d9caa6f78c68a3ffb45fea000a6f501c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044bbe(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) != 0xe) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_ram_4004aeda();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40044bd2.
 * REA evidence: ev_da7ec9b1f6406cfdff746cd0c216bb86b0e09b57c4b8c66d23fd9d771769bddc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40044bd2(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4004aeda();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40044be0.
 * REA evidence: ev_6ae005f74c949131dd6685bfb063b8052154c1a35e422b802bc6b134609fd103
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044be0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0x16) {
    piVar1 = (int *)FUN_ram_4004aeda();
    iVar2 = *piVar1;
    if (*piVar1 < param_2) {
      iVar2 = param_2;
    }
    *piVar1 = iVar2;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40044c0a.
 * REA evidence: ev_775c88b3059dac764fc1206b0207516abc7cff782aacfb245cc624ff3678a332
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40044c0a(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_ram_40047a70(param_1,0,0x27);
  return uVar1;
}


/* NanoCore 1.11, address 0x40044c22.
 * REA evidence: ev_ecc8543ca44a18a71fc49c09c09598c14e788ba575787331c2abee5fe7e5c434
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044c22(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047a70(param_1,0,0x12);
  iVar2 = FUN_ram_40047a70(param_1,0,0x30);
  uVar3 = FUN_ram_40047a70(param_1,0,0x34);
  if ((uVar3 & 4) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40044c6a.
 * REA evidence: ev_c8ab122bf4953172eb3ae205d547c83ceb457a615559315abe11003efaa1e38c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40044d36) */
/* WARNING: Removing unreachable block (ram,0x40044d76) */

void FUN_ram_40044c6a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uStack_38;
  uint uStack_34;
  
  uVar2 = FUN_ram_40047a70(param_1,0,0x6e);
  uStack_38 = uVar2;
  uStack_38 = FUN_ram_40047a70(param_1,0,0x6c);
  iVar1 = (int)(short)uStack_38;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  uStack_38 = FUN_ram_40047a70(param_1,0,0x6d);
  iVar4 = (int)(short)uStack_38;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  if (((uVar2 != 0) || (iVar1 != 0x100)) || (iVar4 != 0x100)) {
    uStack_38 = FUN_ram_40047a70(param_1,0,0x6f);
    uStack_34 = FUN_ram_40047a70(param_1,0,0x70);
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
    FUN_ram_4004a980(param_2,param_3,uVar2,iVar1,iVar4,&uStack_38,param_4 ^ 1);
  }
  return;
}


/* NanoCore 1.11, address 0x40044dd0.
 * REA evidence: ev_d53479c61e7bb1b22206ea026842cb874c18feb23aa22f7dd4ecf8a0447285e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044dd0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047a70(param_1,0,0x11);
  iVar2 = FUN_ram_40047a70(param_1,0,0x30);
  uVar3 = FUN_ram_40047a70(param_1,0,0x34);
  if ((uVar3 & 1) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40044e18.
 * REA evidence: ev_6d0f7f5b3d9935a069f49a7d75b51ec0f744c64b9870c5fc88e336a7625efa51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044e18(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047a70(param_1,0,0x10);
  iVar2 = FUN_ram_40047a70(param_1,0,0x30);
  uVar3 = FUN_ram_40047a70(param_1,0,0x34);
  if ((uVar3 & 2) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40044e60.
 * REA evidence: ev_60da5f9ba844dee00144ca74c4f122533b216cd71ad26313dd12eeb9857e53d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40044e60(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40047a70(param_1,0,0x13);
  iVar2 = FUN_ram_40047a70(param_1,0,0x30);
  uVar3 = FUN_ram_40047a70(param_1,0,0x34);
  if ((uVar3 & 8) != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40044ea8.
 * REA evidence: ev_fdf5a128f2ac2d13f3e1d4b836aa6dcce1166bcb404b210700d7a434a74a55e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044ea8(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40047af8(param_1,8,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_40048818(param_1,param_2,0);
  return;
}


/* NanoCore 1.11, address 0x40044ee2.
 * REA evidence: ev_6192c71554dddd4a0917218f65e9e249ffe72fedf06200a21896c84824c868d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044ee2(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40047af8(param_1,9,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_40048826(param_1,param_2,0);
  return;
}


/* NanoCore 1.11, address 0x40044f1c.
 * REA evidence: ev_cc4aef9e4e3c9824c1a4b153f10d7c75147ae309549a4ef5d03ebab2f6326349
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044f1c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40044ea8();
  FUN_ram_40044ee2(param_1,param_3);
  return;
}


/* NanoCore 1.11, address 0x40044f36.
 * REA evidence: ev_4005fd9ed6a40a5c5771fe3baa048e520223341d790bf239b4d1685b2c4928c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044f36(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40047af8(param_1,1,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_400487ee(param_1,param_2,0);
  return;
}


/* NanoCore 1.11, address 0x40044f70.
 * REA evidence: ev_0aad030c2f90caa39c36e8a7a9fc07bf47667957c3b6562cc321aa0c9d339d6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044f70(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40047af8(param_1,2,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_4004880a(param_1,param_2,0);
  return;
}


/* NanoCore 1.11, address 0x40044faa.
 * REA evidence: ev_c296f4f1bc59e07a91714c5d211937554b45458eacca74171c154499581c322f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044faa(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40044f36();
  FUN_ram_40044f70(param_1,param_3);
  return;
}


/* NanoCore 1.11, address 0x40044fc4.
 * REA evidence: ev_6d1cb037d34e4611326083e2d5a6dd88e435238180bc29e0e1eff5a5fd198e61
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40044fc4(undefined4 param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40043b9e(param_1,0x60001);
  if ((iVar3 == 0) && (iVar3 = FUN_ram_40048a76(param_1), iVar3 != 0)) {
    sVar2 = FUN_ram_40047a70(iVar3,0,0x16);
    bVar1 = sVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x40044ffc.
 * REA evidence: ev_94de43e8ccddd71faecda98e6aa3b9bac041f5b0e59218d6124c3567140c65bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40044ffc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 1;
  iVar1 = FUN_ram_40048a14();
  *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) | 4;
  uVar2 = FUN_ram_40048a20();
  FUN_ram_4004d3a0(uVar2,0x33,0);
  return;
}


