/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4006b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4006b500.
 * REA evidence: ev_16b12c08588ed58f5fb6ca40b97c821918a9087937faa5606717d0733dedab63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006b500(ulonglong *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  if (param_3 < 5) {
    if (param_3 == 1) {
      *param_1 = (ulonglong)DAT_ram_4009872c;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40098730;
      if (param_2 == 2) {
        return;
      }
      param_1[1] = (ulonglong)DAT_ram_40098118;
      return;
    }
    if (param_3 == 2) {
      *param_1 = (ulonglong)DAT_ram_4009872c;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40098734;
      if (param_2 == 2) {
        return;
      }
      param_1[1] = (ulonglong)DAT_ram_40093668;
      return;
    }
    if (param_3 != 3) {
      if (param_3 != 4) {
        *param_1 = (ulonglong)DAT_ram_40098744;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009281c;
        return;
      }
      *param_1 = (ulonglong)DAT_ram_4009873c;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_400930a0;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (param_2 < 4) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009287c;
      return;
    }
    *param_1 = (ulonglong)DAT_ram_40098738;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_400980e8;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (3 < param_2) {
        *(undefined4 *)((int)param_1 + 0xc) = 0;
      }
    }
  }
  else {
    if (param_3 != 8) {
      if (param_3 == 9) {
        FUN_ram_4006f3ae(param_1,param_2);
        return;
      }
      if (param_3 != 10) {
        if (param_3 != 0xb) {
          if (param_3 == 0xc) {
            *param_1 = CONCAT44(_DAT_ram_40092868,DAT_ram_40092864);
            if (param_2 != 1) {
              *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40094234;
              if (param_2 != 2) {
                param_1[1] = (ulonglong)DAT_ram_40098288;
              }
              if (3 < param_2) {
                *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(_DAT_ram_40092868,DAT_ram_40092864);
              }
            }
            if (param_2 < 5) {
              return;
            }
            param_1[2] = (ulonglong)DAT_ram_400941f0;
            return;
          }
          if (param_3 != 0x11) {
            return;
          }
        }
        FUN_ram_4006fbaa(param_1,param_2,param_3);
        return;
      }
      FUN_ram_40072036(param_1,param_2);
      return;
    }
    *param_1 = (ulonglong)DAT_ram_40098740;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40092864;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_4009281c;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009281c;
      }
    }
  }
  if (4 < param_2) {
    param_1[2] = (ulonglong)DAT_ram_4009281c;
  }
  return;
}


