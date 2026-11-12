/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40004000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40004346.
 * REA evidence: ev_88ca7bb9807ad041e98147d83fdc3febb8d55494b93297d17f26c03e2fed3e19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004346(void)

{
  return DAT_ram_3004a898;
}


/* NanoCore 1.12, address 0x40004350.
 * REA evidence: ev_67e80f7bed682c157c59e7e1eee92824ddb22ee8d1b12b58ddf387af3b813e13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004350(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3004d64c != (code *)0x0) {
    (*_DAT_ram_3004d64c)();
  }
  uVar1 = FUN_ram_400002f4();
  DAT_ram_3004a898 = DAT_ram_3004a898 + 1;
  iVar2 = FUN_ram_40006382();
  iVar3 = *(int *)(iVar2 + 0x50) + -1;
  *(int *)(iVar2 + 0x50) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0x4c);
    *(byte *)(iVar2 + 0x3c) = *(byte *)(iVar2 + 0x3c) | 8;
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006092();
  }
  else {
    FUN_ram_400002fa(uVar1);
  }
  FUN_ram_40006834();
  return;
}


/* NanoCore 1.12, address 0x400043ae.
 * REA evidence: ev_d2c9fef75b239392e053629e89a1e5e364ece80f1845eddd2e7b93f89d448ff8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400043ba) */
/* WARNING: Removing unreachable block (ram,0x400043b6) */
/* WARNING: Removing unreachable block (ram,0x400043c6) */

int FUN_ram_400043ae(int param_1)

{
  if (param_1 < 0) {
    return -1;
  }
  return ((param_1 % 1000) * 1000 + 999) / 1000 + (param_1 / 1000) * 1000;
}


