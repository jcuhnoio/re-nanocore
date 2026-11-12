/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40083000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4008305a.
 * REA evidence: ev_ff8f02b0d1bc2d7296139bca540c34caeffa823ffff23f16d9fd9b71c22d268b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008305a(ulonglong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x4982c);
    uVar6 = DAT_ram_4009af68;
    uVar5 = DAT_ram_4009a8c8;
    uVar4 = DAT_ram_4009a89c;
    uVar3 = DAT_ram_40095280;
    uVar2 = DAT_ram_40094658;
    uVar1 = DAT_ram_40094604;
    uVar7 = (ulonglong)DAT_ram_40094ef4;
    uVar8 = (ulonglong)DAT_ram_40094e90;
    uVar9 = (ulonglong)DAT_ram_4009a8ac;
    uVar10 = (ulonglong)DAT_ram_400952d8;
    uVar11 = (ulonglong)DAT_ram_4009a1fc;
    uVar12 = (ulonglong)DAT_ram_400952c8;
    *param_2 = param_1 & 0xffffffff;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined1 *)((int)param_2 + 0x25) = 1;
    *(undefined **)((int)param_2 + 0x44) = &sedeleg;
    *(undefined4 *)((int)param_2 + 4) = uVar6;
    *(undefined4 *)((int)param_2 + 0xc) = uVar5;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *(undefined4 *)((int)param_2 + 0x14) = uVar4;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 5) = uVar3;
    *(ulonglong *)((int)param_2 + 0x2c) = uVar7;
    param_2[6] = uVar8;
    *(ulonglong *)((int)param_2 + 0x34) = uVar9;
    param_2[7] = uVar10;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar11;
    param_2[8] = uVar12;
    FUN_ram_40081a98(param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40083120.
 * REA evidence: ev_377dbffb349c4aad1a3d5b4ffb3600c8f4ae124acedf67381000109b8e928110
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40083120(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if ((*(char *)(param_1 + 0x18) != *(char *)(param_2 + 5)) ||
       (*(int *)(param_1 + 0x20) != param_2[7])) {
      *(undefined1 *)(param_1 + 0x45) = 1;
    }
    puVar4 = (undefined4 *)(param_1 + 4);
    puVar5 = param_2 + 0x10;
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *puVar4 = *param_2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      param_2 = param_2 + 4;
      puVar4 = puVar4 + 4;
    } while (param_2 != puVar5);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}


