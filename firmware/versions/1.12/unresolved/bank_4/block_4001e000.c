/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4001e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4001e66a.
 * REA evidence: ev_4387bb2d62e8f454bf53ebaa411efe63415f451420bf5a46c7080f1d3b48e540
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e66a(undefined4 param_1,undefined4 param_2)

{
  _DAT_ram_3006b140 = param_2;
  _DAT_ram_3006b144 = param_1;
  FUN_ram_4001b7a4();
  return;
}


/* NanoCore 1.12, address 0x4001e67e.
 * REA evidence: ev_c7db159cde91cd21cbf53960c1a3fc0b25ea61039be6548fe7f9ca0cbddbf555
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e67e(void)

{
  FUN_ram_4001d95a();
  DAT_ram_3006a9d2 = 0;
  DAT_ram_3006ad24 = 0;
  if (_DAT_ram_3006aa18 != 0) {
    FUN_ram_400440ce(_DAT_ram_3006aa18,1);
  }
  FUN_ram_40018184(0);
  return;
}


/* NanoCore 1.12, address 0x4001e6b0.
 * REA evidence: ev_94d4fa4aa5b9ba0a6c29010bd681182b2685a157b73deed80745b2585ea4ab0c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001e6b0(void)

{
  return DAT_ram_3006a9d2;
}


/* NanoCore 1.12, address 0x4001e6ba.
 * REA evidence: ev_d682b73b3f761e1898915182de34874338c869f86025f0fd7a3124d490d6778f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001e6ba(undefined1 param_1)

{
  DAT_ram_3006ad24 = param_1;
  return;
}


/* NanoCore 1.12, address 0x4001e6c4.
 * REA evidence: ev_2bcd96702f1a08f26fbb727a30b4eefce8f089e36d6be1fcccedb36eea55bbaf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e6c4(void)

{
  undefined3 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_ram_3006a9d2 != '\0') {
    iVar2 = FUN_ram_4001ac0e();
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4001be72(_DAT_ram_3006ad28);
    }
    else {
      uVar3 = 0;
    }
    FUN_ram_40018184(uVar3);
    uVar1 = FUN_ram_400170ea(DAT_ram_3006aa1c);
    FUN_ram_40018310(uVar1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001e718.
 * REA evidence: ev_a4c40346e6a7f7ef7c9630f0d4973b6758c58abd985946980515230291cf25cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001e718(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  
  iVar1 = _DAT_ram_3006ad28;
  if (DAT_ram_3006a9d2 == '\0') {
    return 0;
  }
  if (DAT_ram_3006aa1c != '\0') {
    if (_DAT_ram_3006aa20 == 100) {
      if ((_DAT_ram_3006aa24 == 0) ||
         (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009acc0,0x10), iVar1 != 0)) {
        if ((_DAT_ram_3006aa24 == 0) ||
           (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0c4,0x10), iVar1 != 0))
        goto LAB_ram_4001e796;
        pcVar9 = FUN_ram_4001c6b2;
        puVar8 = &DAT_ram_3004ad24;
        puVar7 = &DAT_ram_3004ad20;
        pcVar6 = FUN_ram_4001b140;
        puVar4 = &DAT_ram_3006aec8;
        puVar2 = &DAT_ram_4009a0c4;
      }
      else {
        pcVar9 = FUN_ram_4001c600;
        puVar8 = &DAT_ram_3004ad00;
        puVar7 = &DAT_ram_3004acfc;
        pcVar6 = FUN_ram_4001bd36;
        puVar4 = &DAT_ram_3006a744;
        puVar2 = &DAT_ram_4009acc0;
      }
      FUN_ram_4001c7bc(puVar2,puVar4,pcVar6,puVar7,puVar8,pcVar9);
    }
LAB_ram_4001e796:
    iVar5 = -1;
    uVar3 = 0;
    goto LAB_ram_4001e79a;
  }
  iVar5 = 0x66;
  if ((_DAT_ram_3006ad28 != (DAT_ram_3006ad54 != '\0') + 1) &&
     (iVar5 = 0x65, _DAT_ram_3006ad28 != 0)) {
    iVar5 = 1;
    if (DAT_ram_3006ad54 == '\0') {
      iVar5 = -1;
    }
    if (_DAT_ram_3006ad28 == iVar5) {
      if ((_DAT_ram_3006aa24 == 0) ||
         (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009acc0,0x10),
         uVar3 = DAT_ram_3004acfc, iVar1 != 0)) {
        if ((_DAT_ram_3006aa24 != 0) &&
           (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0c4,0x10), iVar1 == 0)) {
          uVar3 = DAT_ram_3004ad20;
          if (DAT_ram_3006aec8 == '\0') {
            FUN_ram_4001b140();
          }
          goto LAB_ram_4001e858;
        }
      }
      else {
        if (DAT_ram_3006a744 == '\0') {
          FUN_ram_4001bd36();
        }
        DAT_ram_3004ad00 = uVar3;
        uVar3 = DAT_ram_3004ad24;
LAB_ram_4001e858:
        DAT_ram_3004ad24 = uVar3;
        FUN_ram_4001c1cc(_DAT_ram_3006aa24);
      }
      iVar5 = 100;
    }
    else {
      iVar5 = FUN_ram_4001ac48(param_1,0x65);
      if (iVar1 < iVar5) {
        return 0;
      }
      iVar5 = iVar1 - iVar5;
    }
  }
  uVar3 = 1;
LAB_ram_4001e79a:
  FUN_ram_4001da56(uVar3,iVar5);
  return 0;
}


/* NanoCore 1.12, address 0x4001e8ac.
 * REA evidence: ev_1104a322da306ac042a460f7e9423b348e45392556d67162fe7118276d23ba10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001e8ac(void)

{
  FUN_ram_4004d0b2(0x3006a9d8);
  FUN_ram_4004d0b2(0x3006acb4);
  FUN_ram_4004d0b2(0x3006ac74);
  FUN_ram_4004d0b2(0x3006ab64);
  return;
}


/* NanoCore 1.12, address 0x4001e8e4.
 * REA evidence: ev_908fc2bea242b12199ad544de14aef4097adae639c98e21fb2a46e1db1610686
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001e8e4(void)

{
  return _DAT_ram_3006aa68;
}


/* NanoCore 1.12, address 0x4001e8ee.
 * REA evidence: ev_ab760ddcfba47eb9dbec2f1670ab3b48855ce2cb1452ebdf58e5b4661119fdd3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001e8ee(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4001ad02();
  FUN_ram_4001b7d6(uVar1,param_2);
  return;
}


/* NanoCore 1.12, address 0x4001e902.
 * REA evidence: ev_a06a6dbe88b55ef5ad5b208e1ae517315dca22601f0447fde6b78debdae22533
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001e902(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4001ad02();
  if (-1 < iVar1) {
    uVar2 = FUN_ram_40023324();
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4001e91e.
 * REA evidence: ev_5eab934f424bde83b42c85c79b15d180028bc5eeb08359e448a74b34ec3ef698
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4001e91e(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_ram_4001ad02();
  fVar2 = 0.0;
  if (-1 < iVar1) {
    fVar2 = 0.0;
    if (param_3 < 0xc) {
      iVar1 = FUN_ram_4001b4fe(CONCAT44(param_3,param_1),iVar1,param_3 & 0xff);
      fVar2 = (float)iVar1 / DAT_ram_40099f28;
    }
  }
  return fVar2;
}


/* NanoCore 1.12, address 0x4001e962.
 * REA evidence: ev_aaa471ce1a2e260af0259a21d1cda8d3071e3df0d94e5f44e8dbc057f451ab00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e962(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_10;
  
  iVar1 = FUN_ram_4001ad02();
  if ((-1 < iVar1) && (param_3 < 0xc)) {
    iVar2 = FUN_ram_4001b4fe(CONCAT44(uStack_10,param_1));
    *(short *)((param_3 + iVar1 * 0xc) * 2 + 0x3006adfc) = (short)iVar2;
    FUN_ram_40023434((float)iVar2 / DAT_ram_40099f28,iVar1,param_3 & 0xff);
    if ((DAT_ram_3006a9d2 != '\0') &&
       (((iVar2 = FUN_ram_4001ad02(_DAT_ram_3006aa24), iVar2 == iVar1 &&
         (uVar3 = (uint)DAT_ram_3006acf4 * 0x50000 >> 0x10, (int)uVar3 <= (int)param_3)) &&
        ((int)param_3 < (int)(DAT_ram_3006ad5c + uVar3))))) {
      FUN_ram_4001b66a(iVar2,param_3 - uVar3);
      FUN_ram_4001d88c(param_3 - uVar3,1);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4001ea16.
 * REA evidence: ev_5bb52105e4fe06fb0b605fc62c3fdbe4ef22e2463faff6adcd2a9b0e697a5a78
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_4001ea16(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_ram_4001ad02();
  if ((-1 < iVar1) && (param_2 < 0xc)) {
    uVar2 = FUN_ram_40023482(iVar1,param_2 & 0xff);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4001ea42.
 * REA evidence: ev_e53d62cfbdacb0b2fb1380c0b6a39026fa7b556939fc5794be6e31af06080fc1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001ea42(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4001ad02();
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_40023402();
    *(char *)(iVar1 + 0x3006aebc) = (char)uVar2;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4001ea6e.
 * REA evidence: ev_014d0ab01c140d9d2adcf56d30b2c90dbfc19663dd552e5a6065b32702c627e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001ea6e(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 5;
  }
  iVar1 = FUN_ram_40025c22();
  uVar2 = 5;
  if (iVar1 != 0xff) {
    uVar3 = FUN_ram_4001ea42(param_1);
    uVar2 = nc_effect_parameter_count(iVar1,uVar3,1);
    if (0xc < uVar2) {
      uVar2 = 0xc;
    }
    uVar2 = uVar2 & 0xff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4001ea74.
 * REA evidence: ev_aefadedb761a7efcc85119eacbc2bee2633fb29a95d898ae31e4b45599bf6a00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001ea74(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40025c22();
  uVar2 = 5;
  if (iVar1 != 0xff) {
    uVar3 = FUN_ram_4001ea42(param_1);
    uVar2 = nc_effect_parameter_count(iVar1,uVar3,1);
    if (0xc < uVar2) {
      uVar2 = 0xc;
    }
    uVar2 = uVar2 & 0xff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4001eab6.
 * REA evidence: ev_229b68d49bdf2a58fc39b30c0ab156ae109d08aa51c607e40704ee2aa379a9c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001ec7c) */
