/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4005b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4005b004.
 * REA evidence: ev_7de7704c2b98776f4bea91bcfbf1c431f6f2d5b3d5dac34a9aab48d3f7c50344
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b004(int param_1,uint param_2,uint param_3)

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
      iVar1 = FUN_ram_4005af74();
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
        iVar1 = FUN_ram_4005bfa8(param_1,param_2,param_3);
        iVar1 = param_1 + iVar1 * 8;
        uVar5 = *(undefined1 *)(iVar1 + 0x78);
        uVar3 = *(uint *)(iVar1 + 0x74);
      }
      iVar1 = FUN_ram_4005af24(param_1,1);
      if (iVar1 != 0) goto LAB_ram_4005b0ca;
      uStack_38 = uVar5;
      FUN_ram_4005ab3c(*(undefined1 *)(param_1 + 0x45),param_2,auStack_37);
      iVar1 = (**(code **)(param_1 + 0x30))
                        (iVar4,&uStack_38,(*(char *)(param_1 + 0x45) != '\0') + '\x04',0,0,
                         *(code **)(param_1 + 0x30));
      if ((iVar1 != 0) || (iVar1 = FUN_ram_4005ad60(param_1,40000), iVar1 != 0))
      goto LAB_ram_4005b0ca;
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
LAB_ram_4005b0ca:
    FUN_ram_4005af24(param_1,0);
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
      (**(code **)(param_1 + 0x3c))(iVar4);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4005b116.
 * REA evidence: ev_e9c88b8cb7f268b9dfa64e131b40b8c4aad6f5cb472e9b8bacaf3c37b1fb5bfa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b116(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

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
      iVar3 = FUN_ram_4005af24(param_1,1);
      if (iVar3 != 0) goto LAB_ram_4005b178;
      DAT_ram_30080ea0 = 2;
      FUN_ram_4005ab3c(*(undefined1 *)(param_1 + 0x45),param_2,0x30080ea1);
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
      FUN_ram_4000303c(uVar4 + 0x30080ea4,param_5,uVar2);
      FUN_ram_4003e072(auStack_44[0],param_2,iVar3,uVar2);
      FUN_ram_4003e0ea();
      iVar3 = (**(code **)(param_1 + 0x30))
                        (iVar5,&DAT_ram_30080ea0,iVar3 + uVar2,0,0,*(code **)(param_1 + 0x30));
      param_3 = param_3 - uVar2;
      param_2 = param_2 + uVar2;
      FUN_ram_4003e10e();
      if ((iVar3 != 0) || (iVar3 = FUN_ram_4005ad60(param_1,500), iVar3 != 0))
      goto LAB_ram_4005b178;
      param_5 = param_5 + uVar2;
    }
    iVar3 = 0;
LAB_ram_4005b178:
    FUN_ram_4005af24(param_1,0);
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
      (**(code **)(param_1 + 0x3c))(iVar5);
    }
  }
  return iVar3;
}


