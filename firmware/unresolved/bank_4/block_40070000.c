/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40070000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4007067c.
 * REA evidence: ev_d46a3ef566c196df2ada92e7c4a7bb159361e11bf3e2c5da6d334044eec701ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40070dc0) */
/* WARNING: Removing unreachable block (ram,0x40070dd4) */
/* WARNING: Removing unreachable block (ram,0x40070dca) */

void FUN_ram_4007067c(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_80 [2];
  undefined *puStack_78;
  float afStack_74 [2];
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_1 != 0) {
    pfVar4 = local_80;
    pfVar5 = local_80;
    fVar10 = (float)param_3[1];
    fVar9 = 0.0;
    if ((0.0 <= fVar10) && (fVar9 = DAT_ram_4009281c, fVar10 <= DAT_ram_4009281c)) {
      fVar9 = fVar10;
    }
    fVar11 = (float)*(undefined8 *)((int)param_3 + 0xc);
    fVar8 = 0.0;
    if ((0.0 <= fVar11) && (fVar8 = DAT_ram_4009281c, fVar11 <= DAT_ram_4009281c)) {
      fVar8 = fVar11;
    }
    fVar12 = (float)*param_3;
    local_80[1] = DAT_ram_40092864;
    if ((0.0 <= fVar12) && (local_80[1] = DAT_ram_40093494, fVar12 <= DAT_ram_4009281c)) {
      local_80[1] = fVar12 * DAT_ram_4009423c + DAT_ram_40092864;
    }
    fVar13 = (float)*(undefined8 *)((int)param_3 + 4);
    local_80[0] = 0.0;
    if ((0.0 <= fVar13) && (local_80[0] = DAT_ram_400934e8, fVar13 <= DAT_ram_4009281c)) {
      local_80[0] = fVar13 * DAT_ram_400934e8 + 0.0;
    }
    iVar1 = param_1 + 0x43c;
    puStack_78 = (undefined *)fVar9;
    if (param_2 == 5) {
      fVar9 = 0.0;
      if ((0.0 <= fVar12) && (fVar9 = DAT_ram_40093494, fVar12 <= DAT_ram_4009281c)) {
        fVar9 = fVar12 * DAT_ram_40093494 + 0.0;
      }
      fVar10 = 0.0;
      if ((0.0 <= fVar13) && (fVar10 = DAT_ram_400934dc, fVar13 <= DAT_ram_4009281c)) {
        fVar10 = fVar13 * DAT_ram_400934dc + 0.0;
      }
      puVar6 = (undefined4 *)(param_1 + 0x440);
      do {
        uVar7 = puVar6[2];
        uVar3 = puVar6[3];
        uVar2 = *puVar6;
        pfVar4[1] = (float)puVar6[1];
        pfVar4[2] = (float)uVar7;
        *pfVar4 = (float)uVar2;
        pfVar4[3] = (float)uVar3;
        puVar6 = puVar6 + 4;
        pfVar4 = pfVar4 + 4;
      } while (puVar6 != (undefined4 *)(param_1 + 0x480));
      fStack_6c = (float)CONCAT31(fStack_6c._1_3_,1);
      afStack_74[0] = DAT_ram_4009286c;
      afStack_74[1] = (float)DAT_ram_400989d4;
      fStack_68 = DAT_ram_4009281c;
      uStack_64 = 0;
      fStack_60 = (float)CONCAT22(fStack_60._2_2_,0x100);
      fStack_5c = DAT_ram_400934e4;
      if ((0.0 <= fVar8) && (fStack_5c = DAT_ram_400934e0, fVar8 <= DAT_ram_4009281c)) {
        fStack_5c = fVar8 * DAT_ram_400941e0 + DAT_ram_400934e4;
      }
      uStack_58 = DAT_ram_40093108;
      uStack_54 = DAT_ram_400930a4;
      uStack_50 = DAT_ram_400989e4;
      fStack_4c = DAT_ram_400934ec;
      fStack_48 = (float)DAT_ram_4009839c;
      fStack_44 = DAT_ram_400934dc;
      local_80[0] = fVar9;
      local_80[1] = fVar10;
      FUN_ram_4007d388(iVar1);
    }
    else {
      switch(param_2) {
      case 0:
        FUN_ram_4007bbca(iVar1);
        FUN_ram_4007bc52(local_80[0],iVar1);
        FUN_ram_4007bbf6(fVar9,iVar1);
        FUN_ram_4007bc7c(fVar8 * DAT_ram_400980bc,DAT_ram_400989d8,iVar1);
        FUN_ram_4007bcbe(DAT_ram_4009281c,iVar1);
        FUN_ram_4007bcec(iVar1,0);
        return;
      case 1:
        afStack_74[0] = fVar8 * DAT_ram_4009286c;
        afStack_74[1] = (float)DAT_ram_400989d4;
        fStack_6c._1_3_ = (undefined3)((uint)*(undefined4 *)(param_1 + 0x454) >> 8);
        fStack_6c = (float)CONCAT31(fStack_6c._1_3_,1);
        fStack_68 = DAT_ram_4009281c;
        uStack_64 = *(uint *)(param_1 + 0x45c) & 0xffffff00;
        puStack_78 = (undefined *)local_80[0];
        local_80[0] = local_80[1];
        local_80[1] = fVar9;
        FUN_ram_400792a8(iVar1,local_80);
        break;
      case 2:
        afStack_74[1] = *(float *)(param_1 + 0x450);
        fStack_6c = *(float *)(param_1 + 0x454);
        fVar10 = DAT_ram_40092820;
        if ((((0.0 <= fVar9) && (fVar10 = DAT_ram_40098908, fVar9 <= DAT_ram_4009281c)) &&
            (fVar9 = -(fVar9 * DAT_ram_4009891c) + DAT_ram_40092820, fVar10 = DAT_ram_400930d8,
            DAT_ram_400930d8 <= fVar9)) && (fVar10 = fVar9, DAT_ram_40092820 < fVar9)) {
          fVar10 = DAT_ram_40092820;
        }
        puStack_78 = (undefined *)DAT_ram_400989dc;
        afStack_74[0] = 0.0;
        if ((0.0 <= fVar8) && (afStack_74[0] = DAT_ram_40092820, fVar8 <= DAT_ram_4009281c)) {
          afStack_74[0] = fVar8 * DAT_ram_40092820;
        }
        fStack_68 = (float)DAT_ram_400941ec;
        uStack_64 = DAT_ram_400989e0;
        fStack_60 = DAT_ram_4009281c;
        uStack_58 = *(uint *)(param_1 + 0x468) & 0xffffff00;
        fStack_5c = local_80[0];
        local_80[0] = local_80[1];
        local_80[1] = fVar10;
        FUN_ram_40076d66(iVar1,local_80);
        break;
      case 3:
        afStack_74[0] = DAT_ram_4009281c;
        if (fVar8 < 0.0) {
          afStack_74[1] = 0.0;
          fStack_6c = DAT_ram_400930d8;
        }
        else if (DAT_ram_4009281c < fVar8) {
          afStack_74[1] = DAT_ram_400980bc;
          fStack_6c = DAT_ram_400980e8;
        }
        else {
          afStack_74[1] = fVar8 * DAT_ram_400980bc;
          fStack_6c = fVar8 * DAT_ram_40098288 + DAT_ram_400930d8;
        }
        fStack_68 = (float)(*(uint *)(param_1 + 0x458) & 0xffffff00);
        FUN_ram_40075056(iVar1,local_80);
        break;
      default:
        local_80[0] = DAT_ram_4009281c;
        if ((0.0 <= fVar12) && (local_80[0] = DAT_ram_4009286c, fVar12 <= DAT_ram_4009281c)) {
          local_80[0] = fVar12 * DAT_ram_400936dc + DAT_ram_4009281c;
        }
        if (fVar13 < 0.0) {
          local_80[1] = 0.0;
        }
        else {
          local_80[1] = fVar13;
          if (DAT_ram_4009281c < fVar13) {
            local_80[1] = DAT_ram_4009281c;
          }
        }
        if (fVar10 < 0.0) {
          puStack_78 = (undefined *)0x0;
        }
        else {
          puStack_78 = (undefined *)fVar10;
          if (DAT_ram_4009281c < fVar10) {
            puStack_78 = (undefined *)DAT_ram_4009281c;
          }
        }
        afStack_74[0] = DAT_ram_400930a0;
        if ((0.0 <= fVar11) && (afStack_74[0] = DAT_ram_400934d8, fVar11 <= DAT_ram_4009281c)) {
          afStack_74[0] = fVar11 * DAT_ram_40094240 + DAT_ram_400930a0;
        }
        FUN_ram_4005d41e(iVar1,local_80);
        break;
      case 7:
        puVar6 = (undefined4 *)(param_1 + 0x440);
        do {
          uVar7 = puVar6[2];
          uVar3 = puVar6[3];
          uVar2 = *puVar6;
          pfVar5[1] = (float)puVar6[1];
          pfVar5[2] = (float)uVar7;
          *pfVar5 = (float)uVar2;
          pfVar5[3] = (float)uVar3;
          puVar6 = puVar6 + 4;
          pfVar5 = pfVar5 + 4;
        } while (puVar6 != (undefined4 *)(param_1 + 0x490));
        if (fVar12 < 0.0) {
          fVar12 = 0.0;
        }
        else if (DAT_ram_4009281c < fVar12) {
          fVar12 = DAT_ram_4009281c;
        }
        if (fVar13 < 0.0) {
          fVar13 = 0.0;
        }
        else if (DAT_ram_4009281c < fVar13) {
          fVar13 = DAT_ram_4009281c;
        }
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        else if (DAT_ram_4009281c < fVar10) {
          fVar10 = DAT_ram_4009281c;
        }
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
        else if (DAT_ram_4009281c < fVar11) {
          fVar11 = DAT_ram_4009281c;
        }
        if (fVar13 < 0.0) {
          local_80[1] = DAT_ram_400930e8;
          puStack_78 = PTR_firmware_entry_ram_40092830;
        }
        else if (DAT_ram_4009281c < fVar13) {
          local_80[1] = DAT_ram_400934e8;
          puStack_78 = DAT_ram_400930dc;
        }
        else {
          local_80[1] = fVar13 * DAT_ram_40094244 + DAT_ram_400930e8;
          puStack_78 = (undefined *)
                       (fVar13 * DAT_ram_400989e8 + (float)PTR_firmware_entry_ram_40092830);
        }
        fStack_6c = 0.0;
        if ((0.0 <= fVar12) && (fStack_6c = DAT_ram_40093494, fVar12 <= DAT_ram_4009281c)) {
          fStack_6c = fVar12 * DAT_ram_40093494 + 0.0;
        }
        local_80[0] = DAT_ram_400934f0;
        if ((0.0 <= fVar10) && (local_80[0] = DAT_ram_400934ec, fVar10 <= DAT_ram_4009281c)) {
          local_80[0] = fVar10 * DAT_ram_40094248 + DAT_ram_400934f0;
        }
        fStack_68 = (float)DAT_ram_400989ec;
        if (fVar11 < 0.0) {
          fStack_44 = 0.0;
          fStack_48 = 0.0;
        }
        else if (DAT_ram_4009281c < fVar11) {
          fStack_48 = DAT_ram_400934d8;
          fStack_44 = DAT_ram_400980e8;
        }
        else {
          fStack_48 = fVar11 * DAT_ram_400934d8 + 0.0;
          fStack_44 = fVar11 * DAT_ram_400980e8 + 0.0;
        }
        uStack_40 = DAT_ram_400989f0;
        fStack_3c = DAT_ram_4009281c;
        uStack_38 = 0;
        uStack_34 = DAT_ram_400930fc;
        FUN_ram_4007df5a(iVar1);
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40070dde.
 * REA evidence: ev_2ae6dbca3d12071d4b62845921133c600327aab25b5cdb4c24fa38fb112a58bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_40070dde(int param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  
  if (param_2 == 0) {
    fStack_34 = 0.0;
    local_24 = 0.0;
    local_38 = DAT_ram_400989f8;
    fVar1 = DAT_ram_400989f4;
    fStack_30 = DAT_ram_400941f0;
    fStack_2c = DAT_ram_400930f4;
    fStack_28 = DAT_ram_400930fc;
    if ((7 < param_3) ||
       (local_38 = DAT_ram_400989fc, fVar1 = DAT_ram_400930fc, fStack_30 = DAT_ram_40098a00,
       fStack_2c = DAT_ram_40098118, fStack_28 = DAT_ram_40098238, param_3 == 4))
    goto LAB_ram_40070dfa;
    if (param_3 == 6) {
      fStack_34 = DAT_ram_400937b0;
      fStack_30 = DAT_ram_40098118;
      fStack_2c = DAT_ram_40098a04;
      fStack_28 = DAT_ram_40092864;
      local_38 = DAT_ram_40098288;
    }
    else if (param_3 == 5) {
      fStack_2c = DAT_ram_400937b0;
      fStack_28 = DAT_ram_40092864;
      local_38 = DAT_ram_40098a08;
    }
    else {
      if (param_3 != 7) {
        fVar1 = DAT_ram_400930fc;
        if (param_3 < 4) {
          iVar7 = param_3 * 4;
          local_38 = ((float)*(undefined8 *)(&DAT_ram_40098a10 + iVar7) - DAT_ram_40092864) /
                     DAT_ram_4009423c;
          fStack_30 = (float)*(undefined8 *)(&DAT_ram_40098a30 + iVar7);
          fStack_2c = (float)*(undefined8 *)(&DAT_ram_40098a40 + iVar7);
          fStack_28 = (float)*(undefined8 *)(&DAT_ram_40098a50 + iVar7);
          fVar1 = (float)*(undefined8 *)(&DAT_ram_40098a20 + iVar7) / DAT_ram_400934e8;
        }
        goto LAB_ram_40070dfa;
      }
      fStack_34 = DAT_ram_40093100;
      fStack_30 = DAT_ram_40098a0c;
      fStack_2c = DAT_ram_40093100;
      fStack_28 = DAT_ram_40092864;
      local_38 = DAT_ram_40098678;
    }
LAB_ram_40070e18:
    if (0.0 <= fStack_34) goto LAB_ram_40070e28;
LAB_ram_40071046:
    fStack_34 = 0.0;
LAB_ram_40070e38:
    if (0.0 <= fStack_30) goto LAB_ram_40070e48;
LAB_ram_4007102c:
    fStack_30 = 0.0;
LAB_ram_40070e58:
    if (0.0 <= fStack_2c) goto LAB_ram_40070e68;
LAB_ram_40071012:
    fStack_2c = 0.0;
LAB_ram_40070e78:
    if (0.0 <= fStack_28) goto LAB_ram_40070e88;
LAB_ram_40070ff8:
    fStack_28 = 0.0;
LAB_ram_40070e98:
    if (0.0 <= local_24) goto LAB_ram_40070ea8;
LAB_ram_40070fde:
    local_24 = 0.0;
  }
  else {
    FUN_ram_4000305c(&local_38,param_2,0x18);
    fVar1 = fStack_34;
LAB_ram_40070dfa:
    fStack_34 = fVar1;
    if (local_38 < 0.0) {
      local_38 = 0.0;
      goto LAB_ram_40070e18;
    }
    if (local_38 <= DAT_ram_4009281c) goto LAB_ram_40070e18;
    local_38 = DAT_ram_4009281c;
    if (fStack_34 < 0.0) goto LAB_ram_40071046;
LAB_ram_40070e28:
    if (fStack_34 <= DAT_ram_4009281c) goto LAB_ram_40070e38;
    fStack_34 = DAT_ram_4009281c;
    if (fStack_30 < 0.0) goto LAB_ram_4007102c;
LAB_ram_40070e48:
    if (fStack_30 <= DAT_ram_4009281c) goto LAB_ram_40070e58;
    fStack_30 = DAT_ram_4009281c;
    if (fStack_2c < 0.0) goto LAB_ram_40071012;
LAB_ram_40070e68:
    if (fStack_2c <= DAT_ram_4009281c) goto LAB_ram_40070e78;
    fStack_2c = DAT_ram_4009281c;
    if (fStack_28 < 0.0) goto LAB_ram_40070ff8;
LAB_ram_40070e88:
    if (fStack_28 <= DAT_ram_4009281c) goto LAB_ram_40070e98;
    fStack_28 = DAT_ram_4009281c;
    if (local_24 < 0.0) goto LAB_ram_40070fde;
LAB_ram_40070ea8:
    if (DAT_ram_4009281c < local_24) {
      local_24 = DAT_ram_4009281c;
      goto joined_r0x40070fa6;
    }
  }
joined_r0x40070fa6:
  pfVar6 = &local_38;
  if (param_3 == 7) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      pfVar6 = (float *)FUN_ram_4000305c(param_1 + 0x20,&local_38,0x18);
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    else {
      pfVar6 = (float *)(param_1 + 0x20);
      fVar1 = (fStack_34 - *(float *)(param_1 + 0x24)) * DAT_ram_400982e4;
      fVar2 = (fStack_30 - *(float *)(param_1 + 0x28)) * DAT_ram_400982e4;
      fVar3 = (fStack_2c - *(float *)(param_1 + 0x2c)) * DAT_ram_400982e4;
      fVar4 = (fStack_28 - *(float *)(param_1 + 0x30)) * DAT_ram_400982e4;
      fVar5 = (local_24 - *(float *)(param_1 + 0x34)) * DAT_ram_400982e4;
      *(ulonglong *)(param_1 + 0x20) =
           (ulonglong)
           (uint)((local_38 - *(float *)(param_1 + 0x20)) * DAT_ram_400982e4 +
                 *(float *)(param_1 + 0x20));
      *(ulonglong *)(param_1 + 0x24) = (ulonglong)(uint)(fVar1 + *(float *)(param_1 + 0x24));
      *(ulonglong *)(param_1 + 0x28) = (ulonglong)(uint)(fVar2 + *(float *)(param_1 + 0x28));
      *(ulonglong *)(param_1 + 0x2c) = (ulonglong)(uint)(fVar3 + *(float *)(param_1 + 0x2c));
      *(ulonglong *)(param_1 + 0x30) = (ulonglong)(uint)(fVar4 + *(float *)(param_1 + 0x30));
      *(ulonglong *)(param_1 + 0x34) = (ulonglong)(uint)(fVar5 + *(float *)(param_1 + 0x34));
    }
  }
  if (((DAT_ram_40092838 <
        ABS((float)*(undefined8 *)(pfVar6 + 4) - (float)*(undefined8 *)(param_1 + 0x18))) ||
      (DAT_ram_40092838 <
       ABS((float)*(undefined8 *)(pfVar6 + 5) - (float)*(undefined8 *)(param_1 + 0x1c)))) ||
     (DAT_ram_40092838 < ABS((float)*(undefined8 *)(pfVar6 + 3) - *(float *)(param_1 + 0x14)) ||
      (DAT_ram_40092838 < ABS((float)*(undefined8 *)(pfVar6 + 2) - *(float *)(param_1 + 0x10)) ||
      (DAT_ram_40092838 < ABS((float)*(undefined8 *)(pfVar6 + 1) - *(float *)(param_1 + 0xc)) ||
      DAT_ram_40092838 < ABS((float)*(undefined8 *)pfVar6 - *(float *)(param_1 + 8)))))) {
    FUN_ram_4007067c(param_1,param_3,pfVar6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)pfVar6;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(pfVar6 + 1);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pfVar6 + 2);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(pfVar6 + 3);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(pfVar6 + 4);
    *(ulonglong *)(param_1 + 0x1c) = (ulonglong)(uint)pfVar6[5];
  }
  if (param_3 != 7) {
    return CONCAT44(local_24,fStack_28);
  }
  return *(undefined8 *)(pfVar6 + 4);
}


