/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40048000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40048028.
 * REA evidence: ev_27a07260d185562ff98d4dbe722f9e18a17b9f6605e2c992cc002150ff2cfbcf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048028(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40047a70(param_1,0,0x6e);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_40047a70(param_1,0,0x6c);
    if (iVar3 == 0x100) {
      iVar3 = FUN_ram_40047a70(param_1,0,0x6d);
      if (iVar3 == 0x100) {
        iVar3 = FUN_ram_40047a70(param_1,0,0x71);
        if (iVar3 == 0) {
          iVar3 = FUN_ram_40047a70(param_1,0,0x72);
          if (iVar3 == 0) {
            cVar2 = FUN_ram_40047a70(param_1,0,0x60);
            if (cVar2 == -1) {
              iVar3 = FUN_ram_40047a70(param_1,0,0x73);
              if (iVar3 == 0) {
                cVar2 = FUN_ram_40047a70(param_1,0,0x67);
                uVar1 = (uint)(cVar2 != '\0');
                goto LAB_ram_40048042;
              }
            }
            uVar1 = 1;
            goto LAB_ram_40048042;
          }
        }
      }
    }
  }
  uVar1 = 2;
LAB_ram_40048042:
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    if (uVar1 != 0) {
      FUN_ram_40044074(param_1);
      *(ushort *)(*(int *)(param_1 + 8) + 0x2a) =
           (ushort)(uVar1 << 10) | *(ushort *)(*(int *)(param_1 + 8) + 0x2a) & 0xf3ff;
    }
  }
  else {
    *(ushort *)(iVar3 + 0x2a) = (ushort)(uVar1 << 10) | *(ushort *)(iVar3 + 0x2a) & 0xf3ff;
  }
  return;
}


