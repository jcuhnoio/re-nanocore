/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40027000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40027bbc.
 * REA evidence: ev_97cb91ad55dc8d7fbcdba28a0fb22c62e2ed8d2a6d281d72a81b1e67bcc6d889
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40027bbc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((0 < param_3) && (param_4 != 0)) {
    if (param_2 == 0) {
      return param_1;
    }
    if ((param_1 < 0) || (param_3 <= param_1)) {
      param_1 = 0;
    }
    iVar1 = 0;
    do {
      param_1 = param_1 + param_2;
      if (param_1 < 0) {
        param_1 = param_3 + -1;
      }
      else if (param_3 <= param_1) {
        param_1 = 0;
      }
      if (*(char *)(param_4 + param_1) != '\0') {
        return param_1;
      }
      iVar1 = iVar1 + 1;
    } while (param_3 != iVar1);
  }
  return -1;
}


/* NanoCore 1.10, address 0x40027bf2.
 * REA evidence: ev_a9482780522656b93b8114bca039e7f4a71aae7ad3d3f22d644cba927ea74504
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40027bf2(int param_1,uint param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_5 != (int *)0x0) {
    if (param_2 == 0) {
      return 0;
    }
    if ((0 < param_3) && (param_4 != 0)) {
      uVar4 = 1;
      if ((int)param_2 < 1) {
        uVar4 = 0xffffffff;
      }
      iVar2 = ((int)param_2 >> 0x1f ^ param_2) - ((int)param_2 >> 0x1f);
      iVar1 = 0;
      while ((iVar2 = iVar2 + -1, iVar2 != -1 &&
             (iVar3 = FUN_ram_40027bbc(param_1,uVar4), -1 < iVar3))) {
        iVar1 = 1;
        param_1 = iVar3;
      }
      if (iVar1 == 0) {
        return 0;
      }
      *param_5 = param_1;
      return iVar1;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x40027c66.
 * REA evidence: ev_7cbd2892e248a02fe196698e0ee23e0678522f776482dafdc73c3ccaf27eb7c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027c66(undefined2 *param_1)

{
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = 0x6400;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40027c7c.
 * REA evidence: ev_2a6e6dd8ea3cc4ea92ebc21aa418166f428da2d81cec855fc93661d6b2f63230
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027c7c(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  iVar1 = FUN_ram_400042fa();
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = FUN_ram_40004362(300);
  if (*param_1 != '\0') {
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    if ((iVar1 - iVar4) - iVar2 < 0) goto LAB_ram_40027cba;
  }
  *(int *)(param_1 + 4) = iVar1;
LAB_ram_40027cba:
  *param_1 = '\x01';
  cVar3 = '\0';
  if ((-1 < param_2) && (cVar3 = 'd', param_2 < 0x65)) {
    cVar3 = (char)param_2;
  }
  param_1[1] = cVar3;
  iVar2 = FUN_ram_40004362(700);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 8) = iVar2 + iVar1;
  return;
}


/* NanoCore 1.10, address 0x40027cfa.
 * REA evidence: ev_2db7da57b0c1879ce3edbadbc8799f7439fb61321cf9873390becd86cd4d3bb9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027cfa(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40027d02.
 * REA evidence: ev_13ba012e31210d8927a1d6a15c8a297b3c0ec46c75bdcdab885b68cfacad3ee9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027d02(char *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  char cVar6;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar2 = FUN_ram_400042fa();
    uVar3 = FUN_ram_40004362(300);
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    iVar5 = iVar2 - *(int *)(param_1 + 8);
    if ((int)(iVar5 - uVar3) < 0) {
      cVar6 = param_1[1];
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 4);
        uVar3 = FUN_ram_40004362(300);
        iVar2 = iVar2 - iVar5;
        if (iVar2 < 1) {
          bVar1 = 0;
        }
        else {
          if (uVar3 == 0) {
            uVar3 = 1;
          }
          if (-1 < (int)(iVar2 - uVar3)) goto LAB_ram_40027db4;
          if (uVar3 == 0) {
            bVar1 = 0xff;
          }
          else {
            bVar1 = (byte)((uint)(iVar2 * 0xff) / uVar3);
          }
        }
      }
      else if (iVar5 == 0) {
LAB_ram_40027db4:
        bVar1 = 0xff;
      }
      else {
        if (uVar3 == 0) {
          bVar1 = 0xff;
        }
        else {
          bVar1 = (byte)((uint)(iVar5 * 0xff) / uVar3);
        }
        bVar1 = ~bVar1;
      }
      uVar4 = 1;
      goto LAB_ram_40027d94;
    }
    *param_1 = '\0';
  }
  bVar1 = 0;
  cVar6 = 'd';
  uVar4 = 0;
LAB_ram_40027d94:
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = uVar4;
    param_2[1] = cVar6;
    param_2[2] = bVar1;
  }
  return;
}


/* NanoCore 1.10, address 0x40027dba.
 * REA evidence: ev_32d167af495b660a19d440787aa981390314e103b496cf8566befb22ab014464
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027dba(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = param_1 & 0xff;
    if (100 < param_1) {
      uVar1 = 100;
    }
    FUN_ram_400055ea(param_2,param_3,&DAT_ram_40094c84,uVar1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40027de2.
 * REA evidence: ev_6fa4ff523839b98dc6e6dd6c46eb831a113b4b3286370c6bc3ff66fad19017ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40027dee) */

