/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4000e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4000e76e.
 * REA evidence: ev_f3080d78cdf71b4f6a6cf3a2dca2bb8f6bd7075bbbf5423b2b7465d2124797cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000e842) */
/* WARNING: Removing unreachable block (ram,0x4000e862) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000e76e(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short asStack_32 [5];
  
  uVar1 = DAT_ram_4009282c;
  do {
    if ((DAT_ram_3004d57a != '\0') && (DAT_ram_3004d57b == '\0')) {
      FUN_ram_400077f4();
      iVar2 = FUN_ram_40007f38(0x31,0,0,0x14,2);
      if (iVar2 == 0) {
        _DAT_ram_3004d57e = 8;
        DAT_ram_3004668c = 0;
        DAT_ram_3004d57b = '\x01';
        DAT_ram_3004d57a = '\0';
      }
    }
    _DAT_ram_30049dc0 = FUN_ram_40040974(_DAT_ram_3004fa9c,4);
    if ((_DAT_ram_30049dc0 != 0) &&
       (asStack_32[0] = _DAT_ram_30049dc0,
       iVar2 = FUN_ram_400368b6(uVar1,asStack_32,_DAT_ram_3004fa98,1000), 0 < iVar2)) {
      iVar2 = iVar2 * 2;
      iVar3 = (iVar2 + 5) / 10;
      _DAT_ram_30049dc4 = (undefined2)iVar3;
      DAT_ram_30049dc2 = 0;
      if ((0x88bc < iVar2) && (DAT_ram_30049dc2 = 100, iVar2 < 0xa40b)) {
        DAT_ram_30049dc2 = (undefined1)((iVar3 + -0xdac) / 7);
      }
      FUN_ram_40022a76();
    }
    FUN_ram_400105d6();
    FUN_ram_400065d4(100);
  } while( true );
}


/* NanoCore 1.10, address 0x4000e884.
 * REA evidence: ev_358b7bf20b39f3a0bdd3454778aa3cda74a12fab8849501bd472ccb842de3fda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_ram_4000e884(void)

{
  return _DAT_ram_30049dc4;
}


/* NanoCore 1.10, address 0x4000e88e.
 * REA evidence: ev_7e6d6c370e96fcc3a70bbfb49535f45b63da46702c4a5017c6c1fc7097e7aca3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000e88e(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0; uVar1 < DAT_ram_3005bc88; uVar1 = uVar1 + 1 & 0xff) {
    iVar2 = *(int *)((uVar1 + 0x410) * 4 + 0x3005ac28);
    if (param_2 == 0) {
      if ((iVar2 != 0) && (*(code **)(iVar2 + 0xc) != (code *)0x0)) {
        (**(code **)(iVar2 + 0xc))(param_1,0);
      }
    }
    else if (((iVar2 != 0) && (*(code **)(iVar2 + 0xc) != (code *)0x0)) &&
            (*(char *)(param_2 + 2) == *(char *)(iVar2 + 0x18))) {
      (**(code **)(iVar2 + 0xc))(param_1,param_2);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4000e94c.
 * REA evidence: ev_40b37e990080f2ed33d3eceba670c36554d7313dfebfce18fcc3da4e2515726f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000e94c(uint param_1)

{
  if (*(code **)(&DAT_ram_3005bc94 + (param_1 & 0x7f) * 0xc) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x4000e964 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_ram_3005bc94 + (param_1 & 0x7f) * 0xc))();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000e96c.
 * REA evidence: ev_1b990034a7cf7a62280f1abf883240960661d5b8efe71c506ae8839b7b1dd7b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000e96c(uint param_1)

{
  if (*(code **)(&DAT_ram_3005bcf4 + (param_1 & 0x7f) * 0xc) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x4000e984 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_ram_3005bcf4 + (param_1 & 0x7f) * 0xc))();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000e98e.
 * REA evidence: ev_77e3994b447fed361422634dab91464f270c73970b00c003dd7616fc89f52176
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000e98e(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = memset(&DAT_ram_3005ac20,0,0x1140);
  DAT_ram_3005bc8c = 0x80;
  *(undefined4 *)((int)pvVar1 + 0x30) = param_1;
  _DAT_ram_3005bc94 = &LAB_ram_4000e900;
  _DAT_ram_3005bcf4 = &LAB_ram_4000f194;
  return;
}


/* NanoCore 1.10, address 0x4000e9dc.
 * REA evidence: ev_5939ecdc6fa299ebc0a3e34669f68ce75fdb139c7abef90f561c629a302c5389
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000e9dc(int param_1)

{
  *(byte *)(param_1 + 0x18) = DAT_ram_3005bc88;
  *(int *)((DAT_ram_3005bc88 + 0x410) * 4 + 0x3005ac28) = param_1;
  DAT_ram_3005bc88 = DAT_ram_3005bc88 + 1;
  return;
}


/* NanoCore 1.10, address 0x4000ea06.
 * REA evidence: ev_74785c837e5493541abee71f57f0f4d112baa5a60ef3860e3fba2b3ea2f7b4c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000ea06(byte *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  if ((char)bVar1 < '\0') {
    iVar2 = (bVar1 & 0x7f) * 0xc;
    (&DAT_ram_3005bc8c)[iVar2] = bVar1;
    *(undefined4 *)(&DAT_ram_3005bc94 + iVar2) = uVar3;
    return;
  }
  iVar2 = (uint)bVar1 * 0xc;
  *(byte *)(iVar2 + 0x3005bcec) = bVar1;
  *(undefined4 *)(&DAT_ram_3005bcf4 + iVar2) = uVar3;
  return;
}


/* NanoCore 1.10, address 0x4000ea46.
 * REA evidence: ev_d8f7dcc7a210c6258c886cccfdece651ed6009f452f91f32a20a157bcf78cd58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_400110e4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  memset(&DAT_ram_3005cec0,0,0x140);
  FUN_ram_40011fe6();
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
    if (iVar2 == 0) goto LAB_ram_40011184;
    fence();
  } while ((_DAT_ram_10200000 & 4) == 0);
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 1;
  iVar2 = 0x30d41;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    fence();
  }
LAB_ram_40011184:
  FUN_ram_400107d8();
  fence();
  _DAT_ram_10200028 = 0;
  fence();
  _DAT_ram_1020002c = 0;
  fence();
  fence();
  _DAT_ram_10200200 = _DAT_ram_10200200 | 1;
  FUN_ram_4001095c(0x10);
  uVar1 = FUN_ram_4001082e();
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
  FUN_ram_40010fb4();
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 0x200;
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 & 0xfffffffd;
  return uVar1;
}


/* NanoCore 1.10, address 0x4000ea4a.
 * REA evidence: ev_955de1b8c1be9458df5d8b392db07e3df1b60b6ce21019dfa208fd0b9ac4b160
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000ea4a(void)

{
  FUN_ram_40010992();
  return 0;
}


/* NanoCore 1.10, address 0x4000ea5a.
 * REA evidence: ev_53f85644fc947dc790fbd498a98d3ec57212adc97e42e8b50a086b3cab1fe947
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000ea5a(void)

{
  if (DAT_ram_3005bc61 != '\0') {
    DAT_ram_3005bc65 = 1;
    FUN_ram_400101ac(5);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000ea76.
 * REA evidence: ev_7b02b514fc7228871ca07acbcb6ce013bea3a255a3259cb202c93c8766ef04c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000ea76(void)

{
  uint3 uStack_18;
  undefined1 uStack_15;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  FUN_ram_40010a14(0);
  _DAT_ram_3005bc60 = 0;
  _uStack_18 = 0x800507;
  uStack_14 = 0x40;
  uStack_12 = 0;
  FUN_ram_40010a38(&uStack_18);
  uStack_18 = (uint3)(ushort)uStack_18;
  FUN_ram_40010a38(&uStack_18);
  FUN_ram_4000e88e(1,0);
  FUN_ram_400101ac(1);
  return;
}


/* NanoCore 1.10, address 0x4000eac2.
 * REA evidence: ev_8505be1d44d56c30d7a5310dcf3ebce03b3e3966108740735c9214b3ed284afd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4000eac2(void)

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
  
  uVar10 = (uint)DAT_ram_3005ac20;
  bVar16 = DAT_ram_3005ac24;
  if ((uVar10 & 0x60) == 0x20) {
    if ((uVar10 & 3) == 1) {
      for (uVar10 = 0; (uVar10 & 0xff) < (uint)DAT_ram_3005bc88; uVar10 = uVar10 + 1) {
        puVar8 = *(undefined4 **)(uVar10 * 4 + 0x3005bc68);
        if (((puVar8 != (undefined4 *)0x0) && ((code *)*puVar8 != (code *)0x0)) &&
           (*(byte *)(puVar8 + 6) == DAT_ram_3005ac24)) {
          iVar4 = (*(code *)*puVar8)(&DAT_ram_3005ac20,&DAT_ram_3005ac40,&DAT_ram_3005ac48);
          goto LAB_ram_4000efea;
        }
      }
    }
    else if ((uVar10 & 3) == 2) {
      uVar10 = 0;
LAB_ram_4000f00c:
      if ((uVar10 & 0xff) < (uint)DAT_ram_3005bc88) {
        iVar4 = *(int *)(uVar10 * 4 + 0x3005bc68);
        if ((iVar4 == 0) || (pcVar12 = *(code **)(iVar4 + 4), pcVar12 == (code *)0x0))
        goto LAB_ram_4000f03a;
        iVar4 = (*pcVar12)(&DAT_ram_3005ac20,&DAT_ram_3005ac40,&DAT_ram_3005ac48);
LAB_ram_4000efea:
        if (-1 < iVar4) {
          return true;
        }
      }
    }
    FUN_ram_40031b48(&DAT_ram_40092950);
    pcVar7 = s_class_request_error_ram_400929ac;
    goto LAB_ram_4000ed6a;
  }
  if ((uVar10 & 0x60) == 0x40) {
    if (_DAT_ram_3005ac54 == (undefined4 *)0x0) {
      if ((_DAT_ram_3005ac58 == (undefined4 *)0x0) ||
         (DAT_ram_3005ac21 != *(byte *)((int)_DAT_ram_3005ac58 + 6))) goto LAB_ram_4000f12e;
      if (_DAT_ram_3005ac24 == 7) {
        FUN_ram_4000305c(_DAT_ram_3005ac40,*_DAT_ram_3005ac58,*(undefined2 *)(_DAT_ram_3005ac58 + 1)
                        );
        _DAT_ram_3005ac48 = (uint)*(ushort *)(_DAT_ram_3005ac58 + 1);
        return true;
      }
LAB_ram_4000f060:
      FUN_ram_40031b48(&DAT_ram_40092950);
      FUN_ram_40031b5e(s_unknown_vendor_code_ram_400929c4);
      FUN_ram_40031b48(&DAT_ram_40092978);
    }
    else {
      if (DAT_ram_3005ac21 == *(byte *)(_DAT_ram_3005ac54 + 1)) {
        if (_DAT_ram_3005ac24 == 4) {
          puVar8 = (undefined4 *)_DAT_ram_3005ac54[2];
LAB_ram_4000f09c:
          uVar6 = *puVar8;
          FUN_ram_4000305c(_DAT_ram_3005ac40,puVar8,uVar6);
          _DAT_ram_3005ac48 = uVar6;
          return true;
        }
        if (_DAT_ram_3005ac24 == 5) {
          puVar8 = *(undefined4 **)(_DAT_ram_3005ac54[3] + (uint)_DAT_ram_3005ac22 * 4);
          goto LAB_ram_4000f09c;
        }
        goto LAB_ram_4000f060;
      }
LAB_ram_4000f12e:
      for (uVar10 = 0; uVar10 < DAT_ram_3005bc88; uVar10 = uVar10 + 1 & 0xff) {
        iVar4 = *(int *)((uVar10 + 0x410) * 4 + 0x3005ac28);
        if (((iVar4 != 0) && (pcVar12 = *(code **)(iVar4 + 8), pcVar12 != (code *)0x0)) &&
           (iVar4 = (*pcVar12)(&DAT_ram_3005ac20,&DAT_ram_3005ac40,&DAT_ram_3005ac48), iVar4 == 0))
        {
          return true;
        }
      }
    }
    FUN_ram_40031b48(&DAT_ram_40092950);
    pcVar7 = s_vendor_request_error_ram_400929dc;
    goto LAB_ram_4000ed6a;
  }
  if ((DAT_ram_3005ac20 & 0x60) != 0) {
    return false;
  }
  if (((DAT_ram_3005ac21 == 6) && (_DAT_ram_3005ac22 == 0x600)) && (DAT_ram_3005bc67 < 3)) {
    return false;
  }
  uVar10 = uVar10 & 3;
  if (uVar10 != 1) {
    if (uVar10 == 2) {
      if (DAT_ram_3005bc60 != '\0') {
        if (DAT_ram_3005ac21 == 1) {
          if (_DAT_ram_3005ac22 == 0) {
            FUN_ram_40031b48(&DAT_ram_40092950);
            FUN_ram_40031b48(s_ep__02x_clear_halt_ram_40092960,bVar16);
            FUN_ram_40031b48(&DAT_ram_40092978);
            FUN_ram_400112ee(bVar16);
            return true;
          }
        }
        else {
          if (DAT_ram_3005ac21 != 3) {
            if (DAT_ram_3005ac21 == 0) {
              *_DAT_ram_3005ac40 = 0;
              _DAT_ram_3005ac40[1] = 0;
              _DAT_ram_3005ac48 = uVar10;
              return true;
            }
            goto switchD_ram_4000eb4e_caseD_2;
          }
          if (_DAT_ram_3005ac22 == 0) {
            FUN_ram_40031b48(&DAT_ram_40092950);
            FUN_ram_40031b48(s_ep__02x_set_halt_ram_40092980,bVar16);
            FUN_ram_40031b48(&DAT_ram_40092978);
            FUN_ram_40011298(bVar16);
            _DAT_ram_3005ac48 = 0;
            return true;
          }
        }
LAB_ram_4000ed4e:
        _DAT_ram_3005ac48 = 0;
      }
      goto switchD_ram_4000eb4e_caseD_2;
    }
    if ((DAT_ram_3005ac20 & 3) != 0) goto switchD_ram_4000eb4e_caseD_2;
    uVar10 = (uint)_DAT_ram_3005ac22;
    cVar5 = (char)_DAT_ram_3005ac22;
    switch(DAT_ram_3005ac21) {
    case 0:
      *_DAT_ram_3005ac40 = 0;
      if (DAT_ram_3005bc62 != '\0') {
        *_DAT_ram_3005ac40 = *_DAT_ram_3005ac40 | 1;
      }
      if (DAT_ram_3005bc64 != '\0') {
        *_DAT_ram_3005ac40 = *_DAT_ram_3005ac40 | 2;
      }
LAB_ram_4000eb86:
      _DAT_ram_3005ac40[1] = 0;
      _DAT_ram_3005ac48 = 2;
      return true;
    case 1:
    case 3:
      if (uVar10 == 1) {
        if (DAT_ram_3005ac21 == 3) {
          uVar6 = 9;
          DAT_ram_3005bc64 = cVar5;
        }
        else {
          DAT_ram_3005bc64 = '\0';
          uVar6 = 10;
        }
        FUN_ram_400101ac(uVar6);
      }
      break;
    case 5:
      DAT_ram_3005bc61 = cVar5;
      FUN_ram_40010a14(uVar10 & 0xff);
      break;
    case 6:
      uVar3 = _DAT_ram_3005ac22 >> 8;
      uVar10 = uVar10 & 0xff;
      if (uVar3 == 3) {
        if (uVar10 == 0xee) {
          if (_DAT_ram_3005ac54 != (undefined4 *)0x0) {
            FUN_ram_4000305c(_DAT_ram_3005ac40,(undefined1 *)*_DAT_ram_3005ac54,
                             *(undefined1 *)*_DAT_ram_3005ac54);
            pbVar11 = (byte *)*_DAT_ram_3005ac54;
            pbVar13 = _DAT_ram_3005ac40;
LAB_ram_4000ec1e:
            _DAT_ram_3005ac40 = pbVar13;
            _DAT_ram_3005ac48 = (uint)*pbVar11;
            return true;
          }
        }
        else {
LAB_ram_4000ec46:
          uVar9 = 0;
          for (pbVar11 = _DAT_ram_3005ac50; uVar14 = (uint)*pbVar11, uVar14 != 0;
              pbVar11 = pbVar11 + uVar14) {
            if (pbVar11[1] == uVar3) {
              if (uVar10 == uVar9) {
                _DAT_ram_3005ac48 = uVar14;
                if (uVar3 == 2) {
                  DAT_ram_3005bc62 = (pbVar11[7] & 0xc0) != 0;
                  DAT_ram_3005bc63 = (byte)(((uint)pbVar11[7] << 0x1a) >> 0x1f);
                  _DAT_ram_3005ac48 = (uint)*(ushort *)(pbVar11 + 2);
                }
                FUN_ram_4000305c(_DAT_ram_3005ac40,pbVar11,_DAT_ram_3005ac48);
                return true;
              }
              uVar9 = uVar9 + 1;
            }
          }
          FUN_ram_40031b48(&DAT_ram_40092950);
          FUN_ram_40031b48(s_descriptor_<type:0x_02x,index:0x_ram_400929f4,uVar3,uVar10);
          FUN_ram_40031b48(&DAT_ram_40092978);
        }
      }
      else if (uVar3 == 0xf) {
        if (_DAT_ram_3005ac5c != (undefined4 *)0x0) {
          FUN_ram_4000305c(_DAT_ram_3005ac40,*_DAT_ram_3005ac5c,_DAT_ram_3005ac5c[1]);
          _DAT_ram_3005ac48 = _DAT_ram_3005ac5c[1];
          return true;
        }
      }
      else if (uVar3 < 4) goto LAB_ram_4000ec46;
    default:
switchD_ram_4000eb4e_caseD_2:
      FUN_ram_40031b48(&DAT_ram_40092950);
      pcVar7 = s_standard_request_error_ram_40092994;
LAB_ram_4000ed6a:
      FUN_ram_40031b5e(pcVar7);
      FUN_ram_40031b48(&DAT_ram_40092978);
      return false;
    case 8:
      _DAT_ram_3005ac40 = &DAT_ram_3005bc60;
      _DAT_ram_3005ac48 = 1;
      return true;
    case 9:
      uVar14 = 0;
      uVar9 = 0;
      bVar2 = false;
      uVar15 = 0xff;
      bVar16 = 0xff;
      pbVar11 = _DAT_ram_3005ac50;
      do {
        if (*pbVar11 == 0) break;
        bVar17 = pbVar11[1];
        if (bVar17 == 4) {
          bVar16 = pbVar11[3];
        }
        else if (bVar17 == 5) {
          if (((uVar10 & 0xff) == uVar15) && (bVar16 == 0)) {
            iVar4 = FUN_ram_40010a38(pbVar11);
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
        DAT_ram_3005bc65 = 0;
        DAT_ram_3005bc66 = 1;
        DAT_ram_3005bc60 = cVar5;
        FUN_ram_4000e88e(7,0);
        FUN_ram_400101ac(7);
        _DAT_ram_3005ac48 = 0;
        return bVar2;
      }
      goto LAB_ram_4000ed4e;
    }
    _DAT_ram_3005ac48 = 0;
    return true;
  }
  if (DAT_ram_3005bc60 != '\0') {
    if (DAT_ram_3005ac21 == 10) {
      *_DAT_ram_3005ac40 = 0;
      _DAT_ram_3005ac48 = uVar10;
      return true;
    }
    if (DAT_ram_3005ac21 < 0xb) {
      if (DAT_ram_3005ac21 == 0) {
        *_DAT_ram_3005ac40 = 0;
        goto LAB_ram_4000eb86;
      }
      if (DAT_ram_3005ac21 == 6) {
        if (_DAT_ram_3005ac22 >> 8 == 0x21) {
          bVar16 = 0xff;
          uVar10 = 0;
          uVar9 = 0;
          pbVar11 = _DAT_ram_3005ac50;
          do {
            if (*pbVar11 == 0) break;
            bVar17 = pbVar11[1];
            if (bVar17 == 4) {
              bVar16 = pbVar11[2];
            }
            else if (bVar17 == 0x21) {
              pbVar13 = pbVar11;
              if (DAT_ram_3005ac24 == bVar16) goto LAB_ram_4000ec1e;
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
          if (_DAT_ram_3005ac22 >> 8 != 0x22) {
            return true;
          }
          for (uVar10 = 0; (uVar10 & 0xff) < (uint)DAT_ram_3005bc88; uVar10 = uVar10 + 1) {
            iVar4 = *(int *)(uVar10 * 4 + 0x3005bc68);
            if ((iVar4 != 0) && (*(byte *)(iVar4 + 0x18) == DAT_ram_3005ac24)) {
              FUN_ram_4000305c(_DAT_ram_3005ac40,*(undefined4 *)(iVar4 + 0x10),
                               *(undefined4 *)(iVar4 + 0x14));
              _DAT_ram_3005ac48 = *(undefined4 *)(iVar4 + 0x14);
              return true;
            }
          }
        }
      }
    }
    else if (DAT_ram_3005ac21 == 0xb) {
      uVar3 = _DAT_ram_3005ac22 & 0xff;
      uVar9 = 0;
      uVar10 = 0;
      bVar17 = 0xff;
      uVar18 = 0xff;
      pbVar13 = (byte *)0x0;
      pbVar11 = _DAT_ram_3005ac50;
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
              FUN_ram_40010a38(pbVar11);
            }
            else {
              FUN_ram_40010c28(pbVar11[2]);
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
        FUN_ram_4000e88e(8,pbVar13);
        _DAT_ram_3005ac48 = 0;
        return true;
      }
    }
  }
  goto switchD_ram_4000eb4e_caseD_2;
LAB_ram_4000f03a:
  uVar10 = uVar10 + 1;
  goto LAB_ram_4000f00c;
}


