/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4000c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4000c10c.
 * REA evidence: ev_f4b6c00ee82b7ef8bffeab90014bb64afb7e4d1b762c8c1c7ae73a27265d125a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c10c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_400087c0();
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  if (param_1 != 0) {
    uVar3 = 0xffffffff;
    if ((_DAT_ram_3004e820 == 0) || (*(short *)(_DAT_ram_3004e820 + 0x5218) == 0))
    goto LAB_ram_4000c1c2;
  }
  uVar3 = 0xffffffff;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    FUN_ram_4000797a(DAT_ram_40094604);
    FUN_ram_40007eb0(param_1 != 0);
    FUN_ram_400076e2();
    FUN_ram_4000304c(iVar2,iVar1,0x304);
    if ((param_1 != 0) && (*(int *)(iVar1 + 0x58) != 2)) {
      FUN_ram_4000304c(iVar2 + 0x60,&DAT_ram_400946b0,0xc);
      uVar3 = _DAT_ram_30050854;
      *(undefined4 *)(iVar2 + 0x58) = 2;
      *(undefined1 *)(iVar2 + 0x5c) = 0;
      *(undefined4 *)(iVar2 + 0x9c) = uVar3;
    }
    *(bool *)(iVar2 + 0x5d) = param_1 != 0;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar3 = 0;
  }
LAB_ram_4000c1c2:
  FUN_ram_40007cba();
  return uVar3;
}


