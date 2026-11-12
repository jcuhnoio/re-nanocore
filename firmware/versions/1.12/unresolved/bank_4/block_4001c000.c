/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4001c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4001c0a8.
 * REA evidence: ev_7f761dcc92da007b548cb422311f93148a053b0ea9a3392442763dba0a936fa0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c0a8(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_5c [88];
  
  pcVar1 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  FUN_ram_4002d834(auStack_5c,0x49,pcVar1,0x12);
  FUN_ram_40017bd8(_DAT_ram_3006ad2c,&DAT_ram_3006ad30,auStack_5c);
  FUN_ram_4001b31e();
  DAT_ram_3004ad08 = 0xff;
  FUN_ram_4001bf0a();
  return;
}


/* NanoCore 1.12, address 0x4001c0f2.
 * REA evidence: ev_2570e6f6f69856fc0e3e522798a94d6edd718e03a2529a62aeb24339c16671fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001c0f2(int param_1,int param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  undefined1 auStack_6c [88];
  
  pcVar1 = (char *)FUN_ram_4002d6f8(0x73);
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    param_4 = (char *)FUN_ram_4002d6f8(0x5e);
  }
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    param_4 = param_3;
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (param_2 <= param_1) {
    param_1 = param_2 + -1;
  }
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    pcVar1 = s__d__d__s_ram_4009a258;
  }
  FUN_ram_40005520(auStack_6c,0x49,pcVar1,param_1 + 1,param_2,param_4);
  FUN_ram_4001c0a8(auStack_6c);
  return;
}


/* NanoCore 1.12, address 0x4001c180.
 * REA evidence: ev_ad814b5e54a725d807b814dbf3b3697435ce755240dfee442cb8dbfe653f2d4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001c180(uint param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  if (param_2 <= param_1) {
    if (param_5 == 0) {
      param_5 = FUN_ram_4002d6f8(0x5e);
    }
    FUN_ram_4001c0a8(param_5);
    return;
  }
  uVar1 = FUN_ram_4002d6f8(0x5e);
  FUN_ram_4001c0f2(param_1,param_3,param_1 * 0x10 + param_4,uVar1);
  return;
}


/* NanoCore 1.12, address 0x4001c1cc.
 * REA evidence: ev_da6eb54c68b7ed4a2f510779d3cdd1adfa5ad097f7cc2a58822623d8f79d1955
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c1cc(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_1 == 0) {
LAB_ram_4001c3d8:
    if (DAT_ram_3006a744 == '\0') {
      FUN_ram_4001bd36();
    }
    uVar2 = DAT_ram_3004acfc;
    if (((DAT_ram_3006aa1c != '\0') && (_DAT_ram_3006aa20 == 100)) && (-1 < (int)DAT_ram_3004ad00))
    {
      uVar2 = DAT_ram_3004ad00;
    }
    uVar5 = FUN_ram_4002d6f8(0x5f);
    uVar9 = 0x3006a748;
LAB_ram_4001c428:
    uVar8 = 0x1e;
    uVar4 = 0x1e;
LAB_ram_4001c2ac:
    FUN_ram_4001c180(uVar2,uVar4,uVar8,uVar9,uVar5);
    return;
  }
  iVar1 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0c0,0x10);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4001ad18(param_1);
    if (uVar2 < 0xc) {
      if (uVar2 == 8) {
        pcVar3 = (char *)FUN_ram_4002d6f8(0x61);
        uVar4 = FUN_ram_4002d6f8(0x5e);
        uVar8 = 0xc;
        uVar2 = 8;
        goto LAB_ram_4001c21a;
      }
      if (uVar2 == 9) {
        pcVar3 = (char *)FUN_ram_4002d6f8(0x56);
        uVar4 = FUN_ram_4002d6f8(0x5e);
        uVar8 = 0xc;
        uVar2 = 9;
        goto LAB_ram_4001c21a;
      }
      if (uVar2 == 10) {
        pcVar3 = (char *)FUN_ram_4002d6f8(0x5b);
        uVar4 = FUN_ram_4002d6f8(0x5e);
        uVar8 = 0xc;
        uVar2 = 10;
        goto LAB_ram_4001c21a;
      }
      if (uVar2 == 0xb) {
        uVar4 = FUN_ram_4002d6f8(0x5e);
        pcVar3 = s_MOTION_WAH_ram_4009a264;
        uVar8 = 0xc;
        uVar2 = 0xb;
        goto LAB_ram_4001c21a;
      }
    }
    else {
      uVar2 = 0;
    }
    if (DAT_ram_3006ad64 == '\0') {
      FUN_ram_4001afea();
    }
    uVar5 = FUN_ram_4002d6f8(0x5f);
    uVar9 = 0x3006ad68;
    uVar8 = 0xc;
    uVar4 = 8;
    goto LAB_ram_4001c2ac;
  }
  iVar1 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0bc,0x10);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4001ad18(param_1);
    if (uVar2 < 4) {
      if (uVar2 == 2) {
        uVar8 = 0x78;
      }
      else if (uVar2 == 3) {
        uVar8 = 0x45;
      }
      else {
        if (uVar2 != 1) goto LAB_ram_4001c2de;
        uVar8 = 0x21;
      }
      pcVar3 = (char *)FUN_ram_4002d6f8(uVar8);
    }
    else {
LAB_ram_4001c2de:
      pcVar3 = (char *)FUN_ram_4002d6f8(0x20);
      uVar2 = 0;
    }
    uVar4 = FUN_ram_4002d6f8(0x5e);
    uVar8 = 4;
    goto LAB_ram_4001c21a;
  }
  iVar1 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0d0,0x10);
  if (iVar1 != 0) {
    iVar1 = FUN_ram_4000513e(param_1,s_delay_ram_4009a0c8,0x10);
    if (iVar1 != 0) {
      iVar1 = FUN_ram_4000513e(param_1,s_reverb_ram_4009a0d4,0x10);
      if (iVar1 == 0) {
        uVar6 = FUN_ram_4001ad18(param_1);
        if (uVar6 < 8) {
          if (uVar6 == 4) {
            uVar6 = 2;
          }
        }
        else {
          uVar6 = 6;
        }
        uVar2 = FUN_ram_4001be40(uVar6);
        switch(uVar6) {
        case 0:
          uVar8 = 0x62;
          break;
        case 1:
          uVar8 = 99;
          break;
        case 2:
          uVar8 = 100;
          break;
        case 3:
          uVar8 = 0x65;
          break;
        default:
          uVar8 = 0x68;
          break;
        case 5:
          uVar8 = 0x67;
          break;
        case 7:
          uVar8 = 0x66;
        }
        pcVar3 = (char *)FUN_ram_4002d6f8(uVar8);
        uVar4 = FUN_ram_4002d6f8(0x5e);
        uVar8 = 7;
        goto LAB_ram_4001c21a;
      }
      iVar1 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0dc,0x10);
      if (iVar1 == 0) {
        uVar6 = FUN_ram_4001ad18(param_1);
        uVar2 = uVar6;
        if (2 < uVar6) {
          uVar2 = 2;
        }
        uVar2 = uVar2 & 0xff;
        if (uVar6 == 0) {
          uVar8 = 0x77;
        }
        else if (uVar6 == 1) {
          uVar8 = 0x76;
        }
        else {
          uVar8 = 0x75;
        }
        pcVar3 = (char *)FUN_ram_4002d6f8(uVar8);
        uVar4 = FUN_ram_4002d6f8(0x5e);
        uVar8 = 3;
        goto LAB_ram_4001c21a;
      }
      iVar1 = FUN_ram_4000513e(param_1,&DAT_ram_4009acc0,0x10);
      if (iVar1 == 0) goto LAB_ram_4001c3d8;
      iVar1 = FUN_ram_4000513e(param_1,&DAT_ram_4009a0c4,0x10);
      if (iVar1 != 0) {
        FUN_ram_4002d77c(param_1);
        FUN_ram_4001c0a8();
        return;
      }
      if (DAT_ram_3006aec8 == '\0') {
        FUN_ram_4001b140();
      }
      uVar2 = DAT_ram_3004ad20;
      if (((DAT_ram_3006aa1c != '\0') && (_DAT_ram_3006aa20 == 100)) && (-1 < (int)DAT_ram_3004ad24)
         ) {
        uVar2 = DAT_ram_3004ad24;
      }
      uVar5 = FUN_ram_4002d6f8(0x60);
      uVar9 = 0x3006aecc;
      goto LAB_ram_4001c428;
    }
    uVar2 = FUN_ram_4001ad18(param_1);
    if (uVar2 < 8) {
      switch(uVar2 - 1 & 0xff) {
      case 0:
        uVar8 = 0x1f;
        break;
      case 1:
        uVar8 = 0x4b;
        break;
      case 2:
        uVar8 = 0x4c;
        break;
      case 3:
        uVar8 = 0x4d;
        break;
      case 4:
        uVar8 = 0x4e;
        break;
      case 5:
        uVar8 = 0x4f;
        break;
      case 6:
        uVar8 = 0x50;
        break;
      default:
        goto switchD_ram_4001c56e_default;
      }
      pcVar3 = (char *)FUN_ram_4002d6f8(uVar8);
    }
    else {
switchD_ram_4001c56e_default:
      pcVar3 = (char *)FUN_ram_4002d6f8(0x1e);
      uVar2 = 0;
    }
    uVar4 = FUN_ram_4002d6f8(0x5e);
    uVar8 = 8;
    goto LAB_ram_4001c21a;
  }
  iVar1 = FUN_ram_4001ad18(param_1);
  iVar7 = FUN_ram_40025d4e(5,iVar1);
  if (iVar7 < 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_ram_40025d4e(5);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  switch(iVar1 - 1U & 0xff) {
  case 0:
    uVar8 = 0x1c;
    break;
  case 1:
    uVar8 = 0x1d;
    break;
  case 2:
    uVar8 = 0x22;
    break;
  case 3:
    uVar8 = 0x23;
    break;
  default:
    uVar8 = 0x1b;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0x10:
    pcVar3 = (char *)nc_effect_name(5,iVar1,2);
    goto LAB_ram_4001c2f4;
  }
  pcVar3 = (char *)FUN_ram_4002d6f8(uVar8);
LAB_ram_4001c2f4:
  uVar8 = FUN_ram_40025d1e(5);
  uVar4 = FUN_ram_4002d6f8(0x5e);
LAB_ram_4001c21a:
  FUN_ram_4001c0f2(uVar2,uVar8,pcVar3,uVar4);
  return;
}


/* NanoCore 1.12, address 0x4001c600.
 * REA evidence: ev_75ee3acab6255a767bc789b73b8363a60b14b13a13573a0779f6aa62d35456f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001c600(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x1e) {
    if (DAT_ram_3006a744 == '\0') {
      FUN_ram_4001bd36();
    }
    iVar1 = FUN_ram_4000c968(param_1 & 0xff);
    if (iVar1 == 0) {
      DAT_ram_3004ad00 = param_1;
      DAT_ram_3004ad04 = param_1;
      if (((param_2 != 0) && (_DAT_ram_3006aa24 != 0)) &&
         (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009acc0,0x10), iVar1 == 0)) {
        FUN_ram_4001c1cc(_DAT_ram_3006aa24);
        return 0;
      }
      return 0;
    }
    FUN_ram_4001bd36();
    DAT_ram_3004ad00 = DAT_ram_3004acfc;
    if (((param_2 != 0) && (_DAT_ram_3006aa24 != 0)) &&
       (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009acc0,0x10), iVar1 == 0)) {
      FUN_ram_4001c1cc(_DAT_ram_3006aa24);
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4001c6b2.
 * REA evidence: ev_f2686a4db8eaf15cd43544952059efdde21712d81615f665dd192a8f6f12566f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001c6b2(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x1e) {
    if (DAT_ram_3006aec8 == '\0') {
      FUN_ram_4001b140();
    }
    iVar1 = FUN_ram_4000c9bc(param_1 & 0xff);
    if (iVar1 == 0) {
      DAT_ram_3004ad24 = param_1;
      DAT_ram_3004ad28 = param_1;
      if (((param_2 != 0) && (_DAT_ram_3006aa24 != 0)) &&
         (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0c4,0x10), iVar1 == 0)) {
        FUN_ram_4001c1cc(_DAT_ram_3006aa24);
        return 0;
      }
      return 0;
    }
    FUN_ram_4001b140();
    DAT_ram_3004ad24 = DAT_ram_3004ad20;
    if (((param_2 != 0) && (_DAT_ram_3006aa24 != 0)) &&
       (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0c4,0x10), iVar1 == 0)) {
      FUN_ram_4001c1cc(_DAT_ram_3006aa24);
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4001c764.
 * REA evidence: ev_8fa71399d197f64e6cf7d027a43ed760e5ae2319615aaba65789b62ba527e2ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c764(undefined4 param_1,int param_2,code *param_3,int *param_4,int *param_5,
                     undefined4 param_6,code *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_14 [2];
  
  if (param_2 == 0) {
    (*param_3)();
  }
  if (-1 < *param_4) {
    if (*param_5 < 0) {
      *param_5 = *param_4;
    }
    iVar2 = FUN_ram_40028c9a(*param_5,param_1,0x1e,param_6,aiStack_14);
    uVar1 = _DAT_ram_3006aa24;
    if (iVar2 != 0) {
      *param_5 = aiStack_14[0];
      FUN_ram_4001c1cc(uVar1);
      (*param_7)(*param_5);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4001c7bc.
 * REA evidence: ev_6a52ef415eb2def897a34464f0707b47426f636b5239f53a7db0952baaeedb29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c7bc(undefined4 param_1,char *param_2,code *param_3,int *param_4,int *param_5,
                     code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  
  if ((_DAT_ram_3006aa24 != 0) &&
     (iVar1 = FUN_ram_4000513e(_DAT_ram_3006aa24,param_1,0x10), iVar1 == 0)) {
    if (*param_2 == '\0') {
      (*param_3)();
    }
    if ((*param_4 < 0) || (iVar1 = *param_5, iVar1 < 0)) {
      FUN_ram_4001c1cc(_DAT_ram_3006aa24);
      return;
    }
    if (*param_4 != iVar1) {
                    /* WARNING: Could not recover jumptable at 0x4001c838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar1,1);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4001c84c.
 * REA evidence: ev_5e6e5291b5c1aa8971308dfa140fb4893ae9876eedb7bd2a427ebd369e3dd36e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4001c84c(int param_1,int param_2,uint *param_3,uint param_4,int param_5,code *param_6)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_3;
    bVar1 = false;
    if (DAT_ram_3006aa1c != '\0') {
      if (_DAT_ram_3006aa20 == 100) {
        bVar1 = uVar2 < param_4;
      }
    }
    (*param_6)();
    if ((bVar1) && (*(char *)(param_5 + uVar2) != '\0')) {
      *param_3 = uVar2;
    }
    FUN_ram_4001c1cc(_DAT_ram_3006aa24);
    return 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4001c8b0.
 * REA evidence: ev_71c380fde2117a6f9c56e2e68095af28bea31ff9f9cd7c3e16969ff04a7442c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c8b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4001ac48();
  if (DAT_ram_3006ad5c == 0) {
    iVar1 = (DAT_ram_3006ad54 != '\0') + 1;
  }
  else {
    iVar1 = (uint)DAT_ram_3006ad5c + iVar1 + -1;
  }
  iVar2 = 0;
  if ((-1 < param_1) && (iVar2 = param_1, iVar1 <= param_1)) {
    iVar2 = iVar1;
  }
  if (_DAT_ram_3006ad28 != iVar2) {
    _DAT_ram_3006ad28 = iVar2;
    FUN_ram_4001bf0a();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001c90e.
 * REA evidence: ev_a459758d3214a3068958309bc8eaa58271cfa3428a9f2cf42ce4c00802a3ce05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c90e(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = _DAT_ram_3006aa68;
  iVar2 = _DAT_ram_3006ad20;
  if (_DAT_ram_3006ad20 == 0) {
    iVar2 = _DAT_ram_3006aa68;
  }
  iVar3 = _DAT_ram_3006ad58;
  if (_DAT_ram_3006ad58 == 0) {
    iVar3 = _DAT_ram_3006aa68;
  }
  bVar1 = _DAT_ram_3006aa68 != 0;
  uVar4 = 0;
  if (_DAT_ram_3006aa68 != 0) {
    uVar4 = FUN_ram_4002d258();
  }
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = FUN_ram_4002d266();
  }
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = FUN_ram_4002d274();
  }
  FUN_ram_40017d68(_DAT_ram_3006ad2c,&DAT_ram_3006ad30,bVar1);
  iVar12 = 0x3006aa9c;
  iVar11 = 0x3006abac;
  FUN_ram_40017d68(_DAT_ram_3006acf8,0x3006acfc,bVar1);
  iVar13 = 0;
  iVar9 = iVar12;
  iVar7 = iVar11;
  do {
    FUN_ram_40017d68(*(undefined4 *)(&DAT_ram_3006ab3c + iVar13 * 4),iVar9,iVar2 != 0);
    iVar8 = iVar13 * 4;
    iVar13 = iVar13 + 1;
    FUN_ram_40017d68(*(undefined4 *)(&DAT_ram_3006ac4c + iVar8),iVar7,iVar3 != 0);
    FUN_ram_40017d60(iVar9,uVar5 & 1);
    FUN_ram_40017d60(iVar7,uVar6 & 1);
    iVar9 = iVar9 + 0x20;
    iVar7 = iVar7 + 0x20;
  } while (iVar13 != 5);
  FUN_ram_40017d60(&DAT_ram_3006ad30,uVar4 & 1);
  FUN_ram_40017d60(0x3006acfc,uVar4 & 1);
  if (iVar10 != 0) {
    if (_DAT_ram_3006ad2c != 0) {
      FUN_ram_40048ade(_DAT_ram_3006ad2c,iVar10,0);
      iVar9 = 0;
      do {
        if (*(int *)(&DAT_ram_3006ad30 + iVar9 * 4) != 0) {
          FUN_ram_40048ade(*(int *)(&DAT_ram_3006ad30 + iVar9 * 4),iVar10,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      FUN_ram_4001b31e();
    }
    if (_DAT_ram_3006acf8 != 0) {
      FUN_ram_40048ade(_DAT_ram_3006acf8,iVar10,0);
      iVar9 = 0;
      do {
        iVar7 = *(int *)(iVar9 * 4 + 0x3006acfc);
        if (iVar7 != 0) {
          FUN_ram_40048ade(iVar7,iVar10,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      FUN_ram_4001aea8();
    }
  }
  iVar10 = 0;
  if (iVar2 != 0) {
    iVar10 = *(int *)(iVar2 + 0xc);
  }
  iVar9 = 0;
  if (iVar3 != 0) {
    iVar9 = *(int *)(iVar3 + 0xc);
  }
  iVar7 = 0;
  do {
    if ((iVar2 != 0) && (*(int *)(&DAT_ram_3006ab3c + iVar7 * 4) != 0)) {
      FUN_ram_40045068(*(int *)(&DAT_ram_3006ab3c + iVar7 * 4),iVar10 << 1);
      FUN_ram_40048ade(*(undefined4 *)(&DAT_ram_3006ab3c + iVar7 * 4),iVar2,0);
      iVar13 = 0;
      do {
        iVar8 = *(int *)(iVar12 + iVar13 * 4);
        if (iVar8 != 0) {
          FUN_ram_40048ade(iVar8,iVar2,0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 8);
    }
    if ((iVar3 != 0) && (*(int *)(&DAT_ram_3006ac4c + iVar7 * 4) != 0)) {
      FUN_ram_40045068(*(int *)(&DAT_ram_3006ac4c + iVar7 * 4),iVar9 << 1);
      FUN_ram_40048ade(*(undefined4 *)(&DAT_ram_3006ac4c + iVar7 * 4),iVar3,0);
      iVar13 = 0;
      do {
        iVar8 = *(int *)(iVar11 + iVar13 * 4);
        if (iVar8 != 0) {
          FUN_ram_40048ade(iVar8,iVar3,0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 8);
    }
    iVar7 = iVar7 + 1;
    iVar11 = iVar11 + 0x20;
    iVar12 = iVar12 + 0x20;
  } while (iVar7 != 5);
  FUN_ram_4001b268();
  if (DAT_ram_3006a9d2 != '\0') {
    FUN_ram_4001bf0a();
    return;
  }
  FUN_ram_4001b802(0);
  FUN_ram_4001b802(1);
  FUN_ram_4001b802(2);
  FUN_ram_4001b802(3);
  FUN_ram_4001b802(4);
  return;
}


/* NanoCore 1.12, address 0x4001cb90.
 * REA evidence: ev_1bafa2aabcb32bd5a8aec3018eea3a9d28d401f00f23fac3375a4ee25c6f3513
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001cb90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_ram_3006ad58;
  iVar1 = _DAT_ram_3006ad20;
  iVar3 = _DAT_ram_3006aa68;
  if (((_DAT_ram_3006aa68 == 0) && (_DAT_ram_3006ad20 == 0)) && (_DAT_ram_3006ad58 == 0))
  goto LAB_ram_4001cc0e;
  _DAT_ram_3006aa68 = 0;
  _DAT_ram_3006ad20 = 0;
  _DAT_ram_3006ad58 = 0;
  FUN_ram_4001c90e();
  if (iVar3 == 0) {
    if (iVar1 != 0) goto LAB_ram_4001cbf6;
  }
  else {
    FUN_ram_40059ff0(iVar3);
    if ((iVar1 != 0) && (iVar3 != iVar1)) {
LAB_ram_4001cbf6:
      FUN_ram_40059ff0(iVar1);
    }
  }
  if (((iVar2 != 0) && (iVar3 != iVar2)) && (iVar1 != iVar2)) {
    FUN_ram_40059ff0(iVar2);
  }
LAB_ram_4001cc0e:
  _DAT_ram_3006aa68 = FUN_ram_40017ef4(s_font_detail_ram_4009a2f0,s_font_default_ram_4009a06c);
  _DAT_ram_3006ad20 = FUN_ram_40017ef4(s_font_dsmall_ram_4009a2fc,0);
  iVar3 = FUN_ram_40005162(s_font_dsmall_ram_4009a2fc);
  if (iVar3 == 0) {
    _DAT_ram_3006ad58 = _DAT_ram_3006ad20;
  }
  else {
    _DAT_ram_3006ad58 = FUN_ram_40017ef4(s_font_dsmall_ram_4009a2fc,0);
  }
  FUN_ram_4001c90e();
  return;
}


/* NanoCore 1.12, address 0x4001cc7c.
 * REA evidence: ev_12b41c7ed0c1c7839f594ce54f67ae0039c3aadf423a3879c1afeab752766d3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001cc7c(ulonglong param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  float fVar10;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((float)param_1 < 0.0) {
    param_1 = 0;
  }
  else if (DAT_ram_4009672c < (float)param_1) {
    param_1 = (ulonglong)(uint)DAT_ram_4009672c;
  }
  if (param_2 != 0) {
    fVar6 = (float)param_1;
    iVar1 = FUN_ram_40025c22(param_2);
    if (iVar1 != 0xff) {
      uStack_68 = FUN_ram_4002d6f8(0x6d);
      uStack_64 = FUN_ram_4002d6f8(0x6e);
      uStack_60 = FUN_ram_4002d6f8(0x6f);
      uStack_5c = FUN_ram_4002d6f8(0x70);
      uStack_58 = FUN_ram_4002d6f8(0x71);
      uStack_54 = FUN_ram_4002d6f8(0x72);
      uStack_50 = FUN_ram_4002d6f8(0x69);
      uStack_4c = FUN_ram_4002d6f8(0x6a);
      uStack_48 = FUN_ram_4002d6f8(0x6b);
      uStack_44 = FUN_ram_4002d6f8(0x6c);
      iVar1 = nc_format_effect_parameter(CONCAT44(uStack_70,fVar6),iVar1,param_3,param_4,param_5,0x18,
                               &uStack_68,1);
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = FUN_ram_40005162(param_2,&DAT_ram_4009a0bc);
    param_1 = CONCAT44(uStack_70,fVar6);
    if (iVar1 == 0) {
      if ((param_3 & 0xfffffffd) == 0 && param_4 == 0) {
        uVar3 = DAT_ram_4009a334;
        fVar7 = 0.0;
        goto LAB_ram_4001cd8c;
      }
    }
    else {
      iVar1 = FUN_ram_40005162(param_2,&DAT_ram_4009a0c0);
      uVar3 = DAT_ram_4009a344;
      param_1 = CONCAT44(uStack_70,fVar6);
      if (iVar1 != 0) {
        iVar1 = FUN_ram_40005162(param_2,&DAT_ram_4009acc0);
        fVar7 = DAT_ram_40099f38;
        param_1 = CONCAT44(uStack_70,fVar6);
        if (iVar1 == 0) {
          if (param_4 == 0) goto LAB_ram_4001ccb8;
          if (2 < (param_4 - 1 & 0xff)) {
            uVar5 = 4;
            goto LAB_ram_4001d016;
          }
          fVar6 = (float)FUN_ram_4001aa02(param_1,DAT_ram_4009a354,DAT_ram_40099f38);
          fVar6 = fVar6 * fVar7;
LAB_ram_4001d008:
          iStack_74 = FUN_ram_4001aa2e(fVar6);
          uVar3 = 0x6e;
        }
        else {
          iVar1 = FUN_ram_40005162(param_2,&DAT_ram_4009a0c4);
          if (iVar1 == 0) {
            fVar7 = DAT_ram_4009a358;
            fVar10 = DAT_ram_40099f50;
            if ((param_4 == 0) ||
               (fVar7 = DAT_ram_4009a338, fVar10 = DAT_ram_4009a35c, param_4 == 1))
            goto LAB_ram_4001ce38;
LAB_ram_4001d2dc:
            uVar5 = 2;
LAB_ram_4001d016:
            param_1 = CONCAT44(uStack_70,fVar6);
            if (param_4 == uVar5) goto LAB_ram_4001cf72;
            goto LAB_ram_4001ccb8;
          }
          iVar1 = FUN_ram_40005162(param_2,s_delay_ram_4009a0c8);
          param_1 = CONCAT44(uStack_70,fVar6);
          if (iVar1 == 0) {
            if (7 < param_3) {
LAB_ram_4001d0de:
              if (param_4 == 0) {
                uVar8 = FUN_ram_4001aa02(param_1,DAT_ram_4009672c,DAT_ram_4009a35c);
                goto LAB_ram_4001d0f4;
              }
LAB_ram_4001d128:
              if (param_4 != 1) {
                param_4 = param_4 - 2 & 0xff;
                uVar5 = 2;
                goto LAB_ram_4001d136;
              }
LAB_ram_4001d096:
              uVar3 = 0;
LAB_ram_4001d0a2:
              FUN_ram_4001aa02(CONCAT44(uStack_70,fVar6),uVar3,DAT_ram_4009a364);
              uVar3 = FUN_ram_4001aa2e();
              puVar4 = &DAT_ram_4009a220;
LAB_ram_4001d0b4:
              FUN_ram_40005520(param_5,0x18,puVar4,uVar3);
              return;
            }
            puVar4 = DAT_ram_40099f88;
            if (param_3 == 1) {
              if (param_4 != 0) {
                if (param_4 == 1) goto LAB_ram_4001d096;
                param_4 = param_4 - 2;
joined_r0x4001d422:
                param_1 = CONCAT44(uStack_70,fVar6);
                if ((param_4 & 0xff) < 2) goto LAB_ram_4001cf72;
                goto LAB_ram_4001ccb8;
              }
              goto LAB_ram_4001d1ca;
            }
            if (param_3 == 0) goto LAB_ram_4001d0de;
            if (param_3 == 2) {
              if (param_4 == 0) goto LAB_ram_4001d1ca;
              goto LAB_ram_4001d128;
            }
            if (param_3 == 3) {
              if (param_4 != 0) {
                uVar5 = 1;
                if (param_4 != 1) {
                  uVar3 = DAT_ram_4009a32c;
                  fVar7 = DAT_ram_4009a330;
                  if (param_4 == 2) goto LAB_ram_4001d160;
LAB_ram_4001d3a8:
                  param_4 = param_4 - 3;
                  goto LAB_ram_4001d1ac;
                }
                goto LAB_ram_4001d096;
              }
            }
            else if (param_3 == 4) {
              if (param_4 != 0) {
                if (param_4 != 1) goto LAB_ram_4001d1aa;
                goto LAB_ram_4001d096;
              }
            }
            else if (param_3 == 5) {
              puVar4 = PTR_entry_ram_40096740;
              if (param_4 != 0) {
                if (param_4 != 1) {
                  uVar5 = 2;
                  if (param_4 == 2) {
                    FUN_ram_4001aa02(param_1,DAT_ram_40099f30,DAT_ram_40099f58);
                    iStack_74 = FUN_ram_4001aa2e();
                    uVar3 = 0x72;
                    goto LAB_ram_4001d16e;
                  }
                  goto LAB_ram_4001d3a8;
                }
                goto LAB_ram_4001d096;
              }
            }
            else if (param_3 == 6) {
              if (param_4 != 0) {
                if (param_4 != 1) goto LAB_ram_4001d22e;
                goto LAB_ram_4001d096;
              }
            }
            else {
              if (param_3 != 7) goto LAB_ram_4001ccb8;
              if (param_4 != 0) {
                if (param_4 != 1) {
                  fVar7 = DAT_ram_40099f50;
                  if (param_4 == 2) goto LAB_ram_4001d256;
                  fVar7 = DAT_ram_40099f7c;
                  puVar4 = DAT_ram_40099f6c;
                  if (param_4 != 3) goto LAB_ram_4001d45a;
                  goto LAB_ram_4001d2a8;
                }
                goto LAB_ram_4001d096;
              }
            }
LAB_ram_4001d1ca:
            fVar6 = (float)FUN_ram_4001aa02(param_1,puVar4,DAT_ram_4009a360);
            iStack_74 = FUN_ram_4001aa2e(fVar6 * DAT_ram_40099f38);
            if (999 < iStack_74) {
              uVar8 = (ulonglong)(uint)fVar6;
LAB_ram_4001d0f4:
              uVar3 = FUN_ram_4001aa2e(uVar8);
              uVar2 = FUN_ram_4002d6f8(0x6f);
              FUN_ram_4001ba96(param_5,uVar3,uVar2);
              return;
            }
          }
          else {
            iVar1 = FUN_ram_40005162(param_2,&DAT_ram_4009a0d0);
            param_1 = CONCAT44(uStack_70,fVar6);
            if (iVar1 == 0) {
              if (param_3 == 0) {
                fVar7 = DAT_ram_4009a368;
                puVar4 = DAT_ram_40099f88;
                if (param_4 != 0) {
                  if (param_4 == 1) {
                    fVar6 = (float)FUN_ram_4001aa02(param_1,0,DAT_ram_4009672c);
                    iStack_74 = FUN_ram_4001aa2e(fVar6 * DAT_ram_40096780);
                    uVar3 = 0x6f;
                    goto LAB_ram_4001cdfe;
                  }
                  goto LAB_ram_4001d2dc;
                }
LAB_ram_4001d2a8:
                FUN_ram_4001aa02(CONCAT44(uStack_70,fVar6),puVar4,fVar7);
                goto LAB_ram_4001cf10;
              }
              if (1 < (param_3 - 1 & 0xff)) {
                fVar7 = DAT_ram_40099f50;
                puVar4 = DAT_ram_4009a370;
                if (param_3 == 3) {
                  if (param_4 == 0) goto LAB_ram_4001d2a8;
                  if ((param_4 == 1) || ((param_4 - 4 & 0xff) < 2)) goto LAB_ram_4001cf72;
                  if (param_4 == 2) goto LAB_ram_4001d33c;
                  fVar7 = DAT_ram_40099f70;
                  if (param_4 == 3) goto LAB_ram_4001ce4c;
                }
                else if (param_3 == 4) {
                  if (param_4 != 0) {
                    uVar5 = 1;
                    if (param_4 == 1) goto LAB_ram_4001d256;
                    if (param_4 != 2) goto LAB_ram_4001d3a8;
LAB_ram_4001d33c:
                    if (fVar6 < 0.0) {
                      param_1 = 0;
                    }
                    else if (DAT_ram_4009672c < fVar6) {
                      param_1 = (ulonglong)(uint)DAT_ram_4009672c;
                    }
                    uVar5 = (uint)((float)param_1 * DAT_ram_40099f30);
                    if ((int)uVar5 < 4) {
                      if ((int)uVar5 < 0) {
                        uVar5 = 0;
                      }
                    }
                    else {
                      uVar5 = 3;
                    }
                    uVar3 = FUN_ram_4001b23c(uVar5 & 0xff);
                    puVar4 = &DAT_ram_4009a668;
                    goto LAB_ram_4001d0b4;
                  }
                  goto LAB_ram_4001d2a8;
                }
                goto LAB_ram_4001ccb8;
              }
              fVar7 = DAT_ram_40099f7c;
              puVar4 = DAT_ram_40099f6c;
              if (param_4 == 0) goto LAB_ram_4001d2a8;
              uVar3 = DAT_ram_4009a36c;
              if (param_4 != 1) {
                param_4 = param_4 - 2;
                goto LAB_ram_4001cfbe;
              }
              goto LAB_ram_4001d0a2;
            }
            iVar1 = FUN_ram_40005162(param_2,s_reverb_ram_4009a0d4);
            uVar9 = CONCAT44(uStack_70,fVar6);
            if (iVar1 != 0) {
              iVar1 = FUN_ram_40005162(param_2,&DAT_ram_4009a0dc);
              param_1 = CONCAT44(uStack_70,fVar6);
              if (iVar1 != 0) goto LAB_ram_4001ccb8;
              uVar3 = DAT_ram_4009a384;
              fVar7 = DAT_ram_40099f44;
              if (param_3 < 2) {
                if (param_3 == 1) {
                  if (5 < param_4) {
                    uVar5 = 6;
LAB_ram_4001d534:
                    uVar3 = DAT_ram_4009a32c;
                    fVar7 = DAT_ram_4009a330;
                    if (param_4 != uVar5) goto LAB_ram_4001ccb8;
                  }
                }
                else if (2 < param_4) {
                  uVar5 = 3;
                  goto LAB_ram_4001d534;
                }
              }
              else if (7 < param_4) {
                uVar5 = 8;
                goto LAB_ram_4001d534;
              }
LAB_ram_4001cd8c:
              fVar6 = (float)FUN_ram_4001aa02(CONCAT44(uStack_70,fVar6),uVar3,fVar7);
              fVar6 = fVar6 * DAT_ram_40099f38;
              goto LAB_ram_4001d008;
            }
            if (param_3 == 6) {
              fVar7 = DAT_ram_40096780;
              fVar10 = DAT_ram_4009672c;
              if (param_4 != 0) {
                fVar7 = DAT_ram_4009a374;
                puVar4 = DAT_ram_40099f34;
                if (param_4 != 3) {
                  if ((param_4 - 1 & 0xff) < 2) goto LAB_ram_4001cf72;
                  param_4 = param_4 - 4;
                  goto joined_r0x4001d422;
                }
                goto LAB_ram_4001d2a8;
              }
LAB_ram_4001d3e8:
              uVar9 = FUN_ram_4001aa02(uVar9,fVar10,fVar7);
              fVar7 = DAT_ram_40099f38;
LAB_ram_4001d46e:
              iStack_74 = FUN_ram_4001aa2e((float)uVar9 * fVar7);
              uVar3 = 0x71;
              goto LAB_ram_4001d47c;
            }
            fVar7 = DAT_ram_4009a330;
            if (param_3 == 5) {
              if (param_4 == 0) {
                fVar10 = 0.0;
                goto LAB_ram_4001d3e8;
              }
              fVar7 = DAT_ram_4009a378;
              if (param_4 != 1) {
                uVar3 = DAT_ram_4009a324;
                fVar7 = DAT_ram_4009a328;
                if (param_4 != 3) {
                  if (param_4 == 2) goto LAB_ram_4001cf72;
LAB_ram_4001d45a:
                  uVar5 = 1;
                  param_4 = param_4 - 4;
                  goto LAB_ram_4001d1ac;
                }
                goto LAB_ram_4001d160;
              }
LAB_ram_4001d256:
              fVar6 = (float)FUN_ram_4001aa02(CONCAT44(uStack_70,fVar6),0,fVar7);
            }
            else {
              if (param_3 != 7) {
                fVar10 = DAT_ram_4009675c;
                if (param_4 == 0) goto LAB_ram_4001d3e8;
                fVar7 = DAT_ram_4009a380;
                if (param_4 != 1) {
LAB_ram_4001d22e:
                  param_4 = param_4 - 2 & 0xff;
                  uVar5 = 3;
                  goto LAB_ram_4001d136;
                }
                goto LAB_ram_4001d256;
              }
              fVar7 = DAT_ram_4009a378;
              if (param_4 == 0) goto LAB_ram_4001d46e;
              if (param_4 != 1) {
                if (param_4 != 2) goto LAB_ram_4001cf72;
                FUN_ram_40073ad6();
                goto LAB_ram_4001cf10;
              }
              fVar6 = fVar6 * DAT_ram_4009a37c + DAT_ram_40099f7c;
            }
            iStack_74 = FUN_ram_4001aa2e(fVar6 * DAT_ram_40099f38);
          }
          uVar3 = 0x6f;
        }
LAB_ram_4001d47c:
        uVar3 = FUN_ram_4002d6f8(uVar3);
LAB_ram_4001ce80:
        FUN_ram_4001bac8(param_5,iStack_74,uVar3);
        return;
      }
      if (param_3 == 8) {
        uVar3 = DAT_ram_4009a324;
        fVar7 = DAT_ram_4009a328;
        if (param_4 == 0) {
LAB_ram_4001d160:
          FUN_ram_4001aa02(CONCAT44(uStack_70,fVar6),uVar3,fVar7);
          iStack_74 = FUN_ram_4001aa2e();
          uVar3 = 0x70;
LAB_ram_4001d16e:
          uVar3 = FUN_ram_4002d6f8(uVar3);
          FUN_ram_40005520(param_5,0x18,s__ld__s_ram_4009a308,iStack_74,uVar3);
          return;
        }
        if (param_4 == 1) {
          fVar6 = (float)FUN_ram_4001aa02(param_1,DAT_ram_40096728,DAT_ram_4009672c);
          iStack_74 = FUN_ram_4001aa2e(fVar6 * DAT_ram_40096780);
          uVar3 = 0x70;
LAB_ram_4001cdfe:
          uVar3 = FUN_ram_4002d6f8(uVar3);
          goto LAB_ram_4001ce06;
        }
LAB_ram_4001d1aa:
        uVar5 = 1;
        param_4 = param_4 - 2;
LAB_ram_4001d1ac:
        param_4 = param_4 & 0xff;
LAB_ram_4001d136:
        param_1 = CONCAT44(uStack_70,fVar6);
        if (param_4 <= uVar5) {
LAB_ram_4001cf72:
          FUN_ram_4001ba22(param_5);
          return;
        }
      }
      else {
        if (param_3 == 9) {
          fVar7 = DAT_ram_4009a338;
          fVar10 = DAT_ram_40099f38;
          if (param_4 != 0) {
            uVar5 = 1;
            if (param_4 != 1) {
              if (param_4 == 2) {
                fVar6 = (float)FUN_ram_4001aa02(param_1,DAT_ram_40099f88,DAT_ram_40099f50);
                iStack_74 = FUN_ram_4001aa2e(fVar6 * DAT_ram_40099f38);
                uVar3 = 0;
                goto LAB_ram_4001ce80;
              }
              goto LAB_ram_4001d3a8;
            }
LAB_ram_4001ce4c:
            puVar4 = (undefined *)0x0;
            goto LAB_ram_4001d2a8;
          }
LAB_ram_4001ce38:
          FUN_ram_4001ae16(CONCAT44(uStack_70,fVar6),fVar10,fVar7);
          goto LAB_ram_4001cf10;
        }
        if (param_3 == 10) {
          if (param_4 == 0) {
            if (fVar6 < 0.0) {
              param_1 = 0;
LAB_ram_4001ced8:
              fVar6 = (float)param_1 + (float)param_1;
              fVar7 = (float)FUN_ram_4001aa02(fVar6,DAT_ram_4009a340,DAT_ram_4009a33c);
              uVar2 = DAT_ram_4009a348;
            }
            else {
              if (DAT_ram_4009672c < fVar6) {
                param_1 = (ulonglong)(uint)DAT_ram_4009672c;
              }
              else if (fVar6 <= DAT_ram_4009675c) goto LAB_ram_4001ced8;
              fVar6 = (float)param_1 - DAT_ram_4009675c;
              fVar6 = fVar6 + fVar6;
              fVar7 = (float)FUN_ram_4001aa02(fVar6,DAT_ram_4009a33c,DAT_ram_4009a34c);
              uVar2 = uVar3;
              uVar3 = DAT_ram_4009a350;
            }
            fVar6 = (float)FUN_ram_4001aa02(fVar6,uVar2,uVar3);
            FUN_ram_40000e74(fVar7 * fVar6);
LAB_ram_4001cf10:
            FUN_ram_4001bb76(param_5);
            return;
          }
          if ((param_4 == 1) || ((param_4 - 3 & 0xff) < 3)) goto LAB_ram_4001cf72;
          if (param_4 == 2) {
            fVar6 = (float)FUN_ram_4001aa02(param_1,0,DAT_ram_40096764);
            iStack_74 = FUN_ram_4001aa2e(fVar6 * DAT_ram_40096780);
            uVar3 = 0x6d;
            goto LAB_ram_4001cdfe;
          }
        }
        else if (param_4 != 0) {
          param_4 = param_4 - 1;
LAB_ram_4001cfbe:
          param_4 = param_4 & 0xff;
          uVar5 = 1;
          goto LAB_ram_4001d136;
        }
      }
    }
  }
LAB_ram_4001ccb8:
  iStack_74 = FUN_ram_4001aa2e((float)param_1 * DAT_ram_40096780);
  uVar3 = 0;
LAB_ram_4001ce06:
  FUN_ram_4001bb1e(param_5,iStack_74,uVar3);
  return;
}


