/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40058000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40058012.
 * REA evidence: ev_b514354dfe3c823b5c8b8e8f288836fbfc00e2c5958d4ce1b25daa33810ad1c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40058012(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 *__dest;
  undefined4 uVar9;
  undefined4 uVar10;
  int iStack_28;
  int iStack_24;
  
  puVar1 = (undefined4 *)FUN_ram_400578d8();
  __dest = puVar1 + 3;
  thunk_FUN_ram_4000505c(__dest,0,0x10);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar9 = *puVar1;
    iVar2 = FUN_ram_4004a192(uVar9,0,2);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_ram_4004a228(uVar9,&iStack_24);
    if (iVar2 != 0) {
      return 0;
    }
    iStack_24 = iStack_24 + -0x18;
    iVar2 = FUN_ram_40057892(uVar9,0xc,__dest,0xc,&iStack_28);
    if (iVar2 != 0) {
      return 0;
    }
    if (iStack_28 != 0xc) {
      return 0;
    }
    if (puVar1[4] != iStack_24) {
      return 0;
    }
    iVar2 = FUN_ram_40059bae();
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = FUN_ram_40049ff2(uVar9,iVar2,iStack_24,&iStack_28);
    if ((iVar3 != 0) || (iStack_28 != iStack_24)) {
      FUN_ram_40059be4(iVar2);
      return 0;
    }
    puVar1[6] = iVar2;
  }
  else {
    if (*(char *)(param_1 + 0xc) != '\0') {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 8);
    iStack_24 = *(int *)(iVar2 + 0xc) + -0xc;
    memcpy(__dest,*(void **)(iVar2 + 0x10),0xc);
    puVar1[6] = *(int *)(iVar2 + 0x10) + 0xc;
    if (puVar1[4] != iStack_24) {
      return 0;
    }
    iVar2 = 0;
  }
  iVar3 = FUN_ram_400578d8(param_1);
  if (iVar3 != 0) {
    uVar10 = puVar1[5];
    uVar9 = puVar1[4];
    iVar4 = FUN_ram_4004cb86(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                             *(undefined1 *)(param_1 + 0x11),*(undefined2 *)(param_1 + 0x18));
    if (iVar4 != 0) {
      uVar6 = *(undefined4 *)(iVar4 + 0x10);
      if ((puVar1[3] & 0xf) == 1) {
        uVar7 = 2;
        if (*(char *)(param_1 + 0x11) != '\x14') {
          iVar5 = FUN_ram_40049d8e();
          uVar7 = iVar5 + 7 >> 3;
        }
        iVar5 = FUN_ram_40058748(puVar1[6],uVar9,uVar6,uVar10,uVar7 & 0xff);
LAB_ram_40058190:
        if (puVar1[5] == iVar5) {
          *(int *)(iVar3 + 0x20) = iVar4;
          bVar8 = true;
          goto LAB_ram_400580d4;
        }
      }
      else if (((puVar1[3] & 0xf) == 2) &&
              (iVar5 = FUN_ram_40058478(puVar1[6],uVar6,uVar9,uVar10), -1 < iVar5))
      goto LAB_ram_40058190;
      FUN_ram_4004ccdc(iVar4);
    }
  }
  bVar8 = false;
LAB_ram_400580d4:
  puVar1[6] = 0;
  FUN_ram_40059be4(iVar2);
  if (((!bVar8) || (iVar2 = puVar1[8], iVar2 == 0)) || (*(int *)(iVar2 + 0x10) == 0)) {
    return 0;
  }
  if (3 < (byte)(*(char *)(param_1 + 0x11) - 7U)) {
    if (3 < (byte)(*(char *)(param_1 + 0x11) - 0xbU)) {
      *(int *)(param_1 + 0x1c) = iVar2;
      puVar1[7] = iVar2;
      puVar1[8] = 0;
      return 1;
    }
    uVar9 = FUN_ram_400578f8(param_1);
    return uVar9;
  }
  if (*(char *)(param_1 + 7) == '\0') {
    uVar9 = FUN_ram_40057af4(param_1);
    return uVar9;
  }
  uVar9 = FUN_ram_40057ede();
  return uVar9;
}


