/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40040000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40040128.
 * REA evidence: ev_2e0232fabb2f372ca3fd8137d7a5d19a139037627b369921db5a7ad1d33af75d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040128(int param_1,undefined4 *param_2,undefined4 *param_3)

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


/* NanoCore 1.10, address 0x40040182.
 * REA evidence: ev_9a7c5a8cdc40bcb35c64b554f0ead5c1554c86f466494ab6878fca236854e77e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040182(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_ram_400002f4();
  *(undefined4 *)(param_1 + 8) = 0x8000;
  FUN_ram_400002fa();
  FUN_ram_400062bc();
  while (*(int *)(param_1 + 0x18) != param_1 + 0x18) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
    FUN_ram_400065e2(iVar2 + -0x1c);
    FUN_ram_400002fa(uVar1);
  }
  while (*(int *)(param_1 + 0x10) != param_1 + 0x10) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
    FUN_ram_400065e2(iVar2 + -0x1c);
    FUN_ram_400002fa(uVar1);
  }
  FUN_ram_400062de();
  FUN_ram_40006182();
  return;
}


/* NanoCore 1.10, address 0x40040200.
 * REA evidence: ev_fc0e9c7fa2db512ab3517995ae7531f2bcbeccf4288f54e7349c24b79c9a7228
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040200(undefined4 *param_1)

{
  FUN_ram_40040182();
  FUN_ram_400002f4();
  *param_1 = 0;
  FUN_ram_400002fa();
  FUN_ram_400056c4(param_1[3]);
  return 0;
}


/* NanoCore 1.10, address 0x40040228.
 * REA evidence: ev_2d21fbf7007aa218df932f5953645f8dab1b63e5c84fca88d9a0d702b378acfb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40040228(int param_1)

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


/* NanoCore 1.10, address 0x40040276.
 * REA evidence: ev_6dc69cd8e7a76c7caf425dccf95d60437b082807aba2630be00fe0faf48b2db0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40040276(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

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
  iVar2 = FUN_ram_40006472();
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
      uVar5 = FUN_ram_40040228(param_1);
      iVar7 = 0;
      if (uVar5 <= *(ushort *)(param_1 + 6)) {
        piVar4 = *(int **)(param_1 + 0x10);
        if (piVar4 == (int *)(param_1 + 0x10)) {
          FUN_ram_400002fa(uVar3);
        }
        else {
          FUN_ram_400065e2(piVar4 + -7);
          FUN_ram_400002fa(uVar3);
          FUN_ram_40006182();
        }
        if (*(code **)(param_1 + 0x20) != (code *)0x0) {
          (**(code **)(param_1 + 0x20))(param_1,3);
        }
        goto LAB_ram_40040350;
      }
      goto LAB_ram_400403bc;
    }
    if (aiStack_34[0] == 0) break;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_40006520(iVar2);
    piVar4 = *(int **)(param_1 + 0x1c);
    *piVar4 = iVar2 + 0x1c;
    *(int **)(iVar2 + 0x20) = piVar4;
    *(int *)(param_1 + 0x1c) = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x1c) = param_1 + 0x18;
    if (0 < aiStack_34[0]) {
      FUN_ram_400068b6(iVar2 + 0x54,0,aiStack_34);
      FUN_ram_40006792(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar3);
    FUN_ram_40006182();
    iVar7 = *(int *)(iVar2 + 0x38);
    uVar3 = FUN_ram_400002f4();
    if (iVar7 != 0) {
LAB_ram_400403bc:
      FUN_ram_400002fa(uVar3);
      if (iVar7 == 0) {
        if (*(code **)(param_1 + 0x20) == (code *)0x0) {
LAB_ram_40040350:
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
  goto LAB_ram_400403bc;
}


/* NanoCore 1.10, address 0x400403e6.
 * REA evidence: ev_632145dd37803ddfa38d4c72e599234aafe352e143c64d03fc48cc6e719d849d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400403e6(undefined4 *param_1,undefined4 param_2,ushort param_3)

{
  param_1[1] = 0;
  *param_1 = param_2;
  *(ushort *)(param_1 + 2) = param_3 & 0xfffc;
  return;
}


/* NanoCore 1.10, address 0x400403f4.
 * REA evidence: ev_438ef2704fba45c5dd1192c76252cec486a5f28e51cfdfdf0e62ea88df09348b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400403f4(int param_1)

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


/* NanoCore 1.10, address 0x4004042a.
 * REA evidence: ev_671e4ae476e180200ef3ac068927d97ad0d2d89a599baef7d1c8feb70861e413
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004042a(int *param_1,void *param_2,uint param_3)

{
  uint __n;
  int iVar1;
  uint uVar2;
  void *__dest;
  size_t __n_00;
  int iVar3;
  
  iVar3 = param_1[2];
  iVar1 = FUN_ram_400403f4();
  uVar2 = (short)iVar3 - iVar1 & 0xffff;
  __n = 0;
  if (uVar2 != 0) {
    if (param_3 < uVar2) {
      uVar2 = param_3;
    }
    __n = uVar2 & 0xffff;
    __n_00 = (int)(short)iVar3 - ((uint)param_1[1] >> 0x11);
    __dest = (void *)(*param_1 + ((uint)param_1[1] >> 0x11));
    if ((int)__n < (int)__n_00) {
      memcpy(__dest,param_2,__n);
      param_1[1] = param_1[1] & 0x1ffffU | (((uint)param_1[1] >> 0x11) + __n) * 0x20000;
    }
    else {
      memcpy(__dest,param_2,__n_00);
      iVar3 = (int)(short)param_1[2] - ((uint)param_1[1] >> 0x11);
      memcpy((void *)*param_1,(void *)((int)param_2 + iVar3),__n - iVar3);
      *(ushort *)((int)param_1 + 6) =
           (((ushort)((uint)param_1[1] >> 0x11) - (short)param_1[2]) + (short)uVar2) * 2 |
           ~(ushort)((uint)(param_1[1] << 0xf) >> 0x1f) & 1;
    }
  }
  return __n;
}


/* NanoCore 1.10, address 0x400404da.
 * REA evidence: ev_059538100e3221549771c63a2da5e55ef8243965ef813d43071ff170ab17b3f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400404da(int *param_1,void *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  void *__dest;
  size_t __n;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(ushort *)(param_1 + 2);
  iVar7 = (int)(short)uVar1;
  iVar3 = FUN_ram_400403f4();
  uVar2 = (uint)uVar1 - iVar3 & 0xffff;
  if (iVar7 < (int)param_3) {
    param_2 = (void *)((int)param_2 + (param_3 - iVar7));
    param_3 = (uint)uVar1;
  }
  __n = iVar7 - ((uint)param_1[1] >> 0x11);
  __dest = (void *)(*param_1 + ((uint)param_1[1] >> 0x11));
  if ((int)param_3 < (int)__n) {
    memcpy(__dest,param_2,param_3);
    uVar4 = param_1[1];
    uVar5 = (uVar4 >> 0x11) + param_3;
    uVar6 = uVar5 * 0x20000;
    param_1[1] = uVar6 | uVar4 & 0x1ffff;
    if (uVar2 < param_3) {
      param_1[1] = uVar6 | uVar4 & 0x10001 | (uVar5 & 0x7fff) << 1;
    }
  }
  else {
    memcpy(__dest,param_2,__n);
    iVar3 = (int)(short)param_1[2] - ((uint)param_1[1] >> 0x11);
    memcpy((void *)*param_1,(void *)((int)param_2 + iVar3),param_3 - iVar3);
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


/* NanoCore 1.10, address 0x400405f2.
 * REA evidence: ev_dce281f7c10c8ed700114abd774cb4ee46f9912b57b364971e8079a39bda4f5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

size_t FUN_ram_400405f2(int *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  void *__src;
  size_t __n;
  size_t __n_00;
  
  uVar1 = FUN_ram_400403f4();
  __n = 0;
  if (uVar1 != 0) {
    __n = param_3;
    if (uVar1 < param_3) {
      __n = uVar1 & 0xffff;
    }
    uVar1 = (param_1[1] & 0xffffU) >> 1;
    __n_00 = (int)(short)param_1[2] - uVar1;
    __src = (void *)(*param_1 + uVar1);
    if ((int)__n < (int)__n_00) {
      memcpy(param_2,__src,__n);
      param_1[1] = (((param_1[1] & 0xffffU) >> 1) + __n & 0x7fff) << 1 | param_1[1] & 0xffff0001U;
    }
    else {
      memcpy(param_2,__src,__n_00);
      iVar2 = (int)(short)param_1[2] - ((param_1[1] & 0xffffU) >> 1);
      memcpy((void *)(iVar2 + (int)param_2),(void *)*param_1,__n - iVar2);
      *(ushort *)(param_1 + 1) =
           ((((ushort)param_1[1] >> 1) - (short)param_1[2]) + (short)__n) * 2 |
           ~(ushort)param_1[1] & 1;
    }
  }
  return __n;
}


/* NanoCore 1.10, address 0x4004069e.
 * REA evidence: ev_f3820f3f9f28f358d5786803fb279dd5953994df42030f4526aea9ab351b7269
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004069e(int param_1,int param_2)

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


/* NanoCore 1.10, address 0x400406c8.
 * REA evidence: ev_7c8ee0cf4e8a7dad2e4bf463f1b1c3aad273a102476c73e5891e904da3e2701e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400406c8(int param_1)

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


/* NanoCore 1.10, address 0x400406ee.
 * REA evidence: ev_823217fbee70465bb43c43a78d28eb542a668f05d12e591897198e2d4dadcb9a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400406ee(int param_1,undefined4 param_2)

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
      iVar4 = FUN_ram_400065e2();
      if (iVar4 == 0) {
        bVar1 = true;
      }
      piVar2 = (int *)*piVar2;
      FUN_ram_400406c8(iVar5);
    }
    else {
      piVar2 = (int *)*piVar2;
    }
  }
  FUN_ram_400002fa(uVar3);
  if (bVar1) {
    FUN_ram_40006182();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004076e.
 * REA evidence: ev_1dfda13156fd7ab3711ca5fffb80b066de6086796a25d70ea54fb2c4dbb341a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004076e(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 **local_20;
  undefined4 **ppuStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_40006472();
  iStack_28 = FUN_ram_40004362(param_3);
  if (param_2 == 0) {
    uVar2 = 0;
    if (iStack_28 != 0) {
      uStack_24 = FUN_ram_40006472();
      puStack_18 = &LAB_ram_4004069a;
      local_20 = &local_20;
      uStack_14 = 0;
      ppuStack_1c = local_20;
      uVar2 = FUN_ram_400002f4();
      *(undefined4 *)(iVar1 + 0x38) = 0;
      FUN_ram_4004069e(param_1,&uStack_24);
      FUN_ram_40006520(iVar1);
      if (iStack_28 != -1) {
        FUN_ram_400068b6(iVar1 + 0x54,0,&iStack_28);
        FUN_ram_40006792(iVar1 + 0x54);
      }
      FUN_ram_400002fa(uVar2);
      FUN_ram_40006182();
      uVar2 = *(undefined4 *)(iVar1 + 0x38);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x400407fc.
 * REA evidence: ev_12951d938a23ff122814fc66da59ed5ce15c4c667df977d67bb522e22dd44e47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400407fc(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

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


/* NanoCore 1.10, address 0x4004093a.
 * REA evidence: ev_09210bd513cb96f7a4e9bf6957d9aec94ed3d0a1b5447b1723cc981def7c0a34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004093a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x1a;
  *(code **)(param_1 + 0x3c) = FUN_ram_400407fc;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_40040842;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  FUN_ram_4000447c(param_1,param_2,3);
  return;
}


/* NanoCore 1.10, address 0x40040974.
 * REA evidence: ev_6277df5befba8ed8b8c7ddb5802f89d2e737ff9f1017b08c4f3c24e6ac451d0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40040974(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  code *pcVar1;
  undefined4 auStack_14 [4];
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
  (*pcVar1)(param_1,param_2,auStack_14,param_4,param_5,pcVar1);
  return auStack_14[0];
}


/* NanoCore 1.10, address 0x40040988.
 * REA evidence: ev_ec32e2f8f01049872607a4be42e4907e0b6dd3a08e2a905136d34465d8cb5044
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040988(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((code *)**(undefined4 **)(param_1 + 0x4c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40040990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x4c))(param_1,param_2,1);
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.10, address 0x40040a16.
 * REA evidence: ev_62a0bcff160a74ddb72313dcc54d5a3d19ab416cbccf2e128ea488bed2e95e2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40040a16(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_ram_3007f8a8 = 0x19;
  _DAT_ram_3007f8c8 = &LAB_ram_400409b8;
  _DAT_ram_3007f8cc = &LAB_ram_400409e8;
  _DAT_ram_3007f8b4 = 0;
  _DAT_ram_3007f8b8 = 0;
  _DAT_ram_3007f8bc = 0;
  _DAT_ram_3007f8c0 = 0;
  _DAT_ram_3007f8c4 = 0;
  _DAT_ram_3007f8d0 = &LAB_ram_40040996;
  _DAT_ram_3007f8d4 = param_3;
  _DAT_ram_3007f8d8 = param_2;
  FUN_ram_4000447c(0x3007f88c,param_1,3);
  return 0;
}


/* NanoCore 1.10, address 0x40040a6e.
 * REA evidence: ev_34783db51772499e3adae761f6358bc8c4b146b33dddd2e569bb825b33683986
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40040a6e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(code **)(_DAT_ram_3007f8d8 + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40040a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_3007f8d8 + 0xc))(0x3007f88c,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.10, address 0x40040a8c.
 * REA evidence: ev_f1f5af39824b34c12adbd60c4303cc084223a9d01a5dba432e11a3a33aace091
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40040a8c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(_DAT_ram_3007f8d8 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40040aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_3007f8d8 + 0x14))(0x3007f88c,param_1,param_2);
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.10, address 0x40040aa6.
 * REA evidence: ev_9ac0e9e6870e511be2ecf4810c031d775f727e4050d8b0ec47087842dc4471a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40040aa6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x40040ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_ram_3007f8d8)(0x3007f88c,param_1,param_2,param_4,(code *)*_DAT_ram_3007f8d8);
  return;
}


/* NanoCore 1.10, address 0x40040aba.
 * REA evidence: ev_dffa405452a0c294d4ceea4e817de94778ef82a2fec78dd2157a031f9e8cc843
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40040aba(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x40040acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3007f8d8 + 4))
            (0x3007f88c,param_1,param_2,param_4,*(code **)(_DAT_ram_3007f8d8 + 4));
  return;
}


/* NanoCore 1.10, address 0x40040ace.
 * REA evidence: ev_a6dcd907cb4b5d433980d57ca005de5e73ddde9d82b277f06d9d0ba2cc4f48fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40040ace(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x40040adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3007f8d8 + 8))
            (0x3007f88c,param_1,param_3,param_4,*(code **)(_DAT_ram_3007f8d8 + 8));
  return;
}


/* NanoCore 1.10, address 0x40040ade.
 * REA evidence: ev_e53532544802a7ad5f1a54d67fac7ebbd2b38ff14064e8ad185ecb0a0430ec8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40040ade(byte *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 & 0xdf) != 0x50) {
    return 0xfffffff6;
  }
  if (*(code **)(_DAT_ram_3007f8d8 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40040afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_3007f8d8 + 0x18))();
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.10, address 0x40040b1c.
 * REA evidence: ev_24c69ecdfd083512cae69cc89e2267d1bacdd68fe458833776b3a47583eb997d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040b1c(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c) = 3;
  *(undefined1 **)(param_2 + 0x30) = &LAB_ram_40040b04;
  *(undefined1 **)(param_2 + 0x34) = &LAB_ram_40040b08;
  *(undefined1 **)(param_2 + 0x3c) = &LAB_ram_40040b0c;
  *(undefined1 **)(param_2 + 0x40) = &LAB_ram_40040b14;
  *(undefined1 **)(param_2 + 0x38) = &LAB_ram_40040b18;
  *(undefined1 **)(param_2 + 0x44) = &LAB_ram_40040b10;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  FUN_ram_4000447c(param_2,param_1,0xb);
  return;
}


/* NanoCore 1.10, address 0x40040b70.
 * REA evidence: ev_aed71752e368262113fd934cab3f6f4633fc251f5bc153c7a1a5f59104d592d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40040b70(int param_1)

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


/* NanoCore 1.10, address 0x40040bbe.
 * REA evidence: ev_afae16768e20fd3972550e3153f19df0d741acf55c4ef24dd3e239fde21812cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040bbe(int param_1,int param_2,int param_3,undefined4 param_4)

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
          FUN_ram_4000305c(param_1 + 0x50,param_3,0x18);
          if (cVar1 == '\0') {
            return 0;
          }
          (*(code *)**(undefined4 **)(param_1 + 0x4c))(param_1,param_3);
          return 0;
        }
        if (param_2 != 1) goto LAB_ram_40040bec;
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
        FUN_ram_4000305c(param_3,param_1 + 0x50,0x18);
        return 0;
      }
LAB_ram_40040bec:
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x4c) + 4);
                    /* WARNING: Could not recover jumptable at 0x40040c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,UNRECOVERED_JUMPTABLE);
      return uVar2;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  return 0;
}


/* NanoCore 1.10, address 0x40040c86.
 * REA evidence: ev_48f3275c71a1202676ca647b36fdd12c28ce09e4134354e85520495baca83474
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40040c86(int param_1,undefined4 param_2,char *param_3,int param_4)

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
        iVar4 = FUN_ram_4003fff4(piVar5 + 1,param_3,param_4,0xffffffff);
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
          FUN_ram_40005014();
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
          FUN_ram_4003febc(uVar6,0xffffffff);
        }
        iVar4 = iVar4 + -1;
        param_3 = param_3 + 1;
      } while (iVar4 != 0);
    }
  }
  return param_4;
}


