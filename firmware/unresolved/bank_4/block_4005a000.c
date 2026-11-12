/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4005a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4005a162.
 * REA evidence: ev_90c4e4827555bec38fe182789ff8a4a999dadf99f31adc057c7f0495528caead
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005a162(int param_1,int param_2)

{
  int iVar1;
  undefined1 uStack_12;
  byte abStack_11 [5];
  
  uStack_12 = 6;
  if (param_2 == 0) {
    uStack_12 = 4;
  }
  iVar1 = (**(code **)(param_1 + 0x30))(param_1 + 0x20,&uStack_12,1,0,0,*(code **)(param_1 + 0x30));
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40059f7c(param_1,abStack_11), iVar1 == 0)) {
    if (param_2 == 0) {
      if ((abStack_11[0] & 2) == 0) {
        return 0;
      }
    }
    else if ((abStack_11[0] & 2) != 0) {
      return 0;
    }
    iVar1 = 2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4005a1b2.
 * REA evidence: ev_c61b62327c773e1de67c00d89e3f720d24bffd1c434c046bc93b2219f659633c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005a1b2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  
  iVar4 = param_1 + 0x20;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(iVar4);
  }
  iVar1 = FUN_ram_4005a162(param_1,1);
  if (iVar1 == 0) {
    uStack_14 = 199;
    uVar3 = *(ushort *)(param_1 + 0x14) & 8;
    if ((*(ushort *)(param_1 + 0x14) & 8) == 0) {
      uVar2 = 1;
    }
    else {
      uStack_13 = 0x94;
      uVar3 = 0xffff9a80;
      uStack_12 = 0x9a80;
      uVar2 = 4;
    }
    iVar1 = (**(code **)(param_1 + 0x30))
                      (iVar4,&uStack_14,uVar2,0,0,uVar3,*(code **)(param_1 + 0x30));
    if (iVar1 == 0) {
      iVar1 = FUN_ram_40059f9e(param_1,4000000);
    }
  }
  FUN_ram_4005a162(param_1,0);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar4);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4005a242.
 * REA evidence: ev_4c4a4c0e0b41c19e4da7c607ba676e5ed88891490d8378ce93d7464f4a754914
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005a242(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uStack_38;
  undefined1 auStack_37 [19];
  
  if (*(uint *)(param_1 + 0x10) < param_2 + param_3) {
    iVar1 = 5;
  }
  else {
    if ((param_2 == 0) && (*(uint *)(param_1 + 0x10) == param_3)) {
      iVar1 = FUN_ram_4005a1b2();
      return iVar1;
    }
    iVar4 = param_1 + 0x20;
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))(iVar4);
    }
    while (param_3 != 0) {
      if (*(char *)(param_1 + 100) == '\0') {
        uVar5 = *(undefined1 *)(param_1 + 0x1c);
        uVar3 = *(uint *)(param_1 + 0x18);
      }
      else {
        iVar1 = FUN_ram_4005b120(param_1,param_2,param_3);
        iVar1 = param_1 + iVar1 * 8;
        uVar5 = *(undefined1 *)(iVar1 + 0x78);
        uVar3 = *(uint *)(iVar1 + 0x74);
      }
      iVar1 = FUN_ram_4005a162(param_1,1);
      if (iVar1 != 0) goto LAB_ram_4005a308;
      uStack_38 = uVar5;
      FUN_ram_40059d98(*(undefined1 *)(param_1 + 0x45),param_2,auStack_37);
      iVar1 = (**(code **)(param_1 + 0x30))
                        (iVar4,&uStack_38,(*(char *)(param_1 + 0x45) != '\0') + '\x04',0,0,
                         *(code **)(param_1 + 0x30));
      if ((iVar1 != 0) || (iVar1 = FUN_ram_40059f9e(param_1,40000), iVar1 != 0))
      goto LAB_ram_4005a308;
      uVar2 = param_2;
      if (uVar3 != 0) {
        uVar2 = param_2 % uVar3;
      }
      if (uVar2 == 0) {
        if (param_3 <= uVar3) break;
        param_3 = param_3 - uVar3;
        param_2 = param_2 + uVar3;
      }
      else {
        if (param_3 <= uVar3 - uVar2) break;
        param_3 = param_3 + (uVar2 - uVar3);
        param_2 = param_2 + (uVar3 - uVar2);
      }
    }
    iVar1 = 0;
