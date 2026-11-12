/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4000f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4000f032.
 * REA evidence: ev_bf8791b534bcf7d7018c76595029b7a35745c95dacf1667de192738dd7ea1a34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_4001178c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  memset(&DAT_ram_3005e240,0,0x140);
  FUN_ram_4001268e();
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
    if (iVar2 == 0) goto LAB_ram_4001182c;
    fence();
  } while ((_DAT_ram_10200000 & 4) == 0);
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 1;
  iVar2 = 0x30d41;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    fence();
  }
LAB_ram_4001182c:
  FUN_ram_40010e80();
  fence();
  _DAT_ram_10200028 = 0;
  fence();
  _DAT_ram_1020002c = 0;
  fence();
  fence();
  _DAT_ram_10200200 = _DAT_ram_10200200 | 1;
  FUN_ram_40011004(0x10);
  uVar1 = FUN_ram_40010ed6();
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
  FUN_ram_4001165c();
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 0x200;
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 & 0xfffffffd;
  return uVar1;
}


/* NanoCore 1.11, address 0x4000f036.
 * REA evidence: ev_d584069a5b9efed8d7db52c819b3aafd1a91190468fcfd0dfe14000138ea8d7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000f036(void)

{
  FUN_ram_4001103a();
  return 0;
}


/* NanoCore 1.11, address 0x4000f046.
 * REA evidence: ev_bfdd539ae8a9e0bdcd79350307835f02cbc27cf852e03de03978aa37b98648eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f046(void)

{
  if (DAT_ram_3005cfa1 != '\0') {
    DAT_ram_3005cfa5 = 1;
    FUN_ram_40010938(5);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4000f062.
 * REA evidence: ev_52cffa1a99f96eccb601f334b0e38b545ba4f2afd12f7601b1bc6cd47451fe40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f062(void)

{
  uint3 uStack_18;
  undefined1 uStack_15;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  FUN_ram_400110bc(0);
  _DAT_ram_3005cfa0 = 0;
  _uStack_18 = 0x800507;
  uStack_14 = 0x40;
  uStack_12 = 0;
  FUN_ram_400110e0(&uStack_18);
  uStack_18 = (uint3)(ushort)uStack_18;
  FUN_ram_400110e0(&uStack_18);
  FUN_ram_4000ee7a(1,0);
  FUN_ram_40010938(1);
  return;
}


/* NanoCore 1.11, address 0x4000f0ae.
 * REA evidence: ev_a34922b0be927c029ba7957fbde70f91c4fd75fdafe5e374a41e9316bec46793
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4000f0ae(void)

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
  
  uVar10 = (uint)DAT_ram_3005bf60;
  bVar16 = DAT_ram_3005bf64;
  if ((uVar10 & 0x60) == 0x20) {
    if ((uVar10 & 3) == 1) {
      for (uVar10 = 0; (uVar10 & 0xff) < (uint)DAT_ram_3005cfc8; uVar10 = uVar10 + 1) {
        puVar8 = *(undefined4 **)(uVar10 * 4 + 0x3005cfa8);
        if (((puVar8 != (undefined4 *)0x0) && ((code *)*puVar8 != (code *)0x0)) &&
           (*(byte *)(puVar8 + 6) == DAT_ram_3005bf64)) {
          iVar4 = (*(code *)*puVar8)(&DAT_ram_3005bf60,&DAT_ram_3005bf80,&DAT_ram_3005bf88);
          goto LAB_ram_4000f5d6;
        }
      }
    }
    else if ((uVar10 & 3) == 2) {
      uVar10 = 0;
LAB_ram_4000f5f8:
      if ((uVar10 & 0xff) < (uint)DAT_ram_3005cfc8) {
        iVar4 = *(int *)(uVar10 * 4 + 0x3005cfa8);
        if ((iVar4 == 0) || (pcVar12 = *(code **)(iVar4 + 4), pcVar12 == (code *)0x0))
        goto LAB_ram_4000f626;
        iVar4 = (*pcVar12)(&DAT_ram_3005bf60,&DAT_ram_3005bf80,&DAT_ram_3005bf88);
LAB_ram_4000f5d6:
        if (-1 < iVar4) {
          return true;
        }
      }
    }
    FUN_ram_40032a1a(&DAT_ram_40094720);
    pcVar7 = s_class_request_error_ram_4009477c;
    goto LAB_ram_4000f356;
  }
  if ((uVar10 & 0x60) == 0x40) {
    if (_DAT_ram_3005bf94 == (undefined4 *)0x0) {
      if ((_DAT_ram_3005bf98 == (undefined4 *)0x0) ||
         (DAT_ram_3005bf61 != *(byte *)((int)_DAT_ram_3005bf98 + 6))) goto LAB_ram_4000f71a;
      if (_DAT_ram_3005bf64 == 7) {
        FUN_ram_4000304c(_DAT_ram_3005bf80,*_DAT_ram_3005bf98,*(undefined2 *)(_DAT_ram_3005bf98 + 1)
                        );
        _DAT_ram_3005bf88 = (uint)*(ushort *)(_DAT_ram_3005bf98 + 1);
        return true;
      }
LAB_ram_4000f64c:
      FUN_ram_40032a1a(&DAT_ram_40094720);
      FUN_ram_40032a30(s_unknown_vendor_code_ram_40094794);
      FUN_ram_40032a1a(&DAT_ram_40094748);
    }
    else {
      if (DAT_ram_3005bf61 == *(byte *)(_DAT_ram_3005bf94 + 1)) {
        if (_DAT_ram_3005bf64 == 4) {
          puVar8 = (undefined4 *)_DAT_ram_3005bf94[2];
LAB_ram_4000f688:
          uVar6 = *puVar8;
          FUN_ram_4000304c(_DAT_ram_3005bf80,puVar8,uVar6);
          _DAT_ram_3005bf88 = uVar6;
          return true;
        }
        if (_DAT_ram_3005bf64 == 5) {
          puVar8 = *(undefined4 **)(_DAT_ram_3005bf94[3] + (uint)_DAT_ram_3005bf62 * 4);
          goto LAB_ram_4000f688;
        }
        goto LAB_ram_4000f64c;
      }
LAB_ram_4000f71a:
      for (uVar10 = 0; uVar10 < DAT_ram_3005cfc8; uVar10 = uVar10 + 1 & 0xff) {
        iVar4 = *(int *)((uVar10 + 0x410) * 4 + 0x3005bf68);
        if (((iVar4 != 0) && (pcVar12 = *(code **)(iVar4 + 8), pcVar12 != (code *)0x0)) &&
           (iVar4 = (*pcVar12)(&DAT_ram_3005bf60,&DAT_ram_3005bf80,&DAT_ram_3005bf88), iVar4 == 0))
        {
          return true;
        }
      }
    }
    FUN_ram_40032a1a(&DAT_ram_40094720);
    pcVar7 = s_vendor_request_error_ram_400947ac;
    goto LAB_ram_4000f356;
  }
  if ((DAT_ram_3005bf60 & 0x60) != 0) {
    return false;
  }
  if (((DAT_ram_3005bf61 == 6) && (_DAT_ram_3005bf62 == 0x600)) && (DAT_ram_3005cfa7 < 3)) {
    return false;
  }
  uVar10 = uVar10 & 3;
  if (uVar10 != 1) {
    if (uVar10 == 2) {
      if (DAT_ram_3005cfa0 != '\0') {
        if (DAT_ram_3005bf61 == 1) {
          if (_DAT_ram_3005bf62 == 0) {
            FUN_ram_40032a1a(&DAT_ram_40094720);
            FUN_ram_40032a1a(s_ep__02x_clear_halt_ram_40094730,bVar16);
            FUN_ram_40032a1a(&DAT_ram_40094748);
            FUN_ram_40011996(bVar16);
            return true;
          }
        }
        else {
          if (DAT_ram_3005bf61 != 3) {
            if (DAT_ram_3005bf61 == 0) {
              *_DAT_ram_3005bf80 = 0;
              _DAT_ram_3005bf80[1] = 0;
              _DAT_ram_3005bf88 = uVar10;
              return true;
            }
            goto switchD_ram_4000f13a_caseD_2;
          }
          if (_DAT_ram_3005bf62 == 0) {
            FUN_ram_40032a1a(&DAT_ram_40094720);
            FUN_ram_40032a1a(s_ep__02x_set_halt_ram_40094750,bVar16);
            FUN_ram_40032a1a(&DAT_ram_40094748);
            FUN_ram_40011940(bVar16);
            _DAT_ram_3005bf88 = 0;
            return true;
          }
        }
LAB_ram_4000f33a:
        _DAT_ram_3005bf88 = 0;
      }
      goto switchD_ram_4000f13a_caseD_2;
    }
    if ((DAT_ram_3005bf60 & 3) != 0) goto switchD_ram_4000f13a_caseD_2;
    uVar10 = (uint)_DAT_ram_3005bf62;
    cVar5 = (char)_DAT_ram_3005bf62;
    switch(DAT_ram_3005bf61) {
    case 0:
      *_DAT_ram_3005bf80 = 0;
      if (DAT_ram_3005cfa2 != '\0') {
        *_DAT_ram_3005bf80 = *_DAT_ram_3005bf80 | 1;
      }
      if (DAT_ram_3005cfa4 != '\0') {
        *_DAT_ram_3005bf80 = *_DAT_ram_3005bf80 | 2;
      }
LAB_ram_4000f172:
      _DAT_ram_3005bf80[1] = 0;
      _DAT_ram_3005bf88 = 2;
      return true;
    case 1:
    case 3:
      if (uVar10 == 1) {
        if (DAT_ram_3005bf61 == 3) {
          uVar6 = 9;
          DAT_ram_3005cfa4 = cVar5;
        }
        else {
          DAT_ram_3005cfa4 = '\0';
          uVar6 = 10;
        }
        FUN_ram_40010938(uVar6);
      }
      break;
    case 5:
      DAT_ram_3005cfa1 = cVar5;
      FUN_ram_400110bc(uVar10 & 0xff);
      break;
    case 6:
      uVar3 = _DAT_ram_3005bf62 >> 8;
      uVar10 = uVar10 & 0xff;
      if (uVar3 == 3) {
        if (uVar10 == 0xee) {
          if (_DAT_ram_3005bf94 != (undefined4 *)0x0) {
            FUN_ram_4000304c(_DAT_ram_3005bf80,(undefined1 *)*_DAT_ram_3005bf94,
                             *(undefined1 *)*_DAT_ram_3005bf94);
            pbVar11 = (byte *)*_DAT_ram_3005bf94;
            pbVar13 = _DAT_ram_3005bf80;
LAB_ram_4000f20a:
            _DAT_ram_3005bf80 = pbVar13;
            _DAT_ram_3005bf88 = (uint)*pbVar11;
            return true;
          }
        }
        else {
LAB_ram_4000f232:
          uVar9 = 0;
          for (pbVar11 = _DAT_ram_3005bf90; uVar14 = (uint)*pbVar11, uVar14 != 0;
              pbVar11 = pbVar11 + uVar14) {
            if (pbVar11[1] == uVar3) {
              if (uVar10 == uVar9) {
                _DAT_ram_3005bf88 = uVar14;
                if (uVar3 == 2) {
                  DAT_ram_3005cfa2 = (pbVar11[7] & 0xc0) != 0;
                  DAT_ram_3005cfa3 = (byte)(((uint)pbVar11[7] << 0x1a) >> 0x1f);
                  _DAT_ram_3005bf88 = (uint)*(ushort *)(pbVar11 + 2);
                }
                FUN_ram_4000304c(_DAT_ram_3005bf80,pbVar11,_DAT_ram_3005bf88);
                return true;
              }
              uVar9 = uVar9 + 1;
            }
          }
          FUN_ram_40032a1a(&DAT_ram_40094720);
          FUN_ram_40032a1a(s_descriptor_<type:0x_02x,index:0x_ram_400947c4,uVar3,uVar10);
          FUN_ram_40032a1a(&DAT_ram_40094748);
        }
      }
      else if (uVar3 == 0xf) {
        if (_DAT_ram_3005bf9c != (undefined4 *)0x0) {
          FUN_ram_4000304c(_DAT_ram_3005bf80,*_DAT_ram_3005bf9c,_DAT_ram_3005bf9c[1]);
          _DAT_ram_3005bf88 = _DAT_ram_3005bf9c[1];
          return true;
        }
      }
      else if (uVar3 < 4) goto LAB_ram_4000f232;
    default:
switchD_ram_4000f13a_caseD_2:
      FUN_ram_40032a1a(&DAT_ram_40094720);
      pcVar7 = s_standard_request_error_ram_40094764;
LAB_ram_4000f356:
      FUN_ram_40032a30(pcVar7);
      FUN_ram_40032a1a(&DAT_ram_40094748);
      return false;
    case 8:
      _DAT_ram_3005bf80 = &DAT_ram_3005cfa0;
      _DAT_ram_3005bf88 = 1;
      return true;
    case 9:
      uVar14 = 0;
      uVar9 = 0;
      bVar2 = false;
      uVar15 = 0xff;
      bVar16 = 0xff;
      pbVar11 = _DAT_ram_3005bf90;
      do {
        if (*pbVar11 == 0) break;
        bVar17 = pbVar11[1];
        if (bVar17 == 4) {
          bVar16 = pbVar11[3];
        }
        else if (bVar17 == 5) {
          if (((uVar10 & 0xff) == uVar15) && (bVar16 == 0)) {
            iVar4 = FUN_ram_400110e0(pbVar11);
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
        DAT_ram_3005cfa5 = 0;
        DAT_ram_3005cfa6 = 1;
        DAT_ram_3005cfa0 = cVar5;
        FUN_ram_4000ee7a(7,0);
        FUN_ram_40010938(7);
        _DAT_ram_3005bf88 = 0;
        return bVar2;
      }
      goto LAB_ram_4000f33a;
    }
    _DAT_ram_3005bf88 = 0;
    return true;
  }
  if (DAT_ram_3005cfa0 != '\0') {
    if (DAT_ram_3005bf61 == 10) {
      *_DAT_ram_3005bf80 = 0;
      _DAT_ram_3005bf88 = uVar10;
      return true;
    }
    if (DAT_ram_3005bf61 < 0xb) {
      if (DAT_ram_3005bf61 == 0) {
        *_DAT_ram_3005bf80 = 0;
        goto LAB_ram_4000f172;
      }
      if (DAT_ram_3005bf61 == 6) {
        if (_DAT_ram_3005bf62 >> 8 == 0x21) {
          bVar16 = 0xff;
          uVar10 = 0;
          uVar9 = 0;
          pbVar11 = _DAT_ram_3005bf90;
          do {
            if (*pbVar11 == 0) break;
            bVar17 = pbVar11[1];
            if (bVar17 == 4) {
              bVar16 = pbVar11[2];
            }
            else if (bVar17 == 0x21) {
              pbVar13 = pbVar11;
              if (DAT_ram_3005bf64 == bVar16) goto LAB_ram_4000f20a;
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
          if (_DAT_ram_3005bf62 >> 8 != 0x22) {
            return true;
          }
          for (uVar10 = 0; (uVar10 & 0xff) < (uint)DAT_ram_3005cfc8; uVar10 = uVar10 + 1) {
            iVar4 = *(int *)(uVar10 * 4 + 0x3005cfa8);
            if ((iVar4 != 0) && (*(byte *)(iVar4 + 0x18) == DAT_ram_3005bf64)) {
              FUN_ram_4000304c(_DAT_ram_3005bf80,*(undefined4 *)(iVar4 + 0x10),
                               *(undefined4 *)(iVar4 + 0x14));
              _DAT_ram_3005bf88 = *(undefined4 *)(iVar4 + 0x14);
              return true;
            }
          }
        }
      }
    }
    else if (DAT_ram_3005bf61 == 0xb) {
      uVar3 = _DAT_ram_3005bf62 & 0xff;
      uVar9 = 0;
      uVar10 = 0;
      bVar17 = 0xff;
      uVar18 = 0xff;
      pbVar13 = (byte *)0x0;
      pbVar11 = _DAT_ram_3005bf90;
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
              FUN_ram_400110e0(pbVar11);
            }
            else {
              FUN_ram_400112d0(pbVar11[2]);
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
        FUN_ram_4000ee7a(8,pbVar13);
        _DAT_ram_3005bf88 = 0;
        return true;
      }
    }
  }
  goto switchD_ram_4000f13a_caseD_2;
LAB_ram_4000f626:
  uVar10 = uVar10 + 1;
  goto LAB_ram_4000f5f8;
}


/* NanoCore 1.11, address 0x4000f7d2.
 * REA evidence: ev_d5e531c08ce7e2232feb63b5c83b499fed9c983f34d3240f4357c41070a38494
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f7d2(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_ram_4000304c(&DAT_ram_3005bf60,param_1,8);
  uVar2 = (uint)_DAT_ram_3005bf66;
  if ((uVar2 < 0x1001) || (DAT_ram_3005bf60 < '\0')) {
    _DAT_ram_3005bf80 = 0x3005bfa0;
    DAT_ram_3005bf8c = 0;
    _DAT_ram_3005bf84 = uVar2;
    _DAT_ram_3005bf88 = uVar2;
    if ((uVar2 != 0) && (-1 < DAT_ram_3005bf60)) {
      FUN_ram_400120c0(0);
      return;
    }
    iVar1 = FUN_ram_4000f0ae();
    if (iVar1 != 0) {
      _DAT_ram_3005bf84 = (uint)_DAT_ram_3005bf66;
      if (_DAT_ram_3005bf88 < _DAT_ram_3005bf66) {
        _DAT_ram_3005bf84 = _DAT_ram_3005bf88;
      }
      if (0x1000 < _DAT_ram_3005bf84) {
        FUN_ram_40032a1a(&DAT_ram_40094720);
        FUN_ram_40032a30(s_Request_buffer_too_small_ram_40094820);
        FUN_ram_40032a1a(&DAT_ram_40094748);
        return;
      }
      FUN_ram_40011c5e(0x80,_DAT_ram_3005bf80);
      if ((_DAT_ram_3005bf88 < _DAT_ram_3005bf66) && ((_DAT_ram_3005bf88 & 0x3f) == 0)) {
        DAT_ram_3005bf8c = 1;
      }
      return;
    }
  }
  else {
    FUN_ram_40032a1a(&DAT_ram_40094720);
    FUN_ram_40032a30(s_Request_buffer_too_small_ram_40094820);
    FUN_ram_40032a1a(&DAT_ram_40094748);
  }
  FUN_ram_40011940(0x80);
  return;
}


/* NanoCore 1.11, address 0x4000f8e4.
 * REA evidence: ev_4b502f1cce61c13d09c81d378fc24a11b23b1ed313145f6077cc717e4e9844af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000f8e4(undefined4 *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = FUN_ram_4000f9a6;
  if (param_2 < 0x200) {
    param_1[1] = FUN_ram_4000f92e;
  }
  else {
    param_1[1] = 0;
  }
  param_1[3] = &DAT_ram_4000f8c8;
  param_1[2] = 0;
  _DAT_ram_3005d0a6 = (short)param_2;
  _DAT_ram_3005d0a0 = param_3;
  DAT_ram_3005d0a4 = param_4;
  return;
}


/* NanoCore 1.11, address 0x4000f928.
 * REA evidence: ev_a06380c2e743aaa4ad11d7686b32075ca8edd55bf20c0974038f1f11ff169908
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f928(void)

{
  return;
}


/* NanoCore 1.11, address 0x4000f92a.
 * REA evidence: ev_e5a2bb00d0754506cb9b60e260760769a373be0a73ba234ae6a0ce64cc541914
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000f92a(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x4000f92e.
 * REA evidence: ev_e93a453aa0e04c94b84b01d0a8ce8c86b373d65918bf97e4a967a3161995c8c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000f92e(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 auStack_24 [4];
  
  auStack_24[0] = 0;
  uVar1 = *(undefined1 *)(param_1 + 4);
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_ram_4000304c(auStack_24,*param_2,*param_3);
      FUN_ram_4000f928(uVar1,auStack_24[0]);
    }
    else {
      if (3 < (byte)(*(char *)(param_1 + 1) + 0x7fU)) {
        return 0;
      }
      auStack_24[0] = FUN_ram_4000f92a(uVar1);
      FUN_ram_4000304c(*param_2,auStack_24,3);
      *param_3 = 3;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4000f9a4.
 * REA evidence: ev_0e1ea64b37ffacbc1c016a3f7e078884edb69cfe0ed4fdfceaf3c9488ed1b4fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000f9a4(void)

{
  return;
}


/* NanoCore 1.11, address 0x4000f9a6.
 * REA evidence: ev_639bb0275143df835d584fe3edba9ed63fda30b5552416c9fb798f24a37b3acd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000fb5a) */
