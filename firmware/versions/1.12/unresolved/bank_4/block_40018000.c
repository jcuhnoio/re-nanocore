/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40018000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4001800c.
 * REA evidence: ev_376f63e3a1b83ac0207f8bc5ab99ed93f7d23c7ca05624800771cd134c81f196
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001800c(uint param_1)

{
  char cVar1;
  char acStack_11 [9];
  
  cVar1 = DAT_ram_3004acf4;
  acStack_11[0] = (char)param_1;
  if (100 < param_1) {
    acStack_11[0] = 'd';
  }
  DAT_ram_3004acf4 = acStack_11[0];
  FUN_ram_4000e56e();
  FUN_ram_4001680a();
  if (_DAT_ram_3006a2ac != 0) {
    FUN_ram_400455dc();
  }
  if (acStack_11[0] != cVar1) {
    FUN_ram_40014472(0x69,acStack_11,1);
  }
  return;
}


/* NanoCore 1.12, address 0x4001806a.
 * REA evidence: ev_e4c2f17510d8b01009ea0f5a5c7ea6d7a10820a8b9310d3c55a5f970ca1fa1fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001806a(void)

{
  return DAT_ram_3004acf4;
}


/* NanoCore 1.12, address 0x40018074.
 * REA evidence: ev_4a88d4cafa30feff1f5a875a594bf9df3f3952cf025d99e87fe81fc5ee3ea4d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018074(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400061cc();
    _DAT_ram_3006a258 = _DAT_ram_3006a258 + param_1;
    if (_DAT_ram_3006a258 < -0x80) {
      _DAT_ram_3006a258 = -0x80;
    }
    if (0x80 < _DAT_ram_3006a258) {
      _DAT_ram_3006a258 = 0x80;
    }
    FUN_ram_400061ee();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400180b4.
 * REA evidence: ev_13ffed185e6412c7812bdab375600544fdc12253f452ad6dbe0e7e060a816fce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400180b4(void)

{
  FUN_ram_40016c50();
  FUN_ram_40017c76();
  return;
}


/* NanoCore 1.12, address 0x400180c4.
 * REA evidence: ev_e726b30e157969599454972ce7e57ad3c6f5504b97b318c762d3676f26710286
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400180c4(uint param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_3c [16];
  undefined1 uStack_2c;
  char acStack_28 [8];
  undefined1 auStack_20 [28];
  
  if ((int)param_1 < 0x40) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x3f;
  }
  iVar1 = FUN_ram_4003331a(param_1 & 0xff,acStack_28);
  if ((iVar1 == 0) && (acStack_28[0] != '\0')) {
    memcpy(auStack_3c,auStack_20,0x10);
    puVar2 = auStack_3c;
    uStack_2c = 0;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  FUN_ram_400180b4(puVar2);
  return;
}


/* NanoCore 1.12, address 0x4001810c.
 * REA evidence: ev_ec25dbb8365386d35e4ae630eef20eb64bab4eb169bdeb0f39de4a402c8cd69e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001810c(void)

{
  if (DAT_ram_3006a324 != '\0') {
    DAT_ram_3006a324 = '\0';
    if (DAT_ram_3006a2a4 != '\0') {
      FUN_ram_400180c4(_DAT_ram_3006a33c);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40018136.
 * REA evidence: ev_d6c21d22ae82978440da6d6dce59e78283293d88cc5851cf67c52c1051c80c80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40018136(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = param_2 - 1;
    if (8 < uVar1) {
      uVar1 = 8;
    }
    memcpy(param_1,&DAT_ram_3006a2f4,uVar1);
    *(undefined1 *)(param_1 + uVar1) = 0;
    while ((uVar1 != 0 && (uVar1 = uVar1 - 1, *(char *)(param_1 + uVar1) == ' '))) {
      *(undefined1 *)(param_1 + uVar1) = 0;
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40018184.
 * REA evidence: ev_93e803343db6ad514125484c62309ea7479cbfeb94341a264fbc8174a054b6fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018184(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar2 = _DAT_ram_3006a3a0;
  if (_DAT_ram_3006a394 != 0) {
    iVar2 = FUN_ram_40043c8a(_DAT_ram_3006a394,1);
    if ((((_DAT_ram_3006a2f0 == param_1) || (DAT_ram_3006a326 != '\0')) ||
        ((_DAT_ram_3006a348 != 0 && (iVar3 = FUN_ram_40043c8a(_DAT_ram_3006a348,1), iVar3 == 0))))
       || (param_1 == 0)) {
      if (iVar2 == 0) {
        FUN_ram_400440ce(_DAT_ram_3006a394,1);
      }
      DAT_ram_3006a3a4 = '\0';
      _DAT_ram_3006a3a0 = 0;
      iVar2 = _DAT_ram_3006a3a0;
    }
    else {
      iVar3 = FUN_ram_4002d52c();
      FUN_ram_4004514a(param_1,&local_50);
      iVar4 = iStack_4c - iVar3;
      iVar5 = local_50 - iVar3;
      iVar1 = (iStack_48 - local_50) + 1 + iVar3 * 2;
      iVar3 = (iStack_44 - iStack_4c) + 1 + iVar3 * 2;
      if (((((DAT_ram_3006a3a4 == '\0') || (_DAT_ram_3006a3ac != iVar5)) ||
           (_DAT_ram_3006a3b0 != iVar4)) &&
          (FUN_ram_40045014(_DAT_ram_3006a394,iVar5,iVar4), _DAT_ram_3006a3ac = iVar5,
          _DAT_ram_3006a3b0 = iVar4, DAT_ram_3006a3a4 == '\0')) ||
         ((_DAT_ram_3006a3a8 != iVar1 || (_DAT_ram_3006a39c != iVar3)))) {
        FUN_ram_400450a2(_DAT_ram_3006a394,iVar1,iVar3);
        _DAT_ram_3006a39c = iVar3;
        _DAT_ram_3006a3a8 = iVar1;
      }
      DAT_ram_3006a3a4 = '\x01';
      if (iVar2 != 0) {
        FUN_ram_40043ba4(_DAT_ram_3006a394,1);
      }
      iVar3 = 0;
      if (_DAT_ram_3006a3a0 != 0) {
        iVar3 = FUN_ram_40048b6e(_DAT_ram_3006a3a0);
      }
      iVar1 = FUN_ram_40048b6e(param_1);
      if ((iVar2 != 0) || (iVar2 = param_1, iVar3 != iVar1)) {
        FUN_ram_40016840(_DAT_ram_3006a394);
        iVar2 = param_1;
      }
    }
  }
  _DAT_ram_3006a3a0 = iVar2;
  return;
}


/* NanoCore 1.12, address 0x40018310.
 * REA evidence: ev_7eabd39e1e281f3d10f95a1451dee17cd73c9c626e7f1105a2563cb716c1b664
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018310(uint param_1)

{
  if ((_DAT_ram_3006a394 != 0) &&
     ((DAT_ram_3006a39b == '\0' || ((param_1 & 0xffffff) != (uint)_DAT_ram_3006a398)))) {
    _DAT_ram_3006a398 = (uint3)param_1;
    DAT_ram_3006a39b = 1;
    FUN_ram_400489fe(_DAT_ram_3006a394,param_1,0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40018384.
 * REA evidence: ev_b7e4649f0140e5c27374d965443f99b64bfbc606e2a6e157abb68e5282ef87b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018384(void)

{
  undefined3 uVar1;
  undefined4 uVar2;
  
  if (DAT_ram_3004ace7 == '\0') {
    return;
  }
  FUN_ram_40018184(_DAT_ram_3006a3b4);
  if (((DAT_ram_3006a2a4 == '\0') && (DAT_ram_3006a326 == '\0')) && (DAT_ram_3006a340 == '\0')) {
    uVar2 = 0;
    if (DAT_ram_3006a448 == '\0') goto LAB_ram_400183ca;
  }
  uVar2 = 1;
LAB_ram_400183ca:
  uVar1 = FUN_ram_400170ea(uVar2);
  FUN_ram_40018310(uVar1);
  return;
}


/* NanoCore 1.12, address 0x400183ee.
 * REA evidence: ev_c263e6e9faa0bfb774af12159b5714aabb9f00188e55bd247cce2395f61e34fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400183ee(void)

{
  if (DAT_ram_3004ace7 != '\0') {
    FUN_ram_40018554();
  }
  FUN_ram_40018384();
  return;
}


/* NanoCore 1.12, address 0x40018406.
 * REA evidence: ev_d3beff05b2e81caefc910794d661a772d3d48297565ec0d3eefdb6b1e394f027
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40018406(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      iVar3 = iVar2;
      if (*(int *)(&DAT_ram_30069b00 + iVar2 * 4) == iVar1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar1;
    } while (iVar2 != 8);
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    FUN_ram_40016a1e(*(undefined4 *)(iVar2 + 0x30069ae0),iVar3);
    if (iVar1 == 8) {
      FUN_ram_400166a0();
      if (DAT_ram_3004ace7 == '\0') {
        return;
      }
      FUN_ram_400183ee();
      return;
    }
  } while( true );
}


/* NanoCore 1.12, address 0x40018472.
 * REA evidence: ev_f567528c22b99a15ba32666e5d943e7745fd73e29f6edb5690501eef76cc4a1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40018472(int param_1,uint param_2)

{
  int iVar1;
  uint uStack_1c;
  byte local_18 [12];
  
  uStack_1c = 0;
  if ((param_1 != 0) && (7 < param_2)) {
    FUN_ram_40022f92();
    FUN_ram_40022f62(local_18,8,&uStack_1c);
    if (7 < uStack_1c) {
      iVar1 = 0;
      do {
        *(uint *)(&DAT_ram_30069b00 + iVar1 * 4) = (uint)local_18[iVar1];
        iVar1 = iVar1 + 1;
      } while (iVar1 != 8);
      FUN_ram_40018406();
      FUN_ram_4001a950();
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400184c6.
 * REA evidence: ev_3ca280b1bf79e95db850a2d01d44da5be20f1a457e86bee234ed3abb0e553f66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400184c6(void)

{
  int iVar1;
  byte abStack_11 [13];
  
  iVar1 = FUN_ram_40015148(abStack_11);
  if (iVar1 == 0) {
    _DAT_ram_3006a33c = (uint)abStack_11[0];
    FUN_ram_400180c4();
  }
  FUN_ram_40017118();
  FUN_ram_400183ee();
  return;
}


/* NanoCore 1.12, address 0x400184f2.
 * REA evidence: ev_9252414988a9260b75ac46891b0fdd97141eb56c892be7b2b7b50395d2f35e74
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400184f2(undefined1 param_1)

{
  int iVar1;
  undefined1 auStack_11 [9];
  
  FUN_ram_4001810c();
  iVar1 = FUN_ram_400150ea(param_1);
  if (iVar1 == 0) {
    auStack_11[0] = param_1;
    FUN_ram_40014472(0x60,auStack_11,1);
    return;
  }
  FUN_ram_400184c6();
  return;
}


/* NanoCore 1.12, address 0x4001852e.
 * REA evidence: ev_bee2a904ecae3c4bcfb6c6cde8cb497e714835a6c280d87aa93e6ed2be85105b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001852e(void)

{
  int iVar1;
  
  iVar1 = DAT_ram_3004acec;
  FUN_ram_4001679a();
  if (-1 < iVar1) {
    FUN_ram_400184f2();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40018554.
 * REA evidence: ev_01ae3e5e085e6bacc87e7068c5b0f4691addf220967348dc31645340de641214
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018554(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = _DAT_ram_3006a390;
  if (_DAT_ram_3006a390 == 3) {
    piVar2 = (int *)&DAT_ram_3006a2f0;
LAB_ram_40018572:
    if ((*piVar2 == 0) || (iVar3 = FUN_ram_40043c8a(*piVar2,1), iVar3 != 0)) {
LAB_ram_40018576:
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
  }
  else {
    piVar2 = (int *)&DAT_ram_3006a2ac;
    if (_DAT_ram_3006a390 == 4) goto LAB_ram_40018572;
    if (((0xd < _DAT_ram_3006a390) || (*(int *)(&DAT_ram_30069f34 + _DAT_ram_3006a390 * 4) == 0)) ||
       (iVar3 = FUN_ram_40043c8a(*(int *)(&DAT_ram_30069f34 + _DAT_ram_3006a390 * 4),1), iVar3 != 0)
       ) goto LAB_ram_40018576;
    iVar3 = *(int *)(&DAT_ram_30069f34 + uVar1 * 4);
  }
  if (_DAT_ram_3006a3b4 != iVar3) {
    _DAT_ram_3006a3b4 = iVar3;
  }
  if (uVar1 == 3) {
LAB_ram_4001858e:
    if (DAT_ram_3006a340 != '\0') {
      DAT_ram_3006a340 = '\0';
    }
    if (uVar1 == 5) goto LAB_ram_40018606;
  }
  else {
    if (DAT_ram_3006a2a4 != '\0') {
      FUN_ram_4001852e();
      DAT_ram_3006a2a4 = '\0';
      FUN_ram_40017118();
    }
    if (uVar1 != 4) goto LAB_ram_4001858e;
  }
  if (DAT_ram_3006a448 != '\0') {
    DAT_ram_3006a448 = '\0';
  }
LAB_ram_40018606:
  FUN_ram_40017118();
  return;
}


/* NanoCore 1.12, address 0x40018626.
 * REA evidence: ev_109ce7c0b538a2cf33b19bb4a8d4a8fd55864418cb700344bcf35f555fc298b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40018626(void)

{
  int iVar1;
  byte abStack_11 [13];
  
  abStack_11[0] = 0;
  FUN_ram_4001852e();
  iVar1 = FUN_ram_4003312a(abStack_11);
  if (iVar1 == 0) {
    if (0x3f < abStack_11[0]) {
      abStack_11[0] = 0x3f;
    }
  }
  else {
    abStack_11[0] = 0;
  }
  iVar1 = FUN_ram_40015322(abStack_11[0]);
  if (iVar1 == 0) {
    FUN_ram_40016e96();
  }
  return;
}


/* NanoCore 1.12, address 0x40018666.
 * REA evidence: ev_6fc59fb049204556d2b1a56b57c51c08e505a9d1a3cfd83fbcbbb870281fd3d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018666(void)

{
  int iVar1;
  
  iVar1 = DAT_ram_3004acec;
  DAT_ram_3004acec = 0xffffffff;
  _DAT_ram_3006a298 = 0;
  if (-1 < iVar1) {
    FUN_ram_400184f2();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40018686.
 * REA evidence: ev_e73d9535fcff144363e7e38f97c72bd527e635d0fa2029744d9a8b7e56103714
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018686(void)

{
  if (_DAT_ram_3006a38c != 0) {
    FUN_ram_4004c712();
    _DAT_ram_3006a38c = 0;
  }
  if (_DAT_ram_3006a348 != 0) {
    FUN_ram_400440ce(_DAT_ram_3006a348,1);
  }
  if (DAT_ram_3004ace7 != '\0') {
    FUN_ram_400183ee();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400186cc.
 * REA evidence: ev_2751707dda0599e7c87b4b47646eb830bfb78a3762f37ef271d82b686b8a7174
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400186cc(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_ram_3004ace7 = (undefined1)param_1;
  iVar1 = 0;
  do {
    iVar2 = *(int *)(&DAT_ram_30069f34 + iVar1 * 4);
    if (iVar2 != 0) {
      if ((param_1 == 0) || (DAT_ram_300699f8 == '\0')) {
        FUN_ram_400440ce(iVar2,1);
      }
      else {
        FUN_ram_40017378(iVar2,iVar1);
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  FUN_ram_400177ee(param_1);
  FUN_ram_4001792c(param_1);
  if (param_1 != 0) {
    FUN_ram_40028da2(0x30069fb4);
    if (_DAT_ram_3006a444 != 0) {
      FUN_ram_400440ce(_DAT_ram_3006a444,1);
    }
    FUN_ram_400167c6();
    FUN_ram_40017da2();
    FUN_ram_40016938();
    FUN_ram_400169b4();
    FUN_ram_4001680a();
    FUN_ram_40017458();
    FUN_ram_400183ee();
    return;
  }
  DAT_ram_3006a342 = 0;
  FUN_ram_40016702();
  DAT_ram_3006a2a4 = 0;
  DAT_ram_3006a324 = 0;
  DAT_ram_3006a326 = 0;
  DAT_ram_3006a325 = 0;
  DAT_ram_3006a340 = 0;
  DAT_ram_3006a448 = 0;
  FUN_ram_40017118();
  FUN_ram_40017e54();
  FUN_ram_40017d68(_DAT_ram_3006a2f0,0x3006a300,0);
  iVar1 = FUN_ram_4001e6b0();
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_40020d66(), iVar1 == 0)) &&
      (iVar1 = FUN_ram_40021846(), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_4001a7cc(), iVar1 == 0 && (iVar1 = FUN_ram_40020784(), iVar1 == 0)))) {
    FUN_ram_40018184();
  }
  FUN_ram_40018686();
  return;
}


/* NanoCore 1.12, address 0x400187fc.
 * REA evidence: ev_8e2fae2e89d46584903c5181dfa81a8f35a34bee1ffcf7cd657a4cd3edb3eeab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400187fc(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4001e6b0();
  if (iVar1 != 0) {
    FUN_ram_4001e67e();
  }
  iVar1 = FUN_ram_40020d66();
  if (iVar1 != 0) {
    FUN_ram_40020d3c();
  }
  iVar1 = FUN_ram_4001a7cc();
  if (iVar1 != 0) {
    FUN_ram_4001a774();
  }
  iVar1 = FUN_ram_40020784();
  if (iVar1 != 0) {
    FUN_ram_4002076a();
  }
  iVar1 = FUN_ram_40021846();
  if (iVar1 == 0) {
    FUN_ram_40021796();
  }
  FUN_ram_400186cc(0);
  return;
}


/* NanoCore 1.12, address 0x4001886c.
 * REA evidence: ev_f027e5ce38e8dcfa062a26cf78d20de799c44e02febee691a08611bb288d9a34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_4001886c(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_ram_3006a342;
  if (DAT_ram_3006a342 == '\0') {
LAB_ram_4001887c:
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_ram_4001e6b0();
    if ((((iVar2 == 0) && (iVar2 = FUN_ram_40021846(), iVar2 == 0)) &&
        (iVar2 = FUN_ram_4001a7cc(), iVar2 == 0)) &&
       ((iVar2 = FUN_ram_40020784(), iVar2 == 0 && (iVar2 = FUN_ram_40020d66(), iVar2 == 0)))) {
      FUN_ram_40018384();
    }
    else {
      iVar2 = FUN_ram_4001e6b0();
      if (iVar2 == 0) goto LAB_ram_4001887c;
      FUN_ram_4001e6c4();
    }
    DAT_ram_3006a342 = '\0';
    FUN_ram_40016702();
  }
  return cVar1;
}


/* NanoCore 1.12, address 0x400188c4.
 * REA evidence: ev_ce93b3ac0681e5189536de2ac77ef4bd8a3709ecc3d1a5f081d096e56e4475a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400188c4(void)

{
  int iVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  
  if (_DAT_ram_3006a394 != 0) {
    FUN_ram_400489f0(_DAT_ram_3006a394,0,0);
    iVar1 = _DAT_ram_3006a394;
    uVar3 = FUN_ram_4002d518();
    FUN_ram_40048a2e(iVar1,uVar3,0);
    iVar1 = _DAT_ram_3006a394;
    uVar3 = FUN_ram_4002d522();
    FUN_ram_40048afe(iVar1,uVar3,0);
    DAT_ram_3006a3a4 = 0;
    DAT_ram_3006a39b = 0;
    uVar2 = FUN_ram_400170ea(0);
    FUN_ram_40018310(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40018942.
 * REA evidence: ev_4f49075820cdefedd8917ed5fec7c02f4bf0b1bbd4c17d38a32703bc75b6c3b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018942(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  
  FUN_ram_4002c904();
  FUN_ram_40016714();
  DAT_ram_3004ace8 = 0xffffffff;
  iVar1 = 0;
  FUN_ram_400177ee(0);
  do {
    if (*(int *)(&DAT_ram_30069f34 + iVar1 * 4) != 0) {
      FUN_ram_400440ce(*(int *)(&DAT_ram_30069f34 + iVar1 * 4),1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  iVar1 = 0x30069b68;
  uVar2 = 0xfffffffd;
  do {
    if (1 < uVar2) {
      FUN_ram_4004d0b2(iVar1);
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x40;
  } while (uVar2 != 0xb);
  if (DAT_ram_3006a34c != '\0') {
    FUN_ram_4004d0b2();
  }
  if (DAT_ram_3006a3f8 != '\0') {
    FUN_ram_4004d0b2();
  }
  if (DAT_ram_3006a3b8 != '\0') {
    FUN_ram_4004d0b2();
  }
  if (DAT_ram_30069ef4 != '\0') {
    FUN_ram_4004d0b2();
  }
  if (DAT_ram_30069f74 != '\0') {
    FUN_ram_4004d0b2();
  }
  if (DAT_ram_3006a2b0 != '\0') {
    FUN_ram_4004d0b2();
  }
  if (DAT_ram_30069b28 != '\0') {
    FUN_ram_4004d0b2();
  }
  if (DAT_ram_30069a4c != '\0') {
    FUN_ram_4004d0b2();
  }
  if (DAT_ram_30069a8c != '\0') {
    FUN_ram_4004d0b2();
  }
  if (DAT_ram_30069a08 != '\0') {
    FUN_ram_4004d0b2();
  }
  pcVar3 = &DAT_ram_30069fd0;
  do {
    if (*pcVar3 != '\0') {
      FUN_ram_4004d0b2(pcVar3);
    }
    pcVar3 = pcVar3 + 0x40;
  } while (pcVar3 != &DAT_ram_3006a210);
  FUN_ram_4001e8ac();
  FUN_ram_4002d102();
  DAT_ram_300699f8 = FUN_ram_400169e6();
  FUN_ram_4002d1d8();
  FUN_ram_4002d29e();
  FUN_ram_4002d574();
  FUN_ram_400219ca();
  FUN_ram_4002d414();
  FUN_ram_400188c4();
  FUN_ram_400179ac();
  if (DAT_ram_300699f8 != '\0') {
    FUN_ram_40016c9e();
    FUN_ram_400168dc();
    FUN_ram_40018686();
    FUN_ram_40016e5c();
    if ((_DAT_ram_30069f34 == 0) && (_DAT_ram_30069f6c != 0)) {
      FUN_ram_40017392();
    }
    piVar4 = (int *)&DAT_ram_30069f34;
    iVar1 = 0;
    do {
      if (*piVar4 != 0) {
        FUN_ram_400171f6(*piVar4,iVar1);
        FUN_ram_40017378(*piVar4,iVar1);
        FUN_ram_40057382(*piVar4,9);
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 != 0xe);
    FUN_ram_40016938();
    FUN_ram_4001786c();
    FUN_ram_400169b4();
    FUN_ram_4001680a();
    FUN_ram_40017458();
    if (_DAT_ram_30069f6c != 0) {
      FUN_ram_400455dc();
    }
  }
  FUN_ram_4001ed28();
  FUN_ram_40017f54();
  FUN_ram_40017f9a();
  FUN_ram_40017118();
  FUN_ram_400177ee(DAT_ram_3004ace7);
  FUN_ram_40020e02();
  FUN_ram_40021934();
  FUN_ram_4001a97c();
  FUN_ram_40020948();
  iVar1 = FUN_ram_4001e6b0();
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_40020d66(), iVar1 == 0)) &&
      (iVar1 = FUN_ram_40021846(), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_4001a7cc(), iVar1 == 0 && (iVar1 = FUN_ram_40020784(), iVar1 == 0)))) {
    FUN_ram_400183ee();
    return;
  }
  FUN_ram_400186cc(0);
  return;
}


/* NanoCore 1.12, address 0x40018b9e.
 * REA evidence: ev_2eeebadbe0f5a815fca4dc44efbdc29989fe293b50d63b795224a6535ec9296d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40018b9e(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_ram_400187fc();
    return;
  }
  iVar1 = FUN_ram_40021846();
  if (iVar1 != 0) {
    FUN_ram_40021810();
    FUN_ram_400186cc(1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40018bc2.
 * REA evidence: ev_344802eb3e20cffc4accc47bbef1698767a7bc9bfe4de12d611b936178280abd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018bc2(void)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char acStack_58 [36];
  
  FUN_ram_40016b84();
  FUN_ram_400061cc();
  cVar4 = DAT_ram_3006a25e;
  uVar3 = _DAT_ram_3006a25c;
  iVar7 = _DAT_ram_3006a258;
  cVar2 = DAT_ram_3006a254;
  iVar11 = _DAT_ram_3006a250;
  uVar1 = _DAT_ram_3006a24c;
  iVar9 = _DAT_ram_3006a248;
  _DAT_ram_3006a24c = 0;
  _DAT_ram_3006a258 = 0;
  _DAT_ram_3006a248 = 0;
  _DAT_ram_3006a250 = 0;
  DAT_ram_3006a254 = 0;
  DAT_ram_3006a25e = 0;
  FUN_ram_400061ee();
  if (uVar1 == 0 && iVar7 == 0) {
    if (cVar4 != '\0') goto LAB_ram_40018c6e;
LAB_ram_40018ebe:
    if ((iVar9 < 1) && (iVar11 < 1)) {
LAB_ram_40018dde:
      if (cVar2 == '\0') goto LAB_ram_40018e1a;
    }
    if (DAT_ram_3006a342 != '\0') {
LAB_ram_40018ecc:
      FUN_ram_4001886c();
    }
  }
  else {
    _DAT_ram_30069ee8 = FUN_ram_40004346();
    if (cVar4 != '\0') {
LAB_ram_40018c6e:
      _DAT_ram_3006a268 = uVar3;
      if (uVar3 == 0) {
        if (DAT_ram_3006a270 == '\0') {
          FUN_ram_400167e8();
          FUN_ram_4001686a(0);
        }
        DAT_ram_3006a270 = '\0';
      }
      else {
        FUN_ram_40016668();
        FUN_ram_4001686a();
        if ((0x5db < uVar3) && (DAT_ram_3006a270 == '\0')) {
          DAT_ram_3006a270 = '\x01';
          FUN_ram_4001686a(1000);
          FUN_ram_40049e48(0);
          if (_DAT_ram_3006a274 == 0) {
            _DAT_ram_3006a274 = FUN_ram_4004c6ac(FUN_ram_40016a0e,0x50,0);
          }
        }
      }
    }
    if (iVar7 != 0) {
      uVar6 = FUN_ram_4000e564();
      uVar6 = thunk_FUN_ram_400257de(0x30069b20,0,uVar6,iVar7);
      FUN_ram_4000e52c();
      FUN_ram_400169b4();
      if ((DAT_ram_3004ace7 == '\0') && (iVar7 = FUN_ram_40016668(), iVar7 == 0)) {
        FUN_ram_40028d24(0x30069fb4,uVar6);
        FUN_ram_40016fa0();
        if (_DAT_ram_3006a440 == 0) {
          _DAT_ram_3006a440 = FUN_ram_4004c6ac(&LAB_ram_4001708c,0x32,0);
        }
        else {
          FUN_ram_4004c938();
        }
      }
    }
    if (uVar1 == 0) goto LAB_ram_40018ebe;
    uVar8 = FUN_ram_4001e6b0();
    uVar10 = (int)uVar1 >> 0x1f;
    if (uVar8 == 0) {
      iVar7 = FUN_ram_40021846();
      if (iVar7 == 0) {
        iVar7 = FUN_ram_4001a7cc();
        if (iVar7 == 0) {
          iVar7 = FUN_ram_40020784();
          if (iVar7 == 0) {
            iVar7 = FUN_ram_40020d66();
            if (iVar7 == 0) {
              if (DAT_ram_3006a448 == 0) {
                if (DAT_ram_3006a326 == '\0') {
                  if (DAT_ram_3006a340 != 0) {
                    uVar5 = thunk_FUN_ram_400257de(0x30069b20,1,DAT_ram_3004acf4,uVar1);
                    FUN_ram_4001800c(uVar5);
                    goto LAB_ram_40018f64;
                  }
                  if (DAT_ram_3006a2a4 == 0) {
                    iVar7 = 0;
                    do {
                      if (_DAT_ram_3006a390 == *(uint *)(&DAT_ram_3006a210 + iVar7 * 4))
                      goto LAB_ram_400190d4;
                      iVar7 = iVar7 + 1;
                    } while (iVar7 != 0xe);
                    iVar7 = 0;
LAB_ram_400190d4:
                    iVar7 = iVar7 + uVar1;
                    if (iVar7 < 0xe) {
                      if (iVar7 < 0) {
                        iVar7 = 0;
                      }
                    }
                    else {
                      iVar7 = 0xd;
                    }
                    uVar8 = *(uint *)(&DAT_ram_3006a210 + iVar7 * 4);
                    if (_DAT_ram_3006a390 != uVar8) {
                      _DAT_ram_3006a390 = uVar8;
                      if (DAT_ram_3004ace7 != '\0') {
                        FUN_ram_40018554();
                      }
                      if ((uVar10 ^ uVar1) - 1 == uVar10) {
                        DAT_ram_3006a341 = '\0';
                      }
                      else {
                        iVar7 = FUN_ram_40016b0a();
                        if (iVar7 == 0) goto LAB_ram_40018ebe;
                      }
                      DAT_ram_3006a342 = '\0';
                      FUN_ram_40018384();
                      if (DAT_ram_3006a341 != '\0') goto LAB_ram_40018d4a;
                    }
                  }
                  else {
                    _DAT_ram_3006a33c = _DAT_ram_3006a33c + uVar1;
                    if ((int)_DAT_ram_3006a33c < 0) {
                      _DAT_ram_3006a33c = 0;
                    }
                    else if (0x3f < (int)_DAT_ram_3006a33c) {
                      _DAT_ram_3006a33c = 0x3f;
                    }
                    if (-1 < (int)_DAT_ram_3006a33c) {
                      DAT_ram_3004acec = _DAT_ram_3006a33c;
                      if (_DAT_ram_3006a298 == 0) {
                        _DAT_ram_3006a298 = FUN_ram_4004c6ac(FUN_ram_40018666,0x4b,0);
                        if (_DAT_ram_3006a298 == 0) {
                          FUN_ram_40018666();
                        }
                        else {
                          FUN_ram_4004c934(_DAT_ram_3006a298,1);
                        }
                      }
                      else {
                        FUN_ram_4004c912(_DAT_ram_3006a298,0x4b);
                        FUN_ram_4004c934(_DAT_ram_3006a298,1);
                        FUN_ram_4004c938(_DAT_ram_3006a298);
                      }
                    }
                    iVar7 = FUN_ram_40004346();
                    if (((uVar10 ^ uVar1) - 1 != uVar10) &&
                       (uVar8 = FUN_ram_400043ae(0x21), _DAT_ram_3006a320 != 0)) {
                      if (uVar8 == 0) {
                        uVar8 = 1;
                      }
                      if ((uint)(iVar7 - _DAT_ram_3006a320) < uVar8) {
                        DAT_ram_3006a324 = '\x01';
                        goto LAB_ram_40018ebe;
                      }
                    }
                    _DAT_ram_3006a320 = iVar7;
                    FUN_ram_400180c4(_DAT_ram_3006a33c);
                    DAT_ram_3006a324 = '\0';
                  }
                }
                else if (DAT_ram_3006a325 == '\0') {
                  _DAT_ram_3006a33c = _DAT_ram_3006a33c + uVar1;
                  FUN_ram_400180c4();
                }
              }
              else {
                iVar7 = thunk_FUN_ram_40022972();
                if ((iVar7 != 0) != 0 < (int)uVar1) {
                  FUN_ram_4002db92();
                  iVar7 = thunk_FUN_ram_40022972();
                  acStack_58[0] = iVar7 != 0;
                  FUN_ram_40014472(100,acStack_58,1);
                  FUN_ram_40014528();
                  FUN_ram_40016938();
LAB_ram_40018f64:
                  FUN_ram_400183ee();
                }
              }
            }
            else {
              DAT_ram_3006a342 = '\0';
              FUN_ram_40016702();
              FUN_ram_40020d70(uVar1);
            }
          }
          else {
            DAT_ram_3006a342 = '\0';
            FUN_ram_40016702();
            FUN_ram_4002078e(uVar1);
          }
        }
        else {
          DAT_ram_3006a342 = '\0';
          FUN_ram_40016702();
          FUN_ram_4001a7d6(uVar1);
        }
      }
      else {
        DAT_ram_3006a342 = '\0';
        FUN_ram_40016702();
        FUN_ram_40021850(uVar1);
      }
      goto LAB_ram_40018ebe;
    }
    if ((uVar10 ^ uVar1) - 1 == uVar10) {
      DAT_ram_3006a341 = '\0';
    }
    else {
      uVar8 = FUN_ram_40016b0a();
    }
    FUN_ram_4001e6ba((uVar8 ^ 1) & 0xff);
    FUN_ram_4001eeba(uVar1);
    FUN_ram_4001e6ba(0);
    if (uVar8 == 0) goto LAB_ram_40018ebe;
    if (DAT_ram_3006a341 != '\0') {
LAB_ram_40018d4a:
      DAT_ram_3006a342 = '\x01';
      if ((iVar9 < 1) && (iVar11 < 1)) goto LAB_ram_40018dde;
      goto LAB_ram_40018ecc;
    }
    DAT_ram_3006a342 = '\0';
    if ((iVar9 < 1) && (iVar11 < 1)) goto LAB_ram_40018dde;
  }
  FUN_ram_4001810c();
LAB_ram_40018e1a:
  for (; 0 < iVar9; iVar9 = iVar9 + -1) {
    iVar7 = FUN_ram_4001e6b0();
    if (iVar7 == 0) {
      iVar7 = FUN_ram_40021846();
      if (iVar7 == 0) {
        iVar7 = FUN_ram_4001a7cc();
        if (iVar7 == 0) {
          iVar7 = FUN_ram_40020784();
          if (iVar7 == 0) {
            iVar7 = FUN_ram_40020d66();
            if (iVar7 == 0) {
              if (DAT_ram_3006a326 != '\0') {
                if ((int)_DAT_ram_3006a33c < 0x40) {
                  uVar8 = _DAT_ram_3006a33c;
                  if ((int)_DAT_ram_3006a33c < 0) {
                    uVar8 = 0;
                  }
                }
                else {
                  uVar8 = 0x3f;
                }
                iVar7 = FUN_ram_400332c6(uVar8 & 0xff,acStack_58);
                if (((iVar7 == 0) && (acStack_58[0] != '\0')) && (DAT_ram_3006a325 == '\0')) {
                  DAT_ram_3006a325 = '\x01';
                  FUN_ram_40017c76();
                }
                else {
                  iVar7 = FUN_ram_40015322(_DAT_ram_3006a33c & 0xff);
                  if (iVar7 == 0) {
                    FUN_ram_40016e96();
                  }
                  if (DAT_ram_3004acf0 < 0xe) {
                    _DAT_ram_3006a390 = DAT_ram_3004acf0;
                  }
                  DAT_ram_3004acf0 = 0xffffffff;
                  DAT_ram_3006a326 = '\0';
                  FUN_ram_40017e54();
                  DAT_ram_3006a325 = '\0';
                  FUN_ram_40017c76();
LAB_ram_40019236:
                  FUN_ram_40017118();
                }
                goto LAB_ram_400191ea;
              }
              if (0xd < _DAT_ram_3006a390) goto LAB_ram_40019162;
              if ((&DAT_ram_4009a190)[_DAT_ram_3006a390] == '\0') {
                if (_DAT_ram_3006a390 == 0) {
                  FUN_ram_400209b0();
                }
                else {
                  if (_DAT_ram_3006a390 != 1) {
                    if (_DAT_ram_3006a390 == 2) {
                      FUN_ram_400187fc();
                      goto LAB_ram_40019162;
                    }
                    if (_DAT_ram_3006a390 == 5) {
                      DAT_ram_3006a448 = DAT_ram_3006a448 ^ 1;
                    }
                    else {
                      if (_DAT_ram_3006a390 != 4) {
                        if (_DAT_ram_3006a390 == 3) {
                          if (DAT_ram_3006a2a4 != 0) {
                            FUN_ram_4001852e();
                          }
                          DAT_ram_3006a2a4 = DAT_ram_3006a2a4 ^ 1;
                          goto LAB_ram_40019236;
                        }
                        goto LAB_ram_40019252;
                      }
                      DAT_ram_3006a340 = DAT_ram_3006a340 ^ 1;
                    }
LAB_ram_400191ea:
                    FUN_ram_400183ee();
                    goto LAB_ram_40019162;
                  }
                  FUN_ram_4001a71a();
                }
              }
              else {
                FUN_ram_4001ecec((&PTR_s_settings_ram_4009a0e0_ram_4009a148)[_DAT_ram_3006a390]);
              }
LAB_ram_40019252:
              uVar6 = 0;
              goto LAB_ram_4001914a;
            }
            iVar7 = FUN_ram_40020de8();
            if (iVar7 != 0) {
              FUN_ram_40020d3c();
              goto LAB_ram_40019148;
            }
          }
          else {
            iVar7 = FUN_ram_400208e0();
            if (iVar7 != 0) {
              FUN_ram_4002076a();
              goto LAB_ram_40019148;
            }
          }
        }
        else {
          iVar7 = FUN_ram_4001a90e();
          if (iVar7 != 0) {
            FUN_ram_4001a774();
LAB_ram_40019148:
            uVar6 = 1;
LAB_ram_4001914a:
            FUN_ram_400186cc(uVar6);
          }
        }
      }
      else {
        iVar7 = FUN_ram_400218f8();
        if (iVar7 != 0) {
          FUN_ram_40018b9e(0);
        }
      }
    }
    else {
      iVar7 = FUN_ram_4001e718();
      if (iVar7 != 0) {
        FUN_ram_4001e67e();
        goto LAB_ram_40019148;
      }
    }
LAB_ram_40019162:
  }
  do {
    if (iVar11 < 1) {
      if (cVar2 != '\0') {
        iVar9 = FUN_ram_4001e6b0();
        if (((iVar9 == 0) && (iVar9 = FUN_ram_40021846(), iVar9 == 0)) &&
           ((iVar9 = FUN_ram_4001a7cc(), iVar9 == 0 &&
            ((iVar9 = FUN_ram_40020784(), iVar9 == 0 && (iVar9 = FUN_ram_40020d66(), iVar9 == 0)))))
           ) {
          if ((DAT_ram_3006a326 == '\0') && (DAT_ram_3004ace7 != '\0')) {
            FUN_ram_4001852e();
            DAT_ram_3004acf0 = _DAT_ram_3006a390;
            if (0xd < _DAT_ram_3006a390) {
              DAT_ram_3004acf0 = 6;
            }
            DAT_ram_3006a2a4 = 0;
            DAT_ram_3006a340 = 0;
            DAT_ram_3006a448 = 0;
            DAT_ram_3006a326 = '\x01';
            DAT_ram_3006a325 = '\0';
            FUN_ram_40017c76();
            FUN_ram_400180c4(_DAT_ram_3006a33c);
            FUN_ram_40017e54();
            _DAT_ram_3006a2a0 = FUN_ram_4004c6ac(FUN_ram_40017ea4,0x15e,0);
            FUN_ram_40017118();
            FUN_ram_400183ee();
          }
        }
        else {
          FUN_ram_40018626();
        }
      }
      if ((DAT_ram_3006a342 != '\0') && (uVar1 == 0)) {
        FUN_ram_400061cc();
        iVar9 = _DAT_ram_3006a24c;
        FUN_ram_400061ee();
        if ((iVar9 == 0) && (iVar9 = FUN_ram_4001886c(), iVar9 == 0)) {
          DAT_ram_3006a342 = '\0';
          FUN_ram_40016702();
        }
      }
      if ((DAT_ram_3006a324 != '\0') && (uVar1 == 0)) {
        FUN_ram_400061cc();
        iVar9 = _DAT_ram_3006a24c;
        FUN_ram_400061ee();
        if (iVar9 == 0) {
          FUN_ram_4001810c();
          return;
        }
      }
      return;
    }
    iVar9 = FUN_ram_4001e6b0();
    if (iVar9 == 0) {
      iVar9 = FUN_ram_40021846();
      if (iVar9 == 0) {
        iVar9 = FUN_ram_4001a7cc();
        if (iVar9 == 0) {
          iVar9 = FUN_ram_40020784();
          if (iVar9 == 0) {
            iVar9 = FUN_ram_40020d66();
            if (iVar9 == 0) {
              if (DAT_ram_3004ace7 != '\0') goto LAB_ram_400192dc;
            }
            else {
              FUN_ram_40020d3c();
            }
          }
          else {
            FUN_ram_4002076a();
          }
        }
        else {
          FUN_ram_4001a774();
        }
        goto LAB_ram_400192c8;
      }
      FUN_ram_40018b9e(0);
    }
    else {
      FUN_ram_4001e67e();
LAB_ram_400192c8:
      FUN_ram_400186cc(1);
    }
LAB_ram_400192dc:
    iVar11 = iVar11 + -1;
  } while( true );
}


