/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40041000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40041086.
 * REA evidence: ev_2b26db2c6a006dd51ac42f6a0311d2b1b303ea2b14cd5b12e33db755a1231b7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041086(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  
  uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x68) + 6);
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x68) + 4);
  uVar4 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
  uVar1 = uVar4 - param_3;
  if ((uVar2 < uVar3) || ((*(byte *)(param_1 + 0x5c) & 0x10) != 0)) {
    if ((param_2 + uVar4 + uVar2) - uVar3 < uVar1) {
      return;
    }
    if ((*(byte *)(param_1 + 0x5c) & 0x10) != 0) {
      return;
    }
    pcVar5 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
  }
  else {
    if ((param_2 + uVar2) - uVar3 < uVar1) {
      return;
    }
    pcVar5 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
  }
  (*pcVar5)(param_1,0x84,0,uVar2,uVar3,pcVar5);
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x10;
  return;
}


/* NanoCore 1.10, address 0x400410fa.
 * REA evidence: ev_6113668a5ce97fea38b43d6aba76b9a1dd058c88b8bf04b006f587f738cfbaf0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400410fa(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x68) + 6);
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x68) + 4);
  if (uVar2 < uVar5) {
    if ((*(byte *)(param_1 + 0x5c) & 0x10) == 0) {
      return;
    }
    uVar4 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
    uVar1 = uVar4 - param_3;
    param_2 = uVar4 - param_2;
  }
  else {
    if ((*(byte *)(param_1 + 0x5c) & 0x10) == 0) {
      return;
    }
    param_2 = -param_2;
    uVar1 = ((*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10) - param_3;
  }
  if ((uVar2 + param_2) - uVar5 <= uVar1) {
    pcVar3 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
    (*pcVar3)(param_1,0x83,0,uVar1,uVar2,pcVar3);
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xef;
  }
  return;
}


/* NanoCore 1.10, address 0x4004115c.
 * REA evidence: ev_35b4f1224ff2a8e5e28b86c81bed24110e7e39f0498b9a7c6e806955a3ac8a33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

size_t FUN_ram_4004115c(int param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  void *__src;
  uint uVar6;
  size_t __n;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  size_t sVar11;
  uint uVar12;
  
  sVar11 = param_4;
  if (param_4 != 0) {
    if ((*(ushort *)(param_1 + 0x22) & 0x100) == 0) {
      if ((*(ushort *)(param_1 + 0x22) & 0x200) == 0) {
        if ((*(byte *)(param_1 + 0x5c) & 0xf) == 7) {
          pcVar8 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
          (*pcVar8)(param_1,0x80,0,param_4,7,pcVar8);
        }
        while (iVar7 = (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(param_1), iVar7 != -1) {
          *(char *)((int)param_3 + (param_4 - sVar11)) = (char)iVar7;
          sVar11 = sVar11 - 1;
          if ((((*(ushort *)(param_1 + 0x22) & 0x40) != 0) && (iVar7 == 10)) || (sVar11 == 0))
          break;
        }
        sVar11 = param_4 - sVar11;
      }
      else {
        uVar5 = FUN_ram_400002f4();
        uVar12 = *(uint *)(param_1 + 0x54);
        piVar4 = *(int **)(param_1 + 0x68);
        if ((uVar12 & 0x3fffc00) == 0) {
          iVar7 = *piVar4;
          iVar10 = -7;
          if (iVar7 != 1) {
            *piVar4 = 1;
            pcVar8 = *(code **)(*(int *)(param_1 + 0x4c) + 0x10);
            (*pcVar8)(param_1,param_3,param_4,1,iVar7,pcVar8);
            iVar10 = 0;
          }
          FUN_ram_400002fa(uVar5);
          if (iVar10 != 0) {
            FUN_ram_40005014(iVar10);
            sVar11 = 0;
          }
        }
        else {
          sVar11 = FUN_ram_40040b70(param_1);
          uVar6 = (uint)*(ushort *)((int)piVar4 + 6);
          if ((int)param_4 < (int)sVar11) {
            sVar11 = param_4;
          }
          uVar12 = (uVar12 & 0x3ffffff) >> 10;
          __src = (void *)(*piVar4 + uVar6);
          __n = sVar11;
          if (uVar12 <= uVar6 + sVar11) {
            memcpy(param_3,__src,uVar12 - uVar6);
            __src = (void *)*piVar4;
            uVar12 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
            param_3 = (void *)((uVar12 - *(ushort *)((int)piVar4 + 6)) + (int)param_3);
            __n = (*(ushort *)((int)piVar4 + 6) - uVar12) + sVar11;
          }
          memcpy(param_3,__src,__n);
          bVar1 = *(byte *)(param_1 + 0x5c);
          if ((((bVar1 & 0xe) == 4) || ((bVar1 & 0xf) == 6)) && ((bVar1 & 0x40) != 0)) {
            FUN_ram_400410fa(param_1,sVar11,100);
          }
          iVar7 = *(int *)(param_1 + 0x68);
          if ((*(int *)(iVar7 + 8) != 0) && (sVar11 != 0)) {
            *(undefined4 *)(iVar7 + 8) = 0;
          }
          uVar12 = *(uint *)(param_1 + 0x54);
          uVar6 = *(ushort *)(iVar7 + 6) + sVar11;
          uVar9 = uVar6 & 0xffff;
          *(short *)(iVar7 + 6) = (short)(uVar6 * 0x10000 >> 0x10);
          uVar12 = (uVar12 & 0x3ffffff) >> 10;
          if (uVar12 <= uVar9) {
            if (uVar12 != 0) {
              uVar9 = uVar9 % uVar12;
            }
            *(short *)(iVar7 + 6) = (short)uVar9;
          }
          FUN_ram_400002fa(uVar5);
        }
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x5c) & 0xf) == 7) {
        pcVar8 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
        (*pcVar8)(param_1,0x80,0,param_4,7,pcVar8);
      }
      piVar4 = *(int **)(param_1 + 0x68);
      do {
        uVar5 = FUN_ram_400002f4();
        uVar2 = *(ushort *)((int)piVar4 + 6);
        if (((uint)*(ushort *)(piVar4 + 1) == (uint)uVar2) && (piVar4[2] == 0)) {
          FUN_ram_400002fa();
          break;
        }
        uVar3 = *(undefined1 *)(*piVar4 + (uint)uVar2);
        *(ushort *)((int)piVar4 + 6) = uVar2 + 1;
        bVar1 = *(byte *)(param_1 + 0x5c);
        if ((((bVar1 & 0xe) == 4) || ((bVar1 & 0xf) == 6)) && ((bVar1 & 0x40) != 0)) {
          FUN_ram_400410fa(param_1,1,100);
        }
        if ((*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10 <= (uint)*(ushort *)((int)piVar4 + 6)) {
          *(undefined2 *)((int)piVar4 + 6) = 0;
        }
        if (piVar4[2] == 1) {
          piVar4[2] = 0;
        }
        FUN_ram_400002fa(uVar5);
        *(undefined1 *)((int)param_3 + (param_4 - sVar11)) = uVar3;
        sVar11 = sVar11 - 1;
      } while (sVar11 != 0);
      sVar11 = param_4 - sVar11;
    }
  }
  return sVar11;
}


/* NanoCore 1.10, address 0x4004139c.
 * REA evidence: ev_6e22ce708ac8926572d884a755a9e9f0de060cda20348d7d08c427c5b89867b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004139c(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  *(undefined1 **)(param_1 + 0x30) = &LAB_ram_40040ba6;
  *(undefined1 **)(param_1 + 0x34) = &LAB_ram_40040e8c;
  *(undefined1 **)(param_1 + 0x38) = &LAB_ram_40040dc0;
  *(code **)(param_1 + 0x3c) = FUN_ram_4004115c;
  *(code **)(param_1 + 0x40) = FUN_ram_40040c86;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(code **)(param_1 + 0x44) = FUN_ram_40040bbe;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  FUN_ram_4000447c(param_1,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400413ee.
 * REA evidence: ev_f14b8e7a20546cbf176856326023255186bcc827108d918643c9fae01ccc507a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400413ee(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  code *pcVar8;
  int iStack_24;
  
  piVar2 = *(int **)(param_1 + 0x68);
  iStack_24 = -1;
  if (piVar2 == (int *)0x0) {
    do {
      iStack_24 = (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(param_1);
    } while (iStack_24 != -1);
  }
  else {
    while (iStack_24 = (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(param_1), iStack_24 != -1) {
      uVar3 = FUN_ram_400002f4();
      *(char *)(*piVar2 + (uint)*(ushort *)(piVar2 + 1)) = (char)iStack_24;
      uVar5 = *(uint *)(param_1 + 0x54);
      uVar7 = (short)piVar2[1] + 1;
      *(ushort *)(piVar2 + 1) = uVar7;
      if ((uVar5 & 0x3ffffff) >> 10 <= (uint)uVar7) {
        *(undefined2 *)(piVar2 + 1) = 0;
      }
      bVar1 = *(byte *)(param_1 + 0x5c);
      if ((((bVar1 & 0xe) == 4) || ((bVar1 & 0xf) == 6)) && ((bVar1 & 0x40) != 0)) {
        FUN_ram_40041086(param_1,1,0x32);
      }
      bVar1 = *(byte *)(param_1 + 0x5c);
      if (((byte)((bVar1 & 0xf) - 5) < 2) && ((bVar1 & 0x20) != 0)) {
        pcVar8 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
        (*pcVar8)(param_1,0x86,&iStack_24,1,bVar1 & 0x20,pcVar8);
      }
      if ((short)piVar2[1] == *(short *)((int)piVar2 + 6)) {
        piVar2[2] = 1;
        uVar5 = *(uint *)(param_1 + 0x54);
        uVar7 = (short)piVar2[1] + 1;
        *(ushort *)((int)piVar2 + 6) = uVar7;
        if ((uVar5 & 0x3ffffff) >> 10 <= (uint)uVar7) {
          *(undefined2 *)((int)piVar2 + 6) = 0;
        }
        if (_DAT_ram_3007f8dc == 0) {
          _DAT_ram_3007f8dc = 1;
        }
      }
      FUN_ram_400002fa(uVar3);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_ram_400002f4();
      uVar6 = (uint)*(ushort *)(piVar2 + 1);
      uVar5 = (uint)*(ushort *)((int)piVar2 + 6);
      if (uVar6 < uVar5) {
        iVar4 = ((*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10) - (uVar5 - uVar6);
      }
      else {
        iVar4 = uVar6 - uVar5;
      }
      FUN_ram_400002fa();
      if (iVar4 != 0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4004153a.
 * REA evidence: ev_295b35bd61085399eb8b49e96f43f167e284e0efda0d21e5034dabf399a4f733
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004153a(int param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar9 = param_2 & 0xff;
  if (uVar9 != 3) {
    if ((param_2 & 0xfc) != 0) {
      if (uVar9 != 4) {
        return;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x6c);
      FUN_ram_40040276(puVar3 + 1,&uStack_14,&uStack_18,0);
      iVar4 = FUN_ram_40040128(puVar3 + 1,&uStack_1c,&uStack_18);
      if (iVar4 == 0) {
        *puVar3 = 1;
        (**(code **)(*(int *)(param_1 + 0x4c) + 0x10))(param_1,uStack_1c,uStack_18,2);
      }
      else {
        *puVar3 = 0;
      }
      if (*(code **)(param_1 + 0x2c) == (code *)0x0) {
        return;
      }
      (**(code **)(param_1 + 0x2c))(param_1,uStack_14);
      return;
    }
    if (uVar9 == 1) {
      FUN_ram_400413ee();
      return;
    }
    if (uVar9 != 2) {
      return;
    }
    FUN_ram_4003ff4e(*(undefined4 *)(param_1 + 0x6c));
    return;
  }
  iVar4 = (int)param_2 >> 8;
  if ((*(uint *)(param_1 + 0x54) & 0x3fffc00) == 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x68);
    (**(code **)(param_1 + 0x28))(param_1,iVar4);
    *puVar3 = 0;
    return;
  }
  uVar5 = FUN_ram_400002f4();
  bVar1 = *(byte *)(param_1 + 0x5c);
  if ((((bVar1 & 0xe) == 4) || ((bVar1 & 0xf) == 6)) && ((bVar1 & 0x40) != 0)) {
    FUN_ram_40041086(param_1,iVar4,0x32);
  }
  iVar10 = *(int *)(param_1 + 0x68);
  uVar2 = *(ushort *)(iVar10 + 4);
  uVar8 = (uint)*(ushort *)(iVar10 + 6);
  uVar9 = (uint)uVar2 + iVar4;
  uVar7 = uVar9 & 0xffff;
  *(short *)(iVar10 + 4) = (short)(uVar9 * 0x10000 >> 0x10);
  if (uVar2 < uVar8) {
    if (uVar7 < uVar8) goto LAB_ram_4004168c;
    uVar9 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
    if (uVar9 <= uVar7) {
      if (uVar9 != 0) {
        uVar7 = uVar7 % uVar9;
      }
      *(short *)(iVar10 + 4) = (short)uVar7;
    }
LAB_ram_40041656:
    *(undefined4 *)(iVar10 + 8) = 1;
  }
  else {
    uVar9 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
    if (uVar9 <= uVar7) {
      if (uVar9 != 0) {
        uVar7 = uVar7 % uVar9;
      }
      *(short *)(iVar10 + 4) = (short)uVar7;
      if (uVar8 <= uVar7) goto LAB_ram_40041656;
    }
LAB_ram_4004168c:
    if (*(int *)(iVar10 + 8) != 1) goto LAB_ram_40041694;
  }
  if (_DAT_ram_3007f8dc == 0) {
    _DAT_ram_3007f8dc = 1;
  }
  *(undefined2 *)(iVar10 + 6) = *(undefined2 *)(iVar10 + 4);
LAB_ram_40041694:
  uVar6 = FUN_ram_40040b70(param_1);
  FUN_ram_400002fa(uVar5);
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x400416b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(param_1,uVar6);
  return;
}


/* NanoCore 1.10, address 0x400416b8.
 * REA evidence: ev_7680f4450e41085329986b65cafd19ae48d4aa55ebe508a3844fd54ddd570ca4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400416b8(int param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x5c) = *param_2;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x5d) = param_2[1];
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x68) = param_2[0xc];
  *(undefined1 *)(param_1 + 0x69) = param_2[0xd];
  FUN_ram_4004194e();
  return;
}


/* NanoCore 1.10, address 0x400416ea.
 * REA evidence: ev_8e0edb6f4fbb117d02d2262aff48f6a8e15e391b52874ac1b399168436ea3118
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400416ea(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400418c2();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x4c) = 2;
  }
  return;
}


/* NanoCore 1.10, address 0x40041704.
 * REA evidence: ev_9225a1a6d5c19d3c2a0d2e5b9d75a568ea790ae6b1e2bc3d5b35ba7eecb9d126
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40041704(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_400049d6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar1 != 0) {
    FUN_ram_40005014(0xfffffff9);
    return 0;
  }
  FUN_ram_40005014();
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_40041758:
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,param_2);
    if (iVar1 != 0) goto LAB_ram_4004176e;
  }
  else {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    if (iVar1 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_40041758;
    }
  }
  FUN_ram_40005014(0xfffffff8);
LAB_ram_4004176e:
  FUN_ram_40004ac8(*(int *)(param_1 + 0x4c) + 0x54);
  return iVar1;
}


/* NanoCore 1.10, address 0x4004177c.
 * REA evidence: ev_62b01d88b3a7a648aa8ea8269e3b37736442d0441e5acd645bf8604cc8d86284
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004177c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  byte bStack_40;
  undefined1 uStack_24;
  
  FUN_ram_4000505c(&local_50,0,0x30);
  iVar1 = FUN_ram_400049d6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar1 != 0) {
    FUN_ram_40005014(0xfffffff9);
    return 0;
  }
  FUN_ram_40005014();
  iVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_400417ee:
    uStack_24 = param_3 != 0;
    uStack_4c = 0;
    bStack_40 = bStack_40 & 0xfc | 1;
    uStack_44 = 0;
    local_50 = param_2;
    iStack_48 = param_3;
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,&local_50);
    if (iVar2 != 0) {
      uStack_24 = param_5 != 0;
      local_50 = 0;
      bStack_40 = bStack_40 & 0xfc | 2;
      uStack_44 = 0;
      uStack_4c = param_4;
      iStack_48 = param_5;
      iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,&local_50);
      if (iVar1 != 0) goto LAB_ram_4004184e;
    }
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_400417ee;
    }
  }
  FUN_ram_40005014(0xfffffff8);
LAB_ram_4004184e:
  FUN_ram_40004ac8(*(int *)(param_1 + 0x4c) + 0x54);
  iVar2 = -8;
  if (iVar1 != 0) {
    iVar2 = param_5;
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x40041870.
 * REA evidence: ev_f01ddcecb0426cde9cac888045d31acbf1f9fb595cf07c0b0b234547ecd13af5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40041870(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  byte bStack_30;
  undefined1 uStack_14;
  
  FUN_ram_4000505c(&local_40,0,0x30);
  if (param_3 != 0) {
    uStack_14 = 1;
  }
  bStack_30 = bStack_30 | 3;
  uStack_3c = 0;
  local_40 = param_2;
  iStack_38 = param_3;
  iVar1 = FUN_ram_40041704(param_1,&local_40);
  iVar2 = -8;
  if (iVar1 != 0) {
    iVar2 = param_3;
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x400418c2.
 * REA evidence: ev_760c03c636798eeac1d51b477eb43185455a9570237f4f696cf1822c821d7ef4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400418c2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_40041b26();
  if (iVar1 == 0) {
    FUN_ram_4000493c(param_1 + 0x54,param_2,1);
    *(undefined4 *)(param_1 + 0x50) = param_3;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40041900.
 * REA evidence: ev_8b15c7c5aad479a607bca985cc86e4ff29058c5b54fbe6b935e29368db71e5db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40041900(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40004476(param_3);
  iVar1 = -1;
  if (iVar2 != 0) {
    iVar1 = -1;
    if (*(int *)(iVar2 + 0x1c) == 0xc) {
      *(int *)(param_1 + 0x4c) = iVar2;
      iVar1 = FUN_ram_40041b54(param_1,param_2);
      if (iVar1 == 0) {
        FUN_ram_4000505c(param_1 + 0x50,0,8);
        *(undefined4 *)(param_1 + 0x48) = param_4;
      }
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004194e.
 * REA evidence: ev_92b99d2d99d49e69b4f65f4fadc97f7f8dd87629767145f532e3e5971d80ffef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004194e(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x51) = param_2[1];
  *(undefined1 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_ram_400049d6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
      }
      FUN_ram_40004ac8(*(int *)(param_1 + 0x4c) + 0x54);
    }
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400419b6.
 * REA evidence: ev_99730af8a552ead653c15d7166f6de8a14ccbd2ceae3c9b4248bec456c388cec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400419b6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte bStack_24;
  
  iVar2 = FUN_ram_400049d6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar2 != 0) {
    return 0xfffffff8;
  }
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_40041a20:
    uStack_30 = 0;
    bStack_24 = bStack_24 & 0xfc | 1;
    uStack_28 = 0;
    uStack_34 = param_2;
    uStack_2c = param_3;
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,&uStack_34);
    if (iVar2 != 0) {
      uStack_34 = 0;
      bStack_24 = bStack_24 & 0xfc | 2;
      uStack_28 = 0;
      uStack_30 = param_4;
      uStack_2c = param_5;
      iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,&uStack_34);
      uVar1 = 0;
      if (iVar2 != 0) goto LAB_ram_400419fc;
    }
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_40041a20;
    }
  }
  uVar1 = 0xfffffff8;
LAB_ram_400419fc:
  FUN_ram_40004ac8(*(int *)(param_1 + 0x4c) + 0x54);
  return uVar1;
}


/* NanoCore 1.10, address 0x40041a6a.
 * REA evidence: ev_b3ddb08c2bfbed73b68122b7361eb30b68a20ff69db74caee7931c967843f2d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40041a6a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte bStack_24;
  
  iVar1 = FUN_ram_400049d6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar1 != 0) {
    FUN_ram_40005014(0xfffffff8);
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_40041aae:
    bStack_24 = bStack_24 | 3;
    uStack_28 = 0;
    uStack_34 = param_2;
    uStack_30 = param_3;
    uStack_2c = param_4;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,&uStack_34);
    if (iVar1 != 0) goto LAB_ram_40041ad8;
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    iVar1 = 0;
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_40041aae;
    }
  }
  FUN_ram_40005014(0xfffffff8);
LAB_ram_40041ad8:
  FUN_ram_40004ac8(*(int *)(param_1 + 0x4c) + 0x54);
  return iVar1;
}


/* NanoCore 1.10, address 0x40041b26.
 * REA evidence: ev_6954d0104a4ba7814a850182e08361f48ea707bad6c7c92c123a6b0c3aded8e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041b26(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xc;
  *(undefined **)(param_1 + 0x3c) = &DAT_ram_40041b0e;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x40) = &DAT_ram_40041b02;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_ram_4000447c(param_1,param_2,3);
  return;
}


/* NanoCore 1.10, address 0x40041b54.
 * REA evidence: ev_b16772b8da154eb68f20006634b4ad2c9cf7222b89fabf307098376e38fd5129
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041b54(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xd;
  *(undefined **)(param_1 + 0x3c) = &DAT_ram_40041b20;
  *(undefined **)(param_1 + 0x40) = &DAT_ram_40041b18;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_40041afe;
  FUN_ram_4000447c(param_1,param_2,3);
  return;
}


/* NanoCore 1.10, address 0x40041e04.
 * REA evidence: ev_f74d7adca623b795b6dfce9ca42026b6e784aa9c8d6d5b767c9f23748421175e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40041e04(int param_1)

{
  *(undefined1 **)(param_1 + 0x30) = &LAB_ram_40041bea;
  *(undefined1 **)(param_1 + 0x24) = &LAB_ram_40041bbe;
  *(undefined1 **)(param_1 + 0x28) = &LAB_ram_40041b88;
  *(undefined1 **)(param_1 + 0x2c) = &LAB_ram_40041bb4;
  *(undefined1 **)(param_1 + 0x34) = &LAB_ram_40041d06;
  *(undefined1 **)(param_1 + 0x38) = &LAB_ram_40041ba6;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_40041b9a;
  *(undefined1 **)(param_1 + 0x48) = &LAB_ram_40041b92;
  *(int *)(param_1 + 0x40) = param_1;
  *(undefined4 *)(param_1 + 0x4c) = 600000;
  return 0;
}


/* NanoCore 1.10, address 0x40041e64.
 * REA evidence: ev_dbe97dfe3486047a4cf30e3a8bf6c16cab3755cb9379bae437a3f3e4aa0a0c1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40041e64(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar1 = FUN_ram_40005666(0x8c);
  piVar2 = (int *)FUN_ram_40005666(0xa8);
  iVar3 = FUN_ram_40005244(param_1);
  iVar3 = FUN_ram_40005666(iVar3 + 1);
  iVar4 = FUN_ram_40005244(param_2);
  iVar4 = FUN_ram_40005666(iVar4 + 1);
  if (piVar2 == (int *)0x0) {
    if (iVar1 == 0) goto LAB_ram_40041ef2;
  }
  else {
    FUN_ram_4000505c(piVar2,0,0xa8);
    piVar2[0x26] = 50000000;
    if (iVar1 == 0) goto LAB_ram_40041ef2;
    FUN_ram_4000505c(iVar1,0,0x8c);
    FUN_ram_4000493c(iVar1 + 0x5c,param_1,1);
    if ((iVar3 != 0) && (iVar4 != 0)) {
      uVar5 = FUN_ram_40005244(param_1);
      FUN_ram_400051c2(iVar3,param_1,uVar5);
      uVar5 = FUN_ram_40005244(param_2);
      FUN_ram_400051c2(iVar4,param_2,uVar5);
      iVar6 = FUN_ram_40005244(param_1);
      *(undefined1 *)(iVar3 + iVar6) = 0;
      iVar6 = FUN_ram_40005244(param_2);
      *(undefined1 *)(iVar4 + iVar6) = 0;
      iVar6 = FUN_ram_40004476(param_2);
      *(int *)(iVar1 + 0x58) = iVar6;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == 0xd)) {
        iVar9 = *(int *)(param_4 + 4);
        piVar2[8] = iVar4;
        piVar2[0x27] = iVar9;
        *(int *)(param_4 + 4) = piVar2[0x26];
        if ((*(byte *)(*(int *)(iVar6 + 0x4c) + 0x4c) & 2) == 0) {
          FUN_ram_4004194e(iVar6,param_3);
          iVar6 = 0;
        }
        else {
          *(undefined1 *)(param_4 + 0xd) = *(undefined1 *)(iVar6 + 0x69);
          FUN_ram_400416b8(iVar6,param_4);
        }
        *(int *)(param_4 + 4) = piVar2[0x27];
        iVar9 = *(int *)(iVar1 + 0x58);
        *piVar2 = iVar3;
        *(int **)(iVar1 + 0x88) = piVar2;
        *(int *)(iVar9 + 0x58) = iVar1;
        *(int *)(iVar1 + 0x48) = iVar1;
        piVar2[0x14] = iVar1;
        iVar9 = FUN_ram_4005a6b2(piVar2);
        if (iVar9 == 0) {
          uVar10 = piVar2[6];
          uVar8 = piVar2[4];
          *(uint *)(iVar1 + 0x50) = uVar10;
          if (uVar10 == 0) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = uVar8 / uVar10;
          }
          *(uint *)(iVar1 + 0x54) = uVar10;
          iVar3 = *(int *)(*(int *)(iVar1 + 0x58) + 0x4c);
          *(uint *)(iVar1 + 0x4c) = uVar7;
          if ((*(byte *)(iVar3 + 0x4c) & 2) != 0) {
            *(uint *)(param_4 + 8) = uVar8;
            FUN_ram_400416b8(iVar6,param_4);
            if (*(code **)(iVar6 + 0x6c) != (code *)0x0) {
              (**(code **)(iVar6 + 0x6c))(iVar6);
            }
            FUN_ram_40059db2(piVar2,*(undefined1 *)(iVar6 + 0x69));
          }
          *(undefined4 *)(iVar1 + 0x1c) = 1;
          *(undefined1 **)(iVar1 + 0x3c) = &LAB_ram_40041c70;
          *(undefined1 **)(iVar1 + 0x40) = &LAB_ram_40041c44;
          *(undefined4 *)(iVar1 + 0x30) = 0;
          *(undefined4 *)(iVar1 + 0x34) = 0;
          *(undefined4 *)(iVar1 + 0x38) = 0;
          *(undefined1 **)(iVar1 + 0x44) = &LAB_ram_40041c9c;
          FUN_ram_4000447c(iVar1,param_1,0xb);
          return iVar1;
        }
      }
    }
  }
  FUN_ram_40004970(iVar1 + 0x5c);
LAB_ram_40041ef2:
  FUN_ram_400056c4(iVar1);
  FUN_ram_400056c4(piVar2);
  FUN_ram_400056c4(iVar3);
  FUN_ram_400056c4(iVar4);
  return 0;
}


