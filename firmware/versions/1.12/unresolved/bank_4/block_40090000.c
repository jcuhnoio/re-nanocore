/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40090000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400901ac.
 * REA evidence: ev_3238c4cb65b2540404686f1127286f45e4554da01d0f3fe8d41a4c3219cb868d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400901ac(uint param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iStack_50;
  int iStack_4c;
  short sStack_48;
  
  iStack_50 = 0;
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_400901e2;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_400901e2;
    if (DAT_ram_3008b05c == '\0') {
      return 0xffffffff;
    }
LAB_ram_40090200:
    if (((DAT_ram_3008b05d != '\0') && (_DAT_ram_3008b060 == param_1)) &&
       (_DAT_ram_3008b064 == param_1)) {
      if (_DAT_ram_3008b068 != param_2) {
        uVar9 = 0xfffffffe;
        goto joined_r0x400906a8;
      }
      bVar1 = DAT_ram_3008b05e;
      uVar8 = (uint)DAT_ram_3008b05e;
      iVar3 = FUN_ram_4008b720(uVar8,param_1,&iStack_50);
      if ((iVar3 != 0) || (iStack_50 != param_2)) goto LAB_ram_4009065e;
      if ((uVar8 < 0x26) && (param_1 != 0)) {
        pcVar4 = (char *)FUN_ram_40094cd0();
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
          if (param_1 - 0xc < 0x2ff5) {
            iVar3 = FUN_ram_40094cd0();
            if (((iVar3 == 0) || (*(code **)(iVar3 + 0x2c) == (code *)0x0)) ||
               (iVar3 = (**(code **)(iVar3 + 0x2c))(0,uVar8,0,&iStack_4c,0xc), iVar3 != 0xc))
            goto LAB_ram_40090722;
            if ((iStack_4c == 0x42504444) && (((ushort)(sStack_48 - 1U) < 3 || (sStack_48 == 5))))
            goto LAB_ram_40090298;
          }
          goto LAB_ram_400904a0;
        }
        iStack_4c = 0;
        if (((0x303c < param_1) || (iVar3 = FUN_ram_40094cd0(), iVar3 == 0)) ||
           ((*(code **)(iVar3 + 0x2c) == (code *)0x0 ||
            (uVar5 = (**(code **)(iVar3 + 0x2c))(0,uVar8,0,&DAT_ram_30084ff8,param_1),
            param_1 != uVar5)))) {
LAB_ram_40090722:
          uVar9 = 0xffffffff;
          goto LAB_ram_400904a2;
        }
        iVar3 = FUN_ram_4008b9c8(uVar5,&DAT_ram_3008805c,0x3000,&iStack_4c);
        if ((((iVar3 != 0) || (iVar3 = iStack_4c, 0x2ff4 < iStack_4c - 0xcU)) ||
            (_DAT_ram_3008805c != 0x42504444)) ||
           ((2 < (ushort)(_DAT_ram_30088060 - 1U) && (_DAT_ram_30088060 != 5)))) {
          memset(&DAT_ram_30084ff8,0,0x303c);
          memset(&DAT_ram_3008805c,0,0x3000);
          uVar9 = 0xfffffffe;
          goto LAB_ram_400904a2;
        }
        memset(&DAT_ram_30084ff8,0,0x303c);
        memset(&DAT_ram_3008805c,0,0x3000);
        _DAT_ram_3008b06c = iVar3;
LAB_ram_40090298:
        if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) ||
           (_DAT_ram_3008b074 != 4)) {
          memset(&DAT_ram_3008b070,0xff,0x898);
          iVar3 = FUN_ram_40094cd0();
          iVar6 = FUN_ram_40094cd0();
          if ((((DAT_ram_3008b910 != '\0') || (iVar6 == 0)) ||
              ((*(code **)(iVar6 + 8) == (code *)0x0 ||
               ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0 || (iVar3 == 0)))))) ||
             (*(code **)(iVar3 + 0xc) == (code *)0x0)) {
LAB_ram_40090640:
            memset(&DAT_ram_3008b070,0xff,0x898);
            DAT_ram_3008b908 = '\0';
            goto LAB_ram_4009065e;
          }
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4))
            goto LAB_ram_40090640;
          }
          else {
            if (iVar3 != 2) goto LAB_ram_40090640;
            memset(&DAT_ram_3008b070,0xff,0x898);
            _DAT_ram_3008b070 = 0x53415442;
            _DAT_ram_3008b074 = 4;
            _DAT_ram_3008b07a = 0;
            iVar3 = 0x3008b094;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar6 = memset(iVar3,0,0x10);
              iVar3 = iVar6 + 0x20;
              *(undefined4 *)(iVar6 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b554);
            iVar3 = 0x3008b554;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar6 = memset(iVar3,0,0x10);
              iVar3 = iVar6 + 0x20;
              *(undefined4 *)(iVar6 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b914);
            iVar3 = FUN_ram_40094cd0();
            if (((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
                 (iVar6 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
                (((iVar6 == 0 || (*(code **)(iVar6 + 8) == (code *)0x0)) ||
                 ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0 ||
                  ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))))))) ||
               (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 == 0))
            goto LAB_ram_4009065e;
          }
          DAT_ram_3008b908 = '\x01';
        }
        if ((_DAT_ram_3008b90c == (int *)0x0) &&
           (_DAT_ram_3008b90c = (int *)FUN_ram_4002d154(0x898), _DAT_ram_3008b90c == (int *)0x0)) {
LAB_ram_4009065e:
          if ((_DAT_ram_3008b05c & 0xff) != 0) {
            uVar2 = DAT_ram_3008b05e;
            iVar3 = FUN_ram_40094cd0();
            if ((iVar3 == 0) || (*(code **)(iVar3 + 0x38) == (code *)0x0)) goto LAB_ram_400906a4;
            iVar3 = (**(code **)(iVar3 + 0x38))(0,uVar2);
joined_r0x40090678:
            if (iVar3 != 0) goto LAB_ram_400906a4;
          }
          _DAT_ram_3008b05c = 0;
          _DAT_ram_3008b060 = 0;
          _DAT_ram_3008b064 = 0;
          _DAT_ram_3008b068 = 0;
          _DAT_ram_3008b06c = 0;
          goto LAB_ram_400906a4;
        }
        FUN_ram_4000303c(_DAT_ram_3008b90c,&DAT_ram_3008b070,0x898);
        iVar3 = FUN_ram_40094cd0();
        if ((iVar3 == 0) ||
           ((*(code **)(iVar3 + 0x30) == (code *)0x0 ||
            (iVar3 = (**(code **)(iVar3 + 0x30))(0,uVar8,param_1,param_2),
            piVar7 = _DAT_ram_3008b90c, iVar3 != 0)))) goto LAB_ram_4009065e;
        iVar6 = uVar8 * 0x20;
        *(char *)(_DAT_ram_3008b90c + uVar8 * 8 + 6) = (char)param_1;
        *(char *)((int)piVar7 + iVar6 + 0x19) = (char)(param_1 >> 8);
        *(char *)((int)piVar7 + iVar6 + 0x1a) = (char)(param_1 >> 0x10);
        *(char *)((int)piVar7 + iVar6 + 0x1b) = (char)(param_1 >> 0x18);
        *(char *)(piVar7 + uVar8 * 8 + 7) = (char)param_2;
        *(char *)((int)piVar7 + iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)((int)piVar7 + iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)((int)piVar7 + iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        pcVar4 = (char *)FUN_ram_40094cd0();
        iVar3 = _DAT_ram_3008b06c;
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
          *(undefined1 *)(piVar7 + uVar8 * 8 + 8) = 1;
          *(undefined1 *)((int)piVar7 + iVar6 + 0x21) = 0;
          *(undefined1 *)((int)piVar7 + iVar6 + 0x22) = 0xff;
          *(undefined1 *)((int)piVar7 + iVar6 + 0x23) = 0xff;
        }
        else {
          if (0xfffe < _DAT_ram_3008b06c - 1U) goto LAB_ram_4009065e;
          *(undefined1 *)(piVar7 + uVar8 * 8 + 8) = 3;
          *(undefined1 *)((int)piVar7 + iVar6 + 0x21) = 0;
          *(char *)((int)piVar7 + iVar6 + 0x22) = (char)iVar3;
          *(char *)((int)piVar7 + iVar6 + 0x23) = (char)((uint)iVar3 >> 8);
        }
        if ((param_3 != 0) && (param_4 != 0)) {
          memset(piVar7 + uVar8 * 8 + 9,0,0x10);
          uVar5 = 0xf;
          if (param_4 < 0x10) {
            uVar5 = param_4;
          }
          FUN_ram_4000303c(piVar7 + uVar8 * 8 + 9,param_3,uVar5);
        }
        piVar7 = _DAT_ram_3008b90c;
        *(byte *)((int)_DAT_ram_3008b90c + 6) = bVar1;
        *(undefined1 *)((int)piVar7 + 7) = 0;
        iVar3 = FUN_ram_40094cd0();
        if ((((((*piVar7 != 0x53415442) || ((short)piVar7[1] != 4)) ||
              (iVar6 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
             ((iVar6 == 0 || (*(code **)(iVar6 + 8) == (code *)0x0)))) ||
            ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0 ||
             ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))))) ||
           (iVar3 = (**(code **)(iVar3 + 0x10))(piVar7), iVar3 == 0)) {
          iVar3 = FUN_ram_40094cd0();
          if ((iVar3 == 0) || (*(code **)(iVar3 + 0x38) == (code *)0x0)) goto LAB_ram_400906a4;
          iVar3 = (**(code **)(iVar3 + 0x38))(0,uVar8);
          goto joined_r0x40090678;
        }
        DAT_ram_3008b908 = '\x01';
        FUN_ram_4000303c(&DAT_ram_3008b070,_DAT_ram_3008b90c,0x898);
        iVar3 = FUN_ram_40094cd0();
        if ((iVar3 != 0) && (*(code **)(iVar3 + 0x34) != (code *)0x0)) {
          (**(code **)(iVar3 + 0x34))(0,uVar8);
        }
        piVar7 = (int *)(gp + -0xc);
        uVar9 = 0;
        if (*piVar7 == -1) {
          *piVar7 = 1;
        }
        else {
          *piVar7 = *piVar7 + 1;
        }
      }
      else {
LAB_ram_400904a0:
        uVar9 = 0xfffffffe;
LAB_ram_400904a2:
        if ((_DAT_ram_3008b05c & 0xff) != 0) {
          uVar2 = DAT_ram_3008b05e;
          iVar3 = FUN_ram_40094cd0();
          if (((iVar3 == 0) || (*(code **)(iVar3 + 0x38) == (code *)0x0)) ||
             (iVar3 = (**(code **)(iVar3 + 0x38))(0,uVar2), iVar3 != 0)) goto joined_r0x400906a8;
        }
      }
      _DAT_ram_3008b05c = 0;
      _DAT_ram_3008b060 = 0;
      _DAT_ram_3008b064 = 0;
      _DAT_ram_3008b068 = 0;
      _DAT_ram_3008b06c = 0;
      goto joined_r0x400906a8;
    }
  }
  else {
LAB_ram_400901e2:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (DAT_ram_3008b05c != '\0') goto LAB_ram_40090200;
  }
