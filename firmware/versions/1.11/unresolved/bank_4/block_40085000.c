/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40085000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40085500.
 * REA evidence: ev_e042020398e1a6633a3b0124e4dfbd86ad3c3c326e507d9c8bc74635a64ed18f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40085500(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = DAT_ram_4009b0b4;
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = DAT_ram_4009b0b0;
    param_1[3] = uVar1;
    uVar3 = DAT_ram_4009b0c0;
    uVar2 = DAT_ram_4009b0bc;
    uVar1 = DAT_ram_4009b0b8;
    param_1[7] = DAT_ram_4009b0c4;
    param_1[6] = uVar3;
    uVar3 = DAT_ram_4009b0cc;
    param_1[8] = DAT_ram_4009b0c8;
    param_1[9] = uVar3;
    uVar5 = DAT_ram_4009b0dc;
    uVar4 = DAT_ram_4009b0d4;
    uVar3 = DAT_ram_4009b0d0;
    param_1[0xc] = DAT_ram_4009b0d8;
    param_1[0xd] = uVar5;
    uVar7 = DAT_ram_4009b0e8;
    uVar6 = DAT_ram_4009b0e4;
    uVar5 = DAT_ram_4009b0e0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar6;
    param_1[0x12] = 0;
    uVar1 = DAT_ram_4009b0ec;
    param_1[0x10] = uVar7;
    param_1[0x11] = uVar1;
    return 0;
  }
  return 1;
}


