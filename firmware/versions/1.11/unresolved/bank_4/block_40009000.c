/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40009000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40009680.
 * REA evidence: ev_3d4da29bae7f8d3a1bffc28856fa62a2fada0dc13f1810f93eb4a14a10e9a0ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40009680(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                     undefined4 param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  char *unaff_s5;
  int iVar5;
  int iStack00000008;
  int iStack0000000c;
  
  iVar5 = 2;
  _DAT_ram_3004d5b0 = param_4 + _DAT_ram_3004d5b0;
  for (param_6 = param_6 + -2; param_6 != 0; param_6 = param_6 + -1) {
    _DAT_ram_3004d5b4 = _DAT_ram_3004d5b4 + 1;
    if (_DAT_ram_3004d5b4 == 3) {
      _DAT_ram_3004d5b4 = 0;
    }
  }
  *param_1 = param_5;
  do {
    if ((_DAT_ram_3004d5b4 < 3) && (*unaff_s5 == '\0')) {
      uVar4 = _DAT_ram_3004d5c4 - _DAT_ram_3004d5a0;
      if (uVar4 < 0x200) {
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar4 & 0xfffffffe;
          DAT_ram_30049c28 = DAT_ram_30049c28 + 1;
        }
        if (((DAT_ram_300508e5 == '\0') || (DAT_ram_3004d534 != '\0')) && (DAT_ram_3004d574 == '\0')
           ) {
          if (0x48 < uVar4) {
            uVar2 = uVar4 - 0x48 & 0xfffffffe;
            _DAT_ram_3004d5a0 = _DAT_ram_3004d5a0 + uVar2;
            uVar4 = uVar4 - uVar2;
            _DAT_ram_3004d588 = _DAT_ram_3004d588 + uVar2;
          }
          if (uVar4 < 0x48) {
            uVar2 = 0x40;
          }
          else {
LAB_ram_4000979c:
            uVar4 = _DAT_ram_3004d5a0 & 0x1ff;
            iStack0000000c = 8;
            if (0x200 < uVar4 + 8) {
              iStack0000000c = 0x200 - uVar4;
            }
            iStack00000008 = iStack0000000c << 2;
            iVar1 = _DAT_ram_3004d5b4 * 0x20 + 0x30052e40;
            FUN_ram_4000304c(iVar1,uVar4 * 4 + 0x30052ec0,iStack00000008);
            if (iStack0000000c != 8) {
              FUN_ram_4000304c(iVar1 + iStack00000008,0x30052ec0,(8 - iStack0000000c) * 4);
            }
            _DAT_ram_3004d5a0 = _DAT_ram_3004d5a0 + 8;
            FUN_ram_400076aa(iVar1,0x20);
            _DAT_ram_3004d5b8 = _DAT_ram_3004d5b8 + 1;
            if (((DAT_ram_300508e5 != '\0') && (DAT_ram_3004d534 == '\0')) ||
               (DAT_ram_3004d574 != '\0')) goto LAB_ram_40009640;
            uVar4 = _DAT_ram_3004d5c4 - 0x40;
            uVar2 = _DAT_ram_3004d5a0;
          }
          if ((uVar4 == uVar2) && (DAT_ram_3004d567 < 8)) {
            DAT_ram_3004d567 = DAT_ram_3004d567 + 1;
          }
        }
        else {
          if (7 < uVar4) goto LAB_ram_4000979c;
          if (((DAT_ram_300508e5 == '\0') || (DAT_ram_3004d534 != '\0')) ||
             ((DAT_ram_3004d565 != '\0' || (_DAT_ram_300508e8 != 0)))) {
            piVar3 = (int *)&DAT_ram_3004d5b0;
          }
          else {
            DAT_ram_30049c24 = DAT_ram_30049c24 + 1;
            DAT_ram_30049c84 = DAT_ram_30049c84 + 1;
            DAT_ram_30049c80 = DAT_ram_30049c80 + 4;
            piVar3 = (int *)&DAT_ram_3004d5bc;
          }
          *piVar3 = *piVar3 + 1;
        }
      }
      else {
        DAT_ram_30049c28 = DAT_ram_30049c28 + 1;
      }
    }
LAB_ram_40009640:
    _DAT_ram_3004d5b4 = _DAT_ram_3004d5b4 + 1;
    if (_DAT_ram_3004d5b4 == 3) {
      _DAT_ram_3004d5b4 = 0;
    }
    if (iVar5 == 1) {
      return;
    }
    iVar5 = 1;
  } while( true );
}


