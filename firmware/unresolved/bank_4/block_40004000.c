/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40004000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400042fa.
 * REA evidence: ev_835cd7c8dfc25d88eda66029b1d774a8903ab9c36b16b1e8faa4bd112cf1b0ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400042fa(void)

{
  return DAT_ram_30046298;
}


/* NanoCore 1.10, address 0x40004304.
 * REA evidence: ev_298f82103b6633c6a97dc915c16f772601a6802bb2618d3d3ed0469c61c0520e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004304(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3004904c != (code *)0x0) {
    (*_DAT_ram_3004904c)();
  }
  uVar1 = FUN_ram_400002f4();
  DAT_ram_30046298 = DAT_ram_30046298 + 1;
  iVar2 = FUN_ram_40006472();
  iVar3 = *(int *)(iVar2 + 0x50) + -1;
  *(int *)(iVar2 + 0x50) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0x4c);
    *(byte *)(iVar2 + 0x3c) = *(byte *)(iVar2 + 0x3c) | 8;
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006182();
  }
  else {
    FUN_ram_400002fa(uVar1);
  }
  FUN_ram_40006924();
  return;
}


/* NanoCore 1.10, address 0x40004362.
 * REA evidence: ev_889dbb79dd4efa955c1d1657de988be8f59d257bd112f24b6cc0eaa8f2696182
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000436e) */
/* WARNING: Removing unreachable block (ram,0x4000436a) */
/* WARNING: Removing unreachable block (ram,0x4000437a) */

int FUN_ram_40004362(int param_1)

{
  if (param_1 < 0) {
    return -1;
  }
  return ((param_1 % 1000) * 1000 + 999) / 1000 + (param_1 / 1000) * 1000;
}


