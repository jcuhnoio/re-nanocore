/* NanoCore 1.12: nc_model_switch_worker at 0x4000c132.
 * Role: Debounced request worker coordinates AMP/IR/drive loading and a 16-ms drive crossfade.
 * REA: ev_a2b795a33133cf1f0d87c82a428b61ac1b0a5e6b141aa5f680e8105872c64dd7
 * Source: analysis/rea-1.12/results/01337-export-0x4000c132.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_model_switch_worker(void)

{
  char cVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ushort uVar9;
  
  uVar2 = DAT_ram_4009672c;
  do {
    while( true ) {
      do {
        FUN_ram_4000487e(0x3004e3d8,0xffffffff);
        uVar4 = 0;
        iVar8 = _DAT_ram_3004e3d0;
        do {
          while (FUN_ram_400064e4(0x19), _DAT_ram_3004e3d0 != iVar8) {
            uVar4 = 0;
            iVar8 = _DAT_ram_3004e3d0;
          }
          uVar4 = uVar4 + 0x19;
        } while (uVar4 < 0x4b);
        do {
          iVar6 = FUN_ram_4000491c(0x3004e3d8);
        } while (iVar6 == 0);
      } while ((((short)DAT_ram_3004ab10 < 0) && ((short)DAT_ram_3004ac8c < 0)) &&
              ((short)DAT_ram_3004ab1c < 0));
      iVar6 = FUN_ram_40004a22(0x3004f6b4,0xffffffff);
      if (iVar6 == 0) break;
      FUN_ram_400064e4(0x19);
LAB_ram_4000c1fe:
      FUN_ram_40004920(0x3004e3d8);
    }
    FUN_ram_400002f4();
    cVar1 = DAT_ram_3004e528;
    uVar3 = DAT_ram_3004ac8c;
    uVar9 = DAT_ram_3004ab1c;
    uVar5 = DAT_ram_3004ab10;
    if (_DAT_ram_3004e3d0 != iVar8) {
      FUN_ram_400002fa();
      FUN_ram_40004b14(0x3004f6b4);
      goto LAB_ram_4000c1fe;
    }
    DAT_ram_3004ab10 = 0xffff;
    DAT_ram_3004ac8c = 0xffff;
    DAT_ram_3004ab1c = 0xffff;
    DAT_ram_3004e528 = '\0';
    FUN_ram_400002fa();
    if (-1 < (short)uVar5) {
      uVar5 = uVar5 & 0xff;
      uVar7 = FUN_ram_4000bb90(uVar5,0,0);
      FUN_ram_400083aa(0,uVar5,uVar7);
    }
    if (-1 < (short)uVar3) {
      uVar3 = uVar3 & 0xff;
      uVar7 = FUN_ram_4000bf64(uVar3);
      FUN_ram_400083aa(1,uVar3,uVar7);
    }
    if (-1 < (short)uVar9) {
      if ((cVar1 != '\0') && (iVar8 = FUN_ram_40008cf8(0x3004e52c), iVar8 != 0)) {
        nc_amp_drive_set_crossfade(0,0x3004e52c);
      }
      FUN_ram_40007780(0);
      uVar9 = uVar9 & 0xff;
      iVar8 = nc_fx2_load_drive_slot(uVar9);
      if (((iVar8 != 0) && (iVar6 = FUN_ram_400084dc(), iVar6 == 0)) && (DAT_ram_3004f730 < 8)) {
        FUN_ram_40008c5a();
      }
      FUN_ram_400083aa(2,uVar9,iVar8);
      FUN_ram_400002f4();
      uVar5 = DAT_ram_3004ab1c;
      FUN_ram_400002fa();
      if ((short)uVar5 < 0) {
        nc_amp_drive_invalidate_parameter_cache(0x3004e52c);
        iVar8 = FUN_ram_40007990(4,8);
        FUN_ram_40007780();
        uVar7 = uVar2;
        if (iVar8 == 0) goto LAB_ram_4000c308;
        nc_amp_drive_schedule_crossfade(uVar2,0x3004e52c,0x10);
      }
      else {
        FUN_ram_40007780(0);
        uVar7 = 0;
LAB_ram_4000c308:
        nc_amp_drive_set_crossfade(uVar7,0x3004e52c);
      }
      FUN_ram_400002f4();
      uVar5 = DAT_ram_3004ab1c;
      FUN_ram_400002fa();
      if (-1 < (short)uVar5) {
        FUN_ram_40007780(0);
        nc_amp_drive_set_crossfade(0,0x3004e52c);
      }
    }
    FUN_ram_40004b14(0x3004f6b4);
  } while( true );
}

