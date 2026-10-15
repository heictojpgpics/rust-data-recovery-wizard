// Function: FUN_180026720
// Address: 180026720
// Size: 338 bytes


void FUN_180026720(longlong *param_1)

{
  void *_Memory;
  longlong *plVar1;
  longlong *_Memory_00;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != plVar1) {
    do {
      _Memory = (void *)plVar2[2];
      if (_Memory != (void *)0x0) {
        ~_String_alloc<>((longlong *)((longlong)_Memory + 8));
        free(_Memory);
      }
      plVar2 = (longlong *)*plVar2;
      plVar1 = (longlong *)*param_1;
    } while (plVar2 != plVar1);
    plVar2 = (longlong *)*plVar1;
  }
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar2 != (longlong *)*param_1) {
    do {
      plVar1 = (longlong *)*plVar2;
      free(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)*param_1);
  }
  plVar1 = param_1 + 2;
  plVar2 = (longlong *)*plVar1;
  _Memory_00 = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  param_1[3] = 0;
  if (_Memory_00 != (longlong *)*plVar1) {
    do {
      plVar2 = (longlong *)*_Memory_00;
      free(_Memory_00);
      _Memory_00 = plVar2;
    } while (plVar2 != (longlong *)*plVar1);
  }
  free((void *)*plVar1);
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar2 != (longlong *)*param_1) {
    do {
      plVar1 = (longlong *)*plVar2;
      free(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)*param_1);
  }
  free((void *)*param_1);
  return;
}

