/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4004a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4004a066.
 * REA evidence: ev_6396fca2a8dc32c47b73ab158205ce22aafc56c88eddae21feb055bceb2907f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a066(void)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  DAT_ram_30080d85 = DAT_ram_30080d85 ^ 1;
  puVar3 = (undefined4 *)FUN_ram_4004b610(0x30080d8c);
  do {
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      iVar4 = FUN_ram_40056ac4(puVar3[0x14]);
      puVar3[0xd] = puVar3[0xd] + iVar4;
      uVar5 = FUN_ram_40056a9e();
      puVar3[0x14] = uVar5;
      DAT_ram_30080d84 = '\0';
      if ((puVar3[0x15] & 3) >> 1 == (uint)DAT_ram_30080d85) break;
      bVar1 = *(byte *)(puVar3 + 0x15);
      *(byte *)(puVar3 + 0x15) = bVar1 & 0xfd | (byte)((DAT_ram_30080d85 & 1) << 1);
      if (((bVar1 & 4) == 0) && (-1 < (int)puVar3[0xd])) {
        if (((*(byte *)((int)puVar3 + 0x4e) & 1) == 0) && ((code *)puVar3[6] != (code *)0x0)) {
          iVar4 = (*(code *)puVar3[6])(puVar3);
          puVar3[9] = puVar3[9] + iVar4;
          puVar3[0xb] = puVar3[0xb] + iVar4;
        }
        FUN_ram_40049f50(puVar3);
        if ((code *)puVar3[3] != (code *)0x0) {
          (*(code *)puVar3[3])(puVar3);
        }
        *(byte *)(puVar3 + 0x15) = *(byte *)(puVar3 + 0x15) | 4;
        FUN_ram_40049fda(puVar3);
      }
      if ((int)puVar3[0xd] < 0) {
LAB_ram_4004a1a0:
        if (DAT_ram_30080d84 == '\0') break;
      }
      else {
        if ((int)puVar3[0xc] < (int)puVar3[0xd]) {
          puVar3[0xd] = puVar3[0xc];
        }
        iVar4 = (*(code *)puVar3[8])(puVar3);
        if (puVar3[10] == iVar4) {
LAB_ram_4004a1ac:
          if (DAT_ram_30080d84 == '\0') {
LAB_ram_4004a164:
            iVar4 = puVar3[0xc];
            if ((int)puVar3[0xd] < iVar4) break;
            bVar1 = *(byte *)(puVar3 + 0x15);
            iVar6 = puVar3[0xf];
            if ((bVar1 & 1) == 0) {
              sVar2 = *(short *)(puVar3 + 0x11);
              if (sVar2 == 0) goto LAB_ram_4004a17c;
              if (sVar2 != -1) {
                *(short *)(puVar3 + 0x11) = sVar2 + -1;
                goto LAB_ram_4004a1c6;
              }
            }
            else {
LAB_ram_4004a1c6:
              if (*(short *)(puVar3 + 0x11) == 0) {
LAB_ram_4004a17c:
                if ((iVar6 == 0) || ((bVar1 & 1) != 0)) {
                  FUN_ram_4004b552(0x30080d8c,puVar3);
                  FUN_ram_40049f9e();
                  if ((code *)puVar3[4] != (code *)0x0) {
                    (*(code *)puVar3[4])(puVar3);
                  }
                  if ((code *)puVar3[5] != (code *)0x0) {
                    (*(code *)puVar3[5])(puVar3);
                  }
                  FUN_ram_4005a988(puVar3);
                  goto LAB_ram_4004a1a0;
                }
              }
            }
            puVar3[0xd] = -puVar3[0x10];
            if (iVar6 != 0) {
              if ((bVar1 & 1) == 0) {
                puVar3[0xd] = -puVar3[0xe];
              }
              puVar3[0xc] = iVar6;
              *(byte *)(puVar3 + 0x15) = bVar1 & 1 ^ 1 | *(byte *)(puVar3 + 0x15) & 0xfe;
              uVar5 = puVar3[9];
              puVar3[0xf] = iVar4;
              puVar3[9] = puVar3[0xb];
              puVar3[0xb] = uVar5;
            }
            break;
          }
        }
        else {
          puVar3[10] = iVar4;
          if ((code *)puVar3[1] != (code *)0x0) {
            (*(code *)puVar3[1])(*puVar3,iVar4);
          }
          if (DAT_ram_30080d84 == '\0') {
            if ((code *)puVar3[2] != (code *)0x0) {
              (*(code *)puVar3[2])(puVar3,iVar4);
              goto LAB_ram_4004a1ac;
            }
            goto LAB_ram_4004a164;
          }
        }
      }
      puVar3 = (undefined4 *)FUN_ram_4004b610(0x30080d8c);
    }
    puVar3 = (undefined4 *)FUN_ram_4004b61c(0x30080d8c,puVar3);
  } while( true );
}


