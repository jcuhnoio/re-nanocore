/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4004e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4004e068.
 * REA evidence: ev_2a67f4f9bed3e2ff2e47aec844fa04f90cedcdfc75608d1b108fb898539b1814
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004e068(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  ushort *puVar16;
  
  if (((param_1 != 0) && (uVar2 = *(ushort *)(param_1 + 2), (uVar2 & 1) == 0)) &&
     ((uVar2 & 0x20) != 0)) {
    cVar1 = *(char *)(param_1 + 1);
    if ((byte)(cVar1 - 7U) < 4) {
      iVar11 = 2;
      if (((cVar1 != '\a') && (iVar11 = 4, cVar1 != '\b')) && (iVar11 = 0x10, cVar1 != '\t')) {
        iVar11 = 0x100;
      }
      pbVar12 = *(byte **)(param_1 + 0x10);
      pbVar14 = pbVar12;
      do {
        uVar13 = (uint)pbVar14[3];
        pbVar14[2] = (byte)(pbVar14[2] * uVar13 >> 8);
        pbVar14[1] = (byte)(pbVar14[1] * uVar13 >> 8);
        pbVar7 = pbVar14 + 4;
        *pbVar14 = (byte)(*pbVar14 * uVar13 >> 8);
        pbVar14 = pbVar7;
      } while (pbVar7 != pbVar12 + iVar11 * 4);
    }
    else if (cVar1 == '\x10') {
      uVar3 = *(ushort *)(param_1 + 6);
      uVar4 = *(ushort *)(param_1 + 4);
      uVar5 = *(ushort *)(param_1 + 8);
      pbVar14 = *(byte **)(param_1 + 0x10);
      for (uVar13 = 0; uVar13 < uVar3; uVar13 = uVar13 + 1) {
        pbVar12 = pbVar14;
        for (uVar15 = 0; uVar15 < uVar4; uVar15 = uVar15 + 1) {
          uVar8 = (uint)pbVar12[3];
          pbVar12[2] = (byte)(pbVar12[2] * uVar8 >> 8);
          pbVar12[1] = (byte)(pbVar12[1] * uVar8 >> 8);
          *pbVar12 = (byte)(*pbVar12 * uVar8 >> 8);
          pbVar12 = pbVar12 + 4;
        }
        pbVar14 = pbVar14 + uVar5;
      }
    }
    else if (cVar1 == '\x14') {
      iVar9 = *(int *)(param_1 + 0x10);
      uVar3 = *(ushort *)(param_1 + 8);
      uVar4 = *(ushort *)(param_1 + 6);
      uVar5 = *(ushort *)(param_1 + 4);
      iVar11 = iVar9 + (uint)uVar4 * (uint)uVar3;
      for (uVar13 = 0; uVar13 < uVar4; uVar13 = uVar13 + 1) {
        for (uVar15 = 0; uVar15 < uVar5; uVar15 = uVar15 + 1) {
          uVar6 = *(ushort *)(iVar9 + uVar15 * 2);
          uVar8 = (uint)*(byte *)(iVar11 + uVar15);
          *(ushort *)(iVar9 + uVar15 * 2) =
               (ushort)(((int)(((uVar6 & 0x7ff) >> 5) * uVar8) >> 8) << 5) |
               (ushort)((uVar6 & 0x1f) * uVar8 >> 8) |
               (ushort)(((int)((uVar6 >> 0xb) * uVar8) >> 8) << 0xb);
        }
        iVar9 = iVar9 + (uint)uVar3;
        iVar11 = iVar11 + (uint)(uVar3 >> 1);
      }
    }
    else if (cVar1 == '\x13') {
      uVar3 = *(ushort *)(param_1 + 6);
      uVar4 = *(ushort *)(param_1 + 4);
      uVar5 = *(ushort *)(param_1 + 8);
      puVar16 = *(ushort **)(param_1 + 0x10);
      for (uVar13 = 0; uVar13 < uVar3; uVar13 = uVar13 + 1) {
        puVar10 = puVar16;
        for (uVar15 = 0; uVar15 < uVar4; uVar15 = uVar15 + 1) {
          uVar6 = *puVar10;
          uVar8 = (uint)(byte)puVar10[1];
          *puVar10 = (ushort)(((int)(((uVar6 & 0x7ff) >> 5) * uVar8) >> 8) << 5) |
                     (ushort)((uVar6 & 0x1f) * uVar8 >> 8) |
                     (ushort)(((int)((uVar6 >> 0xb) * uVar8) >> 8) << 0xb);
          puVar10 = (ushort *)((int)puVar10 + 3);
        }
        puVar16 = (ushort *)((int)puVar16 + (uint)uVar5);
      }
    }
    *(ushort *)(param_1 + 2) = uVar2 | 1;
    return 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004e222.
 * REA evidence: ev_f89156638c9f11a15b950467dd46ad2ef1a189aefa263ec1928ac75f9390db1d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e222(undefined4 param_1,int param_2,int param_3,int *param_4,int *param_5,
                     undefined4 param_6,code *param_7)

{
  int iVar1;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined4 uStack_78;
  ushort uStack_74;
  undefined1 auStack_70 [16];
  int local_60 [4];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  
  uStack_7c = *(undefined2 *)(param_2 + 0x48);
  uStack_7a = *(undefined1 *)(param_2 + 0x4a);
  uStack_78 = *(undefined4 *)(param_3 + 0x20);
  uStack_74 = uStack_74 & 0xfe00 | (ushort)*(undefined4 *)(param_3 + 0x24) & 0x1ff;
  if (*(int *)(param_3 + 0x1c) == 0) {
LAB_ram_4004e2a6:
    FUN_ram_4000303c(auStack_70,param_6,0x10);
    FUN_ram_4004a4e4(auStack_70,-*param_5,-param_5[1]);
    if (param_4 == (int *)0x0) {
      param_4 = local_60;
    }
    *param_4 = -0x1fffffff;
    param_4[1] = -0x1fffffff;
    param_4[2] = -0x1fffffff;
    param_4[3] = -0x1fffffff;
    while( true ) {
      iVar1 = FUN_ram_4004f794(param_3,auStack_70,param_4);
      FUN_ram_4000303c(auStack_50,param_4,0x10);
      FUN_ram_4004a4e4(auStack_50,*param_5,param_5[1]);
      if (iVar1 != 1) break;
      iVar1 = FUN_ram_4004a4fe(auStack_40,param_6,auStack_50);
      if (iVar1 != 0) {
        (*param_7)(param_1,param_2,param_3,&uStack_7c,auStack_50,auStack_40);
      }
    }
  }
  else {
    if (param_4 != (int *)0x0) {
      if (*param_4 != -0x1fffffff) goto LAB_ram_4004e2a6;
    }
    (*param_7)(param_1,param_2,param_3,&uStack_7c,param_5,param_6);
  }
  return;
}


/* NanoCore 1.12, address 0x4004e31e.
 * REA evidence: ev_54476160eed291dc8c61941ed52c7b1cdba1648e8f0149b8e3a81e8945922bb4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e31e(int param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,0x68);
  *(undefined4 *)(param_1 + 0x30) = 0x100;
  *(undefined4 *)(param_1 + 0x34) = 0x100;
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xef00 | 0x10ff;
  *(undefined4 *)(param_1 + 0x5c) = 0xe0000001;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x68;
  return;
}


/* NanoCore 1.12, address 0x4004e36e.
 * REA evidence: ev_27b739667e3bac7e451235159134339686d8f82c88fd07c035cd016a09a7f8b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004e36e(byte *param_1)

{
  int iVar1;
  
  if (param_1 == (byte *)0x0) {
    iVar1 = 3;
  }
  else {
    iVar1 = 1;
    if (0x5f < (byte)(*param_1 - 0x20)) {
      return (uint)(*param_1 >> 7) << 1;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004e392.
 * REA evidence: ev_6a1750c88d5af7e3743478a71df61452a3b309c979dd02d6e229914c5ea6e580
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e392(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [60];
  
  if (param_4 != 0) {
    iVar1 = FUN_ram_4004f6da(auStack_5c,*(undefined4 *)(param_2 + 0x1c),0);
    if (iVar1 == 1) {
      uVar3 = (uint)*(ushort *)(param_2 + 0x24);
      uVar4 = (uint)*(ushort *)(param_2 + 0x26);
      FUN_ram_4000303c(&iStack_8c,param_3,0x10);
      FUN_ram_4004a4a0(&iStack_8c,uVar3);
      FUN_ram_4004a4aa(&iStack_8c,uVar4);
      iVar1 = iStack_8c;
      iVar5 = uVar3 + iStack_8c;
      FUN_ram_4000303c(auStack_7c,&DAT_ram_400959ac,0x10);
      while( true ) {
        if (*(int *)(*(int *)(param_1 + 8) + 0xc) < iStack_88) break;
        while( true ) {
          if (*(int *)(*(int *)(param_1 + 8) + 8) < iStack_8c) break;
          iVar2 = FUN_ram_4004a4fe(auStack_6c,&iStack_8c);
          if (iVar2 != 0) {
            FUN_ram_4004e222(param_1,param_2,auStack_5c,auStack_7c,&iStack_8c,auStack_6c,param_4);
          }
          iStack_8c = iStack_8c + uVar3;
          iStack_84 = iStack_84 + uVar3;
        }
        iStack_88 = iStack_88 + uVar4;
        iStack_80 = iStack_80 + uVar4;
        iStack_8c = iVar1;
        iStack_84 = iVar5 + -1;
      }
      FUN_ram_4004f7a8(auStack_5c);
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004e462.
 * REA evidence: ev_9d632142b352655bf250b0d11c50fd2e721e060fb76a7d74852db08adf379bcf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e462(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     undefined4 param_7)

{
  int iVar1;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (((param_4 == 0) && (param_5 == 0x100)) && (param_6 == 0x100)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_2 + -1;
    param_1[3] = param_3 + -1;
  }
  else {
    local_40 = 0;
    iStack_3c = 0;
    iStack_34 = 0;
    iStack_30 = 0;
    iStack_38 = param_2;
    iStack_2c = param_3;
    iStack_28 = param_2;
    iStack_24 = param_3;
    FUN_ram_4004ac3c(&local_40,param_4,param_5,param_6,param_7,1);
    FUN_ram_4004ac3c(&iStack_38,param_4,param_5,param_6,param_7,1);
    FUN_ram_4004ac3c(&iStack_30,param_4,param_5,param_6,param_7,1);
    FUN_ram_4004ac3c(&iStack_28,param_4,param_5,param_6,param_7,1);
    iVar1 = iStack_30;
    if (iStack_28 <= iStack_30) {
      iVar1 = iStack_28;
    }
    if (iStack_38 < iVar1) {
      iVar1 = iStack_38;
    }
    if (local_40 < iVar1) {
      iVar1 = local_40;
    }
    *param_1 = iVar1;
    if (iStack_28 < iStack_30) {
      iStack_28 = iStack_30;
    }
    if (iStack_28 < iStack_38) {
      iStack_28 = iStack_38;
    }
    if (iStack_28 < local_40) {
      iStack_28 = local_40;
    }
    param_1[2] = iStack_28 + -1;
    iVar1 = iStack_2c;
    if (iStack_24 <= iStack_2c) {
      iVar1 = iStack_24;
    }
    if (iStack_34 < iVar1) {
      iVar1 = iStack_34;
    }
    if (iStack_3c < iVar1) {
      iVar1 = iStack_3c;
    }
    param_1[1] = iVar1;
    if (iStack_24 < iStack_2c) {
      iStack_24 = iStack_2c;
    }
    if (iStack_24 < iStack_34) {
      iStack_24 = iStack_34;
    }
    if (iStack_24 < iStack_3c) {
      iStack_24 = iStack_3c;
    }
    param_1[3] = iStack_24 + -1;
  }
  return;
}


/* NanoCore 1.12, address 0x4004e57a.
 * REA evidence: ev_f8a8dcafd573996b8e926cb482361e9da76e9ecafb14433ba5eed868dd045af5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e57a(undefined4 param_1,int param_2,int *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = FUN_ram_4004d5b0(param_1,param_3);
  uVar4 = FUN_ram_4005a952(0x68);
  *(undefined4 *)(iVar3 + 0x4c) = uVar4;
  thunk_FUN_ram_4000500c(uVar4,param_2,0x68);
  iVar6 = param_3[3];
  *(undefined4 *)(iVar3 + 4) = 5;
  iVar7 = param_3[1];
  iVar5 = param_3[2];
  uVar1 = *(undefined2 *)(param_2 + 0x30);
  iVar8 = *param_3;
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined2 *)(param_2 + 0x34);
  *(undefined4 *)(iVar3 + 0x48) = 0;
  FUN_ram_4004e462(iVar3 + 0x18,(iVar5 - iVar8) + 1,(iVar6 - iVar7) + 1,uVar4,uVar1,uVar2,
                   param_2 + 0x40);
  FUN_ram_4004a4e4(iVar3 + 0x18,*param_3,param_3[1]);
  *(undefined1 *)(*(int *)(param_2 + 0x1c) + 0x34) = 1;
  FUN_ram_4004d7dc(param_1,iVar3);
  return;
}


/* NanoCore 1.12, address 0x4004e602.
 * REA evidence: ev_eb91a3c3e762c2ff1fc4026d5d249b15d34125f5f15dea76ef9e6ff33defcb6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e602(undefined4 param_1,int param_2,int *param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  if ((*(int *)(param_2 + 0x1c) != 0) && (2 < *(byte *)(param_2 + 0x4c))) {
    iVar2 = FUN_ram_4005a952(0x68);
    thunk_FUN_ram_4000500c(iVar2,param_2,0x68);
    iVar3 = FUN_ram_4004f6c8(*(undefined4 *)(iVar2 + 0x1c),iVar2 + 0x20);
    if (iVar3 != 1) {
      FUN_ram_4005a988(iVar2);
      return;
    }
    iVar3 = FUN_ram_4004d5b0(param_1,param_3);
    iVar5 = param_3[3];
    *(undefined4 *)(iVar3 + 4) = 4;
    iVar7 = param_3[1];
    iVar4 = param_3[2];
    uVar1 = *(undefined2 *)(param_2 + 0x30);
    iVar8 = *param_3;
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    *(int *)(iVar3 + 0x4c) = iVar2;
    FUN_ram_4004e462(iVar3 + 0x18,(iVar4 - iVar8) + 1,(iVar5 - iVar7) + 1,uVar6,uVar1,
                     *(undefined2 *)(param_2 + 0x34),param_2 + 0x40);
    FUN_ram_4004a4e4(iVar3 + 0x18,*param_3,param_3[1]);
    FUN_ram_4004d7dc(param_1,iVar3);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004e6b8.
 * REA evidence: ev_dd143b0b0ac730a02617a32eb78b74de595847e5d46f64071bd5e7d67ce46922
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e6b8(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [72];
  
  if (param_4 != 0) {
    iStack_78 = param_3[1];
    iStack_74 = param_3[2];
    iStack_7c = *param_3;
    iStack_70 = param_3[3];
    if (((*(int *)(param_2 + 0x2c) != 0) || (*(uint *)(param_2 + 0x30) != 0x100)) ||
       (*(uint *)(param_2 + 0x34) != 0x100)) {
      FUN_ram_4004e462(&iStack_7c,(iStack_74 - iStack_7c) + 1,(iStack_70 - iStack_78) + 1,
                       *(int *)(param_2 + 0x2c),*(uint *)(param_2 + 0x30) & 0xffff,
                       *(uint *)(param_2 + 0x34) & 0xffff,param_2 + 0x40);
      iStack_7c = iStack_7c + *param_3;
      iStack_78 = iStack_78 + param_3[1];
      iStack_74 = iStack_74 + *param_3;
      iStack_70 = iStack_70 + param_3[1];
    }
    iVar1 = FUN_ram_4004a4fe(auStack_6c,&iStack_7c,*(undefined4 *)(param_1 + 8));
    if ((iVar1 != 0) &&
       (iVar1 = FUN_ram_4004f6da(auStack_5c,*(undefined4 *)(param_2 + 0x1c),0), iVar1 == 1)) {
      FUN_ram_4004e222(param_1,param_2,auStack_5c,0,param_3,auStack_6c,param_4);
      FUN_ram_4004f7a8(auStack_5c);
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004e772.
 * REA evidence: ev_dd17c284a9721f1cfdf297269224ec9a60fdd0471ecd017461b6fa3b1dabce20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004e772(uint param_1)

{
  if (((((0x1f < param_1) && (param_1 != 0x61c)) && (1 < param_1 - 0x115f)) &&
      ((3 < param_1 - 0x180b && (4 < param_1 - 0x200b)))) &&
     ((7 < param_1 - 0x2028 && ((0x10 < param_1 - 0x205f && (param_1 != 0xfeff)))))) {
    return param_1 == 0xf8ff;
  }
  return true;
}


/* NanoCore 1.12, address 0x4004e7e0.
 * REA evidence: ev_8e6c385806306589171649c5e9281bef558848d987b09b148eeb2610503237ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e7e0(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_ram_40004f92(param_1,0,0x54);
  *(undefined1 *)(param_1 + 0x48) = 0xff;
  *(undefined ***)(param_1 + 0x20) = &PTR_LAB_ram_400136ec_ram_40099ce0;
  *(undefined4 *)(param_1 + 0x24) = 0xffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  uVar1 = FUN_ram_4004b8da(5);
  *(char *)(param_1 + 0x32) = (char)uVar1;
  *(char *)(param_1 + 0x33) = (char)((uint)uVar1 >> 8);
  *(char *)(param_1 + 0x34) = (char)((uint)uVar1 >> 0x10);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x54;
  return;
}


/* NanoCore 1.12, address 0x4004e83e.
 * REA evidence: ev_158fedc21bff8518da2f9bd2bb5ed12f341b31230e5903533e2f0cc44b00e82c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004e83e(int param_1)

{
  if (*(int *)(param_1 + 4) == 3) {
    return *(undefined4 *)(param_1 + 0x4c);
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004e84e.
 * REA evidence: ev_b23f309944086304eb8ce3562f75a7b634fe0f23a21682b179ac4725059fd1a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e84e(undefined4 param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,0x1c);
  return;
}


/* NanoCore 1.12, address 0x4004e856.
 * REA evidence: ev_5de6320cdd0fbed8aa13b2dfadf09ebe963de74c3f42ee56d2c237b2f12c8565
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e856(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(byte *)(param_2 + 0x48) < 3) {
    return;
  }
  if (((*(char **)(param_2 + 0x1c) != (char *)0x0) && (**(char **)(param_2 + 0x1c) != '\0')) &&
     (*(int *)(param_2 + 0x20) != 0)) {
    iVar1 = FUN_ram_4004d5b0(param_1,param_3);
    uVar2 = FUN_ram_4005a952(0x54);
    *(undefined4 *)(iVar1 + 0x4c) = uVar2;
    thunk_FUN_ram_4000500c(uVar2,param_2,0x54);
    *(undefined4 *)(iVar1 + 4) = 3;
    if ((*(byte *)(param_2 + 0x4c) & 0x40) != 0) {
      iVar3 = *(int *)(iVar1 + 0x4c);
      uVar2 = FUN_ram_4005aa68(*(undefined4 *)(param_2 + 0x1c));
      *(undefined4 *)(iVar3 + 0x1c) = uVar2;
    }
    FUN_ram_4004d7dc(param_1,iVar1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004e8da.
 * REA evidence: ev_61180d30368c86bba47515691c9bb566d09b728af7865a06a864a44a56058674
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004ec5a) */
/* WARNING: Removing unreachable block (ram,0x4004ec6e) */
/* WARNING: Removing unreachable block (ram,0x4004e9f2) */
/* WARNING: Removing unreachable block (ram,0x4004eac8) */

void FUN_ram_4004e8da(int param_1,int param_2,int *param_3,code *param_4)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [16];
  int iStack_c4;
  int iStack_c0;
  uint uStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_8c;
  undefined1 uStack_88;
  int *piStack_84;
  int *piStack_80;
  int *piStack_7c;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  int iStack_74;
  int aiStack_70 [8];
  undefined1 uStack_50;
  undefined1 auStack_4f [27];
  
  iVar5 = *(int *)(param_2 + 0x20);
  iVar7 = FUN_ram_4004a4fe(auStack_d4,param_3,*(undefined4 *)(param_1 + 8));
  if (iVar7 == 0) {
    return;
  }
  cVar2 = *(char *)(param_2 + 0x4a);
  if ((*(byte *)(param_2 + 0x4b) & 1) == 0) {
    iVar7 = (param_3[2] - *param_3) + 1;
  }
  else {
    FUN_ram_4004c580(aiStack_70,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                     *(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x38),0x1fffffff);
    iVar7 = aiStack_70[0];
  }
  iVar17 = *(int *)(iVar5 + 0xc);
  piVar12 = *(int **)(param_2 + 0x50);
  iVar13 = *(int *)(param_2 + 0x38) + iVar17;
  iVar14 = *(int *)(param_2 + 0x40);
  iVar20 = *param_3;
  iVar6 = 0;
  iStack_110 = param_3[1] + *(int *)(param_2 + 0x44);
  if (((piVar12 != (int *)0x0) && (*(int *)(param_2 + 0x44) == 0)) && (iStack_110 < 0)) {
    uVar11 = piVar12[2] - iStack_110 >> 0x1f;
    if ((0x200 - iVar13) * 2 < (int)((piVar12[2] - iStack_110 ^ uVar11) - uVar11)) {
      *piVar12 = -1;
    }
    iVar6 = 0;
    if (-1 < *piVar12) {
      iStack_110 = iStack_110 + piVar12[1];
      iVar6 = *piVar12;
    }
  }
  iVar8 = FUN_ram_4004c2da(*(int *)(param_2 + 0x1c) + iVar6,iVar5,*(undefined4 *)(param_2 + 0x3c),
                           iVar7,0,*(undefined1 *)(param_2 + 0x4b));
  iVar8 = iVar8 + iVar6;
  while (iVar15 = iVar17 + iStack_110, iStack_110 = iStack_110 + iVar13,
        iVar15 < *(int *)(*(int *)(param_1 + 8) + 4)) {
    iVar15 = FUN_ram_4004c2da(*(int *)(param_2 + 0x1c) + iVar8,iVar5,*(undefined4 *)(param_2 + 0x3c)
                              ,iVar7,0,*(undefined1 *)(param_2 + 0x4b));
    piVar12 = *(int **)(param_2 + 0x50);
    if (((piVar12 != (int *)0x0) && (-0x401 < iStack_110)) && (*piVar12 < 0)) {
      iVar6 = param_3[1];
      *piVar12 = iVar8;
      piVar12[1] = iStack_110 - iVar6;
      piVar12[2] = iVar6;
    }
    pcVar3 = (char *)(*(int *)(param_2 + 0x1c) + iVar8);
    iVar6 = iVar8;
    iVar8 = iVar15 + iVar8;
    if (*pcVar3 == '\0') {
      return;
    }
  }
  if (cVar2 == '\x02') {
    iVar17 = FUN_ram_4004c51e(*(int *)(param_2 + 0x1c) + iVar6,iVar8 - iVar6,iVar5,
                              *(undefined4 *)(param_2 + 0x3c));
    iVar17 = (((param_3[2] - *param_3) + 1) - iVar17) / 2;
  }
  else {
    if (cVar2 != '\x03') goto LAB_ram_4004e9f8;
    iVar17 = FUN_ram_4004c51e(*(int *)(param_2 + 0x1c) + iVar6,iVar8 - iVar6,iVar5,
                              *(undefined4 *)(param_2 + 0x3c));
    iVar17 = ((param_3[2] - *param_3) + 1) - iVar17;
  }
  iVar20 = iVar20 + iVar17;
LAB_ram_4004e9f8:
  uVar18 = *(uint *)(param_2 + 0x24);
  uVar19 = *(uint *)(param_2 + 0x28);
  uVar11 = uVar18;
  if (uVar19 < uVar18) {
    uVar11 = uVar19;
    uVar19 = uVar18;
  }
  FUN_ram_4004e84e(&iStack_8c);
  uStack_75 = *(undefined1 *)(param_2 + 0x48);
  piStack_80 = &iStack_c4;
  uStack_78 = *(undefined2 *)(param_2 + 0x2c);
  uStack_76 = *(undefined1 *)(param_2 + 0x2e);
  FUN_ram_4004ef32(aiStack_70);
  uStack_50 = *(undefined1 *)(param_2 + 0x48);
  iStack_10c = (int)*(char *)(iVar5 + 0x16);
  if (iStack_10c == 0) {
    iStack_10c = 1;
  }
  do {
    iVar17 = iStack_110 - iVar13;
    iVar15 = *(int *)(param_2 + 0x1c);
    if (*(char *)(iVar15 + iVar6) == '\0') break;
    uStack_e0 = 0;
    iVar20 = iVar14 + iVar20;
    iVar16 = iStack_110 + -1;
    iStack_114 = iVar20;
    while (uStack_e0 < (uint)(iVar8 - iVar6)) {
      uVar18 = 0;
      if ((uVar11 != 0xffff) && (uVar19 != 0xffff)) {
        uVar18 = (**(code **)(gp + -0x38))(*(undefined4 *)(param_2 + 0x1c),uStack_e0 + iVar6);
      }
      FUN_ram_4004c4de(iVar15 + iVar6,&uStack_dc,&uStack_d8,&uStack_e0);
      iVar9 = FUN_ram_40059758(iVar5,uStack_dc,uStack_d8);
      iStack_c4 = iStack_114;
      uVar21 = (iStack_114 + iVar9) - 1;
      iStack_c0 = iVar17;
      uStack_bc = uVar21;
      iStack_b8 = iVar16;
      if ((uint)(iVar8 - iVar6) <= uStack_e0) {
        if ((*(uint *)(param_2 + 0x4c) & 1) != 0) {
          uStack_a0 = ((*(int *)(iVar5 + 0xc) + iVar17) - *(int *)(iVar5 + 0x10)) -
                      (int)*(char *)(iVar5 + 0x15);
          uStack_98 = uStack_a0 + iStack_10c + -1;
          iStack_a4 = iVar20;
          uStack_9c = uVar21;
          FUN_ram_4000303c(auStack_4f,param_2 + 0x2c,3);
          (*param_4)(param_1,0,aiStack_70,&iStack_a4);
        }
        if ((*(uint *)(param_2 + 0x4c) & 2) != 0) {
          uStack_a0 = ((*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 0x10)) * 2) / 3 + iVar17 +
                      (int)*(char *)(iVar5 + 0x16) / 2;
          uStack_98 = uStack_a0 + iStack_10c + -1;
          iStack_a4 = iVar20;
          uStack_9c = uVar21;
          FUN_ram_4000303c(auStack_4f,param_2 + 0x2c,3);
          (*param_4)(param_1,0,aiStack_70,&iStack_a4);
        }
      }
      if (((uVar11 == 0xffff) || (uVar19 == 0xffff)) || ((uVar18 < uVar11 || (uVar19 <= uVar18)))) {
        uStack_78 = *(undefined2 *)(param_2 + 0x2c);
        uStack_76 = *(undefined1 *)(param_2 + 0x2e);
      }
      else {
        FUN_ram_4000303c(&uStack_78,param_2 + 0x2f,3);
        FUN_ram_4000303c(auStack_4f,param_2 + 0x32,3);
        (*param_4)(param_1,0,aiStack_70,&iStack_c4);
      }
      uVar4 = uStack_dc;
      iVar10 = FUN_ram_4004e772(uStack_dc);
      if (iVar10 == 0) {
        FUN_ram_400596ac(iVar5,&iStack_a4,uVar4,0);
        uVar18 = uStack_9c & 0xffff;
        if ((uVar18 != 0) && (uStack_a0 >> 0x10 != 0)) {
          iStack_b4 = uStack_9c._2_2_ + iStack_114;
          iStack_ac = (uStack_a0 >> 0x10) + iStack_b4 + -1;
          iStack_b0 = (((*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 0x10)) + iVar17) - uVar18) -
                      (int)(short)uStack_98;
          iStack_a8 = uVar18 + iStack_b0 + -1;
          iVar10 = FUN_ram_4004a83a(&iStack_b4,*(undefined4 *)(param_1 + 8),0);
          if ((iVar10 == 0) ||
             (iVar10 = FUN_ram_4004a83a(piStack_80,*(undefined4 *)(param_1 + 8),0), iVar10 == 0)) {
            if (iStack_a4 == 0) {
              uStack_88 = 0;
            }
            else {
              iVar10 = 0;
              if ((byte)(uStack_98._2_1_ - 1U) < 8) {
                iVar10 = FUN_ram_4004dcca(iStack_74,0,uStack_a0._2_2_,uStack_9c & 0xffff,0);
                if (iVar10 == 0) {
                  if (iStack_74 != 0) {
                    FUN_ram_4004dd2c();
                  }
                  uVar18 = uStack_9c & 0xffff;
                  if (uVar18 * (uStack_a0 >> 0x10) < 0x40) {
                    uVar18 = uVar18 << 1;
                  }
                  iVar10 = FUN_ram_4004dbd6(uStack_a0 >> 0x10,uVar18,0xe,0);
                  *(undefined2 *)(iVar10 + 6) = (undefined2)uStack_9c;
                  iStack_74 = iVar10;
                }
              }
              iStack_8c = FUN_ram_400596a6(&iStack_a4,uVar4,iVar10);
              uStack_88 = 0;
              if (iStack_8c != 0) {
                uStack_88 = uStack_98._2_1_;
              }
            }
            piStack_84 = &iStack_b4;
            piStack_7c = &iStack_a4;
            (*param_4)(param_1,&iStack_8c,0,0);
            if ((iStack_a4 != 0) && (*(code **)(iVar5 + 8) != (code *)0x0)) {
              (**(code **)(iVar5 + 8))(iVar5,&iStack_a4);
            }
          }
        }
      }
      if (iVar9 != 0) {
        iStack_114 = iStack_114 + iVar9 + *(int *)(param_2 + 0x3c);
      }
    }
    iVar17 = FUN_ram_4004c2da(*(int *)(param_2 + 0x1c) + iVar8,iVar5,*(undefined4 *)(param_2 + 0x3c)
                              ,iVar7,0,*(undefined1 *)(param_2 + 0x4b));
    iVar20 = *param_3;
    if (cVar2 == '\x02') {
      iVar6 = FUN_ram_4004c51e(*(int *)(param_2 + 0x1c) + iVar8,iVar17,iVar5,
                               *(undefined4 *)(param_2 + 0x3c));
      iVar6 = (((param_3[2] - *param_3) + 1) - iVar6) / 2;
LAB_ram_4004eacc:
      iVar20 = iVar20 + iVar6;
    }
    else if (cVar2 == '\x03') {
      iVar6 = FUN_ram_4004c51e(*(int *)(param_2 + 0x1c) + iVar8,iVar17,iVar5,
                               *(undefined4 *)(param_2 + 0x3c));
      iVar6 = ((param_3[2] - *param_3) + 1) - iVar6;
      goto LAB_ram_4004eacc;
    }
    bVar1 = iStack_110 <= *(int *)(*(int *)(param_1 + 8) + 0xc);
    iVar6 = iVar8;
    iVar8 = iVar8 + iVar17;
    iStack_110 = iStack_110 + iVar13;
  } while (bVar1);
  if (iStack_74 != 0) {
    FUN_ram_4004dd2c();
  }
  return;
}


