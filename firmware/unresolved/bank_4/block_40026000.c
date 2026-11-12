/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40026000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400262d0.
 * REA evidence: ev_35f6f431b86fd09b71c657b1a216d961aaae7a349705b4b22e9673411666f29a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_400262d0(uint param_1,byte param_2,int param_3)

{
  uint uVar1;
  byte bStack_15;
  uint auStack_14 [4];
  
  bStack_15 = param_2;
  auStack_14[0] = param_1;
  FUN_ram_40024e8c(auStack_14,&bStack_15);
  if (9 < auStack_14[0]) {
    return 5;
  }
  uVar1 = param_3 - 1;
  switch(auStack_14[0]) {
  case 0:
    if (bStack_15 == 2) {
      return 7;
    }
    if (bStack_15 != 3) {
      return 2;
    }
    return 6;
  case 1:
    if (bStack_15 == 8) goto switchD_ram_40026434_caseD_5;
    if (bStack_15 == 9) {
LAB_ram_400263c4:
      return (1 < uVar1) + 4;
    }
    if (bStack_15 != 10) {
      if (bStack_15 != 0xb) {
        if ((byte)(bStack_15 - 5) < 3) {
          return 1;
        }
        return 3;
      }
      goto LAB_ram_400263c4;
    }
    break;
  default:
LAB_ram_40026362:
    return 5;
  case 3:
code_r0x400263dc:
    return (1 < uVar1) + 2;
  case 4:
    if (7 < bStack_15) goto LAB_ram_400263c4;
    if (bStack_15 == 4) {
switchD_ram_40026434_caseD_5:
      return (1 < uVar1) + 3;
    }
    if (bStack_15 < 5) {
      if (bStack_15 != 1) goto LAB_ram_400263c4;
      goto switchD_ram_40026434_caseD_5;
    }
    break;
  case 5:
    if (bStack_15 == 0xe) {
      return 5;
    }
    if (bStack_15 == 0x10) {
      return 7;
    }
    if (bStack_15 == 0x11) {
      if (1 < uVar1) {
        return 8;
      }
      return 5;
    }
    if (bStack_15 == 0xb) {
      return 4;
    }
    if (((byte)(bStack_15 - 0xc) < 2) || (bStack_15 == 9)) goto LAB_ram_400263c4;
    if ((bStack_15 & 0xfd) == 8) {
      return 5;
    }
    if (bStack_15 == 0) goto code_r0x400263dc;
    if (bStack_15 != 3) {
      if (bStack_15 == 4) {
        if (1 < uVar1) {
          return 5;
        }
        return 4;
      }
      goto switchD_ram_40026434_caseD_5;
    }
    goto code_r0x40026346;
  case 6:
    break;
  case 7:
    if (bStack_15 == 0) {
      return 4;
    }
    if (bStack_15 == 1) {
      return 7;
    }
    return 9;
  case 9:
    switch(bStack_15) {
    case 1:
    case 2:
      return (1 < uVar1) + 1;
    case 3:
      if (1 < uVar1) {
        return bStack_15;
      }
      return 2;
    case 4:
      return 3;
    default:
      goto switchD_ram_40026434_caseD_5;
    case 8:
    case 10:
      return 4;
    case 9:
      return 2;
    case 0xb:
      goto LAB_ram_40026362;
    }
  }
code_r0x40026346:
  return (1 < uVar1) + 5;
}


