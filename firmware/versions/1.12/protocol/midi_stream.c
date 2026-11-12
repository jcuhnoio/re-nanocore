/* NanoCore 1.12 analysis module: protocol/midi_stream.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40028fc2.
 * REA evidence: ev_a064b6a9113a1b7669dba01a6ce25da4ce200ec6c62323171f66b90d393ffe2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint nc_midi_dispatch_message(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (param_2 == 0xf2) {
    uVar3 = FUN_ram_40028f68();
    if (param_5 == 0) {
      return uVar3;
    }
    uVar2 = 1;
    if (param_1 != 1) {
      uVar2 = 2;
    }
    uVar4 = FUN_ram_40004346();
    uVar3 = FUN_ram_400252c8(uVar2,(param_4 & 0x7f) << 7 | param_3 & 0x7f,uVar4);
    return uVar3;
  }
  uVar3 = (uint)(param_1 == 1);
  if (param_2 == 0xf3) {
    FUN_ram_40028f68();
    return param_3 & 0x7f;
  }
  uVar9 = param_2 & 0xf;
  param_2 = param_2 & 0xf0;
  uVar10 = uVar9 + 1;
  if (param_2 == 0x80) {
    iVar11 = thunk_FUN_ram_4002ecec(uVar10);
    if (iVar11 == 0) {
      return 0;
    }
    FUN_ram_40028f68(param_1);
    return uVar10;
  }
  if (param_2 == 0x90) {
    iVar11 = thunk_FUN_ram_4002ecec(uVar10);
    if (iVar11 == 0) {
      return 0;
    }
    uVar3 = FUN_ram_40028f68(param_1);
    if (param_5 == 0) {
      return uVar3;
    }
    return uVar10;
  }
  uVar5 = thunk_FUN_ram_4002ecec(uVar10);
  if (uVar5 == 0) {
    return 0;
  }
  if (param_2 != 0xb0) {
    if (param_2 != 0xc0) {
      uVar3 = FUN_ram_40028f68(param_1);
      return uVar3;
    }
    FUN_ram_40028f68(param_1);
    uVar3 = thunk_FUN_ram_4002efea(uVar10,param_3 & 0x7f,uVar3);
    return uVar3;
  }
  if (param_5 == 0) {
    return uVar5;
  }
  param_3 = param_3 & 0x7f;
  param_4 = param_4 & 0x7f;
  iVar11 = uVar3 * 0x180 + uVar9 * 0x18;
  uVar1 = (undefined1)param_4;
  if (param_3 == 99) {
    FUN_ram_40028efe(param_1,uVar9);
    *(undefined1 *)(iVar11 + 0x3006c420) = uVar1;
    *(undefined1 *)(iVar11 + 0x3006c424) = 1;
  }
  else if (param_3 == 0x62) {
    FUN_ram_40028efe(param_1,uVar9);
    *(undefined1 *)(iVar11 + 0x3006c421) = uVar1;
    *(undefined1 *)(iVar11 + 0x3006c425) = 1;
  }
  else {
    if (param_3 == 6) {
      FUN_ram_40028efe(param_1,uVar9);
      iVar7 = uVar3 * 0x180 + uVar9 * 0x18;
      *(undefined1 *)(iVar7 + 0x3006c426) = 1;
      *(undefined1 *)(iVar7 + 0x3006c422) = uVar1;
      if ((*(char *)(iVar7 + 0x3006c424) == '\0') || (*(char *)(iVar7 + 0x3006c425) == '\0'))
      goto LAB_ram_40029226;
      uVar5 = (uint)*(byte *)(iVar7 + 0x3006c420) << 7 | (uint)*(byte *)(iVar7 + 0x3006c421);
      iVar6 = FUN_ram_40028fae(uVar5,param_4);
      if (iVar6 != 0) {
        if (*(char *)(iVar7 + 0x3006c429) == '\0') {
          DAT_ram_3006c72a = DAT_ram_3006c72a + '\x01';
        }
        iVar8 = uVar3 * 0x180 + uVar9 * 0x18;
        *(undefined1 *)(iVar8 + 0x3006c429) = 1;
        *(undefined1 *)(iVar8 + 0x3006c428) = uVar1;
        *(int *)(iVar8 + 0x3006c42c) = param_1;
        uVar2 = FUN_ram_40004346();
        *(undefined4 *)(iVar8 + 0x3006c430) = uVar2;
        iVar7 = FUN_ram_400043ae(iVar6);
        iVar11 = 1;
        if (iVar7 != 0) {
          iVar11 = iVar7;
        }
        *(int *)(iVar8 + 0x3006c434) = iVar11;
        goto LAB_ram_40029226;
      }
      uVar1 = 0;
      if (*(char *)(iVar7 + 0x3006c427) != '\0') {
        uVar1 = *(undefined1 *)(iVar7 + 0x3006c423);
      }
      FUN_ram_40028ed4(uVar10,param_1,*(undefined1 *)(iVar11 + 0x3006c420),
                       *(undefined1 *)(iVar11 + 0x3006c421),*(undefined1 *)(iVar7 + 0x3006c422),
                       uVar1);
    }
    else {
      if (param_3 != 0x26) {
        if (1 < (param_3 - 100 & 0xff)) {
          FUN_ram_40028efe(param_1,uVar9);
          goto LAB_ram_40029226;
        }
        FUN_ram_40028efe(param_1,uVar9);
        *(undefined2 *)(uVar9 * 0x18 + uVar3 * 0x180 + 0x3006c424) = 0;
        goto LAB_ram_40029166;
      }
      uVar5 = 0;
      do {
        if (uVar9 != uVar5) {
          FUN_ram_40028efe(param_1,uVar5);
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 != 0x10);
      iVar7 = uVar3 * 0x180 + uVar9 * 0x18;
      *(undefined1 *)(iVar7 + 0x3006c427) = 1;
      *(undefined1 *)(iVar7 + 0x3006c423) = uVar1;
      if (((*(char *)(iVar7 + 0x3006c424) == '\0') || (*(char *)(iVar7 + 0x3006c425) == '\0')) ||
         (*(char *)(iVar7 + 0x3006c426) == '\0')) goto LAB_ram_40029226;
      if (*(char *)(iVar7 + 0x3006c429) == '\0') {
        uVar1 = *(undefined1 *)(iVar7 + 0x3006c422);
      }
      else {
        param_1 = *(int *)(iVar7 + 0x3006c42c);
        uVar1 = *(undefined1 *)(iVar7 + 0x3006c428);
      }
      FUN_ram_40028ed4(uVar10,param_1,*(undefined1 *)(iVar11 + 0x3006c420),
                       *(undefined1 *)(iVar11 + 0x3006c421),uVar1,param_4);
      iVar7 = uVar3 * 0x180 + uVar9 * 0x18;
      uVar5 = (uint)*(byte *)(iVar7 + 0x3006c421) | (uint)*(byte *)(iVar7 + 0x3006c420) << 7;
    }
    iVar7 = FUN_ram_40028faa(uVar5);
    if (iVar7 == 0) goto LAB_ram_40029226;
  }
LAB_ram_40029166:
  FUN_ram_40028ea0(iVar11 + 0x3006c420);
LAB_ram_40029226:
  uVar3 = thunk_FUN_ram_4002ed2c(uVar10,param_3,param_4,uVar3);
  return uVar3;
}


/* NanoCore 1.12, address 0x40029386.
 * REA evidence: ev_9454fcf16ac1789a04ccdcd20426238aac94a74292f7910001cdea84613a25ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_midi_parse_stream(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    return;
  }
  uVar13 = 2;
  if (param_1 == 1) {
    uVar13 = 1;
  }
  uVar11 = (uint)(param_1 == 1);
  iVar5 = uVar11 * 5;
  pbVar12 = param_2 + param_3;
  do {
    bVar1 = *param_2;
    uVar4 = (uint)bVar1;
    if (DAT_ram_3006c72d == '\0') {
      if (0xf7 < uVar4) goto LAB_ram_400295f8;
LAB_ram_40029426:
      if ((char)bVar1 < '\0') {
        if (uVar4 == 0xf0) {
          FUN_ram_40028f68(param_1);
          FUN_ram_40004f92(0x3006c738,0,2);
          DAT_ram_3006c72d = '\x01';
          _DAT_ram_3006c734 = param_1;
          _DAT_ram_3006c730 = FUN_ram_40004346();
          *(undefined1 *)(iVar5 + 0x3006c720) = 0;
          *(undefined1 *)(iVar5 + 0x3006c723) = 0;
          *(undefined1 *)(iVar5 + 0x3006c724) = 0;
          FUN_ram_4001445e(param_1 == 1);
          FUN_ram_40014b3a(0xf0);
        }
        else {
LAB_ram_400294bc:
          *(byte *)(iVar5 + 0x3006c720) = bVar1;
          if ((uVar4 & 0xf0) - 0x80 < 0x61) {
            cVar10 = '\x02';
            if ((uVar4 & 0xe0) == 0xc0) {
              cVar10 = '\x01';
            }
          }
          else {
            cVar10 = '\x02';
            if (uVar4 != 0xf2) {
              cVar10 = (uVar4 & 0xfd) == 0xf1;
            }
          }
          *(char *)(iVar5 + 0x3006c723) = cVar10;
          *(undefined1 *)(iVar5 + 0x3006c724) = 0;
          if (cVar10 == '\0') {
            nc_midi_dispatch_message(param_1,uVar4,0,0,0);
          }
        }
      }
      else {
        cVar10 = *(char *)(iVar5 + 0x3006c720);
        if ((cVar10 != '\0') && (bVar2 = *(byte *)(iVar5 + 0x3006c723), bVar2 != 0)) {
          bVar3 = *(byte *)(iVar5 + 0x3006c724);
          if (bVar3 < 2) {
            *(byte *)(iVar5 + 0x3006c724) = bVar3 + 1;
            *(byte *)(iVar5 + (uint)bVar3 + 0x3006c721) = bVar1;
          }
          if (bVar2 <= *(byte *)(iVar5 + 0x3006c724)) {
            if (bVar2 != 1) {
              uVar9 = *(undefined1 *)(iVar5 + 0x3006c722);
            }
            else {
              uVar9 = 0;
            }
            nc_midi_dispatch_message(param_1,cVar10,*(undefined1 *)(iVar5 + 0x3006c721),uVar9,bVar2 != 1);
            if ((*(byte *)(iVar5 + 0x3006c720) & 0xf0) == 0xf0) {
              *(undefined1 *)(iVar5 + 0x3006c720) = 0;
              *(undefined1 *)(iVar5 + 0x3006c723) = 0;
            }
LAB_ram_4002951c:
            *(undefined1 *)(iVar5 + 0x3006c724) = 0;
          }
        }
      }
    }
    else {
      iVar6 = FUN_ram_40004346();
      iVar7 = FUN_ram_400043ae(0x50);
      if (iVar7 < iVar6 - _DAT_ram_3006c730) {
        FUN_ram_40028f92();
      }
      if (uVar4 < 0xf8) {
        if (DAT_ram_3006c72d == '\0') goto LAB_ram_40029426;
        if (param_1 == _DAT_ram_3006c734) {
          if ((((char)bVar1 < '\0') && (uVar4 != 0xf0)) && (uVar4 != 0xf7)) {
            FUN_ram_40028f92();
            goto LAB_ram_400294bc;
          }
          FUN_ram_4001445e(param_1 == 1);
          FUN_ram_40014b3a(uVar4);
          _DAT_ram_3006c730 = FUN_ram_40004346();
          if (uVar4 == 0xf7) {
            FUN_ram_40028f92();
          }
        }
        else {
          if (*(char *)(uVar11 + 0x3006c738) == '\0') {
            if (uVar4 != 0xf0) goto LAB_ram_40029426;
            FUN_ram_40028f68(param_1);
            *(undefined1 *)(uVar11 + 0x3006c738) = 1;
            *(undefined1 *)(iVar5 + 0x3006c720) = 0;
            *(undefined1 *)(iVar5 + 0x3006c723) = 0;
            goto LAB_ram_4002951c;
          }
          if (uVar4 == 0xf7) {
            *(undefined1 *)(uVar11 + 0x3006c738) = 0;
          }
          else if (((char)bVar1 < '\0') && (uVar4 != 0xf0)) {
            *(undefined1 *)(uVar11 + 0x3006c738) = 0;
            goto LAB_ram_400294bc;
          }
        }
      }
      else {
LAB_ram_400295f8:
        uVar8 = FUN_ram_40004346();
        FUN_ram_40025356(uVar13,uVar4,uVar8);
      }
    }
    param_2 = param_2 + 1;
    if (pbVar12 == param_2) {
      return;
    }
  } while( true );
}


