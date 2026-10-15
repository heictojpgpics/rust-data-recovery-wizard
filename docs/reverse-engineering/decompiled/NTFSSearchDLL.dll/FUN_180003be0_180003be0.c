// Function: FUN_180003be0
// Address: 180003be0
// Size: 59 bytes


longlong * FUN_180003be0(longlong *param_1,void *param_2)

{
  size_t sVar1;
  
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar1 = 0xffffffffffffffff;
  *(undefined1 *)param_1 = 0;
  do {
    sVar1 = sVar1 + 1;
  } while (*(char *)((longlong)param_2 + sVar1) != '\0');
  FUN_1800026c0(param_1,param_2,sVar1);
  return param_1;
}

