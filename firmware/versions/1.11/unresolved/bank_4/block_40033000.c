/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40033000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40033014.
 * REA evidence: ev_d4f8490f894615aa9545b0f8082020346723af9682bfdf16f2bd1c64a3266bfe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033014(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  char local_8 [8];
  
  local_8[0] = '\0';
  local_8[1] = '\0';
  local_8[2] = '\0';
  local_8[3] = '\0';
  local_8[4] = '\0';
  local_8[5] = '\0';
  local_8[6] = '\0';
  local_8[7] = '\0';
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0x12);
    do {
      uVar2 = (uint)*pbVar1;
      if ((uVar2 < 8) && (local_8[uVar2] == '\0')) {
LAB_ram_4003303a:
        local_8[uVar2] = '\x01';
      }
      else {
        uVar2 = 0;
        do {
          if (local_8[uVar2] == '\0') {
            *pbVar1 = (byte)uVar2;
            goto LAB_ram_4003303a;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
      }
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != (byte *)(param_1 + 0x1a));
  }
  return;
}


/* NanoCore 1.11, address 0x40033064.
 * REA evidence: ev_57218c4735f8f09e100e64caea3a7ee695f938ba3284015137fb852cc0cc1df5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033064(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  char cVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  char cStack_a4;
  byte bStack_a3;
  
  if (param_1 != (undefined2 *)0x0) {
    thunk_FUN_ram_40033014();
    *param_1 = param_2;
    if ((byte)(*(char *)((int)param_1 + 0x33f) - 0x1eU) < 8) {
      FUN_ram_40032bda(param_1);
    }
    puVar3 = param_1;
    do {
      FUN_ram_4000304c(&cStack_a4,puVar3 + 0xe,100);
      uVar1 = (uint)bStack_a3;
      if ((byte)(cStack_a4 - 1U) < 8) {
        if (cStack_a4 == '\a') {
          uVar1 = FUN_ram_4006959e();
          cVar2 = '\a';
        }
        else if (cStack_a4 == '\b') {
          uVar1 = FUN_ram_4006c86e();
          cVar2 = '\b';
        }
        else if (cStack_a4 == '\x05') {
          uVar1 = FUN_ram_4006590c();
          cVar2 = '\x05';
        }
        else {
          cVar2 = cStack_a4;
          if (cStack_a4 == '\x06') {
            uVar1 = FUN_ram_40066d02();
            cVar2 = '\x06';
          }
        }
      }
      else {
        cVar2 = '\0';
      }
      bStack_a3 = (byte)uVar1;
      *(byte *)((int)puVar3 + 0x1d) = bStack_a3;
      uVar1 = FUN_ram_40032a36(cVar2,uVar1);
      if (0xc < uVar1) {
        uVar1 = 0xc;
      }
      memset(puVar3 + 0x10,0,0x60);
      *(char *)((int)puVar3 + 0x1f) = (char)uVar1;
      puVar5 = puVar3;
      for (uVar4 = 0; (uVar1 & 0xff) != uVar4; uVar4 = uVar4 + 1 & 0xff) {
        *(char *)(puVar5 + 0x10) = (char)uVar4;
        uVar6 = FUN_ram_40032cb2(&cStack_a4,cVar2,uVar4);
        *(undefined4 *)(puVar5 + 0x12) = uVar6;
        puVar5 = puVar5 + 4;
      }
      puVar3 = puVar3 + 0x32;
    } while (puVar3 != param_1 + 400);
    cVar2 = -1;
    if (*(byte *)((int)param_1 + 0x81) < 8) {
      cVar2 = *(byte *)((int)param_1 + 0x81) + 0x1e;
    }
    *(char *)((int)param_1 + 0x33f) = cVar2;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4003319c.
 * REA evidence: ev_5d5849bb06325d1813933d5a58a83b71c3ce6f50e38813631240ea77aab13c91
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003319c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40037842();
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.11, address 0x400331b2.
 * REA evidence: ev_c5b4bbc0d85c672e3cff7c6e2c853da1984b2d1a08d6dd7d5c9c459b7fdb8533
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400331b2(uint *param_1,uint param_2,uint param_3)

{
  fence();
  fence();
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  return;
}


/* NanoCore 1.11, address 0x400331c6.
 * REA evidence: ev_f85d993ba9e1ca9f864b57b0f240323bbb60364591b98381c8fcda614b49ccef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400331c6(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = _DAT_ram_3007cb84;
  if (param_2 == 0) {
    piVar5 = *(int **)(param_1 + 0x24);
    iVar8 = **(int **)(param_1 + 0x20);
  }
  else {
    piVar5 = *(int **)(param_2 + 0xc);
    iVar8 = **(int **)(param_2 + 4);
  }
  iVar4 = *piVar5;
  *(int **)(_DAT_ram_3007cb84 + 0x1c) = piVar5;
  *(int *)(iVar1 + 0x18) = param_1;
  *(int *)(iVar1 + 4) = iVar8;
  if (iVar4 == 2) {
    iVar4 = piVar5[1];
    puVar6 = &DAT_ram_40097474;
  }
  else {
    if (iVar4 != 3) goto LAB_ram_400331fc;
    iVar4 = piVar5[1];
    puVar6 = &DAT_ram_40097494;
  }
  iVar4 = *(int *)(puVar6 + iVar4 * 4);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 8) = iVar8 * iVar4;
LAB_ram_400331fc:
  uVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 8);
  iVar8 = *(int *)(iVar1 + 0xc);
  for (uVar7 = uVar2; (iVar8 == 0 && (uVar7 < 360000000));
      uVar7 = (uint)((ulonglong)uVar7 * (ulonglong)uVar2)) {
    uVar7 = 2 << (uVar3 & 0x1f);
    uVar3 = uVar3 + 1;
    iVar8 = (int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20) +
            *(int *)(iVar1 + 0xc) * uVar7 + ((int)uVar7 >> 0x1f) * uVar2;
  }
  *(uint *)(iVar1 + 0x10) = uVar7;
  *(int *)(iVar1 + 0x14) = iVar8;
  return 0;
}


/* NanoCore 1.11, address 0x4003329a.
 * REA evidence: ev_5fd7a61681211f00d242896671d0b87087093b51d33cfd496d2ef22b59da8f38
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4003329a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = _DAT_ram_3007cb84;
  piVar2 = (int *)_DAT_ram_3007cb84[7];
  if (*piVar2 == 2) {
    FUN_ram_40038984(*_DAT_ram_3007cb84,param_1,param_4,param_3);
  }
  if (*piVar2 == 3) {
    FUN_ram_40038aca(*puVar1,param_1,param_4,param_3);
  }
  return 0;
}


/* NanoCore 1.11, address 0x400332f0.
 * REA evidence: ev_a8c90655d60dd8acb7e5fb45f7b0fdc121511912d00c85b48072028df6e537a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400332f0(void)

{
  FUN_ram_4003888a(0x12);
  FUN_ram_400378f4(0x2d);
  FUN_ram_400378f4(0x47);
  return 0;
}


/* NanoCore 1.11, address 0x40033312.
 * REA evidence: ev_7f3c1deb2dfd9d50df81bfe89e3a201b972dc583bfa4e287554097372f80a25d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033312(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3007cb84;
  uVar2 = *(undefined4 *)(_DAT_ram_3007cb84 + 4);
  FUN_ram_40037a2e(6,*(undefined4 *)(_DAT_ram_3007cb84 + 0x10));
  FUN_ram_4003792a(0x47,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10));
  FUN_ram_4003792a(0x46,uVar2,*(undefined4 *)(iVar1 + 8));
  FUN_ram_400378d0(6);
  FUN_ram_400378d0(0x47);
  FUN_ram_400378d0(0x2d);
  FUN_ram_400388ca(0x12);
  return 0;
}


/* NanoCore 1.11, address 0x4003336c.
 * REA evidence: ev_d1c9d08340aa5f85e9db8c1ffc7b30ebf896f7221bdc53ea5c5605ea7d634253
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003336c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_40005656(0x20);
  uVar2 = 0xfffffff4;
  if (puVar1 != (undefined4 *)0x0) {
    memset(puVar1 + 1,0,0x1c);
    *puVar1 = 0x18800000;
    uVar2 = 0;
    _DAT_ram_3007cb84 = puVar1;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x400333a4.
 * REA evidence: ev_4e8e821d4409dd162ca0531221f4aeff4949ae4a1de78fe5102aea3e38be1ea2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003342a) */
