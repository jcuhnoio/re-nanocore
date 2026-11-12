/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4001b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4001b140.
 * REA evidence: ev_16994fc83b679f8cf335117c09a7be1887fc4e6f8002e8af3dd7811ed5ef47f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b140(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_54 [16];
  ushort uStack_44;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  
  DAT_ram_3006aec8 = 0;
  DAT_ram_3004ad20 = 0xffffffff;
  DAT_ram_3004ad24 = 0xffffffff;
  FUN_ram_40004f92(0x3006b0b0,0,0x1e);
  FUN_ram_40004f92(0x3006aecc,0,0x1e0);
  FUN_ram_4008dbe0(auStack_54);
  iVar4 = 0x3006aecc;
  uVar1 = 0;
  do {
    iVar2 = FUN_ram_4009232c(uVar1 & 0xff,auStack_40);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_4001af94(auStack_40,0x1000), iVar2 != 0)) {
      *(undefined1 *)(uVar1 + 0x3006b0b0) = 1;
      memcpy(iVar4,auStack_34,0x10);
      *(undefined1 *)(iVar4 + 0xf) = 0;
    }
    uVar1 = uVar1 + 1;
    iVar4 = iVar4 + 0x10;
  } while (uVar1 != 0x1e);
  uVar1 = (uint)uStack_44;
  if ((0x1d < uVar1) || (*(char *)(uVar1 + 0x3006b0b0) == '\0')) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (*(char *)(uVar3 + 0x3006b0b0) != '\0') break;
      uVar3 = uVar3 + 1;
      uVar1 = DAT_ram_3004ad20;
    } while (uVar3 != 0x1e);
  }
  DAT_ram_3004ad20 = uVar1;
  DAT_ram_3004ad24 = DAT_ram_3004ad20;
  DAT_ram_3006aec8 = 1;
  _DAT_ram_3006b0ac = FUN_ram_40093108();
  return;
}


