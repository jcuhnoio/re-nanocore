/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40091000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40091822.
 * REA evidence: ev_7274792205be3aebf003c32a7f23dba15e104ea56c3d0a67f35d75ca4c81853e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40091822(void)

{
  return *(undefined4 *)(gp + -0xc);
}


/* NanoCore 1.11, address 0x40091828.
 * REA evidence: ev_133f43e8da4d17e908c5da48b084344862d911bcfb09dd56f9d8ca5420d2d16c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40091828(void)

{
  return *(undefined4 *)(gp + -8);
}


/* NanoCore 1.11, address 0x40091830.
 * REA evidence: ev_56ef4e1962ae271c37a4e868f8e2b2927090cb0e1399fc2570fc3423e5a6d38d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40091830(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_40091856;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_40091856;
    if (0x25 < param_1) {
      return 0;
    }
LAB_ram_40091896:
    if (param_2 != 0) {
      if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
         (_DAT_ram_3008aff4 != 4)) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        iVar2 = FUN_ram_400933f0();
        iVar3 = FUN_ram_400933f0();
        if ((((DAT_ram_3008b890 == '\0') && (iVar3 != 0)) &&
            ((*(code **)(iVar3 + 8) != (code *)0x0 &&
             ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (iVar2 != 0)))))) &&
           (*(code **)(iVar2 + 0xc) != (code *)0x0)) {
          iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008aff0);
          if (iVar2 == 1) {
            if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) {
LAB_ram_40091954:
              DAT_ram_3008b888 = '\x01';
              goto LAB_ram_400918ca;
            }
          }
          else if (iVar2 == 2) {
            memset(&DAT_ram_3008aff0,0xff,0x898);
            _DAT_ram_3008aff0 = 0x53415442;
            _DAT_ram_3008aff4 = 4;
            _DAT_ram_3008affa = 0;
            iVar2 = 0x3008b014;
            do {
              *(undefined2 *)(iVar2 + -4) = 0;
              *(undefined4 *)(iVar2 + -0xc) = 0;
              *(undefined4 *)(iVar2 + -8) = 0;
              iVar3 = memset(iVar2,0,0x10);
              iVar2 = iVar3 + 0x20;
              *(undefined4 *)(iVar3 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar2 != 0x3008b4d4);
            iVar2 = 0x3008b4d4;
            do {
              *(undefined2 *)(iVar2 + -4) = 0;
              *(undefined4 *)(iVar2 + -0xc) = 0;
              *(undefined4 *)(iVar2 + -8) = 0;
              iVar3 = memset(iVar2,0,0x10);
              iVar2 = iVar3 + 0x20;
              *(undefined4 *)(iVar3 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar2 != 0x3008b894);
            iVar2 = FUN_ram_400933f0();
            if ((((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
                  (iVar3 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
                 ((iVar3 == 0 || (*(code **)(iVar3 + 8) == (code *)0x0)))) ||
                ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0 ||
                 ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))) ||
               (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008aff0), iVar2 == 0))
            goto LAB_ram_4009186c;
            goto LAB_ram_40091954;
          }
        }
        memset(&DAT_ram_3008aff0,0xff,0x898);
        uVar1 = 0;
        DAT_ram_3008b888 = '\0';
      }
      else {
LAB_ram_400918ca:
        FUN_ram_4000304c(param_2,&DAT_ram_3008b008 + param_1 * 0x20,0x20);
        uVar1 = 1;
      }
      goto LAB_ram_4009186e;
    }
  }
  else {
LAB_ram_40091856:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (param_1 < 0x26) goto LAB_ram_40091896;
  }
LAB_ram_4009186c:
  uVar1 = 0;
LAB_ram_4009186e:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40091abc.
 * REA evidence: ev_759302bb388d628995175a5e7d25f7a90c94493606fef716f96dca240b96cb2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40091abc(void)

{
  FUN_ram_40013e86(0x30,&PTR_LAB_ram_4008cbc4_ram_4009b3e0,0);
  FUN_ram_40013e76(0x35,FUN_ram_4008f310);
  FUN_ram_40013e76(0x36,&LAB_ram_4008e454);
  FUN_ram_40013e76(0x37,&LAB_ram_40089f9c);
  FUN_ram_40013e76(0x39,FUN_ram_4008dff4);
  FUN_ram_40013e76(0x38,&DAT_ram_4008a8bc);
  FUN_ram_40013e76(0x3a,&LAB_ram_4008b5a4);
  FUN_ram_40013e76(0x3b,&LAB_ram_40090336);
  FUN_ram_40013e86(0x50,&PTR_LAB_ram_4008c8e0_ram_4009b3c8,0);
  FUN_ram_40013e76(0x55,FUN_ram_4008b04c);
  FUN_ram_40013e76(0x56,&LAB_ram_4008dbdc);
  FUN_ram_40013e76(0x57,&LAB_ram_40089f34);
  FUN_ram_40013e76(0x59,&DAT_ram_4008d7e8);
  FUN_ram_40013e76(0x5a,&LAB_ram_4008a7b0);
  FUN_ram_40013e76(0x5b,&LAB_ram_4008b420);
  return;
}


/* NanoCore 1.11, address 0x40091be2.
 * REA evidence: ev_93e9a110b0a45d321c76ed868ac6a8bdd7353297272c3cc21112db0994623687
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40091be2(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _DAT_ram_3008c270;
  if ((_DAT_ram_3008c270 != 0) && (param_4 != 0)) {
    if (param_1 == 1) {
      iVar2 = FUN_ram_4008fc0a(param_2);
    }
    else {
      iVar2 = FUN_ram_4008fbfe();
    }
    uVar3 = FUN_ram_40006f52(iVar1,param_3 + iVar2,param_4,param_5);
    return uVar3;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40091c40.
 * REA evidence: ev_f5b985e9bd251bdabe76fe99d5f4a16acc67475a9e28c994e108535616e840f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40091c40(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0x1000;
  if (param_1 != 1) {
    uVar1 = FUN_ram_4008fc12(param_2);
  }
  if ((((_DAT_ram_3008c270 != 0) && (DAT_ram_3008c27c == '\0')) && (_DAT_ram_3008c278 == 0)) &&
     (((_DAT_ram_3008c274 == 0 && (param_3 != 0)) &&
      ((param_3 <= uVar1 && (_DAT_ram_3008c278 = FUN_ram_4002c2b6(param_3), _DAT_ram_3008c278 != 0))
      )))) {
    DAT_ram_3008c27e = 0;
    DAT_ram_3008c27d = 0;
    DAT_ram_3008c27c = 1;
    DAT_ram_3008c27f = (undefined1)param_2;
    _DAT_ram_3008c280 = param_1;
    _DAT_ram_3008c284 = param_3;
    memset(_DAT_ram_3008c278,0,param_3);
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40091d4e.
 * REA evidence: ev_4fa77b0dfd3aed459a316807f866fd09e5b3c929b7ac5147a4354d867937cf39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40091d4e(int param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  if (((_DAT_ram_3008c270 == 0) || (param_4 == 0)) || (_DAT_ram_3008c278 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (((DAT_ram_3008c27c != '\0') && (param_1 == _DAT_ram_3008c280)) &&
       ((DAT_ram_3008c27f == param_2 &&
        ((param_3 <= _DAT_ram_3008c284 && (param_5 <= _DAT_ram_3008c284 - param_3)))))) {
      FUN_ram_4000304c(param_3 + _DAT_ram_3008c278,param_4,param_5);
      uVar1 = param_5;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40091db8.
 * REA evidence: ev_0602ad586bc00ae98ff3e0f9d1df13da9d24ed41bae1bd9100bda08f3682d876
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40091db8(void)

{
  bool bVar1;
  
  bVar1 = true;
  if (_DAT_ram_3008c270 == 0) {
    _DAT_ram_3008c270 = FUN_ram_40006eee(s_presets_ram_400972c0);
    if (_DAT_ram_3008c270 != 0) {
      return 0xa9fff < *(uint *)(_DAT_ram_3008c270 + 0x38);
    }
    bVar1 = false;
    _DAT_ram_3008c270 = 0;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x40091dfe.
 * REA evidence: ev_389787f9ed27ab048001cb7db72ab090a06079a76324e8f925813c93bc6979ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40091dfe(int param_1,uint param_2,uint param_3,int param_4)

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
  
  if ((((_DAT_ram_3008c278 != 0) && (_DAT_ram_3008c274 == 0)) && (DAT_ram_3008c27c != '\0')) &&
     (((param_1 == _DAT_ram_3008c280 && (uVar9 = (uint)DAT_ram_3008c27f, uVar9 == param_2)) &&
      ((_DAT_ram_3008c284 == param_3 &&
       (iVar1 = FUN_ram_40007554(0,_DAT_ram_3008c278), iVar1 == param_4)))))) {
    if (param_1 == 1) {
      iVar1 = FUN_ram_4008fc0a(uVar9);
      iVar2 = 0x1000;
    }
    else {
      iVar1 = FUN_ram_4008fbfe();
      iVar2 = FUN_ram_4008fc12(uVar9);
    }
    _DAT_ram_3008c274 = FUN_ram_4002c2b6(iVar2);
    if (_DAT_ram_3008c274 != 0) {
      iVar3 = FUN_ram_40006f52(_DAT_ram_3008c270,iVar1,_DAT_ram_3008c274,iVar2);
      if (iVar3 != iVar2) {
        FUN_ram_4002c30c(_DAT_ram_3008c274);
        _DAT_ram_3008c274 = 0;
        return 0xffffffff;
      }
      DAT_ram_3008c27e = '\x01';
      DAT_ram_3008c27d = '\x01';
      iVar2 = FUN_ram_40006fe6(_DAT_ram_3008c270,iVar1,iVar2);
      if ((-1 < iVar2) &&
         (uVar9 = FUN_ram_40006f9c(_DAT_ram_3008c270,iVar1,_DAT_ram_3008c278,param_3),
         iVar2 = _DAT_ram_3008c278, uVar9 == param_3)) {
        iVar3 = 0;
        if (param_3 != 0) {
          if (_DAT_ram_3008c278 == 0) {
            uVar9 = 0;
            do {
              uVar8 = param_3 - uVar9;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              uVar4 = FUN_ram_40006f52(_DAT_ram_3008c270,uVar9 + iVar1,auStack_140,uVar8);
              uVar9 = uVar9 + uVar4;
              if (uVar4 != uVar8) goto LAB_ram_40091f84;
              iVar3 = FUN_ram_40007554(iVar3,auStack_140);
            } while (uVar9 < param_3);
          }
          else {
            uVar9 = 0;
            do {
              uVar8 = param_3 - uVar9;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              uVar4 = FUN_ram_40006f52(_DAT_ram_3008c270,iVar1 + uVar9,auStack_140,uVar8);
              iVar6 = iVar2 + uVar9;
              uVar9 = uVar9 + uVar4;
              if ((uVar4 != uVar8) ||
                 (iVar6 = FUN_ram_40002fec(auStack_140,iVar6,uVar4), iVar6 != 0))
              goto LAB_ram_40091f84;
              iVar3 = FUN_ram_40007554(iVar3,auStack_140,uVar4);
            } while (uVar9 < param_3);
          }
        }
        if (param_4 == iVar3) {
          return 0;
        }
      }
LAB_ram_40091f84:
      if ((((DAT_ram_3008c27c != '\0') && (DAT_ram_3008c27d != '\0')) && (DAT_ram_3008c27e != '\0'))
         && (_DAT_ram_3008c274 != 0)) {
        if (_DAT_ram_3008c280 == 1) {
          iVar1 = FUN_ram_4008fc0a(DAT_ram_3008c27f);
        }
        else {
          iVar1 = FUN_ram_4008fbfe();
        }
        if (_DAT_ram_3008c280 == 1) {
          uVar9 = 0x1000;
        }
        else {
          uVar9 = FUN_ram_4008fc12(DAT_ram_3008c27f);
        }
        iVar2 = FUN_ram_40007554(0,_DAT_ram_3008c274,uVar9);
        iVar3 = FUN_ram_40006fe6(_DAT_ram_3008c270,iVar1,uVar9);
        if ((-1 < iVar3) &&
           (uVar8 = FUN_ram_40006f9c(_DAT_ram_3008c270,iVar1,_DAT_ram_3008c274,uVar9),
           iVar3 = _DAT_ram_3008c274, uVar8 == uVar9)) {
          iVar6 = 0;
          if (uVar9 != 0) {
            iVar6 = 0;
            uVar8 = 0;
            if (_DAT_ram_3008c274 == 0) {
              do {
                uVar4 = uVar9 - uVar8;
                if (0x100 < uVar4) {
                  uVar4 = 0x100;
                }
                uVar5 = FUN_ram_40006f52(_DAT_ram_3008c270,iVar1 + uVar8,auStack_140,uVar4);
                uVar8 = uVar8 + uVar5;
                if (uVar5 != uVar4) {
                  return 0xffffffff;
                }
                iVar6 = FUN_ram_40007554(iVar6,auStack_140);
              } while (uVar8 < uVar9);
            }
            else {
              do {
                uVar4 = uVar9 - uVar8;
                if (0x100 < uVar4) {
                  uVar4 = 0x100;
                }
                uVar5 = FUN_ram_40006f52(_DAT_ram_3008c270,iVar1 + uVar8,auStack_140,uVar4);
                iVar7 = iVar3 + uVar8;
                uVar8 = uVar8 + uVar5;
                if (uVar5 != uVar4) {
                  return 0xffffffff;
                }
                iVar7 = FUN_ram_40002fec(auStack_140,iVar7,uVar5);
                if (iVar7 != 0) {
                  return 0xffffffff;
                }
                iVar6 = FUN_ram_40007554(iVar6,auStack_140,uVar5);
              } while (uVar8 < uVar9);
            }
          }
          if (iVar2 == iVar6) {
            DAT_ram_3008c27d = '\0';
          }
        }
      }
    }
  }
  return 0xffffffff;
}


