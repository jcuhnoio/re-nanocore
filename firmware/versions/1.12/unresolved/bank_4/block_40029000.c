/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40029000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002962c.
 * REA evidence: ev_20dcf57916c0f8e103564b40b859fccff696776cc67b4a73a9080b73864e16bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002962c(void)

{
  if (DAT_ram_3006c3f4 != '\0') {
    FUN_ram_40004920(0x3006c3f8);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40029714.
 * REA evidence: ev_51b0d7eff4c24f2b5a7fcb16869a8f3a21fa7ee12e807c9bc385477370a67cdf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029714(void)

{
  _DAT_ram_3006cf3c = 0;
  _DAT_ram_3006cf3e = 0;
  DAT_ram_3006cf40 = 0;
  DAT_ram_3006c72d = 0;
  _DAT_ram_3006c734 = 0;
  _DAT_ram_3006c730 = 0;
  FUN_ram_40004f92(0x3006c738,0,2);
  FUN_ram_40004f92(0x3006c720,0,10);
  FUN_ram_40004f92(0x3006c420,0,0x300);
  DAT_ram_3006c72a = 0;
  return;
}


/* NanoCore 1.12, address 0x40029788.
 * REA evidence: ev_d90d01b7279e9a88e98bd2060017d61859b88c1f7fa656b7d1d33fad2bae47a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029788(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_ram_3006c72a != '\0') {
    iVar3 = FUN_ram_40004346();
    iVar2 = 0;
    while( true ) {
      uVar1 = 0;
      do {
        iVar4 = iVar2 * 0x180 + uVar1 * 0x18;
        if (*(char *)(iVar4 + 0x3006c429) != '\0') {
          if (*(int *)(iVar4 + 0x3006c434) <= iVar3 - *(int *)(iVar4 + 0x3006c430)) {
            FUN_ram_40028efe(iVar2,uVar1 & 0xff);
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != 0x10);
      if (iVar2 == 1) break;
      iVar2 = 1;
    }
  }
  FUN_ram_400250d6();
  return;
}


/* NanoCore 1.12, address 0x40029818.
 * REA evidence: ev_66394274cff247275c7afb271abd45feef236293ef3578c0e83d4461301a71c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40029818(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return false;
  }
  FUN_ram_400002f4();
  iVar1 = 0;
  do {
    if (_DAT_ram_3006cf3c == _DAT_ram_3006cf3e) break;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(param_1 + -1 + iVar1) = *(undefined1 *)(_DAT_ram_3006cf3c + 0x3006c73c);
    _DAT_ram_3006cf3c = _DAT_ram_3006cf3c + 1;
    if (0x7ff < _DAT_ram_3006cf3c) {
      _DAT_ram_3006cf3c = 0;
    }
  } while (param_2 != iVar1);
  FUN_ram_400002fa();
  if (iVar1 != 0) {
    nc_midi_parse_stream(1,param_1);
    FUN_ram_40029788();
  }
  return iVar1 != 0;
}


/* NanoCore 1.12, address 0x400298c2.
 * REA evidence: ev_09e3f215d6e56f9ee2efa96f03c0d9df26d89d49267abb3cd2b9ef3adf60b834
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400298c2(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [136];
  
  do {
    while( true ) {
      do {
        FUN_ram_40029d3c(2);
        iVar1 = FUN_ram_40029818(auStack_90,0x80);
      } while (iVar1 != 0);
      uVar3 = FUN_ram_4002b76e(auStack_90,0x80);
      if ((int)uVar3 == 0) break;
      nc_midi_parse_stream(0,auStack_90);
      FUN_ram_40029788();
    }
    FUN_ram_40029788(0,(int)((ulonglong)uVar3 >> 0x20),0);
    uVar2 = FUN_ram_400043ae(0x14);
    FUN_ram_4000487e(0x3006c3f8,uVar2);
  } while( true );
}


/* NanoCore 1.12, address 0x40029910.
 * REA evidence: ev_a3067e923a44b4e26f8417b2a41d437cffa79dcc767115c604dcda6fb34288f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40029910(void)

{
  int iVar1;
  
  if (DAT_ram_3006c72c != '\0') {
    return -(uint)(DAT_ram_3006c72b == '\0');
  }
  DAT_ram_3006c72c = 1;
  DAT_ram_3006c72b = '\0';
  FUN_ram_40029714();
  iVar1 = FUN_ram_40004800(0x3006c3f8,s_midiev_ram_4009bd9c,0,0);
  if (iVar1 == 0) {
    DAT_ram_3006c3f4 = 1;
    FUN_ram_400146f8();
    FUN_ram_4001444a(&LAB_ram_4002b7e6);
    FUN_ram_40024e30(0);
    FUN_ram_400136d4();
    if (_DAT_ram_3006c3f0 == 0) {
      _DAT_ram_3006c3f0 = FUN_ram_4003efa2(0x2000,0x20,1,FUN_ram_4003f036);
    }
    if (_DAT_ram_3006c3f0 != 0) {
      iVar1 = FUN_ram_4000634c(0x3006c360,s_midi_rx_ram_4009bda4,FUN_ram_400298c2,0,
                               _DAT_ram_3006c3f0,0x2000,0x12,10);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_40006550(0x3006c360);
        if (iVar1 == 0) {
          DAT_ram_3006c72b = '\x01';
        }
        else {
          FUN_ram_4000638c(0x3006c360);
          FUN_ram_4003efec(_DAT_ram_3006c3f0,1,FUN_ram_4003f070);
          _DAT_ram_3006c3f0 = 0;
          DAT_ram_3006cf40 = 1;
        }
        return -(uint)(DAT_ram_3006c72b == '\0');
      }
      FUN_ram_4003efec(_DAT_ram_3006c3f0,1,FUN_ram_4003f070);
      _DAT_ram_3006c3f0 = 0;
    }
  }
  DAT_ram_3006cf40 = 1;
  return -1;
}


/* NanoCore 1.12, address 0x40029930.
 * REA evidence: ev_49856c735c808361452db5afa1c1d07acb5c93dd7e09770b5fa58ceff3f72277
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40029930(void)

{
  int iVar1;
  undefined1 *in_a5;
  
  *in_a5 = 1;
  DAT_ram_3006c72b = '\0';
  FUN_ram_40029714();
  iVar1 = FUN_ram_40004800(0x3006c3f8,s_midiev_ram_4009bd9c,0,0);
  if (iVar1 == 0) {
    DAT_ram_3006c3f4 = 1;
    FUN_ram_400146f8();
    FUN_ram_4001444a(&LAB_ram_4002b7e6);
    FUN_ram_40024e30(0);
    FUN_ram_400136d4();
    if (_DAT_ram_3006c3f0 == 0) {
      _DAT_ram_3006c3f0 = FUN_ram_4003efa2(0x2000,0x20,1,FUN_ram_4003f036);
    }
    if (_DAT_ram_3006c3f0 != 0) {
      iVar1 = FUN_ram_4000634c(0x3006c360,s_midi_rx_ram_4009bda4,FUN_ram_400298c2,0,
                               _DAT_ram_3006c3f0,0x2000,0x12,10);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_40006550(0x3006c360);
        if (iVar1 == 0) {
          DAT_ram_3006c72b = '\x01';
        }
        else {
          FUN_ram_4000638c(0x3006c360);
          FUN_ram_4003efec(_DAT_ram_3006c3f0,1,FUN_ram_4003f070);
          _DAT_ram_3006c3f0 = 0;
          DAT_ram_3006cf40 = 1;
        }
        return -(uint)(DAT_ram_3006c72b == '\0');
      }
      FUN_ram_4003efec(_DAT_ram_3006c3f0,1,FUN_ram_4003f070);
      _DAT_ram_3006c3f0 = 0;
    }
  }
  DAT_ram_3006cf40 = 1;
  return -1;
}


/* NanoCore 1.12, address 0x40029a5c.
 * REA evidence: ev_bcdbaeacd5b584f529ded40d5b16a9921b5e057f1ec4b28b119cd46b749fbdb5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029a5c(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0x1f) & param_1) != 0) {
      *(undefined4 *)(uVar1 * 4 + 0x3006cf48) = param_2;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x20);
  _DAT_ram_3006cf44 = _DAT_ram_3006cf44 | param_1;
  return;
}


/* NanoCore 1.12, address 0x40029a8e.
 * REA evidence: ev_a9eea8a37e845ef94ec309b8fd0ed960642a38b0ffd2909c83c8b5aa4840e6e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40029a8e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40038bfe(0xf);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40039bb8(0x18), iVar1 < 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_40039bf8(0x18);
    iVar1 = iVar1 >> 0x1f;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40029ab8.
 * REA evidence: ev_74c26bddbd7a2f0db77bcfad81e698ecb6bcac9af494f35f9089986ccdb8de41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40029abc) */

void FUN_ram_40029ab8(uint param_1)

{
  uint local_20 [7];
  
  local_20[0] = param_1 / 1000;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = local_20[0];
  FUN_ram_4003eb1c(0,local_20);
  FUN_ram_4003eab8(0);
  FUN_ram_4003ebf6(1,0);
  return;
}


/* NanoCore 1.12, address 0x40029ae8.
 * REA evidence: ev_d9ba10338c0a2fbe49f99182c65444074260ef118883680463f4c04df1c80574
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40029af2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029ae8(void)

{
  if (_DAT_ram_3006d058 == 0) {
    _DAT_ram_3006d058 = 1;
  }
  FUN_ram_4003f1c2();
  FUN_ram_4003ecd0(0xc);
  FUN_ram_40029a8e();
  FUN_ram_40029ab8(1000);
  FUN_ram_4004004c(50000);
  mstatus = mstatus & 0xfffffff7;
  FUN_ram_40029ab8(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* NanoCore 1.12, address 0x40029b40.
 * REA evidence: ev_e86c5d7f1ecb86227742afec31a799c7547fd0d0aaae44dad22768e87950810c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40029b40(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = _DAT_ram_3006d060;
  uVar1 = _DAT_ram_3006cfd0;
  uVar8 = 0;
  if (_DAT_ram_3006d060 != 0) {
    uVar3 = ~(_DAT_ram_3006d05c & _DAT_ram_3006cf44) & _DAT_ram_3006d060;
    uVar4 = 0;
    uVar8 = uVar3;
    do {
      uVar9 = 1 << (uVar4 & 0x1f);
      if (((uVar2 & uVar9) != 0) && ((uVar3 & uVar9) == 0)) {
        iVar7 = *(int *)(uVar4 * 4 + 0x3006cf48);
        uVar5 = 30000;
        if ((uVar4 != 0) && ((uVar9 & 2) == 0)) {
          uVar5 = 5000;
        }
        iVar6 = FUN_ram_400043ae(uVar5);
        if ((iVar6 == 0) || (iVar6 <= param_1 - iVar7)) {
          uVar8 = uVar8 | uVar9;
        }
        if ((uVar1 & uVar9) != 0) {
          iVar6 = *(int *)(uVar4 * 4 + 0x3006cfd4);
          iVar7 = FUN_ram_400043ae(30000);
          if ((iVar7 == 0) || (iVar7 <= param_1 - iVar6)) {
            uVar8 = uVar8 | uVar9;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x20);
  }
  return uVar8;
}


/* NanoCore 1.12, address 0x40029c36.
 * REA evidence: ev_ff94b3316faece310706c1bd4ccb6a62976e0ea9e630a839339838e3255d2fb1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029c36(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  do {
    if (_DAT_ram_3006d058 == 0) {
      if (_DAT_ram_3006cfc8 == 0) {
        if ((_DAT_ram_3006cfcc != 0) && (_DAT_ram_3006d4fc != 0)) {
          FUN_ram_40004346();
          iVar1 = FUN_ram_40029b40();
          if (iVar1 == 0) {
            iVar2 = FUN_ram_40004346();
            iVar1 = _DAT_ram_3006d054;
            iVar3 = FUN_ram_400043ae(3000);
            if ((iVar3 == 0) || (iVar3 <= iVar2 - iVar1)) {
              FUN_ram_4003fdde();
              FUN_ram_4003fdfe();
              FUN_ram_4003ed7a();
              _DAT_ram_3006cfc8 = 1;
              FUN_ram_4003eab8(0);
              FUN_ram_4003ec3a();
            }
          }
        }
      }
      else {
        FUN_ram_40004346();
        uVar4 = FUN_ram_40029b40();
        if (uVar4 == 0) {
          FUN_ram_4003eab8();
          FUN_ram_4003ec3a();
        }
        else if ((uVar4 & ~_DAT_ram_3006d064) != 0) {
          _DAT_ram_3006d064 = uVar4 & ~_DAT_ram_3006d064 | _DAT_ram_3006d064;
          FUN_ram_4003ecd0(0xc);
        }
      }
    }
    FUN_ram_400064e4(0xfa);
  } while( true );
}


/* NanoCore 1.12, address 0x40029d1e.
 * REA evidence: ev_617f26cf19586db73a49d66b1f191582d1d66fff832bee9e83e375db29be5405
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029d1e(undefined4 param_1)

{
  FUN_ram_400002f4();
  _DAT_ram_3006d060 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40029d3c.
 * REA evidence: ev_82777de4d9aa56ccff313b271b18f001af8a3f09293514bd247597c9df315e7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029d3c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_40004346();
    uVar2 = FUN_ram_400002f4();
    FUN_ram_40029a5c(param_1,uVar1);
    FUN_ram_400002fa(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40029d6c.
 * REA evidence: ev_9d9b44f4a34965d225148f6db0be51892a0094524f10aafe76a18f526603e437
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029d6c(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_40004346();
    uVar2 = FUN_ram_400002f4();
    FUN_ram_40029a5c(param_1,uVar1);
    _DAT_ram_3006d05c = param_1 | _DAT_ram_3006d05c;
    FUN_ram_400002fa(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40029daa.
 * REA evidence: ev_087828278c32dc52cc5f07eaac155ca7d5c06ae18b4e644b77ce9796ae373a39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029daa(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_40004346();
    FUN_ram_400002f4();
    uVar2 = 0;
    do {
      if ((1 << (uVar2 & 0x1f) & param_1) != 0) {
        *(undefined4 *)(uVar2 * 4 + 0x3006cfd4) = uVar1;
        *(undefined4 *)(uVar2 * 4 + 0x3006cf48) = uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x20);
    _DAT_ram_3006cfd0 = _DAT_ram_3006cfd0 | param_1;
    _DAT_ram_3006cf44 = param_1 | _DAT_ram_3006cf44;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40029e18.
 * REA evidence: ev_6f637d12c55817822dee92d155ed7a67bc69e323fec9cf0856d6b3342f14716e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029e18(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_40004346();
    uVar2 = FUN_ram_400002f4();
    _DAT_ram_3006cfd0 = ~param_1 & _DAT_ram_3006cfd0;
    FUN_ram_40029a5c(param_1,uVar1);
    FUN_ram_400002fa(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40029e5a.
 * REA evidence: ev_a013a9e7c2c13f517fd384cbfe9a51ed4269c07d420050062fb7402bb8a75c44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029e5a(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3006cfcc = 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40029e74.
 * REA evidence: ev_82c38c295ac0897d95fab53d3f2d6b4e09d8c3c931b720c78cb9b944df127ba7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029e74(void)

{
  FUN_ram_4003f1c2();
  FUN_ram_4003ecd0(1);
  FUN_ram_400064e4(0x32);
  mstatus = mstatus & 0xfffffff7;
  FUN_ram_40029a8e();
  FUN_ram_40029ab8(1000);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* NanoCore 1.12, address 0x40029ea6.
 * REA evidence: ev_091d68e53de5f8826f8d8cc51f03ca4a6866a7ec9637722e1b8d29e45206bb37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029ea6(void)

{
  int iVar1;
  
  _DAT_ram_3006d058 = 0;
  _DAT_ram_3006cfc8 = 0;
  _DAT_ram_3006d4fc = 0;
  _DAT_ram_3006cfcc = 0;
  _DAT_ram_3006d060 = 0;
  _DAT_ram_3006d05c = 0;
  _DAT_ram_3006cf44 = 0;
  _DAT_ram_3006cfd0 = 0;
  _DAT_ram_3006d064 = 0;
  _DAT_ram_3006d4f8 = 0;
  DAT_ram_3004ad81 = 0xff;
  iVar1 = 0;
  do {
    *(undefined4 *)(iVar1 * 4 + 0x3006cf48) = 0;
    *(undefined4 *)(iVar1 * 4 + 0x3006cfd4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  _DAT_ram_3006d054 = FUN_ram_40004346();
  FUN_ram_4003fd78();
  FUN_ram_4003fd94();
  FUN_ram_4003fde4();
  iVar1 = FUN_ram_40029a8e();
  if (iVar1 == 0) {
    FUN_ram_40029ab8(60000);
    iVar1 = FUN_ram_4000634c(0x3006d068,s_sys_recover_ram_4009bdac,FUN_ram_40029c36,0,0x3006d0f8,
                             0x400,8,10);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_40006550(0x3006d068), iVar1 == 0)) {
      _DAT_ram_30080c88 = FUN_ram_40029ae8;
      _DAT_ram_3006d4fc = 1;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40029fae.
 * REA evidence: ev_e05675cf173e10ebc16d477fd8be304efedaf4a72aa4b95f0df792e2b5d96688
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029fae(void)

{
  FUN_ram_400002f4();
  DAT_ram_3006d50c = 0;
  _DAT_ram_3006d504 = 0;
  DAT_ram_3006d508 = 0;
  DAT_ram_3006d509 = 0;
  _DAT_ram_3006d50a = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40029fda.
 * REA evidence: ev_7857b8d2d47ac8cc29b256bc0d73a3854b7062f1e07b430cc02bcb0eaae49ae6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40029fda(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_400063d6(s_tuner_ram_4009a0f4,FUN_ram_4002a074,0,0x1000,0x12,10);
  if (iVar1 != 0) {
    FUN_ram_40006550();
  }
  return 0;
}


