/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4004c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4004c0b4.
 * REA evidence: ev_38a3c13fbb463073dd2f26649017684290fdcff8b033774038c0e2c549407632
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c0b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  for (iVar1 = 0; (iVar2 != param_2 && (*(char *)(param_1 + iVar1) != '\0')); iVar1 = iVar1 + uVar4)
  {
    uVar3 = (**(code **)(gp + -0x2c))(param_1 + iVar1);
    uVar4 = uVar3 & 0xff;
    if (uVar3 == 0) {
      uVar4 = 1;
    }
    iVar2 = iVar2 + 1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004c100.
 * REA evidence: ev_4c473da951942e2ce4a06805c5778c60c281c56c1739e892ca577e1f1c73cf6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c100(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint auStack_24 [4];
  
  auStack_24[0] = 0;
  iVar1 = 0;
  while (auStack_24[0] < param_2) {
    (**(code **)(gp + -0x34))(param_1,auStack_24);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004c13c.
 * REA evidence: ev_47d3db5d4eda5591d48276947efdc33ebc076cbd07c649ee5b538a3fe12ce2a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c13c(int param_1)

{
  int iVar1;
  int iStack_14;
  
  iStack_14 = 0;
  iVar1 = 0;
  while (*(char *)(param_1 + iStack_14) != '\0') {
    (**(code **)(gp + -0x34))(param_1,&iStack_14);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004c174.
 * REA evidence: ev_de0ccc3d1085e398abadf41454fdfd2b1220288f889f4fe5cc84573eabdccfe5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004c174(int param_1)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if ((((0x51ff < param_1 - 0x4e00U) && (0x5d < param_1 - 0xff01U)) && (0xff < param_1 - 0x3000U))
       && (((0x7f < param_1 - 0x2e80U && (0x2f < param_1 - 0x31c0U)) && (0xf < param_1 - 0xfe10U))))
    {
      return param_1 - 0xfe30U < 0x20;
    }
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4004c1e2.
 * REA evidence: ev_7d6a430f81bcade04e9c4ba7c83e36a0e8d2b2a8e52c72e41ec1ea7e06e0aa78
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c1e2(char *param_1,int param_2,int param_3,int param_4,int *param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iStack_5c;
  int iStack_4c;
  int iStack_48;
  int aiStack_44 [4];
  
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  iStack_4c = 0;
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) && (param_2 != 0)) {
    if ((param_6 & 3) == 0) {
      if ((param_6 & 1) != 0) {
        param_4 = 0x1fffffff;
      }
      iStack_4c = 0;
      iVar12 = 0;
      iStack_5c = 0x1fffffff;
      do {
        iVar2 = iStack_4c;
        pcVar15 = param_1 + iStack_4c;
        if ((param_1[iStack_4c] == '\0') || (param_4 < 1)) goto LAB_ram_4004c3a6;
        iStack_48 = 0;
        aiStack_44[0] = 0;
        iVar9 = iStack_5c;
        if ((param_6 & 1) == 0) {
          iVar9 = param_4;
        }
        uVar3 = (**(code **)(gp + -0x34))(pcVar15,&iStack_48);
        aiStack_44[0] = iStack_48;
        iVar17 = -1;
        iVar16 = 0;
        uVar18 = 0;
        iVar10 = 0;
        iVar13 = 0;
        iVar5 = 0;
        while (iVar14 = iVar13, iVar11 = iVar5, iStack_48 = aiStack_44[0], pcVar15[iVar10] != '\0')
        {
          pcVar8 = *(code **)(gp + -0x34);
          uVar18 = (*pcVar8)(pcVar15,aiStack_44,pcVar8);
          iVar11 = iVar5 + 1;
          iVar4 = FUN_ram_40059926(param_2,uVar3,uVar18);
          iVar16 = iVar16 + iVar4;
          if (iVar4 != 0) {
            iVar16 = iVar16 + param_3;
          }
          if ((iVar17 == -1) && (iVar9 < iVar16 - param_3)) {
            iVar17 = iVar10;
          }
          if ((uVar3 == 10) || (uVar3 == 0xd)) {
LAB_ram_4004c35c:
            iVar11 = iVar5;
            if (iVar10 == 0) goto joined_r0x4004c360;
            break;
          }
          for (uVar7 = 0; (byte)(&DAT_ram_4009972c)[uVar7] != 0; uVar7 = uVar7 + 1 & 0xff) {
            if (uVar3 == (byte)(&DAT_ram_4009972c)[uVar7]) goto LAB_ram_4004c35c;
          }
          iVar5 = FUN_ram_4004c174(uVar18);
          iVar10 = iStack_48;
          iVar14 = iVar16;
          if ((iVar5 != 0) || (iVar5 = FUN_ram_4004c174(uVar3), iVar5 != 0)) break;
          uVar3 = uVar18;
          iVar5 = iVar11;
          if (iVar17 == -1) {
            iVar13 = iVar16;
          }
        }
        iVar13 = iVar14;
        iVar16 = iVar14;
        iVar5 = iVar11;
joined_r0x4004c360:
        if (iVar17 == -1) {
          if ((iVar5 == 0) || ((uVar3 == 0xd && (uVar18 == 10)))) {
            iVar10 = iStack_48;
          }
        }
        else {
          iVar10 = iVar17;
          iVar16 = iVar13;
          if (iVar2 != 0) {
            iVar16 = 0;
            iVar10 = 0;
          }
        }
        param_4 = param_4 - iVar16;
        iVar12 = iVar12 + iVar16;
        if (iVar10 == 0) goto LAB_ram_4004c3a6;
        iStack_4c = iVar10 + iStack_4c;
        if ((*param_1 == '\n') || (*param_1 == '\r')) goto LAB_ram_4004c3a6;
      } while ((param_1[iStack_4c] != '\n') && (param_1[iStack_4c] != '\r'));
      iStack_4c = iStack_4c + 1;
LAB_ram_4004c3a6:
      if (iStack_4c == 0) {
        uVar6 = (**(code **)(gp + -0x34))(param_1,&iStack_4c);
        if (param_5 == (int *)0x0) {
          return iStack_4c;
        }
        iVar12 = FUN_ram_40059926(param_2,uVar6,0);
      }
      else if (param_5 == (int *)0x0) {
        return iStack_4c;
      }
      *param_5 = iVar12;
    }
    else {
      for (iStack_4c = 0; (cVar1 = param_1[iStack_4c], cVar1 != '\n' && (cVar1 != '\r'));
          iStack_4c = iStack_4c + 1) {
        if (cVar1 == '\0') goto LAB_ram_4004c23c;
      }
      iStack_4c = iStack_4c + 1;
LAB_ram_4004c23c:
      if (param_5 != (int *)0x0) {
        *param_5 = -1;
      }
    }
  }
  return iStack_4c;
}


/* NanoCore 1.11, address 0x4004c3e6.
 * REA evidence: ev_fb6882d265ac1c7cea2471ae21bd48aac9e9784fbc5f3748e7a938a4e7b01ef7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c3e6(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(gp + -0x34))(param_1,param_4);
  *param_2 = iVar1;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(gp + -0x34))(*param_4 + param_1,0);
  }
  *param_3 = uVar2;
  return;
}


/* NanoCore 1.11, address 0x4004c426.
 * REA evidence: ev_db9d396c4fa3c4943c228939340519ed8e45c8f3f690491534cc6b70a2ebe65e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c426(char *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  iVar1 = 0;
  if ((((param_1 != (char *)0x0) && (param_3 != 0)) && (*param_1 != '\0')) &&
     (uStack_2c = 0, param_2 != 0)) {
    do {
      FUN_ram_4004c3e6(param_1,&uStack_28,auStack_24,&uStack_2c);
      iVar2 = FUN_ram_40059926(param_3,uStack_28,auStack_24[0]);
      if (iVar2 != 0) {
        iVar1 = iVar1 + iVar2 + param_4;
      }
    } while (uStack_2c < param_2);
    if (0 < iVar1) {
      iVar1 = iVar1 - param_4;
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004c488.
 * REA evidence: ev_ce9b5eed76da06d428fbf1aba4bc66bbcce664d13abd8039b3e2fcf91d907f95
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c488(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                     undefined4 param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    return;
  }
  if (param_3 != 0) {
    if ((param_7 & 1) != 0) {
      param_6 = 0x1fffffff;
    }
    uVar1 = *(uint *)(param_3 + 0xc);
    iVar3 = 0;
    while (iVar4 = param_2 + iVar3, *(char *)(param_2 + iVar3) != '\0') {
      iVar2 = FUN_ram_4004c1e2(iVar4,param_3,param_4,param_6,0,param_7);
      iVar3 = iVar3 + iVar2;
      if ((int)((uVar1 & 0xffff) + param_5 + param_1[1]) < 0) {
        return;
      }
      param_1[1] = param_1[1] + (uVar1 & 0xffff) + param_5;
      iVar2 = FUN_ram_4004c426(iVar4,iVar2,param_3,param_4);
      iVar4 = *param_1;
      if (*param_1 < iVar2) {
        iVar4 = iVar2;
      }
      *param_1 = iVar4;
    }
    if ((iVar3 != 0) && ((*(char *)(iVar4 + -1) == '\n' || (*(char *)(iVar4 + -1) == '\r')))) {
      param_1[1] = param_1[1] + (uVar1 & 0xffff) + param_5;
    }
    if (param_1[1] == 0) {
      param_1[1] = uVar1 & 0xffff;
    }
    else {
      param_1[1] = param_1[1] - param_5;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004c572.
 * REA evidence: ev_cd046d155c67cc63056ba7dd8aebe93ba2a0da1de486fc14f46ef4ff22f97a55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c572(void)

{
  _DAT_ram_30080ce4 = 0;
  if (_DAT_ram_30080cfc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004c58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_30080cfc)(_DAT_ram_30080d00);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4004c590.
 * REA evidence: ev_5182dd27dd2a9f660c62b871533e17abd314724ae4b58821d903aa980acaa73c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c590(void)

{
  FUN_ram_4004b33e(0x30080cd4,0x18);
  DAT_ram_30080ce0 = 1;
  FUN_ram_4004c572();
  return;
}


/* NanoCore 1.11, address 0x4004c5b4.
 * REA evidence: ev_5ee79ecc1b3cc385be6c08a00bbee2ac72bd4944994cc3db26f91f722c7e19db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4004c5b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4004b34e(0x30080cd4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 0xffffffff;
    puVar1[2] = param_1;
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xfe;
    *puVar1 = param_2;
    uVar2 = FUN_ram_40056c6c();
    puVar1[1] = uVar2;
    puVar1[3] = param_3;
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 2;
    DAT_ram_30080ce3 = 1;
    FUN_ram_4004c572();
  }
  return puVar1;
}


/* NanoCore 1.11, address 0x4004c61a.
 * REA evidence: ev_30e7484305ef80b30b0b4a8d83ca9ff721d850f737cb9a42c22830fb6ecfa283
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c61a(undefined4 param_1)

{
  FUN_ram_4004b45a(0x30080cd4,param_1);
  DAT_ram_30080ce2 = 1;
  FUN_ram_4005ab56(param_1);
  return;
}


/* NanoCore 1.11, address 0x4004c646.
 * REA evidence: ev_dfbdc0646f9e60fb891253360a7dc909462632ff99abb8b5c20c83cc0bdd9729
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4004c646(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  
  uVar1 = 1;
  if (DAT_ram_30080ce8 == '\0') {
    uVar7 = _DAT_ram_30080ce0 & 0xff;
    DAT_ram_30080ce8 = 1;
    uVar5 = _DAT_ram_30080ce4;
    if (uVar7 != 0) {
      iVar3 = FUN_ram_40056c6c();
      if ((iVar3 == 0) && (_DAT_ram_30080cf8 = _DAT_ram_30080cf8 + 1, 100 < _DAT_ram_30080cf8)) {
        _DAT_ram_30080cf8 = 0;
      }
LAB_ram_4004c6c0:
      _DAT_ram_30080ce0 = _DAT_ram_30080ce0 & 0xffff;
      puVar4 = (uint *)FUN_ram_4004b518(0x30080cd4);
LAB_ram_4004c6d0:
      while (puVar2 = puVar4, puVar2 != (uint *)0x0) {
        puVar4 = (uint *)FUN_ram_4004b524(0x30080cd4,puVar2);
        if ((puVar2[5] & 1) == 0) goto code_r0x4004c708;
      }
      puVar4 = (uint *)FUN_ram_4004b518(0x30080cd4);
      uVar1 = 0xffffffff;
      while (puVar4 != (uint *)0x0) {
        if ((puVar4[5] & 1) == 0) {
          uVar5 = FUN_ram_40056c92(puVar4[1]);
          uVar7 = 0;
          if (uVar5 < *puVar4) {
            uVar7 = *puVar4 - uVar5;
          }
          if (uVar7 < uVar1) {
            uVar1 = uVar7;
          }
        }
        puVar4 = (uint *)FUN_ram_4004b524(0x30080cd4);
      }
      iVar3 = FUN_ram_40056c92(iVar3);
      _DAT_ram_30080cf0 = _DAT_ram_30080cf0 + iVar3;
      uVar7 = FUN_ram_40056c92(_DAT_ram_30080cf4);
      uVar5 = uVar1;
      if (499 < uVar7) {
        if (uVar7 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(_DAT_ram_30080cf0 * 100) / uVar7;
        }
        cVar6 = '\0';
        if ((uVar7 & 0xff) < 0x65) {
          cVar6 = 'd' - (char)uVar7;
        }
        _DAT_ram_30080ce0 = CONCAT11(cVar6,DAT_ram_30080ce0);
        _DAT_ram_30080cf0 = 0;
        _DAT_ram_30080cf4 = FUN_ram_40056c6c();
      }
    }
    _DAT_ram_30080ce4 = uVar5;
    DAT_ram_30080ce8 = '\0';
  }
  return uVar1;
code_r0x4004c708:
  uVar5 = FUN_ram_40056c92(puVar2[1]);
  uVar1 = 0;
  if (*puVar2 <= uVar5) {
    uVar5 = puVar2[4];
    if (0 < (int)uVar5) {
      puVar2[4] = uVar5 - 1;
    }
    uVar1 = FUN_ram_40056c6c();
    puVar2[1] = uVar1;
    uVar1 = uVar7;
    if (((code *)puVar2[2] != (code *)0x0) && (uVar5 != 0)) {
      (*(code *)puVar2[2])(puVar2);
    }
  }
  if ((DAT_ram_30080ce2 == '\0') && (puVar2[4] == 0)) {
    if (((byte)puVar2[5] & 2) == 0) {
      *(byte *)(puVar2 + 5) = (byte)puVar2[5] | 1;
    }
    else {
      FUN_ram_4004c61a(puVar2);
    }
  }
  if ((uVar1 == 0) || ((_DAT_ram_30080ce0 & 0xffff0000) == 0)) goto LAB_ram_4004c6d0;
  goto LAB_ram_4004c6c0;
}


/* NanoCore 1.11, address 0x4004c7fe.
 * REA evidence: ev_734f85ef969f734f4b1bb89a26b16b1f60c827934c0d66549ae616ae351bb82d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c7fe(int param_1)

{
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
  return;
}


/* NanoCore 1.11, address 0x4004c80c.
 * REA evidence: ev_44c42839e0daebf939bc1a3c377e17f7ae9d82d9c8e2191995cdcc99cab89921
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c80c(int param_1)

{
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  FUN_ram_4004c572();
  return;
}


/* NanoCore 1.11, address 0x4004c81a.
 * REA evidence: ev_539a04a9d6371602609d0839b93fbcb60c5c5ea5b1e67a2e045ebe3a2c49fe90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c81a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* NanoCore 1.11, address 0x4004c81e.
 * REA evidence: ev_713563b9861912c22230e086c51022a1162b5396839d08c935f6290d700040fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c81e(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40056c6c();
  param_1[1] = ~*param_1 + iVar1;
  return;
}


/* NanoCore 1.11, address 0x4004c83c.
 * REA evidence: ev_5c53781213bad0ca24625f92982a68bce0912255fbe4b1ddf9c890247a44619c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c83c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4004c840.
 * REA evidence: ev_d365589bb9fdddee302457710b0531f3bfb855669a91366cb44673fcf8fa5221
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c840(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40056c6c();
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_ram_4004c572();
  return;
}


/* NanoCore 1.11, address 0x4004c858.
 * REA evidence: ev_69e4779c33bce4404355d8c174045c44ce383d1437e8d09e3bdc70c375709df3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c858(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004b518();
    return;
  }
  FUN_ram_4004b524(0x30080cd4);
  return;
}


/* NanoCore 1.11, address 0x4004c86c.
 * REA evidence: ev_4ffc22d0d3f2c7aef5021f5f996e110536f97a7e1f53bfd0b89fba348aa0082f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c86c(undefined4 param_1,int param_2,uint param_3,int param_4,code *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  do {
    while( true ) {
      if (param_3 == 0) {
        return 0;
      }
      uVar2 = param_3 >> 1;
      iVar1 = param_2 + uVar2 * param_4;
      iVar3 = (*param_5)(param_1,iVar1);
      if (iVar3 < 1) break;
      param_2 = iVar1 + param_4;
      param_3 = uVar2 - (~param_3 & 1);
    }
    param_3 = uVar2;
  } while (iVar3 != 0);
  return iVar1;
}


/* NanoCore 1.11, address 0x4004c912.
 * REA evidence: ev_fd36ad49d2b05e7ae3d4f622a8b07351613e182e4d365fe3b6ea57231128eeb9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004c912(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_ram_4004b51e(param_1 + 0x2c);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    uVar2 = FUN_ram_4004cf54(*(undefined4 *)(*piVar1 + 0x10),*(undefined4 *)(param_1 + 4));
    iVar3 = FUN_ram_4004cf28();
    if (iVar3 == 0) break;
    piVar1 = (int *)FUN_ram_4004b52c(param_1 + 0x2c,piVar1);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4004c95a.
 * REA evidence: ev_cdb1869a44cee7d476eb965abef8a1d6ba354fcc1f2d36a2ed64f575c5fe1500
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004c95a(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar5 = param_1 + 0x2c;
    piVar1 = (int *)FUN_ram_4004b518(iVar5);
    if (piVar1 != (int *)0x0) {
      uVar4 = *(undefined4 *)(*piVar1 + 0x10);
      uVar3 = FUN_ram_4004cf54(uVar4,*(undefined4 *)(param_1 + 4));
      iVar2 = (**(code **)(param_1 + 0x10))(uVar4,param_2);
      if (iVar2 == 0) {
        return uVar3;
      }
    }
    iVar2 = FUN_ram_4004b9b8(param_1 + 0x20,param_2);
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + *(int *)(param_1 + 0x28) + -4);
      uVar3 = FUN_ram_4004b518(iVar5);
      FUN_ram_4004b534(iVar5,uVar4,uVar3);
      uVar3 = FUN_ram_4004cf54(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 4));
      return uVar3;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004c9e8.
 * REA evidence: ev_e50c771a343c7d2c9c7c26201cf50f012b9d1c0ceb5383de9add04577d2c2d3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c9e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
      (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar1 = FUN_ram_4004cf58();
    iVar2 = FUN_ram_4004b97a(param_1 + 0x20,iVar2,iVar1 + 4);
    if (iVar2 != 0) {
      FUN_ram_4004b33e(param_1 + 0x2c,4);
      *(undefined1 **)(param_1 + 0x38) = &LAB_ram_4004c90a;
      return iVar2;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004ca3c.
 * REA evidence: ev_bd99f79df93d11f6f929a2196dd53c4bb92d0b44beb91169fcb3372dcb6a9208
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ca3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
      (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar1 = FUN_ram_4004cf58();
    iVar2 = FUN_ram_4004b97a(param_1 + 0x20,iVar2,iVar1 + 4);
    if (iVar2 != 0) {
      FUN_ram_4004b33e(param_1 + 0x2c,4);
      *(undefined1 **)(param_1 + 0x38) = &LAB_ram_4004c90e;
      return iVar2;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004cbe8.
 * REA evidence: ev_d3f7c334a15ece2b4c9e285b93675cf6672d60db7a78e66ac4c6ad16e4605f96
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004cbe8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_28;
  int aiStack_24 [3];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iStack_28 = FUN_ram_4004b9f2(param_1 + 0x20);
    if (iStack_28 != 0) {
      uVar3 = *(undefined4 *)(iStack_28 + 0x10);
      uVar1 = FUN_ram_4004cf54(uVar3,*(undefined4 *)(param_1 + 4));
      thunk_FUN_ram_400050c6(uVar3,param_2,*(undefined4 *)(param_1 + 4));
      aiStack_24[0] = FUN_ram_4004b34e(param_1 + 0x2c);
      if (aiStack_24[0] == 0) {
        FUN_ram_4004bbda(param_1 + 0x20,iStack_28);
        iStack_28 = 0;
      }
      else {
        thunk_FUN_ram_400050c6(aiStack_24[0],&iStack_28,4);
        thunk_FUN_ram_400050c6
                  (*(int *)(iStack_28 + 0x10) + *(int *)(param_1 + 0x28) + -4,aiStack_24,4);
        FUN_ram_4004cf5c(uVar1,param_1,*(undefined4 *)(param_1 + 4));
      }
    }
    if (iStack_28 != 0) {
      uVar1 = FUN_ram_4004cf54(*(undefined4 *)(iStack_28 + 0x10),*(undefined4 *)(param_1 + 4));
      iVar2 = (**(code **)(param_1 + 0x38))(param_2);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar2;
      return uVar1;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004cc8a.
 * REA evidence: ev_3eec0392ba829ceb711a90bf429fe217b555fcbef129f8ad69cd6742def44011
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cc8a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005ab20(0x3c);
  if (iVar1 != 0) {
    thunk_FUN_ram_4000504c(iVar1,0,0x3c);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004ccb0.
 * REA evidence: ev_dbc98a3fb856d20b8d934ae83f96a1bfb10183422c6c8393c4ea2a00bcee9bab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004ccb0(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x14))
              (param_1,iVar2,param_2,extraout_a3,extraout_a4,*(code **)(*param_1 + 0x14));
    pcVar1 = (code *)param_1[6];
    uVar3 = FUN_ram_4004cf38(iVar2);
    (*pcVar1)(uVar3,param_2);
    FUN_ram_4004cf6a(iVar2);
  }
  return iVar2 != 0;
}


/* NanoCore 1.11, address 0x4004ccf4.
 * REA evidence: ev_b139318084d9591e97dd65dc73e70989e88d437e0cdf7e0c8dd10fe5e6301043
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4004ccf4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a4;
  
  iVar1 = (**(code **)(*param_1 + 0x24))
                    (param_1,param_2,0,param_3,param_5,*(code **)(*param_1 + 0x24));
  if (iVar1 != 1) {
    while( true ) {
      if (iVar1 != 2) {
                    /* WARNING: Could not recover jumptable at 0x4004cd5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
        return uVar2;
      }
      iVar1 = FUN_ram_4004ccb0(param_1,param_3);
      if (iVar1 == 0) break;
      iVar1 = (**(code **)(*param_1 + 0x24))
                        (param_1,param_2,0,param_3,extraout_a4,*(code **)(*param_1 + 0x24));
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004cd5c.
 * REA evidence: ev_ec039ced902232f8ea9792885a6747975e928e5912bb7f5be0139b00013e8d00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4004cd5c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(code *)*param_1)();
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  *piVar1 = (int)param_1;
  piVar1[3] = 0;
  FUN_ram_4000304c(piVar1 + 4,param_4,0xc);
  iVar2 = (*(code *)param_1[1])(piVar1);
  if (iVar2 == 0) {
    FUN_ram_4005ab56(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    FUN_ram_4005aa6e(piVar1 + 7);
  }
  return piVar1;
}


/* NanoCore 1.11, address 0x4004cdb2.
 * REA evidence: ev_d820c495a36cb063998061599e98678ffdac62c20d11ffa1e524e72c9681e02c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cdb2(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  FUN_ram_4005aa92(param_1 + 7);
  iVar1 = (**(code **)(*param_1 + 0xc))
                    (param_1,param_2,param_3,extraout_a3,extraout_a4,*(code **)(*param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_ram_4004cf3e();
  }
  FUN_ram_4005aaa8(param_1 + 7);
  return iVar1;
}


/* NanoCore 1.11, address 0x4004cdee.
 * REA evidence: ev_076984b953195ee3776c4249ca01b1fb855d715ea7afc3ed894955055a12a4db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cdee(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  FUN_ram_4005aa92(param_1 + 0x1c);
  FUN_ram_4004cf4a(param_2,param_3);
  iVar1 = FUN_ram_4004cf28(param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4004cf32(param_2), iVar1 != 0)) {
    pcVar3 = *(code **)(param_1 + 0x18);
    uVar2 = FUN_ram_4004cf38(param_2);
    (*pcVar3)(uVar2,param_3);
    FUN_ram_4004cf6a(param_2);
  }
  FUN_ram_4005aaa8(param_1 + 0x1c);
  return;
}


/* NanoCore 1.11, address 0x4004ce3e.
 * REA evidence: ev_4989544cb017fbae26bde9fb836a8fd2e809b65a8d03f484787dfddda7df62dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ce3e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_4005aa92(param_1 + 0x1c);
  iVar1 = FUN_ram_4004ccf4(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_ram_4004cf3e();
  }
  FUN_ram_4005aaa8(param_1 + 0x1c);
  return iVar1;
}


/* NanoCore 1.11, address 0x4004ce78.
 * REA evidence: ev_f74c4d1da9bd1fad9dcf52280c168a084bc437f05670cb05a612214454c24374
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ce78(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_a3;
  undefined4 extraout_a3_00;
  undefined4 extraout_a3_01;
  undefined4 extraout_a4;
  undefined4 extraout_a4_00;
  undefined4 extraout_a4_01;
  
  FUN_ram_4005aa92(param_1 + 7);
  iVar2 = (**(code **)(*param_1 + 0xc))
                    (param_1,param_2,param_3,extraout_a3,extraout_a4,*(code **)(*param_1 + 0xc));
  if (iVar2 != 0) {
    iVar3 = FUN_ram_4004cf28();
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x14))
                (param_1,iVar2,param_3,extraout_a3_00,extraout_a4_00,*(code **)(*param_1 + 0x14));
      pcVar1 = (code *)param_1[6];
      uVar4 = FUN_ram_4004cf38(iVar2);
      (*pcVar1)(uVar4,param_3);
      FUN_ram_4004cf6a(iVar2);
    }
    else {
      FUN_ram_4004cf2c(iVar2,1);
      (**(code **)(*param_1 + 0x14))
                (param_1,iVar2,param_3,extraout_a3_01,extraout_a4_01,*(code **)(*param_1 + 0x14));
    }
  }
  FUN_ram_4005aaa8(param_1 + 7);
  return;
}


/* NanoCore 1.11, address 0x4004cee8.
 * REA evidence: ev_1c1c14270da1ba76ed538ebe41e9f213d157cdf2de60bb16cada8b26bcd599bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cee8(int *param_1,undefined4 param_2)

{
  FUN_ram_4005aa92(param_1 + 7);
  (**(code **)(*param_1 + 0x1c))(param_1,param_2);
  FUN_ram_4005aaa8(param_1 + 7);
  return;
}


/* NanoCore 1.11, address 0x4004cf16.
 * REA evidence: ev_2a414e5365e5c61386812c48adb6ce460ce6751988a8f4604c44e1e5f7d7837a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cf16(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar1) {
    *(int *)(param_1 + 4) = iVar1;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


/* NanoCore 1.11, address 0x4004cf28.
 * REA evidence: ev_7dd3fc6ba73e26c2725380e55f721f14b793c42d0b74b66e8ff2ecc995025adf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004cf28(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* NanoCore 1.11, address 0x4004cf2c.
 * REA evidence: ev_4dfbd79274384c2d8345cb5949d96141249cf01d3648a97518d5b095d63eab95
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cf2c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4004cf32.
 * REA evidence: ev_18d3d77c83eb8da9da8e999b034c90b0d46bad64c28d1ffa3798605fbf6ee514
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4004cf32(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}


/* NanoCore 1.11, address 0x4004cf38.
 * REA evidence: ev_7be21326d2da875055627de4549b8f1bff8778a1c6f289218677ed98600dd3bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cf38(int param_1)

{
  return param_1 - *(int *)(param_1 + 8);
}


/* NanoCore 1.11, address 0x4004cf3e.
 * REA evidence: ev_42c07a5e6841da32bb8a0ec368058746c1d1c5d81a9dc1ee9f0601178e4c7145
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cf3e(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return param_1 - *(int *)(param_1 + 8);
}


/* NanoCore 1.11, address 0x4004cf4a.
 * REA evidence: ev_839c225e14c46e94683ff30042fe30778ca87359c7ff9231cc60e50e94e831e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cf4a(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_ram_4004cf16();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4004cf54.
 * REA evidence: ev_5bf1e6cc1f56115ea1048b991336a2c934533de773299af06370a5001d2284ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cf54(int param_1,int param_2)

{
  return param_1 + param_2;
}


/* NanoCore 1.11, address 0x4004cf58.
 * REA evidence: ev_b62a7a66b88bf10c1a83b6748909d47a32de98d8b5b8a7d233cef33fad320818
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cf58(int param_1)

{
  return param_1 + 0x10;
}


/* NanoCore 1.11, address 0x4004cf5c.
 * REA evidence: ev_fff8a3466b5af0b255c6a70ff427691830cec3335423b4c4bb40ea15f793a589
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cf5c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


/* NanoCore 1.11, address 0x4004cf6a.
 * REA evidence: ev_61e027040233c929ee6d004de2396cf288d7dcfb2950df5916558a78630c88be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cf6a(int param_1)

{
  FUN_ram_4005ab56(param_1 - *(int *)(param_1 + 8));
  return;
}


/* NanoCore 1.11, address 0x4004cf72.
 * REA evidence: ev_dbe3b7ee7560e0ebc45e9ed2dac6629e9e05c4df52df6efa1eaa88b9e290a5af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004cf72(int param_1)

{
  undefined1 uVar1;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    FUN_ram_4004cee8(_DAT_ram_30080d4c,0);
    return;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_28 = param_1;
  uVar1 = FUN_ram_4004e290();
  uStack_24 = CONCAT31(uStack_24._1_3_,uVar1);
  FUN_ram_4004ce78(_DAT_ram_30080d4c,&iStack_28,0);
  return;
}


/* NanoCore 1.11, address 0x4004cfba.
 * REA evidence: ev_c5e1a31604b42bbcae7bdb887bc594e0ea9293d3248682ec59038b686135c0cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004cfba(int param_1)

{
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 uStack_20;
  
  FUN_ram_4004cf72();
  if (param_1 == 0) {
    FUN_ram_4004cee8(_DAT_ram_30080d48,0);
    return;
  }
  memset(auStack_28,0,0x18);
  iStack_24 = param_1;
  uStack_20 = FUN_ram_4004e290(param_1);
  FUN_ram_4004ce78(_DAT_ram_30080d48,auStack_28,0);
  return;
}


