/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4005d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4005d39a.
 * REA evidence: ev_e800498b139b8c73b17bafbd753257d374faad803f5677a78356fed6cc304107
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005d39a(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1 != (ulonglong *)0x0) {
    memset(param_1,0,0x74924);
    uVar1 = (ulonglong)DAT_ram_400930ec;
    uVar2 = (ulonglong)DAT_ram_400937b0;
    uVar3 = (ulonglong)DAT_ram_40098118;
    uVar4 = (ulonglong)DAT_ram_4009811c;
    *param_1 = (ulonglong)DAT_ram_40092878;
    *(undefined **)((int)param_1 + 0x14) = &sedeleg;
    *(ulonglong *)((int)param_1 + 4) = uVar1;
    param_1[1] = uVar2;
    *(ulonglong *)((int)param_1 + 0xc) = uVar3;
    param_1[2] = uVar4;
    FUN_ram_4005b7e8(param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005d3fa.
 * REA evidence: ev_c04117ea059ed4dda6554d04870d1a6d7f16812ea5278a866f40eeba3c34eb5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005d3fa(undefined8 param_1,undefined8 *param_2)

{
  if (((param_2 != (undefined8 *)0x0) && (0.0 < (float)param_1)) &&
     ((float)*param_2 != (float)param_1)) {
    *param_2 = param_1;
    *(undefined **)((int)param_2 + 0x14) = &sedeleg;
    *(undefined1 *)((int)param_2 + 0x16) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4005d41e.
 * REA evidence: ev_fa553f9f07b0d6e1d027fd2b14aa869f6c9a280844e9971615b4a60d09f38ab0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005d41e(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 0x10) = param_2[3];
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4005d43e.
 * REA evidence: ev_36fdacf66ac14017ac8dc28c8ae14f98cf4d6d7b8232d43575c3fddff5b2779e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005d43e(int param_1)

{
  if (param_1 != 0) {
    memset((void *)(param_1 + 0x1c),0,0x10a8);
    *(undefined2 *)(param_1 + 0x1a) = 0;
    memset((void *)(param_1 + 0x14c8),0,0x10000);
    *(undefined2 *)(param_1 + 0x10c6) = 0;
    if ((*(void **)(param_1 + 0x114c8) != (void *)0x0) && (*(ushort *)(param_1 + 0x114cc) != 0)) {
      memset(*(void **)(param_1 + 0x114c8),0,(uint)*(ushort *)(param_1 + 0x114cc) << 2);
      *(undefined2 *)(param_1 + 0x114ce) = 0;
    }
    if ((*(void **)(param_1 + 0x114d4) != (void *)0x0) && (*(ushort *)(param_1 + 0x114d8) != 0)) {
      memset(*(void **)(param_1 + 0x114d4),0,(uint)*(ushort *)(param_1 + 0x114d8) << 2);
      *(undefined2 *)(param_1 + 0x114da) = 0;
    }
    if ((*(void **)(param_1 + 0x114e0) != (void *)0x0) && (*(ushort *)(param_1 + 0x114e4) != 0)) {
      memset(*(void **)(param_1 + 0x114e0),0,(uint)*(ushort *)(param_1 + 0x114e4) << 2);
      *(undefined2 *)(param_1 + 0x114e6) = 0;
    }
    if ((*(void **)(param_1 + 0x114ec) != (void *)0x0) && (*(ushort *)(param_1 + 0x114f0) != 0)) {
      memset(*(void **)(param_1 + 0x114ec),0,(uint)*(ushort *)(param_1 + 0x114f0) << 2);
      *(undefined2 *)(param_1 + 0x114f2) = 0;
    }
    if ((*(void **)(param_1 + 0x114f8) != (void *)0x0) && (*(ushort *)(param_1 + 0x114fc) != 0)) {
      memset(*(void **)(param_1 + 0x114f8),0,(uint)*(ushort *)(param_1 + 0x114fc) << 2);
      *(undefined2 *)(param_1 + 0x114fe) = 0;
    }
    if ((*(void **)(param_1 + 0x11504) != (void *)0x0) && (*(ushort *)(param_1 + 0x11508) != 0)) {
      memset(*(void **)(param_1 + 0x11504),0,(uint)*(ushort *)(param_1 + 0x11508) << 2);
      *(undefined2 *)(param_1 + 0x1150a) = 0;
    }
    if ((*(void **)(param_1 + 0x11510) != (void *)0x0) && (*(ushort *)(param_1 + 0x11514) != 0)) {
      memset(*(void **)(param_1 + 0x11510),0,(uint)*(ushort *)(param_1 + 0x11514) << 2);
      *(undefined2 *)(param_1 + 0x11516) = 0;
    }
    if ((*(void **)(param_1 + 0x1151c) != (void *)0x0) && (*(ushort *)(param_1 + 0x11520) != 0)) {
      memset(*(void **)(param_1 + 0x1151c),0,(uint)*(ushort *)(param_1 + 0x11520) << 2);
      *(undefined2 *)(param_1 + 0x11522) = 0;
    }
    if ((*(void **)(param_1 + 0x17d68) != (void *)0x0) && (*(ushort *)(param_1 + 0x17d6c) != 0)) {
      memset(*(void **)(param_1 + 0x17d68),0,(uint)*(ushort *)(param_1 + 0x17d6c) << 2);
      *(undefined2 *)(param_1 + 0x17d6e) = 0;
    }
    if ((*(void **)(param_1 + 0x17d74) != (void *)0x0) && (*(ushort *)(param_1 + 0x17d78) != 0)) {
      memset(*(void **)(param_1 + 0x17d74),0,(uint)*(ushort *)(param_1 + 0x17d78) << 2);
      *(undefined2 *)(param_1 + 0x17d7a) = 0;
    }
    if ((*(void **)(param_1 + 0x17d80) != (void *)0x0) && (*(ushort *)(param_1 + 0x17d84) != 0)) {
      memset(*(void **)(param_1 + 0x17d80),0,(uint)*(ushort *)(param_1 + 0x17d84) << 2);
      *(undefined2 *)(param_1 + 0x17d86) = 0;
    }
    if ((*(void **)(param_1 + 0x18fb0) != (void *)0x0) && (*(ushort *)(param_1 + 0x18fb4) != 0)) {
      memset(*(void **)(param_1 + 0x18fb0),0,(uint)*(ushort *)(param_1 + 0x18fb4) << 2);
      *(undefined2 *)(param_1 + 0x18fb8) = 0;
      *(undefined4 *)(param_1 + 0x18fbc) = 0;
    }
    *(undefined4 *)(param_1 + 0x74844) = 0;
    *(undefined4 *)(param_1 + 0x74884) = 0;
    *(undefined4 *)(param_1 + 0x74888) = 0;
    *(undefined4 *)(param_1 + 0x746bc) = 0;
    if ((*(void **)(param_1 + 0x18fc0) != (void *)0x0) && (*(ushort *)(param_1 + 0x18fc4) != 0)) {
      memset(*(void **)(param_1 + 0x18fc0),0,(uint)*(ushort *)(param_1 + 0x18fc4) << 2);
      *(undefined2 *)(param_1 + 0x18fc8) = 0;
      *(undefined4 *)(param_1 + 0x18fcc) = 0;
    }
    *(undefined4 *)(param_1 + 0x7484c) = 0;
    *(undefined4 *)(param_1 + 0x74890) = 0;
    *(undefined4 *)(param_1 + 0x74894) = 0;
    *(undefined4 *)(param_1 + 0x746c0) = 0;
    if ((*(void **)(param_1 + 0x18fd0) != (void *)0x0) && (*(ushort *)(param_1 + 0x18fd4) != 0)) {
      memset(*(void **)(param_1 + 0x18fd0),0,(uint)*(ushort *)(param_1 + 0x18fd4) << 2);
      *(undefined2 *)(param_1 + 0x18fd8) = 0;
      *(undefined4 *)(param_1 + 0x18fdc) = 0;
    }
    *(undefined4 *)(param_1 + 0x74854) = 0;
    *(undefined4 *)(param_1 + 0x7489c) = 0;
    *(undefined4 *)(param_1 + 0x748a0) = 0;
    *(undefined4 *)(param_1 + 0x746c4) = 0;
    if ((*(void **)(param_1 + 0x18fe0) != (void *)0x0) && (*(ushort *)(param_1 + 0x18fe4) != 0)) {
      memset(*(void **)(param_1 + 0x18fe0),0,(uint)*(ushort *)(param_1 + 0x18fe4) << 2);
      *(undefined2 *)(param_1 + 0x18fe8) = 0;
      *(undefined4 *)(param_1 + 0x18fec) = 0;
    }
    *(undefined4 *)(param_1 + 0x7485c) = 0;
    *(undefined4 *)(param_1 + 0x748a8) = 0;
    *(undefined4 *)(param_1 + 0x748ac) = 0;
    *(undefined4 *)(param_1 + 0x746c8) = 0;
    if ((*(void **)(param_1 + 0x18ff0) != (void *)0x0) && (*(ushort *)(param_1 + 0x18ff4) != 0)) {
      memset(*(void **)(param_1 + 0x18ff0),0,(uint)*(ushort *)(param_1 + 0x18ff4) << 2);
      *(undefined2 *)(param_1 + 0x18ff8) = 0;
      *(undefined4 *)(param_1 + 0x18ffc) = 0;
    }
    *(undefined4 *)(param_1 + 0x74864) = 0;
    *(undefined4 *)(param_1 + 0x748b4) = 0;
    *(undefined4 *)(param_1 + 0x748b8) = 0;
    *(undefined4 *)(param_1 + 0x746cc) = 0;
    if ((*(void **)(param_1 + 0x19000) != (void *)0x0) && (*(ushort *)(param_1 + 0x19004) != 0)) {
      memset(*(void **)(param_1 + 0x19000),0,(uint)*(ushort *)(param_1 + 0x19004) << 2);
      *(undefined2 *)(param_1 + 0x19008) = 0;
      *(undefined4 *)(param_1 + 0x1900c) = 0;
    }
    *(undefined4 *)(param_1 + 0x7486c) = 0;
    *(undefined4 *)(param_1 + 0x748c0) = 0;
    *(undefined4 *)(param_1 + 0x748c4) = 0;
    *(undefined4 *)(param_1 + 0x746d0) = 0;
    if ((*(void **)(param_1 + 0x19010) != (void *)0x0) && (*(ushort *)(param_1 + 0x19014) != 0)) {
      memset(*(void **)(param_1 + 0x19010),0,(uint)*(ushort *)(param_1 + 0x19014) << 2);
      *(undefined2 *)(param_1 + 0x19018) = 0;
      *(undefined4 *)(param_1 + 0x1901c) = 0;
    }
    *(undefined4 *)(param_1 + 0x74874) = 0;
    *(undefined4 *)(param_1 + 0x748cc) = 0;
    *(undefined4 *)(param_1 + 0x748d0) = 0;
    *(undefined4 *)(param_1 + 0x746d4) = 0;
    if ((*(void **)(param_1 + 0x19020) != (void *)0x0) && (*(ushort *)(param_1 + 0x19024) != 0)) {
      memset(*(void **)(param_1 + 0x19020),0,(uint)*(ushort *)(param_1 + 0x19024) << 2);
      *(undefined2 *)(param_1 + 0x19028) = 0;
      *(undefined4 *)(param_1 + 0x1902c) = 0;
    }
    *(undefined4 *)(param_1 + 0x7487c) = 0;
    *(undefined4 *)(param_1 + 0x748d8) = 0;
    *(undefined4 *)(param_1 + 0x748dc) = 0;
    *(undefined1 *)(param_1 + 0x746dc) = 0;
    *(undefined4 *)(param_1 + 0x746d8) = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005d7dc.
 * REA evidence: ev_4f22147898441b6e35883be26ee67176268d25290e75b659df2cc2d3494b850c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4005d7dc(int param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
                     char *param_7,int *param_8)

{
  byte bVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  undefined4 uVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  char cVar24;
  float *pfVar25;
  uint uVar26;
  byte bVar27;
  code *pcVar28;
  int iVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  byte bStack_c1;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  fVar11 = DAT_ram_40098150;
  fVar10 = DAT_ram_4009814c;
  fVar9 = DAT_ram_400937b4;
  fVar8 = DAT_ram_400936e0;
  fVar7 = DAT_ram_400930d0;
  fVar6 = DAT_ram_400930bc;
  fVar5 = DAT_ram_40092838;
  fVar4 = DAT_ram_4009281c;
  uVar26 = (uint)*(byte *)(param_1 + 0x7de);
  iVar14 = uVar26 * 0x2dc;
  pbVar13 = (byte *)(param_1 + iVar14);
  bVar27 = 0;
  do {
    uVar12 = (uint)*pbVar13;
    if (uVar12 < 10) {
      iVar22 = uVar26 * 0x2dc + uVar12 * 0x48 + param_1;
      if ((*(char *)(iVar22 + 0x11) == '\0') || (iVar19 = *(int *)(iVar22 + 0xc), 9 < iVar19 - 1U))
      {
        *(undefined1 *)(uVar12 + param_1 + 0x7d4) = 0;
        goto LAB_ram_4005d8f4;
      }
      pcVar28 = *(code **)(&DAT_ram_400981a8 + iVar19 * 8);
      if (pcVar28 == (code *)0x0) goto LAB_ram_4005d8f4;
      bVar1 = (&DAT_ram_400981ac)[iVar19 * 8];
      iVar21 = param_4;
      if (bVar27 == 0) {
        if ((*(char *)(param_1 + 0x7df) == '\0') ||
           ((((bVar1 & 2) == 0 && ((iVar19 != 10 || (*(char *)(iVar22 + 0x10) != '\x01')))) ||
            (param_3 == 0)))) {
          if ((bVar1 & 1) == 0) {
            bVar27 = 0;
            uVar23 = 0;
          }
          else {
            iVar21 = param_2;
            uVar23 = 0;
          }
        }
        else {
          bVar27 = bVar1 & 1;
          FUN_ram_4000305c(param_3,param_2,param_6 << 2);
          iVar21 = param_2;
          uVar23 = param_3;
          if ((bVar1 & 1) == 0) {
            bVar27 = 1;
            iVar21 = param_4;
            uVar23 = param_5;
          }
        }
      }
      else {
        uVar23 = param_5;
        if ((bVar1 & 1) != 0) {
          uVar23 = param_3;
        }
        if ((bVar1 & 1) != 0) {
          iVar21 = param_2;
        }
      }
      iVar19 = param_1 + uVar12;
      iVar22 = uVar12 * 0x30 + 0x5b8 + param_1;
      pfVar25 = (float *)(iVar14 + 0x14 + uVar12 * 0x48 + param_1);
      if (*(char *)(iVar19 + 0x7d4) == '\0') {
LAB_ram_4005d9ac:
        FUN_ram_4000305c(iVar22,pfVar25,0x30);
        iVar22 = uVar26 * 0x2dc + uVar12 * 0x48 + param_1;
        iVar29 = *(int *)(iVar22 + 0xc);
        *(int *)(param_1 + (uVar12 + 0x1e4) * 4 + 8) = iVar29;
        cVar24 = *(char *)(iVar22 + 0x10);
        *(char *)(iVar19 + 0x7c0) = cVar24;
        uVar2 = *(undefined1 *)(iVar22 + 0x11);
        *(undefined1 *)(iVar19 + 0x7d4) = 1;
        *(undefined1 *)(iVar19 + 0x7ca) = uVar2;
        FUN_ram_4000305c(&fStack_c0,pfVar25,0x30);
        pfVar25 = &fStack_c0;
      }
      else {
        iVar20 = uVar12 * 0x48 + uVar26 * 0x2dc + param_1;
        iVar29 = *(int *)(iVar20 + 0xc);
        if (((*(int *)(param_1 + (uVar12 + 0x1e4) * 4 + 8) != iVar29) ||
            (cVar24 = *(char *)(iVar20 + 0x10), *(char *)(iVar19 + 0x7c0) != cVar24)) ||
           (*(char *)(iVar19 + 0x7ca) != *(char *)(iVar20 + 0x11))) goto LAB_ram_4005d9ac;
        iVar22 = FUN_ram_40002ffc(iVar22,pfVar25,0x30);
        if (iVar22 != 0) {
          if (param_6 == _DAT_ram_3007fbac) {
            fVar30 = (float)_DAT_ram_3007fba8;
            fVar33 = *(float *)(gp + -0x24);
          }
          else {
            fVar30 = (float)FUN_ram_40000c0e(-(float)param_6 / fVar10);
            fVar30 = fVar4 - fVar30;
            if (fVar30 < 0.0) {
              fVar30 = 0.0;
            }
            else if (fVar4 < fVar30) {
              fVar30 = fVar4;
            }
            fVar32 = (float)param_6 / fVar11;
            fVar33 = fVar5;
            if ((fVar5 <= fVar32) && (fVar33 = fVar32, fVar4 < fVar32)) {
              fVar33 = fVar4;
            }
            _DAT_ram_3007fba8 = fVar30;
            *(float *)(gp + -0x24) = fVar33;
            _DAT_ram_3007fba8 = CONCAT44(param_6,_DAT_ram_3007fba8);
          }
          fVar32 = *(float *)(uVar12 * 0x30 + param_1 + 0x5b8);
          fStack_c0 = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x14);
          fVar3 = fStack_c0 - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar3 * fVar30;
            fStack_c0 = fVar33;
            if ((fVar3 <= fVar33) && (fStack_c0 = fVar3, fVar3 < -fVar33)) {
              fStack_c0 = -fVar33;
            }
            fStack_c0 = fVar32 + fStack_c0;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5b8) = fStack_c0;
          fVar32 = *(float *)(iVar22 + 0x5bc);
          fStack_bc = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x18);
          fVar3 = fStack_bc - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar3 * fVar30;
            fStack_bc = fVar33;
            if ((fVar3 <= fVar33) && (fStack_bc = fVar3, fVar3 < -fVar33)) {
              fStack_bc = -fVar33;
            }
            fStack_bc = fVar32 + fStack_bc;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5bc) = fStack_bc;
          fVar32 = *(float *)(iVar22 + 0x5c0);
          fStack_b8 = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x1c);
          fVar3 = fStack_b8 - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar3 * fVar30;
            fStack_b8 = fVar33;
            if ((fVar3 <= fVar33) && (fStack_b8 = fVar3, fVar3 < -fVar33)) {
              fStack_b8 = -fVar33;
            }
            fStack_b8 = fVar32 + fStack_b8;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5c0) = fStack_b8;
          fVar32 = *(float *)(iVar22 + 0x5c4);
          fStack_b4 = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x20);
          fVar3 = fStack_b4 - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar3 * fVar30;
            fStack_b4 = fVar33;
            if ((fVar3 <= fVar33) && (fStack_b4 = fVar3, fVar3 < -fVar33)) {
              fStack_b4 = -fVar33;
            }
            fStack_b4 = fVar32 + fStack_b4;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5c4) = fStack_b4;
          fVar32 = *(float *)(iVar22 + 0x5c8);
          fStack_b0 = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x24);
          fVar3 = fStack_b0 - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar3 * fVar30;
            fStack_b0 = fVar33;
            if ((fVar3 <= fVar33) && (fStack_b0 = fVar3, fVar3 < -fVar33)) {
              fStack_b0 = -fVar33;
            }
            fStack_b0 = fVar32 + fStack_b0;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5c8) = fStack_b0;
          fVar32 = *(float *)(iVar22 + 0x5cc);
          fStack_ac = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x28);
          fVar3 = fStack_ac - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar3 * fVar30;
            fStack_ac = fVar33;
            if ((fVar3 <= fVar33) && (fStack_ac = fVar3, fVar3 < -fVar33)) {
              fStack_ac = -fVar33;
            }
            fStack_ac = fVar32 + fStack_ac;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5cc) = fStack_ac;
          fVar32 = *(float *)(iVar22 + 0x5d0);
          fStack_a8 = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x2c);
          fVar3 = fStack_a8 - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar30 * fVar3;
            fStack_a8 = fVar33;
            if ((fVar3 <= fVar33) && (fStack_a8 = fVar3, fVar3 < -fVar33)) {
              fStack_a8 = -fVar33;
            }
            fStack_a8 = fVar32 + fStack_a8;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5d0) = fStack_a8;
          fVar32 = *(float *)(iVar22 + 0x5d4);
          fStack_a4 = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x30);
          fVar3 = fStack_a4 - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar30 * fVar3;
            fStack_a4 = fVar33;
            if ((fVar3 <= fVar33) && (fStack_a4 = fVar3, fVar3 < -fVar33)) {
              fStack_a4 = -fVar33;
            }
            fStack_a4 = fVar32 + fStack_a4;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5d4) = fStack_a4;
          fVar32 = *(float *)(iVar22 + 0x5d8);
          fStack_a0 = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x34);
          fVar3 = fStack_a0 - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar30 * fVar3;
            fStack_a0 = fVar33;
            if ((fVar3 <= fVar33) && (fStack_a0 = fVar3, fVar3 < -fVar33)) {
              fStack_a0 = -fVar33;
            }
            fStack_a0 = fVar32 + fStack_a0;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5d8) = fStack_a0;
          fVar32 = *(float *)(iVar22 + 0x5dc);
          fStack_9c = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x38);
          fVar3 = fStack_9c - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar30 * fVar3;
            fStack_9c = fVar33;
            if ((fVar3 <= fVar33) && (fStack_9c = fVar3, fVar3 < -fVar33)) {
              fStack_9c = -fVar33;
            }
            fStack_9c = fVar32 + fStack_9c;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5dc) = fStack_9c;
          fVar32 = *(float *)(iVar22 + 0x5e0);
          fStack_98 = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x3c);
          fVar3 = fStack_98 - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar3 = fVar30 * fVar3;
            fStack_98 = fVar33;
            if ((fVar3 <= fVar33) && (fStack_98 = fVar3, fVar3 < -fVar33)) {
              fStack_98 = -fVar33;
            }
            fStack_98 = fVar32 + fStack_98;
          }
          iVar22 = uVar12 * 0x30 + param_1;
          *(float *)(iVar22 + 0x5e0) = fStack_98;
          fVar32 = *(float *)(iVar22 + 0x5e4);
          fStack_94 = (float)*(undefined8 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x40);
          fVar3 = fStack_94 - fVar32;
          if (fVar5 < ABS(fVar3)) {
            fVar30 = fVar30 * fVar3;
            fStack_94 = fVar33;
            if ((fVar30 <= fVar33) && (fStack_94 = -fVar33, -fVar33 <= fVar30)) {
              fStack_94 = fVar30;
            }
            fStack_94 = fVar32 + fStack_94;
          }
          *(float *)(uVar12 * 0x30 + param_1 + 0x5e4) = fStack_94;
          pfVar25 = &fStack_c0;
          iVar22 = uVar26 * 0x2dc + uVar12 * 0x48 + param_1;
          iVar29 = *(int *)(iVar22 + 0xc);
          cVar24 = *(char *)(iVar22 + 0x10);
        }
      }
      if (iVar29 - 4U < 2) {
        iVar22 = uVar26 * 0x2dc + uVar12 * 0x48 + param_1;
        if (iVar29 == 4) {
          uVar17 = FUN_ram_4006aa00(cVar24);
          if (uVar17 < 0xc) {
            iVar19 = *(int *)(iVar22 + 0xc);
            cVar24 = *(char *)(iVar22 + 0x10);
            if (*(char *)(uVar17 + iVar22 + 0x44) == '\0') goto LAB_ram_4005e03e;
            if (iVar19 == 5) {
              if ((cVar24 != '\a') || (*(char *)(iVar22 + 0x47) == '\0')) goto joined_r0x4005e06c;
              goto LAB_ram_4005e064;
            }
            pfVar16 = &fStack_c0;
            if (pfVar25 != pfVar16) goto LAB_ram_4005dacc;
            goto LAB_ram_4005daf2;
          }
          iVar19 = *(int *)(iVar22 + 0xc);
          cVar24 = *(char *)(iVar22 + 0x10);
LAB_ram_4005e03e:
          if (((iVar19 == 5) && (cVar24 == '\a')) &&
             (*(char *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x47) != '\0'))
          goto LAB_ram_4005e064;
        }
        else {
          if ((cVar24 == '\a') && (*(char *)(iVar22 + 0x47) != '\0')) {
LAB_ram_4005e064:
            cVar24 = '\a';
          }
          else if (*(char *)(iVar22 + 0x44) == '\0') goto LAB_ram_4005da22;
joined_r0x4005e06c:
          iVar19 = 5;
          pfVar16 = &fStack_c0;
          if (pfVar25 != pfVar16) {
LAB_ram_4005dacc:
            pfVar16 = (float *)FUN_ram_4000305c(&fStack_c0,pfVar25,0x30);
LAB_ram_4005daf2:
            if (1 < iVar19 - 4U) goto LAB_ram_4005da22;
          }
          if ((((param_7 != (char *)0x0) && (*param_7 != '\0')) &&
              (fVar30 = (float)*(undefined8 *)(param_7 + 4), fVar6 <= fVar30)) && (fVar30 <= fVar7))
          {
            if (iVar19 == 5) {
              iVar22 = uVar26 * 0x2dc + uVar12 * 0x48 + param_1;
              uVar17 = *(byte *)(iVar22 + 0x44) - 1 & 0xff;
              if ((10 < uVar17) || ((float)*(undefined8 *)(&DAT_ram_4009817c + uVar17 * 4) <= 0.0))
              {
                if ((cVar24 == '\a') &&
                   ((uVar17 = *(byte *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x47) - 1 & 0xff,
                    uVar17 < 0xb &&
                    (fVar32 = (float)*(undefined8 *)(&DAT_ram_4009817c + uVar17 * 4), 0.0 < fVar32))
                   )) goto LAB_ram_4005e16a;
              }
              else {
                fStack_c0 = (float)FUN_ram_4005faf2(((float)*(undefined8 *)
                                                             (&DAT_ram_4009817c + uVar17 * 4) *
                                                    fVar9) / fVar30,cVar24);
                cVar24 = *(char *)(iVar22 + 0x10);
                pfVar25 = pfVar16;
                if ((cVar24 == '\a') &&
                   ((uVar17 = *(byte *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x47) - 1 & 0xff,
                    uVar17 < 0xb &&
                    (fVar32 = (float)*(undefined8 *)(&DAT_ram_4009817c + uVar17 * 4), 0.0 < fVar32))
                   )) {
                  fVar30 = (float)*(undefined8 *)(param_7 + 4);
LAB_ram_4005e16a:
                  fStack_b4 = (float)FUN_ram_4005fb78(fVar30 / (fVar32 * fVar8));
                  cVar24 = *(char *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x10);
                  pfVar25 = pfVar16;
                }
              }
            }
            else {
              uVar17 = FUN_ram_4006aa00(cVar24);
              if (uVar17 < 0xc) {
                iVar22 = uVar26 * 0x2dc + uVar12 * 0x48 + param_1;
                cVar24 = *(char *)(iVar22 + 0x10);
                uVar18 = *(byte *)(iVar22 + uVar17 + 0x44) - 1 & 0xff;
                if ((uVar18 < 0xb) && (0.0 < (float)*(undefined8 *)(&DAT_ram_4009817c + uVar18 * 4))
                   ) {
                  uVar31 = FUN_ram_4006aa6c((float)*(undefined8 *)(param_7 + 4) /
                                            ((float)*(undefined8 *)(&DAT_ram_4009817c + uVar18 * 4)
                                            * fVar8),cVar24);
                  cVar24 = *(char *)(iVar22 + 0x10);
                  *(undefined8 *)(pfVar16 + uVar17) = uVar31;
                  pfVar25 = pfVar16;
                }
              }
              else {
                cVar24 = *(char *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x10);
              }
            }
          }
        }
      }
