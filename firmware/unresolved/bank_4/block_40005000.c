/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40005000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40005014.
 * REA evidence: ev_52d4cb240714c2b7c2cfd01dbc09d4e5a37e97a01db72619e844d410a2a2e9f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005014(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40004dfe();
  uVar1 = param_1;
  if ((iVar2 == 0) && (iVar2 = FUN_ram_40006472(), uVar1 = param_1, iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x38) = param_1;
    uVar1 = _DAT_ram_300494fc;
  }
  _DAT_ram_300494fc = uVar1;
  return;
}


/* NanoCore 1.10, address 0x4000503a.
 * REA evidence: ev_be2428e971a0f97c6fee46186a3223954c14181a8d8d6c9d4e91babe4d85f546
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4000503a(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_40004dfe();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006472(), iVar1 != 0)) {
    puVar2 = (undefined1 *)(iVar1 + 0x38);
  }
  else {
    puVar2 = &DAT_ram_300494fc;
  }
  return puVar2;
}


/* NanoCore 1.10, address 0x4000505c.
 * REA evidence: ev_690ef17d185ad13cb14361cf10f9ab3932f8fed678585f0e14e7e566897c8662
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000505c(undefined4 *param_1,undefined1 param_2,uint param_3)

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


/* NanoCore 1.10, address 0x40005166.
 * REA evidence: ev_d463b20d5bfe4944970c688f62bb5bd49ca13f5e3dbf7471f47e34552aa21925
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005166(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.10, address 0x400051a2.
 * REA evidence: ev_34b884f5b67a09c2268648b3bc64d5c1ab1f3999392be30a61500825102f3d14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400051a2(int param_1,int param_2,int param_3)

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


/* NanoCore 1.10, address 0x400051c2.
 * REA evidence: ev_c565ae2b00c907d61a6867878872eb0bf29f5887c00f897eaa5ea7abe85f873b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400051c2(char *param_1,int param_2,int param_3)

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


/* NanoCore 1.10, address 0x400051ee.
 * REA evidence: ev_a1cfb41d0c31442e4f1dd0cbcaca111b58158185ed944c20d0bfab707b1bd658
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400051ee(int param_1,int param_2)

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


/* NanoCore 1.10, address 0x40005208.
 * REA evidence: ev_58c7ceeeeb0c0467cf33b368580509415390d4cfdf11ae10e024586e7a65d7c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005208(int param_1,int param_2,int param_3)

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


/* NanoCore 1.10, address 0x4000522c.
 * REA evidence: ev_c07e6bfb7177c7df436132ded73388c3f0c7a74fbd2a88cc905048099bbc8b2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000522c(int param_1,int param_2)

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


/* NanoCore 1.10, address 0x40005244.
 * REA evidence: ev_567ed409b43db8fe2fa56a6ea72dbee32bd036864f02d3a6e274d5c5ff571fa7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005244(char *param_1)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
  }
  return (int)pcVar1 - (int)param_1;
}


/* NanoCore 1.10, address 0x40005256.
 * REA evidence: ev_a039494a6e68447d7066619f5dd988f08dd58b7f43456f27efbcbabe3f77858b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005256(void)

{
  return;
}


/* NanoCore 1.10, address 0x40005258.
 * REA evidence: ev_a885e51a633a327b988c99d388968b6ba032e676700c6822527050b236065190
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005258(void)

{
  return;
}


/* NanoCore 1.10, address 0x4000525a.
 * REA evidence: ev_b9aa710095f32baa2b4f4898245c648fe9ce5775d8263c80d6a67afe1999f445
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40005256(void)

{
  return;
}


/* NanoCore 1.10, address 0x4000525c.
 * REA evidence: ev_34316261a51c1a0d12352daebfbb21f8ccaff26e58dd6e3d9d552b299519b023
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000525c(byte *param_1,uint param_2,byte *param_3,uint *param_4)

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
      goto LAB_ram_400052ae;
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
          goto LAB_ram_400053b6;
        }
        puVar8 = puVar7 + 1;
        uVar11 = *puVar7;
        param_3 = pbVar10 + 2;
      }
      if ((int)uVar11 < 0) {
        uVar11 = 0;
      }
    }
LAB_ram_400053b6:
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
switchD_ram_4000544e_caseD_65:
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
      goto LAB_ram_400052ae;
    }
    if (bVar1 < 99) {
      if (bVar1 != 0x25) {
        uVar14 = uVar14 | 0x40;
        if (bVar1 == 0x58) goto switchD_ram_4000544e_caseD_78;
        goto switchD_ram_4000544e_caseD_65;
      }
      if (pbVar3 < pbVar2) {
        *pbVar3 = 0x25;
      }
      pbVar10 = pbVar3 + 1;
      goto LAB_ram_400052ae;
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
      goto LAB_ram_400052ae;
    case 100:
    case 0x69:
      uVar14 = uVar14 | 2;
    case 0x75:
      uVar5 = 10;
      break;
    default:
      goto switchD_ram_4000544e_caseD_65;
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
      goto LAB_ram_4000558a;
    case 0x73:
      param_4 = puVar8 + 1;
      puVar4 = (undefined1 *)*puVar8;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_ram_40092110;
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
      goto LAB_ram_400052ae;
    case 0x78:
switchD_ram_4000544e_caseD_78:
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
LAB_ram_4000558a:
    pbVar10 = (byte *)FUN_ram_40004e1e(pbVar3,pbVar2,uVar6,uVar5,uVar9,uVar11,uVar14);
    param_4 = puVar8 + 1;
LAB_ram_400052ae:
    param_3 = param_3 + 1;
    pbVar3 = pbVar10;
  } while( true );
}


/* NanoCore 1.10, address 0x400055ea.
 * REA evidence: ev_a3e122efdea868837a0ca6b18601227567a561727ea94809828d0c267e37b74c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400055ea(void)

{
  FUN_ram_4000525c();
  return;
}


/* NanoCore 1.10, address 0x40005604.
 * REA evidence: ev_458b592a92d9b46e2aad96e79b452511a3dcaf2a897678f2d2881238190167ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005604(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_4000525c(param_1,0xffffffff,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x4000560c.
 * REA evidence: ev_19f093ad27b5c5a91288f55c6830fdbdd2e79b4f4dd9d99c8920bbdb60e82fa5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000560c(void)

{
  FUN_ram_40005604();
  return;
}


/* NanoCore 1.10, address 0x40005628.
 * REA evidence: ev_89dc4940b9755a53f297a7e207a491e4cb040ff0e0873309df57454bb9229ed6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005628(int param_1,uint param_2)

{
  FUN_ram_40005784(0x30049534,s_heap_sys_ram_40092170,param_1,
                   (param_2 & 0xfffffffc) - (param_1 + 3U & 0xfffffffc));
  FUN_ram_4000493c(0x30049500,&DAT_ram_4009217c,1);
  return;
}


/* NanoCore 1.10, address 0x40005666.
 * REA evidence: ev_616ed8690b774ba70cf129ee9e8213a1d8162ebd1e03a584ec106d3d49e9fc53
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40005666(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_ram_40004fd2();
  uVar1 = thunk_FUN_ram_40005844(0x30049534,param_1);
  FUN_ram_40004ff4();
  if (_DAT_ram_30049530 != (code *)0x0) {
    (*_DAT_ram_30049530)(uVar1,param_1);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4000569e.
 * REA evidence: ev_4e2d90541893afc0049ca0026b6a42b0ab7aeabcbeaa62eb84c6e9b35531a718
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000569e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005666(param_1 * param_2);
  if (iVar1 != 0) {
    FUN_ram_4000505c(iVar1,0,param_1 * param_2);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400056c4.
 * REA evidence: ev_3e97fc15bde41fd742f7c3503d6e952fdd38f625722b520d3c58c52baa7bb74c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400056c4(int param_1)

{
  if (_DAT_ram_3004952c != (code *)0x0) {
    (*_DAT_ram_3004952c)();
  }
  if (param_1 != 0) {
    FUN_ram_40004fd2();
    thunk_FUN_ram_400059ae(param_1);
    FUN_ram_40004ff4();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400056f4.
 * REA evidence: ev_5ee7f2145afd83db64209c37c6574cbe3cae98919badd8a964cb4e2f0633c99a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400056f4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 + 3U & 0xfffffffc;
  uVar2 = FUN_ram_40005666((param_1 + 3U & 0xfffffffc) + uVar1);
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


/* NanoCore 1.10, address 0x4000572e.
 * REA evidence: ev_f8d5ceb79ebbbe2788643650e03ac4a5a7eab094b5e27046569a7786b2978989
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000572e(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400056c4(*(undefined4 *)(param_1 + -4));
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40005738.
 * REA evidence: ev_5e009d1afe819869393c0c99b16b42294657b45c5bea2a1a7b23000bd0aef285
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005738(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0xff) != 0) {
      return (byte)(&DAT_ram_40092184)[param_1 & 0xff] + 1;
    }
    if ((param_1 & 0xff00) != 0) {
      return (byte)(&DAT_ram_40092184)[(param_1 & 0xffff) >> 8] + 9;
    }
    if ((param_1 & 0xff0000) != 0) {
      return (byte)(&DAT_ram_40092184)[(param_1 & 0xffffff) >> 0x10] + 0x11;
    }
    iVar1 = (byte)(&DAT_ram_40092184)[param_1 >> 0x18] + 0x19;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40005784.
 * REA evidence: ev_9953f4dc6c034948914bd02c52e5533c3490c3e09df30324c2627efd5a397495
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40005784(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_ram_40005e90(param_1,7,param_2);
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
  FUN_ram_4000505c(param_3 + 6,0x20,4);
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
  FUN_ram_400047b4(param_1 + 0x50,param_2,1,1);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 0;
}


/* NanoCore 1.10, address 0x40005844.
 * REA evidence: ev_2b3ecff1cf935a07db26d11a9947968b5d2202ca6c9f1dce7af0c6c44f5a464e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40005844(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *__src;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_2 + 3U & 0xfffffffc;
  if (uVar7 < 0xc) {
    uVar7 = 0xc;
  }
  if (uVar7 < *(uint *)(param_1 + 0x24)) {
    if ((*(int *)(param_1 + 0x78) == 0) &&
       (iVar2 = FUN_ram_40004832(param_1 + 0x50,0xffffffff), iVar2 != 0)) {
      FUN_ram_40005014();
    }
    else {
      uVar4 = 0;
      puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x30))[4];
      while (*(undefined4 **)(param_1 + 0x30) != puVar1) {
        if (uVar7 <= uVar4) goto LAB_ram_40005890;
        uVar4 = (puVar1[2] - (int)puVar1) - 0x1c;
        if (uVar4 < uVar7) {
          puVar1 = (undefined4 *)puVar1[4];
        }
      }
      if (uVar7 <= uVar4) {
LAB_ram_40005890:
        if (uVar4 < uVar7 + 0x28) {
          iVar2 = *(int *)(param_1 + 0x24);
          *(uint *)(param_1 + 0x24) = iVar2 - uVar4;
          uVar4 = uVar4 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar4) {
            *(uint *)(param_1 + 0x28) = uVar4;
          }
          iVar2 = puVar1[4];
          *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
          *(int *)(puVar1[5] + 0x10) = iVar2;
          puVar1[4] = 0;
          puVar1[5] = 0;
        }
        else {
          iVar8 = (int)puVar1 + uVar7 + 0x1c;
          *(undefined4 *)((int)puVar1 + uVar7 + 0x1c) = 0x1ea01ea0;
          *(int *)(iVar8 + 4) = param_1;
          FUN_ram_4000505c(iVar8 + 0x18,0x20,4);
          uVar5 = puVar1[2];
          *(undefined4 **)(iVar8 + 0xc) = puVar1;
          uVar3 = puVar1[5];
          *(undefined4 *)(iVar8 + 8) = uVar5;
          iVar2 = *(int *)(param_1 + 0x24);
          *(int *)(puVar1[2] + 0xc) = iVar8;
          iVar6 = puVar1[4];
          puVar1[2] = iVar8;
          *(undefined4 *)(iVar6 + 0x14) = uVar3;
          *(int *)(puVar1[5] + 0x10) = iVar6;
          iVar6 = *(int *)(param_1 + 0x30);
          puVar1[4] = 0;
          puVar1[5] = 0;
          uVar3 = *(undefined4 *)(iVar6 + 0x10);
          *(int *)(iVar8 + 0x14) = iVar6;
          *(undefined4 *)(iVar8 + 0x10) = uVar3;
          *(int *)(*(int *)(iVar6 + 0x10) + 0x14) = iVar8;
          *(int *)(iVar6 + 0x10) = iVar8;
          iVar2 = iVar2 + -0x1c;
          *(uint *)(param_1 + 0x24) = iVar2 - uVar7;
          uVar7 = uVar7 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar7) {
            *(uint *)(param_1 + 0x28) = uVar7;
          }
        }
        *puVar1 = 0x1ea01ea1;
        iVar2 = FUN_ram_40006472();
        if (iVar2 == 0) {
          __src = &DAT_ram_400922ac;
        }
        else {
          __src = (undefined *)FUN_ram_40006472();
        }
        memcpy(puVar1 + 6,__src,4);
        if (*(int *)(param_1 + 0x78) == 0) {
          FUN_ram_400048d4(param_1 + 0x50);
        }
        return puVar1 + 7;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        FUN_ram_400048d4(param_1 + 0x50);
      }
    }
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.10, address 0x400059ae.
 * REA evidence: ev_2292c9e4e2d4e76a1856ada1af7fe99504eb6efc449e7dc85872039ecb1ece6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400059ae(int param_1)

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
     (iVar4 = FUN_ram_40004832(iVar3 + 0x50,0xffffffff), iVar4 != 0)) {
    FUN_ram_40005014();
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
  FUN_ram_4000505c(iVar2 + 0x18,0x20,4);
  if (*(int *)(iVar3 + 0x78) == 0) {
    FUN_ram_400048d4(iVar3 + 0x50);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40005a94.
 * REA evidence: ev_f28d03cba45df08e837ec59269b3a06ec21531dcf6e63cbc0550c6e6c21aeb30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void * FUN_ram_40005a94(int param_1,void *param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  if (param_3 == 0) {
    FUN_ram_400059ae(param_2);
  }
  else {
    uVar1 = param_3 + 3U & 0xfffffffc;
    if (uVar1 < 0xc) {
      uVar1 = 0xc;
    }
    if (param_2 == (void *)0x0) {
      pvVar2 = (void *)FUN_ram_40005844(param_1,uVar1);
      return pvVar2;
    }
    uVar9 = *(int *)((int)param_2 + -0x14) - (int)param_2;
    if (uVar9 < uVar1) {
      if ((*(int *)(param_1 + 0x78) != 0) ||
         (iVar3 = FUN_ram_40004832(param_1 + 0x50,0xffffffff), iVar3 == 0)) {
        puVar7 = *(uint **)((int)param_2 + -0x14);
        if (((*puVar7 & 1) != 0) ||
           (uVar4 = puVar7[2], (uVar4 - (int)puVar7) + -0x1c + uVar9 <= uVar1 + 0xc)) {
          if (*(int *)(param_1 + 0x78) == 0) {
            FUN_ram_400048d4(param_1 + 0x50);
          }
          pvVar2 = (void *)FUN_ram_40005844(param_1,uVar1);
          if (pvVar2 == (void *)0x0) {
            return (void *)0x0;
          }
          if (uVar1 <= uVar9) {
            uVar9 = uVar1;
          }
          memcpy(pvVar2,param_2,uVar9);
          FUN_ram_400059ae(param_2);
          return pvVar2;
        }
        iVar3 = uVar9 + *(int *)(param_1 + 0x24);
        *(uint *)(param_1 + 0x24) = iVar3 - uVar1;
        uVar9 = (uVar1 - iVar3) + *(int *)(param_1 + 0x20);
        if (*(uint *)(param_1 + 0x28) < uVar9) {
          *(uint *)(param_1 + 0x28) = uVar9;
        }
        uVar9 = puVar7[4];
        uVar5 = puVar7[5];
        iVar10 = (int)param_2 + uVar1;
        *(uint *)(uVar9 + 0x14) = uVar5;
        *(uint *)(uVar5 + 0x10) = uVar9;
        *(uint *)(uVar4 + 0xc) = puVar7[3];
        *(uint *)(puVar7[3] + 8) = uVar4;
        *(undefined4 *)((int)param_2 + uVar1) = 0x1ea01ea0;
        *(int *)(iVar10 + 4) = param_1;
        FUN_ram_4000505c(iVar10 + 0x18,0x20,4);
        uVar6 = *(undefined4 *)((int)param_2 + -0x14);
        *(int *)(iVar10 + 0xc) = (int)param_2 + -0x1c;
        *(undefined4 *)(iVar10 + 8) = uVar6;
        *(int *)(*(int *)((int)param_2 + -0x14) + 0xc) = iVar10;
        *(int *)((int)param_2 + -0x14) = iVar10;
        iVar3 = *(int *)(param_1 + 0x30);
        uVar6 = *(undefined4 *)(iVar3 + 0x10);
        *(int *)(iVar10 + 0x14) = iVar3;
        *(undefined4 *)(iVar10 + 0x10) = uVar6;
        *(int *)(*(int *)(iVar3 + 0x10) + 0x14) = iVar10;
        *(int *)(iVar3 + 0x10) = iVar10;
LAB_ram_40005ba4:
        if (*(int *)(param_1 + 0x78) != 0) {
          return param_2;
        }
        FUN_ram_400048d4(param_1 + 0x50);
        return param_2;
      }
    }
    else {
      if (uVar9 <= uVar1 + 0x28) {
        return param_2;
      }
      if ((*(int *)(param_1 + 0x78) != 0) ||
         (iVar3 = FUN_ram_40004832(param_1 + 0x50,0xffffffff), iVar3 == 0)) {
        iVar3 = (int)param_2 + uVar1;
        *(undefined4 *)((int)param_2 + uVar1) = 0x1ea01ea0;
        *(int *)(iVar3 + 4) = param_1;
        FUN_ram_4000505c(iVar3 + 0x18,0x20,4);
        uVar6 = *(undefined4 *)((int)param_2 + -0x14);
        *(int *)(iVar3 + 0xc) = (int)param_2 + -0x1c;
        *(undefined4 *)(iVar3 + 8) = uVar6;
        *(int *)(*(int *)((int)param_2 + -0x14) + 0xc) = iVar3;
        *(int *)((int)param_2 + -0x14) = iVar3;
        puVar7 = *(uint **)(iVar3 + 8);
        if ((*puVar7 & 1) == 0) {
          uVar1 = puVar7[2];
          *(uint *)(param_1 + 0x24) = (int)puVar7 + ((*(int *)(param_1 + 0x24) + 0x1c) - uVar1);
          *(int *)(uVar1 + 0xc) = iVar3;
          uVar9 = puVar7[4];
          *(uint *)(iVar3 + 8) = uVar1;
          *(uint *)(uVar9 + 0x14) = puVar7[5];
          *(uint *)(puVar7[5] + 0x10) = uVar9;
        }
        iVar8 = *(int *)(param_1 + 0x30);
        iVar10 = *(int *)(iVar8 + 0x10);
        *(int *)(iVar3 + 0x14) = iVar8;
        *(int *)(iVar3 + 0x10) = iVar10;
        *(int *)(iVar10 + 0x14) = iVar3;
        *(int *)(iVar8 + 0x10) = iVar3;
        *(int *)(param_1 + 0x24) = (*(int *)(iVar3 + 8) + *(int *)(param_1 + 0x24) + -0x1c) - iVar3;
        goto LAB_ram_40005ba4;
      }
    }
    FUN_ram_40005014();
  }
  return (void *)0x0;
}


/* NanoCore 1.10, address 0x40005c88.
 * REA evidence: ev_464233408f2704e1a53adbf46ed05aeffbdec6045790390899c65bd612528fe2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * thunk_FUN_ram_40005844(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *__src;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_2 + 3U & 0xfffffffc;
  if (uVar7 < 0xc) {
    uVar7 = 0xc;
  }
  if (uVar7 < *(uint *)(param_1 + 0x24)) {
    if ((*(int *)(param_1 + 0x78) == 0) &&
       (iVar2 = FUN_ram_40004832(param_1 + 0x50,0xffffffff), iVar2 != 0)) {
      FUN_ram_40005014();
    }
    else {
      uVar4 = 0;
      puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x30))[4];
      while (*(undefined4 **)(param_1 + 0x30) != puVar1) {
        if (uVar7 <= uVar4) goto LAB_ram_40005890;
        uVar4 = (puVar1[2] - (int)puVar1) - 0x1c;
        if (uVar4 < uVar7) {
          puVar1 = (undefined4 *)puVar1[4];
        }
      }
      if (uVar7 <= uVar4) {
LAB_ram_40005890:
        if (uVar4 < uVar7 + 0x28) {
          iVar2 = *(int *)(param_1 + 0x24);
          *(uint *)(param_1 + 0x24) = iVar2 - uVar4;
          uVar4 = uVar4 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar4) {
            *(uint *)(param_1 + 0x28) = uVar4;
          }
          iVar2 = puVar1[4];
          *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
          *(int *)(puVar1[5] + 0x10) = iVar2;
          puVar1[4] = 0;
          puVar1[5] = 0;
        }
        else {
          iVar8 = (int)puVar1 + uVar7 + 0x1c;
          *(undefined4 *)((int)puVar1 + uVar7 + 0x1c) = 0x1ea01ea0;
          *(int *)(iVar8 + 4) = param_1;
          FUN_ram_4000505c(iVar8 + 0x18,0x20,4);
          uVar5 = puVar1[2];
          *(undefined4 **)(iVar8 + 0xc) = puVar1;
          uVar3 = puVar1[5];
          *(undefined4 *)(iVar8 + 8) = uVar5;
          iVar2 = *(int *)(param_1 + 0x24);
          *(int *)(puVar1[2] + 0xc) = iVar8;
          iVar6 = puVar1[4];
          puVar1[2] = iVar8;
          *(undefined4 *)(iVar6 + 0x14) = uVar3;
          *(int *)(puVar1[5] + 0x10) = iVar6;
          iVar6 = *(int *)(param_1 + 0x30);
          puVar1[4] = 0;
          puVar1[5] = 0;
          uVar3 = *(undefined4 *)(iVar6 + 0x10);
          *(int *)(iVar8 + 0x14) = iVar6;
          *(undefined4 *)(iVar8 + 0x10) = uVar3;
          *(int *)(*(int *)(iVar6 + 0x10) + 0x14) = iVar8;
          *(int *)(iVar6 + 0x10) = iVar8;
          iVar2 = iVar2 + -0x1c;
          *(uint *)(param_1 + 0x24) = iVar2 - uVar7;
          uVar7 = uVar7 + (*(int *)(param_1 + 0x20) - iVar2);
          if (*(uint *)(param_1 + 0x28) < uVar7) {
            *(uint *)(param_1 + 0x28) = uVar7;
          }
        }
        *puVar1 = 0x1ea01ea1;
        iVar2 = FUN_ram_40006472();
        if (iVar2 == 0) {
          __src = &DAT_ram_400922ac;
        }
        else {
          __src = (undefined *)FUN_ram_40006472();
        }
        memcpy(puVar1 + 6,__src,4);
        if (*(int *)(param_1 + 0x78) == 0) {
          FUN_ram_400048d4(param_1 + 0x50);
        }
        return puVar1 + 7;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        FUN_ram_400048d4(param_1 + 0x50);
      }
    }
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.10, address 0x40005c8c.
 * REA evidence: ev_40994d5dfbe1de7dcc448a9e71162bc0cb6bec01b196f851e9a79659a7a6ebaa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_400059ae(int param_1)

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
     (iVar4 = FUN_ram_40004832(iVar3 + 0x50,0xffffffff), iVar4 != 0)) {
    FUN_ram_40005014();
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
  FUN_ram_4000505c(iVar2 + 0x18,0x20,4);
  if (*(int *)(iVar3 + 0x78) == 0) {
    FUN_ram_400048d4(iVar3 + 0x50);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40005c8e.
 * REA evidence: ev_ca5c0801d755d34944f3129f3db5a9d29762100633aa53aec7232f66485a6802
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005c8e(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = FUN_ram_40005f3a(8,param_1);
  if (iVar3 != 0) {
    uVar1 = param_3 + 3U & 0xfffffffc;
    *(uint *)(iVar3 + 0x24) = uVar1;
    iVar2 = uVar1 + 4;
    iVar7 = iVar2 * param_2;
    *(int *)(iVar3 + 0x20) = iVar7;
    piVar4 = (int *)FUN_ram_40005666(iVar7);
    *(int **)(iVar3 + 0x1c) = piVar4;
    if (piVar4 == (int *)0x0) {
      FUN_ram_40005fa8(iVar3);
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


/* NanoCore 1.10, address 0x40005d08.
 * REA evidence: ev_967ee90e851cd8c79b787370ece939a43fbdc017b782602e082539e208c7dece
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_40005d08(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  iStack_24 = param_2;
  iVar2 = FUN_ram_40006472();
  uVar3 = FUN_ram_400002f4();
  iVar5 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x30) != 0) {
      piVar1 = *(int **)(param_1 + 0x28);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x28) = *piVar1;
      *piVar1 = param_1;
      FUN_ram_400002fa(uVar3);
      if (_DAT_ram_300495b0 != (code *)0x0) {
        (*_DAT_ram_300495b0)(param_1,piVar1 + 1);
      }
      return piVar1 + 1;
    }
    if (iStack_24 == 0) break;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_40006520(iVar2);
    iVar4 = *(int *)(param_1 + 0x34);
    *(int *)(iVar4 + 4) = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x1c) = iVar4;
    *(int *)(param_1 + 0x34) = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x20) = param_1 + 0x34;
    if (0 < iStack_24) {
      iVar5 = FUN_ram_400042fa();
      FUN_ram_400068b6(iVar2 + 0x54,0,&iStack_24);
      FUN_ram_40006792(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar3);
    FUN_ram_40006182();
    if (*(int *)(iVar2 + 0x38) != 0) {
      return (int *)0x0;
    }
    if (0 < iStack_24) {
      iVar4 = FUN_ram_400042fa();
      iStack_24 = (iStack_24 + iVar5) - iVar4;
      if (iStack_24 < 0) {
        iStack_24 = 0;
      }
    }
    uVar3 = FUN_ram_400002f4();
  }
  FUN_ram_400002fa(uVar3);
  FUN_ram_40005014(0xfffffffe);
  return (int *)0x0;
}


/* NanoCore 1.10, address 0x40005df0.
 * REA evidence: ev_be53eb116f972899e7368af17a011c4592fdf4175ca7c1551c58a80ea324439a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005df0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + -4);
  if (_DAT_ram_300495b4 != (code *)0x0) {
    (*_DAT_ram_300495b4)(iVar1,param_1);
  }
  uVar2 = FUN_ram_400002f4();
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
  *(undefined4 *)(param_1 + -4) = *(undefined4 *)(iVar1 + 0x28);
  *(int *)(iVar1 + 0x28) = param_1 + -4;
  piVar3 = *(int **)(iVar1 + 0x34);
  if (piVar3 != (int *)(iVar1 + 0x34)) {
    piVar3[7] = 0;
    FUN_ram_400065e2(piVar3 + -7);
    FUN_ram_400002fa(uVar2);
    FUN_ram_40006182();
    return;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40005e68.
 * REA evidence: ev_eba1ee98882888729f27c9c6e8f20b5be260f61db43bb8338a556ad2f121f23c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40005e68(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_ram_300462a4)[iVar1 * 4] == param_1) {
      return &DAT_ram_300462a4 + iVar1 * 4;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xb);
  return (undefined4 *)0x0;
}


/* NanoCore 1.10, address 0x40005e90.
 * REA evidence: ev_cb3ec02865e1de81c0b18bf18c278a6c5094a7bed28cd048b9e776f061175bd2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005e90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_ram_40005e68(param_2);
  FUN_ram_400062bc();
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (puVar4 = (undefined4 *)*puVar1; puVar1 != puVar4; puVar4 = (undefined4 *)*puVar4) {
  }
  FUN_ram_400062de();
  *(byte *)(param_1 + 0x10) = (byte)param_2 | 0x80;
  FUN_ram_400051c2(param_1,param_3,0x10);
  if (_DAT_ram_300495b8 != (code *)0x0) {
    (*_DAT_ram_300495b8)(param_1);
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


/* NanoCore 1.10, address 0x40005f04.
 * REA evidence: ev_cbdc656731efc5e3392aacc7ef083447e2bd51c19c04e7b13ec9b2b01ce849b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005f04(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_ram_300495bc != (code *)0x0) {
    (*_DAT_ram_300495bc)();
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


/* NanoCore 1.10, address 0x40005f3a.
 * REA evidence: ev_0df3e352ff1dcdc635f214ecf8c00589f7f519c696ecc534f3bfd5bcea74b2e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40005f3a(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_40005e68();
  iVar2 = FUN_ram_40005666(*(undefined4 *)(iVar1 + 0xc));
  if (iVar2 != 0) {
    FUN_ram_4000505c(iVar2,0,*(undefined4 *)(iVar1 + 0xc));
    *(undefined1 *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    FUN_ram_400051c2(iVar2,param_2,0x10);
    if (_DAT_ram_300495b8 != (code *)0x0) {
      (*_DAT_ram_300495b8)(iVar2);
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


/* NanoCore 1.10, address 0x40005fa8.
 * REA evidence: ev_e896b53a0a5b727f571606435ca98dc2b71186f73da63f42b9c18f3a9aa87ce1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005fa8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_ram_300495bc != (code *)0x0) {
    (*_DAT_ram_300495bc)();
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
  FUN_ram_400056c4(param_1);
  return;
}


/* NanoCore 1.10, address 0x40005fe4.
 * REA evidence: ev_9fd9a950a3815918c502de4592ce2c6e97b0a500d987d1a06966b24f2f695e64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40005fe4(int param_1)

{
  return (uint)(int)*(char *)(param_1 + 0x10) >> 0x1f;
}


/* NanoCore 1.10, address 0x40005fec.
 * REA evidence: ev_fcfda3b11fab342a5c15f1ee4dab77399f9d9fcc576241a409b61802b3fd766f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40005fec(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_40005e68(param_2);
  if (param_1 != 0) {
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    FUN_ram_400062bc();
    for (puVar1 = *(undefined4 **)(iVar2 + 4); puVar1 != (undefined4 *)(iVar2 + 4);
        puVar1 = (undefined4 *)*puVar1) {
      iVar3 = FUN_ram_40005208(puVar1 + -5,param_1,0x10);
      if (iVar3 == 0) {
        FUN_ram_400062de();
        return puVar1 + -5;
      }
    }
    FUN_ram_400062de();
  }
  return (undefined4 *)0x0;
}


