// Function: FUN_180027be0
// Address: 180027be0
// Size: 2363 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180027be0(undefined8 param_1,longlong param_2,int param_3,longlong param_4)

{
  wchar_t wVar1;
  short sVar2;
  short sVar3;
  wchar_t wVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  undefined8 *_Memory;
  wchar_t *pwVar12;
  short *psVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined1 uVar25;
  ulonglong uVar26;
  longlong lVar27;
  bool bVar28;
  undefined2 local_res18 [8];
  wchar_t local_60;
  undefined6 uStack_5e;
  wchar_t awStack_58 [4];
  wchar_t awStack_50 [12];
  
  iVar9 = (int)(param_3 + (param_3 >> 0x1f & 0x7fU)) >> 7;
  lVar27 = (longlong)iVar9;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = lVar27 + 1;
  sVar11 = SUB168(ZEXT816(0x80) * auVar5,0);
  if (SUB168(ZEXT816(0x80) * auVar5,8) != 0) {
    sVar11 = 0xffffffffffffffff;
  }
  _Memory = (undefined8 *)FUN_1800020c0(sVar11);
  if (0 < iVar9) {
    lVar22 = param_2 - (longlong)_Memory;
    puVar17 = _Memory;
    do {
      puVar23 = (undefined8 *)(lVar22 + (longlong)puVar17);
      uVar6 = puVar23[1];
      uVar7 = puVar23[2];
      uVar8 = puVar23[3];
      *puVar17 = *puVar23;
      puVar17[1] = uVar6;
      puVar17[2] = uVar7;
      puVar17[3] = uVar8;
      puVar23 = (undefined8 *)(lVar22 + 0x20 + (longlong)puVar17);
      uVar6 = puVar23[1];
      uVar7 = puVar23[2];
      uVar8 = puVar23[3];
      puVar17[4] = *puVar23;
      puVar17[5] = uVar6;
      puVar17[6] = uVar7;
      puVar17[7] = uVar8;
      puVar23 = (undefined8 *)(lVar22 + 0x40 + (longlong)puVar17);
      uVar6 = puVar23[1];
      uVar7 = puVar23[2];
      uVar8 = puVar23[3];
      puVar17[8] = *puVar23;
      puVar17[9] = uVar6;
      puVar17[10] = uVar7;
      puVar17[0xb] = uVar8;
      puVar23 = (undefined8 *)(lVar22 + 0x60 + (longlong)puVar17);
      uVar6 = puVar23[1];
      uVar7 = puVar23[2];
      uVar8 = puVar23[3];
      puVar17[0xc] = *puVar23;
      puVar17[0xd] = uVar6;
      puVar17[0xe] = uVar7;
      puVar17[0xf] = uVar8;
      puVar17 = puVar17 + 0x10;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  iVar24 = 0x29;
  iVar21 = 0;
  if (0 < iVar9) {
    do {
      pwVar12 = (wchar_t *)(_Memory + (longlong)iVar21 * 0x10);
      lVar27 = -1;
      do {
        if (pwVar12[lVar27 + 1] != L"WordDocument"[lVar27 + 1]) break;
        lVar27 = lVar27 + 2;
        if (lVar27 == 0xd) goto LAB_180027d38;
      } while (pwVar12[lVar27] == L"WordDocument"[lVar27]);
      lVar27 = -1;
      do {
        if (pwVar12[lVar27 + 1] != L"ObjectPool"[lVar27 + 1]) break;
        lVar27 = lVar27 + 2;
        if (lVar27 == 0xb) goto LAB_180027d38;
      } while (pwVar12[lVar27] == L"ObjectPool"[lVar27]);
      pwVar12 = wcsstr(pwVar12,L"HwpSummaryInformation");
      if (pwVar12 != (wchar_t *)0x0) {
        iVar24 = 0x79;
        break;
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar9);
  }
LAB_180027d44:
  pwVar12 = (wchar_t *)(_Memory + 0x10);
  lVar27 = -1;
  do {
    iVar21 = (uint)*(ushort *)((longlong)_Memory + lVar27 * 2 + 0x82) -
             (uint)(ushort)L"Workbook"[lVar27 + 1];
    if ((iVar21 != 0) || (lVar27 = lVar27 + 2, lVar27 == 9)) break;
    iVar21 = (uint)(ushort)pwVar12[lVar27] - (uint)(ushort)L"Workbook"[lVar27];
  } while (iVar21 == 0);
  if (iVar21 == 0) {
    iVar24 = 0x47;
  }
  lVar27 = 0;
  do {
    pwVar15 = pwVar12 + lVar27;
    lVar27 = lVar27 + 1;
    bVar28 = *pwVar15 == *(wchar_t *)(&UNK_18006b4ee + lVar27 * 2);
    if (!bVar28) goto LAB_180027dba;
  } while (lVar27 != 5);
  bVar28 = *pwVar15 == _UNK_18006b4f8;
LAB_180027dba:
  if (bVar28) {
    iVar24 = 0x47;
  }
  lVar27 = -1;
  do {
    iVar21 = (uint)*(ushort *)((longlong)_Memory + lVar27 * 2 + 0x102) -
             (uint)(ushort)L"Workbook"[lVar27 + 1];
    if ((iVar21 != 0) || (lVar27 = lVar27 + 2, lVar27 == 9)) break;
    iVar21 = (uint)*(ushort *)((longlong)_Memory + lVar27 * 2 + 0x100) -
             (uint)(ushort)L"Workbook"[lVar27];
  } while (iVar21 == 0);
  if (iVar21 == 0) {
    iVar24 = 0x47;
  }
  lVar27 = 0;
  do {
    wVar1 = *(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x100);
    lVar27 = lVar27 + 1;
    bVar28 = wVar1 == *(wchar_t *)(&UNK_18006b4ee + lVar27 * 2);
    if (!bVar28) goto LAB_180027e1a;
  } while (lVar27 != 5);
  bVar28 = wVar1 == _UNK_18006b4f8;
LAB_180027e1a:
  if (bVar28) {
    iVar24 = 0x47;
  }
  lVar27 = 0;
  do {
    if ((pwVar12[lVar27] != L"PowerPoint Document"[lVar27]) ||
       (*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x82) != L"PowerPoint Document"[lVar27 + 1]))
    {
      lVar27 = 0;
      goto LAB_180027e60;
    }
    lVar27 = lVar27 + 2;
  } while (lVar27 != 0x14);
  goto LAB_180027eb7;
LAB_180027d38:
  iVar24 = 0x17;
  goto LAB_180027d44;
  while (lVar27 = lVar27 + 2, lVar27 != 0x14) {
LAB_180027e60:
    if ((*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x100) != L"PowerPoint Document"[lVar27]) ||
       (*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x102) != L"PowerPoint Document"[lVar27 + 1]))
    {
      lVar27 = 0;
      goto LAB_180027e90;
    }
  }
  goto LAB_180027eb7;
  while (uVar14 = uVar18, uVar18 != 6) {
LAB_180027f40:
    uVar18 = uVar14 + 1;
    if (*(short *)((longlong)_Memory + uVar14 * 2 + 0x100) !=
        *(short *)(&UNK_18006b556 + uVar18 * 2)) goto LAB_180027f63;
  }
  goto LAB_180027f54;
  while (uVar19 = uVar14 + 2, uVar14 + 2 != 0x16) {
LAB_180027ff0:
    uVar14 = uVar19;
    if ((*(wchar_t *)((longlong)_Memory + uVar14 * 2 + 0x100) != L"PerfectOffice_OBJECTS"[uVar14])
       || (*(wchar_t *)((longlong)_Memory + uVar14 * 2 + 0x102) !=
           L"PerfectOffice_OBJECTS"[uVar14 + 1])) goto LAB_1800280a0;
  }
  iVar24 = (int)uVar14 + 0x30;
  awStack_58[0] = u_SummaryInformation_18006b5d8[4];
  awStack_58[1] = u_SummaryInformation_18006b5d8[5];
  awStack_58[2] = u_SummaryInformation_18006b5d8[6];
  awStack_58[3] = u_SummaryInformation_18006b5d8[7];
  awStack_50[0] = u_SummaryInformation_18006b5d8[8];
  awStack_50[1] = u_SummaryInformation_18006b5d8[9];
  awStack_50[2] = u_SummaryInformation_18006b5d8[10];
  awStack_50[3] = u_SummaryInformation_18006b5d8[0xb];
  awStack_50[4] = u_SummaryInformation_18006b5d8[0xc];
  awStack_50[5] = u_SummaryInformation_18006b5d8[0xd];
  awStack_50[6] = u_SummaryInformation_18006b5d8[0xe];
  awStack_50[7] = u_SummaryInformation_18006b5d8[0xf];
  awStack_50[8] = u_SummaryInformation_18006b5d8[0x10];
  awStack_50[9] = u_SummaryInformation_18006b5d8[0x11];
  awStack_50[10] = u_SummaryInformation_18006b5d8[0x12];
  awStack_50[0xb] = u_SummaryInformation_18006b5d8[0x13];
  uStack_5e = SUB86(u_SummaryInformation_18006b5d8._0_8_,2);
  _local_60 = CONCAT62(uStack_5e,5);
  psVar13 = (short *)(_Memory + 0x30);
  lVar27 = (longlong)&local_60 - (longlong)psVar13;
  do {
    sVar2 = *psVar13;
    sVar3 = *(short *)((longlong)psVar13 + lVar27);
    if (sVar2 != sVar3) break;
    psVar13 = psVar13 + 1;
  } while (sVar3 != 0);
  if (sVar2 == sVar3) {
    iVar24 = 0x3d;
  }
  else {
    lVar27 = _Memory[10] - _DAT_1800668b8;
    if (lVar27 == 0) {
      lVar27 = _Memory[0xb] - _DAT_1800668c0;
    }
    if (lVar27 == 0) {
      iVar24 = 0x45;
    }
  }
  goto LAB_1800280a0;
  while( true ) {
    lVar27 = lVar27 + 2;
    if (lVar27 == 9) goto LAB_1800280fc;
    if (*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x180) != L"QuillSub"[lVar27]) break;
LAB_180028300:
    if (*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x182) != L"QuillSub"[lVar27 + 1]) break;
  }
  goto LAB_180028101;
  while (uVar20 = uVar26, uVar19 = uVar14, uVar14 != 6) {
LAB_180028340:
    uVar14 = uVar19 + 1;
    if (*(short *)((longlong)_Memory + uVar19 * 2 + 0x100) !=
        *(short *)(&UNK_18006b706 + uVar14 * 2)) goto LAB_180028290;
  }
  do {
    uVar19 = uVar20 + 1;
    if (*(wchar_t *)((longlong)_Memory + uVar20 * 2 + 0x180) != L"VBAProject"[uVar20 + 0xc])
    goto LAB_180028290;
    uVar20 = uVar19;
  } while (uVar19 != 8);
  goto LAB_1800283aa;
  while (uVar18 = uVar19, uVar19 != 4) {
LAB_180028391:
    uVar19 = uVar18 + 1;
    if (*(wchar_t *)((longlong)_Memory + uVar18 * 2 + 0x180) != L"Reports"[uVar18 + 8])
    goto LAB_1800283af;
  }
