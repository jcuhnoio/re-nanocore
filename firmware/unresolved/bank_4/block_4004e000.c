/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4004e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4004e496.
 * REA evidence: ev_d87dfa17db75f2af70907c62f219e7e9a6efd39bb583dfe15185327d8061b5c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_4004e496(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_38;
  undefined1 uStack_34;
  undefined1 auStack_30 [12];
  undefined4 *puStack_24;
  
  thunk_FUN_ram_4000505c(param_2,0,0xc);
  if (param_1 != 0) {
    iVar3 = FUN_ram_4004d31e(param_1);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        return (undefined4 *)0x0;
      }
    }
    else if ((iVar3 == 1) &&
            (iStack_38 = param_1, uStack_34 = (char)iVar3,
            iVar5 = FUN_ram_4004be40(_DAT_ram_3007f9cc,&iStack_38,0), iVar5 != 0)) {
      iVar3 = FUN_ram_4004bfc6();
      FUN_ram_4000305c(param_2,iVar3 + 8,0xc);
      puVar4 = *(undefined4 **)(iVar3 + 0x14);
LAB_ram_4004e5a2:
      FUN_ram_4004be7c(_DAT_ram_3007f9cc,iVar5,0);
      return puVar4;
    }
    for (puVar4 = (undefined4 *)FUN_ram_4004a5a6(0x3007f9bc); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)FUN_ram_4004a5b2(0x3007f9bc,puVar4)) {
      if ((((code *)*puVar4 != (code *)0x0) && (puVar4[1] != 0)) &&
         (iVar5 = (*(code *)*puVar4)(puVar4,param_1,param_2), iVar5 == 1)) {
        if (*(short *)(param_2 + 8) == 0) {
          uVar1 = *(ushort *)(param_2 + 4);
          if (*(char *)(param_2 + 1) == '\x14') {
            sVar2 = uVar1 << 1;
          }
          else {
            iVar5 = FUN_ram_40049d8e();
            sVar2 = (short)((uint)uVar1 * iVar5 + 7 >> 3);
          }
          *(short *)(param_2 + 8) = sVar2;
        }
        if (iVar3 != 1) {
          return puVar4;
        }
        uStack_34 = (char)iVar3;
        iStack_38 = FUN_ram_40059cc4(param_1);
        puStack_24 = puVar4;
        FUN_ram_4000305c(auStack_30,param_2,0xc);
        iVar5 = FUN_ram_4004becc(_DAT_ram_3007f9cc,&iStack_38,0);
        if (iVar5 == 0) {
          FUN_ram_40059be4(iStack_38);
          return (undefined4 *)0x0;
        }
        goto LAB_ram_4004e5a2;
      }
    }
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.10, address 0x4004e5e6.
 * REA evidence: ev_76fecee5334b59fdd4f8fb2945606d7654ca38290af848248ba3fbbc63679bcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004e5e6(void)

{
  undefined1 auStack_40 [24];
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  FUN_ram_4004a3cc(0x3007f9bc,0x18);
  puStack_28 = &LAB_ram_4004e436;
  puStack_20 = &LAB_ram_4004e456;
  uStack_24 = 0;
  FUN_ram_4000305c(auStack_40,&puStack_28,0xc);
  _DAT_ram_3007f9c8 = FUN_ram_4004bdea(&PTR_FUN_ram_4004bd18_ram_400978e4,0x18,0x800000,auStack_40);
  puStack_1c = &LAB_ram_4004e5c6;
  puStack_14 = &LAB_ram_4004e3e8;
  uStack_18 = 0;
  FUN_ram_4000305c(auStack_40,&puStack_1c,0xc);
  _DAT_ram_3007f9cc = FUN_ram_4004bdea(&PTR_FUN_ram_4004bd18_ram_400978bc,0x18,0x14,auStack_40);
  return;
}