/* NanoCore 1.12, address 0x4004a20a.
 * REA evidence: ev_4cf56088db5cc1c78a231b6e0dc7a5ffa6267d61fda5d5837551be673cb1cd00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004a20a(void)

{
  FUN_ram_4004b436(0x30080d8c,0x58);
  _DAT_ram_30080d88 = FUN_ram_4004c6ac(FUN_ram_4004a066,10,0);
  FUN_ram_40049f9e();
  _DAT_ram_30080d84 = 0;
  return;
}


/* NanoCore 1.12, address 0x4004a24c.
 * REA evidence: ev_1d7d308f0c1cc40606b9e2111ad3294f388bb04277d4ed72741dcb0f981486d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a24c(int param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,0x58);
  *(undefined4 *)(param_1 + 0x30) = 500;
  *(undefined4 *)(param_1 + 0x2c) = 100;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(code **)(param_1 + 0x20) = FUN_ram_40049e86;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 1;
  return;
}


/* NanoCore 1.12, address 0x4004a292.
 * REA evidence: ev_ae3d86a90a8cd252b69ec9e44b15c42fd8c72037aa0b7aa17dca53086b4397c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4004a292(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_ram_4004b446(0x30080d8c);
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_ram_4000500c(puVar1,param_1,0x58);
    if ((int *)*param_1 == param_1) {
      *puVar1 = puVar1;
    }
    *(byte *)(puVar1 + 0x15) = *(byte *)(puVar1 + 0x15) & 0xfd | (DAT_ram_30080d85 & 1) << 1;
    uVar2 = FUN_ram_40056a9e();
    puVar1[0x14] = uVar2;
    if ((*(byte *)((int)puVar1 + 0x4e) & 1) != 0) {
      if ((code *)puVar1[6] != (code *)0x0) {
        iVar3 = (*(code *)puVar1[6])(puVar1);
        puVar1[9] = puVar1[9] + iVar3;
        puVar1[0xb] = puVar1[0xb] + iVar3;
      }
      FUN_ram_40049f50(puVar1);
      if ((param_1[1] != 0) || (param_1[2] != 0)) {
        FUN_ram_40049fda(puVar1);
      }
      if ((code *)puVar1[1] != (code *)0x0) {
        (*(code *)puVar1[1])(*puVar1,puVar1[9]);
      }
      if ((code *)puVar1[2] != (code *)0x0) {
        (*(code *)puVar1[2])(puVar1,puVar1[9]);
      }
    }
    FUN_ram_40049f9e();
  }
  return puVar1;
}


/* NanoCore 1.12, address 0x4004a332.
 * REA evidence: ev_bcf2abb9dd8dd32c6a843a79983370aebfea3f239500cb420131ccf54ece2858
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a332(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_ram_4004b610(0x30080d8c);
  uVar2 = 0;
  while (piVar1 != (int *)0x0) {
    if (((*piVar1 == param_1) || (param_1 == 0)) && ((piVar1[1] == param_2 || (param_2 == 0)))) {
      FUN_ram_4004b552(0x30080d8c,piVar1);
      if ((code *)piVar1[5] != (code *)0x0) {
        (*(code *)piVar1[5])(piVar1);
      }
      FUN_ram_4005a988(piVar1);
      FUN_ram_40049f9e();
      piVar1 = (int *)FUN_ram_4004b610(0x30080d8c);
      uVar2 = 1;
    }
    else {
      piVar1 = (int *)FUN_ram_4004b61c(0x30080d8c,piVar1);
    }
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4004a3b6.
 * REA evidence: ev_11a89ded0327a72e37625c3b05e251c9e718018d0e207ed1ac2fbb86f7893d1a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a3b6(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_ram_4004b610(0x30080d8c);
  while ((piVar1 != (int *)0x0 &&
         ((*piVar1 != param_1 || ((piVar1[1] != param_2 && (param_2 != 0))))))) {
    piVar1 = (int *)FUN_ram_4004b61c(0x30080d8c,piVar1);
  }
  return;
}


/* NanoCore 1.12, address 0x4004a3fe.
 * REA evidence: ev_fe1866e60948bc416cee6a557de1e18e2099226ff235c4335ca9d6fa3fa295c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004a438) */
/* WARNING: Removing unreachable block (ram,0x4004a430) */
/* WARNING: Removing unreachable block (ram,0x4004a43e) */

int FUN_ram_4004a3fe(uint param_1,uint param_2,uint param_3)

{
  if (10000 < param_1) {
    param_1 = 0x27f6;
  }
  if (10000 < param_2) {
    param_2 = 0x27f6;
  }
  if (10000 < param_3) {
    param_3 = 0x27f6;
  }
  return ((param_3 + 5) / 10) * 0x100000 +
         ((param_2 + 5) / 10) * 0x400 + (param_1 + 5) / 10 + 0x80000000;
}


/* NanoCore 1.12, address 0x4004a44c.
 * REA evidence: ev_60bb00e64b7501aa473784e3a3e74261b63300ec9918afaebffa4c1c923ab3f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a44c(void)

{
  FUN_ram_4004a066(0);
  return;
}


/* NanoCore 1.12, address 0x4004a462.
 * REA evidence: ev_456024065a16f1663e14fd58d4fd48a3d5a37fbda6757c871d43fa889931c33c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004a46c) */

