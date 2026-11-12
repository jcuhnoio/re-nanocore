/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40036000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400360ca.
 * REA evidence: ev_09c2c00c1ff64d069e0db02074c59418c8ed92d00cabdca151eb228ede2c5acd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400360ca(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((&DAT_ram_30047224)[iVar2 * 2] == param_1) {
      uVar1 = (&DAT_ram_30047228)[iVar2 * 2];
      goto LAB_ram_400360e6;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x14);
  uVar1 = *(undefined4 *)(&DAT_ram_3007e024 + param_2 * 0x70);
LAB_ram_400360e6:
  FUN_ram_40036b5c(param_2 + 0x25,uVar1);
  return;
}


/* NanoCore 1.10, address 0x40036108.
 * REA evidence: ev_0366f8bece1e75e73e66430d17d033524236124ce4548a2e0d1adf8a78290534
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036108(int param_1,uint *param_2)

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
      FUN_ram_40036a22(uVar9 + 0x25);
      FUN_ram_400360ca(uVar8,uVar9);
      FUN_ram_400369fe(uVar9 + 0x25);
      FUN_ram_4003f052(1000);
      FUN_ram_4003d292(uVar1,1);
      FUN_ram_4003d27c(uVar1);
      iVar3 = FUN_ram_4003d72c(uVar1,uVar8,0,uVar2,uVar6,uVar7,param_2[3] & 0xf);
      if (iVar3 < 0) {
        FUN_ram_4003d292(uVar1,0);
        uVar2 = 0xffffffff;
      }
      else {
        FUN_ram_4003d292(uVar1,0);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4003620a.
 * REA evidence: ev_5655eef736b568c555e849c1ecfd25687f274fa2d3ebe4b626f290add5f739ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003620a(int param_1,int param_2,char *param_3)

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
          FUN_ram_40035d2a(*(undefined4 *)(param_1 + 0x60));
          return 0;
        }
        uVar3 = 0;
        if (param_3 != (char *)0x100) {
          return 0;
        }
        goto LAB_ram_40036288;
      }
      if (param_2 != 3) {
        return 0;
      }
      if (param_3 != (char *)0x200) {
        return 0;
      }
      FUN_ram_4003572e(*(undefined1 *)(param_1 + 0x60),iVar1);
    }
    uVar3 = 1;
LAB_ram_40036288:
    FUN_ram_4003d666(iVar1,1,uVar3);
    return 0;
  }
  switch(param_2) {
  case 0x80:
    FUN_ram_4003d7d0(iVar1);
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007e620);
    FUN_ram_4003a87c(uVar2 >> 5,uVar2 & 0x1f);
    break;
  case 0x81:
    FUN_ram_4003d7b2(iVar1);
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007e620);
    FUN_ram_4003a8aa(uVar2 >> 5,uVar2 & 0x1f);
    break;
  case 0x83:
    if ((*(byte *)(param_1 + 0x5c) & 0xd) == 4) {
      FUN_ram_40040aba(*(undefined4 *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007e620),0);
    }
    if (1 < (byte)((*(byte *)(param_1 + 0x5c) & 0xf) - 5)) {
      return 0;
    }
    pcVar5 = *(code **)(param_1 + 0x40);
    puVar4 = &uStack_11;
    goto LAB_ram_4003633e;
  case 0x84:
    if ((*(byte *)(param_1 + 0x5c) & 0xd) == 4) {
      FUN_ram_40040aba(*(undefined4 *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007e620),1);
    }
    if (1 < (byte)((*(byte *)(param_1 + 0x5c) & 0xf) - 5)) {
      return 0;
    }
    pcVar5 = *(code **)(param_1 + 0x40);
    puVar4 = &uStack_12;
LAB_ram_4003633e:
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
    FUN_ram_4003d478(iVar1,uVar3);
    break;
  case 0x87:
    FUN_ram_40036a22(*(int *)(param_1 + 0x60) + 0x25);
    FUN_ram_400360ca(*(undefined4 *)param_3,*(undefined4 *)(param_1 + 0x60));
    FUN_ram_400369fe(*(int *)(param_1 + 0x60) + 0x25);
    FUN_ram_4003f052(1000);
    FUN_ram_4003d292(iVar1,1);
    FUN_ram_4003d27c(iVar1);
    FUN_ram_4003d4f4(iVar1,*(undefined4 *)param_3);
    FUN_ram_4003d292(iVar1,0);
  }
  return 0;
}


/* NanoCore 1.10, address 0x400363e8.
 * REA evidence: ev_f7029ce67295ab18ffe5b3b94314efb94bd81db5a6fdbe68ae640b6df63bc94b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400363e8(void)

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
  
  FUN_ram_4000305c(auStack_58,&DAT_ram_40091aac,0x18);
  puVar7 = &DAT_ram_40095ad8;
  iVar6 = 0;
  while( true ) {
    uVar1 = (&DAT_ram_40095ad8)[iVar6 * 8] & 0xf;
    *(undefined ***)(&DAT_ram_3007e00c + uVar1 * 0x70) = &PTR_FUN_ram_40036108_ram_40095ac4;
    FUN_ram_4000305c(&DAT_ram_3007e010 + uVar1 * 0x70,auStack_58,0x18);
    uVar8 = puVar7[2];
    iVar2 = 0x800;
    if (1499999 < uVar8) {
      iVar2 = 0x4000;
    }
    uVar3 = (&DAT_ram_40095ad8)[iVar6 * 8];
    iVar5 = uVar1 * 0x70;
    *(uint *)(&DAT_ram_3007e010 + iVar5) = uVar8;
    *(uint *)(&DAT_ram_3007e020 + iVar5) = uVar1;
    *(uint *)(&DAT_ram_3007e014 + iVar5) =
         (((uVar3 & 0x3ff) >> 8) - 1 & 3) << 4 | (uVar3 & 0xff) >> 4 | ((uVar3 & 0xfff) >> 10) << 6
         | iVar2 << 10 | *(uint *)(&DAT_ram_3007e014 + iVar5) & 0xfc000300;
    uVar4 = puVar7[4];
    iVar2 = puVar7[1];
    *(int *)(&DAT_ram_3007e018 + iVar5) = iVar2;
    (&DAT_ram_3007e01c)[iVar5] = (&DAT_ram_3007e01c)[iVar5] & 0xf0 | (byte)uVar4 & 0xf;
    *(undefined4 *)(&DAT_ram_3007e024 + iVar5) = puVar7[3];
    FUN_ram_400360ca(uVar8,uVar1);
    FUN_ram_400369fe(uVar1 + 0x25);
    FUN_ram_400379b8(uVar1 + 0x1c);
    FUN_ram_4003f052(10000);
    FUN_ram_400379f8(uVar1 + 0x1c);
    uVar4 = FUN_ram_4003d606(uVar1,&DAT_ram_400356c0,FUN_ram_40035bda);
    *(undefined4 *)(uVar1 * 4 + 0x3007e600) = uVar4;
    if (1499999 < uVar8) {
      *(byte *)(uVar1 * 4 + 0x20801133) =
           (byte)(7 << (8 - ((_DAT_ram_20800004 & 0x1ffffff) >> 0x15) & 0x1f)) |
           *(byte *)(uVar1 * 4 + 0x20801133) & 0x1f;
    }
    iVar5 = uVar1 * 0x70;
    FUN_ram_4004139c(iVar5 + 0x3007dfc0,puVar7[5],iVar2,uVar4);
    if (iVar2 == 0xb03) {
      FUN_ram_4003d7f0(*(undefined4 *)(&DAT_ram_3007e008 + iVar5));
      FUN_ram_4003d9e2(*(undefined4 *)(&DAT_ram_3007e008 + iVar5),FUN_ram_4003592c,0);
      FUN_ram_4003d666(*(undefined4 *)(&DAT_ram_3007e008 + iVar5),1,1);
      *(undefined4 *)(uVar1 * 4 + 0x3007e520) = 0x800;
      uVar4 = FUN_ram_400056f4(0x800,0x20);
      iVar5 = uVar1 * 0x10;
      *(undefined4 *)(iVar5 + 0x3007df44) = uVar4;
      uVar4 = FUN_ram_400056f4(0x800,0x20);
      *(undefined4 *)(iVar5 + 0x3007df40) = uVar4;
      iVar2 = FUN_ram_400047e8(s_uart_tx0_ram_300472c4 + uVar1 * 9,0,0);
      *(int *)(iVar5 + 0x3007df4c) = iVar2;
      if (iVar2 == 0) {
        return 0xffffffff;
      }
    }
    FUN_ram_40035f92(iVar6,uVar1);
    puVar7 = puVar7 + 8;
    if (iVar6 != 0) break;
    iVar6 = 1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40036632.
 * REA evidence: ev_2f5fc9bd8d4b9328c077e0a77b0acecc7670fe4d22d8c51bd32e724dc4c52dd8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036632(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_400369fe(0xf);
  if (((iVar2 == 0) && (iVar2 = FUN_ram_400379b8(0x18), iVar2 == 0)) &&
     (iVar2 = FUN_ram_400379f8(0x18), iVar2 == 0)) {
    FUN_ram_4003db56(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff6;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40036698.
 * REA evidence: ev_60c1aeff9672e46b292ed8c6f2028b10d2a03aec577b415e9fab6c8d003d626d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036698(int param_1,uint param_2)

{
  if (3 < param_2) {
    param_2 = 3;
  }
  *(uint *)(param_1 + 0x54) = param_2;
  FUN_ram_4003daf8(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
  FUN_ram_4003dad2(0);
  return 0;
}


/* NanoCore 1.10, address 0x400366be.
 * REA evidence: ev_af5af3399936d45ce081d99c712340ad07d08dc6af56459b2076c572d66282ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400366be(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x5c) <= param_2) {
    param_2 = *(uint *)(param_1 + 0x5c) - 1;
  }
  *(uint *)(param_1 + 0x58) = param_2;
  FUN_ram_4003db16(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
  FUN_ram_4003dad2(0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) {
    FUN_ram_4003dc38(1);
  }
  return 0;
}


/* NanoCore 1.10, address 0x400366fa.
 * REA evidence: ev_ba94cf4bba562f2b434ae0a789590095733b7866770d11a835db96bd84feb094
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400366fa(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  iVar1 = FUN_ram_4003dc46();
  if (iVar1 != 0) {
    if (*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 0x58)) {
      FUN_ram_400366be(param_1);
    }
  }
  FUN_ram_4003db36(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
  FUN_ram_4003dad2(0);
  return 0;
}


/* NanoCore 1.10, address 0x40036734.
 * REA evidence: ev_119373353a97f5f4b7a47e878e7f5357d16e1c42acc7aac6b697d14ac03128c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40036734(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003db92();
  if (iVar1 == 0) {
    FUN_ram_4003dc10(1,_DAT_ram_3007e6e0);
  }
  else {
    FUN_ram_4003dad2(_DAT_ram_3007e6d4);
    FUN_ram_4003dc54();
  }
  return 0;
}


/* NanoCore 1.10, address 0x40036830.
 * REA evidence: ev_83966638e9ffcf51ec14347be9272c4bc1a4533bb3b37d3330a4fd81eb5e6794
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036830(void)

{
  FUN_ram_4003dd36();
  FUN_ram_4003dd94();
  FUN_ram_4003de26();
  return 0;
}


/* NanoCore 1.10, address 0x40036848.
 * REA evidence: ev_98f9989ca7162eaaad7a26946a21b4840f51ad0bd9e24d0b327ba5e7558c9ba6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003687c) */