/* NanoCore 1.10, address 0x40004388.
 * REA evidence: ev_282ff82c495fd61c67c036788ff474af1b9e218e7f7488a8e63c90a7d363a8a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004388(void)

{
  return DAT_ram_30046298;
}


/* NanoCore 1.10, address 0x4000439a.
 * REA evidence: ev_2ab3ad62e2c4744135f3f2e23f110188ea16b69c224dd2765d7406b1751b2e26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000439a(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x4000439e.
 * REA evidence: ev_d139c8d4592283d5355e7a5ec3dcd769a9d70a08a2ddd78cc0a67d51559931a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000439e(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x400043a2.
 * REA evidence: ev_dcc455d9a673677eb441cd6c1db48d42527f56996ac56b801dacd627542fb32f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400043a2(void)

{
  undefined **ppuVar1;
  
  for (ppuVar1 = &PTR_FUN_ram_4000439a_ram_400919a4; ppuVar1 < &PTR_FUN_ram_4000439e_ram_400919c8;
      ppuVar1 = ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}


/* NanoCore 1.10, address 0x400043d0.
 * REA evidence: ev_4d4a36a0baba44dfbf382bb5f0cb41e50ba693ebeb220d8a04f9db73050553b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400043d0(void)

{
  undefined **ppuVar1;
  
  for (ppuVar1 = &PTR_FUN_ram_4000439e_ram_400919c8; ppuVar1 < &PTR_LAB_ram_40004396_ram_40091a2c;
      ppuVar1 = ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}


/* NanoCore 1.10, address 0x400043fe.
 * REA evidence: ev_b5c2a3cae9e0066edd1c95ce5e3810b452f67f1c76b5b5fc44b5e723087cb7c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400043fe(void)

{
  FUN_ram_400043d0();
  FUN_ram_4001277c();
  return;
}


/* NanoCore 1.10, address 0x4000440c.
 * REA evidence: ev_3f9c6e4210e9ac8bded2c4b8aed27e51682de14ecb579822d6e3852a77b6d19d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000440c(void)

{
  FUN_ram_400064c6(&DAT_ram_40092100,FUN_ram_400043fe,0,0x800,10,0x14);
  FUN_ram_40006640();
  return;
}


/* NanoCore 1.10, address 0x40004438.
 * REA evidence: ev_7d4d4115d54035b5278606790dd10505c79bc608cbe0d533005fd30e26c7b348
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004438(void)

{
  FUN_ram_400002f4();
  FUN_ram_4003e0bc();
  FUN_ram_40005258();
  thunk_FUN_ram_40005256();
  FUN_ram_40006b70();
  FUN_ram_4000603e();
  FUN_ram_4000440c();
  FUN_ram_40006b7e();
  FUN_ram_400046ca();
  FUN_ram_40006140();
  return 0;
}


/* NanoCore 1.10, address 0x40004468.
 * REA evidence: ev_30e5168ef487f48383bdb00db6ed71a969641513e74ecb5ad18f9e0282277834
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004468(void)

{
  FUN_ram_40004438();
  return 0;
}


/* NanoCore 1.10, address 0x40004476.
 * REA evidence: ev_52004ae69357c2e0ad74789d0f4213a0effc795c1b853884ff46b251017c2cf1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004476(undefined4 param_1)

{
  FUN_ram_40005fec(param_1,9);
  return;
}


/* NanoCore 1.10, address 0x4000447c.
 * REA evidence: ev_8e9c91e25aa2a428495ad91439eda70e0c913648d507a022d64d221e7982ae0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000447c(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_ram_40004476(param_2);
  if (iVar2 == 0) {
    FUN_ram_40005e90(param_1,9,param_2);
    uVar1 = 0;
    *(undefined2 *)(param_1 + 0x20) = param_3;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40004490.
 * REA evidence: ev_6c2876a72c6a63b0b3ca6d57a4144ffd01e14824ca571f994446dfb58a582e25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004490(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40004476(param_2);
  if (iVar2 == 0) {
    FUN_ram_40005e90(param_1,9,param_2);
    uVar1 = 0;
    *(undefined2 *)(param_1 + 0x20) = param_3;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400044c0.
 * REA evidence: ev_0647a9a2cadb737ebf039e1ce470411a8cf817c6cf910580ab0fa29ef6b142c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400044c0(int param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    iVar1 = 0;
    if (((*(ushort *)(param_1 + 0x20) & 0x10) == 0) &&
       (iVar1 = (**(code **)(param_1 + 0x30))(), iVar1 == 0)) {
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x10;
    }
    return iVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400044f8.
 * REA evidence: ev_2257c34620146313485c8a842b208eb853c3608a5a1167976acaece8b9f1f749
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400044f8(int param_1,ushort param_2)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x20) & 0x10) == 0) {
    if ((*(code **)(param_1 + 0x30) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x30))(), iVar1 != 0)) {
      return iVar1;
    }
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x10;
  }
  if (((*(ushort *)(param_1 + 0x20) & 8) == 0) ||
     (iVar1 = -7, (*(ushort *)(param_1 + 0x22) & 8) == 0)) {
    if (*(code **)(param_1 + 0x34) == (code *)0x0) {
      *(ushort *)(param_1 + 0x22) = param_2 & 0xf0f;
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x34))(param_1);
      if ((iVar1 != 0) && (iVar1 != -6)) {
        return iVar1;
      }
    }
    *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) | 8;
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x01';
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40004574.
 * REA evidence: ev_32f372791f78be292a329a93b42fe86416554f7ab81600fc9d94a8f5d6947df9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40004574(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\0') {
    return -1;
  }
  *(char *)(param_1 + 0x24) = cVar1 + -1;
  iVar2 = 0;
  if (cVar1 == '\x01') {
    if ((*(code **)(param_1 + 0x38) == (code *)0x0) ||
       (iVar2 = (**(code **)(param_1 + 0x38))(), iVar2 == 0)) {
      iVar2 = 0;
    }
    else if (iVar2 != -6) {
      return iVar2;
    }
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x400045b8.
 * REA evidence: ev_be80e1a6cdcd281b84642bacfca993e9d0cf53c70018a5a7036307d3702812ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400045b8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400045d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x3c))();
      return uVar1;
    }
    uVar1 = 0xfffffffa;
  }
  FUN_ram_40005014(uVar1);
  return 0;
}


/* NanoCore 1.10, address 0x400045de.
 * REA evidence: ev_894e80e03e87792aa0622693a7b5600aa12be59e4b36c18018feee7ca355a89b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400045de(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400045fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x40))();
      return uVar1;
    }
    uVar1 = 0xfffffffa;
  }
  FUN_ram_40005014(uVar1);
  return 0;
}


/* NanoCore 1.10, address 0x40004604.
 * REA evidence: ev_998de8bf1da27fe3582d8c513d7b34b184dd13c15e9e5d3897b03e19227c624c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004604(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40004608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x44))();
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.10, address 0x4000460e.
 * REA evidence: ev_e8f349cf7de4dbac94bfdec31b694d723aca6c1fc444658c25c972b0982ae2e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000460e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return 0;
}


/* NanoCore 1.10, address 0x40004614.
 * REA evidence: ev_db5127db66e0d53852ee20b47d8a09c2fc843403fe7274fc22367c5c240a8c04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004614(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_LOOP_ram_3004629c;
  puVar1 = (undefined4 *)(PTR_LOOP_ram_3004629c + 4);
  PTR_LOOP_ram_3004629c = (undefined *)(param_1 + 0x1c);
  *puVar1 = (undefined *)(param_1 + 0x1c);
  *(undefined **)(param_1 + 0x1c) = puVar2;
  *(undefined ***)(param_1 + 0x20) = &PTR_LOOP_ram_3004629c;
  return;
}


/* NanoCore 1.10, address 0x4000462c.
 * REA evidence: ev_c26cf52c87a59beef7ac382f95c97b33e72a264a5765a72d0c82b72a9bcc95e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_4000462c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = PTR_LOOP_ram_3004629c;
  puVar2 = (undefined *)0x0;
  if ((undefined **)PTR_LOOP_ram_3004629c != &PTR_LOOP_ram_3004629c) {
    FUN_ram_400002f4();
    puVar2 = puVar1 + -0x1c;
    iVar3 = *(int *)puVar1;
    piVar4 = *(int **)(puVar1 + 4);
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *(undefined **)(puVar1 + 4) = puVar1;
    *(undefined **)puVar1 = puVar1;
    FUN_ram_400002fa();
  }
  return puVar2;
}


/* NanoCore 1.10, address 0x40004668.
 * REA evidence: ev_4eb95c718b644c5ab74c97ea0acdf7d62a74bfddf715289292de94fccfc3b8e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004668(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  do {
    iVar1 = 0;
    do {
      pcVar3 = *(code **)(iVar1 * 4 + 0x300490e0);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
LAB_ram_40004694:
    iVar1 = FUN_ram_4000462c();
    if (iVar1 != 0) {
      pcVar3 = *(code **)(iVar1 + 0x88);
      iVar2 = FUN_ram_40005fe4();
      if (iVar2 == 1) break;
      if (pcVar3 != (code *)0x0) goto LAB_ram_400046b0;
      goto LAB_ram_400046b4;
    }
  } while( true );
  FUN_ram_40005f04(iVar1);
  if (pcVar3 != (code *)0x0) {
LAB_ram_400046b0:
    (*pcVar3)(iVar1);
LAB_ram_400046b4:
    if (iVar2 == 0) {
      FUN_ram_400056c4(*(undefined4 *)(iVar1 + 0x30));
      FUN_ram_40005fa8(iVar1);
    }
  }
  goto LAB_ram_40004694;
}


/* NanoCore 1.10, address 0x400046ca.
 * REA evidence: ev_a54762060240859be325671539bac13465dcc6504c58610a75c690f1af29e1a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400046ca(void)

{
  undefined1 auStack_20 [24];
  
  FUN_ram_4000560c(auStack_20,&DAT_ram_40092108,0);
  FUN_ram_4000643c(0x30049050,auStack_20,FUN_ram_40004668,0,0x300490f0,0x400,0x1f,0x20);
  FUN_ram_40006640(0x30049050);
  return;
}


/* NanoCore 1.10, address 0x4000471a.
 * REA evidence: ev_aafdccba2caf6041eba15aae1f4cf7eb959ba0e60758bdbcf6acaf0845fc240a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000471a(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  while (param_1 != (int *)*param_1) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
    FUN_ram_400065e2(iVar2 + -0x1c);
    FUN_ram_400002fa(uVar1);
  }
  return;
}


/* NanoCore 1.10, address 0x40004752.
 * REA evidence: ev_3e55553e2f19585c60c1f7d70f5c5ffea2b704e96d977590898e254b602a4e55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004752(int param_1)

{
  FUN_ram_400065e2(param_1 + -0x1c);
  return;
}


/* NanoCore 1.10, address 0x40004758.
 * REA evidence: ev_5f83b3f19d8352f1fcac6272e24cd6167afd39864113064d31316e15b59591a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004758(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_ram_40006520(param_2);
  if (param_3 != 0) {
    if (param_3 != 1) {
      return;
    }
    for (puVar2 = (undefined4 *)*param_1; param_1 != puVar2; puVar2 = (undefined4 *)*puVar2) {
      if (*(byte *)(param_2 + 0x3d) < *(byte *)((int)puVar2 + 0x21)) {
        piVar1 = (int *)puVar2[1];
        *piVar1 = param_2 + 0x1c;
        *(int **)(param_2 + 0x20) = piVar1;
        puVar2[1] = param_2 + 0x1c;
        *(undefined4 **)(param_2 + 0x1c) = puVar2;
        return;
      }
    }
  }
  piVar1 = (int *)param_1[1];
  *piVar1 = param_2 + 0x1c;
  *(int **)(param_2 + 0x20) = piVar1;
  param_1[1] = param_2 + 0x1c;
  *(undefined4 **)(param_2 + 0x1c) = param_1;
  return;
}


/* NanoCore 1.10, address 0x400047b4.
 * REA evidence: ev_f9d9150f76d2d1b04d10b47a1ad095c271c801bcbe907418494e90f8cc1fbe9a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400047b4(int param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4)

{
  FUN_ram_40005e90(param_1,2,param_2);
  *(undefined2 *)(param_1 + 0x24) = param_3;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  return 0;
}


/* NanoCore 1.10, address 0x400047e8.
 * REA evidence: ev_031aaf59627b5ebc18e21c366c8d11dea4c63b8e11481b932ddd3fc9c6a78a37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400047e8(undefined4 param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005f3a(2,param_1);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x1c;
    *(undefined2 *)(iVar1 + 0x24) = param_2;
    *(undefined1 *)(iVar1 + 0x11) = param_3;
  }
  return;
}


/* NanoCore 1.10, address 0x40004816.
 * REA evidence: ev_9e52e4ae8371bfb7c3547c6629be1073844c64c0ae59c5655216dc9beb2f6f03
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004816(int param_1)

{
  FUN_ram_4000471a(param_1 + 0x1c);
  FUN_ram_40005fa8(param_1);
  return 0;
}


/* NanoCore 1.10, address 0x40004832.
 * REA evidence: ev_c81ba50e5167e3a92e7ed327b4d167f3367ecbef3efd04849020317e42d2e9cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004832(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  if (_DAT_ram_300495c8 != (code *)0x0) {
    (*_DAT_ram_300495c8)();
  }
  uVar1 = FUN_ram_400002f4();
  if (*(short *)(param_1 + 0x24) == 0) {
    if (aiStack_24[0] == 0) {
      FUN_ram_400002fa();
      return -2;
    }
    iVar2 = FUN_ram_40006472();
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_40004758(param_1 + 0x1c,iVar2,*(undefined1 *)(param_1 + 0x11));
    if (0 < aiStack_24[0]) {
      FUN_ram_400068b6(iVar2 + 0x54,0,aiStack_24);
      FUN_ram_40006792(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006182();
    if (*(int *)(iVar2 + 0x38) != 0) {
      return *(int *)(iVar2 + 0x38);
    }
  }
  else {
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
    FUN_ram_400002fa();
  }
  if (_DAT_ram_300495c4 != (code *)0x0) {
    (*_DAT_ram_300495c4)(param_1);
  }
  return 0;
}


/* NanoCore 1.10, address 0x400048d0.
 * REA evidence: ev_09e574f533bde965b01ed2b1530e6f69918d3f523d162ace99a8806904dba3a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400048d0(undefined4 param_1)

{
  FUN_ram_40004832(param_1,0);
  return;
}


/* NanoCore 1.10, address 0x400048d4.
 * REA evidence: ev_954bb219df8d5d3082444aefc5c42a2220cfb9de04e42c7564c96b0e5872b53b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400048d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (_DAT_ram_300495c0 != (code *)0x0) {
    (*_DAT_ram_300495c0)();
  }
  uVar2 = FUN_ram_400002f4();
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 == (int *)(param_1 + 0x1c)) {
    if (*(short *)(param_1 + 0x24) == -1) {
      FUN_ram_400002fa();
      return -3;
    }
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
    iVar1 = 0;
  }
  else {
    FUN_ram_40004752(piVar3);
    iVar1 = 1;
  }
  FUN_ram_400002fa(uVar2);
  if (iVar1 == 1) {
    FUN_ram_40006182();
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4000493c.
 * REA evidence: ev_c00f374094a32b7cc185480a3ba734d9909a940a541cfd87041ef0fddab4c07e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000493c(int param_1,undefined4 param_2)

{
  FUN_ram_40005e90(param_1,3,param_2);
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x24) = 0xff0001;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return 0;
}


/* NanoCore 1.10, address 0x40004970.
 * REA evidence: ev_9f7f958f4266598c896462eba1f8c3ecfa6917f172452953f642a46c355fb9c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004970(int param_1)

{
  FUN_ram_4000471a(param_1 + 0x1c);
  FUN_ram_40005f04(param_1);
  return 0;
}


/* NanoCore 1.10, address 0x4000498c.
 * REA evidence: ev_94fdd8dbb526ac2407b41b31dd6ce6c4256e9f7ac295c0682d5ee80a9da1b886
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000498c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005f3a(3,param_1);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x1c;
    *(undefined4 *)(iVar1 + 0x24) = 0xff0001;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined1 *)(iVar1 + 0x11) = 1;
  }
  return;
}


/* NanoCore 1.10, address 0x400049ba.
 * REA evidence: ev_13f6c7ae9f938406c394589a7e2cf4bcab65cacc86ba5953daba81b9e221089b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400049ba(int param_1)

{
  FUN_ram_4000471a(param_1 + 0x1c);
  FUN_ram_40005fa8(param_1);
  return 0;
}


/* NanoCore 1.10, address 0x400049d6.
 * REA evidence: ev_b49945a7ff9163ad6b983318c484a03c7e1f232d412018b7e9a30d1629b3e124
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400049d6(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  iVar1 = FUN_ram_40006472();
  uVar2 = FUN_ram_400002f4();
  if (_DAT_ram_300495c8 != (code *)0x0) {
    (*_DAT_ram_300495c8)(param_1);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  if (iVar3 != iVar1) {
    if (*(short *)(param_1 + 0x24) == 0) {
      if (aiStack_24[0] == 0) {
        *(undefined4 *)(iVar1 + 0x38) = 0xfffffffe;
        FUN_ram_400002fa(uVar2);
        return -2;
      }
      if (*(byte *)(iVar1 + 0x3d) < *(byte *)(iVar3 + 0x3d)) {
        FUN_ram_4000666e(iVar3,2,iVar1 + 0x3d);
      }
      FUN_ram_40004758(param_1 + 0x1c,iVar1,*(undefined1 *)(param_1 + 0x11));
      if (0 < aiStack_24[0]) {
        FUN_ram_400068b6(iVar1 + 0x54,0,aiStack_24);
        FUN_ram_40006792(iVar1 + 0x54);
      }
      FUN_ram_400002fa(uVar2);
      FUN_ram_40006182();
      if (*(int *)(iVar1 + 0x38) != 0) {
        return *(int *)(iVar1 + 0x38);
      }
      uVar2 = FUN_ram_400002f4();
      goto LAB_ram_40004a1c;
    }
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
    *(int *)(param_1 + 0x28) = iVar1;
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(iVar1 + 0x3d);
  }
  if (*(char *)(param_1 + 0x27) == -1) {
    FUN_ram_400002fa(uVar2);
    return -3;
  }
  *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + '\x01';
LAB_ram_40004a1c:
  FUN_ram_400002fa(uVar2);
  if (_DAT_ram_300495c4 != (code *)0x0) {
    (*_DAT_ram_300495c4)(param_1);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40004ac8.
 * REA evidence: ev_90d121e07eb102b67cc1726ee70e9f5bc96c698207bb88b3791f870797880424
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004ac8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = FUN_ram_40006472();
  uVar3 = FUN_ram_400002f4();
  if (_DAT_ram_300495c0 != (code *)0x0) {
    (*_DAT_ram_300495c0)(param_1);
  }
  if (*(int *)(param_1 + 0x28) != iVar2) {
    *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
    FUN_ram_400002fa(uVar3);
    return -1;
  }
  cVar1 = *(char *)(param_1 + 0x27);
  *(char *)(param_1 + 0x27) = cVar1 + -1;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x26) != *(char *)(iVar2 + 0x3d)) {
      FUN_ram_4000666e(iVar2,2,param_1 + 0x26);
    }
    piVar4 = *(int **)(param_1 + 0x1c);
    if (piVar4 == (int *)(param_1 + 0x1c)) {
      if (*(short *)(param_1 + 0x24) != -1) {
        *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x26) = 0xff;
        goto LAB_ram_40004b96;
      }
    }
    else {
      *(int **)(param_1 + 0x28) = piVar4 + -7;
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)((int)piVar4 + 0x21);
      if (*(char *)(param_1 + 0x27) != -1) {
        *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + '\x01';
        FUN_ram_40004752();
        iVar2 = 1;
        goto LAB_ram_40004b66;
      }
    }
    FUN_ram_400002fa(uVar3);
    iVar2 = -3;
  }
  else {
LAB_ram_40004b96:
    iVar2 = 0;
LAB_ram_40004b66:
    FUN_ram_400002fa(uVar3);
    if (iVar2 == 1) {
      FUN_ram_40006182();
      iVar2 = 0;
    }
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x40004ba4.
 * REA evidence: ev_d6f75eaa1c185202ba707c75cbee05ef21a3c77f9718698ff01f65d61a3d5a9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004ba4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005f3a(4,param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x20) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x1c;
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40004bce.
 * REA evidence: ev_be301518d3be08ffb08f373fefb345026289a0dde09d8ad9a2d2cc0c3a1662bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004bce(int param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  
  iVar4 = -1;
  if (param_2 != 0) {
    uVar5 = FUN_ram_400002f4();
    pcVar3 = _DAT_ram_300495c0;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_2;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(param_1);
    }
    iVar4 = 0;
    piVar7 = (int *)*(int *)(param_1 + 0x1c);
joined_r0x40004c06:
    while (piVar2 = piVar7, (int *)(param_1 + 0x1c) != piVar2) {
      bVar1 = *(byte *)(piVar2 + 0xb);
      if ((bVar1 & 1) == 0) goto LAB_ram_40004c56;
      piVar7 = (int *)*piVar2;
      if (piVar2[10] == (*(uint *)(param_1 + 0x24) & piVar2[10])) goto LAB_ram_40004c22;
    }
    FUN_ram_400002fa(uVar5);
    if (iVar4 == 1) {
      FUN_ram_40006182();
      iVar4 = 0;
    }
  }
  return iVar4;
LAB_ram_40004c56:
  if ((bVar1 & 2) == 0) {
    FUN_ram_400002fa(uVar5);
    return -10;
  }
  piVar7 = (int *)*piVar2;
  uVar6 = piVar2[10] & *(uint *)(param_1 + 0x24);
  if (uVar6 != 0) {
    piVar2[10] = uVar6;
LAB_ram_40004c22:
    if ((bVar1 & 4) != 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & ~piVar2[10];
    }
    FUN_ram_400065e2(piVar2 + -7);
    iVar4 = 1;
  }
  goto joined_r0x40004c06;
}


/* NanoCore 1.10, address 0x40004c86.
 * REA evidence: ev_faab46b053949db6ed49712a227aa91652c0dab891d54a60c74d7aba49e26582
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004c86(int param_1,uint param_2,byte param_3,int param_4,uint *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int aiStack_24 [2];
  
  if (param_2 == 0) {
    return -1;
  }
  aiStack_24[0] = param_4;
  iVar2 = FUN_ram_40006472();
  pcVar1 = _DAT_ram_300495c8;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  uVar3 = FUN_ram_400002f4();
  if ((param_3 & 1) == 0) {
    if (((param_3 & 2) != 0) && ((*(uint *)(param_1 + 0x24) & param_2) != 0)) goto LAB_ram_40004cd2;
  }
  else if ((*(uint *)(param_1 + 0x24) & param_2) == param_2) {
LAB_ram_40004cd2:
    if (param_5 != (uint *)0x0) {
      *param_5 = *(uint *)(param_1 + 0x24) & param_2;
    }
    uVar4 = *(uint *)(param_1 + 0x24);
    *(byte *)(iVar2 + 0x48) = param_3;
    *(uint *)(iVar2 + 0x44) = uVar4 & param_2;
    if ((param_3 & 4) != 0) {
      *(uint *)(param_1 + 0x24) = ~param_2 & uVar4;
    }
    goto LAB_ram_40004d00;
  }
  if (aiStack_24[0] == 0) {
    *(undefined4 *)(iVar2 + 0x38) = 0xfffffffe;
    FUN_ram_400002fa(uVar3);
    return -2;
  }
  *(uint *)(iVar2 + 0x44) = param_2;
  *(byte *)(iVar2 + 0x48) = param_3;
  FUN_ram_40004758(param_1 + 0x1c,iVar2,*(undefined1 *)(param_1 + 0x11));
  if (0 < aiStack_24[0]) {
    FUN_ram_400068b6(iVar2 + 0x54,0,aiStack_24);
    FUN_ram_40006792(iVar2 + 0x54);
  }
  FUN_ram_400002fa(uVar3);
  FUN_ram_40006182();
  if (*(int *)(iVar2 + 0x38) != 0) {
    return *(int *)(iVar2 + 0x38);
  }
  uVar3 = FUN_ram_400002f4();
  if (param_5 != (uint *)0x0) {
    *param_5 = *(uint *)(iVar2 + 0x44);
  }
LAB_ram_40004d00:
  FUN_ram_400002fa(uVar3);
  if (_DAT_ram_300495c4 != (code *)0x0) {
    (*_DAT_ram_300495c4)(param_1);
  }
  return *(int *)(iVar2 + 0x38);
}


/* NanoCore 1.10, address 0x40004d9a.
 * REA evidence: ev_8af768cb46a9171f93ef66c7bc8cd12e1850261de5b5e5a27c8d38e3a440c00d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004d9a(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_300494f8 = DAT_ram_300494f8 + '\x01';
  if (_DAT_ram_300494f0 != (code *)0x0) {
    (*_DAT_ram_300494f0)();
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.10, address 0x40004dcc.
 * REA evidence: ev_6a751c061147005f8f25547bc35db72091322ade597729ced3b83079494f48c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004dcc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  if (_DAT_ram_300494f4 != (code *)0x0) {
    (*_DAT_ram_300494f4)();
  }
  DAT_ram_300494f8 = DAT_ram_300494f8 + -1;
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.10, address 0x40004dfe.
 * REA evidence: ev_353db1e010e8cc1133fc452ddd713d4309982b26bacbd7601e086ce0823b076b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40004dfe(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_300494f8;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.10, address 0x40004e1e.
 * REA evidence: ev_bc5b90b414d255f5afd935e71c5e0dedd434a3f186e3af334c08ffd93b6f74d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40004efe) */

