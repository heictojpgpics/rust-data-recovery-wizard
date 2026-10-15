// Function: FUN_1800088a0
// Address: 1800088a0
// Size: 550 bytes


longlong FUN_1800088a0(longlong param_1,ulonglong param_2,undefined1 param_3,void *param_4,
                      size_t param_5)

{
  size_t _Size;
  void *_Src;
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  void *_Dst;
  ulonglong local_res10;
  undefined1 local_res18 [8];
  void *local_res20;
  ulonglong local_48;
  ulonglong local_40;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_1800016b0(param_1);
  local_res10 = 0xfffffffffffffffe;
  _Size = puVar2[2];
  uVar3 = FUN_1800012f0();
  local_48 = uVar3;
  puVar4 = FUN_180001e40(&local_48,&local_res10);
  if (*puVar4 - _Size < param_2) {
    FUN_180008bd0();
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  local_res10 = puVar2[3];
  local_48 = 0xfffffffffffffffe;
  local_40 = uVar3;
  puVar4 = FUN_180001e40(&local_40,&local_48);
  uVar8 = _Size + param_2 | 0xf;
  uVar3 = *puVar4;
  if (uVar8 <= uVar3) {
    uVar7 = *(ulonglong *)(param_1 + 0x18);
    if ((uVar7 <= uVar3 - (uVar7 >> 1)) &&
       (uVar7 = (uVar7 >> 1) + uVar7, uVar3 = uVar8, uVar8 < uVar7)) {
      uVar3 = uVar7;
    }
  }
  uVar8 = uVar3 + 1;
  if (uVar8 < 0x1000) {
    if (uVar8 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_1800020c0(uVar8);
    }
  }
  else {
    uVar7 = uVar3 + 0x28;
    if (uVar7 <= uVar8) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar5 = FUN_1800020c0(uVar7);
    if (lVar5 == 0) goto LAB_180008a4e;
    _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar5;
  }
  pvVar9 = (void *)((longlong)_Dst + _Size);
  puVar2[2] = _Size + param_2;
  puVar2[3] = uVar3;
  if (local_res10 < 0x10) {
    memcpy(_Dst,puVar2,_Size);
    memcpy(pvVar9,local_res20,param_5);
    local_res18[0] = 0;
    FUN_180001300((undefined1 *)((longlong)pvVar9 + param_5),local_res18);
    uVar6 = FUN_1800016b0(puVar2);
    puVar2 = (undefined8 *)FUN_1800012e0(puVar2,uVar6);
    *puVar2 = _Dst;
  }
  else {
    _Src = (void *)*puVar2;
    memcpy(_Dst,_Src,_Size);
    memcpy(pvVar9,local_res20,param_5);
    local_res18[0] = 0;
    FUN_180001300((undefined1 *)((longlong)pvVar9 + param_5),local_res18);
    pvVar9 = _Src;
    if ((0xfff < local_res10 + 1) &&
       (pvVar9 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar9)))) {
LAB_180008a4e:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
    *puVar2 = _Dst;
  }
  return param_1;
}

