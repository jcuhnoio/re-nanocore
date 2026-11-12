/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40045000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40045014.
 * REA evidence: ev_52c8ab321b1e3af707958e64b6f75edcfdf6e467a3ca4382af28f9257646b736
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045014(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40044fa0();
  FUN_ram_40044fda(param_1,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004502e.
 * REA evidence: ev_5ae1008c602efcee3a167c218fd61e7245cb2ca98e099e246dc65f6c0569c4a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004502e(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40047bf0(param_1,1,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_400488e6(param_1,param_2,0);
  return;
}


/* NanoCore 1.12, address 0x40045068.
 * REA evidence: ev_853281f5243ba3c45fc50c294c586fdf33d7e6918e57bd4b210e357ff1a1175a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045068(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40047bf0(param_1,2,aiStack_14,0);
  if (iVar1 == 1) {
    if (aiStack_14[0] == param_2) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_ram_40048902(param_1,param_2,0);
  return;
}


/* NanoCore 1.12, address 0x400450a2.
 * REA evidence: ev_cf1cb2f39d0655823cb0863e4623e45dcde7be6adb08c4580659460fdefc1ec4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400450a2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_4004502e();
  FUN_ram_40045068(param_1,param_3);
  return;
}


/* NanoCore 1.12, address 0x400450bc.
 * REA evidence: ev_16252dba63620fecb03faf47692854067aa1222dcea133763bcf1484bb0ca991
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400450bc(undefined4 param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40043c96(param_1,0x60001);
  if ((iVar3 == 0) && (iVar3 = FUN_ram_40048b6e(param_1), iVar3 != 0)) {
    sVar2 = FUN_ram_40047b68(iVar3,0,0x16);
    bVar1 = sVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x400450f4.
 * REA evidence: ev_5bd81fc465753b18b788fa8c4ca4e0c993a33f1918af1b62f5ea2013ed9bdd8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400450f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 1;
  iVar1 = FUN_ram_40048b0c();
  *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) | 4;
  uVar2 = FUN_ram_40048b18();
  FUN_ram_4004d498(uVar2,0x33,0);
  return;
}


/* NanoCore 1.12, address 0x40045126.
 * REA evidence: ev_8338020a056f4b542c91f056ae215c06c15c6c94b674e75990f2ea79724a9762
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045126(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_ram_4004892c(param_1,param_2,0);
  FUN_ram_40045014(param_1,param_3,param_4);
  return;
}


/* NanoCore 1.12, address 0x4004514a.
 * REA evidence: ev_a3034e57449fc8adaa1829791bb2f3933503b6d0bdcd3317d9210af8646886d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004514a(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* NanoCore 1.12, address 0x4004515c.
 * REA evidence: ev_46cc23f9a751afeb09663889134283a0daae4243e44737b9238aa10246c4e715
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004515c(int param_1)

{
  return (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
}


/* NanoCore 1.12, address 0x40045168.
 * REA evidence: ev_d11203813248f4d34cb0835d9a08e7d950fca5cd4a481cd8ec43f1a66a24ce5a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40045168(int param_1)

{
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
}


/* NanoCore 1.12, address 0x40045174.
 * REA evidence: ev_990d2e65db529ab9e6fe5772f4f1ce44d873b206fecdc64478bcf347beee110c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40045174(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40044d1a();
  iVar2 = FUN_ram_40044f58(param_1);
  return (((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1) - iVar1) - iVar2;
}


/* NanoCore 1.12, address 0x400451a2.
 * REA evidence: ev_32aa8c1fe8fe94ee0b2732ace1d48154e4af051c326443851080a7ae2ebcd070
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400451a2(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40044f10();
  iVar2 = FUN_ram_40044ec8(param_1);
  return (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1) - iVar1) - iVar2;
}


/* NanoCore 1.12, address 0x400451d0.
 * REA evidence: ev_c5bda68f06064b6d289129039f3636b9a0a2fe7a41fb5e3e835d75c129d00d84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400451d0(int param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = *(int *)(param_1 + 0x14);
  param_2[1] = *(int *)(param_1 + 0x18);
  param_2[2] = *(int *)(param_1 + 0x1c);
  param_2[3] = *(int *)(param_1 + 0x20);
  iVar1 = FUN_ram_40044d1a();
  *param_2 = *param_2 + iVar1;
  iVar1 = FUN_ram_40044f58(param_1);
  param_2[2] = param_2[2] - iVar1;
  iVar1 = FUN_ram_40044f10(param_1);
  param_2[1] = param_2[1] + iVar1;
  iVar1 = FUN_ram_40044ec8(param_1);
  param_2[3] = param_2[3] - iVar1;
  return;
}


/* NanoCore 1.12, address 0x40045224.
 * REA evidence: ev_c96aa95445f99ef58498a93760060e895b412ac2e54b7685149eee010a2b069b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40045224(undefined4 param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0xe0000001;
  FUN_ram_40044c48(param_1,0x2f,&uStack_18);
  return uStack_18;
}


/* NanoCore 1.12, address 0x40045244.
 * REA evidence: ev_f70f24e34566513ff12d916ca189f90257814086b8e05bb1b11b74b1139ea540
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40045244(undefined4 param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0xe0000001;
  uStack_14 = 0;
  FUN_ram_40044c48(param_1,0x2f,&uStack_18);
  return uStack_14;
}


/* NanoCore 1.12, address 0x40045264.
 * REA evidence: ev_8d1f3018589dbbc1f95804aa92256750228b171008a1072b9f7eb9c5d1647949
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40045264(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40047b68(param_1,0,1);
  iVar2 = FUN_ram_40047b68(param_1,0,2);
  if ((iVar1 == 0x200007d1) || (uVar3 = 0, iVar2 == 0x200007d1)) {
    FUN_ram_400450f4(param_1);
    uVar3 = 1;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x400452ac.
 * REA evidence: ev_71f87c62ae25deec37af515fb7d434aadda9ee28a64d952deb6f6541640b7d96
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400452ac(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_ram_40048b96();
  for (iVar2 = 0; iVar2 != iVar3; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(**(int **)(param_1 + 8) + iVar2 * 4);
    if ((param_4 == 0) || (iVar4 = FUN_ram_40043c8a(iVar1,0x40000), iVar4 == 0)) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + param_2;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_3;
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + param_2;
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + param_3;
      FUN_ram_400452ac(iVar1,param_2,param_3,0);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40045328.
 * REA evidence: ev_b289828d395a17ac3bc5a2e8a8c98aff8af25a42ab948d8bda3f14944493bafc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045328(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    iVar1 = FUN_ram_40044b3c(param_1);
    if ((param_4 & 2) != 0) break;
    if (iVar1 == 2) {
      FUN_ram_40044d62(param_1,param_2,param_3,0);
    }
    if ((param_4 & 1) == 0) {
      return;
    }
    param_1 = FUN_ram_40048b6e(param_1);
  }
  if ((param_4 & 1) != 0) {
    uVar2 = FUN_ram_40048b6e(param_1);
    FUN_ram_40045328(uVar2,param_2,param_3,param_4);
  }
  if (iVar1 != 2) {
    return;
  }
  FUN_ram_40044d62(param_1,param_2,param_3,1);
  return;
}


/* NanoCore 1.12, address 0x400453c8.
 * REA evidence: ev_2c55eba4883a265bf7aa753ff29a293157c0b279c5f221c555b8af0b63d8a14b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400453c8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  local_30 = *param_2;
  iStack_2c = param_2[1];
  iStack_20 = param_2[2] + 1;
  iStack_24 = param_2[3] + 1;
  iStack_28 = local_30;
  iStack_1c = iStack_2c;
  iStack_18 = iStack_20;
  iStack_14 = iStack_24;
  FUN_ram_40045328(param_1,&local_30,4,param_3);
  iVar1 = iStack_20;
  if (iStack_18 <= iStack_20) {
    iVar1 = iStack_18;
  }
  if (iStack_28 < iVar1) {
    iVar1 = iStack_28;
  }
  if (local_30 < iVar1) {
    iVar1 = local_30;
  }
  *param_2 = iVar1;
  if (iStack_18 < iStack_20) {
    iStack_18 = iStack_20;
  }
  if (iStack_18 < iStack_28) {
    iStack_18 = iStack_28;
  }
  if (iStack_18 < local_30) {
    iStack_18 = local_30;
  }
  param_2[2] = iStack_18;
  iVar1 = iStack_1c;
  if (iStack_14 <= iStack_1c) {
    iVar1 = iStack_14;
  }
  if (iStack_24 < iVar1) {
    iVar1 = iStack_24;
  }
  if (iStack_2c < iVar1) {
    iVar1 = iStack_2c;
  }
  param_2[1] = iVar1;
  if (iStack_14 < iStack_1c) {
    iStack_14 = iStack_1c;
  }
  if (iStack_14 < iStack_24) {
    iStack_14 = iStack_24;
  }
  if (iStack_14 < iStack_2c) {
    iStack_14 = iStack_2c;
  }
  param_2[3] = iStack_14;
  return;
}


/* NanoCore 1.12, address 0x4004547a.
 * REA evidence: ev_a23765b1e8c13bb283a37a26f857ecae8bea7454aa3dfb58c73db608fc319253
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004547a(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [24];
  
  iVar1 = FUN_ram_40043c8a(param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_40048b0c(param_1);
    uVar2 = FUN_ram_40048b18();
    iVar3 = FUN_ram_4004d43e();
    if ((((iVar1 == iVar3) || (iVar3 = FUN_ram_4004d450(uVar2), iVar1 == iVar3)) ||
        (iVar3 = FUN_ram_4004d486(uVar2), iVar1 == iVar3)) ||
       ((iVar3 = FUN_ram_4004d462(uVar2), iVar1 == iVar3 ||
        (iVar3 = FUN_ram_4004d474(uVar2), iVar1 == iVar3)))) {
      uVar2 = FUN_ram_40044ae8(param_1);
      local_40 = *(undefined4 *)(param_1 + 0x14);
      uStack_3c = *(undefined4 *)(param_1 + 0x18);
      uStack_38 = *(undefined4 *)(param_1 + 0x1c);
      uStack_34 = *(undefined4 *)(param_1 + 0x20);
      FUN_ram_4004a4ca(&local_40,uVar2,uVar2);
      iVar1 = FUN_ram_4004a4fe(param_2,param_2,&local_40);
      if (iVar1 != 0) {
        FUN_ram_400453c8(param_1,param_2,1);
        do {
          param_1 = FUN_ram_40048b6e(param_1);
          if (param_1 == 0) {
            return iVar1;
          }
          iVar3 = FUN_ram_40043c8a(param_1,1);
          if (iVar3 != 0) {
            return 0;
          }
          FUN_ram_4000303c(auStack_30,param_1 + 0x14,0x10);
          iVar3 = FUN_ram_40043c8a(param_1,0x100000);
          if (iVar3 != 0) {
            uVar2 = FUN_ram_40044ae8(param_1);
            FUN_ram_4004a4ca(auStack_30,uVar2,uVar2);
          }
          FUN_ram_400453c8(param_1,auStack_30,1);
          iVar3 = FUN_ram_4004a4fe(param_2,param_2,auStack_30);
        } while (iVar3 != 0);
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40045578.
 * REA evidence: ev_c47b624065e0859e52589873ddf5cdcd598765895ccd83106698aa84d83d9ccc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045578(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_40048b18();
  iVar1 = FUN_ram_4004d536();
  if (iVar1 != 0) {
    uStack_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    iVar1 = FUN_ram_4004547a(param_1,&uStack_20);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 8) != 0) {
        if ((*(ushort *)(*(int *)(param_1 + 8) + 0x2a) & 0xc00) == 0x800) {
          FUN_ram_4004a4ca(&uStack_20,5,5);
        }
      }
      uVar2 = FUN_ram_40048b18(param_1);
      FUN_ram_400497dc(uVar2,&uStack_20);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400455dc.
 * REA evidence: ev_6b42f780b21e61382ea2724b13a33801bfacdaffe207b58453ecfe6864b333b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400455dc(int param_1)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = FUN_ram_40044ae8();
  iStack_1c = *(int *)(param_1 + 0x18) - iStack_14;
  iStack_18 = *(int *)(param_1 + 0x1c) + iStack_14;
  local_20 = *(int *)(param_1 + 0x14) - iStack_14;
  iStack_14 = iStack_14 + *(int *)(param_1 + 0x20);
  FUN_ram_40045578(param_1,&local_20);
  return;
}


/* NanoCore 1.12, address 0x40045610.
 * REA evidence: ev_7708c6b731516371777bc3a3de7aadeeed23fa326e3c6924c1216bc068bbe469
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void switchD_ram:400458d6::default(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [24];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40043c8a(param_1,0x40000);
    iVar4 = *(int *)(iVar1 + 0x14);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_40046642(iVar1);
      iVar4 = iVar4 - iVar2;
      iVar2 = *(int *)(iVar1 + 0x18);
      iVar3 = FUN_ram_40046652(iVar1);
      iVar2 = iVar2 - iVar3;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x18);
    }
    iVar3 = FUN_ram_40044d1a(iVar1);
    param_2 = param_2 + iVar4 + iVar3;
    iVar4 = FUN_ram_40044f10(iVar1);
    param_3 = param_3 + iVar2 + iVar4;
  }
  param_2 = param_2 - *(int *)(param_1 + 0x14);
  param_3 = param_3 - *(int *)(param_1 + 0x18);
  if (param_2 != 0 || param_3 != 0) {
    FUN_ram_400455dc(param_1);
    local_40 = *(undefined4 *)(param_1 + 0x14);
    iVar2 = 0;
    uStack_3c = *(undefined4 *)(param_1 + 0x18);
    uStack_38 = *(undefined4 *)(param_1 + 0x1c);
    uStack_34 = *(undefined4 *)(param_1 + 0x20);
    if (iVar1 != 0) {
      FUN_ram_400451d0(iVar1,auStack_30);
      iVar2 = FUN_ram_4004a6a6(&local_40,auStack_30,0);
      if (iVar2 == 0) {
        FUN_ram_400475d4(iVar1);
      }
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
    FUN_ram_400452ac(param_1,param_2,param_3,0);
    if (iVar1 != 0) {
      FUN_ram_40044c48(iVar1,0x25,param_1);
    }
    FUN_ram_400455dc(param_1);
    if ((iVar1 != 0) &&
       ((iVar4 = FUN_ram_4004a6a6(param_1 + 0x14,auStack_30,0), iVar2 != 0 || (iVar4 != 0)))) {
      FUN_ram_400475d4(iVar1);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40045714.
 * REA evidence: ev_7ea76c31d7647849af0af9e799e5c5be9075eeb512084f62078a2fe481b2f7b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004594e) */
/* WARNING: Removing unreachable block (ram,0x40045942) */
/* WARNING: Removing unreachable block (ram,0x40045930) */
/* WARNING: Removing unreachable block (ram,0x4004590c) */
/* WARNING: Removing unreachable block (ram,0x400458de) */
/* WARNING: Removing unreachable block (ram,0x40045856) */
/* WARNING: Removing unreachable block (ram,0x400457aa) */
/* WARNING: Removing unreachable block (ram,0x400457e0) */
/* WARNING: Removing unreachable block (ram,0x4004588c) */
/* WARNING: Removing unreachable block (ram,0x400458da) */
/* WARNING: Removing unreachable block (ram,0x40045910) */
/* WARNING: Removing unreachable block (ram,0x40045934) */
/* WARNING: Removing unreachable block (ram,0x40045946) */
/* WARNING: Removing unreachable block (ram,0x40045954) */

void FUN_ram_40045714(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  iVar3 = FUN_ram_400450bc();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_ram_40048b6e(param_1);
  uVar4 = FUN_ram_40047b68(param_1,0,8);
  uVar12 = FUN_ram_40047b68(param_1,0,9);
  uVar11 = (uint)uVar12;
  if (iVar3 == 0) goto LAB_ram_400458ea;
  iVar5 = FUN_ram_40045174(iVar3,(int)((ulonglong)uVar12 >> 0x20),uVar11);
  iVar6 = FUN_ram_400451a2(iVar3);
  if (((uVar4 & 0x60000000) == 0x20000000) && (uVar10 = uVar4 & 0x9fffffff, (int)uVar10 < 0x7d1)) {
    if (1000 < (int)uVar10) {
      uVar10 = 1000 - uVar10;
    }
    uVar4 = (int)(iVar5 * uVar10) / 100;
  }
  if (((uVar11 & 0x60000000) == 0x20000000) && (uVar10 = uVar11 & 0x9fffffff, (int)uVar10 < 0x7d1))
  {
    if (1000 < (int)uVar10) {
      uVar10 = 1000 - uVar10;
    }
    uVar11 = (int)(iVar6 * uVar10) / 100;
  }
  uVar10 = FUN_ram_40047b68(param_1,0,0x6a);
  uVar7 = FUN_ram_40047b68(param_1,0,0x6b);
  iVar9 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
  iVar1 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
  if (((uVar10 & 0x60000000) == 0x20000000) && (uVar8 = uVar10 & 0x9fffffff, (int)uVar8 < 0x7d1)) {
    if (1000 < (int)uVar8) {
      uVar8 = 1000 - uVar8;
    }
    uVar10 = (int)(iVar9 * uVar8) / 100;
  }
  if (((uVar7 & 0x60000000) == 0x20000000) && (uVar8 = uVar7 & 0x9fffffff, (int)uVar8 < 0x7d1)) {
    if (1000 < (int)uVar8) {
      uVar8 = 1000 - uVar8;
    }
    uVar7 = (int)(iVar1 * uVar8) / 100;
  }
  uVar11 = uVar11 + uVar7;
  cVar2 = FUN_ram_40047b68(param_1,0,10);
  uVar4 = uVar10 + uVar4;
  if (cVar2 == '\0') {
    iVar3 = FUN_ram_40044d02(iVar3);
    if (iVar3 != 1) goto LAB_ram_400458ea;
switchD_ram_400458d6_caseD_1:
    uVar4 = uVar4 + (iVar5 - iVar9);
    goto LAB_ram_400458ea;
  }
  switch(cVar2 + -2) {
  case '\0':
    uVar4 = uVar4 + (iVar5 / 2 - iVar9 / 2);
    goto LAB_ram_400458ea;
  case '\x01':
    goto switchD_ram_400458d6_caseD_1;
  case '\x02':
    break;
  case '\x03':
    uVar4 = uVar4 + (iVar5 / 2 - iVar9 / 2);
    break;
  case '\x04':
    uVar4 = uVar4 + (iVar5 - iVar9);
    break;
  case '\x05':
    goto switchD_ram_400458d6_caseD_5;
  case '\x06':
    uVar4 = uVar4 + (iVar5 - iVar9);
    goto switchD_ram_400458d6_caseD_5;
  case '\a':
    iVar6 = iVar6 / 2;
    uVar4 = uVar4 + (iVar5 / 2 - iVar9 / 2);
    iVar1 = iVar1 / 2;
    break;
  default:
    goto LAB_ram_400458ea;
  }
  uVar11 = uVar11 + (iVar6 - iVar1);
LAB_ram_400458ea:
  switchD_ram:400458d6::default(param_1,uVar4,uVar11);
  return;
switchD_ram_400458d6_caseD_5:
  uVar11 = uVar11 + (iVar6 / 2 - iVar1 / 2);
  goto LAB_ram_400458ea;
}


/* NanoCore 1.12, address 0x40045974.
 * REA evidence: ev_1ab3ea4146e7fdf911015d7b79fa6c02700e651ac1df70c3d9129a15ce5a0aa9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40045974(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_ram_4004a4ca(param_2,*(undefined4 *)(*(int *)(param_1 + 8) + 0x20));
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40045996.
 * REA evidence: ev_ba50f0e9fc389e8314ab167ddd78e8a9136baede74bd156dbcb3f93031e3563a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400459c8) */
/* WARNING: Removing unreachable block (ram,0x400459fe) */

uint FUN_ram_40045996(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (((param_2 & 0x60000000) == 0x20000000) && (uVar1 = param_2 & 0x9fffffff, (int)uVar1 < 0x7d1))
  {
    if (1000 < (int)uVar1) {
      uVar1 = 1000 - uVar1;
    }
    param_2 = (int)(uVar1 * param_4) / 100;
  }
  if (((param_3 & 0x60000000) == 0x20000000) && (uVar1 = param_3 & 0x9fffffff, (int)uVar1 < 0x7d1))
  {
    if (1000 < (int)uVar1) {
      uVar1 = 1000 - uVar1;
    }
    param_3 = (int)(uVar1 * param_4) / 100;
  }
  if ((int)param_3 <= (int)param_1) {
    param_1 = param_3;
  }
  if ((int)param_1 <= (int)param_2) {
    param_1 = param_2;
  }
  return param_1;
}


/* NanoCore 1.12, address 0x40045a10.
 * REA evidence: ev_0d3ee1276cf5b41613a2da353c5006de6a809f230d27ce6eb391fca996796e73
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40045dfa) */
/* WARNING: Removing unreachable block (ram,0x40045fda) */

undefined4 FUN_ram_40045a10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint auStack_50 [7];
  
  if ((*(uint *)(param_1 + 0x28) & 0xc000000) == 0xc000000) {
    return 0;
  }
  iVar2 = FUN_ram_40048b6e();
  if (iVar2 == 0) {
    return 0;
  }
  if ((int)((uint)*(ushort *)(param_1 + 0x2a) << 0x14) < 0) {
    iVar13 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
    goto LAB_ram_40045a7a;
  }
  uVar4 = FUN_ram_40047b68(param_1,0,1);
  auStack_50[0] = uVar4;
  iVar13 = FUN_ram_40045174(iVar2);
  if (uVar4 == 0x200007d1) {
    iVar1 = FUN_ram_40046642(param_1);
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = 0;
    }
    iVar5 = FUN_ram_40044f58(param_1);
    iVar6 = FUN_ram_40044d1a(param_1);
    iVar3 = FUN_ram_40045224(param_1);
    iVar7 = FUN_ram_40048b96(param_1);
    iVar8 = FUN_ram_40044d02(param_1);
    uVar4 = iVar6 + iVar3 + iVar5;
    iVar3 = -0x1fffffff;
    iVar14 = 0;
    if (iVar8 == 1) {
      for (; iVar7 != iVar14; iVar14 = iVar14 + 1) {
        iVar10 = *(int *)(**(int **)(param_1 + 8) + iVar14 * 4);
        iVar8 = FUN_ram_40043c96(iVar10,0x40001);
        if (iVar8 == 0) {
          iVar8 = FUN_ram_400450bc(iVar10);
          if ((iVar8 == 0) &&
             ((auStack_50[0] = FUN_ram_40047b68(iVar10,0,10), 8 < (auStack_50[0] & 0xff) ||
              ((1 << (auStack_50[0] & 0x1f) & 0x149U) == 0)))) {
            auStack_50[0] = FUN_ram_40047b68(iVar10,0,8);
            iVar8 = -0x1fffffff;
            if (auStack_50[0] == 0) {
              iVar15 = *(int *)(iVar10 + 0x1c);
              iVar8 = *(int *)(iVar10 + 0x14);
              auStack_50[0] = FUN_ram_40047b68(iVar10,0,0x1a);
              iVar8 = (iVar15 - iVar8) + 1 + iVar5 + auStack_50[0];
            }
          }
          else {
            iVar8 = (*(int *)(param_1 + 0x1c) - *(int *)(iVar10 + 0x14)) + 1;
          }
          auStack_50[0] = FUN_ram_40047b68(iVar10,0,0x1a);
          if (iVar3 <= (int)(auStack_50[0] + iVar8)) {
            auStack_50[0] = FUN_ram_40047b68(iVar10,0,0x1a);
            iVar3 = iVar8 + auStack_50[0];
          }
        }
      }
      uVar9 = iVar6 + iVar3;
      if (iVar3 == -0x1fffffff) goto LAB_ram_40045ca0;
    }
    else {
      for (; iVar7 != iVar14; iVar14 = iVar14 + 1) {
        iVar10 = *(int *)(**(int **)(param_1 + 8) + iVar14 * 4);
        iVar8 = FUN_ram_40043c96(iVar10,0x40001);
        if (iVar8 == 0) {
          iVar8 = FUN_ram_400450bc(iVar10);
          if ((iVar8 == 0) &&
             ((auStack_50[0] = FUN_ram_40047b68(iVar10,0,10), 7 < (auStack_50[0] & 0xff) ||
              ((1 << (auStack_50[0] & 0x1f) & 0x93U) == 0)))) {
            auStack_50[0] = FUN_ram_40047b68(iVar10,0,9);
            iVar8 = -0x1fffffff;
            if (auStack_50[0] == 0) {
              iVar15 = *(int *)(iVar10 + 0x1c);
              iVar8 = *(int *)(iVar10 + 0x14);
              auStack_50[0] = FUN_ram_40047b68(iVar10,0,0x1b);
              iVar8 = (iVar15 - iVar8) + 1 + iVar6 + auStack_50[0];
            }
          }
          else {
            iVar8 = (*(int *)(iVar10 + 0x1c) - *(int *)(param_1 + 0x14)) + 1;
          }
          auStack_50[0] = FUN_ram_40047b68(iVar10,0,0x1b);
          if (iVar3 <= (int)(auStack_50[0] + iVar8)) {
            auStack_50[0] = FUN_ram_40047b68(iVar10,0,0x1b);
            iVar3 = iVar8 + auStack_50[0];
          }
        }
      }
      if (iVar3 == -0x1fffffff) {
LAB_ram_40045ca0:
        uVar9 = 0xe0000001;
      }
      else {
        uVar9 = iVar5 + iVar3;
      }
    }
    if (*(int *)(param_1 + 8) != 0) {
      *(int *)(*(int *)(param_1 + 8) + 0x18) = -iVar1;
    }
    if ((uVar9 != 0xe0000001) && ((int)uVar4 < (int)uVar9)) {
      uVar4 = uVar9;
    }
  }
  else if ((uVar4 & 0x60000000) == 0x20000000 && (int)(uVar4 & 0x9fffffff) < 0x7d1) {
    if (((int)((uint)*(ushort *)(iVar2 + 0x2a) << 0x14) < 0) ||
       (auStack_50[0] = FUN_ram_40047b68(iVar2,0,1), auStack_50[0] != 0x200007d1)) {
      uVar4 = uVar4 & 0x9fffffff;
      if (1000 < (int)uVar4) {
        uVar4 = 1000 - uVar4;
      }
      uVar9 = FUN_ram_40047b68(param_1,0,0x1a);
      auStack_50[0] = uVar9;
      auStack_50[0] = FUN_ram_40047b68(param_1,0,0x1b);
      uVar4 = (int)(iVar13 * uVar4) / 100 - (auStack_50[0] + uVar9);
    }
    else {
      iVar1 = FUN_ram_40044d1a(param_1);
      iVar3 = FUN_ram_40044f58(param_1);
      uVar4 = iVar1 + iVar3;
    }
  }
  uVar9 = FUN_ram_40047b68(param_1,0,4);
  auStack_50[0] = uVar9;
  auStack_50[0] = FUN_ram_40047b68(param_1,0,5);
  iVar13 = FUN_ram_40045996(uVar4,uVar9,auStack_50[0],iVar13);
LAB_ram_40045a7a:
  if ((*(ushort *)(param_1 + 0x2a) & 0x400) == 0) {
    uVar4 = FUN_ram_40047b68(param_1,0,2);
    auStack_50[0] = uVar4;
    iVar1 = FUN_ram_400451a2(iVar2);
    if (uVar4 == 0x200007d1) {
      iVar3 = FUN_ram_40046652(param_1);
      if (*(int *)(param_1 + 8) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c) = 0;
      }
      iVar5 = FUN_ram_40044f10(param_1);
      iVar6 = FUN_ram_40044ec8(param_1);
      iVar7 = FUN_ram_40045244(param_1);
      iVar8 = FUN_ram_40048b96(param_1);
      uVar4 = iVar5 + iVar7 + iVar6;
      iVar7 = -0x1fffffff;
      for (iVar14 = 0; piVar11 = *(int **)(param_1 + 8), iVar8 != iVar14; iVar14 = iVar14 + 1) {
        iVar15 = *(int *)(*piVar11 + iVar14 * 4);
        iVar10 = FUN_ram_40043c96(iVar15,0x40001);
        if (iVar10 == 0) {
          iVar10 = FUN_ram_400450bc(iVar15);
          if ((iVar10 == 0) &&
             (auStack_50[0] = FUN_ram_40047b68(iVar15,0,10), 3 < (auStack_50[0] & 0xff))) {
            auStack_50[0] = FUN_ram_40047b68(iVar15,0,9);
            iVar10 = -0x1fffffff;
            if (auStack_50[0] == 0) {
              iVar12 = *(int *)(iVar15 + 0x20);
              iVar10 = *(int *)(iVar15 + 0x18);
              auStack_50[0] = FUN_ram_40047b68(iVar15,0,0x18);
              iVar10 = (iVar12 - iVar10) + 1 + iVar5 + auStack_50[0];
            }
          }
          else {
            iVar10 = (*(int *)(iVar15 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
          }
          auStack_50[0] = FUN_ram_40047b68(iVar15,0,0x19);
          if (iVar7 <= (int)(auStack_50[0] + iVar10)) {
            auStack_50[0] = FUN_ram_40047b68(iVar15,0,0x19);
            iVar7 = iVar10 + auStack_50[0];
          }
        }
      }
      if (piVar11 != (int *)0x0) {
        piVar11[7] = -iVar3;
      }
      if ((iVar7 != -0x1fffffff) && ((int)uVar4 < iVar7 + iVar6)) {
        uVar4 = iVar7 + iVar6;
      }
    }
    else if ((uVar4 & 0x60000000) == 0x20000000 && (int)(uVar4 & 0x9fffffff) < 0x7d1) {
      if (((*(ushort *)(iVar2 + 0x2a) & 0x400) == 0) &&
         (auStack_50[0] = FUN_ram_40047b68(iVar2,0,2), auStack_50[0] == 0x200007d1)) {
        iVar3 = FUN_ram_40044f10(param_1);
        iVar5 = FUN_ram_40044ec8(param_1);
        uVar4 = iVar3 + iVar5;
      }
      else {
        uVar4 = uVar4 & 0x9fffffff;
        if (1000 < (int)uVar4) {
          uVar4 = 1000 - uVar4;
        }
        uVar9 = FUN_ram_40047b68(param_1,0,0x18);
        auStack_50[0] = uVar9;
        auStack_50[0] = FUN_ram_40047b68(param_1,0,0x19);
        uVar4 = (int)(iVar1 * uVar4) / 100 - (auStack_50[0] + uVar9);
      }
    }
    uVar9 = FUN_ram_40047b68(param_1,0,6);
    auStack_50[0] = uVar9;
    auStack_50[0] = FUN_ram_40047b68(param_1,0,7);
    iVar1 = FUN_ram_40045996(uVar4,uVar9,auStack_50[0],iVar1);
  }
  else {
    iVar1 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1;
  }
  if (((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) + 1 == iVar13) &&
     ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) + 1 == iVar1)) {
    return 0;
  }
  FUN_ram_400455dc(param_1);
  uStack_60 = *(undefined4 *)(param_1 + 0x14);
  uStack_5c = *(undefined4 *)(param_1 + 0x18);
  uStack_58 = *(undefined4 *)(param_1 + 0x1c);
  uStack_54 = *(undefined4 *)(param_1 + 0x20);
  FUN_ram_400451d0(iVar2,auStack_50);
  iVar3 = FUN_ram_4004a6a6(&uStack_60,auStack_50,0);
  if (iVar3 == 0) {
    FUN_ram_400475d4(iVar2);
  }
  *(int *)(param_1 + 0x20) = iVar1 + *(int *)(param_1 + 0x18) + -1;
  iVar1 = FUN_ram_40044d02(param_1);
  if (iVar1 == 1) {
    *(int *)(param_1 + 0x14) = (*(int *)(param_1 + 0x1c) - iVar13) + 1;
  }
  else {
    *(int *)(param_1 + 0x1c) = iVar13 + *(int *)(param_1 + 0x14) + -1;
  }
  FUN_ram_40044c48(param_1,0x2c,&uStack_60);
  FUN_ram_40044c48(iVar2,0x25,param_1);
  FUN_ram_400455dc(param_1);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 2;
  iVar13 = FUN_ram_4004a6a6(param_1 + 0x14,auStack_50,0);
  if ((iVar3 != 0) || (iVar13 != 0)) {
    FUN_ram_400475d4(iVar2);
  }
  FUN_ram_40044af4(param_1);
  return 1;
}


