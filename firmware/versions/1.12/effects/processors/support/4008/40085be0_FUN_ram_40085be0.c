/* NanoCore 1.12: FUN_ram_40085be0 at 0x40085be0.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_84e8c569a7f3be3a0df26b59b087a3f63e39466c17ce85ad46e7a79273f00186
 * Source: analysis/rea-1.12-effects/results/03623-export-0x40085be0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40085be0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_a2;
  undefined4 extraout_a2_00;
  undefined4 extraout_a2_01;
  undefined4 extraout_a2_02;
  undefined4 extraout_a2_03;
  undefined4 extraout_a2_04;
  undefined4 extraout_a2_05;
  undefined4 extraout_a2_06;
  undefined4 extraout_a2_07;
  undefined4 extraout_a2_08;
  undefined4 extraout_a2_09;
  undefined4 extraout_a2_10;
  undefined4 extraout_a2_11;
  undefined4 extraout_a2_12;
  undefined4 extraout_a2_13;
  undefined4 extraout_a2_14;
  undefined4 extraout_a2_15;
  undefined4 extraout_a3;
  undefined4 extraout_a3_00;
  undefined4 extraout_a3_01;
  undefined4 extraout_a3_02;
  undefined4 extraout_a3_03;
  undefined4 extraout_a3_04;
  undefined4 extraout_a3_05;
  undefined4 extraout_a3_06;
  undefined4 extraout_a3_07;
  undefined4 extraout_a3_08;
  undefined4 extraout_a3_09;
  undefined4 extraout_a3_10;
  undefined4 extraout_a3_11;
  undefined4 extraout_a3_12;
  undefined4 extraout_a3_13;
  undefined4 extraout_a3_14;
  undefined4 extraout_a3_15;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = DAT_ram_4009f290;
  iVar3 = *(int *)(param_1 + 0x4c);
  if (iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x50);
    if (uVar4 != 0) {
      iVar5 = 0;
      uVar6 = 0;
      do {
        puVar2 = (undefined4 *)(iVar3 + iVar5);
        if (puVar2 != (undefined4 *)0x0) {
          iVar3 = *(int *)(iVar3 + iVar5);
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            *puVar2 = 0;
            param_3 = extraout_a2;
            param_4 = extraout_a3;
          }
          iVar3 = puVar2[2];
          puVar2[1] = 0;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            puVar2[2] = 0;
            param_3 = extraout_a2_00;
            param_4 = extraout_a3_00;
          }
          iVar3 = puVar2[6];
          puVar2[3] = 0;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            puVar2[6] = 0;
            param_3 = extraout_a2_01;
            param_4 = extraout_a3_01;
          }
          iVar3 = puVar2[8];
          puVar2[7] = 0;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            puVar2[8] = 0;
            param_3 = extraout_a2_02;
            param_4 = extraout_a3_02;
          }
          iVar3 = puVar2[10];
          puVar2[9] = 0;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            puVar2[10] = 0;
            param_3 = extraout_a2_03;
            param_4 = extraout_a3_03;
          }
          iVar3 = puVar2[0xc];
          puVar2[0xb] = 0;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            puVar2[0xc] = 0;
            param_3 = extraout_a2_04;
            param_4 = extraout_a3_04;
          }
          iVar3 = puVar2[0x11];
          puVar2[0xd] = 0;
          puVar2[5] = uVar1;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            puVar2[0x11] = 0;
            param_3 = extraout_a2_05;
            param_4 = extraout_a3_05;
          }
          uVar4 = *(uint *)(param_1 + 0x50);
          iVar3 = *(int *)(param_1 + 0x4c);
          *(undefined2 *)(puVar2 + 0xf) = 0;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x58;
      } while (uVar6 < uVar4);
      if (iVar3 == 0) goto LAB_ram_40085cdc;
    }
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    param_3 = extraout_a2_06;
    param_4 = extraout_a3_06;
  }
LAB_ram_40085cdc:
  iVar3 = *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar1 = DAT_ram_4009f290;
  if (iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x48);
    iVar5 = 0;
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        while( true ) {
          uVar6 = uVar6 + 1;
          iVar7 = iVar3 + iVar5;
          if (*(int *)(iVar3 + iVar5) != 0) break;
          iVar3 = *(int *)(iVar7 + 0xc);
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            *(undefined4 *)(iVar7 + 0xc) = 0;
            param_3 = extraout_a2_07;
            param_4 = extraout_a3_07;
          }
          iVar3 = *(int *)(iVar7 + 0x14);
          *(undefined4 *)(iVar7 + 0x10) = 0;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))
                      (*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10,param_3,param_4,
                       *(code **)(iVar3 + -0x10));
            *(undefined4 *)(iVar7 + 0x14) = 0;
            param_3 = extraout_a2_08;
            param_4 = extraout_a3_08;
          }
          uVar4 = *(uint *)(param_1 + 0x48);
          iVar3 = *(int *)(param_1 + 0x44);
          *(undefined4 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 8) = uVar1;
          iVar5 = iVar5 + 0x1c;
          if (uVar4 <= uVar6) goto LAB_ram_40085d52;
        }
        iVar5 = iVar5 + 0x1c;
      } while (uVar6 < uVar4);
LAB_ram_40085d52:
      if (iVar3 == 0) goto LAB_ram_40085d64;
    }
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x44) = 0;
    param_3 = extraout_a2_09;
    param_4 = extraout_a3_09;
  }
LAB_ram_40085d64:
  iVar3 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x58) = 0;
    param_3 = extraout_a2_10;
    param_4 = extraout_a3_10;
  }
  iVar3 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar1 = DAT_ram_4009f290;
  if (iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x68);
    iVar5 = 0;
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        while( true ) {
          uVar6 = uVar6 + 1;
          iVar7 = iVar3 + iVar5;
          if (*(int *)(iVar3 + iVar5) != 0) break;
          iVar3 = *(int *)(iVar7 + 0xc);
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            *(undefined4 *)(iVar7 + 0xc) = 0;
            param_3 = extraout_a2_11;
            param_4 = extraout_a3_11;
          }
          iVar3 = *(int *)(iVar7 + 0x14);
          *(undefined4 *)(iVar7 + 0x10) = 0;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))
                      (*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10,param_3,param_4,
                       *(code **)(iVar3 + -0x10));
            *(undefined4 *)(iVar7 + 0x14) = 0;
            param_3 = extraout_a2_12;
            param_4 = extraout_a3_12;
          }
          uVar4 = *(uint *)(param_1 + 0x68);
          iVar3 = *(int *)(param_1 + 100);
          *(undefined4 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 8) = uVar1;
          iVar5 = iVar5 + 0x1c;
          if (uVar4 <= uVar6) goto LAB_ram_40085df2;
        }
        iVar5 = iVar5 + 0x1c;
      } while (uVar6 < uVar4);
LAB_ram_40085df2:
      if (iVar3 == 0) goto LAB_ram_40085e04;
    }
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 100) = 0;
    param_3 = extraout_a2_13;
    param_4 = extraout_a3_13;
  }
LAB_ram_40085e04:
  iVar3 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar1 = DAT_ram_4009f290;
  if (iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 0xcc);
    iVar5 = 0;
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        while( true ) {
          uVar6 = uVar6 + 1;
          iVar7 = iVar3 + iVar5;
          if (*(int *)(iVar3 + iVar5) != 0) break;
          iVar3 = *(int *)(iVar7 + 0xc);
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
            *(undefined4 *)(iVar7 + 0xc) = 0;
            param_3 = extraout_a2_14;
            param_4 = extraout_a3_14;
          }
          iVar3 = *(int *)(iVar7 + 0x14);
          *(undefined4 *)(iVar7 + 0x10) = 0;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + -0x10))
                      (*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10,param_3,param_4,
                       *(code **)(iVar3 + -0x10));
            *(undefined4 *)(iVar7 + 0x14) = 0;
            param_3 = extraout_a2_15;
            param_4 = extraout_a3_15;
          }
          uVar4 = *(uint *)(param_1 + 0xcc);
          iVar3 = *(int *)(param_1 + 200);
          *(undefined4 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 8) = uVar1;
          iVar5 = iVar5 + 0x1c;
          if (uVar4 <= uVar6) goto LAB_ram_40085e82;
        }
        iVar5 = iVar5 + 0x1c;
      } while (uVar6 < uVar4);
LAB_ram_40085e82:
      if (iVar3 == 0) goto LAB_ram_40085e94;
    }
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 200) = 0;
  }
LAB_ram_40085e94:
  iVar3 = *(int *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  iVar3 = *(int *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  iVar3 = *(int *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xec) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  uVar1 = DAT_ram_4009f290;
  iVar3 = *(int *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x128);
  *(undefined2 *)(param_1 + 0x10c) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 300) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x14c) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x154) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  uVar1 = DAT_ram_4009f290;
  iVar3 = *(int *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x194);
  *(undefined2 *)(param_1 + 0x164) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x194) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x19c);
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x19c) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  uVar1 = DAT_ram_4009f290;
  iVar3 = *(int *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 400) = uVar1;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + -0x10))(*(undefined4 *)(iVar3 + -0xc),iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  *(undefined2 *)(param_1 + 0x1b8) = 0;
  return;
}

