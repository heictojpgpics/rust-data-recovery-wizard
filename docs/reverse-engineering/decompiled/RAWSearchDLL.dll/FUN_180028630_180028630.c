// Function: FUN_180028630
// Address: 180028630
// Size: 1061 bytes


void FUN_180028630(undefined4 *param_1,int *param_2,int param_3,ulonglong param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *_Dst;
  ulonglong _Size;
  undefined1 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_1b8 [48];
  undefined1 local_188 [8];
  longlong local_180 [4];
  undefined8 local_160;
  longlong *local_158;
  char local_148 [272];
  ulonglong local_38;
  
  local_160 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_1b8;
  if ((param_2 == (int *)0x0) || (param_3 < 0x200)) goto LAB_1800289e9;
  bVar14 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1801183b8) && (_Init_thread_header(&DAT_1801183b8), DAT_1801183b8 == -1)) {
    DAT_1801183bc = (int)(param_3 + (param_3 >> 0x1f & 0x1ffU)) >> 9;
    _Init_thread_footer(&DAT_1801183b8);
  }
  puVar6 = (undefined4 *)((param_4 - *(longlong *)(param_1 + 2)) * (longlong)param_3);
  if ((undefined4 *)(ulonglong)(uint)param_1[0x97] <= puVar6 &&
      (longlong)puVar6 - (longlong)(ulonglong)(uint)param_1[0x97] != 0) goto LAB_1800289e9;
  if ((*param_2 == 0xfffe) && (param_1[0x89] == 0)) {
    puVar6 = param_1 + 0x85;
    iVar2 = FUN_1800472e0(puVar6,(short *)param_2,(longlong)(param_1 + 0x44),param_3);
    if (iVar2 != 0) {
      param_1[0x89] = 1;
    }
  }
  if (param_4 == *(ulonglong *)(param_1 + 2)) {
    puVar6 = param_1;
    FUN_180028a60((longlong)param_1,(longlong)param_2,param_3);
  }
  uVar1 = DAT_1801183bc;
  if (param_4 == (uint)param_1[0x90]) {
    uVar7 = 0;
    if ((DAT_1801183bc != 0) && (param_3 != 0x200)) {
      uVar7 = (uint)param_1[0x96] % DAT_1801183bc;
    }
    puVar6 = param_1;
    FUN_180028c00((longlong)param_1,(ulonglong)(uVar7 << 9) + (longlong)param_2,param_3);
    if (param_1[0x90] == 0) {
      param_1[0x8a] = 1;
    }
  }
  if ((param_4 == (uint)param_1[0x91]) && ((param_1[0x8a] != 0 || (param_1[0x8b] != 0)))) {
    uVar7 = 0;
    if ((uVar1 != 0) && (param_3 != 0x200)) {
      uVar7 = (uint)param_1[0x95] % uVar1;
    }
    iVar2 = param_1[0x8c];
    iVar12 = iVar2 << 7;
    lVar11 = (longlong)iVar12;
    iVar13 = 0;
    if (0 < iVar2 << 7) {
      puVar6 = (undefined4 *)((ulonglong)(uVar7 << 9) + (longlong)param_2);
      piVar3 = puVar6 + lVar11 + -1;
      do {
        iVar13 = iVar12;
        if (*piVar3 != -1) break;
        iVar12 = iVar12 + -1;
        lVar11 = lVar11 + -1;
        piVar3 = piVar3 + -1;
        iVar13 = 0;
      } while (0 < lVar11);
    }
    uVar9 = (ulonglong)(uint)((param_1[0x93] * 0x80 + -0x80) * iVar2 + 1 + iVar13) *
            (longlong)(iVar2 << 9);
    *(ulonglong *)(param_1 + 4) = uVar9;
    if ((param_1[6] == 0x84) && (iVar13 == 0)) {
      lVar11 = *(longlong *)(param_1 + 0x8e);
      puVar6 = (undefined4 *)(lVar11 + 0x1000);
      if (uVar9 < lVar11 + 0x1e01000U || uVar9 - (lVar11 + 0x1e01000U) == 0) {
        *(undefined4 **)(param_1 + 4) = puVar6;
      }
      else {
        *(longlong *)(param_1 + 4) = lVar11 + 0x21000;
      }
    }
    bVar14 = param_1[0x92] == 0;
  }
  if (param_4 == (uint)param_1[0x92]) {
    uVar8 = 0;
    uVar7 = 0;
    if (uVar1 == 0) {
LAB_180028865:
      uVar8 = uVar7;
      if (param_3 == 0x200) goto LAB_18002886d;
      iVar2 = 0x400;
    }
    else {
      if (param_3 != 0x200) {
        uVar7 = (uint)param_1[0x94] % uVar1;
        goto LAB_180028865;
      }
LAB_18002886d:
      puVar6 = (undefined4 *)(param_4 + 3);
      iVar2 = param_3 * 4;
      if (*(longlong *)(param_5 + 8) <= (longlong)puVar6) {
        iVar2 = param_3;
      }
    }
    lVar11 = (ulonglong)(uVar8 << 9) + (longlong)param_2;
    if ((lVar11 != 0) && (param_1[0x92] = 0, *(longlong *)(param_1 + 0x34) != 0)) {
      FUN_180027be0(puVar6,lVar11,iVar2,(longlong)param_1);
      bVar14 = *(longlong *)(param_1 + 4) != 0;
      goto LAB_1800288c7;
    }
LAB_1800289c3:
    if (param_1[0x88] == 0) goto LAB_1800289e9;
  }
  else {
LAB_1800288c7:
    if (!bVar14) goto LAB_1800289c3;
    if ((param_1[6] == 0x29) &&
       (plVar4 = FUN_1800275e0((longlong *)(param_2 + 0x80),param_3), plVar4 != (longlong *)0x0)) {
      param_1[6] = 0x34;
    }
    uVar10 = 4;
    memset(local_148,0,0x104);
    local_158 = local_180;
    FUN_180001780((longlong)local_180);
    puVar5 = (undefined8 *)FUN_1800016b0(local_180);
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    local_188[0] = 0;
    FUN_180001300((undefined1 *)puVar5,local_188);
    uVar9 = 0xffffffffffffffff;
    do {
      _Size = uVar9 + 1;
      lVar11 = uVar9 + 1;
      uVar9 = _Size;
    } while (local_148[lVar11] != '\0');
    if ((ulonglong)puVar5[3] < _Size) {
      FUN_1800086f0((longlong)local_180,_Size,uVar10,local_148);
    }
    else {
      _Dst = puVar5;
      if (0xf < (ulonglong)puVar5[3]) {
        _Dst = (undefined8 *)*puVar5;
      }
      puVar5[2] = _Size;
      memmove(_Dst,local_148,_Size);
      local_188[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_188);
    }
    FUN_1800173f0((longlong)param_1,local_180);
    param_1[0x88] = 1;
  }
  if (param_1[0x89] != 0) {
    FUN_180029000((longlong)param_1,(longlong)(param_1 + 0x44));
  }
LAB_1800289e9:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_1b8);
  return;
}