/* NanoCore 1.12, address 0x4005b23e.
 * REA evidence: ev_615ac23c588a4cd5cbf860fbc7c26adc973119a3b971b26ac2574b5df6b29e8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b23e(int param_1,uint param_2,uint param_3,undefined1 *param_4)

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
    iVar2 = FUN_ram_4005b116();
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
LAB_ram_4005b2ca:
    iVar2 = FUN_ram_4005af24(param_1,1);
    if (iVar2 == 0) {
      uStack_38 = 0xad;
      iVar4 = param_2 - (int)param_4;
      bVar3 = true;
      for (; puVar6 = param_4 + iVar4, 1 < param_3; param_3 = param_3 - 2) {
        if (bVar3) {
          FUN_ram_4005ab3c(*(undefined1 *)(param_1 + 0x45),puVar6,&uStack_37);
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
        FUN_ram_4003e072(uStack_3c,puVar6,iVar2,param_3);
        FUN_ram_4003e0ea();
        iVar2 = (**(code **)(param_1 + 0x30))
                          (iVar5,&uStack_38,iVar2 + 2,0,0,*(code **)(param_1 + 0x30));
        FUN_ram_4003e10e();
        if ((iVar2 != 0) || (iVar2 = FUN_ram_4005ad60(param_1,500), iVar2 != 0))
        goto LAB_ram_4005b310;
        param_4 = param_4 + 2;
        bVar3 = false;
      }
      iVar4 = FUN_ram_4005af24(param_1,0);
      iVar2 = iVar4;
      if ((iVar4 == 0) &&
         ((param_3 != 1 || (iVar2 = FUN_ram_4005b116(param_1,puVar6,1,1,param_4), iVar2 == 0))))
      goto LAB_ram_4005b318;
    }
  }
  else {
    iVar2 = FUN_ram_4005b116(param_1,param_2,1,1,param_4);
    if (iVar2 == 0) {
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 - 1;
      goto LAB_ram_4005b2ca;
    }
  }
LAB_ram_4005b310:
  FUN_ram_4005af24(param_1,0);
  iVar4 = iVar2;
LAB_ram_4005b318:
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar5);
  }
  return iVar4;
}


/* NanoCore 1.12, address 0x4005b3bc.
 * REA evidence: ev_f015ca9a1c2ebd961d6e12dd69ec7785320c2355650b3831865a8dbff8c5bad0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b3bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005b004();
  if (iVar1 == 0) {
    FUN_ram_4005b23e(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005b3ea.
 * REA evidence: ev_9e7d2e06d98d39e53ce5fdcbc54a2c151d5a684f82b5e4819168c5787644acf9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b3ea(int param_1,undefined4 param_2)

{
  undefined1 auStack_11 [13];
  
  auStack_11[0] = 0x35;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,auStack_11,1,param_2,1,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.12, address 0x4005b40e.
 * REA evidence: ev_5aeb6e1ba7848585a7047c1b5113b395476774f61236aaf755bc0cf0e4a5a4c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b40e(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (param_2 == 0) {
    iVar1 = FUN_ram_4005af24(param_1,1);
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
      FUN_ram_4005ad60(param_1,3000);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4005b474.
 * REA evidence: ev_7b25990215db05c51db70e92fa277136072e031292eb06f3575c96ed5cc03b04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b474(int param_1)

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
  
  iVar5 = FUN_ram_40042e34();
  if (iVar5 != 0) goto LAB_ram_4005b51a;
  iVar11 = param_1 + 0x20;
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
    uVar7 = *(uint *)(param_1 + 0x98);
    if (25000000 < *(uint *)(param_1 + 0x98)) {
      uVar7 = 25000000;
    }
    (**(code **)(param_1 + 0x24))(iVar11,uVar7);
  }
  *(undefined1 *)(param_1 + 0x54) = 3;
  *(code **)(param_1 + 0x60) = FUN_ram_4005b9c4;
  uStack_24 = 0x66;
  iVar5 = (**(code **)(param_1 + 0x30))(iVar11,&uStack_24,1,0,0,*(code **)(param_1 + 0x30));
  if (iVar5 != 0) goto LAB_ram_4005b51a;
  auStack_23[0] = 0x99;
  iVar5 = (**(code **)(param_1 + 0x30))(iVar11,auStack_23,1,0,0,*(code **)(param_1 + 0x30));
  FUN_ram_4004004c(300);
  if (iVar5 != 0) goto LAB_ram_4005b51a;
  if ((((*(int *)(param_1 + 0x10) == 0) || (*(short *)(param_1 + 0x14) == 0)) ||
      (*(int *)(param_1 + 0x18) == 0)) || (*(char *)(param_1 + 0x1c) == '\0')) {
    iVar5 = FUN_ram_4005aaf2(param_1);
    if (iVar5 != 0) goto LAB_ram_4005b51a;
    if ((*(short *)(param_1 + 0xc) == 0x28c2) && (*(char *)(param_1 + 0xe) == '\x17')) {
      if (25000000 < *(uint *)(param_1 + 0x9c)) {
        *(undefined4 *)(param_1 + 0x9c) = 25000000;
      }
      if (*(code **)(param_1 + 0x24) != (code *)0x0) {
        (**(code **)(param_1 + 0x24))(iVar11,*(undefined4 *)(param_1 + 0x9c));
      }
    }
    iVar5 = FUN_ram_4005bcb4(param_1);
    if (iVar5 == 0) {
      ppuVar10 = &PTR_s_AT45DB161E_ram_4009ea0c_ram_4009eb78;
      iVar5 = 0;
      do {
        if (((*(char *)(ppuVar10 + 1) == *(char *)(param_1 + 0xc)) &&
            (*(char *)((int)ppuVar10 + 5) == *(char *)(param_1 + 0xd))) &&
           (*(char *)((int)ppuVar10 + 6) == *(char *)(param_1 + 0xe))) {
          iVar6 = iVar5 * 0x18;
          *(undefined **)(param_1 + 8) = (&PTR_s_AT45DB161E_ram_4009ea0c_ram_4009eb78)[iVar5 * 6];
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&DAT_ram_4009eb80 + iVar6);
          *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(&DAT_ram_4009eb84 + iVar6);
          uVar1 = (&DAT_ram_4009eb8c)[iVar6];
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(&DAT_ram_4009eb88 + iVar6);
          *(undefined1 *)(param_1 + 0x1c) = uVar1;
          break;
        }
        iVar5 = iVar5 + 1;
        ppuVar10 = ppuVar10 + 6;
      } while (iVar5 != 0x20);
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
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_ram_4005b510;
  }
  else {
LAB_ram_4005b510:
    if (((*(ushort *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
       (*(char *)(param_1 + 0x1c) != '\0')) {
      if ((((*(ushort *)(param_1 + 0x14) & 4) == 0) &&
          ((*(uint *)(param_1 + 0xc) & 0xffffff) != 0x1620c2)) ||
         (iVar5 = FUN_ram_4005b40e(param_1,1,0), iVar5 == 0)) {
        if (*(uint *)(param_1 + 0x10) < 0x1000001) {
          *(undefined1 *)(param_1 + 0x45) = 0;
        }
        else {
          iVar5 = FUN_ram_4005af24(param_1,1);
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
          iVar6 = FUN_ram_4005aaf2(param_1);
          if ((iVar6 != 0) ||
             (((*(char *)(param_1 + 0xc) == cVar2 && (*(char *)(param_1 + 0xd) == cVar3)) &&
              (*(char *)(param_1 + 0xe) == cVar4)))) break;
          if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
            (**(code **)(param_1 + 0x2c))(iVar11,iVar5);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = FUN_ram_4005bb44(param_1);
        if (iVar5 == 0) {
          if ((*(short *)(param_1 + 0xc) != 0x28c2) || (*(char *)(param_1 + 0xe) != '\x17')) {
            (**(code **)(param_1 + 0x60))(param_1);
          }
          *(code **)(param_1 + 0xa0) = FUN_ram_4005ba86;
          *(undefined1 *)(param_1 + 0x44) = 1;
          iVar5 = (**(code **)(param_1 + 0x28))(iVar11,&uStack_24);
          if (iVar5 == 0) {
            iVar5 = FUN_ram_4003e03e();
            if (iVar5 == 0) {
              return 0;
            }
            *(undefined1 *)(param_1 + 0x44) = 0;
            return -1;
          }
        }
      }
      goto LAB_ram_4005b51a;
    }
  }
  iVar5 = 1;
LAB_ram_4005b51a:
  *(undefined1 *)(param_1 + 0x44) = 0;
  return iVar5;
}


/* NanoCore 1.12, address 0x4005b742.
 * REA evidence: ev_454f6c728db0d2c5333d5cede1ba8dde46baaa092ee932f526b9f9f56eda021c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b742(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  iVar1 = FUN_ram_4005af24(param_1,1);
  if (iVar1 == 0) {
    uStack_14 = 1;
    uStack_13 = *param_2;
    uStack_12 = param_2[1];
    iVar1 = (**(code **)(param_1 + 0x30))
                      (param_1 + 0x20,&uStack_14,3,0,0,*(code **)(param_1 + 0x30));
    if (iVar1 == 0) {
      FUN_ram_4005ad60(param_1,3000);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4005b794.
 * REA evidence: ev_b398a8986c6608ea301c0c56a9d0b4f5683035a93990ad8dc5d337be4bae1e86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b794(int param_1,undefined1 param_2,undefined1 *param_3)

{
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  uStack_13 = *param_3;
  uStack_14 = param_2;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,&uStack_14,2,0,0,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.12, address 0x4005b7ba.
 * REA evidence: ev_010840fb382b547ec5a6eff1d28b292338ff8950c6fca7a31510c4d094416d99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b7ba(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005b794(param_1,0x31,param_2);
  if (iVar1 == 0) {
    FUN_ram_4005ad60(param_1,3000);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005b7e8.
 * REA evidence: ev_1fcc3e8ff948f6e4a3f4fc8dc7280828a7dfb21c009ba9c31312adedbb8670ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b7e8(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 auStack_11 [13];
  
  auStack_11[0] = param_2;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,auStack_11,1,param_3,1,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.12, address 0x4005b808.
 * REA evidence: ev_95b78a90b2df87e038c5388b8e350bc44d3d454943ab63f7a8d7984bf3afa8a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005b808(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x20;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(iVar2);
  }
  FUN_ram_4000303c(0x30080e80,param_2,5);
  iVar1 = (**(code **)(param_1 + 0x30))
                    (iVar2,0x30080e80,5,0x30080e85,param_3,*(code **)(param_1 + 0x30));
  FUN_ram_4000303c(param_4,0x30080e85,8);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar2);
  }
  if (iVar1 != 0) {
    param_3 = 0xffffffff;
  }
  return param_3;
}


/* NanoCore 1.12, address 0x4005b886.
 * REA evidence: ev_864d7f6f78bdf8b51be47190ee0241e0cd0ba5fa9fc46dc433f24395538e9907
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b886(int param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char acStack_21 [13];
  byte bStack_14;
  char acStack_13 [3];
  
  acStack_21[0] = param_2;
  iVar2 = FUN_ram_4005ad3e(param_1,&bStack_14);
  if (iVar2 == 0) {
    acStack_13[0] = acStack_21[0];
    iVar2 = FUN_ram_4005b742(param_1,&bStack_14);
    bVar1 = bStack_14;
    if ((iVar2 == 0) && (iVar3 = FUN_ram_4005ad3e(param_1,&bStack_14), iVar2 = iVar3, iVar3 == 0)) {
      if ((bVar1 & 0xfc) == (bStack_14 & 0xfc)) {
        if ((((*(uint *)(param_1 + 0x5c) & 0x400) == 0) &&
            (iVar2 = FUN_ram_4005b3ea(param_1,acStack_13), iVar2 == 0)) &&
           (iVar2 = iVar3, acStack_13[0] != acStack_21[0])) {
          FUN_ram_4005b7ba(param_1,acStack_21);
          FUN_ram_4005b3ea(param_1,acStack_13);
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


/* NanoCore 1.12, address 0x4005b930.
 * REA evidence: ev_c59648ce32a8a518ec1c99178cc661b9c09fb04a4bc23c1da77cb164002371fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b930(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte bStack_12;
  byte abStack_11 [5];
  
  iVar2 = FUN_ram_4005ad3e(param_1,&bStack_12);
  if (iVar2 == 0) {
    if ((bStack_12 & 0x40) == 0) {
      bVar1 = bStack_12 | 0x40;
      bStack_12 = bVar1;
      iVar2 = FUN_ram_4005b40e(param_1,1,bVar1);
      if ((iVar2 == 0) && (iVar2 = FUN_ram_4005ad3e(param_1,abStack_11), iVar2 == 0)) {
        iVar2 = -(uint)(abStack_11[0] != bVar1);
      }
    }
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x4005b986.
 * REA evidence: ev_376ff21ed3c5ec194148c5ce3b7176d4e3f10d5f23cc24e60c5b9db805411582
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b986(int param_1)

{
  int iVar1;
  byte abStack_14 [12];
  
  if ((*(uint *)(param_1 + 0x5c) & 0x400) != 0) {
    FUN_ram_4005b886(param_1,2);
    return;
  }
  iVar1 = FUN_ram_4005b3ea(param_1,abStack_14);
  if (iVar1 == 0) {
    if ((abStack_14[0] & 2) == 0) {
      abStack_14[0] = abStack_14[0] | 2;
      FUN_ram_4005b886(param_1);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4005b9c4.
 * REA evidence: ev_dc4b0a46265fecdadac6d8ef6ecf4ea8e12b5f29156f4f9bc9959772d5a3d897
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4005b9c4(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  byte abStack_21 [13];
  
  pcVar5 = &DAT_ram_4009eec8;
  abStack_21[0] = 0;
  iVar4 = 0;
  while (((*pcVar5 != *(char *)(param_1 + 0xc) || (pcVar5[1] != *(char *)(param_1 + 0xd))) ||
         (pcVar5[2] != *(char *)(param_1 + 0xe)))) {
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 6;
    if (iVar4 == 5) {
      FUN_ram_4005b986(param_1);
      return 0;
    }
  }
  iVar4 = iVar4 * 6;
  uVar1 = (&DAT_ram_4009eecc)[iVar4];
  bVar2 = (&DAT_ram_4009eecd)[iVar4];
  uVar3 = (&DAT_ram_4009eecb)[iVar4];
  FUN_ram_4005af24(param_1,1);
  FUN_ram_4005b7e8(param_1,uVar1,abStack_21);
  abStack_21[0] = (byte)(1 << (bVar2 & 0x1f)) | abStack_21[0];
  FUN_ram_4005b794(param_1,uVar3,abStack_21);
  FUN_ram_4005b7e8(param_1,uVar1,abStack_21);
  return ~(abStack_21[0] >> (bVar2 & 0x1f)) & 1;
}


/* NanoCore 1.12, address 0x4005ba86.
 * REA evidence: ev_39d0b44ad1d5b0c473457e03d8b6e6c1b918bb8a73c3167eaf7e94a9bd0fe68b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005ba86(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char *pcVar5;
  int iVar6;
  
  puVar2 = (undefined1 *)FUN_ram_40002f1a(5);
  if (puVar2 == (undefined1 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    memset(puVar2 + 1,0xff,4);
    cVar1 = *(char *)(param_1 + 0xc);
    pcVar5 = &DAT_ram_4009eee8;
    *puVar2 = 0x4b;
    iVar6 = 0;
    do {
      if (((*pcVar5 == cVar1) && (pcVar5[1] == *(char *)(param_1 + 0xd))) &&
         (pcVar5[2] == *(char *)(param_1 + 0xe))) {
        iVar6 = iVar6 * 0x10;
        uVar4 = (&DAT_ram_4009eef0)[iVar6];
        *puVar2 = (&DAT_ram_4009eeeb)[iVar6];
        puVar2[1] = (&DAT_ram_4009eeec)[iVar6];
        puVar2[2] = (&DAT_ram_4009eeed)[iVar6];
        puVar2[3] = (&DAT_ram_4009eeee)[iVar6];
        puVar2[4] = (&DAT_ram_4009eeef)[iVar6];
        goto LAB_ram_4005bb14;
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x10;
    } while (iVar6 != 0x13);
    uVar4 = 0x10;
LAB_ram_4005bb14:
    uVar3 = FUN_ram_4005b808(param_1,puVar2,uVar4,param_2);
    FUN_ram_40002f28(puVar2);
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4005bb44.
 * REA evidence: ev_0d3248481d7129e331aad0dd0fcbc740a8e1042953df017cbdd8017465ad5322
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005bb44(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  byte bStack_25;
  byte bStack_24;
  byte abStack_23 [15];
  
  if ((*(short *)(param_1 + 0xc) != 0x28c2) || (uVar3 = 0x3c, *(char *)(param_1 + 0xe) != '\x17')) {
    pcVar2 = &DAT_ram_4009eee8;
    do {
      if (((*pcVar2 == *(char *)(param_1 + 0xc)) && (pcVar2[1] == *(char *)(param_1 + 0xd))) &&
         (pcVar2[2] == *(char *)(param_1 + 0xe))) break;
      pcVar2 = pcVar2 + 0x10;
    } while (pcVar2 != (char *)&DAT_ram_4009f018);
    uVar3 = 0x1c;
  }
  *(char *)(param_1 + 0xa4) = (char)uVar3;
  FUN_ram_4005ad3e(param_1,&bStack_25);
  if ((bStack_25 & uVar3) == 0) {
    return 0;
  }
  uVar3 = ~uVar3 & (uint)bStack_25;
  bStack_25 = (byte)uVar3;
  if ((*(uint *)(param_1 + 0x5c) & 0x200) == 0) {
    iVar1 = FUN_ram_4005b40e(param_1,0,uVar3);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4005ad3e(param_1,&bStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = bStack_24 - uVar3;
  }
  else {
    bStack_24 = bStack_25;
    if ((*(uint *)(param_1 + 0x5c) & 0x400) == 0) {
      iVar1 = FUN_ram_4005b3ea(param_1,abStack_23);
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
    iVar1 = FUN_ram_4005b742(param_1,&bStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar4 = (uint)abStack_23[0];
    FUN_ram_4005ad3e(param_1,&bStack_24);
    if (bStack_24 != uVar3) {
      return -1;
    }
    if ((*(uint *)(param_1 + 0x5c) & 0x400) != 0) {
      return 0;
    }
    FUN_ram_4005b3ea(param_1,abStack_23);
    iVar1 = abStack_23[0] - uVar4;
  }
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.12, address 0x4005bc7c.
 * REA evidence: ev_a4cce33752165778675fdc6198f9b919fecb8107894ff6d9b519118a3c085f7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005bc7c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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


/* NanoCore 1.12, address 0x4005bcb4.
 * REA evidence: ev_1ed0ac7ea27083689e4887587c9b5e105842a0e265c92dd8beba87ae145aedc8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005bcb4(int param_1)

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
  iVar2 = FUN_ram_4005bc7c(param_1,0,&uStack_a8,8);
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
  iVar2 = FUN_ram_4005bc7c(param_1,8,&uStack_a8,8);
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
  iVar2 = FUN_ram_4005bc7c(param_1,uStack_a4 & 0xff |
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
LAB_ram_4005bef6:
    *(undefined **)(param_1 + 0x6e) = puVar10;
  }
  else {
    if (uVar13 == 2) {
      puVar10 = (undefined *)0x100;
      goto LAB_ram_4005bef6;
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
  if (uVar1 < 0x10) goto LAB_ram_4005bed2;
  uStack_68 = uStack_68 & 0x700000;
  if (uStack_68 == 0x200000) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffdff;
    pcVar12 = FUN_ram_4005b930;
  }
  else {
    if (uStack_68 < 0x200001) {
      if (uStack_68 == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        goto LAB_ram_4005bed2;
      }
      if (uStack_68 != 0x100000) goto LAB_ram_4005bed2;
    }
    else if (uStack_68 != 0x400000) {
      if (uStack_68 != 0x500000) goto LAB_ram_4005bed2;
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x200;
      pcVar12 = FUN_ram_4005b986;
      goto LAB_ram_4005bf92;
    }
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x600;
    pcVar12 = FUN_ram_4005b9c4;
  }
LAB_ram_4005bf92:
  *(code **)(param_1 + 0x60) = pcVar12;
LAB_ram_4005bed2:
  *(undefined1 *)(param_1 + 100) = 1;
  return 1;
}


/* NanoCore 1.12, address 0x4005bfa8.
 * REA evidence: ev_fb33fefa3f3887c7e9ede111924b1b246e2658692c4062d221a55e614ce68752
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005bfa8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_2;
  if (*(uint *)(param_1 + 0x74) != 0) {
    uVar1 = param_2 % *(uint *)(param_1 + 0x74);
  }
  if (uVar1 != 0) {
    return 0;
  }
  iVar3 = 3;
  do {
    uVar1 = *(uint *)(param_1 + 0x74 + iVar3 * 8);
    if ((uVar1 != 0) && (uVar1 <= param_3)) {
      uVar2 = param_2;
      if (uVar1 != 0) {
        uVar2 = param_2 % uVar1;
      }
      if (uVar2 == 0) {
        return iVar3;
      }
    }
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = iVar3 + -1;
  } while( true );
}


/* NanoCore 1.12, address 0x4005bfd2.
 * REA evidence: ev_c4606bfaa6382752d6e2e549df0ad3ae8d49a1e16e3b32e28e7b02f311d21f3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005bfd2(ulonglong param_1,ulonglong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  float in_register_00000100;
  float fVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar12 = DAT_ram_4009f030;
  fVar11 = DAT_ram_4009f02c;
  fVar14 = DAT_ram_4009f028;
  fVar13 = DAT_ram_4009f024;
  fVar23 = DAT_ram_4009672c;
  if (param_2 != (ulonglong *)0x0) {
    fVar15 = (float)param_1;
    fVar21 = fVar23;
    if (fVar15 <= 0.0) {
      uVar10 = (ulonglong)DAT_ram_4009f018;
      uVar17 = (ulonglong)DAT_ram_4009f01c;
      uVar20 = (ulonglong)DAT_ram_4009f020;
      *param_2 = (ulonglong)DAT_ram_4009678c;
      *(undefined4 *)(param_2 + 0xb) = 0;
      *(undefined4 *)((int)param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((int)param_2 + 0x1c) = 0;
      *(undefined4 *)((int)param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      *(undefined4 *)(param_2 + 10) = 0;
      *(undefined4 *)((int)param_2 + 0x54) = 0;
      uVar18 = uVar17;
      uVar19 = uVar10;
      fVar15 = fVar12;
      fVar22 = fVar11;
    }
    else {
      *param_2 = param_1;
      *(undefined4 *)(param_2 + 0xb) = 0;
      *(undefined4 *)((int)param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((int)param_2 + 0x1c) = 0;
      *(undefined4 *)((int)param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      *(undefined4 *)(param_2 + 10) = 0;
      *(undefined4 *)((int)param_2 + 0x54) = 0;
      if (fVar23 <= fVar15) {
        fVar12 = DAT_ram_4009f04c / fVar15;
        fVar11 = (float)FUN_ram_400009d2(fVar12);
        fVar12 = (float)FUN_ram_40000712(fVar12);
        puVar8 = PTR_entry_ram_40096740;
        fVar11 = fVar11 / DAT_ram_4009f050;
        fVar14 = fVar12 * 0.0 + (float)PTR_entry_ram_40096740;
        fVar4 = -(fVar12 * 0.0) + (float)PTR_entry_ram_40096740;
        fVar5 = -(fVar12 * (float)PTR_entry_ram_40096740) + 0.0;
        fVar15 = DAT_ram_4009f054 / fVar15;
        fVar2 = fVar11 * (float)PTR_entry_ram_40096740;
        fVar3 = fVar11 * (float)PTR_entry_ram_40096740;
        fVar22 = fVar23 / (fVar11 * (float)PTR_entry_ram_40096740 + fVar14);
        fVar12 = (fVar12 * (float)PTR_entry_ram_40096740 + 0.0) * DAT_ram_40096744 * fVar22;
        fVar11 = (-(fVar11 * (float)PTR_entry_ram_40096740) + fVar14) * fVar22;
        fVar9 = in_register_00000100;
        fVar13 = (float)FUN_ram_400009d2(fVar15);
        fVar14 = (float)FUN_ram_40000712(fVar15);
        fVar21 = fVar13 / DAT_ram_4009f058 + fVar23;
        fVar1 = fVar23 / fVar21;
        fVar14 = fVar14 * in_register_00000100 * fVar1;
        fVar13 = (fVar23 - fVar13 / DAT_ram_4009f058) * fVar1;
        fVar15 = (float)FUN_ram_400009d2(fVar9);
        fVar16 = (float)FUN_ram_40000712(fVar9);
        fVar6 = -(fVar16 * 0.0) + (float)puVar8;
        fVar9 = fVar16 * 0.0 + (float)puVar8;
        fVar15 = fVar15 / in_register_00000100;
        fVar7 = -(fVar16 * (float)puVar8) + 0.0;
        fVar23 = fVar23 / (fVar15 * (float)puVar8 + fVar6);
        uVar20 = (ulonglong)(uint)((fVar15 * (float)puVar8 + fVar9) * fVar23);
        uVar17 = (ulonglong)(uint)((fVar7 + fVar7) * fVar23);
        uVar10 = (ulonglong)(uint)((-(fVar15 * (float)puVar8) + fVar6) * fVar23);
        uVar18 = (ulonglong)(uint)((fVar16 * (float)puVar8 + 0.0) * in_register_00000100 * fVar23);
        uVar19 = (ulonglong)(uint)((-(fVar15 * (float)puVar8) + fVar9) * fVar23);
        fVar23 = (fVar2 + fVar4) * fVar22;
        fVar15 = (fVar5 + fVar5) * fVar22;
        fVar22 = (-fVar3 + fVar4) * fVar22;
        fVar21 = fVar21 * fVar1;
      }
      else {
        uVar20 = (ulonglong)(uint)fVar23;
        uVar17 = (ulonglong)DAT_ram_4009f038;
        uVar10 = (ulonglong)DAT_ram_4009f034;
        uVar18 = uVar17;
        uVar19 = uVar10;
        fVar11 = DAT_ram_4009f044;
        fVar12 = DAT_ram_4009f048;
        fVar13 = DAT_ram_4009f03c;
        fVar14 = DAT_ram_4009f040;
        fVar15 = DAT_ram_4009f048;
        fVar22 = DAT_ram_4009f044;
      }
    }
    *(float *)((int)param_2 + 4) = fVar23;
    *(float *)(param_2 + 1) = fVar15;
    *(float *)((int)param_2 + 0xc) = fVar22;
    *(float *)(param_2 + 2) = fVar12;
    *(float *)((int)param_2 + 0x14) = fVar11;
    *(float *)(param_2 + 4) = fVar21;
    *(float *)((int)param_2 + 0x24) = fVar14;
    *(float *)(param_2 + 5) = fVar13;
    *(float *)((int)param_2 + 0x2c) = fVar14;
    *(float *)(param_2 + 6) = fVar13;
    *(ulonglong *)((int)param_2 + 0x4c) = uVar10;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar20;
    param_2[8] = uVar18;
    *(ulonglong *)((int)param_2 + 0x44) = uVar19;
    param_2[9] = uVar17;
    return;
  }
  return;
}


