/* NanoCore 1.12: FUN_ram_40001bb4 at 0x40001bb4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_015db0695cc42599df3334c0d9279c39e78d0b8dcfc294c6ec26477c11fcb3e5
 * Source: analysis/rea-1.12-effects/results/01051-export-0x40001bb4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

int FUN_ram_40001bb4(undefined8 param_1,float *param_2)

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
      fVar8 = fVar8 - DAT_ram_400a4480;
      fVar2 = DAT_ram_400a4484;
      if (((uint)in_register_00000100 & 0x7ffffff0) == 0x3fc90fd0) {
        fVar8 = fVar8 - DAT_ram_400a4488;
        fVar2 = DAT_ram_400a448c;
      }
      *(ulonglong *)param_2 = (ulonglong)(uint)(fVar8 - fVar2);
      *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)((fVar8 - (fVar8 - fVar2)) - fVar2);
      return 1;
    }
    fVar8 = fVar8 + DAT_ram_400a4480;
    fVar2 = DAT_ram_400a4484;
    if (((uint)in_register_00000100 & 0x7ffffff0) == 0x3fc90fd0) {
      fVar8 = fVar8 + DAT_ram_400a4488;
      fVar2 = DAT_ram_400a448c;
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
    fVar2 = (fVar2 - fStack_1c) * DAT_ram_400a449c;
    fStack_18 = (float)(int)fVar2;
    fStack_14 = (fVar2 - fStack_18) * DAT_ram_400a449c;
    if (fStack_14 == 0.0) {
      cVar5 = (fStack_18 != 0.0) + '\x01';
    }
    iVar3 = FUN_ram_40002050(&fStack_1c,param_2,iVar3 + -0x86,cVar5,2,&DAT_ram_40095a8c);
    if (-1 < (int)in_register_00000100) {
      return iVar3;
    }
    *(ulonglong *)param_2 = (ulonglong)(uint)-(float)*(undefined8 *)param_2;
    *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)-(float)*(undefined8 *)(param_2 + 1);
    return -iVar3;
  }
  fVar1 = in_register_00000100;
  fVar6 = (float)FUN_ram_40002c60();
  iVar4 = (int)(fVar6 * DAT_ram_400a4490 + (float)DAT_ram_4009675c);
  fVar2 = (float)iVar4;
  fVar6 = -(fVar2 * DAT_ram_400a4480) + fVar6;
  fVar8 = fVar2 * DAT_ram_400a4484;
  if (((0x1f < iVar4) ||
      (((uint)in_register_00000100 & 0x7fffff00) == *(uint *)(&DAT_ram_40095a0c + (iVar4 + -1) * 4))
      ) && (8 < (int)(iVar3 - ((uint)ABS(fVar1) >> 0x17)))) {
    fVar7 = -(fVar2 * DAT_ram_400a4488) + fVar6;
    fVar8 = fVar2 * DAT_ram_400a448c - (-(fVar2 * DAT_ram_400a4488) + (fVar6 - fVar7));
    if ((int)(iVar3 - ((uint)ABS(fVar1) >> 0x17)) < 0x1a) {
      *(ulonglong *)param_2 = (ulonglong)(uint)(fVar7 - fVar8);
      goto LAB_ram_40001d5a;
    }
    fVar6 = -(fVar2 * DAT_ram_400a4494) + fVar7;
    fVar8 = fVar2 * DAT_ram_400a4498 - (-(fVar2 * DAT_ram_400a4494) + (fVar7 - fVar6));
  }
  *param_2 = fVar1;
  fVar7 = fVar6;
LAB_ram_40001d5a:
  fVar8 = (fVar7 - fVar1) - fVar8;
  *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)fVar8;
  if ((int)in_register_00000100 < 0) {
    iVar4 = -iVar4;
    *(ulonglong *)param_2 = (ulonglong)(uint)-fVar1;
    *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)-fVar8;
  }
  return iVar4;
}

