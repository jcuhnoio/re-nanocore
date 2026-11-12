/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4004b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4004b142.
 * REA evidence: ev_0dd04bfd936a12be67d7951290e7cfcd9997a56d8f345857274c43cd7668c98e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b142(int param_1,int param_2)

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


/* NanoCore 1.10, address 0x4004b18e.
 * REA evidence: ev_f3d8fbadacdcd4b7eb73f99598b3446ca4fa76aabfe08643d57e97fee3298e29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b18e(undefined4 param_1,uint param_2)

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


/* NanoCore 1.10, address 0x4004b1ca.
 * REA evidence: ev_58ebdcec835a418ff82b485439ae69cf9136740eb1cc6218e675361f9d1ae3b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b1ca(int param_1)

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


/* NanoCore 1.10, address 0x4004b202.
 * REA evidence: ev_94ce4a3c4986c34c8b851365af1a6e37bc0019b9f775e3daffa7aada0274772c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004b202(int param_1)

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


/* NanoCore 1.10, address 0x4004b270.
 * REA evidence: ev_e8241eb37b262cf62372c5b4faae0bc988417a5acb4cb6f3d0788c2c9ba88394
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b270(char *param_1,int param_2,int param_3,int param_4,int *param_5,uint param_6)

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
        if ((param_1[iStack_4c] == '\0') || (param_4 < 1)) goto LAB_ram_4004b434;
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
          iVar4 = FUN_ram_400589b4(param_2,uVar3,uVar18);
          iVar16 = iVar16 + iVar4;
          if (iVar4 != 0) {
            iVar16 = iVar16 + param_3;
          }
          if ((iVar17 == -1) && (iVar9 < iVar16 - param_3)) {
            iVar17 = iVar10;
          }
          if ((uVar3 == 10) || (uVar3 == 0xd)) {
LAB_ram_4004b3ea:
            iVar11 = iVar5;
            if (iVar10 == 0) goto joined_r0x4004b3ee;
            break;
          }
          for (uVar7 = 0; (byte)(&DAT_ram_400978b0)[uVar7] != 0; uVar7 = uVar7 + 1 & 0xff) {
            if (uVar3 == (byte)(&DAT_ram_400978b0)[uVar7]) goto LAB_ram_4004b3ea;
          }
          iVar5 = FUN_ram_4004b202(uVar18);
          iVar10 = iStack_48;
          iVar14 = iVar16;
          if ((iVar5 != 0) || (iVar5 = FUN_ram_4004b202(uVar3), iVar5 != 0)) break;
          uVar3 = uVar18;
          iVar5 = iVar11;
          if (iVar17 == -1) {
            iVar13 = iVar16;
          }
        }
        iVar13 = iVar14;
        iVar16 = iVar14;
        iVar5 = iVar11;
joined_r0x4004b3ee:
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
        if (iVar10 == 0) goto LAB_ram_4004b434;
        iStack_4c = iVar10 + iStack_4c;
        if ((*param_1 == '\n') || (*param_1 == '\r')) goto LAB_ram_4004b434;
      } while ((param_1[iStack_4c] != '\n') && (param_1[iStack_4c] != '\r'));
      iStack_4c = iStack_4c + 1;
LAB_ram_4004b434:
      if (iStack_4c == 0) {
        uVar6 = (**(code **)(gp + -0x34))(param_1,&iStack_4c);
        if (param_5 == (int *)0x0) {
          return iStack_4c;
        }
        iVar12 = FUN_ram_400589b4(param_2,uVar6,0);
      }
      else if (param_5 == (int *)0x0) {
        return iStack_4c;
      }
      *param_5 = iVar12;
    }
    else {
      for (iStack_4c = 0; (cVar1 = param_1[iStack_4c], cVar1 != '\n' && (cVar1 != '\r'));
          iStack_4c = iStack_4c + 1) {
        if (cVar1 == '\0') goto LAB_ram_4004b2ca;
      }
      iStack_4c = iStack_4c + 1;
LAB_ram_4004b2ca:
      if (param_5 != (int *)0x0) {
        *param_5 = -1;
      }
    }
  }
  return iStack_4c;
}


/* NanoCore 1.10, address 0x4004b474.
 * REA evidence: ev_ffc41e6a94cde6139fcb98a4e8a9b36ade4709a0de20c06105b73996c824cd7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b474(int param_1,int *param_2,undefined4 *param_3,int *param_4)

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


/* NanoCore 1.10, address 0x4004b4b4.
 * REA evidence: ev_220c9ae29a1c9205287818b5a8c093e772407cc1d12ef922592d113d2142b941
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b4b4(char *param_1,uint param_2,int param_3,int param_4)

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
      FUN_ram_4004b474(param_1,&uStack_28,auStack_24,&uStack_2c);
      iVar2 = FUN_ram_400589b4(param_3,uStack_28,auStack_24[0]);
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


/* NanoCore 1.10, address 0x4004b516.
 * REA evidence: ev_3eb583fed59a494431bbe14f2e6f46fe430e1284e7403e50ef5bb649693fd717
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b516(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
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
      iVar2 = FUN_ram_4004b270(iVar4,param_3,param_4,param_6,0,param_7);
      iVar3 = iVar3 + iVar2;
      if ((int)((uVar1 & 0xffff) + param_5 + param_1[1]) < 0) {
        return;
      }
      param_1[1] = param_1[1] + (uVar1 & 0xffff) + param_5;
      iVar2 = FUN_ram_4004b4b4(iVar4,iVar2,param_3,param_4);
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


/* NanoCore 1.10, address 0x4004b600.
 * REA evidence: ev_e594c0f1a9f9872fe163ed15c3f0bf5ecd6c06b0dc4919d2194497373ee4b384
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004b600(void)

{
  _DAT_ram_3007f964 = 0;
  if (_DAT_ram_3007f97c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004b61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3007f97c)(_DAT_ram_3007f980);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004b61e.
 * REA evidence: ev_9ba9a4d71c17a4783b804a9ae0c6bd0e151a116dca7c1d5e156ebe587673c4f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b61e(void)

{
  FUN_ram_4004a3cc(0x3007f954,0x18);
  DAT_ram_3007f960 = 1;
  FUN_ram_4004b600();
  return;
}


/* NanoCore 1.10, address 0x4004b642.
 * REA evidence: ev_e7d158a266f1877179bd097899983c2c8379d030902b152c913a85cccdfc4539
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4004b642(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4004a3dc(0x3007f954);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 0xffffffff;
    puVar1[2] = param_1;
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xfe;
    *puVar1 = param_2;
    uVar2 = FUN_ram_40055cfa();
    puVar1[1] = uVar2;
    puVar1[3] = param_3;
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 2;
    DAT_ram_3007f963 = 1;
    FUN_ram_4004b600();
  }
  return puVar1;
}


/* NanoCore 1.10, address 0x4004b6a8.
 * REA evidence: ev_70e87dae1b992bd4aa3650747adf9aef60c2c1533a7f1405dbbb26cf29c2d6c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b6a8(undefined4 param_1)

{
  FUN_ram_4004a4e8(0x3007f954,param_1);
  DAT_ram_3007f962 = 1;
  FUN_ram_40059be4(param_1);
  return;
}


/* NanoCore 1.10, address 0x4004b6d4.
 * REA evidence: ev_f177df8b73aedd091cdf7445ee1f6294e484989d2800edde867afeaed7eda5f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4004b6d4(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  
  uVar1 = 1;
  if (DAT_ram_3007f968 == '\0') {
    uVar7 = _DAT_ram_3007f960 & 0xff;
    DAT_ram_3007f968 = 1;
    uVar5 = _DAT_ram_3007f964;
    if (uVar7 != 0) {
      iVar3 = FUN_ram_40055cfa();
      if ((iVar3 == 0) && (_DAT_ram_3007f978 = _DAT_ram_3007f978 + 1, 100 < _DAT_ram_3007f978)) {
        _DAT_ram_3007f978 = 0;
      }
LAB_ram_4004b74e:
      _DAT_ram_3007f960 = _DAT_ram_3007f960 & 0xffff;
      puVar4 = (uint *)FUN_ram_4004a5a6(0x3007f954);
LAB_ram_4004b75e:
      while (puVar2 = puVar4, puVar2 != (uint *)0x0) {
        puVar4 = (uint *)FUN_ram_4004a5b2(0x3007f954,puVar2);
        if ((puVar2[5] & 1) == 0) goto code_r0x4004b796;
      }
      puVar4 = (uint *)FUN_ram_4004a5a6(0x3007f954);
      uVar1 = 0xffffffff;
      while (puVar4 != (uint *)0x0) {
        if ((puVar4[5] & 1) == 0) {
          uVar5 = FUN_ram_40055d20(puVar4[1]);
          uVar7 = 0;
          if (uVar5 < *puVar4) {
            uVar7 = *puVar4 - uVar5;
          }
          if (uVar7 < uVar1) {
            uVar1 = uVar7;
          }
        }
        puVar4 = (uint *)FUN_ram_4004a5b2(0x3007f954);
      }
      iVar3 = FUN_ram_40055d20(iVar3);
      _DAT_ram_3007f970 = _DAT_ram_3007f970 + iVar3;
      uVar7 = FUN_ram_40055d20(_DAT_ram_3007f974);
      uVar5 = uVar1;
      if (499 < uVar7) {
        if (uVar7 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(_DAT_ram_3007f970 * 100) / uVar7;
        }
        cVar6 = '\0';
        if ((uVar7 & 0xff) < 0x65) {
          cVar6 = 'd' - (char)uVar7;
        }
        _DAT_ram_3007f960 = CONCAT11(cVar6,DAT_ram_3007f960);
        _DAT_ram_3007f970 = 0;
        _DAT_ram_3007f974 = FUN_ram_40055cfa();
      }
    }
    _DAT_ram_3007f964 = uVar5;
    DAT_ram_3007f968 = '\0';
  }
  return uVar1;
code_r0x4004b796:
  uVar5 = FUN_ram_40055d20(puVar2[1]);
  uVar1 = 0;
  if (*puVar2 <= uVar5) {
    uVar5 = puVar2[4];
    if (0 < (int)uVar5) {
      puVar2[4] = uVar5 - 1;
    }
    uVar1 = FUN_ram_40055cfa();
    puVar2[1] = uVar1;
    uVar1 = uVar7;
    if (((code *)puVar2[2] != (code *)0x0) && (uVar5 != 0)) {
      (*(code *)puVar2[2])(puVar2);
    }
  }
  if ((DAT_ram_3007f962 == '\0') && (puVar2[4] == 0)) {
    if (((byte)puVar2[5] & 2) == 0) {
      *(byte *)(puVar2 + 5) = (byte)puVar2[5] | 1;
    }
    else {
      FUN_ram_4004b6a8(puVar2);
    }
  }
  if ((uVar1 == 0) || ((_DAT_ram_3007f960 & 0xffff0000) == 0)) goto LAB_ram_4004b75e;
  goto LAB_ram_4004b74e;
}


/* NanoCore 1.10, address 0x4004b88c.
 * REA evidence: ev_c51945868660d7ccf61b79e7424839f395ea8cf49bbf6aa6ce5eff38870b2653
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b88c(int param_1)

{
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
  return;
}


/* NanoCore 1.10, address 0x4004b89a.
 * REA evidence: ev_002aa2c3ef50999a4673ed94dd471d8ab4ec0456114d9b58aaf947ca01a97e10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b89a(int param_1)

{
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  FUN_ram_4004b600();
  return;
}


/* NanoCore 1.10, address 0x4004b8a8.
 * REA evidence: ev_70f7ff97bc382c0633c5c5772c432bb18d2b04de7ae5b0f8d729ca0d5f96acc5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b8a8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* NanoCore 1.10, address 0x4004b8ac.
 * REA evidence: ev_369ca1d465d6463e34360237a8238842ff8ef4cd21e39289444d891ab37b9c41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b8ac(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40055cfa();
  param_1[1] = ~*param_1 + iVar1;
  return;
}


/* NanoCore 1.10, address 0x4004b8ca.
 * REA evidence: ev_c46ed9cc682393081c22277197b6ccd6ed7a7e8598f138a75812c153ba52914d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b8ca(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4004b8ce.
 * REA evidence: ev_7745412d2cc1810d1e2faca937fc052486ca22aeda7d36ef2d1c19e812412fce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b8ce(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40055cfa();
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_ram_4004b600();
  return;
}


/* NanoCore 1.10, address 0x4004b8e6.
 * REA evidence: ev_73b935f98d492b425cb5c5f7385d1324f79b3c6c295abfb31d5b808129b14496
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b8e6(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004a5a6();
    return;
  }
  FUN_ram_4004a5b2(0x3007f954);
  return;
}


/* NanoCore 1.10, address 0x4004b8fa.
 * REA evidence: ev_bb1efb7555f7b982b0bc5c85bc493ffd91a2d8993e8740a402d79578ce9a34e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b8fa(undefined4 param_1,int param_2,uint param_3,int param_4,code *param_5)

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


/* NanoCore 1.10, address 0x4004b9a0.
 * REA evidence: ev_b98063e3160ac7d16f189df7cb01ae91054c144a696bbba112fd8b867e1c42c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b9a0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_ram_4004a5ac(param_1 + 0x2c);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    uVar2 = FUN_ram_4004bfe2(*(undefined4 *)(*piVar1 + 0x10),*(undefined4 *)(param_1 + 4));
    iVar3 = FUN_ram_4004bfb6();
    if (iVar3 == 0) break;
    piVar1 = (int *)FUN_ram_4004a5ba(param_1 + 0x2c,piVar1);
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4004b9e8.
 * REA evidence: ev_aeb08a7e367695484d254d012f635d97fd900399fb2933a92dfd2940315d1286
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b9e8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar5 = param_1 + 0x2c;
    piVar1 = (int *)FUN_ram_4004a5a6(iVar5);
    if (piVar1 != (int *)0x0) {
      uVar4 = *(undefined4 *)(*piVar1 + 0x10);
      uVar3 = FUN_ram_4004bfe2(uVar4,*(undefined4 *)(param_1 + 4));
      iVar2 = (**(code **)(param_1 + 0x10))(uVar4,param_2);
      if (iVar2 == 0) {
        return uVar3;
      }
    }
    iVar2 = FUN_ram_4004aa46(param_1 + 0x20,param_2);
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + *(int *)(param_1 + 0x28) + -4);
      uVar3 = FUN_ram_4004a5a6(iVar5);
      FUN_ram_4004a5c2(iVar5,uVar4,uVar3);
      uVar3 = FUN_ram_4004bfe2(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 4));
      return uVar3;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004ba76.
 * REA evidence: ev_686881cb61db6a4e1269fcde832a89de0cd010145d27622ab8d95e17254edadb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ba76(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
      (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar1 = FUN_ram_4004bfe6();
    iVar2 = FUN_ram_4004aa08(param_1 + 0x20,iVar2,iVar1 + 4);
    if (iVar2 != 0) {
      FUN_ram_4004a3cc(param_1 + 0x2c,4);
      *(undefined1 **)(param_1 + 0x38) = &LAB_ram_4004b998;
      return iVar2;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004baca.
 * REA evidence: ev_41567413b3e23119e2bb1348befb885305d13dab04342907770f2328c414c82c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004baca(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
      (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar1 = FUN_ram_4004bfe6();
    iVar2 = FUN_ram_4004aa08(param_1 + 0x20,iVar2,iVar1 + 4);
    if (iVar2 != 0) {
      FUN_ram_4004a3cc(param_1 + 0x2c,4);
      *(undefined1 **)(param_1 + 0x38) = &LAB_ram_4004b99c;
      return iVar2;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004bc76.
 * REA evidence: ev_f2182afbaabe34ba04169e750a34037d092576f6be759f177997c02a2805dce4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004bc76(int param_1,void *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *__dest;
  int iStack_28;
  void *apvStack_24 [3];
  
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    iStack_28 = FUN_ram_4004aa80(param_1 + 0x20);
    if (iStack_28 != 0) {
      __dest = *(void **)(iStack_28 + 0x10);
      uVar1 = FUN_ram_4004bfe2(__dest,*(undefined4 *)(param_1 + 4));
      memcpy(__dest,param_2,*(size_t *)(param_1 + 4));
      apvStack_24[0] = (void *)FUN_ram_4004a3dc(param_1 + 0x2c);
      if (apvStack_24[0] == (void *)0x0) {
        FUN_ram_4004ac68(param_1 + 0x20,iStack_28);
        iStack_28 = 0;
      }
      else {
        memcpy(apvStack_24[0],&iStack_28,4);
        memcpy((void *)(*(int *)(iStack_28 + 0x10) + *(int *)(param_1 + 0x28) + -4),apvStack_24,4);
        FUN_ram_4004bfea(uVar1,param_1,*(undefined4 *)(param_1 + 4));
      }
    }
    if (iStack_28 != 0) {
      uVar1 = FUN_ram_4004bfe2(*(undefined4 *)(iStack_28 + 0x10),*(undefined4 *)(param_1 + 4));
      iVar2 = (**(code **)(param_1 + 0x38))(param_2);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar2;
      return uVar1;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004bd18.
 * REA evidence: ev_e32e98242dd4a78ea1b6518c2f5550d568d879d73264f9019ed3976fc88c5b77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004bd18(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40059bae(0x3c);
  if (iVar1 != 0) {
    thunk_FUN_ram_4000505c(iVar1,0,0x3c);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4004bd3e.
 * REA evidence: ev_b898903209ea987e83558561d14dc61e220642a912833504b2ac12dc5cc951a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004bd3e(int *param_1,undefined4 param_2)

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
    uVar3 = FUN_ram_4004bfc6(iVar2);
    (*pcVar1)(uVar3,param_2);
    FUN_ram_4004bff8(iVar2);
  }
  return iVar2 != 0;
}


/* NanoCore 1.10, address 0x4004bd82.
 * REA evidence: ev_f7c317fda52ae0db0f7ef27c3cb6346f5ab864e490e363f5083792cfb7d1c631
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4004bd82(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
                    /* WARNING: Could not recover jumptable at 0x4004bde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
        return uVar2;
      }
      iVar1 = FUN_ram_4004bd3e(param_1,param_3);
      if (iVar1 == 0) break;
      iVar1 = (**(code **)(*param_1 + 0x24))
                        (param_1,param_2,0,param_3,extraout_a4,*(code **)(*param_1 + 0x24));
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4004bdea.
 * REA evidence: ev_9d31a31e0b3a39a99960b70969c6f6284fbfef8d3ee009c4ba421ca2b386cc3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4004bdea(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(code *)*param_1)();
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  *piVar1 = (int)param_1;
  piVar1[3] = 0;
  FUN_ram_4000305c(piVar1 + 4,param_4,0xc);
  iVar2 = (*(code *)param_1[1])(piVar1);
  if (iVar2 == 0) {
    FUN_ram_40059be4(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    FUN_ram_40059afc(piVar1 + 7);
  }
  return piVar1;
}


/* NanoCore 1.10, address 0x4004be40.
 * REA evidence: ev_3f516c273ae28f26d07cb6ffe45d578c3904c65979c817318897fd0a20721c19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004be40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  FUN_ram_40059b20(param_1 + 7);
  iVar1 = (**(code **)(*param_1 + 0xc))
                    (param_1,param_2,param_3,extraout_a3,extraout_a4,*(code **)(*param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_ram_4004bfcc();
  }
  FUN_ram_40059b36(param_1 + 7);
  return iVar1;
}


/* NanoCore 1.10, address 0x4004be7c.
 * REA evidence: ev_7b1cdbac59fa51549608d37194c160940254fc43ecbecfcc1b1737d9fd5adf8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004be7c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  FUN_ram_40059b20(param_1 + 0x1c);
  FUN_ram_4004bfd8(param_2,param_3);
  iVar1 = FUN_ram_4004bfb6(param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4004bfc0(param_2), iVar1 != 0)) {
    pcVar3 = *(code **)(param_1 + 0x18);
    uVar2 = FUN_ram_4004bfc6(param_2);
    (*pcVar3)(uVar2,param_3);
    FUN_ram_4004bff8(param_2);
  }
  FUN_ram_40059b36(param_1 + 0x1c);
  return;
}


/* NanoCore 1.10, address 0x4004becc.
 * REA evidence: ev_59864904c1f6bfa0b6b96202072f39988a422ef63a541929dab3382d12f6ef2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004becc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_40059b20(param_1 + 0x1c);
  iVar1 = FUN_ram_4004bd82(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_ram_4004bfcc();
  }
  FUN_ram_40059b36(param_1 + 0x1c);
  return iVar1;
}


/* NanoCore 1.10, address 0x4004bf06.
 * REA evidence: ev_69ba9fcea5d5615b6e8e2e1fe6d6765af81d8fb8d9128588391fbb149635ebba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bf06(int *param_1,undefined4 param_2,undefined4 param_3)

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
  
  FUN_ram_40059b20(param_1 + 7);
  iVar2 = (**(code **)(*param_1 + 0xc))
                    (param_1,param_2,param_3,extraout_a3,extraout_a4,*(code **)(*param_1 + 0xc));
  if (iVar2 != 0) {
    iVar3 = FUN_ram_4004bfb6();
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x14))
                (param_1,iVar2,param_3,extraout_a3_00,extraout_a4_00,*(code **)(*param_1 + 0x14));
      pcVar1 = (code *)param_1[6];
      uVar4 = FUN_ram_4004bfc6(iVar2);
      (*pcVar1)(uVar4,param_3);
      FUN_ram_4004bff8(iVar2);
    }
    else {
      FUN_ram_4004bfba(iVar2,1);
      (**(code **)(*param_1 + 0x14))
                (param_1,iVar2,param_3,extraout_a3_01,extraout_a4_01,*(code **)(*param_1 + 0x14));
    }
  }
  FUN_ram_40059b36(param_1 + 7);
  return;
}


/* NanoCore 1.10, address 0x4004bf76.
 * REA evidence: ev_a5f4bf57e5105ca82131306ab286a6eb34ba519895dea6020dc97b995fbbd626
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bf76(int *param_1,undefined4 param_2)

{
  FUN_ram_40059b20(param_1 + 7);
  (**(code **)(*param_1 + 0x1c))(param_1,param_2);
  FUN_ram_40059b36(param_1 + 7);
  return;
}


/* NanoCore 1.10, address 0x4004bfa4.
 * REA evidence: ev_5251578663242e7d7838e1f19c2fec76a49993afa1937614ed4b75d457fdfd91
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bfa4(int param_1)

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


/* NanoCore 1.10, address 0x4004bfb6.
 * REA evidence: ev_bbd8fcb5c42acec92155c9b446f9f12af5f37832082f789764a91edab7dee540
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004bfb6(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* NanoCore 1.10, address 0x4004bfba.
 * REA evidence: ev_0a9303e719fda9d893b1289107ae575c5701aee053091ecb992d109a6dee0724
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bfba(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4004bfc0.
 * REA evidence: ev_9edfd18dbcd14fcd79d1584913fb851b346c486fc905f2cd0c57123611e293fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4004bfc0(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}


/* NanoCore 1.10, address 0x4004bfc6.
 * REA evidence: ev_b6a7c221219359f3f60fe477cb8ed1844ff7c6526225e4ebd427a99b90643820
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004bfc6(int param_1)

{
  return param_1 - *(int *)(param_1 + 8);
}


/* NanoCore 1.10, address 0x4004bfcc.
 * REA evidence: ev_c53e52b17b8414d6d0576515b5264aef1af0986fdbbb9c8ce55881e580fbc340
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004bfcc(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return param_1 - *(int *)(param_1 + 8);
}


/* NanoCore 1.10, address 0x4004bfd8.
 * REA evidence: ev_b011466c30a5ab14903c37d62e4fa3c8e51c8b9b4e69b6c9d339de53da49f9cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bfd8(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_ram_4004bfa4();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4004bfe2.
 * REA evidence: ev_dc31aa76ffafa06c40ab6514e5925a24d2efe0b8ecfd81b10c755fe674f12bc5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004bfe2(int param_1,int param_2)

{
  return param_1 + param_2;
}


/* NanoCore 1.10, address 0x4004bfe6.
 * REA evidence: ev_21c992a906afdfc9436c6fa972671fa3d5fe77d3f1eb673d0f720b6a10989f74
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004bfe6(int param_1)

{
  return param_1 + 0x10;
}


/* NanoCore 1.10, address 0x4004bfea.
 * REA evidence: ev_b8e19e88137cfc4675ee706d15a964bab5aad8b34f1335a34b72cad538fed94a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bfea(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


/* NanoCore 1.10, address 0x4004bff8.
 * REA evidence: ev_6c90d97d1b6c257a42f27d6b41b218cb2ad478b64bfb31d96dbff0859514e734
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bff8(int param_1)

{
  FUN_ram_40059be4(param_1 - *(int *)(param_1 + 8));
  return;
}