/* NanoCore 1.10, address 0x4004e678.
 * REA evidence: ev_b93556892c781adf37aee545ff5214bb4cb98182325190ecc0f875e92aa94df5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004e678(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004e496();
  return iVar1 != 0;
}


/* NanoCore 1.10, address 0x4004e68a.
 * REA evidence: ev_612b5172160e5400b595ce6d9a2d426600fa2eace820f5bf98246b2099fff5fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004e68a(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 uStack_30;
  
  thunk_FUN_ram_4000505c(param_1,0,0x3c);
  if (param_2 != 0) {
    param_1[2] = param_2;
    uVar1 = FUN_ram_4004d31e(param_2);
    *(undefined1 *)(param_1 + 3) = uVar1;
    iVar2 = _DAT_ram_3007f9c8;
    param_1[0xc] = _DAT_ram_3007f9c8;
    if ((param_3 == 0) || (*(char *)(param_3 + 2) == '\0')) {
      iStack_34 = param_1[2];
      uStack_30 = uVar1;
      iVar2 = FUN_ram_4004be40(iVar2,auStack_38,0);
      if (iVar2 != 0) {
        iVar3 = FUN_ram_4004bfc6();
        param_1[7] = *(int *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        param_1[0xd] = iVar2;
        *param_1 = iVar3;
        return 1;
      }
    }
    iVar2 = FUN_ram_4004e496(param_2,param_1 + 4);
    *param_1 = iVar2;
    if (iVar2 != 0) {
      if (param_3 == 0) {
        *(undefined1 *)((int)param_1 + 5) = 0;
        *(undefined2 *)((int)param_1 + 6) = 0;
      }
      else {
        FUN_ram_4000305c(param_1 + 1,param_3,4);
      }
      *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x4004e738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(iVar2 + 4))(iVar2,param_1);
      return uVar4;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004e744.
 * REA evidence: ev_7c6d645a1b47dc8a1b536ce77808a4486e0185234eb01c049bece70d653f1d1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004e744(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004e752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*param_1,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004e758.
 * REA evidence: ev_dc22a5f778f31d451e7e791c95eb74243e6ec7198417881bb74ca5ecf4609aef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e758(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(code **)(iVar1 + 0xc) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4004e762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004e766.
 * REA evidence: ev_4111b3ecebd429f0afc74ccd46378ad0c8b85f44cc03434fba7f34f3abe1fca8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004e766(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004a3dc(0x3007f9bc);
  if (iVar1 != 0) {
    thunk_FUN_ram_4000505c(iVar1,0,0x18);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004e78e.
 * REA evidence: ev_a62907bb50b5343565f438d1d9beb8a9c60acf0f81995ecfe6c2900e03fa96a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e78e(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* NanoCore 1.10, address 0x4004e792.
 * REA evidence: ev_269fde15885bc8ad190ca437e0404f0fc8345480ae082315d507aa77b26075ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e792(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4004e796.
 * REA evidence: ev_cd3a321ae5db71f91afd9a8a16ace5fc5b2465e89338d73fd8474c34987b2bf8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e796(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4004e79a.
 * REA evidence: ev_9969057bb9a9c9e5b8f5f3c79eb0a0f4041ac0e0f714768dec7107f9452c3e3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e79a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4004e79e.
 * REA evidence: ev_460bc388090e85b8d450c8d61a3bb9aca4abbf96973e5a0d9360d924eca93947
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e79e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4004e7a2.
 * REA evidence: ev_a78a21fdf3ab71b77b0481c9666ab8ff1e06f181751d7586876d3e68d1771d13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4004e7a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4004becc(_DAT_ram_3007f9c8,param_2,0);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4004bfc6();
    *(undefined4 *)(iVar2 + 0xc) = param_3;
    if (*(char *)(iVar2 + 8) == '\x01') {
      uVar3 = FUN_ram_40059cc4(*(undefined4 *)(iVar2 + 4));
      *(undefined4 *)(iVar2 + 4) = uVar3;
    }
    *(undefined4 *)(iVar2 + 0x14) = param_4;
    *(undefined4 *)(iVar2 + 0x10) = param_1;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004e7fe.
 * REA evidence: ev_06874ab19897c281a182fee8e58bb2c08d57a0d3a4dae5ff018984225c9ef589
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004e7fe(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
LAB_ram_4004e80a:
    param_2 = 0;
  }
  else {
    if ((((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_2 + 1) != '\x14')) &&
        (uVar2 = FUN_ram_4004ca7e(*(undefined2 *)(param_2 + 4)), *(ushort *)(param_2 + 8) != uVar2))
       && (iVar1 = FUN_ram_4004cf0c(param_2,uVar2), iVar1 != 1)) {
      iVar1 = FUN_ram_4004cb86(*(undefined2 *)(param_2 + 4),*(undefined2 *)(param_2 + 6),
                               *(undefined1 *)(param_2 + 1),uVar2);
      if (iVar1 == 0) goto LAB_ram_4004e80a;
      FUN_ram_4004ce08(iVar1,0,param_2,0);
      param_2 = iVar1;
    }
    if ((((*(char *)(param_1 + 5) != '\0') && (3 < (byte)(*(char *)(param_2 + 1) - 0xbU))) &&
        ((iVar1 = FUN_ram_40049dac(), iVar1 != 0 && ((*(ushort *)(param_2 + 2) & 1) == 0)))) &&
       (((*(ushort *)(param_2 + 2) & 0x20) != 0 ||
        (param_2 = FUN_ram_4004cc2c(param_2), param_2 != 0)))) {
      FUN_ram_4004d018();
    }
  }
  return param_2;
}


/* NanoCore 1.10, address 0x4004e912.
 * REA evidence: ev_81ee8531fb39e054e4540b6d7756d0e390e401f89facdaead1c038e37d6d77c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e912(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1 + 0x1c;
  FUN_ram_40059b4a(iVar1);
  *(undefined1 *)(param_1 + 0x24) = 1;
  while( true ) {
    while ((iVar3 = *(int *)(param_1 + 0x18), iVar3 == 0 && (*(char *)(param_1 + 0x25) == '\0'))) {
      FUN_ram_40059b70(iVar1);
    }
    if (*(char *)(param_1 + 0x25) != '\0') break;
    if (*(uint *)(iVar3 + 4) < 10) {
      uVar2 = *(undefined4 *)(iVar3 + 0x4c);
      switch(*(uint *)(iVar3 + 4)) {
      case 0:
        FUN_ram_40050422(param_1,uVar2,iVar3 + 8);
        break;
      case 1:
        FUN_ram_4004f276(param_1,uVar2,iVar3 + 8);
        break;
      case 2:
        FUN_ram_4004f930(param_1,uVar2,iVar3 + 8);
        break;
      case 3:
        FUN_ram_40050ff0(param_1,uVar2,iVar3 + 8);
        break;
      case 4:
        FUN_ram_40050ea6(param_1,uVar2,iVar3 + 8);
        break;
      case 5:
        FUN_ram_40050ec0(param_1,uVar2,iVar3 + 8);
        break;
      case 6:
        FUN_ram_40051008(param_1);
        break;
      case 7:
        FUN_ram_4004ee90(param_1,uVar2,iVar3 + 8);
        break;
      case 8:
        FUN_ram_40053548(param_1);
        break;
      case 9:
        FUN_ram_4005263a(param_1,uVar2,iVar3 + 8);
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 3;
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_ram_4004c5c6();
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_ram_40059b9a(iVar1);
  return;
}


/* NanoCore 1.10, address 0x4004e9f2.
 * REA evidence: ev_93d94f56a256e446f81f9df947beb8c4a43923b07342ce10e95b8b13244cbece
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004e9f2(int param_1)

{
  *(undefined1 *)(param_1 + 0x25) = 1;
  if (*(char *)(param_1 + 0x24) != '\0') {
    FUN_ram_40059b86(param_1 + 0x1c);
  }
  FUN_ram_40059ae8(param_1 + 0x20);
  return;
}


/* NanoCore 1.10, address 0x4004ea82.
 * REA evidence: ev_be42cc16691f97df12023053e07cc8a80fb16074f59ecb1f52c8c02a8f4ca179
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ea82(void)

{
  int iVar1;
  
  FUN_ram_40051f00();
  iVar1 = FUN_ram_4004c540(0x2c);
  *(undefined1 **)(iVar1 + 0xc) = &LAB_ram_4004ea20;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_ram_4004e8b2;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(code **)(iVar1 + 0x14) = FUN_ram_4004e9f2;
  FUN_ram_40059aa8(iVar1 + 0x20,0x14,FUN_ram_4004e912,0x8000,iVar1);
  return;
}


/* NanoCore 1.10, address 0x4004eace.
 * REA evidence: ev_e931566b2fae0d8e328b21591b8b35883b80a1ff3d7a50a3e3bb2068c007bc67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004eace(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                     int param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  
  iVar6 = FUN_ram_40049d8e(param_8);
  if (param_7 == 1) {
    if (iVar6 == 0x10) {
      puVar8 = (undefined2 *)(param_2 + param_4 * 2);
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        iVar2 = iVar6;
        puVar3 = puVar8;
        for (iVar10 = 0; puVar3 = puVar3 + -1, iVar10 < param_4; iVar10 = iVar10 + 1) {
          iVar4 = iVar2 * 2;
          iVar2 = iVar2 + (param_5 >> 1);
          *puVar3 = *(undefined2 *)(param_1 + iVar4);
        }
        puVar8 = (undefined2 *)((int)puVar8 + (param_6 & 0xfffffffe));
      }
    }
    else if (iVar6 == 0x18) {
      iVar10 = (param_3 + -1) * param_6;
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        puVar11 = (undefined1 *)(param_1 + iVar6 * 3);
        puVar7 = (undefined1 *)(param_2 + iVar10);
        for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
          *puVar7 = *puVar11;
          puVar7[1] = puVar11[1];
          puVar1 = puVar11 + 2;
          puVar11 = puVar11 + param_5;
          puVar7[2] = *puVar1;
          puVar7 = puVar7 + 3;
        }
        iVar10 = iVar10 - param_6;
      }
    }
    else if (iVar6 == 0x20) {
      puVar9 = (undefined4 *)(param_2 + param_4 * 4);
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        puVar5 = puVar9;
        for (iVar2 = 0; puVar5 = puVar5 + -1, iVar2 < param_4; iVar2 = iVar2 + 1) {
          iVar4 = iVar10 * 4;
          iVar10 = iVar10 + (param_5 >> 2);
          *puVar5 = *(undefined4 *)(param_1 + iVar4);
        }
        puVar9 = (undefined4 *)((int)puVar9 + (param_6 & 0xfffffffc));
      }
    }
  }
  else if (param_7 == 2) {
    if (iVar6 == 0x10) {
      iVar10 = 0;
      puVar8 = (undefined2 *)(param_2 + (param_3 + (param_4 + -1) * (param_6 >> 1)) * 2);
      for (iVar6 = 0; iVar6 < param_4; iVar6 = iVar6 + 1) {
        puVar3 = puVar8;
        for (iVar2 = 0; puVar3 = puVar3 + -1, iVar2 < param_3; iVar2 = iVar2 + 1) {
          *puVar3 = *(undefined2 *)(param_1 + iVar10 * 2 + iVar2 * 2);
        }
        puVar8 = puVar8 + -(param_6 >> 1);
        iVar10 = iVar10 + (param_5 >> 1);
      }
    }
    else if (iVar6 == 0x18) {
      iVar6 = (param_4 + -1) * param_6;
      iVar10 = 0;
      for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
        puVar7 = (undefined1 *)(iVar6 + param_3 * 3 + param_2);
        puVar11 = (undefined1 *)(param_1 + iVar10);
        for (iVar4 = 0; iVar4 < param_3; iVar4 = iVar4 + 1) {
          puVar7[-3] = *puVar11;
          puVar7[-2] = puVar11[1];
          puVar7[-1] = puVar11[2];
          puVar7 = puVar7 + -3;
          puVar11 = puVar11 + 3;
        }
        iVar10 = iVar10 + param_5;
        iVar6 = iVar6 - param_6;
      }
    }
    else if (iVar6 == 0x20) {
      param_5 = param_5 >> 2;
      iVar10 = 0;
      puVar9 = (undefined4 *)(param_2 + (param_3 + (param_4 + -1) * param_5) * 4);
      for (iVar6 = 0; iVar6 < param_4; iVar6 = iVar6 + 1) {
        puVar5 = puVar9;
        for (iVar2 = 0; puVar5 = puVar5 + -1, iVar2 < param_3; iVar2 = iVar2 + 1) {
          *puVar5 = *(undefined4 *)(param_1 + iVar10 * 4 + iVar2 * 4);
        }
        puVar9 = puVar9 + -param_5;
        iVar10 = iVar10 + param_5;
      }
    }
  }
  else if (param_7 == 3) {
    if (iVar6 == 0x10) {
      param_2 = param_2 + (param_3 + -1) * (param_6 >> 1) * 2;
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
          iVar4 = iVar10 * 2;
          iVar10 = iVar10 + (param_5 >> 1);
          *(undefined2 *)(param_2 + iVar2 * 2) = *(undefined2 *)(param_1 + iVar4);
        }
        param_2 = param_2 + (param_6 >> 1) * -2;
      }
    }
    else if (iVar6 == 0x18) {
      iVar10 = 0;
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        puVar11 = (undefined1 *)(param_1 + iVar6 * 3);
        puVar7 = (undefined1 *)(iVar10 + param_4 * 3 + param_2);
        for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
          puVar7[-3] = *puVar11;
          puVar7[-2] = puVar11[1];
          puVar1 = puVar11 + 2;
          puVar11 = puVar11 + param_5;
          puVar7[-1] = *puVar1;
          puVar7 = puVar7 + -3;
        }
        iVar10 = iVar10 + param_6;
      }
    }
    else if (iVar6 == 0x20) {
      param_2 = param_2 + (param_3 + -1) * (param_6 >> 2) * 4;
      for (iVar6 = 0; iVar6 < param_3; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
          iVar4 = iVar10 * 4;
          iVar10 = iVar10 + (param_5 >> 2);
          *(undefined4 *)(param_2 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar4);
        }
        param_2 = param_2 + (param_6 >> 2) * -4;
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4004ed78.
 * REA evidence: ev_99f86175247711bb1308649283ef3071768bcef48cbe7ea4148e264460b56033
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ed78(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = FUN_ram_40049494(&iStack_20,param_3,param_2);
  if (iVar1 != 0) {
    iVar1 = param_3[1];
    iVar2 = *param_3;
    param_4 = param_4 + (iStack_20 - *param_2);
    for (uVar4 = 0; uVar4 < (iStack_18 - iStack_20) + 1U; uVar4 = uVar4 + 1) {
      uVar3 = (uint)*(byte *)(param_1 + (iStack_20 - iVar2) + (iStack_1c - iVar1) * param_5 + uVar4)
              + (uint)*(byte *)(param_4 + uVar4);
      if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      *(char *)(param_4 + uVar4) = (char)uVar3;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4004edf0.
 * REA evidence: ev_67f5a801dd2c1d808d66eab64f46b97a8ca839f70b8b03e9cde7f832c1fbbfdf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004edf0(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_3 >> 1;
  iVar1 = FUN_ram_4004a64a((param_1 + 0x5a) * 0x10000 >> 0x10);
  iVar2 = FUN_ram_4004a64a(param_1);
  uVar3 = ~param_3 & 1;
  iVar1 = (int)((param_2 - uVar4) * iVar1) >> 7;
  iVar2 = (int)((param_2 - uVar4) * iVar2) >> 7;
  if (iVar1 < 1) {
    iVar1 = iVar1 + 0x80 >> 8;
    *param_4 = iVar1 - uVar4;
    iVar1 = (iVar1 + uVar4) - uVar3;
  }
  else {
    iVar1 = iVar1 + -0x80 >> 8;
    *param_4 = (iVar1 - uVar4) + uVar3;
    iVar1 = iVar1 + uVar4;
  }
  param_4[2] = iVar1;
  if (iVar2 < 1) {
    iVar1 = iVar2 + 0x80 >> 8;
    param_4[1] = iVar1 - uVar4;
    iVar1 = (iVar1 + uVar4) - uVar3;
  }
  else {
    iVar1 = iVar2 + -0x80 >> 8;
    param_4[1] = uVar3 + (iVar1 - uVar4);
    iVar1 = iVar1 + uVar4;
  }
  param_4[3] = iVar1;
  return;
}


/* NanoCore 1.10, address 0x4004ee90.
 * REA evidence: ev_2bbf45ebc3928f71a1155ce3891549e7995d1042358f990dc13610d17316e697
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004f0ac) */