/* WARNING: Removing unreachable block (ram,0x4001ec80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001eab6(undefined *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_30;
  uint uStack_2c;
  ushort uStack_28;
  ushort uStack_26;
  
  puVar1 = &DAT_ram_4009acc0;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  FUN_ram_4001d95a();
  _DAT_ram_3006aa24 = puVar1;
  DAT_ram_3006ad54 = FUN_ram_4001ac58(puVar1);
  iVar3 = FUN_ram_4000513e(puVar1,&DAT_ram_4009acc0,0x10);
  if (iVar3 == 0) {
    FUN_ram_4001bd36();
  }
  else {
    iVar3 = FUN_ram_4000513e(puVar1,&DAT_ram_4009a0c0,0x10);
    if (iVar3 == 0) {
      FUN_ram_4001afea();
    }
    else {
      iVar3 = FUN_ram_4000513e(puVar1,&DAT_ram_4009a0c4,0x10);
      if (iVar3 == 0) {
        FUN_ram_4001b140();
      }
    }
  }
  DAT_ram_3006acf4 = 0;
  uVar4 = FUN_ram_4001ea6e(puVar1);
  DAT_ram_3006ad1c = (undefined1)uVar4;
  if (5 < uVar4) {
    uVar4 = 5;
  }
  DAT_ram_3006ad5c = (undefined1)uVar4;
  FUN_ram_4001c1cc(puVar1);
  local_30 = FUN_ram_40014c88();
  iVar3 = FUN_ram_4002d3a8(3);
  iVar5 = FUN_ram_4002d3c6(3,&uStack_2c);
  if (iVar5 != 0) {
    local_30 = uStack_2c;
  }
  local_30 = local_30 & 0xffffff;
  if (_DAT_ram_3006aa18 != 0) {
    FUN_ram_400489d2(_DAT_ram_3006aa18,local_30,0);
    FUN_ram_400489f0(_DAT_ram_3006aa18,0xff,0);
  }
  if (_DAT_ram_3006a9d4 != 0) {
    if (iVar3 == 0) {
      FUN_ram_400440ce(_DAT_ram_3006a9d4,1);
    }
    else {
      FUN_ram_400172bc(_DAT_ram_3006a9d4,0x3006a9d8);
    }
  }
  FUN_ram_40017090(0x3006aa28,0x40,puVar1);
  if (_DAT_ram_3006aa70 != 0) {
    iVar3 = FUN_ram_4001ad02(puVar1);
    if ((((iVar3 < 0) || (_DAT_ram_3006b144 == 0)) || (_DAT_ram_3006b140 <= iVar3)) ||
       ((*(int *)(_DAT_ram_3006b144 + iVar3 * 4) == 0 || (iVar3 = FUN_ram_40056df2(), iVar3 == 0))))
    {
      FUN_ram_400172bc(_DAT_ram_3006aa70,0x3006aa28);
    }
    else {
      FUN_ram_40057218(_DAT_ram_3006aa70,iVar3);
      FUN_ram_40043ba4(_DAT_ram_3006aa70,1);
    }
  }
  iVar3 = FUN_ram_4001ad02(puVar1);
  if (-1 < iVar3) {
    FUN_ram_4001af3a(_DAT_ram_3006aa70,*(undefined1 *)(iVar3 + 0x3006adf4));
  }
  FUN_ram_4001af50();
  DAT_ram_3004ad30 = 0x28;
  DAT_ram_3004ad2c = 0x28;
  iVar3 = FUN_ram_4004f6c8(0x3006ab64,&uStack_2c);
  if (((iVar3 == 1) && (uStack_28 != 0)) && (uStack_26 != 0)) {
    DAT_ram_3004ad2c = (uint)uStack_26;
    DAT_ram_3004ad30 = (uint)uStack_28;
  }
  piVar2 = (int *)&DAT_ram_3006ac60;
  do {
    FUN_ram_400172bc(*piVar2,0x3006ab64);
    if (*piVar2 != 0) {
      FUN_ram_40057092(*piVar2,(int)DAT_ram_3004ad30 / 2,(int)DAT_ram_3004ad2c / 2);
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)0x3006ac74);
  FUN_ram_4001d562();
  return;
}


/* NanoCore 1.12, address 0x4001ecec.
 * REA evidence: ev_b6da3b0fe11468e424bab8e06352cbb0f4ff726b409c2514ec0c63605b10da38
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ecec(void)

{
  DAT_ram_3006a9d2 = 1;
  DAT_ram_3006ad24 = 0;
  FUN_ram_4001eab6();
  if (_DAT_ram_3006aa18 != 0) {
    FUN_ram_40043ba4(_DAT_ram_3006aa18,1);
  }
  FUN_ram_4001da56(0,0xffffffff);
  FUN_ram_4001c8b0(0);
  return;
}


/* NanoCore 1.12, address 0x4001ed28.
 * REA evidence: ev_85dd3b50982ea374db74e8d73c8dfcb4e3ed307c3499a257a633e23b168f0e6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ed28(void)

{
  FUN_ram_4001cb90();
  FUN_ram_4001b7a4();
  if (DAT_ram_3006a9d2 != '\0') {
    FUN_ram_4001eab6(_DAT_ram_3006aa24);
    FUN_ram_4001d562();
    FUN_ram_4001bf0a();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001ed5c.
 * REA evidence: ev_6743aad6c717d91623958b6f11fac4a25efee48f31f6d42a3ca9b532808fe06c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ed5c(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_60 [7];
  
  uVar2 = DAT_ram_3004ad38;
  uVar6 = DAT_ram_3004ad34;
  puVar3 = local_60;
  DAT_ram_3004ad34 = 0xffffffff;
  if (((-1 < (int)uVar6) && (DAT_ram_3006b1b0 != '\0')) &&
     (uVar4 = FUN_ram_4001ad02(&DAT_ram_3006b1b0), -1 < (int)uVar4)) {
    bVar1 = false;
    if ((DAT_ram_3006a9d2 != '\0') && (_DAT_ram_3006aa24 != 0)) {
      iVar5 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_3006b1b0,0x10);
      bVar1 = iVar5 == 0;
    }
    iVar5 = FUN_ram_4002369c(uVar4,uVar6 & 0xff);
    if (iVar5 == 0) {
      if (uVar4 == 1) {
        if ((int)uVar6 < 8) {
          DAT_ram_3004ad18 = uVar6 + 0x1e;
        }
        else {
          DAT_ram_3004ad18 = -1;
        }
      }
      memset(local_60,0,0x30);
      uVar6 = FUN_ram_40033b16(uVar4 & 0xff,uVar6 & 0xff,local_60,0xc);
      for (uVar7 = 0; (uVar7 & 0xff) < uVar6; uVar7 = uVar7 + 1) {
        if (bVar1) {
          FUN_ram_4001e962(*puVar3,_DAT_ram_3006aa24,uVar7);
        }
        FUN_ram_4001bd04(*puVar3,&DAT_ram_3006b1b0,uVar7);
        FUN_ram_4001b576(uVar4,uVar7 & 0xff);
        puVar3 = (undefined8 *)((int)puVar3 + 4);
      }
      if (bVar1) {
        FUN_ram_4001c1cc(_DAT_ram_3006aa24);
        DAT_ram_3006acf4 = 0;
        DAT_ram_3006ad1c = FUN_ram_4001ea6e(_DAT_ram_3006aa24);
        FUN_ram_4001d562();
        return;
      }
    }
    else {
      *(char *)(uVar4 + 0x3006aebc) = (char)uVar2;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4001eeba.
 * REA evidence: ev_68024831f10b3900272164c962fefbd1e028296373396511dd21faccf87e9ddf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001f4b2) */
