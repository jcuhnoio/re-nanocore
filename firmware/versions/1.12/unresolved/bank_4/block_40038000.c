/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40038000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40038132.
 * REA evidence: ev_3a223df8e664aa9777026176ba5a49c2102f8a22db748b4638d82eacde759a84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038132(uint param_1)

{
  if (7 < param_1) {
    return;
  }
  if (((*(ushort *)(param_1 * 0x70 + 0x3007f3e2) & 0x200) != 0) &&
     (*(char *)(param_1 * 0x38 + 0x3007f794) != '\0')) {
    FUN_ram_40037816();
    if (*(int *)(&DAT_ram_3007f408 + param_1 * 0x70) != 0) {
      FUN_ram_40037cf4(param_1 & 0xff);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40038192.
 * REA evidence: ev_3d7b44a671b72891847faa947c586e493fcbd4cdb536eb8902c79fec59a67164
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038192(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  puVar5 = (&PTR_s_no_pin_ram_4009cc0c_ram_4009cce8)[param_1 * 8];
  iVar2 = FUN_ram_40005162(puVar5,s_no_pin_ram_4009cc0c);
  uVar4 = (&DAT_ram_4009cce0)[param_1 * 8];
  if ((iVar2 != 0) && ((uVar4 == 4 || (uVar4 - 6 < 2)))) {
    uVar3 = FUN_ram_40041ad8(puVar5);
    *(undefined4 *)(param_2 * 0xc + 0x3007fa20) = uVar3;
    FUN_ram_40041aa0(uVar3,0);
    FUN_ram_40041ab4(*(undefined4 *)(param_2 * 0xc + 0x3007fa20),0);
    (&DAT_ram_3007f41c)[param_2 * 0x70] = (&DAT_ram_3007f41c)[param_2 * 0x70] | 0x40;
  }
  puVar5 = (&PTR_s_no_pin_ram_4009cc0c_ram_4009ccec)[param_1 * 8];
  iVar2 = FUN_ram_40005162(puVar5,s_no_pin_ram_4009cc0c);
  if ((iVar2 != 0) && ((uVar4 & 0xfffffffd) == 4)) {
    uVar3 = FUN_ram_40041ad8(puVar5);
    iVar2 = param_2 * 0xc;
    *(undefined4 *)(iVar2 + 0x3007f9a4) = uVar3;
    FUN_ram_40041aa0(uVar3,1);
    iVar1 = param_2 * 0x70;
    FUN_ram_40041a68(*(undefined4 *)(iVar2 + 0x3007f9a4),2,&LAB_ram_40037af4,iVar1 + 0x3007f3c0);
    FUN_ram_40041a86(*(undefined4 *)(iVar2 + 0x3007f9a4),1);
    (&DAT_ram_3007f41c)[iVar1] = (&DAT_ram_3007f41c)[iVar1] | 0x20;
  }
  if (uVar4 == 5) {
    (&DAT_ram_3007f41c)[param_2 * 0x70] = (&DAT_ram_3007f41c)[param_2 * 0x70] | 0x60;
  }
  return;
}


/* NanoCore 1.12, address 0x400382ca.
 * REA evidence: ev_7311f2b01e499787c8f912a582a7fa53c74193edea57765d3b02f8b8dec27a92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400382ca(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((&DAT_ram_3004b820)[iVar2 * 2] == param_1) {
      uVar1 = (&DAT_ram_3004b824)[iVar2 * 2];
      goto LAB_ram_400382e6;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x14);
  uVar1 = *(undefined4 *)(&DAT_ram_3007f424 + param_2 * 0x70);
LAB_ram_400382e6:
  FUN_ram_40038d5c(param_2 + 0x25,uVar1);
  return;
}


/* NanoCore 1.12, address 0x40038308.
 * REA evidence: ev_a37e07d17f48716ee4515708cc3da59bde133ec49427ed4cebee04109021c8cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038308(int param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 0x60);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = 0xfffffff6;
  if (uVar9 < 8) {
    uVar8 = *param_2;
    uVar2 = 0xfffffff6;
    if (uVar8 < 8000000) {
      uVar4 = param_2[1];
      uVar2 = 1;
      if (((uVar4 & 0xc0) != 0x80) && (uVar2 = 2, (uVar4 & 0xc0) != 0x40)) {
        uVar2 = 0;
      }
      uVar5 = uVar4 & 0x30;
      uVar6 = 0;
      if (uVar5 != 0) {
        if (uVar5 == 0x10) {
          uVar6 = 1;
        }
        else if (uVar5 == 0x20) {
          uVar6 = 2;
        }
        else {
          uVar6 = 3;
        }
      }
      uVar4 = uVar4 & 0xf;
      uVar7 = 0;
      if ((((uVar4 != 5) && (uVar7 = 1, uVar4 != 6)) && (uVar7 = 2, uVar4 != 7)) &&
         (uVar7 = 4, uVar4 != 9)) {
        uVar7 = 3;
      }
      FUN_ram_40038c22(uVar9 + 0x25);
      FUN_ram_400382ca(uVar8,uVar9);
      FUN_ram_40038bfe(uVar9 + 0x25);
      FUN_ram_4004004c(1000);
      FUN_ram_4003e278(uVar1,1);
      FUN_ram_4003e262(uVar1);
      iVar3 = FUN_ram_4003e712(uVar1,uVar8,0,uVar2,uVar6,uVar7,param_2[3] & 0xf);
      if (iVar3 < 0) {
        FUN_ram_4003e278(uVar1,0);
        uVar2 = 0xffffffff;
      }
      else {
        FUN_ram_4003e278(uVar1,0);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4003840a.
 * REA evidence: ev_a2bc1606147215afab4589a85859f5e3608605ebd05f4755eca32350f9d1fa7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003840a(int param_1,int param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uStack_12 = 0x13;
  uStack_11 = 0x11;
  iVar1 = *(int *)(param_1 + 0x48);
  if (0x87 < param_2) {
    return 0;
  }
  if (param_2 < 0x80) {
    if (param_2 == 0x10) {
      if (param_3 != (char *)0x100) {
        return 0;
      }
    }
    else {
      if (param_2 == 0x11) {
        if (param_3 == (char *)0x200) {
          FUN_ram_40037f2a(*(undefined4 *)(param_1 + 0x60));
          return 0;
        }
        uVar3 = 0;
        if (param_3 != (char *)0x100) {
          return 0;
        }
        goto LAB_ram_40038488;
      }
      if (param_2 != 3) {
        return 0;
      }
      if (param_3 != (char *)0x200) {
        return 0;
      }
      FUN_ram_4003792e(*(undefined1 *)(param_1 + 0x60),iVar1);
    }
    uVar3 = 1;
LAB_ram_40038488:
    FUN_ram_4003e64c(iVar1,1,uVar3);
    return 0;
  }
  switch(param_2) {
  case 0x80:
    FUN_ram_4003e7b6(iVar1);
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007fa20);
    FUN_ram_4003b862(uVar2 >> 5,uVar2 & 0x1f);
    break;
  case 0x81:
    FUN_ram_4003e798(iVar1);
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007fa20);
    FUN_ram_4003b890(uVar2 >> 5,uVar2 & 0x1f);
    break;
  case 0x83:
    if ((*(byte *)(param_1 + 0x5c) & 0xd) == 4) {
      FUN_ram_40041ab4(*(undefined4 *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007fa20),0);
    }
    if (1 < (byte)((*(byte *)(param_1 + 0x5c) & 0xf) - 5)) {
      return 0;
    }
    pcVar5 = *(code **)(param_1 + 0x40);
    puVar4 = &uStack_11;
    goto LAB_ram_4003853e;
  case 0x84:
    if ((*(byte *)(param_1 + 0x5c) & 0xd) == 4) {
      FUN_ram_40041ab4(*(undefined4 *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007fa20),1);
    }
    if (1 < (byte)((*(byte *)(param_1 + 0x5c) & 0xf) - 5)) {
      return 0;
    }
    pcVar5 = *(code **)(param_1 + 0x40);
    puVar4 = &uStack_12;
LAB_ram_4003853e:
    (*pcVar5)(param_1,0,puVar4,1,1,pcVar5);
    break;
  case 0x86:
    uVar3 = 1;
    if (*param_3 != '\x13') {
      if (*param_3 != '\x11') {
        return 0;
      }
      uVar3 = 0;
    }
    FUN_ram_4003e45e(iVar1,uVar3);
    break;
  case 0x87:
    FUN_ram_40038c22(*(int *)(param_1 + 0x60) + 0x25);
    FUN_ram_400382ca(*(undefined4 *)param_3,*(undefined4 *)(param_1 + 0x60));
    FUN_ram_40038bfe(*(int *)(param_1 + 0x60) + 0x25);
    FUN_ram_4004004c(1000);
    FUN_ram_4003e278(iVar1,1);
    FUN_ram_4003e262(iVar1);
    FUN_ram_4003e4da(iVar1,*(undefined4 *)param_3);
    FUN_ram_4003e278(iVar1,0);
  }
  return 0;
}


/* NanoCore 1.12, address 0x400385e8.
 * REA evidence: ev_3436138f6ff2f208ca6f534076331326662bd92394598de48401db6570efc247
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400385e8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 auStack_58 [36];
  
  FUN_ram_4000303c(auStack_58,&DAT_ram_40095994,0x18);
  puVar7 = &DAT_ram_4009ccd0;
  iVar6 = 0;
  while( true ) {
    uVar1 = (&DAT_ram_4009ccd0)[iVar6 * 8] & 0xf;
    *(undefined ***)(&DAT_ram_3007f40c + uVar1 * 0x70) = &PTR_FUN_ram_40038308_ram_4009ccbc;
    FUN_ram_4000303c(&DAT_ram_3007f410 + uVar1 * 0x70,auStack_58,0x18);
    uVar8 = puVar7[2];
    iVar2 = 0x800;
    if (1499999 < uVar8) {
      iVar2 = 0x4000;
    }
    uVar3 = (&DAT_ram_4009ccd0)[iVar6 * 8];
    iVar5 = uVar1 * 0x70;
    *(uint *)(&DAT_ram_3007f410 + iVar5) = uVar8;
    *(uint *)(&DAT_ram_3007f420 + iVar5) = uVar1;
    *(uint *)(&DAT_ram_3007f414 + iVar5) =
         (((uVar3 & 0x3ff) >> 8) - 1 & 3) << 4 | (uVar3 & 0xff) >> 4 | ((uVar3 & 0xfff) >> 10) << 6
         | iVar2 << 10 | *(uint *)(&DAT_ram_3007f414 + iVar5) & 0xfc000300;
    uVar4 = puVar7[4];
    iVar2 = puVar7[1];
    *(int *)(&DAT_ram_3007f418 + iVar5) = iVar2;
    (&DAT_ram_3007f41c)[iVar5] = (&DAT_ram_3007f41c)[iVar5] & 0xf0 | (byte)uVar4 & 0xf;
    *(undefined4 *)(&DAT_ram_3007f424 + iVar5) = puVar7[3];
    FUN_ram_400382ca(uVar8,uVar1);
    FUN_ram_40038bfe(uVar1 + 0x25);
    FUN_ram_40039bb8(uVar1 + 0x1c);
    FUN_ram_4004004c(10000);
    FUN_ram_40039bf8(uVar1 + 0x1c);
    uVar4 = FUN_ram_4003e5ec(uVar1,&DAT_ram_400378c0,FUN_ram_40037dda);
    *(undefined4 *)(uVar1 * 4 + 0x3007fa00) = uVar4;
    if (1499999 < uVar8) {
      *(byte *)(uVar1 * 4 + 0x20801133) =
           (byte)(7 << (8 - ((_DAT_ram_20800004 & 0x1ffffff) >> 0x15) & 0x1f)) |
           *(byte *)(uVar1 * 4 + 0x20801133) & 0x1f;
    }
    iVar5 = uVar1 * 0x70;
    FUN_ram_400423cc(iVar5 + 0x3007f3c0,puVar7[5],iVar2,uVar4);
    if (iVar2 == 0xb03) {
      FUN_ram_4003e7d6(*(undefined4 *)(&DAT_ram_3007f408 + iVar5));
      FUN_ram_4003e9c8(*(undefined4 *)(&DAT_ram_3007f408 + iVar5),FUN_ram_40037b2c,0);
      FUN_ram_4003e64c(*(undefined4 *)(&DAT_ram_3007f408 + iVar5),1,1);
      *(undefined4 *)(uVar1 * 4 + 0x3007f920) = 0x800;
      uVar4 = FUN_ram_40005604(0x800,0x20);
      iVar5 = uVar1 * 0x10;
      *(undefined4 *)(iVar5 + 0x3007f344) = uVar4;
      uVar4 = FUN_ram_40005604(0x800,0x20);
      *(undefined4 *)(iVar5 + 0x3007f340) = uVar4;
      iVar2 = FUN_ram_40004834(s_uart_tx0_ram_3004b8c0 + uVar1 * 9,0,0);
      *(int *)(iVar5 + 0x3007f34c) = iVar2;
      if (iVar2 == 0) {
        return 0xffffffff;
      }
    }
    FUN_ram_40038192(iVar6,uVar1);
    puVar7 = puVar7 + 8;
    if (iVar6 != 0) break;
    iVar6 = 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40038832.
 * REA evidence: ev_11e7eb089819a2816e38768c1f1c12e0cdd7ee1d7ef7352795f2f56bf920865d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038832(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40038bfe(0xf);
  if (((iVar2 == 0) && (iVar2 = FUN_ram_40039bb8(0x18), iVar2 == 0)) &&
     (iVar2 = FUN_ram_40039bf8(0x18), iVar2 == 0)) {
    FUN_ram_4003eb3c(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff6;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40038898.
 * REA evidence: ev_052b49179cfa6b6ea17507957275b2f30243c6804d105de33933054e3288eca6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038898(int param_1,uint param_2)

{
  if (3 < param_2) {
    param_2 = 3;
  }
  *(uint *)(param_1 + 0x54) = param_2;
  FUN_ram_4003eade(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
  FUN_ram_4003eab8(0);
  return 0;
}


/* NanoCore 1.12, address 0x400388be.
 * REA evidence: ev_dc60885466fc1d71640dbd49e2ac509f1d1ff746434c34e3bc0a3af18fbf0e75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400388be(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x5c) <= param_2) {
    param_2 = *(uint *)(param_1 + 0x5c) - 1;
  }
  *(uint *)(param_1 + 0x58) = param_2;
  FUN_ram_4003eafc(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
  FUN_ram_4003eab8(0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) {
    FUN_ram_4003ec1e(1);
  }
  return 0;
}


/* NanoCore 1.12, address 0x400388fa.
 * REA evidence: ev_1f192741d9ec337e0154bb42e4159e2cd5fc3eab96d0a5ba6d6238483be6dab0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400388fa(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  iVar1 = FUN_ram_4003ec2c();
  if (iVar1 != 0) {
    if (*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 0x58)) {
      FUN_ram_400388be(param_1);
    }
  }
  FUN_ram_4003eb1c(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
  FUN_ram_4003eab8(0);
  return 0;
}


/* NanoCore 1.12, address 0x40038934.
 * REA evidence: ev_c607eeeea8900df2f3a2126224419652cfccfaf13a8fb43a14c0d1473447657a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40038934(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003eb78();
  if (iVar1 == 0) {
    FUN_ram_4003ebf6(1,_DAT_ram_3007fae0);
  }
  else {
    FUN_ram_4003eab8(_DAT_ram_3007fad4);
    FUN_ram_4003ec3a();
  }
  return 0;
}


/* NanoCore 1.12, address 0x40038a30.
 * REA evidence: ev_b11eacf28b4af4f676a52e363d37426ceb5cea852100e68ec46de4e62e49c037
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038a30(void)

{
  FUN_ram_4003ed1c();
  FUN_ram_4003ed7a();
  FUN_ram_4003ee0c();
  return 0;
}


/* NanoCore 1.12, address 0x40038a48.
 * REA evidence: ev_f864bf1713e9146268d82f8de26b260ce1c84eef52aed6f6263a2d01d18b9a1d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40038a7c) */
/* WARNING: Removing unreachable block (ram,0x40038a90) */
/* WARNING: Removing unreachable block (ram,0x40038a94) */
/* WARNING: Removing unreachable block (ram,0x40038aac) */
/* WARNING: Removing unreachable block (ram,0x40038ab0) */
/* WARNING: Removing unreachable block (ram,0x40038ab4) */
/* WARNING: Removing unreachable block (ram,0x40038a96) */
/* WARNING: Removing unreachable block (ram,0x40038a98) */
/* WARNING: Removing unreachable block (ram,0x40038aa0) */

void FUN_ram_40038a48(void)

{
  fence();
  do {
    fence();
  } while( true );
}


/* NanoCore 1.12, address 0x40038ab6.
 * REA evidence: ev_41e8eb5599ced9e9784ad237c2ef7f866ea9dbbfd88bae46f2a914b4cc6a3c89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40038afc) */

int FUN_ram_40038ab6(float param_1,ushort *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_4003e13a();
  if (iVar1 == 0) {
    iVar1 = (int)(param_1 * DAT_ram_4009cd48);
  }
  uVar2 = (0x800 - param_3) + (uint)*param_2;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
    iVar1 = 0;
  }
  else {
    uVar2 = uVar2 & 0xffff;
    iVar1 = (int)(uVar2 * iVar1) / 0xfff;
  }
  *param_2 = (ushort)uVar2;
  return iVar1;
}


/* NanoCore 1.12, address 0x40038b12.
 * REA evidence: ev_ee166d75b9c122020add1ed9e8ccdd232734b00728a3e1b2cff4f78ac437aabe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40038b12(void)

{
  fence();
  fence();
  _DAT_ram_19250004 = _DAT_ram_19250004 | 0xff02;
  return;
}


/* NanoCore 1.12, address 0x40038b2e.
 * REA evidence: ev_f75de1a0e8c8b20a3685fbead057d0ba11f823c7b3ab973321637442169efa7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40038b2e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40038d5c(0x3d,48000000);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40038ba4(0x3d), iVar1 < 0)) {
    iVar1 = -1;
  }
  else {
    FUN_ram_40038b12();
    _DAT_ram_3007fae8 = FUN_ram_40038a48();
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40038b70.
 * REA evidence: ev_ac7d7c85a0a60d598625ba84542bb4e0f463a00c3a2088c3fc8ccb09829703ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40038b70(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_ram_3007faec == 0) {
    iVar2 = FUN_ram_40038b2e();
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      _DAT_ram_3007faec = 1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40038ba4.
 * REA evidence: ev_e5ba5c2df8420536bf467c99f62c4224e0819c59ae384baa7c8f2e90d68f4bca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038ba4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x20), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40038bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40038bc8.
 * REA evidence: ev_559fac8439200831fc515fbbbc26e7569ed183971e1588fc2d5e46230ffc123e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038bc8(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar2 = *piVar1, iVar2 != 0)) && (pcVar3 = *(code **)(iVar2 + 0x24), pcVar3 != (code *)0x0))
  {
    (*pcVar3)();
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40038bfe.
 * REA evidence: ev_f1f6a59aaa1a0d09c37219780caf618fbff7f94388fc7fa86bc628cffa5c1366
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038bfe(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (puVar3 = (undefined4 *)*piVar1, puVar3 != (undefined4 *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar3, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40038c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40038c22.
 * REA evidence: ev_70b77181f45878d7690165931c27e7bcbf2d80b2eb7863dcfb78ad1cbbc48269
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038c22(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar2 = *piVar1, iVar2 != 0)) && (pcVar3 = *(code **)(iVar2 + 4), pcVar3 != (code *)0x0)) {
    (*pcVar3)();
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40038c58.
 * REA evidence: ev_ed4af190555a6bc16014a3fd9798c03690a28ecb70b8a11fc4c367c83752cec0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038c58(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40038c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40038c7c.
 * REA evidence: ev_fbc6f97b69e3aecd02f077566a4f0d9281440b624ec80a3ea0f25bf53160ff06
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038c7c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x10), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40038c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40038ca0.
 * REA evidence: ev_404a9ac0d3da9fa195d6b83de54bb3038cc8cf825f19f0f3b6bb6244658e6617
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038ca0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40038cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40038cc4.
 * REA evidence: ev_2c754fe6f2c034c0afaf2f59cce13c12abcff38bdc28cae800dd4ea8ad7537a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038cc4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x1c), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40038ce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40038ce8.
 * REA evidence: ev_72dbb267acadb1b01a34c92bb79ae4b714e0a529b4d82e309f5dd577eec338ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038ce8(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  
  while (((param_1 - 1U < 0x4b &&
          (piVar2 = *(int **)(gp + -0x16c + param_1 * 4), piVar2 != (int *)0x0)) && (*piVar2 != 0)))
  {
    UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40038d1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(piVar2);
      return uVar1;
    }
    param_1 = FUN_ram_40038cc4();
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40038d2c.
 * REA evidence: ev_a0bd687efe10ad280723365e050000a9142062ef0aa7ac37f45b153557254280
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038d2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 - 1U < 0x4b) {
    iVar1 = FUN_ram_40038cc4();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_ram_40038d2c(iVar1,0);
    }
    uVar2 = FUN_ram_40038c7c(param_1,uVar2);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40038d5c.
 * REA evidence: ev_e0bb5657e30baa24675fbe4c977a02f86459fc8118996fc6c7402dbfb97433c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038d5c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (0x4a < param_1 - 1U) {
    return 0;
  }
  FUN_ram_40038cc4();
  uVar1 = FUN_ram_40038d2c();
  iVar2 = FUN_ram_40038c7c(param_1,uVar1);
  if (iVar2 != param_2) {
    uVar1 = FUN_ram_40038c58(param_1,param_2,uVar1);
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40038dac.
 * REA evidence: ev_2314eb7a5a39cc5047f48a613bcbc8dfb5afab2a6e5386e7b398777ca1bcf7ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038dac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (0x4a < param_1 - 1U) {
    return 0;
  }
  iVar1 = FUN_ram_40038cc4();
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40038ce8();
    if (iVar2 == 0) {
      FUN_ram_40038dac(iVar1);
    }
    uVar3 = FUN_ram_40038bfe(param_1);
    return uVar3;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40038df2.
 * REA evidence: ev_5ed9a2d9b3f78f26f923f3b306bbecc5f881e6ed34a8b4eb90436be8e3cc772a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40038df2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (0x4a < param_1 - 1U) {
    return 0;
  }
  iVar1 = FUN_ram_40038cc4();
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40038ce8();
    if (iVar2 == 0) {
      FUN_ram_40038dac(iVar1);
    }
    iVar1 = FUN_ram_40038ba4(param_1);
    if (iVar1 != 0) {
      uVar3 = FUN_ram_40038bfe(param_1);
      return uVar3;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40038e42.
 * REA evidence: ev_76dd906a48d8858f56ccbde8ad271dd0f2a5342faa058bf1ca67b72a5a3c43a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40038e42(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  while (((iVar2 = *(int *)(gp + -0x16c + iVar1 * 4), iVar2 == 0 || (*(int *)(iVar2 + 4) == 0)) ||
         (iVar2 = strcmp(param_1), iVar2 != 0))) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x4c) {
      return -0x16;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40038ea6.
 * REA evidence: ev_68f0a3bdb772920c4ad9641ac266b385213fad90e7cf1e1c88aac7851466affb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038ea6(int param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_3 + 1U == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 1000000 / (param_3 + 1U);
  }
  uVar2 = 0;
  if (9999 < uVar3) {
    if (uVar3 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0x4e200000 / uVar3;
    }
    uVar2 = 0x20000 - uVar3;
  }
  lVar1 = (ulonglong)(0x20000 - uVar2) * 66000;
  uVar4 = FUN_ram_40003bf8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_2,0);
  uVar3 = (uint)uVar4;
  fence();
  if (((int)((ulonglong)uVar4 >> 0x20) != 0) || (0x1ff < uVar3)) {
    uVar3 = 0x1ff;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x18020000) = uVar3 << 0x14 | uVar2 | 0xc0060000;
  return;
}


