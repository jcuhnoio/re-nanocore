/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40028000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002836a.
 * REA evidence: ev_6e956b1e8132c2ece3a110ee70a4090a56efd897bbb245054d7436df67eecb13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002836a(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    return;
  }
  uVar13 = 2;
  if (param_1 == 1) {
    uVar13 = 1;
  }
  uVar11 = (uint)(param_1 == 1);
  iVar5 = uVar11 * 5;
  pbVar12 = param_2 + param_3;
  do {
    bVar1 = *param_2;
    uVar4 = (uint)bVar1;
    if (DAT_ram_3006b0c0 == '\0') {
      if (0xf7 < uVar4) goto LAB_ram_400285dc;
LAB_ram_4002840a:
      if ((char)bVar1 < '\0') {
        if (uVar4 == 0xf0) {
          FUN_ram_40027ec0(param_1);
          FUN_ram_4000505c(0x3006b0cc,0,2);
          DAT_ram_3006b0c0 = '\x01';
          _DAT_ram_3006b0c8 = param_1;
          _DAT_ram_3006b0c4 = FUN_ram_400042fa();
          *(undefined1 *)(iVar5 + 0x3006b0b4) = 0;
          *(undefined1 *)(iVar5 + 0x3006b0b7) = 0;
          *(undefined1 *)(iVar5 + 0x3006b0b8) = 0;
          FUN_ram_400137b2(param_1 == 1);
          FUN_ram_40013e8e(0xf0);
        }
        else {
LAB_ram_400284a0:
          *(byte *)(iVar5 + 0x3006b0b4) = bVar1;
          if ((uVar4 & 0xf0) - 0x80 < 0x61) {
            cVar10 = '\x02';
            if ((uVar4 & 0xe0) == 0xc0) {
              cVar10 = '\x01';
            }
          }
          else {
            cVar10 = '\x02';
            if (uVar4 != 0xf2) {
              cVar10 = (uVar4 & 0xfd) == 0xf1;
            }
          }
          *(char *)(iVar5 + 0x3006b0b7) = cVar10;
          *(undefined1 *)(iVar5 + 0x3006b0b8) = 0;
          if (cVar10 == '\0') {
            FUN_ram_40027fa6(param_1,uVar4,0,0,0);
          }
        }
      }
      else {
        cVar10 = *(char *)(iVar5 + 0x3006b0b4);
        if ((cVar10 != '\0') && (bVar2 = *(byte *)(iVar5 + 0x3006b0b7), bVar2 != 0)) {
          bVar3 = *(byte *)(iVar5 + 0x3006b0b8);
          if (bVar3 < 2) {
            *(byte *)(iVar5 + 0x3006b0b8) = bVar3 + 1;
            *(byte *)(iVar5 + (uint)bVar3 + 0x3006b0b5) = bVar1;
          }
          if (bVar2 <= *(byte *)(iVar5 + 0x3006b0b8)) {
            if (bVar2 != 1) {
              uVar9 = *(undefined1 *)(iVar5 + 0x3006b0b6);
            }
            else {
              uVar9 = 0;
            }
            FUN_ram_40027fa6(param_1,cVar10,*(undefined1 *)(iVar5 + 0x3006b0b5),uVar9,bVar2 != 1);
            if ((*(byte *)(iVar5 + 0x3006b0b4) & 0xf0) == 0xf0) {
              *(undefined1 *)(iVar5 + 0x3006b0b4) = 0;
              *(undefined1 *)(iVar5 + 0x3006b0b7) = 0;
            }
LAB_ram_40028500:
            *(undefined1 *)(iVar5 + 0x3006b0b8) = 0;
          }
        }
      }
    }
    else {
      iVar6 = FUN_ram_400042fa();
      iVar7 = FUN_ram_40004362(0x50);
      if (iVar7 < iVar6 - _DAT_ram_3006b0c4) {
        FUN_ram_40027f76();
      }
      if (uVar4 < 0xf8) {
        if (DAT_ram_3006b0c0 == '\0') goto LAB_ram_4002840a;
        if (param_1 == _DAT_ram_3006b0c8) {
          if ((((char)bVar1 < '\0') && (uVar4 != 0xf0)) && (uVar4 != 0xf7)) {
            FUN_ram_40027f76();
            goto LAB_ram_400284a0;
          }
          FUN_ram_400137b2(param_1 == 1);
          FUN_ram_40013e8e(uVar4);
          _DAT_ram_3006b0c4 = FUN_ram_400042fa();
          if (uVar4 == 0xf7) {
            FUN_ram_40027f76();
          }
        }
        else {
          if (*(char *)(uVar11 + 0x3006b0cc) == '\0') {
            if (uVar4 != 0xf0) goto LAB_ram_4002840a;
            FUN_ram_40027ec0(param_1);
            *(undefined1 *)(uVar11 + 0x3006b0cc) = 1;
            *(undefined1 *)(iVar5 + 0x3006b0b4) = 0;
            *(undefined1 *)(iVar5 + 0x3006b0b7) = 0;
            goto LAB_ram_40028500;
          }
          if (uVar4 == 0xf7) {
            *(undefined1 *)(uVar11 + 0x3006b0cc) = 0;
          }
          else if (((char)bVar1 < '\0') && (uVar4 != 0xf0)) {
            *(undefined1 *)(uVar11 + 0x3006b0cc) = 0;
            goto LAB_ram_400284a0;
          }
        }
      }
      else {
LAB_ram_400285dc:
        uVar8 = FUN_ram_400042fa();
        FUN_ram_400247e6(uVar13,uVar4,uVar8);
      }
    }
    param_2 = param_2 + 1;
    if (pbVar12 == param_2) {
      return;
    }
  } while( true );
}