/* NanoCore 1.12, address 0x4004ee22.
 * REA evidence: ev_370d8ac2a6c4c5959b9d1614532601670ec7cba8432605881b0d17cb8a2c2fb8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ee22(undefined4 param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,0x30);
  return;
}


/* NanoCore 1.12, address 0x4004ee2c.
 * REA evidence: ev_ceef453f3aae5c05ab23d1c40c224a18b2fdc791de96725a0bf137fa92c9cf55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ee2c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_ram_4004ae16(*(undefined1 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    iVar1 = FUN_ram_4004d5b0(param_1,param_1 + 4);
    uVar2 = FUN_ram_4005a952(0x30);
    *(undefined4 *)(iVar1 + 0x4c) = uVar2;
    thunk_FUN_ram_4000500c(uVar2,param_2,0x30);
    piVar4 = *(int **)(iVar1 + 0x4c);
    *(undefined4 *)(iVar1 + 4) = 9;
    piVar4[4] = param_1;
    if ((*piVar4 != 0) && (iVar3 = FUN_ram_40043c8a(*piVar4,0x80000), iVar3 != 0)) {
      FUN_ram_40043ba4(*piVar4,0x80000);
      FUN_ram_40044c48(*param_2,0x1d,iVar1);
      FUN_ram_400440ce(*piVar4,0x80000);
    }
    FUN_ram_4004d7dc(param_1,iVar1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004eec8.
 * REA evidence: ev_2b324439b00586161205486fafc40dc647ec1018a83191ed06f683fa51e27cb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004eec8(int param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,0x70);
  *(undefined1 *)(param_1 + 0x2d) = 0xff;
  *(undefined1 *)(param_1 + 0x2e) = 2;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  *(undefined1 *)(param_1 + 0x26) = 0xff;
  *(undefined1 *)(param_1 + 0x3b) = 0xff;
  *(undefined1 *)(param_1 + 0x6c) = 0xff;
  *(undefined ***)(param_1 + 0x34) = &PTR_LAB_ram_400136ec_ram_40099ce0;
  *(undefined4 *)(param_1 + 0x58) = 0xff;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xe000 | 0xfff;
  return;
}


/* NanoCore 1.12, address 0x4004ef32.
 * REA evidence: ev_d9420d4c3295bf7d48e0fbc479c03e93941ec4a67dd577cd04c0b1a269982a5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ef32(int param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,0x30);
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  *(undefined4 *)(param_1 + 0x14) = 0x30;
  return;
}


/* NanoCore 1.12, address 0x4004ef58.
 * REA evidence: ev_40589aeb04ebaad364eaceb4fde8c9966b6f1269698e7e90314cc3f95df95cb5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ef58(int param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,0x2c);
  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) & 0xe000 | 0xfff;
  *(undefined4 *)(param_1 + 0x14) = 0x2c;
  return;
}


/* NanoCore 1.12, address 0x4004ef8a.
 * REA evidence: ev_38d096dd99483ed94b3acd89eaeae2673a99df8a54cbdc269e1fc0a1f16ab8ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ef8a(undefined4 param_1,int param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iStack_54;
  int iStack_50;
  undefined1 auStack_4c [4];
  ushort uStack_48;
  ushort uStack_46;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  bVar2 = false;
  if ((((*(int *)(param_2 + 0x5c) != 0) && (2 < *(byte *)(param_2 + 0x6c))) &&
      (bVar2 = true, *(int *)(param_2 + 0x5c) == 1)) &&
     ((*(int *)(param_2 + 0x68) < 1 && (*(int *)(param_2 + 0x60) == 0)))) {
    bVar2 = *(int *)(param_2 + 100) != 0;
  }
  bVar1 = *(byte *)(param_2 + 0x20);
  bVar3 = false;
  if (2 < *(byte *)(param_2 + 0x3b)) {
    bVar3 = *(int *)(param_2 + 0x30) != 0;
  }
  uVar11 = 0;
  if ((2 < *(byte *)(param_2 + 0x48)) && (*(int *)(param_2 + 0x44) != 0)) {
    uVar11 = ((*(byte *)(param_2 + 0x49) ^ 0x20) & 0x3f) >> 5;
  }
  bVar4 = false;
  if (2 < *(byte *)(param_2 + 0x58)) {
    bVar4 = *(int *)(param_2 + 0x50) != 0;
  }
  bVar12 = 0;
  if (bVar1 == 0xff) {
    bVar12 = 1;
    if ((*(byte *)(param_2 + 0x2f) & 7) != 0) {
      for (uVar10 = 0; uVar10 < *(byte *)(param_2 + 0x2e); uVar10 = uVar10 + 1) {
        if (*(char *)(param_2 + 0x27 + uVar10 * 5) != -1) {
          bVar12 = 0;
          goto LAB_ram_4004f040;
        }
      }
      bVar12 = 1;
    }
  }
LAB_ram_4004f040:
  if (bVar2) {
    iVar5 = FUN_ram_4004d5b0(param_1,param_3);
    iVar6 = FUN_ram_4005a952(0x38);
    uVar9 = *(undefined4 *)(param_2 + 0x68);
    *(int *)(iVar5 + 0x4c) = iVar6;
    iVar7 = iVar5 + 0x18;
    FUN_ram_4004a4ca(iVar7,uVar9);
    FUN_ram_4004a4ca(iVar7,*(undefined4 *)(param_2 + 0x5c));
    FUN_ram_4004a4e4(iVar7,*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100));
    FUN_ram_4000303c(iVar6,param_2,0x1c);
    *(undefined4 *)(iVar6 + 0x14) = 0x38;
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    FUN_ram_4000303c(iVar6 + 0x20,param_2 + 0x59,3);
    *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(param_2 + 0x68);
    *(undefined1 *)(iVar6 + 0x34) = *(undefined1 *)(param_2 + 0x6c);
    *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(param_2 + 100);
    *(byte *)(iVar6 + 0x35) = *(byte *)(iVar6 + 0x35) & 0xfe | bVar12;
    *(undefined4 *)(iVar5 + 4) = 2;
    FUN_ram_4004d7dc(param_1,iVar5);
  }
  if (2 < bVar1) {
    FUN_ram_4000303c(&iStack_40,param_3,0x10);
    if (1 < *(int *)(param_2 + 0x44)) {
      if ((0xfc < *(byte *)(param_2 + 0x48)) && (*(int *)(param_2 + 0x1c) != 0)) {
        iVar5 = *(int *)(param_2 + 0x48);
        iStack_40 = iStack_40 - ((iVar5 << 0x15) >> 0x1f);
        iStack_3c = iStack_3c - ((iVar5 << 0x16) >> 0x1f);
        iStack_38 = iStack_38 + ((iVar5 << 0x14) >> 0x1f);
        iStack_34 = iStack_34 + ((iVar5 << 0x17) >> 0x1f);
      }
    }
    iVar5 = FUN_ram_4004d5b0(param_1,&iStack_40);
    iVar6 = FUN_ram_4005a952(0x30);
    FUN_ram_4004ef32();
    *(int *)(iVar5 + 0x4c) = iVar6;
    FUN_ram_4000303c(iVar6,param_2,0x1c);
    *(undefined4 *)(iVar6 + 0x14) = 0x30;
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    FUN_ram_4000303c(iVar6 + 0x21,param_2 + 0x21,3);
    FUN_ram_4000303c(iVar6 + 0x24,param_2 + 0x24,0xc);
    *(undefined1 *)(iVar6 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    *(undefined4 *)(iVar5 + 4) = 0;
    FUN_ram_4004d7dc(param_1,iVar5);
  }
  if (bVar3) {
    uVar10 = FUN_ram_4004e36e(*(undefined4 *)(param_2 + 0x30));
    if (uVar10 < 2) {
      iVar5 = FUN_ram_4004f6c8(*(undefined4 *)(param_2 + 0x30),auStack_4c);
      if (iVar5 != 1) goto LAB_ram_4004f308;
      piVar8 = param_3;
      if (*(char *)(param_2 + 0x3d) == '\0') {
        iStack_38 = uStack_48 - 1;
        iStack_34 = uStack_46 - 1;
        iStack_40 = 0;
        iStack_3c = 0;
        FUN_ram_4004a8d0(param_3,&iStack_40,9,0,0);
        piVar8 = &iStack_40;
      }
      iVar5 = FUN_ram_4004d5b0(param_1,piVar8);
      iVar6 = FUN_ram_4005a952(0x68);
      FUN_ram_4004e31e();
      *(int *)(iVar5 + 0x4c) = iVar6;
      FUN_ram_4000303c(iVar6,param_2,0x1c);
      *(undefined4 *)(iVar6 + 0x14) = 0x68;
      *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_2 + 0x30);
      *(undefined1 *)(iVar6 + 0x4c) = *(undefined1 *)(param_2 + 0x3b);
      *(undefined2 *)(iVar6 + 0x48) = *(undefined2 *)(param_2 + 0x38);
      *(undefined1 *)(iVar6 + 0x4a) = *(undefined1 *)(param_2 + 0x3a);
      *(undefined1 *)(iVar6 + 0x4b) = *(undefined1 *)(param_2 + 0x3c);
      *(byte *)(iVar6 + 0x4d) =
           *(byte *)(iVar6 + 0x4d) & 0xdf | (*(byte *)(param_2 + 0x3d) & 1) << 5;
      FUN_ram_4000303c(iVar6 + 0x20,auStack_4c,0xc);
      *(undefined4 *)(iVar5 + 4) = 4;
    }
    else {
      if (uVar10 == 3) goto LAB_ram_4004f308;
      thunk_FUN_ram_40004f92(auStack_4c,0,0xc);
      FUN_ram_4004c580(&iStack_54,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),0,
                       0,0x1fffffff,0);
      iStack_38 = iStack_54 + -1;
      iStack_34 = iStack_50 + -1;
      iStack_40 = 0;
      iStack_3c = 0;
      FUN_ram_4004a8d0(param_3,&iStack_40,9,0,0);
      iVar5 = FUN_ram_4004d5b0(param_1,&iStack_40);
      iVar6 = FUN_ram_4005a952(0x54);
      FUN_ram_4004e7e0();
      *(int *)(iVar5 + 0x4c) = iVar6;
      FUN_ram_4000303c(iVar6,param_2,0x1c);
      *(undefined4 *)(iVar6 + 0x14) = 0x54;
      *(undefined2 *)(iVar6 + 0x2c) = *(undefined2 *)(param_2 + 0x38);
      *(undefined1 *)(iVar6 + 0x2e) = *(undefined1 *)(param_2 + 0x3a);
      *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(iVar5 + 4) = 3;
    }
    FUN_ram_4004d7dc(param_1,iVar5);
  }
LAB_ram_4004f308:
  if (uVar11 != 0) {
    iVar5 = FUN_ram_4004d5b0(param_1,param_3);
    uVar9 = FUN_ram_4005a952(0x2c);
    *(undefined4 *)(iVar5 + 0x4c) = uVar9;
    iVar6 = FUN_ram_4000303c(uVar9,param_2,0x1c);
    *(undefined4 *)(iVar6 + 0x14) = 0x2c;
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(param_2 + 0x3e);
    *(undefined1 *)(iVar6 + 0x22) = *(undefined1 *)(param_2 + 0x40);
    *(undefined1 *)(iVar6 + 0x28) = *(undefined1 *)(param_2 + 0x48);
    *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_2 + 0x44);
    *(byte *)(iVar6 + 0x29) =
         *(byte *)(iVar6 + 0x29) & 0xe0 | (byte)((uint)*(undefined4 *)(param_2 + 0x48) >> 8) & 0x1f;
    *(undefined4 *)(iVar5 + 4) = 1;
    FUN_ram_4004d7dc(param_1,iVar5);
  }
  if (bVar4) {
    FUN_ram_4000303c(&iStack_40,param_3,0x10);
    FUN_ram_4004a4ca(&iStack_40,*(int *)(param_2 + 0x50) + *(int *)(param_2 + 0x54));
    iVar5 = FUN_ram_4004d5b0(param_1,&iStack_40);
    iVar6 = FUN_ram_4005a952(0x2c);
    uVar9 = *(undefined4 *)(param_2 + 0x50);
    *(int *)(iVar5 + 0x4c) = iVar6;
    FUN_ram_4004a4ca(iVar5 + 0x18,uVar9);
    FUN_ram_4004a4ca(iVar5 + 0x18,*(undefined4 *)(param_2 + 0x54));
    FUN_ram_4000303c(iVar6,param_2,0x1c);
    *(undefined4 *)(iVar6 + 0x14) = 0x2c;
    iVar7 = *(int *)(param_2 + 0x1c);
    if (iVar7 != 0x7fff) {
      iVar7 = iVar7 + *(int *)(param_2 + 0x50) + *(int *)(param_2 + 0x54);
    }
    *(int *)(iVar6 + 0x1c) = iVar7;
    *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(param_2 + 0x4a);
    *(undefined1 *)(iVar6 + 0x22) = *(undefined1 *)(param_2 + 0x4c);
    *(undefined1 *)(iVar6 + 0x28) = *(undefined1 *)(param_2 + 0x58);
    *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_2 + 0x50);
    *(byte *)(iVar6 + 0x29) = *(byte *)(iVar6 + 0x29) & 0xe0 | 0xf;
    *(undefined4 *)(iVar5 + 4) = 1;
    FUN_ram_4004d7dc(param_1,iVar5);
  }
  return;
}


