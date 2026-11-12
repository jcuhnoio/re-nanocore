/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4005a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4005a0ee.
 * REA evidence: ev_e42ea7051daa2b2939b5481cd44763d9abde81c18e427c48897c02358c2b3662
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4005a0ee(undefined4 *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    param_2 = param_2 - 1;
    if (param_2 == 0xffffffff) {
      *param_3 = 0;
      return uVar1;
    }
    *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) << 1;
    iVar2 = (*(byte *)(param_1 + 1) - 1) * 0x1000000;
    if (iVar2 >> 0x18 < 0) {
      *(undefined1 *)(param_1 + 1) = 7;
      iVar2 = FUN_ram_4004af64(*param_1,(int)param_1 + 5,1,0);
      *param_3 = (char)iVar2;
      if (iVar2 != 0) {
        return 0;
      }
    }
    else {
      *(char *)(param_1 + 1) = (char)((uint)iVar2 >> 0x18);
    }
    uVar1 = uVar1 | (uint)(*(byte *)((int)param_1 + 5) >> 7) << (param_2 & 0x1f);
  } while( true );
}


/* NanoCore 1.11, address 0x4005a174.
 * REA evidence: ev_5a5d4f76a568183b08342220821b43a2e17855f7b556b5871066bf10e3032f3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005a174(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [8];
  
  FUN_ram_4004b104(param_1,param_2,0);
  iVar1 = FUN_ram_4004af64(param_1,&uStack_18,4,0);
  if (((iVar1 != 0) || (iVar1 = FUN_ram_4004af64(param_1,auStack_14,4,0), iVar1 != 0)) ||
     (iVar1 = FUN_ram_40002fec(param_3,auStack_14,4), iVar1 != 0)) {
    uStack_18 = 0xffffffff;
  }
  return uStack_18;
}


/* NanoCore 1.11, address 0x4005a1be.
 * REA evidence: ev_8d672c6eb0758ea0dd84afc97f560ef32568bcc1344222c961676214915e6304
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005a1be(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  puVar1 = (undefined4 *)puVar3[3];
  if ((*(ushort *)((int)puVar3 + 0x12) & 0x2000) == 0) {
    if (puVar1 == (undefined4 *)0x0) goto LAB_ram_4005a1f4;
    FUN_ram_4005ab56(*puVar1);
    uVar4 = puVar1[1];
  }
  else {
    if (puVar1 == (undefined4 *)0x0) goto LAB_ram_4005a1f4;
    FUN_ram_4005ab56(*puVar1);
    FUN_ram_4005ab56(puVar1[1]);
    uVar4 = puVar1[2];
  }
  FUN_ram_4005ab56(uVar4);
  FUN_ram_4005ab56(puVar1);
LAB_ram_4005a1f4:
  iVar2 = puVar3[2];
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 8);
    for (iVar5 = 0; iVar5 < (int)((puVar3[4] & 0x1ffffff) >> 0x10); iVar5 = iVar5 + 1) {
      FUN_ram_4005ab56(puVar1[1]);
      FUN_ram_4005ab56(*puVar1);
      puVar1 = puVar1 + 5;
    }
    FUN_ram_4005ab56(iVar2);
  }
  FUN_ram_4005ab56(*puVar3);
  FUN_ram_4005ab56(puVar3[1]);
  FUN_ram_4005ab56(puVar3);
  FUN_ram_4005ab56(param_1);
  return;
}


/* NanoCore 1.11, address 0x4005a26c.
 * REA evidence: ev_6e3786f6a4de1a0c6cbdbd7815c1746d5097ac59615f125096569db3139e188d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005a26c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

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
  
  iVar1 = FUN_ram_4005a174(param_1,param_4,&DAT_ram_400998f0);
  if (iVar1 < 0) {
    return -1;
  }
  iVar2 = FUN_ram_4004af64(param_1,&cStack_2b,1,0);
  if (iVar2 != 0) {
    return -1;
  }
  iVar2 = FUN_ram_4004af64(param_1,auStack_28,3,0);
  if (iVar2 != 0) {
    return -1;
  }
  if (cStack_2b == '\0') {
    puVar3 = (undefined4 *)FUN_ram_4005ab20(0xc);
    memset(puVar3,0,0xc);
    *(undefined4 **)(param_2 + 0xc) = puVar3;
    *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) & 0xdfff;
    iVar2 = FUN_ram_4004af64(param_1,auStack_24,4,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = auStack_24[0] << 2;
    if (param_3 == 0) {
      iVar2 = auStack_24[0] << 1;
    }
    uVar4 = FUN_ram_4005ab20(iVar2);
    uVar5 = FUN_ram_4005ab20(auStack_24[0]);
    puVar3[1] = uVar5;
    puVar3[2] = auStack_24[0] & 0x3fffffff | param_3 << 0x1e;
    *puVar3 = uVar4;
    iVar2 = FUN_ram_4004af64(param_1,uVar4,iVar2,0);
  }
  else {
    if (cStack_2b != '\x03') {
      return -1;
    }
    puVar3 = (undefined4 *)FUN_ram_4005ab20(0x10);
    memset(puVar3,0,0x10);
    *(undefined4 **)(param_2 + 0xc) = puVar3;
    *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) | 0x2000;
    iVar2 = FUN_ram_4004af64(param_1,auStack_24,2,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_ram_4004af64(param_1,&bStack_2a,1,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_ram_4004af64(param_1,&bStack_29,1,0);
    if (iVar2 != 0) {
      return -1;
    }
    uVar7 = (uint)bStack_29;
    uVar8 = (uint)bStack_2a;
    uVar4 = FUN_ram_4005ab20(auStack_24[0] & 0xffff);
    uVar6 = FUN_ram_4005ab20(auStack_24[0] & 0xffff);
    uVar5 = FUN_ram_4005ab20(uVar8 * uVar7);
    *(byte *)(puVar3 + 3) = bStack_2a;
    puVar3[1] = uVar4;
    *puVar3 = uVar5;
    *(byte *)((int)puVar3 + 0xd) = bStack_29;
    puVar3[2] = uVar6;
    iVar2 = FUN_ram_4004af64(param_1,uVar4,auStack_24[0] & 0xffff,0);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_ram_4004af64(param_1,uVar6,auStack_24[0] & 0xffff,0);
    auStack_24[0] = uVar8 * uVar7;
  }
  if ((iVar2 == 0) && (iVar2 = FUN_ram_4004af64(param_1,uVar5,auStack_24[0],0), iVar2 == 0)) {
    return iVar1;
  }
  return -1;
}


/* NanoCore 1.11, address 0x4005a41a.
 * REA evidence: ev_71d99f863e15d46c46734c446e4dd0acfddfb7d149855fba735be0b259bbe205
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4005a41a(undefined4 param_1)

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
  
  iVar5 = FUN_ram_4004b22e(auStack_74,param_1,2);
  if (iVar5 != 0) {
    return (undefined4 *)0x0;
  }
  puVar6 = (undefined4 *)FUN_ram_4005ab2e(0x24);
  piVar7 = (int *)FUN_ram_4005ab20(0x14);
  memset(piVar7,0,0x14);
  puVar6[6] = piVar7;
  iVar5 = FUN_ram_4005a174(auStack_74,0,&DAT_ram_400998f8);
  if ((-1 < iVar5) && (iVar8 = FUN_ram_4004af64(auStack_74,auStack_68,0x28,0), iVar8 == 0)) {
    puVar6[4] = -(int)sStack_5e;
    puVar6[3] = (uint)uStack_60 - (int)sStack_5e;
    *puVar6 = FUN_ram_40059f7e;
    puVar6[1] = FUN_ram_40059c9e;
    *(byte *)(puVar6 + 5) = *(byte *)(puVar6 + 5) & 0xfc | bStack_46 & 3;
    *(undefined1 *)((int)puVar6 + 0x15) = uStack_44;
    *(undefined1 *)((int)puVar6 + 0x16) = uStack_42;
    *(undefined2 *)(piVar7 + 4) = uStack_50;
    *(byte *)((int)piVar7 + 0x13) =
         cStack_47 << 6 | (bStack_4b & 0xf) << 1 | *(byte *)((int)piVar7 + 0x13) & 0x21;
    iVar8 = FUN_ram_4005a174(auStack_74,iVar5,&DAT_ram_40099900);
    if ((-1 < iVar8) && (iVar9 = FUN_ram_4004af64(auStack_74,&puStack_7c,4,0), iVar9 == 0)) {
      uVar10 = FUN_ram_4005ab20((int)puStack_7c * 0x14);
      iVar9 = memset(uVar10,0,(int)puStack_7c * 0x14);
      piVar7[2] = iVar9;
      *(ushort *)((int)piVar7 + 0x12) =
           *(ushort *)((int)piVar7 + 0x12) & 0xfe00 | (ushort)((uint)puStack_7c & 0x1ff);
      piVar11 = (int *)FUN_ram_4005ab20(((uint)puStack_7c & 0x1ff) << 4);
      iVar9 = FUN_ram_4004af64(auStack_74,piVar11,((piVar7[4] & 0x1ffffffU) >> 0x10) << 4,0);
      if (iVar9 == 0) {
        piVar18 = piVar11;
        for (uVar19 = 0; uVar19 < (piVar7[4] & 0x1ffffffU) >> 0x10; uVar19 = uVar19 + 1) {
          iVar9 = FUN_ram_4004b104(auStack_74,*piVar18 + iVar5,0);
          if (iVar9 != 0) goto LAB_ram_4005a616;
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
                uVar10 = FUN_ram_4005ab20((char)iVar12);
                *(undefined4 *)(iVar9 + 0xc) = uVar10;
                iVar12 = FUN_ram_4004af64(auStack_74,uVar10,(char)iVar12,0);
                if (iVar12 == 0) {
                  *(undefined2 *)(iVar9 + 0x10) = *(undefined2 *)(iVar9 + 4);
                  goto LAB_ram_4005a6a0;
                }
                goto LAB_ram_4005a616;
              }
            }
            else if (bVar1 != 3) goto LAB_ram_4005a616;
            uVar2 = *(ushort *)(piVar18 + 3);
            uVar10 = FUN_ram_4005ab20((uint)uVar2 << 1);
            iVar12 = piVar18[3];
            *(undefined4 *)(iVar9 + 8) = uVar10;
            *(short *)(iVar9 + 0x10) = (short)iVar12;
            iVar12 = FUN_ram_4004af64(auStack_74,uVar10,(uint)uVar2 << 1,0);
            if (iVar12 != 0) goto LAB_ram_4005a616;
            if (*(char *)((int)piVar18 + 0xe) == '\x01') {
              uVar10 = FUN_ram_4005ab20((uint)*(ushort *)(iVar9 + 0x10) << 1);
              *(undefined4 *)(iVar9 + 0xc) = uVar10;
              iVar9 = FUN_ram_4004af64(auStack_74,uVar10,(uint)*(ushort *)(iVar9 + 0x10) << 1,0);
              if (iVar9 != 0) goto LAB_ram_4005a616;
            }
          }
LAB_ram_4005a6a0:
          piVar18 = piVar18 + 4;
        }
        bVar3 = true;
      }
      else {
LAB_ram_4005a616:
        bVar3 = false;
      }
      FUN_ram_4005ab56(piVar11);
      if (bVar3) {
        iVar9 = FUN_ram_4005a174(auStack_74,iVar8 + iVar5,&DAT_ram_40099908);
        if ((-1 < iVar9) && (iVar12 = FUN_ram_4004af64(auStack_74,&uStack_80,4,0), iVar12 == 0)) {
          iVar12 = FUN_ram_4005ab20((uStack_80 + 1) * 4);
          if (cStack_4e == '\0') {
            for (uVar19 = 0; uVar19 < uStack_80; uVar19 = uVar19 + 1) {
              iVar13 = FUN_ram_4004af64(auStack_74,&puStack_7c,2,0);
              if (iVar13 != 0) goto LAB_ram_4005a66e;
              *(uint *)(iVar12 + uVar19 * 4) = (uint)puStack_7c & 0xffff;
            }
          }
          else if ((cStack_4e != '\x01') ||
                  (iVar13 = FUN_ram_4004af64(auStack_74,iVar12,uStack_80 << 2,0), iVar13 != 0)) {
LAB_ram_4005a66e:
            FUN_ram_4005ab56(iVar12);
            goto LAB_ram_4005a672;
          }
          iVar9 = iVar8 + iVar5 + iVar9;
          iVar5 = FUN_ram_4005a174(auStack_74,iVar9,&DAT_ram_40099910);
          if (iVar5 < 0) {
LAB_ram_4005a914:
            iVar5 = -1;
          }
          else {
            puVar14 = (uint *)FUN_ram_4005ab20(uStack_80 << 3);
            memset(puVar14,0,uStack_80 << 3);
            piVar7[1] = (int)puVar14;
            uVar20 = 0;
            puVar21 = puVar14;
            for (uVar19 = 0; uStack_80 != uVar19; uVar19 = uVar19 + 1) {
              iVar8 = FUN_ram_4004b104(auStack_74,*(int *)(iVar12 + uVar19 * 4) + iVar9,0);
              cStack_81 = (char)iVar8;
              if (iVar8 != 0) goto LAB_ram_4005a914;
              puStack_7c = auStack_74;
              uStack_78 = 0xff;
              if (bStack_48 == 0) {
                *puVar21 = *puVar21 & 0xfffff | (uint)uStack_52 << 0x14;
              }
              else {
                iVar8 = FUN_ram_4005a0ee(&puStack_7c,bStack_48,&cStack_81);
                *puVar21 = *puVar21 & 0xfffff | iVar8 << 0x14;
                if (cStack_81 != '\0') goto LAB_ram_4005a914;
              }
              if (cStack_4c == '\0') {
                *puVar21 = (*puVar21 >> 0x14) << 0x18 | *puVar21 & 0xfffff;
              }
              uVar23 = (uint)bStack_4a;
              uVar22 = FUN_ram_4005a0ee(&puStack_7c,uVar23,&cStack_81);
              if ((1 << (uVar23 - 1 & 0x1f) & uVar22) != 0) {
                uVar22 = uVar22 | -1 << (uVar23 & 0x1f);
              }
              *(char *)((int)puVar21 + 6) = (char)uVar22;
              if (cStack_81 != '\0') goto LAB_ram_4005a914;
              uVar23 = (uint)bStack_4a;
              uVar22 = FUN_ram_4005a0ee(&puStack_7c,uVar23,&cStack_81);
              if ((1 << (uVar23 - 1 & 0x1f) & uVar22) != 0) {
                uVar22 = uVar22 | -1 << (uVar23 & 0x1f);
              }
              *(char *)((int)puVar21 + 7) = (char)uVar22;
              if (cStack_81 != '\0') goto LAB_ram_4005a914;
              uVar4 = FUN_ram_4005a0ee(&puStack_7c,bStack_49,&cStack_81);
              *(undefined1 *)(puVar21 + 1) = uVar4;
              if (cStack_81 != '\0') goto LAB_ram_4005a914;
              uVar4 = FUN_ram_4005a0ee(&puStack_7c,bStack_49,&cStack_81);
              *(undefined1 *)((int)puVar21 + 5) = uVar4;
              if (cStack_81 != '\0') goto LAB_ram_4005a914;
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
            iVar8 = FUN_ram_4005ab20(uVar20);
            *piVar7 = iVar8;
            puVar14 = puVar14 + 3;
            iVar13 = 0;
            for (uVar20 = 1; uVar20 < uVar19; uVar20 = uVar20 + 1) {
              iVar15 = FUN_ram_4004b104(auStack_74,*(int *)(iVar12 + uVar20 * 4) + iVar9,0);
              cStack_81 = (char)iVar15;
              if (iVar15 != 0) goto LAB_ram_4005a914;
              puStack_7c = auStack_74;
              uStack_78 = 0xff;
              uVar22 = (uint)bStack_48 + (uint)bStack_4a * 2 + (uint)bStack_49 * 2;
              FUN_ram_4005a0ee(&puStack_7c,uVar22,&cStack_81);
              if (cStack_81 != '\0') goto LAB_ram_4005a914;
              if ((uint)(byte)*puVar14 * (uint)*(byte *)((int)puVar14 + 1) != 0) {
                iVar15 = iVar5;
                if (uVar20 < uVar19 - 1) {
                  iVar15 = *(int *)(iVar12 + 4 + uVar20 * 4);
                }
                uVar23 = uVar22 & 7;
                iVar15 = iVar15 - (((int)uVar22 >> 3) + *(int *)(iVar12 + uVar20 * 4));
                iVar16 = 0;
                if (uVar23 == 0) {
                  iVar16 = FUN_ram_4004af64(auStack_74,iVar8 + iVar13,iVar15);
                  if (iVar16 != 0) goto LAB_ram_4005a914;
                }
                else {
                  for (; iVar16 < iVar15 + -1; iVar16 = iVar16 + 1) {
                    uVar4 = FUN_ram_4005a0ee(&puStack_7c,8,&cStack_81);
                    *(undefined1 *)(iVar8 + iVar13 + iVar16) = uVar4;
                    if (cStack_81 != '\0') goto LAB_ram_4005a914;
                  }
                  iVar16 = FUN_ram_4005a0ee(&puStack_7c,8 - uVar23,&cStack_81);
                  iVar17 = iVar15 + iVar13 + -1;
                  *(char *)(iVar8 + iVar17) = (char)iVar16;
                  if (cStack_81 != '\0') goto LAB_ram_4005a914;
                  *(char *)(iVar8 + iVar17) = (char)(iVar16 << uVar23);
                }
                iVar13 = iVar13 + iVar15;
              }
              puVar14 = puVar14 + 2;
            }
          }
          FUN_ram_4005ab56(iVar12);
          if (iVar5 != -1) {
            if (uStack_64 < 4) {
              piVar7[3] = 0;
              piVar7[4] = piVar7[4] & 0xdfff0000;
              goto LAB_ram_4005a758;
            }
            iVar5 = FUN_ram_4005a26c(auStack_74,piVar7,uStack_4d,iVar5 + iVar9);
            if (-1 < iVar5) goto LAB_ram_4005a758;
          }
        }
      }
    }
  }
LAB_ram_4005a672:
  FUN_ram_4005a1be(puVar6);
  puVar6 = (undefined4 *)0x0;
LAB_ram_4005a758:
  FUN_ram_4004af12(auStack_74);
  return puVar6;
}


/* NanoCore 1.11, address 0x4005aa1a.
 * REA evidence: ev_cb31c66273de6fb972c46779ea62d159b54c6da3e509086e6bcf7cc16636617c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005aa1a(int *param_1,undefined1 param_2,int param_3,undefined4 param_4,
                     undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (param_3 != 0)) {
    iVar2 = FUN_ram_400064b8(s_thread_ram_40099918,param_3,param_5,param_4,param_2,0x14);
    *param_1 = iVar2;
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = FUN_ram_40006632();
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  return false;
}


/* NanoCore 1.11, address 0x4005aa5a.
 * REA evidence: ev_4be9d9eb87574ac4974910aa80c58123f6ed555fc14b44ed7ed45615f42b174a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005aa5a(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_ram_4000646e(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.11, address 0x4005aa6e.
 * REA evidence: ev_9e99b39ef9c225185e0ae38502784e3cbc95682c8a93a04e839205e7f4c9987b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005aa6e(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4000497c(s_mutex_ram_40099920,1);
  *param_1 = iVar1;
  return iVar1 != 0;
}


/* NanoCore 1.11, address 0x4005aa92.
 * REA evidence: ev_9a4e663222770e86744409e79365046b5709742b6dba4bd52f0f261d119cf54b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005aa92(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400049c6(*param_1,0xffffffff);
  return iVar1 == 0;
}


/* NanoCore 1.11, address 0x4005aaa8.
 * REA evidence: ev_675c873fd317a5a9ea30709e92b29a7f25bc68a2a4c94f84a0a5a95af4d55a93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005aaa8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004ab8(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.11, address 0x4005aabc.
 * REA evidence: ev_b520024706c45b63a719523355bd7d327f2dfc0520a0f0696a01922c0ae78f64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005aabc(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400047d8(&DAT_ram_40099928,0,1);
  *param_1 = iVar1;
  return iVar1 != 0;
}


/* NanoCore 1.11, address 0x4005aae2.
 * REA evidence: ev_23773cea8ae955d9eb7d8976b1f881a419f4f4b3f3b8384d352690ae6e64114f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005aae2(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004822(*param_1,0xffffffff);
  return iVar1 == 0;
}


/* NanoCore 1.11, address 0x4005aaf8.
 * REA evidence: ev_49cb4bb5f34d66b8f1a943f391089b7dbd300c075c4b40ac6406c9d908930254
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005aaf8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400048c4(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.11, address 0x4005ab0c.
 * REA evidence: ev_1817117cd9ac24968f963482fafffe3feaea8e9d46616c5f2b2ec8e993cecd4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005ab0c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004806(*param_1);
  return iVar1 == 0;
}


/* NanoCore 1.11, address 0x4005ab20.
 * REA evidence: ev_6be75c1c7b04bad2c4da2fa50103ec4922a1455e0414191bf38045b175188293
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4005ab20(int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (undefined1 *)FUN_ram_4005abd4();
    return puVar1;
  }
  return &DAT_ram_30080cc4;
}


/* NanoCore 1.11, address 0x4005ab2e.
 * REA evidence: ev_d5a351739b57971e7b81ab76bd4da0bc5a51dfb0db96c7c3f0cd79c8eb813052
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4005ab2e(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_ram_30080cc4;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)FUN_ram_4005abd4();
    if (puVar1 != (undefined1 *)0x0) {
      thunk_FUN_ram_4000504c(puVar1,0,param_1);
    }
  }
  return puVar1;
}


/* NanoCore 1.11, address 0x4005ab56.
 * REA evidence: ev_c98f357827d39616c8530e86bfc35cc661da8f959bfd54955c6b3c53ec131e48
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ab56(undefined1 *param_1)

{
  if ((param_1 != &DAT_ram_30080cc4) && (param_1 != (undefined1 *)0x0)) {
    FUN_ram_4005ac16();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005ab68.
 * REA evidence: ev_3b7fb42f19c993282713b05f2e19038f58199d890582d9eb55fc29114f60124d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * FUN_ram_4005ab68(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    FUN_ram_4005ab56();
    return &DAT_ram_30080cc4;
  }
  if (param_1 == &DAT_ram_30080cc4) {
    puVar1 = (undefined1 *)FUN_ram_4005ab20(param_2);
    return puVar1;
  }
  puVar1 = (undefined1 *)FUN_ram_4005abf0();
  return puVar1;
}


/* NanoCore 1.11, address 0x4005ab94.
 * REA evidence: ev_0049941ba759c7e79ad2ca307345e4c31711205b4d6450ef3089897421e5bed3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4005ab94(void)

{
  if (DAT_ram_30080df8 == '\0') {
    DAT_ram_30080df8 = '\x01';
    _DAT_ram_30080df4 = FUN_ram_40005fdc(s_heap_cma_ram_40096dcc,7);
  }
  return _DAT_ram_30080df4;
}


/* NanoCore 1.11, address 0x4005abd2.
 * REA evidence: ev_8f23eaeb75bc8a38eadc539a199fe2f3fc54e0f1890bbf5e6b3dcf9387d13a8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005abd2(void)

{
  return;
}


/* NanoCore 1.11, address 0x4005abd4.
 * REA evidence: ev_ebcb41ab20d5fbf75772fbf87189fff64861706bf42fcb7c82e9051e1a46ab58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005abd4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005ab94();
  if (iVar1 != 0) {
    FUN_ram_40005834(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005abf0.
 * REA evidence: ev_c81a89ac1a32ce174314920213d04d6d128e49a17118aaf345f28e267a57c22e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005abf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005ab94();
  if (iVar1 != 0) {
    FUN_ram_40005a84(iVar1,param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005ac16.
 * REA evidence: ev_de3330e3554f32bb2586fcd749003a9851a14076c94f25d4bf0ff6315f202d97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ac16(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_4000599e();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005ac1e.
 * REA evidence: ev_0a95db35bac44e5693448a46818eecc5dec783a263a36990f3bba27f04992561
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_400050c6(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


/* NanoCore 1.11, address 0x4005ac22.
 * REA evidence: ev_3cb857bfbb8843c5b5226b588be4caef7f31606e46932993d80a165f4a418f17
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4000504c(undefined4 *param_1,undefined1 param_2,uint param_3)

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


/* NanoCore 1.11, address 0x4005ac26.
 * REA evidence: ev_8e6f149fcbc6bcdbe1ff91b49c5a2c3810da72d7818a8034fd0112800f39c449
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40005156(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.11, address 0x4005ac2a.
 * REA evidence: ev_9d6b5558d925d8300845f8165080232f6e082323a59969585a66db179aa5142f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40005234(char *param_1)

{
  char *pcVar1;
  
  for (pcVar1 = param_1; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
  }
  return (int)pcVar1 - (int)param_1;
}


/* NanoCore 1.11, address 0x4005ac2e.
 * REA evidence: ev_3b165740786a1ec6a5433c41b288b22c2bbadd98443663b01cc44465540ad0aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_400051de(int param_1,int param_2)

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


/* NanoCore 1.11, address 0x4005ac32.
 * REA evidence: ev_abe134b1e0584e1842806e0e726fdd09e3401c68a77371f8f7a8bb74a607e41b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_4000521c(int param_1,int param_2)

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


/* NanoCore 1.11, address 0x4005ac36.
 * REA evidence: ev_d8602222973b9327044de64bef62dc2c3120059dd34db60cf17e048597cfb784
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005ac36(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_ram_40005234();
    iVar1 = FUN_ram_4005ab20(iVar2 + 1);
    if (iVar1 != 0) {
      thunk_FUN_ram_400050c6(iVar1,param_1,iVar2 + 1);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4005ac68.
 * REA evidence: ev_a9ebb6d30204b5a1e9956336d8a5f8a607d09ff080fa600b99b1ff6f2cf48492
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_4005ac68(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _DAT_ram_30080dfc;
  if (_DAT_ram_30080dfc == (int *)0x0) {
    piVar1 = (int *)FUN_ram_40005656(8);
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_ram_40004466(&DAT_ram_400975d0);
      if (iVar2 == 0) {
        FUN_ram_400056b4(piVar1);
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = iVar2;
        piVar1[1] = 1;
        _DAT_ram_30080dfc = piVar1;
      }
    }
  }
  else {
    _DAT_ram_30080dfc[1] = _DAT_ram_30080dfc[1] + 1;
  }
  return piVar1;
}


/* NanoCore 1.11, address 0x4005acba.
 * REA evidence: ev_dee5389545621ae15fc1361d42a7695da85c35722ae2e90cbb80cfd448795b83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005acba(undefined4 *param_1)

{
  FUN_ram_400045f4(*param_1);
  return;
}


/* NanoCore 1.11, address 0x4005acc0.
 * REA evidence: ev_9709739e272fe3be5da100c7beefcda967395f563ee4e8f4ff88e2731379f13a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005acc0(int param_1)

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


/* NanoCore 1.11, address 0x4005ad0a.
 * REA evidence: ev_a32ae04920ae6c28dc1cee2d56a352d8688021f7b8edc92918107cc99ecc8242
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ad0a(int param_1,uint param_2,undefined1 *param_3)

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


/* NanoCore 1.11, address 0x4005ad24.
 * REA evidence: ev_e250dd3bd398ab144ba41dc168b4ecfb7250d8d216240dcf360249192f820460
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005ad24(int param_1,int param_2)

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
    pcVar3 = &DAT_ram_40099d74;
    do {
      if (((*pcVar3 == *(char *)(param_1 + 0xc)) && (pcVar3[1] == *(char *)(param_1 + 0xd))) &&
         (pcVar3[2] == *(char *)(param_1 + 0xe))) {
        bVar4 = pcVar3[3];
      }
      pcVar3 = pcVar3 + 4;
    } while (pcVar3 != &DAT_ram_40099dc4);
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
        goto LAB_ram_4005addc;
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
        goto LAB_ram_4005adfc;
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
        goto LAB_ram_4005addc;
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
        goto LAB_ram_4005adfc;
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
LAB_ram_4005addc:
        *(undefined2 *)(param_1 + 0x58) = uVar1;
        goto LAB_ram_4005adfc;
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
LAB_ram_4005adfc:
  *(undefined1 *)(param_1 + 0x5a) = uVar5;
  return 0;
}


/* NanoCore 1.11, address 0x4005af0c.
 * REA evidence: ev_cfec53597aa6f3f9c0efe2b47f5ffb84b9a078df62f2247c0e311809bfd4439c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005af0c(int param_1,undefined4 param_2)

{
  undefined1 auStack_11 [13];
  
  auStack_11[0] = 5;
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,auStack_11,1,param_2,1,*(code **)(param_1 + 0x30));
  return;
}


/* NanoCore 1.11, address 0x4005af2e.
 * REA evidence: ev_edd4274b52e77f60f49357e069bc9d9d5fd40951eac7a4c1c13a7971674c2156
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005af2e(int param_1,int param_2)

{
  int iVar1;
  byte abStack_11 [5];
  
  while ((iVar1 = FUN_ram_4005af0c(param_1,abStack_11), iVar1 != 0 || ((abStack_11[0] & 1) != 0))) {
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


/* NanoCore 1.11, address 0x4005af66.
 * REA evidence: ev_cab785181eabbe4a1289a8bfd7d26a6f696a1a487bed67bcf9628a8f103fe3ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005af66(int param_1,int param_2,uint param_3,undefined1 *param_4)

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
  iVar4 = FUN_ram_4005af2e(param_1,1000);
  uVar7 = (uint)param_4 & 0x1f;
  uVar2 = param_3;
  if (param_3 < 0x101) {
    bVar1 = true;
    puVar3 = auStack_160;
    if (uVar7 != 0) goto LAB_ram_4005afe2;
  }
  else if (uVar7 != 0) {
    uVar2 = 0x20 - uVar7;
  }
  bVar1 = false;
  puVar3 = param_4;
LAB_ram_4005afe2:
  if (iVar4 == 0) {
    do {
      if (((uVar2 & 0x1f) != 0) && (0x100 < uVar2)) {
        uVar2 = uVar2 & 0xffffffe0;
      }
      iVar4 = (**(code **)(param_1 + 0x28))(iVar8,&uStack_16c);
      if (iVar4 != 0) break;
      if (*(char *)(param_1 + 0x54) == '\x03') {
        uStack_168 = 3;
        FUN_ram_4005ad0a(*(undefined1 *)(param_1 + 0x45),param_2,auStack_167);
        cVar6 = (*(char *)(param_1 + 0x45) != '\0') + '\x04';
        FUN_ram_4003dfb0(uStack_16c,param_2,cVar6,uVar2);
        FUN_ram_4003e028();
        iVar4 = (**(code **)(param_1 + 0x30))
                          (iVar8,&uStack_168,cVar6,puVar3,uVar2,*(code **)(param_1 + 0x30));
        FUN_ram_4003e04c();
        iVar5 = FUN_ram_4003e060();
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
        FUN_ram_4000304c(param_4,puVar3,uVar2);
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


