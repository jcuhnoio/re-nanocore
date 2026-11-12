/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40005000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4000509c.
 * REA evidence: ev_1dbc91abc973c0463bd12304bacb6ffeed13d81843aec56f73a27b1297ff3caf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000509c(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.12, address 0x400050d8.
 * REA evidence: ev_8610397303d22cc66a98fbb9eff8b744771aa9588c32c3d818e358f375b4bee8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400050d8(int param_1,int param_2,int param_3)

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


/* NanoCore 1.12, address 0x400050f8.
 * REA evidence: ev_7cb3fe2545f4b6054a9e0caa80301ebbf2aca40446b24f8feb63d18217c6c006
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400050f8(char *param_1,int param_2,int param_3)

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


/* NanoCore 1.12, address 0x40005124.
 * REA evidence: ev_a73ec28cfac4ea6a1fb42808de15a8fcc0aa091cc0b447e1c26a75d5d3f7ee2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005124(int param_1,int param_2)

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


/* NanoCore 1.12, address 0x4000513e.
 * REA evidence: ev_bd38300677de8cda3d5ea7e801a72af27a934c337c63982bfa0fe0644b2091d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000513e(int param_1,int param_2,int param_3)

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


/* NanoCore 1.12, address 0x40005162.
 * REA evidence: ev_232662dece769a6a58845e1a23ea8e3b95cea73da168d4d6a1182aef19878e02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005162(int param_1,int param_2)

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


/* NanoCore 1.12, address 0x4000517a.
 * REA evidence: ev_21150647f3c958fa56de618d7d59b81bb69b3f0aeac04f67a27d00c9ed538f56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000517a(char *param_1)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
  }
  return (int)pcVar1 - (int)param_1;
}


/* NanoCore 1.12, address 0x4000518c.
 * REA evidence: ev_a4806583e8ff75e5155748b52893be99e15eeeb589f6ab3be3bfeafe82d2647f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000518c(void)

{
  return;
}


/* NanoCore 1.12, address 0x4000518e.
 * REA evidence: ev_a7ac336b0a256561c47373667c996a43205d0f1fdaa5c92ebdb49064e174dfbb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000518e(void)

{
  return;
}


/* NanoCore 1.12, address 0x40005190.
 * REA evidence: ev_20afe9cdbd96b1ee9ba0382f4fe2c7588c0a27eab725dc7a6e7fdbaefeef0a7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4000518c(void)

{
  return;
}


/* NanoCore 1.12, address 0x40005192.
 * REA evidence: ev_88460f0150cedf56a69ab48e0c45cdca2b6d5c174af88f0ef05001248cab7263
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005192(byte *param_1,uint param_2,byte *param_3,uint *param_4)

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
      goto LAB_ram_400051e4;
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
          goto LAB_ram_400052ec;
        }
        puVar8 = puVar7 + 1;
        uVar11 = *puVar7;
        param_3 = pbVar10 + 2;
      }
      if ((int)uVar11 < 0) {
        uVar11 = 0;
      }
    }
LAB_ram_400052ec:
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
switchD_ram_40005384_caseD_65:
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
      goto LAB_ram_400051e4;
    }
    if (bVar1 < 99) {
      if (bVar1 != 0x25) {
        uVar14 = uVar14 | 0x40;
        if (bVar1 == 0x58) goto switchD_ram_40005384_caseD_78;
        goto switchD_ram_40005384_caseD_65;
      }
      if (pbVar3 < pbVar2) {
        *pbVar3 = 0x25;
      }
      pbVar10 = pbVar3 + 1;
      goto LAB_ram_400051e4;
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
      goto LAB_ram_400051e4;
    case 100:
    case 0x69:
      uVar14 = uVar14 | 2;
    case 0x75:
      uVar5 = 10;
      break;
    default:
      goto switchD_ram_40005384_caseD_65;
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
      goto LAB_ram_400054c0;
    case 0x73:
      param_4 = puVar8 + 1;
      puVar4 = (undefined1 *)*puVar8;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_ram_40095ff8;
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
      goto LAB_ram_400051e4;
    case 0x78:
switchD_ram_40005384_caseD_78:
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
LAB_ram_400054c0:
    pbVar10 = (byte *)FUN_ram_40004d56(pbVar3,pbVar2,uVar6,uVar5,uVar9,uVar11,uVar14);
    param_4 = puVar8 + 1;
LAB_ram_400051e4:
    param_3 = param_3 + 1;
    pbVar3 = pbVar10;
  } while( true );
}


/* NanoCore 1.12, address 0x40005520.
 * REA evidence: ev_af0e50ad6ea26c99a16c0c01cf46906b916b4ec9dafee2ca8c55e4452122b19c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005520(void)

{
  FUN_ram_40005192();
  return;
}


/* NanoCore 1.12, address 0x4000553a.
 * REA evidence: ev_6b6de08ea28519240139b9d730edae6925aa63ed7c9954e637e46170142003d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000553a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40005192(param_1,0xffffffff,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40005542.
 * REA evidence: ev_2ecf2ec76574fd660508dc09ff896ee3da6f69b07cfb3bb9c38f2e8ad50256a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005542(void)

{
  FUN_ram_4000553a();
  return;
}


/* NanoCore 1.12, address 0x4000555e.
 * REA evidence: ev_104916dfc456cd127de6b299703e2144ecbba6bc4699d5bb7a2cccdc3ed602c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000555e(int param_1,uint param_2)

{
  FUN_ram_40005694(0x3004db34,s_heap_sys_ram_40096058,param_1,
                   (param_2 & 0xfffffffc) - (param_1 + 3U & 0xfffffffc));
  FUN_ram_40004988(0x3004db00,&DAT_ram_40096064,1);
  return;
}


/* NanoCore 1.12, address 0x4000559c.
 * REA evidence: ev_2979163d23442414be216bd9705a4b5327f2d2d4fa2bb872369b9ec63a62e752
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000559c(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_ram_40004f0a();
  uVar1 = thunk_FUN_ram_40005754(0x3004db34,param_1);
  FUN_ram_40004f2c();
  if (_DAT_ram_3004db30 != (code *)0x0) {
    (*_DAT_ram_3004db30)(uVar1,param_1);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x400055d4.
 * REA evidence: ev_baee024912a674670fedeb63d1dc97b89fa9f1f52705994855d0a935dae31cc1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400055d4(int param_1)

{
  if (_DAT_ram_3004db2c != (code *)0x0) {
    (*_DAT_ram_3004db2c)();
  }
  if (param_1 != 0) {
    FUN_ram_40004f0a();
    thunk_FUN_ram_400058be(param_1);
    FUN_ram_40004f2c();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40005604.
 * REA evidence: ev_3f5c458432bf0b988e38e06a0b2c820eed4098b4b52f012068d9c22814e1296b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40005604(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 + 3U & 0xfffffffc;
  uVar2 = FUN_ram_4000559c((param_1 + 3U & 0xfffffffc) + uVar1);
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


/* NanoCore 1.12, address 0x4000563e.
 * REA evidence: ev_494132e84610434ddc96e2c7ff0636f76ab576887dae5064ef7dd92f2a578034
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000563e(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400055d4(*(undefined4 *)(param_1 + -4));
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40005648.
 * REA evidence: ev_99e186484fdef6476348ca71706e6090fa0050d0ee1b09cdfeac0808d456517f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005648(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0xff) != 0) {
      return (byte)(&DAT_ram_4009606c)[param_1 & 0xff] + 1;
    }
    if ((param_1 & 0xff00) != 0) {
      return (byte)(&DAT_ram_4009606c)[(param_1 & 0xffff) >> 8] + 9;
    }
    if ((param_1 & 0xff0000) != 0) {
      return (byte)(&DAT_ram_4009606c)[(param_1 & 0xffffff) >> 0x10] + 0x11;
    }
    iVar1 = (byte)(&DAT_ram_4009606c)[param_1 >> 0x18] + 0x19;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40005694.
 * REA evidence: ev_b5bd09601e08a4b02a776e59b2440e93598c8753303b998c07d171696fc9dbb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40005694(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_ram_40005da0(param_1,7,param_2);
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
  FUN_ram_40004f92(param_3 + 6,0x20,4);
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
  FUN_ram_40004800(param_1 + 0x50,param_2,1,1);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 0;
}


/* NanoCore 1.12, address 0x40005754.
 * REA evidence: ev_a36439401c01ea46760cbe846a0c813efc0040865234a9f97edb7da19e75a157
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40005754(int param_1,int param_2)

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
       (iVar2 = FUN_ram_4000487e(param_1 + 0x50,0xffffffff), iVar2 != 0)) {
      FUN_ram_40004f4a();
    }
    else {
      uVar5 = 0;
      puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x30))[4];
      while (*(undefined4 **)(param_1 + 0x30) != puVar1) {
        if (uVar8 <= uVar5) goto LAB_ram_400057a0;
        uVar5 = (puVar1[2] - (int)puVar1) - 0x1c;
        if (uVar5 < uVar8) {
          puVar1 = (undefined4 *)puVar1[4];
        }
      }
      if (uVar8 <= uVar5) {
LAB_ram_400057a0:
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
          FUN_ram_40004f92(iVar9 + 0x18,0x20,4);
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
        iVar2 = FUN_ram_40006382();
        if (iVar2 == 0) {
          puVar3 = &DAT_ram_40096194;
        }
        else {
          puVar3 = (undefined *)FUN_ram_40006382();
        }
        memcpy(puVar1 + 6,puVar3,4);
        if (*(int *)(param_1 + 0x78) == 0) {
          FUN_ram_40004920(param_1 + 0x50);
        }
        return puVar1 + 7;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        FUN_ram_40004920(param_1 + 0x50);
      }
    }
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.12, address 0x400058be.
 * REA evidence: ev_ae5668f466a525c5c47702da55d65ca3a6558dce82fe4ee7966ad9e60e6c9459
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400058be(int param_1)

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
     (iVar4 = FUN_ram_4000487e(iVar3 + 0x50,0xffffffff), iVar4 != 0)) {
    FUN_ram_40004f4a();
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
  FUN_ram_40004f92(iVar2 + 0x18,0x20,4);
  if (*(int *)(iVar3 + 0x78) == 0) {
    FUN_ram_40004920(iVar3 + 0x50);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400059a4.
 * REA evidence: ev_7810ac4c90e37328985a1e6f860ae9eb7b17896958f9634b220bf4fb0241c105
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400059a4(int param_1,int param_2,int param_3)

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
    FUN_ram_400058be(param_2);
  }
  else {
    uVar1 = param_3 + 3U & 0xfffffffc;
    if (uVar1 < 0xc) {
      uVar1 = 0xc;
    }
    if (param_2 == 0) {
      iVar2 = FUN_ram_40005754(param_1,uVar1);
      return iVar2;
    }
    uVar8 = *(int *)(param_2 + -0x14) - param_2;
    if (uVar8 < uVar1) {
      if ((*(int *)(param_1 + 0x78) != 0) ||
         (iVar2 = FUN_ram_4000487e(param_1 + 0x50,0xffffffff), iVar2 == 0)) {
        puVar6 = *(uint **)(param_2 + -0x14);
        if (((*puVar6 & 1) != 0) ||
           (uVar3 = puVar6[2], (uVar3 - (int)puVar6) + -0x1c + uVar8 <= uVar1 + 0xc)) {
          if (*(int *)(param_1 + 0x78) == 0) {
            FUN_ram_40004920(param_1 + 0x50);
          }
          iVar2 = FUN_ram_40005754(param_1,uVar1);
          if (iVar2 == 0) {
            return 0;
          }
          if (uVar1 <= uVar8) {
            uVar8 = uVar1;
          }
          memcpy(iVar2,param_2,uVar8);
          FUN_ram_400058be(param_2);
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
        FUN_ram_40004f92(iVar9 + 0x18,0x20,4);
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
LAB_ram_40005ab4:
        if (*(int *)(param_1 + 0x78) != 0) {
          return param_2;
        }
        FUN_ram_40004920(param_1 + 0x50);
        return param_2;
      }
    }
    else {
      if (uVar8 <= uVar1 + 0x28) {
        return param_2;
      }
      if ((*(int *)(param_1 + 0x78) != 0) ||
         (iVar2 = FUN_ram_4000487e(param_1 + 0x50,0xffffffff), iVar2 == 0)) {
        iVar2 = param_2 + uVar1;
        *(undefined4 *)(param_2 + uVar1) = 0x1ea01ea0;
        *(int *)(iVar2 + 4) = param_1;
        FUN_ram_40004f92(iVar2 + 0x18,0x20,4);
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
        goto LAB_ram_40005ab4;
      }
    }
    FUN_ram_40004f4a();
  }
  return 0;
}


/* NanoCore 1.12, address 0x40005b98.
 * REA evidence: ev_b635c5126cc73e80ae62334e95ce57cc21d19e350c2e0df6ce2e7c992bdd51af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * thunk_FUN_ram_40005754(int param_1,int param_2)

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
       (iVar2 = FUN_ram_4000487e(param_1 + 0x50,0xffffffff), iVar2 != 0)) {
      FUN_ram_40004f4a();
    }
    else {
      uVar5 = 0;
      puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x30))[4];
      while (*(undefined4 **)(param_1 + 0x30) != puVar1) {
        if (uVar8 <= uVar5) goto LAB_ram_400057a0;
        uVar5 = (puVar1[2] - (int)puVar1) - 0x1c;
        if (uVar5 < uVar8) {
          puVar1 = (undefined4 *)puVar1[4];
        }
      }
      if (uVar8 <= uVar5) {
LAB_ram_400057a0:
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
          FUN_ram_40004f92(iVar9 + 0x18,0x20,4);
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
        iVar2 = FUN_ram_40006382();
        if (iVar2 == 0) {
          puVar3 = &DAT_ram_40096194;
        }
        else {
          puVar3 = (undefined *)FUN_ram_40006382();
        }
        memcpy(puVar1 + 6,puVar3,4);
        if (*(int *)(param_1 + 0x78) == 0) {
          FUN_ram_40004920(param_1 + 0x50);
        }
        return puVar1 + 7;
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        FUN_ram_40004920(param_1 + 0x50);
      }
    }
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.12, address 0x40005b9c.
 * REA evidence: ev_026925ada561c7019cfbaec1978757b417b08d166c3a5ce3e8de2cacb7cc333b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_400058be(int param_1)

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
     (iVar4 = FUN_ram_4000487e(iVar3 + 0x50,0xffffffff), iVar4 != 0)) {
    FUN_ram_40004f4a();
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
  FUN_ram_40004f92(iVar2 + 0x18,0x20,4);
  if (*(int *)(iVar3 + 0x78) == 0) {
    FUN_ram_40004920(iVar3 + 0x50);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40005b9e.
 * REA evidence: ev_1751b44132ef978d6d386c50800cc3d84e0aa0c4dec3a81447c2fa2640dc2265
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40005b9e(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = FUN_ram_40005e4a(8,param_1);
  if (iVar3 != 0) {
    uVar1 = param_3 + 3U & 0xfffffffc;
    *(uint *)(iVar3 + 0x24) = uVar1;
    iVar2 = uVar1 + 4;
    iVar7 = iVar2 * param_2;
    *(int *)(iVar3 + 0x20) = iVar7;
    piVar4 = (int *)FUN_ram_4000559c(iVar7);
    *(int **)(iVar3 + 0x1c) = piVar4;
    if (piVar4 == (int *)0x0) {
      FUN_ram_40005eb8(iVar3);
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


/* NanoCore 1.12, address 0x40005c18.
 * REA evidence: ev_e0671c06f79764319dbfd666372d285b5894f5cbb5d4688161c988a150e6332d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_40005c18(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  iStack_24 = param_2;
  iVar2 = FUN_ram_40006382();
  uVar3 = FUN_ram_400002f4();
  iVar5 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x30) != 0) {
      piVar1 = *(int **)(param_1 + 0x28);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x28) = *piVar1;
      *piVar1 = param_1;
      FUN_ram_400002fa(uVar3);
      if (_DAT_ram_3004dbb0 != (code *)0x0) {
        (*_DAT_ram_3004dbb0)(param_1,piVar1 + 1);
      }
      return piVar1 + 1;
    }
    if (iStack_24 == 0) break;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_40006430(iVar2);
    iVar4 = *(int *)(param_1 + 0x34);
    *(int *)(iVar4 + 4) = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x1c) = iVar4;
    *(int *)(param_1 + 0x34) = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x20) = param_1 + 0x34;
    if (0 < iStack_24) {
      iVar5 = FUN_ram_40004346();
      FUN_ram_400067c6(iVar2 + 0x54,0,&iStack_24);
      FUN_ram_400066a2(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar3);
    FUN_ram_40006092();
    if (*(int *)(iVar2 + 0x38) != 0) {
      return (int *)0x0;
    }
    if (0 < iStack_24) {
      iVar4 = FUN_ram_40004346();
      iStack_24 = (iStack_24 + iVar5) - iVar4;
      if (iStack_24 < 0) {
        iStack_24 = 0;
      }
    }
    uVar3 = FUN_ram_400002f4();
  }
  FUN_ram_400002fa(uVar3);
  FUN_ram_40004f4a(0xfffffffe);
  return (int *)0x0;
}


/* NanoCore 1.12, address 0x40005d00.
 * REA evidence: ev_eac4dc488140b01b7b3887261781a36c2786766c669b77ab032eb94282399c8d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005d00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + -4);
  if (_DAT_ram_3004dbb4 != (code *)0x0) {
    (*_DAT_ram_3004dbb4)(iVar1,param_1);
  }
  uVar2 = FUN_ram_400002f4();
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
  *(undefined4 *)(param_1 + -4) = *(undefined4 *)(iVar1 + 0x28);
  *(int *)(iVar1 + 0x28) = param_1 + -4;
  piVar3 = *(int **)(iVar1 + 0x34);
  if (piVar3 != (int *)(iVar1 + 0x34)) {
    piVar3[7] = 0;
    FUN_ram_400064f2(piVar3 + -7);
    FUN_ram_400002fa(uVar2);
    FUN_ram_40006092();
    return;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40005d78.
 * REA evidence: ev_c980ce71582bc68b41a113f7a6a1b59cfe3335591a7378d291d512f972f51e25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40005d78(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_ram_3004a8a4)[iVar1 * 4] == param_1) {
      return &DAT_ram_3004a8a4 + iVar1 * 4;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xb);
  return (undefined4 *)0x0;
}


/* NanoCore 1.12, address 0x40005da0.
 * REA evidence: ev_e59ddebee8c2caf5655ce06c6f93d856c056c04b02f1e63600d3b3d724599e54
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005da0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_ram_40005d78(param_2);
  FUN_ram_400061cc();
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (puVar4 = (undefined4 *)*puVar1; puVar1 != puVar4; puVar4 = (undefined4 *)*puVar4) {
  }
  FUN_ram_400061ee();
  *(byte *)(param_1 + 0x10) = (byte)param_2 | 0x80;
  FUN_ram_400050f8(param_1,param_3,0x10);
  if (_DAT_ram_3004dbb8 != (code *)0x0) {
    (*_DAT_ram_3004dbb8)(param_1);
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


/* NanoCore 1.12, address 0x40005e14.
 * REA evidence: ev_b757c1c200b7627661c7cdead10202e84765ba01c62463638b516ffcee399357
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005e14(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_ram_3004dbbc != (code *)0x0) {
    (*_DAT_ram_3004dbbc)();
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


/* NanoCore 1.12, address 0x40005e4a.
 * REA evidence: ev_ace0a95a0c5837bf6d03fe1b09a6540d7203c99cb9231ed5fd3c846a555d00cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40005e4a(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_40005d78();
  iVar2 = FUN_ram_4000559c(*(undefined4 *)(iVar1 + 0xc));
  if (iVar2 != 0) {
    FUN_ram_40004f92(iVar2,0,*(undefined4 *)(iVar1 + 0xc));
    *(undefined1 *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    FUN_ram_400050f8(iVar2,param_2,0x10);
    if (_DAT_ram_3004dbb8 != (code *)0x0) {
      (*_DAT_ram_3004dbb8)(iVar2);
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


/* NanoCore 1.12, address 0x40005eb8.
 * REA evidence: ev_437c605f8e0e7c94344c62025bfa2c421eee6d000b70f6abc808e7e9630c5034
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005eb8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_DAT_ram_3004dbbc != (code *)0x0) {
    (*_DAT_ram_3004dbbc)();
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
  FUN_ram_400055d4(param_1);
  return;
}


/* NanoCore 1.12, address 0x40005ef4.
 * REA evidence: ev_9cc9fe6fab564d0b54605a87689ba30272b0d7024ea525de5c9825806dddc879
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40005ef4(int param_1)

{
  return (uint)(int)*(char *)(param_1 + 0x10) >> 0x1f;
}


/* NanoCore 1.12, address 0x40005efc.
 * REA evidence: ev_ff0c77e280a55878c83421ae09d10b5beab2c4aa4732b80c69b1cfa3af8f2380
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40005efc(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_40005d78(param_2);
  if (param_1 != 0) {
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    FUN_ram_400061cc();
    for (puVar1 = *(undefined4 **)(iVar2 + 4); puVar1 != (undefined4 *)(iVar2 + 4);
        puVar1 = (undefined4 *)*puVar1) {
      iVar3 = FUN_ram_4000513e(puVar1 + -5,param_1,0x10);
      if (iVar3 == 0) {
        FUN_ram_400061ee();
        return puVar1 + -5;
      }
    }
    FUN_ram_400061ee();
  }
  return (undefined4 *)0x0;
}


/* NanoCore 1.12, address 0x40005f4e.
 * REA evidence: ev_e40bd093aecbab44f22f734e5e95c4773f0856212aaf482ffbb68c108e4d8318
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005f4e(void)

{
  undefined1 *puVar1;
  
  _DAT_ram_3004dbd8 = 0;
  puVar1 = &DAT_ram_3004dbe0;
  do {
    *(undefined1 **)(puVar1 + 4) = puVar1;
    *(undefined1 **)puVar1 = puVar1;
    puVar1 = puVar1 + 8;
  } while (puVar1 != &DAT_ram_3004dce0);
  _DAT_ram_3004dce0 = 0;
  return;
}


/* NanoCore 1.12, address 0x40005f7a.
 * REA evidence: ev_4d7b66ccdce60c9a45998752036dcb388f0d829735cc0f1227e180210c059594
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005f7a(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  FUN_ram_400002f4();
  if (_DAT_ram_3004dbd0 == param_1) {
    *(byte *)(_DAT_ram_3004dbd0 + 0x3c) = *(byte *)(_DAT_ram_3004dbd0 + 0x3c) & 0xf8 | 3;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3c);
    uVar3 = (uint)*(byte *)(param_1 + 0x3d);
    *(byte *)(param_1 + 0x3c) = bVar1 & 0xf8 | 1;
    iVar2 = uVar3 * 8;
    iVar4 = param_1 + 0x1c;
    if ((bVar1 & 8) == 0) {
      iVar6 = *(int *)(&DAT_ram_3004dbe0 + uVar3 * 8);
      *(int *)(iVar6 + 4) = iVar4;
      *(int *)(param_1 + 0x1c) = iVar6;
      *(int *)(&DAT_ram_3004dbe0 + uVar3 * 8) = iVar4;
      *(undefined1 **)(param_1 + 0x20) = &DAT_ram_3004dbe0 + iVar2;
    }
    else {
      piVar5 = *(int **)(&DAT_ram_3004dbe4 + iVar2);
      *piVar5 = iVar4;
      *(int **)(param_1 + 0x20) = piVar5;
      *(int *)(&DAT_ram_3004dbe4 + iVar2) = iVar4;
      *(undefined1 **)(param_1 + 0x1c) = &DAT_ram_3004dbe0 + iVar2;
    }
    _DAT_ram_3004dce0 = *(uint *)(param_1 + 0x40) | _DAT_ram_3004dce0;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40005ffe.
 * REA evidence: ev_fc0b97014c634bf8677e58bdd92e9fb9a1959c72676df0584a6c2542e7702cb9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40005ffe(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_ram_400002f4();
  iVar1 = *(int *)(param_1 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x20);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  if (*(undefined1 **)(&DAT_ram_3004dbe0 + (uint)*(byte *)(param_1 + 0x3d) * 8) ==
      &DAT_ram_3004dbe0 + (uint)*(byte *)(param_1 + 0x3d) * 8) {
    _DAT_ram_3004dce0 = ~*(uint *)(param_1 + 0x40) & _DAT_ram_3004dce0;
  }
  FUN_ram_400002fa();
  return;
}


