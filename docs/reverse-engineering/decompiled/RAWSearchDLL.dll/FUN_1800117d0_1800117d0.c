// Function: FUN_1800117d0
// Address: 1800117d0
// Size: 413 bytes


longlong FUN_1800117d0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  void *_Src;
  code *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *_Memory;
  void *_Dst;
  ulonglong uVar10;
  ulonglong local_res10;
  ulonglong local_res20;
  
  puVar3 = (undefined8 *)FUN_1800016b0(param_1);
  local_res10 = 0xfffffffffffffffe;
  lVar8 = puVar3[2];
  uVar4 = FUN_1800012f0();
  local_res20 = uVar4;
  puVar5 = FUN_180001e40(&local_res20,&local_res10);
  if (*puVar5 - lVar8 < param_2) {
    FUN_180008bd0();
    pcVar2 = (code *)swi(3);
    lVar8 = (*pcVar2)();
    return lVar8;
  }
  uVar1 = puVar3[3];
  local_res10 = 0xfffffffffffffffe;
  local_res20 = uVar4;
  puVar5 = FUN_180001e40(&local_res20,&local_res10);
  uVar10 = lVar8 + param_2 | 0xf;
  uVar4 = *puVar5;
  if (uVar10 <= uVar4) {
    uVar9 = *(ulonglong *)(param_1 + 0x18);
    if ((uVar9 <= uVar4 - (uVar9 >> 1)) &&
       (uVar9 = (uVar9 >> 1) + uVar9, uVar4 = uVar10, uVar10 < uVar9)) {
      uVar4 = uVar9;
    }
  }
  uVar10 = uVar4 + 1;
  if (uVar10 < 0x1000) {
    if (uVar10 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_1800020c0(uVar10);
    }
  }
  else {
    uVar9 = uVar4 + 0x28;
    if (uVar9 <= uVar10) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar6 = FUN_1800020c0(uVar9);
    if (lVar6 == 0) goto LAB_180011926;
    _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar6;
  }
  puVar3[2] = lVar8 + param_2;
  puVar3[3] = uVar4;
  if (uVar1 < 0x10) {
    memcpy(_Dst,puVar3,lVar8 + 1U);
    uVar7 = FUN_1800016b0(puVar3);
    puVar3 = (undefined8 *)FUN_1800012e0(puVar3,uVar7);
    *puVar3 = _Dst;
  }
  else {
    _Src = (void *)*puVar3;
    memcpy(_Dst,_Src,lVar8 + 1U);
    _Memory = _Src;
    if ((0xfff < uVar1 + 1) &&
       (_Memory = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
LAB_180011926:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *puVar3 = _Dst;
  }
  return param_1;
}

