/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4008d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4008d094.
 * REA evidence: ev_000426f301a27bdadb462c9f690bc8ec393fa224008220757189bf91747a0fdf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008d094(uint param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008d0be;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008d0be;
    if (DAT_ram_30088058 != '\0') {
      return 0xffffffff;
    }
LAB_ram_4008d0d8:
    if (DAT_ram_30088044 == '\0') {
      if ((_DAT_ram_3008b05c & 0xff) != 0) {
        uVar1 = DAT_ram_3008b05e;
        iVar3 = FUN_ram_40094cd0();
        if (((iVar3 == 0) || (*(code **)(iVar3 + 0x38) == (code *)0x0)) ||
           (iVar3 = (**(code **)(iVar3 + 0x38))(0,uVar1), iVar3 != 0)) goto LAB_ram_4008d340;
        _DAT_ram_3008b05c = 0;
        _DAT_ram_3008b060 = 0;
        _DAT_ram_3008b064 = 0;
        _DAT_ram_3008b068 = 0;
        _DAT_ram_3008b06c = 0;
      }
      iVar3 = FUN_ram_40094cd0();
      if (((DAT_ram_3008b910 == '\0') && (iVar3 != 0)) &&
         ((*(code **)(iVar3 + 8) != (code *)0x0 &&
          ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (param_1 < 0x26)))))) {
        if (param_2 != 0) {
          pcVar4 = (char *)FUN_ram_40094cd0();
          if ((((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) ||
              (pcVar4 = (char *)FUN_ram_40094cd0(), pcVar4 == (char *)0x0)) || (*pcVar4 == '\0')) {
            uVar6 = 0x3000;
          }
          else {
            uVar6 = 0x303c;
          }
          if (param_2 <= uVar6) {
            if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) ||
               (_DAT_ram_3008b074 != 4)) {
              memset(&DAT_ram_3008b070,0xff,0x898);
              iVar3 = FUN_ram_40094cd0();
              iVar5 = FUN_ram_40094cd0();
              if (((DAT_ram_3008b910 == '\0') && (iVar5 != 0)) &&
                 ((*(code **)(iVar5 + 8) != (code *)0x0 &&
                  (((iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0 && (iVar3 != 0)) &&
                   (*(code **)(iVar3 + 0xc) != (code *)0x0)))))) {
                iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
                if (iVar3 == 1) {
                  if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4))
                  goto LAB_ram_4008d414;
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
                    iVar5 = memset(iVar3,0,0x10);
                    iVar3 = iVar5 + 0x20;
                    *(undefined4 *)(iVar5 + 0x10) = DAT_ram_400a13d8;
                  } while (iVar3 != 0x3008b554);
                  iVar3 = 0x3008b554;
                  do {
                    *(undefined2 *)(iVar3 + -4) = 0;
                    *(undefined4 *)(iVar3 + -0xc) = 0;
                    *(undefined4 *)(iVar3 + -8) = 0;
                    iVar5 = memset(iVar3,0,0x10);
                    iVar3 = iVar5 + 0x20;
                    *(undefined4 *)(iVar5 + 0x10) = DAT_ram_400a13d8;
                  } while (iVar3 != 0x3008b914);
                  iVar3 = FUN_ram_40094cd0();
                  if (((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
                       ((iVar5 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0' ||
                        (((iVar5 == 0 || (*(code **)(iVar5 + 8) == (code *)0x0)) ||
                         (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0)))))) ||
                      ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
                     (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 == 0))
                  goto LAB_ram_4008d340;
LAB_ram_4008d414:
                  DAT_ram_3008b908 = '\x01';
                  goto LAB_ram_4008d1be;
                }
              }
              memset(&DAT_ram_3008b070,0xff,0x898);
              uVar2 = 0xffffffff;
              DAT_ram_3008b908 = '\0';
              goto joined_r0x4008d346;
            }
