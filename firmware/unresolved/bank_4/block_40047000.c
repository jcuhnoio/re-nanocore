/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40047000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40047012.
 * REA evidence: ev_065f67ec899244005783e7f4f5a8e26d0778497dadddd3dc8a5b3a1470f79e21
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40047012(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = FUN_ram_40046afe(param_1,param_2,0x5f);
  if (2 < bVar2) {
    uVar1 = 0xff;
    if (bVar2 < 0xfd) {
      uVar1 = (uint)bVar2 * 0xff >> 8;
    }
    if (param_2 == 0) {
      param_1 = FUN_ram_40047b04(param_1);
    }
    for (; param_1 != 0; param_1 = FUN_ram_40047b04(param_1)) {
      bVar2 = FUN_ram_40046afe(param_1,0,0x5f);
      if (bVar2 < 3) {
        return 0;
      }
      if (bVar2 < 0xfd) {
        uVar1 = bVar2 * uVar1 >> 8;
      }
    }
    if (2 < uVar1) {
      if (0xfc < uVar1) {
        return 0xff;
      }
      return uVar1;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x400470b6.
 * REA evidence: ev_b215b01105675db7ca56c4b35735a9a594b271613ea286081fac84060731d2b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400470b6(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40046afe(param_1,0,0x6e);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_40046afe(param_1,0,0x6c);
    if (iVar3 == 0x100) {
      iVar3 = FUN_ram_40046afe(param_1,0,0x6d);
      if (iVar3 == 0x100) {
        iVar3 = FUN_ram_40046afe(param_1,0,0x71);
        if (iVar3 == 0) {
          iVar3 = FUN_ram_40046afe(param_1,0,0x72);
          if (iVar3 == 0) {
            cVar2 = FUN_ram_40046afe(param_1,0,0x60);
            if (cVar2 == -1) {
              iVar3 = FUN_ram_40046afe(param_1,0,0x73);
              if (iVar3 == 0) {
                cVar2 = FUN_ram_40046afe(param_1,0,0x67);
                uVar1 = (uint)(cVar2 != '\0');
                goto LAB_ram_400470d0;
              }
            }
            uVar1 = 1;
            goto LAB_ram_400470d0;
          }
        }
      }
    }
  }
  uVar1 = 2;
LAB_ram_400470d0:
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    if (uVar1 != 0) {
      FUN_ram_40043102(param_1);
      *(ushort *)(*(int *)(param_1 + 8) + 0x2a) =
           (ushort)(uVar1 << 10) | *(ushort *)(*(int *)(param_1 + 8) + 0x2a) & 0xf3ff;
    }
  }
  else {
    *(ushort *)(iVar3 + 0x2a) = (ushort)(uVar1 << 10) | *(ushort *)(iVar3 + 0x2a) & 0xf3ff;
  }
  return;
}


/* NanoCore 1.10, address 0x400471a2.
 * REA evidence: ev_e56f2afa6531facfb05c1cdf9d0ed3adf874a87f841f694d36831e6110c5b834
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400471a2(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (DAT_ram_3007f904 == '\0') {
    return;
  }
  FUN_ram_40044572();
  param_2 = param_2 & 0xff0000;
  uVar1 = FUN_ram_4004af56(param_3);
  uVar1 = uVar1 & 4;
  uVar2 = FUN_ram_4004af56(param_3);
  uVar3 = FUN_ram_4004af56(param_3);
  uVar4 = FUN_ram_4004af56(param_3);
  if (uVar1 != 0) {
    if ((param_2 != 0xf0000) && (param_2 != 0)) {
      iVar5 = FUN_ram_40046afe(param_1,0,2);
      if (iVar5 != 0x200007d1) {
        iVar5 = FUN_ram_40046afe(param_1,0,1);
        if (iVar5 != 0x200007d1) goto LAB_ram_4004727a;
      }
    }
    FUN_ram_40043bde(param_1,0x2d,0);
    FUN_ram_4004408a(param_1);
  }
  if ((param_2 == 0xf0000) || (param_2 == 0)) {
    if (((param_3 == 0xff) || (uVar1 != 0)) && (iVar5 = FUN_ram_40047b04(param_1), iVar5 != 0)) {
      FUN_ram_4004408a();
    }
    if (((param_2 == 0xf0000) || (param_2 == 0)) && ((uVar4 & 0x10) != 0)) {
      FUN_ram_400470b6(param_1);
    }
  }
LAB_ram_4004727a:
  if ((param_3 == 0xff) || ((uVar2 & 2) != 0)) {
    FUN_ram_40043a8a(param_1);
  }
  FUN_ram_40044572(param_1);
  if (((param_3 == 0xff) || (((uVar3 & 1) != 0 && ((uVar2 & 2) != 0 || uVar1 != 0)))) &&
     (param_2 != 0x10000)) {
    FUN_ram_4004665a(param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400472e2.
 * REA evidence: ev_cba5b79d8f1c1f4655143b54fab57aaf0e89dfe4f616a2ba273e5f165de0673e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400472e2(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  
  uVar1 = param_3 & 0xff0000;
  cVar8 = -1;
  if (((param_2 != 0) && (cVar8 = -(*(char *)(param_2 + 8) != '\0'), uVar1 == 0)) &&
     (iVar2 = FUN_ram_40046a86(param_2), iVar2 != 0)) {
    FUN_ram_40044572(param_1);
  }
  bVar5 = false;
  uVar9 = 0;
  while (uVar9 < (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14) {
    iVar2 = uVar9 * 8;
    uVar7 = *(uint *)(*(int *)(param_1 + 0xc) + iVar2 + 4);
    if (((((param_3 & 0xffff) == 0xffff) || ((uVar7 & 0xffff) == (param_3 & 0xffff))) &&
        ((uVar1 == 0xf0000 || (uVar1 == (uVar7 & 0xff0000))))) &&
       ((param_2 == 0 || (*(int *)(*(int *)(param_1 + 0xc) + iVar2) == param_2)))) {
      if ((uVar7 & 0x2000000) != 0) {
        FUN_ram_400468d0(param_1,uVar1,0xff,0);
      }
      uVar7 = uVar9;
      if ((*(uint *)(*(int *)(param_1 + 0xc) + iVar2 + 4) & 0x3000000) != 0) {
        if (*(int *)(*(int *)(param_1 + 0xc) + iVar2) != 0) {
          FUN_ram_4004ace4();
        }
        FUN_ram_40059be4(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2));
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2) = 0;
      }
      while( true ) {
        iVar2 = *(int *)(param_1 + 0xc);
        uVar4 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
        if (uVar4 - 1 <= uVar7) break;
        uVar7 = uVar7 + 1;
        iVar6 = iVar2 + uVar7 * 8;
        *(undefined4 *)(iVar6 + -8) = *(undefined4 *)(iVar2 + uVar7 * 8);
        *(undefined4 *)(iVar6 + -4) = *(undefined4 *)(iVar6 + 4);
      }
      uVar7 = uVar4 + 0x3f & 0x3f;
      *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar7 << 4);
      uVar3 = FUN_ram_40059bf6(iVar2,uVar7 << 3);
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      bVar5 = true;
    }
    else {
      uVar9 = uVar9 + 1;
    }
  }
  if ((bVar5) && (cVar8 != '\0')) {
    FUN_ram_400471a2(param_1,uVar1,0xff);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40047464.
 * REA evidence: ev_786b0dc1d9533be96f1423c4c71ca8e6ad21ab65022d079114f6fe01bd760620
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047464(undefined4 param_1)

{
  FUN_ram_400472e2(param_1,0,0xfffff);
  return;
}


/* NanoCore 1.10, address 0x40047470.
 * REA evidence: ev_44256e3854614be216c3b9e3f2198c5192cac85eaf9c9e977b712e21883f9638
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047470(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  param_1 = (int *)*param_1;
  iVar2 = *param_1;
  iVar4 = param_1[1];
  for (piVar3 = (int *)FUN_ram_4004a5a6(0x3007f8f8); piVar3 != (int *)0x0;
      piVar3 = (int *)FUN_ram_4004a5b2(0x3007f8f8,piVar3)) {
    if ((((piVar3 != param_1) && (*piVar3 == *param_1)) && (piVar3[2] == param_1[2])) &&
       ((char)piVar3[1] == (char)param_1[1])) {
      return;
    }
  }
  uVar6 = 0;
  while( true ) {
    if ((*(uint *)(iVar2 + 0x28) & 0x3ffffff) >> 0x14 <= uVar6) {
      return;
    }
    iVar7 = uVar6 * 8;
    uVar5 = *(uint *)(*(int *)(iVar2 + 0xc) + iVar7 + 4);
    if (((uVar5 & 0x2000000) != 0) && ((uVar5 & 0xffffff) == param_1[2])) break;
    uVar6 = uVar6 + 1;
  }
  FUN_ram_4004a4e8(0x3007f8f8,param_1);
  FUN_ram_40059be4(param_1);
  iVar1 = *(int *)(iVar2 + 0xc);
  FUN_ram_4004ad0e(*(undefined4 *)(iVar1 + iVar7),(char)iVar4);
  iVar4 = FUN_ram_4004af4c(*(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar7));
  if (iVar4 == 0) {
    return;
  }
  FUN_ram_400472e2(iVar2,*(undefined4 *)(iVar1 + iVar7),*(uint *)(iVar1 + iVar7 + 4) & 0xffffff);
  return;
}


/* NanoCore 1.10, address 0x40047554.
 * REA evidence: ev_14eeb7f3e90089b925a05395836498c75d3522dee112fb7d9c6702b5d239a289
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047554(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
  uVar6 = 0;
  do {
    if (uVar3 <= uVar6) {
      uVar3 = uVar3 + 1 & 0x3f;
      *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar3 << 4);
      iVar1 = FUN_ram_40059bf6(*(int *)(param_1 + 0xc),uVar3 << 3);
      *(int *)(param_1 + 0xc) = iVar1;
      uVar3 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
      while( true ) {
        uVar3 = uVar3 - 1;
        iVar7 = uVar3 * 8;
        if ((uVar3 == 0) || ((*(uint *)(iVar1 + iVar7 + -4) & 0x3000000) != 0)) break;
        *(undefined4 *)(iVar1 + uVar3 * 8) = *(undefined4 *)(iVar1 + -8 + uVar3 * 8);
        *(undefined4 *)(iVar1 + iVar7 + 4) = *(undefined4 *)(iVar7 + iVar1 + -8 + 4);
      }
      thunk_FUN_ram_4000505c(iVar1 + iVar7,0,8);
      iVar8 = *(int *)(param_1 + 0xc);
      uVar2 = FUN_ram_40059bae(0xc);
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar8 + uVar3 * 8) = uVar2;
      FUN_ram_4004acdc(*(undefined4 *)(iVar1 + uVar3 * 8));
      iVar1 = *(int *)(param_1 + 0xc);
      iVar7 = iVar7 + iVar1;
      *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) & 0xff000000 | 0x1000000 | param_4 & 0xffffff;
      uVar2 = *(undefined4 *)(iVar1 + uVar3 * 8);
LAB_ram_40047614:
      if ((param_4 == 0) && (uVar3 = FUN_ram_4004af56(param_2), (uVar3 & 0x20) != 0)) {
        FUN_ram_40044572(param_1);
      }
      FUN_ram_4004adb0(uVar2,param_2,param_3);
      FUN_ram_400471a2(param_1,param_4,param_2);
      return;
    }
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 8);
    uVar5 = puVar4[1];
    if (((uVar5 & 0x1000000) != 0) && (param_4 == (uVar5 & 0xffffff))) {
      uVar2 = *puVar4;
      goto LAB_ram_40047614;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}


/* NanoCore 1.10, address 0x40047672.
 * REA evidence: ev_fbd1f24dd9fba310dd4aa6ef3516ba575616de7c8595648b71c506eaa0e451d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047672(int *param_1,int param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uStack_28;
  uint auStack_24 [4];
  
  iVar4 = *param_1;
  uVar7 = 0;
  while( true ) {
    if ((*(uint *)(iVar4 + 0x28) & 0x3ffffff) >> 0x14 <= uVar7) {
      return;
    }
    puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + uVar7 * 8);
    uVar6 = puVar10[1];
    if (((uVar6 & 0x2000000) != 0) && ((uVar6 & 0xffffff) == param_1[2])) break;
    uVar7 = uVar7 + 1;
  }
  uVar6 = (uint)*(byte *)(param_1 + 1);
  if (uVar6 == 0x61) {
    uVar8 = param_1[3];
    uVar9 = param_1[4];
    uStack_28 = uVar9;
    if (((uVar8 != 0) && (uStack_28 = uVar8, uVar9 != 0)) && (uStack_28 = uVar9, param_2 < 0x80)) {
      uStack_28 = uVar8;
    }
    goto LAB_ram_4004777e;
  }
  if (uVar6 < 0x62) {
    if (uVar6 < 0x3a) {
      if (0x1b < uVar6) {
        uVar8 = 1 << (uVar6 - 0x1c & 0x1f);
        if ((uVar8 & 0x20200081) != 0) {
LAB_ram_40047726:
          if (param_2 < 1) {
            uVar3 = (undefined2)param_1[3];
            uVar1 = *(undefined1 *)((int)param_1 + 0xe);
          }
          else {
            if (param_2 < 0xff) {
              iVar5 = 0xff - param_2;
              uStack_28 = (uint)CONCAT21(CONCAT11((char)(((uint)*(byte *)((int)param_1 + 0xe) *
                                                          iVar5 + (uint)*(byte *)((int)param_1 +
                                                                                 0x12) * param_2) *
                                                         0x10102 >> 0x18),
                                                  (char)(((uint)*(byte *)((int)param_1 + 0xd) *
                                                          iVar5 + (uint)*(byte *)((int)param_1 +
                                                                                 0x11) * param_2) *
                                                         0x10102 >> 0x18)),
                                         (char)(((uint)*(byte *)(param_1 + 3) * iVar5 +
                                                (uint)*(byte *)(param_1 + 4) * param_2) * 0x8081 >>
                                               0x17));
              goto LAB_ram_4004777e;
            }
            uVar3 = (undefined2)param_1[4];
            uVar1 = *(undefined1 *)((int)param_1 + 0x12);
          }
          uStack_28 = (uint)CONCAT12(uVar1,uVar3);
          goto LAB_ram_4004777e;
        }
        if ((uVar8 & 0x3000000) != 0) goto LAB_ram_400476f2;
      }
    }
    else {
      if (0x58 < uVar6) {
        uVar8 = 0x5a;
        goto LAB_ram_40047740;
      }
      if ((0x3c < uVar6) && ((1 << (uVar6 - 0x3d & 0x1f) & 0x8000101U) != 0)) goto LAB_ram_40047726;
    }
LAB_ram_40047744:
    if (param_2 == 0) {
LAB_ram_400476fa:
      uStack_28 = param_1[3];
      goto LAB_ram_4004777e;
    }
    if (param_2 != 0xff) {
      uStack_28 = ((param_1[4] - param_1[3]) * param_2 >> 8) + param_1[3];
      goto LAB_ram_4004777e;
    }
  }
  else {
    if (uVar6 != 0x66) {
      uVar8 = 0x67;
LAB_ram_40047740:
      if (uVar6 != uVar8) goto LAB_ram_40047744;
    }
LAB_ram_400476f2:
    if (param_2 < 0xff) goto LAB_ram_400476fa;
  }
  uStack_28 = param_1[4];
LAB_ram_4004777e:
  auStack_24[0] = 0;
  iVar5 = FUN_ram_4004ae6c(*puVar10,uVar6,auStack_24);
  bVar2 = true;
  if ((iVar5 != 0) && (uStack_28 == auStack_24[0])) {
    bVar2 = (auStack_24[0] & 0xffffff) != (uStack_28 & 0xffffff);
  }
  FUN_ram_4004adb0(*(undefined4 *)(*(int *)(iVar4 + 0xc) + uVar7 * 8),(char)param_1[1],uStack_28);
  if (!bVar2) {
    return;
  }
  FUN_ram_400471a2(*param_1,param_1[2],(char)param_1[1]);
  return;
}


/* NanoCore 1.10, address 0x4004787c.
 * REA evidence: ev_826a39f5c27997732843672d6e58e6938cfc5d1a1dd20090404a925b748b8063
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004787c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,1,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x4004788a.
 * REA evidence: ev_08e0f7ed0ac4f2dbfefe15602212d4312936501400dede13eda2ae10113f3b16
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004788a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,5,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047898.
 * REA evidence: ev_cc1c2e51c7038261dd64002c158c96a5b29f5f147c6706374c2b1caf22350f13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047898(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,2,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400478a6.
 * REA evidence: ev_2bedac144ddba191ffe751b0737228777326715318ff9bdbf6350db16b09a54f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400478a6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,8,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400478b4.
 * REA evidence: ev_345c3b0494f8f7d5852c64b010489d6e82348ddbe70f9a545873446ca2c2f8dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400478b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,9,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400478c2.
 * REA evidence: ev_443b481771b72516907aacdba3fda8c111645f034a4278929265842d7a490929
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400478c2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,10,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400478d0.
 * REA evidence: ev_325d78ec6a5d1f6277140920bf55beab23f714aac25856e2627c0999b3d50613
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400478d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x68,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400478e0.
 * REA evidence: ev_d093c005c66f1f0d7e71bc97fb73c1513bed40c9724c3c8ce00a55d201856b5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400478e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x69,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400478f0.
 * REA evidence: ev_6a4d4ee326db5cb65f5a0a7050460e332de6454ea51990f5d58508a89361cede
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400478f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x6c,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047900.
 * REA evidence: ev_34dca26e28c6770273e23ccbe663dcd9715bf74ab218944e880ab373648b67a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047900(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x6d,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047910.
 * REA evidence: ev_d7836d7a72ca06169183fa4fb23ea8c999a5878fa424905d9683cc91dcc892e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x6f,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047920.
 * REA evidence: ev_acfa517b625495e8ef3428f70457007b7dbbd07002439144b5ee82d2a98fe824
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x70,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047930.
 * REA evidence: ev_0ff769350c167f90e2093ae8b577ad6b4b2a522740d68f65be15d87c86533344
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x10,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x4004793e.
 * REA evidence: ev_238030ccf2cac6c6e1338eeeb636aec5aac270435d6314c77a7685d7f48fa177
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004793e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x11,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x4004794c.
 * REA evidence: ev_f37c27b12b0b2cbe9160d1a639ba66b14913be7822ebe22cbe23e435ba990349
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004794c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x12,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x4004795a.
 * REA evidence: ev_041823110bba089f41859c4fe48d10fc17724f302d8a65634906e1bead5c432d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004795a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x13,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047968.
 * REA evidence: ev_17ad2735340d9fa9c538872ee5e4f5529efd8c87cead50e74ea6f590c79c986f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047968(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_40047554(param_1,0x1c,uStack_4,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047986.
 * REA evidence: ev_3336a7b8cdbab6397ab5e45c8aedafc5111a45c823b21855ebe19c55d0211f5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047986(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x1d,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047994.
 * REA evidence: ev_24ce3d6878a6d835546a2363419a5f76e32844805c5e60a08e244f9ea6dc67e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047994(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_40047554(param_1,0x31,uStack_4,param_3);
  return;
}


/* NanoCore 1.10, address 0x400479b4.
 * REA evidence: ev_701629ba4b3e8b4f6f1885276d9fcb20ff289b6339a9a715837de6ff6a52338d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400479b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x32,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400479c4.
 * REA evidence: ev_a12a5811cca5b5408f4aa90683fd9fb8bfe4d6775ebcdf23f8fe900cd6bc47a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400479c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x30,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400479d4.
 * REA evidence: ev_4438d2177da6455fd8942084d50b03422b9357014b230c6083daa235605c24b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400479d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x38,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400479e4.
 * REA evidence: ev_b02b058197a25034ba68ebecf29f87ebd3e071fa337e61c0bf9bf5c55a615103
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400479e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x3c,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x400479f4.
 * REA evidence: ev_f161535067d60cf4dad17dbe0a87de2bd8478c57baaaf5ac9d9c07a9cd7e3a20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400479f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x41,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047a04.
 * REA evidence: ev_ef8f2831c1be9960560a60998bdde0b6632c8a4ed6cd120a6b2e6dfb16fe6f34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a04(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_40047554(param_1,0x3d,uStack_4,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047a24.
 * REA evidence: ev_b75de00bf15ce243923b4a089a1aee24c848245a9271cf1fa72b1c676704cd20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x3e,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047a34.
 * REA evidence: ev_a52544a3d76f596ebe5b7809978482c2177414d085bb1c0d2559ab6713a1cad4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x44,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047a44.
 * REA evidence: ev_02fd5689ae783ef21b554ba033ade74e52db60286df74093bd9b5e93e54c437c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a44(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_40047554(param_1,0x58,uStack_4,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047a64.
 * REA evidence: ev_109b1e669fdf0c878f81ebc532c89fedc5f761cc2a88f8b3b458e09d480f96eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x59,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047a74.
 * REA evidence: ev_4668993c93b1eb06e585adf02236fe1e16cf6985ce75f2d786b3e7c74def5c00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x5a,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047a84.
 * REA evidence: ev_3d73953141ee054819d339439ecca05b144f759aa7811502378bab58f35072e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a84(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0x5e,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047a94.
 * REA evidence: ev_3586a0c896d3935a50bb05ea2b2c60ed655a75be68e1408a870fe557caca76ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40047554(param_1,0xc,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x40047aa2.
 * REA evidence: ev_a0d0440bdf687a85cd055d4ce36863b3ec6b78b2ba1f625e36a631b04d6c6ed8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047aa2(int param_1)

{
  do {
    if (param_1 == 0) {
      return;
    }
    param_1 = *(int *)(param_1 + 4);
  } while (param_1 != 0);
  return;
}


/* NanoCore 1.10, address 0x40047aae.
 * REA evidence: ev_929016cba06ce68d75968f0b2a9c0098d9d9e4b309cd1580736ef73d79503252
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047aae(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    param_1 = FUN_ram_40047aa2();
  }
  iVar1 = FUN_ram_4004a5a6(0x3007f8e4);
  do {
    if (iVar1 == 0) {
      return;
    }
    for (iVar2 = 0; *(int *)(iVar1 + 0x2d0) != iVar2; iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(iVar1 + 0x2b4) + iVar2 * 4) == param_1) {
        return;
      }
    }
    iVar1 = FUN_ram_4004a5b2(0x3007f8e4,iVar1);
  } while( true );
}


/* NanoCore 1.10, address 0x40047b04.
 * REA evidence: ev_b4536f407fdecfdfcf20092c13779eccdbc44796d4b1fe0b32442080c87240bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40047b04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40047b0a.
 * REA evidence: ev_ffac16f2d2b0639bc35823749f3f81ae61dc605f923743c5687c5db2b4d87e4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40047b0a(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) &&
     (((-1 < (int)param_2 || (param_2 = param_2 + *(ushort *)(piVar1 + 10), -1 < (int)param_2)) &&
      (param_2 < *(ushort *)(piVar1 + 10))))) {
    return *(undefined4 *)(*piVar1 + param_2 * 4);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40047b2c.
 * REA evidence: ev_097bbdf6acd963a9c68d1a496dd378c1e56fca611a226608d97746672c4f8f6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_40047b2c(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined2 *)(*(int *)(param_1 + 8) + 0x28);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40047b3a.
 * REA evidence: ev_041f22e55984c5d4254f0080192bfe0a9709dbffdd2eedc3cfdc094146de731d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40047b3a(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      return -1;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 4) + 8);
    for (iVar2 = 0; iVar2 < (int)(uint)*(ushort *)(piVar1 + 10); iVar2 = iVar2 + 1) {
      if (*(int *)(*piVar1 + iVar2 * 4) == param_1) {
        return iVar2;
      }
    }
  }
  return -1;
}


/* NanoCore 1.10, address 0x40047b62.
 * REA evidence: ev_5c31822c9007aec496b8793d85bd993df68222ca6804f784676be28a3cde11b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047b62(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(ushort *)(param_1 + 0x2a) & 0x1000) != 0) {
    return;
  }
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x1000;
  iVar2 = FUN_ram_40043bde(param_1,0x24,0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_ram_40049f18(*(int *)(param_1 + 8) + 8);
    }
    while (iVar2 = FUN_ram_40047b0a(param_1,0), iVar2 != 0) {
      FUN_ram_40047b62();
    }
    iVar3 = FUN_ram_40042c3c(param_1);
    for (iVar2 = FUN_ram_40055d40(0); iVar2 != 0; iVar2 = FUN_ram_40055d40(iVar2)) {
      uVar7 = FUN_ram_40055d5e(iVar2);
      if ((uVar7 & 0xfffffffd) == 1) {
        if (((param_1 == *(int *)(iVar2 + 0x70)) || (param_1 == *(int *)(iVar2 + 0x74))) ||
           (param_1 == *(int *)(iVar2 + 0x78))) {
          FUN_ram_40055d9e(iVar2);
          FUN_ram_40055eb8(iVar2,param_1);
        }
        if (param_1 == *(int *)(iVar2 + 0x7c)) {
          *(undefined4 *)(iVar2 + 0x7c) = 0;
        }
      }
      if ((iVar3 == *(int *)(iVar2 + 0xac)) && (iVar5 = FUN_ram_40055dae(), param_1 == iVar5)) {
        FUN_ram_40055d9e(iVar2);
        FUN_ram_40055eb8(iVar2,param_1);
      }
    }
    do {
      iVar2 = FUN_ram_40049d20(&LAB_ram_40047d78,param_1);
    } while (iVar2 == 1);
    FUN_ram_40043248(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = FUN_ram_40047aae();
      iVar3 = *(int *)(iVar2 + 0x2b4);
      for (uVar7 = 0;
          (uVar7 != *(uint *)(iVar2 + 0x2d0) && (param_1 != *(int *)(iVar3 + uVar7 * 4)));
          uVar7 = uVar7 + 1) {
      }
      uVar6 = *(uint *)(iVar2 + 0x2d0) - 1;
      while (uVar7 < uVar6) {
        uVar7 = uVar7 + 1;
        *(undefined4 *)(iVar3 + -4 + uVar7 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
      }
      *(uint *)(iVar2 + 0x2d0) = uVar6;
      uVar4 = FUN_ram_40059bf6(iVar3,uVar6 * 4);
      *(undefined4 *)(iVar2 + 0x2b4) = uVar4;
    }
    else {
      uVar7 = FUN_ram_40047b3a(param_1);
      while( true ) {
        piVar1 = *(int **)(*(int *)(param_1 + 4) + 8);
        iVar2 = *piVar1;
        uVar6 = *(ushort *)(piVar1 + 10) - 1;
        if ((int)uVar6 <= (int)(uVar7 & 0xffff)) break;
        uVar7 = (uVar7 & 0xffff) + 1;
        *(undefined4 *)(iVar2 + uVar7 * 4 + -4) = *(undefined4 *)(iVar2 + uVar7 * 4);
      }
      *(short *)(piVar1 + 10) = (short)(uVar6 * 0x10000 >> 0x10);
      iVar2 = FUN_ram_40059bf6(iVar2,(uVar6 & 0xffff) << 2);
      *piVar1 = iVar2;
    }
    FUN_ram_40059be4(param_1);
    return;
  }
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xefff;
  return;
}


/* NanoCore 1.10, address 0x40047cf2.
 * REA evidence: ev_943570d8a7222a73e486154cf409d49abfabb19c9614aae97b5aa29d3a03c5a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047cf2(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if ((*(ushort *)(param_1 + 0x2a) & 0x1000) != 0) {
    return;
  }
  FUN_ram_40044572();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    iVar2 = FUN_ram_40047aae(param_1);
    if (iVar2 == 0) {
      return;
    }
    bVar1 = *(int *)(iVar2 + 0x2b8) == param_1;
  }
  else {
    bVar1 = false;
    iVar2 = 0;
  }
  FUN_ram_40047b62(param_1);
  if ((iVar3 != 0) && ((*(ushort *)(iVar3 + 0x2a) & 0x1000) == 0)) {
    FUN_ram_4004656a(iVar3);
    FUN_ram_40043bde(iVar3,0x25,0);
    FUN_ram_40043bde(iVar3,0x27,0);
  }
  if (bVar1) {
    *(undefined4 *)(iVar2 + 0x2b8) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40047d7c.
 * REA evidence: ev_f15ca5e9bb6d778d31012bf9c753f37e99a37bdfe85dcb74395ec765127c1ebe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047d7c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) &&
      (((iVar2 = FUN_ram_40047b2c(iVar1), -1 < param_2 || (param_2 = param_2 + iVar2, -1 < param_2))
       && (param_2 < iVar2)))) && (iVar2 = FUN_ram_40047b3a(param_1), iVar2 != param_2)) {
    iVar3 = **(int **)(iVar1 + 8);
    if (param_2 < iVar2) {
      do {
        *(undefined4 *)(iVar3 + iVar2 * 4) = *(undefined4 *)(iVar3 + -4 + iVar2 * 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != param_2);
    }
    else {
      do {
        *(undefined4 *)(iVar3 + iVar2 * 4) = *(undefined4 *)(iVar3 + 4 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 != param_2);
    }
    *(int *)(iVar3 + param_2 * 4) = param_1;
    FUN_ram_40043bde(iVar1,0x25,0);
    FUN_ram_40044572(iVar1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40047e0a.
 * REA evidence: ev_dd956bf7d7030f7b8ad3ea05e0ff0d4902311fd43f378af914aec43f8df20a2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047e0a(int param_1)

{
  FUN_ram_4004c42e(param_1,0x3a,0);
  if (*(code **)(param_1 + 0x2c) == (code *)0x0) {
    do {
    } while (*(int *)(param_1 + 0x30) != 0);
  }
  else {
    (**(code **)(param_1 + 0x2c))(param_1);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_ram_4004c42e(param_1,0x3b,0);
  return;
}


/* NanoCore 1.10, address 0x40047e40.
 * REA evidence: ev_32d8b6dcac75f2cd13ede28447ee48bcc09463aa7027d3c1237ee0d585e8d318
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047e40(undefined4 *param_1)

{
  FUN_ram_4004cc7a(*param_1,*(undefined1 *)(param_1 + 5),(param_1[3] - param_1[1]) + 1,
                   (param_1[4] - param_1[2]) + 1,0);
  return;
}


/* NanoCore 1.10, address 0x40047e5c.
 * REA evidence: ev_9891a54a1835144897b7ee257e3becaf703b488dfb22d3450144802f51fc2da6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40047e5c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4004963c(param_1,param_2 + 0x14,0);
  if (((iVar1 != 0) && (iVar1 = FUN_ram_40042c20(param_2,1), iVar1 == 0)) &&
     (iVar1 = FUN_ram_40043ad2(param_2), iVar1 == 0)) {
    iStack_18 = 0;
    uStack_14 = param_1;
    FUN_ram_40043bde(param_2,0x15,&iStack_18);
    if (iStack_18 != 2) {
      iVar1 = FUN_ram_40047b2c(param_2);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        iVar2 = FUN_ram_40047e5c(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar1 * 4));
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      if (iStack_18 == 0) {
        return param_2;
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x40047ed2.
 * REA evidence: ev_41e8a8dce66f66ef915a7375b5591a1124b01b1cd5befb20725a2b2680645cea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047ed2(void)

{
  return;
}


/* NanoCore 1.10, address 0x40047ed4.
 * REA evidence: ev_00ce664a7d606839d159209ded7663b0f3a26c0f8acc1f5918d83a16c95c3345
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047ed4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [4];
  int iStack_f4;
  undefined1 auStack_e8 [4];
  int iStack_e4;
  int iStack_dc;
  undefined1 auStack_d8 [4];
  int iStack_d4;
  int iStack_cc;
  undefined1 auStack_c8 [28];
  undefined1 auStack_ac [16];
  int iStack_9c;
  int aiStack_98 [7];
  undefined4 uStack_7c;
  
  iVar7 = param_1 + 0x18;
  FUN_ram_4000305c(auStack_138,iVar7,0x10);
  FUN_ram_400440e0(param_2,auStack_118);
  uVar1 = FUN_ram_40043a7e(param_2);
  FUN_ram_40049460(auStack_118,uVar1,uVar1);
  iVar2 = FUN_ram_40049494(auStack_128,auStack_138,auStack_118);
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_4000305c(iVar7,auStack_128,0x10);
  FUN_ram_40043bde(param_2,0x17,param_1);
  FUN_ram_40043bde(param_2,0x18,param_1);
  FUN_ram_40043bde(param_2,0x19,param_1);
  iVar2 = FUN_ram_40042c20(param_2,0x100000);
  puVar3 = auStack_118;
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)(param_2 + 0x14);
  }
  iVar2 = FUN_ram_40049494(auStack_108,auStack_138,puVar3);
  if (iVar2 == 0) goto LAB_ram_40047fa6;
  iVar2 = FUN_ram_40047b2c(param_2);
  if (iVar2 == 0) {
LAB_ram_40047f7e:
    FUN_ram_4000305c(iVar7,auStack_128,0x10);
  }
  else {
    FUN_ram_4000305c(iVar7,auStack_108,0x10);
    aiStack_98[0] = FUN_ram_40046afe(param_2,0,0x2d);
    if ((aiStack_98[0] == 0) ||
       (iVar6 = FUN_ram_40046afe(param_2,0,0xc), aiStack_98[0] = iVar6, iVar6 == 0)) {
      iVar6 = 0;
      do {
        iVar4 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_ram_40048182(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar4));
      } while (iVar2 != iVar6);
      goto LAB_ram_40047f7e;
    }
    FUN_ram_4004ddd2(auStack_c8);
    iVar9 = param_2 + 0x14;
    iStack_9c = iVar6;
    FUN_ram_4000305c(auStack_ac,iVar9,0x10);
    FUN_ram_4004d2ce(aiStack_98);
    iVar8 = *(int *)(param_2 + 0x20);
    iVar5 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14);
    iVar4 = iVar8 - *(int *)(param_2 + 0x18);
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + 1 >> 1;
    if (iVar6 < iVar4) {
      iVar4 = iVar6;
    }
    FUN_ram_4000305c(auStack_f8,iVar9,0x10);
    iStack_f4 = (iVar8 - iVar4) + 1;
    iVar6 = FUN_ram_40049494(auStack_f8,auStack_f8,auStack_138);
    if (iVar6 != 0) {
      uVar1 = FUN_ram_4004c902(param_1,0x10,auStack_f8);
      iVar6 = 0;
      do {
        iVar5 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_ram_40048182(uVar1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar5));
      } while (iVar2 != iVar6);
      FUN_ram_40043bde(param_2,0x1a,uVar1);
      FUN_ram_40043bde(param_2,0x1b,uVar1);
      FUN_ram_40043bde(param_2,0x1c,uVar1);
      FUN_ram_4004dddc(uVar1,auStack_c8);
      uStack_7c = uVar1;
      FUN_ram_4004d52a(param_1,aiStack_98,auStack_f8);
    }
    FUN_ram_4000305c(auStack_e8,iVar9,0x10);
    iStack_dc = iStack_e4 + iVar4 + -1;
    iVar6 = FUN_ram_40049494(auStack_e8,auStack_e8,auStack_138);
    if (iVar6 != 0) {
      uVar1 = FUN_ram_4004c902(param_1,0x10,auStack_e8);
      iVar6 = 0;
      do {
        iVar5 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_ram_40048182(uVar1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar5));
      } while (iVar2 != iVar6);
      FUN_ram_40043bde(param_2,0x1a,uVar1);
      FUN_ram_40043bde(param_2,0x1b,uVar1);
      FUN_ram_40043bde(param_2,0x1c,uVar1);
      FUN_ram_4004dddc(uVar1,auStack_c8);
      uStack_7c = uVar1;
      FUN_ram_4004d52a(param_1,aiStack_98,auStack_e8);
    }
    FUN_ram_4000305c(auStack_d8,iVar9,0x10);
    iStack_d4 = iStack_d4 + iVar4;
    iStack_cc = iStack_cc - iVar4;
    iVar6 = FUN_ram_40049494(auStack_d8,auStack_d8,auStack_138);
    if (iVar6 == 0) goto LAB_ram_40047fa6;
    FUN_ram_4000305c(iVar7,auStack_d8,0x10);
    iVar6 = 0;
    do {
      iVar4 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      FUN_ram_40048182(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar4));
    } while (iVar2 != iVar6);
  }
  FUN_ram_40043bde(param_2,0x1a,param_1);
  FUN_ram_40043bde(param_2,0x1b,param_1);
  FUN_ram_40043bde(param_2,0x1c,param_1);
LAB_ram_40047fa6:
  FUN_ram_4000305c(iVar7,auStack_138,0x10);
  return;
}


