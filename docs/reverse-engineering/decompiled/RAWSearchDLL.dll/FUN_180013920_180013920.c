// Function: FUN_180013920
// Address: 180013920
// Size: 592 bytes


int FUN_180013920(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  ulonglong uVar10;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar7 = 0;
  uVar9 = 0;
  uVar6 = 0;
  puVar5 = param_2 + 0x25;
  lVar4 = 8;
  do {
    if (puVar5 == (uint *)0x0) break;
    iVar3 = isspace((uint)(byte)*puVar5);
    uVar12 = uVar7;
    uVar8 = uVar9;
    if (iVar3 == 0) goto joined_r0x000180013988;
    puVar5 = (uint *)((longlong)puVar5 + 1);
    bVar14 = lVar4 != 0;
    lVar4 = lVar4 + -1;
  } while (bVar14);
LAB_1800139d7:
  uVar8 = 0xffffffff;
LAB_1800139dc:
  if (param_2 != (uint *)0xfffffffffffffe00) {
    uVar12 = 0x200;
    if (param_2 + 0x80 < param_2) {
      uVar12 = uVar7;
    }
    puVar5 = param_2;
    uVar11 = uVar7;
    uVar13 = uVar9;
    if ((uVar12 != 0) && (uVar13 = 0, param_2 <= param_2 + 0x80)) {
      auVar16 = ZEXT1664((undefined1  [16])0x0);
      auVar17 = ZEXT1664((undefined1  [16])0x0);
      do {
        auVar2 = vpmovzxbd_avx(ZEXT416(*puVar5));
        puVar1 = puVar5 + 1;
        auVar2 = vpaddd_avx(auVar2,auVar16._0_16_);
        auVar16 = ZEXT1664(auVar2);
        puVar5 = puVar5 + 2;
        uVar11 = uVar11 + 8;
        auVar15 = vpmovzxbd_avx(ZEXT416(*puVar1));
        auVar15 = vpaddd_avx(auVar15,auVar17._0_16_);
        auVar17 = ZEXT1664(auVar15);
      } while (uVar11 < uVar12);
      auVar2 = vpaddd_avx(auVar15,auVar2);
      auVar15 = vpsrldq_avx(auVar2,8);
      auVar2 = vpaddd_avx(auVar2,auVar15);
      auVar15 = vpsrldq_avx(auVar2,4);
      auVar2 = vpaddd_avx(auVar2,auVar15);
      uVar13 = auVar2._0_4_;
    }
    if (uVar11 < uVar12) {
      if (1 < uVar12 - uVar11) {
        lVar4 = ((uVar12 - uVar11) - 2 >> 1) + 1;
        uVar11 = uVar11 + lVar4 * 2;
        uVar10 = uVar7;
        do {
          uVar6 = (int)uVar7 + (uint)(byte)*puVar5;
          uVar7 = (ulonglong)uVar6;
          uVar9 = (int)uVar10 + (uint)*(byte *)((longlong)puVar5 + 1);
          uVar10 = (ulonglong)uVar9;
          puVar5 = (uint *)((longlong)puVar5 + 2);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (uVar11 < uVar12) {
        uVar13 = uVar13 + (byte)*puVar5;
      }
      uVar13 = uVar13 + uVar9 + uVar6;
    }
    if ((uVar13 - ((int)*(char *)((longlong)param_2 + 0x9b) +
                   (int)*(char *)((longlong)param_2 + 0x9a) +
                   (int)*(char *)((longlong)param_2 + 0x99) + (int)(char)param_2[0x26] +
                   (int)*(char *)((longlong)param_2 + 0x97) +
                   (int)*(char *)((longlong)param_2 + 0x96) +
                   (int)*(char *)((longlong)param_2 + 0x95) + (int)(char)(byte)param_2[0x25])) +
        0x100 == uVar8) {
      iVar3 = strncmp((char *)((longlong)param_2 + 0x101),"ustar  ",8);
      if (iVar3 != 0) {
        iVar3 = strncmp((char *)((longlong)param_2 + 0x101),"ustar",8);
        return 2 - (uint)(iVar3 != 0);
      }
      return 3;
    }
  }
  return 0;
joined_r0x000180013988:
  if (lVar4 == 0) goto LAB_1800139b9;
  uVar8 = (uint)uVar12;
  if (puVar5 == (uint *)0x0) goto LAB_1800139d7;
  uVar13 = *puVar5;
  if (7 < (byte)((byte)uVar13 - 0x30)) goto LAB_1800139b9;
  puVar5 = (uint *)((longlong)puVar5 + 1);
  uVar8 = (int)(char)(byte)uVar13 - 0x30U | uVar8 * 8;
  lVar4 = lVar4 + -1;
  uVar12 = (ulonglong)uVar8;
  goto joined_r0x000180013988;
LAB_1800139b9:
  if ((puVar5 != (uint *)0x0) &&
     (((lVar4 == 0 || ((byte)*puVar5 == 0)) || (iVar3 = isspace((uint)(byte)*puVar5), iVar3 != 0))))
  goto LAB_1800139dc;
  goto LAB_1800139d7;
}