LAB_1800283aa:
  iVar24 = 3;
  goto LAB_1800283af;
  while (lVar27 = lVar27 + 2, lVar27 != 0x14) {
LAB_180027e90:
    if ((*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x180) != L"PowerPoint Document"[lVar27]) ||
       (*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x182) != L"PowerPoint Document"[lVar27 + 1]))
    goto LAB_180027eba;
  }
LAB_180027eb7:
  iVar24 = 0x34;
LAB_180027eba:
  iVar21 = wcsncmp(pwVar12,L"Pictures",8);
  if (iVar21 == 0) {
    iVar24 = 0x34;
  }
  lVar27 = 0;
  do {
    pwVar15 = pwVar12 + lVar27;
    lVar27 = lVar27 + 1;
    bVar28 = *pwVar15 == *(wchar_t *)(&UNK_18006b546 + lVar27 * 2);
    if (!bVar28) goto LAB_180027f0a;
  } while (lVar27 != 5);
  bVar28 = *pwVar15 == _UNK_18006b550;
LAB_180027f0a:
  if (bVar28) {
    iVar24 = 0x34;
  }
  uVar26 = 0;
  uVar18 = uVar26;
  do {
    pwVar15 = pwVar12 + uVar18;
    uVar18 = uVar18 + 1;
    uVar14 = uVar26;
    uVar19 = uVar26;
    if (*pwVar15 != *(wchar_t *)(&UNK_18006b556 + uVar18 * 2)) goto LAB_180027f40;
  } while (uVar18 != 6);
