// Function: FUN_180021d80
// Address: 180021d80
// Size: 581 bytes


longlong FUN_180021d80(longlong param_1,ulonglong param_2,undefined1 param_3,void *param_4,
                      longlong param_5)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  void *_Src;
  code *pcVar3;
  size_t _Size;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *_Dst;
  void *_Memory;
  ulonglong uVar11;
  ulonglong local_res10;
  undefined2 local_res18 [4];
  void *local_res20;
  ulonglong local_48 [2];
  
  local_res18[0] = CONCAT11(local_res18[0]._1_1_,param_3);
  local_res20 = param_4;
  puVar4 = (undefined8 *)FUN_1800016b0(param_1);
  uVar11 = 0x7ffffffffffffffe;
  local_res10 = 0x7ffffffffffffffe;
  lVar9 = puVar4[2];
  uVar5 = FUN_1800012f0();
  local_48[0] = uVar5;
  puVar6 = FUN_180001e40(local_48,&local_res10);
  if (*puVar6 - lVar9 < param_2) {
    FUN_180008bd0();
    pcVar3 = (code *)swi(3);
    lVar9 = (*pcVar3)();
    return lVar9;
  }
  uVar2 = puVar4[3];
  local_res10 = uVar11;
  local_48[0] = uVar5;
  puVar6 = FUN_180001e40(local_48,&local_res10);
  uVar11 = lVar9 + param_2 | 7;
  uVar5 = *puVar6;
  if (uVar11 <= uVar5) {
    uVar10 = *(ulonglong *)(param_1 + 0x18);
    if ((uVar10 <= uVar5 - (uVar10 >> 1)) &&
       (uVar10 = (uVar10 >> 1) + uVar10, uVar5 = uVar11, uVar11 < uVar10)) {
      uVar5 = uVar10;
    }
  }
  _Dst = (void *)0x0;
  uVar11 = (uVar5 + 1) * 2;
  uVar10 = 0xffffffffffffffff;
  if ((uVar5 + 1 < 0x8000000000000000) && (uVar10 = uVar11, uVar11 < 0x1000)) {
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
    if (lVar7 == 0) goto LAB_180021f4c;
    _Dst = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar7;
  }
  _Size = lVar9 * 2;
  puVar4[2] = lVar9 + param_2;
  puVar4[3] = uVar5;
  puVar1 = (undefined2 *)((longlong)_Dst + (param_5 + lVar9) * 2);
  if (uVar2 < 8) {
    memcpy(_Dst,puVar4,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),local_res20,param_5 * 2);
    local_res18[0] = 0;
    FUN_180001790(puVar1,local_res18);
    uVar8 = FUN_1800016b0(puVar4);
    puVar4 = (undefined8 *)FUN_1800012e0(puVar4,uVar8);
    *puVar4 = _Dst;
  }
  else {
    _Src = (void *)*puVar4;
    memcpy(_Dst,_Src,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),local_res20,param_5 * 2);
    local_res18[0] = 0;
    FUN_180001790(puVar1,local_res18);
    _Memory = _Src;
    if ((0xfff < uVar2 * 2 + 2) &&
       (_Memory = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
LAB_180021f4c:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *puVar4 = _Dst;
  }
  return param_1;
}

