/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40035000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003505e.
 * REA evidence: ev_b0be7780ece636d29eb2572216a7459309e3707312d10502ef18dfced12db066
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003505e(void)

{
  FUN_ram_40034f48(0x3007cb94,s_PD_23_ram_40094b24);
  FUN_ram_40034f7c(0x3007cb94,1);
  FUN_ram_4003ff8a(1000);
  FUN_ram_40034f7c(0x3007cb94,0);
  FUN_ram_4003ff8a(10000);
  FUN_ram_40034f7c(0x3007cb94,1);
  FUN_ram_4003ff8a(50000);
  return 0;
}


/* NanoCore 1.11, address 0x400350b8.
 * REA evidence: ev_fe88213382d924e65fdf567dcb5ce6f1cd6879aa176f9a0d7120d631577bd0a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400350b8(void)

{
  FUN_ram_4003789a(0x10);
  FUN_ram_400378f4(0x10);
  return;
}


/* NanoCore 1.11, address 0x400350cc.
 * REA evidence: ev_556cea10ceb611fc304ad990eed3357904905d71845c2156d8f3e4648ca37e88
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400350cc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400379ba(0x10);
  if (iVar1 != 0) {
    FUN_ram_400350b8();
  }
  iVar1 = FUN_ram_400378d0(0x10);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40037876(0x10), iVar1 < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_ram_400399be();
    FUN_ram_4003fbd6(0x20,FUN_ram_40039a34,0);
    FUN_ram_4003fb8e(0x20);
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4003511a.
 * REA evidence: ev_71ab6cabd42398829d5db3384f026fa71aa2f37f6dea81a9e0e0cf4d523dc820
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4003511a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40039dac();
  return iVar1 == 0;
}


/* NanoCore 1.11, address 0x40035156.
 * REA evidence: ev_37da8145eec7f8f23741829dd07b7ae63d54d128ff54021a934eeee69bb1767b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035156(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003b428(param_2);
  uVar2 = 0xfffffff6;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4003518e.
 * REA evidence: ev_b360576153be66d849200f6101e9ba7749d4ced66a1ad10223f07fb1d248aee1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003518e(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003b428(*param_2);
  FUN_ram_4003b4ee(iVar1,param_2 + 1,1000);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(iVar1 + 0x56);
  return 0;
}


/* NanoCore 1.11, address 0x400351c2.
 * REA evidence: ev_8e8ca7b090843df8ef68c79842087f94290dd71fae488a5d44c3e7ec109a1a09
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400351c2(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003b428(param_2);
  *param_3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4003b4ee(iVar1,param_3,1000);
    return uVar2;
  }
  return 0xfffffff6;
}


/* NanoCore 1.11, address 0x400351f0.
 * REA evidence: ev_106c39797de943dd599f572435ee98ac5d00affaebc07096cb879aeb066bbfdc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400351f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003b69e();
  if (iVar1 == 0) {
    FUN_ram_4003fbd6(0x5c,FUN_ram_4003b5da,0);
    FUN_ram_4003fb8e(0x5c);
    FUN_ram_4003b2a0(1);
    FUN_ram_4003b6d4(DAT_ram_400982ac);
    iVar1 = FUN_ram_40005656(0x50);
    if (iVar1 != 0) {
      memset(iVar1,0,0x50);
      uVar2 = FUN_ram_40041872(iVar1,&DAT_ram_400945e4,&PTR_FUN_ram_40035266_ram_400977ec,0);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40035266.
 * REA evidence: ev_fc88875a16355f8cca08ca438723ffad34fd07fdc758b39495499de202eb56f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035266(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)FUN_ram_4003b428(param_2);
  FUN_ram_4003b6b6();
  if (puVar2 == (undefined1 *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    if (param_3 == 0) {
      FUN_ram_4003b2c0(*puVar2,0);
      if (*(int *)(puVar2 + 4) == 0) {
        FUN_ram_40004806(*(undefined4 *)(puVar2 + 0x8c));
        *(undefined4 *)(puVar2 + 0x8c) = 0;
        return 0;
      }
    }
    else {
      FUN_ram_4003b2ea(puVar2,*(undefined4 *)(puVar2 + 0x10));
      puVar2[100] = 0;
      if (*(int *)(puVar2 + 4) == 0) {
        puVar2[100] = 1;
        uVar1 = FUN_ram_400047d8(s_aicos_sem_ram_400977e0,0,0);
        *(undefined4 *)(puVar2 + 0x8c) = uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x400352de.
 * REA evidence: ev_08b546eac9fa69b7d734df7ef85ab738031035cf448c0697e2331b1a1bc3567f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400352e6) */
