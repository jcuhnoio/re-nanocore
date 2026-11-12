/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40085000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400851a8.
 * REA evidence: ev_45dbd88e2e0815a020295c8801b3e2218e32b8a602944ce7f9f3e3491aa5004c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400851a8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = DAT_ram_400a10cc;
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = DAT_ram_400a10c8;
    param_1[3] = uVar1;
    uVar3 = DAT_ram_400a10d8;
    uVar2 = DAT_ram_400a10d4;
    uVar1 = DAT_ram_400a10d0;
    param_1[7] = DAT_ram_400a10dc;
    param_1[6] = uVar3;
    uVar3 = DAT_ram_400a10e4;
    param_1[8] = DAT_ram_400a10e0;
    param_1[9] = uVar3;
    uVar5 = DAT_ram_400a10f4;
    uVar4 = DAT_ram_400a10ec;
    uVar3 = DAT_ram_400a10e8;
    param_1[0xc] = DAT_ram_400a10f0;
    param_1[0xd] = uVar5;
    uVar7 = DAT_ram_400a1100;
    uVar6 = DAT_ram_400a10fc;
    uVar5 = DAT_ram_400a10f8;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar6;
    param_1[0x12] = 0;
    uVar1 = DAT_ram_400a1104;
    param_1[0x10] = uVar7;
    param_1[0x11] = uVar1;
    return 0;
  }
  return 1;
}