/* WARNING: Removing unreachable block (ram,0x4000fa94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000f9a6(char *param_1,int *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char *pcVar7;
  char cVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  ushort uVar13;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 0;
  cVar1 = param_1[3];
  cVar2 = param_1[5];
  cVar8 = '\0';
  pcVar7 = _DAT_ram_3005d0a0;
  do {
    if (DAT_ram_3005d0a4 == cVar8) {
LAB_ram_4000fa04:
      FUN_ram_40032a1a(&DAT_ram_40094720);
      FUN_ram_40032a1a(s_Do_not_find_subtype_for_0x_02x_ram_4009483c,cVar2);
      FUN_ram_40032a1a(&DAT_ram_40094748);
      return 0xffffffff;
    }
    if (pcVar7[1] == cVar2) {
      cVar8 = *pcVar7;
      cVar3 = pcVar7[2];
      if (cVar8 != '\x01') {
        if (cVar8 == '\x06') {
          uVar13 = *(ushort *)(param_1 + 2) & 0xff;
          if (cVar1 == '\x01') {
            cVar1 = param_1[1];
            if (_DAT_ram_3005d0a6 < 0x200) {
              if (cVar1 == '\x01') {
LAB_ram_4000faec:
                FUN_ram_40010dac(cVar3,uVar13,*(char *)*param_2 != '\0');
                return 0;
              }
              if (cVar1 != -0x7f) {
                return 0xffffffff;
              }
            }
            else {
              if (cVar1 != '\x01') {
                return 0xffffffff;
              }
              if (-1 < *param_1) goto LAB_ram_4000faec;
            }
            uVar5 = FUN_ram_40010dce(cVar3,uVar13);
            *(undefined1 *)*param_2 = uVar5;
            *param_3 = 1;
            return 0;
          }
          if (cVar1 != '\x02') {
            return 0xffffffff;
          }
          bVar4 = param_1[1];
          if (_DAT_ram_3005d0a6 < 0x200) {
            if (bVar4 != 0x82) {
              if (bVar4 < 0x83) {
                if (bVar4 == 1) {
                  FUN_ram_4000304c(&uStack_24,*param_2,*param_3);
                  uVar10 = (uint)uStack_24 & 0xffff;
                  if (0 < (short)uStack_24) {
                    uVar10 = 0;
                  }
                  if ((short)uVar10 < -0x2500) {
                    uVar10 = 0xffffdb00;
                  }
                  uVar10 = (((int)((uVar10 + 0x2500) * 0x10000) >> 0x10) * 0xff) / 0x2500;
                  goto LAB_ram_4000fb5e;
                }
                if (bVar4 != 0x81) {
                  return 0xffffffff;
                }
                iVar12 = FUN_ram_40010d84(cVar3,uVar13);
                iVar12 = (iVar12 * 0x2500) / 0xff + -0x2500;
                puVar9 = (undefined1 *)*param_2;
                uVar5 = (undefined1)((uint)iVar12 >> 8);
                *puVar9 = (char)iVar12;
LAB_ram_4000faa8:
                puVar9[1] = uVar5;
              }
              else {
                if (bVar4 != 0x83) {
                  if (bVar4 != 0x84) {
                    return 0xffffffff;
                  }
                  uVar5 = 1;
                  *(undefined1 *)*param_2 = 0;
                  puVar9 = (undefined1 *)*param_2;
                  goto LAB_ram_4000faa8;
                }
                *(undefined1 *)*param_2 = 0;
                *(undefined1 *)(*param_2 + 1) = 0;
              }
              iVar12 = 2;
              goto LAB_ram_4000fb8c;
            }
            uStack_24._1_1_ = 0xdb;
            *(undefined1 *)*param_2 = 0;
            puVar9 = (undefined1 *)*param_2;
          }
          else {
            if (bVar4 != 1) {
              if (bVar4 != 2) {
                return 0xffffffff;
              }
              if (*param_1 < '\0') {
                puVar11 = (undefined2 *)*param_2;
                *puVar11 = 1;
                puVar11[1] = 0;
                puVar11[2] = 100;
                puVar11[3] = 1;
                *param_3 = 8;
                return 0;
              }
              return 0;
            }
            if (-1 < *param_1) {
              FUN_ram_4000304c(&uStack_24,*param_2,*param_3);
              uVar10 = (uint)uStack_24 & 0xffff;
LAB_ram_4000fb5e:
              FUN_ram_40010d62(cVar3,uVar13,uVar10);
              return 0;
            }
            uVar6 = FUN_ram_40010d84(cVar3,uVar13);
            puVar9 = (undefined1 *)*param_2;
            *puVar9 = (char)uVar6;
            uStack_24._1_1_ = (undefined1)((ushort)uVar6 >> 8);
          }
          puVar9[1] = uStack_24._1_1_;
          *param_3 = 2;
        }
        else {
          if (cVar8 != '\n') {
            return 0;
          }
          if (cVar1 != '\x01') {
            if (cVar1 != '\x02') {
              return 0xffffffff;
            }
            if (*param_1 < '\0') {
              *(undefined1 *)*param_2 = 1;
              *param_3 = 1;
              return 0;
            }
            return 0xffffffff;
          }
          if (param_1[1] != '\x01') {
            if (param_1[1] != '\x02') {
              return 0xffffffff;
            }
            if (*param_1 < '\0') {
              uStack_24 = (ushort *)0x0;
              FUN_ram_4000f9a4(cVar3,&uStack_24);
              iVar12 = (uint)*uStack_24 * 0xc + 2;
              FUN_ram_4000304c(*param_2,uStack_24,iVar12);
              *param_3 = iVar12;
              return 0;
            }
            return 0;
          }
          if (-1 < *param_1) {
            FUN_ram_4000304c(&uStack_28,*param_2,*(undefined2 *)(param_1 + 6));
            FUN_ram_4000f928(cVar3,uStack_28);
            return 0;
          }
          uStack_28 = FUN_ram_4000f92a(cVar3);
          FUN_ram_4000304c(*param_2,&uStack_28,4);
          iVar12 = 4;
LAB_ram_4000fb8c:
          *param_3 = iVar12;
        }
        return 0;
      }
      goto LAB_ram_4000fa04;
    }
    cVar8 = cVar8 + '\x01';
    pcVar7 = pcVar7 + 3;
  } while( true );
}


/* NanoCore 1.11, address 0x4000fcac.
 * REA evidence: ev_e84ef3042d5910aea6a4fc5e2455ff31db5c9aa10f3408db80b847baff7eaf7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000fcac(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3005dd54 = 0;
  _DAT_ram_3005dd58 = 0;
  _DAT_ram_3005dd50 = 0;
  DAT_ram_30049d80 = 0xffffffff;
  _DAT_ram_3005dd4c = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x4000fce6.
 * REA evidence: ev_32ea9bbfcd7d5923094785fd613be93e2f81f430e89efc38c76d3613c1fb03ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000fce6(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004dee();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006464(), iVar1 != 0)) {
    FUN_ram_400065c6(1);
    return;
  }
  thunk_FUN_ram_4003ff8a(1000);
  return;
}


/* NanoCore 1.11, address 0x4000fd0c.
 * REA evidence: ev_c7f2399d5ae5064353b73f1595bd085aa0074c9b77ad4496b7b229685cd429fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000fd0c(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)DAT_ram_3005dea2;
  uVar3 = 1 - uVar4;
  DAT_ram_3005dea2 = (byte)uVar3;
  FUN_ram_400120c0(2,(uVar3 & 0xff) * 0xc0 + 0x3005dec0,0xb8);
  _DAT_ram_3005dd54 = _DAT_ram_3005dd54 + 1;
  if (param_2 == 0) {
    _DAT_ram_3005dd58 = _DAT_ram_3005dd58 + 1;
  }
  else {
    DAT_ram_3005dd4a = 1;
    _DAT_ram_3005dd50 = _DAT_ram_3005dd50 + param_2;
    if (param_2 < DAT_ram_30049d80) {
      DAT_ram_30049d80 = param_2;
    }
    if (_DAT_ram_3005dd4c < param_2) {
      _DAT_ram_3005dd4c = param_2;
    }
    iVar1 = uVar4 * 0xc0 + 0x3005dec0;
    FUN_ram_4000e030(iVar1,param_2);
    iVar2 = thunk_FUN_ram_40022428();
    if ((iVar2 != 0) && (param_2 >> 1 != 0)) {
      FUN_ram_400002f4();
      uVar3 = 0;
      do {
        *(undefined2 *)(_DAT_ram_3005dd44 * 2 + 0x3005d784) = *(undefined2 *)(iVar1 + uVar3 * 2);
        _DAT_ram_3005dd44 = _DAT_ram_3005dd44 + 1;
        if (0x2df < _DAT_ram_3005dd44) {
          _DAT_ram_3005dd44 = 0;
        }
        if (_DAT_ram_3005dd44 == _DAT_ram_3005d780) {
          _DAT_ram_3005d780 = _DAT_ram_3005d780 + 1;
          if (0x2df < _DAT_ram_3005d780) {
            _DAT_ram_3005d780 = 0;
          }
        }
        uVar3 = uVar3 + 1;
      } while (param_2 >> 1 != uVar3);
      FUN_ram_400002fa();
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4000fe3c.
 * REA evidence: ev_2e790355980c76506a469e6ddfbccac31c34e6fd30ac29e7f31213b2cb4c7792
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000fe3c(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xf0;
  if (uVar1 != 0xd0) {
    if (uVar1 == 0xf0) {
      if ((param_1 & 0xfd) == 0xf1) {
        return 2;
      }
      if (param_1 != 0xf2) {
        return 1;
      }
      return 3;
    }
    if (uVar1 != 0xc0) {
      return 3;
    }
  }
  return 2;
}


/* NanoCore 1.11, address 0x4000fe7c.
 * REA evidence: ev_8d19ea98ec5ef27ea272f39a526f0647ee5e007fd172c72d03bdf8ff4d8d8007
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000fe7c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x7d1;
  while( true ) {
    if ((DAT_ram_3005d15c == '\0') || (DAT_ram_3005dd48 != '\0')) {
      return -1;
    }
    iVar2 = FUN_ram_40011c5e(0x83,param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    if (1 < iVar2 + 3U) break;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return iVar2;
    }
    FUN_ram_4000fce6();
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x4000feee.
 * REA evidence: ev_13e6a59e1199b3fee37fd84005bea9c967d04bada3e7fdb8895ae1b152aefadc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000feee(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  
  DAT_ram_3005d0aa = 0;
  if (DAT_ram_3005e041 != '\0') {
    uVar2 = FUN_ram_4000dc9a(0x3005e160,0xb8);
    iVar3 = thunk_FUN_ram_40022428();
    if ((iVar3 != 0) && (uVar1 = (uVar2 & 0x1ffff) >> 1, uVar1 != 0)) {
      iVar3 = FUN_ram_400225a0();
      FUN_ram_400002f4();
      uVar5 = 0;
      do {
        if (_DAT_ram_3005d780 != _DAT_ram_3005dd44) {
          iVar6 = _DAT_ram_3005d780 * 2;
          _DAT_ram_3005d780 = _DAT_ram_3005d780 + 1;
          if (0x2df < _DAT_ram_3005d780) {
            _DAT_ram_3005d780 = 0;
          }
          if (0 < iVar3) {
            iVar6 = (*(short *)(iVar6 + 0x3005d784) * iVar3 >> 0x11) +
                    (int)*(short *)(uVar5 * 2 + 0x3005e160);
            uVar4 = 0x7fff;
            if ((iVar6 < 0x8000) && (uVar4 = 0x8000, -0x8001 < iVar6)) {
              uVar4 = (undefined2)((uint)(iVar6 * 0x10000) >> 0x10);
            }
            *(undefined2 *)(uVar5 * 2 + 0x3005e160) = uVar4;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
      FUN_ram_400002fa();
    }
    DAT_ram_3005d0aa = 1;
    FUN_ram_40011a0c(0x81,0x3005e160,uVar2,0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4000ffdc.
 * REA evidence: ev_7acdfc39c859630f3a71e8c8fc8589bf844cebed58e03ac0252f6d008d95d468
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000ffdc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400042ea();
  if ((DAT_ram_3005d15c != '\0') && ((DAT_ram_3005d144 == '\0' || (param_1 != 0)))) {
    _DAT_ram_3005d154 = uVar1;
    _DAT_ram_3005d150 = FUN_ram_400120c0(3,0x3005de00,0x40);
    if (_DAT_ram_3005d150 == 0) {
      DAT_ram_3005d144 = '\x01';
      _DAT_ram_3005d158 = _DAT_ram_3005d158 + 1;
    }
    else {
      DAT_ram_3005d144 = '\0';
      _DAT_ram_3005d14c = _DAT_ram_3005d14c + 1;
    }
  }
  return;
}