/* WARNING: Removing unreachable block (ram,0x400352f2) */

void FUN_ram_400352de(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2 / 0x20;
  param_2 = param_2 % 0x20;
  FUN_ram_4003b914(iVar1,param_2,1);
  if (param_3 == 2) {
    uVar2 = 3;
  }
  else if (param_3 == 3) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
    if (param_3 != 1) {
      FUN_ram_4003b98e(iVar1,param_2,0);
      FUN_ram_4003ba50(iVar1,param_2);
      return;
    }
  }
  FUN_ram_4003b98e(iVar1,param_2,uVar2);
  FUN_ram_4003ba10(iVar1,param_2);
  return;
}


/* NanoCore 1.11, address 0x4003534c.
 * REA evidence: ev_87da833a32892b9640216f577db8a8a61ab24b8a1f61a3b8f590ac818ec2b692
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40035356) */
/* WARNING: Removing unreachable block (ram,0x4003535a) */

void FUN_ram_4003534c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 / 0x20;
  if (param_3 != 0) {
    FUN_ram_4003b7ce(iVar1);
    FUN_ram_4003bad2(iVar1,param_2 % 0x20,1);
    return;
  }
  FUN_ram_4003b7a0(iVar1);
  return;
}


/* NanoCore 1.11, address 0x400353a6.
 * REA evidence: ev_d8d4882e1984e22f0bc5596a05edb12349c5f612dff5bfbcca5ed0c16f414ba9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400353b4) */
/* WARNING: Removing unreachable block (ram,0x400353ba) */

undefined4
FUN_ram_400353a6(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_3 < 5) {
    uVar1 = (&DAT_ram_40097820)[param_3];
  }
  FUN_ram_4003b9ce(param_2 / 0x20,param_2 % 0x20,uVar1);
  FUN_ram_4003fbd6(param_2 + 0x60,param_4,param_5);
  FUN_ram_4003fb8e(param_2 + 0x60);
  return 0;
}


/* NanoCore 1.11, address 0x400353fa.
 * REA evidence: ev_83bbd3fba7874fde95775552b4e0b03e67dca21a7fdac35dea9df095ca0e6ece
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400353fa(int param_1)

{
  uint uVar1;
  uint uStack_28;
  uint auStack_24 [4];
  
  param_1 = param_1 + -0x44;
  uStack_28 = 0;
  auStack_24[0] = 0;
  FUN_ram_4003b856(param_1,&uStack_28);
  FUN_ram_4003b836(param_1,auStack_24);
  uStack_28 = uStack_28 & auStack_24[0];
  uVar1 = 0;
  do {
    if ((uStack_28 >> (uVar1 & 0x1f) & 1) != 0) {
      FUN_ram_4003fb4a(param_1 * 0x20 + 0x60 + uVar1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x20);
  FUN_ram_4003b876(param_1,0xffffffff);
  return 1;
}


/* NanoCore 1.11, address 0x40035464.
 * REA evidence: ev_a8304ec0795968c8ab0ae8c0ff4106fb014ac2c8e53fc49e1fc3e9350d7494aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40035474) */
