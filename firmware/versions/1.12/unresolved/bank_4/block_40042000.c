/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40042000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400420b6.
 * REA evidence: ev_dd93796cd8fe1a6cddb6252899c7acd06f03d98f00ca1dc3330761f30a611679
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400420b6(int param_1,int param_2,int param_3)

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


/* NanoCore 1.12, address 0x4004212a.
 * REA evidence: ev_745572bce4591eca7371bb5dec2b9e0d9ea616461124fd5a3eaf579f1160a496
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004212a(int param_1,int param_2,int param_3)

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


/* NanoCore 1.12, address 0x4004218c.
 * REA evidence: ev_78320f369a1f8b23f20c6baa44a9c9ae29a585e7604c6705fb192e871fa5584d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004218c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar11 = param_4;
  if (param_4 != 0) {
    if ((*(ushort *)(param_1 + 0x22) & 0x100) == 0) {
      if ((*(ushort *)(param_1 + 0x22) & 0x200) == 0) {
        if ((*(byte *)(param_1 + 0x5c) & 0xf) == 7) {
          pcVar8 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
          (*pcVar8)(param_1,0x80,0,param_4,7,pcVar8);
        }
        while (iVar7 = (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(param_1), iVar7 != -1) {
          *(char *)((param_3 + param_4) - iVar11) = (char)iVar7;
          iVar11 = iVar11 + -1;
          if ((((*(ushort *)(param_1 + 0x22) & 0x40) != 0) && (iVar7 == 10)) || (iVar11 == 0))
          break;
        }
        iVar11 = param_4 - iVar11;
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
            FUN_ram_40004f4a(iVar10);
            iVar11 = 0;
          }
        }
        else {
          iVar11 = FUN_ram_40041b6a(param_1);
          uVar6 = (uint)*(ushort *)((int)piVar4 + 6);
          if (param_4 < iVar11) {
            iVar11 = param_4;
          }
          uVar12 = (uVar12 & 0x3ffffff) >> 10;
          iVar10 = *piVar4 + uVar6;
          iVar7 = iVar11;
          if (uVar12 <= uVar6 + iVar11) {
            memcpy(param_3,iVar10,uVar12 - uVar6);
            iVar10 = *piVar4;
            uVar12 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
            param_3 = (uVar12 - *(ushort *)((int)piVar4 + 6)) + param_3;
            iVar7 = (*(ushort *)((int)piVar4 + 6) - uVar12) + iVar11;
          }
          memcpy(param_3,iVar10,iVar7);
          bVar1 = *(byte *)(param_1 + 0x5c);
          if ((((bVar1 & 0xe) == 4) || ((bVar1 & 0xf) == 6)) && ((bVar1 & 0x40) != 0)) {
            FUN_ram_4004212a(param_1,iVar11,100);
          }
          iVar7 = *(int *)(param_1 + 0x68);
          if ((*(int *)(iVar7 + 8) != 0) && (iVar11 != 0)) {
            *(undefined4 *)(iVar7 + 8) = 0;
          }
          uVar12 = *(uint *)(param_1 + 0x54);
          uVar6 = (uint)*(ushort *)(iVar7 + 6) + iVar11;
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
          FUN_ram_4004212a(param_1,1,100);
        }
        if ((*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10 <= (uint)*(ushort *)((int)piVar4 + 6)) {
          *(undefined2 *)((int)piVar4 + 6) = 0;
        }
        if (piVar4[2] == 1) {
          piVar4[2] = 0;
        }
        FUN_ram_400002fa(uVar5);
        *(undefined1 *)((param_3 + param_4) - iVar11) = uVar3;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      iVar11 = param_4 - iVar11;
    }
  }
  return iVar11;
}


/* NanoCore 1.12, address 0x400423cc.
 * REA evidence: ev_27bbb4f670ce29894b0f7eb54c7272461982dd62383e43f18f046ec8302b58f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400423cc(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  *(undefined1 **)(param_1 + 0x30) = &LAB_ram_40041ba0;
  *(undefined1 **)(param_1 + 0x34) = &LAB_ram_40041dc0;
  *(undefined1 **)(param_1 + 0x38) = &LAB_ram_40041fce;
  *(code **)(param_1 + 0x3c) = FUN_ram_4004218c;
  *(code **)(param_1 + 0x40) = FUN_ram_40041c80;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(code **)(param_1 + 0x44) = FUN_ram_40041bb8;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  FUN_ram_400044c8(param_1,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004241e.
 * REA evidence: ev_da7bbd15e2547f3088973cc80ba35022a7f038d830fea56ed51d25373b8762a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004241e(int param_1)

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
        FUN_ram_400420b6(param_1,1,0x32);
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
        if (_DAT_ram_30080cdc == 0) {
          _DAT_ram_30080cdc = 1;
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


/* NanoCore 1.12, address 0x4004256a.
 * REA evidence: ev_6a955cebf57ceeab24bad147aa735d3d2f6c3b11e973a2a9722786445f23cd78
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004256a(int param_1,uint param_2)

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
      FUN_ram_40041270(puVar3 + 1,&uStack_14,&uStack_18,0);
      iVar4 = FUN_ram_40041122(puVar3 + 1,&uStack_1c,&uStack_18);
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
      FUN_ram_4004241e();
      return;
    }
    if (uVar9 != 2) {
      return;
    }
    FUN_ram_40040f48(*(undefined4 *)(param_1 + 0x6c));
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
    FUN_ram_400420b6(param_1,iVar4,0x32);
  }
  iVar10 = *(int *)(param_1 + 0x68);
  uVar2 = *(ushort *)(iVar10 + 4);
  uVar8 = (uint)*(ushort *)(iVar10 + 6);
  uVar9 = (uint)uVar2 + iVar4;
  uVar7 = uVar9 & 0xffff;
  *(short *)(iVar10 + 4) = (short)(uVar9 * 0x10000 >> 0x10);
  if (uVar2 < uVar8) {
    if (uVar7 < uVar8) goto LAB_ram_400426bc;
    uVar9 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
    if (uVar9 <= uVar7) {
      if (uVar9 != 0) {
        uVar7 = uVar7 % uVar9;
      }
      *(short *)(iVar10 + 4) = (short)uVar7;
    }
LAB_ram_40042686:
    *(undefined4 *)(iVar10 + 8) = 1;
  }
  else {
    uVar9 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
    if (uVar9 <= uVar7) {
      if (uVar9 != 0) {
        uVar7 = uVar7 % uVar9;
      }
      *(short *)(iVar10 + 4) = (short)uVar7;
      if (uVar8 <= uVar7) goto LAB_ram_40042686;
    }
LAB_ram_400426bc:
    if (*(int *)(iVar10 + 8) != 1) goto LAB_ram_400426c4;
  }
  if (_DAT_ram_30080cdc == 0) {
    _DAT_ram_30080cdc = 1;
  }
  *(undefined2 *)(iVar10 + 6) = *(undefined2 *)(iVar10 + 4);
LAB_ram_400426c4:
  uVar6 = FUN_ram_40041b6a(param_1);
  FUN_ram_400002fa(uVar5);
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x400426e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(param_1,uVar6);
  return;
}


/* NanoCore 1.12, address 0x400426e8.
 * REA evidence: ev_4321dd140b18338ee5c8c31559ae79c80e7c55274fac841d5298b24c8abcd0e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400426e8(int param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x5c) = *param_2;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x5d) = param_2[1];
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x68) = param_2[0xc];
  *(undefined1 *)(param_1 + 0x69) = param_2[0xd];
  FUN_ram_4004297e();
  return;
}


/* NanoCore 1.12, address 0x4004271a.
 * REA evidence: ev_cc4442722114699dad9af5a8078c31555e67aafb54f0d10bffa6743be50e5afa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004271a(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400428f2();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x4c) = 2;
  }
  return;
}


/* NanoCore 1.12, address 0x40042734.
 * REA evidence: ev_c725e512d42437eee3f2bee398d60c50dc4ccadb8b85f789a97991da7aefa423
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40042734(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004a22(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar1 != 0) {
    FUN_ram_40004f4a(0xfffffff9);
    return 0;
  }
  FUN_ram_40004f4a();
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_40042788:
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,param_2);
    if (iVar1 != 0) goto LAB_ram_4004279e;
  }
  else {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    if (iVar1 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_40042788;
    }
  }
  FUN_ram_40004f4a(0xfffffff8);
LAB_ram_4004279e:
  FUN_ram_40004b14(*(int *)(param_1 + 0x4c) + 0x54);
  return iVar1;
}


/* NanoCore 1.12, address 0x400427ac.
 * REA evidence: ev_d9a82280219af655b7de82aa655a5b6af2cc1833b91cef8c396ec95a1230e78d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400427ac(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  byte bStack_40;
  undefined1 uStack_24;
  
  FUN_ram_40004f92(&local_50,0,0x30);
  iVar1 = FUN_ram_40004a22(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar1 != 0) {
    FUN_ram_40004f4a(0xfffffff9);
    return 0;
  }
  FUN_ram_40004f4a();
  iVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_4004281e:
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
      if (iVar1 != 0) goto LAB_ram_4004287e;
    }
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_4004281e;
    }
  }
  FUN_ram_40004f4a(0xfffffff8);
LAB_ram_4004287e:
  FUN_ram_40004b14(*(int *)(param_1 + 0x4c) + 0x54);
  iVar2 = -8;
  if (iVar1 != 0) {
    iVar2 = param_5;
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x400428a0.
 * REA evidence: ev_b5017dcb3264a4de0bfa3733afdc1391f74d43055c744caa37f00c1fb6e880c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400428a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  byte bStack_30;
  undefined1 uStack_14;
  
  FUN_ram_40004f92(&local_40,0,0x30);
  if (param_3 != 0) {
    uStack_14 = 1;
  }
  bStack_30 = bStack_30 | 3;
  uStack_3c = 0;
  local_40 = param_2;
  iStack_38 = param_3;
  iVar1 = FUN_ram_40042734(param_1,&local_40);
  iVar2 = -8;
  if (iVar1 != 0) {
    iVar2 = param_3;
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x400428f2.
 * REA evidence: ev_a418b36c425c74fb654d91700ac4089be69fc24f9a76f9ae426613df29df7827
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400428f2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_40042b56();
  if (iVar1 == 0) {
    FUN_ram_40004988(param_1 + 0x54,param_2,1);
    *(undefined4 *)(param_1 + 0x50) = param_3;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40042930.
 * REA evidence: ev_eb72e91a96d5c74a991a1c99a3371eebabaf400e91de0f74a6800c08d233ffd1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40042930(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_400044c2(param_3);
  iVar1 = -1;
  if (iVar2 != 0) {
    iVar1 = -1;
    if (*(int *)(iVar2 + 0x1c) == 0xc) {
      *(int *)(param_1 + 0x4c) = iVar2;
      iVar1 = FUN_ram_40042b84(param_1,param_2);
      if (iVar1 == 0) {
        FUN_ram_40004f92(param_1 + 0x50,0,8);
        *(undefined4 *)(param_1 + 0x48) = param_4;
      }
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004297e.
 * REA evidence: ev_aaac9a89ad3599ed9da8ade1e523d53dc4c92be458ef4d198e04bd1475298d9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004297e(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x51) = param_2[1];
  *(undefined1 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_ram_40004a22(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
      }
      FUN_ram_40004b14(*(int *)(param_1 + 0x4c) + 0x54);
    }
    return 0;
  }
  return 0;
}


/* NanoCore 1.12, address 0x400429e6.
 * REA evidence: ev_fc807012f5d3dcee30163885c3e4b6d7b4dafb89d36b48a286c2a3a59ba454ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400429e6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte bStack_24;
  
  iVar2 = FUN_ram_40004a22(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar2 != 0) {
    return 0xfffffff8;
  }
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_40042a50:
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
      if (iVar2 != 0) goto LAB_ram_40042a2c;
    }
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_40042a50;
    }
  }
  uVar1 = 0xfffffff8;
LAB_ram_40042a2c:
  FUN_ram_40004b14(*(int *)(param_1 + 0x4c) + 0x54);
  return uVar1;
}


/* NanoCore 1.12, address 0x40042a9a.
 * REA evidence: ev_66256be8c799271bac57ef6bee51a9cb4f250220877e4b92bea9071c48f461b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40042a9a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte bStack_24;
  
  iVar1 = FUN_ram_40004a22(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar1 != 0) {
    FUN_ram_40004f4a(0xfffffff8);
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_40042ade:
    bStack_24 = bStack_24 | 3;
    uStack_28 = 0;
    uStack_34 = param_2;
    uStack_30 = param_3;
    uStack_2c = param_4;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,&uStack_34);
    if (iVar1 != 0) goto LAB_ram_40042b08;
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    iVar1 = 0;
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_40042ade;
    }
  }
  FUN_ram_40004f4a(0xfffffff8);
LAB_ram_40042b08:
  FUN_ram_40004b14(*(int *)(param_1 + 0x4c) + 0x54);
  return iVar1;
}


/* NanoCore 1.12, address 0x40042b56.
 * REA evidence: ev_4afe7c16a39d2ecc1a5ede3a75dd8c8a99a26177c4159593030172677015f87a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042b56(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xc;
  *(undefined **)(param_1 + 0x3c) = &DAT_ram_40042b3e;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x40) = &DAT_ram_40042b32;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_ram_400044c8(param_1,param_2,3);
  return;
}


/* NanoCore 1.12, address 0x40042b84.
 * REA evidence: ev_91d31a34cbd8c6f88dbfbd290763e13bcc28d4e0c107c52bdbf8f25eb4ab731f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042b84(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xd;
  *(undefined **)(param_1 + 0x3c) = &DAT_ram_40042b50;
  *(undefined **)(param_1 + 0x40) = &DAT_ram_40042b48;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_40042b2e;
  FUN_ram_400044c8(param_1,param_2,3);
  return;
}


/* NanoCore 1.12, address 0x40042e34.
 * REA evidence: ev_241708f446c45c26c469449c7f5f52b9554b644adb8af65284899ce7b0cd2532
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40042e34(int param_1)

{
  *(undefined1 **)(param_1 + 0x30) = &LAB_ram_40042c1a;
  *(undefined1 **)(param_1 + 0x24) = &LAB_ram_40042bee;
  *(undefined1 **)(param_1 + 0x28) = &LAB_ram_40042bb8;
  *(undefined1 **)(param_1 + 0x2c) = &LAB_ram_40042be4;
  *(undefined1 **)(param_1 + 0x34) = &LAB_ram_40042d36;
  *(undefined1 **)(param_1 + 0x38) = &LAB_ram_40042bd6;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_40042bca;
  *(undefined1 **)(param_1 + 0x48) = &LAB_ram_40042bc2;
  *(int *)(param_1 + 0x40) = param_1;
  *(undefined4 *)(param_1 + 0x4c) = 600000;
  return 0;
}


/* NanoCore 1.12, address 0x40042e94.
 * REA evidence: ev_9d59e402b9bd3e933251c7fe337bc0dace0d1b862ee8542e597281663f830886
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40042e94(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  
  iVar1 = FUN_ram_4000559c(0x8c);
  piVar2 = (int *)FUN_ram_4000559c(0xa8);
  iVar3 = FUN_ram_4000517a(param_1);
  iVar3 = FUN_ram_4000559c(iVar3 + 1);
  iVar4 = FUN_ram_4000517a(param_2);
  iVar4 = FUN_ram_4000559c(iVar4 + 1);
  if (piVar2 == (int *)0x0) {
    if (iVar1 == 0) goto LAB_ram_40042f22;
  }
  else {
    FUN_ram_40004f92(piVar2,0,0xa8);
    piVar2[0x26] = 50000000;
    if (iVar1 == 0) goto LAB_ram_40042f22;
    FUN_ram_40004f92(iVar1,0,0x8c);
    FUN_ram_40004988(iVar1 + 0x5c,param_1,1);
    if ((iVar3 != 0) && (iVar4 != 0)) {
      uVar5 = FUN_ram_4000517a(param_1);
      FUN_ram_400050f8(iVar3,param_1,uVar5);
      uVar5 = FUN_ram_4000517a(param_2);
      FUN_ram_400050f8(iVar4,param_2,uVar5);
      iVar6 = FUN_ram_4000517a(param_1);
      *(undefined1 *)(iVar3 + iVar6) = 0;
      iVar6 = FUN_ram_4000517a(param_2);
      *(undefined1 *)(iVar4 + iVar6) = 0;
      iVar6 = FUN_ram_400044c2(param_2);
      *(int *)(iVar1 + 0x58) = iVar6;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == 0xd)) {
        iVar9 = *(int *)(param_4 + 4);
        piVar2[8] = iVar4;
        piVar2[0x27] = iVar9;
        *(int *)(param_4 + 4) = piVar2[0x26];
        if ((*(byte *)(*(int *)(iVar6 + 0x4c) + 0x4c) & 2) == 0) {
          FUN_ram_4004297e(iVar6,param_3);
          iVar6 = 0;
        }
        else {
          *(undefined1 *)(param_4 + 0xd) = *(undefined1 *)(iVar6 + 0x69);
          FUN_ram_400426e8(iVar6,param_4);
        }
        *(int *)(param_4 + 4) = piVar2[0x27];
        iVar9 = *(int *)(iVar1 + 0x58);
        *piVar2 = iVar3;
        *(int **)(iVar1 + 0x88) = piVar2;
        *(int *)(iVar9 + 0x58) = iVar1;
        *(int *)(iVar1 + 0x48) = iVar1;
        piVar2[0x14] = iVar1;
        iVar9 = FUN_ram_4005b474(piVar2);
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
            if (((short)piVar2[3] == 0x28c2) && (*(char *)((int)piVar2 + 0xe) == '\x17')) {
              *(int *)(param_4 + 4) = piVar2[0x27];
            }
            FUN_ram_400426e8(iVar6,param_4);
            if ((((short)piVar2[3] != 0x28c2) || (*(char *)((int)piVar2 + 0xe) != '\x17')) &&
               (*(code **)(iVar6 + 0x6c) != (code *)0x0)) {
              (**(code **)(iVar6 + 0x6c))(iVar6);
            }
            FUN_ram_4005ab56(piVar2,*(undefined1 *)(iVar6 + 0x69));
          }
          *(undefined4 *)(iVar1 + 0x1c) = 1;
          *(undefined1 **)(iVar1 + 0x3c) = &LAB_ram_40042ca0;
          *(undefined1 **)(iVar1 + 0x40) = &LAB_ram_40042c74;
          *(undefined4 *)(iVar1 + 0x30) = 0;
          *(undefined4 *)(iVar1 + 0x34) = 0;
          *(undefined4 *)(iVar1 + 0x38) = 0;
          *(undefined1 **)(iVar1 + 0x44) = &LAB_ram_40042ccc;
          FUN_ram_400044c8(iVar1,param_1,0xb);
          return iVar1;
        }
      }
    }
  }
  FUN_ram_400049bc(iVar1 + 0x5c);
LAB_ram_40042f22:
  FUN_ram_400055d4(iVar1);
  FUN_ram_400055d4(piVar2);
  FUN_ram_400055d4(iVar3);
  FUN_ram_400055d4(iVar4);
  return 0;
}