LAB_ram_4005da22:
      uVar15 = *(undefined4 *)(uVar26 * 0x2dc + uVar12 * 0x48 + param_1 + 0x50);
      bStack_c1 = bVar27;
      if (bVar27 == 0) {
        (*pcVar28)(uVar15,param_2,0,iVar21,uVar23,param_6,pfVar25,cVar24,0,&bStack_c1);
        bVar27 = bStack_c1;
      }
      else {
        (*pcVar28)(uVar15,param_2,param_3,iVar21,uVar23,param_6,pfVar25,cVar24,bVar27,&bStack_c1);
        bVar27 = bStack_c1;
        if (bStack_c1 < 2) {
          bVar27 = 1;
        }
      }
      uVar12 = param_3;
      iVar22 = param_4;
      if (iVar21 == param_2) goto LAB_ram_4005d8f4;
    }
    else {
LAB_ram_4005d8f4:
      uVar12 = param_5;
      iVar22 = param_2;
      param_5 = param_3;
      param_2 = param_4;
    }
    param_4 = param_2;
    param_3 = param_5;
    param_2 = iVar22;
    param_5 = uVar12;
    pbVar13 = pbVar13 + 1;
    if ((byte *)(param_1 + 10 + iVar14) == pbVar13) {
      if (param_8 != (int *)0x0) {
        *param_8 = param_2;
        param_8[1] = param_3 & -(uint)(bVar27 != 0);
        *(byte *)(param_8 + 2) = bVar27;
      }
      return;
    }
  } while( true );
}