char * FUN_ram_40004e1e(char *param_1,char *param_2,uint param_3,int param_4,int param_5,int param_6
                       ,uint param_7,int param_8)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char acStack_11 [17];
  
  pcVar9 = s_0123456789abcdef_ram_40092298;
  if ((param_7 & 0x40) != 0) {
    pcVar9 = s_0123456789ABCDEF_ram_40092284;
  }
  uVar1 = param_7 & 0x10;
  if (uVar1 == 0) {
    cVar2 = ' ';
    if ((param_7 & 1) != 0) {
      cVar2 = '0';
    }
  }
  else {
    param_7 = param_7 & 0xfffffffe;
    cVar2 = ' ';
  }
  if ((param_7 & 2) == 0) {
    iVar3 = 0;
LAB_ram_40004e6c:
    if (param_3 == 0) {
      acStack_11[1] = 0x30;
      iVar7 = 1;
      goto LAB_ram_40004e78;
    }
  }
  else {
    if (param_8 == 0x68) {
      if (-1 < (short)param_3) goto LAB_ram_40004f18;
      param_3 = param_3 * -0x10000 >> 0x10;
      iVar3 = 0x2d;
      goto LAB_ram_40004e6c;
    }
    if (-1 < (int)param_3) {
LAB_ram_40004f18:
      iVar3 = 0x2b;
      if ((param_7 & 4) == 0) {
        iVar3 = ((param_7 & 0xf) >> 3) << 5;
      }
      goto LAB_ram_40004e6c;
    }
    param_3 = -param_3;
    iVar3 = 0x2d;
  }
  iVar8 = 0;
  do {
    if (param_4 == 10) {
      uVar6 = param_3 % 10;
      param_3 = param_3 / 10;
    }
    else {
      uVar6 = param_3 & 0xf;
      param_3 = param_3 >> 4;
    }
    iVar7 = iVar8 + 1;
    acStack_11[iVar8 + 1] = pcVar9[uVar6];
    iVar8 = iVar7;
  } while (param_3 != 0);
