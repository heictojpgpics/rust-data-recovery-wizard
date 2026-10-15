// Function: FUN_180021fd0
// Address: 180021fd0
// Size: 414 bytes


longlong FUN_180021fd0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  void *_Memory;
  void *_Dst;
  ulonglong uVar11;
  ulonglong local_res10 [2];
  undefined1 local_res20 [8];
  ulonglong local_38 [2];
  
  local_res10[0] = 0xfffffffffffffffe;
  local_res20[0] = param_4;
  uVar4 = FUN_1800012f0();
  local_38[0] = uVar4;
  puVar5 = FUN_180001e40(local_38,local_res10);
  if (*puVar5 < param_2) {
    FUN_180008bd0();
    pcVar3 = (code *)swi(3);
    lVar7 = (*pcVar3)();
    return lVar7;
  }
  plVar6 = (longlong *)FUN_1800016b0(param_1);
  local_res10[0] = 0xfffffffffffffffe;
  uVar1 = plVar6[3];
  local_38[0] = uVar4;
  puVar5 = FUN_180001e40(local_38,local_res10);
  uVar11 = param_2 | 0xf;
  uVar4 = *puVar5;
  if (uVar11 <= uVar4) {
    uVar10 = *(ulonglong *)(param_1 + 0x18);
    if ((uVar10 <= uVar4 - (uVar10 >> 1)) &&
       (uVar10 = (uVar10 >> 1) + uVar10, uVar4 = uVar11, uVar11 < uVar10)) {
      uVar4 = uVar10;
    }
  }
  uVar11 = uVar4 + 1;
  if (uVar11 < 0x1000) {
    if (uVar11 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_1800020c0(uVar11);
    }
  }
  else {
    uVar10 = uVar4 + 0x28;
    if (uVar10 <= uVar11) {
      uVar10 = 0xffffffffffffffff;
    }
    lVar7 = FUN_1800020c0(uVar10);
    if (lVar7 == 0) goto LAB_180022130;
    _Dst = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar7;
  }
  plVar6[2] = param_2;
  plVar6[3] = uVar4;
  memset(_Dst,0,param_2);
  local_res20[0] = 0;
  FUN_180001300((undefined1 *)((longlong)_Dst + param_2),local_res20);
  if (uVar1 < 0x10) {
    uVar8 = FUN_1800016b0(plVar6);
    puVar9 = (undefined8 *)FUN_1800012e0(plVar6,uVar8);
    *puVar9 = _Dst;
  }
  else {
    pvVar2 = (void *)*plVar6;
    _Memory = pvVar2;
    if ((0xfff < uVar1 + 1) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
LAB_180022130:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *plVar6 = (longlong)_Dst;
  }
  return param_1;
}

