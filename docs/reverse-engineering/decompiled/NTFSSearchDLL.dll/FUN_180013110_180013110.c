// Function: FUN_180013110
// Address: 180013110
// Size: 191 bytes


void FUN_180013110(undefined8 param_1,longlong *param_2)

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
    FUN_180013110(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    pvVar3 = (void *)param_2[5];
    if (pvVar3 != (void *)0x0) {
      _Memory = pvVar3;
      if ((0xfff < (param_2[7] - (longlong)pvVar3 & 0xfffffffffffffff8U)) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
    free(param_2);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_2 = plVar2;
  } while( true );
}

