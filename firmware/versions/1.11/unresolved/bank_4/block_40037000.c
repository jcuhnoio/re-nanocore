/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40037000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400370dc.
 * REA evidence: ev_05b6d6ce1837e7d8c4e36741d85ebdc56e9e3e00a44434e5fc79c03dd01330fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400370dc(int param_1,int param_2,char *param_3)

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
        if (param_3 == &DAT_ram_00000200) {
          FUN_ram_40036bfc(*(undefined4 *)(param_1 + 0x60));
          return 0;
        }
        uVar3 = 0;
        if (param_3 != (char *)0x100) {
          return 0;
        }
        goto LAB_ram_4003715a;
      }
      if (param_2 != 3) {
        return 0;
      }
      if (param_3 != &DAT_ram_00000200) {
        return 0;
      }
      FUN_ram_40036600(*(undefined1 *)(param_1 + 0x60),iVar1);
    }
    uVar3 = 1;
LAB_ram_4003715a:
    FUN_ram_4003e58a(iVar1,1,uVar3);
    return 0;
  }
  switch(param_2) {
  case 0x80:
    FUN_ram_4003e6f4(iVar1);
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007f9a0);
    FUN_ram_4003b7a0(uVar2 >> 5,uVar2 & 0x1f);
    break;
  case 0x81:
    FUN_ram_4003e6d6(iVar1);
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007f9a0);
    FUN_ram_4003b7ce(uVar2 >> 5,uVar2 & 0x1f);
    break;
  case 0x83:
    if ((*(byte *)(param_1 + 0x5c) & 0xd) == 4) {
      FUN_ram_400419f2(*(undefined4 *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007f9a0),0);
    }
    if (1 < (byte)((*(byte *)(param_1 + 0x5c) & 0xf) - 5)) {
      return 0;
    }
    pcVar5 = *(code **)(param_1 + 0x40);
    puVar4 = &uStack_11;
    goto LAB_ram_40037210;
  case 0x84:
    if ((*(byte *)(param_1 + 0x5c) & 0xd) == 4) {
      FUN_ram_400419f2(*(undefined4 *)(*(int *)(iVar1 + 0x34) * 0xc + 0x3007f9a0),1);
    }
    if (1 < (byte)((*(byte *)(param_1 + 0x5c) & 0xf) - 5)) {
      return 0;
    }
    pcVar5 = *(code **)(param_1 + 0x40);
    puVar4 = &uStack_12;
LAB_ram_40037210:
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
    FUN_ram_4003e39c(iVar1,uVar3);
    break;
  case 0x87:
    FUN_ram_400378f4(*(int *)(param_1 + 0x60) + 0x25);
    FUN_ram_40036f9c(*(undefined4 *)param_3,*(undefined4 *)(param_1 + 0x60));
    FUN_ram_400378d0(*(int *)(param_1 + 0x60) + 0x25);
    FUN_ram_4003ff8a(1000);
    FUN_ram_4003e1b6(iVar1,1);
    FUN_ram_4003e1a0(iVar1);
    FUN_ram_4003e418(iVar1,*(undefined4 *)param_3);
    FUN_ram_4003e1b6(iVar1,0);
  }
  return 0;
}


