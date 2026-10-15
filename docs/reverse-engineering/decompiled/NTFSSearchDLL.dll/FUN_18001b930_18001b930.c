// Function: FUN_18001b930
// Address: 18001b930
// Size: 130 bytes


void FUN_18001b930(undefined1 *param_1)

{
  longlong *plVar1;
  void *_Memory;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_180011140((longlong *)(param_1 + 0x60));
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x138))(plVar1,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  _Memory = *(void **)(param_1 + 0x38);
  if (_Memory != (void *)0x0) {
    FUN_180029390((longlong)_Memory);
    free(_Memory);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

