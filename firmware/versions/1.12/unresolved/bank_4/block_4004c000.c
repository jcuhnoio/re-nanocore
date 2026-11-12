/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4004c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4004c04a.
 * REA evidence: ev_89aa54f933b3d60bd57cd8c3e050987a93e697f330606a3089e01beeddf85e29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004c04a(int param_1,int *param_2)

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
LAB_ram_4004c09c:
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
        goto LAB_ram_4004c09c;
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
          goto LAB_ram_4004c09c;
        }
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004c1ac.
 * REA evidence: ev_4f813aaffe15d2d39f05086c40a7b43ffe86285c4c32063fda8399531d9014c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c1ac(int param_1,int param_2)

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


/* NanoCore 1.12, address 0x4004c1f8.
 * REA evidence: ev_a8ead4fc86845a12bde1851fdff12b9297bf2991732f7100df3f480c32485763
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c1f8(undefined4 param_1,uint param_2)

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


/* NanoCore 1.12, address 0x4004c234.
 * REA evidence: ev_cb97a47ee9d4b655fc9c87d7714982ab32abaea775abacedea46287ed66bb9b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c234(int param_1)

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


/* NanoCore 1.12, address 0x4004c26c.
 * REA evidence: ev_cd2bad0fd1ab952c02f4743b29aa8729f3d970661bd5d9398e390b4b35338af6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004c26c(int param_1)

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


/* NanoCore 1.12, address 0x4004c2da.
 * REA evidence: ev_91dc376f775310b9a9a4f03d07761af64ff052c9cce3221dd0aee1caff39359c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c2da(char *param_1,int param_2,int param_3,int param_4,int *param_5,uint param_6)

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
        if ((param_1[iStack_4c] == '\0') || (param_4 < 1)) goto LAB_ram_4004c49e;
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
          iVar4 = FUN_ram_40059758(param_2,uVar3,uVar18);
          iVar16 = iVar16 + iVar4;
          if (iVar4 != 0) {
            iVar16 = iVar16 + param_3;
          }
          if ((iVar17 == -1) && (iVar9 < iVar16 - param_3)) {
            iVar17 = iVar10;
          }
          if ((uVar3 == 10) || (uVar3 == 0xd)) {
LAB_ram_4004c454:
            iVar11 = iVar5;
            if (iVar10 == 0) goto joined_r0x4004c458;
            break;
          }
          for (uVar7 = 0; (byte)(&DAT_ram_4009e80c)[uVar7] != 0; uVar7 = uVar7 + 1 & 0xff) {
            if (uVar3 == (byte)(&DAT_ram_4009e80c)[uVar7]) goto LAB_ram_4004c454;
          }
          iVar5 = FUN_ram_4004c26c(uVar18);
          iVar10 = iStack_48;
          iVar14 = iVar16;
          if ((iVar5 != 0) || (iVar5 = FUN_ram_4004c26c(uVar3), iVar5 != 0)) break;
          uVar3 = uVar18;
          iVar5 = iVar11;
          if (iVar17 == -1) {
            iVar13 = iVar16;
          }
        }
        iVar13 = iVar14;
        iVar16 = iVar14;
        iVar5 = iVar11;
joined_r0x4004c458:
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
        if (iVar10 == 0) goto LAB_ram_4004c49e;
        iStack_4c = iVar10 + iStack_4c;
        if ((*param_1 == '\n') || (*param_1 == '\r')) goto LAB_ram_4004c49e;
      } while ((param_1[iStack_4c] != '\n') && (param_1[iStack_4c] != '\r'));
      iStack_4c = iStack_4c + 1;
LAB_ram_4004c49e:
      if (iStack_4c == 0) {
        uVar6 = (**(code **)(gp + -0x34))(param_1,&iStack_4c);
        if (param_5 == (int *)0x0) {
          return iStack_4c;
        }
        iVar12 = FUN_ram_40059758(param_2,uVar6,0);
      }
      else if (param_5 == (int *)0x0) {
        return iStack_4c;
      }
      *param_5 = iVar12;
    }
    else {
      for (iStack_4c = 0; (cVar1 = param_1[iStack_4c], cVar1 != '\n' && (cVar1 != '\r'));
          iStack_4c = iStack_4c + 1) {
        if (cVar1 == '\0') goto LAB_ram_4004c334;
      }
      iStack_4c = iStack_4c + 1;
LAB_ram_4004c334:
      if (param_5 != (int *)0x0) {
        *param_5 = -1;
      }
    }
  }
  return iStack_4c;
}


/* NanoCore 1.12, address 0x4004c4de.
 * REA evidence: ev_aa21325fc63c218f5c34ea19dddf56e2753c35e8e50cdbf68fd47eb65eafaa39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c4de(int param_1,int *param_2,undefined4 *param_3,int *param_4)

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


/* NanoCore 1.12, address 0x4004c51e.
 * REA evidence: ev_3d488bab3c6820f896e73bed5eda3ece382ba3ed7daaa406044d09dd59327bcb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c51e(char *param_1,uint param_2,int param_3,int param_4)

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
      FUN_ram_4004c4de(param_1,&uStack_28,auStack_24,&uStack_2c);
      iVar2 = FUN_ram_40059758(param_3,uStack_28,auStack_24[0]);
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


/* NanoCore 1.12, address 0x4004c580.
 * REA evidence: ev_658e836d5170933ac80b61412b15682b1a1dfd224f7039621114acca52219fee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c580(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
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
      iVar2 = FUN_ram_4004c2da(iVar4,param_3,param_4,param_6,0,param_7);
      iVar3 = iVar3 + iVar2;
      if ((int)((uVar1 & 0xffff) + param_5 + param_1[1]) < 0) {
        return;
      }
      param_1[1] = param_1[1] + (uVar1 & 0xffff) + param_5;
      iVar2 = FUN_ram_4004c51e(iVar4,iVar2,param_3,param_4);
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


/* NanoCore 1.12, address 0x4004c66a.
 * REA evidence: ev_8dae4e416dd7d99c6eeb79a0cfea40ec6e8dc01b5a9d35b9201f5a1da69f3154
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004c66a(void)

{
  _DAT_ram_30080d64 = 0;
  if (_DAT_ram_30080d7c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004c684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_30080d7c)(_DAT_ram_30080d80);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004c688.
 * REA evidence: ev_1596c8b36942317291be8410e4f1f1c996d176866e5d6158d81dee932e632b05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c688(void)

{
  FUN_ram_4004b436(0x30080d54,0x18);
  DAT_ram_30080d60 = 1;
  FUN_ram_4004c66a();
  return;
}


/* NanoCore 1.12, address 0x4004c6ac.
 * REA evidence: ev_42717c5494d5788508d1622ffd371fd4699829fea70b509f4eff05fd593fff8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4004c6ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4004b446(0x30080d54);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 0xffffffff;
    puVar1[2] = param_1;
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xfe;
    *puVar1 = param_2;
    uVar2 = FUN_ram_40056a9e();
    puVar1[1] = uVar2;
    puVar1[3] = param_3;
    *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 2;
    DAT_ram_30080d63 = 1;
    FUN_ram_4004c66a();
  }
  return puVar1;
}


/* NanoCore 1.12, address 0x4004c712.
 * REA evidence: ev_86eadcab819fd5bc3ecfb4f64f8ede84afe777f5fc22b95c87d69669f3e38fd5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c712(undefined4 param_1)

{
  FUN_ram_4004b552(0x30080d54,param_1);
  DAT_ram_30080d62 = 1;
  FUN_ram_4005a988(param_1);
  return;
}


/* NanoCore 1.12, address 0x4004c73e.
 * REA evidence: ev_78ec22f0419d6b039ac90fb3856433345b00d152b3a607395f19659700b45ae7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4004c73e(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  
  uVar1 = 1;
  if (DAT_ram_30080d68 == '\0') {
    uVar7 = _DAT_ram_30080d60 & 0xff;
    DAT_ram_30080d68 = 1;
    uVar5 = _DAT_ram_30080d64;
    if (uVar7 != 0) {
      iVar3 = FUN_ram_40056a9e();
      if ((iVar3 == 0) && (_DAT_ram_30080d78 = _DAT_ram_30080d78 + 1, 100 < _DAT_ram_30080d78)) {
        _DAT_ram_30080d78 = 0;
      }
LAB_ram_4004c7b8:
      _DAT_ram_30080d60 = _DAT_ram_30080d60 & 0xffff;
      puVar4 = (uint *)FUN_ram_4004b610(0x30080d54);
LAB_ram_4004c7c8:
      while (puVar2 = puVar4, puVar2 != (uint *)0x0) {
        puVar4 = (uint *)FUN_ram_4004b61c(0x30080d54,puVar2);
        if ((puVar2[5] & 1) == 0) goto code_r0x4004c800;
      }
      puVar4 = (uint *)FUN_ram_4004b610(0x30080d54);
      uVar1 = 0xffffffff;
      while (puVar4 != (uint *)0x0) {
        if ((puVar4[5] & 1) == 0) {
          uVar5 = FUN_ram_40056ac4(puVar4[1]);
          uVar7 = 0;
          if (uVar5 < *puVar4) {
            uVar7 = *puVar4 - uVar5;
          }
          if (uVar7 < uVar1) {
            uVar1 = uVar7;
          }
        }
        puVar4 = (uint *)FUN_ram_4004b61c(0x30080d54);
      }
      iVar3 = FUN_ram_40056ac4(iVar3);
      _DAT_ram_30080d70 = _DAT_ram_30080d70 + iVar3;
      uVar7 = FUN_ram_40056ac4(_DAT_ram_30080d74);
      uVar5 = uVar1;
      if (499 < uVar7) {
        if (uVar7 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(_DAT_ram_30080d70 * 100) / uVar7;
        }
        cVar6 = '\0';
        if ((uVar7 & 0xff) < 0x65) {
          cVar6 = 'd' - (char)uVar7;
        }
        _DAT_ram_30080d60 = CONCAT11(cVar6,DAT_ram_30080d60);
        _DAT_ram_30080d70 = 0;
        _DAT_ram_30080d74 = FUN_ram_40056a9e();
      }
    }
    _DAT_ram_30080d64 = uVar5;
    DAT_ram_30080d68 = '\0';
  }
  return uVar1;
code_r0x4004c800:
  uVar5 = FUN_ram_40056ac4(puVar2[1]);
  uVar1 = 0;
  if (*puVar2 <= uVar5) {
    uVar5 = puVar2[4];
    if (0 < (int)uVar5) {
      puVar2[4] = uVar5 - 1;
    }
    uVar1 = FUN_ram_40056a9e();
    puVar2[1] = uVar1;
    uVar1 = uVar7;
    if (((code *)puVar2[2] != (code *)0x0) && (uVar5 != 0)) {
      (*(code *)puVar2[2])(puVar2);
    }
  }
  if ((DAT_ram_30080d62 == '\0') && (puVar2[4] == 0)) {
    if (((byte)puVar2[5] & 2) == 0) {
      *(byte *)(puVar2 + 5) = (byte)puVar2[5] | 1;
    }
    else {
      FUN_ram_4004c712(puVar2);
    }
  }
  if ((uVar1 == 0) || ((_DAT_ram_30080d60 & 0xffff0000) == 0)) goto LAB_ram_4004c7c8;
  goto LAB_ram_4004c7b8;
}


/* NanoCore 1.12, address 0x4004c8f6.
 * REA evidence: ev_2047613e50c9b7d1da6c477e934dc3baa593fe42f4992501146e78cf5af4206d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c8f6(int param_1)

{
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
  return;
}


/* NanoCore 1.12, address 0x4004c904.
 * REA evidence: ev_b0d657e0ffe589b1ded6965085c394e9ee4ec31ed8c19dfbbe829b2fc39581e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c904(int param_1)

{
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
  FUN_ram_4004c66a();
  return;
}


/* NanoCore 1.12, address 0x4004c912.
 * REA evidence: ev_13541ad783554c6f7d235e9c8c5f20d731d60fc70cc7b81a5d0550381bef61eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c912(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


/* NanoCore 1.12, address 0x4004c916.
 * REA evidence: ev_e2236ac5c93beec8be8b662869600684cc081b608555d979c20d8c1402c5b52a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c916(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40056a9e();
  param_1[1] = ~*param_1 + iVar1;
  return;
}


/* NanoCore 1.12, address 0x4004c934.
 * REA evidence: ev_4e16add8a436c783e40cfeac045984378155784bf14ac627770a4a01f6688df0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c934(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4004c938.
 * REA evidence: ev_668e9a5e9b93444d876fc4f582ecb6a175f63b203509ac6785d1b6a081d554f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c938(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40056a9e();
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_ram_4004c66a();
  return;
}


/* NanoCore 1.12, address 0x4004c950.
 * REA evidence: ev_38b166e4f54524e5e6eee00f876ce3a70f02532189136fb4fc9c41157b536eb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004c950(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004b610();
    return;
  }
  FUN_ram_4004b61c(0x30080d54);
  return;
}


/* NanoCore 1.12, address 0x4004c964.
 * REA evidence: ev_3747f102f993d6729768ec17934b33745ab46af82a8c45969a83829e6ff52c32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004c964(undefined4 param_1,int param_2,uint param_3,int param_4,code *param_5)

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


/* NanoCore 1.12, address 0x4004ca0a.
 * REA evidence: ev_65a1aa108ea95de093c86df5a8633197d93b0e2315633d845432f4e21d804ab5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004ca0a(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_ram_4004b616(param_1 + 0x2c);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    uVar2 = FUN_ram_4004d04c(*(undefined4 *)(*piVar1 + 0x10),*(undefined4 *)(param_1 + 4));
    iVar3 = FUN_ram_4004d020();
    if (iVar3 == 0) break;
    piVar1 = (int *)FUN_ram_4004b624(param_1 + 0x2c,piVar1);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4004ca52.
 * REA evidence: ev_159c1b218b243c2a217268b73c284a4a5285bf0c1a7bab03fa4abb7f19479968
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004ca52(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar5 = param_1 + 0x2c;
    piVar1 = (int *)FUN_ram_4004b610(iVar5);
    if (piVar1 != (int *)0x0) {
      uVar4 = *(undefined4 *)(*piVar1 + 0x10);
      uVar3 = FUN_ram_4004d04c(uVar4,*(undefined4 *)(param_1 + 4));
      iVar2 = (**(code **)(param_1 + 0x10))(uVar4,param_2);
      if (iVar2 == 0) {
        return uVar3;
      }
    }
    iVar2 = FUN_ram_4004bab0(param_1 + 0x20,param_2);
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + *(int *)(param_1 + 0x28) + -4);
      uVar3 = FUN_ram_4004b610(iVar5);
      FUN_ram_4004b62c(iVar5,uVar4,uVar3);
      uVar3 = FUN_ram_4004d04c(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 4));
      return uVar3;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004cae0.
 * REA evidence: ev_7cf240ebd2c556dc305631ee597c7ddbcbdb961fdc6d98fa0cc148bf1035b590
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
      (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar1 = FUN_ram_4004d050();
    iVar2 = FUN_ram_4004ba72(param_1 + 0x20,iVar2,iVar1 + 4);
    if (iVar2 != 0) {
      FUN_ram_4004b436(param_1 + 0x2c,4);
      *(undefined1 **)(param_1 + 0x38) = &LAB_ram_4004ca02;
      return iVar2;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004cb34.
 * REA evidence: ev_7c08c7982e4a30c38ec8c61f4224e35783a599740476360e58086357a01b35a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cb34(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
      (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar1 = FUN_ram_4004d050();
    iVar2 = FUN_ram_4004ba72(param_1 + 0x20,iVar2,iVar1 + 4);
    if (iVar2 != 0) {
      FUN_ram_4004b436(param_1 + 0x2c,4);
      *(undefined1 **)(param_1 + 0x38) = &LAB_ram_4004ca06;
      return iVar2;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004cce0.
 * REA evidence: ev_edf21247f60b93df363259e015425dd4051c3d8df55c9709f1b0c150dd99c7ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004cce0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_28;
  int aiStack_24 [3];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iStack_28 = FUN_ram_4004baea(param_1 + 0x20);
    if (iStack_28 != 0) {
      uVar3 = *(undefined4 *)(iStack_28 + 0x10);
      uVar1 = FUN_ram_4004d04c(uVar3,*(undefined4 *)(param_1 + 4));
      thunk_FUN_ram_4000500c(uVar3,param_2,*(undefined4 *)(param_1 + 4));
      aiStack_24[0] = FUN_ram_4004b446(param_1 + 0x2c);
      if (aiStack_24[0] == 0) {
        FUN_ram_4004bcd2(param_1 + 0x20,iStack_28);
        iStack_28 = 0;
      }
      else {
        thunk_FUN_ram_4000500c(aiStack_24[0],&iStack_28,4);
        thunk_FUN_ram_4000500c
                  (*(int *)(iStack_28 + 0x10) + *(int *)(param_1 + 0x28) + -4,aiStack_24,4);
        FUN_ram_4004d054(uVar1,param_1,*(undefined4 *)(param_1 + 4));
      }
    }
    if (iStack_28 != 0) {
      uVar1 = FUN_ram_4004d04c(*(undefined4 *)(iStack_28 + 0x10),*(undefined4 *)(param_1 + 4));
      iVar2 = (**(code **)(param_1 + 0x38))(param_2);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar2;
      return uVar1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004cd82.
 * REA evidence: ev_1f6326f9cc288de028ff28382d0241a29b5272704b34ab87711243625d4f370a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cd82(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005a952(0x3c);
  if (iVar1 != 0) {
    thunk_FUN_ram_40004f92(iVar1,0,0x3c);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004cda8.
 * REA evidence: ev_6f03aefac05264953593fb07d921cc8ada20e88a590c71eb5e4e9537f71e9c16
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004cda8(int *param_1,undefined4 param_2)

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
    uVar3 = FUN_ram_4004d030(iVar2);
    (*pcVar1)(uVar3,param_2);
    FUN_ram_4004d062(iVar2);
  }
  return iVar2 != 0;
}


/* NanoCore 1.12, address 0x4004cdec.
 * REA evidence: ev_ea8be1a5519b05474ae5aac32722d8e2812502653df6f8601ddb9a1db8d943f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4004cdec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
                    /* WARNING: Could not recover jumptable at 0x4004ce52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
        return uVar2;
      }
      iVar1 = FUN_ram_4004cda8(param_1,param_3);
      if (iVar1 == 0) break;
      iVar1 = (**(code **)(*param_1 + 0x24))
                        (param_1,param_2,0,param_3,extraout_a4,*(code **)(*param_1 + 0x24));
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004ce54.
 * REA evidence: ev_08dd3a95cb1aebedc0429fc0121d714aa90dcbf0e803d974c28df377fb76d503
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4004ce54(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(code *)*param_1)();
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  *piVar1 = (int)param_1;
  piVar1[3] = 0;
  FUN_ram_4000303c(piVar1 + 4,param_4,0xc);
  iVar2 = (*(code *)param_1[1])(piVar1);
  if (iVar2 == 0) {
    FUN_ram_4005a988(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    FUN_ram_4005a8a0(piVar1 + 7);
  }
  return piVar1;
}


/* NanoCore 1.12, address 0x4004ceaa.
 * REA evidence: ev_e7e81f963bc3519caedfa7cd49fa70aec4d42e089f5a7f4d7dc4c20f64b9d416
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ceaa(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  FUN_ram_4005a8c4(param_1 + 7);
  iVar1 = (**(code **)(*param_1 + 0xc))
                    (param_1,param_2,param_3,extraout_a3,extraout_a4,*(code **)(*param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_ram_4004d036();
  }
  FUN_ram_4005a8da(param_1 + 7);
  return iVar1;
}


/* NanoCore 1.12, address 0x4004cee6.
 * REA evidence: ev_4c63783fc203fa35a2cd2d352d597f73ba631988ba2b85540675de0cd5b53b44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cee6(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  FUN_ram_4005a8c4(param_1 + 0x1c);
  FUN_ram_4004d042(param_2,param_3);
  iVar1 = FUN_ram_4004d020(param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4004d02a(param_2), iVar1 != 0)) {
    pcVar3 = *(code **)(param_1 + 0x18);
    uVar2 = FUN_ram_4004d030(param_2);
    (*pcVar3)(uVar2,param_3);
    FUN_ram_4004d062(param_2);
  }
  FUN_ram_4005a8da(param_1 + 0x1c);
  return;
}


/* NanoCore 1.12, address 0x4004cf36.
 * REA evidence: ev_502e08698ad1ebc4429fe168d9414a7b52b9cbecba6bc741dcb970be4d6de7af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004cf36(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_4005a8c4(param_1 + 0x1c);
  iVar1 = FUN_ram_4004cdec(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_ram_4004d036();
  }
  FUN_ram_4005a8da(param_1 + 0x1c);
  return iVar1;
}


/* NanoCore 1.12, address 0x4004cf70.
 * REA evidence: ev_8d82056641501980b75df0db7c68df77cc0ca7010b57ba06bb7d29ca1a3a5296
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cf70(int *param_1,undefined4 param_2,undefined4 param_3)

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
  
  FUN_ram_4005a8c4(param_1 + 7);
  iVar2 = (**(code **)(*param_1 + 0xc))
                    (param_1,param_2,param_3,extraout_a3,extraout_a4,*(code **)(*param_1 + 0xc));
  if (iVar2 != 0) {
    iVar3 = FUN_ram_4004d020();
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x14))
                (param_1,iVar2,param_3,extraout_a3_00,extraout_a4_00,*(code **)(*param_1 + 0x14));
      pcVar1 = (code *)param_1[6];
      uVar4 = FUN_ram_4004d030(iVar2);
      (*pcVar1)(uVar4,param_3);
      FUN_ram_4004d062(iVar2);
    }
    else {
      FUN_ram_4004d024(iVar2,1);
      (**(code **)(*param_1 + 0x14))
                (param_1,iVar2,param_3,extraout_a3_01,extraout_a4_01,*(code **)(*param_1 + 0x14));
    }
  }
  FUN_ram_4005a8da(param_1 + 7);
  return;
}


/* NanoCore 1.12, address 0x4004cfe0.
 * REA evidence: ev_52ccfb5480eefe909da1c75a33a50c5c4a8b2b86a4cfb3f5ab89902f9ea9af6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004cfe0(int *param_1,undefined4 param_2)

{
  FUN_ram_4005a8c4(param_1 + 7);
  (**(code **)(*param_1 + 0x1c))(param_1,param_2);
  FUN_ram_4005a8da(param_1 + 7);
  return;
}


