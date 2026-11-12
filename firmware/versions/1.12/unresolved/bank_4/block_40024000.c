/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40024000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002405e.
 * REA evidence: ev_39bd824f95ec8bbdb2bb8e417419981e52ef45627072746b04b3b40d069627e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002405e(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar2 = 1;
    if (param_1 != -2) {
      uVar2 = 3;
    }
    *param_2 = uVar2;
    uVar1 = 1;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40024072.
 * REA evidence: ev_20ea61e7a149378cf04a455969c9552e725d60a40ab24ab4a38e2c2549c71c65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024072(undefined4 *param_1)

{
  if ((code *)param_1[0xd] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40024078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[0xd])(*param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002407c.
 * REA evidence: ev_bf5c2d78c2355061970dfd046a0c5ee48abaa012956af2b88ef29027cef45c70
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400240be) */
/* WARNING: Removing unreachable block (ram,0x400240c4) */
/* WARNING: Removing unreachable block (ram,0x400240e6) */
/* WARNING: Removing unreachable block (ram,0x400240ce) */
/* WARNING: Removing unreachable block (ram,0x400240dc) */
/* WARNING: Removing unreachable block (ram,0x400240e0) */

undefined4 FUN_ram_4002407c(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x400240ec.
 * REA evidence: ev_64cb3bb94b3d8cfaa8330034e635428f25ef81158a471829b25827cf60a1017f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002423c) */
/* WARNING: Removing unreachable block (ram,0x40024242) */
/* WARNING: Removing unreachable block (ram,0x40024250) */
/* WARNING: Removing unreachable block (ram,0x4002425e) */
/* WARNING: Removing unreachable block (ram,0x40024292) */
/* WARNING: Removing unreachable block (ram,0x40024296) */

undefined4
FUN_ram_400240ec(undefined4 *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
                undefined4 *param_6,int *param_7,undefined1 *param_8)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint *puVar11;
  code *pcVar12;
  byte bStack_75;
  uint local_74 [4];
  undefined1 uStack_64;
  uint local_60 [4];
  undefined1 uStack_50;
  
  if (param_8 == (undefined1 *)0x0) {
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
     || (0x10 < *(byte *)((int)param_1 + 7))) {
    *param_8 = 1;
    return 1;
  }
  cVar6 = *param_2;
  *param_4 = cVar6;
  switch(cVar6) {
  case '\0':
    if (param_3 == 1) {
      param_4[1] = '\x04';
      uVar2 = *(undefined2 *)(param_1 + 2);
      param_4[2] = (char)uVar2;
      param_4[3] = (char)((ushort)uVar2 >> 8);
      param_4[4] = *(char *)(param_1 + 1);
      *param_8 = 0;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = param_4;
      }
      if (param_7 == (int *)0x0) {
        return 1;
      }
      *param_7 = 5;
      return 1;
    }
    uVar9 = 1;
    goto LAB_ram_40024132;
  case '\x01':
    local_60[0] = 0;
    if (((param_3 != 7) || (param_5 < 7)) ||
       (iVar4 = FUN_ram_4002407c(param_2 + 3,local_74), iVar4 == 0)) goto LAB_ram_400241d4;
    if ((code *)param_1[3] != (code *)0x0) {
      if (((byte)param_2[1] < *(byte *)(param_1 + 1)) && ((byte)param_2[2] < 0xc)) {
        uVar3 = (*(code *)param_1[3])
                          (CONCAT44(local_74[1],local_74[0]),*param_1,param_2[1],param_2[2],local_60
                          );
        iVar4 = FUN_ram_4002405e(uVar3,param_8);
        if (iVar4 != 0) {
          return 1;
        }
      }
LAB_ram_400241fe:
      uVar9 = 3;
      goto LAB_ram_400241d6;
    }
    break;
  case '\x02':
    local_74[0] = local_74[0] & 0xffffff00;
    if (param_3 == 3) {
      uVar10 = 0;
    }
    else if (((param_3 < 4) || (uVar10 = (uint)(byte)param_2[3], (uVar10 + 1) * 4 != param_3)) ||
            (0xc < uVar10)) goto LAB_ram_400241d4;
    if (param_1[4] != 0) {
      bVar5 = param_2[1];
      if (*(byte *)(param_1 + 1) <= bVar5) goto LAB_ram_400241fe;
      puVar11 = local_60;
      cVar6 = param_2[2];
      uVar8 = 0;
      do {
        param_2 = param_2 + 4;
        if (uVar10 == uVar8) {
          uVar3 = (*(code *)param_1[4])(*param_1,bVar5);
          iVar4 = FUN_ram_4002405e(uVar3,param_8);
          if (iVar4 != 0) {
            return 1;
          }
          param_4[1] = bVar5;
          uVar3 = 2;
          param_4[2] = (char)local_74[0];
          goto LAB_ram_40024310;
        }
        iVar4 = FUN_ram_4002407c(param_2,puVar11,cVar6,local_60);
        uVar8 = uVar8 + 1 & 0xff;
        puVar11 = puVar11 + 1;
      } while (iVar4 != 0);
      goto LAB_ram_400241d4;
    }
    break;
  case '\x03':
    local_60[0] = local_60[0] & 0xffffff00;
    if (param_3 != 3) goto LAB_ram_400241d4;
    if ((code *)param_1[5] != (code *)0x0) {
      bVar5 = param_2[1];
      if (*(byte *)(param_1 + 1) <= bVar5) {
        *param_8 = 3;
        return 1;
      }
      uVar3 = (*(code *)param_1[5])(*param_1,bVar5,param_2[2] != '\0',local_60);
      iVar4 = FUN_ram_4002405e(uVar3,param_8);
      if (iVar4 != 0) {
        return 1;
      }
      param_4[1] = bVar5;
      uVar3 = 3;
      param_4[2] = (char)local_60[0];
LAB_ram_40024310:
      FUN_ram_40024072(param_1,uVar3);
      *param_8 = 0;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = param_4;
      }
      iVar4 = 3;
joined_r0x40024498:
      if (param_7 == (int *)0x0) {
        return 1;
      }
      goto LAB_ram_40024328;
    }
    break;
  case '\x04':
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    if (param_3 != 2) goto LAB_ram_400241d4;
    if ((code *)param_1[6] != (code *)0x0) {
      bVar5 = param_2[1];
      if (100 < bVar5) {
        bVar5 = 100;
      }
      uVar3 = (*(code *)param_1[6])(*param_1,bVar5,local_60);
      iVar4 = FUN_ram_4002405e(uVar3,param_8);
      if (iVar4 != 0) {
        return 1;
      }
      if ((local_60[0] & 0xff) < 0x65) {
        param_4[1] = (char)local_60[0];
        cVar6 = '\x04';
LAB_ram_400243de:
        FUN_ram_40024072(param_1,cVar6);
LAB_ram_400243e4:
        *param_8 = 0;
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = param_4;
        }
        if (param_7 == (int *)0x0) {
          return 1;
        }
        iVar4 = 2;
LAB_ram_40024328:
        *param_7 = iVar4;
        return 1;
      }
      goto LAB_ram_400241fe;
    }
    break;
  case '\x05':
    bStack_75 = 0;
    if (param_3 != 1) {
      uVar10 = (uint)*(byte *)((int)param_1 + 5);
      uVar8 = (uint)(byte)param_2[1];
      if (uVar10 == 0) {
        uVar10 = (uint)*(byte *)(param_1 + 1);
      }
      if (((uVar8 == uVar10) && (uVar8 + 2 == param_3)) && (param_3 <= param_5)) {
        if ((code *)param_1[7] != (code *)0x0) {
          uVar3 = (*(code *)param_1[7])(*param_1,param_2 + 2,uVar8,local_74,&bStack_75);
          iVar4 = FUN_ram_4002405e(uVar3,param_8);
          if (iVar4 != 0) {
            return 1;
          }
          if (bStack_75 == uVar8) {
            local_60[0] = 0;
            local_60[1] = 0;
            local_60[2] = 0;
            local_60[3] = 0;
            bVar5 = *(byte *)(param_1 + 1);
            uVar10 = 0;
            if ((uVar8 - 1 & 0xff) < 0x10) {
              while ((uVar10 & 0xff) < (uint)bStack_75) {
                uVar8 = (uint)*(byte *)((int)local_74 + uVar10);
                if ((bVar5 <= uVar8) ||
                   (uVar10 = uVar10 + 1, *(char *)((int)local_60 + uVar8) != '\0'))
                goto LAB_ram_400241fe;
                *(undefined1 *)((int)local_60 + uVar8) = 1;
              }
              param_4[1] = bStack_75;
              FUN_ram_4000303c(param_4 + 2,local_74);
              FUN_ram_40024072(param_1,5);
              *param_8 = 0;
              if (param_6 != (undefined4 *)0x0) {
                *param_6 = param_4;
              }
              iVar4 = bStack_75 + 2;
              goto joined_r0x40024498;
            }
          }
          goto LAB_ram_400241fe;
        }
        break;
      }
    }
    goto LAB_ram_400241d4;
  case '\x06':
  case '\a':
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    if (param_3 != 2) goto LAB_ram_400241d4;
    if (cVar6 == '\x06') {
      pcVar12 = (code *)param_1[8];
    }
    else {
      pcVar12 = (code *)param_1[9];
    }
    if (pcVar12 != (code *)0x0) {
      cVar1 = param_2[1];
      uVar3 = (*pcVar12)(*param_1,cVar1,local_60);
      iVar4 = FUN_ram_4002405e(uVar3,param_8);
      if (iVar4 != 0) {
        return 1;
      }
      if ((char)local_60[0] == cVar1) {
        param_4[1] = (char)local_60[0];
        goto LAB_ram_400243de;
      }
      goto LAB_ram_400241fe;
    }
    break;
  case '\b':
    if (((param_3 != 1) && (uVar10 = (uint)*(byte *)((int)param_1 + 7), uVar10 != 0)) &&
       (uVar10 + 2 <= param_5)) {
      pcVar12 = (code *)param_1[10];
      if (pcVar12 == (code *)0x0) break;
      uVar8 = (uint)(byte)param_2[1];
      if ((uVar8 <= uVar10) && (uVar8 + 2 == param_3)) {
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
        if (uVar8 != 0) {
          FUN_ram_4000303c(local_74,param_2 + 2);
        }
        uVar3 = (*pcVar12)(*param_1,local_74,local_60,0x11);
        iVar4 = FUN_ram_4002405e(uVar3,param_8);
        if (iVar4 != 0) {
          return 1;
        }
        uVar10 = 0;
        do {
          uVar8 = uVar10;
          if ((uint)*(byte *)((int)param_1 + 7) <= (uVar8 & 0xff)) break;
          uVar10 = uVar8 + 1;
        } while (*(char *)((int)local_60 + uVar8) != '\0');
        param_4[1] = (char)uVar8;
        if ((uVar8 & 0xff) != 0) {
          FUN_ram_4000303c(param_4 + 2,local_60,uVar8);
        }
        FUN_ram_40024072(param_1,8);
        *param_8 = 0;
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = param_4;
        }
        if (param_7 == (int *)0x0) {
          return 1;
        }
        *param_7 = uVar8 + 2;
        return 1;
      }
    }
