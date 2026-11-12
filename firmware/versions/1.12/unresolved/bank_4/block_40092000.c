/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40092000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4009232c.
 * REA evidence: ev_eb45aea407bab76854ccee458fbf97d546eaaccdccbcd19194d997ca0e4dcf44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4009232c(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_40092352;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_40092352;
    if (0x1d < param_1) {
      return 0;
    }
LAB_ram_40092390:
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
LAB_ram_40092450:
              DAT_ram_3008b908 = '\x01';
              goto LAB_ram_400923c4;
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
            goto LAB_ram_40092366;
            goto LAB_ram_40092450;
          }
        }
        memset(&DAT_ram_3008b070,0xff,0x898);
        uVar1 = 0;
        DAT_ram_3008b908 = '\0';
      }
      else {
LAB_ram_400923c4:
        FUN_ram_4000303c(param_2,&DAT_ram_3008b548 + param_1 * 0x20,0x20);
        uVar1 = 1;
      }
      goto LAB_ram_40092368;
    }
  }
  else {
LAB_ram_40092352:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (param_1 < 0x1e) goto LAB_ram_40092390;
  }
LAB_ram_40092366:
  uVar1 = 0;
LAB_ram_40092368:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x400925b4.
 * REA evidence: ev_6d79c5bd3550efed2a2ab83824c0c00c6728c1454966933533242d229481e433
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400925b4(uint param_1,int param_2,uint param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_400925e2;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_400925e2;
    if (0x1d < param_1) {
      return 0xffffffff;
    }
LAB_ram_40092650:
    if ((param_2 != 0) && (param_4 != (undefined4 *)0x0)) {
      if ((DAT_ram_3008b908 == '\0') ||
         ((_DAT_ram_3008b070 != 0x53415442 || (_DAT_ram_3008b074 != 4)))) {
        memset(&DAT_ram_3008b070,0xff,0x898);
        iVar3 = FUN_ram_40094cd0();
        iVar4 = FUN_ram_40094cd0();
        if ((DAT_ram_3008b910 == '\0') &&
           ((((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)) &&
             (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0)) &&
            ((iVar3 != 0 && (*(code **)(iVar3 + 0xc) != (code *)0x0)))))) {
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) {
LAB_ram_400928ac:
              DAT_ram_3008b908 = '\x01';
              goto LAB_ram_40092686;
            }
          }
          else if (iVar3 == 2) {
            memset(&DAT_ram_3008b070,0xff,0x898);
            _DAT_ram_3008b070 = 0x53415442;
            _DAT_ram_3008b074 = 4;
            _DAT_ram_3008b07a = 0;
            iVar3 = 0x3008b094;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar4 = memset(iVar3,0,0x10);
              iVar3 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b554);
            iVar3 = 0x3008b554;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar4 = memset(iVar3,0,0x10);
              iVar3 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b914);
            iVar3 = FUN_ram_40094cd0();
            if (((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
                 ((iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0' ||
                  (((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
                   (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0)))))) ||
                ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
               (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 == 0))
            goto LAB_ram_400925f6;
            goto LAB_ram_400928ac;
          }
        }
        memset(&DAT_ram_3008b070,0xff,0x898);
        uVar2 = 0xffffffff;
        DAT_ram_3008b908 = '\0';
        goto LAB_ram_400925f8;
      }
LAB_ram_40092686:
      iVar3 = param_1 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b550 + iVar3);
      if (((((uVar1 & 1) != 0) && (uVar1 >> 1 == 0 && (uVar1 & 0xfffc) == 0)) &&
          (uVar5 = *(uint *)(&DAT_ram_3008b548 + iVar3), uVar5 - 1 < 0x1000)) &&
         ((*(int *)(&DAT_ram_3008b54c + iVar3) - 1U < 0xfffffffe && (uVar5 <= param_3)))) {
        iVar4 = FUN_ram_40094cd0();
        if ((DAT_ram_3008b910 == '\0') &&
           ((iVar4 != 0 && (*(code **)(iVar4 + 0x28) != (code *)0x0)))) {
          iVar4 = (**(code **)(iVar4 + 0x28))(1,param_1,0,param_2,uVar5);
        }
        else {
          iVar4 = -1;
        }
        if (*(int *)(&DAT_ram_3008b548 + iVar3) != iVar4) goto LAB_ram_400925f6;
        iVar4 = FUN_ram_40007450(0,param_2);
        if (iVar4 == *(int *)(&DAT_ram_3008b54c + iVar3)) {
          uVar2 = 0;
          *param_4 = *(undefined4 *)(&DAT_ram_3008b548 + iVar3);
          goto LAB_ram_400925f8;
        }
      }
      uVar2 = 0xfffffffe;
      goto LAB_ram_400925f8;
    }
  }
  else {
LAB_ram_400925e2:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (param_1 < 0x1e) goto LAB_ram_40092650;
  }
