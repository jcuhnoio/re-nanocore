/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4002e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002e126.
 * REA evidence: ev_5a29206e90f5eb44ff5620a98b6056e2481f234bf60605a40355b79ae65d7e8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e126(char param_1,uint param_2)

{
  if ((DAT_ram_3007ae18 != '\0') && ((byte)(param_1 - 1U) < 0x10)) {
    custom0();
    if ((param_2 & 0x7f) < 0x40) {
      FUN_ram_4002dc2a(param_2 & 0x7f);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002e176.
 * REA evidence: ev_69c261cf7e734922f14c817f9604e721fcd2f35a37ffcd4afb9d602f86385741
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e176(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  
  if ((DAT_ram_3007ae18 != '\0') && ((byte)(param_1 - 1U) < 0x10)) {
    if ((param_2 - 0x100 & 0xffff) < 8) {
      FUN_ram_4002da68(param_2 & 0xff,0x1fff < param_3);
      return;
    }
    if (0x3fff < param_3) {
      param_3 = 0x3fff;
    }
    fVar4 = (float)(param_3 & 0xffff) / DAT_ram_40097298;
    if ((param_2 - 0x200 & 0xffff) < 8) {
      param_2 = param_2 & 0xff;
      uVar1 = FUN_ram_400252b8(param_2);
      uVar3 = 0;
      if (1 < uVar1) {
        if (DAT_ram_40094604 < fVar4) {
          fVar4 = DAT_ram_40094604;
        }
        uVar3 = (uint)((float)(int)(uVar1 - 1) * fVar4 + DAT_ram_40094634);
        if ((int)uVar3 < 0) {
          uVar3 = 0;
        }
        if ((int)uVar1 <= (int)uVar3) {
          uVar3 = uVar1 - 1;
        }
        uVar3 = uVar3 & 0xff;
      }
      uVar2 = FUN_ram_400252c6(param_2,uVar3);
      FUN_ram_4002da90(param_2,uVar2);
      return;
    }
    if (0xfff < param_2) {
      uVar3 = (param_2 - 0x1000 & 0x1fff) >> 5;
      if (uVar3 < 8) {
        FUN_ram_4002dacc(uVar3,param_2 - 0x1000 & 0x1f);
        return;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002e268.
 * REA evidence: ev_b7e8fafc764348174e04c55a001d4c895d581eebe590ae7d1727cfb5cfd5782a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool thunk_FUN_ram_4002de28(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_3007ae04 != (code *)0x0) {
    iVar2 = (*_DAT_ram_3007ae04)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4002e26c.
 * REA evidence: ev_9a25d4677f126b8783715201fa21a61646a4a406fa1261d3dafa8f05deb54cb3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool thunk_FUN_ram_4002de28(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_3007ae04 != (code *)0x0) {
    iVar2 = (*_DAT_ram_3007ae04)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4002e270.
 * REA evidence: ev_b5d809cab96b4df76fed2ba40a2cfed44a6af5c238db2e8811b8389106ecf69b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002de68(void)

{
  nc_midi_control_change();
  return;
}


/* NanoCore 1.11, address 0x4002e278.
 * REA evidence: ev_c33c04353d6ed5b8351279d555f8524e7bc52fc35df67f3e15a66d6e7c34da04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002e126(void)

{
  FUN_ram_4002e126();
  return;
}


/* NanoCore 1.11, address 0x4002e27c.
 * REA evidence: ev_df8069091bd6c569b410c88a6b8449bc988dbc1716e98aa012ddd3106915da56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4002e176(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  
  if ((DAT_ram_3007ae18 != '\0') && ((byte)(param_1 - 1U) < 0x10)) {
    if ((param_2 - 0x100 & 0xffff) < 8) {
      FUN_ram_4002da68(param_2 & 0xff,0x1fff < param_3);
      return;
    }
    if (0x3fff < param_3) {
      param_3 = 0x3fff;
    }
    fVar4 = (float)(param_3 & 0xffff) / DAT_ram_40097298;
    if ((param_2 - 0x200 & 0xffff) < 8) {
      param_2 = param_2 & 0xff;
      uVar1 = FUN_ram_400252b8(param_2);
      uVar3 = 0;
      if (1 < uVar1) {
        if (DAT_ram_40094604 < fVar4) {
          fVar4 = DAT_ram_40094604;
        }
        uVar3 = (uint)((float)(int)(uVar1 - 1) * fVar4 + DAT_ram_40094634);
        if ((int)uVar3 < 0) {
          uVar3 = 0;
        }
        if ((int)uVar1 <= (int)uVar3) {
          uVar3 = uVar1 - 1;
        }
        uVar3 = uVar3 & 0xff;
      }
      uVar2 = FUN_ram_400252c6(param_2,uVar3);
      FUN_ram_4002da90(param_2,uVar2);
      return;
    }
    if (0xfff < param_2) {
      uVar3 = (param_2 - 0x1000 & 0x1fff) >> 5;
      if (uVar3 < 8) {
        FUN_ram_4002dacc(uVar3,param_2 - 0x1000 & 0x1f);
        return;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002e280.
 * REA evidence: ev_4accbc1385a21d905ebf9396ec4f83ecf0201ce75cdc2f0f2678d8614a9a9970
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e280(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 4 + 0x3007ae28) + 1;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  *(int *)(param_1 * 4 + 0x3007ae28) = iVar1;
  return;
}


/* NanoCore 1.11, address 0x4002e29a.
 * REA evidence: ev_274ab29a1cffed8c135d370dedc0bba4d9359589743db273fd2ff76206f6bf2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002e29a(code *param_1)

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


/* NanoCore 1.11, address 0x4002e2ac.
 * REA evidence: ev_efb02dcfc1b78c3a1cf151fc8438d65d58db687bc4b4113734ccb66c9317258f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002e2ac(code *param_1)

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


/* NanoCore 1.11, address 0x4002e2c0.
 * REA evidence: ev_ac0e959cc30f52dd778ebda1611e34eaff36ca7773c9384185ded2a52acbbb8f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002e2c0(ushort *param_1,byte *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (((param_1 != (ushort *)0x0) && (param_2 != (byte *)0x0)) && ((ushort)*param_2 <= *param_1)) {
    uVar1 = *(undefined1 *)((int)param_1 + 0x33d);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4002e2dc.
 * REA evidence: ev_56ac20859ab19343472c3488059d4ef8fab11cb07f3d25d50cd0c2bd09a791a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002e2dc(ushort *param_1,byte *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (((param_1 != (ushort *)0x0) && (param_2 != (byte *)0x0)) && ((ushort)*param_2 <= *param_1)) {
    uVar1 = (undefined1)param_1[0x19f];
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4002e2f8.
 * REA evidence: ev_d524900c5d0ece3ccf5e319c2d58aba0db301948a35b3922c43f9a4408df9610
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002e2f8(ushort *param_1,int param_2)

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


/* NanoCore 1.11, address 0x4002e334.
 * REA evidence: ev_7639410b0303150cd63168ea9924bc5e1d4389fc9fcc20f61dca3f8caadf0f9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002e334(void)

{
  int iVar1;
  
  if ((DAT_ram_3007af54 == '\0') &&
     (iVar1 = FUN_ram_4000492c(0x3007af28,&DAT_ram_400972a8,1), iVar1 == 0)) {
    DAT_ram_3007af54 = '\x01';
  }
  return -(uint)(DAT_ram_3007af54 == '\0');
}


/* NanoCore 1.11, address 0x4002e37a.
 * REA evidence: ev_72ca6bdf3f1aa3a96dce9a359f874c067f02578c6d76b9682014fa3333fcdf8a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002e37a(void)

{
  int iVar1;
  
  if (DAT_ram_3007af54 == '\0') {
    iVar1 = FUN_ram_4002e334();
    if (iVar1 != 0) {
      return -1;
    }
    if (DAT_ram_3007af54 == '\0') {
      return -1;
    }
  }
  iVar1 = FUN_ram_400049c6(0x3007af28,0xffffffff);
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.11, address 0x4002e3be.
 * REA evidence: ev_789048b5518c2912fbc71a12c92d2096eec5a5aea10bca78d0cffdac120e6b45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e3be(void)

{
  if (DAT_ram_3007af54 != '\0') {
    FUN_ram_40004ab8(0x3007af28);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002e3d6.
 * REA evidence: ev_7f2d372e7220ad8f1211585aa29b958deae3de1bafd865903e67456baf19e2dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002e3d6(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (0x3f < param_1) {
    return false;
  }
  iVar2 = FUN_ram_4002e37a();
  if (iVar2 == 0) {
    bVar1 = *(int *)(param_1 * 4 + 0x3007ae28) == param_2;
    FUN_ram_4002e3be();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4002e3ee.
 * REA evidence: ev_1cf4d4cadaceb21d0924a9b97dfdf5d4e7cf5ebf53963f24507cd055ffe0af82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002e3ee(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4002e37a();
  if (iVar2 == 0) {
    bVar1 = *(int *)(param_1 * 4 + 0x3007ae28) == param_2;
    FUN_ram_4002e3be();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4002e41c.
 * REA evidence: ev_8da8d2b0a56df05508a67045b0efbd8a7de2230badc3fa3460642c6739d11a9c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002e41c(int param_1,int param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined4 uVar1;
  
  if ((param_2 != 0xff) && (param_2 != param_1)) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4002e42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
      return uVar1;
    }
    return 0xffffffff;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002e436.
 * REA evidence: ev_d27b2ec2bed9b3187d63ae16a69ebd5d44910b599ca511ea6cd20dfb91add3bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002e436(int param_1,int param_2,undefined4 param_3,code *param_4)

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


/* NanoCore 1.11, address 0x4002e464.
 * REA evidence: ev_2d0ada2f9c357d58ec0fbe53cbbbb0d76a0bf8d64186c42bad3f19253022dd7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002e464(uint param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (0x3f < param_1) {
    return false;
  }
  iVar3 = FUN_ram_4002e37a();
  iVar1 = _DAT_ram_3007ae24;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 * 4 + 0x3007ae28);
    bVar2 = param_2 == iVar3;
    if ((param_2 == iVar3) && (_DAT_ram_3007ae24 != 0)) {
      *(undefined1 *)(_DAT_ram_3007ae24 + param_1 + 0x10080) = 0;
      *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
    }
    FUN_ram_4002e3be();
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* NanoCore 1.11, address 0x4002e47c.
 * REA evidence: ev_94e22a5d83954306712a4b87fc2c7d33ced2b7a47fbbf774e120da8fda1c18f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002e47c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FUN_ram_4002e37a();
  iVar1 = _DAT_ram_3007ae24;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 * 4 + 0x3007ae28);
    bVar2 = param_2 == iVar3;
    if ((param_2 == iVar3) && (_DAT_ram_3007ae24 != 0)) {
      *(undefined1 *)(_DAT_ram_3007ae24 + param_1 + 0x10080) = 0;
      *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
    }
    FUN_ram_4002e3be();
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* NanoCore 1.11, address 0x4002e4ce.
 * REA evidence: ev_894b05cbb7088e43696ffd36f4dc1dec57acbe6cdb64c4c1d27971cdbf5ae39a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002e4ce(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003ef74(1,0x100c2);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    memset(iVar1,0,0x100c2);
    uVar2 = 0;
    _DAT_ram_3007ae24 = iVar1;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4002e508.
 * REA evidence: ev_d03a255cf5da06e95f9bb698f4648032020ecbe13e521d971b73cf0a2cc60050
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002e508(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  if (((param_1 < 0x40) && (param_4 - 1U < 0x400)) && (iVar1 = FUN_ram_4002e37a(), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 * 4 + 0x3007ae28);
    bVar2 = param_2 == iVar1;
    if ((param_2 == iVar1) && ((_DAT_ram_3007ae24 != 0 || (iVar1 = FUN_ram_4002e4ce(), iVar1 == 0)))
       ) {
      iVar1 = _DAT_ram_3007ae24;
      FUN_ram_4000304c(param_1 * 0x400 + _DAT_ram_3007ae24,param_3,param_4);
      *(short *)(iVar1 + (param_1 + 0x8000) * 2) = (short)param_4;
      *(undefined1 *)(param_1 + iVar1 + 0x10080) = 1;
    }
    FUN_ram_4002e3be();
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* NanoCore 1.11, address 0x4002e5a2.
 * REA evidence: ev_4c72c77dbeae7597425ef5cc1f7c6c38aaddf77ce31d702654faf59e932ae3c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002e5a2(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                    int param_7)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_400903e8();
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
  FUN_ram_4009043e();
  return iVar1;
}


/* NanoCore 1.11, address 0x4002e63a.
 * REA evidence: ev_553c84ce266c71d6b2b3e26d950c7269932b96102049abd46ca3ec9af67b1376
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002e63a(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_674 [772];
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
    FUN_ram_4000304c(auStack_370,param_2,0x340);
    uVar1 = FUN_ram_4002e2c0(auStack_370,param_3);
    uVar2 = FUN_ram_4002e2dc(auStack_370,param_3);
    uVar3 = FUN_ram_4002e2f8(auStack_370,param_3);
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
       (((*(code **)(param_3 + 0x3c) != (code *)0x0 && (*(int *)(param_3 + 0x40) != 0)) &&
        (iVar4 = (**(code **)(param_3 + 0x3c))(), iVar4 == 0)))) {
      (**(code **)(param_3 + 0x24))(auStack_370,auStack_674);
      iVar4 = (**(code **)(param_3 + 0x28))(auStack_674);
      if ((iVar4 == 0) &&
         (((*(code **)(param_3 + 0x30) == (code *)0x0 ||
           (iVar4 = (**(code **)(param_3 + 0x30))(uStack_34), iVar4 == 0)) &&
          (*(code **)(param_3 + 0x20) != (code *)0x0)))) {
        (**(code **)(param_3 + 0x20))(uVar1,uVar2,uVar3);
      }
      if (param_7 == 0) {
        (**(code **)(param_3 + 0x40))();
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002e75a.
 * REA evidence: ev_1402c8b30f2c09cd3ef6eb622e085ba2c3eb483b18dcd7d574f4cb3e93953387
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002e75a(int param_1)

{
  int iVar1;
  undefined4 in_a4;
  undefined4 in_a5;
  undefined4 in_a6;
  
  iVar1 = -1;
  if (((param_1 != 0) && (iVar1 = FUN_ram_4002e5a2(), iVar1 == 0)) &&
     (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(in_a4,in_a5,in_a6);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4002e79a.
 * REA evidence: ev_72b0b437373efbd1c7234041c72e6685c567838045799ca6c7571b8607677982
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002e79a(uint param_1)

{
  int iVar1;
  
  if (0x3f < param_1) {
    return;
  }
  iVar1 = FUN_ram_4002e37a();
  if (iVar1 == 0) {
    FUN_ram_4002e280(param_1);
    iVar1 = _DAT_ram_3007ae24;
    if (_DAT_ram_3007ae24 != 0) {
      *(undefined1 *)(_DAT_ram_3007ae24 + param_1 + 0x10080) = 0;
      *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
    }
    FUN_ram_4002e3be();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002e7e8.
 * REA evidence: ev_916204ed398efc2e7fc7c604e98d4c20e8c246c4d9e3f0c3521896e6ce9ec440
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002e7e8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uStack_424;
  undefined1 auStack_420 [1024];
  
  iVar2 = FUN_ram_4002e37a();
  if (iVar2 == 0) {
    if ((_DAT_ram_3007ae24 != 0) || (iVar2 = FUN_ram_4002e4ce(), iVar2 == 0)) {
      if (*(short *)(_DAT_ram_3007ae24 + 0x100c0) == 0) {
        *(undefined1 *)(_DAT_ram_3007ae24 + 0x100c1) = 1;
        FUN_ram_4002e3be();
        uVar1 = 0;
        do {
          uVar3 = uVar1 & 0xff;
          uStack_424 = 0;
          iVar2 = FUN_ram_4002e37a();
          if (iVar2 == 0) {
            uVar4 = *(undefined4 *)(uVar1 * 4 + 0x3007ae28);
            FUN_ram_4002e3be();
            iVar2 = FUN_ram_4003249c(uVar3,auStack_420,0x400,&uStack_424);
            if (iVar2 == 0) {
              FUN_ram_4002e508(uVar3,uVar4,auStack_420,uStack_424);
            }
            else if (iVar2 == 1) {
              FUN_ram_4002e464(uVar3,uVar4);
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 != 0x40);
        iVar2 = FUN_ram_4002e37a();
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        *(undefined2 *)(_DAT_ram_3007ae24 + 0x100c0) = 1;
      }
      FUN_ram_4002e3be();
      return 0;
    }
    FUN_ram_4002e3be();
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4002e8de.
 * REA evidence: ev_299c91bec5ddc25e5d1ea92cf0d7714e55c3590e5c19ba2fc55c808c536d4ec0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002e8de(uint param_1,int param_2,code *param_3)

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
      iVar1 = FUN_ram_4002e37a();
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      iVar3 = *(int *)(param_1 * 4 + 0x3007ae28);
      FUN_ram_4002e3be();
      iVar1 = FUN_ram_400323d6(param_1,acStack_458);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      if (acStack_458[0] == '\0') {
        iVar1 = FUN_ram_4002e464(param_1,iVar3);
        if (iVar1 != 0) {
          FUN_ram_400150a0(param_2);
          goto LAB_ram_4002e97c;
        }
      }
      else {
        iVar1 = FUN_ram_4002e37a();
        if (iVar1 == 0) {
          if (iVar3 == *(int *)(param_1 * 4 + 0x3007ae28)) {
            if ((_DAT_ram_3007ae24 == 0) ||
               (*(char *)(_DAT_ram_3007ae24 + param_1 + 0x10080) == '\0')) {
              FUN_ram_4002e3be();
              iVar1 = FUN_ram_4003249c(param_1,auStack_440,0x400,&uStack_45c);
              if (iVar1 != 1) {
                if ((iVar1 == 0) &&
                   (iVar1 = FUN_ram_40015274(param_2,auStack_440,uStack_45c), iVar1 == 0)) {
                  iVar1 = FUN_ram_4002e508(param_1,iVar3,auStack_440,uStack_45c);
                  if (iVar1 != 0) goto LAB_ram_4002e97c;
                }
                else {
                  iVar1 = FUN_ram_4002e3d6(param_1,iVar3);
                  if (iVar1 != 0) {
                    return 0xffffffff;
                  }
                }
              }
            }
            else {
              iVar1 = _DAT_ram_3007ae24 + param_1 * 2;
              uVar5 = (uint)*(ushort *)(iVar1 + 0x10000);
              if (0x3ff < (uVar5 - 1 & 0xffff)) {
                *(undefined1 *)(_DAT_ram_3007ae24 + param_1 + 0x10080) = 0;
                *(undefined2 *)(iVar1 + 0x10000) = 0;
LAB_ram_4002ea08:
                FUN_ram_4002e280(param_1);
                goto LAB_ram_4002ea0e;
              }
              FUN_ram_4000304c(auStack_440,_DAT_ram_3007ae24 + param_1 * 0x400,uVar5);
              uStack_45c = uVar5;
              FUN_ram_4002e3be();
              iVar1 = FUN_ram_40015274(param_2,auStack_440,uStack_45c);
              if (iVar1 == 0) {
LAB_ram_4002e97c:
                if (param_3 != (code *)0x0) {
                  (*param_3)(param_2);
                }
                iVar1 = FUN_ram_4002e3d6(param_1,iVar3);
                if (iVar1 != 0) {
                  return 0;
                }
              }
              else {
                iVar2 = FUN_ram_4002e37a();
                iVar1 = _DAT_ram_3007ae24;
                if (iVar2 == 0) {
                  if (iVar3 != *(int *)(param_1 * 4 + 0x3007ae28)) goto LAB_ram_4002ea0e;
                  if (_DAT_ram_3007ae24 != 0) {
                    *(undefined1 *)(_DAT_ram_3007ae24 + param_1 + 0x10080) = 0;
                    *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
                  }
                  goto LAB_ram_4002ea08;
                }
              }
            }
          }
          else {
LAB_ram_4002ea0e:
            FUN_ram_4002e3be();
          }
        }
      }
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4002eaac.
 * REA evidence: ev_1f98d82a5fa6391d8df5f6689c0cffb51ad4b8c3e7d6371d5aa0e316c59ba0bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002eaac(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) &&
      ((*(uint *)(param_1 + 0x33c) & 0xffff00) == (*(uint *)(param_2 + 0x33c) & 0xffff00))) &&
     ((*(char *)(param_1 + 0x33f) == *(char *)(param_2 + 0x33f) &&
      (iVar1 = FUN_ram_40002fec(param_1 + 0x12,param_2 + 0x12,8), iVar1 == 0)))) {
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


/* NanoCore 1.11, address 0x4002eb40.
 * REA evidence: ev_b3a2d95064f22c3793c0d58d4fbffa728c759848dbc79bf6be84092c5c354312
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002eb40(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_3 != (undefined1 *)0x0) {
    uVar1 = 1;
    if (((param_1 != 0) && (*(char *)(param_1 + 0x340) != '\0')) && (param_2 != 0)) {
      uVar1 = FUN_ram_4002eaac();
    }
    *param_3 = uVar1;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002eb6a.
 * REA evidence: ev_45a4a70b78ad221f0fd00076077a7adeffcb6bd815ab98f8efc7b493fd52b21d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002eb6a(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_ram_4000304c(param_1,param_2,0x340);
    *(undefined1 *)(param_1 + 0x340) = 1;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002eb8e.
 * REA evidence: ev_b7d8b87cd66ea8076b8e8bef16adc353dccb0d9b673a34e1550509915d34e64e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002eb8e(int param_1)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x340) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4002eb96.
 * REA evidence: ev_d3380aac111440c9e6af0ef1d07c23626a9886b40ed578c197157e50413b1a04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002eb96(int param_1,ushort *param_2,byte *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  undefined4 local_660;
  char acStack_64c [4];
  undefined1 auStack_648 [772];
  undefined1 auStack_344 [784];
  
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
  iVar2 = FUN_ram_4002e2c0(param_2,param_3);
  iVar3 = FUN_ram_4002e2dc(param_2,param_3);
  iVar4 = FUN_ram_4002e2f8(param_2,param_3);
  if ((ushort)*param_3 <= *param_2) {
    if (iVar2 == 0xff) {
      *(undefined1 *)(param_2 + 0x73) = 0;
      *(undefined1 *)((int)param_2 + 0x33d) = 0xff;
    }
    if (iVar3 == 0xff) {
      *(undefined1 *)(param_2 + 0xa5) = 0;
      *(undefined1 *)(param_2 + 0x19f) = 0xff;
    }
  }
  uVar5 = FUN_ram_4002e29a(*(undefined4 *)(param_3 + 8));
  local_660 = FUN_ram_4002e29a(*(undefined4 *)(param_3 + 0xc));
  uVar6 = FUN_ram_4002e29a(*(undefined4 *)(param_3 + 0x10));
  iVar7 = FUN_ram_4002e436(uVar5,param_1,param_3,FUN_ram_4002e2c0);
  iVar8 = FUN_ram_4002e436(local_660,param_1,param_3,FUN_ram_4002e2dc);
  iVar9 = FUN_ram_4002e436(uVar6,param_1,param_3,FUN_ram_4002e2f8);
  if (*(char *)(param_1 + 0x340) != '\0') {
    uVar5 = FUN_ram_4002e2c0(param_1,param_3);
    local_660 = FUN_ram_4002e2dc(param_1,param_3);
    uVar6 = FUN_ram_4002e2f8(param_1,param_3);
  }
  if ((((iVar2 == 0xff) || (iVar2 == iVar7)) && ((iVar3 == 0xff || (iVar3 == iVar8)))) &&
     ((iVar4 == 0xff || (iVar4 == iVar9)))) {
    bVar1 = false;
  }
  else {
    if (*(code **)(param_3 + 0x34) == (code *)0x0) {
      return 0xffffffff;
    }
    if (*(int *)(param_3 + 0x38) == 0) {
      return 0xffffffff;
    }
    iVar10 = (**(code **)(param_3 + 0x34))();
    if (iVar10 != 0) {
      return 0xffffffff;
    }
    bVar1 = true;
  }
  FUN_ram_400903e8();
  if ((iVar2 == 0xff) || (iVar2 == iVar7)) {
    bVar16 = false;
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_ram_4002e41c(iVar7,iVar2,*(undefined4 *)(param_3 + 0x14));
    bVar16 = iVar7 != 0;
    if (bVar16) {
      *(undefined1 *)(param_2 + 0x73) = 0;
      *(undefined1 *)((int)param_2 + 0x33d) = 0xff;
      iVar2 = 0xff;
    }
    iVar7 = 1;
  }
  if ((iVar3 == 0xff) || (iVar3 == iVar8)) {
    bVar15 = false;
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_ram_4002e41c(iVar8,iVar3,*(undefined4 *)(param_3 + 0x18));
    bVar15 = iVar8 != 0;
    if (bVar15) {
      *(undefined1 *)(param_2 + 0xa5) = 0;
      *(undefined1 *)(param_2 + 0x19f) = 0xff;
      iVar3 = 0xff;
    }
    iVar8 = 1;
  }
  if ((iVar4 == 0xff) || (iVar4 == iVar9)) {
    bVar13 = false;
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_ram_4002e41c(iVar9,iVar4,*(undefined4 *)(param_3 + 0x1c));
    bVar13 = iVar9 != 0;
    if (bVar13) {
      *(undefined1 *)(param_2 + 0x41) = 0;
      *(undefined1 *)((int)param_2 + 0x33f) = 0xff;
      iVar4 = 0xff;
    }
    iVar9 = 1;
  }
  FUN_ram_4009043e();
  if (((bVar16 != false || bVar15 != false) || bVar13 != false) &&
     (iVar10 = FUN_ram_4002e5a2(param_3,bVar16,bVar15,bVar13,uVar5,local_660,uVar6), iVar10 < 0)) {
    iVar2 = FUN_ram_4002e75a(param_3,iVar7,iVar8,iVar9,uVar5,local_660,uVar6);
    if (iVar2 != 0) {
      FUN_ram_4002e63a(param_1,param_2,param_3,iVar7,iVar8,iVar9,0);
    }
    if (bVar1) {
      (**(code **)(param_3 + 0x38))();
    }
    FUN_ram_4002eb8e(param_1);
    return 0xffffffff;
  }
  FUN_ram_4002eb40(param_1,param_2,acStack_64c);
  if (((*(code **)(param_3 + 0x3c) == (code *)0x0) || (*(int *)(param_3 + 0x40) == 0)) ||
     (iVar10 = (**(code **)(param_3 + 0x3c))(), iVar10 != 0)) {
    if (!bVar1) {
      return 0xffffffff;
    }
    iVar2 = FUN_ram_4002e75a(param_3,iVar7,iVar8,iVar9,uVar5,local_660,uVar6);
    if (iVar2 != 0) {
      FUN_ram_4002e63a(param_1,param_2,param_3,iVar7,iVar8,iVar9,0);
      FUN_ram_4002eb8e(param_1);
    }
    (**(code **)(param_3 + 0x38))();
    return 0xffffffff;
  }
  (**(code **)(param_3 + 0x24))(param_2,auStack_648);
  if (acStack_64c[0] == '\0') {
    pcVar14 = *(code **)(param_3 + 0x2c);
  }
  else {
    pcVar14 = *(code **)(param_3 + 0x28);
  }
  iVar11 = (*pcVar14)(auStack_648);
  iVar10 = iVar11;
  if ((iVar11 == 0) &&
     ((*(code **)(param_3 + 0x30) == (code *)0x0 ||
      (iVar10 = (**(code **)(param_3 + 0x30))((char)param_2[0x19e]), iVar10 == 0))))
  goto LAB_ram_4002eef6;
  iVar12 = FUN_ram_4002e75a(param_3,iVar7,iVar8,iVar9,uVar5,local_660,uVar6);
  iVar11 = iVar10;
  if (*(char *)(param_1 + 0x340) == '\0') {
LAB_ram_4002eed0:
    if (iVar12 == 0) goto LAB_ram_4002eef6;
  }
  else {
    (**(code **)(param_3 + 0x24))(param_1,auStack_344);
    iVar10 = (**(code **)(param_3 + 0x28))(auStack_344);
    if (iVar10 != 0) {
      iVar12 = -1;
    }
    if ((*(code **)(param_3 + 0x30) == (code *)0x0) ||
       (iVar10 = (**(code **)(param_3 + 0x30))(*(undefined1 *)(param_1 + 0x33c)), iVar10 == 0))
    goto LAB_ram_4002eed0;
  }
  if (iVar9 != 0 || (iVar7 != 0 || iVar8 != 0)) {
    FUN_ram_4002e63a(param_1,param_2,param_3,iVar7,iVar8,iVar9,1);
  }
  FUN_ram_4002eb8e(param_1);
LAB_ram_4002eef6:
  (**(code **)(param_3 + 0x40))();
  if (bVar1) {
    (**(code **)(param_3 + 0x38))();
  }
  if (iVar11 != 0) {
    return 0xffffffff;
  }
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    (**(code **)(param_3 + 0x20))(iVar2,iVar3,iVar4);
  }
  FUN_ram_4002eb6a(param_1,param_2);
  return 0;
}


/* NanoCore 1.11, address 0x4002ef20.
 * REA evidence: ev_60033cdc2b2a400d2f4b48cf823d04202e93170dff8fe94452169b3f3d819ce9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002ef20(void)

{
  int iVar1;
  
  if (DAT_ram_3007c518 != '\0') {
    iVar1 = FUN_ram_400049c6(0x3007c4ec,0xffffffff);
    return -(uint)(iVar1 != 0);
  }
  return -1;
}


/* NanoCore 1.11, address 0x4002ef4e.
 * REA evidence: ev_130377eb0aeefd975925eb32c9682a693dab4169e319e6caa5da55d0510db69c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ef4e(void)

{
  if (DAT_ram_3007c518 != '\0') {
    FUN_ram_40004ab8(0x3007c4ec);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002ef66.
 * REA evidence: ev_a4ea1c06d2f304966b346059dd8c540d7b6716f1f09a6da48dbd63a77d725c96
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002ef66(byte *param_1,uint param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 uVar2;
  char acStack_378 [24];
  undefined1 auStack_360 [2];
  undefined1 auStack_35e [842];
  
  memset(acStack_378,0,0x18);
  if (param_4 != (undefined1 *)0x0) {
    if (param_2 < *param_1) {
      iVar1 = FUN_ram_400323d6(param_2,acStack_378);
      if (iVar1 == 0) {
        if (acStack_378[0] == '\0') {
          FUN_ram_400150a0(auStack_360);
          FUN_ram_4000304c(auStack_35e,s_preset_ram_40094f54,6);
          iVar1 = FUN_ram_400150e4(auStack_360,0x3007b484,0x400,param_3);
        }
        else {
          iVar1 = FUN_ram_4003249c(param_2,0x3007b484,0x400,param_3);
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


