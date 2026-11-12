/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40047000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400474dc.
 * REA evidence: ev_6fc0fc4b2f8e351900d3bffa63b68d6d23e2a88fd051c5af174d4c69bb3f1918
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400474dc(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [24];
  
  FUN_ram_40046e30(param_1,auStack_30,auStack_20);
  iVar1 = FUN_ram_4004a3bc(auStack_30);
  if ((iVar1 != 0) || (iVar1 = FUN_ram_4004a3bc(auStack_20), iVar1 != 0)) {
    iVar1 = FUN_ram_4004a3bc(auStack_30);
    if (iVar1 != 0) {
      FUN_ram_40045480(param_1,auStack_30);
    }
    iVar1 = FUN_ram_4004a3bc(auStack_20);
    if (iVar1 != 0) {
      FUN_ram_40045480(param_1,auStack_20);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40047524.
 * REA evidence: ev_c38a0788935f1d31b02233c04026d8b8a03fa2bd7c4ec6d3d6ea15721860267c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047524(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_4004653a();
  if (iVar1 == 0) {
    iVar2 = FUN_ram_4004655a(param_1);
    iVar1 = FUN_ram_4004656e(param_1);
    if ((iVar1 < 0) && (0 < iVar2)) {
      iVar1 = -iVar1;
      if (iVar2 <= iVar1) {
        iVar1 = iVar2;
      }
      FUN_ram_4004688a(param_1,0,iVar1,param_2);
    }
  }
  iVar1 = FUN_ram_4004652a(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_40046626(param_1);
    iVar2 = FUN_ram_40046716(param_1);
    iVar3 = FUN_ram_40046390(param_1,0);
    if (iVar3 == 1) {
      if ((iVar1 < 0) && (iVar3 = iVar1, 0 < iVar2)) goto LAB_ram_4004759c;
    }
    else if ((iVar2 < 0) && (0 < iVar1)) {
      iVar3 = -iVar2;
      if (iVar1 <= iVar3) {
        iVar3 = iVar1;
      }
LAB_ram_4004759c:
      FUN_ram_4004688a(param_1,iVar3,0,param_2);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400475cc.
 * REA evidence: ev_8e060a6b3969f88bf3d2609deb6b329407eeeed30d1e9f31a5c8fbf653036aae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400475cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40048a9e();
  for (iVar1 = 0; iVar1 != iVar3; iVar1 = iVar1 + 1) {
    uVar2 = *(undefined4 *)(**(int **)(param_1 + 8) + iVar1 * 4);
    FUN_ram_400454e4(uVar2);
    FUN_ram_40044b50(uVar2,0x2d,0);
    FUN_ram_400454e4(uVar2);
    FUN_ram_400475cc(uVar2);
  }
  return;
}


/* NanoCore 1.11, address 0x4004761e.
 * REA evidence: ev_0b8736dcdf96bce27148a7b2dea3ee687e904de454b91f998d44bb7b52e40d25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004761e(undefined4 *param_1,uint param_2,undefined4 *param_3)

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


/* NanoCore 1.11, address 0x40047664.
 * REA evidence: ev_b282c6558e5c204e97f845ca139fb19caae34b0e67f38825d03f21bd4f420a05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40047664(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_3 >> 2;
  if (0x1f < uVar5) {
    uVar5 = 0x1f;
  }
  uVar1 = *(ushort *)(param_1 + 0x2a);
  uVar6 = 1 << (uVar5 & 0x1f);
  uVar5 = 0;
  do {
    if ((*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14 <= uVar5) {
      uVar2 = 0xffffffff;
LAB_ram_400476c2:
      return uVar2 != 0xffffffff;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
    if ((uVar2 & 0x2000000) == 0) {
      uVar2 = 0xffffffff;
      for (; uVar5 < (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14; uVar5 = uVar5 + 1) {
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + uVar5 * 8);
        if ((uVar6 & *(uint *)(iVar3 + 4)) != 0) {
          uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
          if (((((param_2 & 0xff0000) == (uVar4 & 0xff0000)) &&
               (uVar7 = uVar4 & 0xffff, (uVar4 & 0xffffff & ~(param_2 & 0xffff) & 0xffff) == 0)) &&
              ((int)uVar2 < (int)uVar7)) &&
             ((iVar3 = FUN_ram_4004761e(iVar3,param_3,param_4), iVar3 == 1 &&
              (uVar2 = uVar7, (param_2 & 0xffff) == uVar7)))) {
            return true;
          }
        }
      }
      goto LAB_ram_400476c2;
    }
    if ((((uVar1 & 8) == 0) && ((uVar2 & 0xff0000) == (param_2 & 0xff0000))) &&
       ((iVar3 = *(int *)(*(int *)(param_1 + 0xc) + uVar5 * 8), (uVar6 & *(uint *)(iVar3 + 4)) != 0
        && (iVar3 = FUN_ram_4004761e(iVar3,param_3,param_4), iVar3 == 1)))) {
      return true;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


/* NanoCore 1.11, address 0x4004778c.
 * REA evidence: ev_99e8abf20a7195d66973bd539ff887b669af7857714dfca384754d1e81183a58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004778c(int *param_1,uint param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40047664();
  if (iVar2 == 1) {
    return 1;
  }
  if (param_3 < 0x8d) {
    bVar1 = (&DAT_ram_40099698)[param_3];
  }
  else {
    if (_DAT_ram_30080c90 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(_DAT_ram_30080c90 + param_3 + -0x8d);
  }
  if ((bVar1 & 1) == 0) {
    if (((param_2 & 0xff0000) == 0) && ((param_3 - 1 & 0xff) < 2)) {
      for (param_1 = (int *)*param_1; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
        if (param_3 == 1) {
          if (param_1[6] != 0) {
            *param_4 = param_1[6];
            return 1;
          }
        }
        else if (param_1[7] != 0) {
          *param_4 = param_1[7];
          return 1;
        }
      }
    }
  }
  else {
    if ((param_2 & 0xff0000) == 0) {
      param_1 = (int *)param_1[1];
    }
    for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
      iVar2 = FUN_ram_40047664(param_1,(short)param_1[10],param_3,param_4);
      if (iVar2 == 1) {
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40047842.
 * REA evidence: ev_c0641b2c091352e34493016de4e666082873419f6ffb7672b488bb457f3fcc13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047842(int param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)FUN_ram_4004b51e(0x30080c78);
  while ((piVar1 = piVar3, piVar1 != (int *)0x0 && (piVar1 != param_4))) {
    piVar3 = (int *)FUN_ram_4004b52c(0x30080c78,piVar1);
    if (((*piVar1 == param_1) && ((piVar1[2] == param_2 || (param_2 == 0xf0000)))) &&
       ((*(byte *)(piVar1 + 1) == param_3 || (param_3 == 0xff)))) {
      for (uVar2 = 0; uVar2 < (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14; uVar2 = uVar2 + 1) {
        uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + uVar2 * 8 + 4);
        if (((uVar4 & 0x2000000) != 0) && ((param_2 == 0xf0000 || (param_2 == (uVar4 & 0xffffff)))))
        {
          FUN_ram_4004bc80(*(undefined4 *)(*(int *)(param_1 + 0xc) + uVar2 * 8),(char)piVar1[1]);
        }
      }
      FUN_ram_4004a23a(piVar1,0);
      FUN_ram_4004b45a(0x30080c78,piVar1);
      FUN_ram_4005ab56(piVar1);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40047926.
 * REA evidence: ev_aa49a662a35b82b57b98cfc5ea8e3d35e84253ae1d07ee51e1452ee1e882ed3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40047926(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar5 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
  for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1) {
    uVar3 = *(uint *)(iVar1 + uVar4 * 8 + 4);
    if (((uVar3 & 0x2000000) != 0) && ((uVar3 & 0xffffff) == param_2)) goto LAB_ram_40047948;
  }
  if (uVar5 == uVar4) {
    uVar4 = uVar5 + 1 & 0x3f;
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar4 << 4);
    iVar1 = FUN_ram_4005ab68(iVar1,uVar4 << 3);
    *(int *)(param_1 + 0xc) = iVar1;
    uVar4 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      *(undefined4 *)(iVar1 + uVar4 * 8) = *(undefined4 *)(iVar1 + -8 + uVar4 * 8);
      *(undefined4 *)(iVar1 + uVar4 * 8 + 4) = *(undefined4 *)(uVar4 * 8 + iVar1 + -8 + 4);
    }
    thunk_FUN_ram_4000504c(iVar1,0,8);
    puVar7 = *(undefined4 **)(param_1 + 0xc);
    uVar2 = FUN_ram_4005ab20(0xc);
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    *puVar7 = uVar2;
    FUN_ram_4004bc4e(*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xff000000 | 0x2000000 | param_2 & 0xffffff;
  }
  else {
LAB_ram_40047948:
    iVar1 = iVar1 + uVar4 * 8;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x400479f8.
 * REA evidence: ev_166bb3f511b7d96be7b756c0c59767b4558b087b52414bf13bccb3aa21d1a663
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400479f8(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  
  bVar1 = *(byte *)(param_1 + 2);
  puVar2 = (undefined4 *)*param_1;
  if (bVar1 == 0xff) {
    do {
      puVar6 = (undefined1 *)*puVar2;
      if (puVar6 == (undefined1 *)0x0) goto LAB_ram_40047a54;
      puVar2 = puVar2 + 2;
      uVar3 = FUN_ram_4004bec8(*puVar6);
    } while ((uVar3 & 0x20) == 0);
LAB_ram_40047a42:
    uVar5 = 1;
  }
  else {
    for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 2); uVar3 = uVar3 + 1) {
      uVar4 = FUN_ram_4004bec8(*(undefined1 *)((int)puVar2 + uVar3 + (uint)bVar1 * 4));
      if ((uVar4 & 0x20) != 0) goto LAB_ram_40047a42;
    }
LAB_ram_40047a54:
    uVar5 = 0;
  }
  return uVar5;
}


/* NanoCore 1.11, address 0x40047a58.
 * REA evidence: ev_a833b62bd1539c7c3bdfca485ecd67d3df2512d836a5d570cf86cb7119e77f5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a58(void)

{
  FUN_ram_4004b33e(0x30080c78,0x14);
  return;
}


/* NanoCore 1.11, address 0x40047a66.
 * REA evidence: ev_a310e5184abfaeae907226caf46266b359b928dd75401d789d5d879f7f9bc27a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047a66(undefined1 param_1)

{
  DAT_ram_30080c84 = param_1;
  return;
}


/* NanoCore 1.11, address 0x40047a70.
 * REA evidence: ev_851d596fc44cefdbc1817ffcc31c690a1beb3c1fe85b304f8dabe7b8823653a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40047a70(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  iVar1 = FUN_ram_4004778c(param_1,param_2 | *(ushort *)(param_1 + 0x28),param_3,&uStack_18);
  if (iVar1 == 1) {
    uStack_14 = uStack_18;
  }
  else {
    uStack_14 = FUN_ram_4004be24(param_3);
  }
  return uStack_14;
}


/* NanoCore 1.11, address 0x40047aa4.
 * REA evidence: ev_a07c426ebeffa046451c36f83ec53b49d7bc92daaebc45ae8d94c4201e047c68
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047aa4(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)*param_1;
  uVar5 = puVar2[2];
  uVar3 = FUN_ram_40047a70(*puVar2,uVar5 & 0xff0000,*(undefined1 *)(puVar2 + 1));
  uVar1 = *(undefined1 *)(puVar2 + 1);
  puVar2[3] = uVar3;
  *(undefined1 *)(puVar2 + 1) = 0;
  FUN_ram_40047842(*puVar2,uVar5 & 0xff0000,uVar1,puVar2);
  *(undefined1 *)(puVar2 + 1) = uVar1;
  puVar4 = (undefined4 *)FUN_ram_40047926(*puVar2,puVar2[2]);
  FUN_ram_4004bd22(*puVar4,*(undefined1 *)(puVar2 + 1),puVar2[3]);
  return;
}


/* NanoCore 1.11, address 0x40047af8.
 * REA evidence: ev_af2aaf7d43a5f1d8d54a4bef3c03f508e58eaba3ecdc39f6ec25bd3dce1f49ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40047af8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  while( true ) {
    if ((*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14 <= uVar3) {
      return 0;
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar3 * 8);
    uVar4 = puVar2[1];
    if (((uVar4 & 0x1000000) != 0) && ((uVar4 & 0xffffff) == param_4)) break;
    uVar3 = uVar3 + 1;
  }
  uVar1 = FUN_ram_4004bdde(*puVar2);
  return uVar1;
}


/* NanoCore 1.11, address 0x40047b32.
 * REA evidence: ev_bfc683a25e8405b915f273f974be4c85574270c5b1425b45b7ee018d23f7f82c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40047c02) */
/* WARNING: Removing unreachable block (ram,0x40047c10) */

void FUN_ram_40047b32(int param_1,int param_2,undefined2 param_3,undefined2 param_4,ushort *param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_80;
  uint uStack_7c;
  int *piStack_78;
  code *pcStack_74;
  code *pcStack_6c;
  code *pcStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_44;
  byte bStack_2a;
  
  *(undefined2 *)(param_1 + 0x28) = param_3;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 8;
  uVar2 = FUN_ram_40047a70(param_1,param_2,(char)param_5[4]);
  *(undefined2 *)(param_1 + 0x28) = param_4;
  uStack_7c = FUN_ram_40047a70(param_1,param_2,(char)param_5[4]);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfff7;
  if ((uVar2 != uStack_7c) || ((uStack_7c & 0xffffff) != (uVar2 & 0xffffff))) {
    *(undefined2 *)(param_1 + 0x28) = param_3;
    local_80 = FUN_ram_40047a70(param_1,param_2,(char)param_5[4]);
    *(undefined2 *)(param_1 + 0x28) = param_4;
    puVar3 = (undefined4 *)FUN_ram_40047926(param_1,param_2);
    FUN_ram_4004bd22(*puVar3,(char)param_5[4],local_80);
    if (((char)param_5[4] == '\f') && ((local_80 == 0x7fff || (uStack_7c == 0x7fff)))) {
      iVar4 = FUN_ram_40045064(param_1);
      iVar4 = iVar4 / 2;
      iVar5 = FUN_ram_40045070(param_1);
      iVar5 = iVar5 / 2;
      if (local_80 == 0x7fff) {
        local_80 = iVar5;
        if (iVar4 < iVar5) {
          local_80 = iVar4;
        }
        local_80 = local_80 + 1;
      }
      if (uStack_7c == 0x7fff) {
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        uStack_7c = iVar5 + 1;
      }
    }
    piStack_78 = (int *)FUN_ram_4004b34e(0x30080c78);
    if (piStack_78 != (int *)0x0) {
      *piStack_78 = param_1;
      piStack_78[3] = local_80;
      piStack_78[4] = uStack_7c;
      uVar1 = param_5[4];
      piStack_78[2] = param_2;
      *(char *)(piStack_78 + 1) = (char)uVar1;
      FUN_ram_4004a154(&piStack_78);
      pcStack_74 = FUN_ram_400485e4;
      pcStack_6c = FUN_ram_40047aa4;
      pcStack_68 = FUN_ram_400483e2;
      uStack_50 = 0x80000000;
      uStack_4c = 0xff;
      uStack_48 = (uint)*param_5;
      uStack_54 = 0;
      iStack_44 = -(uint)param_5[1];
      uStack_58 = *(undefined4 *)(param_5 + 6);
      bStack_2a = bStack_2a & 0xfe;
      uStack_5c = *(undefined4 *)(param_5 + 8);
      FUN_ram_4004a19a(&piStack_78);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40047cd2.
 * REA evidence: ev_c26da0265e086fc4f56fc67711ccd42e63780cf3c245f918a2b82795d3cae17b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40047cd2(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  uint uStack_24;
  
  uStack_24 = param_3;
  if (param_1 != 0) {
    piVar2 = (int *)FUN_ram_40047a70(param_1,param_2,0x61);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      cVar1 = FUN_ram_40047a70(param_1,param_2,0x62);
      if (cVar1 != '\0') {
        uStack_24 = (*(code *)*piVar2)(piVar2,param_3);
        uStack_24 = uStack_24 & 0xffffff;
      }
    }
  }
  return uStack_24;
}


/* NanoCore 1.11, address 0x40047d34.
 * REA evidence: ev_c1a36616aca4973cef68d8f2c5b78cd3c12970219b1b190018a073571da58cbd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40047d34(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_24 [4];
  
  uVar5 = 0;
  iVar2 = 0;
  do {
    if ((*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14 <= uVar5) {
      return iVar2;
    }
    uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
    if (((uVar4 & 0x2000000) == 0) &&
       (uVar4 = uVar4 & 0xffff, ((~param_2 & uVar4) == 0) != ((~param_3 & uVar4) == 0))) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar5 * 8);
      iVar3 = FUN_ram_4004bdde(uVar1,0x10,auStack_24);
      if (((((iVar3 != 0) ||
            (((((iVar3 = FUN_ram_4004bdde(uVar1,0x11,auStack_24), iVar3 != 0 ||
                (iVar3 = FUN_ram_4004bdde(uVar1,0x12,auStack_24), iVar3 != 0)) ||
               (iVar3 = FUN_ram_4004bdde(uVar1,0x13,auStack_24), iVar3 != 0)) ||
              ((iVar3 = FUN_ram_4004bdde(uVar1,0x15,auStack_24), iVar3 != 0 ||
               (iVar3 = FUN_ram_4004bdde(uVar1,0x14,auStack_24), iVar3 != 0)))) ||
             (iVar3 = FUN_ram_4004bdde(uVar1,0x16,auStack_24), iVar3 != 0)))) ||
           (((iVar3 = FUN_ram_4004bdde(uVar1,0x6a,auStack_24), iVar3 != 0 ||
             (iVar3 = FUN_ram_4004bdde(uVar1,0x6b,auStack_24), iVar3 != 0)) ||
            (iVar3 = FUN_ram_4004bdde(uVar1,1,auStack_24), iVar3 != 0)))) ||
          (((iVar3 = FUN_ram_4004bdde(uVar1,2,auStack_24), iVar3 != 0 ||
            (iVar3 = FUN_ram_4004bdde(uVar1,4,auStack_24), iVar3 != 0)) ||
           (iVar3 = FUN_ram_4004bdde(uVar1,5,auStack_24), iVar3 != 0)))) ||
         (((iVar3 = FUN_ram_4004bdde(uVar1,6,auStack_24), iVar3 != 0 ||
           (iVar3 = FUN_ram_4004bdde(uVar1,7,auStack_24), iVar3 != 0)) ||
          (iVar3 = FUN_ram_4004bdde(uVar1,0x30,auStack_24), iVar3 != 0)))) {
        return 3;
      }
      iVar3 = FUN_ram_4004bdde(uVar1,0x68,auStack_24);
      if ((((iVar3 == 0) && (iVar3 = FUN_ram_4004bdde(uVar1,0x69,auStack_24), iVar3 == 0)) &&
          (((iVar3 = FUN_ram_4004bdde(uVar1,0x6e,auStack_24), iVar3 == 0 &&
            (((iVar3 = FUN_ram_4004bdde(uVar1,0x6c,auStack_24), iVar3 == 0 &&
              (iVar3 = FUN_ram_4004bdde(uVar1,0x6d,auStack_24), iVar3 == 0)) &&
             (iVar3 = FUN_ram_4004bdde(uVar1,0x3a,auStack_24), iVar3 == 0)))) &&
           ((((iVar3 = FUN_ram_4004bdde(uVar1,0x3b,auStack_24), iVar3 == 0 &&
              (iVar3 = FUN_ram_4004bdde(uVar1,0x38,auStack_24), iVar3 == 0)) &&
             (iVar3 = FUN_ram_4004bdde(uVar1,0x3c,auStack_24), iVar3 == 0)) &&
            ((iVar3 = FUN_ram_4004bdde(uVar1,0x3e,auStack_24), iVar3 == 0 &&
             (iVar3 = FUN_ram_4004bdde(uVar1,0x40,auStack_24), iVar3 == 0)))))))) &&
         ((iVar3 = FUN_ram_4004bdde(uVar1,0x41,auStack_24), iVar3 == 0 &&
          ((iVar3 = FUN_ram_4004bdde(uVar1,0x42,auStack_24), iVar3 == 0 &&
           (iVar3 = FUN_ram_4004bdde(uVar1,0x48,auStack_24), iVar3 == 0)))))) {
        if (iVar2 == 0) {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


/* NanoCore 1.11, address 0x40047f4c.
 * REA evidence: ev_28eaa39d5f5fd8290b4f8b0ed5be82dc9b7d558d13414b940c73e06e9acbe8ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_40047f4c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_ram_40047a70(param_1,param_2,0x5e);
  FUN_ram_40047a70(param_1,param_2,0x27);
  cVar2 = '\x01';
  if (cVar1 != '\0') {
    cVar2 = cVar1;
  }
  return cVar2;
}


/* NanoCore 1.11, address 0x40047f84.
 * REA evidence: ev_8f3cbafdb20622e5f86aaf2f4750cccf66b84f457a61e2c0ba91389d4f0a89fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40047f84(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = FUN_ram_40047a70(param_1,param_2,0x5f);
  if (2 < bVar2) {
    uVar1 = 0xff;
    if (bVar2 < 0xfd) {
      uVar1 = (uint)bVar2 * 0xff >> 8;
    }
    if (param_2 == 0) {
      param_1 = FUN_ram_40048a76(param_1);
    }
    for (; param_1 != 0; param_1 = FUN_ram_40048a76(param_1)) {
      bVar2 = FUN_ram_40047a70(param_1,0,0x5f);
      if (bVar2 < 3) {
        return 0;
      }
      if (bVar2 < 0xfd) {
        uVar1 = bVar2 * uVar1 >> 8;
      }
    }
    if (2 < uVar1) {
      if (0xfc < uVar1) {
        return 0xff;
      }
      return uVar1;
    }
  }
  return 0;
}