/* NanoCore 1.11, address 0x400855c4.
 * REA evidence: ev_2ecded03f6749dded4148d3a0ea7ae14471f813bd9a327997de71b36970d8028
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400855c4(longlong *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == (longlong *)0x0) {
    return 1;
  }
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    uVar3 = *(uint *)(param_1 + 9);
    iVar1 = 1;
    if (uVar3 < 0x81) {
      if (param_3 == 0) {
LAB_ram_4008565c:
        iVar1 = 0;
      }
      else {
        uVar2 = param_3;
        if (uVar3 != 0) goto LAB_ram_40085640;
        while( true ) {
          if (uVar2 < 0x80) {
            uVar8 = param_2 + uVar2;
            param_3 = 0;
            uVar4 = uVar2;
            goto LAB_ram_40085680;
          }
          iVar1 = FUN_ram_400845e8(param_1,param_2);
          if (iVar1 != 0) break;
          param_2 = param_2 + 0x80;
          param_3 = uVar2 - 0x80;
          *param_1 = *param_1 + 0x400;
          while( true ) {
            if (param_3 == 0) goto LAB_ram_4008565c;
            uVar3 = *(uint *)(param_1 + 9);
            uVar2 = param_3;
            if (uVar3 == 0) break;
LAB_ram_40085640:
            uVar4 = 0x80 - uVar3;
            if (param_3 < 0x80 - uVar3) {
              uVar4 = param_3;
            }
            uVar2 = uVar4 + uVar3;
            param_3 = param_3 - uVar4;
            uVar8 = param_2 + uVar4;
            if (uVar4 != 0) {
LAB_ram_40085680:
              uVar5 = uVar3 + 0x4c + (int)param_1;
              if ((uVar5 - (param_2 + 1) < 3 || ((param_2 | uVar5) & 3) != 0) || (uVar4 < 10)) {
                uVar3 = 0;
                do {
                  *(undefined1 *)(uVar5 + uVar3) = *(undefined1 *)(param_2 + uVar3);
                  uVar3 = uVar3 + 1;
                } while (uVar3 < uVar4);
              }
              else {
                uVar6 = 1;
                if (uVar4 != 0) {
                  uVar6 = uVar4;
                }
                uVar7 = 0;
                do {
                  *(undefined4 *)(uVar5 + uVar7) = *(undefined4 *)(param_2 + uVar7);
                  uVar7 = uVar7 + 4;
                } while ((uVar4 & 0xfffffffc) != uVar7);
                uVar5 = uVar6 & 0xfffffffc;
                if (uVar6 != uVar5) {
                  *(undefined1 *)((int)param_1 + uVar5 + uVar3 + 0x4c) =
                       *(undefined1 *)(param_2 + uVar5);
                  uVar6 = uVar5 + 1;
                  if (uVar6 < uVar4) {
                    uVar5 = uVar5 + 2;
                    *(undefined1 *)((int)param_1 + uVar6 + uVar3 + 0x4c) =
                         *(undefined1 *)(param_2 + uVar6);
                    if (uVar5 < uVar4) {
                      *(undefined1 *)((int)param_1 + uVar5 + uVar3 + 0x4c) =
                           *(undefined1 *)(param_2 + uVar5);
                    }
                  }
                }
              }
            }
            param_2 = uVar8;
            *(uint *)(param_1 + 9) = uVar2;
            if (uVar2 == 0x80) {
              iVar1 = FUN_ram_400845e8(param_1,(int)param_1 + 0x4c);
              if (iVar1 != 0) {
                return iVar1;
              }
              *(undefined4 *)(param_1 + 9) = 0;
              *param_1 = *param_1 + 0x400;
            }
          }
        }
      }
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4008574c.
 * REA evidence: ev_18dc50b1bafa212d477b96c07b680a74f4c036bea070fb911bf0cc82f40ca8e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4008574c(longlong *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != (undefined1 *)0x0)) {
    uVar5 = *(uint *)(param_1 + 9);
    uVar3 = 1;
    if (uVar5 < 0x80) {
      uVar7 = uVar5 + 1;
      lVar2 = (ulonglong)uVar5 * 8 + *param_1;
      uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
      *param_1 = lVar2;
      *(uint *)(param_1 + 9) = uVar7;
      *(undefined1 *)((int)param_1 + uVar5 + 0x4c) = 0x80;
      if (0x70 < uVar7) {
        if (uVar7 != 0x80) {
          memset(uVar5 + 0x4d + (int)param_1,0,0x7f - uVar5);
          *(undefined4 *)(param_1 + 9) = 0x80;
        }
        FUN_ram_400845e8(param_1,(int)param_1 + 0x4c);
        uVar8 = *(uint *)((int)param_1 + 4);
        uVar7 = 0;
      }
      uVar5 = uVar7 + 1;
      iVar4 = 1;
      if (uVar5 < 0x79) {
        iVar4 = 0x78 - uVar7;
      }
      memset(uVar7 + 0x4c + (int)param_1,0,iVar4);
      iVar4 = 0x77 - uVar7;
      if (0x78 < uVar5) {
        iVar4 = 0;
      }
      custom0();
      *(uint *)((int)param_1 + 0xc4) =
           uVar8 >> 0x18 | (uVar8 >> 0x10 & 0xff) << 8 | (uVar8 >> 8 & 0xff) << 0x10 | uVar8 << 0x18
      ;
      *(uint *)(param_1 + 9) = iVar4 + uVar5;
      *(uint *)(param_1 + 0x19) = uVar8 >> 8;
      FUN_ram_400845e8(param_1,(int)param_1 + 0x4c);
      plVar6 = param_1 + 1;
      do {
        *param_2 = *(undefined1 *)((int)plVar6 + 7);
        param_2[1] = (char)*(undefined2 *)((int)plVar6 + 6);
        param_2[2] = (char)((uint)*(undefined4 *)((int)plVar6 + 4) >> 8);
        param_2[3] = (char)*(undefined4 *)((int)plVar6 + 4);
        param_2[4] = (char)((uint)(int)*plVar6 >> 0x18);
        param_2[5] = (char)((uint)(int)*plVar6 >> 0x10);
        param_2[6] = (char)((uint)(int)*plVar6 >> 8);
        plVar1 = plVar6 + 1;
        param_2[7] = (char)(int)*plVar6;
        param_2 = param_2 + 8;
        plVar6 = plVar1;
      } while (plVar1 != param_1 + 9);
      uVar3 = 0;
    }
    return uVar3;
  }
  return 1;
}


/* NanoCore 1.11, address 0x400858c6.
 * REA evidence: ev_240289838b948242b1154985a2cce4fb408f3f82d4fc63bdebe3c2be710b9615
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400858c6(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[1] != 0) {
      FUN_ram_40002f3a();
      param_1[1] = 0;
    }
    if (param_1[2] != 0) {
      FUN_ram_40002f3a();
      param_1[2] = 0;
    }
    if (param_1[3] != 0) {
      FUN_ram_40002f3a();
      param_1[3] = 0;
    }
    if (param_1[4] != 0) {
      FUN_ram_40002f3a();
      param_1[4] = 0;
    }
    if (param_1[8] != 0) {
      FUN_ram_40002f3a();
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      FUN_ram_40002f3a();
      param_1[9] = 0;
    }
    if (param_1[10] != 0) {
      FUN_ram_40002f3a();
      param_1[10] = 0;
    }
    *param_1 = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4008593e.
 * REA evidence: ev_e2d8726e38f8b2dbed3a5c91540f286c0c14790c96630fed83f9bbe3402f5d3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_4008593e(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  if ((uint)param_1[1] < 4) {
    return 0;
  }
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (undefined4 *)*param_1 + 1;
  param_1[1] = param_1[1] - 4;
  return CONCAT44(in_stack_00000000,uVar1);
}


/* NanoCore 1.11, address 0x4008597e.
 * REA evidence: ev_02d51d3cf222b765359423ea65dbfdc29140634554c4fcac9c21e13a8d3e4966
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008597e(int *param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_a5;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fStack_58;
  float fStack_54;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  fVar8 = (float)param_1[5];
  if (fVar8 <= 0.0) {
    return;
  }
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 1),DAT_ram_40094ea8);
  fVar12 = DAT_ram_40094634;
  fVar5 = (float)FUN_ram_40000882(uVar13,fVar8 * DAT_ram_40094634 + DAT_ram_40095284);
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 2),DAT_ram_40094ee0);
  uVar3 = DAT_ram_40094e90;
  fVar6 = (float)FUN_ram_40000882(uVar13,DAT_ram_40094e90);
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 3),DAT_ram_400952d0);
  fVar7 = (float)FUN_ram_40000882(uVar13,DAT_ram_400952cc);
  fVar8 = (fVar5 * DAT_ram_40099f94) / fVar8;
  fVar5 = (float)FUN_ram_40000712(fVar8);
  fVar8 = (float)FUN_ram_400009d2(fVar8);
  iVar4 = *param_1;
  if (iVar4 == 2) {
    fVar9 = (float)FUN_ram_40000d44(uVar3,fVar7 / DAT_ram_40094ec8);
    fVar7 = fVar5 * DAT_ram_4009461c;
    fVar8 = fVar8 / (fVar6 + fVar6);
    fStack_58 = fVar9 * fVar8 + DAT_ram_40094604;
    fVar6 = -(fVar9 * fVar8) + DAT_ram_40094604;
    fVar12 = fVar8 / fVar9 + DAT_ram_40094604;
    fVar8 = DAT_ram_40094604 - fVar8 / fVar9;
    fStack_54 = fVar7;
    goto LAB_ram_40085a88;
  }
  if (iVar4 - 3U < 2) {
    fVar8 = fVar8 / (fVar6 + fVar6);
    if (iVar4 == 3) {
      fStack_54 = DAT_ram_40094604 - fVar5;
      fStack_58 = fStack_54;
    }
    else {
      fStack_54 = -(fVar5 + DAT_ram_40094604);
      fStack_58 = fVar5 + DAT_ram_40094604;
    }
    fStack_58 = fStack_58 * fVar12;
    fVar12 = fVar8 + DAT_ram_40094604;
    fVar8 = DAT_ram_40094604 - fVar8;
    fVar7 = fVar5 * DAT_ram_4009461c;
    fVar6 = fStack_58;
    goto LAB_ram_40085a88;
  }
  fVar10 = (float)FUN_ram_40000d44(uVar3,fVar7 / DAT_ram_40094ec8);
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 4),DAT_ram_40094eec);
  puVar2 = PTR_entry_ram_40094618;
  fVar6 = (float)FUN_ram_40000882(uVar13,PTR_entry_ram_40094618);
  fVar9 = DAT_ram_40094604;
  fVar11 = (float)FUN_ram_40000844((DAT_ram_40094604 / fVar10 + fVar10) *
                                   (DAT_ram_40094604 / fVar6 - DAT_ram_40094604) + (float)puVar2,
                                   DAT_ram_4009a830);
  if (extraout_a5 < 0x100 && fVar11 < 0.0) {
    fVar11 = (float)FUN_ram_40000e74();
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  fVar1 = fVar10 - fVar9;
  fVar9 = fVar10 + fVar9;
  fVar11 = fVar8 * fVar12 * fVar11;
  fVar8 = fVar5 * fVar1;
  if (*param_1 == 0) {
    fVar6 = fVar9 - fVar8;
    if (fVar10 < 0.0) {
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fStack_58 = fVar11 * (fVar12 + fVar12) + fVar6;
      fStack_54 = (fVar10 + fVar10) * (-(fVar5 * fVar9) + fVar1);
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar8 = fVar8 + fVar9;
      fVar6 = -(fVar11 * (fVar12 + fVar12)) + fVar6;
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar12 = fVar12 + fVar12;
      fVar7 = (fVar5 * fVar9 + fVar1) * DAT_ram_4009461c;
LAB_ram_40085cc2:
      fStack_58 = fVar10 * fStack_58;
      fVar6 = fVar10 * fVar6;
      fVar5 = (float)FUN_ram_40000e74(fVar10);
      fVar12 = fVar11 * fVar12 + fVar8;
      fVar8 = -((fVar5 + fVar5) * fVar11) + fVar8;
      goto LAB_ram_40085a88;
    }
    fVar8 = fVar8 + fVar9;
    fStack_54 = (fVar10 + fVar10) * (-(fVar5 * fVar9) + fVar1);
    fVar7 = (fVar5 * fVar9 + fVar1) * DAT_ram_4009461c;
  }
  else {
    fVar6 = fVar8 + fVar9;
    if (*param_1 < 0x100 && fVar10 < 0.0) {
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fStack_58 = fVar11 * (fVar12 + fVar12) + fVar6;
      fStack_54 = fVar10 * DAT_ram_4009461c * (fVar5 * fVar9 + fVar1);
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar8 = fVar9 - fVar8;
      fVar6 = -(fVar11 * (fVar12 + fVar12)) + fVar6;
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar1 = -(fVar5 * fVar9) + fVar1;
      fVar12 = fVar12 + fVar12;
      fVar7 = fVar1 + fVar1;
      goto LAB_ram_40085cc2;
    }
    fVar7 = -(fVar5 * fVar9) + fVar1;
    fVar8 = fVar9 - fVar8;
    fVar7 = fVar7 + fVar7;
    fStack_54 = fVar10 * DAT_ram_4009461c * (fVar5 * fVar9 + fVar1);
  }
  fVar5 = SQRT(fVar10) + SQRT(fVar10);
  fVar12 = fVar11 * fVar5 + fVar8;
  fVar8 = -(fVar5 * fVar11) + fVar8;
  fStack_58 = fVar10 * (fVar11 * fVar5 + fVar6);
  fVar6 = fVar10 * (-(fVar11 * fVar5) + fVar6);
LAB_ram_40085a88:
  param_1[9] = (int)(fVar7 / fVar12);
  *(ulonglong *)(param_1 + 0x11) = (ulonglong)(uint)-(fVar7 / fVar12);
  *(ulonglong *)(param_1 + 10) = (ulonglong)(uint)(fVar8 / fVar12);
  *(ulonglong *)(param_1 + 0x12) = (ulonglong)(uint)-(fVar8 / fVar12);
  *(ulonglong *)(param_1 + 6) = (ulonglong)(uint)(fStack_58 / fVar12);
  *(ulonglong *)(param_1 + 0xe) = (ulonglong)(uint)(fStack_58 / fVar12);
  *(ulonglong *)(param_1 + 7) = (ulonglong)(uint)(fStack_54 / fVar12);
  *(ulonglong *)(param_1 + 0xf) = (ulonglong)(uint)(fStack_54 / fVar12);
  param_1[8] = (int)(fVar6 / fVar12);
  param_1[0x10] = (int)(fVar6 / fVar12);
  return;
}


/* NanoCore 1.11, address 0x40085d3a.
 * REA evidence: ev_5499b2690b892f1714da31b0e1d5e5284648c4ef0a9a5307ffaed4f16d3aab02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40085d3a(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_ram_40002f3a();
      *param_1 = 0;
    }
    param_1[1] = 0;
    if (param_1[4] != 0) {
      FUN_ram_40002f3a();
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if (param_1[6] != 0) {
      FUN_ram_40002f3a();
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if (param_1[8] != 0) {
      FUN_ram_40002f3a();
      param_1[8] = 0;
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[9] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40085da8.
 * REA evidence: ev_8b3fceeda4c6af825866cd5f94facc8a15000c801f2d33b732ad7219078c06b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40085da8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = DAT_ram_4009a170;
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x44);
    if (uVar4 != 0) {
      iVar5 = 0;
      uVar6 = 0;
      do {
        puVar2 = (undefined4 *)(iVar3 + iVar5);
        if (puVar2 != (undefined4 *)0x0) {
          if (*(int *)(iVar3 + iVar5) != 0) {
            FUN_ram_40002f3a();
            *puVar2 = 0;
          }
          puVar2[1] = 0;
          if (puVar2[2] != 0) {
            FUN_ram_40002f3a();
            puVar2[2] = 0;
          }
          puVar2[3] = 0;
          if (puVar2[5] != 0) {
            FUN_ram_40002f3a();
            puVar2[5] = 0;
          }
          puVar2[6] = 0;
          if (puVar2[7] != 0) {
            FUN_ram_40002f3a();
            puVar2[7] = 0;
          }
          puVar2[8] = 0;
          if (puVar2[9] != 0) {
            FUN_ram_40002f3a();
            puVar2[9] = 0;
          }
          puVar2[10] = 0;
          if (puVar2[0xb] != 0) {
            FUN_ram_40002f3a();
            puVar2[0xb] = 0;
          }
          uVar4 = *(uint *)(param_1 + 0x44);
          iVar3 = *(int *)(param_1 + 0x40);
          puVar2[0xc] = 0;
          puVar2[4] = uVar1;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x34;
      } while (uVar6 < uVar4);
      if (iVar3 == 0) goto LAB_ram_40085e54;
    }
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
LAB_ram_40085e54:
  iVar3 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar1 = DAT_ram_4009a170;
  if (iVar3 == 0) {
LAB_ram_40085eba:
    iVar3 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x3c);
    iVar5 = 0;
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        while( true ) {
          uVar6 = uVar6 + 1;
          iVar7 = iVar3 + iVar5;
          if (*(int *)(iVar3 + iVar5) != 0) break;
          if (*(int *)(iVar7 + 0xc) != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)(iVar7 + 0xc) = 0;
          }
          *(undefined4 *)(iVar7 + 0x10) = 0;
          if (*(int *)(iVar7 + 0x14) != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)(iVar7 + 0x14) = 0;
          }
          uVar4 = *(uint *)(param_1 + 0x3c);
          iVar3 = *(int *)(param_1 + 0x38);
          *(undefined4 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 8) = uVar1;
          iVar5 = iVar5 + 0x1c;
          if (uVar4 <= uVar6) goto LAB_ram_40085eb6;
        }
        iVar5 = iVar5 + 0x1c;
      } while (uVar6 < uVar4);
LAB_ram_40085eb6:
      if (iVar3 == 0) goto LAB_ram_40085eba;
    }
    FUN_ram_40002f3a();
    iVar3 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (iVar3 != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar1 = DAT_ram_4009a170;
  if (iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x54);
    iVar5 = 0;
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        while( true ) {
          uVar6 = uVar6 + 1;
          iVar7 = iVar3 + iVar5;
          if (*(int *)(iVar3 + iVar5) != 0) break;
          if (*(int *)(iVar7 + 0xc) != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)(iVar7 + 0xc) = 0;
          }
          *(undefined4 *)(iVar7 + 0x10) = 0;
          if (*(int *)(iVar7 + 0x14) != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)(iVar7 + 0x14) = 0;
          }
          uVar4 = *(uint *)(param_1 + 0x54);
          iVar3 = *(int *)(param_1 + 0x50);
          *(undefined4 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 8) = uVar1;
          iVar5 = iVar5 + 0x1c;
          if (uVar4 <= uVar6) goto LAB_ram_40085f2c;
        }
        iVar5 = iVar5 + 0x1c;
      } while (uVar6 < uVar4);
LAB_ram_40085f2c:
      if (iVar3 == 0) goto LAB_ram_40085f30;
    }
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
LAB_ram_40085f30:
  iVar3 = *(int *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x54) = 0;
  uVar1 = DAT_ram_4009a170;
  if (iVar3 == 0) {
LAB_ram_40085f9e:
    iVar3 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xa4);
    iVar5 = 0;
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        while( true ) {
          uVar6 = uVar6 + 1;
          iVar7 = iVar3 + iVar5;
          if (*(int *)(iVar3 + iVar5) != 0) break;
          if (*(int *)(iVar7 + 0xc) != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)(iVar7 + 0xc) = 0;
          }
          *(undefined4 *)(iVar7 + 0x10) = 0;
          if (*(int *)(iVar7 + 0x14) != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)(iVar7 + 0x14) = 0;
          }
          uVar4 = *(uint *)(param_1 + 0xa4);
          iVar3 = *(int *)(param_1 + 0xa0);
          *(undefined4 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 8) = uVar1;
          iVar5 = iVar5 + 0x1c;
          if (uVar4 <= uVar6) goto LAB_ram_40085f9a;
        }
        iVar5 = iVar5 + 0x1c;
      } while (uVar6 < uVar4);
LAB_ram_40085f9a:
      if (iVar3 == 0) goto LAB_ram_40085f9e;
    }
    FUN_ram_40002f3a();
    iVar3 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (iVar3 != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  uVar1 = DAT_ram_4009a170;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (*(int *)(param_1 + 0xf8) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if (*(int *)(param_1 + 0x100) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  uVar1 = DAT_ram_4009a170;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  uVar1 = DAT_ram_4009a170;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  return;
}


