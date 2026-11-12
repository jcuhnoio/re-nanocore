/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40005000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40005004.
 * REA evidence: ev_4149a991739a27ab210b80083b3fad8f919b56e1464d0a6a7afa46f8e47e15fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005004(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40004dee();
  uVar1 = param_1;
  if ((iVar2 == 0) && (iVar2 = FUN_ram_40006464(), uVar1 = param_1, iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x38) = param_1;
    uVar1 = _DAT_ram_3004cbbc;
  }
  _DAT_ram_3004cbbc = uVar1;
  return;
}


/* NanoCore 1.11, address 0x4000502a.
 * REA evidence: ev_509726eb461785c3f217fd9b5d64b993bf8aefab45b01e22c3981bf4083692b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4000502a(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_40004dee();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006464(), iVar1 != 0)) {
    puVar2 = (undefined1 *)(iVar1 + 0x38);
  }
  else {
    puVar2 = &DAT_ram_3004cbbc;
  }
  return puVar2;
}


/* NanoCore 1.11, address 0x4000504c.
 * REA evidence: ev_8bce08e044d08ae7cf6d4179d7d3fc18d4313487c4af9306eee5f16f8251bc66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000504c(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if ((3 < param_3) && (((uint)param_1 & 3) == 0)) {
    uVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    for (puVar4 = param_1; 0xf < (int)param_1 + (param_3 - (int)puVar4); puVar4 = puVar4 + 4) {
      *puVar4 = uVar3;
      puVar4[1] = uVar3;
      puVar4[2] = uVar3;
      puVar4[3] = uVar3;
    }
    uVar2 = param_3 >> 4;
    param_3 = param_3 + uVar2 * -0x10;
    for (iVar1 = 0; 3 < param_3 - iVar1; iVar1 = iVar1 + 4) {
      *(undefined4 *)((int)param_1 + iVar1 + uVar2 * 0x10) = uVar3;
    }
    param_1 = param_1 + uVar2 * 4 + (param_3 >> 2);
    param_3 = param_3 + (param_3 >> 2) * -4;
  }
  for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)param_1 + uVar2) = param_2;
  }
  return;
}


/* NanoCore 1.11, address 0x40005156.
 * REA evidence: ev_cb2b78cd6746b319289cbc876e9fda1fffad9352f766664cba6ebcca05378a38
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005156(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 < param_1) && (param_1 < param_2 + param_3)) {
    uVar1 = 0;
    while (uVar1 = uVar1 - 1, ~param_3 != uVar1) {
      *(undefined1 *)(param_1 + param_3 + uVar1) = *(undefined1 *)(param_2 + param_3 + uVar1);
    }
    return;
  }
  for (uVar1 = 0; param_3 != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}


/* NanoCore 1.11, address 0x40005192.
 * REA evidence: ev_99179a92fd228910b305b45509654457199b79d8b4b1070b0a9567e29bf7ee1d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005192(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (param_3 == iVar3) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + iVar3);
    pbVar2 = (byte *)(param_2 + iVar3);
    iVar3 = iVar3 + 1;
  } while ((uint)*pbVar1 == (uint)*pbVar2);
  return (uint)*pbVar1 - (uint)*pbVar2;
}


/* NanoCore 1.11, address 0x400051b2.
 * REA evidence: ev_70ba19190fff1579e5bbd6e0ca77ea9ec23fa86393769e6db17e1d93cd2dcb4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400051b2(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_3 != 0) {
    iVar3 = param_3;
    do {
      cVar1 = *(char *)((param_2 + param_3) - iVar3);
      iVar4 = iVar3 + -1;
      pcVar2 = param_1 + 1;
      *param_1 = cVar1;
      if (cVar1 == '\0') {
        pcVar5 = pcVar2;
        while (pcVar5 + 1 != pcVar2 + iVar3) {
          *pcVar5 = '\0';
          pcVar5 = pcVar5 + 1;
        }
        return;
      }
      iVar3 = iVar4;
      param_1 = pcVar2;
    } while (iVar4 != 0);
  }
  return;
}


/* NanoCore 1.11, address 0x400051de.
 * REA evidence: ev_f0c4b90fe7bf9c2008ab6e4f517e0d8d5538020ceea6fd397890fd6ecefc7c60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400051de(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(char *)(param_2 + iVar1) == '\0') break;
    *(char *)(param_1 + iVar1) = *(char *)(param_2 + iVar1);
    iVar1 = iVar1 + 1;
  }
  *(undefined1 *)(param_1 + iVar1) = 0;
  return;
}


/* NanoCore 1.11, address 0x400051f8.
 * REA evidence: ev_5fcdc2b8e54fcc69980bb821cdbdb5888102b02a02d3e90cb8b73f683b6eb3f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400051f8(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  while( true ) {
    if (param_3 == iVar2) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + iVar2);
    iVar3 = (int)(((uint)*pbVar1 - (uint)*(byte *)(param_2 + iVar2)) * 0x1000000) >> 0x18;
    if (iVar3 != 0) break;
    iVar2 = iVar2 + 1;
    if (*pbVar1 == 0) {
      return 0;
    }
  }
  return iVar3;
}


/* NanoCore 1.11, address 0x4000521c.
 * REA evidence: ev_5b87a3637740f79882c030c809a64cb15eadfb3ea1ddc93cb9931ef8a9bc4cbc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000521c(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar2 = (uint)*(byte *)(param_1 + iVar3);
    pbVar1 = (byte *)(param_2 + iVar3);
    if (uVar2 == 0) break;
    iVar3 = iVar3 + 1;
  } while (uVar2 == *pbVar1);
  return uVar2 - *pbVar1;
}


/* NanoCore 1.11, address 0x40005234.
 * REA evidence: ev_0a501e2279f03ec7de9c26f42ee24f6800f8fdcb5cb5bd1e7e356ad20969b0f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005234(char *param_1)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
  }
  return (int)pcVar1 - (int)param_1;
}


/* NanoCore 1.11, address 0x40005246.
 * REA evidence: ev_63be8fccdd505b8564bca7604da3fd4a76aebef699740a1296595e69946d4fc4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005246(void)

{
  return;
}


/* NanoCore 1.11, address 0x40005248.
 * REA evidence: ev_c808d1635a976b3e1f7a6191465eae22a1dedc6edefe9484f6235cdf145963d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005248(void)

{
  return;
}


/* NanoCore 1.11, address 0x4000524a.
 * REA evidence: ev_0d95f62fe26098fdc0efc6e04e2472ee0e8934181605370f08d4de3e6e845955
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40005246(void)

{
  return;
}


/* NanoCore 1.11, address 0x4000524c.
 * REA evidence: ev_32b48833d490b8993ff7d5265aad8ddf436af87e43b3fba8e38eab98ad00dea1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000524c(byte *param_1,uint param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  
  pbVar2 = param_1 + param_2;
  pbVar3 = param_1;
  if (pbVar2 < param_1) {
    param_2 = ~(uint)param_1;
    pbVar2 = (byte *)0xffffffff;
  }
  do {
    bVar15 = *param_3;
    if (bVar15 == 0) {
      if (param_2 != 0) {
        if (pbVar3 < pbVar2) {
          *pbVar3 = 0;
        }
        else {
          pbVar2[-1] = 0;
        }
      }
      return (int)pbVar3 - (int)param_1;
    }
    if (bVar15 != 0x25) {
      if (pbVar3 < pbVar2) {
        *pbVar3 = bVar15;
      }
      pbVar10 = pbVar3 + 1;
      goto LAB_ram_4000529e;
    }
    uVar14 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar11 = (uint)param_3[1];
              pbVar10 = param_3 + 1;
              if (uVar11 != 0x2d) break;
              uVar14 = uVar14 | 0x10;
              param_3 = pbVar10;
            }
            if (uVar11 != 0x2b) break;
            uVar14 = uVar14 | 4;
            param_3 = pbVar10;
          }
          if (uVar11 != 0x20) break;
          uVar14 = uVar14 | 8;
          param_3 = pbVar10;
        }
        if (uVar11 != 0x23) break;
        uVar14 = uVar14 | 0x20;
        param_3 = pbVar10;
      }
      if (uVar11 != 0x30) break;
      uVar14 = uVar14 | 1;
      param_3 = pbVar10;
    }
    puVar7 = param_4;
    if (uVar11 - 0x30 < 10) {
      uVar9 = 0;
      for (; *pbVar10 - 0x30 < 10; pbVar10 = pbVar10 + 1) {
        uVar9 = ((uint)*pbVar10 + uVar9 * 10) - 0x30;
      }
    }
    else {
      uVar9 = 0xffffffff;
      if (uVar11 == 0x2a) {
        puVar7 = param_4 + 1;
        uVar9 = *param_4;
        pbVar10 = param_3 + 2;
        if ((int)uVar9 < 0) {
          uVar9 = -uVar9;
          uVar14 = uVar14 | 0x10;
        }
      }
    }
    uVar11 = 0xffffffff;
    param_3 = pbVar10;
    puVar8 = puVar7;
    if (*pbVar10 == 0x2e) {
      param_3 = pbVar10 + 1;
      if (pbVar10[1] - 0x30 < 10) {
        uVar11 = 0;
        for (; *param_3 - 0x30 < 10; param_3 = param_3 + 1) {
          uVar11 = ((uint)*param_3 + uVar11 * 10) - 0x30;
        }
      }
      else {
        if (pbVar10[1] != 0x2a) {
          uVar11 = 0;
          goto LAB_ram_400053a6;
        }
        puVar8 = puVar7 + 1;
        uVar11 = *puVar7;
        param_3 = pbVar10 + 2;
      }
      if ((int)uVar11 < 0) {
        uVar11 = 0;
      }
    }
LAB_ram_400053a6:
    bVar15 = *param_3;
    if ((bVar15 & 0xfb) == 0x68) {
      param_3 = param_3 + 1;
    }
    else {
      bVar15 = 0;
    }
    bVar1 = *param_3;
    param_4 = puVar8;
    if (0x78 < bVar1) {
switchD_ram_4000543e_caseD_65:
      if (pbVar3 < pbVar2) {
        *pbVar3 = 0x25;
      }
      pbVar10 = pbVar3 + 1;
      if (*param_3 == 0) {
        param_3 = param_3 + -1;
      }
      else {
        if (pbVar10 < pbVar2) {
          pbVar3[1] = *param_3;
        }
        pbVar10 = pbVar3 + 2;
      }
      goto LAB_ram_4000529e;
    }
    if (bVar1 < 99) {
      if (bVar1 != 0x25) {
        uVar14 = uVar14 | 0x40;
        if (bVar1 == 0x58) goto switchD_ram_4000543e_caseD_78;
        goto switchD_ram_4000543e_caseD_65;
      }
      if (pbVar3 < pbVar2) {
        *pbVar3 = 0x25;
      }
      pbVar10 = pbVar3 + 1;
      goto LAB_ram_4000529e;
    }
    switch(bVar1) {
    case 99:
      uVar11 = uVar9;
      pbVar10 = pbVar3;
      if ((uVar14 & 0x10) == 0) {
        while (0 < (int)(uVar11 - 1)) {
          if (pbVar10 < pbVar2) {
            *pbVar10 = 0x20;
          }
          uVar11 = uVar11 - 1;
          pbVar10 = pbVar10 + 1;
        }
        iVar12 = uVar9 - 1;
        iVar13 = 0;
        if (0 < (int)uVar9) {
          iVar13 = iVar12;
        }
        pbVar3 = pbVar3 + iVar13;
        if ((int)uVar9 < 1) {
          uVar9 = 1;
        }
        uVar9 = (iVar12 - uVar9) + 1;
      }
      param_4 = puVar8 + 1;
      if (pbVar3 < pbVar2) {
        *pbVar3 = (byte)*puVar8;
      }
      for (pbVar10 = pbVar3 + 1; 0 < (int)(pbVar3 + (uVar9 - (int)pbVar10)); pbVar10 = pbVar10 + 1)
      {
        if (pbVar10 < pbVar2) {
          *pbVar10 = 0x20;
        }
      }
      iVar13 = 0;
      if (0 < (int)uVar9) {
        iVar13 = uVar9 - 1;
      }
      pbVar10 = pbVar3 + 1 + iVar13;
      goto LAB_ram_4000529e;
    case 100:
    case 0x69:
      uVar14 = uVar14 | 2;
    case 0x75:
      uVar5 = 10;
      break;
    default:
      goto switchD_ram_4000543e_caseD_65;
    case 0x6f:
      uVar5 = 8;
      break;
    case 0x70:
      if (uVar9 == 0xffffffff) {
        uVar14 = uVar14 | 1;
        uVar9 = 8;
      }
      uVar6 = *puVar8;
      uVar5 = 0x10;
      goto LAB_ram_4000557a;
    case 0x73:
      param_4 = puVar8 + 1;
      puVar4 = (undefined1 *)*puVar8;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_ram_40093ed0;
      }
      for (uVar6 = 0; (uVar6 != uVar9 && (puVar4[uVar6] != '\0')); uVar6 = uVar6 + 1) {
      }
      if ((0 < (int)uVar11) && ((int)uVar11 < (int)uVar6)) {
        uVar6 = uVar11;
      }
      pbVar10 = pbVar3;
      if ((uVar14 & 0x10) == 0) {
        for (; (int)uVar6 < (int)(pbVar3 + (uVar9 - (int)pbVar10)); pbVar10 = pbVar10 + 1) {
          if (pbVar10 < pbVar2) {
            *pbVar10 = 0x20;
          }
        }
        iVar13 = uVar9 - uVar6;
        if ((int)uVar9 < (int)uVar6) {
          iVar13 = 0;
        }
        pbVar3 = pbVar3 + iVar13;
        iVar13 = 0;
        if ((int)uVar6 <= (int)uVar9) {
          iVar13 = -(uVar9 - uVar6);
        }
        uVar9 = iVar13 + (uVar9 - 1);
      }
      for (uVar14 = 0; uVar14 != uVar6; uVar14 = uVar14 + 1) {
        if (pbVar3 + uVar14 < pbVar2) {
          pbVar3[uVar14] = puVar4[uVar14];
        }
      }
      pbVar3 = pbVar3 + uVar6;
      for (pbVar10 = pbVar3; (int)uVar6 < (int)(pbVar3 + (uVar9 - (int)pbVar10));
          pbVar10 = pbVar10 + 1) {
        if (pbVar10 < pbVar2) {
          *pbVar10 = 0x20;
        }
      }
      iVar13 = 0;
      if ((int)uVar6 <= (int)uVar9) {
        iVar13 = uVar9 - uVar6;
      }
      pbVar10 = pbVar3 + iVar13;
      goto LAB_ram_4000529e;
    case 0x78:
switchD_ram_4000543e_caseD_78:
      uVar5 = 0x10;
    }
    if ((bVar15 == 0x6c) || (bVar15 != 0x68)) {
      uVar6 = *puVar8;
    }
    else {
      uVar6 = (uint)(short)*puVar8;
      if ((uVar14 & 2) == 0) {
        uVar6 = *puVar8 & 0xffff;
      }
    }
LAB_ram_4000557a:
    pbVar10 = (byte *)FUN_ram_40004e0e(pbVar3,pbVar2,uVar6,uVar5,uVar9,uVar11,uVar14);
    param_4 = puVar8 + 1;
LAB_ram_4000529e:
    param_3 = param_3 + 1;
    pbVar3 = pbVar10;
  } while( true );
}


/* NanoCore 1.11, address 0x400055da.
 * REA evidence: ev_68abe16d019a34b70f5dba0c338e688aeebc79711f21527dd2added3a7a8c35b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400055da(void)

{
  FUN_ram_4000524c();
  return;
}


/* NanoCore 1.11, address 0x400055f4.
 * REA evidence: ev_902e7cc18a974ab10e01cc75c545a099f0c26aa601fec956558c5f15ca88c67b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400055f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_4000524c(param_1,0xffffffff,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x400055fc.
 * REA evidence: ev_76c2984b7585bba55bf46f2ff9405c0c5ab9ab2e5fea86ab7d9c9eb5ac34a880
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400055fc(void)

{
  FUN_ram_400055f4();
  return;
}


/* NanoCore 1.11, address 0x40005618.
 * REA evidence: ev_cdfad132989ee83a5c803523bcc6c4dd4d03a87e0dfa64dc9f7710e419a8b4bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005618(int param_1,uint param_2)

{
  FUN_ram_40005774(0x3004cbf4,s_heap_sys_ram_40093f30,param_1,
                   (param_2 & 0xfffffffc) - (param_1 + 3U & 0xfffffffc));
  FUN_ram_4000492c(0x3004cbc0,&DAT_ram_40093f3c,1);
  return;
}


/* NanoCore 1.11, address 0x40005656.
 * REA evidence: ev_c819f1526b67804b274627183f439dae4cacd7ae15fed03b82e87fb9fd844fe8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40005656(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_ram_40004fc2();
  uVar1 = thunk_FUN_ram_40005834(0x3004cbf4,param_1);
  FUN_ram_40004fe4();
  if (_DAT_ram_3004cbf0 != (code *)0x0) {
    (*_DAT_ram_3004cbf0)(uVar1,param_1);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4000568e.
 * REA evidence: ev_eba4230a812b64a1f41f089ed7fbba61789a8988e2cdd51ef0deecb44bb3f310
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000568e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005656(param_1 * param_2);
  if (iVar1 != 0) {
    FUN_ram_4000504c(iVar1,0,param_1 * param_2);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x400056b4.
 * REA evidence: ev_280bd1b4a815ec3074a7bd887cb16149510ad4633c21654328347d9ae75a2d51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400056b4(int param_1)

{
  if (_DAT_ram_3004cbec != (code *)0x0) {
    (*_DAT_ram_3004cbec)();
  }
  if (param_1 != 0) {
    FUN_ram_40004fc2();
    thunk_FUN_ram_4000599e(param_1);
    FUN_ram_40004fe4();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400056e4.
 * REA evidence: ev_e8adb3e6c1daa79b6c223888d06190807db414d723ac734814368e5cef4d79e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400056e4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 + 3U & 0xfffffffc;
  uVar2 = FUN_ram_40005656((param_1 + 3U & 0xfffffffc) + uVar1);
  if (uVar2 != 0) {
    if ((uVar1 - 1 & uVar2) == 0) {
      uVar1 = uVar2 + uVar1;
    }
    else {
      uVar1 = uVar2 + (uVar1 - 1) & -uVar1;
    }
    *(uint *)(uVar1 - 4) = uVar2;
  }
  return;
}


/* NanoCore 1.11, address 0x4000571e.
 * REA evidence: ev_a62f2101952fcbb13a28149c0521cbd1fcd4b5ea53a391c34d7a7abc54770883
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000571e(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400056b4(*(undefined4 *)(param_1 + -4));
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40005728.
 * REA evidence: ev_c2ef89194f67925bad8762ce01af8e43b82a5fb674ef4fe52688336fe56f576f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005728(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0xff) != 0) {
      return (byte)(&DAT_ram_40093f44)[param_1 & 0xff] + 1;
    }
    if ((param_1 & 0xff00) != 0) {
      return (byte)(&DAT_ram_40093f44)[(param_1 & 0xffff) >> 8] + 9;
    }
    if ((param_1 & 0xff0000) != 0) {
      return (byte)(&DAT_ram_40093f44)[(param_1 & 0xffffff) >> 0x10] + 0x11;
    }
    iVar1 = (byte)(&DAT_ram_40093f44)[param_1 >> 0x18] + 0x19;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40005774.
 * REA evidence: ev_551161c4110cca485d9ca5c6f5b83ed244cffad98f1cd17f35eabb3cedbee440
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40005774(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_ram_40005e80(param_1,7,param_2);
  *(uint *)(param_1 + 0x20) = param_4 & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x28) = 0x38;
  iVar4 = param_1 + 0x34;
  *(undefined4 **)(param_1 + 0x1c) = param_3;
  *(uint *)(param_1 + 0x24) = (param_4 & 0xfffffffc) - 0x38;
  *(undefined4 *)(param_1 + 0x34) = 0x1ea01ea0;
  *(int *)(param_1 + 0x44) = iVar4;
  *(int *)(param_1 + 0x48) = iVar4;
  *(int *)(param_1 + 0x30) = iVar4;
  *(int *)(param_1 + 0x38) = param_1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *param_3 = 0x1ea01ea0;
  param_3[1] = param_1;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = param_3;
  param_3[5] = param_3;
  FUN_ram_4000504c(param_3 + 6,0x20,4);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x24) + 0x1c;
  uVar1 = *(undefined4 *)(iVar2 + 0x10);
  iVar5 = (int)param_3 + iVar3;
  param_3[2] = iVar5;
  param_3[3] = iVar5;
  *(undefined4 **)(param_1 + 0x2c) = param_3;
  param_3[4] = uVar1;
  iVar4 = *(int *)(iVar2 + 0x10);
  param_3[5] = iVar2;
  *(undefined4 **)(iVar4 + 0x14) = param_3;
  *(undefined4 **)(iVar2 + 0x10) = param_3;
  *(undefined4 *)((int)param_3 + iVar3) = 0x1ea01ea1;
  *(int *)(iVar5 + 4) = param_1;
  *(undefined4 **)(iVar5 + 8) = param_3;
  *(undefined4 **)(iVar5 + 0xc) = param_3;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  FUN_ram_400047a4(param_1 + 0x50,param_2,1,1);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 0;
}


/* NanoCore 1.11, address 0x40005834.
 * REA evidence: ev_4d0768e534f9d869ac67e88e38807ad9f9ed5deea1d5bcc1e57f874ef9ab9298
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40005834(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = param_2 + 3U & 0xfffffffc;
  if (uVar8 < 0xc) {
    uVar8 = 0xc;
  }
  if (uVar8 < *(uint *)(param_1 + 0x24)) {
    if ((*(int *)(param_1 + 0x78) == 0) &&
       (iVar2 = FUN_ram_40004822(param_1 + 0x50,0xffffffff), iVar2 != 0)) {
      FUN_ram_40005004();
    }
    else {
      uVar5 = 0;
      puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x30))[4];
      while (*(undefined4 **)(param_1 + 0x30) != puVar1) {
        if (uVar8 <= uVar5) goto LAB_ram_40005880;
        uVar5 = (puVar1[2] - (int)puVar1) - 0x1c;
        if (uVar5 < uVar8) {
          puVar1 = (undefined4 *)puVar1[4];
        }
      }
      if (uVar8 <= uVar5) {
LAB_ram_40005880:
        if (uVar5 < uVar8 + 0x28) {
          iVar2 = *(int *)(param_1 + 0x24);
          *(uint *)(param_1 + 0x24) = iVar2 - uVar5;
          uVar5 = uVar5 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar5) {
            *(uint *)(param_1 + 0x28) = uVar5;
          }
          iVar2 = puVar1[4];
          *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
          *(int *)(puVar1[5] + 0x10) = iVar2;
          puVar1[4] = 0;
          puVar1[5] = 0;
        }
        else {
          iVar9 = (int)puVar1 + uVar8 + 0x1c;
          *(undefined4 *)((int)puVar1 + uVar8 + 0x1c) = 0x1ea01ea0;
          *(int *)(iVar9 + 4) = param_1;
          FUN_ram_4000504c(iVar9 + 0x18,0x20,4);
          uVar6 = puVar1[2];
          *(undefined4 **)(iVar9 + 0xc) = puVar1;
          uVar4 = puVar1[5];
          *(undefined4 *)(iVar9 + 8) = uVar6;
          iVar2 = *(int *)(param_1 + 0x24);
          *(int *)(puVar1[2] + 0xc) = iVar9;
          iVar7 = puVar1[4];
          puVar1[2] = iVar9;
          *(undefined4 *)(iVar7 + 0x14) = uVar4;
          *(int *)(puVar1[5] + 0x10) = iVar7;
          iVar7 = *(int *)(param_1 + 0x30);
          puVar1[4] = 0;
          puVar1[5] = 0;
          uVar4 = *(undefined4 *)(iVar7 + 0x10);
          *(int *)(iVar9 + 0x14) = iVar7;
          *(undefined4 *)(iVar9 + 0x10) = uVar4;
          *(int *)(*(int *)(iVar7 + 0x10) + 0x14) = iVar9;
          *(int *)(iVar7 + 0x10) = iVar9;
          iVar2 = iVar2 + -0x1c;
          *(uint *)(param_1 + 0x24) = iVar2 - uVar8;
          uVar8 = uVar8 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar8) {
            *(uint *)(param_1 + 0x28) = uVar8;
          }
        }
        *puVar1 = 0x1ea01ea1;
        iVar2 = FUN_ram_40006464();
        if (iVar2 == 0) {
          puVar3 = &DAT_ram_4009406c;
        }
        else {
          puVar3 = (undefined *)FUN_ram_40006464();
        }
        memcpy(puVar1 + 6,puVar3,4);
        if (*(int *)(param_1 + 0x78) == 0) {
          FUN_ram_400048c4(param_1 + 0x50);
        }
        return puVar1 + 7;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        FUN_ram_400048c4(param_1 + 0x50);
      }
    }
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.11, address 0x4000599e.
 * REA evidence: ev_2e5afb0ca13ef73df2ec45357d44ca170acc1bf8b4db6df24213115a4b6205dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000599e(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_1 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + -0x18);
  iVar2 = param_1 + -0x1c;
  if ((*(int *)(iVar3 + 0x78) == 0) &&
     (iVar4 = FUN_ram_40004822(iVar3 + 0x50,0xffffffff), iVar4 != 0)) {
    FUN_ram_40005004();
    return;
  }
  *(undefined4 *)(param_1 + -0x1c) = 0x1ea01ea0;
  uVar5 = *(uint *)(param_1 + -0x14);
  iVar4 = (*(int *)(iVar3 + 0x24) + uVar5) - iVar2;
  *(int *)(iVar3 + 0x24) = iVar4 + -0x1c;
  puVar6 = *(uint **)(param_1 + -0x10);
  bVar1 = (*puVar6 & 1) == 0;
  if (bVar1) {
    *(int *)(iVar3 + 0x24) = iVar4;
    puVar6[2] = uVar5;
    *(uint **)(*(int *)(param_1 + -0x14) + 0xc) = puVar6;
    iVar2 = *(int *)(param_1 + -0x10);
  }
  puVar6 = *(uint **)(iVar2 + 8);
  if ((*puVar6 & 1) == 0) {
    uVar5 = puVar6[5];
    *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 0x1c;
    uVar7 = puVar6[2];
    *(int *)(uVar7 + 0xc) = iVar2;
    *(uint *)(iVar2 + 8) = uVar7;
    uVar7 = puVar6[4];
    *(uint *)(uVar7 + 0x14) = uVar5;
    *(uint *)(puVar6[5] + 0x10) = uVar7;
  }
  if (!bVar1) {
    for (iVar4 = *(int *)(*(int *)(iVar3 + 0x30) + 0x10);
        (*(int *)(iVar3 + 0x30) != iVar4 &&
        ((*(int *)(iVar4 + 8) - iVar4) - 0x1cU < (*(int *)(iVar2 + 8) - iVar2) - 0x1cU));
        iVar4 = *(int *)(iVar4 + 0x10)) {
    }
    uVar8 = *(undefined4 *)(iVar4 + 0x14);
    *(int *)(iVar2 + 0x10) = iVar4;
    *(undefined4 *)(iVar2 + 0x14) = uVar8;
    *(int *)(*(int *)(iVar4 + 0x14) + 0x10) = iVar2;
    *(int *)(iVar4 + 0x14) = iVar2;
  }
  FUN_ram_4000504c(iVar2 + 0x18,0x20,4);
  if (*(int *)(iVar3 + 0x78) == 0) {
    FUN_ram_400048c4(iVar3 + 0x50);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40005a84.
 * REA evidence: ev_745685d162536f2a973331fd1bb0bd1ae256f90ddff1d05e9cb8035105f84d7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005a84(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (param_3 == 0) {
    FUN_ram_4000599e(param_2);
  }
  else {
    uVar1 = param_3 + 3U & 0xfffffffc;
    if (uVar1 < 0xc) {
      uVar1 = 0xc;
    }
    if (param_2 == 0) {
      iVar2 = FUN_ram_40005834(param_1,uVar1);
      return iVar2;
    }
    uVar8 = *(int *)(param_2 + -0x14) - param_2;
    if (uVar8 < uVar1) {
      if ((*(int *)(param_1 + 0x78) != 0) ||
         (iVar2 = FUN_ram_40004822(param_1 + 0x50,0xffffffff), iVar2 == 0)) {
        puVar6 = *(uint **)(param_2 + -0x14);
        if (((*puVar6 & 1) != 0) ||
           (uVar3 = puVar6[2], (uVar3 - (int)puVar6) + -0x1c + uVar8 <= uVar1 + 0xc)) {
          if (*(int *)(param_1 + 0x78) == 0) {
            FUN_ram_400048c4(param_1 + 0x50);
          }
          iVar2 = FUN_ram_40005834(param_1,uVar1);
          if (iVar2 == 0) {
            return 0;
          }
          if (uVar1 <= uVar8) {
            uVar8 = uVar1;
          }
          memcpy(iVar2,param_2,uVar8);
          FUN_ram_4000599e(param_2);
          return iVar2;
        }
        iVar2 = uVar8 + *(int *)(param_1 + 0x24);
        *(uint *)(param_1 + 0x24) = iVar2 - uVar1;
        uVar8 = (uVar1 - iVar2) + *(int *)(param_1 + 0x20);
        if (*(uint *)(param_1 + 0x28) < uVar8) {
          *(uint *)(param_1 + 0x28) = uVar8;
        }
        uVar8 = puVar6[4];
        uVar4 = puVar6[5];
        iVar9 = param_2 + uVar1;
        *(uint *)(uVar8 + 0x14) = uVar4;
        *(uint *)(uVar4 + 0x10) = uVar8;
        *(uint *)(uVar3 + 0xc) = puVar6[3];
        *(uint *)(puVar6[3] + 8) = uVar3;
        *(undefined4 *)(param_2 + uVar1) = 0x1ea01ea0;
        *(int *)(iVar9 + 4) = param_1;
        FUN_ram_4000504c(iVar9 + 0x18,0x20,4);
        uVar5 = *(undefined4 *)(param_2 + -0x14);
        *(int *)(iVar9 + 0xc) = param_2 + -0x1c;
        *(undefined4 *)(iVar9 + 8) = uVar5;
        *(int *)(*(int *)(param_2 + -0x14) + 0xc) = iVar9;
        *(int *)(param_2 + -0x14) = iVar9;
        iVar2 = *(int *)(param_1 + 0x30);
        uVar5 = *(undefined4 *)(iVar2 + 0x10);
        *(int *)(iVar9 + 0x14) = iVar2;
        *(undefined4 *)(iVar9 + 0x10) = uVar5;
        *(int *)(*(int *)(iVar2 + 0x10) + 0x14) = iVar9;
        *(int *)(iVar2 + 0x10) = iVar9;
LAB_ram_40005b94:
        if (*(int *)(param_1 + 0x78) != 0) {
          return param_2;
        }
        FUN_ram_400048c4(param_1 + 0x50);
        return param_2;
      }
    }
    else {
      if (uVar8 <= uVar1 + 0x28) {
        return param_2;
      }
      if ((*(int *)(param_1 + 0x78) != 0) ||
         (iVar2 = FUN_ram_40004822(param_1 + 0x50,0xffffffff), iVar2 == 0)) {
        iVar2 = param_2 + uVar1;
        *(undefined4 *)(param_2 + uVar1) = 0x1ea01ea0;
        *(int *)(iVar2 + 4) = param_1;
        FUN_ram_4000504c(iVar2 + 0x18,0x20,4);
        uVar5 = *(undefined4 *)(param_2 + -0x14);
        *(int *)(iVar2 + 0xc) = param_2 + -0x1c;
        *(undefined4 *)(iVar2 + 8) = uVar5;
        *(int *)(*(int *)(param_2 + -0x14) + 0xc) = iVar2;
        *(int *)(param_2 + -0x14) = iVar2;
        puVar6 = *(uint **)(iVar2 + 8);
        if ((*puVar6 & 1) == 0) {
          uVar1 = puVar6[2];
          *(uint *)(param_1 + 0x24) = (int)puVar6 + ((*(int *)(param_1 + 0x24) + 0x1c) - uVar1);
          *(int *)(uVar1 + 0xc) = iVar2;
          uVar8 = puVar6[4];
          *(uint *)(iVar2 + 8) = uVar1;
          *(uint *)(uVar8 + 0x14) = puVar6[5];
          *(uint *)(puVar6[5] + 0x10) = uVar8;
        }
        iVar7 = *(int *)(param_1 + 0x30);
        iVar9 = *(int *)(iVar7 + 0x10);
        *(int *)(iVar2 + 0x14) = iVar7;
        *(int *)(iVar2 + 0x10) = iVar9;
        *(int *)(iVar9 + 0x14) = iVar2;
        *(int *)(iVar7 + 0x10) = iVar2;
        *(int *)(param_1 + 0x24) = (*(int *)(iVar2 + 8) + *(int *)(param_1 + 0x24) + -0x1c) - iVar2;
        goto LAB_ram_40005b94;
      }
    }
    FUN_ram_40005004();
  }
  return 0;
}


/* NanoCore 1.11, address 0x40005c78.
 * REA evidence: ev_9f2063c65bac0a138c8bb0b710b63047387016e502a484a3213140b8caa62720
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * thunk_FUN_ram_40005834(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = param_2 + 3U & 0xfffffffc;
  if (uVar8 < 0xc) {
    uVar8 = 0xc;
  }
  if (uVar8 < *(uint *)(param_1 + 0x24)) {
    if ((*(int *)(param_1 + 0x78) == 0) &&
       (iVar2 = FUN_ram_40004822(param_1 + 0x50,0xffffffff), iVar2 != 0)) {
      FUN_ram_40005004();
    }
    else {
      uVar5 = 0;
      puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x30))[4];
      while (*(undefined4 **)(param_1 + 0x30) != puVar1) {
        if (uVar8 <= uVar5) goto LAB_ram_40005880;
        uVar5 = (puVar1[2] - (int)puVar1) - 0x1c;
        if (uVar5 < uVar8) {
          puVar1 = (undefined4 *)puVar1[4];
        }
      }
      if (uVar8 <= uVar5) {
LAB_ram_40005880:
        if (uVar5 < uVar8 + 0x28) {
          iVar2 = *(int *)(param_1 + 0x24);
          *(uint *)(param_1 + 0x24) = iVar2 - uVar5;
          uVar5 = uVar5 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar5) {
            *(uint *)(param_1 + 0x28) = uVar5;
          }
          iVar2 = puVar1[4];
          *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
          *(int *)(puVar1[5] + 0x10) = iVar2;
          puVar1[4] = 0;
          puVar1[5] = 0;
        }
        else {
          iVar9 = (int)puVar1 + uVar8 + 0x1c;
          *(undefined4 *)((int)puVar1 + uVar8 + 0x1c) = 0x1ea01ea0;
          *(int *)(iVar9 + 4) = param_1;
          FUN_ram_4000504c(iVar9 + 0x18,0x20,4);
          uVar6 = puVar1[2];
          *(undefined4 **)(iVar9 + 0xc) = puVar1;
          uVar4 = puVar1[5];
          *(undefined4 *)(iVar9 + 8) = uVar6;
          iVar2 = *(int *)(param_1 + 0x24);
          *(int *)(puVar1[2] + 0xc) = iVar9;
          iVar7 = puVar1[4];
          puVar1[2] = iVar9;
          *(undefined4 *)(iVar7 + 0x14) = uVar4;
          *(int *)(puVar1[5] + 0x10) = iVar7;
          iVar7 = *(int *)(param_1 + 0x30);
          puVar1[4] = 0;
          puVar1[5] = 0;
          uVar4 = *(undefined4 *)(iVar7 + 0x10);
          *(int *)(iVar9 + 0x14) = iVar7;
          *(undefined4 *)(iVar9 + 0x10) = uVar4;
          *(int *)(*(int *)(iVar7 + 0x10) + 0x14) = iVar9;
          *(int *)(iVar7 + 0x10) = iVar9;
          iVar2 = iVar2 + -0x1c;
          *(uint *)(param_1 + 0x24) = iVar2 - uVar8;
          uVar8 = uVar8 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar8) {
            *(uint *)(param_1 + 0x28) = uVar8;
          }
        }
        *puVar1 = 0x1ea01ea1;
        iVar2 = FUN_ram_40006464();
        if (iVar2 == 0) {
          puVar3 = &DAT_ram_4009406c;
        }
        else {
          puVar3 = (undefined *)FUN_ram_40006464();
        }
        memcpy(puVar1 + 6,puVar3,4);
        if (*(int *)(param_1 + 0x78) == 0) {
          FUN_ram_400048c4(param_1 + 0x50);
        }
        return puVar1 + 7;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        FUN_ram_400048c4(param_1 + 0x50);
      }
    }
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.11, address 0x40005c7c.
 * REA evidence: ev_b1ffca242ecd66d4341a3a36c1f4c66bad2fb902d133765c3326e68f52b95372
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4000599e(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_1 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + -0x18);
  iVar2 = param_1 + -0x1c;
  if ((*(int *)(iVar3 + 0x78) == 0) &&
     (iVar4 = FUN_ram_40004822(iVar3 + 0x50,0xffffffff), iVar4 != 0)) {
    FUN_ram_40005004();
    return;
  }
  *(undefined4 *)(param_1 + -0x1c) = 0x1ea01ea0;
  uVar5 = *(uint *)(param_1 + -0x14);
  iVar4 = (*(int *)(iVar3 + 0x24) + uVar5) - iVar2;
  *(int *)(iVar3 + 0x24) = iVar4 + -0x1c;
  puVar6 = *(uint **)(param_1 + -0x10);
  bVar1 = (*puVar6 & 1) == 0;
  if (bVar1) {
    *(int *)(iVar3 + 0x24) = iVar4;
    puVar6[2] = uVar5;
    *(uint **)(*(int *)(param_1 + -0x14) + 0xc) = puVar6;
    iVar2 = *(int *)(param_1 + -0x10);
  }
  puVar6 = *(uint **)(iVar2 + 8);
  if ((*puVar6 & 1) == 0) {
    uVar5 = puVar6[5];
    *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 0x1c;
    uVar7 = puVar6[2];
    *(int *)(uVar7 + 0xc) = iVar2;
    *(uint *)(iVar2 + 8) = uVar7;
    uVar7 = puVar6[4];
    *(uint *)(uVar7 + 0x14) = uVar5;
    *(uint *)(puVar6[5] + 0x10) = uVar7;
  }
  if (!bVar1) {
    for (iVar4 = *(int *)(*(int *)(iVar3 + 0x30) + 0x10);
        (*(int *)(iVar3 + 0x30) != iVar4 &&
        ((*(int *)(iVar4 + 8) - iVar4) - 0x1cU < (*(int *)(iVar2 + 8) - iVar2) - 0x1cU));
        iVar4 = *(int *)(iVar4 + 0x10)) {
    }
    uVar8 = *(undefined4 *)(iVar4 + 0x14);
    *(int *)(iVar2 + 0x10) = iVar4;
    *(undefined4 *)(iVar2 + 0x14) = uVar8;
    *(int *)(*(int *)(iVar4 + 0x14) + 0x10) = iVar2;
    *(int *)(iVar4 + 0x14) = iVar2;
  }
  FUN_ram_4000504c(iVar2 + 0x18,0x20,4);
  if (*(int *)(iVar3 + 0x78) == 0) {
    FUN_ram_400048c4(iVar3 + 0x50);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40005c7e.
 * REA evidence: ev_64329aa723881a7c8bd755fca31d8e4f7a0cfb345079e05608f193567cf13429
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005c7e(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = FUN_ram_40005f2a(8,param_1);
  if (iVar3 != 0) {
    uVar1 = param_3 + 3U & 0xfffffffc;
    *(uint *)(iVar3 + 0x24) = uVar1;
    iVar2 = uVar1 + 4;
    iVar7 = iVar2 * param_2;
    *(int *)(iVar3 + 0x20) = iVar7;
    piVar4 = (int *)FUN_ram_40005656(iVar7);
    *(int **)(iVar3 + 0x1c) = piVar4;
    if (piVar4 == (int *)0x0) {
      FUN_ram_40005f98(iVar3);
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 0x38) = iVar3 + 0x34;
      *(int *)(iVar3 + 0x34) = iVar3 + 0x34;
      *(int *)(iVar3 + 0x2c) = param_2;
      *(int *)(iVar3 + 0x30) = param_2;
      piVar5 = piVar4;
      for (iVar6 = 0; iVar6 != param_2; iVar6 = iVar6 + 1) {
        *piVar5 = iVar2 + (int)piVar5;
        piVar5 = (int *)(iVar2 + (int)piVar5);
      }
      *(undefined4 *)((int)piVar4 + (iVar7 - iVar2)) = 0;
      *(int **)(iVar3 + 0x28) = piVar4;
    }
  }
  return iVar3;
}


/* NanoCore 1.11, address 0x40005cf8.
 * REA evidence: ev_a97c321a4f9379725586b10f2d51544937666eb964a093ea8ad2d3ab3e0e28fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_40005cf8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  iStack_24 = param_2;
  iVar2 = FUN_ram_40006464();
  uVar3 = FUN_ram_400002f4();
  iVar5 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x30) != 0) {
      piVar1 = *(int **)(param_1 + 0x28);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x28) = *piVar1;
      *piVar1 = param_1;
      FUN_ram_400002fa(uVar3);
      if (_DAT_ram_3004cc70 != (code *)0x0) {
        (*_DAT_ram_3004cc70)(param_1,piVar1 + 1);
      }
      return piVar1 + 1;
    }
    if (iStack_24 == 0) break;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_40006512(iVar2);
    iVar4 = *(int *)(param_1 + 0x34);
    *(int *)(iVar4 + 4) = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x1c) = iVar4;
    *(int *)(param_1 + 0x34) = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x20) = param_1 + 0x34;
    if (0 < iStack_24) {
      iVar5 = FUN_ram_400042ea();
      FUN_ram_400068a8(iVar2 + 0x54,0,&iStack_24);
      FUN_ram_40006784(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar3);
    FUN_ram_40006172();
    if (*(int *)(iVar2 + 0x38) != 0) {
      return (int *)0x0;
    }
    if (0 < iStack_24) {
      iVar4 = FUN_ram_400042ea();
      iStack_24 = (iStack_24 + iVar5) - iVar4;
      if (iStack_24 < 0) {
        iStack_24 = 0;
      }
    }
    uVar3 = FUN_ram_400002f4();
  }
  FUN_ram_400002fa(uVar3);
  FUN_ram_40005004(0xfffffffe);
  return (int *)0x0;
}


/* NanoCore 1.11, address 0x40005de0.
 * REA evidence: ev_7480df54ce6f1afe8eacdec7c0918ad86c564154b38158f43fd885145356ab50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005de0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + -4);
  if (_DAT_ram_3004cc74 != (code *)0x0) {
    (*_DAT_ram_3004cc74)(iVar1,param_1);
  }
  uVar2 = FUN_ram_400002f4();
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
  *(undefined4 *)(param_1 + -4) = *(undefined4 *)(iVar1 + 0x28);
  *(int *)(iVar1 + 0x28) = param_1 + -4;
  piVar3 = *(int **)(iVar1 + 0x34);
  if (piVar3 != (int *)(iVar1 + 0x34)) {
    piVar3[7] = 0;
    FUN_ram_400065d4(piVar3 + -7);
    FUN_ram_400002fa(uVar2);
    FUN_ram_40006172();
    return;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40005e58.
 * REA evidence: ev_50b8ca31a437f80fea6abeb170ef3f5aaf95a23d924b56c482922999d531d651
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40005e58(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_ram_30049964)[iVar1 * 4] == param_1) {
      return &DAT_ram_30049964 + iVar1 * 4;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xb);
  return (undefined4 *)0x0;
}


/* NanoCore 1.11, address 0x40005e80.
 * REA evidence: ev_de6a538b15941531d21f37fec2ab38dd52b618f4b625387a41fa8ed9f0341abf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005e80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_ram_40005e58(param_2);
  FUN_ram_400062ac();
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (puVar4 = (undefined4 *)*puVar1; puVar1 != puVar4; puVar4 = (undefined4 *)*puVar4) {
  }
  FUN_ram_400062ce();
  *(byte *)(param_1 + 0x10) = (byte)param_2 | 0x80;
  FUN_ram_400051b2(param_1,param_3,0x10);
  if (_DAT_ram_3004cc78 != (code *)0x0) {
    (*_DAT_ram_3004cc78)(param_1);
  }
  FUN_ram_400002f4();
  iVar3 = *(int *)(iVar2 + 4);
  *(int *)(iVar3 + 4) = param_1 + 0x14;
  *(int *)(param_1 + 0x14) = iVar3;
  *(int *)(iVar2 + 4) = param_1 + 0x14;
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40005ef4.
 * REA evidence: ev_6e94a5c0092eff55ac7b9b4c3f45fe68a9caada88e3cba5236110aebb513fbef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005ef4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_ram_3004cc7c != (code *)0x0) {
    (*_DAT_ram_3004cc7c)();
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_ram_400002f4();
  iVar1 = *(int *)(param_1 + 0x14);
  piVar2 = *(int **)(param_1 + 0x18);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x18) = param_1 + 0x14;
  *(int *)(param_1 + 0x14) = param_1 + 0x14;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40005f2a.
 * REA evidence: ev_fff578f6205acda0e932713386b89298a2cdc1554724caeb155ea361eccd9d92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40005f2a(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_40005e58();
  iVar2 = FUN_ram_40005656(*(undefined4 *)(iVar1 + 0xc));
  if (iVar2 != 0) {
    FUN_ram_4000504c(iVar2,0,*(undefined4 *)(iVar1 + 0xc));
    *(undefined1 *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    FUN_ram_400051b2(iVar2,param_2,0x10);
    if (_DAT_ram_3004cc78 != (code *)0x0) {
      (*_DAT_ram_3004cc78)(iVar2);
    }
    FUN_ram_400002f4();
    iVar3 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar2 + 0x14;
    *(int *)(iVar2 + 0x14) = iVar3;
    *(int *)(iVar1 + 4) = iVar2 + 0x14;
    *(int **)(iVar2 + 0x18) = (int *)(iVar1 + 4);
    FUN_ram_400002fa();
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x40005f98.
 * REA evidence: ev_c82a2e576f2a75ce9bc5ab48156c20183eb0cae169bf3309501f17bffc6aed25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005f98(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_ram_3004cc7c != (code *)0x0) {
    (*_DAT_ram_3004cc7c)();
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_ram_400002f4();
  iVar1 = *(int *)(param_1 + 0x14);
  piVar2 = *(int **)(param_1 + 0x18);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x18) = param_1 + 0x14;
  *(int *)(param_1 + 0x14) = param_1 + 0x14;
  FUN_ram_400002fa();
  FUN_ram_400056b4(param_1);
  return;
}


/* NanoCore 1.11, address 0x40005fd4.
 * REA evidence: ev_8e6b933b850477252a2dc946ecd20d79c1325ddad0c68604cc7d0873cbc6bc94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40005fd4(int param_1)

{
  return (uint)(int)*(char *)(param_1 + 0x10) >> 0x1f;
}


/* NanoCore 1.11, address 0x40005fdc.
 * REA evidence: ev_2e1a9dd8640c415a93b1d06f12445fc84ee8e4f8a25592c4e0c6f321eee1e815
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40005fdc(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_40005e58(param_2);
  if (param_1 != 0) {
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    FUN_ram_400062ac();
    for (puVar1 = *(undefined4 **)(iVar2 + 4); puVar1 != (undefined4 *)(iVar2 + 4);
        puVar1 = (undefined4 *)*puVar1) {
      iVar3 = FUN_ram_400051f8(puVar1 + -5,param_1,0x10);
      if (iVar3 == 0) {
        FUN_ram_400062ce();
        return puVar1 + -5;
      }
    }
    FUN_ram_400062ce();
  }
  return (undefined4 *)0x0;
}


