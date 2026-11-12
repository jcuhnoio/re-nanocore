/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40025000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400250d6.
 * REA evidence: ev_409c60bad79016a90cebe7d58b9fa7979c92385c441b2702b55e787869ae8300
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400250d6(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  undefined1 uStack_544;
  undefined1 uStack_543;
  undefined1 uStack_542;
  undefined1 local_540 [1292];
  
  FUN_ram_40024e30(0);
  uVar10 = FUN_ram_400002f4();
  if ((DAT_ram_3006baea == '\0') && (_DAT_ram_3006c33e == 0)) {
    FUN_ram_400002fa();
    return;
  }
  FUN_ram_400002fa(uVar10);
  uVar10 = FUN_ram_40004346();
  uVar11 = FUN_ram_400002f4();
  FUN_ram_40024c34(uVar10);
  FUN_ram_40024b9c();
  uVar7 = _DAT_ram_3006c358;
  pcVar6 = _DAT_ram_3006c354;
  uVar10 = _DAT_ram_3006c350;
  pcVar5 = _DAT_ram_3006c34c;
  bVar4 = DAT_ram_3006baef;
  uVar12 = (uint)_DAT_ram_3006c33e;
  if (uVar12 < 0x101) {
    if (uVar12 == 0) goto LAB_ram_400251d0;
  }
  else {
    uVar12 = 0x100;
  }
  FUN_ram_4000303c(local_540,&DAT_ram_3006be3d,uVar12 * 5);
LAB_ram_400251d0:
  _DAT_ram_3006c33e = 0;
  FUN_ram_400002fa(uVar11);
  if ((pcVar5 != (code *)0x0) || (pcVar6 != (code *)0x0)) {
    puVar8 = local_540;
    for (uVar13 = 0; uVar13 != uVar12; uVar13 = uVar13 + 1 & 0xffff) {
      if ((pcVar5 != (code *)0x0) || (pcVar6 != (code *)0x0)) {
        bVar1 = puVar8[2];
        cVar2 = puVar8[1];
        if (bVar1 < 4) {
          bVar9 = bVar1;
          if (bVar1 == 0) {
            bVar9 = 1;
          }
        }
        else {
          bVar9 = 3;
        }
        uStack_544 = *puVar8;
        iVar14 = 3;
        bVar15 = 1;
        uStack_543 = puVar8[3];
        uStack_542 = puVar8[4];
        do {
          if (((bVar4 & bVar15) != 0) &&
             (cVar3 = (&DAT_ram_4009a64c)[(byte)(bVar15 - 1)], cVar2 != cVar3)) {
            if (pcVar6 == (code *)0x0) {
              if (bVar1 < 2) {
                (*pcVar5)(cVar3,uStack_544,uVar10);
              }
            }
            else {
              (*pcVar6)(cVar3,&uStack_544,bVar9,uVar7);
            }
          }
          iVar14 = iVar14 + -1;
          bVar15 = bVar15 << 1;
        } while (iVar14 != 0);
      }
      puVar8 = puVar8 + 5;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400252c8.
 * REA evidence: ev_89a1af98ac63065be816c81343b254302be5c687e912b95f9d67cf5960862a18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400252c8(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_ram_40024e30(0);
  uVar1 = FUN_ram_400002f4();
  if (DAT_ram_3006baeb != '\0') {
    iVar2 = FUN_ram_40024cbe(param_1,param_3);
    if (iVar2 != 0) {
      FUN_ram_40024a04(param_1);
      _DAT_ram_3006bb18 = (ulonglong)(param_2 & 0x3fff) * 0xf0;
      _DAT_ram_3006bb08 = 0;
      FUN_ram_4002491e();
      DAT_ram_3006bb30 = 1;
      _DAT_ram_3006bb28 = param_3;
      if (DAT_ram_3006baee != '\0') {
        FUN_ram_40024dbc(param_2 & 0x3fff,0,param_1);
      }
    }
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.12, address 0x40025356.
 * REA evidence: ev_39c277c5d7028960c48dacddcae0eaf9aa8fc414752878af9aed5395b6439dc6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40025548) */
/* WARNING: Removing unreachable block (ram,0x400254be) */
/* WARNING: Removing unreachable block (ram,0x400254ea) */
/* WARNING: Removing unreachable block (ram,0x400256ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40025356(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  
  if ((param_2 != 0xf8) && (2 < (param_2 + 6U & 0xff))) {
    return;
  }
  FUN_ram_40024e30(0);
  uVar3 = FUN_ram_400002f4();
  if ((param_2 != 0xf8) && (DAT_ram_3006baeb == '\0')) goto LAB_ram_400253a4;
  iVar4 = FUN_ram_40024cbe(param_1,param_3);
  if (iVar4 == 0) goto LAB_ram_400253a4;
  FUN_ram_40024a04(param_1);
  if (param_2 == 0xfa) {
    _DAT_ram_3006bb1c = 0;
    DAT_ram_3006bae9 = 1;
    _DAT_ram_3006bb18 = 0;
    _DAT_ram_3006bb08 = 0;
    DAT_ram_3006bb30 = 1;
    _DAT_ram_3006bb2c = 0;
    _DAT_ram_3006bb28 = param_3;
    FUN_ram_40024d8e(0xfa,param_1);
    FUN_ram_400002fa(uVar3);
    return;
  }
  if (param_2 == 0xfb) {
    DAT_ram_3006bae9 = '\x01';
    FUN_ram_4002491e();
    uVar5 = 0xfb;
  }
  else if (param_2 == 0xfc) {
    if (DAT_ram_3006baea != '\0') {
      _DAT_ram_3006bb08 = 0;
      _DAT_ram_3006bb18 = (ulonglong)_DAT_ram_3006bb2c * 0x28;
    }
    DAT_ram_3006bae9 = '\0';
    uVar5 = 0xfc;
  }
  else {
    if (param_2 != 0xf8) goto LAB_ram_400253a4;
    FUN_ram_40024966();
    if ((_DAT_ram_3006be34 != 0) &&
       (iVar4 = *(int *)(((_DAT_ram_3006be36 + 0xbf) % 0xc0) * 4 + 0x3006bb34),
       uVar6 = FUN_ram_400043ae(500), uVar6 < (uint)(param_3 - iVar4))) {
      FUN_ram_4002474a();
    }
    *(int *)((uint)_DAT_ram_3006be36 * 4 + 0x3006bb34) = param_3;
    fVar12 = DAT_ram_40099f50;
    cVar2 = DAT_ram_3006be39;
    _DAT_ram_3006be36 = (ushort)((_DAT_ram_3006be36 + 1) % 0xc0);
    if (_DAT_ram_3006be34 < 0xc0) {
      _DAT_ram_3006be34 = _DAT_ram_3006be34 + 1;
    }
    uVar1 = _DAT_ram_3006be34;
    bVar7 = DAT_ram_3006be38 + 1;
    DAT_ram_3006be38 = DAT_ram_3006be38 + '\x01';
    if ((0xb < bVar7) && (DAT_ram_3006be38 = '\0', 0x17 < _DAT_ram_3006be34)) {
      if (DAT_ram_3006be3c == '\0') {
        if ((DAT_ram_3006be39 != '\0') && (0x5f < _DAT_ram_3006be34)) {
          uVar11 = FUN_ram_40024760(0x30);
          fVar13 = (float)_DAT_ram_3006baf8;
          fVar9 = fVar13 * DAT_ram_4009a648;
          if (fVar13 * DAT_ram_4009a648 < DAT_ram_4009673c) {
            fVar9 = DAT_ram_4009673c;
          }
          fVar10 = (float)uVar11;
          if ((fVar10 < fVar12) || (DAT_ram_40099f64 < fVar10)) {
LAB_ram_40025658:
            cVar8 = '\0';
            bVar7 = 0;
          }
          else {
            if (fVar13 + fVar9 < fVar10) {
              cVar8 = '\x01';
            }
            else {
              if (fVar13 - fVar9 <= fVar10) goto LAB_ram_40025658;
              cVar8 = -1;
            }
            bVar7 = 1;
            if (DAT_ram_3006be3a == cVar8) {
              bVar7 = DAT_ram_3006be3b + 1;
            }
          }
          DAT_ram_3006be3b = bVar7;
          _DAT_ram_3006be3a = CONCAT11(DAT_ram_3006be3b,cVar8);
          if (1 < DAT_ram_3006be3b) {
            _DAT_ram_3006be34 = 0x30;
            _DAT_ram_3006be3a = 0;
            DAT_ram_3006be3c = '\b';
            _DAT_ram_3006baf8 = uVar11;
            goto LAB_ram_40025518;
          }
        }
        uVar11 = FUN_ram_40024760(uVar1);
        fVar9 = (float)uVar11;
        if ((fVar12 <= fVar9) && (fVar9 <= DAT_ram_40099f64)) {
          if (cVar2 != '\0') {
            fVar13 = (float)_DAT_ram_3006baf8;
            fVar9 = fVar9 - fVar13;
            fVar12 = DAT_ram_4009a374;
            goto LAB_ram_400255b0;
          }
          DAT_ram_3006be39 = '\x01';
          _DAT_ram_3006baf8 = uVar11;
        }
      }
      else {
        DAT_ram_3006be3c = DAT_ram_3006be3c + -1;
        _DAT_ram_3006be34 = 0x30;
        fVar9 = (float)FUN_ram_40024760(0x30);
        if ((fVar12 <= fVar9) && (fVar9 <= DAT_ram_40099f64)) {
          fVar13 = (float)_DAT_ram_3006baf8;
          fVar9 = fVar9 - fVar13;
          fVar12 = DAT_ram_4009675c;
LAB_ram_400255b0:
          _DAT_ram_3006baf8 = (ulonglong)(uint)(fVar9 * fVar12 + fVar13);
        }
      }
    }
LAB_ram_40025518:
    _DAT_ram_3006bb18 = CONCAT44(_DAT_ram_3006bb1c,_DAT_ram_3006bb18);
    if ((DAT_ram_3006bae9 != '\0') &&
       (_DAT_ram_3006bb18 = CONCAT44(_DAT_ram_3006bb1c,_DAT_ram_3006bb18),
       _DAT_ram_3006bb2c != 0xffffffff)) {
      _DAT_ram_3006bb2c = _DAT_ram_3006bb2c + 1;
      uVar11 = (ulonglong)_DAT_ram_3006bb2c * 0x28;
      if ((CONCAT44(_DAT_ram_3006bb1c,_DAT_ram_3006bb18) < uVar11) ||
         (uVar11 = uVar11 + 0x28, _DAT_ram_3006bb18 = CONCAT44(_DAT_ram_3006bb1c,_DAT_ram_3006bb18),
         uVar11 < CONCAT44(_DAT_ram_3006bb1c,_DAT_ram_3006bb18))) {
        _DAT_ram_3006bb08 = 0;
        _DAT_ram_3006bb18 = uVar11;
      }
    }
    uVar5 = 0xf8;
  }
  DAT_ram_3006bb30 = 1;
  _DAT_ram_3006bb28 = param_3;
  FUN_ram_40024d8e(uVar5,param_1);
LAB_ram_400253a4:
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.12, address 0x400256bc.
 * REA evidence: ev_46f3fc38c202136b58fd357d67e43a5a5b5fdeed2f3438884e89dc578582fc9c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400256bc(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
  return;
}


/* NanoCore 1.12, address 0x400256ca.
 * REA evidence: ev_9dc485c3b3bf9384fe12a472fce8d6d9f3126c65174c028eeabdc1ca3e17eb69
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400256ca(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar5 = 1;
    if ((int)param_3 < 1) {
      iVar5 = -1;
    }
    iVar1 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
    iVar2 = 4;
    if (iVar1 < 4) {
      iVar2 = 1;
      if (iVar1 != 1) {
        iVar2 = 2;
      }
    }
    if (param_1 != (int *)0x0) {
      uVar3 = FUN_ram_400043ae(0x5a);
      iVar4 = FUN_ram_40004346();
      if ((*param_1 != 0) && (param_2 == (char)param_1[1])) {
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        if ((uint)(iVar4 - *param_1) <= uVar3) {
          iVar2 = iVar2 << 1;
        }
      }
      *param_1 = iVar4;
      *(char *)(param_1 + 1) = (char)param_2;
    }
    return iVar1 * iVar5 * iVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002575c.
 * REA evidence: ev_004ec529b17164e414884897c8ecf65e5d6c9b7fd569bf30416749da74d37621
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002575c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_400256ca();
  return iVar1 * 10;
}


/* NanoCore 1.12, address 0x40025770.
 * REA evidence: ev_8ff9edf395dee3efa24405b3bb9719db42175fdfc3868460d7f4a79d34937259
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002578a) */

int FUN_ram_40025770(int param_1)

{
  if (param_1 < 0x3e9) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 1000;
  }
  return (param_1 * 0xa8c) / 1000;
}


/* NanoCore 1.12, address 0x40025798.
 * REA evidence: ev_6422c3d53f0fe693fcfc90ab4cb30c0143fbf32c05c62acfb6ceae38552cdcc9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40025798(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  return param_1 * 10;
}


/* NanoCore 1.12, address 0x400257b4.
 * REA evidence: ev_54a51d5f36a673d7ded85be7de741da6587b3ef6eab9c6a8deefef34931212f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400257d0) */

int FUN_ram_400257b4(int param_1)

{
  if (param_1 < 0x3e9) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 1000;
  }
  return (param_1 * 100 + 500) / 1000;
}


/* NanoCore 1.12, address 0x400257de.
 * REA evidence: ev_f5fe80ed3cd75eba31769d543c9895dab42741b28b29b6405d305414badf4a2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400257de(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4002575c(param_1,param_2,param_4);
  iVar2 = 100;
  if ((param_3 < 0x65) && (iVar2 = param_3, param_3 < 0)) {
    iVar2 = 0;
  }
  iVar1 = iVar1 + iVar2 * 10;
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  FUN_ram_400257b4(iVar1);
  return;
}


/* NanoCore 1.12, address 0x40025852.
 * REA evidence: ev_aa8c9eaba2a73237902f93dda43fac20dd45c6ff74e0dc626c07dbf51f79ff20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40025852(char *param_1,char *param_2)

{
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    param_2 = param_1;
  }
  return param_2;
}


/* NanoCore 1.12, address 0x40025860.
 * REA evidence: ev_a9f9a4265034f6d6f846c2d7e8f951b92f1c814ecfa0e65efd65c185af658628
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40025860(ulonglong param_1)

{
  if ((float)param_1 < 0.0) {
    param_1 = 0;
  }
  else if (DAT_ram_4009672c < (float)param_1) {
    return (ulonglong)(uint)DAT_ram_4009672c;
  }
  return param_1;
}


/* NanoCore 1.12, address 0x40025884.
 * REA evidence: ev_91e315301b13245cee1f4bf36effcdb29f7912f2008d664a321286502fe291aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40025884(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = param_1 - DAT_ram_4009675c;
  }
  else {
    param_1 = param_1 + DAT_ram_4009675c;
  }
  return (int)param_1;
}


/* NanoCore 1.12, address 0x400258a6.
 * REA evidence: ev_2178f50079ea81ddf9b55591a6f0b6c0da4b0bbce8c8330f65c6d63f14a8979e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400258a6(int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)FUN_ram_40025860();
  iVar2 = (int)(fVar3 * DAT_ram_40099f30);
  if (iVar2 == 2) {
    if (param_1 != 0) {
      param_1 = *(int *)(param_1 + 0x20);
    }
    pcVar1 = s_Square_ram_4009a654;
  }
  else if (iVar2 < 3) {
    if (iVar2 == 1) {
      if (param_1 != 0) {
        param_1 = *(int *)(param_1 + 0x1c);
      }
      pcVar1 = &DAT_ram_4009a650;
    }
    else {
      if (param_1 != 0) {
        param_1 = *(int *)(param_1 + 0x18);
      }
      pcVar1 = &DAT_ram_4009a65c;
    }
  }
  else {
    if (param_1 != 0) {
      param_1 = *(int *)(param_1 + 0x24);
    }
    pcVar1 = s_Arp_Saw_ram_4009fd10 + 4;
  }
  FUN_ram_40025852(param_1,pcVar1);
  return;
}


/* NanoCore 1.12, address 0x40025910.
 * REA evidence: ev_ebb0473faaa0036b394cb32d84775bfb8d4219f86a0220e2388e7ba710bfec15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40025910(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    FUN_ram_40005520(param_1,param_2,&DAT_ram_4009a664,param_3,param_4);
    return;
  }
  FUN_ram_40005520(param_1,param_2,&DAT_ram_4009a220,param_3,param_4);
  return;
}


/* NanoCore 1.12, address 0x4002593e.
 * REA evidence: ev_9035a1c62674ffabe2c78528756610ca872122a17ddccbc2ca843e3752fca3f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40025a58) */
/* WARNING: Removing unreachable block (ram,0x40025a38) */
/* WARNING: Removing unreachable block (ram,0x40025a46) */
/* WARNING: Removing unreachable block (ram,0x400259b4) */
/* WARNING: Removing unreachable block (ram,0x40025a66) */
/* WARNING: Removing unreachable block (ram,0x400259c2) */

void FUN_ram_4002593e(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_40 [24];
  
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  uVar1 = FUN_ram_40025884();
  pcVar5 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  if ((int)uVar1 < 0) {
    pcVar5 = s_PRE___ram_4009c24c + 4;
  }
  uVar2 = FUN_ram_40025852(param_4,&DAT_ram_4009a66c);
  if (param_1 < DAT_ram_40099f28) {
    if (DAT_ram_40096780 <= param_1) {
      iVar6 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
      pcVar4 = s__s_ld_ram_4009a250;
      goto LAB_ram_400259f2;
    }
    if (param_1 < DAT_ram_40099f38) {
      iVar6 = FUN_ram_40025884(param_1 * DAT_ram_40096780);
      iVar3 = iVar6 % 100;
      pcVar4 = s__s_ld__02ld_ram_4009a230;
      iVar6 = iVar6 / 100;
    }
    else {
      iVar6 = FUN_ram_40025884(param_1 * DAT_ram_40099f38);
      iVar3 = iVar6 % 10;
      pcVar4 = s__s_ld__ld_ram_4009a224;
      iVar6 = iVar6 / 10;
    }
  }
  else {
    iVar3 = FUN_ram_40025884(param_1 / DAT_ram_40096780);
    iVar6 = iVar3 / 10;
    pcVar4 = s__s_ldk_ram_4009a23c;
    iVar3 = iVar3 % 10;
    if (iVar3 == 0) {
LAB_ram_400259f2:
      FUN_ram_40005520(auStack_40,0x10,pcVar4,pcVar5,iVar6);
      goto LAB_ram_400259fa;
    }
    pcVar4 = &DAT_ram_4009a244;
  }
  FUN_ram_40005520(auStack_40,0x10,pcVar4,pcVar5,iVar6,iVar3);
LAB_ram_400259fa:
  FUN_ram_40005520(param_2,param_3,&DAT_ram_4009a218,auStack_40,uVar2);
  return;
}


/* NanoCore 1.12, address 0x40025a6c.
 * REA evidence: ev_d35ed0389ecc60849c99f28aab7d7154d5e8dde0d05d5bf2f1aa3a6578723e2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40025a6c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_ram_40025860();
  uVar1 = FUN_ram_40025884(fVar2 * DAT_ram_40096780);
  FUN_ram_40005520(param_1,param_2,&DAT_ram_4009a220,uVar1);
  return;
}


/* NanoCore 1.12, address 0x40025aa2.
 * REA evidence: ev_beba2945785fc5edda1d2d93e4b6b32e5e70e4455d5b7a9040660aa2af0058fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40025ab0) */
/* WARNING: Removing unreachable block (ram,0x40025ab4) */

void FUN_ram_40025aa2(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
  iVar2 = iVar3 / 10;
  iVar3 = iVar3 % 10;
  pcVar1 = s_PRE___ram_4009c24c + 4;
  if (-1 < (int)param_3) {
    pcVar1 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  }
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    FUN_ram_40005520(param_1,param_2,&DAT_ram_4009a670,pcVar1,iVar2,iVar3);
    return;
  }
  FUN_ram_40005520(param_1,param_2,s__s_ld__ld_ram_4009a224,pcVar1,iVar2,iVar3);
  return;
}


/* NanoCore 1.12, address 0x40025aee.
 * REA evidence: ev_0a1c184e8eeb498e1d37d6d61fc76056bb98c87432853c8e88177d6b9b1555e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40025afe) */
/* WARNING: Removing unreachable block (ram,0x40025b02) */

void FUN_ram_40025aee(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
  iVar2 = iVar3 / 100;
  iVar3 = iVar3 % 100;
  pcVar1 = s_PRE___ram_4009c24c + 4;
  if (-1 < (int)param_3) {
    pcVar1 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  }
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    FUN_ram_40005520(param_1,param_2,&DAT_ram_4009a680,pcVar1,iVar2,iVar3);
    return;
  }
  FUN_ram_40005520(param_1,param_2,s__s_ld__02ld_ram_4009a230,pcVar1,iVar2,iVar3);
  return;
}