LAB_ram_400241d4:
    uVar9 = 1;
    goto LAB_ram_400241d6;
  case '\t':
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    if ((param_3 != 2) || (*(byte *)((int)param_1 + 6) == 0)) goto LAB_ram_400241d4;
    if ((code *)param_1[0xb] != (code *)0x0) {
      if ((byte)param_2[1] < *(byte *)((int)param_1 + 6)) {
        uVar3 = (*(code *)param_1[0xb])(*param_1,param_2[1],local_60);
        iVar4 = FUN_ram_4002405e(uVar3,param_8);
        if (iVar4 != 0) {
          return 1;
        }
        if ((local_60[0] & 0xff) < (uint)*(byte *)((int)param_1 + 6)) {
          param_4[1] = (char)local_60[0];
          cVar6 = '\t';
          goto LAB_ram_400243de;
        }
      }
      goto LAB_ram_400241fe;
    }
    break;
  case '\n':
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    uVar9 = 1;
    if (1 < param_3 - 1) goto LAB_ram_400241d6;
    if ((param_3 == 2) && (1 < (byte)param_2[1])) goto LAB_ram_400241fe;
    if ((code *)param_1[0xc] != (code *)0x0) {
      bVar7 = false;
      if (param_3 == 2) {
        bVar7 = param_2[1] != '\0';
      }
      uVar3 = (*(code *)param_1[0xc])(*param_1,param_3 == 2,bVar7,local_60);
      iVar4 = FUN_ram_4002405e(uVar3,param_8);
      if (iVar4 != 0) {
        return 1;
      }
      param_4[1] = (char)local_60[0];
      if (param_3 == 2) {
        cVar6 = '\n';
        goto LAB_ram_400243de;
      }
      goto LAB_ram_400243e4;
    }
    break;
  default:
    uVar9 = 0x7e;