/* WARNING: Removing unreachable block (ram,0x40035478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40035464(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2 / 0x20;
  param_2 = param_2 % 0x20;
  if (param_3 == 0) {
    FUN_ram_4003b7fc(uVar1,param_2);
  }
  else {
    uVar3 = 1 << (uVar1 & 0x1f);
    if ((uVar3 & _DAT_ram_3007cb9c) == 0) {
      iVar2 = uVar1 + 0x44;
      FUN_ram_4003fbd6(iVar2,FUN_ram_400353fa,0);
      FUN_ram_4003fb8e(iVar2);
      FUN_ram_4003fb8e(iVar2);
      _DAT_ram_3007cb9c = _DAT_ram_3007cb9c | uVar3;
    }
    FUN_ram_4003b8c2(uVar1,param_2);
    FUN_ram_4003bad2(uVar1,param_2,2);
  }
  return 0;
}


/* NanoCore 1.11, address 0x400355ea.
 * REA evidence: ev_5b28cc3519fb2cd7828d72d7e0a66374d85195a7c0e0c84d0235f14819e3c947
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400355ea(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_ram_3004a668;
  DAT_ram_3004a601 = (undefined1)DAT_ram_3004a668;
  iVar3 = FUN_ram_4003bd36(&DAT_ram_3004a668);
  if (iVar3 == 0) {
    FUN_ram_4000304c((uVar1 & 0xff) * 0xe4 + 0x3007cba0,&DAT_ram_3004a5dc,0xe4);
    uVar2 = DAT_ram_3004a6a4;
    if (DAT_ram_3004a67c != 0) {
      FUN_ram_4003fbd6(DAT_ram_3004a6a4,FUN_ram_40035670,0);
      FUN_ram_4003fb8e(uVar2);
    }
    FUN_ram_40040bf0(&DAT_ram_3004a5dc,PTR_DAT_ram_4009459c_ram_3004a66c);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40035670.
 * REA evidence: ev_7c6d462eddd41c115e11287b6c4c04bc002c94f1ebc52e7fb45491557416cf5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035670(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_29;
  undefined4 uStack_28;
  byte *pbStack_24;
  
  iVar4 = 0x3007cba0;
  iVar5 = 0;
  do {
    if (*(int *)(iVar4 + 200) == param_1) goto LAB_ram_400356a0;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xe4;
  } while (iVar5 != 8);
  iVar5 = 0;
LAB_ram_400356a0:
  iVar4 = iVar5 * 0xe4;
  uVar1 = *(uint *)(*(int *)(&DAT_ram_3007cc34 + iVar4) + 0x40);
  fence();
  fence();
  if (*(code **)(&DAT_ram_3007cc4c + iVar4) == (code *)0x0) {
    for (iVar3 = 0; iVar3 < (int)(*(uint *)(*(int *)(&DAT_ram_3007cc34 + iVar4) + 0x9c) & 0xff);
        iVar3 = iVar3 + 1) {
      fence();
    }
    fence();
    *(undefined4 *)(*(int *)(&DAT_ram_3007cc34 + iVar5 * 0xe4) + 0x3c) = 0xffff;
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 0x400) != 0) {
      uStack_28 = 1;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007cc4c + iVar4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc34 + iVar4) + 0x3c) = 0x400;
    }
    if ((uVar1 & 4) != 0) {
      local_29 = *(byte *)(*(int *)(&DAT_ram_3007cc34 + iVar4) + 0x10);
      fence();
      uStack_28 = 3;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007cc4c + iVar5 * 0xe4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc34 + iVar5 * 0xe4) + 0x3c) = 4;
    }
    if ((uVar1 & 0x20) != 0) {
      pbStack_24 = &local_29;
      iVar4 = iVar5 * 0xe4;
      uStack_28 = 0;
      (**(code **)(&DAT_ram_3007cc4c + iVar4))(&uStack_28);
      fence();
      *(uint *)(*(int *)(&DAT_ram_3007cc34 + iVar4) + 0x10) = (uint)*pbStack_24;
      uStack_28 = 2;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007cc4c + iVar4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc34 + iVar4) + 0x3c) = 0x20;
    }
    if ((uVar1 & 0x80) != 0) {
      uStack_28 = 4;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007cc4c + iVar5 * 0xe4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc34 + iVar5 * 0xe4) + 0x3c) = 0x80;
    }
    if ((uVar1 & 1) != 0) {
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc34 + iVar5 * 0xe4) + 0x3c) = 1;
    }
    uVar2 = 1;
    if ((uVar1 & 0x40) != 0) {
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc34 + iVar5 * 0xe4) + 0x3c) = 0x40;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40035902.
 * REA evidence: ev_dc0d134c6c8415ead7a7af138ef4d8638f82307b9c49a58f540328ed4d546ca0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035902(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0x3007e2c0;
  *(undefined4 *)(param_1 + 0x74) = 0x1000;
  *(undefined4 *)(param_1 + 0x78) = 0x800;
  *(undefined4 *)(param_1 + 0x84) = 0x3007d2c0;
  *(undefined4 *)(param_1 + 0x88) = 0x1000;
  *(undefined4 *)(param_1 + 0x8c) = 0x800;
  FUN_ram_40007602(*(undefined4 *)(param_1 + 0x9c));
  return 0;
}


/* NanoCore 1.11, address 0x400359ae.
 * REA evidence: ev_5969ac59086e1fd485c674da1f26e1ae6aadd47b3566396c10786b0a0a642f27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400359ae(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_ram_4000769e(*(undefined4 *)(param_1 + 0x9c));
    FUN_ram_4003c904(param_1 + 0x58);
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    FUN_ram_4003c94e(param_1 + 0x58);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff6;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40035bac.
 * REA evidence: ev_e207a8c58fcf63a12a31547f81991e9aba6ef17797d954b587e58de1124eb758
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035bac(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_ram_40039866(*(undefined4 *)(param_1 + 0x6c));
  }
  else {
    FUN_ram_40039844();
  }
  return 0;
}


/* NanoCore 1.11, address 0x40035bd2.
 * REA evidence: ev_4ca2a64a2b1a29d41f917464c3446d433380378837feefcf04976b11c48775fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40035bd2(int param_1)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40041160(*(int *)(param_1 + 0x50) + 4);
  FUN_ram_40039810(*(undefined4 *)(param_1 + 0x6c),aiStack_14);
  return iVar1 * 0x800 +
         ((aiStack_14[0] + 0x1000) - *(int *)(param_1 + 0x78)) +
         (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0x70);
}


/* NanoCore 1.11, address 0x40035c10.
 * REA evidence: ev_c55d87dca58f9874ea834e89272fd84df427f6eb56a983e393876dcb2cc52097
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40035c10(void)

{
  undefined4 uVar1;
  
  FUN_ram_4003c1fc(&DAT_ram_3004a740,DAT_ram_3004a7b8);
  DAT_ram_3004a734 = &PTR_LAB_ram_40035872_ram_3004a6c0;
  DAT_ram_3004a7bc = 0;
  if (_DAT_ram_3004d47c != 0) {
    DAT_ram_3004a784 = _DAT_ram_3004d47c;
    uVar1 = FUN_ram_40040780(&DAT_ram_3004a6e8,PTR_s_i2s0_sound_ram_40097853_1_ram_3004a7b4,3);
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40035c6c.
 * REA evidence: ev_90f06d672b20a1f4971a6f0fa49fb97b22233a9b83d10f9e9734956be5b0f206
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035c6c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + -0x58;
  if (param_2 == 1) {
    FUN_ram_400407f4(iVar1);
    iVar1 = 0x3007e2c0;
    fence();
    custom0();
    do {
      custom0();
      iVar1 = iVar1 + 0x20;
    } while (iVar1 != 0x3007f2c0);
    fence();
    custom0();
  }
  else if (param_2 == 2) {
    iVar2 = 0x3007d2c0;
    fence();
    custom0();
    do {
      custom0();
      iVar2 = iVar2 + 0x20;
    } while (iVar2 != 0x3007e2c0);
    fence();
    custom0();
    if (*(char *)(param_1 + 0x7c) == '\0') {
      FUN_ram_40040942(iVar1,0x3007d2c0);
      *(undefined1 *)(param_1 + 0x7c) = 1;
    }
    else {
      FUN_ram_40040942(iVar1,*(int *)(param_1 + 0x34) + 0x3007d2c0);
      *(undefined1 *)(param_1 + 0x7c) = 0;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40035d14.
 * REA evidence: ev_6ee74eb104afdd667d4e1f55893ac8c5ffbb4426718dcabc39bcc7a75ed06bf3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40035d14(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (param_2 == 0) {
    *(undefined1 *)(iVar1 + 0x114) = 0;
    iVar1 = 0;
  }
  else {
    *(undefined1 *)(iVar1 + 0x114) = 1;
    if (*(int *)(iVar1 + 0x118) == 0) {
      uVar2 = FUN_ram_40005656(0xc);
      *(undefined4 *)(iVar1 + 0x118) = uVar2;
    }
    iVar1 = -(uint)(*(int *)(iVar1 + 0x118) == 0);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40035d50.
 * REA evidence: ev_e8213260ae7d159b9f052830356ac0efa0deae0409063d9db204d86fdfb7d7f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40035d50(void)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  iVar1 = FUN_ram_40042622(&DAT_ram_3004a7c0,PTR_s_qspi0_ram_40097868_ram_3004a844,
                           &PTR_FUN_ram_40035e10_ram_40097870);
  if (iVar1 == 0) {
    FUN_ram_400055fc(auStack_20,&DAT_ram_40097860,PTR_s_qspi0_ram_40097868_ram_3004a844);
    DAT_ram_3004a8c0 = FUN_ram_400047d8(auStack_20,0,1);
    if (DAT_ram_3004a8c0 == 0) {
      iVar1 = 5;
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40035dc8.
 * REA evidence: ev_b8297d07b945954c7a3d53020075034afb431e544141c4326f1cc1bb7f250a42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035dc8(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_40004d8a();
  FUN_ram_4003dc80(param_2);
  FUN_ram_40004dbc();
  return 1;
}


/* NanoCore 1.11, address 0x40035e10.
 * REA evidence: ev_cc0555e57d5fac782c1b969d71bb8b07fcbd9e47b6114ac40d93fe7e193fe27d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40035e10(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 auStack_48 [5];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  byte bStack_26;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  undefined4 uStack_20;
  uint uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  *(undefined1 *)(iVar1 + 0xec) = 0;
  iVar2 = FUN_ram_40005192(iVar1 + 0xf0,param_2,8);
  if ((iVar2 != 0) || (*(char *)(iVar1 + 0xec) != '\0')) {
    memcpy(iVar1 + 0xf0,param_2,8);
    FUN_ram_4000504c(&uStack_34,0,0x24);
    uStack_34 = *(undefined4 *)(iVar1 + 0x88);
    uStack_2c = *(undefined4 *)(iVar1 + 0x8c);
    uStack_30 = *(uint *)(param_2 + 4);
    if (100000000 < *(uint *)(param_2 + 4)) {
      uStack_30 = 100000000;
    }
    if (uStack_30 < 100000) {
      uStack_30 = 100000;
    }
    uVar5 = *(uint *)(iVar1 + 0x90);
    uVar6 = uVar5;
    if (uStack_30 != 0) {
      uVar6 = uVar5 % uStack_30;
    }
    if (uVar6 == 0) {
      uStack_30 = uVar5;
    }
    if (uStack_30 < 32000000) {
      uStack_30 = 32000000;
    }
    uVar6 = (uint)*param_2;
    bStack_26 = (byte)(((uVar6 ^ 4) << 0x1d) >> 0x1f);
    bStack_22 = *param_2 & 1;
    bStack_24 = (byte)(((uVar6 ^ 0x10) << 0x1b) >> 0x1f);
    uStack_20 = *(undefined4 *)(iVar1 + 0x108);
    bStack_23 = (byte)((uVar6 << 0x1e) >> 0x1f);
    uStack_1c = *(uint *)(iVar1 + 0x110);
    if (4 < uStack_1c) {
      uStack_1c = 0;
    }
    uVar6 = 0;
    if (*(int *)(iVar1 + 0x10c) != 0) {
      uVar6 = 0x4000;
    }
    iVar2 = iVar1 + 0x9c;
    uStack_1c = uStack_1c | uVar6;
    iVar3 = FUN_ram_4003cfb8(iVar2,&uStack_34);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*(char *)(iVar1 + 0x104) == '\0') {
      FUN_ram_4000504c(auStack_48,0,0x14);
      auStack_48[0] = *(undefined4 *)(iVar1 + 0x94);
      iVar3 = FUN_ram_4003d5f2(iVar2,auStack_48);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_ram_4003da20(iVar2,&LAB_ram_40035de6,iVar1);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x98);
      FUN_ram_4003fbd6(uVar4,FUN_ram_40035dc8,iVar2);
      FUN_ram_4003fb8e(uVar4);
      FUN_ram_4003fb8e(*(undefined4 *)(iVar1 + 0x98));
    }
    uVar6 = *(uint *)(param_2 + 4);
    if (100000000 < *(uint *)(param_2 + 4)) {
      uVar6 = 100000000;
    }
    FUN_ram_4003d266(iVar2,uVar6);
  }
  *(undefined1 *)(iVar1 + 0x104) = 1;
  return 0;
}


/* NanoCore 1.11, address 0x40035f7a.
 * REA evidence: ev_ae4d7b29224ec58cef02aa497c37a893004aed2078210cb8d27d3956fcbdac0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40035f7a(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [16];
  undefined1 local_30 [24];
  
  uVar8 = (uint)*(byte *)(param_2 + 0x15);
  if (uVar8 == 1) {
    auStack_40[0] = *(undefined1 *)(param_2 + 0x14);
    uVar8 = 1;
    uVar3 = 0;
    iVar2 = 1;
  }
  else {
    bVar1 = uVar8 < 2;
    if (bVar1) {
      uVar8 = 1;
    }
    else {
      local_30[0] = *(undefined1 *)(param_2 + 0x14);
    }
    uVar3 = (uint)!bVar1;
    iVar2 = 0;
  }
  uVar7 = (uint)*(byte *)(param_2 + 0x1c);
  uVar6 = uVar8;
  if (uVar7 != 0) {
    uVar4 = (uint)*(byte *)(param_2 + 0x1d);
    if (uVar4 == 1) {
      uVar4 = *(uint *)(param_2 + 0x18);
      puVar5 = auStack_40 + iVar2;
      uVar6 = uVar7;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = (char)(uVar4 >> (uVar6 * 8 & 0x1f));
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
      iVar2 = iVar2 + uVar7;
      uVar6 = 1;
    }
    else if (1 < uVar4) {
      uVar6 = *(uint *)(param_2 + 0x18);
      puVar5 = local_30 + uVar3;
      uVar8 = uVar7;
      do {
        uVar8 = uVar8 - 1;
        *puVar5 = (char)(uVar6 >> (uVar8 * 8 & 0x1f));
        puVar5 = puVar5 + 1;
      } while (uVar8 != 0);
      uVar3 = uVar3 + uVar7;
      uVar6 = uVar4;
      uVar8 = uVar4;
    }
  }
  uVar7 = uVar6 * *(int *)(param_2 + 0x28);
  if (uVar7 < 8) {
    if (iVar2 != 0) goto LAB_ram_40035ffa;
  }
  else {
    uVar7 = uVar7 >> 3;
    if (uVar6 == 1) {
      memset(auStack_40 + iVar2,0,uVar7);
      iVar2 = iVar2 + uVar7;
    }
    else {
      memset(local_30 + uVar3,0,uVar7);
      uVar3 = uVar3 + uVar7;
      if (iVar2 == 0) goto LAB_ram_4003606a;
    }
LAB_ram_40035ffa:
    FUN_ram_4003d36c(param_1 + 0x9c,1);
    puStack_4c = auStack_40;
    uStack_48 = 0;
    uStack_44 = iVar2;
    iVar2 = FUN_ram_4003d654(param_1 + 0x9c,&puStack_4c);
    if (iVar2 != 0) {
      return -1;
    }
  }
  if (uVar3 == 0) {
    return 0;
  }
LAB_ram_4003606a:
  FUN_ram_4003d36c(param_1 + 0x9c,uVar8);
  puStack_4c = local_30;
  uStack_48 = 0;
  uStack_44 = uVar3;
  iVar2 = FUN_ram_4003d654(param_1 + 0x9c,&puStack_4c);
  return -(uint)(iVar2 != 0);
}


