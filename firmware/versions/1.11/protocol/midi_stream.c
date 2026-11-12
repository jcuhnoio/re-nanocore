/* NanoCore 1.11 analysis module: protocol/midi_stream.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400282ae.
 * REA evidence: ev_c3da11c724d22c1e75cbb00121835c9368c73a54a66b9844139682a701c49d6d
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
    uVar3 = FUN_ram_40028254();
    if (param_5 == 0) {
      return uVar3;
    }
    uVar2 = 1;
    if (param_1 != 1) {
      uVar2 = 2;
    }
    uVar4 = FUN_ram_400042ea();
    uVar3 = FUN_ram_40024c78(uVar2,(param_4 & 0x7f) << 7 | param_3 & 0x7f,uVar4);
    return uVar3;
  }
  uVar3 = (uint)(param_1 == 1);
  if (param_2 == 0xf3) {
    FUN_ram_40028254();
    return param_3 & 0x7f;
  }
  uVar9 = param_2 & 0xf;
  param_2 = param_2 & 0xf0;
  uVar10 = uVar9 + 1;
  if (param_2 == 0x80) {
    iVar11 = thunk_FUN_ram_4002de28(uVar10);
    if (iVar11 == 0) {
      return 0;
    }
    FUN_ram_40028254(param_1);
    return uVar10;
  }
  if (param_2 == 0x90) {
    iVar11 = thunk_FUN_ram_4002de28(uVar10);
    if (iVar11 == 0) {
      return 0;
    }
    uVar3 = FUN_ram_40028254(param_1);
    if (param_5 == 0) {
      return uVar3;
    }
    return uVar10;
  }
  uVar5 = thunk_FUN_ram_4002de28(uVar10);
  if (uVar5 == 0) {
    return 0;
  }
  if (param_2 != 0xb0) {
    if (param_2 != 0xc0) {
      uVar3 = FUN_ram_40028254(param_1);
      return uVar3;
    }
    FUN_ram_40028254(param_1);
    uVar3 = thunk_FUN_ram_4002e126(uVar10,param_3 & 0x7f,uVar3);
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
    FUN_ram_400281ea(param_1,uVar9);
    *(undefined1 *)(iVar11 + 0x3006c120) = uVar1;
    *(undefined1 *)(iVar11 + 0x3006c124) = 1;
  }
  else if (param_3 == 0x62) {
    FUN_ram_400281ea(param_1,uVar9);
    *(undefined1 *)(iVar11 + 0x3006c121) = uVar1;
    *(undefined1 *)(iVar11 + 0x3006c125) = 1;
  }
  else {
    if (param_3 == 6) {
      FUN_ram_400281ea(param_1,uVar9);
      iVar7 = uVar3 * 0x180 + uVar9 * 0x18;
      *(undefined1 *)(iVar7 + 0x3006c126) = 1;
      *(undefined1 *)(iVar7 + 0x3006c122) = uVar1;
      if ((*(char *)(iVar7 + 0x3006c124) == '\0') || (*(char *)(iVar7 + 0x3006c125) == '\0'))
      goto LAB_ram_40028512;
      uVar5 = (uint)*(byte *)(iVar7 + 0x3006c120) << 7 | (uint)*(byte *)(iVar7 + 0x3006c121);
      iVar6 = FUN_ram_4002829a(uVar5,param_4);
      if (iVar6 != 0) {
        if (*(char *)(iVar7 + 0x3006c129) == '\0') {
          DAT_ram_3006c42a = DAT_ram_3006c42a + '\x01';
        }
        iVar8 = uVar3 * 0x180 + uVar9 * 0x18;
        *(undefined1 *)(iVar8 + 0x3006c129) = 1;
        *(undefined1 *)(iVar8 + 0x3006c128) = uVar1;
        *(int *)(iVar8 + 0x3006c12c) = param_1;
        uVar2 = FUN_ram_400042ea();
        *(undefined4 *)(iVar8 + 0x3006c130) = uVar2;
        iVar7 = FUN_ram_40004352(iVar6);
        iVar11 = 1;
        if (iVar7 != 0) {
          iVar11 = iVar7;
        }
        *(int *)(iVar8 + 0x3006c134) = iVar11;
        goto LAB_ram_40028512;
      }
      uVar1 = 0;
      if (*(char *)(iVar7 + 0x3006c127) != '\0') {
        uVar1 = *(undefined1 *)(iVar7 + 0x3006c123);
      }
      FUN_ram_400281c0(uVar10,param_1,*(undefined1 *)(iVar11 + 0x3006c120),
                       *(undefined1 *)(iVar11 + 0x3006c121),*(undefined1 *)(iVar7 + 0x3006c122),
                       uVar1);
    }
    else {
      if (param_3 != 0x26) {
        if (1 < (param_3 - 100 & 0xff)) {
          FUN_ram_400281ea(param_1,uVar9);
          goto LAB_ram_40028512;
        }
        FUN_ram_400281ea(param_1,uVar9);
        *(undefined2 *)(uVar9 * 0x18 + uVar3 * 0x180 + 0x3006c124) = 0;
        goto LAB_ram_40028452;
      }
      uVar5 = 0;
      do {
        if (uVar9 != uVar5) {
          FUN_ram_400281ea(param_1,uVar5);
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 != 0x10);
      iVar7 = uVar3 * 0x180 + uVar9 * 0x18;
      *(undefined1 *)(iVar7 + 0x3006c127) = 1;
      *(undefined1 *)(iVar7 + 0x3006c123) = uVar1;
      if (((*(char *)(iVar7 + 0x3006c124) == '\0') || (*(char *)(iVar7 + 0x3006c125) == '\0')) ||
         (*(char *)(iVar7 + 0x3006c126) == '\0')) goto LAB_ram_40028512;
      if (*(char *)(iVar7 + 0x3006c129) == '\0') {
        uVar1 = *(undefined1 *)(iVar7 + 0x3006c122);
      }
      else {
        param_1 = *(int *)(iVar7 + 0x3006c12c);
        uVar1 = *(undefined1 *)(iVar7 + 0x3006c128);
      }
      FUN_ram_400281c0(uVar10,param_1,*(undefined1 *)(iVar11 + 0x3006c120),
                       *(undefined1 *)(iVar11 + 0x3006c121),uVar1,param_4);
      iVar7 = uVar3 * 0x180 + uVar9 * 0x18;
      uVar5 = (uint)*(byte *)(iVar7 + 0x3006c121) | (uint)*(byte *)(iVar7 + 0x3006c120) << 7;
    }
    iVar7 = FUN_ram_40028296(uVar5);
    if (iVar7 == 0) goto LAB_ram_40028512;
  }
LAB_ram_40028452:
  FUN_ram_4002818c(iVar11 + 0x3006c120);
LAB_ram_40028512:
  uVar3 = thunk_FUN_ram_4002de68(uVar10,param_3,param_4,uVar3);
  return uVar3;
}


/* NanoCore 1.11, address 0x40028672.
 * REA evidence: ev_d64397b9acfe260cff855f9ba6613438ab27dd98403bcdd85da5e351d3c2560c
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
    if (DAT_ram_3006c42d == '\0') {
      if (0xf7 < uVar4) goto LAB_ram_400288e4;
LAB_ram_40028712:
      if ((char)bVar1 < '\0') {
        if (uVar4 == 0xf0) {
          FUN_ram_40028254(param_1);
          FUN_ram_4000504c(0x3006c438,0,2);
          DAT_ram_3006c42d = '\x01';
          _DAT_ram_3006c434 = param_1;
          _DAT_ram_3006c430 = FUN_ram_400042ea();
          *(undefined1 *)(iVar5 + 0x3006c420) = 0;
          *(undefined1 *)(iVar5 + 0x3006c423) = 0;
          *(undefined1 *)(iVar5 + 0x3006c424) = 0;
          FUN_ram_40013ed8(param_1 == 1);
          FUN_ram_400145b4(0xf0);
        }
        else {
LAB_ram_400287a8:
          *(byte *)(iVar5 + 0x3006c420) = bVar1;
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
          *(char *)(iVar5 + 0x3006c423) = cVar10;
          *(undefined1 *)(iVar5 + 0x3006c424) = 0;
          if (cVar10 == '\0') {
            nc_midi_dispatch_message(param_1,uVar4,0,0,0);
          }
        }
      }
      else {
        cVar10 = *(char *)(iVar5 + 0x3006c420);
        if ((cVar10 != '\0') && (bVar2 = *(byte *)(iVar5 + 0x3006c423), bVar2 != 0)) {
          bVar3 = *(byte *)(iVar5 + 0x3006c424);
          if (bVar3 < 2) {
            *(byte *)(iVar5 + 0x3006c424) = bVar3 + 1;
            *(byte *)(iVar5 + (uint)bVar3 + 0x3006c421) = bVar1;
          }
          if (bVar2 <= *(byte *)(iVar5 + 0x3006c424)) {
            if (bVar2 != 1) {
              uVar9 = *(undefined1 *)(iVar5 + 0x3006c422);
            }
            else {
              uVar9 = 0;
            }
            nc_midi_dispatch_message(param_1,cVar10,*(undefined1 *)(iVar5 + 0x3006c421),uVar9,bVar2 != 1);
            if ((*(byte *)(iVar5 + 0x3006c420) & 0xf0) == 0xf0) {
              *(undefined1 *)(iVar5 + 0x3006c420) = 0;
              *(undefined1 *)(iVar5 + 0x3006c423) = 0;
            }
LAB_ram_40028808:
            *(undefined1 *)(iVar5 + 0x3006c424) = 0;
          }
        }
      }
    }
    else {
      iVar6 = FUN_ram_400042ea();
      iVar7 = FUN_ram_40004352(0x50);
      if (iVar7 < iVar6 - _DAT_ram_3006c430) {
        FUN_ram_4002827e();
      }
      if (uVar4 < 0xf8) {
        if (DAT_ram_3006c42d == '\0') goto LAB_ram_40028712;
        if (param_1 == _DAT_ram_3006c434) {
          if ((((char)bVar1 < '\0') && (uVar4 != 0xf0)) && (uVar4 != 0xf7)) {
            FUN_ram_4002827e();
            goto LAB_ram_400287a8;
          }
          FUN_ram_40013ed8(param_1 == 1);
          FUN_ram_400145b4(uVar4);
          _DAT_ram_3006c430 = FUN_ram_400042ea();
          if (uVar4 == 0xf7) {
            FUN_ram_4002827e();
          }
        }
        else {
          if (*(char *)(uVar11 + 0x3006c438) == '\0') {
            if (uVar4 != 0xf0) goto LAB_ram_40028712;
            FUN_ram_40028254(param_1);
            *(undefined1 *)(uVar11 + 0x3006c438) = 1;
            *(undefined1 *)(iVar5 + 0x3006c420) = 0;
            *(undefined1 *)(iVar5 + 0x3006c423) = 0;
            goto LAB_ram_40028808;
          }
          if (uVar4 == 0xf7) {
            *(undefined1 *)(uVar11 + 0x3006c438) = 0;
          }
          else if (((char)bVar1 < '\0') && (uVar4 != 0xf0)) {
            *(undefined1 *)(uVar11 + 0x3006c438) = 0;
            goto LAB_ram_400287a8;
          }
        }
      }
      else {
LAB_ram_400288e4:
        uVar8 = FUN_ram_400042ea();
        FUN_ram_40024aa4(uVar13,uVar4,uVar8);
      }
    }
    param_2 = param_2 + 1;
    if (pbVar12 == param_2) {
      return;
    }
  } while( true );
}


