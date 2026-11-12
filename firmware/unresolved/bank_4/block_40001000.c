/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40001000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40001076.
 * REA evidence: ev_9412103ae80ee497f8c331291b011d6d0fe497e20af5734df0bf45ab38be752c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40001076(void)

{
  float in_register_00000100;
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = ABS(in_register_00000100);
  fVar1 = in_register_00000100;
  if ((uint)fVar2 < 0x7f800001) {
    if (fVar2 == INFINITY) {
      fVar1 = 0.0;
      if (-1 < (int)in_register_00000100) {
        fVar1 = in_register_00000100;
      }
    }
    else {
      if (0x42b17217 < (int)in_register_00000100) {
        return in_register_00000100;
      }
      if (((-1 < (int)in_register_00000100) || (fVar1 = 0.0, (uint)fVar2 < 0x42cff1b6)) &&
         (fVar1 = in_register_00000100, 0x3eb17218 < (uint)fVar2)) {
        if ((uint)fVar2 < 0x3f851592) {
          iVar3 = ((int)in_register_00000100 >> 0x1f) * 2 + 1;
        }
        else {
          iVar3 = (int)(in_register_00000100 * DAT_ram_40098664 +
                       (float)*(undefined8 *)
                               (&DAT_ram_40091b1c + ((int)in_register_00000100 >> 0x1f) * -4));
        }
        if ((iVar3 != 0) && (-0x7e < iVar3)) {
          fVar1 = (float)(iVar3 * 0x800000 + (int)in_register_00000100);
        }
      }
    }
  }
  return fVar1;
}


/* NanoCore 1.10, address 0x400012b2.
 * REA evidence: ev_5f6e0c1c9259c625480f63f73fddbb996ebd84010434d3042e93e10bf241bdfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_400012b2(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint in_register_00000100;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  
  if ((in_register_00000100 & 0x7fffffff) == 0) {
    return DAT_ram_40099e04 / 0.0;
  }
  if ((int)in_register_00000100 < 0) {
    return (param_1 - param_1) / 0.0;
  }
  if (0x7f7fffff < (int)in_register_00000100) {
    return param_1 + param_1;
  }
  iVar7 = 0;
  if ((int)in_register_00000100 < 0x800000) {
    iVar7 = -0x19;
  }
  uVar5 = in_register_00000100 & 0x7fffff;
  uVar6 = uVar5 + 0x4afb20 & 0x800000;
  fVar4 = (float)(uVar6 ^ 0x3f800000 | uVar5) - DAT_ram_4009281c;
  iVar7 = ((int)in_register_00000100 >> 0x17) + -0x7f + iVar7 + ((int)uVar6 >> 0x17);
  if ((uVar5 + 0xf & 0x7ffff0) == 0) {
    if (fVar4 == 0.0) {
      if (iVar7 == 0) {
        return 0.0;
      }
      return (float)iVar7 * DAT_ram_40099de8 + (float)iVar7 * DAT_ram_40099dec;
    }
    fVar8 = fVar4 * fVar4 * (-(fVar4 * DAT_ram_400982d0) + DAT_ram_40092864);
    if (iVar7 != 0) {
      return (float)iVar7 * DAT_ram_40099de8 -
             ((-((float)iVar7 * DAT_ram_40099dec) + fVar8) - fVar4);
    }
  }
  else {
    fVar2 = fVar4 / (fVar4 + (float)PTR_firmware_entry_ram_40092830);
    fVar1 = (float)iVar7;
    fVar3 = fVar2 * fVar2;
    fVar8 = fVar3 * fVar3;
    fVar3 = ((fVar8 * DAT_ram_40099e0c + DAT_ram_40099e10) * fVar8 + DAT_ram_40098118) * fVar8 +
            (((fVar8 * DAT_ram_40099e14 + DAT_ram_40099e18) * fVar8 + DAT_ram_40099e1c) * fVar8 +
            DAT_ram_4009855c) * fVar3;
    if ((int)(0x35c288 - uVar5 | uVar5 - 0x30a3d0) < 1) {
      fVar2 = (fVar4 - fVar3) * fVar2;
      if (iVar7 == 0) {
        return fVar4 - fVar2;
      }
      return fVar1 * DAT_ram_40099de8 - ((-(fVar1 * DAT_ram_40099dec) + fVar2) - fVar4);
    }
    fVar8 = fVar4 * DAT_ram_40092864 * fVar4;
    fVar2 = (fVar3 + fVar8) * fVar2;
    if (iVar7 != 0) {
      return fVar1 * DAT_ram_40099de8 - ((fVar8 - (fVar1 * DAT_ram_40099dec + fVar2)) - fVar4);
    }
    fVar8 = fVar8 - fVar2;
  }
  return fVar4 - fVar8;
}


/* NanoCore 1.10, address 0x400014c2.
 * REA evidence: ev_631f6dcbb90a546b5a00c5776d5349585b9ab0815b1985a9898e8ed9414632c3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_400014c2(float param_1)

{
  float fVar1;
  int iVar2;
  uint in_register_00000100;
  int iVar3;
  float fVar4;
  
  if ((in_register_00000100 & 0x7fffffff) == 0) {
    return DAT_ram_40099e04 / 0.0;
  }
  if (-1 < (int)in_register_00000100) {
    if ((int)in_register_00000100 < 0x7f800000) {
      iVar3 = 0;
      if ((int)in_register_00000100 < 0x800000) {
        iVar3 = -0x19;
      }
      iVar3 = ((int)in_register_00000100 >> 0x17) + -0x7f + iVar3;
      iVar2 = iVar3 >> 0x1f;
      fVar1 = (float)(iVar3 - iVar2);
      fVar4 = (float)FUN_ram_400012b2(in_register_00000100 & 0x7fffff | (iVar2 + 0x7f) * 0x800000);
      return fVar1 * DAT_ram_40099e28 + fVar1 * DAT_ram_40099e24 + fVar4 * DAT_ram_40099e20;
    }
    return param_1 + param_1;
  }
  return (param_1 - param_1) / 0.0;
}


/* NanoCore 1.10, address 0x4000157a.
 * REA evidence: ev_75076ce01352b7094251a85da00cdb58605b0c77f270ef3797b8049e0a925cfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40001630) */
