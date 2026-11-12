/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4002f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002f00a.
 * REA evidence: ev_3ea427453d2952371f7199e7b45b9fb731cb356ccabe9ae6a1938bbbb4633b92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002f00a(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined4 uVar4;
  
  memset(param_2 + 4,0,0xc);
  *param_2 = 0x54;
  param_2[1] = 0x58;
  param_2[2] = 0x4f;
  param_2[3] = 0x4b;
  uVar1 = *(undefined1 *)(param_1 + 10);
  uVar3 = *(undefined3 *)(param_1 + 8);
  uVar2 = *(undefined1 *)(param_1 + 0xb);
  param_2[4] = (char)*(undefined2 *)(param_1 + 8);
  param_2[5] = (char)((uint3)uVar3 >> 8);
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  uVar1 = *(undefined1 *)(param_1 + 0x2a);
  uVar3 = *(undefined3 *)(param_1 + 0x28);
  uVar2 = *(undefined1 *)(param_1 + 0x2b);
  param_2[8] = (char)*(undefined2 *)(param_1 + 0x28);
  param_2[10] = uVar1;
  param_2[9] = (char)((uint3)uVar3 >> 8);
  param_2[0xb] = uVar2;
  uVar4 = FUN_ram_4000755e(0,param_2,0xc);
  param_2[0xc] = (char)uVar4;
  param_2[0xd] = (char)((uint)uVar4 >> 8);
  param_2[0xe] = (char)((uint)uVar4 >> 0x10);
  param_2[0xf] = (char)((uint)uVar4 >> 0x18);
  return;
}


