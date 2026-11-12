/* NanoCore 1.10 analysis module: protocol/midi.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40013674.
 * REA evidence: ev_ce71d17498efb5f1108dd4be2cad1241fec73ac67e736d89b54d057258554daf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 nc_sysex_unpack_7bit(int packed_input,uint packed_length,int decoded_output,uint output_capacity,uint *decoded_length)

{
  byte high_bits;
  uint bit_index;
  uint input_offset;
  uint output_offset;
  
  output_offset = 0;
  input_offset = 0;
  do {
    if (packed_length <= input_offset) {
      *decoded_length = output_offset;
      return 0;
    }
    high_bits = *(byte *)(packed_input + input_offset);
    bit_index = 0;
    input_offset = input_offset + 1;
    do {
      if (packed_length == input_offset) break;
      input_offset = input_offset + 1;
      if (output_capacity <= output_offset) {
        return 0xffffffff;
      }
      output_offset = output_offset + 1;
      *(byte *)(decoded_output + -1 + output_offset) =
           (byte)(((int)(uint)high_bits >> (bit_index & 0x1f) & 1U) << 7) | *(byte *)(packed_input + -1 + input_offset);
      bit_index = bit_index + 1;
    } while (bit_index != 7);
  } while( true );
}


/* NanoCore 1.10, address 0x40013750.
 * REA evidence: ev_6b90358bfcf60f76558cd62b7c6fadc9f84fdee9d69dbe176ca1662db736f4df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 nc_register_opcode_handler(int opcode,undefined4 handler)

{
  *(undefined4 *)(&nc_opcode_handlers + opcode * 4) = handler;
  return 0;
}


/* NanoCore 1.10, address 0x40013760.
 * REA evidence: ev_fd16e4ddeee8bac2985cc87a8636d09482e7c48f56299a53cee7769dfae35310
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nc_register_message_listener(undefined1 message_kind,int callback,undefined4 callback_context)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (callback != 0) {
    uVar1 = 0xffffffff;
    if (_nc_message_listener_count < 8) {
      iVar2 = _nc_message_listener_count * 0xc;
      _nc_message_listener_count = _nc_message_listener_count + 1;
      (&nc_message_listeners)[iVar2] = message_kind;
      *(int *)(iVar2 + 0x30067550) = callback;
      *(undefined4 *)(&DAT_ram_30067554 + iVar2) = callback_context;
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40013b2e.
 * REA evidence: ev_ee5f1edfb7d205261fa535bfe0785ba9b82ae8741b7a90cd07820d784c99977b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_dispatch_request(char param_1,void *param_2,uint param_3,byte param_4)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined2 uVar13;
  size_t __n;
  char cStack_385;
  undefined4 *puStack_384;
  uint uStack_380;
  undefined4 uStack_37c;
  undefined1 auStack_378 [64];
  char cStack_338;
  byte bStack_337;
  size_t sStack_334;
  char cStack_330;
  undefined2 uStack_32f;
  ushort uStack_32d;
  ushort uStack_32b;
  undefined1 auStack_329 [4];
  undefined1 auStack_325 [757];
  
  memset(&cStack_338,0,0x308);
  cStack_338 = param_1;
  bStack_337 = param_4;
  if (param_3 < 0x301) {
    sStack_334 = param_3;
    if (param_3 != 0) goto LAB_ram_40013b8e;
  }
  else {
    sStack_334 = 0x300;
LAB_ram_40013b8e:
    if (param_2 != (void *)0x0) {
      memcpy(&cStack_330,param_2,sStack_334);
    }
  }
  iVar7 = FUN_ram_40004dfe();
  if (iVar7 != 0) {
    return;
  }
  if (cStack_338 != 'p') {
    return;
  }
  puStack_384 = (undefined4 *)0x0;
  uStack_380 = 0;
  cStack_385 = '\0';
  FUN_ram_40028bf8(2);
  if ((sStack_334 < 7) || (cStack_330 != '\x02')) {
    cStack_385 = '\x01';
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    uVar3 = (uint)uStack_32b;
    uVar12 = (uint)uStack_32d;
    uVar13 = uStack_32f;
    if (sStack_334 == uVar3 + 7) {
      if (uVar12 < 0x100) {
        DAT_ram_300466e0 = (uint)bStack_337;
        if (DAT_ram_300466e0 != 1) {
          FUN_ram_40023c9a();
        }
        FUN_ram_400042fa();
        uVar5 = uVar12 & 0xff;
        if (*(code **)(&nc_opcode_handlers + uVar12 * 4) == (code *)0x0) {
          for (iVar7 = 0; iVar7 != _nc_message_listener_count; iVar7 = iVar7 + 1) {
            uVar6 = (uint)(byte)(&nc_message_listeners)[iVar7 * 0xc];
            if ((uVar6 <= uVar5) && (uVar5 <= (uVar6 + 4 & 0xff))) {
              puVar11 = *(undefined4 **)(iVar7 * 0xc + 0x30067550);
              if (puVar11 == (undefined4 *)0x0) break;
              switch(uVar5 - uVar6 & 0xff) {
              case 0:
                if ((code *)*puVar11 != (code *)0x0) {
                  iVar7 = (*(code *)*puVar11)(*(undefined4 *)(&DAT_ram_30067554 + iVar7 * 0xc),
                                              &puStack_384,&cStack_385);
                  goto LAB_ram_40013ce6;
                }
                goto switchD_ram_40013d16_default;
              case 1:
                if ((3 < uVar3) && (pcVar4 = (code *)puVar11[1], pcVar4 != (code *)0x0)) {
                  uVar8 = read_u32_le(auStack_329);
                  iVar7 = (*pcVar4)(*(undefined4 *)(&DAT_ram_30067554 + iVar7 * 0xc),uVar8,
                                    &cStack_385);
                  goto LAB_ram_40013ce6;
                }
                break;
              case 2:
                if ((4 < uVar3) && (pcVar4 = (code *)puVar11[2], pcVar4 != (code *)0x0)) {
                  uVar8 = read_u32_le(auStack_329);
                  iVar7 = (*pcVar4)(*(undefined4 *)(&DAT_ram_30067554 + iVar7 * 0xc),uVar8,
                                    auStack_325,uVar3 - 4,&cStack_385);
                  goto LAB_ram_40013ce6;
                }
                break;
              case 3:
                if ((7 < uVar3) && (pcVar4 = (code *)puVar11[3], pcVar4 != (code *)0x0)) {
                  uVar8 = read_u32_le(auStack_329);
                  uVar9 = read_u32_le(auStack_325);
                  iVar7 = (*pcVar4)(*(undefined4 *)(&DAT_ram_30067554 + iVar7 * 0xc),uVar8,uVar9,
                                    &cStack_385);
                  goto LAB_ram_40013ce6;
                }
                break;
              case 4:
                if ((code *)puVar11[4] != (code *)0x0) {
                  iVar7 = (*(code *)puVar11[4])
                                    (*(undefined4 *)(&DAT_ram_30067554 + iVar7 * 0xc),&cStack_385);
                  goto LAB_ram_40013ce6;
                }
                cStack_385 = '\0';
                goto LAB_ram_40013dda;
              default:
                goto switchD_ram_40013d16_default;
              }
              cStack_385 = '\x01';
              goto LAB_ram_40013dda;
            }
          }
switchD_ram_40013d16_default:
          cStack_385 = '~';
        }
        else {
          iVar7 = (**(code **)(&nc_opcode_handlers + uVar12 * 4))
                            (uVar5,auStack_329,uVar3,&puStack_384,&cStack_385);
LAB_ram_40013ce6:
          if (iVar7 == 0) {
            cStack_385 = '~';
            puStack_384 = (undefined4 *)0x0;
            uStack_380 = 0;
          }
        }
LAB_ram_40013dda:
        DAT_ram_300466e0 = 0xff;
        if (uVar12 == 0x3a) {
          DAT_ram_300466e0 = 0xff;
          return;
        }
        if (uVar12 == 0x5b) {
          DAT_ram_300466e0 = 0xff;
          return;
        }
      }
      else {
        cStack_385 = '~';
      }
    }
    else {
      cStack_385 = '\x01';
    }
  }
  if ((bStack_337 & 0xfd) == 0) {
    FUN_ram_400065d4(10);
  }
  bVar2 = bStack_337;
  uVar3 = uStack_380;
  puVar11 = puStack_384;
  uVar1 = (undefined2)uStack_380;
  cVar10 = cStack_385;
  if ((bStack_337 & 0xfd) == 0 && cStack_385 == '\0') {
    if (uStack_380 == 0) {
      uStack_37c = 0;
      puVar11 = &uStack_37c;
      uVar3 = 4;
      cVar10 = '\x11';
    }
    else {
      uVar5 = 0;
      if (puStack_384 != (undefined4 *)0x0) {
        do {
          __n = uVar3 - uVar5;
          if (0x40 < __n) {
            __n = 0x40;
          }
          uVar6 = uVar5 + __n;
          iVar7 = 0x10;
          if (uVar3 <= uVar6) {
            iVar7 = 0x11;
          }
          uStack_37c = CONCAT22((short)uVar5,uVar1);
          memcpy(auStack_378,(void *)(uVar5 + (int)puVar11),__n);
          FUN_ram_40013600(bVar2,uVar13,uVar12,iVar7,&uStack_37c,__n + 4);
          if (iVar7 != 0x11) {
            FUN_ram_400065d4(0x28);
          }
          uVar5 = uVar6;
        } while (uVar6 < uVar3);
        goto LAB_ram_40013e78;
      }
      puVar11 = (undefined4 *)0x0;
      cVar10 = '\0';
    }
  }
  FUN_ram_40013600(bStack_337,uVar13,uVar12,cVar10,puVar11,uVar3);
LAB_ram_40013e78:
  FUN_ram_40028c66(2);
  return;
}