/* NanoCore 1.11, address 0x40009832.
 * REA evidence: ev_a57c4c0293bb15eed92b7eec7630fd6939e833c189f2dc097ac52fed3ca9b056
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40009832(float param_1,int param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_40094604 < param_1) {
    param_1 = DAT_ram_40094604;
  }
  uVar2 = _DAT_ram_3004e728;
  if (_DAT_ram_3004e728 == 0) {
    uVar2 = 0xac44;
  }
  uVar3 = FUN_ram_400002f4();
  fVar5 = *(float *)(param_2 + 0x84);
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (DAT_ram_40094604 < fVar5) {
    fVar5 = DAT_ram_40094604;
  }
  if (ABS(param_1 - fVar5) < DAT_ram_40094620) {
    *(float *)(param_2 + 0x84) = param_1;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x8c) = 0;
  }
  else {
    lVar1 = (ulonglong)uVar2 * (ulonglong)param_3 + 999;
    iVar4 = FUN_ram_40003b9c((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
    *(float *)(param_2 + 0x84) = fVar5;
    *(int *)(param_2 + 0x8c) = iVar4;
    *(float *)(param_2 + 0x88) = (param_1 - fVar5) / (float)iVar4;
  }
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.11, address 0x4000990c.
 * REA evidence: ev_a9a96fbbf90e8961a8d33a57ef0ce43615d1a22adc5be5d3ced8b519cb62ba90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000990c(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  char cVar5;
  
  FUN_ram_400002f4();
  uVar4 = DAT_ram_30049d48;
  uVar2 = DAT_ram_30049bde;
  uVar1 = DAT_ram_30049bd0;
  cVar5 = '\0';
  if (-1 < (short)DAT_ram_30049bde) {
    cVar5 = DAT_ram_3004d5d8;
  }
  DAT_ram_30049bd0 = 0xffff;
  DAT_ram_30049d48 = 0xffff;
  DAT_ram_30049bde = -1;
  DAT_ram_3004d5d8 = 0;
  DAT_ram_30049bdc = 0xffff;
  DAT_ram_30049d50._6_1_ = 0xff;
  _DAT_ram_3004d490 = _DAT_ram_3004d490 + 1;
  FUN_ram_400002fa();
  if (-1 < (short)uVar1) {
    FUN_ram_40008426(0,uVar1 & 0xff,0xffffffff);
  }
  if (-1 < (short)uVar4) {
    FUN_ram_40008426(1,uVar4 & 0xff,0xffffffff);
  }
  if (-1 < (short)uVar2) {
    FUN_ram_40008426(2,uVar2 & 0xff,0xffffffff);
  }
  if (cVar5 != '\0') {
    FUN_ram_40009832(DAT_ram_40094604,0x3004d5dc,0x10);
    FUN_ram_400002f4();
    sVar3 = DAT_ram_30049bde;
    FUN_ram_400002fa();
    if (-1 < sVar3) {
      FUN_ram_40007884(0);
      FUN_ram_4000783c(0,0x3004d5dc);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40009a24.
 * REA evidence: ev_125b426e8c48dfb0953a0c288774a292042a1877bbcc92475325646cc371c284
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40009a24(undefined4 param_1,int param_2,undefined4 param_3,code *param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  cVar1 = DAT_ram_3004e77c;
  uVar2 = (uint)(param_5 != 0);
  if ((DAT_ram_3004e77c != '\0') &&
     ((iVar4 = FUN_ram_40006464(), iVar4 == 0 ||
      (iVar4 = FUN_ram_400049c6(0x3004e74c,0xffffffff), iVar4 != 0)))) {
    return -1;
  }
  FUN_ram_400087c0();
  uVar3 = FUN_ram_40007a94(param_1,param_2);
  if (((param_2 == 8) && (7 < DAT_ram_3004e7c8)) || (uVar3 == uVar2)) {
    iVar4 = (*param_4)(uVar2);
  }
  else {
    if ((param_5 == 0) && (iVar4 = FUN_ram_40007cd2(), iVar4 != 0)) {
      FUN_ram_40009832(0,param_3,8);
      iVar4 = FUN_ram_40008df8(param_3);
      if ((iVar4 != 0) && (iVar4 = FUN_ram_40007cd2(), iVar4 != 0)) {
        FUN_ram_40009832(DAT_ram_40094604,param_3,0x10);
        iVar4 = -1;
        goto LAB_ram_40009a7a;
      }
    }
    FUN_ram_4000783c(0,param_3);
    iVar4 = (*param_4)(uVar2);
    if ((iVar4 == 0) && (param_5 != 0)) {
      FUN_ram_40009832(DAT_ram_40094604,param_3,0x10);
    }
  }
LAB_ram_40009a7a:
  FUN_ram_40007cba();
  if (cVar1 != '\0') {
    FUN_ram_40004ab8(0x3004e74c);
  }
  return iVar4;
}


/* NanoCore 1.11, address 0x40009b20.
 * REA evidence: ev_4412736566c37a2aea0a33ed13ac85df480ea14af4e83f0af48f96d1246076e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40009b20(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  iVar4 = FUN_ram_40007a94(4,8);
  if (((param_1 < 0xc) && (iVar2 != 0)) && (iVar3 != 0)) {
    if (param_1 < 8) {
      uVar7 = param_1 + 0x1e & 0xff;
      iVar6 = FUN_ram_40008794();
      if (((iVar6 == 0) && (iVar6 = FUN_ram_40007c98(), iVar6 == 0)) && (DAT_ram_3004d494 != '\0'))
      {
        FUN_ram_400002f4();
        bVar1 = DAT_ram_30049bde < 0;
        if (bVar1) {
          DAT_ram_3004d5d8 = (char)iVar4;
        }
        DAT_ram_30049bde = (short)uVar7;
        _DAT_ram_3004d490 = _DAT_ram_3004d490 + 1;
        FUN_ram_400002fa();
        if ((bVar1) && (iVar4 != 0)) {
          FUN_ram_40009832(0,0x3004d5dc,8);
        }
        FUN_ram_400048c4(0x3004d498);
      }
      else {
        if (iVar4 != 0) {
          iVar6 = FUN_ram_40008794();
          if (iVar6 == 0) {
            iVar6 = FUN_ram_40007c98();
            if (iVar6 != 0) {
              FUN_ram_40009832(0,0x3004d5dc,8);
              iVar6 = FUN_ram_40008df8(0x3004d5dc);
              if (iVar6 != 0) goto LAB_ram_40009c74;
            }
          }
          else {
LAB_ram_40009c74:
            FUN_ram_4000783c(0,0x3004d5dc);
          }
        }
        FUN_ram_40007884(0);
        FUN_ram_400065c6(2);
        iVar6 = FUN_ram_40008508(uVar7);
        if (iVar6 != 0) {
          FUN_ram_40008426(2,uVar7,0xffffffff);
          FUN_ram_40007884(iVar4);
          if (iVar4 != 0) {
            FUN_ram_40009832(DAT_ram_40094604,0x3004d5dc,0x10);
          }
          goto LAB_ram_40009b5c;
        }
        FUN_ram_40008426(2,uVar7,0);
        FUN_ram_400083f2(0x3004d5dc);
        FUN_ram_40007884(iVar4);
        if (iVar4 == 0) {
          iVar6 = FUN_ram_40008794();
          if ((iVar6 != 0) || (iVar6 = FUN_ram_40007c98(), uVar5 = DAT_ram_40094604, iVar6 != 0)) {
            uVar5 = 0;
          }
          FUN_ram_4000783c(uVar5,0x3004d5dc);
        }
        else {
          FUN_ram_40009832(DAT_ram_40094604,0x3004d5dc,0x10);
        }
      }
    }
    else if (param_1 == 8) {
      FUN_ram_4006c754();
    }
    else if (param_1 == 9) {
      FUN_ram_4006c75e();
    }
    else if (param_1 == 10) {
      FUN_ram_4006c7fe();
    }
    else {
      FUN_ram_4006c85e(_DAT_ram_3004e7c4);
    }
    DAT_ram_3004e7c8 = (char)param_1;
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if ((*(int *)(iVar2 + 0x13c) != 8) || (*(byte *)(iVar2 + 0x140) != param_1)) {
      FUN_ram_4006c8b8(iVar3 + 0x144,0xc,param_1);
    }
    *(undefined4 *)(iVar3 + 0x13c) = 8;
    uVar5 = _DAT_ram_3004e7c4;
    *(char *)(iVar3 + 0x140) = (char)param_1;
    *(undefined4 *)(iVar3 + 0x180) = uVar5;
    *(char *)(iVar3 + 0x141) = (char)iVar4;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar5 = 0;
  }
  else {
LAB_ram_40009b5c:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


/* NanoCore 1.11, address 0x40009d68.
 * REA evidence: ev_c44f1ed20eda05fbee88d0c76714e85f4d5d92ac2d26d00494e711c80ae7fd7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000a57e) */
