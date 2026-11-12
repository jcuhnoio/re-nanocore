/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4003d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003d1c6.
 * REA evidence: ev_7f69b49ed8fc5920f6ef8087aca795fa63ff7cbad52d727270a251e7b8986a04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d1c6(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = FUN_ram_4003c996(*param_1);
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
      FUN_ram_4003c9da(iVar1,uVar4);
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


/* NanoCore 1.11, address 0x4003d266.
 * REA evidence: ev_22ff300b26bf4edf7cd17ebe45825e70dee9c4a19c1de95be9e3c74ee683b398
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d266(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint auStack_24 [3];
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4003c996(*param_1);
    uVar3 = FUN_ram_400379fe(param_1[4]);
    if (param_2 < 100000) {
      param_2 = 100000;
    }
    if (100000000 < param_2) {
      param_2 = 100000000;
    }
    if (*(char *)(param_1 + 0x14) == '\0') {
      iVar4 = FUN_ram_4003df12(uVar3,param_2,auStack_24);
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
    FUN_ram_4003de94(s_freq___bus___ram_4009830c,*param_1,uVar1);
    if (uVar1 == 0) {
      uVar1 = param_2;
    }
    param_1[5] = uVar1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003d36c.
 * REA evidence: ev_c85c77d6332c078349e41ce80e06c9f35c645b6cd786f61a4ed45a3f24f70196
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d36c(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffea;
  }
  iVar1 = FUN_ram_4003c996(*param_1);
  fence();
  uVar3 = *(uint *)(iVar1 + 0x38) & 0xcfffffff;
  if (param_2 == 2) {
    uVar2 = 0x10000000;
  }
  else {
    if (param_2 != 4) goto LAB_ram_4003d3a4;
    uVar2 = 0x20000000;
  }
  uVar3 = uVar3 | uVar2;
LAB_ram_4003d3a4:
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


/* NanoCore 1.11, address 0x4003d3ca.
 * REA evidence: ev_a4d3c20e56e3d5a5359460ac06764485887fdb272f91760054ba4a012c9f1014
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d3ca(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    fence();
    if ((*(uint *)(param_1 + 0x14) & 0x1000) != 0) {
      return 0;
    }
    FUN_ram_4003ff8a(1);
    uVar1 = uVar1 + 1;
  } while (uVar1 <= param_2);
  FUN_ram_4003de3c(param_1);
  return 0xffffff8c;
}


/* NanoCore 1.11, address 0x4003d41a.
 * REA evidence: ev_d679e94c426acecb0ca6b496ea7982a1132896bada08fbdba8f7634c382e0a47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d41a(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  for (; param_4 != 0; param_4 = param_4 - uVar3) {
    iVar2 = FUN_ram_4003cac2(param_1);
    while (uVar3 = 0x40 - iVar2, uVar3 < 9) {
      FUN_ram_4003ff8a(1);
      iVar2 = FUN_ram_4003cac2(param_1);
      uVar1 = uVar1 + 1;
      if (param_5 < uVar1) {
        return 0xffffff8c;
      }
    }
    if (param_4 <= uVar3) {
      uVar3 = param_4;
    }
    FUN_ram_4003cad0(param_1,param_2,uVar3);
    while (fence(), uVar3 != (*(uint *)(param_1 + 0x1c) & 0xff)) {
      uVar1 = uVar1 + 1;
      FUN_ram_4003ff8a(1);
      if (param_5 < uVar1) {
        return 0xffffff8c;
      }
    }
    FUN_ram_4003caec(param_1,param_3,uVar3);
    param_2 = param_2 + uVar3;
    param_3 = param_3 + uVar3;
  }
  do {
    iVar2 = FUN_ram_4003cac2(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = uVar1 + 1;
    FUN_ram_4003ff8a(1);
  } while (uVar1 <= param_5);
  return 0xffffff8c;
}


/* NanoCore 1.11, address 0x4003d4ea.
 * REA evidence: ev_4fff2ab19b47aa879aa5d66e23c3ea0fe955d2271bc538b2bd015cafe67932d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d4ea(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    while( true ) {
      if (param_3 == 0) {
        do {
          iVar3 = FUN_ram_4003cac2(param_1);
          if (iVar3 == 0) {
            return 0;
          }
          uVar2 = uVar2 + 1;
          FUN_ram_4003ff8a(1);
        } while (uVar2 <= param_4);
        return 0xffffff8c;
      }
      iVar3 = FUN_ram_4003cac2(param_1);
      uVar1 = 0x40 - iVar3;
      uVar2 = uVar2 + 1;
      if (uVar1 < 9) break;
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      FUN_ram_4003cad0(param_1,param_2,uVar1);
      param_2 = param_2 + uVar1;
      param_3 = param_3 - uVar1;
      FUN_ram_4003ff8a(1);
    }
    FUN_ram_4003ff8a(1);
  } while (uVar2 <= param_4);
  return 0xffffff8c;
}


/* NanoCore 1.11, address 0x4003d57c.
 * REA evidence: ev_7fdcc44df98f9d629acd48aa94f23f45a3821e89db83e9626e7f7840705b8f5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d57c(int param_1,int param_2,uint param_3,uint param_4)

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
      FUN_ram_4003caec(param_1,param_2,uVar1);
      param_2 = param_2 + uVar1;
      param_3 = param_3 - uVar1;
      FUN_ram_4003ff8a(1);
    }
    FUN_ram_4003ff8a(1);
  } while (uVar2 <= param_4);
  return 0xffffff8c;
}


/* NanoCore 1.11, address 0x4003d5f2.
 * REA evidence: ev_3c1bf06dd98366ae7bddf8c852decc29cc2841c4f8b61add6ff0e247166a9a8a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d5f2(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = 0xffffffea;
    if (((param_2 != 0) && (*(int *)(param_1 + 0x34) == 0)) && (*(int *)(param_1 + 0x30) == 0)) {
      iVar2 = FUN_ram_40039960(0xffffffea);
      if ((iVar2 == 0) || (iVar3 = FUN_ram_40039960(), iVar3 == 0)) {
        uVar1 = 0xffffffed;
      }
      else {
        *(int *)(param_1 + 0x30) = iVar3;
        *(int *)(param_1 + 0x34) = iVar2;
        FUN_ram_4000304c(param_1 + 0x1c,param_2,0x14);
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


/* NanoCore 1.11, address 0x4003d654.
 * REA evidence: ev_337aa7f93349e9e94bf7ad69305498145f1422b2a36f96e176573c89302162a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003d654(undefined4 *param_1,int *param_2)

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
  iVar1 = FUN_ram_4003ccb2(param_2);
  iVar2 = FUN_ram_4003c996(*param_1);
  if (iVar1 != 0) {
    memset(&uStack_70,0,0x20);
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      return -0x16;
    }
    if (param_2[2] == 0) {
      return -0x16;
    }
    uVar3 = FUN_ram_4003dea4(param_1[5]);
    FUN_ram_4003ca22(iVar2);
    if (*param_2 == 0) {
      iVar4 = 0;
      if (param_2[1] == 0) goto LAB_ram_4003d6d2;
      uVar7 = param_2[2];
      param_1[0x12] = 0;
      FUN_ram_4003ca4e(iVar2);
      FUN_ram_4003cc50(iVar2,0,0,uVar7);
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
      iVar4 = FUN_ram_40039908(uVar5,&uStack_70);
      if (((iVar4 < 0) ||
          (iVar4 = FUN_ram_40039a9e(uVar5,param_2[1],iVar2 + 0x300,uVar7,2), iVar4 < 0)) ||
         (iVar4 = FUN_ram_40039c7e(uVar5), iVar4 < 0)) goto LAB_ram_4003d6d2;
      FUN_ram_4003cb08(iVar2);
      iVar4 = FUN_ram_4003d3ca(iVar2,uVar3);
      if (-1 < iVar4) {
        iVar4 = FUN_ram_4003cc0a(uVar5,uVar3);
      }
      FUN_ram_4003ca62(iVar2);
    }
    else {
      if (param_2[1] != 0) {
        iVar1 = FUN_ram_4003c996(*param_1);
        iVar4 = FUN_ram_4003caa4();
        if (iVar4 == 1) {
          param_1[0x12] = 7;
          FUN_ram_4003ca76(iVar1);
          FUN_ram_4003ca4e(iVar1);
          FUN_ram_4003cc50(iVar1,param_2[2],param_2[2],0);
          FUN_ram_4003ca0a(iVar1,0);
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
          iVar4 = FUN_ram_40039908(param_1[0xc],&iStack_50);
          if (((-1 < iVar4) &&
              (iVar4 = FUN_ram_40039a9e(param_1[0xc],iVar1 + 0x200,*param_2,param_2[2],1),
              -1 < iVar4)) && (iVar4 = FUN_ram_40039c7e(param_1[0xc]), -1 < iVar4)) {
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
            iVar4 = FUN_ram_40039908(param_1[0xd],&iStack_50);
            if (((-1 < iVar4) &&
                (iVar4 = FUN_ram_40039a9e(param_1[0xd],param_2[1],iVar1 + 0x300,param_2[2],2),
                -1 < iVar4)) && (iVar4 = FUN_ram_40039c7e(param_1[0xd]), -1 < iVar4)) {
              FUN_ram_4003cb08(iVar1);
              FUN_ram_4003d3ca(iVar1,uVar3);
              iVar4 = FUN_ram_4003cc0a(param_1[0xd],uVar3);
              FUN_ram_4003ca0a(iVar1,1);
              FUN_ram_4003ca62(iVar1);
              FUN_ram_4003ca8c(iVar1);
              FUN_ram_40039886(param_1[0xd]);
              uVar5 = param_1[0xc];
              goto LAB_ram_4003d7ea;
            }
          }
        }
        iVar4 = -1;
        goto LAB_ram_4003d6d2;
      }
      uVar9 = param_2[2];
      iVar1 = FUN_ram_4003caa4(iVar2);
      uVar7 = uVar9;
      if (iVar1 != 1) {
        uVar7 = 0;
      }
      param_1[0x12] = 1;
      FUN_ram_4003ca76(iVar2);
      FUN_ram_4003cc50(iVar2,uVar9,uVar7,0);
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
      iVar4 = FUN_ram_40039908(uVar5,&uStack_70);
      if (((iVar4 < 0) ||
          (iVar4 = FUN_ram_40039a9e(uVar5,iVar2 + 0x200,*param_2,uVar9,1), iVar4 < 0)) ||
         (iVar4 = FUN_ram_40039c7e(uVar5), iVar4 < 0)) goto LAB_ram_4003d6d2;
      FUN_ram_4003cb08(iVar2);
      iVar4 = FUN_ram_4003cc0a(uVar5,uVar3);
      if (-1 < iVar4) {
        iVar4 = FUN_ram_4003d3ca(iVar2,uVar3);
      }
      FUN_ram_4003ca8c(iVar2);
    }
LAB_ram_4003d7ea:
    FUN_ram_40039886(uVar5);
    goto LAB_ram_4003d6d2;
  }
  if (((*param_2 == 0) && (param_2[1] == 0)) || (param_2[2] == 0)) {
    return -0x16;
  }
  iVar1 = FUN_ram_4003dea4(param_1[5]);
  iVar1 = iVar1 * 10;
  FUN_ram_4003ca22(iVar2);
  if (*param_2 == 0) {
    if (param_2[1] != 0) {
      iVar4 = param_2[2];
      param_1[0x12] = 0;
      FUN_ram_4003cc50(iVar2,0,0,iVar4);
      FUN_ram_4003cb08(iVar2);
      iVar4 = FUN_ram_4003d57c(iVar2,param_2[1],iVar4,iVar1);
      goto LAB_ram_4003d9a4;
    }
LAB_ram_4003d9aa:
    iVar4 = FUN_ram_4003d3ca(iVar2,iVar1);
  }
  else if (param_2[1] == 0) {
    iVar8 = param_2[2];
    iVar6 = FUN_ram_4003caa4(iVar2);
    iVar4 = iVar8;
    if (iVar6 != 1) {
      iVar4 = 0;
    }
    param_1[0x12] = 1;
    FUN_ram_4003cc50(iVar2,iVar8,iVar4,0);
    FUN_ram_4003cb08(iVar2);
    iVar4 = FUN_ram_4003d4ea(iVar2,*param_2,iVar8,iVar1);
LAB_ram_4003d9a4:
    if (-1 < iVar4) goto LAB_ram_4003d9aa;
  }
  else {
    iVar6 = FUN_ram_4003caa4(iVar2);
    iVar4 = 0;
    if (iVar6 == 1) {
      iVar4 = param_2[2];
      param_1[0x12] = 6;
      FUN_ram_4003cc50(iVar2,iVar4,iVar4,0);
      FUN_ram_4003ca0a(iVar2,0);
      FUN_ram_4003cb08(iVar2);
      iVar4 = FUN_ram_4003d41a(iVar2,*param_2,param_2[1],param_2[2],iVar1);
      goto LAB_ram_4003d9a4;
    }
  }
  FUN_ram_4003ca0a(iVar2,1);
LAB_ram_4003d6d2:
  FUN_ram_4003ccde(iVar2);
  return iVar4;
}


/* NanoCore 1.11, address 0x4003da20.
 * REA evidence: ev_1077ddefa2cb208d83aa58f1da67a8d479dd553096afc76f23276a6c2d1fdb0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003da20(int param_1,int param_2,undefined4 param_3)

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


/* NanoCore 1.11, address 0x4003da30.
 * REA evidence: ev_0ccebf9d08de623ef9771909dea0e3f961eda1a1768576c90e4185de206013b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003da30(undefined4 *param_1,int *param_2)

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
  iVar1 = FUN_ram_4003ccb2(param_2);
  iVar2 = FUN_ram_4003c996(*param_1);
  if (iVar1 != 0) {
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      return -0x16;
    }
    if (param_2[2] == 0) {
      return -0x16;
    }
    FUN_ram_4003ca22(iVar2);
    FUN_ram_4003ca38(iVar2,0x1700);
    iVar1 = *param_2;
    param_1[3] = 1;
    if (iVar1 == 0) {
      if (param_2[1] == 0) goto LAB_ram_4003db32;
      iVar7 = param_2[2];
      FUN_ram_4003ca4e(iVar2);
      param_1[0x12] = 4;
      param_1[0x13] = 0x30000;
      FUN_ram_4003cc50(iVar2,0,0,iVar7);
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
      iVar1 = FUN_ram_40039908(uVar6,&uStack_40);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_ram_400398f8(uVar6,&LAB_ram_4003cb76,param_1);
      iVar1 = param_2[1];
      uVar4 = 2;
    }
    else {
      iVar7 = param_2[2];
      iVar3 = FUN_ram_4003caa4(iVar2);
      iVar1 = iVar7;
      if (iVar3 != 1) {
        iVar1 = 0;
      }
      FUN_ram_4003ca76(iVar2);
      param_1[0x12] = 5;
      param_1[0x13] = 0x30000;
      FUN_ram_4003cc50(iVar2,iVar7,iVar1,0);
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
      iVar3 = FUN_ram_40039908(uVar6,&uStack_40);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_ram_400398f8(uVar6,&LAB_ram_4003cbc0,param_1);
      iVar3 = *param_2;
      uVar4 = 1;
    }
    iVar1 = FUN_ram_40039a9e(uVar6,iVar1,iVar3,iVar7,uVar4);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_40039c7e(uVar6);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_ram_4003cb08(iVar2);
LAB_ram_4003db32:
    fence();
    fence();
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x1700;
    return 0;
  }
  if (((*param_2 == 0) && (param_2[1] == 0)) || (param_2[2] == 0)) {
    return -0x16;
  }
  FUN_ram_4003ca22(iVar2);
  FUN_ram_4003ca38(iVar2,0x1711);
  iVar1 = *param_2;
  param_1[3] = 1;
  if (iVar1 == 0) {
    iVar1 = param_2[1];
    if (iVar1 == 0) goto LAB_ram_4003dc40;
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
    iVar7 = FUN_ram_4003caa4(iVar2);
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
  FUN_ram_4003cc50(iVar2,iVar3,iVar1,iVar7);
  FUN_ram_4003cb08(iVar2);
LAB_ram_4003dc40:
  fence();
  fence();
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x1711;
  return 0;
}


/* NanoCore 1.11, address 0x4003dc80.
 * REA evidence: ev_e957fdf3148d260ba4c62b3482b48d07f130aae1676cb649b1b71d715c1db0ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003dc80(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4003c996(*param_1);
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
      iVar3 = FUN_ram_4003cac2(iVar2);
      uVar5 = param_1[0x10];
      if (0x40U - iVar3 < (uint)param_1[0x10]) {
        uVar5 = 0x40U - iVar3;
      }
      FUN_ram_4003cad0(iVar2,param_1[0xe],uVar5);
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
      FUN_ram_4003caec(iVar2,param_1[0xf],uVar5);
      param_1[0xf] = param_1[0xf] + uVar5;
      param_1[0x11] = param_1[0x11] - uVar5;
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar5 = 0;
      if (param_1[3] != 1) {
        uVar5 = param_1[3] & 0xfffffffe;
      }
      param_1[3] = uVar5;
      FUN_ram_4003ca38(iVar2,0xffffffff);
      uVar5 = param_1[3];
      param_1[0xf] = 0;
      param_1[3] = uVar5 | 0x10000;
      param_1[0x11] = 0;
      param_1[0xe] = 0;
      param_1[0x10] = 0;
      if (param_1[0x13] == ((uVar5 | 0x10000) & param_1[0x13])) {
        if (param_1[0x12] == 5) {
          FUN_ram_40039886(param_1[0xc]);
        }
        if (param_1[0x12] == 4) {
          FUN_ram_40039886(param_1[0xd]);
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


/* NanoCore 1.11, address 0x4003de3c.
 * REA evidence: ev_b961f5fdd10ddc291cf2337bb12c4ac595ac3f69d34ff1e7fe0b5cd441f137d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003de3c(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((uVar1 & 3) == 0) {
      FUN_ram_40032a1a(s_0x_lX___ram_4009831c,param_1);
    }
    uVar1 = uVar1 + 1;
    FUN_ram_40032a1a(s__08X_ram_40098328,*param_1);
    param_1 = param_1 + 1;
  } while (uVar1 != 0x28);
  FUN_ram_40032a34(10);
  return;
}


/* NanoCore 1.11, address 0x4003de94.
 * REA evidence: ev_7b12a83407e49de22a799ccc77597e2e763656fe100482c74d1b0f162e142e67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003de94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40032a1a(s_qspi_d__s___dHz_ram_40098330,param_2,param_1,param_3);
  return;
}


/* NanoCore 1.11, address 0x4003dea4.
 * REA evidence: ev_deef9a04b8105a5a8e476127b38e5225dba238b9ee2d78205af87b4da6368f29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003dea4(uint param_1,uint param_2)

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


/* NanoCore 1.11, address 0x4003df12.
 * REA evidence: ev_5c0efed4341ae87476ed5ee9de6ecfb5abc1b59677857f95475cd8c102879ca3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003df12(uint param_1,uint param_2,uint *param_3)

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
  if (param_2 == param_1) goto LAB_ram_4003df4c;
  if (param_2 != uVar1) {
    if ((uVar1 < param_2) && (param_1 < param_2)) {
      if (param_1 < uVar1) goto LAB_ram_4003df62;
    }
    else if (uVar1 < param_1) goto LAB_ram_4003df62;
LAB_ram_4003df4c:
    *param_3 = uVar2;
    return 0;
  }
LAB_ram_4003df62:
  *param_3 = uVar3;
  return 1;
}


/* NanoCore 1.11, address 0x4003df7c.
 * REA evidence: ev_6546486b3274316363a0aa517f5fc2af866bfba1ad43bde0417f960bd9ba05f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003df7c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400378d0(0x1f);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40037876(0x1f), iVar1 < 0)) {
    uVar2 = 0xfffffff2;
  }
  else {
    fence();
    _DAT_ram_18100004 = 0x3f;
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4003dfb0.
 * REA evidence: ev_e1657bd3882a0b89b608a2b81af85b1fa07b77d981943236b766ea60839f6f01
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003dfb0(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (_DAT_ram_3007fa78 == 0) {
    fence();
    _DAT_ram_18100000 = _DAT_ram_18100000 & 0xffffcfff;
    if (param_1 == '\0') {
      fence();
      _DAT_ram_18100000 = _DAT_ram_18100000 | 0x1000;
    }
    else {
      fence();
    }
  }
  else {
    fence();
    fence();
    _DAT_ram_18100000 = _DAT_ram_18100000 & 0xffffcfff;
  }
  fence();
  _DAT_ram_18100014 = param_2;
  fence();
  _DAT_ram_1810001c = param_3;
  fence();
  _DAT_ram_18100020 = param_4;
  fence();
  _DAT_ram_18100018 = 0;
  return;
}


