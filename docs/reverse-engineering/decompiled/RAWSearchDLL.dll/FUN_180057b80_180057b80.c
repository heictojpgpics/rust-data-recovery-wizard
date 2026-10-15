// Function: FUN_180057b80
// Address: 180057b80
// Size: 319 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180057b80(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong uStack_38;
  void *local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_58 = 0xfffffffffffffffe;
  local_10 = DAT_18008f028 ^ (ulonglong)auStack_78;
  FUN_180057cd0(param_1,param_2,param_3,param_4);
  pbVar2 = (byte *)FUN_180006f90(param_2);
  plVar3 = FUN_18005d300(pbVar2,(undefined8 *)(param_1 + 0x20));
  *(longlong **)(param_1 + 8) = plVar3;
  *(longlong **)(param_1 + 0x18) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    pvVar5 = *(void **)(param_1 + 0x20);
    lVar4 = FUN_180007000((longlong)local_30,"prase json string error at ");
    plVar3 = (longlong *)FUN_180009c50((longlong)&local_50,lVar4,pvVar5);
    FUN_180019970((longlong *)(param_1 + 0x28),plVar3);
    if (0xf < uStack_38) {
      pvVar1 = (void *)CONCAT71(uStack_4f,local_50);
      pvVar5 = pvVar1;
      if ((0xfff < uStack_38 + 1) &&
         (pvVar5 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar5);
    }
    local_40 = _DAT_18006ee90;
    uStack_38 = _UNK_18006ee98;
    local_50 = 0;
    if (0xf < local_18) {
      pvVar5 = local_30[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar5 = *(void **)((longlong)local_30[0] + -8),
         0x1f < (ulonglong)((longlong)local_30[0] + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar5);
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_78);
  return;
}