bool FUN_ram_4004a462(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1[2] - *param_1) / 2;
  iVar2 = *param_2 - (*param_1 + iVar3);
  iVar1 = param_2[1] - (iVar3 + param_1[1]);
  return (uint)(iVar1 * iVar1 + iVar2 * iVar2) <= (uint)(iVar3 * iVar3);
}


/* NanoCore 1.12, address 0x4004a496.
 * REA evidence: ev_289d60d8d291c90599b94ebce6dd1601bb987ba8658ef3082278ccc2ae28b004
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a496(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}


/* NanoCore 1.12, address 0x4004a4a0.
 * REA evidence: ev_d3e5eb180291d17b167de3315aab7a74f5e935538a58dff24d79b64e96497515
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a4a0(int *param_1,int param_2)

{
  param_1[2] = param_2 + *param_1 + -1;
  return;
}


/* NanoCore 1.12, address 0x4004a4aa.
 * REA evidence: ev_72f23d10ceab9d551f00ba8daac1f292f46ff51f1a67b2b6f47454de7b4962cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a4aa(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_1 + 4) + -1;
  return;
}


/* NanoCore 1.12, address 0x4004a4b4.
 * REA evidence: ev_26fe0b9fc3be55b061a58dff2a2bebe14dca9f775e82bb21e0bbe48b393b2a76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004a4b4(int *param_1)

{
  return ((param_1[2] - *param_1) + 1) * ((param_1[3] - param_1[1]) + 1);
}


/* NanoCore 1.12, address 0x4004a4ca.
 * REA evidence: ev_956f929e036ec93d1661826c375763a686c1c8c909b966fae7b4b5103733f382
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a4ca(int *param_1,int param_2,int param_3)

{
  param_1[2] = param_1[2] + param_2;
  *param_1 = *param_1 - param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[3] = param_1[3] + param_3;
  return;
}


/* NanoCore 1.12, address 0x4004a4e4.
 * REA evidence: ev_d176e63e9726185173ebc27e19fd157c025f4087236b691108bc271acba6d202
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a4e4(int *param_1,int param_2,int param_3)

{
  param_1[2] = param_1[2] + param_2;
  *param_1 = *param_1 + param_2;
  param_1[1] = param_1[1] + param_3;
  param_1[3] = param_1[3] + param_3;
  return;
}


/* NanoCore 1.12, address 0x4004a4fe.
 * REA evidence: ev_231454c724e7b3cb879bf3cd6e3c6b0fc51b5fe49d1e3066733fb25bfe9c4338
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004a4fe(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_3;
  if (*param_3 < *param_2) {
    iVar5 = *param_2;
  }
  iVar2 = param_2[1];
  iVar4 = param_3[1];
  *param_1 = iVar5;
  if (iVar4 < iVar2) {
    iVar4 = iVar2;
  }
  iVar3 = param_2[2];
  iVar2 = param_3[2];
  iVar1 = param_2[3];
  param_1[1] = iVar4;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  iVar3 = param_3[3];
  param_1[2] = iVar2;
  if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  param_1[3] = iVar3;
  return iVar5 <= iVar2 && iVar4 <= iVar3;
}


/* NanoCore 1.12, address 0x4004a54a.
 * REA evidence: ev_2afb926ecd700a6a1be5e726febc56518869d1fc6e3e77fe15186d35b31803c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a54a(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (*param_2 < *param_3) {
    iVar1 = *param_2;
  }
  *param_1 = iVar1;
  iVar1 = param_3[1];
  if (param_2[1] < param_3[1]) {
    iVar1 = param_2[1];
  }
  param_1[1] = iVar1;
  iVar1 = param_3[2];
  if (param_3[2] < param_2[2]) {
    iVar1 = param_2[2];
  }
  param_1[2] = iVar1;
  iVar1 = param_3[3];
  if (param_3[3] < param_2[3]) {
    iVar1 = param_2[3];
  }
  param_1[3] = iVar1;
  return;
}


/* NanoCore 1.12, address 0x4004a584.
 * REA evidence: ev_68ec29e60c984ef227ef2feb42d97333377dc8662c5ed2a26f88be18481e0a4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a584(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  local_40 = *param_1;
  if (*param_2 < local_40) {
    return 0;
  }
  iVar7 = param_1[2];
  if (iVar7 < *param_2) {
    return 0;
  }
  iVar6 = param_1[1];
  if (param_2[1] < iVar6) {
    return 0;
  }
  iVar8 = param_1[3];
  if (iVar8 < param_2[1]) {
    return 0;
  }
  if (param_3 < 1) {
    return 1;
  }
  iVar4 = (iVar8 - iVar6) + 1 >> 1;
  iVar1 = (iVar7 - local_40) + 1 >> 1;
  if (iVar4 < iVar1) {
    iVar1 = iVar4;
  }
  if (param_3 < iVar1) {
    iVar1 = param_3;
  }
  iVar4 = local_40 + iVar1;
  iVar5 = iVar6 + iVar1;
  iStack_3c = iVar6;
  iStack_38 = iVar4;
  iStack_34 = iVar5;
  iVar2 = FUN_ram_4004a584(&local_40,param_2,0);
  if (iVar2 == 0) {
    iStack_3c = iVar8 - iVar1;
    iStack_34 = iVar8;
    iVar2 = FUN_ram_4004a584(&local_40,param_2,0);
    if (iVar2 == 0) {
      iVar4 = iVar7 - iVar1;
      local_40 = iVar4;
      iStack_38 = iVar7;
      iVar7 = FUN_ram_4004a584(&local_40,param_2,0);
      if (iVar7 == 0) {
        iStack_3c = iVar6;
        iStack_34 = iVar5;
        iVar7 = FUN_ram_4004a584(&local_40,param_2,0);
        if (iVar7 == 0) {
          return 1;
        }
        local_40 = iVar4 - iVar1;
        goto LAB_ram_4004a61a;
      }
      local_40 = iVar4 - iVar1;
    }
    else {
      iStack_38 = iVar4 + iVar1;
    }
    iStack_3c = (iVar8 - iVar1) - iVar1;
  }
  else {
    iStack_38 = iVar4 + iVar1;
LAB_ram_4004a61a:
    iStack_34 = iVar1 + iVar5;
  }
  uVar3 = FUN_ram_4004a462(&local_40,param_2);
  return uVar3;
}


/* NanoCore 1.12, address 0x4004a678.
 * REA evidence: ev_9eee17851b92c61b910138c846aec68b75b68797fa8a654d74f8cfc457147690
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004a678(int *param_1,int *param_2)

{
  bool bVar1;
  
  if (param_2[2] < *param_1) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((*param_2 <= param_1[2]) && (param_1[1] <= param_2[3])) {
      bVar1 = param_2[1] <= param_1[3];
    }
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4004a6a6.
 * REA evidence: ev_e34aaa0016c31fffcaa732e68368d134730373cab060115f214d54a9323ed576
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a6a6(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_28;
  int iStack_24;
  
  iVar4 = *param_1;
  if ((((*param_2 <= iVar4) && (iStack_24 = param_1[1], param_2[1] <= iStack_24)) &&
      (iVar3 = param_1[2], iVar3 <= param_2[2])) && (iVar5 = param_1[3], iVar5 <= param_2[3])) {
    if (param_3 == 0) {
      return 1;
    }
    iStack_28 = iVar4;
    iVar1 = FUN_ram_4004a584(param_2,&iStack_28);
    if (((iVar1 != 0) &&
        (iStack_28 = iVar3, iVar1 = FUN_ram_4004a584(param_2,&iStack_28,param_3), iVar1 != 0)) &&
       (iStack_28 = iVar4, iStack_24 = iVar5, iVar4 = FUN_ram_4004a584(param_2,&iStack_28,param_3),
       iVar4 != 0)) {
      iStack_28 = iVar3;
      uVar2 = FUN_ram_4004a584(param_2,&iStack_28,param_3);
      return uVar2;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004a72e.
 * REA evidence: ev_8e44a4b6996eefafdea12099f02b0b2d7ba4888d92a9485bbea7ca8e829d3521
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004a72e(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = FUN_ram_4004a678(param_2,param_3);
  uVar8 = 0xffffffff;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4004a6a6(param_2,param_3,0);
    uVar8 = 0;
    if (iVar2 == 0) {
      iVar6 = param_2[1];
      iVar4 = param_3[1];
      iVar3 = param_2[2];
      iVar2 = *param_2;
      iVar5 = param_2[3];
      bVar1 = 0 < iVar4 - iVar6;
      if (bVar1) {
        *param_1 = iVar2;
        param_1[1] = iVar6;
        param_1[2] = iVar3;
        param_1[3] = iVar4;
      }
      uVar8 = (uint)bVar1;
      iVar7 = param_3[3];
      iVar4 = (iVar5 - iVar6) - (iVar7 - param_2[1]);
      if ((0 < iVar4) && (iVar7 < param_2[3])) {
        iVar5 = param_2[2];
        param_1[uVar8 * 4] = *param_2;
        param_1[uVar8 * 4 + 1] = iVar7;
        param_1[uVar8 * 4 + 2] = iVar5;
        param_1[uVar8 * 4 + 3] = iVar7 + iVar4;
        uVar8 = (int)((uVar8 + 1) * 0x1000000) >> 0x18;
      }
      iVar5 = *param_3;
      iVar4 = param_2[1];
      if (param_2[1] < param_3[1]) {
        iVar4 = param_3[1];
      }
      iVar6 = param_2[3];
      if (param_3[3] < param_2[3]) {
        iVar6 = param_3[3];
      }
      if ((0 < iVar5 - *param_2) && (0 < iVar6 - iVar4)) {
        param_1[uVar8 * 4] = *param_2;
        param_1[uVar8 * 4 + 1] = iVar4;
        param_1[uVar8 * 4 + 2] = iVar5;
        param_1[uVar8 * 4 + 3] = iVar6;
        uVar8 = (int)((uVar8 + 1) * 0x1000000) >> 0x18;
      }
      iVar5 = param_3[2];
      iVar2 = (iVar3 - iVar2) - (iVar5 - *param_2);
      if (0 < iVar2) {
        param_1[uVar8 * 4] = iVar5;
        param_1[uVar8 * 4 + 1] = iVar4;
        param_1[uVar8 * 4 + 2] = iVar5 + iVar2;
        param_1[uVar8 * 4 + 3] = iVar6;
        uVar8 = (int)((uVar8 + 1) * 0x1000000) >> 0x18;
      }
    }
  }
  return uVar8;
}


/* NanoCore 1.12, address 0x4004a83a.
 * REA evidence: ev_afbbf768c4234582630a09e89bbfb380d49e465f62d4b17cf2a9ae66eb10019e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4004a83a(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_28;
  int iStack_24;
  
  iVar3 = param_1[2];
  if (iVar3 < *param_2) {
    bVar1 = 1;
  }
  else {
    iVar5 = param_1[3];
    bVar1 = 1;
    if (((param_2[1] <= iVar5) && (iVar4 = *param_1, iVar4 <= param_2[2])) &&
       (iStack_24 = param_1[1], iStack_24 <= param_2[3])) {
      if (((param_3 != 0) &&
          (iStack_28 = iVar4, iVar2 = FUN_ram_4004a584(param_2,&iStack_28), iVar2 == 0)) &&
         ((iStack_28 = iVar3, iVar2 = FUN_ram_4004a584(param_2,&iStack_28,param_3), iVar2 == 0 &&
          (iStack_28 = iVar4, iStack_24 = iVar5,
          iVar5 = FUN_ram_4004a584(param_2,&iStack_28,param_3), iVar5 == 0)))) {
        iStack_28 = iVar3;
        bVar1 = FUN_ram_4004a584(param_2,&iStack_28,param_3);
        return bVar1 ^ 1;
      }
      bVar1 = 0;
    }
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4004a8d0.
 * REA evidence: ev_eafc0b2ca2ea50eac6abbaf8d2ac43130526515139107d5f0913b6c712260d2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004aa24) */