/* NanoCore 1.10, address 0x40028610.
 * REA evidence: ev_1b17fffd0416b5c418440ab46a18a406c8dcd87791621c640561544d5fef502c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028610(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_a0 [136];
  
LAB_ram_4002863e:
  do {
    FUN_ram_400002f4();
    iVar2 = 0;
    do {
      if (_DAT_ram_3006b8d0 == _DAT_ram_3006b8d2) break;
      local_a0[iVar2] = *(undefined1 *)(_DAT_ram_3006b8d0 + 0x3006b0d0);
      _DAT_ram_3006b8d0 = _DAT_ram_3006b8d0 + 1;
      if (0x7ff < _DAT_ram_3006b8d0) {
        _DAT_ram_3006b8d0 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x80);
    FUN_ram_400002fa();
    if (iVar2 != 0) {
      uVar1 = 1;
LAB_ram_400286a0:
      FUN_ram_4002836a(uVar1,local_a0);
      FUN_ram_40027eea();
      FUN_ram_400245fc();
      thunk_FUN_ram_4002d412();
      goto LAB_ram_4002863e;
    }
    uVar3 = FUN_ram_4002a5a4(local_a0,0x80);
    if ((int)uVar3 != 0) {
      uVar1 = 0;
      goto LAB_ram_400286a0;
    }
    FUN_ram_40027eea(0,(int)((ulonglong)uVar3 >> 0x20),0);
    FUN_ram_400245fc();
    thunk_FUN_ram_4002d412();
    FUN_ram_400065d4(2);
  } while( true );
}


/* NanoCore 1.10, address 0x40028776.
 * REA evidence: ev_0f2796283c7ff2be29bd741c653b1677b9f86971ccc515f6bc74b8a839a94031
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028776(void)

{
  int iVar1;
  
  if (DAT_ram_3006b0bf != '\0') {
    return;
  }
  DAT_ram_3006b0bf = 1;
  _DAT_ram_3006b8d0 = 0;
  _DAT_ram_3006b8d2 = 0;
  DAT_ram_3006b8d4 = 0;
  DAT_ram_3006b0c0 = 0;
  _DAT_ram_3006b0c8 = 0;
  _DAT_ram_3006b0c4 = 0;
  FUN_ram_4000505c(0x3006b0cc,0,2);
  FUN_ram_4000505c(0x3006b0b4,0,10);
  FUN_ram_4000505c(0x3006adb4,0,0x300);
  DAT_ram_3006b0be = 0;
  FUN_ram_40013a4c();
  FUN_ram_4001379e(&LAB_ram_4002a61c);
  FUN_ram_40024352(0);
  FUN_ram_400127d6();
  if (_DAT_ram_3006adb0 == 0) {
    _DAT_ram_3006adb0 = FUN_ram_4003dfbc(0x2000,0x20,1,FUN_ram_4003e050);
  }
  if (_DAT_ram_3006adb0 != 0) {
    iVar1 = FUN_ram_4000643c(0x3006ad20,s_midi_rx_ram_40094c88,FUN_ram_40028610,0,_DAT_ram_3006adb0,
                             0x2000,0x12,10);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_40006640(0x3006ad20);
      if (iVar1 == 0) {
        return;
      }
      FUN_ram_4000647c(0x3006ad20);
    }
    FUN_ram_4003e006(_DAT_ram_3006adb0,1,FUN_ram_4003e08a);
    _DAT_ram_3006adb0 = 0;
  }
  DAT_ram_3006b8d4 = 1;
  return;
}


/* NanoCore 1.10, address 0x400288ac.
 * REA evidence: ev_0bccb08e70a82de8170c6f238aa2a896fba3433172de1e1bf1ba20559411573e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400288ac(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0x1f) & param_1) != 0) {
      *(undefined4 *)(uVar1 * 4 + 0x3006b8dc) = param_2;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x20);
  _DAT_ram_3006b8d8 = _DAT_ram_3006b8d8 | param_1;
  return;
}


/* NanoCore 1.10, address 0x400288de.
 * REA evidence: ev_3026e363929b2173584fa890ed2139f9f9730afac17fe1da065c88d2530e6216
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400288de(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_400369fe(0xf);
  if ((iVar1 < -1) || (iVar1 = FUN_ram_400379b8(0x18), iVar1 < -1)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_400379f8(0x18);
    iVar1 = -(uint)(iVar1 < -1);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40028914.
 * REA evidence: ev_0652e0af035ec6a1a93fbb731dd5e0a00918b5091e33cf3a0e6cbb723841551b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40028918) */

