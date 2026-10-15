// Function: FUN_180026f20
// Address: 180026f20
// Size: 141 bytes


void FUN_180026f20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *_Memory;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    FUN_180027b30((longlong *)(param_1 + 8));
  }
  plVar2 = (longlong *)(param_1 + 8);
  plVar1 = (longlong *)*plVar2;
  _Memory = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*plVar2 + 8) = *plVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (_Memory != (longlong *)*plVar2) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != (longlong *)*plVar2);
  }
  free((void *)*plVar2);
  return;
}