LAB_ram_40024132:
    *param_8 = uVar9;
    return 1;
  }
  uVar9 = 0x7e;
LAB_ram_400241d6:
  *param_8 = uVar9;
  return 1;
}


/* NanoCore 1.12, address 0x40024660.
 * REA evidence: ev_d9562ff566c9445fb45428ba7e7c751593febc0c4fbbe4b6a6277efdf42f9e20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024660(void)

{
  DAT_ram_3004ad80 = 0xff;
  _DAT_ram_3006bad0 = 0;
  return;
}


/* NanoCore 1.12, address 0x40024674.
 * REA evidence: ev_aa02d21b813ce5c74461c94459a6346e099f3f8cfbfd2188ddb0c2dbc28a5412
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024674(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    DAT_ram_3004ad80 = (undefined1)param_1;
    iVar1 = FUN_ram_40004346();
    iVar2 = FUN_ram_400043ae(5000);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    _DAT_ram_3006bad0 = iVar2 + iVar1;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400246b0.
 * REA evidence: ev_77a3af2c85c7dc29558c01138b91e442017fa5b9a27540b962888824d02c38ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_400246b0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3006bad0;
  if ((DAT_ram_3004ad80 == -1) ||
     (iVar3 = FUN_ram_40004346(), cVar2 = DAT_ram_3004ad80, iVar1 - iVar3 < 1)) {
    cVar2 = -1;
  }
  return cVar2;
}


/* NanoCore 1.12, address 0x400246f2.
 * REA evidence: ev_6945156c04ed38765ca54bf3dd3078c7887e462b79596721d564b31b8c2bac86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400246f2(void)

{
  return 5000;
}


/* NanoCore 1.12, address 0x400246fa.
 * REA evidence: ev_cf52857a6b66dcf311a30e9426fa45820166d0dde0b3d3d3d9ea989f7ce14f03
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400246fa(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_ram_400246b0();
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


/* NanoCore 1.12, address 0x4002474a.
 * REA evidence: ev_3fba4a49bdceeb27ff39f4e609c21f8fcd24dae09aa835231a75fb2b7f294ac6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002474a(void)

{
  _DAT_ram_3006be34 = 0;
  _DAT_ram_3006be38 = 0;
  DAT_ram_3006be3c = 0;
  return;
}


/* NanoCore 1.12, address 0x40024760.
 * REA evidence: ev_dd0ee31519c7c1607817ac4826dc0b3564f21184c70536e086a140622f50b4c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400247f8) */
