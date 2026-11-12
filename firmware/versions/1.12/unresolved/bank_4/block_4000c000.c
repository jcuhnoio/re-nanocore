/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4000c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4000c382.
 * REA evidence: ev_568c3ce3d53fbfd5bf76482e5bc50102fcdf7c6d851a498c66dc4fcf735b3da5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c382(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_400086ec();
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  if (param_1 != 0) {
    uVar3 = 0xffffffff;
    if ((_DAT_ram_3004f7ac == 0) || (*(short *)(_DAT_ram_3004f7ac + 0x5218) == 0))
    goto LAB_ram_4000c438;
  }
  uVar3 = 0xffffffff;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    FUN_ram_40007876(DAT_ram_4009672c);
    FUN_ram_40007dac(param_1 != 0);
    FUN_ram_400075de();
    FUN_ram_4000303c(iVar2,iVar1,0x308);
    if ((param_1 != 0) && (*(int *)(iVar1 + 0x58) != 2)) {
      FUN_ram_4000303c(iVar2 + 0x60,&DAT_ram_400967d8,0xc);
      uVar3 = _DAT_ram_300517e0;
      *(undefined4 *)(iVar2 + 0x58) = 2;
      *(undefined1 *)(iVar2 + 0x5c) = 0;
      *(undefined4 *)(iVar2 + 0x9c) = uVar3;
    }
    *(bool *)(iVar2 + 0x5d) = param_1 != 0;
    nc_dsp_publish_bank(0x3004ee20);
    uVar3 = 0;
  }
LAB_ram_4000c438:
  FUN_ram_40007bb6();
  return uVar3;
}