void FUN_ram_40028914(uint param_1)

{
  uint local_20 [7];
  
  local_20[0] = param_1 / 1000;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = local_20[0];
  FUN_ram_4003db36(0,local_20);
  FUN_ram_4003dad2(0);
  FUN_ram_4003dc10(1,0);
  return;
}


/* NanoCore 1.10, address 0x40028944.
 * REA evidence: ev_6f2ddcf3d268ce6b71d62bd985d0704e0e2269429d4829ef30d9f20a3096e0a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028944(void)

{
  if (_DAT_ram_3006b9ec == 0) {
    _DAT_ram_3006b9ec = 1;
  }
  FUN_ram_4003e1dc();
  FUN_ram_4003dcea(0xc);
  FUN_ram_400288de();
  FUN_ram_40028914(1000);
  FUN_ram_4003f052(50000);
  mstatus = mstatus & 0xfffffff7;
  FUN_ram_40028914(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* NanoCore 1.10, address 0x4002898e.
 * REA evidence: ev_cc280f7c9c4fe5135013f5281b6347d464c4c596e52cde7fdef5af9ee4d451ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002898e(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = _DAT_ram_3006b9f4;
  uVar1 = _DAT_ram_3006b964;
  uVar8 = 0;
  if (_DAT_ram_3006b9f4 != 0) {
    uVar3 = ~(_DAT_ram_3006b9f0 & _DAT_ram_3006b8d8) & _DAT_ram_3006b9f4;
    uVar4 = 0;
    uVar8 = uVar3;
    do {
      uVar9 = 1 << (uVar4 & 0x1f);
      if (((uVar2 & uVar9) != 0) && ((uVar3 & uVar9) == 0)) {
        iVar7 = *(int *)(uVar4 * 4 + 0x3006b8dc);
        uVar5 = 30000;
        if ((uVar4 != 0) && ((uVar9 & 2) == 0)) {
          uVar5 = 5000;
        }
        iVar6 = FUN_ram_40004362(uVar5);
        if ((iVar6 == 0) || (iVar6 <= param_1 - iVar7)) {
          uVar8 = uVar8 | uVar9;
        }
        if ((uVar1 & uVar9) != 0) {
          iVar6 = *(int *)(uVar4 * 4 + 0x3006b968);
          iVar7 = FUN_ram_40004362(30000);
          if ((iVar7 == 0) || (iVar7 <= param_1 - iVar6)) {
            uVar8 = uVar8 | uVar9;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x20);
  }
  return uVar8;
}


/* NanoCore 1.10, address 0x40028a84.
 * REA evidence: ev_822c1080ce84ade5fd72a714f02153c19ea85f059eedc0207097bcf77a54d876
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028a84(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  do {
    if (_DAT_ram_3006b9ec == 0) {
      if (_DAT_ram_3006b95c == 0) {
        if ((_DAT_ram_3006b960 != 0) && (_DAT_ram_3006be90 != 0)) {
          FUN_ram_400042fa();
          iVar1 = FUN_ram_4002898e();
          if (iVar1 == 0) {
            iVar2 = FUN_ram_400042fa();
            iVar1 = _DAT_ram_3006b9e8;
            iVar3 = FUN_ram_40004362(3000);
            if ((iVar3 == 0) || (iVar3 <= iVar2 - iVar1)) {
              FUN_ram_4003ede4();
              FUN_ram_4003ee04();
              FUN_ram_4003dd94();
              _DAT_ram_3006b95c = 1;
              FUN_ram_4003dad2(0);
              FUN_ram_4003dc54();
            }
          }
        }
      }
      else {
        FUN_ram_400042fa();
        uVar4 = FUN_ram_4002898e();
        if (uVar4 == 0) {
          FUN_ram_4003dad2();
          FUN_ram_4003dc54();
        }
        else if ((uVar4 & ~_DAT_ram_3006b9f8) != 0) {
          _DAT_ram_3006b9f8 = uVar4 & ~_DAT_ram_3006b9f8 | _DAT_ram_3006b9f8;
          FUN_ram_4003dcea(0xc);
        }
      }
    }
    FUN_ram_400065d4(0xfa);
  } while( true );
}


/* NanoCore 1.10, address 0x40028b6c.
 * REA evidence: ev_4d515286e76ba30b20ffe8cf14b00d2ae168ffd1d32eaf0acc0edc1ff3211d71
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028b6c(undefined4 param_1)

{
  FUN_ram_400002f4();
  _DAT_ram_3006b9f4 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40028b8a.
 * REA evidence: ev_16be19a0118175a39c5618d80e1db6171a7fb5822edd61a4c1210b5b1b2648fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028b8a(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400042fa();
    uVar2 = FUN_ram_400002f4();
    FUN_ram_400288ac(param_1,uVar1);
    FUN_ram_400002fa(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40028bba.
 * REA evidence: ev_b93c2cacac81d7a9007b9004624254322faabd96a9d3dded13aa1aa96a69b1e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028bba(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400042fa();
    uVar2 = FUN_ram_400002f4();
    FUN_ram_400288ac(param_1,uVar1);
    _DAT_ram_3006b9f0 = param_1 | _DAT_ram_3006b9f0;
    FUN_ram_400002fa(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40028bf8.
 * REA evidence: ev_c0df6b56b9adcc938eb56ad81dbdea94268c95ceec1cb80fed8a4b8a3bb0987e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028bf8(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400042fa();
    FUN_ram_400002f4();
    uVar2 = 0;
    do {
      if ((1 << (uVar2 & 0x1f) & param_1) != 0) {
        *(undefined4 *)(uVar2 * 4 + 0x3006b968) = uVar1;
        *(undefined4 *)(uVar2 * 4 + 0x3006b8dc) = uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x20);
    _DAT_ram_3006b964 = _DAT_ram_3006b964 | param_1;
    _DAT_ram_3006b8d8 = param_1 | _DAT_ram_3006b8d8;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40028c66.
 * REA evidence: ev_c39552efad6310394c59f042c53d8bc696c4b8d289d9030a4e1d56d10adae4bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028c66(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400042fa();
    uVar2 = FUN_ram_400002f4();
    _DAT_ram_3006b964 = ~param_1 & _DAT_ram_3006b964;
    FUN_ram_400288ac(param_1,uVar1);
    FUN_ram_400002fa(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40028ca8.
 * REA evidence: ev_73ba564684292cff9a5619c4cd35491b4ad3dd9b6c0d16ac8796328e3afffa54
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028ca8(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3006b960 = 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40028cc2.
 * REA evidence: ev_ed08c71a829fb0d507a4897cd692fdc7c03bd018c45627e91325d14352841fa9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028cc2(void)

{
  FUN_ram_4003e1dc();
  FUN_ram_4003dcea(1);
  FUN_ram_400065d4(0x32);
  mstatus = mstatus & 0xfffffff7;
  FUN_ram_400288de();
  FUN_ram_40028914(1000);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* NanoCore 1.10, address 0x40028cf4.
 * REA evidence: ev_f75b5a818b20744c54123e6c7091826743e34b2933675d4e994c554ecd9cff19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028cf4(void)

{
  int iVar1;
  
  _DAT_ram_3006b9ec = 0;
  _DAT_ram_3006b95c = 0;
  _DAT_ram_3006be90 = 0;
  _DAT_ram_3006b960 = 0;
  _DAT_ram_3006b9f4 = 0;
  _DAT_ram_3006b9f0 = 0;
  _DAT_ram_3006b8d8 = 0;
  _DAT_ram_3006b964 = 0;
  _DAT_ram_3006b9f8 = 0;
  _DAT_ram_3006be8c = 0;
  DAT_ram_30046791 = 0xff;
  iVar1 = 0;
  do {
    *(undefined4 *)(iVar1 * 4 + 0x3006b8dc) = 0;
    *(undefined4 *)(iVar1 * 4 + 0x3006b968) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  _DAT_ram_3006b9e8 = FUN_ram_400042fa();
  FUN_ram_4003ed7e();
  FUN_ram_4003ed9a();
  FUN_ram_4003edea();
  iVar1 = FUN_ram_400288de();
  if (iVar1 == 0) {
    FUN_ram_40028914(60000);
    iVar1 = FUN_ram_4000643c(0x3006b9fc,s_sys_recover_ram_40094c90,FUN_ram_40028a84,0,0x3006ba8c,
                             0x400,8,10);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_40006640(0x3006b9fc), iVar1 == 0)) {
      _DAT_ram_3007f888 = FUN_ram_40028944;
      _DAT_ram_3006be90 = 1;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40028dfc.
 * REA evidence: ev_33347e00defefc540c25aaab861bcf2ca95ecf8f11b019ec2533a6d61ffbf431
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028dfc(void)

{
  FUN_ram_400002f4();
  DAT_ram_3006bea0 = 0;
  _DAT_ram_3006be98 = 0;
  DAT_ram_3006be9c = 0;
  DAT_ram_3006be9d = 0;
  _DAT_ram_3006be9e = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40028e28.
 * REA evidence: ev_a35cac7b6cbe0e9249d9e81c9cfd166dd4921b82cbb7c7e7b79c99ef15468bc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40028e28(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_400064c6(s_tuner_ram_40093260,FUN_ram_40028ec2,0,0x1000,0x12,10);
  if (iVar1 != 0) {
    FUN_ram_40006640();
  }
  return 0;
}


/* NanoCore 1.10, address 0x40028e56.
 * REA evidence: ev_f1236f2287e0b2d626d2c49c7b651798745c1b5f6ba764356291df10a5ce1d69
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40028e56(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  
  while ((uVar1 = *param_3, uVar1 < param_2 && (DAT_ram_3006be94 != '\0'))) {
    iVar2 = FUN_ram_4000da4a(param_1 + uVar1 * 2,param_2 - uVar1);
    if (iVar2 == 0) {
      FUN_ram_400065d4(2);
    }
    else {
      *param_3 = *param_3 + iVar2;
    }
  }
  return DAT_ram_3006be94 != '\0' && param_2 <= uVar1;
}


/* NanoCore 1.10, address 0x40028ec2.
 * REA evidence: ev_0011c7fe326c9771eaecf3ad99f56d56a8129389e8bc09e237833d441c7b909b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002924a) */