/* NanoCore 1.12, address 0x400043d4.
 * REA evidence: ev_5f108bc77c01d4f893697d6e02342283bb20b010193c4d3cb0502973429c04c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400043d4(void)

{
  return DAT_ram_3004a898;
}


/* NanoCore 1.12, address 0x400043e6.
 * REA evidence: ev_3f55e6f66048532101846ef9ad5aca0e6deb3d6cb78fa24f2dc3daca381c1693
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400043e6(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x400043ea.
 * REA evidence: ev_09d06530eaa4e3360087e9743c70685070e5f52b2f8c9cc71a2f39016cdbcd43
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400043ea(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x400043ee.
 * REA evidence: ev_782c43d9c3aef24debdd707355b7aee8d6e2975514de3533162b68656bc950e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400043ee(void)

{
  undefined **ppuVar1;
  
  for (ppuVar1 = &PTR_FUN_ram_400043e6_ram_40095854; ppuVar1 < &PTR_FUN_ram_400043ea_ram_40095878;
      ppuVar1 = ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}


/* NanoCore 1.12, address 0x4000441c.
 * REA evidence: ev_a9fe67144bfb6594adfe5d11014313087adf1ef8af36999ac3de73ec6ab488e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000441c(void)

{
  undefined **ppuVar1;
  
  for (ppuVar1 = &PTR_FUN_ram_400043ea_ram_40095878; ppuVar1 < &PTR_LAB_ram_400043e2_ram_400958dc;
      ppuVar1 = ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}


/* NanoCore 1.12, address 0x4000444a.
 * REA evidence: ev_42248ae12dffa3441b3773b61dbc324b466ced1a6634a70b5bb149a642ce0e46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000444a(void)

{
  FUN_ram_4000441c();
  FUN_ram_4001367a();
  return;
}


/* NanoCore 1.12, address 0x40004458.
 * REA evidence: ev_e0726d3743408c5fecc6621611dff1d3e79d0bc10bf85fc67d8dcb1125ff6582
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004458(void)

{
  FUN_ram_400063d6(&DAT_ram_40095fe8,FUN_ram_4000444a,0,0x800,10,0x14);
  FUN_ram_40006550();
  return;
}


/* NanoCore 1.12, address 0x40004484.
 * REA evidence: ev_4f0f65a631e6c10fafe18987534057d39f1199fff348ec526b5889e089acd32e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004484(void)

{
  FUN_ram_400002f4();
  FUN_ram_4003f0a2();
  FUN_ram_4000518e();
  thunk_FUN_ram_4000518c();
  FUN_ram_40006a80();
  FUN_ram_40005f4e();
  FUN_ram_40004458();
  FUN_ram_40006a8e();
  FUN_ram_40004716();
  FUN_ram_40006050();
  return 0;
}


/* NanoCore 1.12, address 0x400044b4.
 * REA evidence: ev_098a70cc64f46bec9798fad1b20f0a763543afb772dd594dc96c921f0256fb5a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400044b4(void)

{
  FUN_ram_40004484();
  return 0;
}


/* NanoCore 1.12, address 0x400044c2.
 * REA evidence: ev_76dca5462b2ac1bd6861d795ba6a028e90fcc7077c50577aef5d41e1cb818091
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400044c2(undefined4 param_1)

{
  FUN_ram_40005efc(param_1,9);
  return;
}


/* NanoCore 1.12, address 0x400044c8.
 * REA evidence: ev_dfca9e56901b00065f9da07a456bbf4b5ff861a7e19a534cbd7f7bdff41ea383
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400044c8(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_ram_400044c2(param_2);
  if (iVar2 == 0) {
    FUN_ram_40005da0(param_1,9,param_2);
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


/* NanoCore 1.12, address 0x400044dc.
 * REA evidence: ev_d673083e2f88ec3706caba7896f3bc8c9e65714963a7e2db84c949d5c5e10a86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400044dc(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_400044c2(param_2);
  if (iVar2 == 0) {
    FUN_ram_40005da0(param_1,9,param_2);
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


/* NanoCore 1.12, address 0x4000450c.
 * REA evidence: ev_ac8d0eed3d03236f36e0b4c1d9ee0c131dba1d9e8790923c13236b6b59cea276
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000450c(int param_1)

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


/* NanoCore 1.12, address 0x40004544.
 * REA evidence: ev_e4a7c8b548be980ca743431df12d95a4ccbf7158d732e6dbe90665230aa0fba2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40004544(int param_1,ushort param_2)

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


/* NanoCore 1.12, address 0x400045c0.
 * REA evidence: ev_50b7754eaec0aab81641afda4550cf51026296222ee3c13f041f383b089764ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400045c0(int param_1)

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


/* NanoCore 1.12, address 0x40004604.
 * REA evidence: ev_3f3ca5f4ff4275cb98cbe0651fa2958ebb30925f12de34914255771c7806b14b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004604(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40004624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x3c))();
      return uVar1;
    }
    uVar1 = 0xfffffffa;
  }
  FUN_ram_40004f4a(uVar1);
  return 0;
}


/* NanoCore 1.12, address 0x4000462a.
 * REA evidence: ev_6734d9ee58b695a9d647a13fb0caca8b70383faf17d795e3d6069f7757c2ea27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000462a(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4000464a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x40))();
      return uVar1;
    }
    uVar1 = 0xfffffffa;
  }
  FUN_ram_40004f4a(uVar1);
  return 0;
}


/* NanoCore 1.12, address 0x40004650.
 * REA evidence: ev_9baeabc436ee5c5729ef653280562fb8d930d45806dc58fe3aa50fae464d5ed3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004650(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40004654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x44))();
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.12, address 0x4000465a.
 * REA evidence: ev_c965082fc61aadb3b381a6409b4273fe3095ab4f5fca547f371f4b8a3db0419d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000465a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return 0;
}


/* NanoCore 1.12, address 0x40004660.
 * REA evidence: ev_055e1188a89ef5791f7590c39f9c07d6ecba481f81774be37362720cdd977a13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004660(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_LOOP_ram_3004a89c;
  puVar1 = (undefined4 *)(PTR_LOOP_ram_3004a89c + 4);
  PTR_LOOP_ram_3004a89c = (undefined *)(param_1 + 0x1c);
  *puVar1 = (undefined *)(param_1 + 0x1c);
  *(undefined **)(param_1 + 0x1c) = puVar2;
  *(undefined ***)(param_1 + 0x20) = &PTR_LOOP_ram_3004a89c;
  return;
}


/* NanoCore 1.12, address 0x40004678.
 * REA evidence: ev_2f8876a17a944cbc66e9a6b42aa42b353008dc60111b0c389ac369ab0137d4b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_40004678(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = PTR_LOOP_ram_3004a89c;
  puVar2 = (undefined *)0x0;
  if ((undefined **)PTR_LOOP_ram_3004a89c != &PTR_LOOP_ram_3004a89c) {
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


/* NanoCore 1.12, address 0x400046b4.
 * REA evidence: ev_3bcd9b568ab3d8f3196b40bba7be0110079488b0141d8373ebf6c36ca8165869
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400046b4(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  do {
    iVar1 = 0;
    do {
      pcVar3 = *(code **)(iVar1 * 4 + 0x3004d6e0);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
LAB_ram_400046e0:
    iVar1 = FUN_ram_40004678();
    if (iVar1 != 0) {
      pcVar3 = *(code **)(iVar1 + 0x88);
      iVar2 = FUN_ram_40005ef4();
      if (iVar2 == 1) break;
      if (pcVar3 != (code *)0x0) goto LAB_ram_400046fc;
      goto LAB_ram_40004700;
    }
  } while( true );
  FUN_ram_40005e14(iVar1);
  if (pcVar3 != (code *)0x0) {
LAB_ram_400046fc:
    (*pcVar3)(iVar1);
LAB_ram_40004700:
    if (iVar2 == 0) {
      FUN_ram_400055d4(*(undefined4 *)(iVar1 + 0x30));
      FUN_ram_40005eb8(iVar1);
    }
  }
  goto LAB_ram_400046e0;
}


/* NanoCore 1.12, address 0x40004716.
 * REA evidence: ev_a8a627e9e8d924f73d322c38c23afc4194bd410eeb85e691976df5f65101b37e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004716(void)

{
  undefined1 auStack_20 [24];
  
  FUN_ram_40005542(auStack_20,&DAT_ram_40095ff0,0);
  FUN_ram_4000634c(0x3004d650,auStack_20,FUN_ram_400046b4,0,0x3004d6f0,0x400,0x1f,0x20);
  FUN_ram_40006550(0x3004d650);
  return;
}


/* NanoCore 1.12, address 0x40004766.
 * REA evidence: ev_850b5358729704ea458af0ab4cd3118872bfd96b374253f56d1926b32ebc81a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004766(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  while (param_1 != (int *)*param_1) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
    FUN_ram_400064f2(iVar2 + -0x1c);
    FUN_ram_400002fa(uVar1);
  }
  return;
}


/* NanoCore 1.12, address 0x4000479e.
 * REA evidence: ev_b6064f3cb0e90a9ee8bc5d7842b7ad630642f2b59640631e9e723208c4f29fec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000479e(int param_1)

{
  FUN_ram_400064f2(param_1 + -0x1c);
  return;
}


/* NanoCore 1.12, address 0x400047a4.
 * REA evidence: ev_f1e589b2fdf6d19061a431db68d69ae5de136153205ea6cc081e47d56e87e573
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400047a4(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_ram_40006430(param_2);
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


/* NanoCore 1.12, address 0x40004800.
 * REA evidence: ev_5320bf391b8e38d904b59513e8758e0a06821e373395347dfd441bec02125e7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004800(int param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4)

{
  FUN_ram_40005da0(param_1,2,param_2);
  *(undefined2 *)(param_1 + 0x24) = param_3;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  return 0;
}


/* NanoCore 1.12, address 0x40004834.
 * REA evidence: ev_a59555bc3562f2aa4755f502b2dd150d8a88cda744a76ebe9adababce0af554f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004834(undefined4 param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005e4a(2,param_1);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x1c;
    *(undefined2 *)(iVar1 + 0x24) = param_2;
    *(undefined1 *)(iVar1 + 0x11) = param_3;
  }
  return;
}


/* NanoCore 1.12, address 0x40004862.
 * REA evidence: ev_9901707215005210d7bb911dea81251ebb682095eb9c49c68ebc434dc4e69089
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004862(int param_1)

{
  FUN_ram_40004766(param_1 + 0x1c);
  FUN_ram_40005eb8(param_1);
  return 0;
}


/* NanoCore 1.12, address 0x4000487e.
 * REA evidence: ev_aa9a916cee6f69c657a7bc47692e3acbd9395201efec83197fd29c8f2b95752f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4000487e(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  if (_DAT_ram_3004dbc8 != (code *)0x0) {
    (*_DAT_ram_3004dbc8)();
  }
  uVar1 = FUN_ram_400002f4();
  if (*(short *)(param_1 + 0x24) == 0) {
    if (aiStack_24[0] == 0) {
      FUN_ram_400002fa();
      return -2;
    }
    iVar2 = FUN_ram_40006382();
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_400047a4(param_1 + 0x1c,iVar2,*(undefined1 *)(param_1 + 0x11));
    if (0 < aiStack_24[0]) {
      FUN_ram_400067c6(iVar2 + 0x54,0,aiStack_24);
      FUN_ram_400066a2(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006092();
    if (*(int *)(iVar2 + 0x38) != 0) {
      return *(int *)(iVar2 + 0x38);
    }
  }
  else {
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
    FUN_ram_400002fa();
  }
  if (_DAT_ram_3004dbc4 != (code *)0x0) {
    (*_DAT_ram_3004dbc4)(param_1);
  }
  return 0;
}


/* NanoCore 1.12, address 0x4000491c.
 * REA evidence: ev_191c71737b06e58d4dbb99a9f0f6407b3545ca6b619c92c7654569982658fe0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000491c(undefined4 param_1)

{
  FUN_ram_4000487e(param_1,0);
  return;
}


/* NanoCore 1.12, address 0x40004920.
 * REA evidence: ev_db8d09c65f5c88ed2278f89f053caaa9ce312378e245a34537c36112e60a27b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (_DAT_ram_3004dbc0 != (code *)0x0) {
    (*_DAT_ram_3004dbc0)();
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
    FUN_ram_4000479e(piVar3);
    iVar1 = 1;
  }
  FUN_ram_400002fa(uVar2);
  if (iVar1 == 1) {
    FUN_ram_40006092();
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40004988.
 * REA evidence: ev_6a4b89e6c0570d7568a07cceaf9260c518462cfba68f8b37b8ca3133f1a3aaf2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004988(int param_1,undefined4 param_2)

{
  FUN_ram_40005da0(param_1,3,param_2);
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x24) = 0xff0001;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return 0;
}


/* NanoCore 1.12, address 0x400049bc.
 * REA evidence: ev_a0565fd22e5f118ec6c1ae9467d201a61851ccdfda9b9f13e4149eb666894a4f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400049bc(int param_1)

{
  FUN_ram_40004766(param_1 + 0x1c);
  FUN_ram_40005e14(param_1);
  return 0;
}


/* NanoCore 1.12, address 0x400049d8.
 * REA evidence: ev_639b01886e71e99c44a7a79c22f9c64f0ca4b64902574c2ebedaf2396a7fdc40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400049d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005e4a(3,param_1);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x1c;
    *(undefined4 *)(iVar1 + 0x24) = 0xff0001;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined1 *)(iVar1 + 0x11) = 1;
  }
  return;
}


/* NanoCore 1.12, address 0x40004a06.
 * REA evidence: ev_91fa4ff08ddcc2030e3b892e258367751c121d4b16462a54e6c70256670080ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004a06(int param_1)

{
  FUN_ram_40004766(param_1 + 0x1c);
  FUN_ram_40005eb8(param_1);
  return 0;
}


/* NanoCore 1.12, address 0x40004a22.
 * REA evidence: ev_891919979fedbb59f7ca6ae18662d6f0065a51b12c1323be7306eab26b4d8bc1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004a22(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  iVar1 = FUN_ram_40006382();
  uVar2 = FUN_ram_400002f4();
  if (_DAT_ram_3004dbc8 != (code *)0x0) {
    (*_DAT_ram_3004dbc8)(param_1);
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
        FUN_ram_4000657e(iVar3,2,iVar1 + 0x3d);
      }
      FUN_ram_400047a4(param_1 + 0x1c,iVar1,*(undefined1 *)(param_1 + 0x11));
      if (0 < aiStack_24[0]) {
        FUN_ram_400067c6(iVar1 + 0x54,0,aiStack_24);
        FUN_ram_400066a2(iVar1 + 0x54);
      }
      FUN_ram_400002fa(uVar2);
      FUN_ram_40006092();
      if (*(int *)(iVar1 + 0x38) != 0) {
        return *(int *)(iVar1 + 0x38);
      }
      uVar2 = FUN_ram_400002f4();
      goto LAB_ram_40004a68;
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
LAB_ram_40004a68:
  FUN_ram_400002fa(uVar2);
  if (_DAT_ram_3004dbc4 != (code *)0x0) {
    (*_DAT_ram_3004dbc4)(param_1);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40004b14.
 * REA evidence: ev_2d42706bc030c601ae54c19c0a02bdf89e96b17b457a12100a82b96ef38ceef9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004b14(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = FUN_ram_40006382();
  uVar3 = FUN_ram_400002f4();
  if (_DAT_ram_3004dbc0 != (code *)0x0) {
    (*_DAT_ram_3004dbc0)(param_1);
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
      FUN_ram_4000657e(iVar2,2,param_1 + 0x26);
    }
    piVar4 = *(int **)(param_1 + 0x1c);
    if (piVar4 == (int *)(param_1 + 0x1c)) {
      if (*(short *)(param_1 + 0x24) != -1) {
        *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x26) = 0xff;
        goto LAB_ram_40004be2;
      }
    }
    else {
      *(int **)(param_1 + 0x28) = piVar4 + -7;
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)((int)piVar4 + 0x21);
      if (*(char *)(param_1 + 0x27) != -1) {
        *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + '\x01';
        FUN_ram_4000479e();
        iVar2 = 1;
        goto LAB_ram_40004bb2;
      }
    }
    FUN_ram_400002fa(uVar3);
    iVar2 = -3;
  }
  else {
LAB_ram_40004be2:
    iVar2 = 0;
LAB_ram_40004bb2:
    FUN_ram_400002fa(uVar3);
    if (iVar2 == 1) {
      FUN_ram_40006092();
      iVar2 = 0;
    }
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x40004bf0.
 * REA evidence: ev_0f4c822431db31e33e91df6dd98717acd65810297db2074e9ce522cc0d4323a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004bf0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005e4a(4,param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x20) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x1c;
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40004c1a.
 * REA evidence: ev_f15fccd4c260e3e93d1cb6db42f6070702fba9c51977ea502696e900565c4474
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004c1a(int param_1,uint param_2)

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
    pcVar3 = _DAT_ram_3004dbc0;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_2;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(param_1);
    }
    iVar4 = 0;
    piVar7 = (int *)*(int *)(param_1 + 0x1c);
joined_r0x40004c52:
    while (piVar2 = piVar7, (int *)(param_1 + 0x1c) != piVar2) {
      bVar1 = *(byte *)(piVar2 + 0xb);
      if ((bVar1 & 1) == 0) goto LAB_ram_40004ca2;
      piVar7 = (int *)*piVar2;
      if (piVar2[10] == (*(uint *)(param_1 + 0x24) & piVar2[10])) goto LAB_ram_40004c6e;
    }
    FUN_ram_400002fa(uVar5);
    if (iVar4 == 1) {
      FUN_ram_40006092();
      iVar4 = 0;
    }
  }
  return iVar4;
LAB_ram_40004ca2:
  if ((bVar1 & 2) == 0) {
    FUN_ram_400002fa(uVar5);
    return -10;
  }
  piVar7 = (int *)*piVar2;
  uVar6 = piVar2[10] & *(uint *)(param_1 + 0x24);
  if (uVar6 != 0) {
    piVar2[10] = uVar6;
LAB_ram_40004c6e:
    if ((bVar1 & 4) != 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & ~piVar2[10];
    }
    FUN_ram_400064f2(piVar2 + -7);
    iVar4 = 1;
  }
  goto joined_r0x40004c52;
}


/* NanoCore 1.12, address 0x40004cd2.
 * REA evidence: ev_780f63215b3660f86ccfaceace97f2e14a25e89c3c981cf22f0117315017d01a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004cd2(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_3004daf8 = DAT_ram_3004daf8 + '\x01';
  if (_DAT_ram_3004daf0 != (code *)0x0) {
    (*_DAT_ram_3004daf0)();
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.12, address 0x40004d04.
 * REA evidence: ev_ce27d94c3882286c4eca352246bb71e43da7851f2bc524d953117b09598ef711
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004d04(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  if (_DAT_ram_3004daf4 != (code *)0x0) {
    (*_DAT_ram_3004daf4)();
  }
  DAT_ram_3004daf8 = DAT_ram_3004daf8 + -1;
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.12, address 0x40004d36.
 * REA evidence: ev_97dba54a0dff7d5092f411754e39516391406799fe0593d8e7bd4f9d1f4a47eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40004d36(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3004daf8;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.12, address 0x40004d56.
 * REA evidence: ev_d92f1e5ef51d2b971b9f871b281805b6b525377e461af306147565c71c307b6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40004e36) */