/* WARNING: Removing unreachable block (ram,0x4000163c) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_ram_4000157a(void)

{
  float fVar1;
  float in_register_00000100;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  float fVar15;
  
  fVar3 = ABS(in_register_00000100);
  if (fVar3 == 0.0) goto LAB_ram_400015de;
  fVar2 = ABS(in_register_00000100);
  if (0x7f800000 < (uint)fVar2) {
LAB_ram_400015b2:
    uVar14 = FUN_ram_40002c9c(s_ep__02x_clear_halt_ram_40092960 + 0x14);
    return uVar14;
  }
  if (0x7f800000 < (uint)fVar3) {
    if (fVar2 == 1.0) goto LAB_ram_400015de;
    goto LAB_ram_400015b2;
  }
  iVar13 = 0;
  if ((int)in_register_00000100 < 0) {
    if (0x4b7fffff < (uint)fVar3) {
      iVar13 = 2;
      goto LAB_ram_40001604;
    }
    if ((0x3f7fffff < (uint)fVar3) &&
       (uVar11 = 0x96 - ((int)fVar3 >> 0x17), uVar5 = (int)fVar3 >> (uVar11 & 0x1f),
       (float)(uVar5 << (uVar11 & 0x1f)) == fVar3)) {
      iVar13 = 2 - (uVar5 & 1);
    }
  }
  else {
LAB_ram_40001604:
    if (fVar3 == INFINITY) {
      if (fVar2 != 1.0) {
        if ((uint)fVar2 < 0x3f800001) {
          if (-1 < (int)in_register_00000100) {
            return 0;
          }
          return (ulonglong)(uint)-in_register_00000100;
        }
        if ((int)in_register_00000100 < 0) {
          return 0;
        }
        return (ulonglong)(uint)in_register_00000100;
      }
LAB_ram_400015de:
      return (ulonglong)(uint)DAT_ram_4009281c;
    }
  }
  if (fVar3 == 1.0) {
    if (-1 < (int)in_register_00000100) {
      return (ulonglong)(uint)in_register_00000100;
    }
    return (ulonglong)(uint)(DAT_ram_4009281c / in_register_00000100);
  }
  if (in_register_00000100 == 2.0) {
    return 0x40800000;
  }
  if (in_register_00000100 == 0.5) {
    uVar14 = FUN_ram_40001e48();
    return uVar14;
  }
  fVar9 = in_register_00000100;
  uVar14 = FUN_ram_40002c70(in_register_00000100);
  if (((fVar2 == INFINITY) || (fVar2 == 0.0)) || (fVar2 == 1.0)) {
    if (-1 < (int)in_register_00000100) {
      return uVar14;
    }
    fVar3 = DAT_ram_4009281c / (float)uVar14;
    if (fVar2 == 1.0 && iVar13 == 0) {
      return (ulonglong)(uint)((fVar3 - fVar3) / (fVar3 - fVar3));
    }
    if (iVar13 != 1) {
      return (ulonglong)(uint)fVar3;
    }
    return (ulonglong)(uint)-fVar3;
  }
  if (iVar13 == 0 && (int)in_register_00000100 < 0) {
    return (ulonglong)
           (uint)((in_register_00000100 - in_register_00000100) /
                 (in_register_00000100 - in_register_00000100));
  }
  if ((uint)fVar3 < 0x4d000001) {
    iVar8 = 0;
    if (((uint)in_register_00000100 & 0x7f800000) == 0) {
      iVar8 = -0x18;
      fVar2 = fVar9;
    }
    uVar5 = (uint)fVar2 & 0x7fffff;
    iVar8 = ((int)fVar2 >> 0x17) + -0x7f + iVar8;
    fVar2 = (float)(uVar5 | 0x3f800000);
    fVar3 = DAT_ram_4009281c;
    if (uVar5 < 0x1cc472) {
      fVar6 = 0.0;
      fVar15 = 0.0;
      iVar12 = 0;
    }
    else if (uVar5 < 0x5db3d7) {
      iVar12 = 0x200000;
      fVar3 = DAT_ram_400980bc;
      fVar15 = DAT_ram_40099e30;
      fVar6 = DAT_ram_40099e2c;
    }
    else {
      fVar2 = (float)((int)fVar2 - 0x800000);
      iVar8 = iVar8 + 1;
      iVar12 = 0;
      fVar15 = 0.0;
      fVar6 = 0.0;
    }
    fVar7 = DAT_ram_4009281c / (fVar3 + fVar2);
    fVar4 = (float)(((int)fVar2 >> 1 | 0x20000000U) + 0x40000 + iVar12);
    fVar1 = (fVar2 - fVar3) * fVar7;
    fVar1 = fVar1 * fVar1;
    fVar10 = (float)((uint)fVar9 & 0xfffff000);
    fVar7 = (-(fVar10 * (fVar2 - (fVar4 - fVar3))) + -(fVar10 * fVar4) + (fVar2 - fVar3)) * fVar7;
    fVar3 = (float)((uint)fVar9 & 0xfffff000);
    fVar2 = (float)((uint)fVar9 & 0xfffff000);
    fVar3 = (DAT_ram_40099e54 * fVar2 +
             ((fVar7 * fVar3 +
              ((fVar1 * fVar1 *
                (((((fVar1 * DAT_ram_40099e40 + DAT_ram_40099e44) * fVar1 + DAT_ram_40099e48) *
                   fVar1 + DAT_ram_400982d0) * fVar1 + DAT_ram_40099e4c) * fVar1 + DAT_ram_400980e8)
               + (fVar9 + fVar10) * fVar7) - (-(fVar10 * fVar10) + (fVar3 - DAT_ram_4009282c))) *
              fVar9) - (-(fVar10 * fVar3) + fVar2)) * DAT_ram_40099e50 + fVar15) -
            (-(fVar2 * DAT_ram_40099e58) +
            (((float)((uint)fVar9 & 0xfffff000) - (float)iVar8) - fVar6));
  }
  else {
    if ((uint)fVar2 < 0x3f7ffff8) {
      if (-1 < (int)in_register_00000100) {
        return 0;
      }
LAB_ram_40001b78:
      return (ulonglong)(uint)(DAT_ram_40099dd4 * DAT_ram_40099dd4);
    }
    if (0x3f800007 < (uint)fVar2) {
      if ((int)in_register_00000100 < 1) {
        return 0;
      }
      goto LAB_ram_40001b78;
    }
    fVar3 = (float)uVar14 - DAT_ram_4009281c;
    fVar3 = (fVar3 * DAT_ram_40099e34 -
            fVar3 * fVar3 *
            (-((-(fVar3 * DAT_ram_400934d8) + DAT_ram_400982d0) * fVar3) + DAT_ram_40092864) *
            DAT_ram_40098664) - (-(fVar3 * DAT_ram_40099e38) + (float)((uint)fVar9 & 0xfffff000));
  }
  fVar2 = DAT_ram_4009281c;
  if (iVar13 == 1 && (int)in_register_00000100 < 0) {
    fVar2 = DAT_ram_40092818;
  }
  fVar15 = (float)((uint)fVar9 & 0xfffff000) * (float)((uint)in_register_00000100 & 0xfffff000);
  fVar3 = (in_register_00000100 - (float)((uint)in_register_00000100 & 0xfffff000)) *
          (float)((uint)fVar9 & 0xfffff000) + fVar3 * in_register_00000100;
  fVar6 = ABS(fVar9);
  if ((int)fVar9 < 1) {
    if (0x43160000 < (uint)fVar6) {
LAB_ram_40001ba8:
      return (ulonglong)(uint)(fVar2 * DAT_ram_40099e60 * DAT_ram_40099e60);
    }
    if (fVar6 != 150.0) goto LAB_ram_40001736;
    if (fVar3 <= (fVar3 + fVar15) - fVar15) goto LAB_ram_40001ba8;
  }
  else {
    if (0x43000000 < (uint)fVar6) {
LAB_ram_40001b62:
      return (ulonglong)(uint)(fVar2 * DAT_ram_40099dd4 * DAT_ram_40099dd4);
    }
    if (fVar6 == 128.0) {
      if ((fVar3 + fVar15) - fVar15 < fVar3 + DAT_ram_40099e5c) goto LAB_ram_40001b62;
    }
    else {
LAB_ram_40001736:
      iVar8 = 0;
      iVar13 = 0;
      if ((uint)fVar6 < 0x3f000001) goto LAB_ram_40001742;
    }
  }
  uVar11 = (0x800000 >> (((int)fVar6 >> 0x17) - 0x7eU & 0x1f)) + (int)fVar9;
  uVar5 = ((uVar11 & 0x7fffffff) >> 0x17) - 0x7f;
  iVar13 = (int)(uVar11 & 0x7fffff | 0x800000) >> (0x17 - uVar5 & 0x1f);
  if ((int)fVar9 < 0) {
    iVar13 = -iVar13;
  }
  iVar8 = iVar13 << 0x17;
  fVar15 = fVar15 - (float)(uVar11 & ~(0x7fffff >> (uVar5 & 0x1f)));
LAB_ram_40001742:
  fVar7 = (float)((uint)fVar9 & 0xfffff000);
  fVar3 = (fVar3 - (fVar7 - fVar15)) * DAT_ram_40098668 + DAT_ram_40099e64 * fVar7;
  fVar15 = DAT_ram_40099e68 * fVar7 + fVar3;
  fVar6 = fVar15 * fVar15;
  fVar3 = fVar3 - (-(fVar7 * DAT_ram_40099e68) + fVar15);
  fVar6 = -(((((fVar6 * DAT_ram_40099df0 + DAT_ram_40099df4) * fVar6 + DAT_ram_40099df8) * fVar6 +
             DAT_ram_40099dfc) * fVar6 + DAT_ram_40098678) * fVar6) + fVar15;
  fVar9 = (float)(iVar8 + (int)fVar9);
  if ((int)fVar9 >> 0x17 < 1) {
    fVar9 = (float)FUN_ram_40002d88(DAT_ram_4009281c -
                                    (((fVar15 * fVar6) /
                                      (fVar6 - (float)PTR_firmware_entry_ram_40092830) -
                                     (fVar15 * fVar3 + fVar3)) - fVar15),iVar13);
  }
  return (ulonglong)(uint)(fVar9 * fVar2);
}


/* NanoCore 1.10, address 0x40001bc4.
 * REA evidence: ev_e08585b9282a8dc0f750d9be6e5b591f4a7699ff370eeabb338239733c577d4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40001bc4(undefined8 param_1,float *param_2)

{
  float in_register_00000100;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar2 = ABS(in_register_00000100);
  if ((uint)fVar2 < 0x3f490fd9) {
    *(undefined8 *)param_2 = param_1;
    param_2[1] = 0.0;
    return 0;
  }
  fVar8 = (float)param_1;
  if ((uint)fVar2 < 0x4016cbe4) {
    if (0 < (int)in_register_00000100) {
      fVar8 = fVar8 - DAT_ram_40099e6c;
      fVar2 = DAT_ram_40099e70;
      if (((uint)in_register_00000100 & 0x7ffffff0) == 0x3fc90fd0) {
        fVar8 = fVar8 - DAT_ram_40099e74;
        fVar2 = DAT_ram_40099e78;
      }
      *(ulonglong *)param_2 = (ulonglong)(uint)(fVar8 - fVar2);
      *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)((fVar8 - (fVar8 - fVar2)) - fVar2);
      return 1;
    }
    fVar8 = fVar8 + DAT_ram_40099e6c;
    fVar2 = DAT_ram_40099e70;
    if (((uint)in_register_00000100 & 0x7ffffff0) == 0x3fc90fd0) {
      fVar8 = fVar8 + DAT_ram_40099e74;
      fVar2 = DAT_ram_40099e78;
    }
    *(ulonglong *)param_2 = (ulonglong)(uint)(fVar8 + fVar2);
    *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)((fVar8 - (fVar8 + fVar2)) + fVar2);
    return -1;
  }
  iVar3 = (int)fVar2 >> 0x17;
  if (0x43490f80 < (uint)fVar2) {
    if (0x7f7fffff < (uint)fVar2) {
      *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)(fVar8 - fVar8);
      *(ulonglong *)param_2 = (ulonglong)(uint)(fVar8 - fVar8);
      return 0;
    }
    fVar2 = (float)((int)fVar2 + (iVar3 + -0x86) * -0x800000);
    fStack_1c = (float)(int)fVar2;
    cVar5 = '\x03';
    fVar2 = (fVar2 - fStack_1c) * DAT_ram_40099e88;
    fStack_18 = (float)(int)fVar2;
    fStack_14 = (fVar2 - fStack_18) * DAT_ram_40099e88;
    if (fStack_14 == 0.0) {
      cVar5 = (fStack_18 != 0.0) + '\x01';
    }
    iVar3 = FUN_ram_40002060(&fStack_1c,param_2,iVar3 + -0x86,cVar5,2,&DAT_ram_40091ba4);
    if (-1 < (int)in_register_00000100) {
      return iVar3;
    }
    *(ulonglong *)param_2 = (ulonglong)(uint)-(float)*(undefined8 *)param_2;
    *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)-(float)*(undefined8 *)(param_2 + 1);
    return -iVar3;
  }
  fVar1 = in_register_00000100;
  fVar6 = (float)FUN_ram_40002c70();
  iVar4 = (int)(fVar6 * DAT_ram_40099e7c + DAT_ram_40092864);
  fVar2 = (float)iVar4;
  fVar6 = -(fVar2 * DAT_ram_40099e6c) + fVar6;
  fVar8 = fVar2 * DAT_ram_40099e70;
  if (((0x1f < iVar4) ||
      (((uint)in_register_00000100 & 0x7fffff00) == *(uint *)(&DAT_ram_40091b24 + (iVar4 + -1) * 4))
      ) && (8 < (int)(iVar3 - ((uint)ABS(fVar1) >> 0x17)))) {
    fVar7 = -(fVar2 * DAT_ram_40099e74) + fVar6;
    fVar8 = fVar2 * DAT_ram_40099e78 - (-(fVar2 * DAT_ram_40099e74) + (fVar6 - fVar7));
    if ((int)(iVar3 - ((uint)ABS(fVar1) >> 0x17)) < 0x1a) {
      *(ulonglong *)param_2 = (ulonglong)(uint)(fVar7 - fVar8);
      goto LAB_ram_40001d6a;
    }
    fVar6 = -(fVar2 * DAT_ram_40099e80) + fVar7;
    fVar8 = fVar2 * DAT_ram_40099e84 - (-(fVar2 * DAT_ram_40099e80) + (fVar7 - fVar6));
  }
  *param_2 = fVar1;
  fVar7 = fVar6;
LAB_ram_40001d6a:
  fVar8 = (fVar7 - fVar1) - fVar8;
  *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)fVar8;
  if ((int)in_register_00000100 < 0) {
    iVar4 = -iVar4;
    *(ulonglong *)param_2 = (ulonglong)(uint)-fVar1;
    *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)-fVar8;
  }
  return iVar4;
}


/* NanoCore 1.10, address 0x40001e48.
 * REA evidence: ev_a0c18ad81b0ec767b48c08159c68c0c598667afbccd58b5850be2a9f31ad8db1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40001e48(void)

{
  uint in_register_00000100;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return in_register_00000100;
  }
  if ((in_register_00000100 & 0x7fffffff) != 0) {
    if ((int)in_register_00000100 < 0) {
      return in_register_00000100;
    }
    iVar4 = (int)in_register_00000100 >> 0x17;
    if ((in_register_00000100 & 0x7f800000) == 0) {
      if ((in_register_00000100 & 0x800000) == 0) {
        iVar7 = 0;
        do {
          iVar1 = iVar7;
          in_register_00000100 = in_register_00000100 << 1;
          iVar7 = iVar1 + 1;
        } while ((in_register_00000100 & 0x800000) == 0);
        iVar4 = iVar4 - iVar1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    uVar6 = in_register_00000100 & 0x7fffff | 0x800000;
    iVar7 = uVar6 << 1;
    if ((iVar4 - 0x7fU & 1) != 0) {
      iVar7 = uVar6 << 2;
    }
    iVar3 = 0x19;
    uVar6 = 0;
    iVar1 = 0;
    uVar5 = 0x1000000;
    do {
      iVar2 = iVar1 + uVar5;
      iVar3 = iVar3 + -1;
      if (iVar2 <= iVar7) {
        iVar1 = iVar2 + uVar5;
        iVar7 = iVar7 - iVar2;
        uVar6 = uVar6 + uVar5;
      }
      iVar7 = iVar7 << 1;
      uVar5 = uVar5 >> 1;
    } while (iVar3 != 0);
    if (iVar7 != 0) {
      uVar6 = uVar6 + 1 & 0xfffffffe;
    }
    in_register_00000100 = ((int)uVar6 >> 1) + 0x3f000000 + ((int)(iVar4 - 0x7fU) >> 1) * 0x800000;
  }
  return in_register_00000100;
}


/* NanoCore 1.10, address 0x40001f18.
 * REA evidence: ev_4186e4113a19ad2f616f42215541926484ef6e978ea36a0086ee353edc45a9f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40001f18(float param_1,float param_2)

{
  float fVar1;
  float in_register_00000100;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ABS(in_register_00000100);
  if ((uint)fVar2 < 0x32000000) {
    if ((int)param_1 == 0) {
      return DAT_ram_4009281c;
    }
    fVar5 = param_1 * param_1;
    fVar5 = fVar5 * (fVar5 * (fVar5 * (fVar5 * (fVar5 * (fVar5 * DAT_ram_40099e94 + DAT_ram_40099e98
                                                        ) + DAT_ram_40099e9c) + DAT_ram_40099ea0) +
                             DAT_ram_40099ea4) + DAT_ram_40098674);
  }
  else {
    fVar1 = param_1 * param_1;
    fVar5 = (((((fVar1 * DAT_ram_40099e94 + DAT_ram_40099e98) * fVar1 + DAT_ram_40099e9c) * fVar1 +
              DAT_ram_40099ea0) * fVar1 + DAT_ram_40099ea4) * fVar1 + DAT_ram_40098674) * fVar1;
    if (0x3e999999 < (uint)fVar2) {
      fVar4 = DAT_ram_40099e90;
      fVar3 = DAT_ram_40099e8c;
      if ((uint)fVar2 < 0x3f480001) {
        fVar4 = (float)((int)fVar2 + -0x1000000);
        fVar3 = DAT_ram_4009281c - (float)((int)fVar2 + -0x1000000);
      }
      return fVar3 - ((fVar1 * DAT_ram_40092864 - fVar4) -
                     (fVar1 * fVar5 - in_register_00000100 * param_2));
    }
  }
  return DAT_ram_4009281c -
         (param_1 * param_1 * DAT_ram_40092864 -
         (param_1 * param_1 * fVar5 - in_register_00000100 * param_2));
}