/* WARNING: Removing unreachable block (ram,0x4003343e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400333a4(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = _DAT_ram_3007cb84;
  puVar2 = (uint *)_DAT_ram_3007cb84[7];
  FUN_ram_400331b2(*_DAT_ram_3007cb84,0x30,(*puVar2 & 3) << 4);
  if (*puVar2 == 2) {
    FUN_ram_400331b2(*puVar1,0xf0000,(puVar2[1] & 0xf) << 0x10);
    if ((*(int *)(puVar1[7] + 8) != 0) || (*(int *)(puVar1[7] + 0xc) != 0)) {
      FUN_ram_4003892a(*puVar1);
    }
  }
  else if (*puVar2 == 3) {
    FUN_ram_400331b2(*puVar1,0x300000,(puVar2[1] / 3 & 3) << 0x14);
    FUN_ram_400331b2(*puVar1,0xf000000,puVar2[1] % 3 << 0x18);
    iVar4 = puVar1[7];
    puVar3 = *(undefined4 **)(iVar4 + 0x1c);
    if ((*(int *)(iVar4 + 8) != 0) || (*(int *)(iVar4 + 0xc) != 0)) {
      FUN_ram_40038a70(*puVar1);
    }
    if (puVar3 != (undefined4 *)0x0) {
      FUN_ram_40038a00(*puVar1,puVar3[3],puVar3[4],puVar3[5]);
      FUN_ram_40038a14(*puVar1,puVar3[2],puVar3[1],*puVar3);
    }
  }
  fence();
  fence();
  *(uint *)*puVar1 = *(uint *)*puVar1 | 1;
  return 0;
}


/* NanoCore 1.11, address 0x40033494.
 * REA evidence: ev_21cfdae4e331dc2cc2831a3efa48a3375cb39d3aaa3b6f367926674e02f9ae18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033494(undefined4 param_1)

{
  FUN_ram_4000304c(param_1,_DAT_ram_3007cb88 + 0x374,0xc4);
  return 0;
}


/* NanoCore 1.11, address 0x400334b4.
 * REA evidence: ev_8a308866bdcf02d12928da6c6934b5bcaf8776cf24b1f06cad02ff055ae38528
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400334b4(undefined4 param_1)

{
  FUN_ram_4000304c(param_1,_DAT_ram_3007cb88 + 0x340,0x34);
  return 0;
}


/* NanoCore 1.11, address 0x400334d4.
 * REA evidence: ev_f446a709f979aaa6fa430bf8cf990732c39bb821884b034e95ec3781612bfc13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400334d4(undefined4 param_1)

{
  FUN_ram_4000304c(param_1,_DAT_ram_3007cb88 + 0x330,0x10);
  return 0;
}


/* NanoCore 1.11, address 0x400334f2.
 * REA evidence: ev_bd1b5c9f2a6e0f1cb3d7507edd542c226e94e1017dfb673a7151ba5a335ff3b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400334f2(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = _DAT_ram_3007cb88;
  iVar3 = *param_1;
  uVar2 = *_DAT_ram_3007cb88;
  if (iVar3 != 0) {
    FUN_ram_400393f8(uVar2,param_1 + 1,0);
    FUN_ram_400393f8(*puVar1,param_1 + 0x11,1);
    FUN_ram_400393f8(*puVar1,param_1 + 0x21,2);
    uVar2 = *puVar1;
  }
  FUN_ram_400393c6(uVar2,iVar3 != 0);
  FUN_ram_4000304c(puVar1 + 0xdd,param_1,0xc4);
  return 0;
}


/* NanoCore 1.11, address 0x40033550.
 * REA evidence: ev_415e8fd8cca663c26a3ca23d338106e8042423914325ed254bb2c15ca50b08e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033550(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = _DAT_ram_3007cb88;
  FUN_ram_40038e24(*_DAT_ram_3007cb88,0);
  iVar3 = *param_1;
  uVar2 = *puVar1;
  if (iVar3 != 0) {
    FUN_ram_400393d4(uVar2,param_1 + 1);
    uVar2 = *puVar1;
  }
  FUN_ram_400393b8(uVar2,iVar3 != 0);
  FUN_ram_4000304c(puVar1 + 0xd0,param_1,0x34);
  FUN_ram_40038e24(*puVar1,1);
  return 0;
}


/* NanoCore 1.11, address 0x400335a4.
 * REA evidence: ev_28c6ebe9f448a23225d66a5379f720f8822b1d60382b9fd96d3a5908e5934320
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400335a4(void)

{
  FUN_ram_40039308(*_DAT_ram_3007cb88,0);
  return 0;
}


/* NanoCore 1.11, address 0x400335c0.
 * REA evidence: ev_0e3b661643ecc0089b3cde0026e02005b4450849fe9b7982d3decdb499953256
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400335c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = _DAT_ram_3007cb88;
  uVar2 = FUN_ram_400392f0(*_DAT_ram_3007cb88);
  FUN_ram_400392fc(*puVar1,uVar2);
  if ((uVar2 & 1) != 0) {
    FUN_ram_40041626(puVar1[0x10f],0);
    if ((code *)puVar1[0x112] != (code *)0x0) {
      (*(code *)puVar1[0x112])(puVar1[0x113]);
    }
  }
  if ((puVar1[0x111] & 0x10) != 0) {
    puVar1[0x111] = puVar1[0x111] & 0xf;
    FUN_ram_40039216(*puVar1);
  }
  return 1;
}


/* NanoCore 1.11, address 0x4003361c.
 * REA evidence: ev_40e5bb1150a45f8a09562c30d7b86a9c6e1e8e9abd78eeecc37c68019a4eb5d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003361c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = _DAT_ram_3007cb88;
  iVar2 = _DAT_ram_3007cb88[0x10e];
  uVar3 = *(undefined4 *)(iVar2 + 4);
  uVar4 = *(undefined4 *)(iVar2 + 0x14);
  FUN_ram_4003931a(*_DAT_ram_3007cb88,uVar3,uVar4,*(undefined4 *)(iVar2 + 8),
                   *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x18),
                   *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x10),
                   *(undefined4 *)(iVar2 + 0x20),(*(uint *)(iVar2 + 0x24) & 3) >> 1,
                   (*(uint *)(iVar2 + 0x24) & 0xf) >> 3);
  FUN_ram_4003939c(*puVar1,uVar3,uVar4);
  FUN_ram_400390ee(*puVar1,uVar3,uVar4,0,0);
  FUN_ram_40039216(*puVar1,0);
  FUN_ram_40038dfe(*puVar1,2);
  FUN_ram_40038e12(*puVar1,1);
  FUN_ram_40038f02(*puVar1);
  FUN_ram_40038e80(*puVar1,0);
  if (puVar1[2] != 0) {
    FUN_ram_40038e2e(*puVar1,puVar1[3],puVar1[4],puVar1[5]);
  }
  if (puVar1[0xc3] == 0) {
    puVar1[0xc2] = 1;
    puVar1[0xc4] = 0;
    puVar1[0xc3] = 1;
    puVar1[0xc5] = 0;
  }
  FUN_ram_40039120(*puVar1,0);
  FUN_ram_40039136(*puVar1,puVar1[0xc5],puVar1[0xc4],puVar1[0xc3]);
  FUN_ram_4003fbd6(0x3b,FUN_ram_400335c0,0);
  FUN_ram_4003fb8e(0x3b);
  FUN_ram_400392de(*puVar1,1,1);
  FUN_ram_400392de(*puVar1,1,4);
  FUN_ram_400334f2(puVar1 + 0xdd);
  FUN_ram_40033550(puVar1 + 0xd0);
  FUN_ram_40039308(*puVar1,1);
  return 0;
}


/* NanoCore 1.11, address 0x4003373a.
 * REA evidence: ev_1a71cf80a02c154df9ddb3da8c75c23ca58396fc68215a9ef9a9e3b26d9cf645
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003373a(void)

{
  FUN_ram_4003888a(0x15);
  FUN_ram_400378f4(0x31);
  FUN_ram_400378f4(0x46);
  return 0;
}


/* NanoCore 1.11, address 0x4003375c.
 * REA evidence: ev_f1f86c7fb83a80dbfe54168704691f0ff522ace92a3267aaadd2e6d4e9e062fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003375c(void)

{
  FUN_ram_400378d0(0x31);
  FUN_ram_400378d0(0x46);
  FUN_ram_40037a2e(0x31,150000000);
  FUN_ram_400388ca(0x15);
  return 0;
}


/* NanoCore 1.11, address 0x4003378e.
 * REA evidence: ev_d5450c45dfcdc78529afaa82cb2847b8e27a3ff846d2fb52807f4bfec6cdf448
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003378e(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = _DAT_ram_3007cb88;
  if (param_2 == 0) {
    puVar5 = *(uint **)(param_1 + 0x20);
  }
  else {
    puVar5 = *(uint **)(param_2 + 4);
  }
  uVar2 = puVar5[6];
  uVar6 = puVar5[5];
  uVar8 = puVar5[1];
  uVar9 = puVar5[3];
  uVar3 = puVar5[7];
  *(uint **)(_DAT_ram_3007cb88 + 0x438) = puVar5;
  uVar3 = uVar6 + uVar2 + uVar3 + puVar5[8];
  uVar2 = puVar5[2] + uVar8 + uVar9 + puVar5[4];
  if (uVar2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar5 / uVar2;
  }
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / uVar3;
  }
  if (uVar2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1000000 / uVar2;
  }
  iVar4 = 1;
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / uVar3;
  }
  for (; uVar2 < 0x1e; uVar2 = uVar2 << 1) {
    iVar4 = iVar4 + 1;
  }
  *(uint *)(iVar1 + 0x440) = (uVar3 - 1) - iVar4;
  iVar4 = 0;
  if (0x556 < uVar8) {
    memset(iVar1 + 8,0,0x10);
    return 0xffffffff;
  }
  do {
    if ((&DAT_ram_400974f8)[iVar4 * 2] == 0xe) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x14);
  if (((param_4 == 0) || (*(uint *)(iVar4 * 8 + 0x400974fc) < 0x18)) || (param_3 == 0x18)) {
LAB_ram_40033826:
    memset(iVar1 + 8,0,0x10);
  }
  else {
    if (param_3 == 0x10) {
      uVar7 = 5;
      *(undefined4 *)(iVar1 + 0xc) = 5;
      *(undefined4 *)(iVar1 + 0x10) = 6;
    }
    else {
      if (param_3 != 0x12) goto LAB_ram_40033826;
      uVar7 = 6;
      *(undefined4 *)(iVar1 + 0xc) = 6;
      *(undefined4 *)(iVar1 + 0x10) = 6;
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar7;
    *(undefined4 *)(iVar1 + 8) = 1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40033878.
 * REA evidence: ev_5c4a198b7a6e5c0dbcc1f7710410668c450f704be463f634a2a6a0dddcecde0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033878(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_ram_40005656(0x450);
  uVar3 = 0xfffffff4;
  if (puVar1 != (undefined4 *)0x0) {
    memset(puVar1,0,0x450);
    *puVar1 = 0x18a00000;
    puVar1[1] = &PTR_DAT_ram_40097598_ram_400974c8;
    puVar2 = (undefined4 *)FUN_ram_40005656(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[2] = puVar2 + 1;
      puVar2[1] = puVar2 + 1;
    }
    puVar1[0x10f] = puVar2;
    puVar1[0xcc] = 0x32;
    puVar1[0xcd] = 0x32;
    puVar1[0xce] = 0x32;
    puVar1[0xcf] = 0x32;
    puVar1[0xd0] = 1;
    FUN_ram_4000304c(puVar1 + 0xd1,&DAT_ram_30049ef8,0x30);
    puVar1[0xdd] = 1;
    FUN_ram_4000304c(puVar1 + 0xde,&DAT_ram_30049f28,0xc0);
    uVar3 = 0;
    _DAT_ram_3007cb88 = puVar1;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x4003391a.
 * REA evidence: ev_f7ed28b8930d9bab212e356bd9ba12e53e9eb650506590c0fc6f2a67c3a3363b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003391a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_400416a6(*(undefined4 *)(_DAT_ram_3007cb88 + 0x43c),0,100);
  if (0 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40033940.
 * REA evidence: ev_fc6683e883b88bb18cc6b8b6aaee0549254c5c74a07d7fdc0527b23831578535
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40033940(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  if (param_2 < (uint)(*piVar1 + piVar1[1])) {
    return (*(uint *)((*(int **)(param_1 + 4))[1] + param_2 * 0x14 + 0x10) & 7) >> 2;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40033962.
 * REA evidence: ev_05a3b3b8f6cd2664a2fb413496fa91aafc4c84b5ea6fc08681e3d585ecee6cd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033962(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_3007cb88;
  iVar2 = *param_1;
  iVar3 = FUN_ram_40033940(_DAT_ram_3007cb88,iVar2);
  if (iVar3 == 0) {
    uVar4 = 0xffffffea;
  }
  else {
    iVar3 = (iVar2 + 0x2f) * 0x10;
    *(int *)(iVar1 + iVar3 + 8) = iVar2;
    FUN_ram_4000304c(param_1,iVar3 + 8 + iVar1,0x10);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x400339ae.
 * REA evidence: ev_897ab62c76d75d5b91120a2fc6883378d7a0415456f031a79f40ef13265afdb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400339ae(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = _DAT_ram_3007cb88;
  iVar2 = FUN_ram_40033940(_DAT_ram_3007cb88,*param_1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    FUN_ram_40038e24(*puVar1,0);
    FUN_ram_40039136(*puVar1,param_1[3],param_1[2],param_1[1]);
    FUN_ram_40038e24(*puVar1,1);
    FUN_ram_4000304c(puVar1 + *param_1 * 4 + 0xbe,param_1,0x10);
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40033a08.
 * REA evidence: ev_341e92e32ed1eda9870e7140b936febb888073bb9a37a7fc928a3f03fbb7695f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033a08(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = _DAT_ram_3007cb88;
  FUN_ram_40038e24(*_DAT_ram_3007cb88,0);
  if ((((*param_1 != puVar1[0xcc]) || (param_1[1] != puVar1[0xcd])) || (param_1[2] != puVar1[0xce]))
     || (puVar1[0xcf] != param_1[3])) {
    if (((*param_1 == 0x32) && (param_1[1] == 0x32)) &&
       ((param_1[2] == 0x32 && (param_1[3] == 0x32)))) {
      FUN_ram_4003905c(*puVar1,puVar1[0x1c] & 3);
    }
    else {
      FUN_ram_400390b6();
    }
  }
  FUN_ram_40038e24(*puVar1,1);
  FUN_ram_4000304c(puVar1 + 0xcc,param_1,0x10);
  return 0;
}


/* NanoCore 1.11, address 0x40033a8e.
 * REA evidence: ev_3782f4117fbea13e90053dab0e9f8f667de21e0e152f016906fc68722dd3bfc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40033a8e(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 4);
  if (param_2 < (uint)(*piVar2 + piVar2[1])) {
    bVar1 = true;
    if (((*(uint *)((*(int **)(param_1 + 4))[1] + param_2 * 0x14 + 0x10) & 2) != 0) &&
       (param_2 != 0)) {
      return param_3 < 4;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x40033ab8.
 * REA evidence: ev_2a281f5d5483abf526b25af6f7eeafdc4b60fa805a3c45e51d2e379ff7c0d98c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033ab8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = _DAT_ram_3007cb88;
  iVar5 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = FUN_ram_40033a8e(_DAT_ram_3007cb88,iVar6,iVar5);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    iVar4 = (iVar5 + iVar6 * 4) * 0x5c;
    iVar2 = iVar1 + iVar4;
    *(int *)(iVar2 + 0x1c) = iVar6;
    *(int *)(iVar2 + 0x20) = iVar5;
    FUN_ram_4000304c(param_1,iVar4 + 0x18 + iVar1,0x5c);
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40033b1e.
 * REA evidence: ev_a0d2a91001ebbec8a0ac7b71b1fd1bf382be85731838c3e68772b7a4d67d18c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40033b1e(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2[2];
  iVar3 = param_2[1];
  iVar1 = FUN_ram_40033a8e();
  if (iVar1 != 0) {
    iVar5 = iVar3 * 4;
    iVar1 = *(int *)(*(int *)(param_1[1] + 4) + iVar3 * 0x14 + 4);
    if (*param_2 == 0) {
      param_1[(iVar5 + iVar4) * 0x17 + 6] = 0;
      if (iVar1 == 1) {
        FUN_ram_40033f34(param_1);
      }
      else {
        FUN_ram_4003904a(*param_1,0);
      }
      return 0;
    }
    if (iVar1 == 1) {
      iVar5 = iVar5 + iVar4;
      iVar1 = FUN_ram_40033e56(param_1,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_ram_40033f68(param_1,param_2);
        if (iVar1 == 0) goto LAB_ram_40033bc8;
      }
    }
    else {
      iVar1 = FUN_ram_4003408c(param_1,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_ram_400340fe(param_1,param_2);
        if (iVar1 != 0) {
          uVar2 = *param_1;
          param_1[iVar3 * 0x5c + 6] = 0;
          FUN_ram_4003904a(uVar2,0);
          return iVar1;
        }
LAB_ram_40033bc8:
        FUN_ram_4000304c(param_1 + iVar5 * 0x17 + 6,param_2,0x5c);
        return 0;
      }
      uVar2 = *param_1;
      param_1[iVar3 * 0x5c + 6] = 0;
      FUN_ram_4003904a(uVar2,0);
    }
  }
  return -0x16;
}


/* NanoCore 1.11, address 0x40033c02.
 * REA evidence: ev_87d5f34afc6abc3b2a1ffe20295610a3a044bf7405d49974e8f88536407ccf4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40033c02(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar1 = _DAT_ram_3007cb88;
  FUN_ram_40038e24(*_DAT_ram_3007cb88,0);
  puVar5 = param_1 + 2;
  uVar2 = *param_1;
  for (uVar4 = 0; uVar4 != uVar2; uVar4 = uVar4 + 1) {
    if (*(int *)(*(int *)(puVar1[1] + 4) + *puVar5 * 0x14 + 4) == 1) {
      puVar1[(puVar5[1] + *puVar5 * 4) * 0x17 + 6] = 0;
    }
    puVar5 = puVar5 + 0x17;
  }
  puVar5 = param_1 + 1;
  uVar2 = 0;
  while( true ) {
    if (*param_1 <= uVar2) {
      FUN_ram_40038e24(*puVar1,1);
      return 0;
    }
    iVar3 = FUN_ram_40033b1e(puVar1,puVar5);
    puVar5 = puVar5 + 0x17;
    if (iVar3 != 0) break;
    uVar2 = uVar2 + 1;
  }
  return iVar3;
}


/* NanoCore 1.11, address 0x40033c94.
 * REA evidence: ev_12576bbe93b54ac6aa4a5babb6704a43769e31079c0d02065bee57b93077693f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033c94(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar2 = _DAT_ram_3007cb88;
  uVar3 = FUN_ram_400002f4();
  fence();
  if (*(uint *)(*piVar2 + 500) < (uint)piVar2[0x110]) {
    bVar1 = true;
    if (2 < *(uint *)(*piVar2 + 500)) goto LAB_ram_40033cdc;
  }
  FUN_ram_400002fa(uVar3);
  FUN_ram_4003ff8a(1000);
  bVar1 = false;
LAB_ram_40033cdc:
  FUN_ram_40038e24(*piVar2,0);
  uVar4 = FUN_ram_40033b1e(piVar2,param_1);
  FUN_ram_40038e24(*piVar2,1);
  if (bVar1) {
    FUN_ram_400002fa(uVar3);
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x40033d10.
 * REA evidence: ev_bc6243b813ce7f083f7dfb2655b0f32695131c4964355bf097aa17f2a23babb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40033d10(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  if (param_2 < (uint)(*piVar1 + piVar1[1])) {
    return (*(uint *)((*(int **)(param_1 + 4))[1] + param_2 * 0x14 + 0x10) & 0xf) >> 3;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40033d32.
 * REA evidence: ev_cddd2942170afa3b53da2c43675d68814ce9bcec1b71e9f38a2ac2f47b3dd24a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033d32(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_3007cb88;
  iVar2 = *param_1;
  iVar3 = FUN_ram_40033d10(_DAT_ram_3007cb88,iVar2);
  if (iVar3 == 0) {
    uVar4 = 0xffffffea;
  }
  else {
    *(int *)(iVar1 + iVar2 * 0xc + 0x318) = iVar2;
    FUN_ram_4000304c(param_1,iVar2 * 0xc + 0x318 + iVar1,0xc);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x40033d80.
 * REA evidence: ev_9d4307a4f78af75da5c12a60d1428552d52990418e11a70b09585199453073d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033d80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = _DAT_ram_3007cb88;
  iVar2 = FUN_ram_40033d10(_DAT_ram_3007cb88,*param_1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar3 = 0xffffffea;
    if ((uint)param_1[1] < 2) {
      FUN_ram_40038e24(*puVar1,0);
      FUN_ram_40039170(*puVar1,param_1[2],param_1[1]);
      FUN_ram_40038e24(*puVar1,1);
      FUN_ram_4000304c(puVar1 + *param_1 * 3 + 0xc6,param_1,0xc);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40033de4.
 * REA evidence: ev_52603a808015f4ea7407a86589702c84b4a789f6ac03ef7ece8fc935dc4d6674
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40033de4(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  param_1 = param_1 + param_2 * 0x170;
  iVar6 = 0;
  do {
    if ((iVar6 != param_3) && (*(int *)(param_1 + 0x18) != 0)) {
      if (*(int *)(param_1 + 0x58) == 0) {
        iVar2 = *(int *)(param_1 + 0x50);
        iVar4 = *(int *)(param_1 + 0x54);
      }
      else {
        iVar2 = *(int *)(param_1 + 100);
        iVar4 = *(int *)(param_1 + 0x68);
      }
      uVar5 = *(uint *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x2c);
      uVar3 = iVar4 + uVar5;
      if (param_7 + param_5 <= iVar4 + uVar5) {
        uVar3 = param_7 + param_5;
      }
      if (uVar5 < param_5) {
        uVar5 = param_5;
      }
      if (uVar5 < uVar3) {
        uVar3 = iVar2 + uVar1;
        if (param_6 + param_4 <= iVar2 + uVar1) {
          uVar3 = param_6 + param_4;
        }
        if (uVar1 < param_4) {
          uVar1 = param_4;
        }
        if (uVar1 < uVar3) {
          return 1;
        }
      }
    }
    iVar6 = iVar6 + 1;
    param_1 = param_1 + 0x5c;
    if (iVar6 == 4) {
      return 0;
    }
  } while( true );
}


/* NanoCore 1.11, address 0x40033e56.
 * REA evidence: ev_09ad6c23e9db4d8523c1a78f06ff0b70a29256ab1aacf4a296a9950bb41259bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_40033e56(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  uVar7 = *(uint *)(*(int *)(param_1 + 0x438) + 4);
  if (uVar4 < uVar7) {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x438) + 0x14);
    uVar5 = *(uint *)(param_2 + 0x18);
    if (uVar5 < uVar3) {
      uVar1 = *(uint *)(param_2 + 0x38);
      uVar9 = *(uint *)(param_2 + 0x3c);
      if (*(int *)(param_2 + 0x40) == 0) {
        if (uVar7 < uVar1 + uVar4) {
          *(uint *)(param_2 + 0x38) = uVar7 - uVar4;
        }
        if (uVar3 < uVar9 + uVar5) {
          *(uint *)(param_2 + 0x3c) = uVar3 - uVar5;
        }
        uVar6 = *(undefined4 *)(param_2 + 0x38);
        uVar8 = *(undefined4 *)(param_2 + 0x3c);
      }
      else {
        uVar11 = *(uint *)(param_2 + 0x44);
        if (uVar1 <= uVar11) {
          return 0;
        }
        uVar10 = *(uint *)(param_2 + 0x48);
        if (uVar9 <= uVar10) {
          return 0;
        }
        if (uVar1 < *(int *)(param_2 + 0x4c) + uVar11) {
          *(uint *)(param_2 + 0x4c) = uVar1 - uVar11;
        }
        if (uVar9 < *(int *)(param_2 + 0x50) + uVar10) {
          *(uint *)(param_2 + 0x50) = uVar9 - uVar10;
        }
        if (uVar7 < *(int *)(param_2 + 0x4c) + uVar4) {
          *(uint *)(param_2 + 0x4c) = uVar7 - uVar4;
        }
        if (uVar3 < *(int *)(param_2 + 0x50) + uVar5) {
          *(uint *)(param_2 + 0x50) = uVar3 - uVar5;
        }
        uVar6 = *(undefined4 *)(param_2 + 0x4c);
        uVar8 = *(undefined4 *)(param_2 + 0x50);
      }
      bVar2 = FUN_ram_40033de4(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                               uVar4,uVar5,uVar6,uVar8);
      return bVar2 ^ 1;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40033f10.
 * REA evidence: ev_175b8faf5e1af98f68665fd5b93ecabcdfd620015b0c090af180fa45d51e98ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40033f10(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 * 4;
  iVar1 = param_2 + 4;
  do {
    if (*(int *)(param_1 + 0x18 + param_2 * 0x5c) != 0) {
      return 0;
    }
    param_2 = param_2 + 1;
  } while (param_2 != iVar1);
  return 1;
}


/* NanoCore 1.11, address 0x40033f34.
 * REA evidence: ev_0b5414326de920d6c007fb4dee8f8f6cbcb6f0d91e89d7d2a981b2aaff22cceb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40033f34(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_40039202(*param_1,param_3,0);
  iVar1 = FUN_ram_40033f10(param_1,param_2);
  if (iVar1 != 0) {
    FUN_ram_400391f0(*param_1,0);
  }
  return 0;
}


/* NanoCore 1.11, address 0x40033f68.
 * REA evidence: ev_f756ce44d46404f3757924fbe0b741f7618ad1e1b9c0b3eacb4aea3db9e0bf09
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40033f68(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = *(uint *)(param_2 + 0x54);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  uVar8 = *(undefined4 *)(param_2 + 0x3c);
  iVar9 = *(int *)(param_2 + 0x2c);
  iVar6 = *(int *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x40);
  iVar2 = *(int *)(param_2 + 0x44);
  iVar3 = *(int *)(param_2 + 0x48);
  if (uVar10 < 10) {
    if (uVar10 < 8) {
      if (iVar1 == 0) goto LAB_ram_40033ff4;
      iVar1 = iVar9 * iVar3 + iVar2 * 4;
    }
    else {
      if (iVar1 == 0) goto LAB_ram_40033ff4;
      iVar1 = iVar9 * iVar3 + iVar2 * 3;
    }
  }
  else {
    if (9 < uVar10 - 10) {
      return 0xffffffea;
    }
    if (iVar1 == 0) goto LAB_ram_40033ff4;
    iVar1 = iVar9 * iVar3 + iVar2 * 2;
  }
  iVar6 = iVar6 + iVar1;
  uVar7 = *(undefined4 *)(param_2 + 0x4c);
  uVar8 = *(undefined4 *)(param_2 + 0x50);
LAB_ram_40033ff4:
  iVar1 = FUN_ram_40033f10(param_1,*(undefined4 *)(param_2 + 4));
  if (iVar1 != 0) {
    FUN_ram_4003915c(*param_1,uVar10);
    FUN_ram_400391f0(*param_1,1);
  }
  FUN_ram_40039196(*param_1,uVar7,uVar8,uVar4,uVar5,iVar9,iVar6,*(undefined4 *)(param_2 + 8));
  FUN_ram_40039202(*param_1,*(undefined4 *)(param_2 + 8),1);
  return 0;
}


