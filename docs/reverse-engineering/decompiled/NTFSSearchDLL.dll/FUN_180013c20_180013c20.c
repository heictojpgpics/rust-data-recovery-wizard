// Function: FUN_180013c20
// Address: 180013c20
// Size: 48 bytes


longlong FUN_180013c20(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (param_2 - (longlong)param_1) + (longlong)param_3;
}

