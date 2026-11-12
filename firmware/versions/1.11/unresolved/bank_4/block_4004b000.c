/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4004b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4004b104.
 * REA evidence: ev_c2083600d3c37f8998d1bbb08248f1162e666928c66272818bf3933a9e7ad3e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b104(undefined4 *param_1,uint param_2,int param_3)

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
LAB_ram_4004b166:
                    /* WARNING: Could not recover jumptable at 0x4004b16e. Too many branches */
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
          goto LAB_ram_4004b166;
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
          goto LAB_ram_4004b166;
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004b19a.
 * REA evidence: ev_fd34ad5191b78b9e8d86320c4bb5c949e2aefde8c3a30db330ff2f39f82f93b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b19a(undefined4 *param_1,undefined4 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x4004b1c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(iVar2 + 0x20))(iVar2,*param_1,param_2);
  return uVar1;
}


/* NanoCore 1.11, address 0x4004b1c8.
 * REA evidence: ev_8ddb0d738c58fb6c80adffbecd29c71087be0be0aaebf9aa92880893a7855d72
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b1c8(undefined4 param_1)

{
  thunk_FUN_ram_4000504c(param_1,0,0x34);
  return;
}


/* NanoCore 1.11, address 0x4004b1d2.
 * REA evidence: ev_173405f0ebd72ca9214d75ed108c6d09095a80488de3a552d5bd59a004bb73ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b1d2(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_4004b34e(0x30080dd4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


/* NanoCore 1.11, address 0x4004b1f0.
 * REA evidence: ev_982ad5a058f3b6abc06e2a492c3e18fa429fd855dfdcdb167c25a74402071d43
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte * FUN_ram_4004b1f0(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_4004b518(0x30080dd4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (byte *)0x0;
    }
    if (*(byte *)*puVar1 == param_1) break;
    puVar1 = (undefined4 *)FUN_ram_4004b524(0x30080dd4);
  }
  return (byte *)*puVar1;
}


/* NanoCore 1.11, address 0x4004b22e.
 * REA evidence: ev_a2bfd1f3c590a329aff5d5c9538afeedc8398fa104ef6ea080b048cce0f1e480
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b22e(int *param_1,undefined1 *param_2,undefined4 param_3)

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
  iVar1 = FUN_ram_4004b1f0(*param_2);
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
      puVar2 = (undefined4 *)FUN_ram_4005ab2e(0x10);
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


/* NanoCore 1.11, address 0x4004b2e6.
 * REA evidence: ev_bcfeaacda707b43a387156e5e4ee9f11efa569a4e6b416b7a2cd8efffb3aab8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_4004b2e6(int param_1)

{
  char cVar1;
  int iVar2;
  
  for (iVar2 = thunk_FUN_ram_40005234(); iVar2 != 0; iVar2 = iVar2 + -1) {
    cVar1 = *(char *)(param_1 + iVar2);
    if (cVar1 == '.') {
      return (char *)(iVar2 + 1 + param_1);
    }
    if ((cVar1 == '/') || (cVar1 == '\\')) break;
  }
  return s_ep__02x_clear_halt_ram_40094730 + 0x14;
}


/* NanoCore 1.11, address 0x4004b32a.
 * REA evidence: ev_279c2d17b13eb953178561ca4682a9c53e3f768dcf23936572c4da9401e80e39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b32a(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + *param_1) = param_3;
  }
  return;
}


/* NanoCore 1.11, address 0x4004b334.
 * REA evidence: ev_cb7fe179a2cc136b5d080da86d51cd5c269ffd711d291516af69c83022278df0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b334(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + *param_1 + 4) = param_3;
  }
  return;
}


/* NanoCore 1.11, address 0x4004b33e.
 * REA evidence: ev_c51c3cbaaa43d32e924ef8441a2b99fda9c451a6547ad70dc3c63b9c0f8d3134
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b33e(uint *param_1,int param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2 + 3U & 0xfffffffc;
  return;
}


/* NanoCore 1.11, address 0x4004b34e.
 * REA evidence: ev_5388e54688cf2f05fd957660a13d2051d65396539647cd0ff92b44666278f40f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b34e(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005ab20(*param_1 + 8);
  if (iVar1 != 0) {
    FUN_ram_4004b32a(param_1,iVar1,0);
    FUN_ram_4004b334(param_1,iVar1,param_1[1]);
    if (param_1[1] != 0) {
      FUN_ram_4004b32a(param_1,param_1[1],iVar1);
    }
    param_1[1] = iVar1;
    if (param_1[2] == 0) {
      param_1[2] = iVar1;
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004b398.
 * REA evidence: ev_27cd637f074409ca4d754d04dfb3321afa1a7ffe5e4c9885323a431c3c99ad08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b398(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    if (param_2 == param_1[1]) {
      iVar1 = FUN_ram_4004b34e();
      return iVar1;
    }
    iVar1 = FUN_ram_4005ab20(*param_1 + 8);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_2 + *param_1);
      FUN_ram_4004b334(param_1,uVar2,iVar1);
      FUN_ram_4004b32a(param_1,iVar1,uVar2);
      FUN_ram_4004b32a(param_1,param_2,iVar1);
      FUN_ram_4004b334(param_1,iVar1,param_2);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004b410.
 * REA evidence: ev_4dddaf141cd3e316df37a79cbc236776896fccc7d9c2ea1467729051b9d0810b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b410(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005ab20(*param_1 + 8);
  if (iVar1 != 0) {
    FUN_ram_4004b334(param_1,iVar1,0);
    FUN_ram_4004b32a(param_1,iVar1,param_1[2]);
    if (param_1[2] != 0) {
      FUN_ram_4004b334(param_1,param_1[2],iVar1);
    }
    param_1[2] = iVar1;
    if (param_1[1] == 0) {
      param_1[1] = iVar1;
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004b45a.
 * REA evidence: ev_788814c45dc03aa78d4896bcc9e50a6388228389d9c9175d4a7fad2dd5dcdf6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b45a(int *param_1,int param_2)

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
LAB_ram_4004b4c0:
      FUN_ram_4004b32a(param_1,iVar2,iVar1);
      return;
    }
    param_1[2] = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + iVar2);
    if (param_2 != param_1[2]) {
      iVar2 = *(int *)(param_2 + iVar2 + 4);
      FUN_ram_4004b334(param_1,iVar1,iVar2);
      goto LAB_ram_4004b4c0;
    }
    param_1[2] = iVar1;
    if (iVar1 != 0) {
      FUN_ram_4004b334(param_1,iVar1,0);
      return;
    }
    param_1[1] = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4004b4ce.
 * REA evidence: ev_a92dac425b6c0bac801c4f1ca245562455b61b892d60f9335425f892059b0893
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b4ce(int *param_1,code *param_2)

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
      FUN_ram_4004b45a(param_1,iVar1);
      FUN_ram_4005ab56(iVar1);
      iVar1 = iVar2;
    }
    else {
      (*param_2)(iVar1);
      iVar1 = iVar2;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004b518.
 * REA evidence: ev_b04d277da2d79b739e50fbe49e002e1c4d543c1b3b5d72d13877ef36f3d89277
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b518(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004b51e.
 * REA evidence: ev_d9b4af4d903e11ac39cc3d93f0b28464d20caa4e03f2606a04c046c7f84ea261
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b51e(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004b524.
 * REA evidence: ev_43ae27f45c3fd2a55bb48c77f4f3bfe3cd5a05f92269c6927223e97c34e72d9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b524(int *param_1,int param_2)

{
  return *(undefined4 *)(param_2 + *param_1 + 4);
}


/* NanoCore 1.11, address 0x4004b52c.
 * REA evidence: ev_454f71554bcb87e89a6badf46e4f011b40d5f479348fd4c15ee9570704abb212
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b52c(int *param_1,int param_2)

{
  return *(undefined4 *)(param_2 + *param_1);
}


/* NanoCore 1.11, address 0x4004b534.
 * REA evidence: ev_41ef9cec7588f6a79465131bfb0ddbe1bd792ced6f570aabb55daeb9cd048981
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b534(int *param_1,int param_2,int param_3)

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
      FUN_ram_4004b45a();
      FUN_ram_4004b334(param_1,iVar1,param_2);
      FUN_ram_4004b32a(param_1,param_2,iVar1);
      FUN_ram_4004b32a(param_1,param_3,param_2);
      FUN_ram_4004b334(param_1,param_2,param_3);
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


/* NanoCore 1.11, address 0x4004b5a8.
 * REA evidence: ev_beaedc55fea9d1dcd0f54aa524e7aebc3f13ec3e6d7f9a5ee055499455f7035e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004b5a8(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 != 0) && (bVar1 = false, *(int *)(param_1 + 4) == 0)) {
    bVar1 = *(int *)(param_1 + 8) == 0;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4004b5bc.
 * REA evidence: ev_938d82373e9490665476036bbc35372c163522626665c0756e5f591cdad578f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004b5bc(uint param_1)

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
        uVar1 = *(ushort *)(&DAT_ram_40099490 + uVar2 * 2);
      }
      else {
        uVar1 = *(ushort *)(&DAT_ram_40099490 + (0x168 - param_1 & 0xffff) * 2);
      }
      if (-(uint)uVar1 != 0xffff8001) {
        return -(uint)uVar1;
      }
      return 0xffff8000;
    }
    param_1 = 0xb4 - param_1 & 0xffff;
  }
  uVar2 = (uint)*(ushort *)(&DAT_ram_40099490 + param_1 * 2);
  if (uVar2 == 0x7fff) {
    uVar2 = 0x8000;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4004b64c.
 * REA evidence: ev_112208e5ff047291b8331ff658abb3fd80d63d90a5813267f5f0de9a2dd05113
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004b758) */

