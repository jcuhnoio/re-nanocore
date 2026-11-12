/* NanoCore 1.12 analysis module: protocol/control_change.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002e8f2.
 * REA evidence: ev_7c1c07f52e201423ff023a4ffe3b0f426171c6fef2601dbfd548bacb3fa62f6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_submit_slot_command(undefined4 param_1,undefined4 param_2)

{
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [44];
  
  uStack_39 = 1;
  uStack_38 = 0;
  uStack_34 = 0;
  if (_DAT_ram_30079e48 != 0) {
    FUN_ram_40023f08(_DAT_ram_30079e48,param_1,param_2,auStack_30,0x20,&uStack_38,&uStack_34,
                     &uStack_39);
  }
  return;
}


/* NanoCore 1.12, address 0x4002ed2c.
 * REA evidence: ev_75271bb1b2b4af0f0b7450af7eb615bef2ba7aa389447b9357ff0240f6813646
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_midi_control_change(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 uStack_14;
  byte bStack_13;
  
  if ((DAT_ram_30079e60 == '\0') || (uVar2 = param_1 - 1U & 0xff, 0xf < uVar2)) {
    return;
  }
  bStack_13 = (byte)param_3;
  if (param_2 == 0) {
    iVar6 = 0x30079e38;
LAB_ram_4002ed52:
    *(byte *)(iVar6 + uVar2) = bStack_13 & 0x7f;
    return;
  }
  if (param_2 == 0x20) {
    iVar6 = 0x30079e28;
    goto LAB_ram_4002ed52;
  }
  uVar2 = param_2 - 0x14 & 0xff;
  if (uVar2 < 10) {
    if ((&DAT_ram_4009c544)[uVar2] != -1) {
      FUN_ram_4002e92c((&DAT_ram_4009c544)[uVar2],(param_3 & 0x7f) >> 6);
      return;
    }
  }
  else if ((param_2 - 0x2b & 0xff) < 2) {
    uStack_14 = 6;
    if (param_2 != 0x2b) {
      uStack_14 = 7;
    }
    if (0x1d < param_3) {
      return;
    }
    nc_submit_slot_command(&uStack_14,2);
    return;
  }
  uVar2 = param_2 - 0x28 & 0xff;
  if (param_2 < 0x28) {
    if (param_2 == 0x21) {
      uVar2 = 7;
      uVar7 = 7;
      goto LAB_ram_4002eeae;
    }
  }
  else if (uVar2 < 10) {
    cVar1 = (&DAT_ram_4009c544)[uVar2];
    if (cVar1 != -1) {
      uVar2 = param_3 & 0x7f;
      if (cVar1 == '\x06') {
        if (6 < uVar2) {
          return;
        }
        if ((param_3 & 0x7c) != 0) {
          uVar2 = uVar2 + 1;
        }
      }
      FUN_ram_4002e954(cVar1,uVar2);
      return;
    }
  }
  else if (param_2 == 0x32) {
    uVar3 = FUN_ram_40023402(0);
    uVar2 = 0;
    uVar7 = 0;
    if ((uVar3 & 0xfd) == 0) goto LAB_ram_4002eeae;
    goto LAB_ram_4002ee60;
  }
  uVar2 = param_2 - 0x33 & 0xff;
  if (uVar2 < 6) {
    iVar6 = FUN_ram_40023402(0);
    if (iVar6 == 2) {
      uVar2 = param_2 - 0x32 & 0xff;
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if (iVar6 != 3) {
LAB_ram_4002ee60:
        if (param_3 < 0x40) {
          return;
        }
        uVar7 = 0xffffffff;
        if (param_2 != 0x51) {
          if (param_2 != 0x52) {
            uVar7 = 0xffffffff;
            if (param_2 != 0x53) {
              if (param_2 != 0x54) {
                return;
              }
              uVar7 = 1;
            }
            FUN_ram_4002eb92(uVar7);
            return;
          }
          uVar7 = 1;
        }
        FUN_ram_4002eb1e(uVar7);
        return;
      }
    }
  }
  else {
    uVar2 = param_2 - 0x39 & 0xff;
    if (uVar2 < 3) {
      uVar3 = FUN_ram_40023402(1);
      if (7 < uVar3) goto LAB_ram_4002ee60;
      uVar7 = 1;
    }
    else {
      uVar2 = param_2 - 0x3c & 0xff;
      if (uVar2 < 5) {
        uVar7 = 2;
      }
      else {
        uVar2 = param_2 - 0x41 & 0xff;
        if (uVar2 < 3) {
          uVar7 = 3;
        }
        else {
          uVar2 = param_2 - 0x44 & 0xff;
          if (uVar2 < 6) {
            uVar3 = FUN_ram_40023402(1);
            uVar7 = 5;
            if (7 < uVar3) {
              uVar4 = FUN_ram_40025c82(1);
              uVar7 = 1;
              if (uVar4 <= uVar3) {
                uVar7 = 5;
              }
            }
          }
          else {
            uVar2 = param_2 - 0x4a & 0xff;
            if (uVar2 < 6) {
              uVar7 = 4;
            }
            else {
              uVar2 = param_2 - 0x55 & 0xff;
              if (uVar2 < 6) {
                uVar7 = 6;
              }
              else {
                uVar2 = param_2 - 0x5b & 0xff;
                uVar7 = 7;
                if (6 < uVar2) {
                  if (param_2 == 0x50) {
                    if (_DAT_ram_30079e58 == 0) {
                      return;
                    }
                    pbVar5 = (byte *)FUN_ram_4000559c(1);
                    if (pbVar5 == (byte *)0x0) {
                      return;
                    }
                    *pbVar5 = (byte)((param_3 << 0x19) >> 0x1f);
                    iVar6 = FUN_ram_4004ad3c(&LAB_ram_4002e8c6,pbVar5);
                    if (iVar6 == 1) {
                      return;
                    }
                    FUN_ram_400055d4(pbVar5);
                    return;
                  }
                  goto LAB_ram_4002ee60;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_ram_4002eeae:
  FUN_ram_4002e990((float)(param_3 & 0x7f) / DAT_ram_4009c53c,uVar7,uVar2);
  return;
}