/* NanoCore 1.11, address 0x400372ba.
 * REA evidence: ev_185fabb9802326b6560e472fef8011367fac0e857a503c279034752ec91ef3cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400372ba(void)

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
  
  FUN_ram_4000304c(auStack_58,&DAT_ram_4009386c,0x18);
  puVar7 = &DAT_ram_40097954;
  iVar6 = 0;
  while( true ) {
    uVar1 = (&DAT_ram_40097954)[iVar6 * 8] & 0xf;
    *(undefined ***)(&DAT_ram_3007f38c + uVar1 * 0x70) = &PTR_FUN_ram_40036fda_ram_40097940;
    FUN_ram_4000304c(&DAT_ram_3007f390 + uVar1 * 0x70,auStack_58,0x18);
    uVar8 = puVar7[2];
    iVar2 = 0x800;
    if (1499999 < uVar8) {
      iVar2 = 0x4000;
    }
    uVar3 = (&DAT_ram_40097954)[iVar6 * 8];
    iVar5 = uVar1 * 0x70;
    *(uint *)(&DAT_ram_3007f390 + iVar5) = uVar8;
    *(uint *)(&DAT_ram_3007f3a0 + iVar5) = uVar1;
    *(uint *)(&DAT_ram_3007f394 + iVar5) =
         (((uVar3 & 0x3ff) >> 8) - 1 & 3) << 4 | (uVar3 & 0xff) >> 4 | ((uVar3 & 0xfff) >> 10) << 6
         | iVar2 << 10 | *(uint *)(&DAT_ram_3007f394 + iVar5) & 0xfc000300;
    uVar4 = puVar7[4];
    iVar2 = puVar7[1];
    *(int *)(&DAT_ram_3007f398 + iVar5) = iVar2;
    (&DAT_ram_3007f39c)[iVar5] = (&DAT_ram_3007f39c)[iVar5] & 0xf0 | (byte)uVar4 & 0xf;
    *(undefined4 *)(&DAT_ram_3007f3a4 + iVar5) = puVar7[3];
    FUN_ram_40036f9c(uVar8,uVar1);
    FUN_ram_400378d0(uVar1 + 0x25);
    FUN_ram_4003888a(uVar1 + 0x1c);
    FUN_ram_4003ff8a(10000);
    FUN_ram_400388ca(uVar1 + 0x1c);
    uVar4 = FUN_ram_4003e52a(uVar1,&DAT_ram_40036592,FUN_ram_40036aac);
    *(undefined4 *)(uVar1 * 4 + 0x3007f980) = uVar4;
    if (1499999 < uVar8) {
      *(byte *)(uVar1 * 4 + 0x20801133) =
           (byte)(7 << (8 - ((_DAT_ram_20800004 & 0x1ffffff) >> 0x15) & 0x1f)) |
           *(byte *)(uVar1 * 4 + 0x20801133) & 0x1f;
    }
    iVar5 = uVar1 * 0x70;
    FUN_ram_400422d4(iVar5 + 0x3007f340,puVar7[5],iVar2,uVar4);
    if (iVar2 == 0xb03) {
      FUN_ram_4003e714(*(undefined4 *)(&DAT_ram_3007f388 + iVar5));
      FUN_ram_4003e906(*(undefined4 *)(&DAT_ram_3007f388 + iVar5),FUN_ram_400367fe,0);
      FUN_ram_4003e58a(*(undefined4 *)(&DAT_ram_3007f388 + iVar5),1,1);
      *(undefined4 *)(uVar1 * 4 + 0x3007f8a0) = 0x800;
      uVar4 = FUN_ram_400056e4(0x800,0x20);
      iVar5 = uVar1 * 0x10;
      *(undefined4 *)(iVar5 + 0x3007f2c4) = uVar4;
      uVar4 = FUN_ram_400056e4(0x800,0x20);
      *(undefined4 *)(iVar5 + 0x3007f2c0) = uVar4;
      iVar2 = FUN_ram_400047d8(s_uart_tx0_ram_3004a97c + uVar1 * 9,0,0);
      *(int *)(iVar5 + 0x3007f2cc) = iVar2;
      if (iVar2 == 0) {
        return 0xffffffff;
      }
    }
    FUN_ram_40036e64(iVar6,uVar1);
    puVar7 = puVar7 + 8;
    if (iVar6 != 0) break;
    iVar6 = 1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40037504.
 * REA evidence: ev_e70f7706290e271d97c10136adab96624977e8ff05c39835cc5dbd5d75445a4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037504(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_400378d0(0xf);
  if (((iVar2 == 0) && (iVar2 = FUN_ram_4003888a(0x18), iVar2 == 0)) &&
     (iVar2 = FUN_ram_400388ca(0x18), iVar2 == 0)) {
    FUN_ram_4003ea7a(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff6;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4003756a.
 * REA evidence: ev_a277074b6a11cbcf79d79234fdbda27e18dd5238a08cb9634178507d0b8cb037
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003756a(int param_1,uint param_2)

{
  if (3 < param_2) {
    param_2 = 3;
  }
  *(uint *)(param_1 + 0x54) = param_2;
  FUN_ram_4003ea1c(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
  FUN_ram_4003e9f6(0);
  return 0;
}


/* NanoCore 1.11, address 0x40037590.
 * REA evidence: ev_934c7eab8b3afef043119ab29f41f94daa3cbd1364bb75d0010d2fab36bf8ce8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037590(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x5c) <= param_2) {
    param_2 = *(uint *)(param_1 + 0x5c) - 1;
  }
  *(uint *)(param_1 + 0x58) = param_2;
  FUN_ram_4003ea3a(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
  FUN_ram_4003e9f6(0);
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) {
    FUN_ram_4003eb5c(1);
  }
  return 0;
}


/* NanoCore 1.11, address 0x400375cc.
 * REA evidence: ev_00b84c9b698ebf6c3e31b2be7756ecc113564370d698ff3e36545ee1a4d8a3a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400375cc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  iVar1 = FUN_ram_4003eb6a();
  if (iVar1 != 0) {
    if (*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 0x58)) {
      FUN_ram_40037590(param_1);
    }
  }
  FUN_ram_4003ea5a(*(undefined4 *)(param_1 + 100),param_1 + 0x50);
  FUN_ram_4003e9f6(0);
  return 0;
}


/* NanoCore 1.11, address 0x40037606.
 * REA evidence: ev_6c8adb2adda0177ee451dcc8b8045fa0334ab006bc28ef9e864cd6980d4d7841
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40037606(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003eab6();
  if (iVar1 == 0) {
    FUN_ram_4003eb34(1,_DAT_ram_3007fa60);
  }
  else {
    FUN_ram_4003e9f6(_DAT_ram_3007fa54);
    FUN_ram_4003eb78();
  }
  return 0;
}


/* NanoCore 1.11, address 0x40037702.
 * REA evidence: ev_1fa77fd2733b8b58e778d67e93d640e649219a383a507e4834ae3a6f5a65ffbc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037702(void)

{
  FUN_ram_4003ec5a();
  FUN_ram_4003ecb8();
  FUN_ram_4003ed4a();
  return 0;
}


/* NanoCore 1.11, address 0x4003771a.
 * REA evidence: ev_0daf900306c4a247741439859104ea1178d87250a96e6f4bb548244af8ec16ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003774e) */
