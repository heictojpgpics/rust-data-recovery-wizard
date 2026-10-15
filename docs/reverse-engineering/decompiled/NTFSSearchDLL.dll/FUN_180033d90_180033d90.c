// Function: FUN_180033d90
// Address: 180033d90
// Size: 329 bytes


longlong FUN_180033d90(longlong *param_1,void *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *pvVar5;
  void *_Src;
  ulonglong uVar6;
  void *_Dst;
  size_t _Size;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  void *local_res10;
  ulonglong local_res20;
  
  lVar4 = *param_1;
  lVar8 = (longlong)param_2 - lVar4;
  if (param_1[1] - lVar4 == 0x7fffffffffffffff) {
    FUN_180002bd0();
    pcVar2 = (code *)swi(3);
    lVar4 = (*pcVar2)();
    return lVar4;
  }
  uVar1 = (param_1[1] - lVar4) + 1;
  uVar3 = param_1[2] - lVar4;
  uVar6 = uVar1;
  if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) && (uVar6 = (uVar3 >> 1) + uVar3, uVar6 < uVar1))
  {
    uVar6 = uVar1;
  }
  local_res20 = uVar6;
  if (uVar6 < 0x1000) {
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_18002be40(uVar6);
    }
  }
  else {
    uVar3 = uVar6 + 0x27;
    if (uVar3 <= uVar6) {
      uVar3 = 0xffffffffffffffff;
    }
    lVar4 = FUN_18002be40(uVar3);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar4;
  }
  *(undefined1 *)((longlong)_Dst + lVar8) = *param_3;
  pvVar5 = (void *)param_1[1];
  _Src = (void *)*param_1;
  local_res10 = _Dst;
  FUN_180002ca0(local_res8);
  if (param_2 == pvVar5) {
    _Size = (longlong)pvVar5 - (longlong)_Src;
    pvVar5 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    lVar7 = param_1[1];
    lVar4 = lVar8 + 1;
    FUN_180002ca0(local_res8);
    _Size = lVar7 - (longlong)param_2;
    pvVar5 = (void *)(lVar4 + (longlong)_Dst);
  }
  memmove(pvVar5,param_2,_Size);
  FUN_180006300(param_1,(longlong)_Dst,uVar1,uVar6);
  return *param_1 + lVar8;
}