/* WARNING: Removing unreachable block (ram,0x4004a98e) */
/* WARNING: Removing unreachable block (ram,0x4004a992) */
/* WARNING: Removing unreachable block (ram,0x4004a9dc) */
/* WARNING: Removing unreachable block (ram,0x4004a9d8) */
/* WARNING: Removing unreachable block (ram,0x4004a9f4) */
/* WARNING: Removing unreachable block (ram,0x4004a9f8) */
/* WARNING: Removing unreachable block (ram,0x4004a91e) */
/* WARNING: Removing unreachable block (ram,0x4004a914) */
/* WARNING: Removing unreachable block (ram,0x4004a92c) */
/* WARNING: Removing unreachable block (ram,0x4004a9bc) */
/* WARNING: Removing unreachable block (ram,0x4004a9b8) */
/* WARNING: Removing unreachable block (ram,0x4004a95c) */
/* WARNING: Removing unreachable block (ram,0x4004a960) */
/* WARNING: Removing unreachable block (ram,0x4004aa28) */
/* WARNING: Removing unreachable block (ram,0x4004a930) */

void FUN_ram_4004a8d0(int *param_1,int *param_2,char param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_2[2] - *param_2;
  uVar3 = param_2[3] - param_2[1];
  iVar5 = *param_1;
  iVar4 = param_1[1];
  iVar1 = uVar3 + 1;
  iVar6 = uVar7 + 1;
  switch(param_3 + -2) {
  case '\0':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    goto LAB_ram_4004a966;
  case '\x01':
    uVar7 = (param_1[2] - iVar5) - uVar7;
    goto LAB_ram_4004a966;
  case '\x02':
    uVar3 = (param_1[3] - iVar4) - uVar3;
    break;
  case '\x03':
    iVar2 = ((param_1[2] - iVar5) + 1) / 2;
    uVar7 = iVar6 / 2;
    goto LAB_ram_4004a996;
  case '\x04':
    iVar2 = param_1[2] - iVar5;
LAB_ram_4004a996:
    uVar7 = iVar2 - uVar7;
    goto LAB_ram_4004a99a;
  case '\x05':
    uVar3 = ((param_1[3] - iVar4) + 1) / 2 - iVar1 / 2;
    break;
  case '\x06':
    uVar7 = (param_1[2] - iVar5) - uVar7;
    goto LAB_ram_4004a9ce;
  case '\a':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    uVar3 = ((param_1[3] - iVar4) + 1) / 2 - iVar1 / 2;
    goto LAB_ram_4004a938;
  case '\b':
    uVar3 = ~uVar3;
    break;
  case '\t':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    goto LAB_ram_4004a9fe;
  case '\n':
    uVar7 = (param_1[2] - iVar5) - uVar7;
LAB_ram_4004a9fe:
    uVar3 = ~uVar3;
    goto LAB_ram_4004a938;
  case '\v':
    uVar3 = (param_1[3] - iVar4) + 1;
    break;
  case '\f':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    goto LAB_ram_4004aa2e;
  case '\r':
    uVar7 = (param_1[2] - iVar5) - uVar7;
LAB_ram_4004aa2e:
    uVar3 = (param_1[3] - iVar4) + 1;
    goto LAB_ram_4004a938;
  case '\x0e':
    uVar7 = ~uVar7;
    goto LAB_ram_4004a966;
  case '\x0f':
    uVar7 = ~uVar7;
    goto LAB_ram_4004a9ce;
  case '\x10':
    uVar7 = ~uVar7;
    goto LAB_ram_4004a99a;
  case '\x11':
    uVar7 = (param_1[2] - iVar5) + 1;
LAB_ram_4004a966:
    uVar3 = 0;
    goto LAB_ram_4004a938;
  case '\x12':
    uVar7 = (param_1[2] - iVar5) + 1;
LAB_ram_4004a9ce:
    uVar3 = ((param_1[3] - iVar4) + 1) / 2 - iVar1 / 2;
    goto LAB_ram_4004a938;
  case '\x13':
    uVar7 = (param_1[2] - iVar5) + 1;
LAB_ram_4004a99a:
    uVar3 = (param_1[3] - iVar4) - uVar3;
    goto LAB_ram_4004a938;
  default:
    uVar3 = 0;
  }
  uVar7 = 0;
LAB_ram_4004a938:
  param_4 = param_4 + uVar7 + iVar5;
  param_5 = param_5 + uVar3 + iVar4;
  *param_2 = param_4;
  param_2[1] = param_5;
  param_2[2] = param_4 + iVar6 + -1;
  param_2[3] = param_5 + iVar1 + -1;
  return;
}


