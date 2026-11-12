/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40014000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4001425e.
 * REA evidence: ev_ed781e474e20a886832ed444a77d1e69d4cd46d4ca99dc0cacea259c27db6477
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001425e(void)

{
  int iVar1;
  undefined1 auStack_20 [12];
  uint uStack_14;
  
  iVar1 = FUN_ram_4002b820(auStack_20);
  if (((iVar1 == 0) && (iVar1 = FUN_ram_4002b634(auStack_20), iVar1 == 0)) ||
     ((uStack_14 & 0xff000000) != 0x1000000)) {
    uStack_14 = 0xe39a5f;
  }
  else {
    uStack_14 = uStack_14 & 0xffffff;
  }
  return uStack_14;
}


/* NanoCore 1.10, address 0x40014298.
 * REA evidence: ev_908b5f71610412b788d7d628951623b3c13c7482f5d59b061613245e9443acdf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40032142(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  char acStack_8 [8];
  
  acStack_8[0] = '\0';
  acStack_8[1] = '\0';
  acStack_8[2] = '\0';
  acStack_8[3] = '\0';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0x12);
    do {
      uVar2 = (uint)*pbVar1;
      if ((uVar2 < 8) && (acStack_8[uVar2] == '\0')) {
LAB_ram_40032168:
        acStack_8[uVar2] = '\x01';
      }
      else {
        uVar2 = 0;
        do {
          if (acStack_8[uVar2] == '\0') {
            *pbVar1 = (byte)uVar2;
            goto LAB_ram_40032168;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
      }
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != (byte *)(param_1 + 0x1a));
  }
  return;
}


/* NanoCore 1.10, address 0x4001429c.
 * REA evidence: ev_5afb1ace11f78936643c9c0636443698803e79876569b93dee6484beec07e447
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001429c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40031348();
  uVar1 = 0xffffffff;
  if (iVar2 == 0) {
    FUN_ram_4002d97c();
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400142ba.
 * REA evidence: ev_a47d115bc93334ae8453df980968012dff16e2a2d78f197c18c222f4012466cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400142ba(void)

{
  FUN_ram_4000d9d8();
  return 0;
}


/* NanoCore 1.10, address 0x400142ca.
 * REA evidence: ev_f40d63858cf77f340d531ab1df6fd90345cbcc0fc2948ad33b3c3a5a4b4381a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400142ca(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40024ec6();
  if (iVar1 == 0xff) {
    uVar3 = 5;
  }
  else {
    uVar2 = FUN_ram_4001dffa(param_1);
    uVar3 = FUN_ram_4002653e(iVar1,uVar2,1);
    if (0xc < uVar3) {
      uVar3 = 0xc;
    }
    uVar3 = uVar3 & 0xff;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4001430e.
 * REA evidence: ev_dffcc8d4a1f818e00e7fd1aaf1add5c87af082f90b53cf1b98bc632c87e66c56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001430e(undefined4 param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  uint local_70 [15];
  
  if ((6 < *param_2) &&
     (iVar3 = FUN_ram_40031cec(*(undefined1 *)((int)param_2 + 0x33f)), iVar3 != 0)) {
    FUN_ram_40031d08(param_2);
  }
  iVar3 = FUN_ram_4002dd2a(0x30068284,param_2,&DAT_ram_40092f44);
  if (iVar3 == 0) {
    FUN_ram_400178c0(param_2 + 9,8);
    puVar6 = param_2 + 0xe;
    uVar2 = 0;
    do {
      uVar4 = FUN_ram_40024ea8(uVar2);
      uVar9 = (uint)*(byte *)((int)puVar6 + 1);
      uVar1 = puVar6[1];
      iVar3 = FUN_ram_40031cd8((char)*puVar6);
      uVar7 = uVar2 & 0xff;
      if ((char)*puVar6 == '\0') {
        uVar5 = 0;
        if ((uVar2 != 0) && (uVar7 != 5)) {
          if (uVar7 == 6) {
            uVar9 = 6;
            bVar10 = false;
            goto LAB_ram_400143d0;
          }
          bVar10 = false;
          if (uVar7 != 7) goto LAB_ram_400143ea;
          uVar5 = 2;
        }
        bVar10 = false;
        uVar9 = uVar5;
LAB_ram_400143b8:
        if (uVar2 == 4) {
          uVar9 = FUN_ram_4005fbb6(uVar9);
        }
        else {
LAB_ram_400143d8:
          if (uVar7 == 7) {
            uVar9 = FUN_ram_400646f6(uVar9);
          }
        }
      }
      else {
        bVar10 = (char)uVar1 != '\0';
        if (uVar2 == 6) {
LAB_ram_400143d0:
          uVar9 = FUN_ram_40031bbe(uVar9);
          goto LAB_ram_400143d8;
        }
LAB_ram_400143ea:
        if (uVar2 != 1) goto LAB_ram_400143b8;
        if (0xb < uVar9) {
          uVar9 = 0;
        }
      }
      FUN_ram_4001dea6(uVar4,bVar10);
      FUN_ram_4001eb16(uVar4,uVar9);
      uVar5 = FUN_ram_400142ca(uVar4);
      memset(local_70,0,0x30);
      if (iVar3 == 0) {
        FUN_ram_40031d26(uVar7,uVar9,local_70,0xc);
      }
      puVar8 = local_70;
      for (uVar9 = 0; ((uVar9 & 0xff) < uVar5 && (uVar9 != 0xc)); uVar9 = uVar9 + 1) {
        if (iVar3 == 0) {
          uVar11 = (ulonglong)*puVar8;
        }
        else {
          uVar11 = FUN_ram_40031de0(puVar6,iVar3);
        }
        FUN_ram_4001df1a(uVar11,uVar4,uVar9);
        puVar8 = puVar8 + 1;
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x32;
    } while (uVar2 != 8);
    FUN_ram_4001745a((char)param_2[0x19e]);
    FUN_ram_4001743e(param_1);
    FUN_ram_40017502(param_2 + 1);
    if ((param_3 == 0) || (iVar3 = FUN_ram_400313ae(param_1), iVar3 == 0)) {
      DAT_ram_30068280 = 0;
      DAT_ram_300685c8 = (char)param_1;
      DAT_ram_300685c9 = 1;
      return 0;
    }
    DAT_ram_300685c9 = 1;
    DAT_ram_300685c8 = (char)param_1;
  }
  DAT_ram_30068280 = 1;
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x400144e8.
 * REA evidence: ev_b52ef6bf964e4caec001a77f0d0ca959551d94afa9507118d9ba3312c3368df7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400144e8(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_350 [836];
  
  uVar1 = 0x3f;
  if (param_1 < 0x40) {
    uVar1 = param_1 & 0xff;
  }
  iVar2 = FUN_ram_4002da72(uVar1,auStack_350,thunk_FUN_ram_40032142);
  if (iVar2 == 0) {
    uVar3 = FUN_ram_4001430e(uVar1,auStack_350,param_2);
  }
  else {
    DAT_ram_30068280 = 1;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40014546.
 * REA evidence: ev_d76f97c4347d6302040d8277244d38f5fc0a65664ce330cfd2c9cc415eb7f140
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014546(int param_1)

{
  undefined1 *__s;
  undefined1 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  undefined4 local_48 [2];
  char acStack_40 [24];
  
  uStack_4c = 0;
  FUN_ram_40017584(acStack_40,0x10);
  pvVar2 = memset((void *)(param_1 + 2),0,0x10);
  if (acStack_40[0] != '\0') {
    FUN_ram_4000305c(pvVar2,acStack_40,0x10);
  }
  local_48[0] = 0x3020100;
  local_48[1] = 0x7060504;
  FUN_ram_40022cde(local_48,8,&uStack_4c);
  iVar6 = 0;
  do {
    *(undefined1 *)(param_1 + 0x12 + iVar6) = *(undefined1 *)((int)local_48 + iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 8);
  __s = (undefined1 *)(param_1 + 0x1c);
  iVar6 = 0;
  do {
    uVar3 = FUN_ram_40024ea8(iVar6);
    uVar1 = (&DAT_ram_40092f3c)[iVar6];
    uVar4 = FUN_ram_400142ca();
    memset(__s,0,100);
    *__s = uVar1;
    uVar1 = FUN_ram_4001dffa(uVar3);
    __s[1] = uVar1;
    uVar1 = FUN_ram_4001deba(uVar3);
    __s[2] = uVar1;
    __s[3] = (char)uVar4;
    uVar8 = 0;
    puVar7 = __s + -0x1c;
    while( true ) {
      if (uVar4 <= (uVar8 & 0xff)) break;
      puVar7[0x20] = (char)uVar8;
      uVar9 = FUN_ram_4001dfce(uVar3,uVar8);
      *(undefined4 *)(puVar7 + 0x24) = uVar9;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 8;
    }
    iVar6 = iVar6 + 1;
    __s = __s + 100;
  } while (iVar6 != 8);
  uVar1 = FUN_ram_400174b8();
  *(undefined1 *)(param_1 + 0x33c) = uVar1;
  iVar6 = thunk_FUN_ram_4001d424();
  iVar5 = thunk_FUN_ram_4001d442();
  uVar3 = FUN_ram_40031cf4(*(undefined1 *)(param_1 + 0x81));
  if (iVar6 < 0) {
    iVar6 = 0xff;
  }
  *(char *)(param_1 + 0x33d) = (char)iVar6;
  if (iVar5 < 0) {
    iVar5 = 0xff;
  }
  *(char *)(param_1 + 0x33e) = (char)iVar5;
  iVar6 = FUN_ram_40031cec(uVar3);
  if (iVar6 == 0) {
    uVar3 = 0xff;
  }
  *(char *)(param_1 + 0x33f) = (char)uVar3;
  return;
}


/* NanoCore 1.10, address 0x400146aa.
 * REA evidence: ev_f30859055df949a0235f79df20e3b5035bbc44c9f1f044cbb2cec4cdb16c060a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400146aa(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_350 [836];
  
  iVar1 = FUN_ram_4001429c();
  if (iVar1 == 0) {
    FUN_ram_4000305c(auStack_350,param_2,0x340);
    FUN_ram_40032142(auStack_350);
    uVar2 = param_1 & 0xff;
    if (0x3f < param_1) {
      uVar2 = 0x3f;
    }
    uVar3 = FUN_ram_4001430e(uVar2,auStack_350,param_3);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x400146f2.
 * REA evidence: ev_08e969e69d5715d751e82ed3c4681ee299b2fe4c1bbae4f0d5fb15eaa67d753a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400146f2(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4001429c();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_400144e8(param_1,1);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40014718.
 * REA evidence: ev_6ab8849f3d7ac2fedbd60b70f36a9c2fb05d0238a34b95d7d4ed7a80d7b9b98f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014718(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_11 [13];
  
  auStack_11[0] = 0;
  iVar1 = FUN_ram_4001429c();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_40031368(auStack_11);
    if (iVar1 == 1) {
      auStack_11[0] = 0;
    }
    else if (iVar1 != 0) goto LAB_ram_40014726;
    uVar2 = FUN_ram_400144e8(auStack_11[0],0);
  }
  else {
LAB_ram_40014726:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40014750.
 * REA evidence: ev_c724c4fd7510a7cd683a6ccee1cf999f932d85d42e60fd343388af9da3828337
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014750(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (undefined1 *)0x0) && (uVar1 = 0xffffffff, DAT_ram_300685c9 != '\0')) {
    *param_1 = DAT_ram_300685c8;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40014772.
 * REA evidence: ev_7b53352297a082e1fd74fb720089851285fe91645db5e24a580020d19da354e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40014772(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_62c [732];
  undefined1 auStack_350 [840];
  
  iVar2 = FUN_ram_4001429c();
  iVar1 = -1;
  if (iVar2 == 0) {
    FUN_ram_40014920(auStack_350);
    FUN_ram_40014546(auStack_350);
    FUN_ram_40031e50(auStack_350,auStack_62c);
    iVar1 = FUN_ram_4000cf6e(auStack_62c);
    if (iVar1 == 0) {
      FUN_ram_4002dcfe(0x30068284,auStack_350);
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400147c0.
 * REA evidence: ev_5a372a0b7163d91ed500ebac90d5daf826d59ca502ca6b1fa57bb2d51479bc19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400147c0(void)

{
  FUN_ram_4002dd22(0x30068284);
  return;
}


/* NanoCore 1.10, address 0x400147cc.
 * REA evidence: ev_cbba182675a6a858d52422f69219fd101a9fc4acc6a05c3f76f16a66a0c0ddf2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40014772(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_62c [732];
  undefined1 auStack_350 [840];
  
  iVar2 = FUN_ram_4001429c();
  iVar1 = -1;
  if (iVar2 == 0) {
    FUN_ram_40014920(auStack_350);
    FUN_ram_40014546(auStack_350);
    FUN_ram_40031e50(auStack_350,auStack_62c);
    iVar1 = FUN_ram_4000cf6e(auStack_62c);
    if (iVar1 == 0) {
      FUN_ram_4002dcfe(0x30068284,auStack_350);
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400147d0.
 * REA evidence: ev_31041268dd491ce3faa0bac007812442c58412b56b57030c69014447a4746612
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400147d0(undefined4 param_1)

{
  FUN_ram_40032192(param_1,7);
  return;
}


/* NanoCore 1.10, address 0x400147d6.
 * REA evidence: ev_747a2dc5f9b09d79a53dc87aa9d80d9dcbab23f626af3ea097f71ba1290c1fd5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400147d6(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_a94;
  undefined1 auStack_a90 [832];
  undefined1 auStack_750 [832];
  undefined1 auStack_410 [1024];
  
  iVar2 = FUN_ram_4001429c();
  if (iVar2 == 0) {
    if (DAT_ram_300685c9 == '\0') {
      return -1;
    }
    if (DAT_ram_30068280 != '\0') {
      return -1;
    }
    uVar1 = param_1 & 0xff;
    if (0x3f < param_1) {
      uVar1 = 0x3f;
    }
    FUN_ram_40014920();
    FUN_ram_40014546(auStack_a90);
    uStack_a94 = 0;
    FUN_ram_4000305c(auStack_750,auStack_a90,0x340);
    FUN_ram_400147d0(auStack_750);
    iVar2 = FUN_ram_40014964(auStack_750,auStack_410,0x400,&uStack_a94);
    if ((iVar2 == 0) && (iVar2 = FUN_ram_40031928(uVar1,auStack_410,uStack_a94), iVar2 == 0)) {
      iVar2 = FUN_ram_400313ae(uVar1);
      return -(uint)(iVar2 != 0);
    }
  }
  return -1;
}


/* NanoCore 1.10, address 0x400148a2.
 * REA evidence: ev_129ffeb2cb8ff838f1c0f77e0cf918a697a6488a4e441c356fdf740152e27f3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400148a2(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4008da54();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_400147d6(param_1);
    FUN_ram_4008db1a();
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x400148ca.
 * REA evidence: ev_0f8d37e72ad8de6ef224ccb5514565664a2c358539fc3ca73bec1d1a1d79af63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400148ca(undefined1 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                int *param_6)

{
  int iVar1;
  
  iVar1 = *param_6;
  if ((param_3 + 2U & 0xff) + iVar1 <= param_5) {
    *param_6 = iVar1 + 1;
    *(undefined1 *)(param_4 + iVar1) = param_1;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(char *)(param_4 + iVar1) = (char)param_3;
    FUN_ram_4000305c(*param_6 + param_4);
    *param_6 = *param_6 + param_3;
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40014920.
 * REA evidence: ev_f6d78dd70efb4627fb27591c70ef82aeb9ac970949d89e3b1d2a42c9111aae47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014920(void *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar1 = memset(param_1,0,0x340);
  puVar3 = puVar1 + 0xe;
  *puVar1 = 7;
  iVar2 = 0;
  do {
    *(char *)((int)puVar1 + iVar2 + 0x12) = (char)iVar2;
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x32;
  } while (iVar2 != 8);
  *(undefined4 *)(puVar1 + 0x19e) = 0xffffff64;
  return;
}


/* NanoCore 1.10, address 0x40014964.
 * REA evidence: ev_437de19d0c2a762b170d376fb8ee2d549174ed9e893090db0787518b1103b81b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014964(undefined2 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  char cVar6;
  undefined2 *puVar7;
  undefined2 auStack_8c [2];
  uint uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  char cStack_80;
  
  auStack_8c[0] = *param_1;
  uStack_88 = 0;
  iVar2 = FUN_ram_400148ca(1,auStack_8c,2,param_2,param_3,&uStack_88);
  if (((iVar2 == 0) &&
      (iVar2 = FUN_ram_400148ca(2,param_1 + 1,0x10,param_2,param_3,&uStack_88), iVar2 == 0)) &&
     (iVar2 = FUN_ram_400148ca(3,param_1 + 9,8,param_2,param_3,&uStack_88), iVar2 == 0)) {
    puVar5 = param_1 + 0x12;
    iVar2 = 0;
    do {
      uStack_83 = *(undefined1 *)(puVar5 + -4);
      cVar1 = *(char *)((int)puVar5 + -5);
      uStack_84 = (undefined1)iVar2;
      uStack_82 = *(undefined1 *)((int)puVar5 + -7);
      uStack_81 = *(undefined1 *)(puVar5 + -3);
      puVar3 = &uStack_84;
      puVar7 = puVar5;
      cStack_80 = cVar1;
      for (cVar6 = '\0'; cVar1 != cVar6; cVar6 = cVar6 + '\x01') {
        puVar3[5] = *(undefined1 *)(puVar7 + -2);
        FUN_ram_4000305c(puVar3 + 6,puVar7,4);
        puVar7 = puVar7 + 4;
        puVar3 = puVar3 + 5;
      }
      iVar4 = FUN_ram_400148ca(0x10,&uStack_84,(cVar1 + '\x01') * '\x05',param_2,param_3,&uStack_88)
      ;
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 0x32;
    } while (iVar2 != 8);
    iVar2 = FUN_ram_400148ca(0x22,param_1 + 0x19e,1,param_2,param_3,&uStack_88);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_ram_400148ca(0x20,(int)param_1 + 0x33d,1,param_2,param_3,&uStack_88),
        iVar2 == 0)) &&
       ((iVar2 = FUN_ram_400148ca(0x21,param_1 + 0x19f,1,param_2,param_3,&uStack_88), iVar2 == 0 &&
        ((iVar2 = FUN_ram_400148ca(0x24,(int)param_1 + 0x33f,1,param_2,param_3,&uStack_88),
         iVar2 == 0 && (uStack_88 < 0x401)))))) {
      *param_4 = uStack_88;
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40014af4.
 * REA evidence: ev_dfa644e64db2bdb918202337b517373ffe85718dd2448ea6b886eb647061de2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014af4(undefined2 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_ram_40014920();
  uVar9 = 0;
LAB_ram_40014b32:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = uVar9 + 2;
            if (param_3 < uVar4) {
              return 0;
            }
            uVar8 = (uint)*(byte *)(param_2 + uVar9 + 1);
            bVar7 = *(byte *)(param_2 + uVar9);
            uVar9 = uVar8 + uVar4;
            if (param_3 < uVar9) {
              return 0xffffffff;
            }
            iVar2 = param_2 + uVar4;
            if (bVar7 != 0x20) break;
            if (uVar8 == 1) {
              *(undefined1 *)((int)param_1 + 0x33d) = *(undefined1 *)(param_2 + uVar4);
            }
          }
          if (bVar7 < 0x21) break;
          if (bVar7 == 0x22) {
            if (uVar8 == 1) {
              bVar7 = *(byte *)(param_2 + uVar4);
              if (100 < bVar7) {
                bVar7 = 100;
              }
              *(byte *)(param_1 + 0x19e) = bVar7;
            }
          }
          else if (bVar7 == 0x24) {
            if (uVar8 == 1) {
              *(undefined1 *)((int)param_1 + 0x33f) = *(undefined1 *)(param_2 + uVar4);
            }
          }
          else if ((bVar7 == 0x21) && (uVar8 == 1)) {
            *(undefined1 *)(param_1 + 0x19f) = *(undefined1 *)(param_2 + uVar4);
          }
        }
        if (bVar7 == 3) goto LAB_ram_40014c80;
        if (bVar7 < 4) break;
        if (((bVar7 == 0x10) && (4 < uVar8)) &&
           (uVar4 = (uint)*(byte *)(param_2 + uVar4), uVar4 < 8)) {
          *(undefined1 *)(param_1 + uVar4 * 0x32 + 0xe) = *(undefined1 *)(iVar2 + 1);
          *(undefined1 *)((int)param_1 + uVar4 * 100 + 0x1d) = *(undefined1 *)(iVar2 + 2);
          *(undefined1 *)(param_1 + uVar4 * 0x32 + 0xf) = *(undefined1 *)(iVar2 + 3);
          uVar5 = (uint)*(byte *)(iVar2 + 4);
          if (0xc < uVar5) {
            uVar5 = 0xc;
          }
          iVar2 = iVar2 + 6;
          *(char *)((int)param_1 + uVar4 * 100 + 0x1f) = (char)uVar5;
          puVar6 = param_1 + uVar4 * 0x32 + 0x12;
          uVar4 = 0;
          while (((uVar4 & 0xff) < uVar5 && ((uVar4 + 2) * 5 <= uVar8))) {
            *(undefined1 *)(puVar6 + -2) = *(undefined1 *)(iVar2 + -1);
            iVar1 = FUN_ram_4000305c(puVar6,iVar2,4);
            puVar6 = (undefined2 *)(iVar1 + 8);
            iVar2 = iVar2 + 5;
            uVar4 = uVar4 + 1;
          }
        }
      }
      if (bVar7 != 1) break;
      if (uVar8 == 2) {
        *param_1 = CONCAT11(*(undefined1 *)(iVar2 + 1),*(undefined1 *)(param_2 + uVar4));
      }
    }
  } while ((bVar7 != 2) || (uVar8 != 0x10));
  uVar3 = 0x10;
  puVar6 = param_1 + 1;
  goto LAB_ram_40014b98;
LAB_ram_40014c80:
  if (uVar8 == 8) {
    uVar3 = 8;
    puVar6 = param_1 + 9;
LAB_ram_40014b98:
    FUN_ram_4000305c(puVar6,iVar2,uVar3);
  }
  goto LAB_ram_40014b32;
}


/* NanoCore 1.10, address 0x40014cc6.
 * REA evidence: ev_d0e1d033dd35efb795d4c7ca4d008ab04dda6772dcbd380cfd2839e7ac9b7f9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014cc6(void)

{
  _DAT_ram_300685d4 = _DAT_ram_300685d4 * 0x19660d + 0x3c6ef35f;
  return;
}


/* NanoCore 1.10, address 0x40014ce8.
 * REA evidence: ev_ee1f3d0c4288ff0c93558d9e34d54e4e2f5d372c5efb77b34a3aa189f151fff5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014ce8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = _DAT_ram_30068604;
  iVar1 = _DAT_ram_30068600;
  iVar4 = 0;
  do {
    uVar3 = *(uint *)(iVar2 + iVar4 * 4);
    *(ushort *)(iVar1 + iVar4 * 2) =
         (ushort)(((uVar3 & 0xffffff) >> 0x13) << 0xb) | (ushort)(((uVar3 & 0xffff) >> 10) << 5) |
         (ushort)((uVar3 << 0x18) >> 0x1b);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x12c00);
  return;
}


/* NanoCore 1.10, address 0x40014d22.
 * REA evidence: ev_d0188ccb36ef6e0fdd9011ac29e42b8dc22835b9a6e3470ee24d253c18131a1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014d22(uint param_1,uint param_2,undefined4 param_3)

{
  if ((param_1 < 0x140) && (param_2 < 0xf0)) {
    *(undefined4 *)(_DAT_ram_30068604 + (param_1 + param_2 * 0x140) * 4) = param_3;
  }
  return;
}


/* NanoCore 1.10, address 0x40014d48.
 * REA evidence: ev_262ddf9f3df6594d9524b0282e96c840f0b40f6f1832e0b238301cb2f2c09c93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40014e3e) */