/* WARNING: Removing unreachable block (ram,0x40037762) */
/* WARNING: Removing unreachable block (ram,0x40037766) */
/* WARNING: Removing unreachable block (ram,0x4003777e) */
/* WARNING: Removing unreachable block (ram,0x40037782) */
/* WARNING: Removing unreachable block (ram,0x40037786) */
/* WARNING: Removing unreachable block (ram,0x40037768) */
/* WARNING: Removing unreachable block (ram,0x4003776a) */
/* WARNING: Removing unreachable block (ram,0x40037772) */

void FUN_ram_4003771a(void)

{
  fence();
  do {
    fence();
  } while( true );
}


/* NanoCore 1.11, address 0x40037788.
 * REA evidence: ev_56d6431443a513f075bef0f45f48baa08907ae0c5e2900f0de6b65ac82463abb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400377ce) */

int FUN_ram_40037788(float param_1,ushort *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_4003e078();
  if (iVar1 == 0) {
    iVar1 = (int)(param_1 * DAT_ram_400979cc);
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


/* NanoCore 1.11, address 0x400377e4.
 * REA evidence: ev_bd14892b91f5cc9cda4d4a27d1d1d8448a7e4564928856902683193d69baf870
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400377e4(void)

{
  fence();
  fence();
  _DAT_ram_19250004 = _DAT_ram_19250004 | 0xff02;
  return;
}


/* NanoCore 1.11, address 0x40037800.
 * REA evidence: ev_e43c853501eb75caec1b7ba3964d3fe062e4f01579c2b14c104f856154fa6d58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40037800(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40037a2e(0x3d,48000000);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40037876(0x3d), iVar1 < 0)) {
    iVar1 = -1;
  }
  else {
    FUN_ram_400377e4();
    _DAT_ram_3007fa68 = FUN_ram_4003771a();
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40037842.
 * REA evidence: ev_2ada1a21e2bb6769b602b6c74ddaa1f426c8df26ca9b2ed918cfa7465a739567
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40037842(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_ram_3007fa6c == 0) {
    iVar2 = FUN_ram_40037800();
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      _DAT_ram_3007fa6c = 1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40037876.
 * REA evidence: ev_f3daf853a25d97790231f68ef4268364507db7b81951a29267eb644aea316541
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037876(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x20), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40037894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003789a.
 * REA evidence: ev_6ec2f2b8bce48f3d993f55b47a88b5080b9da7456bd7e4b952c2d946a02f7aed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003789a(int param_1)

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


/* NanoCore 1.11, address 0x400378d0.
 * REA evidence: ev_2761de206c92157c8c6e91f6cece231e1b16e7aaad1e26674553cc46afff7315
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400378d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (puVar3 = (undefined4 *)*piVar1, puVar3 != (undefined4 *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar3, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x400378ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x400378f4.
 * REA evidence: ev_d49891460cf50bfa71893afb0c601a52df7c8d3f092c4c2982cedb882a91bfe1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400378f4(int param_1)

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


/* NanoCore 1.11, address 0x4003792a.
 * REA evidence: ev_8fb6d4d154972374ed7360c6c545788c5e4bf2224b51bc9bd6fece65e6f43bfd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003792a(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40037948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003794e.
 * REA evidence: ev_8f3144e5cb4407902c21615e0dfa814f6bcb543a2266db0453841790bd3427d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003794e(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x10), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4003796c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x40037972.
 * REA evidence: ev_99d0fa1c0ff6e8645ea1b981a64cb64df79b90ae3b9a256eab6d23c8bf9f13ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037972(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40037990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x40037996.
 * REA evidence: ev_472b8dcba1047bcebc46238e4de0d84d62d9f11f70a09cee6a3be544b1892680
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037996(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 - 1U < 0x4b) &&
       (piVar1 = *(int **)(gp + -0x16c + param_1 * 4), piVar1 != (int *)0x0)) &&
      (iVar3 = *piVar1, iVar3 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x1c), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x400379b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x400379ba.
 * REA evidence: ev_f1cac5dfad2a7d437c86dd071d19625ee5b641d361c473d11fcef14af369c134
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400379ba(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  
  while (((param_1 - 1U < 0x4b &&
          (piVar2 = *(int **)(gp + -0x16c + param_1 * 4), piVar2 != (int *)0x0)) && (*piVar2 != 0)))
  {
    UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400379f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(piVar2);
      return uVar1;
    }
    param_1 = FUN_ram_40037996();
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x400379fe.
 * REA evidence: ev_3078f8a4152b7ed2f262cab1ddfb231914187120b0af817fad8912f98eb72d4c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400379fe(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 - 1U < 0x4b) {
    iVar1 = FUN_ram_40037996();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_ram_400379fe(iVar1,0);
    }
    uVar2 = FUN_ram_4003794e(param_1,uVar2);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40037a2e.
 * REA evidence: ev_9dcd61b5853ca423179e8fe3b3e9f1d071575165b85aa660f431b3b4d00f3463
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037a2e(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (0x4a < param_1 - 1U) {
    return 0;
  }
  FUN_ram_40037996();
  uVar1 = FUN_ram_400379fe();
  iVar2 = FUN_ram_4003794e(param_1,uVar1);
  if (iVar2 != param_2) {
    uVar1 = FUN_ram_4003792a(param_1,param_2,uVar1);
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40037a7e.
 * REA evidence: ev_232379f6a5d4d0b225aef8195bb84143c3321732530bcace060e47b5533c96c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037a7e(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (0x4a < param_1 - 1U) {
    return 0;
  }
  iVar1 = FUN_ram_40037996();
  if (iVar1 != 0) {
    iVar2 = FUN_ram_400379ba();
    if (iVar2 == 0) {
      FUN_ram_40037a7e(iVar1);
    }
    uVar3 = FUN_ram_400378d0(param_1);
    return uVar3;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40037ac4.
 * REA evidence: ev_562dbdc2e3cff6830996eacd867968752d1557edfc5dbd80682763285ab5d9a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037ac4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (0x4a < param_1 - 1U) {
    return 0;
  }
  iVar1 = FUN_ram_40037996();
  if (iVar1 != 0) {
    iVar2 = FUN_ram_400379ba();
    if (iVar2 == 0) {
      FUN_ram_40037a7e(iVar1);
    }
    iVar1 = FUN_ram_40037876(param_1);
    if (iVar1 != 0) {
      uVar3 = FUN_ram_400378d0(param_1);
      return uVar3;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40037b14.
 * REA evidence: ev_fd6d9710cb6f958d57bb7297c25379c25780f8cbd4af244264f92a0c6801b65c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40037b14(undefined4 param_1)

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


/* NanoCore 1.11, address 0x40037b78.
 * REA evidence: ev_0b257ad9d0f2efe947dae47765fea427652092ddebf6d2e6ddbc1f995781dc1d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037b78(int param_1,undefined4 param_2,int param_3)

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
  uVar4 = FUN_ram_40003b9c((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_2,0);
  uVar3 = (uint)uVar4;
  fence();
  if (((int)((ulonglong)uVar4 >> 0x20) != 0) || (0x1ff < uVar3)) {
    uVar3 = 0x1ff;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x18020000) = uVar3 << 0x14 | uVar2 | 0xc0060000;
  return;
}


/* NanoCore 1.11, address 0x40037d16.
 * REA evidence: ev_99ac3f055cab52c5c1242622d7c59f9b2e72e9bfe973ed3696b4ecf99c3a60e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40037d16(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x14);
  uVar2 = *param_3;
  uVar3 = FUN_ram_40037b14(s_pll_fra2_ram_400979f8);
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


/* NanoCore 1.11, address 0x40037e0a.
 * REA evidence: ev_5b426b00bde7805ec2c1f83e6cbd1677d981d95c3698e0f715f608d140b6fcfe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40037e0a(int param_1,uint param_2,uint param_3)

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
    uVar4 = FUN_ram_40037b14(s_pll_fra2_ram_400979f8);
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
          uVar11 = FUN_ram_40003b9c((int)lVar3,
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
        FUN_ram_40037b78(param_1,param_3);
      }
      fence();
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) =
           *(uint *)(*(int *)(param_1 + 8) + 0x18020000) | 0x50000;
      FUN_ram_4003ff8a(200);
      fence();
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) =
           *(uint *)(*(int *)(param_1 + 8) + 0x18020000) & 0xffefffff | 0x100000;
    }
  }
  return 0;
}


