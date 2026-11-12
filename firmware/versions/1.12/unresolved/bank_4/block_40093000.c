/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40093000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40093102.
 * REA evidence: ev_09ff21534665bef0adb4cb3fbe79b122a8e148b3344623d9f8a03deafd0c700c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40093102(void)

{
  return *(undefined4 *)(gp + -0xc);
}


/* NanoCore 1.12, address 0x40093108.
 * REA evidence: ev_7406deb98d2d60f354b11f5e98f541907a927f3ab093c3b2f8a6c03852085c9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40093108(void)

{
  return *(undefined4 *)(gp + -8);
}


/* NanoCore 1.12, address 0x40093110.
 * REA evidence: ev_a6770c73279c97718bf3949e4f8cbc0fde08b60d58264261b6731710bf12f286
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40093110(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_40093136;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_40093136;
    if (0x25 < param_1) {
      return 0;
    }
LAB_ram_40093176:
    if (param_2 != 0) {
      if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) ||
         (_DAT_ram_3008b074 != 4)) {
        memset(&DAT_ram_3008b070,0xff,0x898);
        iVar2 = FUN_ram_40094cd0();
        iVar3 = FUN_ram_40094cd0();
        if ((((DAT_ram_3008b910 == '\0') && (iVar3 != 0)) &&
            ((*(code **)(iVar3 + 8) != (code *)0x0 &&
             ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (iVar2 != 0)))))) &&
           (*(code **)(iVar2 + 0xc) != (code *)0x0)) {
          iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008b070);
          if (iVar2 == 1) {
            if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) {
LAB_ram_40093234:
              DAT_ram_3008b908 = '\x01';
              goto LAB_ram_400931aa;
            }
          }
          else if (iVar2 == 2) {
            memset(&DAT_ram_3008b070,0xff,0x898);
            _DAT_ram_3008b070 = 0x53415442;
            _DAT_ram_3008b074 = 4;
            _DAT_ram_3008b07a = 0;
            iVar2 = 0x3008b094;
            do {
              *(undefined2 *)(iVar2 + -4) = 0;
              *(undefined4 *)(iVar2 + -0xc) = 0;
              *(undefined4 *)(iVar2 + -8) = 0;
              iVar3 = memset(iVar2,0,0x10);
              iVar2 = iVar3 + 0x20;
              *(undefined4 *)(iVar3 + 0x10) = DAT_ram_400a13d8;
            } while (iVar2 != 0x3008b554);
            iVar2 = 0x3008b554;
            do {
              *(undefined2 *)(iVar2 + -4) = 0;
              *(undefined4 *)(iVar2 + -0xc) = 0;
              *(undefined4 *)(iVar2 + -8) = 0;
              iVar3 = memset(iVar2,0,0x10);
              iVar2 = iVar3 + 0x20;
              *(undefined4 *)(iVar3 + 0x10) = DAT_ram_400a13d8;
            } while (iVar2 != 0x3008b914);
            iVar2 = FUN_ram_40094cd0();
            if ((((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
                  (iVar3 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
                 ((iVar3 == 0 || (*(code **)(iVar3 + 8) == (code *)0x0)))) ||
                ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0 ||
                 ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))) ||
               (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008b070), iVar2 == 0))
            goto LAB_ram_4009314c;
            goto LAB_ram_40093234;
          }
        }
        memset(&DAT_ram_3008b070,0xff,0x898);
        uVar1 = 0;
        DAT_ram_3008b908 = '\0';
      }
      else {
LAB_ram_400931aa:
        FUN_ram_4000303c(param_2,&DAT_ram_3008b088 + param_1 * 0x20,0x20);
        uVar1 = 1;
      }
      goto LAB_ram_4009314e;
    }
  }
  else {
LAB_ram_40093136:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (param_1 < 0x26) goto LAB_ram_40093176;
  }
LAB_ram_4009314c:
  uVar1 = 0;
LAB_ram_4009314e:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4009339c.
 * REA evidence: ev_c92e2a98ac097f78945e09ff358b27055fb0243ec27cf61ca7a6fb0a8131b96d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4009339c(void)

{
  FUN_ram_4001440c(0x30,&PTR_LAB_ram_4008e47c_ram_400a13f8,0);
  FUN_ram_400143fc(0x35,FUN_ram_4008c908);
  FUN_ram_400143fc(0x36,&LAB_ram_4008fd0c);
  FUN_ram_400143fc(0x37,&LAB_ram_4008b858);
  FUN_ram_400143fc(0x39,FUN_ram_4008f8ac);
  FUN_ram_400143fc(0x38,&DAT_ram_4008c178);
  FUN_ram_400143fc(0x3a,&LAB_ram_4008ce5c);
  FUN_ram_400143fc(0x3b,&LAB_ram_40091c06);
  FUN_ram_4001440c(0x50,&PTR_LAB_ram_4008e198_ram_400a13e0,0);
  FUN_ram_400143fc(0x55,FUN_ram_40090bdc);
  FUN_ram_400143fc(0x56,&LAB_ram_4008f494);
  FUN_ram_400143fc(0x57,&LAB_ram_4008b7f0);
  FUN_ram_400143fc(0x59,&DAT_ram_4008f0a0);
  FUN_ram_400143fc(0x5a,&LAB_ram_4008c06c);
  FUN_ram_400143fc(0x5b,&LAB_ram_4008ccd8);
  return;
}


/* NanoCore 1.12, address 0x400934c2.
 * REA evidence: ev_e21fd4e2b2483790f8e8058712f6a69efed8052a34e87d8b73a09f4b4db692ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_400934c2(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _DAT_ram_3008c2f0;
  if ((_DAT_ram_3008c2f0 != 0) && (param_4 != 0)) {
    if (param_1 == 1) {
      iVar2 = FUN_ram_400914da(param_2);
    }
    else {
      iVar2 = FUN_ram_400914ce();
    }
    uVar3 = fal_partition_read(iVar1,param_3 + iVar2,param_4,param_5);
    return uVar3;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40093520.
 * REA evidence: ev_72093b022fce6637d3366649f788292d8d4f8b5ec7014f45f70f5cece2fee833
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40093520(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0x1000;
  if (param_1 != 1) {
    uVar1 = FUN_ram_400914e2(param_2);
  }
  if ((((_DAT_ram_3008c2f0 != 0) && (DAT_ram_3008c2fc == '\0')) && (_DAT_ram_3008c2f8 == 0)) &&
     (((_DAT_ram_3008c2f4 == 0 && (param_3 != 0)) &&
      ((param_3 <= uVar1 && (_DAT_ram_3008c2f8 = FUN_ram_4002d154(param_3), _DAT_ram_3008c2f8 != 0))
      )))) {
    DAT_ram_3008c2fe = 0;
    DAT_ram_3008c2fd = 0;
    DAT_ram_3008c2fc = 1;
    DAT_ram_3008c2ff = (undefined1)param_2;
    _DAT_ram_3008c300 = param_1;
    _DAT_ram_3008c304 = param_3;
    memset(_DAT_ram_3008c2f8,0,param_3);
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4009362e.
 * REA evidence: ev_3dd63bed853441a626fcaba8e998655f05b9cfbd12728b576f9d401e9669c7eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4009362e(int param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  if (((_DAT_ram_3008c2f0 == 0) || (param_4 == 0)) || (_DAT_ram_3008c2f8 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (((DAT_ram_3008c2fc != '\0') && (param_1 == _DAT_ram_3008c300)) &&
       ((DAT_ram_3008c2ff == param_2 &&
        ((param_3 <= _DAT_ram_3008c304 && (param_5 <= _DAT_ram_3008c304 - param_3)))))) {
      FUN_ram_4000303c(param_3 + _DAT_ram_3008c2f8,param_4,param_5);
      uVar1 = param_5;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40093698.
 * REA evidence: ev_ea52f0c918be1287d80a41c55518a41e0e114f07f9ff07db359d46734995e63a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40093698(void)

{
  bool bVar1;
  
  bVar1 = true;
  if (_DAT_ram_3008c2f0 == 0) {
    _DAT_ram_3008c2f0 = FUN_ram_40006dec(s_presets_ram_4009c568);
    if (_DAT_ram_3008c2f0 != 0) {
      return 0xa9fff < *(uint *)(_DAT_ram_3008c2f0 + 0x38);
    }
    bVar1 = false;
    _DAT_ram_3008c2f0 = 0;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x400936de.
 * REA evidence: ev_311c493343aa3b65a2ed38ef5df958f43f8f8db5db55752230d835ea92510172
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400936de(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_140 [268];
  
  if ((((_DAT_ram_3008c2f8 != 0) && (_DAT_ram_3008c2f4 == 0)) && (DAT_ram_3008c2fc != '\0')) &&
     (((param_1 == _DAT_ram_3008c300 && (uVar9 = (uint)DAT_ram_3008c2ff, uVar9 == param_2)) &&
      ((_DAT_ram_3008c304 == param_3 &&
       (iVar1 = FUN_ram_40007450(0,_DAT_ram_3008c2f8), iVar1 == param_4)))))) {
    if (param_1 == 1) {
      iVar1 = FUN_ram_400914da(uVar9);
      iVar2 = 0x1000;
    }
    else {
      iVar1 = FUN_ram_400914ce();
      iVar2 = FUN_ram_400914e2(uVar9);
    }
    _DAT_ram_3008c2f4 = FUN_ram_4002d154(iVar2);
    if (_DAT_ram_3008c2f4 != 0) {
      iVar3 = fal_partition_read(_DAT_ram_3008c2f0,iVar1,_DAT_ram_3008c2f4,iVar2);
      if (iVar3 != iVar2) {
        FUN_ram_4002d1d0(_DAT_ram_3008c2f4);
        _DAT_ram_3008c2f4 = 0;
        return 0xffffffff;
      }
      DAT_ram_3008c2fe = '\x01';
      DAT_ram_3008c2fd = '\x01';
      iVar2 = FUN_ram_40006ee4(_DAT_ram_3008c2f0,iVar1,iVar2);
      if ((-1 < iVar2) &&
         (uVar9 = FUN_ram_40006e9a(_DAT_ram_3008c2f0,iVar1,_DAT_ram_3008c2f8,param_3),
         iVar2 = _DAT_ram_3008c2f8, uVar9 == param_3)) {
        iVar3 = 0;
        if (param_3 != 0) {
          if (_DAT_ram_3008c2f8 == 0) {
            uVar9 = 0;
            do {
              uVar8 = param_3 - uVar9;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              uVar4 = fal_partition_read(_DAT_ram_3008c2f0,uVar9 + iVar1,auStack_140,uVar8);
              uVar9 = uVar9 + uVar4;
              if (uVar4 != uVar8) goto LAB_ram_40093864;
              iVar3 = FUN_ram_40007450(iVar3,auStack_140);
            } while (uVar9 < param_3);
          }
          else {
            uVar9 = 0;
            do {
              uVar8 = param_3 - uVar9;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              uVar4 = fal_partition_read(_DAT_ram_3008c2f0,iVar1 + uVar9,auStack_140,uVar8);
              iVar6 = iVar2 + uVar9;
              uVar9 = uVar9 + uVar4;
              if ((uVar4 != uVar8) ||
                 (iVar6 = FUN_ram_40002fdc(auStack_140,iVar6,uVar4), iVar6 != 0))
              goto LAB_ram_40093864;
              iVar3 = FUN_ram_40007450(iVar3,auStack_140,uVar4);
            } while (uVar9 < param_3);
          }
        }
        if (param_4 == iVar3) {
          return 0;
        }
      }
LAB_ram_40093864:
      if ((((DAT_ram_3008c2fc != '\0') && (DAT_ram_3008c2fd != '\0')) && (DAT_ram_3008c2fe != '\0'))
         && (_DAT_ram_3008c2f4 != 0)) {
        if (_DAT_ram_3008c300 == 1) {
          iVar1 = FUN_ram_400914da(DAT_ram_3008c2ff);
        }
        else {
          iVar1 = FUN_ram_400914ce();
        }
        if (_DAT_ram_3008c300 == 1) {
          uVar9 = 0x1000;
        }
        else {
          uVar9 = FUN_ram_400914e2(DAT_ram_3008c2ff);
        }
        iVar2 = FUN_ram_40007450(0,_DAT_ram_3008c2f4,uVar9);
        iVar3 = FUN_ram_40006ee4(_DAT_ram_3008c2f0,iVar1,uVar9);
        if ((-1 < iVar3) &&
           (uVar8 = FUN_ram_40006e9a(_DAT_ram_3008c2f0,iVar1,_DAT_ram_3008c2f4,uVar9),
           iVar3 = _DAT_ram_3008c2f4, uVar8 == uVar9)) {
          iVar6 = 0;
          if (uVar9 != 0) {
            iVar6 = 0;
            uVar8 = 0;
            if (_DAT_ram_3008c2f4 == 0) {
              do {
                uVar4 = uVar9 - uVar8;
                if (0x100 < uVar4) {
                  uVar4 = 0x100;
                }
                uVar5 = fal_partition_read(_DAT_ram_3008c2f0,iVar1 + uVar8,auStack_140,uVar4);
                uVar8 = uVar8 + uVar5;
                if (uVar5 != uVar4) {
                  return 0xffffffff;
                }
                iVar6 = FUN_ram_40007450(iVar6,auStack_140);
              } while (uVar8 < uVar9);
            }
            else {
              do {
                uVar4 = uVar9 - uVar8;
                if (0x100 < uVar4) {
                  uVar4 = 0x100;
                }
                uVar5 = fal_partition_read(_DAT_ram_3008c2f0,iVar1 + uVar8,auStack_140,uVar4);
                iVar7 = iVar3 + uVar8;
                uVar8 = uVar8 + uVar5;
                if (uVar5 != uVar4) {
                  return 0xffffffff;
                }
                iVar7 = FUN_ram_40002fdc(auStack_140,iVar7,uVar5);
                if (iVar7 != 0) {
                  return 0xffffffff;
                }
                iVar6 = FUN_ram_40007450(iVar6,auStack_140,uVar5);
              } while (uVar8 < uVar9);
            }
          }
          if (iVar2 == iVar6) {
            DAT_ram_3008c2fd = '\0';
          }
        }
      }
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x400939fa.
 * REA evidence: ev_4bdcad570e0bdfcbbf5887f1b2145e85ce61d6dd766bad22ca306fbe3814ec6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400939fa(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_140 [268];
  
  if (DAT_ram_3008c2fc == '\0') {
    return 0;
  }
  if (param_1 != _DAT_ram_3008c300) {
    return 0;
  }
  if (param_2 != _DAT_ram_3008c2fc >> 0x18) {
    return 0;
  }
  if ((DAT_ram_3008c2fd == '\0') || (DAT_ram_3008c2fe == '\0')) {
LAB_ram_40093b7e:
    if (_DAT_ram_3008c2f8 == 0) goto LAB_ram_40093b9e;
  }
  else {
    if (_DAT_ram_3008c2f4 != 0) {
      if (param_1 == 1) {
        iVar1 = FUN_ram_400914da(param_2);
      }
      else {
        iVar1 = FUN_ram_400914ce(param_2);
      }
      uVar9 = 0x1000;
      if (_DAT_ram_3008c300 != 1) {
        uVar9 = FUN_ram_400914e2(DAT_ram_3008c2ff);
      }
      iVar2 = FUN_ram_40007450(0,_DAT_ram_3008c2f4,uVar9);
      iVar3 = FUN_ram_40006ee4(_DAT_ram_3008c2f0,iVar1,uVar9);
      if ((iVar3 < 0) ||
         (uVar4 = FUN_ram_40006e9a(_DAT_ram_3008c2f0,iVar1,_DAT_ram_3008c2f4,uVar9),
         iVar3 = _DAT_ram_3008c2f4, uVar4 != uVar9)) {
        return 0xffffffff;
      }
      iVar10 = 0;
      if (uVar9 != 0) {
        if (_DAT_ram_3008c2f4 == 0) {
          uVar4 = 0;
          do {
            uVar8 = uVar9 - uVar4;
            if (0x100 < uVar8) {
              uVar8 = 0x100;
            }
            uVar5 = fal_partition_read(_DAT_ram_3008c2f0,iVar1 + uVar4,auStack_140,uVar8);
            uVar4 = uVar4 + uVar5;
            if (uVar5 != uVar8) {
              return 0xffffffff;
            }
            iVar10 = FUN_ram_40007450(iVar10,auStack_140);
          } while (uVar4 < uVar9);
        }
        else {
          uVar4 = 0;
          do {
            uVar8 = uVar9 - uVar4;
            if (0x100 < uVar8) {
              uVar8 = 0x100;
            }
            uVar5 = fal_partition_read(_DAT_ram_3008c2f0,uVar4 + iVar1,auStack_140,uVar8);
            iVar7 = iVar3 + uVar4;
            uVar4 = uVar4 + uVar5;
            if (uVar5 != uVar8) {
              return 0xffffffff;
            }
            iVar7 = FUN_ram_40002fdc(auStack_140,iVar7,uVar5);
            if (iVar7 != 0) {
              return 0xffffffff;
            }
            iVar10 = FUN_ram_40007450(iVar10,auStack_140,uVar5);
          } while (uVar4 < uVar9);
        }
      }
      if (iVar10 != iVar2) {
        return 0xffffffff;
      }
      _DAT_ram_3008c2fc = (ushort)DAT_ram_3008c2fc;
      goto LAB_ram_40093b7e;
    }
    if (_DAT_ram_3008c2f8 == 0) {
      _DAT_ram_3008c2fc = 0;
      _DAT_ram_3008c300 = 0;
      _DAT_ram_3008c304 = 0;
      return 0;
    }
  }
  memset(_DAT_ram_3008c2f8,0,_DAT_ram_3008c304);
  FUN_ram_4002d1d0();
  _DAT_ram_3008c2f8 = 0;
LAB_ram_40093b9e:
  iVar1 = _DAT_ram_3008c2f4;
  if (_DAT_ram_3008c2f4 != 0) {
    if (_DAT_ram_3008c300 == 1) {
      uVar6 = 0x1000;
    }
    else {
      uVar6 = FUN_ram_400914e2(DAT_ram_3008c2ff);
    }
    iVar2 = _DAT_ram_3008c2f4;
    memset(iVar1,0,uVar6);
    FUN_ram_4002d1d0(iVar2);
    _DAT_ram_3008c2f4 = 0;
  }
  _DAT_ram_3008c304 = 0;
  _DAT_ram_3008c300 = 0;
  _DAT_ram_3008c2fc = 0;
  return 0;
}


/* NanoCore 1.12, address 0x40093c4a.
 * REA evidence: ev_78c023d504dc886bfc9c95a6a53cfa4faa6d83ec0d47dfc42a696612546c0ee5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40093c4a(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((DAT_ram_3008c2fc != '\0') && (param_1 == _DAT_ram_3008c300)) &&
     (_DAT_ram_3008c2fc >> 0x18 == param_2)) {
    if (_DAT_ram_3008c2f8 != 0) {
      memset(_DAT_ram_3008c2f8,0,_DAT_ram_3008c304);
      FUN_ram_4002d1d0();
      _DAT_ram_3008c2f8 = 0;
    }
    iVar1 = _DAT_ram_3008c2f4;
    if (_DAT_ram_3008c2f4 != 0) {
      if (_DAT_ram_3008c300 == 1) {
        uVar3 = 0x1000;
      }
      else {
        uVar3 = FUN_ram_400914e2(DAT_ram_3008c2ff);
      }
      iVar2 = _DAT_ram_3008c2f4;
      memset(iVar1,0,uVar3);
      FUN_ram_4002d1d0(iVar2);
      _DAT_ram_3008c2f4 = 0;
    }
    _DAT_ram_3008c2fc = 0;
    _DAT_ram_3008c300 = 0;
    _DAT_ram_3008c304 = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40093cf8.
 * REA evidence: ev_2a12947846dbcbd71e4043ab5e84049c53eeb98a16b662cc116a3976ebcd2dbe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40093cf8(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 auStack_120 [256];
  
  if (_DAT_ram_3008c2f0 == 0) {
    return 0;
  }
  iVar4 = FUN_ram_40006cbe(_DAT_ram_3008c2f0 + 0x1c);
  if (_DAT_ram_3008c2f0 == 0) {
    return 0;
  }
  if (iVar4 == 0) {
    return 0;
  }
  uVar9 = *(uint *)(iVar4 + 0x20);
  if (uVar9 == 0) {
    return 0;
  }
  if (uVar9 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uVar9 + 0xfff) / uVar9;
  }
  if (uVar2 * uVar9 != 0x1000) {
    return 0;
  }
  iVar5 = fal_partition_read(_DAT_ram_3008c2f0,0x12000,&DAT_ram_3008cba8,0x1000);
  iVar4 = _DAT_ram_3008cbb8;
  if (iVar5 != 0x1000) {
    return 0;
  }
  pcVar3 = &DAT_ram_3008cba8;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 != -1) {
      pcVar3 = &DAT_ram_3008d440;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        if (cVar1 != -1) {
          return 0;
        }
      } while (pcVar3 != &DAT_ram_3008dba8);
      if ((_DAT_ram_3008cba8 == 0x53415442) && (_DAT_ram_3008cbac == 4)) {
        if (_DAT_ram_3008cbbc == 0x53413232) {
          uVar7 = FUN_ram_40007450(0,&DAT_ram_3008cba8,0x10);
          uVar7 = FUN_ram_40007450(uVar7,&DAT_ram_400a1450,4);
          iVar5 = FUN_ram_40007450(uVar7,&DAT_ram_3008cbbc,0x884);
          if (iVar5 != iVar4) {
            return 0;
          }
        }
        else if ((_DAT_ram_3008cbb8 != 0 || _DAT_ram_3008cbb4 != 0) || _DAT_ram_3008cbbc != 0) {
          return 0;
        }
        iVar4 = FUN_ram_40007450(0,&DAT_ram_3008cba8,0x1000);
        if (((iVar4 == _DAT_ram_3008c2e8) &&
            (iVar4 = FUN_ram_40006ee4(_DAT_ram_3008c2f0,0xa9000,0x1000), -1 < iVar4)) &&
           (iVar4 = FUN_ram_40006e9a(_DAT_ram_3008c2f0,0xa9000,&DAT_ram_3008cba8,0x1000),
           iVar4 == 0x1000)) {
          uVar9 = 0;
          while( true ) {
            uVar2 = 0x1000 - uVar9;
            if (0x100 < uVar2) {
              uVar2 = 0x100;
            }
            uVar6 = fal_partition_read(_DAT_ram_3008c2f0,uVar9 + 0xa9000,auStack_120,uVar2);
            puVar8 = &DAT_ram_3008cba8 + uVar9;
            uVar9 = uVar9 + uVar6;
            if ((uVar6 != uVar2) || (iVar4 = FUN_ram_40002fdc(auStack_120,puVar8), iVar4 != 0))
            break;
            if (0xfff < uVar9) {
              _DAT_ram_3008c2e8 = 0;
              DAT_ram_3008c2ec = 0;
              _DAT_ram_3008cba0 = 0xa9000;
              DAT_ram_3008cba4 = 1;
              return 1;
            }
          }
        }
      }
      return 0;
    }
  } while (pcVar3 != &DAT_ram_3008dba8);
  return 0;
}


