/* NanoCore 1.12: FUN_ram_4008d424 at 0x4008d424.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_7644c2941ab6c846f06e7e76aa8c4c118686e6e45974a2cdfa07043d682a44d6
 * Source: analysis/rea-1.12-effects/results/03654-export-0x4008d424.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
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