/* NanoCore 1.10, address 0x40026450.
 * REA evidence: ev_74cf50c6203d683ba057a76aeacc3d24f180fc1e8d792e741b75344097bfbf37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40026450(int param_1,char param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  char cStack_15;
  int aiStack_14 [4];
  
  cStack_15 = param_2;
  aiStack_14[0] = param_1;
  FUN_ram_40024e8c(aiStack_14,&cStack_15);
  if (1 < param_4 - 1U) {
    return param_3;
  }
  if (aiStack_14[0] == 5) {
    if (((byte)(cStack_15 - 0xcU) < 2) && (param_3 < 4)) {
      return param_3 + 1 & 0xff;
    }
    if ((cStack_15 != '\t') || (3 < param_3)) {
      if (cStack_15 != '\x11') {
        return param_3;
      }
      if (4 < param_3) {
        return param_3;
      }
      puVar1 = &DAT_ram_40094c78;
      goto LAB_ram_400264cc;
    }
  }
  else {
    if (aiStack_14[0] != 1) {
      return param_3;
    }
    if (cStack_15 != '\v') {
      return param_3;
    }
    if (3 < param_3) {
      return param_3;
    }
  }
  puVar1 = &DAT_ram_40094c80;
LAB_ram_400264cc:
  return (uint)(byte)puVar1[param_3];
}


/* NanoCore 1.10, address 0x400264e8.
 * REA evidence: ev_3be4d60f97dc541db7c8a71023f0ae16edd4a1669f47ffad3997b867d6b2872d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400264e8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_ram_400262d0(param_1,param_2,param_4);
  uVar1 = 0;
  while( true ) {
    if (uVar1 == uVar2) {
      return 0xff;
    }
    iVar3 = FUN_ram_40026450(param_1,param_2,uVar1,param_4);
    if (iVar3 == param_3) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4002653e.
 * REA evidence: ev_4a3ff737faa7670e4cfa166f1dfab082ffd207be494a9e2ec533d8a82bfd6f06
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002653e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_ram_400262d0();
  uVar2 = 0;
  for (uVar1 = 0; uVar1 != uVar3; uVar1 = uVar1 + 1 & 0xff) {
    uVar4 = FUN_ram_40026450(param_1,param_2,uVar1,param_3);
    if ((uVar4 != 0xff) && (uVar2 <= uVar4)) {
      uVar2 = uVar4 + 1 & 0xff;
    }
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x400265a0.
 * REA evidence: ev_b8dae8dcb172ebeceb6534989107edd17e98bead1a66e5ae35d18c461c3315a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400267f6) */
/* WARNING: Removing unreachable block (ram,0x40026804) */

undefined4
FUN_ram_400265a0(undefined4 param_1,undefined4 param_2,byte param_3,uint param_4,int param_5,
                int param_6,undefined4 *param_7)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  byte bStack_45;
  undefined4 auStack_44 [3];
  
  uVar2 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar2 = *param_7;
  }
  bStack_45 = param_3;
  auStack_44[0] = param_2;
  uVar2 = FUN_ram_40024ba2(uVar2,&DAT_ram_400937dc);
  uVar3 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar3 = param_7[1];
  }
  uVar3 = FUN_ram_40024ba2(uVar3,&DAT_ram_40093a64);
  uVar4 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar4 = param_7[2];
  }
  uVar4 = FUN_ram_40024ba2(uVar4,&DAT_ram_40093a68);
  uVar5 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar5 = param_7[3];
  }
  uVar5 = FUN_ram_40024ba2(uVar5,&DAT_ram_40093a6c);
  uVar6 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar6 = param_7[4];
  }
  uVar6 = FUN_ram_40024ba2(uVar6,&DAT_ram_40093388);
  uVar7 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar7 = param_7[5];
  }
  uVar7 = FUN_ram_40024ba2(uVar7,&DAT_ram_40095758);
  if (param_5 == 0) {
    return 0xffffffff;
  }
  if (param_6 == 0) {
    return 0xffffffff;
  }
  FUN_ram_40024e8c(auStack_44,&bStack_45);
  fVar10 = (float)FUN_ram_40024bb0(param_1);
  switch(auStack_44[0]) {
  case 0:
    if (bStack_45 == 0) {
      if (param_4 == 0) {
LAB_ram_400266a0:
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_4009286c + DAT_ram_40093498) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar3);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400934c8 + DAT_ram_400930e8) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar4);
        return 0;
      }
    }
    else {
      if (bStack_45 == 2) {
        if (param_4 == 0) goto LAB_ram_400266a0;
      }
      else if (bStack_45 == 1) {
        if (param_4 == 0) {
          fVar10 = (float)FUN_ram_40024bb0();
          uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_40093494 + DAT_ram_400941d0) * DAT_ram_400930a4
                                  );
          FUN_ram_40024df2(param_5,param_6,uVar2,uVar3);
          return 0;
        }
        if (param_4 == 1) {
          fVar10 = (float)FUN_ram_40024bb0();
          uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400941d4 + DAT_ram_400930bc) * DAT_ram_400930a4
                                  );
          FUN_ram_40024df2(param_5,param_6,uVar2,uVar4);
          return 0;
        }
        goto LAB_ram_4002677a;
      }
      if (bStack_45 == 3) {
        param_4 = param_4 + 1 & 0xff;
      }
    }
