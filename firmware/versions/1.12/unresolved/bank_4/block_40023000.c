/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40023000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40023044.
 * REA evidence: ev_610c736371387b43392c53995e88fb7f716fefd34d9cea200c764a09c120f7d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40023044(undefined1 param_1)

{
  undefined1 auStack_14 [16];
  
  auStack_14[0] = param_1;
  FUN_ram_40014472(0x60,auStack_14,1);
  return;
}


/* NanoCore 1.12, address 0x4002305e.
 * REA evidence: ev_92aaecfca50b12b37dbc70098109ba9a375efc3b6f536249932691ce35082c51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002305e(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_1c [24];
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (10 < param_2) {
      param_2 = 10;
    }
    auStack_1c[0] = (undefined1)param_2;
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
      auStack_1c[uVar1] = *(undefined1 *)(param_1 + -1 + uVar1);
    } while (uVar1 != param_2);
    FUN_ram_40014472(0x6a,auStack_1c,uVar2 + 2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002309a.
 * REA evidence: ev_b8bdaf70fef0c90b28f3cfeefc12f5fa1a83f174d72ea8b8aeba086d1abf5dec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400231b4) */
/* WARNING: Removing unreachable block (ram,0x4002319a) */
/* WARNING: Removing unreachable block (ram,0x400231ae) */
/* WARNING: Removing unreachable block (ram,0x400231be) */

undefined4 FUN_ram_4002309a(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  memset(param_1,0,0x80);
  iVar1 = FUN_ram_40006dec(s_device_info_ram_4009a578);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(uint *)(iVar1 + 0x38) < 0x1000) {
    return 0xffffffff;
  }
  iVar1 = fal_partition_read(iVar1,0,param_1,0x80);
  iVar3 = 0;
  if (iVar1 != 0x80) {
    memset(param_1,0,0x80);
    return 0xfffffffd;
  }
  while (*(char *)((int)param_1 + iVar3) == -1) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x80) {
      memset(param_1,0,0x80);
      return 0xffffffff;
    }
  }
  if ((((((*param_1 == 0x49333747) && ((short)param_1[1] == 1)) &&
        (*(short *)((int)param_1 + 6) == 0x80)) &&
       ((uVar2 = (uint)*(byte *)(param_1 + 2), (uVar2 - 1 & 0xff) < 2 || (uVar2 == 6)))) &&
      (((param_2 == 0 || (uVar2 == (param_2 & 0xff))) &&
       (((*(byte *)((int)param_1 + 0xb) < 0x31 &&
         (uVar2 = param_1[3], uVar2 / 10000 - 0x7e4 < 0x1f2c)) && ((uVar2 / 100) % 100 - 1 < 0xc))))
      )) && ((uVar2 % 100 - 1 < 0x1f && ((*(byte *)((int)param_1 + 10) - 1 & 0xff) < 0x20)))) {
    uVar2 = 0;
    do {
      if (0x5d < (byte)(*(char *)((int)param_1 + uVar2 + 0x10) - 0x21U)) goto LAB_ram_4002325e;
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xff) < (uint)*(byte *)((int)param_1 + 10));
    iVar1 = FUN_ram_40007450(0,param_1,0x7c);
    if (param_1[0x1f] == iVar1) {
      return 0;
    }
  }
LAB_ram_4002325e:
  memset(param_1,0,0x80);
  return 0xfffffffe;
}


