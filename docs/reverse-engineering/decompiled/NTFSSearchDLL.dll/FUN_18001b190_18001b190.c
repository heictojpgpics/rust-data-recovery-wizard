// Function: FUN_18001b190
// Address: 18001b190
// Size: 1256 bytes


void FUN_18001b190(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  char *_Buf1;
  undefined8 *_Dst;
  longlong *plVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  char *pcVar14;
  longlong lVar15;
  size_t _Size;
  undefined1 auStackY_108 [32];
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [4];
  longlong local_58 [4];
  ulonglong local_38;
  
  local_88 = 0xfffffffffffffffe;
  local_38 = DAT_180086010 ^ (ulonglong)auStackY_108;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_b8 = param_1;
  local_b0 = param_2;
  local_80 = param_1;
  local_d8 = (longlong *)FUN_180020780();
  plVar9 = (longlong *)&DAT_1800729a0;
  FUN_180003be0(local_58,&DAT_1800729a0);
  plVar12 = local_d8;
  plVar8 = (longlong *)local_d8[1];
  plVar11 = local_d8;
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    plVar6 = (longlong *)FUN_180002680(local_58);
    uVar2 = plVar6[2];
    uVar3 = plVar6[3];
    plVar11 = plVar12;
    do {
      param_4 = (longlong *)FUN_180002680(plVar8 + 4);
      plVar9 = plVar6;
      if (0xf < uVar3) {
        plVar9 = (longlong *)*plVar6;
      }
      uVar4 = param_4[2];
      if (0xf < (ulonglong)param_4[3]) {
        param_4 = (longlong *)*param_4;
      }
      local_a8 = uVar2;
      local_a0 = uVar4;
      puVar7 = FUN_180002960(&local_a0,&local_a8);
      iVar5 = memcmp(param_4,plVar9,*puVar7);
      if (iVar5 == 0) {
        if (uVar4 < uVar2) goto LAB_18001b2d6;
LAB_18001b272:
        plVar13 = (longlong *)*plVar8;
        plVar11 = plVar8;
      }
      else {
        if (-1 < iVar5) goto LAB_18001b272;
LAB_18001b2d6:
        plVar13 = (longlong *)plVar8[2];
      }
      plVar8 = plVar13;
    } while (*(char *)((longlong)plVar13 + 0x19) == '\0');
    if (plVar11 == plVar12) goto LAB_18001b2de;
    plVar9 = (longlong *)FUN_180002680(plVar11 + 4);
    uVar4 = plVar9[2];
    if (0xf < (ulonglong)plVar9[3]) {
      plVar9 = (longlong *)*plVar9;
    }
    if (0xf < uVar3) {
      plVar6 = (longlong *)*plVar6;
    }
    local_98 = uVar4;
    local_90 = uVar2;
    puVar7 = FUN_180002960(&local_90,&local_98);
    param_4 = plVar9;
    iVar5 = memcmp(plVar6,plVar9,*puVar7);
    if (iVar5 == 0) {
      if (uVar2 < uVar4) goto LAB_18001b2de;
    }
    else if (iVar5 < 0) goto LAB_18001b2de;
  }
  else {
LAB_18001b2de:
    local_c8 = local_58;
    plVar8 = (longlong *)FUN_180020fd0(&local_d8,plVar9,&local_c8,(ulonglong)param_4);
    param_4 = plVar8 + 4;
    FUN_180021080((longlong *)&local_d8,&local_c0,plVar11,param_4,plVar8);
    plVar11 = local_c0;
  }
  plVar11[8] = 0x100000;
  FUN_1800025f0(local_58);
  plVar8 = local_b8;
  FUN_180011a30((longlong)local_78,local_b8);
  _Buf1 = (char *)FUN_180002680(local_78);
  pcVar14 = _Buf1;
  if (0xf < *(ulonglong *)(_Buf1 + 0x18)) {
    pcVar14 = *(char **)_Buf1;
  }
  local_c8 = (longlong *)0xffffffffffffffff;
  if (*(longlong *)(_Buf1 + 0x10) == 0) {
LAB_18001b5c1:
    FUN_1800025f0(local_78);
    plVar12 = local_d8;
    cVar1 = *(char *)(local_d8[1] + 0x19);
    plVar9 = (longlong *)local_d8[1];
    while (cVar1 == '\0') {
      FUN_1800207e0(&local_d8,(longlong *)plVar9[2],pcVar14,param_4);
      plVar11 = (longlong *)*plVar9;
      local_b0 = plVar9 + 4;
      FUN_1800025f0(local_b0);
      free(plVar9);
      plVar9 = plVar11;
      cVar1 = *(char *)((longlong)plVar11 + 0x19);
    }
    local_d8[1] = (longlong)plVar12;
    *local_d8 = (longlong)plVar12;
    local_d8[2] = (longlong)plVar12;
    uStack_d0 = 0;
    free(local_d8);
  }
  else {
    local_c0 = (longlong *)(*(longlong *)(_Buf1 + 0x10) + -1);
    puVar7 = FUN_180002960((ulonglong *)&local_c8,(ulonglong *)&local_c0);
    pcVar10 = pcVar14 + *puVar7;
    cVar1 = *pcVar10;
    while (cVar1 != '.') {
      if (pcVar10 == pcVar14) goto LAB_18001b5c1;
      pcVar10 = pcVar10 + -1;
      cVar1 = *pcVar10;
    }
    plVar9 = (longlong *)(pcVar10 + -(longlong)pcVar14);
    if (plVar9 == (longlong *)0xffffffffffffffff) goto LAB_18001b5c1;
    _Dst = (undefined8 *)FUN_180002680(local_78);
    plVar8 = _Dst + 2;
    plVar12 = (longlong *)*plVar8;
    local_c8 = plVar9;
    local_c0 = plVar12;
    puVar7 = FUN_180002960((ulonglong *)&local_c8,(ulonglong *)&local_c0);
    uVar2 = *puVar7;
    if (0xf < (ulonglong)_Dst[3]) {
      _Dst = (undefined8 *)*_Dst;
    }
    lVar15 = (longlong)plVar12 - uVar2;
    *plVar8 = lVar15;
    _Size = lVar15 + 1;
    memmove(_Dst,(void *)((longlong)_Dst + uVar2),_Size);
    plVar8 = local_d8;
    if (*(char *)(local_d8[1] + 0x19) == '\0') {
      plVar9 = *(longlong **)(_Buf1 + 0x10);
      uVar2 = *(ulonglong *)(_Buf1 + 0x18);
      plVar12 = (longlong *)local_d8[1];
      plVar11 = local_d8;
      do {
        _Dst = (undefined8 *)FUN_180002680(plVar12 + 4);
        pcVar14 = _Buf1;
        if (0xf < uVar2) {
          pcVar14 = *(char **)_Buf1;
        }
        plVar6 = (longlong *)_Dst[2];
        if (0xf < (ulonglong)_Dst[3]) {
          _Dst = (undefined8 *)*_Dst;
        }
        local_c8 = plVar6;
        local_c0 = plVar9;
        puVar7 = FUN_180002960((ulonglong *)&local_c8,(ulonglong *)&local_c0);
        _Size = *puVar7;
        iVar5 = memcmp(_Dst,pcVar14,_Size);
        if (iVar5 == 0) {
          if (plVar6 < plVar9) goto LAB_18001b51a;
LAB_18001b45f:
          plVar6 = (longlong *)*plVar12;
          plVar11 = plVar12;
        }
        else {
          if (-1 < iVar5) goto LAB_18001b45f;
LAB_18001b51a:
          plVar6 = (longlong *)plVar12[2];
        }
        plVar12 = plVar6;
      } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
      if (plVar11 != plVar8) {
        _Dst = (undefined8 *)FUN_180002680(plVar11 + 4);
        plVar8 = (longlong *)_Dst[2];
        if (0xf < (ulonglong)_Dst[3]) {
          _Dst = (undefined8 *)*_Dst;
        }
        if (0xf < uVar2) {
          _Buf1 = *(char **)_Buf1;
        }
        local_c8 = plVar9;
        local_c0 = plVar8;
        puVar7 = FUN_180002960((ulonglong *)&local_c8,(ulonglong *)&local_c0);
        _Size = *puVar7;
        iVar5 = memcmp(_Buf1,_Dst,_Size);
        if (iVar5 == 0) {
          if (plVar8 <= plVar9) {
LAB_18001b525:
            if (plVar11[8] < (longlong)local_b0) {
              FUN_1800025f0(local_78);
              plVar9 = local_d8;
              cVar1 = *(char *)(local_d8[1] + 0x19);
              plVar8 = (longlong *)local_d8[1];
              while (cVar1 == '\0') {
                FUN_1800207e0(&local_d8,(longlong *)plVar8[2],_Size,_Dst);
                plVar12 = (longlong *)*plVar8;
                local_b0 = plVar8 + 4;
                FUN_1800025f0(local_b0);
                free(plVar8);
                plVar8 = plVar12;
                cVar1 = *(char *)((longlong)plVar12 + 0x19);
              }
              local_d8[1] = (longlong)plVar9;
              *local_d8 = (longlong)plVar9;
              local_d8[2] = (longlong)plVar9;
              uStack_d0 = 0;
              free(local_d8);
              FUN_1800025f0(local_b8);
              goto LAB_18001b64b;
            }
          }
        }
        else if (-1 < iVar5) goto LAB_18001b525;
      }
    }
    FUN_1800025f0(local_78);
    plVar8 = local_d8;
    FUN_1800207e0(&local_d8,(longlong *)local_d8[1],_Size,_Dst);
    local_d8[1] = (longlong)plVar8;
    *local_d8 = (longlong)plVar8;
    local_d8[2] = (longlong)plVar8;
    uStack_d0 = 0;
    free(local_d8);
    plVar8 = local_b8;
  }
  FUN_1800025f0(plVar8);
LAB_18001b64b:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_108);
  return;
}

