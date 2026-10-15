// Function: FUN_180031000
// Address: 180031000
// Size: 112 bytes


longlong FUN_180031000(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}

