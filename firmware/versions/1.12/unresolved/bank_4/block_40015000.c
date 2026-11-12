/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40015000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400150a2.
 * REA evidence: ev_2aa31ed83927cb48be79632566c24511e0424052eb11b26f0a5231b671282660
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400150a2(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_350 [836];
  
  iVar1 = FUN_ram_40014c98();
  if (iVar1 == 0) {
    FUN_ram_4000303c(auStack_350,param_2,0x340);
    FUN_ram_40033ee0(auStack_350);
    uVar2 = param_1 & 0xff;
    if (0x3f < param_1) {
      uVar2 = 0x3f;
    }
    uVar3 = FUN_ram_40014d0a(uVar2,auStack_350,param_3);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x400150ea.
 * REA evidence: ev_392e6f2066235f1f7c104501863786c0cc81bf7660000b397f098d5db29a9fe6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400150ea(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40014c98();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_40014ee0(param_1,1);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40015110.
 * REA evidence: ev_ad0a631585de6cdedaca6265c26cb6e1aef81fd49d53b2c6bc67c17768d38eb5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40015110(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_11 [13];
  
  auStack_11[0] = 0;
  iVar1 = FUN_ram_40014c98();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4003312a(auStack_11);
    if (iVar1 == 1) {
      auStack_11[0] = 0;
    }
    else if (iVar1 != 0) goto LAB_ram_4001511e;
    uVar2 = FUN_ram_40014ee0(auStack_11[0],0);
  }
  else {
LAB_ram_4001511e:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40015148.
 * REA evidence: ev_f4590215e59f1f8265792d28b6caeef6dcb92f629653a7935b2ea9e7a9192b34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40015148(undefined1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (undefined1 *)0x0) && (uVar1 = 0xffffffff, DAT_ram_300698f1 != '\0')) {
    *param_1 = DAT_ram_300698f0;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001516a.
 * REA evidence: ev_9eb77bd7035d8253d12bc7d48eb3467e836fd605b28c8767ec02e09708a1b2ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001516a(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_658 [776];
  undefined1 auStack_350 [840];
  
  iVar2 = FUN_ram_40014c98();
  iVar1 = -1;
  if (iVar2 == 0) {
    FUN_ram_40015468(auStack_350);
    FUN_ram_40014f3e(auStack_350);
    FUN_ram_40033c40(auStack_350,auStack_658);
    iVar1 = FUN_ram_4000d442(auStack_658);
    if (iVar1 == 0) {
      FUN_ram_4002fa3a(0x300695ac,auStack_350);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x400151b8.
 * REA evidence: ev_f9b9d0b8a3cfac3e6d9a1f777a5b71d86b568fb777a4fd7e328e19350dad1abf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400151b8(void)

{
  FUN_ram_4002fa5e(0x300695ac);
  return;
}


/* NanoCore 1.12, address 0x400151c4.
 * REA evidence: ev_a9f250f48bacacc4a393c51dceed155dd1b9fd6fc1d7c271dab6af6a6c54509f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400151c4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (1 < param_1 - 2U) {
    return;
  }
  FUN_ram_40025c04();
  iVar1 = FUN_ram_4001e902();
  if (iVar1 != 0) {
    if (param_1 == 2) {
      uVar2 = thunk_FUN_ram_4001def6();
      if (-1 < (int)uVar2) {
        uVar4 = thunk_FUN_ram_4001dece();
LAB_ram_4001520c:
        uVar3 = thunk_FUN_ram_4001dee0();
        if ((int)uVar2 < 0) {
          uVar2 = 0xff;
        }
        if ((int)uVar4 < 0) {
          uVar4 = 0xff;
        }
        if ((int)uVar3 < 0) {
          uVar3 = 0xff;
        }
        thunk_FUN_ram_4001df9e(uVar2 & 0xff,uVar4 & 0xff,uVar3 & 0xff);
        return;
      }
    }
    else {
      uVar4 = thunk_FUN_ram_4001df28();
      if (-1 < (int)uVar4) {
        uVar2 = thunk_FUN_ram_4001debc();
        goto LAB_ram_4001520c;
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4001524c.
 * REA evidence: ev_e2a3edf6c9fa469ab3f5a5611f574cf1459b42849285a1851b71b30925a2ff41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_4001516a(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_658 [776];
  undefined1 auStack_350 [840];
  
  iVar2 = FUN_ram_40014c98();
  iVar1 = -1;
  if (iVar2 == 0) {
    FUN_ram_40015468(auStack_350);
    FUN_ram_40014f3e(auStack_350);
    FUN_ram_40033c40(auStack_350,auStack_658);
    iVar1 = FUN_ram_4000d442(auStack_658);
    if (iVar1 == 0) {
      FUN_ram_4002fa3a(0x300695ac,auStack_350);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40015250.
 * REA evidence: ev_5978fb71e1bf65438d57c211f0349e451d6b9cad00dc02ac608691eeedc8f225
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015250(undefined4 param_1)

{
  FUN_ram_40033f30(param_1,7);
  return;
}


/* NanoCore 1.12, address 0x40015256.
 * REA evidence: ev_b38c6b8275a84574302988ef93631c2a8506a0a4b27278235e28d18b3a745c81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40015256(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_a94;
  undefined1 auStack_a90 [832];
  undefined1 auStack_750 [832];
  undefined1 auStack_410 [1024];
  
  iVar2 = FUN_ram_40014c98();
  if (iVar2 == 0) {
    if (DAT_ram_300698f1 == '\0') {
      return -1;
    }
    if (DAT_ram_300695a8 != '\0') {
      return -1;
    }
    uVar1 = param_1 & 0xff;
    if (0x3f < param_1) {
      uVar1 = 0x3f;
    }
    FUN_ram_40015468();
    FUN_ram_40014f3e(auStack_a90);
    uStack_a94 = 0;
    FUN_ram_4000303c(auStack_750,auStack_a90,0x340);
    FUN_ram_40015250(auStack_750);
    iVar2 = FUN_ram_400154ac(auStack_750,auStack_410,0x400,&uStack_a94);
    if ((iVar2 == 0) && (iVar2 = FUN_ram_400336ea(uVar1,auStack_410,uStack_a94), iVar2 == 0)) {
      iVar2 = FUN_ram_40033170(uVar1);
      return -(uint)(iVar2 != 0);
    }
  }
  return -1;
}


/* NanoCore 1.12, address 0x40015322.
 * REA evidence: ev_e2e1f092a26867cdff71d9cf06805daefd6bd584deb9d3f412d969fd53427d7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40015322(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40091d2e();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_40015256(param_1);
    FUN_ram_40091df4();
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4001534a.
 * REA evidence: ev_3acd3da65e7d837e904cff34d479705748fb3421772546b0e625094a775a617f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001534a(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = 8;
    if ((((param_1 != 2) && (uVar1 = 3, param_1 != 4)) && (uVar1 = 5, param_1 < 5)) &&
       (uVar1 = 4, param_1 == 1)) {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40015378.
 * REA evidence: ev_5c5485545648d9a6dc3aa599277614693c1da313040017d38d31bd94bd910073
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40015378(undefined1 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                int *param_6)

{
  int iVar1;
  
  iVar1 = *param_6;
  if ((param_3 + 2U & 0xff) + iVar1 <= param_5) {
    *param_6 = iVar1 + 1;
    *(undefined1 *)(param_4 + iVar1) = param_1;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(char *)(param_4 + iVar1) = (char)param_3;
    FUN_ram_4000303c(*param_6 + param_4);
    *param_6 = *param_6 + param_3;
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x400153ce.
 * REA evidence: ev_20470f02efee9f2ad1b756198e0abcf556a39c22da3bf48fb7f51289fa078601
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400153ce(undefined2 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  uint uVar7;
  
  if ((param_1 == (undefined2 *)0x0) || ((undefined *)*param_1 != &vstvec)) {
    return true;
  }
  uVar2 = FUN_ram_4001534a(*(undefined1 *)((int)param_1 + 1));
  bVar6 = false;
  if (*(byte *)((int)param_1 + 3) == uVar2) {
    pbVar5 = (byte *)(param_1 + 2);
    uVar4 = 0;
    for (uVar3 = 0; uVar2 != uVar3; uVar3 = uVar3 + 1 & 0xff) {
      uVar7 = (uint)*pbVar5;
      pbVar1 = pbVar5 + 4;
      if ((((uVar2 <= uVar7) || ((uVar4 >> (uVar7 & 0x1f) & 1) != 0)) ||
          ((float)*(undefined8 *)pbVar1 < 0.0)) ||
         (pbVar5 = pbVar5 + 8, DAT_ram_4009672c < (float)*(undefined8 *)pbVar1)) {
        return false;
      }
      uVar4 = uVar4 | 1 << (uVar7 & 0x1f) & 0xffffU;
    }
    bVar6 = (1 << (uVar2 & 0x1f)) - 1U == uVar4;
  }
  return bVar6;
}


/* NanoCore 1.12, address 0x40015468.
 * REA evidence: ev_ab1f058a01d15e1f48afff7507ccbaaf20aab3fc549d051f97421f332933715e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40015468(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar1 = (undefined2 *)memset(param_1,0,0x340);
  puVar3 = puVar1 + 0xe;
  *puVar1 = 7;
  iVar2 = 0;
  do {
    *(char *)((int)puVar1 + iVar2 + 0x12) = (char)iVar2;
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x32;
  } while (iVar2 != 8);
  *(undefined4 *)(puVar1 + 0x19e) = 0xffffff64;
  return;
}


/* NanoCore 1.12, address 0x400154ac.
 * REA evidence: ev_71521fa0fb54f8b1aa2065b73b6d60fcb0a310d965c8bb1626ce11a76f59e684
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400154ac(undefined2 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  char cVar7;
  undefined2 auStack_8c [2];
  uint uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  char cStack_80;
  
  uStack_88 = 0;
  puVar6 = param_1 + 0xe;
  do {
    iVar2 = FUN_ram_400153ce(puVar6);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    puVar6 = puVar6 + 0x32;
  } while (puVar6 != param_1 + 0x19e);
  auStack_8c[0] = *param_1;
  iVar2 = FUN_ram_40015378(1,auStack_8c,2,param_2,param_3,&uStack_88);
  if (((iVar2 == 0) &&
      (iVar2 = FUN_ram_40015378(2,param_1 + 1,0x10,param_2,param_3,&uStack_88), iVar2 == 0)) &&
     (iVar2 = FUN_ram_40015378(3,param_1 + 9,8,param_2,param_3,&uStack_88), iVar2 == 0)) {
    puVar6 = param_1 + 0x12;
    iVar2 = 0;
    do {
      uStack_83 = *(undefined1 *)(puVar6 + -4);
      cVar1 = *(char *)((int)puVar6 + -5);
      uStack_84 = (undefined1)iVar2;
      uStack_82 = *(undefined1 *)((int)puVar6 + -7);
      uStack_81 = *(undefined1 *)(puVar6 + -3);
      puVar3 = &uStack_84;
      puVar5 = puVar6;
      cStack_80 = cVar1;
      for (cVar7 = '\0'; cVar1 != cVar7; cVar7 = cVar7 + '\x01') {
        puVar3[5] = *(undefined1 *)(puVar5 + -2);
        FUN_ram_4000303c(puVar3 + 6,puVar5,4);
        puVar5 = puVar5 + 4;
        puVar3 = puVar3 + 5;
      }
      iVar4 = FUN_ram_40015378(0x10,&uStack_84,(cVar1 + '\x01') * '\x05',param_2,param_3,&uStack_88)
      ;
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + 0x32;
    } while (iVar2 != 8);
    iVar2 = FUN_ram_40015378(0x22,param_1 + 0x19e,1,param_2,param_3,&uStack_88);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_ram_40015378(0x20,(int)param_1 + 0x33d,1,param_2,param_3,&uStack_88),
        iVar2 == 0)) &&
       ((iVar2 = FUN_ram_40015378(0x21,param_1 + 0x19f,1,param_2,param_3,&uStack_88), iVar2 == 0 &&
        ((iVar2 = FUN_ram_40015378(0x24,(int)param_1 + 0x33f,1,param_2,param_3,&uStack_88),
         iVar2 == 0 && (uStack_88 < 0x401)))))) {
      *param_4 = uStack_88;
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40015656.
 * REA evidence: ev_267645f38ec10be88ec7016a9f805a5771a5adaaeb59d0252cfa0911c25ad744
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40015656(undefined2 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  
  FUN_ram_40015468();
  uVar9 = 0;
LAB_ram_40015696:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar6 = uVar9 + 2;
          if (param_3 < uVar6) {
            return 0;
          }
          bVar7 = *(byte *)(param_2 + uVar9);
          uVar10 = (uint)*(byte *)(uVar9 + param_2 + 1);
          uVar9 = uVar10 + uVar6;
          if (param_3 < uVar9) {
            return 0xffffffff;
          }
          iVar4 = param_2 + uVar6;
          if (bVar7 != 0x20) break;
          if (uVar10 == 1) {
            *(undefined1 *)((int)param_1 + 0x33d) = *(undefined1 *)(param_2 + uVar6);
          }
        }
        if (bVar7 < 0x21) break;
        if (bVar7 == 0x22) {
          if (uVar10 == 1) {
            bVar7 = *(byte *)(param_2 + uVar6);
            if (100 < bVar7) {
              bVar7 = 100;
            }
            *(byte *)(param_1 + 0x19e) = bVar7;
          }
        }
        else if (bVar7 == 0x24) {
          if (uVar10 == 1) {
            *(undefined1 *)((int)param_1 + 0x33f) = *(undefined1 *)(param_2 + uVar6);
          }
        }
        else if ((bVar7 == 0x21) && (uVar10 == 1)) {
          *(undefined1 *)(param_1 + 0x19f) = *(undefined1 *)(param_2 + uVar6);
        }
      }
      if (bVar7 != 3) break;
      if (uVar10 == 8) {
        uVar5 = 8;
        puVar8 = param_1 + 9;
LAB_ram_400156fe:
        FUN_ram_4000303c(puVar8,iVar4,uVar5);
      }
    }
    if (bVar7 < 4) {
      if (bVar7 == 1) {
        if (uVar10 == 2) {
          *param_1 = CONCAT11(*(undefined1 *)(iVar4 + 1),*(undefined1 *)(param_2 + uVar6));
        }
      }
      else if ((bVar7 == 2) && (uVar10 == 0x10)) {
        uVar5 = 0x10;
        puVar8 = param_1 + 1;
        goto LAB_ram_400156fe;
      }
      goto LAB_ram_40015696;
    }
    if (((bVar7 == 0x10) && (4 < uVar10)) && (uVar6 = (uint)*(byte *)(param_2 + uVar6), uVar6 < 8))
    {
      *(undefined1 *)(param_1 + uVar6 * 0x32 + 0xe) = *(undefined1 *)(iVar4 + 1);
      *(undefined1 *)((int)param_1 + uVar6 * 100 + 0x1d) = *(undefined1 *)(iVar4 + 2);
      *(undefined1 *)(param_1 + uVar6 * 0x32 + 0xf) = *(undefined1 *)(iVar4 + 3);
      uVar1 = (uint)*(byte *)(iVar4 + 4);
      if ((*(uint *)(param_1 + uVar6 * 0x32 + 0xe) & 0xffff) == 0x205) {
        uVar2 = FUN_ram_4001534a(*(undefined1 *)(iVar4 + 2));
        if (uVar2 != uVar1) {
          return 0xffffffff;
        }
        if (uVar10 != (uVar1 + 1) * 5) {
          return 0xffffffff;
        }
      }
      if (0xc < uVar1) {
        uVar1 = 0xc;
      }
      puVar8 = param_1 + uVar6 * 0x32 + 0x12;
      iVar4 = iVar4 + 6;
      *(char *)((int)param_1 + uVar6 * 100 + 0x1f) = (char)uVar1;
      uVar2 = 0;
      while (((uVar2 & 0xff) < uVar1 && ((uVar2 + 2) * 5 <= uVar10))) {
        *(undefined1 *)(puVar8 + -2) = *(undefined1 *)(iVar4 + -1);
        iVar3 = FUN_ram_4000303c(puVar8,iVar4,4);
        puVar8 = (undefined2 *)(iVar3 + 8);
        iVar4 = iVar4 + 5;
        uVar2 = uVar2 + 1;
      }
      iVar4 = FUN_ram_400153ce(param_1 + uVar6 * 0x32 + 0xe);
      if (iVar4 == 0) {
        return 0xffffffff;
      }
    }
  } while( true );
}


/* NanoCore 1.12, address 0x40015878.
 * REA evidence: ev_28563e2322961f30f3cade4466ddee2009e273e4382a2ad6ed772eaa97d96479
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015878(void)

{
  _DAT_ram_300698fc = _DAT_ram_300698fc * 0x19660d + 0x3c6ef35f;
  return;
}


/* NanoCore 1.12, address 0x4001589a.
 * REA evidence: ev_53087625ad493de8f204bc4cbdbdc871f0adafece8715dcd7031fab15288f4c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001589a(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = _DAT_ram_3006992c;
  iVar1 = _DAT_ram_30069928;
  iVar4 = 0;
  do {
    uVar3 = *(uint *)(iVar2 + iVar4 * 4);
    *(ushort *)(iVar1 + iVar4 * 2) =
         (ushort)(((uVar3 & 0xffffff) >> 0x13) << 0xb) | (ushort)(((uVar3 & 0xffff) >> 10) << 5) |
         (ushort)((uVar3 << 0x18) >> 0x1b);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x12c00);
  return;
}


/* NanoCore 1.12, address 0x400158d4.
 * REA evidence: ev_757fd26736ff9ca38821999e91726b62b3c9240fbbab4000b5154fd7faea4679
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400158d4(uint param_1,uint param_2,undefined4 param_3)

{
  if ((param_1 < 0x140) && (param_2 < 0xf0)) {
    *(undefined4 *)(_DAT_ram_3006992c + (param_1 + param_2 * 0x140) * 4) = param_3;
  }
  return;
}


/* NanoCore 1.12, address 0x400158fa.
 * REA evidence: ev_e0f8c8d4b86c58e2153f24ad621fd991cff2fa3c3d6bb575d29ed6c42f0c5e34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400159f0) */
/* WARNING: Removing unreachable block (ram,0x400159e6) */
/* WARNING: Removing unreachable block (ram,0x400159f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400158fa(float param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = _DAT_ram_3006992c;
  iVar8 = 0;
  do {
    *(undefined4 *)(iVar2 + iVar8 * 4) = 0xff101015;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x12c00);
  iVar2 = 0;
  do {
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      FUN_ram_400158d4(iVar2,iVar8,0xff1a1a25);
      iVar8 = iVar1;
    } while (iVar1 != 0xf0);
    iVar2 = iVar2 + 0x14;
  } while (iVar2 != 0x140);
  iVar2 = 0;
  do {
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      FUN_ram_400158d4(iVar8,iVar2,0xff1a1a25);
      iVar8 = iVar1;
    } while (iVar1 != 0x140);
    iVar2 = iVar2 + 0x14;
  } while (iVar2 != 0xf0);
  param_1 = param_1 * DAT_ram_40099f24;
  iVar8 = (int)param_1 + -10;
  iVar2 = 0;
  do {
    FUN_ram_400158d4(iVar2,iVar8,0xff00ff00);
    iVar1 = iVar2 + 1;
    FUN_ram_400158d4(iVar2,(int)param_1 + -9,0xff00ff00);
    iVar2 = iVar1;
  } while (iVar1 != 0x140);
  iVar2 = 6;
  do {
    uVar3 = FUN_ram_40015878();
    uVar4 = FUN_ram_40015878();
    iVar1 = 0;
    uVar5 = FUN_ram_40015878();
    uVar6 = FUN_ram_40015878();
    do {
      iVar9 = 0;
      do {
        iVar7 = iVar9 + uVar3 % 0x140;
        iVar9 = iVar9 + 1;
        FUN_ram_400158d4(iVar7,(iVar8 - uVar4 % 0xf) + iVar1,0xff00ff00);
      } while (iVar9 <= (int)(uVar5 % 0x1e));
      iVar1 = iVar1 + 1;
    } while (iVar1 <= (int)(uVar6 & 3));
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* NanoCore 1.12, address 0x40015a4e.
 * REA evidence: ev_b84fadde3cc8479e583617c13c3dfd7cd600dafec92fe384940b1cb6daca46d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015a4e(void)

{
  if (_DAT_ram_30069904 != 0) {
    FUN_ram_4004c712();
    _DAT_ram_30069904 = 0;
  }
  if (_DAT_ram_30069908 != 0) {
    FUN_ram_40048d5c();
    _DAT_ram_30069908 = 0;
    _DAT_ram_3006990c = 0;
  }
  if (_DAT_ram_30069928 != 0) {
    if (DAT_ram_30069930 == '\0') {
      FUN_ram_400055d4();
    }
    else {
      FUN_ram_4002d1d0();
    }
    _DAT_ram_30069928 = 0;
    DAT_ram_30069930 = '\0';
  }
  if (_DAT_ram_3006992c != 0) {
    if (DAT_ram_30069931 == '\0') {
      FUN_ram_400055d4();
    }
    else {
      FUN_ram_4002d1d0();
    }
    _DAT_ram_3006992c = 0;
    DAT_ram_30069931 = '\0';
  }
  return;
}


/* NanoCore 1.12, address 0x40015b0e.
 * REA evidence: ev_cbb5b64cfa2f2504936f1166b7006dd4015a8b93e8a01bc9f778ba73e025ee5f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40015e68) */
/* WARNING: Removing unreachable block (ram,0x40015e7e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015b0e(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  code *UNRECOVERED_JUMPTABLE;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_00000100;
  float fVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  
  if (((_DAT_ram_30069928 != 0) && (_DAT_ram_3006992c != 0)) && (_DAT_ram_3006990c != 0)) {
    iVar15 = FUN_ram_40004346();
    lVar5 = (ulonglong)(uint)(iVar15 - _DAT_ram_300698f4) * 1000;
    uVar16 = FUN_ram_40003bf8((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),1000,0);
    fVar2 = DAT_ram_4009673c;
    iVar14 = _DAT_ram_3006992c;
    if (uVar16 < 5000) {
      if (uVar16 < 1000) {
        fVar2 = (float)(int)uVar16 / DAT_ram_40099f28;
        if (DAT_ram_4009672c < (float)(int)uVar16 / DAT_ram_40099f28) {
          fVar2 = DAT_ram_4009672c;
        }
        _DAT_ram_300698f8 = iVar15;
        FUN_ram_400158fa(fVar2);
      }
      else {
        fVar34 = 0.0;
        fVar28 = (float)(int)(uVar16 - 1000) / DAT_ram_40099f28;
        if (uVar16 - 1000 < 3000) {
          fVar34 = (float)(uint)(iVar15 - _DAT_ram_300698f8) / DAT_ram_40099f28;
        }
        if (DAT_ram_4009673c < fVar28) {
          fVar28 = DAT_ram_4009673c;
        }
        iVar18 = 0;
        _DAT_ram_300698f8 = iVar15;
        do {
          *(undefined4 *)(iVar14 + iVar18 * 4) = 0xff0b1021;
          fVar33 = DAT_ram_40099f44;
          fVar8 = DAT_ram_40099f38;
          fVar3 = DAT_ram_40099f34;
          fVar32 = DAT_ram_40099f30;
          iVar18 = iVar18 + 1;
        } while (iVar18 != 0x12c00);
        fVar4 = fVar28 * DAT_ram_40099f30;
        iVar14 = 0;
        fVar11 = in_register_00000100;
        do {
          fVar31 = (float)iVar14;
          iVar15 = 0;
          fVar29 = (float)FUN_ram_400009d2(fVar31 * fVar3 + fVar28 * fVar2);
          fVar29 = fVar29 * fVar8 + DAT_ram_40099f3c;
          fVar30 = (float)FUN_ram_400009d2((fVar31 * DAT_ram_40099f40 - in_register_00000100) +
                                           (float)PTR_entry_ram_40096740);
          fVar30 = fVar30 * fVar33 + DAT_ram_40099f48;
          fVar31 = (float)FUN_ram_400009d2(fVar31 * DAT_ram_40099f4c + fVar4 + fVar32);
          fVar7 = DAT_ram_40099f58;
          fVar31 = fVar31 * DAT_ram_40099f50 + DAT_ram_40099f54;
          fVar35 = DAT_ram_40096764;
          do {
            fVar1 = (float)iVar15;
            if (fVar1 < fVar31) {
              if (fVar30 <= fVar1) {
                uVar25 = 0xffffffff;
                if (fVar30 + fVar35 <= fVar1) {
                  if (fVar30 + fVar7 <= fVar1) {
                    uVar25 = 0xff0059b3;
                  }
                  else {
                    uVar25 = 0xff0099cc;
                  }
                }
                goto LAB_ram_40015d80;
              }
              if (fVar29 <= fVar1) {
                uVar25 = 0xffffffff;
                if ((fVar29 + in_register_00000100 <= fVar1) &&
                   (uVar25 = 0xff004080, fVar1 < fVar29 + fVar7)) goto LAB_ram_40015dce;
                goto LAB_ram_40015d80;
              }
            }
            else {
              uVar25 = 0xffffffff;
              if (fVar31 + fVar35 <= fVar1) {
                if (fVar31 + fVar7 <= fVar1) {
LAB_ram_40015dce:
                  uVar25 = 0xff0073e6;
                }
                else {
                  uVar25 = 0xff4db8ff;
                }
              }
LAB_ram_40015d80:
              iVar18 = 0;
              do {
                iVar23 = 0;
                do {
                  FUN_ram_400158d4(iVar14 + iVar23,iVar15 + iVar18,uVar25);
                  iVar23 = iVar23 + 1;
                } while (iVar23 != 4);
                iVar18 = iVar18 + 1;
                fVar35 = DAT_ram_40096764;
              } while (iVar18 != 4);
            }
            fVar10 = DAT_ram_40099f60;
            fVar9 = DAT_ram_40099f5c;
            fVar1 = DAT_ram_4009675c;
            iVar15 = iVar15 + 4;
          } while (iVar15 != 0xf0);
          iVar14 = iVar14 + 4;
        } while (iVar14 != 0x140);
        puVar13 = &DAT_ram_300698f4;
        do {
          fVar32 = -(fVar34 * (float)*(undefined8 *)(puVar13 + 0x48)) +
                   (float)*(undefined8 *)(puVar13 + 0x44);
          *(ulonglong *)(puVar13 + 0x44) = (ulonglong)(uint)fVar32;
          if (fVar32 < fVar9) {
            uVar16 = FUN_ram_40015878();
            *(ulonglong *)(puVar13 + 0x44) = (ulonglong)(uint)(float)(uVar16 % 0x32 + 0xf0);
            uVar16 = FUN_ram_40015878();
            *(ulonglong *)(puVar13 + 0x40) = (ulonglong)(uint)(float)(uVar16 % 0x140);
          }
          iVar14 = -3;
          fVar32 = (float)FUN_ram_400009d2(fVar28 * fVar2 + (float)*(undefined8 *)(puVar13 + 0x4c));
          uVar36 = *(undefined8 *)(puVar13 + 0x44);
          iVar15 = (int)(fVar32 * fVar10 + (float)*(undefined8 *)(puVar13 + 0x40));
          do {
            iVar18 = -3;
            do {
              if (iVar14 * iVar14 + iVar18 * iVar18 < 10) {
                FUN_ram_400158d4(iVar18 + iVar15,iVar14 + (int)(float)uVar36,0xffaaddff);
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 != 4);
            iVar14 = iVar14 + 1;
          } while (iVar14 != 1);
          iVar14 = -2;
          do {
            iVar18 = 1;
            do {
              if (((int)(fVar28 * fVar33) + iVar18 & 3U) == 0) {
                fVar32 = (float)FUN_ram_400009d2((float)iVar18 * fVar1 +
                                                 fVar28 * fVar10 +
                                                 (float)*(undefined8 *)(puVar13 + 0x4c));
                FUN_ram_400158d4((int)(fVar32 + fVar32) + iVar14 + iVar15,
                                 (int)(float)uVar36 + iVar18,0xff77bbff);
              }
              fVar29 = DAT_ram_40099f6c;
              fVar31 = DAT_ram_40099f68;
              fVar32 = DAT_ram_40099f64;
              iVar18 = iVar18 + 1;
            } while (iVar18 != 8);
            iVar14 = iVar14 + 2;
          } while (iVar14 != 4);
          puVar13 = puVar13 + 0x10;
        } while (puVar13 != (undefined1 *)0x300699b4);
        iVar14 = 0;
        do {
          fVar34 = (float)iVar14;
          iVar15 = -1;
          fVar33 = (float)FUN_ram_400009d2((fVar34 / fVar32) * fVar31);
          fVar30 = (float)FUN_ram_400009d2(fVar34 * fVar29 - fVar28 * fVar8);
          fVar34 = (float)FUN_ram_40000712(fVar34 * fVar3 + fVar4);
          do {
            iVar18 = iVar15 + (int)(fVar33 * fVar30 * fVar34 * fVar11 + fVar11);
            FUN_ram_400158d4(iVar14,iVar18,0xff00ffcc);
            iVar15 = iVar15 + 1;
            FUN_ram_400158d4(iVar14 + 1,iVar18,0xff00ffcc);
            fVar7 = DAT_ram_40096760;
          } while (iVar15 != 2);
          iVar14 = iVar14 + 2;
        } while (iVar14 != 0x140);
        if (DAT_ram_40096760 <= fVar28) {
          FUN_ram_400009d2((fVar28 - DAT_ram_40096760) * fVar2);
        }
        else {
          FUN_ram_40000d44(DAT_ram_4009672c - fVar28 / DAT_ram_40096760,fVar2);
        }
        fVar34 = DAT_ram_40099f7c;
        fVar2 = DAT_ram_4009675c;
        bVar6 = false;
        while( true ) {
          iVar15 = 0x16;
          iVar14 = 0;
          do {
            if (fVar7 <= fVar28) {
              FUN_ram_400009d2((fVar28 - fVar7) * fVar34 - (float)iVar14 * fVar2);
            }
            puVar12 = (&PTR_DAT_ram_40099e1c_ram_40099fa0)[(&DAT_ram_40099fb8)[iVar14]];
            iVar23 = iVar15 + 0xc;
            iVar18 = 0;
            do {
              iVar19 = 0;
              iVar17 = iVar23;
              do {
                if (puVar12[iVar19 + iVar18 * 6] == '#') {
                  iVar27 = iVar17;
                  if (!bVar6) {
                    iVar27 = iVar17 + 5;
                  }
                  iVar20 = 0;
                  do {
                    iVar22 = 0;
                    do {
                      FUN_ram_400158d4(iVar22 + iVar27);
                      iVar22 = iVar22 + 1;
                    } while (iVar22 != 5);
                    iVar20 = iVar20 + 1;
                  } while (iVar20 != 5);
                }
                iVar27 = _DAT_ram_3006992c;
                iVar19 = iVar19 + 1;
                iVar17 = iVar17 + 5;
              } while (iVar19 != 6);
              iVar18 = iVar18 + 1;
              iVar23 = iVar23 + -2;
            } while (iVar18 != 7);
            iVar15 = iVar15 + 0x23;
            iVar14 = iVar14 + 1;
          } while (iVar15 != 0x12e);
          if (bVar6) break;
          bVar6 = true;
        }
        iVar14 = 0;
        uVar25 = 0xff111111;
        while( true ) {
          iVar15 = 0;
          do {
            *(undefined4 *)(iVar27 + iVar14 * 0x500 + iVar15 * 4) = uVar25;
            fVar34 = DAT_ram_40099f2c;
            fVar2 = DAT_ram_4009675c;
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0x140);
          iVar14 = iVar14 + 1;
          if (iVar14 == 0xf) break;
          uVar25 = 0xff111111;
          if (iVar14 == 0xe) {
            uVar25 = 0xff333333;
          }
        }
        uVar25 = 0xffff0000;
        if (fVar28 <= DAT_ram_40099f84) {
          uVar25 = 0xff330000;
        }
        uVar26 = 0xffff0000;
        if (fVar28 <= DAT_ram_4009675c) {
          uVar26 = 0xff330000;
        }
        iVar14 = 0;
        do {
          uVar24 = uVar26;
          if (((iVar14 != 0) && (uVar24 = uVar25, iVar14 != 1)) &&
             (uVar24 = 0xff00ff00, fVar28 < fVar34)) {
            uVar24 = 0xff330000;
          }
          iVar15 = -2;
          do {
            iVar18 = -2;
            do {
              if (iVar15 * iVar15 + iVar18 * iVar18 < 5) {
                FUN_ram_400158d4(iVar14 * 0xe + 0x113 + iVar18,iVar15 + 7,uVar24);
              }
              fVar32 = _DAT_ram_40099f98;
              iVar23 = _DAT_ram_3006992c;
              iVar18 = iVar18 + 1;
            } while (iVar18 != 3);
            iVar15 = iVar15 + 1;
          } while (iVar15 != 3);
          iVar14 = iVar14 + 1;
        } while (iVar14 != 3);
        if (DAT_ram_40099f88 <= fVar28) {
          if (fVar28 < DAT_ram_40099f90) {
            iVar14 = 0;
            fVar2 = (DAT_ram_40099f90 - fVar28) / DAT_ram_40099f94;
            do {
              uVar16 = *(uint *)(iVar23 + iVar14 * 4);
              fVar28 = (float)((uVar16 & 0xffffff) >> 0x10);
              fVar34 = (float)((uVar16 & 0xffff) >> 8);
              fVar28 = fVar2 * (fVar32 - fVar28) + fVar28;
              fVar34 = fVar2 * (fVar32 - fVar34) + fVar34;
              fVar3 = fVar2 * (fVar32 - (float)(uVar16 & 0xff)) + (float)(uVar16 & 0xff);
              *(uint *)(iVar23 + iVar14 * 4) =
                   uVar16 & 0xff000000 | (uint)(-1 < (int)fVar3) * (int)fVar3 & 0xff |
                   ((uint)(-1 < (int)fVar28) * (int)fVar28 & 0xff) << 0x10 |
                   ((uint)(-1 < (int)fVar34) * (int)fVar34 & 0xff) << 8;
              iVar14 = iVar14 + 1;
            } while (iVar14 != 0x12c00);
          }
          fVar2 = DAT_ram_40099f9c;
          iVar14 = 0;
          do {
            iVar15 = 0;
            puVar21 = (uint *)(iVar23 + iVar14 * 4);
            do {
              uVar16 = *puVar21;
              iVar15 = iVar15 + 1;
              fVar28 = (float)((uVar16 & 0xffffff) >> 0x10) * fVar2;
              fVar34 = (float)(uVar16 & 0xff) * fVar2;
              fVar32 = (float)((uVar16 & 0xffff) >> 8) * fVar2;
              *puVar21 = ((uint)(-1 < (int)fVar28) * (int)fVar28 & 0xff) << 0x10 |
                         (uint)(-1 < (int)fVar34) * (int)fVar34 & 0xff | uVar16 & 0xff000000 |
                         ((uint)(-1 < (int)fVar32) * (int)fVar32 & 0xff) << 8;
              puVar21 = puVar21 + 1;
            } while (iVar15 != 0x140);
            iVar14 = iVar14 + 0x280;
          } while (iVar14 != 0x12c00);
        }
        else {
          iVar14 = 0;
          fVar28 = (fVar28 / DAT_ram_40099f88) * DAT_ram_40099f8c;
          do {
            uVar16 = (int)(iVar14 - 0x78U) >> 0x1f;
            uVar25 = 0xffffffff;
            if ((int)(fVar28 * fVar2) <= (int)((iVar14 - 0x78U ^ uVar16) - uVar16)) {
              uVar25 = 0xff000000;
            }
            iVar15 = 0;
            do {
              *(undefined4 *)(iVar23 + iVar14 * 0x500 + iVar15 * 4) = uVar25;
              iVar15 = iVar15 + 1;
            } while (iVar15 != 0x140);
            iVar14 = iVar14 + 1;
          } while (iVar14 != 0xf0);
        }
      }
      FUN_ram_4001589a();
      FUN_ram_400455dc(_DAT_ram_3006990c);
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = _DAT_ram_30069900;
  FUN_ram_40015a4e();
  FUN_ram_40004f92(&DAT_ram_300698f4,0,0x100);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40015b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