/* WARNING: Removing unreachable block (ram,0x40036890) */
/* WARNING: Removing unreachable block (ram,0x40036894) */
/* WARNING: Removing unreachable block (ram,0x400368ac) */
/* WARNING: Removing unreachable block (ram,0x400368b0) */
/* WARNING: Removing unreachable block (ram,0x400368b4) */
/* WARNING: Removing unreachable block (ram,0x40036896) */
/* WARNING: Removing unreachable block (ram,0x40036898) */
/* WARNING: Removing unreachable block (ram,0x400368a0) */

void FUN_ram_40036848(void)

{
  fence();
  do {
    fence();
  } while( true );
}


/* NanoCore 1.10, address 0x400368b6.
 * REA evidence: ev_e60487c5558d1445494105ccc8cb4cd426aa17b8ded802171a8f10ed928a210b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400368fc) */

int FUN_ram_400368b6(float param_1,ushort *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_4003d154();
  if (iVar1 == 0) {
    iVar1 = (int)(param_1 * DAT_ram_40095b50);
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


/* NanoCore 1.10, address 0x40036912.
 * REA evidence: ev_c0959cee9eb23603e01bd70178d3c21c6776d731ec90289189bd07ceef205c97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40036912(void)

{
  fence();
  fence();
  _DAT_ram_19250004 = _DAT_ram_19250004 | 0xff02;
  return;
}


/* NanoCore 1.10, address 0x4003692e.
 * REA evidence: ev_765cf3401b5e90336cbeac8c3393a752b9d7cccc6b912de44c0c5e58d0145db5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003692e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40036b5c(0x3d,48000000);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_400369a4(0x3d), iVar1 < 0)) {
    iVar1 = -1;
  }
  else {
    FUN_ram_40036912();
    _DAT_ram_3007e6e8 = FUN_ram_40036848();
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40036970.
 * REA evidence: ev_00c96d31860995c7e2f20c3172df6409e706429d641e25822440bd2d183dc5d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40036970(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_ram_3007e6ec == 0) {
    iVar2 = FUN_ram_4003692e();
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      _DAT_ram_3007e6ec = 1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400369a4.
 * REA evidence: ev_4a0f43766c5273803ab39d5c6c847ca60e41cb461a91a7f7e9d652e0a7edecc8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400369a4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x20), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x400369c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x400369c8.
 * REA evidence: ev_3d293725b43cc95f7d548511c4df11f5dee0ce23bc058df972918173f99bca64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400369c8(int param_1)

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


/* NanoCore 1.10, address 0x400369fe.
 * REA evidence: ev_619d4341d393cb4e236be67faa8e2385f7adb3bc0d77acc91ccd5c226f92fd12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400369fe(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (puVar3 = (undefined4 *)*piVar1, puVar3 != (undefined4 *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar3, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40036a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40036a22.
 * REA evidence: ev_2e5560929b9da1803f67eb34ca74d7b732d8b1bc46b097f27737e154b0b1af46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036a22(int param_1)

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


/* NanoCore 1.10, address 0x40036a58.
 * REA evidence: ev_c7cd42358b1b9ff55b3f7b9da1cf20a2a92e0d8744f986603cf0eaabd3fefbb1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036a58(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40036a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40036a7c.
 * REA evidence: ev_fdb64d5016e9968be9c815dd27a4a2b544015279309267298ef25fbacf936477
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036a7c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x10), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40036a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40036aa0.
 * REA evidence: ev_63f49a424e2a0b4e3909041af0a9b88fd9c6b7ac36746e201a6ba46cb58ae5cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036aa0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40036abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40036ac4.
 * REA evidence: ev_e08374c53182f04dd3dfe2d6ef52cbaccac7a967fe47e711626e7fb460ff545b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036ac4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x1c), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40036ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40036ae8.
 * REA evidence: ev_a7ed8c0a28e0deb99786fbd2e4fcacf63a319129e77e575b6d81c72d804bd206
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036ae8(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  
  while (((param_1 - 1U < 0x4b &&
          (piVar2 = *(int **)(gp + -0x16c + param_1 * 4), piVar2 != (int *)0x0)) && (*piVar2 != 0)))
  {
    UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40036b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(piVar2);
      return uVar1;
    }
    param_1 = FUN_ram_40036ac4();
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40036b2c.
 * REA evidence: ev_9bc9e7fb1d8bca9a2cf8d59d72d5cd61af7ee215a1fa4ecabd6ee9d18833b2f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036b2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 - 1U < 0x4b) {
    iVar1 = FUN_ram_40036ac4();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_ram_40036b2c(iVar1,0);
    }
    uVar2 = FUN_ram_40036a7c(param_1,uVar2);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40036b5c.
 * REA evidence: ev_915b17d9ea2f243c619d2120b0bf0576c0cc06099c9b60d389cd9d7da1efce52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036b5c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (0x4a < param_1 - 1U) {
    return 0;
  }
  FUN_ram_40036ac4();
  uVar1 = FUN_ram_40036b2c();
  iVar2 = FUN_ram_40036a7c(param_1,uVar1);
  if (iVar2 != param_2) {
    uVar1 = FUN_ram_40036a58(param_1,param_2,uVar1);
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40036bac.
 * REA evidence: ev_3e2951bd74abcc03260411f5a9bab0c4dd73a2ee01c25580f0b9fb89a234dbb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036bac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (0x4a < param_1 - 1U) {
    return 0;
  }
  iVar1 = FUN_ram_40036ac4();
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40036ae8();
    if (iVar2 == 0) {
      FUN_ram_40036bac(iVar1);
    }
    uVar3 = FUN_ram_400369fe(param_1);
    return uVar3;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40036bf2.
 * REA evidence: ev_1faecb9357883123c47fe88d29957f53127dde66011059016e990a6c01204886
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036bf2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (0x4a < param_1 - 1U) {
    return 0;
  }
  iVar1 = FUN_ram_40036ac4();
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40036ae8();
    if (iVar2 == 0) {
      FUN_ram_40036bac(iVar1);
    }
    iVar1 = FUN_ram_400369a4(param_1);
    if (iVar1 != 0) {
      uVar3 = FUN_ram_400369fe(param_1);
      return uVar3;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x40036c42.
 * REA evidence: ev_32e95fff83953565ef72753142140f10c0d6e94a9238dea47bcfd2921169048b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40036c42(char *param_1)

{
  int iVar1;
  char *__s2;
  int iVar2;
  
  iVar1 = 1;
  while (((iVar2 = *(int *)(gp + -0x16c + iVar1 * 4), iVar2 == 0 ||
          (__s2 = *(char **)(iVar2 + 4), __s2 == (char *)0x0)) ||
         (iVar2 = strcmp(param_1,__s2), iVar2 != 0))) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x4c) {
      return -0x16;
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40036ca6.
 * REA evidence: ev_5cdb8bba846013b1d2274e6ec38550ec96489ecc74fded6cdeffc28d728e9df7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036ca6(int param_1,undefined4 param_2,int param_3)

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
  uVar4 = FUN_ram_40003bac((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_2,0);
  uVar3 = (uint)uVar4;
  fence();
  if (((int)((ulonglong)uVar4 >> 0x20) != 0) || (0x1ff < uVar3)) {
    uVar3 = 0x1ff;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x18020000) = uVar3 << 0x14 | uVar2 | 0xc0060000;
  return;
}


/* NanoCore 1.10, address 0x40036e44.
 * REA evidence: ev_9b5bfbce7e8c2d888f49d484d90a424a14c5155dc79b6cfae30adfb5d0d37d14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40036e44(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x14);
  uVar2 = *param_3;
  uVar3 = FUN_ram_40036c42(s_pll_fra2_ram_40095b7c);
  if (bVar1 == uVar3) {
    uVar4 = 0x5e69ec00;
    uVar3 = 360000000;
  }
  else {
    uVar4 = 1560000000;
    uVar3 = 768000000;
  }
  uVar6 = 0;
  if (param_2 < uVar3) {
    if (param_2 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = ((param_2 - 1) + uVar3) / param_2;
    }
    uVar6 = uVar6 - 1;
    if (3 < uVar6) {
      uVar6 = 3;
    }
  }
  uVar6 = uVar6 + 1;
  uVar3 = uVar6 * param_2;
  if (uVar4 < uVar6 * param_2) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3;
  if (uVar2 != 0) {
    uVar4 = uVar3 % uVar2;
  }
  if (uVar4 != 0) {
    uVar5 = uVar2 >> 1;
    uVar4 = uVar3;
    if (uVar5 != 0) {
      uVar4 = uVar3 % uVar5;
    }
    if (uVar4 != 0) {
      if (uVar2 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = uVar3 / uVar2;
      }
      if (uVar6 == 0) {
        param_2 = 0xffffffff;
      }
      else {
        param_2 = (uVar3 * uVar5 * 2) / uVar6;
      }
    }
  }
  return param_2;
}


/* NanoCore 1.10, address 0x40036f38.
 * REA evidence: ev_e6d62b205869cf235bd550f4baae1394b1a155c8f2b8fdd6e37c47018fd88ec7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036f38(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  uVar11 = *(byte *)(param_1 + 0x17) & 0x20;
  if ((*(byte *)(param_1 + 0x17) & 0x20) == 0) {
    bVar1 = *(byte *)(param_1 + 0x14);
    uVar4 = FUN_ram_40036c42(s_pll_fra2_ram_40095b7c);
    if (bVar1 == uVar4) {
      uVar6 = 0x5e69ec00;
      uVar4 = 360000000;
    }
    else {
      uVar6 = 1560000000;
      uVar4 = 768000000;
    }
    puVar7 = (uint *)(*(int *)(param_1 + 8) + 0x18020000);
    if (param_2 == 24000000) {
      fence();
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) = *puVar7 & 0xffefffff;
    }
    else {
      fence();
      fence();
      puVar9 = (uint *)(*(int *)(param_1 + 8) + 0x18020000);
      *puVar9 = *puVar7 & 0xffefffff;
      uVar8 = 0;
      if (param_2 < uVar4) {
        if (param_2 == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = ((param_2 - 1) + uVar4) / param_2;
        }
        uVar8 = uVar8 - 1;
        if ((uVar8 == 2) || (uVar11 = (uint)(uVar8 != 0), 3 < uVar8)) {
          uVar8 = 3;
          uVar11 = 1;
        }
      }
      uVar10 = uVar8 + 1;
      uVar4 = param_2 * uVar10;
      if (uVar6 < param_2 * uVar10) {
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
      if (param_3 != 0) {
        uVar6 = uVar4 % param_3;
      }
      uVar5 = (uVar6 != 0) + 1;
      if (param_3 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uVar4 * uVar5) / param_3;
      }
      fence();
      uVar11 = *puVar9 & 0xffff0000 | uVar8 << 4 | uVar11 << 0x13 | (uint)(uVar6 != 0) |
               (uVar4 - 1) * 0x100;
      if (*(char *)(param_1 + 0x15) == '\x02') {
        uVar11 = uVar11 & 0xe0ffffff;
      }
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) = uVar11;
      if (*(char *)(param_1 + 0x15) == '\x01') {
        uVar11 = 0;
        if (uVar10 == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (param_3 * uVar4) / uVar10;
        }
        if (uVar5 == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = uVar4 / uVar5;
        }
        if (uVar4 != 0) {
          param_2 = param_2 % uVar4;
        }
        if (param_2 != 0) {
          uVar2 = ((ulonglong)uVar5 * (ulonglong)uVar10 & 0xffffffff) * (ulonglong)param_2;
          lVar3 = (uVar2 & 0xffffffff) * 0x1ffff;
          uVar11 = FUN_ram_40003bac((int)lVar3,
                                    (int)((ulonglong)lVar3 >> 0x20) +
                                    ((int)(uVar2 >> 0x20) +
                                    param_2 * (int)((ulonglong)uVar5 * (ulonglong)uVar10 >> 0x20)) *
                                    0x1ffff,param_3,0);
        }
        fence();
        *(uint *)(*(int *)(param_1 + 0xc) + 0x18020000) = (uint)(param_2 != 0) << 0x14 | uVar11;
        fence();
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18020000) = 0xc0000000;
      }
      else if (*(char *)(param_1 + 0x15) == '\x02') {
        FUN_ram_40036ca6(param_1,param_3);
      }
      fence();
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) =
           *(uint *)(*(int *)(param_1 + 8) + 0x18020000) | 0x50000;
      FUN_ram_4003f052(200);
      fence();
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) =
           *(uint *)(*(int *)(param_1 + 8) + 0x18020000) & 0xffefffff | 0x100000;
    }
  }
  return 0;
}


