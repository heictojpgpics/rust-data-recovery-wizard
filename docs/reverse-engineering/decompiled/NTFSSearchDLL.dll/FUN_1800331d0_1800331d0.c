// Function: FUN_1800331d0
// Address: 1800331d0
// Size: 511 bytes


void FUN_1800331d0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  size_t sVar6;
  void *pvVar7;
  size_t sVar8;
  ulonglong uVar9;
  void *_Dst;
  ulonglong uVar10;
  undefined8 local_res10;
  
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 1;
  if (uVar5 != 0) {
    uVar3 = uVar5;
  }
  for (; (uVar9 = uVar3 - uVar5, local_res10 = param_2, uVar9 == 0 || (uVar3 < 8));
      uVar3 = uVar3 * 2) {
    if (0xfffffffffffffff - uVar3 < uVar3) {
      FUN_1800333d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = uVar3 * 8;
  uVar10 = *(ulonglong *)(param_1 + 0x18) >> 1;
  if (uVar3 < 0x2000000000000000) {
    if (0xfff < uVar5) goto LAB_180033263;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_18002be40(uVar5);
    }
  }
  else {
    uVar5 = 0xffffffffffffffff;
LAB_180033263:
    uVar3 = uVar5 + 0x27;
    if (uVar3 <= uVar5) {
      uVar3 = 0xffffffffffffffff;
    }
    lVar2 = FUN_18002be40(uVar3);
    if (lVar2 == 0) goto LAB_1800333c3;
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  sVar8 = uVar10 * 8;
  pvVar4 = (void *)(lVar2 + sVar8);
  FUN_180002ca0((undefined1 *)&local_res10);
  sVar6 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar4) + lVar2;
  memmove((void *)(sVar8 + (longlong)_Dst),pvVar4,sVar6);
  pvVar4 = *(void **)(param_1 + 8);
  pvVar7 = (void *)(sVar6 + (longlong)(sVar8 + (longlong)_Dst));
  FUN_180002ca0((undefined1 *)&local_res10);
  if (uVar9 < uVar10) {
    sVar6 = uVar9 * 8;
    memmove(pvVar7,pvVar4,sVar6);
    lVar2 = *(longlong *)(param_1 + 8);
    pvVar4 = (void *)(sVar6 + lVar2);
    FUN_180002ca0((undefined1 *)&local_res10);
    sVar8 = (lVar2 - (longlong)pvVar4) + sVar8;
    memmove(_Dst,pvVar4,sVar8);
    pvVar4 = (void *)(sVar8 + (longlong)_Dst);
  }
  else {
    memmove(pvVar7,pvVar4,sVar8);
    memset((void *)(sVar8 + (longlong)pvVar7),0,(uVar9 - uVar10) * 8);
    pvVar4 = _Dst;
    sVar6 = sVar8;
  }
  memset(pvVar4,0,sVar6);
  pvVar4 = *(void **)(param_1 + 8);
  if (pvVar4 != (void *)0x0) {
    pvVar7 = pvVar4;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (pvVar7 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar7)))) {
LAB_1800333c3:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar9;
  return;
}

