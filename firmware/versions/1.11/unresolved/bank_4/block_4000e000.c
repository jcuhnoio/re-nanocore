/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4000e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4000e030.
 * REA evidence: ev_82c3d2f8f8dc8345ec0805bded35753a0c83cf1bd802ba8c4a674c8a463438cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000e030(int param_1,uint param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  if (DAT_ram_30057d14 == '\0') {
    _DAT_ram_3005bf40 = 0;
    _DAT_ram_3005bf42 = 0;
    DAT_ram_30052e10 = 0;
    DAT_ram_30057d14 = '\x01';
  }
  else if (DAT_ram_30057d14 == '\x01') {
    uVar5 = _DAT_ram_3005bf42;
    if (_DAT_ram_3005bf42 < _DAT_ram_3005bf40) {
      uVar5 = _DAT_ram_3005bf42 + 0x2000;
    }
    if (0x3ff < (ushort)(uVar5 - _DAT_ram_3005bf40)) {
      DAT_ram_30057d14 = '\x02';
    }
  }
  uVar4 = (uint)DAT_ram_30052e10;
  uVar3 = 0;
  if (uVar4 != 0) {
    bVar1 = false;
    while( true ) {
      uVar2 = _DAT_ram_30052e0e;
      uVar7 = uVar4 + uVar3 & 0xff;
      if (3 < uVar7) break;
      if (uVar3 == param_2) goto LAB_ram_4000e1de;
      bVar1 = true;
      (&DAT_ram_30052e0c)[uVar3 + uVar4] = *(undefined1 *)(param_1 + uVar3);
      uVar3 = uVar3 + 1;
    }
    if (bVar1) {
      DAT_ram_30052e10 = (byte)(uVar4 + uVar3);
    }
    if (uVar7 != 4) {
      return;
    }
    uVar4 = _DAT_ram_3005bf42 + 1 & 0x1fff;
    if ((_DAT_ram_3005bf40 == uVar4) || ((uint)_DAT_ram_3005bf40 == (uVar4 + 1 & 0x1fff))) {
      _DAT_ram_30052e08 = _DAT_ram_30052e08 + 1;
    }
    else {
      *(undefined2 *)((uint)_DAT_ram_3005bf42 * 2 + 0x30057f40) = _DAT_ram_30052e0c;
      *(undefined2 *)(uVar4 * 2 + 0x30057f40) = uVar2;
      _DAT_ram_3005bf42 = (ushort)(uVar4 + 1) & 0x1fff;
    }
    DAT_ram_30052e10 = 0;
  }
  uVar5 = _DAT_ram_3005bf42;
  uVar7 = (uint)_DAT_ram_3005bf42;
  uVar8 = param_2 - uVar3 & 0xfffffffc;
  uVar9 = uVar8 >> 1;
  uVar4 = 0x1ffe - (uVar7 - _DAT_ram_3005bf40 & 0x1fff) & 0xffff;
  if (uVar9 < uVar4) {
    uVar4 = uVar9;
  }
  uVar4 = uVar4 & 0xfffffffe;
  uVar6 = 0x2000 - uVar7;
  if (uVar4 <= 0x2000 - uVar7) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    FUN_ram_4000304c(uVar7 * 2 + 0x30057f40,param_1 + uVar3,uVar6 << 1);
  }
  if (uVar6 < uVar4) {
    FUN_ram_4000304c(0x30057f40,param_1 + uVar3 + uVar6 * 2,(uVar4 - uVar6) * 2);
  }
  _DAT_ram_3005bf42 = uVar5 + (short)uVar4 & 0x1fff;
  _DAT_ram_30052e08 = (uVar9 - uVar4 >> 1) + _DAT_ram_30052e08;
  uVar7 = (uint)DAT_ram_30052e10;
  bVar1 = false;
  for (uVar3 = uVar3 + uVar8; uVar3 < param_2; uVar3 = uVar3 + 1) {
    if (uVar7 < 4) {
      (&DAT_ram_30052e0c)[uVar7] = *(undefined1 *)(param_1 + uVar3);
      uVar7 = uVar7 + 1 & 0xff;
      bVar1 = true;
    }
  }
