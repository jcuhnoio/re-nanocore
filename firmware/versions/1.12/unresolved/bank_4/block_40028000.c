/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40028000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40028c64.
 * REA evidence: ev_86e41ca3be4a95d2cc1b72aa6f43979ec95729a753f08633f5c5f429fc7ede40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40028c64(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((0 < param_3) && (param_4 != 0)) {
    if (param_2 == 0) {
      return param_1;
    }
    if ((param_1 < 0) || (param_3 <= param_1)) {
      param_1 = 0;
    }
    iVar1 = 0;
    do {
      param_1 = param_1 + param_2;
      if (param_1 < 0) {
        param_1 = param_3 + -1;
      }
      else if (param_3 <= param_1) {
        param_1 = 0;
      }
      if (*(char *)(param_4 + param_1) != '\0') {
        return param_1;
      }
      iVar1 = iVar1 + 1;
    } while (param_3 != iVar1);
  }
  return -1;
}


/* NanoCore 1.12, address 0x40028c9a.
 * REA evidence: ev_ff3e46ce1ca180cea81d1eef5c95b19701a4f145ce94f92c03fc4a86687c0af3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40028c9a(int param_1,uint param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_5 != (int *)0x0) {
    if (param_2 == 0) {
      return 0;
    }
    if ((0 < param_3) && (param_4 != 0)) {
      uVar4 = 1;
      if ((int)param_2 < 1) {
        uVar4 = 0xffffffff;
      }
      iVar2 = ((int)param_2 >> 0x1f ^ param_2) - ((int)param_2 >> 0x1f);
      iVar1 = 0;
      while ((iVar2 = iVar2 + -1, iVar2 != -1 &&
             (iVar3 = FUN_ram_40028c64(param_1,uVar4), -1 < iVar3))) {
        iVar1 = 1;
        param_1 = iVar3;
      }
      if (iVar1 == 0) {
        return 0;
      }
      *param_5 = param_1;
      return iVar1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40028d0e.
 * REA evidence: ev_ca889377266fea0728304b7cab618f0acd8927b060695e634c395b0c890ff3d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028d0e(undefined2 *param_1)

{
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = 0x6400;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40028d24.
 * REA evidence: ev_42d9dec44e1ed976b98117e5cd294cca6946e9e5bf1af146d65606305d69d8d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028d24(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  iVar1 = FUN_ram_40004346();
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = FUN_ram_400043ae(300);
  if (*param_1 != '\0') {
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    if ((iVar1 - iVar4) - iVar2 < 0) goto LAB_ram_40028d62;
  }
  *(int *)(param_1 + 4) = iVar1;
LAB_ram_40028d62:
  *param_1 = '\x01';
  cVar3 = '\0';
  if ((-1 < param_2) && (cVar3 = 'd', param_2 < 0x65)) {
    cVar3 = (char)param_2;
  }
  param_1[1] = cVar3;
  iVar2 = FUN_ram_400043ae(700);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 8) = iVar2 + iVar1;
  return;
}


/* NanoCore 1.12, address 0x40028da2.
 * REA evidence: ev_03bc35cbac38c30759f7c5a7db9363fc111157cb01a0ad81ad4a1be739af0c0c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028da2(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40028daa.
 * REA evidence: ev_d1e8641f03f3d3ec56110b52916649518e54165a1b0995278120b97509de455d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028daa(char *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  char cVar6;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar2 = FUN_ram_40004346();
    uVar3 = FUN_ram_400043ae(300);
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    iVar5 = iVar2 - *(int *)(param_1 + 8);
    if ((int)(iVar5 - uVar3) < 0) {
      cVar6 = param_1[1];
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 4);
        uVar3 = FUN_ram_400043ae(300);
        iVar2 = iVar2 - iVar5;
        if (iVar2 < 1) {
          bVar1 = 0;
        }
        else {
          if (uVar3 == 0) {
            uVar3 = 1;
          }
          if (-1 < (int)(iVar2 - uVar3)) goto LAB_ram_40028e5c;
          if (uVar3 == 0) {
            bVar1 = 0xff;
          }
          else {
            bVar1 = (byte)((uint)(iVar2 * 0xff) / uVar3);
          }
        }
      }
      else if (iVar5 == 0) {
LAB_ram_40028e5c:
        bVar1 = 0xff;
      }
      else {
        if (uVar3 == 0) {
          bVar1 = 0xff;
        }
        else {
          bVar1 = (byte)((uint)(iVar5 * 0xff) / uVar3);
        }
        bVar1 = ~bVar1;
      }
      uVar4 = 1;
      goto LAB_ram_40028e3c;
    }
    *param_1 = '\0';
  }
  bVar1 = 0;
  cVar6 = 'd';
  uVar4 = 0;
LAB_ram_40028e3c:
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = uVar4;
    param_2[1] = cVar6;
    param_2[2] = bVar1;
  }
  return;
}


/* NanoCore 1.12, address 0x40028e62.
 * REA evidence: ev_db61f708623328c64fd7cfce1d14dac180aa3a6beaf0f0416e4154d73937acfb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028e62(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = param_1 & 0xff;
    if (100 < param_1) {
      uVar1 = 100;
    }
    FUN_ram_40005520(param_2,param_3,&DAT_ram_4009bd98,uVar1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40028e8a.
 * REA evidence: ev_0221aced1ed7e6c17e9a505e3289f3de6a6beb4c4f059d90e3edc16cefae13db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40028e96) */

