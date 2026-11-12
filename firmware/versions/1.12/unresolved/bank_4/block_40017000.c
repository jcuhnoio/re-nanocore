/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40017000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40017090.
 * REA evidence: ev_634780ab8745a365836e777f1b2956edf819ca03c104650165bd9922584e255f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40005520(param_1,param_2,s_U__icons__s_bin_ram_4009a004,param_3);
  return;
}


/* NanoCore 1.12, address 0x4001709e.
 * REA evidence: ev_7a171a7d1bdc267ec57d7732e6f5c51302ab361ace3b83b011bc94077fb2303f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001709e(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40021a74();
  return uVar1 & 0xffffff;
}


/* NanoCore 1.12, address 0x400170c4.
 * REA evidence: ev_24b680feebdbc0eb2d9362ea8058d825f6ba415137dca1ca5167c824a9513286
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400170c4(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40021a7e();
  return uVar1 & 0xffffff;
}


/* NanoCore 1.12, address 0x400170ea.
 * REA evidence: ev_7c2caa6dad53f2ed598e325b7dfdf0eb4bf3fcccedd80b16609286a4efb1ace5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400170ea(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_ram_4002d504();
  }
  else {
    uVar1 = FUN_ram_4002d50e();
  }
  return uVar1 & 0xffffff;
}


/* NanoCore 1.12, address 0x40017118.
 * REA evidence: ev_7f284b79927bdbfc0cec8a01bb8c8ff46d6d5a2902c55c4ff4d8617105374aa3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017118(void)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  if ((DAT_ram_3006a2a4 == '\0') && (DAT_ram_3006a326 == '\0')) {
    if (DAT_ram_3004ace7 != '\0') {
      if (_DAT_ram_3006a390 == 3) {
        uVar1 = 0;
        goto LAB_ram_40017132;
      }
    }
    uVar1 = FUN_ram_4001709e();
  }
  else {
    uVar1 = 1;
LAB_ram_40017132:
    uVar1 = FUN_ram_400170ea(uVar1);
  }
  uStack_14 = CONCAT22(CONCAT11(uStack_14._3_1_,(char)((uint)uVar1 >> 0x10)),(short)uVar1);
  if (_DAT_ram_3006a2f0 != 0) {
    FUN_ram_40048aae(_DAT_ram_3006a2f0,uStack_14,0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40017188.
 * REA evidence: ev_c317056f16e1f4139dcbee8ce5e7f2ffd645e695ddfe419bb968de07c90b459f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40017188(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = 0;
  do {
    iVar2 = FUN_ram_4000513e((&PTR_DAT_ram_4009a0bc_ram_4009a118)[iVar1],param_1,0x10);
    if (iVar2 == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return -1;
}


/* NanoCore 1.12, address 0x400171d0.
 * REA evidence: ev_854cf651c17fac8bade1f2581c0c8f73e9e9d4ef665e97456bc2fd54c49beb2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400171d0(int param_1)

{
  undefined4 uVar1;
  
  if ((&DAT_ram_4009a190)[param_1] == '\x01') {
    uVar1 = FUN_ram_40017188((&PTR_s_settings_ram_4009a0e0_ram_4009a148)[param_1]);
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x400171f6.
 * REA evidence: ev_82a9e6a651ae1b44044c00ab06acd1dab6a1b18563f1ea18cf7346e041035b38
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400171f6(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 3) {
    FUN_ram_40016aae();
    return;
  }
  if (param_2 == 4) {
    FUN_ram_40016a5c();
    return;
  }
  if (param_2 == 5) {
    uVar5 = 0xe;
    iVar2 = 0xe2;
  }
  else {
    if ((&DAT_ram_4009a190)[param_2] == '\x01') {
      uVar1 = FUN_ram_400171d0(param_2);
      uVar4 = 0xffffffff;
      if (uVar1 < 8) {
        uVar3 = 0;
        do {
          uVar4 = uVar3;
          if (uVar1 == *(uint *)(&DAT_ram_30069b00 + uVar3 * 4)) break;
          uVar3 = uVar3 + 1;
          uVar4 = uVar1;
        } while (uVar3 != 8);
      }
      FUN_ram_40016a1e(param_1,uVar4);
      return;
    }
    if ((byte)(&DAT_ram_4009a180)[param_2] != 0) {
      FUN_ram_40016762(param_1,(uint)(byte)(&DAT_ram_4009a138)[param_2],
                       (byte)(&DAT_ram_4009a180)[param_2] - 1);
      return;
    }
    uVar5 = 0x46;
    iVar2 = (uint)(byte)(&DAT_ram_4009a138)[param_2] * 0x35 + 0x20;
  }
  FUN_ram_40045014(param_1,iVar2,uVar5);
  FUN_ram_400450a2(param_1,0x26,0x26);
  return;
}


/* NanoCore 1.12, address 0x400172bc.
 * REA evidence: ev_61716de6b1861eaf12586eabddfb50a99fbd104c1c242ad3dedadebc4dff56fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400172bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [24];
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    FUN_ram_400440ce(param_1,1);
    return;
  }
  if (((DAT_ram_3006a34c != '\0') && (iVar1 = FUN_ram_40005162(param_2), iVar1 == 0)) &&
     (iVar1 = FUN_ram_40016c9e(), iVar1 != 0)) {
    FUN_ram_40057218(param_1,&DAT_ram_3006a27c);
    FUN_ram_40043ba4(param_1,1);
    return;
  }
  iVar1 = FUN_ram_4004f6c8(param_2,auStack_2c);
  if (iVar1 == 1) {
    FUN_ram_40057218(param_1,param_2);
    FUN_ram_40043ba4(param_1,1);
  }
  else {
    iVar1 = FUN_ram_40056df2(param_1);
    if (((iVar1 == 0) || (iVar2 = FUN_ram_4004e36e(), iVar2 != 1)) ||
       (iVar1 = FUN_ram_40005162(iVar1,param_2), iVar1 != 0)) {
      FUN_ram_400440ce(param_1,1);
    }
    else {
      FUN_ram_40043ba4(param_1,1);
      FUN_ram_400455dc(param_1);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40017378.
 * REA evidence: ev_7a604003e70e6626b8269b7dacd8e15ae245df8129dd3debfe4a11e338f6f290
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017378(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0xe)) {
    FUN_ram_400172bc(param_1,param_2 * 0x40 + 0x30069b68);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40017392.
 * REA evidence: ev_74435e9b0e7b7a282f2944464384e12ef0dc4fb94dbcc301ec98f25f4ea80333
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017392(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = 0;
  do {
    if (1 < iVar1 - 3U) {
      uVar2 = FUN_ram_40056db0(param_1);
      FUN_ram_400171f6(uVar2,iVar1);
      FUN_ram_40017378(uVar2,iVar1);
      FUN_ram_40057382(uVar2,9);
      *(undefined4 *)(&DAT_ram_30069f34 + iVar1 * 4) = uVar2;
      uVar3 = FUN_ram_400171d0(iVar1);
      if (uVar3 < 8) {
        *(undefined4 *)(uVar3 * 4 + 0x30069ae0) = uVar2;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  FUN_ram_40016938();
  FUN_ram_400455dc(param_1);
  return;
}


/* NanoCore 1.12, address 0x4001741c.
 * REA evidence: ev_f17797de6dc057b37b1355a826dc8cfe0e79dfcaef2df59f5af3c2b9314e0a01
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001741c(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (-1 < (int)DAT_ram_3004ace8)) {
    uVar1 = DAT_ram_3004ace8 & 0xff;
    if (8 < (DAT_ram_3004ace8 & 0xff)) {
      uVar1 = 8;
    }
    if (param_2 < uVar1) {
      uVar1 = param_2 & 0xff;
    }
    FUN_ram_400172bc(param_1,&DAT_ram_30069fd0 + uVar1 * 0x40);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40017458.
 * REA evidence: ev_13cb74b5c89ff8b334dd1c1eb7e36d7706a0a53a923488bc99d7d089bcdafb52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001754c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017458(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  iVar3 = FUN_ram_40056a9e();
  if (_DAT_ram_30069a48 == 0) {
    return;
  }
  iVar4 = FUN_ram_4000f576();
  iVar5 = FUN_ram_4003f672();
  if (iVar5 == 0) {
    if (DAT_ram_30069acc != '\0') {
      DAT_ram_30069acc = '\0';
      DAT_ram_300699f9 = 0;
      _DAT_ram_300699fc = iVar3;
    }
    if (iVar4 < 1) {
      DAT_ram_30069a00 = '\0';
      DAT_ram_3004ace4 = '\x01';
      bVar2 = 1;
    }
    else {
      if (DAT_ram_3004ace5 < 3) {
        if (DAT_ram_3004ace5 == 0) {
          iVar5 = 0xe74;
          goto LAB_ram_400175a4;
        }
        if (DAT_ram_3004ace5 == 1) {
          if (iVar4 < 0xe42) {
            DAT_ram_3004ace5 = 0;
          }
          else if (0xf63 < iVar4) {
            DAT_ram_3004ace5 = 2;
          }
        }
        else {
          DAT_ram_3004ace5 = (0xf31 < iVar4) + 1;
        }
      }
      else {
        DAT_ram_3004ace5 = 2;
        if (iVar4 < 0xf64) {
          iVar5 = 0xe42;
LAB_ram_400175a4:
          DAT_ram_3004ace5 = iVar5 <= iVar4;
        }
      }
      bVar2 = DAT_ram_3004ace5;
      if (DAT_ram_30069a00 == '\0') {
        if (iVar4 < 0xddf) {
          DAT_ram_30069a00 = '\x01';
LAB_ram_400175c6:
          DAT_ram_3004ace4 = '\x01';
          _DAT_ram_30069a04 = iVar3;
        }
      }
      else if (0xe0f < iVar4) {
        DAT_ram_30069a00 = '\0';
        goto LAB_ram_400175c6;
      }
    }
    if (DAT_ram_30069a00 == '\0') goto LAB_ram_400174fe;
    bVar7 = false;
    cVar1 = DAT_ram_3004ace4;
    for (iVar4 = _DAT_ram_30069a04; 499 < (uint)(iVar3 - iVar4); iVar4 = iVar4 + 500) {
      cVar1 = cVar1 == '\0';
      bVar7 = true;
    }
    if (bVar7) {
      DAT_ram_3004ace4 = cVar1;
      _DAT_ram_30069a04 = iVar4;
    }
    bVar2 = 0;
    bVar7 = DAT_ram_3004ace4 == '\0';
LAB_ram_40017612:
    pcVar6 = s_battery_low_ram_4009a014;
    puVar9 = &DAT_ram_30069a4c;
  }
  else {
    if (DAT_ram_30069acc == '\0') {
      DAT_ram_30069acc = '\x01';
      DAT_ram_300699f9 = 0;
      DAT_ram_3004ace4 = '\x01';
      DAT_ram_30069a00 = '\0';
      _DAT_ram_300699fc = iVar3;
      _DAT_ram_30069a04 = iVar3;
    }
    if (iVar4 < 0xfb9) {
      uVar8 = (uint)DAT_ram_300699f9;
      bVar7 = false;
      for (iVar4 = _DAT_ram_300699fc; 999 < (uint)(iVar3 - iVar4); iVar4 = iVar4 + 1000) {
        uVar8 = (uVar8 + 1) % 3;
        bVar7 = true;
      }
      bVar2 = DAT_ram_300699f9;
      if (bVar7) {
        DAT_ram_300699f9 = (byte)uVar8;
        _DAT_ram_300699fc = iVar4;
        bVar2 = DAT_ram_300699f9;
      }
LAB_ram_400174fe:
      if (bVar2 == 0) {
        bVar7 = false;
        goto LAB_ram_40017612;
      }
      bVar7 = false;
      if (bVar2 != 2) {
        pcVar6 = s_battery_mid_ram_4009a030;
        puVar9 = &DAT_ram_30069a8c;
        goto LAB_ram_4001751a;
      }
    }
    else {
      bVar2 = 2;
    }
    bVar7 = false;
    pcVar6 = s_battery_full_ram_4009a020;
    puVar9 = &DAT_ram_30069a08;
  }
LAB_ram_4001751a:
  iVar3 = FUN_ram_40016b5a(pcVar6);
  if ((iVar3 == 0) || (bVar7)) {
    FUN_ram_400440ce(_DAT_ram_30069a48,1);
    DAT_ram_3004ace6 = 0xff;
  }
  else if ((DAT_ram_3004ace6 != bVar2) ||
          (iVar3 = FUN_ram_40043c8a(_DAT_ram_30069a48,1), iVar3 != 0)) {
    DAT_ram_3004ace6 = bVar2;
    FUN_ram_400172bc(_DAT_ram_30069a48,puVar9);
    FUN_ram_40016a86(_DAT_ram_30069a48);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400176ee.
 * REA evidence: ev_a3eef6946dc63302386ce90566f75191ae6f9d4447519dd9f9f47227e7121536
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400176ee(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  byte bStack_18;
  byte bStack_16;
  
  if ((DAT_ram_3004ace7 == '\0') || (DAT_ram_300699f8 == '\0')) {
    return;
  }
  if (_DAT_ram_30069ee8 != 0) {
    uVar2 = FUN_ram_400043ae(0x96);
    iVar3 = FUN_ram_40004346();
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    if ((uint)(iVar3 - _DAT_ram_30069ee8) < uVar2) {
      return;
    }
  }
  if (((-1 < DAT_ram_3004ace8) && (_DAT_ram_30069fc0 != 0)) && (_DAT_ram_30069fc8 != 0)) {
    memset(auStack_38,0,0x28);
    FUN_ram_4000e4d2(auStack_38);
    if (8 < bStack_18) {
      bStack_18 = 8;
    }
    bVar1 = bStack_16;
    if (8 < bStack_16) {
      bVar1 = 8;
    }
    if (DAT_ram_30069fc4 != bStack_18) {
      DAT_ram_30069fc4 = bStack_18;
      FUN_ram_4001741c(_DAT_ram_30069fc0);
    }
    if (DAT_ram_30069fcc != bVar1) {
      DAT_ram_30069fcc = bVar1;
      FUN_ram_4001741c(_DAT_ram_30069fc8,bVar1);
    }
  }
  FUN_ram_400169b4();
  FUN_ram_40017458();
  FUN_ram_40016938();
  return;
}


/* NanoCore 1.12, address 0x400177ee.
 * REA evidence: ev_8e36f31af695ea18e699a871a2d7bc1d478849601304802be3c0d63bfd61612a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400177ee(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (DAT_ram_300699f8 != '\0')) {
    uVar1 = ~DAT_ram_3004ace8 >> 0x1f;
  }
  if (_DAT_ram_30069fc0 != 0) {
    if (uVar1 == 0) {
      FUN_ram_400440ce(_DAT_ram_30069fc0,1);
    }
    else {
      FUN_ram_40043ba4();
    }
  }
  if (_DAT_ram_30069fc8 == 0) {
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    if (uVar1 == 0) {
      FUN_ram_400440ce(_DAT_ram_30069fc8,1);
      return;
    }
    FUN_ram_40043ba4();
  }
  DAT_ram_30069fc4 = 0xff;
  DAT_ram_30069fcc = 0xff;
  FUN_ram_400176ee(0);
  return;
}


/* NanoCore 1.12, address 0x4001786c.
 * REA evidence: ev_a2bb5823f20930c7f04777d048cae3ae3a2a6e04e0b8b75aa4778ecdd08a1afd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001786c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar1 = FUN_ram_40016b5a(&DAT_ram_4009a03c);
  iVar2 = FUN_ram_40016b5a(s_master_knob_ram_4009a044);
  iVar3 = FUN_ram_40016b5a(s_preset_knob_ram_4009a050);
  if ((iVar2 == 0) && (iVar1 == 0)) {
    iVar1 = iVar3;
    if (_DAT_ram_30069f70 != 0) {
      FUN_ram_400440ce(_DAT_ram_30069f70,1);
    }
joined_r0x40017916:
    if (iVar1 == 0) {
      if (_DAT_ram_3006a2ac != 0) {
        FUN_ram_400440ce(_DAT_ram_3006a2ac,1);
      }
      goto LAB_ram_400178fa;
    }
  }
  else {
    puVar4 = &DAT_ram_30069f74;
    if (iVar2 == 0) {
      puVar4 = &DAT_ram_30069b28;
    }
    FUN_ram_400172bc(_DAT_ram_30069f70,puVar4);
    FUN_ram_40016a32(_DAT_ram_30069f70);
    if (iVar3 == 0) goto joined_r0x40017916;
  }
  puVar4 = &DAT_ram_3006a2b0;
  if (iVar3 == 0) {
    puVar4 = &DAT_ram_30069b28;
  }
  FUN_ram_400172bc(_DAT_ram_3006a2ac,puVar4);
  FUN_ram_40016a5c(_DAT_ram_3006a2ac);
LAB_ram_400178fa:
  FUN_ram_40017458();
  return;
}


/* NanoCore 1.12, address 0x4001792c.
 * REA evidence: ev_80f42a6ae61d2fd17d46e1fe9885d813bfdc97fd3be3b34271d57758629dfd51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001792c(int param_1)

{
  int iVar1;
  char cVar2;
  int local_2c [6];
  
  local_2c[0] = _DAT_ram_30069f70;
  local_2c[1] = _DAT_ram_3006a2ac;
  local_2c[2] = _DAT_ram_30069a48;
  cVar2 = '\0';
  if (param_1 != 0) {
    cVar2 = DAT_ram_300699f8;
  }
  iVar1 = 0;
  do {
    if (local_2c[iVar1] != 0) {
      if (cVar2 == '\0') {
        FUN_ram_400440ce(local_2c[iVar1],1);
      }
      else {
        FUN_ram_40043ba4();
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  if (cVar2 != '\0') {
    FUN_ram_4001786c();
    FUN_ram_400169b4();
    FUN_ram_4001680a();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400179ac.
 * REA evidence: ev_599e52671a8b5c1f6e305a168d2cb4db732317171ca38d3c26ef9c810ee9fe45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400179ac(void)

{
  undefined3 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  uVar1 = FUN_ram_40014c88();
  iVar2 = FUN_ram_4002d3a8(0);
  iVar3 = FUN_ram_4002d3c6(0,&uStack_14);
  if (iVar3 != 0) {
    uVar1 = CONCAT12(uStack_12,uStack_14);
  }
  if (_DAT_ram_30069f6c != 0) {
    FUN_ram_400489d2(_DAT_ram_30069f6c,uVar1,0);
    FUN_ram_400489f0(_DAT_ram_30069f6c,0xff,0);
  }
  if (_DAT_ram_30069eec != 0) {
    FUN_ram_400489d2(_DAT_ram_30069eec,uVar1,0);
    FUN_ram_400489f0(_DAT_ram_30069eec,0xff,0);
  }
  if (_DAT_ram_30069ef0 != 0) {
    if (iVar2 == 0) {
      FUN_ram_400440ce(_DAT_ram_30069ef0,1);
    }
    else {
      FUN_ram_400172bc(_DAT_ram_30069ef0,&DAT_ram_30069ef4);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40017a50.
 * REA evidence: ev_a9d488c700127df1dc18c3306b0e752f0f29b6abdd06cb3e060e9389b77b9283
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017a50(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_34;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar3 = FUN_ram_4004515c(param_2);
    uVar4 = FUN_ram_40045168(param_2);
    uVar2 = FUN_ram_4001709e();
    FUN_ram_40048aae(param_2,uVar2,0);
    FUN_ram_40048aee(param_2,param_4,0);
    iVar1 = 0;
    puVar6 = &DAT_ram_4009a1a0;
    do {
      uVar5 = FUN_ram_400579de(param_1);
      *(undefined4 *)(param_3 + iVar1 * 4) = uVar5;
      FUN_ram_4005809e(uVar5,1);
      uVar7 = *(undefined4 *)(param_3 + iVar1 * 4);
      uVar5 = FUN_ram_400170c4();
      uStack_34 = CONCAT31(CONCAT12(uStack_34._3_1_,(short)((uint)uVar5 >> 8)),(char)uVar5);
      FUN_ram_40048aae(uVar7,uStack_34,0);
      FUN_ram_40048aee(*(undefined4 *)(param_3 + iVar1 * 4),param_4,0);
      FUN_ram_400450a2(*(undefined4 *)(param_3 + iVar1 * 4),uVar3,uVar4);
      FUN_ram_400460be(*(undefined4 *)(param_3 + iVar1 * 4),param_2,9,*puVar6,puVar6[1]);
      FUN_ram_40043ba4(*(undefined4 *)(param_3 + iVar1 * 4),2);
      uVar7 = *(undefined4 *)(param_3 + iVar1 * 4);
      uVar5 = FUN_ram_40048ba4(param_2);
      iVar1 = iVar1 + 1;
      FUN_ram_40048de6(uVar7,uVar5);
      puVar6 = puVar6 + 2;
    } while (iVar1 != 8);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40017b64.
 * REA evidence: ev_bf698759633be340ed499909dad296b4c1ee74be4bd9bd0abb862172045c3390
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017b64(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = FUN_ram_4004515c();
    uVar3 = FUN_ram_40045168(param_1);
    puVar5 = &DAT_ram_4009a1a0;
    iVar1 = 0;
    do {
      iVar4 = *(int *)(param_2 + iVar1 * 4);
      if (iVar4 != 0) {
        FUN_ram_400450a2(iVar4,uVar2,uVar3);
        FUN_ram_400460be(*(undefined4 *)(param_2 + iVar1 * 4),param_1,9,*puVar5,puVar5[1]);
      }
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar1 != 8);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40017bd8.
 * REA evidence: ev_54524b7ea80b5aed24dce5b3b31074c43f50ebf0907632d185d729d0ee2cdbcf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017bd8(int param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1 != 0) {
    uVar2 = FUN_ram_4001709e();
    uStack_28 = CONCAT22(CONCAT11(uStack_28._3_1_,(char)((uint)uVar2 >> 0x10)),(short)uVar2);
    FUN_ram_40048aae(param_1,uStack_28,0);
    if (param_3 == (char *)0x0) {
      param_3 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
    }
    FUN_ram_40058020(param_1,param_3);
    iVar1 = 0;
    do {
      if ((param_2 != 0) && (iVar3 = *(int *)(param_2 + iVar1 * 4), iVar3 != 0)) {
        uVar2 = FUN_ram_400170c4();
        uStack_24 = CONCAT22(CONCAT11(uStack_24._3_1_,(char)((uint)uVar2 >> 0x10)),(short)uVar2);
        FUN_ram_40048aae(iVar3,uStack_24,0);
        FUN_ram_40058020(*(undefined4 *)(param_2 + iVar1 * 4),param_3);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40017c76.
 * REA evidence: ev_98d7ff3c7839773a0441855e4e99683691558d685abcdc69afaf14abd335946f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017c76(void)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  if (_DAT_ram_3006a2f0 != 0) {
    if (_DAT_ram_3006a33c < 0) {
      _DAT_ram_3006a33c = 0;
    }
    else if (0x3f < _DAT_ram_3006a33c) {
      _DAT_ram_3006a33c = 0x3f;
    }
    if ((DAT_ram_3006a326 == '\0') || (DAT_ram_3006a325 == '\0')) {
      FUN_ram_40005520(auStack_20,0x10,&DAT_ram_4009a064,_DAT_ram_3006a33c + 1,&DAT_ram_3006a2f4);
    }
    else {
      FUN_ram_40005520(auStack_20,0x10,s_REPLACE_ram_4009a05c,_DAT_ram_3006a33c + 1);
    }
    if ((DAT_ram_3006a338 == '\0') || (iVar1 = FUN_ram_40005162(auStack_20,0x3006a328), iVar1 != 0))
    {
      memcpy(0x3006a328,auStack_20,0x10);
      DAT_ram_3006a338 = '\x01';
      FUN_ram_40017bd8(_DAT_ram_3006a2f0,0x3006a300,0x3006a328);
      if (_DAT_ram_3006a2f0 != 0) {
        FUN_ram_40016aae();
      }
      FUN_ram_40017b64(_DAT_ram_3006a2f0,0x3006a300);
    }
    FUN_ram_40017118();
  }
  return;
}


/* NanoCore 1.12, address 0x40017d60.
 * REA evidence: ev_1d047de8ede1b1daaffad1dcdaa2ddbede9376a7d54955f447e683489846e350
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017d60(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40016c12();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40017d68.
 * REA evidence: ev_7ea80f597c59e24591ca4c6d5a5becba7d6be2fd99c92861b6a2dad6b16fe488
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017d68(int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    return;
  }
  if (param_3 == 0) {
    FUN_ram_400440ce(param_1,1);
  }
  else {
    FUN_ram_40043ba4();
  }
  if (param_2 != 0) {
    FUN_ram_40017d60(param_2,param_3);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40017da2.
 * REA evidence: ev_af469da669a2cc22eaef925fea6e13896efcb5b37bb33568fe5a5b1b9c4cd105
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017da2(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  
  ppuVar1 = _DAT_ram_3006a2a8;
  uVar5 = 0;
  if (_DAT_ram_3006a2a8 != (undefined **)0x0) {
    uVar5 = FUN_ram_4002d282();
  }
  FUN_ram_40017d68(_DAT_ram_3006a2f0,0,ppuVar1 != (undefined **)0x0);
  FUN_ram_40016c12(0x3006a300,uVar5 & 1);
  if (_DAT_ram_30069ad0 != 0) {
    ppuVar4 = &PTR_LAB_ram_400136ec_ram_40099ce0;
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar4 = ppuVar1;
    }
    FUN_ram_40048ade(_DAT_ram_30069ad0,ppuVar4,0);
  }
  if ((ppuVar1 != (undefined **)0x0) && (_DAT_ram_3006a2f0 != 0)) {
    FUN_ram_40048ade(_DAT_ram_3006a2f0,ppuVar1,0);
    iVar2 = 0;
    do {
      iVar3 = *(int *)(iVar2 * 4 + 0x3006a300);
      if (iVar3 != 0) {
        FUN_ram_40048ade(iVar3,ppuVar1,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    DAT_ram_3006a338 = 0;
    FUN_ram_40017c76();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40017e54.
 * REA evidence: ev_326af804fea8082c49fa18d4d2f1f82bb7abf092313b2db9f13626c4f193ff35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017e54(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3006a2a0 != 0) {
    FUN_ram_4004c712();
    _DAT_ram_3006a2a0 = 0;
  }
  DAT_ram_3006a29c = 1;
  uVar1 = FUN_ram_4002d282();
  FUN_ram_40017d68(_DAT_ram_3006a2f0,0,1);
  FUN_ram_40016c12(0x3006a300,uVar1);
  return;
}


/* NanoCore 1.12, address 0x40017ea4.
 * REA evidence: ev_be4f182c70471b0084dda52a281623c2458edc1d88e6a4c545d506bf932e57b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017ea4(void)

{
  uint uVar1;
  
  DAT_ram_3006a29c = DAT_ram_3006a29c ^ 1;
  uVar1 = 0;
  if (DAT_ram_3006a29c != 0) {
    uVar1 = FUN_ram_4002d282();
  }
  FUN_ram_40017d68(_DAT_ram_3006a2f0,0,DAT_ram_3006a29c);
  FUN_ram_40016c12(0x3006a300,uVar1 & 1);
  return;
}


/* NanoCore 1.12, address 0x40017ef4.
 * REA evidence: ev_d8a6d714c72fbcd79ba5b177e99059b553fb8c13ccf90872c53da7e7c2b1588f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40017ef4(char *param_1,char *param_2)

{
  int iVar1;
  undefined1 auStack_50 [68];
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_ram_40017090(auStack_50,0x40,param_1);
    iVar1 = FUN_ram_4005a24c(auStack_50);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     ((param_1 != (char *)0x0 && (iVar1 = FUN_ram_40005162(param_1,param_2), iVar1 == 0)))) {
    iVar1 = 0;
  }
  else {
    FUN_ram_40017090(auStack_50,0x40,param_2);
    iVar1 = FUN_ram_4005a24c(auStack_50);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40017f54.
 * REA evidence: ev_969e268cec4e3076cacb4da7c7063377523625bbc34ceaf13b4384a5982ae68e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017f54(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3006a2a8;
  if (_DAT_ram_3006a2a8 != 0) {
    _DAT_ram_3006a2a8 = 0;
    FUN_ram_40017da2();
    FUN_ram_40059ff0(iVar1);
  }
  _DAT_ram_3006a2a8 = FUN_ram_40017ef4(s_font_preset_ram_4009a07c,s_font_default_ram_4009a06c);
  FUN_ram_40017da2();
  return;
}


/* NanoCore 1.12, address 0x40017f9a.
 * REA evidence: ev_855a1f9afb89e11f10c73895fadf6c7650c2111a4cae921f6be3cdbc5a95eb70
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017f9a(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3006a438;
  if (_DAT_ram_3006a438 != 0) {
    _DAT_ram_3006a438 = 0;
    FUN_ram_40016f0e();
    FUN_ram_40059ff0(iVar1);
  }
  _DAT_ram_3006a438 = FUN_ram_40017ef4(s_font_tuner_ram_4009a088,s_font_default_ram_4009a06c);
  FUN_ram_40016f0e();
  return;
}


/* NanoCore 1.12, address 0x40017fe0.
 * REA evidence: ev_07144c49e63a5e1d76f060c00ed8434874069eca24c85ed5d7cc1d4248de1293
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_40017fe0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 8;
  }
  return &DAT_ram_30069b00;
}


/* NanoCore 1.12, address 0x40017ff0.
 * REA evidence: ev_850a0fdc183060bf01f8df085921edba71bf9867218428a2f925b2554f083395
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017ff0(undefined4 param_1)

{
  FUN_ram_4001679a();
  _DAT_ram_3006a33c = param_1;
  FUN_ram_40017c76();
  return;
}


