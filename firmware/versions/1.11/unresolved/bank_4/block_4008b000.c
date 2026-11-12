/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4008b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4008b04c.
 * REA evidence: ev_9cc085c42bca2ad7bee4e6ddaa62955803364082aad9e780f9bcd1702b268927
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008b04c(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,undefined1 *param_5
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
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008b0a2;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008b0a2;
  }
  else {
LAB_ram_4008b0a2:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  if ((((DAT_ram_30087fd8 == '\0') && (iVar2 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0')) &&
      (iVar2 != 0)) &&
     ((*(code **)(iVar2 + 8) != (code *)0x0 && (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 != 0)))) {
    bVar1 = *param_2;
    if (0x1d < bVar1) {
      *param_5 = 3;
      goto LAB_ram_4008b0c0;
    }
    if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
       (_DAT_ram_3008aff4 != 4)) {
      memset(&DAT_ram_3008aff0,0xff,0x898);
      iVar2 = FUN_ram_400933f0();
      iVar4 = FUN_ram_400933f0();
      if (((((DAT_ram_3008b890 != '\0') || (iVar4 == 0)) || (*(code **)(iVar4 + 8) == (code *)0x0))
          || ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 || (iVar2 == 0)))) ||
         (*(code **)(iVar2 + 0xc) == (code *)0x0)) {
LAB_ram_4008b3dc:
        memset(&DAT_ram_3008aff0,0xff,0x898);
        DAT_ram_3008b888 = '\0';
        goto LAB_ram_4008b0ba;
      }
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008aff0);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) goto LAB_ram_4008b3dc;
      }
      else {
        if (iVar2 != 2) goto LAB_ram_4008b3dc;
        memset(&DAT_ram_3008aff0,0xff,0x898);
        _DAT_ram_3008aff0 = 0x53415442;
        _DAT_ram_3008aff4 = 4;
        _DAT_ram_3008affa = 0;
        iVar2 = 0x3008b014;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar2 != 0x3008b4d4);
        iVar2 = 0x3008b4d4;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar2 != 0x3008b894);
        iVar2 = FUN_ram_400933f0();
        if ((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
            (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
           ((((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
             ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 ||
              ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))) ||
            (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008aff0), iVar2 == 0))))
        goto LAB_ram_4008b0ba;
      }
      DAT_ram_3008b888 = '\x01';
    }
    if ((_DAT_ram_3008b88c != (int *)0x0) ||
       (_DAT_ram_3008b88c = (int *)FUN_ram_4002c2b6(0x898), _DAT_ram_3008b88c != (int *)0x0)) {
      piVar6 = _DAT_ram_3008b88c;
      FUN_ram_4000304c(_DAT_ram_3008b88c,&DAT_ram_3008aff0,0x898);
      uVar3 = memset(piVar6 + (uint)bVar1 * 8 + 0x139,0,0x10);
      if (param_3 != 1) {
        uVar5 = param_3 - 1;
        if (0xf < uVar5) {
          uVar5 = 0xf;
        }
        FUN_ram_4000304c(uVar3,param_2 + 1,uVar5);
      }
      iVar2 = FUN_ram_400933f0();
      if ((((((*piVar6 == 0x53415442) && ((short)piVar6[1] == 4)) &&
            (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0')) &&
           ((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)))) &&
          ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 &&
           ((iVar2 != 0 && (*(code **)(iVar2 + 0x10) != (code *)0x0)))))) &&
         (iVar2 = (**(code **)(iVar2 + 0x10))(piVar6), iVar2 != 0)) {
        DAT_ram_3008b888 = '\x01';
        FUN_ram_4000304c(&DAT_ram_3008aff0,_DAT_ram_3008b88c,0x898);
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
        goto LAB_ram_4008b0c0;
      }
    }
  }
LAB_ram_4008b0ba:
  *param_5 = 4;
LAB_ram_4008b0c0:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return 1;
}


