// Function: FUN_18000bcb0
// Address: 18000bcb0
// Size: 241 bytes


undefined8 * FUN_18000bcb0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory;
  undefined8 uVar3;
  
  *param_1 = CRAWSearchController::vftable;
  if ((void *)param_1[0x1c] != (void *)0x0) {
    free((void *)param_1[0x1c]);
    param_1[0x1c] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  if ((void *)param_1[0x23] != (void *)0x0) {
    free((void *)param_1[0x23]);
    param_1[0x23] = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  plVar1 = param_1 + 0x1f;
  plVar2 = (longlong *)*plVar1;
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  param_1[0x20] = 0;
  if (_Memory != (longlong *)*plVar1) {
    do {
      plVar2 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar2;
    } while (plVar2 != (longlong *)*plVar1);
  }
  uVar3 = 0x18;
  free((void *)*plVar1);
  FUN_18000b9a0(param_1,uVar3,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

