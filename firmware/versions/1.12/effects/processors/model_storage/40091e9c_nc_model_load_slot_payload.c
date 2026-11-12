/* NanoCore 1.12: nc_model_load_slot_payload at 0x40091e9c.
 * Role: Reviewed DSP dispatch/model loading path.
 * REA: ev_291748a4bccb7a3f3a79b4296a771764d1b10584ca8d0d96fbc521cf6bac466f
 * Source: analysis/rea-1.12-effects/results/03677-export-0x40091e9c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nc_model_load_slot_payload(uint param_1,int param_2)

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
                    uVar2 = nc_model_decode_payload(param_2,&DAT_ram_3008805c);
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

