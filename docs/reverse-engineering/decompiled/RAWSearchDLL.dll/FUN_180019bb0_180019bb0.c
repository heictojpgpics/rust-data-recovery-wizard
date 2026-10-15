// Function: FUN_180019bb0
// Address: 180019bb0
// Size: 547 bytes


longlong FUN_180019bb0(longlong param_1,ulonglong param_2,undefined8 param_3,size_t param_4,
                      longlong param_5,void *param_6,size_t param_7)

{
  void *_Src;
  code *pcVar1;
  undefined8 *puVar2;
  size_t sVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *pvVar11;
  void *_Dst;
  ulonglong local_res10;
  ulonglong local_38;
  size_t local_30;
  
  puVar2 = (undefined8 *)FUN_1800016b0(param_1);
  local_res10 = 0xfffffffffffffffe;
  lVar7 = puVar2[2];
  sVar3 = FUN_1800012f0();
  local_38 = sVar3;
  puVar4 = FUN_180001e40(&local_38,&local_res10);
  if (*puVar4 - lVar7 < param_2) {
    FUN_180008bd0();
    pcVar1 = (code *)swi(3);
    lVar7 = (*pcVar1)();
    return lVar7;
  }
  local_res10 = puVar2[3];
  local_38 = 0xfffffffffffffffe;
  local_30 = sVar3;
  puVar4 = FUN_180001e40(&local_30,&local_38);
  uVar9 = lVar7 + param_2 | 0xf;
  uVar10 = *puVar4;
  if (uVar9 <= uVar10) {
    uVar8 = *(ulonglong *)(param_1 + 0x18);
    if ((uVar8 <= uVar10 - (uVar8 >> 1)) &&
       (uVar8 = (uVar8 >> 1) + uVar8, uVar10 = uVar9, uVar9 < uVar8)) {
      uVar10 = uVar8;
    }
  }
  uVar9 = uVar10 + 1;
  if (uVar9 < 0x1000) {
    if (uVar9 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_1800020c0(uVar9);
    }
  }
  else {
    uVar8 = uVar10 + 0x28;
    if (uVar8 <= uVar9) {
      uVar8 = 0xffffffffffffffff;
    }
    lVar5 = FUN_1800020c0(uVar8);
    if (lVar5 == 0) goto LAB_180019d64;
    _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar5;
  }
  puVar2[3] = uVar10;
  puVar2[2] = lVar7 + param_2;
  pvVar11 = (void *)((longlong)_Dst + param_4);
  sVar3 = ((lVar7 - param_4) - param_5) + 1;
  local_30 = sVar3;
  if (local_res10 < 0x10) {
    memcpy(_Dst,puVar2,param_4);
    memcpy(pvVar11,param_6,param_7);
    memcpy((void *)((longlong)pvVar11 + param_7),(void *)((longlong)puVar2 + param_5 + param_4),
           sVar3);
    uVar6 = FUN_1800016b0(puVar2);
    puVar2 = (undefined8 *)FUN_1800012e0(puVar2,uVar6);
    *puVar2 = _Dst;
  }
  else {
    _Src = (void *)*puVar2;
    memcpy(_Dst,_Src,param_4);
    memcpy(pvVar11,param_6,param_7);
    memcpy((void *)((longlong)pvVar11 + param_7),(void *)((longlong)_Src + param_5 + param_4),
           local_30);
    pvVar11 = _Src;
    if ((0xfff < local_res10 + 1) &&
       (pvVar11 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar11)))) {
LAB_180019d64:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar11);
    *puVar2 = _Dst;
  }
  return param_1;
}

