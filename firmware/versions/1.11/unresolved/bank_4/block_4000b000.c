/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4000b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4000b672.
 * REA evidence: ev_9a74061751e12faa6d511f8c712bd1f45318a7f7b66e425e742a564c287bf19f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000b672(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  do {
    do {
      iVar3 = FUN_ram_40004822(_DAT_ram_3004d4f0,0xffffffff);
    } while (iVar3 != 0);
    while (FUN_ram_400002f4(), _DAT_ram_300508d0 != _DAT_ram_300508d4) {
      uVar4 = _DAT_ram_300508d4 - _DAT_ram_300508d0;
      if (uVar4 < 9) {
        iVar3 = 0;
        iVar2 = 0;
        if (uVar4 != 1) goto LAB_ram_4000b6e4;
      }
      else {
        iVar3 = uVar4 - 8;
        _DAT_ram_300508d0 = _DAT_ram_300508d0 + iVar3;
        uVar4 = 8;
LAB_ram_4000b6e4:
        _DAT_ram_300508d0 = _DAT_ram_300508d0 + (uVar4 - 1);
        iVar2 = iVar3 + (uVar4 - 1);
      }
      if (_DAT_ram_300508d0 == *(uint *)((_DAT_ram_300508d0 & 7) * 8 + 0x30050890)) {
        bVar1 = *(byte *)((_DAT_ram_300508d0 & 7) * 8 + 0x30050894);
        _DAT_ram_300508d0 = _DAT_ram_300508d0 + 1;
        FUN_ram_400002fa();
        if (iVar2 != 0) {
          FUN_ram_400083d4(iVar2);
        }
        if (1 < bVar1) {
          iVar2 = 1;
          goto LAB_ram_4000b70c;
        }
        DAT_ram_3004d520 = 1;
        if (DAT_ram_30050889 == '\0') {
          FUN_ram_40009d68(bVar1);
        }
        DAT_ram_3004d520 = 0;
      }
      else {
        _DAT_ram_300508d0 = _DAT_ram_300508d0 + 1;
        FUN_ram_400002fa();
        iVar2 = iVar2 + 1;
LAB_ram_4000b70c:
        FUN_ram_400083d4(iVar2);
      }
    }
    FUN_ram_400002fa();
  } while( true );
}