/* WARNING: Removing unreachable block (ram,0x40014e34) */
/* WARNING: Removing unreachable block (ram,0x40014e46) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014d48(float param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = _DAT_ram_30068604;
  iVar8 = 0;
  do {
    *(undefined4 *)(iVar2 + iVar8 * 4) = 0xff101015;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x12c00);
  iVar2 = 0;
  do {
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      FUN_ram_40014d22(iVar2,iVar8,0xff1a1a25);
      iVar8 = iVar1;
    } while (iVar1 != 0xf0);
    iVar2 = iVar2 + 0x14;
  } while (iVar2 != 0x140);
  iVar2 = 0;
  do {
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      FUN_ram_40014d22(iVar8,iVar2,0xff1a1a25);
      iVar8 = iVar1;
    } while (iVar1 != 0x140);
    iVar2 = iVar2 + 0x14;
  } while (iVar2 != 0xf0);
  param_1 = param_1 * DAT_ram_40093090;
  iVar8 = (int)param_1 + -10;
  iVar2 = 0;
  do {
    FUN_ram_40014d22(iVar2,iVar8,0xff00ff00);
    iVar1 = iVar2 + 1;
    FUN_ram_40014d22(iVar2,(int)param_1 + -9,0xff00ff00);
    iVar2 = iVar1;
  } while (iVar1 != 0x140);
  iVar2 = 6;
  do {
    uVar3 = FUN_ram_40014cc6();
    uVar4 = FUN_ram_40014cc6();
    iVar1 = 0;
    uVar5 = FUN_ram_40014cc6();
    uVar6 = FUN_ram_40014cc6();
    do {
      iVar9 = 0;
      do {
        iVar7 = iVar9 + uVar3 % 0x140;
        iVar9 = iVar9 + 1;
        FUN_ram_40014d22(iVar7,(iVar8 - uVar4 % 0xf) + iVar1,0xff00ff00);
      } while (iVar9 <= (int)(uVar5 % 0x1e));
      iVar1 = iVar1 + 1;
    } while (iVar1 <= (int)(uVar6 & 3));
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* NanoCore 1.10, address 0x40014e9c.
 * REA evidence: ev_1ff0d15c44d0cd5050bd74019246fddd305f3b8619dc04831a6e7c2ef29ca599
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014e9c(void)

{
  if (_DAT_ram_300685dc != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_300685dc = 0;
  }
  if (_DAT_ram_300685e0 != 0) {
    FUN_ram_40047cf2();
    _DAT_ram_300685e0 = 0;
    _DAT_ram_300685e4 = 0;
  }
  if (_DAT_ram_30068600 != 0) {
    if (DAT_ram_30068608 == '\0') {
      FUN_ram_400056c4();
    }
    else {
      FUN_ram_4002c3f4();
    }
    _DAT_ram_30068600 = 0;
    DAT_ram_30068608 = '\0';
  }
  if (_DAT_ram_30068604 != 0) {
    if (DAT_ram_30068609 == '\0') {
      FUN_ram_400056c4();
    }
    else {
      FUN_ram_4002c3f4();
    }
    _DAT_ram_30068604 = 0;
    DAT_ram_30068609 = '\0';
  }
  return;
}


/* NanoCore 1.10, address 0x40014f5c.
 * REA evidence: ev_221cbbbc0f73ff615dfccbbdb22dba45c49d48b8a95f61fdc9a995bdede4a562
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400152b6) */
/* WARNING: Removing unreachable block (ram,0x400152cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014f5c(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  code *UNRECOVERED_JUMPTABLE;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_00000100;
  float fVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  
  if (((_DAT_ram_30068600 != 0) && (_DAT_ram_30068604 != 0)) && (_DAT_ram_300685e4 != 0)) {
    iVar15 = FUN_ram_400042fa();
    lVar5 = (ulonglong)(uint)(iVar15 - _DAT_ram_300685cc) * 1000;
    uVar16 = FUN_ram_40003bac((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),1000,0);
    fVar2 = DAT_ram_4009282c;
    iVar14 = _DAT_ram_30068604;
    if (uVar16 < 5000) {
      if (uVar16 < 1000) {
        fVar2 = (float)(int)uVar16 / DAT_ram_40093094;
        if (DAT_ram_4009281c < (float)(int)uVar16 / DAT_ram_40093094) {
          fVar2 = DAT_ram_4009281c;
        }
        _DAT_ram_300685d0 = iVar15;
        FUN_ram_40014d48(fVar2);
      }
      else {
        fVar34 = 0.0;
        fVar28 = (float)(int)(uVar16 - 1000) / DAT_ram_40093094;
        if (uVar16 - 1000 < 3000) {
          fVar34 = (float)(uint)(iVar15 - _DAT_ram_300685d0) / DAT_ram_40093094;
        }
        if (DAT_ram_4009282c < fVar28) {
          fVar28 = DAT_ram_4009282c;
        }
        iVar18 = 0;
        _DAT_ram_300685d0 = iVar15;
        do {
          *(undefined4 *)(iVar14 + iVar18 * 4) = 0xff0b1021;
          fVar33 = DAT_ram_400930b0;
          fVar8 = DAT_ram_400930a4;
          fVar3 = DAT_ram_400930a0;
          fVar32 = DAT_ram_4009309c;
          iVar18 = iVar18 + 1;
        } while (iVar18 != 0x12c00);
        fVar4 = fVar28 * DAT_ram_4009309c;
        iVar14 = 0;
        fVar11 = in_register_00000100;
        do {
          fVar31 = (float)iVar14;
          iVar15 = 0;
          fVar29 = (float)FUN_ram_40000a08(fVar31 * fVar3 + fVar28 * fVar2);
          fVar29 = fVar29 * fVar8 + DAT_ram_400930a8;
          fVar30 = (float)FUN_ram_40000a08((fVar31 * DAT_ram_400930ac - in_register_00000100) +
                                           (float)PTR_firmware_entry_ram_40092830);
          fVar30 = fVar30 * fVar33 + DAT_ram_400930b4;
          fVar31 = (float)FUN_ram_40000a08(fVar31 * DAT_ram_400930b8 + fVar4 + fVar32);
          fVar7 = DAT_ram_400930c4;
          fVar31 = fVar31 * DAT_ram_400930bc + DAT_ram_400930c0;
          fVar35 = DAT_ram_4009284c;
          do {
            fVar1 = (float)iVar15;
            if (fVar1 < fVar31) {
              if (fVar30 <= fVar1) {
                uVar25 = 0xffffffff;
                if (fVar30 + fVar35 <= fVar1) {
                  if (fVar30 + fVar7 <= fVar1) {
                    uVar25 = 0xff0059b3;
                  }
                  else {
                    uVar25 = 0xff0099cc;
                  }
                }
                goto LAB_ram_400151ce;
              }
              if (fVar29 <= fVar1) {
                uVar25 = 0xffffffff;
                if ((fVar29 + in_register_00000100 <= fVar1) &&
                   (uVar25 = 0xff004080, fVar1 < fVar29 + fVar7)) goto LAB_ram_4001521c;
                goto LAB_ram_400151ce;
              }
            }
            else {
              uVar25 = 0xffffffff;
              if (fVar31 + fVar35 <= fVar1) {
                if (fVar31 + fVar7 <= fVar1) {
LAB_ram_4001521c:
                  uVar25 = 0xff0073e6;
                }
                else {
                  uVar25 = 0xff4db8ff;
                }
              }
LAB_ram_400151ce:
              iVar18 = 0;
              do {
                iVar23 = 0;
                do {
                  FUN_ram_40014d22(iVar14 + iVar23,iVar15 + iVar18,uVar25);
                  iVar23 = iVar23 + 1;
                } while (iVar23 != 4);
                iVar18 = iVar18 + 1;
                fVar35 = DAT_ram_4009284c;
              } while (iVar18 != 4);
            }
            fVar10 = DAT_ram_400930cc;
            fVar9 = DAT_ram_400930c8;
            fVar1 = DAT_ram_40092864;
            iVar15 = iVar15 + 4;
          } while (iVar15 != 0xf0);
          iVar14 = iVar14 + 4;
        } while (iVar14 != 0x140);
        puVar13 = &DAT_ram_300685cc;
        do {
          fVar32 = -(fVar34 * (float)*(undefined8 *)(puVar13 + 0x48)) +
                   (float)*(undefined8 *)(puVar13 + 0x44);
          *(ulonglong *)(puVar13 + 0x44) = (ulonglong)(uint)fVar32;
          if (fVar32 < fVar9) {
            uVar16 = FUN_ram_40014cc6();
            *(ulonglong *)(puVar13 + 0x44) = (ulonglong)(uint)(float)(uVar16 % 0x32 + 0xf0);
            uVar16 = FUN_ram_40014cc6();
            *(ulonglong *)(puVar13 + 0x40) = (ulonglong)(uint)(float)(uVar16 % 0x140);
          }
          iVar14 = -3;
          fVar32 = (float)FUN_ram_40000a08(fVar28 * fVar2 + (float)*(undefined8 *)(puVar13 + 0x4c));
          uVar36 = *(undefined8 *)(puVar13 + 0x44);
          iVar15 = (int)(fVar32 * fVar10 + (float)*(undefined8 *)(puVar13 + 0x40));
          do {
            iVar18 = -3;
            do {
              if (iVar14 * iVar14 + iVar18 * iVar18 < 10) {
                FUN_ram_40014d22(iVar18 + iVar15,iVar14 + (int)(float)uVar36,0xffaaddff);
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 != 4);
            iVar14 = iVar14 + 1;
          } while (iVar14 != 1);
          iVar14 = -2;
          do {
            iVar18 = 1;
            do {
              if (((int)(fVar28 * fVar33) + iVar18 & 3U) == 0) {
                fVar32 = (float)FUN_ram_40000a08((float)iVar18 * fVar1 +
                                                 fVar28 * fVar10 +
                                                 (float)*(undefined8 *)(puVar13 + 0x4c));
                FUN_ram_40014d22((int)(fVar32 + fVar32) + iVar14 + iVar15,
                                 (int)(float)uVar36 + iVar18,0xff77bbff);
              }
              fVar29 = DAT_ram_400930d8;
              fVar31 = DAT_ram_400930d4;
              fVar32 = DAT_ram_400930d0;
              iVar18 = iVar18 + 1;
            } while (iVar18 != 8);
            iVar14 = iVar14 + 2;
          } while (iVar14 != 4);
          puVar13 = puVar13 + 0x10;
        } while (puVar13 != (undefined1 *)0x3006868c);
        iVar14 = 0;
        do {
          fVar34 = (float)iVar14;
          iVar15 = -1;
          fVar33 = (float)FUN_ram_40000a08((fVar34 / fVar32) * fVar31);
          fVar30 = (float)FUN_ram_40000a08(fVar34 * fVar29 - fVar28 * fVar8);
          fVar34 = (float)FUN_ram_40000786(fVar34 * fVar3 + fVar4);
          do {
            iVar18 = iVar15 + (int)(fVar33 * fVar30 * fVar34 * fVar11 + fVar11);
            FUN_ram_40014d22(iVar14,iVar18,0xff00ffcc);
            iVar15 = iVar15 + 1;
            FUN_ram_40014d22(iVar14 + 1,iVar18,0xff00ffcc);
            fVar7 = DAT_ram_4009287c;
          } while (iVar15 != 2);
          iVar14 = iVar14 + 2;
        } while (iVar14 != 0x140);
        if (DAT_ram_4009287c <= fVar28) {
          FUN_ram_40000a08((fVar28 - DAT_ram_4009287c) * fVar2);
        }
        else {
          FUN_ram_40000d54(DAT_ram_4009281c - fVar28 / DAT_ram_4009287c,fVar2);
        }
        fVar34 = DAT_ram_400930e8;
        fVar2 = DAT_ram_40092864;
        bVar6 = false;
        while( true ) {
          iVar15 = 0x16;
          iVar14 = 0;
          do {
            if (fVar7 <= fVar28) {
              FUN_ram_40000a08((fVar28 - fVar7) * fVar34 - (float)iVar14 * fVar2);
            }
            puVar12 = (&PTR_DAT_ram_40092f88_ram_4009310c)[(&DAT_ram_40093124)[iVar14]];
            iVar23 = iVar15 + 0xc;
            iVar18 = 0;
            do {
              iVar19 = 0;
              iVar17 = iVar23;
              do {
                if (puVar12[iVar19 + iVar18 * 6] == '#') {
                  iVar27 = iVar17;
                  if (!bVar6) {
                    iVar27 = iVar17 + 5;
                  }
                  iVar20 = 0;
                  do {
                    iVar22 = 0;
                    do {
                      FUN_ram_40014d22(iVar22 + iVar27);
                      iVar22 = iVar22 + 1;
                    } while (iVar22 != 5);
                    iVar20 = iVar20 + 1;
                  } while (iVar20 != 5);
                }
                iVar27 = _DAT_ram_30068604;
                iVar19 = iVar19 + 1;
                iVar17 = iVar17 + 5;
              } while (iVar19 != 6);
              iVar18 = iVar18 + 1;
              iVar23 = iVar23 + -2;
            } while (iVar18 != 7);
            iVar15 = iVar15 + 0x23;
            iVar14 = iVar14 + 1;
          } while (iVar15 != 0x12e);
          if (bVar6) break;
          bVar6 = true;
        }
        iVar14 = 0;
        uVar25 = 0xff111111;
        while( true ) {
          iVar15 = 0;
          do {
            *(undefined4 *)(iVar27 + iVar14 * 0x500 + iVar15 * 4) = uVar25;
            fVar34 = DAT_ram_40093098;
            fVar2 = DAT_ram_40092864;
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0x140);
          iVar14 = iVar14 + 1;
          if (iVar14 == 0xf) break;
          uVar25 = 0xff111111;
          if (iVar14 == 0xe) {
            uVar25 = 0xff333333;
          }
        }
        uVar25 = 0xffff0000;
        if (fVar28 <= DAT_ram_400930f0) {
          uVar25 = 0xff330000;
        }
        uVar26 = 0xffff0000;
        if (fVar28 <= DAT_ram_40092864) {
          uVar26 = 0xff330000;
        }
        iVar14 = 0;
        do {
          uVar24 = uVar26;
          if (((iVar14 != 0) && (uVar24 = uVar25, iVar14 != 1)) &&
             (uVar24 = 0xff00ff00, fVar28 < fVar34)) {
            uVar24 = 0xff330000;
          }
          iVar15 = -2;
          do {
            iVar18 = -2;
            do {
              if (iVar15 * iVar15 + iVar18 * iVar18 < 5) {
                FUN_ram_40014d22(iVar14 * 0xe + 0x113 + iVar18,iVar15 + 7,uVar24);
              }
              fVar32 = _DAT_ram_40093104;
              iVar23 = _DAT_ram_30068604;
              iVar18 = iVar18 + 1;
            } while (iVar18 != 3);
            iVar15 = iVar15 + 1;
          } while (iVar15 != 3);
          iVar14 = iVar14 + 1;
        } while (iVar14 != 3);
        if (DAT_ram_400930f4 <= fVar28) {
          if (fVar28 < DAT_ram_400930fc) {
            iVar14 = 0;
            fVar2 = (DAT_ram_400930fc - fVar28) / DAT_ram_40093100;
            do {
              uVar16 = *(uint *)(iVar23 + iVar14 * 4);
              fVar28 = (float)((uVar16 & 0xffffff) >> 0x10);
              fVar34 = (float)((uVar16 & 0xffff) >> 8);
              fVar28 = fVar2 * (fVar32 - fVar28) + fVar28;
              fVar34 = fVar2 * (fVar32 - fVar34) + fVar34;
              fVar3 = fVar2 * (fVar32 - (float)(uVar16 & 0xff)) + (float)(uVar16 & 0xff);
              *(uint *)(iVar23 + iVar14 * 4) =
                   uVar16 & 0xff000000 | (uint)(-1 < (int)fVar3) * (int)fVar3 & 0xff |
                   ((uint)(-1 < (int)fVar28) * (int)fVar28 & 0xff) << 0x10 |
                   ((uint)(-1 < (int)fVar34) * (int)fVar34 & 0xff) << 8;
              iVar14 = iVar14 + 1;
            } while (iVar14 != 0x12c00);
          }
          fVar2 = DAT_ram_40093108;
          iVar14 = 0;
          do {
            iVar15 = 0;
            puVar21 = (uint *)(iVar23 + iVar14 * 4);
            do {
              uVar16 = *puVar21;
              iVar15 = iVar15 + 1;
              fVar28 = (float)((uVar16 & 0xffffff) >> 0x10) * fVar2;
              fVar34 = (float)(uVar16 & 0xff) * fVar2;
              fVar32 = (float)((uVar16 & 0xffff) >> 8) * fVar2;
              *puVar21 = ((uint)(-1 < (int)fVar28) * (int)fVar28 & 0xff) << 0x10 |
                         (uint)(-1 < (int)fVar34) * (int)fVar34 & 0xff | uVar16 & 0xff000000 |
                         ((uint)(-1 < (int)fVar32) * (int)fVar32 & 0xff) << 8;
              puVar21 = puVar21 + 1;
            } while (iVar15 != 0x140);
            iVar14 = iVar14 + 0x280;
          } while (iVar14 != 0x12c00);
        }
        else {
          iVar14 = 0;
          fVar28 = (fVar28 / DAT_ram_400930f4) * DAT_ram_400930f8;
          do {
            uVar16 = (int)(iVar14 - 0x78U) >> 0x1f;
            uVar25 = 0xffffffff;
            if ((int)(fVar28 * fVar2) <= (int)((iVar14 - 0x78U ^ uVar16) - uVar16)) {
              uVar25 = 0xff000000;
            }
            iVar15 = 0;
            do {
              *(undefined4 *)(iVar23 + iVar14 * 0x500 + iVar15 * 4) = uVar25;
              iVar15 = iVar15 + 1;
            } while (iVar15 != 0x140);
            iVar14 = iVar14 + 1;
          } while (iVar14 != 0xf0);
        }
      }
      FUN_ram_40014ce8();
      FUN_ram_40044572(_DAT_ram_300685e4);
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = _DAT_ram_300685d8;
  FUN_ram_40014e9c();
  FUN_ram_4000505c(&DAT_ram_300685cc,0,0x100);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40014f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


