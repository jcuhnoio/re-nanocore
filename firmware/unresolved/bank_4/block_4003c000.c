/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4003c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4003c094.
 * REA evidence: ev_e190aa1a23af265b3bd67a6023750cc517ab18fb18581176a6fe132793da3b9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c094(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar4 = 0xffffffea;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar6 = *param_2;
    iVar1 = FUN_ram_4003ba72(uVar6);
    uVar4 = 0xffffffed;
    if (iVar1 != -1) {
      uVar2 = param_2[1];
      if ((uint)param_2[1] < 32000000) {
        uVar2 = 32000000;
      }
      *param_1 = uVar6;
      uVar5 = 100000000;
      if (uVar2 < 0x5f5e101) {
        uVar5 = uVar2;
      }
      iVar7 = uVar5 + 1000000;
      do {
        iVar7 = iVar7 + -1000000;
        FUN_ram_40036b5c(param_2[2],iVar7);
        uVar2 = FUN_ram_40036b2c(param_2[2]);
      } while (uVar5 < uVar2);
      FUN_ram_4003cf70(s_freq__input__ram_40096480,*param_1,uVar2);
      iVar7 = FUN_ram_400369fe(param_2[2]);
      if ((iVar7 < 0) || (iVar7 = FUN_ram_400369a4(param_2[2]), iVar7 < 0)) {
        uVar4 = 0xfffffff2;
      }
      else {
        fence();
        puVar3 = (uint *)(iVar1 + 4);
        *puVar3 = 0x80000081;
        fence();
        fence();
        *puVar3 = *puVar3 & 0xfffffffd | 2;
        puVar3 = (uint *)(iVar1 + 8);
        fence();
        fence();
        *puVar3 = *puVar3 & 0xffffbfff | 0x4000;
        FUN_ram_4003ba86(iVar1,param_2[5]);
        FUN_ram_4003bb14(iVar1,0xffffffff);
        fence();
        fence();
        *puVar3 = (*(byte *)((int)param_2 + 0x11) & 1) << 1 | *puVar3 & 0xfffffffd;
        fence();
        fence();
        *puVar3 = *(byte *)((int)param_2 + 0x12) & 1 | *puVar3 & 0xfffffffe;
        fence();
        fence();
        *puVar3 = (uint)*(byte *)((int)param_2 + 0xe) << 0xc | *puVar3 & 0xffffefff;
        fence();
        fence();
        *puVar3 = (uint)*(byte *)((int)param_2 + 0xd) << 0x19 | *puVar3 & 0xfdffffff;
        fence();
        fence();
        *puVar3 = (*(byte *)(param_2 + 4) & 1) << 2 | *puVar3 & 0xfffffffb;
        FUN_ram_4003bab6(iVar1,*(char *)(param_2 + 4) == '\x01');
        FUN_ram_4003bace(iVar1,*(char *)((int)param_2 + 0xf) == '\0');
        FUN_ram_4003bae6(iVar1,1);
        FUN_ram_4003bafe(iVar1);
        fence();
        fence();
        *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xff00ff00 | 0x200020;
        uVar4 = param_2[2];
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[4] = uVar4;
        uVar4 = 0;
        if (*(char *)(param_1 + 0x14) != '\0') {
          FUN_ram_4003be18(iVar1);
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x4003c2a2.
 * REA evidence: ev_433bdd954acf4f7151f5977266ff0b1453c928b4a1a486af7bd12b549c6b02f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c2a2(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = FUN_ram_4003ba72(*param_1);
    if (*(char *)(param_1 + 0x14) == '\0') {
      puVar2 = (uint *)(iVar1 + 8);
      fence();
      uVar4 = (*puVar2 & 7) >> 2;
      if (param_3 != 0) {
        uVar4 = uVar4 ^ 1;
      }
      fence();
      fence();
      *puVar2 = (param_2 & 3) << 4 | *puVar2 & 0xffffffcf;
      FUN_ram_4003bab6(iVar1,uVar4);
    }
    else {
      puVar2 = (uint *)(iVar1 + 0x40);
      fence();
      uVar4 = (*puVar2 & 0x3f) >> 5;
      if (param_3 != 0) {
        uVar4 = uVar4 ^ 1;
      }
      if (param_2 == 0) {
        fence();
        fence();
        *puVar2 = *puVar2 & 0xfffffff3;
      }
      fence();
      uVar3 = *puVar2 & 0xffffff7f;
      if (uVar4 != 0) {
        uVar3 = *puVar2 | 0x80;
      }
      fence();
      *puVar2 = uVar3;
    }
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003c342.
 * REA evidence: ev_3490531cbda46bdcd703dcf95c0ddae182957dfc2fbb4eaad25c99dd8216af81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c342(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint auStack_24 [3];
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4003ba72(*param_1);
    uVar3 = FUN_ram_40036b2c(param_1[4]);
    if (param_2 < 100000) {
      param_2 = 100000;
    }
    if (100000000 < param_2) {
      param_2 = 100000000;
    }
    if (*(char *)(param_1 + 0x14) == '\0') {
      iVar4 = FUN_ram_4003cfee(uVar3,param_2,auStack_24);
      if (iVar4 == 1) {
        uVar1 = (auStack_24[0] + 1) * 2;
        if (uVar1 == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = uVar3 / uVar1;
        }
      }
      else {
        uVar1 = 0;
        if (iVar4 == 0) {
          uVar1 = uVar3 >> (auStack_24[0] & 0x1f);
        }
      }
      uVar3 = *(uint *)(iVar2 + 0x24);
      fence();
      if (iVar4 == 1) {
        uVar3 = uVar3 & 0xffffef00 | auStack_24[0] & 0xff;
        uVar5 = 0x1000;
      }
      else {
        uVar3 = uVar3 & 0xffffe0ff;
        uVar5 = (auStack_24[0] & 0xf) << 8;
      }
      fence();
      *(uint *)(iVar2 + 0x24) = uVar5 | uVar3;
    }
    else {
      uVar1 = 1;
      do {
        auStack_24[0] = uVar1;
        if (auStack_24[0] << 1 == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = uVar3 / (auStack_24[0] << 1);
        }
        uVar1 = auStack_24[0] + 1;
      } while (param_2 < uVar5);
      auStack_24[0] = auStack_24[0] & 0xff;
      fence();
      *(uint *)(iVar2 + 0x44) = auStack_24[0];
      if (auStack_24[0] == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = uVar3 / (auStack_24[0] << 1);
      }
    }
    FUN_ram_4003cf70(s_freq___bus___ram_40096490,*param_1,uVar1);
    if (uVar1 == 0) {
      uVar1 = param_2;
    }
    param_1[5] = uVar1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003c448.
 * REA evidence: ev_f5d786634d93c006d3c85698fae66d0686d980e77a3399bff512ab9f4b932af7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c448(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffea;
  }
  iVar1 = FUN_ram_4003ba72(*param_1);
  fence();
  uVar3 = *(uint *)(iVar1 + 0x38) & 0xcfffffff;
  if (param_2 == 2) {
    uVar2 = 0x10000000;
  }
  else {
    if (param_2 != 4) goto LAB_ram_4003c480;
    uVar2 = 0x20000000;
  }
  uVar3 = uVar3 | uVar2;
LAB_ram_4003c480:
  fence();
  *(uint *)(iVar1 + 0x38) = uVar3;
  if (param_2 == 0) {
    param_1[6] = 1;
  }
  else {
    param_1[6] = param_2;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4003c4a6.
 * REA evidence: ev_11d326a3418e60e205759116b5ca2ce42650896ef12c501bb437d6f69e58f189
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c4a6(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    fence();
    if ((*(uint *)(param_1 + 0x14) & 0x1000) != 0) {
      return 0;
    }
    FUN_ram_4003f052(1);
    uVar1 = uVar1 + 1;
  } while (uVar1 <= param_2);
  FUN_ram_4003cf18(param_1);
  return 0xffffff8c;
}


/* NanoCore 1.10, address 0x4003c4f6.
 * REA evidence: ev_27d48416f212680a717328dff66976502c7919e92a4b39b2c9b24ce110d808f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c4f6(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  for (; param_4 != 0; param_4 = param_4 - uVar3) {
    iVar2 = FUN_ram_4003bb9e(param_1);
    while (uVar3 = 0x40 - iVar2, uVar3 < 9) {
      FUN_ram_4003f052(1);
      iVar2 = FUN_ram_4003bb9e(param_1);
      uVar1 = uVar1 + 1;
      if (param_5 < uVar1) {
        return 0xffffff8c;
      }
    }
    if (param_4 <= uVar3) {
      uVar3 = param_4;
    }
    FUN_ram_4003bbac(param_1,param_2,uVar3);
    while (fence(), uVar3 != (*(uint *)(param_1 + 0x1c) & 0xff)) {
      uVar1 = uVar1 + 1;
      FUN_ram_4003f052(1);
      if (param_5 < uVar1) {
        return 0xffffff8c;
      }
    }
    FUN_ram_4003bbc8(param_1,param_3,uVar3);
    param_2 = param_2 + uVar3;
    param_3 = param_3 + uVar3;
  }
  do {
    iVar2 = FUN_ram_4003bb9e(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = uVar1 + 1;
    FUN_ram_4003f052(1);
  } while (uVar1 <= param_5);
  return 0xffffff8c;
}


/* NanoCore 1.10, address 0x4003c5c6.
 * REA evidence: ev_0e6bc890a9367eccd70a7e5f091dbf5c462ab490aad9fdbd3f26f7573840434b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c5c6(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    while( true ) {
      if (param_3 == 0) {
        do {
          iVar3 = FUN_ram_4003bb9e(param_1);
          if (iVar3 == 0) {
            return 0;
          }
          uVar2 = uVar2 + 1;
          FUN_ram_4003f052(1);
        } while (uVar2 <= param_4);
        return 0xffffff8c;
      }
      iVar3 = FUN_ram_4003bb9e(param_1);
      uVar1 = 0x40 - iVar3;
      uVar2 = uVar2 + 1;
      if (uVar1 < 9) break;
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      FUN_ram_4003bbac(param_1,param_2,uVar1);
      param_2 = param_2 + uVar1;
      param_3 = param_3 - uVar1;
      FUN_ram_4003f052(1);
    }
    FUN_ram_4003f052(1);
  } while (uVar2 <= param_4);
  return 0xffffff8c;
}


/* NanoCore 1.10, address 0x4003c658.
 * REA evidence: ev_862ed7de83553ae6cccad0d301f42c7c10b723e2d4029712f6d9a4c07cb394a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c658(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    while( true ) {
      if (param_3 == 0) {
        return 0;
      }
      fence();
      uVar1 = *(uint *)(param_1 + 0x1c) & 0xff;
      uVar2 = uVar2 + 1;
      if (uVar1 == 0) break;
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      FUN_ram_4003bbc8(param_1,param_2,uVar1);
      param_2 = param_2 + uVar1;
      param_3 = param_3 - uVar1;
      FUN_ram_4003f052(1);
    }
    FUN_ram_4003f052(1);
  } while (uVar2 <= param_4);
  return 0xffffff8c;
}


/* NanoCore 1.10, address 0x4003c6ce.
 * REA evidence: ev_9aa8e8584cbd7644aa65d3b5c8c98be4d268cf0d7ffa2bb53cff095a356ccd32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c6ce(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = 0xffffffea;
    if (((param_2 != 0) && (*(int *)(param_1 + 0x34) == 0)) && (*(int *)(param_1 + 0x30) == 0)) {
      iVar2 = FUN_ram_40038a8e(0xffffffea);
      if ((iVar2 == 0) || (iVar3 = FUN_ram_40038a8e(), iVar3 == 0)) {
        uVar1 = 0xffffffed;
      }
      else {
        *(int *)(param_1 + 0x30) = iVar3;
        *(int *)(param_1 + 0x34) = iVar2;
        FUN_ram_4000305c(param_1 + 0x1c,param_2,0x14);
        *(undefined4 *)(param_1 + 0x2c) = 8;
        *(undefined4 *)(param_1 + 0x28) = 4;
        *(undefined4 *)(param_1 + 0x24) = 0x10;
        *(undefined4 *)(param_1 + 0x20) = 0;
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003c730.
 * REA evidence: ev_240c874fca41885495514b32e0d43aaf56fa121509344769cdd27cf64d78dfb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003c730(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x16;
  }
  if (param_2 == (int *)0x0) {
    return -0x16;
  }
  iVar1 = FUN_ram_4003bd8e(param_2);
  iVar2 = FUN_ram_4003ba72(*param_1);
  if (iVar1 != 0) {
    memset(&uStack_70,0,0x20);
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      return -0x16;
    }
    if (param_2[2] == 0) {
      return -0x16;
    }
    uVar3 = FUN_ram_4003cf80(param_1[5]);
    FUN_ram_4003bafe(iVar2);
    if (*param_2 == 0) {
      iVar4 = 0;
      if (param_2[1] == 0) goto LAB_ram_4003c7ae;
      uVar7 = param_2[2];
      param_1[0x12] = 0;
      FUN_ram_4003bb2a(iVar2);
      FUN_ram_4003bd2c(iVar2,0,0,uVar7);
      uStack_70 = 2;
      uStack_54 = param_1[7];
      uStack_60 = param_1[10];
      iStack_68 = param_2[1];
      uVar5 = param_1[0xd];
      uStack_64 = 1;
      if ((uVar7 & 3) == 0) {
        uStack_64 = uStack_60;
      }
      uStack_5c = param_1[9];
      uStack_58 = param_1[0xb];
      iStack_6c = iVar2 + 0x300;
      iVar4 = FUN_ram_40038a36(uVar5,&uStack_70);
      if (((iVar4 < 0) ||
          (iVar4 = FUN_ram_40038bcc(uVar5,param_2[1],iVar2 + 0x300,uVar7,2), iVar4 < 0)) ||
         (iVar4 = FUN_ram_40038dac(uVar5), iVar4 < 0)) goto LAB_ram_4003c7ae;
      FUN_ram_4003bbe4(iVar2);
      iVar4 = FUN_ram_4003c4a6(iVar2,uVar3);
      if (-1 < iVar4) {
        iVar4 = FUN_ram_4003bce6(uVar5,uVar3);
      }
      FUN_ram_4003bb3e(iVar2);
    }
    else {
      if (param_2[1] != 0) {
        iVar1 = FUN_ram_4003ba72(*param_1);
        iVar4 = FUN_ram_4003bb80();
        if (iVar4 == 1) {
          param_1[0x12] = 7;
          FUN_ram_4003bb52(iVar1);
          FUN_ram_4003bb2a(iVar1);
          FUN_ram_4003bd2c(iVar1,param_2[2],param_2[2],0);
          FUN_ram_4003bae6(iVar1,0);
          uStack_34 = param_1[7];
          iStack_4c = *param_2;
          uStack_40 = 1;
          uStack_44 = param_1[8];
          uStack_3c = param_1[9];
          if ((param_2[2] & 3U) == 0) {
            uStack_40 = param_1[10];
          }
          uStack_38 = param_1[0xb];
          iStack_50 = iVar4;
          iStack_48 = iVar1 + 0x200;
          iVar4 = FUN_ram_40038a36(param_1[0xc],&iStack_50);
          if (((-1 < iVar4) &&
              (iVar4 = FUN_ram_40038bcc(param_1[0xc],iVar1 + 0x200,*param_2,param_2[2],1),
              -1 < iVar4)) && (iVar4 = FUN_ram_40038dac(param_1[0xc]), -1 < iVar4)) {
            iStack_50 = 2;
            uStack_34 = param_1[7];
            uStack_40 = param_1[10];
            iStack_48 = param_2[1];
            uStack_44 = 1;
            if ((param_2[2] & 3U) == 0) {
              uStack_44 = uStack_40;
            }
            uStack_3c = param_1[9];
            uStack_38 = param_1[0xb];
            iStack_4c = iVar1 + 0x300;
            iVar4 = FUN_ram_40038a36(param_1[0xd],&iStack_50);
            if (((-1 < iVar4) &&
                (iVar4 = FUN_ram_40038bcc(param_1[0xd],param_2[1],iVar1 + 0x300,param_2[2],2),
                -1 < iVar4)) && (iVar4 = FUN_ram_40038dac(param_1[0xd]), -1 < iVar4)) {
              FUN_ram_4003bbe4(iVar1);
              FUN_ram_4003c4a6(iVar1,uVar3);
              iVar4 = FUN_ram_4003bce6(param_1[0xd],uVar3);
              FUN_ram_4003bae6(iVar1,1);
              FUN_ram_4003bb3e(iVar1);
              FUN_ram_4003bb68(iVar1);
              FUN_ram_400389b4(param_1[0xd]);
              uVar5 = param_1[0xc];
              goto LAB_ram_4003c8c6;
            }
          }
        }
        iVar4 = -1;
        goto LAB_ram_4003c7ae;
      }
      uVar9 = param_2[2];
      iVar1 = FUN_ram_4003bb80(iVar2);
      uVar7 = uVar9;
      if (iVar1 != 1) {
        uVar7 = 0;
      }
      param_1[0x12] = 1;
      FUN_ram_4003bb52(iVar2);
      FUN_ram_4003bd2c(iVar2,uVar9,uVar7,0);
      uStack_54 = param_1[7];
      uStack_70 = 1;
      iStack_6c = *param_2;
      uStack_64 = param_1[8];
      uVar5 = param_1[0xc];
      uStack_5c = param_1[9];
      uStack_60 = 1;
      if ((uVar9 & 3) == 0) {
        uStack_60 = param_1[10];
      }
      uStack_58 = param_1[0xb];
      iStack_68 = iVar2 + 0x200;
      iVar4 = FUN_ram_40038a36(uVar5,&uStack_70);
      if (((iVar4 < 0) ||
          (iVar4 = FUN_ram_40038bcc(uVar5,iVar2 + 0x200,*param_2,uVar9,1), iVar4 < 0)) ||
         (iVar4 = FUN_ram_40038dac(uVar5), iVar4 < 0)) goto LAB_ram_4003c7ae;
      FUN_ram_4003bbe4(iVar2);
      iVar4 = FUN_ram_4003bce6(uVar5,uVar3);
      if (-1 < iVar4) {
        iVar4 = FUN_ram_4003c4a6(iVar2,uVar3);
      }
      FUN_ram_4003bb68(iVar2);
    }
LAB_ram_4003c8c6:
    FUN_ram_400389b4(uVar5);
    goto LAB_ram_4003c7ae;
  }
  if (((*param_2 == 0) && (param_2[1] == 0)) || (param_2[2] == 0)) {
    return -0x16;
  }
  iVar1 = FUN_ram_4003cf80(param_1[5]);
  iVar1 = iVar1 * 10;
  FUN_ram_4003bafe(iVar2);
  if (*param_2 == 0) {
    if (param_2[1] != 0) {
      iVar4 = param_2[2];
      param_1[0x12] = 0;
      FUN_ram_4003bd2c(iVar2,0,0,iVar4);
      FUN_ram_4003bbe4(iVar2);
      iVar4 = FUN_ram_4003c658(iVar2,param_2[1],iVar4,iVar1);
      goto LAB_ram_4003ca80;
    }
LAB_ram_4003ca86:
    iVar4 = FUN_ram_4003c4a6(iVar2,iVar1);
  }
  else if (param_2[1] == 0) {
    iVar8 = param_2[2];
    iVar6 = FUN_ram_4003bb80(iVar2);
    iVar4 = iVar8;
    if (iVar6 != 1) {
      iVar4 = 0;
    }
    param_1[0x12] = 1;
    FUN_ram_4003bd2c(iVar2,iVar8,iVar4,0);
    FUN_ram_4003bbe4(iVar2);
    iVar4 = FUN_ram_4003c5c6(iVar2,*param_2,iVar8,iVar1);
LAB_ram_4003ca80:
    if (-1 < iVar4) goto LAB_ram_4003ca86;
  }
  else {
    iVar6 = FUN_ram_4003bb80(iVar2);
    iVar4 = 0;
    if (iVar6 == 1) {
      iVar4 = param_2[2];
      param_1[0x12] = 6;
      FUN_ram_4003bd2c(iVar2,iVar4,iVar4,0);
      FUN_ram_4003bae6(iVar2,0);
      FUN_ram_4003bbe4(iVar2);
      iVar4 = FUN_ram_4003c4f6(iVar2,*param_2,param_2[1],param_2[2],iVar1);
      goto LAB_ram_4003ca80;
    }
  }
  FUN_ram_4003bae6(iVar2,1);
LAB_ram_4003c7ae:
  FUN_ram_4003bdba(iVar2);
  return iVar4;
}


/* NanoCore 1.10, address 0x4003cafc.
 * REA evidence: ev_697d8adfdfa6431ef3be33c04d581e754c0faff90d7b6df5a7d7abe18676d7cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003cafc(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffea;
  if ((param_1 != 0) && (param_2 != 0)) {
    *(int *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 8) = param_3;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003cb0c.
 * REA evidence: ev_dda2a48b36ae8bf89e66868551f535b59b52039e99a2f8457b2a354c342e8069
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003cb0c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x16;
  }
  if (param_2 == (int *)0x0) {
    return -0x16;
  }
  iVar1 = FUN_ram_4003bd8e(param_2);
  iVar2 = FUN_ram_4003ba72(*param_1);
  if (iVar1 != 0) {
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      return -0x16;
    }
    if (param_2[2] == 0) {
      return -0x16;
    }
    FUN_ram_4003bafe(iVar2);
    FUN_ram_4003bb14(iVar2,0x1700);
    iVar1 = *param_2;
    param_1[3] = 1;
    if (iVar1 == 0) {
      if (param_2[1] == 0) goto LAB_ram_4003cc0e;
      iVar7 = param_2[2];
      FUN_ram_4003bb2a(iVar2);
      param_1[0x12] = 4;
      param_1[0x13] = 0x30000;
      FUN_ram_4003bd2c(iVar2,0,0,iVar7);
      uStack_40 = 2;
      uStack_24 = param_1[7];
      uVar6 = param_1[0xd];
      iVar3 = iVar2 + 0x300;
      iStack_38 = param_2[1];
      uStack_34 = param_1[10];
      uStack_2c = param_1[0xb];
      uStack_30 = param_1[8];
      uStack_28 = param_1[9];
      iStack_3c = iVar3;
      iVar1 = FUN_ram_40038a36(uVar6,&uStack_40);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_ram_40038a26(uVar6,&LAB_ram_4003bc52,param_1);
      iVar1 = param_2[1];
      uVar4 = 2;
    }
    else {
      iVar7 = param_2[2];
      iVar3 = FUN_ram_4003bb80(iVar2);
      iVar1 = iVar7;
      if (iVar3 != 1) {
        iVar1 = 0;
      }
      FUN_ram_4003bb52(iVar2);
      param_1[0x12] = 5;
      param_1[0x13] = 0x30000;
      FUN_ram_4003bd2c(iVar2,iVar7,iVar1,0);
      uStack_24 = param_1[7];
      uVar6 = param_1[0xc];
      uStack_40 = 1;
      iStack_3c = *param_2;
      iVar1 = iVar2 + 0x200;
      uStack_34 = param_1[8];
      uStack_2c = param_1[9];
      uStack_30 = param_1[10];
      uStack_28 = param_1[0xb];
      iStack_38 = iVar1;
      iVar3 = FUN_ram_40038a36(uVar6,&uStack_40);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_ram_40038a26(uVar6,&LAB_ram_4003bc9c,param_1);
      iVar3 = *param_2;
      uVar4 = 1;
    }
    iVar1 = FUN_ram_40038bcc(uVar6,iVar1,iVar3,iVar7,uVar4);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_40038dac(uVar6);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_ram_4003bbe4(iVar2);
LAB_ram_4003cc0e:
    fence();
    fence();
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x1700;
    return 0;
  }
  if (((*param_2 == 0) && (param_2[1] == 0)) || (param_2[2] == 0)) {
    return -0x16;
  }
  FUN_ram_4003bafe(iVar2);
  FUN_ram_4003bb14(iVar2,0x1711);
  iVar1 = *param_2;
  param_1[3] = 1;
  if (iVar1 == 0) {
    iVar1 = param_2[1];
    if (iVar1 == 0) goto LAB_ram_4003cd1c;
    iVar7 = param_2[2];
    param_1[0x12] = 2;
    param_1[0x13] = 0x10000;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = iVar1;
    param_1[0x11] = iVar7;
    iVar1 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = param_2[2];
    iVar7 = FUN_ram_4003bb80(iVar2);
    param_1[0x12] = 3;
    param_1[0x13] = 0x10000;
    iVar5 = *param_2;
    iVar1 = iVar3;
    if (iVar7 != 1) {
      iVar1 = 0;
    }
    param_1[0xf] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = iVar5;
    param_1[0x10] = iVar3;
    iVar7 = 0;
  }
  FUN_ram_4003bd2c(iVar2,iVar3,iVar1,iVar7);
  FUN_ram_4003bbe4(iVar2);
LAB_ram_4003cd1c:
  fence();
  fence();
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x1711;
  return 0;
}


/* NanoCore 1.10, address 0x4003cd5c.
 * REA evidence: ev_7843d76207eab36089abf424d66d7a68a43b52d176f1bdf7f0e6ec69a1477c8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cd5c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4003ba72(*param_1);
    uVar1 = *(uint *)(iVar2 + 0x14);
    fence();
    if ((int)(uVar1 << 0x14) < 0) {
      param_1[3] = param_1[3] | 8;
    }
    if ((uVar1 & 0x400) != 0) {
      param_1[3] = param_1[3] | 0x10;
    }
    if (((((uVar1 & 0x30) != 0) && (param_1[0x12] == 3)) && (param_1[0xe] != 0)) &&
       (param_1[0x10] != 0)) {
      iVar3 = FUN_ram_4003bb9e(iVar2);
      uVar5 = param_1[0x10];
      if (0x40U - iVar3 < (uint)param_1[0x10]) {
        uVar5 = 0x40U - iVar3;
      }
      FUN_ram_4003bbac(iVar2,param_1[0xe],uVar5);
      param_1[0xe] = param_1[0xe] + uVar5;
      param_1[0x10] = param_1[0x10] - uVar5;
    }
    if ((uVar1 & 0x200) != 0) {
      param_1[3] = param_1[3] | 2;
    }
    if ((uVar1 & 0x100) != 0) {
      param_1[3] = param_1[3] | 4;
    }
    if ((((uVar1 & 0x1005) != 0) && (param_1[0x12] == 2)) &&
       ((param_1[0xf] != 0 && (param_1[0x11] != 0)))) {
      fence();
      uVar4 = *(uint *)(iVar2 + 0x1c) & 0xff;
      uVar5 = param_1[0x11];
      if (uVar4 < (uint)param_1[0x11]) {
        uVar5 = uVar4;
      }
      FUN_ram_4003bbc8(iVar2,param_1[0xf],uVar5);
      param_1[0xf] = param_1[0xf] + uVar5;
      param_1[0x11] = param_1[0x11] - uVar5;
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar5 = 0;
      if (param_1[3] != 1) {
        uVar5 = param_1[3] & 0xfffffffe;
      }
      param_1[3] = uVar5;
      FUN_ram_4003bb14(iVar2,0xffffffff);
      uVar5 = param_1[3];
      param_1[0xf] = 0;
      param_1[3] = uVar5 | 0x10000;
      param_1[0x11] = 0;
      param_1[0xe] = 0;
      param_1[0x10] = 0;
      if (param_1[0x13] == ((uVar5 | 0x10000) & param_1[0x13])) {
        if (param_1[0x12] == 5) {
          FUN_ram_400389b4(param_1[0xc]);
        }
        if (param_1[0x12] == 4) {
          FUN_ram_400389b4(param_1[0xd]);
        }
        if ((code *)param_1[1] != (code *)0x0) {
          (*(code *)param_1[1])(param_1,param_1[2]);
        }
      }
    }
    fence();
    *(uint *)(iVar2 + 0x14) = uVar1;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003cf18.
 * REA evidence: ev_dfc9e4793655b0536bd053ecee969f109a68482993b50d80d09129d5865f9d89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cf18(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((uVar1 & 3) == 0) {
      FUN_ram_40031b48(s_0x_lX___ram_400964a0,param_1);
    }
    uVar1 = uVar1 + 1;
    FUN_ram_40031b48(s__08X_ram_400964ac,*param_1);
    param_1 = param_1 + 1;
  } while (uVar1 != 0x28);
  FUN_ram_40031b62(10);
  return;
}


/* NanoCore 1.10, address 0x4003cf70.
 * REA evidence: ev_e023be986599a83e7b8318db3fac1e3646bca19bfaa900c3c3768129c7a06bda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cf70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40031b48(s_qspi_d__s___dHz_ram_400964b4,param_2,param_1,param_3);
  return;
}


/* NanoCore 1.10, address 0x4003cf80.
 * REA evidence: ev_fca4cc9aad5d2daea57f176f5137ebfbf2558ab17be490437c5630954c1194f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003cf80(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 100000) {
    uVar2 = param_2 * 8000000;
  }
  else {
    if (param_1 < 1000000) {
      uVar2 = param_2 * 8000;
      uVar3 = 1000;
    }
    else {
      uVar2 = param_2 << 3;
      uVar3 = 1000000;
    }
    if (uVar3 == 0) {
      param_1 = 0xffffffff;
    }
    else {
      param_1 = param_1 / uVar3;
    }
  }
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / param_1;
  }
  uVar3 = 100;
  if (0xfffff < param_2) {
    uVar3 = ((param_2 >> 0xd) + 1) * 1000;
  }
  uVar1 = uVar2 + 100000;
  if (uVar2 + 100000 <= uVar3) {
    uVar1 = uVar3;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003cfee.
 * REA evidence: ev_19466aa6f1c51fad9fd9c3d66c4df1308731d232e055e9a7e9ebd423f56d9972
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003cfee(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  for (uVar2 = 0; param_2 < param_1 >> (uVar2 & 0x1f); uVar2 = uVar2 + 1) {
  }
  if (0xf < (int)uVar2) {
    uVar2 = 0xf;
  }
  if (param_2 << 1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = param_1 / (param_2 << 1);
  }
  uVar3 = uVar3 - 1;
  if ((int)uVar3 < 0x100) {
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xff;
  }
  uVar1 = (uVar3 + 1) * 2;
  if (uVar1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_1 / uVar1;
  }
  param_1 = param_1 >> (uVar2 & 0x1f);
  if (param_2 == param_1) goto LAB_ram_4003d028;
  if (param_2 != uVar1) {
    if ((uVar1 < param_2) && (param_1 < param_2)) {
      if (param_1 < uVar1) goto LAB_ram_4003d03e;
    }
    else if (uVar1 < param_1) goto LAB_ram_4003d03e;
LAB_ram_4003d028:
    *param_3 = uVar2;
    return 0;
  }
LAB_ram_4003d03e:
  *param_3 = uVar3;
  return 1;
}


