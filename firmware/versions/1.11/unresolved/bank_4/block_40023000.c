/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40023000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40023050.
 * REA evidence: ev_45231c4ca7b2c63c32d669774342658ce5e78bfb02606a0605f40855925947fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023050(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


/* NanoCore 1.11, address 0x40023054.
 * REA evidence: ev_0c95e5b92e2dadcc289645c0b19724c66dd70c42c57502770a3a52c8f969f77a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023054(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x40023058.
 * REA evidence: ev_8d1bcaafbbf834446793c00ccb54929f785a75d8b129d9eb8bb6e5a394c773cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40023058(void)

{
  return;
}


/* NanoCore 1.11, address 0x4002305a.
 * REA evidence: ev_fda3f232468eb80b97676ea6cd953fb02d037e27ef8c6e25f4c671f6e1d9eb89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002305a(uint param_1)

{
  if (param_1 < 8) {
    return (&DAT_ram_40095554)[param_1];
  }
  return 0;
}


/* NanoCore 1.11, address 0x40023072.
 * REA evidence: ev_50332af193fe77a4bc7a4a458a1f56058a475cc7bfc57ecfff84c9fe437f5efc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023072(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((9 < param_1) || (iVar1 = FUN_ram_4000dbb4(), iVar1 != 0)) {
    return 0xffffffff;
  }
  if ((param_2 == 0) || (iVar1 = FUN_ram_40023050(param_1,1), iVar1 != 0)) {
    uVar2 = FUN_ram_40022e34(param_1);
    iVar1 = FUN_ram_40022e1a(param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_40022fb6(param_1,param_2);
      if (iVar1 == 0) {
        FUN_ram_40014eb8();
        FUN_ram_40014ec4(param_1);
        uVar2 = 0;
        goto LAB_ram_400230c6;
      }
      FUN_ram_40022e1a(param_1,uVar2);
      FUN_ram_40022fb6(param_1,uVar2);
    }
  }
  uVar2 = 0xffffffff;
LAB_ram_400230c6:
  FUN_ram_4000dbec();
  return uVar2;
}


/* NanoCore 1.11, address 0x400230ec.
 * REA evidence: ev_151f97c042fc403fe9fa1fa2c86adf555e117ade0a6e71cf4a1ebfe884813d1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400230ec(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (9 < param_1) {
    return 0xffffffff;
  }
  uVar1 = FUN_ram_40022f10();
  iVar2 = FUN_ram_40022e50(param_1,param_2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  FUN_ram_40022f10(param_1);
  switch(param_1) {
  case 1:
    iVar2 = FUN_ram_4000bd16();
    break;
  case 2:
  case 3:
    goto switchD_ram_40023130_caseD_2;
  case 4:
    iVar2 = FUN_ram_4000c4fc();
    break;
  case 5:
    iVar2 = FUN_ram_4000cab8();
    break;
  case 6:
    iVar2 = FUN_ram_4000cd46();
    break;
  case 7:
    iVar2 = FUN_ram_4000cf04();
    break;
  case 8:
    iVar2 = FUN_ram_4000d208();
    break;
  case 9:
    iVar2 = FUN_ram_4000d076();
    break;
  default:
    iVar2 = FUN_ram_4000c360();
  }
  if (iVar2 == 0) {
switchD_ram_40023130_caseD_2:
    iVar2 = FUN_ram_40023054(param_1,0);
    if (iVar2 == 0) {
      FUN_ram_40014eb8();
      return 0;
    }
  }
  else {
    iVar2 = thunk_FUN_ram_40014e6a();
    if (iVar2 == 0) {
      uVar1 = FUN_ram_40023054(param_1,1);
      return uVar1;
    }
    FUN_ram_40022e50(param_1,uVar1);
    thunk_FUN_ram_40014e6a();
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x400230f6.
 * REA evidence: ev_3594e6cf7ff701fbfca3d224c0cfa3190546934f83e7bd301fe70575694e4f07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400230f6(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_40022f10();
  iVar2 = FUN_ram_40022e50(param_1,param_2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  FUN_ram_40022f10(param_1);
  switch(param_1) {
  case 1:
    iVar2 = FUN_ram_4000bd16();
    break;
  case 2:
  case 3:
    goto switchD_ram_40023130_caseD_2;
  case 4:
    iVar2 = FUN_ram_4000c4fc();
    break;
  case 5:
    iVar2 = FUN_ram_4000cab8();
    break;
  case 6:
    iVar2 = FUN_ram_4000cd46();
    break;
  case 7:
    iVar2 = FUN_ram_4000cf04();
    break;
  case 8:
    iVar2 = FUN_ram_4000d208();
    break;
  case 9:
    iVar2 = FUN_ram_4000d076();
    break;
  default:
    iVar2 = FUN_ram_4000c360();
  }
  if (iVar2 == 0) {
switchD_ram_40023130_caseD_2:
    iVar2 = FUN_ram_40023054(param_1,0);
    if (iVar2 == 0) {
      FUN_ram_40014eb8();
      return 0;
    }
  }
  else {
    iVar2 = thunk_FUN_ram_40014e6a();
    if (iVar2 == 0) {
      uVar1 = FUN_ram_40023054(param_1,1);
      return uVar1;
    }
    FUN_ram_40022e50(param_1,uVar1);
    thunk_FUN_ram_40014e6a();
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x400231a4.
 * REA evidence: ev_34a87676baae9348fc4a436889d72af6a4ecfb61682d95007d002ce5872f2736
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400231a4(float param_1,uint param_2,undefined4 param_3)

{
  undefined4 in_register_00000100;
  int iVar1;
  
  if (param_2 < 10) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    else if (DAT_ram_40094604 < param_1) {
      param_1 = DAT_ram_40094604;
    }
    FUN_ram_40022f90(param_2,param_3);
    iVar1 = FUN_ram_40022f42(param_1,param_2,param_3);
    if (iVar1 == 0) {
      switch(param_2) {
      case 1:
        iVar1 = FUN_ram_4000be82();
        break;
      case 2:
        iVar1 = FUN_ram_4000d216();
        break;
      case 3:
        iVar1 = FUN_ram_4000d2be();
        break;
      case 4:
        iVar1 = FUN_ram_4000c450();
        break;
      case 5:
        iVar1 = FUN_ram_4000ca10();
        break;
      case 6:
        iVar1 = FUN_ram_4000d34c();
        break;
      case 7:
        iVar1 = FUN_ram_4000ce54();
        break;
      case 8:
        iVar1 = FUN_ram_4000d15a();
        break;
      case 9:
        iVar1 = FUN_ram_4000cfc8(param_1,param_3);
        break;
      default:
        iVar1 = FUN_ram_4000c2b2(param_1,param_3);
      }
      if (iVar1 != 0) {
        FUN_ram_40022f42(in_register_00000100,param_2,param_3);
        return iVar1;
      }
      FUN_ram_40023058(param_2,param_3);
      return 0;
    }
  }
  return -1;
}


/* NanoCore 1.11, address 0x4002328c.
 * REA evidence: ev_f4e878b7b09a6dfab72518b4ca24af947cca011233de858f31685032041070dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002328c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uStack_34;
  undefined1 local_30 [8];
  undefined1 auStack_28 [20];
  
  uStack_34 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (iVar2 = FUN_ram_40022a9a(), iVar2 == 0)) {
    iVar2 = thunk_FUN_ram_40014e6a();
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_ram_40022a6a(local_30,8,&uStack_34);
    if ((iVar2 == 0) && (7 < uStack_34)) {
      iVar2 = 0;
      do {
        uVar1 = FUN_ram_4002305a(local_30[iVar2]);
        auStack_28[iVar2] = uVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 8);
      iVar2 = FUN_ram_4000d3fc(auStack_28,8);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_ram_40014eb8();
      return 0;
    }
  }
  return -1;
}


/* NanoCore 1.11, address 0x400232fe.
 * REA evidence: ev_6fdd4df4892b19d2986bc636535d74f12712b9c4e4fd08070231ed4db03c64da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002333c) */
/* WARNING: Removing unreachable block (ram,0x40023342) */
/* WARNING: Removing unreachable block (ram,0x4002334c) */
/* WARNING: Removing unreachable block (ram,0x4002335a) */

undefined4 FUN_ram_400232fe(int param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (((param_1 != 0) && (*(code **)(param_1 + 0x10) != (code *)0x0)) && (param_2 != 0)) {
    (**(code **)(param_1 + 0x10))(*param_4,param_2,param_3);
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x400233a0.
 * REA evidence: ev_e66c9d1a6fc6b0ddeb76a68e5c76be8f704678d29e40bec59112bdbabca4c020
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400233a0(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((param_1 == 0) || (param_3 == (undefined1 *)0x0)) ||
      (*(code **)(param_1 + 0x28) == (code *)0x0)) ||
     (((*(int *)(param_1 + 0x2c) == 0 ||
       (iVar1 = (**(code **)(param_1 + 0x28))(param_2), iVar1 != 0)) ||
      (iVar1 = (**(code **)(param_1 + 0x2c))(), param_2 != iVar1)))) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_3 = (char)param_2;
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x400233e6.
 * REA evidence: ev_3ecbb8ba0fffb9c709d075510944eafac82436489c52861fbf0bb5e540f2a6d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400233e6(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((param_1 == 0) || (param_3 == (undefined1 *)0x0)) ||
      (*(code **)(param_1 + 0x30) == (code *)0x0)) ||
     (((*(int *)(param_1 + 0x34) == 0 ||
       (iVar1 = (**(code **)(param_1 + 0x30))(param_2), iVar1 != 0)) ||
      (iVar1 = (**(code **)(param_1 + 0x34))(), param_2 != iVar1)))) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_3 = (char)param_2;
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4002347a.
 * REA evidence: ev_dea41771c2ed7d245bca860f60941d852f00b94e5cf5c8c587feacbdbd69043e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002347a(int param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  byte abStack_21 [13];
  
  bVar2 = (byte)param_2;
  if ((((param_1 == 0) || (param_3 == (byte *)0x0)) || (*(code **)(param_1 + 0x40) == (code *)0x0))
     || (abStack_21[0] = bVar2, iVar1 = (**(code **)(param_1 + 0x40))(param_2), iVar1 != 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((*(code **)(param_1 + 0x44) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x44))(abStack_21), iVar1 != 0)) {
      abStack_21[0] = bVar2;
    }
    if (0x3f < abStack_21[0]) {
      abStack_21[0] = bVar2;
    }
    *param_3 = abStack_21[0];
    FUN_ram_40022b4c();
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x400234e0.
 * REA evidence: ev_7167d6a88b714ee40e344bb11e6b57560a654d6392e99a613d4b5b671c74b487
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400234e0(int param_1,int param_2,uint param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  uint auStack_24 [3];
  
  auStack_24[0] = 0;
  if (((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) &&
      ((param_5 != (undefined1 *)0x0 && (*(int *)(param_1 + 0x24) != 0)))) &&
     (iVar1 = FUN_ram_4002328c(param_2,param_3), iVar1 == 0)) {
    (**(code **)(param_1 + 0x24))(param_2,param_3);
    iVar1 = FUN_ram_40022a6a(param_4,0x10,auStack_24);
    if ((iVar1 == 0) && (param_3 <= auStack_24[0])) {
      *param_5 = (char)param_3;
      FUN_ram_40022b66(param_4,param_3);
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40023550.
 * REA evidence: ev_22e42c5916279d4370efd91b5fa5bd52df6770bbb5e9de14c6e6eae590e11fa9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40023550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_ram_400230ec(param_2,param_4);
  if (iVar3 == 0) {
    (**(code **)(param_1 + 4))(param_3,param_4);
    uVar4 = FUN_ram_4002662a(param_2,param_4,1);
    if (0xc < uVar4) {
      uVar4 = 0xc;
    }
    for (uVar1 = 0; (uVar4 & 0xff) != uVar1; uVar1 = uVar1 + 1 & 0xff) {
      iVar3 = FUN_ram_400267aa(param_2,param_4,uVar1,1);
      if (iVar3 == 0xff) {
        return;
      }
      iVar3 = FUN_ram_400231a4(*(undefined8 *)(param_5 + iVar3 * 4),param_2,iVar3);
      if (iVar3 != 0) {
        return;
      }
    }
    iVar3 = 0;
    do {
      iVar2 = iVar3 + 1;
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_5 + iVar3 * 4),param_3,iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 0xc);
  }
  return;
}


/* NanoCore 1.11, address 0x400235fc.
 * REA evidence: ev_b60e43b55de4763c725aa5101344f09cb3cf9ca53e9ef75a7fb8a2b08161ead9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400235fc(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = FUN_ram_400251a8();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002360a.
 * REA evidence: ev_80d54f8e23ff3aea8b433710cce2039ac7f26b74eb1bbea3bf89fb54e61af660
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002360a(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_ram_400235fc(param_2);
  if ((((param_1 == 0) || (iVar3 == 0)) || (param_4 == (undefined1 *)0x0)) ||
     (((*(int *)(param_1 + 8) == 0 || (*(int *)(param_1 + 0xc) == 0)) ||
      (iVar4 = FUN_ram_40023072(param_2,param_3), iVar4 != 0)))) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(param_1 + 0xc))(iVar3,param_3);
    uVar2 = (**(code **)(param_1 + 8))(iVar3);
    *param_4 = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4002366c.
 * REA evidence: ev_6f1a14cdaba43eac0a095097c4133ef85ac6878cc93a38cea4de6ce89454ef51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002366c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                undefined1 *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 local_ac [12];
  undefined4 local_a0 [12];
  undefined4 local_70 [15];
  
  iVar2 = FUN_ram_400235fc(param_2);
  if (((((param_1 != (int *)0x0) && (iVar2 != 0)) && (param_6 != (undefined1 *)0x0)) &&
      ((*param_1 != 0 && (param_1[1] != 0)))) &&
     ((param_1[4] != 0 && ((param_1[5] != 0 && (param_1[6] != 0)))))) {
    uVar3 = FUN_ram_4002523e(param_2,param_3);
    uVar4 = FUN_ram_4002662a(param_2,uVar3,1);
    if (param_5 <= uVar4) {
      uVar5 = (*(code *)*param_1)(iVar2);
      iVar6 = 0;
      puVar7 = local_70;
      do {
        uVar9 = (*(code *)param_1[5])(iVar2,iVar6);
        *puVar7 = uVar9;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0xc);
      puVar8 = local_a0;
      puVar7 = puVar8;
      for (uVar4 = 0; uVar4 != param_5; uVar4 = uVar4 + 1) {
        iVar6 = FUN_ram_400267aa(param_2,uVar3,uVar4 & 0xff,1);
        local_ac[uVar4] = (char)iVar6;
        if (iVar6 == 0xff) {
          return 0xfffffffe;
        }
        *puVar7 = (int)*(undefined8 *)(param_4 + uVar4 * 4);
        puVar7 = puVar7 + 1;
      }
      iVar6 = FUN_ram_400230ec(param_2,uVar3);
      if (iVar6 == 0) {
        (*(code *)param_1[1])(iVar2,uVar3);
        uVar4 = 0;
        puVar7 = puVar8;
        while (uVar4 != param_5) {
          iVar6 = FUN_ram_400232fe(param_1,iVar2,local_ac[uVar4],puVar7);
          uVar4 = uVar4 + 1;
          puVar7 = puVar7 + 1;
          if (iVar6 == 0) {
            FUN_ram_40023550(param_1,param_2,iVar2,uVar5,local_70);
            return 0xfffffffe;
          }
        }
        uVar4 = 0;
        while( true ) {
          if (uVar4 == param_5) {
            uVar1 = (*(code *)*param_1)(iVar2);
            *param_6 = uVar1;
            return 0;
          }
          uVar1 = local_ac[uVar4];
          iVar6 = FUN_ram_400231a4(*puVar8,param_2);
          if (iVar6 != 0) break;
          uVar4 = uVar4 + 1;
          (*(code *)param_1[6])(*puVar8,iVar2,uVar1);
          puVar8 = puVar8 + 1;
        }
        FUN_ram_40023550(param_1,param_2,iVar2,uVar5,local_70);
      }
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x400237e2.
 * REA evidence: ev_057279ed2ec5e697e18bd9f33feb01f239ce80dbb4900ec756cc9b25ab3959e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400237e2(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_24 = param_1;
  iVar1 = FUN_ram_400235fc(param_3);
  if (((((param_2 != (undefined4 *)0x0) && (iVar1 != 0)) && (param_5 != (undefined4 *)0x0)) &&
      (((code *)*param_2 != (code *)0x0 && (param_2[4] != 0)))) &&
     ((param_2[5] != 0 && (param_2[6] != 0)))) {
    uVar2 = (*(code *)*param_2)();
    uVar3 = FUN_ram_4002662a(param_3,uVar2,1);
    if (param_4 < uVar3) {
      iVar4 = FUN_ram_400267aa(param_3,uVar2,param_4,1);
      if ((iVar4 == 0xff) || (iVar5 = FUN_ram_400232fe(param_2,iVar1,iVar4,&uStack_24), iVar5 == 0))
      {
        return 0xfffffffe;
      }
      iVar5 = FUN_ram_400231a4(CONCAT44(uStack_20,uStack_24),param_3,iVar4);
      if (iVar5 == 0) {
        (*(code *)param_2[6])(CONCAT44(uStack_20,uStack_24),iVar1,iVar4);
        uVar2 = (*(code *)param_2[5])(iVar1,iVar4);
        *param_5 = uVar2;
        return 0;
      }
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4002388e.
 * REA evidence: ev_0e2de04e11df9de57b5ff5d14ae3705d38ae32425ffcb3575d5fa93568864748
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002388e(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400235fc(param_2);
  if (((param_1 != (undefined4 *)0x0) && (iVar1 != 0)) && ((code *)*param_1 != (code *)0x0)) {
    uVar2 = (*(code *)*param_1)();
    uVar2 = FUN_ram_4002662a(param_2,uVar2,1);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.11, address 0x400238c8.
 * REA evidence: ev_85ef390f96c3aaa5c3e588144e892d8db7e52dbf1cccf852b3a0adacecc526d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400238c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 *param_8)

{
  uint uVar1;
  int *piStack_44;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined2 uStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  code *pcStack_18;
  
  if (param_1 == (int *)0x0) {
    if (param_8 != (undefined1 *)0x0) {
      *param_8 = 1;
    }
    return (uint)(param_8 != (undefined1 *)0x0);
  }
  memset(&uStack_40,0,0x30);
  uStack_3e = 0x10;
  uStack_3c = 0x3ff;
  uStack_40 = 0x4008;
  if (*param_1 != 0) {
    if (((param_1[4] != 0) && (param_1[5] != 0)) && (param_1[6] != 0)) {
      pcStack_38 = FUN_ram_400237e2;
    }
    if (((param_1[1] != 0) && (param_1[4] != 0)) && ((param_1[5] != 0 && (param_1[6] != 0)))) {
      pcStack_34 = FUN_ram_4002366c;
    }
  }
  if ((param_1[2] != 0) && (param_1[3] != 0)) {
    pcStack_30 = FUN_ram_4002360a;
  }
  if ((param_1[7] != 0) && (param_1[8] != 0)) {
    puStack_2c = &LAB_ram_40023360;
  }
  if (param_1[9] != 0) {
    pcStack_28 = FUN_ram_400234e0;
  }
  if ((param_1[10] != 0) && (param_1[0xb] != 0)) {
    pcStack_24 = FUN_ram_400233a0;
  }
  if ((param_1[0xc] != 0) && (param_1[0xd] != 0)) {
    pcStack_20 = FUN_ram_400233e6;
  }
  if ((param_1[0xe] != 0) && (param_1[0xf] != 0)) {
    puStack_1c = &LAB_ram_4002342c;
  }
  if (param_1[0x10] != 0) {
    pcStack_18 = FUN_ram_4002347a;
  }
  piStack_44 = param_1;
  uVar1 = FUN_ram_40023a58(&piStack_44,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}


/* NanoCore 1.11, address 0x400238da.
 * REA evidence: ev_69b87a4cdc37a37f59cd9152f2157a821aa3cf038836ce227f423436c6c01c2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400238da(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piStack_44;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined2 uStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  code *pcStack_18;
  
  memset(&uStack_40,0,0x30);
  uStack_3e = 0x10;
  uStack_3c = 0x3ff;
  uStack_40 = 0x4008;
  if (*param_1 != 0) {
    if (((param_1[4] != 0) && (param_1[5] != 0)) && (param_1[6] != 0)) {
      pcStack_38 = FUN_ram_400237e2;
    }
    if (((param_1[1] != 0) && (param_1[4] != 0)) && ((param_1[5] != 0 && (param_1[6] != 0)))) {
      pcStack_34 = FUN_ram_4002366c;
    }
  }
  if ((param_1[2] != 0) && (param_1[3] != 0)) {
    pcStack_30 = FUN_ram_4002360a;
  }
  if ((param_1[7] != 0) && (param_1[8] != 0)) {
    puStack_2c = &LAB_ram_40023360;
  }
  if (param_1[9] != 0) {
    pcStack_28 = FUN_ram_400234e0;
  }
  if ((param_1[10] != 0) && (param_1[0xb] != 0)) {
    pcStack_24 = FUN_ram_400233a0;
  }
  if ((param_1[0xc] != 0) && (param_1[0xd] != 0)) {
    pcStack_20 = FUN_ram_400233e6;
  }
  if ((param_1[0xe] != 0) && (param_1[0xf] != 0)) {
    puStack_1c = &LAB_ram_4002342c;
  }
  if (param_1[0x10] != 0) {
    pcStack_18 = FUN_ram_4002347a;
  }
  piStack_44 = param_1;
  FUN_ram_40023a58(&piStack_44,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


/* NanoCore 1.11, address 0x400239de.
 * REA evidence: ev_7c56b39ad341a394ee3ac95665ed96907a5f8b2616df0d91125e70ee5b058fc4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400239de(undefined4 *param_1)

{
  if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400239e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[0xc])(*param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400239e8.
 * REA evidence: ev_7b35b5fc8f005e056f9153ddf642ea51305aeca85956c678147db0cebbda9922
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40023a2a) */
/* WARNING: Removing unreachable block (ram,0x40023a30) */
/* WARNING: Removing unreachable block (ram,0x40023a52) */
/* WARNING: Removing unreachable block (ram,0x40023a3a) */
/* WARNING: Removing unreachable block (ram,0x40023a48) */
/* WARNING: Removing unreachable block (ram,0x40023a4c) */

undefined4 FUN_ram_400239e8(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x40023a58.
 * REA evidence: ev_6e98b96ccfc3b1f9533e4e4853bb8bbbfbdf04721340c32237e75a9f73a29531
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40023b9e) */
/* WARNING: Removing unreachable block (ram,0x40023ba4) */
/* WARNING: Removing unreachable block (ram,0x40023bb2) */
/* WARNING: Removing unreachable block (ram,0x40023bc0) */
/* WARNING: Removing unreachable block (ram,0x40023bf4) */
/* WARNING: Removing unreachable block (ram,0x40023bf8) */

undefined4
FUN_ram_40023a58(undefined4 *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
                undefined4 *param_6,int *param_7,char *param_8)

{
  undefined2 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  uint *puVar10;
  code *pcVar11;
  byte bStack_75;
  uint local_74 [4];
  undefined1 uStack_64;
  uint local_60 [4];
  undefined1 uStack_50;
  
  if (param_8 == (char *)0x0) {
    return 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  if ((((((param_1 == (undefined4 *)0x0) || (param_2 == (char *)0x0)) || (param_3 == 0)) ||
       ((param_4 == (char *)0x0 || (param_5 < 5)))) || (0xf < (byte)(*(char *)(param_1 + 1) - 1U)))
     || (0x10 < *(byte *)((int)param_1 + 6))) {
    *param_8 = '\x01';
    return 1;
  }
  cVar9 = *param_2;
  *param_4 = cVar9;
  switch(cVar9) {
  case '\0':
    if (param_3 == 1) {
      param_4[1] = '\x04';
      uVar1 = *(undefined2 *)(param_1 + 2);
      param_4[2] = (char)uVar1;
      param_4[3] = (char)((ushort)uVar1 >> 8);
      param_4[4] = *(char *)(param_1 + 1);
      *param_8 = '\0';
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = param_4;
      }
      if (param_7 == (int *)0x0) {
        return 1;
      }
      *param_7 = 5;
      return 1;
    }
    cVar9 = '\x01';
    goto LAB_ram_40023a9e;
  case '\x01':
    local_60[0] = 0;
    if (((param_3 == 7) && (6 < param_5)) &&
       (iVar2 = FUN_ram_400239e8(param_2 + 3,local_74), iVar2 != 0)) {
      if ((code *)param_1[3] != (code *)0x0) {
        if ((((byte)param_2[1] < *(byte *)(param_1 + 1)) && ((byte)param_2[2] < 0xc)) &&
           (iVar2 = (*(code *)param_1[3])
                              (CONCAT44(local_74[1],local_74[0]),*param_1,param_2[1],param_2[2],
                               local_60), iVar2 != 0)) {
          if (iVar2 != -2) {
            cVar9 = '\x03';
          }
LAB_ram_40023c0a:
          *param_8 = cVar9;
          return 1;
        }
LAB_ram_40023b66:
        cVar8 = '\x03';
        goto LAB_ram_40023cdc;
      }
LAB_ram_40023c36:
      cVar8 = '~';
      goto LAB_ram_40023cdc;
    }
    break;
  case '\x02':
    local_74[0] = local_74[0] & 0xffffff00;
    if (param_3 == 3) {
      uVar6 = 0;
    }
    else if (((param_3 < 4) || (uVar6 = (uint)(byte)param_2[3], (uVar6 + 1) * 4 != param_3)) ||
            (0xc < uVar6)) break;
    if (param_1[4] == 0) goto LAB_ram_40023c36;
    bVar3 = param_2[1];
    if (*(byte *)(param_1 + 1) <= bVar3) goto LAB_ram_40023b66;
    puVar10 = local_60;
    cVar9 = param_2[2];
    uVar5 = 0;
    do {
      param_2 = param_2 + 4;
      if (uVar6 == uVar5) {
        iVar2 = (*(code *)param_1[4])(*param_1,bVar3);
        if (iVar2 != 0) goto LAB_ram_40023c6c;
        param_4[1] = bVar3;
        uVar4 = 2;
        param_4[2] = (char)local_74[0];
        goto LAB_ram_40023ca4;
      }
      iVar2 = FUN_ram_400239e8(param_2,puVar10,cVar9,local_60);
      uVar5 = uVar5 + 1 & 0xff;
      puVar10 = puVar10 + 1;
    } while (iVar2 != 0);
    break;
  case '\x03':
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    if (param_3 == 3) {
      if ((code *)param_1[5] != (code *)0x0) {
        bVar3 = param_2[1];
        cVar8 = '\x03';
        if (*(byte *)(param_1 + 1) <= bVar3) goto LAB_ram_40023cdc;
        iVar2 = (*(code *)param_1[5])(*param_1,bVar3,param_2[2] != '\0',local_60);
        if (iVar2 != 0) {
          if (iVar2 == -2) {
            cVar9 = '\x01';
          }
          goto LAB_ram_40023c0a;
        }
        param_4[1] = bVar3;
        uVar4 = 3;
        param_4[2] = (char)local_60[0];
LAB_ram_40023ca4:
        FUN_ram_400239de(param_1,uVar4);
        *param_8 = '\0';
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = param_4;
        }
        iVar2 = 3;
joined_r0x40023df8:
        if (param_7 == (int *)0x0) {
          return 1;
        }
LAB_ram_40023cbc:
        *param_7 = iVar2;
        return 1;
      }
      goto LAB_ram_40023c36;
    }
    break;
  case '\x04':
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    if (param_3 == 2) {
      if ((code *)param_1[6] != (code *)0x0) {
        bVar3 = param_2[1];
        if (100 < bVar3) {
          bVar3 = 100;
        }
        iVar2 = (*(code *)param_1[6])(*param_1,bVar3,local_60);
        if (iVar2 == 0) {
          if ((local_60[0] & 0xff) < 0x65) {
            param_4[1] = (char)local_60[0];
            cVar9 = '\x04';
LAB_ram_40023d4e:
            FUN_ram_400239de(param_1,cVar9);
            *param_8 = '\0';
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = param_4;
            }
            if (param_7 == (int *)0x0) {
              return 1;
            }
            iVar2 = 2;
            goto LAB_ram_40023cbc;
          }
        }
        else {
LAB_ram_40023c6c:
          cVar8 = '\x01';
          if (iVar2 == -2) goto LAB_ram_40023cdc;
        }
        goto LAB_ram_40023b66;
      }
      goto LAB_ram_40023c36;
    }
    break;
  case '\x05':
    bStack_75 = 0;
    if (((param_3 != 1) && (uVar6 = (uint)*(byte *)(param_1 + 1), uVar6 == (byte)param_2[1])) &&
       ((uVar6 + 2 == param_3 && (param_3 <= param_5)))) {
      if ((code *)param_1[7] != (code *)0x0) {
        iVar2 = (*(code *)param_1[7])(*param_1,param_2 + 2,uVar6,local_74,&bStack_75);
        if (iVar2 != 0) goto LAB_ram_40023c6c;
        uVar5 = (uint)bStack_75;
        if (uVar5 == uVar6) {
          local_60[0] = 0;
          local_60[1] = 0;
          local_60[2] = 0;
          local_60[3] = 0;
          uVar6 = 0;
          if ((uVar5 - 1 & 0xff) < 0x10) {
            while ((uVar6 & 0xff) < uVar5) {
              uVar7 = (uint)*(byte *)((int)local_74 + uVar6);
              if ((uVar5 <= uVar7) || (uVar6 = uVar6 + 1, *(char *)((int)local_60 + uVar7) != '\0'))
              goto LAB_ram_40023b66;
              *(undefined1 *)((int)local_60 + uVar7) = 1;
            }
            param_4[1] = bStack_75;
            FUN_ram_4000304c(param_4 + 2,local_74);
            FUN_ram_400239de(param_1,5);
            *param_8 = '\0';
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = param_4;
            }
            iVar2 = bStack_75 + 2;
            goto joined_r0x40023df8;
          }
        }
        goto LAB_ram_40023b66;
      }
      goto LAB_ram_40023c36;
    }
    break;
  case '\x06':
  case '\a':
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    if (param_3 == 2) {
      if (cVar9 == '\x06') {
        pcVar11 = (code *)param_1[8];
      }
      else {
        pcVar11 = (code *)param_1[9];
      }
      if (pcVar11 != (code *)0x0) {
        cVar8 = param_2[1];
        iVar2 = (*pcVar11)(*param_1,cVar8,local_60);
        if (iVar2 != 0) goto LAB_ram_40023c6c;
        if ((char)local_60[0] == cVar8) {
          param_4[1] = (char)local_60[0];
          goto LAB_ram_40023d4e;
        }
        goto LAB_ram_40023b66;
      }
      goto LAB_ram_40023c36;
    }
    break;
  case '\b':
    if (((param_3 != 1) && (uVar6 = (uint)*(byte *)((int)param_1 + 6), uVar6 != 0)) &&
       (uVar6 + 2 <= param_5)) {
      pcVar11 = (code *)param_1[10];
      if (pcVar11 == (code *)0x0) goto LAB_ram_40023c36;
      uVar5 = (uint)(byte)param_2[1];
      if ((uVar5 <= uVar6) && (uVar5 + 2 == param_3)) {
        local_60[0] = 0;
        local_74[0] = 0;
        local_74[1] = 0;
        local_74[2] = 0;
        local_74[3] = 0;
        uStack_64 = 0;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        uStack_50 = 0;
        if (uVar5 != 0) {
          FUN_ram_4000304c(local_74,param_2 + 2);
        }
        iVar2 = (*pcVar11)(*param_1,local_74,local_60,0x11);
        if (iVar2 == 0) {
          uVar6 = 0;
          do {
            uVar5 = uVar6;
            if ((uint)*(byte *)((int)param_1 + 6) <= (uVar5 & 0xff)) break;
            uVar6 = uVar5 + 1;
          } while (*(char *)((int)local_60 + uVar5) != '\0');
          param_4[1] = (char)uVar5;
          if ((uVar5 & 0xff) != 0) {
            FUN_ram_4000304c(param_4 + 2,local_60,uVar5);
          }
          FUN_ram_400239de(param_1,8);
          *param_8 = '\0';
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = param_4;
          }
          if (param_7 == (int *)0x0) {
            return 1;
          }
          *param_7 = uVar5 + 2;
          return 1;
        }
        goto LAB_ram_40023c6c;
      }
    }
    break;
  case '\t':
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    if ((param_3 == 2) && (*(byte *)((int)param_1 + 5) != 0)) {
      if ((code *)param_1[0xb] != (code *)0x0) {
        if ((byte)param_2[1] < *(byte *)((int)param_1 + 5)) {
          iVar2 = (*(code *)param_1[0xb])(*param_1,param_2[1],local_60);
          if (iVar2 != 0) goto LAB_ram_40023c6c;
          if ((local_60[0] & 0xff) < (uint)*(byte *)((int)param_1 + 5)) {
            param_4[1] = (char)local_60[0];
            cVar9 = '\t';
            goto LAB_ram_40023d4e;
          }
        }
        goto LAB_ram_40023b66;
      }
      goto LAB_ram_40023c36;
    }
    break;
  default:
    cVar9 = '~';
LAB_ram_40023a9e:
    *param_8 = cVar9;
    return 1;
  }
  cVar8 = '\x01';
