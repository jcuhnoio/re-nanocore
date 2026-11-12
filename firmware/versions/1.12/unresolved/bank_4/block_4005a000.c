/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4005a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4005a09e.
 * REA evidence: ev_7bc4ccba6d2774d940c7dc56672bd4825ee115d7028240d81099ecf038fa5d26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005a09e(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char cStack_2b;
  byte bStack_2a;
  byte bStack_29;
  undefined1 auStack_28 [4];
  uint auStack_24 [2];
  
  iVar1 = FUN_ram_40059fa6(param_1,param_4,&DAT_ram_4009e9d0);
  if (iVar1 < 0) {
    return -1;
  }
  iVar2 = FUN_ram_4004b05c(param_1,&cStack_2b,1,0);
  if (iVar2 != 0) {
    return -1;
  }
  iVar2 = FUN_ram_4004b05c(param_1,auStack_28,3,0);
  if (iVar2 != 0) {
    return -1;
  }
  if (cStack_2b == '\0') {
    puVar3 = (undefined4 *)FUN_ram_4005a952(0xc);
    memset(puVar3,0,0xc);
    *(undefined4 **)(param_2 + 0xc) = puVar3;
    *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) & 0xdfff;
    iVar2 = FUN_ram_4004b05c(param_1,auStack_24,4,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = auStack_24[0] << 2;
    if (param_3 == 0) {
      iVar2 = auStack_24[0] << 1;
    }
    uVar4 = FUN_ram_4005a952(iVar2);
    uVar5 = FUN_ram_4005a952(auStack_24[0]);
    puVar3[1] = uVar5;
    puVar3[2] = auStack_24[0] & 0x3fffffff | param_3 << 0x1e;
    *puVar3 = uVar4;
    iVar2 = FUN_ram_4004b05c(param_1,uVar4,iVar2,0);
  }
  else {
    if (cStack_2b != '\x03') {
      return -1;
    }
    puVar3 = (undefined4 *)FUN_ram_4005a952(0x10);
    memset(puVar3,0,0x10);
    *(undefined4 **)(param_2 + 0xc) = puVar3;
    *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) | 0x2000;
    iVar2 = FUN_ram_4004b05c(param_1,auStack_24,2,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_ram_4004b05c(param_1,&bStack_2a,1,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_ram_4004b05c(param_1,&bStack_29,1,0);
    if (iVar2 != 0) {
      return -1;
    }
    uVar7 = (uint)bStack_29;
    uVar8 = (uint)bStack_2a;
    uVar4 = FUN_ram_4005a952(auStack_24[0] & 0xffff);
    uVar6 = FUN_ram_4005a952(auStack_24[0] & 0xffff);
    uVar5 = FUN_ram_4005a952(uVar8 * uVar7);
    *(byte *)(puVar3 + 3) = bStack_2a;
    puVar3[1] = uVar4;
    *puVar3 = uVar5;
    *(byte *)((int)puVar3 + 0xd) = bStack_29;
    puVar3[2] = uVar6;
    iVar2 = FUN_ram_4004b05c(param_1,uVar4,auStack_24[0] & 0xffff,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_ram_4004b05c(param_1,uVar6,auStack_24[0] & 0xffff,0);
    auStack_24[0] = uVar8 * uVar7;
  }
  if ((iVar2 == 0) && (iVar2 = FUN_ram_4004b05c(param_1,uVar5,auStack_24[0],0), iVar2 == 0)) {
    return iVar1;
  }
  return -1;
}


/* NanoCore 1.12, address 0x4005a24c.
 * REA evidence: ev_e5520f1c4da020ebd0a5883838977c976989ae61d593f16a9e75d06bd52fb772
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4005a24c(undefined4 param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  char cStack_81;
  uint uStack_80;
  undefined1 *puStack_7c;
  undefined2 uStack_78;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [4];
  ushort uStack_64;
  ushort uStack_60;
  short sStack_5e;
  ushort uStack_52;
  undefined2 uStack_50;
  char cStack_4e;
  undefined1 uStack_4d;
  char cStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte bStack_48;
  char cStack_47;
  byte bStack_46;
  undefined1 uStack_44;
  undefined1 uStack_42;
  
  iVar5 = FUN_ram_4004b326(auStack_74,param_1,2);
  if (iVar5 != 0) {
    return (undefined4 *)0x0;
  }
  puVar6 = (undefined4 *)FUN_ram_4005a960(0x24);
  piVar7 = (int *)FUN_ram_4005a952(0x14);
  memset(piVar7,0,0x14);
  puVar6[6] = piVar7;
  iVar5 = FUN_ram_40059fa6(auStack_74,0,&DAT_ram_4009e9d8);
  if ((-1 < iVar5) && (iVar8 = FUN_ram_4004b05c(auStack_74,auStack_68,0x28,0), iVar8 == 0)) {
    puVar6[4] = -(int)sStack_5e;
    puVar6[3] = (uint)uStack_60 - (int)sStack_5e;
    *puVar6 = FUN_ram_40059db0;
    puVar6[1] = FUN_ram_40059ad0;
    *(byte *)(puVar6 + 5) = *(byte *)(puVar6 + 5) & 0xfc | bStack_46 & 3;
    *(undefined1 *)((int)puVar6 + 0x15) = uStack_44;
    *(undefined1 *)((int)puVar6 + 0x16) = uStack_42;
    *(undefined2 *)(piVar7 + 4) = uStack_50;
    *(byte *)((int)piVar7 + 0x13) =
         cStack_47 << 6 | (bStack_4b & 0xf) << 1 | *(byte *)((int)piVar7 + 0x13) & 0x21;
    iVar8 = FUN_ram_40059fa6(auStack_74,iVar5,&DAT_ram_4009e9e0);
    if ((-1 < iVar8) && (iVar9 = FUN_ram_4004b05c(auStack_74,&puStack_7c,4,0), iVar9 == 0)) {
      uVar10 = FUN_ram_4005a952((int)puStack_7c * 0x14);
      iVar9 = memset(uVar10,0,(int)puStack_7c * 0x14);
      piVar7[2] = iVar9;
      *(ushort *)((int)piVar7 + 0x12) =
           *(ushort *)((int)piVar7 + 0x12) & 0xfe00 | (ushort)((uint)puStack_7c & 0x1ff);
      piVar11 = (int *)FUN_ram_4005a952(((uint)puStack_7c & 0x1ff) << 4);
      iVar9 = FUN_ram_4004b05c(auStack_74,piVar11,((piVar7[4] & 0x1ffffffU) >> 0x10) << 4,0);
      if (iVar9 == 0) {
        piVar18 = piVar11;
        for (uVar19 = 0; uVar19 < (piVar7[4] & 0x1ffffffU) >> 0x10; uVar19 = uVar19 + 1) {
          iVar9 = FUN_ram_4004b1fc(auStack_74,*piVar18 + iVar5,0);
          if (iVar9 != 0) goto LAB_ram_4005a448;
          iVar9 = piVar7[2] + uVar19 * 0x14;
          *(int *)(piVar7[2] + uVar19 * 0x14) = piVar18[1];
          *(short *)(iVar9 + 4) = (short)piVar18[2];
          *(undefined2 *)(iVar9 + 6) = *(undefined2 *)((int)piVar18 + 10);
          bVar1 = *(byte *)((int)piVar18 + 0xe);
          *(byte *)(iVar9 + 0x12) = bVar1;
          if (bVar1 != 2) {
            if (bVar1 < 3) {
              if (bVar1 == 0) {
                iVar12 = piVar18[3];
                uVar10 = FUN_ram_4005a952((char)iVar12);
                *(undefined4 *)(iVar9 + 0xc) = uVar10;
                iVar12 = FUN_ram_4004b05c(auStack_74,uVar10,(char)iVar12,0);
                if (iVar12 == 0) {
                  *(undefined2 *)(iVar9 + 0x10) = *(undefined2 *)(iVar9 + 4);
                  goto LAB_ram_4005a4d2;
                }
                goto LAB_ram_4005a448;
              }
            }
            else if (bVar1 != 3) goto LAB_ram_4005a448;
            uVar2 = *(ushort *)(piVar18 + 3);
            uVar10 = FUN_ram_4005a952((uint)uVar2 << 1);
            iVar12 = piVar18[3];
            *(undefined4 *)(iVar9 + 8) = uVar10;
            *(short *)(iVar9 + 0x10) = (short)iVar12;
            iVar12 = FUN_ram_4004b05c(auStack_74,uVar10,(uint)uVar2 << 1,0);
            if (iVar12 != 0) goto LAB_ram_4005a448;
            if (*(char *)((int)piVar18 + 0xe) == '\x01') {
              uVar10 = FUN_ram_4005a952((uint)*(ushort *)(iVar9 + 0x10) << 1);
              *(undefined4 *)(iVar9 + 0xc) = uVar10;
              iVar9 = FUN_ram_4004b05c(auStack_74,uVar10,(uint)*(ushort *)(iVar9 + 0x10) << 1,0);
              if (iVar9 != 0) goto LAB_ram_4005a448;
            }
          }
LAB_ram_4005a4d2:
          piVar18 = piVar18 + 4;
        }
        bVar3 = true;
      }
      else {
LAB_ram_4005a448:
        bVar3 = false;
      }
      FUN_ram_4005a988(piVar11);
      if (bVar3) {
        iVar9 = FUN_ram_40059fa6(auStack_74,iVar8 + iVar5,&DAT_ram_4009e9e8);
        if ((-1 < iVar9) && (iVar12 = FUN_ram_4004b05c(auStack_74,&uStack_80,4,0), iVar12 == 0)) {
          iVar12 = FUN_ram_4005a952((uStack_80 + 1) * 4);
          if (cStack_4e == '\0') {
            for (uVar19 = 0; uVar19 < uStack_80; uVar19 = uVar19 + 1) {
              iVar13 = FUN_ram_4004b05c(auStack_74,&puStack_7c,2,0);
              if (iVar13 != 0) goto LAB_ram_4005a4a0;
              *(uint *)(iVar12 + uVar19 * 4) = (uint)puStack_7c & 0xffff;
            }
          }
          else if ((cStack_4e != '\x01') ||
                  (iVar13 = FUN_ram_4004b05c(auStack_74,iVar12,uStack_80 << 2,0), iVar13 != 0)) {
LAB_ram_4005a4a0:
            FUN_ram_4005a988(iVar12);
            goto LAB_ram_4005a4a4;
          }
          iVar9 = iVar8 + iVar5 + iVar9;
          iVar5 = FUN_ram_40059fa6(auStack_74,iVar9,&DAT_ram_4009e9f0);
          if (iVar5 < 0) {
LAB_ram_4005a746:
            iVar5 = -1;
          }
          else {
            puVar14 = (uint *)FUN_ram_4005a952(uStack_80 << 3);
            memset(puVar14,0,uStack_80 << 3);
            piVar7[1] = (int)puVar14;
            uVar20 = 0;
            puVar21 = puVar14;
            for (uVar19 = 0; uStack_80 != uVar19; uVar19 = uVar19 + 1) {
              iVar8 = FUN_ram_4004b1fc(auStack_74,*(int *)(iVar12 + uVar19 * 4) + iVar9,0);
              cStack_81 = (char)iVar8;
              if (iVar8 != 0) goto LAB_ram_4005a746;
              puStack_7c = auStack_74;
              uStack_78 = 0xff;
              if (bStack_48 == 0) {
                *puVar21 = *puVar21 & 0xfffff | (uint)uStack_52 << 0x14;
              }
              else {
                iVar8 = FUN_ram_40059f20(&puStack_7c,bStack_48,&cStack_81);
                *puVar21 = *puVar21 & 0xfffff | iVar8 << 0x14;
                if (cStack_81 != '\0') goto LAB_ram_4005a746;
              }
              if (cStack_4c == '\0') {
                *puVar21 = (*puVar21 >> 0x14) << 0x18 | *puVar21 & 0xfffff;
              }
              uVar23 = (uint)bStack_4a;
              uVar22 = FUN_ram_40059f20(&puStack_7c,uVar23,&cStack_81);
              if ((1 << (uVar23 - 1 & 0x1f) & uVar22) != 0) {
                uVar22 = uVar22 | -1 << (uVar23 & 0x1f);
              }
              *(char *)((int)puVar21 + 6) = (char)uVar22;
              if (cStack_81 != '\0') goto LAB_ram_4005a746;
              uVar23 = (uint)bStack_4a;
              uVar22 = FUN_ram_40059f20(&puStack_7c,uVar23,&cStack_81);
              if ((1 << (uVar23 - 1 & 0x1f) & uVar22) != 0) {
                uVar22 = uVar22 | -1 << (uVar23 & 0x1f);
              }
              *(char *)((int)puVar21 + 7) = (char)uVar22;
              if (cStack_81 != '\0') goto LAB_ram_4005a746;
              uVar4 = FUN_ram_40059f20(&puStack_7c,bStack_49,&cStack_81);
              *(undefined1 *)(puVar21 + 1) = uVar4;
              if (cStack_81 != '\0') goto LAB_ram_4005a746;
              uVar4 = FUN_ram_40059f20(&puStack_7c,bStack_49,&cStack_81);
              *(undefined1 *)((int)puVar21 + 5) = uVar4;
              if (cStack_81 != '\0') goto LAB_ram_4005a746;
              iVar8 = iVar5;
              if (uVar19 < uStack_80 - 1) {
                iVar8 = *(int *)(iVar12 + 4 + uVar19 * 4);
              }
              iVar13 = *(int *)(iVar12 + uVar19 * 4);
              if (uVar19 == 0) {
                *(undefined1 *)(puVar21 + 1) = 0;
                *(undefined1 *)((int)puVar21 + 5) = 0;
                *puVar21 = *puVar21 & 0xfffff;
                *(undefined1 *)((int)puVar21 + 6) = 0;
                *(undefined1 *)((int)puVar21 + 7) = 0;
              }
              *puVar21 = uVar20 & 0xfffff | *puVar21 & 0xfff00000;
              if ((uint)(byte)puVar21[1] * (uint)*(byte *)((int)puVar21 + 5) != 0) {
                uVar20 = uVar20 + (iVar8 - (((int)((uint)bStack_48 + (uint)bStack_4a * 2 +
                                                  (uint)bStack_49 * 2) >> 3) + iVar13));
              }
              puVar21 = puVar21 + 2;
            }
            iVar8 = FUN_ram_4005a952(uVar20);
            *piVar7 = iVar8;
            puVar14 = puVar14 + 3;
            iVar13 = 0;
            for (uVar20 = 1; uVar20 < uVar19; uVar20 = uVar20 + 1) {
              iVar15 = FUN_ram_4004b1fc(auStack_74,*(int *)(iVar12 + uVar20 * 4) + iVar9,0);
              cStack_81 = (char)iVar15;
              if (iVar15 != 0) goto LAB_ram_4005a746;
              puStack_7c = auStack_74;
              uStack_78 = 0xff;
              uVar22 = (uint)bStack_48 + (uint)bStack_4a * 2 + (uint)bStack_49 * 2;
              FUN_ram_40059f20(&puStack_7c,uVar22,&cStack_81);
              if (cStack_81 != '\0') goto LAB_ram_4005a746;
              if ((uint)(byte)*puVar14 * (uint)*(byte *)((int)puVar14 + 1) != 0) {
                iVar15 = iVar5;
                if (uVar20 < uVar19 - 1) {
                  iVar15 = *(int *)(iVar12 + 4 + uVar20 * 4);
                }
                uVar23 = uVar22 & 7;
                iVar15 = iVar15 - (((int)uVar22 >> 3) + *(int *)(iVar12 + uVar20 * 4));
                iVar16 = 0;
                if (uVar23 == 0) {
                  iVar16 = FUN_ram_4004b05c(auStack_74,iVar8 + iVar13,iVar15);
                  if (iVar16 != 0) goto LAB_ram_4005a746;
                }
                else {
                  for (; iVar16 < iVar15 + -1; iVar16 = iVar16 + 1) {
                    uVar4 = FUN_ram_40059f20(&puStack_7c,8,&cStack_81);
                    *(undefined1 *)(iVar8 + iVar13 + iVar16) = uVar4;
                    if (cStack_81 != '\0') goto LAB_ram_4005a746;
                  }
                  iVar16 = FUN_ram_40059f20(&puStack_7c,8 - uVar23,&cStack_81);
                  iVar17 = iVar15 + iVar13 + -1;
                  *(char *)(iVar8 + iVar17) = (char)iVar16;
                  if (cStack_81 != '\0') goto LAB_ram_4005a746;
                  *(char *)(iVar8 + iVar17) = (char)(iVar16 << uVar23);
                }
                iVar13 = iVar13 + iVar15;
              }
              puVar14 = puVar14 + 2;
            }
          }
          FUN_ram_4005a988(iVar12);
          if (iVar5 != -1) {
            if (uStack_64 < 4) {
              piVar7[3] = 0;
              piVar7[4] = piVar7[4] & 0xdfff0000;
              goto LAB_ram_4005a58a;
            }
            iVar5 = FUN_ram_4005a09e(auStack_74,piVar7,uStack_4d,iVar5 + iVar9);
            if (-1 < iVar5) goto LAB_ram_4005a58a;
          }
        }
      }
    }
  }
LAB_ram_4005a4a4:
  FUN_ram_40059ff0(puVar6);
  puVar6 = (undefined4 *)0x0;
LAB_ram_4005a58a:
  FUN_ram_4004b00a(auStack_74);
  return puVar6;
}


/* NanoCore 1.12, address 0x4005a84c.
 * REA evidence: ev_bac7a2e9044995046a3cddc44778c0203b5fe9a6a7013aa00e391ffddbe01ed3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005a84c(int *param_1,undefined1 param_2,int param_3,undefined4 param_4,
                     undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (param_3 != 0)) {
    iVar2 = FUN_ram_400063d6(s_thread_ram_4009e9f8,param_3,param_5,param_4,param_2,0x14);
    *param_1 = iVar2;
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = FUN_ram_40006550();
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  return false;
}


/* NanoCore 1.12, address 0x4005a88c.
 * REA evidence: ev_b36a877bf29d5b82232c290a42e742a0c1606b0b33c5299f9775abab4837286e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005a88c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_ram_4000638c(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.12, address 0x4005a8a0.
 * REA evidence: ev_7a5abf4c3a3b4803beaec021e9c0fa3589839762959ccdd0cfcfdba79fd2b787
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005a8a0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400049d8(s_mutex_ram_4009ea00,1);
  *param_1 = iVar1;
  return iVar1 != 0;
}


/* NanoCore 1.12, address 0x4005a8c4.
 * REA evidence: ev_0bd47e71a43aab7650123a4c77186a1fac8792c049dc6c764fd6eadd0c328354
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005a8c4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004a22(*param_1,0xffffffff);
  return iVar1 == 0;
}


/* NanoCore 1.12, address 0x4005a8da.
 * REA evidence: ev_c3009bdf5dca99b5f60e5c787758a070d3614a784086e7b57a886bbdc6a9cb98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005a8da(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004b14(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.12, address 0x4005a8ee.
 * REA evidence: ev_717e73ee1f7918cd2e1415b1bf9d219cf71cd2aae63c03c04a2c95b712be78eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005a8ee(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004834(&DAT_ram_4009ea08,0,1);
  *param_1 = iVar1;
  return iVar1 != 0;
}


/* NanoCore 1.12, address 0x4005a914.
 * REA evidence: ev_29124d2b38d8e5e7c0b153e8702adac325812c8ce89679a9b1f9092d9489ad2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005a914(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4000487e(*param_1,0xffffffff);
  return iVar1 == 0;
}


/* NanoCore 1.12, address 0x4005a92a.
 * REA evidence: ev_56c49ca8999b8525b6afc5bf88ecbc0c7e5b413c712ade7ee73a47ec1f8dbf41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005a92a(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004920(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.12, address 0x4005a93e.
 * REA evidence: ev_667c0e8739630c0941d67af903d845df18facd4a9e32726e36bddbccf02fce68
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005a93e(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004862(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.12, address 0x4005a952.
 * REA evidence: ev_70c5a4a5c59f6db6c258a6c34e976a668d89795a5d4e08a4cfb937e70fa1ac72
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4005a952(int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined1 *)FUN_ram_4005aa06();
    return puVar1;
  }
  return &DAT_ram_30080d44;
}


/* NanoCore 1.12, address 0x4005a960.
 * REA evidence: ev_03e575d4ab4fef6bb3c0c2062081447286e8101ab832afd5e8dd2e2daa01d33a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4005a960(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_ram_30080d44;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)FUN_ram_4005aa06();
    if (puVar1 != (undefined1 *)0x0) {
      thunk_FUN_ram_40004f92(puVar1,0,param_1);
    }
  }
  return puVar1;
}


/* NanoCore 1.12, address 0x4005a988.
 * REA evidence: ev_d5f554a2ea7e4f05ad884d7fb260ad864b67f1a9bf232e9ceefcf90f3a8a9ba4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005a988(undefined1 *param_1)

{
  if ((param_1 != &DAT_ram_30080d44) && (param_1 != (undefined1 *)0x0)) {
    FUN_ram_4005aa48();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005a99a.
 * REA evidence: ev_32d2d18923d353e502c9d8d5c661911fec0be1498471fe5d926fb00a0570b12c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4005a99a(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    FUN_ram_4005a988();
    return &DAT_ram_30080d44;
  }
  if (param_1 == &DAT_ram_30080d44) {
    puVar1 = (undefined1 *)FUN_ram_4005a952(param_2);
    return puVar1;
  }
  puVar1 = (undefined1 *)FUN_ram_4005aa22();
  return puVar1;
}


/* NanoCore 1.12, address 0x4005a9c6.
 * REA evidence: ev_91e3c953548c31deecc1e72d1ef8bfa6e15d6876f7c4d15c953cc30eedcf37fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4005a9c6(void)

{
  if (DAT_ram_30080e78 == '\0') {
    DAT_ram_30080e78 = '\x01';
    _DAT_ram_30080e74 = FUN_ram_40005efc(s_heap_cma_ram_4009c074,7);
  }
  return _DAT_ram_30080e74;
}


/* NanoCore 1.12, address 0x4005aa04.
 * REA evidence: ev_29dd58e15a0fe9312b554e762cf35a0ca05c5056c69bb58b21b0c600252f41b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005aa04(void)

{
  return;
}


/* NanoCore 1.12, address 0x4005aa06.
 * REA evidence: ev_6910ebccccf08ba570ee2210b6f4d98fdc42319b0ee605012420a1ee414fa1e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005aa06(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005a9c6();
  if (iVar1 != 0) {
    FUN_ram_40005754(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005aa22.
 * REA evidence: ev_f96633efdbf73f93ecd056e3e89a49abebed9e3fa0b63ec5f228232e4b6b4bb8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005aa22(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005a9c6();
  if (iVar1 != 0) {
    FUN_ram_400059a4(iVar1,param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005aa48.
 * REA evidence: ev_d56aef46a5acf9622f9877468f77d06fdf8047df04af0393e6f205b30ed4503d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005aa48(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400058be();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005aa50.
 * REA evidence: ev_59ee194838eb1bd3a773d5a4b02679d71d6a1f162285ff8a983eed4251255176
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4000500c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((0xf < param_3) &&
     (puVar1 = param_2, puVar4 = param_1, (((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      puVar4[2] = puVar1[2];
      puVar5 = puVar4 + 4;
      puVar4[3] = puVar1[3];
      puVar1 = puVar1 + 4;
      puVar4 = puVar5;
    } while (0xf < (int)param_1 + (param_3 - (int)puVar5));
    iVar6 = (param_3 - 0x10 & 0xfffffff0) + 0x10;
    uVar2 = param_3 & 0xf;
    for (iVar3 = 0; 3 < uVar2 - iVar3; iVar3 = iVar3 + 4) {
      *(undefined4 *)((int)param_1 + iVar3 + iVar6) = *(undefined4 *)((int)param_2 + iVar3 + iVar6);
    }
    param_1 = (undefined4 *)((int)param_1 + (param_3 & 0xc) + iVar6);
    param_2 = (undefined4 *)((int)param_2 + (param_3 & 0xc) + iVar6);
    param_3 = uVar2 + (uVar2 >> 2) * -4;
  }
  for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)param_1 + uVar2) = *(undefined1 *)((int)param_2 + uVar2);
  }
  return;
}


/* NanoCore 1.12, address 0x4005aa54.
 * REA evidence: ev_4ff8f159562610981521b614b61ce98fec2d89114b68c409d734206ab6c8d6dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40004f92(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if ((3 < param_3) && (((uint)param_1 & 3) == 0)) {
    uVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    for (puVar4 = param_1; 0xf < (int)param_1 + (param_3 - (int)puVar4); puVar4 = puVar4 + 4) {
      *puVar4 = uVar3;
      puVar4[1] = uVar3;
      puVar4[2] = uVar3;
      puVar4[3] = uVar3;
    }
    uVar2 = param_3 >> 4;
    param_3 = param_3 + uVar2 * -0x10;
    for (iVar1 = 0; 3 < param_3 - iVar1; iVar1 = iVar1 + 4) {
      *(undefined4 *)((int)param_1 + iVar1 + uVar2 * 0x10) = uVar3;
    }
    param_1 = param_1 + uVar2 * 4 + (param_3 >> 2);
    param_3 = param_3 + (param_3 >> 2) * -4;
  }
  for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)param_1 + uVar2) = param_2;
  }
  return;
}


/* NanoCore 1.12, address 0x4005aa58.
 * REA evidence: ev_4a298ff71508d4455103da2db45d768eda8e4f98266a4bfd9e2e494fb73203ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4000509c(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 < param_1) && (param_1 < param_2 + param_3)) {
    uVar1 = 0;
    while (uVar1 = uVar1 - 1, ~param_3 != uVar1) {
      *(undefined1 *)(param_1 + param_3 + uVar1) = *(undefined1 *)(param_2 + param_3 + uVar1);
    }
    return;
  }
  for (uVar1 = 0; param_3 != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}


/* NanoCore 1.12, address 0x4005aa5c.
 * REA evidence: ev_77dea3fabd08ba8b6d665e78ef6e99c7625c1f7fbe1d7f20db112cd2d8d85b4f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_4000517a(char *param_1)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
  }
  return (int)pcVar1 - (int)param_1;
}


/* NanoCore 1.12, address 0x4005aa60.
 * REA evidence: ev_4b9558c6126da22bb7eb392f7361e3d75e3c1e6a0467872fbd2ee2fc57ef7a8a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40005124(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(char *)(param_2 + iVar1) == '\0') break;
    *(char *)(param_1 + iVar1) = *(char *)(param_2 + iVar1);
    iVar1 = iVar1 + 1;
  }
  *(undefined1 *)(param_1 + iVar1) = 0;
  return;
}


/* NanoCore 1.12, address 0x4005aa64.
 * REA evidence: ev_7e57d2f40e7ac2c3325d222f2418f72c21c955db2e88d2e0064cd2cfc53b0c0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40005162(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar2 = (uint)*(byte *)(param_1 + iVar3);
    pbVar1 = (byte *)(param_2 + iVar3);
    if (uVar2 == 0) break;
    iVar3 = iVar3 + 1;
  } while (uVar2 == *pbVar1);
  return uVar2 - *pbVar1;
}


/* NanoCore 1.12, address 0x4005aa68.
 * REA evidence: ev_ed5c436d444efaf6e6905fb6acd869f976511d91ec8b638dbb9db4e07774acb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005aa68(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_ram_4000517a();
    iVar1 = FUN_ram_4005a952(iVar2 + 1);
    if (iVar1 != 0) {
      thunk_FUN_ram_4000500c(iVar1,param_1,iVar2 + 1);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4005aa9a.
 * REA evidence: ev_495b76b8f87fad2588d6bd03e1509774b4e4b8f30cc1c81f3fef2acd2f0460cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_4005aa9a(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _DAT_ram_30080e7c;
  if (_DAT_ram_30080e7c == (int *)0x0) {
    piVar1 = (int *)FUN_ram_4000559c(8);
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_ram_400044c2(&DAT_ram_4009c940);
      if (iVar2 == 0) {
        FUN_ram_400055d4(piVar1);
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = iVar2;
        piVar1[1] = 1;
        _DAT_ram_30080e7c = piVar1;
      }
    }
  }
  else {
    _DAT_ram_30080e7c[1] = _DAT_ram_30080e7c[1] + 1;
  }
  return piVar1;
}


/* NanoCore 1.12, address 0x4005aaec.
 * REA evidence: ev_ab2fcd69d12a8a25c1eeb6f125eb4f4de56e63fa69ae9fe6c28fa2a7d2faa23c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005aaec(undefined4 *param_1)

{
  FUN_ram_40004650(*param_1);
  return;
}


/* NanoCore 1.12, address 0x4005aaf2.
 * REA evidence: ev_957c608b4b1691562a03afa70906300b4e6d75a7643c65e81ac60f78eaaea626
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005aaf2(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_18 [4];
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  auStack_18[0] = 0x9f;
  iVar1 = (**(code **)(param_1 + 0x30))
                    (param_1 + 0x20,auStack_18,1,&uStack_14,3,*(code **)(param_1 + 0x30));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xe) = uStack_12;
    *(undefined2 *)(param_1 + 0xc) = uStack_14;
  }
  uVar2 = *(uint *)(param_1 + 0xc) & 0xffff;
  if ((uVar2 == 0xffff) || (uVar2 == 0)) {
    iVar1 = 1;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4005ab3c.
 * REA evidence: ev_1282dd2f32115dc53b0ba81835e5f14002abfca565bebe3dd64584a5c98fb39e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ab3c(int param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  
  uVar1 = ((param_1 != 0) + 2) * 8;
  do {
    *param_3 = (char)(param_2 >> (uVar1 & 0x1f));
    uVar1 = uVar1 - 8;
    param_3 = param_3 + 1;
  } while (uVar1 != 0xfffffff8);
  return;
}


/* NanoCore 1.12, address 0x4005ab56.
 * REA evidence: ev_79d18df11b0596cb4afe65262ddefe17be2c913759ebaed113039101c5cb5564
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005ab56(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  undefined1 uVar5;
  
  if ((*(short *)(param_1 + 0xc) == 0x28c2) && (*(char *)(param_1 + 0xe) == '\x17')) {
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x94);
    pcVar3 = &DAT_ram_4009ee78;
    do {
      if (((*pcVar3 == *(char *)(param_1 + 0xc)) && (pcVar3[1] == *(char *)(param_1 + 0xd))) &&
         (pcVar3[2] == *(char *)(param_1 + 0xe))) {
        bVar4 = pcVar3[3];
      }
      pcVar3 = pcVar3 + 4;
    } while (pcVar3 != &DAT_ram_4009eec8);
    if (param_2 == 2) {
      uVar2 = *(uint *)(param_1 + 0x10);
      if ((bVar4 & 4) != 0) {
        if (uVar2 < 0x1000001) {
          *(undefined1 *)(param_1 + 0x54) = 0xbb;
          uVar5 = 0x18;
        }
        else {
          *(undefined1 *)(param_1 + 0x54) = 0xbc;
          uVar5 = 0x20;
        }
        *(undefined1 *)(param_1 + 0x56) = uVar5;
        *(undefined1 *)(param_1 + 0x55) = 1;
        uVar5 = 2;
        *(undefined1 *)(param_1 + 0x57) = 2;
        uVar1 = 0x400;
        goto LAB_ram_4005ac0e;
      }
      if ((bVar4 & 2) != 0) {
        if (uVar2 < 0x1000001) {
          *(undefined1 *)(param_1 + 0x54) = 0x3b;
          uVar5 = 0x18;
        }
        else {
          *(undefined1 *)(param_1 + 0x54) = 0x3c;
          uVar5 = 0x20;
        }
        *(undefined1 *)(param_1 + 0x56) = uVar5;
        *(undefined1 *)(param_1 + 0x55) = 1;
        *(undefined1 *)(param_1 + 0x57) = 1;
        *(undefined2 *)(param_1 + 0x58) = 0x800;
        uVar5 = 2;
        goto LAB_ram_4005ac2e;
      }
    }
    else if (param_2 == 4) {
      uVar2 = *(uint *)(param_1 + 0x10);
      if ((bVar4 & 0x10) != 0) {
        if (uVar2 < 0x1000001) {
          *(undefined1 *)(param_1 + 0x54) = 0xeb;
          uVar5 = 0x18;
        }
        else {
          *(undefined1 *)(param_1 + 0x54) = 0xec;
          uVar5 = 0x20;
        }
        *(undefined1 *)(param_1 + 0x56) = uVar5;
        *(undefined1 *)(param_1 + 0x55) = 1;
        uVar5 = 4;
        *(undefined1 *)(param_1 + 0x57) = 4;
        uVar1 = 0x600;
        goto LAB_ram_4005ac0e;
      }
      if ((bVar4 & 8) != 0) {
        if (uVar2 < 0x1000001) {
          *(undefined1 *)(param_1 + 0x54) = 0x6b;
          uVar5 = 0x18;
        }
        else {
          *(undefined1 *)(param_1 + 0x54) = 0x6c;
          uVar5 = 0x20;
        }
        *(undefined1 *)(param_1 + 0x56) = uVar5;
        *(undefined1 *)(param_1 + 0x55) = 1;
        *(undefined1 *)(param_1 + 0x57) = 1;
        *(undefined2 *)(param_1 + 0x58) = 0x800;
        uVar5 = 4;
        goto LAB_ram_4005ac2e;
      }
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + 0x10);
      if (55000000 < *(uint *)(param_1 + 0x9c)) {
        if (uVar2 < 0x1000001) {
          *(undefined1 *)(param_1 + 0x54) = 0xb;
          uVar5 = 0x18;
        }
        else {
          *(undefined1 *)(param_1 + 0x54) = 0xc;
          uVar5 = 0x20;
        }
        *(undefined1 *)(param_1 + 0x56) = uVar5;
        uVar5 = 1;
        *(undefined1 *)(param_1 + 0x55) = 1;
        *(undefined1 *)(param_1 + 0x57) = 1;
        uVar1 = 0x800;
LAB_ram_4005ac0e:
        *(undefined2 *)(param_1 + 0x58) = uVar1;
        goto LAB_ram_4005ac2e;
      }
    }
  }
  if (uVar2 < 0x1000001) {
    *(undefined1 *)(param_1 + 0x54) = 3;
    uVar5 = 0x18;
  }
  else {
    *(undefined1 *)(param_1 + 0x54) = 0x13;
    uVar5 = 0x20;
  }
  *(undefined1 *)(param_1 + 0x56) = uVar5;
  uVar5 = 1;
  *(undefined1 *)(param_1 + 0x55) = 1;
  *(undefined1 *)(param_1 + 0x57) = 1;
  *(undefined2 *)(param_1 + 0x58) = 0;
LAB_ram_4005ac2e:
  *(undefined1 *)(param_1 + 0x5a) = uVar5;
  return 0;
}


/* NanoCore 1.12, address 0x4005ad3e.
 * REA evidence: ev_cc060b67f58639e8c8a18290072668634c8bd0a8d43d27e8530f0ddf7d862d1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ad3e(int param_1,undefined4 param_2)

{
  undefined1 auStack_11 [13];
  
  auStack_11[0] = 5;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,auStack_11,1,param_2,1,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.12, address 0x4005ad60.
 * REA evidence: ev_f12d359cccac43fa74308a72ebd0a3b101097bd526e36e7fed4e5e03f2326586
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005ad60(int param_1,int param_2)

{
  int iVar1;
  byte abStack_11 [5];
  
  while ((iVar1 = FUN_ram_4005ad3e(param_1,abStack_11), iVar1 != 0 || ((abStack_11[0] & 1) != 0))) {
    if (param_2 == 0) {
      return 4;
    }
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))();
    }
    param_2 = param_2 + -1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4005ad98.
 * REA evidence: ev_8e8c7ba88edf165febfffd5d218af6284afd60a739f2a00c89d10e9254c0b9cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005ad98(int param_1,int param_2,uint param_3,undefined1 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  undefined1 auStack_160 [300];
  
  if (*(uint *)(param_1 + 0x10) < param_2 + param_3) {
    return 5;
  }
  iVar8 = param_1 + 0x20;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(iVar8);
  }
  iVar4 = FUN_ram_4005ad60(param_1,1000);
  uVar7 = (uint)param_4 & 0x1f;
  uVar2 = param_3;
  if (param_3 < 0x101) {
    bVar1 = true;
    puVar3 = auStack_160;
    if (uVar7 != 0) goto LAB_ram_4005ae14;
  }
  else if (uVar7 != 0) {
    uVar2 = 0x20 - uVar7;
  }
  bVar1 = false;
  puVar3 = param_4;
LAB_ram_4005ae14:
  if (iVar4 == 0) {
    do {
      if (((uVar2 & 0x1f) != 0) && (0x100 < uVar2)) {
        uVar2 = uVar2 & 0xffffffe0;
      }
      iVar4 = (**(code **)(param_1 + 0x28))(iVar8,&uStack_16c);
      if (iVar4 != 0) break;
      if (*(char *)(param_1 + 0x54) == '\x03') {
        uStack_168 = 3;
        FUN_ram_4005ab3c(*(undefined1 *)(param_1 + 0x45),param_2,auStack_167);
        cVar6 = (*(char *)(param_1 + 0x45) != '\0') + '\x04';
        FUN_ram_4003e072(uStack_16c,param_2,cVar6,uVar2);
        FUN_ram_4003e0ea();
        iVar4 = (**(code **)(param_1 + 0x30))
                          (iVar8,&uStack_168,cVar6,puVar3,uVar2,*(code **)(param_1 + 0x30));
        FUN_ram_4003e10e();
        iVar5 = FUN_ram_4003e122();
        if (iVar5 != 0) {
          memset(puVar3,0xff,uVar2);
        }
      }
      else {
        iVar4 = (**(code **)(param_1 + 0x34))
                          (iVar8,param_2,param_1 + 0x54,puVar3,uVar2,*(code **)(param_1 + 0x34));
      }
      if (iVar4 != 0) break;
      if (bVar1) {
        FUN_ram_4000303c(param_4,puVar3,uVar2);
      }
      puVar3 = puVar3 + uVar2;
      param_2 = param_2 + uVar2;
      uVar2 = param_3 - uVar2;
      iVar4 = 0;
      param_3 = uVar2;
    } while (uVar2 != 0);
  }
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar8);
  }
  return iVar4;
}


/* NanoCore 1.12, address 0x4005af24.
 * REA evidence: ev_3d65910a474e2d7e7ff1a460f525ceb76eb390424f0eaa9a5f77c2cb5c7137d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005af24(int param_1,int param_2)

{
  int iVar1;
  undefined1 uStack_12;
  byte abStack_11 [5];
  
  uStack_12 = 6;
  if (param_2 == 0) {
    uStack_12 = 4;
  }
  iVar1 = (**(code **)(param_1 + 0x30))(param_1 + 0x20,&uStack_12,1,0,0,*(code **)(param_1 + 0x30));
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4005ad3e(param_1,abStack_11), iVar1 == 0)) {
    if (param_2 == 0) {
      if ((abStack_11[0] & 2) == 0) {
        return 0;
      }
    }
    else if ((abStack_11[0] & 2) != 0) {
      return 0;
    }
    iVar1 = 2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4005af74.
 * REA evidence: ev_51f82f7e6755fc67f2c7a560ddb9d53c5efaa511828d74ec3856226df94870bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005af74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  
  iVar4 = param_1 + 0x20;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(iVar4);
  }
  iVar1 = FUN_ram_4005af24(param_1,1);
  if (iVar1 == 0) {
    uStack_14 = 199;
    uVar3 = *(ushort *)(param_1 + 0x14) & 8;
    if ((*(ushort *)(param_1 + 0x14) & 8) == 0) {
      uVar2 = 1;
    }
    else {
      uStack_13 = 0x94;
      uVar3 = 0xffff9a80;
      uStack_12 = 0x9a80;
      uVar2 = 4;
    }
    iVar1 = (**(code **)(param_1 + 0x30))
                      (iVar4,&uStack_14,uVar2,0,0,uVar3,*(code **)(param_1 + 0x30));
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4005ad60(param_1,4000000);
    }
  }
  FUN_ram_4005af24(param_1,0);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c))(iVar4);
  }
  return iVar1;
}