/* WARNING: Removing unreachable block (ram,0x40029288) */
/* WARNING: Removing unreachable block (ram,0x40029290) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028ec2(void)

{
  short sVar1;
  uint *puVar2;
  float fVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined2 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  short *psVar19;
  ushort uVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined4 *puVar24;
  float fVar25;
  float fVar26;
  undefined8 unaff_fs5;
  undefined8 uVar27;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char acStack_88 [4];
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  char cStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  uStack_70 = (undefined4)unaff_fs5;
  uStack_6c = (undefined4)((ulonglong)unaff_fs5 >> 0x20);
  memset(acStack_88,0,0x18);
  FUN_ram_40028dfc();
  fVar11 = DAT_ram_40094ca8;
  fVar10 = DAT_ram_40094ca4;
  fVar9 = DAT_ram_40094ca0;
  fVar8 = DAT_ram_40094c9c;
  fVar7 = DAT_ram_400936dc;
LAB_ram_40028f20:
  while (DAT_ram_3006be94 == '\0') {
    acStack_88[0] = '\0';
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    cStack_78 = '\0';
    fStack_74 = 0.0;
    FUN_ram_400065d4(0x32);
  }
  if (acStack_88[0] != '\0') {
LAB_ram_40028f80:
    uVar20 = DAT_ram_30046792;
    uVar15 = 0;
    uVar5 = 0;
    iVar13 = 0;
    do {
      iVar23 = iVar13 * 2;
      iVar18 = iVar13 * 2;
      iVar13 = iVar13 + 1;
      uVar21 = ((uint)*(ushort *)(&DAT_ram_3006d820 + iVar18) ^
               (int)*(short *)(&DAT_ram_3006d820 + iVar23) >> 0xf) -
               ((int)*(short *)(&DAT_ram_3006d820 + iVar23) >> 0xf) & 0xffff;
      uVar5 = uVar5 + uVar21;
      if (uVar15 < uVar21) {
        uVar15 = uVar21;
      }
    } while (iVar13 != 0x400);
    if ((0x77 < uVar15) && (0x17 < (uint)(uVar5 >> 10))) {
      puVar24 = (undefined4 *)&DAT_ram_3006c358;
      puVar22 = puVar24;
      do {
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22 = puVar22 + 2;
      } while (puVar22 != (undefined4 *)0x3006d498);
      puVar16 = &DAT_ram_3006c358;
      iVar13 = 1;
      do {
        psVar19 = (short *)&DAT_ram_3006d820;
        lVar6 = 0;
        iVar23 = 0;
        do {
          sVar1 = *psVar19;
          psVar4 = psVar19 + iVar13;
          iVar23 = iVar23 + 1;
          psVar19 = psVar19 + 1;
          lVar6 = (longlong)((int)sVar1 - (int)*psVar4) * (longlong)((int)sVar1 - (int)*psVar4) +
                  lVar6;
        } while (iVar23 != 0x400 - iVar13);
        *(longlong *)(puVar16 + 8) = lVar6;
        iVar13 = iVar13 + 1;
        puVar16 = puVar16 + 8;
      } while (iVar13 != 0x228);
      _DAT_ram_3006bea4 = 0;
      uVar5 = 1;
      lVar6 = 0;
      do {
        puVar2 = puVar24 + 2;
        uVar12 = 0;
        lVar6 = lVar6 + *(longlong *)puVar2;
        if (lVar6 != 0) {
          uVar27 = FUN_ram_40003bac((int)(uVar5 * *(longlong *)puVar2) << 0xc,
                                    (int)((uVar5 * *(longlong *)puVar2 & 0xffffffff00000000 |
                                          (ulonglong)*puVar2 * (uVar5 & 0xffffffff) & 0xffffffff) >>
                                         0x14),(int)lVar6,(int)((ulonglong)lVar6 >> 0x20));
          if (((int)((ulonglong)uVar27 >> 0x20) != 0) ||
             (uVar15 = (uint)uVar27, 0xffff < (uint)uVar27)) {
            uVar15 = 0xffff;
          }
          uVar12 = (undefined2)uVar15;
        }
        *(undefined2 *)(&DAT_ram_3006bea4 + (int)uVar5 * 2) = uVar12;
        uVar5 = uVar5 + 1;
        puVar24 = puVar24 + 2;
      } while (uVar5 != 0x228);
      uVar15 = 5;
      do {
        uVar21 = uVar15 + 1;
        if (*(undefined **)(&DAT_ram_3006bea4 + uVar15 * 2) < &mdbound) goto LAB_ram_400290d4;
        uVar15 = uVar21;
      } while (uVar21 != 0x228);
    }
    goto LAB_ram_4002921e;
  }
  if ((uStack_84 < 0x401) &&
     (iVar13 = FUN_ram_40028e56(&DAT_ram_3006d820,0x400,&uStack_84), iVar13 != 0)) {
    acStack_88[0] = '\x01';
    goto LAB_ram_40028f80;
  }
  goto LAB_ram_40028f54;
  while (*(ushort *)(&DAT_ram_3006bea4 + uVar15 * 2) < *(ushort *)(uVar15 * 2 + 0x3006bea2)) {
LAB_ram_400290d4:
    uVar21 = uVar15;
    uVar15 = uVar21 + 1;
    if (0x227 < uVar15) break;
  }
  fVar25 = (float)(int)uVar21;
  if (uVar21 < 0x227) {
    fVar26 = ((float)*(ushort *)(&DAT_ram_3006bea4 + uVar21 * 2) *
              (float)PTR_firmware_entry_ram_40092830 -
             (float)*(ushort *)(&DAT_ram_3006bea4 + uVar15 * 2)) -
             (float)*(ushort *)(&DAT_ram_3006bea4 + (uVar21 - 1) * 2);
    if (fVar26 != 0.0) {
      fVar25 = fVar25 + ((float)*(ushort *)(&DAT_ram_3006bea4 + uVar15 * 2) -
                        (float)*(ushort *)(&DAT_ram_3006bea4 + (uVar21 - 1) * 2)) /
                        (fVar26 + fVar26);
    }
  }
  if (((fVar25 <= 0.0) || (fVar25 = fVar9 / fVar25, fVar25 <= fVar10)) ||
     (DAT_ram_400934c0 <= fVar25)) {
LAB_ram_4002921e:
    uStack_7c = uStack_7c + 1;
    if (uStack_7c < 10) goto LAB_ram_400292e4;
    cStack_78 = '\0';
    fStack_74 = 0.0;
  }
  else {
    uStack_7c = 0;
    if (cStack_78 == '\0') {
      cStack_78 = '\x01';
    }
    else {
      fVar25 = (fVar25 - fStack_74) * DAT_ram_40094234 + fStack_74;
    }
    fStack_94 = 0.0;
    uStack_90 = 0;
    uStack_8c = 0;
    if (0x1e0 < uVar20) {
      uVar20 = 0x1e0;
    }
    if (uVar20 < 400) {
      uVar20 = 400;
    }
    fVar26 = (fVar11 / (float)uVar20) * fVar25;
    iVar13 = 0;
    if ((DAT_ram_40094cac < fVar26) && (iVar13 = 0x7f, fVar26 < DAT_ram_40094cb0)) {
      iVar23 = 0x7f;
      iVar13 = 0;
      while (iVar18 = iVar23, 1 < iVar18 - iVar13) {
        iVar17 = (iVar13 + iVar18) / 2;
        iVar23 = iVar17;
        if ((float)*(undefined8 *)((int)&DAT_ram_40094cb4 + iVar17 * 4 + 4) <= fVar26) {
          iVar23 = iVar18;
          iVar13 = iVar17;
        }
      }
      if ((float)*(undefined8 *)((int)&DAT_ram_40094cb4 + iVar18 * 4 + 4) - fVar26 <
          fVar26 - (float)*(undefined8 *)((int)&DAT_ram_40094cb4 + iVar13 * 4 + 4)) {
        iVar13 = iVar18;
      }
    }
    fVar26 = ((float)uVar20 / fVar11) *
             (float)*(undefined8 *)((int)&DAT_ram_40094cb4 + iVar13 * 4 + 4);
    fStack_74 = fVar25;
    if (0.0 < fVar26) {
      fVar3 = ((fVar25 - fVar26) / fVar26) * (float)DAT_ram_40094cb4;
      fVar26 = fVar7;
      if ((fVar3 <= fVar7) && (fVar26 = fVar3, fVar3 < fVar8)) {
        fVar26 = fVar8;
      }
      if (fVar26 < 0.0) {
        fVar26 = fVar26 - DAT_ram_40092864;
      }
      else {
        fVar26 = fVar26 + DAT_ram_40092864;
      }
      uVar14 = FUN_ram_400002f4();
      uStack_90 = CONCAT22((short)(int)fVar26,
                           CONCAT11((char)((uint)((iVar13 / 0xc + -1) * 0x1000000) >> 0x18),
                                    (char)(iVar13 % 0xc)));
      uStack_8c = CONCAT31(uStack_8c._1_3_,1);
      fStack_94 = fVar25;
      FUN_ram_4000305c(&DAT_ram_3006be98,&fStack_94,0xc);
      FUN_ram_400002fa(uVar14);
      goto LAB_ram_400292e4;
    }
  }
  FUN_ram_40028dfc();
LAB_ram_400292e4:
  if ((uStack_80 < 0x101) && (iVar13 = FUN_ram_40028e56(0x3006d620,0x100,&uStack_80), iVar13 != 0))
  {
    FUN_ram_40003110(&DAT_ram_3006d820,0x3006da20,0x600);
    FUN_ram_4000305c(0x3006de20,0x3006d620,0x200);
    uStack_80 = 0;
  }
  else {
LAB_ram_40028f54:
    acStack_88[0] = '\0';
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    cStack_78 = '\0';
    fStack_74 = 0.0;
  }
  goto LAB_ram_40028f20;
}


