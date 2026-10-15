// Function: FUN_180016060
// Address: 180016060
// Size: 386 bytes


void FUN_180016060(undefined8 *param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  void *_Memory;
  longlong *_Memory_00;
  ulonglong uVar4;
  
  *param_1 = CNTFSQuickSearchBase::vftable;
  param_1[0x4d] = param_1[0x4c];
  plVar1 = param_1 + 99;
  FUN_180011140(plVar1);
  FUN_18001a7f0(param_1 + 0x65,param_2,param_3,param_4);
  FUN_180011140(plVar1);
  free((void *)*plVar1);
  FUN_180018630((longlong)(param_1 + 0x52));
  FUN_180011140(param_1 + 0x4f);
  uVar4 = 0x30;
  free((void *)param_1[0x4f]);
  pvVar2 = (void *)param_1[0x4c];
  if (pvVar2 != (void *)0x0) {
    uVar4 = (param_1[0x4e] - (longlong)pvVar2 >> 3) * 8;
    _Memory = pvVar2;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      _Memory = *(void **)((longlong)pvVar2 + -8);
      param_3 = _Memory;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(_Memory);
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
  }
  FUN_18001b8a0((undefined1 *)(param_1 + 0x3b),uVar4,param_3,param_4);
  plVar1 = param_1 + 0x39;
  plVar3 = (longlong *)*plVar1;
  _Memory_00 = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  param_1[0x3a] = 0;
  if (_Memory_00 != (longlong *)*plVar1) {
    do {
      plVar3 = (longlong *)*_Memory_00;
      free(_Memory_00);
      _Memory_00 = plVar3;
    } while (plVar3 != (longlong *)*plVar1);
  }
  free((void *)*plVar1);
  FUN_180039610(param_1 + 4);
  return;
}