LAB_180027f54:
  iVar24 = 0x25;
LAB_180027f63:
  do {
    iVar21 = (uint)(ushort)pwVar12[uVar19] - (uint)(ushort)L"VisioDocument"[uVar19];
    if ((iVar21 != 0) ||
       (iVar21 = (uint)*(ushort *)((longlong)_Memory + uVar19 * 2 + 0x82) -
                 (uint)(ushort)L"VisioDocument"[uVar19 + 1], iVar21 != 0)) break;
    uVar19 = uVar19 + 2;
  } while (uVar19 != 0xe);
  if (iVar21 == 0) {
    iVar24 = 0x42;
  }
  lVar27 = -1;
  do {
    uVar18 = uVar26;
    if (*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x82) != L"PerfectOffice_MAIN"[lVar27 + 1])
    break;
    lVar27 = lVar27 + 2;
    uVar19 = uVar26;
    if (lVar27 == 0x13) goto LAB_180027ff0;
  } while (pwVar12[lVar27] == L"PerfectOffice_MAIN"[lVar27]);
LAB_1800280a0:
  do {
    uVar19 = uVar18 + 1;
    if (pwVar12[uVar18] != *(wchar_t *)(&UNK_18006b66e + uVar19 * 2)) goto LAB_180028101;
    uVar14 = uVar26;
    uVar18 = uVar19;
  } while (uVar19 != 8);
  do {
    uVar18 = uVar14 + 1;
    if (*(wchar_t *)((longlong)_Memory + uVar14 * 2 + 0x100) != L"Objects"[uVar14 + 8])
    goto LAB_180028101;
    uVar19 = uVar26;
    uVar14 = uVar18;
  } while (uVar18 != 6);
  do {
    uVar18 = uVar19 + 1;
    if (*(wchar_t *)((longlong)_Memory + uVar19 * 2 + 0x180) != L"PerfectOffice_MAIN"[uVar19 + 0x14]
       ) {
      lVar27 = -1;
      goto LAB_180028300;
    }
    uVar19 = uVar18;
  } while (uVar18 != 7);
