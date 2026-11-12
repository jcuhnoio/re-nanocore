/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4004a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4004a192.
 * REA evidence: ev_24378cd4aef29c598c0b1d81e6e9a54beb8fe933fa7a66675db95316a59a0504
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004a192(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 auStack_14 [3];
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = 0xb;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x1c);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      iVar1 = 9;
    }
    else {
      if (*(int *)(iVar1 + 4) == 0) {
LAB_ram_4004a1f4:
                    /* WARNING: Could not recover jumptable at 0x4004a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*UNRECOVERED_JUMPTABLE)(iVar1,*param_1,param_2,param_3);
        return iVar1;
      }
      if (param_3 == 1) {
        puVar2 = (uint *)param_1[2];
        param_2 = puVar2[2] + param_2;
        puVar2[2] = param_2;
        if ((param_2 < *puVar2) || (puVar2[1] < param_2)) {
          param_3 = 0;
          goto LAB_ram_4004a1f4;
        }
      }
      else {
        if (param_3 == 2) {
          iVar1 = (*UNRECOVERED_JUMPTABLE)(iVar1,*param_1,param_2,2);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (**(code **)(param_1[1] + 0x20))(param_1[1],*param_1,auStack_14);
          if (iVar1 != 0) {
            return iVar1;
          }
          *(undefined4 *)(param_1[2] + 8) = auStack_14[0];
          return 0;
        }
        if (param_3 != 0) {
          return 0;
        }
        puVar2 = (uint *)param_1[2];
        puVar2[2] = param_2;
        if ((param_2 < *puVar2) || (puVar2[1] < param_2)) {
          param_3 = 0;
          goto LAB_ram_4004a1f4;
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004a228.
 * REA evidence: ev_ca46b73ff25623634fbd62a6d11067002c5cf560301dfd5698aec3ce76bb5f79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a228(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    *param_2 = 0;
    return 0xb;
  }
  if (*(code **)(iVar2 + 0x20) == (code *)0x0) {
    *param_2 = 0;
    return 9;
  }
  if (*(int *)(iVar2 + 4) != 0) {
    *param_2 = *(undefined4 *)(param_1[2] + 8);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x4004a254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(iVar2 + 0x20))(iVar2,*param_1,param_2);
  return uVar1;
}


/* NanoCore 1.10, address 0x4004a256.
 * REA evidence: ev_8e4b2d820d4f0a7523bad135fa9cbe0bfebbc584351f9292943c849171045797
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a256(undefined4 param_1)

{
  thunk_FUN_ram_4000505c(param_1,0,0x34);
  return;
}


/* NanoCore 1.10, address 0x4004a260.
 * REA evidence: ev_236dfb3023307b568330f13753c1ba8a22d3338641d4a42ceb25ee9b408c95e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a260(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_4004a3dc(0x3007fa54);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


/* NanoCore 1.10, address 0x4004a27e.
 * REA evidence: ev_02ef21924408cec1f426700abe384ff25442eb1f8ca3b156f96cb0bf009769c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte * FUN_ram_4004a27e(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_4004a5a6(0x3007fa54);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (byte *)0x0;
    }
    if (*(byte *)*puVar1 == param_1) break;
    puVar1 = (undefined4 *)FUN_ram_4004a5b2(0x3007fa54);
  }
  return (byte *)*puVar1;
}


/* NanoCore 1.10, address 0x4004a2bc.
 * REA evidence: ev_7e6dbc242cca6b596ea4510746ebc26af9a149b97b26e5046e36471b4c5592b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a2bc(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 == (undefined1 *)0x0) {
    return 0xb;
  }
  iVar1 = FUN_ram_4004a27e(*param_2);
  uVar6 = 3;
  if (iVar1 != 0) {
    if ((*(code **)(iVar1 + 8) != (code *)0x0) && (iVar3 = (**(code **)(iVar1 + 8))(), iVar3 == 0))
    {
      return 1;
    }
    pcVar4 = *(code **)(iVar1 + 0xc);
    uVar6 = 9;
    if (pcVar4 != (code *)0x0) {
      iVar3 = *(int *)(iVar1 + 4);
      param_1[1] = iVar1;
      if (iVar3 == -1) {
        *param_1 = (int)param_1;
      }
      else {
        iVar3 = 2;
        if (param_2[1] != ':') {
          iVar3 = 1;
        }
        iVar3 = (*pcVar4)(iVar1,param_2 + iVar3,param_3);
        if (0xfffffffd < iVar3 - 1U) {
          return 0xc;
        }
        iVar5 = *(int *)(iVar1 + 4);
        *param_1 = iVar3;
        if (iVar5 == 0) {
          return 0;
        }
      }
      puVar2 = (undefined4 *)FUN_ram_40059bbc(0x10);
      iVar1 = *(int *)(iVar1 + 4);
      param_1[2] = (int)puVar2;
      if (iVar1 == -1) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        *puVar2 = 0;
        puVar2[2] = 0;
        puVar2[3] = uVar6;
        uVar6 = *(undefined4 *)(param_2 + 8);
      }
      else {
        *puVar2 = 0xffffffff;
        uVar6 = 0xfffffffe;
      }
      puVar2[1] = uVar6;
      uVar6 = 0;
    }
  }
  return uVar6;
}


/* NanoCore 1.10, address 0x4004a374.
 * REA evidence: ev_e39c39d1791f4adc9af7e481ccb36e5599efccf257e75e588910324b0b81fd86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_4004a374(int param_1)

{
  char cVar1;
  int iVar2;
  
  for (iVar2 = thunk_FUN_ram_40005244(); iVar2 != 0; iVar2 = iVar2 + -1) {
    cVar1 = *(char *)(param_1 + iVar2);
    if (cVar1 == '.') {
      return (char *)(iVar2 + 1 + param_1);
    }
    if ((cVar1 == '/') || (cVar1 == '\\')) break;
  }
  return s_ep__02x_clear_halt_ram_40092960 + 0x14;
}


/* NanoCore 1.10, address 0x4004a3b8.
 * REA evidence: ev_207e14c0b47e923001e953671ebf45d555fa5bae9f018309b7d3a4708d073a44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a3b8(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + *param_1) = param_3;
  }
  return;
}


/* NanoCore 1.10, address 0x4004a3c2.
 * REA evidence: ev_cd50a888918ed90fa5932ea2be3ecdb2d2f2a8a3ac4c32b709b4510f47a1df3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a3c2(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + *param_1 + 4) = param_3;
  }
  return;
}


/* NanoCore 1.10, address 0x4004a3cc.
 * REA evidence: ev_6e915f93fd6b201df4e9c420ea91babdb470a526acd948cec21875cca3939041
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a3cc(uint *param_1,int param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2 + 3U & 0xfffffffc;
  return;
}


/* NanoCore 1.10, address 0x4004a3dc.
 * REA evidence: ev_43f858f5efe4b2dc736e4a9ef4de0a4cd0f0867fa86b0235a0119c872abd6df5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004a3dc(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40059bae(*param_1 + 8);
  if (iVar1 != 0) {
    FUN_ram_4004a3b8(param_1,iVar1,0);
    FUN_ram_4004a3c2(param_1,iVar1,param_1[1]);
    if (param_1[1] != 0) {
      FUN_ram_4004a3b8(param_1,param_1[1],iVar1);
    }
    param_1[1] = iVar1;
    if (param_1[2] == 0) {
      param_1[2] = iVar1;
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004a426.
 * REA evidence: ev_105129215ea1c27e5574291954b55ded87994e5393630520b37e06f8e1ed9a55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004a426(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    if (param_2 == param_1[1]) {
      iVar1 = FUN_ram_4004a3dc();
      return iVar1;
    }
    iVar1 = FUN_ram_40059bae(*param_1 + 8);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_2 + *param_1);
      FUN_ram_4004a3c2(param_1,uVar2,iVar1);
      FUN_ram_4004a3b8(param_1,iVar1,uVar2);
      FUN_ram_4004a3b8(param_1,param_2,iVar1);
      FUN_ram_4004a3c2(param_1,iVar1,param_2);
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004a49e.
 * REA evidence: ev_5798a0380a32571d5c0da6807470c6f104d439e627dc3362adf020c8ae649775
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004a49e(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40059bae(*param_1 + 8);
  if (iVar1 != 0) {
    FUN_ram_4004a3c2(param_1,iVar1,0);
    FUN_ram_4004a3b8(param_1,iVar1,param_1[2]);
    if (param_1[2] != 0) {
      FUN_ram_4004a3c2(param_1,param_1[2],iVar1);
    }
    param_1[2] = iVar1;
    if (param_1[1] == 0) {
      param_1[1] = iVar1;
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004a4e8.
 * REA evidence: ev_c22a3e517d8fd3e4355f45d1f9a607d7573327aa76dc38a6df9f45513a2cc883
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a4e8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar2 = *param_1;
  if (param_2 == param_1[1]) {
    iVar2 = *(int *)(param_2 + iVar2 + 4);
    iVar1 = 0;
    param_1[1] = iVar2;
    if (iVar2 != 0) {
LAB_ram_4004a54e:
      FUN_ram_4004a3b8(param_1,iVar2,iVar1);
      return;
    }
    param_1[2] = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + iVar2);
    if (param_2 != param_1[2]) {
      iVar2 = *(int *)(param_2 + iVar2 + 4);
      FUN_ram_4004a3c2(param_1,iVar1,iVar2);
      goto LAB_ram_4004a54e;
    }
    param_1[2] = iVar1;
    if (iVar1 != 0) {
      FUN_ram_4004a3c2(param_1,iVar1,0);
      return;
    }
    param_1[1] = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4004a55c.
 * REA evidence: ev_bf414678cf24981ba91f5a79ee6d9e8878b0c8e93594582015d9107c18f3dce2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a55c(int *param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = param_1[1];
  while (iVar1 != 0) {
    iVar2 = *(int *)(*param_1 + iVar1 + 4);
    if (param_2 == (code *)0x0) {
      FUN_ram_4004a4e8(param_1,iVar1);
      FUN_ram_40059be4(iVar1);
      iVar1 = iVar2;
    }
    else {
      (*param_2)(iVar1);
      iVar1 = iVar2;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4004a5a6.
 * REA evidence: ev_9c6863b6f6e39aaeeaaf1f8d3521325aa1f60d4aad6cdf93e422d897d42c3198
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a5a6(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4004a5ac.
 * REA evidence: ev_73862f2502f15e16cf8bac012c6e887ff626cbd36e80141870bd0a8ce6fa14af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a5ac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4004a5b2.
 * REA evidence: ev_9df2661c21feb9d7e1045375d74dccd29f8d6b0a5bf916a2e140f5de42b2caba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a5b2(int *param_1,int param_2)

{
  return *(undefined4 *)(param_2 + *param_1 + 4);
}


/* NanoCore 1.10, address 0x4004a5ba.
 * REA evidence: ev_bf949cfaac63cbf331d7ec64f4ba3398a44087fb7a8d35c8a6895954fbec7cdf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a5ba(int *param_1,int param_2)

{
  return *(undefined4 *)(param_2 + *param_1);
}


/* NanoCore 1.10, address 0x4004a5c2.
 * REA evidence: ev_173479f276087b7797967e9d6267b2ece39608ace52293dc9f8fc5ce0a26bf41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a5c2(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != param_3) {
    if (param_3 == 0) {
      iVar1 = 0;
      if (param_1 != (int *)0x0) {
        iVar1 = param_1[2];
      }
    }
    else {
      iVar1 = *(int *)(param_3 + *param_1);
    }
    if (iVar1 != param_2) {
      FUN_ram_4004a4e8();
      FUN_ram_4004a3c2(param_1,iVar1,param_2);
      FUN_ram_4004a3b8(param_1,param_2,iVar1);
      FUN_ram_4004a3b8(param_1,param_3,param_2);
      FUN_ram_4004a3c2(param_1,param_2,param_3);
      if (param_3 == 0) {
        param_1[2] = param_2;
      }
      if (iVar1 == 0) {
        param_1[1] = param_2;
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004a636.
 * REA evidence: ev_4e3843a47e8a0d6f1915a711443bd5d563a8c3b46b38ccf0b2ecc9aae8dbf58d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004a636(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 != 0) && (bVar1 = false, *(int *)(param_1 + 4) == 0)) {
    bVar1 = *(int *)(param_1 + 8) == 0;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4004a64a.
 * REA evidence: ev_73ea67fd0b74ff0e0eb692cfd00939ed150b4a805734c97da13965687f5d580d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004a64a(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  
  for (; (int)param_1 < 0; param_1 = (int)((param_1 + 0x168) * 0x10000) >> 0x10) {
  }
  for (; 0x167 < (int)param_1; param_1 = (int)((param_1 - 0x168) * 0x10000) >> 0x10) {
  }
  if (0x59 < (int)param_1) {
    param_1 = param_1 & 0xffff;
    if (0x59 < (param_1 - 0x5a & 0xffff)) {
      uVar2 = param_1 - 0xb4 & 0xffff;
      if (uVar2 < 0x5a) {
        uVar1 = *(ushort *)(&DAT_ram_40097614 + uVar2 * 2);
      }
      else {
        uVar1 = *(ushort *)(&DAT_ram_40097614 + (0x168 - param_1 & 0xffff) * 2);
      }
      if (-(uint)uVar1 != 0xffff8001) {
        return -(uint)uVar1;
      }
      return 0xffff8000;
    }
    param_1 = 0xb4 - param_1 & 0xffff;
  }
  uVar2 = (uint)*(ushort *)(&DAT_ram_40097614 + param_1 * 2);
  if (uVar2 == 0x7fff) {
    uVar2 = 0x8000;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4004a6da.
 * REA evidence: ev_2a3ad2209bb197bb8fdf8b7ef5ea1267069781a4bb29f65179a12f7fe2ca86ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004a7e6) */

int FUN_ram_4004a6da(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 != 0) && (param_1 != 0x400)) {
    iVar7 = 8;
    iVar5 = param_2 * 3;
    iVar6 = (param_4 - param_2) * 3 + param_2 * -3;
    iVar4 = (param_4 - param_2) * -3 + 0x400;
    iVar1 = param_1;
    do {
      iVar2 = iVar4 * iVar1;
      iVar3 = (((((iVar2 >> 10) + iVar6) * iVar1 >> 10) + iVar5) * iVar1 >> 10) - param_1;
      if (iVar3 + 1U < 3) goto LAB_ram_4004a7f4;
      iVar2 = (((iVar2 * 3 >> 10) + iVar6 * 2) * iVar1 >> 10) + iVar5;
      if ((iVar2 + 1U < 3) ||
         (iVar2 = FUN_ram_400037bc(iVar3 * 0x400,(int)((ulonglong)(longlong)iVar3 >> 0x16),iVar2,
                                   iVar2 >> 0x1f), iVar2 == 0)) break;
      iVar7 = iVar7 + -1;
      iVar1 = iVar1 - iVar2;
    } while (iVar7 != 0);
    iVar1 = 0;
    if ((-1 < param_1) && (iVar1 = 0x400, param_1 < 0x401)) {
      iVar2 = 0x400;
      iVar7 = 0;
      iVar1 = param_1;
      while (iVar3 = ((((iVar4 * iVar1 >> 10) + iVar6) * iVar1 >> 10) + iVar5) * iVar1 >> 10,
            2 < (iVar3 - param_1) + 1U) {
        if (param_1 <= iVar3) {
          iVar2 = iVar1;
          iVar1 = iVar7;
        }
        iVar7 = iVar1;
        iVar1 = (iVar2 - iVar7) / 2 + iVar7;
        if ((iVar7 == iVar1) || (iVar2 <= iVar7)) break;
      }
    }
LAB_ram_4004a7f4:
    param_1 = ((((iVar1 * ((param_5 - param_3) * -3 + 0x400) >> 10) +
                (param_5 - param_3) * 3 + param_3 * -3) * iVar1 >> 10) + param_3 * 3) * iVar1 >> 10;
  }
  return param_1;
}