/* NanoCore 1.12, address 0x4000c44e.
 * REA evidence: ev_10a1b56909cf84c3be33f13e5af3e9092a512c0614be9d29fbf80f4726400ff2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c44e(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    if (iVar3 != 0) {
      bVar1 = param_1 != 0;
      if ((*(int *)(iVar2 + 0xf0) == 7) && ((bool)*(char *)(iVar2 + 0xf5) == bVar1)) {
        uVar4 = 0;
        if (DAT_ram_3004f722 == *(char *)(iVar2 + 0xf5)) goto LAB_ram_4000c50c;
      }
      FUN_ram_400078be(bVar1);
      if (param_1 != 0) {
        FUN_ram_40068da0(_DAT_ram_3004f724);
      }
      FUN_ram_4000303c(iVar3,iVar2,0x308);
      if ((param_1 != 0) && (*(int *)(iVar2 + 0xf0) != 7)) {
        *(undefined1 *)(iVar3 + 0xf4) = 0;
        FUN_ram_40069600(iVar3 + 0xf8,0xc,0);
      }
      *(undefined4 *)(iVar3 + 0xf0) = 7;
      uVar4 = _DAT_ram_3004f724;
      *(bool *)(iVar3 + 0xf5) = bVar1;
      *(undefined4 *)(iVar3 + 0x134) = uVar4;
      nc_dsp_publish_bank(0x3004ee20);
      uVar4 = 0;
    }
  }
LAB_ram_4000c50c:
  FUN_ram_40007bb6();
  return uVar4;
}


/* NanoCore 1.12, address 0x4000c528.
 * REA evidence: ev_794b6060d08aa2da17329831f81390daf3438772373d8fc4b1334f8966772fbf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c528(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if (*(int *)(iVar2 + 0xf0) != 7) {
      *(undefined1 *)(iVar3 + 0xf4) = 0;
      FUN_ram_40069600(iVar3 + 0xf8,0xc,0);
    }
    *(undefined4 *)(iVar3 + 0xf0) = 7;
    *(undefined4 *)(iVar3 + 0x134) = _DAT_ram_3004f724;
    FUN_ram_40007e94(iVar3,3);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0xf8) = param_1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar1 = 0;
  }
  FUN_ram_40007bb6();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000c5d6.
 * REA evidence: ev_4914537df4c476f659d57b7a8426b028664fbfb272acd1b884554ea7fe779d60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000c5d6(undefined4 param_1)

{
  FUN_ram_40008838(FUN_ram_40007f26,param_1);
  return;
}


/* NanoCore 1.12, address 0x4000c5e4.
 * REA evidence: ev_9079c983a29eaf67e25e70466de913fe5dc3aeace8965b9affd4b6e1b89a8465
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c5e4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  
  FUN_ram_400086ec();
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      bVar4 = 0;
      if (*(int *)(iVar1 + 0x188) == 5) {
        bVar4 = *(byte *)(iVar1 + 0x18c);
        if (7 < bVar4) {
          bVar4 = 0;
        }
      }
      if ((param_1 != 0) && (*(char *)(iVar1 + 0x18d) == '\0')) {
        FUN_ram_40065c3e(_DAT_ram_3004e524,FUN_ram_40007dde);
        *(byte *)(_DAT_ram_3004e524 + 0x20) = bVar4;
      }
      FUN_ram_4000303c(iVar2,iVar1,0x308);
      if ((param_1 != 0) && (*(int *)(iVar1 + 0x188) != 5)) {
        *(byte *)(iVar2 + 0x18c) = bVar4;
        FUN_ram_40065bd4(iVar2 + 400,0xc);
      }
      *(undefined4 *)(iVar2 + 0x188) = 5;
      iVar1 = _DAT_ram_3004e524;
      *(bool *)(iVar2 + 0x18d) = param_1 != 0;
      *(int *)(iVar2 + 0x1cc) = iVar1;
      FUN_ram_400078dc(param_1 != 0);
      nc_dsp_publish_bank(0x3004ee20);
      uVar3 = 0;
    }
  }
  FUN_ram_40007bb6();
  return uVar3;
}


/* NanoCore 1.12, address 0x4000c6ce.
 * REA evidence: ev_5a15113a6a750dd4c1fee741187784eac0c7e82b274647c8f89af31959696a2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c6ce(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if (*(int *)(iVar2 + 0x188) != 5) {
      *(undefined1 *)(iVar3 + 0x18c) = 0;
      FUN_ram_40065bd4(iVar3 + 400,0xc);
    }
    *(undefined4 *)(iVar3 + 0x188) = 5;
    *(undefined4 *)(iVar3 + 0x1cc) = _DAT_ram_3004e524;
    FUN_ram_40007e94(iVar3,5);
    *(undefined4 *)(iVar3 + param_2 * 4 + 400) = param_1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar1 = 0;
  }
  FUN_ram_40007bb6();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000c77a.
 * REA evidence: ev_1d09b10e095111f91a461d56b9c324e6279a6b08b9e75c0b8b7832cca344d3bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000c77a(undefined4 param_1)

{
  FUN_ram_40008838(FUN_ram_40008928,param_1);
  return;
}


/* NanoCore 1.12, address 0x4000c788.
 * REA evidence: ev_d7f83200cef55ab86079783bb27179867e07dd1e9a2a1bd35efd49682235b209
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c788(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    if (iVar3 != 0) {
      bVar1 = param_1 != 0;
      FUN_ram_400078fa(bVar1);
      FUN_ram_4000303c(iVar3,iVar2,0x308);
      uVar4 = _DAT_ram_3005180c;
      if (*(int *)(iVar2 + 0x1d4) == 8) {
        *(bool *)(iVar3 + 0x1d9) = bVar1;
        *(undefined4 *)(iVar3 + 0x218) = uVar4;
        if (param_1 != 0) {
          FUN_ram_40008706(*(undefined1 *)(iVar3 + 0x1d8));
        }
      }
      else {
        if (param_1 != 0) {
          FUN_ram_40070fd8(_DAT_ram_30051814);
          if (*(int *)(iVar2 + 0x1d4) != 4) {
            *(undefined1 *)(iVar3 + 0x1d8) = 0;
            nc_mod_default_parameters(iVar3 + 0x1dc,0xc,0);
          }
        }
        *(undefined4 *)(iVar3 + 0x1d4) = 4;
        uVar4 = _DAT_ram_30051814;
        *(bool *)(iVar3 + 0x1d9) = bVar1;
        *(undefined4 *)(iVar3 + 0x218) = uVar4;
      }
      nc_dsp_publish_bank(0x3004ee20);
      uVar4 = 0;
    }
  }
  FUN_ram_40007bb6();
  return uVar4;
}


/* NanoCore 1.12, address 0x4000c866.
 * REA evidence: ev_9c659893c2268d2e7b39a57b09db0e7afa8f14c2f0d3a284607135b71f024e42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c866(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    uVar1 = _DAT_ram_3005180c;
    if (*(int *)(iVar2 + 0x1d4) != 8) {
      *(undefined4 *)(iVar3 + 0x1d4) = 4;
      uVar1 = _DAT_ram_30051814;
    }
    *(undefined4 *)(iVar3 + 0x218) = uVar1;
    FUN_ram_40007e94(iVar3,6);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x1dc) = param_1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar1 = 0;
  }
  FUN_ram_40007bb6();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000c90e.
 * REA evidence: ev_7694c1284a756956de1bbc4c55184613b834717776ec41713252bc70b94b787c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000c90e(undefined4 param_1)

{
  FUN_ram_40008838(FUN_ram_400089f6,param_1);
  return;
}


/* NanoCore 1.12, address 0x4000c91c.
 * REA evidence: ev_0d29ec63c22aecaa55d34a1bc162ca3a512f206a2c23be96f4affe718de4ae2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000c91c(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = 0xffffffff;
    if (param_2 != 0) {
      uVar1 = FUN_ram_400002f4(0xffffffff);
      FUN_ram_4000303c(param_2,param_1 * 0xc + 0x3004e400,0xc);
      FUN_ram_400002fa(uVar1);
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000c968.
 * REA evidence: ev_3ae073663831b19c1ad66d5977f09e6823bba41847f2cd2ff2a1d2a69fdce2aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000c968(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400086c0();
  if (((iVar1 == 0) && (iVar1 = FUN_ram_40007b94(), iVar1 == 0)) && (DAT_ram_3004e3d4 != '\0')) {
    FUN_ram_40008874(&DAT_ram_3004ab10,param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_4000bb90(param_1,0,0);
    FUN_ram_400083aa(0,param_1,uVar2);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4000c9bc.
 * REA evidence: ev_9143a73b5a11cedc8f136771caaa4dc3518102c682c492dd2e2628bad8a4c96d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000c9bc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400086c0();
  if (((iVar1 == 0) && (iVar1 = FUN_ram_40007b94(), iVar1 == 0)) && (DAT_ram_3004e3d4 != '\0')) {
    FUN_ram_40008874(&DAT_ram_3004ac8c,param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_4000bf64(param_1);
    FUN_ram_400083aa(1,param_1,uVar2);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4000ca0c.
 * REA evidence: ev_12cd3be865f0395a6f68517cedfa75ebab2e24e344d6042c6811b1f43c0122e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000ca0c(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_21 [9];
  
  auStack_21[0] = 0;
  iVar3 = nc_dsp_active_bank(0x3004ee20);
  if (param_1 != 0) {
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0xa4) == 3)) && (*(char *)(iVar3 + 0xa9) != '\0')) &&
       (uVar4 = FUN_ram_40073d90(_DAT_ram_3005181c), *(byte *)(iVar3 + 0xa8) == uVar4)) {
      FUN_ram_40007918(1);
      return 0;
    }
    iVar3 = FUN_ram_40008728(auStack_21);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  FUN_ram_400086ec();
  iVar3 = nc_dsp_active_bank(0x3004ee20);
  iVar5 = nc_dsp_inactive_bank(0x3004ee20);
  if ((iVar3 == 0) || (iVar5 == 0)) goto LAB_ram_4000cb8c;
  if (param_1 != 0) {
    if (*(int *)(iVar3 + 0xa4) == 3) {
      if (*(char *)(iVar3 + 0xa9) != '\0') {
        uVar4 = FUN_ram_40073d90(_DAT_ram_3005181c);
        if (*(byte *)(iVar3 + 0xa8) == uVar4) {
          FUN_ram_40007918(1);
          goto LAB_ram_4000cb3c;
        }
        if (*(int *)(iVar3 + 0xa4) != 3) goto LAB_ram_4000ca88;
      }
      uVar2 = *(undefined1 *)(iVar3 + 0xa8);
    }
    else {
LAB_ram_4000ca88:
      uVar2 = 6;
    }
    iVar3 = FUN_ram_40008b28(uVar2);
    if (iVar3 != 0) {
LAB_ram_4000cb8c:
      FUN_ram_40007bb6();
      FUN_ram_4000886c(auStack_21[0]);
      return 0xffffffff;
    }
    iVar3 = nc_dsp_active_bank(0x3004ee20);
    iVar5 = nc_dsp_inactive_bank(0x3004ee20);
    if ((iVar3 == 0) || (iVar5 == 0)) goto LAB_ram_4000cb8c;
  }
  FUN_ram_40007918(param_1 != 0);
  if (param_1 != 0) {
    FUN_ram_40073d9e(_DAT_ram_3005181c);
  }
  FUN_ram_4000303c(iVar5,iVar3,0x308);
  if ((param_1 != 0) && (*(int *)(iVar3 + 0xa4) != 3)) {
    *(undefined1 *)(iVar5 + 0xa8) = 6;
    FUN_ram_40073e58(iVar5 + 0xac,0xc,6);
  }
  *(undefined4 *)(iVar5 + 0xa4) = 3;
  uVar1 = _DAT_ram_3005181c;
  *(bool *)(iVar5 + 0xa9) = param_1 != 0;
  *(undefined4 *)(iVar5 + 0xe8) = uVar1;
  nc_dsp_publish_bank(0x3004ee20);
LAB_ram_4000cb3c:
  FUN_ram_40007bb6();
  FUN_ram_4000886c(auStack_21[0]);
  return 0;
}


/* NanoCore 1.12, address 0x4000cb9c.
 * REA evidence: ev_dad9e3f3074012cb949c685b0bc48d2148ccc9a7ecb471e8a35466bf1adbcd8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cb9c(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_21 [5];
  
  uVar2 = 6;
  if (param_1 < 8) {
    uVar2 = param_1;
  }
  auStack_21[0] = 0;
  DAT_ram_30051820 = 1;
  iVar3 = FUN_ram_40008728(auStack_21);
  if (iVar3 == 0) {
    FUN_ram_400086ec();
    iVar3 = nc_dsp_active_bank(0x3004ee20);
    iVar4 = nc_dsp_inactive_bank(0x3004ee20);
    if ((iVar3 != 0) && (iVar4 != 0)) {
      if ((*(int *)(iVar3 + 0xa4) == 3) &&
         ((*(byte *)(iVar3 + 0xa8) == uVar2 &&
          (uVar5 = FUN_ram_40073d90(_DAT_ram_3005181c), uVar2 == uVar5)))) {
        FUN_ram_40007bb6();
LAB_ram_4000cc4a:
        FUN_ram_4000886c(auStack_21[0]);
        DAT_ram_30051820 = 0;
        return 0;
      }
      DAT_ram_30051820 = 2;
      iVar3 = FUN_ram_40008b28(uVar2);
      if (iVar3 == 0) {
        iVar3 = nc_dsp_active_bank(0x3004ee20);
        iVar4 = nc_dsp_inactive_bank(0x3004ee20);
        if ((iVar3 != 0) && (iVar4 != 0)) {
          FUN_ram_4000303c(iVar4,iVar3,0x308);
          if ((*(int *)(iVar3 + 0xa4) != 3) || (*(byte *)(iVar3 + 0xa8) != uVar2)) {
            FUN_ram_40073e58(iVar4 + 0xac,0xc,uVar2);
          }
          uVar1 = _DAT_ram_3005181c;
          *(undefined4 *)(iVar4 + 0xa4) = 3;
          *(undefined4 *)(iVar4 + 0xe8) = uVar1;
          *(char *)(iVar4 + 0xa8) = (char)uVar2;
          FUN_ram_40007e94(iVar4,2);
          DAT_ram_30051820 = 3;
          FUN_ram_40073d9e(uVar1);
          DAT_ram_30051820 = 4;
          nc_dsp_publish_bank(0x3004ee20);
          FUN_ram_40007bb6();
          DAT_ram_30051820 = 5;
          goto LAB_ram_4000cc4a;
        }
      }
    }
    FUN_ram_40007bb6();
    FUN_ram_4000886c(auStack_21[0]);
  }
  DAT_ram_30051820 = 0;
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000ccfc.
 * REA evidence: ev_18af5c212edd84e34afcd74aa02e3f0a02dff50128dd97d4c7aa42ec62360e19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000ccfc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_400086ec();
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_40007936(param_1 != 0);
      if (param_1 != 0) {
        FUN_ram_40066d64(_DAT_ram_3004f714);
      }
      FUN_ram_4000303c(iVar2,iVar1,0x308);
      if (*(int *)(iVar1 + 0x220) != 6) {
        *(undefined1 *)(iVar2 + 0x224) = 2;
        FUN_ram_40066e8e(iVar2 + 0x228,0xc,2);
      }
      *(undefined4 *)(iVar2 + 0x220) = 6;
      uVar3 = _DAT_ram_3004f714;
      *(bool *)(iVar2 + 0x225) = param_1 != 0;
      *(undefined4 *)(iVar2 + 0x264) = uVar3;
      nc_dsp_publish_bank(0x3004ee20);
      uVar3 = 0;
    }
  }
  FUN_ram_40007bb6();
  return uVar3;
}


/* NanoCore 1.12, address 0x4000cdb4.
 * REA evidence: ev_c0bee1a6f91b48ac1e703e07ed5cbbd2171edd16c6284de3158ed1ab5360754d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cdb4(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if (*(int *)(iVar2 + 0x220) != 6) {
      *(undefined1 *)(iVar3 + 0x224) = 2;
      FUN_ram_40066e8e(iVar3 + 0x228,0xc,2);
    }
    *(undefined4 *)(iVar3 + 0x220) = 6;
    *(undefined4 *)(iVar3 + 0x264) = _DAT_ram_3004f714;
    FUN_ram_40007e94(iVar3,7);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x228) = param_1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar1 = 0;
  }
  FUN_ram_40007bb6();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000ce64.
 * REA evidence: ev_8ad3843433817d2df41e6359a80c3e22e80f8a0b685351dbeb46a9061b178566
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000ce64(undefined4 param_1)

{
  FUN_ram_40008838(FUN_ram_400080a8,param_1);
  return;
}


/* NanoCore 1.12, address 0x4000ce72.
 * REA evidence: ev_84bb7e4c2f7e4171983f042554d007da4eec8a4519dd7b8084b889192f653ce2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000ce72(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_400086ec();
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_40007954(param_1 != 0);
      if (param_1 != 0) {
        FUN_ram_40068c92(_DAT_ram_3004f71c);
      }
      FUN_ram_4000303c(iVar2,iVar1,0x308);
      if (*(int *)(iVar1 + 0x26c) != 10) {
        *(undefined1 *)(iVar2 + 0x270) = 0;
        FUN_ram_40068cda(iVar2 + 0x274,0xc,0);
      }
      *(undefined4 *)(iVar2 + 0x26c) = 10;
      uVar3 = _DAT_ram_3004f71c;
      *(bool *)(iVar2 + 0x271) = param_1 != 0;
      *(undefined4 *)(iVar2 + 0x2b0) = uVar3;
      nc_dsp_publish_bank(0x3004ee20);
      uVar3 = 0;
    }
  }
  FUN_ram_40007bb6();
  return uVar3;
}


/* NanoCore 1.12, address 0x4000cf28.
 * REA evidence: ev_558120b1fc92e42a57ab7b75573eef2d9bcbcac388e782730140c7f87af01a9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cf28(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if (*(int *)(iVar2 + 0x26c) != 10) {
      *(undefined1 *)(iVar3 + 0x270) = 0;
      FUN_ram_40068cda(iVar3 + 0x274,0xc,0);
    }
    *(undefined4 *)(iVar3 + 0x26c) = 10;
    *(undefined4 *)(iVar3 + 0x2b0) = _DAT_ram_3004f71c;
    FUN_ram_40007e94(iVar3,8);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x274) = param_1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar1 = 0;
  }
  FUN_ram_40007bb6();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000cfd6.
 * REA evidence: ev_6548889c20ec224a448c2d839905702709d27183000a3b77e061a1852752fda3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000cfd6(undefined4 param_1)

{
  FUN_ram_40008838(FUN_ram_4000814c,param_1);
  return;
}


/* NanoCore 1.12, address 0x4000cfe4.
 * REA evidence: ev_1ba3be183179683099f5c72acd82d422fabab7a997b5e8921fb727f9b84f976d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cfe4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    if (iVar3 != 0) {
      bVar1 = param_1 != 0;
      if ((*(int *)(iVar2 + 0x2b8) == 9) && ((bool)*(char *)(iVar2 + 0x2bd) == bVar1)) {
        uVar4 = 0;
        if (DAT_ram_3004f731 == *(char *)(iVar2 + 0x2bd)) goto LAB_ram_4000d09e;
      }
      FUN_ram_40007972(bVar1);
      if (param_1 != 0) {
        FUN_ram_40068da0(_DAT_ram_3004f734);
      }
      FUN_ram_4000303c(iVar3,iVar2,0x308);
      if (*(int *)(iVar2 + 0x2b8) != 9) {
        *(undefined1 *)(iVar3 + 700) = 0;
        FUN_ram_40069600(iVar3 + 0x2c0,0xc,0);
      }
      *(undefined4 *)(iVar3 + 0x2b8) = 9;
      uVar4 = _DAT_ram_3004f734;
      *(bool *)(iVar3 + 0x2bd) = bVar1;
      *(undefined4 *)(iVar3 + 0x2fc) = uVar4;
      nc_dsp_publish_bank(0x3004ee20);
      uVar4 = 0;
    }
  }
LAB_ram_4000d09e:
  FUN_ram_40007bb6();
  return uVar4;
}


