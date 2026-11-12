/* NanoCore 1.12: FUN_ram_4008dbe0 at 0x4008dbe0.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_129252f4b612b50843888ab3d840b4a7288090a098d658c9c228fd6906e126cb
 * Source: analysis/rea-1.12-effects/results/03656-export-0x4008dbe0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
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

