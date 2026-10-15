// Function: FUN_180040620
// Address: 180040620
// Size: 74 bytes


int * FUN_180040620(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    for (iVar1 = 0; iVar1 < 0x1fd; iVar1 = iVar1 + 1) {
      if (((char)*param_1 == (char)DAT_180093908) && (*param_1 == DAT_180093908)) {
        return param_1;
      }
      param_1 = (int *)((longlong)param_1 + 1);
    }
  }
  return (int *)0x0;
}