LAB_ram_4008d1be:
            iVar3 = FUN_ram_40094cd0();
            if (((iVar3 != 0) && (*(code **)(iVar3 + 0x20) != (code *)0x0)) &&
               (iVar3 = (**(code **)(iVar3 + 0x20))(0,param_1,param_2), iVar3 == 0)) {
              _DAT_ram_3008b064 = 0;
              _DAT_ram_3008b068 = 0;
              _DAT_ram_3008b06c = 0;
              _DAT_ram_3008b05c = (uint)CONCAT12((char)param_1,&sedeleg);
              uVar2 = 0;
              _DAT_ram_3008b060 = param_2;
              goto joined_r0x4008d346;
            }
            goto LAB_ram_4008d340;
          }
        }
        uVar2 = 0xfffffffe;
        goto joined_r0x4008d346;
      }
    }
  }
  else {
LAB_ram_4008d0be:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (DAT_ram_30088058 == '\0') goto LAB_ram_4008d0d8;
  }
LAB_ram_4008d340:
  uVar2 = 0xffffffff;
joined_r0x4008d346:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4008d424.
 * REA evidence: ev_d7a850918e09604d7c1deb2f8376bb1604fe728919efed692839a87f71dc8d24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008d424(uint param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar5 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar5 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008d446;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008d446;
    if (DAT_ram_30088058 != '\0') {
      return 0xffffffff;
    }
LAB_ram_4008d45e:
    if (param_1 < 0x1e) {
      if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) ||
         (_DAT_ram_3008b074 != 4)) {
        memset(&DAT_ram_3008b070,0xff,0x898);
        iVar5 = FUN_ram_40094cd0();
        iVar4 = FUN_ram_40094cd0();
        if ((((DAT_ram_3008b910 == '\0') && (iVar4 != 0)) &&
            ((*(code **)(iVar4 + 8) != (code *)0x0 &&
             ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar5 != 0)))))) &&
           (*(code **)(iVar5 + 0xc) != (code *)0x0)) {
          iVar5 = (**(code **)(iVar5 + 0xc))(&DAT_ram_3008b070);
          if (iVar5 == 1) {
            if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) {
LAB_ram_4008d7b8:
              DAT_ram_3008b908 = '\x01';
              goto LAB_ram_4008d4b0;
            }
          }
          else if (iVar5 == 2) {
            memset(&DAT_ram_3008b070,0xff,0x898);
            _DAT_ram_3008b070 = 0x53415442;
            _DAT_ram_3008b074 = 4;
            _DAT_ram_3008b07a = 0;
            iVar5 = 0x3008b094;
            do {
              *(undefined2 *)(iVar5 + -4) = 0;
              *(undefined4 *)(iVar5 + -0xc) = 0;
              *(undefined4 *)(iVar5 + -8) = 0;
              iVar4 = memset(iVar5,0,0x10);
              iVar5 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
            } while (iVar5 != 0x3008b554);
            iVar5 = 0x3008b554;
            do {
              *(undefined2 *)(iVar5 + -4) = 0;
              *(undefined4 *)(iVar5 + -0xc) = 0;
              *(undefined4 *)(iVar5 + -8) = 0;
              iVar4 = memset(iVar5,0,0x10);
              iVar5 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
            } while (iVar5 != 0x3008b914);
            iVar5 = FUN_ram_40094cd0();
            if ((((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
                  (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
                 ((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)))) ||
                (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0)) ||
               (((iVar5 == 0 || (*(code **)(iVar5 + 0x10) == (code *)0x0)) ||
                (iVar5 = (**(code **)(iVar5 + 0x10))(&DAT_ram_3008b070), iVar5 == 0))))
            goto LAB_ram_4008d464;
            goto LAB_ram_4008d7b8;
          }
        }
        memset(&DAT_ram_3008b070,0xff,0x898);
        uVar3 = 0xffffffff;
        DAT_ram_3008b908 = '\0';
        goto joined_r0x4008d50a;
      }