/* WARNING: Removing unreachable block (ram,0x4001f2e4) */
/* WARNING: Removing unreachable block (ram,0x4001f12c) */
/* WARNING: Removing unreachable block (ram,0x4001f126) */
/* WARNING: Removing unreachable block (ram,0x4001f4a4) */
/* WARNING: Removing unreachable block (ram,0x4001f4b6) */
/* WARNING: Removing unreachable block (ram,0x4001f2ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001eeba(uint param_1)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  code *pcVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  uVar21 = _DAT_ram_3006aa20;
  if (DAT_ram_3006a9d2 == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_ram_3006aa1c == '\0') {
    iVar9 = FUN_ram_4001ac48();
    uVar21 = (uint)DAT_ram_3006ad1c;
    if (uVar21 == 0) {
      uVar21 = 1;
    }
    uVar20 = (uint)DAT_ram_3006acf4;
    if (_DAT_ram_3006ad28 < iVar9) {
      iVar10 = _DAT_ram_3006ad28;
      if (_DAT_ram_3006ad28 < 0) {
        iVar10 = 0;
      }
    }
    else {
      iVar10 = (_DAT_ram_3006ad28 - iVar9) + uVar20 * 5;
      if ((int)uVar21 <= iVar10) {
        iVar10 = uVar21 - 1;
      }
      iVar10 = iVar10 + iVar9;
    }
    lVar8 = (longlong)iVar10 + (longlong)(int)param_1;
    iVar10 = 0;
    if ((-1 < lVar8) && (iVar11 = uVar21 + iVar9 + -1, iVar10 = (int)lVar8, iVar11 <= lVar8)) {
      iVar10 = iVar11;
    }
    if (iVar10 < iVar9) {
      if (uVar20 != 0) {
        DAT_ram_3006acf4 = 0;
        FUN_ram_4001d562();
      }
    }
    else {
      uVar21 = (iVar10 - iVar9) / 5;
      if (uVar20 != uVar21) {
        DAT_ram_3006acf4 = (byte)uVar21;
        FUN_ram_4001d562();
      }
      iVar10 = iVar9 + (iVar10 - iVar9) % 5;
    }
  }
  else {
    if (_DAT_ram_3006aa20 < 5) {
      iVar9 = FUN_ram_4001ad02(_DAT_ram_3006aa24);
      if (iVar9 < 0) {
        return;
      }
      if ((uint)DAT_ram_3006ad5c <= (uVar21 & 0xff)) {
        return;
      }
      iVar10 = FUN_ram_4001b5ee(uVar21);
      uVar20 = (uint)*(ushort *)((iVar10 + iVar9 * 0xc) * 2 + 0x3006adfc);
      iVar11 = FUN_ram_4001b3b2(iVar9,iVar10,&uStack_44);
      if (iVar11 == 0) {
        iVar11 = thunk_FUN_ram_4002575c(0x3006b0d0,uVar21,param_1);
        uVar14 = iVar11 + uVar20;
      }
      else {
        iVar11 = 1;
        if ((int)param_1 < 1) {
          iVar11 = -1;
        }
        iVar12 = FUN_ram_4001aa8e(&uStack_44,uVar20);
        iVar13 = FUN_ram_4001aa50(&uStack_44);
        iVar12 = iVar12 + ((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) * iVar11;
        iVar11 = 0;
        if ((-1 < iVar12) && (iVar11 = iVar13 + -1, iVar12 < iVar13 + -1)) {
          iVar11 = iVar12;
        }
        uVar14 = FUN_ram_4001ab50(&uStack_44,iVar11);
      }
      if ((int)uVar14 < 0x3e9) {
        if ((int)uVar14 < 0) {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 1000;
      }
      if (uVar20 == uVar14) {
        return;
      }
      *(short *)((iVar10 + iVar9 * 0xc) * 2 + 0x3006adfc) = (short)uVar14;
      FUN_ram_4001bd04((float)(int)uVar14 / DAT_ram_40099f28,
                       (&PTR_DAT_ram_4009a0bc_ram_4009a43c)[iVar9],iVar10);
      if (DAT_ram_3006a9d2 != '\0') {
        FUN_ram_4001b66a(iVar9,uVar21);
      }
      iVar11 = _DAT_ram_3006b0d8;
      (&DAT_ram_3006b0dc)[iVar10 + iVar9 * 0xc] = 1;
      DAT_ram_3006b13c = (byte)(1 << (uVar21 & 0x1f)) | DAT_ram_3006b13c;
      if (iVar11 != 0) {
        FUN_ram_4004c912(iVar11,0xc);
        FUN_ram_4004c934(_DAT_ram_3006b0d8,1);
        FUN_ram_4004c938(_DAT_ram_3006b0d8);
        return;
      }
      _DAT_ram_3006b0d8 = FUN_ram_4004c6ac(FUN_ram_4001daaa,0xc,0);
      if (_DAT_ram_3006b0d8 == 0) {
        FUN_ram_4001d95a();
        return;
      }
      FUN_ram_4004c934(_DAT_ram_3006b0d8,1);
      return;
    }
    if (_DAT_ram_3006aa20 == 0x66) {
      iVar9 = FUN_ram_4001ad02(_DAT_ram_3006aa24);
      if (iVar9 < 0) {
        return;
      }
      cVar7 = *(char *)(iVar9 + 0x3006adf4);
      bVar2 = 0 < (int)param_1;
      if (bVar2 == (bool)cVar7) {
        return;
      }
      FUN_ram_4001b7d6(iVar9,bVar2);
      if ((_DAT_ram_3006aa24 != 0) &&
         ((iVar10 = FUN_ram_40025c22(), iVar10 == 0xff ||
          (iVar10 = FUN_ram_4002361c(iVar10,bVar2), iVar10 != 0)))) {
        FUN_ram_4001b7d6(iVar9,cVar7);
        return;
      }
      uStack_44 = (undefined1)iVar9;
      uStack_43 = bVar2;
      FUN_ram_40014472(0x61,&uStack_44,2);
      return;
    }
    if (_DAT_ram_3006aa20 != 0x65) {
      if (_DAT_ram_3006aa20 != 100) {
        return;
      }
      iVar9 = FUN_ram_4001ac58(_DAT_ram_3006aa24);
      if (iVar9 == 0) {
        return;
      }
      if ((_DAT_ram_3006aa24 == 0) ||
         (iVar9 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009acc0,0x10), iVar9 != 0)) {
        if ((_DAT_ram_3006aa24 == 0) ||
           (iVar9 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0c4,0x10), iVar9 != 0)) {
          bVar2 = false;
          if (_DAT_ram_3006aa24 != 0) {
            iVar9 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0bc,0x10);
            bVar2 = iVar9 == 0;
          }
          bVar3 = false;
          if (_DAT_ram_3006aa24 != 0) {
            iVar9 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0c0,0x10);
            bVar3 = iVar9 == 0;
          }
          bVar4 = false;
          if (_DAT_ram_3006aa24 != 0) {
            iVar9 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0d0,0x10);
            bVar4 = iVar9 == 0;
          }
          bVar5 = false;
          if (_DAT_ram_3006aa24 != 0) {
            iVar9 = FUN_ram_4000513e(_DAT_ram_3006aa24,s_delay_ram_4009a0c8,0x10);
            bVar5 = iVar9 == 0;
          }
          bVar6 = false;
          if (_DAT_ram_3006aa24 != 0) {
            iVar9 = FUN_ram_4000513e(_DAT_ram_3006aa24,s_reverb_ram_4009a0d4,0x10);
            bVar6 = iVar9 == 0;
          }
          iVar9 = 4;
          if ((!bVar2) && (iVar9 = 0xc, !bVar3)) {
            if (bVar4) {
              iVar9 = FUN_ram_40025d1e(5);
            }
            else {
              iVar9 = 8;
              if (!(bool)(bVar5 | bVar6)) {
                if (_DAT_ram_3006aa24 != 0) {
                  iVar10 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0dc,0x10);
                  iVar9 = 3;
                  if (iVar10 == 0) goto LAB_ram_4001f2c0;
                }
                iVar9 = 1;
              }
            }
          }
LAB_ram_4001f2c0:
          iVar10 = FUN_ram_4001ad02(_DAT_ram_3006aa24);
          if (iVar10 < 0) {
            return;
          }
          uVar21 = (uint)*(byte *)(iVar10 + 0x3006aebc);
          if (bVar6) {
            iVar9 = FUN_ram_4001be40(uVar21);
            iVar9 = ((int)param_1 % 7 + iVar9) % 7;
            if (iVar9 < 0) {
              iVar9 = iVar9 + 7;
            }
            param_1 = (uint)(byte)(&DAT_ram_4009a45c)[iVar9];
          }
          else if (bVar4) {
            iVar9 = FUN_ram_40025d1e(5);
            iVar11 = FUN_ram_40025d4e(5,uVar21);
            if (iVar9 != 0) {
              param_1 = (int)param_1 % iVar9;
            }
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            param_1 = param_1 + iVar11;
            if (iVar9 != 0) {
              param_1 = (int)param_1 % iVar9;
            }
            if ((int)param_1 < 0) {
              param_1 = param_1 + iVar9;
            }
            param_1 = FUN_ram_40025d2c(5,param_1 & 0xff);
          }
          else {
            param_1 = param_1 + uVar21;
            if (iVar9 == 0) {
              param_1 = 0;
            }
            else {
              if (iVar9 != 0) {
                param_1 = (int)param_1 % iVar9;
              }
              if ((int)param_1 < 0) {
                param_1 = param_1 + iVar9;
              }
            }
          }
          iVar9 = _DAT_ram_3006aa24;
          *(char *)(iVar10 + 0x3006aebc) = (char)param_1;
          FUN_ram_4001c1cc(iVar9);
          if ((int)DAT_ram_3004ad34 < 0) {
            DAT_ram_3004ad38 = uVar21;
          }
          DAT_ram_3004ad34 = param_1;
          FUN_ram_400050f8(&DAT_ram_3006b1b0,_DAT_ram_3006aa24,0x10);
          if ((bVar3) && (param_1 < 8)) {
            if (_DAT_ram_3006b1c0 != 0) {
              FUN_ram_4004c712();
              _DAT_ram_3006b1c0 = 0;
            }
          }
          else {
            if (_DAT_ram_3006b1c0 != 0) {
              FUN_ram_4004c912(_DAT_ram_3006b1c0,0x4b);
              FUN_ram_4004c934(_DAT_ram_3006b1c0,1);
              FUN_ram_4004c938(_DAT_ram_3006b1c0);
              return;
            }
            _DAT_ram_3006b1c0 = FUN_ram_4004c6ac(&LAB_ram_4001f4e8,0x4b,0);
            if (_DAT_ram_3006b1c0 != 0) {
              FUN_ram_4004c934(_DAT_ram_3006b1c0,1);
              return;
            }
          }
          FUN_ram_4001ed5c();
          return;
        }
        pcVar19 = (code *)&DAT_ram_4001bce0;
        uVar18 = 0x3006b0b0;
        puVar17 = &DAT_ram_3004ad24;
        puVar16 = &DAT_ram_3004ad20;
        pcVar15 = FUN_ram_4001b140;
        uVar1 = DAT_ram_3006aec8;
      }
      else {
        pcVar19 = FUN_ram_4001bcbc;
        uVar18 = 0x3006a9ac;
        puVar17 = &DAT_ram_3004ad00;
        puVar16 = &DAT_ram_3004acfc;
        pcVar15 = FUN_ram_4001bd36;
        uVar1 = DAT_ram_3006a744;
      }
      FUN_ram_4001c764(param_1,uVar1,pcVar15,puVar16,puVar17,uVar18,pcVar19);
      return;
    }
    iVar9 = 0;
    do {
      if ((_DAT_ram_3006aa24 != 0) &&
         (iVar10 = FUN_ram_4000513e(_DAT_ram_3006aa24,(&PTR_DAT_ram_4009a0bc_ram_4009a43c)[iVar9],
                                    0x10), iVar10 == 0)) goto LAB_ram_4001f124;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 8);
    iVar9 = 0;
LAB_ram_4001f124:
    iVar9 = ((int)param_1 % 8 + iVar9) % 8;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 8;
    }
    FUN_ram_4001eab6((&PTR_DAT_ram_4009a0bc_ram_4009a43c)[iVar9]);
    iVar10 = 0;
  }
  FUN_ram_4001c8b0(iVar10);
  return;
}