/* NanoCore 1.12, address 0x4002326e.
 * REA evidence: ev_a1928818fa96fb33d57fb15b08b982a8c9c6ede50640b5122c5cc1828275f0ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002326e(void)

{
  undefined1 uVar1;
  
  memset(0x3006b830,0,0x210);
  memset(0x3006ba40,0,0x84);
  memset(0x3006b824,1,0xb);
  _DAT_ram_3006bac4 = 0;
  _DAT_ram_3006bac8 = 0;
  _DAT_ram_3006bacc = 0;
  DAT_ram_3006bace = 0;
  uVar1 = FUN_ram_40025ca4(6,6);
  _DAT_ram_3006b9e4 = 0;
  _DAT_ram_3006b9e0 = DAT_ram_4009672c;
  _DAT_ram_3006b9e8 = DAT_ram_4009672c;
  _DAT_ram_3006b9ec = DAT_ram_4009672c;
  _DAT_ram_3006bac8 = CONCAT12(uVar1,_DAT_ram_3006bac8);
  _DAT_ram_3006b9b0 = DAT_ram_40099f94;
  _DAT_ram_3006b9b4 = DAT_ram_4009a584;
  return;
}


/* NanoCore 1.12, address 0x4002330a.
 * REA evidence: ev_a0e0eaa079ab1067b50c47b4a5149a2b006cd8b84ba538932768308f7f65cc82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002330a(uint param_1,undefined1 param_2)

{
  if (param_1 < 0xb) {
    *(undefined1 *)(param_1 + 0x3006b824) = param_2;
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40023324.
 * REA evidence: ev_c9a98c4f0a067f584561bc9af51c70985b7a464d5a1d0f3c86f2967971d8ac9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40023324(uint param_1)

{
  if (param_1 < 0xb) {
    return *(char *)(param_1 + 0x3006b824) != '\0';
  }
  return false;
}


/* NanoCore 1.12, address 0x40023340.
 * REA evidence: ev_b4e9f54e77cf90d27c1d3842f236579f8e70a80ef7572ed7cedbd1f47c516c5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40023340(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (10 < param_1) {
    return 0xffffffff;
  }
  uVar2 = FUN_ram_40025ca4();
  uVar3 = _DAT_ram_3006b9e8;
  uVar1 = _DAT_ram_3006b9ec;
  if ((param_1 == 9) && (DAT_ram_3006bacd != uVar2)) {
    memset(&DAT_ram_3006b9e0,0,0x30);
    uVar3 = (undefined4)_DAT_ram_4009672c;
    _DAT_ram_3006b9e0 = uVar3;
    uVar1 = uVar3;
    if (uVar2 < 5) {
      if (uVar2 < 3) {
        if (uVar2 == 1) {
          _DAT_ram_3006b9e0 = DAT_ram_4009675c;
        }
        else if (uVar2 != 2) goto LAB_ram_400233ca;
        _DAT_ram_3006b9e4 = uVar3;
        uVar3 = _DAT_ram_3006b9e8;
        uVar1 = _DAT_ram_3006b9ec;
      }
      else {
        _DAT_ram_3006b9e0 = DAT_ram_4009675c;
        _DAT_ram_3006b9e4 = DAT_ram_4009675c;
        uVar1 = _DAT_ram_3006b9ec;
      }
    }
  }
LAB_ram_400233ca:
  _DAT_ram_3006b9ec = uVar1;
  _DAT_ram_3006b9e8 = uVar3;
  (&DAT_ram_3006bac4)[param_1] = (char)uVar2;
  return 0;
}


/* NanoCore 1.12, address 0x40023402.
 * REA evidence: ev_7097bf114bccdf350fe806d02d31ba7229698b858cd8963d50702a5cde608b4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023402(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xb) {
    uVar1 = FUN_ram_40025ca4(param_1,(&DAT_ram_3006bac4)[param_1]);
    (&DAT_ram_3006bac4)[param_1] = (char)uVar1;
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40023434.
 * REA evidence: ev_40abe49e09794209a8e4f0a875b1bc2dcf4dd0029f8a8af2ca88e5be4ffaf5d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023434(ulonglong param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_2 < 0xb) {
    uVar1 = 0xffffffff;
    if (param_3 < 0xc) {
      if ((float)param_1 < 0.0) {
        param_1 = 0;
      }
      else if (DAT_ram_4009672c < (float)param_1) {
        param_1 = (ulonglong)(uint)DAT_ram_4009672c;
      }
      *(ulonglong *)((param_3 + param_2 * 0xc) * 4 + 0x3006b830) = param_1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40023482.
 * REA evidence: ev_859d07d1d05dcb04cc59bd9a0e705e3a4bf782cf1e78faf8e06f26dd13a85efc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_40023482(uint param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 < 0xb) && (param_2 < 0xc)) {
    uVar1 = *(undefined8 *)((param_2 + param_1 * 0xc) * 4 + 0x3006b830);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x400234a8.
 * REA evidence: ev_d31b65e8f35d568439d1007bfcf352c49ab933d7f658e30b352209998968d98a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400234a8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  switch(param_1) {
  case 0:
    iVar2 = FUN_ram_4000c44e();
    return iVar2;
  case 1:
    break;
  case 2:
    iVar2 = FUN_ram_4000bb56();
    return iVar2;
  case 3:
    iVar2 = FUN_ram_4000c382();
    return iVar2;
  case 4:
    iVar2 = FUN_ram_4000c5e4();
    return iVar2;
  case 5:
    iVar2 = FUN_ram_4000c788();
    return iVar2;
  case 6:
    iVar2 = FUN_ram_4000ca0c();
    return iVar2;
  case 7:
    iVar2 = FUN_ram_4000ccfc();
    return iVar2;
  case 8:
    iVar2 = FUN_ram_4000cfe4();
    return iVar2;
  case 9:
    iVar2 = FUN_ram_4000ce72();
    return iVar2;
  case 10:
    iVar2 = FUN_ram_4000d436(param_2);
    return iVar2;
  default:
    return -1;
  }
  if (param_2 != 0) {
    iVar2 = FUN_ram_4000be9e();
    iVar1 = FUN_ram_40023402(1);
    if (iVar2 != iVar1) {
      iVar2 = FUN_ram_4000db5a();
      iVar1 = -1;
      if (iVar2 == 0) {
        FUN_ram_40023402(1);
        iVar1 = FUN_ram_4000bd3c();
        if (iVar1 == 0) {
          iVar1 = FUN_ram_4000be30(1);
        }
        FUN_ram_4000dbaa();
      }
      return iVar1;
    }
  }
  iVar2 = FUN_ram_4000be30(param_2);
  return iVar2;
}


/* NanoCore 1.12, address 0x40023546.
 * REA evidence: ev_eaf082ac25bf333a1bc5ae918aa2005e365d1a285c512c141be13e5b34ec2f94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023546(void)

{
  return 1;
}


/* NanoCore 1.12, address 0x4002354a.
 * REA evidence: ev_75858f8be73337deee2b12e1b047e4fe077217802f297daf3e0d8c4fb3ea7f82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002354a(void)

{
  return 1;
}


/* NanoCore 1.12, address 0x4002354e.
 * REA evidence: ev_e95db6a5fb9b4c20a74e305a142250e8e0ad9024b3f920653b150b9645ba0523
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002354e(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


/* NanoCore 1.12, address 0x40023552.
 * REA evidence: ev_d794b1b96f146f808d377507cbd9199ea6eef34960bf86a0b26dc45ff7fdef51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023552(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x40023556.
 * REA evidence: ev_8fbfc2385295d318aa7e66c01ec87e4d306bfccf5c7335a8cd68b35ecb234d85
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40023556(int param_1)

{
  return param_1 - 2U < 2;
}


/* NanoCore 1.12, address 0x4002355e.
 * REA evidence: ev_d28e62a1e2520531378bad6d58a690d03b9ea6a0579129d53744d5d44131d669
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002355e(void)

{
  return;
}


/* NanoCore 1.12, address 0x40023560.
 * REA evidence: ev_6223c9ba1329e329ef1b00e6f563321c9cd5e3ae478594e5ea23c7eac573026e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40023560(uint param_1)

{
  if (param_1 < 8) {
    return (&DAT_ram_4009a604)[param_1];
  }
  return 0;
}


/* NanoCore 1.12, address 0x40023578.
 * REA evidence: ev_ae36c35d42bb07a3ec631f50fcc2d9e9939c0f8f5f60e50f1ac13c5f6fff31f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023578(uint param_1)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_328 [788];
  
  uVar3 = FUN_ram_40023560(param_1 & 0xff);
  if ((uVar3 < 10) && (iVar4 = FUN_ram_4000dbfc(auStack_328), iVar4 == 0)) {
    puVar2 = auStack_328 + uVar3 * 0x4c;
    cVar1 = '\0';
    do {
      iVar4 = FUN_ram_40023434(*(undefined8 *)(puVar2 + 0x14),param_1,cVar1);
      if (iVar4 != 0) goto LAB_ram_400235ea;
      cVar1 = cVar1 + '\x01';
      puVar2 = puVar2 + 4;
      uVar5 = 0;
    } while (cVar1 != '\f');
  }
  else {
LAB_ram_400235ea:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


/* NanoCore 1.12, address 0x400235ee.
 * REA evidence: ev_8a20132229945461f5101985407b56ac308d58afcc239038b4a8ae366b9b8f58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400235ee(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (10 < param_1) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_40023556();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_40023578(param_1);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002361c.
 * REA evidence: ev_85ab073c4a7aae1fb3a27393d16eeedb2cbcc5227559e8c0b9a1571e4b66b436
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002361c(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((10 < param_1) || (iVar1 = FUN_ram_40023546(), iVar1 == 0)) ||
     (iVar1 = FUN_ram_4000db16(), iVar1 != 0)) {
    return 0xffffffff;
  }
  if ((param_2 == 0) || (iVar1 = FUN_ram_4002354e(param_1,1), iVar1 != 0)) {
    uVar2 = FUN_ram_40023324(param_1);
    iVar1 = FUN_ram_4002330a(param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_400234a8(param_1,param_2);
      if (iVar1 == 0) {
        FUN_ram_400151b8();
        FUN_ram_400151c4(param_1);
        uVar2 = 0;
        goto LAB_ram_40023676;
      }
      FUN_ram_4002330a(param_1,uVar2);
      FUN_ram_400234a8(param_1,uVar2);
    }
  }
  uVar2 = 0xffffffff;
LAB_ram_40023676:
  FUN_ram_4000db4e();
  return uVar2;
}


/* NanoCore 1.12, address 0x4002369c.
 * REA evidence: ev_8612f2faf46cf6a191621b0dbc709c51f05eff349e9768a1b2f7836f365d29c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002369c(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (10 < param_1) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_40023546();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_4002354a(param_1,param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_40023402(param_1);
  iVar2 = FUN_ram_40023340(param_1,param_2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_ram_40023402(param_1);
  switch(param_1) {
  case 1:
    iVar3 = FUN_ram_4000bd3c();
    break;
  case 2:
  case 3:
    goto switchD_ram_400236f6_caseD_2;
  case 4:
    iVar3 = FUN_ram_4000c77a();
    break;
  case 5:
    iVar3 = FUN_ram_4000c90e();
    break;
  case 6:
    iVar3 = FUN_ram_4000cb9c();
    break;
  case 7:
    iVar3 = FUN_ram_4000ce64();
    break;
  case 8:
    iVar3 = FUN_ram_4000d168();
    break;
  case 9:
    iVar3 = FUN_ram_4000cfd6();
    break;
  case 10:
    iVar3 = FUN_ram_4000d43a();
    break;
  default:
    iVar3 = FUN_ram_4000c5d6();
  }
  if (iVar3 == 0) {
switchD_ram_400236f6_caseD_2:
    if (((iVar1 == iVar2) || (iVar1 = FUN_ram_400235ee(param_1), iVar1 == 0)) &&
       (iVar1 = FUN_ram_40023552(param_1,0), iVar1 == 0)) {
      FUN_ram_400151b8();
      return 0;
    }
  }
  else {
    iVar2 = thunk_FUN_ram_4001516a();
    if (iVar2 == 0) {
      uVar4 = FUN_ram_40023552(param_1,1);
      return uVar4;
    }
    FUN_ram_40023340(param_1,iVar1);
    thunk_FUN_ram_4001516a();
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x400236a6.
 * REA evidence: ev_7b775998347dc2b305a04bc0af6ec7b2db2345ae250a18850c91fc973dbba6ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400236a6(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_ram_40023546();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_4002354a(param_1,param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_40023402(param_1);
  iVar2 = FUN_ram_40023340(param_1,param_2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_ram_40023402(param_1);
  switch(param_1) {
  case 1:
    iVar3 = FUN_ram_4000bd3c();
    break;
  case 2:
  case 3:
    goto switchD_ram_400236f6_caseD_2;
  case 4:
    iVar3 = FUN_ram_4000c77a();
    break;
  case 5:
    iVar3 = FUN_ram_4000c90e();
    break;
  case 6:
    iVar3 = FUN_ram_4000cb9c();
    break;
  case 7:
    iVar3 = FUN_ram_4000ce64();
    break;
  case 8:
    iVar3 = FUN_ram_4000d168();
    break;
  case 9:
    iVar3 = FUN_ram_4000cfd6();
    break;
  case 10:
    iVar3 = FUN_ram_4000d43a();
    break;
  default:
    iVar3 = FUN_ram_4000c5d6();
  }
  if (iVar3 == 0) {
switchD_ram_400236f6_caseD_2:
    if (((iVar1 == iVar2) || (iVar1 = FUN_ram_400235ee(param_1), iVar1 == 0)) &&
       (iVar1 = FUN_ram_40023552(param_1,0), iVar1 == 0)) {
      FUN_ram_400151b8();
      return 0;
    }
  }
  else {
    iVar2 = thunk_FUN_ram_4001516a();
    if (iVar2 == 0) {
      uVar4 = FUN_ram_40023552(param_1,1);
      return uVar4;
    }
    FUN_ram_40023340(param_1,iVar1);
    thunk_FUN_ram_4001516a();
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40023784.
 * REA evidence: ev_e6ba13dd61859a25a813ba56a239f1e84c8d988d5f6b997307d2dac22867f3e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40023784(float param_1,uint param_2,undefined4 param_3)

{
  undefined4 in_register_00000100;
  int iVar1;
  
  if ((param_2 < 0xb) && (iVar1 = FUN_ram_40023546(), iVar1 != 0)) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    else if (DAT_ram_4009672c < param_1) {
      param_1 = DAT_ram_4009672c;
    }
    FUN_ram_40023482(param_2,param_3);
    iVar1 = FUN_ram_40023434(param_1,param_2,param_3);
    if (iVar1 == 0) {
      switch(param_2) {
      case 1:
        iVar1 = FUN_ram_4000bea8();
        break;
      case 2:
        iVar1 = FUN_ram_4000d176();
        break;
      case 3:
        iVar1 = FUN_ram_4000d21e();
        break;
      case 4:
        iVar1 = FUN_ram_4000c6ce();
        break;
      case 5:
        iVar1 = FUN_ram_4000c866();
        break;
      case 6:
        iVar1 = FUN_ram_4000d2ac();
        break;
      case 7:
        iVar1 = FUN_ram_4000cdb4();
        break;
      case 8:
        iVar1 = FUN_ram_4000d0ba();
        break;
      case 9:
        iVar1 = FUN_ram_4000cf28();
        break;
      case 10:
        iVar1 = FUN_ram_4000d43e(param_1,param_3);
        break;
      default:
        iVar1 = FUN_ram_4000c528(param_1,param_3);
      }
      if (iVar1 != 0) {
        FUN_ram_40023434(in_register_00000100,param_2,param_3);
        return iVar1;
      }
      FUN_ram_4002355e(param_2,param_3);
      return 0;
    }
  }
  return -1;
}


/* NanoCore 1.12, address 0x40023878.
 * REA evidence: ev_03b1488273ae3cc1a94229ef05513184d6fc8651240a7fa01e3939b1ebce67ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40023878(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uStack_34;
  undefined1 local_30 [8];
  undefined1 auStack_28 [20];
  
  uStack_34 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (iVar2 = FUN_ram_40022f92(), iVar2 == 0)) {
    iVar2 = thunk_FUN_ram_4001516a();
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_ram_40022f62(local_30,8,&uStack_34);
    if ((iVar2 == 0) && (7 < uStack_34)) {
      iVar2 = 0;
      do {
        uVar1 = FUN_ram_40023560(local_30[iVar2]);
        auStack_28[iVar2] = uVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 8);
      iVar2 = FUN_ram_4000d35c(auStack_28,8);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_ram_400151b8();
      return 0;
    }
  }
  return -1;
}


/* NanoCore 1.12, address 0x400238ea.
 * REA evidence: ev_5a6c2bf3605bb857ded595f2ea3cbad3a8f69dbdfe594061797019935b3628e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40023928) */