uint FUN_ram_40028e8a(int param_1,int param_2)

{
  return (param_1 * param_2 + 0x7fU) / 0xff & 0xff;
}


/* NanoCore 1.12, address 0x40028ea0.
 * REA evidence: ev_83234abdd62a377159d85dd64ac3a9bd51ac5660882111ab38492d49983546b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028ea0(int param_1)

{
  if ((*(char *)(param_1 + 9) != '\0') && (DAT_ram_3006c72a != '\0')) {
    DAT_ram_3006c72a = DAT_ram_3006c72a + -1;
  }
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* NanoCore 1.12, address 0x40028ed4.
 * REA evidence: ev_bfabb05fc8412c9170436c4227809b8bfac3082338351ed8c7433014c63204f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028ed4(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,
                     uint param_6)

{
  thunk_FUN_ram_4002f03a
            (param_1,param_3 << 7 | param_4,(param_5 & 0x7f) << 7 | param_6 & 0x7f,param_2 == 1);
  return;
}


/* NanoCore 1.12, address 0x40028efe.
 * REA evidence: ev_a066bcd652879f0703a455bea6491d7d3dcbed6d53a235f1322b7c341a0a1d00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028efe(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0x10) {
    iVar1 = (uint)(param_1 == 1) * 0x180 + param_2 * 0x18;
    if (((*(char *)(iVar1 + 0x3006c429) != '\0') && (*(char *)(iVar1 + 0x3006c424) != '\0')) &&
       (*(char *)(iVar1 + 0x3006c425) != '\0')) {
      FUN_ram_40028ed4(param_2 + 1U & 0xff,*(undefined4 *)(iVar1 + 0x3006c42c),
                       *(undefined1 *)(iVar1 + 0x3006c420),*(undefined1 *)(iVar1 + 0x3006c421),
                       *(undefined1 *)(iVar1 + 0x3006c428),0);
    }
    FUN_ram_40028ea0(iVar1 + 0x3006c420);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40028f68.
 * REA evidence: ev_8daff26a724caeb8a12f3590d4937b5d0254c1af6c70b6d812fe23915b247040
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028f68(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    FUN_ram_40028efe(param_1,cVar1);
    cVar1 = cVar2;
  } while (cVar2 != '\x10');
  return;
}


/* NanoCore 1.12, address 0x40028f92.
 * REA evidence: ev_849f1bcefa5f098e63c10c70e1c0345192e00580fb1f1d8099a16fdae006f6d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028f92(void)

{
  DAT_ram_3006c72d = 0;
  FUN_ram_40004f92(0x3006c738,0,2);
  return;
}


/* NanoCore 1.12, address 0x40028faa.
 * REA evidence: ev_8bae7d35914d5db9c80c9a85bcee322aacf0adb7784ffb36708fdc979661318e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40028faa(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x40028fae.
 * REA evidence: ev_0ee5cc7eeba436872d23105e1e7a3c467ad0f80e5541aadb1f96c8a91c10dc42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40028fae(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40028faa();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0x78;
  }
  return uVar2;
}


