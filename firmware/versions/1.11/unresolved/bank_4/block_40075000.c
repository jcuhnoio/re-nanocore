/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40075000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40075854.
 * REA evidence: ev_c81b87c17d4a5a9545b9cbcd645839477b9b18288fb732c2395e5a9282dc02f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_ram_40075854(int param_1,uint *param_2,float *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  float *pfVar4;
  ulonglong *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  uint *puVar25;
  undefined8 *puVar26;
  float *pfVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  float fVar33;
  
  if (((param_1 == 0) || (param_2 == (uint *)0x0)) || (param_3 == (float *)0x0)) {
    return;
  }
  pcVar2 = (char *)(gp + -0x20);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_ram_400002f4();
    if ((*pcVar2 == '\0') && (DAT_ram_30080f30 == '\0')) {
      DAT_ram_30080f30 = '\x01';
      FUN_ram_400002fa();
      FUN_ram_40074fc8(param_1);
    }
    else {
      FUN_ram_400002fa(uVar3);
    }
  }
  FUN_ram_400002f4();
  cVar1 = *pcVar2;
  uVar22 = *(uint *)(gp + -0x1c);
  iVar23 = *(int *)(gp + -0x18);
  uVar29 = *(undefined8 *)(gp + -0x14);
  uVar31 = *(undefined8 *)(gp + -0x10);
  FUN_ram_400002fa();
  fVar28 = (float)uVar29;
  fVar30 = (float)uVar31;
  if ((cVar1 != '\0') && (uVar22 != 0 || iVar23 != 0)) {
    if (param_4 == 0) {
      uVar3 = FUN_ram_400002f4();
      FUN_ram_4000304c(&DAT_ram_30082f4c,param_2,0x400);
      if (iVar23 == 1) {
        FUN_ram_300410e6(param_1,&DAT_ram_30082f4c,&DAT_ram_30082f4c,0);
        puVar16 = (undefined4 *)&DAT_ram_30082f4c;
        puVar14 = (undefined4 *)&DAT_ram_30081138;
        do {
          uVar6 = puVar16[1];
          uVar8 = puVar16[2];
          uVar10 = puVar16[3];
          *puVar14 = *puVar16;
          puVar14[1] = uVar6;
          puVar14[2] = uVar8;
          puVar14[3] = uVar10;
          puVar16 = puVar16 + 4;
          puVar14 = puVar14 + 4;
        } while (puVar16 != (undefined4 *)&DAT_ram_3008334c);
      }
      else {
        memset(&DAT_ram_30081138,0,0x400);
        FUN_ram_300410e6(param_1,&DAT_ram_30082f4c,&DAT_ram_30081138,0);
      }
      puVar24 = (undefined8 *)&DAT_ram_30081538;
      memset(&DAT_ram_30081538,0,0x204);
      puVar26 = (undefined8 *)&DAT_ram_30080f34;
      memset(&DAT_ram_30080f34,0,0x204);
      if (uVar22 == 2) {
        puVar24 = (undefined8 *)&DAT_ram_3008153c;
        puVar26 = (undefined8 *)&DAT_ram_30080f38;
        _DAT_ram_30081538 = _DAT_ram_30081138;
        _DAT_ram_30080f34 = _DAT_ram_3008113c;
        puVar13 = (undefined8 *)&DAT_ram_30081140;
        do {
          uVar29 = *puVar13;
          uVar31 = *(undefined8 *)((int)puVar13 + 4);
          puVar13 = puVar13 + 1;
          *puVar24 = uVar29;
          *puVar26 = uVar31;
          puVar24 = (undefined8 *)((int)puVar24 + 4);
          puVar26 = (undefined8 *)((int)puVar26 + 4);
        } while (puVar13 != (undefined8 *)&DAT_ram_30081538);
        _DAT_ram_30081738 = _DAT_ram_30081534;
      }
      else if (uVar22 < 3) {
        if (uVar22 == 0) {
          puVar24 = (undefined8 *)&DAT_ram_3008153c;
          puVar26 = (undefined8 *)&DAT_ram_30080f38;
          _DAT_ram_30081538 = _DAT_ram_30081138;
          _DAT_ram_30081738 = _DAT_ram_3008113c;
          puVar13 = (undefined8 *)&DAT_ram_30081140;
          do {
            uVar29 = *puVar13;
            uVar31 = *(undefined8 *)((int)puVar13 + 4);
            puVar13 = puVar13 + 1;
            *puVar24 = uVar29;
            *puVar26 = uVar31;
            puVar24 = (undefined8 *)((int)puVar24 + 4);
            puVar26 = (undefined8 *)((int)puVar26 + 4);
          } while (puVar13 != (undefined8 *)&DAT_ram_30081538);
        }
        else {
          puVar13 = (undefined8 *)&DAT_ram_30081138;
          do {
            uVar29 = *puVar13;
            uVar31 = *(undefined8 *)((int)puVar13 + 4);
            puVar13 = puVar13 + 1;
            *puVar24 = uVar29;
            *puVar26 = uVar31;
            puVar24 = (undefined8 *)((int)puVar24 + 4);
            puVar26 = (undefined8 *)((int)puVar26 + 4);
          } while (puVar13 != (undefined8 *)&DAT_ram_30081538);
        }
      }
      else if (uVar22 == 3) {
        puVar14 = (undefined4 *)&DAT_ram_30081138;
        do {
          uVar6 = puVar14[1];
          uVar8 = puVar14[2];
          uVar10 = puVar14[3];
          *(undefined4 *)puVar24 = *puVar14;
          *(undefined4 *)((int)puVar24 + 4) = uVar6;
          *(undefined4 *)(puVar24 + 1) = uVar8;
          *(undefined4 *)((int)puVar24 + 0xc) = uVar10;
          puVar14 = puVar14 + 4;
          puVar24 = puVar24 + 2;
        } while (puVar14 != &uRam30081338);
        puVar9 = (uint *)&DAT_ram_30080f38;
        puVar15 = (uint *)&DAT_ram_3008133c;
        *(undefined4 *)puVar24 = uRam30081338;
        do {
          uVar21 = puVar15[1];
          uVar19 = puVar15[2];
          uVar22 = puVar15[3];
          uVar7 = puVar15[4];
          uVar11 = puVar15[5];
          *puVar9 = *puVar15;
          puVar9[1] = uVar21;
          puVar9[2] = uVar19;
          puVar9[3] = uVar22;
          puVar9[4] = uVar7;
          puVar9[5] = uVar11;
          puVar15 = puVar15 + 6;
          puVar9 = puVar9 + 6;
        } while (puVar15 != (uint *)&DAT_ram_30081534);
        *puVar9 = _DAT_ram_30081534;
      }
      puVar24 = (undefined8 *)&DAT_ram_3008153c;
      pfVar4 = (float *)&DAT_ram_30080f34;
      pfVar12 = (float *)&DAT_ram_30081538;
      do {
        uVar29 = *(undefined8 *)pfVar4;
        pfVar27 = pfVar12 + 1;
        *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar28;
        *pfVar4 = (float)uVar29 * fVar28;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar27;
      } while (pfVar27 != (float *)&DAT_ram_3008173c);
      *(ulonglong *)param_3 = (ulonglong)_DAT_ram_30081538;
      *(ulonglong *)(param_3 + 1) = (ulonglong)_DAT_ram_30081738;
      pfVar4 = (float *)&DAT_ram_30080f38;
      pfVar12 = param_3 + 3;
      do {
        pfVar12[-1] = (float)*puVar24;
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *pfVar12 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar12 + 2;
      } while (puVar24 != (undefined8 *)&DAT_ram_30081738);
    }
    else {
      fVar33 = DAT_ram_40094604;
      if (fVar28 != 0.0) {
        fVar33 = DAT_ram_40094604 / fVar28;
      }
      uVar3 = FUN_ram_400002f4();
      puVar25 = (uint *)&DAT_ram_30081538;
      memset(&DAT_ram_30081538,0,0x204);
      memset(&DAT_ram_30080f34,0,0x204);
      _DAT_ram_30081538 = *param_2;
      _DAT_ram_30081738 = param_2[1];
      puVar26 = (undefined8 *)&DAT_ram_3008153c;
      puVar15 = (uint *)&DAT_ram_30080f38;
      puVar9 = puVar15;
      puVar24 = puVar26;
      do {
        *puVar24 = *(undefined8 *)(param_2 + 2);
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *puVar9 = param_2[3];
        puVar9 = puVar9 + 1;
        param_2 = param_2 + 2;
      } while (puVar24 != (undefined8 *)&DAT_ram_30081738);
      pfVar27 = (float *)&DAT_ram_30080f34;
      pfVar4 = pfVar27;
      pfVar12 = (float *)&DAT_ram_30081538;
      do {
        uVar29 = *(undefined8 *)pfVar4;
        pfVar17 = pfVar12 + 1;
        *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar33;
        *pfVar4 = (float)uVar29 * fVar33;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar17;
      } while (pfVar17 != (float *)&DAT_ram_3008173c);
      puVar5 = (ulonglong *)memset(&DAT_ram_30081138,0,0x400);
      if (uVar22 == 2) {
        uVar32 = (ulonglong)_DAT_ram_30080f34;
        *puVar5 = (ulonglong)_DAT_ram_30081538;
        *(ulonglong *)((int)puVar5 + 4) = uVar32;
        puVar14 = (undefined4 *)&DAT_ram_30081140;
        do {
          uVar22 = *puVar15;
          puVar16 = puVar14 + 2;
          *puVar14 = (int)*puVar26;
          puVar14[1] = uVar22;
          puVar26 = (undefined8 *)((int)puVar26 + 4);
          puVar15 = puVar15 + 1;
          puVar14 = puVar16;
        } while (puVar16 != (undefined4 *)&DAT_ram_30081538);
        *(uint *)((int)puVar5 + 0x3fc) = _DAT_ram_30081738;
      }
      else if (uVar22 < 3) {
        if (uVar22 == 0) {
          uVar32 = (ulonglong)_DAT_ram_30081738;
          *puVar5 = (ulonglong)_DAT_ram_30081538;
          *(ulonglong *)((int)puVar5 + 4) = uVar32;
          puVar14 = (undefined4 *)&DAT_ram_30081140;
          do {
            uVar22 = *puVar15;
            puVar16 = puVar14 + 2;
            *puVar14 = (int)*puVar26;
            puVar14[1] = uVar22;
            puVar26 = (undefined8 *)((int)puVar26 + 4);
            puVar15 = puVar15 + 1;
            puVar14 = puVar16;
          } while (puVar16 != (undefined4 *)&DAT_ram_30081538);
        }
        else {
          do {
            uVar22 = *puVar25;
            fVar28 = *pfVar27;
            puVar25 = puVar25 + 1;
            *puVar5 = (ulonglong)uVar22;
            *(ulonglong *)((int)puVar5 + 4) = (ulonglong)(uint)fVar28;
            pfVar27 = pfVar27 + 1;
            puVar5 = puVar5 + 1;
          } while (puVar25 != (uint *)&DAT_ram_30081738);
        }
      }
      else {
        puVar9 = (uint *)&DAT_ram_30081538;
        if (uVar22 == 3) {
          do {
            uVar22 = puVar9[1];
            uVar7 = puVar9[2];
            uVar11 = puVar9[3];
            *(uint *)puVar5 = *puVar9;
            *(uint *)((int)puVar5 + 4) = uVar22;
            *(uint *)(puVar5 + 1) = uVar7;
            *(uint *)((int)puVar5 + 0xc) = uVar11;
            puVar9 = puVar9 + 4;
            puVar5 = puVar5 + 2;
          } while (puVar9 != (uint *)&DAT_ram_30081738);
          puVar16 = (undefined4 *)&DAT_ram_30080f38;
          puVar14 = (undefined4 *)&DAT_ram_3008133c;
          *(uint *)puVar5 = _DAT_ram_30081738;
          do {
            uVar20 = puVar16[1];
            uVar6 = puVar16[2];
            uVar8 = puVar16[3];
            uVar10 = puVar16[4];
            uVar18 = puVar16[5];
            *puVar14 = *puVar16;
            puVar14[1] = uVar20;
            puVar14[2] = uVar6;
            puVar14[3] = uVar8;
            puVar14[4] = uVar10;
            puVar14[5] = uVar18;
            puVar16 = puVar16 + 6;
            puVar14 = puVar14 + 6;
          } while (puVar16 != &uRam30081130);
          *puVar14 = uRam30081130;
        }
      }
      puVar16 = (undefined4 *)&DAT_ram_30081138;
      puVar14 = (undefined4 *)&DAT_ram_30082f4c;
      do {
        uVar6 = puVar16[1];
        uVar8 = puVar16[2];
        uVar10 = puVar16[3];
        *puVar14 = *puVar16;
        puVar14[1] = uVar6;
        puVar14[2] = uVar8;
        puVar14[3] = uVar10;
        puVar16 = puVar16 + 4;
        puVar14 = puVar14 + 4;
      } while (puVar16 != (undefined4 *)&DAT_ram_30081538);
      if (iVar23 == 1) {
        FUN_ram_300410e6(param_1,&DAT_ram_30082f4c,&DAT_ram_30082f4c,1);
        puVar16 = (undefined4 *)&DAT_ram_30082f4c;
        puVar14 = (undefined4 *)&DAT_ram_30082744;
        do {
          uVar6 = puVar16[1];
          uVar8 = puVar16[2];
          uVar10 = puVar16[3];
          *puVar14 = *puVar16;
          puVar14[1] = uVar6;
          puVar14[2] = uVar8;
          puVar14[3] = uVar10;
          puVar16 = puVar16 + 4;
          puVar14 = puVar14 + 4;
        } while (puVar16 != (undefined4 *)&DAT_ram_3008334c);
      }
      else {
        memset(&DAT_ram_30082744,0,0x400);
        FUN_ram_300410e6(param_1,&DAT_ram_30082f4c,&DAT_ram_30082744,1);
      }
      puVar24 = (undefined8 *)&DAT_ram_30082744;
      do {
        uVar29 = *puVar24;
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *param_3 = (float)uVar29 * fVar30;
        param_3 = param_3 + 1;
      } while (puVar24 != (undefined8 *)&DAT_ram_30082b44);
    }
    FUN_ram_400002fa(uVar3);
    return;
  }
  if (param_4 == 0) {
    iVar23 = FUN_ram_40004dee();
    uVar3 = 0x30081f44;
    if (iVar23 != 0) {
      uVar3 = 0x30081b44;
    }
    uVar3 = FUN_ram_4000304c(uVar3,param_2,0x400);
    FUN_ram_300410e6(param_1,uVar3,param_3,0);
    if ((DAT_ram_4009a004 < fVar28) && (fVar28 < DAT_ram_4009a964)) {
      return;
    }
    pfVar4 = param_3;
    do {
      pfVar12 = pfVar4 + 1;
      *pfVar4 = (float)*(undefined8 *)pfVar4 * fVar28;
      pfVar4 = pfVar12;
    } while (param_3 + 0x100 != pfVar12);
    return;
  }
  if (fVar28 == 0.0) {
    iVar23 = FUN_ram_40004dee();
    if (iVar23 != 0) {
      FUN_ram_4000304c(0x30081b44,param_2,0x400);
      pfVar4 = (float *)0x30081b44;
      fVar33 = DAT_ram_4009a004;
      goto LAB_ram_40075a70;
    }
    uVar3 = 0x30081f44;
    fVar28 = DAT_ram_40094604;
  }
  else {
    fVar28 = DAT_ram_40094604 / fVar28;
    iVar23 = FUN_ram_40004dee();
    uVar3 = 0x30081f44;
    if (iVar23 != 0) {
      uVar3 = 0x30081b44;
    }
  }
  pfVar4 = (float *)FUN_ram_4000304c(uVar3,param_2,0x400);
  fVar33 = DAT_ram_4009a004;
  if ((fVar28 <= DAT_ram_4009a004) || (DAT_ram_4009a964 <= fVar28)) {
    pfVar12 = pfVar4;
    do {
      pfVar27 = pfVar12 + 1;
      *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar28;
      pfVar12 = pfVar27;
    } while (pfVar4 + 0x100 != pfVar27);
  }
LAB_ram_40075a70:
  FUN_ram_300410e6(param_1,pfVar4,param_3,1);
  if ((fVar30 <= fVar33) || (DAT_ram_4009a964 <= fVar30)) {
    pfVar4 = param_3;
    do {
      pfVar12 = pfVar4 + 1;
      *pfVar4 = (float)*(undefined8 *)pfVar4 * fVar30;
      pfVar4 = pfVar12;
    } while (pfVar12 != param_3 + 0x100);
  }
  return;
}