void FUN_ram_4004ee90(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puStack_238;
  undefined4 uStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  undefined1 *puStack_200;
  undefined1 *puStack_1fc;
  undefined1 *puStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int iStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined1 auStack_1d0 [4];
  int iStack_1cc;
  int iStack_1c4;
  undefined1 auStack_1c0 [4];
  int iStack_1bc;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined1 auStack_1a0 [36];
  undefined1 auStack_17c [36];
  undefined1 auStack_158 [36];
  undefined4 *puStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined1 uStack_128;
  undefined4 *puStack_124;
  undefined1 uStack_120;
  undefined1 auStack_11f [3];
  undefined4 uStack_11c;
  char cStack_118;
  undefined4 *puStack_114;
  undefined1 auStack_108 [28];
  int iStack_ec;
  undefined1 auStack_cc [28];
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  uint uStack_a8;
  undefined1 uStack_a4;
  byte bStack_a3;
  
  if (*(byte *)(param_2 + 0x3c) < 3) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x20);
  if ((uVar2 != 0) && (*(int *)(param_2 + 0x24) != *(int *)(param_2 + 0x28))) {
    uVar1 = *(ushort *)(param_2 + 0x34);
    FUN_ram_4000305c(&iStack_230,param_3,0x10);
    iVar3 = FUN_ram_40049494(&iStack_220,&iStack_230,*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      if ((int)(uint)uVar1 <= (int)uVar2) {
        uVar2 = (uint)uVar1;
      }
      iVar10 = *(int *)(param_2 + 0x24);
      iVar9 = *(int *)(param_2 + 0x28);
      if ((*(int *)(param_2 + 0x38) == 0) &&
         ((iVar10 + 0x168 == iVar9 || (iVar9 + 0x168 == iVar10)))) {
        FUN_ram_4004df08(auStack_cc);
        uStack_a4 = *(undefined1 *)(param_2 + 0x3c);
        uStack_ac = *(undefined2 *)(param_2 + 0x1c);
        uStack_aa = *(undefined1 *)(param_2 + 0x1e);
        uStack_b0 = 0x7fff;
        bStack_a3 = bStack_a3 & 0xe0 | 0xf;
        uStack_a8 = uVar2;
        FUN_ram_4004f276(param_1,auStack_cc,&iStack_230);
      }
      else {
        iStack_204 = *(int *)(param_2 + 0x20);
        iStack_20c = iStack_22c + iStack_204;
        iStack_208 = iStack_228 - iStack_204;
        iStack_210 = iStack_230 + iStack_204;
        iStack_204 = iStack_224 - iStack_204;
        for (; 0x167 < iVar10; iVar10 = iVar10 + -0x168) {
        }
        for (; 0x167 < iVar9; iVar9 = iVar9 + -0x168) {
        }
        puStack_200 = (undefined1 *)0x0;
        puStack_1fc = (undefined1 *)0x0;
        puStack_1f8 = (undefined1 *)0x0;
        uStack_1f4 = 0;
        FUN_ram_40052182(auStack_cc,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),
                         iVar10,iVar9);
        puStack_200 = auStack_cc;
        FUN_ram_4005221c(auStack_1a0,&iStack_230,0x7fff,0);
        puStack_1fc = auStack_1a0;
        if ((iStack_208 - iStack_210 < 0) || (iStack_204 - iStack_20c < 0)) {
          iVar3 = 0;
        }
        else {
          FUN_ram_4005221c(auStack_17c,&iStack_210,0x7fff,1);
          puStack_1f8 = auStack_17c;
        }
        iVar8 = (iStack_218 - iStack_220) + 1;
        uVar4 = FUN_ram_40059bae(iVar8);
        FUN_ram_4000305c(&uStack_1f0,&iStack_220,0x10);
        memset(&uStack_130,0,0x28);
        uStack_120 = *(undefined1 *)(param_2 + 0x3c);
        puStack_134 = &uStack_1f0;
        uStack_11c = uVar4;
        puStack_114 = puStack_134;
        if (*(int *)(param_2 + 0x38) == 0) {
          FUN_ram_4000305c(auStack_11f,param_2 + 0x1c,3);
        }
        else {
          FUN_ram_4004e68a(auStack_108,*(int *)(param_2 + 0x38),0);
          iStack_1d8 = *(ushort *)(iStack_ec + 4) - 1;
          uVar6 = (uint)(*(ushort *)(iStack_ec + 4) >> 1);
          iStack_1d4 = *(ushort *)(iStack_ec + 6) - 1;
          uStack_1e0 = 0;
          uStack_1dc = 0;
          FUN_ram_4004947a(&uStack_1e0,*(int *)(param_2 + 0x2c) - uVar6,
                           *(int *)(param_2 + 0x30) - uVar6);
          uStack_130 = *(undefined4 *)(iStack_ec + 0x10);
          uStack_128 = *(undefined1 *)(iStack_ec + 1);
          uStack_12c = (uint)*(ushort *)(iStack_ec + 8);
          puStack_124 = &uStack_1e0;
        }
        iVar11 = 0;
        if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
          iVar11 = FUN_ram_40059bae(uVar2 * uVar2);
          thunk_FUN_ram_4000505c(iVar11,0xff,uVar2 * uVar2);
          iStack_1a8 = uVar2 - 1;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          iStack_1a4 = iStack_1a8;
          FUN_ram_4005221c(auStack_158,&uStack_1b0,(int)uVar2 / 2,0);
          uStack_234 = 0;
          iVar7 = iVar11;
          puStack_238 = auStack_158;
          for (iVar12 = 0; iVar12 < (int)uVar2; iVar12 = iVar12 + 1) {
            iVar5 = FUN_ram_40051f0c(&puStack_238,iVar7,0,iVar12,uVar2);
            if (iVar5 == 0) {
              thunk_FUN_ram_4000505c(iVar7,0,uVar2);
            }
            iVar7 = iVar7 + uVar2;
          }
          FUN_ram_4004edf0((int)(short)iVar10,*(undefined2 *)(param_2 + 0x34),uVar2 & 0xff,
                           auStack_1d0);
          FUN_ram_4004947a(auStack_1d0,*(undefined4 *)(param_2 + 0x2c),
                           *(undefined4 *)(param_2 + 0x30));
          FUN_ram_4004edf0((int)(short)iVar9,*(undefined2 *)(param_2 + 0x34),uVar2 & 0xff,
                           auStack_1c0);
          FUN_ram_4004947a(auStack_1c0,*(undefined4 *)(param_2 + 0x2c),
                           *(undefined4 *)(param_2 + 0x30));
        }
        iStack_1e4 = iStack_1ec;
        for (iVar9 = 0; iVar9 < (iStack_214 - iStack_21c) + 1; iVar9 = iVar9 + 1) {
          thunk_FUN_ram_4000505c(uVar4,0xff,iVar8);
          iVar10 = FUN_ram_40051f0c(&puStack_200,uVar4,uStack_1f0,iStack_1ec,iVar8);
          cStack_118 = (char)iVar10;
          if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
            if ((iStack_1cc <= iStack_1ec) && (iStack_1ec <= iStack_1c4)) {
              if (iVar10 == 0) {
                thunk_FUN_ram_4000505c(uVar4,0,iVar8);
                cStack_118 = '\x02';
              }
              FUN_ram_4004ed78(iVar11,&uStack_1f0,auStack_1d0,uVar4,uVar2);
            }
            if ((iStack_1bc <= iStack_1ec) && (iStack_1ec <= iStack_1b4)) {
              if (cStack_118 == '\0') {
                thunk_FUN_ram_4000505c(uVar4,0,iVar8);
                cStack_118 = '\x02';
              }
              FUN_ram_4004ed78(iVar11,&uStack_1f0,auStack_1c0,uVar4,uVar2);
            }
          }
          FUN_ram_400538aa(param_1,&puStack_134);
          iStack_1ec = iStack_1ec + 1;
          iStack_1e4 = iStack_1e4 + 1;
        }
        FUN_ram_40051f60(auStack_cc);
        FUN_ram_40051f60(auStack_1a0);
        if (iVar3 != 0) {
          FUN_ram_40051f60(auStack_17c);
        }
        FUN_ram_40059be4(uVar4);
        if (*(int *)(param_2 + 0x38) != 0) {
          FUN_ram_4004e758(auStack_108);
        }
        if (iVar11 != 0) {
          FUN_ram_40059be4(iVar11);
        }
      }
    }
  }
  return;
}