uint FUN_ram_40027de2(int param_1,int param_2)

{
  return (param_1 * param_2 + 0x7fU) / 0xff & 0xff;
}


/* NanoCore 1.10, address 0x40027df8.
 * REA evidence: ev_2f58ce32e0084b4f574523c752ddeff0c5f1430446e8fc23c25fd3071a6e28b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027df8(int param_1)

{
  if ((*(char *)(param_1 + 9) != '\0') && (DAT_ram_3006b0be != '\0')) {
    DAT_ram_3006b0be = DAT_ram_3006b0be + -1;
  }
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* NanoCore 1.10, address 0x40027e2c.
 * REA evidence: ev_48f1f9c2a2dd6f432fba4096deb993148f591213797cbce661c43b219167b184
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027e2c(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,
                     uint param_6)

{
  thunk_FUN_ram_4002d322
            (param_1,param_3 << 7 | param_4,(param_5 & 0x7f) << 7 | param_6 & 0x7f,param_2 == 1);
  return;
}


/* NanoCore 1.10, address 0x40027e56.
 * REA evidence: ev_47fb65671eb63249dcf31852494b22d5b7e58221761593a2656acc919252281a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027e56(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0x10) {
    iVar1 = (uint)(param_1 == 1) * 0x180 + param_2 * 0x18;
    if (((*(char *)(iVar1 + 0x3006adbd) != '\0') && (*(char *)(iVar1 + 0x3006adb8) != '\0')) &&
       (*(char *)(iVar1 + 0x3006adb9) != '\0')) {
      FUN_ram_40027e2c(param_2 + 1U & 0xff,*(undefined4 *)(iVar1 + 0x3006adc0),
                       *(undefined1 *)(iVar1 + 0x3006adb4),*(undefined1 *)(iVar1 + 0x3006adb5),
                       *(undefined1 *)(iVar1 + 0x3006adbc),0);
    }
    FUN_ram_40027df8(iVar1 + 0x3006adb4);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40027ec0.
 * REA evidence: ev_9f6441e55a47e89b7c8dace335c3a3dbe82e634d9750b4f5c09c7ce2cd99fe4e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027ec0(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    FUN_ram_40027e56(param_1,cVar1);
    cVar1 = cVar2;
  } while (cVar2 != '\x10');
  return;
}


/* NanoCore 1.10, address 0x40027eea.
 * REA evidence: ev_39814f1e46065cf93bf48baecc527334c4e5292d36f7445eb57e10aef88b0aba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027eea(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_ram_3006b0be != '\0') {
    iVar3 = FUN_ram_400042fa();
    iVar2 = 0;
    while( true ) {
      uVar1 = 0;
      do {
        iVar4 = iVar2 * 0x180 + uVar1 * 0x18;
        if (*(char *)(iVar4 + 0x3006adbd) != '\0') {
          if (*(int *)(iVar4 + 0x3006adc8) <= iVar3 - *(int *)(iVar4 + 0x3006adc4)) {
            FUN_ram_40027e56(iVar2,uVar1 & 0xff);
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != 0x10);
      if (iVar2 == 1) break;
      iVar2 = 1;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40027f76.
 * REA evidence: ev_9dbe3871e0955ee7b5847e071b4ab6fca39575b49b8fc4efbe1f4df972a8071c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027f76(void)

{
  DAT_ram_3006b0c0 = 0;
  FUN_ram_4000505c(0x3006b0cc,0,2);
  return;
}


/* NanoCore 1.10, address 0x40027f8e.
 * REA evidence: ev_71ea755b6626685f1ed14a4edfabe1ccc73a86bee34584540c6a26e065cd7131
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40027f8e(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x40027f92.
 * REA evidence: ev_b43d8db23d84d45f02fe3d29e24e21a52367269ff9dbafc826f85d2a4fde1230
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40027f92(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40027f8e();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0x78;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40027fa6.
 * REA evidence: ev_dcb8c625118f74a1c9b91f03effc3265db92ec930c23474c1e3e72f7904296fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40027fa6(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  if (param_2 == 0xf2) {
    FUN_ram_40027ec0();
    if (param_5 == 0) {
      return;
    }
    uVar2 = 1;
    if (param_1 != 1) {
      uVar2 = 2;
    }
    uVar3 = FUN_ram_400042fa();
    FUN_ram_400249ba(uVar2,(param_4 & 0x7f) << 7 | param_3 & 0x7f,uVar3);
    return;
  }
  uVar10 = (uint)(param_1 == 1);
  if (param_2 == 0xf3) {
    FUN_ram_40027ec0();
    FUN_ram_40012802(param_3 & 0x7f,uVar10);
    return;
  }
  uVar9 = param_2 & 0xf;
  param_2 = param_2 & 0xf0;
  iVar11 = uVar9 + 1;
  if (param_2 == 0x80) {
    iVar4 = thunk_FUN_ram_4002d01a(iVar11);
    if (iVar4 == 0) {
      return;
    }
    FUN_ram_40027ec0(param_1);
    bVar6 = false;
LAB_ram_400280c4:
    FUN_ram_400127fe(iVar11,param_3 & 0x7f,param_4 & 0x7f,bVar6,uVar10);
    return;
  }
  if (param_2 == 0x90) {
    iVar4 = thunk_FUN_ram_4002d01a(iVar11);
    if (iVar4 == 0) {
      return;
    }
    FUN_ram_40027ec0(param_1);
    if (param_5 == 0) {
      return;
    }
    bVar6 = param_4 != 0;
    goto LAB_ram_400280c4;
  }
  iVar4 = thunk_FUN_ram_4002d01a(iVar11);
  if (iVar4 == 0) {
    return;
  }
  if (param_2 != 0xb0) {
    if (param_2 != 0xc0) {
      FUN_ram_40027ec0(param_1);
      return;
    }
    FUN_ram_40027ec0(param_1);
    thunk_FUN_ram_4002d2d0(iVar11,param_3 & 0x7f,uVar10);
    return;
  }
  if (param_5 == 0) {
    return;
  }
  param_3 = param_3 & 0x7f;
  param_4 = param_4 & 0x7f;
  iVar4 = uVar10 * 0x180 + uVar9 * 0x18;
  uVar1 = (undefined1)param_4;
  if (param_3 == 99) {
    FUN_ram_40027e56(param_1,uVar9);
    *(undefined1 *)(iVar4 + 0x3006adb4) = uVar1;
    *(undefined1 *)(iVar4 + 0x3006adb8) = 1;
  }
  else if (param_3 == 0x62) {
    FUN_ram_40027e56(param_1,uVar9);
    *(undefined1 *)(iVar4 + 0x3006adb5) = uVar1;
    *(undefined1 *)(iVar4 + 0x3006adb9) = 1;
  }
  else {
    if (param_3 == 6) {
      FUN_ram_40027e56(param_1,uVar9);
      iVar7 = uVar10 * 0x180 + uVar9 * 0x18;
      *(undefined1 *)(iVar7 + 0x3006adba) = 1;
      *(undefined1 *)(iVar7 + 0x3006adb6) = uVar1;
      if ((*(char *)(iVar7 + 0x3006adb8) == '\0') || (*(char *)(iVar7 + 0x3006adb9) == '\0'))
      goto LAB_ram_4002820a;
      uVar12 = (uint)*(byte *)(iVar7 + 0x3006adb4) << 7 | (uint)*(byte *)(iVar7 + 0x3006adb5);
      iVar5 = FUN_ram_40027f92(uVar12,param_4);
      if (iVar5 != 0) {
        if (*(char *)(iVar7 + 0x3006adbd) == '\0') {
          DAT_ram_3006b0be = DAT_ram_3006b0be + '\x01';
        }
        iVar8 = uVar10 * 0x180 + uVar9 * 0x18;
        *(undefined1 *)(iVar8 + 0x3006adbd) = 1;
        *(undefined1 *)(iVar8 + 0x3006adbc) = uVar1;
        *(int *)(iVar8 + 0x3006adc0) = param_1;
        uVar2 = FUN_ram_400042fa();
        *(undefined4 *)(iVar8 + 0x3006adc4) = uVar2;
        iVar7 = FUN_ram_40004362(iVar5);
        iVar4 = 1;
        if (iVar7 != 0) {
          iVar4 = iVar7;
        }
        *(int *)(iVar8 + 0x3006adc8) = iVar4;
        goto LAB_ram_4002820a;
      }
      uVar1 = 0;
      if (*(char *)(iVar7 + 0x3006adbb) != '\0') {
        uVar1 = *(undefined1 *)(iVar7 + 0x3006adb7);
      }
      FUN_ram_40027e2c(iVar11,param_1,*(undefined1 *)(iVar4 + 0x3006adb4),
                       *(undefined1 *)(iVar4 + 0x3006adb5),*(undefined1 *)(iVar7 + 0x3006adb6),uVar1
                      );
    }
    else {
      if (param_3 != 0x26) {
        if (1 < (param_3 - 100 & 0xff)) {
          FUN_ram_40027e56(param_1,uVar9);
          goto LAB_ram_4002820a;
        }
        FUN_ram_40027e56(param_1,uVar9);
        *(undefined2 *)(uVar9 * 0x18 + uVar10 * 0x180 + 0x3006adb8) = 0;
        goto LAB_ram_4002814a;
      }
      uVar12 = 0;
      do {
        if (uVar9 != uVar12) {
          FUN_ram_40027e56(param_1,uVar12);
        }
        uVar12 = uVar12 + 1 & 0xff;
      } while (uVar12 != 0x10);
      iVar7 = uVar10 * 0x180 + uVar9 * 0x18;
      *(undefined1 *)(iVar7 + 0x3006adbb) = 1;
      *(undefined1 *)(iVar7 + 0x3006adb7) = uVar1;
      if (((*(char *)(iVar7 + 0x3006adb8) == '\0') || (*(char *)(iVar7 + 0x3006adb9) == '\0')) ||
         (*(char *)(iVar7 + 0x3006adba) == '\0')) goto LAB_ram_4002820a;
      if (*(char *)(iVar7 + 0x3006adbd) == '\0') {
        uVar1 = *(undefined1 *)(iVar7 + 0x3006adb6);
      }
      else {
        param_1 = *(int *)(iVar7 + 0x3006adc0);
        uVar1 = *(undefined1 *)(iVar7 + 0x3006adbc);
      }
      FUN_ram_40027e2c(iVar11,param_1,*(undefined1 *)(iVar4 + 0x3006adb4),
                       *(undefined1 *)(iVar4 + 0x3006adb5),uVar1,param_4);
      iVar7 = uVar10 * 0x180 + uVar9 * 0x18;
      uVar12 = (uint)*(byte *)(iVar7 + 0x3006adb5) | (uint)*(byte *)(iVar7 + 0x3006adb4) << 7;
    }
    iVar7 = FUN_ram_40027f8e(uVar12);
    if (iVar7 == 0) goto LAB_ram_4002820a;
  }
LAB_ram_4002814a:
  FUN_ram_40027df8(iVar4 + 0x3006adb4);
LAB_ram_4002820a:
  thunk_FUN_ram_4002d05e(iVar11,param_3,param_4,uVar10);
  return;
}


