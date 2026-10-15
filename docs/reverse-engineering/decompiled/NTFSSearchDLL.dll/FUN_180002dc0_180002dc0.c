// Function: FUN_180002dc0
// Address: 180002dc0
// Size: 272 bytes


undefined8 * FUN_180002dc0(undefined8 *param_1,ulonglong param_2)

{
  void *_Memory;
  longlong *_Memory_00;
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory_01;
  
  *param_1 = CNTFSFileProperties::vftable;
  if (*(void **)((longlong)param_1 + 0x11) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x11));
    *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  }
  _Memory = (void *)param_1[9];
  if (_Memory != (void *)0x0) {
    if (*(void **)((longlong)_Memory + 8) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 8));
    }
    free(_Memory);
    param_1[9] = 0;
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    FUN_180003c80((longlong *)param_1[10]);
    _Memory_00 = (longlong *)param_1[10];
    if (_Memory_00 != (longlong *)0x0) {
      plVar2 = (longlong *)*_Memory_00;
      _Memory_01 = (longlong *)*plVar2;
      *plVar2 = (longlong)plVar2;
      *(longlong *)(*_Memory_00 + 8) = *_Memory_00;
      _Memory_00[1] = 0;
      plVar2 = (longlong *)*_Memory_00;
      if (_Memory_01 != plVar2) {
        do {
          plVar1 = (longlong *)*_Memory_01;
          free(_Memory_01);
          plVar2 = (longlong *)*_Memory_00;
          _Memory_01 = plVar1;
        } while (plVar1 != plVar2);
      }
      free(plVar2);
      free(_Memory_00);
    }
    param_1[10] = 0;
  }
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

