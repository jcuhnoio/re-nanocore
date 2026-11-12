/* NanoCore 1.12: FUN_ram_4000156a at 0x4000156a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_6181f8b4721ab50093c53d3050de4e9d1a699ee6b4d3806a84abecbd2db5b47f
 * Source: analysis/rea-1.12-effects/results/01050-export-0x4000156a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x40001620) */
/* WARNING: Removing unreachable block (ram,0x4000162c) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_ram_4000156a(void)

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
  if (fVar3 == 0.0) goto LAB_ram_400015ce;
  fVar2 = ABS(in_register_00000100);
  if (0x7f800000 < (uint)fVar2) {
LAB_ram_400015a2:
    uVar14 = FUN_ram_40002c8c(s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20);
    return uVar14;
  }
  if (0x7f800000 < (uint)fVar3) {
    if (fVar2 == 1.0) goto LAB_ram_400015ce;
    goto LAB_ram_400015a2;
  }
  iVar13 = 0;
  if ((int)in_register_00000100 < 0) {
    if (0x4b7fffff < (uint)fVar3) {
      iVar13 = 2;
      goto LAB_ram_400015f4;
    }
    if ((0x3f7fffff < (uint)fVar3) &&
       (uVar11 = 0x96 - ((int)fVar3 >> 0x17), uVar5 = (int)fVar3 >> (uVar11 & 0x1f),
       (float)(uVar5 << (uVar11 & 0x1f)) == fVar3)) {
      iVar13 = 2 - (uVar5 & 1);
    }
  }
  else {
LAB_ram_400015f4:
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
LAB_ram_400015ce:
      return (ulonglong)(uint)DAT_ram_4009672c;
    }
  }
  if (fVar3 == 1.0) {
    if (-1 < (int)in_register_00000100) {
      return (ulonglong)(uint)in_register_00000100;
    }
    return (ulonglong)(uint)(DAT_ram_4009672c / in_register_00000100);
  }
  if (in_register_00000100 == 2.0) {
    return 0x40800000;
  }
  if (in_register_00000100 == 0.5) {
    uVar14 = FUN_ram_40001e38();
    return uVar14;
  }
  fVar9 = in_register_00000100;
  uVar14 = FUN_ram_40002c60(in_register_00000100);
  if (((fVar2 == INFINITY) || (fVar2 == 0.0)) || (fVar2 == 1.0)) {
    if (-1 < (int)in_register_00000100) {
      return uVar14;
    }
    fVar3 = DAT_ram_4009672c / (float)uVar14;
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
    fVar3 = DAT_ram_4009672c;
    if (uVar5 < 0x1cc472) {
      fVar6 = 0.0;
      fVar15 = 0.0;
      iVar12 = 0;
    }
    else if (uVar5 < 0x5db3d7) {
      iVar12 = 0x200000;
      fVar3 = (float)DAT_ram_4009f060;
      fVar15 = DAT_ram_400a4444;
      fVar6 = DAT_ram_400a4440;
    }
    else {
      fVar2 = (float)((int)fVar2 - 0x800000);
      iVar8 = iVar8 + 1;
      iVar12 = 0;
      fVar15 = 0.0;
      fVar6 = 0.0;
    }
    fVar7 = DAT_ram_4009672c / (fVar3 + fVar2);
    fVar4 = (float)(((int)fVar2 >> 1 | 0x20000000U) + 0x40000 + iVar12);
    fVar1 = (fVar2 - fVar3) * fVar7;
    fVar1 = fVar1 * fVar1;
    fVar10 = (float)((uint)fVar9 & 0xfffff000);
    fVar7 = (-(fVar10 * (fVar2 - (fVar4 - fVar3))) + -(fVar10 * fVar4) + (fVar2 - fVar3)) * fVar7;
    fVar3 = (float)((uint)fVar9 & 0xfffff000);
    fVar2 = (float)((uint)fVar9 & 0xfffff000);
    fVar3 = (DAT_ram_400a4468 * fVar2 +
             ((fVar7 * fVar3 +
              ((fVar1 * fVar1 *
                (((((fVar1 * DAT_ram_400a4454 + DAT_ram_400a4458) * fVar1 + DAT_ram_400a445c) *
                   fVar1 + DAT_ram_4009f2d4) * fVar1 + DAT_ram_400a4460) * fVar1 + DAT_ram_4009f080)
               + (fVar9 + fVar10) * fVar7) - (-(fVar10 * fVar10) + (fVar3 - DAT_ram_4009673c))) *
              fVar9) - (-(fVar10 * fVar3) + fVar2)) * DAT_ram_400a4464 + fVar15) -
            (-(fVar2 * DAT_ram_400a446c) +
            (((float)((uint)fVar9 & 0xfffff000) - (float)iVar8) - fVar6));
  }
  else {
    if ((uint)fVar2 < 0x3f7ffff8) {
      if (-1 < (int)in_register_00000100) {
        return 0;
      }
LAB_ram_40001b68:
      return (ulonglong)(uint)(DAT_ram_400a43e8 * DAT_ram_400a43e8);
    }
    if (0x3f800007 < (uint)fVar2) {
      if ((int)in_register_00000100 < 1) {
        return 0;
      }
      goto LAB_ram_40001b68;
    }
    fVar3 = (float)uVar14 - DAT_ram_4009672c;
    fVar3 = (fVar3 * DAT_ram_400a4448 -
            fVar3 * fVar3 *
            (-((-(fVar3 * DAT_ram_4009a374) + DAT_ram_4009f2d4) * fVar3) + (float)DAT_ram_4009675c)
            * DAT_ram_4009f658) - (-(fVar3 * DAT_ram_400a444c) + (float)((uint)fVar9 & 0xfffff000));
  }
  fVar2 = DAT_ram_4009672c;
  if (iVar13 == 1 && (int)in_register_00000100 < 0) {
    fVar2 = DAT_ram_40096728;
  }
  fVar15 = (float)((uint)fVar9 & 0xfffff000) * (float)((uint)in_register_00000100 & 0xfffff000);
  fVar3 = (in_register_00000100 - (float)((uint)in_register_00000100 & 0xfffff000)) *
          (float)((uint)fVar9 & 0xfffff000) + fVar3 * in_register_00000100;
  fVar6 = ABS(fVar9);
  if ((int)fVar9 < 1) {
    if (0x43160000 < (uint)fVar6) {
LAB_ram_40001b98:
      return (ulonglong)(uint)(fVar2 * DAT_ram_400a4474 * DAT_ram_400a4474);
    }
    if (fVar6 != 150.0) goto LAB_ram_40001726;
    if (fVar3 <= (fVar3 + fVar15) - fVar15) goto LAB_ram_40001b98;
  }
  else {
    if (0x43000000 < (uint)fVar6) {
LAB_ram_40001b52:
      return (ulonglong)(uint)(fVar2 * DAT_ram_400a43e8 * DAT_ram_400a43e8);
    }
    if (fVar6 == 128.0) {
      if ((fVar3 + fVar15) - fVar15 < fVar3 + DAT_ram_400a4470) goto LAB_ram_40001b52;
    }
    else {
LAB_ram_40001726:
      iVar8 = 0;
      iVar13 = 0;
      if ((uint)fVar6 < 0x3f000001) goto LAB_ram_40001732;
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
LAB_ram_40001732:
  fVar7 = (float)((uint)fVar9 & 0xfffff000);
  fVar3 = (fVar3 - (fVar7 - fVar15)) * DAT_ram_4009f65c + DAT_ram_400a4478 * fVar7;
  fVar15 = DAT_ram_400a447c * fVar7 + fVar3;
  fVar6 = fVar15 * fVar15;
  fVar3 = fVar3 - (-(fVar7 * DAT_ram_400a447c) + fVar15);
  fVar6 = -(((((fVar6 * DAT_ram_400a4404 + DAT_ram_400a4408) * fVar6 + DAT_ram_400a440c) * fVar6 +
             DAT_ram_400a4410) * fVar6 + DAT_ram_4009f66c) * fVar6) + fVar15;
  fVar9 = (float)(iVar8 + (int)fVar9);
  if ((int)fVar9 >> 0x17 < 1) {
    fVar9 = (float)FUN_ram_40002d78(DAT_ram_4009672c -
                                    (((fVar15 * fVar6) / (fVar6 - (float)PTR_entry_ram_40096740) -
                                     (fVar15 * fVar3 + fVar3)) - fVar15),iVar13);
  }
  return (ulonglong)(uint)(fVar9 * fVar2);
}