/* WARNING: Removing unreachable block (ram,0x40024778) */
/* WARNING: Removing unreachable block (ram,0x400247a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_ram_40024760(uint param_1)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  
  fVar4 = DAT_ram_40096728;
  uVar8 = ((_DAT_ram_3006be36 + 0xc0) - param_1) % 0xc0;
  iVar7 = 1 - param_1;
  lVar3 = 0;
  for (uVar5 = 0; (uVar5 & 0xffff) < param_1; uVar5 = uVar5 + 1) {
    uVar6 = *(int *)(((uVar8 + uVar5) % 0xc0) * 4 + 0x3006bb34) - *(int *)(uVar8 * 4 + 0x3006bb34);
    lVar1 = (longlong)iVar7;
    iVar9 = uVar6 * iVar7;
    iVar7 = iVar7 + 2;
    lVar3 = lVar3 + CONCAT44((int)(lVar1 * (ulonglong)uVar6 >> 0x20),iVar9);
  }
  if (0 < lVar3) {
    fVar2 = (float)param_1;
    fVar10 = (float)FUN_ram_4000374c();
    return DAT_ram_4009a63c /
           (((fVar10 * DAT_ram_40099f60) / (fVar2 * (fVar2 * fVar2 + fVar4))) * DAT_ram_4009a328);
  }
  return 0.0;
}


/* NanoCore 1.12, address 0x4002481e.
 * REA evidence: ev_3765414559d0a62c9bec28700a7200997baaad65ecf760e3ab717e007969b07d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002481e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar5 = _DAT_ram_3006baf8;
  uVar4 = _DAT_ram_3006baf2;
  uVar3 = _DAT_ram_3006baf0;
  if (param_1 != (undefined4 *)0x0) {
    uVar10 = (uint)_DAT_ram_3006baf2;
    uVar11 = 4;
    if (uVar10 != 0) {
      uVar11 = uVar10;
    }
    uVar9 = 4;
    if (_DAT_ram_3006baf0 != 0) {
      uVar9 = (uint)_DAT_ram_3006baf0;
    }
    uVar8 = 0x3c0;
    if (uVar11 < 0xf01) {
      if (uVar11 == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = 0xf00 / uVar11;
      }
    }
    uVar11 = 0x3c0;
    if ((uVar10 - 1 & 0xffff) < 0xf00) {
      if (uVar10 == 0) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = 0xf00 / uVar10;
      }
    }
    *param_1 = _DAT_ram_3006baf4;
    uVar6 = _DAT_ram_3006bb14;
    uVar7 = _DAT_ram_3006bb10;
    *(ushort *)((int)param_1 + 0x26) = uVar4;
    param_1[3] = uVar6;
    uVar1 = DAT_ram_3006bae9;
    param_1[2] = uVar7;
    uVar2 = _DAT_ram_3006baec;
    *(undefined1 *)(param_1 + 6) = uVar1;
    uVar1 = DAT_ram_3006baea;
    *(undefined2 *)((int)param_1 + 0x1a) = uVar2;
    *(undefined1 *)((int)param_1 + 0x19) = uVar1;
    uVar1 = DAT_ram_3006baee;
    param_1[4] = param_2;
    param_1[5] = param_3;
    *(undefined1 *)(param_1 + 7) = uVar1;
    uVar6 = _DAT_ram_3006bb1c;
    uVar7 = _DAT_ram_3006bb18;
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(ushort *)(param_1 + 9) = uVar3;
    param_1[10] = 0x3c0;
    param_1[0xc] = uVar7;
    param_1[0xd] = uVar6;
    param_1[0xe] = param_4;
    param_1[0xf] = param_5;
    uVar10 = FUN_ram_40003f9c(uVar7,uVar6,uVar9 * uVar8,0);
    if (uVar11 == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = uVar10 / uVar11;
    }
    param_1[0x10] = uVar10;
    uVar7 = FUN_ram_40003bf8(uVar7,uVar6,uVar9 * uVar8,0);
    param_1[0x12] = uVar7;
    param_1[0x11] = uVar11;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002491e.
 * REA evidence: ev_b332f5d4249eb58e2a75f4682d1624ea652cbb1585e777acf94d79386493a2a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002491e(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (_DAT_ram_3006bb1c < 0x28) {
    uVar1 = FUN_ram_40003bf8(_DAT_ram_3006bb18,_DAT_ram_3006bb1c,0x28,0);
  }
  _DAT_ram_3006bb2c = uVar1;
  return;
}


/* NanoCore 1.12, address 0x40024950.
 * REA evidence: ev_bcace2ca1826461e0dff1d3a02e98e96c0564538ad7b62c2e41dc9458167bafe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024950(void)

{
  _DAT_ram_3006bb10 = _DAT_ram_3006bb0c;
  _DAT_ram_3006bb20 = _DAT_ram_3006bb18;
  _DAT_ram_3006bb24 = _DAT_ram_3006bb1c;
  _DAT_ram_3006bb0c = _DAT_ram_3006bb08;
  return;
}


/* NanoCore 1.12, address 0x40024966.
 * REA evidence: ev_dabc6fec0c6619b5a8593a42213bd5b5bd2591643f82ac8eeca12a5ddd34c4a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024966(void)

{
  DAT_ram_3006c340 = 0;
  _DAT_ram_3006c344 = 0;
  _DAT_ram_3006c348 = 0;
  return;
}


/* NanoCore 1.12, address 0x4002497c.
 * REA evidence: ev_b6c9b13530ddb08c9cf5221ba1938516f635e64720157cb0356c07acd26eb812
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002497c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < _DAT_ram_3006c33e; uVar1 = uVar1 + 1 & 0xffff) {
    if (((&DAT_ram_3006be3e)[uVar1 * 5] == '\0') || ((&DAT_ram_3006be3d)[uVar1 * 5] == -4)) {
      if (uVar1 != uVar2) {
        FUN_ram_4000303c(&DAT_ram_3006be3d + uVar2 * 5,&DAT_ram_3006be3d + uVar1 * 5,5);
      }
      uVar2 = uVar2 + 1 & 0xffff;
    }
  }
  _DAT_ram_3006c33e = (short)uVar2;
  return;
}


/* NanoCore 1.12, address 0x40024a04.
 * REA evidence: ev_a0433ff098d5916dbbe8ab61694fbf5a120dd7470c6de83472788bc0f489d4d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024a04(char param_1)

{
  if (DAT_ram_3006baed != param_1) {
    FUN_ram_4002474a();
    if ((DAT_ram_3006baed == '\0') && (DAT_ram_3006bae9 != '\0')) {
      FUN_ram_4002491e();
    }
    else {
      _DAT_ram_3006bb2c = 0;
    }
  }
  DAT_ram_3006baed = param_1;
  DAT_ram_3006baea = 1;
  return;
}


/* NanoCore 1.12, address 0x40024a52.
 * REA evidence: ev_0c04e87409dfe96bff7fb7ffcbb517174fb952ab1d830064b60e477abf9c4854
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40024a52(undefined8 param_1,uint param_2,uint param_3)

{
  if (((_DAT_ram_3006bad8 != param_2) || (_DAT_ram_3006badc != param_3)) ||
     ((float)_DAT_ram_3006bad4 != (float)param_1)) {
    _DAT_ram_3006bae0 =
         (ulonglong)
         (uint)(((float)param_2 * (float)param_1 * DAT_ram_4009a640) /
               ((float)param_3 * DAT_ram_4009a564));
    _DAT_ram_3006bad4 = param_1;
    _DAT_ram_3006badc = param_3;
  }
  return _DAT_ram_3006bae0;
}


/* NanoCore 1.12, address 0x40024ac0.
 * REA evidence: ev_c6d81c0905a3d3939166323c939c2a4124e9f9ae24fe56373904df9b469aac0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40024ac0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)_DAT_ram_3006c33e;
  if (0xff < uVar3) {
    if (param_1 == 0xf8) {
      return 0;
    }
    uVar2 = uVar3 - 1 & 0xffff;
    do {
      uVar1 = uVar2 + 1 & 0xffff;
      if ((&DAT_ram_3006be3d)[uVar2 * 5] == -8) {
        if (uVar1 < uVar3) {
          FUN_ram_400030f0(&DAT_ram_3006be3d + uVar2 * 5,&DAT_ram_3006be3d + uVar1 * 5,
                           (uVar3 - uVar2) * 5 + -5);
        }
        _DAT_ram_3006c33e = _DAT_ram_3006c33e - 1;
        return 1;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffff);
    FUN_ram_400030f0(&DAT_ram_3006be3d,0x3006be42,0x4fb);
    _DAT_ram_3006c33e = 0xff;
  }
  return 1;
}


/* NanoCore 1.12, address 0x40024b74.
 * REA evidence: ev_3afb4e843e587d7dcc9a1c885ed0a9f03e645519ad6be609abe3e2d726b51d80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40024b74(void)

{
  bool bVar1;
  
  bVar1 = false;
  if (DAT_ram_3006baee != '\0') {
    bVar1 = true;
    if ((DAT_ram_3006baec != '\0') && (bVar1 = false, DAT_ram_3006baec == '\x01')) {
      bVar1 = DAT_ram_3006baea == '\0';
    }
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x40024b9c.
 * REA evidence: ev_6af6e1a7fe3fbd7362f136d86cfc298851378e8e623a647a9367bb6b44d561a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024b9c(void)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_ram_3006baee == '\0') {
    _DAT_ram_3006c33e = 0;
  }
  else if ((DAT_ram_3006baee == '\x02') && (DAT_ram_3006bae9 == '\0')) {
    uVar1 = 0;
    for (uVar2 = 0; uVar2 < _DAT_ram_3006c33e; uVar2 = uVar2 + 1 & 0xffff) {
      if ((&DAT_ram_3006be3d)[uVar2 * 5] != -8) {
        if (uVar2 != uVar1) {
          FUN_ram_4000303c(&DAT_ram_3006be3d + uVar1 * 5,&DAT_ram_3006be3d + uVar2 * 5,5);
        }
        uVar1 = uVar1 + 1 & 0xffff;
      }
    }
    _DAT_ram_3006c33e = (ushort)uVar1;
  }
  return;
}


/* NanoCore 1.12, address 0x40024c34.
 * REA evidence: ev_94c590c8b0b3e53dd6eda80b17ea95c59e5e8a6df182a83d7a13c459abaa347e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024c34(int param_1)

{
  int iVar1;
  
  if ((DAT_ram_3006baea == '\0') || (DAT_ram_3006bb30 == '\0')) {
    return;
  }
  iVar1 = FUN_ram_400043ae(500);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  if (param_1 - _DAT_ram_3006bb28 <= iVar1) {
    return;
  }
  DAT_ram_3006baea = 0;
  DAT_ram_3006baed = 0;
  DAT_ram_3006bb30 = 0;
  FUN_ram_4002474a();
  if (DAT_ram_3006bb04 == '\0') {
    if (DAT_ram_3006baec != '\x01') goto LAB_ram_40024ca8;
  }
  else {
    if (DAT_ram_3006baec != '\x01') goto LAB_ram_40024ca8;
    _DAT_ram_3006baf8 = CONCAT44(_DAT_ram_3006bb04,_DAT_ram_3006bb00);
  }
  if (DAT_ram_3006bae9 != '\0') {
    FUN_ram_40024950();
  }
LAB_ram_40024ca8:
  FUN_ram_4002497c();
  return;
}


/* NanoCore 1.12, address 0x40024cbe.
 * REA evidence: ev_957dbbffb5c0229441e93673d1a35b4e6c660fcdb28a2d76243c461a10b5e930
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40024cbe(uint param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    return false;
  }
  FUN_ram_40024c34(param_2);
  if (DAT_ram_3006baec == 3) {
    iVar1 = param_1 - 2;
LAB_ram_40024d1a:
    bVar2 = iVar1 == 0;
  }
  else {
    if (DAT_ram_3006baec < 4) {
      if (DAT_ram_3006baec == 0) {
        return false;
      }
      if (DAT_ram_3006baec == 2) {
        iVar1 = param_1 - 1;
        goto LAB_ram_40024d1a;
      }
    }
    else if (DAT_ram_3006baec == 4) {
      iVar1 = param_1 - 3;
      goto LAB_ram_40024d1a;
    }
    bVar2 = true;
    if ((DAT_ram_3006baea != '\0') && ((uint)DAT_ram_3006baed != (param_1 & 0xff))) {
      bVar2 = false;
    }
  }
  return bVar2;
}


/* NanoCore 1.12, address 0x40024cc4.
 * REA evidence: ev_955ab6767745c87229aa61b8d684b5353a115e8f5b6a373ec9578fd61010036b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40024cc4(uint param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  FUN_ram_40024c34(param_2);
  if (DAT_ram_3006baec == 3) {
    iVar1 = param_1 - 2;
LAB_ram_40024d1a:
    bVar2 = iVar1 == 0;
  }
  else {
    if (DAT_ram_3006baec < 4) {
      if (DAT_ram_3006baec == 0) {
        return false;
      }
      if (DAT_ram_3006baec == 2) {
        iVar1 = param_1 - 1;
        goto LAB_ram_40024d1a;
      }
    }
    else if (DAT_ram_3006baec == 4) {
      iVar1 = param_1 - 3;
      goto LAB_ram_40024d1a;
    }
    bVar2 = true;
    if ((DAT_ram_3006baea != '\0') && ((uint)DAT_ram_3006baed != (param_1 & 0xff))) {
      bVar2 = false;
    }
  }
  return bVar2;
}


/* NanoCore 1.12, address 0x40024d24.
 * REA evidence: ev_d4d18bb29fd1b39e93cb235de1edc66e32f4014f10d2ed1568cba001a5e309bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024d24(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if (param_1 != 0xf8) {
    if (2 < (param_1 + 6U & 0xff)) {
      return;
    }
  }
  iVar1 = FUN_ram_40024ac0();
  if (iVar1 != 0) {
    iVar1 = (uint)_DAT_ram_3006c33e * 5;
    _DAT_ram_3006c33e = _DAT_ram_3006c33e + 1;
    (&DAT_ram_3006be3d)[iVar1] = (char)param_1;
    (&DAT_ram_3006be3e)[iVar1] = param_2;
    *(undefined1 *)(iVar1 + 0x3006be3f) = 1;
    *(undefined1 *)(iVar1 + 0x3006be40) = 0;
    *(undefined1 *)(iVar1 + 0x3006be41) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40024d8e.
 * REA evidence: ev_a595baafa4e543477ced8dbe3098df2dd3ee798d2264e538369162d723a4b297
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024d8e(char param_1)

{
  if (DAT_ram_3006baee == '\0') {
    return;
  }
  if (((DAT_ram_3006baee != '\x01') && (2 < (byte)(param_1 + 6U))) && (DAT_ram_3006bae9 == '\0')) {
    return;
  }
  FUN_ram_40024d24();
  return;
}


/* NanoCore 1.12, address 0x40024dbc.
 * REA evidence: ev_fd14db36eec7426ccb190f4284e823a3d1ae6219be0b08366db2f3ab27bb1749
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024dbc(uint param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_40024ac0(0xf2);
  if (iVar1 != 0) {
    if ((param_2 != 0) || (0x3fff < param_1)) {
      param_1 = 0x3fff;
    }
    iVar1 = (uint)_DAT_ram_3006c33e * 5;
    _DAT_ram_3006c33e = _DAT_ram_3006c33e + 1;
    (&DAT_ram_3006be3e)[iVar1] = param_3;
    *(undefined1 *)(iVar1 + 0x3006be3f) = 3;
    (&DAT_ram_3006be3d)[iVar1] = 0xf2;
    *(byte *)(iVar1 + 0x3006be40) = (byte)param_1 & 0x7f;
    *(char *)(iVar1 + 0x3006be41) = (char)(param_1 >> 7);
  }
  return;
}


/* NanoCore 1.12, address 0x40024e30.
 * REA evidence: ev_d739abdbcabb2000e47326fafc99f15c4e9e1fe5f2238b09366218d131541979
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024e30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  if (DAT_ram_3006bae8 == '\0') {
    _DAT_ram_3006bae8 = 0x1000001;
    _DAT_ram_3006baec = 0x3020001;
    _DAT_ram_3006baf0 = 0x40004;
    if (param_1 == 0) {
      param_1 = 0xac44;
    }
    _DAT_ram_3006baf8 = DAT_ram_4009a378;
    _DAT_ram_3006bafc = DAT_ram_4009a378;
    _DAT_ram_3006bb00 = 0;
    _DAT_ram_3006bb08 = 0;
    _DAT_ram_3006bb0c = 0;
    _DAT_ram_3006bb10 = 0;
    _DAT_ram_3006bb14 = 0;
    _DAT_ram_3006bb18 = 0;
    _DAT_ram_3006bb1c = 0;
    _DAT_ram_3006bb20 = 0;
    _DAT_ram_3006bb24 = 0;
    _DAT_ram_3006bb28 = 0;
    _DAT_ram_3006bb2c = 0;
    DAT_ram_3006bb30 = 0;
    _DAT_ram_3006c33e = 0;
    _DAT_ram_3006baf4 = param_1;
    FUN_ram_40024966();
  }
  else if (param_1 != 0) {
    _DAT_ram_3006baf4 = param_1;
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.12, address 0x40024ec8.
 * REA evidence: ev_c37887a76f9a4f2f17df12954152d70b9624d7929708e2f19d919167331a7f24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024ec8(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40024e30();
    FUN_ram_400002f4();
    _DAT_ram_3006baf4 = param_1;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40024eee.
 * REA evidence: ev_8446befb6681e17c5774b2914a893e8fa01e9de34193fcd531c53deb53dd3ae2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024eee(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_ram_40024e30(0);
  uVar1 = FUN_ram_40004346();
  uVar2 = FUN_ram_400002f4();
  FUN_ram_40024c34(uVar1);
  FUN_ram_4002481e(param_1,_DAT_ram_3006bb10,_DAT_ram_3006bb14,_DAT_ram_3006bb18,_DAT_ram_3006bb1c);
  FUN_ram_400002fa(uVar2);
  return;
}


/* NanoCore 1.12, address 0x40024f40.
 * REA evidence: ev_0ab08cec350778b430a350c9750abe6d073edde4323e7541ab70edbe36a3fa4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002507c) */
