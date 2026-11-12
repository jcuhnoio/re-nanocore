/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4004d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4004d00e.
 * REA evidence: ev_dc5cdb2b56b3225ef9879b66368ffc492bdecf4982c6464c3373069decb5ef77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d00e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar1) {
    *(int *)(param_1 + 4) = iVar1;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* NanoCore 1.12, address 0x4004d020.
 * REA evidence: ev_1b3c55089395628e870fdc25326b732f67a7ec5e445d4a4907290519791b63d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004d020(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* NanoCore 1.12, address 0x4004d024.
 * REA evidence: ev_ff8002f5c340b1eb0776c183faef083b1026e65c6b8b15246287709bf4ffb697
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d024(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4004d02a.
 * REA evidence: ev_72ea7904f72ab8f98ee4181adde7c4bfc68a6b156e698b6614f4165f7e38d8d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4004d02a(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}


/* NanoCore 1.12, address 0x4004d030.
 * REA evidence: ev_544acc9177a8cb44fddf6f1fcd3bf7df224c3f9f5048083c15b36ab4cca512cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d030(int param_1)

{
  return param_1 - *(int *)(param_1 + 8);
}


/* NanoCore 1.12, address 0x4004d036.
 * REA evidence: ev_ab069c35ce124700974050cf2ab20220eb5eabf8c614b57937f3c3faf8ba7a4e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d036(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return param_1 - *(int *)(param_1 + 8);
}


/* NanoCore 1.12, address 0x4004d042.
 * REA evidence: ev_69b03ee5ac1ab686231f240af3131692df2294bc2a5e8ab1c33b430fc5f46a90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d042(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_ram_4004d00e();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004d04c.
 * REA evidence: ev_68094bcdfeca6ed722b0cd397600cf756d40249efac09c72597891b0fe5f6ec7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d04c(int param_1,int param_2)

{
  return param_1 + param_2;
}


/* NanoCore 1.12, address 0x4004d050.
 * REA evidence: ev_60aaddfd3204b6650fd3a8396436b0d78fcceeab02f72d37f194ee8c7afcb738
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d050(int param_1)

{
  return param_1 + 0x10;
}


/* NanoCore 1.12, address 0x4004d054.
 * REA evidence: ev_a738c5092041e6627bdc5857ce7c9f3e1f801703be44c6925c566a489adb35b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d054(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


/* NanoCore 1.12, address 0x4004d062.
 * REA evidence: ev_d758442b700e38183137c1acf00caab24c2dff98167daea29666e794da530f43
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d062(int param_1)

{
  FUN_ram_4005a988(param_1 - *(int *)(param_1 + 8));
  return;
}


/* NanoCore 1.12, address 0x4004d06a.
 * REA evidence: ev_c16533b01e083a465a7b7e74e0a09377fd42d3e594df9d54591703c87fafa9cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d06a(int param_1)

{
  undefined1 uVar1;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    FUN_ram_4004cfe0(_DAT_ram_30080dcc,0);
    return;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_28 = param_1;
  uVar1 = FUN_ram_4004e36e();
  uStack_24 = CONCAT31(uStack_24._1_3_,uVar1);
  FUN_ram_4004cf70(_DAT_ram_30080dcc,&iStack_28,0);
  return;
}


/* NanoCore 1.12, address 0x4004d0b2.
 * REA evidence: ev_d86cfe79116dc6f84bed8e6773f615698c5154c277ee7d62bc298cc085a694c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d0b2(int param_1)

{
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 uStack_20;
  
  FUN_ram_4004d06a();
  if (param_1 == 0) {
    FUN_ram_4004cfe0(_DAT_ram_30080dc8,0);
    return;
  }
  memset(auStack_28,0,0x18);
  iStack_24 = param_1;
  uStack_20 = FUN_ram_4004e36e(param_1);
  FUN_ram_4004cf70(_DAT_ram_30080dc8,auStack_28,0);
  return;
}


/* NanoCore 1.12, address 0x4004d108.
 * REA evidence: ev_9596d9f49db23c2148f91d3d4bd586d5aa518d863cfa7942f18e402168a9f541
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d108(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4004afc8();
  iVar2 = FUN_ram_4004afc4(param_1);
  if ((iVar1 == 0x33) && (*(int *)(iVar2 + 0x2f8) != 0)) {
    FUN_ram_4004c904();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004d142.
 * REA evidence: ev_8f04dee0349e8cae533f719fcaba1dad9154f509df943a4d7b2d9b6a8a0d3639
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_4004d142(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_ram_4004b446(0x30080ce4);
  if (piVar2 != (int *)0x0) {
    thunk_FUN_ram_40004f92(piVar2,0,0x310);
    piVar2[2] = -1;
    piVar2[3] = -1;
    piVar2[6] = 0x82;
    *piVar2 = param_1;
    piVar2[1] = param_2;
    piVar2[4] = 0;
    piVar2[5] = 0;
    *(ushort *)(piVar2 + 0x10) = *(ushort *)(piVar2 + 0x10) & 0xfe | 0x1201;
    iVar3 = FUN_ram_4005a960(0x3c);
    piVar2[0xaa] = iVar3;
    if (iVar3 != 0) {
      if ((code *)piVar2[0xab] != (code *)0x0) {
        (*(code *)piVar2[0xab])(piVar2,iVar3);
      }
      iVar3 = piVar2[0xaa];
      *(int *)(iVar3 + 0xc) = param_1 + -1;
      *(int *)(iVar3 + 0x10) = param_2 + -1;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined1 *)(iVar3 + 0x14) = *(undefined1 *)((int)piVar2 + 0x41);
      piVar2[0x9a] = 1;
      iVar3 = FUN_ram_40056a9e();
      piVar2[0xbf] = iVar3;
      FUN_ram_4004b436(piVar2 + 0x9b,0x10);
      piVar1 = _DAT_ram_30080cf4;
      _DAT_ram_30080cf4 = piVar2;
      iVar3 = FUN_ram_4004c6ac(FUN_ram_400498c8,10,piVar2);
      piVar2[0xbe] = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_ram_40043b84(0);
        piVar2[0xb1] = iVar3;
        iVar3 = FUN_ram_40043b84(0);
        piVar2[0xae] = iVar3;
        iVar3 = FUN_ram_40043b84(0);
        piVar2[0xb2] = iVar3;
        iVar3 = FUN_ram_40043b84(0);
        piVar2[0xb3] = iVar3;
        FUN_ram_400484ce(piVar2[0xb1]);
        FUN_ram_400484ce(piVar2[0xb2]);
        FUN_ram_400484ce(piVar2[0xb3]);
        FUN_ram_40043ba4(piVar2[0xb2],2);
        FUN_ram_40043ba4(piVar2[0xb3],2);
        FUN_ram_400465c8(piVar2[0xb1],0);
        FUN_ram_400465c8(piVar2[0xb2],0);
        FUN_ram_400465c8(piVar2[0xb3],0);
        FUN_ram_400455dc(piVar2[0xae]);
        _DAT_ram_30080cf4 = piVar1;
        if (piVar1 == (int *)0x0) {
          _DAT_ram_30080cf4 = piVar2;
        }
        FUN_ram_4004af40(piVar2 + 0xb8,FUN_ram_4004d108,0x33,0);
        FUN_ram_4004c916(piVar2[0xbe]);
        return piVar2;
      }
      FUN_ram_4005a988(piVar2);
    }
  }
  return (int *)0x0;
}


/* NanoCore 1.12, address 0x4004d2b6.
 * REA evidence: ev_fa4eb40204d0e2414489850c4ba1fb261a894d6071ad896aaf3f48fe9d6f82e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d2b6(void)

{
  return _DAT_ram_30080cf4;
}


/* NanoCore 1.12, address 0x4004d2c0.
 * REA evidence: ev_3f970c6b26ea994dd482bd601ee424d80bb529dd7a9e5c4ad67b2b31cc954723
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d2c0(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004b610();
    return;
  }
  FUN_ram_4004b61c(0x30080ce4);
  return;
}


/* NanoCore 1.12, address 0x4004d2d4.
 * REA evidence: ev_e139e337dde5b10b1d1130b173cdcdc84d2b75468c251b9be97d99882f219ebb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d2d4(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 == (undefined4 *)0x0)) {
    return 0;
  }
  if (-1 < (int)(param_1[0xbc] << 0x1e)) {
    return *param_1;
  }
  return param_1[1];
}


/* NanoCore 1.12, address 0x4004d2f6.
 * REA evidence: ev_8f5e8b7484c21b8592c43b63d550c560bc0b636fd6f2002005eb210ec60635c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d2f6(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 == (undefined4 *)0x0)) {
    return 0;
  }
  if (-1 < (int)(param_1[0xbc] << 0x1e)) {
    return param_1[1];
  }
  return *param_1;
}


/* NanoCore 1.12, address 0x4004d318.
 * REA evidence: ev_2015a318e679c1cd52157ea3db3be2b0ede8bf5ddebbd4b2c9d6e2da31a1ab95
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d318(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 == 0)) {
    return 0x82;
  }
  return *(undefined4 *)(param_1 + 0x18);
}


/* NanoCore 1.12, address 0x4004d32e.
 * REA evidence: ev_b5ac2f63a07af7b56ed5b280e825c25eff0bf6fe15e73a874a3fe2968e961b89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d32e(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(undefined4 *)(param_1 + 0x24) = param_2;
  }
  return;
}


/* NanoCore 1.12, address 0x4004d342.
 * REA evidence: ev_e071defb41823ffadf17e5d2ec1b068b175cca665c466f69e49cb215ad2a6b7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d342(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return;
}


/* NanoCore 1.12, address 0x4004d352.
 * REA evidence: ev_2ef4e0dffc43baf4939839be6597bbb42d687459f3b9bb4f004b995d32e25d5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d352(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
  }
  return;
}


/* NanoCore 1.12, address 0x4004d362.
 * REA evidence: ev_6ef84909853670b8e8ae1d90322553ee6b8bbdf227fa68bdcd895529d6c518bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_4004d362(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 == 0)) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x41);
}


/* NanoCore 1.12, address 0x4004d378.
 * REA evidence: ev_c8a0ef473f6459a0a949f49796238ec4b3c24982b844e34dca13c454ff8790bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d378(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = FUN_ram_4004d362();
  uVar3 = FUN_ram_4004d2d4(param_1);
  uVar4 = FUN_ram_4004d2f6(param_1);
  FUN_ram_4004db3c(param_2,uVar2);
  if (param_3 != 0) {
    FUN_ram_4004db3c(param_3,uVar2);
  }
  uVar5 = FUN_ram_4004dace(uVar3,uVar2);
  if (param_5 == 0) {
    if (uVar5 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = param_4 / uVar5;
    }
  }
  FUN_ram_4004db4c(param_1 + 0x278,uVar3,uVar4,uVar2,uVar5,param_2,param_4);
  FUN_ram_4004db4c(param_1 + 0x290,uVar3,uVar4,uVar2,uVar5,param_3,param_4);
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = param_1 + 0x290;
  }
  FUN_ram_4004d32e(param_1,param_1 + 0x278,iVar1);
  FUN_ram_4004d342(param_1,param_5);
  return;
}


/* NanoCore 1.12, address 0x4004d428.
 * REA evidence: ev_83786dfcbdebb7ffa9055ea39b79d7198bc0fb16d19deb6d433aacd07624b368
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d428(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


/* NanoCore 1.12, address 0x4004d42e.
 * REA evidence: ev_816ea79134859c0f549b18797a52eda1579ccdaca61eaf829dbf0afe913b4442
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004d42e(int param_1)

{
  return *(int *)(param_1 + 0x34) != 0;
}


/* NanoCore 1.12, address 0x4004d436.
 * REA evidence: ev_4471ec4636fbde04c6b905ed9741171fc3b559e7245832d746ed9f236d10cbe5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004d436(int param_1)

{
  return *(int *)(param_1 + 0x20) != 0;
}


/* NanoCore 1.12, address 0x4004d43e.
 * REA evidence: ev_5b0ed2b9f7abd91c45c16ee5b2e1d08b3fab66425e3650740b0e8950c46f3c2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d43e(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2b8);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004d450.
 * REA evidence: ev_587fa7f7e15a31805aa057194ac0f01b6e1a1020b2f7aa7cf1ffc7b177bded68
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d450(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 700);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004d462.
 * REA evidence: ev_024cc0ac51f1d9819caefb67d05dbd4ee2bac2ac810d51fa744c83b552852df0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d462(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c8);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004d474.
 * REA evidence: ev_824aa5735ecf80a0391faa05d8e0b5c3692f72b021dff87931b819f6616fb64c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d474(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2cc);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004d486.
 * REA evidence: ev_1390fcabbd25356bdf9f4b9157ca3ce6b41c05e84012a29c45698b1164cf0e9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d486(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c4);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004d498.
 * REA evidence: ev_49532d4599abb64b37c22ac8c374f3128c72c89322d5c9cc1e1e0019f40d03c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d498(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  thunk_FUN_ram_40004f92(&iStack_2c,0,0x1c);
  iStack_2c = param_1;
  iStack_28 = param_1;
  uStack_24 = param_2;
  uStack_1c = param_3;
  iVar1 = FUN_ram_4004aeba(param_1 + 0x2e0,&iStack_2c,1);
  if (iVar1 == 1) {
    FUN_ram_4004aeba(param_1 + 0x2e0,&iStack_2c,0);
  }
  return;
}


/* NanoCore 1.12, address 0x4004d4e4.
 * REA evidence: ev_1a08dd29d777ee804003d46dccc06231de2d2c2bac8c08028e5c8bdf0e49d6b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d4e4(int param_1,undefined1 param_2)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x41) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 0x2a8) + 0x14) = param_2;
  FUN_ram_4004d498(param_1,0x32,0);
  return;
}


/* NanoCore 1.12, address 0x4004d508.
 * REA evidence: ev_36caa4b6a04f342066b10110665cabc1535e57093164f59bda432e2a1ef12c3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d508(int param_1)

{
  if (param_1 == 0) {
    param_1 = _DAT_ram_30080cf4;
  }
  return *(undefined4 *)(param_1 + 0x2f4);
}


/* NanoCore 1.12, address 0x4004d518.
 * REA evidence: ev_457152fb7924a66c479d805c375a1f325e52bc4fa6a98b1e2d5e2334b2a91538
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d518(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    iVar1 = 1;
    if (param_2 == 0) {
      iVar1 = -1;
    }
    *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + iVar1;
  }
  return;
}


/* NanoCore 1.12, address 0x4004d536.
 * REA evidence: ev_c8e5154099b58307b3db8be68d70cf9de4b3efac64e5324dacb8be025771ab7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4004d536(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 == 0)) {
    return false;
  }
  return 0 < *(int *)(param_1 + 0x268);
}


/* NanoCore 1.12, address 0x4004d550.
 * REA evidence: ev_7e9a676f936522e45657fdd2b892dee16c9a586181047e075dd2658dd0681042
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d550(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    *(undefined4 *)(param_1 + 0x2dc) = param_2;
  }
  return;
}


/* NanoCore 1.12, address 0x4004d562.
 * REA evidence: ev_e1239f52a28f970d85c37427dcc2c005dec1ab9c6a4dd121dff34d30cd1a4752
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d562(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2dc);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004d574.
 * REA evidence: ev_a97c32208c8b9e595bdf27805fc0b3fa64e75647ac5db2c064416ed6883b8a36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d574(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080cf4, _DAT_ram_30080cf4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004d584.
 * REA evidence: ev_9e550834366db007946224d22376f3ff2ddebcdd392115d30e3a56ab9700b352
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d584(void)

{
  FUN_ram_4005a8ee(0x30080dd8);
  return;
}


/* NanoCore 1.12, address 0x4004d590.
 * REA evidence: ev_3451fd5d95c2b146f2337308a4394142861dae86a17545c6c086ba873506bb3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d590(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_4005a960();
  *puVar1 = _DAT_ram_30080dd0;
  _DAT_ram_30080dd0 = puVar1;
  return;
}


/* NanoCore 1.12, address 0x4004d5b0.
 * REA evidence: ev_b335349dcd2f04f4a50df7aeaf9506a3cfbce16504b1272a1e4ba56aee448dd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d5b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_ram_4005a960(0x54);
  FUN_ram_4000303c(iVar1 + 8,param_2,0x10);
  FUN_ram_4000303c(iVar1 + 0x18,param_2,0x10);
  FUN_ram_4000303c(iVar1 + 0x38,param_1 + 0x18,0x10);
  *(undefined4 *)(iVar1 + 0x48) = 1;
  piVar3 = *(int **)(param_1 + 0x28);
  if (*(int **)(param_1 + 0x28) == (int *)0x0) {
    *(int *)(param_1 + 0x28) = iVar1;
  }
  else {
    do {
      piVar2 = piVar3;
      piVar3 = (int *)*piVar2;
    } while (piVar3 != (int *)0x0);
    *piVar2 = iVar1;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004d60a.
 * REA evidence: ev_8c0ea05da45522390e8564f531189a0022e9c5f518891e3e7d13d7933d5d19b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d60a(void)

{
  FUN_ram_4005a914(0x30080dd8);
  return;
}


/* NanoCore 1.12, address 0x4004d616.
 * REA evidence: ev_b4b526537831e39e8c783e1c19656b7e76b8d166aaec50ee500de46c29d72d80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d616(void)

{
  FUN_ram_4005a92a(0x30080dd8);
  return;
}


/* NanoCore 1.12, address 0x4004d622.
 * REA evidence: ev_71aecfac9eb6fdb270186d9fd39d101c2604a4fd207ee9c351f8055543ef84a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d622(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  
  piVar9 = (int *)*(int *)(param_2 + 0x28);
  piVar3 = (int *)0x0;
  while (piVar12 = piVar3, piVar3 = piVar9, piVar3 != (int *)0x0) {
    piVar9 = (int *)*piVar3;
    if (piVar3[0x12] == 3) {
      if (piVar12 == (int *)0x0) {
        *(int **)(param_2 + 0x28) = piVar9;
      }
      else {
        *piVar12 = (int)piVar9;
      }
      if (piVar3[1] == 5) {
        piVar2 = *(int **)(piVar3[0x13] + 0x1c);
        if (*piVar2 != 0) {
          iVar11 = piVar2[2];
          iVar7 = piVar2[4];
          iVar5 = FUN_ram_4004dace((piVar2[3] - piVar2[1]) + 1,(char)piVar2[5]);
          uVar6 = ((iVar7 - iVar11) + 1) * iVar5;
          uVar8 = 1;
          if (0x3ff < uVar6) {
            uVar8 = uVar6 >> 10;
          }
          _DAT_ram_30080dd4 = _DAT_ram_30080dd4 - uVar8;
          FUN_ram_4004dd2c(*piVar2);
          *piVar2 = 0;
        }
        if (param_1 != 0) {
          piVar1 = *(int **)(param_1 + 0x2a8);
          do {
            piVar10 = piVar1;
            if (piVar10 == (int *)0x0) goto LAB_ram_4004d720;
            piVar1 = (int *)piVar10[0xc];
          } while ((int *)piVar10[0xc] != piVar2);
          piVar10[0xc] = piVar2[0xc];
LAB_ram_4004d720:
          if (*(code **)(param_1 + 0x2b0) != (code *)0x0) {
            (**(code **)(param_1 + 0x2b0))(param_1,piVar2);
          }
          FUN_ram_4005a988(piVar2);
        }
      }
      iVar7 = FUN_ram_4004e83e(piVar3);
      if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x4c) & 0x40) != 0)) {
        FUN_ram_4005a988(*(undefined4 *)(iVar7 + 0x1c));
        *(undefined4 *)(iVar7 + 0x1c) = 0;
      }
      FUN_ram_4005a988(piVar3[0x13]);
      FUN_ram_4005a988(piVar3);
      piVar3 = piVar12;
    }
  }
  if (((*(int *)(param_2 + 0x2c) == 0) || (*(char *)(param_2 + 0x34) == '\0')) ||
     (*(int *)(param_2 + 0x28) != 0)) {
    uVar4 = 0;
    for (piVar9 = (int *)_DAT_ram_30080dd0; piVar9 != (int *)0x0; piVar9 = (int *)*piVar9) {
      iVar7 = (*(code *)piVar9[3])(piVar9,param_2);
      if (-1 < iVar7) {
        uVar4 = 1;
      }
    }
  }
  else {
    for (piVar9 = *(int **)(*(int *)(param_2 + 0x2c) + 0x28); piVar9 != (int *)0x0;
        piVar9 = (int *)*piVar9) {
      if (((piVar9[1] == 5) && (piVar9[0x12] == 0)) && (*(int *)(piVar9[0x13] + 0x1c) == param_2)) {
        piVar9[0x12] = 1;
        FUN_ram_4004d616();
        break;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x4004d792.
 * REA evidence: ev_7f58a4a294c84c76b5f15cbf7e9eefd1586af9f936d7fab70a75eb42b0699596
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d792(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_4004d2c0(0);
  iVar4 = 0;
  for (; iVar2 != 0; iVar2 = FUN_ram_4004d2c0(iVar2)) {
    for (iVar1 = *(int *)(iVar2 + 0x2a8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30)) {
      iVar3 = FUN_ram_4004d622(iVar2,iVar1);
      if (iVar3 != 0) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 == 0) {
      FUN_ram_4004d616();
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4004d7dc.
 * REA evidence: ev_0ddd9038b85b6b54210c64374485987c508984bf75bbf72b2269a9ad35318a66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d7dc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = DAT_ram_30080de0;
  piVar3 = *(int **)(param_2 + 0x4c);
  piVar3[4] = param_1;
  if (cVar1 == '\0') {
    if ((*piVar3 != 0) && (iVar2 = FUN_ram_40043c8a(*piVar3,0x80000), iVar2 != 0)) {
      DAT_ram_30080de0 = 1;
      FUN_ram_40044c48(*piVar3,0x1d,param_2);
      DAT_ram_30080de0 = '\0';
    }
    *(undefined2 *)(param_2 + 0x50) = 0x6400;
    for (piVar3 = (int *)_DAT_ram_30080dd0; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      if ((code *)piVar3[4] != (code *)0x0) {
        (*(code *)piVar3[4])(piVar3,param_2);
      }
    }
    FUN_ram_4004d792();
    return;
  }
  *(undefined2 *)(param_2 + 0x50) = 0x6400;
  for (piVar3 = (int *)_DAT_ram_30080dd0; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if ((code *)piVar3[4] != (code *)0x0) {
      (*(code *)piVar3[4])(piVar3,param_2);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4004d87e.
 * REA evidence: ev_a0e3a57feb0f44f5f96a39dd3898728f3502a4f7ef637ba02d973b94cc4ce6f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d87e(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_ram_400498be();
    iVar1 = FUN_ram_4004d2d4();
    FUN_ram_400498be();
    iVar2 = FUN_ram_4004d2f6();
    iVar5 = *(int *)(param_1 + 0x28);
    if ((((*(int *)(iVar5 + 0x48) != 1) && (*(int *)(iVar5 + 8) < 1)) &&
        (iVar1 + -1 <= *(int *)(iVar5 + 0x10))) &&
       ((*(int *)(iVar5 + 0xc) < 1 && (iVar2 + -1 <= *(int *)(iVar5 + 0x14))))) {
      return 0;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    piVar4 = *(int **)(param_1 + 0x28);
  }
  else {
    piVar4 = (int *)*param_2;
  }
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    if ((piVar4[0x12] == 1) &&
       ((*(byte *)(piVar4 + 0x14) == 0 || (*(byte *)(piVar4 + 0x14) == param_3)))) break;
LAB_ram_4004d94a:
    piVar4 = (int *)*piVar4;
  }
  piVar3 = *(int **)(param_1 + 0x28);
  do {
    if (piVar3 == (int *)0x0) {
      return (int)piVar4;
    }
    if (piVar4 == piVar3) {
      return (int)piVar3;
    }
    if (piVar3[0x12] != 3) {
      iVar1 = piVar4[6];
      if (piVar4[6] < piVar3[6]) {
        iVar1 = piVar3[6];
      }
      iVar2 = piVar4[8];
      if (piVar3[8] < piVar4[8]) {
        iVar2 = piVar3[8];
      }
      if (iVar1 + -0x10 <= iVar2 + 0x10) {
        iVar1 = piVar4[7];
        if (piVar4[7] < piVar3[7]) {
          iVar1 = piVar3[7];
        }
        iVar2 = piVar4[9];
        if (piVar3[9] < piVar4[9]) {
          iVar2 = piVar3[9];
        }
        if (iVar1 <= iVar2) goto LAB_ram_4004d94a;
      }
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}


/* NanoCore 1.12, address 0x4004d952.
 * REA evidence: ev_81fcfe360fa9fdb5814cf65ce90bb4fd0f3981d694670465f373a86c227b5588
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d952(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_400498be();
  iVar2 = FUN_ram_4005a960(0x3c);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x2c) = param_1;
    FUN_ram_4000303c(iVar2 + 0x18,param_3,0x10);
    FUN_ram_4000303c(iVar2 + 4,param_3,0x10);
    *(undefined1 *)(iVar2 + 0x14) = param_2;
    iVar3 = *(int *)(iVar1 + 0x2a8);
    if (*(int *)(iVar1 + 0x2a8) == 0) {
      *(int *)(iVar1 + 0x2a8) = iVar2;
    }
    else {
      do {
        iVar1 = iVar3;
        iVar3 = *(int *)(iVar1 + 0x30);
      } while (iVar3 != 0);
      *(int *)(iVar1 + 0x30) = iVar2;
    }
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x4004d9bc.
 * REA evidence: ev_90104ef88974eb45eb15fac62d3f6233e73e07e2ffa4b83dd5f0e8c84da10f5b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d9bc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x10);
  }
  iVar5 = param_1[2];
  iVar6 = param_1[4];
  iVar1 = (param_1[3] - param_1[1]) + 1;
  iVar2 = FUN_ram_4004dace(iVar1,(char)param_1[5]);
  iVar5 = (iVar6 - iVar5) + 1;
  uVar7 = iVar2 * iVar5;
  iVar1 = FUN_ram_4004dbd6(iVar1,iVar5,(char)param_1[5],0);
  *param_1 = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar4 = 1;
    if (0x3ff < uVar7) {
      uVar4 = uVar7 >> 10;
    }
    _DAT_ram_30080dd4 = _DAT_ram_30080dd4 + uVar4;
    iVar1 = FUN_ram_4004ae16((char)param_1[5]);
    if (iVar1 != 0) {
      FUN_ram_4004ddb8(*param_1,0);
    }
    uVar3 = *(undefined4 *)(*param_1 + 0x10);
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4004d9c4.
 * REA evidence: ev_68ffd8b8030bb1021bed138134447fadeef512412a98a5c40e50a3465088f46d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d9c4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = param_1[2];
  iVar6 = param_1[4];
  iVar1 = (param_1[3] - param_1[1]) + 1;
  iVar2 = FUN_ram_4004dace(iVar1,(char)param_1[5]);
  iVar5 = (iVar6 - iVar5) + 1;
  uVar7 = iVar2 * iVar5;
  iVar1 = FUN_ram_4004dbd6(iVar1,iVar5,(char)param_1[5],0);
  *param_1 = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar4 = 1;
    if (0x3ff < uVar7) {
      uVar4 = uVar7 >> 10;
    }
    _DAT_ram_30080dd4 = _DAT_ram_30080dd4 + uVar4;
    iVar1 = FUN_ram_4004ae16((char)param_1[5]);
    if (iVar1 != 0) {
      FUN_ram_4004ddb8(*param_1,0);
    }
    uVar3 = *(undefined4 *)(*param_1 + 0x10);
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4004da44.
 * REA evidence: ev_e71127b3c8402769d463d47c1ac86da3b485fa9161020c2e6d932cd0a8de8f79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004da44(undefined4 *param_1)

{
  FUN_ram_4004dd5a(*param_1);
  return;
}


/* NanoCore 1.12, address 0x4004da50.
 * REA evidence: ev_b5e735ce95c15c0e4eeeffddd43016ba47399dcd12475a563ee10dc4134b6be8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004da50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004adf8(param_2);
  return (iVar1 * param_1 + 7U >> 3) + 7 & 0xfffffff8;
}


/* NanoCore 1.12, address 0x4004da7c.
 * REA evidence: ev_c951d11501663b59aa13ae1d1264c5395e761343eb0899b5ae31a0aa257f459a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004da7c(void)

{
  thunk_FUN_ram_40004f92(&DAT_ram_30080da8,0,0x14);
  _DAT_ram_30080da8 = &LAB_ram_4004da76;
  _DAT_ram_30080dac = &LAB_ram_4004da72;
  _DAT_ram_30080db0 = &LAB_ram_4004da48;
  _DAT_ram_30080db4 = 0;
  _DAT_ram_30080db8 = FUN_ram_4004da50;
  return;
}


/* NanoCore 1.12, address 0x4004dace.
 * REA evidence: ev_d36849fbc4439fa066c1effba1a6638e5221002155e74ed2c7a67bd64f5a4542
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004dace(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_30080db8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004dad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_30080db8)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004dade.
 * REA evidence: ev_3ebab7ab53e9771e3edb156d46d6c323408a8f007aaff56f2fb3eb402f246dca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004dade(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 0) {
    param_4 = FUN_ram_4004dace(param_1,param_3);
  }
  iVar1 = param_4 * param_2;
  if (param_3 == 0x14) {
    iVar1 = iVar1 + (param_4 >> 1) * param_2;
  }
  else if ((param_3 - 7U & 0xff) < 4) {
    iVar2 = 8;
    if (((param_3 != 7) && (iVar2 = 0x10, param_3 != 8)) && (iVar2 = 0x40, param_3 != 9)) {
      iVar2 = 0x400;
    }
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004db3c.
 * REA evidence: ev_3c7a6ff29b8df917514e202a94e2b5daadffee5c0eed4c93b60651942dde311e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004db3c(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_30080db0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004db46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_30080db0)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004db4c.
 * REA evidence: ev_8a40ca2dcfd1e86761680ed02a0bd7fe46e23c78a68c94fd76ebabeb75830b42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004db4c(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                     uint param_6,uint param_7)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    return false;
  }
  thunk_FUN_ram_40004f92(param_1,0,0x18);
  if (param_5 == 0) {
    param_5 = FUN_ram_4004dace(param_2,param_4);
  }
  bVar1 = (uint)(param_5 * param_3) <= param_7;
  if (bVar1) {
    *(char *)((int)param_1 + 1) = (char)param_4;
    *(short *)(param_1 + 2) = (short)param_5;
    *(short *)(param_1 + 1) = (short)param_2;
    *(short *)((int)param_1 + 6) = (short)param_3;
    *param_1 = *param_1 & 0xff00 | 0x19;
    uVar2 = FUN_ram_4004db3c(param_6,param_4);
    param_1[4] = uVar2;
    param_1[5] = param_6;
    param_1[3] = param_7;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4004db52.
 * REA evidence: ev_c0fe565bd3faa13543fe6f46eeeed8bda3ff433a9adab98e1b890c7b87c4e209
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004db52(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                     uint param_6,uint param_7)

{
  bool bVar1;
  uint uVar2;
  
  thunk_FUN_ram_40004f92(param_1,0,0x18);
  if (param_5 == 0) {
    param_5 = FUN_ram_4004dace(param_2,param_4);
  }
  bVar1 = (uint)(param_5 * param_3) <= param_7;
  if (bVar1) {
    *(char *)((int)param_1 + 1) = (char)param_4;
    *(short *)(param_1 + 2) = (short)param_5;
    *(short *)(param_1 + 1) = (short)param_2;
    *(short *)((int)param_1 + 6) = (short)param_3;
    *param_1 = *param_1 & 0xff00 | 0x19;
    uVar2 = FUN_ram_4004db3c(param_6,param_4);
    param_1[4] = uVar2;
    param_1[5] = param_6;
    param_1[3] = param_7;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4004dbd6.
 * REA evidence: ev_0f8fd23a80b34a19527baf53ad6a7cb4e9a118701cd02b9b232e9bb33608d16a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_ram_4004dbd6(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)FUN_ram_4005a960(0x18);
  if (puVar1 != (uint *)0x0) {
    if (param_4 == 0) {
      param_4 = FUN_ram_4004dace(param_1,param_3);
    }
    uVar2 = FUN_ram_4004dade(param_1,param_2,param_3,param_4);
    if ((_DAT_ram_30080da8 == (code *)0x0) ||
       (uVar3 = (*_DAT_ram_30080da8)(uVar2,param_3), uVar3 == 0)) {
      FUN_ram_4005a988(puVar1);
      puVar1 = (uint *)0x0;
    }
    else {
      *(char *)((int)puVar1 + 1) = (char)param_3;
      *(short *)(puVar1 + 1) = (short)param_1;
      *(short *)((int)puVar1 + 6) = (short)param_2;
      *(short *)(puVar1 + 2) = (short)param_4;
      *puVar1 = *puVar1 & 0xff00 | 0x300019;
      uVar4 = FUN_ram_4004db3c(uVar3,param_3);
      puVar1[4] = uVar4;
      puVar1[5] = uVar3;
      puVar1[3] = uVar2;
    }
  }
  return puVar1;
}


/* NanoCore 1.12, address 0x4004dc7c.
 * REA evidence: ev_cd7451dd9504b17197be97972b6e45a6d292b9cd88dd0f53b1b965c4b667e8ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004dc7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_4004dbd6(*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6),
                           *(undefined1 *)(param_1 + 1),*(undefined2 *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(ushort *)(iVar1 + 2) = *(ushort *)(param_1 + 2) | 0x30;
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (*(uint *)(param_1 + 0xc) < *(uint *)(iVar1 + 0xc)) {
      uVar3 = *(uint *)(param_1 + 0xc);
    }
    thunk_FUN_ram_4000500c(*(undefined4 *)(iVar1 + 0x10),uVar2,uVar3);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004dcca.
 * REA evidence: ev_96573a75dda9403c5dc806a01de41a88f8977a514564c0fc408e75c287d2da20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004dcca(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = (uint)*(byte *)(param_1 + 1);
    }
    if (param_5 == 0) {
      param_5 = FUN_ram_4004dace(param_3,param_2);
    }
    uVar1 = FUN_ram_4004dade(param_3,param_4,param_2,param_5);
    if (uVar1 <= *(uint *)(param_1 + 0xc)) {
      *(char *)(param_1 + 1) = (char)param_2;
      *(short *)(param_1 + 4) = (short)param_3;
      *(short *)(param_1 + 6) = (short)param_4;
      *(short *)(param_1 + 8) = (short)param_5;
      return param_1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004dd2c.
 * REA evidence: ev_0b9fdcda5db4a769168af347d21621724ead0573a55fda225c3b6fbecae4300a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004dd2c(int param_1)

{
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 2) & 0x10) != 0)) {
    if (_DAT_ram_30080dac != (code *)0x0) {
      (*_DAT_ram_30080dac)(*(undefined4 *)(param_1 + 0x14));
    }
    FUN_ram_4005a988(param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004dd5a.
 * REA evidence: ev_782a06912b92cd05d51e3aba20c043084d3fcfe0dcb14a921f0654238f2c1a2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004dd5a(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 1);
    iVar3 = 8;
    if ((((cVar1 != '\a') && (iVar3 = 0x10, cVar1 != '\b')) && (iVar3 = 0x40, cVar1 != '\t')) &&
       (iVar3 = 0x400, cVar1 != '\n')) {
      iVar3 = 0;
    }
    iVar3 = *(int *)(param_1 + 0x10) + iVar3 + (uint)*(ushort *)(param_1 + 8) * param_3;
    if (param_2 != 0) {
      iVar2 = FUN_ram_4004adf8();
      iVar3 = iVar3 + (iVar2 + 7 >> 3) * param_2;
    }
  }
  return iVar3;
}


/* NanoCore 1.12, address 0x4004ddb8.
 * REA evidence: ev_486423e0126018363f2e28d7096e223478c66ef3d77bda75ef8fede1baf796ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ddb8(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 != (int *)0x0) {
    if (-2 < param_2[2] - *param_2) {
      if (-2 < param_2[3] - param_2[1]) goto LAB_ram_4004ddd0;
    }
    return;
  }
LAB_ram_4004ddd0:
  uVar1 = *(ushort *)(param_1 + 8);
  if (param_2 == (int *)0x0) {
    thunk_FUN_ram_40004f92
              (*(undefined4 *)(param_1 + 0x10),0,(uint)*(ushort *)(param_1 + 6) * (uint)uVar1);
    return;
  }
  iVar4 = FUN_ram_4004adf8(*(undefined1 *)(param_1 + 1));
  iVar5 = FUN_ram_4004dd5a(param_1,*param_2,param_2[1]);
  iVar6 = *param_2;
  iVar3 = param_2[2];
  iVar2 = param_2[3];
  for (iVar7 = param_2[1]; iVar7 <= iVar2; iVar7 = iVar7 + 1) {
    thunk_FUN_ram_40004f92(iVar5,0,((iVar3 - iVar6) + 1) * (iVar4 + 7 >> 3));
    iVar5 = iVar5 + (uint)uVar1;
  }
  return;
}


/* NanoCore 1.12, address 0x4004de58.
 * REA evidence: ev_f11778a0e5f6c1ae97cafc2a11f5e057fe5aa74eeda67a09f4c7c8359d69682c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004de58(int param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 == (int *)0x0) {
    uVar4 = (uint)*(ushort *)(param_1 + 4);
LAB_ram_4004de78:
    cVar1 = *(char *)(param_1 + 1);
    if ((byte)(cVar1 - 7U) < 4) {
      uVar8 = 8;
      if (((cVar1 != '\a') && (uVar8 = 0x10, cVar1 != '\b')) && (uVar8 = 0x40, cVar1 != '\t')) {
        uVar8 = 0x400;
      }
      thunk_FUN_ram_4000500c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x10),uVar8);
    }
    if (param_4 == (int *)0x0) {
      if (*(ushort *)(param_3 + 4) != uVar4) {
        return;
      }
      iVar9 = 0;
      iVar7 = 0;
      goto LAB_ram_4004def4;
    }
  }
  else {
    uVar4 = (param_2[2] - *param_2) + 1;
    if (param_4 == (int *)0x0) goto LAB_ram_4004de78;
  }
  iVar7 = *param_4;
  if ((param_4[2] - iVar7) + 1U != uVar4) {
    return;
  }
  iVar9 = param_4[1];
LAB_ram_4004def4:
  iVar7 = FUN_ram_4004dd5a(param_3,iVar7,iVar9);
  if (param_2 == (int *)0x0) {
    iVar5 = FUN_ram_4004dd5a(param_1,0,0);
    iVar9 = 0;
    iVar10 = *(ushort *)(param_1 + 6) - 1;
  }
  else {
    iVar5 = FUN_ram_4004dd5a(param_1,*param_2,param_2[1]);
    iVar9 = param_2[1];
    iVar10 = param_2[3];
  }
  uVar2 = *(ushort *)(param_1 + 8);
  uVar3 = *(ushort *)(param_3 + 8);
  iVar6 = FUN_ram_4004adf8(*(undefined1 *)(param_1 + 1));
  for (; iVar9 <= iVar10; iVar9 = iVar9 + 1) {
    thunk_FUN_ram_4000500c(iVar5,iVar7,(int)(iVar6 * uVar4 + 7) >> 3);
    iVar5 = iVar5 + (uint)uVar2;
    iVar7 = iVar7 + (uint)uVar3;
  }
  return;
}


/* NanoCore 1.12, address 0x4004df5c.
 * REA evidence: ev_61b328e7bfa79cbe03df32753c02aa5539db67517a954ca30baae7a5e0351796
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004df5c(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 4);
  uVar8 = (uint)*(ushort *)(param_1 + 6);
  if (param_2 == 0) {
    param_2 = FUN_ram_4004dace(uVar2,*(undefined1 *)(param_1 + 1));
  }
  uVar4 = 1;
  if (*(ushort *)(param_1 + 8) != param_2) {
    iVar3 = FUN_ram_4004adf8(*(undefined1 *)(param_1 + 1));
    uVar6 = iVar3 * uVar2 + 7 >> 3;
    if ((param_2 < uVar6) ||
       (uVar2 = FUN_ram_4004dade(uVar2,uVar8,*(undefined1 *)(param_1 + 1),param_2),
       *(uint *)(param_1 + 0xc) < uVar2)) {
      uVar4 = 0;
    }
    else {
      cVar1 = *(char *)(param_1 + 1);
      iVar3 = 8;
      if ((((cVar1 != '\a') && (iVar3 = 0x10, cVar1 != '\b')) && (iVar3 = 0x40, cVar1 != '\t')) &&
         (iVar3 = 0x400, cVar1 != '\n')) {
        iVar3 = 0;
      }
      iVar5 = *(int *)(param_1 + 0x10);
      if (*(ushort *)(param_1 + 8) < param_2) {
        iVar7 = iVar3 + (uint)*(ushort *)(param_1 + 8) * (uVar8 - 1) + iVar5;
        iVar5 = iVar3 + (uVar8 - 1) * param_2 + iVar5;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_4000509c(iVar5,iVar7,uVar6);
          iVar5 = iVar5 - param_2;
          iVar7 = iVar7 - (uint)*(ushort *)(param_1 + 8);
        }
      }
      else {
        iVar3 = iVar3 + iVar5;
        iVar5 = iVar3;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_4000509c(iVar5,iVar3,uVar6);
          iVar5 = iVar5 + param_2;
          iVar3 = iVar3 + (uint)*(ushort *)(param_1 + 8);
        }
      }
      *(short *)(param_1 + 8) = (short)param_2;
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x4004df7a.
 * REA evidence: ev_65e0070ea346a206ada9f4181c658484ab59c50c97254d737250a780cafbc76c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004df7a(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = (uint)*(ushort *)(param_1 + 4);
  uVar8 = (uint)*(ushort *)(param_1 + 6);
  if (param_2 == 0) {
    param_2 = FUN_ram_4004dace(uVar2,*(undefined1 *)(param_1 + 1));
  }
  uVar4 = 1;
  if (*(ushort *)(param_1 + 8) != param_2) {
    iVar3 = FUN_ram_4004adf8(*(undefined1 *)(param_1 + 1));
    uVar6 = iVar3 * uVar2 + 7 >> 3;
    if ((param_2 < uVar6) ||
       (uVar2 = FUN_ram_4004dade(uVar2,uVar8,*(undefined1 *)(param_1 + 1),param_2),
       *(uint *)(param_1 + 0xc) < uVar2)) {
      uVar4 = 0;
    }
    else {
      cVar1 = *(char *)(param_1 + 1);
      iVar3 = 8;
      if ((((cVar1 != '\a') && (iVar3 = 0x10, cVar1 != '\b')) && (iVar3 = 0x40, cVar1 != '\t')) &&
         (iVar3 = 0x400, cVar1 != '\n')) {
        iVar3 = 0;
      }
      iVar5 = *(int *)(param_1 + 0x10);
      if (*(ushort *)(param_1 + 8) < param_2) {
        iVar7 = iVar3 + (uint)*(ushort *)(param_1 + 8) * (uVar8 - 1) + iVar5;
        iVar5 = iVar3 + (uVar8 - 1) * param_2 + iVar5;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_4000509c(iVar5,iVar7,uVar6);
          iVar5 = iVar5 - param_2;
          iVar7 = iVar7 - (uint)*(ushort *)(param_1 + 8);
        }
      }
      else {
        iVar3 = iVar3 + iVar5;
        iVar5 = iVar3;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_4000509c(iVar5,iVar3,uVar6);
          iVar5 = iVar5 + param_2;
          iVar3 = iVar3 + (uint)*(ushort *)(param_1 + 8);
        }
      }
      *(short *)(param_1 + 8) = (short)param_2;
      uVar4 = 1;
    }
  }
  return uVar4;
}


