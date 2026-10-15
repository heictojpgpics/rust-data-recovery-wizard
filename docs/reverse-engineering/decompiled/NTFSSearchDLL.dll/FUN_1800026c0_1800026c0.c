// Function: FUN_1800026c0
// Address: 1800026c0
// Size: 335 bytes


longlong * FUN_1800026c0(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Memory;
  ulonglong uVar8;
  void *_Dst;
  
  uVar1 = param_1[3];
  if (uVar1 < param_3) {
    if (0x7fffffffffffffff < param_3) {
      FUN_180002c50();
      pcVar3 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar3)();
      return plVar5;
    }
    uVar6 = param_3 | 0xf;
    uVar8 = 0x7fffffffffffffff;
    if (((uVar6 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
       (uVar7 = (uVar1 >> 1) + uVar1, uVar8 = uVar6, uVar6 < uVar7)) {
      uVar8 = uVar7;
    }
    uVar6 = uVar8 + 1;
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_18002be40(uVar6);
      }
    }
    else {
      uVar7 = uVar8 + 0x28;
      if (uVar7 <= uVar6) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar4 = FUN_18002be40(uVar7);
      if (lVar4 == 0) goto LAB_180002803;
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
    param_1[2] = param_3;
    param_1[3] = uVar8;
    memcpy(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    if (0xf < uVar1) {
      pvVar2 = (void *)*param_1;
      _Memory = pvVar2;
      if ((0xfff < uVar1 + 1) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
LAB_180002803:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar5 = param_1;
    if (0xf < uVar1) {
      plVar5 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar5,param_2,param_3);
    *(undefined1 *)((longlong)plVar5 + param_3) = 0;
  }
  return param_1;
}