LAB_ram_4000e1de:
  if (bVar1) {
    DAT_ram_30052e10 = (byte)uVar7;
  }
  return;
}


/* NanoCore 1.11, address 0x4000e28e.
 * REA evidence: ev_379bb7f12e771f49030ee77c657c0a1b3dc1d890dc65401d052efd521b9bb447
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000e28e(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  _DAT_ram_3004d488 = FUN_ram_40040c2a(&DAT_ram_4009459c);
  if ((_DAT_ram_3004d488 == 0) || (iVar1 = FUN_ram_40007ee2(0,0xff,0xff,0x32,2), iVar1 != 0)) {
LAB_ram_4000e2fe:
    uVar3 = 0xffffffff;
  }
  else {
    FUN_ram_400065c6(10);
    iVar1 = 0x40094668;
    do {
      iVar2 = FUN_ram_40007ee2(*(undefined1 *)(iVar1 + 3),*(undefined1 *)(iVar1 + 4),
                               *(undefined1 *)(iVar1 + 5),8,1);
      if (iVar2 != 0) goto LAB_ram_4000e2fe;
      iVar1 = iVar1 + 3;
      uVar3 = 0;
    } while (iVar1 != 0x400946ad);
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x4000e302.
 * REA evidence: ev_396ce54d917c2c6647cc38b863c60ee1a8eda38fac994d493ec2c0feb5603b28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000e302(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uStack_90;
  uint *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint auStack_70 [2];
  uint *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  FUN_ram_400084ce(0);
  FUN_ram_40008466(s_PD_10_ram_400945a4,0);
  FUN_ram_400065c6(0x50);
  FUN_ram_40008466(s_PD_10_ram_400945a4,1);
  FUN_ram_400065c6(0x50);
  FUN_ram_40010ba0();
  if (_DAT_ram_3004e7c0 == 0) {
    _DAT_ram_3004e7c0 = FUN_ram_40008f9a(0x2000);
  }
  if (_DAT_ram_30050878 == 0) {
    _DAT_ram_30050878 = FUN_ram_40008f9a(0x2000);
  }
  if (_DAT_ram_3004e7c0 == 0) {
    return 0xffffffff;
  }
  if (_DAT_ram_30050878 == 0) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004e7c4 == 0) &&
     (_DAT_ram_3004e7c4 = FUN_ram_40008f9a(0x880), _DAT_ram_3004e7c4 == 0)) {
    return 0xffffffff;
  }
  if (_DAT_ram_3005088c == 0) {
    iVar3 = FUN_ram_40005656(0x74c60);
    if (iVar3 == 0) {
      _DAT_ram_3005088c = iVar3;
      _DAT_ram_3005088c = FUN_ram_40008f9a(0x74c60);
      if (_DAT_ram_3005088c == 0) {
        return 0xffffffff;
      }
    }
    else {
      memset(iVar3,0,0x74c60);
      _DAT_ram_3005088c = iVar3;
    }
  }
  if (_DAT_ram_3004e820 == 0) {
    if (_DAT_ram_3005088c + 0xcffc0000U < 0x100000) {
      iVar3 = FUN_ram_40005656(0x5240);
      if (iVar3 != 0) {
        memset(iVar3,0,0x5240);
        _DAT_ram_3004e820 = iVar3;
        goto LAB_ram_4000e42a;
      }
      _DAT_ram_3004e820 = 0;
    }
    _DAT_ram_3004e820 = FUN_ram_40008f9a(0x5240);
    if (_DAT_ram_3004e820 == 0) {
      return 0xffffffff;
    }
  }
LAB_ram_4000e42a:
  if ((_DAT_ram_30050854 == (int *)0x0) &&
     (_DAT_ram_30050854 = (int *)FUN_ram_40008f9a(0x38), _DAT_ram_30050854 == (int *)0x0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_30050884 == 0) &&
     (_DAT_ram_30050884 = FUN_ram_40008f9a(0x192e4), _DAT_ram_30050884 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004d5d4 == 0) &&
     (_DAT_ram_3004d5d4 = FUN_ram_40008f9a(0x238), _DAT_ram_3004d5d4 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004e7bc == 0) &&
     (_DAT_ram_3004e7bc = FUN_ram_40008f9a(0x2148), _DAT_ram_3004e7bc == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004e7cc == 0) &&
     (_DAT_ram_3004e7cc = FUN_ram_40008f9a(0x2148), _DAT_ram_3004e7cc == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004e7ac == 0) &&
     (_DAT_ram_3004e7ac = FUN_ram_40008f9a(0x268), _DAT_ram_3004e7ac == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004e7b4 == 0) &&
     (_DAT_ram_3004e7b4 = FUN_ram_40008f9a(0x5c), _DAT_ram_3004e7b4 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3005087c == 0) &&
     (_DAT_ram_3005087c = FUN_ram_40008f9a(0x880), _DAT_ram_3005087c == 0)) {
    return 0xffffffff;
  }
  _DAT_ram_3004e728 = 0xac44;
  if ((DAT_ram_3004e850 == '\0') &&
     (iVar3 = FUN_ram_4000492c(0x3004e824,s_ir_sel_ram_400945ac,1), iVar3 == 0)) {
    DAT_ram_3004e850 = '\x01';
  }
  if ((DAT_ram_3004d564 == '\0') &&
     (iVar3 = FUN_ram_4000492c(0x3004d538,s_chain_ed_ram_400945b4,1), iVar3 == 0)) {
    DAT_ram_3004d564 = '\x01';
  }
  if (DAT_ram_3004e77c == '\0') {
    iVar3 = FUN_ram_4000492c(0x3004e74c,s_dsp_xfer_ram_400945c0,1);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    iVar3 = FUN_ram_400047a4(0x3004e780,s_dsp_ack_ram_400945cc,0,0);
    if (iVar3 != 0) {
      FUN_ram_40004960(0x3004e74c);
      return 0xffffffff;
    }
    FUN_ram_4002281a(&DAT_ram_3004e72c,0xac44,6,8);
    DAT_ram_3004e77c = '\x01';
  }
  FUN_ram_4008fc6c();
  FUN_ram_40091abc();
  iVar3 = FUN_ram_40087562(0x300508ec);
  if (iVar3 == 0) {
    FUN_ram_40007bee();
    DAT_ram_30050938 = 0;
  }
  iVar3 = FUN_ram_40087562(0x3004da6c);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_40008558();
    if (((iVar3 == 0) && (0x1d < DAT_ram_30049be0)) && ((byte)(DAT_ram_30049be0 - 0x1e) < 8)) {
      DAT_ram_3004e7c8 = DAT_ram_30049be0 - 0x1e;
    }
    DAT_ram_3004d5d9 = 0;
  }
  FUN_ram_40076012(_DAT_ram_3004e820);
  FUN_ram_400762d8(_DAT_ram_3004e820,1);
  FUN_ram_400762c8(_DAT_ram_3004e820,0);
  DAT_ram_3004e818 = 0;
  auStack_70[0] = 0;
  iVar3 = FUN_ram_40090fdc(0x3004e854,0x1000,auStack_70);
  if (((iVar3 == 0) && (auStack_70[0] != 0)) &&
     (((auStack_70[0] & 3) == 0 && (uVar7 = auStack_70[0] >> 2, uVar7 - 1 < 0x400)))) {
    FUN_ram_4000304c(0x3004f854,0x3004e854);
    FUN_ram_40076024(_DAT_ram_3004e820,0x3004f854,uVar7);
  }
  DAT_ram_3005088a = 0;
  DAT_ram_30050880 = 0;
  DAT_ram_3004d5cc = 0;
  DAT_ram_3004e7ba = 0;
  DAT_ram_3004d5d9 = 0;
  FUN_ram_4005fb6e(0x3004dec4);
  uVar7 = DAT_ram_40094664;
  FUN_ram_40073d84(DAT_ram_40094664,0x3005093c,0x300508ec,&DAT_ram_30050938);
  FUN_ram_40073d84(uVar7,0x3004d5dc,0x3004da6c,&DAT_ram_3004d5d9);
  FUN_ram_4006c46e(uVar7,_DAT_ram_3004e7c4,0x3004d5dc,&DAT_ram_3004d5d9,_DAT_ram_3004e7c0,0x800);
  FUN_ram_4006c46e(uVar7,_DAT_ram_3005087c,0,&DAT_ram_30050880,_DAT_ram_30050878,0x800);
  FUN_ram_40073984(uVar7,_DAT_ram_3005088c);
  FUN_ram_40070fdc(uVar7,_DAT_ram_30050884);
  FUN_ram_40069026(uVar7,_DAT_ram_3004e7bc);
  FUN_ram_40066dcc(uVar7,_DAT_ram_3004e7ac);
  FUN_ram_40068bd0(uVar7,_DAT_ram_3004e7b4);
  FUN_ram_40069026(uVar7,_DAT_ram_3004e7cc);
  _DAT_ram_3004d5d0 = 0x22573;
  iVar3 = FUN_ram_4003ef74(1,0x895cc);
  if (iVar3 == 0) {
    _DAT_ram_3004d5d0 = 0;
    uVar9 = 0;
    iVar8 = 0;
    uVar6 = 0;
    iVar5 = 0;
    uVar4 = 0;
    iVar3 = 0;
  }
  else {
    memset(iVar3,0,_DAT_ram_3004d5d0 << 2);
    uVar9 = 0x1804;
    iVar8 = iVar3 + 0x835bc;
    uVar6 = 0x89d;
    iVar5 = iVar3 + 0x81348;
    uVar4 = 0x204d2;
  }
  FUN_ram_40065e4a(uVar7,_DAT_ram_3004d5d4,iVar3,uVar4,iVar5,uVar6,iVar8,uVar9);
  piVar2 = _DAT_ram_30050854;
  iVar3 = _DAT_ram_3004e820;
  _DAT_ram_30050854[5] = 0;
  *piVar2 = iVar3;
  uVar11 = (ulonglong)DAT_ram_40094664;
  uVar10 = (ulonglong)DAT_ram_40094604;
  piVar2[6] = 0;
  *(ulonglong *)(piVar2 + 1) = uVar11;
  uVar11 = (ulonglong)DAT_ram_40094600;
  *(ulonglong *)(piVar2 + 4) = uVar10;
  *(ulonglong *)(piVar2 + 0xb) = uVar10;
  *(ulonglong *)(piVar2 + 2) = uVar11;
  *(ulonglong *)(piVar2 + 3) = uVar11;
  piVar2[7] = 0;
  piVar2[8] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  iVar8 = FUN_ram_4005fca2(0x3004dec4);
  FUN_ram_4005fb2e();
  FUN_ram_400600de(iVar8,0,1,0,0x3005093c,1);
  FUN_ram_400600de(iVar8,1,2,0,_DAT_ram_30050854,0);
  iVar3 = _DAT_ram_3005088c;
  uVar11 = (ulonglong)_DAT_ram_40094638;
  *(ulonglong *)(iVar8 + 100) = uVar10;
  *(ulonglong *)(iVar8 + 0x68) = uVar11;
  *(undefined4 *)(iVar8 + 0x60) = 0;
  FUN_ram_400600de(iVar8,2,3,6,iVar3,0);
  FUN_ram_400600de(iVar8,3,7,0,_DAT_ram_3004e7bc,0);
  FUN_ram_400600de(iVar8,4,8,DAT_ram_3004e7c8,_DAT_ram_3004e7c4,0);
  FUN_ram_400600de(iVar8,5,5,0,_DAT_ram_3004d5d4,0);
  FUN_ram_400600de(iVar8,6,4,0,_DAT_ram_30050884,0);
  FUN_ram_400600de(iVar8,7,6,0,_DAT_ram_3004e7ac,0);
  FUN_ram_40008e30(iVar8 + 0x14);
  FUN_ram_4006c8b8(iVar8 + 0x144,0xc,DAT_ram_3004e7c8);
  FUN_ram_40073b74(iVar8 + 0xac,0xc,6);
  FUN_ram_4006955e(iVar8 + 0xf8,0xc);
  FUN_ram_40065bd4(iVar8 + 400,0xc);
  FUN_ram_400719b6(iVar8 + 0x1dc,0xc);
  FUN_ram_40066f06(iVar8 + 0x228,0xc);
  FUN_ram_4005fcd6(0x3004dec4);
  FUN_ram_4003c1fc(&DAT_ram_3004e7d0,0);
  FUN_ram_4003c21c(&DAT_ram_3004e7d0,0);
  FUN_ram_4003c3f6(&DAT_ram_3004e7d0,0);
  FUN_ram_4003c4e2(&DAT_ram_3004e7d0,2,0);
  FUN_ram_4003c4e2(&DAT_ram_3004e7d0,2,1);
  FUN_ram_4003c302(&DAT_ram_3004e7d0,0x20);
  FUN_ram_4003c348(&DAT_ram_3004e7d0,0x20);
  FUN_ram_4003c384(&DAT_ram_3004e7d0,0xac44,0x100);
  FUN_ram_4003c41c(&DAT_ram_3004e7d0,0xac44,0x40);
  FUN_ram_400246ac(0xac44);
  puVar1 = _DAT_ram_3004e7d0;
  fence();
  fence();
  _DAT_ram_3004e7d0[9] = _DAT_ram_3004e7d0[9] | 0x100;
  fence();
  fence();
  *_DAT_ram_3004e7d0 = *puVar1 | 1;
  iVar3 = FUN_ram_4000e28e();
  if ((iVar3 == 0) && (iVar3 = FUN_ram_40007ee2(0x31,0x23,0,0x10,1), iVar3 == 0)) {
    uStack_88 = 0;
    auStack_70[1] = 0;
    uVar7 = (_DAT_ram_20800004 & 0x1ffffff) >> 0x15;
    if (7 < uVar7 - 1) {
      uVar7 = 2;
    }
    DAT_ram_20801083 =
         (byte)((1 << uVar7) + -1 << (8 - ((_DAT_ram_20800004 & 0x1ffffff) >> 0x15) & 0x1f)) |
         DAT_ram_20801083 & 0x1f;
    uStack_90 = 2;
    puStack_8c = _DAT_ram_3004e7d0 + 4;
    puStack_68 = _DAT_ram_3004e7d0 + 8;
    uStack_74 = 0xc;
    uStack_84 = 4;
    uStack_80 = 4;
    uStack_7c = 1;
    uStack_78 = 1;
    auStack_70[0] = 1;
    uStack_54 = 0xc;
    uStack_64 = 4;
    uStack_60 = 4;
    uStack_5c = 1;
    uStack_58 = 1;
    _DAT_ram_3004dab4 = FUN_ram_40039960();
    if (_DAT_ram_3004dab4 != 0) {
      _DAT_ram_3004dab8 = FUN_ram_40039960();
      if (_DAT_ram_3004dab8 == 0) {
        FUN_ram_4003992c();
      }
      else {
        FUN_ram_400398f8(_DAT_ram_3004dab4,&LAB_ram_4000b74e,0);
        FUN_ram_40039908(_DAT_ram_3004dab4,&uStack_90);
        FUN_ram_400398f8(_DAT_ram_3004dab8,&DAT_ram_400094da,0);
        FUN_ram_40039908(_DAT_ram_3004dab8,auStack_70);
        if ((_DAT_ram_3004d4f0 != 0) ||
           (_DAT_ram_3004d4f0 = FUN_ram_400047d8(&DAT_ram_400945d4,0,0), _DAT_ram_3004d4f0 != 0)) {
          if (_DAT_ram_3004d524 == 0) {
            _DAT_ram_3004d524 = FUN_ram_400064b8(&DAT_ram_400945d4,FUN_ram_4000b672,0,0x2000,3,1);
            if (_DAT_ram_3004d524 == 0) {
              return 0xffffffff;
            }
            FUN_ram_40006632();
          }
          if ((_DAT_ram_3004d530 == 0) &&
             (_DAT_ram_3004d530 = FUN_ram_400047d8(s_blksw_ram_400945dc,0,0), _DAT_ram_3004d530 != 0
             )) {
            iVar3 = FUN_ram_400064b8(s_blksw_ram_400945dc,FUN_ram_4000b890,0,0x800,0x14,10);
            if (iVar3 == 0) {
              FUN_ram_40004806(_DAT_ram_3004d530);
              _DAT_ram_3004d530 = 0;
            }
            else {
              FUN_ram_40006632();
            }
          }
          iVar3 = FUN_ram_40008fc0(1);
          if (iVar3 == 0) {
            FUN_ram_400065c6(0x14);
            FUN_ram_400084ce(0);
            DAT_ram_300508e6 = 0;
            DAT_ram_30049d4c = 0;
            DAT_ram_300508e4 = 0;
            DAT_ram_300508e5 = 0;
            _DAT_ram_300508e8 = 0;
            _DAT_ram_30052e1c = FUN_ram_40004466(&DAT_ram_400945e4);
            if (_DAT_ram_30052e1c == 0) {
              return 0;
            }
            _DAT_ram_30052e18 = FUN_ram_4003771a();
            iVar3 = FUN_ram_400418c0(_DAT_ram_30052e1c,4);
            if (iVar3 == 0) {
              nc_radio_uart5_init();
              if (((DAT_ram_3004d494 == '\0') &&
                  (iVar3 = FUN_ram_400047a4(0x3004d498,s_asset_ram_400945ec,0,0), iVar3 == 0)) &&
                 (iVar3 = FUN_ram_400064b8(s_asset_ram_400945ec,FUN_ram_4000c5ec,0,0xc00,0x16,10),
                 iVar3 != 0)) {
                FUN_ram_40006632();
                DAT_ram_3004d494 = '\x01';
              }
              iVar3 = FUN_ram_400064b8(s_codec_svc_ram_400945f4,FUN_ram_4000ed38,0,0x400,0x19,10);
              if (iVar3 != 0) {
                FUN_ram_40006632();
                return 0;
              }
              return 0;
            }
            _DAT_ram_30052e1c = 0;
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4000ed38.
 * REA evidence: ev_1540ad5fefb437ffddaf02c35a1a6f0e214a7d5c23223cf94883f0dd2b1e8b3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000ee28) */
