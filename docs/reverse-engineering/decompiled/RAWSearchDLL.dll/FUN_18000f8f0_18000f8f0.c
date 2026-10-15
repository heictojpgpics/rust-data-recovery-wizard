// Function: FUN_18000f8f0
// Address: 18000f8f0
// Size: 475 bytes


longlong FUN_18000f8f0(longlong param_1,ulonglong param_2,undefined1 param_3,void *param_4)

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
  void *_Memory;
  ulonglong uVar10;
  void *_Dst;
  ulonglong uVar11;
  ulonglong local_res10;
  undefined2 local_res18 [8];
  ulonglong local_48 [2];
  
  local_res18[0] = CONCAT11(local_res18[0]._1_1_,param_3);
  uVar11 = 0x7ffffffffffffffe;
  local_res10 = 0x7ffffffffffffffe;
  uVar4 = FUN_1800012f0();
  local_48[0] = uVar4;
  puVar5 = FUN_180001e40(local_48,&local_res10);
  if (*puVar5 < param_2) {
    FUN_180008bd0();
    pcVar3 = (code *)swi(3);
    lVar7 = (*pcVar3)();
    return lVar7;
  }
  plVar6 = (longlong *)FUN_1800016b0(param_1);
  uVar1 = plVar6[3];
  local_res10 = uVar11;
  local_48[0] = uVar4;
  puVar5 = FUN_180001e40(local_48,&local_res10);
  uVar11 = param_2 | 7;
  uVar4 = *puVar5;
  if (uVar11 <= uVar4) {
    uVar10 = *(ulonglong *)(param_1 + 0x18);
    if ((uVar10 <= uVar4 - (uVar10 >> 1)) &&
       (uVar10 = (uVar10 >> 1) + uVar10, uVar4 = uVar11, uVar11 < uVar10)) {
      uVar4 = uVar10;
    }
  }
  _Dst = (void *)0x0;
  uVar11 = (uVar4 + 1) * 2;
  uVar10 = 0xffffffffffffffff;
  if ((uVar4 + 1 < 0x8000000000000000) && (uVar10 = uVar11, uVar11 < 0x1000)) {
    if (uVar11 != 0) {
      _Dst = (void *)FUN_1800020c0(uVar11);
    }
  }
  else {
    uVar11 = uVar10 + 0x27;
    if (uVar10 + 0x27 <= uVar10) {
      uVar11 = 0xffffffffffffffff;
    }
    lVar7 = FUN_1800020c0(uVar11);
    if (lVar7 == 0) goto LAB_18000fa86;
    _Dst = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar7;
  }
  plVar6[3] = uVar4;
  plVar6[2] = param_2;
  memcpy(_Dst,param_4,param_2 * 2);
  local_res18[0] = 0;
  FUN_180001790((undefined2 *)(param_2 * 2 + (longlong)_Dst),local_res18);
  if (uVar1 < 8) {
    uVar8 = FUN_1800016b0(plVar6);
    puVar9 = (undefined8 *)FUN_1800012e0(plVar6,uVar8);
    *puVar9 = _Dst;
  }
  else {
    pvVar2 = (void *)*plVar6;
    _Memory = pvVar2;
    if ((0xfff < uVar1 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
LAB_18000fa86:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *plVar6 = (longlong)_Dst;
  }
  return param_1;
}