LAB_ram_400906a4:
  uVar9 = 0xffffffff;
joined_r0x400906a8:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar9;
}


/* NanoCore 1.12, address 0x40090838.
 * REA evidence: ev_29a8b0c40b5633cd5759b88539dcb3d0c00e8717a27268f5154c8ac31912f043
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40090838(undefined4 param_1,uint param_2,int param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_34;
  
  uVar1 = param_2 & 0xffffff;
  if (param_4 == (undefined1 *)0x0) {
    return 0;
  }
  uVar7 = param_2 >> 0x18;
  bVar6 = (byte)(param_2 >> 0x18);
  if (DAT_ram_30084fe4 == '\0') {
    if (DAT_ram_30088035 != '\0') {
joined_r0x40090902:
      if ((_DAT_ram_30088034 & 0xff) == 0) goto LAB_ram_40090904;
LAB_ram_4009094a:
      if ((_DAT_ram_30088034 >> 0x10 & 0xff) != uVar7) goto LAB_ram_40090904;
      uStack_34 = 0;
      if ((_DAT_ram_3008803c != _DAT_ram_30088038) || (uVar1 != _DAT_ram_3008803c)) {
        *param_4 = 1;
        goto LAB_ram_400908a6;
      }
      iVar2 = FUN_ram_40007450(0,&DAT_ram_30084ff8,uVar1);
      if (param_3 == iVar2) {
        pcVar3 = (char *)FUN_ram_40094cd0();
        if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
          iVar2 = FUN_ram_4008b9c8(uVar1,&DAT_ram_3008805c,0x3000,&uStack_34);
          if (iVar2 != 0) {
            uVar5 = 1;
            if (iVar2 == -3) {
              uVar5 = 3;
            }
            if (iVar2 == -2) {
              uVar5 = 5;
            }
LAB_ram_40090a8e:
            *param_4 = uVar5;
            memset(&DAT_ram_3008805c,0,0x3000);
            FUN_ram_4008b640();
            return 1;
          }
          if ((((0x25 < uVar7) || (0x2ff4 < uStack_34 - 0xc)) || (_DAT_ram_3008805c != 0x42504444))
             || ((2 < (ushort)(_DAT_ram_30088060 - 1U) && (_DAT_ram_30088060 != 5)))) {
            *param_4 = 5;
            memset(&DAT_ram_3008805c,0,0x3000);
            FUN_ram_4008b640();
            return 1;
          }
          uVar4 = FUN_ram_40007450(0,&DAT_ram_3008805c);
          iVar2 = FUN_ram_4008d094(uVar7,uStack_34);
          if (iVar2 != 0) {
            uVar5 = 3;
            if (iVar2 != -2) {
              uVar5 = 4;
            }
            goto LAB_ram_40090a8e;
          }
          uVar7 = 0;
          if (uStack_34 != 0) {
            do {
              uVar8 = uStack_34 - uVar7;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              iVar2 = FUN_ram_4008c346(uVar7,&DAT_ram_3008805c + uVar7,uVar8);
              uVar7 = uVar7 + uVar8;
              if (iVar2 != 0) {
                FUN_ram_4008b908();
                uVar5 = 3;
                if (iVar2 != -2) {
                  uVar5 = 4;
                }
                goto LAB_ram_40090a8e;
              }
            } while (uVar7 < uStack_34);
          }
          iVar2 = FUN_ram_400901ac(uStack_34,uVar4,0,0);
          if (iVar2 == -2) {
            *param_4 = 5;
          }
          else if (iVar2 == 0) {
            *param_4 = 0;
            _DAT_ram_30084ff4 = _DAT_ram_30084ff0;
            DAT_ram_30084fe4 = '\x01';
            DAT_ram_30084fe5 = bVar6;
            _DAT_ram_30084fe8 = uVar1;
            _DAT_ram_30084fec = param_3;
          }
          else {
            *param_4 = 4;
          }
          memset(&DAT_ram_3008805c,0,0x3000);
          goto LAB_ram_40090a3c;
        }
        iVar2 = FUN_ram_4008d094(uVar7,uVar1);
        if (iVar2 == 0) {
          uVar7 = 0;
          if (uVar1 != 0) {
            do {
              uVar8 = uVar1 - uVar7;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              iVar2 = FUN_ram_4008c346(uVar7,&DAT_ram_30084ff8 + uVar7,uVar8);
              uVar7 = uVar7 + uVar8;
              if (iVar2 != 0) {
                FUN_ram_4008b908();
                goto LAB_ram_40090a30;
              }
            } while (uVar7 < uVar1);
          }
          iVar2 = FUN_ram_400901ac(uVar1,param_3,0,0);
          if (iVar2 == -2) goto LAB_ram_40090b76;
          if (iVar2 == 0) {
            *param_4 = 0;
            _DAT_ram_30084ff4 = _DAT_ram_30084ff0;
            DAT_ram_30084fe4 = '\x01';
            DAT_ram_30084fe5 = bVar6;
            _DAT_ram_30084fe8 = uVar1;
            _DAT_ram_30084fec = param_3;
            goto LAB_ram_40090a3c;
          }
        }
        else {
LAB_ram_40090a30:
          if (iVar2 == -2) {
LAB_ram_40090b76:
            *param_4 = 5;
            goto LAB_ram_40090a3c;
          }
        }
        *param_4 = 4;
LAB_ram_40090a3c:
        FUN_ram_4008b640();
        return 1;
      }
LAB_ram_4009099c:
      *param_4 = 5;
      goto LAB_ram_400908a6;
    }
LAB_ram_40090904:
    if (DAT_ram_3008b05c != '\0') goto LAB_ram_40090912;
  }
  else if (DAT_ram_3008b05c == '\0') {
    if (DAT_ram_30088034 == '\0') {
      if (((_DAT_ram_30084ff4 == _DAT_ram_30084ff0) && (DAT_ram_30084fe5 == uVar7)) &&
         ((uVar1 == _DAT_ram_30084fe8 && (param_3 == _DAT_ram_30084fec)))) {
        *param_4 = 0;
        return 1;
      }
    }
    else if (DAT_ram_30088035 != '\0') goto LAB_ram_4009094a;
  }
  else {
    if (DAT_ram_30088035 != '\0') goto joined_r0x40090902;
LAB_ram_40090912:
    if (DAT_ram_3008b05e == uVar7) {
      iVar2 = FUN_ram_400901ac(uVar1,param_3,0,0);
      if (iVar2 != -2) {
        if (iVar2 == 0) {
          *param_4 = 0;
          _DAT_ram_30084ff4 = _DAT_ram_30084ff0;
          DAT_ram_30084fe4 = '\x01';
          DAT_ram_30084fe5 = bVar6;
          _DAT_ram_30084fe8 = uVar1;
          _DAT_ram_30084fec = param_3;
        }
        else {
          *param_4 = 4;
        }
        goto LAB_ram_400908a6;
      }
      if (param_3 == _DAT_ram_3008b068) {
        *param_4 = 3;
        goto LAB_ram_400908a6;
      }
      goto LAB_ram_4009099c;
    }
  }
  *param_4 = 2;
LAB_ram_400908a6:
  memset(&DAT_ram_30084ff8,0,0x303c);
  _DAT_ram_3008803c = 0;
  _DAT_ram_30088038 = 0;
  _DAT_ram_30088034 = 0;
  return 1;
}


/* NanoCore 1.12, address 0x40090bdc.
 * REA evidence: ev_61906604327f4efa98e4615d52082ef5e37f6b50e9c56e5f3735a177fcd6a303
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40090bdc(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,undefined1 *param_5
                )

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    *param_5 = 1;
    return 1;
  }
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_40090c32;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_40090c32;
  }
  else {
LAB_ram_40090c32:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  if ((((DAT_ram_30088058 == '\0') && (iVar2 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0')) &&
      (iVar2 != 0)) &&
     ((*(code **)(iVar2 + 8) != (code *)0x0 && (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 != 0)))) {
    bVar1 = *param_2;
    if (0x1d < bVar1) {
      *param_5 = 3;
      goto LAB_ram_40090c50;
    }
    if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) ||
       (_DAT_ram_3008b074 != 4)) {
      memset(&DAT_ram_3008b070,0xff,0x898);
      iVar2 = FUN_ram_40094cd0();
      iVar4 = FUN_ram_40094cd0();
      if (((((DAT_ram_3008b910 != '\0') || (iVar4 == 0)) || (*(code **)(iVar4 + 8) == (code *)0x0))
          || ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 || (iVar2 == 0)))) ||
         (*(code **)(iVar2 + 0xc) == (code *)0x0)) {
LAB_ram_40090f6c:
        memset(&DAT_ram_3008b070,0xff,0x898);
        DAT_ram_3008b908 = '\0';
        goto LAB_ram_40090c4a;
      }
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008b070);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) goto LAB_ram_40090f6c;
      }
      else {
        if (iVar2 != 2) goto LAB_ram_40090f6c;
        memset(&DAT_ram_3008b070,0xff,0x898);
        _DAT_ram_3008b070 = 0x53415442;
        _DAT_ram_3008b074 = 4;
        _DAT_ram_3008b07a = 0;
        iVar2 = 0x3008b094;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
        } while (iVar2 != 0x3008b554);
        iVar2 = 0x3008b554;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
        } while (iVar2 != 0x3008b914);
        iVar2 = FUN_ram_40094cd0();
        if ((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
            (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
           ((((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
             ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 ||
              ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))) ||
            (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008b070), iVar2 == 0))))
        goto LAB_ram_40090c4a;
      }
      DAT_ram_3008b908 = '\x01';
    }
    if ((_DAT_ram_3008b90c != (int *)0x0) ||
       (_DAT_ram_3008b90c = (int *)FUN_ram_4002d154(0x898), _DAT_ram_3008b90c != (int *)0x0)) {
      piVar6 = _DAT_ram_3008b90c;
      FUN_ram_4000303c(_DAT_ram_3008b90c,&DAT_ram_3008b070,0x898);
      uVar3 = memset(piVar6 + (uint)bVar1 * 8 + 0x139,0,0x10);
      if (param_3 != 1) {
        uVar5 = param_3 - 1;
        if (0xf < uVar5) {
          uVar5 = 0xf;
        }
        FUN_ram_4000303c(uVar3,param_2 + 1,uVar5);
      }
      iVar2 = FUN_ram_40094cd0();
      if ((((((*piVar6 == 0x53415442) && ((short)piVar6[1] == 4)) &&
            (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0')) &&
           ((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)))) &&
          ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 &&
           ((iVar2 != 0 && (*(code **)(iVar2 + 0x10) != (code *)0x0)))))) &&
         (iVar2 = (**(code **)(iVar2 + 0x10))(piVar6), iVar2 != 0)) {
        DAT_ram_3008b908 = '\x01';
        FUN_ram_4000303c(&DAT_ram_3008b070,_DAT_ram_3008b90c,0x898);
        piVar6 = (int *)(gp + -8);
        if (*piVar6 == -1) {
          *piVar6 = 1;
          *param_5 = 0;
        }
        else {
          iVar2 = *piVar6;
          *param_5 = 0;
          *piVar6 = iVar2 + 1;
        }
        goto LAB_ram_40090c50;
      }
    }
  }
LAB_ram_40090c4a:
  *param_5 = 4;
LAB_ram_40090c50:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return 1;
}


/* NanoCore 1.12, address 0x40090ff0.
 * REA evidence: ev_51d16de0ee41d7e0212ca2a5f5e07418da85205645d85819b48d9254c5ada375
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40090ff0(void)

{
  return;
}