LAB_ram_4008d4b0:
      iVar5 = param_1 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b550 + iVar5);
      uVar2 = 0xfffffffe;
      uVar3 = 0xfffffffe;
      if (((((uVar1 & 1) == 0) || (uVar3 = uVar2, uVar1 >> 1 != 0 || (uVar1 & 0xfffc) != 0)) ||
          (0xfff < *(int *)(&DAT_ram_3008b548 + iVar5) - 1U)) ||
         (0xfffffffd < *(int *)(&DAT_ram_3008b54c + iVar5) - 1U)) goto joined_r0x4008d50a;
      if (DAT_ram_30088040 != '\0') {
        _DAT_ram_3008b078 = (undefined2)param_1;
LAB_ram_4008d4f4:
        piVar6 = (int *)(gp + -8);
        if (*piVar6 == -1) {
          *piVar6 = 1;
          uVar3 = 0;
        }
        else {
          *piVar6 = *piVar6 + 1;
          uVar3 = 0;
        }
        goto joined_r0x4008d50a;
      }
      if ((_DAT_ram_3008b90c != (int *)0x0) ||
         (_DAT_ram_3008b90c = (int *)FUN_ram_4002d154(0x898), _DAT_ram_3008b90c != (int *)0x0)) {
        piVar6 = _DAT_ram_3008b90c;
        FUN_ram_4000303c(_DAT_ram_3008b90c,&DAT_ram_3008b070,0x898);
        *(char *)(piVar6 + 2) = (char)param_1;
        *(undefined1 *)((int)piVar6 + 9) = 0;
        iVar5 = FUN_ram_40094cd0();
        if (((((*piVar6 == 0x53415442) &&
              (((short)piVar6[1] == 4 && (iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0'))))
             && (iVar4 != 0)) &&
            (((*(code **)(iVar4 + 8) != (code *)0x0 &&
              (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0)) && (iVar5 != 0)))) &&
           ((*(code **)(iVar5 + 0x10) != (code *)0x0 &&
            (iVar5 = (**(code **)(iVar5 + 0x10))(piVar6), iVar5 != 0)))) {
          DAT_ram_3008b908 = '\x01';
          FUN_ram_4000303c(&DAT_ram_3008b070,_DAT_ram_3008b90c,0x898);
          goto LAB_ram_4008d4f4;
        }
      }
    }
  }
  else {
LAB_ram_4008d446:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (DAT_ram_30088058 == '\0') goto LAB_ram_4008d45e;
  }
LAB_ram_4008d464:
  uVar3 = 0xffffffff;
joined_r0x4008d50a:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4008d7c4.
 * REA evidence: ev_1b4016d8aa901f7ff6f077fa5b3eb724ec6ced6dbede97e0f7919ae4947b6791
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008d7c4(uint param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008d7e6;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008d7e6;
    if (DAT_ram_30088058 != '\0') {
      return 0xffffffff;
    }
LAB_ram_4008d7fe:
    if (param_1 < 0x26) {
      if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) ||
         (_DAT_ram_3008b074 != 4)) {
        memset(&DAT_ram_3008b070,0xff,0x898);
        iVar3 = FUN_ram_40094cd0();
        iVar5 = FUN_ram_40094cd0();
        if ((((DAT_ram_3008b910 == '\0') && (iVar5 != 0)) &&
            ((*(code **)(iVar5 + 8) != (code *)0x0 &&
             ((iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0 && (iVar3 != 0)))))) &&
           (*(code **)(iVar3 + 0xc) != (code *)0x0)) {
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) {
LAB_ram_4008db00:
              DAT_ram_3008b908 = '\x01';
              goto LAB_ram_4008d854;
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
              iVar5 = memset(iVar3,0,0x10);
              iVar3 = iVar5 + 0x20;
              *(undefined4 *)(iVar5 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b554);
            iVar3 = 0x3008b554;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar5 = memset(iVar3,0,0x10);
              iVar3 = iVar5 + 0x20;
              *(undefined4 *)(iVar5 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b914);
            iVar3 = FUN_ram_40094cd0();
            if (((((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
                   (iVar5 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
                  ((iVar5 == 0 || (*(code **)(iVar5 + 8) == (code *)0x0)))) ||
                 (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0)) ||
                ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
               (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 == 0))
            goto LAB_ram_4008d806;
            goto LAB_ram_4008db00;
          }
        }
        memset(&DAT_ram_3008b070,0xff,0x898);
        uVar2 = 0xffffffff;
        DAT_ram_3008b908 = '\0';
        goto joined_r0x4008d902;
      }
LAB_ram_4008d854:
      iVar3 = param_1 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b090 + iVar3);
      if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffc) == 0)) {
        if (uVar1 >> 1 == 0) {
          pcVar4 = (char *)FUN_ram_40094cd0();
          if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
            if (0x2fff < *(int *)(&DAT_ram_3008b088 + iVar3) - 1U) {
              uVar2 = 0xfffffffe;
              goto joined_r0x4008d902;
            }
LAB_ram_4008d8d0:
            if (*(int *)(&DAT_ram_3008b08c + iVar3) - 1U < 0xfffffffe) {
              if (DAT_ram_30088040 != '\0') {
                _DAT_ram_3008b076 = (undefined2)param_1;
LAB_ram_4008d8ec:
                piVar7 = (int *)(gp + -0xc);
                if (*piVar7 == -1) {
                  *piVar7 = 1;
                  uVar2 = 0;
                }
                else {
                  uVar2 = 0;
                  *piVar7 = *piVar7 + 1;
                }
                goto joined_r0x4008d902;
              }
              if ((_DAT_ram_3008b90c != (int *)0x0) ||
                 (_DAT_ram_3008b90c = (int *)FUN_ram_4002d154(0x898),
                 _DAT_ram_3008b90c != (int *)0x0)) {
                piVar7 = _DAT_ram_3008b90c;
                FUN_ram_4000303c(_DAT_ram_3008b90c,&DAT_ram_3008b070,0x898);
                *(char *)((int)piVar7 + 6) = (char)param_1;
                *(undefined1 *)((int)piVar7 + 7) = 0;
                iVar3 = FUN_ram_40094cd0();
                if (((*piVar7 == 0x53415442) &&
                    ((((short)piVar7[1] == 4 &&
                      (iVar5 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0')) && (iVar5 != 0)))) &&
                   (((*(code **)(iVar5 + 8) != (code *)0x0 &&
                     (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0)) &&
                    ((iVar3 != 0 &&
                     ((*(code **)(iVar3 + 0x10) != (code *)0x0 &&
                      (iVar3 = (**(code **)(iVar3 + 0x10))(piVar7), iVar3 != 0)))))))) {
                  DAT_ram_3008b908 = '\x01';
                  FUN_ram_4000303c(&DAT_ram_3008b070,_DAT_ram_3008b90c,0x898);
                  goto LAB_ram_4008d8ec;
                }
              }
              goto LAB_ram_4008d806;
            }
          }
        }
        else {
          pcVar4 = (char *)FUN_ram_40094cd0();
          if (((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
             (uVar8 = *(uint *)(&DAT_ram_3008b088 + iVar3), 0x3b < uVar8)) {
            pcVar4 = (char *)FUN_ram_40094cd0();
            uVar6 = 0x3000;
            if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
              uVar6 = 0x303c;
            }
            if (((uVar8 <= uVar6) && ((ushort)(*(short *)(iVar3 + 0x3008b092) - 1U) < 0x3000)) &&
               (*(uint *)(&DAT_ram_3008b088 + iVar3) ==
                (uint)(ushort)(*(short *)(iVar3 + 0x3008b092) + 0x3c))) goto LAB_ram_4008d8d0;
          }
        }
      }
      uVar2 = 0xfffffffe;
      goto joined_r0x4008d902;
    }
  }
  else {
LAB_ram_4008d7e6:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (DAT_ram_30088058 == '\0') goto LAB_ram_4008d7fe;
  }
LAB_ram_4008d806:
  uVar2 = 0xffffffff;
joined_r0x4008d902:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4008dbe0.
 * REA evidence: ev_94ba871f9035409026d64c10b8213c28d511b80febd06597c1c722aff6b454e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008dbe0(undefined4 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008dc08;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008dc08;
  }
  else {
LAB_ram_4008dc08:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  memset(param_1,0,0x14);
  iVar2 = FUN_ram_40094cd0();
  if ((((DAT_ram_3008b910 != '\0') || (iVar2 == 0)) || (*(code **)(iVar2 + 8) == (code *)0x0)) ||
     (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 == 0)) goto LAB_ram_4008de26;
  if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) || (_DAT_ram_3008b074 != 4))
  {
    memset(&DAT_ram_3008b070,0xff,0x898);
    iVar2 = FUN_ram_40094cd0();
    iVar3 = FUN_ram_40094cd0();
    if (((DAT_ram_3008b910 == '\0') && (iVar3 != 0)) &&
       ((*(code **)(iVar3 + 8) != (code *)0x0 &&
        (((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (iVar2 != 0)) &&
         (*(code **)(iVar2 + 0xc) != (code *)0x0)))))) {
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008b070);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) goto LAB_ram_4008ddc4;
      }
      else {
        if (iVar2 != 2) goto LAB_ram_4008ddc4;
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
        if (((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
             ((iVar3 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0' ||
              (((iVar3 == 0 || (*(code **)(iVar3 + 8) == (code *)0x0)) ||
               (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0)))))) ||
            ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))) ||
           (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008b070), iVar2 == 0))
        goto LAB_ram_4008dde2;
      }
      DAT_ram_3008b908 = '\x01';
    }
    else {
LAB_ram_4008ddc4:
      memset(&DAT_ram_3008b070,0xff,0x898);
      DAT_ram_3008b908 = '\0';
    }
  }
