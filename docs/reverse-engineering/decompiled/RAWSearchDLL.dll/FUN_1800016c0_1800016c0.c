// Function: FUN_1800016c0
// Address: 1800016c0
// Size: 188 bytes


void FUN_1800016c0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  void *_Memory;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_1800016c0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    if (7 < (ulonglong)param_2[7]) {
      pvVar3 = (void *)param_2[4];
      _Memory = pvVar3;
      if ((0xfff < param_2[7] * 2 + 2U) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_2[6] = 0;
    param_2[7] = 7;
    *(undefined2 *)(param_2 + 4) = 0;
    free(param_2);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_2 = plVar2;
  } while( true );
}