int FUN_ram_4004b64c(int param_1,int param_2,int param_3,int param_4,int param_5)

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
      if (iVar3 + 1U < 3) goto LAB_ram_4004b766;
      iVar2 = (((iVar2 * 3 >> 10) + iVar6 * 2) * iVar1 >> 10) + iVar5;
      if ((iVar2 + 1U < 3) ||
         (iVar2 = FUN_ram_400037ac(iVar3 * 0x400,(int)((ulonglong)(longlong)iVar3 >> 0x16),iVar2,
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
LAB_ram_4004b766:
    param_1 = ((((iVar1 * ((param_5 - param_3) * -3 + 0x400) >> 10) +
                (param_5 - param_3) * 3 + param_3 * -3) * iVar1 >> 10) + param_3 * 3) * iVar1 >> 10;
  }
  return param_1;
}


/* NanoCore 1.11, address 0x4004b7a2.
 * REA evidence: ev_946fea95fb081f9b07d863ef3188bdb8cda55679ba49a5dbbf76209a622b7f8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b7a2(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = param_5;
  if (param_3 < param_2) {
    if ((param_3 < param_1) && (iVar1 = param_4, param_1 < param_2)) goto LAB_ram_4004b7c0;
  }
  else if ((param_1 < param_3) && (iVar1 = param_4, param_2 < param_1)) {
    if (param_3 == param_2) {
      return param_5;
    }
LAB_ram_4004b7c0:
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


/* NanoCore 1.11, address 0x4004b7d8.
 * REA evidence: ev_0e6da6bb0bff6b28ae17de211888935ddf99ef08040d5961fb5363d4a4084caf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004b7d8(undefined4 param_1)

{
  _DAT_ram_30080cc8 = param_1;
  return;
}


/* NanoCore 1.11, address 0x4004b7e2.
 * REA evidence: ev_dcad3b703b6aa171acdf37ef895e685b84f5e847595d3ed4cf86edb6c118a57f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004b7e2(uint param_1)

{
  uint3 auStack_14 [4];
  
  if (param_1 < 0x13) {
    FUN_ram_4000304c(auStack_14,param_1 * 3 + 0x40099548,3);
  }
  else {
    auStack_14[0] = 0;
  }
  return (uint)auStack_14[0];
}


/* NanoCore 1.11, address 0x4004b82c.
 * REA evidence: ev_bb48fdffad63a18092aeb56272b075c10e846a85747fb44ae8d821c9c2bcec7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b82c(undefined4 *param_1,int *param_2)

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


/* NanoCore 1.11, address 0x4004b852.
 * REA evidence: ev_3b9f14be9cc2142634462509b5ef481322bb86f7ab35f8a43636ce5b2373fea6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b852(undefined4 *param_1,int *param_2)

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


/* NanoCore 1.11, address 0x4004b878.
 * REA evidence: ev_6533f257ef3a57298f81ce236613b3d7ad276293e3457a966d861e9ad1ddc177
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b878(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    piVar1 = param_3;
    if ((param_2 != (int *)0x0) && (*(int *)((int)param_2 + 0xc) != 1)) goto LAB_ram_4004b974;
    iVar3 = *param_1;
    if (param_2 == (int *)iVar3) goto LAB_ram_4004b904;
    iVar3 = piVar1[1];
    if ((int *)iVar3 != param_2) break;
    iVar3 = piVar1[2];
    if (*(int *)(iVar3 + 0xc) == 0) {
      *(undefined4 *)(iVar3 + 0xc) = 1;
      piVar1[3] = 0;
      FUN_ram_4004b852(param_1,piVar1);
      iVar3 = piVar1[2];
    }
    iVar2 = *(int *)(iVar3 + 4);
    iVar4 = *(int *)(iVar3 + 8);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 1)) ||
       ((iVar4 != 0 && (*(int *)(iVar4 + 0xc) != 1)))) {
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc) == 1)) {
        *(undefined4 *)(iVar2 + 0xc) = 1;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        FUN_ram_4004b82c(param_1);
        iVar3 = piVar1[2];
      }
      iVar2 = *(int *)(iVar3 + 8);
      *(int *)(iVar3 + 0xc) = piVar1[3];
      piVar1[3] = 1;
      *(undefined4 *)(iVar2 + 0xc) = 1;
      FUN_ram_4004b852(param_1,piVar1);
LAB_ram_4004b902:
      iVar3 = *param_1;
LAB_ram_4004b904:
      param_2 = (int *)iVar3;
      if (iVar3 != 0) {
LAB_ram_4004b974:
        *(undefined4 *)((int)param_2 + 0xc) = 1;
      }
      return;
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
LAB_ram_4004b8cc:
    param_3 = (int *)*piVar1;
    param_2 = piVar1;
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
    *(undefined4 *)(iVar3 + 0xc) = 1;
    piVar1[3] = 0;
    FUN_ram_4004b82c(param_1,piVar1);
    iVar3 = piVar1[1];
  }
  iVar2 = *(int *)(iVar3 + 4);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 1)) {
    iVar4 = *(int *)(iVar3 + 8);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc) == 1)) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
      goto LAB_ram_4004b8cc;
    }
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 1)) {
      *(undefined4 *)(iVar4 + 0xc) = 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      FUN_ram_4004b852(param_1,iVar3);
      iVar3 = piVar1[1];
    }
  }
  *(int *)(iVar3 + 0xc) = piVar1[3];
  iVar3 = *(int *)(iVar3 + 4);
  piVar1[3] = 1;
  *(undefined4 *)(iVar3 + 0xc) = 1;
  FUN_ram_4004b82c(param_1,piVar1);
  goto LAB_ram_4004b902;
}


/* NanoCore 1.11, address 0x4004b97a.
 * REA evidence: ev_ad7d870adc516c46856ed3597d51129464f0f7072d75d499057c2e30254291f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b97a(undefined4 *param_1,int param_2,int param_3)

{
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    thunk_FUN_ram_4000504c(param_1,0,0xc);
    param_1[1] = param_2;
    param_1[2] = param_3;
    *param_1 = 0;
    return 1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004b9b8.
 * REA evidence: ev_07f358547f8d6173e1b189b1c15fc1f928e271096bd88c9214ad892d676348b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b9b8(int *param_1,undefined4 param_2)

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


/* NanoCore 1.11, address 0x4004b9f2.
 * REA evidence: ev_a5971ec9eeee9fce9011372932933ac8d31d9106f99aa8a531f3f88edc71b566
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4004b9f2(int *param_1,int param_2)

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
    piVar4 = (int *)FUN_ram_4004b9b8();
    if (piVar4 != (int *)0x0) {
      return piVar4;
    }
    piVar4 = (int *)FUN_ram_4005ab2e(0x14);
    if (piVar4 != (int *)0x0) {
      iVar5 = FUN_ram_4005ab2e(param_1[2]);
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
                FUN_ram_4004b852(param_1,piVar3);
                piVar8 = piVar11;
                piVar10 = piVar3;
              }
              piVar8[3] = 1;
              piVar9[3] = 0;
              FUN_ram_4004b82c(param_1,piVar9);
            }
            else {
LAB_ram_4004bad8:
              piVar8[3] = 1;
              piVar3[3] = 1;
              piVar9[3] = 0;
              piVar10 = piVar9;
            }
          }
          if ((piVar8 != (int *)0x0) && (piVar8[3] == 0)) goto LAB_ram_4004bad8;
          piVar11 = (int *)piVar3[1];
          piVar8 = piVar3;
          if (piVar10 == piVar11) {
            FUN_ram_4004b82c(param_1,piVar3);
            piVar8 = piVar11;
            piVar10 = piVar3;
          }
          piVar8[3] = 1;
          piVar9[3] = 0;
          FUN_ram_4004b852(param_1,piVar9);
        } while( true );
      }
      FUN_ram_4005ab56(piVar4);
    }
  }
  return (int *)0x0;
}


/* NanoCore 1.11, address 0x4004bb3c.
 * REA evidence: ev_a899c2390136461194e1dd7c395753296b124992da0c58f0e5310f266aa74d7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004bb3c(int *param_1,int *param_2)

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
      goto LAB_ram_4004bb8a;
    }
    *param_1 = (int)piVar3;
    if (iVar5 != 1) goto LAB_ram_4004bbc6;
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
LAB_ram_4004bb8a:
    if ((iVar5 != iVar6) || (param_1 == (int *)0x0)) goto LAB_ram_4004bbc6;
  }
  FUN_ram_4004b878(param_1,piVar3,piVar1);
LAB_ram_4004bbc6:
  iVar5 = param_2[4];
  FUN_ram_4005ab56(param_2);
  return iVar5;
}


/* NanoCore 1.11, address 0x4004bbda.
 * REA evidence: ev_09aa615e5aa22300d8b564a0aaf8e613064aac7ab9c185f6041d5846343003ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004bbda(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_ram_4004bb3c();
    if (iVar1 != 0) {
      FUN_ram_4005ab56();
    }
    return iVar1 != 0;
  }
  return false;
}


/* NanoCore 1.11, address 0x4004bbe8.
 * REA evidence: ev_b79abcecd3a77ca600a069520d3f14ec9463636755cf4720bc18302e4bcfb584
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004bbe8(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004bb3c();
  if (iVar1 != 0) {
    FUN_ram_4005ab56();
  }
  return iVar1 != 0;
}


/* NanoCore 1.11, address 0x4004bbfa.
 * REA evidence: ev_c1f1108ac3c5df70d7f812a540bb8529277ab42527c5fc1ef91ca81a3d4ad8b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bbfa(int *param_1)

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
        FUN_ram_4005ab56(piVar1[4]);
        FUN_ram_4005ab56(piVar1);
      }
    }
    *param_1 = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4004bc4e.
 * REA evidence: ev_021abf29681d1f90aacb813221f1cb4476e8f7c2ed92a95210b304c0ad14eb65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bc4e(undefined4 param_1)

{
  thunk_FUN_ram_4000504c(param_1,0,0xc);
  return;
}


/* NanoCore 1.11, address 0x4004bc56.
 * REA evidence: ev_21e6e3bcb1696e75a9eba4a6b976cd69da9e0ba273b1975e76a7eae3224b26d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bc56(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) != -1) {
    FUN_ram_4005ab56(*param_1);
  }
  thunk_FUN_ram_4000504c(param_1,0,0xc);
  return;
}


/* NanoCore 1.11, address 0x4004bc80.
 * REA evidence: ev_7af2070737220d1951e878c80ca318341b963ddf67162adee427bd750a1d7020
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004bc80(int *param_1,uint param_2)

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
      iVar1 = FUN_ram_4005ab20((uVar3 - 1) * 5);
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
      FUN_ram_4005ab56(iVar6);
      return 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar3);
  return 0;
}


/* NanoCore 1.11, address 0x4004bd22.
 * REA evidence: ev_87400c8fc0bb3ed99c885f34f2d3b67ed7ac31c81cfb0a955939849ccd47dc4b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bd22(int *param_1,uint param_2,undefined4 param_3)

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
LAB_ram_4004bd44:
      iVar1 = FUN_ram_4005ab68(iVar1,(uVar5 + 1 & 0xff) * 5);
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
        if (uVar3 == 0) goto LAB_ram_4004bd44;
        uVar3 = uVar3 - 1;
      } while (*(byte *)(iVar1 + uVar5 * 4 + uVar3) != param_2);
      *(undefined4 *)(iVar1 + uVar3 * 4) = param_3;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004bdde.
 * REA evidence: ev_83b1db53bb2cdd56ab6f6197942d639a9c3edc68bd1881a97abcad9ae421bc9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004bdde(undefined4 *param_1,uint param_2,undefined4 *param_3)

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


/* NanoCore 1.11, address 0x4004be24.
 * REA evidence: ev_f6e42d9bccd36f65e9794683eb88a28b228837d6dae2321e3e982fa2230a57bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined ** FUN_ram_4004be24(uint param_1)

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
        uStack_4 = (undefined **)(uint)CONCAT12(DAT_ram_4009972a,DAT_ram_40099728);
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
        return &PTR_LAB_ram_40012e96_ram_40094b68;
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


/* NanoCore 1.11, address 0x4004bebe.
 * REA evidence: ev_e95735a1facdb05f0b667946e2219a920f6dcdecfe4fb37fc4230e9c09bd260d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004bebe(int param_1)

{
  return *(char *)(param_1 + 8) == '\0';
}


/* NanoCore 1.11, address 0x4004bec8.
 * REA evidence: ev_1cd92dd89d58c60a2d5967a8eeb7ac63a8418353f559bc93d846fcb15e5d14a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_4004bec8(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0xff) {
    return 0x3f;
  }
  if (param_1 != 0) {
    if (param_1 < 0x8d) {
      return (&DAT_ram_40099698)[param_1];
    }
    if ((_DAT_ram_30080c90 != 0) && (uVar1 = param_1 + 0x73 & 0xff, uVar1 < _DAT_ram_30080c88)) {
      return *(undefined1 *)(_DAT_ram_30080c90 + uVar1);
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004bf52.
 * REA evidence: ev_b46925bc7546d2a15ef34adfd6b9a8bee733a48707f8aa1d2538c1416d0c356d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004bf52(int param_1,int *param_2)

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
LAB_ram_4004bfa4:
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
        goto LAB_ram_4004bfa4;
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
          goto LAB_ram_4004bfa4;
        }
      }
    }
  }
  return 0;
}