/* NanoCore 1.10, address 0x400581da.
 * REA evidence: ev_f65329995c792cd5f3574e61a0fb4dbbf9ed4ae78563d107ddf56c9220803c8d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400581da(undefined4 param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *__src;
  char cVar9;
  void *__dest;
  undefined4 *puVar10;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar3 = FUN_ram_4004a374(*(undefined4 *)(param_2 + 8));
    iVar4 = thunk_FUN_ram_4000522c(uVar3,s_U__icons__s_bin_ram_40093170 + 0xc);
    if (iVar4 != 0) {
      return 0;
    }
    piVar5 = (int *)FUN_ram_400578d8(param_2);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    *(int **)(param_2 + 0x38) = piVar5;
    iVar4 = FUN_ram_40059bae(0xc);
    if (iVar4 == 0) goto LAB_ram_40058240;
    iVar6 = FUN_ram_4004a2bc(iVar4,*(undefined4 *)(param_2 + 8),2);
    if (iVar6 != 0) {
      FUN_ram_40059be4(iVar4);
      goto LAB_ram_40058240;
    }
    uVar1 = *(ushort *)(param_2 + 0x12);
    *piVar5 = iVar4;
    if ((uVar1 & 8) != 0) goto LAB_ram_40058268;
    cVar9 = *(char *)(param_2 + 0x11);
    if ((byte)(cVar9 - 7U) < 4) {
      cVar9 = '\0';
      if (*(char *)(param_2 + 7) == '\0') goto LAB_ram_40058362;
      iVar4 = FUN_ram_40057ede();
    }
    else {
      if ((byte)(cVar9 - 0xbU) < 4) goto LAB_ram_400582a0;
      if (5 < (byte)(cVar9 - 0xfU)) goto LAB_ram_400582b6;
      puVar10 = *(undefined4 **)(param_2 + 0x38);
      uVar3 = *puVar10;
      iVar6 = (uint)*(ushort *)(param_2 + 0x18) * (uint)*(ushort *)(param_2 + 0x16);
      if (cVar9 == '\x14') {
        iVar6 = iVar6 + (uint)(*(ushort *)(param_2 + 0x18) >> 1) * (uint)*(ushort *)(param_2 + 0x16)
        ;
      }
      iVar7 = FUN_ram_4004cb86(*(undefined2 *)(param_2 + 0x14));
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar8 = FUN_ram_40057892(uVar3,0xc,*(undefined4 *)(iVar7 + 0x10),iVar6,&iStack_48);
        if ((iVar8 == 0) && (iVar6 == iStack_48)) {
          *(int *)(param_2 + 0x1c) = iVar7;
          puVar10[7] = iVar7;
          iVar4 = 1;
        }
        else {
          FUN_ram_4004ccdc(iVar7);
        }
      }
    }
LAB_ram_4005830a:
    cVar9 = '\0';
LAB_ram_4005830c:
    if (iVar4 != 1) {
LAB_ram_400582b8:
      FUN_ram_4005780e(param_2);
      return iVar4;
    }
  }
  else {
    if (*(char *)(param_2 + 0xc) != '\0') {
LAB_ram_400582b6:
      iVar4 = 0;
      goto LAB_ram_400582b8;
    }
    __src = *(void **)(param_2 + 8);
    if (*(int *)((int)__src + 0x10) == 0) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 0x12) & 8) != 0) {
LAB_ram_40058268:
      iVar4 = FUN_ram_40058012(param_2);
      goto LAB_ram_4005830a;
    }
    if ((byte)(*(char *)((int)__src + 1) - 7U) < 4) {
      iVar4 = FUN_ram_400578d8(param_2);
      if (iVar4 == 0) {
        return 0;
      }
      cVar9 = *(char *)(param_2 + 7);
      if (cVar9 == '\0') {
LAB_ram_40058362:
        iVar4 = FUN_ram_40057af4(param_2);
      }
      else {
        iVar4 = FUN_ram_40057ede(param_2);
      }
      goto LAB_ram_4005830c;
    }
    if ((byte)(*(char *)((int)__src + 1) - 0xbU) < 4) {
      iVar4 = FUN_ram_400578d8(param_2);
      if (iVar4 == 0) {
        return 0;
      }
LAB_ram_400582a0:
      iVar4 = FUN_ram_400578f8(param_2);
      goto LAB_ram_4005830a;
    }
    iVar4 = FUN_ram_400578d8(param_2);
    __dest = __src;
    if ((*(ushort *)((int)__src + 2) & 0x10) == 0) {
      __dest = (void *)(iVar4 + 0x24);
      memcpy(__dest,__src,0x18);
      *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar4 + 0x34);
    }
    sVar2 = *(short *)((int)__dest + 8);
    *(void **)(param_2 + 0x1c) = __dest;
    cVar9 = '\x01';
    if (sVar2 == 0) {
      *(undefined2 *)((int)__dest + 8) = *(undefined2 *)(param_2 + 0x18);
    }
  }
  iVar4 = *(int *)(param_2 + 0x1c);
  if (iVar4 == 0) {
    return 1;
  }
  iVar6 = FUN_ram_4004e7fe(param_2,iVar4);
  if (iVar6 != 0) {
    if (iVar4 == iVar6) {
      *(int *)(param_2 + 0x1c) = iVar4;
      if (cVar9 != '\0') {
        return 1;
      }
    }
    else {
      FUN_ram_4005780e(param_2);
      iVar4 = FUN_ram_400578d8(param_2);
      *(int *)(iVar4 + 0x1c) = iVar6;
      *(int *)(param_2 + 0x1c) = iVar6;
    }
    if (*(char *)(param_2 + 6) != '\0') {
      return 1;
    }
    uStack_40 = *(undefined1 *)(param_2 + 0xc);
    uStack_44 = *(undefined4 *)(param_2 + 8);
    iStack_48 = *(int *)(*(int *)(param_2 + 0x1c) + 0xc);
    iVar4 = FUN_ram_4004e7a2(param_1,&iStack_48,*(int *)(param_2 + 0x1c),
                             *(undefined4 *)(param_2 + 0x38));
    if (iVar4 != 0) {
      *(int *)(param_2 + 0x34) = iVar4;
      iVar4 = FUN_ram_400578d8(param_2);
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      return 1;
    }
  }
LAB_ram_40058240:
  FUN_ram_4005780e(param_2);
  return 0;
}


/* NanoCore 1.10, address 0x4005841e.
 * REA evidence: ev_48186b2904d3775d257d1bb3cb7f65488f1e60482697c9cb3a37854e44aa6acd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005841e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004e766();
  if (iVar1 != 0) {
    FUN_ram_4004e78e(iVar1,FUN_ram_4005774e);
    FUN_ram_4004e792(iVar1,FUN_ram_400581da);
    FUN_ram_4004e796(iVar1,FUN_ram_40057cc0);
    FUN_ram_4004e79a(iVar1,FUN_ram_40057854);
    FUN_ram_4004e79e(iVar1,0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40058478.
 * REA evidence: ev_ba3988a38a23c452a97a5c68fa52fdd5a5ce2b6858591aca8c073440d545908f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte * FUN_ram_40058478(ushort *param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *__dest;
  ushort *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  uint uVar12;
  undefined1 *__dest_00;
  undefined1 *puVar13;
  ushort *puVar14;
  undefined1 *puVar15;
  undefined1 *__src;
  
  if ((param_1 == (ushort *)0x0) || (param_4 < 0)) {
    return (byte *)0xffffffff;
  }
  puVar8 = (ushort *)((int)param_1 + param_3);
  puVar9 = param_2 + param_4;
  if (param_4 == 0) {
    pbVar6 = (byte *)0xffffffff;
    if (param_3 == 1) {
      pbVar6 = (byte *)-(uint)((byte)*param_1 != 0);
    }
  }
  else {
    pbVar6 = (byte *)0xffffffff;
    if (param_3 != 0) {
      puVar10 = puVar9 + -7;
      puVar14 = param_1;
      __dest_00 = param_2;
      do {
        while( true ) {
          puVar11 = (ushort *)((int)puVar14 + 1);
          bVar1 = (byte)*puVar14;
          uVar5 = (uint)(bVar1 >> 4);
          if (uVar5 == 0xf) break;
          puVar15 = __dest_00 + uVar5;
          if ((puVar8 + -8 <= puVar11) || (puVar9 + -0x20 < __dest_00)) goto LAB_ram_400585d4;
          memcpy(__dest_00,puVar11,0x10);
          uVar12 = bVar1 & 0xf;
          uVar7 = (uint)*(ushort *)((int)puVar11 + uVar5);
          puVar14 = (ushort *)((int)puVar11 + uVar5) + 1;
          puVar13 = puVar15 + -uVar7;
          if (uVar12 == 0xf) {
LAB_ram_4005862c:
            iVar4 = 0;
            puVar11 = puVar14;
            do {
              puVar14 = (ushort *)((int)puVar11 + 1);
              uVar2 = *puVar11;
              iVar4 = iVar4 + (uint)(byte)uVar2;
              puVar11 = puVar14;
              if ((puVar8 + -2 < puVar14) || (iVar4 < 0)) goto LAB_ram_4005873c;
            } while ((byte)uVar2 == 0xff);
            uVar12 = iVar4 + 0xf;
            if (puVar15 <= puVar15 + uVar12) goto LAB_ram_40058650;
            goto LAB_ram_4005873c;
          }
          if ((uVar7 < 8) || (puVar13 < param_2)) goto LAB_ram_40058650;
          memcpy(puVar15,puVar13,8);
          memcpy(puVar15 + 8,puVar13 + 8,8);
          memcpy(puVar15 + 0x10,puVar13 + 0x10,2);
          __dest_00 = puVar15 + uVar12 + 4;
        }
        if ((ushort *)((int)puVar8 + -0xf) <= puVar11) goto LAB_ram_4005873c;
        iVar4 = 0;
        puVar14 = puVar11;
        do {
          puVar11 = (ushort *)((int)puVar14 + 1);
          uVar2 = *puVar14;
          iVar4 = iVar4 + (uint)(byte)uVar2;
          if (((ushort *)((int)puVar8 + -0xf) < puVar11) || (iVar4 < 0)) goto LAB_ram_4005873c;
          puVar14 = puVar11;
        } while ((byte)uVar2 == 0xff);
        uVar5 = iVar4 + 0xf;
        if ((__dest_00 + uVar5 < __dest_00) || ((ushort *)(uVar5 + (int)puVar11) < puVar11))
        goto LAB_ram_4005873c;
LAB_ram_400585d4:
        puVar15 = __dest_00 + uVar5;
        puVar14 = (ushort *)((int)puVar11 + uVar5);
        if ((puVar9 + -0xc < puVar15) || (puVar8 + -4 < puVar14)) {
          if ((puVar8 == puVar14) && (puVar15 <= puVar9)) {
            thunk_FUN_ram_40005166(__dest_00,puVar11);
            return puVar15 + -(int)param_2;
          }
LAB_ram_4005873c:
          return (byte *)((int)param_1 + (-1 - (int)puVar11));
        }
        do {
          puVar13 = __dest_00 + 8;
          memcpy(__dest_00,puVar11,8);
          puVar11 = puVar11 + 4;
          __dest_00 = puVar13;
        } while (puVar13 < puVar15);
        uVar12 = bVar1 & 0xf;
        uVar7 = (uint)*puVar14;
        puVar14 = puVar14 + 1;
        puVar13 = puVar15 + -uVar7;
        if (uVar12 == 0xf) goto LAB_ram_4005862c;
LAB_ram_40058650:
        puVar11 = puVar14;
        if (puVar13 < param_2) goto LAB_ram_4005873c;
        __dest_00 = puVar15 + uVar12 + 4;
        if (uVar7 < 8) {
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          iVar4 = *(int *)(&DAT_ram_40097a0c + uVar7 * 4);
          *puVar15 = *puVar13;
          puVar15[1] = puVar13[1];
          puVar15[2] = puVar13[2];
          puVar15[3] = puVar13[3];
          memcpy(puVar15 + 4,puVar13 + iVar4,4);
          puVar13 = puVar13 + iVar4 + -*(int *)(&DAT_ram_400979ec + uVar7 * 4);
        }
        else {
          memcpy(puVar15,puVar13,8);
          puVar13 = puVar13 + 8;
        }
        __dest = puVar15 + 8;
        if (puVar9 + -0xc < __dest_00) {
          if (puVar9 + -5 < __dest_00) goto LAB_ram_4005873c;
          puVar15 = __dest;
          __src = puVar13;
          if (__dest < puVar10) {
            do {
              puVar3 = puVar15 + 8;
              memcpy(puVar15,__src,8);
              puVar15 = puVar3;
              __src = __src + 8;
            } while (puVar3 < puVar10);
            puVar13 = puVar13 + ((int)puVar10 - (int)__dest);
            __dest = puVar10;
          }
          for (iVar4 = 0; __dest + iVar4 < __dest_00; iVar4 = iVar4 + 1) {
            __dest[iVar4] = puVar13[iVar4];
          }
        }
        else {
          memcpy(__dest,puVar13,8);
          if (0x10 < uVar12 + 4) {
            puVar15 = puVar15 + 0x10;
            do {
              puVar13 = puVar13 + 8;
              memcpy(puVar15,puVar13,8);
              puVar15 = puVar15 + 8;
            } while (puVar15 < __dest_00);
          }
        }
      } while( true );
    }
  }
  return pbVar6;
}


/* NanoCore 1.10, address 0x40058748.
 * REA evidence: ev_1bede3220e966f182fd59f3b6c708d7396866a484452f0c26530b58e016fa055
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40058748(byte *param_1,uint param_2,void *param_3,uint param_4,size_t param_5)

{
  byte *__src;
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint __n;
  uint uVar4;
  uint uVar5;
  void *__dest;
  
  uVar2 = 0;
  uVar4 = 0;
  do {
    if (param_2 <= uVar4) {
      return uVar2;
    }
    uVar4 = uVar4 + 1;
    __src = param_1 + 1;
    uVar3 = (uint)*param_1;
    if (param_2 < uVar4) {
      return 0;
    }
    if ((char)*param_1 < '\0') {
      __n = (uVar3 & 0x7f) * param_5;
      uVar4 = uVar4 + __n;
      if (param_2 < uVar4) {
        return 0;
      }
      uVar3 = uVar2 + __n;
      if (param_4 < uVar3) {
        if (param_5 + param_4 < uVar3) {
          return 0;
        }
        memcpy(param_3,__src,param_4 - uVar2);
        return param_4;
      }
      memcpy(param_3,__src,__n);
      uVar2 = uVar3;
      sVar1 = __n;
    }
    else {
      uVar4 = uVar4 + param_5;
      if (param_2 < uVar4) {
        return 0;
      }
      __n = param_5 * uVar3;
      uVar2 = __n + uVar2;
      if (param_4 < uVar2) {
        if (param_5 + param_4 < uVar2) {
          return 0;
        }
        for (uVar2 = 0; uVar2 < uVar3 - 1; uVar2 = uVar2 + 1) {
          memcpy(param_3,__src,param_5);
          param_3 = (void *)((int)param_3 + param_5);
        }
        return param_4;
      }
      sVar1 = param_5;
      if (param_5 == 1) {
        thunk_FUN_ram_4000505c(param_3,param_1[1],uVar3);
        __n = uVar3;
      }
      else {
        __dest = param_3;
        for (uVar5 = 0; uVar5 < uVar3; uVar5 = uVar5 + 1) {
          memcpy(__dest,__src,param_5);
          __dest = (void *)((int)__dest + param_5);
        }
      }
    }
    param_1 = __src + sVar1;
    param_3 = (void *)((int)param_3 + __n);
  } while( true );
}


/* NanoCore 1.10, address 0x40058854.
 * REA evidence: ev_05b47199339b64199f79dc33736c3d1a007977baade3c26f8954dbbd09439d06
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40058854(undefined4 *param_1,undefined4 param_2)

{
  if (param_1[1] != 0) {
    FUN_ram_40058854();
  }
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40058876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40058882.
 * REA evidence: ev_02db1b77fd425541e68c25015836efc9da938d612705e066fcb1a8e35a5c7330
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40058882(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if (*piVar1 != 0) {
    if ((piVar1[8] & 0x100000U) != 0) {
      *param_2 = *piVar1;
      FUN_ram_40058882();
    }
  }
  *param_2 = (int)piVar1;
  FUN_ram_40058854(param_1,param_2);
  return;
}


/* NanoCore 1.10, address 0x400588b8.
 * REA evidence: ev_b037b5121965739eb4a436bb1cf4caa399f9a54251c7afea7995ed8b761f6e4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400588b8(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004c24c();
  }
  else {
    FUN_ram_40047aae();
  }
  FUN_ram_4004c4b8();
  return;
}


/* NanoCore 1.10, address 0x400588d0.
 * REA evidence: ev_80389e17c211f2500636f75a9d3f7a9dc1181d0da1c63304376152bea012a89a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400588d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400588b8();
  if (iVar1 != 0) {
    FUN_ram_40047464(param_1);
    FUN_ram_40058882(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40058902.
 * REA evidence: ev_15d64c3527cbc06332d8421dd7e7bb86c7ef67f42b0beb5e55fffcfa08ab36df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40058902(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x40058906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}


/* NanoCore 1.10, address 0x40058908.
 * REA evidence: ev_33ab77d1e92fc3610bfdff243b153ee2990b36004ebd335588a0a2aa8e69b162
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40058986) */

