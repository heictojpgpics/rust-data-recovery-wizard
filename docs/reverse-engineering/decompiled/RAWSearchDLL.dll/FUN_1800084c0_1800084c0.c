// Function: FUN_1800084c0
// Address: 1800084c0
// Size: 553 bytes


longlong FUN_1800084c0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Src;
  code *pcVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *_Memory;
  void *_Dst;
  ulonglong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20;
  ulonglong local_48 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar4 = (undefined8 *)FUN_1800016b0(param_1);
  local_res10 = 0xfffffffffffffffe;
  _Size = puVar4[2];
  uVar5 = FUN_1800012f0();
  local_48[0] = uVar5;
  puVar6 = FUN_180001e40(local_48,&local_res10);
  if (*puVar6 == _Size) {
    FUN_180008bd0();
    pcVar3 = (code *)swi(3);
    lVar7 = (*pcVar3)();
    return lVar7;
  }
  uVar2 = puVar4[3];
  local_res10 = 0xfffffffffffffffe;
  local_48[0] = uVar5;
  puVar6 = FUN_180001e40(local_48,&local_res10);
  uVar10 = _Size + 1 | 0xf;
  uVar5 = *puVar6;
  if (uVar10 <= uVar5) {
    uVar9 = *(ulonglong *)(param_1 + 0x18);
    if ((uVar9 <= uVar5 - (uVar9 >> 1)) &&
       (uVar9 = (uVar9 >> 1) + uVar9, uVar5 = uVar10, uVar10 < uVar9)) {
      uVar5 = uVar9;
    }
  }
  uVar10 = uVar5 + 1;
  if (uVar10 < 0x1000) {
    if (uVar10 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_1800020c0(uVar10);
      param_4 = local_res20;
    }
  }
  else {
    uVar9 = uVar5 + 0x28;
    if (uVar9 <= uVar10) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar7 = FUN_1800020c0(uVar9);
    if (lVar7 == 0) goto LAB_180008673;
    _Dst = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar7;
    param_4 = local_res20;
  }
  puVar4[2] = _Size + 1;
  puVar1 = (undefined1 *)((longlong)_Dst + _Size);
  puVar4[3] = uVar5;
  local_res18[0] = param_4;
  if (uVar2 < 0x10) {
    memcpy(_Dst,puVar4,_Size);
    FUN_180001300(puVar1,local_res18);
    local_res18[0] = 0;
    FUN_180001300(puVar1 + 1,local_res18);
    uVar8 = FUN_1800016b0(puVar4);
    puVar4 = (undefined8 *)FUN_1800012e0(puVar4,uVar8);
    *puVar4 = _Dst;
  }
  else {
    _Src = (void *)*puVar4;
    memcpy(_Dst,_Src,_Size);
    FUN_180001300(puVar1,local_res18);
    local_res18[0] = 0;
    FUN_180001300(puVar1 + 1,local_res18);
    _Memory = _Src;
    if ((0xfff < uVar2 + 1) &&
       (_Memory = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
LAB_180008673:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *puVar4 = _Dst;
  }
  return param_1;
}

