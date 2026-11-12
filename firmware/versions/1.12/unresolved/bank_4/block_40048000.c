/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40048000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40048044.
 * REA evidence: ev_463c53ea5ab67bed2a37dc0a3c9518361b23bee857c9c63ef6e1ed0838b979ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_40048044(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_ram_40047b68(param_1,param_2,0x5e);
  FUN_ram_40047b68(param_1,param_2,0x27);
  cVar2 = '\x01';
  if (cVar1 != '\0') {
    cVar2 = cVar1;
  }
  return cVar2;
}


/* NanoCore 1.12, address 0x4004807c.
 * REA evidence: ev_95183367b010b8a84e6d1b9d23c4d49ff51f2ea2319b10f9ac3892e8da497d7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004807c(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = FUN_ram_40047b68(param_1,param_2,0x5f);
  if (2 < bVar2) {
    uVar1 = 0xff;
    if (bVar2 < 0xfd) {
      uVar1 = (uint)bVar2 * 0xff >> 8;
    }
    if (param_2 == 0) {
      param_1 = FUN_ram_40048b6e(param_1);
    }
    for (; param_1 != 0; param_1 = FUN_ram_40048b6e(param_1)) {
      bVar2 = FUN_ram_40047b68(param_1,0,0x5f);
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


/* NanoCore 1.12, address 0x40048120.
 * REA evidence: ev_4b43c5528831a8fa888491c55d11a74ddc6d998f3f0aaaa00ef71ec7f84bbd7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048120(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40047b68(param_1,0,0x6e);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_40047b68(param_1,0,0x6c);
    if (iVar3 == 0x100) {
      iVar3 = FUN_ram_40047b68(param_1,0,0x6d);
      if (iVar3 == 0x100) {
        iVar3 = FUN_ram_40047b68(param_1,0,0x71);
        if (iVar3 == 0) {
          iVar3 = FUN_ram_40047b68(param_1,0,0x72);
          if (iVar3 == 0) {
            cVar2 = FUN_ram_40047b68(param_1,0,0x60);
            if (cVar2 == -1) {
              iVar3 = FUN_ram_40047b68(param_1,0,0x73);
              if (iVar3 == 0) {
                cVar2 = FUN_ram_40047b68(param_1,0,0x67);
                uVar1 = (uint)(cVar2 != '\0');
                goto LAB_ram_4004813a;
              }
            }
            uVar1 = 1;
            goto LAB_ram_4004813a;
          }
        }
      }
    }
  }
  uVar1 = 2;
LAB_ram_4004813a:
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    if (uVar1 != 0) {
      FUN_ram_4004416c(param_1);
      *(ushort *)(*(int *)(param_1 + 8) + 0x2a) =
           (ushort)(uVar1 << 10) | *(ushort *)(*(int *)(param_1 + 8) + 0x2a) & 0xf3ff;
    }
  }
  else {
    *(ushort *)(iVar3 + 0x2a) = (ushort)(uVar1 << 10) | *(ushort *)(iVar3 + 0x2a) & 0xf3ff;
  }
  return;
}


/* NanoCore 1.12, address 0x4004820c.
 * REA evidence: ev_aa3541b8ab21a980ebed9f56323728d8e11a8b342fc77a86321fa49d25424ae4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004820c(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (DAT_ram_30080d04 == '\0') {
    return;
  }
  FUN_ram_400455dc();
  param_2 = param_2 & 0xff0000;
  uVar1 = FUN_ram_4004bfc0(param_3);
  uVar1 = uVar1 & 4;
  uVar2 = FUN_ram_4004bfc0(param_3);
  uVar3 = FUN_ram_4004bfc0(param_3);
  uVar4 = FUN_ram_4004bfc0(param_3);
  if (uVar1 != 0) {
    if ((param_2 != 0xf0000) && (param_2 != 0)) {
      iVar5 = FUN_ram_40047b68(param_1,0,2);
      if (iVar5 != 0x200007d1) {
        iVar5 = FUN_ram_40047b68(param_1,0,1);
        if (iVar5 != 0x200007d1) goto LAB_ram_400482e4;
      }
    }
    FUN_ram_40044c48(param_1,0x2d,0);
    FUN_ram_400450f4(param_1);
  }
  if ((param_2 == 0xf0000) || (param_2 == 0)) {
    if (((param_3 == 0xff) || (uVar1 != 0)) && (iVar5 = FUN_ram_40048b6e(param_1), iVar5 != 0)) {
      FUN_ram_400450f4();
    }
    if (((param_2 == 0xf0000) || (param_2 == 0)) && ((uVar4 & 0x10) != 0)) {
      FUN_ram_40048120(param_1);
    }
  }
LAB_ram_400482e4:
  if ((param_3 == 0xff) || ((uVar2 & 2) != 0)) {
    FUN_ram_40044af4(param_1);
  }
  FUN_ram_400455dc(param_1);
  if (((param_3 == 0xff) || (((uVar3 & 1) != 0 && ((uVar2 & 2) != 0 || uVar1 != 0)))) &&
     (param_2 != 0x10000)) {
    FUN_ram_400476c4(param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004834c.
 * REA evidence: ev_007b05427fc6332e2117f81bb37d048e7ef78b21e13455472a1c0e5bb6cc2d98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004834c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  
  uVar1 = param_3 & 0xff0000;
  cVar8 = -1;
  if (((param_2 != 0) && (cVar8 = -(*(char *)(param_2 + 8) != '\0'), uVar1 == 0)) &&
     (iVar2 = FUN_ram_40047af0(param_2), iVar2 != 0)) {
    FUN_ram_400455dc(param_1);
  }
  bVar5 = false;
  uVar9 = 0;
  while (uVar9 < (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14) {
    iVar2 = uVar9 * 8;
    uVar7 = *(uint *)(*(int *)(param_1 + 0xc) + iVar2 + 4);
    if (((((param_3 & 0xffff) == 0xffff) || ((uVar7 & 0xffff) == (param_3 & 0xffff))) &&
        ((uVar1 == 0xf0000 || (uVar1 == (uVar7 & 0xff0000))))) &&
       ((param_2 == 0 || (*(int *)(*(int *)(param_1 + 0xc) + iVar2) == param_2)))) {
      if ((uVar7 & 0x2000000) != 0) {
        FUN_ram_4004793a(param_1,uVar1,0xff,0);
      }
      uVar7 = uVar9;
      if ((*(uint *)(*(int *)(param_1 + 0xc) + iVar2 + 4) & 0x3000000) != 0) {
        if (*(int *)(*(int *)(param_1 + 0xc) + iVar2) != 0) {
          FUN_ram_4004bd4e();
        }
        FUN_ram_4005a988(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2));
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2) = 0;
      }
      while( true ) {
        iVar2 = *(int *)(param_1 + 0xc);
        uVar4 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
        if (uVar4 - 1 <= uVar7) break;
        uVar7 = uVar7 + 1;
        iVar6 = iVar2 + uVar7 * 8;
        *(undefined4 *)(iVar6 + -8) = *(undefined4 *)(iVar2 + uVar7 * 8);
        *(undefined4 *)(iVar6 + -4) = *(undefined4 *)(iVar6 + 4);
      }
      uVar7 = uVar4 + 0x3f & 0x3f;
      *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar7 << 4);
      uVar3 = FUN_ram_4005a99a(iVar2,uVar7 << 3);
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      bVar5 = true;
    }
    else {
      uVar9 = uVar9 + 1;
    }
  }
  if ((bVar5) && (cVar8 != '\0')) {
    FUN_ram_4004820c(param_1,uVar1,0xff);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400484ce.
 * REA evidence: ev_eb56778ab4a2d70eb9f31f0925f0f230727d818659711e10e7c1851a6ae692f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400484ce(undefined4 param_1)

{
  FUN_ram_4004834c(param_1,0,0xfffff);
  return;
}


/* NanoCore 1.12, address 0x400484da.
 * REA evidence: ev_85de1d7cd5feac2c59d41a13692b8fa0f45df5b5d105323378d00a017b2659bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400484da(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  param_1 = (int *)*param_1;
  iVar2 = *param_1;
  iVar4 = param_1[1];
  for (piVar3 = (int *)FUN_ram_4004b610(0x30080cf8); piVar3 != (int *)0x0;
      piVar3 = (int *)FUN_ram_4004b61c(0x30080cf8,piVar3)) {
    if ((((piVar3 != param_1) && (*piVar3 == *param_1)) && (piVar3[2] == param_1[2])) &&
       ((char)piVar3[1] == (char)param_1[1])) {
      return;
    }
  }
  uVar6 = 0;
  while( true ) {
    if ((*(uint *)(iVar2 + 0x28) & 0x3ffffff) >> 0x14 <= uVar6) {
      return;
    }
    iVar7 = uVar6 * 8;
    uVar5 = *(uint *)(*(int *)(iVar2 + 0xc) + iVar7 + 4);
    if (((uVar5 & 0x2000000) != 0) && ((uVar5 & 0xffffff) == param_1[2])) break;
    uVar6 = uVar6 + 1;
  }
  FUN_ram_4004b552(0x30080cf8,param_1);
  FUN_ram_4005a988(param_1);
  iVar1 = *(int *)(iVar2 + 0xc);
  FUN_ram_4004bd78(*(undefined4 *)(iVar1 + iVar7),(char)iVar4);
  iVar4 = FUN_ram_4004bfb6(*(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar7));
  if (iVar4 == 0) {
    return;
  }
  FUN_ram_4004834c(iVar2,*(undefined4 *)(iVar1 + iVar7),*(uint *)(iVar1 + iVar7 + 4) & 0xffffff);
  return;
}


/* NanoCore 1.12, address 0x400485be.
 * REA evidence: ev_e698068f5c9584174a95a4168b25051b4bafec4be34a4ec7a192b7508738b92c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400485be(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
  uVar6 = 0;
  do {
    if (uVar3 <= uVar6) {
      uVar3 = uVar3 + 1 & 0x3f;
      *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar3 << 4);
      iVar1 = FUN_ram_4005a99a(*(int *)(param_1 + 0xc),uVar3 << 3);
      *(int *)(param_1 + 0xc) = iVar1;
      uVar3 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
      while( true ) {
        uVar3 = uVar3 - 1;
        iVar7 = uVar3 * 8;
        if ((uVar3 == 0) || ((*(uint *)(iVar1 + iVar7 + -4) & 0x3000000) != 0)) break;
        *(undefined4 *)(iVar1 + uVar3 * 8) = *(undefined4 *)(iVar1 + -8 + uVar3 * 8);
        *(undefined4 *)(iVar1 + iVar7 + 4) = *(undefined4 *)(iVar7 + iVar1 + -8 + 4);
      }
      thunk_FUN_ram_40004f92(iVar1 + iVar7,0,8);
      iVar8 = *(int *)(param_1 + 0xc);
      uVar2 = FUN_ram_4005a952(0xc);
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar8 + uVar3 * 8) = uVar2;
      FUN_ram_4004bd46(*(undefined4 *)(iVar1 + uVar3 * 8));
      iVar1 = *(int *)(param_1 + 0xc);
      iVar7 = iVar7 + iVar1;
      *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) & 0xff000000 | 0x1000000 | param_4 & 0xffffff;
      uVar2 = *(undefined4 *)(iVar1 + uVar3 * 8);
LAB_ram_4004867e:
      if ((param_4 == 0) && (uVar3 = FUN_ram_4004bfc0(param_2), (uVar3 & 0x20) != 0)) {
        FUN_ram_400455dc(param_1);
      }
      FUN_ram_4004be1a(uVar2,param_2,param_3);
      FUN_ram_4004820c(param_1,param_4,param_2);
      return;
    }
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 8);
    uVar5 = puVar4[1];
    if (((uVar5 & 0x1000000) != 0) && (param_4 == (uVar5 & 0xffffff))) {
      uVar2 = *puVar4;
      goto LAB_ram_4004867e;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}


/* NanoCore 1.12, address 0x400486dc.
 * REA evidence: ev_06b4bafd4bf1a178dc3e25868982b986453e02204c202776dd0726e03dfb6280
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400486dc(int *param_1,int param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uStack_28;
  uint auStack_24 [4];
  
  iVar4 = *param_1;
  uVar7 = 0;
  while( true ) {
    if ((*(uint *)(iVar4 + 0x28) & 0x3ffffff) >> 0x14 <= uVar7) {
      return;
    }
    puVar10 = (undefined4 *)(*(int *)(iVar4 + 0xc) + uVar7 * 8);
    uVar6 = puVar10[1];
    if (((uVar6 & 0x2000000) != 0) && ((uVar6 & 0xffffff) == param_1[2])) break;
    uVar7 = uVar7 + 1;
  }
  uVar6 = (uint)*(byte *)(param_1 + 1);
  if (uVar6 == 0x61) {
    uVar8 = param_1[3];
    uVar9 = param_1[4];
    uStack_28 = uVar9;
    if (((uVar8 != 0) && (uStack_28 = uVar8, uVar9 != 0)) && (uStack_28 = uVar9, param_2 < 0x80)) {
      uStack_28 = uVar8;
    }
    goto LAB_ram_400487e8;
  }
  if (uVar6 < 0x62) {
    if (uVar6 < 0x3a) {
      if (0x1b < uVar6) {
        uVar8 = 1 << (uVar6 - 0x1c & 0x1f);
        if ((uVar8 & 0x20200081) != 0) {
LAB_ram_40048790:
          if (param_2 < 1) {
            uVar3 = (undefined2)param_1[3];
            uVar1 = *(undefined1 *)((int)param_1 + 0xe);
          }
          else {
            if (param_2 < 0xff) {
              iVar5 = 0xff - param_2;
              uStack_28 = (uint)CONCAT21(CONCAT11((char)(((uint)*(byte *)((int)param_1 + 0xe) *
                                                          iVar5 + (uint)*(byte *)((int)param_1 +
                                                                                 0x12) * param_2) *
                                                         0x10102 >> 0x18),
                                                  (char)(((uint)*(byte *)((int)param_1 + 0xd) *
                                                          iVar5 + (uint)*(byte *)((int)param_1 +
                                                                                 0x11) * param_2) *
                                                         0x10102 >> 0x18)),
                                         (char)(((uint)*(byte *)(param_1 + 3) * iVar5 +
                                                (uint)*(byte *)(param_1 + 4) * param_2) * 0x8081 >>
                                               0x17));
              goto LAB_ram_400487e8;
            }
            uVar3 = (undefined2)param_1[4];
            uVar1 = *(undefined1 *)((int)param_1 + 0x12);
          }
          uStack_28 = (uint)CONCAT12(uVar1,uVar3);
          goto LAB_ram_400487e8;
        }
        if ((uVar8 & 0x3000000) != 0) goto LAB_ram_4004875c;
      }
    }
    else {
      if (0x58 < uVar6) {
        uVar8 = 0x5a;
        goto LAB_ram_400487aa;
      }
      if ((0x3c < uVar6) && ((1 << (uVar6 - 0x3d & 0x1f) & 0x8000101U) != 0)) goto LAB_ram_40048790;
    }
LAB_ram_400487ae:
    if (param_2 == 0) {
LAB_ram_40048764:
      uStack_28 = param_1[3];
      goto LAB_ram_400487e8;
    }
    if (param_2 != 0xff) {
      uStack_28 = ((param_1[4] - param_1[3]) * param_2 >> 8) + param_1[3];
      goto LAB_ram_400487e8;
    }
  }
  else {
    if (uVar6 != 0x66) {
      uVar8 = 0x67;
LAB_ram_400487aa:
      if (uVar6 != uVar8) goto LAB_ram_400487ae;
    }
LAB_ram_4004875c:
    if (param_2 < 0xff) goto LAB_ram_40048764;
  }
  uStack_28 = param_1[4];
LAB_ram_400487e8:
  auStack_24[0] = 0;
  iVar5 = FUN_ram_4004bed6(*puVar10,uVar6,auStack_24);
  bVar2 = true;
  if ((iVar5 != 0) && (uStack_28 == auStack_24[0])) {
    bVar2 = (auStack_24[0] & 0xffffff) != (uStack_28 & 0xffffff);
  }
  FUN_ram_4004be1a(*(undefined4 *)(*(int *)(iVar4 + 0xc) + uVar7 * 8),(char)param_1[1],uStack_28);
  if (!bVar2) {
    return;
  }
  FUN_ram_4004820c(*param_1,param_1[2],(char)param_1[1]);
  return;
}


/* NanoCore 1.12, address 0x400488e6.
 * REA evidence: ev_b83b2ce3080ff525ed313e218564b07a380bf5f153e73f1cefe881c5dffffff9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400488e6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,1,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x400488f4.
 * REA evidence: ev_2189f9043986e3d51ad86e98828ff3c33b23f44e05593c3be8b99e5838156c6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400488f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,5,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048902.
 * REA evidence: ev_374f2441730203c60380143c454cd6f689712991241c2bcb8acd219f4b974820
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048902(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,2,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048910.
 * REA evidence: ev_cd82f805206760e40f1a02e7e2cf72225a88336afa141d58641e71e184bd1ee4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,8,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004891e.
 * REA evidence: ev_6ad78ec3f7e52f952c1e32f2a00582d00c800a3d6f290efe8dd3f1070b6e6408
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004891e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,9,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004892c.
 * REA evidence: ev_24eb42804e5b5fe4a818b12beed151d130289769442fd55a16642dfa57c5148c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004892c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,10,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004893a.
 * REA evidence: ev_56b3fa60b9da31addd27cee047defb23df78def952cc23c17e884d57041d518e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004893a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x68,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004894a.
 * REA evidence: ev_70388f38509f2117592c928c0ec22c67de2ffd50e81217dc23c8d36a37adb65f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004894a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x69,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004895a.
 * REA evidence: ev_a8301534936df1c25f4396ca6c36ced012a44c1b8cfbfdc5cd3ed5a5fc23011b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004895a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x6c,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004896a.
 * REA evidence: ev_dbb0958358f61f74c3cf01b154d1a92b6f392c3a556ae6c7d439a6b445a9a953
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004896a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x6d,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004897a.
 * REA evidence: ev_365e3edc0cd3aaaff57ad809367a9dd562bb5d794b9c2b68e0ee279716768fd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004897a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x6f,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004898a.
 * REA evidence: ev_bdcf2567913923fc2d621551d3006f2481c186d9a9b7cd7c3e053a3cb062fb98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004898a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x70,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x4004899a.
 * REA evidence: ev_20a481f3160b864ea82538eb937e4b80409e531d641cc55e1ee3c8e915abe588
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004899a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x10,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x400489a8.
 * REA evidence: ev_21b7b3bcbc88d2f7b717abc609dad7a4b9f984a164ea6e54958f236111a96f1a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x11,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x400489b6.
 * REA evidence: ev_6638750b44e68ade5948daf36e472c3f29815b711b096bbbd506f3c5d29b0c59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489b6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x12,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x400489c4.
 * REA evidence: ev_6866035c4dbc2dab6f0969dc86ca3a16d12169f1171841c7f0cbfd3396e19d54
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x13,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x400489d2.
 * REA evidence: ev_d43a58362c1a2ce7b13778c4c78ee757682541719594786ef1ae0e30d59057a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489d2(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_400485be(param_1,0x1c,uStack_4,param_3);
  return;
}


/* NanoCore 1.12, address 0x400489f0.
 * REA evidence: ev_1ecad615781b3b6af29dce17da24942de115ee710bdd262861094283db534cb3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x1d,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x400489fe.
 * REA evidence: ev_92e350819933d42cbdf6fa4e03b1c0b660125de328f186d9ab23ed0f0a8f05b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400489fe(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_400485be(param_1,0x31,uStack_4,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048a1e.
 * REA evidence: ev_104905fbdd829459df88a0e4776888bc018fadf8b585e31785002adc21913ad7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a1e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x32,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048a2e.
 * REA evidence: ev_5038c06fcd85ee53d0263651f925b0193dd85e284b7ed57ebceb79fa8a34ef05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a2e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x30,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048a3e.
 * REA evidence: ev_b4bf7ac964cd1a8bca6b22ec7d006a5ca597ada6571072d10078d3890647ed28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a3e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x38,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048a4e.
 * REA evidence: ev_6d71b4312b25b67c25c346ec08baceecdd090b6400274de9cf682624c8804286
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a4e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x3c,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048a5e.
 * REA evidence: ev_5a69a64713ffe46eec7b3892dc9d81651cdf35d7109c0697557e4c5a7361cd66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a5e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x41,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048a6e.
 * REA evidence: ev_6ff26a5b168bee0aab19b523c4171b09c1e28b3a8d084147c25f6fa1c18445d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a6e(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_400485be(param_1,0x3d,uStack_4,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048a8e.
 * REA evidence: ev_194253e5651ac01831753dae431afd77c9173426bd0bb348f02410a3c5bae860
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a8e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x3e,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048a9e.
 * REA evidence: ev_96704d29045fb6a42ce9ef5569c431094f7fb50f28dbbb3f5f594d2c544a0bb0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048a9e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x44,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048aae.
 * REA evidence: ev_12f9dcabe6bbd242c99e955dd809d2d3624550024d2152babd99c2effcdb7355
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048aae(undefined4 param_1,uint3 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_2;
  FUN_ram_400485be(param_1,0x58,uStack_4,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048ace.
 * REA evidence: ev_d39a35ac09e5d8fe00a893200293018ad246b838d5840f39670245a1b529c4b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048ace(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x59,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048ade.
 * REA evidence: ev_4bb332d700d9908636a363837ba27831eb8bd4943af36313a55951abbad31a5a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048ade(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x5a,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048aee.
 * REA evidence: ev_1cb8ed1a5692a4405f4f75624b7f6e97e1617303cc3fedc52706c4fa5fdf3dca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048aee(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0x5e,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048afe.
 * REA evidence: ev_461eb0d3b89e0e84331c9590bc3e3821b8480e737660b79fd75c8814765afbf7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048afe(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400485be(param_1,0xc,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x40048b0c.
 * REA evidence: ev_4e76cd6b88356f98578cce74347c37cbbbded98d75d8564dea80ba4740e8862d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048b0c(int param_1)

{
  do {
    if (param_1 == 0) {
      return;
    }
    param_1 = *(int *)(param_1 + 4);
  } while (param_1 != 0);
  return;
}


/* NanoCore 1.12, address 0x40048b18.
 * REA evidence: ev_3b1b08880fac56c286c95bde3343eabb879305b13ff1b5053951bba784ba2d65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048b18(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    param_1 = FUN_ram_40048b0c();
  }
  iVar1 = FUN_ram_4004b610(0x30080ce4);
  do {
    if (iVar1 == 0) {
      return;
    }
    for (iVar2 = 0; *(int *)(iVar1 + 0x2d0) != iVar2; iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(iVar1 + 0x2b4) + iVar2 * 4) == param_1) {
        return;
      }
    }
    iVar1 = FUN_ram_4004b61c(0x30080ce4,iVar1);
  } while( true );
}


/* NanoCore 1.12, address 0x40048b6e.
 * REA evidence: ev_3d6c2fda3dce2a9ca189ae66bffbf9eeb675944a21d848f5bc088bfecfc8cc2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40048b6e(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40048b74.
 * REA evidence: ev_ea84db9e30f459c7488b8570296e5565be6ad9897caa39177994192e565900bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40048b74(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) &&
     (((-1 < (int)param_2 || (param_2 = param_2 + *(ushort *)(piVar1 + 10), -1 < (int)param_2)) &&
      (param_2 < *(ushort *)(piVar1 + 10))))) {
    return *(undefined4 *)(*piVar1 + param_2 * 4);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40048b96.
 * REA evidence: ev_74e238a3eed4aeeaa13ec88dc687c5c033c45e50eed8a04455ca22d5208c797d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_40048b96(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined2 *)(*(int *)(param_1 + 8) + 0x28);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40048ba4.
 * REA evidence: ev_dbce718a24a938747a90271752f2ae8358fd0a6a826a659015bff288447e2864
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40048ba4(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      return -1;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 4) + 8);
    for (iVar2 = 0; iVar2 < (int)(uint)*(ushort *)(piVar1 + 10); iVar2 = iVar2 + 1) {
      if (*(int *)(*piVar1 + iVar2 * 4) == param_1) {
        return iVar2;
      }
    }
  }
  return -1;
}


/* NanoCore 1.12, address 0x40048bcc.
 * REA evidence: ev_17182dd2bd60de699cb6a7495fe327929d4221f90ad802a110e9e0dc7928e781
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048bcc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(ushort *)(param_1 + 0x2a) & 0x1000) != 0) {
    return;
  }
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x1000;
  iVar2 = FUN_ram_40044c48(param_1,0x24,0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_ram_4004af82(*(int *)(param_1 + 8) + 8);
    }
    while (iVar2 = FUN_ram_40048b74(param_1,0), iVar2 != 0) {
      FUN_ram_40048bcc();
    }
    iVar3 = FUN_ram_40043ca6(param_1);
    for (iVar2 = FUN_ram_40056ae4(0); iVar2 != 0; iVar2 = FUN_ram_40056ae4(iVar2)) {
      uVar7 = FUN_ram_40056b02(iVar2);
      if ((uVar7 & 0xfffffffd) == 1) {
        if (((param_1 == *(int *)(iVar2 + 0x70)) || (param_1 == *(int *)(iVar2 + 0x74))) ||
           (param_1 == *(int *)(iVar2 + 0x78))) {
          FUN_ram_40056b42(iVar2);
          FUN_ram_40056c5c(iVar2,param_1);
        }
        if (param_1 == *(int *)(iVar2 + 0x7c)) {
          *(undefined4 *)(iVar2 + 0x7c) = 0;
        }
      }
      if ((iVar3 == *(int *)(iVar2 + 0xac)) && (iVar5 = FUN_ram_40056b52(), param_1 == iVar5)) {
        FUN_ram_40056b42(iVar2);
        FUN_ram_40056c5c(iVar2,param_1);
      }
    }
    do {
      iVar2 = FUN_ram_4004ad8a(&LAB_ram_40048de2,param_1);
    } while (iVar2 == 1);
    FUN_ram_400442b2(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = FUN_ram_40048b18();
      iVar3 = *(int *)(iVar2 + 0x2b4);
      for (uVar7 = 0;
          (uVar7 != *(uint *)(iVar2 + 0x2d0) && (param_1 != *(int *)(iVar3 + uVar7 * 4)));
          uVar7 = uVar7 + 1) {
      }
      uVar6 = *(uint *)(iVar2 + 0x2d0) - 1;
      while (uVar7 < uVar6) {
        uVar7 = uVar7 + 1;
        *(undefined4 *)(iVar3 + -4 + uVar7 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
      }
      *(uint *)(iVar2 + 0x2d0) = uVar6;
      uVar4 = FUN_ram_4005a99a(iVar3,uVar6 * 4);
      *(undefined4 *)(iVar2 + 0x2b4) = uVar4;
    }
    else {
      uVar7 = FUN_ram_40048ba4(param_1);
      while( true ) {
        piVar1 = *(int **)(*(int *)(param_1 + 4) + 8);
        iVar2 = *piVar1;
        uVar6 = *(ushort *)(piVar1 + 10) - 1;
        if ((int)uVar6 <= (int)(uVar7 & 0xffff)) break;
        uVar7 = (uVar7 & 0xffff) + 1;
        *(undefined4 *)(iVar2 + uVar7 * 4 + -4) = *(undefined4 *)(iVar2 + uVar7 * 4);
      }
      *(short *)(piVar1 + 10) = (short)(uVar6 * 0x10000 >> 0x10);
      iVar2 = FUN_ram_4005a99a(iVar2,(uVar6 & 0xffff) << 2);
      *piVar1 = iVar2;
    }
    FUN_ram_4005a988(param_1);
    return;
  }
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xefff;
  return;
}


/* NanoCore 1.12, address 0x40048d5c.
 * REA evidence: ev_b369be2f793a2fcaf2c739b48649153f20cac40f8e388dc16f111d7946b8d21d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048d5c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if ((*(ushort *)(param_1 + 0x2a) & 0x1000) != 0) {
    return;
  }
  FUN_ram_400455dc();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    iVar2 = FUN_ram_40048b18(param_1);
    if (iVar2 == 0) {
      return;
    }
    bVar1 = *(int *)(iVar2 + 0x2b8) == param_1;
  }
  else {
    bVar1 = false;
    iVar2 = 0;
  }
  FUN_ram_40048bcc(param_1);
  if ((iVar3 != 0) && ((*(ushort *)(iVar3 + 0x2a) & 0x1000) == 0)) {
    FUN_ram_400475d4(iVar3);
    FUN_ram_40044c48(iVar3,0x25,0);
    FUN_ram_40044c48(iVar3,0x27,0);
  }
  if (bVar1) {
    *(undefined4 *)(iVar2 + 0x2b8) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40048de6.
 * REA evidence: ev_1cc07dddc7a8ba6fd1e24b2dfd2cfcce7e5bd64f4ac4da54e22e9334a3ae5ff4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048de6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) &&
      (((iVar2 = FUN_ram_40048b96(iVar1), -1 < param_2 || (param_2 = param_2 + iVar2, -1 < param_2))
       && (param_2 < iVar2)))) && (iVar2 = FUN_ram_40048ba4(param_1), iVar2 != param_2)) {
    iVar3 = **(int **)(iVar1 + 8);
    if (param_2 < iVar2) {
      do {
        *(undefined4 *)(iVar3 + iVar2 * 4) = *(undefined4 *)(iVar3 + -4 + iVar2 * 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != param_2);
    }
    else {
      do {
        *(undefined4 *)(iVar3 + iVar2 * 4) = *(undefined4 *)(iVar3 + 4 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 != param_2);
    }
    *(int *)(iVar3 + param_2 * 4) = param_1;
    FUN_ram_40044c48(iVar1,0x25,0);
    FUN_ram_400455dc(iVar1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40048e74.
 * REA evidence: ev_51a85fdc1e626dd59de770f295a0fdcd2e7fc161414c258b02d982b08c47a558
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048e74(int param_1)

{
  FUN_ram_4004d498(param_1,0x3a,0);
  if (*(code **)(param_1 + 0x2c) == (code *)0x0) {
    do {
    } while (*(int *)(param_1 + 0x30) != 0);
  }
  else {
    (**(code **)(param_1 + 0x2c))(param_1);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_ram_4004d498(param_1,0x3b,0);
  return;
}


/* NanoCore 1.12, address 0x40048eaa.
 * REA evidence: ev_fcabc11eab1fd1b5e72946f24da9f74af273d56361a77bbe3a792747f1e3ed38
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048eaa(undefined4 *param_1)

{
  FUN_ram_4004dcca(*param_1,*(undefined1 *)(param_1 + 5),(param_1[3] - param_1[1]) + 1,
                   (param_1[4] - param_1[2]) + 1,0);
  return;
}


/* NanoCore 1.12, address 0x40048ec6.
 * REA evidence: ev_4c2b584dd7c6870b98eb3740e761c61251062a401567750b79eb091db5c43006
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40048ec6(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4004a6a6(param_1,param_2 + 0x14,0);
  if (((iVar1 != 0) && (iVar1 = FUN_ram_40043c8a(param_2,1), iVar1 == 0)) &&
     (iVar1 = FUN_ram_40044b3c(param_2), iVar1 == 0)) {
    iStack_18 = 0;
    uStack_14 = param_1;
    FUN_ram_40044c48(param_2,0x15,&iStack_18);
    if (iStack_18 != 2) {
      iVar1 = FUN_ram_40048b96(param_2);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        iVar2 = FUN_ram_40048ec6(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar1 * 4));
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      if (iStack_18 == 0) {
        return param_2;
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40048f3c.
 * REA evidence: ev_6af2aff3cb378c6bb605ed4432d315f82bbb9f02b143ebcb1314bea666af15b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048f3c(void)

{
  return;
}


/* NanoCore 1.12, address 0x40048f3e.
 * REA evidence: ev_98d5c115de4455ce0349b48346bc5a353187d05f75dd3baca386054765da0aa8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40048f3e(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [4];
  int iStack_f4;
  undefined1 auStack_e8 [4];
  int iStack_e4;
  int iStack_dc;
  undefined1 auStack_d8 [4];
  int iStack_d4;
  int iStack_cc;
  undefined1 auStack_c8 [28];
  undefined1 auStack_ac [16];
  int iStack_9c;
  int aiStack_98 [7];
  undefined4 uStack_7c;
  
  iVar7 = param_1 + 0x18;
  FUN_ram_4000303c(auStack_138,iVar7,0x10);
  FUN_ram_4004514a(param_2,auStack_118);
  uVar1 = FUN_ram_40044ae8(param_2);
  FUN_ram_4004a4ca(auStack_118,uVar1,uVar1);
  iVar2 = FUN_ram_4004a4fe(auStack_128,auStack_138,auStack_118);
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_4000303c(iVar7,auStack_128,0x10);
  FUN_ram_40044c48(param_2,0x17,param_1);
  FUN_ram_40044c48(param_2,0x18,param_1);
  FUN_ram_40044c48(param_2,0x19,param_1);
  iVar2 = FUN_ram_40043c8a(param_2,0x100000);
  puVar3 = auStack_118;
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)(param_2 + 0x14);
  }
  iVar2 = FUN_ram_4004a4fe(auStack_108,auStack_138,puVar3);
  if (iVar2 == 0) goto LAB_ram_40049010;
  iVar2 = FUN_ram_40048b96(param_2);
  if (iVar2 == 0) {
LAB_ram_40048fe8:
    FUN_ram_4000303c(iVar7,auStack_128,0x10);
  }
  else {
    FUN_ram_4000303c(iVar7,auStack_108,0x10);
    aiStack_98[0] = FUN_ram_40047b68(param_2,0,0x2d);
    if ((aiStack_98[0] == 0) ||
       (iVar6 = FUN_ram_40047b68(param_2,0,0xc), aiStack_98[0] = iVar6, iVar6 == 0)) {
      iVar6 = 0;
      do {
        iVar4 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_ram_400491ec(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar4));
      } while (iVar2 != iVar6);
      goto LAB_ram_40048fe8;
    }
    FUN_ram_4004ee22(auStack_c8);
    iVar9 = param_2 + 0x14;
    iStack_9c = iVar6;
    FUN_ram_4000303c(auStack_ac,iVar9,0x10);
    FUN_ram_4004e31e(aiStack_98);
    iVar8 = *(int *)(param_2 + 0x20);
    iVar5 = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14);
    iVar4 = iVar8 - *(int *)(param_2 + 0x18);
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + 1 >> 1;
    if (iVar6 < iVar4) {
      iVar4 = iVar6;
    }
    FUN_ram_4000303c(auStack_f8,iVar9,0x10);
    iStack_f4 = (iVar8 - iVar4) + 1;
    iVar6 = FUN_ram_4004a4fe(auStack_f8,auStack_f8,auStack_138);
    if (iVar6 != 0) {
      uVar1 = FUN_ram_4004d952(param_1,0x10,auStack_f8);
      iVar6 = 0;
      do {
        iVar5 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_ram_400491ec(uVar1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar5));
      } while (iVar2 != iVar6);
      FUN_ram_40044c48(param_2,0x1a,uVar1);
      FUN_ram_40044c48(param_2,0x1b,uVar1);
      FUN_ram_40044c48(param_2,0x1c,uVar1);
      FUN_ram_4004ee2c(uVar1,auStack_c8);
      uStack_7c = uVar1;
      FUN_ram_4004e57a(param_1,aiStack_98,auStack_f8);
    }
    FUN_ram_4000303c(auStack_e8,iVar9,0x10);
    iStack_dc = iStack_e4 + iVar4 + -1;
    iVar6 = FUN_ram_4004a4fe(auStack_e8,auStack_e8,auStack_138);
    if (iVar6 != 0) {
      uVar1 = FUN_ram_4004d952(param_1,0x10,auStack_e8);
      iVar6 = 0;
      do {
        iVar5 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_ram_400491ec(uVar1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar5));
      } while (iVar2 != iVar6);
      FUN_ram_40044c48(param_2,0x1a,uVar1);
      FUN_ram_40044c48(param_2,0x1b,uVar1);
      FUN_ram_40044c48(param_2,0x1c,uVar1);
      FUN_ram_4004ee2c(uVar1,auStack_c8);
      uStack_7c = uVar1;
      FUN_ram_4004e57a(param_1,aiStack_98,auStack_e8);
    }
    FUN_ram_4000303c(auStack_d8,iVar9,0x10);
    iStack_d4 = iStack_d4 + iVar4;
    iStack_cc = iStack_cc - iVar4;
    iVar6 = FUN_ram_4004a4fe(auStack_d8,auStack_d8,auStack_138);
    if (iVar6 == 0) goto LAB_ram_40049010;
    FUN_ram_4000303c(iVar7,auStack_d8,0x10);
    iVar6 = 0;
    do {
      iVar4 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      FUN_ram_400491ec(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar4));
    } while (iVar2 != iVar6);
  }
  FUN_ram_40044c48(param_2,0x1a,param_1);
  FUN_ram_40044c48(param_2,0x1b,param_1);
  FUN_ram_40044c48(param_2,0x1c,param_1);
LAB_ram_40049010:
  FUN_ram_4000303c(iVar7,auStack_138,0x10);
  return;
}