int FUN_ram_40058908(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  
  *param_2 = 0;
  puVar1 = (undefined4 *)0x0;
  puVar2 = param_1;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      if (puVar1 == (undefined4 *)0x0) {
        iVar5 = param_1[3];
        *param_2 = 0;
        *(short *)(param_2 + 2) = (short)iVar5;
        *(undefined2 *)((int)param_2 + 10) = 0;
        iVar3 = 0;
        sVar6 = (short)(iVar5 / 2);
        *(short *)((int)param_2 + 6) = sVar6;
        *(short *)(param_2 + 1) = sVar6 + 2;
        param_2[3] = param_2[3] & 0xfe000000U | 0x1010000;
      }
      else {
        if ((*(byte *)(puVar1 + 5) & 4) != 0) {
          param_4 = 0;
        }
        (*(code *)*puVar1)(puVar1,param_2,param_3,param_4,(code *)*puVar1);
        iVar3 = 1;
        *param_2 = (int)puVar1;
      }
      return iVar3;
    }
    uVar4 = param_4;
    if ((*(byte *)(puVar2 + 5) & 4) != 0) {
      uVar4 = 0;
    }
    iVar3 = (*(code *)*puVar2)(puVar2,param_2,param_3,uVar4,(code *)*puVar2);
    if (iVar3 != 0) {
      if ((*(byte *)((int)param_2 + 0xf) & 1) == 0) {
        *param_2 = (int)puVar2;
        return iVar3;
      }
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = puVar2;
      }
    }
    puVar2 = (undefined4 *)puVar2[7];
  } while( true );
}