/* NanoCore 1.10, address 0x4002f0cc.
 * REA evidence: ev_fa9c1bcb3a50d8010fb8a105ab6508b553da89a2bb7871c918d7d4db6163d3b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002f0cc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                     undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  iVar1 = _DAT_ram_3007b1a4;
  iVar3 = iVar1;
  if (((_DAT_ram_3007b198 != 0) && (iVar3 = _DAT_ram_3007b198, _DAT_ram_3007b1a4 != 0)) &&
     (iVar4 = FUN_ram_4002edd8(_DAT_ram_3007b198,_DAT_ram_3007b1a4), iVar4 == 0)) {
    iVar3 = iVar1;
  }
  iVar4 = _DAT_ram_3007b7f4;
  if ((_DAT_ram_3007b7f4 != 0) && (iVar5 = FUN_ram_4002edd8(_DAT_ram_3007b7f4,iVar3), iVar5 != 0)) {
    iVar3 = iVar4;
  }
  iVar3 = iVar3 + 1;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  memset(param_1,0,0x650);
  param_1[3] = 0x58;
  param_1[6] = 0x40;
  uVar7 = (undefined1)((uint)iVar3 >> 8);
  param_1[9] = uVar7;
  uVar8 = (undefined1)((uint)iVar3 >> 0x10);
  param_1[10] = uVar8;
  param_1[0xd] = (char)((uint)param_2 >> 8);
  param_1[0xe] = (char)((uint)param_2 >> 0x10);
  param_1[0x11] = (char)((uint)iVar1 >> 8);
  param_1[0x12] = (char)((uint)iVar1 >> 0x10);
  uVar6 = _DAT_ram_3007b1a0;
  param_1[0x14] = (char)_DAT_ram_3007b1a0;
  param_1[0x15] = (char)((uint)uVar6 >> 8);
  param_1[0x17] = (char)((uint)uVar6 >> 0x18);
  param_1[0xc] = (char)param_2;
  param_1[0x10] = (char)iVar1;
  param_1[0x18] = (char)param_3;
  param_1[0x19] = (char)((uint)param_3 >> 8);
  param_1[1] = 0x53;
  param_1[2] = 0x54;
  param_1[0x16] = (char)((uint)uVar6 >> 0x10);
  param_1[0x1a] = (char)((uint)param_3 >> 0x10);
  *param_1 = 0x50;
  param_1[4] = 1;
  param_1[8] = (char)iVar3;
  uVar2 = (undefined1)((uint)iVar3 >> 0x18);
  param_1[0xb] = uVar2;
  param_1[0xf] = (char)((uint)param_2 >> 0x18);
  param_1[0x13] = (char)((uint)iVar1 >> 0x18);
  param_1[0x1b] = (char)((uint)param_3 >> 0x18);
  uVar6 = FUN_ram_4000755e(0,param_6,0x1000);
  param_1[0x1d] = (char)((uint)uVar6 >> 8);
  param_1[0x1e] = (char)((uint)uVar6 >> 0x10);
  param_1[0x1c] = (char)uVar6;
  param_1[0x24] = 0x14;
  param_1[0x1f] = (char)((uint)uVar6 >> 0x18);
  param_1[0x25] = 6;
  param_1[0x26] = param_4;
  param_1[0x27] = param_5;
  FUN_ram_4000305c(param_1 + 0x3c,0x3007b1dc,0x614);
  param_1[0x3e] = 0x52;
  param_1[0x3d] = 0x53;
  param_1[0x3c] = 0x54;
  param_1[0x3f] = 0x50;
  param_1[0x40] = 1;
  param_1[0x41] = 0;
  if (0x3f < CONCAT11(param_1[0x43],param_1[0x42])) {
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  }
  param_1[0x4c] = 0x32;
  param_1[0x4d] = 0x32;
  param_1[0x4e] = 0x54;
  param_1[0x44] = (char)iVar3;
  param_1[0x46] = uVar8;
  param_1[0x47] = uVar2;
  param_1[0x45] = uVar7;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4f] = 0x50;
  return;
}


/* NanoCore 1.10, address 0x4002f2fa.
 * REA evidence: ev_7d1cfc9c638ef0f745ccf5ddb6a686cc0feda90d20f0bbf2b15aa024315a814f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002f2fa(void)

{
  if (_DAT_ram_3007b1d4 != 0) {
    FUN_ram_40004ac8(0x3007b1a8);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002f312.
 * REA evidence: ev_34521cb100e897e112f1114fc8c02450e2469ebe7df06e3a54d9654e652cffcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002f312(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 0;
    while( true ) {
      if (param_2 == iVar1) {
        return 1;
      }
      if (*(char *)(param_1 + iVar1) != -1) break;
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002f332.
 * REA evidence: ev_e99766dcd4df7769e8c954488a2111415300cd960c02282287322111cb9640af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002f332(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_ram_4002f312(param_1,0x18);
    iVar2 = 1;
    if (iVar1 == 0) {
      iVar2 = 1 - (*(byte *)(param_1 + 6) & 1);
    }
    return iVar2;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002f35e.
 * REA evidence: ev_d1bc8e5613e879cdb22fa80948ca721e06c9fd5f56b8280ffdbe08496536de2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002f35e(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  iVar4 = FUN_ram_4002ee46();
  if ((iVar4 != 0) && (iVar4 = FUN_ram_4000755e(0,param_2,(short)param_1[1]), iVar4 == *param_1)) {
    uVar11 = (uint)*(ushort *)(param_1 + 1);
    iVar4 = FUN_ram_4002f312(param_2 + uVar11,0x400 - uVar11);
    if (iVar4 != 0) {
      uVar5 = 0;
      bVar3 = false;
      bVar2 = false;
      bVar10 = false;
      uVar8 = 0;
      while (uVar9 = uVar8 + 2, uVar9 <= uVar11) {
        bVar1 = *(byte *)(param_2 + uVar8);
        uVar6 = (uint)*(byte *)(uVar8 + param_2 + 1);
        uVar8 = uVar6 + uVar9;
        if (uVar11 < uVar8) {
          return 0;
        }
        if (bVar1 == 3) {
          if (bVar3) {
            return 0;
          }
          if (uVar6 != 8) {
            return 0;
          }
          bVar3 = true;
        }
        else if (bVar1 < 4) {
          if (bVar1 == 1) {
            if (bVar10) {
              return 0;
            }
            if (uVar6 != 2) {
              return 0;
            }
            bVar10 = true;
          }
          else if (bVar1 == 2) {
            if (bVar2) {
              return 0;
            }
            if (uVar6 != 0x10) {
              return 0;
            }
            bVar2 = true;
          }
        }
        else if (bVar1 == 0x10) {
          if (uVar6 < 5) {
            return 0;
          }
          uVar7 = (uint)*(byte *)(param_2 + uVar9 + 4);
          if (7 < *(byte *)(param_2 + uVar9)) {
            return 0;
          }
          uVar9 = 1 << (*(byte *)(param_2 + uVar9) & 0x1f);
          if ((uVar9 & uVar5) != 0) {
            return 0;
          }
          if (0xc < uVar7) {
            return 0;
          }
          if (uVar6 != ((uVar7 + 1) * 5 & 0xff)) {
            return 0;
          }
          uVar5 = uVar9 & 0xffff | uVar5;
        }
      }
      if ((((uVar11 == uVar8) && (bVar10)) && (bVar2)) &&
         (((bVar3 && (uVar5 == 0xff)) &&
          (iVar4 = FUN_ram_40014af4(param_3,param_2,uVar11), iVar4 == 0)))) {
        FUN_ram_4000305c(param_4,param_1,0x18);
        FUN_ram_4000305c(param_4 + 8,param_3 + 2,0x10);
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002f4da.
 * REA evidence: ev_d5dc02cb3483e7c41848a9d77552b89cd35c16157c541f1724c7f850e2eff6c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002f4da(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1) != '\0') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (param_2 != iVar1);
  return 1;
}


/* NanoCore 1.10, address 0x4002f4f0.
 * REA evidence: ev_dc659825b160426394c1393bbaff949bf588e0a0b537961bb34b898d9fa9c24b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002f4f0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1) != *(char *)(param_2 + iVar1)) {
      do {
        if (*(char *)(param_1 + iVar1) != -1) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x614);
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x614);
  return 1;
}


/* NanoCore 1.10, address 0x4002f52a.
 * REA evidence: ev_7e988c2997b2fb41fb7936e85caf1db76c1b4b84b962ee8918621dc90ecfef36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002f52a(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (0xffbe < (ushort)(*(short *)(param_1 + 6) - 0x40U)) {
    iVar1 = param_1 + 0x14;
    while ((iVar2 = FUN_ram_4002f332(iVar1), iVar2 != 0 ||
           (iVar2 = FUN_ram_4002ee46(iVar1), iVar2 != 0))) {
      iVar1 = iVar1 + 0x18;
      if (iVar1 == param_1 + 0x614) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002f586.
 * REA evidence: ev_f4a82800014e05add2baa944e30a024311cbc854ee0875531e954f4725a95b75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002f586(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4000755e(0,param_1,0x28);
  uVar1 = FUN_ram_4000755e(uVar1,&DAT_ram_40095464,4);
  FUN_ram_4000755e(uVar1,param_1 + 0x2c,0x624);
  return;
}


/* NanoCore 1.10, address 0x4002f5ba.
 * REA evidence: ev_c97ef87db04e35d3632d888a1aa1ae90c1fff901d7e39fea8850ab7993c82dcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002f5ba(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4000755e(0,param_1,0xc);
  uVar1 = FUN_ram_4000755e(uVar1,&DAT_ram_40095460,4);
  FUN_ram_4000755e(uVar1,param_1 + 0x10,0x604);
  return;
}


/* NanoCore 1.10, address 0x4002f5ec.
 * REA evidence: ev_9753b946be2a4f24706d6f56332590e5c3672cdd4261b357189210e90e7e51f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002f5ec(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_4002ee02();
  bVar1 = false;
  if (((iVar2 != 0) && (iVar2 = FUN_ram_4002f52a(param_1), bVar1 = false, iVar2 != 0)) &&
     (bVar1 = false, *(int *)(param_1 + 0x10) == 0x50543232)) {
    if (*(int *)(param_1 + 8) != 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar3 = FUN_ram_4002f5ba(param_1);
      bVar1 = iVar2 == iVar3;
    }
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4002f680.
 * REA evidence: ev_4131abec5cadab4378df993cee7f235592b65451cff68403b4720b3167a0e0c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002f680(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 0x58545350)) && ((short)param_1[1] == 1)) &&
     (((*(short *)((int)param_1 + 6) == 0x40 && (param_1[2] != 0)) &&
      ((param_1[4] == 0 || (iVar1 = FUN_ram_4002edd8(), iVar1 != 0)))))) {
    iVar1 = param_1[3];
    iVar2 = FUN_ram_4002edea(iVar1);
    if ((((iVar2 != 0) && (*(byte *)((int)param_1 + 0x26) < 0x40)) &&
        ((iVar1 == (*(byte *)((int)param_1 + 0x26) + 4 & 0xfc) << 10 &&
         (((((byte)(*(char *)((int)param_1 + 0x27) - 1U) < 2 && ((short)param_1[9] == 0x614)) &&
           (iVar1 = FUN_ram_4002f4da(param_1 + 0xb,0x10), iVar1 != 0)) &&
          ((iVar1 = param_1[10], iVar2 = FUN_ram_4002f586(param_1), iVar1 == iVar2 &&
           (iVar1 = FUN_ram_4002f5ec(param_1 + 0xf), iVar1 != 0)))))))) &&
       ((param_1[0x11] == param_1[2] && (param_1[0x12] == param_1[8])))) {
      if (*(char *)((int)param_1 + 0x27) == '\x01') {
        iVar1 = FUN_ram_4002ee46(param_1 + (uint)*(byte *)((int)param_1 + 0x26) * 6 + 0x14);
      }
      else {
        if (*(char *)((int)param_1 + 0x27) != '\x02') {
          return 1;
        }
        iVar1 = FUN_ram_4002f332(param_1 + (uint)*(byte *)((int)param_1 + 0x26) * 6 + 0x14);
      }
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002f888.
 * REA evidence: ev_2da571b6ab4b6f09761f7dee9b4fb1a4cbc64d0e1195fe5628aa50f3eeb8bd15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002f888(uint param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_4 == 0) {
    return 0xfffffffa;
  }
  iVar3 = FUN_ram_4002edea();
  uVar4 = 0xfffffffa;
  if ((iVar3 != 0) && (param_3 != 0)) {
    uVar2 = 0x1000;
    piVar1 = (int *)0x3007b1f0;
    uVar5 = 0;
    do {
      if (((((uVar5 & 0xff) < param_2) || ((int)(param_3 + param_2) <= (int)uVar5)) &&
          (param_1 <= uVar2)) &&
         ((uVar2 < param_1 + 0x1000 && (iVar3 = FUN_ram_4002f332(piVar1), iVar3 == 0)))) {
        iVar3 = FUN_ram_4002ee46(piVar1);
        if (iVar3 == 0) {
          return 0xfffffffd;
        }
        iVar6 = (param_4 - param_1) + uVar2;
        iVar3 = FUN_ram_4000755e(0,iVar6,(short)piVar1[1]);
        if (iVar3 != *piVar1) {
          return 0xfffffffd;
        }
        iVar3 = FUN_ram_4002f312((uint)*(ushort *)(piVar1 + 1) + iVar6,
                                 0x400 - (uint)*(ushort *)(piVar1 + 1));
        if (iVar3 == 0) {
          return 0xfffffffd;
        }
      }
      uVar5 = uVar5 + 1;
      piVar1 = piVar1 + 6;
      uVar2 = uVar2 + 0x400;
    } while (uVar5 != 0x40);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x4002f958.
 * REA evidence: ev_5e989df6c07bcd4d7f82ae5b6955239eb96e9fa759b3f79bd47f5258a3be1aaa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002f958(undefined4 *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002f332();
  if (iVar1 != 0) {
    memset(param_2,0,0x18);
    return;
  }
  iVar1 = FUN_ram_4002ee46(param_1);
  *(bool *)param_2 = iVar1 != 0;
  *(undefined2 *)((int)param_2 + 2) = *(undefined2 *)(param_1 + 1);
  *(undefined4 *)((int)param_2 + 4) = *param_1;
  FUN_ram_4000305c((int)param_2 + 8,param_1 + 2,0xf);
  *(undefined1 *)((int)param_2 + 0x17) = 0;
  return;
}


/* NanoCore 1.10, address 0x4002f9b2.
 * REA evidence: ev_02f3db1e3a74001d4b48d4c3d7aaf75098b2cd337a5da3c0b68e24879e8834ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002f9b2(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = 0;
  do {
    uVar4 = uVar4 ^ *(byte *)(param_1 + iVar2);
    cVar3 = '\b';
    do {
      cVar1 = (char)uVar4;
      uVar4 = (uVar4 & 0x7f) << 1;
      if (cVar1 < '\0') {
        uVar4 = uVar4 ^ 7;
      }
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xf);
  return uVar4;
}


/* NanoCore 1.10, address 0x4002f9e4.
 * REA evidence: ev_60fa9c8bacd73d978fd2d9e6076b2aff1839d5fa76f084de95c6f98362d5f0ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002f9e4(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  int *piVar15;
  char local_4c [4];
  uint local_48 [5];
  
  uVar9 = _DAT_ram_3007b1e2;
  if (0x3f < _DAT_ram_3007b1e2) {
    uVar9 = 0;
  }
  local_4c[0] = '\0';
  local_4c[1] = '\0';
  local_48[0] = 0x100;
  local_48[1] = 0x100;
  piVar4 = (int *)FUN_ram_40005666(0x1000);
  uVar9 = uVar9 & 0xff;
  uVar5 = 0xfffffffb;
  if (piVar4 != (int *)0x0) {
    iVar10 = 0;
    iVar2 = 0;
    uVar3 = 0;
    iVar12 = 0;
    bVar1 = false;
    iVar13 = 0;
    uVar5 = 0x16000;
    while (iVar6 = FUN_ram_4002ef6a(uVar5,piVar4,0x1000), iVar6 == 0x1000) {
      uVar11 = 0;
      piVar15 = piVar4;
      do {
        iVar6 = FUN_ram_4002f312(piVar15,0x10);
        if (iVar6 == 0) {
          if ((((*piVar15 == 0x504a5631) && (iVar6 = piVar15[1], iVar6 != 0)) &&
              (uVar14 = (ushort)*(byte *)(piVar15 + 2), uVar14 < 0x40)) &&
             ((iVar7 = FUN_ram_4002f4da((int)piVar15 + 9,6), iVar7 != 0 &&
              (uVar8 = FUN_ram_4002f9b2(piVar15), *(byte *)((int)piVar15 + 0xf) == uVar8)))) {
            if (bVar1) {
              if (iVar6 == iVar2) {
                FUN_ram_400056c4(piVar4);
                return 0xfffffffd;
              }
              iVar7 = FUN_ram_4002edd8(iVar6,iVar2);
              if (iVar7 != 0) {
                iVar2 = iVar6;
                uVar3 = uVar11;
                iVar12 = iVar13;
                uVar9 = uVar14;
              }
            }
            else {
              bVar1 = true;
              iVar2 = iVar6;
              uVar3 = uVar11;
              iVar12 = iVar13;
              uVar9 = uVar14;
            }
          }
          else {
            local_4c[iVar10] = '\x01';
          }
        }
        else if (local_48[iVar10] == 0x100) {
          local_48[iVar10] = uVar11;
        }
        uVar11 = uVar11 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar11 != 0x100);
      if (iVar10 != 0) {
        FUN_ram_400056c4(piVar4);
        if (bVar1) {
          _DAT_ram_3007b194 = uVar3 + 1;
          DAT_ram_3007b18f = (undefined1)iVar12;
          _DAT_ram_3007b190 = iVar2 + 1;
          if (_DAT_ram_3007b190 == 0) {
            _DAT_ram_3007b190 = 1;
          }
          DAT_ram_3007b18e = local_4c[iVar12] != '\0' || 0xff < _DAT_ram_3007b194;
          _DAT_ram_3007b1e2 = uVar9;
        }
        else {
          DAT_ram_3007b18f = 0;
          _DAT_ram_3007b194 = local_48[0];
          DAT_ram_3007b18e = (local_4c[0] != '\0' || local_4c[1] != '\0') || 0xff < local_48[0];
          _DAT_ram_3007b190 = iVar10;
        }
        DAT_ram_3007b18d = 1;
        return 0;
      }
      iVar10 = 1;
      iVar13 = 1;
      uVar5 = 0x17000;
    }
    FUN_ram_400056c4(piVar4);
    uVar5 = 0xfffffffc;
  }
  return uVar5;
}


/* NanoCore 1.10, address 0x4002fbf8.
 * REA evidence: ev_bdaefe0ca4c6459fb6af965d7afc6d73a83f13abaf532833f4a3e356f70d38fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fbf8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_120 [260];
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  while( true ) {
    uVar2 = 0x1000 - uVar1;
    if (0x100 < uVar2) {
      uVar2 = 0x100;
    }
    uVar3 = FUN_ram_4002ef6a(param_1 + uVar1,auStack_120,uVar2);
    if ((uVar3 != uVar2) ||
       (iVar4 = FUN_ram_40002ffc(auStack_120,param_2 + uVar1,uVar2), iVar4 != 0)) break;
    uVar1 = uVar1 + uVar2;
    if (0xfff < uVar1) {
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002fc7c.
 * REA evidence: ev_08ea244079634d3627a3487a5ac3f8432a6cbb9207f84ea9cab17a39014fb923
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_4002fc7c(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_40 [16];
  char local_30 [28];
  
  pcVar4 = local_40;
  if (param_2 == 0) {
    return '\x03';
  }
  iVar2 = FUN_ram_40005666(0x1000);
  if (iVar2 == 0) {
    return '\x05';
  }
  iVar3 = FUN_ram_4002ef6a(param_1,iVar2,0x1000);
  cVar1 = '\x04';
  if (iVar3 == 0x1000) {
    iVar3 = FUN_ram_4002f312(iVar2,0x1000);
    cVar1 = '\x01';
    if (iVar3 == 0) {
      FUN_ram_4000305c(param_2,iVar2,0x650);
      FUN_ram_4000305c(local_40,iVar2 + 0xff0,0x10);
      iVar3 = FUN_ram_4002f680(param_2);
      if (iVar3 != 0) {
        FUN_ram_4002f00a(param_2,local_30);
        iVar3 = FUN_ram_40002ffc(local_40,local_30,0x10);
        cVar1 = '\0';
        if (iVar3 == 0) goto LAB_ram_4002fd44;
      }
      iVar3 = FUN_ram_4002f312(iVar2 + 0xff0,0x10);
      cVar1 = '\x02';
      if (iVar3 == 0) {
        iVar3 = FUN_ram_4002f680(param_2);
        cVar1 = '\x03';
        if (iVar3 != 0) {
          FUN_ram_4002f00a(param_2,local_30);
          iVar3 = 0;
          do {
            if (*pcVar4 != local_30[iVar3]) {
              iVar3 = FUN_ram_4002f312(pcVar4,0x10 - iVar3);
              cVar1 = (iVar3 == 0) + '\x02';
              goto LAB_ram_4002fd44;
            }
            iVar3 = iVar3 + 1;
            pcVar4 = pcVar4 + 1;
          } while (iVar3 != 0x10);
          cVar1 = '\x03';
        }
      }
    }
  }
LAB_ram_4002fd44:
  FUN_ram_400056c4(iVar2);
  return cVar1;
}


/* NanoCore 1.10, address 0x4002fd5a.
 * REA evidence: ev_08853c643f7628edb0807c2cc3782180a44ca9be16b6beeb73ecd8ec3f8e66c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fd5a(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_120 [256];
  
  uVar4 = 0;
  uVar2 = 0;
  while( true ) {
    uVar1 = 0x1000 - uVar2;
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    uVar3 = FUN_ram_4002ef6a(param_1 + uVar2,auStack_120,uVar1);
    if (uVar3 != uVar1) break;
    uVar4 = FUN_ram_4000755e(uVar4,auStack_120,uVar1);
    uVar2 = uVar2 + uVar1;
    if (0xfff < uVar2) {
      *param_2 = uVar4;
      return 0;
    }
  }
  return 0xfffffffc;
}


/* NanoCore 1.10, address 0x4002fde6.
 * REA evidence: ev_b5a03a5696f449819e72fa9468de28a62d0460fbe36a564a337dab104f64a5aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fde6(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4002eede();
  if (iVar1 != 0) {
    if (((param_1 + 0x1000U <= *(uint *)(iVar1 + 0x38)) &&
        (iVar2 = FUN_ram_40006dcc(iVar1 + 0x1c), iVar2 != 0)) &&
       (*(code **)(iVar2 + 0x30) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4002fe1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(iVar2 + 0x30))(*(int *)(iVar1 + 0x34) + param_1,0x1000);
      return uVar3;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002fe2a.
 * REA evidence: ev_0497a107220b43c73b3626d931a49182fa226f9dac40f6a2ae531fc76384aa4e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fe2a(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *__s;
  
  iVar2 = FUN_ram_4002f5ec();
  uVar1 = 0xfffffffa;
  if (iVar2 != 0) {
    __s = (void *)FUN_ram_40005666(0x1000);
    uVar1 = 0xfffffffb;
    if (__s != (void *)0x0) {
      memset(__s,0xff,0x1000);
      FUN_ram_4000305c(__s,param_1,0x614);
      iVar2 = FUN_ram_4002fde6(0);
      if (((iVar2 < 0) || (iVar2 = FUN_ram_4002efba(0,__s,0x1000), iVar2 != 0x1000)) ||
         (iVar2 = FUN_ram_4002fbf8(0,__s), uVar1 = 0, iVar2 != 0)) {
        uVar1 = 0xfffffff8;
      }
      FUN_ram_400056c4(__s);
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4002fe9c.
 * REA evidence: ev_84d1d5b95ecebd91458d0d814a8876b352f0d4bd27c479a964ab2bc16fbcc73f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fe9c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_ram_4002edea();
    uVar2 = 0xfffffffa;
    if ((iVar1 != 0) &&
       (((iVar1 = FUN_ram_4002fde6(param_1), iVar1 < 0 ||
         (iVar1 = FUN_ram_4002efba(param_1,param_2,0x1000), iVar1 != 0x1000)) ||
        (iVar1 = FUN_ram_4002fbf8(param_1,param_2), uVar2 = 0, iVar1 != 0)))) {
      uVar2 = 0xfffffff8;
    }
    return uVar2;
  }
  return 0xfffffffa;
}


/* NanoCore 1.10, address 0x4002fee8.
 * REA evidence: ev_66e2b52526841412a06c032208e79173c84712ef680fd7c33571169690a15374
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002fee8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_120 [260];
  
  uVar2 = 0;
  while( true ) {
    if (param_2 <= uVar2) {
      return 1;
    }
    uVar1 = param_2 - uVar2;
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    uVar3 = FUN_ram_4002ef6a(uVar2 + param_1,local_120,uVar1);
    if (uVar3 != uVar1) break;
    uVar3 = 0;
    do {
      if (local_120[uVar3] != -1) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
    uVar2 = uVar2 + uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002ff72.
 * REA evidence: ev_d5d29e927f6d06f5c1363975b128c37afeaa21963d0319c35f60aeb25eb71b39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002ff72(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_634;
  undefined2 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  
  iVar4 = FUN_ram_4002ef38();
  if (iVar4 == 0) {
    iVar4 = 0x1000;
    bVar1 = false;
    do {
      iVar5 = FUN_ram_4002fde6(iVar4);
      if (iVar5 < 0) {
        iVar4 = -4;
        if (!bVar1) goto LAB_ram_400300ea;
        goto LAB_ram_40030154;
      }
      iVar5 = FUN_ram_4002fee8(iVar4,0x1000);
      if (iVar5 != 1) goto LAB_ram_40030154;
      iVar4 = iVar4 + 0x1000;
      bVar1 = true;
    } while (iVar4 != 0x18000);
    iVar4 = FUN_ram_4002fde6(0xaa000);
    if ((((iVar4 < 0) || (iVar4 = FUN_ram_4002fee8(0xaa000,0x1000), iVar4 != 1)) ||
        (iVar4 = FUN_ram_4002fde6(0xab000), iVar4 < 0)) ||
       (iVar4 = FUN_ram_4002fee8(0xab000,0x1000), iVar4 != 1)) {
LAB_ram_40030154:
      iVar4 = -4;
    }
    else {
      memset(&uStack_634,0,0x614);
      uStack_634 = 0x50525354;
      uStack_624 = 0x50543232;
      uStack_630 = 1;
      uStack_62c = 1;
      uStack_628 = FUN_ram_4002f5ba(&uStack_634);
      iVar4 = FUN_ram_4002fe2a(&uStack_634);
      if (iVar4 == 0) {
        FUN_ram_4000305c(0x3007b1dc,&uStack_634,0x614);
        _DAT_ram_3007b7f0 = 0;
        _DAT_ram_3007b7f4 = 0;
        _DAT_ram_3007b1a4 = uStack_62c;
        _DAT_ram_3007b1a0 = uStack_628;
        _DAT_ram_3007b198 = uStack_62c;
        DAT_ram_3007b18d = 1;
        DAT_ram_3007b18f = 0;
        DAT_ram_3007b18e = 0;
        _DAT_ram_3007b194 = 0;
        _DAT_ram_3007b190 = 1;
        _DAT_ram_3007b1d8 = 1;
      }
    }
    cVar2 = '\0';
    do {
      cVar3 = cVar2 + '\x01';
      FUN_ram_4002d92e(cVar2);
      cVar2 = cVar3;
    } while (cVar3 != '@');
    if (iVar4 != 0) {
LAB_ram_400300ea:
      memset((void *)0x3007b1dc,0,0x614);
      _DAT_ram_3007b1d8 = 5;
      if (iVar4 + 8U < 9) {
        _DAT_ram_3007b1d8 = (uint)*(byte *)(iVar4 + 0x40095454);
      }
      _DAT_ram_3007b7f0 = 0;
      _DAT_ram_3007b7f4 = 0;
      _DAT_ram_3007b1a4 = 0;
      _DAT_ram_3007b1a0 = 0;
      _DAT_ram_3007b198 = 0;
      DAT_ram_3007b18d = 0;
    }
  }
  else {
    _DAT_ram_3007b1d8 = 5;
    if (iVar4 + 8U < 9) {
      _DAT_ram_3007b1d8 = (uint)*(byte *)(iVar4 + 0x40095454);
    }
  }
  return iVar4;
}


