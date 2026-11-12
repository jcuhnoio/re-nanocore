/* NanoCore 1.12: nc_reverb_concert_process at 0x4007b7b0.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_1eae681fc87fabc0a3516715e9d13822968db5091601f7f705863057bc9966c3
 * Source: analysis/rea-1.12-effects/results/03590-export-0x4007b7b0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_concert_process(int param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  float in_register_00000100;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  int iVar50;
  float *pfVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  ushort uVar55;
  int iVar56;
  uint uVar57;
  int iVar58;
  uint uVar59;
  uint uVar60;
  char cVar61;
  uint uVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float *local_c0;
  float *pfStack_bc;
  
  if ((((param_1 != 0) && (param_2 != (float *)0x0)) && (param_3 != (float *)0x0)) &&
     ((param_4 != (float *)0x0 && (param_5 != 0)))) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      nc_reverb_concert_helper_4007a4b4();
    }
    fVar44 = DAT_ram_4009f068;
    fVar43 = DAT_ram_4009672c;
    pfVar51 = param_2 + param_5;
    local_c0 = param_4;
    pfStack_bc = param_3;
    do {
      fVar78 = *param_2;
      if (*(int *)(param_1 + 0x28) != 0) {
        iVar52 = *(int *)(param_1 + 0x24);
        uVar49 = *(uint *)(param_1 + 0x30);
        iVar56 = iVar52 - *(int *)(param_1 + 0x28);
        if (iVar56 < 0) {
          iVar56 = iVar56 + uVar49;
        }
        fVar78 = *(float *)(param_1 + iVar56 * 4 + 0x318);
        *(float *)(param_1 + iVar52 * 4 + 0x318) = *param_2;
        if (iVar52 + 1U < uVar49) {
          *(uint *)(param_1 + 0x24) = iVar52 + 1U;
        }
        else {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      fVar73 = fVar78 * *(float *)(param_1 + 0x284) + *(float *)(param_1 + 0x298);
      fVar2 = *(float *)(param_1 + 0x29c);
      iVar56 = *(int *)(param_1 + 0x34);
      fVar39 = *(float *)(param_1 + 0x2a8) * (fVar78 - fVar73) + fVar73;
      *(float *)(param_1 + 0x29c) =
           fVar78 * *(float *)(param_1 + 0x28c) - fVar73 * *(float *)(param_1 + 0x294);
      uVar49 = *(uint *)(param_1 + 0x38);
      iVar52 = iVar56 - *(int *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x298) =
           fVar2 + (fVar78 * *(float *)(param_1 + 0x288) - fVar73 * *(float *)(param_1 + 0x290));
      *(ulonglong *)(param_1 + (iVar56 + 0x2644) * 4 + 0xc) = (ulonglong)(uint)fVar39;
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      fVar78 = *(float *)(param_1 + 0x8c);
      fVar2 = *(float *)(param_1 + 0xb4);
      iVar50 = iVar56 - *(int *)(param_1 + 0x40);
      fVar73 = (float)*(undefined8 *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      if (iVar50 < 0) {
        iVar50 = iVar50 + uVar49;
      }
      iVar52 = iVar56 - *(int *)(param_1 + 0x68);
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      uVar70 = *(undefined8 *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      uVar79 = *(undefined8 *)(param_1 + (iVar50 + 0x2644) * 4 + 0xc);
      fVar3 = *(float *)(param_1 + 0x90);
      fVar4 = *(float *)(param_1 + 0xb8);
      iVar52 = iVar56 - *(int *)(param_1 + 0x44);
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      fVar5 = *(float *)(param_1 + 0x94);
      fVar6 = *(float *)(param_1 + 0xbc);
      iVar50 = iVar56 - *(int *)(param_1 + 0x48);
      fVar74 = (float)*(undefined8 *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      if (iVar50 < 0) {
        iVar50 = iVar50 + uVar49;
      }
      iVar52 = iVar56 - *(int *)(param_1 + 0x70);
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      uVar71 = *(undefined8 *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      fVar7 = *(float *)(param_1 + (iVar50 + 0x2644) * 4 + 0xc);
      fVar8 = *(float *)(param_1 + 0x98);
      fVar9 = *(float *)(param_1 + 0xc0);
      iVar52 = iVar56 - *(int *)(param_1 + 0x4c);
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      fVar10 = *(float *)(param_1 + 0x9c);
      fVar11 = *(float *)(param_1 + 0xc4);
      iVar50 = iVar56 - *(int *)(param_1 + 0x50);
      fVar75 = (float)*(undefined8 *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      if (iVar50 < 0) {
        iVar50 = iVar50 + uVar49;
      }
      iVar52 = iVar56 - *(int *)(param_1 + 0x78);
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      uVar68 = *(undefined8 *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      uVar80 = *(undefined8 *)(param_1 + (iVar50 + 0x2644) * 4 + 0xc);
      fVar12 = *(float *)(param_1 + 0xa0);
      fVar13 = *(float *)(param_1 + 200);
      iVar52 = iVar56 - *(int *)(param_1 + 0x54);
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      fVar14 = *(float *)(param_1 + 0xa4);
      fVar15 = *(float *)(param_1 + 0xcc);
      iVar50 = iVar56 - *(int *)(param_1 + 0x58);
      fVar76 = (float)*(undefined8 *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      if (iVar50 < 0) {
        iVar50 = iVar50 + uVar49;
      }
      iVar52 = iVar56 - *(int *)(param_1 + 0x80);
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      uVar69 = *(undefined8 *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      fVar16 = *(float *)(param_1 + (iVar50 + 0x2644) * 4 + 0xc);
      fVar17 = *(float *)(param_1 + 0xa8);
      fVar18 = *(float *)(param_1 + 0xd0);
      iVar52 = iVar56 - *(int *)(param_1 + 0x5c);
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      fVar19 = *(float *)(param_1 + 0xac);
      fVar20 = *(float *)(param_1 + 0xd4);
      iVar50 = iVar56 - *(int *)(param_1 + 0x60);
      fVar77 = (float)*(undefined8 *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      if (iVar50 < 0) {
        iVar50 = iVar50 + uVar49;
      }
      iVar52 = iVar56 - *(int *)(param_1 + 0x88);
      if (iVar52 < 0) {
        iVar52 = iVar52 + uVar49;
      }
      uVar57 = iVar56 + 1;
      if (uVar49 <= uVar57) {
        uVar57 = 0;
      }
      uVar81 = *(undefined8 *)(param_1 + (iVar50 + 0x2644) * 4 + 0xc);
      fVar21 = *(float *)(param_1 + (iVar52 + 0x2644) * 4 + 0xc);
      *(uint *)(param_1 + 0x34) = uVar57;
      iVar52 = param_1 + *(int *)(param_1 + 0xd234) * 4;
      fVar22 = *(float *)(param_1 + 0xb0);
      fVar23 = *(float *)(param_1 + 0xd8);
      fVar66 = -(*(float *)(param_1 + 0xd238) * fVar39) + *(float *)(iVar52 + 0xc5b0);
      uVar49 = *(int *)(param_1 + 0xd234) + 1;
      *(float *)(iVar52 + 0xc5b0) = *(float *)(param_1 + 0xd238) * fVar66 + fVar39;
      *(uint *)(param_1 + 0xd234) = uVar49 & -(uint)(uVar49 < *(uint *)(param_1 + 0xd230));
      iVar52 = param_1 + *(int *)(param_1 + 0xdec0) * 4;
      uVar49 = *(int *)(param_1 + 0xdec0) + 1;
      fVar39 = -(*(float *)(param_1 + 0xdec4) * fVar66) + *(float *)(iVar52 + 0xd23c);
      *(float *)(iVar52 + 0xd23c) = *(float *)(param_1 + 0xdec4) * fVar39 + fVar66;
      *(uint *)(param_1 + 0xdec0) = uVar49 & -(uint)(uVar49 < *(uint *)(param_1 + 0xdebc));
      iVar52 = param_1 + *(int *)(param_1 + 0xeb4c) * 4;
      uVar49 = *(int *)(param_1 + 0xeb4c) + 1;
      fVar66 = -(*(float *)(param_1 + 0xeb50) * fVar39) + *(float *)(iVar52 + 0xdec8);
      *(float *)(iVar52 + 0xdec8) = *(float *)(param_1 + 0xeb50) * fVar66 + fVar39;
      *(uint *)(param_1 + 0xeb4c) = uVar49 & -(uint)(uVar49 < *(uint *)(param_1 + 0xeb48));
      iVar52 = param_1 + *(int *)(param_1 + 0xf7d8) * 4;
      uVar49 = *(int *)(param_1 + 0xf7d8) + 1;
      fVar39 = -(*(float *)(param_1 + 0xf7dc) * fVar66) + *(float *)(iVar52 + 0xeb54);
      *(float *)(iVar52 + 0xeb54) = *(float *)(param_1 + 0xf7dc) * fVar39 + fVar66;
      *(uint *)(param_1 + 0xf7d8) = uVar49 & -(uint)(uVar49 < *(uint *)(param_1 + 0xf7d4));
      if (*(char *)(param_1 + 0x150) == '\0') {
        iVar52 = *(int *)(param_1 + 300);
        uVar49 = (uint)*(ushort *)(param_1 + 0xfc);
        iVar56 = iVar52 - *(int *)(param_1 + 0xdc);
        if (iVar56 < 0) {
          iVar56 = iVar56 + uVar49;
        }
        iVar63 = *(int *)(param_1 + 0x130);
        iVar50 = iVar63 - *(int *)(param_1 + 0xe0);
        fVar66 = *(float *)(param_1 + (iVar56 + 0x3df8) * 4);
        uVar57 = (uint)*(ushort *)(param_1 + 0xfe);
        if (iVar50 < 0) {
          iVar50 = iVar50 + uVar57;
        }
        iVar56 = *(int *)(param_1 + 0x134);
        iVar48 = iVar56 - *(int *)(param_1 + 0xe4);
        fVar86 = *(float *)(param_1 + (iVar50 + 0x4cd0) * 4);
        uVar62 = (uint)*(ushort *)(param_1 + 0x100);
        if (iVar48 < 0) {
          iVar48 = iVar48 + uVar62;
        }
        iVar65 = *(int *)(param_1 + 0x138);
        iVar50 = iVar65 - *(int *)(param_1 + 0xe8);
        fVar67 = *(float *)(param_1 + (iVar48 + 0x5ba8) * 4);
        uVar45 = (uint)*(ushort *)(param_1 + 0x102);
        if (iVar50 < 0) {
          iVar50 = iVar50 + uVar45;
        }
        iVar48 = *(int *)(param_1 + 0x13c);
        iVar53 = iVar48 - *(int *)(param_1 + 0xec);
        fVar85 = *(float *)(param_1 + (iVar50 + 0x6a80) * 4);
        uVar60 = (uint)*(ushort *)(param_1 + 0x104);
        if (iVar53 < 0) {
          iVar53 = iVar53 + uVar60;
        }
        iVar50 = *(int *)(param_1 + 0x140);
        iVar58 = iVar50 - *(int *)(param_1 + 0xf0);
        fVar84 = *(float *)(param_1 + (iVar53 + 0x7958) * 4);
        uVar59 = (uint)*(ushort *)(param_1 + 0x106);
        if (iVar58 < 0) {
          iVar58 = iVar58 + uVar59;
        }
        iVar54 = *(int *)(param_1 + 0x144);
        iVar53 = iVar54 - *(int *)(param_1 + 0xf4);
        fVar72 = (float)*(undefined8 *)(param_1 + (iVar58 + 0x8830) * 4);
        uVar46 = (uint)*(ushort *)(param_1 + 0x108);
        if (iVar53 < 0) {
          iVar53 = iVar53 + uVar46;
        }
        iVar58 = *(int *)(param_1 + 0x148);
        iVar64 = iVar58 - *(int *)(param_1 + 0xf8);
        fVar83 = *(float *)(param_1 + (iVar53 + 0x9708) * 4);
        uVar47 = (uint)*(ushort *)(param_1 + 0x10a);
        if (iVar64 < 0) {
          iVar64 = iVar64 + uVar47;
        }
        fVar82 = *(float *)(param_1 + (iVar64 + 0xa5e0) * 4);
      }
      else {
        if (*(char *)(param_1 + 0x151) == '\0') {
          fVar66 = *(float *)(param_1 + 0x174);
          fVar82 = *(float *)(param_1 + 0x14c);
          uVar55 = *(short *)(param_1 + 0x152) + 0x10;
          *(ushort *)(param_1 + 0x152) = uVar55;
          fVar67 = -(fVar66 * *(float *)(param_1 + 0x1b4)) +
                   *(float *)(param_1 + 0x1d4) * *(float *)(param_1 + 0x194);
          fVar86 = *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x1b4) +
                   *(float *)(param_1 + 0x1d4) * fVar66;
          if (uVar55 < 0x400) {
            *(float *)(param_1 + 0x154) = fVar82 * fVar66;
            bVar42 = false;
          }
          else {
            *(undefined2 *)(param_1 + 0x152) = 0;
            *(float *)(param_1 + 0x154) = fVar82 * fVar66;
            bVar42 = true;
            fVar66 = fVar86 * fVar86 + fVar67 * fVar67;
            if (0.0 < fVar66 != 0) {
              if ((0.0 < fVar66) < 0x100 && fVar66 < 0.0) {
                fVar66 = (float)FUN_ram_40000e74();
                fVar82 = *(float *)(param_1 + 0x14c);
              }
              else {
                fVar66 = SQRT(fVar66);
              }
              bVar42 = true;
              fVar86 = fVar86 * (fVar43 / fVar66);
              fVar67 = fVar67 * (fVar43 / fVar66);
            }
          }
          fVar66 = *(float *)(param_1 + 0x178);
          *(float *)(param_1 + 0x174) = fVar86;
          *(float *)(param_1 + 0x194) = fVar67;
          *(float *)(param_1 + 0x158) = fVar66 * fVar82;
          fVar86 = fVar66 * *(float *)(param_1 + 0x1d8) +
                   *(float *)(param_1 + 0x198) * *(float *)(param_1 + 0x1b8);
          fVar66 = *(float *)(param_1 + 0x198) * *(float *)(param_1 + 0x1d8) -
                   fVar66 * *(float *)(param_1 + 0x1b8);
          if (bVar42) {
            fVar67 = fVar86 * fVar86 + fVar66 * fVar66;
            if (0.0 < fVar67 != 0) {
              if ((0.0 < fVar67) < 0x100 && fVar67 < 0.0) {
                fVar67 = (float)FUN_ram_40000e74();
                fVar82 = *(float *)(param_1 + 0x14c);
              }
              else {
                fVar67 = SQRT(fVar67);
              }
              fVar86 = fVar86 * (fVar43 / fVar67);
              fVar66 = fVar66 * (fVar43 / fVar67);
            }
          }
          fVar67 = *(float *)(param_1 + 0x17c);
          *(float *)(param_1 + 0x178) = fVar86;
          *(float *)(param_1 + 0x198) = fVar66;
          *(float *)(param_1 + 0x15c) = fVar67 * fVar82;
          fVar66 = fVar67 * *(float *)(param_1 + 0x1dc) +
                   *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1bc);
          fVar86 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1dc) -
                   fVar67 * *(float *)(param_1 + 0x1bc);
          if (bVar42) {
            fVar67 = fVar66 * fVar66 + fVar86 * fVar86;
            if (0.0 < fVar67 != 0) {
              if ((0.0 < fVar67) < 0x100 && fVar67 < 0.0) {
                fVar67 = (float)FUN_ram_40000e74();
                fVar82 = *(float *)(param_1 + 0x14c);
              }
              else {
                fVar67 = SQRT(fVar67);
              }
              fVar66 = fVar66 * (fVar43 / fVar67);
              fVar86 = fVar86 * (fVar43 / fVar67);
            }
          }
          fVar67 = *(float *)(param_1 + 0x180);
          *(float *)(param_1 + 0x17c) = fVar66;
          *(float *)(param_1 + 0x19c) = fVar86;
          *(float *)(param_1 + 0x160) = fVar67 * fVar82;
          fVar66 = fVar67 * *(float *)(param_1 + 0x1e0) +
                   *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1c0);
          fVar86 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1e0) -
                   fVar67 * *(float *)(param_1 + 0x1c0);
          if (bVar42) {
            fVar67 = fVar66 * fVar66 + fVar86 * fVar86;
            if (0.0 < fVar67 != 0) {
              if ((0.0 < fVar67) < 0x100 && fVar67 < 0.0) {
                fVar67 = (float)FUN_ram_40000e74();
                fVar82 = *(float *)(param_1 + 0x14c);
              }
              else {
                fVar67 = SQRT(fVar67);
              }
              fVar66 = fVar66 * (fVar43 / fVar67);
              fVar86 = fVar86 * (fVar43 / fVar67);
            }
          }
          fVar67 = *(float *)(param_1 + 0x184);
          *(float *)(param_1 + 0x180) = fVar66;
          *(float *)(param_1 + 0x1a0) = fVar86;
          *(float *)(param_1 + 0x164) = fVar67 * fVar82;
          fVar66 = fVar67 * *(float *)(param_1 + 0x1e4) +
                   *(float *)(param_1 + 0x1a4) * *(float *)(param_1 + 0x1c4);
          fVar86 = *(float *)(param_1 + 0x1a4) * *(float *)(param_1 + 0x1e4) -
                   fVar67 * *(float *)(param_1 + 0x1c4);
          if (bVar42) {
            fVar67 = fVar66 * fVar66 + fVar86 * fVar86;
            if (0.0 < fVar67 != 0) {
              if ((0.0 < fVar67) < 0x100 && fVar67 < 0.0) {
                fVar67 = (float)FUN_ram_40000e74();
                fVar82 = *(float *)(param_1 + 0x14c);
              }
              else {
                fVar67 = SQRT(fVar67);
              }
              fVar66 = fVar66 * (fVar43 / fVar67);
              fVar86 = fVar86 * (fVar43 / fVar67);
            }
          }
          fVar67 = *(float *)(param_1 + 0x188);
          *(float *)(param_1 + 0x184) = fVar66;
          *(float *)(param_1 + 0x1a4) = fVar86;
          *(float *)(param_1 + 0x168) = fVar67 * fVar82;
          fVar66 = fVar67 * *(float *)(param_1 + 0x1e8) +
                   *(float *)(param_1 + 0x1a8) * *(float *)(param_1 + 0x1c8);
          fVar86 = *(float *)(param_1 + 0x1a8) * *(float *)(param_1 + 0x1e8) -
                   fVar67 * *(float *)(param_1 + 0x1c8);
          if (bVar42) {
            fVar67 = fVar66 * fVar66 + fVar86 * fVar86;
            if (0.0 < fVar67 != 0) {
              if ((0.0 < fVar67) < 0x100 && fVar67 < 0.0) {
                fVar67 = (float)FUN_ram_40000e74();
                fVar82 = *(float *)(param_1 + 0x14c);
              }
              else {
                fVar67 = SQRT(fVar67);
              }
              fVar66 = fVar66 * (fVar43 / fVar67);
              fVar86 = fVar86 * (fVar43 / fVar67);
            }
          }
          fVar67 = *(float *)(param_1 + 0x18c);
          *(float *)(param_1 + 0x188) = fVar66;
          *(float *)(param_1 + 0x1a8) = fVar86;
          *(float *)(param_1 + 0x16c) = fVar67 * fVar82;
          fVar66 = fVar67 * *(float *)(param_1 + 0x1ec) +
                   *(float *)(param_1 + 0x1ac) * *(float *)(param_1 + 0x1cc);
          fVar86 = *(float *)(param_1 + 0x1ac) * *(float *)(param_1 + 0x1ec) -
                   fVar67 * *(float *)(param_1 + 0x1cc);
          if (bVar42) {
            fVar67 = fVar66 * fVar66 + fVar86 * fVar86;
            if (0.0 < fVar67 != 0) {
              if ((0.0 < fVar67) < 0x100 && fVar67 < 0.0) {
                fVar67 = (float)FUN_ram_40000e74();
                fVar82 = *(float *)(param_1 + 0x14c);
              }
              else {
                fVar67 = SQRT(fVar67);
              }
              fVar66 = fVar66 * (fVar43 / fVar67);
              fVar86 = fVar86 * (fVar43 / fVar67);
            }
          }
          fVar67 = *(float *)(param_1 + 400);
          fVar82 = fVar67 * fVar82;
          *(float *)(param_1 + 0x18c) = fVar66;
          *(float *)(param_1 + 0x1ac) = fVar86;
          *(float *)(param_1 + 0x170) = fVar82;
          fVar66 = fVar67 * *(float *)(param_1 + 0x1f0) +
                   *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1d0);
          fVar86 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1f0) -
                   fVar67 * *(float *)(param_1 + 0x1d0);
          if (bVar42) {
            fVar67 = fVar66 * fVar66 + fVar86 * fVar86;
            if (0.0 < fVar67 != 0) {
              if ((0.0 < fVar67) < 0x100 && fVar67 < 0.0) {
                fVar67 = (float)FUN_ram_40000e74();
                fVar82 = *(float *)(param_1 + 0x170);
              }
              else {
                fVar67 = SQRT(fVar67);
              }
              fVar66 = fVar66 * (fVar43 / fVar67);
              fVar86 = fVar86 * (fVar43 / fVar67);
            }
          }
          *(float *)(param_1 + 400) = fVar66;
          *(float *)(param_1 + 0x1b0) = fVar86;
          cVar61 = '\x0f';
        }
        else {
          cVar61 = *(char *)(param_1 + 0x151) + -1;
          fVar82 = *(float *)(param_1 + 0x170);
        }
        iVar52 = *(int *)(param_1 + 300);
        uVar49 = (uint)*(ushort *)(param_1 + 0xfc);
        fVar86 = *(float *)(param_1 + 0x10c);
        fVar66 = (float)(iVar52 - *(int *)(param_1 + 0xdc)) - *(float *)(param_1 + 0x154);
        if (fVar66 < 0.0) {
          fVar66 = fVar66 + fVar86;
        }
        else if (fVar86 <= fVar66) {
          fVar66 = fVar66 - fVar86;
        }
        iVar63 = *(int *)(param_1 + 0x130);
        iVar56 = (int)fVar66;
        fVar86 = (float)(iVar63 - *(int *)(param_1 + 0xe0)) - *(float *)(param_1 + 0x158);
        uVar57 = (uint)*(ushort *)(param_1 + 0xfe);
        fVar66 = (fVar43 - (fVar66 - (float)iVar56)) *
                 (float)*(undefined8 *)(param_1 + (iVar56 + 0x3df8) * 4) +
                 (fVar66 - (float)iVar56) *
                 (float)*(undefined8 *)
                         (param_1 +
                         ((iVar56 + 1U & -(uint)((int)(iVar56 + 1U) < (int)uVar49)) + 0x3df8) * 4);
        fVar67 = *(float *)(param_1 + 0x110);
        if (fVar86 < 0.0) {
          fVar86 = fVar86 + fVar67;
        }
        else if (fVar67 <= fVar86) {
          fVar86 = fVar86 - fVar67;
        }
        iVar56 = *(int *)(param_1 + 0x134);
        iVar50 = (int)fVar86;
        fVar67 = (float)(iVar56 - *(int *)(param_1 + 0xe4)) - *(float *)(param_1 + 0x15c);
        uVar62 = (uint)*(ushort *)(param_1 + 0x100);
        fVar86 = (fVar43 - (fVar86 - (float)iVar50)) *
                 (float)*(undefined8 *)(param_1 + (iVar50 + 0x4cd0) * 4) +
                 (fVar86 - (float)iVar50) *
                 (float)*(undefined8 *)
                         (param_1 +
                         ((iVar50 + 1U & -(uint)((int)(iVar50 + 1U) < (int)uVar57)) + 0x4cd0) * 4);
        fVar85 = *(float *)(param_1 + 0x114);
        if (fVar67 < 0.0) {
          fVar67 = fVar67 + fVar85;
        }
        else if (fVar85 <= fVar67) {
          fVar67 = fVar67 - fVar85;
        }
        iVar65 = *(int *)(param_1 + 0x138);
        iVar50 = (int)fVar67;
        fVar85 = (float)(iVar65 - *(int *)(param_1 + 0xe8)) - *(float *)(param_1 + 0x160);
        uVar45 = (uint)*(ushort *)(param_1 + 0x102);
        fVar67 = (fVar43 - (fVar67 - (float)iVar50)) *
                 (float)*(undefined8 *)(param_1 + (iVar50 + 0x5ba8) * 4) +
                 (fVar67 - (float)iVar50) *
                 (float)*(undefined8 *)
                         (param_1 +
                         ((iVar50 + 1U & -(uint)((int)(iVar50 + 1U) < (int)uVar62)) + 0x5ba8) * 4);
        fVar84 = *(float *)(param_1 + 0x118);
        if (fVar85 < 0.0) {
          fVar85 = fVar85 + fVar84;
        }
        else if (fVar84 <= fVar85) {
          fVar85 = fVar85 - fVar84;
        }
        iVar48 = *(int *)(param_1 + 0x13c);
        iVar50 = (int)fVar85;
        fVar84 = (float)(iVar48 - *(int *)(param_1 + 0xec)) - *(float *)(param_1 + 0x164);
        uVar60 = (uint)*(ushort *)(param_1 + 0x104);
        fVar85 = (fVar43 - (fVar85 - (float)iVar50)) *
                 (float)*(undefined8 *)(param_1 + (iVar50 + 0x6a80) * 4) +
                 (fVar85 - (float)iVar50) *
                 (float)*(undefined8 *)
                         (param_1 +
                         ((iVar50 + 1U & -(uint)((int)(iVar50 + 1U) < (int)uVar45)) + 0x6a80) * 4);
        fVar72 = *(float *)(param_1 + 0x11c);
        if (fVar84 < 0.0) {
          fVar84 = fVar84 + fVar72;
        }
        else if (fVar72 <= fVar84) {
          fVar84 = fVar84 - fVar72;
        }
        iVar50 = *(int *)(param_1 + 0x140);
        iVar53 = (int)fVar84;
        fVar72 = (float)(iVar50 - *(int *)(param_1 + 0xf0)) - *(float *)(param_1 + 0x168);
        uVar59 = (uint)*(ushort *)(param_1 + 0x106);
        fVar84 = (fVar43 - (fVar84 - (float)iVar53)) *
                 (float)*(undefined8 *)(param_1 + (iVar53 + 0x7958) * 4) +
                 (fVar84 - (float)iVar53) *
                 (float)*(undefined8 *)
                         (param_1 +
                         ((iVar53 + 1U & -(uint)((int)(iVar53 + 1U) < (int)uVar60)) + 0x7958) * 4);
        fVar83 = *(float *)(param_1 + 0x120);
        if (fVar72 < 0.0) {
          fVar72 = fVar72 + fVar83;
        }
        else if (fVar83 <= fVar72) {
          fVar72 = fVar72 - fVar83;
        }
        iVar53 = (int)fVar72;
        iVar54 = *(int *)(param_1 + 0x144);
        fVar83 = (float)(iVar54 - *(int *)(param_1 + 0xf4)) - *(float *)(param_1 + 0x16c);
        uVar46 = (uint)*(ushort *)(param_1 + 0x108);
        fVar72 = (fVar43 - (fVar72 - (float)iVar53)) *
                 (float)*(undefined8 *)(param_1 + (iVar53 + 0x8830) * 4) +
                 (fVar72 - (float)iVar53) *
                 (float)*(undefined8 *)
                         (param_1 +
                         ((iVar53 + 1U & -(uint)((int)(iVar53 + 1U) < (int)uVar59)) + 0x8830) * 4);
        fVar24 = *(float *)(param_1 + 0x124);
        if (fVar83 < 0.0) {
          fVar83 = fVar83 + fVar24;
        }
        else if (fVar24 <= fVar83) {
          fVar83 = fVar83 - fVar24;
        }
        iVar58 = *(int *)(param_1 + 0x148);
        iVar53 = (int)fVar83;
        fVar82 = (float)(iVar58 - *(int *)(param_1 + 0xf8)) - fVar82;
        uVar47 = (uint)*(ushort *)(param_1 + 0x10a);
        fVar83 = (fVar43 - (fVar83 - (float)iVar53)) *
                 (float)*(undefined8 *)(param_1 + (iVar53 + 0x9708) * 4) +
                 (fVar83 - (float)iVar53) *
                 (float)*(undefined8 *)
                         (param_1 +
                         ((iVar53 + 1U & -(uint)((int)(iVar53 + 1U) < (int)uVar46)) + 0x9708) * 4);
        fVar24 = *(float *)(param_1 + 0x128);
        if (fVar82 < 0.0) {
          fVar82 = fVar82 + fVar24;
        }
        else if (fVar24 <= fVar82) {
          fVar82 = fVar82 - fVar24;
        }
        iVar53 = (int)fVar82;
        fVar82 = (fVar43 - (fVar82 - (float)iVar53)) * *(float *)(param_1 + (iVar53 + 0xa5e0) * 4) +
                 (fVar82 - (float)iVar53) *
                 *(float *)(param_1 +
                           ((iVar53 + 1U & -(uint)((int)(iVar53 + 1U) < (int)uVar47)) + 0xa5e0) * 4)
        ;
        *(char *)(param_1 + 0x151) = cVar61;
      }
      fVar24 = *(float *)(param_1 + 0x274);
      fVar40 = fVar43 - fVar24;
      fVar1 = *(float *)(param_1 + 0x278);
      fVar25 = fVar40 * fVar66 + fVar24 * *(float *)(param_1 + 0x234);
      fVar41 = fVar43 - fVar1;
      fVar26 = fVar40 * fVar86 + fVar24 * *(float *)(param_1 + 0x238);
      fVar27 = fVar25 * fVar41 + fVar1 * *(float *)(param_1 + 0x254);
      fVar28 = fVar67 * fVar40 + fVar24 * *(float *)(param_1 + 0x23c);
      fVar29 = fVar41 * fVar26 + fVar1 * *(float *)(param_1 + 600);
      fVar30 = fVar85 * fVar40 + fVar24 * *(float *)(param_1 + 0x240);
      *(float *)(param_1 + 0x234) = fVar25;
      fVar31 = fVar41 * fVar28 + fVar1 * *(float *)(param_1 + 0x25c);
      fVar32 = fVar40 * fVar84 + fVar24 * *(float *)(param_1 + 0x244);
      *(float *)(param_1 + 0x238) = fVar26;
      fVar33 = fVar41 * fVar30 + fVar1 * *(float *)(param_1 + 0x260);
      fVar34 = fVar72 * fVar40 + fVar24 * *(float *)(param_1 + 0x248);
      *(float *)(param_1 + 0x23c) = fVar28;
      fVar35 = fVar41 * fVar32 + fVar1 * *(float *)(param_1 + 0x264);
      fVar36 = fVar83 * fVar40 + fVar24 * *(float *)(param_1 + 0x24c);
      *(float *)(param_1 + 0x240) = fVar30;
      fVar37 = fVar41 * fVar34 + fVar1 * *(float *)(param_1 + 0x268);
      fVar40 = fVar40 * fVar82 + fVar24 * *(float *)(param_1 + 0x250);
      *(float *)(param_1 + 0x244) = fVar32;
      fVar38 = fVar41 * fVar36 + fVar1 * *(float *)(param_1 + 0x26c);
      *(float *)(param_1 + 0x254) = fVar27;
      *(float *)(param_1 + 600) = fVar29;
      *(float *)(param_1 + 0x25c) = fVar31;
      *(float *)(param_1 + 0x260) = fVar33;
      *(float *)(param_1 + 0x264) = fVar35;
      fVar1 = fVar41 * fVar40 + fVar1 * *(float *)(param_1 + 0x270);
      *(float *)(param_1 + 0x268) = fVar37;
      *(float *)(param_1 + 0x24c) = fVar36;
      *(float *)(param_1 + 0x26c) = fVar38;
      *(float *)(param_1 + 0x250) = fVar40;
      *(float *)(param_1 + 0x270) = fVar1;
      fVar27 = fVar27 * *(float *)(param_1 + 0x214) + (fVar25 - fVar27) * *(float *)(param_1 + 500);
      *(float *)(param_1 + 0x248) = fVar34;
      param_2 = param_2 + 1;
      fVar25 = fVar29 * *(float *)(param_1 + 0x218) +
               (fVar26 - fVar29) * *(float *)(param_1 + 0x1f8);
      fVar24 = fVar31 * *(float *)(param_1 + 0x21c) +
               (fVar28 - fVar31) * *(float *)(param_1 + 0x1fc);
      fVar26 = fVar33 * *(float *)(param_1 + 0x220) +
               (fVar30 - fVar33) * *(float *)(param_1 + 0x200);
      fVar28 = fVar35 * *(float *)(param_1 + 0x224) +
               (fVar32 - fVar35) * *(float *)(param_1 + 0x204);
      fVar32 = fVar24 - fVar26;
      fVar24 = fVar24 + fVar26;
      fVar29 = fVar37 * *(float *)(param_1 + 0x228) +
               (fVar34 - fVar37) * *(float *)(param_1 + 0x208);
      fVar30 = fVar38 * *(float *)(param_1 + 0x22c) +
               (fVar36 - fVar38) * *(float *)(param_1 + 0x20c);
      fVar26 = fVar28 + fVar29;
      fVar31 = fVar1 * *(float *)(param_1 + 0x230) + (fVar40 - fVar1) * *(float *)(param_1 + 0x210);
      fVar33 = fVar27 - fVar25;
      fVar27 = fVar27 + fVar25;
      fVar1 = fVar30 + fVar31;
      fVar25 = fVar33 + fVar32;
      fVar33 = fVar33 - fVar32;
      fVar32 = fVar26 - fVar1;
      fVar26 = fVar26 + fVar1;
      fVar1 = (fVar28 - fVar29) - (fVar30 - fVar31);
      fVar28 = fVar27 - fVar24;
      fVar27 = fVar27 + fVar24;
      fVar39 = fVar39 * DAT_ram_40099f94;
      *(float *)(param_1 + (iVar52 + 0x3df8) * 4) = (fVar27 + fVar26) * fVar44 + fVar39;
      *(uint *)(param_1 + 300) = iVar52 + 1U & -(uint)(iVar52 + 1U < uVar49);
      *(float *)(param_1 + (iVar63 + 0x4cd0) * 4) =
           (fVar25 + in_register_00000100) * fVar44 - fVar39;
      *(uint *)(param_1 + 0x130) = iVar63 + 1U & -(uint)(iVar63 + 1U < uVar57);
      *(float *)(param_1 + (iVar56 + 0x5ba8) * 4) = fVar39 + (fVar28 + fVar32) * fVar44;
      *(uint *)(param_1 + 0x134) = iVar56 + 1U & -(uint)(iVar56 + 1U < uVar62);
      *(float *)(param_1 + (iVar65 + 0x6a80) * 4) = (fVar33 + fVar1) * fVar44 - fVar39;
      *(uint *)(param_1 + 0x138) = iVar65 + 1U & -(uint)(iVar65 + 1U < uVar45);
      *(ulonglong *)(param_1 + (iVar48 + 0x7958) * 4) =
           (ulonglong)(uint)(fVar39 + (fVar27 - fVar26) * fVar44);
      *(uint *)(param_1 + 0x13c) = iVar48 + 1U & -(uint)(iVar48 + 1U < uVar60);
      *(float *)(param_1 + (iVar50 + 0x8830) * 4) =
           (fVar25 - in_register_00000100) * fVar44 - fVar39;
      *(uint *)(param_1 + 0x140) = iVar50 + 1U & -(uint)(iVar50 + 1U < uVar59);
      *(float *)(param_1 + (iVar54 + 0x9708) * 4) = fVar39 + (fVar28 - fVar32) * fVar44;
      fVar24 = *(float *)(param_1 + 0x27c);
      *(uint *)(param_1 + 0x144) = iVar54 + 1U & -(uint)(iVar54 + 1U < uVar46);
      *(ulonglong *)(param_1 + (iVar58 + 0xa5e0) * 4) =
           (ulonglong)(uint)((fVar33 - fVar1) * fVar44 - fVar39);
      fVar39 = fVar24 * *(float *)(param_1 + 0x280) + (fVar43 - fVar24);
      fVar5 = fVar39 * ((((((((fVar66 - fVar86) + fVar67) - fVar85) + fVar84) - fVar72) + fVar83) -
                        fVar82) * fVar44 +
                       (float)uVar81 * fVar22 +
                       fVar77 * fVar19 +
                       fVar16 * fVar17 +
                       fVar76 * fVar14 +
                       (float)uVar80 * fVar12 +
                       fVar75 * fVar10 +
                       fVar7 * fVar8 +
                       fVar74 * fVar5 + (float)uVar79 * fVar3 + fVar73 * fVar78 + 0.0);
      fVar6 = fVar39 * ((((fVar72 + (((fVar66 + fVar86) - fVar67) - fVar85) + fVar84) - fVar83) -
                        fVar82) * fVar44 +
                       fVar21 * fVar23 +
                       fVar77 * fVar20 +
                       (float)uVar69 * fVar18 +
                       fVar76 * fVar15 +
                       (float)uVar68 * fVar13 +
                       fVar75 * fVar11 +
                       (float)uVar71 * fVar9 +
                       fVar74 * fVar6 + (float)uVar70 * fVar4 + fVar73 * fVar2 + 0.0);
      fVar2 = fVar5 * *(float *)(param_1 + 0x2ac) + *(float *)(param_1 + 0x2c0);
      fVar73 = fVar6 * *(float *)(param_1 + 0x2ac) + *(float *)(param_1 + 0x2c8);
      fVar3 = *(float *)(param_1 + 0x2d0) * fVar2 + *(float *)(param_1 + 0x2e4);
      fVar4 = *(float *)(param_1 + 0x2d0) * fVar73 + *(float *)(param_1 + 0x2ec);
      fVar78 = *(float *)(param_1 + 0x2c4);
      *(uint *)(param_1 + 0x148) = iVar58 + 1U & -(uint)(iVar58 + 1U < uVar47);
      *(float *)(param_1 + 0x280) = fVar39;
      *(float *)(param_1 + 0x2c4) =
           fVar5 * *(float *)(param_1 + 0x2b4) - fVar2 * *(float *)(param_1 + 700);
      *(float *)(param_1 + 0x2c8) =
           *(float *)(param_1 + 0x2cc) +
           (fVar6 * *(float *)(param_1 + 0x2b0) - *(float *)(param_1 + 0x2b8) * fVar73);
      *(float *)(param_1 + 0x2cc) =
           fVar6 * *(float *)(param_1 + 0x2b4) - *(float *)(param_1 + 700) * fVar73;
      *(float *)(param_1 + 0x2c0) =
           fVar78 + (fVar5 * *(float *)(param_1 + 0x2b0) - fVar2 * *(float *)(param_1 + 0x2b8));
      *(float *)(param_1 + 0x2e4) =
           *(float *)(param_1 + 0x2e8) +
           (*(float *)(param_1 + 0x2d4) * fVar2 - fVar3 * *(float *)(param_1 + 0x2dc));
      fVar78 = *(float *)(param_1 + 0x2f0);
      *(float *)(param_1 + 0x2e8) =
           *(float *)(param_1 + 0x2d8) * fVar2 - fVar3 * *(float *)(param_1 + 0x2e0);
      fVar39 = *(float *)(param_1 + 0x2f4) * fVar3 + *(float *)(param_1 + 0x308);
      fVar5 = *(float *)(param_1 + 0x2f4) * fVar4 + *(float *)(param_1 + 0x310);
      *(float *)(param_1 + 0x2f0) =
           *(float *)(param_1 + 0x2d8) * fVar73 - *(float *)(param_1 + 0x2e0) * fVar4;
      fVar2 = *(float *)(param_1 + 0x314);
      *(float *)(param_1 + 0x2ec) =
           fVar78 + (*(float *)(param_1 + 0x2d4) * fVar73 - *(float *)(param_1 + 0x2dc) * fVar4);
      fVar78 = *(float *)(param_1 + 0x30c);
      *(float *)(param_1 + 0x30c) =
           *(float *)(param_1 + 0x2fc) * fVar3 - fVar39 * *(float *)(param_1 + 0x304);
      *(float *)(param_1 + 0x314) =
           *(float *)(param_1 + 0x2fc) * fVar4 - *(float *)(param_1 + 0x304) * fVar5;
      *(float *)(param_1 + 0x308) =
           fVar78 + (*(float *)(param_1 + 0x2f8) * fVar3 - fVar39 * *(float *)(param_1 + 0x300));
      *(float *)(param_1 + 0x310) =
           fVar2 + (*(float *)(param_1 + 0x2f8) * fVar4 - *(float *)(param_1 + 0x300) * fVar5);
      *pfStack_bc = fVar39;
      *local_c0 = fVar5;
      local_c0 = local_c0 + 1;
      pfStack_bc = pfStack_bc + 1;
    } while (pfVar51 != param_2);
    return;
  }
  return;
}