/* NanoCore 1.10, address 0x400589b4.
 * REA evidence: ev_2c20689e4faf0507db2a55f03a18d91640dac61fe94cccdb6edc25571b31280b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_400589b4(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined1 auStack_28 [4];
  undefined2 uStack_24;
  
  if ((((((0x1f < param_2) && (param_2 != 0x61c)) && (1 < param_2 - 0x115f)) &&
       ((3 < param_2 - 0x180b && (4 < param_2 - 0x200b)))) &&
      ((7 < param_2 - 0x2028 && ((0x10 < param_2 - 0x205f && (param_2 != 0xfeff)))))) &&
     (param_2 != 0xf8ff)) {
    FUN_ram_40058908(param_1,auStack_28,param_2,param_3);
    return uStack_24;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40058a6a.
 * REA evidence: ev_9db6833a8a4a090e1ebb323d0f8ea089ca12d3be6c3c5f3b1eff7f254e065a81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40058a6a(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  switch(param_3 - 1 & 0xff) {
  case 0:
    uVar3 = param_3;
    break;
  case 1:
    uVar3 = 3;
    break;
  case 2:
    uVar3 = 7;
    break;
  case 3:
    uVar3 = 0xf;
    break;
  default:
    uVar3 = (1 << (param_3 & 0x1f)) - 1U & 0xff;
    break;
  case 7:
    uVar3 = 0xff;
  }
  param_3 = param_3 + (param_2 & 7);
  bVar1 = *(byte *)(param_1 + (param_2 >> 3));
  if (param_3 < 8) {
    uVar2 = (int)(uint)bVar1 >> (8 - param_3 & 0x1f);
  }
  else {
    uVar2 = (int)(uint)CONCAT11(bVar1,*(undefined1 *)(param_1 + (param_2 >> 3) + 1)) >>
            (0x10 - param_3 & 0x1f);
  }
  return (int)(char)uVar3 & uVar2 & 0xff;
}


/* NanoCore 1.10, address 0x40058aec.
 * REA evidence: ev_b0f58cfb65015bc73f332fb1b21515dbfd0b295301cf86ea31ce4f3bdbc270c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40058aec(byte *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  
  pbVar10 = param_1;
  do {
    uVar2 = _DAT_ram_3007fa64;
    iVar9 = _DAT_ram_3007fa60;
    if (pbVar10 == param_1 + param_2) {
      return;
    }
    if (_DAT_ram_3007fa6c == 0) {
      uVar8 = (uint)DAT_ram_3007fa68;
      uVar4 = FUN_ram_40058a6a(_DAT_ram_3007fa64,_DAT_ram_3007fa60,uVar8);
      if ((iVar9 != 0) && (DAT_ram_3007fa69 == uVar4)) {
        DAT_ram_3007fa6a = '\0';
        _DAT_ram_3007fa6c = 1;
      }
      bVar3 = (byte)uVar4;
      _DAT_ram_3007fa60 = uVar8 + iVar9;
      DAT_ram_3007fa69 = (byte)uVar4;
    }
    else if (_DAT_ram_3007fa6c == 1) {
      iVar5 = FUN_ram_40058a6a(_DAT_ram_3007fa64,_DAT_ram_3007fa60,1);
      bVar3 = DAT_ram_3007fa69;
      iVar6 = iVar9 + 1;
      cVar7 = DAT_ram_3007fa6a + '\x01';
      _DAT_ram_3007fa60 = iVar6;
      if (iVar5 == 1) {
        bVar1 = DAT_ram_3007fa6a == '\n';
        DAT_ram_3007fa6a = cVar7;
        if (bVar1) {
          iVar5 = FUN_ram_40058a6a(uVar2,iVar6,6);
          iVar9 = iVar9 + 7;
          DAT_ram_3007fa6a = (char)iVar5;
          _DAT_ram_3007fa60 = iVar9;
          if (iVar5 == 0) {
            uVar4 = (uint)DAT_ram_3007fa68;
            DAT_ram_3007fa69 = FUN_ram_40058a6a(uVar2,iVar9,uVar4);
            _DAT_ram_3007fa60 = iVar9 + uVar4;
            goto LAB_ram_40058be2;
          }
          _DAT_ram_3007fa6c = 2;
        }
      }
      else {
        uVar4 = (uint)DAT_ram_3007fa68;
        DAT_ram_3007fa6a = cVar7;
        DAT_ram_3007fa69 = FUN_ram_40058a6a(uVar2,iVar6,uVar4);
        _DAT_ram_3007fa60 = uVar4 + iVar6;
LAB_ram_40058be2:
        _DAT_ram_3007fa6c = 0;
        bVar3 = DAT_ram_3007fa69;
      }
    }
    else {
      bVar3 = 0;
      if (_DAT_ram_3007fa6c == 2) {
        cVar7 = DAT_ram_3007fa6a + -1;
        bVar1 = DAT_ram_3007fa6a == '\x01';
        bVar3 = DAT_ram_3007fa69;
        DAT_ram_3007fa6a = cVar7;
        if (bVar1) {
          uVar4 = (uint)DAT_ram_3007fa68;
          DAT_ram_3007fa69 = FUN_ram_40058a6a(_DAT_ram_3007fa64,_DAT_ram_3007fa60,uVar4);
          _DAT_ram_3007fa60 = uVar4 + iVar9;
          goto LAB_ram_40058be2;
        }
      }
    }
    *pbVar10 = bVar3;
    pbVar10 = pbVar10 + 1;
  } while( true );
}


/* NanoCore 1.10, address 0x40058c4e.
 * REA evidence: ev_a466b683c18acb801c51febbe879d8d852295c5efa31d3084676581ec18b077b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40058c4e(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uStack_12;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar4 = 0;
    do {
      if ((*(uint *)(iVar2 + 0x10) & 0x1ffffff) >> 0x10 <= (uVar4 & 0xffff)) {
        return 0;
      }
      iVar7 = uVar4 * 0x14;
      uVar4 = uVar4 + 1;
      iVar6 = *(int *)(iVar2 + 8) + iVar7;
      uVar5 = param_2 - *(int *)(*(int *)(iVar2 + 8) + iVar7);
    } while (*(ushort *)(iVar6 + 4) <= uVar5);
    cVar1 = *(char *)(iVar6 + 0x12);
    if (cVar1 == '\x02') {
      iVar2 = *(ushort *)(iVar6 + 6) + uVar5;
    }
    else {
      if (cVar1 == '\0') {
        uVar4 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) + uVar5);
      }
      else {
        uStack_12 = (undefined2)uVar5;
        if (cVar1 == '\x03') {
          iVar6 = FUN_ram_4004b8fa(&uStack_12,*(undefined4 *)(iVar6 + 8),
                                   *(undefined2 *)(iVar6 + 0x10),2,&LAB_ram_40058c42);
          if (iVar6 == 0) {
            return 0;
          }
          iVar7 = *(int *)(iVar2 + 8) + iVar7;
          return (uint)*(ushort *)(iVar7 + 6) + (iVar6 - *(int *)(iVar7 + 8) >> 1);
        }
        if (cVar1 != '\x01') {
          return 0;
        }
        iVar3 = FUN_ram_4004b8fa(&uStack_12,*(undefined4 *)(iVar6 + 8),*(undefined2 *)(iVar6 + 0x10)
                                 ,2,&LAB_ram_40058c42);
        if (iVar3 == 0) {
          return 0;
        }
        iVar6 = *(int *)(iVar2 + 8) + iVar7;
        uVar4 = (uint)*(ushort *)(*(int *)(iVar6 + 0xc) + (iVar3 - *(int *)(iVar6 + 8)));
      }
      iVar2 = uVar4 + *(ushort *)(iVar6 + 6);
    }
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x40058d2c.
 * REA evidence: ev_c7ae67637082beb94c059c93163bf6823e8dd1aac336c5873adc96649b3c76ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40058d2c(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  int *piVar15;
  
  iVar2 = *(int *)(param_3 + 0x10);
  if (param_2 == 9) {
    param_2 = 0x20;
  }
  piVar15 = *(int **)(*param_1 + 0x18);
  iVar3 = FUN_ram_40058c4e(*param_1,param_2);
  if (iVar3 != 0) {
    iVar12 = piVar15[1] + iVar3 * 8;
    uVar13 = (uint)*(byte *)(iVar12 + 4);
    bVar6 = *(byte *)(iVar12 + 5);
    if (uVar13 * bVar6 != 0) {
      uVar14 = *(ushort *)((int)piVar15 + 0x12) & 0xc000;
      pbVar10 = (byte *)(*piVar15 + (*(uint *)(piVar15[1] + iVar3 * 8) & 0xfffff));
      if ((*(ushort *)((int)piVar15 + 0x12) & 0xc000) != 0) {
        uVar7 = ((piVar15[4] & 0x1fffffffU) >> 0x19) - 2 & 0xff;
        if (2 < uVar7) {
          return param_3;
        }
        iVar4 = *(int *)(&DAT_ram_40097a4c + uVar7 * 4);
        DAT_ram_3007fa68 = (byte)((uint)(piVar15[4] << 3) >> 0x1c);
        _DAT_ram_3007fa6c = 0;
        _DAT_ram_3007fa60 = 0;
        DAT_ram_3007fa69 = 0;
        DAT_ram_3007fa6a = 0;
        _DAT_ram_3007fa64 = pbVar10;
        iVar3 = FUN_ram_40059bae(uVar13);
        iVar12 = 0;
        if (uVar14 == 0x4000) {
          iVar12 = FUN_ram_40059bae(uVar13);
        }
        FUN_ram_40058aec(iVar3,uVar13);
        iVar5 = FUN_ram_4004ca7e(uVar13,0xe);
        for (iVar8 = 0; iVar8 < (int)uVar13; iVar8 = iVar8 + 1) {
          *(undefined1 *)(iVar2 + iVar8) = *(undefined1 *)(iVar4 + (uint)*(byte *)(iVar3 + iVar8));
        }
        for (iVar8 = 1; iVar2 = iVar2 + iVar5, iVar8 < (int)(uint)bVar6; iVar8 = iVar8 + 1) {
          if (uVar14 == 0x4000) {
            FUN_ram_40058aec(iVar12,uVar13);
            for (iVar9 = 0; iVar9 < (int)uVar13; iVar9 = iVar9 + 1) {
              bVar1 = *(byte *)(iVar12 + iVar9) ^ *(byte *)(iVar3 + iVar9);
              *(byte *)(iVar3 + iVar9) = bVar1;
              *(undefined1 *)(iVar2 + iVar9) = *(undefined1 *)(iVar4 + (uint)bVar1);
            }
          }
          else {
            FUN_ram_40058aec(iVar3,uVar13);
            for (iVar9 = 0; iVar9 < (int)uVar13; iVar9 = iVar9 + 1) {
              *(undefined1 *)(iVar2 + iVar9) =
                   *(undefined1 *)(iVar4 + (uint)*(byte *)(iVar3 + iVar9));
            }
          }
        }
        FUN_ram_40059be4(iVar3);
        FUN_ram_40059be4(iVar12);
        return param_3;
      }
      iVar3 = FUN_ram_4004ca7e(uVar13,0xe);
      uVar14 = *(ushort *)((int)piVar15 + 0x12) & 0x1e00;
      if (uVar14 != 0x200) {
        if (uVar14 != 0x400) {
          if (uVar14 != 0x800) {
            return param_3;
          }
          bVar6 = 0;
          for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(iVar12 + 5); iVar4 = iVar4 + 1) {
            for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar12 + 4); iVar5 = iVar5 + 1) {
              if ((bool)(bVar6 & 1)) {
                pbVar11 = pbVar10 + 1;
                uVar13 = *pbVar10 & 0xf;
              }
              else {
                uVar13 = (uint)(*pbVar10 >> 4);
                pbVar11 = pbVar10;
              }
              bVar6 = (bVar6 & 1) + 1;
              *(undefined *)(iVar2 + iVar5) = (&DAT_ram_40097a64)[uVar13];
              pbVar10 = pbVar11;
            }
            iVar2 = iVar2 + iVar3;
          }
          return param_3;
        }
        iVar4 = 0;
        uVar13 = 0;
        do {
          if ((int)(uint)*(byte *)(iVar12 + 5) <= iVar4) {
            return param_3;
          }
          for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar12 + 4); iVar5 = iVar5 + 1) {
            uVar13 = uVar13 & 3;
            uVar7 = (uint)*pbVar10;
            if (uVar13 == 0) {
              uVar7 = (uint)(*pbVar10 >> 6);
LAB_ram_40058e7c:
              *(undefined *)(iVar2 + iVar5) = (&DAT_ram_40097a58)[uVar7];
            }
            else {
              if (uVar13 == 1) {
                uVar7 = (uVar7 & 0x3f) >> 4;
                goto LAB_ram_40058e7c;
              }
              if (uVar13 == 2) {
                uVar7 = (uVar7 & 0xf) >> 2;
                goto LAB_ram_40058e7c;
              }
              pbVar10 = pbVar10 + 1;
              *(undefined *)(iVar2 + iVar5) = (&DAT_ram_40097a58)[uVar7 & 3];
            }
            uVar13 = uVar13 + 1;
          }
          iVar2 = iVar2 + iVar3;
          iVar4 = iVar4 + 1;
        } while( true );
      }
      iVar4 = 0;
      uVar13 = 0;
      do {
        if ((int)(uint)*(byte *)(iVar12 + 5) <= iVar4) {
          return param_3;
        }
        for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar12 + 4); iVar5 = iVar5 + 1) {
          uVar13 = uVar13 & 7;
          uVar7 = (uint)*pbVar10;
          if (uVar13 == 0) {
            bVar6 = *pbVar10 >> 7;
LAB_ram_40058dce:
            *(byte *)(iVar2 + iVar5) = -bVar6;
          }
          else {
            if (uVar13 == 1) {
              bVar6 = (byte)((uVar7 & 0x7f) >> 6);
              goto LAB_ram_40058dce;
            }
            if (uVar13 == 2) {
              bVar6 = (byte)((uVar7 & 0x3f) >> 5);
              goto LAB_ram_40058dce;
            }
            if (uVar13 == 3) {
              bVar6 = (byte)((uVar7 & 0x1f) >> 4);
              goto LAB_ram_40058dce;
            }
            if (uVar13 == 4) {
              bVar6 = (byte)((uVar7 & 0xf) >> 3);
              goto LAB_ram_40058dce;
            }
            if (uVar13 == 5) {
              bVar6 = (byte)((uVar7 & 7) >> 2);
              goto LAB_ram_40058dce;
            }
            if (uVar13 == 6) {
              bVar6 = (byte)((uVar7 & 3) >> 1);
              goto LAB_ram_40058dce;
            }
            *(char *)(iVar2 + iVar5) = (char)((int)(uVar7 << 0x1f) >> 0x1f);
            pbVar10 = pbVar10 + 1;
          }
          uVar13 = uVar13 + 1;
        }
        iVar2 = iVar2 + iVar3;
        iVar4 = iVar4 + 1;
      } while( true );
    }
  }
  return 0;
}


