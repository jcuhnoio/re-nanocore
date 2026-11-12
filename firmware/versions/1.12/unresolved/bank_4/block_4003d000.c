/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4003d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4003d07a.
 * REA evidence: ev_01ed204083adab99fe63aceff63f5bd0692c4effce3bf23e92e28fe453afbb2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d07a(undefined4 *param_1,undefined4 *param_2)

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
    iVar1 = FUN_ram_4003ca58(uVar6);
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
        FUN_ram_40038d5c(param_2[2],iVar7);
        uVar2 = FUN_ram_40038d2c(param_2[2]);
      } while (uVar5 < uVar2);
      FUN_ram_4003df56(s_freq__input__ram_4009d3e4,*param_1,uVar2);
      iVar7 = FUN_ram_40038bfe(param_2[2]);
      if ((iVar7 < 0) || (iVar7 = FUN_ram_40038ba4(param_2[2]), iVar7 < 0)) {
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
        FUN_ram_4003ca6c(iVar1,param_2[5]);
        FUN_ram_4003cafa(iVar1,0xffffffff);
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
        FUN_ram_4003ca9c(iVar1,*(char *)(param_2 + 4) == '\x01');
        FUN_ram_4003cab4(iVar1,*(char *)((int)param_2 + 0xf) == '\0');
        FUN_ram_4003cacc(iVar1,1);
        FUN_ram_4003cae4(iVar1);
        fence();
        fence();
        *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xff00ff00 | 0x200020;
        uVar4 = param_2[2];
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[4] = uVar4;
        uVar4 = 0;
        if (*(char *)(param_1 + 0x14) != '\0') {
          FUN_ram_4003cdfe(iVar1);
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x4003d288.
 * REA evidence: ev_89a4410b714712ce20ea105c92885e918f9ed2f8f09d02f31a7506c79e272898
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d288(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = FUN_ram_4003ca58(*param_1);
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
      FUN_ram_4003ca9c(iVar1,uVar4);
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


/* NanoCore 1.12, address 0x4003d328.
 * REA evidence: ev_23001953f9b18d6f9bbf1bb7b01804db2bb237366f6e6cc9eb5fcde44f3349a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d328(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint auStack_24 [3];
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4003ca58(*param_1);
    uVar3 = FUN_ram_40038d2c(param_1[4]);
    if (param_2 < 100000) {
      param_2 = 100000;
    }
    if (100000000 < param_2) {
      param_2 = 100000000;
    }
    if (*(char *)(param_1 + 0x14) == '\0') {
      iVar4 = FUN_ram_4003dfd4(uVar3,param_2,auStack_24);
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
    FUN_ram_4003df56(s_freq___bus___ram_4009d3f4,*param_1,uVar1);
    if (uVar1 == 0) {
      uVar1 = param_2;
    }
    param_1[5] = uVar1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003d42e.
 * REA evidence: ev_aab5f249a3337d5a373242d309ccdbc3e5daeeadef0c83b3f42ad29f9e954830
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d42e(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffea;
  }
  iVar1 = FUN_ram_4003ca58(*param_1);
  fence();
  uVar3 = *(uint *)(iVar1 + 0x38) & 0xcfffffff;
  if (param_2 == 2) {
    uVar2 = 0x10000000;
  }
  else {
    if (param_2 != 4) goto LAB_ram_4003d466;
    uVar2 = 0x20000000;
  }
  uVar3 = uVar3 | uVar2;
LAB_ram_4003d466:
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


/* NanoCore 1.12, address 0x4003d48c.
 * REA evidence: ev_741de5f56e0e7db49df29e879fbb4772b6c00646aff0426c749c317194bf5470
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d48c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    fence();
    if ((*(uint *)(param_1 + 0x14) & 0x1000) != 0) {
      return 0;
    }
    FUN_ram_4004004c(1);
    uVar1 = uVar1 + 1;
  } while (uVar1 <= param_2);
  FUN_ram_4003defe(param_1);
  return 0xffffff8c;
}


/* NanoCore 1.12, address 0x4003d4dc.
 * REA evidence: ev_0317e24c5b99db660f678414271c041ed9d65229a66b0c609000fbff7551bbcf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d4dc(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  for (; param_4 != 0; param_4 = param_4 - uVar3) {
    iVar2 = FUN_ram_4003cb84(param_1);
    while (uVar3 = 0x40 - iVar2, uVar3 < 9) {
      FUN_ram_4004004c(1);
      iVar2 = FUN_ram_4003cb84(param_1);
      uVar1 = uVar1 + 1;
      if (param_5 < uVar1) {
        return 0xffffff8c;
      }
    }
    if (param_4 <= uVar3) {
      uVar3 = param_4;
    }
    FUN_ram_4003cb92(param_1,param_2,uVar3);
    while (fence(), uVar3 != (*(uint *)(param_1 + 0x1c) & 0xff)) {
      uVar1 = uVar1 + 1;
      FUN_ram_4004004c(1);
      if (param_5 < uVar1) {
        return 0xffffff8c;
      }
    }
    FUN_ram_4003cbae(param_1,param_3,uVar3);
    param_2 = param_2 + uVar3;
    param_3 = param_3 + uVar3;
  }
  do {
    iVar2 = FUN_ram_4003cb84(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = uVar1 + 1;
    FUN_ram_4004004c(1);
  } while (uVar1 <= param_5);
  return 0xffffff8c;
}


/* NanoCore 1.12, address 0x4003d5ac.
 * REA evidence: ev_bad410c370e6ef70c2925d926ac04adbe54b213d135b9f9b443a56923d045461
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d5ac(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    while( true ) {
      if (param_3 == 0) {
        do {
          iVar3 = FUN_ram_4003cb84(param_1);
          if (iVar3 == 0) {
            return 0;
          }
          uVar2 = uVar2 + 1;
          FUN_ram_4004004c(1);
        } while (uVar2 <= param_4);
        return 0xffffff8c;
      }
      iVar3 = FUN_ram_4003cb84(param_1);
      uVar1 = 0x40 - iVar3;
      uVar2 = uVar2 + 1;
      if (uVar1 < 9) break;
      if (param_3 <= uVar1) {
        uVar1 = param_3;
      }
      FUN_ram_4003cb92(param_1,param_2,uVar1);
      param_2 = param_2 + uVar1;
      param_3 = param_3 - uVar1;
      FUN_ram_4004004c(1);
    }
    FUN_ram_4004004c(1);
  } while (uVar2 <= param_4);
  return 0xffffff8c;
}


/* NanoCore 1.12, address 0x4003d63e.
 * REA evidence: ev_43e9746b99b1701027f9544668c12b019230c813ef2c22173385f449e8ec5e78
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d63e(int param_1,int param_2,uint param_3,uint param_4)

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
      FUN_ram_4003cbae(param_1,param_2,uVar1);
      param_2 = param_2 + uVar1;
      param_3 = param_3 - uVar1;
      FUN_ram_4004004c(1);
    }
    FUN_ram_4004004c(1);
  } while (uVar2 <= param_4);
  return 0xffffff8c;
}


/* NanoCore 1.12, address 0x4003d6b4.
 * REA evidence: ev_9893d11773422bb16818b1a234972c51b3fed052b44b4a3bc1923fc746114182
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d6b4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = 0xffffffea;
    if (((param_2 != 0) && (*(int *)(param_1 + 0x34) == 0)) && (*(int *)(param_1 + 0x30) == 0)) {
      iVar2 = FUN_ram_4003ac8e(0xffffffea);
      if ((iVar2 == 0) || (iVar3 = FUN_ram_4003ac8e(), iVar3 == 0)) {
        uVar1 = 0xffffffed;
      }
      else {
        *(int *)(param_1 + 0x30) = iVar3;
        *(int *)(param_1 + 0x34) = iVar2;
        FUN_ram_4000303c(param_1 + 0x1c,param_2,0x14);
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


/* NanoCore 1.12, address 0x4003d716.
 * REA evidence: ev_ed504263edccdc2a67b0b6008ecc16d7237736cbfcc7017b659d0c5a672d2940
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003d716(undefined4 *param_1,int *param_2)

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
  iVar1 = FUN_ram_4003cd74(param_2);
  iVar2 = FUN_ram_4003ca58(*param_1);
  if (iVar1 != 0) {
    memset(&uStack_70,0,0x20);
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      return -0x16;
    }
    if (param_2[2] == 0) {
      return -0x16;
    }
    uVar3 = FUN_ram_4003df66(param_1[5]);
    FUN_ram_4003cae4(iVar2);
    if (*param_2 == 0) {
      iVar4 = 0;
      if (param_2[1] == 0) goto LAB_ram_4003d794;
      uVar7 = param_2[2];
      param_1[0x12] = 0;
      FUN_ram_4003cb10(iVar2);
      FUN_ram_4003cd12(iVar2,0,0,uVar7);
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
      iVar4 = FUN_ram_4003ac36(uVar5,&uStack_70);
      if (((iVar4 < 0) ||
          (iVar4 = FUN_ram_4003adcc(uVar5,param_2[1],iVar2 + 0x300,uVar7,2), iVar4 < 0)) ||
         (iVar4 = FUN_ram_4003afac(uVar5), iVar4 < 0)) goto LAB_ram_4003d794;
      FUN_ram_4003cbca(iVar2);
      iVar4 = FUN_ram_4003d48c(iVar2,uVar3);
      if (-1 < iVar4) {
        iVar4 = FUN_ram_4003cccc(uVar5,uVar3);
      }
      FUN_ram_4003cb24(iVar2);
    }
    else {
      if (param_2[1] != 0) {
        iVar1 = FUN_ram_4003ca58(*param_1);
        iVar4 = FUN_ram_4003cb66();
        if (iVar4 == 1) {
          param_1[0x12] = 7;
          FUN_ram_4003cb38(iVar1);
          FUN_ram_4003cb10(iVar1);
          FUN_ram_4003cd12(iVar1,param_2[2],param_2[2],0);
          FUN_ram_4003cacc(iVar1,0);
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
          iVar4 = FUN_ram_4003ac36(param_1[0xc],&iStack_50);
          if (((-1 < iVar4) &&
              (iVar4 = FUN_ram_4003adcc(param_1[0xc],iVar1 + 0x200,*param_2,param_2[2],1),
              -1 < iVar4)) && (iVar4 = FUN_ram_4003afac(param_1[0xc]), -1 < iVar4)) {
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
            iVar4 = FUN_ram_4003ac36(param_1[0xd],&iStack_50);
            if (((-1 < iVar4) &&
                (iVar4 = FUN_ram_4003adcc(param_1[0xd],param_2[1],iVar1 + 0x300,param_2[2],2),
                -1 < iVar4)) && (iVar4 = FUN_ram_4003afac(param_1[0xd]), -1 < iVar4)) {
              FUN_ram_4003cbca(iVar1);
              FUN_ram_4003d48c(iVar1,uVar3);
              iVar4 = FUN_ram_4003cccc(param_1[0xd],uVar3);
              FUN_ram_4003cacc(iVar1,1);
              FUN_ram_4003cb24(iVar1);
              FUN_ram_4003cb4e(iVar1);
              FUN_ram_4003abb4(param_1[0xd]);
              uVar5 = param_1[0xc];
              goto LAB_ram_4003d8ac;
            }
          }
        }
        iVar4 = -1;
        goto LAB_ram_4003d794;
      }
      uVar9 = param_2[2];
      iVar1 = FUN_ram_4003cb66(iVar2);
      uVar7 = uVar9;
      if (iVar1 != 1) {
        uVar7 = 0;
      }
      param_1[0x12] = 1;
      FUN_ram_4003cb38(iVar2);
      FUN_ram_4003cd12(iVar2,uVar9,uVar7,0);
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
      iVar4 = FUN_ram_4003ac36(uVar5,&uStack_70);
      if (((iVar4 < 0) ||
          (iVar4 = FUN_ram_4003adcc(uVar5,iVar2 + 0x200,*param_2,uVar9,1), iVar4 < 0)) ||
         (iVar4 = FUN_ram_4003afac(uVar5), iVar4 < 0)) goto LAB_ram_4003d794;
      FUN_ram_4003cbca(iVar2);
      iVar4 = FUN_ram_4003cccc(uVar5,uVar3);
      if (-1 < iVar4) {
        iVar4 = FUN_ram_4003d48c(iVar2,uVar3);
      }
      FUN_ram_4003cb4e(iVar2);
    }
LAB_ram_4003d8ac:
    FUN_ram_4003abb4(uVar5);
    goto LAB_ram_4003d794;
  }
  if (((*param_2 == 0) && (param_2[1] == 0)) || (param_2[2] == 0)) {
    return -0x16;
  }
  iVar1 = FUN_ram_4003df66(param_1[5]);
  iVar1 = iVar1 * 10;
  FUN_ram_4003cae4(iVar2);
  if (*param_2 == 0) {
    if (param_2[1] != 0) {
      iVar4 = param_2[2];
      param_1[0x12] = 0;
      FUN_ram_4003cd12(iVar2,0,0,iVar4);
      FUN_ram_4003cbca(iVar2);
      iVar4 = FUN_ram_4003d63e(iVar2,param_2[1],iVar4,iVar1);
      goto LAB_ram_4003da66;
    }
LAB_ram_4003da6c:
    iVar4 = FUN_ram_4003d48c(iVar2,iVar1);
  }
  else if (param_2[1] == 0) {
    iVar8 = param_2[2];
    iVar6 = FUN_ram_4003cb66(iVar2);
    iVar4 = iVar8;
    if (iVar6 != 1) {
      iVar4 = 0;
    }
    param_1[0x12] = 1;
    FUN_ram_4003cd12(iVar2,iVar8,iVar4,0);
    FUN_ram_4003cbca(iVar2);
    iVar4 = FUN_ram_4003d5ac(iVar2,*param_2,iVar8,iVar1);
LAB_ram_4003da66:
    if (-1 < iVar4) goto LAB_ram_4003da6c;
  }
  else {
    iVar6 = FUN_ram_4003cb66(iVar2);
    iVar4 = 0;
    if (iVar6 == 1) {
      iVar4 = param_2[2];
      param_1[0x12] = 6;
      FUN_ram_4003cd12(iVar2,iVar4,iVar4,0);
      FUN_ram_4003cacc(iVar2,0);
      FUN_ram_4003cbca(iVar2);
      iVar4 = FUN_ram_4003d4dc(iVar2,*param_2,param_2[1],param_2[2],iVar1);
      goto LAB_ram_4003da66;
    }
  }
  FUN_ram_4003cacc(iVar2,1);
LAB_ram_4003d794:
  FUN_ram_4003cda0(iVar2);
  return iVar4;
}


/* NanoCore 1.12, address 0x4003dae2.
 * REA evidence: ev_dd76535b857e9c1b5640533e0038a59ca796b4c831f77139d2c55b43fc29a7ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003dae2(int param_1,int param_2,undefined4 param_3)

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


/* NanoCore 1.12, address 0x4003daf2.
 * REA evidence: ev_9153beb695e2042e257f58f2d1548c2450c16f9f028f66d997a116cb44dafa5b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003daf2(undefined4 *param_1,int *param_2)

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
  iVar1 = FUN_ram_4003cd74(param_2);
  iVar2 = FUN_ram_4003ca58(*param_1);
  if (iVar1 != 0) {
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      return -0x16;
    }
    if (param_2[2] == 0) {
      return -0x16;
    }
    FUN_ram_4003cae4(iVar2);
    FUN_ram_4003cafa(iVar2,0x1700);
    iVar1 = *param_2;
    param_1[3] = 1;
    if (iVar1 == 0) {
      if (param_2[1] == 0) goto LAB_ram_4003dbf4;
      iVar7 = param_2[2];
      FUN_ram_4003cb10(iVar2);
      param_1[0x12] = 4;
      param_1[0x13] = 0x30000;
      FUN_ram_4003cd12(iVar2,0,0,iVar7);
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
      iVar1 = FUN_ram_4003ac36(uVar6,&uStack_40);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_ram_4003ac26(uVar6,&LAB_ram_4003cc38,param_1);
      iVar1 = param_2[1];
      uVar4 = 2;
    }
    else {
      iVar7 = param_2[2];
      iVar3 = FUN_ram_4003cb66(iVar2);
      iVar1 = iVar7;
      if (iVar3 != 1) {
        iVar1 = 0;
      }
      FUN_ram_4003cb38(iVar2);
      param_1[0x12] = 5;
      param_1[0x13] = 0x30000;
      FUN_ram_4003cd12(iVar2,iVar7,iVar1,0);
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
      iVar3 = FUN_ram_4003ac36(uVar6,&uStack_40);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_ram_4003ac26(uVar6,&LAB_ram_4003cc82,param_1);
      iVar3 = *param_2;
      uVar4 = 1;
    }
    iVar1 = FUN_ram_4003adcc(uVar6,iVar1,iVar3,iVar7,uVar4);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4003afac(uVar6);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_ram_4003cbca(iVar2);
LAB_ram_4003dbf4:
    fence();
    fence();
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x1700;
    return 0;
  }
  if (((*param_2 == 0) && (param_2[1] == 0)) || (param_2[2] == 0)) {
    return -0x16;
  }
  FUN_ram_4003cae4(iVar2);
  FUN_ram_4003cafa(iVar2,0x1711);
  iVar1 = *param_2;
  param_1[3] = 1;
  if (iVar1 == 0) {
    iVar1 = param_2[1];
    if (iVar1 == 0) goto LAB_ram_4003dd02;
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
    iVar7 = FUN_ram_4003cb66(iVar2);
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
  FUN_ram_4003cd12(iVar2,iVar3,iVar1,iVar7);
  FUN_ram_4003cbca(iVar2);
LAB_ram_4003dd02:
  fence();
  fence();
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x1711;
  return 0;
}


/* NanoCore 1.12, address 0x4003dd42.
 * REA evidence: ev_8e83ff8fccfc273996a12ec0277e7333b07d3e9bf3e786311bfcf763415cc7b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003dd42(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4003ca58(*param_1);
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
      iVar3 = FUN_ram_4003cb84(iVar2);
      uVar5 = param_1[0x10];
      if (0x40U - iVar3 < (uint)param_1[0x10]) {
        uVar5 = 0x40U - iVar3;
      }
      FUN_ram_4003cb92(iVar2,param_1[0xe],uVar5);
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
      FUN_ram_4003cbae(iVar2,param_1[0xf],uVar5);
      param_1[0xf] = param_1[0xf] + uVar5;
      param_1[0x11] = param_1[0x11] - uVar5;
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar5 = 0;
      if (param_1[3] != 1) {
        uVar5 = param_1[3] & 0xfffffffe;
      }
      param_1[3] = uVar5;
      FUN_ram_4003cafa(iVar2,0xffffffff);
      uVar5 = param_1[3];
      param_1[0xf] = 0;
      param_1[3] = uVar5 | 0x10000;
      param_1[0x11] = 0;
      param_1[0xe] = 0;
      param_1[0x10] = 0;
      if (param_1[0x13] == ((uVar5 | 0x10000) & param_1[0x13])) {
        if (param_1[0x12] == 5) {
          FUN_ram_4003abb4(param_1[0xc]);
        }
        if (param_1[0x12] == 4) {
          FUN_ram_4003abb4(param_1[0xd]);
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


/* NanoCore 1.12, address 0x4003defe.
 * REA evidence: ev_127384fb6d0b06b72327d536538b06bacd9eb1c750588e845450e3fd5a0658bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003defe(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((uVar1 & 3) == 0) {
      FUN_ram_4003390a(s_0x_lX___ram_4009d404,param_1);
    }
    uVar1 = uVar1 + 1;
    FUN_ram_4003390a(s__08X_ram_4009d410,*param_1);
    param_1 = param_1 + 1;
  } while (uVar1 != 0x28);
  FUN_ram_40033924(10);
  return;
}


/* NanoCore 1.12, address 0x4003df56.
 * REA evidence: ev_6c6e7984bb8552127e75ce06547ecc02ad3ad64ffcff4436d4bcdce114b808f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003df56(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_4003390a(s_qspi_d__s___dHz_ram_4009d418,param_2,param_1,param_3);
  return;
}


/* NanoCore 1.12, address 0x4003df66.
 * REA evidence: ev_213e5a6d1a334c4954497fb4781c8680a636505e227a1f4aa644ffc7ae159131
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003df66(uint param_1,uint param_2)

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


/* NanoCore 1.12, address 0x4003dfd4.
 * REA evidence: ev_97a2e51f3930924bf9d35dbf1851116a2e306f996df3575aa6d0441d466dde50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003dfd4(uint param_1,uint param_2,uint *param_3)

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
  if (param_2 == param_1) goto LAB_ram_4003e00e;
  if (param_2 != uVar1) {
    if ((uVar1 < param_2) && (param_1 < param_2)) {
      if (param_1 < uVar1) goto LAB_ram_4003e024;
    }
    else if (uVar1 < param_1) goto LAB_ram_4003e024;
LAB_ram_4003e00e:
    *param_3 = uVar2;
    return 0;
  }
LAB_ram_4003e024:
  *param_3 = uVar3;
  return 1;
}


