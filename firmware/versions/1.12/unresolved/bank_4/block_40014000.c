/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40014000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40014008.
 * REA evidence: ev_254d26baf75aa6565ffbd6dccad4917cdeae6de66e24882c15d0a3dcef48d5a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014008(void)

{
  int iVar1;
  undefined4 *in_a3;
  undefined1 *in_a4;
  undefined1 uVar2;
  
  iVar1 = FUN_ram_4002309a(0x30069528,1);
  if (iVar1 == -1) {
    uVar2 = 6;
  }
  else {
    if (iVar1 == 0) {
      if (in_a3 != (undefined4 *)0x0) {
        *in_a3 = 0x30069528;
        in_a3[1] = 0x80;
      }
      *in_a4 = 0;
      return 1;
    }
    uVar2 = 7;
  }
  *in_a4 = uVar2;
  return 1;
}


/* NanoCore 1.12, address 0x400140f2.
 * REA evidence: ev_620e25abd0acd25097f2ac7cf363e962fe351fbf814c13935364e0c76ebd74aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400140f2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined1 *param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002b86c(param_6,param_3,0x30068f04,0x300,0xfa);
  if (iVar1 == 0) {
    *param_5 = 2;
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x30068f04;
      param_4[1] = iVar1;
    }
    *param_5 = 0;
  }
  return 1;
}


/* NanoCore 1.12, address 0x40014150.
 * REA evidence: ev_5d59db487ce05ba9ab7b79f86fd3fc8b36310c7fd98cf1e95ba599e149946e3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40014150(void)

{
  undefined4 *in_a3;
  undefined1 *in_a4;
  
  FUN_ram_40024674((undefined1)DAT_ram_3004ace0);
  DAT_ram_30068f00 = 2;
  DAT_ram_30068f01 = FUN_ram_400246b0();
  _DAT_ram_30068f02 = FUN_ram_400246f2();
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = &DAT_ram_30068f00;
    in_a3[1] = 4;
  }
  *in_a4 = 0;
  return 1;
}


/* NanoCore 1.12, address 0x40014158.
 * REA evidence: ev_555e268eb668d39b8a885fda9426c78b2ab7e0acd716818924e90f411198453f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40014158(void)

{
  undefined4 *in_a3;
  undefined1 *in_a4;
  
  FUN_ram_40024674();
  DAT_ram_30068f00 = 2;
  DAT_ram_30068f01 = FUN_ram_400246b0();
  _DAT_ram_30068f02 = FUN_ram_400246f2();
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = &DAT_ram_30068f00;
    in_a3[1] = 4;
  }
  *in_a4 = 0;
  return 1;
}


/* NanoCore 1.12, address 0x400141a6.
 * REA evidence: ev_3822f68558d31f2dae739201cc5474e2cee91add482c6124bb112a609841768c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400141a6(void)

{
  undefined4 in_register_00000100;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_a3;
  undefined1 *in_a4;
  uint uVar9;
  uint uVar10;
  undefined1 uStack_45;
  uint auStack_44 [4];
  
  uStack_45 = 0;
  uVar4 = 0;
  if (in_a4 != (undefined1 *)0x0) {
    DAT_ram_30068bec = 3;
    iVar5 = FUN_ram_4003312a(&uStack_45);
    if (iVar5 != 0) {
      uStack_45 = 0;
    }
    uVar1 = 3;
    uVar10 = 0;
    DAT_ram_30068bed = uStack_45;
    DAT_ram_30068bee = FUN_ram_4001806a();
    do {
      uVar6 = FUN_ram_40023ece(&PTR_FUN_ram_4001ea42_ram_40099d04,uVar10 & 0xff);
      uVar4 = FUN_ram_40025c04(uVar10);
      uVar3 = FUN_ram_4001e902();
      uVar7 = FUN_ram_4001ea42(uVar4);
      if (0x300 < uVar1 + 3) break;
      (&DAT_ram_30068bec)[uVar1] = uVar3;
      puVar2 = &DAT_ram_30068bec + uVar1;
      (&DAT_ram_30068bed)[uVar1] = (char)uVar7;
      (&DAT_ram_30068bee)[uVar1] = (char)uVar6;
      uVar1 = uVar1 + 3;
      for (uVar9 = 0; uVar9 != uVar6; uVar9 = uVar9 + 1 & 0xff) {
        uVar8 = FUN_ram_40027042(uVar10,uVar7,uVar9,1);
        FUN_ram_4001ea16(uVar4,uVar8);
        if (0x300 < uVar1 + 4) break;
        puVar2[3] = (char)in_register_00000100;
        puVar2[4] = (char)((uint)in_register_00000100 >> 8);
        puVar2[5] = (char)((uint)in_register_00000100 >> 0x10);
        puVar2[6] = (char)((uint)in_register_00000100 >> 0x18);
        uVar1 = uVar1 + 4;
        puVar2 = puVar2 + 4;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 8);
    uVar10 = uVar1;
    if (uVar1 + 9 < 0x301) {
      auStack_44[0] = 0;
      iVar5 = FUN_ram_40017fe0(auStack_44);
      (&DAT_ram_30068bec)[uVar1] = 8;
      uVar6 = 0;
      do {
        if ((iVar5 == 0) || (auStack_44[0] <= uVar6)) {
          uVar3 = (undefined1)uVar6;
        }
        else {
          uVar3 = (undefined1)*(undefined4 *)(iVar5 + uVar6 * 4);
        }
        (&DAT_ram_30068bed)[uVar6 + uVar1] = uVar3;
        uVar6 = uVar6 + 1;
        uVar10 = uVar1 + 9;
      } while (uVar6 != 8);
    }
    if (in_a3 != (undefined4 *)0x0) {
      *in_a3 = &DAT_ram_30068bec;
      in_a3[1] = uVar10;
    }
    *in_a4 = 0;
    uVar4 = 1;
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x400143fc.
 * REA evidence: ev_d000387bcbca4022e575003c58672aa6cf29a8d7d2a9df274e3c7f8ff7a770ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400143fc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 * 4 + 0x30067c28) = param_2;
  return 0;
}


/* NanoCore 1.12, address 0x4001440c.
 * REA evidence: ev_dfeffcb19600185c2d604e8083c4994669964c10eaa759b61542c2fc69190bb9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001440c(undefined1 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (param_2 != 0) {
    uVar1 = 0xffffffff;
    if (_DAT_ram_30068870 < 8) {
      iVar2 = _DAT_ram_30068870 * 0xc;
      _DAT_ram_30068870 = _DAT_ram_30068870 + 1;
      *(undefined1 *)(iVar2 + 0x30068874) = param_1;
      *(int *)(iVar2 + 0x30068878) = param_2;
      *(undefined4 *)(&DAT_ram_3006887c + iVar2) = param_3;
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001444a.
 * REA evidence: ev_f440785692f9cbcdb36cf866aa79399d51bc70b8a09193a8a89eb6238509496b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001444a(undefined4 param_1)

{
  _DAT_ram_30068868 = param_1;
  return;
}


/* NanoCore 1.12, address 0x40014454.
 * REA evidence: ev_7c36624405f2f2e7ca00f1b2d31a4dba047f53d98a39fb15d4ae93c3c653ae0a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014454(undefined4 param_1)

{
  _DAT_ram_3006886c = param_1;
  return;
}


/* NanoCore 1.12, address 0x4001445e.
 * REA evidence: ev_0fa716e903de6ebaa4d91e89435c18c0335cea829e064973d8b9bdcf53bf8cf2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001445e(undefined4 param_1)

{
  _DAT_ram_30067824 = param_1;
  return;
}


/* NanoCore 1.12, address 0x40014468.
 * REA evidence: ev_3780bd3cfba105c4c70c033a1283df41319067254a680bb160c80b9e8ede0ad9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014468(void)

{
  return DAT_ram_3004ace0;
}


/* NanoCore 1.12, address 0x40014472.
 * REA evidence: ev_c858f210eda16bad573270cecb29b6a69f1f53c483b0c958ddb742626ebfc591
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014472(undefined1 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uStack_328;
  undefined1 uStack_327;
  undefined1 uStack_326;
  undefined1 uStack_325;
  undefined1 uStack_324;
  undefined1 auStack_323 [779];
  
  iVar2 = FUN_ram_400246fa(_DAT_ram_30068868 != 0,_DAT_ram_3006886c != 0);
  if ((iVar2 != 0xff) && (iVar3 = FUN_ram_40013b7a(), iVar3 != 0)) {
    uVar1 = param_3;
    if (0x300 < param_3) {
      uVar1 = 0x300;
    }
    uStack_328 = 2;
    uStack_326 = 0;
    uStack_325 = (undefined1)uVar1;
    uStack_324 = (undefined1)(uVar1 >> 8);
    uStack_327 = param_1;
    if ((param_3 != 0) && (param_2 != 0)) {
      memcpy(auStack_323,param_2,uVar1);
    }
    FUN_ram_40013bac(iVar2,0x72,&uStack_328,uVar1 + 5);
  }
  return;
}


/* NanoCore 1.12, address 0x40014528.
 * REA evidence: ev_fe1a219d3c2118543097025e7f22da8dc0401ab4115fd3e34eb9be938eb88765
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014528(void)

{
  undefined1 auStack_18 [20];
  
  FUN_ram_40013efe(auStack_18);
  FUN_ram_40014472(0x67,auStack_18,7);
  return;
}


/* NanoCore 1.12, address 0x400146f8.
 * REA evidence: ev_afcb410d884326d691df1f497464adea55b17d191e088a273cb55b638190043e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400146f8(void)

{
  int iVar1;
  
  if ((DAT_ram_30068864 == '\0') &&
     (iVar1 = FUN_ram_40004988(0x30068838,s_syxtx_ram_40099d9c,1), iVar1 == 0)) {
    DAT_ram_30068864 = '\x01';
  }
  FUN_ram_40024660();
  if (DAT_ram_30068830 == '\0') {
    _DAT_ram_30067db4 = FUN_ram_400141a6;
    _DAT_ram_30067db8 = &LAB_ram_4001466e;
    _DAT_ram_30067dbc = &LAB_ram_40013fae;
    _DAT_ram_30067dc0 = &LAB_ram_40014544;
    _DAT_ram_30067dc8 = &DAT_ram_40014140;
    _DAT_ram_30067dd0 = &LAB_ram_400140de;
    _DAT_ram_30067dd4 = &LAB_ram_4001405a;
    _DAT_ram_30067dd8 = &LAB_ram_4001438c;
    _DAT_ram_30067ddc = FUN_ram_40013d1a;
    _DAT_ram_30067de0 = &LAB_ram_40013ff8;
    FUN_ram_4001440c(0x20,&PTR_FUN_ram_40013e04_ram_40099db8,0x300688d4);
    FUN_ram_4009153c();
    FUN_ram_4009339c();
    FUN_ram_400139f6();
    DAT_ram_30068830 = '\x01';
  }
  return;
}


/* NanoCore 1.12, address 0x400147da.
 * REA evidence: ev_631dbfa0b2fdeaf4e2fdec0f1527daf809e8fdd38cd5890291d4ee271b62bcea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400147da(char param_1,int param_2,uint param_3,byte param_4)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  code *pcVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined2 uVar13;
  uint uVar14;
  char cStack_385;
  undefined4 *puStack_384;
  uint uStack_380;
  undefined4 uStack_37c;
  undefined1 auStack_378 [64];
  char cStack_338;
  byte bStack_337;
  uint uStack_334;
  char cStack_330;
  undefined2 uStack_32f;
  ushort uStack_32d;
  ushort uStack_32b;
  undefined1 auStack_329 [4];
  undefined1 auStack_325 [757];
  
  memset(&cStack_338,0,0x308);
  cStack_338 = param_1;
  bStack_337 = param_4;
  if (param_3 < 0x301) {
    uStack_334 = param_3;
    if (param_3 != 0) goto LAB_ram_4001483a;
  }
  else {
    uStack_334 = 0x300;
LAB_ram_4001483a:
    if (param_2 != 0) {
      memcpy(&cStack_330,param_2,uStack_334);
    }
  }
  iVar6 = FUN_ram_40004d36();
  if (iVar6 != 0) {
    return;
  }
  if (cStack_338 != 'p') {
    return;
  }
  puStack_384 = (undefined4 *)0x0;
  uStack_380 = 0;
  cStack_385 = '\0';
  FUN_ram_40029daa(2);
  if ((uStack_334 < 7) || (cStack_330 != '\x02')) {
    cStack_385 = '\x01';
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    uVar3 = (uint)uStack_32b;
    uVar12 = (uint)uStack_32d;
    uVar13 = uStack_32f;
    if (uStack_334 == uVar3 + 7) {
      if (uVar12 < 0x100) {
        DAT_ram_3004ace0 = (uint)bStack_337;
        if (DAT_ram_3004ace0 != 1) {
          FUN_ram_40024674();
        }
        FUN_ram_40004346();
        pcVar10 = *(code **)(uVar12 * 4 + 0x30067c28);
        uVar4 = uVar12 & 0xff;
        if (pcVar10 == (code *)0x0) {
          for (iVar6 = 0; iVar6 != _DAT_ram_30068870; iVar6 = iVar6 + 1) {
            uVar14 = (uint)*(byte *)(iVar6 * 0xc + 0x30068874);
            if ((uVar14 <= uVar4) && (uVar4 <= (uVar14 + 4 & 0xff))) {
              puVar11 = *(undefined4 **)(iVar6 * 0xc + 0x30068878);
              if (puVar11 == (undefined4 *)0x0) break;
              switch(uVar4 - uVar14 & 0xff) {
              case 0:
                if ((code *)*puVar11 != (code *)0x0) {
                  iVar6 = (*(code *)*puVar11)(*(undefined4 *)(&DAT_ram_3006887c + iVar6 * 0xc),
                                              &puStack_384,&cStack_385);
                  goto LAB_ram_40014992;
                }
                goto switchD_ram_400149c2_default;
              case 1:
                if ((3 < uVar3) && (pcVar10 = (code *)puVar11[1], pcVar10 != (code *)0x0)) {
                  uVar7 = FUN_ram_40013b5c(auStack_329);
                  iVar6 = (*pcVar10)(*(undefined4 *)(&DAT_ram_3006887c + iVar6 * 0xc),uVar7,
                                     &cStack_385);
                  goto LAB_ram_40014992;
                }
                break;
              case 2:
                if ((4 < uVar3) && (pcVar10 = (code *)puVar11[2], pcVar10 != (code *)0x0)) {
                  uVar7 = FUN_ram_40013b5c(auStack_329);
                  iVar6 = (*pcVar10)(*(undefined4 *)(&DAT_ram_3006887c + iVar6 * 0xc),uVar7,
                                     auStack_325,uVar3 - 4,&cStack_385);
                  goto LAB_ram_40014992;
                }
                break;
              case 3:
                if ((7 < uVar3) && (pcVar10 = (code *)puVar11[3], pcVar10 != (code *)0x0)) {
                  uVar7 = FUN_ram_40013b5c(auStack_329);
                  uVar8 = FUN_ram_40013b5c(auStack_325);
                  iVar6 = (*pcVar10)(*(undefined4 *)(&DAT_ram_3006887c + iVar6 * 0xc),uVar7,uVar8,
                                     &cStack_385);
                  goto LAB_ram_40014992;
                }
                break;
              case 4:
                if ((code *)puVar11[4] != (code *)0x0) {
                  iVar6 = (*(code *)puVar11[4])
                                    (*(undefined4 *)(&DAT_ram_3006887c + iVar6 * 0xc),&cStack_385);
                  goto LAB_ram_40014992;
                }
                cStack_385 = '\0';
                goto LAB_ram_40014a86;
              default:
                goto switchD_ram_400149c2_default;
              }
              cStack_385 = '\x01';
              goto LAB_ram_40014a86;
            }
          }
switchD_ram_400149c2_default:
          cStack_385 = '~';
        }
        else {
          iVar6 = (*pcVar10)(uVar4,auStack_329,uVar3,&puStack_384,&cStack_385);
LAB_ram_40014992:
          if (iVar6 == 0) {
            cStack_385 = '~';
            puStack_384 = (undefined4 *)0x0;
            uStack_380 = 0;
          }
        }
LAB_ram_40014a86:
        DAT_ram_3004ace0 = 0xff;
        if (uVar12 == 0x3a) {
          DAT_ram_3004ace0 = 0xff;
          return;
        }
        if (uVar12 == 0x5b) {
          DAT_ram_3004ace0 = 0xff;
          return;
        }
      }
      else {
        cStack_385 = '~';
      }
    }
    else {
      cStack_385 = '\x01';
    }
  }
  if ((bStack_337 & 0xfd) == 0) {
    FUN_ram_400064e4(10);
  }
  bVar2 = bStack_337;
  uVar3 = uStack_380;
  puVar11 = puStack_384;
  uVar1 = (undefined2)uStack_380;
  cVar9 = cStack_385;
  if ((bStack_337 & 0xfd) == 0 && cStack_385 == '\0') {
    if (uStack_380 == 0) {
      uStack_37c = 0;
      puVar11 = &uStack_37c;
      uVar3 = 4;
      cVar9 = '\x11';
    }
    else {
      uVar4 = 0;
      if (puStack_384 != (undefined4 *)0x0) {
        do {
          uVar14 = uVar3 - uVar4;
          if (0x40 < uVar14) {
            uVar14 = 0x40;
          }
          uVar5 = uVar4 + uVar14;
          iVar6 = 0x10;
          if (uVar3 <= uVar5) {
            iVar6 = 0x11;
          }
          uStack_37c = CONCAT22((short)uVar4,uVar1);
          memcpy(auStack_378,uVar4 + (int)puVar11,uVar14);
          FUN_ram_40013ca6(bVar2,uVar13,uVar12,iVar6,&uStack_37c,uVar14 + 4);
          if (iVar6 != 0x11) {
            FUN_ram_400064e4(0x28);
          }
          uVar4 = uVar5;
        } while (uVar5 < uVar3);
        goto LAB_ram_40014b24;
      }
      puVar11 = (undefined4 *)0x0;
      cVar9 = '\0';
    }
  }
  FUN_ram_40013ca6(bStack_337,uVar13,uVar12,cVar9,puVar11,uVar3);
LAB_ram_40014b24:
  FUN_ram_40029e18(2);
  return;
}


/* NanoCore 1.12, address 0x40014b3a.
 * REA evidence: ev_a6f06f6acfce14d2fdb8f962e593c8c42e0bd7cfc20728df2e6acdcebcc0c376
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014b3a(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 auStack_14 [4];
  
  if (param_1 == 0xf0) {
    _DAT_ram_30068828 = 0;
    _DAT_ram_3006882c = _DAT_ram_30067824;
  }
  uVar2 = _DAT_ram_30068828;
  if (_DAT_ram_30068828 < 0x400) {
    uVar4 = _DAT_ram_30068828 + 1;
    puVar1 = &DAT_ram_30068428 + _DAT_ram_30068828;
    _DAT_ram_30068828 = uVar4;
    *puVar1 = (char)param_1;
    if (param_1 != 0xf7) {
      return;
    }
    if (5 < uVar4) {
      if (uVar4 == 7) {
        if (DAT_ram_30068428 != -0x10) {
          _DAT_ram_30068828 = 0;
          return;
        }
        if (DAT_ram_30068429 != '}') {
          _DAT_ram_30068828 = 0;
          return;
        }
        if ((((DAT_ram_3006842a == 'D') && (DAT_ram_3006842b == 'F')) && (DAT_ram_3006842c == 'U'))
           && ((DAT_ram_3006842d == '\x01' && (DAT_ram_3006842e == -9)))) {
          _DAT_ram_30068828 = 0;
          FUN_ram_4003434e();
          return;
        }
      }
      else {
        if (DAT_ram_30068428 != -0x10) {
          _DAT_ram_30068828 = 0;
          return;
        }
        if (DAT_ram_30068429 != '}') {
          _DAT_ram_30068828 = 0;
          return;
        }
      }
      if (((DAT_ram_3006842a == 'N') && (DAT_ram_3006842b == 'C')) && (DAT_ram_3006842c == 'p')) {
        auStack_14[0] = 0;
        iVar3 = FUN_ram_40013b0e(&DAT_ram_3006842d,uVar2 - 5,0x300688e8,0x300,auStack_14);
        if (iVar3 == 0) {
          FUN_ram_400147da(0x70,0x300688e8,auStack_14[0],_DAT_ram_3006882c);
        }
        _DAT_ram_30068828 = 0;
        return;
      }
    }
  }
  else if (param_1 != 0xf7) {
    return;
  }
  _DAT_ram_30068828 = 0;
  return;
}


/* NanoCore 1.12, address 0x40014c88.
 * REA evidence: ev_16438ad2a4689ec122029b5ecffd6736566132b5deaeb85c765bca2e0294a5b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014c88(void)

{
  FUN_ram_4002cd38(0xe39a5f);
  return;
}


/* NanoCore 1.12, address 0x40014c94.
 * REA evidence: ev_7a8be81e10b4cea6c80378faf7163048c943305d63b3e99d0ae2abda6dadc21c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40033ee0(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  char acStack_8 [8];
  
  acStack_8[0] = '\0';
  acStack_8[1] = '\0';
  acStack_8[2] = '\0';
  acStack_8[3] = '\0';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + 0x12);
    do {
      uVar2 = (uint)*pbVar1;
      if ((uVar2 < 8) && (acStack_8[uVar2] == '\0')) {
LAB_ram_40033f06:
        acStack_8[uVar2] = '\x01';
      }
      else {
        uVar2 = 0;
        do {
          if (acStack_8[uVar2] == '\0') {
            *pbVar1 = (byte)uVar2;
            goto LAB_ram_40033f06;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
      }
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != (byte *)(param_1 + 0x1a));
  }
  return;
}


/* NanoCore 1.12, address 0x40014c98.
 * REA evidence: ev_dcdbb1972d483e3b8592ccfe8021f21c9cd716bc54e5fd2e7724e7a98fe175db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014c98(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4003310a();
  uVar1 = 0xffffffff;
  if (iVar2 == 0) {
    FUN_ram_4002f6b8();
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40014cb6.
 * REA evidence: ev_355e8110a42833e1c85f10f50d7e44c1d89fa0c60f51c5b5d95ba16356f8b46b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014cb6(void)

{
  FUN_ram_4000e56e();
  return 0;
}


/* NanoCore 1.12, address 0x40014cc6.
 * REA evidence: ev_bbf45916917ae9b26eb46b79299a7697246381a6d26f6488a330435995609d03
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40014cc6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_40025c22();
  if (iVar1 == 0xff) {
    uVar3 = 5;
  }
  else {
    uVar2 = FUN_ram_4001ea42(param_1);
    uVar3 = FUN_ram_40027130(iVar1,uVar2,1);
    if (0xc < uVar3) {
      uVar3 = 0xc;
    }
    uVar3 = uVar3 & 0xff;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40014d0a.
 * REA evidence: ev_9ac37d910ac79b5640f33f31b08f35a30fe767e8c172f402f12f14a4a5223718
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014d0a(undefined4 param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  uint local_70 [15];
  
  if ((6 < *param_2) &&
     (iVar3 = FUN_ram_40033adc(*(undefined1 *)((int)param_2 + 0x33f)), iVar3 != 0)) {
    FUN_ram_40033af8(param_2);
  }
  iVar3 = FUN_ram_4002fa66(0x300695ac,param_2,&DAT_ram_40099dd4);
  if (iVar3 == 0) {
    FUN_ram_40018472(param_2 + 9,8);
    puVar6 = param_2 + 0xe;
    uVar2 = 0;
    do {
      uVar4 = FUN_ram_40025c04(uVar2);
      uVar9 = (uint)*(byte *)((int)puVar6 + 1);
      uVar1 = puVar6[1];
      iVar3 = FUN_ram_40033ac8((char)*puVar6);
      uVar7 = uVar2 & 0xff;
      if ((char)*puVar6 == '\0') {
        uVar5 = 0;
        if ((uVar2 != 0) && (uVar7 != 5)) {
          if (uVar7 == 6) {
            uVar9 = 6;
            bVar10 = false;
            goto LAB_ram_40014dc8;
          }
          bVar10 = false;
          if (uVar7 != 7) goto LAB_ram_40014dd8;
          uVar5 = 2;
        }
        bVar10 = false;
        uVar9 = uVar5;
LAB_ram_40014db4:
        if (uVar2 == 7) {
          uVar9 = FUN_ram_40066d3e(uVar9);
        }
      }
      else {
        bVar10 = (char)uVar1 != '\0';
        if (uVar2 == 6) {
LAB_ram_40014dc8:
          uVar9 = FUN_ram_400339ae(uVar9);
        }
        else {
LAB_ram_40014dd8:
          if (uVar2 == 1) {
            if (0xb < uVar9) {
LAB_ram_40014ea8:
              uVar9 = 0;
            }
          }
          else {
            if (uVar7 != 4) goto LAB_ram_40014db4;
            if (7 < uVar9) goto LAB_ram_40014ea8;
          }
        }
      }
      FUN_ram_4001e8ee(uVar4,bVar10);
      FUN_ram_4001f4f4(uVar4,uVar9);
      uVar5 = FUN_ram_40014cc6(uVar4);
      memset(local_70,0,0x30);
      if (iVar3 == 0) {
        FUN_ram_40033b16(uVar7,uVar9,local_70,0xc);
      }
      puVar8 = local_70;
      for (uVar9 = 0; ((uVar9 & 0xff) < uVar5 && (uVar9 != 0xc)); uVar9 = uVar9 + 1) {
        if (iVar3 == 0) {
          uVar11 = (ulonglong)*puVar8;
        }
        else {
          uVar11 = FUN_ram_40033bd0(puVar6,iVar3);
        }
        FUN_ram_4001e962(uVar11,uVar4,uVar9);
        puVar8 = puVar8 + 1;
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x32;
    } while (uVar2 != 8);
    FUN_ram_4001800c((char)param_2[0x19e]);
    FUN_ram_40017ff0(param_1);
    FUN_ram_400180b4(param_2 + 1);
    if ((param_3 == 0) || (iVar3 = FUN_ram_40033170(param_1), iVar3 == 0)) {
      DAT_ram_300695a8 = 0;
      DAT_ram_300698f0 = (char)param_1;
      DAT_ram_300698f1 = 1;
      return 0;
    }
    DAT_ram_300698f1 = 1;
    DAT_ram_300698f0 = (char)param_1;
  }
  DAT_ram_300695a8 = 1;
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40014ee0.
 * REA evidence: ev_04e48d1403fba3a7cb4f55df55ad69e3db0638f85c10eefb2cc20d02bfa4b15c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014ee0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_350 [836];
  
  uVar1 = 0x3f;
  if (param_1 < 0x40) {
    uVar1 = param_1 & 0xff;
  }
  iVar2 = FUN_ram_4002f7ae(uVar1,auStack_350,thunk_FUN_ram_40033ee0);
  if (iVar2 == 0) {
    uVar3 = FUN_ram_40014d0a(uVar1,auStack_350,param_2);
  }
  else {
    DAT_ram_300695a8 = 1;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40014f3e.
 * REA evidence: ev_e833f20279c968a65c0d51a972db45ecb588f75ba747587981260a32c9d78014
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014f3e(int param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  undefined4 local_48 [2];
  char acStack_40 [24];
  
  uStack_4c = 0;
  FUN_ram_40018136(acStack_40,0x10);
  uVar3 = memset(param_1 + 2,0,0x10);
  if (acStack_40[0] != '\0') {
    FUN_ram_4000303c(uVar3,acStack_40,0x10);
  }
  local_48[0] = 0x3020100;
  local_48[1] = 0x7060504;
  FUN_ram_40022f62(local_48,8,&uStack_4c);
  iVar6 = 0;
  do {
    *(undefined1 *)(param_1 + 0x12 + iVar6) = *(undefined1 *)((int)local_48 + iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 8);
  puVar1 = (undefined1 *)(param_1 + 0x1c);
  iVar6 = 0;
  do {
    uVar3 = FUN_ram_40025c04(iVar6);
    uVar2 = (&DAT_ram_40099dcc)[iVar6];
    uVar4 = FUN_ram_40014cc6();
    memset(puVar1,0,100);
    *puVar1 = uVar2;
    uVar2 = FUN_ram_4001ea42(uVar3);
    puVar1[1] = uVar2;
    uVar2 = FUN_ram_4001e902(uVar3);
    puVar1[2] = uVar2;
    puVar1[3] = (char)uVar4;
    uVar8 = 0;
    puVar7 = puVar1 + -0x1c;
    while( true ) {
      if (uVar4 <= (uVar8 & 0xff)) break;
      puVar7[0x20] = (char)uVar8;
      uVar9 = FUN_ram_4001ea16(uVar3,uVar8);
      *(undefined4 *)(puVar7 + 0x24) = uVar9;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 8;
    }
    iVar6 = iVar6 + 1;
    puVar1 = puVar1 + 100;
  } while (iVar6 != 8);
  uVar2 = FUN_ram_4001806a();
  *(undefined1 *)(param_1 + 0x33c) = uVar2;
  iVar6 = thunk_FUN_ram_4001debc();
  iVar5 = thunk_FUN_ram_4001dece();
  uVar3 = FUN_ram_40033ae4(*(undefined1 *)(param_1 + 0x81));
  if (iVar6 < 0) {
    iVar6 = 0xff;
  }
  *(char *)(param_1 + 0x33d) = (char)iVar6;
  if (iVar5 < 0) {
    iVar5 = 0xff;
  }
  *(char *)(param_1 + 0x33e) = (char)iVar5;
  iVar6 = FUN_ram_40033adc(uVar3);
  if (iVar6 == 0) {
    uVar3 = 0xff;
  }
  *(char *)(param_1 + 0x33f) = (char)uVar3;
  return;
}