LAB_ram_4005a308:
    FUN_ram_4005a162(param_1,0);
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
      (**(code **)(param_1 + 0x3c))(iVar4);
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4005a354.
 * REA evidence: ev_e8d030f0a35894d21ee2721c1eca0026ce93051fd149d363cc2c33e0c7865ebb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005a354(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 auStack_44 [4];
  
  iVar5 = param_1 + 0x20;
  iVar3 = (**(code **)(param_1 + 0x28))(iVar5,auStack_44);
  if ((iVar3 == 0) && (iVar3 = 5, param_2 + param_3 <= *(uint *)(param_1 + 0x10))) {
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))(iVar5);
    }
    while (param_3 != 0) {
      iVar3 = FUN_ram_4005a162(param_1,1);
      if (iVar3 != 0) goto LAB_ram_4005a3b6;
      DAT_ram_3007faa0 = 2;
      FUN_ram_40059d98(*(undefined1 *)(param_1 + 0x45),param_2,0x3007faa1);
      uVar1 = param_2;
      if (param_4 != 0) {
        uVar1 = param_2 % param_4;
      }
      uVar4 = (uint)(*(char *)(param_1 + 0x45) != '\0');
      iVar3 = uVar4 + 4;
      if (uVar1 == 0) {
        uVar2 = param_3;
        if (param_4 <= param_3) {
          uVar2 = param_4;
        }
      }
      else {
        uVar2 = param_4 - uVar1;
        if (param_3 < param_4 - uVar1) {
          uVar2 = param_3;
        }
      }
      FUN_ram_4000305c(uVar4 + 0x3007faa4,param_5,uVar2);
      FUN_ram_4003d08c(auStack_44[0],param_2,iVar3,uVar2);
      FUN_ram_4003d104();
      iVar3 = (**(code **)(param_1 + 0x30))
                        (iVar5,&DAT_ram_3007faa0,iVar3 + uVar2,0,0,*(code **)(param_1 + 0x30));
      param_3 = param_3 - uVar2;
      param_2 = param_2 + uVar2;
      FUN_ram_4003d128();
      if ((iVar3 != 0) || (iVar3 = FUN_ram_40059f9e(param_1,500), iVar3 != 0))
      goto LAB_ram_4005a3b6;
      param_5 = param_5 + uVar2;
    }
    iVar3 = 0;
LAB_ram_4005a3b6:
    FUN_ram_4005a162(param_1,0);
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
      (**(code **)(param_1 + 0x3c))(iVar5);
    }
  }
  return iVar3;
}