LAB_ram_40004e78:
  iVar8 = param_6;
  if (param_6 <= iVar7) {
    iVar8 = iVar7;
  }
  param_5 = param_5 - iVar8;
  if ((param_7 & 0x11) == 0) {
    pcVar9 = param_1;
    if ((iVar3 != 0) && (0 < param_5)) {
      param_5 = param_5 + -1;
    }
    for (; 0 < (int)(param_1 + (param_5 - (int)pcVar9)); pcVar9 = pcVar9 + 1) {
      if (pcVar9 < param_2) {
        *pcVar9 = ' ';
      }
    }
    iVar4 = param_5;
    if (param_5 < 0) {
      iVar4 = 0;
    }
    param_1 = param_1 + iVar4;
    param_5 = (param_5 + -1) - iVar4;
  }
  if (iVar3 != 0) {
    if (param_1 < param_2) {
      *param_1 = (char)iVar3;
    }
    param_5 = param_5 + -1;
    param_1 = param_1 + 1;
  }
  pcVar9 = param_1;
  if (uVar1 == 0) {
    for (; 0 < (int)(param_1 + (param_5 - (int)pcVar9)); pcVar9 = pcVar9 + 1) {
      if (pcVar9 < param_2) {
        *pcVar9 = cVar2;
      }
    }
    iVar3 = param_5;
    if (param_5 < 0) {
      iVar3 = 0;
    }
    param_1 = param_1 + iVar3;
    param_5 = (param_5 + -1) - iVar3;
    pcVar9 = param_1;
  }
  for (; iVar7 < (int)(pcVar9 + (iVar8 - (int)param_1)); param_1 = param_1 + 1) {
    if (param_1 < param_2) {
      *param_1 = '0';
    }
  }
  iVar3 = 0;
  if (iVar7 <= iVar8) {
    iVar3 = iVar8 - iVar7;
  }
  pcVar9 = pcVar9 + iVar3;
  while ((pcVar5 = pcVar9, iVar7 + -1 != -1 && (param_6 != 0))) {
    if (pcVar9 < param_2) {
      *pcVar9 = acStack_11[iVar7];
    }
    pcVar9 = pcVar9 + 1;
    iVar7 = iVar7 + -1;
  }
  for (; 0 < (int)(pcVar9 + (param_5 - (int)pcVar5)); pcVar5 = pcVar5 + 1) {
    if (pcVar5 < param_2) {
      *pcVar5 = ' ';
    }
  }
  if (param_5 < 0) {
    param_5 = 0;
  }
  return pcVar9 + param_5;
}


/* NanoCore 1.10, address 0x40004fd2.
 * REA evidence: ev_b9e4f0dd50a152e5a09198db1fb2ba1f54d6de780343b6b4a038b9232136389c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004fd2(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006472();
  if (iVar1 != 0) {
    FUN_ram_400049d6(0x30049500,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40004ff4.
 * REA evidence: ev_598cba315edd944108ce8f923b8a4b1c8cc05c59d2d91b4ad5239dea0f4dfd7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004ff4(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006472();
  if (iVar1 != 0) {
    FUN_ram_40004ac8(0x30049500);
    return;
  }
  return;
}


