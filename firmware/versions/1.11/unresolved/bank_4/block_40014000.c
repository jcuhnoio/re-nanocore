/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40014000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40014172.
 * REA evidence: ev_d4f04483281085ba1b6cb0b4303764843367541269e267b464dc458d6c2df783
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014172(void)

{
  int iVar1;
  
  if ((DAT_ram_300688bc == '\0') &&
     (iVar1 = FUN_ram_4000492c(0x30068890,&DAT_ram_40094c48,1), iVar1 == 0)) {
    DAT_ram_300688bc = '\x01';
  }
  FUN_ram_40023f52();
  if (DAT_ram_30068888 == '\0') {
    _DAT_ram_30066e08 = FUN_ram_40013c02;
    _DAT_ram_30066e0c = &LAB_ram_400140e8;
    _DAT_ram_30066e10 = &LAB_ram_40013a8e;
    _DAT_ram_30066e14 = &LAB_ram_40013fbe;
    _DAT_ram_30066e1c = &DAT_ram_40013b9c;
    _DAT_ram_30066e24 = &LAB_ram_40013b3a;
    _DAT_ram_30066e28 = &LAB_ram_40013654;
    _DAT_ram_30066e2c = &LAB_ram_40013de8;
    _DAT_ram_30066e30 = FUN_ram_40013610;
    _DAT_ram_30066e34 = &LAB_ram_40013ad8;
    FUN_ram_40013e86(0x20,&PTR_FUN_ram_400137d6_ram_40094d14,0x3006892c);
    FUN_ram_4008fc6c();
    FUN_ram_40091abc();
    FUN_ram_400131a0();
    DAT_ram_30068888 = '\x01';
  }
  return;
}


