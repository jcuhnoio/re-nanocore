/* NanoCore 1.12: FUN_ram_4008d7c4 at 0x4008d7c4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_b718e68a4ed02ec40cc22d5b5496e014c3674439f817b482f313d0a6536cd089
 * Source: analysis/rea-1.12-effects/results/03655-export-0x4008d7c4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
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

