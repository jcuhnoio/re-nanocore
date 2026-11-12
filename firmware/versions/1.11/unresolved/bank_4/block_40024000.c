/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40024000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002403c.
 * REA evidence: ev_6f7bfd66df1e80b6e564c8ff1298cbce16431da33df4278c918be77f68c64394
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002403c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar3 = _DAT_ram_3006bb0a;
  uVar2 = _DAT_ram_3006bb08;
  if (param_1 != (undefined4 *)0x0) {
    uVar8 = (uint)_DAT_ram_3006bb0a;
    uVar9 = 4;
    if (uVar8 != 0) {
      uVar9 = uVar8;
    }
    uVar7 = 4;
    if (_DAT_ram_3006bb08 != 0) {
      uVar7 = (uint)_DAT_ram_3006bb08;
    }
    uVar6 = 0x3c0;
    if (uVar9 < 0xf01) {
      if (uVar9 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = 0xf00 / uVar9;
      }
    }
    uVar9 = 0x3c0;
    if ((uVar8 - 1 & 0xffff) < 0xf00) {
      if (uVar8 == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = 0xf00 / uVar8;
      }
    }
    uVar10 = (ulonglong)_DAT_ram_3006bb10;
    *param_1 = _DAT_ram_3006bb0c;
    uVar4 = _DAT_ram_3006bb24;
    uVar5 = _DAT_ram_3006bb20;
    *(undefined1 *)(param_1 + 6) = DAT_ram_3006bb01;
    uVar1 = DAT_ram_3006bb02;
    param_1[2] = uVar5;
    param_1[3] = uVar4;
    *(undefined1 *)((int)param_1 + 0x19) = uVar1;
    uVar1 = DAT_ram_3006bb03;
    param_1[4] = param_2;
    param_1[5] = param_3;
    *(undefined1 *)((int)param_1 + 0x1a) = uVar1;
    uVar1 = DAT_ram_3006bb04;
    *(ulonglong *)(param_1 + 8) = uVar10;
    *(ushort *)(param_1 + 9) = uVar2;
    *(undefined1 *)((int)param_1 + 0x1b) = uVar1;
    uVar1 = DAT_ram_3006bb05;
    *(ushort *)((int)param_1 + 0x26) = uVar3;
    param_1[0xe] = param_4;
    *(undefined1 *)(param_1 + 7) = uVar1;
    uVar4 = _DAT_ram_3006bb2c;
    uVar5 = _DAT_ram_3006bb28;
    param_1[10] = 0x3c0;
    param_1[0xc] = uVar5;
    param_1[0xd] = uVar4;
    param_1[0xf] = param_5;
    uVar8 = FUN_ram_40003f40(uVar5,uVar4,uVar7 * uVar6,0);
    if (uVar9 == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = uVar8 / uVar9;
    }
    param_1[0x10] = uVar8;
    uVar5 = FUN_ram_40003b9c(uVar5,uVar4,uVar7 * uVar6,0);
    param_1[0x12] = uVar5;
    param_1[0x11] = uVar9;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002414c.
 * REA evidence: ev_b2f85f4b00a91586d3a69a8fce4ef29ea7728c9b3f75a88dd86de477db3535b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002414c(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (_DAT_ram_3006bb2c < 0x28) {
    uVar1 = FUN_ram_40003b9c(_DAT_ram_3006bb28,_DAT_ram_3006bb2c,0x28,0);
  }
  _DAT_ram_3006bb3c = uVar1;
  return;
}


/* NanoCore 1.11, address 0x4002417e.
 * REA evidence: ev_347f18d7670cd2fa141a21e8114c374145f3702b53b38cf6826a91ed4736949f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002417e(void)

{
  uRam3006bb1c = _DAT_ram_3006bb18;
  _DAT_ram_3006bb30 = _DAT_ram_3006bb28;
  _DAT_ram_3006bb34 = _DAT_ram_3006bb2c;
  _DAT_ram_3006bb18 = _DAT_ram_3006bb14;
  return;
}


/* NanoCore 1.11, address 0x40024194.
 * REA evidence: ev_4e6a62234d59c1fe079a78831022b0629f20efcc4e77944158cf76c8431756e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024194(void)

{
  DAT_ram_3006c044 = 0;
  _DAT_ram_3006c048 = 0;
  _DAT_ram_3006c04c = 0;
  return;
}


/* NanoCore 1.11, address 0x400241aa.
 * REA evidence: ev_a22b5f8a1d858bf3e1eacd1d78c529b946733ef4ff9b06549bc95c2e335ff6bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400241aa(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < _DAT_ram_3006c042; uVar1 = uVar1 + 1 & 0xffff) {
    if (((&DAT_ram_3006bb42)[uVar1 * 5] == '\0') || ((&DAT_ram_3006bb41)[uVar1 * 5] == -4)) {
      if (uVar1 != uVar2) {
        FUN_ram_4000304c(&DAT_ram_3006bb41 + uVar2 * 5,&DAT_ram_3006bb41 + uVar1 * 5,5);
      }
      uVar2 = uVar2 + 1 & 0xffff;
    }
  }
  _DAT_ram_3006c042 = (short)uVar2;
  return;
}


/* NanoCore 1.11, address 0x40024226.
 * REA evidence: ev_ebdd08fc61356dfa9c68cf43538467f1086765884426ed6152c8bb7ae2c4291d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024226(char param_1)

{
  if (DAT_ram_3006bb04 != param_1) {
    if ((DAT_ram_3006bb04 == '\0') && (DAT_ram_3006bb01 != '\0')) {
      FUN_ram_4002414c();
    }
    else {
      _DAT_ram_3006bb3c = 0;
    }
  }
  DAT_ram_3006bb04 = param_1;
  DAT_ram_3006bb02 = 1;
  return;
}


/* NanoCore 1.11, address 0x4002426c.
 * REA evidence: ev_512d041d6eacbf45710e288c14752ddef5a3457d6ffb912735f12a068389de31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_4002426c(undefined8 param_1,uint param_2,uint param_3)

{
  if (((_DAT_ram_3006baf0 != param_2) || (_DAT_ram_3006baf4 != param_3)) ||
     ((float)_DAT_ram_3006baec != (float)param_1)) {
    _DAT_ram_3006baf8 =
         (ulonglong)
         (uint)(((float)param_2 * (float)param_1 * DAT_ram_40095588) /
               ((float)param_3 * DAT_ram_400954c0));
    _DAT_ram_3006baec = param_1;
    _DAT_ram_3006baf4 = param_3;
  }
  return _DAT_ram_3006baf8;
}


/* NanoCore 1.11, address 0x400242da.
 * REA evidence: ev_2e11369335be9857dcbd3b08f657537b843e5abd4e855ca6bd5dc68afb3d9485
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400242da(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)_DAT_ram_3006c042;
  if (0xff < uVar3) {
    if (param_1 == 0xf8) {
      return 0;
    }
    uVar1 = uVar3 - 1 & 0xffff;
    do {
      uVar2 = uVar1 + 1 & 0xffff;
      if ((&DAT_ram_3006bb41)[uVar1 * 5] == -8) {
        if (uVar2 < uVar3) {
          FUN_ram_40003100(&DAT_ram_3006bb41 + uVar1 * 5,&DAT_ram_3006bb41 + uVar2 * 5,
                           (uVar3 - uVar1) * 5 + -5);
        }
        _DAT_ram_3006c042 = _DAT_ram_3006c042 - 1;
        return 1;
      }
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0xffffffff);
    FUN_ram_40003100(&DAT_ram_3006bb41,0x3006bb46,0x4fb);
    _DAT_ram_3006c042 = 0xff;
  }
  return 1;
}


/* NanoCore 1.11, address 0x40024382.
 * REA evidence: ev_0954628f9c27f3dd37587f693a55f17b4319ba2061e0611c3e3b6bc16c4d027c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40024382(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_ram_3006bb05 != '\0') && (bVar1 = true, DAT_ram_3006bb03 != '\0')) {
    bVar1 = (_DAT_ram_3006bb00 & 0xffff0000) == 0x1000000;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x400243aa.
 * REA evidence: ev_5f929a5ce5f07de8306e6e8485711c21edbd816e5c33c8010eeb60ac71d947c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400243aa(void)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_ram_3006bb05 == '\0') {
    _DAT_ram_3006c042 = 0;
  }
  else if ((DAT_ram_3006bb05 == '\x02') && (DAT_ram_3006bb01 == '\0')) {
    uVar1 = 0;
    for (uVar2 = 0; uVar2 < _DAT_ram_3006c042; uVar2 = uVar2 + 1 & 0xffff) {
      if ((&DAT_ram_3006bb41)[uVar2 * 5] != -8) {
        if (uVar2 != uVar1) {
          FUN_ram_4000304c(&DAT_ram_3006bb41 + uVar1 * 5,&DAT_ram_3006bb41 + uVar2 * 5,5);
        }
        uVar1 = uVar1 + 1 & 0xffff;
      }
    }
    _DAT_ram_3006c042 = (ushort)uVar1;
  }
  return;
}


/* NanoCore 1.11, address 0x40024436.
 * REA evidence: ev_3f26fe2a258143bfda439eefafe33a7581aa33e542a477ed67a36529c5cc8374
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024436(int param_1)

{
  int iVar1;
  
  if ((DAT_ram_3006bb02 != '\0') && (DAT_ram_3006bb40 != '\0')) {
    iVar1 = FUN_ram_40004352(500);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    if (iVar1 < param_1 - _DAT_ram_3006bb38) {
      DAT_ram_3006bb02 = 0;
      DAT_ram_3006bb04 = 0;
      DAT_ram_3006bb40 = 0;
      if ((DAT_ram_3006bb03 == '\x01') && (DAT_ram_3006bb01 != '\0')) {
        FUN_ram_4002417e();
      }
      FUN_ram_400241aa();
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400244aa.
 * REA evidence: ev_8c04643b56ee684bee32ee0861153fd0300de0193afaf07819fffe9641cb6e96
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400244aa(uint param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    return false;
  }
  FUN_ram_40024436(param_2);
  if (DAT_ram_3006bb03 == 3) {
    iVar1 = param_1 - 2;
LAB_ram_40024506:
    bVar2 = iVar1 == 0;
  }
  else {
    if (DAT_ram_3006bb03 < 4) {
      if (DAT_ram_3006bb03 == 0) {
        return false;
      }
      if (DAT_ram_3006bb03 == 2) {
        iVar1 = param_1 - 1;
        goto LAB_ram_40024506;
      }
    }
    else if (DAT_ram_3006bb03 == 4) {
      iVar1 = param_1 - 3;
      goto LAB_ram_40024506;
    }
    bVar2 = true;
    if ((DAT_ram_3006bb02 != '\0') && ((uint)DAT_ram_3006bb04 != (param_1 & 0xff))) {
      bVar2 = false;
    }
  }
  return bVar2;
}


/* NanoCore 1.11, address 0x400244b0.
 * REA evidence: ev_b7443ced90ec12e5cdc001c6350c0729da101eba9ac024257d0c6b5aad44d156
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400244b0(uint param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  FUN_ram_40024436(param_2);
  if (DAT_ram_3006bb03 == 3) {
    iVar1 = param_1 - 2;
LAB_ram_40024506:
    bVar2 = iVar1 == 0;
  }
  else {
    if (DAT_ram_3006bb03 < 4) {
      if (DAT_ram_3006bb03 == 0) {
        return false;
      }
      if (DAT_ram_3006bb03 == 2) {
        iVar1 = param_1 - 1;
        goto LAB_ram_40024506;
      }
    }
    else if (DAT_ram_3006bb03 == 4) {
      iVar1 = param_1 - 3;
      goto LAB_ram_40024506;
    }
    bVar2 = true;
    if ((DAT_ram_3006bb02 != '\0') && ((uint)DAT_ram_3006bb04 != (param_1 & 0xff))) {
      bVar2 = false;
    }
  }
  return bVar2;
}


/* NanoCore 1.11, address 0x40024510.
 * REA evidence: ev_0deec312e306c613f0949d9452e0e4b7c7aba054b4077e936f14a2b4814482da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024510(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if (param_1 != 0xf8) {
    if (2 < (param_1 + 6U & 0xff)) {
      return;
    }
  }
  iVar1 = FUN_ram_400242da();
  if (iVar1 != 0) {
    iVar1 = (uint)_DAT_ram_3006c042 * 5;
    _DAT_ram_3006c042 = _DAT_ram_3006c042 + 1;
    (&DAT_ram_3006bb41)[iVar1] = (char)param_1;
    (&DAT_ram_3006bb42)[iVar1] = param_2;
    *(undefined1 *)(iVar1 + 0x3006bb43) = 1;
    *(undefined1 *)(iVar1 + 0x3006bb44) = 0;
    *(undefined1 *)(iVar1 + 0x3006bb45) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40024574.
 * REA evidence: ev_b700bdeae4429a85b4b11e72ef954edfe19e59a481f253c15f3fc699390ff6d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024574(char param_1)

{
  if (DAT_ram_3006bb05 == '\0') {
    return;
  }
  if (((DAT_ram_3006bb05 != '\x01') && (2 < (byte)(param_1 + 6U))) && (DAT_ram_3006bb01 == '\0')) {
    return;
  }
  FUN_ram_40024510();
  return;
}


/* NanoCore 1.11, address 0x400245a2.
 * REA evidence: ev_770a77c9033fb499d09b4dba37fa1eb3c1fa1b18b15c860fd491e7c1c4aaa1d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400245a2(uint param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_400242da(0xf2);
  if (iVar1 != 0) {
    if ((param_2 != 0) || (0x3fff < param_1)) {
      param_1 = 0x3fff;
    }
    iVar1 = (uint)_DAT_ram_3006c042 * 5;
    _DAT_ram_3006c042 = _DAT_ram_3006c042 + 1;
    (&DAT_ram_3006bb42)[iVar1] = param_3;
    *(undefined1 *)(iVar1 + 0x3006bb43) = 3;
    (&DAT_ram_3006bb41)[iVar1] = 0xf2;
    *(byte *)(iVar1 + 0x3006bb44) = (byte)param_1 & 0x7f;
    *(char *)(iVar1 + 0x3006bb45) = (char)(param_1 >> 7);
  }
  return;
}


/* NanoCore 1.11, address 0x40024610.
 * REA evidence: ev_89fb9cf432a7e9d63469a9a1cb73364ca54282f926ec7da7e7d3dc434ec41f27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024610(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  if (DAT_ram_3006bb00 == '\0') {
    _DAT_ram_3006bb00 = 0x1000001;
    _DAT_ram_3006bb04 = 0x200;
    DAT_ram_3006bb06 = 3;
    _DAT_ram_3006bb08 = 0x40004;
    if (param_1 == 0) {
      param_1 = 0xac44;
    }
    _DAT_ram_3006bb10 = (ulonglong)DAT_ram_400952c8;
    _DAT_ram_3006bb18 = 0;
    _DAT_ram_3006bb20 = 0;
    _DAT_ram_3006bb24 = 0;
    _DAT_ram_3006bb28 = 0;
    _DAT_ram_3006bb2c = 0;
    _DAT_ram_3006bb30 = 0;
    _DAT_ram_3006bb34 = 0;
    _DAT_ram_3006bb38 = 0;
    _DAT_ram_3006bb3c = 0;
    DAT_ram_3006bb40 = 0;
    _DAT_ram_3006c042 = 0;
    _DAT_ram_3006bb0c = param_1;
    FUN_ram_40024194();
  }
  else if (param_1 != 0) {
    _DAT_ram_3006bb0c = param_1;
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.11, address 0x400246ac.
 * REA evidence: ev_352abceaed267c888ae6a4c85844a132b3ee281de1366aae512edda9b4889e94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400246ac(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40024610();
    FUN_ram_400002f4();
    _DAT_ram_3006bb0c = param_1;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400246d2.
 * REA evidence: ev_2b8ba629def584326b4c9c1c68dc6ba89703116cc7f05cd8bf25ba8939aaf745
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400246d2(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_ram_40024610(0);
  uVar1 = FUN_ram_400042ea();
  uVar2 = FUN_ram_400002f4();
  FUN_ram_40024436(uVar1);
  FUN_ram_4002403c(param_1,_DAT_ram_3006bb20,_DAT_ram_3006bb24,_DAT_ram_3006bb28,_DAT_ram_3006bb2c);
  FUN_ram_400002fa(uVar2);
  return;
}


/* NanoCore 1.11, address 0x40024724.
 * REA evidence: ev_c30eaab6614523800deb017948a8e01924efebd45d805f004b23e57e8d0abbd5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024860) */
/* WARNING: Removing unreachable block (ram,0x40024888) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024724(uint param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_1 == 0) {
    FUN_ram_400246d2(param_3);
    return;
  }
  FUN_ram_40024610(param_2);
  uVar9 = FUN_ram_400002f4();
  if (param_2 != 0) {
    _DAT_ram_3006bb0c = param_2;
  }
  FUN_ram_400042ea();
  FUN_ram_40024436();
  uVar5 = _DAT_ram_3006bb2c;
  uVar4 = _DAT_ram_3006bb28;
  if (_DAT_ram_3006bb0c == 0) {
    _DAT_ram_3006bb0c = 0xac44;
  }
  uVar2 = _DAT_ram_3006bb20;
  uVar3 = _DAT_ram_3006bb24;
  _DAT_ram_3006bb20 = (ulonglong)param_1 + _DAT_ram_3006bb20;
  _DAT_ram_3006bb28 = CONCAT44(_DAT_ram_3006bb2c,_DAT_ram_3006bb28);
  if ((DAT_ram_3006bb01 != '\0') &&
     ((DAT_ram_3006bb03 < 2 ||
      (_DAT_ram_3006bb28 = CONCAT44(_DAT_ram_3006bb2c,_DAT_ram_3006bb28), DAT_ram_3006bb02 != '\0'))
     )) {
    fVar12 = (float)FUN_ram_4002426c(CONCAT44(_DAT_ram_3006bb14,_DAT_ram_3006bb10),param_1,
                                     _DAT_ram_3006bb0c);
    fVar12 = fVar12 + _DAT_ram_3006bb14;
    uVar8 = (uint)(-1 < (int)fVar12) * (int)fVar12;
    _DAT_ram_3006bb14 = fVar12 - (float)uVar8;
    _DAT_ram_3006bb28 = CONCAT44(_DAT_ram_3006bb2c,_DAT_ram_3006bb28) + (ulonglong)uVar8;
    _DAT_ram_3006bb18 = 0.0;
  }
  iVar10 = FUN_ram_40024382();
  if ((iVar10 != 0) &&
     ((DAT_ram_3006bb05 == '\x01' || ((DAT_ram_3006bb05 == '\x02' && (DAT_ram_3006bb01 != '\0'))))))
  {
    fVar12 = (float)FUN_ram_4002426c(CONCAT44(_DAT_ram_3006bb14,_DAT_ram_3006bb10),param_1,
                                     _DAT_ram_3006bb0c);
    uVar6 = _DAT_ram_3006bb30;
    uVar7 = _DAT_ram_3006bb34;
    fVar12 = fVar12 + _DAT_ram_3006bb18;
    uVar8 = (uint)(-1 < (int)fVar12) * (int)fVar12;
    uVar14 = uVar8 + _DAT_ram_3006bb30;
    _DAT_ram_3006bb18 = fVar12 - (float)uVar8;
    uRam3006bb1c = 0;
    bVar1 = _DAT_ram_3006bb30 < uVar14;
    _DAT_ram_3006bb30 = uVar14;
    if (bVar1) {
      uVar13 = FUN_ram_40003b9c(uVar6,uVar7,0x28,0);
      uVar14 = FUN_ram_40003b9c((int)uVar14,(int)(uVar14 >> 0x20),0x28,0);
      if (uVar13 < uVar14) {
        uVar8 = (uint)(uVar14 - uVar13);
        if (((int)(uVar14 - uVar13 >> 0x20) == 0) && (uVar8 < 0xf1)) {
          if (uVar8 == 0) goto LAB_ram_400247e2;
        }
        else {
          uVar8 = 0xf0;
        }
        uVar11 = FUN_ram_40024382();
        while (uVar11 != 0) {
          FUN_ram_40024510(0xf8,0);
          uVar8 = uVar8 - 1;
          uVar11 = uVar8;
        }
      }
    }
  }
LAB_ram_400247e2:
  FUN_ram_4002403c(param_3,uVar2,uVar3,uVar4,uVar5);
  FUN_ram_400002fa(uVar9);
  return;
}


/* NanoCore 1.11, address 0x400248ba.
 * REA evidence: ev_b8c1a20894f7ccb0c298ef3b1ae67deb00a02860c112dc0c579cac032afd4c96
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400248ba(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  undefined1 uStack_544;
  undefined1 uStack_543;
  undefined1 uStack_542;
  undefined1 local_540 [1292];
  
  FUN_ram_40024610(0);
  uVar10 = FUN_ram_400002f4();
  if ((DAT_ram_3006bb02 == '\0') && (_DAT_ram_3006c042 == 0)) {
    FUN_ram_400002fa();
    return;
  }
  FUN_ram_400002fa(uVar10);
  uVar10 = FUN_ram_400042ea();
  uVar11 = FUN_ram_400002f4();
  FUN_ram_40024436(uVar10);
  FUN_ram_400243aa();
  uVar7 = _DAT_ram_3006c05c;
  pcVar6 = _DAT_ram_3006c058;
  uVar10 = _DAT_ram_3006c054;
  pcVar5 = _DAT_ram_3006c050;
  bVar4 = DAT_ram_3006bb06;
  uVar12 = (uint)_DAT_ram_3006c042;
  if (uVar12 < 0x101) {
    if (uVar12 == 0) goto LAB_ram_400249ac;
  }
  else {
    uVar12 = 0x100;
  }
  FUN_ram_4000304c(local_540,&DAT_ram_3006bb41,uVar12 * 5);
LAB_ram_400249ac:
  _DAT_ram_3006c042 = 0;
  FUN_ram_400002fa(uVar11);
  if ((pcVar5 != (code *)0x0) || (pcVar6 != (code *)0x0)) {
    puVar8 = local_540;
    for (uVar13 = 0; uVar13 != uVar12; uVar13 = uVar13 + 1 & 0xffff) {
      if ((pcVar5 != (code *)0x0) || (pcVar6 != (code *)0x0)) {
        bVar1 = puVar8[2];
        cVar2 = puVar8[1];
        if (bVar1 < 4) {
          bVar9 = bVar1;
          if (bVar1 == 0) {
            bVar9 = 1;
          }
        }
        else {
          bVar9 = 3;
        }
        uStack_544 = *puVar8;
        iVar14 = 3;
        bVar15 = 1;
        uStack_543 = puVar8[3];
        uStack_542 = puVar8[4];
        do {
          if (((bVar4 & bVar15) != 0) &&
             (cVar3 = (&DAT_ram_40095594)[(byte)(bVar15 - 1)], cVar2 != cVar3)) {
            if (pcVar6 == (code *)0x0) {
              if (bVar1 < 2) {
                (*pcVar5)(cVar3,uStack_544,uVar10);
              }
            }
            else {
              (*pcVar6)(cVar3,&uStack_544,bVar9,uVar7);
            }
          }
          iVar14 = iVar14 + -1;
          bVar15 = bVar15 << 1;
        } while (iVar14 != 0);
      }
      puVar8 = puVar8 + 5;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40024aa4.
 * REA evidence: ev_0f6fae2ec61fb24b07fd516aab5b5c90c8c04e8e692c1b1d062b72c86ec6a45b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024c4a) */
/* WARNING: Removing unreachable block (ram,0x40024c6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024aa4(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((param_2 != 0xf8) && (2 < (param_2 + 6U & 0xff))) {
    return;
  }
  FUN_ram_40024610(0);
  uVar3 = FUN_ram_400002f4();
  iVar4 = FUN_ram_400244aa(param_1,param_3);
  if (iVar4 != 0) {
    FUN_ram_40024226(param_1);
    if (param_2 == 0xfa) {
      DAT_ram_3006bb01 = '\x01';
      _DAT_ram_3006bb28 = 0;
      _DAT_ram_3006bb10 = _DAT_ram_3006bb10 & 0xffffffff;
      _DAT_ram_3006bb3c = 0;
      uVar5 = 0xfa;
    }
    else if (param_2 == 0xfb) {
      DAT_ram_3006bb01 = '\x01';
      FUN_ram_4002414c();
      uVar5 = 0xfb;
    }
    else if (param_2 == 0xfc) {
      if (DAT_ram_3006bb02 != '\0') {
        _DAT_ram_3006bb10 = _DAT_ram_3006bb10 & 0xffffffff;
        _DAT_ram_3006bb28 = (ulonglong)_DAT_ram_3006bb3c * 0x28;
      }
      DAT_ram_3006bb01 = '\0';
      uVar5 = 0xfc;
    }
    else {
      if (param_2 != 0xf8) goto LAB_ram_40024ae4;
      FUN_ram_40024194();
      if ((((DAT_ram_3006bb40 != '\0') && (param_3 != _DAT_ram_3006bb38)) &&
          (fVar1 = _DAT_ram_40095590 /
                   ((float)(uint)(param_3 - _DAT_ram_3006bb38) * DAT_ram_400952cc),
          DAT_ram_40094ea8 <= fVar1)) && (fVar1 <= DAT_ram_40094ebc)) {
        _DAT_ram_3006bb10 =
             (ulonglong)
             (uint)((float)_DAT_ram_3006bb10 * _DAT_ram_40094638 + fVar1 * DAT_ram_40094eec);
      }
      _DAT_ram_3006bb28 = CONCAT44(_DAT_ram_3006bb2c,_DAT_ram_3006bb28);
      if ((DAT_ram_3006bb01 != '\0') &&
         (_DAT_ram_3006bb28 = CONCAT44(_DAT_ram_3006bb2c,_DAT_ram_3006bb28),
         _DAT_ram_3006bb3c != 0xffffffff)) {
        _DAT_ram_3006bb3c = _DAT_ram_3006bb3c + 1;
        uVar2 = (ulonglong)_DAT_ram_3006bb3c * 0x28;
        if ((CONCAT44(_DAT_ram_3006bb2c,_DAT_ram_3006bb28) < uVar2) ||
           (uVar2 = uVar2 + 0x28, _DAT_ram_3006bb28 = CONCAT44(_DAT_ram_3006bb2c,_DAT_ram_3006bb28),
           uVar2 < CONCAT44(_DAT_ram_3006bb2c,_DAT_ram_3006bb28))) {
          _DAT_ram_3006bb10 = _DAT_ram_3006bb10 & 0xffffffff;
          _DAT_ram_3006bb28 = uVar2;
        }
      }
      uVar5 = 0xf8;
    }
    DAT_ram_3006bb40 = '\x01';
    _DAT_ram_3006bb38 = param_3;
    FUN_ram_40024574(uVar5,param_1);
  }
LAB_ram_40024ae4:
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.11, address 0x40024c78.
 * REA evidence: ev_b62b623e163eab0136b72394ce231bd9aa3b45ca4b1b20eb2807f2861c1fdd30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024c78(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_ram_40024610(0);
  uVar1 = FUN_ram_400002f4();
  iVar2 = FUN_ram_400244aa(param_1,param_3);
  if (iVar2 != 0) {
    FUN_ram_40024226(param_1);
    _DAT_ram_3006bb28 = (ulonglong)(param_2 & 0x3fff) * 0xf0;
    _DAT_ram_3006bb14 = 0;
    FUN_ram_4002414c();
    DAT_ram_3006bb40 = 1;
    _DAT_ram_3006bb38 = param_3;
    if (DAT_ram_3006bb05 != '\0') {
      FUN_ram_400245a2(param_2 & 0x3fff,0,param_1);
    }
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.11, address 0x40024cf8.
 * REA evidence: ev_2e2908ff9061e928c51c2fad7fbf07cd5fbf8109c4cedbdcf27a7a94aabdbee8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024cf8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
  return;
}


/* NanoCore 1.11, address 0x40024d06.
 * REA evidence: ev_978a4dba9cb434457cf4c9a73a61ebdec1b68a69510a9a0f0b4cb3e9f63d37bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40024d06(int *param_1,int param_2,uint param_3)

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
      uVar3 = FUN_ram_40004352(0x5a);
      iVar4 = FUN_ram_400042ea();
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


/* NanoCore 1.11, address 0x40024d98.
 * REA evidence: ev_8ce8e76df7c8997062cc229e32e22dfc38e782a1ae1b2369b890ce94deeb05c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40024d98(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40024d06();
  return iVar1 * 10;
}


/* NanoCore 1.11, address 0x40024dac.
 * REA evidence: ev_ec06c1c9e2820e8401fcd78f8fe176d816bb8dd1b9f16a3ed082cad972796e66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024dc6) */

int FUN_ram_40024dac(int param_1)

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


/* NanoCore 1.11, address 0x40024dd4.
 * REA evidence: ev_307cb450b53e35e354cd8c8a24d7109d9f0f1fa99e3ec1fd09dad34ecb385993
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40024dd4(int param_1)

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


/* NanoCore 1.11, address 0x40024e1a.
 * REA evidence: ev_58a233c564ef30d558cad039680f4c42389c803eee8cab5405385f4fdc4e4f50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024e0c) */

int FUN_ram_40024e1a(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40024d98(param_1,param_2,param_4);
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
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  return (iVar1 * 100 + 500) / 1000;
}


/* NanoCore 1.11, address 0x40024e60.
 * REA evidence: ev_f83ae83b388f0482597fd2b4dc6773fd1807021d4b70bf513a3cb90a514eeb0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40024e60(char *param_1,char *param_2)

{
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    param_2 = param_1;
  }
  return param_2;
}


/* NanoCore 1.11, address 0x40024e6e.
 * REA evidence: ev_19436eb7462f1ed05cb84c57a81ec84d6d3ceb05c9600d70598a33983948be9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40024e6e(ulonglong param_1)

{
  if ((float)param_1 < 0.0) {
    param_1 = 0;
  }
  else if (DAT_ram_40094604 < (float)param_1) {
    return (ulonglong)(uint)DAT_ram_40094604;
  }
  return param_1;
}


/* NanoCore 1.11, address 0x40024e92.
 * REA evidence: ev_5d049ae44948ff9995cc6269d5f3cda139becb8ba3353865e9666b9452d66bac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40024e92(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = param_1 - DAT_ram_40094634;
  }
  else {
    param_1 = param_1 + DAT_ram_40094634;
  }
  return (int)param_1;
}


/* NanoCore 1.11, address 0x40024eb4.
 * REA evidence: ev_e8ebe9d9ae991d58400904c4a06451d5c26f96c129bb638e8114ff0ca4643668
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024eb4(int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)FUN_ram_40024e6e();
  iVar2 = (int)(fVar3 * DAT_ram_40094e88);
  if (iVar2 == 2) {
    if (param_1 != 0) {
      param_1 = *(int *)(param_1 + 0x20);
    }
    pcVar1 = s_Square_ram_4009559c;
  }
  else if (iVar2 < 3) {
    if (iVar2 == 1) {
      if (param_1 != 0) {
        param_1 = *(int *)(param_1 + 0x1c);
      }
      pcVar1 = &DAT_ram_40095598;
    }
    else {
      if (param_1 != 0) {
        param_1 = *(int *)(param_1 + 0x18);
      }
      pcVar1 = &DAT_ram_400955a8;
    }
  }
  else {
    if (param_1 != 0) {
      param_1 = *(int *)(param_1 + 0x24);
    }
    pcVar1 = &DAT_ram_400955a4;
  }
  FUN_ram_40024e60(param_1,pcVar1);
  return;
}


/* NanoCore 1.11, address 0x40024f1e.
 * REA evidence: ev_76c860ce5788d55a67d0f92bdf71eeded6f687f4cdf927a896f9fbe5ab97bf0a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024f1e(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    FUN_ram_400055da(param_1,param_2,&DAT_ram_400955b0,param_3,param_4);
    return;
  }
  FUN_ram_400055da(param_1,param_2,&DAT_ram_40095178,param_3,param_4);
  return;
}


/* NanoCore 1.11, address 0x40024f4c.
 * REA evidence: ev_1f7a6f9139279edc71f62c900c9f74339d37330023163158f0194c63bf0ddbba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40025066) */
/* WARNING: Removing unreachable block (ram,0x40025046) */
/* WARNING: Removing unreachable block (ram,0x40025054) */
/* WARNING: Removing unreachable block (ram,0x40024fc2) */
/* WARNING: Removing unreachable block (ram,0x40025074) */
/* WARNING: Removing unreachable block (ram,0x40024fd0) */

void FUN_ram_40024f4c(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined1 auStack_40 [24];
  
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  uVar1 = FUN_ram_40024e92();
  pcVar6 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
  if ((int)uVar1 < 0) {
    pcVar6 = s_PRE___ram_40096fa4 + 4;
  }
  uVar2 = FUN_ram_40024e60(param_4,&DAT_ram_400955b8);
  if (param_1 < DAT_ram_40094e80) {
    if (DAT_ram_40094658 <= param_1) {
      iVar7 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
      puVar4 = &DAT_ram_400951a8;
      goto LAB_ram_40025000;
    }
    if (param_1 < DAT_ram_40094e90) {
      iVar7 = FUN_ram_40024e92(param_1 * DAT_ram_40094658);
      iVar3 = iVar7 % 100;
      pcVar5 = s__s_ld__02ld_ram_40095188;
      iVar7 = iVar7 / 100;
    }
    else {
      iVar7 = FUN_ram_40024e92(param_1 * DAT_ram_40094e90);
      iVar3 = iVar7 % 10;
      pcVar5 = s__s_ld__ld_ram_4009517c;
      iVar7 = iVar7 / 10;
    }
  }
  else {
    iVar3 = FUN_ram_40024e92(param_1 / DAT_ram_40094658);
    iVar7 = iVar3 / 10;
    puVar4 = &DAT_ram_40095194;
    iVar3 = iVar3 % 10;
    if (iVar3 == 0) {
LAB_ram_40025000:
      FUN_ram_400055da(auStack_40,0x10,puVar4,pcVar6,iVar7);
      goto LAB_ram_40025008;
    }
    pcVar5 = s__s_ld__ldk_ram_4009519c;
  }
  FUN_ram_400055da(auStack_40,0x10,pcVar5,pcVar6,iVar7,iVar3);
LAB_ram_40025008:
  FUN_ram_400055da(param_2,param_3,&DAT_ram_40095170,auStack_40,uVar2);
  return;
}


