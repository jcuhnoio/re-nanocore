/* NanoCore 1.12: FUN_ram_4000bf64 at 0x4000bf64.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_3f950fe2fcfb917c3a919bc05732a090c4401d846a390f357e2d70e3f4fa7316
 * Source: analysis/rea-1.12-effects/results/01330-export-0x4000bf64.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000bf64(uint param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uStack_38;
  undefined1 auStack_34 [16];
  ushort uStack_24;
  
  if (DAT_ram_3004f7dc != '\0') {
    FUN_ram_40004a22(0x3004f7b0,0xffffffff);
  }
  cVar2 = DAT_ram_3004f7a4;
  uStack_38 = 0;
  FUN_ram_4008dbe0(auStack_34);
  if (cVar2 != '\0') {
    iVar4 = FUN_ram_400086c0();
    if (iVar4 == 0) {
      iVar4 = 0x40;
      FUN_ram_400077a2(0,8);
      do {
        if (*(int *)(_DAT_ram_300517e0 + 0x34) == 0) goto LAB_ram_4000bfce;
        iVar4 = iVar4 + -1;
        FUN_ram_400064e4(1);
      } while (iVar4 != 0);
      if (*(int *)(_DAT_ram_300517e0 + 0x34) == 0) goto LAB_ram_4000bfce;
    }
    FUN_ram_40007876(0);
  }
LAB_ram_4000bfce:
  iVar5 = FUN_ram_400925b4(param_1,0x3004f7e0,0x1000,&uStack_38);
  iVar4 = _DAT_ram_300517e0;
  if ((((iVar5 == 0) && (uStack_38 != 0)) && ((uStack_38 & 3) == 0)) &&
     (uVar3 = uStack_38 >> 2, uVar3 - 1 < 0x400)) {
    bVar1 = DAT_ram_3004f7a4 != '\0';
    FUN_ram_400086ec();
    iVar4 = FUN_ram_400079d0(1,2,iVar4,&DAT_ram_400967d8,3,bVar1);
    FUN_ram_40007bb6();
    if ((iVar4 == 0) &&
       ((uStack_24 != 0xffff && param_1 == uStack_24 ||
        (iVar4 = FUN_ram_4008d424(param_1), iVar4 == 0)))) {
      FUN_ram_4000303c(0x300507e0,0x3004f7e0,uStack_38);
      cab_convolver_set_impulse_response(_DAT_ram_3004f7ac,0x300507e0,uVar3);
      FUN_ram_400075de();
      if (cVar2 == '\0') {
        iVar4 = FUN_ram_400086c0();
        if ((iVar4 != 0) || (iVar4 = FUN_ram_40007b94(), uVar6 = DAT_ram_4009672c, iVar4 != 0)) {
          uVar6 = 0;
        }
        FUN_ram_40007876(uVar6);
      }
      else {
        FUN_ram_400077a2(DAT_ram_4009672c,0x10);
      }
      FUN_ram_400002f4();
      _DAT_ram_3004f7a8 = _DAT_ram_3004f7a8 + 1;
      FUN_ram_400002fa();
      uVar6 = 0;
      goto LAB_ram_4000c046;
    }
  }
  if (cVar2 == '\0') {
    FUN_ram_40007876(DAT_ram_4009672c);
  }
  else {
    FUN_ram_400077a2(DAT_ram_4009672c,0x10);
  }
  uVar6 = 0xffffffff;
LAB_ram_4000c046:
  if (DAT_ram_3004f7dc != '\0') {
    FUN_ram_40004b14(0x3004f7b0);
  }
  return uVar6;
}