/* NanoCore 1.11, address 0x40048114.
 * REA evidence: ev_6a37c9fddf5cdfb744b99d804e424a9ff19d2cbca878fe9f72aa840af89ba989
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048114(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (DAT_ram_30080c84 == '\0') {
    return;
  }
  FUN_ram_400454e4();
  param_2 = param_2 & 0xff0000;
  uVar1 = FUN_ram_4004bec8(param_3);
  uVar1 = uVar1 & 4;
  uVar2 = FUN_ram_4004bec8(param_3);
  uVar3 = FUN_ram_4004bec8(param_3);
  uVar4 = FUN_ram_4004bec8(param_3);
  if (uVar1 != 0) {
    if ((param_2 != 0xf0000) && (param_2 != 0)) {
      iVar5 = FUN_ram_40047a70(param_1,0,2);
      if (iVar5 != 0x200007d1) {
        iVar5 = FUN_ram_40047a70(param_1,0,1);
        if (iVar5 != 0x200007d1) goto LAB_ram_400481ec;
      }
    }
    FUN_ram_40044b50(param_1,0x2d,0);
    FUN_ram_40044ffc(param_1);
  }
  if ((param_2 == 0xf0000) || (param_2 == 0)) {
    if (((param_3 == 0xff) || (uVar1 != 0)) && (iVar5 = FUN_ram_40048a76(param_1), iVar5 != 0)) {
      FUN_ram_40044ffc();
    }
    if (((param_2 == 0xf0000) || (param_2 == 0)) && ((uVar4 & 0x10) != 0)) {
      FUN_ram_40048028(param_1);
    }
  }
LAB_ram_400481ec:
  if ((param_3 == 0xff) || ((uVar2 & 2) != 0)) {
    FUN_ram_400449fc(param_1);
  }
  FUN_ram_400454e4(param_1);
  if (((param_3 == 0xff) || (((uVar3 & 1) != 0 && ((uVar2 & 2) != 0 || uVar1 != 0)))) &&
     (param_2 != 0x10000)) {
    FUN_ram_400475cc(param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40048254.
 * REA evidence: ev_8b511e8013a5732cb20b2057e7eb9e80a0ce29de2de55e6c3cc0e7db13ffe78d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048254(int param_1,int param_2,uint param_3)

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
     (iVar2 = FUN_ram_400479f8(param_2), iVar2 != 0)) {
    FUN_ram_400454e4(param_1);
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
        FUN_ram_40047842(param_1,uVar1,0xff,0);
      }
      uVar7 = uVar9;
      if ((*(uint *)(*(int *)(param_1 + 0xc) + iVar2 + 4) & 0x3000000) != 0) {
        if (*(int *)(*(int *)(param_1 + 0xc) + iVar2) != 0) {
          FUN_ram_4004bc56();
        }
        FUN_ram_4005ab56(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2));
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
      uVar3 = FUN_ram_4005ab68(iVar2,uVar7 << 3);
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      bVar5 = true;
    }
    else {
      uVar9 = uVar9 + 1;
    }
  }
  if ((bVar5) && (cVar8 != '\0')) {
    FUN_ram_40048114(param_1,uVar1,0xff);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400483d6.
 * REA evidence: ev_215d79c3df404ce5e97bd873f8b4492d9f9f9f73f118ae2396c057aa1c40014f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400483d6(undefined4 param_1)

{
  FUN_ram_40048254(param_1,0,0xfffff);
  return;
}


/* NanoCore 1.11, address 0x400483e2.
 * REA evidence: ev_a139fe52a6b51e7a0d3f8ff4855669538f9ef4e84c60c5fb745c73bdfc3eb209
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400483e2(int *param_1)

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
  for (piVar3 = (int *)FUN_ram_4004b518(0x30080c78); piVar3 != (int *)0x0;
      piVar3 = (int *)FUN_ram_4004b524(0x30080c78,piVar3)) {
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
  FUN_ram_4004b45a(0x30080c78,param_1);
  FUN_ram_4005ab56(param_1);
  iVar1 = *(int *)(iVar2 + 0xc);
  FUN_ram_4004bc80(*(undefined4 *)(iVar1 + iVar7),(char)iVar4);
  iVar4 = FUN_ram_4004bebe(*(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar7));
  if (iVar4 == 0) {
    return;
  }
  FUN_ram_40048254(iVar2,*(undefined4 *)(iVar1 + iVar7),*(uint *)(iVar1 + iVar7 + 4) & 0xffffff);
  return;
}


/* NanoCore 1.11, address 0x400484c6.
 * REA evidence: ev_53f8c921d2d3da6a6d8e5d00f73b2f830394bc4dc9415a134845d28677e8ce32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400484c6(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
      iVar1 = FUN_ram_4005ab68(*(int *)(param_1 + 0xc),uVar3 << 3);
      *(int *)(param_1 + 0xc) = iVar1;
      uVar3 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
      while( true ) {
        uVar3 = uVar3 - 1;
        iVar7 = uVar3 * 8;
        if ((uVar3 == 0) || ((*(uint *)(iVar1 + iVar7 + -4) & 0x3000000) != 0)) break;
        *(undefined4 *)(iVar1 + uVar3 * 8) = *(undefined4 *)(iVar1 + -8 + uVar3 * 8);
        *(undefined4 *)(iVar1 + iVar7 + 4) = *(undefined4 *)(iVar7 + iVar1 + -8 + 4);
      }
      thunk_FUN_ram_4000504c(iVar1 + iVar7,0,8);
      iVar8 = *(int *)(param_1 + 0xc);
      uVar2 = FUN_ram_4005ab20(0xc);
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar8 + uVar3 * 8) = uVar2;
      FUN_ram_4004bc4e(*(undefined4 *)(iVar1 + uVar3 * 8));
      iVar1 = *(int *)(param_1 + 0xc);
      iVar7 = iVar7 + iVar1;
      *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) & 0xff000000 | 0x1000000 | param_4 & 0xffffff;
      uVar2 = *(undefined4 *)(iVar1 + uVar3 * 8);
LAB_ram_40048586:
      if ((param_4 == 0) && (uVar3 = FUN_ram_4004bec8(param_2), (uVar3 & 0x20) != 0)) {
        FUN_ram_400454e4(param_1);
      }
      FUN_ram_4004bd22(uVar2,param_2,param_3);
      FUN_ram_40048114(param_1,param_4,param_2);
      return;
    }
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 8);
    uVar5 = puVar4[1];
    if (((uVar5 & 0x1000000) != 0) && (param_4 == (uVar5 & 0xffffff))) {
      uVar2 = *puVar4;
      goto LAB_ram_40048586;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}


/* NanoCore 1.11, address 0x400485e4.
 * REA evidence: ev_dcf4810b0bcd53eb10ac87ba7848f0d3830cc331bca1409df6a944429c0872aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400485e4(int *param_1,int param_2)

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
    goto LAB_ram_400486f0;
  }
  if (uVar6 < 0x62) {
    if (uVar6 < 0x3a) {
      if (0x1b < uVar6) {
        uVar8 = 1 << (uVar6 - 0x1c & 0x1f);
        if ((uVar8 & 0x20200081) != 0) {
LAB_ram_40048698:
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
              goto LAB_ram_400486f0;
            }
            uVar3 = (undefined2)param_1[4];
            uVar1 = *(undefined1 *)((int)param_1 + 0x12);
          }
          uStack_28 = (uint)CONCAT12(uVar1,uVar3);
          goto LAB_ram_400486f0;
        }
        if ((uVar8 & 0x3000000) != 0) goto LAB_ram_40048664;
      }
    }
    else {
      if (0x58 < uVar6) {
        uVar8 = 0x5a;
        goto LAB_ram_400486b2;
      }
      if ((0x3c < uVar6) && ((1 << (uVar6 - 0x3d & 0x1f) & 0x8000101U) != 0)) goto LAB_ram_40048698;
    }
LAB_ram_400486b6:
    if (param_2 == 0) {
LAB_ram_4004866c:
      uStack_28 = param_1[3];
      goto LAB_ram_400486f0;
    }
    if (param_2 != 0xff) {
      uStack_28 = ((param_1[4] - param_1[3]) * param_2 >> 8) + param_1[3];
      goto LAB_ram_400486f0;
    }
  }
  else {
    if (uVar6 != 0x66) {
      uVar8 = 0x67;
LAB_ram_400486b2:
      if (uVar6 != uVar8) goto LAB_ram_400486b6;
    }
LAB_ram_40048664:
    if (param_2 < 0xff) goto LAB_ram_4004866c;
  }
  uStack_28 = param_1[4];
LAB_ram_400486f0:
  auStack_24[0] = 0;
  iVar5 = FUN_ram_4004bdde(*puVar10,uVar6,auStack_24);
  bVar2 = true;
  if ((iVar5 != 0) && (uStack_28 == auStack_24[0])) {
    bVar2 = (auStack_24[0] & 0xffffff) != (uStack_28 & 0xffffff);
  }
  FUN_ram_4004bd22(*(undefined4 *)(*(int *)(iVar4 + 0xc) + uVar7 * 8),(char)param_1[1],uStack_28);
  if (!bVar2) {
    return;
  }
  FUN_ram_40048114(*param_1,param_1[2],(char)param_1[1]);
  return;
}


/* NanoCore 1.11, address 0x400487ee.
 * REA evidence: ev_3aa5061fc8c302812e0b80978588c834dc1cb2efedb83b06958ab4b302a2e966
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400487ee(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,1,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400487fc.
 * REA evidence: ev_740819e3b5a1bae774330b2288dfb63e6532a2120c75a1a6f36524fe76ef1a93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400487fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,5,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x4004880a.
 * REA evidence: ev_7ad7b1db0266bc1aaf821d7fe7deab0b5e195912c3d6f471f7db33d8e80f63e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004880a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,2,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048818.
 * REA evidence: ev_134df040f4393c97851127226c06eff4a7f71d9c4229785b7056d09bbfb824fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048818(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,8,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048826.
 * REA evidence: ev_bbdb0e689c7abdd30869a6502f621e71b99e7a16c22d6cd36b1ccc178534493d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048826(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,9,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048834.
 * REA evidence: ev_60e020eb415086a9411877c0986124470ec56f7b88327e0ce8466780bb6a81a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048834(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,10,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048842.
 * REA evidence: ev_f998bd3ec86149e8a16ac527efccbbddd81201c4e06078341ae95a42f324d806
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048842(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x68,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048852.
 * REA evidence: ev_4e4ed02eed6ca7309ef07a85c15d99de5799948eed66b09715d748b0f0a3f431
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048852(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x69,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048862.
 * REA evidence: ev_ad258beac9d79ac1ac64efe86fc50f3e9926d74bae7f4dce301319039bde0236
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048862(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x6c,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048872.
 * REA evidence: ev_0228b37c993276dfbf977dd430219d9b433316bb433f4a1af3c5b8cf0b4c4bf7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048872(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x6d,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048882.
 * REA evidence: ev_27b6aa73baf8303fe3ead7e1c9ede1735098212e5028dd96b641318562b5ec5f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048882(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x6f,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048892.
 * REA evidence: ev_5273654d8fabe8ef046906a6f71f72ad8c7f1379fa5dbac5c73bcc62d6ff3a24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048892(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x70,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400488a2.
 * REA evidence: ev_4fd41aeb5547cf842496212a7066fce116f85069cd788fb0ae365ebbba8521ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400488a2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x10,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400488b0.
 * REA evidence: ev_a555bfd6735798d97864bf626b8efcb187d7a98b628ff4c093f2a1eab0a5c18c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400488b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x11,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400488be.
 * REA evidence: ev_4c3def9fc912bad3f25bde75da529c041dd59bbb8b29f54252e4b31f8b8330bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400488be(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x12,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400488cc.
 * REA evidence: ev_1f634ae2bb88069047b94c09b65ebea02033b18f3d939f9cd652f79067b43b4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400488cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x13,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400488da.
 * REA evidence: ev_d564c61661373a14eb583b022eed70f1077ada2a38c83dcb53bd4e4393b7f38a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400488da(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_400484c6(param_1,0x1c,uStack_4,param_3);
  return;
}


/* NanoCore 1.11, address 0x400488f8.
 * REA evidence: ev_7523ef26d0d64a9356d751c38f665255fb0c7930c257384bf427d436ec4d0f50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400488f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x1d,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048906.
 * REA evidence: ev_5fe735e237e5488745b0d8d6100dafbbf9b40c28d90b0ef72d7ee96f23d13431
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048906(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_400484c6(param_1,0x31,uStack_4,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048926.
 * REA evidence: ev_c5d976c19c3eadd9a3d0c45620aa3cbe711e96a91482f60aad3035b1da86346f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048926(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x32,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048936.
 * REA evidence: ev_11649db5090ac6e45b5c08b5feb1aa9a2ce056bd24f2bb273464399842000cce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048936(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x30,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048946.
 * REA evidence: ev_bac55e30d1c15873224f134991e8c3a0a116e95a16119c3a67bfa89df4896f81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048946(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x38,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048956.
 * REA evidence: ev_263e6903b2424608ce16198fb6e44e5c1876c61edcaf551fee2693c0423b8d56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048956(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x3c,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048966.
 * REA evidence: ev_591755a31e2d20bce063fd28c68e6943e67e83e9f82515cefdf69fe0e41e54cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048966(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x41,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048976.
 * REA evidence: ev_b1c7c71733932d01b1146129c42346a7013f0bd87a836cbee05355983a1764bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048976(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_400484c6(param_1,0x3d,uStack_4,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048996.
 * REA evidence: ev_1c6092167d2817a6d6f2e80dd5351cb0e39785a6f721a0bb9251f15001236b16
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048996(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x3e,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400489a6.
 * REA evidence: ev_c54af18543023c21a960d7988275b52c50bdf9c04be9b97c264c81a8a9510f5b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489a6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x44,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400489b6.
 * REA evidence: ev_89cdc2f5edf47e5bc3b0d924bacadc606a1697b5d549a3a6822dce5cf0e2b7ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489b6(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_400484c6(param_1,0x58,uStack_4,param_3);
  return;
}


/* NanoCore 1.11, address 0x400489d6.
 * REA evidence: ev_47c0bcbd2c080af04f4dc104461119286c3e53b20afc2935e2da868681b778c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489d6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x59,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400489e6.
 * REA evidence: ev_ff7827a02edab0d9b55db1aaf4cc16d3d533ad3cd9bffc8a2f722b2a0320c5b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489e6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x5a,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400489f6.
 * REA evidence: ev_495c1f22382956f87ff25470751a42df42209531538a74e93d6fcba4df3ab57a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489f6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0x5e,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048a06.
 * REA evidence: ev_396406457fa4feb54d31c6df2e135fade505084883b3411de67d4e8695f56453
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a06(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400484c6(param_1,0xc,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x40048a14.
 * REA evidence: ev_60ddcdc52dab504cfaa9ba365878779fb0a4c42db652a1534e0304a2244176ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a14(int param_1)

{
  do {
    if (param_1 == 0) {
      return;
    }
    param_1 = *(int *)(param_1 + 4);
  } while (param_1 != 0);
  return;
}


/* NanoCore 1.11, address 0x40048a20.
 * REA evidence: ev_a0bbd309d05235629eab3de83be85bbe25d70ad3eec5c0cdb64ed8972a45e3c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a20(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    param_1 = FUN_ram_40048a14();
  }
  iVar1 = FUN_ram_4004b518(0x30080c64);
  do {
    if (iVar1 == 0) {
      return;
    }
    for (iVar2 = 0; *(int *)(iVar1 + 0x2d0) != iVar2; iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(iVar1 + 0x2b4) + iVar2 * 4) == param_1) {
        return;
      }
    }
    iVar1 = FUN_ram_4004b524(0x30080c64,iVar1);
  } while( true );
}


/* NanoCore 1.11, address 0x40048a76.
 * REA evidence: ev_2affdbd491a528b0d5ad55c2dad0f014c521122cb728025d993cd25a0086dc4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40048a76(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40048a7c.
 * REA evidence: ev_5cc42b82e7da4963dd661fb3f0b3e4fab294abeb05d5384bf22f93e8ef3e1665
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40048a7c(int param_1,uint param_2)

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


/* NanoCore 1.11, address 0x40048a9e.
 * REA evidence: ev_449783ae5690e79a4d574b89d2794c948925d9dee625c63ea038b2280da6e1a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_40048a9e(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined2 *)(*(int *)(param_1 + 8) + 0x28);
  }
  return 0;
}


/* NanoCore 1.11, address 0x40048aac.
 * REA evidence: ev_fc6b33fec3a9b1f9d728d5ccea8cad1531d6a3ca0e6e43734b29d23cbfff12bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40048aac(int param_1)

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


/* NanoCore 1.11, address 0x40048ad4.
 * REA evidence: ev_37b58718df52b13d2eb23f4877c137ba0b177fc22773bd2825ea4798c2ec0f15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048ad4(int param_1)

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
  iVar2 = FUN_ram_40044b50(param_1,0x24,0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_ram_4004ae8a(*(int *)(param_1 + 8) + 8);
    }
    while (iVar2 = FUN_ram_40048a7c(param_1,0), iVar2 != 0) {
      FUN_ram_40048ad4();
    }
    iVar3 = FUN_ram_40043bae(param_1);
    for (iVar2 = FUN_ram_40056cb2(0); iVar2 != 0; iVar2 = FUN_ram_40056cb2(iVar2)) {
      uVar7 = FUN_ram_40056cd0(iVar2);
      if ((uVar7 & 0xfffffffd) == 1) {
        if (((param_1 == *(int *)(iVar2 + 0x70)) || (param_1 == *(int *)(iVar2 + 0x74))) ||
           (param_1 == *(int *)(iVar2 + 0x78))) {
          FUN_ram_40056d10(iVar2);
          FUN_ram_40056e2a(iVar2,param_1);
        }
        if (param_1 == *(int *)(iVar2 + 0x7c)) {
          *(undefined4 *)(iVar2 + 0x7c) = 0;
        }
      }
      if ((iVar3 == *(int *)(iVar2 + 0xac)) && (iVar5 = FUN_ram_40056d20(), param_1 == iVar5)) {
        FUN_ram_40056d10(iVar2);
        FUN_ram_40056e2a(iVar2,param_1);
      }
    }
    do {
      iVar2 = FUN_ram_4004ac92(&LAB_ram_40048cea,param_1);
    } while (iVar2 == 1);
    FUN_ram_400441ba(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = FUN_ram_40048a20();
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
      uVar4 = FUN_ram_4005ab68(iVar3,uVar6 * 4);
      *(undefined4 *)(iVar2 + 0x2b4) = uVar4;
    }
    else {
      uVar7 = FUN_ram_40048aac(param_1);
      while( true ) {
        piVar1 = *(int **)(*(int *)(param_1 + 4) + 8);
        iVar2 = *piVar1;
        uVar6 = *(ushort *)(piVar1 + 10) - 1;
        if ((int)uVar6 <= (int)(uVar7 & 0xffff)) break;
        uVar7 = (uVar7 & 0xffff) + 1;
        *(undefined4 *)(iVar2 + uVar7 * 4 + -4) = *(undefined4 *)(iVar2 + uVar7 * 4);
      }
      *(short *)(piVar1 + 10) = (short)(uVar6 * 0x10000 >> 0x10);
      iVar2 = FUN_ram_4005ab68(iVar2,(uVar6 & 0xffff) << 2);
      *piVar1 = iVar2;
    }
    FUN_ram_4005ab56(param_1);
    return;
  }
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xefff;
  return;
}


/* NanoCore 1.11, address 0x40048c64.
 * REA evidence: ev_5fc949f8173f67d6c6da8562d2b8cef02c828473eb0b387fb254297c7f01f40c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048c64(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if ((*(ushort *)(param_1 + 0x2a) & 0x1000) != 0) {
    return;
  }
  FUN_ram_400454e4();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    iVar2 = FUN_ram_40048a20(param_1);
    if (iVar2 == 0) {
      return;
    }
    bVar1 = *(int *)(iVar2 + 0x2b8) == param_1;
  }
  else {
    bVar1 = false;
    iVar2 = 0;
  }
  FUN_ram_40048ad4(param_1);
  if ((iVar3 != 0) && ((*(ushort *)(iVar3 + 0x2a) & 0x1000) == 0)) {
    FUN_ram_400474dc(iVar3);
    FUN_ram_40044b50(iVar3,0x25,0);
    FUN_ram_40044b50(iVar3,0x27,0);
  }
  if (bVar1) {
    *(undefined4 *)(iVar2 + 0x2b8) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40048cee.
 * REA evidence: ev_454be414fddba19b6739526dc7662057dbf37ce145a101d1faed316f0dcb7ce5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048cee(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) &&
      (((iVar2 = FUN_ram_40048a9e(iVar1), -1 < param_2 || (param_2 = param_2 + iVar2, -1 < param_2))
       && (param_2 < iVar2)))) && (iVar2 = FUN_ram_40048aac(param_1), iVar2 != param_2)) {
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
    FUN_ram_40044b50(iVar1,0x25,0);
    FUN_ram_400454e4(iVar1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40048d7c.
 * REA evidence: ev_39a67bd9ef682fe400989aba51443ef6fd0e02c41e4d6260edca3117f55140ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048d7c(int param_1)

{
  FUN_ram_4004d3a0(param_1,0x3a,0);
  if (*(code **)(param_1 + 0x2c) == (code *)0x0) {
    do {
    } while (*(int *)(param_1 + 0x30) != 0);
  }
  else {
    (**(code **)(param_1 + 0x2c))(param_1);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_ram_4004d3a0(param_1,0x3b,0);
  return;
}


/* NanoCore 1.11, address 0x40048db2.
 * REA evidence: ev_2f6fb1297d2768ed45a6004e984512191e24d2737168d2c25a0a396bb644943b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048db2(undefined4 *param_1)

{
  FUN_ram_4004dbec(*param_1,*(undefined1 *)(param_1 + 5),(param_1[3] - param_1[1]) + 1,
                   (param_1[4] - param_1[2]) + 1,0);
  return;
}


/* NanoCore 1.11, address 0x40048dce.
 * REA evidence: ev_5a9474d4020998ccd79aae903c46ab8ac624b33e0a5d6d004b65c05fa7a296b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40048dce(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4004a5ae(param_1,param_2 + 0x14,0);
  if (((iVar1 != 0) && (iVar1 = FUN_ram_40043b92(param_2,1), iVar1 == 0)) &&
     (iVar1 = FUN_ram_40044a44(param_2), iVar1 == 0)) {
    iStack_18 = 0;
    uStack_14 = param_1;
    FUN_ram_40044b50(param_2,0x15,&iStack_18);
    if (iStack_18 != 2) {
      iVar1 = FUN_ram_40048a9e(param_2);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        iVar2 = FUN_ram_40048dce(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar1 * 4));
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


/* NanoCore 1.11, address 0x40048e44.
 * REA evidence: ev_c5d021d1d997c7d9aba3bbb6db981e503ade78c0ebb934d2a70f6ff7b1905239
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048e44(void)

{
  return;
}


/* NanoCore 1.11, address 0x40048e46.
 * REA evidence: ev_0b2187814ca2738b4df8b132fc5cd7c7f5eab10cdfec65137b20d845cc4170de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048e46(int param_1,int param_2)

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
  FUN_ram_4000304c(auStack_138,iVar7,0x10);
  FUN_ram_40045052(param_2,auStack_118);
  uVar1 = FUN_ram_400449f0(param_2);
  FUN_ram_4004a3d2(auStack_118,uVar1,uVar1);
  iVar2 = FUN_ram_4004a406(auStack_128,auStack_138,auStack_118);
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_4000304c(iVar7,auStack_128,0x10);
  FUN_ram_40044b50(param_2,0x17,param_1);
  FUN_ram_40044b50(param_2,0x18,param_1);
  FUN_ram_40044b50(param_2,0x19,param_1);
  iVar2 = FUN_ram_40043b92(param_2,0x100000);
  puVar3 = auStack_118;
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)(param_2 + 0x14);
  }
  iVar2 = FUN_ram_4004a406(auStack_108,auStack_138,puVar3);
  if (iVar2 == 0) goto LAB_ram_40048f18;
  iVar2 = FUN_ram_40048a9e(param_2);
  if (iVar2 == 0) {
LAB_ram_40048ef0:
    FUN_ram_4000304c(iVar7,auStack_128,0x10);
  }
  else {
    FUN_ram_4000304c(iVar7,auStack_108,0x10);
    aiStack_98[0] = FUN_ram_40047a70(param_2,0,0x2d);
    if ((aiStack_98[0] == 0) ||
       (iVar6 = FUN_ram_40047a70(param_2,0,0xc), aiStack_98[0] = iVar6, iVar6 == 0)) {
      iVar6 = 0;
      do {
        iVar4 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_ram_400490f4(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar4));
      } while (iVar2 != iVar6);
      goto LAB_ram_40048ef0;
    }
    FUN_ram_4004ed44(auStack_c8);
    iVar9 = param_2 + 0x14;
    iStack_9c = iVar6;
    FUN_ram_4000304c(auStack_ac,iVar9,0x10);
    FUN_ram_4004e240(aiStack_98);
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
    FUN_ram_4000304c(auStack_f8,iVar9,0x10);
    iStack_f4 = (iVar8 - iVar4) + 1;
    iVar6 = FUN_ram_4004a406(auStack_f8,auStack_f8,auStack_138);
    if (iVar6 != 0) {
      uVar1 = FUN_ram_4004d874(param_1,0x10,auStack_f8);
      iVar6 = 0;
      do {
        iVar5 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_ram_400490f4(uVar1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar5));
      } while (iVar2 != iVar6);
      FUN_ram_40044b50(param_2,0x1a,uVar1);
      FUN_ram_40044b50(param_2,0x1b,uVar1);
      FUN_ram_40044b50(param_2,0x1c,uVar1);
      FUN_ram_4004ed4e(uVar1,auStack_c8);
      uStack_7c = uVar1;
      FUN_ram_4004e49c(param_1,aiStack_98,auStack_f8);
    }
    FUN_ram_4000304c(auStack_e8,iVar9,0x10);
    iStack_dc = iStack_e4 + iVar4 + -1;
    iVar6 = FUN_ram_4004a406(auStack_e8,auStack_e8,auStack_138);
    if (iVar6 != 0) {
      uVar1 = FUN_ram_4004d874(param_1,0x10,auStack_e8);
      iVar6 = 0;
      do {
        iVar5 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_ram_400490f4(uVar1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar5));
      } while (iVar2 != iVar6);
      FUN_ram_40044b50(param_2,0x1a,uVar1);
      FUN_ram_40044b50(param_2,0x1b,uVar1);
      FUN_ram_40044b50(param_2,0x1c,uVar1);
      FUN_ram_4004ed4e(uVar1,auStack_c8);
      uStack_7c = uVar1;
      FUN_ram_4004e49c(param_1,aiStack_98,auStack_e8);
    }
    FUN_ram_4000304c(auStack_d8,iVar9,0x10);
    iStack_d4 = iStack_d4 + iVar4;
    iStack_cc = iStack_cc - iVar4;
    iVar6 = FUN_ram_4004a406(auStack_d8,auStack_d8,auStack_138);
    if (iVar6 == 0) goto LAB_ram_40048f18;
    FUN_ram_4000304c(iVar7,auStack_d8,0x10);
    iVar6 = 0;
    do {
      iVar4 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      FUN_ram_400490f4(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar4));
    } while (iVar2 != iVar6);
  }
  FUN_ram_40044b50(param_2,0x1a,param_1);
  FUN_ram_40044b50(param_2,0x1b,param_1);
  FUN_ram_40044b50(param_2,0x1c,param_1);
LAB_ram_40048f18:
  FUN_ram_4000304c(iVar7,auStack_138,0x10);
  return;
}