LAB_1800280fc:
  iVar24 = 0x35;
LAB_180028101:
  lVar27 = -1;
  do {
    iVar21 = (uint)*(ushort *)((longlong)_Memory + lVar27 * 2 + 0x82) -
             (uint)(ushort)L"NativeContent_MAIN"[lVar27 + 1];
    if ((iVar21 != 0) || (lVar27 = lVar27 + 2, lVar27 == 0x13)) break;
    iVar21 = (uint)(ushort)pwVar12[lVar27] - (uint)(ushort)L"NativeContent_MAIN"[lVar27];
  } while (iVar21 == 0);
  if (iVar21 == 0) {
    iVar24 = 0x39;
  }
  awStack_58[0] = u_CompObj_18006b6d8[4];
  awStack_58[1] = u_CompObj_18006b6d8[5];
  awStack_58[2] = u_CompObj_18006b6d8[6];
  awStack_58[3] = u_CompObj_18006b6d8[7];
  awStack_50[0] = u_CompObj_18006b6d8[8];
  uStack_5e = SUB86(u_CompObj_18006b6d8._0_8_,2);
  _local_60 = CONCAT62(uStack_5e,1);
  pwVar15 = pwVar12;
  do {
    wVar1 = *pwVar15;
    wVar4 = *(wchar_t *)((longlong)pwVar15 + ((longlong)&local_60 - (longlong)pwVar12));
    if (wVar1 != wVar4) break;
    pwVar15 = pwVar15 + 1;
  } while (wVar4 != L'\0');
  uVar18 = uVar26;
  if (wVar1 == wVar4) {
    do {
      uVar19 = uVar18 + 1;
      if (*(short *)((longlong)_Memory + uVar18 * 2 + 0x100) !=
          *(short *)(&UNK_18006b68e + uVar19 * 2)) goto LAB_1800281e3;
      uVar14 = uVar26;
      uVar18 = uVar19;
    } while (uVar19 != 6);
    do {
      wVar1 = *(wchar_t *)((longlong)_Memory + uVar14 * 2 + 0x180);
      uVar14 = uVar14 + 1;
      bVar28 = wVar1 == *(wchar_t *)(&UNK_18006b69e + uVar14 * 2);
      if (!bVar28) goto LAB_1800281df;
    } while (uVar14 != 6);
    bVar28 = wVar1 == u_29_18006b6a2[4];
LAB_1800281df:
    if (bVar28) {
      iVar24 = 0x2f;
    }
  }
LAB_1800281e3:
  pwVar15 = pwVar12;
  do {
    wVar1 = *pwVar15;
    wVar4 = *(wchar_t *)((longlong)pwVar15 + ((longlong)&local_60 - (longlong)pwVar12));
    if (wVar1 != wVar4) break;
    pwVar15 = pwVar15 + 1;
  } while (wVar4 != L'\0');
  uVar18 = uVar26;
  if (wVar1 == wVar4) {
    do {
      uVar19 = uVar18 + 1;
      if (*(short *)((longlong)_Memory + uVar18 * 2 + 0x100) !=
          *(short *)(&UNK_18006b716 + uVar19 * 2)) goto LAB_180028253;
      uVar14 = uVar26;
      uVar18 = uVar19;
    } while (uVar19 != 7);
    do {
      wVar1 = *(wchar_t *)((longlong)_Memory + uVar14 * 2 + 0x180);
      uVar14 = uVar14 + 1;
      bVar28 = wVar1 == *(wchar_t *)(&UNK_18006b726 + uVar14 * 2);
      if (!bVar28) goto LAB_18002824f;
    } while (uVar14 != 7);
    bVar28 = wVar1 == u_212_18006b72a[5];
LAB_18002824f:
    if (bVar28) {
      iVar24 = 0x2f;
    }
  }
