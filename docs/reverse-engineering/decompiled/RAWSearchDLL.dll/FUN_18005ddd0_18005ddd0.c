// Function: FUN_18005ddd0
// Address: 18005ddd0
// Size: 880 bytes


undefined1 * FUN_18005ddd0(longlong param_1,int param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  longlong *_Dst;
  void *_Dst_00;
  undefined1 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  longlong *plVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  size_t _Size;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  undefined1 *local_58;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  iVar15 = 0;
  bVar3 = false;
  local_58 = (undefined1 *)0x0;
  for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    iVar15 = iVar15 + 1;
  }
  _Size = (longlong)iVar15 * 8;
  _Dst = (longlong *)(*DAT_180117f28)(_Size);
  if (_Dst == (longlong *)0x0) {
    return (undefined1 *)0x0;
  }
  _Dst_00 = (void *)(*DAT_180117f28)(_Size);
  if (_Dst_00 == (void *)0x0) goto LAB_18005dfba;
  memset(_Dst,0,_Size);
  uVar10 = 0;
  memset(_Dst_00,0,_Size);
  plVar12 = *(longlong **)(param_1 + 0x10);
  uVar16 = param_2 + 1;
  iVar18 = param_2 + 8;
  if (param_3 == 0) {
    iVar18 = 7;
  }
  if (plVar12 == (longlong *)0x0) {
LAB_18005df4a:
    local_58 = (undefined1 *)(*DAT_180117f28)((longlong)iVar18);
    if (local_58 == (undefined1 *)0x0) goto LAB_18005df67;
  }
  else {
    plVar17 = _Dst;
    do {
      puVar5 = FUN_18005d100((byte *)plVar12[8],uVar10,_Size,param_4);
      _Size = (size_t)param_3;
      *(undefined1 **)(((longlong)_Dst_00 - (longlong)_Dst) + (longlong)plVar17) = puVar5;
      uVar10 = (ulonglong)uVar16;
      puVar6 = FUN_18005d530((longlong)plVar12,uVar10,_Size);
      *plVar17 = (longlong)puVar6;
      plVar17 = plVar17 + 1;
      if ((puVar5 == (undefined1 *)0x0) || (puVar6 == (undefined4 *)0x0)) {
        bVar3 = true;
      }
      else {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (*(char *)((longlong)puVar6 + lVar9) != '\0');
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (puVar5[lVar7] != '\0');
        uVar10 = 2;
        iVar4 = param_2 + 5;
        if (param_3 == 0) {
          iVar4 = 2;
        }
        iVar18 = iVar18 + iVar4 + (int)lVar9 + (int)lVar7;
      }
      plVar12 = (longlong *)*plVar12;
    } while (plVar12 != (longlong *)0x0);
    if (!bVar3) goto LAB_18005df4a;
LAB_18005df67:
    bVar3 = true;
  }
  lVar9 = (longlong)iVar15;
  if (!bVar3) {
    *local_58 = 0x7b;
    pcVar13 = local_58 + 1;
    if (param_3 != 0) {
      *pcVar13 = '\n';
      pcVar13 = local_58 + 2;
    }
    iVar18 = 0;
    *pcVar13 = '\0';
    if (0 < lVar9) {
      lVar7 = (longlong)_Dst_00 - (longlong)_Dst;
      plVar12 = _Dst;
      do {
        if ((param_3 != 0) && (lVar8 = (longlong)(int)uVar16, pcVar14 = pcVar13, 0 < (int)uVar16)) {
          for (; lVar8 != 0; lVar8 = lVar8 + -1) {
            *pcVar14 = '\t';
            pcVar14 = pcVar14 + 1;
          }
          pcVar13 = pcVar13 + (int)uVar16;
        }
        pcVar14 = *(char **)((longlong)plVar12 + lVar7);
        pcVar11 = pcVar13;
        do {
          cVar1 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          *pcVar11 = cVar1;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)((longlong)plVar12 + lVar7) + lVar8) != '\0');
        pcVar13 = pcVar13 + lVar8;
        *pcVar13 = ':';
        pcVar14 = pcVar13 + 1;
        if (param_3 != 0) {
          *pcVar14 = '\t';
          pcVar14 = pcVar13 + 2;
        }
        pcVar13 = (char *)*plVar12;
        pcVar11 = pcVar14;
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          *pcVar11 = cVar1;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (*(char *)(*plVar12 + lVar8) != '\0');
        pcVar13 = pcVar14 + lVar8;
        if (iVar18 != iVar15 + -1) {
          *pcVar13 = ',';
          pcVar13 = pcVar13 + 1;
        }
        if (param_3 != 0) {
          *pcVar13 = '\n';
          pcVar13 = pcVar13 + 1;
        }
        *pcVar13 = '\0';
        (*DAT_180117f20)(*(undefined8 *)((longlong)plVar12 + lVar7));
        (*DAT_180117f20)(*plVar12);
        iVar18 = iVar18 + 1;
        plVar12 = plVar12 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    (*DAT_180117f20)(_Dst_00);
    (*DAT_180117f20)(_Dst);
    if ((param_3 != 0) && (lVar9 = (longlong)param_2, pcVar14 = pcVar13, 0 < param_2)) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pcVar14 = '\t';
        pcVar14 = pcVar14 + 1;
      }
      pcVar13 = pcVar13 + param_2;
    }
    pcVar13[0] = '}';
    pcVar13[1] = '\0';
    return local_58;
  }
  if (0 < lVar9) {
    plVar12 = _Dst;
    do {
      if (*(longlong *)((longlong)plVar12 + ((longlong)_Dst_00 - (longlong)_Dst)) != 0) {
        (*DAT_180117f20)();
      }
      if (*plVar12 != 0) {
        (*DAT_180117f20)();
      }
      plVar12 = plVar12 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  (*DAT_180117f20)(_Dst_00);
LAB_18005dfba:
  (*DAT_180117f20)(_Dst);
  return (undefined1 *)0x0;
}

