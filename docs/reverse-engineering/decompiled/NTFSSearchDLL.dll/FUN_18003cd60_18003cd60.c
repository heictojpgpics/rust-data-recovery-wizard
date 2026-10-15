// Function: FUN_18003cd60
// Address: 18003cd60
// Size: 906 bytes


void FUN_18003cd60(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  size_t *psVar1;
  longlong *plVar2;
  size_t *psVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *_Buf1;
  longlong *plVar14;
  longlong lVar15;
  size_t sVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined8 local_d0;
  longlong local_c8 [4];
  longlong local_a8 [4];
  longlong local_88 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_2 == 0) {
    return;
  }
  local_d0 = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStack_f8;
  local_d4 = 0;
  FUN_180039f60(local_c8,*(ulonglong *)(param_1 + 0x48));
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar7 = FUN_1800025d0((longlong)local_c8);
  if (uVar7 < 2) {
    uVar8 = FUN_1800025d0((longlong)local_c8);
    lVar9 = FUN_1800025d0((longlong)local_c8);
    sVar16 = 2 - lVar9;
    FUN_1800026a0((longlong)local_88);
    puVar10 = (undefined1 *)FUN_180002680(local_88);
    *(undefined8 *)(puVar10 + 0x10) = 0;
    *(undefined8 *)(puVar10 + 0x18) = 0xf;
    local_d8[0] = 0;
    FUN_180001150(puVar10,local_d8);
    FUN_1800026c0(local_88,&DAT_180072f08,sVar16);
    puVar11 = (undefined8 *)FUN_180002680(local_c8);
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    uVar12 = FUN_18003d400(local_88,puVar11,*psVar1);
    FUN_1800026a0((longlong)local_a8);
    puVar11 = (undefined8 *)FUN_180002680(uVar12);
    puVar13 = (undefined8 *)FUN_180002680(local_a8);
    uVar12 = puVar11[1];
    *puVar13 = *puVar11;
    puVar13[1] = uVar12;
    uVar12 = puVar11[3];
    puVar13[2] = puVar11[2];
    puVar13[3] = uVar12;
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    local_d8[0] = 0;
    FUN_180001150((undefined1 *)puVar11,local_d8);
    local_d4 = 1;
    puVar11 = FUN_1800025e0(local_a8);
    FUN_18003d490(&local_68,"%s%02d",puVar11,uVar8);
    local_d4 = 0;
    FUN_1800025f0(local_a8);
    plVar14 = local_88;
  }
  else {
    uVar8 = FUN_1800025d0((longlong)local_c8);
    plVar14 = FUN_180032c30(local_c8,local_a8);
    puVar11 = FUN_1800025e0(plVar14);
    FUN_18003d490(&local_68,"%s%02d",puVar11,uVar8);
    plVar14 = local_a8;
  }
  FUN_1800025f0(plVar14);
  sVar16 = FUN_180002cc0((longlong)&local_68);
  plVar14 = local_c8;
  FUN_1800026c0(plVar14,&local_68,sVar16);
  if (*param_3 == 0) {
LAB_18003cf8c:
    lVar9 = FUN_18003d0f0(plVar14,local_c8);
    *param_3 = lVar9;
    if (lVar9 != 0) {
      *(longlong *)(lVar9 + 8) = param_2;
      lVar15 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar9 + 0x20) = lVar15;
      lVar4 = *(longlong *)(param_2 + 0x10);
      *(longlong *)(lVar9 + 0x18) = lVar4;
      if (lVar15 == 0) {
        lVar15 = lVar4;
      }
      *(longlong *)(lVar9 + 0x20) = lVar15;
      *(longlong *)(param_2 + 0x10) = lVar9;
      *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(param_2 + 0x50);
      plVar14 = (longlong *)FUN_180002680(local_c8);
      if (param_4 != plVar14) {
        puVar11 = (undefined8 *)FUN_180002680(local_c8);
        psVar1 = puVar11 + 2;
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        FUN_1800026c0(param_4,puVar11,*psVar1);
      }
    }
  }
  else {
    _Buf1 = (longlong *)FUN_180002680(local_c8);
    puVar13 = (undefined8 *)FUN_180002680(param_4);
    puVar11 = puVar13 + 2;
    if (0xf < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    plVar2 = _Buf1 + 2;
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (longlong *)*_Buf1;
    }
    plVar14 = (longlong *)*puVar11;
    if (((longlong *)*plVar2 == (longlong *)*puVar11) &&
       (iVar6 = memcmp(_Buf1,puVar13,(size_t)*plVar2), plVar14 = _Buf1, iVar6 == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_18003cf8c;
  }
  if (*param_3 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x18);
  }
  else {
    uVar8 = FUN_180039f60(local_a8,*(ulonglong *)(*param_3 + 0x50));
    puVar13 = (undefined8 *)FUN_180002680(uVar8);
    puVar11 = (undefined8 *)FUN_180002680(local_c8);
    psVar1 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    psVar3 = puVar13 + 2;
    if (0xf < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    if ((*psVar3 == *psVar1) && (iVar6 = memcmp(puVar13,puVar11,*psVar3), iVar6 == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    FUN_1800025f0(local_a8);
    lVar9 = *(longlong *)(param_1 + 0x18);
    if (bVar5) {
      lVar15 = *param_3;
      *(longlong *)(param_1 + 8) = lVar15;
      *(longlong *)(param_1 + 0x20) = lVar9;
      lVar4 = *(longlong *)(lVar15 + 0x10);
      *(longlong *)(param_1 + 0x18) = lVar4;
      if (lVar9 == 0) {
        lVar9 = lVar4;
      }
      *(longlong *)(param_1 + 0x20) = lVar9;
      *(longlong *)(lVar15 + 0x10) = param_1;
      uVar8 = *(undefined8 *)(lVar15 + 0x50);
      goto LAB_18003d0bf;
    }
  }
  *(longlong *)(param_1 + 8) = param_2;
  *(longlong *)(param_1 + 0x20) = lVar9;
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_2 + 0x10);
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x20) = lVar9;
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  *(longlong *)(param_2 + 0x10) = param_1;
LAB_18003d0bf:
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  FUN_1800025f0(local_c8);
  __security_check_cookie(local_48 ^ (ulonglong)auStack_f8);
  return;
}