/* NanoCore 1.10, address 0x4005a47c.
 * REA evidence: ev_4ea9f73506b34c00d2abd14ee20c4915c8b84812280886030048dc072935e7b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005a47c(int param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 auStack_34 [16];
  
  if ((*(ushort *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = FUN_ram_4005a354();
    return iVar2;
  }
  if ((*(ushort *)(param_1 + 0x14) & 4) == 0) {
    return 0;
  }
  iVar5 = param_1 + 0x20;
  iVar2 = (**(code **)(param_1 + 0x28))(iVar5,&uStack_3c);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(uint *)(param_1 + 0x10) < param_2 + param_3) {
    return 5;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(iVar5);
  }
  if ((param_2 & 1) == 0) {
LAB_ram_4005a508:
    iVar2 = FUN_ram_4005a162(param_1,1);
    if (iVar2 == 0) {
      uStack_38 = 0xad;
      iVar4 = param_2 - (int)param_4;
      bVar3 = true;
      for (; puVar6 = param_4 + iVar4, 1 < param_3; param_3 = param_3 - 2) {
        if (bVar3) {
          FUN_ram_40059d98(*(undefined1 *)(param_1 + 0x45),puVar6,&uStack_37);
          uVar1 = (uint)(*(char *)(param_1 + 0x45) != '\0');
          iVar2 = uVar1 + 4;
          auStack_34[uVar1] = *param_4;
          auStack_34[uVar1 + 1] = param_4[1];
        }
        else {
          uStack_37 = *param_4;
          iVar2 = 1;
          uStack_36 = param_4[1];
        }
        FUN_ram_4003d08c(uStack_3c,puVar6,iVar2,param_3);
        FUN_ram_4003d104();
        iVar2 = (**(code **)(param_1 + 0x30))
                          (iVar5,&uStack_38,iVar2 + 2,0,0,*(code **)(param_1 + 0x30));
        FUN_ram_4003d128();
        if ((iVar2 != 0) || (iVar2 = FUN_ram_40059f9e(param_1,500), iVar2 != 0))
        goto LAB_ram_4005a54e;
        param_4 = param_4 + 2;
        bVar3 = false;
      }
      iVar4 = FUN_ram_4005a162(param_1,0);
      iVar2 = iVar4;
      if ((iVar4 == 0) &&
         ((param_3 != 1 || (iVar2 = FUN_ram_4005a354(param_1,puVar6,1,1,param_4), iVar2 == 0))))
      goto LAB_ram_4005a556;
    }
  }
  else {
    iVar2 = FUN_ram_4005a354(param_1,param_2,1,1,param_4);
    if (iVar2 == 0) {
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 - 1;
      goto LAB_ram_4005a508;
    }
  }
LAB_ram_4005a54e:
  FUN_ram_4005a162(param_1,0);
  iVar4 = iVar2;
LAB_ram_4005a556:
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar5);
  }
  return iVar4;
}


/* NanoCore 1.10, address 0x4005a5fa.
 * REA evidence: ev_9656e99c58758dfcfec8cbf4943488bffbdca85133a083625cc6486b249332cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005a5fa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005a242();
  if (iVar1 == 0) {
    FUN_ram_4005a47c(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005a628.
 * REA evidence: ev_2bb28c1dadf2555ce02b5fbff6f8d3bdafa1eae8d37c260a92e01181d751a3d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005a628(int param_1,undefined4 param_2)

{
  undefined1 auStack_11 [13];
  
  auStack_11[0] = 0x35;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,auStack_11,1,param_2,1,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.10, address 0x4005a64c.
 * REA evidence: ev_d677535e9f5e988a96988c358e2e13af20f71c04ab55314c14050321d86f1c0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005a64c(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (param_2 == 0) {
    iVar1 = FUN_ram_4005a162(param_1,1);
  }
  else {
    uStack_14 = 0x50;
    iVar1 = (**(code **)(param_1 + 0x30))
                      (param_1 + 0x20,&uStack_14,1,0,0,*(code **)(param_1 + 0x30));
  }
  if (iVar1 == 0) {
    uStack_14 = 1;
    uStack_13 = param_3;
    iVar1 = (**(code **)(param_1 + 0x30))
                      (param_1 + 0x20,&uStack_14,2,0,0,*(code **)(param_1 + 0x30));
    if (iVar1 == 0) {
      FUN_ram_40059f9e(param_1,3000);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4005a6b2.
 * REA evidence: ev_1502a1fe5deea5da600cbe6442e3e5b28d01ef92e1c460e68be264a42ec2d405
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005a6b2(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined2 uVar9;
  uint *puVar10;
  undefined **ppuVar11;
  int iVar12;
  int iVar13;
  undefined1 uStack_24;
  undefined1 auStack_23 [3];
  
  iVar6 = FUN_ram_40041e04();
  iVar13 = param_1 + 0x20;
  if (iVar6 == 0) {
    if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(iVar13,*(undefined4 *)(param_1 + 0x98));
    }
    *(undefined1 *)(param_1 + 0x54) = 3;
    *(code **)(param_1 + 0x60) = FUN_ram_4005ab96;
    uStack_24 = 0x66;
    iVar6 = (**(code **)(param_1 + 0x30))(iVar13,&uStack_24,1,0,0,*(code **)(param_1 + 0x30));
    bVar5 = false;
    if (iVar6 != 0) goto LAB_ram_4005a6d2;
    auStack_23[0] = 0x99;
    iVar6 = (**(code **)(param_1 + 0x30))(iVar13,auStack_23,1,0,0,*(code **)(param_1 + 0x30));
    FUN_ram_4003f052(300);
    if (iVar6 == 0) {
      if ((((*(int *)(param_1 + 0x10) == 0) || (*(short *)(param_1 + 0x14) == 0)) ||
          (*(int *)(param_1 + 0x18) == 0)) || (*(char *)(param_1 + 0x1c) == '\0')) {
        iVar6 = FUN_ram_40059d4e(param_1);
        if (iVar6 == 0) {
          iVar6 = FUN_ram_4005ae2c(param_1);
          if (iVar6 == 0) {
            ppuVar11 = &PTR_s_AT45DB161E_ram_40097ab0_ram_40097c04;
            iVar6 = 0;
            do {
              if (((*(char *)(ppuVar11 + 1) == *(char *)(param_1 + 0xc)) &&
                  (*(char *)((int)ppuVar11 + 5) == *(char *)(param_1 + 0xd))) &&
                 (*(char *)((int)ppuVar11 + 6) == *(char *)(param_1 + 0xe))) {
                iVar12 = iVar6 * 0x18;
                *(undefined **)(param_1 + 8) =
                     (&PTR_s_AT45DB161E_ram_40097ab0_ram_40097c04)[iVar6 * 6];
                *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&DAT_ram_40097c0c + iVar12);
                *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(&DAT_ram_40097c10 + iVar12);
                uVar4 = (&DAT_ram_40097c18)[iVar12];
                *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(&DAT_ram_40097c14 + iVar12);
                *(undefined1 *)(param_1 + 0x1c) = uVar4;
                break;
              }
              iVar6 = iVar6 + 1;
              ppuVar11 = ppuVar11 + 6;
            } while (iVar6 != 0x1e);
          }
          else {
            *(undefined4 *)(param_1 + 8) = 0;
            *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x70);
            uVar9 = 2;
            if (*(short *)(param_1 + 0x68) != 1) {
              uVar9 = 1;
            }
            *(undefined2 *)(param_1 + 0x14) = uVar9;
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x74);
            *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_1 + 0x78);
            puVar10 = (uint *)(param_1 + 0x7c);
            do {
              uVar8 = *puVar10;
              if ((uVar8 != 0) && (uVar8 < *(uint *)(param_1 + 0x18))) {
                *(uint *)(param_1 + 0x18) = uVar8;
                *(char *)(param_1 + 0x1c) = (char)puVar10[1];
              }
              puVar10 = puVar10 + 2;
            } while (puVar10 != (uint *)(param_1 + 0x94));
          }
          if (*(int *)(param_1 + 0x10) != 0) goto LAB_ram_4005a76e;
        }
      }
      else {
LAB_ram_4005a76e:
        if ((((*(ushort *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
            (*(char *)(param_1 + 0x1c) != '\0')) &&
           ((((*(ushort *)(param_1 + 0x14) & 4) == 0 &&
             ((*(uint *)(param_1 + 0xc) & 0xffffff) != 0x1620c2)) ||
            (iVar6 = FUN_ram_4005a64c(param_1,1,0), iVar6 == 0)))) {
          if (*(uint *)(param_1 + 0x10) < 0x1000001) {
            *(undefined1 *)(param_1 + 0x45) = 0;
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_ram_4005a162(param_1,1);
            if (iVar6 == 0) {
              uStack_24 = 0xb7;
              iVar6 = (**(code **)(param_1 + 0x30))
                                (iVar13,&uStack_24,1,0,0,*(code **)(param_1 + 0x30));
              if (iVar6 == 0) {
                *(undefined1 *)(param_1 + 0x45) = 1;
              }
            }
          }
          if (*(code **)(param_1 + 0x24) != (code *)0x0) {
            (**(code **)(param_1 + 0x24))(iVar13,*(undefined4 *)(param_1 + 0x9c));
          }
          cVar1 = *(char *)(param_1 + 0xc);
          cVar2 = *(char *)(param_1 + 0xd);
          cVar3 = *(char *)(param_1 + 0xe);
          iVar12 = 3;
          do {
            iVar7 = FUN_ram_40059d4e(param_1);
            if ((iVar7 != 0) ||
               (((*(char *)(param_1 + 0xc) == cVar1 && (*(char *)(param_1 + 0xd) == cVar2)) &&
                (*(char *)(param_1 + 0xe) == cVar3)))) break;
            if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
              (**(code **)(param_1 + 0x2c))(iVar13,iVar12);
            }
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          FUN_ram_4005ad16(param_1);
          bVar5 = iVar6 == 0;
          (**(code **)(param_1 + 0x60))(param_1);
          *(code **)(param_1 + 0xa0) = FUN_ram_4005ac58;
          goto LAB_ram_4005a6d2;
        }
      }
    }
  }
  bVar5 = false;
LAB_ram_4005a6d2:
  *(bool *)(param_1 + 0x44) = bVar5;
  iVar6 = (**(code **)(param_1 + 0x28))(iVar13,&uStack_24);
  if (iVar6 == 0) {
    iVar6 = FUN_ram_4003d058();
    iVar6 = -(uint)(iVar6 != 0);
  }
  return iVar6;
}


/* NanoCore 1.10, address 0x4005a914.
 * REA evidence: ev_be317af8bd6f74a155fc198df797f2fa50fcd6b8c66cfe93c92dd06faeb23217
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005a914(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  iVar1 = FUN_ram_4005a162(param_1,1);
  if (iVar1 == 0) {
    uStack_14 = 1;
    uStack_13 = *param_2;
    uStack_12 = param_2[1];
    iVar1 = (**(code **)(param_1 + 0x30))
                      (param_1 + 0x20,&uStack_14,3,0,0,*(code **)(param_1 + 0x30));
    if (iVar1 == 0) {
      FUN_ram_40059f9e(param_1,3000);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4005a966.
 * REA evidence: ev_66f36fc6d16bc3f80b2f8be2441326603f38001b7506497089ded53164173a73
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005a966(int param_1,undefined1 param_2,undefined1 *param_3)

{
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  uStack_13 = *param_3;
  uStack_14 = param_2;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,&uStack_14,2,0,0,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.10, address 0x4005a98c.
 * REA evidence: ev_e7b4468f180906db087f05f50056bc97e5ce4967bb6a7e157ac700b221db88ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005a98c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005a966(param_1,0x31,param_2);
  if (iVar1 == 0) {
    FUN_ram_40059f9e(param_1,3000);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005a9ba.
 * REA evidence: ev_cb2c1ba7ef6234fdc3c3291f1c3e3c2d804b7fe1ab392a2dd93a0281e0a1c3b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005a9ba(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 auStack_11 [13];
  
  auStack_11[0] = param_2;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,auStack_11,1,param_3,1,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.10, address 0x4005a9da.
 * REA evidence: ev_9eb1b5d6ad17e3caa69a0b6e751602d844d64449df31977d244b562d33f6dac9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005a9da(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x20;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(iVar2);
  }
  FUN_ram_4000305c(0x3007fa80,param_2,5);
  iVar1 = (**(code **)(param_1 + 0x30))
                    (iVar2,0x3007fa80,5,0x3007fa85,param_3,*(code **)(param_1 + 0x30));
  FUN_ram_4000305c(param_4,0x3007fa85,8);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar2);
  }
  if (iVar1 != 0) {
    param_3 = 0xffffffff;
  }
  return param_3;
}


/* NanoCore 1.10, address 0x4005aa58.
 * REA evidence: ev_cdfd7d36a479cec0ce3e6230f6986809b49209e03509d1427e99b21df5b7b1b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005aa58(int param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char acStack_21 [13];
  byte bStack_14;
  char acStack_13 [3];
  
  acStack_21[0] = param_2;
  iVar2 = FUN_ram_40059f7c(param_1,&bStack_14);
  if (iVar2 == 0) {
    acStack_13[0] = acStack_21[0];
    iVar2 = FUN_ram_4005a914(param_1,&bStack_14);
    bVar1 = bStack_14;
    if ((iVar2 == 0) && (iVar3 = FUN_ram_40059f7c(param_1,&bStack_14), iVar2 = iVar3, iVar3 == 0)) {
      if ((bVar1 & 0xfc) == (bStack_14 & 0xfc)) {
        if ((((*(uint *)(param_1 + 0x5c) & 0x400) == 0) &&
            (iVar2 = FUN_ram_4005a628(param_1,acStack_13), iVar2 == 0)) &&
           (iVar2 = iVar3, acStack_13[0] != acStack_21[0])) {
          FUN_ram_4005a98c(param_1,acStack_21);
          FUN_ram_4005a628(param_1,acStack_13);
          iVar2 = -(uint)(acStack_13[0] != acStack_21[0]);
        }
      }
      else {
        iVar2 = -1;
      }
    }
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x4005ab02.
 * REA evidence: ev_b17190b70aac5d0b8d4827c9d1866f20ffb3f1dc2b4198e8a14af8f6720a977b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005ab02(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte bStack_12;
  byte abStack_11 [5];
  
  iVar2 = FUN_ram_40059f7c(param_1,&bStack_12);
  if (iVar2 == 0) {
    if ((bStack_12 & 0x40) == 0) {
      bVar1 = bStack_12 | 0x40;
      bStack_12 = bVar1;
      iVar2 = FUN_ram_4005a64c(param_1,1,bVar1);
      if ((iVar2 == 0) && (iVar2 = FUN_ram_40059f7c(param_1,abStack_11), iVar2 == 0)) {
        iVar2 = -(uint)(abStack_11[0] != bVar1);
      }
    }
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x4005ab58.
 * REA evidence: ev_14549b659efff2320f0a94a0c0e29f98d2563f84e8477fdd298bcb84fa0952e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ab58(int param_1)

{
  int iVar1;
  byte abStack_14 [12];
  
  if ((*(uint *)(param_1 + 0x5c) & 0x400) != 0) {
    FUN_ram_4005aa58(param_1,2);
    return;
  }
  iVar1 = FUN_ram_4005a628(param_1,abStack_14);
  if (iVar1 == 0) {
    if ((abStack_14[0] & 2) == 0) {
      abStack_14[0] = abStack_14[0] | 2;
      FUN_ram_4005aa58(param_1);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4005ab96.
 * REA evidence: ev_d0f159e5d3142d7644752c34a3f83e2df7676958e420f1e50d0fb38404c6dd07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4005ab96(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  byte abStack_21 [13];
  
  pcVar5 = &DAT_ram_40097f24;
  abStack_21[0] = 0;
  iVar4 = 0;
  while (((*pcVar5 != *(char *)(param_1 + 0xc) || (pcVar5[1] != *(char *)(param_1 + 0xd))) ||
         (pcVar5[2] != *(char *)(param_1 + 0xe)))) {
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 6;
    if (iVar4 == 5) {
      FUN_ram_4005ab58(param_1);
      return 0;
    }
  }
  iVar4 = iVar4 * 6;
  uVar1 = (&DAT_ram_40097f28)[iVar4];
  bVar2 = (&DAT_ram_40097f29)[iVar4];
  uVar3 = (&DAT_ram_40097f27)[iVar4];
  FUN_ram_4005a162(param_1,1);
  FUN_ram_4005a9ba(param_1,uVar1,abStack_21);
  abStack_21[0] = (byte)(1 << (bVar2 & 0x1f)) | abStack_21[0];
  FUN_ram_4005a966(param_1,uVar3,abStack_21);
  FUN_ram_4005a9ba(param_1,uVar1,abStack_21);
  return ~(abStack_21[0] >> (bVar2 & 0x1f)) & 1;
}


/* NanoCore 1.10, address 0x4005ac58.
 * REA evidence: ev_532f2f04ab88f83089d5f1916b44e87a1224353e017e81fc4a1c0b5dfd19a00a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005ac58(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char *pcVar5;
  int iVar6;
  
  puVar2 = (undefined1 *)FUN_ram_40002f3c(5);
  if (puVar2 == (undefined1 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    memset(puVar2 + 1,0xff,4);
    cVar1 = *(char *)(param_1 + 0xc);
    pcVar5 = &DAT_ram_40097f44;
    *puVar2 = 0x4b;
    iVar6 = 0;
    do {
      if (((*pcVar5 == cVar1) && (pcVar5[1] == *(char *)(param_1 + 0xd))) &&
         (pcVar5[2] == *(char *)(param_1 + 0xe))) {
        iVar6 = iVar6 * 0x10;
        uVar4 = (&DAT_ram_40097f4c)[iVar6];
        *puVar2 = (&DAT_ram_40097f47)[iVar6];
        puVar2[1] = (&DAT_ram_40097f48)[iVar6];
        puVar2[2] = (&DAT_ram_40097f49)[iVar6];
        puVar2[3] = (&DAT_ram_40097f4a)[iVar6];
        puVar2[4] = (&DAT_ram_40097f4b)[iVar6];
        goto LAB_ram_4005ace6;
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x10;
    } while (iVar6 != 0x13);
    uVar4 = 0x10;
LAB_ram_4005ace6:
    uVar3 = FUN_ram_4005a9da(param_1,puVar2,uVar4,param_2);
    FUN_ram_40002f4a(puVar2);
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4005ad16.
 * REA evidence: ev_1a0b064a02bf63b9e3b3f410387816c1306698b35b302cc4b5fbc0091ffd03da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005ad16(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bStack_25;
  byte bStack_24;
  byte abStack_23 [15];
  
  *(undefined1 *)(param_1 + 0xa4) = 0x1c;
  FUN_ram_40059f7c(param_1,&bStack_25);
  if ((bStack_25 & 0x1c) == 0) {
    return 0;
  }
  uVar2 = bStack_25 & 0xe3;
  bStack_25 = (byte)uVar2;
  if ((*(uint *)(param_1 + 0x5c) & 0x200) == 0) {
    iVar1 = FUN_ram_4005a64c(param_1,0,uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_40059f7c(param_1,&bStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = bStack_24 - uVar2;
  }
  else {
    bStack_24 = bStack_25;
    if ((*(uint *)(param_1 + 0x5c) & 0x400) == 0) {
      iVar1 = FUN_ram_4005a628(param_1,abStack_23);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    else if (*(int *)(param_1 + 0x60) == 0) {
      abStack_23[0] = 0;
    }
    else {
      abStack_23[0] = 2;
    }
    iVar1 = FUN_ram_4005a914(param_1,&bStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar3 = (uint)abStack_23[0];
    FUN_ram_40059f7c(param_1,&bStack_24);
    if (bStack_24 != uVar2) {
      return -1;
    }
    if ((*(uint *)(param_1 + 0x5c) & 0x400) != 0) {
      return 0;
    }
    FUN_ram_4005a628(param_1,abStack_23);
    iVar1 = abStack_23[0] - uVar3;
  }
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.10, address 0x4005adf4.
 * REA evidence: ev_fa13a57d93586ce51cd1db2435d24f558c15529a5fbb6bfa7dd1de59d78453cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005adf4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uStack_18;
  undefined1 uStack_17;
  ushort uStack_16;
  undefined1 uStack_14;
  
  uStack_18 = 0x5a;
  uStack_17 = (undefined1)(param_2 >> 0x10);
  uStack_14 = 0xff;
  uStack_16 = (ushort)((param_2 & 0xff00ff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  (**(code **)(param_1 + 0x30))
            (param_1 + 0x20,&uStack_18,5,param_3,param_4,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.10, address 0x4005ae2c.
 * REA evidence: ev_98bd8456ff50f12608e78e8852cf948f6632506ce9a83e651c665f1b5811fddb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005ae2c(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  byte *pbVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined *puVar10;
  uint uVar11;
  code *pcVar12;
  uint uVar13;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint uStack_9c;
  char cStack_88;
  uint uStack_68;
  
  *(undefined1 *)(param_1 + 100) = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  iVar2 = FUN_ram_4005adf4(param_1,0,&uStack_a8,8);
  if (iVar2 != 0) {
    return 0;
  }
  if ((char)uStack_a8 != 'S') {
    return 0;
  }
  if (uStack_a8._1_1_ != 'F') {
    return 0;
  }
  if (uStack_a8._2_1_ != 'D') {
    return 0;
  }
  if (uStack_a8._3_1_ != 'P') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x66) = (undefined1)uStack_a4;
  *(byte *)(param_1 + 0x65) = uStack_a4._1_1_;
  if (1 < uStack_a4._1_1_) {
    return 0;
  }
  uStack_a8 = 0;
  uStack_a4 = 0;
  iVar2 = FUN_ram_4005adf4(param_1,8,&uStack_a8,8);
  if (iVar2 != 0) {
    return 0;
  }
  if (1 < uStack_a8._2_1_) {
    return 0;
  }
  uVar1 = uStack_a8 >> 0x18;
  if (uVar1 < 9) {
    return 0;
  }
  uVar13 = uVar1;
  if (0x17 < uVar1) {
    uVar13 = 0x17;
  }
  iVar2 = FUN_ram_4005adf4(param_1,uStack_a4 & 0xff |
                                   (uStack_a4 >> 8 & 0xff) << 8 | (uStack_a4 >> 0x10 & 0xff) << 0x10
                           ,&local_a0,uVar13 << 2);
  uVar11 = 0;
  if (iVar2 != 0) {
    return 0;
  }
  for (; uVar11 < uVar13; uVar11 = uVar11 + 1 & 0xff) {
  }
  *(undefined1 *)(param_1 + 0x6b) = local_a0._1_1_;
  if ((local_a0 & 3) == 1) {
    *(undefined1 *)(param_1 + 0x6a) = 1;
  }
  else {
    if ((local_a0 & 3) != 3) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  uVar4 = 1;
  if ((int)(local_a0 << 0x1d) < 0) {
    uVar4 = 0x100;
  }
  *(undefined2 *)(param_1 + 0x68) = uVar4;
  if ((int)(local_a0 << 0x1c) < 0) {
    *(undefined1 *)(param_1 + 0x6c) = 0;
    if ((int)(local_a0 << 0x1b) < 0) {
      uVar9 = 6;
    }
    else {
      uVar9 = 0x50;
    }
    *(undefined1 *)(param_1 + 0x6d) = uVar9;
  }
  else {
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  uVar13 = (local_a0 >> 0x10 & 7) >> 1;
  if (uVar13 == 1) {
    puVar10 = &sedeleg;
LAB_ram_4005b06e:
    *(undefined **)(param_1 + 0x6e) = puVar10;
  }
  else {
    if (uVar13 == 2) {
      puVar10 = (undefined *)0x100;
      goto LAB_ram_4005b06e;
    }
    if (uVar13 != 0) {
      *(undefined2 *)(param_1 + 0x6e) = 0;
      return 0;
    }
    *(undefined2 *)(param_1 + 0x6e) = 1;
  }
  if (-((int)uStack_9c >> 0x1f) == 0) {
    iVar2 = (uStack_9c >> 3) + 1;
  }
  else {
    if (0x23 < (uStack_9c & 0x7fffffff)) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      return 0;
    }
    iVar2 = -((int)uStack_9c >> 0x1f) << ((uStack_9c & 0x7fffffff) - 3 & 0x1f);
  }
  *(int *)(param_1 + 0x70) = iVar2;
  iVar2 = 0x18;
  if (cStack_88 == -1) {
    iVar2 = 0x1c;
  }
  pbVar6 = (byte *)(iVar2 + (int)&local_a0);
  cVar7 = '\x04';
  uVar13 = 0;
  do {
    if (*pbVar6 != 0) {
      iVar2 = param_1 + uVar13 * 8;
      *(int *)(iVar2 + 0x74) = 1 << (*pbVar6 & 0x1f);
      uVar13 = uVar13 + 1 & 0xff;
      *(byte *)(iVar2 + 0x78) = pbVar6[1];
    }
    cVar7 = cVar7 + -1;
    pbVar6 = pbVar6 + 2;
  } while (cVar7 != '\0');
  bVar8 = 0;
  iVar2 = param_1;
  do {
    bVar8 = bVar8 + 1;
    iVar5 = iVar2 + 8;
    bVar3 = bVar8;
    if (*(int *)(iVar2 + 0x74) != 0) {
      for (; bVar3 < 4; bVar3 = bVar3 + 1) {
        uVar13 = *(uint *)(iVar5 + 0x74);
        if ((uVar13 != 0) && (uVar11 = *(uint *)(iVar2 + 0x74), uVar13 < uVar11)) {
          *(uint *)(iVar2 + 0x74) = uVar13;
          uVar9 = *(undefined1 *)(iVar2 + 0x78);
          *(undefined1 *)(iVar2 + 0x78) = *(undefined1 *)(iVar5 + 0x78);
          *(uint *)(iVar5 + 0x74) = uVar11;
          *(undefined1 *)(iVar5 + 0x78) = uVar9;
        }
        iVar5 = iVar5 + 8;
      }
    }
    iVar2 = iVar2 + 8;
  } while (bVar8 != 4);
  *(undefined1 *)(param_1 + 0x94) = 1;
  if ((local_a0 & 0x400000) != 0) {
    *(undefined1 *)(param_1 + 0x94) = 9;
  }
  if ((local_a0 & 0x200000) != 0) {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x10;
  }
  if ((local_a0 & 0x100000) != 0) {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 4;
  }
  if ((local_a0 & 0x10000) != 0) {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 2;
  }
  if (uVar1 < 0x10) goto LAB_ram_4005b04a;
  uStack_68 = uStack_68 & 0x700000;
  if (uStack_68 == 0x200000) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffdff;
    pcVar12 = FUN_ram_4005ab02;
  }
  else {
    if (uStack_68 < 0x200001) {
      if (uStack_68 == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        goto LAB_ram_4005b04a;
      }
      if (uStack_68 != 0x100000) goto LAB_ram_4005b04a;
    }
    else if (uStack_68 != 0x400000) {
      if (uStack_68 != 0x500000) goto LAB_ram_4005b04a;
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x200;
      pcVar12 = FUN_ram_4005ab58;
      goto LAB_ram_4005b10a;
    }
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x600;
    pcVar12 = FUN_ram_4005ab96;
  }
LAB_ram_4005b10a:
  *(code **)(param_1 + 0x60) = pcVar12;
LAB_ram_4005b04a:
  *(undefined1 *)(param_1 + 100) = 1;
  return 1;
}


