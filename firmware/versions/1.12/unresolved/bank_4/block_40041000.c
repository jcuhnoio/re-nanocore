/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40041000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40041122.
 * REA evidence: ev_74a8109f81d31b51c75beac9a7efc2062c3e02d875bd6d6b312abc7bd976413e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40041122(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
    FUN_ram_400002f4();
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 8) & 0x7fff) * 8);
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 8) & 0x7fff) * 8 + 4);
    FUN_ram_400002fa();
    return 0;
  }
  return 0xfffffffc;
}


/* NanoCore 1.12, address 0x4004117c.
 * REA evidence: ev_a0302a77b102a1cb5516b82097fbe1a31b123f8a17aef68d34b8f0c3e9417e3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004117c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_ram_400002f4();
  *(undefined4 *)(param_1 + 8) = 0x8000;
  FUN_ram_400002fa();
  FUN_ram_400061cc();
  while (*(int *)(param_1 + 0x18) != param_1 + 0x18) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
    FUN_ram_400064f2(iVar2 + -0x1c);
    FUN_ram_400002fa(uVar1);
  }
  while (*(int *)(param_1 + 0x10) != param_1 + 0x10) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
    FUN_ram_400064f2(iVar2 + -0x1c);
    FUN_ram_400002fa(uVar1);
  }
  FUN_ram_400061ee();
  FUN_ram_40006092();
  return;
}


/* NanoCore 1.12, address 0x400411fa.
 * REA evidence: ev_b42116b541624d58c292090a5b1f34b23dd42e088a2cdde20a0af386c088c1a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400411fa(undefined4 *param_1)

{
  FUN_ram_4004117c();
  FUN_ram_400002f4();
  *param_1 = 0;
  FUN_ram_400002fa();
  FUN_ram_400055d4(param_1[3]);
  return 0;
}


/* NanoCore 1.12, address 0x40041222.
 * REA evidence: ev_1947f10eb9f19d608e52f7e145798515c9fb59e6c6aa0d3d5a1583f9d291d374
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40041222(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
    FUN_ram_400002f4();
    uVar2 = (*(uint *)(param_1 + 8) & 0x7fffffff) >> 0x10;
    uVar1 = *(uint *)(param_1 + 8) & 0x7fff;
    if (uVar1 < uVar2) {
      iVar3 = uVar2 - uVar1;
    }
    else {
      iVar3 = (*(ushort *)(param_1 + 4) + uVar2) - uVar1;
    }
    FUN_ram_400002fa();
    return iVar3 * 0x10000 >> 0x10 & 0xffff;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40041270.
 * REA evidence: ev_eab2cba04465b813d8aef844913fcda86c78845119e7ee51fc1a65a506e24614
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40041270(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int aiStack_34 [2];
  
  aiStack_34[0] = param_4;
  iVar2 = FUN_ram_40006382();
  uVar3 = FUN_ram_400002f4();
  while( true ) {
    if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
      *param_2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 8) & 0x7fff) * 8);
      uVar1 = *(ushort *)(param_1 + 4);
      uVar5 = *(uint *)(param_1 + 8) & 0x7fff;
      uVar6 = uVar5 + 1 & 0x7fff;
      *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
      uVar5 = *(uint *)(param_1 + 8) & 0xffff8000;
      *(uint *)(param_1 + 8) = uVar5 | uVar6;
      if (uVar6 == uVar1) {
        *(uint *)(param_1 + 8) = uVar5;
      }
      uVar5 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar5 & 0x7fffffff;
      if ((uVar5 & 0x7fffffff) >> 0x10 == (uVar5 & 0x7fff)) {
        *(uint *)(param_1 + 8) = uVar5 & 0x7fffffff | 0x8000;
      }
      uVar5 = FUN_ram_40041222(param_1);
      iVar7 = 0;
      if (uVar5 <= *(ushort *)(param_1 + 6)) {
        piVar4 = *(int **)(param_1 + 0x10);
        if (piVar4 == (int *)(param_1 + 0x10)) {
          FUN_ram_400002fa(uVar3);
        }
        else {
          FUN_ram_400064f2(piVar4 + -7);
          FUN_ram_400002fa(uVar3);
          FUN_ram_40006092();
        }
        if (*(code **)(param_1 + 0x20) != (code *)0x0) {
          (**(code **)(param_1 + 0x20))(param_1,3);
        }
        goto LAB_ram_4004134a;
      }
      goto LAB_ram_400413b6;
    }
    if (aiStack_34[0] == 0) break;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_40006430(iVar2);
    piVar4 = *(int **)(param_1 + 0x1c);
    *piVar4 = iVar2 + 0x1c;
    *(int **)(iVar2 + 0x20) = piVar4;
    *(int *)(param_1 + 0x1c) = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x1c) = param_1 + 0x18;
    if (0 < aiStack_34[0]) {
      FUN_ram_400067c6(iVar2 + 0x54,0,aiStack_34);
      FUN_ram_400066a2(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar3);
    FUN_ram_40006092();
    iVar7 = *(int *)(iVar2 + 0x38);
    uVar3 = FUN_ram_400002f4();
    if (iVar7 != 0) {
LAB_ram_400413b6:
      FUN_ram_400002fa(uVar3);
      if (iVar7 == 0) {
        if (*(code **)(param_1 + 0x20) == (code *)0x0) {
LAB_ram_4004134a:
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0x20))(param_1,1);
        }
      }
      return iVar7;
    }
  }
  iVar7 = -2;
  goto LAB_ram_400413b6;
}


/* NanoCore 1.12, address 0x400413e0.
 * REA evidence: ev_4aa381a01267b521af31a2976a8958a60d45c6091e571f81a57f92433bce6e0c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400413e0(undefined4 *param_1,undefined4 param_2,ushort param_3)

{
  param_1[1] = 0;
  *param_1 = param_2;
  *(ushort *)(param_1 + 2) = param_3 & 0xfffc;
  return;
}


/* NanoCore 1.12, address 0x400413ee.
 * REA evidence: ev_f3b5291f6fa6661b15914e3224f06f8eca5accc0e83451539de97bed14a7e0cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400413ee(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar2 = (uVar3 & 0xffff) >> 1;
  uVar1 = uVar3 >> 0x11;
  if (uVar2 == uVar1) {
    iVar4 = 0;
    if ((uVar3 & 1) != (uVar3 & 0x1ffff) >> 0x10) {
      iVar4 = (int)*(short *)(param_1 + 8);
    }
  }
  else {
    iVar4 = uVar1 - uVar2;
    if (uVar1 <= uVar2) {
      iVar4 = ((int)*(short *)(param_1 + 8) + uVar1) - uVar2;
    }
  }
  return iVar4;
}


/* NanoCore 1.12, address 0x40041424.
 * REA evidence: ev_89b44cd77e015f6b6d23d9731cba5de7577474ea550023362183bb68d139cca6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40041424(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1[2];
  iVar2 = FUN_ram_400413ee();
  uVar3 = (short)iVar4 - iVar2 & 0xffff;
  uVar1 = 0;
  if (uVar3 != 0) {
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    uVar1 = uVar3 & 0xffff;
    iVar2 = *param_1 + ((uint)param_1[1] >> 0x11);
    if ((int)uVar1 < (int)((int)(short)iVar4 - ((uint)param_1[1] >> 0x11))) {
      memcpy(iVar2,param_2,uVar1);
      param_1[1] = param_1[1] & 0x1ffffU | (((uint)param_1[1] >> 0x11) + uVar1) * 0x20000;
    }
    else {
      memcpy(iVar2);
      iVar4 = (int)(short)param_1[2] - ((uint)param_1[1] >> 0x11);
      memcpy(*param_1,param_2 + iVar4,uVar1 - iVar4);
      *(ushort *)((int)param_1 + 6) =
           (((ushort)((uint)param_1[1] >> 0x11) - (short)param_1[2]) + (short)uVar3) * 2 |
           ~(ushort)((uint)(param_1[1] << 0xf) >> 0x1f) & 1;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x400414d4.
 * REA evidence: ev_89efd9ce621a1b09c324a9c1870cd682cff97a527c1bbb4a273f2beb482fcc3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400414d4(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(ushort *)(param_1 + 2);
  iVar7 = (int)(short)uVar1;
  iVar3 = FUN_ram_400413ee();
  uVar2 = (uint)uVar1 - iVar3 & 0xffff;
  if (iVar7 < (int)param_3) {
    param_2 = param_2 + (param_3 - iVar7);
    param_3 = (uint)uVar1;
  }
  iVar3 = *param_1 + ((uint)param_1[1] >> 0x11);
  if ((int)param_3 < (int)(iVar7 - ((uint)param_1[1] >> 0x11))) {
    memcpy(iVar3,param_2,param_3);
    uVar4 = param_1[1];
    uVar5 = (uVar4 >> 0x11) + param_3;
    uVar6 = uVar5 * 0x20000;
    param_1[1] = uVar6 | uVar4 & 0x1ffff;
    if (uVar2 < param_3) {
      param_1[1] = uVar6 | uVar4 & 0x10001 | (uVar5 & 0x7fff) << 1;
    }
  }
  else {
    memcpy(iVar3);
    iVar3 = (int)(short)param_1[2] - ((uint)param_1[1] >> 0x11);
    memcpy(*param_1,param_2 + iVar3,param_3 - iVar3);
    uVar4 = param_1[1];
    uVar6 = ((uVar4 & 0x1ffff) >> 0x10 ^ 1) << 0x10;
    uVar5 = ((uVar4 >> 0x11) - (uint)*(ushort *)(param_1 + 2)) + param_3;
    param_1[1] = uVar6 | uVar4 & 0xffff | uVar5 * 0x20000;
    if (uVar2 < param_3) {
      if ((uVar5 & 0x7fff) <= (uVar4 & 0xffff) >> 1) {
        param_1[1] = uVar6 | uVar4 & 0xfffe | uVar5 * 0x20000 | uVar4 & 1 ^ 1;
      }
      param_1[1] = (uVar5 & 0x7fff) << 1 | param_1[1] & 0xffff0001U;
    }
  }
  return param_3;
}


/* NanoCore 1.12, address 0x400415ec.
 * REA evidence: ev_c9108c2ae3b0db97ceb84f0ebedfd334cf1a5e81ffe0faf7a664049672102ca0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400415ec(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = FUN_ram_400413ee();
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_3;
    if (uVar1 < param_3) {
      uVar3 = uVar1 & 0xffff;
    }
    uVar1 = (param_1[1] & 0xffffU) >> 1;
    iVar4 = (int)(short)param_1[2] - uVar1;
    iVar2 = *param_1 + uVar1;
    if ((int)uVar3 < iVar4) {
      memcpy(param_2,iVar2);
      param_1[1] = (((param_1[1] & 0xffffU) >> 1) + uVar3 & 0x7fff) << 1 | param_1[1] & 0xffff0001U;
    }
    else {
      memcpy(param_2,iVar2,iVar4);
      iVar2 = (int)(short)param_1[2] - ((param_1[1] & 0xffffU) >> 1);
      memcpy(iVar2 + param_2,*param_1,uVar3 - iVar2);
      *(ushort *)(param_1 + 1) =
           ((((ushort)param_1[1] >> 1) - (short)param_1[2]) + (short)uVar3) * 2 |
           ~(ushort)param_1[1] & 1;
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40041698.
 * REA evidence: ev_8f9534fa38d761376c5c98a01c27b24a3dde9eee1543b844043a32afc788655c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041698(int param_1,int param_2)

{
  int *piVar1;
  
  FUN_ram_400002f4();
  piVar1 = *(int **)(param_1 + 8);
  *piVar1 = param_2 + 4;
  *(int **)(param_2 + 8) = piVar1;
  *(int *)(param_1 + 8) = param_2 + 4;
  *(int *)(param_2 + 4) = param_1 + 4;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x400416c2.
 * REA evidence: ev_12471589d4945b017448333445a5728ee3a244f220eb8373150603b6e4fb28fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400416c2(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_ram_400002f4();
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(param_1 + 8);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 8) = param_1 + 4;
  *(int *)(param_1 + 4) = param_1 + 4;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x400416e8.
 * REA evidence: ev_cf5637186a2d5903d8a4707febfc4cf400e0d8fd08f6a455e1066810e0bfd502
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400416e8(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = FUN_ram_400002f4();
  piVar2 = *(int **)(param_1 + 4);
  bVar1 = false;
  while ((int *)(param_1 + 4) != piVar2) {
    iVar5 = (int)(piVar2 + -1);
    iVar4 = (*(code *)piVar2[2])(iVar5,param_2);
    if (iVar4 == 0) {
      *(undefined4 *)(piVar2[-1] + 0x38) = 0;
      iVar4 = FUN_ram_400064f2();
      if (iVar4 == 0) {
        bVar1 = true;
      }
      piVar2 = (int *)*piVar2;
      FUN_ram_400416c2(iVar5);
    }
    else {
      piVar2 = (int *)*piVar2;
    }
  }
  FUN_ram_400002fa(uVar3);
  if (bVar1) {
    FUN_ram_40006092();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40041768.
 * REA evidence: ev_302d9bd3f3a4d8a4171f465cc69be7ac2585a5e8b3018fd18fed52b8eb94bffd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40041768(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 **local_20;
  undefined4 **ppuStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_40006382();
  iStack_28 = FUN_ram_400043ae(param_3);
  if (param_2 == 0) {
    uVar2 = 0;
    if (iStack_28 != 0) {
      uStack_24 = FUN_ram_40006382();
      puStack_18 = &LAB_ram_40041694;
      local_20 = &local_20;
      uStack_14 = 0;
      ppuStack_1c = local_20;
      uVar2 = FUN_ram_400002f4();
      *(undefined4 *)(iVar1 + 0x38) = 0;
      FUN_ram_40041698(param_1,&uStack_24);
      FUN_ram_40006430(iVar1);
      if (iStack_28 != -1) {
        FUN_ram_400067c6(iVar1 + 0x54,0,&iStack_28);
        FUN_ram_400066a2(iVar1 + 0x54);
      }
      FUN_ram_400002fa(uVar2);
      FUN_ram_40006092();
      uVar2 = *(undefined4 *)(iVar1 + 0x38);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x400417f6.
 * REA evidence: ev_4643d6a1f3a99f75d04a967762886cf0c8f452cabef1c76ae60e650d2036db6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400417f6(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_a4;
  code *pcVar3;
  
  uVar1 = 0;
  while( true ) {
    if (param_4 <= uVar1) {
      return uVar1;
    }
    pcVar3 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
    iVar2 = (*pcVar3)(param_1,param_2 + uVar1,param_3 + uVar1,param_4,param_5,pcVar3);
    if (iVar2 != 0) break;
    uVar1 = uVar1 + 4;
    param_5 = extraout_a4;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40041934.
 * REA evidence: ev_88882e7a47189fd571620abb17f5770dd5e9bdf0883fb146f80823da11b00ca3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041934(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x1a;
  *(code **)(param_1 + 0x3c) = FUN_ram_400417f6;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_4004183c;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  FUN_ram_400044c8(param_1,param_2,3);
  return;
}


/* NanoCore 1.12, address 0x4004196e.
 * REA evidence: ev_fed4a67803fd6a60365d65ff58db9078bfe42d563a74ec547317227b3a184e66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4004196e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  code *pcVar1;
  undefined4 auStack_14 [4];
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
  (*pcVar1)(param_1,param_2,auStack_14,param_4,param_5,pcVar1);
  return auStack_14[0];
}


/* NanoCore 1.12, address 0x40041982.
 * REA evidence: ev_a24a02b636e537be1f5bc85c4aa3a56343f4215051e9783f0e634f38c7d14a92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40041982(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((code *)**(undefined4 **)(param_1 + 0x4c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004198a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x4c))(param_1,param_2,1);
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.12, address 0x40041a10.
 * REA evidence: ev_00bda64203ec62aab2dfac84ba5e534fa9334e1b39da564994d13949bd87c275
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40041a10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_ram_30080ca8 = 0x19;
  _DAT_ram_30080cc8 = &LAB_ram_400419b2;
  _DAT_ram_30080ccc = &LAB_ram_400419e2;
  _DAT_ram_30080cb4 = 0;
  _DAT_ram_30080cb8 = 0;
  _DAT_ram_30080cbc = 0;
  _DAT_ram_30080cc0 = 0;
  _DAT_ram_30080cc4 = 0;
  _DAT_ram_30080cd0 = &LAB_ram_40041990;
  _DAT_ram_30080cd4 = param_3;
  _DAT_ram_30080cd8 = param_2;
  FUN_ram_400044c8(0x30080c8c,param_1,3);
  return 0;
}


/* NanoCore 1.12, address 0x40041a68.
 * REA evidence: ev_479606bb0067722afbf8ce933ad33a437265b8a26af8cb3961b8603b95a00236
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40041a68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(code **)(_DAT_ram_30080cd8 + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40041a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_30080cd8 + 0xc))(0x30080c8c,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.12, address 0x40041a86.
 * REA evidence: ev_790ce184df154dea9d2de4e742a0f79b19a823eccd61f6cd904bbe69b924fdd0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40041a86(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(_DAT_ram_30080cd8 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40041a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_30080cd8 + 0x14))(0x30080c8c,param_1,param_2);
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.12, address 0x40041aa0.
 * REA evidence: ev_ce8c54e8451404ef28a3f378f89efc968bf62227abb4275aaf2013d9186edea2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40041aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x40041ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_ram_30080cd8)(0x30080c8c,param_1,param_2,param_4,(code *)*_DAT_ram_30080cd8);
  return;
}


/* NanoCore 1.12, address 0x40041ab4.
 * REA evidence: ev_576d936f3253660f0c1a19fbcd73fbda7a3afe39bab19f73273c1ca8d36e12e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40041ab4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x40041ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_30080cd8 + 4))
            (0x30080c8c,param_1,param_2,param_4,*(code **)(_DAT_ram_30080cd8 + 4));
  return;
}


/* NanoCore 1.12, address 0x40041ac8.
 * REA evidence: ev_e7f46754418c595b720f33c86e263489bca4bf5dde05d6807552080fa832d34d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40041ac8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x40041ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_30080cd8 + 8))
            (0x30080c8c,param_1,param_3,param_4,*(code **)(_DAT_ram_30080cd8 + 8));
  return;
}


/* NanoCore 1.12, address 0x40041ad8.
 * REA evidence: ev_f848a5654ea9196ca6edc5ba818931ede381026dcb5b2e6b946b2cf77d266e16
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40041ad8(byte *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 & 0xdf) != 0x50) {
    return 0xfffffff6;
  }
  if (*(code **)(_DAT_ram_30080cd8 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40041af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_30080cd8 + 0x18))();
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.12, address 0x40041b16.
 * REA evidence: ev_712f092ff9abe17a3878cc53fd495b8807694c01358d501202a14bd797f84cee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041b16(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c) = 3;
  *(undefined1 **)(param_2 + 0x30) = &LAB_ram_40041afe;
  *(undefined1 **)(param_2 + 0x34) = &LAB_ram_40041b02;
  *(undefined1 **)(param_2 + 0x3c) = &LAB_ram_40041b06;
  *(undefined1 **)(param_2 + 0x40) = &LAB_ram_40041b0e;
  *(undefined1 **)(param_2 + 0x38) = &LAB_ram_40041b12;
  *(undefined1 **)(param_2 + 0x44) = &LAB_ram_40041b0a;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  FUN_ram_400044c8(param_2,param_1,0xb);
  return;
}


/* NanoCore 1.12, address 0x40041b6a.
 * REA evidence: ev_171af2382da5541acdd662fa9735354e5dd1999949ed2c2ecc90e91ae39b2b65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40041b6a(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = (uint)*(ushort *)(iVar1 + 4);
  uVar3 = (uint)*(ushort *)(iVar1 + 6);
  if (uVar2 == uVar3) {
    uVar2 = 0;
    if (*(int *)(iVar1 + 8) != 0) {
      uVar2 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
    }
  }
  else if (uVar3 < uVar2) {
    uVar2 = uVar2 - uVar3;
  }
  else {
    uVar2 = ((*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10) - (uVar3 - uVar2);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40041bb8.
 * REA evidence: ev_5fdcd9c72224db760cc27c732f737827174cc1ae23351c446fc4663c5ffa5c18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40041bb8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar3;
  
  if (param_2 != 0x80) {
    if (param_2 < 0x81) {
      if (param_2 == 2) {
        uVar3 = *(ushort *)(param_1 + 0x20) | 0x20;
      }
      else {
        if (param_2 == 3) {
          if (param_3 == 0) {
            return 0;
          }
          cVar1 = *(char *)(param_1 + 0x24);
          if (((*(uint *)(param_3 + 4) & 0x3ffffff) >> 10 !=
               (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10) && (cVar1 != '\0')) {
            return 7;
          }
          FUN_ram_4000303c(param_1 + 0x50,param_3,0x18);
          if (cVar1 == '\0') {
            return 0;
          }
          (*(code *)**(undefined4 **)(param_1 + 0x4c))(param_1,param_3);
          return 0;
        }
        if (param_2 != 1) goto LAB_ram_40041be6;
        uVar3 = *(ushort *)(param_1 + 0x20) & 0xffdf;
      }
      *(ushort *)(param_1 + 0x20) = uVar3;
      return 0;
    }
    if (param_2 != 0x81) {
      if (param_2 == 0x88) {
        if (param_3 == 0) {
          return 0;
        }
        FUN_ram_4000303c(param_3,param_1 + 0x50,0x18);
        return 0;
      }
LAB_ram_40041be6:
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x4c) + 4);
                    /* WARNING: Could not recover jumptable at 0x40041bfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,UNRECOVERED_JUMPTABLE);
      return uVar2;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  return 0;
}


/* NanoCore 1.12, address 0x40041c80.
 * REA evidence: ev_53d2af4d64b83f0c31f4ef01f8ab30c3b9f75c73f630d4e61d28278dd1104d82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40041c80(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if (param_4 != 0) {
    if ((*(ushort *)(param_1 + 0x22) & 0x400) == 0) {
      if ((int)((uint)*(ushort *)(param_1 + 0x22) << 0x14) < 0) {
        piVar5 = *(int **)(param_1 + 0x6c);
        iVar4 = FUN_ram_40040fee(piVar5 + 1,param_3,param_4,0xffffffff);
        if (iVar4 == 0) {
          FUN_ram_400002f4();
          if (*piVar5 == 1) {
            FUN_ram_400002fa();
          }
          else {
            *piVar5 = 1;
            FUN_ram_400002fa();
            (**(code **)(*(int *)(param_1 + 0x4c) + 0x10))(param_1,param_3,param_4,2);
          }
        }
        else {
          FUN_ram_40004f4a();
          param_4 = 0;
        }
      }
      else {
        if ((*(byte *)(param_1 + 0x5c) & 0xf) == 7) {
          pcVar3 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
          (*pcVar3)(param_1,0x81,0,param_4,7,pcVar3);
        }
        iVar4 = 0;
        do {
          if ((param_3[iVar4] == '\n') && ((*(ushort *)(param_1 + 0x22) & 0x40) != 0)) {
            (**(code **)(*(int *)(param_1 + 0x4c) + 8))(param_1,0xd);
          }
          pcVar1 = param_3 + iVar4;
          iVar4 = iVar4 + 1;
          (**(code **)(*(int *)(param_1 + 0x4c) + 8))(param_1,*pcVar1);
        } while (param_4 != iVar4);
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x5c) & 0xf) == 7) {
        pcVar3 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
        (*pcVar3)(param_1,0x81,0,param_4,7,pcVar3);
      }
      uVar6 = *(undefined4 *)(param_1 + 0x6c);
      iVar4 = param_4;
      do {
        while ((((*param_3 == '\n' && ((*(ushort *)(param_1 + 0x22) & 0x40) != 0)) &&
                (iVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))(param_1,0xd), iVar2 == -1)) ||
               (iVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))(param_1,*param_3), iVar2 == -1))
              ) {
          FUN_ram_40040eb6(uVar6,0xffffffff);
        }
        iVar4 = iVar4 + -1;
        param_3 = param_3 + 1;
      } while (iVar4 != 0);
    }
  }
  return param_4;
}


/* NanoCore 1.12, address 0x40041dba.
 * REA evidence: ev_d07f170967230c319fee58ee04863349bfaf8f1d59f8646078c95a0e149505f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041dba(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_4000559c(param_2);
  return;
}


/* NanoCore 1.12, address 0x40041fc8.
 * REA evidence: ev_62a089cec3be3fbda65a64ae7beadb6709a4c67a190ab44a8b3c2fe3fd7482aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041fc8(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_400055d4(param_2);
  return;
}