/* NanoCore 1.10, address 0x4006b704.
 * REA evidence: ev_e212abafa3afbf53d9fb421d84ed8875035da9206cd3a169cbfa48168ad7c13b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006b704(ulonglong *param_1,int param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40098744;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009281c;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4006b744.
 * REA evidence: ev_f55c88fe48b9499714100ef3221a031c492d8ea40dbd501b88a4be33b13890d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4006b744(uint param_1)

{
  if (param_1 < 0x12) {
    return (&DAT_ram_4009889c)[param_1];
  }
  return 0;
}


/* NanoCore 1.10, address 0x4006b75c.
 * REA evidence: ev_4dbe617ddbe4aa9ac43cea0441face4863ffb1b45d91ec17dd96ce6b3bfe7275
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006b75c(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     uint param_6,float *param_7,uint param_8,char param_9,int param_10)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
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
  undefined *puVar14;
  undefined *in_register_00000100;
  float *pfVar15;
  float fVar16;
  float *pfVar17;
  ulonglong *puVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  undefined *puVar24;
  byte bVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  undefined *puVar29;
  char cVar30;
  undefined *puVar31;
  undefined *puVar32;
  float fVar33;
  undefined *puVar34;
  undefined *puVar35;
  float fVar36;
  undefined *puVar37;
  undefined *puVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  ulonglong uVar50;
  undefined8 uVar51;
  ulonglong uVar52;
  undefined *puVar53;
  ulonglong uVar54;
  undefined8 uVar55;
  ulonglong uVar56;
  float fVar57;
  undefined *puVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  ulonglong uVar62;
  undefined *puVar63;
  undefined8 unaff_fs11;
  undefined *puStack_188;
  undefined *puStack_184;
  float fStack_178;
  float fStack_174;
  float *pfStack_15c;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined *puStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  uStack_a0 = (undefined4)unaff_fs11;
  uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0';
  }
  if ((param_1 == (float *)0x0) || (param_2 == (float *)0x0)) {
    if (param_4 != (float *)0x0) {
      if (param_6 == 0) {
        return;
      }
      memset(param_4,0,param_6 << 2);
      if (param_5 == (float *)0x0) {
        return;
      }
      goto LAB_ram_4006bb24;
    }
  }
  else if (param_4 != (float *)0x0) {
    if (param_6 == 0) {
      return;
    }
    if ((4 < (param_8 & 0xf7)) && (param_8 != 0x11)) {
LAB_ram_4006ba90:
      if (param_2 != param_4) {
        FUN_ram_4000305c(param_4,param_2,param_6 << 2);
      }
      if (param_9 == '\0') {
        return;
      }
      if (param_5 == (float *)0x0) {
        return;
      }
      if (param_3 == (float *)0x0) {
        param_3 = param_4;
      }
      if (param_3 == param_5) {
        return;
      }
      FUN_ram_4000305c(param_5,param_3,param_6 << 2);
      return;
    }
    if (*(byte *)(param_1 + 0x811) != param_8) {
      memset(param_1 + 0x11,0,0x2000);
      uVar62 = (ulonglong)DAT_ram_4009869c;
      *(ulonglong *)(param_1 + 4) = (ulonglong)DAT_ram_40098694._4_4_;
      *(ulonglong *)(param_1 + 5) = uVar62;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      memset(param_1 + 0x823,0,0x20);
      memset(param_1 + 0x82b,0,0x20);
      puVar29 = DAT_ram_4009281c;
      param_1[0x833] = 0.0;
      param_1[0x821] = 0.0;
      param_1[0x834] = 0.0;
      param_1[0x822] = 0.0;
      param_1[0x812] = 0.0;
      param_1[0x813] = (float)puVar29;
      memset(param_1 + 0xc48,0,0x1000);
      param_1[0x1048] = 0.0;
      param_1[0x104a] = 0.0;
      param_1[0x104c] = 0.0;
      param_1[0x1049] = 0.0;
      param_1[0x104b] = 0.0;
      param_1[0x104d] = 0.0;
      param_1[0x846] = 0.0;
      param_1[0x836] = 0.0;
      param_1[0x837] = (float)puVar29;
      param_1[0x844] = 0.0;
      param_1[0x845] = 0.0;
      param_1[0x104e] = 0.0;
      param_1[0x105e] = (float)puVar29;
      param_1[0x1050] = 0.0;
      param_1[0x1051] = (float)puVar29;
      memset(param_1 + 0x1075,0,0x10000);
      fVar49 = DAT_ram_400986a0;
      param_1[0x1060] = 0.0;
      *(undefined1 *)(param_1 + 0x1061) = 0;
      param_1[0x1062] = 0.0;
      param_1[0x1064] = 0.0;
      param_1[0x1065] = (float)puVar29;
      param_1[0x5075] = fVar49;
      memset(param_1 + 0x5076,0,0x20);
      memset(param_1 + 0x507e,0,0x20);
      *(undefined1 *)(param_1 + 0x5086) = 0;
      *(undefined1 *)((int)param_1 + 0x14219) = 0;
      *(undefined1 *)((int)param_1 + 0x1421a) = 0;
      *(undefined1 *)((int)param_1 + 0x1421b) = 0;
      *(undefined1 *)(param_1 + 0x5087) = 0;
      *(undefined1 *)((int)param_1 + 0x1421d) = 0;
      *(undefined1 *)((int)param_1 + 0x1421e) = 0;
      *(undefined1 *)((int)param_1 + 0x1421f) = 0;
      memset(param_1 + 0x5088,0,0x20);
      *(undefined2 *)(param_1 + 0x50a8) = 0;
      *(undefined1 *)((int)param_1 + 0x142a2) = 0;
      FUN_ram_4006f2d6(param_1 + 0x50a9);
      FUN_ram_40072020(param_1 + 0x50b0);
      FUN_ram_4006fb0c(param_1 + 0x5cb3);
      puVar29 = DAT_ram_40092818;
      uVar62 = ZEXT48(DAT_ram_40092818);
      *(char *)(param_1 + 0x811) = (char)param_8;
      *(ulonglong *)(param_1 + 8) = uVar62;
      *(ulonglong *)(param_1 + 9) = uVar62;
      *(ulonglong *)(param_1 + 10) = uVar62;
      param_1[0x819] = (float)puVar29;
      param_1[0x81a] = (float)puVar29;
      param_1[0x81b] = (float)puVar29;
      param_1[0x81c] = (float)puVar29;
      param_1[0x81d] = (float)puVar29;
      param_1[0x83d] = (float)puVar29;
      param_1[0x83e] = (float)puVar29;
      param_1[0x83f] = (float)puVar29;
      param_1[0x840] = (float)puVar29;
      param_1[0x1058] = (float)puVar29;
      param_1[0x1059] = (float)puVar29;
      param_1[0x105a] = (float)puVar29;
      param_1[0x105b] = (float)puVar29;
      param_1[0x105c] = (float)puVar29;
      param_1[0x105d] = (float)puVar29;
      param_1[0x106f] = (float)puVar29;
      param_1[0x1070] = (float)puVar29;
      param_1[0x1071] = (float)puVar29;
      param_1[0x1072] = (float)puVar29;
      param_1[0x1073] = (float)puVar29;
    }
    fVar40 = DAT_ram_40098788;
    fVar41 = DAT_ram_40098784;
    fVar57 = DAT_ram_400980f4;
    fVar49 = DAT_ram_400980e0;
    fVar48 = DAT_ram_400934d4;
    puVar29 = DAT_ram_4009287c;
    puVar32 = DAT_ram_40092864;
    puVar14 = DAT_ram_4009281c;
    if (param_8 != 1) {
      if (param_8 == 2) {
        if (*(char *)(param_1 + 0x847) == '\0') goto LAB_ram_4006ba90;
        puVar29 = DAT_ram_4009872c;
        puVar32 = DAT_ram_40098734;
        puVar34 = DAT_ram_40093668;
        if (param_7 != (float *)0x0) {
          puVar29 = (undefined *)*param_7;
          if (0.0 <= (float)puVar29) {
            if ((float)DAT_ram_4009281c < (float)puVar29) {
              puVar29 = DAT_ram_4009281c;
            }
          }
          else {
            puVar29 = (undefined *)0x0;
          }
          puVar32 = (undefined *)param_7[1];
          if (0.0 <= (float)puVar32) {
            if ((float)DAT_ram_4009281c < (float)puVar32) {
              puVar32 = DAT_ram_4009281c;
            }
          }
          else {
            puVar32 = (undefined *)0x0;
          }
          puVar34 = (undefined *)param_7[2];
          if (0.0 <= (float)puVar34) {
            if ((float)DAT_ram_4009281c < (float)puVar34) {
              puVar34 = DAT_ram_4009281c;
            }
          }
          else {
            puVar34 = (undefined *)0x0;
          }
        }
        puStack_184 = DAT_ram_4009281c;
        if (param_1[0x83d] == (float)puVar29) {
          puVar31 = (undefined *)param_1[0x838];
          fVar49 = param_1[0x839];
        }
        else {
          fVar49 = *param_1;
          fVar48 = DAT_ram_4009874c;
          if (fVar49 <= DAT_ram_40093094) {
            fVar49 = DAT_ram_400980e0;
            if (0.0 <= (float)puVar29) goto LAB_ram_4006e29c;
LAB_ram_4006efb8:
            fVar49 = DAT_ram_400980e0;
          }
          else if ((float)puVar29 < 0.0) {
LAB_ram_4006efb0:
            if (fVar49 < (float)DAT_ram_4009281c) goto LAB_ram_4006efb8;
          }
          else {
LAB_ram_4006e29c:
            fVar48 = DAT_ram_40098708;
            if ((float)DAT_ram_4009281c < (float)puVar29) goto LAB_ram_4006efb0;
            fVar57 = (float)puVar29 * DAT_ram_40094204 + DAT_ram_400930d8;
            if (fVar49 < (float)DAT_ram_4009281c) {
              fVar49 = DAT_ram_400980e0;
            }
            fVar48 = 0.0;
            if (0.0 <= fVar57) {
              fVar48 = fVar57 * DAT_ram_400980f4;
            }
          }
          puVar31 = in_register_00000100;
          FUN_ram_40000a08(fVar48 / fVar49);
          param_1[0x838] = (float)puVar31;
          in_register_00000100 = puVar31;
          fVar49 = (float)FUN_ram_40000786(fVar48 / fVar49);
          param_1[0x83d] = (float)puVar29;
          param_1[0x839] = fVar49;
        }
        if (param_1[0x83e] == (float)puVar32) {
          fVar48 = param_1[0x83a];
        }
        else {
          fVar48 = DAT_ram_40098764;
          if ((((0.0 <= (float)puVar32) &&
               (fVar48 = DAT_ram_40092820, (float)puVar32 <= (float)puVar14)) &&
              (fVar57 = (float)puVar32 * DAT_ram_40098778 + DAT_ram_40098764,
              fVar48 = DAT_ram_40098748, DAT_ram_40098748 <= fVar57)) &&
             (fVar48 = DAT_ram_40092854, fVar57 <= DAT_ram_40092854)) {
            fVar48 = fVar57;
          }
          param_1[0x83a] = fVar48;
          param_1[0x83e] = (float)puVar32;
        }
        if (param_1[0x83f] == (float)puVar34) {
          puVar34 = (undefined *)param_1[0x83b];
        }
        else {
          param_1[0x83b] = (float)puVar34;
          param_1[0x83f] = (float)puVar34;
        }
        puStack_188 = DAT_ram_4009287c;
        if (param_1[0x840] == (float)DAT_ram_4009287c) {
          puStack_188 = (undefined *)param_1[0x83c];
          if ((float)puVar34 < 0.0) {
            puVar34 = (undefined *)0x0;
            puStack_184 = puVar14;
          }
          else {
            if ((float)puVar34 <= (float)puVar14) goto LAB_ram_4006c6c0;
            puStack_184 = (undefined *)0x0;
            puVar34 = puVar14;
          }
        }
        else {
          param_1[0x83c] = (float)DAT_ram_4009287c;
          param_1[0x840] = (float)puStack_188;
          if ((float)puVar34 < 0.0) {
            puVar34 = (undefined *)0x0;
            goto LAB_ram_4006c6de;
          }
          if ((float)puVar14 < (float)puVar34) {
            puStack_184 = (undefined *)0x0;
            puVar34 = puVar14;
            goto LAB_ram_4006c6de;
          }
LAB_ram_4006c6c0:
          puStack_184 = (undefined *)((float)puVar14 - (float)puVar34);
        }
        if (0.0 <= (float)puStack_188) {
          if ((float)puVar14 < (float)puStack_188) {
            puStack_188 = puVar14;
          }
        }
        else {
          puStack_188 = (undefined *)0x0;
        }
LAB_ram_4006c6de:
        fVar57 = param_1[0x835];
        if (param_1[0x835] <= 0.0) {
          fVar57 = DAT_ram_4009856c;
        }
        puVar29 = (undefined *)param_1[0x845];
        fVar47 = param_1[0x1049];
        fVar41 = param_1[0x104a];
        fVar40 = param_1[0x104b];
        uVar62 = (ulonglong)(uint)fVar40;
        fVar26 = (float)((uint)param_1[0x846] & 0x1ff);
        fVar16 = param_1[0x836];
        if (param_9 == '\0') {
          pfVar17 = param_2 + param_6;
          puVar32 = (undefined *)param_1[0x837];
          fVar33 = param_1[0x844];
          fVar39 = param_1[0x1048];
          puVar24 = in_register_00000100;
          do {
            fVar44 = fVar16;
            fVar36 = *param_2;
            puVar63 = puVar29;
            if ((float)puVar29 <= 0.0) {
              if (*(char *)((int)param_1 + 0x211d) == '\0') {
                puVar29 = (undefined *)param_1[0x841];
                puVar35 = (undefined *)(param_1[0x843] * fVar33 + param_1[0x842]);
                puVar58 = DAT_ram_40098164;
                if (((float)puVar14 <= (float)puVar35) || (puVar58 = puVar35, 0.0 < (float)puVar35))
                {
                  if ((float)puVar29 <= (float)in_register_00000100) {
                    puVar29 = in_register_00000100;
                  }
                }
                else {
                  puVar63 = DAT_ram_400980f8;
                  puVar58 = in_register_00000100;
                  if ((float)puVar29 <= (float)in_register_00000100) goto LAB_ram_4006e372;
                }
                fVar16 = (float)FUN_ram_40000c86((float)puVar14 - (float)puVar58);
                puVar63 = (undefined *)(-(float)puVar29 * fVar16 + -(float)puVar29 * fVar16);
                if ((float)puVar63 < (float)DAT_ram_400980f8) {
                  puVar63 = DAT_ram_400980f8;
                }
              }
              else {
                fVar16 = (fVar33 + (float)puVar14) * DAT_ram_40098780;
                if (fVar16 <= 0.0) {
                  puVar63 = (undefined *)param_1[0x848];
                }
                else if (fVar16 < DAT_ram_40098588) {
                  uVar28 = (uint)(-1 < (int)fVar16) * (int)fVar16;
                  puVar63 = (undefined *)
                            ((fVar16 - (float)uVar28) *
                             (param_1[uVar28 + 0x849] - param_1[uVar28 + 0x848]) +
                            param_1[uVar28 + 0x848]);
                }
                else {
                  puVar63 = (undefined *)param_1[0xc47];
                }
              }
            }
LAB_ram_4006e372:
            uVar28 = (int)fVar26 - 1;
            puVar29 = puVar63;
            fVar16 = fVar57;
            puVar35 = puVar24;
            if ((float)puVar63 <= fVar57) {
              do {
                fVar26 = (float)(uVar28 & 0x1ff);
                uVar28 = (int)fVar26 - 1;
                fVar39 = ((float)puVar29 / fVar57) * (fVar36 - fVar39) + fVar39;
                fVar33 = ((float)puVar29 / fVar57) * (fVar44 - fVar33) + fVar33;
                *(ulonglong *)(param_1 + (int)fVar26 + 0xc48) =
                     (ulonglong)
                     (uint)((float)*(undefined8 *)(param_1 + (int)fVar26 + 0xc48) * fVar48 + fVar39)
                ;
                fVar27 = DAT_ram_40098780;
                fVar46 = DAT_ram_40098588;
                fVar41 = param_1[(uVar28 & 0x1ff) + 0xc48];
                if (*(char *)((int)param_1 + 0x211d) != '\0') {
                  fVar43 = (fVar33 + (float)puVar14) * DAT_ram_40098780;
                  if (fVar43 <= 0.0) {
                    puVar63 = (undefined *)param_1[0x848];
                  }
                  else if (fVar43 < DAT_ram_40098588) {
                    uVar23 = (uint)(-1 < (int)fVar43) * (int)fVar43;
                    puVar63 = (undefined *)
                              ((fVar43 - (float)uVar23) *
                               (param_1[uVar23 + 0x849] - param_1[uVar23 + 0x848]) +
                              param_1[uVar23 + 0x848]);
                  }
                  else {
                    puVar63 = (undefined *)param_1[0xc47];
                  }
                  fVar16 = fVar16 - (float)puVar29;
                  if ((float)puVar63 <= fVar16) {
                    do {
                      fVar26 = (float)(uVar28 & 0x1ff);
                      uVar28 = (int)fVar26 - 1;
                      fVar33 = (fVar44 - fVar33) * ((float)puVar63 / fVar57) + fVar33;
                      fVar39 = (fVar36 - fVar39) * ((float)puVar63 / fVar57) + fVar39;
                      fVar43 = (fVar33 + (float)puVar14) * fVar27;
                      *(ulonglong *)(param_1 + (int)fVar26 + 0xc48) =
                           (ulonglong)
                           (uint)((float)*(undefined8 *)(param_1 + (int)fVar26 + 0xc48) * fVar48 +
                                 fVar39);
                      fVar41 = param_1[(uVar28 & 0x1ff) + 0xc48];
                      if (0.0 < fVar43) {
                        uVar23 = (uint)(-1 < (int)fVar43) * (int)fVar43;
                        if (fVar43 < fVar46) {
                          puVar29 = (undefined *)
                                    ((param_1[uVar23 + 0x849] - param_1[uVar23 + 0x848]) *
                                     (fVar43 - (float)uVar23) + param_1[uVar23 + 0x848]);
                        }
                        else {
                          puVar29 = (undefined *)param_1[0xc47];
                        }
                      }
                      else {
                        puVar29 = (undefined *)param_1[0x848];
                      }
                      fVar16 = fVar16 - (float)puVar63;
                      puVar63 = puVar29;
                    } while ((float)puVar29 <= fVar16);
                  }
                  break;
                }
                fVar46 = param_1[0x841];
                fVar27 = fVar33 * param_1[0x843] + param_1[0x842];
                if (fVar27 < (float)puVar14) {
                  if (0.0 < fVar27) {
                    uVar62 = (ulonglong)(uint)((float)puVar14 - fVar27);
                    fVar27 = DAT_ram_400986bc._4_4_;
                    if ((float)puVar24 < fVar46) goto LAB_ram_4006e5d0;
LAB_ram_4006e59e:
                    fVar46 = (float)FUN_ram_40000c86(uVar62);
                    puVar63 = (undefined *)(fVar46 * fVar27 + fVar46 * fVar27);
                    if ((float)puVar24 <= (float)puVar63) goto LAB_ram_4006e4c8;
                  }
                  else if ((float)puVar24 < fVar46) {
                    uVar62 = ZEXT48(puVar14);
                    fVar27 = -fVar46;
                    goto LAB_ram_4006e59e;
                  }
                  puVar63 = puVar24;
                }
                else {
                  puVar63 = (undefined *)DAT_ram_400986c4;
                  if ((float)in_register_00000100 < fVar46) {
                    uVar62 = CONCAT44(DAT_ram_400986bc._4_4_,(undefined4)DAT_ram_400986bc);
LAB_ram_4006e5d0:
                    fVar27 = -fVar46;
                    goto LAB_ram_4006e59e;
                  }
                }
LAB_ram_4006e4c8:
                fVar16 = fVar16 - (float)puVar29;
                puVar29 = puVar63;
              } while ((float)puVar63 <= fVar16);
            }
            puVar29 = (undefined *)((float)puVar63 - fVar16);
            if ((float)puVar63 - fVar16 < 0.0) {
              puVar29 = (undefined *)0x0;
            }
            param_2 = param_2 + 1;
            fVar16 = fVar44 * fVar49 + (float)puVar32 * (float)puVar31;
            *param_4 = (float)puStack_188 * (fVar36 * (float)puStack_184 + fVar41 * (float)puVar34);
            param_4 = param_4 + 1;
            puVar32 = puVar35;
            fVar33 = fVar44;
            fVar39 = fVar36;
            puVar24 = puVar35;
          } while (param_2 != pfVar17);
        }
        else {
          if (param_3 == (float *)0x0) {
            param_3 = param_2;
          }
          iVar20 = 0;
          puVar32 = (undefined *)param_1[0x837];
          fVar33 = param_1[0x844];
          fVar39 = param_1[0x1048];
          fVar46 = fVar47;
          puVar35 = in_register_00000100;
          do {
            fVar44 = fVar16;
            fVar36 = *(float *)((int)param_2 + iVar20);
            fVar47 = *(float *)((int)param_3 + iVar20);
            puVar24 = puVar29;
            if ((float)puVar29 <= 0.0) {
              if (*(char *)((int)param_1 + 0x211d) == '\0') {
                puVar29 = (undefined *)param_1[0x841];
                puVar24 = (undefined *)(param_1[0x843] * fVar33 + param_1[0x842]);
                puVar63 = DAT_ram_40098164;
                if (((float)puVar14 <= (float)puVar24) || (puVar63 = puVar24, 0.0 < (float)puVar24))
                {
                  if ((float)puVar29 <= (float)(undefined *)DAT_ram_40098564) {
                    puVar29 = (undefined *)DAT_ram_40098564;
                  }
                }
                else {
                  puVar24 = DAT_ram_400980f8;
                  puVar63 = (undefined *)DAT_ram_40098564;
                  if ((float)puVar29 <= (float)(undefined *)DAT_ram_40098564) goto LAB_ram_4006c770;
                }
                fVar40 = (float)FUN_ram_40000c86((float)puVar14 - (float)puVar63);
                puVar29 = (undefined *)(-(float)puVar29 * fVar40 + -(float)puVar29 * fVar40);
                uVar62 = uVar62 & 0xffffffff;
                puVar24 = DAT_ram_400980f8;
                if ((float)DAT_ram_400980f8 <= (float)puVar29) {
                  puVar24 = puVar29;
                }
              }
              else {
                fVar40 = (fVar33 + (float)puVar14) * DAT_ram_40098780;
                if (0.0 < fVar40) {
                  if (DAT_ram_40098588 <= fVar40) {
                    puVar24 = (undefined *)param_1[0xc47];
                  }
                  else {
                    uVar28 = (uint)(-1 < (int)fVar40) * (int)fVar40;
                    puVar24 = (undefined *)
                              ((fVar40 - (float)uVar28) *
                               (param_1[uVar28 + 0x849] - param_1[uVar28 + 0x848]) +
                              param_1[uVar28 + 0x848]);
                  }
                }
                else {
                  puVar24 = (undefined *)param_1[0x848];
                }
              }
            }
LAB_ram_4006c770:
            uVar28 = (int)fVar26 - 1;
            puVar29 = puVar24;
            puVar63 = DAT_ram_400980f8;
            fVar16 = fVar57;
            if ((float)puVar24 <= fVar57) {
              do {
                fVar41 = (float)puVar29 / fVar57;
                fVar26 = (float)(uVar28 & 0x1ff);
                uVar28 = (int)fVar26 - 1;
                fVar39 = fVar41 * (fVar36 - fVar39) + fVar39;
                fVar46 = fVar41 * (fVar47 - fVar46) + fVar46;
                fVar33 = fVar41 * (fVar44 - fVar33) + fVar33;
                *(ulonglong *)(param_1 + (int)fVar26 + 0xc48) =
                     (ulonglong)
                     (uint)((float)*(undefined8 *)(param_1 + (int)fVar26 + 0xc48) * fVar48 + fVar39)
                ;
                *(ulonglong *)(param_1 + (int)fVar26 + 0xe48) =
                     (ulonglong)
                     (uint)((float)*(undefined8 *)(param_1 + (int)fVar26 + 0xe48) * fVar48 + fVar46)
                ;
                fVar27 = DAT_ram_40098780;
                fVar40 = DAT_ram_40098588;
                fVar41 = param_1[(uVar28 & 0x1ff) + 0xc48];
                uVar62 = *(ulonglong *)(param_1 + (uVar28 & 0x1ff) + 0xe48);
                if (*(char *)((int)param_1 + 0x211d) != '\0') {
                  fVar43 = (fVar33 + (float)puVar14) * DAT_ram_40098780;
                  if (fVar43 <= 0.0) {
                    puVar24 = (undefined *)param_1[0x848];
                  }
                  else if (fVar43 < DAT_ram_40098588) {
                    uVar23 = (uint)(-1 < (int)fVar43) * (int)fVar43;
                    puVar24 = (undefined *)
                              ((fVar43 - (float)uVar23) *
                               (param_1[uVar23 + 0x849] - param_1[uVar23 + 0x848]) +
                              param_1[uVar23 + 0x848]);
                  }
                  else {
                    puVar24 = (undefined *)param_1[0xc47];
                  }
                  fVar16 = fVar16 - (float)puVar29;
                  if ((float)puVar24 <= fVar16) {
                    do {
                      fVar41 = (float)puVar24 / fVar57;
                      fVar26 = (float)(uVar28 & 0x1ff);
                      uVar28 = (int)fVar26 - 1;
                      fVar33 = (fVar44 - fVar33) * fVar41 + fVar33;
                      fVar39 = (fVar36 - fVar39) * fVar41 + fVar39;
                      fVar46 = (fVar47 - fVar46) * fVar41 + fVar46;
                      fVar43 = (fVar33 + (float)puVar14) * fVar27;
                      *(ulonglong *)(param_1 + (int)fVar26 + 0xc48) =
                           (ulonglong)
                           (uint)(fVar48 * (float)*(undefined8 *)(param_1 + (int)fVar26 + 0xc48) +
                                 fVar39);
                      *(ulonglong *)(param_1 + (int)fVar26 + 0xe48) =
                           (ulonglong)
                           (uint)(fVar48 * (float)*(undefined8 *)(param_1 + (int)fVar26 + 0xe48) +
                                 fVar46);
                      uVar62 = *(ulonglong *)(param_1 + (uVar28 & 0x1ff) + 0xe48);
                      fVar41 = param_1[(uVar28 & 0x1ff) + 0xc48];
                      if (0.0 < fVar43) {
                        uVar23 = (uint)(-1 < (int)fVar43) * (int)fVar43;
                        if (fVar43 < fVar40) {
                          puVar29 = (undefined *)
                                    ((param_1[uVar23 + 0x849] - param_1[uVar23 + 0x848]) *
                                     (fVar43 - (float)uVar23) + param_1[uVar23 + 0x848]);
                        }
                        else {
                          puVar29 = (undefined *)param_1[0xc47];
                        }
                      }
                      else {
                        puVar29 = (undefined *)param_1[0x848];
                      }
                      fVar16 = fVar16 - (float)puVar24;
                      puVar24 = puVar29;
                    } while ((float)puVar29 <= fVar16);
                  }
                  break;
                }
                fVar40 = param_1[0x841];
                fVar27 = fVar33 * param_1[0x843] + param_1[0x842];
                if (fVar27 < (float)puVar14) {
                  if (fVar27 <= 0.0) {
                    if ((float)(undefined *)DAT_ram_40098564 < fVar40) {
                      uVar52 = ZEXT48(puVar14);
                      fVar27 = -fVar40;
                      goto LAB_ram_4006c9e8;
                    }
                  }
                  else {
                    uVar52 = (ulonglong)(uint)((float)puVar14 - fVar27);
                    fVar27 = DAT_ram_400986bc._4_4_;
                    if ((float)(undefined *)DAT_ram_40098564 < fVar40) goto LAB_ram_4006ca2c;
LAB_ram_4006c9e8:
                    fVar40 = (float)FUN_ram_40000c86(uVar52);
                    uVar62 = CONCAT44(fVar27,(int)uVar62);
                    puVar24 = (undefined *)(fVar40 * fVar27 + fVar40 * fVar27);
                    puVar63 = DAT_ram_400980f8;
                    if ((float)DAT_ram_400980f8 <= (float)puVar24) goto LAB_ram_4006c8f6;
                  }
                  puVar24 = puVar63;
                }
                else {
                  puVar24 = (undefined *)DAT_ram_400986c4;
                  if ((float)(undefined *)DAT_ram_40098564 < fVar40) {
                    uVar52 = CONCAT44(DAT_ram_400986bc._4_4_,(undefined4)DAT_ram_400986bc);
LAB_ram_4006ca2c:
                    fVar27 = -fVar40;
                    goto LAB_ram_4006c9e8;
                  }
                }
LAB_ram_4006c8f6:
                fVar16 = fVar16 - (float)puVar29;
                puVar29 = puVar24;
              } while ((float)puVar24 <= fVar16);
            }
            fVar40 = (float)uVar62;
            puVar29 = (undefined *)((float)puVar24 - fVar16);
            if ((float)puVar24 - fVar16 < 0.0) {
              puVar29 = (undefined *)0x0;
            }
            *(ulonglong *)((int)param_4 + iVar20) =
                 (ulonglong)
                 (uint)((fVar36 * (float)puStack_184 + fVar41 * (float)puVar34) * (float)puStack_188
                       );
            if (param_5 != (float *)0x0) {
              *(ulonglong *)((int)param_5 + iVar20) =
                   (ulonglong)
                   (uint)((float)puStack_188 *
                         (fVar47 * (float)puStack_184 + fVar40 * (float)puVar34));
            }
            iVar20 = iVar20 + 4;
            fVar16 = fVar44 * fVar49 + (float)puVar32 * (float)puVar31;
            puVar32 = puVar35;
            fVar33 = fVar44;
            fVar39 = fVar36;
            fVar46 = fVar47;
          } while (iVar20 != param_6 << 2);
        }
        param_1[0x846] = fVar26;
        param_1[0x845] = (float)puVar29;
        param_1[0x844] = fVar44;
        param_1[0x836] = fVar16;
        param_1[0x837] = (float)puVar35;
        param_1[0x1048] = fVar36;
        param_1[0x1049] = fVar47;
        param_1[0x104a] = fVar41;
        param_1[0x104b] = fVar40;
        return;
      }
      if (param_8 != 0xc) {
        if (param_8 == 3) {
          if (param_7 == (float *)0x0) {
            puVar34 = (undefined *)0x0;
            puVar29 = DAT_ram_40098738;
            puVar32 = DAT_ram_400980e8;
            puVar31 = puVar34;
LAB_ram_4006e636:
            puVar35 = DAT_ram_4009281c;
          }
          else {
            puVar29 = (undefined *)*param_7;
            if (0.0 <= (float)puVar29) {
              if ((float)DAT_ram_4009281c < (float)puVar29) {
                puVar29 = DAT_ram_4009281c;
              }
            }
            else {
              puVar29 = (undefined *)0x0;
            }
            puVar32 = (undefined *)param_7[1];
            if (0.0 <= (float)puVar32) {
              if ((float)DAT_ram_4009281c < (float)puVar32) {
                puVar32 = DAT_ram_4009281c;
              }
            }
            else {
              puVar32 = (undefined *)0x0;
            }
            puVar34 = (undefined *)param_7[2];
            if (0.0 <= (float)puVar34) {
              if ((float)DAT_ram_4009281c < (float)puVar34) {
                puVar34 = DAT_ram_4009281c;
              }
            }
            else {
              puVar34 = (undefined *)0x0;
            }
            puVar31 = (undefined *)param_7[3];
            if (0.0 <= (float)puVar31) {
              if ((float)DAT_ram_4009281c < (float)puVar31) {
                puVar31 = DAT_ram_4009281c;
              }
            }
            else {
              puVar31 = (undefined *)0x0;
            }
            puVar35 = (undefined *)param_7[4];
            if (0.0 <= (float)puVar35) {
              if ((float)DAT_ram_4009281c < (float)puVar35) goto LAB_ram_4006e636;
            }
            else {
              puVar35 = (undefined *)0x0;
            }
          }
          if (param_1[0x1058] == (float)puVar29) goto LAB_ram_4006be22;
          fVar41 = (float)*(undefined8 *)param_1;
          if (fVar41 <= DAT_ram_40093094) {
            fVar41 = DAT_ram_400980e0;
            if (0.0 <= (float)puVar29) goto LAB_ram_4006ea46;
            param_1[0x104f] = DAT_ram_40098810;
          }
          else {
            if ((float)puVar29 < 0.0) {
              puVar24 = (undefined *)0x0;
            }
            else {
LAB_ram_4006ea46:
              puVar24 = DAT_ram_4009281c;
              if ((float)puVar29 <= (float)DAT_ram_4009281c) {
                fVar48 = (float)puVar29 * DAT_ram_40094238 + DAT_ram_400934d4;
                bVar3 = fVar41 < (float)DAT_ram_4009281c;
                param_1[0x104f] = (fVar48 * DAT_ram_400980f4) / fVar41;
                if (bVar3) {
                  fVar41 = DAT_ram_400980e0;
                }
                fVar49 = fVar41;
                if (fVar48 < 0.0) {
                  fVar48 = 0.0;
                }
                goto LAB_ram_4006ea96;
              }
            }
            fVar48 = (float)puVar24 * DAT_ram_40094238 + DAT_ram_400934d4;
            bVar3 = fVar41 < (float)DAT_ram_4009281c;
            param_1[0x104f] = (fVar48 * DAT_ram_400980f4) / fVar41;
            fVar49 = fVar41;
            if (bVar3) {
              fVar49 = DAT_ram_400980e0;
            }
          }
LAB_ram_4006ea96:
          fVar49 = (fVar48 * fVar57) / fVar49;
          fVar48 = (float)FUN_ram_40000a08(fVar49);
          param_1[0x1052] = fVar48;
          fVar49 = (float)FUN_ram_40000786(fVar49);
          param_1[0x1058] = (float)puVar29;
          param_1[0x1053] = fVar49;
LAB_ram_4006be22:
          if (param_1[0x1059] != (float)puVar32) {
            puVar29 = (undefined *)0x0;
            if ((0.0 <= (float)puVar32) && (puVar29 = puVar14, (float)puVar32 <= (float)puVar14)) {
              puVar29 = puVar32;
            }
            param_1[0x1054] = (float)puVar29;
            param_1[0x1059] = (float)puVar32;
          }
          if (param_1[0x105a] != (float)puVar34) {
            if (0.0 <= (float)puVar34) {
              bVar25 = 3;
              if ((float)puVar34 <= (float)puVar14) {
                fVar49 = (float)FUN_ram_40000800((float)puVar34 * DAT_ram_4009309c);
                iVar20 = (int)fVar49;
                bVar25 = 3;
                if (iVar20 < 4) {
                  bVar25 = (byte)iVar20 & (char)~(byte)((uint)iVar20 >> 0x18) >> 7;
                }
              }
            }
            else {
              bVar25 = 0;
            }
            *(byte *)(param_1 + 0x105f) = bVar25;
            param_1[0x105a] = (float)puVar34;
          }
          if (param_1[0x105b] == (float)puVar31) {
            puVar29 = (undefined *)param_1[0x1057];
            cVar30 = *(char *)((int)param_1 + 0x417d);
          }
          else {
            fVar49 = (float)*(undefined8 *)param_1;
            if ((float)*(undefined8 *)param_1 <= DAT_ram_40093094) {
              fVar49 = DAT_ram_400980e0;
            }
            if (((float)puVar31 < 0.0) ||
               ((fVar48 = DAT_ram_400930dc, (float)puVar31 <= (float)puVar14 &&
                (fVar48 = (float)puVar31 * DAT_ram_400930dc + 0.0, fVar48 <= 0.0)))) {
              puVar29 = (undefined *)0x0;
              *(undefined1 *)((int)param_1 + 0x417d) = 0;
              param_1[0x1057] = 0.0;
              cVar30 = '\0';
            }
            else {
              fVar48 = fVar48 * DAT_ram_4009810c;
              *(undefined1 *)((int)param_1 + 0x417d) = 1;
              puVar29 = in_register_00000100;
              fVar49 = (float)FUN_ram_40000c0e(fVar48 / fVar49);
              cVar30 = *(char *)((int)param_1 + 0x417d);
              param_1[0x1057] = fVar49;
              in_register_00000100 = puVar29;
            }
            param_1[0x105b] = (float)puVar31;
          }
          if (param_1[0x105c] == (float)puVar35) {
            puVar32 = (undefined *)param_1[0x1055];
            puVar34 = (undefined *)((float)puVar14 - (float)puVar32);
          }
          else {
            if ((float)puVar35 < 0.0) {
              puVar32 = (undefined *)0x0;
              puVar34 = puVar14;
            }
            else if ((float)puVar14 < (float)puVar35) {
              puVar32 = puVar14;
              puVar34 = (undefined *)0x0;
            }
            else {
              puVar32 = puVar35;
              puVar34 = (undefined *)((float)puVar14 - (float)puVar35);
            }
            param_1[0x1055] = (float)puVar32;
            param_1[0x105c] = (float)puVar35;
          }
          puVar31 = DAT_ram_4009287c;
          if (param_1[0x105d] == (float)DAT_ram_4009287c) {
            puVar31 = (undefined *)param_1[0x1056];
          }
          else {
            param_1[0x1056] = (float)DAT_ram_4009287c;
            param_1[0x105d] = (float)puVar31;
          }
          puVar35 = DAT_ram_40092864;
          fVar48 = param_1[0x1054];
          fVar49 = param_1[0x104e];
          fVar33 = param_1[0x104f];
          fVar41 = param_1[0x1050];
          fVar40 = param_1[0x1051];
          fVar47 = param_1[0x1052];
          fVar16 = param_1[0x1053];
          fVar26 = param_1[0x105e];
          cVar1 = *(char *)(param_1 + 0x105f);
          fVar39 = (float)FUN_ram_400008b8(DAT_ram_40092838,
                                           -(fVar48 * (float)DAT_ram_40092864) + (float)puVar14);
          if ((param_9 == '\0') || (param_5 == (float *)0x0)) {
            pfVar17 = param_4 + param_6;
            fVar46 = DAT_ram_400984dc;
            fVar36 = DAT_ram_400986f0;
            puVar24 = PTR_firmware_entry_ram_40092830;
            do {
              if (cVar1 == '\0') {
                fVar44 = (fVar41 + (float)puVar14) * (float)puVar35 * fVar48;
              }
              else if (cVar1 == '\x02') {
                fVar44 = fVar48;
                if (fVar46 <= fVar49) {
                  fVar44 = fVar48 * 0.0;
                }
              }
              else if (cVar1 == '\x03') {
                fVar44 = (fVar49 * fVar36 * (float)puVar24 + (float)in_register_00000100 +
                         (float)puVar14) * (float)puVar35 * fVar48;
              }
              else if (cVar1 == '\x01') {
                fVar44 = (ABS(fVar49 * fVar36 * (float)puVar24 + (float)in_register_00000100) *
                          (float)puVar24 + (float)in_register_00000100 + (float)puVar14) *
                         (float)puVar35 * fVar48;
              }
              else {
                fVar44 = (float)FUN_ram_40000a08(fVar49);
                fVar46 = DAT_ram_400984dc;
                fVar36 = DAT_ram_400986f0;
                puVar24 = PTR_firmware_entry_ram_40092830;
                fVar44 = (fVar44 + (float)puVar14) * (float)puVar35 * fVar48;
              }
              fVar44 = (((float)puVar14 - fVar48) + fVar44) * ((float)puVar14 / fVar39);
              if (cVar30 != '\0') {
                fVar26 = fVar44 * ((float)puVar14 - (float)puVar29) + fVar26 * (float)puVar29;
                fVar44 = fVar26;
              }
              fVar49 = fVar49 + fVar33;
              *(ulonglong *)param_4 =
                   (ulonglong)
                   (uint)((*param_2 * (float)puVar34 + *param_2 * fVar44 * (float)puVar32) *
                         (float)puVar31);
              if (fVar57 <= fVar49) {
                fVar49 = fVar49 - fVar57;
              }
              fVar44 = fVar47 * fVar41;
              param_4 = param_4 + 1;
              param_2 = param_2 + 1;
              fVar41 = fVar16 * fVar41 + fVar47 * fVar40;
              fVar40 = fVar16 * fVar40 - fVar44;
            } while (param_4 != pfVar17);
          }
          else {
            if (param_3 == (float *)0x0) {
              param_3 = param_2;
            }
            iVar20 = 0;
            fVar46 = DAT_ram_400984dc;
            fVar36 = DAT_ram_400986f0;
            puVar24 = PTR_firmware_entry_ram_40092830;
            do {
              if (cVar1 == '\0') {
                fVar44 = (fVar41 + (float)puVar14) * (float)puVar35 * fVar48;
              }
              else if (cVar1 == '\x02') {
                fVar44 = fVar48;
                if (fVar46 <= fVar49) {
                  fVar44 = fVar48 * 0.0;
                }
              }
              else if (cVar1 == '\x03') {
                fVar44 = (fVar49 * fVar36 * (float)puVar24 + (float)in_register_00000100 +
                         (float)puVar14) * (float)puVar35 * fVar48;
              }
              else if (cVar1 == '\x01') {
                fVar44 = (ABS(fVar49 * fVar36 * (float)puVar24 + (float)in_register_00000100) *
                          (float)puVar24 + (float)in_register_00000100 + (float)puVar14) *
                         (float)puVar35 * fVar48;
              }
              else {
                fVar44 = (float)FUN_ram_40000a08(fVar49);
                fVar46 = DAT_ram_400984dc;
                fVar36 = DAT_ram_400986f0;
                puVar24 = PTR_firmware_entry_ram_40092830;
                fVar44 = (fVar44 + (float)puVar14) * (float)puVar35 * fVar48;
              }
              fVar44 = (((float)puVar14 - fVar48) + fVar44) * ((float)puVar14 / fVar39);
              if (cVar30 != '\0') {
                fVar26 = fVar44 * ((float)puVar14 - (float)puVar29) + fVar26 * (float)puVar29;
                fVar44 = fVar26;
              }
              fVar27 = (float)*(undefined8 *)((int)param_2 + iVar20);
              fVar43 = (float)*(undefined8 *)((int)param_3 + iVar20);
              fVar49 = fVar49 + fVar33;
              *(ulonglong *)((int)param_4 + iVar20) =
                   (ulonglong)
                   (uint)((fVar27 * (float)puVar34 + fVar27 * fVar44 * (float)puVar32) *
                         (float)puVar31);
              *(ulonglong *)((int)param_5 + iVar20) =
                   (ulonglong)
                   (uint)((fVar43 * (float)puVar34 + fVar43 * fVar44 * (float)puVar32) *
                         (float)puVar31);
              if (fVar57 <= fVar49) {
                fVar49 = fVar49 - fVar57;
              }
              fVar44 = fVar47 * fVar41;
              iVar20 = iVar20 + 4;
              fVar41 = fVar16 * fVar41 + fVar47 * fVar40;
              fVar40 = fVar16 * fVar40 - fVar44;
            } while (iVar20 != param_6 << 2);
          }
          param_1[0x104e] = fVar49;
          param_1[0x1050] = fVar41;
          param_1[0x1051] = fVar40;
          param_1[0x105e] = fVar26;
          return;
        }
        if (param_8 == 4) {
          if (param_7 == (float *)0x0) {
            puVar31 = (undefined *)0x0;
            puVar32 = DAT_ram_4009873c;
            puVar34 = DAT_ram_400930a0;
            puVar24 = DAT_ram_4009287c;
          }
          else {
            puVar32 = (undefined *)*param_7;
            if (0.0 <= (float)puVar32) {
              if ((float)DAT_ram_4009281c < (float)puVar32) {
                puVar32 = DAT_ram_4009281c;
              }
            }
            else {
              puVar32 = (undefined *)0x0;
            }
            puVar34 = (undefined *)param_7[1];
            if (0.0 <= (float)puVar34) {
              if ((float)DAT_ram_4009281c < (float)puVar34) {
                puVar34 = DAT_ram_4009281c;
              }
            }
            else {
              puVar34 = (undefined *)0x0;
            }
            puVar31 = (undefined *)param_7[2];
            if (0.0 <= (float)puVar31) {
              if ((float)DAT_ram_4009281c < (float)puVar31) {
                puVar31 = DAT_ram_4009281c;
              }
            }
            else {
              puVar31 = (undefined *)0x0;
            }
            puVar35 = (undefined *)param_7[3];
            if (0.0 <= (float)puVar35) {
              puVar24 = DAT_ram_4009281c;
              if ((float)DAT_ram_4009281c < (float)puVar35) goto LAB_ram_4006ce42;
            }
            else {
              puVar35 = (undefined *)0x0;
            }
            puVar24 = puVar35;
          }
LAB_ram_4006ce42:
          if (param_1[0x106f] == (float)puVar32) {
            fVar48 = param_1[0x1066];
            fVar49 = param_1[0x1067];
          }
          else {
            fVar41 = (float)*(undefined8 *)param_1;
            if (fVar41 <= DAT_ram_40093094) {
              fVar41 = DAT_ram_400980e0;
              if (0.0 <= (float)puVar32) goto LAB_ram_4006ec20;
              param_1[0x1063] = DAT_ram_40098810;
            }
            else {
              if ((float)puVar32 < 0.0) {
                puVar35 = (undefined *)0x0;
              }
              else {
LAB_ram_4006ec20:
                puVar35 = DAT_ram_4009281c;
                if ((float)puVar32 <= (float)DAT_ram_4009281c) {
                  fVar48 = (float)puVar32 * DAT_ram_40094238 + DAT_ram_400934d4;
                  bVar3 = fVar41 < (float)DAT_ram_4009281c;
                  param_1[0x1063] = (fVar48 * DAT_ram_400980f4) / fVar41;
                  if (bVar3) {
                    fVar41 = DAT_ram_400980e0;
                  }
                  fVar49 = fVar41;
                  if (fVar48 < 0.0) {
                    fVar48 = 0.0;
                  }
                  goto LAB_ram_4006ec70;
                }
              }
              fVar48 = (float)puVar35 * DAT_ram_40094238 + DAT_ram_400934d4;
              bVar3 = fVar41 < (float)DAT_ram_4009281c;
              param_1[0x1063] = (fVar48 * DAT_ram_400980f4) / fVar41;
              fVar49 = fVar41;
              if (bVar3) {
                fVar49 = DAT_ram_400980e0;
              }
            }
LAB_ram_4006ec70:
            fVar49 = (fVar48 * fVar57) / fVar49;
            fVar48 = (float)FUN_ram_40000a08(fVar49);
            param_1[0x1066] = fVar48;
            fVar49 = (float)FUN_ram_40000786(fVar49);
            param_1[0x106f] = (float)puVar32;
            param_1[0x1067] = fVar49;
          }
          puVar32 = PTR_firmware_entry_ram_40092830;
          if (param_1[0x1070] == (float)puVar34) {
            fVar41 = param_1[0x106a];
            fVar40 = param_1[0x106b];
            goto LAB_ram_4006ce86;
          }
          fVar41 = (float)*(undefined8 *)param_1;
          if (fVar41 <= DAT_ram_40093094) {
            if ((float)puVar34 < 0.0) goto LAB_ram_4006f0d2;
            puVar35 = puVar34;
            fVar41 = DAT_ram_400980e0;
            fVar47 = DAT_ram_400937ac;
            if ((float)puVar34 <= (float)puVar14) goto LAB_ram_4006ebb2;
LAB_ram_4006f1f6:
            fVar40 = fVar47 * (float)PTR_firmware_entry_ram_40092830 + DAT_ram_400930a4;
            fVar41 = fVar47;
          }
          else {
            puVar35 = (undefined *)0x0;
            if ((0.0 <= (float)puVar34) && (puVar35 = puVar14, (float)puVar34 <= (float)puVar14)) {
              puVar35 = puVar34;
            }
LAB_ram_4006ebb2:
            fVar47 = (((float)puVar35 * DAT_ram_400930bc + 0.0) * fVar41) / DAT_ram_40093094;
            fVar41 = DAT_ram_400986d4;
            fVar40 = DAT_ram_400986d0;
            if (fVar47 <= DAT_ram_400986d4) {
              if (0.0 <= fVar47) goto LAB_ram_4006f1f6;
LAB_ram_4006f0d2:
              fVar41 = 0.0;
              fVar40 = DAT_ram_400930a4;
            }
          }
          param_1[0x106a] = fVar41;
          param_1[0x106b] = fVar40;
          param_1[0x1070] = (float)puVar34;
LAB_ram_4006ce86:
          if (param_1[0x1071] == (float)puVar31) {
            uVar28 = (uint)*(byte *)(param_1 + 0x1074);
          }
          else {
            uVar28 = 0;
            if ((0.0 <= (float)puVar31) && (uVar28 = 3, (float)puVar31 <= (float)puVar14)) {
              fVar47 = (float)FUN_ram_40000800((float)puVar31 * DAT_ram_4009309c);
              uVar23 = (uint)fVar47;
              uVar28 = uVar23 & (int)~uVar23 >> 0x1f;
              if (3 < (int)uVar23) {
                uVar28 = 3;
              }
              uVar28 = uVar28 & 0xff;
            }
            *(char *)(param_1 + 0x1074) = (char)uVar28;
            param_1[0x1071] = (float)puVar31;
          }
          if (param_1[0x1072] == (float)puVar24) {
            puVar34 = (undefined *)param_1[0x106d];
            puVar31 = (undefined *)((float)puVar14 - (float)puVar34);
          }
          else {
            if ((float)puVar24 < 0.0) {
              puVar34 = (undefined *)0x0;
              puVar31 = puVar14;
            }
            else if ((float)puVar14 < (float)puVar24) {
              puVar34 = puVar14;
              puVar31 = (undefined *)0x0;
            }
            else {
              puVar34 = puVar24;
              puVar31 = (undefined *)((float)puVar14 - (float)puVar24);
            }
            param_1[0x106d] = (float)puVar34;
            param_1[0x1072] = (float)puVar24;
          }
          if (param_1[0x1073] == (float)puVar29) {
            puVar29 = (undefined *)param_1[0x106e];
          }
          else {
            param_1[0x106e] = (float)puVar29;
            param_1[0x1073] = (float)puVar29;
          }
          if (*(char *)(param_1 + 0x1061) == '\0') {
            param_1[0x1068] = fVar41;
            param_1[0x1069] = fVar40;
            fVar47 = *param_2;
            pfVar17 = param_2;
            if (param_3 != (float *)0x0) {
              pfVar17 = param_3;
            }
            pfVar21 = param_1 + 0x1075;
            do {
              *(ulonglong *)pfVar21 = (ulonglong)(uint)fVar47;
              pfVar21 = pfVar21 + 1;
            } while (param_1 + 0x3075 != pfVar21);
            if (param_9 != '\0') {
              uVar61 = *(undefined8 *)pfVar17;
              pfVar17 = param_1 + 0x3075;
              do {
                *(undefined8 *)pfVar17 = uVar61;
                pfVar17 = pfVar17 + 1;
              } while (param_1 + 0x5075 != pfVar17);
            }
            *(undefined1 *)(param_1 + 0x1061) = 1;
          }
          puVar24 = DAT_ram_40098750;
          fVar44 = DAT_ram_400930cc;
          puVar35 = DAT_ram_40092864;
          fVar16 = param_1[0x1068];
          fVar47 = param_1[0x1062];
          fVar26 = param_1[0x1063];
          fVar33 = param_1[0x1064];
          fVar39 = param_1[0x1065];
          fVar46 = param_1[0x1069];
          fVar36 = param_1[0x106c];
          bVar3 = DAT_ram_40092838 < ABS(fVar41 - fVar16);
          fVar27 = (float)((uint)param_1[0x1060] & 0x1fff);
          bVar2 = DAT_ram_4009878c < ABS(fVar40 - fVar46);
          if ((param_9 == '\0') || (param_5 == (float *)0x0)) {
            pfVar17 = param_2 + param_6;
            puVar63 = DAT_ram_40092818;
            fVar43 = (float)DAT_ram_40098790;
            do {
              if (bVar3 || bVar2) {
                fVar16 = fVar36 * (fVar41 - fVar16) + fVar16;
                fVar46 = fVar36 * (fVar40 - fVar46) + fVar46;
              }
              if (uVar28 == 0) {
                fVar45 = fVar16 * fVar33;
              }
              else if (uVar28 == 2) {
                fVar45 = fVar16;
                if (DAT_ram_400984dc <= fVar47) {
                  fVar45 = -fVar16;
                }
              }
              else if (uVar28 == 3) {
                fVar45 = fVar16 * (fVar47 * DAT_ram_400986f0 * (float)puVar32 + (float)puVar63);
              }
              else if (uVar28 == 1) {
                fVar45 = fVar16 * (ABS(fVar47 * DAT_ram_400986f0 * (float)puVar32 + (float)puVar63)
                                   * (float)puVar32 + (float)puVar63);
              }
              else {
                fVar45 = (float)FUN_ram_40000a08(fVar47);
                puVar63 = DAT_ram_40092818;
                fVar43 = (float)DAT_ram_40098790;
                fVar45 = fVar16 * fVar45;
              }
              puVar58 = (undefined *)(fVar46 + fVar45);
              puVar37 = puVar32;
              if (((float)puVar32 <= (float)puVar58) &&
                 (puVar37 = puVar58, (float)puVar24 < (float)puVar58)) {
                puVar37 = puVar24;
              }
              fVar45 = (float)(int)fVar27 - (float)puVar37;
              if (fVar45 < 0.0) {
                fVar45 = fVar45 + fVar43;
              }
              uVar23 = (uint)(-1 < (int)fVar45) * (int)fVar45;
              fVar7 = *param_2;
              uVar22 = uVar23 & 0x1fff;
              fVar45 = fVar45 - (float)uVar23;
              *(ulonglong *)(param_1 + (int)fVar27 + 0x1075) = (ulonglong)(uint)fVar7;
              fVar12 = fVar45 - (float)puVar14;
              fVar13 = fVar45 - (float)puVar32;
              fVar59 = fVar45 + (float)puVar14;
              fVar47 = fVar47 + fVar26;
              fVar27 = (float)((int)fVar27 + 1U & 0x1fff);
              *(ulonglong *)param_4 =
                   (ulonglong)
                   (uint)((fVar7 * (float)puVar31 +
                          ((float)*(undefined8 *)(param_1 + (uVar22 + 2 & 0x1fff) + 0x1075) *
                           ((fVar45 * fVar59 * fVar12) / fVar44) +
                          param_1[(uVar22 + 1 & 0x1fff) + 0x1075] *
                          -fVar59 * fVar45 * fVar13 * (float)puVar35 +
                          param_1[(uVar22 - 1 & 0x1fff) + 0x1075] *
                          ((-fVar45 * fVar12 * fVar13) / fVar44) +
                          fVar12 * fVar59 * fVar13 * (float)puVar35 * param_1[uVar22 + 0x1075]) *
                          (float)puVar34) * (float)puVar29);
              if (fVar57 <= fVar47) {
                fVar47 = fVar47 - fVar57;
              }
              fVar45 = fVar33 * fVar48;
              param_2 = param_2 + 1;
              param_4 = param_4 + 1;
              fVar33 = fVar33 * fVar49 + fVar39 * fVar48;
              fVar39 = fVar39 * fVar49 - fVar45;
            } while (pfVar17 != param_2);
          }
          else {
            if (param_3 == (float *)0x0) {
              param_3 = param_2;
            }
            pfVar17 = param_4 + param_6;
            puVar24 = in_register_00000100;
            do {
              if (bVar3 || bVar2) {
                fVar16 = fVar36 * (fVar41 - fVar16) + fVar16;
                fVar46 = fVar36 * (fVar40 - fVar46) + fVar46;
              }
              if (uVar28 == 0) {
                fVar43 = fVar16 * fVar33;
              }
              else if (uVar28 == 2) {
                fVar43 = fVar16;
                if (DAT_ram_400984dc <= fVar47) {
                  fVar43 = -fVar16;
                }
              }
              else if (uVar28 == 3) {
                fVar43 = fVar16 * (fVar47 * DAT_ram_400986f0 * (float)puVar32 + (float)puVar24);
              }
              else if (uVar28 == 1) {
                fVar43 = fVar16 * (ABS(fVar47 * DAT_ram_400986f0 * (float)puVar32 + (float)puVar24)
                                   * (float)puVar32 + (float)puVar24);
              }
              else {
                fVar43 = (float)FUN_ram_40000a08(fVar47);
                in_register_00000100 = DAT_ram_40098750;
                puVar24 = DAT_ram_40092818;
                fVar43 = fVar16 * fVar43;
              }
              puVar63 = (undefined *)(fVar46 + fVar43);
              fVar43 = *param_2;
              fVar45 = *param_3;
              param_1[(int)fVar27 + 0x1075] = fVar43;
              param_1[(int)fVar27 + 0x3075] = fVar45;
              puVar58 = puVar32;
              if (((float)puVar32 <= (float)puVar63) &&
                 (puVar58 = puVar63, (float)in_register_00000100 < (float)puVar63)) {
                puVar58 = in_register_00000100;
              }
              fVar59 = (float)(int)fVar27 - (float)puVar58;
              if (fVar59 < 0.0) {
                fVar59 = fVar59 + (float)DAT_ram_40098790;
              }
              uVar23 = (uint)(-1 < (int)fVar59) * (int)fVar59;
              uVar22 = uVar23 & 0x1fff;
              fVar59 = fVar59 - (float)uVar23;
              fVar12 = param_1[uVar22 + 0x1075];
              fVar8 = fVar59 - (float)puVar14;
              fVar9 = fVar59 - (float)puVar32;
              fVar7 = fVar59 + (float)puVar14;
              fVar13 = param_1[(uVar22 - 1 & 0x1fff) + 0x1075];
              uVar61 = *(undefined8 *)(param_1 + (uVar22 + 1 & 0x1fff) + 0x1075);
              uVar55 = *(undefined8 *)(param_1 + (uVar22 + 2 & 0x1fff) + 0x1075);
              if (uVar28 == 0) {
                fVar60 = fVar16 * fVar39;
              }
              else {
                fVar42 = fVar47 + (float)ram0x400985f8;
                if (fVar57 <= fVar42) {
                  fVar42 = fVar42 - fVar57;
                }
                if (uVar28 == 2) {
                  fVar60 = fVar16;
                  if (DAT_ram_400984dc <= fVar42) {
                    fVar60 = -fVar16;
                  }
                }
                else if (uVar28 == 3) {
                  fVar60 = fVar16 * (fVar42 * DAT_ram_400986f0 * (float)puVar32 + (float)puVar24);
                }
                else if (uVar28 == 1) {
                  fVar60 = fVar16 * (ABS(fVar42 * DAT_ram_400986f0 * (float)puVar32 + (float)puVar24
                                        ) * (float)puVar32 + (float)puVar24);
                }
                else {
                  fVar42 = (float)FUN_ram_40000a08();
                  in_register_00000100 = DAT_ram_40098750;
                  puVar24 = DAT_ram_40092818;
                  fVar60 = fVar16 * fVar42;
                }
              }
              puVar63 = (undefined *)(fVar46 + fVar60);
              puVar58 = puVar32;
              if (((float)puVar32 <= (float)puVar63) &&
                 (puVar58 = puVar63, (float)in_register_00000100 < (float)puVar63)) {
                puVar58 = in_register_00000100;
              }
              fVar42 = (float)(int)fVar27 - (float)puVar58;
              if (fVar42 < 0.0) {
                fVar42 = fVar42 + (float)DAT_ram_40098790;
              }
              uVar23 = (uint)(-1 < (int)fVar42) * (int)fVar42;
              uVar22 = uVar23 & 0x1fff;
              fVar42 = fVar42 - (float)uVar23;
              fVar4 = param_1[uVar22 + 0x3075];
              fVar10 = fVar42 - (float)puVar14;
              fVar11 = fVar42 - (float)puVar32;
              fVar60 = fVar42 + (float)puVar14;
              fVar5 = param_1[(uVar22 - 1 & 0x1fff) + 0x3075];
              fVar6 = param_1[(uVar22 + 1 & 0x1fff) + 0x3075];
              uVar51 = *(undefined8 *)(param_1 + (uVar22 + 2 & 0x1fff) + 0x3075);
              fVar47 = fVar47 + fVar26;
              fVar27 = (float)((int)fVar27 + 1U & 0x1fff);
              *param_4 = (fVar43 * (float)puVar31 +
                         (((fVar59 * fVar7 * fVar8) / fVar44) * (float)uVar55 +
                         -fVar7 * fVar59 * fVar9 * (float)puVar35 * (float)uVar61 +
                         ((-fVar59 * fVar8 * fVar9) / fVar44) * fVar13 +
                         fVar8 * fVar7 * fVar9 * (float)puVar35 * fVar12) * (float)puVar34) *
                         (float)puVar29;
              *param_5 = (fVar45 * (float)puVar31 +
                         (((fVar42 * fVar60 * fVar10) / fVar44) * (float)uVar51 +
                         -fVar60 * fVar42 * fVar11 * (float)puVar35 * fVar6 +
                         ((-fVar42 * fVar10 * fVar11) / fVar44) * fVar5 +
                         fVar10 * fVar60 * fVar11 * (float)puVar35 * fVar4) * (float)puVar34) *
                         (float)puVar29;
              if (fVar57 <= fVar47) {
                fVar47 = fVar47 - fVar57;
              }
              fVar43 = fVar33 * fVar48;
              param_4 = param_4 + 1;
              param_5 = param_5 + 1;
              param_2 = param_2 + 1;
              fVar33 = fVar33 * fVar49 + fVar39 * fVar48;
              fVar39 = fVar39 * fVar49 - fVar43;
              param_3 = param_3 + 1;
            } while (pfVar17 != param_4);
          }
          param_1[0x1060] = fVar27;
          param_1[0x1062] = fVar47;
          param_1[0x1064] = fVar33;
          param_1[0x1065] = fVar39;
          param_1[0x1068] = fVar16;
          param_1[0x1069] = fVar46;
          return;
        }
        if (param_8 == 8) {
          fVar49 = (float)*(undefined8 *)param_1;
          if (DAT_ram_40093094 < fVar49) {
            fStack_178 = DAT_ram_400984dc / fVar49;
            fStack_174 = fVar49 * DAT_ram_40094234;
          }
          else {
            fStack_174 = DAT_ram_40098754;
            fStack_178 = DAT_ram_40098758;
            fVar49 = DAT_ram_400980e0;
          }
          puVar32 = in_register_00000100;
          puVar34 = in_register_00000100;
          puVar29 = DAT_ram_4009281c;
          puVar31 = DAT_ram_4009281c;
          fVar48 = DAT_ram_4009282c;
          if (param_7 != (float *)0x0) {
            fVar41 = *param_7;
            fVar48 = DAT_ram_400930f4;
            if ((0.0 <= fVar41) && (fVar48 = DAT_ram_400930b0, fVar41 <= (float)DAT_ram_4009281c)) {
              fVar48 = fVar41 * DAT_ram_4009422c + DAT_ram_400930f4;
            }
            puVar29 = (undefined *)param_7[3];
            if (0.0 <= (float)puVar29) {
              if ((float)DAT_ram_4009281c < (float)puVar29) {
                puVar29 = DAT_ram_4009281c;
              }
            }
            else {
              puVar29 = (undefined *)0x0;
            }
            fVar41 = param_7[1];
            puVar31 = (undefined *)0x0;
            if ((0.0 <= fVar41) &&
               (puVar31 = PTR_firmware_entry_ram_40092830, fVar41 <= (float)DAT_ram_4009281c)) {
              puVar31 = (undefined *)(fVar41 * (float)PTR_firmware_entry_ram_40092830 + 0.0);
            }
            puVar32 = (undefined *)param_7[2];
            if (0.0 <= (float)puVar32) {
              if ((float)DAT_ram_4009281c < (float)puVar32) {
                puVar32 = in_register_00000100;
              }
            }
            else {
              puVar32 = (undefined *)0x0;
            }
            puVar35 = (undefined *)param_7[4];
            if ((float)puVar35 < 0.0) {
              puVar34 = (undefined *)0x0;
            }
            else if ((float)puVar35 <= (float)DAT_ram_4009281c) {
              puVar34 = puVar35;
            }
          }
          bVar25 = 1;
          bVar3 = param_9 != '\0';
          if (bVar3) {
            bVar25 = (param_5 != (float *)0x0) + 1;
          }
          pfVar17 = param_1 + 0x5090;
          pfVar21 = param_1 + 0x5094;
          fVar41 = param_1[0x5075];
          puVar35 = in_register_00000100;
          if (*(char *)((int)param_1 + 0x142a2) == '\0') {
            param_1[0x50a5] = fVar48;
            param_1[0x50a4] = (fVar48 * fVar57) / fVar49;
          }
          else {
            if (fVar48 == param_1[0x50a5]) {
              puVar35 = (undefined *)param_1[0x50a4];
            }
            else {
              param_1[0x50a5] = fVar48;
              param_1[0x50a4] = (fVar48 * fVar57) / fVar49;
            }
            if (((float)puVar29 == param_1[0x50a6]) && ((float)puVar31 == param_1[0x50a7]))
            goto LAB_ram_4006d808;
          }
          fVar49 = (float)puVar29 * DAT_ram_40098790._4_4_;
          fVar39 = (float)puVar31 - (float)puVar14;
          param_1[0x50a3] = DAT_ram_40098798;
          param_1[0x50a2] = fVar49;
          FUN_ram_4000305c(pfVar17,&DAT_ram_400988b0,0x10);
          fVar7 = DAT_ram_400987e0;
          fVar59 = DAT_ram_400987dc;
          fVar45 = DAT_ram_400987d8;
          fVar43 = DAT_ram_400987d4;
          fVar27 = DAT_ram_400987d0;
          fVar44 = DAT_ram_400987cc;
          fVar36 = DAT_ram_400987c8;
          fVar46 = DAT_ram_400987c4;
          fVar47 = DAT_ram_400987c0;
          puVar63 = DAT_ram_40093668;
          fVar16 = fVar39 * DAT_ram_4009879c;
          fVar26 = fVar39 * DAT_ram_400987a4;
          fVar33 = fVar39 * DAT_ram_400987ac;
          puVar24 = (undefined *)(fVar39 * (float)DAT_ram_400980e8 + (float)puVar14);
          fVar49 = (float)puVar29 * DAT_ram_400987a0;
          fVar48 = (float)puVar29 * DAT_ram_400987a8;
          fVar57 = (float)puVar29 * DAT_ram_400987b0;
          fVar40 = (float)puVar29 * DAT_ram_400987bc + DAT_ram_400987c0;
          bVar2 = (float)DAT_ram_40093668 <= (float)puVar24;
          param_1[0x5097] = (float)puVar29 * DAT_ram_400987b8 + fVar39 * DAT_ram_400987b4;
          param_1[0x5094] = fVar49 + fVar16;
          param_1[0x5095] = fVar48 + fVar26;
          param_1[0x5096] = fVar57 + fVar33;
          param_1[0x5098] = fVar40;
          puVar58 = puVar63;
          if ((bVar2) &&
             (puVar58 = PTR_firmware_entry_ram_40092830,
             (float)puVar24 <= (float)PTR_firmware_entry_ram_40092830)) {
            puVar58 = puVar24;
          }
          fVar49 = ((float)puVar29 * fVar46 + fVar36) * (float)puVar58;
          puVar58 = (undefined *)(fVar39 * DAT_ram_400984f8 + (float)puVar14);
          param_1[0x5099] = fVar49;
          puVar37 = puVar63;
          if (((float)puVar63 <= (float)puVar58) &&
             (puVar37 = PTR_firmware_entry_ram_40092830,
             (float)puVar58 <= (float)PTR_firmware_entry_ram_40092830)) {
            puVar37 = puVar58;
          }
          fVar48 = ((float)puVar29 * fVar44 + fVar27) * (float)puVar37;
          puVar37 = (undefined *)(fVar39 * DAT_ram_400987e4 + (float)puVar14);
          param_1[0x509a] = fVar48;
          puVar38 = puVar63;
          if (((float)puVar63 <= (float)puVar37) &&
             (puVar38 = PTR_firmware_entry_ram_40092830,
             (float)puVar37 <= (float)PTR_firmware_entry_ram_40092830)) {
            puVar38 = puVar37;
          }
          fVar57 = ((float)puVar29 * fVar43 + fVar45) * (float)puVar38;
          puVar38 = (undefined *)(fVar39 * DAT_ram_400987e8 + (float)puVar14);
          param_1[0x509b] = fVar57;
          puVar53 = puVar63;
          if (((float)puVar63 <= (float)puVar38) &&
             (puVar53 = PTR_firmware_entry_ram_40092830,
             (float)puVar38 <= (float)PTR_firmware_entry_ram_40092830)) {
            puVar53 = puVar38;
          }
          fVar16 = ((float)puVar29 * fVar59 + fVar7) * (float)puVar53;
          param_1[0x509c] = fVar16;
          if ((fVar40 == 0.0) &&
             (fVar40 = ABS(fVar16) + ABS(fVar57) + ABS(fVar48) + ABS(fVar49) + 0.0,
             (float)(undefined *)DAT_ram_40098564 < fVar40)) {
            fVar40 = DAT_ram_40098800 / fVar40;
            param_1[0x5099] = fVar40 * fVar49;
            param_1[0x509a] = fVar40 * fVar48;
            param_1[0x509b] = fVar40 * fVar57;
            param_1[0x509c] = fVar40 * fVar16;
          }
          fVar40 = DAT_ram_400987fc;
          fVar57 = DAT_ram_400987f8;
          fVar48 = DAT_ram_400987f4;
          fVar49 = DAT_ram_400987f0;
          fVar47 = (float)puVar29 * DAT_ram_400987ec + fVar47;
          param_1[0x509d] = fVar47;
          puVar53 = puVar63;
          if (((float)puVar63 <= (float)puVar24) &&
             (puVar53 = puVar24, (float)PTR_firmware_entry_ram_40092830 < (float)puVar24)) {
            puVar53 = PTR_firmware_entry_ram_40092830;
          }
          fVar49 = ((float)puVar29 * fVar49 + fVar36) * (float)puVar53;
          param_1[0x509e] = fVar49;
          puVar24 = puVar63;
          if (((float)puVar63 <= (float)puVar58) &&
             (puVar24 = puVar58, (float)PTR_firmware_entry_ram_40092830 < (float)puVar58)) {
            puVar24 = PTR_firmware_entry_ram_40092830;
          }
          fVar48 = ((float)puVar29 * fVar48 + fVar27) * (float)puVar24;
          param_1[0x509f] = fVar48;
          puVar24 = puVar63;
          if (((float)puVar63 <= (float)puVar37) &&
             (puVar24 = puVar37, (float)PTR_firmware_entry_ram_40092830 < (float)puVar37)) {
            puVar24 = PTR_firmware_entry_ram_40092830;
          }
          fVar57 = ((float)puVar29 * fVar57 + fVar45) * (float)puVar24;
          param_1[0x50a0] = fVar57;
          if (((float)puVar38 < (float)puVar63) ||
             (puVar63 = PTR_firmware_entry_ram_40092830,
             (float)PTR_firmware_entry_ram_40092830 < (float)puVar38)) {
            puVar38 = puVar63;
          }
          fVar40 = ((float)puVar29 * fVar40 + fVar7) * (float)puVar38;
          param_1[0x50a1] = fVar40;
          if ((fVar47 == 0.0) &&
             (fVar47 = ABS(fVar40) + ABS(fVar57) + ABS(fVar48) + ABS(fVar49) + 0.0,
             (float)(undefined *)DAT_ram_40098564 < fVar47)) {
            fVar47 = DAT_ram_40098804 / fVar47;
            param_1[0x509e] = fVar47 * fVar49;
            param_1[0x509f] = fVar47 * fVar48;
            param_1[0x50a0] = fVar47 * fVar57;
            param_1[0x50a1] = fVar47 * fVar40;
          }
          param_1[0x50a6] = (float)puVar29;
          param_1[0x50a7] = (float)puVar31;
LAB_ram_4006d808:
          fVar49 = param_1[0x50a3];
          uVar55 = *(undefined8 *)(param_1 + 0x50a2);
          uVar61 = *(undefined8 *)(param_1 + 0x50a2);
          *(undefined1 *)((int)param_1 + 0x142a2) = 1;
          FUN_ram_4000305c(&fStack_100,param_1 + 0x5076,0x20);
          FUN_ram_4000305c(&fStack_e0,param_1 + 0x507e,0x20);
          uStack_150 = *(undefined1 *)(param_1 + 0x5086);
          uStack_14f = *(undefined1 *)((int)param_1 + 0x14219);
          uStack_14e = *(undefined1 *)((int)param_1 + 0x1421a);
          uStack_14d = *(undefined1 *)((int)param_1 + 0x1421b);
          uStack_14c = *(undefined1 *)(param_1 + 0x5087);
          uStack_14b = *(undefined1 *)((int)param_1 + 0x1421d);
          uStack_14a = *(undefined1 *)((int)param_1 + 0x1421e);
          uStack_149 = *(undefined1 *)((int)param_1 + 0x1421f);
          if ((*(char *)((int)param_1 + 0x142a1) == '\0') || (*(byte *)(param_1 + 0x50a8) < bVar25))
          {
            FUN_ram_4006a454(fVar41,CONCAT44(fStack_174,fStack_178),CONCAT44(pfVar17,fStack_174),
                             uVar61,CONCAT44(pfVar21,fVar49),pfVar17,pfVar21,bVar25,&fStack_140);
          }
          else {
            FUN_ram_4000305c(&fStack_140,param_1 + 0x5088,0x20);
          }
          fVar48 = DAT_ram_400980f4;
          puVar29 = DAT_ram_40092864;
          pfStack_15c = &fStack_140;
          uVar28 = 0;
          do {
            uVar23 = param_6 - uVar28;
            if (0x10 < uVar23) {
              uVar23 = 0x10;
            }
            if (param_6 != uVar28) {
              uVar22 = 0;
              do {
                for (fVar41 = fVar41 + (float)puVar35; fVar48 <= fVar41; fVar41 = fVar41 - fVar48) {
                }
                for (; fVar41 < 0.0; fVar41 = fVar41 + fVar48) {
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 < uVar23);
            }
            uVar62 = FUN_ram_4006a454(fVar41,CONCAT44(fStack_174,fStack_178),
                                      CONCAT44(pfVar17,fStack_174),uVar55,CONCAT44(pfVar21,fVar49),
                                      pfVar17,pfVar21,bVar25,&fStack_120);
            fVar26 = DAT_ram_40098808;
            puVar31 = (undefined *)((float)puVar14 / (float)(int)uVar23);
            fVar16 = (fStack_120 - fStack_140) * (float)puVar31;
            fVar47 = (fStack_11c - fStack_13c) * (float)puVar31;
            fVar40 = (fStack_118 - fStack_138) * (float)puVar31;
            fVar57 = (fStack_114 - fStack_134) * (float)puVar31;
            if (bVar25 == 2) {
              uVar62 = CONCAT44(fStack_120,fStack_124);
              fVar16 = (fStack_110 - fStack_130) * (float)puVar31;
              fVar47 = (fStack_10c - fStack_12c) * (float)puVar31;
              fVar57 = fStack_104 - fStack_124;
              fVar40 = (fStack_108 - fStack_128) * (float)puVar31;
              puVar31 = (undefined *)(fVar57 * (float)puVar31);
              fStack_b0 = fVar16;
              fStack_ac = fVar47;
              fStack_a8 = fVar40;
              puStack_a4 = puVar31;
            }
            if (param_6 != uVar28) {
              iVar20 = uVar28 << 2;
              uVar22 = 0;
              fVar16 = (float)CONCAT13(uStack_14d,
                                       CONCAT12(uStack_14e,CONCAT11(uStack_14f,uStack_150)));
              fVar33 = fStack_100;
              fVar47 = fStack_fc;
              fVar40 = fStack_f8;
              fVar57 = fStack_f4;
              do {
                while( true ) {
                  fVar39 = *(float *)((int)param_2 + iVar20);
                  fVar46 = fVar39;
                  if ((bVar3 && param_5 != (float *)0x0) && (param_3 != (float *)0x0)) {
                    fVar46 = *(float *)((int)param_3 + iVar20);
                  }
                  fVar44 = (fVar39 + fVar46) * (float)puVar29;
                  fStack_144 = 0.0;
                  fStack_100 = -(fVar16 * fVar26) + fVar44;
                  fStack_fc = (fStack_e0 - fStack_100) * fStack_140 + fVar33;
                  fStack_140 = (float)in_register_00000100 + fStack_140;
                  fStack_f8 = (fStack_dc - fStack_fc) * fStack_13c + fVar47;
                  fStack_13c = (float)in_register_00000100 + fStack_13c;
                  fStack_f4 = (fStack_d8 - fStack_f8) * fStack_138 + fVar40;
                  fStack_138 = (float)in_register_00000100 + fStack_138;
                  fStack_d4 = (fStack_d4 - fStack_f4) * fStack_134 + fVar57;
                  fStack_134 = (float)in_register_00000100 + fStack_134;
                  uStack_150 = SUB41(fStack_d4,0);
                  uStack_14f = (undefined1)((uint)fStack_d4 >> 8);
                  uStack_14e = (undefined1)((uint)fStack_d4 >> 0x10);
                  uStack_14d = (undefined1)((uint)fStack_d4 >> 0x18);
                  fVar36 = param_1[0x509c] * fStack_d4 +
                           param_1[0x509b] * fStack_f4 +
                           param_1[0x509a] * fStack_f8 +
                           fVar44 * param_1[0x5098] + fStack_fc * param_1[0x5099];
                  if (bVar25 == 2) {
                    fVar44 = -((float)CONCAT13(uStack_149,
                                               CONCAT12(uStack_14a,CONCAT11(uStack_14b,uStack_14c)))
                              * fVar26) + fVar44;
                    fStack_d0 = fStack_130 * (fStack_d0 - fVar44) + fStack_f0;
                    fStack_cc = fStack_12c * (fStack_cc - fStack_d0) + fStack_ec;
                    fStack_130 = fStack_b0 + fStack_130;
                    fStack_12c = fStack_ac + fStack_12c;
                    fStack_c8 = fStack_128 * (fStack_c8 - fStack_cc) + fStack_e8;
                    fStack_c4 = fStack_124 * (fStack_c4 - fStack_c8) + fStack_e4;
                    uStack_14c = SUB41(fStack_c4,0);
                    uStack_14b = (undefined1)((uint)fStack_c4 >> 8);
                    uStack_14a = (undefined1)((uint)fStack_c4 >> 0x10);
                    uStack_149 = (undefined1)((uint)fStack_c4 >> 0x18);
                    fStack_144 = fStack_c4 * param_1[0x50a1] +
                                 fStack_c8 * param_1[0x50a0] + (float)in_register_00000100;
                    fStack_128 = fStack_a8 + fStack_128;
                    fStack_124 = (float)puStack_a4 + fStack_124;
                    fStack_f0 = fVar44;
                    fStack_ec = fStack_d0;
                    fStack_e8 = fStack_cc;
                    fStack_e4 = fStack_c8;
                  }
                  fStack_e0 = fStack_fc;
                  fStack_dc = fStack_f8;
                  fStack_d8 = fStack_f4;
                  fVar16 = fStack_d4;
                  fVar47 = fStack_fc;
                  fVar40 = fStack_f8;
                  fVar57 = fStack_f4;
                  fVar33 = fStack_100;
                  if (!bVar3 || param_5 == (float *)0x0) break;
                  pfVar15 = (float *)((int)param_5 + iVar20);
                  puVar18 = (ulonglong *)((int)param_4 + iVar20);
                  uVar22 = uVar22 + 1;
                  iVar20 = iVar20 + 4;
                  fVar44 = (fVar36 - fStack_144) * (float)puVar32;
                  puVar31 = (undefined *)
                            (((fStack_144 + fVar36) * (float)puVar29 - fVar44) - fVar46);
                  uVar62 = (ulonglong)
                           (uint)((((fStack_144 + fVar36) * (float)puVar29 + fVar44) - fVar39) *
                                  (float)puVar34 + fVar39);
                  *pfVar15 = (float)puVar31 * (float)puVar34 + fVar46;
                  *puVar18 = uVar62;
                  if (uVar23 <= uVar22) goto LAB_ram_4006dbca;
                }
                puVar18 = (ulonglong *)((int)param_4 + iVar20);
                uVar22 = uVar22 + 1;
                iVar20 = iVar20 + 4;
                uVar62 = (ulonglong)(uint)((float)puVar34 * (fVar36 - fVar39) + fVar39);
                *puVar18 = uVar62;
                puVar31 = puVar34;
              } while (uVar22 < uVar23);
            }
LAB_ram_4006dbca:
            fStack_140 = fStack_120;
            uVar28 = uVar28 + uVar23;
            fStack_13c = fStack_11c;
            fStack_138 = fStack_118;
            fStack_134 = fStack_114;
            fStack_130 = fStack_110;
            fStack_12c = fStack_10c;
            fStack_128 = fStack_108;
            fStack_124 = fStack_104;
            if (param_6 <= uVar28) {
              FUN_ram_4000305c(uVar62,puVar31,fVar16,fVar47,fVar40,fVar57,param_1 + 0x5076,
                               &fStack_100,0x20);
              FUN_ram_4000305c(param_1 + 0x507e,&fStack_e0,0x20);
              *(undefined1 *)(param_1 + 0x5086) = uStack_150;
              *(undefined1 *)((int)param_1 + 0x1421a) = uStack_14e;
              *(undefined1 *)((int)param_1 + 0x1421b) = uStack_14d;
              *(undefined1 *)(param_1 + 0x5087) = uStack_14c;
              *(undefined1 *)((int)param_1 + 0x1421f) = uStack_149;
              *(undefined1 *)((int)param_1 + 0x14219) = uStack_14f;
              *(undefined1 *)((int)param_1 + 0x1421d) = uStack_14b;
              *(undefined1 *)((int)param_1 + 0x1421e) = uStack_14a;
              FUN_ram_4000305c(param_1 + 0x5088,pfStack_15c,0x20);
              *(byte *)(param_1 + 0x50a8) = bVar25;
              *(undefined1 *)((int)param_1 + 0x142a1) = 1;
              param_1[0x5075] = fVar41;
              return;
            }
          } while( true );
        }
        if (param_8 == 9) {
          FUN_ram_4006f418(param_1 + 0x50a9,param_2,param_3,param_4,param_5,param_6,param_7,param_9)
          ;
          return;
        }
        if (param_8 == 10) {
          FUN_ram_400720ae(param_1 + 0x50b0,param_2,param_3,param_4,param_5,param_6,param_7,param_9)
          ;
          return;
        }
        if ((param_8 == 0xb) || (param_8 == 0x11)) {
          FUN_ram_4006fc98(param_1 + 0x5cb3,param_2,param_3,param_4,param_5);
          return;
        }
        puVar29 = DAT_ram_40098744;
        if (param_7 == (float *)0x0) {
LAB_ram_4006c0f8:
          uVar62 = ZEXT48(DAT_ram_4009281c);
        }
        else {
          puVar29 = (undefined *)*param_7;
          if ((float)puVar29 < 0.0) {
            puVar29 = (undefined *)0x0;
          }
          else if ((float)DAT_ram_4009281c < (float)puVar29) {
            puVar29 = DAT_ram_4009281c;
          }
          fVar49 = param_7[1];
          uVar62 = (ulonglong)(uint)fVar49;
          if (fVar49 < 0.0) {
            uVar62 = 0;
          }
          else if ((float)DAT_ram_4009281c < fVar49) goto LAB_ram_4006c0f8;
        }
        if ((float)*(undefined8 *)(param_1 + 8) == (float)puVar29) {
          uVar52 = *(ulonglong *)(param_1 + 6);
          uVar50 = *(ulonglong *)(param_1 + 7);
        }
        else {
          fVar49 = *param_1;
          fVar48 = DAT_ram_400930f4;
          if (fVar49 <= DAT_ram_40093094) {
            fVar49 = DAT_ram_400980e0;
            if (0.0 <= (float)puVar29) goto LAB_ram_4006c198;
LAB_ram_4006e184:
            fVar49 = (fVar48 * DAT_ram_400980f4) / fVar49;
LAB_ram_4006c1dc:
            uVar52 = FUN_ram_40000a08(fVar49);
            uVar52 = uVar52 & 0xffffffff;
            uVar50 = FUN_ram_40000786(fVar49);
          }
          else {
            if ((float)puVar29 < 0.0) {
LAB_ram_4006e17a:
              if ((float)DAT_ram_4009281c <= fVar49) goto LAB_ram_4006e184;
              fVar49 = (fVar48 * DAT_ram_400980f4) / DAT_ram_400980e0;
              goto LAB_ram_4006c1dc;
            }
LAB_ram_4006c198:
            fVar48 = DAT_ram_400934cc;
            if ((float)DAT_ram_4009281c < (float)puVar29) goto LAB_ram_4006e17a;
            fVar48 = (float)puVar29 * DAT_ram_40094228 + DAT_ram_400930f4;
            if (0.0 <= fVar48) {
              if (DAT_ram_400934cc < fVar48) {
                uVar52 = (ulonglong)DAT_ram_40098770;
                puVar32 = DAT_ram_4009876c;
                fVar48 = DAT_ram_40098774;
                goto LAB_ram_4006c1d0;
              }
              if (fVar49 < (float)DAT_ram_4009281c) {
                fVar49 = DAT_ram_400980e0;
              }
              if (0.0 <= fVar48) goto LAB_ram_4006e184;
              fVar49 = 0.0 / fVar49;
              goto LAB_ram_4006c1dc;
            }
            uVar52 = 0;
            fVar48 = 0.0;
            puVar32 = DAT_ram_4009281c;
LAB_ram_4006c1d0:
            uVar50 = ZEXT48(puVar32);
            if ((float)DAT_ram_4009281c <= fVar49) {
              fVar49 = fVar48 / fVar49;
              goto LAB_ram_4006c1dc;
            }
          }
          *(ulonglong *)(param_1 + 6) = uVar52;
          *(ulonglong *)(param_1 + 7) = uVar50;
          param_1[8] = (float)puVar29;
        }
        fVar49 = param_1[0xb];
        fVar48 = (float)uVar62;
        if ((float)*(undefined8 *)(param_1 + 9) == fVar48) {
          fVar48 = param_1[0xc];
          goto LAB_ram_4006b896;
        }
        fVar57 = *param_1;
        if (*param_1 <= DAT_ram_40093094) {
          fVar57 = DAT_ram_400980e0;
        }
        fVar41 = 0.0;
        if (fVar48 < 0.0) {
LAB_ram_4006c0cc:
          fVar57 = fVar57 * fVar41;
        }
        else if (fVar48 <= (float)puVar14) {
          fVar41 = fVar48 + 0.0;
          goto LAB_ram_4006c0cc;
        }
        fVar48 = fVar57 / DAT_ram_40093094;
        if (fVar49 < fVar57 / DAT_ram_40093094) {
          fVar48 = fVar49;
        }
        param_1[0xc] = fVar48;
        *(ulonglong *)(param_1 + 9) = uVar62;
LAB_ram_4006b896:
        fVar57 = DAT_ram_40098760;
        fVar41 = DAT_ram_4009875c;
        uVar62 = ZEXT48(DAT_ram_4009287c);
        if ((float)*(undefined8 *)(param_1 + 10) == (float)DAT_ram_4009287c) {
          fVar57 = param_1[0xf];
          fVar41 = param_1[0x10];
        }
        else {
          uVar54 = (ulonglong)(uint)DAT_ram_40098760;
          uVar56 = (ulonglong)(uint)DAT_ram_4009875c;
          *(ulonglong *)(param_1 + 0xe) = uVar62;
          *(ulonglong *)(param_1 + 0xf) = uVar54;
          *(ulonglong *)(param_1 + 0x10) = uVar56;
          *(ulonglong *)(param_1 + 10) = uVar62;
        }
        fVar47 = DAT_ram_4009880c;
        puVar29 = (undefined *)param_1[0xd];
        uVar62 = *(ulonglong *)(param_1 + 4);
        fVar40 = param_1[5];
        fVar16 = (float)((uint)param_1[1] & 0x3ff);
        if ((float)puVar29 < 0.0) {
          puVar29 = (undefined *)0x0;
          puVar32 = puVar14;
        }
        else if ((float)puVar14 < (float)puVar29) {
          puVar29 = puVar14;
          puVar32 = (undefined *)0x0;
        }
        else {
          puVar32 = (undefined *)((float)puVar14 - (float)puVar29);
        }
        fVar26 = param_1[3];
        uVar54 = *(ulonglong *)(param_1 + 2);
        bVar3 = false;
        iVar20 = 0;
        uVar28 = 0;
        fVar33 = fVar26;
        do {
          fVar46 = (float)uVar62;
          fVar39 = fVar46 * fVar48 + fVar49;
          if (fVar39 < 0.0) {
            fVar39 = 0.0;
          }
          fVar39 = (float)(int)fVar16 - fVar39;
          if (0.0 <= fVar39) {
            if (fVar47 <= fVar39) {
              fVar39 = fVar39 - fVar47;
            }
          }
          else {
            fVar39 = fVar39 + fVar47;
          }
          uVar23 = (uint)(-1 < (int)fVar39) * (int)fVar39;
          uVar22 = uVar23 & 0x3ff;
          fVar39 = fVar39 - (float)uVar23;
          fVar36 = *(float *)((int)param_2 + iVar20);
          fVar39 = (float)puVar29 *
                   (((float)puVar14 - fVar39) * param_1[uVar22 + 0x11] +
                   fVar39 * param_1[(uVar22 + 1 & 0x3ff) + 0x11]) + (float)uVar54 * (float)puVar32;
          uVar54 = (ulonglong)(uint)fVar39;
          *(ulonglong *)((int)param_4 + iVar20) =
               (ulonglong)(uint)(fVar36 * fVar57 + fVar39 * fVar41);
          param_1[(int)fVar16 + 0x11] = fVar36;
          if (param_9 != '\0') {
            fVar39 = fVar40 * fVar48 + fVar49;
            if (fVar39 < 0.0) {
              fVar39 = 0.0;
            }
            fVar39 = (float)(int)fVar16 - fVar39;
            if (fVar39 < 0.0) {
              fVar39 = fVar39 + fVar47;
            }
            else if (fVar47 <= fVar39) {
              fVar39 = fVar39 - fVar47;
            }
            uVar23 = (uint)(-1 < (int)fVar39) * (int)fVar39;
            uVar22 = uVar23 & 0x3ff;
            fVar39 = fVar39 - (float)uVar23;
            if (param_3 == (float *)0x0) {
              uVar61 = 0;
            }
            else {
              uVar61 = *(undefined8 *)((int)param_3 + iVar20);
            }
            fVar33 = (float)puVar29 *
                     (((float)puVar14 - fVar39) * (float)*(undefined8 *)(param_1 + uVar22 + 0x411) +
                     fVar39 * (float)*(undefined8 *)(param_1 + (uVar22 + 1 & 0x3ff) + 0x411)) +
                     fVar33 * (float)puVar32;
            if (param_5 != (float *)0x0) {
              *(ulonglong *)((int)param_5 + iVar20) =
                   (ulonglong)(uint)((float)uVar61 * fVar57 + fVar33 * fVar41);
            }
            *(undefined8 *)(param_1 + (int)fVar16 + 0x411) = uVar61;
            bVar3 = true;
          }
          uVar28 = uVar28 + 1;
          fVar16 = (float)((int)fVar16 + 1U & 0x3ff);
          uVar62 = (ulonglong)(uint)(fVar46 * (float)uVar50 + fVar40 * (float)uVar52);
          fVar40 = fVar40 * (float)uVar50 - fVar46 * (float)uVar52;
          iVar20 = iVar20 + 4;
        } while (uVar28 < param_6);
        if (!bVar3) {
          fVar33 = fVar26;
        }
        param_1[1] = fVar16;
        *(ulonglong *)(param_1 + 2) = uVar54;
        param_1[3] = fVar33;
        *(ulonglong *)(param_1 + 4) = uVar62;
        param_1[5] = fVar40;
        return;
      }
      if (param_7 == (float *)0x0) {
        uVar62 = (ulonglong)(uint)DAT_ram_40094234;
        puVar29 = DAT_ram_40098288;
        puVar34 = DAT_ram_40092864;
        puVar35 = DAT_ram_400941f0;
      }
      else {
        fVar49 = param_7[1];
        uVar62 = (ulonglong)(uint)fVar49;
        if (0.0 <= fVar49) {
          if ((float)DAT_ram_4009281c < fVar49) {
            uVar62 = ZEXT48(DAT_ram_4009281c);
          }
        }
        else {
          uVar62 = 0;
        }
        puVar29 = (undefined *)param_7[2];
        if (0.0 <= (float)puVar29) {
          if ((float)DAT_ram_4009281c < (float)puVar29) {
            puVar29 = DAT_ram_4009281c;
          }
        }
        else {
          puVar29 = (undefined *)0x0;
        }
        puVar34 = (undefined *)param_7[3];
        if (0.0 <= (float)puVar34) {
          if ((float)DAT_ram_4009281c < (float)puVar34) {
            puVar34 = DAT_ram_4009281c;
          }
        }
        else {
          puVar34 = (undefined *)0x0;
        }
        puVar31 = (undefined *)param_7[4];
        if (0.0 <= (float)puVar31) {
          puVar35 = DAT_ram_4009281c;
          if ((float)DAT_ram_4009281c < (float)puVar31) goto LAB_ram_4006cad0;
        }
        else {
          puVar31 = (undefined *)0x0;
        }
        puVar35 = puVar31;
      }
LAB_ram_4006cad0:
      if ((float)*(undefined8 *)(param_1 + 0x81d) == (float)uVar62) {
        fVar49 = param_1[0x81e];
        uVar62 = *(ulonglong *)(param_1 + 0x81f);
      }
      else {
        fVar48 = (float)uVar62 * DAT_ram_40092820 + DAT_ram_400930d8;
        *(ulonglong *)(param_1 + 0x81d) = uVar62;
        fVar49 = -(fVar48 * fVar41) + fVar40;
        uVar62 = (ulonglong)(uint)(fVar48 * fVar41 + fVar40);
        param_1[0x81e] = fVar49;
        *(ulonglong *)(param_1 + 0x81f) = uVar62;
      }
      if ((float)*(undefined8 *)(param_1 + 0x819) == (float)puVar29) goto LAB_ram_4006cb78;
      fVar57 = (float)*(undefined8 *)param_1;
      fVar48 = DAT_ram_4009874c;
      if (DAT_ram_40093094 < fVar57) {
        puVar31 = puVar14;
        fVar41 = DAT_ram_40098768;
        if (0.0 <= (float)puVar29) goto LAB_ram_4006cb14;
LAB_ram_4006ef5e:
        uVar52 = ZEXT48(puVar31);
        if ((float)puVar14 <= fVar57) goto LAB_ram_4006cb50;
      }
      else {
        fVar57 = DAT_ram_400980e0;
        if (0.0 <= (float)puVar29) {
LAB_ram_4006cb14:
          fVar48 = DAT_ram_40098708;
          puVar31 = DAT_ram_40098718;
          fVar41 = DAT_ram_40098714;
          if ((float)puVar14 < (float)puVar29) goto LAB_ram_4006ef5e;
          fVar41 = (float)puVar29 * DAT_ram_40094204 + DAT_ram_400930d8;
          if (fVar57 < (float)puVar14) {
            fVar57 = DAT_ram_400980e0;
          }
          fVar48 = 0.0;
          if (0.0 <= fVar41) {
            fVar48 = fVar41 * DAT_ram_400980f4;
          }
        }
LAB_ram_4006cb50:
        fVar41 = (float)FUN_ram_40000a08(fVar48 / fVar57);
        uVar52 = FUN_ram_40000786(fVar48 / fVar57);
      }
      param_1[0x814] = fVar41;
      *(ulonglong *)(param_1 + 0x815) = uVar52;
      param_1[0x819] = (float)puVar29;
LAB_ram_4006cb78:
      if ((float)*(undefined8 *)(param_1 + 0x81a) == (float)puVar34) {
        fVar48 = param_1[0x816];
      }
      else {
        fVar48 = DAT_ram_40098764;
        if ((((0.0 <= (float)puVar34) &&
             (fVar48 = DAT_ram_40092820, (float)puVar34 <= (float)puVar14)) &&
            (fVar57 = (float)puVar34 * DAT_ram_40098778 + DAT_ram_40098764,
            fVar48 = DAT_ram_40098748, DAT_ram_40098748 <= fVar57)) &&
           (fVar48 = DAT_ram_40092854, fVar57 <= DAT_ram_40092854)) {
          fVar48 = fVar57;
        }
        param_1[0x816] = fVar48;
        param_1[0x81a] = (float)puVar34;
      }
      param_1[0x817] = (float)puVar35;
      param_1[0x81b] = (float)puVar35;
      if (0.0 <= (float)puVar35) {
        if ((float)puVar14 < (float)puVar35) {
          puVar35 = puVar14;
        }
      }
      else {
        puVar35 = (undefined *)0x0;
      }
      fVar57 = param_1[0x820];
      uVar52 = *(ulonglong *)(param_1 + 0x812);
      fVar41 = param_1[0x813];
      if (param_3 == (float *)0x0) {
        param_3 = param_2;
      }
      iVar20 = 0;
      while( true ) {
        fVar44 = (float)uVar52;
        fVar36 = (float)uVar62 - fVar49;
        fVar40 = *(float *)((int)param_2 + iVar20);
        fVar47 = param_1[0x823];
        fVar39 = param_1[0x833] * fVar48 + fVar40;
        fVar16 = param_1[0x824];
        fVar46 = (fVar44 + (float)puVar14) * (float)puVar32 * fVar36 + fVar49;
        fVar26 = param_1[0x825];
        fVar33 = param_1[0x826];
        param_1[0x823] = fVar39;
        fVar47 = -(fVar46 * param_1[0x82b]) + fVar46 * fVar39 + fVar47;
        param_1[0x82b] = fVar47;
        param_1[0x824] = fVar47;
        fVar49 = fVar36 * (fVar41 + (float)puVar14) * (float)puVar32 + fVar49;
        fVar47 = -(fVar46 * param_1[0x82c]) + fVar46 * fVar47 + fVar16;
        param_1[0x82c] = fVar47;
        param_1[0x825] = fVar47;
        fVar47 = -(fVar46 * param_1[0x82d]) + fVar46 * fVar47 + fVar26;
        param_1[0x82d] = fVar47;
        param_1[0x826] = fVar47;
        fVar47 = -(fVar46 * param_1[0x82e]) + fVar46 * fVar47 + fVar33;
        param_1[0x82e] = fVar47;
        param_1[0x833] = fVar47;
        fVar47 = fVar57 * (fVar47 - param_1[0x821]) + param_1[0x821];
        param_1[0x821] = fVar47;
        *(ulonglong *)((int)param_4 + iVar20) =
             (ulonglong)(uint)((float)puVar35 * (fVar47 - fVar40) + fVar40);
        if (param_9 != '\0') {
          fVar40 = *(float *)((int)param_3 + iVar20);
          fVar47 = param_1[0x827];
          fVar26 = param_1[0x834] * fVar48 + fVar40;
          fVar16 = param_1[0x828];
          param_1[0x827] = fVar26;
          fVar47 = -(fVar49 * param_1[0x82f]) + fVar49 * fVar26 + fVar47;
          param_1[0x82f] = fVar47;
          param_1[0x828] = fVar47;
          fVar26 = -(fVar49 * param_1[0x830]) + fVar49 * fVar47 + fVar16;
          fVar47 = param_1[0x829];
          fVar16 = param_1[0x82a];
          param_1[0x830] = fVar26;
          param_1[0x829] = fVar26;
          fVar47 = -(fVar49 * param_1[0x831]) + fVar49 * fVar26 + fVar47;
          param_1[0x831] = fVar47;
          param_1[0x82a] = fVar47;
          fVar49 = -(fVar49 * param_1[0x832]) + fVar49 * fVar47 + fVar16;
          param_1[0x832] = fVar49;
          param_1[0x834] = fVar49;
          fVar49 = fVar57 * (fVar49 - param_1[0x822]) + param_1[0x822];
          param_1[0x822] = fVar49;
          if (param_5 != (float *)0x0) {
            *(ulonglong *)((int)param_5 + iVar20) =
                 (ulonglong)(uint)((fVar49 - fVar40) * (float)puVar35 + fVar40);
          }
        }
        iVar20 = iVar20 + 4;
        uVar52 = (ulonglong)
                 (uint)((float)*(undefined8 *)(param_1 + 0x815) * fVar44 +
                       (float)*(undefined8 *)(param_1 + 0x814) * fVar41);
        fVar41 = (float)*(undefined8 *)(param_1 + 0x815) * fVar41 -
                 (float)*(undefined8 *)(param_1 + 0x814) * fVar44;
        if (iVar20 == param_6 << 2) break;
        fVar49 = param_1[0x81e];
        uVar62 = *(ulonglong *)(param_1 + 0x81f);
      }
      *(ulonglong *)(param_1 + 0x812) = uVar52;
      param_1[0x813] = fVar41;
      return;
    }
    if (param_7 == (float *)0x0) {
      uVar62 = ZEXT48(DAT_ram_4009872c);
      uVar52 = (ulonglong)DAT_ram_40098118;
      puVar29 = DAT_ram_40098730;
    }
    else {
      fVar49 = *param_7;
      uVar62 = (ulonglong)(uint)fVar49;
      if (0.0 <= fVar49) {
        if ((float)DAT_ram_4009281c < fVar49) {
          uVar62 = ZEXT48(DAT_ram_4009281c);
        }
      }
      else {
        uVar62 = 0;
      }
      puVar29 = (undefined *)param_7[1];
      if (0.0 <= (float)puVar29) {
        if ((float)DAT_ram_4009281c < (float)puVar29) {
          puVar29 = DAT_ram_4009281c;
        }
      }
      else {
        puVar29 = (undefined *)0x0;
      }
      fVar49 = param_7[2];
      uVar52 = (ulonglong)(uint)fVar49;
      if (0.0 <= fVar49) {
        if ((float)DAT_ram_4009281c < fVar49) {
          uVar52 = ZEXT48(DAT_ram_4009281c);
        }
      }
      else {
        uVar52 = 0;
      }
    }
    fVar49 = (float)uVar62;
    if ((float)*(undefined8 *)(param_1 + 0x819) == fVar49) {
      fVar48 = param_1[0x814];
      uVar50 = *(ulonglong *)(param_1 + 0x815);
    }
    else {
      fVar41 = (float)*(undefined8 *)param_1;
      fVar57 = DAT_ram_4009874c;
      if (fVar41 <= DAT_ram_40093094) {
        fVar41 = DAT_ram_400980e0;
        if (0.0 <= fVar49) goto LAB_ram_4006dcdc;
LAB_ram_4006ee8e:
        fVar48 = (float)FUN_ram_40000a08(fVar57 / fVar41);
        uVar50 = FUN_ram_40000786(fVar57 / fVar41);
      }
      else {
        fVar48 = DAT_ram_40098768;
        puVar32 = DAT_ram_4009281c;
        if (0.0 <= fVar49) {
LAB_ram_4006dcdc:
          fVar48 = DAT_ram_40098714;
          puVar32 = DAT_ram_40098718;
          fVar57 = DAT_ram_40098708;
          if ((float)DAT_ram_4009281c < fVar49) goto LAB_ram_4006ee80;
          fVar49 = fVar49 * DAT_ram_40094204 + DAT_ram_400930d8;
          if (fVar41 < (float)DAT_ram_4009281c) {
            fVar41 = DAT_ram_400980e0;
          }
          if (0.0 <= fVar49) {
            fVar57 = fVar49 * DAT_ram_400980f4;
            goto LAB_ram_4006ee8e;
          }
          fVar48 = (float)FUN_ram_40000a08(0.0 / fVar41);
          uVar50 = FUN_ram_40000786(0.0 / fVar41);
        }
        else {
LAB_ram_4006ee80:
          uVar50 = ZEXT48(puVar32);
          if ((float)DAT_ram_4009281c <= fVar41) goto LAB_ram_4006ee8e;
        }
      }
      param_1[0x814] = fVar48;
      *(ulonglong *)(param_1 + 0x815) = uVar50;
      *(ulonglong *)(param_1 + 0x819) = uVar62;
    }
    if ((float)*(undefined8 *)(param_1 + 0x81a) == (float)puVar29) {
      fVar49 = param_1[0x816];
    }
    else {
      fVar49 = DAT_ram_40098764;
      if (((0.0 <= (float)puVar29) && (fVar49 = DAT_ram_40092820, (float)puVar29 <= (float)puVar14))
         && ((fVar57 = (float)puVar29 * DAT_ram_40098778 + DAT_ram_40098764,
             fVar49 = DAT_ram_40098748, DAT_ram_40098748 <= fVar57 &&
             (fVar49 = DAT_ram_40092854, fVar57 <= DAT_ram_40092854)))) {
        fVar49 = fVar57;
      }
      param_1[0x816] = fVar49;
      param_1[0x81a] = (float)puVar29;
    }
    if ((float)*(undefined8 *)(param_1 + 0x81b) == (float)uVar52) {
      uVar52 = *(ulonglong *)(param_1 + 0x817);
    }
    else {
      *(ulonglong *)(param_1 + 0x817) = uVar52;
      *(ulonglong *)(param_1 + 0x81b) = uVar52;
    }
    puVar29 = DAT_ram_4009287c;
    puVar34 = (undefined *)uVar52;
    puVar32 = puVar14;
    if ((float)*(undefined8 *)(param_1 + 0x81c) == (float)DAT_ram_4009287c) {
      puVar29 = (undefined *)param_1[0x818];
      if (0.0 <= (float)puVar34) {
        if ((float)puVar34 <= (float)puVar14) goto LAB_ram_4006c3b4;
        puVar32 = (undefined *)0x0;
        puVar34 = puVar14;
      }
      else {
        puVar34 = (undefined *)0x0;
      }
    }
    else {
      param_1[0x818] = (float)DAT_ram_4009287c;
      param_1[0x81c] = (float)puVar29;
      if ((float)puVar34 < 0.0) {
        puVar34 = (undefined *)0x0;
        goto LAB_ram_4006c3d0;
      }
      if ((float)puVar14 < (float)puVar34) {
        puVar32 = (undefined *)0x0;
        puVar34 = puVar14;
        goto LAB_ram_4006c3d0;
      }
LAB_ram_4006c3b4:
      puVar32 = (undefined *)((float)puVar14 - (float)puVar34);
    }
    if (0.0 <= (float)puVar29) {
      if ((float)puVar14 < (float)puVar29) {
        puVar29 = puVar14;
      }
    }
    else {
      puVar29 = (undefined *)0x0;
    }
LAB_ram_4006c3d0:
    fVar47 = DAT_ram_4009877c;
    fVar40 = DAT_ram_400986fc;
    puVar31 = DAT_ram_40092864;
    fVar57 = param_1[0x812];
    fVar41 = param_1[0x813];
    iVar20 = 1;
    if (param_9 != '\0') {
      iVar20 = 2;
    }
    if (param_3 == (float *)0x0) {
      param_3 = param_2;
    }
    iVar19 = 0;
    do {
      fVar16 = param_1[0x823];
      fVar27 = (float)*(undefined8 *)((int)param_2 + iVar19);
      fVar46 = param_1[0x833] * fVar49 + fVar27;
      fVar26 = param_1[0x824];
      fVar36 = (fVar57 + (float)puVar14) * (float)puVar31 * fVar47 + fVar40;
      fVar33 = param_1[0x825];
      fVar39 = param_1[0x826];
      param_1[0x823] = fVar46;
      fVar44 = -(fVar36 * param_1[0x82b]) + fVar36 * fVar46 + fVar16;
      fVar46 = fVar57 * fVar48;
      param_1[0x82b] = fVar44;
      param_1[0x824] = fVar44;
      fVar57 = fVar57 * (float)uVar50 + fVar41 * fVar48;
      fVar16 = (fVar41 + (float)puVar14) * (float)puVar31 * fVar47 + fVar40;
      fVar26 = -(fVar36 * param_1[0x82c]) + fVar36 * fVar44 + fVar26;
      fVar41 = fVar41 * (float)uVar50 - fVar46;
      param_1[0x82c] = fVar26;
      param_1[0x825] = fVar26;
      fVar26 = -(fVar36 * param_1[0x82d]) + fVar36 * fVar26 + fVar33;
      param_1[0x82d] = fVar26;
      param_1[0x826] = fVar26;
      fVar26 = -(fVar36 * param_1[0x82e]) + fVar36 * fVar26 + fVar39;
      param_1[0x82e] = fVar26;
      param_1[0x833] = fVar26;
      *(ulonglong *)((int)param_4 + iVar19) =
           (ulonglong)(uint)((float)puVar29 * ((float)puVar34 * fVar26 + fVar27 * (float)puVar32));
      if (iVar20 == 2) {
        fVar26 = *(float *)((int)param_3 + iVar19);
        fVar33 = param_1[0x827];
        fVar36 = param_1[0x834] * fVar49 + fVar26;
        fVar39 = param_1[0x828];
        fVar46 = param_1[0x829];
        param_1[0x827] = fVar36;
        fVar33 = -(fVar16 * param_1[0x82f]) + fVar16 * fVar36 + fVar33;
        param_1[0x82f] = fVar33;
        param_1[0x828] = fVar33;
        fVar39 = -(fVar16 * param_1[0x830]) + fVar16 * fVar33 + fVar39;
        param_1[0x830] = fVar39;
        param_1[0x829] = fVar39;
        fVar33 = param_1[0x82a];
        fVar39 = -(fVar16 * param_1[0x831]) + fVar16 * fVar39 + fVar46;
        param_1[0x831] = fVar39;
        param_1[0x82a] = fVar39;
        fVar16 = -(fVar16 * param_1[0x832]) + fVar16 * fVar39 + fVar33;
        param_1[0x832] = fVar16;
        param_1[0x834] = fVar16;
        if (param_5 != (float *)0x0) {
          *(ulonglong *)((int)param_5 + iVar19) =
               (ulonglong)
               (uint)((fVar16 * (float)puVar34 + fVar26 * (float)puVar32) * (float)puVar29);
        }
      }
      iVar19 = iVar19 + 4;
    } while (iVar19 != param_6 << 2);
    param_1[0x812] = fVar57;
    param_1[0x813] = fVar41;
    return;
  }
  if ((param_5 == (float *)0x0) || (param_6 == 0)) {
    return;
  }
LAB_ram_4006bb24:
  memset(param_5,0,param_6 << 2);
  return;
}