/* NanoCore 1.11, address 0x4000c1d8.
 * REA evidence: ev_88b619dcaed2184bab2c0415876b25ed647498f09ce655293bbeba5ae6082956
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c1d8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    if (iVar3 != 0) {
      bVar1 = param_1 != 0;
      if ((*(int *)(iVar2 + 0xf0) == 7) && ((bool)*(char *)(iVar2 + 0xf5) == bVar1)) {
        uVar4 = 0;
        if (DAT_ram_3004e7ba == *(char *)(iVar2 + 0xf5)) goto LAB_ram_4000c296;
      }
      FUN_ram_400079c2(bVar1);
      if (param_1 != 0) {
        FUN_ram_40068d64(_DAT_ram_3004e7bc);
      }
      FUN_ram_4000304c(iVar3,iVar2,0x304);
      if ((param_1 != 0) && (*(int *)(iVar2 + 0xf0) != 7)) {
        *(undefined1 *)(iVar3 + 0xf4) = 0;
        FUN_ram_400695cc(iVar3 + 0xf8,0xc,0);
      }
      *(undefined4 *)(iVar3 + 0xf0) = 7;
      uVar4 = _DAT_ram_3004e7bc;
      *(bool *)(iVar3 + 0xf5) = bVar1;
      *(undefined4 *)(iVar3 + 0x134) = uVar4;
      FUN_ram_4005fcd6(0x3004dec4);
      uVar4 = 0;
    }
  }
LAB_ram_4000c296:
  FUN_ram_40007cba();
  return uVar4;
}


/* NanoCore 1.11, address 0x4000c2b2.
 * REA evidence: ev_4f42cbdb579430c243af81bb379070a961249af05650fe122fdae15591d86f28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c2b2(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if (*(int *)(iVar2 + 0xf0) != 7) {
      *(undefined1 *)(iVar3 + 0xf4) = 0;
      FUN_ram_400695cc(iVar3 + 0xf8,0xc,0);
    }
    *(undefined4 *)(iVar3 + 0xf0) = 7;
    *(undefined4 *)(iVar3 + 0x134) = _DAT_ram_3004e7bc;
    FUN_ram_40007f4e(iVar3,3);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0xf8) = param_1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar1 = 0;
  }
  FUN_ram_40007cba();
  return uVar1;
}


/* NanoCore 1.11, address 0x4000c360.
 * REA evidence: ev_36314190cd3176e6a4fab11d803497e4c0e07116c7caf942701669738b7a665b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000c360(undefined4 param_1)

{
  FUN_ram_4000890c(FUN_ram_40007fe0,param_1);
  return;
}


/* NanoCore 1.11, address 0x4000c36e.
 * REA evidence: ev_7e4a77b441e74e3b78a0df447eeebe61efff3fb08de0194a7987494f3409de27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c36e(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  
  FUN_ram_400087c0();
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      bVar4 = 0;
      if (*(int *)(iVar1 + 0x188) == 5) {
        bVar4 = *(byte *)(iVar1 + 0x18c);
        if (7 < bVar4) {
          bVar4 = 0;
        }
      }
      if ((param_1 != 0) && (*(char *)(iVar1 + 0x18d) == '\0')) {
        FUN_ram_40065c3e(_DAT_ram_3004d5d4);
        *(byte *)(_DAT_ram_3004d5d4 + 0x20) = bVar4;
      }
      FUN_ram_4000304c(iVar2,iVar1,0x304);
      if ((param_1 != 0) && (*(int *)(iVar1 + 0x188) != 5)) {
        *(byte *)(iVar2 + 0x18c) = bVar4;
        FUN_ram_40065bd4(iVar2 + 400,0xc);
      }
      *(undefined4 *)(iVar2 + 0x188) = 5;
      iVar1 = _DAT_ram_3004d5d4;
      *(bool *)(iVar2 + 0x18d) = param_1 != 0;
      *(int *)(iVar2 + 0x1cc) = iVar1;
      FUN_ram_400079e0(param_1 != 0);
      FUN_ram_4005fcd6(0x3004dec4);
      uVar3 = 0;
    }
  }
  FUN_ram_40007cba();
  return uVar3;
}


/* NanoCore 1.11, address 0x4000c450.
 * REA evidence: ev_f12601b8b751149dc58567d8a754a7d82b806674de0b85d1bef5578db11a28a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c450(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if (*(int *)(iVar2 + 0x188) != 5) {
      *(undefined1 *)(iVar3 + 0x18c) = 0;
      FUN_ram_40065bd4(iVar3 + 400,0xc);
    }
    *(undefined4 *)(iVar3 + 0x188) = 5;
    *(undefined4 *)(iVar3 + 0x1cc) = _DAT_ram_3004d5d4;
    FUN_ram_40007f4e(iVar3,5);
    *(undefined4 *)(iVar3 + param_2 * 4 + 400) = param_1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar1 = 0;
  }
  FUN_ram_40007cba();
  return uVar1;
}


/* NanoCore 1.11, address 0x4000c4fc.
 * REA evidence: ev_56dfc42302256e8ac9b8a6564100c56682bb2c3807d0e4d23dfdcac672ca122f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c4fc(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_ram_40008794();
  if ((iVar2 == 0) && (DAT_ram_3004d494 != '\0')) {
    FUN_ram_40008948(&DAT_ram_30049bdc,param_1);
    return 0;
  }
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar4 = 0xffffffff;
  if ((iVar2 != 0) && (iVar3 != 0)) {
    if (7 < param_1) {
      param_1 = 0;
    }
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if ((*(int *)(iVar2 + 0x188) != 5) || (bVar1 = false, *(byte *)(iVar2 + 0x18c) != param_1)) {
      FUN_ram_40065944(iVar3 + 400,0xc,param_1);
      bVar1 = true;
    }
    *(undefined4 *)(iVar3 + 0x188) = 5;
    iVar2 = _DAT_ram_3004d5d4;
    *(char *)(iVar3 + 0x18c) = (char)param_1;
    *(int *)(iVar3 + 0x1cc) = iVar2;
    FUN_ram_40007f4e(iVar3,5);
    FUN_ram_400089b8(iVar3 + 0x188);
    if (bVar1) {
      FUN_ram_40065c3e(_DAT_ram_3004d5d4);
      *(char *)(_DAT_ram_3004d5d4 + 0x20) = (char)param_1;
    }
    FUN_ram_4005fcd6(0x3004dec4);
    uVar4 = 0;
  }
  FUN_ram_40007cba();
  return uVar4;
}


/* NanoCore 1.11, address 0x4000c5ec.
 * REA evidence: ev_a59366a74f0b0cd33fc13af897f549e2ee2e34436e7121e00b00047f34a573aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000c5ec(void)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  char cVar14;
  
  uVar6 = DAT_ram_40094604;
LAB_ram_4000c642:
  while( true ) {
    FUN_ram_40004822(0x3004d498,0xffffffff);
    uVar7 = 0;
    iVar11 = _DAT_ram_3004d490;
    do {
      while (FUN_ram_400065c6(0x19), _DAT_ram_3004d490 != iVar11) {
        uVar7 = 0;
        iVar11 = _DAT_ram_3004d490;
      }
      uVar7 = uVar7 + 0x19;
    } while (uVar7 < 0x4b);
    do {
      iVar9 = FUN_ram_400048c0(0x3004d498);
    } while (iVar9 == 0);
    bVar1 = true;
    if (((((short)DAT_ram_30049bd0 < 0) && ((short)DAT_ram_30049d48 < 0)) &&
        ((short)DAT_ram_30049bde < 0)) && ((short)DAT_ram_30049bdc < 0)) {
      bVar1 = DAT_ram_30049d50._6_1_ != -1;
    }
    if ((-1 < (short)DAT_ram_30049bdc) || (DAT_ram_30049d50._6_1_ != -1)) break;
    bVar2 = false;
    if (bVar1) {
      iVar9 = FUN_ram_400049c6(0x3004e74c,0xffffffff);
      if (iVar9 != 0) goto LAB_ram_4000c72a;
      if (((short)DAT_ram_30049bdc < 0) && (bVar2 = false, DAT_ram_30049d50._6_1_ == -1))
      goto LAB_ram_4000c90e;
LAB_ram_4000c714:
      FUN_ram_40004ab8(0x3004e74c);
      goto LAB_ram_4000c730;
    }
LAB_ram_4000c92c:
    cVar14 = -1;
LAB_ram_4000c8cc:
    if (cVar14 != -1) {
      FUN_ram_40008bf4(cVar14);
    }
    if (bVar2) goto code_r0x4000c8de;
    if (bVar1) {
      FUN_ram_40004ab8(0x3004e74c);
    }
  }
  iVar9 = FUN_ram_40007d9e();
  if (iVar9 == 0) {
    bVar2 = bVar1;
    if (!bVar1) {
      bVar2 = true;
      goto LAB_ram_4000c92c;
    }
LAB_ram_4000c90e:
    FUN_ram_400002f4();
    cVar5 = DAT_ram_3004d5d8;
    cVar4 = DAT_ram_30049d50._6_1_;
    uVar13 = DAT_ram_30049d48;
    uVar8 = DAT_ram_30049bde;
    uVar3 = DAT_ram_30049bdc;
    uVar12 = DAT_ram_30049bd0;
    if (_DAT_ram_3004d490 != iVar11) {
      FUN_ram_400002fa();
      if (!bVar2) goto LAB_ram_4000c714;
      FUN_ram_40008850();
      goto LAB_ram_4000c730;
    }
    cVar14 = -1;
    if ((short)DAT_ram_30049bdc < 0) {
      DAT_ram_30049d50._6_1_ = -1;
      cVar14 = cVar4;
    }
    DAT_ram_30049bd0 = 0xffff;
    DAT_ram_30049d48 = 0xffff;
    DAT_ram_30049bde = 0xffff;
    DAT_ram_3004d5d8 = '\0';
    DAT_ram_30049bdc = 0xffff;
    FUN_ram_400002fa();
    if (-1 < (short)uVar12) {
      uVar12 = uVar12 & 0xff;
      uVar10 = FUN_ram_4000bb6a(uVar12,0,0);
      FUN_ram_40008426(0,uVar12,uVar10);
    }
    if (-1 < (short)uVar13) {
      uVar13 = uVar13 & 0xff;
      uVar10 = FUN_ram_4000bf3e(uVar13);
      FUN_ram_40008426(1,uVar13,uVar10);
    }
    if (-1 < (short)uVar8) {
      if ((cVar5 != '\0') && (iVar11 = FUN_ram_40008df8(0x3004d5dc), iVar11 != 0)) {
        FUN_ram_4000783c(0,0x3004d5dc);
      }
      FUN_ram_40007884(0);
      uVar8 = uVar8 & 0xff;
      iVar11 = FUN_ram_40008508(uVar8);
      if (((iVar11 != 0) && (iVar9 = FUN_ram_40008558(), iVar9 == 0)) && (DAT_ram_3004e7c8 < 8)) {
        FUN_ram_40008d5a();
      }
      FUN_ram_40008426(2,uVar8,iVar11);
      FUN_ram_400002f4();
      uVar12 = DAT_ram_30049bde;
      FUN_ram_400002fa();
      if ((short)uVar12 < 0) {
        FUN_ram_400083f2(0x3004d5dc);
        iVar11 = FUN_ram_40007a94(4,8);
        FUN_ram_40007884();
        uVar10 = uVar6;
        if (iVar11 == 0) goto LAB_ram_4000c85a;
        FUN_ram_40009832(uVar6,0x3004d5dc,0x10);
      }
      else {
        FUN_ram_40007884(0);
        uVar10 = 0;
LAB_ram_4000c85a:
        FUN_ram_4000783c(uVar10,0x3004d5dc);
      }
      FUN_ram_400002f4();
      uVar12 = DAT_ram_30049bde;
      FUN_ram_400002fa();
      if (-1 < (short)uVar12) {
        FUN_ram_40007884(0);
        FUN_ram_4000783c(0,0x3004d5dc);
      }
    }
    if (-1 < (short)uVar3) {
      FUN_ram_4000c4fc(uVar3 & 0xff);
    }
    goto LAB_ram_4000c8cc;
  }
LAB_ram_4000c72a:
  FUN_ram_400065c6(0x19);
  goto LAB_ram_4000c730;
code_r0x4000c8de:
  FUN_ram_40008850();
  if (DAT_ram_30049d50._6_1_ != -1) {
LAB_ram_4000c730:
    FUN_ram_400048c4(0x3004d498);
  }
  goto LAB_ram_4000c642;
}


/* NanoCore 1.11, address 0x4000c932.
 * REA evidence: ev_105577af6f4548108d17736dfa2c964cfea44bce91bd4995d70e1738f5705180
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c932(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    if (iVar3 != 0) {
      bVar1 = param_1 != 0;
      FUN_ram_400079fe(bVar1);
      FUN_ram_4000304c(iVar3,iVar2,0x304);
      uVar4 = _DAT_ram_3005087c;
      if (*(int *)(iVar2 + 0x1d4) == 8) {
        *(bool *)(iVar3 + 0x1d9) = bVar1;
        *(undefined4 *)(iVar3 + 0x218) = uVar4;
        if (param_1 != 0) {
          FUN_ram_400087da(*(undefined1 *)(iVar3 + 0x1d8));
        }
      }
      else {
        if (param_1 != 0) {
          FUN_ram_40070e40(_DAT_ram_30050884);
          if (*(int *)(iVar2 + 0x1d4) != 4) {
            *(undefined1 *)(iVar3 + 0x1d8) = 0;
            FUN_ram_400717b4(iVar3 + 0x1dc,0xc,0);
          }
        }
        *(undefined4 *)(iVar3 + 0x1d4) = 4;
        uVar4 = _DAT_ram_30050884;
        *(bool *)(iVar3 + 0x1d9) = bVar1;
        *(undefined4 *)(iVar3 + 0x218) = uVar4;
      }
      FUN_ram_4005fcd6(0x3004dec4);
      uVar4 = 0;
    }
  }
  FUN_ram_40007cba();
  return uVar4;
}


/* NanoCore 1.11, address 0x4000ca10.
 * REA evidence: ev_ee215b3870064ca347a57e41d4cf122c8af1ab3d0e423121bed7566b82d959f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000ca10(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    uVar1 = _DAT_ram_3005087c;
    if (*(int *)(iVar2 + 0x1d4) != 8) {
      *(undefined4 *)(iVar3 + 0x1d4) = 4;
      uVar1 = _DAT_ram_30050884;
    }
    *(undefined4 *)(iVar3 + 0x218) = uVar1;
    FUN_ram_40007f4e(iVar3,6);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x1dc) = param_1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar1 = 0;
  }
  FUN_ram_40007cba();
  return uVar1;
}


/* NanoCore 1.11, address 0x4000cab8.
 * REA evidence: ev_aea8494669506d9437e8081f5d3685996f3bfdd87b5c73a6e7e12f7da67a252f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000cab8(undefined4 param_1)

{
  FUN_ram_4000890c(FUN_ram_400089fc,param_1);
  return;
}


/* NanoCore 1.11, address 0x4000cac6.
 * REA evidence: ev_aab01092aa6ea08532b947db67f9fa276dec7e8bcf42c197b3294f569d1177e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000cac6(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = 0xffffffff;
    if (param_2 != 0) {
      uVar1 = FUN_ram_400002f4(0xffffffff);
      FUN_ram_4000304c(param_2,param_1 * 0xc + 0x3004d4c0,0xc);
      FUN_ram_400002fa(uVar1);
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4000cb12.
 * REA evidence: ev_4bd6c165dddd2cbb55726685fb8d5c08fbd4777a5cda001eccd10efe292e245b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000cb12(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40008794();
  if (((iVar1 == 0) && (iVar1 = FUN_ram_40007c98(), iVar1 == 0)) && (DAT_ram_3004d494 != '\0')) {
    FUN_ram_40008948(&DAT_ram_30049bd0,param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_4000bb6a(param_1,0,0);
    FUN_ram_40008426(0,param_1,uVar2);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4000cb66.
 * REA evidence: ev_3ace8e44d2441a47286d45cbf2dd967e8ea978a276a4a5a6ebc893acaf1683f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000cb66(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40008794();
  if (((iVar1 == 0) && (iVar1 = FUN_ram_40007c98(), iVar1 == 0)) && (DAT_ram_3004d494 != '\0')) {
    FUN_ram_40008948(&DAT_ram_30049d48,param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_4000bf3e(param_1);
    FUN_ram_40008426(1,param_1,uVar2);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4000cbb6.
 * REA evidence: ev_0c02f4e1a44f1c8d747ce1bb53034fb62fb13bd79b41a602a90c95c072e87a04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cbb6(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_21 [9];
  
  auStack_21[0] = 0;
  iVar3 = FUN_ram_4005fcbe(0x3004dec4);
  if (param_1 != 0) {
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0xa4) == 3)) && (*(char *)(iVar3 + 0xa9) != '\0')) &&
       (uVar4 = FUN_ram_40073ad0(_DAT_ram_3005088c), *(byte *)(iVar3 + 0xa8) == uVar4)) {
      FUN_ram_40007a1c(1);
      return 0;
    }
    iVar3 = FUN_ram_400087fc(auStack_21);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  FUN_ram_400087c0();
  iVar3 = FUN_ram_4005fcbe(0x3004dec4);
  iVar5 = FUN_ram_4005fca2(0x3004dec4);
  if ((iVar3 == 0) || (iVar5 == 0)) goto LAB_ram_4000cd36;
  if (param_1 != 0) {
    if (*(int *)(iVar3 + 0xa4) == 3) {
      if (*(char *)(iVar3 + 0xa9) != '\0') {
        uVar4 = FUN_ram_40073ad0(_DAT_ram_3005088c);
        if (*(byte *)(iVar3 + 0xa8) == uVar4) {
          FUN_ram_40007a1c(1);
          goto LAB_ram_4000cce6;
        }
        if (*(int *)(iVar3 + 0xa4) != 3) goto LAB_ram_4000cc32;
      }
      uVar2 = *(undefined1 *)(iVar3 + 0xa8);
    }
    else {
LAB_ram_4000cc32:
      uVar2 = 6;
    }
    iVar3 = FUN_ram_40008b2e(uVar2);
    if (iVar3 != 0) {
LAB_ram_4000cd36:
      FUN_ram_40007cba();
      FUN_ram_40008940(auStack_21[0]);
      return 0xffffffff;
    }
    iVar3 = FUN_ram_4005fcbe(0x3004dec4);
    iVar5 = FUN_ram_4005fca2(0x3004dec4);
    if ((iVar3 == 0) || (iVar5 == 0)) goto LAB_ram_4000cd36;
  }
  FUN_ram_40007a1c(param_1 != 0);
  if (param_1 != 0) {
    FUN_ram_40073ade(_DAT_ram_3005088c);
  }
  FUN_ram_4000304c(iVar5,iVar3,0x304);
  if ((param_1 != 0) && (*(int *)(iVar3 + 0xa4) != 3)) {
    *(undefined1 *)(iVar5 + 0xa8) = 6;
    FUN_ram_40073b74(iVar5 + 0xac,0xc,6);
  }
  *(undefined4 *)(iVar5 + 0xa4) = 3;
  uVar1 = _DAT_ram_3005088c;
  *(bool *)(iVar5 + 0xa9) = param_1 != 0;
  *(undefined4 *)(iVar5 + 0xe8) = uVar1;
  FUN_ram_4005fcd6(0x3004dec4);
LAB_ram_4000cce6:
  FUN_ram_40007cba();
  FUN_ram_40008940(auStack_21[0]);
  return 0;
}


/* NanoCore 1.11, address 0x4000cd46.
 * REA evidence: ev_2187f3b2b0333cb8e7f412ca25dc6aa490030f94fec61091078f842526a31bef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cd46(uint param_1)

{
  uint uVar1;
  
  uVar1 = 6;
  if (param_1 < 8) {
    uVar1 = param_1;
  }
  if (DAT_ram_3004d494 == '\0') {
    FUN_ram_40008bf4(uVar1);
  }
  else {
    FUN_ram_400002f4();
    DAT_ram_30049d50._6_1_ = (undefined1)uVar1;
    _DAT_ram_3004d490 = _DAT_ram_3004d490 + 1;
    FUN_ram_400002fa();
    FUN_ram_400048c4(0x3004d498);
  }
  return 0;
}


/* NanoCore 1.11, address 0x4000cd9c.
 * REA evidence: ev_84f82f7f53ed7c9b20804063a6f54a2e4f53607b7d729f0785472e06d5e6a647
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cd9c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_400087c0();
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_40007a3a(param_1 != 0);
      if (param_1 != 0) {
        FUN_ram_40066d28(_DAT_ram_3004e7ac);
      }
      FUN_ram_4000304c(iVar2,iVar1,0x304);
      if (*(int *)(iVar1 + 0x220) != 6) {
        *(undefined1 *)(iVar2 + 0x224) = 2;
        FUN_ram_40066e52(iVar2 + 0x228,0xc,2);
      }
      *(undefined4 *)(iVar2 + 0x220) = 6;
      uVar3 = _DAT_ram_3004e7ac;
      *(bool *)(iVar2 + 0x225) = param_1 != 0;
      *(undefined4 *)(iVar2 + 0x264) = uVar3;
      FUN_ram_4005fcd6(0x3004dec4);
      uVar3 = 0;
    }
  }
  FUN_ram_40007cba();
  return uVar3;
}


/* NanoCore 1.11, address 0x4000ce54.
 * REA evidence: ev_e27e8e78e8e65c967c5bd84ac9ee8dfaa801dd6df413e167130f6908d4bdcde0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000ce54(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if (*(int *)(iVar2 + 0x220) != 6) {
      *(undefined1 *)(iVar3 + 0x224) = 2;
      FUN_ram_40066e52(iVar3 + 0x228,0xc,2);
    }
    *(undefined4 *)(iVar3 + 0x220) = 6;
    *(undefined4 *)(iVar3 + 0x264) = _DAT_ram_3004e7ac;
    FUN_ram_40007f4e(iVar3,7);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x228) = param_1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar1 = 0;
  }
  FUN_ram_40007cba();
  return uVar1;
}


/* NanoCore 1.11, address 0x4000cf04.
 * REA evidence: ev_9f463a472e95385651127857260db0d780f9350529ad94543cef3f62508b1d19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000cf04(undefined4 param_1)

{
  FUN_ram_4000890c(FUN_ram_40008162,param_1);
  return;
}


/* NanoCore 1.11, address 0x4000cf12.
 * REA evidence: ev_6614131d2d3963d0adf648c6492a38bdb43ea933c85160c339733d2c55835fb1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cf12(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_400087c0();
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_40007a58(param_1 != 0);
      if (param_1 != 0) {
        FUN_ram_40068c56(_DAT_ram_3004e7b4);
      }
      FUN_ram_4000304c(iVar2,iVar1,0x304);
      if (*(int *)(iVar1 + 0x26c) != 10) {
        *(undefined1 *)(iVar2 + 0x270) = 0;
        FUN_ram_40068c9e(iVar2 + 0x274,0xc,0);
      }
      *(undefined4 *)(iVar2 + 0x26c) = 10;
      uVar3 = _DAT_ram_3004e7b4;
      *(bool *)(iVar2 + 0x271) = param_1 != 0;
      *(undefined4 *)(iVar2 + 0x2b0) = uVar3;
      FUN_ram_4005fcd6(0x3004dec4);
      uVar3 = 0;
    }
  }
  FUN_ram_40007cba();
  return uVar3;
}


/* NanoCore 1.11, address 0x4000cfc8.
 * REA evidence: ev_3d45f03c8da78742e786f56c86b86dbd48afe9508d84fa720815d90a2884b859
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cfc8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if (*(int *)(iVar2 + 0x26c) != 10) {
      *(undefined1 *)(iVar3 + 0x270) = 0;
      FUN_ram_40068c9e(iVar3 + 0x274,0xc,0);
    }
    *(undefined4 *)(iVar3 + 0x26c) = 10;
    *(undefined4 *)(iVar3 + 0x2b0) = _DAT_ram_3004e7b4;
    FUN_ram_40007f4e(iVar3,8);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x274) = param_1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar1 = 0;
  }
  FUN_ram_40007cba();
  return uVar1;
}


