/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4004c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4004c000.
 * REA evidence: ev_75f86856d8f00743f3795eab6d3180f4e3f7b57333b3a8c4f529bf50fd00833e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c000(int param_1)

{
  undefined1 uVar1;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    FUN_ram_4004bf76(_DAT_ram_3007f9cc,0);
    return;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_28 = param_1;
  uVar1 = FUN_ram_4004d31e();
  uStack_24 = CONCAT31(uStack_24._1_3_,uVar1);
  FUN_ram_4004bf06(_DAT_ram_3007f9cc,&iStack_28,0);
  return;
}


/* NanoCore 1.10, address 0x4004c048.
 * REA evidence: ev_614fcebbae6739647a7650c3dfa7623d454c47139a164a17094f36fee0f79e24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c048(int param_1)

{
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 uStack_20;
  
  FUN_ram_4004c000();
  if (param_1 == 0) {
    FUN_ram_4004bf76(_DAT_ram_3007f9c8,0);
    return;
  }
  memset(auStack_28,0,0x18);
  iStack_24 = param_1;
  uStack_20 = FUN_ram_4004d31e(param_1);
  FUN_ram_4004bf06(_DAT_ram_3007f9c8,auStack_28,0);
  return;
}


/* NanoCore 1.10, address 0x4004c09e.
 * REA evidence: ev_846ce18909e22397c4e970b0c89554c0abbf7969f5beb9a1a06f2eddcb4356ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c09e(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40049f5e();
  iVar2 = FUN_ram_40049f5a(param_1);
  if ((iVar1 == 0x33) && (*(int *)(iVar2 + 0x2f8) != 0)) {
    FUN_ram_4004b89a();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004c0d8.
 * REA evidence: ev_8fa1229d01eb16df03a3fa486736d95965e47c8a36c41b039fbb2b2e36137a94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_4004c0d8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_ram_4004a3dc(0x3007f8e4);
  if (piVar2 != (int *)0x0) {
    thunk_FUN_ram_4000505c(piVar2,0,0x310);
    piVar2[2] = -1;
    piVar2[3] = -1;
    piVar2[6] = 0x82;
    *piVar2 = param_1;
    piVar2[1] = param_2;
    piVar2[4] = 0;
    piVar2[5] = 0;
    *(ushort *)(piVar2 + 0x10) = *(ushort *)(piVar2 + 0x10) & 0xfe | 0x1201;
    iVar3 = FUN_ram_40059bbc(0x3c);
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
      iVar3 = FUN_ram_40055cfa();
      piVar2[0xbf] = iVar3;
      FUN_ram_4004a3cc(piVar2 + 0x9b,0x10);
      piVar1 = _DAT_ram_3007f8f4;
      _DAT_ram_3007f8f4 = piVar2;
      iVar3 = FUN_ram_4004b642(FUN_ram_4004885e,10,piVar2);
      piVar2[0xbe] = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_ram_40042b1a(0);
        piVar2[0xb1] = iVar3;
        iVar3 = FUN_ram_40042b1a(0);
        piVar2[0xae] = iVar3;
        iVar3 = FUN_ram_40042b1a(0);
        piVar2[0xb2] = iVar3;
        iVar3 = FUN_ram_40042b1a(0);
        piVar2[0xb3] = iVar3;
        FUN_ram_40047464(piVar2[0xb1]);
        FUN_ram_40047464(piVar2[0xb2]);
        FUN_ram_40047464(piVar2[0xb3]);
        FUN_ram_40042b3a(piVar2[0xb2],2);
        FUN_ram_40042b3a(piVar2[0xb3],2);
        FUN_ram_4004555e(piVar2[0xb1],0);
        FUN_ram_4004555e(piVar2[0xb2],0);
        FUN_ram_4004555e(piVar2[0xb3],0);
        FUN_ram_40044572(piVar2[0xae]);
        _DAT_ram_3007f8f4 = piVar1;
        if (piVar1 == (int *)0x0) {
          _DAT_ram_3007f8f4 = piVar2;
        }
        FUN_ram_40049ed6(piVar2 + 0xb8,FUN_ram_4004c09e,0x33,0);
        FUN_ram_4004b8ac(piVar2[0xbe]);
        return piVar2;
      }
      FUN_ram_40059be4(piVar2);
    }
  }
  return (int *)0x0;
}


/* NanoCore 1.10, address 0x4004c24c.
 * REA evidence: ev_2800a7fa19bf9107d4f4e0c9046e6a8b8f9b6dcf490345cba2828053f586432b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c24c(void)

{
  return _DAT_ram_3007f8f4;
}


/* NanoCore 1.10, address 0x4004c256.
 * REA evidence: ev_4c5c7e38505d814f3a793a7e24009ddae39346cc855521d44d16464c7faa5117
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c256(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004a5a6();
    return;
  }
  FUN_ram_4004a5b2(0x3007f8e4);
  return;
}


/* NanoCore 1.10, address 0x4004c26a.
 * REA evidence: ev_e4c2a641d1b058b2903223fd1cf60fe4fd44a5cd44f4cf23d9a73b9637870453
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c26a(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 == (undefined4 *)0x0)) {
    return 0;
  }
  if (-1 < (int)(param_1[0xbc] << 0x1e)) {
    return *param_1;
  }
  return param_1[1];
}


/* NanoCore 1.10, address 0x4004c28c.
 * REA evidence: ev_aa0cd059f674715d8cb538d64142c06fd51bf703da669170b5aa748fd3024927
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c28c(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 == (undefined4 *)0x0)) {
    return 0;
  }
  if (-1 < (int)(param_1[0xbc] << 0x1e)) {
    return param_1[1];
  }
  return *param_1;
}


/* NanoCore 1.10, address 0x4004c2ae.
 * REA evidence: ev_040b27af87fa6c11f5cab7795c9292dd4bb39eebf4e8ffc934c5036510e926b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c2ae(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 == 0)) {
    return 0x82;
  }
  return *(undefined4 *)(param_1 + 0x18);
}


/* NanoCore 1.10, address 0x4004c2c4.
 * REA evidence: ev_9a7b9dbffc63de7fb354afc599e94df52d88b4ce626e5e375813f146ced8f9d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c2c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(undefined4 *)(param_1 + 0x24) = param_2;
  }
  return;
}


/* NanoCore 1.10, address 0x4004c2d8.
 * REA evidence: ev_0cd7ac26090b718b28606501adad38ca4220bad2687a915de356f22f6c34b4a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c2d8(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return;
}


/* NanoCore 1.10, address 0x4004c2e8.
 * REA evidence: ev_ca3165b333f115384d5d83e7aca11a007235ae7eec2d4fb106f9ac6ce84d1d40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c2e8(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
  }
  return;
}


/* NanoCore 1.10, address 0x4004c2f8.
 * REA evidence: ev_30d5fa793d63f714c2e6b3f83be415c226b2e34acacc8cbefbdc4dd41d2de872
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_4004c2f8(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 == 0)) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x41);
}


/* NanoCore 1.10, address 0x4004c30e.
 * REA evidence: ev_a4a600dae4f06a7f370b51cd5255a2c931d5120707c1ad40879d6d7ea29abcb3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c30e(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = FUN_ram_4004c2f8();
  uVar3 = FUN_ram_4004c26a(param_1);
  uVar4 = FUN_ram_4004c28c(param_1);
  FUN_ram_4004caec(param_2,uVar2);
  if (param_3 != 0) {
    FUN_ram_4004caec(param_3,uVar2);
  }
  uVar5 = FUN_ram_4004ca7e(uVar3,uVar2);
  if (param_5 == 0) {
    if (uVar5 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = param_4 / uVar5;
    }
  }
  FUN_ram_4004cafc(param_1 + 0x278,uVar3,uVar4,uVar2,uVar5,param_2,param_4);
  FUN_ram_4004cafc(param_1 + 0x290,uVar3,uVar4,uVar2,uVar5,param_3,param_4);
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = param_1 + 0x290;
  }
  FUN_ram_4004c2c4(param_1,param_1 + 0x278,iVar1);
  FUN_ram_4004c2d8(param_1,param_5);
  return;
}


/* NanoCore 1.10, address 0x4004c3be.
 * REA evidence: ev_a904e6192795813c887ef23911d0d1a88ea0050021a69458ed87ee5d0b4faf5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c3be(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


/* NanoCore 1.10, address 0x4004c3c4.
 * REA evidence: ev_5eb2bdfff7cce3fca725c99518672ab9867e7a96cec3ee3ca2d0736166a4415b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004c3c4(int param_1)

{
  return *(int *)(param_1 + 0x34) != 0;
}


/* NanoCore 1.10, address 0x4004c3cc.
 * REA evidence: ev_452586e549339ae3ed510a80e1999bcc514a622ffa8829ad3eab6ae3621e0d08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004c3cc(int param_1)

{
  return *(int *)(param_1 + 0x20) != 0;
}


/* NanoCore 1.10, address 0x4004c3d4.
 * REA evidence: ev_85a2856f7f35fabe41f98c104afdeccb36eabafad924367c41956d24e788dce0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c3d4(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2b8);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4004c3e6.
 * REA evidence: ev_1d44bd948e01dd5d987cad951e6e429ee0f974147e8d8cb4cf31a79c0241e208
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c3e6(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 700);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4004c3f8.
 * REA evidence: ev_7e96ade937da5bc5fb7f3191b49ad6c0cc1bdaf9ad5845977abf729bd8660cf0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c3f8(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c8);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4004c40a.
 * REA evidence: ev_55b6497b049b56a635f4b9d9cc97c9155fe6424c889d37fcab5c90d5da46e66e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c40a(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2cc);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4004c41c.
 * REA evidence: ev_76f755ff355e8f01ebf8384472e2798972ddafd31e80d6e18de4bb3435dfe973
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c41c(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c4);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4004c42e.
 * REA evidence: ev_bd0a29893afefb4c121ed470b32fed562d3ce9d74a827bf435776d0e2298ca14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c42e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  thunk_FUN_ram_4000505c(&iStack_2c,0,0x1c);
  iStack_2c = param_1;
  iStack_28 = param_1;
  uStack_24 = param_2;
  uStack_1c = param_3;
  iVar1 = FUN_ram_40049e50(param_1 + 0x2e0,&iStack_2c,1);
  if (iVar1 == 1) {
    FUN_ram_40049e50(param_1 + 0x2e0,&iStack_2c,0);
  }
  return;
}


/* NanoCore 1.10, address 0x4004c47a.
 * REA evidence: ev_858d3aef64ce182c7512b82fd280da8e3520a2dd7e7e315b06c029816f3ddda8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c47a(int param_1,undefined1 param_2)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x41) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 0x2a8) + 0x14) = param_2;
  FUN_ram_4004c42e(param_1,0x32,0);
  return;
}


/* NanoCore 1.10, address 0x4004c49e.
 * REA evidence: ev_3032ad7c21e2789d35568f65796d2e8f2bc5644bb252b535507c14fd14d89e46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4004c49e(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 == 0)) {
    return 0;
  }
  return (*(uint *)(param_1 + 0x2f0) & 7) >> 1;
}


/* NanoCore 1.10, address 0x4004c4b8.
 * REA evidence: ev_cd9844a7bbaffdbad2baba14e3ed5ea09e9b5decb4d62f093774b86c48a5ebfd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c4b8(int param_1)

{
  if (param_1 == 0) {
    param_1 = _DAT_ram_3007f8f4;
  }
  return *(undefined4 *)(param_1 + 0x2f4);
}


/* NanoCore 1.10, address 0x4004c4c8.
 * REA evidence: ev_3d0308276af9054a2cada2a2b4072e31c5aa88754e13897c7499fa297a579672
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c4c8(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) || (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    iVar1 = 1;
    if (param_2 == 0) {
      iVar1 = -1;
    }
    *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + iVar1;
  }
  return;
}


/* NanoCore 1.10, address 0x4004c4e6.
 * REA evidence: ev_9b7aebcf16a72c4beeefebbff2be623a1343736bfdf36c3ae1f74896793e8113
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4004c4e6(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 == 0)) {
    return false;
  }
  return 0 < *(int *)(param_1 + 0x268);
}


/* NanoCore 1.10, address 0x4004c500.
 * REA evidence: ev_24245c08622934cd4f8f1815c7f77589bce1750b6e63d619d8a708d33fa229f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c500(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    *(undefined4 *)(param_1 + 0x2dc) = param_2;
  }
  return;
}


/* NanoCore 1.10, address 0x4004c512.
 * REA evidence: ev_3dbf36b1f5db60b0e7e74fd7f96a6f82a29bf6f61fe1b6d0b86662b2b943398e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c512(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2dc);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4004c524.
 * REA evidence: ev_30a45b72d8f86855f8b27cb35b1d56403bfcf9ed209d6fcedd2d9588b9196bd4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c524(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_3007f8f4, _DAT_ram_3007f8f4 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4004c534.
 * REA evidence: ev_e0beb442a3f77eb07bb31426159c0cc301a32ea3e8bdc4a09ec065651ce002dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c534(void)

{
  FUN_ram_40059b4a(0x3007f9d8);
  return;
}


/* NanoCore 1.10, address 0x4004c540.
 * REA evidence: ev_3ec728897a7af3bba5ad68aa9717775ea06a223fcbe2025430a8f2be8cd42e3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c540(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_40059bbc();
  *puVar1 = _DAT_ram_3007f9d0;
  _DAT_ram_3007f9d0 = puVar1;
  return;
}


/* NanoCore 1.10, address 0x4004c560.
 * REA evidence: ev_5ad37415b72546da761dc84447fff4ed869fe50bf1005a05dfbb5232449d80af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c560(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_ram_40059bbc(0x54);
  FUN_ram_4000305c(iVar1 + 8,param_2,0x10);
  FUN_ram_4000305c(iVar1 + 0x18,param_2,0x10);
  FUN_ram_4000305c(iVar1 + 0x38,param_1 + 0x18,0x10);
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


/* NanoCore 1.10, address 0x4004c5ba.
 * REA evidence: ev_c3d6719aa3b4da7904166df6f40c96c2019c49e720a2c23b65558caa2b3f9c78
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c5ba(void)

{
  FUN_ram_40059b70(0x3007f9d8);
  return;
}


/* NanoCore 1.10, address 0x4004c5c6.
 * REA evidence: ev_f69b7018d4c725ef329862eab7053721e572fe8b01ba81d676ee53ac85772ac7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c5c6(void)

{
  FUN_ram_40059b86(0x3007f9d8);
  return;
}


/* NanoCore 1.10, address 0x4004c5d2.
 * REA evidence: ev_e0df478d96cd48ff6acbbda9a4df1f43a5bd0c9e84fe5476308e403fa14d8774
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c5d2(int param_1,int param_2)

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
          iVar5 = FUN_ram_4004ca7e((piVar2[3] - piVar2[1]) + 1,(char)piVar2[5]);
          uVar6 = ((iVar7 - iVar11) + 1) * iVar5;
          uVar8 = 1;
          if (0x3ff < uVar6) {
            uVar8 = uVar6 >> 10;
          }
          _DAT_ram_3007f9d4 = _DAT_ram_3007f9d4 - uVar8;
          FUN_ram_4004ccdc(*piVar2);
          *piVar2 = 0;
        }
        if (param_1 != 0) {
          piVar1 = *(int **)(param_1 + 0x2a8);
          do {
            piVar10 = piVar1;
            if (piVar10 == (int *)0x0) goto LAB_ram_4004c6d0;
            piVar1 = (int *)piVar10[0xc];
          } while ((int *)piVar10[0xc] != piVar2);
          piVar10[0xc] = piVar2[0xc];
LAB_ram_4004c6d0:
          if (*(code **)(param_1 + 0x2b0) != (code *)0x0) {
            (**(code **)(param_1 + 0x2b0))(param_1,piVar2);
          }
          FUN_ram_40059be4(piVar2);
        }
      }
      iVar7 = FUN_ram_4004d7ee(piVar3);
      if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x4c) & 0x40) != 0)) {
        FUN_ram_40059be4(*(undefined4 *)(iVar7 + 0x1c));
        *(undefined4 *)(iVar7 + 0x1c) = 0;
      }
      FUN_ram_40059be4(piVar3[0x13]);
      FUN_ram_40059be4(piVar3);
      piVar3 = piVar12;
    }
  }
  if (((*(int *)(param_2 + 0x2c) == 0) || (*(char *)(param_2 + 0x34) == '\0')) ||
     (*(int *)(param_2 + 0x28) != 0)) {
    uVar4 = 0;
    for (piVar9 = (int *)_DAT_ram_3007f9d0; piVar9 != (int *)0x0; piVar9 = (int *)*piVar9) {
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
        FUN_ram_4004c5c6();
        break;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x4004c742.
 * REA evidence: ev_a8210177cf1e1168973c899fb7b30ab9ea6b5a4b109c5c4bd4208636470f9f55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c742(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_4004c256(0);
  iVar4 = 0;
  for (; iVar2 != 0; iVar2 = FUN_ram_4004c256(iVar2)) {
    for (iVar1 = *(int *)(iVar2 + 0x2a8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30)) {
      iVar3 = FUN_ram_4004c5d2(iVar2,iVar1);
      if (iVar3 != 0) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 == 0) {
      FUN_ram_4004c5c6();
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4004c78c.
 * REA evidence: ev_200e036f926f3ed4f6b6856bc79d35fd1a19bcd4de03fa80776ecf636bb51d9a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c78c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = DAT_ram_3007f9e0;
  piVar3 = *(int **)(param_2 + 0x4c);
  piVar3[4] = param_1;
  if (cVar1 == '\0') {
    if ((*piVar3 != 0) && (iVar2 = FUN_ram_40042c20(*piVar3,0x80000), iVar2 != 0)) {
      DAT_ram_3007f9e0 = 1;
      FUN_ram_40043bde(*piVar3,0x1d,param_2);
      DAT_ram_3007f9e0 = '\0';
    }
    *(undefined2 *)(param_2 + 0x50) = 0x6400;
    for (piVar3 = (int *)_DAT_ram_3007f9d0; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      if ((code *)piVar3[4] != (code *)0x0) {
        (*(code *)piVar3[4])(piVar3,param_2);
      }
    }
    FUN_ram_4004c742();
    return;
  }
  *(undefined2 *)(param_2 + 0x50) = 0x6400;
  for (piVar3 = (int *)_DAT_ram_3007f9d0; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if ((code *)piVar3[4] != (code *)0x0) {
      (*(code *)piVar3[4])(piVar3,param_2);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4004c82e.
 * REA evidence: ev_891eef73d48275d1896c5ef1a09d14107d1f40a17c0e9a1824c161e083d95db7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c82e(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_ram_40048854();
    iVar1 = FUN_ram_4004c26a();
    FUN_ram_40048854();
    iVar2 = FUN_ram_4004c28c();
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
LAB_ram_4004c8fa:
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
        if (iVar1 <= iVar2) goto LAB_ram_4004c8fa;
      }
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}


/* NanoCore 1.10, address 0x4004c902.
 * REA evidence: ev_a6727a7239f42ee491c3ab49b9e7afb2940063e0de7aa0e12f8afa92a7ee6960
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c902(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_40048854();
  iVar2 = FUN_ram_40059bbc(0x3c);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x2c) = param_1;
    FUN_ram_4000305c(iVar2 + 0x18,param_3,0x10);
    FUN_ram_4000305c(iVar2 + 4,param_3,0x10);
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


/* NanoCore 1.10, address 0x4004c96c.
 * REA evidence: ev_c092fe6f30cbc8e536f11db13083991194ad18fcba5329e1b0f2306d536aff1a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c96c(int *param_1)

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
  iVar2 = FUN_ram_4004ca7e(iVar1,(char)param_1[5]);
  iVar5 = (iVar6 - iVar5) + 1;
  uVar7 = iVar2 * iVar5;
  iVar1 = FUN_ram_4004cb86(iVar1,iVar5,(char)param_1[5],0);
  *param_1 = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar4 = 1;
    if (0x3ff < uVar7) {
      uVar4 = uVar7 >> 10;
    }
    _DAT_ram_3007f9d4 = _DAT_ram_3007f9d4 + uVar4;
    iVar1 = FUN_ram_40049dac((char)param_1[5]);
    if (iVar1 != 0) {
      FUN_ram_4004cd68(*param_1,0);
    }
    uVar3 = *(undefined4 *)(*param_1 + 0x10);
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4004c974.
 * REA evidence: ev_df7f0fd9da124fa6d9fd1a33285c58a8288c24d77323fe3017775b8d5fc81bb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004c974(int *param_1)

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
  iVar2 = FUN_ram_4004ca7e(iVar1,(char)param_1[5]);
  iVar5 = (iVar6 - iVar5) + 1;
  uVar7 = iVar2 * iVar5;
  iVar1 = FUN_ram_4004cb86(iVar1,iVar5,(char)param_1[5],0);
  *param_1 = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar4 = 1;
    if (0x3ff < uVar7) {
      uVar4 = uVar7 >> 10;
    }
    _DAT_ram_3007f9d4 = _DAT_ram_3007f9d4 + uVar4;
    iVar1 = FUN_ram_40049dac((char)param_1[5]);
    if (iVar1 != 0) {
      FUN_ram_4004cd68(*param_1,0);
    }
    uVar3 = *(undefined4 *)(*param_1 + 0x10);
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4004c9f4.
 * REA evidence: ev_0dec0623fcf61c58646cf488f9a350026749e1c3bf81a7203aa53242b28400db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c9f4(undefined4 *param_1)

{
  FUN_ram_4004cd0a(*param_1);
  return;
}


/* NanoCore 1.10, address 0x4004ca00.
 * REA evidence: ev_af0dc84aba160a35ac1b15af3ddceb3495dc2d5d9e78c3bbd497824cc34085a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004ca00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40049d8e(param_2);
  return (iVar1 * param_1 + 7U >> 3) + 7 & 0xfffffff8;
}


/* NanoCore 1.10, address 0x4004ca2c.
 * REA evidence: ev_5caf33eaf033cd2118ad409db5ef931bfb233b41174fe5c74544f76ede8b9fce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004ca2c(void)

{
  thunk_FUN_ram_4000505c(&DAT_ram_3007f9a8,0,0x14);
  _DAT_ram_3007f9a8 = &LAB_ram_4004ca26;
  _DAT_ram_3007f9ac = &LAB_ram_4004ca22;
  _DAT_ram_3007f9b0 = &LAB_ram_4004c9f8;
  _DAT_ram_3007f9b4 = 0;
  _DAT_ram_3007f9b8 = FUN_ram_4004ca00;
  return;
}


/* NanoCore 1.10, address 0x4004ca7e.
 * REA evidence: ev_1e54141c1f9a8081751b8a5d74eac315a76c84cac51dd778d62425d52a44bbf4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004ca7e(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3007f9b8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004ca88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_3007f9b8)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004ca8e.
 * REA evidence: ev_c80d0e98b74a89f7b6f12cbbf10c07c62d05a8bcfc4bae2794d45edd74d35b90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ca8e(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 0) {
    param_4 = FUN_ram_4004ca7e(param_1,param_3);
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


/* NanoCore 1.10, address 0x4004caec.
 * REA evidence: ev_761d6b7d22eb4cdc44b27a0686fbaa7445f0c17c5464a2728552c7a059f6acc5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004caec(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3007f9b0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004caf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_3007f9b0)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004cafc.
 * REA evidence: ev_b72bbd2f52267136ff4a361daa99ce77feb7ad31c84d05eacb79454d560cf6ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004cafc(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                     uint param_6,uint param_7)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    return false;
  }
  thunk_FUN_ram_4000505c(param_1,0,0x18);
  if (param_5 == 0) {
    param_5 = FUN_ram_4004ca7e(param_2,param_4);
  }
  bVar1 = (uint)(param_5 * param_3) <= param_7;
  if (bVar1) {
    *(char *)((int)param_1 + 1) = (char)param_4;
    *(short *)(param_1 + 2) = (short)param_5;
    *(short *)(param_1 + 1) = (short)param_2;
    *(short *)((int)param_1 + 6) = (short)param_3;
    *param_1 = *param_1 & 0xff00 | 0x19;
    uVar2 = FUN_ram_4004caec(param_6,param_4);
    param_1[4] = uVar2;
    param_1[5] = param_6;
    param_1[3] = param_7;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4004cb02.
 * REA evidence: ev_38365d4b44e225e76173a9c5375dde1ac8d886f45ef7915c5346378a9453266f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004cb02(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                     uint param_6,uint param_7)

{
  bool bVar1;
  uint uVar2;
  
  thunk_FUN_ram_4000505c(param_1,0,0x18);
  if (param_5 == 0) {
    param_5 = FUN_ram_4004ca7e(param_2,param_4);
  }
  bVar1 = (uint)(param_5 * param_3) <= param_7;
  if (bVar1) {
    *(char *)((int)param_1 + 1) = (char)param_4;
    *(short *)(param_1 + 2) = (short)param_5;
    *(short *)(param_1 + 1) = (short)param_2;
    *(short *)((int)param_1 + 6) = (short)param_3;
    *param_1 = *param_1 & 0xff00 | 0x19;
    uVar2 = FUN_ram_4004caec(param_6,param_4);
    param_1[4] = uVar2;
    param_1[5] = param_6;
    param_1[3] = param_7;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4004cb86.
 * REA evidence: ev_240837cd513b793878f8b40b7b802cd5120bf0a8ab2154d84a79470f85fecd77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_ram_4004cb86(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)FUN_ram_40059bbc(0x18);
  if (puVar1 != (uint *)0x0) {
    if (param_4 == 0) {
      param_4 = FUN_ram_4004ca7e(param_1,param_3);
    }
    uVar2 = FUN_ram_4004ca8e(param_1,param_2,param_3,param_4);
    if ((_DAT_ram_3007f9a8 == (code *)0x0) ||
       (uVar3 = (*_DAT_ram_3007f9a8)(uVar2,param_3), uVar3 == 0)) {
      FUN_ram_40059be4(puVar1);
      puVar1 = (uint *)0x0;
    }
    else {
      *(char *)((int)puVar1 + 1) = (char)param_3;
      *(short *)(puVar1 + 1) = (short)param_1;
      *(short *)((int)puVar1 + 6) = (short)param_2;
      *(short *)(puVar1 + 2) = (short)param_4;
      *puVar1 = *puVar1 & 0xff00 | 0x300019;
      uVar4 = FUN_ram_4004caec(uVar3,param_3);
      puVar1[4] = uVar4;
      puVar1[5] = uVar3;
      puVar1[3] = uVar2;
    }
  }
  return puVar1;
}


/* NanoCore 1.10, address 0x4004cc2c.
 * REA evidence: ev_2948301e6cbce929db02dece46d6876c176b24a1e9a7f20e6e627be1eb5d5d0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cc2c(int param_1)

{
  int iVar1;
  void *__src;
  uint __n;
  
  iVar1 = FUN_ram_4004cb86(*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6),
                           *(undefined1 *)(param_1 + 1),*(undefined2 *)(param_1 + 8));
  if (iVar1 != 0) {
    __src = *(void **)(param_1 + 0x10);
    *(ushort *)(iVar1 + 2) = *(ushort *)(param_1 + 2) | 0x30;
    __n = *(uint *)(iVar1 + 0xc);
    if (*(uint *)(param_1 + 0xc) < *(uint *)(iVar1 + 0xc)) {
      __n = *(uint *)(param_1 + 0xc);
    }
    memcpy(*(void **)(iVar1 + 0x10),__src,__n);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004cc7a.
 * REA evidence: ev_12b4fb0c8eb91f248dd800b66fc0dc91bdb2abf209daa20227d78933799085df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cc7a(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = (uint)*(byte *)(param_1 + 1);
    }
    if (param_5 == 0) {
      param_5 = FUN_ram_4004ca7e(param_3,param_2);
    }
    uVar1 = FUN_ram_4004ca8e(param_3,param_4,param_2,param_5);
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


/* NanoCore 1.10, address 0x4004ccdc.
 * REA evidence: ev_ab3ee616c26bd8169240b0ff2d4078550c434a5924f865ecc599a8546a2133e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004ccdc(int param_1)

{
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 2) & 0x10) != 0)) {
    if (_DAT_ram_3007f9ac != (code *)0x0) {
      (*_DAT_ram_3007f9ac)(*(undefined4 *)(param_1 + 0x14));
    }
    FUN_ram_40059be4(param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004cd0a.
 * REA evidence: ev_c79c30fa0ee7c614b26c1839f1c7bfc933cb232ffff2ce54d1a42bb808e4fc79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cd0a(int param_1,int param_2,int param_3)

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
      iVar2 = FUN_ram_40049d8e();
      iVar3 = iVar3 + (iVar2 + 7 >> 3) * param_2;
    }
  }
  return iVar3;
}


/* NanoCore 1.10, address 0x4004cd68.
 * REA evidence: ev_154f7cd27b514268cef20f94c9d5ade87d739c3c264308dda50ba1cb464d630c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cd68(int param_1,int *param_2)

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
      if (-2 < param_2[3] - param_2[1]) goto LAB_ram_4004cd80;
    }
    return;
  }
LAB_ram_4004cd80:
  uVar1 = *(ushort *)(param_1 + 8);
  if (param_2 == (int *)0x0) {
    thunk_FUN_ram_4000505c
              (*(undefined4 *)(param_1 + 0x10),0,(uint)*(ushort *)(param_1 + 6) * (uint)uVar1);
    return;
  }
  iVar4 = FUN_ram_40049d8e(*(undefined1 *)(param_1 + 1));
  iVar5 = FUN_ram_4004cd0a(param_1,*param_2,param_2[1]);
  iVar6 = *param_2;
  iVar3 = param_2[2];
  iVar2 = param_2[3];
  for (iVar7 = param_2[1]; iVar7 <= iVar2; iVar7 = iVar7 + 1) {
    thunk_FUN_ram_4000505c(iVar5,0,((iVar3 - iVar6) + 1) * (iVar4 + 7 >> 3));
    iVar5 = iVar5 + (uint)uVar1;
  }
  return;
}


/* NanoCore 1.10, address 0x4004ce08.
 * REA evidence: ev_8617853c6938224b57f3e5094481118c6ffb4c599cdf9b662fb82f3e25b2c644
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ce08(int param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  void *__src;
  void *__dest;
  int iVar5;
  int iVar6;
  size_t __n;
  int iVar7;
  
  if (param_2 == (int *)0x0) {
    uVar4 = (uint)*(ushort *)(param_1 + 4);
LAB_ram_4004ce28:
    cVar1 = *(char *)(param_1 + 1);
    if ((byte)(cVar1 - 7U) < 4) {
      __n = 8;
      if (((cVar1 != '\a') && (__n = 0x10, cVar1 != '\b')) && (__n = 0x40, cVar1 != '\t')) {
        __n = 0x400;
      }
      memcpy(*(void **)(param_1 + 0x10),*(void **)(param_3 + 0x10),__n);
    }
    if (param_4 == (int *)0x0) {
      if (*(ushort *)(param_3 + 4) != uVar4) {
        return;
      }
      iVar7 = 0;
      iVar6 = 0;
      goto LAB_ram_4004cea4;
    }
  }
  else {
    uVar4 = (param_2[2] - *param_2) + 1;
    if (param_4 == (int *)0x0) goto LAB_ram_4004ce28;
  }
  iVar6 = *param_4;
  if ((param_4[2] - iVar6) + 1U != uVar4) {
    return;
  }
  iVar7 = param_4[1];
LAB_ram_4004cea4:
  __src = (void *)FUN_ram_4004cd0a(param_3,iVar6,iVar7);
  if (param_2 == (int *)0x0) {
    __dest = (void *)FUN_ram_4004cd0a(param_1,0,0);
    iVar6 = 0;
    iVar7 = *(ushort *)(param_1 + 6) - 1;
  }
  else {
    __dest = (void *)FUN_ram_4004cd0a(param_1,*param_2,param_2[1]);
    iVar6 = param_2[1];
    iVar7 = param_2[3];
  }
  uVar2 = *(ushort *)(param_1 + 8);
  uVar3 = *(ushort *)(param_3 + 8);
  iVar5 = FUN_ram_40049d8e(*(undefined1 *)(param_1 + 1));
  for (; iVar6 <= iVar7; iVar6 = iVar6 + 1) {
    memcpy(__dest,__src,(int)(iVar5 * uVar4 + 7) >> 3);
    __dest = (void *)((int)__dest + (uint)uVar2);
    __src = (void *)((int)__src + (uint)uVar3);
  }
  return;
}


/* NanoCore 1.10, address 0x4004cf0c.
 * REA evidence: ev_b869e221d18ba00a30053323bb8d93dc4b64af85c84927228d3f1064be627ae2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004cf0c(int param_1,uint param_2)

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
    param_2 = FUN_ram_4004ca7e(uVar2,*(undefined1 *)(param_1 + 1));
  }
  uVar4 = 1;
  if (*(ushort *)(param_1 + 8) != param_2) {
    iVar3 = FUN_ram_40049d8e(*(undefined1 *)(param_1 + 1));
    uVar6 = iVar3 * uVar2 + 7 >> 3;
    if ((param_2 < uVar6) ||
       (uVar2 = FUN_ram_4004ca8e(uVar2,uVar8,*(undefined1 *)(param_1 + 1),param_2),
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
          thunk_FUN_ram_40005166(iVar5,iVar7,uVar6);
          iVar5 = iVar5 - param_2;
          iVar7 = iVar7 - (uint)*(ushort *)(param_1 + 8);
        }
      }
      else {
        iVar3 = iVar3 + iVar5;
        iVar5 = iVar3;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_40005166(iVar5,iVar3,uVar6);
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


/* NanoCore 1.10, address 0x4004cf2a.
 * REA evidence: ev_470e533e2c6231700b78897de88d1862d0a49e59dd7013730f49bdc321dcd7c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004cf2a(int param_1,uint param_2)

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
    param_2 = FUN_ram_4004ca7e(uVar2,*(undefined1 *)(param_1 + 1));
  }
  uVar4 = 1;
  if (*(ushort *)(param_1 + 8) != param_2) {
    iVar3 = FUN_ram_40049d8e(*(undefined1 *)(param_1 + 1));
    uVar6 = iVar3 * uVar2 + 7 >> 3;
    if ((param_2 < uVar6) ||
       (uVar2 = FUN_ram_4004ca8e(uVar2,uVar8,*(undefined1 *)(param_1 + 1),param_2),
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
          thunk_FUN_ram_40005166(iVar5,iVar7,uVar6);
          iVar5 = iVar5 - param_2;
          iVar7 = iVar7 - (uint)*(ushort *)(param_1 + 8);
        }
      }
      else {
        iVar3 = iVar3 + iVar5;
        iVar5 = iVar3;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_40005166(iVar5,iVar3,uVar6);
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


