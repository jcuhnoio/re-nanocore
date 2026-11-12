/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40017000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40017026.
 * REA evidence: ev_a70308fc2656035cdae9d81dcaf840d26a267348241499ed72a4a1bcaef8108a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001711a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017026(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  iVar3 = FUN_ram_40056c6c();
  if (_DAT_ram_30069aa0 == 0) {
    return;
  }
  iVar4 = FUN_ram_4000ee70();
  iVar5 = FUN_ram_4003f5b0();
  if (iVar5 == 0) {
    if (DAT_ram_30069b24 != '\0') {
      DAT_ram_30069b24 = '\0';
      DAT_ram_30069a51 = 0;
      _DAT_ram_30069a54 = iVar3;
    }
    if (iVar4 < 1) {
      DAT_ram_30069a58 = '\0';
      DAT_ram_30049da0 = '\x01';
      bVar2 = 1;
    }
    else {
      if (DAT_ram_30049da1 < 3) {
        if (DAT_ram_30049da1 == 0) {
          iVar5 = 0xe74;
          goto LAB_ram_40017172;
        }
        if (DAT_ram_30049da1 == 1) {
          if (iVar4 < 0xe42) {
            DAT_ram_30049da1 = 0;
          }
          else if (0xf63 < iVar4) {
            DAT_ram_30049da1 = 2;
          }
        }
        else {
          DAT_ram_30049da1 = (0xf31 < iVar4) + 1;
        }
      }
      else {
        DAT_ram_30049da1 = 2;
        if (iVar4 < 0xf64) {
          iVar5 = 0xe42;
LAB_ram_40017172:
          DAT_ram_30049da1 = iVar5 <= iVar4;
        }
      }
      bVar2 = DAT_ram_30049da1;
      if (DAT_ram_30069a58 == '\0') {
        if (iVar4 < 0xddf) {
          DAT_ram_30069a58 = '\x01';
LAB_ram_40017194:
          DAT_ram_30049da0 = '\x01';
          _DAT_ram_30069a5c = iVar3;
        }
      }
      else if (0xe0f < iVar4) {
        DAT_ram_30069a58 = '\0';
        goto LAB_ram_40017194;
      }
    }
    if (DAT_ram_30069a58 == '\0') goto LAB_ram_400170cc;
    bVar7 = false;
    cVar1 = DAT_ram_30049da0;
    for (iVar4 = _DAT_ram_30069a5c; 499 < (uint)(iVar3 - iVar4); iVar4 = iVar4 + 500) {
      cVar1 = cVar1 == '\0';
      bVar7 = true;
    }
    if (bVar7) {
      DAT_ram_30049da0 = cVar1;
      _DAT_ram_30069a5c = iVar4;
    }
    bVar2 = 0;
    bVar7 = DAT_ram_30049da0 == '\0';
LAB_ram_400171e0:
    pcVar6 = s_battery_low_ram_40094f6c;
    puVar9 = &DAT_ram_30069aa4;
  }
  else {
    if (DAT_ram_30069b24 == '\0') {
      DAT_ram_30069b24 = '\x01';
      DAT_ram_30069a51 = 0;
      DAT_ram_30049da0 = '\x01';
      DAT_ram_30069a58 = '\0';
      _DAT_ram_30069a54 = iVar3;
      _DAT_ram_30069a5c = iVar3;
    }
    if (iVar4 < 0xfb9) {
      uVar8 = (uint)DAT_ram_30069a51;
      bVar7 = false;
      for (iVar4 = _DAT_ram_30069a54; 999 < (uint)(iVar3 - iVar4); iVar4 = iVar4 + 1000) {
        uVar8 = (uVar8 + 1) % 3;
        bVar7 = true;
      }
      bVar2 = DAT_ram_30069a51;
      if (bVar7) {
        DAT_ram_30069a51 = (byte)uVar8;
        _DAT_ram_30069a54 = iVar4;
        bVar2 = DAT_ram_30069a51;
      }
LAB_ram_400170cc:
      if (bVar2 == 0) {
        bVar7 = false;
        goto LAB_ram_400171e0;
      }
      bVar7 = false;
      if (bVar2 != 2) {
        pcVar6 = s_battery_mid_ram_40094f88;
        puVar9 = &DAT_ram_30069ae4;
        goto LAB_ram_400170e8;
      }
    }
    else {
      bVar2 = 2;
    }
    bVar7 = false;
    pcVar6 = s_battery_full_ram_40094f78;
    puVar9 = &DAT_ram_30069a60;
  }
LAB_ram_400170e8:
  iVar3 = FUN_ram_40016728(pcVar6);
  if ((iVar3 == 0) || (bVar7)) {
    FUN_ram_40043fd6(_DAT_ram_30069aa0,1);
    DAT_ram_30049da2 = 0xff;
  }
  else if ((DAT_ram_30049da2 != bVar2) ||
          (iVar3 = FUN_ram_40043b92(_DAT_ram_30069aa0,1), iVar3 != 0)) {
    DAT_ram_30049da2 = bVar2;
    FUN_ram_40016e8a(_DAT_ram_30069aa0,puVar9);
    FUN_ram_40016654(_DAT_ram_30069aa0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400172bc.
 * REA evidence: ev_9387af51ba8d251967e313b91111ca3e58888e16a29e967e62fd509f3e0fb1ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400172bc(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  byte bStack_18;
  byte bStack_16;
  
  if ((DAT_ram_30049da3 == '\0') || (DAT_ram_30069a50 == '\0')) {
    return;
  }
  if (_DAT_ram_30069f40 != 0) {
    uVar2 = FUN_ram_40004352(0x96);
    iVar3 = FUN_ram_400042ea();
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    if ((uint)(iVar3 - _DAT_ram_30069f40) < uVar2) {
      return;
    }
  }
  if (((-1 < DAT_ram_30049da4) && (_DAT_ram_3006a018 != 0)) && (_DAT_ram_3006a020 != 0)) {
    memset(auStack_38,0,0x28);
    FUN_ram_4000de1a(auStack_38);
    if (8 < bStack_18) {
      bStack_18 = 8;
    }
    bVar1 = bStack_16;
    if (8 < bStack_16) {
      bVar1 = 8;
    }
    if (DAT_ram_3006a01c != bStack_18) {
      DAT_ram_3006a01c = bStack_18;
      FUN_ram_40016fea(_DAT_ram_3006a018);
    }
    if (DAT_ram_3006a024 != bVar1) {
      DAT_ram_3006a024 = bVar1;
      FUN_ram_40016fea(_DAT_ram_3006a020,bVar1);
    }
  }
  FUN_ram_40016582();
  FUN_ram_40017026();
  FUN_ram_40016506();
  return;
}


/* NanoCore 1.11, address 0x400173bc.
 * REA evidence: ev_36b2bda68f890b2cf6d187099aca9adc459fa94781b06b1587de641689986941
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400173bc(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (DAT_ram_30069a50 != '\0')) {
    uVar1 = ~DAT_ram_30049da4 >> 0x1f;
  }
  if (_DAT_ram_3006a018 != 0) {
    if (uVar1 == 0) {
      FUN_ram_40043fd6(_DAT_ram_3006a018,1);
    }
    else {
      FUN_ram_40043aac();
    }
  }
  if (_DAT_ram_3006a020 == 0) {
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    if (uVar1 == 0) {
      FUN_ram_40043fd6(_DAT_ram_3006a020,1);
      return;
    }
    FUN_ram_40043aac();
  }
  DAT_ram_3006a01c = 0xff;
  DAT_ram_3006a024 = 0xff;
  FUN_ram_400172bc(0);
  return;
}


/* NanoCore 1.11, address 0x4001743a.
 * REA evidence: ev_361435d9322ad100de77bac5ef7eff36fe12af551fc6552ce60ee3ab0d0580cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001743a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar1 = FUN_ram_40016728(&DAT_ram_40094f94);
  iVar2 = FUN_ram_40016728(s_master_knob_ram_40094f9c);
  iVar3 = FUN_ram_40016728(s_preset_knob_ram_40094fa8);
  if ((iVar2 == 0) && (iVar1 == 0)) {
    iVar1 = iVar3;
    if (_DAT_ram_30069fc8 != 0) {
      FUN_ram_40043fd6(_DAT_ram_30069fc8,1);
    }
joined_r0x400174e4:
    if (iVar1 == 0) {
      if (_DAT_ram_3006a304 != 0) {
        FUN_ram_40043fd6(_DAT_ram_3006a304,1);
      }
      goto LAB_ram_400174c8;
    }
  }
  else {
    puVar4 = &DAT_ram_30069fcc;
    if (iVar2 == 0) {
      puVar4 = &DAT_ram_30069b80;
    }
    FUN_ram_40016e8a(_DAT_ram_30069fc8,puVar4);
    FUN_ram_40016600(_DAT_ram_30069fc8);
    if (iVar3 == 0) goto joined_r0x400174e4;
  }
  puVar4 = &DAT_ram_3006a308;
  if (iVar3 == 0) {
    puVar4 = &DAT_ram_30069b80;
  }
  FUN_ram_40016e8a(_DAT_ram_3006a304,puVar4);
  FUN_ram_4001662a(_DAT_ram_3006a304);
LAB_ram_400174c8:
  FUN_ram_40017026();
  return;
}


/* NanoCore 1.11, address 0x400174fa.
 * REA evidence: ev_534e665f21f3b12fbccb7ce81d5518a5d1d6911773ccd07129d097db8e567a12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400174fa(int param_1)

{
  int iVar1;
  char cVar2;
  int local_2c [6];
  
  local_2c[0] = _DAT_ram_30069fc8;
  local_2c[1] = _DAT_ram_3006a304;
  local_2c[2] = _DAT_ram_30069aa0;
  cVar2 = '\0';
  if (param_1 != 0) {
    cVar2 = DAT_ram_30069a50;
  }
  iVar1 = 0;
  do {
    if (local_2c[iVar1] != 0) {
      if (cVar2 == '\0') {
        FUN_ram_40043fd6(local_2c[iVar1],1);
      }
      else {
        FUN_ram_40043aac();
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  if (cVar2 != '\0') {
    FUN_ram_4001743a();
    FUN_ram_40016582();
    FUN_ram_400163d8();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001757a.
 * REA evidence: ev_82ea775c65137285cf23532fcffe159559058fd71fb334ed52737a223675de05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001757a(void)

{
  undefined3 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  uVar1 = FUN_ram_40014984();
  iVar2 = FUN_ram_4002c4e4(0);
  iVar3 = FUN_ram_4002c502(0,&uStack_14);
  if (iVar3 != 0) {
    uVar1 = CONCAT12(uStack_12,uStack_14);
  }
  if (_DAT_ram_30069fc4 != 0) {
    FUN_ram_400488da(_DAT_ram_30069fc4,uVar1,0);
    FUN_ram_400488f8(_DAT_ram_30069fc4,0xff,0);
  }
  if (_DAT_ram_30069f44 != 0) {
    FUN_ram_400488da(_DAT_ram_30069f44,uVar1,0);
    FUN_ram_400488f8(_DAT_ram_30069f44,0xff,0);
  }
  if (_DAT_ram_30069f48 != 0) {
    if (iVar2 == 0) {
      FUN_ram_40043fd6(_DAT_ram_30069f48,1);
    }
    else {
      FUN_ram_40016e8a(_DAT_ram_30069f48,&DAT_ram_30069f4c);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4001761e.
 * REA evidence: ev_3509118a5aed1905ad8b6b8c067c7d9c7e26f25537f8f73bf95473c2bddade6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001761e(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_34;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar3 = FUN_ram_40045064(param_2);
    uVar4 = FUN_ram_40045070(param_2);
    uVar2 = FUN_ram_40016c6c();
    FUN_ram_400489b6(param_2,uVar2,0);
    FUN_ram_400489f6(param_2,param_4,0);
    iVar1 = 0;
    puVar6 = &DAT_ram_400950f8;
    do {
      uVar5 = FUN_ram_40057bac(param_1);
      *(undefined4 *)(param_3 + iVar1 * 4) = uVar5;
      FUN_ram_4005826c(uVar5,1);
      uVar7 = *(undefined4 *)(param_3 + iVar1 * 4);
      uVar5 = FUN_ram_40016c92();
      uStack_34 = CONCAT31(CONCAT12(uStack_34._3_1_,(short)((uint)uVar5 >> 8)),(char)uVar5);
      FUN_ram_400489b6(uVar7,uStack_34,0);
      FUN_ram_400489f6(*(undefined4 *)(param_3 + iVar1 * 4),param_4,0);
      FUN_ram_40044faa(*(undefined4 *)(param_3 + iVar1 * 4),uVar3,uVar4);
      FUN_ram_40045fc6(*(undefined4 *)(param_3 + iVar1 * 4),param_2,9,*puVar6,puVar6[1]);
      FUN_ram_40043aac(*(undefined4 *)(param_3 + iVar1 * 4),2);
      uVar7 = *(undefined4 *)(param_3 + iVar1 * 4);
      uVar5 = FUN_ram_40048aac(param_2);
      iVar1 = iVar1 + 1;
      FUN_ram_40048cee(uVar7,uVar5);
      puVar6 = puVar6 + 2;
    } while (iVar1 != 8);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40017732.
 * REA evidence: ev_550d99e6b9ab48721b92ac6ca5470be2ab320a19a1329f3801bb4e9a7f86defd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017732(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = FUN_ram_40045064();
    uVar3 = FUN_ram_40045070(param_1);
    puVar5 = &DAT_ram_400950f8;
    iVar1 = 0;
    do {
      iVar4 = *(int *)(param_2 + iVar1 * 4);
      if (iVar4 != 0) {
        FUN_ram_40044faa(iVar4,uVar2,uVar3);
        FUN_ram_40045fc6(*(undefined4 *)(param_2 + iVar1 * 4),param_1,9,*puVar5,puVar5[1]);
      }
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar1 != 8);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400177a6.
 * REA evidence: ev_58ef0f0591f7f8c0653fc3fca90de14837cb0d93af90837c82ffed2c743c58e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400177a6(int param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1 != 0) {
    uVar2 = FUN_ram_40016c6c();
    uStack_28 = CONCAT22(CONCAT11(uStack_28._3_1_,(char)((uint)uVar2 >> 0x10)),(short)uVar2);
    FUN_ram_400489b6(param_1,uStack_28,0);
    if (param_3 == (char *)0x0) {
      param_3 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
    }
    FUN_ram_400581ee(param_1,param_3);
    iVar1 = 0;
    do {
      if ((param_2 != 0) && (iVar3 = *(int *)(param_2 + iVar1 * 4), iVar3 != 0)) {
        uVar2 = FUN_ram_40016c92();
        uStack_24 = CONCAT22(CONCAT11(uStack_24._3_1_,(char)((uint)uVar2 >> 0x10)),(short)uVar2);
        FUN_ram_400489b6(iVar3,uStack_24,0);
        FUN_ram_400581ee(*(undefined4 *)(param_2 + iVar1 * 4),param_3);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40017844.
 * REA evidence: ev_e3a37fd75596301e53f6c1687fd4d532fa105e22de1238dab8d0b1ca659ca20f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017844(void)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  if (_DAT_ram_3006a348 != 0) {
    if (_DAT_ram_3006a394 < 0) {
      _DAT_ram_3006a394 = 0;
    }
    else if (0x3f < _DAT_ram_3006a394) {
      _DAT_ram_3006a394 = 0x3f;
    }
    if ((DAT_ram_3006a37e == '\0') || (DAT_ram_3006a37d == '\0')) {
      FUN_ram_400055da(auStack_20,0x10,s__02d__s_ram_40094fbc,_DAT_ram_3006a394 + 1,
                       &DAT_ram_3006a34c);
    }
    else {
      FUN_ram_400055da(auStack_20,0x10,s_REPLACE_ram_40094fb4,_DAT_ram_3006a394 + 1);
    }
    if ((DAT_ram_3006a390 == '\0') || (iVar1 = FUN_ram_4000521c(auStack_20,0x3006a380), iVar1 != 0))
    {
      memcpy(0x3006a380,auStack_20,0x10);
      DAT_ram_3006a390 = '\x01';
      FUN_ram_400177a6(_DAT_ram_3006a348,0x3006a358,0x3006a380);
      if (_DAT_ram_3006a348 != 0) {
        FUN_ram_4001667c();
      }
      FUN_ram_40017732(_DAT_ram_3006a348,0x3006a358);
    }
    FUN_ram_40016ce6();
  }
  return;
}


/* NanoCore 1.11, address 0x4001792e.
 * REA evidence: ev_45e284155344a651210f3fd092628ee128412b4128c7580bd1e5c0ca009d3dcb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001792e(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400167e0();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40017936.
 * REA evidence: ev_ac9bd24ea301de6d78b674ca9f5ddde3b77dfa15cbdc6f765b260ebd6629fa9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017936(int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    return;
  }
  if (param_3 == 0) {
    FUN_ram_40043fd6(param_1,1);
  }
  else {
    FUN_ram_40043aac();
  }
  if (param_2 != 0) {
    FUN_ram_4001792e(param_2,param_3);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40017970.
 * REA evidence: ev_4af00ede901981e034f0e08766401dc6c52f75d2bab5b81c331a1c30fb892b4b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017970(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  
  ppuVar1 = _DAT_ram_3006a300;
  uVar5 = 0;
  if (_DAT_ram_3006a300 != (undefined **)0x0) {
    uVar5 = FUN_ram_4002c3be();
  }
  FUN_ram_40017936(_DAT_ram_3006a348,0,ppuVar1 != (undefined **)0x0);
  FUN_ram_400167e0(0x3006a358,uVar5 & 1);
  if (_DAT_ram_30069b28 != 0) {
    ppuVar4 = &PTR_LAB_ram_40012e96_ram_40094b68;
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar4 = ppuVar1;
    }
    FUN_ram_400489e6(_DAT_ram_30069b28,ppuVar4,0);
  }
  if ((ppuVar1 != (undefined **)0x0) && (_DAT_ram_3006a348 != 0)) {
    FUN_ram_400489e6(_DAT_ram_3006a348,ppuVar1,0);
    iVar2 = 0;
    do {
      iVar3 = *(int *)(iVar2 * 4 + 0x3006a358);
      if (iVar3 != 0) {
        FUN_ram_400489e6(iVar3,ppuVar1,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    DAT_ram_3006a390 = 0;
    FUN_ram_40017844();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40017a22.
 * REA evidence: ev_e36e27c59e5875d1cda904d1b1bf52dcab1ab889ae7eaa90d931395c54c23bc6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017a22(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3006a2f8 != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006a2f8 = 0;
  }
  DAT_ram_3006a2f4 = 1;
  uVar1 = FUN_ram_4002c3be();
  FUN_ram_40017936(_DAT_ram_3006a348,0,1);
  FUN_ram_400167e0(0x3006a358,uVar1);
  return;
}


/* NanoCore 1.11, address 0x40017a72.
 * REA evidence: ev_969807900d65f4f57a0a7428b108473cc392b5de2b1646140156cec82a3b5908
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017a72(void)

{
  uint uVar1;
  
  DAT_ram_3006a2f4 = DAT_ram_3006a2f4 ^ 1;
  uVar1 = 0;
  if (DAT_ram_3006a2f4 != 0) {
    uVar1 = FUN_ram_4002c3be();
  }
  FUN_ram_40017936(_DAT_ram_3006a348,0,DAT_ram_3006a2f4);
  FUN_ram_400167e0(0x3006a358,uVar1 & 1);
  return;
}


/* NanoCore 1.11, address 0x40017ac2.
 * REA evidence: ev_9396d1ce07343fdd54e59b88abbb3617685ea62fa1e656c2f837ff885c98647b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40017ac2(char *param_1,char *param_2)

{
  int iVar1;
  undefined1 auStack_50 [68];
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_ram_40016c5e(auStack_50,0x40,param_1);
    iVar1 = FUN_ram_4005a41a(auStack_50);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     ((param_1 != (char *)0x0 && (iVar1 = FUN_ram_4000521c(param_1,param_2), iVar1 == 0)))) {
    iVar1 = 0;
  }
  else {
    FUN_ram_40016c5e(auStack_50,0x40,param_2);
    iVar1 = FUN_ram_4005a41a(auStack_50);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40017b22.
 * REA evidence: ev_644bc5a499319979a412e2fabfedb38061c9b883c5010ebd943a0fe546266818
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017b22(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3006a300;
  if (_DAT_ram_3006a300 != 0) {
    _DAT_ram_3006a300 = 0;
    FUN_ram_40017970();
    FUN_ram_4005a1be(iVar1);
  }
  _DAT_ram_3006a300 = FUN_ram_40017ac2(s_font_preset_ram_40094fd4,s_font_default_ram_40094fc4);
  FUN_ram_40017970();
  return;
}


/* NanoCore 1.11, address 0x40017b68.
 * REA evidence: ev_bd8cf55558d2d3b187c9f4442efef2f3ad9ab076f0aab760c5e4074cc9a3828e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017b68(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3006a490;
  if (_DAT_ram_3006a490 != 0) {
    _DAT_ram_3006a490 = 0;
    FUN_ram_40016adc();
    FUN_ram_4005a1be(iVar1);
  }
  _DAT_ram_3006a490 = FUN_ram_40017ac2(s_font_tuner_ram_40094fe0,s_font_default_ram_40094fc4);
  FUN_ram_40016adc();
  return;
}


/* NanoCore 1.11, address 0x40017bae.
 * REA evidence: ev_2dd5c8650ce2e6ec8dbc60a03b8f43fd74af3a73cfc187165837a4e51ad083bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_40017bae(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 8;
  }
  return &DAT_ram_30069b58;
}


/* NanoCore 1.11, address 0x40017bbe.
 * REA evidence: ev_ddde752051fd191b6b6c9eb1513e60251a2412e0086a4338a172c3381a0f08e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017bbe(undefined4 param_1)

{
  FUN_ram_40016368();
  _DAT_ram_3006a394 = param_1;
  FUN_ram_40017844();
  return;
}


/* NanoCore 1.11, address 0x40017bda.
 * REA evidence: ev_b47ff2e67dce2a51026d0f1013716c0b8aa93428564f93dbb679bebaf9d75b11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017bda(uint param_1)

{
  char cVar1;
  char acStack_11 [9];
  
  cVar1 = DAT_ram_30049db0;
  acStack_11[0] = (char)param_1;
  if (100 < param_1) {
    acStack_11[0] = 'd';
  }
  DAT_ram_30049db0 = acStack_11[0];
  FUN_ram_4000deb6();
  FUN_ram_400163d8();
  if (_DAT_ram_3006a304 != 0) {
    FUN_ram_400454e4();
  }
  if (acStack_11[0] != cVar1) {
    FUN_ram_40013eec(0x69,acStack_11,1);
  }
  return;
}


/* NanoCore 1.11, address 0x40017c38.
 * REA evidence: ev_75dedbf0c5df32044b7773f94fe6027578a47d2a7c9e55f86da6a8332154f8c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40017c38(void)

{
  return DAT_ram_30049db0;
}


/* NanoCore 1.11, address 0x40017c42.
 * REA evidence: ev_54ec7f77914eaf27256923496fcd29a95f8dd316e27a964715e6cc5f30870b3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017c42(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400062ac();
    _DAT_ram_3006a2b0 = _DAT_ram_3006a2b0 + param_1;
    if (_DAT_ram_3006a2b0 < -0x80) {
      _DAT_ram_3006a2b0 = -0x80;
    }
    if (0x80 < _DAT_ram_3006a2b0) {
      _DAT_ram_3006a2b0 = 0x80;
    }
    FUN_ram_400062ce();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40017c82.
 * REA evidence: ev_d1f6800174a128c4de14171d4f7555b548534d041d424c1b19fb1b215803feff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017c82(void)

{
  FUN_ram_4001681e();
  FUN_ram_40017844();
  return;
}


/* NanoCore 1.11, address 0x40017c92.
 * REA evidence: ev_f90dde81b76d5dbb4093aadcd940fd8add2876a46fac6ff2adb8a292dd2f545b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017c92(uint param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_3c [16];
  undefined1 uStack_2c;
  char acStack_28 [8];
  undefined1 auStack_20 [28];
  
  if ((int)param_1 < 0x40) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0x3f;
  }
  iVar1 = FUN_ram_4003242a(param_1 & 0xff,acStack_28);
  if ((iVar1 == 0) && (acStack_28[0] != '\0')) {
    memcpy(auStack_3c,auStack_20,0x10);
    puVar2 = auStack_3c;
    uStack_2c = 0;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  FUN_ram_40017c82(puVar2);
  return;
}


/* NanoCore 1.11, address 0x40017cda.
 * REA evidence: ev_111b0dc6e879c22741a17ace330db5df083f932ae2e55e66408b1f35e65990b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017cda(void)

{
  if (DAT_ram_3006a37c != '\0') {
    DAT_ram_3006a37c = '\0';
    if (DAT_ram_3006a2fc != '\0') {
      FUN_ram_40017c92(_DAT_ram_3006a394);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40017d04.
 * REA evidence: ev_52714ee59912fe48dd5ea6453c02bf67ae7d0b92dcb02d7cb00d4343e1e334c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017d04(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = param_2 - 1;
    if (8 < uVar1) {
      uVar1 = 8;
    }
    memcpy(param_1,&DAT_ram_3006a34c,uVar1);
    *(undefined1 *)(param_1 + uVar1) = 0;
    while ((uVar1 != 0 && (uVar1 = uVar1 - 1, *(char *)(param_1 + uVar1) == ' '))) {
      *(undefined1 *)(param_1 + uVar1) = 0;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40017d52.
 * REA evidence: ev_f8fcb4223c5b78d23eb4504700d126a06d4b02cbc63356a69b0332cdbe488eb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017d52(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar2 = _DAT_ram_3006a3f8;
  if (_DAT_ram_3006a3ec != 0) {
    iVar2 = FUN_ram_40043b92(_DAT_ram_3006a3ec,1);
    if ((((_DAT_ram_3006a348 == param_1) || (DAT_ram_3006a37e != '\0')) ||
        ((_DAT_ram_3006a3a0 != 0 && (iVar3 = FUN_ram_40043b92(_DAT_ram_3006a3a0,1), iVar3 == 0))))
       || (param_1 == 0)) {
      if (iVar2 == 0) {
        FUN_ram_40043fd6(_DAT_ram_3006a3ec,1);
      }
      DAT_ram_3006a3fc = '\0';
      _DAT_ram_3006a3f8 = 0;
      iVar2 = _DAT_ram_3006a3f8;
    }
    else {
      iVar3 = FUN_ram_4002c668();
      FUN_ram_40045052(param_1,&local_50);
      iVar4 = iStack_4c - iVar3;
      iVar5 = local_50 - iVar3;
      iVar1 = (iStack_48 - local_50) + 1 + iVar3 * 2;
      iVar3 = (iStack_44 - iStack_4c) + 1 + iVar3 * 2;
      if (((((DAT_ram_3006a3fc == '\0') || (_DAT_ram_3006a404 != iVar5)) ||
           (_DAT_ram_3006a408 != iVar4)) &&
          (FUN_ram_40044f1c(_DAT_ram_3006a3ec,iVar5,iVar4), _DAT_ram_3006a404 = iVar5,
          _DAT_ram_3006a408 = iVar4, DAT_ram_3006a3fc == '\0')) ||
         ((_DAT_ram_3006a400 != iVar1 || (_DAT_ram_3006a3f4 != iVar3)))) {
        FUN_ram_40044faa(_DAT_ram_3006a3ec,iVar1,iVar3);
        _DAT_ram_3006a3f4 = iVar3;
        _DAT_ram_3006a400 = iVar1;
      }
      DAT_ram_3006a3fc = '\x01';
      if (iVar2 != 0) {
        FUN_ram_40043aac(_DAT_ram_3006a3ec,1);
      }
      iVar3 = 0;
      if (_DAT_ram_3006a3f8 != 0) {
        iVar3 = FUN_ram_40048a76(_DAT_ram_3006a3f8);
      }
      iVar1 = FUN_ram_40048a76(param_1);
      if ((iVar2 != 0) || (iVar2 = param_1, iVar3 != iVar1)) {
        FUN_ram_4001640e(_DAT_ram_3006a3ec);
        iVar2 = param_1;
      }
    }
  }
  _DAT_ram_3006a3f8 = iVar2;
  return;
}


/* NanoCore 1.11, address 0x40017ede.
 * REA evidence: ev_fcc0e2eb05501107025441a7106849dcdd3a1916667ffb228fa5459aff744c6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017ede(uint param_1)

{
  if ((_DAT_ram_3006a3ec != 0) &&
     ((DAT_ram_3006a3f3 == '\0' || ((param_1 & 0xffffff) != (uint)_DAT_ram_3006a3f0)))) {
    _DAT_ram_3006a3f0 = (uint3)param_1;
    DAT_ram_3006a3f3 = 1;
    FUN_ram_40048906(_DAT_ram_3006a3ec,param_1,0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40017f52.
 * REA evidence: ev_4890dea5e3e5472e5fc0a1bb4a97275e64bc1cd3cfe24700835d6b0e7929c8d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40017f52(void)

{
  undefined3 uVar1;
  undefined4 uVar2;
  
  if (DAT_ram_30049da3 == '\0') {
    return;
  }
  FUN_ram_40017d52(_DAT_ram_3006a40c);
  if (((DAT_ram_3006a2fc == '\0') && (DAT_ram_3006a37e == '\0')) && (DAT_ram_3006a398 == '\0')) {
    uVar2 = 0;
    if (DAT_ram_3006a4a0 == '\0') goto LAB_ram_40017f98;
  }
  uVar2 = 1;
LAB_ram_40017f98:
  uVar1 = FUN_ram_40016cb8(uVar2);
  FUN_ram_40017ede(uVar1);
  return;
}


/* NanoCore 1.11, address 0x40017fbc.
 * REA evidence: ev_a884c959c1fb3cc0c3097a225e7b11a1a8b03017e215675729943d9804d94339
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017fbc(void)

{
  if (DAT_ram_30049da3 != '\0') {
    FUN_ram_40018122();
  }
  FUN_ram_40017f52();
  return;
}


/* NanoCore 1.11, address 0x40017fd4.
 * REA evidence: ev_aac110eafd6c1069d36f5aa61712058ffe72fa226308110a5effe9dab6dedf36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40017fd4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      iVar3 = iVar2;
      if (*(int *)(&DAT_ram_30069b58 + iVar2 * 4) == iVar1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar1;
    } while (iVar2 != 8);
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    FUN_ram_400165ec(*(undefined4 *)(iVar2 + 0x30069b38),iVar3);
    if (iVar1 == 8) {
      FUN_ram_4001626e();
      if (DAT_ram_30049da3 == '\0') {
        return;
      }
      FUN_ram_40017fbc();
      return;
    }
  } while( true );
}