/* NanoCore 1.11, address 0x4008316c.
 * REA evidence: ev_a17e6de98f078810b045fed6ef32dfe93c45e1679b49789815c05de1e5aeac1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008316c(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(ushort *)(param_1 + 0x205c) == 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x205e);
    *(undefined2 *)(param_1 + 0x2064) = 0;
    if (uVar2 == 0) goto LAB_ram_400831a2;
LAB_ram_40083526:
    memset(param_1 + 0x85c,0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x2060);
    *(undefined2 *)(param_1 + 0x2066) = 0;
    if (uVar2 != 0) goto LAB_ram_40083502;
LAB_ram_400831b2:
    uVar2 = (uint)*(ushort *)(param_1 + 0x2062);
    *(undefined2 *)(param_1 + 0x2068) = 0;
    if (uVar2 == 0) goto LAB_ram_400831c4;
LAB_ram_400834dc:
    memset(param_1 + 0x185c,0,uVar2 << 2);
    *(undefined2 *)(param_1 + 0x206a) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0x506c);
    if (uVar2 != 0) goto LAB_ram_400834bc;
LAB_ram_400831da:
    uVar2 = (uint)*(ushort *)(param_1 + 0x506e);
    *(undefined2 *)(param_1 + 0x5072) = 0;
    if (uVar2 == 0) goto LAB_ram_400831ea;
LAB_ram_4008349a:
    memset(param_1 + 0x306c,0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x5070);
    *(undefined2 *)(param_1 + 0x5074) = 0;
    if (uVar2 != 0) goto LAB_ram_40083472;
LAB_ram_400831fa:
    *(undefined2 *)(param_1 + 0x5076) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0xd078);
    if (uVar2 == 0) goto LAB_ram_40083210;
LAB_ram_40083452:
    memset(param_1 + 0x5078,0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0xd07a);
    *(undefined2 *)(param_1 + 0xd080) = 0;
    if (uVar2 != 0) goto LAB_ram_40083430;
LAB_ram_40083220:
    uVar2 = (uint)*(ushort *)(param_1 + 0xd07c);
    *(undefined2 *)(param_1 + 0xd082) = 0;
    if (uVar2 == 0) goto LAB_ram_40083230;
LAB_ram_4008340e:
    memset(param_1 + 0x9078,0,uVar2 << 2);
    uVar1 = *(ushort *)(param_1 + 0xd07e);
    *(undefined2 *)(param_1 + 0xd084) = 0;
  }
  else {
    memset(param_1 + 0x5c,0,(uint)*(ushort *)(param_1 + 0x205c) << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x205e);
    *(undefined2 *)(param_1 + 0x2064) = 0;
    if (uVar2 != 0) goto LAB_ram_40083526;
LAB_ram_400831a2:
    uVar2 = (uint)*(ushort *)(param_1 + 0x2060);
    *(undefined2 *)(param_1 + 0x2066) = 0;
    if (uVar2 == 0) goto LAB_ram_400831b2;
LAB_ram_40083502:
    memset(param_1 + 0x105c,0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x2062);
    *(undefined2 *)(param_1 + 0x2068) = 0;
    if (uVar2 != 0) goto LAB_ram_400834dc;
LAB_ram_400831c4:
    *(undefined2 *)(param_1 + 0x206a) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0x506c);
    if (uVar2 == 0) goto LAB_ram_400831da;
LAB_ram_400834bc:
    memset(param_1 + 0x206c,0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x506e);
    *(undefined2 *)(param_1 + 0x5072) = 0;
    if (uVar2 != 0) goto LAB_ram_4008349a;
LAB_ram_400831ea:
    uVar2 = (uint)*(ushort *)(param_1 + 0x5070);
    *(undefined2 *)(param_1 + 0x5074) = 0;
    if (uVar2 == 0) goto LAB_ram_400831fa;
LAB_ram_40083472:
    memset(param_1 + 0x406c,0,uVar2 << 2);
    *(undefined2 *)(param_1 + 0x5076) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0xd078);
    if (uVar2 != 0) goto LAB_ram_40083452;
LAB_ram_40083210:
    uVar2 = (uint)*(ushort *)(param_1 + 0xd07a);
    *(undefined2 *)(param_1 + 0xd080) = 0;
    if (uVar2 == 0) goto LAB_ram_40083220;
LAB_ram_40083430:
    memset(param_1 + 0x7078,0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0xd07c);
    *(undefined2 *)(param_1 + 0xd082) = 0;
    if (uVar2 != 0) goto LAB_ram_4008340e;
LAB_ram_40083230:
    uVar1 = *(ushort *)(param_1 + 0xd07e);
    *(undefined2 *)(param_1 + 0xd084) = 0;
  }
  if (uVar1 != 0) {
    memset(param_1 + 0xb078,0,(uint)uVar1 << 2);
  }
  *(undefined2 *)(param_1 + 0xd086) = 0;
  if (*(ushort *)(param_1 + 0x38c88) == 0) {
    *(undefined4 *)(param_1 + 0x38ccc) = 0;
    iVar3 = 1;
  }
  else {
    memset(param_1 + 0xd088,0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
    *(undefined4 *)(param_1 + 0x38ccc) = 0;
    if (*(ushort *)(param_1 + 0x38c88) == 0) {
      *(undefined4 *)(param_1 + 0x38cd0) = 0;
      iVar3 = 2;
    }
    else {
      memset(param_1 + 0x12808,0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
      *(undefined4 *)(param_1 + 0x38cd0) = 0;
      if (*(ushort *)(param_1 + 0x38c88) == 0) {
        *(undefined4 *)(param_1 + 0x38cd4) = 0;
        iVar3 = 3;
      }
      else {
        memset(param_1 + 0x17f88,0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
        *(undefined4 *)(param_1 + 0x38cd4) = 0;
        if (*(ushort *)(param_1 + 0x38c88) == 0) {
          *(undefined4 *)(param_1 + 0x38cd8) = 0;
          iVar3 = 4;
        }
        else {
          memset(param_1 + 0x1d708,0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
          *(undefined4 *)(param_1 + 0x38cd8) = 0;
          if (*(ushort *)(param_1 + 0x38c88) == 0) {
            *(undefined4 *)(param_1 + 0x38cdc) = 0;
            iVar3 = 5;
          }
          else {
            memset(param_1 + 0x22e88,0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
            *(undefined4 *)(param_1 + 0x38cdc) = 0;
            if (*(ushort *)(param_1 + 0x38c88) == 0) {
              *(undefined4 *)(param_1 + 0x38ce0) = 0;
              iVar3 = 6;
            }
            else {
              memset(param_1 + 0x28608,0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
              *(undefined4 *)(param_1 + 0x38ce0) = 0;
              if (*(ushort *)(param_1 + 0x38c88) != 0) {
                memset(param_1 + 0x2dd88,0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
                *(undefined4 *)(param_1 + 0x38ce4) = 0;
                if (*(ushort *)(param_1 + 0x38c88) != 0) {
                  memset(param_1 + 0x33508,0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
                }
                *(undefined4 *)(param_1 + 0x38ce8) = 0;
                goto LAB_ram_40083274;
              }
              *(undefined4 *)(param_1 + 0x38ce4) = 0;
              iVar3 = 7;
            }
          }
        }
      }
    }
  }
  memset(param_1 + (iVar3 + 0xe333) * 4,0,(8 - iVar3) * 4);
LAB_ram_40083274:
  *(undefined2 *)(param_1 + 0x38c8a) = 0;
  memset(param_1 + 0x38de4,0,24000);
  *(undefined2 *)(param_1 + 0x3eba4) = 0;
  if (*(ushort *)(param_1 + 0x487e8) == 0) {
    memset(param_1 + 0x3eba8,0,40000);
  }
  else {
    memset(param_1 + 0x3eba8,0,(uint)*(ushort *)(param_1 + 0x487e8) << 2);
  }
  *(undefined2 *)(param_1 + 0x487ea) = 0;
  *(undefined4 *)(param_1 + 0x487f0) = 0;
  *(undefined4 *)(param_1 + 0x48808) = 0;
  *(undefined4 *)(param_1 + 0x4880c) = 0;
  *(undefined4 *)(param_1 + 0x48814) = 0;
  *(undefined4 *)(param_1 + 0x4881c) = 0;
  *(undefined4 *)(param_1 + 0x48820) = 0;
  *(undefined2 *)(param_1 + 0x38dce) = 0;
  return;
}


/* NanoCore 1.11, address 0x4008357e.
 * REA evidence: ev_71b49acd718602c0b523369748898ec329f085c1f83e04c2fc23b92f129110c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008357e(undefined8 *param_1)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  
  fVar2 = DAT_ram_40099fa4;
  fVar16 = DAT_ram_40094634;
  fVar12 = (float)*param_1;
  if ((float)*param_1 <= DAT_ram_40094e80) {
    fVar12 = DAT_ram_40099f80;
  }
  fVar13 = (float)*(undefined8 *)((int)param_1 + 4);
  fVar15 = DAT_ram_4009b05c;
  fVar14 = DAT_ram_400952dc;
  if ((DAT_ram_400952dc <= fVar13) &&
     (fVar15 = DAT_ram_4009b060, fVar14 = DAT_ram_400952d8, fVar13 <= DAT_ram_400952d8)) {
    fVar15 = fVar13 + fVar13;
    fVar14 = fVar13;
  }
  fVar13 = (float)param_1[1] * DAT_ram_40099fa4 * fVar12;
  if (0.0 <= fVar13) {
    fVar13 = fVar13 + DAT_ram_40094634;
  }
  else {
    fVar13 = fVar13 - DAT_ram_40094634;
  }
  fVar22 = (float)*(undefined8 *)((int)param_1 + 0xc) * DAT_ram_40099fa4 * fVar12;
  if (0.0 <= fVar22) {
    fVar22 = fVar22 + DAT_ram_40094634;
    fVar19 = (float)*(undefined8 *)((int)param_1 + 0x34);
  }
  else {
    fVar22 = fVar22 - DAT_ram_40094634;
    fVar19 = (float)*(undefined8 *)((int)param_1 + 0x34);
  }
  fVar19 = fVar19 * DAT_ram_40099fa4 * fVar12;
  if (0.0 <= fVar19) {
    fVar19 = fVar19 + DAT_ram_40094634;
  }
  else {
    fVar19 = fVar19 - DAT_ram_40094634;
  }
  if (0.0 <= fVar12 / fVar15) {
    fVar15 = fVar12 / fVar15 + DAT_ram_40094634;
    uVar1 = *(ushort *)((int)param_1 + 0x2e);
    uVar9 = (uint)(*(ushort *)((int)param_1 + 0x2c) >> 1);
    if (*(ushort *)((int)param_1 + 0x2c) < 2) {
      uVar9 = 1;
    }
  }
  else {
    fVar15 = fVar12 / fVar15 - DAT_ram_40094634;
    uVar1 = *(ushort *)((int)param_1 + 0x2e);
    uVar9 = (uint)(*(ushort *)((int)param_1 + 0x2c) >> 1);
    if (*(ushort *)((int)param_1 + 0x2c) < 2) {
      uVar9 = 1;
    }
  }
  iVar3 = (int)fVar15;
  if (uVar1 < 2) {
    uVar11 = 2;
    uVar10 = 1;
  }
  else {
    uVar10 = (uint)(uVar1 >> 1);
    uVar11 = uVar10 << 1;
  }
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  if (*(ushort *)((int)param_1 + 0x29c) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x55);
    uVar6 = (uint)*(ushort *)(param_1 + 0x54);
  }
  else {
    uVar6 = (int)fVar13 & ~(int)fVar13 >> 0x1f;
    uVar7 = *(ushort *)((int)param_1 + 0x29c) - 1;
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    uVar6 = uVar7 & 0xffff;
    uVar1 = *(ushort *)(param_1 + 0x55);
    *(short *)(param_1 + 0x54) = (short)uVar7;
  }
  if (uVar1 == 0) {
    uVar5 = (uint)*(ushort *)((int)param_1 + 0x2ac);
  }
  else {
    uVar5 = (int)fVar22 & ~(int)fVar22 >> 0x1f;
    uVar7 = uVar1 - 1;
    if ((int)uVar5 < (int)uVar7) {
      uVar7 = uVar5;
    }
    uVar5 = uVar7 & 0xffff;
    *(short *)((int)param_1 + 0x2ac) = (short)uVar7;
  }
  if (*(ushort *)((int)param_1 + 0x30c) != 0) {
    uVar4 = (int)fVar19 & ~(int)fVar19 >> 0x1f;
    uVar7 = *(ushort *)((int)param_1 + 0x30c) - 1;
    if ((int)uVar4 < (int)uVar7) {
      uVar7 = uVar4;
    }
    *(short *)(param_1 + 0x62) = (short)uVar7;
  }
  *(float *)(param_1 + 99) = (float)uVar6;
  *(float *)((int)param_1 + 0x31c) = (float)uVar5;
  fVar15 = (float)FUN_ram_40000844(0,(float)*(undefined8 *)((int)param_1 + 0x3c) * fVar2 * fVar12);
  *(float *)(param_1 + 100) = fVar15;
  if ((fVar15 <= 0.0) || ((float)param_1[8] <= 0.0)) {
    fVar16 = *(float *)(param_1 + 3);
    *(undefined1 *)((int)param_1 + 0x314) = 0;
  }
  else {
    fVar13 = (float)uVar6 + fVar15;
    *(undefined1 *)((int)param_1 + 0x314) = 1;
    if (0.0 <= fVar13) {
      fVar13 = fVar13 + fVar16;
    }
    else {
      fVar13 = fVar13 - fVar16;
    }
    fVar15 = (float)uVar5 + fVar15;
    if (0.0 <= fVar15) {
      fVar15 = fVar15 + fVar16;
    }
    else {
      fVar15 = fVar15 - fVar16;
    }
    if ((*(int *)(param_1 + 0x56) != 0) &&
       (uVar6 = (uint)*(ushort *)((int)param_1 + 0x2b4), uVar6 != 0)) {
      uVar7 = (int)fVar13 + 4;
      if ((uVar7 & 0xffff) < 4) {
        uVar7 = 4;
      }
      if ((uVar7 & 0xffff) < uVar6) {
        uVar6 = uVar7;
      }
      *(short *)((int)param_1 + 0x2b6) = (short)uVar6;
      *(undefined2 *)(param_1 + 0x57) = 0;
      memset(*(int *)(param_1 + 0x56),0,(uVar6 & 0xffff) << 2);
    }
    if ((*(int *)((int)param_1 + 700) != 0) &&
       (uVar6 = (uint)*(ushort *)(param_1 + 0x58), uVar6 != 0)) {
      uVar7 = (int)fVar15 + 4;
      if ((uVar7 & 0xffff) < 4) {
        uVar7 = 4;
      }
      if ((uVar7 & 0xffff) < uVar6) {
        uVar6 = uVar7;
      }
      *(short *)((int)param_1 + 0x2c2) = (short)uVar6;
      *(undefined2 *)((int)param_1 + 0x2c4) = 0;
      memset(*(int *)((int)param_1 + 700),0,(uVar6 & 0xffff) << 2);
    }
    fVar15 = *(float *)(param_1 + 8);
    fVar16 = (float)FUN_ram_40000844(0,fVar15);
    fVar22 = DAT_ram_40099f94;
    uVar18 = *(undefined4 *)(param_1 + 0x59);
    fVar16 = (fVar16 * DAT_ram_40099f94) / fVar12;
    *(float *)((int)param_1 + 0x2cc) = fVar16;
    uVar17 = FUN_ram_400009d2(uVar18);
    *(undefined4 *)(param_1 + 0x5a) = uVar17;
    uVar18 = FUN_ram_40000712(uVar18);
    fVar13 = DAT_ram_40094eb0;
    *(undefined4 *)((int)param_1 + 0x2d4) = uVar18;
    fVar16 = fVar16 * fVar13;
    uVar18 = FUN_ram_400009d2(fVar16);
    *(undefined4 *)(param_1 + 0x5b) = uVar18;
    uVar18 = FUN_ram_40000712(fVar16);
    *(undefined4 *)((int)param_1 + 0x2dc) = uVar18;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)((int)param_1 + 0x2e2) = 0;
    *(undefined4 *)((int)param_1 + 0x2e4) = uVar17;
    fVar16 = (float)FUN_ram_40000844(0,*(undefined8 *)((int)param_1 + 0x44));
    fVar16 = (float)FUN_ram_40000844(0,fVar16 * fVar15);
    uVar18 = *(undefined4 *)(param_1 + 0x5d);
    fVar16 = (fVar16 * fVar22) / fVar12;
    *(float *)((int)param_1 + 0x2ec) = fVar16;
    uVar17 = FUN_ram_400009d2(uVar18);
    fVar16 = fVar16 * fVar13;
    *(undefined4 *)(param_1 + 0x5e) = uVar17;
    uVar18 = FUN_ram_40000712(uVar18);
    *(undefined4 *)((int)param_1 + 0x2f4) = uVar18;
    uVar18 = FUN_ram_400009d2(fVar16);
    *(undefined4 *)(param_1 + 0x5f) = uVar18;
    uVar18 = FUN_ram_40000712(fVar16);
    fVar16 = *(float *)(param_1 + 3);
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined1 *)((int)param_1 + 0x302) = 0;
    *(undefined4 *)((int)param_1 + 0x2fc) = uVar18;
    *(undefined4 *)((int)param_1 + 0x304) = uVar17;
  }
  if (fVar16 <= 0.0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
  }
  else {
    fVar19 = (float)FUN_ram_40000844(0,*(undefined8 *)((int)param_1 + 0x1c));
    uVar18 = DAT_ram_40094e90;
    fVar13 = DAT_ram_40094620;
    fVar15 = (float)*(ushort *)((int)param_1 + 0x2ac) / fVar12;
    fVar22 = fVar16;
    if (fVar16 <= fVar2) {
      fVar22 = fVar2;
    }
    fVar21 = DAT_ram_4009b064;
    if (DAT_ram_40094620 < (float)*(ushort *)(param_1 + 0x54) / fVar12) {
      fVar21 = ((float)*(ushort *)(param_1 + 0x54) / fVar12) * DAT_ram_40099fa8;
    }
    uVar20 = FUN_ram_40000d44(DAT_ram_40094e90,fVar21 / fVar22);
    param_1[0xb] = uVar20;
    fVar22 = fVar16 * fVar19;
    if (fVar16 * fVar19 <= fVar2) {
      fVar22 = fVar2;
    }
    fVar16 = DAT_ram_4009b064;
    if (fVar13 < fVar15) {
      fVar16 = fVar15 * DAT_ram_40099fa8;
    }
    uVar20 = FUN_ram_40000d44(uVar18,fVar16 / fVar22);
    *(undefined8 *)((int)param_1 + 0x5c) = uVar20;
  }
  iVar3 = iVar3 * 2;
  if ((int)(uint)*(ushort *)((int)param_1 + 0x15c) < (int)(iVar3 * uVar9)) {
    if (iVar3 == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (int)(uint)*(ushort *)((int)param_1 + 0x15c) / iVar3;
    }
    if (uVar9 == 0) {
      uVar9 = 1;
      iVar3 = 1;
    }
  }
  iVar8 = *(int *)(param_1 + 0x2b);
  *(float *)((int)param_1 + 0x14c) = -ABS((float)*(undefined8 *)((int)param_1 + 0x24));
  *(int *)(param_1 + 0x2a) = iVar3;
  *(uint *)((int)param_1 + 0x154) = uVar9;
  if (iVar3 <= iVar8) {
    if (iVar3 != 0) {
      iVar8 = iVar8 % iVar3;
    }
    *(int *)(param_1 + 0x2b) = iVar8;
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x4f);
  iVar3 = 2;
  if ((uVar9 < uVar11) && (uVar10 = (int)uVar9 >> 1, uVar9 < 2)) {
    uVar10 = 1;
    iVar3 = 1;
  }
  iVar8 = *(int *)((int)param_1 + 0x274);
  *(int *)(param_1 + 0x4d) = (int)param_1[5];
  *(int *)((int)param_1 + 0x26c) = iVar3;
  *(uint *)(param_1 + 0x4e) = uVar10;
  if (iVar3 <= iVar8) {
    if (iVar3 != 0) {
      iVar8 = iVar8 % iVar3;
    }
    *(int *)((int)param_1 + 0x274) = iVar8;
  }
  uVar18 = FUN_ram_40000bd8((fVar14 * DAT_ram_40099fac) / fVar12);
  fVar16 = DAT_ram_4009b068;
  *(undefined4 *)((int)param_1 + 0x324) = uVar18;
  uVar18 = FUN_ram_40000bd8(fVar16 / fVar12);
  *(undefined1 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x73) = uVar18;
  return;
}


/* NanoCore 1.11, address 0x40083b0e.
 * REA evidence: ev_b651cf8e95244cce47075c6d9fdbb77af241d5db65330f6eafbac160f07fcf25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40083b0e(float param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x1d428);
    uVar8 = DAT_ram_4009b090;
    uVar7 = DAT_ram_4009b084;
    uVar6 = DAT_ram_4009b080;
    uVar5 = DAT_ram_4009b07c;
    uVar4 = DAT_ram_4009b078;
    uVar3 = DAT_ram_4009b074;
    uVar2 = DAT_ram_4009b070;
    uVar1 = DAT_ram_4009a8b4;
    if (param_1 <= DAT_ram_40094e80) {
      param_1 = DAT_ram_40099f80;
    }
    uVar9 = (ulonglong)DAT_ram_4009b088;
    uVar10 = (ulonglong)DAT_ram_4009b08c;
    uVar11 = (ulonglong)DAT_ram_4009b094;
    uVar13 = (ulonglong)DAT_ram_4009b09c;
    uVar14 = (ulonglong)DAT_ram_4009b0a0;
    uVar12 = (ulonglong)DAT_ram_4009b098;
    *(undefined4 *)((int)param_2 + 4) = DAT_ram_4009b06c;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((int)param_2 + 0xc) = uVar3;
    *(undefined4 *)(param_2 + 2) = uVar4;
    *(undefined4 *)((int)param_2 + 0x14) = uVar5;
    *(undefined4 *)(param_2 + 3) = uVar6;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 4) = uVar7;
    *(ulonglong *)((int)param_2 + 0x24) = uVar9;
    param_2[5] = uVar10;
    *(ulonglong *)((int)param_2 + 0x34) = uVar11;
    *(undefined4 *)((int)param_2 + 0x2c) = uVar8;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar13;
    param_2[8] = uVar14;
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)(param_2 + 6) = 1;
    param_2[7] = uVar12;
    uVar9 = (ulonglong)DAT_ram_40094604;
    uVar10 = (ulonglong)DAT_ram_40094ee8;
    *(ulonglong *)((int)param_2 + 0x44) = (ulonglong)DAT_ram_4009a8b8;
    param_2[9] = uVar9;
    param_2[10] = uVar10;
    *(undefined2 *)((int)param_2 + 0x29c) = 0x1001;
    *(int *)(param_2 + 0x53) = (int)param_2 + 0x414;
    memset((int)param_2 + 0x414,0,0x4004);
    *(undefined2 *)(param_2 + 0x55) = 0x801;
    *(ulonglong **)((int)param_2 + 0x2a4) = param_2 + 0x883;
    memset(param_2 + 0x883,0,0x2004);
    *(undefined2 *)((int)param_2 + 0x30c) = 0x401;
    *(int *)(param_2 + 0x61) = (int)param_2 + 0x641c;
    memset((int)param_2 + 0x641c,0,0x1004);
    uVar1 = DAT_ram_4009b0a4;
    *(undefined4 *)((int)param_2 + 0x2b4) = DAT_ram_4009b0a4;
    *(ulonglong **)(param_2 + 0x56) = param_2 + 0xe84;
    memset(param_2 + 0xe84,0,0x4000);
    *(undefined4 *)(param_2 + 0x58) = uVar1;
    *(ulonglong **)((int)param_2 + 700) = param_2 + 0x1684;
    memset(param_2 + 0x1684,0,0x4000);
    *(undefined4 *)(param_2 + 0x2a) = 1;
    *(undefined4 *)((int)param_2 + 0x154) = 1;
    *(undefined2 *)((int)param_2 + 0x15c) = 0x1800;
    *(ulonglong **)(param_2 + 0x2c) = param_2 + 0x1e84;
    memset(param_2 + 0x1e84,0,0x6000);
    *(undefined4 *)((int)param_2 + 0x26c) = 1;
    *(undefined4 *)(param_2 + 0x4e) = 1;
    *(int *)((int)param_2 + 0x27c) = (int)param_2 + 0x1b424;
    *(undefined2 *)(param_2 + 0x4f) = 0x400;
    memset((int)param_2 + 0x1b424,0,0x1000);
    *(undefined1 *)((int)param_2 + 0x54) = 1;
    FUN_ram_4008357e(param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40083d12.
 * REA evidence: ev_31ac70466cf00acb7d0ea5b08e6c4f55cf145c7a8818968133ab9dc58b4fccbe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40083d12(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)(param_1 + 4);
    puVar5 = param_2 + 0x14;
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *puVar4 = *param_2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      param_2 = param_2 + 4;
      puVar4 = puVar4 + 4;
    } while (param_2 != puVar5);
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}


/* NanoCore 1.11, address 0x40083d42.
 * REA evidence: ev_5eee4eb02e4f1d0efd783eb6e543bfca798b97093ab34ea916c968b2b6c14efa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40083d42(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x298) == 0) || (*(ushort *)(param_1 + 0x29c) == 0)) {
      iVar3 = *(int *)(param_1 + 0x2a4);
    }
    else {
      memset(*(int *)(param_1 + 0x298),0,(uint)*(ushort *)(param_1 + 0x29c) << 2);
      iVar3 = *(int *)(param_1 + 0x2a4);
      *(undefined2 *)(param_1 + 0x29e) = 0;
    }
    if ((iVar3 != 0) && (*(ushort *)(param_1 + 0x2a8) != 0)) {
      memset(iVar3,0,(uint)*(ushort *)(param_1 + 0x2a8) << 2);
      *(undefined2 *)(param_1 + 0x2aa) = 0;
    }
    if ((*(int *)(param_1 + 0x308) != 0) && (*(ushort *)(param_1 + 0x30c) != 0)) {
      memset(*(int *)(param_1 + 0x308),0,(uint)*(ushort *)(param_1 + 0x30c) << 2);
      *(undefined2 *)(param_1 + 0x30e) = 0;
    }
    if ((*(int *)(param_1 + 0x2b0) != 0) && (*(ushort *)(param_1 + 0x2b6) != 0)) {
      memset(*(int *)(param_1 + 0x2b0),0,(uint)*(ushort *)(param_1 + 0x2b6) << 2);
      *(undefined2 *)(param_1 + 0x2b8) = 0;
    }
    if ((*(int *)(param_1 + 700) != 0) && (*(ushort *)(param_1 + 0x2c2) != 0)) {
      memset(*(int *)(param_1 + 700),0,(uint)*(ushort *)(param_1 + 0x2c2) << 2);
      *(undefined2 *)(param_1 + 0x2c4) = 0;
    }
    if (*(int *)(param_1 + 0x160) != 0) {
      memset(*(int *)(param_1 + 0x160),0,(uint)*(ushort *)(param_1 + 0x15c) << 2);
    }
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (*(int *)(param_1 + 0x27c) != 0) {
      memset(*(int *)(param_1 + 0x27c),0,(uint)*(ushort *)(param_1 + 0x278) << 2);
    }
    fVar2 = DAT_ram_40094eb0;
    uVar4 = DAT_ram_40094604;
    fVar1 = *(float *)(param_1 + 0x2cc) * DAT_ram_40094eb0;
    *(undefined4 *)(param_1 + 0x2e8) = DAT_ram_4009460c;
    *(undefined4 *)(param_1 + 0x2d4) = uVar4;
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    uVar4 = FUN_ram_400009d2(fVar1);
    *(undefined4 *)(param_1 + 0x2d8) = uVar4;
    uVar5 = FUN_ram_40000712(fVar1);
    uVar6 = DAT_ram_4009b0ac;
    uVar4 = DAT_ram_4009b0a8;
    fVar2 = *(float *)(param_1 + 0x2ec) * fVar2;
    *(undefined4 *)(param_1 + 0x2dc) = uVar5;
    *(undefined4 *)(param_1 + 0x2f0) = uVar4;
    *(undefined4 *)(param_1 + 0x2f4) = uVar6;
    *(undefined2 *)(param_1 + 0x2e0) = 0;
    *(undefined1 *)(param_1 + 0x2e2) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    uVar6 = FUN_ram_400009d2(fVar2);
    *(undefined4 *)(param_1 + 0x2f8) = uVar6;
    uVar6 = FUN_ram_40000712(fVar2);
    *(undefined1 *)(param_1 + 0x302) = 0;
    *(undefined4 *)(param_1 + 0x304) = uVar4;
    *(undefined2 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = uVar6;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x40c) = 0;
    *(undefined4 *)(param_1 + 0x410) = 0;
    return;
  }
  return;
}