/* WARNING: Removing unreachable block (ram,0x4000ee48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000ed38(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short asStack_32 [5];
  
  uVar1 = DAT_ram_40094614;
  do {
    do {
      if ((((DAT_ram_300508e4 == '\0') || (DAT_ram_300508e5 != '\0')) || (DAT_ram_30049bd2 == '\0'))
         || (DAT_ram_30050888 != '\0')) goto LAB_ram_4000edd6;
      FUN_ram_400077bc();
      iVar2 = FUN_ram_40007ee2(0x31,0x20,0,0x14,2);
      if (iVar2 != 0) {
        FUN_ram_4000b860();
        goto LAB_ram_4000edd6;
      }
      _DAT_ram_300508e8 = 0x10;
      DAT_ram_30049d4c = 0;
      iVar2 = FUN_ram_40008cee();
    } while (iVar2 == 0);
    DAT_ram_300508e5 = '\x01';
    DAT_ram_300508e4 = '\0';
LAB_ram_4000edd6:
    _DAT_ram_3004d480 = FUN_ram_400418ac(_DAT_ram_30052e1c,4);
    if ((_DAT_ram_3004d480 != 0) &&
       (asStack_32[0] = _DAT_ram_3004d480,
       iVar2 = FUN_ram_40037788(uVar1,asStack_32,_DAT_ram_30052e18,1000), 0 < iVar2)) {
      iVar2 = iVar2 * 2;
      iVar3 = (iVar2 + 5) / 10;
      _DAT_ram_3004d484 = (undefined2)iVar3;
      DAT_ram_3004d482 = 0;
      if ((0x88bc < iVar2) && (DAT_ram_3004d482 = 100, iVar2 < 0xa40b)) {
        DAT_ram_3004d482 = (undefined1)((iVar3 + -0xdac) / 7);
      }
      FUN_ram_4002d198();
    }
    FUN_ram_40010df4();
    FUN_ram_400065c6(100);
  } while( true );
}


/* NanoCore 1.11, address 0x4000ee70.
 * REA evidence: ev_41bab8d36c804d772a80f8aa7e78aa0373c8dd088e10938198a0817464c0d293
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_ram_4000ee70(void)

{
  return _DAT_ram_3004d484;
}


/* NanoCore 1.11, address 0x4000ee7a.
 * REA evidence: ev_f8afdeb3b5d1f66b4c50a1bbb61cbe0671a6e6158a489fe2a368f1bdb7211a9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000ee7a(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0; uVar1 < DAT_ram_3005cfc8; uVar1 = uVar1 + 1 & 0xff) {
    iVar2 = *(int *)((uVar1 + 0x410) * 4 + 0x3005bf68);
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


/* NanoCore 1.11, address 0x4000ef38.
 * REA evidence: ev_9edbf613d6450e12ff0a1ad1f9cf0460b10a9864965786759153b67102932bfa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000ef38(uint param_1)

{
  if (*(code **)(&DAT_ram_3005cfd4 + (param_1 & 0x7f) * 0xc) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x4000ef50 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_ram_3005cfd4 + (param_1 & 0x7f) * 0xc))();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4000ef58.
 * REA evidence: ev_7c4df918512833ae4f744a4262862cb73a95f5cdad7c35a7a17e8b3e43784131
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000ef58(uint param_1)

{
  if (*(code **)(&DAT_ram_3005d034 + (param_1 & 0x7f) * 0xc) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x4000ef70 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_ram_3005d034 + (param_1 & 0x7f) * 0xc))();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4000ef7a.
 * REA evidence: ev_2078a323ee8b95c6f7b2707a4de615d957b7fe3d811febfcc13b3c54124e10b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000ef7a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = memset(&DAT_ram_3005bf60,0,0x1140);
  DAT_ram_3005cfcc = 0x80;
  *(undefined4 *)(iVar1 + 0x30) = param_1;
  _DAT_ram_3005cfd4 = &LAB_ram_4000eeec;
  _DAT_ram_3005d034 = &LAB_ram_4000f780;
  return;
}


/* NanoCore 1.11, address 0x4000efc8.
 * REA evidence: ev_d7402b527d525f85f53d6146f49547c63954876e76d90235e7f451c3675a7d7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000efc8(int param_1)

{
  *(byte *)(param_1 + 0x18) = DAT_ram_3005cfc8;
  *(int *)((DAT_ram_3005cfc8 + 0x410) * 4 + 0x3005bf68) = param_1;
  DAT_ram_3005cfc8 = DAT_ram_3005cfc8 + 1;
  return;
}


/* NanoCore 1.11, address 0x4000eff2.
 * REA evidence: ev_cf92c73934386361c0c73b31e632b1e565116549f3716bc0c865defd724efd95
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000eff2(byte *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  if ((char)bVar1 < '\0') {
    iVar2 = (bVar1 & 0x7f) * 0xc;
    (&DAT_ram_3005cfcc)[iVar2] = bVar1;
    *(undefined4 *)(&DAT_ram_3005cfd4 + iVar2) = uVar3;
    return;
  }
  iVar2 = (uint)bVar1 * 0xc;
  *(byte *)(iVar2 + 0x3005d02c) = bVar1;
  *(undefined4 *)(&DAT_ram_3005d034 + iVar2) = uVar3;
  return;
}