LAB_ram_40023cdc:
  *param_8 = cVar8;
  return 1;
}


/* NanoCore 1.11, address 0x40023f52.
 * REA evidence: ev_2f35816edbce88df31f9bdfe547fdc8cfa23f31d33bc5779c639f3e94d1026c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023f52(void)

{
  DAT_ram_30049e3c = 0xff;
  _DAT_ram_3006bae8 = 0;
  return;
}


/* NanoCore 1.11, address 0x40023f66.
 * REA evidence: ev_cbc678034fdd54f52613b1fc4074e9f73e865ab5eaec8879dff3bde58c05f3e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023f66(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    DAT_ram_30049e3c = (undefined1)param_1;
    iVar1 = FUN_ram_400042ea();
    iVar2 = FUN_ram_40004352(5000);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    _DAT_ram_3006bae8 = iVar2 + iVar1;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40023fa2.
 * REA evidence: ev_8ca7ea6df5f600e2fea7e49c83a4e082d13d86edce0639f8cba5462ccc44c839
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_40023fa2(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3006bae8;
  if ((DAT_ram_30049e3c == -1) ||
     (iVar3 = FUN_ram_400042ea(), cVar2 = DAT_ram_30049e3c, iVar1 - iVar3 < 1)) {
    cVar2 = -1;
  }
  return cVar2;
}


/* NanoCore 1.11, address 0x40023fe4.
 * REA evidence: ev_d3aeda9d5edae93d6f85bb3548dc8e848152b0fad5ddd524c7dcc5565d32fcca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023fe4(void)

{
  return 5000;
}


/* NanoCore 1.11, address 0x40023fec.
 * REA evidence: ev_9076b4b96c606702eb1dca9bfa6c4209b31d11b24c7b69e039b59b9bd57f1fec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40023fec(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40023fa2();
  if (uVar1 != 0xff) {
    if (uVar1 == 1) {
      if (param_2 != 0) {
        return 1;
      }
    }
    else if ((uVar1 & 0xfd) == 0) {
      if (param_1 != 0) {
        return uVar1;
      }
      return 0xff;
    }
  }
  return -(param_1 ^ 1) & 0xff;
}


