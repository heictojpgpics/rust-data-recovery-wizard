// Function: FUN_180032c30
// Address: 180032c30
// Size: 125 bytes


longlong * FUN_180032c30(undefined8 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong local_res18;
  ulonglong local_res20;
  
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_res18 = 2;
  local_res20 = param_1[2];
  puVar1 = FUN_180002960(&local_res18,&local_res20);
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_1800026c0(param_2,param_1,*puVar1);
  return param_2;
}

