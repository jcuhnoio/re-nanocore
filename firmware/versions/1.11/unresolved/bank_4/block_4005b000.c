/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4005b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4005b0f2.
 * REA evidence: ev_b9466f2a722059987ff5d0a3dd29f697ca2f6e3beba816d48a0cd4743813f500
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b0f2(int param_1,int param_2)

{
  int iVar1;
  undefined1 uStack_12;
  byte abStack_11 [5];
  
  uStack_12 = 6;
  if (param_2 == 0) {
    uStack_12 = 4;
  }
  iVar1 = (**(code **)(param_1 + 0x30))(param_1 + 0x20,&uStack_12,1,0,0,*(code **)(param_1 + 0x30));
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4005af0c(param_1,abStack_11), iVar1 == 0)) {
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


/* NanoCore 1.11, address 0x4005b142.
 * REA evidence: ev_e76cb3f3ef47850db312b786014b0240ffb5dc533d124d061c06ff2f5c4d9df8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b142(int param_1)

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
  iVar1 = FUN_ram_4005b0f2(param_1,1);
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
      iVar1 = FUN_ram_4005af2e(param_1,4000000);
    }
  }
  FUN_ram_4005b0f2(param_1,0);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar4);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4005b1d2.
 * REA evidence: ev_1446aace76a81478fb59db5291838cf14491d4db6e2a55f4d8fe06b4856f0311
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b1d2(int param_1,uint param_2,uint param_3)

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
      iVar1 = FUN_ram_4005b142();
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
        iVar1 = FUN_ram_4005c174(param_1,param_2,param_3);
        iVar1 = param_1 + iVar1 * 8;
        uVar5 = *(undefined1 *)(iVar1 + 0x78);
        uVar3 = *(uint *)(iVar1 + 0x74);
      }
      iVar1 = FUN_ram_4005b0f2(param_1,1);
      if (iVar1 != 0) goto LAB_ram_4005b298;
      uStack_38 = uVar5;
      FUN_ram_4005ad0a(*(undefined1 *)(param_1 + 0x45),param_2,auStack_37);
      iVar1 = (**(code **)(param_1 + 0x30))
                        (iVar4,&uStack_38,(*(char *)(param_1 + 0x45) != '\0') + '\x04',0,0,
                         *(code **)(param_1 + 0x30));
      if ((iVar1 != 0) || (iVar1 = FUN_ram_4005af2e(param_1,40000), iVar1 != 0))
      goto LAB_ram_4005b298;
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
LAB_ram_4005b298:
    FUN_ram_4005b0f2(param_1,0);
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
      (**(code **)(param_1 + 0x3c))(iVar4);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4005b2e4.
 * REA evidence: ev_aefaa6b5fc80e2c61ac4d970fc8aa6bf1216dab5bc90ac3b98883e52bc4a9719
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b2e4(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

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
      iVar3 = FUN_ram_4005b0f2(param_1,1);
      if (iVar3 != 0) goto LAB_ram_4005b346;
      DAT_ram_30080e20 = 2;
      FUN_ram_4005ad0a(*(undefined1 *)(param_1 + 0x45),param_2,0x30080e21);
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
      FUN_ram_4000304c(uVar4 + 0x30080e24,param_5,uVar2);
      FUN_ram_4003dfb0(auStack_44[0],param_2,iVar3,uVar2);
      FUN_ram_4003e028();
      iVar3 = (**(code **)(param_1 + 0x30))
                        (iVar5,&DAT_ram_30080e20,iVar3 + uVar2,0,0,*(code **)(param_1 + 0x30));
      param_3 = param_3 - uVar2;
      param_2 = param_2 + uVar2;
      FUN_ram_4003e04c();
      if ((iVar3 != 0) || (iVar3 = FUN_ram_4005af2e(param_1,500), iVar3 != 0))
      goto LAB_ram_4005b346;
      param_5 = param_5 + uVar2;
    }
    iVar3 = 0;
LAB_ram_4005b346:
    FUN_ram_4005b0f2(param_1,0);
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
      (**(code **)(param_1 + 0x3c))(iVar5);
    }
  }
  return iVar3;
}


/* NanoCore 1.11, address 0x4005b40c.
 * REA evidence: ev_ac0992a31a6dc1a40573769a470891a89699365fb071346ad46fcfba82127c1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b40c(int param_1,uint param_2,uint param_3,undefined1 *param_4)

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
    iVar2 = FUN_ram_4005b2e4();
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
LAB_ram_4005b498:
    iVar2 = FUN_ram_4005b0f2(param_1,1);
    if (iVar2 == 0) {
      uStack_38 = 0xad;
      iVar4 = param_2 - (int)param_4;
      bVar3 = true;
      for (; puVar6 = param_4 + iVar4, 1 < param_3; param_3 = param_3 - 2) {
        if (bVar3) {
          FUN_ram_4005ad0a(*(undefined1 *)(param_1 + 0x45),puVar6,&uStack_37);
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
        FUN_ram_4003dfb0(uStack_3c,puVar6,iVar2,param_3);
        FUN_ram_4003e028();
        iVar2 = (**(code **)(param_1 + 0x30))
                          (iVar5,&uStack_38,iVar2 + 2,0,0,*(code **)(param_1 + 0x30));
        FUN_ram_4003e04c();
        if ((iVar2 != 0) || (iVar2 = FUN_ram_4005af2e(param_1,500), iVar2 != 0))
        goto LAB_ram_4005b4de;
        param_4 = param_4 + 2;
        bVar3 = false;
      }
      iVar4 = FUN_ram_4005b0f2(param_1,0);
      iVar2 = iVar4;
      if ((iVar4 == 0) &&
         ((param_3 != 1 || (iVar2 = FUN_ram_4005b2e4(param_1,puVar6,1,1,param_4), iVar2 == 0))))
      goto LAB_ram_4005b4e6;
    }
  }
  else {
    iVar2 = FUN_ram_4005b2e4(param_1,param_2,1,1,param_4);
    if (iVar2 == 0) {
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 - 1;
      goto LAB_ram_4005b498;
    }
  }
LAB_ram_4005b4de:
  FUN_ram_4005b0f2(param_1,0);
  iVar4 = iVar2;
LAB_ram_4005b4e6:
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar5);
  }
  return iVar4;
}


/* NanoCore 1.11, address 0x4005b58a.
 * REA evidence: ev_1b2b3781eb2c8bcc96ef2b8ce51544e61300ba852518ebef864bb823f9262f76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b58a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005b1d2();
  if (iVar1 == 0) {
    FUN_ram_4005b40c(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005b5b8.
 * REA evidence: ev_5ec279d53a8e8e2ca183e586560a71685e3ddca318bfc95c80249c6c3784eb11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b5b8(int param_1,undefined4 param_2)

{
  undefined1 auStack_11 [13];
  
  auStack_11[0] = 0x35;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,auStack_11,1,param_2,1,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.11, address 0x4005b5dc.
 * REA evidence: ev_1b05a138f148120410cee68fce66525a9a700d703885195cf244c0b6110fabab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b5dc(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (param_2 == 0) {
    iVar1 = FUN_ram_4005b0f2(param_1,1);
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
      FUN_ram_4005af2e(param_1,3000);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4005b642.
 * REA evidence: ev_e16cef70017cf273faf30223ead62c83ecc2997e8117bdf011603dbbc7972d86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b642(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  uint *puVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined1 uStack_24;
  undefined1 auStack_23 [7];
  
  iVar5 = FUN_ram_40042d3c();
  if (iVar5 != 0) goto LAB_ram_4005b6e8;
  iVar11 = param_1 + 0x20;
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    uVar7 = *(uint *)(param_1 + 0x98);
    if (25000000 < *(uint *)(param_1 + 0x98)) {
      uVar7 = 25000000;
    }
    (**(code **)(param_1 + 0x24))(iVar11,uVar7);
  }
  *(undefined1 *)(param_1 + 0x54) = 3;
  *(code **)(param_1 + 0x60) = FUN_ram_4005bb90;
  uStack_24 = 0x66;
  iVar5 = (**(code **)(param_1 + 0x30))(iVar11,&uStack_24,1,0,0,*(code **)(param_1 + 0x30));
  if (iVar5 != 0) goto LAB_ram_4005b6e8;
  auStack_23[0] = 0x99;
  iVar5 = (**(code **)(param_1 + 0x30))(iVar11,auStack_23,1,0,0,*(code **)(param_1 + 0x30));
  FUN_ram_4003ff8a(300);
  if (iVar5 != 0) goto LAB_ram_4005b6e8;
  if ((((*(int *)(param_1 + 0x10) == 0) || (*(short *)(param_1 + 0x14) == 0)) ||
      (*(int *)(param_1 + 0x18) == 0)) || (*(char *)(param_1 + 0x1c) == '\0')) {
    iVar5 = FUN_ram_4005acc0(param_1);
    if (iVar5 != 0) goto LAB_ram_4005b6e8;
    if ((*(short *)(param_1 + 0xc) == 0x28c2) && (*(char *)(param_1 + 0xe) == '\x17')) {
      if (25000000 < *(uint *)(param_1 + 0x9c)) {
        *(undefined4 *)(param_1 + 0x9c) = 25000000;
      }
      if (*(code **)(param_1 + 0x24) != (code *)0x0) {
        (**(code **)(param_1 + 0x24))(iVar11,*(undefined4 *)(param_1 + 0x9c));
      }
    }
    iVar5 = FUN_ram_4005be80(param_1);
    if (iVar5 == 0) {
      ppuVar10 = &PTR_s_AT45DB161E_ram_4009992c_ram_40099a8c;
      iVar5 = 0;
      do {
        if (((*(char *)(ppuVar10 + 1) == *(char *)(param_1 + 0xc)) &&
            (*(char *)((int)ppuVar10 + 5) == *(char *)(param_1 + 0xd))) &&
           (*(char *)((int)ppuVar10 + 6) == *(char *)(param_1 + 0xe))) {
          iVar6 = iVar5 * 0x18;
          *(undefined **)(param_1 + 8) = (&PTR_s_AT45DB161E_ram_4009992c_ram_40099a8c)[iVar5 * 6];
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&DAT_ram_40099a94 + iVar6);
          *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(&DAT_ram_40099a98 + iVar6);
          uVar1 = (&DAT_ram_40099aa0)[iVar6];
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(&DAT_ram_40099a9c + iVar6);
          *(undefined1 *)(param_1 + 0x1c) = uVar1;
          break;
        }
        iVar5 = iVar5 + 1;
        ppuVar10 = ppuVar10 + 6;
      } while (iVar5 != 0x1f);
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x70);
      uVar8 = 2;
      if (*(short *)(param_1 + 0x68) != 1) {
        uVar8 = 1;
      }
      *(undefined2 *)(param_1 + 0x14) = uVar8;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x74);
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_1 + 0x78);
      puVar9 = (uint *)(param_1 + 0x7c);
      do {
        uVar7 = *puVar9;
        if ((uVar7 != 0) && (uVar7 < *(uint *)(param_1 + 0x18))) {
          *(uint *)(param_1 + 0x18) = uVar7;
          *(char *)(param_1 + 0x1c) = (char)puVar9[1];
        }
        puVar9 = puVar9 + 2;
      } while (puVar9 != (uint *)(param_1 + 0x94));
    }
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_ram_4005b6de;
  }
  else {
LAB_ram_4005b6de:
    if (((*(ushort *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
       (*(char *)(param_1 + 0x1c) != '\0')) {
      if ((((*(ushort *)(param_1 + 0x14) & 4) == 0) &&
          ((*(uint *)(param_1 + 0xc) & 0xffffff) != 0x1620c2)) ||
         (iVar5 = FUN_ram_4005b5dc(param_1,1,0), iVar5 == 0)) {
        if (*(uint *)(param_1 + 0x10) < 0x1000001) {
          *(undefined1 *)(param_1 + 0x45) = 0;
        }
        else {
          iVar5 = FUN_ram_4005b0f2(param_1,1);
          if (iVar5 == 0) {
            uStack_24 = 0xb7;
            iVar5 = (**(code **)(param_1 + 0x30))
                              (iVar11,&uStack_24,1,0,0,*(code **)(param_1 + 0x30));
            if (iVar5 == 0) {
              *(undefined1 *)(param_1 + 0x45) = 1;
            }
          }
        }
        if (*(code **)(param_1 + 0x24) != (code *)0x0) {
          (**(code **)(param_1 + 0x24))(iVar11,*(undefined4 *)(param_1 + 0x9c));
        }
        cVar2 = *(char *)(param_1 + 0xc);
        cVar3 = *(char *)(param_1 + 0xd);
        cVar4 = *(char *)(param_1 + 0xe);
        iVar5 = 3;
        do {
          iVar6 = FUN_ram_4005acc0(param_1);
          if ((iVar6 != 0) ||
             (((*(char *)(param_1 + 0xc) == cVar2 && (*(char *)(param_1 + 0xd) == cVar3)) &&
              (*(char *)(param_1 + 0xe) == cVar4)))) break;
          if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
            (**(code **)(param_1 + 0x2c))(iVar11,iVar5);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = FUN_ram_4005bd10(param_1);
        if (iVar5 == 0) {
          if ((*(short *)(param_1 + 0xc) != 0x28c2) || (*(char *)(param_1 + 0xe) != '\x17')) {
            (**(code **)(param_1 + 0x60))(param_1);
          }
          *(code **)(param_1 + 0xa0) = FUN_ram_4005bc52;
          *(undefined1 *)(param_1 + 0x44) = 1;
          iVar5 = (**(code **)(param_1 + 0x28))(iVar11,&uStack_24);
          if (iVar5 == 0) {
            iVar5 = FUN_ram_4003df7c();
            if (iVar5 == 0) {
              return 0;
            }
            *(undefined1 *)(param_1 + 0x44) = 0;
            return -1;
          }
        }
      }
      goto LAB_ram_4005b6e8;
    }
  }
  iVar5 = 1;
LAB_ram_4005b6e8:
  *(undefined1 *)(param_1 + 0x44) = 0;
  return iVar5;
}


/* NanoCore 1.11, address 0x4005b90e.
 * REA evidence: ev_73526dbc243f0d1e7815f95825a40381041d05faa0c12ab6dd8eb397604209ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b90e(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  iVar1 = FUN_ram_4005b0f2(param_1,1);
  if (iVar1 == 0) {
    uStack_14 = 1;
    uStack_13 = *param_2;
    uStack_12 = param_2[1];
    iVar1 = (**(code **)(param_1 + 0x30))
                      (param_1 + 0x20,&uStack_14,3,0,0,*(code **)(param_1 + 0x30));
    if (iVar1 == 0) {
      FUN_ram_4005af2e(param_1,3000);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4005b960.
 * REA evidence: ev_cd4cddae0170c410793c55d838ba7e98c956df43825c865569c2a1b9f1f0e283
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b960(int param_1,undefined1 param_2,undefined1 *param_3)

{
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  uStack_13 = *param_3;
  uStack_14 = param_2;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,&uStack_14,2,0,0,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.11, address 0x4005b986.
 * REA evidence: ev_623d4033c84c6c4c36c0cdea945d5bb4b2484ebe71ef23a9726132ec290dbe83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b986(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005b960(param_1,0x31,param_2);
  if (iVar1 == 0) {
    FUN_ram_4005af2e(param_1,3000);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005b9b4.
 * REA evidence: ev_edd43adfece6188a635d0ecc1a3c061718df9601898a610320fd8771adfa39df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b9b4(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 auStack_11 [13];
  
  auStack_11[0] = param_2;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,auStack_11,1,param_3,1,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.11, address 0x4005b9d4.
 * REA evidence: ev_8af20e0bd6c3e1147f16af23e3e7af3cb9f9a2e850f013f6d64ca1e6cedd531e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005b9d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x20;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(iVar2);
  }
  FUN_ram_4000304c(0x30080e00,param_2,5);
  iVar1 = (**(code **)(param_1 + 0x30))
                    (iVar2,0x30080e00,5,0x30080e05,param_3,*(code **)(param_1 + 0x30));
  FUN_ram_4000304c(param_4,0x30080e05,8);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar2);
  }
  if (iVar1 != 0) {
    param_3 = 0xffffffff;
  }
  return param_3;
}


/* NanoCore 1.11, address 0x4005ba52.
 * REA evidence: ev_011133bf5eb8ef3a138103ded3e1cae494a228080f5223f52f11aa433acffd98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005ba52(int param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char acStack_21 [13];
  byte bStack_14;
  char acStack_13 [3];
  
  acStack_21[0] = param_2;
  iVar2 = FUN_ram_4005af0c(param_1,&bStack_14);
  if (iVar2 == 0) {
    acStack_13[0] = acStack_21[0];
    iVar2 = FUN_ram_4005b90e(param_1,&bStack_14);
    bVar1 = bStack_14;
    if ((iVar2 == 0) && (iVar3 = FUN_ram_4005af0c(param_1,&bStack_14), iVar2 = iVar3, iVar3 == 0)) {
      if ((bVar1 & 0xfc) == (bStack_14 & 0xfc)) {
        if ((((*(uint *)(param_1 + 0x5c) & 0x400) == 0) &&
            (iVar2 = FUN_ram_4005b5b8(param_1,acStack_13), iVar2 == 0)) &&
           (iVar2 = iVar3, acStack_13[0] != acStack_21[0])) {
          FUN_ram_4005b986(param_1,acStack_21);
          FUN_ram_4005b5b8(param_1,acStack_13);
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


/* NanoCore 1.11, address 0x4005bafc.
 * REA evidence: ev_ec44337fb9b66d1e00ca3d4deadf70f96302a79b5781d4915948c58c6afaffc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005bafc(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte bStack_12;
  byte abStack_11 [5];
  
  iVar2 = FUN_ram_4005af0c(param_1,&bStack_12);
  if (iVar2 == 0) {
    if ((bStack_12 & 0x40) == 0) {
      bVar1 = bStack_12 | 0x40;
      bStack_12 = bVar1;
      iVar2 = FUN_ram_4005b5dc(param_1,1,bVar1);
      if ((iVar2 == 0) && (iVar2 = FUN_ram_4005af0c(param_1,abStack_11), iVar2 == 0)) {
        iVar2 = -(uint)(abStack_11[0] != bVar1);
      }
    }
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x4005bb52.
 * REA evidence: ev_dcfe41f9cc9472797ab88b0802ad7578b49d82d792fa40bd45d95f81a3c11c73
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005bb52(int param_1)

{
  int iVar1;
  byte abStack_14 [12];
  
  if ((*(uint *)(param_1 + 0x5c) & 0x400) != 0) {
    FUN_ram_4005ba52(param_1,2);
    return;
  }
  iVar1 = FUN_ram_4005b5b8(param_1,abStack_14);
  if (iVar1 == 0) {
    if ((abStack_14[0] & 2) == 0) {
      abStack_14[0] = abStack_14[0] | 2;
      FUN_ram_4005ba52(param_1);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4005bb90.
 * REA evidence: ev_37aa4a18081ed400d97661213c6c70841022c612f079d0a6390121479429af15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4005bb90(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  byte abStack_21 [13];
  
  pcVar5 = &DAT_ram_40099dc4;
  abStack_21[0] = 0;
  iVar4 = 0;
  while (((*pcVar5 != *(char *)(param_1 + 0xc) || (pcVar5[1] != *(char *)(param_1 + 0xd))) ||
         (pcVar5[2] != *(char *)(param_1 + 0xe)))) {
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 6;
    if (iVar4 == 5) {
      FUN_ram_4005bb52(param_1);
      return 0;
    }
  }
  iVar4 = iVar4 * 6;
  uVar1 = (&DAT_ram_40099dc8)[iVar4];
  bVar2 = (&DAT_ram_40099dc9)[iVar4];
  uVar3 = (&DAT_ram_40099dc7)[iVar4];
  FUN_ram_4005b0f2(param_1,1);
  FUN_ram_4005b9b4(param_1,uVar1,abStack_21);
  abStack_21[0] = (byte)(1 << (bVar2 & 0x1f)) | abStack_21[0];
  FUN_ram_4005b960(param_1,uVar3,abStack_21);
  FUN_ram_4005b9b4(param_1,uVar1,abStack_21);
  return ~(abStack_21[0] >> (bVar2 & 0x1f)) & 1;
}


/* NanoCore 1.11, address 0x4005bc52.
 * REA evidence: ev_1e6af16ebadcbc256a0705cfbcce110aaaec2480db6834eaae8d7829e2c989c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005bc52(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char *pcVar5;
  int iVar6;
  
  puVar2 = (undefined1 *)FUN_ram_40002f2c(5);
  if (puVar2 == (undefined1 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    memset(puVar2 + 1,0xff,4);
    cVar1 = *(char *)(param_1 + 0xc);
    pcVar5 = &DAT_ram_40099de4;
    *puVar2 = 0x4b;
    iVar6 = 0;
    do {
      if (((*pcVar5 == cVar1) && (pcVar5[1] == *(char *)(param_1 + 0xd))) &&
         (pcVar5[2] == *(char *)(param_1 + 0xe))) {
        iVar6 = iVar6 * 0x10;
        uVar4 = (&DAT_ram_40099dec)[iVar6];
        *puVar2 = (&DAT_ram_40099de7)[iVar6];
        puVar2[1] = (&DAT_ram_40099de8)[iVar6];
        puVar2[2] = (&DAT_ram_40099de9)[iVar6];
        puVar2[3] = (&DAT_ram_40099dea)[iVar6];
        puVar2[4] = (&DAT_ram_40099deb)[iVar6];
        goto LAB_ram_4005bce0;
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x10;
    } while (iVar6 != 0x13);
    uVar4 = 0x10;
LAB_ram_4005bce0:
    uVar3 = FUN_ram_4005b9d4(param_1,puVar2,uVar4,param_2);
    FUN_ram_40002f3a(puVar2);
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x4005bd10.
 * REA evidence: ev_8b31e4c062526d63fc9877befafc18f787045924f3fc64d5eed1cbd7b3a5524c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005bd10(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  byte bStack_25;
  byte bStack_24;
  byte abStack_23 [15];
  
  if ((*(short *)(param_1 + 0xc) != 0x28c2) || (uVar3 = 0x3c, *(char *)(param_1 + 0xe) != '\x17')) {
    pcVar2 = &DAT_ram_40099de4;
    do {
      if (((*pcVar2 == *(char *)(param_1 + 0xc)) && (pcVar2[1] == *(char *)(param_1 + 0xd))) &&
         (pcVar2[2] == *(char *)(param_1 + 0xe))) break;
      pcVar2 = pcVar2 + 0x10;
    } while (pcVar2 != (char *)&DAT_ram_40099f14);
    uVar3 = 0x1c;
  }
  *(char *)(param_1 + 0xa4) = (char)uVar3;
  FUN_ram_4005af0c(param_1,&bStack_25);
  if ((bStack_25 & uVar3) == 0) {
    return 0;
  }
  uVar3 = ~uVar3 & (uint)bStack_25;
  bStack_25 = (byte)uVar3;
  if ((*(uint *)(param_1 + 0x5c) & 0x200) == 0) {
    iVar1 = FUN_ram_4005b5dc(param_1,0,uVar3);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4005af0c(param_1,&bStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = bStack_24 - uVar3;
  }
  else {
    bStack_24 = bStack_25;
    if ((*(uint *)(param_1 + 0x5c) & 0x400) == 0) {
      iVar1 = FUN_ram_4005b5b8(param_1,abStack_23);
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
    iVar1 = FUN_ram_4005b90e(param_1,&bStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar4 = (uint)abStack_23[0];
    FUN_ram_4005af0c(param_1,&bStack_24);
    if (bStack_24 != uVar3) {
      return -1;
    }
    if ((*(uint *)(param_1 + 0x5c) & 0x400) != 0) {
      return 0;
    }
    FUN_ram_4005b5b8(param_1,abStack_23);
    iVar1 = abStack_23[0] - uVar4;
  }
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.11, address 0x4005be48.
 * REA evidence: ev_b63940ca3cdce0ff741ad986cc8387338bc2b4103e3f5687e0936d6453e0be89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005be48(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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


/* NanoCore 1.11, address 0x4005be80.
 * REA evidence: ev_3c4297d42dcb0daedeed34d67b0a965889de70a32fb18a5cd00a1265e8d22575
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005be80(int param_1)

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
  iVar2 = FUN_ram_4005be48(param_1,0,&uStack_a8,8);
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
  iVar2 = FUN_ram_4005be48(param_1,8,&uStack_a8,8);
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
  iVar2 = FUN_ram_4005be48(param_1,uStack_a4 & 0xff |
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
LAB_ram_4005c0c2:
    *(undefined **)(param_1 + 0x6e) = puVar10;
  }
  else {
    if (uVar13 == 2) {
      puVar10 = (undefined *)0x100;
      goto LAB_ram_4005c0c2;
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
  if (uVar1 < 0x10) goto LAB_ram_4005c09e;
  uStack_68 = uStack_68 & 0x700000;
  if (uStack_68 == 0x200000) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffdff;
    pcVar12 = FUN_ram_4005bafc;
  }
  else {
    if (uStack_68 < 0x200001) {
      if (uStack_68 == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        goto LAB_ram_4005c09e;
      }
      if (uStack_68 != 0x100000) goto LAB_ram_4005c09e;
    }
    else if (uStack_68 != 0x400000) {
      if (uStack_68 != 0x500000) goto LAB_ram_4005c09e;
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x200;
      pcVar12 = FUN_ram_4005bb52;
      goto LAB_ram_4005c15e;
    }
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x600;
    pcVar12 = FUN_ram_4005bb90;
  }
LAB_ram_4005c15e:
  *(code **)(param_1 + 0x60) = pcVar12;
LAB_ram_4005c09e:
  *(undefined1 *)(param_1 + 100) = 1;
  return 1;
}


