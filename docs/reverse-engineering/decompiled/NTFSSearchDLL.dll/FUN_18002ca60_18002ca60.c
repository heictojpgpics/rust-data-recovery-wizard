// Function: FUN_18002ca60
// Address: 18002ca60
// Size: 454 bytes


longlong FUN_18002ca60(longlong *param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *_Memory;
  ulonglong uVar8;
  void *_Dst;
  longlong lVar9;
  size_t _Size;
  undefined1 local_res8 [8];
  void *local_res10;
  ulonglong local_res20;
  
  lVar4 = *param_1;
  lVar9 = (longlong)param_2 - lVar4 >> 2;
  lVar3 = param_1[1] - lVar4 >> 2;
  if (lVar3 == 0x3fffffffffffffff) {
    FUN_180002bd0();
    pcVar2 = (code *)swi(3);
    lVar4 = (*pcVar2)();
    return lVar4;
  }
  uVar1 = lVar3 + 1;
  uVar5 = param_1[2] - lVar4 >> 2;
  local_res20 = uVar1;
  if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) &&
     (local_res20 = (uVar5 >> 1) + uVar5, local_res20 < uVar1)) {
    local_res20 = uVar1;
  }
  uVar5 = local_res20 * 4;
  if (local_res20 < 0x4000000000000000) {
    uVar8 = uVar5;
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_18002be40(uVar5);
      }
      goto LAB_18002cb4f;
    }
  }
  else {
    uVar8 = 0xffffffffffffffff;
  }
  uVar6 = uVar8 + 0x27;
  if (uVar6 <= uVar8) {
    uVar6 = 0xffffffffffffffff;
  }
  lVar4 = FUN_18002be40(uVar6);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar4;
LAB_18002cb4f:
  *(undefined4 *)((longlong)_Dst + lVar9 * 4) = *param_3;
  pvVar7 = (void *)param_1[1];
  local_res10 = _Dst;
  if (param_2 == pvVar7) {
    param_2 = (void *)*param_1;
    FUN_180002ca0(local_res8);
    _Size = (longlong)pvVar7 - (longlong)param_2;
    pvVar7 = _Dst;
  }
  else {
    pvVar7 = (void *)*param_1;
    FUN_180002ca0(local_res8);
    memmove(_Dst,pvVar7,(longlong)param_2 - (longlong)pvVar7);
    lVar4 = param_1[1];
    pvVar7 = (void *)((longlong)_Dst + (lVar9 + 1) * 4);
    FUN_180002ca0(local_res8);
    _Size = lVar4 - (longlong)param_2;
  }
  memmove(pvVar7,param_2,_Size);
  pvVar7 = (void *)*param_1;
  if (pvVar7 != (void *)0x0) {
    _Memory = pvVar7;
    if ((0xfff < (param_1[2] - (longlong)pvVar7 & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 4);
  param_1[2] = (longlong)((longlong)_Dst + uVar5);
  return *param_1 + lVar9 * 4;
}