/* WARNING: Removing unreachable block (ram,0x4000a4d2) */
/* WARNING: Removing unreachable block (ram,0x4000aa58) */
/* WARNING: Removing unreachable block (ram,0x4000a956) */
/* WARNING: Removing unreachable block (ram,0x40009ec0) */
/* WARNING: Removing unreachable block (ram,0x4000a97a) */
/* WARNING: Removing unreachable block (ram,0x4000ab10) */
/* WARNING: Removing unreachable block (ram,0x4000a56a) */
/* WARNING: Removing unreachable block (ram,0x4000a654) */
/* WARNING: Removing unreachable block (ram,0x4000aa7e) */
/* WARNING: Removing unreachable block (ram,0x4000ab36) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40009d68(uint param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  char cVar10;
  char cVar11;
  float fVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined2 *puVar20;
  uint uVar21;
  undefined2 uVar22;
  uint uVar23;
  uint uVar24;
  undefined2 uVar25;
  uint uVar26;
  int *piVar27;
  undefined *puVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  ushort uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulonglong uVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  char cStack_160;
  uint uStack_15c;
  uint uStack_10c;
  uint auStack_108 [2];
  float fStack_100;
  uint uStack_fc;
  uint uStack_f8;
  float fStack_f0;
  uint uStack_ec;
  
  cVar11 = DAT_ram_3005e041;
  uVar34 = DAT_ram_30049d40;
  uVar48 = FUN_ram_4003ff66();
  iVar14 = (int)uVar48;
  lVar7 = CONCAT44(DAT_ram_30049bec,DAT_ram_30049be8);
  lVar8 = CONCAT44(_DAT_ram_3004d514,_DAT_ram_3004d510);
  uVar9 = CONCAT44(_DAT_ram_3004e724,_DAT_ram_3004e720);
  if ((1 < param_1) ||
     (lVar7 = CONCAT44(DAT_ram_30049bec,DAT_ram_30049be8),
     lVar8 = CONCAT44(_DAT_ram_3004d514,_DAT_ram_3004d510),
     uVar9 = CONCAT44(_DAT_ram_3004e724,_DAT_ram_3004e720), DAT_ram_30050889 != '\0'))
  goto LAB_ram_4000b3e6;
  if (_DAT_ram_3004e724 != 0 || _DAT_ram_3004e720 != 0) {
    uVar26 = iVar14 - _DAT_ram_3004e720;
    if (uVar26 < DAT_ram_30049c0c) {
      DAT_ram_30049c0c = uVar26;
    }
    if (DAT_ram_30049c10 < uVar26) {
      DAT_ram_30049c10 = uVar26;
    }
    if (DAT_ram_30049c04 != 0) {
      if (DAT_ram_30049c04 < uVar26) {
        uVar23 = uVar26 - DAT_ram_30049c04;
      }
      else {
        uVar23 = (_DAT_ram_3004e720 + DAT_ram_30049c04) - iVar14;
      }
      if (DAT_ram_30049c14 < uVar23) {
        DAT_ram_30049c14 = uVar23;
      }
      if (DAT_ram_30049c04 < uVar26) {
        DAT_ram_30049c18 = DAT_ram_30049c18 + 1;
        if (DAT_ram_30049c1c < uVar26 - DAT_ram_30049c04) {
          DAT_ram_30049c1c = uVar26 - DAT_ram_30049c04;
        }
      }
    }
  }
  fence();
  fence();
  if (_DAT_ram_1860000c != 0) {
    fence();
  }
  DAT_ram_30049c40 = DAT_ram_30049c40 | _DAT_ram_1860000c;
  if ((_DAT_ram_1860000c & 2) != 0) {
    DAT_ram_30049c4c = DAT_ram_30049c4c + 1;
  }
  if ((_DAT_ram_1860000c & 0x40) != 0) {
    DAT_ram_30049c50 = DAT_ram_30049c50 + 1;
  }
  if (_DAT_ram_18600018 < DAT_ram_30049c44) {
    DAT_ram_30049c44 = _DAT_ram_18600018;
  }
  if (DAT_ram_30049c48 < _DAT_ram_18600018) {
    DAT_ram_30049c48 = _DAT_ram_18600018;
  }
  iVar29 = uVar34 * 4;
  uVar23 = param_1 * uVar34 * 4 + 0x300536c0;
  uVar26 = (uVar23 & 0x1f) + iVar29;
  if ((uVar26 & 0x1f) != 0) {
    uVar26 = uVar26 + (0x20 - (int)uVar26 % 0x20);
  }
  fence();
  custom0();
  for (; 0 < (int)uVar26; uVar26 = uVar26 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  DAT_ram_3004dac0 = 1;
  _DAT_ram_3004e720 = uVar48;
  fVar37 = (float)thunk_FUN_ram_40022520();
  if (fVar37 < 0.0) {
    fVar37 = 0.0;
  }
  uVar26 = uVar34 >> 1;
  DAT_ram_30049d44 = (fVar37 - DAT_ram_30049d44) * DAT_ram_40094648 + DAT_ram_30049d44;
  if (DAT_ram_3004e7b9 == '\0') {
    if ((DAT_ram_30050dcc == '\0') && (DAT_ram_3004e7b8 == '\0')) {
      uStack_10c = uStack_10c & 0xffffff00;
      if (uVar26 != 0) {
        if (DAT_ram_30057d14 == '\x01') {
          _DAT_ram_30057d0c = (uint)(_DAT_ram_3005bf40 >> 1) << 0x10;
        }
        else {
          if (DAT_ram_30057d14 == '\x02') {
            uVar15 = (uint)_DAT_ram_3005bf42;
            uVar33 = (ushort)(_DAT_ram_30057d0c >> 0xf) & 0x1ffe;
            uVar30 = _DAT_ram_30057d0c >> 0xf & 0x1ffe;
            if (uVar15 < uVar30) {
              uVar15 = uVar15 + 0x2000;
            }
            uVar15 = uVar15 - uVar30;
            uVar30 = uVar15 & 0xffff;
            if (uVar30 < DAT_ram_30049d5c) {
              DAT_ram_30049d5c = uVar30;
            }
            if (_DAT_ram_30052e04 < uVar30) {
              _DAT_ram_30052e04 = uVar30;
            }
            if (uVar30 < 4) {
              _DAT_ram_3005bf40 = uVar33;
              memset(&DAT_ram_30057e40,0,uVar26 << 2);
              _DAT_ram_30052e14 = _DAT_ram_30052e14 + 1;
              _DAT_ram_30057d18 = _DAT_ram_30057d18 + 1;
              _DAT_ram_3005bf40 = uVar33;
              if (0x5f < _DAT_ram_30057d18) {
                DAT_ram_30057d14 = '\x01';
                _DAT_ram_3005bf40 = _DAT_ram_3005bf42;
                _DAT_ram_30057d0c = (uint)(_DAT_ram_3005bf42 >> 1) << 0x10;
                DAT_ram_30049d64 = 0x10000;
                DAT_ram_30049d60 = 0x10000;
                _DAT_ram_30057d18 = 0;
              }
            }
            else {
              _DAT_ram_30057d18 = 0;
              uVar30 = (uVar15 & 0xffff) >> 1;
              uVar15 = (uVar30 + 0x7e00) * 2;
              if (0x101eb < uVar15) {
                uVar15 = 0x101eb;
              }
              if (uVar15 < 0xfe14) {
                uVar15 = 0xfe14;
              }
              uVar15 = ((int)(uVar15 - DAT_ram_30049d64) >> 6) + DAT_ram_30049d64;
              if ((int)uVar15 < 0xfe14) {
                DAT_ram_30049d64 = 0xfe14;
              }
              else {
                DAT_ram_30049d64 = 0x101eb;
                if ((int)uVar15 < 0x101ec) {
                  DAT_ram_30049d64 = uVar15;
                }
              }
              uVar15 = DAT_ram_30049d64;
              DAT_ram_30049d60 = DAT_ram_30049d64;
              puVar20 = (undefined2 *)&DAT_ram_30057e40;
              if (uVar30 < ((_DAT_ram_30057d0c & 0xffff) + (uVar26 - 1) * DAT_ram_30049d64 >> 0x10)
                           + (DAT_ram_30049d64 + 0xffff >> 0x10) + 1) {
                bVar1 = false;
                uVar30 = 0;
                uVar31 = _DAT_ram_30057d0c;
                do {
                  uVar19 = (uint)_DAT_ram_3005bf42;
                  uVar18 = uVar31 >> 0x10;
                  uVar21 = uVar18 * 2 & 0x1ffe;
                  if (uVar19 < uVar21) {
                    uVar19 = uVar19 + 0x2000;
                  }
                  uVar21 = (uVar19 - uVar21 & 0xffff) >> 1;
                  if (uVar21 < 2) {
                    if (bVar1) {
                      _DAT_ram_30057d0c = uVar31;
                    }
                    uVar31 = _DAT_ram_30057d0c;
                    if (uVar30 < uVar26) {
                      _DAT_ram_30052e14 = _DAT_ram_30052e14 + 1;
                      if (uVar30 == 0) {
                        uVar25 = 0;
                        uVar22 = 0;
                      }
                      else {
                        uVar22 = *(undefined2 *)(&DAT_ram_30057e40 + (uVar30 - 1) * 4);
                        uVar25 = *(undefined2 *)(&DAT_ram_30057e42 + (uVar30 - 1) * 4);
                      }
                      do {
                        *(undefined2 *)(&DAT_ram_30057e40 + uVar30 * 4) = uVar22;
                        *(undefined2 *)(&DAT_ram_30057e42 + uVar30 * 4) = uVar25;
                        uVar30 = uVar30 + 1;
                        uVar31 = _DAT_ram_30057d0c;
                      } while (uVar26 != uVar30);
                    }
                    break;
                  }
                  uVar19 = uVar18 + 1;
                  uVar24 = uVar31 & 0xffff;
                  if (0xfff < uVar19) {
                    uVar19 = 0;
                  }
                  sVar5 = *(short *)((uVar18 * 2 + 1) * 2 + 0x30057f40);
                  sVar6 = *(short *)((uVar19 * 2 + 1) * 2 + 0x30057f40);
                  uVar21 = (uVar21 - 1) * 0x10000;
                  if (uVar15 < uVar21) {
                    uVar21 = uVar15;
                  }
                  *puVar20 = (short)((int)*(short *)(uVar19 * 4 + 0x30057f40) * uVar24 +
                                     (int)*(short *)(uVar18 * 4 + 0x30057f40) * (0x10000 - uVar24) +
                                     0x8000 >> 0x10);
                  uVar31 = uVar31 + uVar21;
                  puVar20[1] = (short)((int)sVar6 * uVar24 + (int)sVar5 * (0x10000 - uVar24) +
                                       0x8000 >> 0x10);
                  if (0xfffffff < uVar31) {
                    uVar31 = uVar31 + 0xf0000000;
                  }
                  uVar30 = uVar30 + 1;
                  puVar20 = puVar20 + 2;
                  bVar1 = true;
                } while (uVar26 != uVar30);
              }
              else {
                uVar30 = 0;
                do {
                  uVar31 = _DAT_ram_30057d0c >> 0x10;
                  uVar18 = uVar31 + 1;
                  uVar21 = _DAT_ram_30057d0c & 0xffff;
                  if (0xfff < uVar18) {
                    uVar18 = 0;
                  }
                  sVar5 = *(short *)((uVar31 * 2 + 1) * 2 + 0x30057f40);
                  _DAT_ram_30057d0c = _DAT_ram_30057d0c + uVar15;
                  sVar6 = *(short *)((uVar18 * 2 + 1) * 2 + 0x30057f40);
                  *puVar20 = (short)((int)*(short *)(uVar18 * 4 + 0x30057f40) * uVar21 +
                                     (int)*(short *)(uVar31 * 4 + 0x30057f40) * (0x10000 - uVar21) +
                                     0x8000 >> 0x10);
                  puVar20[1] = (short)((int)sVar6 * uVar21 + (int)sVar5 * (0x10000 - uVar21) +
                                       0x8000 >> 0x10);
                  if (0xfffffff < _DAT_ram_30057d0c) {
                    _DAT_ram_30057d0c = _DAT_ram_30057d0c + 0xf0000000;
                  }
                  uVar30 = uVar30 + 1;
                  puVar20 = puVar20 + 2;
                  uVar31 = _DAT_ram_30057d0c;
                } while (uVar26 != uVar30);
              }
              _DAT_ram_30057d0c = uVar31;
              _DAT_ram_3005bf40 = (ushort)(((_DAT_ram_30057d0c >> 0x10) << 0x11) >> 0x10);
            }
            goto LAB_ram_4000a704;
          }
          if (DAT_ram_30057d14 != '\0') {
            DAT_ram_30057d14 = '\0';
          }
          _DAT_ram_30057d0c = 0;
          DAT_ram_30049d64 = 0x10000;
        }
        _DAT_ram_30057d18 = 0;
        memset(&DAT_ram_30057e40,0,uVar26 << 2);
      }
LAB_ram_4000a704:
      iVar17 = FUN_ram_4002a6ae();
      iVar16 = 0;
      if (iVar17 != 0) {
        FUN_ram_4002a778(0x30057d40,uVar26,&uStack_10c);
        iVar16 = 0x30057d40;
      }
      if (uVar26 != 0) {
        uVar15 = uVar26;
        if (0x40 < uVar26) {
          uVar15 = 0x40;
        }
        uVar30 = _DAT_ram_3004e728;
        if (_DAT_ram_3004e728 == 0) {
          uVar30 = 0xac44;
        }
        uStack_15c = uStack_10c & 0xff;
        FUN_ram_40024724(uVar15,uVar30,&fStack_f0);
        fVar2 = DAT_ram_40094650;
        fVar37 = DAT_ram_30049d44;
        iVar32 = uVar15 << 2;
        iVar17 = 0;
        do {
          uVar45 = (ulonglong)(uint)((float)(*(int *)(uVar23 + iVar17 * 2) >> 8) * fVar2 * fVar37);
          *(ulonglong *)(iVar17 + 0x3004dac4) = uVar45;
          *(ulonglong *)(iVar17 + 0x3004dbc4) = uVar45;
          iVar17 = iVar17 + 4;
        } while (iVar32 != iVar17);
        fStack_100 = 0.0;
        uStack_fc = 0;
        uStack_f8 = 0;
        auStack_108[0] = CONCAT31(auStack_108[0]._1_3_,1);
        iVar17 = FUN_ram_40022914(&DAT_ram_3004e72c);
        if (iVar17 == 0) {
          memset(0x3004dcc4,0,iVar32);
          memset(0x3004ddc4,0,iVar32);
          fStack_100 = 4.8335047e-10;
LAB_ram_4000af0c:
          uStack_fc = 0;
          uStack_f8 = uStack_f8 & 0xffffff00;
        }
        else {
          FUN_ram_40060140(0x3004dec4,0x3004dac4,0x3004dbc4,0x3004dcc4,0x3004ddc4,uVar15,auStack_108
                           ,&fStack_100);
          if (DAT_ram_3004e7a8 != '\0') {
            iVar17 = 0;
            do {
              uVar45 = (ulonglong)
                       (uint)((float)(*(int *)(uVar23 + iVar17 * 2) >> 8) * fVar2 * fVar37);
              *(ulonglong *)(iVar17 + 0x3004dac4) = uVar45;
              *(ulonglong *)(iVar17 + 0x3004dbc4) = uVar45;
              iVar17 = iVar17 + 4;
            } while (iVar32 != iVar17);
            fStack_100 = 4.8332205e-10;
            goto LAB_ram_4000af0c;
          }
        }
        fVar37 = fStack_100;
        if (fStack_100 == 0.0) {
          fVar37 = 4.8332205e-10;
        }
        uVar30 = 0;
        if ((uStack_f8 & 0xff) != 0) {
          uVar30 = uStack_fc;
        }
        FUN_ram_40022938(&DAT_ram_3004e72c,fVar37,uVar30,uVar15);
        FUN_ram_40008980();
        if (DAT_ram_3004d565 != '\0') {
          memset(fVar37,0,iVar32);
          if (uVar30 != 0) {
            memset(uVar30,0,iVar32);
          }
        }
        fVar2 = (float)DAT_ram_30049d50._5_1_ / DAT_ram_40094658;
        if ((float)DAT_ram_30049d50 < 0.0) {
          fVar46 = 0.0;
        }
        else {
          fVar46 = (float)DAT_ram_30049d50;
          if (DAT_ram_40094604 < (float)DAT_ram_30049d50) {
            fVar46 = DAT_ram_40094604;
          }
        }
        fVar47 = 0.0;
        fVar46 = (fVar46 - (float)_DAT_ram_30049d4c) * DAT_ram_4009464c + (float)_DAT_ram_30049d4c;
        _DAT_ram_30049d4c = CONCAT44((float)DAT_ram_30049d50,fVar46);
        iVar17 = FUN_ram_40022616();
        if ((iVar16 != 0) && (0 < iVar17)) {
          fVar47 = (float)iVar17 * DAT_ram_4009465c;
        }
        if (uStack_15c != 1) {
          uStack_15c = 2;
        }
        iVar17 = FUN_ram_400225a0();
        fVar35 = 0.0;
        if ((DAT_ram_3005e148 == '\0') && (0 < iVar17)) {
          fVar35 = (float)iVar17 * DAT_ram_4009465c;
        }
        iVar17 = FUN_ram_40022428();
        fVar39 = DAT_ram_40094644;
        fVar38 = DAT_ram_40094640;
        fVar36 = DAT_ram_4009463c;
        fVar3 = DAT_ram_40094600;
        cVar10 = DAT_ram_30057d04;
        iVar32 = 2;
        fVar46 = fVar46 * DAT_ram_40094634;
        uVar31 = 0;
        do {
          fVar12 = DAT_ram_40094654;
          fVar43 = fVar2 * (float)*(undefined8 *)((int)fVar37 + uVar31 * 4);
          fVar40 = fVar36;
          if ((fVar43 <= fVar36) && (fVar40 = fVar43, fVar43 < DAT_ram_40094640)) {
            fVar40 = DAT_ram_40094640;
          }
          if (uVar30 != 0) {
            fVar43 = fVar2 * (float)*(undefined8 *)(uVar31 * 4 + uVar30);
            fVar44 = fVar36;
            if ((fVar43 <= fVar36) && (fVar44 = fVar43, fVar43 < fVar38)) {
              fVar44 = fVar38;
            }
            fVar40 = (fVar44 + fVar40) * DAT_ram_40094634;
          }
          fVar43 = fVar40;
          fVar44 = fVar40;
          fVar42 = fVar40;
          if (0.0 < fVar47) {
            if (uStack_15c == 1) {
              fVar43 = (float)(int)*(short *)(iVar16 + uVar31 * 2) * DAT_ram_40094660 * fVar47;
              fVar44 = fVar43;
            }
            else {
              fVar43 = (float)(int)*(short *)(iVar16 + uVar31 * 4) * DAT_ram_40094660 * fVar47;
              fVar44 = (float)(int)*(short *)(iVar16 + iVar32) * DAT_ram_40094660 * fVar47;
            }
            fVar43 = fVar40 + fVar43;
            fVar44 = fVar40 + fVar44;
            if (iVar17 != 0) {
              fVar40 = fVar43;
              fVar42 = fVar44;
            }
          }
          if (0.0 < fVar35) {
            fVar41 = (float)(int)*(short *)(&DAT_ram_30057e40 + uVar31 * 4) * DAT_ram_40094660 *
                     fVar35;
            fVar4 = (float)(int)*(short *)(&DAT_ram_30057e40 + iVar32) * DAT_ram_40094660 * fVar35;
            fVar43 = fVar43 + fVar41;
            fVar44 = fVar44 + fVar4;
            if (iVar17 != 0) {
              fVar40 = fVar40 + fVar41;
              fVar42 = fVar42 + fVar4;
            }
          }
          if ((cVar11 != '\0') && (cVar10 != '\0')) {
            fVar40 = fVar40 * fVar46;
            fVar42 = fVar42 * fVar46;
            fVar41 = fVar36;
            if ((fVar40 <= fVar36) && (fVar41 = fVar40, fVar40 < fVar38)) {
              fVar41 = fVar38;
            }
            fVar41 = (float)FUN_ram_40007704(fVar41);
            fVar40 = fVar36;
            if ((fVar42 <= fVar36) && (fVar40 = fVar42, fVar42 < fVar38)) {
              fVar40 = fVar38;
            }
            fVar42 = (float)FUN_ram_40007704(fVar40);
            fVar40 = fVar39;
            if ((fVar41 <= fVar39) && (fVar40 = fVar41, fVar41 < fVar3)) {
              fVar40 = fVar3;
            }
            fVar41 = fVar39;
            if ((fVar42 <= fVar39) && (fVar41 = fVar42, fVar42 < fVar3)) {
              fVar41 = fVar3;
            }
            uVar21 = _DAT_ram_30057d02 + 1 & 0x1fff;
            if ((_DAT_ram_30057d00 == uVar21) || ((uint)_DAT_ram_30057d00 == (uVar21 + 1 & 0x1fff)))
            {
              _DAT_ram_3004e814 = _DAT_ram_3004e814 + 1;
            }
            else {
              *(short *)((uint)_DAT_ram_30057d02 * 2 + 0x30053d00) =
                   (short)((uint)(int)(fVar40 * fVar12) >> 8);
              *(short *)(uVar21 * 2 + 0x30053d00) = (short)((uint)(int)(fVar41 * fVar12) >> 8);
              _DAT_ram_30057d02 = (ushort)(uVar21 + 1) & 0x1fff;
            }
          }
          fVar43 = fVar46 * fVar43;
          fVar44 = fVar46 * fVar44;
          fVar40 = fVar36;
          if ((fVar43 <= fVar36) && (fVar40 = fVar43, fVar43 < fVar38)) {
            fVar40 = fVar38;
          }
          fVar43 = (float)FUN_ram_40007704(fVar40);
          fVar40 = DAT_ram_4009463c;
          if ((DAT_ram_4009463c < fVar44) || (fVar40 = DAT_ram_40094640, fVar44 < DAT_ram_40094640))
          {
            fVar44 = fVar40;
          }
          fVar44 = (float)FUN_ram_40007704(fVar44);
          fVar40 = fVar39;
          if ((fVar43 <= fVar39) && (fVar40 = fVar43, fVar43 < DAT_ram_40094600)) {
            fVar40 = DAT_ram_40094600;
          }
          *(int *)(&DAT_ram_30053ac0 + uVar31 * 8) = (int)(fVar40 * fVar12) << 8;
          fVar40 = fVar39;
          if ((fVar44 <= fVar39) && (fVar40 = fVar44, fVar44 < DAT_ram_40094600)) {
            fVar40 = DAT_ram_40094600;
          }
          uVar31 = uVar31 + 1;
          *(int *)(&DAT_ram_30053ac0 + iVar32 * 2) = (int)(fVar40 * fVar12) << 8;
          iVar32 = iVar32 + 4;
        } while (uVar15 != uVar31);
      }
    }
    else {
      if ((DAT_ram_30050dcc == '\0') || (DAT_ram_30049d59 == '\0')) {
        if (uVar26 != 0) {
          uVar15 = uVar26;
          if (0x40 < uVar26) {
            uVar15 = 0x40;
          }
          uVar30 = _DAT_ram_3004e728;
          if (_DAT_ram_3004e728 == 0) {
            uVar30 = 0xac44;
          }
          FUN_ram_40024724(uVar15,uVar30,&fStack_f0);
          fVar47 = DAT_ram_40094650;
          fVar46 = DAT_ram_40094640;
          fVar2 = DAT_ram_4009463c;
          fVar37 = DAT_ram_30049d44;
          if ((float)DAT_ram_30049d50 < 0.0) {
            fVar35 = 0.0;
          }
          else {
            fVar35 = (float)DAT_ram_30049d50;
            if (DAT_ram_40094604 < (float)DAT_ram_30049d50) {
              fVar35 = DAT_ram_40094604;
            }
          }
          fVar35 = (fVar35 - (float)_DAT_ram_30049d4c) * DAT_ram_4009464c + (float)_DAT_ram_30049d4c
          ;
          _DAT_ram_30049d4c = (ulonglong)(uint)fVar35;
          iVar17 = 0;
          do {
            fVar3 = (float)(*(int *)(uVar23 + iVar17 * 2) >> 8) * fVar47 * fVar37;
            uVar45 = (ulonglong)(uint)fVar3;
            if (fVar2 < fVar3) {
              uVar45 = (ulonglong)(uint)fVar2;
            }
            else if (fVar3 < fVar46) {
              uVar45 = (ulonglong)(uint)fVar46;
            }
            *(ulonglong *)(iVar17 + 0x3004dac4) = uVar45;
            *(ulonglong *)(iVar17 + 0x3004dbc4) = uVar45;
            iVar17 = iVar17 + 4;
          } while (uVar15 << 2 != iVar17);
          FUN_ram_40022938(&DAT_ram_3004e72c,0x3004dac4,0x3004dbc4);
          FUN_ram_40008980();
          fVar3 = DAT_ram_40094654;
          fVar47 = DAT_ram_40094644;
          fVar46 = DAT_ram_40094640;
          fVar2 = DAT_ram_4009463c;
          fVar37 = DAT_ram_40094600;
          fVar35 = fVar35 * DAT_ram_40094634;
          piVar27 = (int *)&DAT_ram_30053ac0;
          iVar17 = 0;
          do {
            fVar36 = (float)*(undefined8 *)(iVar17 + 0x3004dac4) * fVar35;
            fVar38 = (float)*(undefined8 *)(iVar17 + 0x3004dbc4) * fVar35;
            fVar39 = fVar2;
            if ((fVar36 <= fVar2) && (fVar39 = fVar36, fVar36 < fVar46)) {
              fVar39 = fVar46;
            }
            fVar36 = fVar2;
            if ((fVar38 <= fVar2) && (fVar36 = fVar38, fVar38 < fVar46)) {
              fVar36 = fVar46;
            }
            fVar38 = (float)FUN_ram_40007704(fVar39);
            fVar39 = (float)FUN_ram_40007704(fVar36);
            fVar36 = fVar47;
            if ((fVar38 <= fVar47) && (fVar36 = fVar38, fVar38 < fVar37)) {
              fVar36 = fVar37;
            }
            *piVar27 = (int)(fVar36 * fVar3) << 8;
            fVar36 = fVar47;
            if ((fVar39 <= fVar47) && (fVar36 = fVar39, fVar39 < fVar37)) {
              fVar36 = fVar37;
            }
            iVar17 = iVar17 + 4;
            piVar27[1] = (int)(fVar36 * fVar3) << 8;
            piVar27 = piVar27 + 2;
          } while (uVar15 << 2 != iVar17);
        }
      }
      else {
        memset(&DAT_ram_30053ac0,0,iVar29);
        FUN_ram_4000899a(uVar26);
      }
      if (cVar11 != '\0') {
        FUN_ram_4000830c(&DAT_ram_30053ac0,uVar26);
      }
      fVar37 = DAT_ram_30049d44;
      if (((DAT_ram_30050dcc != '\0') && (DAT_ram_30050dcc != '\0')) && (uVar26 != 0)) {
        uVar15 = _DAT_ram_30052e00;
        for (uVar30 = 0; uVar30 != (uVar26 & 0xfffffffc); uVar30 = uVar30 + 4) {
          iVar16 = 0;
          iVar17 = 0;
          do {
            iVar32 = iVar17 * 8;
            iVar17 = iVar17 + 1;
            iVar16 = iVar16 + (*(int *)(uVar23 + uVar30 * 8 + iVar32) >> 0x10);
          } while (iVar17 != 4);
          iVar17 = (int)((float)(int)(short)(iVar16 / 4) * fVar37);
          if (iVar17 < -0x8000) {
            iVar17 = -0x8000;
          }
          if (0x7fff < iVar17) {
            iVar17 = 0x7fff;
          }
          if (0xfff < uVar15 - _DAT_ram_30050dd0) {
            _DAT_ram_30050dd0 = _DAT_ram_30050dd0 + 1;
          }
          *(short *)((uVar15 & 0xfff) * 2 + 0x30050e00) = (short)iVar17;
          uVar15 = uVar15 + 1;
        }
        _DAT_ram_30052e00 = _DAT_ram_30052e00 + (uVar34 >> 3);
      }
    }
  }
  else {
    FUN_ram_4000304c(&DAT_ram_30053ac0,uVar23,iVar29);
    if (uVar26 != 0) {
      if (DAT_ram_3004e738 == '\0' && DAT_ram_3004e739 == '\0') {
        FUN_ram_4000899a(uVar26);
      }
      else {
        iVar17 = 0;
        uVar15 = 0;
        piVar27 = (int *)&DAT_ram_30053ac0;
        do {
          fStack_100 = (float)*piVar27;
          fStack_f0 = (float)piVar27[1];
          uVar15 = uVar15 + 1;
          iVar16 = FUN_ram_40022938(&DAT_ram_3004e72c,&fStack_100,&fStack_f0,1);
          if (iVar16 != 0) {
            iVar17 = iVar16;
          }
          *piVar27 = (int)fStack_100;
          piVar27[1] = (int)fStack_f0;
          piVar27 = piVar27 + 2;
        } while (uVar26 != uVar15);
        FUN_ram_40008980(iVar17);
      }
    }
    if (cVar11 != '\0') {
      FUN_ram_4000830c(uVar23,uVar26);
    }
  }
  if (DAT_ram_30049d50._7_1_ != '\0') {
    bVar1 = false;
    if (uVar26 != 0) {
      lVar7 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar21 = 0;
      uVar15 = *(int *)(param_1 * uVar34 * 4 + 0x300536c0) >> 8;
      do {
        iVar17 = *(int *)(uVar23 + uVar21 * 8);
        uVar24 = iVar17 >> 8;
        uVar18 = iVar17 >> 0x1f;
        uVar19 = (uVar18 ^ uVar24) - uVar18;
        if (uVar31 < uVar19) {
          uVar31 = uVar19;
        }
        if ((uVar21 != 0) &&
           (uVar19 = (int)(uVar24 - uVar15) >> 0x1f, uVar19 = (uVar24 - uVar15 ^ uVar19) - uVar19,
           uVar30 < uVar19)) {
          uVar30 = uVar19;
        }
        uVar21 = uVar21 + 1;
        lVar7 = lVar7 + CONCAT44(uVar18,uVar24);
        uVar15 = uVar24;
      } while (uVar26 != uVar21);
      if (lVar7 < 0) {
        lVar7 = -lVar7;
      }
      uVar15 = FUN_ram_400037ac((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),uVar26,0);
      bVar1 = false;
      if ((uVar31 < 0x79999a) && (uVar15 < 0x19999a)) {
        bVar1 = uVar30 < 0x733334;
      }
    }
    _DAT_ram_300508e0 = _DAT_ram_300508e0 + 1;
    if (bVar1) {
      _DAT_ram_300508e2 = _DAT_ram_300508e2 + 1;
    }
    else {
      _DAT_ram_300508e2 = 0;
    }
    if ((0x7f < _DAT_ram_300508e0) && ((0xf < _DAT_ram_300508e2 || (0x1bf < _DAT_ram_300508e0)))) {
      DAT_ram_30049d50._7_1_ = '\0';
      _DAT_ram_30049d4c = _DAT_ram_30049d4c & 0xffffffff00000000;
    }
    memset(&DAT_ram_30053ac0,0,iVar29);
  }
  if (DAT_ram_300508e5 == '\0') {
    if ((((DAT_ram_30049bd2 != '\0') && (DAT_ram_30050888 == '\0')) &&
        (DAT_ram_30049d50._7_1_ == '\0')) && (DAT_ram_3004d534 == '\0')) {
      DAT_ram_300508e4 = 1;
    }
LAB_ram_4000a0b2:
    _DAT_ram_30049d4c = _DAT_ram_30049d4c & 0xffffffff00000000;
    memset(&DAT_ram_30053ac0,0,iVar29);
  }
  else if (_DAT_ram_300508e8 != 0) {
    _DAT_ram_300508e8 = _DAT_ram_300508e8 + -1;
    goto LAB_ram_4000a0b2;
  }
  if (((DAT_ram_300508e6 == '\0') && (DAT_ram_30049bd2 != '\0')) &&
     ((DAT_ram_30050888 == '\0' && ((DAT_ram_300508e5 != '\0' && (_DAT_ram_300508e8 == 0)))))) {
    FUN_ram_400084ce(1);
    DAT_ram_300508e6 = '\x01';
    _DAT_ram_300508ea = 0x20;
  }
  if (_DAT_ram_300508ea != 0) {
    _DAT_ram_300508ea = _DAT_ram_300508ea + -1;
    _DAT_ram_30049d4c = _DAT_ram_30049d4c & 0xffffffff00000000;
    memset(&DAT_ram_30053ac0,0,iVar29);
  }
  if (((DAT_ram_300508e6 == '\0') || (DAT_ram_30049bd2 == '\0')) || (DAT_ram_30050888 != '\0')) {
    _DAT_ram_30049d4c = _DAT_ram_30049d4c & 0xffffffff00000000;
    memset(&DAT_ram_30053ac0,0,iVar29);
  }
  uVar15 = uVar34;
  if (((uVar34 == 0x80) && (DAT_ram_300508e5 != '\0')) && (DAT_ram_3004d534 == '\0')) {
    uVar30 = _DAT_ram_3004d5c4 - _DAT_ram_3004d5a0;
    if (uVar30 < DAT_ram_30049bd8) {
      DAT_ram_30049bd8 = uVar30;
    }
    if (_DAT_ram_3004d590 < uVar30) {
      _DAT_ram_3004d590 = uVar30;
    }
    if (uVar30 < 0x81) {
      if (0x27 < uVar30) {
        _DAT_ram_3004d598 = _DAT_ram_3004d598 + 1;
        goto LAB_ram_4000b114;
      }
      uVar15 = 0x41;
      _DAT_ram_3004d594 = _DAT_ram_3004d594 + 1;
    }
    else {
      uVar15 = 0x3f;
      _DAT_ram_3004d59c = _DAT_ram_3004d59c + 1;
    }
    uVar30 = 0;
    do {
      uVar31 = uVar30;
      if (uVar15 == 0x41) {
        uVar31 = 0x40 - uVar30;
      }
      uVar21 = FUN_ram_40003b9c((int)((ulonglong)uVar31 * 0x3f) << 0x10,
                                (int)((ulonglong)uVar31 * 0x3f >> 0x10),uVar15 - 1,0);
      uVar19 = uVar21 >> 0x10;
      uVar18 = uVar19 + 1;
      if (0x3f < uVar18) {
        uVar18 = 0x3f;
      }
      uVar21 = uVar21 & 0xffff;
      uVar45 = (longlong)*(int *)(&DAT_ram_30053ac0 + uVar18 * 8) -
               (longlong)*(int *)(&DAT_ram_30053ac0 + uVar19 * 8);
      lVar7 = (uVar45 & 0xffffffff) * (ulonglong)uVar21;
      uVar30 = uVar30 + 1;
      *(uint *)(&DAT_ram_30053ac0 + uVar31 * 8) =
           ((uint)(((ulonglong)((int)((ulonglong)lVar7 >> 0x20) + uVar21 * (int)(uVar45 >> 0x20)) <<
                   0x20) >> 0x10) | (uint)((ulonglong)lVar7 >> 0x10) & 0xffff) +
           *(int *)(&DAT_ram_30053ac0 + uVar19 * 8);
      uVar45 = (longlong)*(int *)(&DAT_ram_30053ac4 + uVar18 * 8) -
               (longlong)*(int *)(&DAT_ram_30053ac4 + uVar19 * 8);
      lVar7 = (uVar45 & 0xffffffff) * (ulonglong)uVar21;
      *(uint *)(&DAT_ram_30053ac0 + (uVar31 * 2 + 1) * 4) =
           *(int *)(&DAT_ram_30053ac4 + uVar19 * 8) +
           ((uint)(((ulonglong)((int)((ulonglong)lVar7 >> 0x20) + uVar21 * (int)(uVar45 >> 0x20)) <<
                   0x20) >> 0x10) | (uint)((ulonglong)lVar7 >> 0x10) & 0xffff);
    } while (uVar15 != uVar30);
    uVar15 = uVar15 << 1;
  }
LAB_ram_4000b114:
  if ((uVar15 - 1 < 0x1ff) && ((uVar15 & 1) == 0)) {
    uVar30 = _DAT_ram_3004d5c4 - _DAT_ram_3004d5a0;
    if (uVar30 < 0x200) {
      uVar31 = (_DAT_ram_3004d5a0 + 0x1ff) - _DAT_ram_3004d5c4;
      if (DAT_ram_3004d5c0 != '\0') {
        iVar29 = FUN_ram_400077dc();
        uVar30 = uVar30 + 0x18 + iVar29;
      }
      DAT_ram_30049bd4 = uVar30;
      _DAT_ram_3004d5a4 = uVar30;
      if (uVar15 <= uVar31) {
        uVar31 = _DAT_ram_3004d5c4 & 0x1ff;
        uVar30 = uVar15;
        if (0x200 < uVar31 + uVar15) {
          uVar30 = 0x200 - uVar31;
        }
        FUN_ram_4000304c(uVar31 * 4 + 0x30052ec0,&DAT_ram_30053ac0,uVar30 * 4);
        if (uVar30 < uVar15) {
          FUN_ram_4000304c(0x30052ec0,&DAT_ram_30053ac0 + uVar30 * 4,(uVar15 - uVar30) * 4);
        }
        FUN_ram_400002f4();
        _DAT_ram_3004d5c4 = _DAT_ram_3004d5c4 + uVar15;
        if ((DAT_ram_3004d57c != '\0') &&
           (((DAT_ram_300508e5 == '\0' || (DAT_ram_3004d534 != '\0')) &&
            (_DAT_ram_300508d4 == _DAT_ram_300508d0)))) {
          if (uVar15 + 0x28 < _DAT_ram_3004d5c4 - _DAT_ram_3004d5a0) {
            uVar15 = (_DAT_ram_3004d5c4 - _DAT_ram_3004d5a0) - (uVar15 + 0x28) & 0xfffffffe;
            _DAT_ram_3004d5a0 = _DAT_ram_3004d5a0 + uVar15;
            _DAT_ram_3004d588 = uVar15 + _DAT_ram_3004d588;
          }
          DAT_ram_3004d567 = 8;
          DAT_ram_3004d57c = '\0';
          DAT_ram_3004d574 = 1;
          _DAT_ram_3004d570 = _DAT_ram_3004d5a0;
          _DAT_ram_3004d56c = _DAT_ram_3004d5ac;
          _DAT_ram_3004d578 = _DAT_ram_3004d5b8;
          _DAT_ram_3004d580 = _DAT_ram_300508d4;
          _DAT_ram_3004d568 = _DAT_ram_3004d588;
          DAT_ram_300508e5 = '\x01';
          DAT_ram_300508e4 = 0;
          DAT_ram_3004d534 = '\0';
          _DAT_ram_3004d584 = _DAT_ram_3004d5c4;
        }
        FUN_ram_400002fa();
        uVar15 = _DAT_ram_3004d5c4 - _DAT_ram_3004d5a0;
        if (DAT_ram_3004d5c0 != '\0') {
          iVar29 = FUN_ram_400077dc();
          uVar15 = uVar15 + 0x18 + iVar29;
        }
        DAT_ram_30049bd4 = uVar15;
        if (_DAT_ram_3004e728 != 0) {
          if (_DAT_ram_3004e728 == 0) {
            uVar30 = 0xffffffff;
            uVar31 = 0xffffffff;
          }
          else {
            uVar30 = (DAT_ram_30049d40 * 500000) / _DAT_ram_3004e728;
            uVar31 = (uVar15 * 500000) / _DAT_ram_3004e728;
          }
          uVar30 = uVar30 + uVar31;
          if (uVar30 < DAT_ram_30049c5c) {
            DAT_ram_30049c5c = uVar30;
          }
          if (DAT_ram_30049c60 < uVar30) {
            DAT_ram_30049c60 = uVar30;
          }
          if (uVar15 < DAT_ram_30049c38) {
            DAT_ram_30049c38 = uVar15;
          }
        }
        goto LAB_ram_4000b152;
      }
    }
    _DAT_ram_3004d58c = _DAT_ram_3004d58c + 1;
    DAT_ram_30049c88 = DAT_ram_30049c88 + 1;
  }
LAB_ram_4000b152:
  fStack_100 = 0.0;
  fStack_f0 = 0.0;
  uStack_fc = 0;
  uStack_ec = 0;
  uStack_10c = 0;
  auStack_108[0] = 0;
  bVar1 = DAT_ram_30050858 != -1;
  DAT_ram_30050858 = DAT_ram_30050858 + '\x01';
  if (bVar1) {
    DAT_ram_30050858 = '\0';
    if (uVar34 != 0) {
      FUN_ram_400082aa(uVar23,uVar34,&uStack_10c,&fStack_100);
      FUN_ram_400082aa(&DAT_ram_30053ac0,uVar34,auStack_108,&fStack_f0);
    }
    _DAT_ram_3004d4f8 = uStack_10c;
    if (uStack_10c < _DAT_ram_3005085c) {
      _DAT_ram_3004d4f8 = _DAT_ram_3005085c - (_DAT_ram_3005085c - uStack_10c >> 7);
    }
    if ((uStack_fc < _DAT_ram_30050864) ||
       ((_DAT_ram_3004d500 = CONCAT44(uStack_fc,fStack_100), _DAT_ram_30050864 == uStack_fc &&
        (_DAT_ram_3004d500 = CONCAT44(uStack_fc,fStack_100),
        (uint)fStack_100 < (uint)_DAT_ram_30050860)))) {
      uVar45 = _DAT_ram_30050860 - CONCAT44(uStack_fc,fStack_100);
      uVar23 = (uint)(uVar45 >> 0x20);
      _DAT_ram_3004d500 =
           _DAT_ram_30050860 -
           CONCAT44(uVar23 >> 7,(int)(((ulonglong)uVar23 << 0x20 | uVar45 & 0xffffffff) >> 7));
    }
    uVar23 = (uint)((ulonglong)_DAT_ram_3004d500 >> 0x20);
    _DAT_ram_3004d508 = auStack_108[0];
    if (auStack_108[0] < _DAT_ram_30050868) {
      _DAT_ram_3004d508 = _DAT_ram_30050868 - (_DAT_ram_30050868 - auStack_108[0] >> 7);
    }
    if ((uStack_ec < _DAT_ram_30050874) ||
       ((_DAT_ram_3004d510 = CONCAT44(uStack_ec,fStack_f0), _DAT_ram_30050874 == uStack_ec &&
        (_DAT_ram_3004d510 = CONCAT44(uStack_ec,fStack_f0),
        (uint)fStack_f0 < (uint)_DAT_ram_30050870)))) {
      uVar45 = _DAT_ram_30050870 - CONCAT44(uStack_ec,fStack_f0);
      uVar15 = (uint)(uVar45 >> 0x20);
      _DAT_ram_3004d510 =
           _DAT_ram_30050870 -
           CONCAT44(uVar15 >> 7,(int)(((ulonglong)uVar15 << 0x20 | uVar45 & 0xffffffff) >> 7));
    }
    uVar15 = (uint)((ulonglong)_DAT_ram_3004d510 >> 0x20);
    iVar29 = 7;
    do {
      if (*(uint *)(iVar29 * 4 + 0x400946bc) <= _DAT_ram_3004d4f8) {
        DAT_ram_3004d518 = (char)iVar29 + '\x01';
        goto LAB_ram_4000b294;
      }
      iVar29 = iVar29 + -1;
    } while (iVar29 != -1);
    DAT_ram_3004d518 = '\0';
LAB_ram_4000b294:
    puVar13 = &DAT_ram_400946e0;
    iVar29 = 7;
    puVar28 = puVar13;
    do {
      if ((*(uint *)(puVar28 + 0x3c) <= uVar23) &&
         ((*(uint *)(puVar28 + 0x3c) != uVar23 ||
          (*(uint *)(puVar28 + 0x38) <= (uint)_DAT_ram_3004d500)))) {
        DAT_ram_3004d519 = (char)iVar29 + '\x01';
        goto LAB_ram_4000b2c4;
      }
      iVar29 = iVar29 + -1;
      puVar28 = puVar28 + -8;
    } while (iVar29 != -1);
    DAT_ram_3004d519 = '\0';
LAB_ram_4000b2c4:
    iVar29 = 7;
    do {
      if (*(uint *)(iVar29 * 4 + 0x400946bc) <= _DAT_ram_3004d508) {
        DAT_ram_3004d51a = (char)iVar29 + '\x01';
        goto LAB_ram_4000b2da;
      }
      iVar29 = iVar29 + -1;
    } while (iVar29 != -1);
    DAT_ram_3004d51a = '\0';
LAB_ram_4000b2da:
    iVar29 = 7;
    do {
      if ((*(uint *)(puVar13 + 0x3c) <= uVar15) &&
         ((*(uint *)(puVar13 + 0x3c) != uVar15 ||
          (*(uint *)(puVar13 + 0x38) <= (uint)_DAT_ram_3004d510)))) {
        cStack_160 = (char)iVar29 + '\x01';
        goto LAB_ram_4000b302;
      }
      iVar29 = iVar29 + -1;
      puVar13 = puVar13 + -8;
    } while (iVar29 != -1);
    cStack_160 = '\0';
LAB_ram_4000b302:
    DAT_ram_3004d51b = cStack_160;
    _DAT_ram_3005085c = _DAT_ram_3004d4f8;
    _DAT_ram_30050860 = _DAT_ram_3004d500;
    _DAT_ram_30050868 = _DAT_ram_3004d508;
    _DAT_ram_30050870 = _DAT_ram_3004d510;
  }
  FUN_ram_40076318(_DAT_ram_3004e820);
  fence();
  uVar23 = *(int *)(_DAT_ram_3004e7d0 + 0x28) << 1;
  if (uVar34 != 0) {
    uVar23 = uVar23 % uVar34;
  }
  if (uVar23 < DAT_ram_30049c6c) {
    DAT_ram_30049c6c = uVar23;
  }
  if (DAT_ram_30049c70 < uVar23) {
    DAT_ram_30049c70 = uVar23;
  }
  if ((((_DAT_ram_3004d530 != 0) && (DAT_ram_300508e5 != '\0')) && (_DAT_ram_3004d52c == 0)) &&
     (_DAT_ram_300508e8 == 0)) {
    if ((DAT_ram_30049d40 == 0x80) && (DAT_ram_3004d565 == '\0')) {
      _DAT_ram_30057d08 = 0;
    }
    else {
      _DAT_ram_30057d08 = _DAT_ram_30057d08 + 1;
      if (0x13 < _DAT_ram_30057d08) {
        DAT_ram_3004d566 = 0;
        _DAT_ram_30057d08 = 0;
        _DAT_ram_3004d52c = 0x80;
        FUN_ram_400048c4();
      }
    }
  }
  iVar29 = FUN_ram_4003ff66();
  uVar34 = iVar29 - iVar14;
  lVar7 = (ulonglong)uVar34 + CONCAT44(DAT_ram_30049bec,DAT_ram_30049be8);
  DAT_ram_30049bf8 = DAT_ram_30049bf8 + 1;
  DAT_ram_30049bfc = uVar26 + DAT_ram_30049bfc;
  if (uVar34 < DAT_ram_30049bf0) {
    DAT_ram_30049bf0 = uVar34;
  }
  if (DAT_ram_30049bf4 < uVar34) {
    DAT_ram_30049bf4 = uVar34;
  }
  lVar8 = _DAT_ram_3004d510;
  uVar9 = _DAT_ram_3004e720;
  if ((DAT_ram_30049c04 != 0) && (DAT_ram_30049c04 < uVar34)) {
    DAT_ram_30049c08 = DAT_ram_30049c08 + 1;
  }
LAB_ram_4000b3e6:
  _DAT_ram_3004e724 = (int)((ulonglong)uVar9 >> 0x20);
  _DAT_ram_3004e720 = (int)uVar9;
  _DAT_ram_3004d514 = (undefined4)((ulonglong)lVar8 >> 0x20);
  _DAT_ram_3004d510 = (undefined4)lVar8;
  DAT_ram_30049bec = (undefined4)((ulonglong)lVar7 >> 0x20);
  DAT_ram_30049be8 = (undefined4)lVar7;
  return;
}


