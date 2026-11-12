/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4001c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4001c1ce.
 * REA evidence: ev_6bacd892304c02bc02be53beb5894af2c0347be8462a9b393692f71adf74af00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001c1ce(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x1e) {
    if (DAT_ram_3006a79c == '\0') {
      FUN_ram_4001b904();
    }
    iVar1 = FUN_ram_4000cb12(param_1 & 0xff);
    if (iVar1 == 0) {
      DAT_ram_30049dbc = param_1;
      DAT_ram_30049dc0 = param_1;
      if (((param_2 != 0) && (_DAT_ram_3006aa7c != 0)) &&
         (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095bb8,0x10), iVar1 == 0)) {
        FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
        return 0;
      }
      return 0;
    }
    FUN_ram_4001b904();
    DAT_ram_30049dbc = DAT_ram_30049db8;
    if (((param_2 != 0) && (_DAT_ram_3006aa7c != 0)) &&
       (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095bb8,0x10), iVar1 == 0)) {
      FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4001c280.
 * REA evidence: ev_b0cda787d30327db56a7552ba05f1f3e3e29701f7c9e41b80b951b0e92c24200
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001c280(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x1e) {
    if (DAT_ram_3006af20 == '\0') {
      FUN_ram_4001ad0e();
    }
    iVar1 = FUN_ram_4000cb66(param_1 & 0xff);
    if (iVar1 == 0) {
      DAT_ram_30049de0 = param_1;
      DAT_ram_30049de4 = param_1;
      if (((param_2 != 0) && (_DAT_ram_3006aa7c != 0)) &&
         (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_4009501c,0x10), iVar1 == 0)) {
        FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
        return 0;
      }
      return 0;
    }
    FUN_ram_4001ad0e();
    DAT_ram_30049de0 = DAT_ram_30049ddc;
    if (((param_2 != 0) && (_DAT_ram_3006aa7c != 0)) &&
       (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_4009501c,0x10), iVar1 == 0)) {
      FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4001c332.
 * REA evidence: ev_97a26399b24af4bd767f0a613f8cf11c26afd5a816dc17a0534e4871d81347d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c332(undefined4 param_1,int param_2,code *param_3,int *param_4,int *param_5,
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
    iVar2 = FUN_ram_40027f86(*param_5,param_1,0x1e,param_6,aiStack_14);
    uVar1 = _DAT_ram_3006aa7c;
    if (iVar2 != 0) {
      *param_5 = aiStack_14[0];
      FUN_ram_4001bd9a(uVar1);
      (*param_7)(*param_5);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4001c38a.
 * REA evidence: ev_d8bbeeb160fdf7f51466dfe90bbefa38d6277f16d28076cd65d06c0a6580e2d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c38a(undefined4 param_1,char *param_2,code *param_3,int *param_4,int *param_5,
                     code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  
  if ((_DAT_ram_3006aa7c != 0) &&
     (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,param_1,0x10), iVar1 == 0)) {
    if (*param_2 == '\0') {
      (*param_3)();
    }
    if ((*param_4 < 0) || (iVar1 = *param_5, iVar1 < 0)) {
      FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
      return;
    }
    if (*param_4 != iVar1) {
                    /* WARNING: Could not recover jumptable at 0x4001c406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar1,1);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4001c41a.
 * REA evidence: ev_34d4fa768c9916f12aaee789a5904f188f614bee211deb41a60180c0a63e4021
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4001c41a(int param_1,int param_2,uint *param_3,uint param_4,int param_5,code *param_6)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_3;
    bVar1 = false;
    if (DAT_ram_3006aa74 != '\0') {
      if (_DAT_ram_3006aa78 == 100) {
        bVar1 = uVar2 < param_4;
      }
    }
    (*param_6)();
    if ((bVar1) && (*(char *)(param_5 + uVar2) != '\0')) {
      *param_3 = uVar2;
    }
    FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
    return 1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4001c47e.
 * REA evidence: ev_7de2c0d9e0b80b93cf8a3c47dec8b36215b7d49e089c0c7e59ae98a1dabcacfb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c47e(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4001a816();
  if (DAT_ram_3006adb4 == 0) {
    iVar1 = (DAT_ram_3006adac != '\0') + 1;
  }
  else {
    iVar1 = (uint)DAT_ram_3006adb4 + iVar1 + -1;
  }
  iVar2 = 0;
  if ((-1 < param_1) && (iVar2 = param_1, iVar1 <= param_1)) {
    iVar2 = iVar1;
  }
  if (_DAT_ram_3006ad80 != iVar2) {
    _DAT_ram_3006ad80 = iVar2;
    FUN_ram_4001bad8();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001c4dc.
 * REA evidence: ev_013c8f69b9f8e8fc386366a8f8e4d1cb20cf667d2638bdfb69a876d875ebec5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c4dc(void)

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
  
  iVar10 = _DAT_ram_3006aac0;
  iVar2 = _DAT_ram_3006ad78;
  if (_DAT_ram_3006ad78 == 0) {
    iVar2 = _DAT_ram_3006aac0;
  }
  iVar3 = _DAT_ram_3006adb0;
  if (_DAT_ram_3006adb0 == 0) {
    iVar3 = _DAT_ram_3006aac0;
  }
  bVar1 = _DAT_ram_3006aac0 != 0;
  uVar4 = 0;
  if (_DAT_ram_3006aac0 != 0) {
    uVar4 = FUN_ram_4002c394();
  }
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = FUN_ram_4002c3a2();
  }
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = FUN_ram_4002c3b0();
  }
  FUN_ram_40017936(_DAT_ram_3006ad84,&DAT_ram_3006ad88,bVar1);
  iVar12 = 0x3006aaf4;
  iVar11 = 0x3006ac04;
  FUN_ram_40017936(_DAT_ram_3006ad50,0x3006ad54,bVar1);
  iVar13 = 0;
  iVar9 = iVar12;
  iVar7 = iVar11;
  do {
    FUN_ram_40017936(*(undefined4 *)(&DAT_ram_3006ab94 + iVar13 * 4),iVar9,iVar2 != 0);
    iVar8 = iVar13 * 4;
    iVar13 = iVar13 + 1;
    FUN_ram_40017936(*(undefined4 *)(&DAT_ram_3006aca4 + iVar8),iVar7,iVar3 != 0);
    FUN_ram_4001792e(iVar9,uVar5 & 1);
    FUN_ram_4001792e(iVar7,uVar6 & 1);
    iVar9 = iVar9 + 0x20;
    iVar7 = iVar7 + 0x20;
  } while (iVar13 != 5);
  FUN_ram_4001792e(&DAT_ram_3006ad88,uVar4 & 1);
  FUN_ram_4001792e(0x3006ad54,uVar4 & 1);
  if (iVar10 != 0) {
    if (_DAT_ram_3006ad84 != 0) {
      FUN_ram_400489e6(_DAT_ram_3006ad84,iVar10,0);
      iVar9 = 0;
      do {
        if (*(int *)(&DAT_ram_3006ad88 + iVar9 * 4) != 0) {
          FUN_ram_400489e6(*(int *)(&DAT_ram_3006ad88 + iVar9 * 4),iVar10,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      FUN_ram_4001aeec();
    }
    if (_DAT_ram_3006ad50 != 0) {
      FUN_ram_400489e6(_DAT_ram_3006ad50,iVar10,0);
      iVar9 = 0;
      do {
        iVar7 = *(int *)(iVar9 * 4 + 0x3006ad54);
        if (iVar7 != 0) {
          FUN_ram_400489e6(iVar7,iVar10,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      FUN_ram_4001aa76();
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
    if ((iVar2 != 0) && (*(int *)(&DAT_ram_3006ab94 + iVar7 * 4) != 0)) {
      FUN_ram_40044f70(*(int *)(&DAT_ram_3006ab94 + iVar7 * 4),iVar10 << 1);
      FUN_ram_400489e6(*(undefined4 *)(&DAT_ram_3006ab94 + iVar7 * 4),iVar2,0);
      iVar13 = 0;
      do {
        iVar8 = *(int *)(iVar12 + iVar13 * 4);
        if (iVar8 != 0) {
          FUN_ram_400489e6(iVar8,iVar2,0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 8);
    }
    if ((iVar3 != 0) && (*(int *)(&DAT_ram_3006aca4 + iVar7 * 4) != 0)) {
      FUN_ram_40044f70(*(int *)(&DAT_ram_3006aca4 + iVar7 * 4),iVar9 << 1);
      FUN_ram_400489e6(*(undefined4 *)(&DAT_ram_3006aca4 + iVar7 * 4),iVar3,0);
      iVar13 = 0;
      do {
        iVar8 = *(int *)(iVar11 + iVar13 * 4);
        if (iVar8 != 0) {
          FUN_ram_400489e6(iVar8,iVar3,0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 8);
    }
    iVar7 = iVar7 + 1;
    iVar11 = iVar11 + 0x20;
    iVar12 = iVar12 + 0x20;
  } while (iVar7 != 5);
  FUN_ram_4001ae36();
  if (DAT_ram_3006aa2a != '\0') {
    FUN_ram_4001bad8();
    return;
  }
  FUN_ram_4001b3d0(0);
  FUN_ram_4001b3d0(1);
  FUN_ram_4001b3d0(2);
  FUN_ram_4001b3d0(3);
  FUN_ram_4001b3d0(4);
  return;
}


/* NanoCore 1.11, address 0x4001c75e.
 * REA evidence: ev_20be16d71162b6d7c4f30c8ccb6c81eba19fe617b37488a697120e4fe9195438
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001c75e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_ram_3006adb0;
  iVar1 = _DAT_ram_3006ad78;
  iVar3 = _DAT_ram_3006aac0;
  if (((_DAT_ram_3006aac0 == 0) && (_DAT_ram_3006ad78 == 0)) && (_DAT_ram_3006adb0 == 0))
  goto LAB_ram_4001c7dc;
  _DAT_ram_3006aac0 = 0;
  _DAT_ram_3006ad78 = 0;
  _DAT_ram_3006adb0 = 0;
  FUN_ram_4001c4dc();
  if (iVar3 == 0) {
    if (iVar1 != 0) goto LAB_ram_4001c7c4;
  }
  else {
    FUN_ram_4005a1be(iVar3);
    if ((iVar1 != 0) && (iVar3 != iVar1)) {
LAB_ram_4001c7c4:
      FUN_ram_4005a1be(iVar1);
    }
  }
  if (((iVar2 != 0) && (iVar3 != iVar2)) && (iVar1 != iVar2)) {
    FUN_ram_4005a1be(iVar2);
  }
LAB_ram_4001c7dc:
  _DAT_ram_3006aac0 = FUN_ram_40017ac2(s_font_detail_ram_40095248,s_font_default_ram_40094fc4);
  _DAT_ram_3006ad78 = FUN_ram_40017ac2(s_font_dsmall_ram_40095254,0);
  iVar3 = FUN_ram_4000521c(s_font_dsmall_ram_40095254);
  if (iVar3 == 0) {
    _DAT_ram_3006adb0 = _DAT_ram_3006ad78;
  }
  else {
    _DAT_ram_3006adb0 = FUN_ram_40017ac2(s_font_dsmall_ram_40095254,0);
  }
  FUN_ram_4001c4dc();
  return;
}


/* NanoCore 1.11, address 0x4001c84a.
 * REA evidence: ev_dfe06eb8830e439e07486b1e171f7d222e88e3a5bfe68befa32e4e8fcdcd5206
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001c84a(ulonglong param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  float fVar9;
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
  else if (DAT_ram_40094604 < (float)param_1) {
    param_1 = (ulonglong)(uint)DAT_ram_40094604;
  }
  if (param_2 != 0) {
    fVar6 = (float)param_1;
    iVar1 = FUN_ram_400251c6(param_2);
    if (iVar1 != 0xff) {
      uStack_68 = FUN_ram_4002c834(0x6d);
      uStack_64 = FUN_ram_4002c834(0x6e);
      uStack_60 = FUN_ram_4002c834(0x6f);
      uStack_5c = FUN_ram_4002c834(0x70);
      uStack_58 = FUN_ram_4002c834(0x71);
      uStack_54 = FUN_ram_4002c834(0x72);
      uStack_50 = FUN_ram_4002c834(0x69);
      uStack_4c = FUN_ram_4002c834(0x6a);
      uStack_48 = FUN_ram_4002c834(0x6b);
      uStack_44 = FUN_ram_4002c834(0x6c);
      iVar1 = nc_format_effect_parameter(CONCAT44(uStack_70,fVar6),iVar1,param_3,param_4,param_5,0x18,
                               &uStack_68,1);
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = FUN_ram_4000521c(param_2,&DAT_ram_40095014);
    param_1 = CONCAT44(uStack_70,fVar6);
    if (iVar1 == 0) {
      if ((param_3 & 0xfffffffd) == 0 && param_4 == 0) {
        uVar3 = DAT_ram_40095284;
        fVar7 = 0.0;
        goto LAB_ram_4001c95a;
      }
    }
    else {
      iVar1 = FUN_ram_4000521c(param_2,&DAT_ram_40095018);
      uVar3 = DAT_ram_40095294;
      param_1 = CONCAT44(uStack_70,fVar6);
      if (iVar1 != 0) {
        iVar1 = FUN_ram_4000521c(param_2,&DAT_ram_40095bb8);
        fVar7 = DAT_ram_40094e90;
        param_1 = CONCAT44(uStack_70,fVar6);
        if (iVar1 == 0) {
          if (param_4 == 0) goto LAB_ram_4001c886;
          if (2 < (param_4 - 1 & 0xff)) {
            uVar5 = 4;
            goto LAB_ram_4001cbf2;
          }
          fVar6 = (float)FUN_ram_4001a5d0(param_1,DAT_ram_400952a4,DAT_ram_40094e90);
          fVar6 = fVar6 * fVar7;
LAB_ram_4001cbe4:
          iStack_74 = FUN_ram_4001a5fc(fVar6);
          uVar3 = 0x6e;
        }
        else {
          iVar1 = FUN_ram_4000521c(param_2,&DAT_ram_4009501c);
          if (iVar1 == 0) {
            fVar7 = DAT_ram_400952a8;
            fVar9 = DAT_ram_40094ea8;
            if ((param_4 == 0) || (fVar7 = DAT_ram_40095288, fVar9 = DAT_ram_400952ac, param_4 == 1)
               ) goto LAB_ram_4001ca14;
LAB_ram_4001ce96:
            uVar5 = 2;
LAB_ram_4001cbf2:
            param_1 = CONCAT44(uStack_70,fVar6);
            if (param_4 == uVar5) goto LAB_ram_4001cb4e;
            goto LAB_ram_4001c886;
          }
          iVar1 = FUN_ram_4000521c(param_2,s_delay_ram_40095020);
          param_1 = CONCAT44(uStack_70,fVar6);
          if (iVar1 == 0) {
            if (7 < param_3) {
LAB_ram_4001ccba:
              if (param_4 == 0) {
                uVar8 = FUN_ram_4001a5d0(param_1,DAT_ram_40094604,DAT_ram_400952ac);
                goto LAB_ram_4001ccd0;
              }
LAB_ram_4001cd04:
              if (param_4 != 1) {
                param_4 = param_4 - 2 & 0xff;
                uVar5 = 2;
                goto LAB_ram_4001cd12;
              }
LAB_ram_4001cc72:
              uVar3 = 0;
LAB_ram_4001cc7e:
              FUN_ram_4001a5d0(CONCAT44(uStack_70,fVar6),uVar3,DAT_ram_400952b4);
              uVar3 = FUN_ram_4001a5fc();
              puVar4 = &DAT_ram_40095178;
LAB_ram_4001cc90:
              FUN_ram_400055da(param_5,0x18,puVar4,uVar3);
              return;
            }
            puVar4 = DAT_ram_40094ee0;
            if (param_3 == 1) {
              if (param_4 != 0) {
                if (param_4 == 1) goto LAB_ram_4001cc72;
                param_4 = param_4 - 2;
joined_r0x4001cff0:
                param_1 = CONCAT44(uStack_70,fVar6);
                if ((param_4 & 0xff) < 2) goto LAB_ram_4001cb4e;
                goto LAB_ram_4001c886;
              }
              goto LAB_ram_4001cd5e;
            }
            if (param_3 == 0) goto LAB_ram_4001ccba;
            if (param_3 == 2) {
              if (param_4 == 0) goto LAB_ram_4001cd5e;
              goto LAB_ram_4001cd04;
            }
            if (param_3 == 3) {
              if (param_4 != 0) {
                uVar5 = 1;
                if (param_4 != 1) {
                  uVar3 = DAT_ram_4009527c;
                  fVar7 = DAT_ram_40095280;
                  if (param_4 == 2) goto LAB_ram_4001c99a;
LAB_ram_4001cd2c:
                  param_4 = param_4 - 3;
                  goto LAB_ram_4001cd40;
                }
                goto LAB_ram_4001cc72;
              }
            }
            else if (param_3 == 4) {
              if (param_4 != 0) {
                if (param_4 != 1) goto LAB_ram_4001cd3e;
                goto LAB_ram_4001cc72;
              }
            }
            else if (param_3 == 5) {
              puVar4 = PTR_entry_ram_40094618;
              if (param_4 != 0) {
                if (param_4 != 1) {
                  uVar5 = 2;
                  if (param_4 == 2) {
                    FUN_ram_4001a5d0(param_1,DAT_ram_40094e88,DAT_ram_40094eb0);
                    iStack_74 = FUN_ram_4001a5fc();
                    uVar3 = 0x72;
                    goto LAB_ram_4001cdb0;
                  }
                  goto LAB_ram_4001cd2c;
                }
                goto LAB_ram_4001cc72;
              }
            }
            else if (param_3 == 6) {
              if (param_4 != 0) {
                if (param_4 != 1) goto LAB_ram_4001cdec;
                goto LAB_ram_4001cc72;
              }
            }
            else {
              if (param_3 != 7) goto LAB_ram_4001c886;
              if (param_4 != 0) {
                if (param_4 != 1) {
                  fVar7 = DAT_ram_40094ea8;
                  if (param_4 == 2) goto LAB_ram_4001ce14;
                  fVar7 = DAT_ram_40094ed4;
                  puVar4 = DAT_ram_40094ec4;
                  if (param_4 != 3) goto LAB_ram_4001d03a;
                  goto LAB_ram_4001ce62;
                }
                goto LAB_ram_4001cc72;
              }
            }
LAB_ram_4001cd5e:
            fVar6 = (float)FUN_ram_4001a5d0(param_1,puVar4,DAT_ram_400952b0);
            iStack_74 = FUN_ram_4001a5fc(fVar6 * DAT_ram_40094e90);
            if (999 < iStack_74) {
              uVar8 = (ulonglong)(uint)fVar6;
LAB_ram_4001ccd0:
              uVar3 = FUN_ram_4001a5fc(uVar8);
              uVar2 = FUN_ram_4002c834(0x6f);
              FUN_ram_4001b664(param_5,uVar3,uVar2);
              return;
            }
          }
          else {
            iVar1 = FUN_ram_4000521c(param_2,&DAT_ram_40095028);
            param_1 = CONCAT44(uStack_70,fVar6);
            if (iVar1 == 0) {
              if (param_3 == 0) {
                fVar7 = DAT_ram_400952b8;
                puVar4 = DAT_ram_40094ee0;
                if (param_4 != 0) {
                  if (param_4 == 1) {
                    fVar6 = (float)FUN_ram_4001a5d0(param_1,0,DAT_ram_40094604);
                    iStack_74 = FUN_ram_4001a5fc(fVar6 * DAT_ram_40094658);
                    uVar3 = 0x6f;
                    goto LAB_ram_4001c9da;
                  }
                  goto LAB_ram_4001ce96;
                }
LAB_ram_4001ce62:
                FUN_ram_4001a5d0(CONCAT44(uStack_70,fVar6),puVar4,fVar7);
                goto LAB_ram_4001caec;
              }
              if (1 < (param_3 - 1 & 0xff)) {
                fVar7 = DAT_ram_40094ea8;
                puVar4 = DAT_ram_400952c0;
                if (param_3 == 3) {
                  if (param_4 == 0) goto LAB_ram_4001ce62;
                  if ((param_4 == 1) || ((param_4 - 4 & 0xff) < 2)) goto LAB_ram_4001cb4e;
                  if (param_4 == 2) goto LAB_ram_4001cef6;
                  fVar7 = DAT_ram_40094ec8;
                  if (param_4 == 3) goto LAB_ram_4001ca28;
                }
                else if (param_3 == 4) {
                  if (param_4 != 0) {
                    uVar5 = 1;
                    if (param_4 == 1) goto LAB_ram_4001ce14;
                    if (param_4 != 2) goto LAB_ram_4001cd2c;
LAB_ram_4001cef6:
                    if (fVar6 < 0.0) {
                      param_1 = 0;
                    }
                    else if (DAT_ram_40094604 < fVar6) {
                      param_1 = (ulonglong)(uint)DAT_ram_40094604;
                    }
                    uVar5 = (uint)((float)param_1 * DAT_ram_40094e88);
                    if ((int)uVar5 < 4) {
                      if ((int)uVar5 < 0) {
                        uVar5 = 0;
                      }
                    }
                    else {
                      uVar5 = 3;
                    }
                    uVar3 = FUN_ram_4001ae0a(uVar5 & 0xff);
                    puVar4 = &DAT_ram_400955b4;
                    goto LAB_ram_4001cc90;
                  }
                  goto LAB_ram_4001ce62;
                }
                goto LAB_ram_4001c886;
              }
              fVar7 = DAT_ram_40094ed4;
              puVar4 = DAT_ram_40094ec4;
              if (param_4 == 0) goto LAB_ram_4001ce62;
              uVar3 = DAT_ram_400952bc;
              if (param_4 != 1) {
                param_4 = param_4 - 2;
                goto LAB_ram_4001cb9a;
              }
              goto LAB_ram_4001cc7e;
            }
            iVar1 = FUN_ram_4000521c(param_2,s_reverb_ram_4009502c);
            if (iVar1 != 0) {
              iVar1 = FUN_ram_4000521c(param_2,&DAT_ram_40095034);
              param_1 = CONCAT44(uStack_70,fVar6);
              if (iVar1 != 0) goto LAB_ram_4001c886;
              uVar3 = (undefined4)DAT_ram_400952e0;
              fVar7 = DAT_ram_40094e9c;
              if (param_3 < 2) {
                if (param_3 == 1) {
                  if (5 < param_4) {
                    uVar5 = 6;
LAB_ram_4001d100:
                    uVar3 = DAT_ram_4009527c;
                    fVar7 = DAT_ram_40095280;
                    if (param_4 != uVar5) goto LAB_ram_4001c886;
                  }
                }
                else if (2 < param_4) {
                  uVar5 = 3;
                  goto LAB_ram_4001d100;
                }
              }
              else if (7 < param_4) {
                uVar5 = 8;
                goto LAB_ram_4001d100;
              }
LAB_ram_4001c95a:
              fVar6 = (float)FUN_ram_4001a5d0(CONCAT44(uStack_70,fVar6),uVar3,fVar7);
              fVar6 = fVar6 * DAT_ram_40094e90;
              goto LAB_ram_4001cbe4;
            }
            if (param_3 == 6) {
              fVar9 = DAT_ram_40094658;
              fVar10 = DAT_ram_40094604;
              if (param_4 != 0) {
                fVar7 = DAT_ram_400952c4;
                puVar4 = DAT_ram_40094e8c;
                if (param_4 != 3) {
                  if ((param_4 - 1 & 0xff) < 2) goto LAB_ram_4001cb4e;
                  param_4 = param_4 - 4;
                  goto joined_r0x4001cff0;
                }
                goto LAB_ram_4001ce62;
              }
LAB_ram_4001cfa0:
              fVar6 = (float)FUN_ram_4001a5d0(CONCAT44(uStack_70,fVar6),fVar10,fVar9);
              iStack_74 = FUN_ram_4001a5fc(fVar6 * DAT_ram_40094e90);
              uVar3 = 0x71;
              goto LAB_ram_4001cfba;
            }
            fVar9 = DAT_ram_40095280;
            if (param_3 == 5) {
              if (param_4 == 0) {
LAB_ram_4001cffe:
                fVar10 = 0.0;
                goto LAB_ram_4001cfa0;
              }
              fVar7 = DAT_ram_400952c8;
              if (param_4 != 1) {
                uVar3 = DAT_ram_400952d0;
                fVar7 = DAT_ram_400952cc;
                if (param_4 != 3) {
                  if (param_4 == 2) goto LAB_ram_4001cb4e;
LAB_ram_4001d03a:
                  uVar5 = 1;
                  param_4 = param_4 - 4;
                  goto LAB_ram_4001cd40;
                }
                goto LAB_ram_4001c99a;
              }
LAB_ram_4001ce14:
              fVar9 = 0.0;
            }
            else {
              fVar7 = DAT_ram_400952d4;
              if (param_3 != 7) {
                fVar10 = DAT_ram_40094634;
                if (param_4 == 0) goto LAB_ram_4001cfa0;
                if (param_4 != 1) {
LAB_ram_4001cdec:
                  param_4 = param_4 - 2 & 0xff;
                  uVar5 = 3;
                  goto LAB_ram_4001cd12;
                }
                goto LAB_ram_4001ce14;
              }
              if (param_4 == 0) goto LAB_ram_4001cffe;
              fVar9 = DAT_ram_40094ed4;
              if (param_4 != 1) {
                uVar5 = 2;
                fVar7 = DAT_ram_400952d8;
                puVar4 = DAT_ram_400952dc;
                if (param_4 != 2) goto LAB_ram_4001cd2c;
                goto LAB_ram_4001ce62;
              }
            }
            fVar6 = (float)FUN_ram_4001a5d0(CONCAT44(uStack_70,fVar6),fVar9,fVar7);
            iStack_74 = FUN_ram_4001a5fc(fVar6 * DAT_ram_40094e90);
          }
          uVar3 = 0x6f;
        }
LAB_ram_4001cfba:
        uVar3 = FUN_ram_4002c834(uVar3);
LAB_ram_4001ca5c:
        FUN_ram_4001b696(param_5,iStack_74,uVar3);
        return;
      }
      if (param_3 == 8) {
        uVar3 = DAT_ram_4009527c;
        fVar7 = DAT_ram_40095280;
        if (param_4 == 0) {
LAB_ram_4001c99a:
          FUN_ram_4001a5d0(CONCAT44(uStack_70,fVar6),uVar3,fVar7);
          iStack_74 = FUN_ram_4001a5fc();
          uVar3 = 0x70;
LAB_ram_4001cdb0:
          uVar3 = FUN_ram_4002c834(uVar3);
          FUN_ram_400055da(param_5,0x18,s__ld__s_ram_40095260,iStack_74,uVar3);
          return;
        }
        if (param_4 == 1) {
          fVar6 = (float)FUN_ram_4001a5d0(param_1,DAT_ram_40094600,DAT_ram_40094604);
          iStack_74 = FUN_ram_4001a5fc(fVar6 * DAT_ram_40094658);
          uVar3 = 0x70;
LAB_ram_4001c9da:
          uVar3 = FUN_ram_4002c834(uVar3);
          goto LAB_ram_4001c9e2;
        }
LAB_ram_4001cd3e:
        uVar5 = 1;
        param_4 = param_4 - 2;
LAB_ram_4001cd40:
        param_4 = param_4 & 0xff;
LAB_ram_4001cd12:
        param_1 = CONCAT44(uStack_70,fVar6);
        if (param_4 <= uVar5) {
LAB_ram_4001cb4e:
          FUN_ram_4001b5f0(param_5);
          return;
        }
      }
      else {
        if (param_3 == 9) {
          fVar7 = DAT_ram_40095288;
          fVar9 = DAT_ram_40094e90;
          if (param_4 != 0) {
            uVar5 = 1;
            if (param_4 != 1) {
              if (param_4 == 2) {
                fVar6 = (float)FUN_ram_4001a5d0(param_1,DAT_ram_40094ee0,DAT_ram_40094ea8);
                iStack_74 = FUN_ram_4001a5fc(fVar6 * DAT_ram_40094e90);
                uVar3 = 0;
                goto LAB_ram_4001ca5c;
              }
              goto LAB_ram_4001cd2c;
            }
LAB_ram_4001ca28:
            puVar4 = (undefined *)0x0;
            goto LAB_ram_4001ce62;
          }
LAB_ram_4001ca14:
          FUN_ram_4001a9e4(CONCAT44(uStack_70,fVar6),fVar9,fVar7);
          goto LAB_ram_4001caec;
        }
        if (param_3 == 10) {
          if (param_4 == 0) {
            if (fVar6 < 0.0) {
              param_1 = 0;
LAB_ram_4001cab4:
              fVar6 = (float)param_1 + (float)param_1;
              fVar7 = (float)FUN_ram_4001a5d0(fVar6,DAT_ram_40095290,DAT_ram_4009528c);
              uVar2 = DAT_ram_40095298;
            }
            else {
              if (DAT_ram_40094604 < fVar6) {
                param_1 = (ulonglong)(uint)DAT_ram_40094604;
              }
              else if (fVar6 <= DAT_ram_40094634) goto LAB_ram_4001cab4;
              fVar6 = (float)param_1 - DAT_ram_40094634;
              fVar6 = fVar6 + fVar6;
              fVar7 = (float)FUN_ram_4001a5d0(fVar6,DAT_ram_4009528c,DAT_ram_4009529c);
              uVar2 = uVar3;
              uVar3 = DAT_ram_400952a0;
            }
            fVar6 = (float)FUN_ram_4001a5d0(fVar6,uVar2,uVar3);
            FUN_ram_40000e74(fVar7 * fVar6);
LAB_ram_4001caec:
            FUN_ram_4001b744(param_5);
            return;
          }
          if ((param_4 == 1) || ((param_4 - 3 & 0xff) < 3)) goto LAB_ram_4001cb4e;
          if (param_4 == 2) {
            fVar6 = (float)FUN_ram_4001a5d0(param_1,0,DAT_ram_4009463c);
            iStack_74 = FUN_ram_4001a5fc(fVar6 * DAT_ram_40094658);
            uVar3 = 0x6d;
            goto LAB_ram_4001c9da;
          }
        }
        else if (param_4 != 0) {
          param_4 = param_4 - 1;
LAB_ram_4001cb9a:
          param_4 = param_4 & 0xff;
          uVar5 = 1;
          goto LAB_ram_4001cd12;
        }
      }
    }
  }
LAB_ram_4001c886:
  iStack_74 = FUN_ram_4001a5fc((float)param_1 * DAT_ram_40094658);
  uVar3 = 0;
LAB_ram_4001c9e2:
  FUN_ram_4001b6ec(param_5,iStack_74,uVar3);
  return;
}