LAB_ram_400925f6:
  uVar2 = 0xffffffff;
LAB_ram_400925f8:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x400928bc.
 * REA evidence: ev_50f91a21b7282ad9b64432c55f7c1c794d732f2558b25318f034195d9927ae72
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400928bc(int param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_400928ee;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_400928ee;
    if (param_1 == 0) {
      return 0xffffffff;
    }
LAB_ram_40092900:
    if ((((param_3 != (undefined4 *)0x0) && (iVar3 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0'))
        && (iVar3 != 0)) &&
       ((*(code **)(iVar3 + 8) != (code *)0x0 && (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0))))
    {
      if ((DAT_ram_3008b908 == '\0') ||
         ((_DAT_ram_3008b070 != 0x53415442 || (_DAT_ram_3008b074 != 4)))) {
        memset(&DAT_ram_3008b070,0xff,0x898);
        iVar3 = FUN_ram_40094cd0();
        iVar4 = FUN_ram_40094cd0();
        if (((DAT_ram_3008b910 == '\0') &&
            (((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)) &&
             (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0)))) &&
           ((iVar3 != 0 && (*(code **)(iVar3 + 0xc) != (code *)0x0)))) {
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) {
LAB_ram_40092e92:
              uVar6 = (uint)DAT_ram_3008b078;
              DAT_ram_3008b908 = '\x01';
              if (uVar6 < 0x1e) {
                if (_DAT_ram_3008b070 == 0x53415442) goto LAB_ram_40093054;
                goto LAB_ram_40092eba;
              }
              goto LAB_ram_40092968;
            }
          }
          else if (iVar3 == 2) {
            memset(&DAT_ram_3008b070,0xff,0x898);
            _DAT_ram_3008b070 = 0x53415442;
            _DAT_ram_3008b074 = 4;
            _DAT_ram_3008b07a = 0;
            iVar3 = 0x3008b094;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar4 = memset(iVar3,0,0x10);
              iVar3 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b554);
            iVar3 = 0x3008b554;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar4 = memset(iVar3,0,0x10);
              iVar3 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b914);
            iVar3 = FUN_ram_40094cd0();
            if (((((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) &&
                 (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0')) &&
                (((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)) &&
                 ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 &&
                  ((iVar3 != 0 && (*(code **)(iVar3 + 0x10) != (code *)0x0)))))))) &&
               (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 != 0))
            goto LAB_ram_40092e92;
            goto LAB_ram_40092c60;
          }
        }
        memset(&DAT_ram_3008b070,0xff,0x898);
        uVar2 = 0xfffffffe;
        DAT_ram_3008b908 = '\0';
      }
      else {
        uVar6 = (uint)DAT_ram_3008b078;
        if (uVar6 < 0x1e) {
LAB_ram_40093054:
          if (_DAT_ram_3008b074 == 4) {
LAB_ram_40093060:
            iVar3 = uVar6 * 0x20;
            uVar1 = *(ushort *)(&DAT_ram_3008b550 + iVar3);
            if (((((uVar1 & 1) != 0) && (uVar1 >> 1 == 0 && (uVar1 & 0xfffc) == 0)) &&
                (uVar8 = *(uint *)(&DAT_ram_3008b548 + iVar3), uVar8 - 1 < 0x1000)) &&
               ((*(int *)(&DAT_ram_3008b54c + iVar3) - 1U < 0xfffffffe && (uVar8 <= param_2)))) {
              iVar4 = FUN_ram_40094cd0();
              if ((DAT_ram_3008b910 == '\0') &&
                 ((iVar4 != 0 && (*(code **)(iVar4 + 0x28) != (code *)0x0)))) {
                iVar4 = (**(code **)(iVar4 + 0x28))(1,uVar6,0,param_1,uVar8);
              }
              else {
                iVar4 = -1;
              }
              if ((*(int *)(&DAT_ram_3008b548 + iVar3) == iVar4) &&
                 (iVar4 = FUN_ram_40007450(0,param_1), iVar4 == *(int *)(&DAT_ram_3008b54c + iVar3))
                 ) {
                uVar2 = 0;
                *param_3 = *(undefined4 *)(&DAT_ram_3008b548 + iVar3);
                goto joined_r0x40092c66;
              }
            }
          }
          else {
LAB_ram_40092eba:
            memset(&DAT_ram_3008b070,0xff,0x898);
            iVar3 = FUN_ram_40094cd0();
            iVar4 = FUN_ram_40094cd0();
            if (((((DAT_ram_3008b910 == '\0') && (iVar4 != 0)) &&
                 (*(code **)(iVar4 + 8) != (code *)0x0)) &&
                ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar3 != 0)))) &&
               (*(code **)(iVar3 + 0xc) != (code *)0x0)) {
              iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
              if (iVar3 == 1) {
                if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4))
                goto LAB_ram_40093002;
              }
              else if (iVar3 == 2) {
                memset(&DAT_ram_3008b070,0xff,0x898);
                _DAT_ram_3008b070 = 0x53415442;
                _DAT_ram_3008b074 = 4;
                _DAT_ram_3008b07a = 0;
                iVar3 = 0x3008b094;
                do {
                  *(undefined2 *)(iVar3 + -4) = 0;
                  *(undefined4 *)(iVar3 + -0xc) = 0;
                  *(undefined4 *)(iVar3 + -8) = 0;
                  iVar4 = memset(iVar3,0,0x10);
                  iVar3 = iVar4 + 0x20;
                  *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
                } while (iVar3 != 0x3008b554);
                iVar3 = 0x3008b554;
                do {
                  *(undefined2 *)(iVar3 + -4) = 0;
                  *(undefined4 *)(iVar3 + -0xc) = 0;
                  *(undefined4 *)(iVar3 + -8) = 0;
                  iVar4 = memset(iVar3,0,0x10);
                  iVar3 = iVar4 + 0x20;
                  *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
                } while (iVar3 != 0x3008b914);
                iVar3 = FUN_ram_40094cd0();
                if ((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
                    (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
                   ((((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
                     ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 ||
                      ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))))) ||
                    (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 == 0))))
                goto LAB_ram_40092968;