LAB_ram_4002677a:
    if ((byte)(bStack_45 - 2) < 2) {
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400936e0 + DAT_ram_400936e4) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar3);
        return 0;
      }
      if (param_4 == 2) {
        fVar10 = (float)FUN_ram_40024bb0();
        iVar8 = FUN_ram_40024bd4((fVar10 * DAT_ram_400941d8 + DAT_ram_4009281c) * DAT_ram_400930a4);
        FUN_ram_400055ea(param_5,param_6,s__ld__ld_1_ram_40093a70,iVar8 / 10,iVar8 % 10);
        return 0;
      }
      if (param_4 == 3) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400934e0 + 0.0) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar3);
        return 0;
      }
      if (param_4 == 4) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400941dc + 0.0) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 5) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_40093094 + 0.0) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 6) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400941e0 + DAT_ram_400934e4) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar3);
        return 0;
      }
    }
    break;
  case 1:
    if (bStack_45 == 8) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400934e0 + DAT_ram_40093490);
        FUN_ram_400055ea(param_5,param_6,s__ld__s_ram_40093474,uVar2,uVar5);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * (float)PTR_firmware_entry_ram_40092830 + DAT_ram_40092818
                                 ) * DAT_ram_4009286c);
        FUN_ram_40024e3e(param_5,param_6,uVar2,uVar5);
        return 0;
      }
      if ((param_4 - 2 & 0xff) < 2) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 9) {
      if (param_4 == 0) {
        uVar3 = FUN_ram_40024bb0();
        fVar10 = (float)FUN_ram_40000d54(DAT_ram_400934c0,uVar3);
        FUN_ram_40024c8e(fVar10 * DAT_ram_400930a4,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_4009349c + 0.0,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 2) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400941e4 + DAT_ram_400930f4) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,0);
        return 0;
      }
      if ((param_4 - 3 & 0xff) < 2) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 10) {
      if (param_4 == 0) {
        fVar11 = (float)FUN_ram_40024bb0();
        uVar3 = FUN_ram_40024bb0();
        fVar12 = (float)FUN_ram_40000d54(DAT_ram_400941e8,uVar3);
        fVar10 = DAT_ram_400941ec;
        fVar1 = DAT_ram_400941f0;
        if (DAT_ram_40092864 <= fVar11) {
          fVar11 = fVar11 - DAT_ram_40092864;
          fVar10 = DAT_ram_400930f0;
          fVar1 = DAT_ram_4009281c;
        }
        FUN_ram_40024c8e((fVar11 * fVar10 + fVar1) * fVar12 * DAT_ram_400934a4,param_5,param_6,uVar2
                        );
        return 0;
      }
      if ((param_4 == 1) || ((param_4 - 3 & 0xff) < 3)) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar3 = FUN_ram_40024bd4((fVar10 * DAT_ram_4009284c + 0.0) * DAT_ram_4009286c);
        FUN_ram_40024e3e(param_5,param_6,uVar3,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 0xb) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_400930b0 + 0.0,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else {
      if (param_4 == 0) {
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,0);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 2) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    break;
  case 2:
    if (param_4 == 0) {
      uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400930a4);
      FUN_ram_40024df2(param_5,param_6,uVar2,0);
      return 0;
    }
    if ((param_4 - 1 & 0xff) < 3) {
      fVar10 = (float)FUN_ram_40024bb0();
      uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400930bc + DAT_ram_400934b8) * DAT_ram_400930a4);
      FUN_ram_40024df2(param_5,param_6,uVar2,uVar3);
      return 0;
    }
    if (param_4 == 4) {
      FUN_ram_40024dbc(param_5,param_6);
      return 0;
    }
    break;
  case 3:
    if (param_4 == 0) {
      uVar3 = FUN_ram_40024bb0();
      fVar10 = (float)FUN_ram_40000d54(DAT_ram_400941f4,uVar3);
      FUN_ram_40024c8e(fVar10 * DAT_ram_400930bc,param_5,param_6,uVar2);
      return 0;
    }
    if (param_4 == 1) {
      uVar3 = FUN_ram_40024bb0();
      fVar10 = (float)FUN_ram_40000d54(DAT_ram_400930a4,uVar3);
      FUN_ram_40024c8e(fVar10 * DAT_ram_400934c0,param_5,param_6,uVar2);
      return 0;
    }
    if (param_4 == 2) {
      FUN_ram_40024dbc(param_5,param_6);
      return 0;
    }
    break;
  case 4:
    if (bStack_45 < 8) {
      if (bStack_45 < 5) {
        if (bStack_45 == 0) goto LAB_ram_40026e3a;
LAB_ram_40026d4e:
        if (param_4 == 0) {
          fVar10 = (float)FUN_ram_40024bb0();
          fVar10 = fVar10 * DAT_ram_400941f8 + DAT_ram_400930f4;
          uVar13 = FUN_ram_40024bd4(fVar10 * DAT_ram_400930a4);
          iVar8 = (int)uVar13;
          if (iVar8 < 1000) {
            FUN_ram_40024df2(param_5,param_6,iVar8,uVar4);
            return 0;
          }
          uVar2 = FUN_ram_40024bd4(fVar10,iVar8,(int)((ulonglong)uVar13 >> 0x20),iVar8);
          FUN_ram_40024c60(param_5,param_6,uVar2,uVar4);
          return 0;
        }
        if (param_4 == 1) {
          fVar10 = (float)FUN_ram_40024bb0();
          uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400934c8 + 0.0);
          FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
          return 0;
        }
        if (bStack_45 == 0) goto LAB_ram_40026ea0;
        if (bStack_45 == 3) {
          if (param_4 == 2) {
            fVar10 = (float)FUN_ram_40024bb0();
            uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400934e0 + DAT_ram_40093490);
            FUN_ram_400055ea(param_5,param_6,s__ld__s_ram_40093474,uVar2,uVar5);
            return 0;
          }
          if ((param_4 - 3 & 0xff) < 2) {
            FUN_ram_40024dbc(param_5,param_6);
            return 0;
          }
          break;
        }
      }
      else if ((byte)(bStack_45 - 6) < 2) goto LAB_ram_40026d4e;
      if (bStack_45 == 5) {
        if (param_4 == 0) {
          fVar10 = (float)FUN_ram_40024bb0();
          fVar10 = fVar10 * DAT_ram_40094200 + (float)PTR_firmware_entry_ram_40092830;
          uVar13 = FUN_ram_40024bd4(fVar10 * DAT_ram_400930a4);
          iVar8 = (int)uVar13;
          if (iVar8 < 1000) {
            FUN_ram_40024df2(param_5,param_6,iVar8,uVar4);
            return 0;
          }
          uVar2 = FUN_ram_40024bd4(fVar10,iVar8,(int)((ulonglong)uVar13 >> 0x20),iVar8);
          FUN_ram_40024c60(param_5,param_6,uVar2,uVar4);
          return 0;
        }
        if (param_4 == 1) {
          fVar10 = (float)FUN_ram_40024bb0();
          uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400934c8 + 0.0);
          FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
          return 0;
        }
        if (param_4 == 2) {
          fVar10 = (float)FUN_ram_40024bb0();
          uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_40093494 + DAT_ram_4009309c);
          FUN_ram_400055ea(param_5,param_6,s__ld__s_ram_40093474,uVar2,uVar7);
          return 0;
        }
        if ((param_4 - 3 & 0xff) < 3) {
          FUN_ram_40024dbc(param_5,param_6);
          return 0;
        }
      }
      else if (bStack_45 == 7) {
        if (param_4 == 2) {
          fVar10 = (float)FUN_ram_40024bb0();
          uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400930bc + 0.0) * DAT_ram_400930a4);
          FUN_ram_40024df2(param_5,param_6,uVar2,uVar4);
          return 0;
        }
        if (param_4 == 3) {
          fVar10 = (float)FUN_ram_40024bb0();
          FUN_ram_40024c8e(fVar10 * DAT_ram_40094204 + DAT_ram_400930d8,param_5,param_6,uVar2);
          return 0;
        }
        if ((param_4 - 4 & 0xff) < 2) {
          FUN_ram_40024dbc(param_5,param_6);
          return 0;
        }
      }
      else if ((bStack_45 == 1) || (bStack_45 == 4)) {
        if ((param_4 - 2 & 0xff) < 2) {
          FUN_ram_40024dbc(param_5,param_6);
          return 0;
        }
      }
      else if (bStack_45 == 2) {
        if ((param_4 - 2 & 0xff) < 3) {
          FUN_ram_40024dbc(param_5,param_6);
          return 0;
        }
      }
      else if ((bStack_45 == 6) && ((param_4 - 2 & 0xff) < 4)) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else {
LAB_ram_40026e3a:
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400941fc + DAT_ram_4009281c);
        FUN_ram_40024c60(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400934c8 + 0.0);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