/* NanoCore 1.10, address 0x4004a830.
 * REA evidence: ev_457a4cd75286ac9acb17b47ee8e92e7ca328126753ddd5b7abc06d2547fb0906
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004a830(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = param_5;
  if (param_3 < param_2) {
    if ((param_3 < param_1) && (iVar1 = param_4, param_1 < param_2)) goto LAB_ram_4004a84e;
  }
  else if ((param_1 < param_3) && (iVar1 = param_4, param_2 < param_1)) {
    if (param_3 == param_2) {
      return param_5;
    }
LAB_ram_4004a84e:
    if (param_3 - param_2 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = ((param_1 - param_2) * (param_5 - param_4)) / (param_3 - param_2);
    }
    return iVar1 + param_4;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004a866.
 * REA evidence: ev_b34b3502db2347a8786161f020a16c920ba2760e980fc2d6516d33b1b037afb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004a866(undefined4 param_1)

{
  _DAT_ram_3007f948 = param_1;
  return;
}


/* NanoCore 1.10, address 0x4004a870.
 * REA evidence: ev_8a8b7eaa967ec879ab826491942b71fead1d7e86b5b467ffbf8feb03b755e201
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004a870(uint param_1)

{
  uint3 auStack_14 [4];
  
  if (param_1 < 0x13) {
    FUN_ram_4000305c(auStack_14,param_1 * 3 + 0x400976cc,3);
  }
  else {
    auStack_14[0] = 0;
  }
  return (uint)auStack_14[0];
}


/* NanoCore 1.10, address 0x4004a8ba.
 * REA evidence: ev_8c54c277a007470ee7bdd75e6e5a4c8f964118eca172026dc9ffcadd305c672e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a8ba(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_2[1];
  piVar1 = (int *)piVar3[2];
  param_2[1] = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_2;
  }
  iVar2 = *param_2;
  *piVar3 = iVar2;
  if (iVar2 == 0) {
    *param_1 = piVar3;
  }
  else if (*(int **)(iVar2 + 8) == param_2) {
    *(int **)(iVar2 + 8) = piVar3;
  }
  else {
    *(int **)(iVar2 + 4) = piVar3;
  }
  piVar3[2] = (int)param_2;
  *param_2 = (int)piVar3;
  return;
}


/* NanoCore 1.10, address 0x4004a8e0.
 * REA evidence: ev_0a49e7dab9fde32885f0d0421cdc5c46b4fc32c7e7921a1061480231c3aa1ecc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a8e0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_2[2];
  piVar1 = (int *)piVar3[1];
  param_2[2] = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_2;
  }
  iVar2 = *param_2;
  *piVar3 = iVar2;
  if (iVar2 == 0) {
    *param_1 = piVar3;
  }
  else if (*(int **)(iVar2 + 4) == param_2) {
    *(int **)(iVar2 + 4) = piVar3;
  }
  else {
    *(int **)(iVar2 + 8) = piVar3;
  }
  piVar3[1] = (int)param_2;
  *param_2 = (int)piVar3;
  return;
}


/* NanoCore 1.10, address 0x4004a906.
 * REA evidence: ev_5469b54acf9748f325e1bc4e8d8bd6cb2d39987c8a157035e0f5529744593cad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a906(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    piVar1 = param_3;
    if ((param_2 != (int *)0x0) && (*(int *)((int)param_2 + 0xc) != 1)) goto LAB_ram_4004aa02;
    iVar3 = *param_1;
    if (param_2 == (int *)iVar3) goto LAB_ram_4004a992;
    iVar3 = piVar1[1];
    if ((int *)iVar3 != param_2) break;
    iVar3 = piVar1[2];
    if (*(int *)(iVar3 + 0xc) == 0) {
      *(undefined4 *)(iVar3 + 0xc) = 1;
      piVar1[3] = 0;
      FUN_ram_4004a8e0(param_1,piVar1);
      iVar3 = piVar1[2];
    }
    iVar2 = *(int *)(iVar3 + 4);
    iVar4 = *(int *)(iVar3 + 8);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 1)) ||
       ((iVar4 != 0 && (*(int *)(iVar4 + 0xc) != 1)))) {
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc) == 1)) {
        *(undefined4 *)(iVar2 + 0xc) = 1;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        FUN_ram_4004a8ba(param_1);
        iVar3 = piVar1[2];
      }
      iVar2 = *(int *)(iVar3 + 8);
      *(int *)(iVar3 + 0xc) = piVar1[3];
      piVar1[3] = 1;
      *(undefined4 *)(iVar2 + 0xc) = 1;
      FUN_ram_4004a8e0(param_1,piVar1);
LAB_ram_4004a990:
      iVar3 = *param_1;
LAB_ram_4004a992:
      param_2 = (int *)iVar3;
      if (iVar3 != 0) {
LAB_ram_4004aa02:
        *(undefined4 *)((int)param_2 + 0xc) = 1;
      }
      return;
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
LAB_ram_4004a95a:
    param_3 = (int *)*piVar1;
    param_2 = piVar1;
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
    *(undefined4 *)(iVar3 + 0xc) = 1;
    piVar1[3] = 0;
    FUN_ram_4004a8ba(param_1,piVar1);
    iVar3 = piVar1[1];
  }
  iVar2 = *(int *)(iVar3 + 4);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 1)) {
    iVar4 = *(int *)(iVar3 + 8);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc) == 1)) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
      goto LAB_ram_4004a95a;
    }
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 1)) {
      *(undefined4 *)(iVar4 + 0xc) = 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      FUN_ram_4004a8e0(param_1,iVar3);
      iVar3 = piVar1[1];
    }
  }
  *(int *)(iVar3 + 0xc) = piVar1[3];
  iVar3 = *(int *)(iVar3 + 4);
  piVar1[3] = 1;
  *(undefined4 *)(iVar3 + 0xc) = 1;
  FUN_ram_4004a8ba(param_1,piVar1);
  goto LAB_ram_4004a990;
}


/* NanoCore 1.10, address 0x4004aa08.
 * REA evidence: ev_2cf0ff71cb5ffd046d5ce27d8162ca31925216a1d17a988e690456016a03995e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004aa08(undefined4 *param_1,int param_2,int param_3)

{
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    thunk_FUN_ram_4000505c(param_1,0,0xc);
    param_1[1] = param_2;
    param_1[2] = param_3;
    *param_1 = 0;
    return 1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004aa46.
 * REA evidence: ev_97322c995ad637586eb26dfcbfb502faf874d3c99b941fefebe5c990150c6a7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004aa46(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar2 = (*(code *)param_1[1])(param_2,*(undefined4 *)(iVar1 + 0x10));
      if (iVar2 == 0) {
        return iVar1;
      }
      if (iVar2 < 0) {
        iVar1 = *(int *)(iVar1 + 4);
      }
      else {
        iVar1 = *(int *)(iVar1 + 8);
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004aa80.
 * REA evidence: ev_db5386d7c823b45a35464101735fb2d771628ff01c6bd7d89e5f239faab23800
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4004aa80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  if (param_1 != (int *)0x0) {
    piVar4 = (int *)FUN_ram_4004aa46();
    if (piVar4 != (int *)0x0) {
      return piVar4;
    }
    piVar4 = (int *)FUN_ram_40059bbc(0x14);
    if (piVar4 != (int *)0x0) {
      iVar5 = FUN_ram_40059bbc(param_1[2]);
      piVar4[4] = iVar5;
      if (iVar5 != 0) {
        iVar1 = *param_1;
        piVar4[3] = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        if (iVar1 == 0) {
          *param_1 = (int)piVar4;
          *piVar4 = 0;
          piVar4[3] = 1;
          return piVar4;
        }
        piVar4[4] = param_2;
        do {
          iVar2 = iVar1;
          iVar1 = (*(code *)param_1[1])(piVar4[4],*(undefined4 *)(iVar2 + 0x10));
          if (iVar1 < 0) {
            iVar1 = *(int *)(iVar2 + 4);
          }
          else {
            iVar1 = *(int *)(iVar2 + 8);
          }
        } while (iVar1 != 0);
        pcVar7 = (code *)param_1[1];
        uVar6 = *(undefined4 *)(iVar2 + 0x10);
        *piVar4 = iVar2;
        piVar4[3] = 0;
        iVar1 = (*pcVar7)(param_2,uVar6);
        piVar10 = piVar4;
        if (iVar1 < 0) {
          *(int **)(iVar2 + 4) = piVar4;
        }
        else {
          *(int **)(iVar2 + 8) = piVar4;
        }
        do {
          while( true ) {
            piVar3 = (int *)*piVar10;
            if ((piVar3 == (int *)0x0) || (piVar3[3] != 0)) {
              *(undefined4 *)(*param_1 + 0xc) = 1;
              piVar4[4] = iVar5;
              return piVar4;
            }
            piVar9 = (int *)*piVar3;
            piVar8 = (int *)piVar9[1];
            if (piVar3 != piVar8) break;
            piVar8 = (int *)piVar9[2];
            if ((piVar8 == (int *)0x0) || (piVar8[3] != 0)) {
              piVar11 = (int *)piVar3[2];
              piVar8 = piVar3;
              if (piVar11 == piVar10) {
                FUN_ram_4004a8e0(param_1,piVar3);
                piVar8 = piVar11;
                piVar10 = piVar3;
              }
              piVar8[3] = 1;
              piVar9[3] = 0;
              FUN_ram_4004a8ba(param_1,piVar9);
            }
            else {
LAB_ram_4004ab66:
              piVar8[3] = 1;
              piVar3[3] = 1;
              piVar9[3] = 0;
              piVar10 = piVar9;
            }
          }
          if ((piVar8 != (int *)0x0) && (piVar8[3] == 0)) goto LAB_ram_4004ab66;
          piVar11 = (int *)piVar3[1];
          piVar8 = piVar3;
          if (piVar10 == piVar11) {
            FUN_ram_4004a8ba(param_1,piVar3);
            piVar8 = piVar11;
            piVar10 = piVar3;
          }
          piVar8[3] = 1;
          piVar9[3] = 0;
          FUN_ram_4004a8e0(param_1,piVar9);
        } while( true );
      }
      FUN_ram_40059be4(piVar4);
    }
  }
  return (int *)0x0;
}


/* NanoCore 1.10, address 0x4004abca.
 * REA evidence: ev_7e5ee9e9f48cf50a8a94ba2c112558f2bb83c6e444f163f7f12c1526697154ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004abca(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)param_2[2];
  piVar3 = piVar1;
  if (((int *)param_2[1] == (int *)0x0) || (piVar3 = (int *)param_2[1], piVar1 == (int *)0x0)) {
    piVar1 = (int *)*param_2;
    iVar5 = param_2[3];
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar1;
    }
    if (piVar1 != (int *)0x0) {
      if ((int *)piVar1[1] == param_2) {
        piVar1[1] = (int)piVar3;
      }
      else {
        piVar1[2] = (int)piVar3;
      }
      iVar6 = 1;
      goto LAB_ram_4004ac18;
    }
    *param_1 = (int)piVar3;
    if (iVar5 != 1) goto LAB_ram_4004ac54;
  }
  else {
    do {
      piVar2 = piVar1;
      piVar1 = (int *)piVar2[1];
    } while ((int *)piVar2[1] != (int *)0x0);
    iVar5 = *param_2;
    if (iVar5 == 0) {
      *param_1 = (int)piVar2;
    }
    else if (*(int **)(iVar5 + 4) == param_2) {
      *(int **)(iVar5 + 4) = piVar2;
    }
    else {
      *(int **)(iVar5 + 8) = piVar2;
    }
    piVar4 = (int *)*piVar2;
    piVar3 = (int *)piVar2[2];
    iVar6 = piVar2[3];
    piVar1 = piVar2;
    if (param_2 != piVar4) {
      if (piVar3 != (int *)0x0) {
        *piVar3 = (int)piVar4;
      }
      iVar5 = param_2[2];
      piVar4[1] = (int)piVar3;
      piVar2[2] = iVar5;
      *(int **)param_2[2] = piVar2;
      piVar1 = piVar4;
    }
    *piVar2 = *param_2;
    piVar2[3] = param_2[3];
    piVar2[1] = param_2[1];
    *(int **)param_2[1] = piVar2;
    iVar5 = 1;
LAB_ram_4004ac18:
    if ((iVar5 != iVar6) || (param_1 == (int *)0x0)) goto LAB_ram_4004ac54;
  }
  FUN_ram_4004a906(param_1,piVar3,piVar1);
LAB_ram_4004ac54:
  iVar5 = param_2[4];
  FUN_ram_40059be4(param_2);
  return iVar5;
}


/* NanoCore 1.10, address 0x4004ac68.
 * REA evidence: ev_c7b5369ed0a3e009ebdc0f0bf2d13e3fd24153709a5b27e2092543e47bc3cc62
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004ac68(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_ram_4004abca();
    if (iVar1 != 0) {
      FUN_ram_40059be4();
    }
    return iVar1 != 0;
  }
  return false;
}


/* NanoCore 1.10, address 0x4004ac76.
 * REA evidence: ev_73b28ea441e7688dd368931258b31e952bc8d1ae184c9e9fa8ff102e02d7e706
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004ac76(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004abca();
  if (iVar1 != 0) {
    FUN_ram_40059be4();
  }
  return iVar1 != 0;
}


/* NanoCore 1.10, address 0x4004ac88.
 * REA evidence: ev_12dff1fcfc5e4329477e543d15b2715283a9d9d946c014348ddd35046e34615d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ac88(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)*param_1;
    while (piVar1 = piVar2, piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[1];
      if (((int *)piVar1[1] == (int *)0x0) &&
         (piVar2 = (int *)piVar1[2], (int *)piVar1[2] == (int *)0x0)) {
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) {
          if ((int *)piVar2[1] == piVar1) {
            piVar2[1] = 0;
          }
          else {
            piVar2[2] = 0;
          }
        }
        FUN_ram_40059be4(piVar1[4]);
        FUN_ram_40059be4(piVar1);
      }
    }
    *param_1 = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004acdc.
 * REA evidence: ev_378fa7ee42f190d75f3bf3a7d490a0d70ade87e096f63a5b387fb4ee24d66671
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004acdc(undefined4 param_1)

{
  thunk_FUN_ram_4000505c(param_1,0,0xc);
  return;
}


/* NanoCore 1.10, address 0x4004ace4.
 * REA evidence: ev_494a6a27a8ecbfadaf80ecb499c9731c2cfb645d8b867ae8e42c7597047fd3d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ace4(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) != -1) {
    FUN_ram_40059be4(*param_1);
  }
  thunk_FUN_ram_4000505c(param_1,0,0xc);
  return;
}


/* NanoCore 1.10, address 0x4004ad0e.
 * REA evidence: ev_473d5a50ed6c4f0d3714eedb15754fe3ef0dbaacc34b2f83a7ac7343ba584ea1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004ad0e(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = (uint)*(byte *)(param_1 + 2);
  if (0xfd < (uVar3 - 1 & 0xff)) {
    return 0;
  }
  iVar6 = *param_1;
  iVar7 = iVar6 + uVar3 * 4;
  uVar5 = 0;
  do {
    if (*(byte *)(iVar7 + uVar5) == param_2) {
      iVar1 = FUN_ram_40059bae((uVar3 - 1) * 5);
      if (iVar1 == 0) {
        return 0;
      }
      *param_1 = iVar1;
      uVar3 = 0;
      bVar4 = (char)param_1[2] - 1;
      *(byte *)(param_1 + 2) = bVar4;
      iVar2 = 0;
      do {
        if (*(byte *)(iVar7 + uVar3) != param_2) {
          *(undefined4 *)(iVar1 + iVar2 * 4) = *(undefined4 *)(iVar6 + uVar3 * 4);
          *(undefined1 *)(iVar1 + (uint)bVar4 * 4 + iVar2) = *(undefined1 *)(iVar7 + uVar3);
          iVar2 = iVar2 + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 <= *(byte *)(param_1 + 2));
      FUN_ram_40059be4(iVar6);
      return 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar3);
  return 0;
}


/* NanoCore 1.10, address 0x4004adb0.
 * REA evidence: ev_4572525b0866a010584095c2303b46a165cf56392cbb5cd6a7f8475de3b8f56e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004adb0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)*(byte *)(param_1 + 2);
  if (uVar5 != 0xff) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
LAB_ram_4004add2:
      iVar1 = FUN_ram_40059bf6(iVar1,(uVar5 + 1 & 0xff) * 5);
      if (iVar1 != 0) {
        *param_1 = iVar1;
        iVar2 = iVar1 + (uint)*(byte *)(param_1 + 2) * 4;
        for (iVar6 = iVar2 + (uint)*(byte *)(param_1 + 2); iVar2 != iVar6; iVar6 = iVar6 + -1) {
          *(undefined1 *)(iVar6 + 3) = *(undefined1 *)(iVar6 + -1);
        }
        bVar4 = (char)param_1[2] + 1;
        *(byte *)(param_1 + 2) = bVar4;
        uVar5 = param_2 >> 2;
        *(char *)(iVar1 + (uint)bVar4 * 5 + -1) = (char)param_2;
        *(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 2) * 4 + -4) = param_3;
        if (0x1f < uVar5) {
          uVar5 = 0x1f;
        }
        param_1[1] = param_1[1] | 1 << (uVar5 & 0x1f);
      }
    }
    else {
      uVar3 = uVar5;
      do {
        if (uVar3 == 0) goto LAB_ram_4004add2;
        uVar3 = uVar3 - 1;
      } while (*(byte *)(iVar1 + uVar5 * 4 + uVar3) != param_2);
      *(undefined4 *)(iVar1 + uVar3 * 4) = param_3;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4004ae6c.
 * REA evidence: ev_f1773e6a10e8e2e458d1062e9eb1b48520d159e922574e2a34c24124040971fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004ae6c(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = (uint)*(byte *)(param_1 + 2);
  param_1 = (undefined4 *)*param_1;
  if (uVar1 == 0xff) {
    do {
      puVar4 = param_1;
      if ((byte *)*puVar4 == (byte *)0x0) {
        return 0;
      }
      param_1 = puVar4 + 2;
    } while (*(byte *)*puVar4 != param_2);
    uVar3 = puVar4[1];
  }
  else {
    uVar2 = 0;
    while( true ) {
      if (uVar1 <= uVar2) {
        return 0;
      }
      if (*(byte *)((int)param_1 + uVar2 + uVar1 * 4) == param_2) break;
      uVar2 = uVar2 + 1;
    }
    uVar3 = param_1[uVar2];
  }
  *param_3 = uVar3;
  return 1;
}


/* NanoCore 1.10, address 0x4004aeb2.
 * REA evidence: ev_56c55fb9cfb5b6026725c3a62b35c8ff230f3e5dc5767ba8da0ee15c8d2c56dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined ** FUN_ram_4004aeb2(uint param_1)

{
  undefined4 uStack_4;
  
  if (param_1 < 0x61) {
    if (param_1 < 0x1c) {
      if ((param_1 & 0xfd) == 5) {
        return (undefined **)0x1fffffff;
      }
    }
    else {
      switch(param_1 - 0x1c & 0xff) {
      case 0:
        uStack_4 = (undefined **)(uint)CONCAT12(DAT_ram_400978ae,DAT_ram_400978ac);
        return uStack_4;
      case 6:
      case 8:
      case 9:
      case 0xd:
      case 0x16:
      case 0x1e:
      case 0x22:
      case 0x28:
      case 0x31:
      case 0x37:
      case 0x3d:
      case 0x43:
      case 0x44:
        return (undefined **)0xff;
      case 0x18:
        return (undefined **)0xf;
      case 0x3e:
        return &PTR_LAB_ram_4001280e_ram_40092d7c;
      }
    }
  }
  else if (param_1 < 0x6e) {
    if (0x6b < param_1) {
      return (undefined **)0x100;
    }
  }
  else if (param_1 == 0x74) {
    return (undefined **)0x100;
  }
  return (undefined **)0x0;
}


/* NanoCore 1.10, address 0x4004af4c.
 * REA evidence: ev_1bff6218302fc46a7a097df11570aa6ccd0565274974065bf07fa7565d58cbf3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004af4c(int param_1)

{
  return *(char *)(param_1 + 8) == '\0';
}


/* NanoCore 1.10, address 0x4004af56.
 * REA evidence: ev_1a32b56644f3cfa5075ac2e37c08138a48f3b7e18dee192a95a71b6649222b2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_4004af56(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0xff) {
    return 0x3f;
  }
  if (param_1 != 0) {
    if (param_1 < 0x8d) {
      return (&DAT_ram_4009781c)[param_1];
    }
    if ((_DAT_ram_3007f910 != 0) && (uVar1 = param_1 + 0x73 & 0xff, uVar1 < _DAT_ram_3007f908)) {
      return *(undefined1 *)(_DAT_ram_3007f910 + uVar1);
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004afe0.
 * REA evidence: ev_51f37f0fd970284a8b30e12cd796d5b3203c2240f390a8cf4d6177546d04cb51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004afe0(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_4;
  
  local_4 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = &local_4;
  }
  iVar4 = *param_2;
  uVar5 = (uint)*(byte *)(param_1 + iVar4);
  iVar3 = iVar4 + 1;
  if (-1 < (char)*(byte *)(param_1 + iVar4)) {
    *param_2 = iVar3;
    return uVar5;
  }
  if ((uVar5 & 0xe0) == 0xc0) {
    *param_2 = iVar3;
    if ((*(byte *)(param_1 + iVar3) & 0xc0) == 0x80) {
      uVar5 = (uVar5 & 0x1f) * 0x40 + (*(byte *)(param_1 + iVar3) & 0x3f);
      iVar4 = iVar4 + 2;
LAB_ram_4004b032:
      *param_2 = iVar4;
      return uVar5;
    }
  }
  else if ((uVar5 & 0xf0) == 0xe0) {
    *param_2 = iVar3;
    bVar1 = *(byte *)(param_1 + iVar3);
    if ((bVar1 & 0xc0) == 0x80) {
      *param_2 = iVar4 + 2;
      uVar2 = (uint)*(byte *)(param_1 + iVar4 + 2);
      if ((uVar2 & 0xc0) == 0x80) {
        uVar5 = (uVar5 & 0xf) * 0x1000 + (uVar2 & 0x3f) + (bVar1 & 0x3f) * 0x40;
        iVar4 = iVar4 + 3;
        goto LAB_ram_4004b032;
      }
    }
  }
  else {
    *param_2 = iVar3;
    if (((uVar5 & 0xf8) == 0xf0) && (bVar1 = *(byte *)(param_1 + iVar3), (bVar1 & 0xc0) == 0x80)) {
      *param_2 = iVar4 + 2;
      uVar2 = (uint)*(byte *)(param_1 + iVar4 + 2);
      if ((uVar2 & 0xc0) == 0x80) {
        *param_2 = iVar4 + 3;
        uVar6 = (uint)*(byte *)(param_1 + iVar4 + 3);
        if ((uVar6 & 0xc0) == 0x80) {
          uVar5 = ((bVar1 & 0x3f) << 0xc | (uVar5 & 7) << 0x12) +
                  (uVar2 & 0x3f) * 0x40 + (uVar6 & 0x3f);
          iVar4 = iVar4 + 4;
          goto LAB_ram_4004b032;
        }
      }
    }
  }
  return 0;
}


