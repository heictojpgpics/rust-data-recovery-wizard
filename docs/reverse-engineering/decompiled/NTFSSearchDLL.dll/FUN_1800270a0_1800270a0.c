// Function: FUN_1800270a0
// Address: 1800270a0
// Size: 181 bytes


void * FUN_1800270a0(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  plVar1 = *(longlong **)((longlong)param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    FUN_180027b30((longlong *)((longlong)param_1 + 8));
  }
  plVar1 = (longlong *)((longlong)param_1 + 8);
  plVar2 = (longlong *)*plVar1;
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  if (_Memory != (longlong *)*plVar1) {
    do {
      plVar2 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar2;
    } while (plVar2 != (longlong *)*plVar1);
  }
  free((void *)*plVar1);
  free(param_1);
  return param_1;
}

