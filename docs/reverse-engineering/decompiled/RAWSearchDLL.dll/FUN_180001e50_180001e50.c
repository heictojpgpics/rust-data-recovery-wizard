// Function: FUN_180001e50
// Address: 180001e50
// Size: 439 bytes


longlong FUN_180001e50(longlong *param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong uVar9;
  void *_Dst;
  longlong lVar10;
  size_t _Size;
  undefined1 local_res8 [8];
  void *local_res10;
  ulonglong local_res20;
  
  lVar4 = *param_1;
  lVar10 = (longlong)param_2 - lVar4 >> 2;
  lVar3 = param_1[1] - lVar4 >> 2;
  if (lVar3 == 0x3fffffffffffffff) {
    FUN_180002090();
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
    uVar9 = uVar5;
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_1800020c0(uVar5);
      }
      goto LAB_180001f3f;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
  }
  uVar6 = uVar9 + 0x27;
  if (uVar6 <= uVar9) {
    uVar6 = 0xffffffffffffffff;
  }
  lVar4 = FUN_1800020c0(uVar6);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar4;
LAB_180001f3f:
  *(undefined4 *)((longlong)_Dst + lVar10 * 4) = *param_3;
  pvVar7 = (void *)param_1[1];
  pvVar8 = (void *)*param_1;
  local_res10 = _Dst;
  FUN_1800020b0(local_res8);
  if (param_2 == pvVar7) {
    _Size = (longlong)pvVar7 - (longlong)pvVar8;
    pvVar7 = _Dst;
    param_2 = pvVar8;
  }
  else {
    memmove(_Dst,pvVar8,(longlong)param_2 - (longlong)pvVar8);
    lVar4 = param_1[1];
    pvVar7 = (void *)((longlong)_Dst + (lVar10 + 1) * 4);
    FUN_1800020b0(local_res8);
    _Size = lVar4 - (longlong)param_2;
  }
  memmove(pvVar7,param_2,_Size);
  pvVar7 = (void *)*param_1;
  if (pvVar7 != (void *)0x0) {
    pvVar8 = pvVar7;
    if ((0xfff < (param_1[2] - (longlong)pvVar7 & 0xfffffffffffffffcU)) &&
       (pvVar8 = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 4);
  param_1[2] = (longlong)(uVar5 + (longlong)_Dst);
  return *param_1 + lVar10 * 4;
}