/* NanoCore 1.11, address 0x4008b436.
 * REA evidence: ev_dd36beae9de13e659c0812c496bc77bf753ccda695d7eb9155b961d35714c65d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008b436(undefined4 param_1,uint *param_2,int param_3,undefined4 param_4,undefined1 *param_5
                )

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((DAT_ram_30087fc4 == '\0') ||
     (uVar4 = *param_2, DAT_ram_30087fc6 != *(char *)((int)param_2 + 3))) {
    *param_5 = 2;
    return 1;
  }
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008b498;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008b498;
    if ((DAT_ram_30087fc4 != '\0') && (DAT_ram_30087fc5 != '\0')) goto LAB_ram_4008b4b2;
  }
  else {
LAB_ram_4008b498:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if ((DAT_ram_30087fc4 != '\0') && (DAT_ram_30087fc5 != '\0')) {
LAB_ram_4008b4b2:
      cVar1 = DAT_ram_30087fc6;
      uVar4 = uVar4 & 0xffffff;
      if (uVar4 == _DAT_ram_30087fcc) {
        if ((_DAT_ram_30087fc8 < uVar4) || (uVar5 = param_3 - 4, _DAT_ram_30087fc8 - uVar4 < uVar5))
        {
          uVar2 = 3;
joined_r0x4008b566:
          if (_DAT_ram_3008b8c0 != 0) {
            FUN_ram_40004ab8(0x3008b894);
          }
          goto LAB_ram_4008b518;
        }
        iVar3 = FUN_ram_400933f0();
        if ((iVar3 != 0) && (*(code **)(iVar3 + 0x24) != (code *)0x0)) {
          uVar4 = (**(code **)(iVar3 + 0x24))(1,cVar1,uVar4,param_2 + 1,uVar5);
          if (uVar5 == uVar4) {
            _DAT_ram_30087fcc = uVar5 + _DAT_ram_30087fcc;
            _DAT_ram_30087fd0 = FUN_ram_40007554(_DAT_ram_30087fd0,param_2 + 1,uVar5);
            uVar2 = 0;
            goto joined_r0x4008b566;
          }
        }
      }
    }
    if (_DAT_ram_3008b8c0 != 0) {
      FUN_ram_40004ab8(0x3008b894);
      uVar2 = 4;
      goto LAB_ram_4008b518;
    }
  }
  uVar2 = 4;
LAB_ram_4008b518:
  *param_5 = uVar2;
  return 1;
}


/* NanoCore 1.11, address 0x4008b7dc.
 * REA evidence: ev_a33655998fd9b39b9af67647835361aad9001b294b9788f2b2246837ede885c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008b7dc(uint param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008b806;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008b806;
    if (DAT_ram_30087fd8 != '\0') {
      return 0xffffffff;
    }
LAB_ram_4008b820:
    if (DAT_ram_30087fc4 == '\0') {
      if ((_DAT_ram_3008afdc & 0xff) != 0) {
        uVar1 = DAT_ram_3008afde;
        iVar3 = FUN_ram_400933f0();
        if (((iVar3 == 0) || (*(code **)(iVar3 + 0x38) == (code *)0x0)) ||
           (iVar3 = (**(code **)(iVar3 + 0x38))(0,uVar1), iVar3 != 0)) goto LAB_ram_4008ba88;
        _DAT_ram_3008afdc = 0;
        _DAT_ram_3008afe0 = 0;
        _DAT_ram_3008afe4 = 0;
        _DAT_ram_3008afe8 = 0;
        _DAT_ram_3008afec = 0;
      }
      iVar3 = FUN_ram_400933f0();
      if (((DAT_ram_3008b890 == '\0') && (iVar3 != 0)) &&
         ((*(code **)(iVar3 + 8) != (code *)0x0 &&
          ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (param_1 < 0x26)))))) {
        if (param_2 != 0) {
          pcVar4 = (char *)FUN_ram_400933f0();
          if ((((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) ||
              (pcVar4 = (char *)FUN_ram_400933f0(), pcVar4 == (char *)0x0)) || (*pcVar4 == '\0')) {
            uVar6 = 0x3000;
          }
          else {
            uVar6 = 0x303c;
          }
          if (param_2 <= uVar6) {
            if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
               (_DAT_ram_3008aff4 != 4)) {
              memset(&DAT_ram_3008aff0,0xff,0x898);
              iVar3 = FUN_ram_400933f0();
              iVar5 = FUN_ram_400933f0();
              if (((DAT_ram_3008b890 == '\0') && (iVar5 != 0)) &&
                 ((*(code **)(iVar5 + 8) != (code *)0x0 &&
                  (((iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0 && (iVar3 != 0)) &&
                   (*(code **)(iVar3 + 0xc) != (code *)0x0)))))) {
                iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
                if (iVar3 == 1) {
                  if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4))
                  goto LAB_ram_4008bb5c;
                }
                else if (iVar3 == 2) {
                  memset(&DAT_ram_3008aff0,0xff,0x898);
                  _DAT_ram_3008aff0 = 0x53415442;
                  _DAT_ram_3008aff4 = 4;
                  _DAT_ram_3008affa = 0;
                  iVar3 = 0x3008b014;
                  do {
                    *(undefined2 *)(iVar3 + -4) = 0;
                    *(undefined4 *)(iVar3 + -0xc) = 0;
                    *(undefined4 *)(iVar3 + -8) = 0;
                    iVar5 = memset(iVar3,0,0x10);
                    iVar3 = iVar5 + 0x20;
                    *(undefined4 *)(iVar5 + 0x10) = DAT_ram_4009b3c0;
                  } while (iVar3 != 0x3008b4d4);
                  iVar3 = 0x3008b4d4;
                  do {
                    *(undefined2 *)(iVar3 + -4) = 0;
                    *(undefined4 *)(iVar3 + -0xc) = 0;
                    *(undefined4 *)(iVar3 + -8) = 0;
                    iVar5 = memset(iVar3,0,0x10);
                    iVar3 = iVar5 + 0x20;
                    *(undefined4 *)(iVar5 + 0x10) = DAT_ram_4009b3c0;
                  } while (iVar3 != 0x3008b894);
                  iVar3 = FUN_ram_400933f0();
                  if (((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
                       ((iVar5 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0' ||
                        (((iVar5 == 0 || (*(code **)(iVar5 + 8) == (code *)0x0)) ||
                         (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0)))))) ||
                      ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
                     (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 == 0))
                  goto LAB_ram_4008ba88;
LAB_ram_4008bb5c:
                  DAT_ram_3008b888 = '\x01';
                  goto LAB_ram_4008b906;
                }
              }
              memset(&DAT_ram_3008aff0,0xff,0x898);
              uVar2 = 0xffffffff;
              DAT_ram_3008b888 = '\0';
              goto joined_r0x4008ba8e;
            }
LAB_ram_4008b906:
            iVar3 = FUN_ram_400933f0();
            if (((iVar3 != 0) && (*(code **)(iVar3 + 0x20) != (code *)0x0)) &&
               (iVar3 = (**(code **)(iVar3 + 0x20))(0,param_1,param_2), iVar3 == 0)) {
              _DAT_ram_3008afe4 = 0;
              _DAT_ram_3008afe8 = 0;
              _DAT_ram_3008afec = 0;
              _DAT_ram_3008afdc = (uint)CONCAT12((char)param_1,&sedeleg);
              uVar2 = 0;
              _DAT_ram_3008afe0 = param_2;
              goto joined_r0x4008ba8e;
            }
            goto LAB_ram_4008ba88;
          }
        }
        uVar2 = 0xfffffffe;
        goto joined_r0x4008ba8e;
      }
    }
  }
  else {
LAB_ram_4008b806:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (DAT_ram_30087fd8 == '\0') goto LAB_ram_4008b820;
  }
LAB_ram_4008ba88:
  uVar2 = 0xffffffff;
joined_r0x4008ba8e:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4008bb6c.
 * REA evidence: ev_c78709488c15382cabd0f3ac6994705d6c2645c1220ff58dd04a37032e58454b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008bb6c(uint param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar5 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar5 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008bb8e;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008bb8e;
    if (DAT_ram_30087fd8 != '\0') {
      return 0xffffffff;
    }
LAB_ram_4008bba6:
    if (param_1 < 0x1e) {
      if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
         (_DAT_ram_3008aff4 != 4)) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        iVar5 = FUN_ram_400933f0();
        iVar4 = FUN_ram_400933f0();
        if ((((DAT_ram_3008b890 == '\0') && (iVar4 != 0)) &&
            ((*(code **)(iVar4 + 8) != (code *)0x0 &&
             ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar5 != 0)))))) &&
           (*(code **)(iVar5 + 0xc) != (code *)0x0)) {
          iVar5 = (**(code **)(iVar5 + 0xc))(&DAT_ram_3008aff0);
          if (iVar5 == 1) {
            if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) {
LAB_ram_4008bf00:
              DAT_ram_3008b888 = '\x01';
              goto LAB_ram_4008bbf8;
            }
          }
          else if (iVar5 == 2) {
            memset(&DAT_ram_3008aff0,0xff,0x898);
            _DAT_ram_3008aff0 = 0x53415442;
            _DAT_ram_3008aff4 = 4;
            _DAT_ram_3008affa = 0;
            iVar5 = 0x3008b014;
            do {
              *(undefined2 *)(iVar5 + -4) = 0;
              *(undefined4 *)(iVar5 + -0xc) = 0;
              *(undefined4 *)(iVar5 + -8) = 0;
              iVar4 = memset(iVar5,0,0x10);
              iVar5 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar5 != 0x3008b4d4);
            iVar5 = 0x3008b4d4;
            do {
              *(undefined2 *)(iVar5 + -4) = 0;
              *(undefined4 *)(iVar5 + -0xc) = 0;
              *(undefined4 *)(iVar5 + -8) = 0;
              iVar4 = memset(iVar5,0,0x10);
              iVar5 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar5 != 0x3008b894);
            iVar5 = FUN_ram_400933f0();
            if ((((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
                  (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
                 ((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)))) ||
                (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0)) ||
               (((iVar5 == 0 || (*(code **)(iVar5 + 0x10) == (code *)0x0)) ||
                (iVar5 = (**(code **)(iVar5 + 0x10))(&DAT_ram_3008aff0), iVar5 == 0))))
            goto LAB_ram_4008bbac;
            goto LAB_ram_4008bf00;
          }
        }
        memset(&DAT_ram_3008aff0,0xff,0x898);
        uVar3 = 0xffffffff;
        DAT_ram_3008b888 = '\0';
        goto joined_r0x4008bc52;
      }
LAB_ram_4008bbf8:
      iVar5 = param_1 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b4d0 + iVar5);
      uVar2 = 0xfffffffe;
      uVar3 = 0xfffffffe;
      if (((((uVar1 & 1) == 0) || (uVar3 = uVar2, uVar1 >> 1 != 0 || (uVar1 & 0xfffc) != 0)) ||
          (0xfff < *(int *)(&DAT_ram_3008b4c8 + iVar5) - 1U)) ||
         (0xfffffffd < *(int *)(&DAT_ram_3008b4cc + iVar5) - 1U)) goto joined_r0x4008bc52;
      if (DAT_ram_30087fc0 != '\0') {
        _DAT_ram_3008aff8 = (undefined2)param_1;
LAB_ram_4008bc3c:
        piVar6 = (int *)(gp + -8);
        if (*piVar6 == -1) {
          *piVar6 = 1;
          uVar3 = 0;
        }
        else {
          *piVar6 = *piVar6 + 1;
          uVar3 = 0;
        }
        goto joined_r0x4008bc52;
      }
      if ((_DAT_ram_3008b88c != (int *)0x0) ||
         (_DAT_ram_3008b88c = (int *)FUN_ram_4002c2b6(0x898), _DAT_ram_3008b88c != (int *)0x0)) {
        piVar6 = _DAT_ram_3008b88c;
        FUN_ram_4000304c(_DAT_ram_3008b88c,&DAT_ram_3008aff0,0x898);
        *(char *)(piVar6 + 2) = (char)param_1;
        *(undefined1 *)((int)piVar6 + 9) = 0;
        iVar5 = FUN_ram_400933f0();
        if (((((*piVar6 == 0x53415442) &&
              (((short)piVar6[1] == 4 && (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0'))))
             && (iVar4 != 0)) &&
            (((*(code **)(iVar4 + 8) != (code *)0x0 &&
              (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0)) && (iVar5 != 0)))) &&
           ((*(code **)(iVar5 + 0x10) != (code *)0x0 &&
            (iVar5 = (**(code **)(iVar5 + 0x10))(piVar6), iVar5 != 0)))) {
          DAT_ram_3008b888 = '\x01';
          FUN_ram_4000304c(&DAT_ram_3008aff0,_DAT_ram_3008b88c,0x898);
          goto LAB_ram_4008bc3c;
        }
      }
    }
  }
  else {
LAB_ram_4008bb8e:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (DAT_ram_30087fd8 == '\0') goto LAB_ram_4008bba6;
  }
LAB_ram_4008bbac:
  uVar3 = 0xffffffff;
joined_r0x4008bc52:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x4008bf0c.
 * REA evidence: ev_073593acb2f39b21ec94ff03c2dcdeb73fd36529186ee8755851404ce04d6fbb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008bf0c(uint param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008bf2e;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008bf2e;
    if (DAT_ram_30087fd8 != '\0') {
      return 0xffffffff;
    }
LAB_ram_4008bf46:
    if (param_1 < 0x26) {
      if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
         (_DAT_ram_3008aff4 != 4)) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        iVar3 = FUN_ram_400933f0();
        iVar5 = FUN_ram_400933f0();
        if ((((DAT_ram_3008b890 == '\0') && (iVar5 != 0)) &&
            ((*(code **)(iVar5 + 8) != (code *)0x0 &&
             ((iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0 && (iVar3 != 0)))))) &&
           (*(code **)(iVar3 + 0xc) != (code *)0x0)) {
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) {
LAB_ram_4008c248:
              DAT_ram_3008b888 = '\x01';
              goto LAB_ram_4008bf9c;
            }
          }
          else if (iVar3 == 2) {
            memset(&DAT_ram_3008aff0,0xff,0x898);
            _DAT_ram_3008aff0 = 0x53415442;
            _DAT_ram_3008aff4 = 4;
            _DAT_ram_3008affa = 0;
            iVar3 = 0x3008b014;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar5 = memset(iVar3,0,0x10);
              iVar3 = iVar5 + 0x20;
              *(undefined4 *)(iVar5 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar3 != 0x3008b4d4);
            iVar3 = 0x3008b4d4;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar5 = memset(iVar3,0,0x10);
              iVar3 = iVar5 + 0x20;
              *(undefined4 *)(iVar5 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar3 != 0x3008b894);
            iVar3 = FUN_ram_400933f0();
            if (((((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
                   (iVar5 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
                  ((iVar5 == 0 || (*(code **)(iVar5 + 8) == (code *)0x0)))) ||
                 (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0)) ||
                ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
               (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 == 0))
            goto LAB_ram_4008bf4e;
            goto LAB_ram_4008c248;
          }
        }
        memset(&DAT_ram_3008aff0,0xff,0x898);
        uVar2 = 0xffffffff;
        DAT_ram_3008b888 = '\0';
        goto joined_r0x4008c04a;
      }
LAB_ram_4008bf9c:
      iVar3 = param_1 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b010 + iVar3);
      if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffc) == 0)) {
        if (uVar1 >> 1 == 0) {
          pcVar4 = (char *)FUN_ram_400933f0();
          if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
            if (0x2fff < *(int *)(&DAT_ram_3008b008 + iVar3) - 1U) {
              uVar2 = 0xfffffffe;
              goto joined_r0x4008c04a;
            }
LAB_ram_4008c018:
            if (*(int *)(&DAT_ram_3008b00c + iVar3) - 1U < 0xfffffffe) {
              if (DAT_ram_30087fc0 != '\0') {
                _DAT_ram_3008aff6 = (undefined2)param_1;
LAB_ram_4008c034:
                piVar7 = (int *)(gp + -0xc);
                if (*piVar7 == -1) {
                  *piVar7 = 1;
                  uVar2 = 0;
                }
                else {
                  uVar2 = 0;
                  *piVar7 = *piVar7 + 1;
                }
                goto joined_r0x4008c04a;
              }
              if ((_DAT_ram_3008b88c != (int *)0x0) ||
                 (_DAT_ram_3008b88c = (int *)FUN_ram_4002c2b6(0x898),
                 _DAT_ram_3008b88c != (int *)0x0)) {
                piVar7 = _DAT_ram_3008b88c;
                FUN_ram_4000304c(_DAT_ram_3008b88c,&DAT_ram_3008aff0,0x898);
                *(char *)((int)piVar7 + 6) = (char)param_1;
                *(undefined1 *)((int)piVar7 + 7) = 0;
                iVar3 = FUN_ram_400933f0();
                if (((*piVar7 == 0x53415442) &&
                    ((((short)piVar7[1] == 4 &&
                      (iVar5 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0')) && (iVar5 != 0)))) &&
                   (((*(code **)(iVar5 + 8) != (code *)0x0 &&
                     (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0)) &&
                    ((iVar3 != 0 &&
                     ((*(code **)(iVar3 + 0x10) != (code *)0x0 &&
                      (iVar3 = (**(code **)(iVar3 + 0x10))(piVar7), iVar3 != 0)))))))) {
                  DAT_ram_3008b888 = '\x01';
                  FUN_ram_4000304c(&DAT_ram_3008aff0,_DAT_ram_3008b88c,0x898);
                  goto LAB_ram_4008c034;
                }
              }
              goto LAB_ram_4008bf4e;
            }
          }
        }
        else {
          pcVar4 = (char *)FUN_ram_400933f0();
          if (((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
             (uVar8 = *(uint *)(&DAT_ram_3008b008 + iVar3), 0x3b < uVar8)) {
            pcVar4 = (char *)FUN_ram_400933f0();
            uVar6 = 0x3000;
            if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
              uVar6 = 0x303c;
            }
            if (((uVar8 <= uVar6) && ((ushort)(*(short *)(iVar3 + 0x3008b012) - 1U) < 0x3000)) &&
               (*(uint *)(&DAT_ram_3008b008 + iVar3) ==
                (uint)(ushort)(*(short *)(iVar3 + 0x3008b012) + 0x3c))) goto LAB_ram_4008c018;
          }
        }
      }
      uVar2 = 0xfffffffe;
      goto joined_r0x4008c04a;
    }
  }
  else {
LAB_ram_4008bf2e:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (DAT_ram_30087fd8 == '\0') goto LAB_ram_4008bf46;
  }
LAB_ram_4008bf4e:
  uVar2 = 0xffffffff;
joined_r0x4008c04a:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar2;
}


