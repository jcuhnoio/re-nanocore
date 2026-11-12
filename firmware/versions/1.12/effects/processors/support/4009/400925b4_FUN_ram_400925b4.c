/* NanoCore 1.12: FUN_ram_400925b4 at 0x400925b4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_a964bad153e8f89e66b770e5d13a9667d42e919cb8d3f418d28ca46a642358dc
 * Source: analysis/rea-1.12-effects/results/03679-export-0x400925b4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
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