LAB_180028253:
  lVar27 = -1;
  do {
    uVar18 = uVar26;
    if (*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x82) != L"PropData"[lVar27 + 1]) break;
    lVar27 = lVar27 + 2;
    uVar19 = uVar26;
    if (lVar27 == 9) goto LAB_180028340;
  } while (pwVar12[lVar27] == L"PropData"[lVar27]);
LAB_180028290:
  do {
    uVar19 = uVar18 + 1;
    if (pwVar12[uVar18] != L"Reports"[uVar18 + 8]) goto LAB_1800283af;
    uVar18 = uVar19;
  } while (uVar19 != 4);
  lVar27 = -1;
  do {
    if (*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x102) != L"VBAProject"[lVar27 + 1]) break;
    lVar27 = lVar27 + 2;
    uVar18 = uVar26;
    if (lVar27 == 0xb) goto LAB_180028391;
  } while (*(wchar_t *)((longlong)_Memory + lVar27 * 2 + 0x100) == L"VBAProject"[lVar27]);
LAB_1800283af:
  puVar16 = FUN_180001350();
  if (0 < iVar9) {
    do {
      iVar21 = (int)uVar26;
      lVar27 = -1;
      do {
        wVar1 = *(wchar_t *)((longlong)_Memory + lVar27 * 2 + (longlong)iVar21 * 0x80 + 2);
        bVar28 = (ushort)wVar1 < (ushort)L"ProjectInformation"[lVar27 + 1];
        if (wVar1 != L"ProjectInformation"[lVar27 + 1]) break;
        lVar27 = lVar27 + 2;
        uVar10 = 0;
        if (lVar27 == 0x13) goto LAB_18002840c;
        wVar1 = *(wchar_t *)((longlong)_Memory + lVar27 * 2 + (longlong)iVar21 * 0x80);
        bVar28 = (ushort)wVar1 < (ushort)L"ProjectInformation"[lVar27];
      } while (wVar1 == L"ProjectInformation"[lVar27]);
      uVar10 = -(uint)bVar28 | 1;
LAB_18002840c:
      if (uVar10 == 0) goto LAB_180028420;
      uVar26 = (ulonglong)(iVar21 + 1U);
    } while ((int)(iVar21 + 1U) < iVar9);
    if (uVar10 == 0) {
LAB_180028420:
      uVar25 = (undefined1)uVar26;
      *(undefined4 *)(param_4 + 0x18) = 0x84;
      awStack_50[0] = L'\0';
      awStack_50[1] = L'\0';
      awStack_50[2] = L'\0';
      awStack_50[3] = L'\0';
      awStack_50[4] = L'\0';
      awStack_50[5] = L'\0';
      awStack_50[6] = L'\0';
      awStack_50[7] = L'\0';
      puVar17 = (undefined8 *)FUN_1800016b0(&local_60);
      puVar17[2] = 0;
      puVar17[3] = 7;
      local_res18[0] = 0;
      FUN_180001790((undefined2 *)puVar17,local_res18);
      if ((ulonglong)puVar17[3] < 3) {
        FUN_18000f8f0((longlong)&local_60,3,uVar25,&DAT_18006b798);
      }
      else {
        puVar23 = puVar17;
        if (7 < (ulonglong)puVar17[3]) {
          puVar23 = (undefined8 *)*puVar17;
        }
        puVar17[2] = 3;
        memmove(puVar23,&DAT_18006b798,6);
        local_res18[0] = 0;
        FUN_180001790((undefined2 *)((longlong)puVar23 + 6),local_res18);
      }
      FUN_18000ed00((longlong)(puVar16 + 0x60),(ushort *)&local_60);
    }
  }
  if ((*(int *)(param_4 + 0x18) == 0x30) || (*(int *)(param_4 + 0x18) == 0x29)) {
    *(int *)(param_4 + 0x18) = iVar24;
  }
  free(_Memory);
  return;
}