/* NanoCore 1.12, address 0x4004aa78.
 * REA evidence: ev_dae3d3e7241eab601c2d319f2b061756ae364bd2dee26e4ca2e9acc10208f167
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004ab96) */
/* WARNING: Removing unreachable block (ram,0x4004ab26) */
/* WARNING: Removing unreachable block (ram,0x4004ab9a) */

void FUN_ram_4004aa78(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                     int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((param_3 != 0) || (param_4 != 0x100)) || (param_5 != 0x100)) {
    for (iVar4 = 0; iVar4 != param_2; iVar4 = iVar4 + 1) {
      param_1[iVar4 * 2] = param_1[iVar4 * 2] - *param_6;
      param_1[iVar4 * 2 + 1] = param_1[iVar4 * 2 + 1] - param_6[1];
    }
    if (param_3 == 0) {
      for (iVar4 = 0; iVar4 != param_2; iVar4 = iVar4 + 1) {
        param_1[iVar4 * 2] = (param_4 * param_1[iVar4 * 2] >> 8) + *param_6;
        param_1[iVar4 * 2 + 1] = (param_5 * param_1[iVar4 * 2 + 1] >> 8) + param_6[1];
      }
    }
    else {
      if (param_3 < 0xe11) {
        if (param_3 < 0) {
          param_3 = param_3 + 0xe10;
        }
      }
      else {
        param_3 = param_3 + -0xe10;
      }
      iVar6 = param_3 / 10;
      param_3 = param_3 % 10;
      iVar4 = FUN_ram_4004b6b4((int)(short)iVar6);
      iVar2 = FUN_ram_4004b6b4((iVar6 + 1) * 0x10000 >> 0x10);
      iVar3 = FUN_ram_4004b6b4((iVar6 + 0x5a) * 0x10000 >> 0x10);
      iVar6 = FUN_ram_4004b6b4((iVar6 + 0x5b) * 0x10000 >> 0x10);
      iVar4 = (param_3 * iVar2 + (10 - param_3) * iVar4) / 10 >> 5;
      iVar2 = (param_3 * iVar6 + (10 - param_3) * iVar3) / 10 >> 5;
      for (iVar3 = 0; iVar3 != param_2; iVar3 = iVar3 + 1) {
        iVar6 = *param_1;
        iVar5 = param_1[1];
        iVar1 = *param_6;
        iVar7 = param_6[1];
        if ((param_4 == 0x100) && (param_5 == 0x100)) {
          *param_1 = (iVar2 * iVar6 - iVar4 * iVar5 >> 10) + iVar1;
          iVar6 = iVar2 * iVar5 + iVar4 * iVar6 >> 10;
        }
        else {
          if (param_7 == 0) {
            *param_1 = ((iVar2 * iVar6 - iVar4 * iVar5) * param_4 >> 0x12) + iVar1;
            iVar6 = (iVar2 * iVar5 + iVar4 * iVar6) * param_5;
          }
          else {
            *param_1 = (iVar2 * param_4 * iVar6 - iVar4 * param_5 * iVar5 >> 0x12) + iVar1;
            iVar6 = iVar2 * param_5 * iVar5 + iVar4 * param_4 * iVar6;
          }
          iVar6 = iVar6 >> 0x12;
        }
        param_1[1] = iVar6 + iVar7;
        param_1 = param_1 + 2;
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4004ac3c.
 * REA evidence: ev_6ca7ba3d32c3dd912da9c84878255b56999bae8ea32803df2c09033ab09608d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ac3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  FUN_ram_4004aa78(param_1,1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* NanoCore 1.12, address 0x4004ac4c.
 * REA evidence: ev_ffaf113c614489ae7fbfc60af8b65da7b8a0118a729b83f50d213e2ae79cfb9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ac4c(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  uVar1 = FUN_ram_4005a952(param_2 * param_3);
  *param_1 = uVar1;
  return;
}


/* NanoCore 1.12, address 0x4004ac6e.
 * REA evidence: ev_8e51be73ab79a524ce375f52028c62a4f999339e6af6fb1014c1fab3c40d56bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ac6e(int *param_1)

{
  if (*param_1 != 0) {
    FUN_ram_4005a988();
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* NanoCore 1.12, address 0x4004ac92.
 * REA evidence: ev_ab266da9a7a82987b007cbe44b13dc5db5a7405dcb61c1b307ed18ca3b5be6eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ac92(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4005a99a(*param_1,param_2 * param_1[3]);
  *param_1 = uVar1;
  param_1[2] = param_2;
  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  return;
}


/* NanoCore 1.12, address 0x4004acc0.
 * REA evidence: ev_c4974636c3dbd803f259de978f2ed3adea27ba445bd0e99376c8d8d47d27ad59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004acc0(int *param_1,undefined4 param_2)

{
  if (param_1[1] == param_1[2]) {
    FUN_ram_4004ac92(param_1,param_1[1] + 1);
  }
  thunk_FUN_ram_4000500c(*param_1 + param_1[3] * param_1[1],param_2);
  param_1[1] = param_1[1] + 1;
  return 1;
}


/* NanoCore 1.12, address 0x4004acfc.
 * REA evidence: ev_6707e88e8f41b3de9116d0d46d2fac040cf7b571f33be4540bf9ce9165f4f25a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004acfc(int *param_1,uint param_2)

{
  if (param_2 < (uint)param_1[1]) {
    return *param_1 + param_2 * param_1[3];
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004ad10.
 * REA evidence: ev_e46d93af441d7d7dcf25f94616b4a1a63490859e97d1b1313ba1311fda516d2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ad10(int param_1)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
  uVar2 = puVar1[1];
  FUN_ram_4004c712();
  FUN_ram_4005a988(puVar1);
                    /* WARNING: Could not recover jumptable at 0x4004ad3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


/* NanoCore 1.12, address 0x4004ad3c.
 * REA evidence: ev_e7675e19e476cae8c151acdb069ceb5d0551d4110c205644327ba172af607ff4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004ad3c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4005a952(8);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4004c6ac(FUN_ram_4004ad10,0,puVar1);
    if (iVar2 != 0) {
      *puVar1 = param_1;
      puVar1[1] = param_2;
      FUN_ram_4004c934(iVar2,1);
      return 1;
    }
    FUN_ram_4005a988(puVar1);
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004ad8a.
 * REA evidence: ev_c5e40e6f6d49cabd6e51c363546f3178dc64c53a3904b4cfded531b31580f2b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004ad8a(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_ram_4004c950(0);
  uVar4 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar3 = FUN_ram_4004c950(iVar1);
    if (((*(code **)(iVar1 + 8) == FUN_ram_4004ad10) &&
        (piVar2 = *(int **)(iVar1 + 0xc), *piVar2 == param_1)) && (piVar2[1] == param_2)) {
      FUN_ram_4004c712(iVar1);
      FUN_ram_4005a988(piVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x4004adf8.
 * REA evidence: ev_4a904df69b67477d2fcefba7f7c4aadcb2e3c48014b3ea2be10cb60e03dee575
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4004adf8(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 6U & 0xff;
  if (uVar1 < 0xf) {
    return (&DAT_ram_4009e560)[uVar1];
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004ae16.
 * REA evidence: ev_3ec010f389bb97948bf0bf2e19d6ac06663b17e08cd0cae9e813ad3e944106cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004ae16(uint param_1)

{
  if (param_1 < 0x15) {
    return (1 << (param_1 & 0x1f) & 0x117f80U) != 0;
  }
  return false;
}


/* NanoCore 1.12, address 0x4004ae36.
 * REA evidence: ev_d93b9af086b962854993adfe309a942d0f32edfd01ca5f10720493eccf5f3eaa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004ae36(uint param_1,int param_2)

{
  return param_1 & 0xffffff | param_2 << 0x18;
}


/* NanoCore 1.12, address 0x4004ae58.
 * REA evidence: ev_507b697476ea49528b62d52d4c60b52ab5b860e7a51445452117883206e46b93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ae58(uint param_1)

{
  return ((param_1 & 0xff) >> 3) +
         (((param_1 & 0xffffff) >> 0x10 & 0xfffff8) << 8 | param_1 >> 5 & 0x7e0);
}


/* NanoCore 1.12, address 0x4004ae7c.
 * REA evidence: ev_334175404bdd3977b0238ab9e730c3c6b32e3ad1571a9d5c0673a56e53b38e3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ae7c(uint param_1)

{
  return ((param_1 & 0xff) - 0x1000000) + (param_1 & 0xff0000) + (param_1 & 0xff00);
}


/* NanoCore 1.12, address 0x4004ae9e.
 * REA evidence: ev_76d215e09e399714b151f98329d5864598d15bed40e674566c180b4295186007
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004ae9e(int param_1)

{
  *(int *)(param_1 + 0x14) = _DAT_ram_30080d4c;
  _DAT_ram_30080d4c = param_1;
  return;
}


/* NanoCore 1.12, address 0x4004aeae.
 * REA evidence: ev_4099f5eff4db76aa75f99096855fd6cd36fa094019211db4f6642100b3387c57
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004aeae(int param_1)

{
  _DAT_ram_30080d4c = *(undefined4 *)(param_1 + 0x14);
  return;
}


/* NanoCore 1.12, address 0x4004aeba.
 * REA evidence: ev_a8cb4c3ded355068a88a69df54cbe01cab196bb11c5329c98a1b57e636e0b947
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4004aeba(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar3 = FUN_ram_4004acfc(param_1,0);
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = 0;
  do {
    if (iVar2 == iVar6) {
      return 1;
    }
    piVar4 = *(int **)(iVar3 + iVar2 * 4);
    if (((*piVar4 != 0) && ((piVar4[2] & 0xffffU) >> 0xf == param_3)) &&
       ((uVar5 = piVar4[2] & 0xffff7fff, uVar5 == 0 || (*(uint *)(param_2 + 8) == uVar5)))) {
      *(int *)(param_2 + 0xc) = piVar4[1];
      (*(code *)**(undefined4 **)(iVar3 + iVar2 * 4))(param_2);
      bVar1 = *(byte *)(param_2 + 0x18);
      if ((bVar1 & 2) != 0) {
        return 1;
      }
      if ((bVar1 & 1) != 0) {
        return bVar1 & 2;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


/* NanoCore 1.12, address 0x4004aec0.
 * REA evidence: ev_981e7f0641c2ff4248e6e23ccc63a3763a711de07e17a602363a079d7a06cbba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4004aec0(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = FUN_ram_4004acfc(param_1,0);
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = 0;
  do {
    if (iVar2 == iVar6) {
      return 1;
    }
    piVar4 = *(int **)(iVar3 + iVar2 * 4);
    if (((*piVar4 != 0) && ((piVar4[2] & 0xffffU) >> 0xf == param_3)) &&
       ((uVar5 = piVar4[2] & 0xffff7fff, uVar5 == 0 || (*(uint *)(param_2 + 8) == uVar5)))) {
      *(int *)(param_2 + 0xc) = piVar4[1];
      (*(code *)**(undefined4 **)(iVar3 + iVar2 * 4))(param_2);
      bVar1 = *(byte *)(param_2 + 0x18);
      if ((bVar1 & 2) != 0) {
        return 1;
      }
      if ((bVar1 & 1) != 0) {
        return bVar1 & 2;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


/* NanoCore 1.12, address 0x4004af40.
 * REA evidence: ev_c939e46a3420516f25b00ae9c28a10327d626ccd0021b4aa0b07103ab5bbc7eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4004af40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *apuStack_14 [3];
  
  apuStack_14[0] = (undefined4 *)FUN_ram_4005a952(0xc);
  iVar1 = *(int *)(param_1 + 4);
  *apuStack_14[0] = param_2;
  apuStack_14[0][2] = param_3;
  apuStack_14[0][1] = param_4;
  if (iVar1 == 0) {
    FUN_ram_4004ac4c(param_1,1,4);
  }
  FUN_ram_4004acc0(param_1,apuStack_14);
  return apuStack_14[0];
}


/* NanoCore 1.12, address 0x4004af82.
 * REA evidence: ev_1cf25dfc8ed3ffed51cf2f1ab80bfeb85f75b49fd26da8501a6d0af01e34c864
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004af82(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = FUN_ram_4004acfc(param_1,0);
  for (iVar1 = 0; iVar1 < iVar3; iVar1 = iVar1 + 1) {
    FUN_ram_4005a988(*(undefined4 *)(iVar2 + iVar1 * 4));
  }
  FUN_ram_4004ac6e(param_1);
  return;
}


/* NanoCore 1.12, address 0x4004afc0.
 * REA evidence: ev_dfc5037d41b3191141cb829bab454ce7ee2149e8a604350d68a0786f144f4ae3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004afc0(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.12, address 0x4004afc4.
 * REA evidence: ev_84b7b95fd63a7329f47f29691fff3735bf44102b620bada6c254b7754da73216
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004afc4(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* NanoCore 1.12, address 0x4004afc8.
 * REA evidence: ev_d6d0c4a3a093cf3e4c8e5a72806e76b158eae2490f1da022d3d87e0ea3038f45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004afc8(int param_1)

{
  return *(uint *)(param_1 + 8) & 0xffff7fff;
}


/* NanoCore 1.12, address 0x4004afd2.
 * REA evidence: ev_6598b2e8aaaad2b83235770ad0fcc35f0ddc1c629a916dde327b4de9b9026962
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004afd2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* NanoCore 1.12, address 0x4004afd6.
 * REA evidence: ev_848d39a142667654c13f11fb0c944cc2118a93c3495ab6e1202d661b30580962
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004afd6(int param_1)

{
  int *piVar1;
  
  for (piVar1 = _DAT_ram_30080d4c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    if ((piVar1[1] == param_1) || (*piVar1 == param_1)) {
      *(byte *)(piVar1 + 6) = *(byte *)(piVar1 + 6) | 1;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4004affe.
 * REA evidence: ev_ec30d3c3113317f08d4309bc1d84756030959738136c1fe4bc8597c0dee592e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004affe(void)

{
  FUN_ram_4004b436(0x30080e54,4);
  return;
}


