/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40091000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4009100c.
 * REA evidence: ev_1d05d68e540784381d119c3a19f869a178a4c7e18d63cfdbb519968b72847f02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4009100c(undefined4 param_1,uint param_2,int param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  char *unaff_s1;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iStack0000000c;
  
  iStack0000000c = 0;
  if (_DAT_ram_3008b940 == 0) {
    iVar5 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar5 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_40091024;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_40091024;
    if (*unaff_s1 != '\0') goto LAB_ram_4009103a;
LAB_ram_4009124c:
    uVar3 = 4;
  }
  else {
LAB_ram_40091024:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (*unaff_s1 == '\0') {
joined_r0x4009149e:
      if (_DAT_ram_3008b940 == 0) goto LAB_ram_4009124c;
    }
    else {
LAB_ram_4009103a:
      if (((unaff_s1[1] == '\0') || (uVar4 = param_2 & 0xffffff, uVar4 != *(uint *)(unaff_s1 + 4)))
         || (uVar4 != *(uint *)(unaff_s1 + 8))) goto joined_r0x4009149e;
      if (param_3 != *(int *)(unaff_s1 + 0xc)) {
        if ((_DAT_ram_3008b940 == 0) ||
           (FUN_ram_40004b14(0x3008b914), param_3 != *(int *)(unaff_s1 + 0xc))) {
          *param_4 = 5;
          FUN_ram_40090ff0(1);
          return;
        }
        uVar3 = 3;
        goto LAB_ram_40091218;
      }
      bVar1 = unaff_s1[2];
      uVar8 = (uint)bVar1;
      iVar5 = FUN_ram_4008b674(uVar8,uVar4,&stack0x0000000c);
      if ((iVar5 == 0) && (param_3 == iStack0000000c)) {
        if ((DAT_ram_3008b908 == '\0') ||
           ((_DAT_ram_3008b070 != 0x53415442 || (_DAT_ram_3008b074 != 4)))) {
          memset(&DAT_ram_3008b070,0xff,0x898);
          iVar5 = FUN_ram_40094cd0();
          iVar6 = FUN_ram_40094cd0();
          if ((DAT_ram_3008b910 != '\0') ||
             ((((iVar6 == 0 || (*(code **)(iVar6 + 8) == (code *)0x0)) ||
               (iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0)) ||
              ((iVar5 == 0 || (*(code **)(iVar5 + 0xc) == (code *)0x0)))))) {
LAB_ram_400913fc:
            memset(&DAT_ram_3008b070,0xff,0x898);
            DAT_ram_3008b908 = '\0';
            goto LAB_ram_4009141a;
          }
          iVar5 = (**(code **)(iVar5 + 0xc))(&DAT_ram_3008b070);
          if (iVar5 == 1) {
            if ((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4))
            goto LAB_ram_400913fc;
          }
          else {
            if (iVar5 != 2) goto LAB_ram_400913fc;
            memset(&DAT_ram_3008b070,0xff,0x898);
            _DAT_ram_3008b070 = 0x53415442;
            _DAT_ram_3008b074 = 4;
            _DAT_ram_3008b07a = 0;
            iVar5 = 0x3008b094;
            do {
              *(undefined2 *)(iVar5 + -4) = 0;
              *(undefined4 *)(iVar5 + -0xc) = 0;
              *(undefined4 *)(iVar5 + -8) = 0;
              iVar6 = memset(iVar5,0,0x10);
              iVar5 = iVar6 + 0x20;
              *(undefined4 *)(iVar6 + 0x10) = DAT_ram_400a13d8;
            } while (iVar5 != 0x3008b554);
            iVar5 = 0x3008b554;
            do {
              *(undefined2 *)(iVar5 + -4) = 0;
              *(undefined4 *)(iVar5 + -0xc) = 0;
              *(undefined4 *)(iVar5 + -8) = 0;
              iVar6 = memset(iVar5,0,0x10);
              iVar5 = iVar6 + 0x20;
              *(undefined4 *)(iVar6 + 0x10) = DAT_ram_400a13d8;
            } while (iVar5 != 0x3008b914);
            iVar5 = FUN_ram_40094cd0();
            if (((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
                 (iVar6 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
                (((iVar6 == 0 || (*(code **)(iVar6 + 8) == (code *)0x0)) ||
                 ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0 ||
                  ((iVar5 == 0 || (*(code **)(iVar5 + 0x10) == (code *)0x0)))))))) ||
               (iVar5 = (**(code **)(iVar5 + 0x10))(&DAT_ram_3008b070), iVar5 == 0))
            goto LAB_ram_4009141a;
          }
          DAT_ram_3008b908 = '\x01';
        }
        if ((_DAT_ram_3008b90c == (int *)0x0) &&
           (_DAT_ram_3008b90c = (int *)FUN_ram_4002d154(0x898), _DAT_ram_3008b90c == (int *)0x0))
        goto LAB_ram_4009141a;
        FUN_ram_4000303c(_DAT_ram_3008b90c,&DAT_ram_3008b070,0x898);
        iVar5 = FUN_ram_40094cd0();
        if ((iVar5 == 0) ||
           ((*(code **)(iVar5 + 0x30) == (code *)0x0 ||
            (iVar5 = (**(code **)(iVar5 + 0x30))(1,uVar8,uVar4,param_3), piVar7 = _DAT_ram_3008b90c,
            iVar5 != 0)))) goto LAB_ram_4009141a;
        *(char *)((int)_DAT_ram_3008b90c + uVar8 * 0x20 + 0x4df) = (char)((uint)param_3 >> 0x18);
        *(char *)(piVar7 + uVar8 * 8 + 0x137) = (char)param_3;
        *(char *)((int)piVar7 + uVar8 * 0x20 + 0x4dd) = (char)((uint)param_3 >> 8);
        *(char *)((int)piVar7 + uVar8 * 0x20 + 0x4de) = (char)((uint)param_3 >> 0x10);
        *(undefined1 *)(piVar7 + uVar8 * 8 + 0x138) = 1;
        *(char *)(piVar7 + uVar8 * 8 + 0x136) = (char)uVar4;
        *(char *)((int)piVar7 + uVar8 * 0x20 + 0x4d9) = (char)(param_2 >> 8);
        *(char *)((int)piVar7 + uVar8 * 0x20 + 0x4da) = (char)(param_2 >> 0x10);
        *(undefined1 *)((int)piVar7 + uVar8 * 0x20 + 0x4db) = 0;
        *(undefined1 *)((int)piVar7 + uVar8 * 0x20 + 0x4e1) = 0;
        *(byte *)(piVar7 + 2) = bVar1;
        *(undefined1 *)((int)piVar7 + 9) = 0;
        iVar5 = FUN_ram_40094cd0();
        if ((((*piVar7 == 0x53415442) && ((short)piVar7[1] == 4)) &&
            (iVar6 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0')) &&
           ((((iVar6 != 0 && (*(code **)(iVar6 + 8) != (code *)0x0)) &&
             ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 != 0 &&
              ((iVar5 != 0 && (*(code **)(iVar5 + 0x10) != (code *)0x0)))))) &&
            (iVar5 = (**(code **)(iVar5 + 0x10))(piVar7), iVar5 != 0)))) {
          DAT_ram_3008b908 = '\x01';
          FUN_ram_4000303c(&DAT_ram_3008b070,_DAT_ram_3008b90c,0x898);
          iVar5 = FUN_ram_40094cd0();
          if ((iVar5 != 0) && (*(code **)(iVar5 + 0x34) != (code *)0x0)) {
            (**(code **)(iVar5 + 0x34))(1,uVar8);
          }
          piVar7 = (int *)(gp + -8);
          if (*piVar7 == -1) {
            *piVar7 = 1;
          }
          else {
            *piVar7 = *piVar7 + 1;
          }
          _DAT_ram_30088044 = 0;
          _DAT_ram_30088048 = 0;
          _DAT_ram_3008804c = 0;
          _DAT_ram_30088050 = 0;
          _DAT_ram_30088054 = 0;
          uVar3 = 0;
          if (_DAT_ram_3008b940 != 0) {
            FUN_ram_40004b14(0x3008b914);
          }
          goto LAB_ram_40091218;
        }
        iVar5 = FUN_ram_40094cd0();
        if ((iVar5 == 0) || (*(code **)(iVar5 + 0x38) == (code *)0x0)) goto joined_r0x4009149e;
        iVar5 = (**(code **)(iVar5 + 0x38))(1,uVar8);
joined_r0x400913c4:
        if (iVar5 != 0) goto joined_r0x4009149e;
      }
      else {
LAB_ram_4009141a:
        if (*unaff_s1 != '\0') {
          cVar2 = unaff_s1[2];
          iVar5 = FUN_ram_40094cd0();
          if ((iVar5 == 0) || (*(code **)(iVar5 + 0x38) == (code *)0x0)) goto joined_r0x4009149e;
          iVar5 = (**(code **)(iVar5 + 0x38))(1,cVar2);
          goto joined_r0x400913c4;
        }
      }
      _DAT_ram_30088044 = 0;
      _DAT_ram_30088048 = 0;
      _DAT_ram_3008804c = 0;
      _DAT_ram_30088050 = 0;
      _DAT_ram_30088054 = 0;
      if (_DAT_ram_3008b940 == 0) {
        uVar3 = 4;
        goto LAB_ram_40091218;
      }
    }
    FUN_ram_40004b14(0x3008b914);
    uVar3 = 4;
  }
LAB_ram_40091218:
  *param_4 = uVar3;
  FUN_ram_40090ff0(1);
  return;
}