/* NanoCore 1.12, address 0x4001b23c.
 * REA evidence: ev_0c450f2385c748ffe7e3ba47fec8634aaba7a99ebbec1db40a8baf4badb82f1a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b23c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    uVar1 = 0x6b;
  }
  else if (param_1 == 3) {
    uVar1 = 0x6c;
  }
  else if (param_1 == 1) {
    uVar1 = 0x6a;
  }
  else {
    uVar1 = 0x69;
  }
  FUN_ram_4002d6f8(uVar1);
  return;
}


/* NanoCore 1.12, address 0x4001b268.
 * REA evidence: ev_3faa5e0733549a2d12accbe9e5377eef33bc12acd734621868ef59f8f430b523
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b268(void)

{
  int iVar1;
  int iVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (_DAT_ram_3006ad50 != 0) {
    if (((_DAT_ram_3006aa18 == 0) || (_DAT_ram_3006ad2c == 0)) ||
       (iVar2 = FUN_ram_40043c8a(_DAT_ram_3006ad2c,1), iVar2 != 0)) {
      FUN_ram_400440ce(_DAT_ram_3006ad50,1);
      return;
    }
    FUN_ram_4004514a(_DAT_ram_3006ad2c,&local_30);
    FUN_ram_4004514a(_DAT_ram_3006aa18,&iStack_20);
    iVar1 = (iStack_24 - iStack_2c) + 5;
    iVar2 = (iStack_28 - local_30) + 5;
    FUN_ram_40045014(_DAT_ram_3006ad50,(local_30 - iStack_20) + -2,(iStack_2c - iStack_1c) + -2);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    FUN_ram_400450a2(_DAT_ram_3006ad50,iVar2,iVar1);
    FUN_ram_40043ba4(_DAT_ram_3006ad50,1);
  }
  return;
}


/* NanoCore 1.12, address 0x4001b31e.
 * REA evidence: ev_30625ce369d7100b0ee6996c5c6f3f6cf2cc2a5dcf7543603420f3b1a1dfebd3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b31e(void)

{
  int iVar1;
  
  if ((_DAT_ram_3006ad2c != 0) && (_DAT_ram_3006aa70 != 0)) {
    FUN_ram_400488f4(_DAT_ram_3006ad2c,0xc1,0);
    FUN_ram_400450a2(_DAT_ram_3006ad2c,0x200007d1);
    FUN_ram_40046078(_DAT_ram_3006ad2c);
    FUN_ram_400460be(_DAT_ram_3006ad2c,_DAT_ram_3006aa70,0x14,8,0);
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_ram_3006ad30 + iVar1 * 4) != 0) {
        FUN_ram_400488f4(*(int *)(&DAT_ram_3006ad30 + iVar1 * 4),0xc1,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
    FUN_ram_40017b64(_DAT_ram_3006ad2c,&DAT_ram_3006ad30);
  }
  FUN_ram_4001b268();
  return;
}


/* NanoCore 1.12, address 0x4001b3b2.
 * REA evidence: ev_3d1bfde7c050cc58f49fe301b10f6969ab6408e54fadc2b96de4de74574616b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001b3b2(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  FUN_ram_40004f92(param_3,0,0x14);
  *param_3 = 0;
  if ((7 < param_1) ||
     (puVar5 = (&PTR_DAT_ram_4009a0bc_ram_4009a43c)[param_1], puVar5 == (undefined *)0x0)) {
    return 0;
  }
  iVar3 = FUN_ram_40005162(puVar5,&DAT_ram_4009a0c0);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x3006aebc) != '\b') {
      return 0;
    }
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = 1;
    *(ulonglong *)(param_3 + 1) = (ulonglong)DAT_ram_4009a324;
    uVar1 = DAT_ram_4009a328;
  }
  else {
    iVar3 = FUN_ram_40005162(puVar5,s_delay_ram_4009a0c8);
    if (iVar3 == 0) {
      bVar2 = *(byte *)(param_1 + 0x3006aebc);
      if (7 < bVar2) {
        return 0;
      }
      if (bVar2 == 3) {
        if (param_2 != 2) {
          return 0;
        }
        uVar6 = (ulonglong)DAT_ram_4009a32c;
        *param_3 = 2;
        *(ulonglong *)(param_3 + 1) = uVar6;
        uVar6 = (ulonglong)DAT_ram_4009a330;
        param_3[3] = &DAT_ram_4009a388;
        *(ulonglong *)(param_3 + 2) = uVar6;
        uVar4 = 0x1c;
      }
      else {
        if (bVar2 != 5) {
          return 0;
        }
        if (param_2 != 2) {
          return 0;
        }
        uVar6 = (ulonglong)DAT_ram_40099f30;
        *param_3 = 2;
        *(ulonglong *)(param_3 + 1) = uVar6;
        uVar6 = (ulonglong)DAT_ram_40099f58;
        param_3[3] = &DAT_ram_4009a3f8;
        *(ulonglong *)(param_3 + 2) = uVar6;
        uVar4 = 0x11;
      }
      *(undefined1 *)(param_3 + 4) = uVar4;
      return 1;
    }
    iVar3 = FUN_ram_40005162(puVar5,&DAT_ram_4009a0d0);
    uVar1 = DAT_ram_4009673c;
    if (iVar3 != 0) {
      return 0;
    }
    if (1 < (byte)(*(char *)(param_1 + 0x3006aebc) - 3U)) {
      return 0;
    }
    if (param_2 != 2) {
      return 0;
    }
    *param_3 = 1;
    param_3[1] = 0;
  }
  *(ulonglong *)(param_3 + 2) = (ulonglong)uVar1;
  return 1;
}


/* NanoCore 1.12, address 0x4001b4fe.
 * REA evidence: ev_581788df98e61d529fd67d4b891e8be84643d3e1a6d8cb4722928183153a6cac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001b4fe(float param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [28];
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009672c < param_1) {
    param_1 = DAT_ram_4009672c;
  }
  iVar1 = (int)(param_1 * DAT_ram_40099f28 + DAT_ram_4009675c);
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  iVar2 = FUN_ram_4001b3b2(param_2,param_3,auStack_24);
  if (iVar2 != 0) {
    uVar3 = FUN_ram_4001aa8e(auStack_24,iVar1);
    iVar1 = FUN_ram_4001ab50(auStack_24,uVar3);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4001b576.
 * REA evidence: ev_759eeca979dc979c765e0347ea0459890efbe553b82eac6ccbb814568d9b2464
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b576(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3006b1a8;
  if ((7 < param_1) || (param_2 == 0xc)) {
    return;
  }
  (&DAT_ram_3006b148)[param_2 + param_1 * 0xc] = 1;
  if (iVar1 != 0) {
    FUN_ram_4004c912(iVar1,0x78);
    FUN_ram_4004c934(_DAT_ram_3006b1a8,1);
    FUN_ram_4004c938(_DAT_ram_3006b1a8);
    return;
  }
  _DAT_ram_3006b1a8 = FUN_ram_4004c6ac(FUN_ram_4001ad42,0x78,0);
  if (_DAT_ram_3006b1a8 != 0) {
    FUN_ram_4004c934(_DAT_ram_3006b1a8,1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001b5ee.
 * REA evidence: ev_40b0ecdfbbf88c13d20ed3bfb327f14eb9361aa0761ae0e67db0c4321ab273e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4001b5ee(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 0) {
    return 0;
  }
  uVar1 = param_1 + (uint)DAT_ram_3006acf4 * 5 & 0xffff;
  iVar2 = FUN_ram_40025c22(_DAT_ram_3006aa24);
  if (0xb < uVar1) {
    uVar1 = 0xb;
  }
  if (iVar2 != 0xff) {
    uVar3 = FUN_ram_4001ad18(_DAT_ram_3006aa24);
    uVar1 = FUN_ram_40027042(iVar2,uVar3,uVar1 & 0xff,1);
    return uVar1;
  }
  return uVar1 & 0xff;
}


/* NanoCore 1.12, address 0x4001b66a.
 * REA evidence: ev_e285b6d572394e09ffbd8fec723f2b6ef73756ce45d1bc0154465a110a47f13a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b6d0) */

