/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40015000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40015022.
 * REA evidence: ev_47e97edc1c9e5b90cafc9a485b5a0d8afc4d9f647585d7aa8f624c93eaf3b6e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40015022(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4009045e();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_40014f56(param_1);
    FUN_ram_40090524();
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4001504a.
 * REA evidence: ev_ac07f02aea03f3440b81adf5ca29584f250a486bbb327761186be67b866848f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4001504a(undefined1 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                int *param_6)

{
  int iVar1;
  
  iVar1 = *param_6;
  if ((param_3 + 2U & 0xff) + iVar1 <= param_5) {
    *param_6 = iVar1 + 1;
    *(undefined1 *)(param_4 + iVar1) = param_1;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(char *)(param_4 + iVar1) = (char)param_3;
    FUN_ram_4000304c(*param_6 + param_4);
    *param_6 = *param_6 + param_3;
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x400150a0.
 * REA evidence: ev_df56c2e8531b3f94c939fa8f6fc1b71437d66e2276b892f61a186198c28311ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400150a0(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar1 = (undefined2 *)memset(param_1,0,0x340);
  puVar3 = puVar1 + 0xe;
  *puVar1 = 7;
  iVar2 = 0;
  do {
    *(char *)((int)puVar1 + iVar2 + 0x12) = (char)iVar2;
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x32;
  } while (iVar2 != 8);
  *(undefined4 *)(puVar1 + 0x19e) = 0xffffff64;
  return;
}


/* NanoCore 1.11, address 0x400150e4.
 * REA evidence: ev_964ce354a4247639123aa8165854aeb510220c082cdde42b5474164281ed612a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400150e4(undefined2 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  char cVar6;
  undefined2 *puVar7;
  undefined2 auStack_8c [2];
  uint uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  char cStack_80;
  
  auStack_8c[0] = *param_1;
  uStack_88 = 0;
  iVar2 = FUN_ram_4001504a(1,auStack_8c,2,param_2,param_3,&uStack_88);
  if (((iVar2 == 0) &&
      (iVar2 = FUN_ram_4001504a(2,param_1 + 1,0x10,param_2,param_3,&uStack_88), iVar2 == 0)) &&
     (iVar2 = FUN_ram_4001504a(3,param_1 + 9,8,param_2,param_3,&uStack_88), iVar2 == 0)) {
    puVar5 = param_1 + 0x12;
    iVar2 = 0;
    do {
      uStack_83 = *(undefined1 *)(puVar5 + -4);
      cVar1 = *(char *)((int)puVar5 + -5);
      uStack_84 = (undefined1)iVar2;
      uStack_82 = *(undefined1 *)((int)puVar5 + -7);
      uStack_81 = *(undefined1 *)(puVar5 + -3);
      puVar3 = &uStack_84;
      puVar7 = puVar5;
      cStack_80 = cVar1;
      for (cVar6 = '\0'; cVar1 != cVar6; cVar6 = cVar6 + '\x01') {
        puVar3[5] = *(undefined1 *)(puVar7 + -2);
        FUN_ram_4000304c(puVar3 + 6,puVar7,4);
        puVar7 = puVar7 + 4;
        puVar3 = puVar3 + 5;
      }
      iVar4 = FUN_ram_4001504a(0x10,&uStack_84,(cVar1 + '\x01') * '\x05',param_2,param_3,&uStack_88)
      ;
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 0x32;
    } while (iVar2 != 8);
    iVar2 = FUN_ram_4001504a(0x22,param_1 + 0x19e,1,param_2,param_3,&uStack_88);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_ram_4001504a(0x20,(int)param_1 + 0x33d,1,param_2,param_3,&uStack_88),
        iVar2 == 0)) &&
       ((iVar2 = FUN_ram_4001504a(0x21,param_1 + 0x19f,1,param_2,param_3,&uStack_88), iVar2 == 0 &&
        ((iVar2 = FUN_ram_4001504a(0x24,(int)param_1 + 0x33f,1,param_2,param_3,&uStack_88),
         iVar2 == 0 && (uStack_88 < 0x401)))))) {
      *param_4 = uStack_88;
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40015274.
 * REA evidence: ev_c6918589984a359c38efc0021c074d25ca3ae05d24225e3009415708e748fdb0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40015274(undefined2 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_ram_400150a0();
  uVar9 = 0;
LAB_ram_400152b2:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar4 = uVar9 + 2;
            if (param_3 < uVar4) {
              return 0;
            }
            uVar8 = (uint)*(byte *)(param_2 + uVar9 + 1);
            bVar7 = *(byte *)(param_2 + uVar9);
            uVar9 = uVar8 + uVar4;
            if (param_3 < uVar9) {
              return 0xffffffff;
            }
            iVar2 = param_2 + uVar4;
            if (bVar7 != 0x20) break;
            if (uVar8 == 1) {
              *(undefined1 *)((int)param_1 + 0x33d) = *(undefined1 *)(param_2 + uVar4);
            }
          }
          if (bVar7 < 0x21) break;
          if (bVar7 == 0x22) {
            if (uVar8 == 1) {
              bVar7 = *(byte *)(param_2 + uVar4);
              if (100 < bVar7) {
                bVar7 = 100;
              }
              *(byte *)(param_1 + 0x19e) = bVar7;
            }
          }
          else if (bVar7 == 0x24) {
            if (uVar8 == 1) {
              *(undefined1 *)((int)param_1 + 0x33f) = *(undefined1 *)(param_2 + uVar4);
            }
          }
          else if ((bVar7 == 0x21) && (uVar8 == 1)) {
            *(undefined1 *)(param_1 + 0x19f) = *(undefined1 *)(param_2 + uVar4);
          }
        }
        if (bVar7 == 3) goto LAB_ram_40015400;
        if (bVar7 < 4) break;
        if (((bVar7 == 0x10) && (4 < uVar8)) &&
           (uVar4 = (uint)*(byte *)(param_2 + uVar4), uVar4 < 8)) {
          *(undefined1 *)(param_1 + uVar4 * 0x32 + 0xe) = *(undefined1 *)(iVar2 + 1);
          *(undefined1 *)((int)param_1 + uVar4 * 100 + 0x1d) = *(undefined1 *)(iVar2 + 2);
          *(undefined1 *)(param_1 + uVar4 * 0x32 + 0xf) = *(undefined1 *)(iVar2 + 3);
          uVar5 = (uint)*(byte *)(iVar2 + 4);
          if (0xc < uVar5) {
            uVar5 = 0xc;
          }
          iVar2 = iVar2 + 6;
          *(char *)((int)param_1 + uVar4 * 100 + 0x1f) = (char)uVar5;
          puVar6 = param_1 + uVar4 * 0x32 + 0x12;
          uVar4 = 0;
          while (((uVar4 & 0xff) < uVar5 && ((uVar4 + 2) * 5 <= uVar8))) {
            *(undefined1 *)(puVar6 + -2) = *(undefined1 *)(iVar2 + -1);
            iVar1 = FUN_ram_4000304c(puVar6,iVar2,4);
            puVar6 = (undefined2 *)(iVar1 + 8);
            iVar2 = iVar2 + 5;
            uVar4 = uVar4 + 1;
          }
        }
      }
      if (bVar7 != 1) break;
      if (uVar8 == 2) {
        *param_1 = CONCAT11(*(undefined1 *)(iVar2 + 1),*(undefined1 *)(param_2 + uVar4));
      }
    }
  } while ((bVar7 != 2) || (uVar8 != 0x10));
  uVar3 = 0x10;
  puVar6 = param_1 + 1;
  goto LAB_ram_40015318;
LAB_ram_40015400:
  if (uVar8 == 8) {
    uVar3 = 8;
    puVar6 = param_1 + 9;
LAB_ram_40015318:
    FUN_ram_4000304c(puVar6,iVar2,uVar3);
  }
  goto LAB_ram_400152b2;
}


/* NanoCore 1.11, address 0x40015446.
 * REA evidence: ev_acf9776c2dfa98a9464d7621ef4be38bcf59f89a1417805ee804749801c0006e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015446(void)

{
  _DAT_ram_30069954 = _DAT_ram_30069954 * 0x19660d + 0x3c6ef35f;
  return;
}


/* NanoCore 1.11, address 0x40015468.
 * REA evidence: ev_61f2a628740e29d24cc4166025797f9ad620d904cf743aff8d53b1e93fde9d7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40015468(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = _DAT_ram_30069984;
  iVar1 = _DAT_ram_30069980;
  iVar4 = 0;
  do {
    uVar3 = *(uint *)(iVar2 + iVar4 * 4);
    *(ushort *)(iVar1 + iVar4 * 2) =
         (ushort)(((uVar3 & 0xffffff) >> 0x13) << 0xb) | (ushort)(((uVar3 & 0xffff) >> 10) << 5) |
         (ushort)((uVar3 << 0x18) >> 0x1b);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x12c00);
  return;
}


/* NanoCore 1.11, address 0x400154a2.
 * REA evidence: ev_1ceaccfc94efc92dbac164190f32fb35334f2167c9dd88d90c8cbb7753fcdb5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400154a2(uint param_1,uint param_2,undefined4 param_3)

{
  if ((param_1 < 0x140) && (param_2 < 0xf0)) {
    *(undefined4 *)(_DAT_ram_30069984 + (param_1 + param_2 * 0x140) * 4) = param_3;
  }
  return;
}


/* NanoCore 1.11, address 0x400154c8.
 * REA evidence: ev_6ff06a6989c571991ee8b8c8892124cde6648c521a9d66af395ff99012453278
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400155be) */
/* WARNING: Removing unreachable block (ram,0x400155b4) */
/* WARNING: Removing unreachable block (ram,0x400155c6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400154c8(float param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = _DAT_ram_30069984;
  iVar8 = 0;
  do {
    *(undefined4 *)(iVar2 + iVar8 * 4) = 0xff101015;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x12c00);
  iVar2 = 0;
  do {
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      FUN_ram_400154a2(iVar2,iVar8,0xff1a1a25);
      iVar8 = iVar1;
    } while (iVar1 != 0xf0);
    iVar2 = iVar2 + 0x14;
  } while (iVar2 != 0x140);
  iVar2 = 0;
  do {
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      FUN_ram_400154a2(iVar8,iVar2,0xff1a1a25);
      iVar8 = iVar1;
    } while (iVar1 != 0x140);
    iVar2 = iVar2 + 0x14;
  } while (iVar2 != 0xf0);
  param_1 = param_1 * DAT_ram_40094e7c;
  iVar8 = (int)param_1 + -10;
  iVar2 = 0;
  do {
    FUN_ram_400154a2(iVar2,iVar8,0xff00ff00);
    iVar1 = iVar2 + 1;
    FUN_ram_400154a2(iVar2,(int)param_1 + -9,0xff00ff00);
    iVar2 = iVar1;
  } while (iVar1 != 0x140);
  iVar2 = 6;
  do {
    uVar3 = FUN_ram_40015446();
    uVar4 = FUN_ram_40015446();
    iVar1 = 0;
    uVar5 = FUN_ram_40015446();
    uVar6 = FUN_ram_40015446();
    do {
      iVar9 = 0;
      do {
        iVar7 = iVar9 + uVar3 % 0x140;
        iVar9 = iVar9 + 1;
        FUN_ram_400154a2(iVar7,(iVar8 - uVar4 % 0xf) + iVar1,0xff00ff00);
      } while (iVar9 <= (int)(uVar5 % 0x1e));
      iVar1 = iVar1 + 1;
    } while (iVar1 <= (int)(uVar6 & 3));
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* NanoCore 1.11, address 0x4001561c.
 * REA evidence: ev_a921c39994220679057845029546058465acfd936ebb7121301eb225c23a6f23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001561c(void)

{
  if (_DAT_ram_3006995c != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006995c = 0;
  }
  if (_DAT_ram_30069960 != 0) {
    FUN_ram_40048c64();
    _DAT_ram_30069960 = 0;
    _DAT_ram_30069964 = 0;
  }
  if (_DAT_ram_30069980 != 0) {
    if (DAT_ram_30069988 == '\0') {
      FUN_ram_400056b4();
    }
    else {
      FUN_ram_4002c30c();
    }
    _DAT_ram_30069980 = 0;
    DAT_ram_30069988 = '\0';
  }
  if (_DAT_ram_30069984 != 0) {
    if (DAT_ram_30069989 == '\0') {
      FUN_ram_400056b4();
    }
    else {
      FUN_ram_4002c30c();
    }
    _DAT_ram_30069984 = 0;
    DAT_ram_30069989 = '\0';
  }
  return;
}


/* NanoCore 1.11, address 0x400156dc.
 * REA evidence: ev_2ac21dffbf7dd0c0921efbe332be67516bd776fad3eecdf957ca5515de7d8d23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40015a36) */
/* WARNING: Removing unreachable block (ram,0x40015a4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400156dc(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  code *UNRECOVERED_JUMPTABLE;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_00000100;
  float fVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  
  if (((_DAT_ram_30069980 != 0) && (_DAT_ram_30069984 != 0)) && (_DAT_ram_30069964 != 0)) {
    iVar15 = FUN_ram_400042ea();
    lVar5 = (ulonglong)(uint)(iVar15 - _DAT_ram_3006994c) * 1000;
    uVar16 = FUN_ram_40003b9c((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),1000,0);
    fVar2 = DAT_ram_40094614;
    iVar14 = _DAT_ram_30069984;
    if (uVar16 < 5000) {
      if (uVar16 < 1000) {
        fVar2 = (float)(int)uVar16 / DAT_ram_40094e80;
        if (DAT_ram_40094604 < (float)(int)uVar16 / DAT_ram_40094e80) {
          fVar2 = DAT_ram_40094604;
        }
        _DAT_ram_30069950 = iVar15;
        FUN_ram_400154c8(fVar2);
      }
      else {
        fVar34 = 0.0;
        fVar28 = (float)(int)(uVar16 - 1000) / DAT_ram_40094e80;
        if (uVar16 - 1000 < 3000) {
          fVar34 = (float)(uint)(iVar15 - _DAT_ram_30069950) / DAT_ram_40094e80;
        }
        if (DAT_ram_40094614 < fVar28) {
          fVar28 = DAT_ram_40094614;
        }
        iVar18 = 0;
        _DAT_ram_30069950 = iVar15;
        do {
          *(undefined4 *)(iVar14 + iVar18 * 4) = 0xff0b1021;
          fVar33 = DAT_ram_40094e9c;
          fVar8 = DAT_ram_40094e90;
          fVar3 = DAT_ram_40094e8c;
          fVar32 = DAT_ram_40094e88;
          iVar18 = iVar18 + 1;
        } while (iVar18 != 0x12c00);
        fVar4 = fVar28 * DAT_ram_40094e88;
        iVar14 = 0;
        fVar11 = in_register_00000100;
        do {
          fVar31 = (float)iVar14;
          iVar15 = 0;
          fVar29 = (float)FUN_ram_400009d2(fVar31 * fVar3 + fVar28 * fVar2);
          fVar29 = fVar29 * fVar8 + DAT_ram_40094e94;
          fVar30 = (float)FUN_ram_400009d2((fVar31 * DAT_ram_40094e98 - in_register_00000100) +
                                           (float)PTR_entry_ram_40094618);
          fVar30 = fVar30 * fVar33 + DAT_ram_40094ea0;
          fVar31 = (float)FUN_ram_400009d2(fVar31 * DAT_ram_40094ea4 + fVar4 + fVar32);
          fVar7 = DAT_ram_40094eb0;
          fVar31 = fVar31 * DAT_ram_40094ea8 + DAT_ram_40094eac;
          fVar35 = DAT_ram_4009463c;
          do {
            fVar1 = (float)iVar15;
            if (fVar1 < fVar31) {
              if (fVar30 <= fVar1) {
                uVar25 = 0xffffffff;
                if (fVar30 + fVar35 <= fVar1) {
                  if (fVar30 + fVar7 <= fVar1) {
                    uVar25 = 0xff0059b3;
                  }
                  else {
                    uVar25 = 0xff0099cc;
                  }
                }
                goto LAB_ram_4001594e;
              }
              if (fVar29 <= fVar1) {
                uVar25 = 0xffffffff;
                if ((fVar29 + in_register_00000100 <= fVar1) &&
                   (uVar25 = 0xff004080, fVar1 < fVar29 + fVar7)) goto LAB_ram_4001599c;
                goto LAB_ram_4001594e;
              }
            }
            else {
              uVar25 = 0xffffffff;
              if (fVar31 + fVar35 <= fVar1) {
                if (fVar31 + fVar7 <= fVar1) {
LAB_ram_4001599c:
                  uVar25 = 0xff0073e6;
                }
                else {
                  uVar25 = 0xff4db8ff;
                }
              }
LAB_ram_4001594e:
              iVar18 = 0;
              do {
                iVar23 = 0;
                do {
                  FUN_ram_400154a2(iVar14 + iVar23,iVar15 + iVar18,uVar25);
                  iVar23 = iVar23 + 1;
                } while (iVar23 != 4);
                iVar18 = iVar18 + 1;
                fVar35 = DAT_ram_4009463c;
              } while (iVar18 != 4);
            }
            fVar10 = DAT_ram_40094eb8;
            fVar9 = DAT_ram_40094eb4;
            fVar1 = DAT_ram_40094634;
            iVar15 = iVar15 + 4;
          } while (iVar15 != 0xf0);
          iVar14 = iVar14 + 4;
        } while (iVar14 != 0x140);
        puVar13 = &DAT_ram_3006994c;
        do {
          fVar32 = -(fVar34 * (float)*(undefined8 *)(puVar13 + 0x48)) +
                   (float)*(undefined8 *)(puVar13 + 0x44);
          *(ulonglong *)(puVar13 + 0x44) = (ulonglong)(uint)fVar32;
          if (fVar32 < fVar9) {
            uVar16 = FUN_ram_40015446();
            *(ulonglong *)(puVar13 + 0x44) = (ulonglong)(uint)(float)(uVar16 % 0x32 + 0xf0);
            uVar16 = FUN_ram_40015446();
            *(ulonglong *)(puVar13 + 0x40) = (ulonglong)(uint)(float)(uVar16 % 0x140);
          }
          iVar14 = -3;
          fVar32 = (float)FUN_ram_400009d2(fVar28 * fVar2 + (float)*(undefined8 *)(puVar13 + 0x4c));
          uVar36 = *(undefined8 *)(puVar13 + 0x44);
          iVar15 = (int)(fVar32 * fVar10 + (float)*(undefined8 *)(puVar13 + 0x40));
          do {
            iVar18 = -3;
            do {
              if (iVar14 * iVar14 + iVar18 * iVar18 < 10) {
                FUN_ram_400154a2(iVar18 + iVar15,iVar14 + (int)(float)uVar36,0xffaaddff);
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 != 4);
            iVar14 = iVar14 + 1;
          } while (iVar14 != 1);
          iVar14 = -2;
          do {
            iVar18 = 1;
            do {
              if (((int)(fVar28 * fVar33) + iVar18 & 3U) == 0) {
                fVar32 = (float)FUN_ram_400009d2((float)iVar18 * fVar1 +
                                                 fVar28 * fVar10 +
                                                 (float)*(undefined8 *)(puVar13 + 0x4c));
                FUN_ram_400154a2((int)(fVar32 + fVar32) + iVar14 + iVar15,
                                 (int)(float)uVar36 + iVar18,0xff77bbff);
              }
              fVar29 = DAT_ram_40094ec4;
              fVar31 = DAT_ram_40094ec0;
              fVar32 = DAT_ram_40094ebc;
              iVar18 = iVar18 + 1;
            } while (iVar18 != 8);
            iVar14 = iVar14 + 2;
          } while (iVar14 != 4);
          puVar13 = puVar13 + 0x10;
        } while (puVar13 != (undefined1 *)0x30069a0c);
        iVar14 = 0;
        do {
          fVar34 = (float)iVar14;
          iVar15 = -1;
          fVar33 = (float)FUN_ram_400009d2((fVar34 / fVar32) * fVar31);
          fVar30 = (float)FUN_ram_400009d2(fVar34 * fVar29 - fVar28 * fVar8);
          fVar34 = (float)FUN_ram_40000712(fVar34 * fVar3 + fVar4);
          do {
            iVar18 = iVar15 + (int)(fVar33 * fVar30 * fVar34 * fVar11 + fVar11);
            FUN_ram_400154a2(iVar14,iVar18,0xff00ffcc);
            iVar15 = iVar15 + 1;
            FUN_ram_400154a2(iVar14 + 1,iVar18,0xff00ffcc);
            fVar7 = _DAT_ram_40094638;
          } while (iVar15 != 2);
          iVar14 = iVar14 + 2;
        } while (iVar14 != 0x140);
        if (_DAT_ram_40094638 <= fVar28) {
          FUN_ram_400009d2((fVar28 - _DAT_ram_40094638) * fVar2);
        }
        else {
          FUN_ram_40000d44(DAT_ram_40094604 - fVar28 / _DAT_ram_40094638,fVar2);
        }
        fVar34 = DAT_ram_40094ed4;
        fVar2 = DAT_ram_40094634;
        bVar6 = false;
        while( true ) {
          iVar15 = 0x16;
          iVar14 = 0;
          do {
            if (fVar7 <= fVar28) {
              FUN_ram_400009d2((fVar28 - fVar7) * fVar34 - (float)iVar14 * fVar2);
            }
            puVar12 = (&PTR_DAT_ram_40094d74_ram_40094ef8)[(&DAT_ram_40094f10)[iVar14]];
            iVar23 = iVar15 + 0xc;
            iVar18 = 0;
            do {
              iVar19 = 0;
              iVar17 = iVar23;
              do {
                if (puVar12[iVar19 + iVar18 * 6] == '#') {
                  iVar27 = iVar17;
                  if (!bVar6) {
                    iVar27 = iVar17 + 5;
                  }
                  iVar20 = 0;
                  do {
                    iVar22 = 0;
                    do {
                      FUN_ram_400154a2(iVar22 + iVar27);
                      iVar22 = iVar22 + 1;
                    } while (iVar22 != 5);
                    iVar20 = iVar20 + 1;
                  } while (iVar20 != 5);
                }
                iVar27 = _DAT_ram_30069984;
                iVar19 = iVar19 + 1;
                iVar17 = iVar17 + 5;
              } while (iVar19 != 6);
              iVar18 = iVar18 + 1;
              iVar23 = iVar23 + -2;
            } while (iVar18 != 7);
            iVar15 = iVar15 + 0x23;
            iVar14 = iVar14 + 1;
          } while (iVar15 != 0x12e);
          if (bVar6) break;
          bVar6 = true;
        }
        iVar14 = 0;
        uVar25 = 0xff111111;
        while( true ) {
          iVar15 = 0;
          do {
            *(undefined4 *)(iVar27 + iVar14 * 0x500 + iVar15 * 4) = uVar25;
            fVar34 = DAT_ram_40094e84;
            fVar2 = DAT_ram_40094634;
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0x140);
          iVar14 = iVar14 + 1;
          if (iVar14 == 0xf) break;
          uVar25 = 0xff111111;
          if (iVar14 == 0xe) {
            uVar25 = 0xff333333;
          }
        }
        uVar25 = 0xffff0000;
        if (fVar28 <= DAT_ram_40094edc) {
          uVar25 = 0xff330000;
        }
        uVar26 = 0xffff0000;
        if (fVar28 <= DAT_ram_40094634) {
          uVar26 = 0xff330000;
        }
        iVar14 = 0;
        do {
          uVar24 = uVar26;
          if (((iVar14 != 0) && (uVar24 = uVar25, iVar14 != 1)) &&
             (uVar24 = 0xff00ff00, fVar28 < fVar34)) {
            uVar24 = 0xff330000;
          }
          iVar15 = -2;
          do {
            iVar18 = -2;
            do {
              if (iVar15 * iVar15 + iVar18 * iVar18 < 5) {
                FUN_ram_400154a2(iVar14 * 0xe + 0x113 + iVar18,iVar15 + 7,uVar24);
              }
              fVar32 = DAT_ram_40094ef0;
              iVar23 = _DAT_ram_30069984;
              iVar18 = iVar18 + 1;
            } while (iVar18 != 3);
            iVar15 = iVar15 + 1;
          } while (iVar15 != 3);
          iVar14 = iVar14 + 1;
        } while (iVar14 != 3);
        if (DAT_ram_40094ee0 <= fVar28) {
          if (fVar28 < DAT_ram_40094ee8) {
            iVar14 = 0;
            fVar2 = (DAT_ram_40094ee8 - fVar28) / DAT_ram_40094eec;
            do {
              uVar16 = *(uint *)(iVar23 + iVar14 * 4);
              fVar28 = (float)((uVar16 & 0xffffff) >> 0x10);
              fVar34 = (float)((uVar16 & 0xffff) >> 8);
              fVar28 = fVar2 * (fVar32 - fVar28) + fVar28;
              fVar34 = fVar2 * (fVar32 - fVar34) + fVar34;
              fVar3 = fVar2 * (fVar32 - (float)(uVar16 & 0xff)) + (float)(uVar16 & 0xff);
              *(uint *)(iVar23 + iVar14 * 4) =
                   uVar16 & 0xff000000 | (uint)(-1 < (int)fVar3) * (int)fVar3 & 0xff |
                   ((uint)(-1 < (int)fVar28) * (int)fVar28 & 0xff) << 0x10 |
                   ((uint)(-1 < (int)fVar34) * (int)fVar34 & 0xff) << 8;
              iVar14 = iVar14 + 1;
            } while (iVar14 != 0x12c00);
          }
          fVar2 = DAT_ram_40094ef4;
          iVar14 = 0;
          do {
            iVar15 = 0;
            puVar21 = (uint *)(iVar23 + iVar14 * 4);
            do {
              uVar16 = *puVar21;
              iVar15 = iVar15 + 1;
              fVar28 = (float)((uVar16 & 0xffffff) >> 0x10) * fVar2;
              fVar34 = (float)(uVar16 & 0xff) * fVar2;
              fVar32 = (float)((uVar16 & 0xffff) >> 8) * fVar2;
              *puVar21 = ((uint)(-1 < (int)fVar28) * (int)fVar28 & 0xff) << 0x10 |
                         (uint)(-1 < (int)fVar34) * (int)fVar34 & 0xff | uVar16 & 0xff000000 |
                         ((uint)(-1 < (int)fVar32) * (int)fVar32 & 0xff) << 8;
              puVar21 = puVar21 + 1;
            } while (iVar15 != 0x140);
            iVar14 = iVar14 + 0x280;
          } while (iVar14 != 0x12c00);
        }
        else {
          iVar14 = 0;
          fVar28 = (fVar28 / DAT_ram_40094ee0) * DAT_ram_40094ee4;
          do {
            uVar16 = (int)(iVar14 - 0x78U) >> 0x1f;
            uVar25 = 0xffffffff;
            if ((int)(fVar28 * fVar2) <= (int)((iVar14 - 0x78U ^ uVar16) - uVar16)) {
              uVar25 = 0xff000000;
            }
            iVar15 = 0;
            do {
              *(undefined4 *)(iVar23 + iVar14 * 0x500 + iVar15 * 4) = uVar25;
              iVar15 = iVar15 + 1;
            } while (iVar15 != 0x140);
            iVar14 = iVar14 + 1;
          } while (iVar14 != 0xf0);
        }
      }
      FUN_ram_40015468();
      FUN_ram_400454e4(_DAT_ram_30069964);
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = _DAT_ram_30069958;
  FUN_ram_4001561c();
  FUN_ram_4000504c(&DAT_ram_3006994c,0,0x100);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400156d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40015ffa.
 * REA evidence: ev_385cb1f7b94f33b463eb64b96484338660bc04e2052d7c665b7224a15997252c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400161ce) */
/* WARNING: Removing unreachable block (ram,0x400161ac) */
/* WARNING: Removing unreachable block (ram,0x400161bc) */
/* WARNING: Removing unreachable block (ram,0x400161de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40015ffa(undefined4 param_1)

{
  float fVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uStack_34;
  
  FUN_ram_4000504c(&DAT_ram_3006994c,0,0x100);
  _DAT_ram_30069958 = param_1;
  _DAT_ram_3006994c = FUN_ram_400042ea();
  _DAT_ram_30069950 = _DAT_ram_3006994c;
  _DAT_ram_30069954 = _DAT_ram_3006994c;
  iVar4 = FUN_ram_4002c2b6(0x25800);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_40005656(0x25800);
    if (iVar4 == 0) {
      _DAT_ram_30069980 = 0;
      return 0xffffffff;
    }
    DAT_ram_30069988 = 0;
  }
  else {
    DAT_ram_30069988 = 1;
  }
  _DAT_ram_30069980 = iVar4;
  iVar4 = FUN_ram_4002c2b6(0x4b000);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_40005656(0x4b000);
    if (iVar4 == 0) {
      _DAT_ram_30069984 = 0;
      FUN_ram_4001561c();
      return 0xfffffffe;
    }
    DAT_ram_30069989 = 0;
  }
  else {
    DAT_ram_30069989 = 1;
  }
  _DAT_ram_30069984 = iVar4;
  FUN_ram_4004d1be();
  FUN_ram_4004d346();
  _DAT_ram_30069960 = FUN_ram_40043a8c();
  if (_DAT_ram_30069960 == 0) {
    FUN_ram_4001561c();
    uVar6 = 0xfffffffd;
  }
  else {
    FUN_ram_40044f1c(_DAT_ram_30069960,0,0);
    FUN_ram_40044faa(_DAT_ram_30069960,0x140,0xf0);
    FUN_ram_400488f8(_DAT_ram_30069960,0xff,0);
    uStack_34 = uStack_34 & 0xff000000;
    FUN_ram_400488da(_DAT_ram_30069960,uStack_34,0);
    FUN_ram_40048936(_DAT_ram_30069960,0,0);
    FUN_ram_40043aac(_DAT_ram_30069960,0x10);
    FUN_ram_40043aac(_DAT_ram_30069960,2);
    _DAT_ram_30069964 = FUN_ram_40056f7e(_DAT_ram_30069960);
    if (_DAT_ram_30069964 == 0) {
      FUN_ram_4001561c();
      uVar6 = 0xfffffffc;
    }
    else {
      FUN_ram_40044f1c(_DAT_ram_30069964,0,0);
      FUN_ram_40044faa(_DAT_ram_30069964,0x140,0xf0);
      FUN_ram_40043aac(_DAT_ram_30069964,0x10);
      FUN_ram_40043aac(_DAT_ram_30069964,2);
      FUN_ram_4000504c(&DAT_ram_30069968,0,0x18);
      fVar1 = DAT_ram_40094ee0;
      _DAT_ram_30069968 = 0x201219;
      _DAT_ram_3006996c = 0xf00140;
      _DAT_ram_30069974 = 0x25800;
      _DAT_ram_30069978 = _DAT_ram_30069980;
      _DAT_ram_3006997c = 0;
      puVar2 = &DAT_ram_3006994c;
      do {
        uVar5 = FUN_ram_40015446();
        puVar3 = puVar2 + 0x10;
        *(ulonglong *)(puVar2 + 0x40) = (ulonglong)(uint)(float)(uVar5 % 0x140);
        uVar5 = FUN_ram_40015446();
        *(ulonglong *)(puVar2 + 0x44) = (ulonglong)(uint)(float)(uVar5 % 100 + 0xf0);
        uVar5 = FUN_ram_40015446();
        *(ulonglong *)(puVar2 + 0x48) = (ulonglong)(uint)(float)(uVar5 % 0x19 + 0xf);
        uVar5 = FUN_ram_40015446();
        *(ulonglong *)(puVar2 + 0x4c) = (ulonglong)(uint)((float)(uVar5 % 100) * fVar1);
        puVar2 = puVar3;
      } while (puVar3 != (undefined1 *)0x30069a0c);
      FUN_ram_400154c8(0);
      FUN_ram_40015468();
      FUN_ram_400573e6(_DAT_ram_30069964,&DAT_ram_30069968);
      FUN_ram_400454e4(_DAT_ram_30069964);
      FUN_ram_40049d50(0);
      _DAT_ram_3006995c = FUN_ram_4004c5b4(FUN_ram_400156dc,0x10,0);
      uVar6 = 0;
      if (_DAT_ram_3006995c == 0) {
        FUN_ram_4001561c();
        uVar6 = 0xfffffffb;
      }
    }
  }
  return uVar6;
}


