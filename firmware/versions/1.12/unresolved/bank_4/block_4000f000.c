/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4000f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4000f43e.
 * REA evidence: ev_2d406a2adb2c93673d5340513fec9bf302fe4b0c83008f4fe0fe982e83b3ada4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000f52e) */
/* WARNING: Removing unreachable block (ram,0x4000f54e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f43e(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short asStack_32 [5];
  
  uVar1 = DAT_ram_4009673c;
  do {
    do {
      if ((((DAT_ram_30051878 == '\0') || (DAT_ram_30051879 != '\0')) || (DAT_ram_3004ab12 == '\0'))
         || (DAT_ram_30051818 != '\0')) goto LAB_ram_4000f4dc;
      FUN_ram_400076b8();
      iVar2 = FUN_ram_40007e28(0x31,0x20,0,0x14,2);
      if (iVar2 != 0) {
        FUN_ram_4000b886();
        goto LAB_ram_4000f4dc;
      }
      _DAT_ram_3005187c = 0x10;
      DAT_ram_3004ac90 = 0;
      iVar2 = FUN_ram_40008bee();
    } while (iVar2 == 0);
    DAT_ram_30051879 = '\x01';
    DAT_ram_30051878 = '\0';
LAB_ram_4000f4dc:
    _DAT_ram_3004e3c0 = FUN_ram_4004196e(_DAT_ram_30053d9c,4);
    if ((_DAT_ram_3004e3c0 != 0) &&
       (asStack_32[0] = _DAT_ram_3004e3c0,
       iVar2 = FUN_ram_40038ab6(uVar1,asStack_32,_DAT_ram_30053d98,1000), 0 < iVar2)) {
      iVar2 = iVar2 * 2;
      iVar3 = (iVar2 + 5) / 10;
      _DAT_ram_3004e3c4 = (undefined2)iVar3;
      DAT_ram_3004e3c2 = 0;
      if ((0x88bc < iVar2) && (DAT_ram_3004e3c2 = 100, iVar2 < 0xa40b)) {
        DAT_ram_3004e3c2 = (undefined1)((iVar3 + -0xdac) / 7);
      }
      FUN_ram_4002e05c();
    }
    FUN_ram_40011500();
    FUN_ram_400064e4(100);
  } while( true );
}


/* NanoCore 1.12, address 0x4000f576.
 * REA evidence: ev_b3a88ca26302b5fd1a9c12d6065b04d9af16701c6b11f4ccdc7f5910b26033c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_ram_4000f576(void)

{
  return _DAT_ram_3004e3c4;
}


/* NanoCore 1.12, address 0x4000f580.
 * REA evidence: ev_b44d9766aa717fda0ed85e2e218490071e49af1fe312b9e987f7e8bb7b0339c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f580(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0; uVar1 < DAT_ram_3005df48; uVar1 = uVar1 + 1 & 0xff) {
    iVar2 = *(int *)((uVar1 + 0x410) * 4 + 0x3005cee8);
    if ((param_1 == 8) && (param_2 != 0)) {
      if (((iVar2 != 0) && (*(code **)(iVar2 + 0xc) != (code *)0x0)) &&
         (*(char *)(param_2 + 2) == *(char *)(iVar2 + 0x18))) {
        (**(code **)(iVar2 + 0xc))(8);
      }
    }
    else if ((iVar2 != 0) && (*(code **)(iVar2 + 0xc) != (code *)0x0)) {
      (**(code **)(iVar2 + 0xc))(param_1);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4000f648.
 * REA evidence: ev_a6ae1d9b1a9afa65610cb62c8466d748b55db1c45ab2330c6548e0a345d5ca76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f648(uint param_1)

{
  if (*(code **)(&DAT_ram_3005df54 + (param_1 & 0x7f) * 0xc) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x4000f660 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_ram_3005df54 + (param_1 & 0x7f) * 0xc))();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4000f668.
 * REA evidence: ev_932ce7500a704372ff3fb455f5c0dcb3129235786718253690beb2d7469185a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f668(uint param_1)

{
  if (*(code **)(&DAT_ram_3005dfb4 + (param_1 & 0x7f) * 0xc) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x4000f680 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_ram_3005dfb4 + (param_1 & 0x7f) * 0xc))();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4000f68a.
 * REA evidence: ev_2876f9a9fe88185e498e17cb40c8abf174ba26543d00efb7c7caba33a93a4e86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f68a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = memset(&DAT_ram_3005cee0,0,0x1140);
  DAT_ram_3005df4c = 0x80;
  *(undefined4 *)(iVar1 + 0x30) = param_1;
  _DAT_ram_3005df54 = &LAB_ram_4000f5fc;
  _DAT_ram_3005dfb4 = &LAB_ram_4000fe78;
  return;
}


/* NanoCore 1.12, address 0x4000f6d8.
 * REA evidence: ev_fb5a3771b7554efbc9a82b05ed4b6eabe1fa92c59266f7ed68140a46608a90fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f6d8(int param_1)

{
  *(byte *)(param_1 + 0x18) = DAT_ram_3005df48;
  *(int *)((DAT_ram_3005df48 + 0x410) * 4 + 0x3005cee8) = param_1;
  DAT_ram_3005df48 = DAT_ram_3005df48 + 1;
  return;
}


/* NanoCore 1.12, address 0x4000f702.
 * REA evidence: ev_96d770598d81439bd702b79e21cb70237596014757ce7f98d8d1ac3a283ce803
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f702(byte *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  if ((char)bVar1 < '\0') {
    iVar2 = (bVar1 & 0x7f) * 0xc;
    (&DAT_ram_3005df4c)[iVar2] = bVar1;
    *(undefined4 *)(&DAT_ram_3005df54 + iVar2) = uVar3;
    return;
  }
  iVar2 = (uint)bVar1 * 0xc;
  *(byte *)(iVar2 + 0x3005dfac) = bVar1;
  *(undefined4 *)(&DAT_ram_3005dfb4 + iVar2) = uVar3;
  return;
}


/* NanoCore 1.12, address 0x4000f742.
 * REA evidence: ev_c69cde477d516d83604596cbbbeddfb41189160c4d7607a2257f114578d8415f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_40011e98(void)

{
  undefined4 uVar1;
  int iVar2;
  
  memset(&DAT_ram_3005f1c0,0,0x140);
  FUN_ram_40012f42();
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 2;
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 & 0xfffffdff;
  fence();
  _DAT_ram_10200008 = 0x1407;
  iVar2 = 0x30d41;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) goto LAB_ram_40011f38;
    fence();
  } while ((_DAT_ram_10200000 & 4) == 0);
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 1;
  iVar2 = 0x30d41;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    fence();
  }
LAB_ram_40011f38:
  FUN_ram_4001158c();
  fence();
  _DAT_ram_10200028 = 0;
  fence();
  _DAT_ram_1020002c = 0;
  fence();
  fence();
  _DAT_ram_10200200 = _DAT_ram_10200200 & 0xfffffffc | 1;
  FUN_ram_40011710(0x10);
  uVar1 = FUN_ram_400115e2();
  fence();
  _DAT_ram_1020020c = 0;
  fence();
  _DAT_ram_10200210 = 0;
  fence();
  _DAT_ram_10200218 = 0;
  fence();
  fence();
  _DAT_ram_10200010 = 0xbfffffff;
  fence();
  _DAT_ram_10200014 = 0x803c3800;
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 0x3800;
  fence();
  _DAT_ram_10200018 = 0x119;
  fence();
  _DAT_ram_10200020 = 0x1000119;
  fence();
  _DAT_ram_10200028 = 0x1000219;
  fence();
  _DAT_ram_1020002c = 0xdd0319;
  FUN_ram_40011d68();
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 0x200;
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 & 0xfffffffd;
  return uVar1;
}


/* NanoCore 1.12, address 0x4000f746.
 * REA evidence: ev_4871635574ff91944b12d2518d9d72533d6ecabc05037366dbb12ad7597186ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000f746(void)

{
  FUN_ram_40011746();
  return 0;
}


/* NanoCore 1.12, address 0x4000f756.
 * REA evidence: ev_341aa9b22a6c4a40c9f1b04fbaf7d10c342a9abeb83e022660dcfb28d4fcfd2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f756(void)

{
  DAT_ram_3005df25 = 0;
  FUN_ram_40011030(6);
  return;
}


/* NanoCore 1.12, address 0x4000f764.
 * REA evidence: ev_89927a6a5ba2a8d628907ad7d6bf72e7fd828ea0af322c70966b663554eafcc2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f764(void)

{
  if (DAT_ram_3005df21 != '\0') {
    DAT_ram_3005df25 = 1;
    FUN_ram_40011030(5);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4000f780.
 * REA evidence: ev_4caaff019a409137d6803674a8f4ff3059505696557c9e0e8328c61cd2fbc9c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f780(void)

{
  uint3 uStack_18;
  undefined1 uStack_15;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  FUN_ram_400117c8(0);
  _DAT_ram_3005df20 = 0;
  _uStack_18 = 0x800507;
  uStack_14 = 0x40;
  uStack_12 = 0;
  FUN_ram_400117ec(&uStack_18);
  uStack_18 = (uint3)(ushort)uStack_18;
  FUN_ram_400117ec(&uStack_18);
  FUN_ram_4000f580(1,0);
  FUN_ram_40011030(1);
  return;
}


/* NanoCore 1.12, address 0x4000f7cc.
 * REA evidence: ev_e5fd4879a67d1fac82427872d118f02876773a51306160b283c861047a3fddb8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4000f7cc(void)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  code *pcVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  ushort uVar18;
  
  uVar10 = (uint)DAT_ram_3005cee0;
  bVar16 = DAT_ram_3005cee4;
  if ((uVar10 & 0x60) == 0x20) {
    if ((uVar10 & 3) == 1) {
      for (uVar10 = 0; (uVar10 & 0xff) < (uint)DAT_ram_3005df48; uVar10 = uVar10 + 1) {
        puVar8 = *(undefined4 **)(uVar10 * 4 + 0x3005df28);
        if (((puVar8 != (undefined4 *)0x0) && ((code *)*puVar8 != (code *)0x0)) &&
           (*(byte *)(puVar8 + 6) == DAT_ram_3005cee4)) {
          iVar4 = (*(code *)*puVar8)(&DAT_ram_3005cee0,&DAT_ram_3005cf00,&DAT_ram_3005cf08);
          goto LAB_ram_4000fcce;
        }
      }
    }
    else if ((uVar10 & 3) == 2) {
      uVar10 = 0;
LAB_ram_4000fcf0:
      if ((uVar10 & 0xff) < (uint)DAT_ram_3005df48) {
        iVar4 = *(int *)(uVar10 * 4 + 0x3005df28);
        if ((iVar4 == 0) || (pcVar12 = *(code **)(iVar4 + 4), pcVar12 == (code *)0x0))
        goto LAB_ram_4000fd1e;
        iVar4 = (*pcVar12)(&DAT_ram_3005cee0,&DAT_ram_3005cf00,&DAT_ram_3005cf08);
LAB_ram_4000fcce:
        if (-1 < iVar4) {
          return true;
        }
      }
    }
    FUN_ram_4003390a(&DAT_ram_400998a8);
    pcVar7 = s_class_request_error_ram_400998ec;
    goto LAB_ram_4000fa74;
  }
  if ((uVar10 & 0x60) == 0x40) {
    if (_DAT_ram_3005cf14 == (undefined4 *)0x0) {
      if ((_DAT_ram_3005cf18 == (undefined4 *)0x0) ||
         (DAT_ram_3005cee1 != *(byte *)((int)_DAT_ram_3005cf18 + 6))) goto LAB_ram_4000fe12;
      if (_DAT_ram_3005cee4 == 7) {
        FUN_ram_4000303c(_DAT_ram_3005cf00,*_DAT_ram_3005cf18,*(undefined2 *)(_DAT_ram_3005cf18 + 1)
                        );
        _DAT_ram_3005cf08 = (uint)*(ushort *)(_DAT_ram_3005cf18 + 1);
        return true;
      }
LAB_ram_4000fd44:
      FUN_ram_4003390a(&DAT_ram_400998a8);
      FUN_ram_40033920(s_unknown_vendor_code_ram_40099904);
      FUN_ram_4003390a(&DAT_ram_400998cc);
    }
    else {
      if (DAT_ram_3005cee1 == *(byte *)(_DAT_ram_3005cf14 + 1)) {
        if (_DAT_ram_3005cee4 == 4) {
          puVar8 = (undefined4 *)_DAT_ram_3005cf14[2];
LAB_ram_4000fd80:
          uVar6 = *puVar8;
          FUN_ram_4000303c(_DAT_ram_3005cf00,puVar8,uVar6);
          _DAT_ram_3005cf08 = uVar6;
          return true;
        }
        if (_DAT_ram_3005cee4 == 5) {
          puVar8 = *(undefined4 **)(_DAT_ram_3005cf14[3] + (uint)_DAT_ram_3005cee2 * 4);
          goto LAB_ram_4000fd80;
        }
        goto LAB_ram_4000fd44;
      }
LAB_ram_4000fe12:
      for (uVar10 = 0; uVar10 < DAT_ram_3005df48; uVar10 = uVar10 + 1 & 0xff) {
        iVar4 = *(int *)((uVar10 + 0x410) * 4 + 0x3005cee8);
        if (((iVar4 != 0) && (pcVar12 = *(code **)(iVar4 + 8), pcVar12 != (code *)0x0)) &&
           (iVar4 = (*pcVar12)(&DAT_ram_3005cee0,&DAT_ram_3005cf00,&DAT_ram_3005cf08), iVar4 == 0))
        {
          return true;
        }
      }
    }
    FUN_ram_4003390a(&DAT_ram_400998a8);
    pcVar7 = s_vendor_request_error_ram_4009991c;
    goto LAB_ram_4000fa74;
  }
  if ((DAT_ram_3005cee0 & 0x60) != 0) {
    return false;
  }
  if (((DAT_ram_3005cee1 == 6) && (_DAT_ram_3005cee2 == 0x600)) && (DAT_ram_3005df27 < 3)) {
    return false;
  }
  uVar10 = uVar10 & 3;
  if (uVar10 != 1) {
    if (uVar10 == 2) {
      if (DAT_ram_3005df20 != '\0') {
        if (DAT_ram_3005cee1 == 1) {
          if (_DAT_ram_3005cee2 == 0) {
            FUN_ram_400120a4(DAT_ram_3005cee4);
            return true;
          }
        }
        else {
          if (DAT_ram_3005cee1 != 3) {
            if (DAT_ram_3005cee1 == 0) {
              *_DAT_ram_3005cf00 = 0;
              _DAT_ram_3005cf00[1] = 0;
              _DAT_ram_3005cf08 = uVar10;
              return true;
            }
            goto switchD_ram_4000f858_caseD_2;
          }
          if (_DAT_ram_3005cee2 == 0) {
            FUN_ram_4003390a(&DAT_ram_400998a8);
            FUN_ram_4003390a(s_ep__02x_set_halt_ram_400998b8,bVar16);
            FUN_ram_4003390a(&DAT_ram_400998cc);
            FUN_ram_4001204e(bVar16);
            _DAT_ram_3005cf08 = 0;
            return true;
          }
        }
LAB_ram_4000fa58:
        _DAT_ram_3005cf08 = 0;
      }
      goto switchD_ram_4000f858_caseD_2;
    }
    if ((DAT_ram_3005cee0 & 3) != 0) goto switchD_ram_4000f858_caseD_2;
    uVar10 = (uint)_DAT_ram_3005cee2;
    cVar5 = (char)_DAT_ram_3005cee2;
    switch(DAT_ram_3005cee1) {
    case 0:
      *_DAT_ram_3005cf00 = 0;
      if (DAT_ram_3005df22 != '\0') {
        *_DAT_ram_3005cf00 = *_DAT_ram_3005cf00 | 1;
      }
      if (DAT_ram_3005df24 != '\0') {
        *_DAT_ram_3005cf00 = *_DAT_ram_3005cf00 | 2;
      }
LAB_ram_4000f890:
      _DAT_ram_3005cf00[1] = 0;
      _DAT_ram_3005cf08 = 2;
      return true;
    case 1:
    case 3:
      if (uVar10 == 1) {
        if (DAT_ram_3005cee1 == 3) {
          uVar6 = 9;
          DAT_ram_3005df24 = cVar5;
        }
        else {
          DAT_ram_3005df24 = '\0';
          uVar6 = 10;
        }
        FUN_ram_40011030(uVar6);
      }
      break;
    case 5:
      DAT_ram_3005df21 = cVar5;
      FUN_ram_400117c8(uVar10 & 0xff);
      break;
    case 6:
      uVar3 = _DAT_ram_3005cee2 >> 8;
      uVar10 = uVar10 & 0xff;
      if (uVar3 == 3) {
        if (uVar10 == 0xee) {
          if (_DAT_ram_3005cf14 != (undefined4 *)0x0) {
            FUN_ram_4000303c(_DAT_ram_3005cf00,(undefined1 *)*_DAT_ram_3005cf14,
                             *(undefined1 *)*_DAT_ram_3005cf14);
            pbVar11 = (byte *)*_DAT_ram_3005cf14;
            pbVar13 = _DAT_ram_3005cf00;
LAB_ram_4000f928:
            _DAT_ram_3005cf00 = pbVar13;
            _DAT_ram_3005cf08 = (uint)*pbVar11;
            return true;
          }
        }
        else {
LAB_ram_4000f950:
          uVar9 = 0;
          for (pbVar11 = _DAT_ram_3005cf10; uVar14 = (uint)*pbVar11, uVar14 != 0;
              pbVar11 = pbVar11 + uVar14) {
            if (pbVar11[1] == uVar3) {
              if (uVar10 == uVar9) {
                _DAT_ram_3005cf08 = uVar14;
                if (uVar3 == 2) {
                  DAT_ram_3005df22 = (pbVar11[7] & 0xc0) != 0;
                  DAT_ram_3005df23 = (byte)(((uint)pbVar11[7] << 0x1a) >> 0x1f);
                  _DAT_ram_3005cf08 = (uint)*(ushort *)(pbVar11 + 2);
                }
                FUN_ram_4000303c(_DAT_ram_3005cf00,pbVar11,_DAT_ram_3005cf08);
                return true;
              }
              uVar9 = uVar9 + 1;
            }
          }
          FUN_ram_4003390a(&DAT_ram_400998a8);
          FUN_ram_4003390a(s_descriptor_<type:0x_02x,index:0x_ram_40099934,uVar3,uVar10);
          FUN_ram_4003390a(&DAT_ram_400998cc);
        }
      }
      else if (uVar3 == 0xf) {
        if (_DAT_ram_3005cf1c != (undefined4 *)0x0) {
          FUN_ram_4000303c(_DAT_ram_3005cf00,*_DAT_ram_3005cf1c,_DAT_ram_3005cf1c[1]);
          _DAT_ram_3005cf08 = _DAT_ram_3005cf1c[1];
          return true;
        }
      }
      else if (uVar3 < 4) goto LAB_ram_4000f950;
    default:
switchD_ram_4000f858_caseD_2:
      FUN_ram_4003390a(&DAT_ram_400998a8);
      pcVar7 = s_standard_request_error_ram_400998d4;
LAB_ram_4000fa74:
      FUN_ram_40033920(pcVar7);
      FUN_ram_4003390a(&DAT_ram_400998cc);
      return false;
    case 8:
      _DAT_ram_3005cf00 = &DAT_ram_3005df20;
      _DAT_ram_3005cf08 = 1;
      return true;
    case 9:
      uVar14 = 0;
      uVar9 = 0;
      bVar2 = false;
      uVar15 = 0xff;
      bVar16 = 0xff;
      pbVar11 = _DAT_ram_3005cf10;
      do {
        if (*pbVar11 == 0) break;
        bVar17 = pbVar11[1];
        if (bVar17 == 4) {
          bVar16 = pbVar11[3];
        }
        else if (bVar17 == 5) {
          if (((uVar10 & 0xff) == uVar15) && (bVar16 == 0)) {
            iVar4 = FUN_ram_400117ec(pbVar11);
            bVar2 = iVar4 == 0;
          }
        }
        else if ((bVar17 == 2) && (uVar15 = (uint)pbVar11[5], (uVar10 & 0xff) == uVar15)) {
          uVar14 = 0;
          uVar9 = (uint)*(ushort *)(pbVar11 + 2);
          bVar2 = true;
        }
        pbVar11 = pbVar11 + *pbVar11;
        uVar14 = uVar14 + *pbVar11;
      } while ((uVar14 < uVar9) || (uVar9 == 0));
      if (bVar2 != false) {
        DAT_ram_3005df25 = 0;
        DAT_ram_3005df26 = 1;
        DAT_ram_3005df20 = cVar5;
        FUN_ram_4000f580(7,0);
        FUN_ram_40011030(7);
        _DAT_ram_3005cf08 = 0;
        return bVar2;
      }
      goto LAB_ram_4000fa58;
    }
    _DAT_ram_3005cf08 = 0;
    return true;
  }
  if (DAT_ram_3005df20 != '\0') {
    if (DAT_ram_3005cee1 == 10) {
      *_DAT_ram_3005cf00 = 0;
      _DAT_ram_3005cf08 = uVar10;
      return true;
    }
    if (DAT_ram_3005cee1 < 0xb) {
      if (DAT_ram_3005cee1 == 0) {
        *_DAT_ram_3005cf00 = 0;
        goto LAB_ram_4000f890;
      }
      if (DAT_ram_3005cee1 == 6) {
        if (_DAT_ram_3005cee2 >> 8 == 0x21) {
          bVar16 = 0xff;
          uVar10 = 0;
          uVar9 = 0;
          pbVar11 = _DAT_ram_3005cf10;
          do {
            if (*pbVar11 == 0) break;
            bVar17 = pbVar11[1];
            if (bVar17 == 4) {
              bVar16 = pbVar11[2];
            }
            else if (bVar17 == 0x21) {
              pbVar13 = pbVar11;
              if (DAT_ram_3005cee4 == bVar16) goto LAB_ram_4000f928;
            }
            else if (bVar17 == 2) {
              uVar9 = (uint)*(ushort *)(pbVar11 + 2);
              uVar10 = 0;
            }
            pbVar11 = pbVar11 + *pbVar11;
            uVar10 = uVar10 + *pbVar11;
          } while ((uVar10 < uVar9) || (uVar9 == 0));
        }
        else {
          if (_DAT_ram_3005cee2 >> 8 != 0x22) {
            return true;
          }
          for (uVar10 = 0; (uVar10 & 0xff) < (uint)DAT_ram_3005df48; uVar10 = uVar10 + 1) {
            iVar4 = *(int *)(uVar10 * 4 + 0x3005df28);
            if ((iVar4 != 0) && (*(byte *)(iVar4 + 0x18) == DAT_ram_3005cee4)) {
              FUN_ram_4000303c(_DAT_ram_3005cf00,*(undefined4 *)(iVar4 + 0x10),
                               *(undefined4 *)(iVar4 + 0x14));
              _DAT_ram_3005cf08 = *(undefined4 *)(iVar4 + 0x14);
              return true;
            }
          }
        }
      }
    }
    else if (DAT_ram_3005cee1 == 0xb) {
      uVar3 = _DAT_ram_3005cee2 & 0xff;
      uVar9 = 0;
      uVar10 = 0;
      bVar17 = 0xff;
      uVar18 = 0xff;
      pbVar13 = (byte *)0x0;
      pbVar11 = _DAT_ram_3005cf10;
      do {
        if (*pbVar11 == 0) break;
        bVar1 = pbVar11[1];
        if (bVar1 == 4) {
          bVar17 = pbVar11[2];
          uVar18 = (ushort)pbVar11[3];
          if ((bVar16 == bVar17) && (uVar3 == uVar18)) {
            pbVar13 = pbVar11;
          }
        }
        else if (bVar1 == 5) {
          if (bVar16 == bVar17) {
            if (uVar3 == uVar18) {
              FUN_ram_400117ec(pbVar11);
            }
            else {
              FUN_ram_400119dc(pbVar11[2]);
            }
          }
        }
        else if (bVar1 == 2) {
          uVar9 = 0;
          uVar10 = (uint)*(ushort *)(pbVar11 + 2);
        }
        pbVar11 = pbVar11 + *pbVar11;
        uVar9 = uVar9 + *pbVar11;
      } while ((uVar9 < uVar10) || (uVar10 == 0));
      if (pbVar13 != (byte *)0x0) {
        FUN_ram_4000f580(8,pbVar13);
        _DAT_ram_3005cf08 = 0;
        return true;
      }
    }
  }
  goto switchD_ram_4000f858_caseD_2;
LAB_ram_4000fd1e:
  uVar10 = uVar10 + 1;
  goto LAB_ram_4000fcf0;
}


/* NanoCore 1.12, address 0x4000feca.
 * REA evidence: ev_ee497feda2fef54753c93b47d7ca2659aedb97e124ba2c28c9c85e2ec90b0ebf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000feca(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_ram_4000303c(&DAT_ram_3005cee0,param_1,8);
  uVar2 = (uint)_DAT_ram_3005cee6;
  if ((uVar2 < 0x1001) || (DAT_ram_3005cee0 < '\0')) {
    _DAT_ram_3005cf00 = 0x3005cf20;
    DAT_ram_3005cf0c = 0;
    _DAT_ram_3005cf04 = uVar2;
    _DAT_ram_3005cf08 = uVar2;
    if ((uVar2 != 0) && (-1 < DAT_ram_3005cee0)) {
      FUN_ram_400127ce(0);
      return;
    }
    iVar1 = FUN_ram_4000f7cc();
    if (iVar1 != 0) {
      _DAT_ram_3005cf04 = (uint)_DAT_ram_3005cee6;
      if (_DAT_ram_3005cf08 < _DAT_ram_3005cee6) {
        _DAT_ram_3005cf04 = _DAT_ram_3005cf08;
      }
      if (0x1000 < _DAT_ram_3005cf04) {
        FUN_ram_4003390a(&DAT_ram_400998a8);
        FUN_ram_40033920(s_Request_buffer_too_small_ram_40099990);
        FUN_ram_4003390a(&DAT_ram_400998cc);
        return;
      }
      FUN_ram_4001236c(0x80,_DAT_ram_3005cf00);
      if ((_DAT_ram_3005cf08 < _DAT_ram_3005cee6) && ((_DAT_ram_3005cf08 & 0x3f) == 0)) {
        DAT_ram_3005cf0c = 1;
      }
      return;
    }
  }
  else {
    FUN_ram_4003390a(&DAT_ram_400998a8);
    FUN_ram_40033920(s_Request_buffer_too_small_ram_40099990);
    FUN_ram_4003390a(&DAT_ram_400998cc);
  }
  FUN_ram_4001204e(0x80);
  return;
}


/* NanoCore 1.12, address 0x4000ffdc.
 * REA evidence: ev_62262e7822e88cee43c988f37efa931323d46be2bf44e818673d8c6ecc433f10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000ffdc(undefined4 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = FUN_ram_4001009e;
  if (param_2 < 0x200) {
    param_1[1] = FUN_ram_40010026;
  }
  else {
    param_1[1] = 0;
  }
  param_1[3] = &DAT_ram_4000ffc0;
  param_1[2] = 0;
  _DAT_ram_3005e026 = (short)param_2;
  _DAT_ram_3005e020 = param_3;
  DAT_ram_3005e024 = param_4;
  return;
}