LAB_ram_40026ea0:
      if ((param_4 - 2 & 0xff) < 3) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    break;
  case 5:
    if (bStack_45 == 0xe) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094208 + DAT_ram_400930d8,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 & 0xfd) == 1) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_4009420c + DAT_ram_40094210) * DAT_ram_40094214 *
                                 DAT_ram_4009286c);
        FUN_ram_40024e3e(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 4) {
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_40094218);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 0x10) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094208 + DAT_ram_400930d8,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 == 1) || (param_4 == 4)) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_4009421c + DAT_ram_40094220) * DAT_ram_4009286c);
        FUN_ram_40024e3e(param_5,param_6,uVar2,0);
        return 0;
      }
      if (param_4 == 3) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_4009282c + DAT_ram_4009281c);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
      if (param_4 == 5) {
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400941dc);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
      if (param_4 == 6) {
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_40094218);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 0x11) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094208 + DAT_ram_400930d8,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 & 0xfb) == 1) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_40094224 + DAT_ram_4009284c) * DAT_ram_40094214 *
                                 DAT_ram_4009286c);
        FUN_ram_40024e3e(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 3) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400930b4 + DAT_ram_400934d0);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
      if (param_4 == 4) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40093094 + 0.0,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 6) {
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400941dc);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
      if (param_4 == 7) {
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_40094218);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 0xc) {
      if (param_4 == 2) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094204 + DAT_ram_400930d8,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 0xd) {
      if (param_4 == 2) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094204 + DAT_ram_400930d8,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 3) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400941dc + DAT_ram_40093498);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
      if ((param_4 == 1) || (param_4 == 4)) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 0) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094228 + DAT_ram_400930f4,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 + 0.0) * DAT_ram_4009286c);
        FUN_ram_40024e3e(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 2) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if ((byte)(bStack_45 - 1) < 2) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094204 + DAT_ram_400930d8,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400930b4 + DAT_ram_400934d0);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_4009338c,uVar2);
        return 0;
      }
      if ((param_4 - 2 & 0xff) < 2) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 8) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_4009422c + DAT_ram_400930f4,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 9) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_400930b0 + 0.0,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 10) {
      if (param_4 == 0) {
        uVar3 = FUN_ram_40024bb0();
        fVar10 = (float)FUN_ram_40000d54(DAT_ram_40094230,uVar3);
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094234,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 3) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094238 + DAT_ram_400934d4,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 == 1) || ((param_4 - 4 & 0xff) < 2)) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        uVar2 = FUN_ram_40024bf6(param_7);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_400937d8,uVar2);
        return 0;
      }
      if (param_4 == 3) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_400930dc + 0.0,param_5,param_6,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 4) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094238 + DAT_ram_400934d4,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400930bc + 0.0) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 2) {
        uVar2 = FUN_ram_40024bf6(param_7);
        FUN_ram_400055ea(param_5,param_6,&DAT_ram_400937d8,uVar2);
        return 0;
      }
      if ((param_4 - 3 & 0xff) < 2) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    break;
  case 6:
    if (bStack_45 == 6) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_4009423c + DAT_ram_40092864) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar6);
        return 0;
      }
      if (param_4 == 3) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094240 + DAT_ram_400930a0,param_5,param_6,uVar2);
        return 0;
      }
      if (((param_4 - 1 & 0xff) < 2) || ((param_4 - 4 & 0xff) < 2)) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 5) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_4009423c + DAT_ram_40092864) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar6);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400934e8 + 0.0) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 3) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400941e0 + DAT_ram_400934e4);
        FUN_ram_400055ea(param_5,param_6,s__ld__s_ram_40093474,uVar2,uVar5);
        return 0;
      }
      if ((param_4 == 2) || ((param_4 - 4 & 0xff) < 2)) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else if ((bStack_45 - 7 & 0xfd) == 0) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_4009423c + DAT_ram_40092864) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar6);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_40094244 + DAT_ram_400930e8) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 2) {
        fVar10 = (float)FUN_ram_40024bb0();
        FUN_ram_40024c8e(fVar10 * DAT_ram_40094248 + DAT_ram_400934f0,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 3 & 0xff) < 3) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    else {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_4009423c + DAT_ram_40092864) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar6);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400934e8 + 0.0) * DAT_ram_400930a4);
        FUN_ram_40024df2(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if ((param_4 - 2 & 0xff) < 4) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
    break;
  case 7:
    if (bStack_45 < 2) {
      if (bStack_45 == 1) {
        if (param_4 < 6) {
LAB_ram_40027a74:
          fVar10 = (float)FUN_ram_40024bb0();
          uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_4009424c + DAT_ram_400934f4) * DAT_ram_400930a4
                                  );
          FUN_ram_40024df2(param_5,param_6,uVar2,uVar3);
          return 0;
        }
        uVar9 = 6;
      }
      else {
        if (param_4 < 3) goto LAB_ram_40027a74;
        uVar9 = 3;
      }
    }
    else {
      if (param_4 < 8) goto LAB_ram_40027a74;
      uVar9 = 8;
    }
    if (param_4 == uVar9) {
      fVar10 = (float)FUN_ram_40024bb0();
      uVar2 = FUN_ram_40024bd4((fVar10 * DAT_ram_400934e0 + DAT_ram_40093490) * DAT_ram_400930a4);
      FUN_ram_40024df2(param_5,param_6,uVar2,uVar3);
      return 0;
    }
    break;
  case 9:
    if (bStack_45 == 4) {
      if (param_4 == 0) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_400934e0 + DAT_ram_40093490);
        FUN_ram_400055ea(param_5,param_6,s__ld__s_ram_40093474,uVar2,uVar5);
        return 0;
      }
      if (param_4 == 1) {
        fVar10 = (float)FUN_ram_40024bb0();
        uVar2 = FUN_ram_40024bd4((fVar10 * (float)PTR_firmware_entry_ram_40092830 + DAT_ram_40092818
                                 ) * DAT_ram_4009286c);
        FUN_ram_40024e3e(param_5,param_6,uVar2,uVar5);
        return 0;
      }
      if (param_4 == 2) {
        FUN_ram_40024dbc(param_5,param_6);
        return 0;
      }
    }
  }
  uVar2 = FUN_ram_40024bd4(fVar10 * DAT_ram_4009286c);
  FUN_ram_40024e3e(param_5,param_6,uVar2,0);
  return 0;
}