/* WARNING: Removing unreachable block (ram,0x400250a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024f40(uint param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if (param_1 == 0) {
    FUN_ram_40024eee(param_3);
    return;
  }
  FUN_ram_40024e30(param_2);
  uVar10 = FUN_ram_400002f4();
  if (param_2 != 0) {
    _DAT_ram_3006baf4 = param_2;
  }
  FUN_ram_40004346();
  FUN_ram_40024c34();
  uVar6 = _DAT_ram_3006bb1c;
  uVar5 = _DAT_ram_3006bb18;
  uVar4 = _DAT_ram_3006bb14;
  uVar3 = _DAT_ram_3006bb10;
  if (_DAT_ram_3006baf4 == 0) {
    _DAT_ram_3006baf4 = 0xac44;
  }
  _DAT_ram_3006bb10 = (ulonglong)param_1 + CONCAT44(_DAT_ram_3006bb14,_DAT_ram_3006bb10);
  _DAT_ram_3006bb18 = CONCAT44(_DAT_ram_3006bb1c,_DAT_ram_3006bb18);
  if ((DAT_ram_3006bae9 != '\0') &&
     ((DAT_ram_3006baec < 2 ||
      (_DAT_ram_3006bb18 = CONCAT44(_DAT_ram_3006bb1c,_DAT_ram_3006bb18), DAT_ram_3006baea != '\0'))
     )) {
    fVar13 = (float)FUN_ram_40024a52(_DAT_ram_3006baf8,param_1,_DAT_ram_3006baf4);
    fVar13 = fVar13 + _DAT_ram_3006bb08;
    uVar9 = (uint)(-1 < (int)fVar13) * (int)fVar13;
    _DAT_ram_3006bb08 = fVar13 - (float)uVar9;
    _DAT_ram_3006bb18 = CONCAT44(_DAT_ram_3006bb1c,_DAT_ram_3006bb18) + (ulonglong)uVar9;
    _DAT_ram_3006bb0c = 0.0;
  }
  iVar11 = FUN_ram_40024b74();
  lVar2 = _DAT_ram_3006bb10;
  if ((iVar11 != 0) &&
     ((DAT_ram_3006baee == '\x01' || ((DAT_ram_3006baee == '\x02' && (DAT_ram_3006bae9 != '\0'))))))
  {
    fVar13 = (float)FUN_ram_40024a52(_DAT_ram_3006baf8,param_1,_DAT_ram_3006baf4);
    uVar7 = _DAT_ram_3006bb20;
    uVar8 = _DAT_ram_3006bb24;
    fVar13 = fVar13 + _DAT_ram_3006bb0c;
    uVar9 = (uint)(-1 < (int)fVar13) * (int)fVar13;
    uVar15 = uVar9 + _DAT_ram_3006bb20;
    _DAT_ram_3006bb0c = fVar13 - (float)uVar9;
    _DAT_ram_3006bb10 = 0;
    lVar2 = (ulonglong)_DAT_ram_3006bb14 << 0x20;
    bVar1 = _DAT_ram_3006bb20 < uVar15;
    _DAT_ram_3006bb20 = uVar15;
    if (bVar1) {
      uVar14 = FUN_ram_40003bf8(uVar7,uVar8,0x28,0);
      uVar15 = FUN_ram_40003bf8((int)uVar15,(int)(uVar15 >> 0x20),0x28,0);
      lVar2 = CONCAT44(_DAT_ram_3006bb14,_DAT_ram_3006bb10);
      if (uVar14 < uVar15) {
        uVar9 = (uint)(uVar15 - uVar14);
        if (((int)(uVar15 - uVar14 >> 0x20) == 0) && (uVar9 < 0xf1)) {
          lVar2 = CONCAT44(_DAT_ram_3006bb14,_DAT_ram_3006bb10);
          if (uVar9 == 0) goto LAB_ram_40024ffe;
        }
        else {
          uVar9 = 0xf0;
        }
        uVar12 = FUN_ram_40024b74();
        lVar2 = CONCAT44(_DAT_ram_3006bb14,_DAT_ram_3006bb10);
        while (uVar12 != 0) {
          FUN_ram_40024d24(0xf8,0);
          lVar2 = CONCAT44(_DAT_ram_3006bb14,_DAT_ram_3006bb10);
          uVar9 = uVar9 - 1;
          uVar12 = uVar9;
        }
      }
    }
  }
LAB_ram_40024ffe:
  _DAT_ram_3006bb10 = lVar2;
  FUN_ram_4002481e(param_3,uVar3,uVar4,uVar5,uVar6);
  FUN_ram_400002fa(uVar10);
  return;
}