/* NanoCore 1.11, address 0x4000b860.
 * REA evidence: ev_a7088c5d4f7fc07ca9e4a8179d81f15b16ea1a8afbbffb6973a9907541c304c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000b860(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_30050888 = 1;
  DAT_ram_300508e4 = 0;
  FUN_ram_400084ce(0);
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.11, address 0x4000b890.
 * REA evidence: ev_d18f4a9edb4d45d699dbc8661bc0ec36c64cfcc9476abfc93c2be3e1b3d0d791
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000b890(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  do {
    while( true ) {
      do {
        iVar4 = FUN_ram_40004822(_DAT_ram_3004d530,0xffffffff);
        iVar3 = _DAT_ram_3004d52c;
      } while (iVar4 != 0);
      if ((_DAT_ram_3004d52c != 0) &&
         ((DAT_ram_30049d40 != _DAT_ram_3004d52c || (DAT_ram_3004d566 != DAT_ram_3004d565)))) break;
LAB_ram_4000b918:
      _DAT_ram_3004d52c = 0;
    }
    DAT_ram_3004d534 = 1;
    DAT_ram_300508e5 = 0;
    DAT_ram_300508e4 = 0;
    DAT_ram_3004d574 = 0;
    DAT_ram_3004d57c = 0;
    DAT_ram_30049d4c = 0;
    DAT_ram_3004d567 = 0;
    iVar4 = FUN_ram_40007ee2(0x31,0x23,0,0x10,1);
    if (iVar4 == 0) {
      FUN_ram_400065c6(0x19);
      puVar5 = _DAT_ram_3004e7d0;
      bVar1 = false;
      if (DAT_ram_30049d40 != iVar3) {
        DAT_ram_30050889 = 1;
        fence();
        fence();
        _DAT_ram_3004e7d0[7] = _DAT_ram_3004e7d0[7] & 0xfffffff7;
        puVar2 = _DAT_ram_3004e7d0;
        fence();
        fence();
        *_DAT_ram_3004e7d0 = *puVar5 & 0xfffffffd;
        puVar5 = _DAT_ram_3004e7d0;
        fence();
        fence();
        _DAT_ram_3004e7d0[7] = puVar2[7] & 0xffffff7f;
        puVar2 = _DAT_ram_3004e7d0;
        fence();
        fence();
        *_DAT_ram_3004e7d0 = *puVar5 & 0xfffffeff;
        fence();
        fence();
        *_DAT_ram_3004e7d0 = *puVar2 & 0xfffffffb;
        DAT_ram_3004d5c0 = 0;
        while (DAT_ram_3004d520 != '\0') {
          FUN_ram_400065c6(1);
        }
        _DAT_ram_300508d0 = _DAT_ram_300508d4;
        if (_DAT_ram_3004d4f0 != 0) {
          do {
            iVar4 = FUN_ram_400048c0(_DAT_ram_3004d4f0);
          } while (iVar4 == 0);
        }
        if (_DAT_ram_3004dab4 != 0) {
          FUN_ram_40039886();
        }
        if (_DAT_ram_3004dab8 != 0) {
          FUN_ram_40039886();
        }
        fence();
        fence();
        puVar5 = _DAT_ram_3004e7d0 + 5;
        *puVar5 = _DAT_ram_3004e7d0[5] | 0x2000000;
        fence();
        fence();
        _DAT_ram_3004e7d0[5] = *puVar5 | 0x1000000;
        DAT_ram_30049d40 = iVar3;
        FUN_ram_40008fc0(0);
        bVar1 = true;
      }
      if ((DAT_ram_30049bd2 != '\0') && (DAT_ram_30050888 == '\0')) {
        if ((DAT_ram_3004d565 == '\0') && (bVar1)) {
          iVar3 = 0x79;
          while ((DAT_ram_3004d567 < 8 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
            FUN_ram_400065c6(1);
          }
        }
        FUN_ram_400077bc();
        iVar3 = FUN_ram_40007ee2(0x31,0x20,0,0x14,2);
        if (iVar3 != 0) goto LAB_ram_4000b968;
        _DAT_ram_300508e8 = 0x10;
        DAT_ram_30049d4c = 0;
        iVar3 = FUN_ram_40008cee();
        if (iVar3 != 0) {
          DAT_ram_300508e5 = 1;
          DAT_ram_3004d534 = 0;
          goto LAB_ram_4000b918;
        }
      }
    }
    else {
LAB_ram_4000b968:
      FUN_ram_4000b860();
    }
    _DAT_ram_3004d52c = 0;
    DAT_ram_3004d534 = 0;
  } while( true );
}


/* NanoCore 1.11, address 0x4000bb30.
 * REA evidence: ev_3e2656d3e77cccfb564645fd88865e9aae6f0ac38b68421c74725029c0627557
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000bb30(undefined4 param_1)

{
  FUN_ram_40009a24(0,1,0x3005093c,FUN_ram_40008e64,param_1);
  return;
}


/* NanoCore 1.11, address 0x4000bb4a.
 * REA evidence: ev_655e5b504cd1ac628d4c1cdb53aae7c31b3ffb2cacbda30f3d3a198b14cffcbb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000bb4a(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_30049d58;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.11, address 0x4000bb6a.
 * REA evidence: ev_64ca62f86cb7d0614f229579ea83abb3338517e3203009c4a1dfea05fc70dfe1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bb6a(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_34 [32];
  
  if (0x1d < param_1) {
    return 0xffffffff;
  }
  uVar1 = FUN_ram_4000bb4a();
  iVar2 = FUN_ram_40007a94(0,1);
  uVar3 = DAT_ram_40094604;
  if (iVar2 == 0) {
LAB_ram_4000bb9c:
    FUN_ram_4000783c(uVar3,0x3005093c);
  }
  else {
    iVar2 = FUN_ram_40008794();
    if (iVar2 != 0) {
LAB_ram_4000bb98:
      uVar3 = 0;
      goto LAB_ram_4000bb9c;
    }
    FUN_ram_40009832(0,0x3005093c,8);
    iVar2 = FUN_ram_40008df8(0x3005093c);
    if (iVar2 != 0) goto LAB_ram_4000bb98;
  }
  FUN_ram_4000781e(0);
  FUN_ram_400065c6(5);
  iVar2 = FUN_ram_400905cc(param_1,0x300508ec);
  if (iVar2 == 0) {
    FUN_ram_400002f4();
    DAT_ram_30049d58 = (undefined1)param_1;
    FUN_ram_400002fa();
    iVar2 = FUN_ram_4008bf0c(param_1);
    if (iVar2 == 0) {
      FUN_ram_40007b86(0x300508ec,param_2,param_3);
      FUN_ram_40073dce(auStack_34,5);
      uVar3 = FUN_ram_40007a94(0,1);
      FUN_ram_400087c0();
      iVar2 = FUN_ram_40007ad4(0,1,0x3005093c,auStack_34,5,uVar3);
      FUN_ram_40007cba();
      if (iVar2 == 0) {
        FUN_ram_400083f2(0x3005093c);
        iVar2 = FUN_ram_40007a94(0,1);
        FUN_ram_4000781e();
        if (iVar2 == 0) {
          iVar2 = FUN_ram_40008794();
          if ((iVar2 != 0) || (iVar2 = FUN_ram_40007c98(), uVar3 = DAT_ram_40094604, iVar2 != 0)) {
            uVar3 = 0;
          }
          FUN_ram_4000783c(uVar3,0x3005093c);
        }
        else {
          FUN_ram_40009832(DAT_ram_40094604,0x3005093c,0x10);
        }
        FUN_ram_400002f4();
        _DAT_ram_30050934 = _DAT_ram_30050934 + 1;
        FUN_ram_400002fa();
        return 0;
      }
      goto LAB_ram_4000bbf0;
    }
  }
  if (param_1 != uVar1) {
    FUN_ram_4000873c(uVar1);
  }
LAB_ram_4000bbf0:
  iVar2 = FUN_ram_40007a94(0,1);
  FUN_ram_4000781e();
  if (iVar2 == 0) {
    FUN_ram_4000783c(DAT_ram_40094604,0x3005093c);
  }
  else {
    FUN_ram_40009832(DAT_ram_40094604,0x3005093c,0x10);
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4000bd16.
 * REA evidence: ev_3b3521af1ea6a43ff8594a4844a03050882dc42feb87199dc1f6ad0445121953
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bd16(uint param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  
  if (param_1 < 0xc) {
    if (param_1 < 8) {
      FUN_ram_400087c0();
      uVar4 = FUN_ram_40009b20(param_1);
      FUN_ram_40007cba();
    }
    else {
      iVar3 = FUN_ram_40007d9e();
      if (iVar3 == 0) {
        FUN_ram_400002f4();
        cVar2 = DAT_ram_3004d5d8;
        uVar1 = DAT_ram_30049bde;
        cVar5 = '\0';
        if (-1 < (short)DAT_ram_30049bde) {
          DAT_ram_30049bde = 0xffff;
          DAT_ram_3004d5d8 = '\0';
          _DAT_ram_3004d490 = _DAT_ram_3004d490 + 1;
          cVar5 = cVar2;
        }
        FUN_ram_400002fa();
        if (-1 < (short)uVar1) {
          FUN_ram_40008426(2,uVar1 & 0xff,0xffffffff);
        }
        if (cVar5 != '\0') {
          FUN_ram_40009832(DAT_ram_40094604,0x3004d5dc,0x10);
          FUN_ram_400002f4();
          uVar1 = DAT_ram_30049bde;
          FUN_ram_400002fa();
          if (-1 < (short)uVar1) {
            FUN_ram_40007884(0);
            FUN_ram_4000783c(0,0x3004d5dc);
          }
        }
        FUN_ram_400087c0();
        uVar4 = FUN_ram_40009b20(param_1);
        FUN_ram_40007cba();
        FUN_ram_40008850();
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    return uVar4;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4000bd20.
 * REA evidence: ev_04c798c69f33bb9bf2f4b8831215e64074aa9642ee6befa7a29ca65fddf75836
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bd20(uint param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  
  if (param_1 < 8) {
    FUN_ram_400087c0();
    uVar4 = FUN_ram_40009b20(param_1);
    FUN_ram_40007cba();
  }
  else {
    iVar3 = FUN_ram_40007d9e();
    if (iVar3 == 0) {
      FUN_ram_400002f4();
      cVar2 = DAT_ram_3004d5d8;
      uVar1 = DAT_ram_30049bde;
      cVar5 = '\0';
      if (-1 < (short)DAT_ram_30049bde) {
        DAT_ram_30049bde = 0xffff;
        DAT_ram_3004d5d8 = '\0';
        _DAT_ram_3004d490 = _DAT_ram_3004d490 + 1;
        cVar5 = cVar2;
      }
      FUN_ram_400002fa();
      if (-1 < (short)uVar1) {
        FUN_ram_40008426(2,uVar1 & 0xff,0xffffffff);
      }
      if (cVar5 != '\0') {
        FUN_ram_40009832(DAT_ram_40094604,0x3004d5dc,0x10);
        FUN_ram_400002f4();
        uVar1 = DAT_ram_30049bde;
        FUN_ram_400002fa();
        if (-1 < (short)uVar1) {
          FUN_ram_40007884(0);
          FUN_ram_4000783c(0,0x3004d5dc);
        }
      }
      FUN_ram_400087c0();
      uVar4 = FUN_ram_40009b20(param_1);
      FUN_ram_40007cba();
      FUN_ram_40008850();
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x4000be0a.
 * REA evidence: ev_71592339b71f942fb7c5837a39cf95f7faeb086191efec432653ba363d1702d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000be0a(undefined4 param_1)

{
  FUN_ram_40009a24(4,8,0x3004d5dc,FUN_ram_400085c8,param_1);
  return;
}


/* NanoCore 1.11, address 0x4000be24.
 * REA evidence: ev_342f41b52100726213120011d1f394bacbc7abd9d104c8381b02f417729f0575
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000be24(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((byte)(param_1 - 0x1eU) < 8) && (iVar1 = FUN_ram_4000bd16(), iVar1 == 0)) &&
     (DAT_ram_3004e7c8 < 8)) {
    uVar2 = FUN_ram_40008d5a();
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4000be5c.
 * REA evidence: ev_44b7c479399d1e3a6fc78e8813205a8e560bf2783a267a1426e44493fe5e1a7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000be5c(void)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (DAT_ram_3004e7c8 < 8) {
    uVar1 = DAT_ram_30049be0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4000be78.
 * REA evidence: ev_44be8992e68affa1852dc0b4d9b2ee3cde7a29e96b96e8f595df8c0b9d161a17
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000be78(void)

{
  return DAT_ram_3004e7c8;
}


/* NanoCore 1.11, address 0x4000be82.
 * REA evidence: ev_928ea28a6b762a162eb8a48d4d2b630394965cc217569d09a01b6c00478b5f8a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000be82(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400087c0();
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 5)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if ((*(int *)(iVar2 + 0x13c) != 8) || (*(char *)(iVar2 + 0x140) != DAT_ram_3004e7c8)) {
      FUN_ram_4006c8b8(iVar3 + 0x144,0xc);
    }
    *(undefined4 *)(iVar3 + 0x13c) = 8;
    uVar1 = 0;
    *(char *)(iVar3 + 0x140) = DAT_ram_3004e7c8;
    *(undefined4 *)(iVar3 + 0x180) = _DAT_ram_3004e7c4;
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x144) = param_1;
    FUN_ram_4005fcd6(0x3004dec4);
  }
  FUN_ram_40007cba();
  return uVar1;
}


/* NanoCore 1.11, address 0x4000bf3e.
 * REA evidence: ev_3fcba16a800de4143294855ec1c6d063a075d5dcab50886aa8a1efe643a6da5f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bf3e(uint param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uStack_38;
  undefined1 auStack_34 [16];
  ushort uStack_24;
  
  if (DAT_ram_3004e850 != '\0') {
    FUN_ram_400049c6(0x3004e824,0xffffffff);
  }
  cVar2 = DAT_ram_3004e818;
  uStack_38 = 0;
  FUN_ram_4008c328(auStack_34);
  if (cVar2 != '\0') {
    iVar4 = FUN_ram_40008794();
    if (iVar4 == 0) {
      iVar4 = 0x40;
      FUN_ram_400078a6(0,8);
      do {
        if (*(int *)(_DAT_ram_30050854 + 0x34) == 0) goto LAB_ram_4000bfa8;
        iVar4 = iVar4 + -1;
        FUN_ram_400065c6(1);
      } while (iVar4 != 0);
      if (*(int *)(_DAT_ram_30050854 + 0x34) == 0) goto LAB_ram_4000bfa8;
    }
    FUN_ram_4000797a(0);
  }
LAB_ram_4000bfa8:
  iVar5 = FUN_ram_40090cd4(param_1,0x3004e854,0x1000,&uStack_38);
  iVar4 = _DAT_ram_30050854;
  if ((((iVar5 == 0) && (uStack_38 != 0)) && ((uStack_38 & 3) == 0)) &&
     (uVar3 = uStack_38 >> 2, uVar3 - 1 < 0x400)) {
    bVar1 = DAT_ram_3004e818 != '\0';
    FUN_ram_400087c0();
    iVar4 = FUN_ram_40007ad4(1,2,iVar4,&DAT_ram_400946b0,3,bVar1);
    FUN_ram_40007cba();
    if ((iVar4 == 0) &&
       ((uStack_24 != 0xffff && param_1 == uStack_24 ||
        (iVar4 = FUN_ram_4008bb6c(param_1), iVar4 == 0)))) {
      FUN_ram_4000304c(0x3004f854,0x3004e854,uStack_38);
      FUN_ram_40076024(_DAT_ram_3004e820,0x3004f854,uVar3);
      FUN_ram_400076e2();
      if (cVar2 == '\0') {
        iVar4 = FUN_ram_40008794();
        if ((iVar4 != 0) || (iVar4 = FUN_ram_40007c98(), uVar6 = DAT_ram_40094604, iVar4 != 0)) {
          uVar6 = 0;
        }
        FUN_ram_4000797a(uVar6);
      }
      else {
        FUN_ram_400078a6(DAT_ram_40094604,0x10);
      }
      FUN_ram_400002f4();
      _DAT_ram_3004e81c = _DAT_ram_3004e81c + 1;
      FUN_ram_400002fa();
      uVar6 = 0;
      goto LAB_ram_4000c020;
    }
  }
  if (cVar2 == '\0') {
    FUN_ram_4000797a(DAT_ram_40094604);
  }
  else {
    FUN_ram_400078a6(DAT_ram_40094604,0x10);
  }
  uVar6 = 0xffffffff;
LAB_ram_4000c020:
  if (DAT_ram_3004e850 != '\0') {
    FUN_ram_40004ab8(0x3004e824);
  }
  return uVar6;
}


