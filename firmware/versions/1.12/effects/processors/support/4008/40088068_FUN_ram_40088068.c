/* NanoCore 1.12: FUN_ram_40088068 at 0x40088068.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_1e85dede10e82488a1d6b2310be990cc27db016d791d9394d059ec1b56c83517
 * Source: analysis/rea-1.12-effects/results/03633-export-0x40088068.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_40088068(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar7 = param_1[1];
  puVar3 = (undefined4 *)*param_2;
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))
              (*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10,param_3,param_4,*(code **)(iVar7 + -0x10)
              );
    param_1[1] = 0;
  }
  iVar7 = param_1[2];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[2] = 0;
  }
  iVar7 = param_1[3];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[3] = 0;
  }
  iVar7 = param_1[4];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[4] = 0;
  }
  iVar7 = param_1[8];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[8] = 0;
  }
  iVar7 = param_1[9];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[9] = 0;
  }
  iVar7 = param_1[10];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[10] = 0;
  }
  *param_1 = 0;
  uVar8 = (uint)*(ushort *)((int)param_2 + 6);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (uVar8 == 0) {
    return 0;
  }
  if (*(ushort *)(param_2 + 1) == 0) {
    return 0;
  }
  iVar5 = *(ushort *)(param_2 + 1) * uVar8;
  iVar12 = uVar8 * 0xc;
  iVar11 = iVar12 + 0x10;
  iVar7 = iVar5 * 0xc;
  iVar13 = uVar8 * uVar8 * 0xc;
  if (iVar7 - 1U < 0xffffffef) {
    iVar7 = iVar7 + 0x10;
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar7);
      if (puVar4 == (undefined4 *)0x0) goto LAB_ram_4008836a;
      *puVar4 = FUN_ram_4008561e;
      uVar9 = 0;
LAB_ram_400881a2:
      puVar4[1] = uVar9;
      puVar4 = puVar4 + 4;
      goto LAB_ram_400881a6;
    }
    if ((code *)puVar3[1] == (code *)0x0) {
      puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar7);
      if (puVar4 == (undefined4 *)0x0) goto LAB_ram_4008836a;
LAB_ram_400883e0:
      pcVar6 = FUN_ram_4008561e;
LAB_ram_4008819e:
      uVar9 = *puVar3;
      *puVar4 = pcVar6;
      goto LAB_ram_400881a2;
    }
    puVar4 = (undefined4 *)(*(code *)puVar3[1])(*puVar3);
    if (puVar4 != (undefined4 *)0x0) {
      if (puVar3[1] == 0) goto LAB_ram_400883e0;
      pcVar6 = (code *)puVar3[2];
      goto LAB_ram_4008819e;
    }
    param_1[1] = 0;
    if (iVar13 - 1U < 0xffffffef) goto LAB_ram_400881b6;
LAB_ram_400884ac:
    param_1[2] = 0;
LAB_ram_400881e0:
    if ((code *)puVar3[1] == (code *)0x0) {
      puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar11);
      if (puVar4 != (undefined4 *)0x0) goto LAB_ram_400881f0;
LAB_ram_40088384:
      pcVar10 = (code *)puVar3[1];
      param_1[3] = 0;
    }
    else {
      puVar4 = (undefined4 *)(*(code *)puVar3[1])(*puVar3,iVar11);
      if (puVar4 == (undefined4 *)0x0) goto LAB_ram_40088384;
LAB_ram_400881f0:
      pcVar10 = (code *)puVar3[1];
      pcVar6 = FUN_ram_4008561e;
      if (pcVar10 != (code *)0x0) {
        pcVar6 = (code *)puVar3[2];
      }
      uVar9 = *puVar3;
      *puVar4 = pcVar6;
      puVar4[1] = uVar9;
      param_1[3] = puVar4 + 4;
    }
    if (pcVar10 == (code *)0x0) {
      puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar11);
      if (puVar4 == (undefined4 *)0x0) goto LAB_ram_40088376;
LAB_ram_400883f4:
      pcVar6 = FUN_ram_4008561e;
LAB_ram_40088220:
      uVar9 = *puVar3;
      *puVar4 = pcVar6;
LAB_ram_40088224:
      puVar4[1] = uVar9;
      puVar4 = puVar4 + 4;
      goto LAB_ram_40088228;
    }
    puVar4 = (undefined4 *)(*pcVar10)(*puVar3,iVar11);
    if (puVar4 != (undefined4 *)0x0) {
      if (puVar3[1] == 0) goto LAB_ram_400883f4;
      pcVar6 = (code *)puVar3[2];
      goto LAB_ram_40088220;
    }
    uVar1 = *(ushort *)((int)param_2 + 6);
    param_1[4] = 0;
    iVar13 = (uint)uVar1 * 4;
    iVar7 = iVar13 + 0x10;
    if (uVar1 != 0) goto LAB_ram_4008823e;
LAB_ram_400884cc:
    pcVar6 = (code *)puVar3[1];
    param_1[8] = 0;
LAB_ram_40088278:
    if (pcVar6 == (code *)0x0) {
LAB_ram_400883b4:
      puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar11);
      uVar9 = 0;
      if (puVar4 != (undefined4 *)0x0) {
LAB_ram_400883c0:
        pcVar6 = FUN_ram_4008561e;
        goto LAB_ram_40088290;
      }
LAB_ram_400882a4:
      param_1[9] = uVar9;
      if (puVar3 == (undefined4 *)0x0) goto LAB_ram_40088474;
    }
    else {
      puVar4 = (undefined4 *)(*pcVar6)(*puVar3,iVar11);
      if (puVar4 != (undefined4 *)0x0) {
        if (puVar3[1] == 0) goto LAB_ram_400883c0;
        pcVar6 = (code *)puVar3[2];
LAB_ram_40088290:
        uVar9 = *puVar3;
        *puVar4 = pcVar6;
LAB_ram_40088294:
        puVar4[1] = uVar9;
        uVar9 = memset(puVar4 + 4,0,iVar12);
        goto LAB_ram_400882a4;
      }
      param_1[9] = 0;
    }
    if ((code *)puVar3[1] == (code *)0x0) {
      puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar11);
      if (puVar4 != (undefined4 *)0x0) {
LAB_ram_400883ea:
        pcVar6 = FUN_ram_4008561e;
        goto LAB_ram_400882c2;
      }
    }
    else {
      puVar4 = (undefined4 *)(*(code *)puVar3[1])(*puVar3,iVar11);
      if (puVar4 != (undefined4 *)0x0) {
        if (puVar3[1] == 0) goto LAB_ram_400883ea;
        pcVar6 = (code *)puVar3[2];
LAB_ram_400882c2:
        uVar9 = *puVar3;
        *puVar4 = pcVar6;
        goto LAB_ram_400882c6;
      }
    }
LAB_ram_400883a2:
    iVar7 = 0;
  }
  else {
LAB_ram_4008836a:
    puVar4 = (undefined4 *)0x0;
LAB_ram_400881a6:
    param_1[1] = puVar4;
    if (iVar13 - 1U < 0xffffffef) {
      if (puVar3 != (undefined4 *)0x0) {
LAB_ram_400881b6:
        if ((code *)puVar3[1] == (code *)0x0) {
          puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar13 + 0x10);
          if (puVar4 == (undefined4 *)0x0) goto LAB_ram_40088396;
        }
        else {
          puVar4 = (undefined4 *)(*(code *)puVar3[1])(*puVar3);
          if (puVar4 == (undefined4 *)0x0) goto LAB_ram_400884ac;
        }
        pcVar6 = FUN_ram_4008561e;
        if (puVar3[1] != 0) {
          pcVar6 = (code *)puVar3[2];
        }
        uVar9 = *puVar3;
        *puVar4 = pcVar6;
LAB_ram_400881d6:
        puVar4[1] = uVar9;
        puVar4 = puVar4 + 4;
        goto LAB_ram_400881da;
      }
      puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar13 + 0x10);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = FUN_ram_4008561e;
        uVar9 = 0;
        goto LAB_ram_400881d6;
      }
      param_1[2] = 0;
    }
    else {
LAB_ram_40088396:
      puVar4 = (undefined4 *)0x0;
LAB_ram_400881da:
      param_1[2] = puVar4;
      if (puVar3 != (undefined4 *)0x0) goto LAB_ram_400881e0;
    }
    puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar11);
    if (puVar4 == (undefined4 *)0x0) {
      param_1[3] = 0;
    }
    else {
      *puVar4 = FUN_ram_4008561e;
      puVar4[1] = 0;
      param_1[3] = puVar4 + 4;
    }
    puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar11);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = FUN_ram_4008561e;
      uVar9 = 0;
      goto LAB_ram_40088224;
    }
LAB_ram_40088376:
    puVar4 = (undefined4 *)0x0;
LAB_ram_40088228:
    uVar1 = *(ushort *)((int)param_2 + 6);
    param_1[4] = puVar4;
    if (uVar1 != 0) {
      iVar13 = (uint)uVar1 * 4;
      iVar7 = iVar13 + 0x10;
      if (puVar3 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar7);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = FUN_ram_4008561e;
          uVar9 = 0;
          goto LAB_ram_4008825e;
        }
        param_1[8] = 0;
        goto LAB_ram_40088408;
      }
LAB_ram_4008823e:
      if ((code *)puVar3[1] != (code *)0x0) {
        puVar4 = (undefined4 *)(*(code *)puVar3[1])(*puVar3);
        if (puVar4 == (undefined4 *)0x0) goto LAB_ram_400884cc;
LAB_ram_4008824c:
        pcVar6 = FUN_ram_4008561e;
        if (puVar3[1] != 0) {
          pcVar6 = (code *)puVar3[2];
        }
        uVar9 = *puVar3;
        *puVar4 = pcVar6;
LAB_ram_4008825e:
        puVar4[1] = uVar9;
        uVar9 = memset(puVar4 + 4,0,iVar13);
        goto LAB_ram_40088270;
      }
      puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar7);
      if (puVar4 != (undefined4 *)0x0) goto LAB_ram_4008824c;
      param_1[8] = 0;
      goto LAB_ram_400883b4;
    }
    uVar9 = 0;
LAB_ram_40088270:
    param_1[8] = uVar9;
    if (puVar3 != (undefined4 *)0x0) {
      pcVar6 = (code *)puVar3[1];
      goto LAB_ram_40088278;
    }
LAB_ram_40088408:
    puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar11);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = FUN_ram_4008561e;
      uVar9 = 0;
      goto LAB_ram_40088294;
    }
    param_1[9] = 0;
LAB_ram_40088474:
    puVar4 = (undefined4 *)FUN_ram_40002f1a(iVar11);
    if (puVar4 == (undefined4 *)0x0) goto LAB_ram_400883a2;
    *puVar4 = FUN_ram_4008561e;
    uVar9 = 0;
LAB_ram_400882c6:
    puVar4[1] = uVar9;
    iVar7 = memset(puVar4 + 4,0,iVar12);
  }
  iVar12 = param_1[1];
  param_1[10] = iVar7;
  iVar11 = param_1[2];
  if (iVar12 != 0) {
    if ((((iVar11 != 0) && (param_1[3] != 0)) && (param_1[4] != 0)) &&
       (((param_1[8] != 0 && (param_1[9] != 0)) && (iVar7 != 0)))) {
      FUN_ram_4000303c(iVar12,param_2[2],param_2[3] << 2);
      FUN_ram_4000303c(param_1[2],param_2[4],param_2[5] << 2);
      FUN_ram_4000303c(param_1[3],param_2[6],param_2[7] << 2);
      FUN_ram_4000303c(param_1[4],param_2[8],param_2[9] << 2);
      uVar2 = *(undefined2 *)((int)param_2 + 6);
      *(short *)param_1 = (short)param_2[1];
      *(undefined2 *)((int)param_1 + 2) = uVar2;
      param_1[5] = iVar5 * 3;
      param_1[6] = uVar8 * uVar8 * 3;
      param_1[7] = uVar8 * 3;
      return 0;
    }
    (**(code **)(iVar12 + -0x10))(*(undefined4 *)(iVar12 + -0xc),iVar12 + -0x10);
    iVar11 = param_1[2];
    param_1[1] = 0;
  }
  if (iVar11 != 0) {
    (**(code **)(iVar11 + -0x10))(*(undefined4 *)(iVar11 + -0xc),iVar11 + -0x10);
    param_1[2] = 0;
  }
  iVar7 = param_1[3];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[3] = 0;
  }
  iVar7 = param_1[4];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[4] = 0;
  }
  iVar7 = param_1[8];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[8] = 0;
  }
  iVar7 = param_1[9];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[9] = 0;
  }
  iVar7 = param_1[10];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + -0x10))(*(undefined4 *)(iVar7 + -0xc),iVar7 + -0x10);
    param_1[10] = 0;
  }
  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return 0xfffffffd;
}