/* WARNING: Removing unreachable block (ram,0x4002392e) */
/* WARNING: Removing unreachable block (ram,0x40023938) */
/* WARNING: Removing unreachable block (ram,0x40023946) */

undefined4 FUN_ram_400238ea(int param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (((param_1 != 0) && (*(code **)(param_1 + 0x10) != (code *)0x0)) && (param_2 != 0)) {
    (**(code **)(param_1 + 0x10))(*param_4,param_2,param_3);
    return 0;
  }
  return 0;
}


/* NanoCore 1.12, address 0x400239da.
 * REA evidence: ev_559150368af3c17b17ad27e2640489bdd85e6a406fb418cf72b37bd3edce69bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400239da(int param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_2 == 0) || (iVar3 = (**(code **)(param_1 + 0x54))(param_3), iVar3 == 0)) {
    uVar1 = (**(code **)(param_1 + 0x50))();
    *param_4 = uVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40023a08.
 * REA evidence: ev_f204ef503c70054fc34620b23284ad07b55bfb57d1d348aa81994bd6ed309a72
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023a08(int param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  byte abStack_21 [13];
  
  bVar2 = (byte)param_2;
  if ((((param_1 == 0) || (param_3 == (byte *)0x0)) || (*(code **)(param_1 + 0x48) == (code *)0x0))
     || (abStack_21[0] = bVar2, iVar1 = (**(code **)(param_1 + 0x48))(param_2), iVar1 != 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((*(code **)(param_1 + 0x4c) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x4c))(abStack_21), iVar1 != 0)) {
      abStack_21[0] = bVar2;
    }
    if (0x3f < abStack_21[0]) {
      abStack_21[0] = bVar2;
    }
    *param_3 = abStack_21[0];
    FUN_ram_40023044();
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40023a6e.
 * REA evidence: ev_ec3c484fe310c584e9cb0bac194bc6399e611b3794881529b87f485e5da0b5f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023a6e(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40023546(3);
  if ((((iVar2 == 0) || (param_1 == 0)) || (param_3 == (undefined1 *)0x0)) ||
     (((*(code **)(param_1 + 0x38) == (code *)0x0 || (*(int *)(param_1 + 0x3c) == 0)) ||
      ((iVar2 = (**(code **)(param_1 + 0x38))(param_2), iVar2 != 0 ||
       (iVar2 = (**(code **)(param_1 + 0x3c))(), param_2 != iVar2)))))) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_3 = (char)param_2;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40023abe.
 * REA evidence: ev_e0913f65026e36561fde19497e8a7656d4d7a13671aebd97bc56cf9a2b9b65a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023abe(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40023546(2);
  if ((((iVar2 == 0) || (param_1 == 0)) || (param_3 == (undefined1 *)0x0)) ||
     (((*(code **)(param_1 + 0x30) == (code *)0x0 || (*(int *)(param_1 + 0x34) == 0)) ||
      ((iVar2 = (**(code **)(param_1 + 0x30))(param_2), iVar2 != 0 ||
       (iVar2 = (**(code **)(param_1 + 0x34))(), param_2 != iVar2)))))) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_3 = (char)param_2;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40023b0e.
 * REA evidence: ev_7fbddc1b4b782938eea1e1c3b4180cc4420a04b5316e98d14380a55130365673
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023b0e(int param_1,int param_2,uint param_3,int param_4,undefined1 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint auStack_24 [3];
  
  auStack_24[0] = 0;
  if (param_1 != 0) {
    if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x2c))(param_2,param_3,param_4,param_5);
      return uVar1;
    }
    if ((((param_2 != 0) && (param_4 != 0)) && (param_5 != (undefined1 *)0x0)) &&
       ((*(int *)(param_1 + 0x24) != 0 && (iVar2 = FUN_ram_40023878(param_2,param_3), iVar2 == 0))))
    {
      (**(code **)(param_1 + 0x24))(param_2,param_3);
      iVar2 = FUN_ram_40022f62(param_4,0x10,auStack_24);
      if ((iVar2 == 0) && (param_3 <= auStack_24[0])) {
        *param_5 = (char)param_3;
        FUN_ram_4002305e(param_4,param_3);
        return 0;
      }
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40023b90.
 * REA evidence: ev_4709e3f7e6a7703037af3cf59a659513e5d6015cc8c5d922edc2eb4957afe935
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40023b90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_ram_4002369c(param_2,param_4);
  if (iVar3 == 0) {
    (**(code **)(param_1 + 4))(param_3,param_4);
    uVar4 = nc_effect_parameter_count(param_2,param_4,1);
    if (0xc < uVar4) {
      uVar4 = 0xc;
    }
    for (uVar1 = 0; (uVar4 & 0xff) != uVar1; uVar1 = uVar1 + 1 & 0xff) {
      iVar3 = FUN_ram_40027042(param_2,param_4,uVar1,1);
      if (iVar3 == 0xff) {
        return;
      }
      iVar3 = FUN_ram_40023784(*(undefined8 *)(param_5 + iVar3 * 4),param_2,iVar3);
      if (iVar3 != 0) {
        return;
      }
    }
    iVar3 = 0;
    do {
      iVar2 = iVar3 + 1;
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_5 + iVar3 * 4),param_3,iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 0xc);
  }
  return;
}


/* NanoCore 1.12, address 0x40023c3c.
 * REA evidence: ev_27872cced01ff1149a63057748bec2b1d38ccc02304d500b38f9f4c5c8c42984
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023c3c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = FUN_ram_40025c04();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40023c4a.
 * REA evidence: ev_a262346e2b164337174f099d6ac88ce4ace4d666be14be76d1bae55994a45b81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023c4a(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_ram_40023c3c(param_2);
  if ((((param_1 == 0) || (iVar3 == 0)) || (param_4 == (undefined1 *)0x0)) ||
     (((*(int *)(param_1 + 8) == 0 || (*(int *)(param_1 + 0xc) == 0)) ||
      (iVar4 = FUN_ram_4002361c(param_2,param_3), iVar4 != 0)))) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(param_1 + 0xc))(iVar3,param_3);
    uVar2 = (**(code **)(param_1 + 8))(iVar3);
    *param_4 = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40023cac.
 * REA evidence: ev_e3ce80d2a8f5558e7b656237cb392232da3ddd1f0c59a516c538e30539981897
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40023cac(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                undefined1 *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 local_ac [12];
  undefined4 local_a0 [12];
  undefined4 local_70 [15];
  
  iVar2 = FUN_ram_40023c3c(param_2);
  if (((((param_1 != (int *)0x0) && (iVar2 != 0)) && (param_6 != (undefined1 *)0x0)) &&
      ((*param_1 != 0 && (param_1[1] != 0)))) &&
     ((param_1[4] != 0 && ((param_1[5] != 0 && (param_1[6] != 0)))))) {
    uVar3 = FUN_ram_40025ca4(param_2,param_3);
    uVar4 = nc_effect_parameter_count(param_2,uVar3,1);
    if (param_5 <= uVar4) {
      uVar5 = (*(code *)*param_1)(iVar2);
      iVar6 = 0;
      puVar7 = local_70;
      do {
        uVar9 = (*(code *)param_1[5])(iVar2,iVar6);
        *puVar7 = uVar9;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0xc);
      puVar8 = local_a0;
      puVar7 = puVar8;
      for (uVar4 = 0; uVar4 != param_5; uVar4 = uVar4 + 1) {
        iVar6 = FUN_ram_40027042(param_2,uVar3,uVar4 & 0xff,1);
        local_ac[uVar4] = (char)iVar6;
        if (iVar6 == 0xff) {
          return 0xfffffffe;
        }
        *puVar7 = (int)*(undefined8 *)(param_4 + uVar4 * 4);
        puVar7 = puVar7 + 1;
      }
      iVar6 = FUN_ram_4002369c(param_2,uVar3);
      if (iVar6 == 0) {
        (*(code *)param_1[1])(iVar2,uVar3);
        uVar4 = 0;
        puVar7 = puVar8;
        while (uVar4 != param_5) {
          iVar6 = FUN_ram_400238ea(param_1,iVar2,local_ac[uVar4],puVar7);
          uVar4 = uVar4 + 1;
          puVar7 = puVar7 + 1;
          if (iVar6 == 0) {
            FUN_ram_40023b90(param_1,param_2,iVar2,uVar5,local_70);
            return 0xfffffffe;
          }
        }
        uVar4 = 0;
        while( true ) {
          if (uVar4 == param_5) {
            uVar1 = (*(code *)*param_1)(iVar2);
            *param_6 = uVar1;
            return 0;
          }
          uVar1 = local_ac[uVar4];
          iVar6 = FUN_ram_40023784(*puVar8,param_2);
          if (iVar6 != 0) break;
          uVar4 = uVar4 + 1;
          (*(code *)param_1[6])(*puVar8,iVar2,uVar1);
          puVar8 = puVar8 + 1;
        }
        FUN_ram_40023b90(param_1,param_2,iVar2,uVar5,local_70);
      }
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40023e22.
 * REA evidence: ev_3b7135aeda1d952ecc6e430a42966058f8fce5bf46be9cc54ce4fd9ac4bc2859
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40023e22(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_24 = param_1;
  iVar1 = FUN_ram_40023c3c(param_3);
  if (((((param_2 != (undefined4 *)0x0) && (iVar1 != 0)) && (param_5 != (undefined4 *)0x0)) &&
      (((code *)*param_2 != (code *)0x0 && (param_2[4] != 0)))) &&
     ((param_2[5] != 0 && (param_2[6] != 0)))) {
    uVar2 = (*(code *)*param_2)();
    uVar3 = nc_effect_parameter_count(param_3,uVar2,1);
    if (param_4 < uVar3) {
      iVar4 = FUN_ram_40027042(param_3,uVar2,param_4,1);
      if ((iVar4 == 0xff) || (iVar5 = FUN_ram_400238ea(param_2,iVar1,iVar4,&uStack_24), iVar5 == 0))
      {
        return 0xfffffffe;
      }
      iVar5 = FUN_ram_40023784(CONCAT44(uStack_20,uStack_24),param_3,iVar4);
      if (iVar5 == 0) {
        (*(code *)param_2[6])(CONCAT44(uStack_20,uStack_24),iVar1,iVar4);
        uVar2 = (*(code *)param_2[5])(iVar1,iVar4);
        *param_5 = uVar2;
        return 0;
      }
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40023ece.
 * REA evidence: ev_9f9e1fb0e75d08a74883dcbb9e9ef105c8d5523c3af2ea3b02fb2d150dc7366c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023ece(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40023c3c(param_2);
  if (((param_1 != (undefined4 *)0x0) && (iVar1 != 0)) && ((code *)*param_1 != (code *)0x0)) {
    uVar2 = (*(code *)*param_1)();
    uVar2 = nc_effect_parameter_count(param_2,uVar2,1);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40023f08.
 * REA evidence: ev_6779f4e4c1878a0262dce67a06cb2bbeb85e00bc42707c2d942c39953ffe6675
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40023f08(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 *param_8)

{
  uint uVar1;
  int *piStack_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined2 uStack_60;
  code *pcStack_5c;
  code *pcStack_58;
  code *pcStack_54;
  undefined1 *puStack_50;
  code *pcStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  undefined1 *puStack_40;
  code *pcStack_3c;
  code *pcStack_38;
  
  if (param_1 == (int *)0x0) {
    if (param_8 != (undefined1 *)0x0) {
      *param_8 = 1;
    }
    return (uint)(param_8 != (undefined1 *)0x0);
  }
  memset(&uStack_64,0,0x34);
  uStack_64 = 8;
  uStack_63 = 0;
  piStack_68 = param_1;
  if ((code *)param_1[10] != (code *)0x0) {
    uStack_63 = (*(code *)param_1[10])();
  }
  uStack_62 = 0x1040;
  uStack_60 = 0x3ff;
  if ((param_1[0x14] != 0) && (param_1[0x15] != 0)) {
    pcStack_38 = FUN_ram_400239da;
    uStack_60 = 0x7ff;
  }
  if (*param_1 != 0) {
    if (((param_1[4] != 0) && (param_1[5] != 0)) && (param_1[6] != 0)) {
      pcStack_5c = FUN_ram_40023e22;
    }
    if (((param_1[1] != 0) && (param_1[4] != 0)) && ((param_1[5] != 0 && (param_1[6] != 0)))) {
      pcStack_58 = FUN_ram_40023cac;
    }
  }
  if ((param_1[2] != 0) && (param_1[3] != 0)) {
    pcStack_54 = FUN_ram_40023c4a;
  }
  if ((param_1[7] != 0) && (param_1[8] != 0)) {
    puStack_50 = &LAB_ram_4002394c;
  }
  if ((param_1[9] != 0) || (param_1[0xb] != 0)) {
    pcStack_4c = FUN_ram_40023b0e;
  }
  if ((param_1[0xc] != 0) && (param_1[0xd] != 0)) {
    pcStack_48 = FUN_ram_40023abe;
  }
  if ((param_1[0xe] != 0) && (param_1[0xf] != 0)) {
    pcStack_44 = FUN_ram_40023a6e;
  }
  if ((param_1[0x10] != 0) && (param_1[0x11] != 0)) {
    puStack_40 = &LAB_ram_4002398c;
  }
  if (param_1[0x12] != 0) {
    pcStack_3c = FUN_ram_40023a08;
  }
  uVar1 = FUN_ram_400240ec(&piStack_68,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}


/* NanoCore 1.12, address 0x40023f1a.
 * REA evidence: ev_dafac859403405ae2e8f9cf3b180bc7a000240cd6ce2d8f802c1fb982219b435
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40023f1a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piStack_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined2 uStack_60;
  code *pcStack_5c;
  code *pcStack_58;
  code *pcStack_54;
  undefined1 *puStack_50;
  code *pcStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  undefined1 *puStack_40;
  code *pcStack_3c;
  code *pcStack_38;
  
  memset(&uStack_64,0,0x34);
  uStack_64 = 8;
  uStack_63 = 0;
  piStack_68 = param_1;
  if ((code *)param_1[10] != (code *)0x0) {
    uStack_63 = (*(code *)param_1[10])();
  }
  uStack_62 = 0x1040;
  uStack_60 = 0x3ff;
  if ((param_1[0x14] != 0) && (param_1[0x15] != 0)) {
    pcStack_38 = FUN_ram_400239da;
    uStack_60 = 0x7ff;
  }
  if (*param_1 != 0) {
    if (((param_1[4] != 0) && (param_1[5] != 0)) && (param_1[6] != 0)) {
      pcStack_5c = FUN_ram_40023e22;
    }
    if (((param_1[1] != 0) && (param_1[4] != 0)) && ((param_1[5] != 0 && (param_1[6] != 0)))) {
      pcStack_58 = FUN_ram_40023cac;
    }
  }
  if ((param_1[2] != 0) && (param_1[3] != 0)) {
    pcStack_54 = FUN_ram_40023c4a;
  }
  if ((param_1[7] != 0) && (param_1[8] != 0)) {
    puStack_50 = &LAB_ram_4002394c;
  }
  if ((param_1[9] != 0) || (param_1[0xb] != 0)) {
    pcStack_4c = FUN_ram_40023b0e;
  }
  if ((param_1[0xc] != 0) && (param_1[0xd] != 0)) {
    pcStack_48 = FUN_ram_40023abe;
  }
  if ((param_1[0xe] != 0) && (param_1[0xf] != 0)) {
    pcStack_44 = FUN_ram_40023a6e;
  }
  if ((param_1[0x10] != 0) && (param_1[0x11] != 0)) {
    puStack_40 = &LAB_ram_4002398c;
  }
  if (param_1[0x12] != 0) {
    pcStack_3c = FUN_ram_40023a08;
  }
  FUN_ram_400240ec(&piStack_68,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