/* NanoCore 1.12, address 0x40025b3c.
 * REA evidence: ev_d60891278bd731581faabc9cdc4cf1f7f49d6c8c89f3f81d54441c2759eda222
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40025b88) */
/* WARNING: Removing unreachable block (ram,0x40025b5c) */
/* WARNING: Removing unreachable block (ram,0x40025b82) */
/* WARNING: Removing unreachable block (ram,0x40025b68) */

void FUN_ram_40025b3c(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_ram_40025884(param_1 * DAT_ram_40096780);
  if (iVar1 % 100 == 0) {
    FUN_ram_40005520(param_2,param_3,s__ld__s_ram_4009a308,iVar1 / 100,param_4);
    return;
  }
  if (iVar1 % 10 != 0) {
    FUN_ram_40025aee(param_2,param_3,iVar1);
    return;
  }
  FUN_ram_40025aa2(param_2,param_3,iVar1 / 10);
  return;
}


/* NanoCore 1.12, address 0x40025ba6.
 * REA evidence: ev_baddd63ecf5f7b71292efb879941d8bcb2801a1c15098f2f323155819a3188b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40025ba6(undefined8 param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  if ((0.0 < param_2) && (param_2 < param_3)) {
    uVar1 = FUN_ram_40025860();
    fVar2 = (float)FUN_ram_40000d44(param_3 / param_2,uVar1);
    param_2 = param_2 * fVar2;
  }
  return param_2;
}


/* NanoCore 1.12, address 0x40025be8.
 * REA evidence: ev_4bf860e5ab1f30b6d5e92358d5fb15da6af923353a5ba40af9e7c36250f94ea5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40025be8(int *param_1,byte *param_2)

{
  if ((*param_1 == 8) && (*param_1 = 0, 1 < *param_2)) {
    *param_2 = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40025c04.
 * REA evidence: ev_7566453ef38ca338cdfa346f50f3330f40698f835e06f9bd53eaf92214ba433e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40025c04(uint param_1)

{
  if (param_1 < 0xb) {
    return (&PTR_DAT_ram_4009a0bc_ram_4009b358)[param_1];
  }
  return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
}


/* NanoCore 1.12, address 0x40025c22.
 * REA evidence: ev_12f6f5ee1067e0638b4b9cb096850f1f9d05e0f3503c4d9e6669844611eeea67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40025c22(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = strcmp(param_1,(&PTR_DAT_ram_4009a0bc_ram_4009b358)[iVar1]);
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xb);
  }
  return 0xff;
}


/* NanoCore 1.12, address 0x40025c64.
 * REA evidence: ev_a7239c1fe0b9daafeec89c19d60188c1a1909ae067e4bcaf846d4657789964f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40025c64(uint param_1)

{
  if (param_1 < 0xb) {
    return (&PTR_DAT_ram_4009b0f0_ram_4009b384)[param_1];
  }
  return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
}


/* NanoCore 1.12, address 0x40025c82.
 * REA evidence: ev_c84d27d78305fd0dfcc24c9a4eff8850f589a11f282bf29f6184ee454d9e3ada
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40025c82(uint param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 10) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (param_1 < 10) {
      uVar1 = (&DAT_ram_4009b1a8)[param_1];
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40025ca4.
 * REA evidence: ev_1fe522a773753bbfd016814c39e4487b9eb2becdb021ae30bfd9c9815dfde334
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40025ca4(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 6) {
    if (param_2 < 8) {
      if (param_2 == 4) {
        param_2 = 2;
      }
    }
    else {
      param_2 = 6;
    }
  }
  else if (param_1 == 7) {
    if (2 < param_2) {
      param_2 = 2;
    }
    param_2 = param_2 & 0xff;
  }
  else {
    if (param_1 != 5) {
      uVar1 = FUN_ram_40025c82();
      if ((uVar1 < 2) || (uVar1 <= param_2)) {
        param_2 = 0;
      }
      return param_2;
    }
    if ((((4 < param_2) && (param_2 != 10)) && (param_2 != 0xb)) &&
       ((param_2 != 0xc && (param_2 != 0x11)))) {
      param_2 = 0;
    }
  }
  return param_2;
}


/* NanoCore 1.12, address 0x40025cfa.
 * REA evidence: ev_a8e570c94545788f43ac11a4469335c78dca4949d641ceac2a72d96aeb4e0315
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40025cfa(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40025c82();
  if ((uVar1 < 2) || (uVar1 <= param_2)) {
    param_2 = 0;
  }
  return param_2;
}


/* NanoCore 1.12, address 0x40025d1e.
 * REA evidence: ev_15ee8891b5e62486291f4181afa2cd069dd6e6f1035fb5eba48752c84b0672b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40025d1e(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 5) {
    uVar1 = FUN_ram_40025c82();
    return uVar1;
  }
  return 9;
}


/* NanoCore 1.12, address 0x40025d2c.
 * REA evidence: ev_39973e114cedba6d3c3b8e1c6145e4944a66c196606f3b5cf8fb8cdcd63adfda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40025d2c(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != 5) {
    uVar1 = FUN_ram_40025ca4();
    return uVar1;
  }
  if (param_2 < 9) {
    return (uint)(byte)(&DAT_ram_4009b34c)[param_2];
  }
  return 0;
}


/* NanoCore 1.12, address 0x40025d4e.
 * REA evidence: ev_8e10c74aac7cdd2a833931d1e1e919a703ffdec2e577e0837951509abdea5064
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40025d4e(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_ram_40025d1e();
  uVar1 = 0;
  while( true ) {
    if (uVar1 == uVar2) {
      return 0xffffffff;
    }
    iVar3 = FUN_ram_40025d2c(param_1,uVar1);
    if (iVar3 == param_2) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}