char * FUN_ram_40004d56(char *param_1,char *param_2,uint param_3,int param_4,int param_5,int param_6
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
  
  pcVar9 = s_0123456789abcdef_ram_40096180;
  if ((param_7 & 0x40) != 0) {
    pcVar9 = s_0123456789ABCDEF_ram_4009616c;
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
LAB_ram_40004da4:
    if (param_3 == 0) {
      acStack_11[1] = 0x30;
      iVar7 = 1;
      goto LAB_ram_40004db0;
    }
  }
  else {
    if (param_8 == 0x68) {
      if (-1 < (short)param_3) goto LAB_ram_40004e50;
      param_3 = param_3 * -0x10000 >> 0x10;
      iVar3 = 0x2d;
      goto LAB_ram_40004da4;
    }
    if (-1 < (int)param_3) {
LAB_ram_40004e50:
      iVar3 = 0x2b;
      if ((param_7 & 4) == 0) {
        iVar3 = ((param_7 & 0xf) >> 3) << 5;
      }
      goto LAB_ram_40004da4;
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
LAB_ram_40004db0:
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


/* NanoCore 1.12, address 0x40004f0a.
 * REA evidence: ev_c45d012649fb46986ddfb3f3310c14c86c958c54f398b42c3963b320d45e22b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004f0a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006382();
  if (iVar1 != 0) {
    FUN_ram_40004a22(0x3004db00,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40004f2c.
 * REA evidence: ev_d4480095af0d28afb2908c34bce8946d6dc4863d5e33882e5a161b1136c02b4f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004f2c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006382();
  if (iVar1 != 0) {
    FUN_ram_40004b14(0x3004db00);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40004f4a.
 * REA evidence: ev_9aef2853af23c619af0e1cb3d281cfc68a69102007803d8576f964faa0225259
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004f4a(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40004d36();
  uVar1 = param_1;
  if ((iVar2 == 0) && (iVar2 = FUN_ram_40006382(), uVar1 = param_1, iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x38) = param_1;
    uVar1 = _DAT_ram_3004dafc;
  }
  _DAT_ram_3004dafc = uVar1;
  return;
}


/* NanoCore 1.12, address 0x40004f70.
 * REA evidence: ev_a2cdf7a9ff4398e3fe0d591bbf4015d8a631d774fdaffd37be7b8c91c68f5370
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_40004f70(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_40004d36();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006382(), iVar1 != 0)) {
    puVar2 = (undefined1 *)(iVar1 + 0x38);
  }
  else {
    puVar2 = &DAT_ram_3004dafc;
  }
  return puVar2;
}


/* NanoCore 1.12, address 0x40004f92.
 * REA evidence: ev_cd578cf6a98c381e72310de469f2114eb23ef1ace364140d2f23a702f2668fe5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004f92(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if ((3 < param_3) && (((uint)param_1 & 3) == 0)) {
    uVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    for (puVar4 = param_1; 0xf < (int)param_1 + (param_3 - (int)puVar4); puVar4 = puVar4 + 4) {
      *puVar4 = uVar3;
      puVar4[1] = uVar3;
      puVar4[2] = uVar3;
      puVar4[3] = uVar3;
    }
    uVar2 = param_3 >> 4;
    param_3 = param_3 + uVar2 * -0x10;
    for (iVar1 = 0; 3 < param_3 - iVar1; iVar1 = iVar1 + 4) {
      *(undefined4 *)((int)param_1 + iVar1 + uVar2 * 0x10) = uVar3;
    }
    param_1 = param_1 + uVar2 * 4 + (param_3 >> 2);
    param_3 = param_3 + (param_3 >> 2) * -4;
  }
  for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)param_1 + uVar2) = param_2;
  }
  return;
}