LAB_ram_4008dde2:
  *param_1 = 0x1e000;
  iVar2 = FUN_ram_40094cd0();
  uVar4 = 0;
  if ((iVar2 != 0) && (*(code **)(iVar2 + 0x3c) != (code *)0x0)) {
    uVar4 = (**(code **)(iVar2 + 0x3c))();
  }
  uVar5 = _DAT_ram_3008b078;
  if (0x1d < (_DAT_ram_3008b078 & 0xff)) {
    uVar5 = 0xffff;
  }
  *(ushort *)(param_1 + 4) = uVar5;
  uVar1 = _DAT_ram_30088044;
  param_1[2] = 0x1e;
  param_1[1] = uVar4;
  param_1[3] = 0x1000;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
LAB_ram_4008de26:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4008de9c.
 * REA evidence: ev_08e2f55da9b7bb227dc925007cd66c933b1ab335692a2543a9ef9bfa2865b031
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008de9c(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ushort uVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008dec4;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008dec4;
  }
  else {
LAB_ram_4008dec4:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  memset(param_1,0,0x14);
  iVar3 = FUN_ram_40094cd0();
  if ((((DAT_ram_3008b910 != '\0') || (iVar3 == 0)) || (*(code **)(iVar3 + 8) == (code *)0x0)) ||
     (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0)) goto LAB_ram_4008e120;
  if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) || (_DAT_ram_3008b074 != 4))
  {
    memset(&DAT_ram_3008b070,0xff,0x898);
    iVar3 = FUN_ram_40094cd0();
    iVar4 = FUN_ram_40094cd0();
    if (((DAT_ram_3008b910 == '\0') && (iVar4 != 0)) &&
       ((*(code **)(iVar4 + 8) != (code *)0x0 &&
        (((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar3 != 0)) &&
         (*(code **)(iVar3 + 0xc) != (code *)0x0)))))) {
      iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
      if (iVar3 == 1) {
        if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) goto LAB_ram_4008e18e;
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
        goto LAB_ram_4008e0a2;
LAB_ram_4008e18e:
        DAT_ram_3008b908 = '\x01';
        goto LAB_ram_4008e0a2;
      }
    }
    memset(&DAT_ram_3008b070,0xff,0x898);
    DAT_ram_3008b908 = '\0';
  }
LAB_ram_4008e0a2:
  pcVar5 = (char *)FUN_ram_40094cd0();
  uVar2 = 0x72000;
  if (((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) &&
     ((pcVar5 = (char *)FUN_ram_40094cd0(), pcVar5 != (char *)0x0 && (*pcVar5 != '\0')))) {
    uVar2 = 0x728e8;
  }
  *param_1 = uVar2;
  iVar3 = FUN_ram_40094cd0();
  uVar2 = 0;
  if ((iVar3 != 0) && (*(code **)(iVar3 + 0x3c) != (code *)0x0)) {
    uVar2 = (**(code **)(iVar3 + 0x3c))();
  }
  param_1[1] = uVar2;
  param_1[2] = 0x26;
  pcVar5 = (char *)FUN_ram_40094cd0();
  uVar2 = 0x3000;
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    uVar2 = 0x303c;
  }
  uVar6 = _DAT_ram_3008b076;
  if (0x25 < (_DAT_ram_3008b076 & 0xff)) {
    uVar6 = 0xffff;
  }
  *(ushort *)(param_1 + 4) = uVar6;
  uVar1 = _DAT_ram_3008b05c;
  param_1[3] = uVar2;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
LAB_ram_4008e120:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
    return;
  }
  return;
}


