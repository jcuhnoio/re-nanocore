/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4002d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002d01a.
 * REA evidence: ev_5cabdc32de5dc758e6b3758a9dc6e97a60932e4a36a1005f2e0b4b9b2787ae21
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002d01a(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_30079a78 != (code *)0x0) {
    iVar2 = (*_DAT_ram_30079a78)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4002d05a.
 * REA evidence: ev_88e613ff135605af8775771312792422a989fa28d4c71aee9830b9c5b154c5c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool thunk_FUN_ram_4002d01a(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (_DAT_ram_30079a78 != (code *)0x0) {
    iVar2 = (*_DAT_ram_30079a78)();
  }
  bVar1 = false;
  if (((param_1 - 1U & 0xff) < 0x10) && (bVar1 = true, iVar2 - 1U < 0x10)) {
    bVar1 = param_1 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4002d05e.
 * REA evidence: ev_670ef98cfdd459084648515e98c17fcb9a7836260b381f6cb8def4e941ec11c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002d05e(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  if ((DAT_ram_30079a8c == '\0') || (uVar2 = param_1 - 1U & 0xff, 0xf < uVar2)) {
    return;
  }
  if (param_2 == 0) {
    iVar6 = 0x30079a64;
LAB_ram_4002d084:
    *(byte *)(iVar6 + uVar2) = (byte)param_3 & 0x7f;
    return;
  }
  if (param_2 == 0x20) {
    iVar6 = 0x30079a54;
    goto LAB_ram_4002d084;
  }
  uVar2 = param_2 - 0x14 & 0xff;
  if ((uVar2 < 10) && ((&DAT_ram_40095420)[uVar2] != -1)) {
    FUN_ram_4002cc82((&DAT_ram_40095420)[uVar2],(param_3 & 0x7f) >> 6);
    return;
  }
  uVar2 = param_2 - 0x28 & 0xff;
  if (param_2 < 0x28) {
    if (param_2 == 0x21) {
      uVar2 = 7;
      uVar3 = 7;
      goto LAB_ram_4002d186;
    }
  }
  else if (uVar2 < 10) {
    cVar1 = (&DAT_ram_40095420)[uVar2];
    if (cVar1 != -1) {
      uVar2 = param_3 & 0x7f;
      if (cVar1 == '\x06') {
        if (6 < uVar2) {
          return;
        }
        if ((param_3 & 0x7c) != 0) {
          uVar2 = uVar2 + 1;
        }
      }
      FUN_ram_4002ccaa(cVar1,uVar2);
      return;
    }
  }
  else if (param_2 == 0x32) {
    uVar4 = FUN_ram_4002317e(0);
    uVar2 = 0;
    uVar3 = 0;
    if ((uVar4 & 0xfd) == 0) goto LAB_ram_4002d186;
    goto LAB_ram_4002d14c;
  }
  uVar2 = param_2 - 0x33 & 0xff;
  if (uVar2 < 6) {
    iVar6 = FUN_ram_4002317e(0);
    if (iVar6 == 2) {
      uVar2 = param_2 - 0x32 & 0xff;
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if (iVar6 != 3) {
LAB_ram_4002d14c:
        if (param_3 < 0x40) {
          return;
        }
        uVar3 = 0xffffffff;
        if (param_2 != 0x51) {
          if (param_2 != 0x52) {
            uVar3 = 0xffffffff;
            if (param_2 != 0x53) {
              if (param_2 != 0x54) {
                return;
              }
              uVar3 = 1;
            }
            FUN_ram_4002ce74(uVar3);
            return;
          }
          uVar3 = 1;
        }
        FUN_ram_4002cee2(uVar3);
        return;
      }
    }
  }
  else {
    uVar2 = param_2 - 0x39 & 0xff;
    if (uVar2 < 3) {
      uVar4 = FUN_ram_4002317e(1);
      if (7 < uVar4) goto LAB_ram_4002d14c;
      uVar3 = 1;
    }
    else {
      uVar2 = param_2 - 0x3c & 0xff;
      if (uVar2 < 5) {
        uVar3 = 2;
      }
      else {
        uVar2 = param_2 - 0x41 & 0xff;
        if (uVar2 < 3) {
          uVar3 = 3;
        }
        else {
          uVar2 = param_2 - 0x44 & 0xff;
          if (uVar2 < 6) {
            cVar1 = FUN_ram_4002317e(1);
            uVar3 = 1;
            if (3 < (byte)(cVar1 - 8U)) {
              uVar3 = 5;
            }
          }
          else {
            uVar2 = param_2 - 0x4a & 0xff;
            if (uVar2 < 6) {
              uVar3 = 4;
            }
            else {
              uVar2 = param_2 - 0x55 & 0xff;
              if (uVar2 < 6) {
                uVar3 = 6;
              }
              else {
                uVar2 = param_2 - 0x5b & 0xff;
                uVar3 = 7;
                if (6 < uVar2) {
                  if (param_2 == 0x50) {
                    if (_DAT_ram_30079a84 == 0) {
                      return;
                    }
                    pbVar5 = (byte *)FUN_ram_40005666(1);
                    if (pbVar5 == (byte *)0x0) {
                      return;
                    }
                    *pbVar5 = (byte)((param_3 << 0x19) >> 0x1f);
                    FUN_ram_40049cd2(&LAB_ram_4002cc1c,pbVar5);
                    return;
                  }
                  goto LAB_ram_4002d14c;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_ram_4002d186:
  FUN_ram_4002cce6((float)(param_3 & 0x7f) / DAT_ram_40095418,uVar3,uVar2);
  return;
}


/* NanoCore 1.10, address 0x4002d2d0.
 * REA evidence: ev_3c4b70346a954a39ae9776b57af47deaae0cc00b87a0f9ba180304762187d527
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d2d0(char param_1,uint param_2)

{
  if ((DAT_ram_30079a8c != '\0') && ((byte)(param_1 - 1U) < 0x10)) {
    custom0();
    if ((param_2 & 0x7f) < 0x40) {
      FUN_ram_4002ce44(param_2 & 0x7f);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4002d322.
 * REA evidence: ev_ef03bf03e2593b26181c9b15d103a30f8f6f21e58e8e1bec9ad8e12a533e1da3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d322(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  
  if ((DAT_ram_30079a8c != '\0') && ((byte)(param_1 - 1U) < 0x10)) {
    if ((param_2 - 0x100 & 0xffff) < 8) {
      FUN_ram_4002cc82(param_2 & 0xff,0x1fff < param_3);
      return;
    }
    if (0x3fff < param_3) {
      param_3 = 0x3fff;
    }
    fVar4 = (float)(param_3 & 0xffff) / DAT_ram_4009541c;
    if ((param_2 - 0x200 & 0xffff) < 8) {
      param_2 = param_2 & 0xff;
      uVar1 = FUN_ram_40024fb8(param_2);
      uVar3 = 0;
      if (1 < uVar1) {
        if (DAT_ram_4009281c < fVar4) {
          fVar4 = DAT_ram_4009281c;
        }
        uVar3 = (uint)((float)(int)(uVar1 - 1) * fVar4 + DAT_ram_40092864);
        if ((int)uVar3 < 0) {
          uVar3 = 0;
        }
        if ((int)uVar1 <= (int)uVar3) {
          uVar3 = uVar1 - 1;
        }
        uVar3 = uVar3 & 0xff;
      }
      uVar2 = FUN_ram_40024fc6(param_2,uVar3);
      FUN_ram_4002ccaa(param_2,uVar2);
      return;
    }
    if (0xfff < param_2) {
      uVar3 = (param_2 - 0x1000 & 0x1fff) >> 5;
      if (uVar3 < 8) {
        FUN_ram_4002cce6(uVar3,param_2 - 0x1000 & 0x1f);
        return;
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4002d412.
 * REA evidence: ev_66e937aa3744b8c1d235a800613ba418b3874d7b891f31612d8b9d0cff836aa7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d412(void)

{
  return;
}


/* NanoCore 1.10, address 0x4002d414.
 * REA evidence: ev_edf753e596c52b98a9a579b0d39e72633df3d08148bf8a1fc271bb829b08c3db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d414(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 4 + 0x30079a9c) + 1;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  *(int *)(param_1 * 4 + 0x30079a9c) = iVar1;
  return;
}


/* NanoCore 1.10, address 0x4002d42e.
 * REA evidence: ev_a336e108f59304236aefc12314c594f0bf83f7fba8f003c77610a0af6d3d9a34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002d42e(code *param_1)

{
  uint uVar1;
  
  if (param_1 == (code *)0x0) {
    return 0xff;
  }
  uVar1 = (*param_1)();
  if (uVar1 < 0xff) {
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4002d440.
 * REA evidence: ev_7db3a9fd99b9e2d618b6bcae84ad415ef1d5afc0d8eac156d13f5adafb539707
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002d440(code *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1)();
  if (uVar1 < 0xff) {
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4002d454.
 * REA evidence: ev_ab71ef8c46af91c5931bd89198461b85cbc667d2baecd6643249bdfd08f8577a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002d454(ushort *param_1,byte *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (((param_1 != (ushort *)0x0) && (param_2 != (byte *)0x0)) && ((ushort)*param_2 <= *param_1)) {
    uVar1 = *(undefined1 *)((int)param_1 + 0x33d);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4002d470.
 * REA evidence: ev_f54806450b65abd4a73d07a5be71e7e91b6dae510e46356ad971e7ccbe52302a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002d470(ushort *param_1,byte *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (((param_1 != (ushort *)0x0) && (param_2 != (byte *)0x0)) && ((ushort)*param_2 <= *param_1)) {
    uVar1 = (undefined1)param_1[0x19f];
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4002d48c.
 * REA evidence: ev_5a9bdac887a7570562caf39d7c02bf5f1bb827d45b72b120f29cd7e2a05a2fa2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002d48c(ushort *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((((param_1 != (ushort *)0x0) && (param_2 != 0)) &&
      ((ushort)*(byte *)(param_2 + 1) <= *param_1)) && (*(code **)(param_2 + 4) != (code *)0x0)) {
    iVar2 = (**(code **)(param_2 + 4))(*(undefined1 *)((int)param_1 + 0x33f));
    if (iVar2 == 0) {
      uVar1 = 0xff;
    }
    else {
      uVar1 = *(undefined1 *)((int)param_1 + 0x33f);
    }
    return uVar1;
  }
  return 0xff;
}


/* NanoCore 1.10, address 0x4002d4c8.
 * REA evidence: ev_6d50b482e7e6d9ff68f6b449783036f8a6d094abfb62b1004760fdc958655c18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002d4c8(void)

{
  int iVar1;
  
  if ((DAT_ram_30079bc8 == '\0') &&
     (iVar1 = FUN_ram_4000493c(0x30079b9c,&DAT_ram_4009542c,1), iVar1 == 0)) {
    DAT_ram_30079bc8 = '\x01';
  }
  return -(uint)(DAT_ram_30079bc8 == '\0');
}


/* NanoCore 1.10, address 0x4002d50e.
 * REA evidence: ev_ca5ae26cfb3acccc0fb2ecc1d7103dda70e8cecb28581e7b4e84b3adcbb6a595
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002d50e(void)

{
  int iVar1;
  
  if (DAT_ram_30079bc8 == '\0') {
    iVar1 = FUN_ram_4002d4c8();
    if (iVar1 != 0) {
      return -1;
    }
    if (DAT_ram_30079bc8 == '\0') {
      return -1;
    }
  }
  iVar1 = FUN_ram_400049d6(0x30079b9c,0xffffffff);
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.10, address 0x4002d552.
 * REA evidence: ev_f0fdb7041ae648acc591722742ccded3163e7d4ab21ee978ba58fe4a8d317bad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d552(void)

{
  if (DAT_ram_30079bc8 != '\0') {
    FUN_ram_40004ac8(0x30079b9c);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002d56a.
 * REA evidence: ev_c404412ce71e313e6d4ae0897a81e1e46d0d77c417c5e4287ea19b2b680b4136
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002d56a(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (0x3f < param_1) {
    return false;
  }
  iVar2 = FUN_ram_4002d50e();
  if (iVar2 == 0) {
    bVar1 = *(int *)(param_1 * 4 + 0x30079a9c) == param_2;
    FUN_ram_4002d552();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4002d582.
 * REA evidence: ev_0e031d9352f89d06b6092190762f8ec73f29928fc2dfe9f816445a5de755391d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002d582(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4002d50e();
  if (iVar2 == 0) {
    bVar1 = *(int *)(param_1 * 4 + 0x30079a9c) == param_2;
    FUN_ram_4002d552();
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4002d5b0.
 * REA evidence: ev_e325ca9a5c45d3d042a2bab8ba2e1f101ac43db46e51d403f41e3ff81c87ea0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002d5b0(int param_1,int param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined4 uVar1;
  
  if ((param_2 != 0xff) && (param_2 != param_1)) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4002d5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
      return uVar1;
    }
    return 0xffffffff;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002d5ca.
 * REA evidence: ev_f2996f9f6fd52bd0fb47f004e9a716301fe7fdc7af6426e3157f321b96117366
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002d5ca(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x340) != '\0')) {
    iVar1 = (*param_4)(param_2,param_3);
    if (param_1 != iVar1) {
      iVar1 = 0xff;
    }
    return iVar1;
  }
  return 0xff;
}


/* NanoCore 1.10, address 0x4002d5f8.
 * REA evidence: ev_1d99a99c635d9dbcb69a929b34d8590881f40b23e91f349541b3429132d135c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002d5f8(uint param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (0x3f < param_1) {
    return false;
  }
  iVar3 = FUN_ram_4002d50e();
  iVar1 = _DAT_ram_30079a98;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 * 4 + 0x30079a9c);
    bVar2 = param_2 == iVar3;
    if ((param_2 == iVar3) && (_DAT_ram_30079a98 != 0)) {
      *(undefined1 *)(_DAT_ram_30079a98 + param_1 + 0x10080) = 0;
      *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
    }
    FUN_ram_4002d552();
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* NanoCore 1.10, address 0x4002d610.
 * REA evidence: ev_15377fd787ca408e307bc2f94919b7c950ab11cfa8b4b91a2b2e6cbfc23dd2fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002d610(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FUN_ram_4002d50e();
  iVar1 = _DAT_ram_30079a98;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 * 4 + 0x30079a9c);
    bVar2 = param_2 == iVar3;
    if ((param_2 == iVar3) && (_DAT_ram_30079a98 != 0)) {
      *(undefined1 *)(_DAT_ram_30079a98 + param_1 + 0x10080) = 0;
      *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
    }
    FUN_ram_4002d552();
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* NanoCore 1.10, address 0x4002d662.
 * REA evidence: ev_fa85c0e386a83779cf2ca3a2de4b1b941e1342379e2e9f9e4ddcdf06c0733657
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002d662(void)

{
  void *__s;
  undefined4 uVar1;
  
  __s = (void *)FUN_ram_4003e050(1,0x100c2);
  uVar1 = 0xffffffff;
  if (__s != (void *)0x0) {
    memset(__s,0,0x100c2);
    uVar1 = 0;
    _DAT_ram_30079a98 = __s;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4002d69c.
 * REA evidence: ev_1b6ec4673245926cfd32fd65a83bbcf6a18438ae67155279db47c4393ccc4156
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002d69c(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  if (((param_1 < 0x40) && (param_4 - 1U < 0x400)) && (iVar1 = FUN_ram_4002d50e(), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 * 4 + 0x30079a9c);
    bVar2 = param_2 == iVar1;
    if ((param_2 == iVar1) && ((_DAT_ram_30079a98 != 0 || (iVar1 = FUN_ram_4002d662(), iVar1 == 0)))
       ) {
      iVar1 = _DAT_ram_30079a98;
      FUN_ram_4000305c(param_1 * 0x400 + _DAT_ram_30079a98,param_3,param_4);
      *(short *)(iVar1 + (param_1 + 0x8000) * 2) = (short)param_4;
      *(undefined1 *)(param_1 + iVar1 + 0x10080) = 1;
    }
    FUN_ram_4002d552();
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* NanoCore 1.10, address 0x4002d736.
 * REA evidence: ev_faea40b69ca0e31f906dbf957242fb8a516e471aefa30d096afbcc243bfed82c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002d736(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                    int param_7)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_4008d9ce();
  iVar1 = 0;
  if (param_4 != 0) {
    iVar1 = 1;
    if (param_7 != 0xff) {
      iVar1 = -1;
      if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
        iVar1 = (**(code **)(param_1 + 0x1c))();
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
  }
  if (param_3 != 0) {
    if (param_6 == 0xff) {
      if (iVar1 == 0) {
        iVar1 = 1;
      }
    }
    else if ((*(code **)(param_1 + 0x18) == (code *)0x0) ||
            (iVar2 = (**(code **)(param_1 + 0x18))(param_6), iVar2 != 0)) {
      iVar1 = -1;
    }
  }
  if (param_2 != 0) {
    if (param_5 == 0xff) {
      if (iVar1 == 0) {
        iVar1 = 1;
      }
    }
    else if ((*(code **)(param_1 + 0x14) == (code *)0x0) ||
            (iVar2 = (**(code **)(param_1 + 0x14))(param_5), iVar2 != 0)) {
      iVar1 = -1;
    }
  }
  FUN_ram_4008da34();
  return iVar1;
}


/* NanoCore 1.10, address 0x4002d7ce.
 * REA evidence: ev_bcb320c9ac38b827963c9630b8ee8611227ce486b6def98cca37962abe864d65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d7ce(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_64c [732];
  undefined1 auStack_370 [130];
  undefined1 uStack_2ee;
  undefined1 uStack_28a;
  undefined1 uStack_226;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (*(int *)(param_3 + 0x24) != 0)) &&
     (*(int *)(param_3 + 0x28) != 0)) {
    if ((param_1 != 0) && (*(char *)(param_1 + 0x340) != '\0')) {
      param_2 = param_1;
    }
    FUN_ram_4000305c(auStack_370,param_2,0x340);
    uVar1 = FUN_ram_4002d454(auStack_370,param_3);
    uVar2 = FUN_ram_4002d470(auStack_370,param_3);
    uVar3 = FUN_ram_4002d48c(auStack_370,param_3);
    if (param_4 != 0) {
      uStack_28a = 0;
      uStack_33 = 0xff;
      uVar1 = 0xff;
    }
    if (param_5 != 0) {
      uStack_226 = 0;
      uStack_32 = 0xff;
      uVar2 = 0xff;
    }
    if (param_6 != 0) {
      uStack_2ee = 0;
      uStack_31 = 0xff;
      uVar3 = 0xff;
    }
    if ((param_7 != 0) ||
       (((*(code **)(param_3 + 0x3c) != (code *)0x0 && (*(int *)(param_3 + 0x40) != 0)) &&
        (iVar4 = (**(code **)(param_3 + 0x3c))(), iVar4 == 0)))) {
      (**(code **)(param_3 + 0x24))(auStack_370,auStack_64c);
      iVar4 = (**(code **)(param_3 + 0x28))(auStack_64c);
      if ((iVar4 == 0) &&
         (((*(code **)(param_3 + 0x30) == (code *)0x0 ||
           (iVar4 = (**(code **)(param_3 + 0x30))(uStack_34), iVar4 == 0)) &&
          (*(code **)(param_3 + 0x20) != (code *)0x0)))) {
        (**(code **)(param_3 + 0x20))(uVar1,uVar2,uVar3);
      }
      if (param_7 == 0) {
        (**(code **)(param_3 + 0x40))();
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002d8ee.
 * REA evidence: ev_0ce687a637a82a67afeca09be6f2e660b50430dbe148cbc4899ba5cb1858b7c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002d8ee(int param_1)

{
  int iVar1;
  undefined4 in_a4;
  undefined4 in_a5;
  undefined4 in_a6;
  
  iVar1 = -1;
  if (((param_1 != 0) && (iVar1 = FUN_ram_4002d736(), iVar1 == 0)) &&
     (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(in_a4,in_a5,in_a6);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4002d92e.
 * REA evidence: ev_59ecc901b7d1e535478312b6c0d151bd358ab2f4c13407b7f7c557e479964352
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002d92e(uint param_1)

{
  int iVar1;
  
  if (0x3f < param_1) {
    return;
  }
  iVar1 = FUN_ram_4002d50e();
  if (iVar1 == 0) {
    FUN_ram_4002d414(param_1);
    iVar1 = _DAT_ram_30079a98;
    if (_DAT_ram_30079a98 != 0) {
      *(undefined1 *)(_DAT_ram_30079a98 + param_1 + 0x10080) = 0;
      *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
    }
    FUN_ram_4002d552();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002d97c.
 * REA evidence: ev_75a68857d70918541924b3268427bb83b78c9448627d86f6f57ed130d6e415d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002d97c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uStack_424;
  undefined1 auStack_420 [1024];
  
  iVar2 = FUN_ram_4002d50e();
  if (iVar2 == 0) {
    if ((_DAT_ram_30079a98 != 0) || (iVar2 = FUN_ram_4002d662(), iVar2 == 0)) {
      if (*(short *)(_DAT_ram_30079a98 + 0x100c0) == 0) {
        *(undefined1 *)(_DAT_ram_30079a98 + 0x100c1) = 1;
        FUN_ram_4002d552();
        uVar1 = 0;
        do {
          uVar3 = uVar1 & 0xff;
          uStack_424 = 0;
          iVar2 = FUN_ram_4002d50e();
          if (iVar2 == 0) {
            uVar4 = *(undefined4 *)(uVar1 * 4 + 0x30079a9c);
            FUN_ram_4002d552();
            iVar2 = FUN_ram_400315ca(uVar3,auStack_420,0x400,&uStack_424);
            if (iVar2 == 0) {
              FUN_ram_4002d69c(uVar3,uVar4,auStack_420,uStack_424);
            }
            else if (iVar2 == 1) {
              FUN_ram_4002d5f8(uVar3,uVar4);
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 != 0x40);
        iVar2 = FUN_ram_4002d50e();
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        *(undefined2 *)(_DAT_ram_30079a98 + 0x100c0) = 1;
      }
      FUN_ram_4002d552();
      return 0;
    }
    FUN_ram_4002d552();
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002da72.
 * REA evidence: ev_56b3ccbbdc7dad8836ce5ee1ded76f3237f371a11d0f9e3af986651b0414f841
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002da72(uint param_1,int param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uStack_45c;
  char acStack_458 [24];
  undefined1 auStack_440 [1036];
  
  if ((param_2 != 0) && (param_1 < 0x40)) {
    cVar4 = '\x04';
    do {
      uStack_45c = 0;
      iVar1 = FUN_ram_4002d50e();
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      iVar3 = *(int *)(param_1 * 4 + 0x30079a9c);
      FUN_ram_4002d552();
      iVar1 = FUN_ram_40031504(param_1,acStack_458);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      if (acStack_458[0] == '\0') {
        iVar1 = FUN_ram_4002d5f8(param_1,iVar3);
        if (iVar1 != 0) {
          FUN_ram_40014920(param_2);
          goto LAB_ram_4002db10;
        }
      }
      else {
        iVar1 = FUN_ram_4002d50e();
        if (iVar1 == 0) {
          if (iVar3 == *(int *)(param_1 * 4 + 0x30079a9c)) {
            if ((_DAT_ram_30079a98 == 0) ||
               (*(char *)(_DAT_ram_30079a98 + param_1 + 0x10080) == '\0')) {
              FUN_ram_4002d552();
              iVar1 = FUN_ram_400315ca(param_1,auStack_440,0x400,&uStack_45c);
              if (iVar1 != 1) {
                if ((iVar1 == 0) &&
                   (iVar1 = FUN_ram_40014af4(param_2,auStack_440,uStack_45c), iVar1 == 0)) {
                  iVar1 = FUN_ram_4002d69c(param_1,iVar3,auStack_440,uStack_45c);
                  if (iVar1 != 0) goto LAB_ram_4002db10;
                }
                else {
                  iVar1 = FUN_ram_4002d56a(param_1,iVar3);
                  if (iVar1 != 0) {
                    return 0xffffffff;
                  }
                }
              }
            }
            else {
              iVar1 = _DAT_ram_30079a98 + param_1 * 2;
              uVar5 = (uint)*(ushort *)(iVar1 + 0x10000);
              if (0x3ff < (uVar5 - 1 & 0xffff)) {
                *(undefined1 *)(_DAT_ram_30079a98 + param_1 + 0x10080) = 0;
                *(undefined2 *)(iVar1 + 0x10000) = 0;
LAB_ram_4002db9c:
                FUN_ram_4002d414(param_1);
                goto LAB_ram_4002dba2;
              }
              FUN_ram_4000305c(auStack_440,_DAT_ram_30079a98 + param_1 * 0x400,uVar5);
              uStack_45c = uVar5;
              FUN_ram_4002d552();
              iVar1 = FUN_ram_40014af4(param_2,auStack_440,uStack_45c);
              if (iVar1 == 0) {
LAB_ram_4002db10:
                if (param_3 != (code *)0x0) {
                  (*param_3)(param_2);
                }
                iVar1 = FUN_ram_4002d56a(param_1,iVar3);
                if (iVar1 != 0) {
                  return 0;
                }
              }
              else {
                iVar2 = FUN_ram_4002d50e();
                iVar1 = _DAT_ram_30079a98;
                if (iVar2 == 0) {
                  if (iVar3 != *(int *)(param_1 * 4 + 0x30079a9c)) goto LAB_ram_4002dba2;
                  if (_DAT_ram_30079a98 != 0) {
                    *(undefined1 *)(_DAT_ram_30079a98 + param_1 + 0x10080) = 0;
                    *(undefined2 *)(iVar1 + (param_1 + 0x8000) * 2) = 0;
                  }
                  goto LAB_ram_4002db9c;
                }
              }
            }
          }
          else {
LAB_ram_4002dba2:
            FUN_ram_4002d552();
          }
        }
      }
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002dc40.
 * REA evidence: ev_a2f8b5746ed9da9a916dd77b26f049d65aa0d74f202d79f4162db487cf2fb202
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002dc40(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) &&
      ((*(uint *)(param_1 + 0x33c) & 0xffff00) == (*(uint *)(param_2 + 0x33c) & 0xffff00))) &&
     ((*(char *)(param_1 + 0x33f) == *(char *)(param_2 + 0x33f) &&
      (iVar1 = FUN_ram_40002ffc(param_1 + 0x12,param_2 + 0x12,8), iVar1 == 0)))) {
    pcVar3 = (char *)(param_1 + 0x1c);
    pcVar2 = (char *)(param_2 + 0x1c);
    do {
      if (((*pcVar3 != *pcVar2) || (pcVar3[1] != pcVar2[1])) || (pcVar3[2] != pcVar2[2])) {
        return 1;
      }
      pcVar3 = pcVar3 + 100;
      pcVar2 = pcVar2 + 100;
    } while (pcVar3 != (char *)(param_1 + 0x33c));
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x4002dcd4.
 * REA evidence: ev_7dae2e9b75c9166b379e9e30c3b6aec51507332502dfbc2cbc87bfd44960a802
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002dcd4(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_3 != (undefined1 *)0x0) {
    uVar1 = 1;
    if (((param_1 != 0) && (*(char *)(param_1 + 0x340) != '\0')) && (param_2 != 0)) {
      uVar1 = FUN_ram_4002dc40();
    }
    *param_3 = uVar1;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002dcfe.
 * REA evidence: ev_f4d6d42eb3ade6db10653577f58470b3ccf6582014cdb9bf03c4756dc230c576
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002dcfe(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_ram_4000305c(param_1,param_2,0x340);
    *(undefined1 *)(param_1 + 0x340) = 1;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002dd22.
 * REA evidence: ev_dc973ea5f26e62aa243f99d4e5561c9ee6ab43a849277b3540b17f31775892c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002dd22(int param_1)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x340) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4002dd2a.
 * REA evidence: ev_e0bb7090f58139133f725d5a1951db8f70ad4dc41a2e1ba0fbdacd470f7feff8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002dd2a(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  undefined4 local_610;
  char acStack_5fc [4];
  undefined1 auStack_5f8 [732];
  undefined1 auStack_31c [744];
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (param_3 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_3 + 0x24) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_3 + 0x28) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_3 + 0x2c) == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_ram_4002d454(param_2,param_3);
  iVar3 = FUN_ram_4002d470(param_2,param_3);
  iVar4 = FUN_ram_4002d48c(param_2,param_3);
  uVar5 = FUN_ram_4002d42e(*(undefined4 *)(param_3 + 8));
  local_610 = FUN_ram_4002d42e(*(undefined4 *)(param_3 + 0xc));
  uVar6 = FUN_ram_4002d42e(*(undefined4 *)(param_3 + 0x10));
  iVar7 = FUN_ram_4002d5ca(uVar5,param_1,param_3,FUN_ram_4002d454);
  iVar8 = FUN_ram_4002d5ca(local_610,param_1,param_3,FUN_ram_4002d470);
  iVar9 = FUN_ram_4002d5ca(uVar6,param_1,param_3,FUN_ram_4002d48c);
  if (*(char *)(param_1 + 0x340) != '\0') {
    uVar5 = FUN_ram_4002d454(param_1,param_3);
    local_610 = FUN_ram_4002d470(param_1,param_3);
    uVar6 = FUN_ram_4002d48c(param_1,param_3);
  }
  if ((((iVar2 == 0xff) || (iVar2 == iVar7)) && ((iVar3 == 0xff || (iVar3 == iVar8)))) &&
     ((iVar4 == 0xff || (iVar4 == iVar9)))) {
    bVar1 = false;
  }
  else {
    if (*(code **)(param_3 + 0x34) == (code *)0x0) {
      return 0xffffffff;
    }
    if (*(int *)(param_3 + 0x38) == 0) {
      return 0xffffffff;
    }
    iVar10 = (**(code **)(param_3 + 0x34))();
    if (iVar10 != 0) {
      return 0xffffffff;
    }
    bVar1 = true;
  }
  FUN_ram_4008d9ce();
  if ((iVar2 == 0xff) || (iVar2 == iVar7)) {
    bVar16 = false;
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_ram_4002d5b0(iVar7,iVar2,*(undefined4 *)(param_3 + 0x14));
    bVar16 = iVar7 != 0;
    if (bVar16) {
      *(undefined1 *)(param_2 + 0xe6) = 0;
      *(undefined1 *)(param_2 + 0x33d) = 0xff;
      iVar2 = 0xff;
    }
    iVar7 = 1;
  }
  if ((iVar3 == 0xff) || (iVar3 == iVar8)) {
    bVar15 = false;
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_ram_4002d5b0(iVar8,iVar3,*(undefined4 *)(param_3 + 0x18));
    bVar15 = iVar8 != 0;
    if (bVar15) {
      *(undefined1 *)(param_2 + 0x14a) = 0;
      *(undefined1 *)(param_2 + 0x33e) = 0xff;
      iVar3 = 0xff;
    }
    iVar8 = 1;
  }
  if ((iVar4 == 0xff) || (iVar4 == iVar9)) {
    bVar13 = false;
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_ram_4002d5b0(iVar9,iVar4,*(undefined4 *)(param_3 + 0x1c));
    bVar13 = iVar9 != 0;
    if (bVar13) {
      *(undefined1 *)(param_2 + 0x82) = 0;
      *(undefined1 *)(param_2 + 0x33f) = 0xff;
      iVar4 = 0xff;
    }
    iVar9 = 1;
  }
  FUN_ram_4008da34();
  if (((bVar16 != false || bVar15 != false) || bVar13 != false) &&
     (iVar10 = FUN_ram_4002d736(param_3,bVar16,bVar15,bVar13,uVar5,local_610,uVar6), iVar10 < 0)) {
    iVar2 = FUN_ram_4002d8ee(param_3,iVar7,iVar8,iVar9,uVar5,local_610,uVar6);
    if (iVar2 != 0) {
      FUN_ram_4002d7ce(param_1,param_2,param_3,iVar7,iVar8,iVar9,0);
    }
    if (bVar1) {
      (**(code **)(param_3 + 0x38))();
    }
    FUN_ram_4002dd22(param_1);
    return 0xffffffff;
  }
  FUN_ram_4002dcd4(param_1,param_2,acStack_5fc);
  if (((*(code **)(param_3 + 0x3c) == (code *)0x0) || (*(int *)(param_3 + 0x40) == 0)) ||
     (iVar10 = (**(code **)(param_3 + 0x3c))(), iVar10 != 0)) {
    if (!bVar1) {
      return 0xffffffff;
    }
    iVar2 = FUN_ram_4002d8ee(param_3,iVar7,iVar8,iVar9,uVar5,local_610,uVar6);
    if (iVar2 != 0) {
      FUN_ram_4002d7ce(param_1,param_2,param_3,iVar7,iVar8,iVar9,0);
      FUN_ram_4002dd22(param_1);
    }
    (**(code **)(param_3 + 0x38))();
    return 0xffffffff;
  }
  (**(code **)(param_3 + 0x24))(param_2,auStack_5f8);
  if (acStack_5fc[0] == '\0') {
    pcVar14 = *(code **)(param_3 + 0x2c);
  }
  else {
    pcVar14 = *(code **)(param_3 + 0x28);
  }
  iVar11 = (*pcVar14)(auStack_5f8);
  iVar10 = iVar11;
  if ((iVar11 == 0) &&
     ((*(code **)(param_3 + 0x30) == (code *)0x0 ||
      (iVar10 = (**(code **)(param_3 + 0x30))(*(undefined1 *)(param_2 + 0x33c)), iVar10 == 0))))
  goto LAB_ram_4002e05a;
  iVar12 = FUN_ram_4002d8ee(param_3,iVar7,iVar8,iVar9,uVar5,local_610,uVar6);
  iVar11 = iVar10;
  if (*(char *)(param_1 + 0x340) == '\0') {
LAB_ram_4002e034:
    if (iVar12 == 0) goto LAB_ram_4002e05a;
  }
  else {
    (**(code **)(param_3 + 0x24))(param_1,auStack_31c);
    iVar10 = (**(code **)(param_3 + 0x28))(auStack_31c);
    if (iVar10 != 0) {
      iVar12 = -1;
    }
    if ((*(code **)(param_3 + 0x30) == (code *)0x0) ||
       (iVar10 = (**(code **)(param_3 + 0x30))(*(undefined1 *)(param_1 + 0x33c)), iVar10 == 0))
    goto LAB_ram_4002e034;
  }
  if (iVar9 != 0 || (iVar7 != 0 || iVar8 != 0)) {
    FUN_ram_4002d7ce(param_1,param_2,param_3,iVar7,iVar8,iVar9,1);
  }
  FUN_ram_4002dd22(param_1);
LAB_ram_4002e05a:
  (**(code **)(param_3 + 0x40))();
  if (bVar1) {
    (**(code **)(param_3 + 0x38))();
  }
  if (iVar11 != 0) {
    return 0xffffffff;
  }
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    (**(code **)(param_3 + 0x20))(iVar2,iVar3,iVar4);
  }
  FUN_ram_4002dcfe(param_1,param_2);
  return 0;
}