/* NanoCore 1.12, address 0x4008526c.
 * REA evidence: ev_7d0699c1e7055793957dc62defa8eb290651c9372f0fe0beb59dc169b82b72ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4008526c(longlong *param_1,uint param_2,uint param_3)

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
LAB_ram_40085304:
        iVar1 = 0;
      }
      else {
        uVar2 = param_3;
        if (uVar3 != 0) goto LAB_ram_400852e8;
        while( true ) {
          if (uVar2 < 0x80) {
            uVar8 = param_2 + uVar2;
            param_3 = 0;
            uVar4 = uVar2;
            goto LAB_ram_40085328;
          }
          iVar1 = FUN_ram_40084290(param_1,param_2);
          if (iVar1 != 0) break;
          param_2 = param_2 + 0x80;
          param_3 = uVar2 - 0x80;
          *param_1 = *param_1 + 0x400;
          while( true ) {
            if (param_3 == 0) goto LAB_ram_40085304;
            uVar3 = *(uint *)(param_1 + 9);
            uVar2 = param_3;
            if (uVar3 == 0) break;
LAB_ram_400852e8:
            uVar4 = 0x80 - uVar3;
            if (param_3 < 0x80 - uVar3) {
              uVar4 = param_3;
            }
            uVar2 = uVar4 + uVar3;
            param_3 = param_3 - uVar4;
            uVar8 = param_2 + uVar4;
            if (uVar4 != 0) {
LAB_ram_40085328:
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
              iVar1 = FUN_ram_40084290(param_1,(int)param_1 + 0x4c);
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


/* NanoCore 1.12, address 0x400853f4.
 * REA evidence: ev_fb252dcad45ca876d4e78c35e916b329c73e71c34d6dd3915e09e643e7fa1577
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400853f4(longlong *param_1,undefined1 *param_2)

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
        FUN_ram_40084290(param_1,(int)param_1 + 0x4c);
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
      FUN_ram_40084290(param_1,(int)param_1 + 0x4c);
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


/* NanoCore 1.12, address 0x4008556e.
 * REA evidence: ev_f83a2628ef2ffa498d1da2d4c0bfa6277e1b4e01c2ad13b2e5fdb4507711e346
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008556e(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
      param_1[1] = 0;
    }
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
      param_1[2] = 0;
    }
    iVar1 = param_1[3];
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
      param_1[3] = 0;
    }
    iVar1 = param_1[4];
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
      param_1[4] = 0;
    }
    iVar1 = param_1[8];
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
      param_1[8] = 0;
    }
    iVar1 = param_1[9];
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
      param_1[9] = 0;
    }
    iVar1 = param_1[10];
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
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


/* NanoCore 1.12, address 0x4008561e.
 * REA evidence: ev_3f6426428abe1a9820bf94eb8ae1ab5dc717b20ca35b91eafe5b8bdfee509757
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008561e(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_40002f28(param_2);
  return;
}


/* NanoCore 1.12, address 0x40085624.
 * REA evidence: ev_ed3a772fedb655b70efb2a84d84d28bbb025212ae27a4e8c60b87ee9787162d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_40085624(int param_1)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  if (*(uint *)(param_1 + 8) < 4) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    return 0;
  }
  uVar1 = **(undefined4 **)(param_1 + 4);
  *(undefined4 **)(param_1 + 4) = *(undefined4 **)(param_1 + 4) + 1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) - 4;
  return CONCAT44(in_stack_00000000,uVar1);
}


/* NanoCore 1.12, address 0x4008566a.
 * REA evidence: ev_f23ccfb5a18844226b507b64dca2f92e25e5f9cf2e1612510d61a2cbf582d6de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008566a(int *param_1)

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
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 1),DAT_ram_40099f50);
  fVar12 = DAT_ram_4009675c;
  fVar5 = (float)FUN_ram_40000882(uVar13,fVar8 * DAT_ram_4009675c + DAT_ram_4009a334);
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 2),DAT_ram_40099f88);
  uVar3 = DAT_ram_40099f38;
  fVar6 = (float)FUN_ram_40000882(uVar13,DAT_ram_40099f38);
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 3),DAT_ram_4009a324);
  fVar7 = (float)FUN_ram_40000882(uVar13,DAT_ram_4009a328);
  fVar8 = (fVar5 * DAT_ram_4009f090) / fVar8;
  fVar5 = (float)FUN_ram_40000712(fVar8);
  fVar8 = (float)FUN_ram_400009d2(fVar8);
  iVar4 = *param_1;
  if (iVar4 == 2) {
    fVar9 = (float)FUN_ram_40000d44(uVar3,fVar7 / DAT_ram_40099f70);
    fVar7 = fVar5 * DAT_ram_40096744;
    fVar8 = fVar8 / (fVar6 + fVar6);
    fStack_58 = fVar9 * fVar8 + DAT_ram_4009672c;
    fVar6 = -(fVar9 * fVar8) + DAT_ram_4009672c;
    fVar12 = fVar8 / fVar9 + DAT_ram_4009672c;
    fVar8 = DAT_ram_4009672c - fVar8 / fVar9;
    fStack_54 = fVar7;
    goto LAB_ram_40085774;
  }
  if (iVar4 - 3U < 2) {
    fVar8 = fVar8 / (fVar6 + fVar6);
    if (iVar4 == 3) {
      fStack_54 = DAT_ram_4009672c - fVar5;
      fStack_58 = fStack_54;
    }
    else {
      fStack_54 = -(fVar5 + DAT_ram_4009672c);
      fStack_58 = fVar5 + DAT_ram_4009672c;
    }
    fStack_58 = fStack_58 * fVar12;
    fVar12 = fVar8 + DAT_ram_4009672c;
    fVar8 = DAT_ram_4009672c - fVar8;
    fVar7 = fVar5 * DAT_ram_40096744;
    fVar6 = fStack_58;
    goto LAB_ram_40085774;
  }
  fVar10 = (float)FUN_ram_40000d44(uVar3,fVar7 / DAT_ram_40099f70);
  uVar13 = FUN_ram_40000844(*(undefined8 *)(param_1 + 4),DAT_ram_40099f94);
  puVar2 = PTR_entry_ram_40096740;
  fVar6 = (float)FUN_ram_40000882(uVar13,PTR_entry_ram_40096740);
  fVar9 = DAT_ram_4009672c;
  fVar11 = (float)FUN_ram_40000844((DAT_ram_4009672c / fVar10 + fVar10) *
                                   (DAT_ram_4009672c / fVar6 - DAT_ram_4009672c) + (float)puVar2,
                                   DAT_ram_4009f95c);
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
      fVar7 = (fVar5 * fVar9 + fVar1) * DAT_ram_40096744;
LAB_ram_400859ae:
      fStack_58 = fVar10 * fStack_58;
      fVar6 = fVar10 * fVar6;
      fVar5 = (float)FUN_ram_40000e74(fVar10);
      fVar12 = fVar11 * fVar12 + fVar8;
      fVar8 = -((fVar5 + fVar5) * fVar11) + fVar8;
      goto LAB_ram_40085774;
    }
    fVar8 = fVar8 + fVar9;
    fStack_54 = (fVar10 + fVar10) * (-(fVar5 * fVar9) + fVar1);
    fVar7 = (fVar5 * fVar9 + fVar1) * DAT_ram_40096744;
  }
  else {
    fVar6 = fVar8 + fVar9;
    if (*param_1 < 0x100 && fVar10 < 0.0) {
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fStack_58 = fVar11 * (fVar12 + fVar12) + fVar6;
      fStack_54 = fVar10 * DAT_ram_40096744 * (fVar5 * fVar9 + fVar1);
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar8 = fVar9 - fVar8;
      fVar6 = -(fVar11 * (fVar12 + fVar12)) + fVar6;
      fVar12 = (float)FUN_ram_40000e74(fVar10);
      fVar1 = -(fVar5 * fVar9) + fVar1;
      fVar12 = fVar12 + fVar12;
      fVar7 = fVar1 + fVar1;
      goto LAB_ram_400859ae;
    }
    fVar7 = -(fVar5 * fVar9) + fVar1;
    fVar8 = fVar9 - fVar8;
    fVar7 = fVar7 + fVar7;
    fStack_54 = fVar10 * DAT_ram_40096744 * (fVar5 * fVar9 + fVar1);
  }
  fVar5 = SQRT(fVar10) + SQRT(fVar10);
  fVar12 = fVar11 * fVar5 + fVar8;
  fVar8 = -(fVar5 * fVar11) + fVar8;
  fStack_58 = fVar10 * (fVar11 * fVar5 + fVar6);
  fVar6 = fVar10 * (-(fVar11 * fVar5) + fVar6);
LAB_ram_40085774:
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


/* NanoCore 1.12, address 0x40085a26.
 * REA evidence: ev_458acb9abc20b8a6241ff88f924a9575aa1ffc0e2ef4853a47fe0a4aa02ea0c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40085a26(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
      *param_1 = 0;
    }
    iVar1 = param_1[4];
    param_1[1] = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    }
    iVar1 = param_1[6];
    param_1[4] = 0;
    param_1[5] = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
    }
    iVar1 = param_1[8];
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + -0x10))(*(undefined4 *)(iVar1 + -0xc),iVar1 + -0x10);
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


/* NanoCore 1.12, address 0x40085ab2.
 * REA evidence: ev_016764153a1eec55d80425a4666b5c5c1c5cf6b373991d340e2e3c8ee0e2d79c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40085ab2(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_stack_00000000;
  
  iVar4 = param_1[2];
  *param_2 = *param_1;
  if (iVar4 == 0) {
    param_2[1] = 0;
LAB_ram_40085ba8:
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined8 *)(param_2 + 5) = 0;
    return 0;
  }
  pbVar3 = (byte *)param_1[1];
  bVar1 = *pbVar3;
  param_1[2] = iVar4 - 1U;
  param_1[1] = pbVar3 + 1;
  param_2[1] = (uint)bVar1;
  if (iVar4 - 1U < 4) goto LAB_ram_40085ba8;
  uVar2 = *(undefined4 *)(pbVar3 + 1);
  param_1[1] = pbVar3 + 5;
  param_1[2] = iVar4 - 5U;
  *(ulonglong *)(param_2 + 2) = CONCAT44(in_stack_00000000,uVar2);
  if (iVar4 - 5U < 4) {
    param_2[3] = 0;
  }
  else {
    uVar2 = *(undefined4 *)(pbVar3 + 5);
    param_1[1] = pbVar3 + 9;
    param_1[2] = iVar4 - 9U;
    *(ulonglong *)(param_2 + 3) = CONCAT44(in_stack_00000000,uVar2);
    if (3 < iVar4 - 9U) {
      uVar2 = *(undefined4 *)(pbVar3 + 9);
      param_1[1] = pbVar3 + 0xd;
      param_1[2] = iVar4 - 0xdU;
      *(ulonglong *)(param_2 + 4) = CONCAT44(in_stack_00000000,uVar2);
      if (3 < iVar4 - 0xdU) {
        uVar2 = *(undefined4 *)(pbVar3 + 0xd);
        param_1[1] = pbVar3 + 0x11;
        param_1[2] = iVar4 + -0x11;
        *(ulonglong *)(param_2 + 5) = CONCAT44(in_stack_00000000,uVar2);
        return 0;
      }
      goto LAB_ram_40085bcc;
    }
  }
  param_2[4] = 0;
LAB_ram_40085bcc:
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined8 *)(param_2 + 5) = 0;
  return 0;
}


/* NanoCore 1.12, address 0x40085be0.
 * REA evidence: ev_ac3d154cfe911da0ea2b7f57e2b2bdbb383e8a918e3bb7a1f81929f23aa30c5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
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


