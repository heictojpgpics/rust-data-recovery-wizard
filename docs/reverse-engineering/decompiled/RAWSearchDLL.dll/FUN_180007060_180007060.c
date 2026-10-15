// Function: FUN_180007060
// Address: 180007060
// Size: 291 bytes


longlong FUN_180007060(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  void *_Dst;
  ulonglong uVar9;
  ulonglong local_res8;
  ulonglong local_res10;
  
  lVar5 = param_1;
  puVar7 = param_2;
  FUN_180001780(param_1);
  puVar3 = (undefined8 *)FUN_1800016b0(lVar5);
  uVar2 = puVar7[2];
  if (0xf < (ulonglong)puVar7[3]) {
    param_2 = (undefined8 *)*puVar7;
  }
  if (uVar2 < 0x10) {
    uVar6 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar6;
    uVar9 = 0xf;
  }
  else {
    local_res8 = 0xfffffffffffffffe;
    local_res10 = FUN_1800012f0();
    puVar4 = FUN_180001e40(&local_res10,&local_res8);
    local_res8 = *puVar4;
    local_res10 = uVar2 | 0xf;
    puVar4 = FUN_180001e40(&local_res10,&local_res8);
    uVar9 = *puVar4;
    uVar1 = uVar9 + 1;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_1800020c0(uVar1);
      }
    }
    else {
      uVar8 = uVar9 + 0x28;
      if (uVar8 <= uVar1) {
        uVar8 = 0xffffffffffffffff;
      }
      lVar5 = FUN_1800020c0(uVar8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar5;
    }
    puVar7 = puVar3;
    uVar6 = FUN_1800016b0(puVar3);
    puVar7 = (undefined8 *)FUN_1800012e0(puVar7,uVar6);
    *puVar7 = _Dst;
    memcpy(_Dst,param_2,uVar2 + 1);
  }
  puVar3[2] = uVar2;
  puVar3[3] = uVar9;
  return param_1;
}

