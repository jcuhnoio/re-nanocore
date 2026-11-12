/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4007e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4007e7bc.
 * REA evidence: ev_fcfe828f580a27795a59e5797f13699b6881a64da8be82a9b3070d3882aef34e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4007e7bc(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  ulonglong *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  uint uStack_418;
  uint uStack_414;
  ulonglong *puStack_310;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined4 uStack_278;
  undefined4 uStack_274;
  ulonglong uStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  ulonglong uStack_250;
  ulonglong uStack_248;
  ulonglong auStack_240 [49];
  ulonglong auStack_b8 [16];
  ulonglong uVar9;
  
  FUN_ram_4000305c(&uStack_300,param_1 + 8,0x40);
  puStack_310 = &local_2c0;
  puVar18 = puStack_310;
  do {
    bVar1 = *param_2;
    bVar2 = param_2[1];
    bVar3 = param_2[2];
    bVar4 = param_2[3];
    *(uint *)puVar18 =
         (uint)param_2[7] | (uint)param_2[4] << 0x18 | (uint)param_2[5] << 0x10 |
         (uint)param_2[6] << 8;
    *(uint *)((int)puVar18 + 4) =
         (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4;
    puVar18 = puVar18 + 1;
    param_2 = param_2 + 8;
  } while (auStack_240 != puVar18);
  uStack_448._0_4_ = uStack_278;
  uStack_448._4_4_ = uStack_274;
  puVar18 = &local_2b8;
  do {
    uVar12 = uStack_268;
    uStack_268 = uStack_260;
    uStack_260 = uStack_258;
    uStack_258 = uStack_250;
    uStack_250 = uStack_248;
    uVar13 = uStack_270 >> 0x20;
    uStack_430 = CONCAT44(local_2c0._4_4_,(uint)local_2c0);
    local_2c0._0_4_ = (uint)*puVar18;
    local_2c0._4_4_ = *(uint *)((int)puVar18 + 4);
    uStack_440 = CONCAT44(((int)uStack_258 << 0xd | (uint)((uStack_258 >> 0x13) >> 0x20)) ^
                          (uint)(uStack_258 >> 0x1d) ^ (uint)(uStack_258 >> 0x26),
                          (uint)(uStack_258 >> 0x13) ^
                          ((int)uStack_258 << 3 | (uint)((uStack_258 >> 0x1d) >> 0x20)) ^
                          (uint)(uStack_258 >> 6));
    lVar5 = CONCAT44(uStack_448._4_4_,(uint)uStack_448);
    uStack_438 = CONCAT44(((uint)local_2c0 << 0x1f | local_2c0._4_4_ >> 1) ^
                          ((uint)local_2c0 << 0x18 | local_2c0._4_4_ >> 8) ^ local_2c0._4_4_ >> 7,
                          (local_2c0._4_4_ << 0x1f | (uint)local_2c0 >> 1) ^
                          (local_2c0._4_4_ << 0x18 | (uint)local_2c0 >> 8) ^ (uint)(*puVar18 >> 7));
    uStack_448._0_4_ = (uint)uStack_270;
    uStack_248 = uStack_440 + uStack_430 + lVar5 + uStack_438;
    puVar18[0xf] = uStack_248;
    puVar18 = puVar18 + 1;
    uStack_270 = uVar12;
    uStack_448._4_4_ = (int)uVar13;
  } while (auStack_b8 != puVar18);
  uStack_440 = CONCAT44(uStack_2c4,uStack_2c8);
  uStack_438 = CONCAT44(uStack_2dc,uStack_2e0);
  uStack_428 = CONCAT44(uStack_2cc,uStack_2d0);
  uVar13 = CONCAT44(uStack_2f4,uStack_2f8);
  uStack_420 = CONCAT44(uStack_2d4,uStack_2d8);
  plVar17 = (longlong *)&DAT_ram_400990d8;
  uStack_430 = CONCAT44(uStack_2fc,uStack_300);
  uVar12 = CONCAT44(uStack_2ec,uStack_2f0);
  uStack_448 = CONCAT44(uStack_2e4,uStack_2e8);
  do {
    uStack_414 = (uint)(uVar12 >> 0x20);
    uStack_418 = (uint)uVar12;
    uVar21 = (uint)(uVar13 >> 0x20);
    uVar20 = (uint)uVar13;
    uStack_440 = CONCAT44(((uint)uStack_438 << 0x12 | uStack_438._4_4_ >> 0xe) ^
                          ((uint)uStack_438 << 0xe | uStack_438._4_4_ >> 0x12) ^
                          ((uint)uStack_438 >> 9 | uStack_438._4_4_ << 0x17),
                          (uStack_438._4_4_ << 0x12 | (uint)uStack_438 >> 0xe) ^
                          (uStack_438._4_4_ << 0xe | (uint)uStack_438 >> 0x12) ^
                          (uStack_438._4_4_ >> 9 | (uint)uStack_438 << 0x17)) +
                 *plVar17 + *puStack_310 +
                 CONCAT44((uStack_428._4_4_ ^ uStack_420._4_4_) & uStack_438._4_4_ ^
                          uStack_428._4_4_,
                          ((uint)uStack_428 ^ (uint)uStack_420) & (uint)uStack_438 ^
                          (uint)uStack_428) + uStack_440;
    uVar19 = (uint)(uStack_440 >> 0x20);
    uVar9 = CONCAT44(((uint)uStack_430 << 4 | uStack_430._4_4_ >> 0x1c) ^
                     ((uint)uStack_430 >> 2 | uStack_430._4_4_ << 0x1e) ^
                     ((uint)uStack_430 >> 7 | uStack_430._4_4_ << 0x19),
                     (uStack_430._4_4_ << 4 | (uint)uStack_430 >> 0x1c) ^
                     (uStack_430._4_4_ >> 2 | (uint)uStack_430 << 0x1e) ^
                     (uStack_430._4_4_ >> 7 | (uint)uStack_430 << 0x19)) +
            CONCAT44((uStack_430._4_4_ | uVar21) & uStack_414 | uStack_430._4_4_ & uVar21,
                     ((uint)uStack_430 | uVar20) & uStack_418 | (uint)uStack_430 & uVar20) +
            ((ulonglong)uVar19 << 0x20 | uStack_440 & 0xffffffff);
    uVar6 = (uint)uVar9;
    uVar16 = (uint)(uVar9 >> 0x20);
    uVar10 = uStack_448 + ((ulonglong)uVar19 << 0x20 | uStack_440 & 0xffffffff);
    uVar19 = uStack_448._4_4_ << 0x12;
    uStack_448._0_4_ = (uint)uVar10;
    uStack_448._4_4_ = (uint)(uVar10 >> 0x20);
    uVar11 = plVar17[1] + puStack_310[1] + uStack_428 +
             CONCAT44((uStack_438._4_4_ ^ uStack_420._4_4_) & uStack_448._4_4_ ^ uStack_420._4_4_,
                      ((uint)uStack_438 ^ (uint)uStack_420) & (uint)uStack_448 ^ (uint)uStack_420) +
             CONCAT44(((uint)uStack_448 << 0x12 | uStack_448._4_4_ >> 0xe) ^
                      ((uint)uStack_448 << 0xe | (uint)((uVar10 >> 0x12) >> 0x20)) ^
                      (uint)(uVar10 >> 9),
                      (uVar19 | (uint)uStack_448 >> 0xe) ^ (uint)(uVar10 >> 0x12) ^
                      ((uint)((uVar10 >> 9) >> 0x20) | (uint)uStack_448 << 0x17));
    uVar19 = (uint)(uVar11 >> 0x20);
    uStack_428 = CONCAT44((uVar6 << 4 | (uint)((uVar9 >> 0x1c) >> 0x20)) ^ (uint)(uVar9 >> 2) ^
                          (uint)(uVar9 >> 7),
                          ((uint)((uVar9 >> 2) >> 0x20) | uVar6 << 0x1e) ^ (uint)(uVar9 >> 0x1c) ^
                          ((uint)((uVar9 >> 7) >> 0x20) | uVar6 << 0x19)) +
                 CONCAT44((uStack_430._4_4_ | uVar16) & uVar21 | uStack_430._4_4_ & uVar16,
                          ((uint)uStack_430 | uVar6) & uVar20 | (uint)uStack_430 & uVar6) +
                 ((ulonglong)uVar19 << 0x20 | uVar11 & 0xffffffff);
    iVar7 = (int)uStack_428;
    uVar12 = uVar12 + ((ulonglong)uVar19 << 0x20 | uVar11 & 0xffffffff);
    uVar6 = (uint)uVar12;
    uVar11 = plVar17[2] + puStack_310[2] + uStack_420 +
             CONCAT44((uStack_438._4_4_ ^ uStack_448._4_4_) & (uint)(uVar12 >> 0x20) ^
                      uStack_438._4_4_,
                      ((uint)uStack_438 ^ (uint)uStack_448) & uVar6 ^ (uint)uStack_438) +
             CONCAT44((uVar6 << 0x12 | (uint)((uVar12 >> 0xe) >> 0x20)) ^
                      (uVar6 << 0xe | (uint)((uVar12 >> 0x12) >> 0x20)) ^ (uint)(uVar12 >> 9),
                      (uint)(uVar12 >> 0xe) ^ (uint)(uVar12 >> 0x12) ^
                      ((uint)((uVar12 >> 9) >> 0x20) | uVar6 << 0x17));
    uVar19 = (uint)(uVar11 >> 0x20);
    uVar13 = uVar13 + ((ulonglong)uVar19 << 0x20 | uVar11 & 0xffffffff);
    uVar6 = (uint)uVar13;
    uVar20 = (uint)(uVar13 >> 0x20);
    uStack_420 = CONCAT44((iVar7 << 4 | (uint)((uStack_428 >> 0x1c) >> 0x20)) ^
                          (uint)(uStack_428 >> 2) ^ (uint)(uStack_428 >> 7),
                          ((uint)((uStack_428 >> 2) >> 0x20) | iVar7 << 0x1e) ^
                          (uint)(uStack_428 >> 0x1c) ^
                          ((uint)((uStack_428 >> 7) >> 0x20) | iVar7 << 0x19)) +
                 CONCAT44((uint)((uStack_428 | uVar9) >> 0x20) & uStack_430._4_4_ |
                          (uint)((uVar9 & uStack_428) >> 0x20),
                          (uint)(uStack_428 | uVar9) & (uint)uStack_430 | (uint)(uVar9 & uStack_428)
                         ) + ((ulonglong)uVar19 << 0x20 | uVar11 & 0xffffffff);
    iVar7 = (int)uStack_420;
    uVar11 = plVar17[3] + puStack_310[3] + uStack_438 + (uVar13 & (uVar10 ^ uVar12) ^ uVar10) +
             CONCAT44((uVar6 << 0x12 | (uint)((uVar13 >> 0xe) >> 0x20)) ^
                      (uVar6 << 0xe | (uint)((uVar13 >> 0x12) >> 0x20)) ^ (uint)(uVar13 >> 9),
                      (uint)(uVar13 >> 0xe) ^ (uint)(uVar13 >> 0x12) ^
                      ((uint)((uVar13 >> 9) >> 0x20) | uVar6 << 0x17));
    uVar19 = (uint)(uVar11 >> 0x20);
    uVar14 = CONCAT44((iVar7 << 4 | (uint)((uStack_420 >> 0x1c) >> 0x20)) ^ (uint)(uStack_420 >> 2)
                      ^ (uint)(uStack_420 >> 7),
                      ((uint)((uStack_420 >> 2) >> 0x20) | iVar7 << 0x1e) ^
                      (uint)(uStack_420 >> 0x1c) ^
                      ((uint)((uStack_420 >> 7) >> 0x20) | iVar7 << 0x19)) +
             ((uStack_420 | uStack_428) & uVar9 | uStack_428 & uStack_420) +
             ((ulonglong)uVar19 << 0x20 | uVar11 & 0xffffffff);
    iVar7 = (int)uVar14;
    uVar11 = uStack_430 + ((ulonglong)uVar19 << 0x20 | uVar11 & 0xffffffff);
    iVar8 = (int)uVar11;
    uVar10 = plVar17[4] + puStack_310[4] + uVar10 + ((uVar12 ^ uVar13) & uVar11 ^ uVar12) +
             CONCAT44((iVar8 << 0x12 | (uint)((uVar11 >> 0xe) >> 0x20)) ^
                      (iVar8 << 0xe | (uint)((uVar11 >> 0x12) >> 0x20)) ^ (uint)(uVar11 >> 9),
                      (uint)(uVar11 >> 0xe) ^ (uint)(uVar11 >> 0x12) ^
                      ((uint)((uVar11 >> 9) >> 0x20) | iVar8 << 0x17));
    uVar19 = (uint)(uVar10 >> 0x20);
    uStack_448 = CONCAT44(((uint)((uVar14 >> 0x1c) >> 0x20) | iVar7 << 4) ^ (uint)(uVar14 >> 2) ^
                          (uint)(uVar14 >> 7),
                          ((uint)((uVar14 >> 2) >> 0x20) | iVar7 << 0x1e) ^ (uint)(uVar14 >> 0x1c) ^
                          ((uint)((uVar14 >> 7) >> 0x20) | iVar7 << 0x19)) +
                 ((uStack_420 | uVar14) & uStack_428 | uStack_420 & uVar14) +
                 ((ulonglong)uVar19 << 0x20 | uVar10 & 0xffffffff);
    uStack_440 = uVar9 + ((ulonglong)uVar19 << 0x20 | uVar10 & 0xffffffff);
    uVar19 = (uint)uStack_440;
    uVar9 = plVar17[5] + puStack_310[5] + uVar12 +
            CONCAT44((uint)((uVar13 ^ uVar11) >> 0x20) & uVar16 ^ uVar20,
                     (uint)(uVar13 ^ uVar11) & uVar19 ^ uVar6) +
            CONCAT44((uVar19 << 0x12 | (uint)((uStack_440 >> 0xe) >> 0x20)) ^
                     (uVar19 << 0xe | (uint)((uStack_440 >> 0x12) >> 0x20)) ^
                     (uint)(uStack_440 >> 9),
                     (uint)(uStack_440 >> 0xe) ^ (uint)(uStack_440 >> 0x12) ^
                     ((uint)((uStack_440 >> 9) >> 0x20) | uVar19 << 0x17));
    uVar6 = (uint)(uVar9 >> 0x20);
    uVar12 = CONCAT44(((uint)uStack_448 << 4 | (uint)((uStack_448 >> 0x1c) >> 0x20)) ^
                      (uint)(uStack_448 >> 2) ^ (uint)(uStack_448 >> 7),
                      ((uint)((uStack_448 >> 2) >> 0x20) | (uint)uStack_448 << 0x1e) ^
                      (uint)(uStack_448 >> 0x1c) ^
                      ((uint)((uStack_448 >> 7) >> 0x20) | (uint)uStack_448 << 0x19)) +
             ((uVar14 | uStack_448) & uStack_420 | uVar14 & uStack_448) +
             ((ulonglong)uVar6 << 0x20 | uVar9 & 0xffffffff);
    iVar7 = (int)uVar12;
    uStack_428 = uStack_428 + ((ulonglong)uVar6 << 0x20 | uVar9 & 0xffffffff);
    iVar8 = (int)uStack_428;
    uVar13 = plVar17[6] + puStack_310[6] + ((ulonglong)uVar20 << 0x20 | uVar13 & 0xffffffff) +
             (uStack_428 & (uVar11 ^ uStack_440) ^ uVar11) +
             CONCAT44((iVar8 << 0x12 | (uint)((uStack_428 >> 0xe) >> 0x20)) ^
                      (iVar8 << 0xe | (uint)((uStack_428 >> 0x12) >> 0x20)) ^
                      (uint)(uStack_428 >> 9),
                      (uint)(uStack_428 >> 0xe) ^ (uint)(uStack_428 >> 0x12) ^
                      ((uint)((uStack_428 >> 9) >> 0x20) | iVar8 << 0x17));
    uVar6 = (uint)(uVar13 >> 0x20);
    uStack_420 = uStack_420 + ((ulonglong)uVar6 << 0x20 | uVar13 & 0xffffffff);
    iVar8 = (int)uStack_420;
    uVar13 = CONCAT44((iVar7 << 4 | (uint)((uVar12 >> 0x1c) >> 0x20)) ^ (uint)(uVar12 >> 2) ^
                      (uint)(uVar12 >> 7),
                      ((uint)((uVar12 >> 2) >> 0x20) | iVar7 << 0x1e) ^ (uint)(uVar12 >> 0x1c) ^
                      ((uint)((uVar12 >> 7) >> 0x20) | iVar7 << 0x19)) +
             (uVar12 & uStack_448 | (uVar12 | uStack_448) & uVar14) +
             ((ulonglong)uVar6 << 0x20 | uVar13 & 0xffffffff);
    iVar7 = (int)uVar13;
    uVar9 = plVar17[7] + puStack_310[7] + uVar11 +
            (uStack_420 & (uStack_440 ^ uStack_428) ^ uStack_440) +
            CONCAT44((iVar8 << 0x12 | (uint)((uStack_420 >> 0xe) >> 0x20)) ^
                     (iVar8 << 0xe | (uint)((uStack_420 >> 0x12) >> 0x20)) ^ (uint)(uStack_420 >> 9)
                     ,(uint)(uStack_420 >> 0xe) ^ (uint)(uStack_420 >> 0x12) ^
                      ((uint)((uStack_420 >> 9) >> 0x20) | iVar8 << 0x17));
    uVar6 = (uint)(uVar9 >> 0x20);
    puStack_310 = puStack_310 + 8;
    plVar17 = plVar17 + 8;
    uStack_438 = uVar14 + ((ulonglong)uVar6 << 0x20 | uVar9 & 0xffffffff);
    uStack_430 = CONCAT44((iVar7 << 4 | (uint)((uVar13 >> 0x1c) >> 0x20)) ^ (uint)(uVar13 >> 2) ^
                          (uint)(uVar13 >> 7),
                          ((uint)((uVar13 >> 2) >> 0x20) | iVar7 << 0x1e) ^ (uint)(uVar13 >> 0x1c) ^
                          ((uint)((uVar13 >> 7) >> 0x20) | iVar7 << 0x19)) +
                 ((uVar13 | uVar12) & uStack_448 | uVar13 & uVar12) +
                 ((ulonglong)uVar6 << 0x20 | uVar9 & 0xffffffff);
  } while (plVar17 != (longlong *)&DAT_ram_40099358);
  lVar5 = *(longlong *)(param_1 + 0x40) + uStack_440;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + uStack_430;
  *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar13;
  *(int *)(param_1 + 0x40) = (int)lVar5;
  lVar15 = *(longlong *)(param_1 + 0x18) + uVar12;
  *(int *)(param_1 + 0x18) = (int)lVar15;
  *(int *)(param_1 + 0x44) = (int)((ulonglong)lVar5 >> 0x20);
  *(int *)(param_1 + 0x1c) = (int)((ulonglong)lVar15 >> 0x20);
  *(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + uStack_448;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + uStack_438;
  *(ulonglong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + uStack_420;
  *(ulonglong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + uStack_428;
  return 0;
}


