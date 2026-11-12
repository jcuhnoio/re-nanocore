/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40030000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400301cc.
 * REA evidence: ev_1830f2bbbe1b5428fd376eb8ab06b1dfb94cfa5382a309c17cfa54726debaf00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400301cc(void)

{
  if (_DAT_ram_3007c560 != 0) {
    FUN_ram_40004ab8(0x3007c534);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400301e4.
 * REA evidence: ev_0a4dedba2044539cee85310757f7fc25a2c20586ded9e81902f1e0dc2e60a309
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400301e4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 0;
    while( true ) {
      if (param_2 == iVar1) {
        return 1;
      }
      if (*(char *)(param_1 + iVar1) != -1) break;
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40030204.
 * REA evidence: ev_ea9ba13c5953fd88d6ecd271a9ef64cab0b885ef2a4000b40e12aec984d7ed89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40030204(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_ram_400301e4(param_1,0x18);
    iVar2 = 1;
    if (iVar1 == 0) {
      iVar2 = 1 - (*(byte *)(param_1 + 6) & 1);
    }
    return iVar2;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40030230.
 * REA evidence: ev_90890d94d6b27125fadc6e5d57d26e7a42870495bda99d47f7eb25b4638dfa02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030230(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  iVar4 = FUN_ram_4002fd18();
  if ((iVar4 != 0) && (iVar4 = FUN_ram_40007554(0,param_2,(short)param_1[1]), iVar4 == *param_1)) {
    uVar11 = (uint)*(ushort *)(param_1 + 1);
    iVar4 = FUN_ram_400301e4(param_2 + uVar11,0x400 - uVar11);
    if (iVar4 != 0) {
      uVar5 = 0;
      bVar3 = false;
      bVar2 = false;
      bVar10 = false;
      uVar8 = 0;
      while (uVar9 = uVar8 + 2, uVar9 <= uVar11) {
        bVar1 = *(byte *)(param_2 + uVar8);
        uVar6 = (uint)*(byte *)(uVar8 + param_2 + 1);
        uVar8 = uVar6 + uVar9;
        if (uVar11 < uVar8) {
          return 0;
        }
        if (bVar1 == 3) {
          if (bVar3) {
            return 0;
          }
          if (uVar6 != 8) {
            return 0;
          }
          bVar3 = true;
        }
        else if (bVar1 < 4) {
          if (bVar1 == 1) {
            if (bVar10) {
              return 0;
            }
            if (uVar6 != 2) {
              return 0;
            }
            bVar10 = true;
          }
          else if (bVar1 == 2) {
            if (bVar2) {
              return 0;
            }
            if (uVar6 != 0x10) {
              return 0;
            }
            bVar2 = true;
          }
        }
        else if (bVar1 == 0x10) {
          if (uVar6 < 5) {
            return 0;
          }
          uVar7 = (uint)*(byte *)(param_2 + uVar9 + 4);
          if (7 < *(byte *)(param_2 + uVar9)) {
            return 0;
          }
          uVar9 = 1 << (*(byte *)(param_2 + uVar9) & 0x1f);
          if ((uVar9 & uVar5) != 0) {
            return 0;
          }
          if (0xc < uVar7) {
            return 0;
          }
          if (uVar6 != ((uVar7 + 1) * 5 & 0xff)) {
            return 0;
          }
          uVar5 = uVar9 & 0xffff | uVar5;
        }
      }
      if ((((uVar11 == uVar8) && (bVar10)) && (bVar2)) &&
         (((bVar3 && (uVar5 == 0xff)) &&
          (iVar4 = FUN_ram_40015274(param_3,param_2,uVar11), iVar4 == 0)))) {
        FUN_ram_4000304c(param_4,param_1,0x18);
        FUN_ram_4000304c(param_4 + 8,param_3 + 2,0x10);
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x400303ac.
 * REA evidence: ev_a50c941623d0e94a2a80cbf9615122b029d2a8790c182509b02fba9193568517
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400303ac(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1) != '\0') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (param_2 != iVar1);
  return 1;
}


/* NanoCore 1.11, address 0x400303c2.
 * REA evidence: ev_c7f29128dded3de02a2e15c9d15b5eb5a3aeed3c2ba9020e0a9876d5e23505d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400303c2(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1) != *(char *)(param_2 + iVar1)) {
      do {
        if (*(char *)(param_1 + iVar1) != -1) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x614);
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x614);
  return 1;
}


/* NanoCore 1.11, address 0x400303fc.
 * REA evidence: ev_8dcdcf031e75ce63729ed8d3fa6ea881119a2c0b13f589e053c741c215181eda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400303fc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (0xffbe < (ushort)(*(short *)(param_1 + 6) - 0x40U)) {
    iVar1 = param_1 + 0x14;
    while ((iVar2 = FUN_ram_40030204(iVar1), iVar2 != 0 ||
           (iVar2 = FUN_ram_4002fd18(iVar1), iVar2 != 0))) {
      iVar1 = iVar1 + 0x18;
      if (iVar1 == param_1 + 0x614) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40030458.
 * REA evidence: ev_df6acf5b6f0e8ca3be2a5e039b85a27eeb89bee340cc43fc97d1199c4a84a26f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40030458(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40007554(0,param_1,0x28);
  uVar1 = FUN_ram_40007554(uVar1,&DAT_ram_400972e0,4);
  FUN_ram_40007554(uVar1,param_1 + 0x2c,0x624);
  return;
}


/* NanoCore 1.11, address 0x4003048c.
 * REA evidence: ev_f358b63d9e398ac1d8e589d2e76b0185c4fc212c6adc6da4058430bd6498dcd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003048c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40007554(0,param_1,0xc);
  uVar1 = FUN_ram_40007554(uVar1,&DAT_ram_400972dc,4);
  FUN_ram_40007554(uVar1,param_1 + 0x10,0x604);
  return;
}


/* NanoCore 1.11, address 0x400304be.
 * REA evidence: ev_5e59d6b9f6d62044fde23785a9162831de7cc4a460172b7d32132919f360d0e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400304be(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_4002fcd4();
  bVar1 = false;
  if (((iVar2 != 0) && (iVar2 = FUN_ram_400303fc(param_1), bVar1 = false, iVar2 != 0)) &&
     (bVar1 = false, *(int *)(param_1 + 0x10) == 0x50543232)) {
    if (*(int *)(param_1 + 8) != 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar3 = FUN_ram_4003048c(param_1);
      bVar1 = iVar2 == iVar3;
    }
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x40030552.
 * REA evidence: ev_4672df1d62849c87bd88b20a885afa39d12769a531cd2fb6b60c41d5db6e69d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030552(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 0x58545350)) && ((short)param_1[1] == 1)) &&
     (((*(short *)((int)param_1 + 6) == 0x40 && (param_1[2] != 0)) &&
      ((param_1[4] == 0 || (iVar1 = FUN_ram_4002fcaa(), iVar1 != 0)))))) {
    iVar1 = param_1[3];
    iVar2 = FUN_ram_4002fcbc(iVar1);
    if ((((iVar2 != 0) && (*(byte *)((int)param_1 + 0x26) < 0x40)) &&
        ((iVar1 == (*(byte *)((int)param_1 + 0x26) + 4 & 0xfc) << 10 &&
         (((((byte)(*(char *)((int)param_1 + 0x27) - 1U) < 2 && ((short)param_1[9] == 0x614)) &&
           (iVar1 = FUN_ram_400303ac(param_1 + 0xb,0x10), iVar1 != 0)) &&
          ((iVar1 = param_1[10], iVar2 = FUN_ram_40030458(param_1), iVar1 == iVar2 &&
           (iVar1 = FUN_ram_400304be(param_1 + 0xf), iVar1 != 0)))))))) &&
       ((param_1[0x11] == param_1[2] && (param_1[0x12] == param_1[8])))) {
      if (*(char *)((int)param_1 + 0x27) == '\x01') {
        iVar1 = FUN_ram_4002fd18(param_1 + (uint)*(byte *)((int)param_1 + 0x26) * 6 + 0x14);
      }
      else {
        if (*(char *)((int)param_1 + 0x27) != '\x02') {
          return 1;
        }
        iVar1 = FUN_ram_40030204(param_1 + (uint)*(byte *)((int)param_1 + 0x26) * 6 + 0x14);
      }
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4003075a.
 * REA evidence: ev_52f197ee21416f7f7af01b465bf205b455ad2268f045b40d0a1fad8c81754af5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003075a(uint param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_4 == 0) {
    return 0xfffffffa;
  }
  iVar3 = FUN_ram_4002fcbc();
  uVar4 = 0xfffffffa;
  if ((iVar3 != 0) && (param_3 != 0)) {
    uVar2 = 0x1000;
    piVar1 = (int *)0x3007c57c;
    uVar5 = 0;
    do {
      if (((((uVar5 & 0xff) < param_2) || ((int)(param_3 + param_2) <= (int)uVar5)) &&
          (param_1 <= uVar2)) &&
         ((uVar2 < param_1 + 0x1000 && (iVar3 = FUN_ram_40030204(piVar1), iVar3 == 0)))) {
        iVar3 = FUN_ram_4002fd18(piVar1);
        if (iVar3 == 0) {
          return 0xfffffffd;
        }
        iVar6 = (param_4 - param_1) + uVar2;
        iVar3 = FUN_ram_40007554(0,iVar6,(short)piVar1[1]);
        if (iVar3 != *piVar1) {
          return 0xfffffffd;
        }
        iVar3 = FUN_ram_400301e4((uint)*(ushort *)(piVar1 + 1) + iVar6,
                                 0x400 - (uint)*(ushort *)(piVar1 + 1));
        if (iVar3 == 0) {
          return 0xfffffffd;
        }
      }
      uVar5 = uVar5 + 1;
      piVar1 = piVar1 + 6;
      uVar2 = uVar2 + 0x400;
    } while (uVar5 != 0x40);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x4003082a.
 * REA evidence: ev_6cd01431b312630e8a21fedb7f57096eefc8838863cf7280cbb97a6e30ca14fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003082a(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40030204();
  if (iVar1 != 0) {
    memset(param_2,0,0x18);
    return;
  }
  iVar1 = FUN_ram_4002fd18(param_1);
  *(bool *)param_2 = iVar1 != 0;
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 1);
  *(undefined4 *)(param_2 + 4) = *param_1;
  FUN_ram_4000304c(param_2 + 8,param_1 + 2,0xf);
  *(undefined1 *)(param_2 + 0x17) = 0;
  return;
}


/* NanoCore 1.11, address 0x40030884.
 * REA evidence: ev_2f0c3cdac759e9a907f8a1a65ea77ffeb60344e2df08f8e285bc065b15850d75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40030884(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = 0;
  do {
    uVar4 = uVar4 ^ *(byte *)(param_1 + iVar2);
    cVar3 = '\b';
    do {
      cVar1 = (char)uVar4;
      uVar4 = (uVar4 & 0x7f) << 1;
      if (cVar1 < '\0') {
        uVar4 = uVar4 ^ 7;
      }
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xf);
  return uVar4;
}


/* NanoCore 1.11, address 0x400308b6.
 * REA evidence: ev_1660dd5e0aed25671b81e8d02145cefc05417ad59bb1fcca47b5b49460b0fb29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400308b6(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  int *piVar15;
  char local_4c [4];
  uint local_48 [5];
  
  uVar9 = _DAT_ram_3007c56e;
  if (0x3f < _DAT_ram_3007c56e) {
    uVar9 = 0;
  }
  local_4c[0] = '\0';
  local_4c[1] = '\0';
  local_48[0] = 0x100;
  local_48[1] = 0x100;
  piVar4 = (int *)FUN_ram_40005656(0x1000);
  uVar9 = uVar9 & 0xff;
  uVar5 = 0xfffffffb;
  if (piVar4 != (int *)0x0) {
    iVar10 = 0;
    iVar2 = 0;
    uVar3 = 0;
    iVar12 = 0;
    bVar1 = false;
    iVar13 = 0;
    uVar5 = 0x16000;
    while (iVar6 = FUN_ram_4002fe3c(uVar5,piVar4,0x1000), iVar6 == 0x1000) {
      uVar11 = 0;
      piVar15 = piVar4;
      do {
        iVar6 = FUN_ram_400301e4(piVar15,0x10);
        if (iVar6 == 0) {
          if ((((*piVar15 == 0x504a5631) && (iVar6 = piVar15[1], iVar6 != 0)) &&
              (uVar14 = (ushort)*(byte *)(piVar15 + 2), uVar14 < 0x40)) &&
             ((iVar7 = FUN_ram_400303ac((int)piVar15 + 9,6), iVar7 != 0 &&
              (uVar8 = FUN_ram_40030884(piVar15), *(byte *)((int)piVar15 + 0xf) == uVar8)))) {
            if (bVar1) {
              if (iVar6 == iVar2) {
                FUN_ram_400056b4(piVar4);
                return 0xfffffffd;
              }
              iVar7 = FUN_ram_4002fcaa(iVar6,iVar2);
              if (iVar7 != 0) {
                iVar2 = iVar6;
                uVar3 = uVar11;
                iVar12 = iVar13;
                uVar9 = uVar14;
              }
            }
            else {
              bVar1 = true;
              iVar2 = iVar6;
              uVar3 = uVar11;
              iVar12 = iVar13;
              uVar9 = uVar14;
            }
          }
          else {
            local_4c[iVar10] = '\x01';
          }
        }
        else if (local_48[iVar10] == 0x100) {
          local_48[iVar10] = uVar11;
        }
        uVar11 = uVar11 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar11 != 0x100);
      if (iVar10 != 0) {
        FUN_ram_400056b4(piVar4);
        if (bVar1) {
          _DAT_ram_3007c520 = uVar3 + 1;
          DAT_ram_3007c51b = (undefined1)iVar12;
          _DAT_ram_3007c51c = iVar2 + 1;
          if (_DAT_ram_3007c51c == 0) {
            _DAT_ram_3007c51c = 1;
          }
          DAT_ram_3007c51a = local_4c[iVar12] != '\0' || 0xff < _DAT_ram_3007c520;
          _DAT_ram_3007c56e = uVar9;
        }
        else {
          DAT_ram_3007c51b = 0;
          _DAT_ram_3007c520 = local_48[0];
          DAT_ram_3007c51a = (local_4c[0] != '\0' || local_4c[1] != '\0') || 0xff < local_48[0];
          _DAT_ram_3007c51c = iVar10;
        }
        DAT_ram_3007c519 = 1;
        return 0;
      }
      iVar10 = 1;
      iVar13 = 1;
      uVar5 = 0x17000;
    }
    FUN_ram_400056b4(piVar4);
    uVar5 = 0xfffffffc;
  }
  return uVar5;
}


/* NanoCore 1.11, address 0x40030aca.
 * REA evidence: ev_9ba19a37b84d4ffb833443227902a75551c87d2a3c73da744688026a8ec0d325
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030aca(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_120 [260];
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  while( true ) {
    uVar2 = 0x1000 - uVar1;
    if (0x100 < uVar2) {
      uVar2 = 0x100;
    }
    uVar3 = FUN_ram_4002fe3c(param_1 + uVar1,auStack_120,uVar2);
    if ((uVar3 != uVar2) ||
       (iVar4 = FUN_ram_40002fec(auStack_120,param_2 + uVar1,uVar2), iVar4 != 0)) break;
    uVar1 = uVar1 + uVar2;
    if (0xfff < uVar1) {
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40030b4e.
 * REA evidence: ev_80acbaf153580c4568a9ef893d45abd721edb91f98adc45997e863ca4f466795
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_40030b4e(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_40 [16];
  char local_30 [28];
  
  pcVar4 = local_40;
  if (param_2 == 0) {
    return '\x03';
  }
  iVar2 = FUN_ram_40005656(0x1000);
  if (iVar2 == 0) {
    return '\x05';
  }
  iVar3 = FUN_ram_4002fe3c(param_1,iVar2,0x1000);
  cVar1 = '\x04';
  if (iVar3 == 0x1000) {
    iVar3 = FUN_ram_400301e4(iVar2,0x1000);
    cVar1 = '\x01';
    if (iVar3 == 0) {
      FUN_ram_4000304c(param_2,iVar2,0x650);
      FUN_ram_4000304c(local_40,iVar2 + 0xff0,0x10);
      iVar3 = FUN_ram_40030552(param_2);
      if (iVar3 != 0) {
        FUN_ram_4002fedc(param_2,local_30);
        iVar3 = FUN_ram_40002fec(local_40,local_30,0x10);
        cVar1 = '\0';
        if (iVar3 == 0) goto LAB_ram_40030c16;
      }
      iVar3 = FUN_ram_400301e4(iVar2 + 0xff0,0x10);
      cVar1 = '\x02';
      if (iVar3 == 0) {
        iVar3 = FUN_ram_40030552(param_2);
        cVar1 = '\x03';
        if (iVar3 != 0) {
          FUN_ram_4002fedc(param_2,local_30);
          iVar3 = 0;
          do {
            if (*pcVar4 != local_30[iVar3]) {
              iVar3 = FUN_ram_400301e4(pcVar4,0x10 - iVar3);
              cVar1 = (iVar3 == 0) + '\x02';
              goto LAB_ram_40030c16;
            }
            iVar3 = iVar3 + 1;
            pcVar4 = pcVar4 + 1;
          } while (iVar3 != 0x10);
          cVar1 = '\x03';
        }
      }
    }
  }
LAB_ram_40030c16:
  FUN_ram_400056b4(iVar2);
  return cVar1;
}


/* NanoCore 1.11, address 0x40030c2c.
 * REA evidence: ev_4b24edea695279d892b1c1570d19bf5ee8cf248868f786a1363a67588dce2118
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030c2c(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_120 [256];
  
  uVar4 = 0;
  uVar2 = 0;
  while( true ) {
    uVar1 = 0x1000 - uVar2;
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    uVar3 = FUN_ram_4002fe3c(param_1 + uVar2,auStack_120,uVar1);
    if (uVar3 != uVar1) break;
    uVar4 = FUN_ram_40007554(uVar4,auStack_120,uVar1);
    uVar2 = uVar2 + uVar1;
    if (0xfff < uVar2) {
      *param_2 = uVar4;
      return 0;
    }
  }
  return 0xfffffffc;
}


/* NanoCore 1.11, address 0x40030cb8.
 * REA evidence: ev_daebde475f363cfa0c5d9f0b4dcd2eb19c384bd8719f955c58571d22b118979a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030cb8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4002fdb0();
  if (iVar1 != 0) {
    if (((param_1 + 0x1000U <= *(uint *)(iVar1 + 0x38)) &&
        (iVar2 = FUN_ram_40006dbe(iVar1 + 0x1c), iVar2 != 0)) &&
       (*(code **)(iVar2 + 0x30) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40030cee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(iVar2 + 0x30))(*(int *)(iVar1 + 0x34) + param_1,0x1000);
      return uVar3;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40030cfc.
 * REA evidence: ev_c0446fdc352be372a337d64b4a6a1f35d8592b0e0438ec0b0b04b4749279c5d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030cfc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_400304be();
  uVar1 = 0xfffffffa;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_40005656(0x1000);
    uVar1 = 0xfffffffb;
    if (iVar2 != 0) {
      memset(iVar2,0xff,0x1000);
      FUN_ram_4000304c(iVar2,param_1,0x614);
      iVar3 = FUN_ram_40030cb8(0);
      if (((iVar3 < 0) || (iVar3 = FUN_ram_4002fe8c(0,iVar2,0x1000), iVar3 != 0x1000)) ||
         (iVar3 = FUN_ram_40030aca(0,iVar2), uVar1 = 0, iVar3 != 0)) {
        uVar1 = 0xfffffff8;
      }
      FUN_ram_400056b4(iVar2);
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40030d6e.
 * REA evidence: ev_2fafd0796261f0f98fbb4790dff7ecb216770ade92291be25dfbb7bf9a07ae0c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030d6e(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_ram_4002fcbc();
    uVar2 = 0xfffffffa;
    if ((iVar1 != 0) &&
       (((iVar1 = FUN_ram_40030cb8(param_1), iVar1 < 0 ||
         (iVar1 = FUN_ram_4002fe8c(param_1,param_2,0x1000), iVar1 != 0x1000)) ||
        (iVar1 = FUN_ram_40030aca(param_1,param_2), uVar2 = 0, iVar1 != 0)))) {
      uVar2 = 0xfffffff8;
    }
    return uVar2;
  }
  return 0xfffffffa;
}


/* NanoCore 1.11, address 0x40030dba.
 * REA evidence: ev_4eb9864d76876fb74161e6340ed6c6e0282b0566c56fb75bd3cbecfed4dba1b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40030dba(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_120 [260];
  
  uVar2 = 0;
  while( true ) {
    if (param_2 <= uVar2) {
      return 1;
    }
    uVar1 = param_2 - uVar2;
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    uVar3 = FUN_ram_4002fe3c(uVar2 + param_1,local_120,uVar1);
    if (uVar3 != uVar1) break;
    uVar3 = 0;
    do {
      if (local_120[uVar3] != -1) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
    uVar2 = uVar2 + uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40030e44.
 * REA evidence: ev_ff300fdf8356e8a1736aa2a6aff09889577af397d11c913258043183e6ee89bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40030e44(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_634;
  undefined2 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  
  iVar4 = FUN_ram_4002fe0a();
  if (iVar4 == 0) {
    iVar4 = 0x1000;
    bVar1 = false;
    do {
      iVar5 = FUN_ram_40030cb8(iVar4);
      if (iVar5 < 0) {
        iVar4 = -4;
        if (!bVar1) goto LAB_ram_40030fbc;
        goto LAB_ram_40031026;
      }
      iVar5 = FUN_ram_40030dba(iVar4,0x1000);
      if (iVar5 != 1) goto LAB_ram_40031026;
      iVar4 = iVar4 + 0x1000;
      bVar1 = true;
    } while (iVar4 != 0x18000);
    iVar4 = FUN_ram_40030cb8(0xaa000);
    if ((((iVar4 < 0) || (iVar4 = FUN_ram_40030dba(0xaa000,0x1000), iVar4 != 1)) ||
        (iVar4 = FUN_ram_40030cb8(0xab000), iVar4 < 0)) ||
       (iVar4 = FUN_ram_40030dba(0xab000,0x1000), iVar4 != 1)) {
LAB_ram_40031026:
      iVar4 = -4;
    }
    else {
      memset(&uStack_634,0,0x614);
      uStack_634 = 0x50525354;
      uStack_624 = 0x50543232;
      uStack_630 = 1;
      uStack_62c = 1;
      uStack_628 = FUN_ram_4003048c(&uStack_634);
      iVar4 = FUN_ram_40030cfc(&uStack_634);
      if (iVar4 == 0) {
        FUN_ram_4000304c(0x3007c568,&uStack_634,0x614);
        _DAT_ram_3007cb7c = 0;
        _DAT_ram_3007cb80 = 0;
        _DAT_ram_3007c530 = uStack_62c;
        _DAT_ram_3007c52c = uStack_628;
        _DAT_ram_3007c524 = uStack_62c;
        DAT_ram_3007c519 = 1;
        DAT_ram_3007c51b = 0;
        DAT_ram_3007c51a = 0;
        _DAT_ram_3007c520 = 0;
        _DAT_ram_3007c51c = 1;
        _DAT_ram_3007c564 = 1;
      }
    }
    cVar2 = '\0';
    do {
      cVar3 = cVar2 + '\x01';
      FUN_ram_4002e79a(cVar2);
      cVar2 = cVar3;
    } while (cVar3 != '@');
    if (iVar4 != 0) {
LAB_ram_40030fbc:
      memset(0x3007c568,0,0x614);
      _DAT_ram_3007c564 = 5;
      if (iVar4 + 8U < 9) {
        _DAT_ram_3007c564 = (uint)*(byte *)(iVar4 + 0x400972d0);
      }
      _DAT_ram_3007cb7c = 0;
      _DAT_ram_3007cb80 = 0;
      _DAT_ram_3007c530 = 0;
      _DAT_ram_3007c52c = 0;
      _DAT_ram_3007c524 = 0;
      DAT_ram_3007c519 = 0;
    }
  }
  else {
    _DAT_ram_3007c564 = 5;
    if (iVar4 + 8U < 9) {
      _DAT_ram_3007c564 = (uint)*(byte *)(iVar4 + 0x400972d0);
    }
  }
  return iVar4;
}