void FUN_ram_4001b66a(uint param_1,uint param_2)

{
  int iVar1;
  
  if (((param_1 < 8) && (param_2 < 5)) && ((param_2 & 0xff) < (uint)DAT_ram_3006ad5c)) {
    iVar1 = FUN_ram_4001b5ee(param_2);
    if (*(int *)(&DAT_ram_3006ac60 + param_2 * 4) == 0) {
      return;
    }
    FUN_ram_40056f8a(*(int *)(&DAT_ram_3006ac60 + param_2 * 4),
                     ((uint)*(ushort *)((iVar1 + param_1 * 0xc) * 2 + 0x3006adfc) * 0xa8c) / 1000);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001b6e4.
 * REA evidence: ev_4d9a6a965a9503367ce8f80bb6a1904e8a66833150c243221535096330b89f19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b6e4(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = _DAT_ram_3006aa24;
  if (_DAT_ram_3006aa24 == (undefined *)0x0) {
    puVar2 = &DAT_ram_4009acc0;
  }
  iVar3 = FUN_ram_4001ad02(puVar2);
  iVar1 = 0;
  if (-1 < iVar3) {
    for (; iVar1 < (int)(uint)DAT_ram_3006ad5c; iVar1 = iVar1 + 1) {
      FUN_ram_4001b66a(iVar3,iVar1);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4001b730.
 * REA evidence: ev_d6d1ffd4eb0e05dd9bac8cf219fa59c6c9bf4c0c049486cf248461c40b927d02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b730(uint param_1)

{
  uint uVar1;
  
  if (7 < param_1) {
    return;
  }
  if ((_DAT_ram_3006b144 != 0) && ((int)param_1 < _DAT_ram_3006b140)) {
    FUN_ram_4001af3a(*(undefined4 *)(_DAT_ram_3006b144 + param_1 * 4),
                     *(undefined1 *)(param_1 + 0x3006adf4));
  }
  uVar1 = FUN_ram_4001ad02(_DAT_ram_3006aa24);
  if (param_1 == uVar1) {
    FUN_ram_4001af3a(_DAT_ram_3006aa70,*(undefined1 *)(param_1 + 0x3006adf4));
    FUN_ram_4001af50();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001b7a4.
 * REA evidence: ev_e73b42d44066efefc82220290fa0409e2b9b87ed92cebdd3a92c095e9c57b41c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b7a4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_3006b140;
  if (8 < _DAT_ram_3006b140) {
    iVar2 = 8;
  }
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    FUN_ram_4001b730(iVar1);
  }
  return;
}


/* NanoCore 1.12, address 0x4001b7d6.
 * REA evidence: ev_f89c7dd2863046001a27dcf1c8c7634949df4a8a65214baa875276e2fbfd410b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b7d6(uint param_1,undefined1 param_2)

{
  if (param_1 < 8) {
    *(undefined1 *)(param_1 + 0x3006adf4) = param_2;
    FUN_ram_4002330a();
    FUN_ram_4001b730(param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001b802.
 * REA evidence: ev_c5a1e7de29ee27d41cad8cae19eba11d7273c1814f68efa50d413c69e4acc3d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b89e) */
/* WARNING: Removing unreachable block (ram,0x4001b8de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b802(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_4c [4];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar6 = *(int *)(param_1 * 4 + 0x3006aa74);
  iVar10 = *(int *)(param_1 * 4 + 0x3006aa88);
  iVar11 = iVar6 + 0x14;
  iVar3 = DAT_ram_3004ad30;
  if (DAT_ram_3004ad30 < 1) {
    iVar3 = 0x28;
  }
  if (*(int *)(&DAT_ram_3006ac60 + param_1 * 4) != 0) {
    FUN_ram_40045014(*(int *)(&DAT_ram_3006ac60 + param_1 * 4),iVar6,iVar10);
    FUN_ram_400450a2(*(undefined4 *)(&DAT_ram_3006ac60 + param_1 * 4),0x28,0x28);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x2800 / iVar3;
    }
    FUN_ram_40056f64(*(undefined4 *)(&DAT_ram_3006ac60 + param_1 * 4),iVar3);
  }
  if (*(int *)(&DAT_ram_3006ab3c + param_1 * 4) != 0) {
    iVar3 = FUN_ram_4004515c();
    iVar6 = FUN_ram_40045168(*(undefined4 *)(&DAT_ram_3006ab3c + param_1 * 4));
    FUN_ram_40045014(*(undefined4 *)(&DAT_ram_3006ab3c + param_1 * 4),iVar11 - iVar3 / 2,
                     (iVar10 - iVar6) + -2);
    FUN_ram_40017b64(*(undefined4 *)(&DAT_ram_3006ab3c + param_1 * 4),param_1 * 0x20 + 0x3006aa9c);
  }
  if (*(int *)(&DAT_ram_3006ac4c + param_1 * 4) != 0) {
    iVar3 = FUN_ram_4004515c();
    FUN_ram_40045014(*(undefined4 *)(&DAT_ram_3006ac4c + param_1 * 4),iVar11 - iVar3 / 2,
                     iVar10 + 0x2c);
    FUN_ram_40017b64(*(undefined4 *)(&DAT_ram_3006ac4c + param_1 * 4),param_1 * 0x20 + 0x3006abac);
  }
  if (((param_1 < 5) && (_DAT_ram_3006aa18 != 0)) &&
     (iVar3 = *(int *)(&DAT_ram_3006ab50 + param_1 * 4), iVar3 != 0)) {
    bVar1 = false;
    local_4c[0] = *(int *)(&DAT_ram_3006ac60 + param_1 * 4);
    iVar12 = 0;
    local_4c[1] = *(undefined4 *)(&DAT_ram_3006ab3c + param_1 * 4);
    local_4c[2] = *(undefined4 *)(&DAT_ram_3006ac4c + param_1 * 4);
    iVar6 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar9 = 0;
    do {
      iVar13 = local_4c[iVar12];
      iVar2 = iVar6;
      iVar4 = iVar10;
      iVar7 = iVar11;
      iVar8 = iVar9;
      if ((iVar13 != 0) && (iVar5 = FUN_ram_40043c8a(iVar13,1), iVar5 == 0)) {
        FUN_ram_4004514a(iVar13,local_4c + 3);
        iVar2 = iStack_38;
        iVar4 = iStack_34;
        iVar7 = local_4c[3];
        iVar8 = iStack_3c;
        if (bVar1) {
          if (local_4c[3] < iVar11) {
            iVar11 = local_4c[3];
          }
          if (iStack_3c < iVar9) {
            iVar9 = iStack_3c;
          }
          if (iVar6 < iStack_38) {
            iVar6 = iStack_38;
          }
          iVar2 = iVar6;
          iVar4 = iVar10;
          iVar7 = iVar11;
          iVar8 = iVar9;
          if (iVar10 < iStack_34) {
            iVar4 = iStack_34;
          }
        }
        bVar1 = true;
      }
      iVar12 = iVar12 + 1;
      iVar6 = iVar2;
      iVar10 = iVar4;
      iVar11 = iVar7;
      iVar9 = iVar8;
    } while (iVar12 != 3);
    if (!bVar1) {
      FUN_ram_400440ce(iVar3,1);
      return;
    }
    FUN_ram_4004514a(_DAT_ram_3006aa18,local_4c + 3);
    FUN_ram_40045014(iVar3,iVar7 - local_4c[3],iVar8 - iStack_3c);
    FUN_ram_400450a2(iVar3,(iVar2 - iVar7) + 1,(iVar4 - iVar8) + 1);
    FUN_ram_40043ba4(iVar3,1);
  }
  return;
}


/* NanoCore 1.12, address 0x4001ba22.
 * REA evidence: ev_f11f4b0fb5122faa6b22850c34f8d655c075f2ca239bb0385fbfcd6b703aafda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001ba22(float param_1,undefined4 param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009672c < param_1) {
    param_1 = DAT_ram_4009672c;
  }
  FUN_ram_40005520(param_2,0x18,&DAT_ram_4009a214,
                   (int)(param_1 * DAT_ram_40096780 + DAT_ram_4009675c));
  return;
}


/* NanoCore 1.12, address 0x4001ba6a.
 * REA evidence: ev_c8ef31cf5b94507b2de55ea9665de0402ae6994b88752646e2cdd01feb3d1138
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001ba6a(undefined4 param_1,undefined4 param_2,char *param_3)

{
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    FUN_ram_40005520(param_1,0x18,&DAT_ram_4009a218,param_2,param_3);
    return;
  }
  FUN_ram_40005520(param_1,0x18,&DAT_ram_4009a668,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4001ba96.
 * REA evidence: ev_58cd00e675a40d00324dfe6a5568c9920d6bdd5eb22de8a5030f4706e6f6ea7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001ba96(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_20 [20];
  
  FUN_ram_40005520(auStack_20,0x10,&DAT_ram_4009a220,param_2);
  FUN_ram_4001ba6a(param_1,auStack_20,param_3);
  return;
}


/* NanoCore 1.12, address 0x4001bac8.
 * REA evidence: ev_e56e66dc58735b68a3dbcc2eeb009de1a281eaf846e7fca24095e943c2a1c94d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001baf2) */
/* WARNING: Removing unreachable block (ram,0x4001bb00) */

void FUN_ram_4001bac8(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_24 [24];
  
  pcVar2 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  if ((int)param_2 < 0) {
    pcVar2 = s_PRE___ram_4009c24c + 4;
  }
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  FUN_ram_40005520(auStack_24,0x14,s__s_ld__ld_ram_4009a224,pcVar2,iVar1 / 10,iVar1 % 10);
  FUN_ram_4001ba6a(param_1,auStack_24,param_3);
  return;
}


/* NanoCore 1.12, address 0x4001bb1e.
 * REA evidence: ev_3bdba3043ddb7b5ebabec1b88fe07ec33040870464a5fc4bcc0753a032d430bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001bb4a) */
/* WARNING: Removing unreachable block (ram,0x4001bb58) */

void FUN_ram_4001bb1e(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_24 [24];
  
  pcVar2 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  if ((int)param_2 < 0) {
    pcVar2 = s_PRE___ram_4009c24c + 4;
  }
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  FUN_ram_40005520(auStack_24,0x14,s__s_ld__02ld_ram_4009a230,pcVar2,iVar1 / 100,iVar1 % 100);
  FUN_ram_4001ba6a(param_1,auStack_24,param_3);
  return;
}


/* NanoCore 1.12, address 0x4001bb76.
 * REA evidence: ev_6291e18dcd0fac90de7250be7821e43481dc75c66220da1b1b923dea43dbbeaa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001bc68) */
/* WARNING: Removing unreachable block (ram,0x4001bc48) */
/* WARNING: Removing unreachable block (ram,0x4001bc56) */
/* WARNING: Removing unreachable block (ram,0x4001bbcc) */
/* WARNING: Removing unreachable block (ram,0x4001bc76) */
/* WARNING: Removing unreachable block (ram,0x4001bbda) */

void FUN_ram_4001bb76(float param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_30 [24];
  
  uVar1 = FUN_ram_4001aa2e();
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  pcVar5 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  if ((int)uVar1 < 0) {
    pcVar5 = s_PRE___ram_4009c24c + 4;
  }
  if (param_1 < DAT_ram_40099f28) {
    if (DAT_ram_40096780 <= param_1) {
      iVar6 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
      pcVar4 = s__s_ld_ram_4009a250;
      goto LAB_ram_4001bc0a;
    }
    if (param_1 < DAT_ram_40099f38) {
      iVar6 = FUN_ram_4001aa2e(param_1 * DAT_ram_40096780);
      iVar2 = iVar6 % 100;
      pcVar4 = s__s_ld__02ld_ram_4009a230;
      iVar6 = iVar6 / 100;
    }
    else {
      iVar6 = FUN_ram_4001aa2e(param_1 * DAT_ram_40099f38);
      iVar2 = iVar6 % 10;
      pcVar4 = s__s_ld__ld_ram_4009a224;
      iVar6 = iVar6 / 10;
    }
  }
  else {
    iVar2 = FUN_ram_4001aa2e(param_1 / DAT_ram_40096780);
    iVar6 = iVar2 / 10;
    pcVar4 = s__s_ldk_ram_4009a23c;
    iVar2 = iVar2 % 10;
    if (iVar2 == 0) {
LAB_ram_4001bc0a:
      FUN_ram_40005520(auStack_30,0x10,pcVar4,pcVar5,iVar6);
      goto LAB_ram_4001bc12;
    }
    pcVar4 = &DAT_ram_4009a244;
  }
  FUN_ram_40005520(auStack_30,0x10,pcVar4,pcVar5,iVar6,iVar2);
LAB_ram_4001bc12:
  uVar3 = FUN_ram_4002d6f8(0x6d);
  FUN_ram_4001ba6a(param_2,auStack_30,uVar3);
  return;
}


/* NanoCore 1.12, address 0x4001bcbc.
 * REA evidence: ev_48fa13b3456d36bc66adcce7a20a44d20315c7f3e5b651114c2ad5aaffb6a458
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4001bcbc(uint param_1)

{
  int iVar1;
  
  if (DAT_ram_3006a744 == '\0') {
    FUN_ram_4001bd36(param_1,0,FUN_ram_4001bd36);
    if ((0x1d < param_1) || (*(char *)(param_1 + 0x3006a9ac) == '\0')) {
      return param_1;
    }
  }
  else if ((0x1d < param_1) || (*(char *)(param_1 + 0x3006a9ac) == '\0')) {
    return param_1;
  }
  if (param_1 < 0x1e) {
    if (DAT_ram_3006a744 == '\0') {
      FUN_ram_4001bd36();
    }
    iVar1 = FUN_ram_4000c968(param_1 & 0xff);
    if (iVar1 == 0) {
      DAT_ram_3004ad00 = param_1;
      DAT_ram_3004ad04 = param_1;
      if ((_DAT_ram_3006aa24 != 0) &&
         (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009acc0,0x10), iVar1 == 0)) {
        FUN_ram_4001c1cc(_DAT_ram_3006aa24);
        return 0;
      }
      return 0;
    }
    FUN_ram_4001bd36();
    DAT_ram_3004ad00 = DAT_ram_3004acfc;
    if ((_DAT_ram_3006aa24 != 0) &&
       (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009acc0,0x10), iVar1 == 0)) {
      FUN_ram_4001c1cc(_DAT_ram_3006aa24);
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4001bd04.
 * REA evidence: ev_4a46bca001f15adef4d2cc11f3b1679b7e20acbb12ca6a50aa14c566de76518e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001bd04(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = FUN_ram_40025c22();
  if (iVar1 != 0xff) {
    FUN_ram_40023784(CONCAT44(uStack_10,param_1),iVar1,param_3);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001bd36.
 * REA evidence: ev_64a3405ee7e187e24bcca9b7ba32926307ae40a4cd34d85dcfd9ea929b923e6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001bd36(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  
  DAT_ram_3006a744 = 0;
  DAT_ram_3004acfc = 0xffffffff;
  DAT_ram_3004ad00 = 0xffffffff;
  FUN_ram_40004f92(0x3006a9ac,0,0x26);
  FUN_ram_40004f92(0x3006a748,0,0x260);
  iVar4 = 0x3006a748;
  uVar1 = 0;
  do {
    iVar2 = FUN_ram_40093110(uVar1 & 0xff,auStack_40);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_4001af94(auStack_40,0x3000), iVar2 != 0)) {
      *(undefined1 *)(uVar1 + 0x3006a9ac) = 1;
      memcpy(iVar4,auStack_34,0x10);
      *(undefined1 *)(iVar4 + 0xf) = 0;
    }
    uVar1 = uVar1 + 1;
    iVar4 = iVar4 + 0x10;
  } while (uVar1 != 0x1e);
  uVar1 = FUN_ram_4000bb70();
  if (((0x1d < uVar1) || (*(char *)(uVar1 + 0x3006a9ac) == '\0')) &&
     (uVar1 = DAT_ram_3004acfc, (int)DAT_ram_3004acfc < 0)) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (*(char *)(uVar3 + 0x3006a9ac) != '\0') break;
      uVar3 = uVar3 + 1;
      uVar1 = DAT_ram_3004acfc;
    } while (uVar3 != 0x1e);
  }
  DAT_ram_3004acfc = uVar1;
  DAT_ram_3004ad00 = DAT_ram_3004acfc;
  DAT_ram_3006a744 = 1;
  _DAT_ram_3006a9a8 = FUN_ram_40093102();
  return;
}


/* NanoCore 1.12, address 0x4001be40.
 * REA evidence: ev_965d8f309f9d57db9516ac3846dadc9d202de616002ecac411c90c41bed98528
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001be40(uint param_1)

{
  int iVar1;
  
  if (param_1 < 8) {
    if (param_1 == 4) {
      param_1 = 2;
    }
  }
  else {
    param_1 = 6;
  }
  iVar1 = 0;
  do {
    if ((byte)(&DAT_ram_4009a45c)[iVar1] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 7);
  return 0;
}


/* NanoCore 1.12, address 0x4001be72.
 * REA evidence: ev_5f501bb9f26d5042c9396a6d9c301d57e9cd87d93c188943a8cd7f6d6d793f5b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4001be72(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_3006aa70;
  if (param_1 == 0) goto LAB_ram_4001be82;
  if (DAT_ram_3006ad54 == '\0') {
    if (param_1 == -1) {
LAB_ram_4001bea6:
      iVar2 = _DAT_ram_3006ad2c;
      if ((_DAT_ram_3006ad50 != 0) &&
         (iVar1 = FUN_ram_40043c8a(_DAT_ram_3006ad50,1), iVar2 = _DAT_ram_3006ad2c, iVar1 == 0)) {
        iVar2 = _DAT_ram_3006ad50;
      }
      goto LAB_ram_4001be82;
    }
    iVar1 = 1;
  }
  else {
    if (param_1 == 1) goto LAB_ram_4001bea6;
    iVar1 = 2;
  }
  iVar2 = _DAT_ram_3006aa6c;
  if (param_1 != iVar1) {
    iVar2 = FUN_ram_4001ac48();
    if ((uint)DAT_ram_3006ad5c <= (uint)(param_1 - iVar2)) {
      return 0;
    }
    iVar2 = *(int *)(&DAT_ram_3006ac60 + (param_1 - iVar2) * 4);
  }
LAB_ram_4001be82:
  if ((iVar2 != 0) && (iVar1 = FUN_ram_40043c8a(iVar2,1), iVar1 == 0)) {
    return iVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4001bf0a.
 * REA evidence: ev_9e431783208a371d0ef53778b6dc8a70cfeb1570ae4c8305efa68170749b6840
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001bf0a(void)

{
  int iVar1;
  undefined3 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (DAT_ram_3006a9d2 == '\0') {
    return;
  }
  iVar3 = FUN_ram_4001ac48();
  iVar1 = _DAT_ram_3006ad28;
  uVar5 = (uint)DAT_ram_3006ad5c;
  iVar7 = 0;
  do {
    bVar6 = iVar7 < (int)uVar5 && iVar7 + iVar3 == iVar1;
    if ((bool)*(char *)(iVar7 + 0x3006aba4) != bVar6) {
      *(bool *)(iVar7 + 0x3006aba4) = bVar6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 5);
  if (DAT_ram_3006ad24 == '\0') {
    iVar3 = FUN_ram_4001ac0e();
    if (iVar3 == 0) {
      FUN_ram_4001be72(iVar1);
      FUN_ram_40018184();
      uVar2 = FUN_ram_400170ea(DAT_ram_3006aa1c);
      FUN_ram_40018310(uVar2);
    }
    else {
      FUN_ram_40018184(0);
    }
  }
  iVar1 = _DAT_ram_3006ad2c;
  uVar5 = 0;
  if (DAT_ram_3006aa1c != '\0') {
    uVar5 = (uint)(_DAT_ram_3006aa20 == 100);
  }
  if ((int)DAT_ram_3004ad08 != uVar5) {
    DAT_ram_3004ad08 = (char)uVar5;
    if (_DAT_ram_3006ad2c != 0) {
      if ((DAT_ram_3006aa1c == '\0') || (_DAT_ram_3006aa20 != 100)) {
        uVar2 = FUN_ram_4001709e();
      }
      else {
        uVar2 = 0xff0000;
      }
      FUN_ram_40048aae(iVar1,uVar2,0);
    }
    iVar1 = 0;
    do {
      iVar3 = *(int *)(&DAT_ram_3006ab3c + iVar1 * 4);
      if (iVar3 != 0) {
        uVar4 = FUN_ram_4001709e();
        uStack_2c = CONCAT22(CONCAT11(uStack_2c._3_1_,(char)((uint)uVar4 >> 0x10)),(short)uVar4);
        FUN_ram_40048aae(iVar3,uStack_2c,0);
        iVar3 = *(int *)(&DAT_ram_3006ac4c + iVar1 * 4);
        if (iVar3 != 0) {
          uVar4 = FUN_ram_4001709e();
          uStack_30 = CONCAT22(CONCAT11(uStack_30._3_1_,(char)((uint)uVar4 >> 0x10)),(short)uVar4);
          FUN_ram_40048aae(iVar3,uStack_30,0);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 5);
  }
  return;
}