/* NanoCore 1.12, address 0x400914ce.
 * REA evidence: ev_e1057cc71785d7743cc419eaf1712d0a4c653c904550c7538ea184865aa8182f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400914ce(int param_1)

{
  return param_1 * 0x3000 + 0x19000;
}


/* NanoCore 1.12, address 0x400914da.
 * REA evidence: ev_3755b73501ff18a58f5fae9f45e0b2be0314690fd76f3ce6aacf6c7b91df5a4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400914da(int param_1)

{
  return (param_1 + 0x8b) * 0x1000;
}


/* NanoCore 1.12, address 0x400914e2.
 * REA evidence: ev_5c85f62d1858f1c560ef4d147736f4f3538a33b02c3ff163e1ebecf671d5c096
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400914e2(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3000;
  if (0x25 < param_1) {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x400914f2.
 * REA evidence: ev_c193cf84601de012de3a835ace7d4b1a165dead63f9df225ae6e613ff322c8fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400914f2(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (*param_1 != 0x53415442) {
    return false;
  }
  return (short)param_1[1] == 4;
}


/* NanoCore 1.12, address 0x4009153c.
 * REA evidence: ev_be332e98d13f2d217cad55560610faab0381ae97dace27c96a27b31454304b02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4009153c(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4009155a;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4009155a;
  }
  else {
LAB_ram_4009155a:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  DAT_ram_3008b910 = '\0';
  if ((_DAT_ram_3008b05c & 0xff) == 0) {
LAB_ram_40091594:
    _DAT_ram_3008b05c = 0;
    _DAT_ram_3008b060 = 0;
    _DAT_ram_3008b064 = 0;
    _DAT_ram_3008b068 = 0;
    _DAT_ram_3008b06c = 0;
  }
  else {
    uVar1 = DAT_ram_3008b05e;
    iVar2 = FUN_ram_40094cd0();
    if (((iVar2 != 0) && (*(code **)(iVar2 + 0x38) != (code *)0x0)) &&
       (iVar2 = (**(code **)(iVar2 + 0x38))(0,uVar1), iVar2 == 0)) goto LAB_ram_40091594;
  }
  if ((_DAT_ram_30088044 & 0xff) == 0) {
LAB_ram_400915e0:
    _DAT_ram_30088044 = 0;
    _DAT_ram_30088048 = 0;
    _DAT_ram_3008804c = 0;
    _DAT_ram_30088050 = 0;
    _DAT_ram_30088054 = 0;
  }
  else {
    uVar1 = DAT_ram_30088046;
    iVar2 = FUN_ram_40094cd0();
    if (((iVar2 != 0) && (*(code **)(iVar2 + 0x38) != (code *)0x0)) &&
       (iVar2 = (**(code **)(iVar2 + 0x38))(1,uVar1), iVar2 == 0)) goto LAB_ram_400915e0;
  }
  iVar2 = FUN_ram_40094cd0();
  if ((((DAT_ram_3008b910 != '\0') || (iVar2 == 0)) ||
      ((*(code **)(iVar2 + 8) == (code *)0x0 || (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 == 0))))
     || (((DAT_ram_3008b908 != '\0' && (_DAT_ram_3008b070 == 0x53415442)) &&
         (_DAT_ram_3008b074 == 4)))) goto LAB_ram_40091798;
  memset(&DAT_ram_3008b070,0xff,0x898);
  iVar2 = FUN_ram_40094cd0();
  iVar3 = FUN_ram_40094cd0();
  if (((DAT_ram_3008b910 == '\0') && (iVar3 != 0)) &&
     ((*(code **)(iVar3 + 8) != (code *)0x0 &&
      (((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (iVar2 != 0)) &&
       (*(code **)(iVar2 + 0xc) != (code *)0x0)))))) {
    iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008b070);
    if (iVar2 == 1) {
      if ((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) goto LAB_ram_40091830;
    }
    else {
      if (iVar2 != 2) goto LAB_ram_40091830;
      memset(&DAT_ram_3008b070,0xff,0x898);
      _DAT_ram_3008b070 = 0x53415442;
      _DAT_ram_3008b074 = 4;
      _DAT_ram_3008b07a = 0;
      iVar2 = 0x3008b094;
      do {
        *(undefined2 *)(iVar2 + -4) = 0;
        *(undefined4 *)(iVar2 + -0xc) = 0;
        *(undefined4 *)(iVar2 + -8) = 0;
        iVar3 = memset(iVar2,0,0x10);
        iVar2 = iVar3 + 0x20;
        *(undefined4 *)(iVar3 + 0x10) = DAT_ram_400a13d8;
      } while (iVar2 != 0x3008b554);
      iVar2 = 0x3008b554;
      do {
        *(undefined2 *)(iVar2 + -4) = 0;
        *(undefined4 *)(iVar2 + -0xc) = 0;
        *(undefined4 *)(iVar2 + -8) = 0;
        iVar3 = memset(iVar2,0,0x10);
        iVar2 = iVar3 + 0x20;
        *(undefined4 *)(iVar3 + 0x10) = DAT_ram_400a13d8;
      } while (iVar2 != 0x3008b914);
      iVar2 = FUN_ram_40094cd0();
      if ((((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
            (iVar3 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0')) ||
           ((iVar3 == 0 || (*(code **)(iVar3 + 8) == (code *)0x0)))) ||
          ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0 ||
           ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))) ||
         (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008b070), iVar2 == 0))
      goto LAB_ram_40091798;
    }
    DAT_ram_3008b908 = '\x01';
  }
  else {
LAB_ram_40091830:
    memset(&DAT_ram_3008b070,0xff,0x898);
    DAT_ram_3008b908 = '\0';
  }
LAB_ram_40091798:
  *(undefined4 *)(gp + -0xc) = 1;
  *(undefined4 *)(gp + -8) = 1;
  memset(&DAT_ram_30084ff8,0,0x303c);
  iVar2 = _DAT_ram_3008b940;
  _DAT_ram_30088034 = 0;
  _DAT_ram_30088038 = 0;
  _DAT_ram_3008803c = 0;
  DAT_ram_30088058 = 0;
  *(undefined1 *)(gp + -4) = 0xff;
  _DAT_ram_30084fe4 = 0;
  _DAT_ram_30084fe8 = 0;
  _DAT_ram_30084fec = 0;
  _DAT_ram_30084ff4 = 0;
  _DAT_ram_30084ff0 = 1;
  if (iVar2 != 0) {
    FUN_ram_40004b14(0x3008b914);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400918b4.
 * REA evidence: ev_c8dfb32275c9f563d47dd2d6823ef44c7c38641c9cf98f9a6c8bec59d44dbd58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400918b4(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar4 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar4 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_400918d6;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_400918d6;
  }
  else {
LAB_ram_400918d6:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  iVar4 = FUN_ram_40094cd0();
  if ((((DAT_ram_30088058 == '\0') && (iVar4 != 0)) && (*(int *)(iVar4 + 0x14) != 0)) &&
     (((iVar5 = FUN_ram_40094cd0(), DAT_ram_3008b910 == '\0' && (iVar5 != 0)) &&
      ((*(code **)(iVar5 + 8) != (code *)0x0 && (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0)))))
     ) {
    if ((_DAT_ram_3008b05c & 0xff) != 0) {
      uVar1 = DAT_ram_3008b05e;
      iVar5 = FUN_ram_40094cd0();
      if (((iVar5 == 0) || (*(code **)(iVar5 + 0x38) == (code *)0x0)) ||
         (iVar5 = (**(code **)(iVar5 + 0x38))(0,uVar1), iVar5 != 0)) goto LAB_ram_40091b7e;
    }
    _DAT_ram_3008b05c = 0;
    _DAT_ram_3008b060 = 0;
    _DAT_ram_3008b064 = 0;
    _DAT_ram_3008b068 = 0;
    _DAT_ram_3008b06c = 0;
    if ((_DAT_ram_30088044 & 0xff) != 0) {
      uVar1 = DAT_ram_30088046;
      iVar5 = FUN_ram_40094cd0();
      if (((iVar5 == 0) || (*(code **)(iVar5 + 0x38) == (code *)0x0)) ||
         (iVar5 = (**(code **)(iVar5 + 0x38))(1,uVar1), iVar5 != 0)) goto LAB_ram_40091b7e;
    }
    _DAT_ram_30088044 = 0;
    _DAT_ram_30088048 = 0;
    _DAT_ram_3008804c = 0;
    _DAT_ram_30088050 = 0;
    _DAT_ram_30088054 = 0;
    memset(&DAT_ram_30084ff8,0,0x303c);
    iVar5 = _DAT_ram_30084ff0 + 1;
    _DAT_ram_30084ff0 = 1;
    if (iVar5 != 0) {
      _DAT_ram_30084ff0 = iVar5;
    }
    _DAT_ram_30088034 = 0;
    _DAT_ram_30088038 = 0;
    _DAT_ram_3008803c = 0;
    DAT_ram_30084fe4 = 0;
    if ((_DAT_ram_3008b90c != (undefined1 *)0x0) ||
       (_DAT_ram_3008b90c = (undefined1 *)FUN_ram_4002d154(0x898),
       _DAT_ram_3008b90c != (undefined1 *)0x0)) {
      puVar2 = _DAT_ram_3008b90c;
      memset(_DAT_ram_3008b90c,0xff,0x898);
      *puVar2 = 0x42;
      puVar2[1] = 0x54;
      puVar2[2] = 0x41;
      puVar2[3] = 0x53;
      puVar2[4] = 4;
      puVar2[5] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar7 = puVar2 + 0x24;
      iVar5 = 0;
      do {
        puVar2[iVar5 * 0x20 + 0x20] = 0;
        puVar2[iVar5 * 0x20 + 0x21] = 0;
        puVar2[iVar5 * 0x20 + 0x18] = 0;
        puVar2[iVar5 * 0x20 + 0x19] = 0;
        puVar2[iVar5 * 0x20 + 0x1a] = 0;
        puVar2[iVar5 * 0x20 + 0x1b] = 0;
        puVar2[iVar5 * 0x20 + 0x1c] = 0;
        puVar2[iVar5 * 0x20 + 0x1d] = 0;
        puVar2[iVar5 * 0x20 + 0x1e] = 0;
        puVar2[iVar5 * 0x20 + 0x1f] = 0;
        iVar6 = memset(puVar7,0,0x10);
        iVar5 = iVar5 + 1;
        *(undefined1 *)(iVar6 + 0x10) = 0x1a;
        *(undefined1 *)(iVar6 + 0x11) = 0x1a;
        *(undefined1 *)(iVar6 + 0x12) = 0;
        *(undefined1 *)(iVar6 + 0x13) = 0;
        puVar7 = (undefined1 *)(iVar6 + 0x20);
      } while (iVar5 != 0x26);
      puVar7 = puVar2 + 0x4e4;
      iVar5 = 0;
      do {
        puVar2[iVar5 * 0x20 + 0x4e0] = 0;
        puVar2[iVar5 * 0x20 + 0x4e1] = 0;
        puVar2[iVar5 * 0x20 + 0x4d8] = 0;
        puVar2[iVar5 * 0x20 + 0x4d9] = 0;
        puVar2[iVar5 * 0x20 + 0x4da] = 0;
        puVar2[iVar5 * 0x20 + 0x4db] = 0;
        puVar2[iVar5 * 0x20 + 0x4dc] = 0;
        puVar2[iVar5 * 0x20 + 0x4dd] = 0;
        puVar2[iVar5 * 0x20 + 0x4de] = 0;
        puVar2[iVar5 * 0x20 + 0x4df] = 0;
        iVar6 = memset(puVar7,0,0x10);
        iVar5 = iVar5 + 1;
        *(undefined1 *)(iVar6 + 0x10) = 0x1a;
        *(undefined1 *)(iVar6 + 0x11) = 0x1a;
        *(undefined1 *)(iVar6 + 0x12) = 0;
        *(undefined1 *)(iVar6 + 0x13) = 0;
        puVar7 = (undefined1 *)(iVar6 + 0x20);
      } while (iVar5 != 0x1e);
      iVar4 = (**(code **)(iVar4 + 0x14))(puVar2);
      if (iVar4 != 0) {
        FUN_ram_4000303c(&DAT_ram_3008b070,_DAT_ram_3008b90c,0x898);
        piVar8 = (int *)(gp + -0xc);
        iVar4 = 1;
        DAT_ram_3008b908 = 1;
        if (*piVar8 != -1) {
          iVar4 = *piVar8 + 1;
        }
        *piVar8 = iVar4;
        piVar8 = (int *)(gp + -8);
        if (*piVar8 == -1) {
          *piVar8 = 1;
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          *piVar8 = *piVar8 + 1;
        }
        goto joined_r0x40091b84;
      }
    }
    memset(&DAT_ram_3008b070,0xff,0x898);
    uVar3 = 0xffffffff;
    DAT_ram_3008b908 = 0;
  }
  else {
LAB_ram_40091b7e:
    uVar3 = 0xffffffff;
  }
joined_r0x40091b84:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40091cb8.
 * REA evidence: ev_0b3e60b5459ab0067a092c862d084e66ea78a665785eacb877d5b6168208c1cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40091cb8(void)

{
  int iVar1;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar1 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar1 == 0) {
      _DAT_ram_3008b940 = 1;
    }
    else if (_DAT_ram_3008b940 == 0) {
      DAT_ram_30088040 = 1;
      return;
    }
  }
  FUN_ram_40004a22(0x3008b914,0xffffffff);
  DAT_ram_30088040 = 1;
  return;
}


/* NanoCore 1.12, address 0x40091d0e.
 * REA evidence: ev_b6f39774104af1a388578e8d76e96c4fd4ae7e6df7e5994c62757c648c9ad021
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40091d0e(void)

{
  DAT_ram_30088040 = 0;
  if (_DAT_ram_3008b940 == 0) {
    return;
  }
  FUN_ram_40004b14(0x3008b914);
  return;
}


/* NanoCore 1.12, address 0x40091d2e.
 * REA evidence: ev_c2c4c0735d0d491e9776e354ed210856bfc8221b7afa0765d8674ab02560d988
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40091d2e(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
    }
    else if (_DAT_ram_3008b940 == 0) goto LAB_ram_40091d54;
  }
  FUN_ram_40004a22(0x3008b914,0xffffffff);
LAB_ram_40091d54:
  iVar2 = FUN_ram_40094cd0();
  if ((((((DAT_ram_30088058 == '\0' && DAT_ram_3008b05c == '\0') && DAT_ram_30088044 == '\0') &&
         DAT_ram_30088034 == '\0') && (iVar2 != 0)) && (*(code **)(iVar2 + 0x1c) != (code *)0x0)) &&
     (iVar2 = (**(code **)(iVar2 + 0x1c))(param_1), iVar2 != 0)) {
    DAT_ram_30088058 = '\x01';
    uVar1 = 0;
    *(char *)(gp + -4) = (char)param_1;
  }
  else {
    uVar1 = 0xffffffff;
    if (_DAT_ram_3008b940 != 0) {
      FUN_ram_40004b14(0x3008b914);
      return 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40091df4.
 * REA evidence: ev_4be8d866d88f8e0989deed5da060ff654628e66294b1dc7130f04cc970377d7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40091df4(void)

{
  int iVar1;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar1 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar1 == 0) {
      _DAT_ram_3008b940 = 1;
    }
    else if (_DAT_ram_3008b940 == 0) {
      if (DAT_ram_30088058 == '\0') {
        return;
      }
      DAT_ram_30088058 = 0;
      *(undefined1 *)(gp + -4) = 0xff;
      return;
    }
  }
  FUN_ram_40004a22(0x3008b914,0xffffffff);
  iVar1 = _DAT_ram_3008b940;
  if (DAT_ram_30088058 == '\0') {
    DAT_ram_30088058 = 0;
  }
  else {
    DAT_ram_30088058 = 0;
    *(undefined1 *)(gp + -4) = 0xff;
    if (iVar1 == 0) {
      return;
    }
    FUN_ram_40004b14(0x3008b914);
  }
  if (_DAT_ram_3008b940 == 0) {
    return;
  }
  FUN_ram_40004b14(0x3008b914);
  return;
}


/* NanoCore 1.12, address 0x40091e9c.
 * REA evidence: ev_91d83631ac2c758b86325d634064a71577cf6e0a3b3524949d3d726c341ac554
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40091e9c(uint param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint auStack_34 [4];
  
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_40091ec4;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_40091ec4;
    if (param_2 == 0) {
      return 0xffffffff;
    }
LAB_ram_40091ed6:
    iVar3 = FUN_ram_40094cd0();
    if ((((DAT_ram_3008b910 == '\0') && (iVar3 != 0)) && (*(code **)(iVar3 + 8) != (code *)0x0)) &&
       ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (param_1 < 0x26)))) {
      if ((DAT_ram_3008b908 == '\0') ||
         ((_DAT_ram_3008b070 != 0x53415442 || (_DAT_ram_3008b074 != 4)))) {
        memset(&DAT_ram_3008b070,0xff,0x898);
        iVar3 = FUN_ram_40094cd0();
        iVar5 = FUN_ram_40094cd0();
        if (((DAT_ram_3008b910 == '\0') &&
            (((iVar5 != 0 && (*(code **)(iVar5 + 8) != (code *)0x0)) &&
             (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0)))) &&
           ((iVar3 != 0 && (*(code **)(iVar3 + 0xc) != (code *)0x0)))) {
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) {
LAB_ram_4009225a:
              DAT_ram_3008b908 = '\x01';
              goto LAB_ram_40091f32;
            }
          }
          else if (iVar3 == 2) {
            memset(&DAT_ram_3008b070,0xff,0x898);
            _DAT_ram_3008b070 = 0x53415442;
            _DAT_ram_3008b074 = 4;
            _DAT_ram_3008b07a = 0;
            iVar3 = 0x3008b094;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar5 = memset(iVar3,0,0x10);
              iVar3 = iVar5 + 0x20;
              *(undefined4 *)(iVar5 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b554);
            iVar3 = 0x3008b554;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar5 = memset(iVar3,0,0x10);
              iVar3 = iVar5 + 0x20;
              *(undefined4 *)(iVar5 + 0x10) = DAT_ram_400a13d8;
            } while (iVar3 != 0x3008b914);
            iVar3 = FUN_ram_40094cd0();
            if (((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
                 ((iVar5 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0' ||
                  (((iVar5 == 0 || (*(code **)(iVar5 + 8) == (code *)0x0)) ||
                   (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0)))))) ||
                ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
               (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 == 0))
            goto LAB_ram_40092120;
            goto LAB_ram_4009225a;
          }
        }
        memset(&DAT_ram_3008b070,0xff,0x898);
        DAT_ram_3008b908 = '\0';
        uVar2 = 0xffffffff;
        goto joined_r0x400921cc;
      }
LAB_ram_40091f32:
      iVar3 = param_1 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b090 + iVar3);
      if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffc) == 0)) {
        if (uVar1 >> 1 == 0) {
          pcVar4 = (char *)FUN_ram_40094cd0();
          if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
            uVar7 = *(uint *)(&DAT_ram_3008b088 + iVar3);
            if (0x2fff < uVar7 - 1) {
              uVar2 = 0xfffffffe;
              goto joined_r0x400921cc;
            }
LAB_ram_40091fa4:
            if (*(int *)(&DAT_ram_3008b08c + iVar3) - 1U < 0xfffffffe) {
              if ((*(ushort *)(&DAT_ram_3008b090 + iVar3) & 2) != 0) {
                pcVar4 = (char *)FUN_ram_40094cd0();
                if ((((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
                    (uVar7 = *(uint *)(&DAT_ram_3008b088 + iVar3), uVar7 < 0x303d)) &&
                   ((ushort)(*(short *)(iVar3 + 0x3008b092) - 1U) < 0x3000)) {
                  iVar5 = FUN_ram_40094cd0();
                  if (((DAT_ram_3008b910 == '\0') && (iVar5 != 0)) &&
                     (*(code **)(iVar5 + 0x28) != (code *)0x0)) {
                    iVar5 = (**(code **)(iVar5 + 0x28))(0,param_1,0,&DAT_ram_30084ff8,uVar7);
                  }
                  else {
                    iVar5 = -1;
                  }
                  if (*(int *)(&DAT_ram_3008b088 + iVar3) == iVar5) {
                    iVar5 = FUN_ram_40007450(0,&DAT_ram_30084ff8,iVar5);
                    if (iVar5 != *(int *)(&DAT_ram_3008b08c + iVar3)) {
                      memset(&DAT_ram_30084ff8,0,0x303c);
                      uVar2 = 0xfffffffe;
                      goto joined_r0x400921cc;
                    }
                    iVar5 = FUN_ram_4008b9c8(*(undefined4 *)(&DAT_ram_3008b088 + iVar3),
                                             &DAT_ram_3008805c,0x3000,auStack_34);
                    memset(&DAT_ram_30084ff8,0,0x303c);
                    if (iVar5 == 0) {
                      if (*(ushort *)(iVar3 + 0x3008b092) != auStack_34[0]) {
                        uVar2 = 0xfffffffe;
                        goto joined_r0x400921cc;
                      }
                      goto LAB_ram_4009200e;
                    }
                    goto LAB_ram_4009202a;
                  }
                }
                goto LAB_ram_40092120;
              }
              if (uVar7 < 0x3001) {
                iVar5 = FUN_ram_40094cd0();
                if (((DAT_ram_3008b910 == '\0') && (iVar5 != 0)) &&
                   (*(code **)(iVar5 + 0x28) != (code *)0x0)) {
                  iVar5 = (**(code **)(iVar5 + 0x28))(0,param_1,0,&DAT_ram_3008805c,uVar7);
                }
                else {
                  iVar5 = -1;
                }
                if (iVar5 != *(int *)(&DAT_ram_3008b088 + iVar3)) goto LAB_ram_40092120;
                iVar5 = FUN_ram_40007450(0,&DAT_ram_3008805c);
                if (iVar5 == *(int *)(&DAT_ram_3008b08c + iVar3)) {
                  auStack_34[0] = *(uint *)(&DAT_ram_3008b088 + iVar3);
LAB_ram_4009200e:
                  if (((0xb < auStack_34[0]) && (_DAT_ram_3008805c == 0x42504444)) &&
                     (((ushort)(_DAT_ram_30088060 - 1U) < 3 || (_DAT_ram_30088060 == 5)))) {
                    uVar2 = FUN_ram_40088c50(param_2,&DAT_ram_3008805c);
                    goto joined_r0x400921cc;
                  }
                }
              }
            }
          }
        }
        else {
          pcVar4 = (char *)FUN_ram_40094cd0();
          if (((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
             (uVar7 = *(uint *)(&DAT_ram_3008b088 + iVar3), 0x3b < uVar7)) {
            pcVar4 = (char *)FUN_ram_40094cd0();
            uVar6 = 0x3000;
            if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
              uVar6 = 0x303c;
            }
            if (((uVar7 <= uVar6) && ((ushort)(*(short *)(iVar3 + 0x3008b092) - 1U) < 0x3000)) &&
               (uVar7 = (uint)(ushort)(*(short *)(iVar3 + 0x3008b092) + 0x3c),
               *(uint *)(&DAT_ram_3008b088 + iVar3) == uVar7)) goto LAB_ram_40091fa4;
          }
        }
      }
LAB_ram_4009202a:
      uVar2 = 0xfffffffe;
      goto joined_r0x400921cc;
    }
  }
  else {
LAB_ram_40091ec4:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
    if (param_2 != 0) goto LAB_ram_40091ed6;
  }
LAB_ram_40092120:
  uVar2 = 0xffffffff;
joined_r0x400921cc:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return uVar2;
}