LAB_ram_40093002:
                DAT_ram_3008b908 = '\x01';
                goto LAB_ram_40093060;
              }
            }
            memset(&DAT_ram_3008b070,0xff,0x898);
            DAT_ram_3008b908 = '\0';
          }
        }
LAB_ram_40092968:
        puVar7 = (uint *)&DAT_ram_3008b548;
        uVar6 = 0;
        do {
          if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) ||
             (_DAT_ram_3008b074 != 4)) {
            memset(&DAT_ram_3008b070,0xff,0x898);
            iVar3 = FUN_ram_40094cd0();
            iVar4 = FUN_ram_40094cd0();
            if ((((DAT_ram_3008b910 == '\0') && (iVar4 != 0)) &&
                ((*(code **)(iVar4 + 8) != (code *)0x0 &&
                 ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar3 != 0)))))) &&
               (*(code **)(iVar3 + 0xc) != (code *)0x0)) {
              iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
              if (iVar3 == 1) {
                if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) {
LAB_ram_40092cfc:
                  DAT_ram_3008b908 = '\x01';
                  goto LAB_ram_40092d0a;
                }
              }
              else if (iVar3 == 2) {
                memset(&DAT_ram_3008b070,0xff,0x898);
                _DAT_ram_3008b070 = 0x53415442;
                _DAT_ram_3008b074 = 4;
                _DAT_ram_3008b07a = 0;
                iVar3 = 0x3008b094;
                do {
                  *(undefined2 *)(iVar3 + -4) = 0;
                  *(undefined4 *)(iVar3 + -0xc) = 0;
                  *(undefined4 *)(iVar3 + -8) = 0;
                  iVar4 = memset(iVar3,0,0x10);
                  iVar3 = iVar4 + 0x20;
                  *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
                } while (iVar3 != 0x3008b554);
                iVar3 = 0x3008b554;
                do {
                  *(undefined2 *)(iVar3 + -4) = 0;
                  *(undefined4 *)(iVar3 + -0xc) = 0;
                  *(undefined4 *)(iVar3 + -8) = 0;
                  iVar4 = memset(iVar3,0,0x10);
                  iVar3 = iVar4 + 0x20;
                  *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
                } while (iVar3 != 0x3008b914);
                iVar3 = FUN_ram_40094cd0();
                if ((((((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) &&
                      (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0')) &&
                     ((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)))) &&
                    ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 &&
                     ((iVar3 != 0 && (*(code **)(iVar3 + 0x10) != (code *)0x0)))))) &&
                   (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 != 0))
                goto LAB_ram_40092cfc;
                goto LAB_ram_40092ad4;
              }
            }
            memset(&DAT_ram_3008b070,0xff,0x898);
            DAT_ram_3008b908 = '\0';
          }
          else {
LAB_ram_40092d0a:
            uVar1 = (ushort)puVar7[2];
            if (((((uVar1 & 1) != 0) && (uVar1 >> 1 == 0 && (uVar1 & 0xfffc) == 0)) &&
                (uVar8 = *puVar7, uVar8 - 1 < 0x1000)) &&
               ((puVar7[1] - 1 < 0xfffffffe && (uVar8 <= param_2)))) {
              iVar3 = FUN_ram_40094cd0();
              if ((DAT_ram_3008b910 == '\0') &&
                 ((iVar3 != 0 && (*(code **)(iVar3 + 0x28) != (code *)0x0)))) {
                uVar8 = (**(code **)(iVar3 + 0x28))(1,uVar6 & 0xff,0,param_1,uVar8);
              }
              else {
                uVar8 = 0xffffffff;
              }
              if ((*puVar7 == uVar8) &&
                 (uVar8 = FUN_ram_40007450(0,param_1), piVar5 = _DAT_ram_3008b90c,
                 uVar8 == puVar7[1])) {
                *param_3 = *(undefined4 *)(&DAT_ram_3008b548 + uVar6 * 0x20);
                if ((piVar5 == (int *)0x0) &&
                   (piVar5 = (int *)FUN_ram_4002d154(0x898), _DAT_ram_3008b90c = piVar5,
                   piVar5 == (int *)0x0)) {
                  iVar3 = *(int *)(gp + -8);
                }
                else {
                  FUN_ram_4000303c(piVar5,&DAT_ram_3008b070,0x898);
                  *(char *)(piVar5 + 2) = (char)uVar6;
                  *(undefined1 *)((int)piVar5 + 9) = 0;
                  iVar3 = FUN_ram_40094cd0();
                  if ((((((*piVar5 == 0x53415442) && ((short)piVar5[1] == 4)) &&
                        (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0')) &&
                       (((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)) &&
                        (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0)))) &&
                      ((iVar3 != 0 && (*(code **)(iVar3 + 0x10) != (code *)0x0)))) &&
                     (iVar3 = (**(code **)(iVar3 + 0x10))(piVar5), iVar3 != 0)) {
                    DAT_ram_3008b908 = '\x01';
                    FUN_ram_4000303c(&DAT_ram_3008b070,_DAT_ram_3008b90c,0x898);
                  }
                  iVar3 = *(int *)(gp + -8);
                }
                if (iVar3 == -1) {
                  *(undefined4 *)(gp + -8) = 1;
                  uVar2 = 0;
                }
                else {
                  uVar2 = 0;
                  *(int *)(gp + -8) = *(int *)(gp + -8) + 1;
                }
                goto joined_r0x40092c66;
              }
            }
          }
LAB_ram_40092ad4:
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 8;
        } while (uVar6 != 0x1e);
LAB_ram_40092c60:
        uVar2 = 0xfffffffe;
      }
      goto joined_r0x40092c66;
    }
  }
  else {
LAB_ram_400928ee:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (param_1 != 0) goto LAB_ram_40092900;
  }
  uVar2 = 0xffffffff;
joined_r0x40092c66:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar2;
}


