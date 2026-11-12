/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4001f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4001f4f4.
 * REA evidence: ev_e0612e8f3cb64a691d13f20d8d425b234c0a4c5bc9eb92811cd49692e1a1471b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f4f4(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_50 [7];
  
  uVar3 = FUN_ram_4001ad02();
  if (-1 < (int)uVar3) {
    bVar1 = *(byte *)(uVar3 + 0x3006aebc);
    uVar4 = FUN_ram_40025ca4(uVar3,param_2);
    *(char *)(uVar3 + 0x3006aebc) = (char)uVar4;
    FUN_ram_40023340(uVar3,uVar4);
    if (bVar1 != uVar4) {
      memset(local_50,0,0x30);
      uVar4 = FUN_ram_40033b16(uVar3 & 0xff,uVar4,local_50,0xc);
      puVar2 = local_50;
      for (uVar3 = 0; (uVar3 & 0xff) < uVar4; uVar3 = uVar3 + 1) {
        FUN_ram_4001e962(*puVar2,param_1,uVar3);
        puVar2 = (undefined8 *)((int)puVar2 + 4);
      }
    }
    if ((((DAT_ram_3006a9d2 != '\0') && (_DAT_ram_3006aa24 != 0)) && (param_1 != 0)) &&
       (iVar5 = FUN_ram_4000513e(_DAT_ram_3006aa24,param_1,0x10), iVar5 == 0)) {
      FUN_ram_4001c1cc(_DAT_ram_3006aa24);
      DAT_ram_3006acf4 = 0;
      DAT_ram_3006ad1c = FUN_ram_4001ea6e(_DAT_ram_3006aa24);
      FUN_ram_4001d562();
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4001f5ce.
 * REA evidence: ev_f036598692911238c00ae8e768ba3bce8c8f99d69e29d55c74a6d72599d1922f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_400256bc(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
  return;
}


/* NanoCore 1.12, address 0x4001f5d2.
 * REA evidence: ev_0bf8b97065c20f5679bd0775759a23cc4cd732662671b3062e49f5f1c4afa174
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_400256ca(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar5 = 1;
    if ((int)param_3 < 1) {
      iVar5 = -1;
    }
    iVar1 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
    iVar2 = 4;
    if (iVar1 < 4) {
      iVar2 = 1;
      if (iVar1 != 1) {
        iVar2 = 2;
      }
    }
    if (param_1 != (int *)0x0) {
      uVar3 = FUN_ram_400043ae(0x5a);
      iVar4 = FUN_ram_40004346();
      if ((*param_1 != 0) && (param_2 == (char)param_1[1])) {
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        if ((uint)(iVar4 - *param_1) <= uVar3) {
          iVar2 = iVar2 << 1;
        }
      }
      *param_1 = iVar4;
      *(char *)(param_1 + 1) = (char)param_2;
    }
    return iVar1 * iVar5 * iVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4001f5d6.
 * REA evidence: ev_4e836b2e49cd4e8f8cdab7980ba757bb3dd98f50438dc626ee0c2be9a3b67acc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_4002575c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_400256ca();
  return iVar1 * 10;
}


/* NanoCore 1.12, address 0x4001f5da.
 * REA evidence: ev_6c086b7ef0faf94212c8e781b85a6e6313f0de9c155cc970f0eaabef57b95203
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002578a) */

int thunk_FUN_ram_40025770(int param_1)

{
  if (param_1 < 0x3e9) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 1000;
  }
  return (param_1 * 0xa8c) / 1000;
}


/* NanoCore 1.12, address 0x4001f5de.
 * REA evidence: ev_0f621924394bd7131184823447f707ea7ca7b49cabb5e274aaa837bc2d252c86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40025798(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  return param_1 * 10;
}


/* NanoCore 1.12, address 0x4001f5e2.
 * REA evidence: ev_c3a58e2038024ba7985f099b99ebfa4920ed1498d6aa9ab17eadf538fdf80978
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_400257de(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4002575c(param_1,param_2,param_4);
  iVar2 = 100;
  if ((param_3 < 0x65) && (iVar2 = param_3, param_3 < 0)) {
    iVar2 = 0;
  }
  iVar1 = iVar1 + iVar2 * 10;
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  FUN_ram_400257b4(iVar1);
  return;
}


/* NanoCore 1.12, address 0x4001f5e6.
 * REA evidence: ev_9843fc5a2c78158efd50971f57809b039d2583ad46b4c6a45a3ffac5729650db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f5e6(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_ram_40022920();
  uVar2 = 0x3006b3d8;
  if (iVar1 != 0) {
    uVar2 = 0x3006b418;
  }
  FUN_ram_400172bc(_DAT_ram_3006b384,uVar2);
  return;
}


/* NanoCore 1.12, address 0x4001f610.
 * REA evidence: ev_51da9ecb7012937db3706b990217ea05e66bf5c9c87cd13e3985fb47d3f15816
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f610(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_ram_40022a0e();
  FUN_ram_40005520(0x3006b32c,0x10,&DAT_ram_4009a464,uVar1);
  FUN_ram_40017bd8(_DAT_ram_3006b33c,0x3006b340,0x3006b32c);
  return;
}


/* NanoCore 1.12, address 0x4001f650.
 * REA evidence: ev_4845a830d6af34700904fe92ff8f1fb4c3089336c3b197b34d219e66704ea50f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f650(void)

{
  FUN_ram_40005520(0x3006b290,0x10,&DAT_ram_4009a668,&DAT_ram_4009a468);
  FUN_ram_40017bd8(_DAT_ram_3006b2a0,0x3006b2a4,0x3006b290);
  return;
}


/* NanoCore 1.12, address 0x4001f692.
 * REA evidence: ev_0907d05af4921b23fde62274ad1abdb5607cc25dc622f80a9105510130909128
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f692(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40022a8e();
  FUN_ram_40005520(0x3006b4a4,8,&DAT_ram_4009a214,uVar1);
  FUN_ram_40017bd8(_DAT_ram_3006b4ac,0x3006b4b0,0x3006b4a4);
  return;
}


/* NanoCore 1.12, address 0x4001f6d2.
 * REA evidence: ev_18cf4d9ae9e3d7c88887904d948f10a67388c12dc395aec19ffc78bbbd04492e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f6d2(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40022b04();
  FUN_ram_40005520(0x3006b230,8,&DAT_ram_4009a214,uVar1);
  FUN_ram_40017bd8(_DAT_ram_3006b238,0x3006b23c,0x3006b230);
  return;
}


/* NanoCore 1.12, address 0x4001f712.
 * REA evidence: ev_780086f9dfa6ffb6ea3fb08f133364a781bc6f19fa535599c2c8943a53fd6f26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f712(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_400229b4();
  uVar2 = 0;
  if (uVar1 < 0x11) {
    uVar2 = uVar1;
  }
  FUN_ram_40005520(0x3006b3ac,8,&DAT_ram_4009a214,uVar2);
  FUN_ram_40017bd8(_DAT_ram_3006b3b4,0x3006b3b8,0x3006b3ac);
  return;
}


/* NanoCore 1.12, address 0x4001f75a.
 * REA evidence: ev_dff7a20acbd4730e03419a79025bbea6090765f6c14cd554cb3c4c35d3f69545
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001f75a(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = _DAT_ram_3006b268;
  bVar1 = _DAT_ram_3006b268 != 0;
  uVar5 = 0;
  if (_DAT_ram_3006b268 != 0) {
    uVar5 = FUN_ram_4002d23e();
  }
  uVar5 = uVar5 & 1;
  FUN_ram_40017d68(_DAT_ram_3006b45c,0x3006b460,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b360,0x3006b364,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b308,0x3006b30c,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b33c,0x3006b340,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b480,0x3006b484,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b4ac,0x3006b4b0,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b20c,0x3006b210,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b238,0x3006b23c,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b388,0x3006b38c,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b3b4,0x3006b3b8,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b26c,0x3006b270,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b2a0,0x3006b2a4,bVar1);
  FUN_ram_40017d60(0x3006b460,uVar5);
  FUN_ram_40017d60(0x3006b364,uVar5);
  FUN_ram_40017d60(0x3006b30c,uVar5);
  FUN_ram_40017d60(0x3006b340,uVar5);
  FUN_ram_40017d60(0x3006b484,uVar5);
  FUN_ram_40017d60(0x3006b4b0,uVar5);
  FUN_ram_40017d60(0x3006b210,uVar5);
  FUN_ram_40017d60(0x3006b23c,uVar5);
  FUN_ram_40017d60(0x3006b38c,uVar5);
  FUN_ram_40017d60(0x3006b3b8,uVar5);
  FUN_ram_40017d60(0x3006b270,uVar5);
  FUN_ram_40017d60(0x3006b2a4,uVar5);
  if (((((iVar2 != 0) && (_DAT_ram_3006b45c != 0)) && (_DAT_ram_3006b360 != 0)) &&
      (((_DAT_ram_3006b308 != 0 && (_DAT_ram_3006b33c != 0)) &&
       ((_DAT_ram_3006b480 != 0 && ((_DAT_ram_3006b4ac != 0 && (_DAT_ram_3006b20c != 0)))))))) &&
     ((_DAT_ram_3006b238 != 0 &&
      ((((_DAT_ram_3006b388 != 0 && (_DAT_ram_3006b3b4 != 0)) && (_DAT_ram_3006b26c != 0)) &&
       (_DAT_ram_3006b2a0 != 0)))))) {
    FUN_ram_40048ade(_DAT_ram_3006b45c,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b460);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b360,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b364);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b308,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b30c);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b33c,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b340);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b480,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b484);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b4ac,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b4b0);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b20c,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b210);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b238,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b23c);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b388,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b38c);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b3b4,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b3b8);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b26c,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b270);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40048ade(_DAT_ram_3006b2a0,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006b2a4);
      if (iVar6 != 0) {
        FUN_ram_40048ade(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    FUN_ram_40045068(_DAT_ram_3006b45c,uVar3);
    FUN_ram_400460be(_DAT_ram_3006b45c,_DAT_ram_3006b2c4,0x14,8,0);
    FUN_ram_40017b64(_DAT_ram_3006b45c,0x3006b460);
    FUN_ram_40045068(_DAT_ram_3006b360,uVar3);
    FUN_ram_400460be(_DAT_ram_3006b360,_DAT_ram_3006b384,0x11,0xfffffff8,0);
    FUN_ram_40017b64(_DAT_ram_3006b360,0x3006b364);
    FUN_ram_40045068(_DAT_ram_3006b308,uVar3);
    FUN_ram_400460be(_DAT_ram_3006b308,_DAT_ram_3006b33c,0x11,0xfffffff8,0);
    FUN_ram_40017b64(_DAT_ram_3006b308,0x3006b30c);
    FUN_ram_400450a2(_DAT_ram_3006b33c,0x2d,0x17);
    FUN_ram_40017b64(_DAT_ram_3006b33c,0x3006b340);
    FUN_ram_40045068(_DAT_ram_3006b480,uVar3);
    FUN_ram_400460be(_DAT_ram_3006b480,_DAT_ram_3006b4ac,0x11,0xfffffff8,0);
    FUN_ram_40017b64(_DAT_ram_3006b480,0x3006b484);
    FUN_ram_400450a2(_DAT_ram_3006b4ac,0x2d,0x17);
    FUN_ram_40017b64(_DAT_ram_3006b4ac,0x3006b4b0);
    FUN_ram_40045068(_DAT_ram_3006b20c,uVar3);
    FUN_ram_400460be(_DAT_ram_3006b20c,_DAT_ram_3006b238,0x11,0xfffffff8,0);
    FUN_ram_40017b64(_DAT_ram_3006b20c,0x3006b210);
    FUN_ram_400450a2(_DAT_ram_3006b238,0x2d,0x17);
    FUN_ram_40017b64(_DAT_ram_3006b238,0x3006b23c);
    FUN_ram_40045068(_DAT_ram_3006b388,uVar3);
    FUN_ram_400460be(_DAT_ram_3006b388,_DAT_ram_3006b3b4,0x11,0xfffffff8,0);
    FUN_ram_40017b64(_DAT_ram_3006b388,0x3006b38c);
    FUN_ram_400450a2(_DAT_ram_3006b3b4,0x2d,0x17);
    FUN_ram_40017b64(_DAT_ram_3006b3b4,0x3006b3b8);
    FUN_ram_40045068(_DAT_ram_3006b26c,uVar3);
    FUN_ram_400460be(_DAT_ram_3006b26c,_DAT_ram_3006b2a0,0x11,0xfffffff8,0);
    FUN_ram_40017b64(_DAT_ram_3006b26c,0x3006b270);
    FUN_ram_400450a2(_DAT_ram_3006b2a0,0x2d,0x17);
    FUN_ram_40017b64(_DAT_ram_3006b2a0,0x3006b2a4);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001fe50.
 * REA evidence: ev_80840aa5248a55e53767c08c21c4bfd95024b6b7d4d34fb52e0ff9522528d5f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001fe50(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = FUN_ram_4001709e();
  uVar1 = (undefined1)((uint)uVar2 >> 0x10);
  uStack_24 = (undefined2)uVar2;
  if (_DAT_ram_3006b33c != 0) {
    if ((DAT_ram_3006b260 == '\0') || (_DAT_ram_3006b264 != 1)) {
      uStack_20 = CONCAT22(uStack_20._2_2_,uStack_24);
      uVar3 = uVar1;
    }
    else {
      uStack_20 = (uint)uStack_20._2_2_ << 0x10;
      uVar3 = 0xff;
    }
    uStack_20._0_3_ = CONCAT12(uVar3,(undefined2)uStack_20);
    FUN_ram_40048aae(_DAT_ram_3006b33c,uStack_20,0);
  }
  if (_DAT_ram_3006b4ac != 0) {
    if ((DAT_ram_3006b260 == '\0') || (_DAT_ram_3006b264 != 2)) {
      uStack_1c = CONCAT22(uStack_1c._2_2_,uStack_24);
      uVar3 = uVar1;
    }
    else {
      uStack_1c = (uint)uStack_1c._2_2_ << 0x10;
      uVar3 = 0xff;
    }
    uStack_1c._0_3_ = CONCAT12(uVar3,(undefined2)uStack_1c);
    FUN_ram_40048aae(_DAT_ram_3006b4ac,uStack_1c,0);
  }
  if (_DAT_ram_3006b238 != 0) {
    if ((DAT_ram_3006b260 == '\0') || (_DAT_ram_3006b264 != 3)) {
      uStack_18 = CONCAT22(uStack_18._2_2_,uStack_24);
      uVar3 = uVar1;
    }
    else {
      uStack_18 = (uint)uStack_18._2_2_ << 0x10;
      uVar3 = 0xff;
    }
    uStack_18._0_3_ = CONCAT12(uVar3,(undefined2)uStack_18);
    FUN_ram_40048aae(_DAT_ram_3006b238,uStack_18,0);
  }
  if (_DAT_ram_3006b3b4 != 0) {
    if ((DAT_ram_3006b260 == '\0') || (_DAT_ram_3006b264 != 4)) {
      uStack_14 = CONCAT22(uStack_14._2_2_,uStack_24);
    }
    else {
      uStack_14 = (uint)uStack_14._2_2_ << 0x10;
      uVar1 = 0xff;
    }
    uStack_14._0_3_ = CONCAT12(uVar1,(undefined2)uStack_14);
    FUN_ram_40048aae(_DAT_ram_3006b3b4,uStack_14,0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001ff7e.
 * REA evidence: ev_171fa85b0a881e1ce0525224a9cb2f34e24169363287e63420252575f5cc31d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ff7e(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_18;
  uint auStack_14 [2];
  
  uStack_18 = FUN_ram_40014c88();
  iVar2 = FUN_ram_4002d3a8(2);
  iVar3 = FUN_ram_4002d3c6(2,auStack_14);
  if (iVar3 != 0) {
    uStack_18 = auStack_14[0];
  }
  uStack_18 = uStack_18 & 0xffffff;
  if (_DAT_ram_3006b25c != 0) {
    FUN_ram_400489d2(_DAT_ram_3006b25c,uStack_18,0);
    FUN_ram_400489f0(_DAT_ram_3006b25c,0xff,0);
  }
  if (_DAT_ram_3006b1c8 != 0) {
    if (iVar2 == 0) {
      FUN_ram_400440ce(_DAT_ram_3006b1c8,1);
    }
    else {
      FUN_ram_400172bc(_DAT_ram_3006b1c8,0x3006b1cc);
    }
  }
  FUN_ram_400172bc(_DAT_ram_3006b2c4,0x3006b2c8);
  uVar1 = _DAT_ram_3006b45c;
  uVar4 = FUN_ram_4002d6f8(1);
  FUN_ram_40017bd8(uVar1,0x3006b460,uVar4);
  uVar1 = _DAT_ram_3006b360;
  uVar4 = FUN_ram_4002d6f8(0x16);
  FUN_ram_40017bd8(uVar1,0x3006b364,uVar4);
  uVar1 = _DAT_ram_3006b308;
  uVar4 = FUN_ram_4002d6f8(0x17);
  FUN_ram_40017bd8(uVar1,0x3006b30c,uVar4);
  if (DAT_ram_3006b1c4 != '\0') {
    FUN_ram_4001f5e6();
  }
  FUN_ram_4001f610();
  uVar1 = _DAT_ram_3006b480;
  uVar4 = FUN_ram_4002d6f8(0x18);
  FUN_ram_40017bd8(uVar1,0x3006b484,uVar4);
  FUN_ram_4001f692();
  uVar1 = _DAT_ram_3006b20c;
  uVar4 = FUN_ram_4002d6f8(0x19);
  FUN_ram_40017bd8(uVar1,0x3006b210,uVar4);
  FUN_ram_4001f6d2();
  uVar1 = _DAT_ram_3006b388;
  uVar4 = FUN_ram_4002d6f8(0x24);
  FUN_ram_40017bd8(uVar1,0x3006b38c,uVar4);
  FUN_ram_4001f712();
  uVar1 = _DAT_ram_3006b26c;
  uVar4 = FUN_ram_4002d6f8(0x1a);
  FUN_ram_40017bd8(uVar1,0x3006b270,uVar4);
  FUN_ram_4001f650();
  iVar2 = _DAT_ram_3006b268;
  if (_DAT_ram_3006b268 != 0) {
    _DAT_ram_3006b268 = 0;
    FUN_ram_4001f75a();
    FUN_ram_40059ff0(iVar2);
  }
  _DAT_ram_3006b268 = FUN_ram_40017ef4(s_font_settings_ram_4009a470,s_font_default_ram_4009a06c);
  FUN_ram_4001f75a();
  FUN_ram_4001fe50();
  return;
}


