/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4002f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002f03a.
 * REA evidence: ev_4fbbb5ae6a49bedfa44c3a04b490748819f347fa51e66ac7782df8d0fafc728e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002f03a(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  
  if ((DAT_ram_30079e60 != '\0') && ((byte)(param_1 - 1U) < 0x10)) {
    if ((param_2 - 0x100 & 0xffff) < 8) {
      FUN_ram_4002e92c(param_2 & 0xff,0x1fff < param_3);
      return;
    }
    if (0x3fff < param_3) {
      param_3 = 0x3fff;
    }
    fVar4 = (float)(param_3 & 0xffff) / DAT_ram_4009c540;
    if ((param_2 - 0x200 & 0xffff) < 8) {
      param_2 = param_2 & 0xff;
      uVar1 = FUN_ram_40025d1e(param_2);
      uVar3 = 0;
      if (1 < uVar1) {
        if (DAT_ram_4009672c < fVar4) {
          fVar4 = DAT_ram_4009672c;
        }
        uVar3 = (uint)((float)(int)(uVar1 - 1) * fVar4 + DAT_ram_4009675c);
        if ((int)uVar3 < 0) {
          uVar3 = 0;
        }
        if ((int)uVar1 <= (int)uVar3) {
          uVar3 = uVar1 - 1;
        }
        uVar3 = uVar3 & 0xff;
      }
      uVar2 = FUN_ram_40025d2c(param_2,uVar3);
      FUN_ram_4002e954(param_2,uVar2);
      return;
    }
    if (0xfff < param_2) {
      uVar3 = (param_2 - 0x1000 & 0x1fff) >> 5;
      if (uVar3 < 8) {
        FUN_ram_4002e990(uVar3,param_2 - 0x1000 & 0x1f);
        return;
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002f12c.
 * REA evidence: ev_54ff4e4c6b9279d4177e0ec1d790e4c1acd3fa614c3d3f84a13f2dd3e6d62c0c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool thunk_FUN_ram_4002ecec(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_30079e4c != (code *)0x0) {
    iVar2 = (*_DAT_ram_30079e4c)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4002f130.
 * REA evidence: ev_f2dd6d0363203ce17f512c11685c18fd407d7e30501ff9f3f9ff73aa1789082e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool thunk_FUN_ram_4002ecec(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_30079e4c != (code *)0x0) {
    iVar2 = (*_DAT_ram_30079e4c)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4002f134.
 * REA evidence: ev_b47d5396b67ac4aa9b7214bfee0b9dc95ef17c74719599fc06b565c8b8b31b6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002ed2c(void)

{
  nc_midi_control_change();
  return;
}


/* NanoCore 1.12, address 0x4002f13c.
 * REA evidence: ev_b5152c6fe6a3f194726497f94874fbd0905352537cd9d290dfdb1d11cd28b72a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002efea(void)

{
  FUN_ram_4002efea();
  return;
}


/* NanoCore 1.12, address 0x4002f140.
 * REA evidence: ev_c3d5e0b70436e3eed48546ac8221af95d7e078a7edd23600e88ca21de0449957
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002f03a(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  
  if ((DAT_ram_30079e60 != '\0') && ((byte)(param_1 - 1U) < 0x10)) {
    if ((param_2 - 0x100 & 0xffff) < 8) {
      FUN_ram_4002e92c(param_2 & 0xff,0x1fff < param_3);
      return;
    }
    if (0x3fff < param_3) {
      param_3 = 0x3fff;
    }
    fVar4 = (float)(param_3 & 0xffff) / DAT_ram_4009c540;
    if ((param_2 - 0x200 & 0xffff) < 8) {
      param_2 = param_2 & 0xff;
      uVar1 = FUN_ram_40025d1e(param_2);
      uVar3 = 0;
      if (1 < uVar1) {
        if (DAT_ram_4009672c < fVar4) {
          fVar4 = DAT_ram_4009672c;
        }
        uVar3 = (uint)((float)(int)(uVar1 - 1) * fVar4 + DAT_ram_4009675c);
        if ((int)uVar3 < 0) {
          uVar3 = 0;
        }
        if ((int)uVar1 <= (int)uVar3) {
          uVar3 = uVar1 - 1;
        }
        uVar3 = uVar3 & 0xff;
      }
      uVar2 = FUN_ram_40025d2c(param_2,uVar3);
      FUN_ram_4002e954(param_2,uVar2);
      return;
    }
    if (0xfff < param_2) {
      uVar3 = (param_2 - 0x1000 & 0x1fff) >> 5;
      if (uVar3 < 8) {
        FUN_ram_4002e990(uVar3,param_2 - 0x1000 & 0x1f);
        return;
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002f144.
 * REA evidence: ev_d01b5245f321097f85f3472b18611a83db16e7ff9ea8ca1fecf959f095d78b6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002f144(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 4 + 0x30079e70) + 1;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  *(int *)(param_1 * 4 + 0x30079e70) = iVar1;
  return;
}


/* NanoCore 1.12, address 0x4002f15e.
 * REA evidence: ev_0eaae410a49030bd9b27b20c149d45de67225aefd8db2e349f421fdbe5a160ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002f15e(code *param_1)

{
  uint uVar1;
  
  if (param_1 == (code *)0x0) {
    return 0xff;
  }
  uVar1 = (*param_1)();
  if (uVar1 < 0xff) {
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4002f170.
 * REA evidence: ev_c1320b1fa4844b56ffd67eb0a85f54a3cbfad1a6b01b49c7eff9df174d8e7a0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002f170(code *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1)();
  if (uVar1 < 0xff) {
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4002f184.
 * REA evidence: ev_66398e49c4daa6f00c8e90f4c9916e6aea035d91ba21365d46ff9d9b0fdd193d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002f184(ushort *param_1,byte *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (((param_1 != (ushort *)0x0) && (param_2 != (byte *)0x0)) && ((ushort)*param_2 <= *param_1)) {
    uVar1 = *(undefined1 *)((int)param_1 + 0x33d);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4002f1a0.
 * REA evidence: ev_49e1b38fa1ce23f7a32da5402872b7059e0fbce19f58ad3f6dfb726b052a0da1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002f1a0(ushort *param_1,byte *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (((param_1 != (ushort *)0x0) && (param_2 != (byte *)0x0)) && ((ushort)*param_2 <= *param_1)) {
    uVar1 = (undefined1)param_1[0x19f];
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4002f1bc.
 * REA evidence: ev_e0e6b2024db579433f456250d65d6f3dfd3f725d8b603e060762edbc6eb7e2c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002f1bc(ushort *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((((param_1 != (ushort *)0x0) && (param_2 != 0)) &&
      ((ushort)*(byte *)(param_2 + 1) <= *param_1)) && (*(code **)(param_2 + 4) != (code *)0x0)) {
    iVar2 = (**(code **)(param_2 + 4))(*(undefined1 *)((int)param_1 + 0x33f));
    if (iVar2 == 0) {
      uVar1 = 0xff;
    }
    else {
      uVar1 = *(undefined1 *)((int)param_1 + 0x33f);
    }
    return uVar1;
  }
  return 0xff;
}


/* NanoCore 1.12, address 0x4002f1f8.
 * REA evidence: ev_811204133da63ae17f0861d6cedf1f45db2dc34718e2329f0dee3dee3b1f9461
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002f1f8(void)

{
  int iVar1;
  
  if ((DAT_ram_30079f9c == '\0') &&
     (iVar1 = FUN_ram_40004988(0x30079f70,&DAT_ram_4009c550,1), iVar1 == 0)) {
    DAT_ram_30079f9c = '\x01';
  }
  return -(uint)(DAT_ram_30079f9c == '\0');
}


/* NanoCore 1.12, address 0x4002f23e.
 * REA evidence: ev_b9416ebb5640966a40c8f967895dfa8b4288e9f8c938044987613cbca2d570ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002f23e(void)

{
  int iVar1;
  
  if (DAT_ram_30079f9c == '\0') {
    iVar1 = FUN_ram_4002f1f8();
    if (iVar1 != 0) {
      return -1;
    }
    if (DAT_ram_30079f9c == '\0') {
      return -1;
    }
  }
  iVar1 = FUN_ram_40004a22(0x30079f70,0xffffffff);
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.12, address 0x4002f282.
 * REA evidence: ev_b278d0bb461232e4a18801dceb2e33071e8706e6a119ff20b5e70d941df0247d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002f282(void)

{
  if (DAT_ram_30079f9c != '\0') {
    FUN_ram_40004b14(0x30079f70);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002f29a.
 * REA evidence: ev_e055ff6ea5c49cdb1c32ec93d1b525397e654be6f981281591e24639ca3fcd37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002f29a(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (0x3f < param_1) {
    return false;
  }
  iVar2 = FUN_ram_4002f23e();
  if (iVar2 == 0) {
    bVar1 = *(int *)(param_1 * 4 + 0x30079e70) == param_2;
    FUN_ram_4002f282();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4002f2b2.
 * REA evidence: ev_9a8ffde364197646bd8365539db85ffc86041aaf808cbbe2e2436aa5c4b64e70
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002f2b2(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4002f23e();
  if (iVar2 == 0) {
    bVar1 = *(int *)(param_1 * 4 + 0x30079e70) == param_2;
    FUN_ram_4002f282();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4002f2e0.
 * REA evidence: ev_fa1b556b5c993493767b27586ff6368dbd69e56cdf9a789a1c8348d88914b628
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002f2e0(int param_1,int param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined4 uVar1;
  
  if ((param_2 != 0xff) && (param_2 != param_1)) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4002f2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
      return uVar1;
    }
    return 0xffffffff;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002f2fa.
 * REA evidence: ev_e6fecdddffcd20ec784865e2612bc2b909d0211142c711889ce8a624554cb7a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002f2fa(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x340) != '\0')) {
    iVar1 = (*param_4)(param_2,param_3);
    if (param_1 != iVar1) {
      iVar1 = 0xff;
    }
    return iVar1;
  }
  return 0xff;
}


/* NanoCore 1.12, address 0x4002f328.
 * REA evidence: ev_4d7c5287789a888cb999b0ca8e2c99410d63f4afcc93e6e764748a0f4ea1cd74
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002f328(uint param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (0x3f < param_1) {
    return false;
  }
  iVar3 = FUN_ram_4002f23e();
  iVar1 = _DAT_ram_30079e6c;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 * 4 + 0x30079e70);
    bVar2 = param_2 == iVar3;
    if ((param_2 == iVar3) && (_DAT_ram_30079e6c != 0)) {
      *(undefined1 *)(_DAT_ram_30079e6c + param_1 + 0x10080) = 0;
      *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
    }
    FUN_ram_4002f282();
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* NanoCore 1.12, address 0x4002f340.
 * REA evidence: ev_de72ae0fb3845815a1a2392050f644be1d7e70c7469c8428f39c00f4d9b2970d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002f340(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FUN_ram_4002f23e();
  iVar1 = _DAT_ram_30079e6c;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 * 4 + 0x30079e70);
    bVar2 = param_2 == iVar3;
    if ((param_2 == iVar3) && (_DAT_ram_30079e6c != 0)) {
      *(undefined1 *)(_DAT_ram_30079e6c + param_1 + 0x10080) = 0;
      *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
    }
    FUN_ram_4002f282();
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* NanoCore 1.12, address 0x4002f392.
 * REA evidence: ev_05bd65e91e3c206bed2f40c5c4fe7c76834cf08ab66c6fdb3fbf2cd74ccee3d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002f392(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003f036(1,0x100c2);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    memset(iVar1,0,0x100c2);
    uVar2 = 0;
    _DAT_ram_30079e6c = iVar1;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4002f3cc.
 * REA evidence: ev_7c572fbe6be8bffa8c7c948ca61e6f46040349d81d18fe6b33406c5c7fcff124
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002f3cc(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  if (((param_1 < 0x40) && (param_4 - 1U < 0x400)) && (iVar1 = FUN_ram_4002f23e(), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 * 4 + 0x30079e70);
    bVar2 = param_2 == iVar1;
    if ((param_2 == iVar1) && ((_DAT_ram_30079e6c != 0 || (iVar1 = FUN_ram_4002f392(), iVar1 == 0)))
       ) {
      iVar1 = _DAT_ram_30079e6c;
      FUN_ram_4000303c(param_1 * 0x400 + _DAT_ram_30079e6c,param_3,param_4);
      *(short *)(iVar1 + (param_1 + 0x8000) * 2) = (short)param_4;
      *(undefined1 *)(param_1 + iVar1 + 0x10080) = 1;
    }
    FUN_ram_4002f282();
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* NanoCore 1.12, address 0x4002f466.
 * REA evidence: ev_748ea9e04d07fa30a3b59ba2e50679a0171e028191f82c20cd79e003cd842a05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002f466(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                    int param_7)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_40091cb8();
  iVar1 = 0;
  if (param_4 != 0) {
    iVar1 = 1;
    if (param_7 != 0xff) {
      iVar1 = -1;
      if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
        iVar1 = (**(code **)(param_1 + 0x1c))();
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
  }
  if (param_3 != 0) {
    if (param_6 == 0xff) {
      if (iVar1 == 0) {
        iVar1 = 1;
      }
    }
    else if ((*(code **)(param_1 + 0x18) == (code *)0x0) ||
            (iVar2 = (**(code **)(param_1 + 0x18))(param_6), iVar2 != 0)) {
      iVar1 = -1;
    }
  }
  if (param_2 != 0) {
    if (param_5 == 0xff) {
      if (iVar1 == 0) {
        iVar1 = 1;
      }
    }
    else if ((*(code **)(param_1 + 0x14) == (code *)0x0) ||
            (iVar2 = (**(code **)(param_1 + 0x14))(param_5), iVar2 != 0)) {
      iVar1 = -1;
    }
  }
  FUN_ram_40091d0e();
  return iVar1;
}


/* NanoCore 1.12, address 0x4002f4fe.
 * REA evidence: ev_f5368e1a744f6cd11a4f8d063ef159ef9a74788702a85b61f4ed409a61644546
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002f4fe(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_678 [776];
  undefined1 auStack_370 [130];
  undefined1 uStack_2ee;
  undefined1 uStack_28a;
  undefined1 uStack_226;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (*(int *)(param_3 + 0x24) != 0)) &&
     (*(int *)(param_3 + 0x28) != 0)) {
    if ((param_1 != 0) && (*(char *)(param_1 + 0x340) != '\0')) {
      param_2 = param_1;
    }
    FUN_ram_4000303c(auStack_370,param_2,0x340);
    uVar1 = FUN_ram_4002f184(auStack_370,param_3);
    uVar2 = FUN_ram_4002f1a0(auStack_370,param_3);
    uVar3 = FUN_ram_4002f1bc(auStack_370,param_3);
    if (param_4 != 0) {
      uStack_28a = 0;
      uStack_33 = 0xff;
      uVar1 = 0xff;
    }
    if (param_5 != 0) {
      uStack_226 = 0;
      uStack_32 = 0xff;
      uVar2 = 0xff;
    }
    if (param_6 != 0) {
      uStack_2ee = 0;
      uStack_31 = 0xff;
      uVar3 = 0xff;
    }
    if ((param_7 != 0) ||
       (((*(code **)(param_3 + 0x40) != (code *)0x0 && (*(int *)(param_3 + 0x44) != 0)) &&
        (iVar4 = (**(code **)(param_3 + 0x40))(), iVar4 == 0)))) {
      (**(code **)(param_3 + 0x24))(auStack_370,auStack_678);
      iVar4 = (**(code **)(param_3 + 0x28))(auStack_678);
      if ((((iVar4 == 0) &&
           ((*(code **)(param_3 + 0x30) == (code *)0x0 ||
            (iVar4 = (**(code **)(param_3 + 0x30))(uStack_34), iVar4 == 0)))) &&
          ((*(code **)(param_3 + 0x34) == (code *)0x0 ||
           (iVar4 = (**(code **)(param_3 + 0x34))(auStack_370), iVar4 == 0)))) &&
         (*(code **)(param_3 + 0x20) != (code *)0x0)) {
        (**(code **)(param_3 + 0x20))(uVar1,uVar2,uVar3);
      }
      if (param_7 == 0) {
        (**(code **)(param_3 + 0x44))();
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002f62a.
 * REA evidence: ev_f66a5da8573b0c0e5c27fdac0fb6cbe74fba0d42e6d2edcc0795b4815caf2004
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002f62a(int param_1)

{
  int iVar1;
  undefined4 in_a4;
  undefined4 in_a5;
  undefined4 in_a6;
  
  iVar1 = -1;
  if (((param_1 != 0) && (iVar1 = FUN_ram_4002f466(), iVar1 == 0)) &&
     (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(in_a4,in_a5,in_a6);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4002f66a.
 * REA evidence: ev_86f2f183423a4ba79ecd002469a8ac668b9f9470519c00070185e098a9189879
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002f66a(uint param_1)

{
  int iVar1;
  
  if (0x3f < param_1) {
    return;
  }
  iVar1 = FUN_ram_4002f23e();
  if (iVar1 == 0) {
    FUN_ram_4002f144(param_1);
    iVar1 = _DAT_ram_30079e6c;
    if (_DAT_ram_30079e6c != 0) {
      *(undefined1 *)(_DAT_ram_30079e6c + param_1 + 0x10080) = 0;
      *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
    }
    FUN_ram_4002f282();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002f6b8.
 * REA evidence: ev_de23dd799a7d1b7ecad2c959258f9f4bef41c66e87eb70b49dbb8d151540a742
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002f6b8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uStack_424;
  undefined1 auStack_420 [1024];
  
  iVar2 = FUN_ram_4002f23e();
  if (iVar2 == 0) {
    if ((_DAT_ram_30079e6c != 0) || (iVar2 = FUN_ram_4002f392(), iVar2 == 0)) {
      if (*(short *)(_DAT_ram_30079e6c + 0x100c0) == 0) {
        *(undefined1 *)(_DAT_ram_30079e6c + 0x100c1) = 1;
        FUN_ram_4002f282();
        uVar1 = 0;
        do {
          uVar3 = uVar1 & 0xff;
          uStack_424 = 0;
          iVar2 = FUN_ram_4002f23e();
          if (iVar2 == 0) {
            uVar4 = *(undefined4 *)(uVar1 * 4 + 0x30079e70);
            FUN_ram_4002f282();
            iVar2 = FUN_ram_4003338c(uVar3,auStack_420,0x400,&uStack_424);
            if (iVar2 == 0) {
              FUN_ram_4002f3cc(uVar3,uVar4,auStack_420,uStack_424);
            }
            else if (iVar2 == 1) {
              FUN_ram_4002f328(uVar3,uVar4);
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 != 0x40);
        iVar2 = FUN_ram_4002f23e();
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        *(undefined2 *)(_DAT_ram_30079e6c + 0x100c0) = 1;
      }
      FUN_ram_4002f282();
      return 0;
    }
    FUN_ram_4002f282();
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4002f7ae.
 * REA evidence: ev_371c70d172ea633bdc4ce318782d7f56bfa6f27e00ecc225357778818d745722
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002f7ae(uint param_1,int param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uStack_45c;
  char acStack_458 [24];
  undefined1 auStack_440 [1036];
  
  if ((param_2 != 0) && (param_1 < 0x40)) {
    cVar4 = '\x04';
    do {
      uStack_45c = 0;
      iVar1 = FUN_ram_4002f23e();
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      iVar3 = *(int *)(param_1 * 4 + 0x30079e70);
      FUN_ram_4002f282();
      iVar1 = FUN_ram_400332c6(param_1,acStack_458);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      if (acStack_458[0] == '\0') {
        iVar1 = FUN_ram_4002f328(param_1,iVar3);
        if (iVar1 != 0) {
          FUN_ram_40015468(param_2);
          goto LAB_ram_4002f84c;
        }
      }
      else {
        iVar1 = FUN_ram_4002f23e();
        if (iVar1 == 0) {
          if (iVar3 == *(int *)(param_1 * 4 + 0x30079e70)) {
            if ((_DAT_ram_30079e6c == 0) ||
               (*(char *)(_DAT_ram_30079e6c + param_1 + 0x10080) == '\0')) {
              FUN_ram_4002f282();
              iVar1 = FUN_ram_4003338c(param_1,auStack_440,0x400,&uStack_45c);
              if (iVar1 != 1) {
                if ((iVar1 == 0) &&
                   (iVar1 = FUN_ram_40015656(param_2,auStack_440,uStack_45c), iVar1 == 0)) {
                  iVar1 = FUN_ram_4002f3cc(param_1,iVar3,auStack_440,uStack_45c);
                  if (iVar1 != 0) goto LAB_ram_4002f84c;
                }
                else {
                  iVar1 = FUN_ram_4002f29a(param_1,iVar3);
                  if (iVar1 != 0) {
                    return 0xffffffff;
                  }
                }
              }
            }
            else {
              iVar1 = _DAT_ram_30079e6c + param_1 * 2;
              uVar5 = (uint)*(ushort *)(iVar1 + 0x10000);
              if (0x3ff < (uVar5 - 1 & 0xffff)) {
                *(undefined1 *)(_DAT_ram_30079e6c + param_1 + 0x10080) = 0;
                *(undefined2 *)(iVar1 + 0x10000) = 0;
LAB_ram_4002f8d8:
                FUN_ram_4002f144(param_1);
                goto LAB_ram_4002f8de;
              }
              FUN_ram_4000303c(auStack_440,_DAT_ram_30079e6c + param_1 * 0x400,uVar5);
              uStack_45c = uVar5;
              FUN_ram_4002f282();
              iVar1 = FUN_ram_40015656(param_2,auStack_440,uStack_45c);
              if (iVar1 == 0) {
LAB_ram_4002f84c:
                if (param_3 != (code *)0x0) {
                  (*param_3)(param_2);
                }
                iVar1 = FUN_ram_4002f29a(param_1,iVar3);
                if (iVar1 != 0) {
                  return 0;
                }
              }
              else {
                iVar2 = FUN_ram_4002f23e();
                iVar1 = _DAT_ram_30079e6c;
                if (iVar2 == 0) {
                  if (iVar3 != *(int *)(param_1 * 4 + 0x30079e70)) goto LAB_ram_4002f8de;
                  if (_DAT_ram_30079e6c != 0) {
                    *(undefined1 *)(_DAT_ram_30079e6c + param_1 + 0x10080) = 0;
                    *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
                  }
                  goto LAB_ram_4002f8d8;
                }
              }
            }
          }
          else {
LAB_ram_4002f8de:
            FUN_ram_4002f282();
          }
        }
      }
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4002f97c.
 * REA evidence: ev_1d102eb7e7d706db7a6ce55ccc584a421e846a3bcab45efcc34aac65ec5f9f35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002f97c(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) &&
      ((*(uint *)(param_1 + 0x33c) & 0xffff00) == (*(uint *)(param_2 + 0x33c) & 0xffff00))) &&
     ((*(char *)(param_1 + 0x33f) == *(char *)(param_2 + 0x33f) &&
      (iVar1 = FUN_ram_40002fdc(param_1 + 0x12,param_2 + 0x12,8), iVar1 == 0)))) {
    pcVar3 = (char *)(param_1 + 0x1c);
    pcVar2 = (char *)(param_2 + 0x1c);
    do {
      if (((*pcVar3 != *pcVar2) || (pcVar3[1] != pcVar2[1])) || (pcVar3[2] != pcVar2[2])) {
        return 1;
      }
      pcVar3 = pcVar3 + 100;
      pcVar2 = pcVar2 + 100;
    } while (pcVar3 != (char *)(param_1 + 0x33c));
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x4002fa10.
 * REA evidence: ev_984cdcfcdb44017d34cd9d5700907ad8d697bf299eac903c9cf1bff68212d837
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002fa10(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_3 != (undefined1 *)0x0) {
    uVar1 = 1;
    if (((param_1 != 0) && (*(char *)(param_1 + 0x340) != '\0')) && (param_2 != 0)) {
      uVar1 = FUN_ram_4002f97c();
    }
    *param_3 = uVar1;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002fa3a.
 * REA evidence: ev_b1e46260d41d8e273edbba57ff9c76c146f386436e386a4f68de8b8e90c96c7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002fa3a(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_ram_4000303c(param_1,param_2,0x340);
    *(undefined1 *)(param_1 + 0x340) = 1;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002fa5e.
 * REA evidence: ev_58ab8fcddaa6cd35410ccaf3cf05ed777c2db149f49a5a172edf01d682af0ee7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002fa5e(int param_1)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x340) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4002fa66.
 * REA evidence: ev_5ed98c41f7a5039669e49f4d1e415c735a3f46b23c7882b646308fcb0213b388
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fa66(int param_1,ushort *param_2,byte *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  code *pcVar15;
  bool bVar16;
  undefined4 local_670;
  char acStack_654 [4];
  undefined1 auStack_650 [776];
  undefined1 auStack_348 [788];
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == (ushort *)0x0) {
    return 0xffffffff;
  }
  if (param_3 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (*(int *)(param_3 + 0x24) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_3 + 0x28) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_3 + 0x2c) == 0) {
    return 0xffffffff;
  }
  iVar3 = FUN_ram_4002f184(param_2,param_3);
  iVar4 = FUN_ram_4002f1a0(param_2,param_3);
  iVar5 = FUN_ram_4002f1bc(param_2,param_3);
  if ((ushort)*param_3 <= *param_2) {
    if (iVar3 == 0xff) {
      *(undefined1 *)(param_2 + 0x73) = 0;
      *(undefined1 *)((int)param_2 + 0x33d) = 0xff;
    }
    if (iVar4 == 0xff) {
      *(undefined1 *)(param_2 + 0xa5) = 0;
      *(undefined1 *)(param_2 + 0x19f) = 0xff;
    }
  }
  uVar6 = FUN_ram_4002f15e(*(undefined4 *)(param_3 + 8));
  local_670 = FUN_ram_4002f15e(*(undefined4 *)(param_3 + 0xc));
  uVar7 = FUN_ram_4002f15e(*(undefined4 *)(param_3 + 0x10));
  iVar8 = FUN_ram_4002f2fa(uVar6,param_1,param_3,FUN_ram_4002f184);
  iVar9 = FUN_ram_4002f2fa(local_670,param_1,param_3,FUN_ram_4002f1a0);
  iVar10 = FUN_ram_4002f2fa(uVar7,param_1,param_3,FUN_ram_4002f1bc);
  if (*(char *)(param_1 + 0x340) != '\0') {
    uVar6 = FUN_ram_4002f184(param_1,param_3);
    local_670 = FUN_ram_4002f1a0(param_1,param_3);
    uVar7 = FUN_ram_4002f1bc(param_1,param_3);
  }
  if ((((iVar3 == 0xff) || (iVar3 == iVar8)) && ((iVar4 == 0xff || (iVar4 == iVar9)))) &&
     ((iVar5 == 0xff || (iVar5 == iVar10)))) {
    bVar1 = false;
  }
  else {
    if (*(code **)(param_3 + 0x38) == (code *)0x0) {
      return 0xffffffff;
    }
    if (*(int *)(param_3 + 0x3c) == 0) {
      return 0xffffffff;
    }
    iVar11 = (**(code **)(param_3 + 0x38))();
    if (iVar11 != 0) {
      return 0xffffffff;
    }
    bVar1 = true;
  }
  FUN_ram_40091cb8();
  if ((iVar3 == 0xff) || (iVar3 == iVar8)) {
    bVar16 = false;
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_ram_4002f2e0(iVar8,iVar3,*(undefined4 *)(param_3 + 0x14));
    bVar16 = iVar8 != 0;
    if (bVar16) {
      *(undefined1 *)(param_2 + 0x73) = 0;
      *(undefined1 *)((int)param_2 + 0x33d) = 0xff;
      iVar3 = 0xff;
    }
    iVar8 = 1;
  }
  if ((iVar4 == 0xff) || (iVar4 == iVar9)) {
    bVar2 = false;
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_ram_4002f2e0(iVar9,iVar4,*(undefined4 *)(param_3 + 0x18));
    bVar2 = iVar9 != 0;
    if (bVar2) {
      *(undefined1 *)(param_2 + 0xa5) = 0;
      *(undefined1 *)(param_2 + 0x19f) = 0xff;
      iVar4 = 0xff;
    }
    iVar9 = 1;
  }
  if ((iVar5 == 0xff) || (iVar5 == iVar10)) {
    bVar14 = false;
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_ram_4002f2e0(iVar10,iVar5,*(undefined4 *)(param_3 + 0x1c));
    bVar14 = iVar10 != 0;
    if (bVar14) {
      *(undefined1 *)(param_2 + 0x41) = 0;
      *(undefined1 *)((int)param_2 + 0x33f) = 0xff;
      iVar5 = 0xff;
    }
    iVar10 = 1;
  }
  FUN_ram_40091d0e();
  if (((bVar16 != false || bVar2 != false) || bVar14 != false) &&
     (iVar11 = FUN_ram_4002f466(param_3,bVar16,bVar2,bVar14,uVar6,local_670,uVar7), iVar11 < 0)) {
    iVar3 = FUN_ram_4002f62a(param_3,iVar8,iVar9,iVar10,uVar6,local_670,uVar7);
    if (iVar3 != 0) {
      FUN_ram_4002f4fe(param_1,param_2,param_3,iVar8,iVar9,iVar10,0);
    }
    if (bVar1) {
      (**(code **)(param_3 + 0x3c))();
    }
    FUN_ram_4002fa5e(param_1);
    return 0xffffffff;
  }
  FUN_ram_4002fa10(param_1,param_2,acStack_654);
  if (((*(code **)(param_3 + 0x40) == (code *)0x0) || (*(int *)(param_3 + 0x44) == 0)) ||
     (iVar11 = (**(code **)(param_3 + 0x40))(), iVar11 != 0)) {
    if (!bVar1) {
      return 0xffffffff;
    }
    iVar3 = FUN_ram_4002f62a(param_3,iVar8,iVar9,iVar10,uVar6,local_670,uVar7);
    if (iVar3 != 0) {
      FUN_ram_4002f4fe(param_1,param_2,param_3,iVar8,iVar9,iVar10,0);
      FUN_ram_4002fa5e(param_1);
    }
    (**(code **)(param_3 + 0x3c))();
    return 0xffffffff;
  }
  (**(code **)(param_3 + 0x24))(param_2,auStack_650);
  if (acStack_654[0] == '\0') {
    pcVar15 = *(code **)(param_3 + 0x2c);
  }
  else {
    pcVar15 = *(code **)(param_3 + 0x28);
  }
  iVar11 = (*pcVar15)(auStack_650);
  if (((iVar11 == 0) &&
      ((*(code **)(param_3 + 0x30) == (code *)0x0 ||
       (iVar11 = (**(code **)(param_3 + 0x30))((char)param_2[0x19e]), iVar11 == 0)))) &&
     ((*(code **)(param_3 + 0x34) == (code *)0x0 ||
      (iVar11 = (**(code **)(param_3 + 0x34))(param_2), iVar11 == 0)))) {
    iVar11 = 0;
    goto LAB_ram_4002fd62;
  }
  iVar12 = FUN_ram_4002f62a(param_3,iVar8,iVar9,iVar10,uVar6,local_670,uVar7);
  if (*(char *)(param_1 + 0x340) == '\0') {
LAB_ram_4002fdda:
    if (iVar12 == 0) goto LAB_ram_4002fd62;
  }
  else {
    (**(code **)(param_3 + 0x24))(param_1,auStack_348);
    iVar13 = (**(code **)(param_3 + 0x28))(auStack_348);
    if (iVar13 != 0) {
      iVar12 = -1;
    }
    if ((*(code **)(param_3 + 0x30) != (code *)0x0) &&
       (iVar13 = (**(code **)(param_3 + 0x30))(*(undefined1 *)(param_1 + 0x33c)), iVar13 != 0)) {
      iVar12 = -1;
    }
    if ((*(code **)(param_3 + 0x34) == (code *)0x0) ||
       (iVar13 = (**(code **)(param_3 + 0x34))(param_1), iVar13 == 0)) goto LAB_ram_4002fdda;
  }
  if (iVar10 != 0 || (iVar8 != 0 || iVar9 != 0)) {
    FUN_ram_4002f4fe(param_1,param_2,param_3,iVar8,iVar9,iVar10,1);
  }
  FUN_ram_4002fa5e(param_1);
LAB_ram_4002fd62:
  (**(code **)(param_3 + 0x44))();
  if (bVar1) {
    (**(code **)(param_3 + 0x3c))();
  }
  if (iVar11 != 0) {
    return 0xffffffff;
  }
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    (**(code **)(param_3 + 0x20))(iVar3,iVar4,iVar5);
  }
  FUN_ram_4002fa3a(param_1,param_2);
  return 0;
}


/* NanoCore 1.12, address 0x4002fe10.
 * REA evidence: ev_f7150025d15db9e2b237ba0c42a0cdb16e7d5be710c4a1e157f4d47a3d8a421b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002fe10(void)

{
  int iVar1;
  
  if (DAT_ram_3007b560 != '\0') {
    iVar1 = FUN_ram_40004a22(0x3007b534,0xffffffff);
    return -(uint)(iVar1 != 0);
  }
  return -1;
}


/* NanoCore 1.12, address 0x4002fe3e.
 * REA evidence: ev_fc7268fd0e573e9c28f65e07f146f00ee405e6fb0d1d5a65c450c714f41df4c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002fe3e(void)

{
  if (DAT_ram_3007b560 != '\0') {
    FUN_ram_40004b14(0x3007b534);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002fe56.
 * REA evidence: ev_88aaa2c98d858c21b5c2ab4cb4552a95072d2b56dfa804cdd0d273588dcff134
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fe56(byte *param_1,uint param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 uVar2;
  char acStack_378 [24];
  undefined1 auStack_360 [2];
  undefined1 auStack_35e [842];
  
  memset(acStack_378,0,0x18);
  if (param_4 != (undefined1 *)0x0) {
    if (param_2 < *param_1) {
      iVar1 = FUN_ram_400332c6(param_2,acStack_378);
      if (iVar1 == 0) {
        if (acStack_378[0] == '\0') {
          FUN_ram_40015468(auStack_360);
          FUN_ram_4000303c(auStack_35e,s_preset_ram_40099ffc,6);
          iVar1 = FUN_ram_400154ac(auStack_360,0x3007a4cc,0x400,param_3);
        }
        else {
          iVar1 = FUN_ram_4003338c(param_2,0x3007a4cc,0x400,param_3);
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar2 = 4;
    }
    else {
      uVar2 = 3;
    }
    *param_4 = uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4002ff06.
 * REA evidence: ev_cb9f192859a7b6d0adf38251afca436956f0c9dad94ad402568955e253f08520
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002ff06(int param_1,undefined4 param_2,int param_3,undefined1 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_ram_4002fe10();
  if (iVar1 == 0) {
    if ((_DAT_ram_3007b530 == 0) || (_DAT_ram_3007b1d0 != 0)) goto LAB_ram_4002ff38;
    DAT_ram_3007b1d8 = (undefined1)param_2;
    _DAT_ram_3007b1e0 = -1;
    _DAT_ram_3007b1d4 = param_1;
    DAT_ram_3007b1d9 = param_4;
    _DAT_ram_3007b1dc = param_5;
    if (param_3 != 0) {
      FUN_ram_4000303c(0x3007b1f0,param_3,0x340);
    }
    FUN_ram_40040e96(0x3007b1e4);
    _DAT_ram_3007b1d0 = 1;
    FUN_ram_4002fe3e();
    uVar2 = FUN_ram_400043ae(0x5dc);
    iVar3 = FUN_ram_40040eb6(0x3007b1e4,uVar2);
    iVar1 = _DAT_ram_3007b1e0;
    if (iVar3 != 0) {
      iVar3 = FUN_ram_4002fe10();
      iVar1 = _DAT_ram_3007b1e0;
      if (iVar3 == 0) {
        if (_DAT_ram_3007b1d0 == 1) {
          _DAT_ram_3007b1d0 = 0;
        }
        else {
          if (_DAT_ram_3007b1d0 == 3) {
            FUN_ram_4002fe3e();
            goto LAB_ram_4002ffd4;
          }
          if (_DAT_ram_3007b1d0 != 0) {
            FUN_ram_4002fe3e();
            goto LAB_ram_4002ffa8;
          }
        }
LAB_ram_4002ff38:
        FUN_ram_4002fe3e();
        goto LAB_ram_4002ff3c;
      }
LAB_ram_4002ffa8:
      FUN_ram_40040eb6(0x3007b1e4,0xffffffff);
      iVar1 = _DAT_ram_3007b1e0;
    }
LAB_ram_4002ffd4:
    if (((iVar1 == 0) && (param_1 == 1)) && (*(code **)(_DAT_ram_3007b530 + 0x1c) != (code *)0x0)) {
      iVar1 = (**(code **)(_DAT_ram_3007b530 + 0x1c))(param_2,0x3007b1f0);
    }
    iVar3 = FUN_ram_4002fe10();
    if (iVar3 == 0) {
      _DAT_ram_3007b1d0 = 0;
      FUN_ram_4002fe3e();
    }
  }
  else {
LAB_ram_4002ff3c:
    iVar1 = -1;
  }
  return iVar1;
}


