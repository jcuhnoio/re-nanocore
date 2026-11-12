/* NanoCore 1.12: FUN_ram_40087bc0 at 0x40087bc0.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_173928f86aa53864ea25f6ba34b3440dae7fdcb09dc42d2f7dd60f4025549d06
 * Source: analysis/rea-1.12-effects/results/03632-export-0x40087bc0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_40087bc0(int *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  code *pcVar13;
  uint *puVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  
  puVar3 = (undefined4 *)*param_1;
  uVar12 = param_1[2];
  *param_2 = (int)puVar3;
  if (uVar12 < 2) {
    *(undefined1 *)(param_1 + 3) = 1;
LAB_ram_40087ca4:
    param_2[1] = 0;
    param_2[2] = 0;
    return 0;
  }
  uVar18 = (uint)*(ushort *)param_1[1];
  param_1[1] = (int)((ushort *)param_1[1] + 1);
  param_1[2] = uVar12 - 2;
  if (uVar18 == 0) goto LAB_ram_40087ca4;
  iVar8 = uVar18 * 0x1c + 0x10;
  if (puVar3 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_ram_40002f1a(iVar8);
    if (puVar5 == (undefined4 *)0x0) {
      return 0xfffffffd;
    }
    *puVar5 = FUN_ram_4008561e;
    uVar4 = 0;
    goto LAB_ram_40087c3a;
  }
  if ((code *)puVar3[1] == (code *)0x0) {
    puVar5 = (undefined4 *)FUN_ram_40002f1a(iVar8);
    if (puVar5 == (undefined4 *)0x0) {
      return 0xfffffffd;
    }
LAB_ram_40087cda:
    pcVar13 = FUN_ram_4008561e;
  }
  else {
    puVar5 = (undefined4 *)(*(code *)puVar3[1])(*puVar3);
    if (puVar5 == (undefined4 *)0x0) {
      return 0xfffffffd;
    }
    if (puVar3[1] == 0) goto LAB_ram_40087cda;
    pcVar13 = (code *)puVar3[2];
  }
  uVar4 = *puVar3;
  *puVar5 = pcVar13;
LAB_ram_40087c3a:
  puVar16 = puVar5 + 4;
  puVar5[1] = uVar4;
  memset(puVar16,0,uVar18 * 0x1c);
  uVar12 = 0;
  puVar14 = puVar16;
  do {
    iVar8 = param_1[2];
    if (iVar8 == 0) {
      puVar3 = (undefined4 *)*param_1;
      *puVar14 = 0;
      *(undefined2 *)(puVar14 + 2) = 0;
      goto LAB_ram_40087cf0;
    }
    pbVar11 = (byte *)param_1[1];
    uVar9 = iVar8 - 1;
    uVar10 = (uint)*pbVar11;
    param_1[2] = uVar9;
    param_1[1] = (int)(pbVar11 + 1);
    *puVar14 = uVar10;
    if (uVar10 == 0) {
      puVar3 = (undefined4 *)*param_1;
      if (1 < uVar9) {
        uVar1 = *(ushort *)(pbVar11 + 1);
        param_1[1] = (int)(pbVar11 + 3);
        param_1[2] = iVar8 - 3U;
        *(ushort *)(puVar14 + 2) = uVar1;
        if (iVar8 - 3U < 2) goto LAB_ram_40087cf0;
        uVar9 = iVar8 - 5;
        uVar2 = *(ushort *)param_1[1];
        param_1[1] = (int)((ushort *)param_1[1] + 1);
        param_1[2] = uVar9;
        uVar10 = (uint)uVar1 * (uint)uVar2;
        *(ushort *)((int)puVar14 + 10) = uVar2;
        if (uVar10 == 0) goto LAB_ram_40087cf8;
        uVar17 = uVar10 * 4;
        if (uVar17 - 1 < 0xffffffef) {
          if (puVar3 != (undefined4 *)0x0) {
            if ((code *)puVar3[1] == (code *)0x0) {
              puVar6 = (undefined4 *)FUN_ram_40002f1a(uVar17 + 0x10);
              if (puVar6 != (undefined4 *)0x0) {
                pcVar13 = FUN_ram_4008561e;
                goto LAB_ram_40087e12;
              }
            }
            else {
              puVar6 = (undefined4 *)(*(code *)puVar3[1])(*puVar3);
              if (puVar6 != (undefined4 *)0x0) {
                uVar9 = param_1[2];
                if (puVar3[1] == 0) {
                  pcVar13 = FUN_ram_4008561e;
                }
                else {
                  pcVar13 = (code *)puVar3[2];
                }
LAB_ram_40087e12:
                uVar4 = *puVar3;
                *puVar6 = pcVar13;
                goto LAB_ram_40087e18;
              }
            }
            goto LAB_ram_40087f74;
          }
          puVar6 = (undefined4 *)FUN_ram_40002f1a(uVar17 + 0x10);
          if (puVar6 == (undefined4 *)0x0) goto LAB_ram_40087f74;
          *puVar6 = FUN_ram_4008561e;
          uVar4 = 0;
LAB_ram_40087e18:
          puVar6[1] = uVar4;
          if (uVar9 < uVar17) {
            *(undefined1 *)(param_1 + 3) = 1;
            memset(puVar6 + 4,0,uVar17);
            uVar15 = 0xfffffffe;
            pcVar13 = (code *)*puVar6;
            param_1[2] = 0;
            (*pcVar13)(uVar4,puVar6);
            goto LAB_ram_40087ea2;
          }
          uVar7 = FUN_ram_4000303c(puVar6 + 4,param_1[1],uVar17);
          param_1[2] = param_1[2] + uVar10 * -4;
          param_1[1] = param_1[1] + uVar17;
          puVar14[4] = uVar10;
          uVar9 = param_1[2];
          puVar14[3] = uVar7;
          goto joined_r0x40087e46;
        }
LAB_ram_40087f74:
        uVar15 = 0xfffffffd;
LAB_ram_40087ea2:
        uVar9 = DAT_ram_4009f290;
        uVar18 = 0;
        do {
          if (puVar16[uVar18 * 7] == 0) {
            uVar10 = puVar16[uVar18 * 7 + 3];
            if (uVar10 != 0) {
              (**(code **)(uVar10 - 0x10))(*(undefined4 *)(uVar10 - 0xc),uVar10 - 0x10);
              puVar16[uVar18 * 7 + 3] = 0;
            }
            uVar10 = puVar16[uVar18 * 7 + 5];
            puVar16[uVar18 * 7 + 4] = 0;
            if (uVar10 != 0) {
              (**(code **)(uVar10 - 0x10))(*(undefined4 *)(uVar10 - 0xc),uVar10 - 0x10);
              puVar16[uVar18 * 7 + 5] = 0;
            }
            puVar16[uVar18 * 7 + 6] = 0;
            puVar16[uVar18 * 7 + 2] = uVar9;
          }
          uVar18 = uVar18 + 1 & 0xffff;
        } while (uVar18 <= uVar12);
        (*(code *)*puVar5)(puVar5[1],puVar5);
        return uVar15;
      }
      *(undefined2 *)(puVar14 + 2) = 0;
LAB_ram_40087cf0:
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined2 *)((int)puVar14 + 10) = 0;
LAB_ram_40087cf8:
      puVar14[4] = 0;
      uVar9 = param_1[2];
      puVar14[3] = 0;
joined_r0x40087e46:
      if (uVar9 < 2) {
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        uVar9 = uVar9 - 2;
        uVar10 = (uint)*(ushort *)param_1[1];
        param_1[1] = (int)((ushort *)param_1[1] + 1);
        param_1[2] = uVar9;
        if (uVar10 != 0) {
          uVar17 = uVar10 * 4;
          if (puVar3 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_ram_40002f1a(uVar17 + 0x10);
            if (puVar6 == (undefined4 *)0x0) goto LAB_ram_40087f2a;
            *puVar6 = FUN_ram_4008561e;
            uVar4 = 0;
          }
          else {
            if ((code *)puVar3[1] == (code *)0x0) {
              puVar6 = (undefined4 *)FUN_ram_40002f1a(uVar17 + 0x10);
              if (puVar6 == (undefined4 *)0x0) goto LAB_ram_40087f2a;
              pcVar13 = FUN_ram_4008561e;
            }
            else {
              puVar6 = (undefined4 *)(*(code *)puVar3[1])(*puVar3);
              if (puVar6 == (undefined4 *)0x0) {
LAB_ram_40087f2a:
                uVar18 = puVar14[3];
                puVar14[5] = 0;
                if (uVar18 == 0) {
                  puVar14[4] = 0;
                }
                else {
                  (**(code **)(uVar18 - 0x10))(*(undefined4 *)(uVar18 - 0xc),uVar18 - 0x10);
                  uVar18 = puVar14[5];
                  puVar14[3] = 0;
                  puVar14[4] = 0;
                  if (uVar18 != 0) {
                    (**(code **)(uVar18 - 0x10))(*(undefined4 *)(uVar18 - 0xc),uVar18 - 0x10);
                    puVar14[5] = 0;
                  }
                }
                uVar18 = DAT_ram_4009f290;
                puVar14[6] = 0;
                puVar14[2] = uVar18;
                goto LAB_ram_40087f74;
              }
              uVar9 = param_1[2];
              if (puVar3[1] == 0) {
                pcVar13 = FUN_ram_4008561e;
              }
              else {
                pcVar13 = (code *)puVar3[2];
              }
            }
            uVar4 = *puVar3;
            *puVar6 = pcVar13;
          }
          puVar6[1] = uVar4;
          puVar6 = puVar6 + 4;
          puVar14[5] = (uint)puVar6;
          puVar14[6] = uVar10;
          if (uVar9 < uVar17) {
            *(undefined1 *)(param_1 + 3) = 1;
            memset(puVar6,0,uVar17);
            uVar18 = puVar14[3];
            param_1[2] = 0;
            if (uVar18 != 0) {
              (**(code **)(uVar18 - 0x10))(*(undefined4 *)(uVar18 - 0xc),uVar18 - 0x10);
              puVar14[3] = 0;
            }
            uVar18 = puVar14[5];
            puVar14[4] = 0;
            if (uVar18 != 0) {
              (**(code **)(uVar18 - 0x10))(*(undefined4 *)(uVar18 - 0xc),uVar18 - 0x10);
              puVar14[5] = 0;
            }
            uVar18 = DAT_ram_4009f290;
            puVar14[6] = 0;
            puVar14[2] = uVar18;
            uVar15 = 0xfffffffe;
            goto LAB_ram_40087ea2;
          }
          FUN_ram_4000303c(puVar6,param_1[1],uVar17);
          param_1[1] = param_1[1] + uVar17;
          param_1[2] = param_1[2] + uVar10 * -4;
        }
      }
    }
    else if (uVar10 == 1) {
      if (uVar9 < 4) {
        uVar9 = 0;
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        uVar9 = *(uint *)(pbVar11 + 1);
        param_1[1] = (int)(pbVar11 + 5);
        param_1[2] = iVar8 + -5;
      }
      puVar14[1] = uVar9;
    }
    uVar12 = uVar12 + 1 & 0xffff;
    puVar14 = puVar14 + 7;
    if (uVar12 == uVar18) {
      param_2[1] = (int)puVar16;
      param_2[2] = uVar12;
      return 0;
    }
  } while( true );
}

