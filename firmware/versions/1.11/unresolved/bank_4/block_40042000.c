/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40042000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40042032.
 * REA evidence: ev_c93228a77f4e3172bc3b23daf9870a12e5402d3f90ff1d8bef7de68c48d8c32d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042032(int param_1,int param_2,int param_3)

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


/* NanoCore 1.11, address 0x40042094.
 * REA evidence: ev_cd46c94942c30d9a3ea871326e25b9a51fa3e49b0dc0b967a322cad4f650887a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40042094(int param_1,undefined4 param_2,int param_3,int param_4)

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
            FUN_ram_40005004(iVar10);
            iVar11 = 0;
          }
        }
        else {
          iVar11 = FUN_ram_40041aa8(param_1);
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
            FUN_ram_40042032(param_1,iVar11,100);
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
          FUN_ram_40042032(param_1,1,100);
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


/* NanoCore 1.11, address 0x400422d4.
 * REA evidence: ev_43093870aeac11ff49ec31e83ce6e871ec404807b8fa6d7be1acac41030a3d56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400422d4(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  *(undefined1 **)(param_1 + 0x30) = &LAB_ram_40041ade;
  *(undefined1 **)(param_1 + 0x34) = &LAB_ram_40041dc4;
  *(undefined1 **)(param_1 + 0x38) = &LAB_ram_40041cf8;
  *(code **)(param_1 + 0x3c) = FUN_ram_40042094;
  *(code **)(param_1 + 0x40) = FUN_ram_40041bbe;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(code **)(param_1 + 0x44) = FUN_ram_40041af6;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  FUN_ram_4000446c(param_1,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40042326.
 * REA evidence: ev_75f2a752576cc985908f636725151b38cae04f0d60580765c7545df3bba2d285
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40042326(int param_1)

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
        FUN_ram_40041fbe(param_1,1,0x32);
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
        if (_DAT_ram_30080c5c == 0) {
          _DAT_ram_30080c5c = 1;
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


/* NanoCore 1.11, address 0x40042472.
 * REA evidence: ev_cf6a1f0e0fc4ce6fba167c329ed96a3b3c6f4bcdccb854c799e04fb6e306ac76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40042472(int param_1,uint param_2)

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
      FUN_ram_400411ae(puVar3 + 1,&uStack_14,&uStack_18,0);
      iVar4 = FUN_ram_40041060(puVar3 + 1,&uStack_1c,&uStack_18);
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
      FUN_ram_40042326();
      return;
    }
    if (uVar9 != 2) {
      return;
    }
    FUN_ram_40040e86(*(undefined4 *)(param_1 + 0x6c));
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
    FUN_ram_40041fbe(param_1,iVar4,0x32);
  }
  iVar10 = *(int *)(param_1 + 0x68);
  uVar2 = *(ushort *)(iVar10 + 4);
  uVar8 = (uint)*(ushort *)(iVar10 + 6);
  uVar9 = (uint)uVar2 + iVar4;
  uVar7 = uVar9 & 0xffff;
  *(short *)(iVar10 + 4) = (short)(uVar9 * 0x10000 >> 0x10);
  if (uVar2 < uVar8) {
    if (uVar7 < uVar8) goto LAB_ram_400425c4;
    uVar9 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
    if (uVar9 <= uVar7) {
      if (uVar9 != 0) {
        uVar7 = uVar7 % uVar9;
      }
      *(short *)(iVar10 + 4) = (short)uVar7;
    }
LAB_ram_4004258e:
    *(undefined4 *)(iVar10 + 8) = 1;
  }
  else {
    uVar9 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
    if (uVar9 <= uVar7) {
      if (uVar9 != 0) {
        uVar7 = uVar7 % uVar9;
      }
      *(short *)(iVar10 + 4) = (short)uVar7;
      if (uVar8 <= uVar7) goto LAB_ram_4004258e;
    }
LAB_ram_400425c4:
    if (*(int *)(iVar10 + 8) != 1) goto LAB_ram_400425cc;
  }
  if (_DAT_ram_30080c5c == 0) {
    _DAT_ram_30080c5c = 1;
  }
  *(undefined2 *)(iVar10 + 6) = *(undefined2 *)(iVar10 + 4);
LAB_ram_400425cc:
  uVar6 = FUN_ram_40041aa8(param_1);
  FUN_ram_400002fa(uVar5);
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x400425ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(param_1,uVar6);
  return;
}


/* NanoCore 1.11, address 0x400425f0.
 * REA evidence: ev_490d82ce56777f2030757e8b6473b74d9c397423c15e704b59bb2a1fbeaadf0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400425f0(int param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x5c) = *param_2;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x5d) = param_2[1];
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x68) = param_2[0xc];
  *(undefined1 *)(param_1 + 0x69) = param_2[0xd];
  FUN_ram_40042886();
  return;
}


/* NanoCore 1.11, address 0x40042622.
 * REA evidence: ev_751591d3a8f2a2b404dc95203ab4614725118e7989456e18e57b60bcb4ed6179
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042622(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400427fa();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x4c) = 2;
  }
  return;
}


/* NanoCore 1.11, address 0x4004263c.
 * REA evidence: ev_14265887437d381aac6ecb079aa8cd2f5621eaf3d03e20b0b98401f906d02006
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004263c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_400049c6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar1 != 0) {
    FUN_ram_40005004(0xfffffff9);
    return 0;
  }
  FUN_ram_40005004();
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_40042690:
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,param_2);
    if (iVar1 != 0) goto LAB_ram_400426a6;
  }
  else {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    if (iVar1 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_40042690;
    }
  }
  FUN_ram_40005004(0xfffffff8);
LAB_ram_400426a6:
  FUN_ram_40004ab8(*(int *)(param_1 + 0x4c) + 0x54);
  return iVar1;
}


/* NanoCore 1.11, address 0x400426b4.
 * REA evidence: ev_cb3c1bb1b4de31bd5b8a24b07eb4d9e61899a988d4d16c889f02e8c6e669577c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400426b4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  byte bStack_40;
  undefined1 uStack_24;
  
  FUN_ram_4000504c(&local_50,0,0x30);
  iVar1 = FUN_ram_400049c6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar1 != 0) {
    FUN_ram_40005004(0xfffffff9);
    return 0;
  }
  FUN_ram_40005004();
  iVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_40042726:
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
      if (iVar1 != 0) goto LAB_ram_40042786;
    }
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_40042726;
    }
  }
  FUN_ram_40005004(0xfffffff8);
LAB_ram_40042786:
  FUN_ram_40004ab8(*(int *)(param_1 + 0x4c) + 0x54);
  iVar2 = -8;
  if (iVar1 != 0) {
    iVar2 = param_5;
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x400427a8.
 * REA evidence: ev_ca9fbc78244e0ffbc7381081f6128616065b2afee32891d62dbf2fdfa22ba30a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400427a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  byte bStack_30;
  undefined1 uStack_14;
  
  FUN_ram_4000504c(&local_40,0,0x30);
  if (param_3 != 0) {
    uStack_14 = 1;
  }
  bStack_30 = bStack_30 | 3;
  uStack_3c = 0;
  local_40 = param_2;
  iStack_38 = param_3;
  iVar1 = FUN_ram_4004263c(param_1,&local_40);
  iVar2 = -8;
  if (iVar1 != 0) {
    iVar2 = param_3;
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x400427fa.
 * REA evidence: ev_36eee10b3c39353a001022d7173fa16c1d1895f833e6ffc34adc3d61d5f70ffa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400427fa(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_40042a5e();
  if (iVar1 == 0) {
    FUN_ram_4000492c(param_1 + 0x54,param_2,1);
    *(undefined4 *)(param_1 + 0x50) = param_3;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40042838.
 * REA evidence: ev_b8c9b9ca11da64446deeff43da485bb5b8a19de0bae5123ab9daa47f6018b4ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40042838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40004466(param_3);
  iVar1 = -1;
  if (iVar2 != 0) {
    iVar1 = -1;
    if (*(int *)(iVar2 + 0x1c) == 0xc) {
      *(int *)(param_1 + 0x4c) = iVar2;
      iVar1 = FUN_ram_40042a8c(param_1,param_2);
      if (iVar1 == 0) {
        FUN_ram_4000504c(param_1 + 0x50,0,8);
        *(undefined4 *)(param_1 + 0x48) = param_4;
      }
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40042886.
 * REA evidence: ev_4afe2d423dc5f895ad56421bf5e19209181fb203be87f72439bea07634824004
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40042886(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x51) = param_2[1];
  *(undefined1 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_ram_400049c6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
      }
      FUN_ram_40004ab8(*(int *)(param_1 + 0x4c) + 0x54);
    }
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x400428ee.
 * REA evidence: ev_edad062268660868cb9e4d7cce5a9bc17584b889b0c7e9966f1a312713eabdac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400428ee(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte bStack_24;
  
  iVar2 = FUN_ram_400049c6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar2 != 0) {
    return 0xfffffff8;
  }
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_40042958:
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
      if (iVar2 != 0) goto LAB_ram_40042934;
    }
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_40042958;
    }
  }
  uVar1 = 0xfffffff8;
LAB_ram_40042934:
  FUN_ram_40004ab8(*(int *)(param_1 + 0x4c) + 0x54);
  return uVar1;
}


/* NanoCore 1.11, address 0x400429a2.
 * REA evidence: ev_e0ee9470e3166bc87bde5b5b57b5e78dc5a23bae619715cda8235d8d38bba41b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400429a2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  byte bStack_24;
  
  iVar1 = FUN_ram_400049c6(*(int *)(param_1 + 0x4c) + 0x54,0xffffffff);
  if (iVar1 != 0) {
    FUN_ram_40005004(0xfffffff8);
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x4c) + 0x80) == param_1) {
LAB_ram_400429e6:
    bStack_24 = bStack_24 | 3;
    uStack_28 = 0;
    uStack_34 = param_2;
    uStack_30 = param_3;
    uStack_2c = param_4;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x50) + 4))(param_1,&uStack_34);
    if (iVar1 != 0) goto LAB_ram_40042a10;
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x4c) + 0x50))(param_1,param_1 + 0x50);
    iVar1 = 0;
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x4c) + 0x80) = param_1;
      goto LAB_ram_400429e6;
    }
  }
  FUN_ram_40005004(0xfffffff8);
LAB_ram_40042a10:
  FUN_ram_40004ab8(*(int *)(param_1 + 0x4c) + 0x54);
  return iVar1;
}


/* NanoCore 1.11, address 0x40042a5e.
 * REA evidence: ev_7730051e28ee5c54634da11a934158ebc3b66a6f60bdeae7c9d535cbe2be2777
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042a5e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xc;
  *(undefined **)(param_1 + 0x3c) = &DAT_ram_40042a46;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x40) = &DAT_ram_40042a3a;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_ram_4000446c(param_1,param_2,3);
  return;
}


/* NanoCore 1.11, address 0x40042a8c.
 * REA evidence: ev_e6a4260e216d3c468369ea1fb6e1701a172503049d3860e4ab05facb808729ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40042a8c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xd;
  *(undefined **)(param_1 + 0x3c) = &DAT_ram_40042a58;
  *(undefined **)(param_1 + 0x40) = &DAT_ram_40042a50;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_40042a36;
  FUN_ram_4000446c(param_1,param_2,3);
  return;
}


/* NanoCore 1.11, address 0x40042d3c.
 * REA evidence: ev_baa8025f8bb3b16b9d0a1d4b64ee972b03d0eb4efb794e941551dbb0355d3d17
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40042d3c(int param_1)

{
  *(undefined1 **)(param_1 + 0x30) = &LAB_ram_40042b22;
  *(undefined1 **)(param_1 + 0x24) = &LAB_ram_40042af6;
  *(undefined1 **)(param_1 + 0x28) = &LAB_ram_40042ac0;
  *(undefined1 **)(param_1 + 0x2c) = &LAB_ram_40042aec;
  *(undefined1 **)(param_1 + 0x34) = &LAB_ram_40042c3e;
  *(undefined1 **)(param_1 + 0x38) = &LAB_ram_40042ade;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_40042ad2;
  *(undefined1 **)(param_1 + 0x48) = &LAB_ram_40042aca;
  *(int *)(param_1 + 0x40) = param_1;
  *(undefined4 *)(param_1 + 0x4c) = 600000;
  return 0;
}


/* NanoCore 1.11, address 0x40042d9c.
 * REA evidence: ev_cf2474e3f18b61ffeeed9a60f5643321d3ea3bb464b7ccfbc0af88a2f4142f84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40042d9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  
  iVar1 = FUN_ram_40005656(0x8c);
  piVar2 = (int *)FUN_ram_40005656(0xa8);
  iVar3 = FUN_ram_40005234(param_1);
  iVar3 = FUN_ram_40005656(iVar3 + 1);
  iVar4 = FUN_ram_40005234(param_2);
  iVar4 = FUN_ram_40005656(iVar4 + 1);
  if (piVar2 == (int *)0x0) {
    if (iVar1 == 0) goto LAB_ram_40042e2a;
  }
  else {
    FUN_ram_4000504c(piVar2,0,0xa8);
    piVar2[0x26] = 50000000;
    if (iVar1 == 0) goto LAB_ram_40042e2a;
    FUN_ram_4000504c(iVar1,0,0x8c);
    FUN_ram_4000492c(iVar1 + 0x5c,param_1,1);
    if ((iVar3 != 0) && (iVar4 != 0)) {
      uVar5 = FUN_ram_40005234(param_1);
      FUN_ram_400051b2(iVar3,param_1,uVar5);
      uVar5 = FUN_ram_40005234(param_2);
      FUN_ram_400051b2(iVar4,param_2,uVar5);
      iVar6 = FUN_ram_40005234(param_1);
      *(undefined1 *)(iVar3 + iVar6) = 0;
      iVar6 = FUN_ram_40005234(param_2);
      *(undefined1 *)(iVar4 + iVar6) = 0;
      iVar6 = FUN_ram_40004466(param_2);
      *(int *)(iVar1 + 0x58) = iVar6;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == 0xd)) {
        iVar9 = *(int *)(param_4 + 4);
        piVar2[8] = iVar4;
        piVar2[0x27] = iVar9;
        *(int *)(param_4 + 4) = piVar2[0x26];
        if ((*(byte *)(*(int *)(iVar6 + 0x4c) + 0x4c) & 2) == 0) {
          FUN_ram_40042886(iVar6,param_3);
          iVar6 = 0;
        }
        else {
          *(undefined1 *)(param_4 + 0xd) = *(undefined1 *)(iVar6 + 0x69);
          FUN_ram_400425f0(iVar6,param_4);
        }
        *(int *)(param_4 + 4) = piVar2[0x27];
        iVar9 = *(int *)(iVar1 + 0x58);
        *piVar2 = iVar3;
        *(int **)(iVar1 + 0x88) = piVar2;
        *(int *)(iVar9 + 0x58) = iVar1;
        *(int *)(iVar1 + 0x48) = iVar1;
        piVar2[0x14] = iVar1;
        iVar9 = FUN_ram_4005b642(piVar2);
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
            FUN_ram_400425f0(iVar6,param_4);
            if ((((short)piVar2[3] != 0x28c2) || (*(char *)((int)piVar2 + 0xe) != '\x17')) &&
               (*(code **)(iVar6 + 0x6c) != (code *)0x0)) {
              (**(code **)(iVar6 + 0x6c))(iVar6);
            }
            FUN_ram_4005ad24(piVar2,*(undefined1 *)(iVar6 + 0x69));
          }
          *(undefined4 *)(iVar1 + 0x1c) = 1;
          *(undefined1 **)(iVar1 + 0x3c) = &LAB_ram_40042ba8;
          *(undefined1 **)(iVar1 + 0x40) = &LAB_ram_40042b7c;
          *(undefined4 *)(iVar1 + 0x30) = 0;
          *(undefined4 *)(iVar1 + 0x34) = 0;
          *(undefined4 *)(iVar1 + 0x38) = 0;
          *(undefined1 **)(iVar1 + 0x44) = &LAB_ram_40042bd4;
          FUN_ram_4000446c(iVar1,param_1,0xb);
          return iVar1;
        }
      }
    }
  }
  FUN_ram_40004960(iVar1 + 0x5c);
LAB_ram_40042e2a:
  FUN_ram_400056b4(iVar1);
  FUN_ram_400056b4(piVar2);
  FUN_ram_400056b4(iVar3);
  FUN_ram_400056b4(iVar4);
  return 0;
}


/* NanoCore 1.11, address 0x40042fb2.
 * REA evidence: ev_067fef41f19699572131b499587ab2c386bdbd5c9e1efe69cdb349b023aaea92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40042fb2(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40004466();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) == 1) {
      uVar2 = *(undefined4 *)(iVar1 + 0x88);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


