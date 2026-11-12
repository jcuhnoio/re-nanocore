/* NanoCore 1.12: FUN_ram_40086fe8 at 0x40086fe8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_10366270eec2cc7933c095b8bb7ba2f684d26fad769255f44b96b2627efcbaa1
 * Source: analysis/rea-1.12-effects/results/03630-export-0x40086fe8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x400870ce) */
/* WARNING: Removing unreachable block (ram,0x4008719a) */

undefined4 FUN_ram_40086fe8(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar6 = (undefined4 *)*param_1;
  uVar4 = param_1[2];
  *param_2 = puVar6;
  uVar10 = 0;
  if (uVar4 < 2) {
LAB_ram_40087190:
    *(undefined1 *)(param_1 + 3) = 1;
    uVar11 = 0;
LAB_ram_40087198:
    param_2[3] = 0;
    uVar4 = param_1[2];
    param_2[2] = 0;
    *(ushort *)(param_2 + 1) = uVar11;
    *(short *)((int)param_2 + 6) = (short)(uVar10 / 3);
joined_r0x400871b2:
    if (uVar4 < 2) {
LAB_ram_400870ec:
      *(undefined1 *)(param_1 + 3) = 1;
LAB_ram_400870f2:
      param_2[4] = 0;
      param_2[5] = 0;
    }
    else {
      puVar3 = (ushort *)param_1[1];
      uVar1 = *puVar3;
      param_1[1] = (int)(puVar3 + 1);
      param_1[2] = uVar4 - 2;
      if (uVar4 - 2 < 2) goto LAB_ram_400870ec;
      uVar11 = puVar3[1];
      uVar4 = uVar4 - 4;
      param_1[1] = (int)(puVar3 + 2);
      iVar8 = (uint)uVar1 * (uint)uVar11;
      param_1[2] = uVar4;
      if (iVar8 == 0) goto LAB_ram_400870f2;
      uVar10 = iVar8 * 4;
      if (0xffffffee < uVar10 - 1) {
        return 0xfffffffd;
      }
      if (puVar6 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
        *puVar2 = FUN_ram_4008561e;
        uVar7 = 0;
      }
      else {
        if ((code *)puVar6[1] == (code *)0x0) {
          puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
LAB_ram_400873da:
          pcVar5 = FUN_ram_4008561e;
        }
        else {
          puVar2 = (undefined4 *)(*(code *)puVar6[1])(*puVar6);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
          uVar4 = param_1[2];
          if (puVar6[1] == 0) goto LAB_ram_400873da;
          pcVar5 = (code *)puVar6[2];
        }
        uVar7 = *puVar6;
        *puVar2 = pcVar5;
      }
      puVar2[1] = uVar7;
      if (uVar4 < uVar10) {
        *(undefined1 *)(param_1 + 3) = 1;
        memset(puVar2 + 4,0,uVar10);
        pcVar5 = (code *)*puVar2;
        param_1[2] = 0;
        (*pcVar5)(uVar7,puVar2);
        return 0xfffffffe;
      }
      uVar7 = FUN_ram_4000303c(puVar2 + 4,param_1[1],uVar10);
      puVar6 = (undefined4 *)*param_1;
      param_1[1] = param_1[1] + uVar10;
      param_1[2] = param_1[2] + iVar8 * -4;
      param_2[4] = uVar7;
      param_2[5] = iVar8;
    }
    if ((uint)param_1[2] < 2) {
      *(undefined1 *)(param_1 + 3) = 1;
LAB_ram_400872a0:
      param_2[6] = 0;
      param_2[7] = 0;
    }
    else {
      uVar4 = param_1[2] - 2;
      uVar9 = (uint)*(ushort *)param_1[1];
      param_1[1] = (int)((ushort *)param_1[1] + 1);
      param_1[2] = uVar4;
      if (uVar9 == 0) goto LAB_ram_400872a0;
      uVar10 = uVar9 * 4;
      if (puVar6 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
        *puVar2 = FUN_ram_4008561e;
        uVar7 = 0;
      }
      else {
        if ((code *)puVar6[1] == (code *)0x0) {
          puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
LAB_ram_4008740a:
          pcVar5 = FUN_ram_4008561e;
        }
        else {
          puVar2 = (undefined4 *)(*(code *)puVar6[1])(*puVar6);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
          uVar4 = param_1[2];
          if (puVar6[1] == 0) goto LAB_ram_4008740a;
          pcVar5 = (code *)puVar6[2];
        }
        uVar7 = *puVar6;
        *puVar2 = pcVar5;
      }
      puVar2[1] = uVar7;
      puVar6 = puVar2 + 4;
      if (uVar4 < uVar10) goto LAB_ram_40087346;
      uVar7 = FUN_ram_4000303c(puVar6,param_1[1],uVar10);
      puVar6 = (undefined4 *)*param_1;
      param_1[1] = param_1[1] + uVar10;
      param_1[2] = param_1[2] + uVar9 * -4;
      param_2[6] = uVar7;
      param_2[7] = uVar9;
    }
    if ((uint)param_1[2] < 2) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
    else {
      uVar4 = param_1[2] - 2;
      uVar9 = (uint)*(ushort *)param_1[1];
      param_1[1] = (int)((ushort *)param_1[1] + 1);
      param_1[2] = uVar4;
      if (uVar9 != 0) {
        uVar10 = uVar9 * 4;
        if (puVar6 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
          if (puVar2 == (undefined4 *)0x0) {
            return 0xfffffffd;
          }
          *puVar2 = FUN_ram_4008561e;
          uVar7 = 0;
        }
        else {
          if ((code *)puVar6[1] == (code *)0x0) {
            puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
            if (puVar2 == (undefined4 *)0x0) {
              return 0xfffffffd;
            }
LAB_ram_4008743a:
            pcVar5 = FUN_ram_4008561e;
          }
          else {
            puVar2 = (undefined4 *)(*(code *)puVar6[1])(*puVar6);
            if (puVar2 == (undefined4 *)0x0) {
              return 0xfffffffd;
            }
            uVar4 = param_1[2];
            if (puVar6[1] == 0) goto LAB_ram_4008743a;
            pcVar5 = (code *)puVar6[2];
          }
          uVar7 = *puVar6;
          *puVar2 = pcVar5;
        }
        puVar2[1] = uVar7;
        puVar6 = puVar2 + 4;
        if (uVar10 <= uVar4) {
          uVar7 = FUN_ram_4000303c(puVar6,param_1[1],uVar10);
          param_1[1] = param_1[1] + uVar10;
          param_1[2] = param_1[2] + uVar9 * -4;
          param_2[8] = uVar7;
          param_2[9] = uVar9;
          return 0;
        }
        goto LAB_ram_40087346;
      }
    }
    param_2[8] = 0;
    param_2[9] = 0;
    uVar7 = 0;
  }
  else {
    puVar3 = (ushort *)param_1[1];
    uVar1 = *puVar3;
    param_1[1] = (int)(puVar3 + 1);
    param_1[2] = uVar4 - 2;
    uVar10 = (uint)uVar1;
    if (uVar4 - 2 < 2) goto LAB_ram_40087190;
    uVar11 = puVar3[1];
    uVar4 = uVar4 - 4;
    param_1[1] = (int)(puVar3 + 2);
    iVar8 = uVar10 * uVar11;
    param_1[2] = uVar4;
    if (iVar8 == 0) goto LAB_ram_40087198;
    uVar10 = iVar8 * 4;
    if (0xffffffee < uVar10 - 1) {
      return 0xfffffffd;
    }
    if (puVar6 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
      if (puVar2 == (undefined4 *)0x0) {
        return 0xfffffffd;
      }
      *puVar2 = FUN_ram_4008561e;
      uVar7 = 0;
    }
    else {
      if ((code *)puVar6[1] == (code *)0x0) {
        puVar2 = (undefined4 *)FUN_ram_40002f1a(uVar10 + 0x10);
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
LAB_ram_4008733c:
        pcVar5 = FUN_ram_4008561e;
      }
      else {
        puVar2 = (undefined4 *)(*(code *)puVar6[1])(*puVar6);
        if (puVar2 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
        uVar4 = param_1[2];
        if (puVar6[1] == 0) goto LAB_ram_4008733c;
        pcVar5 = (code *)puVar6[2];
      }
      uVar7 = *puVar6;
      *puVar2 = pcVar5;
    }
    puVar2[1] = uVar7;
    puVar6 = puVar2 + 4;
    if (uVar10 <= uVar4) {
      uVar7 = FUN_ram_4000303c(puVar6,param_1[1],uVar10);
      puVar6 = (undefined4 *)*param_1;
      param_1[2] = param_1[2] + iVar8 * -4;
      param_1[1] = param_1[1] + uVar10;
      param_2[3] = iVar8;
      uVar4 = param_1[2];
      param_2[2] = uVar7;
      *(ushort *)(param_2 + 1) = uVar11;
      *(ushort *)((int)param_2 + 6) = uVar1 / 3;
      goto joined_r0x400871b2;
    }
LAB_ram_40087346:
    *(undefined1 *)(param_1 + 3) = 1;
    memset(puVar6,0,uVar10);
    pcVar5 = (code *)*puVar2;
    param_1[2] = 0;
    (*pcVar5)(uVar7,puVar2);
    uVar7 = 0xfffffffe;
  }
  return uVar7;
}

