// Function: FUN_180041cf0
// Address: 180041cf0
// Size: 249 bytes


longlong * FUN_180041cf0(longlong *param_1,int *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = (longlong)param_2;
  *(int *)(param_1 + 1) = param_4;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_180041bb0(param_2,param_3);
    if ((int)uVar1 == 0) {
      *param_1 = 0;
    }
    else {
      if (param_4 == 0) {
        *param_1 = (longlong)param_2;
      }
      else {
        lVar2 = thunk_FUN_18002be40((longlong)param_3);
        *param_1 = lVar2;
        memcpy((void *)*param_1,param_2,(longlong)param_3);
      }
      uVar1 = FUN_1800411f0(*param_1,param_3);
      if ((int)uVar1 != 0) {
        FUN_180041a20(*param_1,param_3);
        *(undefined4 *)((longlong)param_1 + 0xc) = 1;
      }
    }
  }
  return param_1;
}