/* NanoCore 1.11, address 0x40014254.
 * REA evidence: ev_08c45f689b418129082925e9e7644517e1a772852299d5d0dcde6d4c08358a9a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014254(char param_1,int param_2,uint param_3,byte param_4)

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
    if (param_3 != 0) goto LAB_ram_400142b4;
  }
  else {
    uStack_334 = 0x300;
LAB_ram_400142b4:
    if (param_2 != 0) {
      memcpy(&cStack_330,param_2,uStack_334);
    }
  }
  iVar6 = FUN_ram_40004dee();
  if (iVar6 != 0) {
    return;
  }
  if (cStack_338 != 'p') {
    return;
  }
  puStack_384 = (undefined4 *)0x0;
  uStack_380 = 0;
  cStack_385 = '\0';
  FUN_ram_40029096(2);
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
        DAT_ram_30049d9c = (uint)bStack_337;
        if (DAT_ram_30049d9c != 1) {
          FUN_ram_40023f66();
        }
        FUN_ram_400042ea();
        pcVar10 = *(code **)(uVar12 * 4 + 0x30066c7c);
        uVar4 = uVar12 & 0xff;
        if (pcVar10 == (code *)0x0) {
          for (iVar6 = 0; iVar6 != _DAT_ram_300688c8; iVar6 = iVar6 + 1) {
            uVar14 = (uint)*(byte *)(iVar6 * 0xc + 0x300688cc);
            if ((uVar14 <= uVar4) && (uVar4 <= (uVar14 + 4 & 0xff))) {
              puVar11 = *(undefined4 **)(iVar6 * 0xc + 0x300688d0);
              if (puVar11 == (undefined4 *)0x0) break;
              switch(uVar4 - uVar14 & 0xff) {
              case 0:
                if ((code *)*puVar11 != (code *)0x0) {
                  iVar6 = (*(code *)*puVar11)(*(undefined4 *)(&DAT_ram_300688d4 + iVar6 * 0xc),
                                              &puStack_384,&cStack_385);
                  goto LAB_ram_4001440c;
                }
                goto switchD_ram_4001443c_default;
              case 1:
                if ((3 < uVar3) && (pcVar10 = (code *)puVar11[1], pcVar10 != (code *)0x0)) {
                  uVar7 = FUN_ram_40013306(auStack_329);
                  iVar6 = (*pcVar10)(*(undefined4 *)(&DAT_ram_300688d4 + iVar6 * 0xc),uVar7,
                                     &cStack_385);
                  goto LAB_ram_4001440c;
                }
                break;
              case 2:
                if ((4 < uVar3) && (pcVar10 = (code *)puVar11[2], pcVar10 != (code *)0x0)) {
                  uVar7 = FUN_ram_40013306(auStack_329);
                  iVar6 = (*pcVar10)(*(undefined4 *)(&DAT_ram_300688d4 + iVar6 * 0xc),uVar7,
                                     auStack_325,uVar3 - 4,&cStack_385);
                  goto LAB_ram_4001440c;
                }
                break;
              case 3:
                if ((7 < uVar3) && (pcVar10 = (code *)puVar11[3], pcVar10 != (code *)0x0)) {
                  uVar7 = FUN_ram_40013306(auStack_329);
                  uVar8 = FUN_ram_40013306(auStack_325);
                  iVar6 = (*pcVar10)(*(undefined4 *)(&DAT_ram_300688d4 + iVar6 * 0xc),uVar7,uVar8,
                                     &cStack_385);
                  goto LAB_ram_4001440c;
                }
                break;
              case 4:
                if ((code *)puVar11[4] != (code *)0x0) {
                  iVar6 = (*(code *)puVar11[4])
                                    (*(undefined4 *)(&DAT_ram_300688d4 + iVar6 * 0xc),&cStack_385);
                  goto LAB_ram_4001440c;
                }
                cStack_385 = '\0';
                goto LAB_ram_40014500;
              default:
                goto switchD_ram_4001443c_default;
              }
              cStack_385 = '\x01';
              goto LAB_ram_40014500;
            }
          }
switchD_ram_4001443c_default:
          cStack_385 = '~';
        }
        else {
          iVar6 = (*pcVar10)(uVar4,auStack_329,uVar3,&puStack_384,&cStack_385);
LAB_ram_4001440c:
          if (iVar6 == 0) {
            cStack_385 = '~';
            puStack_384 = (undefined4 *)0x0;
            uStack_380 = 0;
          }
        }
LAB_ram_40014500:
        DAT_ram_30049d9c = 0xff;
        if (uVar12 == 0x3a) {
          DAT_ram_30049d9c = 0xff;
          return;
        }
        if (uVar12 == 0x5b) {
          DAT_ram_30049d9c = 0xff;
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
    FUN_ram_400065c6(10);
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
          FUN_ram_4001359c(bVar2,uVar13,uVar12,iVar6,&uStack_37c,uVar14 + 4);
          if (iVar6 != 0x11) {
            FUN_ram_400065c6(0x28);
          }
          uVar4 = uVar5;
        } while (uVar5 < uVar3);
        goto LAB_ram_4001459e;
      }
      puVar11 = (undefined4 *)0x0;
      cVar9 = '\0';
    }
  }
  FUN_ram_4001359c(bStack_337,uVar13,uVar12,cVar9,puVar11,uVar3);
LAB_ram_4001459e:
  FUN_ram_40029104(2);
  return;
}


/* NanoCore 1.11, address 0x400145b4.
 * REA evidence: ev_ac91a88625cc8ea835c820d0a1938170d434829cc5ca34a925f40518cd84bde5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400145b4(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iStack_48;
  uint auStack_44 [4];
  
  if (param_1 == 0xf0) {
    _DAT_ram_30068880 = 0;
    _DAT_ram_30068884 = _DAT_ram_30066878;
  }
  uVar2 = _DAT_ram_30068880;
  if (0x3ff < _DAT_ram_30068880) {
    if (param_1 == 0xf7) {
      _DAT_ram_30068880 = 0;
      return;
    }
    return;
  }
  uVar8 = _DAT_ram_30068880 + 1;
  puVar1 = &DAT_ram_30068480 + _DAT_ram_30068880;
  _DAT_ram_30068880 = uVar8;
  *puVar1 = (char)param_1;
  if (param_1 != 0xf7) {
    return;
  }
  if (uVar8 < 6) {
    _DAT_ram_30068880 = 0;
    return;
  }
  if (uVar8 == 7) {
    if (DAT_ram_30068480 != -0x10) {
      _DAT_ram_30068880 = 0;
      return;
    }
    if (DAT_ram_30068481 != '}') {
      _DAT_ram_30068880 = 0;
      return;
    }
    if ((((DAT_ram_30068482 == 'D') && (DAT_ram_30068483 == 'F')) && (DAT_ram_30068484 == 'U')) &&
       ((DAT_ram_30068485 == '\x01' && (DAT_ram_30068486 == -9)))) {
      _DAT_ram_30068880 = 0;
      iStack_48 = 0;
      auStack_44[0] = 0;
      FUN_ram_4003f100();
      FUN_ram_4003f5f4(0);
      FUN_ram_4003f640(0);
      iVar5 = FUN_ram_40006c6e();
      if ((iVar5 != 1) && (iVar5 = FUN_ram_40006c3a(), iVar5 < 1)) {
        return;
      }
      iVar5 = FUN_ram_40006eee(&DAT_ram_40094c64);
      if (iVar5 == 0) {
        return;
      }
      iVar6 = FUN_ram_400138d0(iVar5,&iStack_48,auStack_44);
      uVar2 = auStack_44[0];
      iVar3 = iStack_48;
      if (iVar6 != 0) {
        return;
      }
      uVar8 = FUN_ram_40005656(auStack_44[0]);
      if (uVar8 == 0) {
        return;
      }
      if ((0x40300000 < uVar2 + uVar8) && (uVar8 < 0x40340000)) {
LAB_ram_40014708:
        FUN_ram_400056b4(uVar8);
        return;
      }
      for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + uVar9) {
        uVar9 = uVar2 - uVar4;
        if (0x1000 < uVar9) {
          uVar9 = 0x1000;
        }
        iVar6 = 0x30067080;
        fence();
        custom0();
        do {
          custom0();
          iVar6 = iVar6 + 0x20;
        } while (iVar6 != 0x30068080);
        fence();
        custom0();
        uVar7 = FUN_ram_40006f52(iVar5,iVar3 + uVar4,0x30067080,uVar9);
        if (uVar7 != uVar9) goto LAB_ram_40014708;
        memcpy(uVar8 + uVar4,0x30067080,uVar9);
      }
      FUN_ram_4003f100();
      FUN_ram_4003f5f4(0);
      FUN_ram_4003f640(0);
      uVar2 = auStack_44[0];
      FUN_ram_4003ec0e(5);
      FUN_ram_4001337c(s_DFU_JA_pre_irq_off_ram_40094c68);
      mstatus = mstatus & 0xfffffff7;
      iVar5 = 0x1e8481;
      do {
        if ((_DAT_ram_18710014 & 0x40) != 0) break;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      FUN_ram_4001337c(s_DFU_J0_irq_off__drained_ram_40094c80);
      iVar5 = 0;
      do {
        *(undefined1 *)(iVar5 * 4 + 0x20801001) = 0;
        *(undefined1 *)(iVar5 * 4 + 0x20801000) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x60);
      FUN_ram_4001337c(s_DFU_J0b_clic_cleared_ram_40094c9c);
      _mtvec = &DAT_ram_40013403;
      FUN_ram_4001337c(&DAT_ram_40094cb4);
      memcpy(&SUB_ram_40300100,uVar8,uVar2);
      FUN_ram_4001337c(s_DFU_J2_copied_ram_40094cc4);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      FUN_ram_4001337c(s_DFU_J3_dcache_ram_40094cd4);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      fence.i();
      FUN_ram_4001337c(s_DFU_J4_entry_words_0x_ram_40094ce4);
      FUN_ram_4001339a(_SUB_ram_40300100);
      FUN_ram_4001337c(&DAT_ram_40094cfc);
      FUN_ram_4001339a(_DAT_ram_40300104);
      FUN_ram_4001337c(s_descriptor_<type:0x_02x,index:0x_ram_400947c4 + 0x30);
      (*(code *)&SUB_ram_40300100)(0x44,0);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    if (DAT_ram_30068480 != -0x10) {
      _DAT_ram_30068880 = 0;
      return;
    }
    if (DAT_ram_30068481 != '}') {
      _DAT_ram_30068880 = 0;
      return;
    }
  }
  if (((DAT_ram_30068482 == 'N') && (DAT_ram_30068483 == 'C')) && (DAT_ram_30068484 == 'p')) {
    auStack_44[0] = 0;
    iVar5 = FUN_ram_400132b8(&DAT_ram_30068485,uVar2 - 5,0x30068940,0x300,auStack_44);
    if (iVar5 == 0) {
      FUN_ram_40014254(0x70,0x30068940,auStack_44[0],_DAT_ram_30068884);
    }
  }
  _DAT_ram_30068880 = 0;
  return;
}


/* NanoCore 1.11, address 0x40014610.
 * REA evidence: ev_ee57d61dc5cd6c394d5a30d08d232bdfb22e2ec9758c812d436dac39b3ba7027
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40014610(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     int param_5,char *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iStack_48;
  uint auStack_44 [4];
  
  if (param_5 == 7) {
    if (*param_6 != -0x10) {
      _DAT_ram_30068880 = 0;
      return;
    }
    if (param_6[1] != '}') {
      _DAT_ram_30068880 = 0;
      return;
    }
    if ((((param_6[2] == 'D') && (param_6[3] == 'F')) && (param_6[4] == 'U')) &&
       ((param_6[5] == '\x01' && (param_6[6] == -9)))) {
      _DAT_ram_30068880 = 0;
      iStack_48 = 0;
      auStack_44[0] = 0;
      FUN_ram_4003f100();
      FUN_ram_4003f5f4(0);
      FUN_ram_4003f640(0);
      iVar4 = FUN_ram_40006c6e();
      if ((iVar4 != 1) && (iVar4 = FUN_ram_40006c3a(), iVar4 < 1)) {
        return;
      }
      iVar4 = FUN_ram_40006eee(&DAT_ram_40094c64);
      if (iVar4 == 0) {
        return;
      }
      iVar5 = FUN_ram_400138d0(iVar4,&iStack_48,auStack_44);
      uVar2 = auStack_44[0];
      iVar1 = iStack_48;
      if (iVar5 != 0) {
        return;
      }
      uVar6 = FUN_ram_40005656(auStack_44[0]);
      if (uVar6 == 0) {
        return;
      }
      if ((0x40300000 < uVar2 + uVar6) && (uVar6 < 0x40340000)) {
LAB_ram_40014708:
        FUN_ram_400056b4(uVar6);
        return;
      }
      for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + uVar8) {
        uVar8 = uVar2 - uVar3;
        if (0x1000 < uVar8) {
          uVar8 = 0x1000;
        }
        iVar5 = 0x30067080;
        fence();
        custom0();
        do {
          custom0();
          iVar5 = iVar5 + 0x20;
        } while (iVar5 != 0x30068080);
        fence();
        custom0();
        uVar7 = FUN_ram_40006f52(iVar4,iVar1 + uVar3,0x30067080,uVar8);
        if (uVar7 != uVar8) goto LAB_ram_40014708;
        memcpy(uVar6 + uVar3,0x30067080,uVar8);
      }
      FUN_ram_4003f100();
      FUN_ram_4003f5f4(0);
      FUN_ram_4003f640(0);
      uVar2 = auStack_44[0];
      FUN_ram_4003ec0e(5);
      FUN_ram_4001337c(s_DFU_JA_pre_irq_off_ram_40094c68);
      mstatus = mstatus & 0xfffffff7;
      iVar4 = 0x1e8481;
      do {
        if ((_DAT_ram_18710014 & 0x40) != 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_ram_4001337c(s_DFU_J0_irq_off__drained_ram_40094c80);
      iVar4 = 0;
      do {
        *(undefined1 *)(iVar4 * 4 + 0x20801001) = 0;
        *(undefined1 *)(iVar4 * 4 + 0x20801000) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x60);
      FUN_ram_4001337c(s_DFU_J0b_clic_cleared_ram_40094c9c);
      _mtvec = &DAT_ram_40013403;
      FUN_ram_4001337c(&DAT_ram_40094cb4);
      memcpy(&SUB_ram_40300100,uVar6,uVar2);
      FUN_ram_4001337c(s_DFU_J2_copied_ram_40094cc4);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      FUN_ram_4001337c(s_DFU_J3_dcache_ram_40094cd4);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      fence.i();
      FUN_ram_4001337c(s_DFU_J4_entry_words_0x_ram_40094ce4);
      FUN_ram_4001339a(_SUB_ram_40300100);
      FUN_ram_4001337c(&DAT_ram_40094cfc);
      FUN_ram_4001339a(_DAT_ram_40300104);
      FUN_ram_4001337c(s_descriptor_<type:0x_02x,index:0x_ram_400947c4 + 0x30);
      (*(code *)&SUB_ram_40300100)(0x44,0);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    if (*param_6 != -0x10) {
      _DAT_ram_30068880 = 0;
      return;
    }
    if (param_6[1] != '}') {
      _DAT_ram_30068880 = 0;
      return;
    }
  }
  if (((param_6[2] == 'N') && (param_6[3] == 'C')) && (param_6[4] == 'p')) {
    auStack_44[0] = 0;
    iVar4 = FUN_ram_400132b8(&DAT_ram_30068485,param_2 + -5,0x30068940,0x300,auStack_44);
    if (iVar4 == 0) {
      FUN_ram_40014254(0x70,0x30068940,auStack_44[0],_DAT_ram_30068884);
    }
  }
  _DAT_ram_30068880 = 0;
  return;
}


/* NanoCore 1.11, address 0x40014984.
 * REA evidence: ev_0e7967d934f63090a9f0e83fe20375ecc31f559a0053188de952e755da055917
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014984(void)

{
  FUN_ram_4002beb6(0xe39a5f);
  return;
}


/* NanoCore 1.11, address 0x40014990.
 * REA evidence: ev_d10a8896bc39c4f20822bbde65b5ce903d9c5695279d28192a45ea86d9048921
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40033014(int param_1)

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
LAB_ram_4003303a:
        acStack_8[uVar2] = '\x01';
      }
      else {
        uVar2 = 0;
        do {
          if (acStack_8[uVar2] == '\0') {
            *pbVar1 = (byte)uVar2;
            goto LAB_ram_4003303a;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
      }
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != (byte *)(param_1 + 0x1a));
  }
  return;
}


/* NanoCore 1.11, address 0x40014994.
 * REA evidence: ev_9e7b2d805f5725d3bab407e8ab37f7856bc9f0c5b651f6432d5608f3a8be9319
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014994(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4003221a();
  uVar1 = 0xffffffff;
  if (iVar2 == 0) {
    FUN_ram_4002e7e8();
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x400149b2.
 * REA evidence: ev_eb9780218611979ef87ac969952b9daaa07a049cff0f96e32f37e49c85290fc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400149b2(void)

{
  FUN_ram_4000deb6();
  return 0;
}


/* NanoCore 1.11, address 0x400149c2.
 * REA evidence: ev_0362de2f43d53d5876754ec7075515b9ead4a17e783cf12d3f3c8d1a15e209b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400149c2(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_400251c6();
  if (iVar1 == 0xff) {
    uVar3 = 5;
  }
  else {
    uVar2 = FUN_ram_4001e604(param_1);
    uVar3 = FUN_ram_40026898(iVar1,uVar2,1);
    if (0xc < uVar3) {
      uVar3 = 0xc;
    }
    uVar3 = uVar3 & 0xff;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40014a06.
 * REA evidence: ev_52d662ad0f38d6bf20d2e717d240395e45cd4ee5e892214df678244683b4fd9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014a06(undefined4 param_1,ushort *param_2,int param_3)

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
     (iVar3 = FUN_ram_40032bbe(*(undefined1 *)((int)param_2 + 0x33f)), iVar3 != 0)) {
    FUN_ram_40032bda(param_2);
  }
  iVar3 = FUN_ram_4002eb96(0x30069604,param_2,&DAT_ram_40094d30);
  if (iVar3 == 0) {
    FUN_ram_40018040(param_2 + 9,8);
    puVar6 = param_2 + 0xe;
    uVar2 = 0;
    do {
      uVar4 = FUN_ram_400251a8(uVar2);
      uVar9 = (uint)*(byte *)((int)puVar6 + 1);
      uVar1 = puVar6[1];
      iVar3 = FUN_ram_40032baa((char)*puVar6);
      uVar7 = uVar2 & 0xff;
      if ((char)*puVar6 == '\0') {
        uVar5 = 0;
        if ((uVar2 != 0) && (uVar7 != 5)) {
          if (uVar7 == 6) {
            uVar9 = 6;
            bVar10 = false;
            goto LAB_ram_40014ac8;
          }
          bVar10 = false;
          if (uVar7 != 7) goto LAB_ram_40014ae2;
          uVar5 = 2;
        }
        bVar10 = false;
        uVar9 = uVar5;
LAB_ram_40014ab0:
        if (uVar2 == 4) {
          uVar9 = FUN_ram_4006590c(uVar9);
        }
        else {
LAB_ram_40014ad0:
          if (uVar7 == 7) {
            uVar9 = FUN_ram_40066d02(uVar9);
          }
        }
      }
      else {
        bVar10 = (char)uVar1 != '\0';
        if (uVar2 == 6) {
LAB_ram_40014ac8:
          uVar9 = FUN_ram_40032a90(uVar9);
          goto LAB_ram_40014ad0;
        }
LAB_ram_40014ae2:
        if (uVar2 != 1) goto LAB_ram_40014ab0;
        if (0xb < uVar9) {
          uVar9 = 0;
        }
      }
      FUN_ram_4001e4b0(uVar4,bVar10);
      FUN_ram_4001f0b6(uVar4,uVar9);
      uVar5 = FUN_ram_400149c2(uVar4);
      memset(local_70,0,0x30);
      if (iVar3 == 0) {
        FUN_ram_40032bf8(uVar7,uVar9,local_70,0xc);
      }
      puVar8 = local_70;
      for (uVar9 = 0; ((uVar9 & 0xff) < uVar5 && (uVar9 != 0xc)); uVar9 = uVar9 + 1) {
        if (iVar3 == 0) {
          uVar11 = (ulonglong)*puVar8;
        }
        else {
          uVar11 = FUN_ram_40032cb2(puVar6,iVar3);
        }
        FUN_ram_4001e524(uVar11,uVar4,uVar9);
        puVar8 = puVar8 + 1;
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x32;
    } while (uVar2 != 8);
    FUN_ram_40017bda((char)param_2[0x19e]);
    FUN_ram_40017bbe(param_1);
    FUN_ram_40017c82(param_2 + 1);
    if ((param_3 == 0) || (iVar3 = FUN_ram_40032280(param_1), iVar3 == 0)) {
      DAT_ram_30069600 = 0;
      DAT_ram_30069948 = (char)param_1;
      DAT_ram_30069949 = 1;
      return 0;
    }
    DAT_ram_30069949 = 1;
    DAT_ram_30069948 = (char)param_1;
  }
  DAT_ram_30069600 = 1;
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40014be0.
 * REA evidence: ev_43ebe5e53afbd391caccd972c3eec8340042421269ac95d13596d555f087bc93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014be0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_350 [836];
  
  uVar1 = 0x3f;
  if (param_1 < 0x40) {
    uVar1 = param_1 & 0xff;
  }
  iVar2 = FUN_ram_4002e8de(uVar1,auStack_350,thunk_FUN_ram_40033014);
  if (iVar2 == 0) {
    uVar3 = FUN_ram_40014a06(uVar1,auStack_350,param_2);
  }
  else {
    DAT_ram_30069600 = 1;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40014c3e.
 * REA evidence: ev_7e00f3eee66d0039720baf843e1392a9bec28f1d61a28c12cfa1a71b6d2b940b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014c3e(int param_1)

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
  FUN_ram_40017d04(acStack_40,0x10);
  uVar3 = memset(param_1 + 2,0,0x10);
  if (acStack_40[0] != '\0') {
    FUN_ram_4000304c(uVar3,acStack_40,0x10);
  }
  local_48[0] = 0x3020100;
  local_48[1] = 0x7060504;
  FUN_ram_40022a6a(local_48,8,&uStack_4c);
  iVar6 = 0;
  do {
    *(undefined1 *)(param_1 + 0x12 + iVar6) = *(undefined1 *)((int)local_48 + iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 8);
  puVar1 = (undefined1 *)(param_1 + 0x1c);
  iVar6 = 0;
  do {
    uVar3 = FUN_ram_400251a8(iVar6);
    uVar2 = (&DAT_ram_40094d28)[iVar6];
    uVar4 = FUN_ram_400149c2();
    memset(puVar1,0,100);
    *puVar1 = uVar2;
    uVar2 = FUN_ram_4001e604(uVar3);
    puVar1[1] = uVar2;
    uVar2 = FUN_ram_4001e4c4(uVar3);
    puVar1[2] = uVar2;
    puVar1[3] = (char)uVar4;
    uVar8 = 0;
    puVar7 = puVar1 + -0x1c;
    while( true ) {
      if (uVar4 <= (uVar8 & 0xff)) break;
      puVar7[0x20] = (char)uVar8;
      uVar9 = FUN_ram_4001e5d8(uVar3,uVar8);
      *(undefined4 *)(puVar7 + 0x24) = uVar9;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 8;
    }
    iVar6 = iVar6 + 1;
    puVar1 = puVar1 + 100;
  } while (iVar6 != 8);
  uVar2 = FUN_ram_40017c38();
  *(undefined1 *)(param_1 + 0x33c) = uVar2;
  iVar6 = thunk_FUN_ram_4001da88();
  iVar5 = thunk_FUN_ram_4001da9a();
  uVar3 = FUN_ram_40032bc6(*(undefined1 *)(param_1 + 0x81));
  if (iVar6 < 0) {
    iVar6 = 0xff;
  }
  *(char *)(param_1 + 0x33d) = (char)iVar6;
  if (iVar5 < 0) {
    iVar5 = 0xff;
  }
  *(char *)(param_1 + 0x33e) = (char)iVar5;
  iVar6 = FUN_ram_40032bbe(uVar3);
  if (iVar6 == 0) {
    uVar3 = 0xff;
  }
  *(char *)(param_1 + 0x33f) = (char)uVar3;
  return;
}


/* NanoCore 1.11, address 0x40014da2.
 * REA evidence: ev_4439ec4d978f5774f4e303f1e791b0fb0aac7ee5a158033b5a9caa2ad04ddff2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014da2(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_350 [836];
  
  iVar1 = FUN_ram_40014994();
  if (iVar1 == 0) {
    FUN_ram_4000304c(auStack_350,param_2,0x340);
    FUN_ram_40033014(auStack_350);
    uVar2 = param_1 & 0xff;
    if (0x3f < param_1) {
      uVar2 = 0x3f;
    }
    uVar3 = FUN_ram_40014a06(uVar2,auStack_350,param_3);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40014dea.
 * REA evidence: ev_2c96f85eaaba9046c7a62520689c2b5b6bd717c806d7f6435160a90445f13636
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014dea(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40014994();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_40014be0(param_1,1);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40014e10.
 * REA evidence: ev_c49b27c353300440be9e5edb667aeff044c83a8dc656c2f4d2c8d755fd76b1a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014e10(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_11 [13];
  
  auStack_11[0] = 0;
  iVar1 = FUN_ram_40014994();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4003223a(auStack_11);
    if (iVar1 == 1) {
      auStack_11[0] = 0;
    }
    else if (iVar1 != 0) goto LAB_ram_40014e1e;
    uVar2 = FUN_ram_40014be0(auStack_11[0],0);
  }
  else {
LAB_ram_40014e1e:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40014e48.
 * REA evidence: ev_e79f6f2fe3053ddf55d831d742012b745b90377dc69799710b876a10908f0552
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40014e48(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (undefined1 *)0x0) && (uVar1 = 0xffffffff, DAT_ram_30069949 != '\0')) {
    *param_1 = DAT_ram_30069948;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40014e6a.
 * REA evidence: ev_be320d54ef30f28f2f221c33e658e6d5da05b472820f15f23189475f639aa521
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40014e6a(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_654 [772];
  undefined1 auStack_350 [840];
  
  iVar2 = FUN_ram_40014994();
  iVar1 = -1;
  if (iVar2 == 0) {
    FUN_ram_400150a0(auStack_350);
    FUN_ram_40014c3e(auStack_350);
    FUN_ram_40032d22(auStack_350,auStack_654);
    iVar1 = FUN_ram_4000d4d6(auStack_654);
    if (iVar1 == 0) {
      FUN_ram_4002eb6a(0x30069604,auStack_350);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40014eb8.
 * REA evidence: ev_b53a2d7f4b61911a2787846782d59c88bcc554e15c18af75eccd6c4bdbba0ab0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014eb8(void)

{
  FUN_ram_4002eb8e(0x30069604);
  return;
}


/* NanoCore 1.11, address 0x40014ec4.
 * REA evidence: ev_4fed4d1a0fa1de8981e8690224fe8f384c1532f7d05e2a807cd9fe8c08be6136
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014ec4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (1 < param_1 - 2U) {
    return;
  }
  FUN_ram_400251a8();
  iVar1 = FUN_ram_4001e4c4();
  if (iVar1 != 0) {
    if (param_1 == 2) {
      uVar2 = thunk_FUN_ram_4001dac2();
      if (-1 < (int)uVar2) {
        uVar4 = thunk_FUN_ram_4001da9a();
LAB_ram_40014f0c:
        uVar3 = thunk_FUN_ram_4001daac();
        if ((int)uVar2 < 0) {
          uVar2 = 0xff;
        }
        if ((int)uVar4 < 0) {
          uVar4 = 0xff;
        }
        if ((int)uVar3 < 0) {
          uVar3 = 0xff;
        }
        thunk_FUN_ram_4001db6a(uVar2 & 0xff,uVar4 & 0xff,uVar3 & 0xff);
        return;
      }
    }
    else {
      uVar4 = thunk_FUN_ram_4001daf4();
      if (-1 < (int)uVar4) {
        uVar2 = thunk_FUN_ram_4001da88();
        goto LAB_ram_40014f0c;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40014f4c.
 * REA evidence: ev_d15ce3140c2f61a1eebf0b9fde8fff30b41d6b8367be693fa2cda0b8812c3980
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40014e6a(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_654 [772];
  undefined1 auStack_350 [840];
  
  iVar2 = FUN_ram_40014994();
  iVar1 = -1;
  if (iVar2 == 0) {
    FUN_ram_400150a0(auStack_350);
    FUN_ram_40014c3e(auStack_350);
    FUN_ram_40032d22(auStack_350,auStack_654);
    iVar1 = FUN_ram_4000d4d6(auStack_654);
    if (iVar1 == 0) {
      FUN_ram_4002eb6a(0x30069604,auStack_350);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40014f50.
 * REA evidence: ev_289d914b5e5f692828f3059159a8b4ef50512b05c97a5c699f0b204d160b3972
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40014f50(undefined4 param_1)

{
  FUN_ram_40033064(param_1,7);
  return;
}


/* NanoCore 1.11, address 0x40014f56.
 * REA evidence: ev_ebe9a990e958019d8e77e0eb28873af7903cf45071f33a426c5b7980885d3eee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40014f56(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_a94;
  undefined1 auStack_a90 [832];
  undefined1 auStack_750 [832];
  undefined1 auStack_410 [1024];
  
  iVar2 = FUN_ram_40014994();
  if (iVar2 == 0) {
    if (DAT_ram_30069949 == '\0') {
      return -1;
    }
    if (DAT_ram_30069600 != '\0') {
      return -1;
    }
    uVar1 = param_1 & 0xff;
    if (0x3f < param_1) {
      uVar1 = 0x3f;
    }
    FUN_ram_400150a0();
    FUN_ram_40014c3e(auStack_a90);
    uStack_a94 = 0;
    FUN_ram_4000304c(auStack_750,auStack_a90,0x340);
    FUN_ram_40014f50(auStack_750);
    iVar2 = FUN_ram_400150e4(auStack_750,auStack_410,0x400,&uStack_a94);
    if ((iVar2 == 0) && (iVar2 = FUN_ram_400327fa(uVar1,auStack_410,uStack_a94), iVar2 == 0)) {
      iVar2 = FUN_ram_40032280(uVar1);
      return -(uint)(iVar2 != 0);
    }
  }
  return -1;
}


